/* sine and cosine precomputation */
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



hoap3_ForDynArtfunc1();

hoap3_ForDynArtfunc2();

hoap3_ForDynArtfunc3();

hoap3_ForDynArtfunc4();

hoap3_ForDynArtfunc5();

hoap3_ForDynArtfunc6();

hoap3_ForDynArtfunc7();

hoap3_ForDynArtfunc8();

hoap3_ForDynArtfunc9();

hoap3_ForDynArtfunc10();

hoap3_ForDynArtfunc11();

hoap3_ForDynArtfunc12();

hoap3_ForDynArtfunc13();

hoap3_ForDynArtfunc14();

hoap3_ForDynArtfunc15();

hoap3_ForDynArtfunc16();

hoap3_ForDynArtfunc17();

hoap3_ForDynArtfunc18();

hoap3_ForDynArtfunc19();

hoap3_ForDynArtfunc20();

hoap3_ForDynArtfunc21();

hoap3_ForDynArtfunc22();

hoap3_ForDynArtfunc23();

hoap3_ForDynArtfunc24();

hoap3_ForDynArtfunc25();

hoap3_ForDynArtfunc26();

hoap3_ForDynArtfunc27();

hoap3_ForDynArtfunc28();

hoap3_ForDynArtfunc29();

hoap3_ForDynArtfunc30();

hoap3_ForDynArtfunc31();

hoap3_ForDynArtfunc32();

/* acceleration vectors and joint accelerations */
state[13].thdd=u[2]/d[2];

a2[1]=c2[1];
a2[2]=c2[2];
a2[3]=state[13].thdd;
a2[4]=c2[4];
a2[5]=c2[5];

state[1].thdd=(-(a2[5]*h3[3]) + u[3] - a2[4]*(h3[1]*S32[1][1] + h3[2]*S32[2][1]) - a2[1]*(-(LEGLINK1*h3[3]) + h3[4]*S32[1][1] - WAISTLINK1*h3[1]*S32[1][3] + h3[5]*S32[2][1] - WAISTLINK1*h3[2]*S32[2][3]) - a2[3]*(-(WAISTLINK2*h3[3]) + WAISTLINK1*h3[1]*S32[1][1] + h3[4]*S32[1][3] + WAISTLINK1*h3[2]*S32[2][1] + h3[5]*S32[2][3]) - a2[2]*(h3[6] + h3[1]*(LEGLINK1*S32[1][1] + WAISTLINK2*S32[1][3]) + h3[2]*(LEGLINK1*S32[2][1] + WAISTLINK2*S32[2][3])))/d[3];

a3[1]=c3[1] + a2[1]*S32[1][1] + a2[3]*S32[1][3];
a3[2]=c3[2] + a2[1]*S32[2][1] + a2[3]*S32[2][3];
a3[3]=state[1].thdd + a2[2];
a3[4]=c3[4] + WAISTLINK1*a2[3]*S32[1][1] + a2[4]*S32[1][1] - WAISTLINK1*a2[1]*S32[1][3] + a2[2]*(LEGLINK1*S32[1][1] + WAISTLINK2*S32[1][3]);
a3[5]=c3[5] + WAISTLINK1*a2[3]*S32[2][1] + a2[4]*S32[2][1] - WAISTLINK1*a2[1]*S32[2][3] + a2[2]*(LEGLINK1*S32[2][1] + WAISTLINK2*S32[2][3]);
a3[6]=-(LEGLINK1*a2[1]) - WAISTLINK2*a2[3] + a2[5];

state[2].thdd=(a3[5]*h4[3] + a3[2]*h4[6] + u[4] - a3[4]*(h4[1]*S43[1][1] + h4[2]*S43[2][1]) - a3[1]*(h4[4]*S43[1][1] + h4[5]*S43[2][1]) - a3[6]*(h4[1]*S43[1][3] + h4[2]*S43[2][3]) - a3[3]*(h4[4]*S43[1][3] + h4[5]*S43[2][3]))/d[4];

