/*!=============================================================================
  ==============================================================================

  \file    lwpr.h

  \author  Sethu Vijayakumar & Stefan Schaal
  \date    Dec.2002

  ==============================================================================
  \remarks
  
  the defines for the lwpr.c programs
  
  ============================================================================*/

#ifndef __lwpr__
#define __lwpr__

#ifdef  alpha
#undef  alpha
#endif

#define MAX_LWPRS  100    /*!< maximum number of models to 
			    be administrated at a time */
#define MAX_RFS   100000 /*!< what is the max number of rfs permitted per LWPR */

/* possible kernel functions */

#define GAUSSIAN   1   /*!< traditional Gaussian kernel */
#define BISQUARE   2   /*!< polyonmial kernel with truncation */
#define VONMISES   3   /*!< Gaussian on a sphere -- needs input data from 0 to 2pi for
			  weighting input x_w */

/* should we use a lookup table for exp() calculations? This is faster,
   but will introduce slight inaccuracies which may hurt when debugging */

#define USE_EXP_LOOKUP         FALSE

/* what is the initial dimensionality of the regression? */

#define DEF_DIM 1

/* handy constants to keep the numerics stable */

#define BIG_NUMBER  1.e+10            /*!< used for numerical stability */
#define TINY_NUMBER 1.e-10            /*!< used for numerical stability */
#define BIG_RIDGE   1.e+2             /*!< NOTE: this is not always "big" */
#define TINY_RIDGE  1.e-5             /*!< NOTE: this is not always "tiny" */
#define ACTIVATION_THRESHOLD 1.e-3    /*!< below this threshold, no data is
                                         added to a rf (just a speed up) */
#define DEF_INIT_S2          1.       /*!< the intial value for the cov. terms
					 initial regularization */
#define ERROR_RATE_THRESHOLD 1.e-6    /*!< when is the change of the RF size
					 considered to be stationary */
#define NN_BLOCK    10                /*!< how many nearest neighbors to
					 allocated in one chunk */

/*! default values for various learning parameters */
#define DEF_W_GEN         0.1
#define DEF_W_PRUNE       0.9
#define DEF_ALLOW_SHIFT   FALSE
#define DEF_FACTOR_PRUNE  5.0
#define DEF_INIT_LAMBDA   0.995
#define DEF_FINAL_LAMBDA  0.99999
#define DEF_TAU_LAMBDA    0.9999
#define DEF_DIAG_D        100.0
#define DEF_OFFDIAG_D     0.0
#define DEF_RIDGE         0.01
#define DEF_ALPHA_RIDGE   1.0
#define DEF_D_NOISE       0.0
#define DEF_C_NOISE       0.0
#define DEF_ADD_THRESHOLD 0.5


/* the structure for a receptive field. NOTE: in order to accomplish
   binary compatibility with 680x0 processors, I have to keep values
   on proper 2-word boundaries, e.g., a double cannot start with an
   odd word count, if counting starts at zero */

