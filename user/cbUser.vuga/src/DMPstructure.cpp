/*!*****************************************************************************
 *******************************************************************************

 \note  DMP_structure.cpp
 \date  July 2011
 \authors: Ales Ude, Andrej Gams

 \remarks

 Discrete dynamic movement primitives and generalization using locally weighted
 regression and Gaussian process regression.

 ******************************************************************************/

#include <math.h>
#include <stddef.h>
#include <sys/time.h>
#include <string.h>

#include "DMPstructure.h"

#include "SL.h"
#include "SL_user.h"

#define pi 3.14159265358979323846

#define SQR(a) ((a)*(a))

using namespace std;

static void nearest_neighbor(double **queries, double **training_goals,
                             int NUM_examples, int query_dim, int dof,
                             double *query, double *ys);

DMP_structure::DMP_structure(char *file_name)
{
FILE *f = NULL;
int i, j, k;
char line[STRING_MAX];

  if (file_name != NULL)
    f = fopen(file_name, "r");

  goal = c = sigma2 =  NULL;
  w = NULL;

  NUM_data_points = NULL;

  y = z = NULL;

  example_traj = NULL;
  back_traj = NULL;
  queries = NULL;
  training_goals = NULL;
  param = NULL;

  mInput = mPrevInput = mOriginalInput = NULL;
  mPrevTime = NULL;

  NUM_examples = NUM_traj = query_dim = dof = N = 0;
  alpha_x = alpha_z = beta_z = tau = 0.0;

  periodic = 0;
  x = 1.0;

  if (f != NULL)
  {
    if (fgets(line, STRING_MAX, f) != NULL)
    {
    double dof_, N_, periodic_;
      k = sscanf(line, "%le %le %le\n", &dof_, &N_, &periodic_);
      dof = (int) (dof_ + 0.5);
      N = (int) (N_ + 0.5);
      periodic = (int) (periodic_ + 0.5);
      if (k != 3 || dof < 1 || N < 1)
      {
        printf("k = %d, %d %d %d\n", k, dof, N, periodic);
        goto read_error;
      }
    }
    else
    {
      printf("Empty file!\n");
      goto read_error;
    }
    printf("dof = %d, N = %d, periodic = %d\n", dof, N, periodic);
    if (fgets(line, STRING_MAX, f) == NULL)
    {
      printf("File ended too quickly!\n");
      goto read_error;
    }
    k = sscanf(line, "%le %le %le\n", &alpha_x, &alpha_z, &beta_z);
    if (fgets(line, STRING_MAX, f) == NULL)
    {
      printf("File ended too quickly!\n");
      goto read_error;
    }
    k += sscanf(line, "%le\n", &tau);
    if (k != 4 || alpha_x <= 0 || alpha_z <= 0 || beta_z <= 0 || tau <= 0)
    {
      goto read_error;
    }
    printf("alpha_x = %.2lf, alpha_z = %.2lf, beta_z = %.2lf, tau = %.3lf\n", alpha_x, alpha_z, beta_z, tau);

    goal = new double[dof];

    c = new double[N];
    sigma2 = new double[N];
    w = new double *[dof];
    for (j = 0; j < dof; j++)
      w[j] = new double[N];

    y = new double[dof];
    z = new double[dof];

    mInput = new double[3*dof];
    mPrevInput = new double[2*dof];
    mOriginalInput = new double[2*dof];
    mPrevTime = new double[2];

    k = 0;
    for (j = 0; j < dof; j++)
    {
      k += fscanf(f, "%le", goal + j);
    }
    if (k != dof)
      {
      for (j = 0; j < dof; j++)
      {
        goal[j] = 0.0f;
        printf("%le ", goal[j]);
      }
      printf("goal\n");
      goto missing_data;
    }

    k = 0;
    for (i = 0; i < N; i++)
      k += fscanf(f, "%le", c + i);
    if (k != N)
    {
      printf("DMP basis function centers c not in the file!\n");
      goto missing_data;
    }

    k = 0;
    for (i = 0; i < N; i++)
      k += fscanf(f, "%le", sigma2 + i);
    if (k != N)
    {
      printf("DMP basis function variances sigma2 not in the file!\n");
      goto missing_data;
    }

    printf("Last sigma2: %le.\n", sigma2[N-1]);

    k = 0;
    for (j = 0; j < dof; j++)
    {
      for (i = 0; i < N; i++)
        k += fscanf(f, "%le", &(w[j][i]));
    }
    if (k != dof*N)
    {
      printf("DMP basis function weights w not in the file: %d %d\n", k, dof*N);
      goto missing_data;
    }

    printf("Last w: %le.\n", w[dof-1][N-1]);

    fclose(f);

    return;
  }

  read_error:

  printf("File %s not read correctly or data wrong!\n", file_name);

  if (f != NULL)
    fclose(f);

  dof = 0;
  N = 0;
  alpha_x = alpha_z = beta_z = 0.0f;
  tau = 1.0f;

  return;

  missing_data:

  printf("Some parameters (c, sigma^2, w, ... and maybe g) initialized to default values!\n");

  fclose(f);

  define_basis_functions(N, 0.5);
}

DMP_structure::DMP_structure(int dof_, int N_, double alpha_x_, double alpha_z_, double beta_z_)
{
int i, j, k;
char line[STRING_MAX];

  goal = c = sigma2 =  NULL;
  w = NULL;

  NUM_data_points = NULL;

  y = z = NULL;

  example_traj = NULL;
  back_traj = NULL;
  queries = NULL;
  training_goals = NULL;
  param = NULL;

  mInput = mPrevInput = mOriginalInput = NULL;
  mPrevTime = NULL;

  NUM_examples = NUM_traj = query_dim = 0;

  periodic = 0;
  x = 1.0;
  dof = dof_; N = N_;

  printf("dof = %d, N = %d\n", dof, N);

  alpha_x = alpha_x_; alpha_z = alpha_z_; beta_z = beta_z_;

  printf("alpha_x = %.2lf, alpha_z = %.2lf, beta_z = %.2lf\n", alpha_x, alpha_z, beta_z);

  tau = 1.0;

  goal = new double[dof];

  c = new double[N];
  sigma2 = new double[N];
  w = new double *[dof];
  for (j = 0; j < dof; j++)
    w[j] = new double[N];

  y = new double[dof];
  z = new double[dof];

  mInput = new double[3*dof];
  mPrevInput = new double[2*dof];
  mOriginalInput = new double[2*dof];
  mPrevTime = new double[2];

  define_basis_functions(N, 0.5);
}

