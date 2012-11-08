/* sine and cosine precomputation */
sstate14th=Sin(state[14].th);
cstate14th=Cos(state[14].th);

sstate13th=Sin(state[13].th);
cstate13th=Cos(state[13].th);

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

sstate8th=Sin(state[8].th);
cstate8th=Cos(state[8].th);

sstate9th=Sin(state[9].th);
cstate9th=Cos(state[9].th);

sstate10th=Sin(state[10].th);
cstate10th=Cos(state[10].th);

sstate11th=Sin(state[11].th);
cstate11th=Cos(state[11].th);

sstate12th=Sin(state[12].th);
cstate12th=Cos(state[12].th);


/* rotation matrix sine and cosine precomputation */













rseff1a1=Sin(eff[1].a[1]);
rceff1a1=Cos(eff[1].a[1]);

rseff1a2=Sin(eff[1].a[2]);
rceff1a2=Cos(eff[1].a[2]);

rseff1a3=Sin(eff[1].a[3]);
rceff1a3=Cos(eff[1].a[3]);












rseff2a1=Sin(eff[2].a[1]);
rceff2a1=Cos(eff[2].a[1]);

rseff2a2=Sin(eff[2].a[2]);
rceff2a2=Cos(eff[2].a[2]);

rseff2a3=Sin(eff[2].a[3]);
rceff2a3=Cos(eff[2].a[3]);



hoap3_InvDynArtfunc1();

hoap3_InvDynArtfunc2();

hoap3_InvDynArtfunc3();

hoap3_InvDynArtfunc4();

hoap3_InvDynArtfunc5();

hoap3_InvDynArtfunc6();

hoap3_InvDynArtfunc7();

hoap3_InvDynArtfunc8();

hoap3_InvDynArtfunc9();

hoap3_InvDynArtfunc10();

hoap3_InvDynArtfunc11();

hoap3_InvDynArtfunc12();

hoap3_InvDynArtfunc13();

hoap3_InvDynArtfunc14();

hoap3_InvDynArtfunc15();

hoap3_InvDynArtfunc16();

hoap3_InvDynArtfunc17();

hoap3_InvDynArtfunc18();

hoap3_InvDynArtfunc19();

hoap3_InvDynArtfunc20();

hoap3_InvDynArtfunc21();

hoap3_InvDynArtfunc22();

hoap3_InvDynArtfunc23();

hoap3_InvDynArtfunc24();

hoap3_InvDynArtfunc25();

hoap3_InvDynArtfunc26();

hoap3_InvDynArtfunc27();

hoap3_InvDynArtfunc28();

hoap3_InvDynArtfunc29();

hoap3_InvDynArtfunc30();

hoap3_InvDynArtfunc31();

hoap3_InvDynArtfunc32();

hoap3_InvDynArtfunc33();

/* acceleration vectors, base acceleration, and joint torques */
a2[1]=c2[1];
a2[2]=c2[2];
a2[3]=state[14].thdd;
a2[4]=c2[4];
a2[5]=c2[5];

a3[1]=c3[1];
a3[2]=c3[2];
a3[3]=state[13].thdd;
a3[4]=c3[4];
a3[5]=c3[5];

a4[1]=c4[1] + a3[1]*S43[1][1] + a3[3]*S43[1][3];
a4[2]=c4[2] + a3[1]*S43[2][1] + a3[3]*S43[2][3];
a4[3]=state[1].thdd + a3[2];
a4[4]=c4[4] + WAISTLINK1*a3[3]*S43[1][1] + a3[4]*S43[1][1] - WAISTLINK1*a3[1]*S43[1][3] + a3[2]*(LEGLINK1*S43[1][1] + WAISTLINK2*S43[1][3]);
a4[5]=c4[5] + WAISTLINK1*a3[3]*S43[2][1] + a3[4]*S43[2][1] - WAISTLINK1*a3[1]*S43[2][3] + a3[2]*(LEGLINK1*S43[2][1] + WAISTLINK2*S43[2][3]);
a4[6]=-(LEGLINK1*a3[1]) - WAISTLINK2*a3[3] + a3[5];