a4[1]=c4[1] + a3[1]*S43[1][1] + a3[3]*S43[1][3];
a4[2]=c4[2] + a3[1]*S43[2][1] + a3[3]*S43[2][3];
a4[3]=state[2].thdd - a3[2];
a4[4]=c4[4] + a3[4]*S43[1][1] + a3[6]*S43[1][3];
a4[5]=c4[5] + a3[4]*S43[2][1] + a3[6]*S43[2][3];
a4[6]=-a3[5];

state[3].thdd=(a4[5]*h5[3] + a4[2]*h5[6] + u[5] - a4[4]*(h5[1]*S54[1][1] + h5[2]*S54[2][1]) - a4[1]*(h5[4]*S54[1][1] + h5[5]*S54[2][1]) - a4[6]*(h5[1]*S54[1][3] + h5[2]*S54[2][3]) - a4[3]*(h5[4]*S54[1][3] + h5[5]*S54[2][3]))/d[5];

a5[1]=c5[1] + a4[1]*S54[1][1] + a4[3]*S54[1][3];
a5[2]=c5[2] + a4[1]*S54[2][1] + a4[3]*S54[2][3];
a5[3]=state[3].thdd - a4[2];
a5[4]=c5[4] + a4[4]*S54[1][1] + a4[6]*S54[1][3];
a5[5]=c5[5] + a4[4]*S54[2][1] + a4[6]*S54[2][3];
a5[6]=-a4[5];

state[4].thdd=(-(a5[6]*h6[3]) + u[6] - a5[4]*(h6[1]*S65[1][1] + h6[2]*S65[2][1]) - a5[1]*(h6[4]*S65[1][1] + h6[5]*S65[2][1]) - a5[5]*(h6[1]*S65[1][2] + h6[2]*S65[2][2]) - a5[3]*(h6[6] - LEGLINK2*h6[1]*S65[1][2] - LEGLINK2*h6[2]*S65[2][2]) - a5[2]*(LEGLINK2*h6[3] + h6[4]*S65[1][2] + h6[5]*S65[2][2]))/d[6];

a6[1]=c6[1] + a5[1]*S65[1][1] + a5[2]*S65[1][2];
a6[2]=c6[2] + a5[1]*S65[2][1] + a5[2]*S65[2][2];
a6[3]=state[4].thdd + a5[3];
a6[4]=c6[4] + a5[4]*S65[1][1] - LEGLINK2*a5[3]*S65[1][2] + a5[5]*S65[1][2];
a6[5]=c6[5] + a5[4]*S65[2][1] - LEGLINK2*a5[3]*S65[2][2] + a5[5]*S65[2][2];
a6[6]=LEGLINK2*a5[2] + a5[6];

state[5].thdd=(-(a6[6]*h7[3]) + u[7] - a6[4]*(h7[1]*S76[1][1] + h7[2]*S76[2][1]) - a6[1]*(h7[4]*S76[1][1] + h7[5]*S76[2][1]) - a6[5]*(h7[1]*S76[1][2] + h7[2]*S76[2][2]) - a6[3]*(h7[6] - LEGLINK3*h7[1]*S76[1][2] - LEGLINK3*h7[2]*S76[2][2]) - a6[2]*(LEGLINK3*h7[3] + h7[4]*S76[1][2] + h7[5]*S76[2][2]))/d[7];

a7[1]=c7[1] + a6[1]*S76[1][1] + a6[2]*S76[1][2];
a7[2]=c7[2] + a6[1]*S76[2][1] + a6[2]*S76[2][2];
a7[3]=state[5].thdd + a6[3];
a7[4]=c7[4] + a6[4]*S76[1][1] - LEGLINK3*a6[3]*S76[1][2] + a6[5]*S76[1][2];
a7[5]=c7[5] + a6[4]*S76[2][1] - LEGLINK3*a6[3]*S76[2][2] + a6[5]*S76[2][2];
a7[6]=LEGLINK3*a6[2] + a6[6];

