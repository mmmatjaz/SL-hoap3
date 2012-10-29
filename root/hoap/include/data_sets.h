/*!=============================================================================
  ==============================================================================

  \file    data_sets.h

  \author  Copyright Stefan Schaal
  \date    January 1996

  ==============================================================================
  \remarks
  
  header file for data_sets.c
  
  ============================================================================*/


#define  MAX_GENERATING_FUNCTIONS 100

#define  RANDOM_SAMPLING        1
#define  SEQUENTIAL_SAMPLING    2
#define  GENERATING_FUNCTION    3
#define  PSEUDO_RANDOM_SAMPLING 4

#ifdef __cplusplus
extern "C" {
#endif

extern void   (*generating_function[MAX_GENERATING_FUNCTIONS+1])(double *x, double *y);

int
draw_data_point(double **X, double **Y, int n_data, int n_in, int n_out,
		int sampling_method, int index_function, int **ind,
		double *x, double *y, int *current_data_point);

void
squiggle(double *in, double *out);

void
cross(double *in, double *out);
void
cross10d(double *in, double *out);
void
cross10d_10_noise(double *in, double *out);
void
cross1(double *in, double *out);
void
cross2(double *in, double *out);
void
cross3(double *in, double *out);
void
cross_region(double *in, double *out, double *r_min, double *rmax);
void
cross_3_noise(double *in, double *out);
void
cross_8_noise(double *in, double *out);
void
cross_2_noise_001(double *in, double *out);
void
cross_2_noise_01(double *in, double *out);
void
cross_2_noise_1(double *in, double *out);
void
cross_n_noise_val(double *in, double *out, int n, double val);
void 
cross_2_brown_10(double *in, double *out);
void 
cross_2_brown_50(double *in, double *out);
void 
cross_2_brown_25(double *in, double *out);
void 
cross_2_noise_2_brown(double *in, double *out);
double
cross_brown(double x);
void 
cross_1_noise_1_brown_1_duplicate(double *in, double *out);


void
inv_dyn_2DOF(double *in, double *out);
void
inverse_dynamics_2DOF(double th1, double th2, double th1d, double th2d,
		      double th1dd, double th2dd, double *control1,
		      double *control2);
void
inverse_kinematics_2DOF(double x, double y, double *th1, double *th2);

void
forward_dynamics_2DOF(double th1, double th2, double th1d, double th2d,
		      double control1, double control2, double dt,
		      double *nth1, double *nth2, double *nth1d,double *nth2d);
void
forward_kinematics_2DOF(double th1, double th2, double *x, double *y);
void
cross_nonsense_dim(double *in, double *out);

#ifdef __cplusplus
  }
#endif
