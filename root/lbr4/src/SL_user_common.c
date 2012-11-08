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

// SL general includes of system headers


// SL headers
#include "SL.h"
#include "SL_user.h"
#include "SL_common.h"

// global variables
char joint_names[][20]= {
  {"dummy"},
  {"R_A1"},
  {"R_A2"},
  {"R_E1"},
  {"R_A3"},
  {"R_A4"},
  {"R_A5"},
  {"R_A6"}
};

char cart_names[][20]= {
  {"dummy"},
  {"R_HAND"},
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
  {"R_BASE"},
  {"R_A1_LINK"},
  {"R_A2_LINK"},
  {"R_E1_LINK"},
  {"R_A3_LINK"},
  {"R_A4_LINK"},
  {"R_A5_LINK"},
  {"R_A6_LINK"},
  {"R_FLANGE"}
};

char misc_sensor_names[][20] = {
  {"dummy"},
};

// the 1st to 2nd finger segment angles


// initialization needs to be done for this mapping
int  link2endeffmap[] = {0,R_FLANGE};


/* the following include must be the last line of the variable declaration section */
#include "SL_user_common.h"   /* do not erase!!! */


/*!*****************************************************************************
 *******************************************************************************
\note  setDefaultEndeffector
\date  May 2010
   
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
    endeff[i].x[_Z_]  = A6E; 
    endeff[i].a[_A_]  = 0.0;
    endeff[i].a[_B_]  = 0.0;
    endeff[i].a[_G_]  = 0.0;
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
