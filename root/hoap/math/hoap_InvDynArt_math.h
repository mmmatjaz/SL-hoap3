/* sine and cosine precomputation */
sstate22th=Sin(state[22].th);
cstate22th=Cos(state[22].th);

sstate24th=Sin(state[24].th);
cstate24th=Cos(state[24].th);

sstate21th=Sin(state[21].th);
cstate21th=Cos(state[21].th);

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

sstate11th=Sin(state[11].th);
cstate11th=Cos(state[11].th);

sstate12th=Sin(state[12].th);
cstate12th=Cos(state[12].th);

sstate13th=Sin(state[13].th);
cstate13th=Cos(state[13].th);

sstate14th=Sin(state[14].th);
cstate14th=Cos(state[14].th);

sstate15th=Sin(state[15].th);
cstate15th=Cos(state[15].th);

sstate16th=Sin(state[16].th);
cstate16th=Cos(state[16].th);

sstate7th=Sin(state[7].th);
cstate7th=Cos(state[7].th);

sstate8th=Sin(state[8].th);
cstate8th=Cos(state[8].th);

sstate9th=Sin(state[9].th);
cstate9th=Cos(state[9].th);

sstate10th=Sin(state[10].th);
cstate10th=Cos(state[10].th);

sstate17th=Sin(state[17].th);
cstate17th=Cos(state[17].th);

sstate18th=Sin(state[18].th);
cstate18th=Cos(state[18].th);

sstate19th=Sin(state[19].th);
cstate19th=Cos(state[19].th);

sstate20th=Sin(state[20].th);
cstate20th=Cos(state[20].th);

sstate27th=Sin(state[27].th);
cstate27th=Cos(state[27].th);

sstate28th=Sin(state[28].th);
cstate28th=Cos(state[28].th);


/* rotation matrix sine and cosine precomputation */












rseff1a1=Sin(eff[1].a[1]);
rceff1a1=Cos(eff[1].a[1]);

rseff1a2=Sin(eff[1].a[2]);
rceff1a2=Cos(eff[1].a[2]);

rseff1a3=Sin(eff[1].a[3]);
rceff1a3=Cos(eff[1].a[3]);













rseff3a1=Sin(eff[3].a[1]);
rceff3a1=Cos(eff[3].a[1]);

rseff3a2=Sin(eff[3].a[2]);
rceff3a2=Cos(eff[3].a[2]);

rseff3a3=Sin(eff[3].a[3]);
rceff3a3=Cos(eff[3].a[3]);














rseff2a1=Sin(eff[2].a[1]);
rceff2a1=Cos(eff[2].a[1]);

rseff2a2=Sin(eff[2].a[2]);
rceff2a2=Cos(eff[2].a[2]);

rseff2a3=Sin(eff[2].a[3]);
rceff2a3=Cos(eff[2].a[3]);










rseff4a1=Sin(eff[4].a[1]);
rceff4a1=Cos(eff[4].a[1]);

rseff4a2=Sin(eff[4].a[2]);
rceff4a2=Cos(eff[4].a[2]);

rseff4a3=Sin(eff[4].a[3]);
rceff4a3=Cos(eff[4].a[3]);



hoap_InvDynArtfunc1();

hoap_InvDynArtfunc2();

hoap_InvDynArtfunc3();

hoap_InvDynArtfunc4();

hoap_InvDynArtfunc5();

hoap_InvDynArtfunc6();

hoap_InvDynArtfunc7();

hoap_InvDynArtfunc8();

hoap_InvDynArtfunc9();

hoap_InvDynArtfunc10();

hoap_InvDynArtfunc11();

hoap_InvDynArtfunc12();

hoap_InvDynArtfunc13();

hoap_InvDynArtfunc14();

hoap_InvDynArtfunc15();

hoap_InvDynArtfunc16();

hoap_InvDynArtfunc17();

hoap_InvDynArtfunc18();

hoap_InvDynArtfunc19();

hoap_InvDynArtfunc20();

hoap_InvDynArtfunc21();

hoap_InvDynArtfunc22();

hoap_InvDynArtfunc23();

hoap_InvDynArtfunc24();

hoap_InvDynArtfunc25();

hoap_InvDynArtfunc26();

hoap_InvDynArtfunc27();

hoap_InvDynArtfunc28();

hoap_InvDynArtfunc29();

hoap_InvDynArtfunc30();

hoap_InvDynArtfunc31();

hoap_InvDynArtfunc32();

hoap_InvDynArtfunc33();

hoap_InvDynArtfunc34();

hoap_InvDynArtfunc35();

hoap_InvDynArtfunc36();

hoap_InvDynArtfunc37();

hoap_InvDynArtfunc38();

hoap_InvDynArtfunc39();

hoap_InvDynArtfunc40();

hoap_InvDynArtfunc41();

hoap_InvDynArtfunc42();

