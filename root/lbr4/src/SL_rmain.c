/*!=============================================================================
  ==============================================================================

  \file    SL_rmain.c

  \author  Stefan Schaal
  \date    Oct. 2010

  ==============================================================================
  \remarks

  Entry program for SL actual robot controller -- forks off multiple processes 
  or the different servos

  ============================================================================*/

// SL general includes of system headers
#include "SL_system_headers.h"
#include "sys/wait.h"
#include "unistd.h"
#include <X11/Xlib.h>

// local headers
#include "SL.h"
#include "SL_common.h"
#include "SL_unix_common.h"
#include "SL_shared_memory.h"
#include "utility.h"

// global variables
int servo_enabled = FALSE;
double servo_time = 0;

/*!*****************************************************************************
 *******************************************************************************
 \note  main
 \date  Nov. 2007

 \remarks 

 A simple program creating multiple processes

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 \param[in]     argc : number of elements in argv
 \param[in]     argv : array of argc character strings

 ******************************************************************************/
int 
main(int argc, char**argv)

{
  int no_arm_flag = FALSE;
  int no_hand_flag = FALSE;

#include "SL_user_main_core.h"

  // the real-time flag
  sprintf(argv_array[c++],"-rt");
  sprintf(argv_array[c++],"-rtc");

  // check for flags that disable the head or the arm:
  for (i=1; i<argc; ++i)
    if (strcmp(argv[i],"-no-arm")==0 || strcmp(argv[i],"-na")==0)
      no_arm_flag = TRUE;
  for (i=1; i<argc; ++i)
    if (strcmp(argv[i],"-no-hand")==0)
      no_hand_flag = TRUE;

  if (no_arm_flag)
    sprintf(argv_array[c++],"-na");
  if(no_hand_flag)
    sprintf(argv_array[c++],"-no-hand");


  for (i=0; i<c; ++i) 
    argv_ptr[i] = argv_array[i];
  argv_ptr[c] = NULL;

  // the ROS servo
  if (ros_flag) {
    if (fork() == 0) {
      sprintf(argv_ptr[geometry_argv],"90x12+%d+454",display_width-delta_width);
      if (read_parameter_pool_string(config_files[PARAMETERPOOL], 
                                     "ros_servo_geometry", string))
        if (parseWindowSpecs(string, display_width,display_height,xstring, &x, &y, &w, &h))
          strcpy(argv_ptr[geometry_argv],xstring);
      sprintf(argv_ptr[background_argv],"White");
      sprintf(argv_ptr[servo_argv],"xros");
      sprintf(argv_ptr[title_argv],"xros");
      execvp("xterm",argv_ptr);
      exit(-1);
    }
    semTake(sm_init_process_ready_sem,WAIT_FOREVER);
  }

  // the task servo
  if (fork() == 0) {
    sprintf(argv_ptr[geometry_argv],"90x30+%d+640",display_width-delta_width);
    if (read_parameter_pool_string(config_files[PARAMETERPOOL], 
                                   "task_servo_geometry", string))
      if (parseWindowSpecs(string, display_width,display_height,xstring, &x, &y, &w, &h))
        strcpy(argv_ptr[geometry_argv],xstring);
    sprintf(argv_ptr[background_argv],"PowderBlue");
    sprintf(argv_ptr[servo_argv],"xrtask");
    sprintf(argv_ptr[title_argv],"xrtask");
    execvp("xterm",argv_ptr);
    exit(-1);
  }
  semTake(sm_init_process_ready_sem,WAIT_FOREVER);

  // the motor servo
  if (fork() == 0) {
    sprintf(argv_ptr[geometry_argv],"90x12+%d+268",display_width-delta_width);
    if (read_parameter_pool_string(config_files[PARAMETERPOOL], 
                                   "motor_servo_geometry", string))
      if (parseWindowSpecs(string, display_width,display_height,xstring, &x, &y, &w, &h))
        strcpy(argv_ptr[geometry_argv],xstring);
    sprintf(argv_ptr[background_argv],"thistle");
    sprintf(argv_ptr[servo_argv],"xrmotor");
    sprintf(argv_ptr[title_argv],"xrmotor");
    execvp("xterm",argv_ptr);
    exit(-1);
  }
  semTake(sm_init_process_ready_sem,WAIT_FOREVER);

  // the opengGL servo
  if (graphics_flag) {
    if (fork() == 0) {
      sprintf(argv_ptr[geometry_argv],"90x8+%d+134",display_width-delta_width);
      if (read_parameter_pool_string(config_files[PARAMETERPOOL],
                                     "openGL_servo_geometry", string))
        if (parseWindowSpecs(string, display_width,display_height,xstring, &x, &y, &w, &h))
          strcpy(argv_ptr[geometry_argv],xstring);
      sprintf(argv_ptr[background_argv],"LightYellow");
      sprintf(argv_ptr[servo_argv],"xopengl");
      sprintf(argv_ptr[title_argv],"xopengl");
      sprintf(argv_ptr[nice_argv],"19");
      execvp("xterm",argv_ptr);
      exit(-1);
    }
    semTake(sm_init_process_ready_sem,WAIT_FOREVER);
  }

  // the simulation
  //  if (fork() == 0) {
  //    sprintf(argv_ptr[geometry_argv],"90x8+%d+0",display_width-delta_width);
  //    if (read_parameter_pool_string(config_files[PARAMETERPOOL],
  //				   "simulation_servo_geometry", string))
  //      if (parseWindowSpecs(string, display_width,display_height,xstring, &x, &y, &w, &h))
  //	strcpy(argv_ptr[geometry_argv],xstring);
  //    sprintf(argv_ptr[background_argv],"LightGray");
  //    sprintf(argv_ptr[servo_argv],"xsimulation");
  //    sprintf(argv_ptr[nice_argv],"0");
  //    execvp("xterm",argv_ptr);
  //    exit(-1);
  //  }

  // monitor dying child process and kill all other if this happens
  waitpid(0,&stat_loc,options);

  return TRUE;
}