DMP_structure::~DMP_structure()
{
int num;
  if (goal != NULL)
    delete [] goal;
  if (c != NULL)
    delete [] c;
  if (sigma2 != NULL)
    delete [] sigma2;
  if (w != NULL)
  {
    for (int i = 0; i < dof; i++)
      delete [] w[i];
    delete [] w;
  }

  if (y != NULL)
    delete [] y;
  if (z != NULL)
    delete [] z;

  if (periodic == 2)
    num = 2;
  else
    num = 1;

  if (example_traj != NULL)
  {
    for (int i = 0; i < NUM_traj; i++)
    {
      for (int j = 0; j < NUM_data_points[i]; j++)
        delete [] example_traj[i][j];
      delete [] example_traj[i];
    }
    delete [] example_traj;
  }

  if (back_traj != NULL)
  {
    for (int i = 0; i < NUM_traj; i++)
    {
      for (int j = 0; j < NUM_data_points[i]; j++)
        delete [] back_traj[i][j];
      delete [] back_traj[i];
    }
    delete [] back_traj;
  }

  if (NUM_data_points != NULL)
    delete [] NUM_data_points;

  if (queries != NULL)
  {
    for (int l = 0; l < num; l++)
    {
	  for (int i = 0; i < NUM_examples; i++)
        delete [] queries[l][i];
      delete [] queries[l];
    }
    delete [] queries;
  }

  if (training_goals != NULL)
  {
    for (int l = 0; l < num; l++)
    {
      for (int i = 0; i < NUM_examples; i++)
        delete [] training_goals[l][i];
      delete [] training_goals[l];
    }
    delete [] training_goals;
  }

  if (param != NULL)
  {
    for (int l = 0; l < num; l++)
      delete param[l];
	  delete [] param;
  }

  if (mInput != NULL)
    delete [] mInput;
  if (mPrevInput != NULL)
    delete [] mPrevInput;
  if (mOriginalInput != NULL)
    delete [] mOriginalInput;
  if (mPrevTime != NULL)
    delete [] mPrevTime;
}

bool DMP_structure::example_Matrix(Matrix traj, int n_rows, int n_cols)
{
int i, j, l;

  if (example_traj != NULL)
  {
    for (int i = 0; i < NUM_traj; i++)
    {
      for (int j = 0; j < NUM_data_points[i]; j++)
        delete [] example_traj[i][j];
      delete [] example_traj[i];
    }
    delete [] example_traj;
    example_traj = NULL;
  }
  
  if (NUM_data_points != NULL)
  {
    delete [] NUM_data_points;
    NUM_data_points = NULL;
  }

  if (n_cols != 2*dof+1)
  {
    printf("Trajectory data not consistent with DMP parameters (%d %d)!\n", dof, n_cols);
    return false;
  }

  NUM_traj = 1;
  example_traj = new double**[1];
  example_traj[0] = new double*[n_rows];
  for (j = 0; j < n_rows; j++)
    example_traj[0][j] = new double[3*dof+1];

  NUM_data_points = new int[NUM_traj];
  NUM_data_points[0] = n_rows;

  for (j = 0; j < NUM_data_points[0]; j++)
  {
    for (l = 0; l <= dof; l++)
      example_traj[0][j][l] = traj[j+1][l+1];
    example_traj[0][j][0] = example_traj[0][j][0] - traj[1][1];
  }

  // Estimate velocities and accelerations
  for (i = 0; i < NUM_traj; i++)
  {
    for (l = 1; l <= dof; l++)
    {
    // Boundary condition: standing still
      example_traj[i][0][dof+l] = 0;
      example_traj[i][0][2*dof+l] = 0;
      example_traj[i][NUM_data_points[i]-1][dof+l] = 0;
      example_traj[i][NUM_data_points[i]-1][2*dof+l] = 0;
   
      // Central differences
      for (j = 1; j < NUM_data_points[i] - 1; j++)
      {
        example_traj[i][j][dof+l] =
         (example_traj[i][j+1][l] - example_traj[i][j-1][l]) /
         (example_traj[i][j+1][0] - example_traj[i][j-1][0]);
      }
      for (j = 1; j < NUM_data_points[i] - 1; j++)
      {
        example_traj[i][j][2*dof+l] =
          (example_traj[i][j+1][dof+l] - example_traj[i][j-1][dof+l]) /
          (example_traj[i][j+1][0] - example_traj[i][j-1][0]);
      }
    }
  }
  
  return true;
}

