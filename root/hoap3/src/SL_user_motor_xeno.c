/*!=============================================================================
  ==============================================================================

  \file    SL_user_motor.c

  \author  Stefan Schaal
  \date    Nov. 2009

  ==============================================================================
  \remarks
  
  Allows user specific motor servo initializations
  
  ============================================================================*/
  
// SL general includes of system headers
#include "SL_system_headers.h"

/* user specific headers */
#include "SL.h"
#include "SL_motor_servo.h"

#include "SL_user.h"
#include "SL_man.h"

#include "SL_user_sensor_proc_xeno.h"

/* global variables */

/* local variables */
static void changePositionGains();
static void changeVelocityGains();
static void changeTorqueGains();
static void saveGainsToFile();
static void printGains();

/* local functions */

/* external functions */


/*!*****************************************************************************
 *******************************************************************************
 \note  init_user_motor
 \date  July 1998
 
 \remarks 
 
 initializes user specific motor functionality
 
 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 none 

 ******************************************************************************/
int
init_user_motor(void)

{
  
  int i,j,n;

  addToMan("changePositionGains", "change the position gains", changePositionGains);
  addToMan("changeVelocityGains", "change the velocity gains", changeVelocityGains);
  addToMan("changeTorqueGains", "change the torque gains", changeTorqueGains);
  addToMan("saveGainsToFile", "dumps current gains to file", saveGainsToFile);
  addToMan("printGains", "prints out current gains", printGains);

  return TRUE;
}


static void
changePositionGains()
{
	int i;
	int joint_index = -1;
	int found = FALSE;

	int current_position_p_gain;
	int current_position_i_gain;
	int current_position_d_gain;
	int new_position_p_gain;
	int new_position_i_gain;
	int new_position_d_gain;

	int check = FALSE;
	int answer = FALSE;

	static char user_input_string[200];
	static int firsttime = TRUE;
	if(firsttime)
	{
		sprintf(user_input_string,"none");
		firsttime = FALSE;
	}

	while(!get_string("Which joint ?", user_input_string, user_input_string))
	{
	}

	for(i=1; i<N_DOFS && !found; i++)
	{
		if(strcmp(user_input_string, joint_names[i]) == 0)
		{
			joint_index = i;
			found = TRUE;
		}
	}

	if(!found)
	{
		printf("ERROR: %s is not a valid joint name.\n",user_input_string);
		return;
	}

	printf("Changing position gains of joint >%s< \n",user_input_string);

	current_position_p_gain = (int)position_PGain[joint_index];
	current_position_i_gain = (int)position_IGain[joint_index];
	current_position_d_gain = (int)position_DGain[joint_index];

	get_int("New position P gain", current_position_p_gain, &new_position_p_gain);
	get_int("New position I gain", current_position_i_gain, &new_position_i_gain);
	get_int("New position D gain", current_position_d_gain, &new_position_d_gain);

	printf("New position gains are p=%i, i=%i, and d=%i.\n", new_position_p_gain, new_position_i_gain, new_position_d_gain);

	printf("\nBe careful, the gains will be applied directly on the robot!\n");
	get_int("Apply new gains (1) or leave gains as they are (0).", check, &answer);

	if(answer)
	{
		int buf[1+4];
		buf[1] = joint_index;
		buf[2] = new_position_p_gain;
		buf[3] = new_position_i_gain;
		buf[4] = new_position_d_gain;

		unsigned char cbuf[1+4*sizeof(int)];
		memcpy(cbuf,(void *)&(buf[1]),(4)*sizeof(int));

		sendMessageMotorServo("changePositionGains",(void *)cbuf,(4)*sizeof(int));
	}
	else
	{

	}
}

static void
changeVelocityGains()
{
	int i;
	int joint_index = -1;
	int found = FALSE;

	int current_velocity_p_gain;
	int current_velocity_i_gain;
	int new_velocity_p_gain;
	int new_velocity_i_gain;

	int check = FALSE;
	int answer = FALSE;

	static char user_input_string[200];
	static int firsttime = TRUE;
	if(firsttime)
	{
		sprintf(user_input_string,"none");
		firsttime = FALSE;
	}

	while(!get_string("Which joint ?", user_input_string, user_input_string))
	{
	}

	for(i=1; i<N_DOFS && !found; i++)
	{
		if(strcmp(user_input_string, joint_names[i]) == 0)
		{
			joint_index = i;
			found = TRUE;
		}
	}

	if(!found)
	{
		printf("ERROR: %s is not a valid joint name.\n",user_input_string);
		return;
	}

	printf("Changing velocity gains of joint >%s< \n",user_input_string);

	current_velocity_p_gain = (int)velocity_PGain[joint_index];
	current_velocity_i_gain = (int)velocity_IGain[joint_index];

	get_int("New velocity P gain", current_velocity_p_gain, &new_velocity_p_gain);
	get_int("New velocity I gain", current_velocity_i_gain, &new_velocity_i_gain);

	printf("New velocity gains are p=%i and i=%i.\n", new_velocity_p_gain, new_velocity_i_gain);

	printf("\nBe careful, the gains will be applied directly on the robot!\n");
	get_int("Apply new gains (1) or leave gains as they are (0).", check, &answer);

	if(answer)
	{
		int buf[1+3];
		buf[1] = joint_index;
		buf[2] = new_velocity_p_gain;
		buf[3] = new_velocity_i_gain;

		unsigned char cbuf[1+3*sizeof(int)];
		memcpy(cbuf,(void *)&(buf[1]),(3)*sizeof(int));

		sendMessageMotorServo("changeVelocityGains",(void *)cbuf,(3)*sizeof(int));
	}
	else
	{

	}
}

