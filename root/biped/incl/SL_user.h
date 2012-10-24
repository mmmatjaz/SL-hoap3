/*!=============================================================================
  ==============================================================================

  \file    SL_user.h

  \author  Stefan Schaal
  \date    Jan 2004

  ==============================================================================
  \remarks
  
  robot specific definitions
  
  ============================================================================*/
  
#ifndef _SL_user_
#define _SL_user_

#define MAG 0.75

/*! the robot name */
#define ROBOT_NAME "biped"

/*! dimensions of the robot */
#define PELVISOFFSET  0.0041
#define PELVIS2THORAX 0.1856
#define THORAX2HEAD   0.3
#define XHIP          0.0896
#define YHIP          0.0417
#define YKNEE         0.0673
#define UPPERLEG      0.4098
#define LOWERLEG      0.3840
#define FOOT          0.22
#define XTOE          (0.05*MAG)
#define YTOE          (0.2*MAG)
#define ZTOE          0.0512
#define XHEEL         (0.05*MAG)
#define YHEEL         (0.10*MAG)
#define ZHEEL         0.0512

/*! links of the robot */
enum RobotLinks {
  B_SACRAL=1,
  B_THORAX,
  B_HEAD,

  R_HIP,
  R_HIP_R,
  R_KNEE,
  R_ANKLE,
  R_OUT_TOE,
  R_IN_TOE,
  R_OUT_HEEL,
  R_IN_HEEL,
  R_FOOT,

  L_HIP,
  L_HIP_R,
  L_KNEE,
  L_ANKLE,
  L_IN_TOE,
  L_OUT_TOE,
  L_IN_HEEL,
  L_OUT_HEEL,
  L_FOOT,

  N_ROBOT_LINKS
};

/*! endeffector information */
enum RobotEndeffectors {
  RIGHT_FOOT=1,
  LEFT_FOOT,

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

  L_HFE,
  L_HAA,
  L_HFR,
  L_KFE,
  L_AR,
  L_AFE,
  L_AAA,

  R_HFE,
  R_HAA,
  R_HFR,
  R_KFE,
  R_AR,
  R_AFE,
  R_AAA,

  B_TR,
  B_TAA,
  
  N_ROBOT_DOFS
};

/*! define miscellenous sensors of this robot */
enum MiscSensors {

  VEST_A=1,
  VEST_B,
  VEST_G,
  ORTH_X,
  ORTH_Y,
  ORTH_Z,

  R_CFx,
  R_CFy,
  R_CFz,
  R_CTa,
  R_CTb,
  R_CTg,

  L_CFx,
  L_CFy,
  L_CFz,
  L_CTa,
  L_CTb,
  L_CTg,

  N_ROBOT_MISC_SENSORS
};

/*! number of degrees-of-freedom of robot */
#define N_DOFS (N_ROBOT_DOFS-1)

/*! N_DOFS + fake DOFS, needed for parameter estimation; 
   fake DOFS come from creating endeffector information */
#define N_DOFS_EST (N_DOFS+11)

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

