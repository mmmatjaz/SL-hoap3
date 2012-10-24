/*!=============================================================================
==============================================================================

\file    SL_user_sensor_proc_unix.c

\author Ludovic Righetti
\date Dec 17 2009

==============================================================================
\remarks

performs reading of sensors, translation to units, and sending out
motor commands. This version of the functions is talking to the CBcomm
program via shared memory and is intended to control the real robot

============================================================================*/

#include "SL_user_sensor_proc_xeno.h"

int16_t position_PGain[1+N_DOFS];
int16_t position_IGain[1+N_DOFS];
int16_t position_DGain[1+N_DOFS];
int16_t velocity_PGain[1+N_DOFS];
int16_t velocity_IGain[1+N_DOFS];
int16_t torque_PGain[1+N_DOFS];
int16_t torque_IGain[1+N_DOFS];

static int using_imu = 0;


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
int init_user_sensor_processing(void)
{

	int i,j;

	char smMemNameSL2SDC[] = "SL2GDC_shared_memory";
	char semSmNameSL2SDC[] = "sem_SL2GDC_shared_memory";

	char semSDCWriteCommandsName[] = "sem_SyncSL2GDC";
	char semSDCReadSensorsName[] = "sem_SyncGDC2SL";

	char smMemNameSL2IMU[] = "SL2IMU_shared_memory";
	char semSmNameSL2IMU[] = "sem_SL2IMU_shared_memory";

	motor_servo_period_ns  = (RTIME)(((double)1.0) / ((double)motor_servo_rate) * (double)SEC_INTO_NANO_SEC);
	numIMUPacketRead = 0;

	foot_force_sensors = my_vector(1,6);
	raw_foot_force_sensors = my_vector(1,8);
	left_foot_load_cell_calibration_matrix = my_matrix(1,6,1,8);
	right_foot_load_cell_calibration_matrix = my_matrix(1,6,1,8);

	joint_linearToRotationalTranslation = my_matrix(1,n_dofs,1,8);
	if(!read_user_sensor_calibration(config_files[SENSORCALIBRATION], joint_linearToRotationalTranslation,pos_polar,load_polar)) {
		return FALSE;
	}

	gyro_data = my_vector(1,N_IMU_SENSOR_VALUES);

	// initalizes translation to and from units
	if (!init_translation()) {
		return FALSE;
	}

	// TODO: read this from file...

	printf("sensor_user_proc>> dealing with shared memory...\n");

	int rc = rt_heap_bind(&sm2SDCfd, smMemNameSL2SDC, TM_NONBLOCK);
	if(rc)
	{
	  printf("cannot get shared memory, error %d\n", rc);
	  return FALSE;
	}
	printf("alloc\n");
	rc = rt_heap_alloc(&sm2SDCfd, sizeof(smSDC2SLSensorData) + sizeof(smSL2SDCCommandData), TM_NONBLOCK, (void **)&sm_raw_sdc_data);
	if(rc) {
		printf("init_user_sensor_processing>> ERROR cannot map sm_raw_sdc_data, error %d\n", rc);
		return FALSE;
	}
	//get the pointer to the command structure
	sm_raw_sdc_commands = (smSL2SDCCommandData*)(sm_raw_sdc_data + 1);
	printf("mutex bind\n");
	rc = rt_mutex_bind(&semSm2SDC, semSmNameSL2SDC, TM_NONBLOCK);
	if(rc) {
		printf("init_user_sensor_processing>> ERROR cannot open semaphore, error %d\n", rc);
		return FALSE;
	}
	printf("sem bind\n");
	rc = rt_sem_bind(&semSyncSDC2SLSensors, semSDCReadSensorsName, TM_NONBLOCK);
	if(rc) {
		printf("init_user_sensor_processing>> ERROR cannot open semaphore sensors, error %d\n", rc);
		return FALSE;
	}

	printf("sem bind\n");
	rc = rt_sem_bind(&semSyncSL2SDCCommands, semSDCWriteCommandsName, TM_NONBLOCK);
	if(rc)
	{
		printf("init_user_sensor_processing>> ERROR cannot open semaphore commands, error %d\n", rc);
		return FALSE;
	}


	// ########################################################################################################
	// IMU start
	// ########################################################################################################
	if(using_imu)
	{
	  // logPrintf("sensor_user_proc>> shm_open on smMemNameSL2IMU \n");
	  sm2IMUfd = shm_open(smMemNameSL2IMU, O_RDWR, S_IRWXU|S_IRWXG|S_IRWXO);
	  if(sm2IMUfd == -1) {
	    printf("init_user_sensor_processing>> ERROR cannot open smMemNameSL2IMU\n");
	    perror("init_user_sensor_processing>> ");
	    return FALSE;
	  }

	  // logPrintf("init_user_sensor_preocessing>> mapping %i bytes... \n",sizeof(smMiscGyroData));
	  // sm_misc_sensors = (double*) mmap(NULL, N_IMU_SENSOR_VALUES*sizeof(double), PROT_READ|PROT_WRITE, MAP_SHARED, sm2IMUfd, 0);
	  sm_misc_gyro_data = (smMiscGyroData*) mmap(NULL, sizeof(smMiscGyroData), PROT_READ|PROT_WRITE, MAP_SHARED, sm2IMUfd, 0);
	  if(sm_misc_gyro_data == NULL) {
	    printf("init_user_sensor_processing>> ERROR cannot map misc_sensors\n");
	    perror("init_user_sensor_processing>>");
	    return FALSE;
	  }

	  semSm2IMU = sem_open(semSmNameSL2IMU,0);
	  if(semSm2IMU == SEM_FAILED) {
	    printf("init_user_sensor_preocessing>> ERROR cannot open semaphore %s\n",semSmNameSL2IMU);
	    perror("init_user_sensor_processing>>");
	    return FALSE;
	  }
	}

	// ########################################################################################################
	// IMU end
	// ########################################################################################################
	// printf("sensor_user_proc>> done\n");

	if(!readGainfromFile(SDC_GAIN_FILE)) {
		printf("ERROR>> init_user_sensor_processing readGainDataFile\n");
		return FALSE;
	}

	printf("sl user sensor proc done\n");

	return TRUE;

}

