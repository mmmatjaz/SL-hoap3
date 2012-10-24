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

#define  N_DOFS_LEG    7
#define  N_DOFS_TORSO  2

/* global variables */

/* variables for the motor servo */

/* global functions */

/* local functions */
int  init_user_commands(void);
void where_ll(void);
void where_rl(void);
void where_torso(void);
void where_legs(void);


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

  addToMan("where_ll","state of left leg",where_ll);
  addToMan("where_rl","state of right leg",where_rl);
  addToMan("where_torso","state of torso",where_torso);
  addToMan("where_legs","state of both legs",where_legs);

  return TRUE;
}

/*!*****************************************************************************
 *******************************************************************************
\note  various interface functions
\date  Feb 1999
\remarks 

 initializes various things

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

none

 ******************************************************************************/
void
where_ll(void)
{
  where_utility(L_HFE,N_DOFS_LEG);
}
void
where_rl(void)
{
  where_utility(R_HFE,N_DOFS_LEG);
}
void
where_torso(void)
{
  where_utility(B_TAA,N_DOFS_TORSO);
}
void
where_legs(void)
{
  where_utility(L_HFE,N_DOFS_LEG);
  where_utility(R_HFE,N_DOFS_LEG);
}