state[6].thdd=(-(a7[5]*h8[3]) - a7[2]*h8[6] + u[8] - a7[4]*(h8[1]*S87[1][1] + h8[2]*S87[2][1]) - a7[1]*(h8[4]*S87[1][1] + h8[5]*S87[2][1]) - a7[6]*(h8[1]*S87[1][3] + h8[2]*S87[2][3]) - a7[3]*(h8[4]*S87[1][3] + h8[5]*S87[2][3]))/d[8];

a8[1]=c8[1] + a7[1]*S87[1][1] + a7[3]*S87[1][3];
a8[2]=c8[2] + a7[1]*S87[2][1] + a7[3]*S87[2][3];
a8[3]=state[6].thdd + a7[2];
a8[4]=c8[4] + a7[4]*S87[1][1] + a7[6]*S87[1][3];
a8[5]=c8[5] + a7[4]*S87[2][1] + a7[6]*S87[2][3];
a8[6]=a7[5];

a9[1]=a8[1];
a9[2]=a8[2];
a9[3]=a8[3];
a9[4]=FOOTLLENGLONG*a8[2] + FOOTWIDLONG*a8[3] + a8[4];
a9[5]=-(FOOTLLENGLONG*a8[1]) - LEGLINK4*a8[3] + a8[5];
a9[6]=-(FOOTWIDLONG*a8[1]) + LEGLINK4*a8[2] + a8[6];

a10[1]=a8[1];
a10[2]=a8[2];
a10[3]=a8[3];
a10[4]=FOOTLLENGLONG*a8[2] - FOOTWIDSHORT*a8[3] + a8[4];
a10[5]=-(FOOTLLENGLONG*a8[1]) - LEGLINK4*a8[3] + a8[5];
a10[6]=FOOTWIDSHORT*a8[1] + LEGLINK4*a8[2] + a8[6];

a11[1]=a8[1];
a11[2]=a8[2];
a11[3]=a8[3];
a11[4]=-(FOOTLENGSHORT*a8[2]) - FOOTWIDSHORT*a8[3] + a8[4];
a11[5]=FOOTLENGSHORT*a8[1] - LEGLINK4*a8[3] + a8[5];
a11[6]=FOOTWIDSHORT*a8[1] + LEGLINK4*a8[2] + a8[6];

a12[1]=a8[1];
a12[2]=a8[2];
a12[3]=a8[3];
a12[4]=-(FOOTLENGSHORT*a8[2]) + FOOTWIDLONG*a8[3] + a8[4];
a12[5]=FOOTLENGSHORT*a8[1] - LEGLINK4*a8[3] + a8[5];
a12[6]=-(FOOTWIDLONG*a8[1]) + LEGLINK4*a8[2] + a8[6];

a13[1]=a8[1]*S138[1][1] + a8[2]*S138[1][2] + a8[3]*S138[1][3];
a13[2]=a8[1]*S138[2][1] + a8[2]*S138[2][2] + a8[3]*S138[2][3];
a13[3]=a8[1]*S138[3][1] + a8[2]*S138[3][2] + a8[3]*S138[3][3];
a13[4]=a8[4]*S138[1][1] + a8[5]*S138[1][2] + a8[3]*(-(eff[1].x[2]*S138[1][1]) + eff[1].x[1]*S138[1][2]) + a8[6]*S138[1][3] + a8[2]*(eff[1].x[3]*S138[1][1] - eff[1].x[1]*S138[1][3]) + a8[1]*(-(eff[1].x[3]*S138[1][2]) + eff[1].x[2]*S138[1][3]);
a13[5]=a8[4]*S138[2][1] + a8[5]*S138[2][2] + a8[3]*(-(eff[1].x[2]*S138[2][1]) + eff[1].x[1]*S138[2][2]) + a8[6]*S138[2][3] + a8[2]*(eff[1].x[3]*S138[2][1] - eff[1].x[1]*S138[2][3]) + a8[1]*(-(eff[1].x[3]*S138[2][2]) + eff[1].x[2]*S138[2][3]);
a13[6]=a8[4]*S138[3][1] + a8[5]*S138[3][2] + a8[3]*(-(eff[1].x[2]*S138[3][1]) + eff[1].x[1]*S138[3][2]) + a8[6]*S138[3][3] + a8[2]*(eff[1].x[3]*S138[3][1] - eff[1].x[1]*S138[3][3]) + a8[1]*(-(eff[1].x[3]*S138[3][2]) + eff[1].x[2]*S138[3][3]);