hoap_InvDynArtfunc43();

hoap_InvDynArtfunc44();

hoap_InvDynArtfunc45();

hoap_InvDynArtfunc46();

hoap_InvDynArtfunc47();

hoap_InvDynArtfunc48();

hoap_InvDynArtfunc49();

hoap_InvDynArtfunc50();

hoap_InvDynArtfunc51();

hoap_InvDynArtfunc52();

hoap_InvDynArtfunc53();

hoap_InvDynArtfunc54();

hoap_InvDynArtfunc55();

/* acceleration vectors, base acceleration, and joint torques */
a2[1]=c2[1];
a2[2]=c2[2];
a2[3]=state[22].thdd;
a2[4]=c2[4];
a2[5]=c2[5];

a3[1]=a2[1];
a3[2]=-a2[3];
a3[3]=a2[2];
a3[4]=HEADLINK1*a2[2] + a2[4];
a3[5]=HEADLINK2*a2[2];
a3[6]=-(HEADLINK1*a2[1]) + HEADLINK2*a2[3] + a2[5];

a4[1]=c4[1] + a3[1]*S43[1][1] + a3[3]*S43[1][3];
a4[2]=c4[2] + a3[1]*S43[2][1] + a3[3]*S43[2][3];
a4[3]=state[24].thdd - a3[2];
a4[4]=c4[4] + a3[4]*S43[1][1] + a3[6]*S43[1][3];
a4[5]=c4[5] + a3[4]*S43[2][1] + a3[6]*S43[2][3];
a4[6]=-a3[5];

a5[1]=c5[1];
a5[2]=c5[2];
a5[3]=state[21].thdd;
a5[4]=c5[4];
a5[5]=c5[5];

a6[1]=c6[1] + a5[1]*S65[1][1] + a5[3]*S65[1][3];
a6[2]=c6[2] + a5[1]*S65[2][1] + a5[3]*S65[2][3];
a6[3]=state[1].thdd + a5[2];
a6[4]=c6[4] + WAISTLINK1*a5[3]*S65[1][1] + a5[4]*S65[1][1] - WAISTLINK1*a5[1]*S65[1][3] + a5[2]*(LEGLINK1*S65[1][1] + WAISTLINK2*S65[1][3]);
a6[5]=c6[5] + WAISTLINK1*a5[3]*S65[2][1] + a5[4]*S65[2][1] - WAISTLINK1*a5[1]*S65[2][3] + a5[2]*(LEGLINK1*S65[2][1] + WAISTLINK2*S65[2][3]);
a6[6]=-(LEGLINK1*a5[1]) - WAISTLINK2*a5[3] + a5[5];

a7[1]=c7[1] + a6[1]*S76[1][1] + a6[3]*S76[1][3];
a7[2]=c7[2] + a6[1]*S76[2][1] + a6[3]*S76[2][3];
a7[3]=state[2].thdd - a6[2];
a7[4]=c7[4] + a6[4]*S76[1][1] + a6[6]*S76[1][3];
a7[5]=c7[5] + a6[4]*S76[2][1] + a6[6]*S76[2][3];
a7[6]=-a6[5];

a8[1]=c8[1] + a7[1]*S87[1][1] + a7[3]*S87[1][3];
a8[2]=c8[2] + a7[1]*S87[2][1] + a7[3]*S87[2][3];
a8[3]=state[3].thdd - a7[2];
a8[4]=c8[4] + a7[4]*S87[1][1] + a7[6]*S87[1][3];
a8[5]=c8[5] + a7[4]*S87[2][1] + a7[6]*S87[2][3];
a8[6]=-a7[5];

a9[1]=c9[1] + a8[1]*S98[1][1] + a8[2]*S98[1][2];
a9[2]=c9[2] + a8[1]*S98[2][1] + a8[2]*S98[2][2];
a9[3]=state[4].thdd + a8[3];
a9[4]=c9[4] + a8[4]*S98[1][1] - LEGLINK2*a8[3]*S98[1][2] + a8[5]*S98[1][2];
a9[5]=c9[5] + a8[4]*S98[2][1] - LEGLINK2*a8[3]*S98[2][2] + a8[5]*S98[2][2];
a9[6]=LEGLINK2*a8[2] + a8[6];

a10[1]=c10[1] + a9[1]*S109[1][1] + a9[2]*S109[1][2];
a10[2]=c10[2] + a9[1]*S109[2][1] + a9[2]*S109[2][2];
a10[3]=state[5].thdd + a9[3];
a10[4]=c10[4] + a9[4]*S109[1][1] - LEGLINK3*a9[3]*S109[1][2] + a9[5]*S109[1][2];
a10[5]=c10[5] + a9[4]*S109[2][1] - LEGLINK3*a9[3]*S109[2][2] + a9[5]*S109[2][2];
a10[6]=LEGLINK3*a9[2] + a9[6];

