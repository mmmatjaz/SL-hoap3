/* sine and cosine precomputation */
sstate14th=Sin(state[14].th);
cstate14th=Cos(state[14].th);

sstate15th=Sin(state[15].th);
cstate15th=Cos(state[15].th);

sstate16th=Sin(state[16].th);
cstate16th=Cos(state[16].th);

sstate17th=Sin(state[17].th);
cstate17th=Cos(state[17].th);

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

hoap3_InvDynArtfunc34();

hoap3_InvDynArtfunc35();

hoap3_InvDynArtfunc36();

hoap3_InvDynArtfunc37();

/* acceleration vectors, base acceleration, and joint torques */
a2[1]=c2[1];
a2[2]=c2[2];
a2[3]=state[14].thdd;
a2[4]=c2[4];
a2[5]=c2[5];

a3[1]=c3[1] + a2[1]*S32[1][1] + a2[3]*S32[1][3];
a3[2]=-state[15].thdd + a2[2];
a3[3]=c3[3] + a2[1]*S32[3][1] + a2[3]*S32[3][3];
a3[4]=c3[4] + a2[4]*S32[1][1];
a3[5]=a2[5];
a3[6]=c3[6] + a2[4]*S32[3][1];

a4[1]=state[16].thdd + a3[1];
a4[2]=c4[2] + a3[2]*S43[2][2] + a3[3]*S43[2][3];
a4[3]=c4[3] + a3[2]*S43[3][2] + a3[3]*S43[3][3];
a4[4]=a3[4];
a4[5]=c4[5] + a3[5]*S43[2][2] + a3[6]*S43[2][3];
a4[6]=c4[6] + a3[5]*S43[3][2] + a3[6]*S43[3][3];

a5[1]=c5[1] + a4[1]*S54[1][1] + a4[2]*S54[1][2];
a5[2]=c5[2] + a4[1]*S54[2][1] + a4[2]*S54[2][2];
a5[3]=state[17].thdd + a4[3];
a5[4]=c5[4] + a4[4]*S54[1][1] + ARMLINK2*a4[3]*S54[1][2] + a4[5]*S54[1][2];
a5[5]=c5[5] + a4[4]*S54[2][1] + ARMLINK2*a4[3]*S54[2][2] + a4[5]*S54[2][2];
a5[6]=-(ARMLINK2*a4[2]) + a4[6];

a6[1]=a5[1];
a6[2]=a5[2];
a6[3]=a5[3];
a6[4]=a5[4];
a6[5]=ARMLINK3*a5[3] + a5[5];
a6[6]=-(ARMLINK3*a5[2]) + a5[6];

a7[1]=c7[1];
a7[2]=c7[2];
a7[3]=state[13].thdd;
a7[4]=c7[4];
a7[5]=c7[5];

a8[1]=c8[1] + a7[1]*S87[1][1] + a7[3]*S87[1][3];
a8[2]=c8[2] + a7[1]*S87[2][1] + a7[3]*S87[2][3];
a8[3]=state[1].thdd + a7[2];
a8[4]=c8[4] + WAISTLINK1*a7[3]*S87[1][1] + a7[4]*S87[1][1] - WAISTLINK1*a7[1]*S87[1][3] + a7[2]*(LEGLINK1*S87[1][1] + WAISTLINK2*S87[1][3]);
a8[5]=c8[5] + WAISTLINK1*a7[3]*S87[2][1] + a7[4]*S87[2][1] - WAISTLINK1*a7[1]*S87[2][3] + a7[2]*(LEGLINK1*S87[2][1] + WAISTLINK2*S87[2][3]);
a8[6]=-(LEGLINK1*a7[1]) - WAISTLINK2*a7[3] + a7[5];

a9[1]=c9[1] + a8[1]*S98[1][1] + a8[3]*S98[1][3];
a9[2]=c9[2] + a8[1]*S98[2][1] + a8[3]*S98[2][3];
a9[3]=state[2].thdd - a8[2];
a9[4]=c9[4] + a8[4]*S98[1][1] + a8[6]*S98[1][3];
a9[5]=c9[5] + a8[4]*S98[2][1] + a8[6]*S98[2][3];
a9[6]=-a8[5];

