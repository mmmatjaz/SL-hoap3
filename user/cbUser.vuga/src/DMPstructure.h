
#ifndef _DISCRETE_DMP_H_

#define _DISCRETE_DMP_H_

#include <string>
// #include <time.h>
#include <fstream>
#include <sstream>
#include <iostream>

#include "utility.h"

// #define GENERATE

#define STRING_MAX 256

class DMP_structure;

class GPR {
private:
  double **hyp_cov;
  double **hyp_mean;
  double *hyp_lik;

  double **alpha;

  int dof_;
public:
  GPR(int D, int dof, int n);
  ~GPR();

  void covSEard(double **x, int n, double **z, int m, int D, double *hyp_c, Matrix K);
  void mean(double **x, int n, int D, double *hyp_m, double *m);
  void inference(double **x, int n, int D, double **y, int dof);
  void generalize(double **x, int n, int D, int dof, double **xs, int m, double **ys);

  friend class DMP_structure;
};

class DMP_structure {
private:
  // DMP parameters
  int periodic;
  int dof, N;
  double alpha_x, alpha_z, beta_z;
  double *goal;
  double tau;
  double *c;
  double *sigma2;
  double **w;

  // Current DMP state for integration
  double x;
  double *y;
  double *z;

  // Training data for generalization
  int *NUM_data_points;
  int NUM_examples, NUM_traj, query_dim;
  double ***example_traj, ***back_traj;
  double ***queries;
  double ***training_goals;
  GPR **param;

  // Variables for filtering
  double *mInput;
  double *mPrevInput;
  double *mOriginalInput;
  double *mPrevTime;

public:
  DMP_structure(char *file_name);
  DMP_structure(int dof, int N, double alpha_x, double alpha_z, double beta_z);
  ~DMP_structure();

  void DMP_param_print(void);
  void DMP_integrate(double dt);
  bool DMP_generate(double *query, double scale, int back);
  bool DMP_estimate(int back);

  bool filterInput(double *input, int input_dim, double timestamp);
  double distance_kernel(double *query, double *goal, double scale);

  void save_DMP(char *file_name);
  bool read_examples(char *file_name, double joint_initial_configuration[], int n_dofs);
  int read_traj_file(int flag, char fname[],
                     int *column_map, int &n_cols, int &n_rows, double &sampling_freq);
  int read_DMP_string(char buffer[], int m);
  bool example_Matrix(Matrix traj, int n_rows, int n_cols);

  double get_position(int i);
  double get_velocity(int i);
  double get_acceleration(int j);
  void get_goal(double goal[]);
  int get_training_goal(double goal[], int i);
  double get_tau() { return tau; };
  int get_dof() { return dof; };
  int get_query_dim() { return query_dim;};
  int get_num_examples() { return NUM_examples; };
  int get_num_basis() { return N; };
  double get_queries(int l, int i, int j) { return queries[l][i][j]; }
  void get_average_initial(double *target);
  void get_back_conf(int i, double *conf);
  void get_weights(int j, double *output);

  void set_weights(int j, double *input);
  void set_initial_DMP_state(double *joint, double *joint_vel);
  void define_basis_functions(int n, double factor);
  void reset_timer() { x = 1.0; };
  void reset_goal(double new_goal[]);
  void set_tau(double tau_) { tau = tau_; }
  void make_linear();
};

#endif
