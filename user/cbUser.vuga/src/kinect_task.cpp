/*============================================================================
==============================================================================
                      
                              kinect_task.cpp
 
==============================================================================
Remarks:

      Reproduction of human movement estimated by Kinect

============================================================================*/

// SL system headers
#include "SL_system_headers.h"

// SL includes
#include "SL.h"
#include "SL_user.h"
#include "SL_tasks.h"
#include "SL_task_servo.h"
#include "SL_kinematics.h"
#include "SL_dynamics.h"
#include "SL_collect_data.h"
#include "SL_shared_memory.h"
#include "SL_man.h"
#include "SL_filters.h"
#include "SL_common.h"
//#include "SL_for_dynamics_body.h"
#include "SL_terrains.h"
#include "SL_objects.h"

// Local includes
#include "kinect_task.h"

#include <fcntl.h>
#include <arpa/inet.h>
#include <math.h>
// #include <sys/socket.h>

static double freq_factor = 1.0;

// Gains for stability control
static double time_to_msp = 25.0*freq_factor;
// static double K_ankle = 0.025*freq_factor, K_body = 0.0075*freq_factor;
static double K_ankle = 0.0075*freq_factor, K_body = 0.0075*freq_factor;

static double max_KFE = 0.85, min_TFE = 0.05, max_TFE = 0.45, max_TAA = 0.2;
static double factor = 3.0;
static double dist_max = 0.75;

static int servo_rate = SERVO_BASE_RATE / TASK_SERVO_RATIO;

#define MAX_BUFFER  10000
#define KINECT_FREQ 30
static const char *fifo_name = "KinectReaderFIFO";
static int Kinect_pipe = 0;

// #define GENERATE_LEG_MOTION

#define MAX_LENGTH 10*60

#define my_SQR(a) ((a)*(a))
#define my_CUBE(a) ((a)*(a)*(a))

extern "C" {
void cogJacobian(void);
void cogJacobianDes(void);
void cogJacobianRightFoot(int left_leg);         // use: 1, don't use: 0
void cogJacobianRightFootDes(int left_leg);
void ComputeCenterOfPressure(double xcop[]);
void cogJacobianStandard(double cog[]);
}

int mrdplot_write(char *fname, Matrix D, char **vnames, char **units, 
	          double freq, int n_cols, int n_rows);

//! time out for semaphores
#define TIME_OUT_NS 1000000000
static int receive_contacts(void);

kinect_task::kinect_task() : start_time_(0), previous_time_(0)
{
  if (Kinect_pipe != 0)
  {
    close(Kinect_pipe);
    Kinect_pipe = 0;
  }
  task_servo_steps = 0;

  // Set dynamic variables to null
  A = B = JcogNull = FeetNull = V = NULL;
  s = CogVelocity = DesiredVelocity = unconstrained_velocities = u_cog = NULL;

  Kinect_traj = NULL;
  CBi_traj = NULL;
}

kinect_task::~kinect_task()
{
  if (Kinect_pipe > 0)
    close(Kinect_pipe);
  if (A != NULL)
    my_free_matrix(A, 1, N_CART-1, 1, ndofs);
  if (B != NULL)
    my_free_matrix(B, 1, 4*N_CART, 1, ndofs);
  if (JcogNull != NULL)
    my_free_matrix(JcogNull, 1, ndofs, 1, ndofs);
  if (FeetNull != NULL)
    my_free_matrix(FeetNull, 1, ndofs, 1, ndofs);
  if (V != NULL)
    my_free_matrix(V, 1, ndofs, 1, ndofs);
  if (s != NULL)
    my_free_vector(s, 1, ndofs);
  if (CogVelocity != NULL)
    my_free_vector(CogVelocity, 1, ndofs);
  if (DesiredVelocity != NULL)
    my_free_vector(DesiredVelocity, 1, ndofs);
  if (unconstrained_velocities != NULL)
    my_free_vector(unconstrained_velocities, 1, ndofs);
  if (u_cog != NULL)
    my_free_vector(u_cog, 1, msp_dimension);
  
  if (Kinect_traj != NULL);
    my_free_matrix(Kinect_traj, 1, MAX_LENGTH * KINECT_FREQ, 1, Kinect_DOFs);
  if (CBi_traj != NULL);
    my_free_matrix(CBi_traj, 1, MAX_LENGTH * servo_rate, 1, 2*N_DOFS + 1);
}

int kinect_task::initialize()
{
int ans;

  /* check whether any other task is running */
  if (strcmp(current_task_name, NO_TASK) != 0)
  {
    printf("New task can only be run if no other task is running!\n");
    return FALSE;
  }

  // meta parameters
  track = TRUE;              // Reproduce human motion measured by Kinect on a robot
  use_cop = TRUE;            // Use center of pressure for stability control
  data_collection = FALSE;   // Save Kinect and robot trajectory to files
  save_active_dofs = TRUE;   // Save active or all degrees of freedom

  playback = FALSE;          // Directly reproduce Kinect data
  track_legs = FALSE;        // Control legs by Kinect
  track_torso = TRUE;        // Control torso by Kinect
  balance_with_legs = FALSE; // Control legs to improve balance control

  // ensure consistency
  if (playback == TRUE)
  {
    track_legs = track_torso = balance_with_legs = FALSE;
  }
  else if (track_legs == TRUE || track_torso == TRUE)
    balance_with_legs = FALSE;

  // set active degrees of freedom
  control_dofs();

  // prepare Kinect communication
  if (!KinectReader(fifo_name, NULL))
  {
    printf("Communication with Kinect could not be established!\n");
    return FALSE;
  }
  count_Kinect_frames = 0;
  waiting_for_data = 0;
  last_kinect_time = -1.0;
  time1 = time2 = time_kinect1 = time_kinect2 = -1.0;

  // initialize Butterworth filters for Kinect data
  if (!init_filters())
    return FALSE;
  for (int i = 1; i <= N_DOFS; i++)
    fth[i].cutoff = 9;
  filters_initialized = FALSE;
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 4; j++)
      if (i != j)
        initial_torso_pose[i][j] = 0.0;
      else
        initial_torso_pose[i][j] = 1.0;

  // include this file to define contact points (needed to compute center of pressure)
#include "LEKin_contact.h"

  // read the height of the floor
  TerrainInfo tinfo;
  getTerrainInfoZOnly(0.0, 0.0, &tinfo);
  ZMP[3] = tinfo.z;
  MSP[3] = cog.x[_Z_];

  MSP[1] = (Alink[R_OUT_HEEL][1][4] + Alink[L_IN_HEEL][1][4]) /2;
  LSP[1] = Alink[R_OUT_HEEL][1][4];
  MSP[2] = (Alink[R_OUT_HEEL][2][4] + Alink[R_OUT_TOE][2][4]) /2;
  LSP[2] = Alink[R_OUT_HEEL][2][4];

  printf("Most stable point: %.3f %.3f %.3f, least stable point: %.3f, %.3f\n",
         MSP[1], MSP[2], MSP[3], LSP[1], LSP[2]);

  // data collection variables
  Kinect_collection_idx = CBi_collection_idx = 0;
  Kinect_DOFs = 26;

  // setGravity(10.5);

  // prepare going to the initial posture
  bzero((char *)&(target_[1]), N_DOFS*sizeof(target_[1]));
  for (int i = 1; i <= N_DOFS; i++)
    target_[i] = joint_default_state[i];
  target_[L_EB].th = target_[R_EB].th = 0.05;
  target_[B_TFE].th = 0.2; 
  // target_[L_HAA].th = -0.05; target_[R_HAA].th = -0.05; 

  // ready to go
  ans = 0;
  while (ans != 1)
  {
    if (!get_int(const_cast<char*>("Enter 1 to start or 'q' to abort ..."), ans, &ans))
    {
      return FALSE;
    }
  }

  previous_time_ = start_time_ = task_servo_time;
  printf("Servo rate: %d, servo base rate: %d, ratio: %d.\n", servo_rate,
         SERVO_BASE_RATE, TASK_SERVO_RATIO);
  printf("Start time: %.3f, task servo time: %.3f\n", start_time_, task_servo_time);

  // go to the target
  bool there = true;
  for (int i = 1; i <= B_HR; i++)
    if (fabs(target_[i].th - joint_des_state[i].th) > 1.0e-3)
    {
      there = false;
      break;
    }
  if (!there)
    if (!go_target_wait_ID(target_))
    {
      return FALSE;
    }
  printf("Initial position reached. Now start tracking!\n\n");

  // set the desired joint state equal to the commanded joints
  for (int i = 1; i <= N_DOFS; i++)
  {
    joint_des_state[i].th = target_[i].th;
    joint_des_state[i].thd = target_[i].thd = 0;
    joint_des_state[i].thdd = target_[i].thdd = 0;
  }

  // For testing Jacobian matrices
  /* target_[R_HFE].th = joint_des_state[R_HFE].th = target_[L_HFE].th = joint_des_state[L_HFE].th = -0.6;
  target_[R_KFE].th = joint_des_state[R_KFE].th = target_[L_KFE].th = joint_des_state[L_KFE].th = 0.3;
  freezeBase(1); */

  return TRUE;
}

