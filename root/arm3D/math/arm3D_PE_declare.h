double  sstate1th;
double  cstate1th;
double  sstate2th;
double  cstate2th;
double  sstate3th;
double  cstate3th;

double  rseff1a1;
double  rceff1a1;
double  rseff1a2;
double  rceff1a2;
double  rseff1a3;
double  rceff1a3;

double  Xinv[4+1][6+1][6+1];

double  st[4+1][6+1];

double  v0[6+1];
double  v1[6+1];
double  v2[6+1];
double  v3[6+1];
double  v4[6+1];

double  a0[6+1];
double  a1[6+1];
double  a2[6+1];
double  a3[6+1];
double  a4[6+1];

double  A[4+1][6+1][N_RBD_PARMS+1];

int     pred[4+1];
int     map[104+1];
double  K[10+1][5*N_RBD_PARMS+1];
double  U[6+1][N_RBD_PARMS+1];
double  Unew[6+1][N_RBD_PARMS+1];
double  Y[10+1];

