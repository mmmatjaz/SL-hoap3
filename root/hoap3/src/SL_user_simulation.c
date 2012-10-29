/*!=============================================================================
  ==============================================================================

  \file    SL_user_simulation.c

  \author  Stefan Schaal
  \date    Nov. 2007

  ==============================================================================
  \remarks
  
  This program contains all user functions for the numerical simluation of
  a robot
  
  ============================================================================*/
  
// SL general includes of system headers
#include "SL_system_headers.h"

/* user specific headers */
#include "SL.h"
#include "SL_integrate.h"
#include "SL_user.h"
#include "SL_common.h"
#include "SL_objects.h"
#include "SL_simulation_servo.h"
#include "utility.h"
#include "mdefs.h"
#include "SL_dynamics.h"

/* global variables */

/* local variables */
  
/* local functions */
static void
compute_force_sensors(void);
static void
compute_inertial(void);

/* external functions */


/*!*****************************************************************************
 *******************************************************************************
 \note  init_user_simulation
 \date  July 1998
 
 \remarks 
 
 initializes everything needed for the numerical simulation.
 
 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 none 

 ******************************************************************************/
int
init_user_simulation(void)

{
  
  int i,j,n;

  // initalize objects in the environment
  readObjects(config_files[OBJECTS]);

  // assign contact force mappings
#include "LEKin_contact.h"
  contacts[R_FOOT].active = FALSE;
  contacts[L_FOOT].active = FALSE;
  contacts[B_HEAD].active = FALSE;

  // change numerical integration
  n_integration = 8;
  integrate_method = INTEGRATE_EULER;

  // change the freeze_base_pos[] array if needed

  // zero the state of the robot
  reset();
  

  return TRUE;
}


/*!*****************************************************************************
 *******************************************************************************
\note  run_user_simulation
\date  Nov. 7, 2007
   
\remarks 

      computes additional simulation values, e.g., misc sensors

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output


 ******************************************************************************/
int
run_user_simulation(void)

{
  int i;


  // compute vestibular sensors based on joint_sim_state
  compute_inertial();
  
  // compute force sensor information at feet
  compute_force_sensors();


  return TRUE;
}


/*!*****************************************************************************
 *******************************************************************************
\note  compute_inertial
\date  Oct 2005
   
\remarks 

      This functions computes simulated inertial signals, i.e., body 
      quaternion, angular velocity, and linear acceleration.

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

     All results can be computed based on global variables. Results are
     assigned to the misc_sensor structures.


 ******************************************************************************/
static void
compute_inertial(void)

{
  int i,j;
  static int firsttime = TRUE;
  static Matrix R;
  static Vector v;

  if (firsttime) {
    R = my_matrix(1,N_CART,1,N_CART);
    v = my_vector(1,N_CART);
    firsttime = FALSE;
  }

  misc_sim_sensor[B_Q0_IMU] = base_orient.q[_Q0_];
  misc_sim_sensor[B_Q1_IMU] = base_orient.q[_Q1_];
  misc_sim_sensor[B_Q2_IMU] = base_orient.q[_Q2_];
  misc_sim_sensor[B_Q3_IMU] = base_orient.q[_Q3_];

  quatToAngularVelocity(&base_orient);
  quatToRotMat(&base_orient,R);
  mat_vec_mult_size(R,N_CART,N_CART,base_orient.ad,N_CART,v);

  misc_sim_sensor[B_AD_A_IMU] = v[_A_];
  misc_sim_sensor[B_AD_B_IMU] = v[_B_];
  misc_sim_sensor[B_AD_G_IMU] = v[_G_];

  mat_vec_mult_size(R,N_CART,N_CART,base_state.xdd,N_CART,v);

  misc_sim_sensor[B_XACC_IMU] = v[_X_];
  misc_sim_sensor[B_YACC_IMU] = v[_Y_];
  misc_sim_sensor[B_ZACC_IMU] = v[_Z_];


}

/*!*****************************************************************************
 *******************************************************************************
\note  compute_force_sensors
\date  March 2003
   
\remarks 

      This function computes simulated force sensor information for both
      feet. The results are force and torque values for in link coordinates
      of the last ankle joint. This informatin can be extracted from the
      contact force computation, which has world coordinates. Thus, only
      a simple coordinate transformatino from world to local link coordinates
      is needed.

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

     All results can be computed based on global variables. Results are
     assigned to the misc_sensor structures.


 ******************************************************************************/
static void
compute_force_sensors(void)

{
  int i,j;
  static int firsttime = TRUE;
  static Matrix M;
  static Vector v;

  if (firsttime) {
    firsttime = FALSE;
    M = my_matrix(1,N_CART,1,N_CART);
    v = my_vector(1,N_CART);
  }

  /* rotation matrix from world to L_AAA coordinates:
     we can borrow this matrix from the toes, which have the same
     rotation, but just a different offset vector, which is not
     needed here */
  mat_trans_size(Alink_sim[L_IN_HEEL],N_CART,N_CART,M);

  // transform forces
  for (i=1; i<=N_CART; ++i)
    v[i] = ucontact[L_AAA].f[i] - uext_sim[L_AAA].f[i];
  mat_vec_mult(M,v,v);
  //print_vec("v left",v);

  misc_sim_sensor[L_CFx] = v[_X_];
  misc_sim_sensor[L_CFy] = v[_Y_];
  misc_sim_sensor[L_CFz] = v[_Z_];

  // transform torques
  for (i=1; i<=N_CART; ++i)
    v[i] = ucontact[L_AAA].t[i] - uext_sim[L_AAA].t[i];
  mat_vec_mult(M,v,v);

  misc_sim_sensor[L_CTa] = v[_A_];
  misc_sim_sensor[L_CTb] = v[_B_];
  misc_sim_sensor[L_CTg] = v[_G_];

  /* rotation matrix from world to R_AAA coordinates :
     we can borrow this matrix from the toes, which have the same
     rotation, but just a different offset vector, which is not
     needed here */
  mat_trans_size(Alink_sim[R_IN_HEEL],N_CART,N_CART,M);

  // transform forces
  for (i=1; i<=N_CART; ++i)
    v[i] = ucontact[R_AAA].f[i] - uext_sim[R_AAA].f[i];
  mat_vec_mult(M,v,v);
  //print_vec("v right",v);
  //getchar();

  misc_sim_sensor[R_CFx] = v[_X_];
  misc_sim_sensor[R_CFy] = v[_Y_];
  misc_sim_sensor[R_CFz] = v[_Z_];

  // transform torquesyes
  for (i=1; i<=N_CART; ++i)
    v[i] = ucontact[R_AAA].t[i] - uext_sim[R_AAA].t[i];
  mat_vec_mult(M,v,v);

  misc_sim_sensor[R_CTa] = v[_A_];
  misc_sim_sensor[R_CTb] = v[_B_];
  misc_sim_sensor[R_CTg] = v[_G_];

}

