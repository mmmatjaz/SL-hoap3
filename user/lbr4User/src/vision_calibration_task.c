/*===========================================================================
  =============================================================================

  vision_calibration_task.c

  =============================================================================
  Remarks:

  Performs a star like center-out-in movement to cover the 3D 
  workspace of the robot in order to calibrate the 3D vision system

  ============================================================================*/

// SL general includes of system headers
#include "SL_system_headers.h"

/* private includes */
#include "SL.h"
#include "SL_user.h"
#include "utility.h"
#include "SL_tasks.h"
#include "SL_task_servo.h"
#include "SL_man.h"
#include "SL_dynamics.h"
#include "SL_collect_data.h"
#include "SL_shared_memory.h"
#include "SL_kinematics.h"
#include "SL_filters.h"

/* defines */
#define N_AZIMUT    18
#define N_ELEVATION 9

/* globals */

/* locals */
static double time_step;

enum SubTasks {
  NEW_TARGET = 1,
  CHECK_TARGET,
  MOVE_OUT,
  MOVE_IN
};

static int n_azimut;
static int n_elevation;
static SL_Cstate setpoint;
static int subtask;
static SL_Cstate ctarget;
static SL_Cstate c_state;
static SL_DJstate q_state[N_DOFS+1];
static SL_DJstate target[N_DOFS+1];
static double c_ref[N_ENDEFFS*2*N_CART+1];
static int    jstatus [N_ENDEFFS*2*N_CART+1];
static Filter fthdd[N_DOFS+1];
static Matrix local_link_pos_des;
static Matrix local_joint_cog_mpos_des;
static Matrix local_joint_origin_pos_des;
static Matrix local_joint_axis_pos_des;
static Matrix local_Alink_des[N_LINKS+1];
static int    use_invdyn = TRUE;

/* local variable for learning */

/* functions */
void
add_vision_calibration_task( void );
static int
init_vision_calibration_task(void);
static int
run_vision_calibration_task(void);
static int
change_vision_calibration_task(void);
static int 
calculate_min_jerk_next_step (double x, double xd, double xdd,
			      double x_des, double xd_des, double xdd_des,
			      double tau,
			      double delta_t,
			      double *x_next, double *xd_next, double *xdd_next);
static int
minJerkNextStep(double pc, double vc, double ac,
		double pg, double vg, double ag,
		double tau, double dt, 
		double *p, double *v, double *a);

void printJ(void);


/*****************************************************************************
******************************************************************************
Function Name	: add_vision_calibration_task
Date		: Feb 1999
Remarks:

adds the task to the task menu

******************************************************************************
Paramters:  (i/o = input/output)

none

*****************************************************************************/
void
add_vision_calibration_task( void )

{
  int i, j;
  char string[100];
  
  addTask("Vision Calib. Task", init_vision_calibration_task, 
	  run_vision_calibration_task, change_vision_calibration_task);

  // add to data collection
  addVarToCollect((char *)&(c_state.x[_X_]),"c_state_x","m", DOUBLE,FALSE);  
  addVarToCollect((char *)&(c_state.x[_Y_]),"c_state_y","m", DOUBLE,FALSE);  
  addVarToCollect((char *)&(c_state.x[_Z_]),"c_state_z","m", DOUBLE,FALSE);  

  addVarToCollect((char *)&(ctarget.x[_X_]),"c_target_x","m", DOUBLE,FALSE);  
  addVarToCollect((char *)&(ctarget.x[_Y_]),"c_target_y","m", DOUBLE,FALSE);  
  addVarToCollect((char *)&(ctarget.x[_Z_]),"c_target_z","m", DOUBLE,FALSE);  

  for (i=1; i<=N_DOFS; ++i) {
    sprintf(string,"target_%s_th",joint_names[i]);
    addVarToCollect((char *)&(target[i].th),string,"rad", DOUBLE,FALSE);  
    sprintf(string,"q_state_%s_th",joint_names[i]);
    addVarToCollect((char *)&(q_state[i].th),string,"rad", DOUBLE,FALSE);  
  }

  addVarToCollect((char *)&(subtask),"subtask","-", INT,FALSE);  

  bzero((char *)&(q_state[1]),N_DOFS*sizeof(q_state[1]));

  addToMan("printJ","prints the current Jacobians",printJ);


  updateDataCollectScript();

}    

