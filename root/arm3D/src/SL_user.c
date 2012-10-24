/*!=============================================================================
  ==============================================================================

  \file    SL_user.c

  \author  Stefan Schaal
  \date    Jan 1999

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
#ifdef alpha
#undef alpha
#endif
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
#include "SL_shared_memory.h"
#include "SL_kinematics.h"

/* global variables */
int print_Hmat = FALSE;

/* local variables */
static void   (*user_display_function)  (void) = NULL;
  
/* local functions */
int 
createWindows(void);
static void  
myDrawGLElement(int num, double length, int flag);
void 
display(void);
void
idle(void);
void 
addUserDisplayFunc(void (*fptr)(void));


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
  bzero((char *)&(joint_sim_state[1]),sizeof(SL_DJstate)*N_DOFS);
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
  initContacts();

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

  int i;
  int width=400, height=400;
  OpenGLWPtr w;
  
  /* get a window structure, initialized with default values */
  w=getOpenGLWindow();
  if (w==NULL)
    return FALSE;
  
  for (i=1; i<=N_CART; ++i) {
    w->eye[i] /= 1.3;
    w->eye0[i] = w->eye[i];
  }
  w->display = display;
  w->idle    = idle;
  w->width   = width;
  w->height  = height;
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
  static SL_Jstate *state = joint_sim_state;
  static SL_endeff *eff = endeff;
  GLfloat  objscolor[4]={(float)0.,(float)0.,(float)0.,(float)0.0};
  double fscale = 0.01;

#include "OpenGL.h"

  glColor4fv(objscolor); 
  drawObjects();
  drawContacts(fscale);

  if (user_display_function != NULL)
    (*user_display_function)();
  
  /* glutSwapBuffers(); */
  
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
static void  
myDrawGLElement(int num, double length, int flag)

{
		
  double width=0.03;
  double thumb_width = 0.02;
  double finger_width = 0.02;
  double hand_width = 0.07;
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
      glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, blue);
      glColor4fv(blue);
    } else if (num == 8 || num == 9 || num ==10) {
      glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, white);
      glColor4fv(white);
    } else {
      glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, green);
      glColor4fv(green);
    }

    if (num == 8 || num == 9 || num == 10) {
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

  case 108: /* the hand */
	
    glScaled(hand_width,hand_width/3.,length);
    glTranslated(0.0,0.0,0.5);
    glColor4fv(yellow);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, yellow);
    if (solid)
      glutSolidSphere(0.5,8,8);
    else
      glutWireSphere(0.5,8,8);
    break;
	
  case 109: /* the thumb */
	
    glScaled(thumb_width,thumb_width,length);
    glTranslated(0.0,0.0,0.5);
    glColor4fv(yellow);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, yellow);
    if (solid)
      glutSolidSphere(0.5,8,8);
    else
      glutWireSphere(0.5,8,8);
    break;
	
  case 110: /* the finger */
	
    glScaled(finger_width,finger_width,length);
    glTranslated(0.0,0.0,0.5);
    glColor4fv(yellow);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, yellow);
    if (solid)
      glutSolidSphere(0.5,8,8);
    else
      glutWireSphere(0.5,8,8);
    break;
	
  case 8: /* the finger */
	
    glScaled(thumb_width*1.5,thumb_width*1.5,length);
    glTranslated(0.0,0.0,0.5);
    glColor4fv(gray);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
    if (solid)
      glutSolidSphere(0.5,8,8);
    else
      glutWireSphere(0.5,8,8);
    break;
	
  case 9: /* the finger */
	
    glScaled(thumb_width*1.5,thumb_width*1.5,length);
    glTranslated(0.0,0.0,0.5);
    glColor4fv(gray);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
    if (solid)
      glutSolidSphere(0.5,8,8);
    else
      glutWireSphere(0.5,8,8);
    break;
	
  case 10: /* the finger */
	
    glScaled(thumb_width*1.5,thumb_width*1.5,length);
    glTranslated(0.0,0.0,0.5);
    glColor4fv(gray);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
    if (solid)
      glutSolidSphere(0.5,8,8);
    else
      glutWireSphere(0.5,8,8);
    break;
	
  default:
	
    glScaled(width,width,length);
    glTranslated(0.0,0.0,0.5);
    glColor4fv(gray);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
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
  static double last_draw_time=0;
  int    integrate_method = INTEGRATE_EULER;
  double n_integration    = 1;

  // the core component of the idle task is conveniently included
#include "SL_user_idle_core.h"
  
  // the numerical integration
#include "SL_user_integrate.h"
  
  /* refresh display */
  if (servo_time-last_draw_time > window_update_rate) {
    glutPostRedisplayAll();
    last_draw_time = servo_time; 
  }
  
}











