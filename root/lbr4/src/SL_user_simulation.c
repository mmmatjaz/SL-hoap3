/*!=============================================================================
  ==============================================================================

  \file    SL_user_simulation.c

  \author  Stefan Schaal
  \date    Nov. 2007

  ==============================================================================
  \remarks
  
  This program contains all user functions for the numerical simluation of
  a robot
  
  ============================================================================*/
  
// SL general includes of system headers
#include "SL_system_headers.h"

/* user specific headers */
#include "SL.h"
#include "SL_integrate.h"
#include "SL_user.h"
#include "SL_common.h"
#include "SL_objects.h"
#include "SL_simulation_servo.h"
#include "utility.h"
#include "utility_macros.h"
#include "mdefs.h"
#include "SL_dynamics.h"

/* global variables */

/* local variables */
  
/* local functions */

/* external functions */


/*!*****************************************************************************
 *******************************************************************************
 \note  init_user_simulation
 \date  July 1998
 
 \remarks 
 
 initializes everything needed for the numerical simulation.
 
 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 none 

 ******************************************************************************/
int
init_user_simulation(void)

{
  
  int i,j,n;

  // initalize objects in the environment
  readObjects(config_files[OBJECTS]);

  // assign contact force mappings
#include "LEKin_contact.h"

  // change numerical integration
  n_integration = 1;
  integrate_method = INTEGRATE_EULER;

  // change the freeze_base_pos[] array if needed
  freeze_base_pos[_X_] = 1.0;  

  // zero the state of the robot
  reset();
  

  return TRUE;
}


/*!*****************************************************************************
 *******************************************************************************
\note  run_user_simulation
\date  Nov. 7, 2007
   
\remarks 

      computes additional simulation values, e.g., misc sensors

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output


 ******************************************************************************/
int
run_user_simulation(void)

{
  int i,j;

  return TRUE;
}











