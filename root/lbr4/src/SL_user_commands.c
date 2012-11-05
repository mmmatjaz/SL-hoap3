/*!=============================================================================
  ==============================================================================

  \file    SL_user_commands.c

  \author 
  \date   

  ==============================================================================
  \remarks

      various functions that allow the user to monitor the robot

  ============================================================================*/

// SL general includes of system headers
#include "SL_system_headers.h"

/* private includes */
#include "SL.h"
#include "SL_user.h"
#include "SL_common.h"
#include "SL_motor_servo.h"
#include "utility.h"
#include "SL_man.h"

/* global variables */

/* variables for the motor servo */

/* global functions */
int init_user_commands(void);

/* local functions */

/*!*****************************************************************************
 *******************************************************************************
\note  init_user_commands
\date  Feb 1999
\remarks 

 initializes various things

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

none

 ******************************************************************************/
int
init_user_commands(void)
{
  /* addToMan("where","print all current state information",where); */
  return TRUE;
}