/*****************************************************************************
******************************************************************************
Function Name	: init_vision_calibration_task
Date		: June, 1997
   
Remarks:

       initializes the task

******************************************************************************
Paramters:  (i/o = input/output)

     none

*****************************************************************************/
static int
init_vision_calibration_task(void)

{

  int             i,j,r,n,rc;
  int             ans=0;
  static int      firsttime = TRUE;
  
  if (firsttime) {
    firsttime = FALSE;

    // initialize the filters
    init_filters();
    for (i=1; i<=N_DOFS; ++i) 
      fthdd[i].cutoff = 5;

    // need for forward kinematics
    local_link_pos_des         = my_matrix(0,N_LINKS,1,3);
    local_joint_cog_mpos_des   = my_matrix(0,N_DOFS,1,3);
    local_joint_origin_pos_des = my_matrix(0,N_DOFS,1,3);
    local_joint_axis_pos_des   = my_matrix(0,N_DOFS,1,3);
    
    for (i=0; i<=N_LINKS; ++i)
      local_Alink_des[i] = my_matrix(1,4,1,4);

  } else {
    
    /* zero the filters */
    for (i=1; i<=N_DOFS; ++i) 
      for (j=0; j<=FILTER_ORDER; ++j)
	fthdd[i].raw[j] = fthdd[i].filt[j] = 0;

  }
  
  setDefaultEndeffector();
  strcpy(current_vision_pp,"vision_calibration.pp");
  time_step = 1./(double)task_servo_rate;

  // go to the desired posture 
  for (i=1; i<=N_DOFS; ++i)
    target[i] = joint_default_state[i];
  if (!go_target_wait_ID(target))
    return FALSE;

  // extract the cartesian setpoint
  for (i=1; i<=N_CART; ++i) {
    setpoint.x[i] = cart_des_state[RIGHT_HAND].x[i];
    setpoint.xd[i] = setpoint.xdd[i] = 0.0;
  }

  printf("Note: blob1 is used calibrate vision\n\n");

  get_int("Use inverse dynamics?",use_invdyn,&use_invdyn);

  // prepare status variables for inverse kinematics
  for (i=1; i<=N_CART; ++i)
    jstatus[i] = TRUE;

  for (i=N_CART+1; i<=2*N_CART; ++i)
    jstatus[i] = FALSE;

  // ready to go
  ans = 999;
  while (ans == 999) {
    if (!get_int("Enter 1 to start or anthing else to abort ...",ans,&ans))
      return FALSE;
  }

  if (ans != 1) 
    return FALSE;
  
  scd();
  subtask     = NEW_TARGET;
  n_azimut    = -1;
  n_elevation =  1;

  return TRUE;

}


/*****************************************************************************
******************************************************************************
Function Name	: run_vision_calibration_task
Date		: June, 1997
   
Remarks:

       a simple state machine that switches the target for the inverse
       kinematics

******************************************************************************
Paramters:  (i/o = input/output)

     none

*****************************************************************************/
#define SIM_DT   (1./480.)
#define DURATION 2.0
static int
run_vision_calibration_task(void)

