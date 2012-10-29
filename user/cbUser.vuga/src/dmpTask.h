/*!=============================================================================
  ==============================================================================

  \file    DMPTask.h

  \author  Ales Ude
  \date    Aug. 2012

  ==============================================================================
  \remarks

  dmp generation and execution

  ============================================================================*/

#ifndef DMPTASK_H_
#define DMPTASK_H_

#include "SL_filters.h"
#include "DMPstructure.h"

class dmpTask {

public:

  /*!
   */
  dmpTask();
  ~dmpTask();

  /*!
   */
  int initialize();
  int run();
  int changeParameters();

private:

  /*!
   */
  double start_time_;
  double freq_;
  double amp_;
  SL_DJstate target_[N_DOFS+1];

  Matrix Kinect_traj, CBi_traj;
  char **vnames_CBi, **units_CBi, **vnames_Kinect, **units_Kinect;
  int n_Kinect, n_CBi, dof_Kinect, dof_CBi;
  DMP_structure *DMP_object;
  Filter fth[N_DOFS+1];
  double COP[N_CART+1];
  int active_dofs[N_DOFS+1];
  double initial_positions[N_DOFS+1], initial_velocities[N_DOFS+1];
};

#endif // DMPTASK_H_
