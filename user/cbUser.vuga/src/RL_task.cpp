/*============================================================================
==============================================================================
                      
                          RL_task.cpp
 
==============================================================================
Remarks:

      Reinforcement learning of dynamically stable trajectories

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
#include "RL_task.h"
#include "DMPstructure.h"
#include "float.h"

#define KINECT_FREQ 15
#define MAX_LENGTH 10*60
#define my_SQR(a) ((a)*(a))
static int servo_rate = SERVO_BASE_RATE / TASK_SERVO_RATIO;

static char Kinect_traj_file[] = PREFS "Kinect_traj.mrd";
static char CBi_traj_file[] = PREFS "CBi_traj.mrd";
static char DMP_file[] = PREFS "DMP_params.txt";
static char test_traj_file[] = PREFS "test_traj.mrd";
static char test_traj2_file[] = PREFS "test_traj2.mrd";
static char test_traj3_file[] = PREFS "test_traj3.mrd";

int kinect_dofs[] = {19, L_SFE, L_SAA, L_HR, L_EB,
                         R_SFE, R_SAA, R_HR, R_EB,
                         L_HFE, L_HAA, L_HFR, L_KFE,
                         R_HFE, R_HAA, R_HFR, R_KFE,
                         B_TR, B_TAA, B_TFE};
int active_kinect_dofs[19+1], active_kinect_dofs_robot[19+1];
int active_RL_dofs[]= {11, 	L_SFE, L_SAA, L_HR, L_EB,
        					R_SFE, R_SAA, R_HR, R_EB,
        					B_TR, B_TAA, B_TFE};
int active_RL_dofs_dmp[11+1];//vsebina so indeksi dmp
int not_active_RL_dofs_dmp[11+1];//vsebina so indeksi dmp


extern "C" {
  void ComputeCenterOfPressure(double cop[]);
}
int set_active_dofs(char **vnames, int dof_CBi, int active_dofs[]);
int mrdplot_read(char *fname, Matrix *D, char ***vnames, char ***units,
                double *freq, int *n_cols, int *n_rows);
int mrdplot_write(char *fname, Matrix D, char **vnames, char **units,
				double freq, int n_cols, int n_rows);
static int receive_contacts(void);

//! time out for semaphores
#define TIME_OUT_NS 1000000000

#define MAX_LENGTH 10*60

double randn(void);
void arrAdd(double *arr, int arrLen, double newValue);
void matrixAdd(double *matx, int numRows, int numCols, double *newValue);

RL_task::RL_task() {

  theta = NULL;
  eTheta = NULL;
  bestR = NULL;
  bestEtheta = NULL;
  w = NULL;

  Kinect_traj = CBi_traj = test_traj = test_traj2= test_traj3= NULL;
  vnames_CBi = units_CBi = vnames_Kinect = units_Kinect = NULL;
  DMP_object = NULL;

}

RL_task::~RL_task()
{
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

  if (test_traj != NULL)
      my_free_matrix(test_traj, 1, MAX_LENGTH * servo_rate, 1, dof_CBi);
  if (test_traj2 != NULL)
      my_free_matrix(test_traj2, 1, MAX_LENGTH * servo_rate, 1, dof_CBi);
  if (test_traj3 != NULL)
      my_free_matrix(test_traj3, 1, MAX_LENGTH * servo_rate, 1, dof_CBi);

  if (theta != NULL)
	  my_free_vector(theta, 0, DMP_object->get_num_basis()*DMP_object->get_dof());
  if (eTheta != NULL)
	  my_free_vector(eTheta, 0, DMP_object->get_num_basis()*DMP_object->get_dof());
  if (bestR != NULL)
	  my_free_vector(bestR, 0, sampLen);
  if (bestEtheta != NULL)
    my_free_matrix(bestEtheta, 0, sampLen, 0, DMP_object->get_num_basis()*DMP_object->get_dof());
  if (w != NULL)
    my_free_vector(w, 0, DMP_object->get_num_basis());

  if (DMP_object != NULL)
    delete DMP_object;
}


int RL_task::initialize()
{
  double freq;
int i, j, k, k2;
int ans = 999;

  start_time_ = 0.0;

  filter_Kinect_data = false;//true;

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
  if (test_traj != NULL)
    {
      my_free_matrix(test_traj, 1, MAX_LENGTH * servo_rate, 1, dof_CBi);
      test_traj = NULL;
    }
  if (test_traj2 != NULL)
  {
      my_free_matrix(test_traj2, 1, MAX_LENGTH * servo_rate, 1, dof_CBi);
      test_traj2 = NULL;
  }
  if (test_traj3 != NULL)
  {
	  my_free_matrix(test_traj3, 1, MAX_LENGTH * servo_rate, 1, dof_CBi);
	  test_traj3 = NULL;
  }

  if (theta != NULL)
  {
    my_free_vector(theta, 0, DMP_object->get_num_basis()*DMP_object->get_dof());
    theta = NULL;
  }
  if (eTheta != NULL)
  {
    my_free_vector(eTheta, 0, DMP_object->get_num_basis()*DMP_object->get_dof());
    eTheta = NULL;
  }
  if (bestR != NULL)
  {
    my_free_vector(bestR, 0, sampLen);
    bestR = NULL;
  }
  if (bestEtheta != NULL)
  {
    my_free_matrix(bestEtheta, 0, sampLen, 0, DMP_object->get_num_basis()*DMP_object->get_dof());
    bestEtheta = NULL;
  }
  if (w != NULL)
  {
    my_free_vector(w, 0, DMP_object->get_num_basis());
    w = NULL;
  }

  if (DMP_object != NULL)
  {
    delete DMP_object;
    DMP_object = NULL;
  }

  // Read CBi trajectory
  // mrdplot_convert(CBi_traj_file, &CBi_traj, &vnames_CBi, &units_CBi, &freq, &dof_CBi, &n_CBi);
  mrdplot_read(CBi_traj_file, &CBi_traj, &vnames_CBi, &units_CBi, &freq, &dof_CBi, &n_CBi);
  if (!set_active_dofs(vnames_CBi, dof_CBi, active_dofs))
    return FALSE;
  k = 1;
  for (i = 1; i <= active_dofs[0]; i++)
  {
    for (j = 1; j <= kinect_dofs[0]; j++)
    {
      if (active_dofs[i] == kinect_dofs[j])
      {
        active_kinect_dofs[k] = j;
        active_kinect_dofs_robot[k] = active_dofs[i];
        k++;
        break;
      }
    }
  }
  active_kinect_dofs[0] = active_kinect_dofs_robot[0] = k-1;
  printf("\n%d active Kinect DOFs:\n", active_kinect_dofs[0]);
  for (i = 1; i <= active_kinect_dofs[0]; i++)
    printf("%d ", active_kinect_dofs[i]);
  printf("\n%d active Kinect DOFs-robot:\n", active_kinect_dofs[0]);
    for (i = 1; i <= active_kinect_dofs_robot[0]; i++)
      printf("%d ", active_kinect_dofs_robot[i]);
  printf("\n\n%d active robot DOFs:", active_dofs[0]);
  for (i = 2; i <= active_dofs[0]+1; i++)
  {
    if (!((i-2)%8))
      printf("\n");
    printf("%s, ", vnames_CBi[i]);
  }
  printf("\n\n");


  	  //get dof indexes in dmp for active RL dofs
  	  k=1; k2=1;
  	  for (i = 1; i <= active_dofs[0]; i++){
  		  for (j = 1; j <= active_RL_dofs[0]; j++){
  			  //printf("active dof(i)= %d, activeRLdof]j]= %d\n", active_dofs[i],active_RL_dofs[j]);
			  if (active_dofs[i] == active_RL_dofs[j]){
				  active_RL_dofs_dmp[k] = i;
				  k++;
				  break;
			  }
			  //if break never happened then the dof is inactive
			  if (j == active_RL_dofs[0]) {
				  not_active_RL_dofs_dmp[k2] = i;
				  k2++;
			  }
		  }

  	  }
  	  active_RL_dofs_dmp[0] = k-1;
  	  not_active_RL_dofs_dmp[0] = k2-1;
  	  printf("\n%d active RL DOFs:\n", active_RL_dofs[0]);
  	  for (i = 1; i <= active_RL_dofs[0]; i++)
  	    printf("%d ", active_RL_dofs[i]);

  	  printf("\nactive RL dofs dmp:\n");
	  for (i=0; i<=active_RL_dofs_dmp[0]; ++i)
		  printf(", %d ", active_RL_dofs_dmp[i]);
  	  printf("\ninactive RL dofs dmp:\n");
  		  for (i=0; i<=not_active_RL_dofs_dmp[0]; ++i)
	  printf(", %d ", not_active_RL_dofs_dmp[i]);
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

  // DMP_object = new DMP_structure(DMP_file);
  DMP_object = new DMP_structure(active_dofs[0], 75, 2.0, 12.0, 3.0);
  if (!DMP_object->example_Matrix(CBi_traj, n_CBi, dof_CBi))
    return FALSE;
  DMP_object->DMP_estimate(0);
  // DMP_object->DMP_param_print();

  // Initialize DMP integration
  for (int i = 1; i <= active_dofs[0]; i++)
  {
    initial_positions[i] = CBi_traj[1][i+1];
    initial_velocities[i] = 0.0;
  }
  DMP_object->set_initial_DMP_state(&(initial_positions[1]), &(initial_velocities[1]));

  freq = Kinect_traj[2][1];
  for (i = 1; i < n_Kinect; i++)
    Kinect_traj[i][1] = Kinect_traj[i+1][1] - freq;

   // include this file to define contact points (needed to compute center of pressure)
#include "LEKin_contact.h"

  sampLen = 1;              // how many best trials to compute new iteration from
  sigma =   20;             	// variance of perturbations
  R_factor= 0.1;			// how important is the COP reward compared to trajectory reward
  maxIter = INT_MAX;

  srand ( time(NULL) );     // initialize random seed

  theta = my_vector(0, DMP_object->get_num_basis()*DMP_object->get_dof());
  eTheta = my_vector(0, DMP_object->get_num_basis()*DMP_object->get_dof());
  bestEtheta = my_matrix(0, sampLen, 0, DMP_object->get_num_basis()*DMP_object->get_dof());
  bestR = my_vector(0, sampLen);
  w = my_vector(0, DMP_object->get_num_basis());

  test_traj= my_matrix(1, MAX_LENGTH * servo_rate, 1, dof_CBi);
  test_traj2=my_matrix(1, MAX_LENGTH * servo_rate, 1, dof_CBi);
  test_traj3=my_matrix(1, MAX_LENGTH * servo_rate, 1, dof_CBi);
  dofLen = DMP_object->get_dof();       // number of dofs in dmp
  wLen = DMP_object->get_num_basis();   // number of weights in dmp

  for (i = 0; i < sampLen; ++i)
    bestR[i] = -DBL_MAX;//-INFINITY;

  for (i = 0; i < DMP_object->get_dof(); ++i)
  {
    DMP_object->get_weights(i, &theta[i*DMP_object->get_num_basis()]);
    DMP_object->get_weights(i, &eTheta[i*DMP_object->get_num_basis()]);
  }

  // prepare going to the default posture
  bzero((char *)&(target_[1]),N_DOFS*sizeof(target_[1]));
  for (i = 1; i <= N_DOFS; i++)
    target_[i] = joint_default_state[i];
  target_[L_EB].th = target_[R_EB].th = 0.05;
  target_[B_TFE].th = 0.2;

  for (int i = 1; i <= active_dofs[0]; i++)
  {
    target_[active_dofs[i]].th = initial_positions[i];
    target_[active_dofs[i]].thd = initial_velocities[i];
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
  // go to the target using inverse dynamics (ID)
  if (!there)
  {
    if (!go_target_wait_ID(target_))
    {
      return FALSE;
    }
  }

  // ready to go
  do
  {
    if (!get_int(const_cast<char*>("Enter 1 to start or anthing else to abort ..."), ans, &ans))
    {
      return FALSE;
    }
  } while (ans == 999);

  // only go when user really types the right thing
  if (ans != 1) 
  {
    return FALSE;
  }

  start_time_ = task_servo_time;
  printf("start time = %.3f, task_servo_time = %.3f\n", start_time_, task_servo_time);

  previous_time_ = task_servo_time - start_time_;

  tdmp = 0;
  experiment = TRUE;
  tback = 0;
  Kinect_counter = 1;
  n = 0;
  numUpdates=0;

  return TRUE;
}

int RL_task::run()
{
double task_time = task_servo_time - start_time_;
int i, j, k, utez, dof;
double time_to_return = 2.0;

static int tSave = 1, tSaveCount = 0;

  //printf("active dofs 0= %d", active_dofs[0]);
  //check if the robot is falling
  if (cog.x[_Z_] < -0.15)
  {
    experiment = FALSE;
    freezeBase(TRUE);
    tback=0;
    previous_time_ = task_time;
    R = -1;
    return TRUE;
  }

  // perform one step of experiment
  if (experiment)
  {
    // Experiment not finished yet
    if (tdmp <= DMP_object->get_tau())
    {
      if (!receive_contacts())
        printf("\n\nERROR!!! Couldn't receive contacts!\n\n");
      ComputeCenterOfPressure(COP);

      errorCop += copError();

      DMP_object->DMP_integrate((task_time - previous_time_));
      tdmp += (task_time - previous_time_);

      for (i = 1; i <= active_dofs[0]; ++i)
      {
        joint_des_state[active_dofs[i]].th = DMP_object->get_position(i-1);
        joint_des_state[active_dofs[i]].thd = DMP_object->get_velocity(i-1);
        joint_des_state[active_dofs[i]].thdd = DMP_object->get_acceleration(i-1);
      }

      if (Kinect_counter <= n_Kinect-1 && tdmp >= Kinect_traj[Kinect_counter][1])
      {
	  //compute error between executed and desired (kinect) trajectory
        for (i = 1; i <= active_kinect_dofs[0]; i++){
        	errorTraj += my_SQR(Kinect_traj[Kinect_counter][active_kinect_dofs[i+1]] - joint_state[active_kinect_dofs_robot[i]].th);


        	if (n==0){
        		//save starting trajectory
        		test_traj3[Kinect_counter][i+1]= joint_state[active_kinect_dofs_robot[i]].th;
        	}
        	else if (n==maxIter+1){
        		//save final trajectory
        		test_traj2[Kinect_counter][i+1]= Kinect_traj[Kinect_counter][active_kinect_dofs[i+1]];//+1 because the first col is time
        	  	test_traj [Kinect_counter][i+1]= joint_state[active_kinect_dofs_robot[i]].th;
        	}

        }
        if (n==0) test_traj2[Kinect_counter][1]= test_traj [Kinect_counter][1] = tdmp;
        else if (n==maxIter+1) test_traj3[Kinect_counter][1] = tdmp;
		test_trj_len = Kinect_counter++; // number of rows in data matrix

        //printf("test traj: % f, test traj2: % f, dif= %el, erTrj= %el\n",test_traj[Kinect_counter-1][n], test_traj2[Kinect_counter-1][n], test_traj[Kinect_counter-1][n] - test_traj2[Kinect_counter-1][n]), errorTraj;
      }

    }
    else
    {
      // Experiment finished, return reward
    	R_factor=0.1;//0.1;samo za test,brisi k je ze gor
      R = 1.0 / (errorTraj + 1.0) + R_factor / (errorCop + 1.0);
      //printf("\nR traj: % ef, R cop: % ef \n", 1.0 / (errorTraj + 1.0) , R_factor / (errorCop + 1.0));
      experiment = FALSE;
    }
  }
  else
  // No experiment, go to origin and move back to start position
  {
	if (tback==0){
		freezeBase(TRUE);//always freeze base at the end of experiment
		tback++;
	}
	//wait 1 second in the origin
	else if (tback < (int) (1*servo_rate + 0.5)){
		//for (i=1; i<=N_DOFS; ++i)
			//joint_des_state[i].th= joint_default_state[i].th;
		//joint_des_state[B_TFE].th=0.2;
		tback++;
	}
	//go to start position, wait one second
	else if (tback < (int) (2*servo_rate + 0.5))
    {
      for (i = 1; i <= N_DOFS; ++i)
      {
        joint_des_state[i].th = (target_[i].th);// - joint_des_state[i].th) / (((int) (time_to_return*servo_rate + 0.5)) - tback);
      }
      tback++;
    }
    // unfreeze base and wait time to return for the robot to calm down
	else if (tback < ((int) ((time_to_return+2)*servo_rate + 0.5)) + servo_rate){
		if (freeze_base)
			freezeBase(FALSE);
		tback++;
	}

    // and make new policy
    else
    {
      printf("n = %d, R = %le, R traj: % ef, R cop: % ef, old theta = %f", n, R, 1.0/(errorTraj+1.0) , R_factor/(errorCop+1.0), theta[active_RL_dofs_dmp[1]*wLen+wLen/2]);
      // Generate new policy
      newPolicy(R);
      printf(", new theta = %f\n", theta[active_RL_dofs_dmp[1]*wLen+wLen/2]);//print old and new theta for an arbitrary weight, for easier checking of progress

      if (n < maxIter)
      {
        //perturb weights
	    for (dof = 1; dof <= active_RL_dofs_dmp[0]; ++dof)
        {
			for (utez = 0; utez < wLen; ++utez)
			{
				eTheta[active_RL_dofs_dmp[dof]*wLen + utez] = theta[active_RL_dofs_dmp[dof]*wLen + utez] + sigma*randn();
				w[utez] = eTheta[active_RL_dofs_dmp[dof]*wLen + utez];
			}
			DMP_object->set_weights(active_RL_dofs_dmp[dof], &w[0]);
        }
	    //do not perturb these weights
	    for (dof = 1; dof <= not_active_RL_dofs_dmp[0]; ++dof)
			{
			for (utez = 0; utez < wLen; ++utez)
				w[utez] = theta[not_active_RL_dofs_dmp[dof]*wLen + utez];
	    	}

			DMP_object->set_weights(not_active_RL_dofs_dmp[dof], &w[0]);
      }

      //if we are finished, perform one more trial with best parameters, save trajectory in test_traj.mrd
      if (n == maxIter)
      {
        printf("max iter\n");
        for (dof = 0; dof < dofLen; ++dof)
        {
          for (utez = 0; utez < wLen; ++utez)
            w[utez] = theta[dof*wLen + utez];
          DMP_object->set_weights(dof, &w[0]);
        }
      }
      if (n == maxIter+1)
      {
        printf("\nfinal reward = %le\n", R);
        /*mrdplot_write(test_traj_file, test_traj, vnames_CBi, units_CBi,//imena so narobe
                      (double) servo_rate, dof_CBi, test_trj_len);
        mrdplot_write(test_traj2_file , test_traj2, vnames_CBi, units_CBi,
					  (double) servo_rate, dof_CBi, test_trj_len);*/
        data_write();

        reward_write();
        printf("Data saved.\n");

        n++;
        return FALSE;
      }


	    // reset experiment params
		++n;
		tback = 0;
		experiment = 1;
		tdmp = 0;
		tSave = 1;
		Kinect_counter = 1;
		R = errorTraj= errorCop= 0;
		DMP_object->reset_timer();
		DMP_object->set_initial_DMP_state(&initial_positions[1], &initial_velocities[1]);
    }
  }
  // printf("des state: %f, exp %d\n", joint_des_state[R_SAA].th, exp);

  previous_time_ = task_time;
  return TRUE;
}

