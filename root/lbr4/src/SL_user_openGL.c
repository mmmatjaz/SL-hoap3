/*!=============================================================================
  ==============================================================================

  \file    SL_user_openGL.c

  \author  Stefan Schaal
  \date    May 2010

  ==============================================================================
  \remarks
  
  This program contains all graphics user functions for a particular simulation.
  
  ============================================================================*/
  
// SL general includes of system headers
#include "SL_system_headers.h"

// openGL headers
#include "GL/freeglut_std.h"
#include "GL/freeglut_ext.h"
#include "GL/glu.h"
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
static int createWindows(void);
static void myDrawGLElement(int num, double length, int flag);

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
  int width=600, height=600;
  OpenGLWPtr w;
  
  Display *disp;
  int  screen_num;
  int  display_width;
  int  display_height;

  char string[100];
  char xstring[100];

  double eye[N_CART+1];
  double focus[N_CART+1];
  
  // connect to X server using the DISPLAY environment variable
  if ( (disp=XOpenDisplay(NULL)) == NULL ) {
    printf("Cannot connect to X servo %s\n",XDisplayName(NULL));
    exit(-1);
  }
  
  // get screen size from display structure macro 
  screen_num = DefaultScreen(disp);
  display_width = DisplayWidth(disp, screen_num);
  display_height = DisplayHeight(disp, screen_num);
  
  // get a window structure, initialized with default values 
  w=getOpenGLWindow();
  if (w==NULL)
    return FALSE;

  // change viewpoint 
  w->eye[_Z_]  = 0.7;
  w->eye[_X_]  = 1.5;
  w->eye[_Y_]  = 1.;

  w->display = display;
  w->idle    = idle;
  w->width   = width;
  w->height  = height;


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
  

  if (read_parameter_pool_double_array(config_files[PARAMETERPOOL], 
				       "main_window_camera_focus", N_CART, focus))
    for (i=1; i<=N_CART; ++i)
      w->center[i] = focus[i];
  

  for (i=1; i<=N_CART; ++i) {
    w->eye0[i] = w->eye[i];
    w->center0[i] = w->center[i];
  }


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
  GLfloat  objscolor[4]={(float)0.,(float)0.,(float)0.,(float)0.0};
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
		
  static int firsttime = TRUE;
  static int lbr0,lbr1,lbr2,lbr3,lbr4,lbr5,lbr6,lbr7;

  GLfloat  gray[4]={(float)0.8,(float)0.8,(float)0.8,(float)1.0};
  GLfloat  green[4]={(float)0.1,(float)0.5,(float)0.5,(float)1.0};
  GLfloat  red[4]={(float)1.0,(float)0.25,(float)0.25,(float)1.0};
  GLfloat  blue[4]={(float)0.1,(float)0.1,(float)1.0,(float)1.0};
  GLfloat  black[4]={(float)0.3,(float)0.3,(float)0.3,(float)1.0};
  GLfloat  white[4]={(float)1.,(float)1.,(float)1.0,(float)1.0};
  GLfloat  yellow[4]={(float)1.0,(float)0.8,(float)0.7,(float)1.0};

  int      isphere = 10;

  double   width=0.03;

  if (solid)
    glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
  else
    glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );


  if (firsttime) {
    firsttime = FALSE;

    char *lab_root;
    char  fname[300];

    lab_root = getenv("LAB_ROOT");

    sprintf(fname,"%s/lbr4/3D/lbr0.obj",lab_root);
    lbr0 = displayListFromObjFile(fname,1.);

    sprintf(fname,"%s/lbr4/3D/lbr1.obj",lab_root);
    lbr1 = displayListFromObjFile(fname,1.);

    sprintf(fname,"%s/lbr4/3D/lbr2.obj",lab_root);
    lbr2 = displayListFromObjFile(fname,1.);

    sprintf(fname,"%s/lbr4/3D/lbr3.obj",lab_root);
    lbr3 = displayListFromObjFile(fname,1.);

    sprintf(fname,"%s/lbr4/3D/lbr4.obj",lab_root);
    lbr4 = displayListFromObjFile(fname,1.);

    sprintf(fname,"%s/lbr4/3D/lbr5.obj",lab_root);
    lbr5 = displayListFromObjFile(fname,1.);

    sprintf(fname,"%s/lbr4/3D/lbr6.obj",lab_root);
    lbr6 = displayListFromObjFile(fname,1.);

    sprintf(fname,"%s/lbr4/3D/lbr7.obj",lab_root);
    lbr7 = displayListFromObjFile(fname,1.);

  }



  if (flag==1) {
    glTranslated(0.0,0.0,length); 

    if (num==999) {/* the base coordinate system */
      glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, blue);
      glColor4fv(blue);
    } else {
      glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
      glColor4fv(gray);
    } 

    if (solid)
      glutSolidSphere(0.5*width,isphere,isphere);
    else
      glutWireSphere(0.5*width,isphere,isphere);

    glTranslated(0.0,0.0,-length);
  }
	

  switch (num) {

  case R_A1: 
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
    glColor4fv(gray);
    glRotated((GLdouble)90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
    glCallList(lbr0);

    glPushMatrix();

    glTranslated(0.00,0.025,-0.03);
    glScaled(0.1,0.05,0.1); // the connector box
    if (solid)
      glutSolidCube(1.);
    else
      glutWireCube(1.);

    glPopMatrix();

    break;

  case R_A2: 
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
    glColor4fv(gray);
    glTranslated(0.00,0.00,0.008);
    glRotated((GLdouble)90.,(GLdouble)0.,(GLdouble)0.,(GLdouble)1.);
    glCallList(lbr1);
    break;

  case R_E1: 
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
    glColor4fv(gray);
    glRotated((GLdouble)-90.,(GLdouble)0.,(GLdouble)0.,(GLdouble)1.);
    glRotated((GLdouble)90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
    glCallList(lbr2);
    break;

  case R_A3: 
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
    glColor4fv(gray);
    glTranslated(0.00,0.00,0.008);
    glRotated((GLdouble)90.,(GLdouble)0.,(GLdouble)0.,(GLdouble)1.);
    glCallList(lbr3);
    break;

  case R_A4: 
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
    glColor4fv(gray);
    glRotated((GLdouble)-90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
    glRotated((GLdouble)90.,(GLdouble)0.,(GLdouble)1.,(GLdouble)0.);
    glCallList(lbr4);
    break;

  case R_A5: 
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
    glColor4fv(gray);
    glTranslated(0.00,0.00,0.007);
    glRotated((GLdouble)90.,(GLdouble)0.,(GLdouble)0.,(GLdouble)1.);
    glCallList(lbr5);
    break;

  case R_A6: 
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
    glColor4fv(gray);
    glTranslated(0.046,0.00,0.00);
    glRotated((GLdouble)-90.,(GLdouble)0.,(GLdouble)1.,(GLdouble)0.);
    glRotated((GLdouble)-90.,(GLdouble)0.,(GLdouble)0.,(GLdouble)1.);
    glCallList(lbr6);
    break;

  case 108: 
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
    glColor4fv(gray);
    glTranslated(0.00,0.00,0.009);
    glCallList(lbr7);
    break;

  default:

    glScaled(width/2.,width/2.,length);
    glColor4fv(gray);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
    if (solid)
      glutSolidCylinder(1.0,1.0,isphere,1);
    else
      glutWireCylinder(1.0,1.0,isphere,1);
			
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