a5[1]=c5[1] + a4[1]*S54[1][1] + a4[3]*S54[1][3];
a5[2]=c5[2] + a4[1]*S54[2][1] + a4[3]*S54[2][3];
a5[3]=state[2].thdd - a4[2];
a5[4]=c5[4] + a4[4]*S54[1][1] + a4[6]*S54[1][3];
a5[5]=c5[5] + a4[4]*S54[2][1] + a4[6]*S54[2][3];
a5[6]=-a4[5];

a6[1]=c6[1] + a5[1]*S65[1][1] + a5[3]*S65[1][3];
a6[2]=c6[2] + a5[1]*S65[2][1] + a5[3]*S65[2][3];
a6[3]=state[3].thdd - a5[2];
a6[4]=c6[4] + a5[4]*S65[1][1] + a5[6]*S65[1][3];
a6[5]=c6[5] + a5[4]*S65[2][1] + a5[6]*S65[2][3];
a6[6]=-a5[5];

a7[1]=c7[1] + a6[1]*S76[1][1] + a6[2]*S76[1][2];
a7[2]=c7[2] + a6[1]*S76[2][1] + a6[2]*S76[2][2];
a7[3]=state[4].thdd + a6[3];
a7[4]=c7[4] + a6[4]*S76[1][1] - LEGLINK2*a6[3]*S76[1][2] + a6[5]*S76[1][2];
a7[5]=c7[5] + a6[4]*S76[2][1] - LEGLINK2*a6[3]*S76[2][2] + a6[5]*S76[2][2];
a7[6]=LEGLINK2*a6[2] + a6[6];

a8[1]=c8[1] + a7[1]*S87[1][1] + a7[2]*S87[1][2];
a8[2]=c8[2] + a7[1]*S87[2][1] + a7[2]*S87[2][2];
a8[3]=state[5].thdd + a7[3];
a8[4]=c8[4] + a7[4]*S87[1][1] - LEGLINK3*a7[3]*S87[1][2] + a7[5]*S87[1][2];
a8[5]=c8[5] + a7[4]*S87[2][1] - LEGLINK3*a7[3]*S87[2][2] + a7[5]*S87[2][2];
a8[6]=LEGLINK3*a7[2] + a7[6];

a9[1]=c9[1] + a8[1]*S98[1][1] + a8[3]*S98[1][3];
a9[2]=c9[2] + a8[1]*S98[2][1] + a8[3]*S98[2][3];
a9[3]=state[6].thdd + a8[2];
a9[4]=c9[4] + a8[4]*S98[1][1] + a8[6]*S98[1][3];
a9[5]=c9[5] + a8[4]*S98[2][1] + a8[6]*S98[2][3];
a9[6]=a8[5];

a10[1]=a9[1];
a10[2]=a9[2];
a10[3]=a9[3];
a10[4]=FOOTLLENGLONG*a9[2] - FOOTWIDLONG*a9[3] + a9[4];
a10[5]=-(FOOTLLENGLONG*a9[1]) - LEGLINK4*a9[3] + a9[5];
a10[6]=FOOTWIDLONG*a9[1] + LEGLINK4*a9[2] + a9[6];

a11[1]=a9[1];
a11[2]=a9[2];
a11[3]=a9[3];
a11[4]=FOOTLLENGLONG*a9[2] + FOOTWIDSHORT*a9[3] + a9[4];
a11[5]=-(FOOTLLENGLONG*a9[1]) - LEGLINK4*a9[3] + a9[5];
a11[6]=-(FOOTWIDSHORT*a9[1]) + LEGLINK4*a9[2] + a9[6];

a12[1]=a9[1];
a12[2]=a9[2];
a12[3]=a9[3];
a12[4]=-(FOOTLENGSHORT*a9[2]) + FOOTWIDSHORT*a9[3] + a9[4];
a12[5]=FOOTLENGSHORT*a9[1] - LEGLINK4*a9[3] + a9[5];
a12[6]=-(FOOTWIDSHORT*a9[1]) + LEGLINK4*a9[2] + a9[6];

a13[1]=a9[1];
a13[2]=a9[2];
a13[3]=a9[3];
a13[4]=-(FOOTLENGSHORT*a9[2]) - FOOTWIDLONG*a9[3] + a9[4];
a13[5]=FOOTLENGSHORT*a9[1] - LEGLINK4*a9[3] + a9[5];
a13[6]=FOOTWIDLONG*a9[1] + LEGLINK4*a9[2] + a9[6];