a10[1]=c10[1] + a9[1]*S109[1][1] + a9[3]*S109[1][3];
a10[2]=c10[2] + a9[1]*S109[2][1] + a9[3]*S109[2][3];
a10[3]=state[3].thdd - a9[2];
a10[4]=c10[4] + a9[4]*S109[1][1] + a9[6]*S109[1][3];
a10[5]=c10[5] + a9[4]*S109[2][1] + a9[6]*S109[2][3];
a10[6]=-a9[5];

a11[1]=c11[1] + a10[1]*S1110[1][1] + a10[2]*S1110[1][2];
a11[2]=c11[2] + a10[1]*S1110[2][1] + a10[2]*S1110[2][2];
a11[3]=state[4].thdd + a10[3];
a11[4]=c11[4] + a10[4]*S1110[1][1] - LEGLINK2*a10[3]*S1110[1][2] + a10[5]*S1110[1][2];
a11[5]=c11[5] + a10[4]*S1110[2][1] - LEGLINK2*a10[3]*S1110[2][2] + a10[5]*S1110[2][2];
a11[6]=LEGLINK2*a10[2] + a10[6];

a12[1]=c12[1] + a11[1]*S1211[1][1] + a11[2]*S1211[1][2];
a12[2]=c12[2] + a11[1]*S1211[2][1] + a11[2]*S1211[2][2];
a12[3]=state[5].thdd + a11[3];
a12[4]=c12[4] + a11[4]*S1211[1][1] - LEGLINK3*a11[3]*S1211[1][2] + a11[5]*S1211[1][2];
a12[5]=c12[5] + a11[4]*S1211[2][1] - LEGLINK3*a11[3]*S1211[2][2] + a11[5]*S1211[2][2];
a12[6]=LEGLINK3*a11[2] + a11[6];

a13[1]=c13[1] + a12[1]*S1312[1][1] + a12[3]*S1312[1][3];
a13[2]=c13[2] + a12[1]*S1312[2][1] + a12[3]*S1312[2][3];
a13[3]=state[6].thdd + a12[2];
a13[4]=c13[4] + a12[4]*S1312[1][1] + a12[6]*S1312[1][3];
a13[5]=c13[5] + a12[4]*S1312[2][1] + a12[6]*S1312[2][3];
a13[6]=a12[5];

a14[1]=a13[1];
a14[2]=a13[2];
a14[3]=a13[3];
a14[4]=FOOTLLENGLONG*a13[2] - FOOTWIDLONG*a13[3] + a13[4];
a14[5]=-(FOOTLLENGLONG*a13[1]) - LEGLINK4*a13[3] + a13[5];
a14[6]=FOOTWIDLONG*a13[1] + LEGLINK4*a13[2] + a13[6];

a15[1]=a13[1];
a15[2]=a13[2];
a15[3]=a13[3];
a15[4]=FOOTLLENGLONG*a13[2] + FOOTWIDSHORT*a13[3] + a13[4];
a15[5]=-(FOOTLLENGLONG*a13[1]) - LEGLINK4*a13[3] + a13[5];
a15[6]=-(FOOTWIDSHORT*a13[1]) + LEGLINK4*a13[2] + a13[6];

a16[1]=a13[1];
a16[2]=a13[2];
a16[3]=a13[3];
a16[4]=-(FOOTLENGSHORT*a13[2]) + FOOTWIDSHORT*a13[3] + a13[4];
a16[5]=FOOTLENGSHORT*a13[1] - LEGLINK4*a13[3] + a13[5];
a16[6]=-(FOOTWIDSHORT*a13[1]) + LEGLINK4*a13[2] + a13[6];

a17[1]=a13[1];
a17[2]=a13[2];
a17[3]=a13[3];
a17[4]=-(FOOTLENGSHORT*a13[2]) - FOOTWIDLONG*a13[3] + a13[4];
a17[5]=FOOTLENGSHORT*a13[1] - LEGLINK4*a13[3] + a13[5];
a17[6]=FOOTWIDLONG*a13[1] + LEGLINK4*a13[2] + a13[6];