typedef struct RF {

  /*!<  pointer values */
  double     w;             /*!< a handy temp. variable: used for update */
  double     ww;            /*!< a handy temp. variable: used for prediction */

  int        n_proj;	    /*!< the number of input dimensions too reg.*/
  Matrix     B;             /*!< the regression parameters */

  Matrix     D;             /*!< the distance metric in input space */
  Matrix     M;             /*!< the decomp.distance metric */

  Vector     c;             /*!< the center of the receptive field */
  Matrix     SXresYres;     /*!< sum of Xres'*Yres in input space */

  Vector     ss2;           /*!< sum of s^2 in projection space */
  Vector     dof;           /*!< local degrees of freedom */

  Matrix     SSYres;        /*!< sum of s*Yres in projection space space */
  Matrix     SSXres;        /*!< sum of s*Xres in projection space space */

  Matrix     alpha;         /*!< the learning rates for each distance 
			       metric coeff. */
  Vector     mean_x_reg;    /*!< mean of x for regression */

  Vector     var_x_reg;     /*!< variance of x for regression */
  Vector     mean_x_w;      /*!< mean of x for weights*/

  Vector     var_x_w;       /*!< variance of x for weights */
  Vector     mean_y;        /*!< mean of y */

  Vector     var_y;         /*!< variance of y */
  Matrix     W;             /*!< the matrix of projection vectors */

  Vector     Wnorm;         /*!< the normalization for W */
  Matrix     U;             /*!< the matrix of input space regression coeffs */

  Vector     r;             /*!< a memory trace for learning the dist.metric */
  Matrix     T;             /*!< a memory trace for learning the dist.metric with
			       only one projection */

  Matrix     A;             /*!< a memory trace for learning the dist.metric with
			       only one projection */
  Matrix     H;             /*!< memory trace for learning the dist metric */

  Matrix     b;             /*!< the meta learning rate */
  Matrix     h;             /*!< the memory term of the meta learning rate */

  Vector     sum_weights;   /*!< the sum of weights in this rf for each 
                               regression dimensions */
  Vector     sum_error_cvi; /*!< the sum of weighted CV error in this rf for 
			       every regression dimension */

  Vector     sum_error;     /*!< the sum of weighted (non-CV) error in this rf for 
			       every regression dimension */
  Vector     n_data;        /*!< the discounted number of data points which 
				contributed to this rf per regression dim. */

  Vector     lambda;        /*!< a forgetting factor for each regression 
			       dimension */
  Vector     s;             /*!<  projected input data */


  /*!<  scalar values */
  int        idummy;
  int        trustworthy;   /*!< true if the rf reaches sufficient trus
				in all input dimensions */

  double      sum_D2;        /*!< the sum of squared distance metric coeff */
  double      sum_error_cv;  /*!< the total weighted CV error of the RF */

  long        n_updates;     /*!< a counter for the number of updates of
				this RF */

  /*!<  nearest neigbor data */
  iVector     nn;               /*!< the vector of NN IDs */

  Vector      nnw;              /*!< the associated activation weight for
				   each nearest neighbor */
  int         n_nn_allocated;   /*!< how many NN are alloacted */

  int         n_nn;             /*!< how many NN are really used */
  int         next_nn_check;    /*!< index of next rf to check for NN */

  /*!<  variables for learning a 2nd regression model in the given local model 
     only used if appropriate flag is set in lwpr structure                 */
  int        n_proj_2nd;	    /*!< the number of input dimensions too 2nd reg.*/
  Matrix     B_2nd;         /*!< the regression parameters of 2nd model*/

  Matrix     SXresYres_2nd; /*!< sum of Xres'*Yres in input space of 2nd model */
  Vector     ss2_2nd;       /*!< sum of s^2 in projection space of 2nd model*/

  Matrix     SSYres_2nd;    /*!< sum of s*Yres in projection space space of 2nd model */
  Matrix     SSXres_2nd;    /*!< sum of s*Xres in projection space space of 2nd model */

  Vector     mean_x_reg_2nd;/*!< mean of x for 2nd regression */
  Vector     var_x_reg_2nd; /*!< variance of x for 2nd regression */

  Vector     dof_2nd;       /*!< local degrees of freedom of 2nd model*/
  Vector     mean_y_2nd;    /*!< mean of y of 2nd model*/

  Vector     var_y_2nd;     /*!< variance of y for 2nd regression */
  Matrix     W_2nd;         /*!< the matrix of projection vectors for 2nd model */

  Vector     Wnorm_2nd;     /*!< the normalization for W_2nd */
  Matrix     U_2nd;         /*!< the matrix of input space regression coeffs for 2nd model */

  Vector     sum_weights_2nd;/*!< the sum of weights in this rf for each 
                                regression dimensions */
  Vector     sum_error_cvi_2nd; /*!< the sum of weighted CV error in this rf for 
                                   every regression dimension of 2nd model*/

  Vector     sum_error_2nd; /*!< the sum of weighted (non-CV) error in this rf for 
			       every regression dimension */
  Vector     n_data_2nd;    /*!< the discounted number of data points which 
				contributed to this rf per 2nd regression dim. */

  Vector     lambda_2nd;    /*!< a forgetting factor for each regression 
			       dimension of 2nd model */
  Vector     s_2nd;          /*!<  projected input data */

  double     sum_error_cv_2nd;  /*!< the total weighted CV error 2nd reg of the RF */

  int        trustworthy_2nd;   /*!< true if the rf reaches sufficient trus
				   in all input dimensions */
  int        idummy2;

} RF;


/* the structure for a sparse distributed code */

