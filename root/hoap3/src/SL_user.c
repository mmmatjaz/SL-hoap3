/*!=============================================================================
  ==============================================================================

  \file    SL_user.c

  \author  Stefan Schaal
  \date    Jan 2004

  ==============================================================================
  \remarks
  
  This program contains all user functions for a particular simulation.
  
  ============================================================================*/
  
/* global headers */

#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "string.h"
#include "strings.h"

/* openGL headers */ 
#ifdef powerpc
#include <GLUT/glut.h>
#else
#include "GL/glut.h"
#endif

/* user specific headers */
#include "utility.h"
#include "SL.h"
#include "SL_integrate.h"
#include "SL_openGL.h"
#include "SL_user.h"
#include "mdefs.h"
#include "SL_motor_servo.h"
#include "SL_task_servo.h"
#include "SL_vision_servo.h"
#include "SL_invdyn_servo.h"
#include "SL_tasks.h"
#include "SL_dynamics.h"
#include "SL_controller.h"
#include "SL_vx_wrappers.h"
#include "SL_collect_data.h"
#include "SL_common.h"
#include "SL_kinematics.h"
#include "SL_shared_memory.h"
#include "SL_man.h"

/* local variables */
static  int     n_integration = 4;
static  int    integrate_method  = INTEGRATE_EULER;

/* local functions */
static void 
(*user_display_function)  (void) = NULL;
static void
compute_vestibular(void);
static void
compute_head_jac(Matrix lp, Matrix jop, Matrix jap, Matrix J);
static void
compute_head_rot(SL_Jstate *state,SL_endeff *eff, Matrix *XRot);
static void
compute_force_sensors(void);
static void
setIntRate(void);
static void
setIntMethod(void);
  
/* local functions */
int 
createWindows(void);
void  
myDrawGLElement(int num, double length, int flag);
void 
display(void);
void
idle(void);
void 
addUserDisplayFunc(void (*fptr)(void));
void
drawCenterOfPressure(void);
void
drawCOG(void);

/* external functions */
extern void initUserTasks(void);

/*!*****************************************************************************
 *******************************************************************************
 \note  initSimulation
 \date  July 1998
 
 \remarks 
 
 initializes everything needed for the simulation.
 
 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 \param[in]     argc : number of elements in argv
 \param[in]     argv : array of argc character strings
 

 ******************************************************************************/
int
initSimulation(int argc, char** argv)

{
  
  int i,j,n;
  int rc;
  int ans;

  printf("Initializing ...\n");

  /* initialize the servos */
  init_task_servo();  /* the first servo sets the sampling 
			 rate in collect data */
  read_whichDOFs("task_sim_servo");
  init_motor_servo();
  read_whichDOFs("motor_sim_servo");
  init_vision_servo();
  read_whichDOFs("vision_sim_servo");
  init_invdyn_servo(); 
  read_whichDOFs("invdyn_sim_servo");
  
  /* we need the dynamics initalized */
  init_dynamics();

  /* user specific tasks */
  initUserTasks();

  /* create simulation windows */
  if (!createWindows())
    return FALSE;

  /* reset motor_servo variables */
  servo_enabled            = 1;
  motor_servo_calls        = 0;
  servo_time               = 0;
  motor_servo_rate         = SERVO_BASE_RATE;
  zero_integrator();
  bzero((char *)&(joint_sim_state[1]),sizeof(SL_Jstate)*N_DOFS);
  for (i=1; i<=N_DOFS; ++i) {
    joint_sim_state[i].th = joint_default_state[i].th;
    joint_des_state[i].th = joint_default_state[i].th;
  }

  /* reset task_servo variables */
  servo_enabled           = 1;
  task_servo_calls        = 0;
  task_servo_time         = 0;
  task_servo_errors       = 0;
  task_servo_rate         = SERVO_BASE_RATE/(double) task_servo_ratio;
  setTaskByName(NO_TASK);
  setDefaultPosture();
  changeCollectFreq(task_servo_rate);

  /* reset vision servo variables */
  servo_enabled           = 1;
  vision_servo_calls      = 0;
  vision_servo_time       = 0;
  vision_servo_errors     = 0;
  vision_servo_rate       = VISION_SERVO_RATE;

  /* initialize all vision variables to safe values */
  init_vision_states();
  init_learning();

  /* reset the invdyn servo variables */
  servo_enabled             = 1;
  invdyn_servo_errors       = 0;
  invdyn_lookup_data        = 0;
  invdyn_learning_data      = 0;

  /* initalize objects in the environment */
  readObjects();

  /* assign contact force mappings */
#include "LEKin_contact.h"
  contacts[R_FOOT].active = FALSE;
  contacts[L_FOOT].active = FALSE;
  contacts[B_HEAD].active = FALSE;
  
  initContacts();

  bzero((void *)&base_state,sizeof(SL_Cstate));
  bzero((void *)&base_orient,sizeof(SL_quat));
  base_orient.q[_Q0_] = 1.0;

  printf("\n ... done initialization\n\n");

  window_update_rate = 1./60.;

  addToMan("setIntRate","set number of integration cycles",setIntRate);
  addToMan("setIntMethod","set integration method",setIntMethod);

  return TRUE;
}

