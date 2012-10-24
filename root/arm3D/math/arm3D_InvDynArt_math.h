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



arm3D_InvDynArtfunc1();

arm3D_InvDynArtfunc2();

arm3D_InvDynArtfunc3();

arm3D_InvDynArtfunc4();

arm3D_InvDynArtfunc5();

arm3D_InvDynArtfunc6();

arm3D_InvDynArtfunc7();

arm3D_InvDynArtfunc8();

arm3D_InvDynArtfunc9();

arm3D_InvDynArtfunc10();

arm3D_InvDynArtfunc11();

arm3D_InvDynArtfunc12();

/* acceleration vectors, base acceleration, and joint torques */
a1[1]=c1[1];
a1[2]=c1[2];
a1[3]=state[1].thdd;
a1[4]=c1[4];
a1[5]=c1[5];

a2[1]=c2[1] + a1[1]*S21[1][1] + a1[2]*S21[1][2];
a2[2]=c2[2] + a1[1]*S21[2][1] + a1[2]*S21[2][2];
a2[3]=state[2].thdd + a1[3];
a2[4]=c2[4] + a1[4]*S21[1][1] + l1*a1[3]*S21[1][2] + a1[5]*S21[1][2];
a2[5]=c2[5] + a1[4]*S21[2][1] + l1*a1[3]*S21[2][2] + a1[5]*S21[2][2];
a2[6]=-(l1*a1[2]);

a3[1]=c3[1] + a2[1]*S32[1][1] + a2[2]*S32[1][2];
a3[2]=c3[2] + a2[1]*S32[2][1] + a2[2]*S32[2][2];
a3[3]=state[3].thdd + a2[3];
a3[4]=c3[4] + a2[4]*S32[1][1] + l2*a2[3]*S32[1][2] + a2[5]*S32[1][2];
a3[5]=c3[5] + a2[4]*S32[2][1] + l2*a2[3]*S32[2][2] + a2[5]*S32[2][2];
a3[6]=-(l2*a2[2]) + a2[6];

a4[1]=a3[1]*S43[1][1] + a3[2]*S43[1][2] + a3[3]*S43[1][3];
a4[2]=a3[1]*S43[2][1] + a3[2]*S43[2][2] + a3[3]*S43[2][3];
a4[3]=a3[1]*S43[3][1] + a3[2]*S43[3][2] + a3[3]*S43[3][3];
a4[4]=a3[4]*S43[1][1] + a3[5]*S43[1][2] + a3[3]*(-(eff[1].x[2]*S43[1][1]) + eff[1].x[1]*S43[1][2]) + a3[6]*S43[1][3] + a3[2]*(eff[1].x[3]*S43[1][1] - eff[1].x[1]*S43[1][3]) + a3[1]*(-(eff[1].x[3]*S43[1][2]) + eff[1].x[2]*S43[1][3]);
a4[5]=a3[4]*S43[2][1] + a3[5]*S43[2][2] + a3[3]*(-(eff[1].x[2]*S43[2][1]) + eff[1].x[1]*S43[2][2]) + a3[6]*S43[2][3] + a3[2]*(eff[1].x[3]*S43[2][1] - eff[1].x[1]*S43[2][3]) + a3[1]*(-(eff[1].x[3]*S43[2][2]) + eff[1].x[2]*S43[2][3]);
a4[6]=a3[4]*S43[3][1] + a3[5]*S43[3][2] + a3[3]*(-(eff[1].x[2]*S43[3][1]) + eff[1].x[1]*S43[3][2]) + a3[6]*S43[3][3] + a3[2]*(eff[1].x[3]*S43[3][1] - eff[1].x[1]*S43[3][3]) + a3[1]*(-(eff[1].x[3]*S43[3][2]) + eff[1].x[2]*S43[3][3]);

/* inverse dynamics torques */
state[1].uff=p1[6] + a1[1]*JA1[6][1] + a1[2]*JA1[6][2] + a1[3]*JA1[6][3] + a1[4]*JA1[6][4] + a1[5]*JA1[6][5];
state[2].uff=p2[6] + a2[1]*JA2[6][1] + a2[2]*JA2[6][2] + a2[3]*JA2[6][3] + a2[4]*JA2[6][4] + a2[5]*JA2[6][5] + a2[6]*JA2[6][6];
state[3].uff=p3[6] + a3[1]*JA3[6][1] + a3[2]*JA3[6][2] + a3[3]*JA3[6][3] + a3[4]*JA3[6][4] + a3[5]*JA3[6][5] + a3[6]*JA3[6][6];

