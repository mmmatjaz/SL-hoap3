/* sine and cosine precomputation */
sstate29th=Sin(state[29].th);
cstate29th=Cos(state[29].th);

sstate30th=Sin(state[30].th);
cstate30th=Cos(state[30].th);

sstate31th=Sin(state[31].th);
cstate31th=Cos(state[31].th);

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

sstate13th=Sin(state[13].th);
cstate13th=Cos(state[13].th);

sstate14th=Sin(state[14].th);
cstate14th=Cos(state[14].th);

sstate32th=Sin(state[32].th);
cstate32th=Cos(state[32].th);

sstate33th=Sin(state[33].th);
cstate33th=Cos(state[33].th);

sstate34th=Sin(state[34].th);
cstate34th=Cos(state[34].th);

sstate35th=Sin(state[35].th);
cstate35th=Cos(state[35].th);

sstate36th=Sin(state[36].th);
cstate36th=Cos(state[36].th);

sstate37th=Sin(state[37].th);
cstate37th=Cos(state[37].th);

sstate38th=Sin(state[38].th);
cstate38th=Cos(state[38].th);

sstate23th=Sin(state[23].th);
cstate23th=Cos(state[23].th);

sstate22th=Sin(state[22].th);
cstate22th=Cos(state[22].th);

sstate24th=Sin(state[24].th);
cstate24th=Cos(state[24].th);

sstate25th=Sin(state[25].th);
cstate25th=Cos(state[25].th);

sstate26th=Sin(state[26].th);
cstate26th=Cos(state[26].th);

sstate27th=Sin(state[27].th);
cstate27th=Cos(state[27].th);

sstate28th=Sin(state[28].th);
cstate28th=Cos(state[28].th);

sstate16th=Sin(state[16].th);
cstate16th=Cos(state[16].th);

sstate15th=Sin(state[15].th);
cstate15th=Cos(state[15].th);

sstate17th=Sin(state[17].th);
cstate17th=Cos(state[17].th);

sstate18th=Sin(state[18].th);
cstate18th=Cos(state[18].th);

sstate19th=Sin(state[19].th);
cstate19th=Cos(state[19].th);

sstate20th=Sin(state[20].th);
cstate20th=Cos(state[20].th);

sstate21th=Sin(state[21].th);
cstate21th=Cos(state[21].th);


/* rotation matrix sine and cosine precomputation */










rseff2a1=Sin(eff[2].a[1]);
rceff2a1=Cos(eff[2].a[1]);

rseff2a2=Sin(eff[2].a[2]);
rceff2a2=Cos(eff[2].a[2]);

rseff2a3=Sin(eff[2].a[3]);
rceff2a3=Cos(eff[2].a[3]);









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













rseff4a1=Sin(eff[4].a[1]);
rceff4a1=Cos(eff[4].a[1]);

rseff4a2=Sin(eff[4].a[2]);
rceff4a2=Cos(eff[4].a[2]);

rseff4a3=Sin(eff[4].a[3]);
rceff4a3=Cos(eff[4].a[3]);



cb_ForDynfunc1();

cb_ForDynfunc2();

cb_ForDynfunc3();

cb_ForDynfunc4();

cb_ForDynfunc5();

cb_ForDynfunc6();

cb_ForDynfunc7();

/* inverse dynamics torques */
c[1]=f1[6] + fext1[6];
c[2]=f2[6] + fext2[6];
c[3]=f3[6] + fext3[6];
c[4]=f4[6] + fext4[6];
c[5]=f5[6] + fext5[6];
c[6]=f6[6] + fext6[6];
c[7]=f7[6] + fext7[6];
c[8]=f8[6] + fext8[6];
c[9]=f9[6] + fext9[6];
c[10]=f10[6] + fext10[6];
c[11]=0;
c[12]=f12[6] + fext12[6];
c[13]=f13[6] + fext13[6];
c[14]=f14[6] + fext14[6];
c[15]=f15[6] + fext15[6];
c[16]=f16[6] + fext16[6];
c[17]=f17[6] + fext17[6];
c[18]=f18[6] + fext18[6];
c[19]=0;
c[20]=f20[6] + fext20[6];
c[21]=f21[6] + fext21[6];
c[22]=f22[6] + fext22[6];
c[23]=0. + f23[6];
c[24]=0. + f24[6];
c[25]=0.;
c[26]=0. + f26[6];
c[27]=0. + f27[6];
c[28]=0.;
c[29]=0.;
c[30]=f30[6] + fext30[6];
c[31]=f31[6] + fext31[6];
c[32]=f32[6] + fext32[6];
c[33]=f33[6] + fext33[6];
c[34]=f34[6] + fext34[6];
c[35]=f35[6] + fext35[6];
c[36]=f36[6] + fext36[6];
c[37]=0.;
c[38]=0.;
c[39]=0.;
c[40]=0.;
c[41]=0;
c[42]=f42[6] + fext42[6];
c[43]=f43[6] + fext43[6];
c[44]=f44[6] + fext44[6];
c[45]=f45[6] + fext45[6];
c[46]=f46[6] + fext46[6];
c[47]=f47[6] + fext47[6];
c[48]=f48[6] + fext48[6];
c[49]=0.;
c[50]=0.;
c[51]=0.;
c[52]=0.;
c[53]=0;

/* torques due to external forces */
qext[1]=fext1[6];
qext[2]=fext2[6];
qext[3]=fext3[6];
qext[4]=fext4[6];
qext[5]=fext5[6];
qext[6]=fext6[6];
qext[7]=fext7[6];
qext[8]=fext8[6];
qext[9]=fext9[6];
qext[10]=fext10[6];
qext[12]=fext12[6];
qext[13]=fext13[6];
qext[14]=fext14[6];
qext[15]=fext15[6];
qext[16]=fext16[6];
qext[17]=fext17[6];
qext[18]=fext18[6];
qext[20]=fext20[6];
qext[21]=fext21[6];
qext[22]=fext22[6];
qext[30]=fext30[6];
qext[31]=fext31[6];
qext[32]=fext32[6];
qext[33]=fext33[6];
qext[34]=fext34[6];
qext[35]=fext35[6];
qext[36]=fext36[6];
qext[42]=fext42[6];
qext[43]=fext43[6];
qext[44]=fext44[6];
qext[45]=fext45[6];
qext[46]=fext46[6];
qext[47]=fext47[6];
qext[48]=fext48[6];

cbfunc11();

cbfunc12();

cbfunc13();

cbfunc14();

cbfunc15();

cbfunc16();

cbfunc17();

cbfunc18();

cbfunc19();

cbfunc20();

cbfunc21();

cbfunc22();

cbfunc23();

cbfunc24();

cbfunc25();

cbfunc26();

cbfunc27();

cbfunc28();

cbfunc29();

cbfunc30();

cbfunc31();

cbfunc32();

cbfunc33();

cbfunc34();

cbfunc35();

cbfunc36();

cbfunc37();

cbfunc38();

cbfunc39();

cbfunc40();

cbfunc41();

cbfunc42();

cbfunc43();

cbfunc44();

cbfunc45();

cbfunc46();

cbfunc47();

cbfunc48();

cbfunc49();

cbfunc50();

cbfunc51();

cbfunc52();

cbfunc53();

cbfunc54();

cbfunc55();

cbfunc56();

cbfunc57();

cbfunc58();

cbfunc59();

cbfunc60();

cbfunc61();

cbfunc62();

cbfunc63();

cbfunc64();

cbfunc65();

cbfunc66();

cbfunc67();

vcross[1]=-(basec[0].xd[3]*baseo[0].ad[2]) + basec[0].xd[2]*baseo[0].ad[3];
vcross[2]=basec[0].xd[3]*baseo[0].ad[1] - basec[0].xd[1]*baseo[0].ad[3];
vcross[3]=-(basec[0].xd[2]*baseo[0].ad[1]) + basec[0].xd[1]*baseo[0].ad[2];