a14[1]=a9[1]*S149[1][1] + a9[2]*S149[1][2] + a9[3]*S149[1][3];
a14[2]=a9[1]*S149[2][1] + a9[2]*S149[2][2] + a9[3]*S149[2][3];
a14[3]=a9[1]*S149[3][1] + a9[2]*S149[3][2] + a9[3]*S149[3][3];
a14[4]=a9[4]*S149[1][1] + a9[5]*S149[1][2] + a9[3]*(-(eff[1].x[2]*S149[1][1]) + eff[1].x[1]*S149[1][2]) + a9[6]*S149[1][3] + a9[2]*(eff[1].x[3]*S149[1][1] - eff[1].x[1]*S149[1][3]) + a9[1]*(-(eff[1].x[3]*S149[1][2]) + eff[1].x[2]*S149[1][3]);
a14[5]=a9[4]*S149[2][1] + a9[5]*S149[2][2] + a9[3]*(-(eff[1].x[2]*S149[2][1]) + eff[1].x[1]*S149[2][2]) + a9[6]*S149[2][3] + a9[2]*(eff[1].x[3]*S149[2][1] - eff[1].x[1]*S149[2][3]) + a9[1]*(-(eff[1].x[3]*S149[2][2]) + eff[1].x[2]*S149[2][3]);
a14[6]=a9[4]*S149[3][1] + a9[5]*S149[3][2] + a9[3]*(-(eff[1].x[2]*S149[3][1]) + eff[1].x[1]*S149[3][2]) + a9[6]*S149[3][3] + a9[2]*(eff[1].x[3]*S149[3][1] - eff[1].x[1]*S149[3][3]) + a9[1]*(-(eff[1].x[3]*S149[3][2]) + eff[1].x[2]*S149[3][3]);

a15[1]=c15[1] + a3[1]*S153[1][1] + a3[3]*S153[1][3];
a15[2]=c15[2] + a3[1]*S153[2][1] + a3[3]*S153[2][3];
a15[3]=state[7].thdd + a3[2];
a15[4]=c15[4] + WAISTLINK1*a3[3]*S153[1][1] + a3[4]*S153[1][1] - WAISTLINK1*a3[1]*S153[1][3] + a3[2]*(-(LEGLINK1*S153[1][1]) + WAISTLINK2*S153[1][3]);
a15[5]=c15[5] + WAISTLINK1*a3[3]*S153[2][1] + a3[4]*S153[2][1] - WAISTLINK1*a3[1]*S153[2][3] + a3[2]*(-(LEGLINK1*S153[2][1]) + WAISTLINK2*S153[2][3]);
a15[6]=LEGLINK1*a3[1] - WAISTLINK2*a3[3] + a3[5];

a16[1]=c16[1] + a15[1]*S1615[1][1] + a15[3]*S1615[1][3];
a16[2]=c16[2] + a15[1]*S1615[2][1] + a15[3]*S1615[2][3];
a16[3]=state[8].thdd - a15[2];
a16[4]=c16[4] + a15[4]*S1615[1][1] + a15[6]*S1615[1][3];
a16[5]=c16[5] + a15[4]*S1615[2][1] + a15[6]*S1615[2][3];
a16[6]=-a15[5];

a17[1]=c17[1] + a16[1]*S1716[1][1] + a16[3]*S1716[1][3];
a17[2]=c17[2] + a16[1]*S1716[2][1] + a16[3]*S1716[2][3];
a17[3]=state[9].thdd - a16[2];
a17[4]=c17[4] + a16[4]*S1716[1][1] + a16[6]*S1716[1][3];
a17[5]=c17[5] + a16[4]*S1716[2][1] + a16[6]*S1716[2][3];
a17[6]=-a16[5];

a18[1]=c18[1] + a17[1]*S1817[1][1] + a17[2]*S1817[1][2];
a18[2]=c18[2] + a17[1]*S1817[2][1] + a17[2]*S1817[2][2];
a18[3]=state[10].thdd + a17[3];
a18[4]=c18[4] + a17[4]*S1817[1][1] - LEGLINK2*a17[3]*S1817[1][2] + a17[5]*S1817[1][2];
a18[5]=c18[5] + a17[4]*S1817[2][1] - LEGLINK2*a17[3]*S1817[2][2] + a17[5]*S1817[2][2];
a18[6]=LEGLINK2*a17[2] + a17[6];

