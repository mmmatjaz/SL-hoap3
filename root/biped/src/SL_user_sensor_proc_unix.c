/*!=============================================================================
  ==============================================================================

  \file    SL_user_sensor_proc_unix.c

  \author  Stefan Schaal
  \date    July 2010

  ==============================================================================
  \remarks

  performs reading of sensors, translation to units, and sending out
  motor commands. This verion of the functions is just a simulation
  interface

  ============================================================================*/

// SL general includes of system headers
#include "SL_system_headers.h"

// private includes
#include "utility.h"
#include "SL.h"
#include "SL_common.h"
#include "SL_user.h"
#include "SL_sensor_proc.h"
#include "SL_shared_memory.h"
#include "SL_motor_servo.h"

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
  int i,j;

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

  // get simulated sensory data 
  if (!receive_sim_state())
    printf("Time out on receive_sim_state\n");

  if (!receive_misc_sensors())
    printf("Time out on receive_misc_sensors\n");

  // for simulation, the simulation state is just copied to the 
  // raw states 

  for (i=1; i<=N_DOFS; ++i) {
    raw[i].th   = joint_sim_state[i].th;
    raw[i].thd  = joint_sim_state[i].thd;
    raw[i].thdd = joint_sim_state[i].thdd;
    raw[i].load = joint_sim_state[i].u;
  }

  for (i=1; i<=N_MISC_SENSORS; ++i)
    misc_raw[i] = misc_sim_sensor[i];

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
  int i,j;

  for (i=1; i<=N_DOFS; ++i)
    joint_sim_state[i].u = command[i].u;

  // send commands to simulation
  send_des_command();

  return TRUE;
}

/*!*****************************************************************************
 *******************************************************************************
\note  receive_sim_state
\date  Nov. 2007
   
\remarks 

        recieves the entire joint_sim_state from shared memory
	

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

     none

 ******************************************************************************/
static int 
receive_sim_state(void)
{
  
  int i;

  if (semTake(sm_joint_sim_state_sem,ns2ticks(TIME_OUT_NS)) == ERROR) {
    
    ++motor_servo_errors;
    return FALSE;

  } 

  for (i=1; i<=n_dofs; ++i)
    sm_joint_sim_state_data[i] = sm_joint_sim_state->joint_sim_state[i];
  
  cSL_Jstate(joint_sim_state,sm_joint_sim_state_data,n_dofs,FLOAT2DOUBLE);

  // get time stamp and check for synchronization errors
  motor_servo_time = servo_time = sm_joint_sim_state->ts;

  semGive(sm_joint_sim_state_sem);

  return TRUE;
}

/*!*****************************************************************************
 *******************************************************************************
\note  receive_misc_sensors
\date  Nov. 2007   
\remarks 

        receives the entire misc_sim_sensors from shared memory
	

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

     none

 ******************************************************************************/
static int 
receive_misc_sensors(void)
{
  
  int i;

  if (n_misc_sensors <= 0)
    return TRUE;

  if (semTake(sm_misc_sim_sensor_sem,ns2ticks(TIME_OUT_NS)) == ERROR) {
    
    ++motor_servo_errors;
    return FALSE;

  } 

  for (i=1; i<=n_misc_sensors; ++i)
    misc_sim_sensor[i] = sm_misc_sim_sensor->value[i];
  
  semGive(sm_misc_sim_sensor_sem);

  return TRUE;
}

/*!*****************************************************************************
 *******************************************************************************
\note  send_des_command
\date  Nov. 2007
   
\remarks 

        send the commands from the joint_sim_state shared memory
        structure
	

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

     none

 ******************************************************************************/
static int 
send_des_command(void)
{
  
  int i;
  extern double *upd;

  if (semTake(sm_des_commands_sem,ns2ticks(TIME_OUT_NS)) == ERROR) {
    
    ++motor_servo_errors;
    return FALSE;

  } 

  for (i=1; i<=n_dofs; ++i) {
    sm_des_commands->des_command[i].th  = (float) joint_des_state[i].th;
    sm_des_commands->des_command[i].thd = (float) joint_des_state[i].thd;
    sm_des_commands->des_command[i].uff = (float) joint_des_state[i].uff;
    sm_des_commands->des_command[i].u   = (float) joint_sim_state[i].u;
    sm_des_commands->des_command[i].upd = (float) upd[i];
  }

  sm_des_commands->ts = motor_servo_time;
  
  semGive(sm_des_commands_sem);

  return TRUE;
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

}