bool DMP_structure::read_examples(char *file_name, double joint_initial_configuration[], int n_dofs)
{
FILE *f = NULL;
int i, j, k, l, num;
double NUM_examples_, i_, query_dim_;

  if (periodic == 2)
    num = 2;
  else
    num = 1;

  if (example_traj != NULL)
  {
    for (int i = 0; i < NUM_traj; i++)
    {
      for (int j = 0; j < NUM_data_points[i]; j++)
        delete [] example_traj[i][j];
      delete [] example_traj[i];
    }
    delete [] example_traj;
    example_traj = NULL;
  }

  if (back_traj != NULL)
  {
    for (int i = 0; i < NUM_traj; i++)
    {
      for (int j = 0; j < NUM_data_points[i]; j++)
        delete [] back_traj[i][j];
      delete [] back_traj[i];
    }
    delete [] back_traj;
    back_traj = NULL;
  }

  if (NUM_data_points != NULL)
  {
	  delete [] NUM_data_points;
	  NUM_data_points = NULL;
  }

  if (queries != NULL)
  {
    for (l = 0; l < num; l++)
    {
      for (i = 0; i < NUM_examples; i++)
        delete [] queries[l][i];
      delete [] queries[l];
    }
    delete [] queries;
    queries = NULL;
  }

  if (training_goals != NULL)
  {
    for (l = 0; l < num; l++)
    {
      for (i = 0; i < NUM_examples; i++)
        delete [] training_goals[l][i];
      delete [] training_goals[l];
    }
    delete [] training_goals;
    training_goals = NULL;
  }

  if (param != NULL)
  {
    for (l = 0; l < num; l++)
	  delete param[l];
    delete [] param;
	  param = NULL;
  }

  if (file_name != NULL)
    f = fopen(file_name, "r");
  
  if (f == NULL)
    goto read_error;

  k = fscanf(f, "%le %le %le\n", &NUM_examples_, &i_, &query_dim_);
  NUM_examples = (int) (NUM_examples_ + 0.5);
  i = (int) (i_ + 0.5);
  query_dim = (int) (query_dim_ + 0.5);

  if (k != 3 || NUM_examples <= 0 || i != dof || query_dim <= 0)
  {
    printf("k = %d, NUM_examples = %d, %d, %d\n", k, NUM_examples, i, query_dim);
    goto read_error;
  }

  if (periodic == 2)
    NUM_traj = 1;
  else
    NUM_traj = NUM_examples;

  NUM_data_points = new int[NUM_traj];
  k = 0;
  for (i = 0; i < NUM_traj; i++)
  {
    k += fscanf(f, "%le", &NUM_examples_);
    NUM_data_points[i] = (int) (NUM_examples_ + 0.5);
  }
  if (k != NUM_traj)
  {
    printf("Error reading the number of data points on trajectories!\n");
    goto read_error;
  }

  k = 0;
  for (i = 1; i <= n_dofs; i++)
	k += fscanf(f, "%le ", &(joint_initial_configuration[i]));
  if (k != n_dofs)
  {
    printf("Error reading the initial joint configuration!\n");
    goto read_error;
  }
  printf("%d, %le\n", n_dofs, joint_initial_configuration[n_dofs]);

  example_traj = new double**[NUM_traj];
  for (i = 0; i < NUM_traj; i++)
  {
    example_traj[i] = new double*[NUM_data_points[i]];
    for (j = 0; j < NUM_data_points[i]; j++)
      example_traj[i][j] = new double[3*dof+1];
  }

  for (i = 0; i < NUM_traj; i++)
  {
    for (j = 0; j < NUM_data_points[i]; j++)
    {
      k = 0;
      for (l = 0; l <= 3*dof; l++)
        k += fscanf(f, "%le", &(example_traj[i][j][l]));
      if (k != 3*dof+1)
      {
        printf("Error reading trajectory data points: %d %d %d %d!\n", i, j, k, dof);
        l = 0;
        for (k = 0; k < NUM_traj; k++)
          l += NUM_data_points[k];
        printf("All trajectory points: %d\n", l);
        goto read_error;
      }
      if (j > 0)
        example_traj[i][j][0] = example_traj[i][j][0] - example_traj[i][0][0];
    }
    example_traj[i][0][0] = 0.0;
  }

  // Estimate velocities and accelerations
  /* for (i = 0; i < NUM_traj; i++)
  {
    for (l = 1; l <= dof; l++)
    {
      // Boundary condition: standing still
      example_traj[i][0][dof+l] = 0;
      example_traj[i][0][2*dof+l] = 0;
      example_traj[i][NUM_data_points[i]-1][dof+l] = 0;
      example_traj[i][NUM_data_points[i]-1][2*dof+l] = 0;

      // Central differences
      for (j = 1; j < NUM_data_points[i] - 1; j++)
      {
        example_traj[i][j][dof+l] =
          (example_traj[i][j+1][l] - example_traj[i][j-1][l]) /
          (example_traj[i][j+1][0] - example_traj[i][j-1][0]);
      }
      for (j = 1; j < NUM_data_points[i] - 1; j++)
      {
        example_traj[i][j][2*dof+l] =
          (example_traj[i][j+1][dof+l] - example_traj[i][j-1][dof+l]) /
          (example_traj[i][j+1][0] - example_traj[i][j-1][0]);
      }
    }
  } */

  back_traj = new double**[NUM_traj];
  for (i = 0; i < NUM_traj; i++)
  {
    back_traj[i] = new double*[NUM_data_points[i]];
    for (j = 0; j < NUM_data_points[i]; j++)
      back_traj[i][j] = new double[3*dof+1];
  }
  for (i = 0; i < NUM_traj; i++)
  {
    for (l = 0; l <= dof; l++)
      for (j = 0; j < NUM_data_points[i]; j++)
  	    back_traj[i][j][l] = example_traj[i][NUM_data_points[i]-1-j][l];
    for (j = 1; j < NUM_data_points[i]; j++)
      back_traj[i][j][0] = back_traj[i][0][0] - back_traj[i][j][0];
    back_traj[i][0][0] = 0.0;
    for (l = dof+1; l <= 3*dof; l++)
      for (j = 0; j < NUM_data_points[i]; j++)
        back_traj[i][j][l] = -example_traj[i][NUM_data_points[i]-1-j][l];
  }

  if (periodic == 2)
    dof--;

  queries = new double**[num];
  param = new GPR*[num];
  training_goals = new double**[num];

  for (l = 0; l < num; l++)
  {
    queries[l] = new double*[NUM_examples];
    for (i = 0; i < NUM_examples; i++)
      queries[l][i] = new double[query_dim];
    for (i = 0; i < NUM_examples; i++)
    {
      k = 0;
      for (j = 0; j < query_dim; j++)
      {
        k += fscanf(f, "%le", &(queries[l][i][j]));
      }
      if (k != query_dim)
      {
        printf("Error reading query points!\n");
        goto read_error;
      }
    }

    param[l] = new GPR(query_dim, dof, NUM_examples);

    for (i = 0; i <= dof; i++)
    {
      k = 0;
      for (j = 0; j <= query_dim; j++)
      {
        k += fscanf(f, "%le", &(param[l]->hyp_mean[i][j]));
      }
      if (k != query_dim + 1)
      {
        printf("Error reading GPR means!\n");
        goto read_error;
      }
    }

    for (i = 0; i <= dof; i++)
    {
      k = 0;
      for (j = 0; j <= query_dim; j++)
      {
        k += fscanf(f, "%le", &(param[l]->hyp_cov[i][j]));
      }
      if (k != query_dim + 1)
      {
        printf("Error reading GPR variances!\n");
        goto read_error;
      }
    }

    for (i = 0; i <= dof; i++)
    {
      k = fscanf(f, "%le", &(param[l]->hyp_lik[i]));
      if (k != 1)
      {
        printf("Error reading GPR likelihoods!\n");
        goto read_error;
      }
    }

    training_goals[l] = new double *[NUM_examples];
    for (i = 0; i < NUM_examples; i++)
    {
      training_goals[l][i] = new double[dof+1];
      if (periodic != 2)
      {
        for (j = 0; j <= dof; j++)
          training_goals[l][i][j] = example_traj[i][NUM_data_points[i]-1][j];
      }
      else
      {
        k = 0;
        for (j = 0; j <= dof; j++)
          k += fscanf(f, "%le", &(training_goals[l][i][j]));
        if (k != dof + 1)
        {
          printf("Error reading example configurations %d %d!\n", l, i);
          getchar(); goto read_error;
        }
      }
    }
    param[l]->inference(queries[l], NUM_examples, query_dim, training_goals[l],
                        dof);
  }

  if (f != NULL)
    fclose(f);

  if (periodic == 2)
    dof++;

  return true;

  read_error:

  if (example_traj != NULL)
  {
    for (i = 0; i < NUM_traj; i++)
    {
      for (j = 0; j < NUM_data_points[i]; j++)
        delete [] example_traj[i][j];
      delete [] example_traj[i];
    }
    delete [] example_traj;
    example_traj = NULL;
  }

  if (back_traj != NULL)
  {
    for (i = 0; i < NUM_traj; i++)
    {
      for (j = 0; j < NUM_data_points[i]; j++)
        delete [] back_traj[i][j];
      delete [] back_traj[i];
    }
    delete [] back_traj;
    back_traj = NULL;
  }

  if (NUM_data_points != NULL)
  {
    delete [] NUM_data_points;
    NUM_data_points = NULL;
  }

  if (queries != NULL)
  {
    for (l = 0; l < num; l++)
    {
      for (i = 0; i < NUM_examples; i++)
          delete [] queries[l][i];
        delete [] queries[l];
    }
    delete [] queries; queries = NULL;
  }

  if (param != NULL)
  {
    for (l = 0; l < num; l++)
      delete param[l];
    delete [] param; param = NULL;
  }

  if (training_goals != NULL)
  {
    for (l = 0; l < num; l++)
    {
      for (i = 0; i < NUM_examples; i++)
        delete [] training_goals[l][i];
      delete [] training_goals[l];
    }
    delete [] training_goals; training_goals = NULL;
  }

  NUM_examples = NUM_traj = query_dim = 0;

  if (f != NULL)
    fclose(f);

  printf("Error when reading example trajectories!\n\n");

  return false;
}