{

  int                    i,j,n,rc;
  double                 azimut_angle;
  double                 elevation_angle;
  double                 aux,aux2;
  double                 kp = 20.0;
  double                 A  = 2.0;
  static double          duration;
  int                    count;

  switch (subtask) {

  case NEW_TARGET: // ---------------------------------------------------------

    // prepare next target
    if (++n_azimut > N_AZIMUT) {
      n_azimut = 0;
      if (++n_elevation >= N_ELEVATION) {
	freeze();
	return FALSE;
      }
    }

    azimut_angle     = n_azimut*(2.*PI/(double)(N_AZIMUT));
    elevation_angle  = n_elevation*(PI/(double)(N_ELEVATION))-PI/2.;

    // note that A is intentionally chosen to be unreachable
    ctarget.x[_X_] = setpoint.x[_X_] + A*cos(azimut_angle)*cos(elevation_angle);
    ctarget.x[_Y_] = setpoint.x[_Y_] + A*sin(azimut_angle)*cos(elevation_angle);
    ctarget.x[_Z_] = setpoint.x[_Z_] + A*sin(elevation_angle);

    // prepare simulation for target checking
    for (i=1; i<=N_CART; ++i)
      c_state.x[i] = setpoint.x[i];

    for (i=1; i<=N_DOFS; ++i)
      q_state[i] = joint_default_state[i];

    for (i=1; i<=N_DOFS; ++i) {
      target[i].th   = joint_default_state[i].th;
      target[i].thd  = 0.0;
      target[i].thdd = 0.0;
      target[i].uff  = 0.0;
    }

    duration = DURATION;

    subtask = CHECK_TARGET;

    break;

  case CHECK_TARGET: // check the target numerically -----------------------------------

    count = 0;
    while (TRUE) { // seems that we can do this in while loop safely

      if (++count > 1000) { // break out if too many iterations
	subtask = NEW_TARGET;
	return TRUE;
      }

      aux = 0.0;
      for (i=1; i<=N_CART; ++i) {
	c_ref[i] = (ctarget.x[i]-c_state.x[i]);
	aux += sqr(c_ref[i]);
      }
      aux = sqrt(aux);

      for (i=1; i<=N_CART; ++i) { // move at 1cm per time step
	c_ref[i] /= aux;
	c_ref[i] *= 0.01/SIM_DT;
      }
    
      // inverse kinematics simulated at SIM_DT
      if (!inverseKinematics(q_state, endeff, joint_opt_state, c_ref, jstatus, SIM_DT)) {
	freeze();
	return FALSE;
      }

      // check whether we violate joint ranges
      if (!check_range(q_state))
	break;

      // check whether we violate joint ranges and some heuristics
      aux = 0.0;
      for (i=1; i<=N_CART; ++i)
	aux += sqr(cart_state[RIGHT_HAND].x[i] - link_pos[R_SHOULDER][i]);
      aux = sqrt(aux);

      if ( aux > (ZHR+ZEB+ZWR+ZWFE+FZOFF)*0.9)
	break;

      // where are we in cartesian space
      linkInformationDes(q_state,&base_state,&base_orient,endeff,
			 local_joint_cog_mpos_des,
			 local_joint_axis_pos_des,
			 local_joint_origin_pos_des,
			 local_link_pos_des,
			 local_Alink_des);

      for (i=1; i<=N_CART; ++i)
	c_state.x[i] = local_link_pos_des[R_PALM][i];

      aux = 0.0;
      for (i=1; i<=N_CART; ++i)
	aux += sqr(c_state.x[i]-link_pos[R_SHOULDER][i]);
      aux = sqrt(aux);

      aux2 = 0.0;
      for (i=1; i<=N_CART; ++i)
	aux2 += (c_state.x[i]-link_pos[R_SHOULDER][i])*(base_state.x[i]-link_pos[R_SHOULDER][i]);
      
      if (aux < 0.3 || aux2 > 0 || c_state.x[_Y_] < 0.3 )
	break;

    } // while (TRUE)

    // prepare next subtask
    for (i=1; i<=N_CART; ++i) {
      ctarget.x[i] = c_state.x[i];
      ctarget.xd[i] = ctarget.xdd[i] = 0.0;
    }
    c_state = setpoint;
    subtask = MOVE_OUT;
    
    break;

  case MOVE_OUT: // move out with IK ---------------------------------------------

    for (i=1; i<=N_CART; ++i) {
      calculate_min_jerk_next_step (c_state.x[i],  c_state.xd[i],  c_state.xdd[i],
				    ctarget.x[i], ctarget.xd[i], ctarget.xdd[i],
				    duration,
				    time_step,
				    &(c_state.x[i]),  &(c_state.xd[i]),  &(c_state.xdd[i]));
      c_ref[i] = c_state.xd[i] + kp*(c_state.x[i]-cart_des_state[RIGHT_HAND].x[i]);
    }

    if (!inverseKinematics(target, endeff, joint_opt_state, c_ref, jstatus, time_step)) {
      freeze();
      return FALSE;
    }

    for (i=1; i<=N_DOFS; ++i) {
      aux = (target[i].thd-joint_des_state[i].thd)*(double)task_servo_rate;
      target[i].thdd  = filt(aux,&(fthdd[i]));
      target[i].uff   = 0.0;
    }

    duration -= time_step;
    if (duration < time_step) { 
      subtask = MOVE_IN;
      duration = DURATION;
      for (i=1; i<=N_DOFS; ++i)
	target[i].thd = target[i].thdd = 0.0;
      break;
    }

    break;

  case MOVE_IN: // move back with joint space motion ---------------------------------

    for (i=1; i<=N_CART; ++i)   // used for debugging only
      c_state.x[i] = cart_des_state[RIGHT_HAND].x[i];
    
    for (i=1; i<=N_DOFS; ++i) {
      minJerkNextStep(target[i].th, 
		      target[i].thd,
		      target[i].thdd,
		      joint_default_state[i].th,
		      joint_default_state[i].thd,
		      joint_default_state[i].thdd,
		      duration,
		      time_step,
		      &(target[i].th), 
		      &(target[i].thd),
		      &(target[i].thdd));
    }

    for (i=1; i<=N_DOFS; ++i) {
      filt(target[i].thdd,&(fthdd[i]));
      target[i].uff   = 0.0;
    }

    duration -= time_step;
    if (duration < time_step) {
      subtask = NEW_TARGET;
      break;
    }

    break;

  } // end switch(subtask)

  
  // inverse dynamics
  for (i=1; i<=N_DOFS; ++i) {
    joint_des_state[i] = target[i];
    if (i >= 8) {
      joint_des_state[i].th   = joint_default_state[i].th;
      joint_des_state[i].thd  = 0.0;
      joint_des_state[i].thdd = 0.0;
      joint_des_state[i].uff  = 0.0;
    }
  }

  if (use_invdyn)
    SL_InvDynNE(joint_state,joint_des_state,endeff,&base_state,&base_orient);

  // allow learning
  if (blobs[1].status == TRUE)
    semGive(sm_learn_blob2body_sem);

  return TRUE;

}