int RL_task::changeParameters()
{
  maxIter= n+1;
  printf("\n stop after next trial\n");
  return TRUE;
}

#include <math.h>
#include <cstdlib>
double randn(void)
//returns random number with sigma=1 and mean=0
{
double x1, x2, w, y1, y2;

  do
  {
    x1 = 2.0 * rand()/RAND_MAX - 1.0;
    x2 = 2.0 * rand()/RAND_MAX - 1.0;
    w = x1 * x1 + x2 * x2;
  } while ( w >= 1.0 );

  w = sqrt( (-2.0 * log( w ) ) / w );
  y1 = x1 * w;
  y2 = x2 * w;

  return y2;
}


//add number to the start of array, shift other values to the right, discarding last element.
void arrAdd(double *arr, int arrLen, double newValue)
{
  for (int i = arrLen-1; i> 0; --i)
  {
    arr[i] = arr[i-1];
  }
  arr[0] = newValue;
}

// add row to the start of matrix, shift other rows down, discarding last row.
void matrixAdd(double* matx, int numRows, int numCols, double *newValue)
{
  for (int i = numRows - 1; i > 0; --i)
    for (int j = 0; j < numCols; ++j)
      matx[i*numCols + j]= matx[(i-1)*numCols +j];

  for (int j = 0; j < numCols; ++j)
    matx[j]= newValue[j];
}


