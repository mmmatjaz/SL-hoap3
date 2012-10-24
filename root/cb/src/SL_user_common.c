/*!=============================================================================
  ==============================================================================

  \file    SL_user_common.c

  \author 
  \date   

  ==============================================================================
  \remarks

      User file to declare common variables and functions shared by many 
      SL modules. This is a good place to declare global variables 

  ============================================================================*/

#include "SL.h"
#include "SL_user.h"
#include "SL_common.h"


/* global variables */
char joint_names[][20]= {
  {"BASE"},

  {"L_SFE"},
  {"L_SAA"},
  {"L_HR"},
  {"L_EB"},
  {"L_WR"},
  {"L_WFE"},
  {"L_WAA"},

  {"R_SFE"},
  {"R_SAA"},
  {"R_HR"},
  {"R_EB"},
  {"R_WR"},
  {"R_WFE"},
  {"R_WAA"},

  {"L_HFE"},
  {"L_HAA"},
  {"L_HFR"},
  {"L_KFE"},
  {"L_AR"},
  {"L_AFE"},
  {"L_AAA"},
  
  {"R_HFE"},
  {"R_HAA"},
  {"R_HFR"},
  {"R_KFE"},
  {"R_AR"},
  {"R_AFE"},
  {"R_AAA"},

  {"B_TR"},
  {"B_TAA"},
  {"B_TFE"},

  {"B_HN"},
  {"B_HT"},
  {"B_HR"},

  {"R_EP"},
  {"R_ET"},

  {"L_EP"},
  {"L_ET"}

};

char cart_names[][20]= {
  {"dummy"},
  {"RIGHT_HAND"},
  {"LEFT_HAND"},
  {"RIGHT_FOOT"},
  {"LEFT_FOOT"}
};

char blob_names[][20]= {
  {"dummy"},
  {"BLOB1"},
  {"BLOB2"},
  {"BLOB3"},
  {"BLOB4"},
  {"BLOB5"},
  {"BLOB6"}
};

char link_names[][20]= {
  {"BASE"},

  {"B_SACRAL"},

  {"L_SHOULDER"},
  {"L_SHOULDER_AA"},
  {"L_SHOULDER_HR"},
  {"L_ELBOW"},
  {"L_WRIST"},
  {"L_HAND"},
  
  {"R_SHOULDER"},
  {"R_SHOULDER_AA"},
  {"R_SHOULDER_HR"},
  {"R_ELBOW"},
  {"R_WRIST"},
  {"R_HAND"},

  {"B_CERVICAL1"},
  {"B_CERVICAL2"},
  {"R_EYE_AXIS"},
  {"R_EYE"},
  {"L_EYE_AXIS"},
  {"L_EYE"},
  {"B_HEAD"},

  {"R_HIP"},
  {"R_HIP_R"},
  {"R_KNEE"},
  {"R_ANKLE"},
  {"R_OUT_TOE"},
  {"R_IN_TOE"},
  {"R_OUT_HEEL"},
  {"R_IN_HEEL"},
  {"R_FOOT"},

  {"L_HIP"},
  {"L_HIP_R"},
  {"L_KNEE"},
  {"L_ANKLE"},
  {"L_OUT_TOE"},
  {"L_IN_TOE"},
  {"L_OUT_HEEL"},
  {"L_IN_HEEL"},
  {"L_FOOT"}

};

char misc_sensor_names[][20]= {
  {"dummy"},
  {"BODY_Q0_IMU"},
  {"BODY_Q1_IMU"},
  {"BODY_Q2_IMU"},
  {"BODY_Q3_IMU"},
  {"BODY_AD_A_IMU"},
  {"BODY_AD_B_IMU"},
  {"BODY_AD_G_IMU"},
  {"BODY_XACC_IMU"},
  {"BODY_YACC_IMU"},
  {"BODY_ZACC_IMU"},
  {"L_CFx"},
  {"L_CFy"},
  {"L_CFz"},
  {"L_CTa"},
  {"L_CTb"},
  {"L_CTg"},
  {"R_CFx"},
  {"R_CFy"},
  {"R_CFz"},
  {"R_CTa"},
  {"R_CTb"},
  {"R_CTg"},
  {"R_FOOT_XACC"},
  {"R_FOOT_YACC"},
  {"R_FOOT_ZACC"},
  {"L_FOOT_XACC"},
  {"L_FOOT_YACC"},
  {"L_FOOT_ZACC"}
};

/* initialization needs to be done for this mapping */
int           link2endeffmap[] = {0,R_HAND,L_HAND,R_FOOT,L_FOOT};


/* the following include must be the last line of the variable declaration section */
#include "SL_user_common.h"   /* do not erase!!! */



/*!*****************************************************************************
 *******************************************************************************
\note  setDefaultEndeffector
\date  June 1999
   
\remarks 

        assigns default values to the endeffector parameters

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

     none

 ******************************************************************************/
void 
setDefaultEndeffector(void) {

  int i;

  for (i=1; i<=N_ENDEFFS; ++i) {
    endeff[i].m       = 0.0;
    endeff[i].mcm[_X_]= 0.0;
    endeff[i].mcm[_Y_]= 0.0;
    endeff[i].mcm[_Z_]= 0.0;
    endeff[i].x[_X_]  = 0.0;
    endeff[i].x[_Y_]  = 0.0;
    endeff[i].x[_Z_]  = 0.0;
    endeff[i].a[_A_]  = 0.0;
    endeff[i].a[_B_]  = 0.0;
    endeff[i].a[_G_]  = 0.0;
  }

  // special parameters
  endeff[RIGHT_HAND].a[_A_]  = -PI/2.;
  endeff[LEFT_HAND].a[_A_]   = -PI/2.;
  endeff[RIGHT_HAND].a[_Z_]  = -PI/2.;
  endeff[LEFT_HAND].a[_Z_]   = -PI/2.;
  endeff[RIGHT_HAND].x[_X_]  = XHAND;
  endeff[LEFT_HAND].x[_X_]   = XHAND;

}


/*!*****************************************************************************
 *******************************************************************************
\note  setRealRobotOptions
\date  June 1999
   
\remarks 

        allows parameter changes if SL runs for a real robot instead
        of a simulation

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

     none

 ******************************************************************************/
void
setRealRobotOptions(void) 
{

  if (!real_robot_flag)
    sprintf(config_files[CONFIGFILES],"ConfigFilesSim.cf");
  else
    sprintf(config_files[CONFIGFILES],"ConfigFiles.cf");

  // update the config file names
  read_config_files(config_files[CONFIGFILES]);
  
  return;

}
