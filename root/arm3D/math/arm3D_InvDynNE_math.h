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



arm3D_InvDynNEfunc1();

arm3D_InvDynNEfunc2();

arm3D_InvDynNEfunc3();

arm3D_InvDynNEfunc4();

arm3D_InvDynNEfunc5();

arm3D_InvDynNEfunc6();

arm3D_InvDynNEfunc7();

/* force/torque of base in world coordinates */
fbase[1]=f0[1]*Si00[1][1] + f0[2]*Si00[1][2] + f0[3]*Si00[1][3];
fbase[2]=f0[1]*Si00[2][1] + f0[2]*Si00[2][2] + f0[3]*Si00[2][3];
fbase[3]=f0[1]*Si00[3][1] + f0[2]*Si00[3][2] + f0[3]*Si00[3][3];
fbase[4]=f0[4]*Si00[1][1] + f0[5]*Si00[1][2] + f0[6]*Si00[1][3];
fbase[5]=f0[4]*Si00[2][1] + f0[5]*Si00[2][2] + f0[6]*Si00[2][3];
fbase[6]=f0[4]*Si00[3][1] + f0[5]*Si00[3][2] + f0[6]*Si00[3][3];

/* inverse dynamics torques */
state[1].uff=-state[1].uex + f1[6] + fext1[6];
state[2].uff=-state[2].uex + f2[6] + fext2[6];
state[3].uff=-state[3].uex + f3[6] + fext3[6];

/* torques due to external forces */
qext[1]=-state[1].uex + fext1[6];
qext[2]=-state[2].uex + fext2[6];
qext[3]=-state[3].uex + fext3[6];
qext[4]=0.;