typedef struct LWPR {

  /*!<  general administrative info about the LWPR */

  int     n_in_reg;   		/*!< the number of inputs to regression */
  int     n_in_w;   		/*!< the number of inputs for weight calculation */

  int     init_n_proj;           /*!< the initial dimens. of the reg. */
  int     n_out;		/*!< the number of output dimensions for regression */

  long    n_rf;			/*!< the number of receptive fields in the LWPR*/
  long    n_rf_allocated;	/*!< the number of allocated rf */

  int     lwpr_used;		/*!< indicates whether the LWPR model is used */
  int     diag_only;		/*!< only a diagonal distance metric matrix */

  char    lwpr_name[128];       /*!< give the model a name */

  double  d_noise;              /*!< noise level when initializing the distance
				   metric D of an RF */

  double  c_noise;              /*!< noise level when initializing the
				   center of a RF */

  long    max_rfs;              /*!< def: MAX_RFS: #rfs permitted */
  Vector  norm_in_w;            /*!< normalization divisors for inputs for weights*/

  Vector  norm_in_reg;          /*!< normalization divisors for inputs for regression*/
  Vector  norm_out;             /*!< normalization divisors for inputs */

  /*!<  for neareste neighbors */

  int     use_nn;               /*!< establish NN relations */
  int     max_nn_comp;          /*!< the maximal of nearest neighbors to
				   include in a lookup or update */

  /*!<  initialization values */

  Matrix  init_D;               /*!< the initial distance metric */
  Matrix  init_M;               /*!< the decomposed distance metric */

  double  init_alpha;           /*!< the initial learning rates */
  double  init_lambda;		/*!< the initial lambda to be used for each rf */
  double  init_S2;              /*!< the initial values for the covariance terms
				   of the regression */

  /*!<  a variety of learning parameters */
  double  w_gen;		/*!< min activation below which a new rf is 
				   created */
  double  w_prune;		/*!< if exceeded by two rf at the same time, 
				   the less activated rf is pruned */
  double  factor_prune;         /*!< all RFs have a variance in their error. */
				/*!<  If a RF exeeds the STD of the RFs by the */
				/*!<  factor_prune, it will be pruned. Normal */
				/*!<  values for factor_prune are 1.96, 2.57, */
				/*!<  3.17, etc, the values for the area under */
				/*!<  the normal distribution */
  double  final_lambda;		/*!< the final lambda to be used for each rf */
  double  tau_lambda;           /*!< rate of change of lambda */
  double  penalty;              /*!< the penalty factor in the rf */
  double  meta_learning_rate;   /*!< the meta learning rate */
  double  add_threshold;        /*!< when to add a new dimension */

  /*!<  a bit of statistics such that we know what was going on during */
  /*!<  learning */

  double  mean_error;           /*!< the mean error of all RFs */
  double  std_error;            /*!< the standard deviation of the mean error */

  long    n_data;               /*!< how much data has the lwpr seen so far */
  Vector  mean_x_w;             /*!< the mean of all inputs for weighting */

  Vector  var_x_w;              /*!< the variance of all inputs for weights, slightly
				   underestimated due to recursive updates */
  Vector  mean_x_reg;           /*!< the mean of all inputs for regression*/

  Vector  var_x_reg;            /*!< the variance of all inputs for regression, slightly
				   underestimated due to recursive updates */
  long    n_no_trust;           /*!< #rf which are not trusted yet */

  long    n_pruned_error;       /*!< #rf pruned because of large error */
  long    n_pruned_overlap;     /*!< #rf pruned because of large overlap */

  double  mean_n_proj;           /*!< the mean dimensionality of the regression */

  double  contrib_n_rf;         /*!< the mean number of receptive fields contributing
				   to a lookup (interesting for nn only */

  /*!<  some variables to switch on and off individual calculations of RFWR */
  int     allow_addDim;         /*!< enable adaptive change in no.of PCA outputs*/
  int     allow_meta_learning;  /*!< enables the use of meta learning rate */

  int     allow_d_update;       /*!< def: TRUE: allow update of dist.metric */
  int     write_rfs;            /*!< def: TRUE: write out prunced RFS */

  int     allow_add_rfs;        /*!< allow automatic adding of RFS */
  int     idum;                 /*!< dummy for double-byte boundrary */

  /*!<  composite control data */
  int     composite_control;    /*!< TRUE/FALSE: this model is used for control */
  int     n_states;             /*!< number of states in control system */

  int     n_controls;           /*!< number of controls in control system */
  int     linear_gx;            /*!< TRUE/FALSE: use linear term for g(x) */
				  
  /*!<  here we attach all the RFs of the LWPR */
  RF     *rfs;			/*!< the pointer to the receptive fields */
  int     use_offsets;          /*!< use constant offset in regression, yes or no */

  /*!<  variables for learning a 2nd regression model in the given local model */
  int     use_reg_2nd;          /*!< flag to turn on second regression model */
  int     n_in_reg_2nd;   	/*!< the number of inputs to 2nd regression */

  int     n_out_2nd;		/*!< the number of output dimensions for 2nd regression */
  Vector  norm_in_reg_2nd;      /*!< normalization divisors for inputs for 2nd regression*/

  Vector  norm_out_2nd;         /*!< normalization divisors for outputs of 2nd regression*/
  long    n_data_2nd;           /*!< how much data has the 2nd model seen so far */

  double  mean_n_proj_2nd;       /*!< the mean dimensionality of the 2nd regression */

  int     init_n_proj_2nd;       /*!< the initial dimens. of the 2nd reg. */
  int     use_offsets_2nd;       /*!< use constant offset in regression, yes or no */


  /*!<  the kernel function to be used */
  int     kernel_function;

  /*!<  some working matrices and vectors which help to avoid to allocate
     lots of temporary memory. NOTE: these variables need only be allocated
     and neither saved nor initialized */

  Vector x;

  Vector y;
  Vector xp;

  Vector x_mz;
  Vector x_mzp;

  Vector y_mz;
  Vector delta;

  Vector delta2;
  Vector xres;

  Vector yres;
  Vector ypred;

  Vector cr;
  Vector x_temp;

  Vector x_tempp;
  Matrix D_temp;

  Matrix W_temp;
  Matrix error_cv;

  Matrix error;
  Matrix dwdM;

  Matrix dpdM;
  Matrix dppdMdM;

  Matrix dwwdMdM;
  Vector sum_y_predicted;

  iVector derivatives_ok;
  Vector y_mean_predicted;

  Vector x_w;
  Vector x_temp_w;

  Vector xp_w;
  Vector sum_y_predicted2;

  Vector sum_y_conf;
  Vector y_predicted;

  Vector y_predicted2;
  Vector y_conf;

  //!   2nd model temp variables
  Vector sum_y_predicted_2nd;
  Vector sum_y_predicted2_2nd;

  Vector x_2nd;
  Vector y_2nd;

  Vector x_mz_2nd;
  Vector sum_y_conf_2nd;

  Vector x_mzp_2nd;
  Vector y_mz_2nd;

  Vector ypred_2nd;
  Vector x_temp_2nd;

  Vector x_tempp_2nd;
  Vector xres_2nd;

  Vector yres_2nd;
  Matrix error_cv_2nd;

  Matrix error_2nd;
  Vector cr_2nd;

  Vector y_conf_2nd;
  Vector xp_2nd;
  
  Vector y_predicted_2nd;
  Vector y_predicted2_2nd;

}  LWPR;