a19[1]=c19[1] + a18[1]*S1918[1][1] + a18[2]*S1918[1][2];
a19[2]=c19[2] + a18[1]*S1918[2][1] + a18[2]*S1918[2][2];
a19[3]=state[11].thdd + a18[3];
a19[4]=c19[4] + a18[4]*S1918[1][1] - LEGLINK3*a18[3]*S1918[1][2] + a18[5]*S1918[1][2];
a19[5]=c19[5] + a18[4]*S1918[2][1] - LEGLINK3*a18[3]*S1918[2][2] + a18[5]*S1918[2][2];
a19[6]=LEGLINK3*a18[2] + a18[6];

a20[1]=c20[1] + a19[1]*S2019[1][1] + a19[3]*S2019[1][3];
a20[2]=c20[2] + a19[1]*S2019[2][1] + a19[3]*S2019[2][3];
a20[3]=state[12].thdd + a19[2];
a20[4]=c20[4] + a19[4]*S2019[1][1] + a19[6]*S2019[1][3];
a20[5]=c20[5] + a19[4]*S2019[2][1] + a19[6]*S2019[2][3];
a20[6]=a19[5];

a21[1]=a20[1];
a21[2]=a20[2];
a21[3]=a20[3];
a21[4]=FOOTLLENGLONG*a20[2] + FOOTWIDLONG*a20[3] + a20[4];
a21[5]=-(FOOTLLENGLONG*a20[1]) - LEGLINK4*a20[3] + a20[5];
a21[6]=-(FOOTWIDLONG*a20[1]) + LEGLINK4*a20[2] + a20[6];

a22[1]=a20[1];
a22[2]=a20[2];
a22[3]=a20[3];
a22[4]=FOOTLLENGLONG*a20[2] - FOOTWIDSHORT*a20[3] + a20[4];
a22[5]=-(FOOTLLENGLONG*a20[1]) - LEGLINK4*a20[3] + a20[5];
a22[6]=FOOTWIDSHORT*a20[1] + LEGLINK4*a20[2] + a20[6];

a23[1]=a20[1];
a23[2]=a20[2];
a23[3]=a20[3];
a23[4]=-(FOOTLENGSHORT*a20[2]) - FOOTWIDSHORT*a20[3] + a20[4];
a23[5]=FOOTLENGSHORT*a20[1] - LEGLINK4*a20[3] + a20[5];
a23[6]=FOOTWIDSHORT*a20[1] + LEGLINK4*a20[2] + a20[6];

a24[1]=a20[1];
a24[2]=a20[2];
a24[3]=a20[3];
a24[4]=-(FOOTLENGSHORT*a20[2]) + FOOTWIDLONG*a20[3] + a20[4];
a24[5]=FOOTLENGSHORT*a20[1] - LEGLINK4*a20[3] + a20[5];
a24[6]=-(FOOTWIDLONG*a20[1]) + LEGLINK4*a20[2] + a20[6];

a25[1]=a20[1]*S2520[1][1] + a20[2]*S2520[1][2] + a20[3]*S2520[1][3];
a25[2]=a20[1]*S2520[2][1] + a20[2]*S2520[2][2] + a20[3]*S2520[2][3];
a25[3]=a20[1]*S2520[3][1] + a20[2]*S2520[3][2] + a20[3]*S2520[3][3];
a25[4]=a20[4]*S2520[1][1] + a20[5]*S2520[1][2] + a20[3]*(-(eff[2].x[2]*S2520[1][1]) + eff[2].x[1]*S2520[1][2]) + a20[6]*S2520[1][3] + a20[2]*(eff[2].x[3]*S2520[1][1] - eff[2].x[1]*S2520[1][3]) + a20[1]*(-(eff[2].x[3]*S2520[1][2]) + eff[2].x[2]*S2520[1][3]);
a25[5]=a20[4]*S2520[2][1] + a20[5]*S2520[2][2] + a20[3]*(-(eff[2].x[2]*S2520[2][1]) + eff[2].x[1]*S2520[2][2]) + a20[6]*S2520[2][3] + a20[2]*(eff[2].x[3]*S2520[2][1] - eff[2].x[1]*S2520[2][3]) + a20[1]*(-(eff[2].x[3]*S2520[2][2]) + eff[2].x[2]*S2520[2][3]);
a25[6]=a20[4]*S2520[3][1] + a20[5]*S2520[3][2] + a20[3]*(-(eff[2].x[2]*S2520[3][1]) + eff[2].x[1]*S2520[3][2]) + a20[6]*S2520[3][3] + a20[2]*(eff[2].x[3]*S2520[3][1] - eff[2].x[1]*S2520[3][3]) + a20[1]*(-(eff[2].x[3]*S2520[3][2]) + eff[2].x[2]*S2520[3][3]);

