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



arm3D_InvDynfunc1();

arm3D_InvDynfunc2();

arm3D_InvDynfunc3();

arm3D_InvDynfunc4();

arm3D_InvDynfunc5();

arm3D_InvDynfunc6();

arm3D_InvDynfunc7();

/* inverse dynamics torques */
state[1].uff=0. - state[1].uex + f1[6];
state[2].uff=0. - state[2].uex + f2[6];
state[3].uff=0. - state[3].uex + f3[6];

/* torques due to external forces */
qext[1]=0. - state[1].uex;
qext[2]=0. - state[2].uex;
qext[3]=0. - state[3].uex;

