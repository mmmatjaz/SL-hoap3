/*============================================================================
==============================================================================
                      
                              kinect_task_wrapper.cpp
 
==============================================================================
Remarks:

  sekeleton that wrapps a Kinect task written in C++

============================================================================*/

// SL system headers
#include "SL_system_headers.h"

// SL includes
#include "SL.h"
#include "SL_user.h"
#include "SL_tasks.h"

// local includes
#include "kinect_task.h"

extern "C" {
  // global function
  void add_kinect_task();

  // local functions
  static int change_kinect_task(void);
  static int init_kinect_task(void);
  static int run_kinect_task(void);
}

static kinect_task kinect_Task;

/*****************************************************************************
Function Name	: add_kinect_task
Date		: July 2012
Remarks:

adds the task to the task menu

******************************************************************************
Paramters:  (i/o = input/output)

none

*****************************************************************************/
void
add_kinect_task( void )
{
  char task_name[200];
  strcpy(task_name, "Kinect Task");
  addTask(task_name, init_kinect_task, run_kinect_task,
		  change_kinect_task);
}    

/*****************************************************************************
******************************************************************************
  Function Name	: init_kinect_task
  Date		: July 2012

  Remarks:

  initialization for task

******************************************************************************
  Paramters:  (i/o = input/output)

       none

 *****************************************************************************/
static int 
init_kinect_task(void)
{
  return kinect_Task.initialize();
}

/*****************************************************************************
******************************************************************************
  Function Name	: run_kinect_task
  Date		: July 2012

  Remarks:

  run the task from the task servo: REAL TIME requirements!

******************************************************************************
  Paramters:  (i/o = input/output)

  none

 *****************************************************************************/
static int 
run_kinect_task(void)
{
  return kinect_Task.run();
}

/*****************************************************************************
******************************************************************************
  Function Name	: change_kinect_task
  Date		: July 2012

  Remarks:

  changes the task parameters

 ******************************************************************************
  Paramters:  (i/o = input/output)

  none

 *****************************************************************************/
static int 
change_kinect_task(void)
{
  return kinect_Task.changeParameters();
}
