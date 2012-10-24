/* sine and cosine precomputation */
sstate1th=Sin(state[1].th);
cstate1th=Cos(state[1].th);

sstate2th=Sin(state[2].th);
cstate2th=Cos(state[2].th);

sstate3th=Sin(state[3].th);
cstate3th=Cos(state[3].th);


/* rotation matrix sine and cosine precomputation */



rseff1a1=Sin(eff[1].a[1]);
rceff1a1=Cos(eff[1].a[1]);

rseff1a2=Sin(eff[1].a[2]);
rceff1a2=Cos(eff[1].a[2]);

rseff1a3=Sin(eff[1].a[3]);
rceff1a3=Cos(eff[1].a[3]);



arm3D_ForDynfunc1();

arm3D_ForDynfunc2();

arm3D_ForDynfunc3();

arm3D_ForDynfunc4();

arm3D_ForDynfunc5();

arm3D_ForDynfunc6();

arm3D_ForDynfunc7();

/* inverse dynamics torques */
c[1]=f1[6] + fext1[6];
c[2]=f2[6] + fext2[6];
c[3]=f3[6] + fext3[6];
c[4]=0;

/* torques due to external forces */
qext[1]=fext1[6];
qext[2]=fext2[6];
qext[3]=fext3[6];

arm3Dfunc11();

arm3Dfunc12();

arm3Dfunc13();

arm3Dfunc14();

arm3Dfunc15();

arm3Dfunc16();

arm3Dfunc17();

arm3Dfunc18();

c[1]=c[1] - qext[1];
c[2]=c[2] - qext[2];
c[3]=c[3] - qext[3];
c[4]=c[4];
c[5]=f0[1];
c[6]=f0[2];
c[7]=f0[3];
c[8]=f0[4];
c[9]=f0[5];
c[10]=f0[6];

uc[1]=state[1].u - c[1] - qext[1];
uc[2]=state[2].u - c[2] - qext[2];
uc[3]=state[3].u - c[3] - qext[3];
uc[4]=-c[4];
uc[5]=-c[5] - fext0[1];
uc[6]=-c[6] - fext0[2];
uc[7]=-c[7] - fext0[3];
uc[8]=-c[8] - fext0[4];
uc[9]=-c[9] - fext0[5];
uc[10]=-c[10] - fext0[6];

/* now solve for accelerations: uc = H * thdd           */
/* Note: uc and H are calculated above */
Hmat[1][1] = Hmat[1][1] = H[1][1];
Hmat[1][2] = Hmat[2][1] = H[2][1];
Hmat[1][3] = Hmat[3][1] = H[3][1];
Hmat[2][2] = Hmat[2][2] = H[2][2];
Hmat[2][3] = Hmat[3][2] = H[3][2];
Hmat[3][3] = Hmat[3][3] = H[3][3];
cvec[1]  = c[1];
ucvec[1] = uc[1];
cvec[2]  = c[2];
ucvec[2] = uc[2];
cvec[3]  = c[3];
ucvec[3] = uc[3];
 for (i=1; i<=6; ++i) 
      cvec[3+i]=c[4+i];
 for (i=1; i<=6; ++i) 
      ucvec[3+i]=uc[4+i];
my_inv_ldlt(Hmat,ucvec,3,thdd);

state[1].thdd=thdd[1];
state[2].thdd=thdd[2];
state[3].thdd=thdd[3];

