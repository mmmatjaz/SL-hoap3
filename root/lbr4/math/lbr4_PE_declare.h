double  sstate1th;
double  cstate1th;
double  sstate2th;
double  cstate2th;
double  sstate3th;
double  cstate3th;
double  sstate4th;
double  cstate4th;
double  sstate5th;
double  cstate5th;
double  sstate6th;
double  cstate6th;
double  sstate7th;
double  cstate7th;

double  rseff1a1;
double  rceff1a1;
double  rseff1a2;
double  rceff1a2;
double  rseff1a3;
double  rceff1a3;

double  Xinv[8+1][6+1][6+1];

double  st[8+1][6+1];

double  v0[6+1];
double  v1[6+1];
double  v2[6+1];
double  v3[6+1];
double  v4[6+1];
double  v5[6+1];
double  v6[6+1];
double  v7[6+1];
double  v8[6+1];

double  a0[6+1];
double  a1[6+1];
double  a2[6+1];
double  a3[6+1];
double  a4[6+1];
double  a5[6+1];
double  a6[6+1];
double  a7[6+1];
double  a8[6+1];

double  A[8+1][6+1][N_RBD_PARMS+1];

int     pred[8+1];
int     map[108+1];
double  K[14+1][9*N_RBD_PARMS+1];
double  U[6+1][N_RBD_PARMS+1];
double  Unew[6+1][N_RBD_PARMS+1];
double  Y[14+1];

