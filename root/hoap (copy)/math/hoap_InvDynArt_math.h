/* sine and cosine precomputation */
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


/* rotation matrix sine and cosine precomputation */
















rseff4a1=Sin(eff[4].a[1]);
rceff4a1=Cos(eff[4].a[1]);

rseff4a2=Sin(eff[4].a[2]);
rceff4a2=Cos(eff[4].a[2]);

rseff4a3=Sin(eff[4].a[3]);
rceff4a3=Cos(eff[4].a[3]);
















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

/* acceleration vectors, base acceleration, and joint torques */
a2[1]=c2[1];
a2[2]=c2[2];
a2[3]=state[7].thdd;
a2[4]=c2[4];
a2[5]=c2[5];

a3[1]=c3[1] + a2[1]*S32[1][1] + a2[3]*S32[1][3];
a3[2]=c3[2] + a2[1]*S32[2][1] + a2[3]*S32[2][3];
a3[3]=state[8].thdd - a2[2];
a3[4]=c3[4] + a2[4]*S32[1][1];
a3[5]=c3[5] + a2[4]*S32[2][1];
a3[6]=-a2[5];

a4[1]=c4[1] + a3[1]*S43[1][1] + a3[3]*S43[1][3];
a4[2]=c4[2] + a3[1]*S43[2][1] + a3[3]*S43[2][3];
a4[3]=state[9].thdd - a3[2];
a4[4]=c4[4] + ARMLINK2*a3[3]*S43[1][1] + a3[4]*S43[1][1] - ARMLINK2*a3[1]*S43[1][3] + a3[6]*S43[1][3];
a4[5]=c4[5] + ARMLINK2*a3[3]*S43[2][1] + a3[4]*S43[2][1] - ARMLINK2*a3[1]*S43[2][3] + a3[6]*S43[2][3];
a4[6]=-a3[5];

a5[1]=c5[1] + a4[1]*S54[1][1] + a4[3]*S54[1][3];
a5[2]=c5[2] + a4[1]*S54[2][1] + a4[3]*S54[2][3];
a5[3]=state[10].thdd - a4[2];
a5[4]=c5[4] + a4[4]*S54[1][1] + a4[6]*S54[1][3];
a5[5]=c5[5] + a4[4]*S54[2][1] + a4[6]*S54[2][3];
a5[6]=-a4[5];

a6[1]=a5[3];
a6[2]=a5[1];
a6[3]=a5[2];
a6[4]=ARMLINK3*a5[1] + a5[6];
a6[5]=-(ARMLINK3*a5[3]) + a5[4];
a6[6]=a5[5];

a7[1]=a6[2];
a7[2]=a6[3];
a7[3]=a6[1];
a7[4]=-(GRIPJOFFZ*a6[1]) + GRIPJOFFX*a6[3] + a6[5];
a7[5]=-(GRIPJOFFX*a6[2]) + a6[6];
a7[6]=GRIPJOFFZ*a6[2] + a6[4];

a8[1]=a7[1];
a8[2]=a7[2];
a8[3]=a7[3];
a8[4]=a7[4];
a8[5]=FINGER*a7[3] + a7[5];
a8[6]=-(FINGER*a7[2]) + a7[6];

a9[1]=c9[1];
a9[2]=c9[2];
a9[3]=state[17].thdd;
a9[4]=c9[4];
a9[5]=c9[5];

a10[1]=c10[1] + a9[1]*S109[1][1] + a9[3]*S109[1][3];
a10[2]=c10[2] + a9[1]*S109[2][1] + a9[3]*S109[2][3];
a10[3]=state[18].thdd - a9[2];
a10[4]=c10[4] + a9[4]*S109[1][1];
a10[5]=c10[5] + a9[4]*S109[2][1];
a10[6]=-a9[5];