c[1]=c[1] - qext[1] + vcross[1]*K[1][1] + vcross[2]*K[1][2] + vcross[3]*K[1][3];
c[2]=c[2] - qext[2] + vcross[1]*K[2][1] + vcross[2]*K[2][2] + vcross[3]*K[2][3];
c[3]=c[3] - qext[3] + vcross[1]*K[3][1] + vcross[2]*K[3][2] + vcross[3]*K[3][3];
c[4]=c[4] - qext[4] + vcross[1]*K[4][1] + vcross[2]*K[4][2] + vcross[3]*K[4][3];
c[5]=c[5] - qext[5] + vcross[1]*K[5][1] + vcross[2]*K[5][2] + vcross[3]*K[5][3];
c[6]=c[6] - qext[6] + vcross[1]*K[6][1] + vcross[2]*K[6][2] + vcross[3]*K[6][3];
c[7]=c[7] - qext[7] + vcross[1]*K[7][1] + vcross[2]*K[7][2] + vcross[3]*K[7][3];
c[8]=c[8] - qext[8] + vcross[1]*K[8][1] + vcross[2]*K[8][2] + vcross[3]*K[8][3];
c[9]=c[9] - qext[9] + vcross[1]*K[9][1] + vcross[2]*K[9][2] + vcross[3]*K[9][3];
c[10]=c[10] - qext[10] + vcross[1]*K[10][1] + vcross[2]*K[10][2] + vcross[3]*K[10][3];
c[11]=c[11];
c[12]=c[12] - qext[12] + vcross[1]*K[12][1] + vcross[2]*K[12][2] + vcross[3]*K[12][3];
c[13]=c[13] - qext[13] + vcross[1]*K[13][1] + vcross[2]*K[13][2] + vcross[3]*K[13][3];
c[14]=c[14] - qext[14] + vcross[1]*K[14][1] + vcross[2]*K[14][2] + vcross[3]*K[14][3];
c[15]=c[15] - qext[15] + vcross[1]*K[15][1] + vcross[2]*K[15][2] + vcross[3]*K[15][3];
c[16]=c[16] - qext[16] + vcross[1]*K[16][1] + vcross[2]*K[16][2] + vcross[3]*K[16][3];
c[17]=c[17] - qext[17] + vcross[1]*K[17][1] + vcross[2]*K[17][2] + vcross[3]*K[17][3];
c[18]=c[18] - qext[18] + vcross[1]*K[18][1] + vcross[2]*K[18][2] + vcross[3]*K[18][3];
c[19]=c[19];
c[20]=c[20] - qext[20] + vcross[1]*K[20][1] + vcross[2]*K[20][2] + vcross[3]*K[20][3];
c[21]=c[21] - qext[21] + vcross[1]*K[21][1] + vcross[2]*K[21][2] + vcross[3]*K[21][3];
c[22]=c[22] - qext[22] + vcross[1]*K[22][1] + vcross[2]*K[22][2] + vcross[3]*K[22][3];
c[23]=c[23] + vcross[1]*K[23][1] + vcross[2]*K[23][2] + vcross[3]*K[23][3];
c[24]=c[24] + vcross[1]*K[24][1] + vcross[2]*K[24][2] + vcross[3]*K[24][3];
c[25]=c[25];
c[26]=c[26] + vcross[1]*K[26][1] + vcross[2]*K[26][2] + vcross[3]*K[26][3];
c[27]=c[27] + vcross[1]*K[27][1] + vcross[2]*K[27][2] + vcross[3]*K[27][3];
c[28]=c[28];
c[29]=c[29];
c[30]=c[30] - qext[30] + vcross[1]*K[30][1] + vcross[2]*K[30][2] + vcross[3]*K[30][3];
c[31]=c[31] - qext[31] + vcross[1]*K[31][1] + vcross[2]*K[31][2] + vcross[3]*K[31][3];
c[32]=c[32] - qext[32] + vcross[1]*K[32][1] + vcross[2]*K[32][2] + vcross[3]*K[32][3];
c[33]=c[33] - qext[33] + vcross[1]*K[33][1] + vcross[2]*K[33][2] + vcross[3]*K[33][3];
c[34]=c[34] - qext[34] + vcross[1]*K[34][1] + vcross[2]*K[34][2] + vcross[3]*K[34][3];
c[35]=c[35] - qext[35] + vcross[1]*K[35][1] + vcross[2]*K[35][2] + vcross[3]*K[35][3];
c[36]=c[36] - qext[36] + vcross[1]*K[36][1] + vcross[2]*K[36][2] + vcross[3]*K[36][3];
c[37]=c[37];
c[38]=c[38];
c[39]=c[39];
c[40]=c[40];
c[41]=c[41];
c[42]=c[42] - qext[42] + vcross[1]*K[42][1] + vcross[2]*K[42][2] + vcross[3]*K[42][3];
c[43]=c[43] - qext[43] + vcross[1]*K[43][1] + vcross[2]*K[43][2] + vcross[3]*K[43][3];
c[44]=c[44] - qext[44] + vcross[1]*K[44][1] + vcross[2]*K[44][2] + vcross[3]*K[44][3];
c[45]=c[45] - qext[45] + vcross[1]*K[45][1] + vcross[2]*K[45][2] + vcross[3]*K[45][3];
c[46]=c[46] - qext[46] + vcross[1]*K[46][1] + vcross[2]*K[46][2] + vcross[3]*K[46][3];
c[47]=c[47] - qext[47] + vcross[1]*K[47][1] + vcross[2]*K[47][2] + vcross[3]*K[47][3];
c[48]=c[48] - qext[48] + vcross[1]*K[48][1] + vcross[2]*K[48][2] + vcross[3]*K[48][3];
c[49]=c[49];
c[50]=c[50];
c[51]=c[51];
c[52]=c[52];
c[53]=c[53];
c[54]=vcross[1]*Jc0[1][4] + vcross[2]*Jc0[1][5] + vcross[3]*Jc0[1][6] + f0[1]*Si00[1][1] + f0[2]*Si00[1][2] + f0[3]*Si00[1][3];
c[55]=vcross[1]*Jc0[2][4] + vcross[2]*Jc0[2][5] + vcross[3]*Jc0[2][6] + f0[1]*Si00[2][1] + f0[2]*Si00[2][2] + f0[3]*Si00[2][3];
c[56]=vcross[1]*Jc0[3][4] + vcross[2]*Jc0[3][5] + vcross[3]*Jc0[3][6] + f0[1]*Si00[3][1] + f0[2]*Si00[3][2] + f0[3]*Si00[3][3];
c[57]=vcross[1]*Jc0[4][4] + vcross[2]*Jc0[4][5] + vcross[3]*Jc0[4][6] + f0[4]*Si00[1][1] + f0[5]*Si00[1][2] + f0[6]*Si00[1][3];
c[58]=vcross[1]*Jc0[5][4] + vcross[2]*Jc0[5][5] + vcross[3]*Jc0[5][6] + f0[4]*Si00[2][1] + f0[5]*Si00[2][2] + f0[6]*Si00[2][3];
c[59]=vcross[1]*Jc0[6][4] + vcross[2]*Jc0[6][5] + vcross[3]*Jc0[6][6] + f0[4]*Si00[3][1] + f0[5]*Si00[3][2] + f0[6]*Si00[3][3];

uc[1]=state[29].u - c[1] - qext[1];
uc[2]=state[30].u - c[2] - qext[2];
uc[3]=state[31].u - c[3] - qext[3];
uc[4]=state[1].u - c[4] - qext[4];
uc[5]=state[2].u - c[5] - qext[5];
uc[6]=state[3].u - c[6] - qext[6];
uc[7]=state[4].u - c[7] - qext[7];
uc[8]=state[5].u - c[8] - qext[8];
uc[9]=state[6].u - c[9] - qext[9];
uc[10]=state[7].u - c[10] - qext[10];
uc[11]=-c[11];
uc[12]=state[8].u - c[12] - qext[12];
uc[13]=state[9].u - c[13] - qext[13];
uc[14]=state[10].u - c[14] - qext[14];
uc[15]=state[11].u - c[15] - qext[15];
uc[16]=state[12].u - c[16] - qext[16];
uc[17]=state[13].u - c[17] - qext[17];
uc[18]=state[14].u - c[18] - qext[18];
uc[19]=-c[19];
uc[20]=state[32].u - c[20] - qext[20];
uc[21]=state[33].u - c[21] - qext[21];
uc[22]=state[34].u - c[22] - qext[22];
uc[23]=state[35].u - c[23];
uc[24]=state[36].u - c[24];
uc[25]=-c[25];
uc[26]=state[37].u - c[26];
uc[27]=state[38].u - c[27];
uc[28]=-c[28];
uc[29]=-c[29];
uc[30]=state[23].u - c[30] - qext[30];
uc[31]=state[22].u - c[31] - qext[31];
uc[32]=state[24].u - c[32] - qext[32];
uc[33]=state[25].u - c[33] - qext[33];
uc[34]=state[26].u - c[34] - qext[34];
uc[35]=state[27].u - c[35] - qext[35];
uc[36]=state[28].u - c[36] - qext[36];
uc[37]=-c[37];
uc[38]=-c[38];
uc[39]=-c[39];
uc[40]=-c[40];
uc[41]=-c[41];
uc[42]=state[16].u - c[42] - qext[42];
uc[43]=state[15].u - c[43] - qext[43];
uc[44]=state[17].u - c[44] - qext[44];
uc[45]=state[18].u - c[45] - qext[45];
uc[46]=state[19].u - c[46] - qext[46];
uc[47]=state[20].u - c[47] - qext[47];
uc[48]=state[21].u - c[48] - qext[48];
uc[49]=-c[49];
uc[50]=-c[50];
uc[51]=-c[51];
uc[52]=-c[52];
uc[53]=-c[53];
uc[54]=-c[54] - fext0[1]*Si00[1][1] - fext0[2]*Si00[1][2] - fext0[3]*Si00[1][3];
uc[55]=-c[55] - fext0[1]*Si00[2][1] - fext0[2]*Si00[2][2] - fext0[3]*Si00[2][3];
uc[56]=-c[56] - fext0[1]*Si00[3][1] - fext0[2]*Si00[3][2] - fext0[3]*Si00[3][3];
uc[57]=-c[57] - fext0[4]*Si00[1][1] - fext0[5]*Si00[1][2] - fext0[6]*Si00[1][3];
uc[58]=-c[58] - fext0[4]*Si00[2][1] - fext0[5]*Si00[2][2] - fext0[6]*Si00[2][3];
uc[59]=-c[59] - fext0[4]*Si00[3][1] - fext0[5]*Si00[3][2] - fext0[6]*Si00[3][3];

