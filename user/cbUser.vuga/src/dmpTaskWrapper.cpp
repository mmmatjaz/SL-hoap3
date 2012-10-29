/*============================================================================
==============================================================================
                      
                              SampleTaskWrapper.cpp
 
==============================================================================
Remarks:

  sekeleton that wrappes a sample task written in C++

============================================================================*/

// SL system headers
#include "SL_system_headers.h"

// SL includes
#include "SL.h"
#include "SL_user.h"
#include "SL_tasks.h"

// local includes
#include "dmpTask.h"

extern "C" {
  // global function
  void add_dmp_task();

  // local functions
  static int change_dmp_task(void);
  static int init_dmp_task(void);
  static int run_dmp_task(void);
}

static dmpTask dmp_task;

/*****************************************************************************
Function Name	: add_dmp_task
Date		: Aug. 2012
Remarks:

adds the task to the task menu

******************************************************************************
Paramters:  (i/o = input/output)

none

*****************************************************************************/
void
add_dmp_task( void )
{
  char task_name[200];
  strcpy(task_name, "DMP Task");
  addTask(task_name, init_dmp_task, run_dmp_task, change_dmp_task);
}    

/*****************************************************************************
******************************************************************************
  Function Name	: init_dmp_task
  Date		: Aug. 2012

  Remarks:

  initialization for task

******************************************************************************
  Paramters:  (i/o = input/output)

       none

 *****************************************************************************/
static int 
init_dmp_task(void)
{
  return dmp_task.initialize();
}

/*****************************************************************************
******************************************************************************
  Function Name	: run_dmp_task
  Date		: Aug. 2012

  Remarks:

  run the task from the task servo: REAL TIME requirements!

******************************************************************************
  Paramters:  (i/o = input/output)

  none

 *****************************************************************************/
static int 
run_dmp_task(void)
{
  return dmp_task.run();
}

/*****************************************************************************
******************************************************************************
  Function Name	: change_dmp_task
  Date		: Aug. 2012

  Remarks:

  changes the task parameters

 ******************************************************************************
  Paramters:  (i/o = input/output)

  none

 *****************************************************************************/
static int 
change_dmp_task(void)
{
  return dmp_task.changeParameters();
}
