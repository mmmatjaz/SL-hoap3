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

  {"RL_J1"},
  {"RL_J2"},
  {"RL_J3"},
  {"RL_J4"},
  {"RL_J5"},
  {"RL_J6"},

  {"RA_J1"},
  {"RA_J2"},
  {"RA_J3"},
  {"RA_J4"},

  {"LL_J1"},
  {"LL_J2"},
  {"LL_J3"},
  {"LL_J4"},
  {"LL_J5"},
  {"LL_J6"},

  {"LA_J1"},
  {"LA_J2"},
  {"LA_J3"},
  {"LA_J4"},

  {"B_J"},

  {"H_J1"},
  {"H_J2"},
  {"H_J3"},
  
  //wrists and grippers servos
  {"RA_S1"},
  {"RA_S2"},
  {"LA_S1"},
  {"LA_S2"}

};

char cart_names[][20]= {
  {"dummy"},
  {"RIGHT_FOOT"},
  {"RIGHT_HAND"},
  {"LEFT_FOOT"},
  {"LEFT_HAND"}
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
  {"L01"},{"L02"},{"L03"},
  {"LO4"},
  {"L05"},
  {"L06"},
  {"L07"},
  {"L08"},
  {"L09"},
  {"L10"},
  {"L11"},
  {"L12"},
  {"L13"},
  {"L14"},
  {"L15"},
  {"L16"},{"L17"},{"L18"},{"L19"},{"L20"},{"L21"},{"L22"},
  {"L23"},{"L24"},{"L25"},{"L26"},{"L27"},{"L28"},{"L29"},
  {"L30"},{"L31"},{"L32"},{"L33"},{"L34"}//,{"L35"},{"L36"}


};

char misc_sensor_names[][20]= {
  {"dummy"}
};

/* initialization needs to be done for this mapping */
int		link2endeffmap[] = {
		0,
		//LULCEK
		L21,
		L07,
		L30,
		L14
};


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