int kinect_task::run()
{
int i, j;
double task_time = task_servo_time - start_time_;
char buffer[MAX_BUFFER];
double time_step = 1.0 / (double) task_servo_rate;

const double freq_ = 0.5, // frequency
             amp_  = 0.3; // amplitude
double omega = 2.0*PI*freq_;

double body_TFE, body_TAA;

#ifdef GENERATE_LEG_MOTION
#include "leg_playback1.h"
#endif

  // Check if new data from Kinect arrived
  if (KinectReader(NULL, buffer) == 720)
  {
    kinect2joint(buffer);

    if (track)
    {
      if (data_collection)
        copy_Kinect_data(task_time);

      // Initialize filtering and legt tracking
      if (!filters_initialized)
      {
        printf("Filter initialization!\n");

        for (i = 1; i <= N_DOFS; i++)
        {
          fth[i].raw[0] = fth[i].raw[1] = fth[i].raw[2] = target_[i].th;
          fth[i].filt[0] = fth[i].filt[1] = fth[i].filt[2] = target_[i].th;
        }
        filters_initialized = TRUE;
        time_kinect1 = time1 = time_kinect2 = time2 = -1.0;
        last_kinect_time = -1.0;
        waiting_for_data = 0;

        // Initialize leg tracking (knee DOFs and offset)
        if (track_legs && !playback && track)
        {
          knee_kinect_initial = target_[R_KFE].th;
          knee_initial = joint_state[R_KFE].th;
          ankle_tilt = 0;

          target_[R_HFE].th = joint_state[R_HFE].th; // only set because we need this in leg_dofs(...)
          leg_dofs(joint_state[R_KFE].th, joint_state[R_HFE].th,
                   joint_state[R_AFE].th, &offset_hip, &offset_ankle);
          target_[R_HFE].th = joint_des_state[R_HFE].th;
        }
      }
      else
      {
        // Filter Kinect data with a Butterworth filter
        for (i = 1; i <= N_DOFS; i++)
          target_[i].th = filt(target_[i].th, &fth[i]);

        // Leg tracking code (adapt knee DOFs and generate ankle and hip motion)
        if (track_legs && !playback && track)
        {
          target_[R_KFE].th = target_[R_KFE].th - knee_kinect_initial + knee_initial;
          if (target_[R_KFE].th > max_KFE)
            target_[R_KFE].th = max_KFE;
          target_[L_KFE].th = target_[R_KFE].th;

          // Calculate hip and ankle flexion-extension from knee joint so that the body tilt
          // remains constant.
          leg_dofs(target_[R_KFE].th, offset_hip, offset_ankle,
                   &(target_[R_HFE].th), &(target_[R_AFE].th));

          target_[L_HFE].th = target_[R_HFE].th;
          target_[L_AFE].th = target_[R_AFE].th;
        }
      }

      // Save Kinect data
      if (data_collection && track_legs)
        copy_more_Kinect_data();

      last_kinect_time = task_time;

      // In this mode we simply copy Kinect trajectories to the robot and exit
      if (playback && track)
      {
        joint_range[R_HFE][MAX_THETA] = joint_range[L_HFE][MAX_THETA] = PI * 45.0 / 180.0;
        for (i = 1; i <= active_dofs[0]; i++)
          if (joint_range[active_dofs[i]][MAX_THETA] < target_[active_dofs[i]].th)
            target_[active_dofs[i]].th = joint_range[active_dofs[i]][MAX_THETA];
          else if (joint_range[active_dofs[i]][MIN_THETA] > target_[active_dofs[i]].th)
            target_[active_dofs[i]].th = joint_range[active_dofs[i]][MIN_THETA];

        kinect_velocities(task_time);
        for (i = 1; i <= active_dofs[0]; i++)
        {
          joint_des_state[active_dofs[i]].th = target_[active_dofs[i]].th;
          joint_des_state[active_dofs[i]].thd = target_[active_dofs[i]].thd;
          joint_des_state[active_dofs[i]].thdd = target_[active_dofs[i]].thdd;
        }

        if (data_collection)
          copy_CBi_data(task_time);

        return TRUE;
      }

      body_tracking_velocities(task_time, 0);
      body_tracking_velocities(task_time, 1);
    }
  }
  else if ((task_time - last_kinect_time) > (3.0 / KINECT_FREQ))
  {
    filters_initialized = FALSE;
    time_kinect1 = time1 = time_kinect2 = time2 = -1.0;
    last_kinect_time = -1.0;
    waiting_for_data++;

    /* if ((waiting_for_data % (2*servo_rate)) == 0)
      printf("No data from Kinect for too long. Now waiting ... \n"); */
  }

// #include "testJacobian.h"

#ifdef GENERATE_LEG_MOTION
#include "leg_playback2.h"
#endif

  if (time_kinect1 >= 0 && time_kinect2 >= 0)
  {
    if (use_cop)
    {
      if (!receive_contacts())
        printf("\n\nERROR!!! Couldn't receive contacts!\n\n");
      ComputeCenterOfPressure(COP);
    }

    if (!balance_with_legs)
      cogJacobian();
    else
    {
      cogJacobianRightFoot(1);
      leftLegInvKin();
    }

    stability_control();

    if (balance_with_legs && track)
    {
      for (i = leg_index; i < leg_index + 14; i++)
        DesiredVelocity[i] = 0;
    }

    for (i = 1; i <= ndofs; i++)
    {
      /* if (active_dofs[i] == B_TFE || active_dofs[i] == B_TAA)
      {
        joint_des_state[active_dofs[i]].th = joint_state[active_dofs[i]].th +
                                             (target_[active_dofs[i]].thd + CogVelocity[i]) * time_step;
        joint_des_state[active_dofs[i]].thd = target_[active_dofs[i]].thd + CogVelocity[i];
      }
      else */
      {
        joint_des_state[active_dofs[i]].th = joint_state[active_dofs[i]].th +
                                             (DesiredVelocity[i] + CogVelocity[i]) * time_step;
        joint_des_state[active_dofs[i]].thd = DesiredVelocity[i] + CogVelocity[i];
      }
    }

    // P controller (with smooth transition) for B_TFE
    if (track_torso && track)
    {
      if (use_cop)
        body_TFE = -K_body * z_n[_Y_] * (MSP[_Y_] - COP[_Y_]);
      else
        body_TFE = -K_body * z_n[_Y_] * (MSP[_Y_] - cog.x[_Y_]);
      joint_des_state[B_TFE].th = joint_state[B_TFE].th +
                                  (1 - z_n[_Y_]) * target_[B_TFE].thd * time_step + body_TFE;
      joint_des_state[B_TFE].thd = (1 - z_n[_Y_]) * target_[B_TFE].thd + body_TFE / time_step;
      if (joint_des_state[B_TFE].th < min_TFE)
      {
        joint_des_state[B_TFE].th = min_TFE;
        joint_des_state[B_TFE].thd = (joint_des_state[B_TFE].th - joint_state[B_TFE].th) / time_step;
      }
      else if (joint_des_state[B_TFE].th > max_TFE)
      {
        joint_des_state[B_TFE].th = max_TFE;
        joint_des_state[B_TFE].thd = (joint_des_state[B_TFE].th - joint_state[B_TFE].th) / time_step;
      }
      // P controller (with smooth transition) for B_TAA
      if (use_cop)
        body_TAA = K_body * z_n[_X_] * (MSP[_X_] - COP[_X_]);
      else
        body_TAA = K_body * z_n[_X_] * (MSP[_X_] - cog.x[_X_]);
      joint_des_state[B_TAA].th = joint_state[B_TAA].th +
                                  (1 - z_n[_X_]) * target_[B_TAA].thd * time_step + body_TAA;
      joint_des_state[B_TAA].thd = (1 - z_n[_X_]) * target_[B_TAA].thd + body_TAA / time_step;
      if (joint_des_state[B_TAA].th < -max_TAA)
      {
        joint_des_state[B_TAA].th = -max_TAA;
        joint_des_state[B_TAA].thd = (joint_des_state[B_TAA].th - joint_state[B_TAA].th) / time_step;
      }
      else if (joint_des_state[B_TAA].th > max_TAA)
      {
        joint_des_state[B_TAA].th = max_TAA;
        joint_des_state[B_TAA].thd = (joint_des_state[B_TAA].th - joint_state[B_TAA].th) / time_step;
      }
    }

    // Control of leg degrees of freedom based on right knee joint
    if (track_legs && track)
    {
      // P controller for the overall body tilt
      if (use_cop)
        ankle_tilt += K_ankle * z_n[_Y_] * (MSP[_Y_] - COP[_Y_]);
      else
        ankle_tilt += K_ankle * z_n[_Y_] * (MSP[_Y_] - cog.x[_Y_]);
      target_[R_AFE].th += ankle_tilt;
      target_[L_AFE].th = target_[R_AFE].th;
      for (i = 1; i <= active_legs_dofs[0]; i++)
      {
        joint_des_state[active_legs_dofs[i]].th = joint_state[active_legs_dofs[i]].th +
                                                 target_[active_legs_dofs[i]].thd * time_step;
        joint_des_state[active_legs_dofs[i]].thd = target_[active_legs_dofs[i]].thd;
      }
    }

    if (data_collection && Kinect_collection_idx > 0)
      copy_CBi_data(task_time);
  }

  task_servo_steps++;
  previous_time_ = task_time;

  if (task_servo_steps % 50 == 0 && cog_printing)
  {
    if (!receive_contacts())
      printf("\n\nERROR!!! Couldn't receive contacts!\n\n");
    ComputeCenterOfPressure(COP);
    printf("%lf %lf, (%lf %f)\n", sqrt(my_SQR(MSP[1] - cog.x[_X_]) + my_SQR(MSP[2] - cog.x[_Y_])),
           z_n[3], MSP[1], MSP[2]);
    printf("Center of Gravity:  %le, %le, %le\nCenter of Pressure: %le, %le, %le\n\n",
            cog.x[_X_], cog.x[_Y_], cog.x[_Z_], COP[_X_], COP[_Y_], COP[_Z_]);
  }

  return TRUE;
}

