/*!=============================================================================
  ==============================================================================

  \file    SL_user_sensor_proc_xeno.c

  \author  Stefan Schaal
  \date    Oct 2010

  ==============================================================================
  \remarks

  performs reading of sensors, translation to units, and sending out
  motor commands. This verion of the functions is for the actual robot

  ============================================================================*/
// SL general includes of system headers
#include "SL_system_headers.h"

// private includes
#include "utility.h"
#include "utility_macros.h"
#include "SL.h"
#include "SL_common.h"
#include "SL_user.h"
#include "SL_sensor_proc.h"
#include "SL_shared_memory.h"
#include "SL_motor_servo.h"
#include "SL_collect_data.h"
#include "SL_unix_common.h"
#include "SL_kinematics.h"

#define TIME_OUT_NS  1000000000

// local variables

// external variables
extern int           motor_servo_errors;

// global functions

// local functions
static int receive_sim_state(void);
static int receive_misc_sensors(void);
static int send_des_command(void);

/*!*****************************************************************************
 *******************************************************************************
\note  init_user_sensor_processing
\date  Nov. 2007

\remarks 

          Initializes all user specific sensory processing

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

     none

 ******************************************************************************/
int
init_user_sensor_processing(void)
{
  int res;
  char string[256];
  int i;
  
  
  updateDataCollectScript();
  
  return TRUE;
}


/*!*****************************************************************************
 *******************************************************************************
\note  read_user_sensors
\date  Dec 1997

\remarks 

    gets sensor readings from the robot and converts them into standard
    units

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 \param[out]    raw :     the raw sensor readings
 \param[out]    misc_raw: the raw miscelleneous sensor readings

 ******************************************************************************/
int
read_user_sensors(SL_Jstate *raw,double *misc_raw)
{
  int i,j;
  static int firstTime = TRUE;

  return TRUE;
}

/*!*****************************************************************************
 *******************************************************************************
\note  send_user_commands
\date  April 1999

\remarks 

    translates the commands into raw and sends them to the robot

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 \param[in]     commands : the structure containing the commands

 ******************************************************************************/
int
send_user_commands(SL_Jstate *command)

{

  return TRUE;
}


/*!*****************************************************************************
 *******************************************************************************
\note  userCheckForMessage
\date  Feb. 2009

\remarks 

this function allows the user to intercept a message send to the
motor servo and use this information in sensor_user_proc

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 \param[in]     name : message identifying name
 \param[in]     k    : index of message in shared memory

 ******************************************************************************/
void
userCheckForMessage(char *name, int k)
{
  int i,j;

  //don't take any semaphore as the checkForMessages already did it

}

/*!*****************************************************************************
 *******************************************************************************
\note  user_controller
\date  Feb. 2009

\remarks 

          allows the user to modify the commands currently computed by 
          the active controller. Note that only u is actually used in
          the final send out of the commands to the robot, and ufb is only
          to kept as feedback to the user for data collection.

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 \param[in,out] u     : the current total command
 \param[in,out] ufb   : the current feedback command

 ******************************************************************************/
void
user_controller(double *u, double *uf)
{
	int i,j;
}