/* now solve for accelerations: uc = H * thdd           */
/* Note: uc and H are calculated above */
Hmat[29][29] = Hmat[29][29] = H[1][1];
Hmat[29][30] = Hmat[30][29] = H[2][1];
Hmat[29][31] = Hmat[31][29] = H[3][1];
Hmat[29][1] = Hmat[1][29] = H[4][1];
Hmat[29][2] = Hmat[2][29] = H[5][1];
Hmat[29][3] = Hmat[3][29] = H[6][1];
Hmat[29][4] = Hmat[4][29] = H[7][1];
Hmat[29][5] = Hmat[5][29] = H[8][1];
Hmat[29][6] = Hmat[6][29] = H[9][1];
Hmat[29][7] = Hmat[7][29] = H[10][1];
Hmat[29][8] = Hmat[8][29] = H[12][1];
Hmat[29][9] = Hmat[9][29] = H[13][1];
Hmat[29][10] = Hmat[10][29] = H[14][1];
Hmat[29][11] = Hmat[11][29] = H[15][1];
Hmat[29][12] = Hmat[12][29] = H[16][1];
Hmat[29][13] = Hmat[13][29] = H[17][1];
Hmat[29][14] = Hmat[14][29] = H[18][1];
Hmat[29][32] = Hmat[32][29] = H[20][1];
Hmat[29][33] = Hmat[33][29] = H[21][1];
Hmat[29][34] = Hmat[34][29] = H[22][1];
Hmat[29][35] = Hmat[35][29] = H[23][1];
Hmat[29][36] = Hmat[36][29] = H[24][1];
Hmat[29][37] = Hmat[37][29] = H[26][1];
Hmat[29][38] = Hmat[38][29] = H[27][1];
Hmat[29][23] = Hmat[23][29] = H[30][1];
Hmat[29][22] = Hmat[22][29] = H[31][1];
Hmat[29][24] = Hmat[24][29] = H[32][1];
Hmat[29][25] = Hmat[25][29] = H[33][1];
Hmat[29][26] = Hmat[26][29] = H[34][1];
Hmat[29][27] = Hmat[27][29] = H[35][1];
Hmat[29][28] = Hmat[28][29] = H[36][1];
Hmat[29][16] = Hmat[16][29] = H[42][1];
Hmat[29][15] = Hmat[15][29] = H[43][1];
Hmat[29][17] = Hmat[17][29] = H[44][1];
Hmat[29][18] = Hmat[18][29] = H[45][1];
Hmat[29][19] = Hmat[19][29] = H[46][1];
Hmat[29][20] = Hmat[20][29] = H[47][1];
Hmat[29][21] = Hmat[21][29] = H[48][1];
Hmat[30][30] = Hmat[30][30] = H[2][2];
Hmat[30][31] = Hmat[31][30] = H[3][2];
Hmat[30][1] = Hmat[1][30] = H[4][2];
Hmat[30][2] = Hmat[2][30] = H[5][2];
Hmat[30][3] = Hmat[3][30] = H[6][2];
Hmat[30][4] = Hmat[4][30] = H[7][2];
Hmat[30][5] = Hmat[5][30] = H[8][2];
Hmat[30][6] = Hmat[6][30] = H[9][2];
Hmat[30][7] = Hmat[7][30] = H[10][2];
Hmat[30][8] = Hmat[8][30] = H[12][2];
Hmat[30][9] = Hmat[9][30] = H[13][2];
Hmat[30][10] = Hmat[10][30] = H[14][2];
Hmat[30][11] = Hmat[11][30] = H[15][2];
Hmat[30][12] = Hmat[12][30] = H[16][2];
Hmat[30][13] = Hmat[13][30] = H[17][2];
Hmat[30][14] = Hmat[14][30] = H[18][2];
Hmat[30][32] = Hmat[32][30] = H[20][2];
Hmat[30][33] = Hmat[33][30] = H[21][2];
Hmat[30][34] = Hmat[34][30] = H[22][2];
Hmat[30][35] = Hmat[35][30] = H[23][2];
Hmat[30][36] = Hmat[36][30] = H[24][2];
Hmat[30][37] = Hmat[37][30] = H[26][2];
Hmat[30][38] = Hmat[38][30] = H[27][2];
Hmat[30][23] = Hmat[23][30] = H[30][2];
Hmat[30][22] = Hmat[22][30] = H[31][2];
Hmat[30][24] = Hmat[24][30] = H[32][2];
Hmat[30][25] = Hmat[25][30] = H[33][2];
Hmat[30][26] = Hmat[26][30] = H[34][2];
Hmat[30][27] = Hmat[27][30] = H[35][2];
Hmat[30][28] = Hmat[28][30] = H[36][2];
Hmat[30][16] = Hmat[16][30] = H[42][2];
Hmat[30][15] = Hmat[15][30] = H[43][2];
Hmat[30][17] = Hmat[17][30] = H[44][2];
Hmat[30][18] = Hmat[18][30] = H[45][2];
Hmat[30][19] = Hmat[19][30] = H[46][2];
Hmat[30][20] = Hmat[20][30] = H[47][2];
Hmat[30][21] = Hmat[21][30] = H[48][2];
Hmat[31][31] = Hmat[31][31] = H[3][3];
Hmat[31][1] = Hmat[1][31] = H[4][3];
Hmat[31][2] = Hmat[2][31] = H[5][3];
Hmat[31][3] = Hmat[3][31] = H[6][3];
Hmat[31][4] = Hmat[4][31] = H[7][3];
Hmat[31][5] = Hmat[5][31] = H[8][3];
Hmat[31][6] = Hmat[6][31] = H[9][3];
Hmat[31][7] = Hmat[7][31] = H[10][3];
Hmat[31][8] = Hmat[8][31] = H[12][3];
Hmat[31][9] = Hmat[9][31] = H[13][3];
Hmat[31][10] = Hmat[10][31] = H[14][3];
Hmat[31][11] = Hmat[11][31] = H[15][3];
Hmat[31][12] = Hmat[12][31] = H[16][3];
Hmat[31][13] = Hmat[13][31] = H[17][3];
Hmat[31][14] = Hmat[14][31] = H[18][3];
Hmat[31][32] = Hmat[32][31] = H[20][3];
Hmat[31][33] = Hmat[33][31] = H[21][3];
Hmat[31][34] = Hmat[34][31] = H[22][3];
Hmat[31][35] = Hmat[35][31] = H[23][3];
Hmat[31][36] = Hmat[36][31] = H[24][3];
Hmat[31][37] = Hmat[37][31] = H[26][3];
Hmat[31][38] = Hmat[38][31] = H[27][3];
Hmat[31][23] = Hmat[23][31] = H[30][3];
Hmat[31][22] = Hmat[22][31] = H[31][3];
Hmat[31][24] = Hmat[24][31] = H[32][3];
Hmat[31][25] = Hmat[25][31] = H[33][3];
Hmat[31][26] = Hmat[26][31] = H[34][3];
Hmat[31][27] = Hmat[27][31] = H[35][3];
Hmat[31][28] = Hmat[28][31] = H[36][3];
Hmat[31][16] = Hmat[16][31] = H[42][3];
Hmat[31][15] = Hmat[15][31] = H[43][3];
Hmat[31][17] = Hmat[17][31] = H[44][3];
Hmat[31][18] = Hmat[18][31] = H[45][3];
Hmat[31][19] = Hmat[19][31] = H[46][3];
Hmat[31][20] = Hmat[20][31] = H[47][3];
Hmat[31][21] = Hmat[21][31] = H[48][3];
Hmat[1][1] = Hmat[1][1] = H[4][4];
Hmat[1][2] = Hmat[2][1] = H[5][4];
Hmat[1][3] = Hmat[3][1] = H[6][4];
Hmat[1][4] = Hmat[4][1] = H[7][4];
Hmat[1][5] = Hmat[5][1] = H[8][4];
Hmat[1][6] = Hmat[6][1] = H[9][4];
Hmat[1][7] = Hmat[7][1] = H[10][4];
Hmat[1][8] = Hmat[8][1] = H[12][4];
Hmat[1][9] = Hmat[9][1] = H[13][4];
Hmat[1][10] = Hmat[10][1] = H[14][4];
Hmat[1][11] = Hmat[11][1] = H[15][4];
Hmat[1][12] = Hmat[12][1] = H[16][4];
Hmat[1][13] = Hmat[13][1] = H[17][4];
Hmat[1][14] = Hmat[14][1] = H[18][4];
Hmat[1][32] = Hmat[32][1] = H[20][4];
Hmat[1][33] = Hmat[33][1] = H[21][4];
Hmat[1][34] = Hmat[34][1] = H[22][4];
Hmat[1][35] = Hmat[35][1] = H[23][4];
Hmat[1][36] = Hmat[36][1] = H[24][4];
Hmat[1][37] = Hmat[37][1] = H[26][4];
Hmat[1][38] = Hmat[38][1] = H[27][4];
Hmat[1][23] = Hmat[23][1] = H[30][4];
Hmat[1][22] = Hmat[22][1] = H[31][4];
Hmat[1][24] = Hmat[24][1] = H[32][4];
Hmat[1][25] = Hmat[25][1] = H[33][4];
Hmat[1][26] = Hmat[26][1] = H[34][4];
Hmat[1][27] = Hmat[27][1] = H[35][4];
Hmat[1][28] = Hmat[28][1] = H[36][4];
Hmat[1][16] = Hmat[16][1] = H[42][4];
Hmat[1][15] = Hmat[15][1] = H[43][4];
Hmat[1][17] = Hmat[17][1] = H[44][4];
Hmat[1][18] = Hmat[18][1] = H[45][4];
Hmat[1][19] = Hmat[19][1] = H[46][4];
Hmat[1][20] = Hmat[20][1] = H[47][4];
Hmat[1][21] = Hmat[21][1] = H[48][4];
Hmat[2][2] = Hmat[2][2] = H[5][5];
Hmat[2][3] = Hmat[3][2] = H[6][5];
Hmat[2][4] = Hmat[4][2] = H[7][5];
Hmat[2][5] = Hmat[5][2] = H[8][5];
Hmat[2][6] = Hmat[6][2] = H[9][5];
Hmat[2][7] = Hmat[7][2] = H[10][5];
Hmat[2][8] = Hmat[8][2] = H[12][5];
Hmat[2][9] = Hmat[9][2] = H[13][5];
Hmat[2][10] = Hmat[10][2] = H[14][5];
Hmat[2][11] = Hmat[11][2] = H[15][5];
Hmat[2][12] = Hmat[12][2] = H[16][5];
Hmat[2][13] = Hmat[13][2] = H[17][5];
Hmat[2][14] = Hmat[14][2] = H[18][5];
Hmat[2][32] = Hmat[32][2] = H[20][5];
Hmat[2][33] = Hmat[33][2] = H[21][5];
Hmat[2][34] = Hmat[34][2] = H[22][5];
Hmat[2][35] = Hmat[35][2] = H[23][5];
Hmat[2][36] = Hmat[36][2] = H[24][5];
Hmat[2][37] = Hmat[37][2] = H[26][5];
Hmat[2][38] = Hmat[38][2] = H[27][5];
Hmat[2][23] = Hmat[23][2] = H[30][5];
Hmat[2][22] = Hmat[22][2] = H[31][5];
Hmat[2][24] = Hmat[24][2] = H[32][5];
Hmat[2][25] = Hmat[25][2] = H[33][5];
Hmat[2][26] = Hmat[26][2] = H[34][5];
Hmat[2][27] = Hmat[27][2] = H[35][5];
Hmat[2][28] = Hmat[28][2] = H[36][5];
Hmat[2][16] = Hmat[16][2] = H[42][5];
Hmat[2][15] = Hmat[15][2] = H[43][5];
Hmat[2][17] = Hmat[17][2] = H[44][5];
Hmat[2][18] = Hmat[18][2] = H[45][5];
Hmat[2][19] = Hmat[19][2] = H[46][5];
Hmat[2][20] = Hmat[20][2] = H[47][5];
Hmat[2][21] = Hmat[21][2] = H[48][5];
Hmat[3][3] = Hmat[3][3] = H[6][6];
Hmat[3][4] = Hmat[4][3] = H[7][6];
Hmat[3][5] = Hmat[5][3] = H[8][6];
Hmat[3][6] = Hmat[6][3] = H[9][6];
Hmat[3][7] = Hmat[7][3] = H[10][6];
Hmat[3][8] = Hmat[8][3] = H[12][6];
Hmat[3][9] = Hmat[9][3] = H[13][6];
Hmat[3][10] = Hmat[10][3] = H[14][6];
Hmat[3][11] = Hmat[11][3] = H[15][6];
Hmat[3][12] = Hmat[12][3] = H[16][6];
Hmat[3][13] = Hmat[13][3] = H[17][6];
Hmat[3][14] = Hmat[14][3] = H[18][6];
Hmat[3][32] = Hmat[32][3] = H[20][6];
Hmat[3][33] = Hmat[33][3] = H[21][6];
Hmat[3][34] = Hmat[34][3] = H[22][6];
Hmat[3][35] = Hmat[35][3] = H[23][6];
Hmat[3][36] = Hmat[36][3] = H[24][6];
Hmat[3][37] = Hmat[37][3] = H[26][6];
Hmat[3][38] = Hmat[38][3] = H[27][6];
Hmat[3][23] = Hmat[23][3] = H[30][6];
Hmat[3][22] = Hmat[22][3] = H[31][6];
Hmat[3][24] = Hmat[24][3] = H[32][6];
Hmat[3][25] = Hmat[25][3] = H[33][6];
Hmat[3][26] = Hmat[26][3] = H[34][6];
Hmat[3][27] = Hmat[27][3] = H[35][6];
Hmat[3][28] = Hmat[28][3] = H[36][6];
Hmat[3][16] = Hmat[16][3] = H[42][6];
Hmat[3][15] = Hmat[15][3] = H[43][6];
Hmat[3][17] = Hmat[17][3] = H[44][6];
Hmat[3][18] = Hmat[18][3] = H[45][6];
Hmat[3][19] = Hmat[19][3] = H[46][6];
Hmat[3][20] = Hmat[20][3] = H[47][6];
Hmat[3][21] = Hmat[21][3] = H[48][6];
Hmat[4][4] = Hmat[4][4] = H[7][7];
Hmat[4][5] = Hmat[5][4] = H[8][7];
Hmat[4][6] = Hmat[6][4] = H[9][7];
Hmat[4][7] = Hmat[7][4] = H[10][7];
Hmat[4][8] = Hmat[8][4] = H[12][7];
Hmat[4][9] = Hmat[9][4] = H[13][7];
Hmat[4][10] = Hmat[10][4] = H[14][7];
Hmat[4][11] = Hmat[11][4] = H[15][7];
Hmat[4][12] = Hmat[12][4] = H[16][7];
Hmat[4][13] = Hmat[13][4] = H[17][7];
Hmat[4][14] = Hmat[14][4] = H[18][7];
Hmat[4][32] = Hmat[32][4] = H[20][7];
Hmat[4][33] = Hmat[33][4] = H[21][7];
Hmat[4][34] = Hmat[34][4] = H[22][7];
Hmat[4][35] = Hmat[35][4] = H[23][7];
Hmat[4][36] = Hmat[36][4] = H[24][7];
Hmat[4][37] = Hmat[37][4] = H[26][7];
Hmat[4][38] = Hmat[38][4] = H[27][7];
Hmat[4][23] = Hmat[23][4] = H[30][7];
Hmat[4][22] = Hmat[22][4] = H[31][7];
Hmat[4][24] = Hmat[24][4] = H[32][7];
Hmat[4][25] = Hmat[25][4] = H[33][7];
Hmat[4][26] = Hmat[26][4] = H[34][7];
Hmat[4][27] = Hmat[27][4] = H[35][7];
Hmat[4][28] = Hmat[28][4] = H[36][7];
Hmat[4][16] = Hmat[16][4] = H[42][7];
Hmat[4][15] = Hmat[15][4] = H[43][7];
Hmat[4][17] = Hmat[17][4] = H[44][7];
Hmat[4][18] = Hmat[18][4] = H[45][7];
Hmat[4][19] = Hmat[19][4] = H[46][7];
Hmat[4][20] = Hmat[20][4] = H[47][7];
Hmat[4][21] = Hmat[21][4] = H[48][7];
Hmat[5][5] = Hmat[5][5] = H[8][8];
Hmat[5][6] = Hmat[6][5] = H[9][8];
Hmat[5][7] = Hmat[7][5] = H[10][8];
Hmat[5][8] = Hmat[8][5] = H[12][8];
Hmat[5][9] = Hmat[9][5] = H[13][8];
Hmat[5][10] = Hmat[10][5] = H[14][8];
Hmat[5][11] = Hmat[11][5] = H[15][8];
Hmat[5][12] = Hmat[12][5] = H[16][8];
Hmat[5][13] = Hmat[13][5] = H[17][8];
Hmat[5][14] = Hmat[14][5] = H[18][8];
Hmat[5][32] = Hmat[32][5] = H[20][8];
Hmat[5][33] = Hmat[33][5] = H[21][8];
Hmat[5][34] = Hmat[34][5] = H[22][8];
Hmat[5][35] = Hmat[35][5] = H[23][8];
Hmat[5][36] = Hmat[36][5] = H[24][8];
Hmat[5][37] = Hmat[37][5] = H[26][8];
Hmat[5][38] = Hmat[38][5] = H[27][8];
Hmat[5][23] = Hmat[23][5] = H[30][8];
Hmat[5][22] = Hmat[22][5] = H[31][8];
Hmat[5][24] = Hmat[24][5] = H[32][8];
Hmat[5][25] = Hmat[25][5] = H[33][8];
Hmat[5][26] = Hmat[26][5] = H[34][8];
Hmat[5][27] = Hmat[27][5] = H[35][8];
Hmat[5][28] = Hmat[28][5] = H[36][8];
Hmat[5][16] = Hmat[16][5] = H[42][8];
Hmat[5][15] = Hmat[15][5] = H[43][8];
Hmat[5][17] = Hmat[17][5] = H[44][8];
Hmat[5][18] = Hmat[18][5] = H[45][8];
Hmat[5][19] = Hmat[19][5] = H[46][8];
Hmat[5][20] = Hmat[20][5] = H[47][8];
Hmat[5][21] = Hmat[21][5] = H[48][8];
Hmat[6][6] = Hmat[6][6] = H[9][9];
Hmat[6][7] = Hmat[7][6] = H[10][9];
Hmat[6][8] = Hmat[8][6] = H[12][9];
Hmat[6][9] = Hmat[9][6] = H[13][9];
Hmat[6][10] = Hmat[10][6] = H[14][9];
Hmat[6][11] = Hmat[11][6] = H[15][9];
Hmat[6][12] = Hmat[12][6] = H[16][9];
Hmat[6][13] = Hmat[13][6] = H[17][9];
Hmat[6][14] = Hmat[14][6] = H[18][9];
Hmat[6][32] = Hmat[32][6] = H[20][9];
Hmat[6][33] = Hmat[33][6] = H[21][9];
Hmat[6][34] = Hmat[34][6] = H[22][9];
Hmat[6][35] = Hmat[35][6] = H[23][9];
Hmat[6][36] = Hmat[36][6] = H[24][9];
Hmat[6][37] = Hmat[37][6] = H[26][9];
Hmat[6][38] = Hmat[38][6] = H[27][9];
Hmat[6][23] = Hmat[23][6] = H[30][9];
Hmat[6][22] = Hmat[22][6] = H[31][9];
Hmat[6][24] = Hmat[24][6] = H[32][9];
Hmat[6][25] = Hmat[25][6] = H[33][9];
Hmat[6][26] = Hmat[26][6] = H[34][9];
Hmat[6][27] = Hmat[27][6] = H[35][9];
Hmat[6][28] = Hmat[28][6] = H[36][9];
Hmat[6][16] = Hmat[16][6] = H[42][9];
Hmat[6][15] = Hmat[15][6] = H[43][9];
Hmat[6][17] = Hmat[17][6] = H[44][9];
Hmat[6][18] = Hmat[18][6] = H[45][9];
Hmat[6][19] = Hmat[19][6] = H[46][9];
Hmat[6][20] = Hmat[20][6] = H[47][9];
Hmat[6][21] = Hmat[21][6] = H[48][9];
Hmat[7][7] = Hmat[7][7] = H[10][10];
Hmat[7][8] = Hmat[8][7] = H[12][10];
Hmat[7][9] = Hmat[9][7] = H[13][10];
Hmat[7][10] = Hmat[10][7] = H[14][10];
Hmat[7][11] = Hmat[11][7] = H[15][10];
Hmat[7][12] = Hmat[12][7] = H[16][10];
Hmat[7][13] = Hmat[13][7] = H[17][10];
Hmat[7][14] = Hmat[14][7] = H[18][10];
Hmat[7][32] = Hmat[32][7] = H[20][10];
Hmat[7][33] = Hmat[33][7] = H[21][10];
Hmat[7][34] = Hmat[34][7] = H[22][10];
Hmat[7][35] = Hmat[35][7] = H[23][10];
Hmat[7][36] = Hmat[36][7] = H[24][10];
Hmat[7][37] = Hmat[37][7] = H[26][10];
Hmat[7][38] = Hmat[38][7] = H[27][10];
Hmat[7][23] = Hmat[23][7] = H[30][10];
Hmat[7][22] = Hmat[22][7] = H[31][10];
Hmat[7][24] = Hmat[24][7] = H[32][10];
Hmat[7][25] = Hmat[25][7] = H[33][10];
Hmat[7][26] = Hmat[26][7] = H[34][10];
Hmat[7][27] = Hmat[27][7] = H[35][10];
Hmat[7][28] = Hmat[28][7] = H[36][10];
Hmat[7][16] = Hmat[16][7] = H[42][10];
Hmat[7][15] = Hmat[15][7] = H[43][10];
Hmat[7][17] = Hmat[17][7] = H[44][10];
Hmat[7][18] = Hmat[18][7] = H[45][10];
Hmat[7][19] = Hmat[19][7] = H[46][10];
Hmat[7][20] = Hmat[20][7] = H[47][10];
Hmat[7][21] = Hmat[21][7] = H[48][10];
Hmat[8][8] = Hmat[8][8] = H[12][12];
Hmat[8][9] = Hmat[9][8] = H[13][12];
Hmat[8][10] = Hmat[10][8] = H[14][12];
Hmat[8][11] = Hmat[11][8] = H[15][12];
Hmat[8][12] = Hmat[12][8] = H[16][12];
Hmat[8][13] = Hmat[13][8] = H[17][12];
Hmat[8][14] = Hmat[14][8] = H[18][12];
Hmat[8][32] = Hmat[32][8] = H[20][12];
Hmat[8][33] = Hmat[33][8] = H[21][12];
Hmat[8][34] = Hmat[34][8] = H[22][12];
Hmat[8][35] = Hmat[35][8] = H[23][12];
Hmat[8][36] = Hmat[36][8] = H[24][12];
Hmat[8][37] = Hmat[37][8] = H[26][12];
Hmat[8][38] = Hmat[38][8] = H[27][12];
Hmat[8][23] = Hmat[23][8] = H[30][12];
Hmat[8][22] = Hmat[22][8] = H[31][12];
Hmat[8][24] = Hmat[24][8] = H[32][12];
Hmat[8][25] = Hmat[25][8] = H[33][12];
Hmat[8][26] = Hmat[26][8] = H[34][12];
Hmat[8][27] = Hmat[27][8] = H[35][12];
Hmat[8][28] = Hmat[28][8] = H[36][12];
Hmat[8][16] = Hmat[16][8] = H[42][12];
Hmat[8][15] = Hmat[15][8] = H[43][12];
Hmat[8][17] = Hmat[17][8] = H[44][12];
Hmat[8][18] = Hmat[18][8] = H[45][12];
Hmat[8][19] = Hmat[19][8] = H[46][12];
Hmat[8][20] = Hmat[20][8] = H[47][12];
Hmat[8][21] = Hmat[21][8] = H[48][12];
Hmat[9][9] = Hmat[9][9] = H[13][13];
Hmat[9][10] = Hmat[10][9] = H[14][13];
Hmat[9][11] = Hmat[11][9] = H[15][13];
Hmat[9][12] = Hmat[12][9] = H[16][13];
Hmat[9][13] = Hmat[13][9] = H[17][13];
Hmat[9][14] = Hmat[14][9] = H[18][13];
Hmat[9][32] = Hmat[32][9] = H[20][13];
Hmat[9][33] = Hmat[33][9] = H[21][13];
Hmat[9][34] = Hmat[34][9] = H[22][13];
Hmat[9][35] = Hmat[35][9] = H[23][13];
Hmat[9][36] = Hmat[36][9] = H[24][13];
Hmat[9][37] = Hmat[37][9] = H[26][13];
Hmat[9][38] = Hmat[38][9] = H[27][13];
Hmat[9][23] = Hmat[23][9] = H[30][13];
Hmat[9][22] = Hmat[22][9] = H[31][13];
Hmat[9][24] = Hmat[24][9] = H[32][13];
Hmat[9][25] = Hmat[25][9] = H[33][13];
Hmat[9][26] = Hmat[26][9] = H[34][13];
Hmat[9][27] = Hmat[27][9] = H[35][13];
Hmat[9][28] = Hmat[28][9] = H[36][13];
Hmat[9][16] = Hmat[16][9] = H[42][13];
Hmat[9][15] = Hmat[15][9] = H[43][13];
Hmat[9][17] = Hmat[17][9] = H[44][13];
Hmat[9][18] = Hmat[18][9] = H[45][13];
Hmat[9][19] = Hmat[19][9] = H[46][13];
Hmat[9][20] = Hmat[20][9] = H[47][13];
Hmat[9][21] = Hmat[21][9] = H[48][13];
Hmat[10][10] = Hmat[10][10] = H[14][14];
Hmat[10][11] = Hmat[11][10] = H[15][14];
Hmat[10][12] = Hmat[12][10] = H[16][14];
Hmat[10][13] = Hmat[13][10] = H[17][14];
Hmat[10][14] = Hmat[14][10] = H[18][14];
Hmat[10][32] = Hmat[32][10] = H[20][14];
Hmat[10][33] = Hmat[33][10] = H[21][14];
Hmat[10][34] = Hmat[34][10] = H[22][14];
Hmat[10][35] = Hmat[35][10] = H[23][14];
Hmat[10][36] = Hmat[36][10] = H[24][14];
Hmat[10][37] = Hmat[37][10] = H[26][14];
Hmat[10][38] = Hmat[38][10] = H[27][14];
Hmat[10][23] = Hmat[23][10] = H[30][14];
Hmat[10][22] = Hmat[22][10] = H[31][14];
Hmat[10][24] = Hmat[24][10] = H[32][14];
Hmat[10][25] = Hmat[25][10] = H[33][14];
Hmat[10][26] = Hmat[26][10] = H[34][14];
Hmat[10][27] = Hmat[27][10] = H[35][14];
Hmat[10][28] = Hmat[28][10] = H[36][14];
Hmat[10][16] = Hmat[16][10] = H[42][14];
Hmat[10][15] = Hmat[15][10] = H[43][14];
Hmat[10][17] = Hmat[17][10] = H[44][14];
Hmat[10][18] = Hmat[18][10] = H[45][14];
Hmat[10][19] = Hmat[19][10] = H[46][14];
Hmat[10][20] = Hmat[20][10] = H[47][14];
Hmat[10][21] = Hmat[21][10] = H[48][14];
Hmat[11][11] = Hmat[11][11] = H[15][15];
Hmat[11][12] = Hmat[12][11] = H[16][15];
Hmat[11][13] = Hmat[13][11] = H[17][15];
Hmat[11][14] = Hmat[14][11] = H[18][15];
Hmat[11][32] = Hmat[32][11] = H[20][15];
Hmat[11][33] = Hmat[33][11] = H[21][15];
Hmat[11][34] = Hmat[34][11] = H[22][15];
Hmat[11][35] = Hmat[35][11] = H[23][15];
Hmat[11][36] = Hmat[36][11] = H[24][15];
Hmat[11][37] = Hmat[37][11] = H[26][15];
Hmat[11][38] = Hmat[38][11] = H[27][15];
Hmat[11][23] = Hmat[23][11] = H[30][15];
Hmat[11][22] = Hmat[22][11] = H[31][15];
Hmat[11][24] = Hmat[24][11] = H[32][15];
Hmat[11][25] = Hmat[25][11] = H[33][15];
Hmat[11][26] = Hmat[26][11] = H[34][15];
Hmat[11][27] = Hmat[27][11] = H[35][15];
Hmat[11][28] = Hmat[28][11] = H[36][15];
Hmat[11][16] = Hmat[16][11] = H[42][15];
Hmat[11][15] = Hmat[15][11] = H[43][15];
Hmat[11][17] = Hmat[17][11] = H[44][15];
Hmat[11][18] = Hmat[18][11] = H[45][15];
Hmat[11][19] = Hmat[19][11] = H[46][15];
Hmat[11][20] = Hmat[20][11] = H[47][15];
Hmat[11][21] = Hmat[21][11] = H[48][15];
Hmat[12][12] = Hmat[12][12] = H[16][16];
Hmat[12][13] = Hmat[13][12] = H[17][16];
Hmat[12][14] = Hmat[14][12] = H[18][16];
Hmat[12][32] = Hmat[32][12] = H[20][16];
Hmat[12][33] = Hmat[33][12] = H[21][16];
Hmat[12][34] = Hmat[34][12] = H[22][16];
Hmat[12][35] = Hmat[35][12] = H[23][16];
Hmat[12][36] = Hmat[36][12] = H[24][16];
Hmat[12][37] = Hmat[37][12] = H[26][16];
Hmat[12][38] = Hmat[38][12] = H[27][16];
Hmat[12][23] = Hmat[23][12] = H[30][16];
Hmat[12][22] = Hmat[22][12] = H[31][16];
Hmat[12][24] = Hmat[24][12] = H[32][16];
Hmat[12][25] = Hmat[25][12] = H[33][16];
Hmat[12][26] = Hmat[26][12] = H[34][16];
Hmat[12][27] = Hmat[27][12] = H[35][16];
Hmat[12][28] = Hmat[28][12] = H[36][16];
Hmat[12][16] = Hmat[16][12] = H[42][16];
Hmat[12][15] = Hmat[15][12] = H[43][16];
Hmat[12][17] = Hmat[17][12] = H[44][16];
Hmat[12][18] = Hmat[18][12] = H[45][16];
Hmat[12][19] = Hmat[19][12] = H[46][16];
Hmat[12][20] = Hmat[20][12] = H[47][16];
Hmat[12][21] = Hmat[21][12] = H[48][16];
Hmat[13][13] = Hmat[13][13] = H[17][17];
Hmat[13][14] = Hmat[14][13] = H[18][17];
Hmat[13][32] = Hmat[32][13] = H[20][17];
Hmat[13][33] = Hmat[33][13] = H[21][17];
Hmat[13][34] = Hmat[34][13] = H[22][17];
Hmat[13][35] = Hmat[35][13] = H[23][17];
Hmat[13][36] = Hmat[36][13] = H[24][17];
Hmat[13][37] = Hmat[37][13] = H[26][17];
Hmat[13][38] = Hmat[38][13] = H[27][17];
Hmat[13][23] = Hmat[23][13] = H[30][17];
Hmat[13][22] = Hmat[22][13] = H[31][17];
Hmat[13][24] = Hmat[24][13] = H[32][17];
Hmat[13][25] = Hmat[25][13] = H[33][17];
Hmat[13][26] = Hmat[26][13] = H[34][17];
Hmat[13][27] = Hmat[27][13] = H[35][17];
Hmat[13][28] = Hmat[28][13] = H[36][17];
Hmat[13][16] = Hmat[16][13] = H[42][17];
Hmat[13][15] = Hmat[15][13] = H[43][17];
Hmat[13][17] = Hmat[17][13] = H[44][17];
Hmat[13][18] = Hmat[18][13] = H[45][17];
Hmat[13][19] = Hmat[19][13] = H[46][17];
Hmat[13][20] = Hmat[20][13] = H[47][17];
Hmat[13][21] = Hmat[21][13] = H[48][17];
Hmat[14][14] = Hmat[14][14] = H[18][18];
Hmat[14][32] = Hmat[32][14] = H[20][18];
Hmat[14][33] = Hmat[33][14] = H[21][18];
Hmat[14][34] = Hmat[34][14] = H[22][18];
Hmat[14][35] = Hmat[35][14] = H[23][18];
Hmat[14][36] = Hmat[36][14] = H[24][18];
Hmat[14][37] = Hmat[37][14] = H[26][18];
Hmat[14][38] = Hmat[38][14] = H[27][18];
Hmat[14][23] = Hmat[23][14] = H[30][18];
Hmat[14][22] = Hmat[22][14] = H[31][18];
Hmat[14][24] = Hmat[24][14] = H[32][18];
Hmat[14][25] = Hmat[25][14] = H[33][18];
Hmat[14][26] = Hmat[26][14] = H[34][18];
Hmat[14][27] = Hmat[27][14] = H[35][18];
Hmat[14][28] = Hmat[28][14] = H[36][18];
Hmat[14][16] = Hmat[16][14] = H[42][18];
Hmat[14][15] = Hmat[15][14] = H[43][18];
Hmat[14][17] = Hmat[17][14] = H[44][18];
Hmat[14][18] = Hmat[18][14] = H[45][18];
Hmat[14][19] = Hmat[19][14] = H[46][18];
Hmat[14][20] = Hmat[20][14] = H[47][18];
Hmat[14][21] = Hmat[21][14] = H[48][18];
Hmat[32][32] = Hmat[32][32] = H[20][20];
Hmat[32][33] = Hmat[33][32] = H[21][20];
Hmat[32][34] = Hmat[34][32] = H[22][20];
Hmat[32][35] = Hmat[35][32] = H[23][20];
Hmat[32][36] = Hmat[36][32] = H[24][20];
Hmat[32][37] = Hmat[37][32] = H[26][20];
Hmat[32][38] = Hmat[38][32] = H[27][20];
Hmat[32][23] = Hmat[23][32] = H[30][20];
Hmat[32][22] = Hmat[22][32] = H[31][20];
Hmat[32][24] = Hmat[24][32] = H[32][20];
Hmat[32][25] = Hmat[25][32] = H[33][20];
Hmat[32][26] = Hmat[26][32] = H[34][20];
Hmat[32][27] = Hmat[27][32] = H[35][20];
Hmat[32][28] = Hmat[28][32] = H[36][20];
Hmat[32][16] = Hmat[16][32] = H[42][20];
Hmat[32][15] = Hmat[15][32] = H[43][20];
Hmat[32][17] = Hmat[17][32] = H[44][20];
Hmat[32][18] = Hmat[18][32] = H[45][20];
Hmat[32][19] = Hmat[19][32] = H[46][20];
Hmat[32][20] = Hmat[20][32] = H[47][20];
Hmat[32][21] = Hmat[21][32] = H[48][20];
Hmat[33][33] = Hmat[33][33] = H[21][21];
Hmat[33][34] = Hmat[34][33] = H[22][21];
Hmat[33][35] = Hmat[35][33] = H[23][21];
Hmat[33][36] = Hmat[36][33] = H[24][21];
Hmat[33][37] = Hmat[37][33] = H[26][21];
Hmat[33][38] = Hmat[38][33] = H[27][21];
Hmat[33][23] = Hmat[23][33] = H[30][21];
Hmat[33][22] = Hmat[22][33] = H[31][21];
Hmat[33][24] = Hmat[24][33] = H[32][21];
Hmat[33][25] = Hmat[25][33] = H[33][21];
Hmat[33][26] = Hmat[26][33] = H[34][21];
Hmat[33][27] = Hmat[27][33] = H[35][21];
Hmat[33][28] = Hmat[28][33] = H[36][21];
Hmat[33][16] = Hmat[16][33] = H[42][21];
Hmat[33][15] = Hmat[15][33] = H[43][21];
Hmat[33][17] = Hmat[17][33] = H[44][21];
Hmat[33][18] = Hmat[18][33] = H[45][21];
Hmat[33][19] = Hmat[19][33] = H[46][21];
Hmat[33][20] = Hmat[20][33] = H[47][21];
Hmat[33][21] = Hmat[21][33] = H[48][21];
Hmat[34][34] = Hmat[34][34] = H[22][22];
Hmat[34][35] = Hmat[35][34] = H[23][22];
Hmat[34][36] = Hmat[36][34] = H[24][22];
Hmat[34][37] = Hmat[37][34] = H[26][22];
Hmat[34][38] = Hmat[38][34] = H[27][22];
Hmat[34][23] = Hmat[23][34] = H[30][22];
Hmat[34][22] = Hmat[22][34] = H[31][22];
Hmat[34][24] = Hmat[24][34] = H[32][22];
Hmat[34][25] = Hmat[25][34] = H[33][22];
Hmat[34][26] = Hmat[26][34] = H[34][22];
Hmat[34][27] = Hmat[27][34] = H[35][22];
Hmat[34][28] = Hmat[28][34] = H[36][22];
Hmat[34][16] = Hmat[16][34] = H[42][22];
Hmat[34][15] = Hmat[15][34] = H[43][22];
Hmat[34][17] = Hmat[17][34] = H[44][22];
Hmat[34][18] = Hmat[18][34] = H[45][22];
Hmat[34][19] = Hmat[19][34] = H[46][22];
Hmat[34][20] = Hmat[20][34] = H[47][22];
Hmat[34][21] = Hmat[21][34] = H[48][22];
Hmat[35][35] = Hmat[35][35] = H[23][23];
Hmat[35][36] = Hmat[36][35] = H[24][23];
Hmat[35][37] = Hmat[37][35] = H[26][23];
Hmat[35][38] = Hmat[38][35] = H[27][23];
Hmat[35][23] = Hmat[23][35] = H[30][23];
Hmat[35][22] = Hmat[22][35] = H[31][23];
Hmat[35][24] = Hmat[24][35] = H[32][23];
Hmat[35][25] = Hmat[25][35] = H[33][23];
Hmat[35][26] = Hmat[26][35] = H[34][23];
Hmat[35][27] = Hmat[27][35] = H[35][23];
Hmat[35][28] = Hmat[28][35] = H[36][23];
Hmat[35][16] = Hmat[16][35] = H[42][23];
Hmat[35][15] = Hmat[15][35] = H[43][23];
Hmat[35][17] = Hmat[17][35] = H[44][23];
Hmat[35][18] = Hmat[18][35] = H[45][23];
Hmat[35][19] = Hmat[19][35] = H[46][23];
Hmat[35][20] = Hmat[20][35] = H[47][23];
Hmat[35][21] = Hmat[21][35] = H[48][23];
Hmat[36][36] = Hmat[36][36] = H[24][24];
Hmat[36][37] = Hmat[37][36] = H[26][24];
Hmat[36][38] = Hmat[38][36] = H[27][24];
Hmat[36][23] = Hmat[23][36] = H[30][24];
Hmat[36][22] = Hmat[22][36] = H[31][24];
Hmat[36][24] = Hmat[24][36] = H[32][24];
Hmat[36][25] = Hmat[25][36] = H[33][24];
Hmat[36][26] = Hmat[26][36] = H[34][24];
Hmat[36][27] = Hmat[27][36] = H[35][24];
Hmat[36][28] = Hmat[28][36] = H[36][24];
Hmat[36][16] = Hmat[16][36] = H[42][24];
Hmat[36][15] = Hmat[15][36] = H[43][24];
Hmat[36][17] = Hmat[17][36] = H[44][24];
Hmat[36][18] = Hmat[18][36] = H[45][24];
Hmat[36][19] = Hmat[19][36] = H[46][24];
Hmat[36][20] = Hmat[20][36] = H[47][24];
Hmat[36][21] = Hmat[21][36] = H[48][24];
Hmat[37][37] = Hmat[37][37] = H[26][26];
Hmat[37][38] = Hmat[38][37] = H[27][26];
Hmat[37][23] = Hmat[23][37] = H[30][26];
Hmat[37][22] = Hmat[22][37] = H[31][26];
Hmat[37][24] = Hmat[24][37] = H[32][26];
Hmat[37][25] = Hmat[25][37] = H[33][26];
Hmat[37][26] = Hmat[26][37] = H[34][26];
Hmat[37][27] = Hmat[27][37] = H[35][26];
Hmat[37][28] = Hmat[28][37] = H[36][26];
Hmat[37][16] = Hmat[16][37] = H[42][26];
Hmat[37][15] = Hmat[15][37] = H[43][26];
Hmat[37][17] = Hmat[17][37] = H[44][26];
Hmat[37][18] = Hmat[18][37] = H[45][26];
Hmat[37][19] = Hmat[19][37] = H[46][26];
Hmat[37][20] = Hmat[20][37] = H[47][26];
Hmat[37][21] = Hmat[21][37] = H[48][26];
Hmat[38][38] = Hmat[38][38] = H[27][27];
Hmat[38][23] = Hmat[23][38] = H[30][27];
Hmat[38][22] = Hmat[22][38] = H[31][27];
Hmat[38][24] = Hmat[24][38] = H[32][27];
Hmat[38][25] = Hmat[25][38] = H[33][27];
Hmat[38][26] = Hmat[26][38] = H[34][27];
Hmat[38][27] = Hmat[27][38] = H[35][27];
Hmat[38][28] = Hmat[28][38] = H[36][27];
Hmat[38][16] = Hmat[16][38] = H[42][27];
Hmat[38][15] = Hmat[15][38] = H[43][27];
Hmat[38][17] = Hmat[17][38] = H[44][27];
Hmat[38][18] = Hmat[18][38] = H[45][27];
Hmat[38][19] = Hmat[19][38] = H[46][27];
Hmat[38][20] = Hmat[20][38] = H[47][27];
Hmat[38][21] = Hmat[21][38] = H[48][27];
Hmat[23][23] = Hmat[23][23] = H[30][30];
Hmat[23][22] = Hmat[22][23] = H[31][30];
Hmat[23][24] = Hmat[24][23] = H[32][30];
Hmat[23][25] = Hmat[25][23] = H[33][30];
Hmat[23][26] = Hmat[26][23] = H[34][30];
Hmat[23][27] = Hmat[27][23] = H[35][30];
Hmat[23][28] = Hmat[28][23] = H[36][30];
Hmat[23][16] = Hmat[16][23] = H[42][30];
Hmat[23][15] = Hmat[15][23] = H[43][30];
Hmat[23][17] = Hmat[17][23] = H[44][30];
Hmat[23][18] = Hmat[18][23] = H[45][30];
Hmat[23][19] = Hmat[19][23] = H[46][30];
Hmat[23][20] = Hmat[20][23] = H[47][30];
Hmat[23][21] = Hmat[21][23] = H[48][30];
Hmat[22][22] = Hmat[22][22] = H[31][31];
Hmat[22][24] = Hmat[24][22] = H[32][31];
Hmat[22][25] = Hmat[25][22] = H[33][31];
Hmat[22][26] = Hmat[26][22] = H[34][31];
Hmat[22][27] = Hmat[27][22] = H[35][31];
Hmat[22][28] = Hmat[28][22] = H[36][31];
Hmat[22][16] = Hmat[16][22] = H[42][31];
Hmat[22][15] = Hmat[15][22] = H[43][31];
Hmat[22][17] = Hmat[17][22] = H[44][31];
Hmat[22][18] = Hmat[18][22] = H[45][31];
Hmat[22][19] = Hmat[19][22] = H[46][31];
Hmat[22][20] = Hmat[20][22] = H[47][31];
Hmat[22][21] = Hmat[21][22] = H[48][31];
Hmat[24][24] = Hmat[24][24] = H[32][32];
Hmat[24][25] = Hmat[25][24] = H[33][32];
Hmat[24][26] = Hmat[26][24] = H[34][32];
Hmat[24][27] = Hmat[27][24] = H[35][32];
Hmat[24][28] = Hmat[28][24] = H[36][32];
Hmat[24][16] = Hmat[16][24] = H[42][32];
Hmat[24][15] = Hmat[15][24] = H[43][32];
Hmat[24][17] = Hmat[17][24] = H[44][32];
Hmat[24][18] = Hmat[18][24] = H[45][32];
Hmat[24][19] = Hmat[19][24] = H[46][32];
Hmat[24][20] = Hmat[20][24] = H[47][32];
Hmat[24][21] = Hmat[21][24] = H[48][32];
Hmat[25][25] = Hmat[25][25] = H[33][33];
Hmat[25][26] = Hmat[26][25] = H[34][33];
Hmat[25][27] = Hmat[27][25] = H[35][33];
Hmat[25][28] = Hmat[28][25] = H[36][33];
Hmat[25][16] = Hmat[16][25] = H[42][33];
Hmat[25][15] = Hmat[15][25] = H[43][33];
Hmat[25][17] = Hmat[17][25] = H[44][33];
Hmat[25][18] = Hmat[18][25] = H[45][33];
Hmat[25][19] = Hmat[19][25] = H[46][33];
Hmat[25][20] = Hmat[20][25] = H[47][33];
Hmat[25][21] = Hmat[21][25] = H[48][33];
Hmat[26][26] = Hmat[26][26] = H[34][34];
Hmat[26][27] = Hmat[27][26] = H[35][34];
Hmat[26][28] = Hmat[28][26] = H[36][34];
Hmat[26][16] = Hmat[16][26] = H[42][34];
Hmat[26][15] = Hmat[15][26] = H[43][34];
Hmat[26][17] = Hmat[17][26] = H[44][34];
Hmat[26][18] = Hmat[18][26] = H[45][34];
Hmat[26][19] = Hmat[19][26] = H[46][34];
Hmat[26][20] = Hmat[20][26] = H[47][34];
Hmat[26][21] = Hmat[21][26] = H[48][34];
Hmat[27][27] = Hmat[27][27] = H[35][35];
Hmat[27][28] = Hmat[28][27] = H[36][35];
Hmat[27][16] = Hmat[16][27] = H[42][35];
Hmat[27][15] = Hmat[15][27] = H[43][35];
Hmat[27][17] = Hmat[17][27] = H[44][35];
Hmat[27][18] = Hmat[18][27] = H[45][35];
Hmat[27][19] = Hmat[19][27] = H[46][35];
Hmat[27][20] = Hmat[20][27] = H[47][35];
Hmat[27][21] = Hmat[21][27] = H[48][35];
Hmat[28][28] = Hmat[28][28] = H[36][36];
Hmat[28][16] = Hmat[16][28] = H[42][36];
Hmat[28][15] = Hmat[15][28] = H[43][36];
Hmat[28][17] = Hmat[17][28] = H[44][36];
Hmat[28][18] = Hmat[18][28] = H[45][36];
Hmat[28][19] = Hmat[19][28] = H[46][36];
Hmat[28][20] = Hmat[20][28] = H[47][36];
Hmat[28][21] = Hmat[21][28] = H[48][36];
Hmat[16][16] = Hmat[16][16] = H[42][42];
Hmat[16][15] = Hmat[15][16] = H[43][42];
Hmat[16][17] = Hmat[17][16] = H[44][42];
Hmat[16][18] = Hmat[18][16] = H[45][42];
Hmat[16][19] = Hmat[19][16] = H[46][42];
Hmat[16][20] = Hmat[20][16] = H[47][42];
Hmat[16][21] = Hmat[21][16] = H[48][42];
Hmat[15][15] = Hmat[15][15] = H[43][43];
Hmat[15][17] = Hmat[17][15] = H[44][43];
Hmat[15][18] = Hmat[18][15] = H[45][43];
Hmat[15][19] = Hmat[19][15] = H[46][43];
Hmat[15][20] = Hmat[20][15] = H[47][43];
Hmat[15][21] = Hmat[21][15] = H[48][43];
Hmat[17][17] = Hmat[17][17] = H[44][44];
Hmat[17][18] = Hmat[18][17] = H[45][44];
Hmat[17][19] = Hmat[19][17] = H[46][44];
Hmat[17][20] = Hmat[20][17] = H[47][44];
Hmat[17][21] = Hmat[21][17] = H[48][44];
Hmat[18][18] = Hmat[18][18] = H[45][45];
Hmat[18][19] = Hmat[19][18] = H[46][45];
Hmat[18][20] = Hmat[20][18] = H[47][45];
Hmat[18][21] = Hmat[21][18] = H[48][45];
Hmat[19][19] = Hmat[19][19] = H[46][46];
Hmat[19][20] = Hmat[20][19] = H[47][46];
Hmat[19][21] = Hmat[21][19] = H[48][46];
Hmat[20][20] = Hmat[20][20] = H[47][47];
Hmat[20][21] = Hmat[21][20] = H[48][47];
Hmat[21][21] = Hmat[21][21] = H[48][48];
cvec[29]  = c[1];
ucvec[29] = uc[1];
cvec[30]  = c[2];
ucvec[30] = uc[2];
cvec[31]  = c[3];
ucvec[31] = uc[3];
cvec[1]  = c[4];
ucvec[1] = uc[4];
cvec[2]  = c[5];
ucvec[2] = uc[5];
cvec[3]  = c[6];
ucvec[3] = uc[6];
cvec[4]  = c[7];
ucvec[4] = uc[7];
cvec[5]  = c[8];
ucvec[5] = uc[8];
cvec[6]  = c[9];
ucvec[6] = uc[9];
cvec[7]  = c[10];
ucvec[7] = uc[10];
cvec[8]  = c[12];
ucvec[8] = uc[12];
cvec[9]  = c[13];
ucvec[9] = uc[13];
cvec[10]  = c[14];
ucvec[10] = uc[14];
cvec[11]  = c[15];
ucvec[11] = uc[15];
cvec[12]  = c[16];
ucvec[12] = uc[16];
cvec[13]  = c[17];
ucvec[13] = uc[17];
cvec[14]  = c[18];
ucvec[14] = uc[18];
cvec[32]  = c[20];
ucvec[32] = uc[20];
cvec[33]  = c[21];
ucvec[33] = uc[21];
cvec[34]  = c[22];
ucvec[34] = uc[22];
cvec[35]  = c[23];
ucvec[35] = uc[23];
cvec[36]  = c[24];
ucvec[36] = uc[24];
cvec[37]  = c[26];
ucvec[37] = uc[26];
cvec[38]  = c[27];
ucvec[38] = uc[27];
cvec[23]  = c[30];
ucvec[23] = uc[30];
cvec[22]  = c[31];
ucvec[22] = uc[31];
cvec[24]  = c[32];
ucvec[24] = uc[32];
cvec[25]  = c[33];
ucvec[25] = uc[33];
cvec[26]  = c[34];
ucvec[26] = uc[34];
cvec[27]  = c[35];
ucvec[27] = uc[35];
cvec[28]  = c[36];
ucvec[28] = uc[36];
cvec[16]  = c[42];
ucvec[16] = uc[42];
cvec[15]  = c[43];
ucvec[15] = uc[43];
cvec[17]  = c[44];
ucvec[17] = uc[44];
cvec[18]  = c[45];
ucvec[18] = uc[45];
cvec[19]  = c[46];
ucvec[19] = uc[46];
cvec[20]  = c[47];
ucvec[20] = uc[47];
cvec[21]  = c[48];
ucvec[21] = uc[48];
 for (i=1; i<=6; ++i) 
      cvec[38+i]=c[53+i];
 for (i=1; i<=6; ++i) 
      ucvec[38+i]=uc[53+i];
 for (i=1; i<=6; ++i) 
   for (j=1; j<=3; ++j) 
      Hmat[38+i][38+j]=Jc0[i][j+3];
 for (i=1; i<=6; ++i) 
   for (j=4; j<=6; ++j) 
      Hmat[38+i][38+j]=Jc0[i][j-3];