a11[1]=c11[1] + a10[1]*S1110[1][1] + a10[3]*S1110[1][3];
a11[2]=c11[2] + a10[1]*S1110[2][1] + a10[3]*S1110[2][3];
a11[3]=state[19].thdd - a10[2];
a11[4]=c11[4] + ARMLINK2*a10[3]*S1110[1][1] + a10[4]*S1110[1][1] - ARMLINK2*a10[1]*S1110[1][3] + a10[6]*S1110[1][3];
a11[5]=c11[5] + ARMLINK2*a10[3]*S1110[2][1] + a10[4]*S1110[2][1] - ARMLINK2*a10[1]*S1110[2][3] + a10[6]*S1110[2][3];
a11[6]=-a10[5];

a12[1]=c12[1] + a11[1]*S1211[1][1] + a11[3]*S1211[1][3];
a12[2]=c12[2] + a11[1]*S1211[2][1] + a11[3]*S1211[2][3];
a12[3]=state[20].thdd - a11[2];
a12[4]=c12[4] + a11[4]*S1211[1][1] + a11[6]*S1211[1][3];
a12[5]=c12[5] + a11[4]*S1211[2][1] + a11[6]*S1211[2][3];
a12[6]=-a11[5];

a13[1]=c13[1] + a12[1]*S1312[1][1] + a12[3]*S1312[1][3];
a13[2]=c13[2] + a12[1]*S1312[2][1] + a12[3]*S1312[2][3];
a13[3]=state[27].thdd + a12[2];
a13[4]=c13[4] - ARMLINK3*a12[3]*S1312[1][1] + a12[4]*S1312[1][1] + ARMLINK3*a12[1]*S1312[1][3] + a12[6]*S1312[1][3];
a13[5]=c13[5] - ARMLINK3*a12[3]*S1312[2][1] + a12[4]*S1312[2][1] + ARMLINK3*a12[1]*S1312[2][3] + a12[6]*S1312[2][3];
a13[6]=a12[5];

a14[1]=c14[1] + a13[2]*S1413[1][2] + a13[3]*S1413[1][3];
a14[2]=c14[2] + a13[2]*S1413[2][2] + a13[3]*S1413[2][3];
a14[3]=state[28].thdd + a13[1];
a14[4]=c14[4] - GRIPJOFFZ*a13[1]*S1413[1][2] - GRIPJOFFX*a13[3]*S1413[1][2] + a13[5]*S1413[1][2] + GRIPJOFFX*a13[2]*S1413[1][3] + a13[6]*S1413[1][3];
a14[5]=c14[5] - GRIPJOFFZ*a13[1]*S1413[2][2] - GRIPJOFFX*a13[3]*S1413[2][2] + a13[5]*S1413[2][2] + GRIPJOFFX*a13[2]*S1413[2][3] + a13[6]*S1413[2][3];
a14[6]=GRIPJOFFZ*a13[2] + a13[4];

a15[1]=a14[1];
a15[2]=a14[2];
a15[3]=a14[3];
a15[4]=a14[4];
a15[5]=FINGER*a14[3] + a14[5];
a15[6]=-(FINGER*a14[2]) + a14[6];

a16[1]=a13[1];
a16[2]=a13[2];
a16[3]=a13[3];
a16[4]=PALM*a13[2] + a13[4];
a16[5]=-(PALM*a13[1]) - PALMOFFSETX*a13[3] + a13[5];
a16[6]=PALMOFFSETX*a13[2] + a13[6];