int kinect_task::changeParameters()
{
static int ans = 0;

  if (ans == 9)
  {
    ans = 0;
    track = FALSE;
    data_collection = FALSE;
    save_data();
    return TRUE;
  }
  do
  {
    ans = 0;
    printf("\nChoose what to change (values in parentheses are current values):\n\n");
    printf("                                                          Do nothing --> 0\n");
    printf("   -----------------------------------------------------------------------\n");
    printf("                   Toggle human motion reproduction on the robot (%d) --> 1\n", track);
    printf("                                              Change initial posture --> 2\n");
    printf("           Toggle using center of pressure for stability control (%d) --> 3\n", use_cop);
    printf("   -----------------------------------------------------------------------\n");
    printf("                                  Direct playback of Kinect data (%d) --> 4\n", playback);
    printf("                                      Leg control by Kinect data (%d) --> 5\n", track_legs);
    printf("                  Torso control (B_TFE and B_TAA) by Kinect data (%d) --> 6\n", track_torso);
    printf("   Control legs to improve balance; Kinect data ignored for legs (%d) --> 7\n", balance_with_legs);
    printf("   -----------------------------------------------------------------------\n");
    printf("                             Save active degrees of freedom only (%d) --> 8\n", save_active_dofs);
    printf("   Start data collection (next ctp stops tracking & data collection) --> 9\n");
    if (!get_int(const_cast<char*>("\n   -------> Input "), ans, &ans))
    {
      return FALSE;
    }
    if (ans < 0 || ans > 9)
      printf("\n\nERROR: Invalid selection\n\n");
  } while (ans < 0 || ans > 9);
  
  switch (ans)
  {
  case 1:
    if (track)
    {
      printf("Human motion reproduction on the robot stopped!\n");
      track = FALSE;
    }
    else
    {
      printf("Human motion reproduction on the robot started!\n");
      control_dofs();
      track = TRUE;
    }
    break;
  case 2:
    if (time_kinect1 >= 0 && time_kinect2 >= 0)
    {
      for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
          initial_torso_pose[i][j] = joint_pose[2][i][j];

      filters_initialized = FALSE;
      time1 = time2 = time_kinect1 = time_kinect2 = -1.0;
      last_kinect_time = -1.0;
    }
    else
    {
      printf("Tracking doesn't work, initial posture could not be set!\n");
    }
    break;
  case 3:
    if (use_cop)
    {
      printf("Now using center of gravity for control.\n");
      use_cop = FALSE;
    }
    else
    {
      printf("Now using center of pressure for control.\n");
      use_cop = TRUE;
    }
    break;
  case 4:
    track = FALSE;
    printf("Human motion reproduction on the robot stopped!\n");
    if (!playback)
    {
      printf("Direct playback of Kinect data started.\n");
      playback = TRUE;
      track_legs = track_torso = FALSE;
      balance_with_legs = FALSE;
    }
    else
    {
      printf("Direct playback of Kinect data stopped.\n");
      playback = FALSE;
    }
    break;
  case 5:
    track = FALSE;
    printf("Human motion reproduction on the robot stopped!\n");
    if (track_legs)
    {
      printf("Legs not controlled by Kinect.\n");
      track_legs = FALSE;
    }
    else
    {
      printf("Legs controlled by input from Kinect.\n");
      track_legs = TRUE;
      playback = balance_with_legs = FALSE;
    }
    break;
  case 6:
    track = FALSE;
    printf("Human motion reproduction on the robot stopped!\n");
    if (balance_with_legs)
    {
      printf("Torso DOFs not controlled by Kinect.\n");
      track_torso = FALSE;
    }
    else
    {
      printf("Torso DOFs controlled by Kinect.\n");
      track_torso = TRUE;
      playback = balance_with_legs = FALSE;
    }
    break;
  case 7:
    track = FALSE;
    printf("Human motion reproduction on the robot stopped!\n");
    if (balance_with_legs)
    {
      printf("Do not balance with legs.\n");
      balance_with_legs = FALSE;
    }
    else
    {
      printf("Balance with legs.\n");
      balance_with_legs = TRUE;
      playback = FALSE;
      track_legs = track_torso = FALSE;
    }
    break;
  case 8:
    if (save_active_dofs)
    {
      printf("Save all degrees of freedom.\n");
      save_active_dofs = FALSE;
    }
    else
    {
      printf("Save only active degrees of freedom.\n");
      save_active_dofs = TRUE;
    }
    break;
  case 9:
    initialize_data_collection();
    if (!track)
    {
      filters_initialized = FALSE;
      time1 = time2 = time_kinect1 = time_kinect2 = -1.0;
      last_kinect_time = -1.0;
      
      /* for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
          initial_torso_pose[i][j] = joint_pose[2][i][j]; */

      control_dofs();
      track = TRUE;
    }
    printf("Data collection started!\n");
    data_collection = TRUE;
    break;
  default:
    break;
  }

  return TRUE;
}

static int receive_contacts(void)
{
  
  int i,j;
  
  if (semTake(sm_contacts_sem,ns2ticks(TIME_OUT_NS)) == ERROR) {

    return FALSE;
    
  } 
  
  for (i=0; i<=n_contacts; ++i) {
    contacts[i].status = sm_contacts->contact[i].status;
    for (j=1; j<=N_CART; ++j)
      contacts[i].f[j] = sm_contacts->contact[i].f[j];
  }
  
  semGive(sm_contacts_sem);
  
  return TRUE;
}

void kinect_task::leg_dofs(double knee_theta, double hip, double ankle, double *hip_theta, double *ankle_theta)
{
double alpha, alpha1;
double euler_angles[4];

  alpha = PI - knee_theta;
  alpha1 = atan2(UPPERLEG - cos(alpha)*LOWERLEG, LOWERLEG*sin(alpha));

  quatToEuler(&base_orient, euler_angles);

  *hip_theta = PI / 2.0 - alpha1 - hip;
  *ankle_theta = euler_angles[1] + knee_theta - target_[R_HFE].th - offset_hip -
                 ankle;
}

int kinect_task::KinectReader(const char *fifo_name, char *buf)
{
int i, j, n, n_tmp;

  // Open pipe to receive data from Kinect
  if (fifo_name != NULL)
  {
    printf("Waiting to open Kinect pipe %s!\n", fifo_name);
    Kinect_pipe = open(fifo_name, O_RDONLY | O_NONBLOCK);
    if (Kinect_pipe <= 0)

    {
      printf("Kinect pipe could not be opened!\n");
      Kinect_pipe = 0;
      return 0;
    }
    printf("Kinect pipe opened for reading, pipe ID %d!\n", Kinect_pipe);

    return 1;
  }

  // Receive data
  if (Kinect_pipe == 0)
    return 0;
  else
  {
    n = 0;
    do
    {
      n_tmp = read(Kinect_pipe, buf, MAX_BUFFER);
      if (n_tmp == 720)
      {
        n = n_tmp;
        if (n < MAX_BUFFER)
          buf[n] = '\0';
        count_Kinect_frames++;
      }
    }
    while (n_tmp > 0);

    if ((task_servo_steps % 500) == 500)
    {
      //printf("time: %lf, number of packets: %d, %d\n", task_servo_time, packet_count, n);
    }
  }

  return n;
}

typedef struct {float x, y, z, w;} Quat; /* Quaternion */
enum QuatPart {X, Y, Z, W};
typedef float HMatrix[4][4]; /* Right-handed, for column vectors */
typedef Quat EulerAngles; 
#define EulOrd(i,p,r,f)	   (((((((i)<<1)+(p))<<1)+(r))<<1)+(f))
#define EulOrdZYXr    EulOrd(X,EulParEven,EulRepNo,EulFrmR)
#define EulOrdXYXr    EulOrd(X,EulParEven,EulRepYes,EulFrmR)
#define EulOrdYZXr    EulOrd(X,EulParOdd,EulRepNo,EulFrmR)
#define EulOrdXZXr    EulOrd(X,EulParOdd,EulRepYes,EulFrmR)
#define EulOrdXZYr    EulOrd(Y,EulParEven,EulRepNo,EulFrmR)
#define EulOrdYZYr    EulOrd(Y,EulParEven,EulRepYes,EulFrmR)
#define EulOrdZXYr    EulOrd(Y,EulParOdd,EulRepNo,EulFrmR)
#define EulOrdYXYr    EulOrd(Y,EulParOdd,EulRepYes,EulFrmR)
#define EulOrdYXZr    EulOrd(Z,EulParEven,EulRepNo,EulFrmR)
#define EulOrdZXZr    EulOrd(Z,EulParEven,EulRepYes,EulFrmR)
#define EulOrdXYZr    EulOrd(Z,EulParOdd,EulRepNo,EulFrmR)
#define EulOrdZYZr    EulOrd(Z,EulParOdd,EulRepYes,EulFrmR)
#define EulParOdd    1
#define EulParEven   0
#define EulFrmR	     1
#define EulFrmS	     0
#define EulRepNo     0
#define EulOrdXYZs    EulOrd(X,EulParEven,EulRepNo,EulFrmS)
#define EulOrdXYXs    EulOrd(X,EulParEven,EulRepYes,EulFrmS)
#define EulOrdXZYs    EulOrd(X,EulParOdd,EulRepNo,EulFrmS)
#define EulOrdXZXs    EulOrd(X,EulParOdd,EulRepYes,EulFrmS)
#define EulOrdYZXs    EulOrd(Y,EulParEven,EulRepNo,EulFrmS)
#define EulOrdYZYs    EulOrd(Y,EulParEven,EulRepYes,EulFrmS)
#define EulOrdYXZs    EulOrd(Y,EulParOdd,EulRepNo,EulFrmS)
#define EulOrdYXYs    EulOrd(Y,EulParOdd,EulRepYes,EulFrmS)
#define EulOrdZXYs    EulOrd(Z,EulParEven,EulRepNo,EulFrmS)
#define EulOrdZXZs    EulOrd(Z,EulParEven,EulRepYes,EulFrmS)
#define EulOrdZYXs    EulOrd(Z,EulParOdd,EulRepNo,EulFrmS)
#define EulOrdZYZs    EulOrd(Z,EulParOdd,EulRepYes,EulFrmS)

