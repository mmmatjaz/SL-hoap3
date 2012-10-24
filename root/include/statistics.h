/*!=============================================================================
  ==============================================================================

  \file    statistics.h

  \author  Copyright Stefan Schaal
  \date    December 1995

  ==============================================================================

  \remarks

	header for statistics.c

  ============================================================================*/

typedef struct Regression_Statistics {
  int      n_in;
  int      n_out;
  int      n_pts;
  double   outlier_threshold;
  double **beta;
  double  *var_residuals;
  double  *var_outputs;
  double  *r_squared;
  double  *r_squared_adj;
  double  *f_reg;
  double  *p_reg;
  double **var_coeff;
  double **std_coeff;
  double **t_coeff;
  double **p_coeff;
  int     *outliers;
  int      n_outliers;
  double  *sv;
} Regression_Statistics;


typedef struct RLSStatistics {
  int      n_in;
  int      n_out;
  int      add_constant;
  double   lambda;
  double   ridge;
  double   nMSE;
  double   n_data;
  char     name[100];
  Matrix   P;
  Vector   Px;
  Matrix   beta;
  Vector   x;
  Vector   y;
  Vector   pred;
  Vector   error;
  Vector   sum_error2;
  Vector   sum_y2;
  Vector   sum_y;
} RLSStatistics, *RLSStatisticsPtr;


typedef struct HistogramStatistics {
  double   lambda;
  double   min;
  double   max;
  int      n_bins;
  int      n_data;
  double  *n_data_bin;
  double  *n_success;
  double  *p;
  char     name[100];
} HistogramStatistics, *HistogramStatisticsPtr;



#ifdef __cplusplus
extern "C" {
#endif

  /* zero lag filter with Butterworth 2.order; requires the butterworth
     coeff. table in the current directory */
  int
  filtfilt( double *vec, int nr, int cutoff, double *vec_out);

  /* takes the numerical derivative by non causal convolution */
  int
  diff( double *vec, int nr, double dt, double *vec_out);

  /* takes the numerical second derivative by non causal convolution */
  int
  diff2( double *vec, int nr, double dt, double *vec_out);

  /* performs linear regression, returns data structure with statistics */
  Regression_Statistics *
  linearRegression(double **XX, double **YY, int n_pts, int n_in, int n_out,
		   double outlier_threshold);
  int
  printRegressionStatistics(Regression_Statistics *stat,FILE *fp, char *name);

  /* mean and variance of a vector */
  int
  meanvar( double *vec, int nr, double thres, double *mean, double *var, 
	   int *n_outliers);

  /* recursive least squares */
  void
  recursiveLeastSquares(RLSStatisticsPtr rls, double *x, double *y, double w);

  RLSStatisticsPtr
  initRecursiveLeastSquares(int n_in, int n_out, int add_constant, 
			    double ridge, double lambda, char *name);

  int 
  writeRLS(RLSStatisticsPtr rls);

  RLSStatisticsPtr 
  readRLS(char *name);

  int
  predictRLS(RLSStatisticsPtr rls, int n_data_min, double *x, double *y);


  /* 1D histograms as nonparametric classifiers */
  HistogramStatisticsPtr
  initHistogram(double min, double max, int n_bins,
		double lambda, char *name);
  int
  writeHistogram(HistogramStatisticsPtr hist);

  HistogramStatisticsPtr
  readHistogram(char *name);

  void
  histogramClassifier(HistogramStatisticsPtr hist, double x, double s, double w);

  int
  predictHistogram(HistogramStatisticsPtr hist, int n_data_min, 
		   int n_neighbors, double x, double *y);


#ifdef __cplusplus
}
#endif