state[7].thdd=(-(a2[5]*h14[3]) + u[14] - a2[4]*(h14[1]*S142[1][1] + h14[2]*S142[2][1]) - a2[1]*(LEGLINK1*h14[3] + h14[4]*S142[1][1] - WAISTLINK1*h14[1]*S142[1][3] + h14[5]*S142[2][1] - WAISTLINK1*h14[2]*S142[2][3]) - a2[3]*(-(WAISTLINK2*h14[3]) + WAISTLINK1*h14[1]*S142[1][1] + h14[4]*S142[1][3] + WAISTLINK1*h14[2]*S142[2][1] + h14[5]*S142[2][3]) - a2[2]*(h14[6] + h14[1]*(-(LEGLINK1*S142[1][1]) + WAISTLINK2*S142[1][3]) + h14[2]*(-(LEGLINK1*S142[2][1]) + WAISTLINK2*S142[2][3])))/d[14];

a14[1]=c14[1] + a2[1]*S142[1][1] + a2[3]*S142[1][3];
a14[2]=c14[2] + a2[1]*S142[2][1] + a2[3]*S142[2][3];
a14[3]=state[7].thdd + a2[2];
a14[4]=c14[4] + WAISTLINK1*a2[3]*S142[1][1] + a2[4]*S142[1][1] - WAISTLINK1*a2[1]*S142[1][3] + a2[2]*(-(LEGLINK1*S142[1][1]) + WAISTLINK2*S142[1][3]);
a14[5]=c14[5] + WAISTLINK1*a2[3]*S142[2][1] + a2[4]*S142[2][1] - WAISTLINK1*a2[1]*S142[2][3] + a2[2]*(-(LEGLINK1*S142[2][1]) + WAISTLINK2*S142[2][3]);
a14[6]=LEGLINK1*a2[1] - WAISTLINK2*a2[3] + a2[5];

state[8].thdd=(a14[5]*h15[3] + a14[2]*h15[6] + u[15] - a14[4]*(h15[1]*S1514[1][1] + h15[2]*S1514[2][1]) - a14[1]*(h15[4]*S1514[1][1] + h15[5]*S1514[2][1]) - a14[6]*(h15[1]*S1514[1][3] + h15[2]*S1514[2][3]) - a14[3]*(h15[4]*S1514[1][3] + h15[5]*S1514[2][3]))/d[15];

a15[1]=c15[1] + a14[1]*S1514[1][1] + a14[3]*S1514[1][3];
a15[2]=c15[2] + a14[1]*S1514[2][1] + a14[3]*S1514[2][3];
a15[3]=state[8].thdd - a14[2];
a15[4]=c15[4] + a14[4]*S1514[1][1] + a14[6]*S1514[1][3];
a15[5]=c15[5] + a14[4]*S1514[2][1] + a14[6]*S1514[2][3];
a15[6]=-a14[5];

state[9].thdd=(a15[5]*h16[3] + a15[2]*h16[6] + u[16] - a15[4]*(h16[1]*S1615[1][1] + h16[2]*S1615[2][1]) - a15[1]*(h16[4]*S1615[1][1] + h16[5]*S1615[2][1]) - a15[6]*(h16[1]*S1615[1][3] + h16[2]*S1615[2][3]) - a15[3]*(h16[4]*S1615[1][3] + h16[5]*S1615[2][3]))/d[16];

