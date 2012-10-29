/*============================================================================
==============================================================================
                      
                    Reinforcement Learning Task Wrapper.cpp
 
==============================================================================
Remarks:

  sekeleton that wrappes a reinforcement learning task written in C++

============================================================================*/

// SL system headers
#include "SL_system_headers.h"

// SL includes
#include "SL.h"
#include "SL_user.h"
#include "SL_tasks.h"

// local includes
#include "RL_task.h"

extern "C" {
  // global function
  void add_RL_task();

  // local functions
  static int change_RL_task(void);
  static int init_RL_task(void);
  static int run_RL_task(void);
}

static RL_task rl_task;

/*****************************************************************************
Function Name	: add_RL_task
Date		: Jan. 2012
Remarks:

adds the task to the task menu

******************************************************************************
Paramters:  (i/o = input/output)

none

*****************************************************************************/
void
add_RL_task( void )
{
  char task_name[200];
  strcpy(task_name, "Reinforcement Learning Task");
  addTask(task_name, init_RL_task, run_RL_task, change_RL_task);
}    

/*****************************************************************************
******************************************************************************
  Function Name	: init_RL_task
  Date		: Aug. 2012

  Remarks:

  initialization for task

******************************************************************************
  Paramters:  (i/o = input/output)

       none

 *****************************************************************************/
static int 
init_RL_task(void)
{
  return rl_task.initialize();
}

/*****************************************************************************
******************************************************************************
  Function Name	: run_RL_task
  Date		: Aug. 2012

  Remarks:

  run the task from the task servo: REAL TIME requirements!

******************************************************************************
  Paramters:  (i/o = input/output)

  none

 *****************************************************************************/
static int 
run_RL_task(void)
{
  return rl_task.run();
}

/*****************************************************************************
******************************************************************************
  Function Name	: change_RL_task
  Date		: Aug. 2012

  Remarks:

  changes the task parameters

 ******************************************************************************
  Paramters:  (i/o = input/output)

  none

 *****************************************************************************/
static int 
change_RL_task(void)
{
  return rl_task.changeParameters();
}