#ifdef __cplusplus
extern "C" {
#endif

/* the sparse distributed codes as an external variable */

extern LWPR  lwprs[MAX_LWPRS+1];


/* external functions */

int 
addDataToLWPR(int ID, Vector x_w, Vector x, Vector y, int flag, int *rfID);
int 
addWeightedDataToLWPR(int ID, Vector x_w, Vector x, Vector y, 
		      double w_misc, int flag, int *rfID);
int 
addDataToLWPRPredict(int ID, Vector x_w, Vector x, Vector y, int flag, int *rfID, 
		     Vector y_pred);
int 
addDataToLWPRPredictConf(int ID, Vector x_w, Vector x, Vector y, int flag, int *rfID, 
			 Vector y_pred, Vector conf);
int 
addDataToLWPRCompControl(int ID, Vector x, Vector u, Vector y, int flag, int *rfID,
			 Vector y_pred, Vector tracking_error, double tracking_error_gain);
int
readLWPRScript(char *fname, int new_flag, int ID);
int
readLWPRScriptMulti(char *fname, int new_flag, int *IDs, char **names, int n_models);
double
predictLWPROutput(int ID, Vector x_w, Vector x, double cutoff, int blend, 
		  Vector y, int *rfID);
double
predictLWPROutputConf(int ID, double *x_w, double *x, double cutoff, 
		      int blend, double *y, int *rfID, double *conf);
double
predictLWPROutputPart(int ID, Vector x_w, double *x, double cutoff, int blend, int n_part,
		      int **partmat, double **y, int *rfID);
double
predictLWPROutputPartCompControl(int ID, double *x, double *u, double cutoff, 
				 int blend, int n_part, int **partmat, double **y, 
				 int *rfID);
int
writeLWPR(int ID);
int
deleteLWPR(int ID);
int
readLWPR(int ID, char *name);
int
writeRFAscii(int ID, int rfID, int silent, char *string);
void
printLWPRStatistics(int ID);
int 
initLWPR(int      n_in_w,
	 int      n_in_reg,
	 int      n_in_reg_2nd,
	 int      n_out, 
	 int      n_out_2nd, 
	 int      diag_only, 
	 int      meta, 
	 double   meta_rate, 
	 double	  penalty, 
	 double   init_alpha, 
	 Vector   norm_in_w,
	 Vector   norm_in_reg,
	 Vector   norm_in_reg_2nd,
	 Vector   norm_out,
	 Vector   norm_out_2nd,
	 char    *name, 
	 int      ID,
	 LWPR    *ini);
int
printRFStatistics(int ID, int rfID);
void
changeLWPRPenalty(int ID, double val);
void
changeLWPRInitLambda(int ID, double init_val);
void
changeLWPRFinalLambda(int ID, double final_val);
void
changeLWPRTauLambda(int ID, double tau_val);
void
changeLWPRWgen(int ID, double val);
void
changeLWPRWprune(int ID, double val);
void
changeLWPRFactorPrune(int ID, double val);
void
changeLWPRMetaLearningRate(int ID, double val);
void
changeLWPRInitD(int ID, Matrix init_D);
void
changeLWPRInitAlpha(int ID, double init_alpha);
void
changeLWPRAllowAddDim(int ID, int allow_addDim);
void
changeLWPRAllowAddRFS(int ID, int allow_add_rfs);
void
changeLWPRAllowDUpdate(int ID, int allow_d_update);
void
changeLWPRWriteRFs(int ID, int write_rfs);
void
changeLWPRMaxRFs(int ID, long max_rfs);
void
changeLWPRAddThreshold(int ID, double add_threshold);
int
checkLWPRExists(int ID);
void
changeLWPRName(int ID, char * new_name);
int 
deleteRF(int ID, int rfID);
void
changeLWPRDNoise(int ID, double val);
void
changeLWPRCNoise(int ID, double val);
void
getLWPRDistMetric(int ID, int rfID, Matrix D);
void
changeLWPRInitS2(int ID,  double init_S2);
int
getLWPRCenterInfo(int ID,int rfID,Vector c);
int
getLWPRCenterInfoJac(int ID,int rfID,Vector c, Matrix jac);
double
predictLWPROutputRF(int ID, Vector x_w, Vector x, int rfID, Vector y);
void
changeLWPRInitNProj(int ID, int init_n_proj);
void
changeLWPRInitNProj2nd(int ID, int init_n_proj);
void
changeLWPRUseOffset(int ID, int val);
void
changeLWPRUseOffset2nd(int ID, int val);
void
changeLWPRUseNN(int ID, int use_nn);
void
changeLWPRMaxNNComp(int ID, int max_nn_proc);
int
checkLWPRNN(int ID);
void
changeLWPRCompositeControl(int ID, int composite_control, 
			   int n_states, int n_controls, int linear_gx);
int 
addRFManual(int ID, double *x, double **D);
void
changeLWPRKernelFunction(int ID, int val);

double
predictLWPROutputConf2nd(int ID, double *x_w, double *x, double cutoff, 
			 int blend, double *y, int *rfID, double *conf);
double
predictLWPROutput2nd(int ID, double *x_w, double *x, double cutoff, 
		     int blend, double *y, int *rfID);
int 
addDataToLWPRReg2nd(int ID, 
		    Vector x_w, 
		    Vector x, 
		    Vector y, 
		    double w_misc,
		    int flag, 
		    int *rfID);
int 
addDataToLWPRReg2ndPredict(int ID, 
			   Vector x_w, 
			   Vector x, 
			   Vector y, 
			   double w_misc,
			   int flag, 
			   int *rfID, 
			   Vector y_pred);
int 
addDataToLWPRReg2ndPredictConf(int ID, 
			       Vector x_w, 
			       Vector x, 
			       Vector y, 
			       double w_misc,
			       int flag, 
			       int *rfID, 
			       Vector y_pred, 
			       Vector conf);


#ifdef __cplusplus
}
#endif

#endif /* __lwpr__ */