a11[1]=c11[1] + a10[1]*S1110[1][1] + a10[3]*S1110[1][3];
a11[2]=c11[2] + a10[1]*S1110[2][1] + a10[3]*S1110[2][3];
a11[3]=state[6].thdd + a10[2];
a11[4]=c11[4] + a10[4]*S1110[1][1] + a10[6]*S1110[1][3];
a11[5]=c11[5] + a10[4]*S1110[2][1] + a10[6]*S1110[2][3];
a11[6]=a10[5];

a12[1]=a11[3];
a12[2]=-a11[2];
a12[3]=a11[1];
a12[4]=a11[6];
a12[5]=-a11[5];
a12[6]=a11[4];

a13[1]=a12[1]*S1312[1][1] + a12[2]*S1312[1][2] + a12[3]*S1312[1][3];
a13[2]=a12[1]*S1312[2][1] + a12[2]*S1312[2][2] + a12[3]*S1312[2][3];
a13[3]=a12[1]*S1312[3][1] + a12[2]*S1312[3][2] + a12[3]*S1312[3][3];
a13[4]=a12[4]*S1312[1][1] + a12[5]*S1312[1][2] + a12[3]*(-(eff[1].x[2]*S1312[1][1]) + eff[1].x[1]*S1312[1][2]) + a12[6]*S1312[1][3] + a12[2]*(eff[1].x[3]*S1312[1][1] - eff[1].x[1]*S1312[1][3]) + a12[1]*(-(eff[1].x[3]*S1312[1][2]) + eff[1].x[2]*S1312[1][3]);
a13[5]=a12[4]*S1312[2][1] + a12[5]*S1312[2][2] + a12[3]*(-(eff[1].x[2]*S1312[2][1]) + eff[1].x[1]*S1312[2][2]) + a12[6]*S1312[2][3] + a12[2]*(eff[1].x[3]*S1312[2][1] - eff[1].x[1]*S1312[2][3]) + a12[1]*(-(eff[1].x[3]*S1312[2][2]) + eff[1].x[2]*S1312[2][3]);
a13[6]=a12[4]*S1312[3][1] + a12[5]*S1312[3][2] + a12[3]*(-(eff[1].x[2]*S1312[3][1]) + eff[1].x[1]*S1312[3][2]) + a12[6]*S1312[3][3] + a12[2]*(eff[1].x[3]*S1312[3][1] - eff[1].x[1]*S1312[3][3]) + a12[1]*(-(eff[1].x[3]*S1312[3][2]) + eff[1].x[2]*S1312[3][3]);

a14[1]=a11[1];
a14[2]=a11[2];
a14[3]=a11[3];
a14[4]=-(LEGLINK4*a11[2]) - FOOTWIDLONG*a11[3] + a11[4];
a14[5]=LEGLINK4*a11[1] + FOOTLLENGLONG*a11[3] + a11[5];
a14[6]=FOOTWIDLONG*a11[1] - FOOTLLENGLONG*a11[2] + a11[6];

a15[1]=a11[1];
a15[2]=a11[2];
a15[3]=a11[3];
a15[4]=-(LEGLINK4*a11[2]) + FOOTWIDSHORT*a11[3] + a11[4];
a15[5]=LEGLINK4*a11[1] + FOOTLLENGLONG*a11[3] + a11[5];
a15[6]=-(FOOTWIDSHORT*a11[1]) - FOOTLLENGLONG*a11[2] + a11[6];

a16[1]=a11[1];
a16[2]=a11[2];
a16[3]=a11[3];
a16[4]=-(LEGLINK4*a11[2]) + FOOTWIDSHORT*a11[3] + a11[4];
a16[5]=LEGLINK4*a11[1] - FOOTLENGSHORT*a11[3] + a11[5];
a16[6]=-(FOOTWIDSHORT*a11[1]) + FOOTLENGSHORT*a11[2] + a11[6];

a17[1]=a11[1];
a17[2]=a11[2];
a17[3]=a11[3];
a17[4]=-(LEGLINK4*a11[2]) - FOOTWIDLONG*a11[3] + a11[4];
a17[5]=LEGLINK4*a11[1] - FOOTLENGSHORT*a11[3] + a11[5];
a17[6]=FOOTWIDLONG*a11[1] + FOOTLENGSHORT*a11[2] + a11[6];

a18[1]=c18[1] + a5[1]*S185[1][1] + a5[3]*S185[1][3];
a18[2]=c18[2] + a5[1]*S185[2][1] + a5[3]*S185[2][3];
a18[3]=state[11].thdd + a5[2];
a18[4]=c18[4] + WAISTLINK1*a5[3]*S185[1][1] + a5[4]*S185[1][1] - WAISTLINK1*a5[1]*S185[1][3] + a5[2]*(-(LEGLINK1*S185[1][1]) + WAISTLINK2*S185[1][3]);
a18[5]=c18[5] + WAISTLINK1*a5[3]*S185[2][1] + a5[4]*S185[2][1] - WAISTLINK1*a5[1]*S185[2][3] + a5[2]*(-(LEGLINK1*S185[2][1]) + WAISTLINK2*S185[2][3]);
a18[6]=LEGLINK1*a5[1] - WAISTLINK2*a5[3] + a5[5];