Hmat[29][39] = Hmat[39][29] = K[1][1];
Hmat[29][40] = Hmat[40][29] = K[1][2];
Hmat[29][41] = Hmat[41][29] = K[1][3];
Hmat[29][42] = Hmat[42][29] = K[1][4];
Hmat[29][43] = Hmat[43][29] = K[1][5];
Hmat[29][44] = Hmat[44][29] = K[1][6];
Hmat[30][39] = Hmat[39][30] = K[2][1];
Hmat[30][40] = Hmat[40][30] = K[2][2];
Hmat[30][41] = Hmat[41][30] = K[2][3];
Hmat[30][42] = Hmat[42][30] = K[2][4];
Hmat[30][43] = Hmat[43][30] = K[2][5];
Hmat[30][44] = Hmat[44][30] = K[2][6];
Hmat[31][39] = Hmat[39][31] = K[3][1];
Hmat[31][40] = Hmat[40][31] = K[3][2];
Hmat[31][41] = Hmat[41][31] = K[3][3];
Hmat[31][42] = Hmat[42][31] = K[3][4];
Hmat[31][43] = Hmat[43][31] = K[3][5];
Hmat[31][44] = Hmat[44][31] = K[3][6];
Hmat[1][39] = Hmat[39][1] = K[4][1];
Hmat[1][40] = Hmat[40][1] = K[4][2];
Hmat[1][41] = Hmat[41][1] = K[4][3];
Hmat[1][42] = Hmat[42][1] = K[4][4];
Hmat[1][43] = Hmat[43][1] = K[4][5];
Hmat[1][44] = Hmat[44][1] = K[4][6];
Hmat[2][39] = Hmat[39][2] = K[5][1];
Hmat[2][40] = Hmat[40][2] = K[5][2];
Hmat[2][41] = Hmat[41][2] = K[5][3];
Hmat[2][42] = Hmat[42][2] = K[5][4];
Hmat[2][43] = Hmat[43][2] = K[5][5];
Hmat[2][44] = Hmat[44][2] = K[5][6];
Hmat[3][39] = Hmat[39][3] = K[6][1];
Hmat[3][40] = Hmat[40][3] = K[6][2];
Hmat[3][41] = Hmat[41][3] = K[6][3];
Hmat[3][42] = Hmat[42][3] = K[6][4];
Hmat[3][43] = Hmat[43][3] = K[6][5];
Hmat[3][44] = Hmat[44][3] = K[6][6];
Hmat[4][39] = Hmat[39][4] = K[7][1];
Hmat[4][40] = Hmat[40][4] = K[7][2];
Hmat[4][41] = Hmat[41][4] = K[7][3];
Hmat[4][42] = Hmat[42][4] = K[7][4];
Hmat[4][43] = Hmat[43][4] = K[7][5];
Hmat[4][44] = Hmat[44][4] = K[7][6];
Hmat[5][39] = Hmat[39][5] = K[8][1];
Hmat[5][40] = Hmat[40][5] = K[8][2];
Hmat[5][41] = Hmat[41][5] = K[8][3];
Hmat[5][42] = Hmat[42][5] = K[8][4];
Hmat[5][43] = Hmat[43][5] = K[8][5];
Hmat[5][44] = Hmat[44][5] = K[8][6];
Hmat[6][39] = Hmat[39][6] = K[9][1];
Hmat[6][40] = Hmat[40][6] = K[9][2];
Hmat[6][41] = Hmat[41][6] = K[9][3];
Hmat[6][42] = Hmat[42][6] = K[9][4];
Hmat[6][43] = Hmat[43][6] = K[9][5];
Hmat[6][44] = Hmat[44][6] = K[9][6];
Hmat[7][39] = Hmat[39][7] = K[10][1];
Hmat[7][40] = Hmat[40][7] = K[10][2];
Hmat[7][41] = Hmat[41][7] = K[10][3];
Hmat[7][42] = Hmat[42][7] = K[10][4];
Hmat[7][43] = Hmat[43][7] = K[10][5];
Hmat[7][44] = Hmat[44][7] = K[10][6];
Hmat[8][39] = Hmat[39][8] = K[12][1];
Hmat[8][40] = Hmat[40][8] = K[12][2];
Hmat[8][41] = Hmat[41][8] = K[12][3];
Hmat[8][42] = Hmat[42][8] = K[12][4];
Hmat[8][43] = Hmat[43][8] = K[12][5];
Hmat[8][44] = Hmat[44][8] = K[12][6];
Hmat[9][39] = Hmat[39][9] = K[13][1];
Hmat[9][40] = Hmat[40][9] = K[13][2];
Hmat[9][41] = Hmat[41][9] = K[13][3];
Hmat[9][42] = Hmat[42][9] = K[13][4];
Hmat[9][43] = Hmat[43][9] = K[13][5];
Hmat[9][44] = Hmat[44][9] = K[13][6];
Hmat[10][39] = Hmat[39][10] = K[14][1];
Hmat[10][40] = Hmat[40][10] = K[14][2];
Hmat[10][41] = Hmat[41][10] = K[14][3];
Hmat[10][42] = Hmat[42][10] = K[14][4];
Hmat[10][43] = Hmat[43][10] = K[14][5];
Hmat[10][44] = Hmat[44][10] = K[14][6];
Hmat[11][39] = Hmat[39][11] = K[15][1];
Hmat[11][40] = Hmat[40][11] = K[15][2];
Hmat[11][41] = Hmat[41][11] = K[15][3];
Hmat[11][42] = Hmat[42][11] = K[15][4];
Hmat[11][43] = Hmat[43][11] = K[15][5];
Hmat[11][44] = Hmat[44][11] = K[15][6];
Hmat[12][39] = Hmat[39][12] = K[16][1];
Hmat[12][40] = Hmat[40][12] = K[16][2];
Hmat[12][41] = Hmat[41][12] = K[16][3];
Hmat[12][42] = Hmat[42][12] = K[16][4];
Hmat[12][43] = Hmat[43][12] = K[16][5];
Hmat[12][44] = Hmat[44][12] = K[16][6];
Hmat[13][39] = Hmat[39][13] = K[17][1];
Hmat[13][40] = Hmat[40][13] = K[17][2];
Hmat[13][41] = Hmat[41][13] = K[17][3];
Hmat[13][42] = Hmat[42][13] = K[17][4];
Hmat[13][43] = Hmat[43][13] = K[17][5];
Hmat[13][44] = Hmat[44][13] = K[17][6];
Hmat[14][39] = Hmat[39][14] = K[18][1];
Hmat[14][40] = Hmat[40][14] = K[18][2];
Hmat[14][41] = Hmat[41][14] = K[18][3];
Hmat[14][42] = Hmat[42][14] = K[18][4];
Hmat[14][43] = Hmat[43][14] = K[18][5];
Hmat[14][44] = Hmat[44][14] = K[18][6];
Hmat[32][39] = Hmat[39][32] = K[20][1];
Hmat[32][40] = Hmat[40][32] = K[20][2];
Hmat[32][41] = Hmat[41][32] = K[20][3];
Hmat[32][42] = Hmat[42][32] = K[20][4];
Hmat[32][43] = Hmat[43][32] = K[20][5];
Hmat[32][44] = Hmat[44][32] = K[20][6];
Hmat[33][39] = Hmat[39][33] = K[21][1];
Hmat[33][40] = Hmat[40][33] = K[21][2];
Hmat[33][41] = Hmat[41][33] = K[21][3];
Hmat[33][42] = Hmat[42][33] = K[21][4];
Hmat[33][43] = Hmat[43][33] = K[21][5];
Hmat[33][44] = Hmat[44][33] = K[21][6];
Hmat[34][39] = Hmat[39][34] = K[22][1];
Hmat[34][40] = Hmat[40][34] = K[22][2];
Hmat[34][41] = Hmat[41][34] = K[22][3];
Hmat[34][42] = Hmat[42][34] = K[22][4];
Hmat[34][43] = Hmat[43][34] = K[22][5];
Hmat[34][44] = Hmat[44][34] = K[22][6];
Hmat[35][39] = Hmat[39][35] = K[23][1];
Hmat[35][40] = Hmat[40][35] = K[23][2];
Hmat[35][41] = Hmat[41][35] = K[23][3];
Hmat[35][42] = Hmat[42][35] = K[23][4];
Hmat[35][43] = Hmat[43][35] = K[23][5];
Hmat[35][44] = Hmat[44][35] = K[23][6];
Hmat[36][39] = Hmat[39][36] = K[24][1];
Hmat[36][40] = Hmat[40][36] = K[24][2];
Hmat[36][41] = Hmat[41][36] = K[24][3];
Hmat[36][42] = Hmat[42][36] = K[24][4];
Hmat[36][43] = Hmat[43][36] = K[24][5];
Hmat[36][44] = Hmat[44][36] = K[24][6];
Hmat[37][39] = Hmat[39][37] = K[26][1];
Hmat[37][40] = Hmat[40][37] = K[26][2];
Hmat[37][41] = Hmat[41][37] = K[26][3];
Hmat[37][42] = Hmat[42][37] = K[26][4];
Hmat[37][43] = Hmat[43][37] = K[26][5];
Hmat[37][44] = Hmat[44][37] = K[26][6];
Hmat[38][39] = Hmat[39][38] = K[27][1];
Hmat[38][40] = Hmat[40][38] = K[27][2];
Hmat[38][41] = Hmat[41][38] = K[27][3];
Hmat[38][42] = Hmat[42][38] = K[27][4];
Hmat[38][43] = Hmat[43][38] = K[27][5];
Hmat[38][44] = Hmat[44][38] = K[27][6];
Hmat[23][39] = Hmat[39][23] = K[30][1];
Hmat[23][40] = Hmat[40][23] = K[30][2];
Hmat[23][41] = Hmat[41][23] = K[30][3];
Hmat[23][42] = Hmat[42][23] = K[30][4];
Hmat[23][43] = Hmat[43][23] = K[30][5];
Hmat[23][44] = Hmat[44][23] = K[30][6];
Hmat[22][39] = Hmat[39][22] = K[31][1];
Hmat[22][40] = Hmat[40][22] = K[31][2];
Hmat[22][41] = Hmat[41][22] = K[31][3];
Hmat[22][42] = Hmat[42][22] = K[31][4];
Hmat[22][43] = Hmat[43][22] = K[31][5];
Hmat[22][44] = Hmat[44][22] = K[31][6];
Hmat[24][39] = Hmat[39][24] = K[32][1];
Hmat[24][40] = Hmat[40][24] = K[32][2];
Hmat[24][41] = Hmat[41][24] = K[32][3];
Hmat[24][42] = Hmat[42][24] = K[32][4];
Hmat[24][43] = Hmat[43][24] = K[32][5];
Hmat[24][44] = Hmat[44][24] = K[32][6];
Hmat[25][39] = Hmat[39][25] = K[33][1];
Hmat[25][40] = Hmat[40][25] = K[33][2];
Hmat[25][41] = Hmat[41][25] = K[33][3];
Hmat[25][42] = Hmat[42][25] = K[33][4];
Hmat[25][43] = Hmat[43][25] = K[33][5];
Hmat[25][44] = Hmat[44][25] = K[33][6];
Hmat[26][39] = Hmat[39][26] = K[34][1];
Hmat[26][40] = Hmat[40][26] = K[34][2];
Hmat[26][41] = Hmat[41][26] = K[34][3];
Hmat[26][42] = Hmat[42][26] = K[34][4];
Hmat[26][43] = Hmat[43][26] = K[34][5];
Hmat[26][44] = Hmat[44][26] = K[34][6];
Hmat[27][39] = Hmat[39][27] = K[35][1];
Hmat[27][40] = Hmat[40][27] = K[35][2];
Hmat[27][41] = Hmat[41][27] = K[35][3];
Hmat[27][42] = Hmat[42][27] = K[35][4];
Hmat[27][43] = Hmat[43][27] = K[35][5];
Hmat[27][44] = Hmat[44][27] = K[35][6];
Hmat[28][39] = Hmat[39][28] = K[36][1];
Hmat[28][40] = Hmat[40][28] = K[36][2];
Hmat[28][41] = Hmat[41][28] = K[36][3];
Hmat[28][42] = Hmat[42][28] = K[36][4];
Hmat[28][43] = Hmat[43][28] = K[36][5];
Hmat[28][44] = Hmat[44][28] = K[36][6];
Hmat[16][39] = Hmat[39][16] = K[42][1];
Hmat[16][40] = Hmat[40][16] = K[42][2];
Hmat[16][41] = Hmat[41][16] = K[42][3];
Hmat[16][42] = Hmat[42][16] = K[42][4];
Hmat[16][43] = Hmat[43][16] = K[42][5];
Hmat[16][44] = Hmat[44][16] = K[42][6];
Hmat[15][39] = Hmat[39][15] = K[43][1];
Hmat[15][40] = Hmat[40][15] = K[43][2];
Hmat[15][41] = Hmat[41][15] = K[43][3];
Hmat[15][42] = Hmat[42][15] = K[43][4];
Hmat[15][43] = Hmat[43][15] = K[43][5];
Hmat[15][44] = Hmat[44][15] = K[43][6];
Hmat[17][39] = Hmat[39][17] = K[44][1];
Hmat[17][40] = Hmat[40][17] = K[44][2];
Hmat[17][41] = Hmat[41][17] = K[44][3];
Hmat[17][42] = Hmat[42][17] = K[44][4];
Hmat[17][43] = Hmat[43][17] = K[44][5];
Hmat[17][44] = Hmat[44][17] = K[44][6];
Hmat[18][39] = Hmat[39][18] = K[45][1];
Hmat[18][40] = Hmat[40][18] = K[45][2];
Hmat[18][41] = Hmat[41][18] = K[45][3];
Hmat[18][42] = Hmat[42][18] = K[45][4];
Hmat[18][43] = Hmat[43][18] = K[45][5];
Hmat[18][44] = Hmat[44][18] = K[45][6];
Hmat[19][39] = Hmat[39][19] = K[46][1];
Hmat[19][40] = Hmat[40][19] = K[46][2];
Hmat[19][41] = Hmat[41][19] = K[46][3];
Hmat[19][42] = Hmat[42][19] = K[46][4];
Hmat[19][43] = Hmat[43][19] = K[46][5];
Hmat[19][44] = Hmat[44][19] = K[46][6];
Hmat[20][39] = Hmat[39][20] = K[47][1];
Hmat[20][40] = Hmat[40][20] = K[47][2];
Hmat[20][41] = Hmat[41][20] = K[47][3];
Hmat[20][42] = Hmat[42][20] = K[47][4];
Hmat[20][43] = Hmat[43][20] = K[47][5];
Hmat[20][44] = Hmat[44][20] = K[47][6];
Hmat[21][39] = Hmat[39][21] = K[48][1];
Hmat[21][40] = Hmat[40][21] = K[48][2];
Hmat[21][41] = Hmat[41][21] = K[48][3];
Hmat[21][42] = Hmat[42][21] = K[48][4];
Hmat[21][43] = Hmat[43][21] = K[48][5];
Hmat[21][44] = Hmat[44][21] = K[48][6];
if (freeze_base)
  my_inv_ldlt(Hmat,ucvec,38,thdd);
