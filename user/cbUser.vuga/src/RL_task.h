/*!=============================================================================
  ==============================================================================

  \file    RL_task.h

  \author  Rok Vuga
  \date    Aug. 2012

  ==============================================================================
  \remarks

  reinforcement learning using Power algorithm

  ============================================================================*/

#ifndef RLTASK_H_
#define RLTASK_H_

#include "SL_filters.h"
#include "DMPstructure.h"

class RL_task {

public:

  /*!
   */
  RL_task();
  ~RL_task();

  /*!
   */
  int initialize();
  int run();
  int changeParameters();
  void newPolicy(double R);
  double copError(void);
  void reward_write(void);
  void data_write(void);

private:

  /*!
   */
  double start_time_, previous_time_;
  SL_DJstate target_[N_DOFS+1];

  Matrix Kinect_traj, CBi_traj;
  char **vnames_CBi, **units_CBi, **vnames_Kinect, **units_Kinect;
  int n_Kinect, n_CBi, dof_Kinect, dof_CBi;
  DMP_structure *DMP_object;
  Filter fth[N_DOFS+1];
  double COP[N_CART+1];
  int active_dofs[N_DOFS+1];

  bool filter_Kinect_data;
  double initial_positions[N_DOFS+1], initial_velocities[N_DOFS+1];

  //reinforcement learning
  Vector theta;			 					// main variable for parameters
  Vector eTheta;		 					// theta + noise
  double R, errorCop, errorTraj, R_factor;	// reward
  Vector bestR;			 					// collection of best past rewards (sorted)
  Matrix bestEtheta; 						// collection of best past parameters according to and corresponding to bestR
  double tdmp;
  int tback;
  int experiment;
  int Kinect_counter;

  Vector w;
  int wLen;					// number of weights
  int dofLen;				// number of dofs in dmp
  int sampLen;			 	// how many best trials to compute new iteration from
  int n;					// counter for iterations
  double sigma;			 	// variance of perturbations
  int maxIter;			 	// max iter

  Matrix test_traj, test_traj2, test_traj3; 	// variable to save trajectory to compute reward
  int test_trj_len;	 							// length of test_traj
  double saveR[10000][2];						// variable to save progress of rewards
  unsigned int numUpdates;						// index for saveR
};

#endif // RLTASK_H_