a19[1]=c19[1] + a18[1]*S1918[1][1] + a18[3]*S1918[1][3];
a19[2]=c19[2] + a18[1]*S1918[2][1] + a18[3]*S1918[2][3];
a19[3]=state[12].thdd - a18[2];
a19[4]=c19[4] + a18[4]*S1918[1][1] + a18[6]*S1918[1][3];
a19[5]=c19[5] + a18[4]*S1918[2][1] + a18[6]*S1918[2][3];
a19[6]=-a18[5];

a20[1]=c20[1] + a19[1]*S2019[1][1] + a19[3]*S2019[1][3];
a20[2]=c20[2] + a19[1]*S2019[2][1] + a19[3]*S2019[2][3];
a20[3]=state[13].thdd - a19[2];
a20[4]=c20[4] + a19[4]*S2019[1][1] + a19[6]*S2019[1][3];
a20[5]=c20[5] + a19[4]*S2019[2][1] + a19[6]*S2019[2][3];
a20[6]=-a19[5];

a21[1]=c21[1] + a20[1]*S2120[1][1] + a20[2]*S2120[1][2];
a21[2]=c21[2] + a20[1]*S2120[2][1] + a20[2]*S2120[2][2];
a21[3]=state[14].thdd + a20[3];
a21[4]=c21[4] + a20[4]*S2120[1][1] - LEGLINK2*a20[3]*S2120[1][2] + a20[5]*S2120[1][2];
a21[5]=c21[5] + a20[4]*S2120[2][1] - LEGLINK2*a20[3]*S2120[2][2] + a20[5]*S2120[2][2];
a21[6]=LEGLINK2*a20[2] + a20[6];

a22[1]=c22[1] + a21[1]*S2221[1][1] + a21[2]*S2221[1][2];
a22[2]=c22[2] + a21[1]*S2221[2][1] + a21[2]*S2221[2][2];
a22[3]=state[15].thdd + a21[3];
a22[4]=c22[4] + a21[4]*S2221[1][1] - LEGLINK3*a21[3]*S2221[1][2] + a21[5]*S2221[1][2];
a22[5]=c22[5] + a21[4]*S2221[2][1] - LEGLINK3*a21[3]*S2221[2][2] + a21[5]*S2221[2][2];
a22[6]=LEGLINK3*a21[2] + a21[6];

a23[1]=c23[1] + a22[1]*S2322[1][1] + a22[3]*S2322[1][3];
a23[2]=c23[2] + a22[1]*S2322[2][1] + a22[3]*S2322[2][3];
a23[3]=state[16].thdd + a22[2];
a23[4]=c23[4] + a22[4]*S2322[1][1] + a22[6]*S2322[1][3];
a23[5]=c23[5] + a22[4]*S2322[2][1] + a22[6]*S2322[2][3];
a23[6]=a22[5];

a24[1]=a23[3];
a24[2]=-a23[2];
a24[3]=a23[1];
a24[4]=LEGLINK4*a23[2] + a23[6];
a24[5]=LEGLINK4*a23[3] - a23[5];
a24[6]=a23[4];

a25[1]=a24[1]*S2524[1][1] + a24[2]*S2524[1][2] + a24[3]*S2524[1][3];
a25[2]=a24[1]*S2524[2][1] + a24[2]*S2524[2][2] + a24[3]*S2524[2][3];
a25[3]=a24[1]*S2524[3][1] + a24[2]*S2524[3][2] + a24[3]*S2524[3][3];
a25[4]=a24[4]*S2524[1][1] + a24[5]*S2524[1][2] + a24[3]*(-(eff[3].x[2]*S2524[1][1]) + eff[3].x[1]*S2524[1][2]) + a24[6]*S2524[1][3] + a24[2]*(eff[3].x[3]*S2524[1][1] - eff[3].x[1]*S2524[1][3]) + a24[1]*(-(eff[3].x[3]*S2524[1][2]) + eff[3].x[2]*S2524[1][3]);
a25[5]=a24[4]*S2524[2][1] + a24[5]*S2524[2][2] + a24[3]*(-(eff[3].x[2]*S2524[2][1]) + eff[3].x[1]*S2524[2][2]) + a24[6]*S2524[2][3] + a24[2]*(eff[3].x[3]*S2524[2][1] - eff[3].x[1]*S2524[2][3]) + a24[1]*(-(eff[3].x[3]*S2524[2][2]) + eff[3].x[2]*S2524[2][3]);
a25[6]=a24[4]*S2524[3][1] + a24[5]*S2524[3][2] + a24[3]*(-(eff[3].x[2]*S2524[3][1]) + eff[3].x[1]*S2524[3][2]) + a24[6]*S2524[3][3] + a24[2]*(eff[3].x[3]*S2524[3][1] - eff[3].x[1]*S2524[3][3]) + a24[1]*(-(eff[3].x[3]*S2524[3][2]) + eff[3].x[2]*S2524[3][3]);

