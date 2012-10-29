/*!=============================================================================
  ==============================================================================

  \file    kinect_task.h

  \author  Ales Ude, Rok Vuga
  \date    July 2012

  ==============================================================================
  \remarks

  ============================================================================*/

#ifndef KINECT_TASK_H_
#define KINECT_TASK_H_

#include "DMPstructure.h"
#include "SL_filters.h"

class kinect_task {

public:

  /*!
   */
  kinect_task();
  ~kinect_task();

  /*!
   */
  int initialize();
  int run();
  int changeParameters();

private:

  /*!
   */
  double start_time_, previous_time_;
  SL_DJstate target_[N_DOFS+1];

  double joint_pose[15][3][4], initial_torso_pose[3][4];
  Filter fth[N_DOFS+1];
  int filters_initialized;
  double time1, time2, time_kinect1, time_kinect2, last_kinect_time;

  double MSP[N_CART+1], LSP[N_CART+1], ZMP[N_CART+1], // most stable point, least stable point
         COP[N_CART+1], z_n[N_CART+1];                // center of pressure, stability index; 
  int active_dofs[N_DOFS+1], active_legs_dofs[14+1];
  int leg_index;

  int track;
  int task_servo_steps;
  int count_Kinect_frames, waiting_for_data;
  int ndofs, msp_dimension;
  int data_collection, save_active_dofs, use_cop, cog_printing;
  int track_legs, track_torso, balance_with_legs, playback;

  double knee_kinect_initial, knee_initial, offset_hip, offset_ankle;
  double body_tilt, ankle_tilt;

  int KinectReader(const char *fifo_name, char buffer[]);
  void kinect2joint(char buffer[]);

  void kinect_velocities(double timestamp);
  void body_tracking_velocities(double timestamp, int update);
  double apply_max_velocity(int i);
  void stability_control(void);
  void leg_dofs(double knee_theta, double hip, double ankle, double *hip_theta, double *ankle_theta);
  void leftLegInvKin(void);
  void control_dofs(void);

  int copy_Kinect_data(double task_time);
  int copy_more_Kinect_data();
  int copy_CBi_data(double task_time);
  void initialize_data_collection();
  int save_data();
  int Kinect_collection_idx, CBi_collection_idx, Kinect_DOFs;
  Matrix Kinect_traj, CBi_traj; 
 
  // SVD variables:
  Matrix A, B, V, JcogNull, FeetNull;
  Vector s;
  Vector CogVelocity, DesiredVelocity, unconstrained_velocities, u_cog;
};

#endif // KINECT_TASK_H_
