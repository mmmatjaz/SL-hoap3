/*============================================================================
==============================================================================
                      
                              dmpTask.cpp
 
==============================================================================
Remarks:

      generate and execute a DMP task

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
#include "SL_objects.h"

// local includes
#include "dmpTask.h"

bool filter_Kinect_data = true;
extern "C" {
  void ComputeCenterOfPressure(double cop[]);
}

int mrdplot_read(char *fname, Matrix *D, char ***vnames, char ***units, 
                 double *freq, int *n_cols, int *n_rows);
int set_active_dofs(char **vnames, int dof_CBi, int active_dofs[]);

//! time out for semaphores
#define TIME_OUT_NS 1000000000
static int receive_contacts(void);

// data files
char Kinect_traj_file[] = PREFS "Kinect_traj.mrd";
char CBi_traj_file[] = PREFS "CBi_traj.mrd";
char DMP_file[] = PREFS "DMP_params.txt";

static int servo_rate = SERVO_BASE_RATE / TASK_SERVO_RATIO;

dmpTask::dmpTask() : start_time_(0), freq_(0), amp_(0) {

  Kinect_traj = CBi_traj = NULL;
  vnames_CBi = units_CBi = vnames_Kinect = units_Kinect = NULL;
  DMP_object = NULL;

}

dmpTask::~dmpTask() {
int i;
  if (vnames_CBi != NULL)
  {
    for (i = 1; i <= dof_CBi; i++)
      free((void *) vnames_CBi[i]);
    free((void *) vnames_CBi);
  }
  if (units_CBi != NULL)
  {
    for (i = 1; i <= dof_CBi; i++)
      free((void *) units_CBi[i]);
    free((void *) units_CBi);
  }
  if (CBi_traj != NULL)
    my_free_matrix(CBi_traj, 1, n_CBi, 1, dof_CBi);

  if (vnames_Kinect != NULL)
  {
    for (i = 1; i <= dof_Kinect; i++)
      free((void *) vnames_Kinect[i]);
    free((void *) vnames_Kinect);
  }
  if (units_Kinect != NULL)
  {
    for (i = 1; i <= dof_Kinect; i++)
      free((void *) units_Kinect[i]);
    free((void *) units_Kinect);
  }
  if (Kinect_traj != NULL)
    my_free_matrix(Kinect_traj, 1, n_Kinect, 1, dof_Kinect);

  if (DMP_object != NULL)
    delete DMP_object;
}

int dmpTask::initialize()
{
double freq;
int i;
int ans = 999;

  start_time_ = 0.0;
  
  // Make sure that everything is clear
  if (vnames_CBi != NULL)
  {
    for (i = 1; i <= dof_CBi; i++)
      free((void *) vnames_CBi[i]);
    free((void *) vnames_CBi);
    vnames_CBi = NULL;
  }
  if (units_CBi != NULL)
  {
    for (i = 1; i <= dof_CBi; i++)
      free((void *) units_CBi[i]);
    free((void *) units_CBi);
    units_CBi = NULL;
  }
  if (CBi_traj != NULL)
  {
    my_free_matrix(CBi_traj, 1, n_CBi, 1, dof_CBi);
    CBi_traj = NULL;
  }
  if (vnames_Kinect != NULL)
  {
    for (i = 1; i <= dof_Kinect; i++)
      free((void *) vnames_Kinect[i]);
    free((void *) vnames_Kinect);
    vnames_Kinect = NULL;
  }
  vnames_Kinect = NULL;
  if (units_Kinect != NULL)
  {
    for (i = 1; i <= dof_Kinect; i++)
      free((void *) units_Kinect[i]);
    free((void *) units_Kinect);
    units_Kinect = NULL;
  }
  if (Kinect_traj != NULL)
  {
    my_free_matrix(Kinect_traj, 1, n_Kinect, 1, dof_Kinect);
    Kinect_traj = NULL;
  }
  if (DMP_object != NULL)
  {
    delete DMP_object;
    DMP_object = NULL;
  }

  // Read robot trajectory
  // mrdplot_convert(CBi_traj_file, &CBi_traj, &vnames_CBi, &units_CBi, &freq, &dof_CBi, &n_CBi);
  mrdplot_read(CBi_traj_file, &CBi_traj, &vnames_CBi, &units_CBi, &freq, &dof_CBi, &n_CBi);
  if (!set_active_dofs(vnames_CBi, dof_CBi, active_dofs))
    return FALSE;

  printf("%d active DoFs:", active_dofs[0]);
  for (i = 2; i <= active_dofs[0]+1; i++)
  {
    if (!((i-2)%8))
      printf("\n");
    printf("%s, ", vnames_CBi[i]);
  }
  printf("\n\n");

  // Read Kinect trajectory
  // mrdplot_convert(Kinect_traj_file, &Kinect_traj, &vnames_Kinect, &units_Kinect, &freq, &dof_Kinect, &n_Kinect);
  mrdplot_read(Kinect_traj_file, &Kinect_traj, &vnames_Kinect, &units_Kinect, &freq, &dof_Kinect, &n_Kinect);

  // Filter Kinect trajectory if desired
  if (Kinect_traj != NULL && filter_Kinect_data)
  {
    if (!init_filters())
      return FALSE;
    for (int i = 1; i <= 19; i++)
      fth[i].cutoff = 9;
    for (int i = 1; i <= 19; i++)
    {
      fth[i].raw[0] = fth[i].raw[1] = fth[i].raw[2] = Kinect_traj[1][i+1];
      fth[i].filt[0] = fth[i].filt[1] = fth[i].filt[2] = Kinect_traj[1][i+1];
    }
    for (int j = 1; j <= n_Kinect; j++)
      for (int i = 1; i <= 19; i++)
        Kinect_traj[j][i+1] = filt(Kinect_traj[j][i+1], &fth[i]);
  }

  // Compute DMP for robot trajectory
  if (DMP_object != NULL)
    delete DMP_object;
  // DMP_object = new DMP_structure(DMP_file);
  DMP_object = new DMP_structure(active_dofs[0], 50, 2.0, 12.0, 3.0);
  printf("\n");
  if (!DMP_object->example_Matrix(CBi_traj, n_CBi, dof_CBi))
    return FALSE;
  DMP_object->DMP_estimate(0);
  // DMP_object->DMP_param_print();
  printf("\n");

  // Initialize DMP integration
  for (int i = 1; i <= active_dofs[0]; i++)
  {
    initial_positions[i] = CBi_traj[1][i+1];
    initial_velocities[i] = 0.0;
  }
  DMP_object->set_initial_DMP_state(&(initial_positions[1]), &(initial_velocities[1]));

  // include this file to define contact points (needed to compute center of pressure)
#include "LEKin_contact.h"
  
  // prepare going to the default posture
  bzero((char *)&(target_[1]),N_DOFS*sizeof(target_[1]));
  for (i = 1; i <= N_DOFS; i++)
    target_[i] = joint_default_state[i];
  target_[L_EB].th = target_[R_EB].th = 0.05;
  target_[B_TFE].th = 0.2;  

  for (int i = 1; i <= active_dofs[0]; i++)
  {
    target_[active_dofs[i]].th = initial_positions[i];
    target_[active_dofs[i]].thd = 0.0;
    target_[active_dofs[i]].thdd = 0.0;
    target_[active_dofs[i]].uff = 0.0;
  }

  bool there = true;
  for (int i = 1; i <= B_HR; i++)
    if (fabs(target_[i].th - joint_des_state[i].th) > 1.0e-3)
    {
      there = false;
      break;
    }
  // go to the target using inverse dynamics (ID)int SampleTask::changeParameters()
  if (!there)
  {
    if (!go_target_wait_ID(target_))
    {
      return FALSE;
    }
  }

  // ready to go
  while (ans == 999)
  {
    if (!get_int(const_cast<char*>("Enter 1 to start or anthing else to abort ..."), ans, &ans))
    {
      return FALSE;
    }
  }
  
  // only go when user really types the right thing
  if (ans != 1) 
  {
    return FALSE;
  }

  start_time_ = task_servo_time;
  printf("start time = %.3f, task_servo_time = %.3f\n", start_time_, task_servo_time);

  return TRUE;
}

int dmpTask::run()
{
double task_time = task_servo_time - start_time_;
double dt = 1.0 / (double) servo_rate;

  DMP_object->DMP_integrate(dt);  

  if (!receive_contacts())
    printf("\n\nERROR!!! Couldn't receive contacts!\n\n");
  ComputeCenterOfPressure(COP);
  /* static int counter = 0;
  if (!(counter % 20))
    printf("Center of Pressure: %lf, %lf, %lf\n", COP[1], COP[2], COP[3]);
  counter++;*/

  for (int i = 1; i <= active_dofs[0]; i++)
  {
    joint_des_state[active_dofs[i]].th = DMP_object->get_position(i-1);
    joint_des_state[active_dofs[i]].thd = DMP_object->get_velocity(i-1);
    joint_des_state[active_dofs[i]].thdd = DMP_object->get_acceleration(i-1);
    joint_des_state[active_dofs[i]].uff = 0.0;
  }

  return TRUE;
}

int dmpTask::changeParameters()
{
  int ivar;
  double dvar;

  get_int(const_cast<char*>("This is how to enter an integer variable"),ivar,&ivar);
  get_double(const_cast<char*>("This is how to enter a double variable"),dvar,&dvar);

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