a18[1]=a13[1]*S1813[1][1] + a13[2]*S1813[1][2] + a13[3]*S1813[1][3];
a18[2]=a13[1]*S1813[2][1] + a13[2]*S1813[2][2] + a13[3]*S1813[2][3];
a18[3]=a13[1]*S1813[3][1] + a13[2]*S1813[3][2] + a13[3]*S1813[3][3];
a18[4]=a13[4]*S1813[1][1] + a13[5]*S1813[1][2] + a13[3]*(-(eff[1].x[2]*S1813[1][1]) + eff[1].x[1]*S1813[1][2]) + a13[6]*S1813[1][3] + a13[2]*(eff[1].x[3]*S1813[1][1] - eff[1].x[1]*S1813[1][3]) + a13[1]*(-(eff[1].x[3]*S1813[1][2]) + eff[1].x[2]*S1813[1][3]);
a18[5]=a13[4]*S1813[2][1] + a13[5]*S1813[2][2] + a13[3]*(-(eff[1].x[2]*S1813[2][1]) + eff[1].x[1]*S1813[2][2]) + a13[6]*S1813[2][3] + a13[2]*(eff[1].x[3]*S1813[2][1] - eff[1].x[1]*S1813[2][3]) + a13[1]*(-(eff[1].x[3]*S1813[2][2]) + eff[1].x[2]*S1813[2][3]);
a18[6]=a13[4]*S1813[3][1] + a13[5]*S1813[3][2] + a13[3]*(-(eff[1].x[2]*S1813[3][1]) + eff[1].x[1]*S1813[3][2]) + a13[6]*S1813[3][3] + a13[2]*(eff[1].x[3]*S1813[3][1] - eff[1].x[1]*S1813[3][3]) + a13[1]*(-(eff[1].x[3]*S1813[3][2]) + eff[1].x[2]*S1813[3][3]);

a19[1]=c19[1] + a7[1]*S197[1][1] + a7[3]*S197[1][3];
a19[2]=c19[2] + a7[1]*S197[2][1] + a7[3]*S197[2][3];
a19[3]=state[7].thdd + a7[2];
a19[4]=c19[4] + WAISTLINK1*a7[3]*S197[1][1] + a7[4]*S197[1][1] - WAISTLINK1*a7[1]*S197[1][3] + a7[2]*(-(LEGLINK1*S197[1][1]) + WAISTLINK2*S197[1][3]);
a19[5]=c19[5] + WAISTLINK1*a7[3]*S197[2][1] + a7[4]*S197[2][1] - WAISTLINK1*a7[1]*S197[2][3] + a7[2]*(-(LEGLINK1*S197[2][1]) + WAISTLINK2*S197[2][3]);
a19[6]=LEGLINK1*a7[1] - WAISTLINK2*a7[3] + a7[5];

a20[1]=c20[1] + a19[1]*S2019[1][1] + a19[3]*S2019[1][3];
a20[2]=c20[2] + a19[1]*S2019[2][1] + a19[3]*S2019[2][3];
a20[3]=state[8].thdd - a19[2];
a20[4]=c20[4] + a19[4]*S2019[1][1] + a19[6]*S2019[1][3];
a20[5]=c20[5] + a19[4]*S2019[2][1] + a19[6]*S2019[2][3];
a20[6]=-a19[5];

a21[1]=c21[1] + a20[1]*S2120[1][1] + a20[3]*S2120[1][3];
a21[2]=c21[2] + a20[1]*S2120[2][1] + a20[3]*S2120[2][3];
a21[3]=state[9].thdd - a20[2];
a21[4]=c21[4] + a20[4]*S2120[1][1] + a20[6]*S2120[1][3];
a21[5]=c21[5] + a20[4]*S2120[2][1] + a20[6]*S2120[2][3];
a21[6]=-a20[5];

a22[1]=c22[1] + a21[1]*S2221[1][1] + a21[2]*S2221[1][2];
a22[2]=c22[2] + a21[1]*S2221[2][1] + a21[2]*S2221[2][2];
a22[3]=state[10].thdd + a21[3];
a22[4]=c22[4] + a21[4]*S2221[1][1] - LEGLINK2*a21[3]*S2221[1][2] + a21[5]*S2221[1][2];
a22[5]=c22[5] + a21[4]*S2221[2][1] - LEGLINK2*a21[3]*S2221[2][2] + a21[5]*S2221[2][2];
a22[6]=LEGLINK2*a21[2] + a21[6];

a23[1]=c23[1] + a22[1]*S2322[1][1] + a22[2]*S2322[1][2];
a23[2]=c23[2] + a22[1]*S2322[2][1] + a22[2]*S2322[2][2];
a23[3]=state[11].thdd + a22[3];
a23[4]=c23[4] + a22[4]*S2322[1][1] - LEGLINK3*a22[3]*S2322[1][2] + a22[5]*S2322[1][2];
a23[5]=c23[5] + a22[4]*S2322[2][1] - LEGLINK3*a22[3]*S2322[2][2] + a22[5]*S2322[2][2];
a23[6]=LEGLINK3*a22[2] + a22[6];