/*****************************************************************************
******************************************************************************
Function Name	: init_translation
Date		: Dec 1997

Remarks:

the translation of raw numbers to and from units

******************************************************************************
Parameters:  (i/o = input/output)

none

*****************************************************************************/
static int init_translation(void) {

	int i,j,err;
	FILE *in;
	int error_flag = FALSE;
	char string[100];

	// Get the translation info for each joint: we just parse those
	// values from the file config/Translation.cf
	sprintf(string,"%s%s",CONFIG,TRANSLATION_FILE);
	in = fopen(string,"r");
	if (in == NULL) {
		printf("ERROR: Cannot open file >%s<!\n",string);
		return FALSE;
	}

	// parse all translation variables according to the joint variables
	for (i=1; i<= n_dofs; ++i) {
		if (!find_keyword(in, &(joint_names[i][0]))) {
			printf("ERROR: Cannot find translation for >%s<!\n",joint_names[i]);
			fclose(in);
			return FALSE;
		}
		err = fscanf(in,"%lf %lf %lf %lf %lf %lf",
				&joint_trans_positions[i].slope,
				&joint_trans_positions[i].offset,
				&joint_trans_velocities[i].slope,
				&joint_trans_velocities[i].offset,
				&joint_trans_torques[i].slope,
				&joint_trans_torques[i].offset);
	}

	for (i=1; i<=n_misc_sensors; ++i) {
		if (!find_keyword(in, &(misc_sensor_names[i][0]))) {
			printf("ERROR: Cannot find translation for >%s<!\n",misc_sensor_names[i]);
			fclose(in);
			return FALSE;
		}
		if(i<=B_ZACC_IMU) {
			err = fscanf(in,"%lf %lf", &misc_trans_sensors[i].slope, &misc_trans_sensors[i].offset);
		} else if(i<=L_CTg) {
			err = fscanf(in,"%lf %lf %lf %lf %lf %lf %lf %lf", &(left_foot_load_cell_calibration_matrix[i-B_ZACC_IMU][1]),
					&(left_foot_load_cell_calibration_matrix[i-B_ZACC_IMU][2]),
					&(left_foot_load_cell_calibration_matrix[i-B_ZACC_IMU][3]),
					&(left_foot_load_cell_calibration_matrix[i-B_ZACC_IMU][4]),
					&(left_foot_load_cell_calibration_matrix[i-B_ZACC_IMU][5]),
					&(left_foot_load_cell_calibration_matrix[i-B_ZACC_IMU][6]),
					&(left_foot_load_cell_calibration_matrix[i-B_ZACC_IMU][7]),
					&(left_foot_load_cell_calibration_matrix[i-B_ZACC_IMU][8]));
		} else if(i<=R_CTg){
			err = fscanf(in,"%lf %lf %lf %lf %lf %lf %lf %lf", &(right_foot_load_cell_calibration_matrix[i-L_CTg][1]),
					&(right_foot_load_cell_calibration_matrix[i-L_CTg][2]),
					&(right_foot_load_cell_calibration_matrix[i-L_CTg][3]),
					&(right_foot_load_cell_calibration_matrix[i-L_CTg][4]),
					&(right_foot_load_cell_calibration_matrix[i-L_CTg][5]),
					&(right_foot_load_cell_calibration_matrix[i-L_CTg][6]),
					&(right_foot_load_cell_calibration_matrix[i-L_CTg][7]),
					&(right_foot_load_cell_calibration_matrix[i-L_CTg][8]));
		}
	}

	// char string[100];
	for(i=1; i<=n_dofs; ++i) {
		sprintf(string,"%s_sdc_th",joint_names[i]);
		addVarToCollect((char *)&(joint_remote_desired_state[i].th),string,"rad", DOUBLE,FALSE);
		sprintf(string,"%s_sdc_thd",joint_names[i]);
		addVarToCollect((char *)&(joint_remote_desired_state[i].thd),string,"rad/s", DOUBLE,FALSE);
		sprintf(string,"%s_sdc_u",joint_names[i]);
		addVarToCollect((char *)&(joint_remote_desired_state[i].u),string,"-", DOUBLE,FALSE);
	}

	for(i=1; i<=n_dofs; ++i) {
		sprintf(string,"%s_raw_th",joint_names[i]);
		addVarToCollect((char *)&(raw_desired_positions[i]),string,"-", INT, FALSE);
		sprintf(string,"%s_raw_thd",joint_names[i]);
		addVarToCollect((char *)&(raw_desired_velocities[i]),string,"-", INT, FALSE);
		sprintf(string,"%s_raw_u",joint_names[i]);
		addVarToCollect((char *)&(raw_desired_torques[i]),string,"-", INT, FALSE);
		sprintf(string,"%s_raw_rem_th",joint_names[i]);
		addVarToCollect((char *)&(raw_remote_desired_positions[i]),string,"-", INT, FALSE);
		sprintf(string,"%s_raw_rem_thd",joint_names[i]);
		addVarToCollect((char *)&(raw_remote_desired_velocities[i]),string,"-", INT, FALSE);
		sprintf(string,"%s_raw_rem_u",joint_names[i]);
		addVarToCollect((char *)&(raw_remote_desired_torques[i]),string,"-", INT, FALSE);
	}

	for(i=1; i<=n_dofs; ++i) {
		sprintf(string,"%s_act_raw_th",joint_names[i]);
		addVarToCollect((char *)&(raw_positions[i]),string,"-", INT, FALSE);
		sprintf(string,"%s_act_raw_thd",joint_names[i]);
		addVarToCollect((char *)&(raw_velocities[i]),string,"-", INT, FALSE);
		sprintf(string,"%s_act_raw_u",joint_names[i]);
		addVarToCollect((char *)&(raw_torques[i]),string,"-", INT, FALSE);
	}

	updateDataCollectScript();

	// print_mat("left",left_foot_load_cell_calibration_matrix);
	// print_mat("right",right_foot_load_cell_calibration_matrix);

	fclose(in);

	return TRUE;

}

/*****************************************************************************
******************************************************************************
Function Name	: read_sensor_calibration
Date		: May 2000
Remarks:

parses the sensor calibration configuration file into global variables

******************************************************************************
Parameters:  (i/o = input/output)

fname           (i): name of calibration file
joint_linearToRotationalTranslation   (i): matrix about sensor configuration
pos_polar       (i): sign for positions
load_polar      (i): sign for loads

*****************************************************************************/
int read_user_sensor_calibration(char *fname, Matrix joint_linearToRotationalTranslation,
		Vector pos_polar, Vector load_polar)