a17[1]=a16[1]*S1716[1][1] + a16[2]*S1716[1][2] + a16[3]*S1716[1][3];
a17[2]=a16[1]*S1716[2][1] + a16[2]*S1716[2][2] + a16[3]*S1716[2][3];
a17[3]=a16[1]*S1716[3][1] + a16[2]*S1716[3][2] + a16[3]*S1716[3][3];
a17[4]=a16[4]*S1716[1][1] + a16[5]*S1716[1][2] + a16[3]*(-(eff[4].x[2]*S1716[1][1]) + eff[4].x[1]*S1716[1][2]) + a16[6]*S1716[1][3] + a16[2]*(eff[4].x[3]*S1716[1][1] - eff[4].x[1]*S1716[1][3]) + a16[1]*(-(eff[4].x[3]*S1716[1][2]) + eff[4].x[2]*S1716[1][3]);
a17[5]=a16[4]*S1716[2][1] + a16[5]*S1716[2][2] + a16[3]*(-(eff[4].x[2]*S1716[2][1]) + eff[4].x[1]*S1716[2][2]) + a16[6]*S1716[2][3] + a16[2]*(eff[4].x[3]*S1716[2][1] - eff[4].x[1]*S1716[2][3]) + a16[1]*(-(eff[4].x[3]*S1716[2][2]) + eff[4].x[2]*S1716[2][3]);
a17[6]=a16[4]*S1716[3][1] + a16[5]*S1716[3][2] + a16[3]*(-(eff[4].x[2]*S1716[3][1]) + eff[4].x[1]*S1716[3][2]) + a16[6]*S1716[3][3] + a16[2]*(eff[4].x[3]*S1716[3][1] - eff[4].x[1]*S1716[3][3]) + a16[1]*(-(eff[4].x[3]*S1716[3][2]) + eff[4].x[2]*S1716[3][3]);

a18[1]=c18[1];
a18[2]=c18[2];
a18[3]=state[22].thdd;
a18[4]=c18[4];
a18[5]=c18[5];

a19[1]=a18[1];
a19[2]=-a18[3];
a19[3]=a18[2];
a19[4]=HEADLINK1*a18[2] + a18[4];
a19[5]=HEADLINK2*a18[2];
a19[6]=-(HEADLINK1*a18[1]) + HEADLINK2*a18[3] + a18[5];

a20[1]=c20[1] + a19[1]*S2019[1][1] + a19[3]*S2019[1][3];
a20[2]=c20[2] + a19[1]*S2019[2][1] + a19[3]*S2019[2][3];
a20[3]=state[24].thdd - a19[2];
a20[4]=c20[4] + a19[4]*S2019[1][1] + a19[6]*S2019[1][3];
a20[5]=c20[5] + a19[4]*S2019[2][1] + a19[6]*S2019[2][3];
a20[6]=-a19[5];

a21[1]=c21[1];
a21[2]=c21[2];
a21[3]=state[21].thdd;
a21[4]=c21[4];
a21[5]=c21[5];

a22[1]=c22[1] + a21[1]*S2221[1][1] + a21[3]*S2221[1][3];
a22[2]=c22[2] + a21[1]*S2221[2][1] + a21[3]*S2221[2][3];
a22[3]=state[1].thdd + a21[2];
a22[4]=c22[4] + WAISTLINK1*a21[3]*S2221[1][1] + a21[4]*S2221[1][1] - WAISTLINK1*a21[1]*S2221[1][3] + a21[2]*(LEGLINK1*S2221[1][1] + WAISTLINK2*S2221[1][3]);
a22[5]=c22[5] + WAISTLINK1*a21[3]*S2221[2][1] + a21[4]*S2221[2][1] - WAISTLINK1*a21[1]*S2221[2][3] + a21[2]*(LEGLINK1*S2221[2][1] + WAISTLINK2*S2221[2][3]);
a22[6]=-(LEGLINK1*a21[1]) - WAISTLINK2*a21[3] + a21[5];

a23[1]=c23[1] + a22[1]*S2322[1][1] + a22[3]*S2322[1][3];
a23[2]=c23[2] + a22[1]*S2322[2][1] + a22[3]*S2322[2][3];
a23[3]=state[2].thdd - a22[2];
a23[4]=c23[4] + a22[4]*S2322[1][1] + a22[6]*S2322[1][3];
a23[5]=c23[5] + a22[4]*S2322[2][1] + a22[6]*S2322[2][3];
a23[6]=-a22[5];