else
  my_inv_ldlt(Hmat,ucvec,44,thdd);

baseo[0].qdd[1]=(-(baseo[0].ad[1]*baseo[0].qd[2]) - baseo[0].ad[2]*baseo[0].qd[3] - baseo[0].ad[3]*baseo[0].qd[4] - baseo[0].q[2]*thdd[42] - baseo[0].q[3]*thdd[43] - baseo[0].q[4]*thdd[44])/2.;
baseo[0].qdd[2]=(baseo[0].ad[1]*baseo[0].qd[1] - baseo[0].ad[3]*baseo[0].qd[3] + baseo[0].ad[2]*baseo[0].qd[4] + baseo[0].q[1]*thdd[42] + baseo[0].q[4]*thdd[43] - baseo[0].q[3]*thdd[44])/2.;
baseo[0].qdd[3]=(baseo[0].ad[2]*baseo[0].qd[1] + baseo[0].ad[3]*baseo[0].qd[2] - baseo[0].ad[1]*baseo[0].qd[4] - baseo[0].q[4]*thdd[42] + baseo[0].q[1]*thdd[43] + baseo[0].q[2]*thdd[44])/2.;
baseo[0].qdd[4]=(baseo[0].ad[3]*baseo[0].qd[1] - baseo[0].ad[2]*baseo[0].qd[2] + baseo[0].ad[1]*baseo[0].qd[3] + baseo[0].q[3]*thdd[42] - baseo[0].q[2]*thdd[43] + baseo[0].q[1]*thdd[44])/2.;
basec[0].xdd[1]=thdd[39];
basec[0].xdd[2]=thdd[40];
basec[0].xdd[3]=thdd[41];
baseo[0].add[1]=thdd[42];
baseo[0].add[2]=thdd[43];
baseo[0].add[3]=thdd[44];