a26[1]=a23[1];
a26[2]=a23[2];
a26[3]=a23[3];
a26[4]=-(LEGLINK4*a23[2]) - FOOTWIDLONG*a23[3] + a23[4];
a26[5]=LEGLINK4*a23[1] + FOOTLLENGLONG*a23[3] + a23[5];
a26[6]=FOOTWIDLONG*a23[1] - FOOTLLENGLONG*a23[2] + a23[6];

a27[1]=a23[1];
a27[2]=a23[2];
a27[3]=a23[3];
a27[4]=-(LEGLINK4*a23[2]) + FOOTWIDSHORT*a23[3] + a23[4];
a27[5]=LEGLINK4*a23[1] + FOOTLLENGLONG*a23[3] + a23[5];
a27[6]=-(FOOTWIDSHORT*a23[1]) - FOOTLLENGLONG*a23[2] + a23[6];

a28[1]=a23[1];
a28[2]=a23[2];
a28[3]=a23[3];
a28[4]=-(LEGLINK4*a23[2]) + FOOTWIDSHORT*a23[3] + a23[4];
a28[5]=LEGLINK4*a23[1] - FOOTLENGSHORT*a23[3] + a23[5];
a28[6]=-(FOOTWIDSHORT*a23[1]) + FOOTLENGSHORT*a23[2] + a23[6];

a29[1]=a23[1];
a29[2]=a23[2];
a29[3]=a23[3];
a29[4]=-(LEGLINK4*a23[2]) - FOOTWIDLONG*a23[3] + a23[4];
a29[5]=LEGLINK4*a23[1] - FOOTLENGSHORT*a23[3] + a23[5];
a29[6]=FOOTWIDLONG*a23[1] + FOOTLENGSHORT*a23[2] + a23[6];

a30[1]=c30[1];
a30[2]=c30[2];
a30[3]=state[7].thdd;
a30[4]=c30[4];
a30[5]=c30[5];

a31[1]=c31[1] + a30[1]*S3130[1][1] + a30[3]*S3130[1][3];
a31[2]=c31[2] + a30[1]*S3130[2][1] + a30[3]*S3130[2][3];
a31[3]=state[8].thdd - a30[2];
a31[4]=c31[4] + a30[4]*S3130[1][1];
a31[5]=c31[5] + a30[4]*S3130[2][1];
a31[6]=-a30[5];

a32[1]=c32[1] + a31[1]*S3231[1][1] + a31[3]*S3231[1][3];
a32[2]=c32[2] + a31[1]*S3231[2][1] + a31[3]*S3231[2][3];
a32[3]=state[9].thdd - a31[2];
a32[4]=c32[4] + ARMLINK2*a31[3]*S3231[1][1] + a31[4]*S3231[1][1] - ARMLINK2*a31[1]*S3231[1][3] + a31[6]*S3231[1][3];
a32[5]=c32[5] + ARMLINK2*a31[3]*S3231[2][1] + a31[4]*S3231[2][1] - ARMLINK2*a31[1]*S3231[2][3] + a31[6]*S3231[2][3];
a32[6]=-a31[5];

a33[1]=c33[1] + a32[1]*S3332[1][1] + a32[3]*S3332[1][3];
a33[2]=c33[2] + a32[1]*S3332[2][1] + a32[3]*S3332[2][3];
a33[3]=state[10].thdd - a32[2];
a33[4]=c33[4] + a32[4]*S3332[1][1] + a32[6]*S3332[1][3];
a33[5]=c33[5] + a32[4]*S3332[2][1] + a32[6]*S3332[2][3];
a33[6]=-a32[5];

a34[1]=a33[3];
a34[2]=a33[1];
a34[3]=a33[2];
a34[4]=ARMLINK3*a33[1] + a33[6];
a34[5]=-(ARMLINK3*a33[3]) + a33[4];
a34[6]=a33[5];

a35[1]=a34[2];
a35[2]=a34[3];
a35[3]=a34[1];
a35[4]=-(GRIPJOFFZ*a34[1]) + GRIPJOFFX*a34[3] + a34[5];
a35[5]=-(GRIPJOFFX*a34[2]) + a34[6];
a35[6]=GRIPJOFFZ*a34[2] + a34[4];