{

	int i, err; //TODO: check for errors
	char   string[100];
	FILE  *in;
	double dum;


	sprintf(string,"%s%s",CONFIG,fname);
	in = fopen(string,"r");
	if (in == NULL) {
		printf("ERROR: Cannot open file >%s<!\n",string);
		return FALSE;
	}

	/* find all joint variables and read them into the appropriate array */

	for (i=1; i<= n_dofs; ++i) {
		if (!find_keyword(in, &(joint_names[i][0]))) {
			printf("ERROR: Cannot find calibration for >%s<!\n",joint_names[i]);
			fclose(in);
			return FALSE;
		} else {
			err = fscanf(in,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",
					&joint_linearToRotationalTranslation[i][SENSOR],
					&joint_linearToRotationalTranslation[i][ACTUATOR],
					&joint_linearToRotationalTranslation[i][LOADCELL],
					&joint_linearToRotationalTranslation[i][MOMENTARM],
					&joint_linearToRotationalTranslation[i][MOUNTPOINT],
					&pos_polar[i],&load_polar[i],
					&joint_linearToRotationalTranslation[i][LOAD_CELL_LENGTH],
					&joint_linearToRotationalTranslation[i][MAIN_LINK_LENGTH],
					&joint_linearToRotationalTranslation[i][THETA0]);
		}
	}

	fclose(in);

	return TRUE;

}

/*****************************************************************************
******************************************************************************
Function Name	: translate_sensor_readings
Date		: Dec 1997

Remarks:

translate sensors to unit values

******************************************************************************
Parameters:  (i/o = input/output)

raw (o): the raw state

*****************************************************************************/
static void translate_sensor_readings(SL_Jstate *joint_raw_state) {

	int i,j;
	double temp=0, temp2=0;

	for(i=1; i<=N_DOFS; ++i) {

		// translate the position sensors
		joint_raw_state[i].th = (raw_positions[i] - joint_trans_positions[i].offset) / joint_trans_positions[i].slope;
		joint_remote_desired_state[i].th = (raw_remote_desired_positions[i] - joint_trans_positions[i].offset) / joint_trans_positions[i].slope;

		if(joint_linearToRotationalTranslation[i][SENSOR] == LINEAR) {
			temp = -(sqr(joint_raw_state[i].th)-sqr(joint_linearToRotationalTranslation[i][MOMENTARM]) -
					sqr(joint_linearToRotationalTranslation[i][MOUNTPOINT])) /
					(2.*joint_linearToRotationalTranslation[i][MOMENTARM]*joint_linearToRotationalTranslation[i][MOUNTPOINT]);
			joint_raw_state[i].th = acos(temp);

			//the remote desired pos
			temp2 = -(sqr(joint_remote_desired_state[i].th)-sqr(joint_linearToRotationalTranslation[i][MOMENTARM]) -
					sqr(joint_linearToRotationalTranslation[i][MOUNTPOINT])) /
					(2.*joint_linearToRotationalTranslation[i][MOMENTARM]*joint_linearToRotationalTranslation[i][MOUNTPOINT]);
			joint_remote_desired_state[i].th = acos(temp2);
		}

		// translate the velocity sensors
		joint_raw_state[i].thd = (raw_velocities[i] - joint_trans_velocities[i].offset) / joint_trans_velocities[i].slope;
		joint_remote_desired_state[i].thd = (raw_remote_desired_velocities[i] - joint_trans_velocities[i].offset) / joint_trans_velocities[i].slope;

		if (joint_linearToRotationalTranslation[i][SENSOR] == LINEAR) {
			joint_raw_state[i].thd  = joint_raw_state[i].th*joint_raw_state[i].thd / (sqrt(1.-sqr(temp))*joint_linearToRotationalTranslation[i][MOMENTARM]*joint_linearToRotationalTranslation[i][MOUNTPOINT]);
			joint_remote_desired_state[i].thd  = joint_remote_desired_state[i].th*joint_remote_desired_state[i].thd / (sqrt(1.-sqr(temp2))*joint_linearToRotationalTranslation[i][MOMENTARM]*joint_linearToRotationalTranslation[i][MOUNTPOINT]);
		}

		// translate the force sensors
		// first get the force in SI units
//		joint_raw_state[i].load = ((double)raw_torques[i]-joint_trans_torques[i].offset) / joint_trans_torques[i].slope;
		joint_raw_state[i].load = (double)raw_torques[i];
		joint_remote_desired_state[i].load = ((double)raw_remote_desired_torques[i]-joint_trans_torques[i].offset) / joint_trans_torques[i].slope;

//		if (joint_linearToRotationalTranslation[i][LOADCELL] == LINEAR) {
//			//			joint_raw_state[i].load  = joint_raw_state[i].load * joint_linearToRotationalTranslation[i][MOMENTARM] * cos(joint_raw_state[i].th - joint_linearToRotationalTranslation[i][THETA0]);
//			double a = joint_linearToRotationalTranslation[i][LOAD_CELL_LENGTH];
//			double b = joint_linearToRotationalTranslation[i][MAIN_LINK_LENGTH];
//			double c = joint_linearToRotationalTranslation[i][MOUNTPOINT];
//			double d = joint_linearToRotationalTranslation[i][MOMENTARM];
//			double alpha = joint_linearToRotationalTranslation[i][THETA0] + joint_raw_state[i].th;//get the angle between c and d
//			double e = sqrt(sqr(d) + sqr(c) - 2*c*d*cos(alpha));//get the distance between a-d and b-c
//			double gamma1 = acos((-c*cos(alpha)+d)/e);//get the angle d-e
//			double gamma2;
//			if(a != 0.0) {// get the angle a-e if the quadrilateral abcd is not degenerate
//				gamma2 = acos((-sqr(b)+sqr(a)+sqr(e))/(2*a*e));
//			} else {
//				gamma2 = 0.0;
//			}
//			if(fmod(alpha,2*M_PI)>M_PI) {//check if the quadrilateral is convex
//				gamma1 = -gamma1;
//			}
//			//now we can calculate the torque as
//			joint_raw_state[i].load = d * sin(gamma1 + gamma2) * joint_raw_state[i].load;
//
//			//same for desired torque
//			alpha = joint_linearToRotationalTranslation[i][THETA0] + joint_remote_desired_state[i].th;//get the angle between c and d
//			e = sqrt(sqr(d) + sqr(c) - 2*c*d*cos(alpha));//get the distance between a-d and b-c
//			gamma1 = acos((-c*cos(alpha)+d)/e);//get the angle d-e
//			if(a != 0.0) {// get the angle a-e if the quadrilateral abcd is not degenerate
//				gamma2 = acos((-sqr(b)+sqr(a)+sqr(e))/(2*a*e));
//			} else {
//				gamma2 = 0.0;
//			}
//			if(fmod(alpha,2*M_PI)>M_PI) {//check if the quadrilateral is convex
//				gamma1 = -gamma1;
//			}
//			joint_remote_desired_state[i].load = d * sin(gamma1 + gamma2) * joint_remote_desired_state[i].load;
//		}

		joint_raw_state[i].th *= pos_polar[i];
		joint_raw_state[i].thd *= pos_polar[i];
//		joint_raw_state[i].load *= load_polar[i];

		joint_remote_desired_state[i].th *= pos_polar[i];
		joint_remote_desired_state[i].thd *= pos_polar[i];
		joint_remote_desired_state[i].load *= load_polar[i];

		// take out the user offset from the position -- but not before here since
		// the load cell readings need the un-offsetted information
		joint_raw_state[i].th -= joint_range[i][THETA_OFFSET];
		joint_remote_desired_state[i].th -= joint_range[i][THETA_OFFSET];

		// fix left eye pan since SDC card is broken (Peter) TODO: change this... read this from file...
//		joint_raw_state[L_EP].th = 0.0;

	}

	//	double a = 0.0413, b = 0.0589, c = 0.03176, d = 0.0413, gamma = 2.30615 + joint_raw_state[L_EB].th;
	//	double e = sqrt(sqr(d) + sqr(c) - 2*c*d*cos(gamma));
	//	double alpha1 = acos((-c*cos(gamma)+d)/e);
	//	double alpha2 = acos((-sqr(b)+sqr(a)+sqr(e))/(2*a*e));
	//	if(gamma>3.1415) {
	//		alpha1 = -alpha1;
	//	}
	//	joint_raw_state[L_EB].load = d*sin(alpha1+alpha2)*joint_raw_state[L_EB].load;
	//
	//	gamma = 2.30615 + joint_raw_state[R_EB].th;
	//	e = sqrt(sqr(d) + sqr(c) - 2*c*d*cos(gamma));
	//	alpha1 = acos((-c*cos(gamma)+d)/e);
	//	alpha2 = acos((-sqr(b)+sqr(a)+sqr(e))/(2*a*e));
	//		if(gamma>3.1415) {
	//			alpha1 = -alpha1;
	//		}
	//	joint_raw_state[R_EB].load = d*sin(alpha1+alpha2)*joint_raw_state[R_EB].load;

	//	logPrintf("lelb %f - relb %f, lf %f - rf %f, lt %f, rt %f\n",
	//			joint_raw_state[L_EB].th,joint_raw_state[R_EB].th,el1,el2,
	//			joint_trans_torques[L_EB].slope,joint_trans_torques[R_EB].slope);

	// A special fix to convert the linear head actuators into rotational
	// movement; note that the calibration for the linear actuators must
	// be such that the full length of the actuator is sensed directly

	//	headLin2Rot(joint_raw_state[B_HT].th, joint_raw_state[B_HN].th,
	//		joint_raw_state[B_HT].thd, joint_raw_state[B_HN].thd,
	//		&(joint_raw_state[B_HN].th),&(joint_raw_state[B_HT].th),
	//		&(joint_raw_state[B_HN].thd),&(joint_raw_state[B_HT].thd));

	//headLin2Rot(joint_remote_desired_state[B_HT].th, joint_remote_desired_state[B_HN].th,
	//		joint_remote_desired_state[B_HT].thd, joint_remote_desired_state[B_HN].thd,
	//		&(joint_remote_desired_state[B_HN].th),&(joint_remote_desired_state[B_HT].th),
	//		&(joint_remote_desired_state[B_HN].thd),&(joint_remote_desired_state[B_HT].thd));

	// generate torques from the force information for the neck
	//load_left  = joint_raw_state[B_HN].load;
	//load_right = joint_raw_state[B_HT].load;

	//joint_raw_state[B_HN].load =
	//		-(load_left+load_right)*NECK_B*cos(joint_raw_state[B_HN].th);
	//joint_raw_state[B_HT].load =
	//		(load_left-load_right)*NECK_A/2.*cos(joint_raw_state[B_HT].th);



}

