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

  {"L_HFE"},
  {"L_HAA"},
  {"L_HFR"},
  {"L_KFE"},
  {"L_AR"},
  {"L_AAA"},
  
  {"R_HFE"},
  {"R_HAA"},
  {"R_HFR"},
  {"R_KFE"},
  {"R_AR"},
  {"R_AAA"},

  {"B_J"},


};

char cart_names[][20]= {
  {"dummy"},
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

  {"R_HIP"},
  {"R_KNEE"},
  {"R_ANKLE"},
  {"R_OUT_TOE"},
  {"R_IN_TOE"},
  {"R_OUT_HEEL"},
  {"R_IN_HEEL"},
  {"R_FOOT"},

  {"L_HIP"},
  {"L_KNEE"},
  {"L_ANKLE"},
  {"L_IN_TOE"},
  {"L_OUT_TOE"},
  {"L_IN_HEEL"},
  {"L_OUT_HEEL"},
  {"L_FOOT"},

  {"B_LINK2"}

};

char misc_sensor_names[][20]= {
  {"dummy"},
  {"VEST_A"},
  {"VEST_B"},
  {"VEST_G"},
  {"ORTH_X"},
  {"ORTH_Y"},
  {"ORTH_Z"},
  {"R_CFx"},
  {"R_CFy"},
  {"R_CFz"},
  {"R_CTa"},
  {"R_CTb"},
  {"R_CTg"},
  {"L_CFx"},
  {"L_CFy"},
  {"L_CFz"},
  {"L_CTa"},
  {"L_CTb"},
  {"L_CTg"}
};

/* initialization needs to be done for this mapping */
int           link2endeffmap[] = {0,R_FOOT,L_FOOT};


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

  int i,j;

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

    for (j=1; j<=N_CART*2; ++j)
      endeff[i].c[j] = FALSE;

  }

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