a24[1]=c24[1] + a23[1]*S2423[1][1] + a23[3]*S2423[1][3];
a24[2]=c24[2] + a23[1]*S2423[2][1] + a23[3]*S2423[2][3];
a24[3]=state[3].thdd - a23[2];
a24[4]=c24[4] + a23[4]*S2423[1][1] + a23[6]*S2423[1][3];
a24[5]=c24[5] + a23[4]*S2423[2][1] + a23[6]*S2423[2][3];
a24[6]=-a23[5];

a25[1]=c25[1] + a24[1]*S2524[1][1] + a24[2]*S2524[1][2];
a25[2]=c25[2] + a24[1]*S2524[2][1] + a24[2]*S2524[2][2];
a25[3]=state[4].thdd + a24[3];
a25[4]=c25[4] + a24[4]*S2524[1][1] - LEGLINK2*a24[3]*S2524[1][2] + a24[5]*S2524[1][2];
a25[5]=c25[5] + a24[4]*S2524[2][1] - LEGLINK2*a24[3]*S2524[2][2] + a24[5]*S2524[2][2];
a25[6]=LEGLINK2*a24[2] + a24[6];

a26[1]=c26[1] + a25[1]*S2625[1][1] + a25[2]*S2625[1][2];
a26[2]=c26[2] + a25[1]*S2625[2][1] + a25[2]*S2625[2][2];
a26[3]=state[5].thdd + a25[3];
a26[4]=c26[4] + a25[4]*S2625[1][1] - LEGLINK3*a25[3]*S2625[1][2] + a25[5]*S2625[1][2];
a26[5]=c26[5] + a25[4]*S2625[2][1] - LEGLINK3*a25[3]*S2625[2][2] + a25[5]*S2625[2][2];
a26[6]=LEGLINK3*a25[2] + a25[6];

a27[1]=c27[1] + a26[1]*S2726[1][1] + a26[3]*S2726[1][3];
a27[2]=c27[2] + a26[1]*S2726[2][1] + a26[3]*S2726[2][3];
a27[3]=state[6].thdd + a26[2];
a27[4]=c27[4] + a26[4]*S2726[1][1] + a26[6]*S2726[1][3];
a27[5]=c27[5] + a26[4]*S2726[2][1] + a26[6]*S2726[2][3];
a27[6]=a26[5];

a28[1]=a27[1];
a28[2]=a27[2];
a28[3]=a27[3];
a28[4]=FOOTWIDLONG*a27[2] - FOOTLLENGLONG*a27[3] + a27[4];
a28[5]=-(FOOTWIDLONG*a27[1]) - LEGLINK4*a27[3] + a27[5];
a28[6]=FOOTLLENGLONG*a27[1] + LEGLINK4*a27[2] + a27[6];

a29[1]=a27[1];
a29[2]=a27[2];
a29[3]=a27[3];
a29[4]=-(FOOTWIDSHORT*a27[2]) - FOOTLLENGLONG*a27[3] + a27[4];
a29[5]=FOOTWIDSHORT*a27[1] - LEGLINK4*a27[3] + a27[5];
a29[6]=FOOTLLENGLONG*a27[1] + LEGLINK4*a27[2] + a27[6];

a30[1]=a27[1];
a30[2]=a27[2];
a30[3]=a27[3];
a30[4]=-(FOOTWIDSHORT*a27[2]) + FOOTLENGSHORT*a27[3] + a27[4];
a30[5]=FOOTWIDSHORT*a27[1] - LEGLINK4*a27[3] + a27[5];
a30[6]=-(FOOTLENGSHORT*a27[1]) + LEGLINK4*a27[2] + a27[6];

a31[1]=a27[1];
a31[2]=a27[2];
a31[3]=a27[3];
a31[4]=FOOTWIDLONG*a27[2] + FOOTLENGSHORT*a27[3] + a27[4];
a31[5]=-(FOOTWIDLONG*a27[1]) - LEGLINK4*a27[3] + a27[5];
a31[6]=-(FOOTLENGSHORT*a27[1]) + LEGLINK4*a27[2] + a27[6];