/*****************************************************************************
******************************************************************************
Function Name	: read_user_sensors
Date		: Dec 1997

Remarks:

gets sensor readings from the robot and converts them into standard
units

******************************************************************************
Parameters:  (i/o = input/output)

raw (o):     the raw sensor readings
misc_raw(o): the raw miscellaneous sensor readings

*****************************************************************************/
int read_user_sensors(SL_Jstate *raw, double *misc_raw) {

	int i, j, valid;
	int rc;
	motor_servo_elapsed_time = rt_timer_read();
	time_left = 1;
	// ------------------------------------------------------------------------------------------------------
	// reading position and velocity data from cb_comm_rtnet
	// ------------------------------------------------------------------------------------------------------

	// check whether we have time...
//	if(time_left < 0) {
//		printf("read_user_sensors>> WARNING: skip reading smSDCData due to timer overrun\n");
//		return FALSE;
//	} else {

		// taking the read sensors semaphorer
	  rc = rt_sem_p(&semSyncSDC2SLSensors, TM_INFINITE);
	  if(rc)
	  {
	    printf("Warning cannot take the Read sensor semaphore, error %d\n", i);
	    return FALSE;
	  }

//		time_left = (motor_servo_period_ns - (rt_timer_read() - motor_servo_elapsed_time)) /(unsigned long long)2;
//		clock_gettime(CLOCK_REALTIME, &timeout);
//		timeout.tv_sec += time_left / 1000000;
//		timeout.tv_nsec += (time_left % 1000000) * 1000;
//		if (timeout.tv_nsec > 999999999) {
//			timeout.tv_sec++;
//			timeout.tv_nsec = timeout.tv_nsec % 1000000000;
//		}

		rc = rt_mutex_acquire(&semSm2SDC, TM_NONBLOCK);
		if(rc == 0)
		{
			memcpy(&local_raw_sdc_data, sm_raw_sdc_data, sizeof(smSDC2SLSensorData));
			rt_mutex_release(&semSm2SDC);

			// TODO: check whether this is the correct place to copy the data...
			// TODO: check whether this might be faster or whether there is a implicit cast happening
			// memcpy(&(raw_positions[1]), &(sm_raw_sdc_data->th), N_DOFS * sizeof(int16_t));
			for(i=1; i<=N_DOFS; i++) {
				raw_positions[i] = (int)local_raw_sdc_data.th[i];
				raw_remote_desired_positions[i] = (int)local_raw_sdc_data.des_th[i];
				raw_velocities[i] = (int)local_raw_sdc_data.thd[i];
				raw_remote_desired_velocities[i] = (int)local_raw_sdc_data.des_thd[i];
				raw_torques[i] = (int)local_raw_sdc_data.u[i];
				raw_remote_desired_torques[i] = (int)local_raw_sdc_data.des_u[i];
			}

		} else {
			printf("read_user_sensors>> WARNING: could not take mutex to read smSDCData, error %d...\n", rc);
		}
//	}

	// translate the raw values into units
	translate_sensor_readings(raw);

	// ------------------------------------------------------------------------------------------------------
	// reading IMU data from cb_comm_serial
	// ------------------------------------------------------------------------------------------------------

//	time_left = (motor_servo_period_ns - (rt_timer_read() - motor_servo_elapsed_time)) /(unsigned long long)2;
//	clock_gettime(CLOCK_REALTIME, &timeout);
//	timeout.tv_sec += time_left / 1000000;
//	timeout.tv_nsec += (time_left % 1000000) * 1000;
//	if (timeout.tv_nsec > 999999999) {
//		timeout.tv_sec++;
//		timeout.tv_nsec = timeout.tv_nsec % 1000000000;
//	}


	valid = FALSE;

/*
	if(using_imu)
	{
	  if( sem_wait(semSm2IMU) == OK ) {
	    if(sm_misc_gyro_data->flag) {
	      valid = TRUE;
	      sm_misc_gyro_data->flag = 0;
	      memcpy(&local_misc_gyro_data, sm_misc_gyro_data, sizeof(smMiscGyroData));
	    }
	    sem_post(semSm2IMU);

	  } else {
	    rt_printf("read_user_sensors>> WARNING: could not take semaphore to read IMU data...\n");
	  }
	}
*/
valid = TRUE;

	if(valid) { // got new data from the IMU

		for(i=1; i<=N_IMU_SENSOR_VALUES; i++) {
			misc_raw[i] = local_misc_gyro_data.values[i];
		}
		misc_raw[1] = -local_misc_gyro_data.values[1];
		numIMUPacketRead++;

		misc_raw[1] = 1.0;
		misc_raw[2] = 0.0;
		misc_raw[3] = 0.0;
		misc_raw[4] = 0.0;
		misc_raw[5] = 0.0;
		misc_raw[6] = 0.0;
		misc_raw[7] = 0.0;
		misc_raw[8] = 0.0;
		misc_raw[9] = 0.0;
		misc_raw[10] = 0.0;

		for(i=1; i<=N_IMU_SENSOR_VALUES; i++) {
			gyro_data[i] = misc_raw[i];
		}

		// set base_orient in the shared memory... TODO: maybe that is not the right place to do this !


		//		logPrintf("imu_orient_quat = ");
		//		for(i=_Q0_; i<=_Q3_; i++) {
		//			logPrintf(" %f", imu_orient_quat.q[i]);
		//		}
		//		logPrintf("\n");

		double mag = sqrt( (imu_orient_quat.q[_Q0_]*imu_orient_quat.q[_Q0_]) +
				(imu_orient_quat.q[_Q1_]*imu_orient_quat.q[_Q1_]) +
				(imu_orient_quat.q[_Q2_]*imu_orient_quat.q[_Q2_]) +
				(imu_orient_quat.q[_Q3_]*imu_orient_quat.q[_Q3_]) );
		// logPrintf("mag = %f\n",mag);
		for(i=_Q0_; i<=_Q3_; i++) {
			imu_orient_quat.q[i] /= mag;
		}

	}


	// TODO: check the other (force) sensors... whether they need translation
	translate_misc_sensor_readings(misc_raw);

	int return_status = TRUE;
	if(!send_real_state(raw)) {
		printf("ERROR>>SL_user_sensor_proc: cannot send_real_state\n");
		return_status = FALSE;
	}
	if(!send_contacts()) {
		printf("ERROR>>SL_user_sensor_proc: cannot send_contacts\n");
		return_status = FALSE;
	}
	// printf("sending\n");
	if(!send_misc_sensors()) {
		printf("ERROR>>SL_user_sensor_proc: cannot send_misc_sensors\n");
		return_status = FALSE;
	}


	return return_status;
}

