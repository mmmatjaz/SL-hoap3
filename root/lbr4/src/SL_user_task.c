/*!=============================================================================
  ==============================================================================

  \file    SL_user_task.c

  \author  Stefan Schaal
  \date    Nov. 2007

  ==============================================================================
  \remarks
  
  Allows running user specific computation in the main task servo loop
  
  ============================================================================*/
  
// SL general includes of system headers
#include "SL_system_headers.h"

// user specific headers
#include "SL.h"
#include "SL_user.h"
#include "SL_common.h"
#include "SL_task_servo.h"
#include "utility.h"
#include "mdefs.h"
#include "SL_dynamics.h"

// global variables

// local variables
  
// local functions

// external functions


/*!*****************************************************************************
 *******************************************************************************
 \note  init_user_task
 \date  Nov. 2007
 
 \remarks 
 
 initializes user task functionality
 
 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 none 

 ******************************************************************************/
int
init_user_task(void)

{
  
  int i,j;

  return TRUE;
}

/*!*****************************************************************************
 *******************************************************************************
 \note  run_user_task
 \date  Nov. 2007
 
 \remarks 
 
 this function is clocked out of the task servo
 
 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 none 

 ******************************************************************************/
int
run_user_task(void)

{
  
  int i,j;


  return TRUE;
}

