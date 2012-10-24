/*!=============================================================================
  ==============================================================================

  \file    SL_user_openGL.c

  \author  Stefan Schaal
  \date    Nov. 2007

  ==============================================================================
  \remarks
  
  This program contains all graphics user functions for a particular simulation.
  
  ============================================================================*/
  
// SL general includes of system headers
#include "SL_system_headers.h"

// openGL headers
#ifdef powerpc
#include <GLUT/glut.h>
#else
#include "GL/glut.h"
#endif
#include <X11/Xlib.h>

// user specific headers
#include "utility.h"
#include "SL.h"
#include "SL_openGL.h"
#include "SL_user.h"
#include "SL_common.h"
#include "SL_unix_common.h"
#include "SL_objects.h"
#include "SL_openGL_servo.h"
#include "SL_collect_data.h"
#include "mdefs.h"
#include "SL_kinematics.h"
#include "SL_shared_memory.h"
#include "SL_userGraphics.h"

// global variables 
int print_Hmat = FALSE;

// local variables
  
// local functions
static int  createWindows(void);
static void myDrawGLElement(int num, double length, int flag);
void        drawCenterOfPressure(void);
void        drawCOG(void);

// global functions
void display(void);
void idle(void);

// external functions


/*!*****************************************************************************
 *******************************************************************************
 \note  init_user_openGL
 \date  July 1998
 
 \remarks 
 
 initializes everything needed for the graphics for this simulation
 
 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 \param[in]     argc : number of elements in argv
 \param[in]     argv : array of argc character strings
 

 ******************************************************************************/
int
init_user_openGL(int argc, char** argv)

{
  
  int i,j,n;
  int rc;
  int ans;

  // we need the kinematics initialized
  init_kinematics();

  // read objects
  readObjects(config_files[OBJECTS]);

  // assign contact force mappings
#include "LEKin_contact.h"

  // create simulation windows
  if (!createWindows())
    return FALSE;

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
static int
createWindows(void)

{
  int i;
  OpenGLWPtr w;
  
  Display *disp;
  int  screen_num;
  int  display_width;
  int  display_height;

  char string[100];
  char xstring[100];

  double eye[N_CART+1];
  
  // connect to X server using the DISPLAY environment variable
  if ( (disp=XOpenDisplay(NULL)) == NULL ) {
    printf("Cannot connect to X servo %s\n",XDisplayName(NULL));
    exit(-1);
  }
  
  // get screen size from display structure macro 
  screen_num = DefaultScreen(disp);
  display_width = DisplayWidth(disp, screen_num);
  display_height = DisplayHeight(disp, screen_num);
  
  /* get a window structure, initialized with default values */
  w=getOpenGLWindow();
  if (w==NULL)
    return FALSE;
  
  w->display = display;
  w->idle    = idle;
  w->width   = 400;
  w->height  = 400;

  // check for user parameters
  if (read_parameter_pool_string(config_files[PARAMETERPOOL], 
				 "main_window_geometry", string))
    parseWindowSpecs(string, display_width,display_height,xstring, 
		     &(w->x), 
		     &(w->y), 
		     &(w->width),
		     &(w->height));

  if (read_parameter_pool_double_array(config_files[PARAMETERPOOL], 
				       "main_window_camera_pos", N_CART, eye))
    for (i=1; i<=N_CART; ++i)
      w->eye[i] = eye[i];
  
  // finally create the window
  for (i=1; i<=N_CART; ++i)
    w->eye0[i] = w->eye[i];

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
  static double fscale = 0.1;
  static int    firsttime = TRUE;

  if (firsttime) {
    firsttime = FALSE;
    double w;
    if (read_parameter_pool_double(config_files[PARAMETERPOOL],"contact_force_scale",&w))
      fscale = w;
  }

#include "OpenGL.h"

  // the standard display functions for openGL
#include "SL_user_display_core.h"

  drawCenterOfPressure();
  drawCOG();

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
	
    glScaled(torso_width,2*torso_width/3.,torso_width/2.);
    glTranslated(0.0,-0.11,0.10);
    glColor4fv(yellow);
    if (solid)
      glutSolidSphere(0.5,16,16);
    else
      glutWireSphere(0.5,16,16);
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

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output


 ******************************************************************************/
void
idle(void)

{
  int i;
  struct timeval t;
  static double last_draw_time = 0.0;
  double current_time;

  //-------------------------------------------------------------------------
  // the main functions are the most handy in an include file

#include "SL_user_idle_core.h"

  //-------------------------------------------------------------------------
  // refresh display

  gettimeofday(&t,NULL);
  current_time = (double) t.tv_sec + ((double)t.tv_usec)/1.e6;

  if (current_time-last_draw_time >= 1./window_update_rate) {
    glutPostRedisplayAll();
    last_draw_time = current_time; 
  }

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