/*****************************************************************************
******************************************************************************
Function Name	: send_user_commands
Date		: April 1999

Remarks:

translates the commands into raw and sends them to the robot

******************************************************************************
Parameters:  (i/o = input/output)

commands (i): the structure containing the commands

*****************************************************************************/
int send_user_commands(SL_Jstate *command) {

	int i,j;
	int rc;

	// translate into raw values
	translate_commands(joint_des_state);

	// write to outputs
	for(i=1; i<=N_DOFS; ++i) {
		local_raw_sdc_commands.d_th[i] = raw_desired_positions[i];
		local_raw_sdc_commands.d_thd[i] = raw_desired_velocities[i];
		local_raw_sdc_commands.d_u[i] = raw_desired_torques[i];

		local_raw_sdc_commands.position_PGain[i] = position_PGain[i];
		local_raw_sdc_commands.position_DGain[i] = position_DGain[i];
		local_raw_sdc_commands.position_IGain[i] = position_IGain[i];

		local_raw_sdc_commands.velocity_PGain[i] = velocity_PGain[i];
		local_raw_sdc_commands.velocity_IGain[i] = velocity_IGain[i];

		local_raw_sdc_commands.torque_PGain[i] = torque_PGain[i];
		local_raw_sdc_commands.torque_IGain[i] = torque_IGain[i];
	}
	local_raw_sdc_commands.valid = 1;

	// logPrintf("send_user_commands>> local_raw_sdc_commands.d_th[1] = %i\n",local_raw_sdc_commands.d_th[1]);

	// copy into shared memory
	rc = rt_mutex_acquire(&semSm2SDC, TM_NONBLOCK);
	if(rc == 0) {
		memcpy(sm_raw_sdc_commands, &local_raw_sdc_commands, sizeof(smSL2SDCCommandData));
		rt_mutex_release(&semSm2SDC);
	} else {
		rt_printf("Warning cannot take the sm with SDC mutex, error %d\n", rc);
		return FALSE;
	}

	// signal synchronization to CBcomm
	rc =rt_sem_v(&semSyncSL2SDCCommands);
	if(rc) {
		printf("Warning cannot give semSyncSL2SDCCommands semaphore\n");
		return FALSE;
	}

	return TRUE;

}