a32[1]=a27[1]*S3227[1][1] + a27[2]*S3227[1][2] + a27[3]*S3227[1][3];
a32[2]=a27[1]*S3227[2][1] + a27[2]*S3227[2][2] + a27[3]*S3227[2][3];
a32[3]=a27[1]*S3227[3][1] + a27[2]*S3227[3][2] + a27[3]*S3227[3][3];
a32[4]=a27[4]*S3227[1][1] + a27[5]*S3227[1][2] + a27[3]*(-(eff[1].x[2]*S3227[1][1]) + eff[1].x[1]*S3227[1][2]) + a27[6]*S3227[1][3] + a27[2]*(eff[1].x[3]*S3227[1][1] - eff[1].x[1]*S3227[1][3]) + a27[1]*(-(eff[1].x[3]*S3227[1][2]) + eff[1].x[2]*S3227[1][3]);
a32[5]=a27[4]*S3227[2][1] + a27[5]*S3227[2][2] + a27[3]*(-(eff[1].x[2]*S3227[2][1]) + eff[1].x[1]*S3227[2][2]) + a27[6]*S3227[2][3] + a27[2]*(eff[1].x[3]*S3227[2][1] - eff[1].x[1]*S3227[2][3]) + a27[1]*(-(eff[1].x[3]*S3227[2][2]) + eff[1].x[2]*S3227[2][3]);
a32[6]=a27[4]*S3227[3][1] + a27[5]*S3227[3][2] + a27[3]*(-(eff[1].x[2]*S3227[3][1]) + eff[1].x[1]*S3227[3][2]) + a27[6]*S3227[3][3] + a27[2]*(eff[1].x[3]*S3227[3][1] - eff[1].x[1]*S3227[3][3]) + a27[1]*(-(eff[1].x[3]*S3227[3][2]) + eff[1].x[2]*S3227[3][3]);

a33[1]=c33[1] + a21[1]*S3321[1][1] + a21[3]*S3321[1][3];
a33[2]=c33[2] + a21[1]*S3321[2][1] + a21[3]*S3321[2][3];
a33[3]=state[11].thdd + a21[2];
a33[4]=c33[4] + WAISTLINK1*a21[3]*S3321[1][1] + a21[4]*S3321[1][1] - WAISTLINK1*a21[1]*S3321[1][3] + a21[2]*(-(LEGLINK1*S3321[1][1]) + WAISTLINK2*S3321[1][3]);
a33[5]=c33[5] + WAISTLINK1*a21[3]*S3321[2][1] + a21[4]*S3321[2][1] - WAISTLINK1*a21[1]*S3321[2][3] + a21[2]*(-(LEGLINK1*S3321[2][1]) + WAISTLINK2*S3321[2][3]);
a33[6]=LEGLINK1*a21[1] - WAISTLINK2*a21[3] + a21[5];

a34[1]=c34[1] + a33[1]*S3433[1][1] + a33[3]*S3433[1][3];
a34[2]=c34[2] + a33[1]*S3433[2][1] + a33[3]*S3433[2][3];
a34[3]=state[12].thdd - a33[2];
a34[4]=c34[4] + a33[4]*S3433[1][1] + a33[6]*S3433[1][3];
a34[5]=c34[5] + a33[4]*S3433[2][1] + a33[6]*S3433[2][3];
a34[6]=-a33[5];

a35[1]=c35[1] + a34[1]*S3534[1][1] + a34[3]*S3534[1][3];
a35[2]=c35[2] + a34[1]*S3534[2][1] + a34[3]*S3534[2][3];
a35[3]=state[13].thdd - a34[2];
a35[4]=c35[4] + a34[4]*S3534[1][1] + a34[6]*S3534[1][3];
a35[5]=c35[5] + a34[4]*S3534[2][1] + a34[6]*S3534[2][3];
a35[6]=-a34[5];