extern "C" {
EulerAngles Eul_FromHMatrix(HMatrix M, int order);
}

static void matMultAB(double A[3][4], double B[3][4], double C[3][4])
{
int i, j, k;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      C[i][j] = 0;
      for (k = 0; k < 3; k++)
    	C[i][j] += A[i][k]*B[k][j];
    }
}

static void matMultABt(double A[3][4], double B[3][4], double C[3][4])
{
int i, j, k;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      C[i][j] = 0;
      for (k = 0; k < 3; k++)
    	C[i][j] += A[i][k]*B[j][k];
    }
}

static void rotZ(double fi, double rot45[3][4])
{
  rot45[0][0] = cos(fi); rot45[0][1] = -sin(fi); rot45[0][2] = 0.0;
  rot45[1][0] = sin(fi); rot45[1][1] =  cos(fi); rot45[1][2] = 0.0;
  rot45[2][0] = 0.0;     rot45[2][1] = 0.0;      rot45[2][2] = 1.0;
  rot45[0][3] = rot45[1][3] = rot45[2][3] = 0.0;
}

void kinect_task::kinect2joint(char buffer[])
{
int i, j, k;
char *buffer_pt;

double tmp_rot[3][4], tmp_rot2[3][4];
double elbNum, elbDen; //elbow numerator, denumerator
double rot45[3][4];
HMatrix R;
EulerAngles outAngs = {0,0,0,EulOrdZXYr};
double kneeSt, kneeIm; // knee steve, imenovalec

  buffer_pt = &(buffer[0]);
  for (i = 0; i < 15; i++)
  {
    for (j = 0; j < 3; j++)
    {
      joint_pose[i][j][3] = ((float *) buffer_pt)[0];
      buffer_pt += 4;
    }
    for (k = 0; k < 3; k++)
      for (j = 0; j < 3; j++)
      {
        joint_pose[i][j][k] = ((float *) buffer_pt)[0];
        buffer_pt += 4;
      }
  }

  if ((count_Kinect_frames % 300) == 300)
  {
    printf("Counter %d\n", count_Kinect_frames);
    for (i = 0; i < 15; i++)
    {
      for (j = 0; j < 3; j++)
      {
        for (k = 0; k < 4; k++)
          printf("%lf ", joint_pose[i][j][k]);
        printf("\n");
      }
      printf("\n");
    }
    printf("\n\n");
  }

  for (i = 0; i < 3; i++)
    tmp_rot[i][3] = tmp_rot2[i][3] = 0.0; 

  ////// TORSO ///////////////////////////////////////////////////////////////////

  matMultABt(initial_torso_pose, joint_pose[2], tmp_rot);
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 4; ++j)
      R[i][j] = tmp_rot[i][j];
  R[3][0] = R[3][1] = R[3][2] = 0.0f; R[3][3] = 1.0f;

  outAngs = Eul_FromHMatrix(R, EulOrdXZYr);

  target_[B_TFE].th = -outAngs.x;
  target_[B_TAA].th = -outAngs.y;
  target_[B_TR].th  = -outAngs.z;

  ////// HEAD ///////////////////////////////////////////////////////////////////

  // Not useful because Kinect head measurements are too inaccurate

  /* matMultABt(joint_pose[2], joint_pose[0], tmp_rot);
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 4; ++j)
      R[i][j] = tmp_rot[i][j];
  R[3][0] = R[3][1] = R[3][2] = 0.0f; R[3][3] = 1.0f; */

  ////// RIGHT LEG ///////////////////////////////////////////////////////////////

  // Hip:
  matMultABt(initial_torso_pose, joint_pose[12], tmp_rot);
  // matMultABt(joint_pose[2], joint_pose[12], tmp_rot); // torso*hip^t
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 4; ++j)
      R[i][j] = tmp_rot[i][j];
  R[3][0] = R[3][1] = R[3][2] = 0.0f; R[3][3] = 1.0f;

  outAngs = Eul_FromHMatrix(R, EulOrdZXYr);

  target_[R_HAA].th = -outAngs.x; // Euler z
  target_[R_HFE].th =  outAngs.y; // Euler x
  target_[R_HFR].th = -outAngs.z; // Euler y
  
  // Knee:
  kneeSt = (joint_pose[13][0][3] - joint_pose[12][0][3]) * (joint_pose[13][0][3] - joint_pose[14][0][3]) +
	   (joint_pose[13][1][3] - joint_pose[12][1][3]) * (joint_pose[13][1][3] - joint_pose[14][1][3]) +
	   (joint_pose[13][2][3] - joint_pose[12][2][3]) * (joint_pose[13][2][3] - joint_pose[14][2][3]);
  kneeIm = sqrt(my_SQR((joint_pose[13][0][3]-joint_pose[12][0][3])) +
                my_SQR((joint_pose[13][1][3]-joint_pose[12][1][3])) +
                my_SQR((joint_pose[13][2][3]-joint_pose[12][2][3]))) *
           sqrt(my_SQR((joint_pose[13][0][3]-joint_pose[14][0][3])) +
                my_SQR((joint_pose[13][1][3]-joint_pose[14][1][3])) +
                my_SQR((joint_pose[13][2][3]-joint_pose[14][2][3])));

  target_[R_KFE].th= -(acos(kneeSt/kneeIm) - PI);

  ////// LEFT LEG //////////////////////////////////////////////////////////////////

  // Hip:
  matMultABt(initial_torso_pose, joint_pose[9], tmp_rot);
  // matMultABt(joint_pose[2], joint_pose[9], tmp_rot); // torso*hip^t	  
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 4; ++j)
      R[i][j] = tmp_rot[i][j];
  R[3][0] = R[3][1] = R[3][2] = 0.0f; R[3][3] = 1.0f;

  outAngs = Eul_FromHMatrix(R, EulOrdZXYr);

  target_[L_HAA].th = outAngs.x; // Euler z
  target_[L_HFE].th = outAngs.y; // Euler x
  target_[L_HFR].th = outAngs.z; // Euler y

  // Knee:
  kneeSt = (joint_pose[10][0][3]-joint_pose[9][0][3]) * (joint_pose[10][0][3]-joint_pose[11][0][3]) +
	   (joint_pose[10][1][3]-joint_pose[9][1][3]) * (joint_pose[10][1][3]-joint_pose[11][1][3]) +
	   (joint_pose[10][2][3]-joint_pose[9][2][3]) * (joint_pose[10][2][3]-joint_pose[11][2][3]);
  kneeIm = sqrt(my_SQR(joint_pose[10][0][3] - joint_pose[9][0][3]) +
                my_SQR(joint_pose[10][1][3] - joint_pose[9][1][3]) +
                my_SQR(joint_pose[10][2][3]-joint_pose[9][2][3])) *
           sqrt(my_SQR(joint_pose[10][0][3]-joint_pose[11][0][3]) +
                my_SQR(joint_pose[10][1][3]-joint_pose[11][1][3]) +
                my_SQR(joint_pose[10][2][3]-joint_pose[11][2][3]));

  target_[L_KFE].th = -(acos(kneeSt/kneeIm) - PI);

  ///// RIGHT ARM //////////////////////////////////////////////////////////

  // Shoulder:
  rotZ(PI/4, rot45);
  matMultAB(joint_pose[2], rot45, tmp_rot);	// torso * 45deg around z axis
  matMultABt(tmp_rot, joint_pose[6], tmp_rot2);	// torso45 * shoulder^t = rotation between the two
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 4; ++j)
      R[i][j] = tmp_rot2[i][j];
  R[3][0] = R[3][1] = R[3][2] = 0.0f; R[3][3] = 1.0f;

  outAngs = Eul_FromHMatrix(R, EulOrdYZXr);

  target_[R_SFE].th = outAngs.x;		// outAngs.x = first= Y
  target_[R_SAA].th = -(outAngs.y + PI/4);	// outAngs.y = 2nd= Z
  target_[R_HR].th  = outAngs.z;		// outAngs.z = 3rd= X

  // Elbow:	  
  elbNum = (joint_pose[7][0][3]-joint_pose[6][0][3]) * (joint_pose[7][0][3]-joint_pose[8][0][3]) +
	   (joint_pose[7][1][3]-joint_pose[6][1][3]) * (joint_pose[7][1][3]-joint_pose[8][1][3]) +
	   (joint_pose[7][2][3]-joint_pose[6][2][3]) * (joint_pose[7][2][3]-joint_pose[8][2][3]);
  elbDen = sqrt(my_SQR(joint_pose[7][0][3]-joint_pose[6][0][3]) +
                my_SQR(joint_pose[7][1][3]-joint_pose[6][1][3]) +
                my_SQR(joint_pose[7][2][3]-joint_pose[6][2][3])) *
           sqrt(my_SQR(joint_pose[7][0][3]-joint_pose[8][0][3]) +
                my_SQR(joint_pose[7][1][3]-joint_pose[8][1][3]) +
                my_SQR(joint_pose[7][2][3]-joint_pose[8][2][3]));

  target_[R_EB].th = -(acos(elbNum/elbDen) - PI);

  ///// LEFT ARM /////////////////////////////////////////////////////

  // Shoulder:
  rotZ(-PI/4, rot45);
  matMultAB(joint_pose[2], rot45, tmp_rot);	// torso * -45deg around z axis
  matMultABt(tmp_rot, joint_pose[3], tmp_rot2);	// torso45 * shoulder^t = rotation between the two
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 4; ++j)
      R[i][j] = tmp_rot2[i][j];
  R[3][0] = R[3][1] = R[3][2] = 0.0f; R[3][3] = 1.0f;
 
  outAngs = Eul_FromHMatrix(R, EulOrdYZXr);

  target_[L_SFE].th = -outAngs.x;       //outAngs.x = first= Y
  target_[L_SAA].th = outAngs.y - PI/4; //outAngs.y = 2nd= Z
  target_[L_HR].th  = outAngs.z;        //outAngs.z = 3rd= X

  // Elbow:	  
  elbNum = (joint_pose[4][0][3]-joint_pose[3][0][3]) * (joint_pose[4][0][3]-joint_pose[5][0][3]) +
           (joint_pose[4][1][3]-joint_pose[3][1][3]) * (joint_pose[4][1][3]-joint_pose[5][1][3]) +
           (joint_pose[4][2][3]-joint_pose[3][2][3]) * (joint_pose[4][2][3]-joint_pose[5][2][3]);		
  elbDen = sqrt(my_SQR(joint_pose[4][0][3]-joint_pose[3][0][3]) +
                my_SQR(joint_pose[4][1][3]-joint_pose[3][1][3]) +
                my_SQR(joint_pose[4][2][3]-joint_pose[3][2][3])) *
           sqrt(my_SQR(joint_pose[4][0][3]-joint_pose[5][0][3]) +
                my_SQR(joint_pose[4][1][3]-joint_pose[5][1][3]) +
                my_SQR(joint_pose[4][2][3]-joint_pose[5][2][3]));

  target_[L_EB].th = -(acos(elbNum/elbDen) - PI);
}