a24[1]=c24[1] + a23[1]*S2423[1][1] + a23[3]*S2423[1][3];
a24[2]=c24[2] + a23[1]*S2423[2][1] + a23[3]*S2423[2][3];
a24[3]=state[12].thdd + a23[2];
a24[4]=c24[4] + a23[4]*S2423[1][1] + a23[6]*S2423[1][3];
a24[5]=c24[5] + a23[4]*S2423[2][1] + a23[6]*S2423[2][3];
a24[6]=a23[5];

a25[1]=a24[1];
a25[2]=a24[2];
a25[3]=a24[3];
a25[4]=FOOTLLENGLONG*a24[2] + FOOTWIDLONG*a24[3] + a24[4];
a25[5]=-(FOOTLLENGLONG*a24[1]) - LEGLINK4*a24[3] + a24[5];
a25[6]=-(FOOTWIDLONG*a24[1]) + LEGLINK4*a24[2] + a24[6];

a26[1]=a24[1];
a26[2]=a24[2];
a26[3]=a24[3];
a26[4]=FOOTLLENGLONG*a24[2] - FOOTWIDSHORT*a24[3] + a24[4];
a26[5]=-(FOOTLLENGLONG*a24[1]) - LEGLINK4*a24[3] + a24[5];
a26[6]=FOOTWIDSHORT*a24[1] + LEGLINK4*a24[2] + a24[6];

a27[1]=a24[1];
a27[2]=a24[2];
a27[3]=a24[3];
a27[4]=-(FOOTLENGSHORT*a24[2]) - FOOTWIDSHORT*a24[3] + a24[4];
a27[5]=FOOTLENGSHORT*a24[1] - LEGLINK4*a24[3] + a24[5];
a27[6]=FOOTWIDSHORT*a24[1] + LEGLINK4*a24[2] + a24[6];

a28[1]=a24[1];
a28[2]=a24[2];
a28[3]=a24[3];
a28[4]=-(FOOTLENGSHORT*a24[2]) + FOOTWIDLONG*a24[3] + a24[4];
a28[5]=FOOTLENGSHORT*a24[1] - LEGLINK4*a24[3] + a24[5];
a28[6]=-(FOOTWIDLONG*a24[1]) + LEGLINK4*a24[2] + a24[6];

a29[1]=a24[1]*S2924[1][1] + a24[2]*S2924[1][2] + a24[3]*S2924[1][3];
a29[2]=a24[1]*S2924[2][1] + a24[2]*S2924[2][2] + a24[3]*S2924[2][3];
a29[3]=a24[1]*S2924[3][1] + a24[2]*S2924[3][2] + a24[3]*S2924[3][3];
a29[4]=a24[4]*S2924[1][1] + a24[5]*S2924[1][2] + a24[3]*(-(eff[2].x[2]*S2924[1][1]) + eff[2].x[1]*S2924[1][2]) + a24[6]*S2924[1][3] + a24[2]*(eff[2].x[3]*S2924[1][1] - eff[2].x[1]*S2924[1][3]) + a24[1]*(-(eff[2].x[3]*S2924[1][2]) + eff[2].x[2]*S2924[1][3]);
a29[5]=a24[4]*S2924[2][1] + a24[5]*S2924[2][2] + a24[3]*(-(eff[2].x[2]*S2924[2][1]) + eff[2].x[1]*S2924[2][2]) + a24[6]*S2924[2][3] + a24[2]*(eff[2].x[3]*S2924[2][1] - eff[2].x[1]*S2924[2][3]) + a24[1]*(-(eff[2].x[3]*S2924[2][2]) + eff[2].x[2]*S2924[2][3]);
a29[6]=a24[4]*S2924[3][1] + a24[5]*S2924[3][2] + a24[3]*(-(eff[2].x[2]*S2924[3][1]) + eff[2].x[1]*S2924[3][2]) + a24[6]*S2924[3][3] + a24[2]*(eff[2].x[3]*S2924[3][1] - eff[2].x[1]*S2924[3][3]) + a24[1]*(-(eff[2].x[3]*S2924[3][2]) + eff[2].x[2]*S2924[3][3]);