void RL_task::newPolicy(double R)//(double *eTheta, double R, double *newTheta)
{
Vector impNum;							//numerator for "importance sampler"
double impDenum = 0;					//denominator
int i, utez, dof;						//counters

  impNum = my_vector(0, wLen*dofLen);

  //update bestR, bestTheta
  for (i=0; i< sampLen; ++i)
  {
    if (R > bestR[i])//da to vedno dela mora bit bestr inicaliziran na - inf
    {
      arrAdd(&bestR[i], sampLen-i, R);

      matrixAdd(&bestEtheta[i][0], sampLen-i, wLen*dofLen, &eTheta[0]);

      printf("R>bestR!!!!!");
      if (numUpdates<10000){//max updates
    	  saveR[numUpdates][0]=n;
    	  saveR[numUpdates][1]=R;
      }
      else
    	  printf(", numUpdates too big to save. ");
      numUpdates++;
      break;
    }
  }

	/*printf("bestEth= ");
	for (i=0; i< sampLen; ++i)
		printf("% f",bestEtheta[i][(dofLen*wLen-1)/2]);
	printf("\n");
	printf("th= ");
	*///for (i=0; i< sampLen; ++i)
	/*for (i=1; i<=wLen; ++i)
		printf("% f",theta[active_RL_dofs_dmp[1]*wLen+i]);
	printf("\n");
*/
	//update policy
	for (i = 0; i < sampLen; ++i)
	{
		if (i > n)
			break;    // break if we had less trials than spaces in bestR and bestTheta arrays.

		for (dof = 0; dof < dofLen; ++dof)
		{
		  for (utez=0; utez<wLen; ++utez)
		  {
			impNum[dof*wLen + utez] += bestR[i]* (bestEtheta[i][dof*wLen + utez] - theta[dof*wLen + utez]);

			if (isinf(impNum[utez*dof]))
			  printf("inf ERROR!!, bestEtheta: %f, theta: %f, bestR %f\n",
					 bestEtheta[i][dof*wLen + utez], theta[dof*wLen + utez], bestR[i]);
		  }
    }
    impDenum += bestR[i];
  }
	//printf("Impnum= % f, ImpDenom= % f\n", impNum[(dofLen*wLen-1)/2], impDenum);

  for (dof = 0; dof < dofLen; ++dof)
    for (utez = 0; utez < wLen; ++utez)
      theta[dof*wLen + utez] += impNum[dof*wLen + utez] / impDenum;

	my_free_vector(impNum, 0, wLen*dofLen);
}