void kinect_task::kinect_velocities(double timestamp)
{
double PreviousVel;
static double joint_angles1[N_DOFS+1], joint_angles2[N_DOFS+1];
int i;

  if (time1 >= 0.0 && time2 >= 0)
  {
    for (i = 1; i <= N_DOFS; i++)
      target_[i].thd = (target_[i].th - joint_angles1[i]) / (timestamp - time1);

    for (i = 1; i <= N_DOFS; i++)
    {
      PreviousVel = (joint_angles1[i] - joint_angles2[i]) / (time1 - time2);
      target_[i].thdd = (target_[i].thd - PreviousVel) / (timestamp - time1);
    }
  }
  for (i = 1; i <= N_DOFS; i++)
  {
    joint_angles2[i] = joint_angles1[i];
    joint_angles1[i] = target_[i].th;
  }
  time2 = time1;
  time1 = timestamp;
}

void kinect_task::body_tracking_velocities(double time, int update)
{
double PreviousVel;
static double joint_angles1[N_DOFS+1], joint_angles2[N_DOFS+1];
int i;

  if (update)
  {
    for (i = 1; i <= N_DOFS; i++)
    {
      joint_angles2[i] = joint_angles1[i];
      joint_angles1[i] = joint_state[i].th;
    }
    time_kinect2 = time_kinect1;
    time_kinect1 = time;
  }
  else if (time_kinect1 >= 0.0 && time_kinect2 >= 0)
  {
    for (i = 1; i <= N_DOFS; i++)
    {
      target_[i].thd = (target_[i].th - joint_state[i].th) / (time - time_kinect1);

      if (!playback)
      {
        target_[i].thd = apply_max_velocity(i);
        target_[i].th = joint_state[i].th + target_[i].thd * (time - time_kinect1);
      }

      PreviousVel = (joint_angles1[i] - joint_angles2[i]) / (time_kinect1 - time_kinect2);
      target_[i].thdd = (target_[i].thd - PreviousVel) / (time - time_kinect1);
    }
  }
}

double kinect_task::apply_max_velocity(int i)
{
  switch (i)
  {
  case B_TFE:
  case B_TAA:
    if (fabs(target_[i].thd) >  1.5*freq_factor)
    {
      if (target_[i].thd > 0)
         return 1.5*freq_factor;
      else
         return -1.5*freq_factor;
    }
    else
      return target_[i].thd;
  case R_KFE:
  case L_KFE:
    if (fabs(target_[i].thd) >  3*freq_factor)
    {
      if (target_[i].thd > 0)
         return 3*freq_factor;
      else
         return -3*freq_factor;
    }
    else
      return target_[i].thd;
  default:
    if (fabs(target_[i].thd) >  10*freq_factor)
    {
      if (target_[i].thd > 0)
         return 10*freq_factor;
      else
         return -10*freq_factor;
    }
    else
      return target_[i].thd;
  }
}

void kinect_task::initialize_data_collection()
{
  // save time & Kinect measurements (4 for each limb and arm & 3 for torso)
  if (Kinect_traj == NULL)
    Kinect_traj = my_matrix(1, MAX_LENGTH * KINECT_FREQ, 1, Kinect_DOFs);
  Kinect_collection_idx = 0;
  // save time & all degrees of freedom;
  if (CBi_traj == NULL)
    CBi_traj = my_matrix(1, MAX_LENGTH * servo_rate, 1, 2*N_DOFS+1);
  CBi_collection_idx = 0;
}

