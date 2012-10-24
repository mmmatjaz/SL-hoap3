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
  {"dummy"},
  {"SFE"},
  {"EB"},
  {"WFE"}
};

char cart_names[][20]= {
  {"dummy"},
  {"HAND"},
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
  {"ELBOW"},
  {"WRIST"},
  {"FINGER"}
};

char misc_sensor_names[][20] = {
  {"dummy"}
};


/* initialization needs to be done for this mapping */
int           link2endeffmap[] = {0,FINGER};


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
    endeff[i].x[_X_]  = l3;
    endeff[i].x[_Y_]  = 0.0;
    endeff[i].x[_Z_]  = 0.0;
    endeff[i].a[_A_]  = -PI/2.;
    endeff[i].a[_B_]  =  0.0;
    endeff[i].a[_G_]  = -PI/2.;
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
