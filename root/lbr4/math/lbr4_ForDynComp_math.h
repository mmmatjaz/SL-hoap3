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



lbr4_ForDynCompfunc1();

lbr4_ForDynCompfunc2();

lbr4_ForDynCompfunc3();

lbr4_ForDynCompfunc4();

lbr4_ForDynCompfunc5();

lbr4_ForDynCompfunc6();

lbr4_ForDynCompfunc7();

/* force/torque of base in world coordinates */
fbase[1]=f0[1]*Si00[1][1] + f0[2]*Si00[1][2] + f0[3]*Si00[1][3];
fbase[2]=f0[1]*Si00[2][1] + f0[2]*Si00[2][2] + f0[3]*Si00[2][3];
fbase[3]=f0[1]*Si00[3][1] + f0[2]*Si00[3][2] + f0[3]*Si00[3][3];
fbase[4]=f0[4]*Si00[1][1] + f0[5]*Si00[1][2] + f0[6]*Si00[1][3];
fbase[5]=f0[4]*Si00[2][1] + f0[5]*Si00[2][2] + f0[6]*Si00[2][3];
fbase[6]=f0[4]*Si00[3][1] + f0[5]*Si00[3][2] + f0[6]*Si00[3][3];

/* inverse dynamics torques */
c[1]=f1[6] + fext1[6];
c[2]=f2[6] + fext2[6];
c[3]=f3[6] + fext3[6];
c[4]=f4[6] + fext4[6];
c[5]=f5[6] + fext5[6];
c[6]=f6[6] + fext6[6];
c[7]=f7[6] + fext7[6];
c[8]=0;

/* torques due to external forces */
qext[1]=fext1[6];
qext[2]=fext2[6];
qext[3]=fext3[6];
qext[4]=fext4[6];
qext[5]=fext5[6];
qext[6]=fext6[6];
qext[7]=fext7[6];
qext[8]=0.;

lbr4func11();

lbr4func12();

lbr4func13();

lbr4func14();

lbr4func15();

lbr4func16();

lbr4func17();

lbr4func18();

lbr4func19();

lbr4func20();

lbr4func21();

lbr4func22();

vcross[1]=-(basec[0].xd[3]*baseo[0].ad[2]) + basec[0].xd[2]*baseo[0].ad[3];
vcross[2]=basec[0].xd[3]*baseo[0].ad[1] - basec[0].xd[1]*baseo[0].ad[3];
vcross[3]=-(basec[0].xd[2]*baseo[0].ad[1]) + basec[0].xd[1]*baseo[0].ad[2];

c[1]=c[1] - qext[1] + vcross[1]*K[1][1] + vcross[2]*K[1][2] + vcross[3]*K[1][3];
c[2]=c[2] - qext[2] + vcross[1]*K[2][1] + vcross[2]*K[2][2] + vcross[3]*K[2][3];
c[3]=c[3] - qext[3] + vcross[1]*K[3][1] + vcross[2]*K[3][2] + vcross[3]*K[3][3];
c[4]=c[4] - qext[4] + vcross[1]*K[4][1] + vcross[2]*K[4][2] + vcross[3]*K[4][3];
c[5]=c[5] - qext[5] + vcross[1]*K[5][1] + vcross[2]*K[5][2] + vcross[3]*K[5][3];
c[6]=c[6] - qext[6] + vcross[1]*K[6][1] + vcross[2]*K[6][2] + vcross[3]*K[6][3];
c[7]=c[7] - qext[7] + vcross[1]*K[7][1] + vcross[2]*K[7][2] + vcross[3]*K[7][3];
c[8]=c[8] - qext[8] + vcross[1]*K[8][1] + vcross[2]*K[8][2] + vcross[3]*K[8][3];
c[9]=vcross[1]*Jc0[1][4] + vcross[2]*Jc0[1][5] + vcross[3]*Jc0[1][6] + f0[1]*Si00[1][1] + f0[2]*Si00[1][2] + f0[3]*Si00[1][3];
c[10]=vcross[1]*Jc0[2][4] + vcross[2]*Jc0[2][5] + vcross[3]*Jc0[2][6] + f0[1]*Si00[2][1] + f0[2]*Si00[2][2] + f0[3]*Si00[2][3];
c[11]=vcross[1]*Jc0[3][4] + vcross[2]*Jc0[3][5] + vcross[3]*Jc0[3][6] + f0[1]*Si00[3][1] + f0[2]*Si00[3][2] + f0[3]*Si00[3][3];
c[12]=vcross[1]*Jc0[4][4] + vcross[2]*Jc0[4][5] + vcross[3]*Jc0[4][6] + f0[4]*Si00[1][1] + f0[5]*Si00[1][2] + f0[6]*Si00[1][3];
c[13]=vcross[1]*Jc0[5][4] + vcross[2]*Jc0[5][5] + vcross[3]*Jc0[5][6] + f0[4]*Si00[2][1] + f0[5]*Si00[2][2] + f0[6]*Si00[2][3];
c[14]=vcross[1]*Jc0[6][4] + vcross[2]*Jc0[6][5] + vcross[3]*Jc0[6][6] + f0[4]*Si00[3][1] + f0[5]*Si00[3][2] + f0[6]*Si00[3][3];

uc[1]=state[1].u - c[1] - qext[1];
uc[2]=state[2].u - c[2] - qext[2];
uc[3]=state[3].u - c[3] - qext[3];
uc[4]=state[4].u - c[4] - qext[4];
uc[5]=state[5].u - c[5] - qext[5];
uc[6]=state[6].u - c[6] - qext[6];
uc[7]=state[7].u - c[7] - qext[7];
uc[8]=-c[8] - qext[8];
uc[9]=-c[9] - fext0[1]*Si00[1][1] - fext0[2]*Si00[1][2] - fext0[3]*Si00[1][3];
uc[10]=-c[10] - fext0[1]*Si00[2][1] - fext0[2]*Si00[2][2] - fext0[3]*Si00[2][3];
uc[11]=-c[11] - fext0[1]*Si00[3][1] - fext0[2]*Si00[3][2] - fext0[3]*Si00[3][3];
uc[12]=-c[12] - fext0[4]*Si00[1][1] - fext0[5]*Si00[1][2] - fext0[6]*Si00[1][3];
uc[13]=-c[13] - fext0[4]*Si00[2][1] - fext0[5]*Si00[2][2] - fext0[6]*Si00[2][3];
uc[14]=-c[14] - fext0[4]*Si00[3][1] - fext0[5]*Si00[3][2] - fext0[6]*Si00[3][3];

/* now solve for accelerations: uc = H * thdd           */
/* Note: uc and H are calculated above */
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
cvec[1]  = c[1];
ucvec[1] = uc[1];
cvec[2]  = c[2];
ucvec[2] = uc[2];
cvec[3]  = c[3];
ucvec[3] = uc[3];
cvec[4]  = c[4];
ucvec[4] = uc[4];
cvec[5]  = c[5];
ucvec[5] = uc[5];
cvec[6]  = c[6];
ucvec[6] = uc[6];
cvec[7]  = c[7];
ucvec[7] = uc[7];
 for (i=1; i<=6; ++i) 
      cvec[7+i]=c[8+i];
 for (i=1; i<=6; ++i) 
      ucvec[7+i]=uc[8+i];
my_inv_ldlt(Hmat,ucvec,7,thdd);

state[1].thdd=thdd[1];
state[2].thdd=thdd[2];
state[3].thdd=thdd[3];
state[4].thdd=thdd[4];
state[5].thdd=thdd[5];
state[6].thdd=thdd[6];
state[7].thdd=thdd[7];

