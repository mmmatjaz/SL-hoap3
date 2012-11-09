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
GLfloat  gray[4]={(float)0.8,(float)0.8,(float)0.8,(float)1.0};
  GLfloat  green[4]={(float)0.1,(float)0.5,(float)0.5,(float)1.0};
  GLfloat  red[4]={(float)1.0,(float)0.25,(float)0.25,(float)1.0};
  GLfloat  blue[4]={(float)0.1,(float)0.1,(float)1.0,(float)1.0};
  GLfloat  black[4]={(float)0.,(float)0.,(float)0.0,(float)1.0};
  GLfloat  white[4]={(float)1.,(float)1.,(float)1.0,(float)1.0};
  GLfloat  yellow[4]={(float)1.0,(float)0.8,(float)0.7,(float)1.0};
// local functions
static int  createWindows(void);
static void myDrawGLElement(int num, double length, int flag);
static void drawSphericJoint(int solid, double radius, double length);
static void drawCuboJoint(int solid,
			double offx, double offy, double offz,
			double a, double b, double c);

static void drawCylLink(int solid, double radius, double length);
static void drawCuboLink(int solid, double a, double b, double length);
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

  //drawCenterOfPressure();
  //drawCOG();

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
  


  //printf("\n num %d | len %f | flag %d", num, length, flag);
int      isphere = 10;

	/*
  if (flag==1) {
    glTranslated(0.0,0.0,length); 

    if (num==999) {
      glColor4fv(blue);
    } else {
      glColor4fv(green);
    }

    if (solid)
      glutSolidSphere(0.5*width,isphere,isphere);
    else
      glutWireSphere(0.5*width,isphere,isphere);

    glTranslated(0.0,0.0,-length);
  }
*/

	switch (num) {

	case 115:
		break;
	case 116:
		break;
	case 117:
		break;
	case 118:
		break;
	case 108:
		break;
	case 109:
		break;
	case 110:
		break;
	case 111:
		break;
	case 2501:
		break;
	case 2701:
		break;
	case 2601:
		drawCylLink(solid,0.005,length);
		break;
	case 2801:
		drawCylLink(solid,0.005,length);
		break;
	case 1:
		drawSphericJoint(solid,0.032,length);
		break;
	case 11:
		drawSphericJoint(solid,0.032,length);
		break;
	case 2702:
		drawCuboLink(solid,	0.03,
							0.005,
							length);
		break;
	case 2502:
		drawCuboLink(solid,	0.03,
							0.005,
							length);
		break;
	case 4:
		drawSphericJoint(solid,0.032,length);
		drawCuboLink(solid,0.06,0.06,length);
		break;
	case 5:
		drawSphericJoint(solid,0.032,length);
		drawCuboLink(solid,0.06,0.06,length);
		break;
	case 1001:
		drawCuboJoint(solid,
				(FOOTLENGSHORT+FOOTLLENGLONG)/2-FOOTLLENGLONG,
				(FOOTWIDSHORT+FOOTWIDLONG)/2-FOOTWIDLONG,
				length-FOOTTHICK/2,
				FOOTLENGSHORT+FOOTLLENGLONG,
				FOOTWIDSHORT+FOOTWIDLONG,
				FOOTTHICK);
		break;

	case 14:
		drawSphericJoint(solid,0.032,length);
		drawCuboLink(solid,0.06,0.06,length);
		break;
	case 15:
		drawSphericJoint(solid,0.032,length);
		drawCuboLink(solid,0.06,0.06,length);
		break;

	case 2001:
		drawCuboJoint(solid,
			(FOOTLENGSHORT+FOOTLLENGLONG)/2-FOOTLLENGLONG,
			(FOOTWIDSHORT+FOOTWIDLONG)/2-FOOTWIDSHORT,
			length-FOOTTHICK/2,
			FOOTLENGSHORT+FOOTLLENGLONG,
			FOOTWIDSHORT+FOOTWIDLONG,
			FOOTTHICK);
		//drawSphericJoint(solid,0.01,length);

		break;

	case 2102:
			glTranslated(		-.04,
								.0,
								-BODYLINK1+.01+.18/2.);
			drawCuboLink(solid,	.205,
								.144,
								.18);
			break;

	case 7:
		drawSphericJoint(solid,0.028,length);
		drawCylLink(solid,0.028,length);
		break;
	case 9:
		drawSphericJoint(solid,0.028,length);
		drawCylLink(solid,0.028,length);
		break;
	case 25:
		//drawSphericJoint(solid,0.028,length);
		drawCylLink(solid,0.028,length);
		break;

	case 17:
		drawSphericJoint(solid,0.028,length);
		drawCylLink(solid,0.028,length);
		break;
	case 19:
		drawSphericJoint(solid,0.028,length);
		drawCylLink(solid,0.028,length);
		break;
	case 27:
		//drawSphericJoint(solid,0.028,length);
		drawCylLink(solid,0.028,length);
		break;

	case 23:
		drawSphericJoint(solid,0.065,length);
		drawCylLink(solid,0.01,length);
		break;

	default:
		drawSphericJoint(solid,0.01,length);
		drawCylLink(solid,0.005,length);
	  /*
    glScaled(width/2.,width/2.,length);
    glColor4fv(gray);
    if (solid)
      glutSolidCylinder(1.0/2.0,1.0,isphere,1);
    else
      glutWireCylinder(1.0/2.0,1.0,isphere,1);
		*/
  }
}

static void drawSphericJoint(int solid, double radius, double length)
{
	int      isphere = 10;
	glTranslated(0.0,0.0,length);

	if (solid)
	  glutSolidSphere(radius,isphere,isphere);
	else
	  glutWireSphere(radius,isphere,isphere);

	glTranslated(0.0,0.0,-length);
}
static void drawCuboJoint(int solid,
			double offx, double offy, double offz,
			double a, double b, double c)
{
	glTranslated(offx,offy,offz);
	glScaled(a,b,c);
	//glTranslated(0.0,0.0,0.5);
	if (solid)
		glutSolidCube(1.0);
	else
		glutWireCube(1.0);
	glTranslated(0.0,0.0,-offz);
}

static void drawCylLink(int solid, double radius, double length)
{
	int      isphere = 10;
	glScaled(1.,1.,length);
	    glColor4fv(gray);
	    if (solid)
	      glutSolidCylinder(radius,1.0,isphere,1);
	    else
	      glutWireCylinder(radius,1.0,isphere,1);
}


static void drawCuboLink(int solid, double a, double b, double length)
{
	glScaled(a,b,length);
	glTranslated(0.0,0.0,0.5);
	glColor4fv(gray);
	if (solid)
		glutSolidCube(1.0);
	else
		glutWireCube(1.0);
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

