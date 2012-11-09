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

#include "SL_system_headers.h"

#include "SL.h"
#include "SL_user.h"
#include "SL_common.h"



/* global variables */
char joint_names[][20]= {
	{"BASE"},

	{"R_HFE"},
	{"R_HAA"},
	{"R_HFR"},
	{"R_K"},
	{"R_AR"},
	{"R_AAA"},

	{"RA_J1"},
	{"RA_J2"},
	{"RA_J3"},
	{"RA_J4"},

	{"L_HFE"},
	{"L_HAA"},
	{"L_HFR"},
	{"L_K"},
	{"L_AR"},
	{"L_AAA"},

	{"LA_J1"},
	{"LA_J2"},
	{"LA_J3"},
	{"LA_J4"},

	{"B_J"},

	{"H_J1"},
	{"H_J2"},
	{"H_J3"},

	{"RA_J5"},
	{"RA_J6"},

	{"LA_J5"},
	{"LA_J6"}


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

  {"B_LINK1"},

  {"H_1"},

  {"R_SH"},
  {"R_UA"},
  {"R_LA"},
  {"R_POFF"},
  {"R_PT"},
  {"R_GR"},
  {"R_TT"},

  {"L_SH"},
  {"L_UA"},
  {"L_LA"},
  {"L_POFF"},
  {"L_PT"},
  {"L_GR"},
  {"L_TT"},

  {"B_LINK2"},

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
  {"L_FOOT"}
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
/*
    for (j=1; j<=N_CART*2; ++j)
      endeff[i].c[j] = FALSE;
*/
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