a36[1]=c36[1] + a35[1]*S3635[1][1] + a35[2]*S3635[1][2];
a36[2]=c36[2] + a35[1]*S3635[2][1] + a35[2]*S3635[2][2];
a36[3]=state[14].thdd + a35[3];
a36[4]=c36[4] + a35[4]*S3635[1][1] - LEGLINK2*a35[3]*S3635[1][2] + a35[5]*S3635[1][2];
a36[5]=c36[5] + a35[4]*S3635[2][1] - LEGLINK2*a35[3]*S3635[2][2] + a35[5]*S3635[2][2];
a36[6]=LEGLINK2*a35[2] + a35[6];

a37[1]=c37[1] + a36[1]*S3736[1][1] + a36[2]*S3736[1][2];
a37[2]=c37[2] + a36[1]*S3736[2][1] + a36[2]*S3736[2][2];
a37[3]=state[15].thdd + a36[3];
a37[4]=c37[4] + a36[4]*S3736[1][1] - LEGLINK3*a36[3]*S3736[1][2] + a36[5]*S3736[1][2];
a37[5]=c37[5] + a36[4]*S3736[2][1] - LEGLINK3*a36[3]*S3736[2][2] + a36[5]*S3736[2][2];
a37[6]=LEGLINK3*a36[2] + a36[6];

a38[1]=c38[1] + a37[1]*S3837[1][1] + a37[3]*S3837[1][3];
a38[2]=c38[2] + a37[1]*S3837[2][1] + a37[3]*S3837[2][3];
a38[3]=state[16].thdd + a37[2];
a38[4]=c38[4] + a37[4]*S3837[1][1] + a37[6]*S3837[1][3];
a38[5]=c38[5] + a37[4]*S3837[2][1] + a37[6]*S3837[2][3];
a38[6]=a37[5];

a39[1]=a38[3];
a39[2]=-a38[2];
a39[3]=a38[1];
a39[4]=LEGLINK4*a38[2] + a38[6];
a39[5]=LEGLINK4*a38[3] - a38[5];
a39[6]=a38[4];

a40[1]=a39[1]*S4039[1][1] + a39[2]*S4039[1][2] + a39[3]*S4039[1][3];
a40[2]=a39[1]*S4039[2][1] + a39[2]*S4039[2][2] + a39[3]*S4039[2][3];
a40[3]=a39[1]*S4039[3][1] + a39[2]*S4039[3][2] + a39[3]*S4039[3][3];
a40[4]=a39[4]*S4039[1][1] + a39[5]*S4039[1][2] + a39[3]*(-(eff[3].x[2]*S4039[1][1]) + eff[3].x[1]*S4039[1][2]) + a39[6]*S4039[1][3] + a39[2]*(eff[3].x[3]*S4039[1][1] - eff[3].x[1]*S4039[1][3]) + a39[1]*(-(eff[3].x[3]*S4039[1][2]) + eff[3].x[2]*S4039[1][3]);
a40[5]=a39[4]*S4039[2][1] + a39[5]*S4039[2][2] + a39[3]*(-(eff[3].x[2]*S4039[2][1]) + eff[3].x[1]*S4039[2][2]) + a39[6]*S4039[2][3] + a39[2]*(eff[3].x[3]*S4039[2][1] - eff[3].x[1]*S4039[2][3]) + a39[1]*(-(eff[3].x[3]*S4039[2][2]) + eff[3].x[2]*S4039[2][3]);
a40[6]=a39[4]*S4039[3][1] + a39[5]*S4039[3][2] + a39[3]*(-(eff[3].x[2]*S4039[3][1]) + eff[3].x[1]*S4039[3][2]) + a39[6]*S4039[3][3] + a39[2]*(eff[3].x[3]*S4039[3][1] - eff[3].x[1]*S4039[3][3]) + a39[1]*(-(eff[3].x[3]*S4039[3][2]) + eff[3].x[2]*S4039[3][3]);

