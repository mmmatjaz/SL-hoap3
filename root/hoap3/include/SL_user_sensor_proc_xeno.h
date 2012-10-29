/*!=============================================================================
  ==============================================================================

  \file    SL_user_sensor_proc_unix.c

  \author Ludovic Righetti
  \date Dec 22 2009

  ==============================================================================
  \remarks

      the associated c file performs reading of sensors, translation to units,
      and sending out motor commands. This version of the functions is talking
      to the CBcomm program via shared memory and is intended to control the real
      robot.
      This file defines the structures and global variables used

  ============================================================================*/


#ifndef SL_USER_SENSOR_PROC_XENO_H_
#define SL_USER_SENSOR_PROC_XENO_H_


#include <sys/types.h>
#include <sys/stat.h>
#include <native/timer.h>
#include <semaphore.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <time.h>


// SL general includes of system headers
#include "SL_system_headers.h"

// private includes
#include "utility.h"
#include "SL.h"
#include "SL_common.h"
#include "SL_user.h"
#include "SL_sensor_proc.h"
#include "SL_shared_memory.h"
#include "SL_collect_data.h"
#include "SL_motor_servo.h"


#define TIME_OUT_NS  1000000000
#define SEC_INTO_NANO_SEC 1000000000

// local variables


/*!**********************************************************************
 * *********************************************************************
 * The data structures and global variables relative to the translation
 * from raw SDC values to SL joint information
 **************************************************************************
 **************************************************************************/

#define TRANSLATION_FILE "Translation.cf"

//to be used for the specific translation of linear to rotational torques
#define LOAD_CELL_LENGTH 7
#define MAIN_LINK_LENGTH 8

//data structure for the translation from raw SDC values
typedef struct Translation {
	double slope;
	double offset;
} Translation;

static Translation joint_trans_positions[N_DOFS+1];
static Translation joint_trans_velocities[N_DOFS+1];
static Translation joint_trans_torques[N_DOFS+1];
static Translation misc_trans_sensors[N_MISC_SENSORS+1];

static int raw_positions[N_DOFS+1];
static int raw_desired_positions[N_DOFS+1];
static int raw_remote_desired_positions[N_DOFS+1];

static int raw_velocities[N_DOFS+1];
static int raw_desired_velocities[N_DOFS+1];
static int raw_remote_desired_velocities[N_DOFS+1];

static int raw_torques[N_DOFS+1];
static int raw_desired_torques[N_DOFS+1];
static int raw_remote_desired_torques[N_DOFS+1];

static int raw_misc_sensors[N_MISC_SENSORS+1];

//data to go from linear joints and actuators to rotational info
static Matrix joint_linearToRotationalTranslation;

static Vector foot_force_sensors;
static Vector raw_foot_force_sensors;
static Matrix left_foot_load_cell_calibration_matrix;
static Matrix right_foot_load_cell_calibration_matrix;

static double force_left;
static double force_right;
static double load_left;
static double load_right;

/*!********************************************************
 * ********************************************************
 * Gains of the SDC cards related variables
 **********************************************************
 **********************************************************/
#define SDC_GAIN_FILE "SDCGains.cf"


extern int16_t position_PGain[1+N_DOFS];
extern int16_t position_IGain[1+N_DOFS];
extern int16_t position_DGain[1+N_DOFS];
extern int16_t velocity_PGain[1+N_DOFS];
extern int16_t velocity_IGain[1+N_DOFS];
extern int16_t torque_PGain[1+N_DOFS];
extern int16_t torque_IGain[1+N_DOFS];


/*!******************************************************
 * ******************************************************
 * CB comm related variables and data structure
 ********************************************************
 *******************************************************/

// shared memory with SDC net
typedef struct {
	int16_t th[1+N_DOFS];
	int16_t des_th[1+N_DOFS];
	int16_t thd[1+N_DOFS];
	int16_t des_thd[1+N_DOFS];
	int16_t u[1+N_DOFS];
	int16_t des_u[1+N_DOFS];
	int32_t footSensors[8][2];
	int16_t footAccel[3][2];
} smSDC2SLSensorData;

typedef struct {
	int16_t d_th[1+N_DOFS];
	int16_t d_thd[1+N_DOFS];
	int16_t d_u[1+N_DOFS];
	int16_t position_PGain[1+N_DOFS];
	int16_t position_IGain[1+N_DOFS];
	int16_t position_DGain[1+N_DOFS];
	int16_t velocity_PGain[1+N_DOFS];
	int16_t velocity_IGain[1+N_DOFS];
	int16_t torque_PGain[1+N_DOFS];
	int16_t torque_IGain[1+N_DOFS];
	int valid;
} smSL2SDCCommandData;

smSDC2SLSensorData *sm_raw_sdc_data;
smSL2SDCCommandData *sm_raw_sdc_commands;
smSDC2SLSensorData local_raw_sdc_data;
smSL2SDCCommandData local_raw_sdc_commands;


RT_HEAP sm2SDCfd;
RT_MUTEX semSm2SDC;
RT_SEM semSyncSDC2SLSensors, semSyncSL2SDCCommands;

#define N_IMU_SENSOR_VALUES (4+3+3)

// TODO: have a common (shared_memory.h) header file...
typedef struct smMiscGyroData {
	int flag;
	double values[N_IMU_SENSOR_VALUES+1];
} smMiscGyroData;
smMiscGyroData *sm_misc_gyro_data;
smMiscGyroData local_misc_gyro_data;

Vector gyro_data;

int sm2IMUfd;
sem_t *semSm2IMU;
static SL_quat imu_orient_quat;

static int numIMUPacketRead;

// local variables
static unsigned long long motor_servo_period_ns;
static unsigned long long motor_servo_elapsed_time;

RTIME time_left;
struct timespec timeout;


// to monitor whether what we send is actually taken over by the SDC cards
SL_Jstate joint_remote_desired_state[N_DOFS+1];

// external variables
extern int           motor_servo_errors;

// global functions

// local functions
static int    init_translation(void);
static void   translate_sensor_readings(SL_Jstate *joint_raw_state);
static void   translate_misc_sensor_readings(double *misc_raw_sensors);
static void   translate_commands(SL_DJstate *commands);
static void   headLin2Rot(double l1, double l2, double l1d, double l2d,
		double *alpha, double *beta, double *alphad, double *betad);
static void   headRot2Lin(double alpha, double beta, double alphad, double betad,
		double *l1, double *l2, double *l1d, double *l2d);
static int read_user_sensor_calibration(char *fname, Matrix joint_linearToRotationalTranslation,
					Vector pos_polar, Vector load_polar);

static int send_real_state(SL_Jstate *raw_joint_state);
static int send_contacts();
static int send_misc_sensors();

static int readGainfromFile(char *fname);

#endif /* SL_USER_SENSOR_PROC_XENO_H_ */