int kinect_task::save_data()
{
int i, all_active_dofs;
char Kinect_traj_file[] = PREFS "Kinect_traj.mrd";
char CBi_traj_file[] = PREFS "CBi_traj.mrd";
char **vnames, **vnames_active, **units, **units_active;

  vnames = (char **) calloc(2*N_DOFS+2, sizeof(char *));
  vnames_active = (char **) calloc(2*N_DOFS+2, sizeof(char *));
  units = (char **) calloc(2*N_DOFS+2, sizeof(char *));
  units_active = (char **) calloc(2*N_DOFS+2, sizeof(char *));
  for (i = 1 ; i <= 2*N_DOFS+1; i++)
  {
    vnames[i] = (char *) calloc(40, sizeof(char));
    units[i] = (char *) calloc(40, sizeof(char));
    vnames_active[i] = (char *) calloc(40, sizeof(char));
    units_active[i] = (char *) calloc(40, sizeof(char));
  }

  strcpy(units[1], "s");
  for (i = 1; i <= N_DOFS; i++)
  {
    strcpy(units[1+i], "rad");
    strcpy(units[1+N_DOFS+i], "rad/s");
  }

  strcpy(vnames[1], "time");
  strcpy(vnames[2], "L_SFE_th");
  strcpy(vnames[3], "L_SAA_th");
  strcpy(vnames[4], "L_HR_th");
  strcpy(vnames[5], "L_EB_th");
  strcpy(vnames[6], "R_SFE_th");
  strcpy(vnames[7], "R_SAA_th");
  strcpy(vnames[8], "R_HR_th");
  strcpy(vnames[9], "R_EB_th");
  strcpy(vnames[10], "L_HFE_th");
  strcpy(vnames[11], "L_HAA_th");
  strcpy(vnames[12], "L_HFR_th");
  strcpy(vnames[13], "L_KFE_th");
  strcpy(vnames[14], "R_HFE_th");
  strcpy(vnames[15], "R_HAA_th");
  strcpy(vnames[16], "R_HFR_th");
  strcpy(vnames[17], "R_KFE_th");
  strcpy(vnames[18], "B_TR_th");
  strcpy(vnames[19], "B_TAA_th");
  strcpy(vnames[20], "B_TFE_th");
  strcpy(vnames[21], "L_HFE_mod_th");
  strcpy(vnames[22], "L_KFE_mod_th");
  strcpy(vnames[23], "L_AFE_mod_th");
  strcpy(vnames[24], "R_HFE_mod_th");
  strcpy(vnames[25], "R_KFE_mod_th");
  strcpy(vnames[26], "R_AFE_mod_th");

  mrdplot_write(Kinect_traj_file, Kinect_traj, vnames, units, 
                KINECT_FREQ, Kinect_DOFs, Kinect_collection_idx); 

  strcpy(vnames[2], "L_SFE_th");
  strcpy(vnames[3], "L_SAA_th");
  strcpy(vnames[4], "L_HR_th");
  strcpy(vnames[5], "L_EB_th");
  strcpy(vnames[6], "L_WR_th");
  strcpy(vnames[7], "L_WFE_th");
  strcpy(vnames[8], "L_WAA_th");
  strcpy(vnames[9], "R_SFE_th");
  strcpy(vnames[10], "R_SAA_th");
  strcpy(vnames[11], "R_HR_th");
  strcpy(vnames[12], "R_EB_th");
  strcpy(vnames[13], "R_WR_th");
  strcpy(vnames[14], "R_WFE_th");
  strcpy(vnames[15], "R_WAA_th");
  strcpy(vnames[16], "L_HFE_th");
  strcpy(vnames[17], "L_HAA_th");
  strcpy(vnames[18], "L_HFR_th");
  strcpy(vnames[19], "L_KFE_th");
  strcpy(vnames[20], "L_AR_th");
  strcpy(vnames[21], "L_AFE_th");
  strcpy(vnames[22], "L_AAA_th");
  strcpy(vnames[23], "R_HFE_th");
  strcpy(vnames[24], "R_HAA_th");
  strcpy(vnames[25], "R_HFR_th");
  strcpy(vnames[26], "R_KFE_th");
  strcpy(vnames[27], "R_AR_th");
  strcpy(vnames[28], "R_AFE_th");
  strcpy(vnames[29], "R_AAA_th");
  strcpy(vnames[30], "B_TR_th");
  strcpy(vnames[31], "B_TAA_th");
  strcpy(vnames[32], "B_TFE_th");
  strcpy(vnames[33], "B_HN_th");
  strcpy(vnames[34], "B_HT_th");
  strcpy(vnames[35], "B_HR_th");
  strcpy(vnames[36], "R_EP_th");
  strcpy(vnames[37], "R_ET_th");
  strcpy(vnames[38], "L_EP_th");
  strcpy(vnames[39], "L_ET_th");
  strcpy(vnames[N_DOFS+2], "L_SFE_thd");
  strcpy(vnames[N_DOFS+3], "L_SAA_thd");
  strcpy(vnames[N_DOFS+4], "L_HR_thd");
  strcpy(vnames[N_DOFS+5], "L_EB_thd");
  strcpy(vnames[N_DOFS+6], "L_WR_thd");
  strcpy(vnames[N_DOFS+7], "L_WFE_thd");
  strcpy(vnames[N_DOFS+8], "L_WAA_thd");
  strcpy(vnames[N_DOFS+9], "R_SFE_thd");
  strcpy(vnames[N_DOFS+10], "R_SAA_thd");
  strcpy(vnames[N_DOFS+11], "R_HR_thd");
  strcpy(vnames[N_DOFS+12], "R_EB_thd");
  strcpy(vnames[N_DOFS+13], "R_WR_thd");
  strcpy(vnames[N_DOFS+14], "R_WFE_thd");
  strcpy(vnames[N_DOFS+15], "R_WAA_thd");
  strcpy(vnames[N_DOFS+16], "L_HFE_thd");
  strcpy(vnames[N_DOFS+17], "L_HAA_thd");
  strcpy(vnames[N_DOFS+18], "L_HFR_thd");
  strcpy(vnames[N_DOFS+19], "L_KFE_thd");
  strcpy(vnames[N_DOFS+20], "L_AR_thd");
  strcpy(vnames[N_DOFS+21], "L_AFE_thd");
  strcpy(vnames[N_DOFS+22], "L_AAA_thd");
  strcpy(vnames[N_DOFS+23], "R_HFE_thd");
  strcpy(vnames[N_DOFS+24], "R_HAA_thd");
  strcpy(vnames[N_DOFS+25], "R_HFR_thd");
  strcpy(vnames[N_DOFS+26], "R_KFE_thd");
  strcpy(vnames[N_DOFS+27], "R_AR_thd");
  strcpy(vnames[N_DOFS+28], "R_AFE_thd");
  strcpy(vnames[N_DOFS+29], "R_AAA_thd");
  strcpy(vnames[N_DOFS+30], "B_TR_thd");
  strcpy(vnames[N_DOFS+31], "B_TAA_thd");
  strcpy(vnames[N_DOFS+32], "B_TFE_thd");
  strcpy(vnames[N_DOFS+33], "B_HN_thd");
  strcpy(vnames[N_DOFS+34], "B_HT_thd");
  strcpy(vnames[N_DOFS+35], "B_HR_thd");
  strcpy(vnames[N_DOFS+36], "R_EP_thd");
  strcpy(vnames[N_DOFS+37], "R_ET_thd");
  strcpy(vnames[N_DOFS+38], "L_EP_thd");
  strcpy(vnames[N_DOFS+39], "L_ET_thd");

  all_active_dofs = active_dofs[0]+active_legs_dofs[0]+2*track_torso;

  strcpy(vnames_active[1], vnames[1]);
  strcpy(units_active[1], units[1]);
  for (i = 1; i <= active_dofs[0]; i++)
  {
    strcpy(vnames_active[1+i], vnames[1+active_dofs[i]]);
    strcpy(vnames_active[1+all_active_dofs+i], vnames[1+N_DOFS+active_dofs[i]]);
    strcpy(units_active[1+i], units[1+active_dofs[i]]);
    strcpy(units_active[1+all_active_dofs+i], units[1+N_DOFS+active_dofs[i]]);
  }
  if (track_torso)
  {
    strcpy(vnames_active[1+active_dofs[0]+1], vnames[1+B_TAA]);
    strcpy(vnames_active[1+all_active_dofs+active_dofs[0]+1], vnames[1+N_DOFS+B_TAA]);
    strcpy(units_active[1+active_dofs[0]+1], units[1+B_TAA]);
    strcpy(units_active[1+all_active_dofs+active_dofs[0]+1], units[1+N_DOFS+B_TAA]);
    strcpy(vnames_active[1+active_dofs[0]+2], vnames[1+B_TFE]);
    strcpy(vnames_active[1+all_active_dofs+active_dofs[0]+2], vnames[1+N_DOFS+B_TFE]);
    strcpy(units_active[1+active_dofs[0]+2], units[1+B_TFE]);
    strcpy(units_active[1+all_active_dofs+active_dofs[0]+2], units[1+N_DOFS+B_TFE]);
  }
  for (i = 1; i <= active_legs_dofs[0]; i++)
  {
    strcpy(vnames_active[1+active_dofs[0]+2*track_torso+i], vnames[1+active_legs_dofs[i]]);
    strcpy(vnames_active[1+all_active_dofs+active_dofs[0]+2*track_torso+i], vnames[1+N_DOFS+active_legs_dofs[i]]);
    strcpy(units_active[1+active_dofs[0]+2*track_torso+i], units[1+active_legs_dofs[i]]);
    strcpy(units_active[1+all_active_dofs+active_dofs[0]+2*track_torso+i], units[1+N_DOFS+active_legs_dofs[i]]);
  }

  if (save_active_dofs == TRUE)
    mrdplot_write(CBi_traj_file, CBi_traj, vnames_active, units_active, 
                  (double) servo_rate, 2*all_active_dofs+1, CBi_collection_idx);
  else
    mrdplot_write(CBi_traj_file, CBi_traj, vnames, units, 
                  (double) servo_rate, 2*N_DOFS+1, CBi_collection_idx);

  for (i = 1; i <= 2*N_DOFS+1; i++)
  {
    free((void *) vnames[i]);
    free((void *) units[i]);
    free((void *) vnames_active[i]);
    free((void *) units_active[i]);
  }
  free((void *) vnames);
  free((void *) units);
  free((void *) vnames_active);
  free((void *) units_active);

  if (Kinect_traj != NULL);
    my_free_matrix(Kinect_traj, 1, MAX_LENGTH * KINECT_FREQ, 1, Kinect_DOFs);
  Kinect_traj = NULL;
  if (CBi_traj != NULL);
    my_free_matrix(CBi_traj, 1, MAX_LENGTH * servo_rate, 1, 2*N_DOFS+1);
  CBi_traj = NULL;

  return TRUE;
}

int kinect_task::copy_Kinect_data(double task_time)
{
int i, j;

  if (Kinect_collection_idx >= MAX_LENGTH * KINECT_FREQ)
    return FALSE;

  Kinect_collection_idx++;
  j = 0;
  Kinect_traj[Kinect_collection_idx][++j] = task_time;
  for (i = L_SFE; i <= L_EB; i++)
    Kinect_traj[Kinect_collection_idx][++j] = target_[i].th;
  for (i = R_SFE; i <= R_EB; i++)
    Kinect_traj[Kinect_collection_idx][++j] = target_[i].th;
  for (i = L_HFE; i <= L_KFE; i++)
    Kinect_traj[Kinect_collection_idx][++j] = target_[i].th;
  for (i = R_HFE; i <= R_KFE; i++)
    Kinect_traj[Kinect_collection_idx][++j] = target_[i].th;
  for (i = B_TR; i <= B_TFE; i++)
    Kinect_traj[Kinect_collection_idx][++j] = target_[i].th;

  return TRUE;
}

int kinect_task::copy_more_Kinect_data()
{
  if (Kinect_collection_idx >= MAX_LENGTH * KINECT_FREQ)
    return FALSE;

  Kinect_traj[Kinect_collection_idx][Kinect_DOFs-5] = target_[L_HFE].th;
  Kinect_traj[Kinect_collection_idx][Kinect_DOFs-4] = target_[L_KFE].th;
  Kinect_traj[Kinect_collection_idx][Kinect_DOFs-3] = target_[L_AFE].th;
  Kinect_traj[Kinect_collection_idx][Kinect_DOFs-2] = target_[R_HFE].th;
  Kinect_traj[Kinect_collection_idx][Kinect_DOFs-1] = target_[R_KFE].th;
  Kinect_traj[Kinect_collection_idx][Kinect_DOFs]   = target_[R_AFE].th;

  return TRUE;
}