void DMP_structure::get_back_conf(int i, double *conf)
{
  for (int j = 1; j <= dof; j++)
	conf[j-1] = back_traj[i][0][j];
}

void DMP_structure::DMP_param_print(void)
{
  int i, j;

  printf("\ndof = %d, N = %d, periodic = %d\n", dof, N, periodic);
  printf("alpha_x = %.2lf, alpha_z = %.2lf, beta_z = %.2lf\n", alpha_x, alpha_z, beta_z);
  printf("tau = %.3lf\n", tau);

  printf("goal = (");
  for (j = 0; j < dof-1; j++)
  {
    printf("%.2lf, ", goal[j]);
  }
  printf("%.2lf)\n\n", goal[dof-1]);

  for (i = 0; i < N; i++) 
  {
    printf("%le ", c[i]);
  }
  printf("c\n");

  for (i = 0; i < N; i++) 
  {
    printf("%le ", sigma2[i]);
  }
  printf("sigma2\n");

  for (i = 0; i < N; i++)
  {
    for (j = 0; j < dof; j++)
    {
      printf("%13.6le ", w[j][i]);
    }
    printf("\n");
  }
}

static const double epsilon = 1.0e-16;

void DMP_structure::DMP_integrate(double dt)
{
int i, j, k;
double fx, sum_psi, psi, a;
double dx, dy, dz;

const int servo_rate = SERVO_BASE_RATE / TASK_SERVO_RATIO;
double desired_dt = 1.0 / servo_rate;
int steps;
  
  steps = (int) (dt / desired_dt + 0.5);
  
  dt = dt / steps;

  // Integrate DMP variables using Euler's method
  for (k = 0; k < steps; k++)
  {
    for (j = 0; j < dof; j++)
    {
      fx = sum_psi = 0.0;
      for (i = 0; i < N; i++)
      {
        psi = exp(-0.5 * (SQR(x - c[i]) / sigma2[i]));
        fx += (w[j][i] * psi);
        sum_psi += psi;
      }

      if (x < c[N-1] || fabs(sum_psi) < epsilon)
        fx = 0;
      else
        fx = (fx * x) / sum_psi;

      a = alpha_z * (beta_z * (goal[j] - y[j]) - z[j]) + fx;

      // temporal scaling
      dz = a / tau;
      dy = z[j] / tau;

      // Euler integration: new positions (y) and scaled velocities (z)
      z[j] += dz*dt;
      y[j] += dy*dt;
    }

    // phase integration
    dx = -alpha_x * x / tau;
    x += dx*dt;
  }
}

void DMP_structure::set_initial_DMP_state(double *joints, double *joint_vel)
{
  for (int j = 0; j < dof; j++)
  {
    if (joint_vel != NULL)
      z[j] = joint_vel[j];
    else
      z[j] = 0;

    y[j] = joints[j];    
  }
  x = 1;
}

void DMP_structure::set_weights(int j, double *input)	
{
  for (int i = 0; i < N; i++)
	  w[j][i] = input[i];
}

void DMP_structure::get_weights(int j, double *output)
{
  for (int i = 0; i < N; i++)
    output[i] = w[j][i];
}

double DMP_structure::get_position(int j)
{
  return y[j];
}

double DMP_structure::get_velocity(int j)
{
  return (z[j] / tau);
}

double DMP_structure::get_acceleration(int j)
{
double fx = 0.0, sum_psi = 0.0, psi;
  for (int i = 0; i < N; i++)
  {
    psi = exp(-0.5 * (SQR(x - c[i]) / sigma2[i]));
    fx += (w[j][i] * psi);
    sum_psi += psi;
  }
  
  if (x < c[N-1] || fabs(sum_psi) < epsilon)
    fx = 0;
  else
    fx = (fx * x) / sum_psi;
  
  return ((alpha_z * (beta_z * (goal[j] - y[j]) - z[j]) + fx) / SQR(tau));
}

void DMP_structure::get_goal(double goal_[])
{
  for (int i = 0; i < dof; i++)
    goal_[i] = goal[i];
}

void DMP_structure::save_DMP(char *file_name)
{
FILE *f = NULL;
int i, j;

  if (file_name != NULL)
    f = fopen(file_name, "w");

  if (f != NULL)
  {
    fprintf (f, "%d %d %d\n", dof, N, periodic);

    fprintf(f, "%le %le %le\n", alpha_x, alpha_z, beta_z);

    fprintf(f, "%le\n", tau);

    for (j = 0; j < dof; j++)
      fprintf(f, "%le ", goal[j]);
    fprintf(f, "\n");

    for (i = 0; i < N; i++)
      fprintf(f, "%le ",c[i]);
    fprintf(f, "\n");

    for (i = 0; i < N; i++)
      fprintf(f, "%le ",sigma2[i]);
    fprintf(f, "\n");

    for (j = 0; j < dof; j++)
    {
      for (i=0; i < N; i++)
        fprintf(f, "%le ", w[j][i]);
      fprintf(f, "\n");
    }
    fclose(f);
  }
}