if (freeze_base) {
baseo[0].qdd[1]=0;
baseo[0].qdd[2]=0;
baseo[0].qdd[3]=0;
baseo[0].qdd[4]=0;
basec[0].xdd[1]=0;
basec[0].xdd[2]=0;
basec[0].xdd[3]=0;
baseo[0].add[1]=0;
baseo[0].add[2]=0;
baseo[0].add[3]=0;

}
state[1].thdd=thdd[1];
state[2].thdd=thdd[2];
state[3].thdd=thdd[3];
state[4].thdd=thdd[4];
state[5].thdd=thdd[5];
state[6].thdd=thdd[6];
state[7].thdd=thdd[7];
state[8].thdd=thdd[8];
state[9].thdd=thdd[9];
state[10].thdd=thdd[10];
state[11].thdd=thdd[11];
state[12].thdd=thdd[12];
state[13].thdd=thdd[13];
state[14].thdd=thdd[14];
state[15].thdd=thdd[15];
state[16].thdd=thdd[16];
state[17].thdd=thdd[17];
state[18].thdd=thdd[18];
state[19].thdd=thdd[19];
state[20].thdd=thdd[20];
state[21].thdd=thdd[21];
state[22].thdd=thdd[22];
state[23].thdd=thdd[23];
state[24].thdd=thdd[24];
state[25].thdd=thdd[25];
state[26].thdd=thdd[26];
state[27].thdd=thdd[27];
state[28].thdd=thdd[28];
state[29].thdd=thdd[29];
state[30].thdd=thdd[30];
state[31].thdd=thdd[31];
state[32].thdd=thdd[32];
state[33].thdd=thdd[33];
state[34].thdd=thdd[34];
state[35].thdd=thdd[35];
state[36].thdd=thdd[36];
state[37].thdd=thdd[37];
state[38].thdd=thdd[38];