a36[1]=a35[1];
a36[2]=a35[2];
a36[3]=a35[3];
a36[4]=a35[4];
a36[5]=FINGER*a35[3] + a35[5];
a36[6]=-(FINGER*a35[2]) + a35[6];

a37[1]=a34[1];
a37[2]=a34[2];
a37[3]=a34[3];
a37[4]=PALM*a34[2] + a34[4];
a37[5]=-(PALM*a34[1]) - PALMOFFSETX*a34[3] + a34[5];
a37[6]=PALMOFFSETX*a34[2] + a34[6];

a38[1]=a37[1]*S3837[1][1] + a37[2]*S3837[1][2] + a37[3]*S3837[1][3];
a38[2]=a37[1]*S3837[2][1] + a37[2]*S3837[2][2] + a37[3]*S3837[2][3];
a38[3]=a37[1]*S3837[3][1] + a37[2]*S3837[3][2] + a37[3]*S3837[3][3];
a38[4]=a37[4]*S3837[1][1] + a37[5]*S3837[1][2] + a37[3]*(-(eff[2].x[2]*S3837[1][1]) + eff[2].x[1]*S3837[1][2]) + a37[6]*S3837[1][3] + a37[2]*(eff[2].x[3]*S3837[1][1] - eff[2].x[1]*S3837[1][3]) + a37[1]*(-(eff[2].x[3]*S3837[1][2]) + eff[2].x[2]*S3837[1][3]);
a38[5]=a37[4]*S3837[2][1] + a37[5]*S3837[2][2] + a37[3]*(-(eff[2].x[2]*S3837[2][1]) + eff[2].x[1]*S3837[2][2]) + a37[6]*S3837[2][3] + a37[2]*(eff[2].x[3]*S3837[2][1] - eff[2].x[1]*S3837[2][3]) + a37[1]*(-(eff[2].x[3]*S3837[2][2]) + eff[2].x[2]*S3837[2][3]);
a38[6]=a37[4]*S3837[3][1] + a37[5]*S3837[3][2] + a37[3]*(-(eff[2].x[2]*S3837[3][1]) + eff[2].x[1]*S3837[3][2]) + a37[6]*S3837[3][3] + a37[2]*(eff[2].x[3]*S3837[3][1] - eff[2].x[1]*S3837[3][3]) + a37[1]*(-(eff[2].x[3]*S3837[3][2]) + eff[2].x[2]*S3837[3][3]);

a39[1]=c39[1];
a39[2]=c39[2];
a39[3]=state[17].thdd;
a39[4]=c39[4];
a39[5]=c39[5];

a40[1]=c40[1] + a39[1]*S4039[1][1] + a39[3]*S4039[1][3];
a40[2]=c40[2] + a39[1]*S4039[2][1] + a39[3]*S4039[2][3];
a40[3]=state[18].thdd - a39[2];
a40[4]=c40[4] + a39[4]*S4039[1][1];
a40[5]=c40[5] + a39[4]*S4039[2][1];
a40[6]=-a39[5];

a41[1]=c41[1] + a40[1]*S4140[1][1] + a40[3]*S4140[1][3];
a41[2]=c41[2] + a40[1]*S4140[2][1] + a40[3]*S4140[2][3];
a41[3]=state[19].thdd - a40[2];
a41[4]=c41[4] + ARMLINK2*a40[3]*S4140[1][1] + a40[4]*S4140[1][1] - ARMLINK2*a40[1]*S4140[1][3] + a40[6]*S4140[1][3];
a41[5]=c41[5] + ARMLINK2*a40[3]*S4140[2][1] + a40[4]*S4140[2][1] - ARMLINK2*a40[1]*S4140[2][3] + a40[6]*S4140[2][3];
a41[6]=-a40[5];

a42[1]=c42[1] + a41[1]*S4241[1][1] + a41[3]*S4241[1][3];
a42[2]=c42[2] + a41[1]*S4241[2][1] + a41[3]*S4241[2][3];
a42[3]=state[20].thdd - a41[2];
a42[4]=c42[4] + a41[4]*S4241[1][1] + a41[6]*S4241[1][3];
a42[5]=c42[5] + a41[4]*S4241[2][1] + a41[6]*S4241[2][3];
a42[6]=-a41[5];

a43[1]=c43[1] + a42[1]*S4342[1][1] + a42[3]*S4342[1][3];
a43[2]=c43[2] + a42[1]*S4342[2][1] + a42[3]*S4342[2][3];
a43[3]=state[27].thdd + a42[2];
a43[4]=c43[4] - ARMLINK3*a42[3]*S4342[1][1] + a42[4]*S4342[1][1] + ARMLINK3*a42[1]*S4342[1][3] + a42[6]*S4342[1][3];
a43[5]=c43[5] - ARMLINK3*a42[3]*S4342[2][1] + a42[4]*S4342[2][1] + ARMLINK3*a42[1]*S4342[2][3] + a42[6]*S4342[2][3];
a43[6]=a42[5];

