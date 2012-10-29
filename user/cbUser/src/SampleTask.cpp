/*============================================================================
==============================================================================
                      
                              SampleTask.cpp
 
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
#include "SampleTask.h"

SampleTask::SampleTask() : start_time_(0), freq_(0), amp_(0) {

}

SampleTask::~SampleTask() {

}


int SampleTask::initialize()
{
  start_time_ = 0.0;

  static int firsttime = TRUE;
  
  if (firsttime){
    firsttime = FALSE;
    freq_ = 0.1; // frequency
    amp_  = 0.5; // amplitude
  }

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

  start_time_ = task_servo_time;
  printf("start time = %.3f, task_servo_time = %.3f\n", start_time_, task_servo_time);

  return TRUE;
}

int SampleTask::run()
{
  double task_time = task_servo_time - start_time_;
  double omega = 2.0*PI*freq_;

  // NOTE: all array indices start with 1 in SL
  for (int i=R_EB; i<=R_EB; ++i) {
    target_[i].th   = joint_default_state[i].th + amp_*sin(omega*task_time);
    target_[i].thd = amp_ * omega*cos(omega*task_time);
    target_[i].thdd = -amp_ * omega*omega*sin(omega*task_time);
  }

  // the following variables need to be assigned
  for (int i=1; i<=N_DOFS; ++i) {
    joint_des_state[i].th = target_[i].th;
    joint_des_state[i].thd = target_[i].thd;
    joint_des_state[i].thdd = target_[i].thdd;
    joint_des_state[i].uff = 0.0;
  }

  return TRUE;
}

int SampleTask::changeParameters()
{
  int ivar;
  double dvar;

  get_int(const_cast<char*>("This is how to enter an integer variable"),ivar,&ivar);
  get_double(const_cast<char*>("This is how to enter a double variable"),dvar,&dvar);

  return TRUE;
}

