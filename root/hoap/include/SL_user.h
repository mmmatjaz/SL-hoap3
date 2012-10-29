/*!=============================================================================
  ==============================================================================

  \file    	SL_user.h
  \author  	Stefan Schaal
  \edited	Matjaz Ogrinc
  \date    	Jan 2004

  ==============================================================================
  \remarks
  
  robot specific definitions
  
  ============================================================================*/
  
#ifndef _SL_user_
#define _SL_user_

/*! the robot name */
#define ROBOT_NAME "hoap"

#define KIN_SCALE		1
#define ARMLINK1	 	0.111*KIN_SCALE
#define ARMLINK2	 	0.111*KIN_SCALE
#define ARMLINK3	 	0.171*KIN_SCALE
#define LEGLINK1	 	0.039*KIN_SCALE
#define LEGLINK2	 	0.105*KIN_SCALE
#define LEGLINK3	 	0.105*KIN_SCALE
#define LEGLINK4	 	0.040*KIN_SCALE
#define BODYLINK1	 	0.125*KIN_SCALE
#define BODYLINK2   	0.035*KIN_SCALE
#define HEADLINK1   	0.013*KIN_SCALE
#define HEADLINK2   	0.015*KIN_SCALE
#define WAISTLINK1  	0.055*KIN_SCALE
#define WAISTLINK2  	0.035*KIN_SCALE

#define FOOTWIDSHORT	0.0315
#define FOOTWIDLONG		0.0415
#define FOOTLENGSHORT	0.040
#define FOOTLLENGLONG	0.068

#define GRIPJOFFX		0.01
#define GRIPJOFFZ		0.01
#define PALMOFFSETX		0.01
#define PALM			0.05
#define FINGER			0.05


/*! links of the robot */
enum RobotLinks {
 	L00=1,
	L01,
	L02,
	L03,
	LO4,
	L05,
	L06,
	L07,
	L08,
	L09,
	L10,
	L11,
	L12,
	L13,
	L14,
	L15,
	L16,L17,L18,L19,L20,L21,L22,
	L23,L24,L25,L26,L27,L28,L29,
	L30,L31,L32,L33,L34,
  N_ROBOT_LINKS
};

/*! endeffector information */
enum RobotEndeffectors {
	//LULCEK=1,
  RIGHT_FOOT=1,
  RIGHT_HAND,
  LEFT_FOOT,
  LEFT_HAND,

  N_ROBOT_ENDEFFECTORS
};

/*! vision variables */
enum VisionCameras {
  CAMERA_1=1,
  CAMERA_2,

  N_VISION_CAMERAS
};

enum ColorBlobs {
  BLOB1=1,
  BLOB2,
  BLOB3,
  BLOB4,
  BLOB5,
  BLOB6,

  N_COLOR_BLOBS
};

/*! define the DOFs of this robot */
enum RobotDOFs {
	BASE=0,

	RL_J1,
  	RL_J2,
  	RL_J3,
  	RL_J4,
  	RL_J5,
  	RL_J6,

  	RA_J1,
  	RA_J2,
  	RA_J3,
  	RA_J4,

  	LL_J1,
  	LL_J2,
  	LL_J3,
  	LL_J4,
  	LL_J5,
  	LL_J6,

  	LA_J1,
  	LA_J2,
  	LA_J3,
  	LA_J4,

  	B_J,

  	H_J1,
  	H_J2,
  	H_J3,

  	//wrists and grippers servos
  	RA_S1,
  	RA_S2,
  	LA_S1,
  	LA_S2,
  
  N_ROBOT_DOFS
};

/*! define miscellenous sensors of this robot */
enum MiscSensors {
  N_ROBOT_MISC_SENSORS
};

/*! number of degrees-of-freedom of robot */
#define N_DOFS (N_ROBOT_DOFS-1)

/*! N_DOFS + fake DOFS, needed for parameter estimation; 
   fake DOFS come from creating endeffector information */
#define N_DOFS_EST (N_DOFS+0)//+1

/*! N_DOFS to be excluded from parameter estimation (e.g., eye joints);
   these DOFS must be the last DOFS in the arrays */
#define N_DOFS_EST_SKIP 0

/*! number of links of the robot */
#define N_LINKS    (N_ROBOT_LINKS-1)

/*! number of miscellaneous sensors */
#define N_MISC_SENSORS   (N_ROBOT_MISC_SENSORS-1)

/*! number of endeffectors */
#define N_ENDEFFS  (N_ROBOT_ENDEFFECTORS-1)

/*! number of cameras used */
#define N_CAMERAS (N_VISION_CAMERAS-1)

/*! number of blobs that can be tracked by vision system */
#define MAX_BLOBS (N_COLOR_BLOBS-1)

/*! vision default post processing */
#define VISION_DEFAULT_PP "vision_default.pp"

/*! the servo rate used by the I/O with robot: this limits the
   servo rates of all other servos */
#define  SERVO_BASE_RATE 1000

/*! divisor to obtain task servo rate (task servo can run slower than
   base rate, but only in integer fractions */
#define  TASK_SERVO_RATIO   R1TO1
// was R1TO2 -- jb - 12.9.08

/* settings for D/A debugging information -- see SL_oscilloscope.c */
#define   D2A_CM      1
#define   D2A_CT      2
#define   D2A_CV      3
#define   D2A_CR      4

/* function prototype */
#ifdef __cplusplus
extern "C" {
#endif

void useSimulatedBaseState(int flag);

#ifdef __cplusplus
}
#endif


#endif  /* _SL_user_ */