/*****************************************************************************
******************************************************************************
Function Name	: translate_commands
Date		: Dec 1997

Remarks:

translate unit commands into raw values

******************************************************************************
Parameters:  (i/o = input/output)

commands (i): the structure containing the commands

*****************************************************************************/
static void translate_commands(SL_DJstate *command) {

	int i,j;
	double temp=0;
	double raw;
	double BHT_th, BHT_thd, BHN_th, BHN_thd;

#ifdef TO_BE_ACTIVATED_YET
	// fix the special head linear DOFs
	//	force_right = -command[B_HN].uff/(2.*NECK_B*cos(command[B_HN].th)) - command[B_HT].uff/(NECK_A*cos(command[B_HT].th));
	//force_left = force_right + 2.*command[B_HT].uff/(NECK_A*cos(command[B_HT].th));
#endif

	//the fix to convert the rotational commmand of the head into linear actuation

	//	headRot2Lin(command[B_HN].th, command[B_HT].th, command[B_HN].thd, command[B_HT].thd,
	//		&(BHT_th), &(BHN_th),
	//		&(BHT_thd), &(BHN_thd));


	for(i=1; i<=N_DOFS; ++i) {

		// Translate the position command into SDC compatible commands (do not forget to remove user defined offsets)
		//if(i==B_HN) {
		//	temp = (BHN_th + joint_range[i][THETA_OFFSET]) / pos_polar[i];
		//} else if(i==B_HT) {
		//	temp = (BHT_th + joint_range[i][THETA_OFFSET]) / pos_polar[i];
		//} else {
			temp = (command[i].th  + joint_range[i][THETA_OFFSET]) / pos_polar[i];
			//}

		// if we have a linear sensor we need to translate the desired position command the inverse way
		// we did with the translate position sensor (LUDO)
		if(joint_linearToRotationalTranslation[i][SENSOR] == LINEAR) {
			//laws of cosine MUST be coherent with the sensor translation SDC to SL
			temp = - cos(temp) * 2.0 * joint_linearToRotationalTranslation[i][MOMENTARM] * joint_linearToRotationalTranslation[i][MOUNTPOINT];
			temp += sqr(joint_linearToRotationalTranslation[i][MOMENTARM]) + sqr(joint_linearToRotationalTranslation[i][MOUNTPOINT]);
			raw_desired_positions[i] = (int)(sqrt(temp) * joint_trans_positions[i].slope + joint_trans_positions[i].offset);
		} else { // we have rotational sensors, slope/offset is sufficient
			raw_desired_positions[i] = (int)(temp * joint_trans_positions[i].slope + joint_trans_positions[i].offset);
		}

		//we are limited to 2^15 -1 (we use int16 to send to the SDC cards)
		if(raw_desired_positions[i] > 32767) {
			raw_desired_positions[i] = 32767;
		} else if(raw_desired_positions[i] < -32767) {
			raw_desired_positions[i] = -32767;
		}

		//TODO check that the velocity translation makes sense (was never checked on the robot!!)
		// Translate the velocity command
		if(joint_linearToRotationalTranslation[i][SENSOR] == LINEAR) {
			temp = -1/sqrt(temp);
			temp *= (command[i].thd/pos_polar[i]) * joint_linearToRotationalTranslation[i][MOMENTARM] * joint_linearToRotationalTranslation[i][MOUNTPOINT] * sin((command[i].th+joint_range[i][THETA_OFFSET])/pos_polar[i]);
		} else {
			temp = command[i].thd / pos_polar[i];
		}
		raw_desired_velocities[i] = (int)(temp*joint_trans_velocities[i].slope + joint_trans_velocities[i].offset);

		//we are limited to 2^15 -1 for the velocity as well
		if(raw_desired_velocities[i] > 32767) {
			raw_desired_velocities[i] = 32767;
		} else if(raw_desired_velocities[i] < -32767) {
			raw_desired_velocities[i] = -32767;
		}

		// TODO: check the torque translation (especially uff)
		// translate the torque command first into a linear command, if necessary

		if(joint_linearToRotationalTranslation[i][ACTUATOR] == LINEAR) {

			// TODO: WARNING check whether changing u into uff is OK?? (Peter)
			//TODO: Warning check if we shall use the current position to calculate the moment arm!!
			//			temp = load_polar[i] * command[i].uff / joint_linearToRotationalTranslation[i][MOMENTARM] /
			//					cos((command[i].th+joint_range[i][THETA_OFFSET]) - joint_linearToRotationalTranslation[i][THETA0]);

			double a = joint_linearToRotationalTranslation[i][LOAD_CELL_LENGTH];
			double b = joint_linearToRotationalTranslation[i][MAIN_LINK_LENGTH];
			double c = joint_linearToRotationalTranslation[i][MOUNTPOINT];
			double d = joint_linearToRotationalTranslation[i][MOMENTARM];
			double alpha = joint_linearToRotationalTranslation[i][THETA0] + joint_state[i].th;//get the angle between c and d
			double e = sqrt(sqr(d) + sqr(c) - 2*c*d*cos(alpha));//get the distance between a-d and b-c
			double gamma1 = acos((-c*cos(alpha)+d)/e);//get the angle d-e
			double gamma2;
			if(a != 0.0) {// get the angle a-e if the quadrilateral abcd is not degenerate
				gamma2 = acos((-sqr(b)+sqr(a)+sqr(e))/(2*a*e));
			} else {
				gamma2 = 0.0;
			}
			if(fmod(alpha,2*M_PI)>M_PI) {//check if the quadrilateral is convex
				gamma1 = -gamma1;
			}
			//now we can calculate the torque as
			if(1/(d*sin(gamma1 + gamma2)) != 0.0) {
				temp = command[i].uff / (d * sin(gamma1 + gamma2) * pos_polar[i]);
			}
			else {
				temp = 0;
			}

		} else {

#ifdef TO_BE_ACTIVATED_YET
			//if (i==B_HN) {
			//	temp = force_left;
		//{ else if (i==B_HT) {
		//		temp = force_right;
			//		} else {
				temp = command[i].uff * load_polar[i];
			}
#endif

			temp = command[i].uff * load_polar[i]; // TODO: WARNING check whether changing u into uff is OK?? (Peter)
		}

		// TODO: is desired_torque really the desired torque ?? From SDC we get actualTorque ! so this needs a double check (Peter)

		raw = temp*joint_trans_torques[i].slope + joint_trans_torques[i].offset;

		if(raw > 32767) {
			raw = 32767;
		} else if(raw < -32767) {
			raw = -32767;
		}

		raw_desired_torques[i] = (int)raw;

	}

}