bool DMP_structure::DMP_estimate(int back)
{
int i, j, k, n;
double x, psi_sum, *psi, fac;
const double epsilon = 1.0e-16;
double ***traj_data;

Matrix A, A1, V, f, w_t;
Vector s;
double s_min, s_max;

struct timeval start, end;
long mtime, seconds, useconds;

  printf("DMP estimation ... "); fflush(stdout);

  gettimeofday(&start, NULL);

  if (!back)
    traj_data = example_traj;
  else
	traj_data = back_traj;

  psi = new double[N];

  // n is equal to the number of trajectory points that will be considered
  n = NUM_data_points[0];

  A = my_matrix(1, n, 1, N);
  V = my_matrix(1, N, 1, N);
  f = my_matrix(1, dof, 1, n);
  w_t = my_matrix(1, dof, 1, N);
  s = my_vector(1, N);

  tau = traj_data[0][n-1][0];
  for (k = 1; k <= dof; k++)
    goal[k-1] = traj_data[0][n-1][k];

  for (j = 0; j < n; j++)
  {
    x = exp(-alpha_x / tau * traj_data[0][j][0]);

    psi_sum = 0;
    for (k = 0; k < N; k++)
    {
      psi[k] = exp(-0.5 * (SQR(x - c[k]) / sigma2[k]));
      psi_sum += psi[k];
    }
    fac = x / psi_sum;

    for (k = 0; k < N; k++)
    {
      A[j+1][k+1] = fac * psi[k];
      /* if (A[j+1][k+1] < epsilon)
        A[j+1][k+1] = 0; */
    }
  }
           
  for (j = 0; j < n; j++)
    for (k = 1; k <= dof; k++)
      f[k][j+1] = SQR(tau) * traj_data[0][j][2*dof+k] -
                  alpha_z * (beta_z * (goal[k-1] - traj_data[0][j][k]) -
                  tau * traj_data[0][j][dof+k]);

  my_svdcmp(A, n, N, s, V);

  s_max = 0.0; i = 0;
  for (j = 1; j <= N; j++)
    if (s[j] > s_max)
      s_max = s[j];
  s_min = s_max*1.0e-16;
  for (j = 1; j <= N; j++)
    if (s[j] < s_min)
      s[j] = 0.0;
    else
      i++;

  for (k = 1; k <= dof; k++)
    my_svbksb(A, s, V, n, N, f[k], w_t[k]);

  gettimeofday(&end, NULL);
  seconds  = end.tv_sec  - start.tv_sec;
  useconds = end.tv_usec - start.tv_usec;
  mtime = ((seconds) * 1000 + useconds/1000.0) + 0.5;
  printf("finished (elapsed time = %ld milliseconds).\n", mtime);
  printf("tau: %.3lf\n", tau);
  if (i < N)
    printf("\n\nRank not full: %d!\n\n", i);

  for (i = 0; i < N; i++)
    for (k = 0; k < dof; k++)
      w[k][i] = w_t[k+1][i+1];

  delete [] psi;
  my_free_matrix(A, 1, n, 1, N);
  my_free_matrix(V, 1, N, 1, N);
  my_free_matrix(f, 1, n, 1, dof);
  my_free_matrix(w_t, 1, dof, 1, N);
  my_free_vector(s, 1, N);

  return (n > 0);
}

int DMP_structure::get_training_goal(double goal[], int i)
{
  if (i >= 0 && i < NUM_examples)
  {
    for (int j = 0; j < dof; j++)
      goal[j] = training_goals[0][i][j];
    return TRUE;
  }
  else
    return FALSE;
}

void DMP_structure::reset_goal(double goal_[])
{
  for (int i = 0; i < dof; i++)
  {
	goal[i] = goal_[i];
  }
}

void DMP_structure::make_linear()
{
  for (int i = 0; i < dof; i++)
    for (int j = 0; j < N; j++)
      w[i][j] = 0.0;
}

bool DMP_structure::DMP_generate(double *query, double scale, int back)
{
int i, j, k, n;
double *ys;
double *weights, x, psi_sum, *psi, fac;
double ***traj_data;

Matrix A, A1, V, f, w_t;
Vector s;
double s_min, s_max;
double dist, dist_min;

struct timeval start, end;
long mtime, seconds, useconds;

  ys = new double[dof+1];

  if (back < 2)
  {
    printf("Generalizing ... "); fflush(stdout);
    gettimeofday(&start, NULL);
  }

  switch (back)
  {
  case 0: case 2:
	// Gaussian process regression for goal and timing
    param[0]->generalize(queries[0], NUM_examples, query_dim, dof, &query, 1, &ys);
    for (i = 1; i <= dof; i++)
      goal[i-1] = ys[i];
    tau = ys[0];
    break;
  case 1:
    // Average initial position for goal
    get_average_initial(goal);
    // Gaussian process regression for timing
    param[0]->generalize(queries[0], NUM_examples, query_dim, 1, &query, 1, &ys);
    tau = ys[0];
    break;
  case 3:
    // Gaussian process regression for goal on the table
    param[0]->generalize(queries[0], NUM_examples, query_dim, dof - 1, &query, 1, &ys);
    /* nearest_neighbor(queries[0], training_goals[0], NUM_examples, query_dim,
                     dof, query, ys); */
    for (i = 0; i < dof; i++)
      goal[i] = ys[i];
    tau = 1.0f;
    break;
  case 4:
    // Gaussian process regression for goal above the table
    param[1]->generalize(queries[1], NUM_examples, query_dim, dof - 1, &query, 1, &ys);
    /* nearest_neighbor(queries[1], training_goals[1], NUM_examples, query_dim,
                     dof, query, ys); */
    for (i = 0; i < dof; i++)
      goal[i] = ys[i];
    tau = 1.0f;
    break;
  default:
    printf("Case %d has not been implemented yet, now exiting ... \n"
           "Press <RETURN> to continue --> ", back); fflush(stdout);
    getchar(); exit(1);
  }

  if (back == 2 || back == 3 || back == 4)
  {
    for (i = 0; i < N; i++)
      for (k = 0; k < dof; k++)
        w[k][i] = 0.0;

    delete [] ys;
    return true;
  }

  if (!back)
    traj_data = example_traj;
  else
    traj_data = back_traj;

  psi = new double[N];
  weights = new double[NUM_traj];

  // n is equal to the number of trajectory points that will be considered
  n = 0;
  for (i = 0; i < NUM_traj; i++)
  {
    weights[i] = distance_kernel(query, queries[0][i], scale);
    if (weights[i] > 0)
      n += NUM_data_points[i];
  }
  A = my_matrix(1, n, 1, N);
  V = my_matrix(1, N, 1, N);
  f = my_matrix(1, dof, 1, n);
  w_t = my_matrix(1, dof, 1, N);
  s = my_vector(1, N);

  n = 1;
  for (i = 0; i < NUM_traj; i++)
  {
    if (weights[i] > 0)
    {
      // printf("weights(%d) %le, NUM_data_points(%d): %d!\n", i+1, weights[i], i+1, NUM_data_points[i]);

      for (j = 0; j < NUM_data_points[i]; j++)
      {
    	x = exp(-alpha_x / traj_data[i][NUM_data_points[i]-1][0] * traj_data[i][j][0]);

        psi_sum = 0;
        for (k = 0; k < N; k++)
        {
          psi[k] = exp(-0.5 * (SQR(x - c[k]) / sigma2[k]));
          psi_sum += psi[k];
        }
        fac = weights[i] * x / psi_sum;

        for (k = 0; k < N; k++)
          A[n+j][k+1] = fac * psi[k];
      }

      for (j = 0; j < NUM_data_points[i]; j++)
        for (k = 1; k <= dof; k++)
          f[k][n+j] = weights[i] * (SQR(tau) * traj_data[i][j][2*dof+k] -
                                    alpha_z * (beta_z * (goal[k-1] - traj_data[i][j][k]) -
                                               tau * traj_data[i][j][dof+k]));

      n += NUM_data_points[i];
    }
  }
  n--;

  my_svdcmp(A, n, N, s, V);

  s_max = 0.0; i = 0;
  for (j = 1; j <= N; j++)
    if (s[j] > s_max)
      s_max = s[j];
  s_min = s_max*1.0e-8;
  for (j = 1; j <= N; j++)
    if (s[j] < s_min)
      s[j] = 0.0;
    else
      i++;

  for (k = 1; k <= dof; k++)
    my_svbksb(A, s, V, n, N, f[k], w_t[k]);

  gettimeofday(&end, NULL);
  seconds  = end.tv_sec  - start.tv_sec;
  useconds = end.tv_usec - start.tv_usec;
  mtime = ((seconds) * 1000 + useconds/1000.0) + 0.5;
  if (i < N)
	printf("Rank not full: %d!\n", i);
  printf("DMP parameters computed (elapsed time = %ld milliseconds).\n", mtime);

  tau /= 2;

  for (i = 0; i < N; i++)
    for (k = 0; k < dof; k++)
      w[k][i] = w_t[k+1][i+1];

  delete [] ys;
  delete [] psi;
  delete [] weights;
  my_free_matrix(A, 1, n, 1, N);
  my_free_matrix(V, 1, N, 1, N);
  my_free_matrix(f, 1, n, 1, dof);
  my_free_matrix(w_t, 1, dof, 1, N);
  my_free_vector(s, 1, N);
  
  return (n > 0);
}

