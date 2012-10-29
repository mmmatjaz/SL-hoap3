/*============================================================================
==============================================================================

                              dmp_exec.cpp

==============================================================================
Remarks:

      sekeleton to create the sample C++ task

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

// local includes
#include "dmp_exec.h"

/*#include "DMPstructure.h"

static char DMP_file_name[] = PREFS "DMP_param.txt"; static char DMP_save_name[] = PREFS "DMP_new.txt";

DMP_structure *DMP_object = NULL;*/

dmp_exec::dmp_exec()
{

	/*if (DMP_object != NULL)
		delete DMP_object;
	DMP_object = new DMP_structure(DMP_file_name);

	double joints[8], joint_vel[8];

	for (int i=0; i<8; ++i){
		joints[i]=0;
		joint_vel[i]=0;
	}

	DMP_object->set_initial_DMP_state(joints, joint_vel); DMP_object->reset_timer();*/

}

dmp_exec::~dmp_exec() {

}


int dmp_exec::initialize()
{
  start_time_ = 0.0;


  // prepare going to the default posture
  bzero((char *)&(target_[1]),N_DOFS*sizeof(target_[1]));
  for (int i=1; i<=N_DOFS; i++)
    {
      target_[i] = joint_default_state[i];
    }

  // go to the target using inverse dynamics (ID)
  if (!go_target_wait_ID(target_))
    {
    return FALSE;
    }

  // ready to go
  int ans = 999;
  while (ans == 999) {
    if (!get_int(const_cast<char*>("Enter 1 to start or anthing else to abort ..."),ans,&ans))
      {
      return FALSE;
      }
  }

  // only go when user really types the right thing
  if (ans != 1)
    {
    return FALSE;
    }

  previous_time_ = start_time_ = task_servo_time;
  printf("start time = %.3f, task_servo_time = %.3f\n", start_time_, task_servo_time);

  return TRUE;
}

int dmp_exec::run()
{
	/*
	double task_time = task_servo_time - start_time_;

	for (int i=R_SFE, j=0; i<=R_WAA+1; ++i, ++j)
	{
		DMP_object->DMP_integrate(task_time - previous_time_);

		joint_des_state[i].th = DMP_object->get_position(j);

		if (i==R_WAA+1)
			joint_des_state[B_TR].th = DMP_object->get_position(j);


	}


	 previous_time_ = task_time;

*/
  return TRUE;
}

int dmp_exec::changeParameters()
{
  int ivar;
  double dvar;

  get_int(const_cast<char*>("This is how to enter an integer variable"),ivar,&ivar);
  get_double(const_cast<char*>("This is how to enter a double variable"),dvar,&dvar);

  return TRUE;
}