a44[1]=c44[1] + a43[2]*S4443[1][2] + a43[3]*S4443[1][3];
a44[2]=c44[2] + a43[2]*S4443[2][2] + a43[3]*S4443[2][3];
a44[3]=state[28].thdd + a43[1];
a44[4]=c44[4] - GRIPJOFFZ*a43[1]*S4443[1][2] - GRIPJOFFX*a43[3]*S4443[1][2] + a43[5]*S4443[1][2] + GRIPJOFFX*a43[2]*S4443[1][3] + a43[6]*S4443[1][3];
a44[5]=c44[5] - GRIPJOFFZ*a43[1]*S4443[2][2] - GRIPJOFFX*a43[3]*S4443[2][2] + a43[5]*S4443[2][2] + GRIPJOFFX*a43[2]*S4443[2][3] + a43[6]*S4443[2][3];
a44[6]=GRIPJOFFZ*a43[2] + a43[4];

a45[1]=a44[1];
a45[2]=a44[2];
a45[3]=a44[3];
a45[4]=a44[4];
a45[5]=FINGER*a44[3] + a44[5];
a45[6]=-(FINGER*a44[2]) + a44[6];

a46[1]=a43[1];
a46[2]=a43[2];
a46[3]=a43[3];
a46[4]=PALM*a43[2] + a43[4];
a46[5]=-(PALM*a43[1]) - PALMOFFSETX*a43[3] + a43[5];
a46[6]=PALMOFFSETX*a43[2] + a43[6];

a47[1]=a46[1]*S4746[1][1] + a46[2]*S4746[1][2] + a46[3]*S4746[1][3];
a47[2]=a46[1]*S4746[2][1] + a46[2]*S4746[2][2] + a46[3]*S4746[2][3];
a47[3]=a46[1]*S4746[3][1] + a46[2]*S4746[3][2] + a46[3]*S4746[3][3];
a47[4]=a46[4]*S4746[1][1] + a46[5]*S4746[1][2] + a46[3]*(-(eff[4].x[2]*S4746[1][1]) + eff[4].x[1]*S4746[1][2]) + a46[6]*S4746[1][3] + a46[2]*(eff[4].x[3]*S4746[1][1] - eff[4].x[1]*S4746[1][3]) + a46[1]*(-(eff[4].x[3]*S4746[1][2]) + eff[4].x[2]*S4746[1][3]);
a47[5]=a46[4]*S4746[2][1] + a46[5]*S4746[2][2] + a46[3]*(-(eff[4].x[2]*S4746[2][1]) + eff[4].x[1]*S4746[2][2]) + a46[6]*S4746[2][3] + a46[2]*(eff[4].x[3]*S4746[2][1] - eff[4].x[1]*S4746[2][3]) + a46[1]*(-(eff[4].x[3]*S4746[2][2]) + eff[4].x[2]*S4746[2][3]);
a47[6]=a46[4]*S4746[3][1] + a46[5]*S4746[3][2] + a46[3]*(-(eff[4].x[2]*S4746[3][1]) + eff[4].x[1]*S4746[3][2]) + a46[6]*S4746[3][3] + a46[2]*(eff[4].x[3]*S4746[3][1] - eff[4].x[1]*S4746[3][3]) + a46[1]*(-(eff[4].x[3]*S4746[3][2]) + eff[4].x[2]*S4746[3][3]);