a16[1]=c16[1] + a15[1]*S1615[1][1] + a15[3]*S1615[1][3];
a16[2]=c16[2] + a15[1]*S1615[2][1] + a15[3]*S1615[2][3];
a16[3]=state[9].thdd - a15[2];
a16[4]=c16[4] + a15[4]*S1615[1][1] + a15[6]*S1615[1][3];
a16[5]=c16[5] + a15[4]*S1615[2][1] + a15[6]*S1615[2][3];
a16[6]=-a15[5];

state[10].thdd=(-(a16[6]*h17[3]) + u[17] - a16[4]*(h17[1]*S1716[1][1] + h17[2]*S1716[2][1]) - a16[1]*(h17[4]*S1716[1][1] + h17[5]*S1716[2][1]) - a16[5]*(h17[1]*S1716[1][2] + h17[2]*S1716[2][2]) - a16[3]*(h17[6] - LEGLINK2*h17[1]*S1716[1][2] - LEGLINK2*h17[2]*S1716[2][2]) - a16[2]*(LEGLINK2*h17[3] + h17[4]*S1716[1][2] + h17[5]*S1716[2][2]))/d[17];

a17[1]=c17[1] + a16[1]*S1716[1][1] + a16[2]*S1716[1][2];
a17[2]=c17[2] + a16[1]*S1716[2][1] + a16[2]*S1716[2][2];
a17[3]=state[10].thdd + a16[3];
a17[4]=c17[4] + a16[4]*S1716[1][1] - LEGLINK2*a16[3]*S1716[1][2] + a16[5]*S1716[1][2];
a17[5]=c17[5] + a16[4]*S1716[2][1] - LEGLINK2*a16[3]*S1716[2][2] + a16[5]*S1716[2][2];
a17[6]=LEGLINK2*a16[2] + a16[6];

state[11].thdd=(-(a17[6]*h18[3]) + u[18] - a17[4]*(h18[1]*S1817[1][1] + h18[2]*S1817[2][1]) - a17[1]*(h18[4]*S1817[1][1] + h18[5]*S1817[2][1]) - a17[5]*(h18[1]*S1817[1][2] + h18[2]*S1817[2][2]) - a17[3]*(h18[6] - LEGLINK3*h18[1]*S1817[1][2] - LEGLINK3*h18[2]*S1817[2][2]) - a17[2]*(LEGLINK3*h18[3] + h18[4]*S1817[1][2] + h18[5]*S1817[2][2]))/d[18];

a18[1]=c18[1] + a17[1]*S1817[1][1] + a17[2]*S1817[1][2];
a18[2]=c18[2] + a17[1]*S1817[2][1] + a17[2]*S1817[2][2];
a18[3]=state[11].thdd + a17[3];
a18[4]=c18[4] + a17[4]*S1817[1][1] - LEGLINK3*a17[3]*S1817[1][2] + a17[5]*S1817[1][2];
a18[5]=c18[5] + a17[4]*S1817[2][1] - LEGLINK3*a17[3]*S1817[2][2] + a17[5]*S1817[2][2];
a18[6]=LEGLINK3*a17[2] + a17[6];

state[12].thdd=(-(a18[5]*h19[3]) - a18[2]*h19[6] + u[19] - a18[4]*(h19[1]*S1918[1][1] + h19[2]*S1918[2][1]) - a18[1]*(h19[4]*S1918[1][1] + h19[5]*S1918[2][1]) - a18[6]*(h19[1]*S1918[1][3] + h19[2]*S1918[2][3]) - a18[3]*(h19[4]*S1918[1][3] + h19[5]*S1918[2][3]))/d[19];

