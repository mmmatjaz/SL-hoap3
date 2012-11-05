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



lbr4_InvDynArtfunc1();

lbr4_InvDynArtfunc2();

lbr4_InvDynArtfunc3();

lbr4_InvDynArtfunc4();

lbr4_InvDynArtfunc5();

lbr4_InvDynArtfunc6();

lbr4_InvDynArtfunc7();

lbr4_InvDynArtfunc8();

lbr4_InvDynArtfunc9();

lbr4_InvDynArtfunc10();

lbr4_InvDynArtfunc11();

lbr4_InvDynArtfunc12();

lbr4_InvDynArtfunc13();

lbr4_InvDynArtfunc14();

lbr4_InvDynArtfunc15();

lbr4_InvDynArtfunc16();

/* acceleration vectors, base acceleration, and joint torques */
a1[1]=c1[1];
a1[2]=c1[2];
a1[3]=state[1].thdd;
a1[4]=c1[4];
a1[5]=c1[5];

a2[1]=c2[1] + a1[2]*S21[1][2] + a1[3]*S21[1][3];
a2[2]=c2[2] + a1[2]*S21[2][2] + a1[3]*S21[2][3];
a2[3]=state[2].thdd + a1[1];
a2[4]=c2[4] - A1A2*a1[1]*S21[1][2] + a1[5]*S21[1][2];
a2[5]=c2[5] - A1A2*a1[1]*S21[2][2] + a1[5]*S21[2][2];
a2[6]=A1A2*a1[2] + a1[4];

a3[1]=c3[1] + a2[2]*S32[1][2] + a2[3]*S32[1][3];
a3[2]=c3[2] + a2[2]*S32[2][2] + a2[3]*S32[2][3];
a3[3]=state[3].thdd - a2[1];
a3[4]=c3[4] - A2E1*a2[3]*S32[1][2] + a2[5]*S32[1][2] + A2E1*a2[2]*S32[1][3] + a2[6]*S32[1][3];
a3[5]=c3[5] - A2E1*a2[3]*S32[2][2] + a2[5]*S32[2][2] + A2E1*a2[2]*S32[2][3] + a2[6]*S32[2][3];
a3[6]=-a2[4];

a4[1]=c4[1] + a3[2]*S43[1][2] + a3[3]*S43[1][3];
a4[2]=c4[2] + a3[2]*S43[2][2] + a3[3]*S43[2][3];
a4[3]=state[4].thdd - a3[1];
a4[4]=c4[4] - E1A3*a3[1]*S43[1][2] + a3[5]*S43[1][2] + a3[6]*S43[1][3];
a4[5]=c4[5] - E1A3*a3[1]*S43[2][2] + a3[5]*S43[2][2] + a3[6]*S43[2][3];
a4[6]=-(E1A3*a3[2]) - a3[4];

a5[1]=c5[1] + a4[2]*S54[1][2] + a4[3]*S54[1][3];
a5[2]=c5[2] + a4[2]*S54[2][2] + a4[3]*S54[2][3];
a5[3]=state[5].thdd + a4[1];
a5[4]=c5[4] + A3A4*a4[3]*S54[1][2] + a4[5]*S54[1][2] - A3A4*a4[2]*S54[1][3] + a4[6]*S54[1][3];
a5[5]=c5[5] + A3A4*a4[3]*S54[2][2] + a4[5]*S54[2][2] - A3A4*a4[2]*S54[2][3] + a4[6]*S54[2][3];
a5[6]=a4[4];

a6[1]=c6[1] + a5[2]*S65[1][2] + a5[3]*S65[1][3];
a6[2]=c6[2] + a5[2]*S65[2][2] + a5[3]*S65[2][3];
a6[3]=state[6].thdd + a5[1];
a6[4]=c6[4] - A4A5*a5[1]*S65[1][2] + a5[5]*S65[1][2] + a5[6]*S65[1][3];
a6[5]=c6[5] - A4A5*a5[1]*S65[2][2] + a5[5]*S65[2][2] + a5[6]*S65[2][3];
a6[6]=A4A5*a5[2] + a5[4];