static int receive_contacts(void)
{
int i,j;
  
  if (semTake(sm_contacts_sem,ns2ticks(TIME_OUT_NS)) == ERROR)
    return FALSE;
  
  for (i = 0; i <= n_contacts; ++i)
  {
    contacts[i].status = sm_contacts->contact[i].status;
    for (j = 1; j <= N_CART; ++j)
      contacts[i].f[j] = sm_contacts->contact[i].f[j];
  }
  
  semGive(sm_contacts_sem);
  
  return TRUE;
}

double RL_task::copError(void){
	double ss;
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

	cog_tmp[1] = R[1][1]*(COP[1] - MSP_new[1]) + R[1][2]*(COP[2] - MSP_new[2]);
	cog_tmp[2] = R[2][1]*(COP[2] - MSP_new[2]) + R[2][2]*(COP[2] - MSP_new[2]);

	//error is length of the vector from cop to MSP
	return sqrt(my_SQR(cog_tmp[1]) + my_SQR(cog_tmp[2]));
}

void RL_task::reward_write(void){
	FILE *file;
	file = fopen(PREFS "reward.txt","w");
	fprintf(file, "total trials = %d, number of updates = %d, final reward = % f\n", n, numUpdates, R);
	for (unsigned int i=0; i<numUpdates; ++i){
		fprintf(file," %f, ", saveR[i][0]);
		fprintf(file," % f ", saveR[i][1]);
		fprintf(file,"\n");
	}
	fclose(file);
}

