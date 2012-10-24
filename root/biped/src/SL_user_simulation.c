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
static void
compute_vestibular(void);
static void
compute_head_jac(Matrix lp, Matrix jop, Matrix jap, Matrix J);
static void
compute_head_rot(SL_Jstate *state,SL_endeff *eff, Matrix *XRot);
static void
compute_force_sensors(void);

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
  compute_vestibular();
  
  // compute force sensor information at feet
  compute_force_sensors();

  return TRUE;
}

/*!*****************************************************************************
 *******************************************************************************
\note  compute_vestibular
\date  March 2003
   
\remarks 

      This functions computes simulated vestibular signals. The algorithm is
      to compute the Jacobian for the head (a fake link in SL), compute the
      head 3D velocity (translatory and angular) from the Jacobian, and 
      apply a coordinate transformation to both resultant vectors to obtain
      vestibular signals in head coordinates. Translatory acceleration is
      obtained from numerical differention.

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

     All results can be computed based on global variables. Results are
     assigned to the misc_sensor structures.


 ******************************************************************************/
static void
compute_vestibular(void)

{
  int i,j;
  static int firsttime = TRUE;
  static Matrix J_head;
  static Matrix rot[1+1];
  static Vector v;
  static Vector v_world;
  static Vector last_v;
  static Vector thd;

  if (firsttime) {
    firsttime = FALSE;
    J_head = my_matrix(1,N_CART*2,1,N_DOFS);
    rot[1] = my_matrix(1,N_CART,1,N_CART);
    v      = my_vector(1,N_CART*2);
    v_world= my_vector(1,N_CART*2);
    last_v = my_vector(1,N_CART*2);
    thd    = my_vector(1,N_DOFS);
  }

  for (i=1; i<=N_DOFS; ++i)
    thd[i]=joint_sim_state[i].thd;

  compute_head_jac(link_pos_sim, joint_origin_pos_sim, joint_axis_pos_sim, J_head);
  compute_head_rot(joint_sim_state,endeff,rot);
  mat_vec_mult(J_head,thd,v_world);
  for (i=1; i<=N_CART; ++i) {
    v[i]=v[i+N_CART]=0;
    for (j=1; j<=N_CART; ++j) {
      v[i]        += rot[1][i][j]*v_world[j];
      v[i+N_CART] += rot[1][i][j]*v_world[j+N_CART];
    }
  }

  /* for the ortholit, add gravity term */
  misc_sim_sensor[ORTH_X] = (v[1]-last_v[1])*(double)simulation_servo_rate-G*rot[1][1][_Z_];
  misc_sim_sensor[ORTH_Y] = (v[2]-last_v[2])*(double)simulation_servo_rate-G*rot[1][2][_Z_];
  misc_sim_sensor[ORTH_Z] = (v[3]-last_v[3])*(double)simulation_servo_rate-G*rot[1][3][_Z_];

  misc_sim_sensor[VEST_A] = -v[N_CART+1];
  misc_sim_sensor[VEST_B] =  v[N_CART+2];
  misc_sim_sensor[VEST_G] = -v[N_CART+3];

  for (i=1; i<=N_CART*2; ++i)
    last_v[i] = v[i];

}

static void
compute_head_jac(Matrix lp, Matrix jop, Matrix jap, Matrix J)
{
  int i,j,r;
  double c[2*N_CART+1];
#include "biped_head_GJac_declare.h"
#include "biped_head_GJac_math.h"
  
  i = 1;
  for (j=1; j<=n_dofs; ++j) {
    if ( Jlist[i][j] != 0 ) {
      revoluteGJacColumn( lp[B_HEAD],
			  jop[j],
			  jap[j],
			  c );
      for (r=1; r<=2*N_CART; ++r) 
	J[(i-1)*6+r][j] = c[r];
    }
  }
}

static void
compute_head_rot(SL_Jstate *state,SL_endeff *eff, Matrix *XRot)
{
  static SL_quat    *baseo = &base_orient;
#include "biped_head_LRMat_declare.h"
#include "biped_head_LRMat_math.h"
  mat_trans(XRot[1],XRot[1]);
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