a7[1]=c7[1] + a6[2]*S76[1][2] + a6[3]*S76[1][3];
a7[2]=c7[2] + a6[2]*S76[2][2] + a6[3]*S76[2][3];
a7[3]=state[7].thdd - a6[1];
a7[4]=c7[4] - A5A6*a6[3]*S76[1][2] + a6[5]*S76[1][2] + A5A6*a6[2]*S76[1][3] + a6[6]*S76[1][3];
a7[5]=c7[5] - A5A6*a6[3]*S76[2][2] + a6[5]*S76[2][2] + A5A6*a6[2]*S76[2][3] + a6[6]*S76[2][3];
a7[6]=-a6[4];

a8[1]=a7[1]*S87[1][1] + a7[2]*S87[1][2] + a7[3]*S87[1][3];
a8[2]=a7[1]*S87[2][1] + a7[2]*S87[2][2] + a7[3]*S87[2][3];
a8[3]=a7[1]*S87[3][1] + a7[2]*S87[3][2] + a7[3]*S87[3][3];
a8[4]=a7[4]*S87[1][1] + a7[5]*S87[1][2] + a7[3]*(-(eff[1].x[2]*S87[1][1]) + eff[1].x[1]*S87[1][2]) + a7[6]*S87[1][3] + a7[2]*(eff[1].x[3]*S87[1][1] - eff[1].x[1]*S87[1][3]) + a7[1]*(-(eff[1].x[3]*S87[1][2]) + eff[1].x[2]*S87[1][3]);
a8[5]=a7[4]*S87[2][1] + a7[5]*S87[2][2] + a7[3]*(-(eff[1].x[2]*S87[2][1]) + eff[1].x[1]*S87[2][2]) + a7[6]*S87[2][3] + a7[2]*(eff[1].x[3]*S87[2][1] - eff[1].x[1]*S87[2][3]) + a7[1]*(-(eff[1].x[3]*S87[2][2]) + eff[1].x[2]*S87[2][3]);
a8[6]=a7[4]*S87[3][1] + a7[5]*S87[3][2] + a7[3]*(-(eff[1].x[2]*S87[3][1]) + eff[1].x[1]*S87[3][2]) + a7[6]*S87[3][3] + a7[2]*(eff[1].x[3]*S87[3][1] - eff[1].x[1]*S87[3][3]) + a7[1]*(-(eff[1].x[3]*S87[3][2]) + eff[1].x[2]*S87[3][3]);

/* inverse dynamics torques */
state[1].uff=p1[6] + a1[1]*JA1[6][1] + a1[2]*JA1[6][2] + a1[3]*JA1[6][3] + a1[4]*JA1[6][4] + a1[5]*JA1[6][5];
state[2].uff=p2[6] + a2[1]*JA2[6][1] + a2[2]*JA2[6][2] + a2[3]*JA2[6][3] + a2[4]*JA2[6][4] + a2[5]*JA2[6][5] + a2[6]*JA2[6][6];
state[3].uff=p3[6] + a3[1]*JA3[6][1] + a3[2]*JA3[6][2] + a3[3]*JA3[6][3] + a3[4]*JA3[6][4] + a3[5]*JA3[6][5] + a3[6]*JA3[6][6];
state[4].uff=p4[6] + a4[1]*JA4[6][1] + a4[2]*JA4[6][2] + a4[3]*JA4[6][3] + a4[4]*JA4[6][4] + a4[5]*JA4[6][5] + a4[6]*JA4[6][6];
state[5].uff=p5[6] + a5[1]*JA5[6][1] + a5[2]*JA5[6][2] + a5[3]*JA5[6][3] + a5[4]*JA5[6][4] + a5[5]*JA5[6][5] + a5[6]*JA5[6][6];
state[6].uff=p6[6] + a6[1]*JA6[6][1] + a6[2]*JA6[6][2] + a6[3]*JA6[6][3] + a6[4]*JA6[6][4] + a6[5]*JA6[6][5] + a6[6]*JA6[6][6];
state[7].uff=p7[6] + a7[1]*JA7[6][1] + a7[2]*JA7[6][2] + a7[3]*JA7[6][3] + a7[4]*JA7[6][4] + a7[5]*JA7[6][5] + a7[6]*JA7[6][6];

