static double  sstate1th;
static double  cstate1th;
static double  sstate2th;
static double  cstate2th;
static double  sstate3th;
static double  cstate3th;

static double  rseff1a1;
static double  rceff1a1;
static double  rseff1a2;
static double  rceff1a2;
static double  rseff1a3;
static double  rceff1a3;

static double  S10[3+1][3+1];
static double  S21[3+1][3+1];
static double  S32[3+1][3+1];
static double  S43[3+1][3+1];

static void arm3D_InvDynfunc1(void);

static double  Si01[3+1][3+1];
static double  Si12[3+1][3+1];
static double  Si23[3+1][3+1];
static double  Si34[3+1][3+1];

static void arm3D_InvDynfunc2(void);

static double  SG10[3+1][3+1];
static double  SG20[3+1][3+1];
static double  SG30[3+1][3+1];
static double  SG40[3+1][3+1];

static void arm3D_InvDynfunc3(void);

static double  v1[6+1];
static double  v2[6+1];
static double  v3[6+1];
static double  v4[6+1];

static void arm3D_InvDynfunc4(void);

static double  a0[6+1];
static double  a1[6+1];
static double  a2[6+1];
static double  a3[6+1];
static double  a4[6+1];

static void arm3D_InvDynfunc5(void);

static double  fnet1[6+1];
static double  fnet2[6+1];
static double  fnet3[6+1];
static double  fnet4[6+1];


static void arm3D_InvDynfunc6(void);

static double  f0[6+1];
static double  f1[6+1];
static double  f2[6+1];
static double  f3[6+1];
static double  f4[6+1];


static void arm3D_InvDynfunc7(void);

static double  qext[4+1];

