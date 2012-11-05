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
#include "utility_macros.h"
#include "mdefs.h"

/* global variables */

/* local variables */
  
/* local functions */

static void compute_vestibular(void);
/*
static void compute_head_jac(Matrix lp, Matrix jop, Matrix jap, Matrix J);
static void compute_head_rot(SL_Jstate *state,SL_endeff *eff, Matrix *XRot);
*/
static void compute_force_sensors(void);

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
  n_integration = 4;
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
  //compute_vestibular();
  
  // compute force sensor information at feet
  compute_force_sensors();

  return TRUE;
}

static void
compute_force_sensors(void)

{
  int i,j;
  MY_MATRIX(M,1,N_CART,1,N_CART);
  MY_VECTOR(v,1,N_CART);

  /* rotation matrix from world to L_AAA coordinates:
     we can borrow this matrix from the toes, which have the same
     rotation, but just a different offset vector, which is not
     needed here */
  mat_trans_size(Alink_sim[L_IN_HEEL],N_CART,N_CART,M);

  // transform forces
  for (i=1; i<=N_CART; ++i) {
    v[i] = ucontact[L_AAA].f[i] - uext_sim[L_AAA].f[i];
  }
  mat_vec_mult(M,v,v);

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

  // transform torques
  for (i=1; i<=N_CART; ++i)
    v[i] = ucontact[R_AAA].t[i] - uext_sim[R_AAA].t[i];
  mat_vec_mult(M,v,v);

  misc_sim_sensor[R_CTa] = v[_A_];
  misc_sim_sensor[R_CTb] = v[_B_];
  misc_sim_sensor[R_CTg] = v[_G_];

}