/*****************************************************************************
******************************************************************************
Function Name	: change_vision_calibration_task
Date		: Dec, 1997
   
Remarks:

       changes parameters of vision_calibration

******************************************************************************
Paramters:  (i/o = input/output)

     none

*****************************************************************************/
static int
change_vision_calibration_task(void)

{
  int i;
  char string[100];

  return TRUE;

}

/*****************************************************************************
******************************************************************************
Function Name	: calculate_min_jerk_next_step
Date		: August 1994
   
Remarks:

        given current state and a target 
	state as well as movement duration, the next increment
	for the state is calculated. 
	NOTE that this function requires velocity and accelerations
	as input as well!!!

*****************************************************************************
Paramters:  (i/o = input/output)

        x,xd,xdd                (i) : the current pos,vel,acc
	x_des,xd_des,xdd_des    (i) : the desired pos,vel,acc
	tau                     (i) : the desired movement duration until the goal is
	                           reached.
	dt                      (i) : at which delta time is the next_states from now
	x_next,xd_next_xdd_next (o) : the next state after dt

*****************************************************************************/
static int 
calculate_min_jerk_next_step (double x, double xd, double xdd,
			      double x_des, double xd_des, double xdd_des,
			      double tau,
			      double delta_t,
			      double *x_next, double *xd_next, double *xdd_next)