double DMP_structure::distance_kernel(double *query, double *goal, double scale)
{
int j;
double d;
  d = 0;
  for (j = 0; j < query_dim; j++)
  {
    d += SQR(query[j] - goal[j]);
  }
  d = sqrt(d) / scale;

  if (d < 1)
    d = (1 - d*d*d)*(1 - d*d*d)*(1 - d*d*d);
  else
    d = 0;
  return d;
}

void DMP_structure::get_average_initial(double *target)
{
int i, j, tmp;
  for (j = 0; j < dof; j++)
    target[j] = 0.0;
  for (i = 0; i < NUM_traj; i++)
  {
    for (j = 0; j < dof; j++)
      target[j] += example_traj[i][0][j+1];
  }
  for (j = 0; j < dof; j++)
	target[j] /= NUM_traj;
}

void DMP_structure::define_basis_functions(int n, double factor)
{
int i, j;

  if (n != N)
  {
    N = n;
    if (c != NULL)
      delete [] c;
    c = new double[N];
    if (sigma2 != NULL)
      delete [] sigma2;
    sigma2 = new double[N];
    if (w != NULL)
    {
      for (j = 0; j < dof; j++)
    	delete [] w[j];
      delete [] w;
    }
    w = new double *[dof];
    for (j = 0; j < dof; j++)
      w[j] = new double[N];
  }

  for (i = 0; i < N; i++)
    c[i] = exp(-alpha_x*i/(N-1.0));
  for (i = 0; i < N - 1; i++)
    sigma2[i] = SQR((c[i+1]-c[i])*factor);
  sigma2[N-1] = sigma2[N-2];

  for (j = 0; j < dof; j++)
    for (i = 0; i < N; i++)
      w[j][i] = 0.0f;
}

/*
 * Implementation of Butterworth filter.
 */
bool DMP_structure::filterInput(double *input, int input_dim, double timestamp)
{
double *PreviousVel = new double[input_dim];
bool valid;
// Coefficients for Butterworth filter as returned by Matlab call [b, a] = butter(2, 0.1)
double a2 = -1.561018075800718, a3 = 0.641351538057563,
       b1 = 0.020083365564211, b2 = 0.040166731128423, b3 =  0.020083365564211;
int i;

  // If no smoothing
  // a2 = a3 = b2 = b3 = 0.0; b1 = 1.0;

  // Apply Butterworth filter
  for (i = 0; i < input_dim; i++)
    mInput[i]= b1*input[i] + b2*mOriginalInput[i] + b3*mOriginalInput[i+input_dim] -
               a2*mPrevInput[i] - a3*mPrevInput[i+input_dim];

  // Calculate velocities and accelerations for input data
  if (mPrevTime[0] >= 0.0 && mPrevTime[1] >= 0)
  {
    for (i = 0; i < input_dim; i++)
      mInput[i+input_dim] = (mInput[i] - mPrevInput[i]) / (timestamp - mPrevTime[0]);

    for (i = 0; i < input_dim; i++)
      PreviousVel[i] = (mPrevInput[i] - mPrevInput[i+dof]) / (mPrevTime[0] - mPrevTime[1]);
    for (i = 0; i < input_dim; i++)
      mInput[i+2*input_dim] = (mInput[i+input_dim] - PreviousVel[i]) / (timestamp-mPrevTime[0]);

    valid = true;
  }
  else
  {
    // At least two previous measurements are needed to apply the Butterworh filter.
    // Reset data (needed for on-line periodic DMP estimation)
    if (mPrevTime[0] < 0.0 && mPrevTime[1] < 0.0)
      for (int j = 0; j < dof; j++)
        for (int i = 0; i < N; i++)
          w[j][i] = 0;
    valid = false;
  }

  // Save previous data
  for (i = 0; i < input_dim; i++)
  {
    mPrevInput[i+input_dim] = mPrevInput[i];
    mPrevInput[i] = mInput[i];
    mOriginalInput[i+input_dim] = mOriginalInput[i];
    mOriginalInput[i] = input[i];
  }
  mPrevTime[1] = mPrevTime[0];
  mPrevTime[0] = timestamp;

  delete [] PreviousVel;

  return valid;
}

/*!*****************************************************************************
 *******************************************************************************
 \note  covSEard
 \date  July 2011

 \remarks

 Squared Exponential covariance function with Automatic Relevance Detemination
  (ARD) distance measure. The covariance function is parameterized as:

  k(x^p,x^q) = sf2 * exp(-(x^p - x^q)'*inv(P)*(x^p - x^q)/2)

 where the P matrix is diagonal with ARD parameters ell_1^2,...,ell_D^2, where
 ell_i is the characteristic length scale and sf2 is the signal variance.

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 \param[in]     hyp : The hyperparameters are:
                      hyp = [ log(ell_1)
                              log(ell_2)
                              ...
                              log(ell_D)
                              log(sqrt(sf2)) ]
                  D : dimension of the input space.
                  x : training inputs
                  n : number of training vectors
                  z : test inputs
                  m : number of input vectors

\param[out]       K : Covariance matrix for Gaussian process regression
 ******************************************************************************/