a41[1]=a38[1];
a41[2]=a38[2];
a41[3]=a38[3];
a41[4]=-(LEGLINK4*a38[2]) - FOOTWIDLONG*a38[3] + a38[4];
a41[5]=LEGLINK4*a38[1] + FOOTLLENGLONG*a38[3] + a38[5];
a41[6]=FOOTWIDLONG*a38[1] - FOOTLLENGLONG*a38[2] + a38[6];

a42[1]=a38[1];
a42[2]=a38[2];
a42[3]=a38[3];
a42[4]=-(LEGLINK4*a38[2]) + FOOTWIDSHORT*a38[3] + a38[4];
a42[5]=LEGLINK4*a38[1] + FOOTLLENGLONG*a38[3] + a38[5];
a42[6]=-(FOOTWIDSHORT*a38[1]) - FOOTLLENGLONG*a38[2] + a38[6];

a43[1]=a38[1];
a43[2]=a38[2];
a43[3]=a38[3];
a43[4]=-(LEGLINK4*a38[2]) + FOOTWIDSHORT*a38[3] + a38[4];
a43[5]=LEGLINK4*a38[1] - FOOTLENGSHORT*a38[3] + a38[5];
a43[6]=-(FOOTWIDSHORT*a38[1]) + FOOTLENGSHORT*a38[2] + a38[6];

a44[1]=a38[1];
a44[2]=a38[2];
a44[3]=a38[3];
a44[4]=-(LEGLINK4*a38[2]) - FOOTWIDLONG*a38[3] + a38[4];
a44[5]=LEGLINK4*a38[1] - FOOTLENGSHORT*a38[3] + a38[5];
a44[6]=FOOTWIDLONG*a38[1] + FOOTLENGSHORT*a38[2] + a38[6];