a19[1]=c19[1] + a18[1]*S1918[1][1] + a18[3]*S1918[1][3];
a19[2]=c19[2] + a18[1]*S1918[2][1] + a18[3]*S1918[2][3];
a19[3]=state[12].thdd + a18[2];
a19[4]=c19[4] + a18[4]*S1918[1][1] + a18[6]*S1918[1][3];
a19[5]=c19[5] + a18[4]*S1918[2][1] + a18[6]*S1918[2][3];
a19[6]=a18[5];

a20[1]=a19[1];
a20[2]=a19[2];
a20[3]=a19[3];
a20[4]=FOOTLLENGLONG*a19[2] - FOOTWIDLONG*a19[3] + a19[4];
a20[5]=-(FOOTLLENGLONG*a19[1]) - LEGLINK4*a19[3] + a19[5];
a20[6]=FOOTWIDLONG*a19[1] + LEGLINK4*a19[2] + a19[6];

a21[1]=a19[1];
a21[2]=a19[2];
a21[3]=a19[3];
a21[4]=FOOTLLENGLONG*a19[2] + FOOTWIDSHORT*a19[3] + a19[4];
a21[5]=-(FOOTLLENGLONG*a19[1]) - LEGLINK4*a19[3] + a19[5];
a21[6]=-(FOOTWIDSHORT*a19[1]) + LEGLINK4*a19[2] + a19[6];

a22[1]=a19[1];
a22[2]=a19[2];
a22[3]=a19[3];
a22[4]=-(FOOTLENGSHORT*a19[2]) + FOOTWIDSHORT*a19[3] + a19[4];
a22[5]=FOOTLENGSHORT*a19[1] - LEGLINK4*a19[3] + a19[5];
a22[6]=-(FOOTWIDSHORT*a19[1]) + LEGLINK4*a19[2] + a19[6];

a23[1]=a19[1];
a23[2]=a19[2];
a23[3]=a19[3];
a23[4]=-(FOOTLENGSHORT*a19[2]) - FOOTWIDLONG*a19[3] + a19[4];
a23[5]=FOOTLENGSHORT*a19[1] - LEGLINK4*a19[3] + a19[5];
a23[6]=FOOTWIDLONG*a19[1] + LEGLINK4*a19[2] + a19[6];

a24[1]=a19[1]*S2419[1][1] + a19[2]*S2419[1][2] + a19[3]*S2419[1][3];
a24[2]=a19[1]*S2419[2][1] + a19[2]*S2419[2][2] + a19[3]*S2419[2][3];
a24[3]=a19[1]*S2419[3][1] + a19[2]*S2419[3][2] + a19[3]*S2419[3][3];
a24[4]=a19[4]*S2419[1][1] + a19[5]*S2419[1][2] + a19[3]*(-(eff[2].x[2]*S2419[1][1]) + eff[2].x[1]*S2419[1][2]) + a19[6]*S2419[1][3] + a19[2]*(eff[2].x[3]*S2419[1][1] - eff[2].x[1]*S2419[1][3]) + a19[1]*(-(eff[2].x[3]*S2419[1][2]) + eff[2].x[2]*S2419[1][3]);
a24[5]=a19[4]*S2419[2][1] + a19[5]*S2419[2][2] + a19[3]*(-(eff[2].x[2]*S2419[2][1]) + eff[2].x[1]*S2419[2][2]) + a19[6]*S2419[2][3] + a19[2]*(eff[2].x[3]*S2419[2][1] - eff[2].x[1]*S2419[2][3]) + a19[1]*(-(eff[2].x[3]*S2419[2][2]) + eff[2].x[2]*S2419[2][3]);
a24[6]=a19[4]*S2419[3][1] + a19[5]*S2419[3][2] + a19[3]*(-(eff[2].x[2]*S2419[3][1]) + eff[2].x[1]*S2419[3][2]) + a19[6]*S2419[3][3] + a19[2]*(eff[2].x[3]*S2419[3][1] - eff[2].x[1]*S2419[3][3]) + a19[1]*(-(eff[2].x[3]*S2419[3][2]) + eff[2].x[2]*S2419[3][3]);