/*****************************************************************************
******************************************************************************
Function Name	: translate_misc_sensor_readings
Date		: Dec 1997

Remarks:

translate miscellaneous sensors to unit values

******************************************************************************
Parameters:  (i/o = input/output)

raw (o): the raw state

*****************************************************************************/
static void translate_misc_sensor_readings(double *misc_raw_sensor) {

	int i,j,n;
	double temp=0;

	//	for(i=1; i<=B_ZACC_IMU; i++) {
	//		misc_raw_sensor[i] = gyro_data[i];
	//		printf("%f ",misc_raw_sensor[i]);
	//	}
	//	printf("\n");

	for(j=0; j<2; ++j) {
		for(i=0; i<8; ++i) {
			raw_foot_force_sensors[i+1] = (double)local_raw_sdc_data.footSensors[i][j];
		}

		if(j==0) {
			mat_vec_mult(right_foot_load_cell_calibration_matrix,raw_foot_force_sensors,foot_force_sensors);
			for(n=0; n<6; n++) {
				misc_raw_sensor[R_CFx+n] = foot_force_sensors[n+1];
			}
		} else {
			mat_vec_mult(left_foot_load_cell_calibration_matrix,raw_foot_force_sensors,foot_force_sensors);
			for(n=0; n<6; n++) {
				misc_raw_sensor[L_CFx+n] = foot_force_sensors[n+1];
			}
		}
	}

	//misc_raw_sensor[L_CFy] = -misc_raw_sensor[L_CFy];
	misc_raw_sensor[R_CFy] = -misc_raw_sensor[R_CFy];

	misc_raw_sensor[L_CFx] = -misc_raw_sensor[L_CFx];
	//misc_raw_sensor[L_CFy] = -misc_raw_sensor[L_CFy];
	misc_raw_sensor[L_CFz] = -misc_raw_sensor[L_CFz];
	misc_raw_sensor[R_CFx] = -misc_raw_sensor[R_CFx];


	//get the accel
	misc_raw_sensor[R_FOOT_XACC] = (double)local_raw_sdc_data.footAccel[0][0];
	misc_raw_sensor[R_FOOT_YACC] = (double)local_raw_sdc_data.footAccel[1][0];
	misc_raw_sensor[R_FOOT_ZACC] = (double)local_raw_sdc_data.footAccel[2][0];

	misc_raw_sensor[L_FOOT_XACC] = (double)local_raw_sdc_data.footAccel[0][1];
        misc_raw_sensor[L_FOOT_YACC] = (double)local_raw_sdc_data.footAccel[1][1];
        misc_raw_sensor[L_FOOT_ZACC] = (double)local_raw_sdc_data.footAccel[2][1];

	//	logPrintf("left foot %f %f %f, mag %f\n",misc_raw_sensor[L_CFx],misc_raw_sensor[L_CFy], misc_raw_sensor[L_CFz],
	//			sqrt(sqr(misc_raw_sensor[L_CFx])+sqr(misc_raw_sensor[L_CFy])+sqr(misc_raw_sensor[L_CFz])));
	//
	//	logPrintf("right foot %f %f %f, mag %f\n",misc_raw_sensor[R_CFx],misc_raw_sensor[R_CFy], misc_raw_sensor[R_CFz],
	//				sqrt(sqr(misc_raw_sensor[R_CFx])+sqr(misc_raw_sensor[R_CFy])+sqr(misc_raw_sensor[R_CFz])));

	// printf("local_raw_sdc_data.footSensors[1][0] = %f\n",(double)local_raw_sdc_data.footSensors[1][0]);
	// printf("left>> %f %f %f %f %f %f\n",misc_raw_sensor[L_CFx],misc_raw_sensor[L_CFy],misc_raw_sensor[L_CFz],misc_raw_sensor[L_CTa],misc_raw_sensor[L_CTb],misc_raw_sensor[L_CTg]);

	// translate the position sensors
//	for(i=1; i<=N_MISC_SENSORS; ++i) {
//		if(i==1)
//			printf(">> raw_misc_sensor[%i] = %i ",i,raw_misc_sensors[i]);
//
//		misc_raw_sensor[i] = (misc_trans_sensors[i].offset + raw_misc_sensors[i]) * misc_trans_sensors[i].slope;
//
//		if(i==1) {
//			printf(">> %f = misc_raw_sensor[%i]\n",misc_raw_sensor[i],i);
//
//			printf(">> misc_trans_sensors[i].slope = %f\n",misc_trans_sensors[i].slope);
//			printf(">> misc_trans_sensors[i].offset= %f\n",misc_trans_sensors[i].offset);
//
//		}
//	}

}

/*****************************************************************************
******************************************************************************
Function Name	: headLin2Rot
Date		: March 2001

Remarks:

transforms linear neck coordinates to rotary head coordinates

******************************************************************************
Parameters:  (i/o = input/output)

l1    (i): right neck length
l2    (i): left neck length
l1d   (i): right neck velocity
l2d   (i): left neck velocity
alpha (o): B_HN angle
beta  (o): B_HT angle
alphad(o): B_HN angular velocity
betad (o): B_HT angular velocity

*****************************************************************************/
static void
headLin2Rot(double l1, double l2, double l1d, double l2d,
		double *alpha, double *beta, double *alphad, double *betad)
{
	double gamma;
	double d;
	double m,md;
	double eps;
	double aux,aux2;

	m     = (l1+l2)/2.;
	md    = (l1d+l2d)/2.;
	d     = sqrt(sqr(NECK_B)+sqr(NECK_C));
	aux   = (sqr(NECK_B)+sqr(d)-sqr(m))/(2.*NECK_B*d);
	gamma = acos(aux);
	eps   = atan2(NECK_B,NECK_C);

	*alpha = PI/2.-eps-gamma;
	aux2   = (l2-l1)/NECK_A;
	*beta  = asin(aux2);

	*alphad = -1./sqrt(1.-sqr(aux)) * m*md/(NECK_B*d);
	*betad  = 1./sqrt(1.-sqr(aux2)) * (l2d-l1d)/NECK_A;

}

/*****************************************************************************
******************************************************************************
Function Name	: headRot2Lin
Date		: March 2001

Remarks:

transforms rotary neck coordinates to linear head coordinates

******************************************************************************
Parameters:  (i/o = input/output)

alpha (i): B_HN angle
beta  (i): B_HT angle
alphad(i): B_HN angular velocity
betad (i): B_HT angular velocity
l1    (o): right neck length
l2    (o): left neck length
l1d   (o): right neck velocity
l2d   (o): left neck velocity

*****************************************************************************/
static void
headRot2Lin(double alpha, double beta, double alphad, double betad,
		double *l1, double *l2, double *l1d, double *l2d)
{
	double gamma;
	double d;
	double m, md;
	double eps;

	eps   = atan2(NECK_B,NECK_C);
	gamma = PI/2.-eps-alpha;
	d     = sqrt(sqr(NECK_B)+sqr(NECK_C));
	m     = sqrt(sqr(NECK_B)+sqr(d)-2.*NECK_B*d*cos(gamma));
	*l1   = m - NECK_A * sin(beta)/2.;
	*l2   = 2. * m - (*l1);

	md    = - NECK_B * d * sin(gamma) * alphad/m;
	*l1d  = md - (NECK_A/2.) * betad * cos(beta);
	*l2d  = 2.*md - (*l1d);

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

	int num_values;
	int joint_id = 0;

	// act according to the message name
	if (strcmp(name, "changePositionGains") == 0) {
		num_values = 4;
		int buf[1+ num_values];
		for (i = 0; i <= num_values; i++) {
			buf[i] = 0;
		}
		memcpy(&(buf[1]), sm_motor_message->buf + sm_motor_message->moff[k],
				sizeof(int) * num_values);

		joint_id = buf[1];
		position_PGain[joint_id] = buf[2];
		position_IGain[joint_id] = buf[3];
		position_DGain[joint_id] = buf[4];
	}
	else if (strcmp(name, "changeVelocityGains") == 0) {

		num_values = 3;
		int buf[1+ num_values];
		for (i = 0; i <= num_values; i++) {
			buf[i] = 0;
		}
		memcpy(&(buf[1]), sm_motor_message->buf + sm_motor_message->moff[k],
				sizeof(int) * num_values);

		joint_id = buf[1];
		velocity_PGain[joint_id] = buf[2];
		velocity_IGain[joint_id] = buf[3];
	}
	else if (strcmp(name, "changeTorqueGains") == 0) {

		num_values = 3;
		int buf[1+ num_values];
		for (i = 0; i <= num_values; i++) {
			buf[i] = 0;
		}
		memcpy(&(buf[1]), sm_motor_message->buf + sm_motor_message->moff[k],
				sizeof(int) * num_values);

		joint_id = buf[1];
		torque_PGain[joint_id] = buf[2];
		torque_IGain[joint_id] = buf[3];
	}

}