{
  double t1,t2,t3,t4,t5;
  double tau1,tau2,tau3,tau4,tau5;
  int    i,j;

  if (tau <= 0 || delta_t <= 0) {
    return FALSE;
  }

  t1 = delta_t;
  t2 = t1 * delta_t;
  t3 = t2 * delta_t;
  t4 = t3 * delta_t;
  t5 = t4 * delta_t;

  tau1 = tau;
  tau2 = tau1 * tau;
  tau3 = tau2 * tau;
  tau4 = tau3 * tau;
  tau5 = tau4 * tau;

  {	
    /* calculate the constants */
    
    const double dist   = x_des-x;
    const double p1     = x_des; 
    const double p0     = x; 
    const double a1t2   = xdd_des;
    const double a0t2   = xdd;
    const double v1t1   = xd_des;
    const double v0t1   = xd;
    
    const double c1 = 6.*dist/tau5 + (a1t2 - a0t2)/(2.*tau3) - 
      3.*(v0t1 + v1t1)/tau4;
    const double c2 = -15.*dist/tau4 + (3.*a0t2 - 2.*a1t2)/(2.*tau2) +
      (8.*v0t1 + 7.*v1t1)/tau3; 
    const double c3 = 10.*dist/tau3+ (a1t2 - 3.*a0t2)/(2.*tau) -
      (6.*v0t1 + 4.*v1t1)/tau2; 
    const double c4 = xdd/2.;
    const double c5 = xd;
    const double c6 = x;
    
    *x_next   = c1*t5 + c2*t4 + c3*t3 + c4*t2 + c5*t1 + c6;
    *xd_next  = 5.*c1*t4 + 4*c2*t3 + 3*c3*t2 + 2*c4*t1 + c5;
    *xdd_next = 20.*c1*t3 + 12.*c2*t2 + 6.*c3*t1 + 2.*c4;
    
  }
  
  return TRUE;
} 


/*****************************************************************************
******************************************************************************
Function Name	: minJerkNextStep
Date		: June 1999
   
Remarks:

      Given the time to the goal, the current state (pos,vel,acc) of the
      trajectory, and the boundary conditions at the goal spline node,
      the next point (pos,vel,acc) in the min jerk trajectory is computed.

      Note: this was derived in Mathematica

******************************************************************************
Paramters:  (i/o = input/output)

 pc,vc,ac  (i): the current pos,vel,acc in the spline
 pg,vg,ag  (i): the goal pos,vel,acc of the spline
 tau       (i): time until goal is to be reached
 dt        (i): time step for computing the next spline state
 p,v,a     (o): pos,vel,acc of spline after dt

*****************************************************************************/
static int
minJerkNextStep(double pc, double vc, double ac,
		double pg, double vg, double ag,
		double tau, double dt, 
		double *p, double *v, double *a)
{

  double a10,a11,a12,a13,a14,a15;
  double T11,T12,T13,T14,T15;
  double dt1,dt2,dt3,dt4,dt5;

  // sanity checks
  if (dt <= 0 || tau <= 0) {
    return FALSE;
  }

  if (dt > tau ) {
    dt = tau;
  }

  // powers of tau
  T11 = tau;
  T12 = tau*T11;
  T13 = tau*T12;
  T14 = tau*T13;
  T15 = tau*T14;

  dt1 = dt;
  dt2 = dt1*dt;
  dt3 = dt2*dt;
  dt4 = dt3*dt;
  dt5 = dt4*dt;

  // spline coefficients
  a10 = pc;
  a11 = vc;
  a12 = ac/2.;
  a13 = (-20*pc + 20*pg + T11*(-3*ac*T11 + ag*T11 - 12*vc - 8*vg))/(2.*T13);
  a14 = (30*pc - 30*pg + T11*(3*ac*T11 - 2*ag*T11 + 16*vc + 14*vg))/(2.*T14);
  a15 = -(12*pc - 12*pg + T11*(ac*T11 - ag*T11 + 6*(vc + vg)))/(2.*T15);

  *p = a10 + a11*dt1 + a12*dt2 + a13*dt3 + a14*dt4 + a15*dt5;
  *v = a11 + 2*a12*dt1 + 3*a13*dt2 + 4*a14*dt3 + 5*a15*dt4;
  *a = 2*a12 + 6*a13*dt1 + 12*a14*dt2 + 20*a15*dt3;

  return TRUE;

}

void
printJ(void)
{
  int i;

  print_mat("J",J);

  print_mat("Jdes",Jdes);

  for (i=1; i<=N_DOFS; ++i)
    printf("%d %f\n",i,joint_opt_state[i].w);
  

}