void RL_task::data_write(void){
	char **vnames, **vnames_active;
	int i;

	vnames_active = (char **) calloc(2*N_DOFS+2, sizeof(char *));
	vnames 		  = (char **) calloc(2*N_DOFS+2, sizeof(char *));
	for (i = 1 ; i <= 2*N_DOFS+1; i++)
	{
		vnames_active[i] = (char *) calloc(40, sizeof(char));
	    vnames[i] = (char *) calloc(40, sizeof(char));
	}

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


	for (i=1; i<= active_kinect_dofs_robot[0]; ++i){
		strcpy(vnames_active[i+1], vnames[active_kinect_dofs_robot[i]+1]);//+1 ker je gor vse od 2 naprej
	}

	mrdplot_write(test_traj_file, test_traj, vnames_active, units_CBi,//active_kinect_dofs_robot[0] = stevilo dof
	                      (double) servo_rate, active_kinect_dofs_robot[0], test_trj_len);
	mrdplot_write(test_traj2_file , test_traj2, vnames_active, units_CBi,
				  	  	  (double) servo_rate, active_kinect_dofs_robot[0], test_trj_len);
	mrdplot_write(test_traj3_file , test_traj3, vnames_active, units_CBi,
				  	  	  (double) servo_rate, active_kinect_dofs_robot[0], test_trj_len);


	for (i = 1; i <= 2*N_DOFS+1; i++){
		free((void *) vnames_active[i]);
		free((void *) vnames[i]);
	}
	free((void *) vnames_active);
	free((void *) vnames);
}


