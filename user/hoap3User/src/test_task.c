/*============================================================================
==============================================================================
                      
                              test_task.c
 
==============================================================================
Remarks:

       test task

============================================================================*/

/* vxWorks includes */
#include "SL_system_headers.h"
#ifndef VX
#endif
#ifdef powerpc
#include <GLUT/glut.h>
#else
#include "GL/glut.h"
#endif

/* private includes */
#include "SL.h"
#include "SL_user.h"
#include "SL_tasks.h"
#include "SL_task_servo.h"
#include "SL_kinematics.h"
#include "SL_dynamics.h"
#include "SL_collect_data.h"
#include "rfwr.h"
#include "SL_shared_memory.h"
#include "SL_openGL.h"

/* defines */

/* local variables */
static double     time_step;
static double     start_time=0;
static double        task_time;
static int           ax= _Z_;

/* global functions */
void add_test_task(void);

/* local functions */
static int  init_test_task(void);
static int  run_test_task(void);
static int  change_test_task(void);

/*****************************************************************************
******************************************************************************
Function Name	: add_test_task
Date		: Feb 1999
Remarks:

adds the task to the task menu

******************************************************************************
Paramters:  (i/o = input/output)

none

*****************************************************************************/
void
add_test_task( void )

{
  int i, j;
  
  addTask("Test Task", init_test_task, 
	  run_test_task, change_test_task);

}    

/*****************************************************************************
******************************************************************************
  Function Name	: init_test_task
  Date		: Dec. 1997

   Remarks:

  initialization for task

******************************************************************************
  Paramters:  (i/o = input/output)

       none

 *****************************************************************************/
static int 
init_test_task(void)
{
  int    j,i;
  int    ans;

  get_int("Which axis?",ax,&ax);
  freezeBase(TRUE);

  ans = 999;
  while (ans == 999) {
    if (!get_int("Enter 1 to start or anthing else to abort ...",ans,&ans))
      return FALSE;
  }
  
  if (ans != 1) 
    return FALSE;
  
  task_time = 0.0;
  start_time = task_servo_time;
  
  return TRUE;

}

/*****************************************************************************
******************************************************************************
  Function Name	: run_test_task
  Date		: Dec. 1997

  Remarks:

  run the task from the task servo: REAL TIME requirements!

******************************************************************************
  Paramters:  (i/o = input/output)

  none

 *****************************************************************************/
static int 
run_test_task(void)
{
  int j, i;
  double pos[N_CART+1];
  double rot[N_CART+1];


  task_time += 1./(double)task_servo_rate;

  if (task_time < 0.1) {
    //uext_sim[0].t[ax] =  3;
    //uext_sim[7].f[ax] =  uext_sim[14].f[ax] =  3;
    //uext_sim[0].f[ax] =  3;
  } else {
    //bzero((void *)uext_sim,sizeof(SL_uext)*(n_dofs+1));
    //freeze();
    //joint_des_state[R_KFE].th = joint_state[R_KFE].th;
    //joint_des_state[R_KFE].thd = joint_state[R_KFE].thd;
    //joint_des_state[R_KFE].uff = 10;
    return TRUE;
  }

  /*
  for (i=1; i<=N_CART; ++i) {
    pos[i] = 0.0;
    rot[i] = 0.0;
  }

  pos[_X_] = 0.2;
  pos[_Y_] = 0.4;
  pos[_Z_] = 0.1 * sin(2.*PI*0.5*(task_servo_time-start_time))-0.05;
  changeObjPosByName("block",pos,rot);
  */

  return TRUE;

}

/*****************************************************************************
******************************************************************************
  Function Name	: change_test_task
  Date		: Dec. 1997

  Remarks:

  changes the task parameters

******************************************************************************
  Paramters:  (i/o = input/output)

  none

 *****************************************************************************/
static int 
change_test_task(void)
{
  int j, i;
  return TRUE;

}