/* inverse dynamics torques */
state[14].uff=p2[6] + a2[1]*JA2[6][1] + a2[2]*JA2[6][2] + a2[3]*JA2[6][3] + a2[4]*JA2[6][4] + a2[5]*JA2[6][5];
state[15].uff=-p3[5] - a3[1]*JA3[5][1] - a3[2]*JA3[5][2] - a3[3]*JA3[5][3] - a3[4]*JA3[5][4] - a3[5]*JA3[5][5] - a3[6]*JA3[5][6];
state[16].uff=p4[4] + a4[1]*JA4[4][1] + a4[2]*JA4[4][2] + a4[3]*JA4[4][3] + a4[4]*JA4[4][4] + a4[5]*JA4[4][5] + a4[6]*JA4[4][6];
state[17].uff=p5[6] + a5[1]*JA5[6][1] + a5[2]*JA5[6][2] + a5[3]*JA5[6][3] + a5[4]*JA5[6][4] + a5[5]*JA5[6][5];
state[13].uff=p7[6] + a7[1]*JA7[6][1] + a7[2]*JA7[6][2] + a7[3]*JA7[6][3] + a7[4]*JA7[6][4] + a7[5]*JA7[6][5];
state[1].uff=p8[6] + a8[1]*JA8[6][1] + a8[2]*JA8[6][2] + a8[3]*JA8[6][3] + a8[4]*JA8[6][4] + a8[5]*JA8[6][5] + a8[6]*JA8[6][6];
state[2].uff=p9[6] + a9[1]*JA9[6][1] + a9[2]*JA9[6][2] + a9[3]*JA9[6][3] + a9[4]*JA9[6][4] + a9[5]*JA9[6][5] + a9[6]*JA9[6][6];
state[3].uff=p10[6] + a10[1]*JA10[6][1] + a10[2]*JA10[6][2] + a10[3]*JA10[6][3] + a10[4]*JA10[6][4] + a10[5]*JA10[6][5] + a10[6]*JA10[6][6];
state[4].uff=p11[6] + a11[1]*JA11[6][1] + a11[2]*JA11[6][2] + a11[3]*JA11[6][3] + a11[4]*JA11[6][4] + a11[5]*JA11[6][5] + a11[6]*JA11[6][6];
state[5].uff=p12[6] + a12[1]*JA12[6][1] + a12[2]*JA12[6][2] + a12[3]*JA12[6][3] + a12[4]*JA12[6][4] + a12[5]*JA12[6][5] + a12[6]*JA12[6][6];
state[6].uff=p13[6] + a13[1]*JA13[6][1] + a13[2]*JA13[6][2] + a13[3]*JA13[6][3] + a13[4]*JA13[6][4] + a13[5]*JA13[6][5] + a13[6]*JA13[6][6];
state[7].uff=p19[6] + a19[1]*JA19[6][1] + a19[2]*JA19[6][2] + a19[3]*JA19[6][3] + a19[4]*JA19[6][4] + a19[5]*JA19[6][5] + a19[6]*JA19[6][6];
state[8].uff=p20[6] + a20[1]*JA20[6][1] + a20[2]*JA20[6][2] + a20[3]*JA20[6][3] + a20[4]*JA20[6][4] + a20[5]*JA20[6][5] + a20[6]*JA20[6][6];
state[9].uff=p21[6] + a21[1]*JA21[6][1] + a21[2]*JA21[6][2] + a21[3]*JA21[6][3] + a21[4]*JA21[6][4] + a21[5]*JA21[6][5] + a21[6]*JA21[6][6];
state[10].uff=p22[6] + a22[1]*JA22[6][1] + a22[2]*JA22[6][2] + a22[3]*JA22[6][3] + a22[4]*JA22[6][4] + a22[5]*JA22[6][5] + a22[6]*JA22[6][6];
state[11].uff=p23[6] + a23[1]*JA23[6][1] + a23[2]*JA23[6][2] + a23[3]*JA23[6][3] + a23[4]*JA23[6][4] + a23[5]*JA23[6][5] + a23[6]*JA23[6][6];
state[12].uff=p24[6] + a24[1]*JA24[6][1] + a24[2]*JA24[6][2] + a24[3]*JA24[6][3] + a24[4]*JA24[6][4] + a24[5]*JA24[6][5] + a24[6]*JA24[6][6];