/* inverse dynamics torques */
state[22].uff=p2[6] + a2[1]*JA2[6][1] + a2[2]*JA2[6][2] + a2[3]*JA2[6][3] + a2[4]*JA2[6][4] + a2[5]*JA2[6][5];
state[24].uff=p4[6] + a4[1]*JA4[6][1] + a4[2]*JA4[6][2] + a4[3]*JA4[6][3] + a4[4]*JA4[6][4] + a4[5]*JA4[6][5];
state[21].uff=p5[6] + a5[1]*JA5[6][1] + a5[2]*JA5[6][2] + a5[3]*JA5[6][3] + a5[4]*JA5[6][4] + a5[5]*JA5[6][5];
state[1].uff=p6[6] + a6[1]*JA6[6][1] + a6[2]*JA6[6][2] + a6[3]*JA6[6][3] + a6[4]*JA6[6][4] + a6[5]*JA6[6][5] + a6[6]*JA6[6][6];
state[2].uff=p7[6] + a7[1]*JA7[6][1] + a7[2]*JA7[6][2] + a7[3]*JA7[6][3] + a7[4]*JA7[6][4] + a7[5]*JA7[6][5] + a7[6]*JA7[6][6];
state[3].uff=p8[6] + a8[1]*JA8[6][1] + a8[2]*JA8[6][2] + a8[3]*JA8[6][3] + a8[4]*JA8[6][4] + a8[5]*JA8[6][5] + a8[6]*JA8[6][6];
state[4].uff=p9[6] + a9[1]*JA9[6][1] + a9[2]*JA9[6][2] + a9[3]*JA9[6][3] + a9[4]*JA9[6][4] + a9[5]*JA9[6][5] + a9[6]*JA9[6][6];
state[5].uff=p10[6] + a10[1]*JA10[6][1] + a10[2]*JA10[6][2] + a10[3]*JA10[6][3] + a10[4]*JA10[6][4] + a10[5]*JA10[6][5] + a10[6]*JA10[6][6];
state[6].uff=p11[6] + a11[1]*JA11[6][1] + a11[2]*JA11[6][2] + a11[3]*JA11[6][3] + a11[4]*JA11[6][4] + a11[5]*JA11[6][5] + a11[6]*JA11[6][6];
state[11].uff=p18[6] + a18[1]*JA18[6][1] + a18[2]*JA18[6][2] + a18[3]*JA18[6][3] + a18[4]*JA18[6][4] + a18[5]*JA18[6][5] + a18[6]*JA18[6][6];
state[12].uff=p19[6] + a19[1]*JA19[6][1] + a19[2]*JA19[6][2] + a19[3]*JA19[6][3] + a19[4]*JA19[6][4] + a19[5]*JA19[6][5] + a19[6]*JA19[6][6];
state[13].uff=p20[6] + a20[1]*JA20[6][1] + a20[2]*JA20[6][2] + a20[3]*JA20[6][3] + a20[4]*JA20[6][4] + a20[5]*JA20[6][5] + a20[6]*JA20[6][6];
state[14].uff=p21[6] + a21[1]*JA21[6][1] + a21[2]*JA21[6][2] + a21[3]*JA21[6][3] + a21[4]*JA21[6][4] + a21[5]*JA21[6][5] + a21[6]*JA21[6][6];
state[15].uff=p22[6] + a22[1]*JA22[6][1] + a22[2]*JA22[6][2] + a22[3]*JA22[6][3] + a22[4]*JA22[6][4] + a22[5]*JA22[6][5] + a22[6]*JA22[6][6];
state[16].uff=p23[6] + a23[1]*JA23[6][1] + a23[2]*JA23[6][2] + a23[3]*JA23[6][3] + a23[4]*JA23[6][4] + a23[5]*JA23[6][5] + a23[6]*JA23[6][6];
state[7].uff=p30[6] + a30[1]*JA30[6][1] + a30[2]*JA30[6][2] + a30[3]*JA30[6][3] + a30[4]*JA30[6][4] + a30[5]*JA30[6][5];
state[8].uff=p31[6] + a31[1]*JA31[6][1] + a31[2]*JA31[6][2] + a31[3]*JA31[6][3] + a31[4]*JA31[6][4] + a31[5]*JA31[6][5] + a31[6]*JA31[6][6];
state[9].uff=p32[6] + a32[1]*JA32[6][1] + a32[2]*JA32[6][2] + a32[3]*JA32[6][3] + a32[4]*JA32[6][4] + a32[5]*JA32[6][5] + a32[6]*JA32[6][6];
state[10].uff=p33[6] + a33[1]*JA33[6][1] + a33[2]*JA33[6][2] + a33[3]*JA33[6][3] + a33[4]*JA33[6][4] + a33[5]*JA33[6][5] + a33[6]*JA33[6][6];
state[17].uff=p39[6] + a39[1]*JA39[6][1] + a39[2]*JA39[6][2] + a39[3]*JA39[6][3] + a39[4]*JA39[6][4] + a39[5]*JA39[6][5];
state[18].uff=p40[6] + a40[1]*JA40[6][1] + a40[2]*JA40[6][2] + a40[3]*JA40[6][3] + a40[4]*JA40[6][4] + a40[5]*JA40[6][5] + a40[6]*JA40[6][6];
state[19].uff=p41[6] + a41[1]*JA41[6][1] + a41[2]*JA41[6][2] + a41[3]*JA41[6][3] + a41[4]*JA41[6][4] + a41[5]*JA41[6][5] + a41[6]*JA41[6][6];
state[20].uff=p42[6] + a42[1]*JA42[6][1] + a42[2]*JA42[6][2] + a42[3]*JA42[6][3] + a42[4]*JA42[6][4] + a42[5]*JA42[6][5] + a42[6]*JA42[6][6];
state[27].uff=p43[6] + a43[1]*JA43[6][1] + a43[2]*JA43[6][2] + a43[3]*JA43[6][3] + a43[4]*JA43[6][4] + a43[5]*JA43[6][5] + a43[6]*JA43[6][6];
state[28].uff=p44[6] + a44[1]*JA44[6][1] + a44[2]*JA44[6][2] + a44[3]*JA44[6][3] + a44[4]*JA44[6][4] + a44[5]*JA44[6][5];