int kinect_task::copy_CBi_data(double task_time)
{
int i;
int all_active_dofs;

  if (CBi_collection_idx >= MAX_LENGTH * servo_rate)
    return FALSE;

  all_active_dofs = active_dofs[0] + 2*track_torso + active_legs_dofs[0];

  CBi_collection_idx += 1;
  CBi_traj[CBi_collection_idx][1] = task_time;
  if (save_active_dofs == TRUE)
  {
    for (i = 1; i <= ndofs; i++)
    {
      CBi_traj[CBi_collection_idx][1+i] = joint_des_state[active_dofs[i]].th;
      CBi_traj[CBi_collection_idx][1+all_active_dofs+i] = joint_des_state[active_dofs[i]].thd;
    }
    if (track_torso)
    {
      CBi_traj[CBi_collection_idx][1+active_dofs[0]+1] = joint_des_state[B_TAA].th;
      CBi_traj[CBi_collection_idx][1+all_active_dofs+active_dofs[0]+1] = joint_des_state[B_TAA].thd;
      CBi_traj[CBi_collection_idx][1+active_dofs[0]+2] = joint_des_state[B_TFE].th;
      CBi_traj[CBi_collection_idx][1+all_active_dofs+active_dofs[0]+2] = joint_des_state[B_TFE].thd;
    }
    for (i = 1; i <= active_legs_dofs[0]; i++)
    {
      CBi_traj[CBi_collection_idx][1+active_dofs[0]+2*track_torso+i] = joint_des_state[active_legs_dofs[i]].th;
      CBi_traj[CBi_collection_idx][1+all_active_dofs+active_dofs[0]+2*track_torso+i] =
        joint_des_state[active_legs_dofs[i]].thd;
    }
  }
  else
  {
    for (i = 1; i <= N_DOFS; i++)
    {
      CBi_traj[CBi_collection_idx][1+i] = joint_des_state[i].th;
      CBi_traj[CBi_collection_idx][1+N_DOFS+i] = joint_des_state[i].thd;
    }
  }
  return TRUE;
}

static void rotX(double fi, double rot45[3][4])
{
  rot45[0][0] = 1.0;    rot45[0][1] = 0.0;       rot45[0][2] = 0.0;
  rot45[1][0] = 0.0;    rot45[1][1] = cos(fi);   rot45[1][2] = -sin(fi);
  rot45[2][0] = 0.0;    rot45[2][1] = sin(fi);   rot45[2][2] = cos(fi);
  rot45[0][3] = rot45[1][3] = rot45[2][3] = 0.0;
}

void kinect_task::leftLegInvKin(void)
{
double tmp_rot[3][4], tmp_rot2[3][4];
double rot45[3][4];
HMatrix R, R2;
EulerAngles outAngs2; // = {0,0,0,EulOrdZXYr};
EulerAngles outAngs;  // = {0,0,0,EulOrdZXYr};

 ///// INV KIN //////////////////////////////////////////////////////////////////
static SL_DJstate target[N_DOFS+1];	// states used by for inverse kin function
static double     cart[4*6+1];		// desired cartesian velocities
static int        cstatus[4*6+1];	// tells which endeffs to calculate
static double     time_step;
double dR[3][4],  dR2[3][4];
int i, j, idx;

  time_step = 1./(double)task_servo_rate;

  // active endeffs
  for (i = 1; i <= N_ENDEFFS*6; ++i)
  // cstatus cartesian indices: 1:6 r. hand, 7:12 l. hand, 13:18 r. foot, 19:24 left foot.
  {
    if (i <= RIGHT_FOOT*6)
      cstatus[i] = 0;
    else
    // Left foot
      cstatus[i] = 1;
  }
  cstatus[22] = 1;
  cstatus[23] = 1;
  cstatus[24] = 1;
  
  // desired angular velocities
  // R foot //////
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 4; ++j)
      dR2[i][j] = Alink[R_FOOT][i+1][j+1];

  rotX(PI, tmp_rot);
  matMultAB(tmp_rot, dR2, dR);
  matMultABt(initial_torso_pose, dR, dR2);                // dR2 = base* (R_FOOT*180x)'

  for (i = 0; i < 3; ++i)
    for (j = 0; j < 4; ++j)
      R2[i][j] = (float)dR2[i][j];
  R2[3][0] = R2[3][1] = R2[3][2] = 0.0f; R2[3][3] = 1.0f; // R2 = base*(R_FOOT * 180x)'

  // L foot /////
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 4; ++j)
      tmp_rot[i][j] = Alink[L_FOOT][i+1][j+1];

  matMultABt(initial_torso_pose, tmp_rot, dR);            // dR = base* (l_FOOT)'

  for (i = 0; i < 3; ++i)
    for (j = 0; j < 4; ++j)
      R[i][j] = (float)dR[i][j];
  R[3][0] = R[3][1] = R[3][2] = 0.0f; R[3][3] = 1.0f;     // R = base*(l_FOOT)'

  // convert both feet orientations to angles
  outAngs2 = Eul_FromHMatrix(R2, EulOrdXYZs);	// outAngs2 = R_FOOT
  outAngs  = Eul_FromHMatrix(R,  EulOrdXYZs);	// outAngs  = L_FOOT

  // desired angular velocity is the difference between angles
  cart[3*6+4] = -2*(outAngs2.x - outAngs.x);
  cart[3*6+5] = 0.0;
  // cart[3*6+5] = 1;//5*(outAngs2.y + outAngs.y);
  cart[3*6+6] = -2*(-outAngs2.y - outAngs.y);

  idx = 3*N_CART*2;
  // desired position velocities
  //x desired position 20 cm to the left of the right foot;
  cart[idx+1] = -2*(Alink[L_ANKLE][1][4] - (Alink[R_ANKLE][1][4] - (Alink[R_HIP][1][4] - Alink[L_HIP][1][4])));//0.20)); 
  cart[idx+2] = -2*(Alink[L_ANKLE][2][4] - (Alink[R_ANKLE][2][4] + 0.0));                                 //y
  cart[idx+3] = -2*(Alink[L_ANKLE][3][4] - (Alink[R_ANKLE][3][4] - (0.20-0.05) * tan(outAngs2.z+PI/2)));  //z

  for (i = 1; i <= N_DOFS; ++i)
  {
    target[i].th = joint_des_state[i].th;
  }

  if (!inverseKinematics(target, endeff, joint_opt_state, cart, cstatus, time_step))
  {
    printf("invkin error\n");
  }
  
  for (i = L_HFE; i <= L_AAA; ++i)
    target_[i].th = target[i].th;
}

// Here we define which degrees of freedom are active (depending on the control mode)
void kinect_task::control_dofs(void)
{
int balance_with_legs_dofs[] = {25, L_SFE, L_SAA, L_HR, L_EB,
                                    R_SFE, R_SAA, R_HR, R_EB,
                                    L_HFE, L_HAA, L_HFR, L_KFE, L_AR, L_AFE, L_AAA,
                                    R_HFE, R_HAA, R_HFR, R_KFE, R_AR, R_AFE, R_AAA,
                                    B_TR, B_TAA, B_TFE};
int track_legs_dofs[] = {12, L_SFE, L_SAA, L_HR, L_EB,
                             R_SFE, R_SAA, R_HR, R_EB,
                             B_TR, /* B_TAA, B_TFE, */ B_HN, B_HT, B_HR};
int kinect_playback_dofs[] = {19, L_SFE, L_SAA, L_HR, L_EB,
                                  R_SFE, R_SAA, R_HR, R_EB,
                                  L_HFE, L_HAA, L_HFR, L_KFE,
                                  R_HFE, R_HAA, R_HFR, R_KFE,
                                  B_TR, B_TAA, B_TFE};
int active_legs_dofs_const[] = {6, L_HFE, L_KFE, L_AFE, R_HFE, R_KFE, R_AFE};
int i;

  if (A != NULL)
    my_free_matrix(A, 1, msp_dimension, 1, ndofs);
  if (B != NULL)
    my_free_matrix(B, 1, 4*N_CART, 1, ndofs);
  if (JcogNull != NULL)
    my_free_matrix(JcogNull, 1, ndofs, 1, ndofs);
  if (FeetNull != NULL)
    my_free_matrix(FeetNull, 1, ndofs, 1, ndofs);
  if (V != NULL)
    my_free_matrix(V, 1, ndofs, 1, ndofs);
  if (s != NULL)
    my_free_vector(s, 1, ndofs);
  if (CogVelocity != NULL)
    my_free_vector(CogVelocity, 1, ndofs);
  if (DesiredVelocity != NULL)
    my_free_vector(DesiredVelocity, 1, ndofs);
  if (unconstrained_velocities != NULL)
    my_free_vector(unconstrained_velocities, 1, ndofs);
  if (u_cog != NULL)
    my_free_vector(u_cog, 1, msp_dimension);

  active_legs_dofs[0] = 0;
  if (playback)
  {
    for (i = 0; i <= kinect_playback_dofs[0]; i++)
      active_dofs[i] = kinect_playback_dofs[i];
  }
  else if (!balance_with_legs)
  {
    for (i = 0; i <= track_legs_dofs[0]; i++)
      active_dofs[i] = track_legs_dofs[i];
    if (track_legs)
      for (i = 0; i <= active_legs_dofs_const[0]; i++)
        active_legs_dofs[i] = active_legs_dofs_const[i];
  }
  else
  {
    // the index where leg DOFs start in balance_with_legs_dofs[] array
    leg_index = 9;
    for (i = 0; i <= balance_with_legs_dofs[0]; i++)
       balance_with_legs_dofs[i] = balance_with_legs_dofs[i];
    track_legs = track_torso = FALSE;
  }

  ndofs = active_dofs[0];  
  msp_dimension = N_CART-1;

  // initialize variables for null space computation
  A = my_matrix(1, msp_dimension, 1, ndofs);
  B = my_matrix(1, 4*N_CART, 1, ndofs);
  JcogNull = my_matrix(1, ndofs, 1, ndofs);
  FeetNull = my_matrix(1, ndofs, 1, ndofs);
  V = my_matrix(1, ndofs, 1, ndofs);
  s = my_vector(1, ndofs);
  CogVelocity = my_vector(1, ndofs);
  DesiredVelocity = my_vector(1, ndofs);
  u_cog = my_vector(1, msp_dimension);
  unconstrained_velocities = my_vector(1, ndofs);
}