/* inverse dynamics torques */
state[7].uff=p2[6] + a2[1]*JA2[6][1] + a2[2]*JA2[6][2] + a2[3]*JA2[6][3] + a2[4]*JA2[6][4] + a2[5]*JA2[6][5];
state[8].uff=p3[6] + a3[1]*JA3[6][1] + a3[2]*JA3[6][2] + a3[3]*JA3[6][3] + a3[4]*JA3[6][4] + a3[5]*JA3[6][5] + a3[6]*JA3[6][6];
state[9].uff=p4[6] + a4[1]*JA4[6][1] + a4[2]*JA4[6][2] + a4[3]*JA4[6][3] + a4[4]*JA4[6][4] + a4[5]*JA4[6][5] + a4[6]*JA4[6][6];
state[10].uff=p5[6] + a5[1]*JA5[6][1] + a5[2]*JA5[6][2] + a5[3]*JA5[6][3] + a5[4]*JA5[6][4] + a5[5]*JA5[6][5];
state[17].uff=p9[6] + a9[1]*JA9[6][1] + a9[2]*JA9[6][2] + a9[3]*JA9[6][3] + a9[4]*JA9[6][4] + a9[5]*JA9[6][5];
state[18].uff=p10[6] + a10[1]*JA10[6][1] + a10[2]*JA10[6][2] + a10[3]*JA10[6][3] + a10[4]*JA10[6][4] + a10[5]*JA10[6][5] + a10[6]*JA10[6][6];
state[19].uff=p11[6] + a11[1]*JA11[6][1] + a11[2]*JA11[6][2] + a11[3]*JA11[6][3] + a11[4]*JA11[6][4] + a11[5]*JA11[6][5] + a11[6]*JA11[6][6];
state[20].uff=p12[6] + a12[1]*JA12[6][1] + a12[2]*JA12[6][2] + a12[3]*JA12[6][3] + a12[4]*JA12[6][4] + a12[5]*JA12[6][5] + a12[6]*JA12[6][6];
state[27].uff=p13[6] + a13[1]*JA13[6][1] + a13[2]*JA13[6][2] + a13[3]*JA13[6][3] + a13[4]*JA13[6][4] + a13[5]*JA13[6][5] + a13[6]*JA13[6][6];
state[28].uff=p14[6] + a14[1]*JA14[6][1] + a14[2]*JA14[6][2] + a14[3]*JA14[6][3] + a14[4]*JA14[6][4] + a14[5]*JA14[6][5];
state[22].uff=p18[6] + a18[1]*JA18[6][1] + a18[2]*JA18[6][2] + a18[3]*JA18[6][3] + a18[4]*JA18[6][4] + a18[5]*JA18[6][5];
state[24].uff=p20[6] + a20[1]*JA20[6][1] + a20[2]*JA20[6][2] + a20[3]*JA20[6][3] + a20[4]*JA20[6][4] + a20[5]*JA20[6][5];
state[21].uff=p21[6] + a21[1]*JA21[6][1] + a21[2]*JA21[6][2] + a21[3]*JA21[6][3] + a21[4]*JA21[6][4] + a21[5]*JA21[6][5];
state[1].uff=p22[6] + a22[1]*JA22[6][1] + a22[2]*JA22[6][2] + a22[3]*JA22[6][3] + a22[4]*JA22[6][4] + a22[5]*JA22[6][5] + a22[6]*JA22[6][6];
state[2].uff=p23[6] + a23[1]*JA23[6][1] + a23[2]*JA23[6][2] + a23[3]*JA23[6][3] + a23[4]*JA23[6][4] + a23[5]*JA23[6][5] + a23[6]*JA23[6][6];
state[3].uff=p24[6] + a24[1]*JA24[6][1] + a24[2]*JA24[6][2] + a24[3]*JA24[6][3] + a24[4]*JA24[6][4] + a24[5]*JA24[6][5] + a24[6]*JA24[6][6];
state[4].uff=p25[6] + a25[1]*JA25[6][1] + a25[2]*JA25[6][2] + a25[3]*JA25[6][3] + a25[4]*JA25[6][4] + a25[5]*JA25[6][5] + a25[6]*JA25[6][6];
state[5].uff=p26[6] + a26[1]*JA26[6][1] + a26[2]*JA26[6][2] + a26[3]*JA26[6][3] + a26[4]*JA26[6][4] + a26[5]*JA26[6][5] + a26[6]*JA26[6][6];
state[6].uff=p27[6] + a27[1]*JA27[6][1] + a27[2]*JA27[6][2] + a27[3]*JA27[6][3] + a27[4]*JA27[6][4] + a27[5]*JA27[6][5] + a27[6]*JA27[6][6];
state[11].uff=p33[6] + a33[1]*JA33[6][1] + a33[2]*JA33[6][2] + a33[3]*JA33[6][3] + a33[4]*JA33[6][4] + a33[5]*JA33[6][5] + a33[6]*JA33[6][6];
state[12].uff=p34[6] + a34[1]*JA34[6][1] + a34[2]*JA34[6][2] + a34[3]*JA34[6][3] + a34[4]*JA34[6][4] + a34[5]*JA34[6][5] + a34[6]*JA34[6][6];
state[13].uff=p35[6] + a35[1]*JA35[6][1] + a35[2]*JA35[6][2] + a35[3]*JA35[6][3] + a35[4]*JA35[6][4] + a35[5]*JA35[6][5] + a35[6]*JA35[6][6];
state[14].uff=p36[6] + a36[1]*JA36[6][1] + a36[2]*JA36[6][2] + a36[3]*JA36[6][3] + a36[4]*JA36[6][4] + a36[5]*JA36[6][5] + a36[6]*JA36[6][6];
state[15].uff=p37[6] + a37[1]*JA37[6][1] + a37[2]*JA37[6][2] + a37[3]*JA37[6][3] + a37[4]*JA37[6][4] + a37[5]*JA37[6][5] + a37[6]*JA37[6][6];
state[16].uff=p38[6] + a38[1]*JA38[6][1] + a38[2]*JA38[6][2] + a38[3]*JA38[6][3] + a38[4]*JA38[6][4] + a38[5]*JA38[6][5] + a38[6]*JA38[6][6];

