/*!=============================================================================
  ==============================================================================

  \file    dmp_exec.h

  \author  Peter Pastor
  \date    Jan. 2010

  ==============================================================================
  \remarks

  sample task that is written in C++

  ============================================================================*/

#ifndef DMPEXEC_H_
#define DMPEXEC_H_

class dmp_exec {

public:

  /*!
   */
  dmp_exec();
  ~dmp_exec();

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

};

#endif // DMPEXEC_H_