/*!*****************************************************************************
 *******************************************************************************
 \note  createWindows
 \date  July 1998
 
 \remarks 
 
 initializes graphic windows
 
 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 none
 

 ******************************************************************************/
int
createWindows(void)

{

  OpenGLWPtr w;
  
  /* get a window structure, initialized with default values */
  w=getOpenGLWindow();
  if (w==NULL)
    return FALSE;
  
  w->display = display;
  w->idle    = idle;
  w->width   = 400;
  w->height  = 400;
  if (!createWindow(w))
    return FALSE;

  return TRUE;

}

/*!*****************************************************************************
 *******************************************************************************
\note  display
\date  August 7, 1992
   
\remarks 

        this function updates the OpenGL graphics

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output


 ******************************************************************************/
void 
display(void)

{
  int i;
  static SL_Jstate  *state = joint_sim_state;
  static SL_endeff  *eff   = endeff;
  static SL_Cstate  *basec = &base_state;
  static SL_quat    *baseo = &base_orient;
  GLfloat  objscolor[4]={(float)0.2,(float)0.2,(float)0.2,(float)1.0};
  double fscale = 0.01;

#include "OpenGL.h"

  glColor4fv(objscolor); 
  drawObjects();
  drawContacts(fscale);
  drawCenterOfPressure();
  drawCOG();

  if (user_display_function != NULL)
    (*user_display_function)();
  

}

/*!*****************************************************************************
 *******************************************************************************
\note  addUserDisplayFunc
\date  August 7, 1992
   
\remarks 

        assigns an additional display function to the openGL updates

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 \param[in]     fptr : function pointer


 ******************************************************************************/
void 
addUserDisplayFunc(void (*fptr)(void))
{
  user_display_function = fptr;
}

/*!*****************************************************************************
 *******************************************************************************
\note  myDrawGLElement
\date  August 7, 1992
   
\remarks 

        draws a GL element of a particular length in z direction

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 \param[in]     num   : ID number of element (just for info)
 \param[in]     length: length of element
 \param[in]     flag  : draw joint element (yes, not)


 ******************************************************************************/
void  
myDrawGLElement(int num, double length, int flag)

{
		
  double width=0.03;
  double head_width = 0.3;
  double hand_width = 0.07;
  double foot_width = 0.1;
  double torso_width = 0.36;
  double belly_width = 0.33;
  double thumb_width = 0.02;
  double shoulder_width  = 0.45;
  
  GLfloat  gray[4]={(float)0.8,(float)0.8,(float)0.8,(float)1.0};
  GLfloat  green[4]={(float)0.1,(float)0.5,(float)0.5,(float)1.0};
  GLfloat  red[4]={(float)1.0,(float)0.25,(float)0.25,(float)1.0};
  GLfloat  blue[4]={(float)0.1,(float)0.1,(float)1.0,(float)1.0};
  GLfloat  black[4]={(float)0.,(float)0.,(float)0.0,(float)1.0};
  GLfloat  white[4]={(float)1.,(float)1.,(float)1.0,(float)1.0};
  GLfloat  yellow[4]={(float)1.0,(float)0.8,(float)0.7,(float)1.0};
	
  if (flag==1) {
    glTranslated(0.0,0.0,length); 

    if (num==999) {/* the base coordinate system */
      glColor4fv(blue);
    } else if (num == 36 || num == 38) {
      glColor4fv(white);
    } else {
      glColor4fv(green);
    }

    if (num == 36 || num == 38) {
      if (solid)
		glutSolidSphere(1.5*width,10,10);
      else
		glutWireSphere(1.5*width,10,10);
    } else if (num == 40 || num == 41) {
      if (solid)
        glutSolidSphere(0.5*width,10,10);
      else
        glutWireSphere(0.5*width,10,10);
    } else {
      if (solid)
		glutSolidSphere(1.2*width,5,5);
      else
		glutWireSphere(1.2*width,5,5);
    }
    glTranslated(0.0,0.0,-length);
  }
	

  switch (num) {

  case 15: /* the torso */
	
    glScaled(torso_width,2*torso_width/3.,length*1.35);
    glTranslated(0.0,0.0,0.15);
    glColor4fv(yellow);
    if (solid)
      glutSolidSphere(0.5,8,8);
    else
      glutWireSphere(0.5,8,8);
    break;
	
  case 120: /* the head */

    glScaled(.2,head_width/2.8,head_width/1.2);
    glTranslated(0.0,0.0,0.5);
    glColor4fv(yellow);
    if (solid)
      glutSolidSphere(0.5,15,15);
    else
      glutWireSphere(0.5,15,15); 
    break;
	
 case 108: /* dummies of feet */
 case 109:
 case 110:
 case 111:
 case 115:
 case 116:
 case 117:
 case 118:
	
    glScaled(width/2.,width/2.,length);
    glTranslated(0.0,0.0,0.5);
    glColor4fv(gray);
    if (solid)
      glutSolidCube(1.0);
    else
      glutWireCube(1.0);
			
    break;

  default:
	
    glScaled(width,width,length);
    glTranslated(0.0,0.0,0.5);
    glColor4fv(gray);
    if (solid)
      glutSolidCube(1.0);
    else
      glutWireCube(1.0);
			
  }
}

