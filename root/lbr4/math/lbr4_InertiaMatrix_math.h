/* sine and cosine precomputation */
sstate1th=Sin(state[1].th);
cstate1th=Cos(state[1].th);

sstate2th=Sin(state[2].th);
cstate2th=Cos(state[2].th);

sstate3th=Sin(state[3].th);
cstate3th=Cos(state[3].th);

sstate4th=Sin(state[4].th);
cstate4th=Cos(state[4].th);

sstate5th=Sin(state[5].th);
cstate5th=Cos(state[5].th);

sstate6th=Sin(state[6].th);
cstate6th=Cos(state[6].th);

sstate7th=Sin(state[7].th);
cstate7th=Cos(state[7].th);


/* rotation matrix sine and cosine precomputation */







rseff1a1=Sin(eff[1].a[1]);
rceff1a1=Cos(eff[1].a[1]);

rseff1a2=Sin(eff[1].a[2]);
rceff1a2=Cos(eff[1].a[2]);

rseff1a3=Sin(eff[1].a[3]);
rceff1a3=Cos(eff[1].a[3]);



lbr4func11();

lbr4func12();

lbr4func13();

lbr4func14();

lbr4func15();

/* final inertia matrix result (need to sort out dummy DOFS) */
Hmat[1][1] = Hmat[1][1] = H[1][1];
Hmat[1][2] = Hmat[2][1] = H[2][1];
Hmat[1][3] = Hmat[3][1] = H[3][1];
Hmat[1][4] = Hmat[4][1] = H[4][1];
Hmat[1][5] = Hmat[5][1] = H[5][1];
Hmat[1][6] = Hmat[6][1] = H[6][1];
Hmat[1][7] = Hmat[7][1] = H[7][1];
Hmat[2][2] = Hmat[2][2] = H[2][2];
Hmat[2][3] = Hmat[3][2] = H[3][2];
Hmat[2][4] = Hmat[4][2] = H[4][2];
Hmat[2][5] = Hmat[5][2] = H[5][2];
Hmat[2][6] = Hmat[6][2] = H[6][2];
Hmat[2][7] = Hmat[7][2] = H[7][2];
Hmat[3][3] = Hmat[3][3] = H[3][3];
Hmat[3][4] = Hmat[4][3] = H[4][3];
Hmat[3][5] = Hmat[5][3] = H[5][3];
Hmat[3][6] = Hmat[6][3] = H[6][3];
Hmat[3][7] = Hmat[7][3] = H[7][3];
Hmat[4][4] = Hmat[4][4] = H[4][4];
Hmat[4][5] = Hmat[5][4] = H[5][4];
Hmat[4][6] = Hmat[6][4] = H[6][4];
Hmat[4][7] = Hmat[7][4] = H[7][4];
Hmat[5][5] = Hmat[5][5] = H[5][5];
Hmat[5][6] = Hmat[6][5] = H[6][5];
Hmat[5][7] = Hmat[7][5] = H[7][5];
Hmat[6][6] = Hmat[6][6] = H[6][6];
Hmat[6][7] = Hmat[7][6] = H[7][6];
Hmat[7][7] = Hmat[7][7] = H[7][7];
