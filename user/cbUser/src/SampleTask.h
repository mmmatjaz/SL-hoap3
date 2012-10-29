/*!=============================================================================
  ==============================================================================

  \file    SampleTask.h

  \author  Peter Pastor
  \date    Jan. 2010

  ==============================================================================
  \remarks

  sample task that is written in C++

  ============================================================================*/

#ifndef SAMPLETASK_H_
#define SAMPLETASK_H_

class SampleTask {

public:

  /*!
   */
  SampleTask();
  ~SampleTask();

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

};

#endif // SAMPLETASK_H_