/* inverse dynamics torques */
state[14].uff=p2[6] + a2[1]*JA2[6][1] + a2[2]*JA2[6][2] + a2[3]*JA2[6][3] + a2[4]*JA2[6][4] + a2[5]*JA2[6][5];
state[13].uff=p3[6] + a3[1]*JA3[6][1] + a3[2]*JA3[6][2] + a3[3]*JA3[6][3] + a3[4]*JA3[6][4] + a3[5]*JA3[6][5];
state[1].uff=p4[6] + a4[1]*JA4[6][1] + a4[2]*JA4[6][2] + a4[3]*JA4[6][3] + a4[4]*JA4[6][4] + a4[5]*JA4[6][5] + a4[6]*JA4[6][6];
state[2].uff=p5[6] + a5[1]*JA5[6][1] + a5[2]*JA5[6][2] + a5[3]*JA5[6][3] + a5[4]*JA5[6][4] + a5[5]*JA5[6][5] + a5[6]*JA5[6][6];
state[3].uff=p6[6] + a6[1]*JA6[6][1] + a6[2]*JA6[6][2] + a6[3]*JA6[6][3] + a6[4]*JA6[6][4] + a6[5]*JA6[6][5] + a6[6]*JA6[6][6];
state[4].uff=p7[6] + a7[1]*JA7[6][1] + a7[2]*JA7[6][2] + a7[3]*JA7[6][3] + a7[4]*JA7[6][4] + a7[5]*JA7[6][5] + a7[6]*JA7[6][6];
state[5].uff=p8[6] + a8[1]*JA8[6][1] + a8[2]*JA8[6][2] + a8[3]*JA8[6][3] + a8[4]*JA8[6][4] + a8[5]*JA8[6][5] + a8[6]*JA8[6][6];
state[6].uff=p9[6] + a9[1]*JA9[6][1] + a9[2]*JA9[6][2] + a9[3]*JA9[6][3] + a9[4]*JA9[6][4] + a9[5]*JA9[6][5] + a9[6]*JA9[6][6];
state[7].uff=p15[6] + a15[1]*JA15[6][1] + a15[2]*JA15[6][2] + a15[3]*JA15[6][3] + a15[4]*JA15[6][4] + a15[5]*JA15[6][5] + a15[6]*JA15[6][6];
state[8].uff=p16[6] + a16[1]*JA16[6][1] + a16[2]*JA16[6][2] + a16[3]*JA16[6][3] + a16[4]*JA16[6][4] + a16[5]*JA16[6][5] + a16[6]*JA16[6][6];
state[9].uff=p17[6] + a17[1]*JA17[6][1] + a17[2]*JA17[6][2] + a17[3]*JA17[6][3] + a17[4]*JA17[6][4] + a17[5]*JA17[6][5] + a17[6]*JA17[6][6];
state[10].uff=p18[6] + a18[1]*JA18[6][1] + a18[2]*JA18[6][2] + a18[3]*JA18[6][3] + a18[4]*JA18[6][4] + a18[5]*JA18[6][5] + a18[6]*JA18[6][6];
state[11].uff=p19[6] + a19[1]*JA19[6][1] + a19[2]*JA19[6][2] + a19[3]*JA19[6][3] + a19[4]*JA19[6][4] + a19[5]*JA19[6][5] + a19[6]*JA19[6][6];
state[12].uff=p20[6] + a20[1]*JA20[6][1] + a20[2]*JA20[6][2] + a20[3]*JA20[6][3] + a20[4]*JA20[6][4] + a20[5]*JA20[6][5] + a20[6]*JA20[6][6];