/*!*****************************************************************************
 *******************************************************************************
\note  idle
\date  June 1999
   
\remarks 

      The function called by openGL whenever processing time available.
      Here, the servo-loops are implemented

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output


 ******************************************************************************/
void
idle(void)

{
  int i;
  static double last_draw_time = 0;

  // the core component of the idle task is conveniently included
#include "SL_user_idle_core.h"
  
  // the numerical integration
#include "SL_user_integrate.h"
  
  /* compute vestibular sensors based on joint_sim_state */
  compute_vestibular();
  
  /* compute force sensor information at feet */
  compute_force_sensors();

  /* refresh display */
  if (servo_time-last_draw_time > window_update_rate) {
    glutPostRedisplayAll();
    last_draw_time = servo_time; 
  }

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

/*!*****************************************************************************
 *******************************************************************************
\note  drawCenterOfPressure
\date  Feb. 2004
   
\remarks 

      draws the position of the center of pressure

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 ******************************************************************************/
void
drawCenterOfPressure(void)

{
  int i,j,n;
  GLfloat   color_point[4]={(float)1.0,(float)0.0,(float)0.0,(float)1.0};
  double    radius = 0.04;
  double    xcop[N_CART+1];
  double    sum;
  int       inds[8+1];

  /* if there are no objects, exit */
  if (objs==NULL)
    return;

  /* inds ontains the indices of the foot contact points */
  n = 0;
  inds[++n] = 8;
  inds[++n] = 9;
  inds[++n] = 10;
  inds[++n] = 11;
  inds[++n] = 16;
  inds[++n] = 17;
  inds[++n] = 18;
  inds[++n] = 19;

  for (j=1; j<=N_CART; ++j)
    xcop[j]=0;
  sum = 1.e-10;

  for (i=1; i<=n; ++i) { /* loop over all foot contact points */

    // check whether there is an active contact
    if (!contacts[inds[i]].active || !contacts[inds[i]].status)
      continue;

    // accumulate the cop position as a weighted sum, where the weight is the
    // z component of the force at each contact point
    for (j=1; j<=N_CART; ++j)
      xcop[j] += link_pos[inds[i]][j] * contacts[inds[i]].f[_Z_];

    sum += contacts[inds[i]].f[_Z_];

  }

  for (j=1; j<=N_CART; ++j)
    xcop[j] /= sum;
  
  
  // draw a blob at the cop
  glPushMatrix();
  glTranslated((GLdouble)xcop[_X_],(GLdouble)xcop[_Y_],(GLdouble)xcop[_Z_]);
  glColor4fv(color_point);
  if (solid)
    glutSolidSphere(radius,10,10);
  else
    glutWireSphere(radius,10,10);
  glPopMatrix();

}


/*!*****************************************************************************
 *******************************************************************************
\note  drawCOG
\date  Feb. 2004
   
\remarks 

      draws the position of the center of gravity

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 ******************************************************************************/
void
drawCOG(void)

{
  int i,j,n;
  GLfloat   color_point[4]={(float)1.0,(float)1.0,(float)0.5,(float)1.0};
  double    radius = 0.04;
  double    sum;

  // draw a blob at the cog
  glPushMatrix();
  glTranslated((GLdouble)cog.x[_X_],(GLdouble)cog.x[_Y_],(GLdouble)cog.x[_Z_]);
  glColor4fv(color_point);
  if (solid)
    glutSolidSphere(radius,10,10);
  else
    glutWireSphere(radius,10,10);

  /* draw vertical line from COG downwards */
  glDisable(GL_LIGHTING); /*to have constant colors */
  glColor4fv(color_point);
  glBegin(GL_LINES);     
  glVertex3d(0.0,0.0,0.0);       
  glVertex3d(0.0,0.0,-2.0);
  glEnd();
  glEnable(GL_LIGHTING);   
  glPopMatrix();

}
/*!*****************************************************************************
 *******************************************************************************
\note  setIntRate
\date  April 2006
\remarks 

 sets the numbers of integration cycles

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

  none

 ******************************************************************************/
static void
setIntRate(void)
{
  int i;

  i = n_integration;
  get_int("Number of numercial integrations per servo cycle",i,&i);
  n_integration = i;

}
/*!*****************************************************************************
 *******************************************************************************
\note  setIntMethod
\date  April 2006
\remarks 

 sets the numbers of integration cycles

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

  none

 ******************************************************************************/
static void
setIntMethod(void)
{

  if (integrate_method == INTEGRATE_EULER) {
    integrate_method = INTEGRATE_RK;
    printf("Switched to Runge Kutta Integration (Rate=%d)\n",n_integration);
  } else {
    printf("Switched to Euler Integration (Rate=%d)\n",n_integration);
    integrate_method = INTEGRATE_EULER;
  }

}