void kinect_task::stability_control(void)
{
// Calculate the desired update for stability from COG (or COP) and 
// project the desired velocity to null space 
int i, j, k, rank;
double s_min, s_max, ss;
const double epsilon = 1.0e-8;
double R[3][3];
double cog_tmp[3], MSP_new[3];

  // compute most stable and least stable points for balance control
  MSP_new[1] = (Alink[R_OUT_HEEL][1][4] + Alink[L_IN_HEEL][1][4]) /2;
  MSP_new[2] = (Alink[R_OUT_HEEL][2][4] + Alink[R_OUT_TOE][2][4]) /2;

  // Transition matrix robot-to-world
  ss = sqrt(my_SQR(Alink[R_OUT_HEEL][1][4] - Alink[L_IN_HEEL][1][4]) +
            my_SQR(Alink[R_OUT_HEEL][2][4] - Alink[L_IN_HEEL][2][4]));
  R[1][1] = (Alink[R_OUT_HEEL][1][4] - Alink[L_IN_HEEL][1][4]) / ss;
  R[1][2] = (Alink[R_OUT_HEEL][2][4] - Alink[L_IN_HEEL][2][4]) / ss;
  ss = sqrt(my_SQR(Alink[R_OUT_HEEL][1][4] - Alink[L_IN_HEEL][1][4]) +
            my_SQR(Alink[R_OUT_HEEL][2][4] - Alink[L_IN_HEEL][2][4]));
  R[2][1] = (Alink[R_OUT_TOE][1][4] - Alink[R_OUT_HEEL][1][4]) / ss;
  R[2][2] = (Alink[R_OUT_TOE][2][4] - Alink[R_OUT_HEEL][2][4]) / ss;

  if (use_cop)
  {
    cog_tmp[1] = R[1][1]*(COP[1] - MSP_new[1]) + R[1][2]*(COP[2] - MSP_new[2]);
    cog_tmp[2] = R[2][1]*(COP[2] - MSP_new[2]) + R[2][2]*(COP[2] - MSP_new[2]);
  }
  else
  {
    cog_tmp[1] = factor * (R[1][1]*(cog.x[_X_] - MSP_new[1]) + R[1][2]*(cog.x[_Y_] - MSP_new[2]));
    cog_tmp[2] = factor * (R[2][1]*(cog.x[_X_] - MSP_new[1]) + R[2][2]*(cog.x[_Y_] - MSP_new[2]));
  }

  // z_n - stability index  strcpy(vnames[2], "L_SFE_th");
  // x direction: left / right, y direction: fwd / bw
  /* if (use_cop)
  {
    z_n[_X_] = (COP[1] - MSP[1]) / fabs(LSP[1] - MSP[1]);
    z_n[_Y_] = (COP[2] - MSP[2]) / fabs(LSP[2] - MSP[2]);
  }
  else
  {
    z_n[_X_] = factor * (cog.x[_X_] - MSP[1]) / fabs(LSP[1] - MSP[1]);
    z_n[_Y_] = factor * (cog.x[_Y_] - MSP[2]) / fabs(LSP[2] - MSP[2]);
  } */
  z_n[_X_] = cog_tmp[1] / fabs(LSP[1] - MSP[1]);
  z_n[_Y_] = cog_tmp[2] / fabs(LSP[2] - MSP[2]);

  if (fabs(z_n[_X_]) > dist_max)
    z_n[_X_] = 1.0;
  else
    z_n[_X_] = my_CUBE(fabs(z_n[_X_]) / dist_max);
  if (fabs(z_n[_Y_]) > dist_max)
    z_n[_Y_] = 1.0;
  else
    z_n[_Y_] = my_CUBE(fabs(z_n[_Y_]) / dist_max);

  if (fabs(z_n[_X_]) > fabs(z_n[_Y_]))
    z_n[3] = fabs(z_n[_X_]);
  else
    z_n[3] = fabs(z_n[_Y_]);
  // z_n[3] = 1.0;

  // Calculate desired center of mass velocity
  for (i = 1; i <= msp_dimension; i++)
    u_cog[i] = z_n[3] * factor * (MSP[i] - cog.x[i]) / time_to_msp;

  for (i = 1; i <= msp_dimension; i++)
    for (j = 1; j <= ndofs; j++)
      A[i][j] = Jcog[i][active_dofs[j]];

  my_svdcmp(A, msp_dimension, ndofs, s, V);

  s_max = 0.0; rank = 0;
  for (j = 1; j <= ndofs; j++)
    if (s[j] > s_max)
      s_max = s[j];
  s_min = s_max*epsilon;
  for (j = 1; j <= ndofs; j++)
    if (s[j] < s_min)
      s[j] = 0.0;
    else
      rank++;

  // Desired joint space motion from desired center of mass motion
  my_svbksb(A, s, V, msp_dimension, ndofs, u_cog, CogVelocity);

  for (j = 1; j <= ndofs; j++)
    if (s[j] < s_min)
      for (i = 1; i <= ndofs; i++)
        V[i][j] = 0;

  // Modified null space matrix of center of mass motion
  mat_mult_normal_transpose_size(V, ndofs, ndofs, V, ndofs, ndofs, JcogNull);
  for (i = 1; i <= ndofs; i++)
    for (j = 1; j <= ndofs; j++)
      JcogNull[i][j] = -z_n[3]*JcogNull[i][j];
  for (i = 1; i <= ndofs; i++)
    JcogNull[i][i] += 1.0;

  for (i = 1; i <= ndofs; i++)
    unconstrained_velocities[i] = target_[active_dofs[i]].thd;
  // Project desired Kinect velocity onto the null space of center of mass motion (z_n = 1),
  // leave them untouched (z_n = 0), or something in between
  mat_vec_mult_size(JcogNull, ndofs, ndofs, unconstrained_velocities, ndofs, DesiredVelocity);

  // Null space checking code
  /* for (j = 1; j <= active_dofs[0]; j++)
    for (i = 1; i <= N_CART-1; i++)
      A[i][j] = Jcog[i][active_dofs[j]];

  mat_vec_mult_size(A, 2, ndofs, DesiredVelocity, ndofs, u_cog);
  printf("(%le %le), (%le %le)\n", u_cog[1], u_cog[2], cog.x[_X_], cog.x[_Y_]); */

  // Null space matrix of feet motion
  /* for (i = 1; i <= 2*N_CART; i++)
    for (j = 1; j <= ndofs; j++)
      B[i][j] = Jdes[4*N_CART+i][active_dofs[j]];
  for (i = 1; i <= 2*N_CART; i++)
    for (j = 1; j <= ndofs; j++)
      B[2*N_CART+i][j] = Jdes[6*N_CART+i][active_dofs[j]];

  my_svdcmp(B, 4*N_CART, ndofs, s, V);
  s_max = 0.0; rank = 0;
  for (j = 1; j <= ndofs; j++)
    if (s[j] > s_max)
      s_max = s[j];
  s_min = s_max*epsilon;
  for (j = 1; j <= ndofs; j++)
    if (s[j] < s_min)
    {
      for (i = 1; i <= ndofs; i++)
        V[i][j] = 0;
      s[j] = 0.0;
    }
    else
      rank++;

  mat_mult_normal_transpose_size(V, ndofs, ndofs, V, ndofs, ndofs, FeetNull);
  for (i = 1; i <= ndofs; i++)
    for (j = 1; j <= ndofs; j++)
      FeetNull[i][j] = -FeetNull[i][j];
  for (i = 1; i <= ndofs; i++)
    FeetNull[i][i] += 1.0;

  // Project onto the null space of feet motion
  for (i = 1; i <= ndofs; i++)
    unconstrained_velocities[i] = DesiredVelocity[i]; 
  mat_vec_mult_size(FeetNull, ndofs, ndofs, unconstrained_velocities, ndofs, DesiredVelocity); */

  /* printf("(%lf, %lf), (%lf, %lf), %lf, %lf\n", MSP[1], MSP[2], LSP[1], LSP[2],
         sqrt(my_SQR(MSP[1] - cog.x[_X_]) + my_SQR(MSP[2] - cog.x[_Y_])), z_n[3]); */
}