/*!*****************************************************************************
*******************************************************************************
\note  send_real_state
\date  Nov. 2007

\remarks

sends the entire joint_state to shared memory (used for the openGL)


*******************************************************************************
Function Parameters: [in]=input,[out]=output

none

******************************************************************************/
int
send_real_state(SL_Jstate *raw_joint_state)
{
	int i;

	// joint state
	if (semTake(sm_joint_sim_state_sem,ns2ticks(TIME_OUT_NS)) == ERROR) {

		++motor_servo_errors;
		//    ++simulation_servo_errors;
		return FALSE;

	}

	cSL_Jstate(raw_joint_state,sm_joint_sim_state_data,n_dofs,DOUBLE2FLOAT);

	for (i=1; i<=n_dofs; ++i)
		sm_joint_sim_state->joint_sim_state[i] = sm_joint_sim_state_data[i];

	semGive(sm_joint_sim_state_sem);


	// base state
	if (semTake(sm_base_state_sem,ns2ticks(TIME_OUT_NS)) == ERROR) {

		++motor_servo_errors;
		//    ++simulation_servo_errors;
		return FALSE;

	}

	cSL_Cstate((&base_state)-1, sm_base_state_data, 1, DOUBLE2FLOAT);

	sm_base_state->state[1] = sm_base_state_data[1];

	semGive(sm_base_state_sem);


	// base orient
	if (semTake(sm_base_orient_sem,ns2ticks(TIME_OUT_NS)) == ERROR) {

		++motor_servo_errors;
		//    ++simulation_servo_errors;
		return FALSE;

	}
imu_orient_quat.q[_Q0_] = 1.0;
imu_orient_quat.q[_Q1_] = 0.0;
imu_orient_quat.q[_Q2_] = 0.0;
imu_orient_quat.q[_Q3_] = 0.0;

	cSL_quat(&imu_orient_quat-1, sm_base_orient_data, 1, DOUBLE2FLOAT);

	sm_base_orient->orient[1] = sm_base_orient_data[1];

	semGive(sm_base_orient_sem);


	return TRUE;
}

/*!*****************************************************************************
*******************************************************************************
\note  send_misc_sensors
\date  Nov. 2007

\remarks

sends the entire misc_sensors to shared memory


*******************************************************************************
Function Parameters: [in]=input,[out]=output

none

******************************************************************************/
int
send_misc_sensors(void)
{

	int i;
	if (n_misc_sensors <= 0)
		return TRUE;

	if (semTake(sm_misc_sim_sensor_sem,ns2ticks(TIME_OUT_NS)) == ERROR) {

		++motor_servo_errors;
		//    ++simulation_servo_errors;
		return FALSE;

	}

    misc_sensor[1] = 0.0;
    misc_sensor[2] = 1.0;
    misc_sensor[3] = 0.0;
    misc_sensor[4] = 0.0;

	for (i=1; i<=n_misc_sensors; ++i)
		sm_misc_sim_sensor->value[i] = misc_sensor[i];

	semGive(sm_misc_sim_sensor_sem);

	return TRUE;
}

/*!*****************************************************************************
*******************************************************************************
\note  send_contacts
\date  Nov. 2007

\remarks

sends the contact forces to shared memory


*******************************************************************************
Function Parameters: [in]=input,[out]=output

none

******************************************************************************/
int
send_contacts(void)
{

  return TRUE;

	int i,j;

	if (semTake(sm_contacts_sem,ns2ticks(TIME_OUT_NS)) == ERROR) {

		++motor_servo_errors;
		//    ++simulation_servo_errors;
		return FALSE;

	}

	//TO BE IMPLEMENTED
	for (i=0; i<=n_links; ++i) {
		sm_contacts->contact[i].status = 0; //contacts[i].status;
		for (j=1; j<=N_CART; ++j)
			sm_contacts->contact[i].f[j] = 0; //contacts[i].f[j];
	}

	semGive(sm_contacts_sem);

	return TRUE;
}

/*!
* \note  readGainfromFile
* \date  Dec. 2009
* @param fname name of the file that contains the gain info
* @return TRUE or FALSE
*/
int readGainfromFile(char *fname) {
	int i, err;
	char   string[100];
	FILE  *file_ptr;

	sprintf(string,"%s%s",CONFIG,fname);
	file_ptr = fopen(string,"r");
	if (file_ptr == NULL) {
		printf("ERROR: Cannot open file >%s<!\n",string);
		return FALSE;
	}

	/* find all joint variables and read them into the appropriate array */

	for (i=1; i<= n_dofs; ++i) {
		if (!find_keyword(file_ptr, &(joint_names[i][0]))) {
			printf("ERROR: Cannot find calibration for >%s<!\n",joint_names[i]);
			fclose(file_ptr);
			return FALSE;
		} else {
			err = fscanf(file_ptr,"%d %d %d %d %d %d %d",
					&position_PGain[i],	&position_IGain[i],	&position_DGain[i],
					&velocity_PGain[i],	&velocity_IGain[i],
					&torque_PGain[i],	&torque_IGain[i]);
			if(err != 7) {
				printf("ERROR>> readGainDataFile scanf returned only %d items\n",err);
				fclose(file_ptr);
				return FALSE;
			}
//			printf("%d %d %d %d %d %d %d\n",
//					position_PGain[i],	position_IGain[i],	position_DGain[i],
//					velocity_PGain[i],	velocity_IGain[i],
//					torque_PGain[i],	torque_IGain[i]);
		}
	}

	fclose(file_ptr);

	return TRUE;
}