void GPR::covSEard(double **x, int n, double **z, int m, int D, double *hyp_c, Matrix K)
{
double *ell, sf2;
int i, j, k;

  ell = new double[D];
  for (i = 0; i < D; i++)                              // characteristic length scale
	ell[i] = exp(hyp_c[i]);
  sf2 = exp(2*hyp_c[D]);                          // signal variance

  for (i = 0; i < n; i++)
	if (m == 0)
	{
      for (j = i; j < n; j++)
	  {
        K[i+1][j+1] = 0;
        for (k = 0; k < D; k++)
    	  K[i+1][j+1] += SQR((x[i][k] - x[j][k]) / ell[k]);
        K[i+1][j+1] = sf2*exp(-K[i+1][j+1]/2);
	  }
	}
	else
	{
	  for (j = 0; j < m; j++)
	  {
        K[j+1][i+1] = 0;
        for (k = 0; k < D; k++)
    	  K[j+1][i+1] += SQR((x[i][k] - z[j][k]) / ell[k]);
        K[j+1][i+1] = sf2*exp(-K[j+1][i+1]/2);
	  }
	}

  if (m == 0)
    for (i = 0; i < n; i++)
      for (j = 0; j < i; j++)
    	K[i+1][j+1] = K[j+1][i+1];

  delete [] ell;
}

void GPR::mean(double **x, int n, int D, double *hyp_m, double *m)
{
int i, j;
  for (i = 0; i < n; i++)
  {
	m[i] = hyp_m[D];
	for (j = 0; j < D; j++)
      m[i] += x[i][j]*hyp_m[j];
  }
}

void GPR::inference(double **x, int n, int D, double **y, int dof)
{
Matrix K, V;
Vector s, b, z;
double *m, s_max, s_min, sn2;

int i, j, k;

  V = my_matrix(1, n, 1, n);
  K = my_matrix(1, n, 1, n);
  s = my_vector(1, n);
  b = my_vector(1, n);
  z = my_vector(1, n);

  m = new double[n];

  for (i = 0; i <= dof; i++)
  {
    covSEard(x, n, NULL, 0, D, hyp_cov[i], K);
    mean(x, n, D, hyp_mean[i], m);
    sn2 = exp(2*hyp_lik[i]);

    for (k = 1; k <= n; k++)
    {
	  for (j = 1; j <= n; j++)
        K[k][j] /= sn2;
	  K[k][k] += 1.0;
    }

    my_svdcmp(K, n, n, s, V);
    s_max = 0.0; k = 0;
    for (j = 1; j <= n; j++)
      if (s[j] > s_max)
        s_max = s[j];
    s_min = s_max*1.0e-8;
    for (j = 1; j <= n; j++)
      if (s[j] < s_min)
        s[j] = 0.0;
      else
        k++;
    if (k < n)
      printf("WARNING: rank not full (%d < %d)", k, n);

    for (j = 0; j < n; j++)
      b[j+1] = y[j][i] - m[j];

    my_svbksb(K, s, V, n, n, b, z);

    for (j = 0; j < n; j++)
      alpha[i][j] = z[j+1] / sn2;
  }

  my_free_matrix(K, 1, n, 1, n);
  my_free_matrix(V, 1, n, 1, n);
  my_free_vector(s, 1, n);
  my_free_vector(b, 1, n);
  my_free_vector(z, 1, n);

  delete [] m;
}

void GPR::generalize(double **x, int n, int D, int dof, double **xs, int m, double **ys)
{
int i, j, k, l;
double ms;
Matrix K;

  K = my_matrix(1, m, 1, n);

  for (k = 0; k <= dof; k++)
  {
    covSEard(x, n, xs, m, D, hyp_cov[k], K);
    for (i = 0; i < m; i++)
    {
      ys[i][k] = hyp_mean[k][D];
      for (j = 0; j < D; j++)
        ys[i][k] += hyp_mean[k][j]*xs[i][j];
      for (j = 0; j < n; j++)
        ys[i][k] += K[i+1][j+1] * alpha[k][j];
    }
  }

  my_free_matrix(K, 1, m, 1, n);
}

GPR::GPR(int D, int dof, int n)
{
int i;
  dof_ = dof;

  hyp_mean = new double *[dof+1];
  for (i = 0; i <= dof; i++)
	hyp_mean[i] = new double[D+1];
  hyp_cov = new double *[dof+1];
  for (i = 0; i <= dof; i++)
    hyp_cov[i] = new double[D+1];
  hyp_lik = new double[dof+1];

  alpha = new double *[dof+1];
  for (i = 0; i <= dof; i++)
    alpha[i] = new double[n];
}

GPR::~GPR()
{
int i;
  if (hyp_mean != 0)
  {
	for (i = 0; i <= dof_; i++)
      delete [] hyp_mean[i];
    delete [] hyp_mean;
  }
  if (hyp_cov != NULL)
  {
	for (i = 0; i <= dof_; i++)
      delete [] hyp_cov[i];
    delete [] hyp_cov;
  }
  if (hyp_lik != NULL)
    delete [] hyp_lik;

  if (alpha != NULL)
  {
	for (i = 0; i <= dof_; i++)
      delete [] alpha[i];
    delete [] alpha;
  }
}

/*!*****************************************************************************
 *******************************************************************************
 \note  read_traj_file
 \date  June 1999

 \remarks

 parse a script which describes the traj task

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 \param[in]     flag : true= use desired data, false use actual data

 ******************************************************************************/