static void
changeTorqueGains()
{
	int i;
	int joint_index = -1;
	int found = FALSE;

	int current_torque_p_gain;
	int current_torque_i_gain;
	int new_torque_p_gain;
	int new_torque_i_gain;

	int check = FALSE;
	int answer = FALSE;

	static char user_input_string[200];
	static int firsttime = TRUE;
	if(firsttime)
	{
		sprintf(user_input_string,"none");
		firsttime = FALSE;
	}

	while(!get_string("Which joint ?", user_input_string, user_input_string))
	{
	}

	for(i=1; i<N_DOFS && !found; i++)
	{
		if(strcmp(user_input_string, joint_names[i]) == 0)
		{
			joint_index = i;
			found = TRUE;
		}
	}

	if(!found)
	{
		printf("ERROR: %s is not a valid joint name.\n",user_input_string);
		return;
	}

	printf("Changing torque gains of joint >%s< \n",user_input_string);

	current_torque_p_gain = (int)torque_PGain[joint_index];
	current_torque_i_gain = (int)torque_IGain[joint_index];

	get_int("New torque P gain", current_torque_p_gain, &new_torque_p_gain);
	get_int("New torque I gain", current_torque_i_gain, &new_torque_i_gain);

	printf("New torque gains are p=%i and i=%i\n.",new_torque_p_gain,new_torque_i_gain);
	printf("\nBe careful, the gains will be applied directly on the robot!\n");
	get_int("Apply new gains (1) or leave gains as they are (0).", check, &answer);

	if(answer)
	{
		int buf[1+3];
		buf[1] = joint_index;
		buf[2] = new_torque_p_gain;
		buf[3] = new_torque_i_gain;

		unsigned char cbuf[1+3*sizeof(int)];
		memcpy(cbuf,(void *)&(buf[1]),(3)*sizeof(int));

		sendMessageMotorServo("changeTorqueGains",(void *)cbuf,(3)*sizeof(int));
	}
	else
	{

	}

}

static void
saveGainsToFile()
{

	char filename[200];
	char absolut_fname[200];
	FILE *out;
	int i;

	printf("File will be stored in "CONFIG".\n");
	while(!get_string("Enter filename:", "none", filename))
	{
	}
	if(strcmp(filename,"none") == 0)
	{
		printf("Filename >%s< invalid. Abort!\n", filename);
		return;
	}

	// open file
	sprintf(absolut_fname, "%s%s", CONFIG, filename);
	out = fopen(absolut_fname, "w");
	if (out == NULL) {
		printf("ERROR: Cannot open file >%s<!\n", absolut_fname);
		return;
	}

	fprintf(out, "/* this file contains gains and max control for each DOF\n");
	fprintf(out, "   Note: the file is parsed according to keywords, after the keyword,\n");
	fprintf(out, "         the values need to come in the correct sequence */\n");
	fprintf(out, "\n/* format: keyword, gain_th, gain_thd, gain_int, vel_p_gain, vel_i_gain, torque_p_gain, torque_i_gain, max_control  */\n\n");

	for (i=1; i <= n_dofs; ++i) {
		fprintf(out, "\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", joint_names[i], position_PGain[i], position_IGain[i], position_DGain[i],
				velocity_PGain[i], velocity_IGain[i], torque_PGain[i], torque_IGain[i]);
	}

	fclose(out);
	printf("Done.\n");

}

static void
printGains()
{
	int i;
	printf("\n\tJoint\tPos P\tPos I\tPos D\tVel P\tVel I\tTor P\tTor I\n");
	for (i=1; i <= n_dofs; ++i) {
		printf("\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", joint_names[i], position_PGain[i], position_IGain[i], position_DGain[i], velocity_PGain[i], velocity_IGain[i], torque_PGain[i], torque_IGain[i]);
	}
}
