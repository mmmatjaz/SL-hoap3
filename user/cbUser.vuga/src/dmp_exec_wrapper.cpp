/*============================================================================
==============================================================================

                              dmp_execWrapper.cpp

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
#include "dmp_exec.h"

extern "C" {
  // global function
  void add_dmp_exec();

  // local functions
  static int change_dmp_Exec_cpp(void);
  static int init_dmp_Exec_cpp(void);
  static int run_dmp_Exec_cpp(void);
}

static dmp_exec dmp_Exec;

/*****************************************************************************
Function Name	: add_sample_task_cpp
Date		: Jan. 2010
Remarks:

adds the task to the task menu

******************************************************************************
Paramters:  (i/o = input/output)

none

*****************************************************************************/
void
add_dmp_exec( void )
{
  char task_name[200];
  strcpy(task_name, "DMP execute from file");
  addTask(task_name, init_dmp_Exec_cpp, run_dmp_Exec_cpp, change_dmp_Exec_cpp);
}

/*****************************************************************************
******************************************************************************
  Function Name	: init_dmp_Exec_cpp
  Date		: Jan. 2010

  Remarks:

  initialization for task

******************************************************************************
  Paramters:  (i/o = input/output)

       none

 *****************************************************************************/
static int
init_dmp_Exec_cpp(void)
{
  return dmp_Exec.initialize();
}

/*****************************************************************************
******************************************************************************
  Function Name	: run_dmp_Exec_cpp
  Date		: Dec. 1997

  Remarks:

  run the task from the task servo: REAL TIME requirements!

******************************************************************************
  Paramters:  (i/o = input/output)

  none

 *****************************************************************************/
static int
run_dmp_Exec_cpp(void)
{
  return dmp_Exec.run();
}

/*****************************************************************************
******************************************************************************
  Function Name	: change_dmp_Exec_cpp
  Date		: Jan. 2010

  Remarks:

  changes the task parameters

 ******************************************************************************
  Paramters:  (i/o = input/output)

  none

 *****************************************************************************/
static int
change_dmp_Exec_cpp(void)
{
  return dmp_Exec.changeParameters();
}