int DMP_structure::read_traj_file(int flag, char fname[],
                                  int *column_map, int &n_cols, int &n_rows, double &sampling_freq)
{
  int j,i,r,k,rc;
  static char string[100];
  FILE *fp = NULL;
  int found = FALSE;
  char **vnames;
  char **units;
  int buffer_size;
  fMatrix buff;
  int aux;
  fMatrix traj_pos, traj_vel, traj_acc, traj_uff;
  int n_vars =0, n_dofs = N_ROBOT_DOFS - 1;

  /* open the file, and parse the parameters */

  /* try to read this file */
  sprintf(string, "%s%s", PREFS, fname);
  fp = fopen(string,"r");
  if (fp == NULL) {
    printf("ERROR: Could not open file >%s<\n",string);
    return FALSE;
  }

  /* get the number of rows, columns, sampling frequency
   and calc the bufer_size */
  rc = fscanf(fp,"%d %d %d %lf", &buffer_size, &n_cols, &n_rows, &sampling_freq);

  /* alocate memory for the variable names and units
   use MY_STOP for checking for errors in allocation */
  vnames = (char **) my_calloc(n_cols+1, sizeof(char *), MY_STOP);
  units = (char **) my_calloc(n_cols+1, sizeof(char *), MY_STOP);

  for (i = 1; i <= n_cols; ++i)
  {
    vnames[i] = (char *) my_calloc(40, sizeof(char), MY_STOP);
    units[i] = (char *) my_calloc(40, sizeof(char), MY_STOP);
    rc = fscanf(fp, "%s %s", vnames[i], units[i]);
  }

  /* there are two extra blank chrs at the end of the block
   and a line return which we must account for */
  fgetc(fp);
  fgetc(fp);
  fgetc(fp);

  /* read file into a buffer and check if the matrix size is correct */
  buff = my_fmatrix(1, n_rows, 1, n_cols);

  if (fread(&buff[1][1],sizeof(float),n_rows*n_cols,fp) != (unsigned int) (n_rows*n_cols))
  {
    printf("cannot fread matrix. \n");
    return MY_ERROR;
  }

  fclose(fp);

#ifdef BYTESWAP
  /* convert little-endian to big-endian */
  for (j = 1; j <= n_cols; ++j)
  {
    for (i = 1; i <= n_rows; ++i)
    {
      aux = LONGSWAP(*((int *)&(buff[i][j])));
      buff[i][j] = *((float *)&aux);
    }
  }
#endif

  /* initialize vars (number of joint names used in file)
   and look for  the joint names present in file*/
  n_vars = 0;

  for (i = 1; i <= n_dofs; ++i)
  {
    if (flag)
      sprintf(string, "%s_des_th", joint_names[i]);
    else
      sprintf(string, "%s_th", joint_names[i]);

    for (j = 1; j <= n_cols; ++j)
    {
      if (strcmp(string,vnames[j])==0)
      {
        ++n_vars;
        break;
      }
    }
  }

  /* create the pos, vel, acc, uff matrices that define the trajectory */
  traj_pos = my_fmatrix(1, n_rows, 1, n_vars);
  traj_vel = my_fmatrix(1, n_rows, 1, n_vars);
  traj_acc = my_fmatrix(1, n_rows, 1, n_vars);
  traj_uff = my_fmatrix(1, n_rows, 1, n_vars);

  /* initialize column_map, routine to fill pos matrix */
  n_vars = 0;
  for (i = 1; i <= n_dofs; ++i)
  {
    if (flag)
      sprintf(string, "%s_des_th",joint_names[i]);
    else
      sprintf(string, "%s_th",joint_names[i]);
    column_map[i] = 0;

    for (j = 1; j <= n_cols; ++j)
    {
      if (strcmp(string, vnames[j]) == 0)
      {
        ++n_vars;

        found = TRUE;

        /* map the used column number into the column map with N_DOF+1 columns*/
        column_map[i] = n_vars;

        /* fill the pos matrix using the right column from buffer*/
        for (r = 1; r <= n_rows; ++r)
        {
          traj_pos[r][n_vars] = buff[r][j];
        }

        /* also check for velocity, acceleration, and uff information
         use the same value of n-vars to fill the remaining matrices*/

        if (flag)
          sprintf(string, "%s_des_thd",joint_names[i]);
        else
          sprintf(string, "%s_thd",joint_names[i]);

        for (k = 1; k <= n_cols; ++k)
        {
          if (strcmp(string, vnames[k]) == 0)
          {
            for (r = 1; r <= n_rows; ++r)
            {
              traj_vel[r][n_vars] = buff[r][k];
            }
          }
        }

        if (flag)
          sprintf(string, "%s_des_thdd", joint_names[i]);
        else
          sprintf(string, "%s_thdd", joint_names[i]);

        for (k = 1; k <= n_cols; ++k)
        {
          if (strcmp(string,vnames[k]) == 0)
          {
            for (r = 1;r <= n_rows; ++r)
            {
              traj_acc[r][n_vars] = buff[r][k];
            }
          }
        }

        sprintf(string, "%s_uff", joint_names[i]);
        for (k = 1; k <= n_cols; ++k)
        {
          if (strcmp(string, vnames[k]) ==0)
          {
            for (r = 1;r <= n_rows; ++r)
            {
              traj_uff[r][n_vars] = buff[r][k];
            }
          }
        }
        /* assume only one variable of each kind exists*/
        break;
      }
    }
  }

  /* free up memory by deallocating resources */
  my_free_fmatrix(buff, 1, n_rows, 1, n_cols);
  for (i = 1 ; i <= n_cols; ++i)
  {
    free(vnames[i]);
    free(units[i]);
  }

  free(units);
  free(vnames);

  return found;
}

int DMP_structure::read_DMP_string(char buffer[], int m)
{
int i, j, k, n;
char *buffer_pt;

  j = -1;
  for (i = 0; i < m; i++)
    if (buffer[i] == '<')
      j = i;
  if (j < 0)
    return 0;

  for (i = j; i < m; i++)
    if (buffer[i] == '>')
      break;

  if (i == m)
    return 0;

  buffer[i] = '\0';

  n = 0;
  buffer_pt = &(buffer[j+1]);

  printf("New DMP stuff: %s\n", buffer_pt);

  if (!sscanf(buffer_pt, "%le%n", &tau, &k))
    return n;
  n++;
  buffer_pt += k;

  for (j = 0; j < dof; j++)
  {
    if (!sscanf(buffer_pt, "%le%n", goal + j, &k))
      return n;
    n++;
    buffer_pt += k;
  }

  /* for (i = 0; i < N; i++)
  {
    sscanf(buffer_pt, "%le%n", c + i, &k);
    buffer_pt += k;
  }

  for (i = 0; i < N; i++)
  {
    sscanf(buffer_pt, "%le%n", sigma2 + i, &k);
    buffer_pt += k,
  } */

  for (j = 0; j < dof; j++)
  {
    for (i = 0; i < N; i++)
    {
      if (!sscanf(buffer_pt, "%le%n", &(w[j][i]), &k))
        return n;
      n++;
      buffer_pt += k;
    }
  }

  return n;
}

static void nearest_neighbor(double **queries, double **training_goals,
                             int NUM_examples, int query_dim, int dof,
                             double *query, double *ys)
{
double dist, dist_min;
int i, j, k;

  dist_min = 0; k = 0;
  for (j = 0; j < query_dim; j++)
    dist_min += SQR(query[j] - queries[0][j]);
  for (i = 1; i < NUM_examples; i++)
  {
    dist = 0;
    for (j = 0; j < query_dim; j++)
      dist += SQR(query[j] - queries[i][j]);
    if (dist < dist_min)
    {
      dist_min = dist;
      k = i;
    }
  }

  /* printf("Nearest neighbor:");
  for (j = 0; j < query_dim; j++)
    printf(" %f", queries[k][j]);
  printf("\n"); */

  for (i = 0; i < dof; i++)
    ys[i] = training_goals[k][i];
}

