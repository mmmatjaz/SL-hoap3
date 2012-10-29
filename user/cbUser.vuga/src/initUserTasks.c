/*============================================================================
==============================================================================
                      
                              initUserTasks.c
 
==============================================================================
Remarks:

         Functions needed to initialize and link user tasks for the
         simulation

============================================================================*/

// system headers
#include "SL_system_headers.h"

// local headers
#include "SL.h"
#include "SL_user.h"
#include "SL_task_servo.h"
#include "SL_integrate.h"
#include "SL_common.h"
#include "SL_dynamics.h"
//#include "SL_collect_data.h"

// global variables

// local variables
static int user_tasks_initialized = FALSE;

// external functions
extern void toggleSimulatedBaseState(void);


/*****************************************************************************
******************************************************************************
Function Name	: initUserTasks
Date			: June 1999
   
Remarks:

      initialize tasks that are not permanently linked in the simulation
      This replaces the <ltask facility in vxworks -- just that we cannot
      do on-line linking in C.

******************************************************************************
Paramters:  (i/o = input/output)

  none   

*****************************************************************************/
void
initUserTasks(void)
{
	extern void add_sample_task();
	extern void add_dmp_task();
    extern void add_kinect_task();
    extern void add_RL_task();

	// use the true base state from the simulation servo
	toggleSimulatedBaseState();
	
	freeze_base_pos[_X_] = 0;
	freeze_base_pos[_Y_] = 0;
	freeze_base_pos[_Z_] = 0.05;
	freezeBase(TRUE);
	
	//setTaskByName("stopcd");
	stopcd();

	add_sample_task();
	add_dmp_task();
    add_kinect_task();
	add_RL_task();
}

