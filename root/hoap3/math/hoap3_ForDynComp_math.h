/* sine and cosine precomputation */
sstate15th=Sin(state[15].th);
cstate15th=Cos(state[15].th);

sstate16th=Sin(state[16].th);
cstate16th=Cos(state[16].th);

sstate9th=Sin(state[9].th);
cstate9th=Cos(state[9].th);

sstate8th=Sin(state[8].th);
cstate8th=Cos(state[8].th);

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

sstate2th=Sin(state[2].th);
cstate2th=Cos(state[2].th);

sstate1th=Sin(state[1].th);
cstate1th=Cos(state[1].th);

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













rseff2a1=Sin(eff[2].a[1]);
rceff2a1=Cos(eff[2].a[1]);

rseff2a2=Sin(eff[2].a[2]);
rceff2a2=Cos(eff[2].a[2]);

rseff2a3=Sin(eff[2].a[3]);
rceff2a3=Cos(eff[2].a[3]);



hoap3_ForDynCompfunc1();

hoap3_ForDynCompfunc2();

hoap3_ForDynCompfunc3();

hoap3_ForDynCompfunc4();

hoap3_ForDynCompfunc5();

hoap3_ForDynCompfunc6();

hoap3_ForDynCompfunc7();

/* force/torque of base in world coordinates */
fbase[1]=f0[1]*Si00[1][1] + f0[2]*Si00[1][2] + f0[3]*Si00[1][3];
fbase[2]=f0[1]*Si00[2][1] + f0[2]*Si00[2][2] + f0[3]*Si00[2][3];
fbase[3]=f0[1]*Si00[3][1] + f0[2]*Si00[3][2] + f0[3]*Si00[3][3];
fbase[4]=f0[4]*Si00[1][1] + f0[5]*Si00[1][2] + f0[6]*Si00[1][3];
fbase[5]=f0[4]*Si00[2][1] + f0[5]*Si00[2][2] + f0[6]*Si00[2][3];
fbase[6]=f0[4]*Si00[3][1] + f0[5]*Si00[3][2] + f0[6]*Si00[3][3];

/* inverse dynamics torques */
c[1]=f1[6] + fext1[6];
c[2]=f2[6] + fext2[6];
c[3]=0.;
c[4]=f4[6] + fext4[6];
c[5]=f5[6] + fext5[6];
c[6]=f6[6] + fext6[6];
c[7]=f7[6] + fext7[6];
c[8]=f8[6] + fext8[6];
c[9]=f9[6] + fext9[6];
c[10]=f10[6] + fext10[6];
c[11]=0.;
c[12]=0.;
c[13]=0.;
c[14]=0.;
c[15]=0;
c[16]=f16[6] + fext16[6];
c[17]=f17[6] + fext17[6];
c[18]=f18[6] + fext18[6];
c[19]=f19[6] + fext19[6];
c[20]=f20[6] + fext20[6];
c[21]=f21[6] + fext21[6];
c[22]=f22[6] + fext22[6];
c[23]=0.;
c[24]=0.;
c[25]=0.;
c[26]=0.;
c[27]=0;

/* torques due to external forces */
qext[1]=fext1[6];
qext[2]=fext2[6];
qext[3]=0.;
qext[4]=fext4[6];
qext[5]=fext5[6];
qext[6]=fext6[6];
qext[7]=fext7[6];
qext[8]=fext8[6];
qext[9]=fext9[6];
qext[10]=fext10[6];
qext[11]=0.;
qext[12]=0.;
qext[13]=0.;
qext[14]=0.;
qext[15]=0.;
qext[16]=fext16[6];
qext[17]=fext17[6];
qext[18]=fext18[6];
qext[19]=fext19[6];
qext[20]=fext20[6];
qext[21]=fext21[6];
qext[22]=fext22[6];
qext[23]=0.;
qext[24]=0.;
qext[25]=0.;
qext[26]=0.;
qext[27]=0.;

hoap3func11();

hoap3func12();

hoap3func13();

hoap3func14();

hoap3func15();

hoap3func16();

hoap3func17();

hoap3func18();

hoap3func19();

hoap3func20();

hoap3func21();

hoap3func22();

hoap3func23();

hoap3func24();

hoap3func25();

hoap3func26();

hoap3func27();

hoap3func28();

hoap3func29();

hoap3func30();

hoap3func31();

hoap3func32();

hoap3func33();

hoap3func34();

hoap3func35();

hoap3func36();

hoap3func37();

hoap3func38();

hoap3func39();

hoap3func40();

hoap3func41();

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
c[11]=c[11] - qext[11] + vcross[1]*K[11][1] + vcross[2]*K[11][2] + vcross[3]*K[11][3];
c[12]=c[12] - qext[12] + vcross[1]*K[12][1] + vcross[2]*K[12][2] + vcross[3]*K[12][3];
c[13]=c[13] - qext[13] + vcross[1]*K[13][1] + vcross[2]*K[13][2] + vcross[3]*K[13][3];
c[14]=c[14] - qext[14] + vcross[1]*K[14][1] + vcross[2]*K[14][2] + vcross[3]*K[14][3];
c[15]=c[15] - qext[15] + vcross[1]*K[15][1] + vcross[2]*K[15][2] + vcross[3]*K[15][3];
c[16]=c[16] - qext[16] + vcross[1]*K[16][1] + vcross[2]*K[16][2] + vcross[3]*K[16][3];
c[17]=c[17] - qext[17] + vcross[1]*K[17][1] + vcross[2]*K[17][2] + vcross[3]*K[17][3];
c[18]=c[18] - qext[18] + vcross[1]*K[18][1] + vcross[2]*K[18][2] + vcross[3]*K[18][3];
c[19]=c[19] - qext[19] + vcross[1]*K[19][1] + vcross[2]*K[19][2] + vcross[3]*K[19][3];
c[20]=c[20] - qext[20] + vcross[1]*K[20][1] + vcross[2]*K[20][2] + vcross[3]*K[20][3];
c[21]=c[21] - qext[21] + vcross[1]*K[21][1] + vcross[2]*K[21][2] + vcross[3]*K[21][3];
c[22]=c[22] - qext[22] + vcross[1]*K[22][1] + vcross[2]*K[22][2] + vcross[3]*K[22][3];
c[23]=c[23] - qext[23] + vcross[1]*K[23][1] + vcross[2]*K[23][2] + vcross[3]*K[23][3];
c[24]=c[24] - qext[24] + vcross[1]*K[24][1] + vcross[2]*K[24][2] + vcross[3]*K[24][3];
c[25]=c[25] - qext[25] + vcross[1]*K[25][1] + vcross[2]*K[25][2] + vcross[3]*K[25][3];
c[26]=c[26] - qext[26] + vcross[1]*K[26][1] + vcross[2]*K[26][2] + vcross[3]*K[26][3];
c[27]=c[27] - qext[27] + vcross[1]*K[27][1] + vcross[2]*K[27][2] + vcross[3]*K[27][3];
c[28]=vcross[1]*Jc0[1][4] + vcross[2]*Jc0[1][5] + vcross[3]*Jc0[1][6] + f0[1]*Si00[1][1] + f0[2]*Si00[1][2] + f0[3]*Si00[1][3];
c[29]=vcross[1]*Jc0[2][4] + vcross[2]*Jc0[2][5] + vcross[3]*Jc0[2][6] + f0[1]*Si00[2][1] + f0[2]*Si00[2][2] + f0[3]*Si00[2][3];
c[30]=vcross[1]*Jc0[3][4] + vcross[2]*Jc0[3][5] + vcross[3]*Jc0[3][6] + f0[1]*Si00[3][1] + f0[2]*Si00[3][2] + f0[3]*Si00[3][3];
c[31]=vcross[1]*Jc0[4][4] + vcross[2]*Jc0[4][5] + vcross[3]*Jc0[4][6] + f0[4]*Si00[1][1] + f0[5]*Si00[1][2] + f0[6]*Si00[1][3];
c[32]=vcross[1]*Jc0[5][4] + vcross[2]*Jc0[5][5] + vcross[3]*Jc0[5][6] + f0[4]*Si00[2][1] + f0[5]*Si00[2][2] + f0[6]*Si00[2][3];
c[33]=vcross[1]*Jc0[6][4] + vcross[2]*Jc0[6][5] + vcross[3]*Jc0[6][6] + f0[4]*Si00[3][1] + f0[5]*Si00[3][2] + f0[6]*Si00[3][3];

uc[1]=state[15].u - c[1] - qext[1];
uc[2]=state[16].u - c[2] - qext[2];
uc[3]=-c[3] - qext[3];
uc[4]=state[9].u - c[4] - qext[4];
uc[5]=state[8].u - c[5] - qext[5];
uc[6]=state[10].u - c[6] - qext[6];
uc[7]=state[11].u - c[7] - qext[7];
uc[8]=state[12].u - c[8] - qext[8];
uc[9]=state[13].u - c[9] - qext[9];
uc[10]=state[14].u - c[10] - qext[10];
uc[11]=-c[11] - qext[11];
uc[12]=-c[12] - qext[12];
uc[13]=-c[13] - qext[13];
uc[14]=-c[14] - qext[14];
uc[15]=-c[15] - qext[15];
uc[16]=state[2].u - c[16] - qext[16];
uc[17]=state[1].u - c[17] - qext[17];
uc[18]=state[3].u - c[18] - qext[18];
uc[19]=state[4].u - c[19] - qext[19];
uc[20]=state[5].u - c[20] - qext[20];
uc[21]=state[6].u - c[21] - qext[21];
uc[22]=state[7].u - c[22] - qext[22];
uc[23]=-c[23] - qext[23];
uc[24]=-c[24] - qext[24];
uc[25]=-c[25] - qext[25];
uc[26]=-c[26] - qext[26];
uc[27]=-c[27] - qext[27];
uc[28]=-c[28] - fext0[1]*Si00[1][1] - fext0[2]*Si00[1][2] - fext0[3]*Si00[1][3];
uc[29]=-c[29] - fext0[1]*Si00[2][1] - fext0[2]*Si00[2][2] - fext0[3]*Si00[2][3];
uc[30]=-c[30] - fext0[1]*Si00[3][1] - fext0[2]*Si00[3][2] - fext0[3]*Si00[3][3];
uc[31]=-c[31] - fext0[4]*Si00[1][1] - fext0[5]*Si00[1][2] - fext0[6]*Si00[1][3];
uc[32]=-c[32] - fext0[4]*Si00[2][1] - fext0[5]*Si00[2][2] - fext0[6]*Si00[2][3];
uc[33]=-c[33] - fext0[4]*Si00[3][1] - fext0[5]*Si00[3][2] - fext0[6]*Si00[3][3];

/* now solve for accelerations: uc = H * thdd           */
/* Note: uc and H are calculated above */
Hmat[15][15] = Hmat[15][15] = H[1][1];
Hmat[15][16] = Hmat[16][15] = H[2][1];
Hmat[15][9] = Hmat[9][15] = H[4][1];
Hmat[15][8] = Hmat[8][15] = H[5][1];
Hmat[15][10] = Hmat[10][15] = H[6][1];
Hmat[15][11] = Hmat[11][15] = H[7][1];
Hmat[15][12] = Hmat[12][15] = H[8][1];
Hmat[15][13] = Hmat[13][15] = H[9][1];
Hmat[15][14] = Hmat[14][15] = H[10][1];
Hmat[15][2] = Hmat[2][15] = H[16][1];
Hmat[15][1] = Hmat[1][15] = H[17][1];
Hmat[15][3] = Hmat[3][15] = H[18][1];
Hmat[15][4] = Hmat[4][15] = H[19][1];
Hmat[15][5] = Hmat[5][15] = H[20][1];
Hmat[15][6] = Hmat[6][15] = H[21][1];
Hmat[15][7] = Hmat[7][15] = H[22][1];
Hmat[16][16] = Hmat[16][16] = H[2][2];
Hmat[16][9] = Hmat[9][16] = H[4][2];
Hmat[16][8] = Hmat[8][16] = H[5][2];
Hmat[16][10] = Hmat[10][16] = H[6][2];
Hmat[16][11] = Hmat[11][16] = H[7][2];
Hmat[16][12] = Hmat[12][16] = H[8][2];
Hmat[16][13] = Hmat[13][16] = H[9][2];
Hmat[16][14] = Hmat[14][16] = H[10][2];
Hmat[16][2] = Hmat[2][16] = H[16][2];
Hmat[16][1] = Hmat[1][16] = H[17][2];
Hmat[16][3] = Hmat[3][16] = H[18][2];
Hmat[16][4] = Hmat[4][16] = H[19][2];
Hmat[16][5] = Hmat[5][16] = H[20][2];
Hmat[16][6] = Hmat[6][16] = H[21][2];
Hmat[16][7] = Hmat[7][16] = H[22][2];
Hmat[9][9] = Hmat[9][9] = H[4][4];
Hmat[9][8] = Hmat[8][9] = H[5][4];
Hmat[9][10] = Hmat[10][9] = H[6][4];
Hmat[9][11] = Hmat[11][9] = H[7][4];
Hmat[9][12] = Hmat[12][9] = H[8][4];
Hmat[9][13] = Hmat[13][9] = H[9][4];
Hmat[9][14] = Hmat[14][9] = H[10][4];
Hmat[9][2] = Hmat[2][9] = H[16][4];
Hmat[9][1] = Hmat[1][9] = H[17][4];
Hmat[9][3] = Hmat[3][9] = H[18][4];
Hmat[9][4] = Hmat[4][9] = H[19][4];
Hmat[9][5] = Hmat[5][9] = H[20][4];
Hmat[9][6] = Hmat[6][9] = H[21][4];
Hmat[9][7] = Hmat[7][9] = H[22][4];
Hmat[8][8] = Hmat[8][8] = H[5][5];
Hmat[8][10] = Hmat[10][8] = H[6][5];
Hmat[8][11] = Hmat[11][8] = H[7][5];
Hmat[8][12] = Hmat[12][8] = H[8][5];
Hmat[8][13] = Hmat[13][8] = H[9][5];
Hmat[8][14] = Hmat[14][8] = H[10][5];
Hmat[8][2] = Hmat[2][8] = H[16][5];
Hmat[8][1] = Hmat[1][8] = H[17][5];
Hmat[8][3] = Hmat[3][8] = H[18][5];
Hmat[8][4] = Hmat[4][8] = H[19][5];
Hmat[8][5] = Hmat[5][8] = H[20][5];
Hmat[8][6] = Hmat[6][8] = H[21][5];
Hmat[8][7] = Hmat[7][8] = H[22][5];
Hmat[10][10] = Hmat[10][10] = H[6][6];
Hmat[10][11] = Hmat[11][10] = H[7][6];
Hmat[10][12] = Hmat[12][10] = H[8][6];
Hmat[10][13] = Hmat[13][10] = H[9][6];
Hmat[10][14] = Hmat[14][10] = H[10][6];
Hmat[10][2] = Hmat[2][10] = H[16][6];
Hmat[10][1] = Hmat[1][10] = H[17][6];
Hmat[10][3] = Hmat[3][10] = H[18][6];
Hmat[10][4] = Hmat[4][10] = H[19][6];
Hmat[10][5] = Hmat[5][10] = H[20][6];
Hmat[10][6] = Hmat[6][10] = H[21][6];
Hmat[10][7] = Hmat[7][10] = H[22][6];
Hmat[11][11] = Hmat[11][11] = H[7][7];
Hmat[11][12] = Hmat[12][11] = H[8][7];
Hmat[11][13] = Hmat[13][11] = H[9][7];
Hmat[11][14] = Hmat[14][11] = H[10][7];
Hmat[11][2] = Hmat[2][11] = H[16][7];
Hmat[11][1] = Hmat[1][11] = H[17][7];
Hmat[11][3] = Hmat[3][11] = H[18][7];
Hmat[11][4] = Hmat[4][11] = H[19][7];
Hmat[11][5] = Hmat[5][11] = H[20][7];
Hmat[11][6] = Hmat[6][11] = H[21][7];
Hmat[11][7] = Hmat[7][11] = H[22][7];
Hmat[12][12] = Hmat[12][12] = H[8][8];
Hmat[12][13] = Hmat[13][12] = H[9][8];
Hmat[12][14] = Hmat[14][12] = H[10][8];
Hmat[12][2] = Hmat[2][12] = H[16][8];
Hmat[12][1] = Hmat[1][12] = H[17][8];
Hmat[12][3] = Hmat[3][12] = H[18][8];
Hmat[12][4] = Hmat[4][12] = H[19][8];
Hmat[12][5] = Hmat[5][12] = H[20][8];
Hmat[12][6] = Hmat[6][12] = H[21][8];
Hmat[12][7] = Hmat[7][12] = H[22][8];
Hmat[13][13] = Hmat[13][13] = H[9][9];
Hmat[13][14] = Hmat[14][13] = H[10][9];
Hmat[13][2] = Hmat[2][13] = H[16][9];
Hmat[13][1] = Hmat[1][13] = H[17][9];
Hmat[13][3] = Hmat[3][13] = H[18][9];
Hmat[13][4] = Hmat[4][13] = H[19][9];
Hmat[13][5] = Hmat[5][13] = H[20][9];
Hmat[13][6] = Hmat[6][13] = H[21][9];
Hmat[13][7] = Hmat[7][13] = H[22][9];
Hmat[14][14] = Hmat[14][14] = H[10][10];
Hmat[14][2] = Hmat[2][14] = H[16][10];
Hmat[14][1] = Hmat[1][14] = H[17][10];
Hmat[14][3] = Hmat[3][14] = H[18][10];
Hmat[14][4] = Hmat[4][14] = H[19][10];
Hmat[14][5] = Hmat[5][14] = H[20][10];
Hmat[14][6] = Hmat[6][14] = H[21][10];
Hmat[14][7] = Hmat[7][14] = H[22][10];
Hmat[2][2] = Hmat[2][2] = H[16][16];
Hmat[2][1] = Hmat[1][2] = H[17][16];
Hmat[2][3] = Hmat[3][2] = H[18][16];
Hmat[2][4] = Hmat[4][2] = H[19][16];
Hmat[2][5] = Hmat[5][2] = H[20][16];
Hmat[2][6] = Hmat[6][2] = H[21][16];
Hmat[2][7] = Hmat[7][2] = H[22][16];
Hmat[1][1] = Hmat[1][1] = H[17][17];
Hmat[1][3] = Hmat[3][1] = H[18][17];
Hmat[1][4] = Hmat[4][1] = H[19][17];
Hmat[1][5] = Hmat[5][1] = H[20][17];
Hmat[1][6] = Hmat[6][1] = H[21][17];
Hmat[1][7] = Hmat[7][1] = H[22][17];
Hmat[3][3] = Hmat[3][3] = H[18][18];
Hmat[3][4] = Hmat[4][3] = H[19][18];
Hmat[3][5] = Hmat[5][3] = H[20][18];
Hmat[3][6] = Hmat[6][3] = H[21][18];
Hmat[3][7] = Hmat[7][3] = H[22][18];
Hmat[4][4] = Hmat[4][4] = H[19][19];
Hmat[4][5] = Hmat[5][4] = H[20][19];
Hmat[4][6] = Hmat[6][4] = H[21][19];
Hmat[4][7] = Hmat[7][4] = H[22][19];
Hmat[5][5] = Hmat[5][5] = H[20][20];
Hmat[5][6] = Hmat[6][5] = H[21][20];
Hmat[5][7] = Hmat[7][5] = H[22][20];
Hmat[6][6] = Hmat[6][6] = H[21][21];
Hmat[6][7] = Hmat[7][6] = H[22][21];
Hmat[7][7] = Hmat[7][7] = H[22][22];
cvec[15]  = c[1];
ucvec[15] = uc[1];
cvec[16]  = c[2];
ucvec[16] = uc[2];
cvec[9]  = c[4];
ucvec[9] = uc[4];
cvec[8]  = c[5];
ucvec[8] = uc[5];
cvec[10]  = c[6];
ucvec[10] = uc[6];
cvec[11]  = c[7];
ucvec[11] = uc[7];
cvec[12]  = c[8];
ucvec[12] = uc[8];
cvec[13]  = c[9];
ucvec[13] = uc[9];
cvec[14]  = c[10];
ucvec[14] = uc[10];
cvec[2]  = c[16];
ucvec[2] = uc[16];
cvec[1]  = c[17];
ucvec[1] = uc[17];
cvec[3]  = c[18];
ucvec[3] = uc[18];
cvec[4]  = c[19];
ucvec[4] = uc[19];
cvec[5]  = c[20];
ucvec[5] = uc[20];
cvec[6]  = c[21];
ucvec[6] = uc[21];
cvec[7]  = c[22];
ucvec[7] = uc[22];
 for (i=1; i<=6; ++i) 
      cvec[16+i]=c[27+i];
 for (i=1; i<=6; ++i) 
      ucvec[16+i]=uc[27+i];
 for (i=1; i<=6; ++i) 
   for (j=1; j<=3; ++j) 
      Hmat[16+i][16+j]=Jc0[i][j+3];
 for (i=1; i<=6; ++i) 
   for (j=4; j<=6; ++j) 
      Hmat[16+i][16+j]=Jc0[i][j-3];
Hmat[15][17] = Hmat[17][15] = K[1][1];
Hmat[15][18] = Hmat[18][15] = K[1][2];
Hmat[15][19] = Hmat[19][15] = K[1][3];
Hmat[15][20] = Hmat[20][15] = K[1][4];
Hmat[15][21] = Hmat[21][15] = K[1][5];
Hmat[15][22] = Hmat[22][15] = K[1][6];
Hmat[16][17] = Hmat[17][16] = K[2][1];
Hmat[16][18] = Hmat[18][16] = K[2][2];
Hmat[16][19] = Hmat[19][16] = K[2][3];
Hmat[16][20] = Hmat[20][16] = K[2][4];
Hmat[16][21] = Hmat[21][16] = K[2][5];
Hmat[16][22] = Hmat[22][16] = K[2][6];
Hmat[9][17] = Hmat[17][9] = K[4][1];
Hmat[9][18] = Hmat[18][9] = K[4][2];
Hmat[9][19] = Hmat[19][9] = K[4][3];
Hmat[9][20] = Hmat[20][9] = K[4][4];
Hmat[9][21] = Hmat[21][9] = K[4][5];
Hmat[9][22] = Hmat[22][9] = K[4][6];
Hmat[8][17] = Hmat[17][8] = K[5][1];
Hmat[8][18] = Hmat[18][8] = K[5][2];
Hmat[8][19] = Hmat[19][8] = K[5][3];
Hmat[8][20] = Hmat[20][8] = K[5][4];
Hmat[8][21] = Hmat[21][8] = K[5][5];
Hmat[8][22] = Hmat[22][8] = K[5][6];
Hmat[10][17] = Hmat[17][10] = K[6][1];
Hmat[10][18] = Hmat[18][10] = K[6][2];
Hmat[10][19] = Hmat[19][10] = K[6][3];
Hmat[10][20] = Hmat[20][10] = K[6][4];
Hmat[10][21] = Hmat[21][10] = K[6][5];
Hmat[10][22] = Hmat[22][10] = K[6][6];
Hmat[11][17] = Hmat[17][11] = K[7][1];
Hmat[11][18] = Hmat[18][11] = K[7][2];
Hmat[11][19] = Hmat[19][11] = K[7][3];
Hmat[11][20] = Hmat[20][11] = K[7][4];
Hmat[11][21] = Hmat[21][11] = K[7][5];
Hmat[11][22] = Hmat[22][11] = K[7][6];
Hmat[12][17] = Hmat[17][12] = K[8][1];
Hmat[12][18] = Hmat[18][12] = K[8][2];
Hmat[12][19] = Hmat[19][12] = K[8][3];
Hmat[12][20] = Hmat[20][12] = K[8][4];
Hmat[12][21] = Hmat[21][12] = K[8][5];
Hmat[12][22] = Hmat[22][12] = K[8][6];
Hmat[13][17] = Hmat[17][13] = K[9][1];
Hmat[13][18] = Hmat[18][13] = K[9][2];
Hmat[13][19] = Hmat[19][13] = K[9][3];
Hmat[13][20] = Hmat[20][13] = K[9][4];
Hmat[13][21] = Hmat[21][13] = K[9][5];
Hmat[13][22] = Hmat[22][13] = K[9][6];
Hmat[14][17] = Hmat[17][14] = K[10][1];
Hmat[14][18] = Hmat[18][14] = K[10][2];
Hmat[14][19] = Hmat[19][14] = K[10][3];
Hmat[14][20] = Hmat[20][14] = K[10][4];
Hmat[14][21] = Hmat[21][14] = K[10][5];
Hmat[14][22] = Hmat[22][14] = K[10][6];
Hmat[2][17] = Hmat[17][2] = K[16][1];
Hmat[2][18] = Hmat[18][2] = K[16][2];
Hmat[2][19] = Hmat[19][2] = K[16][3];
Hmat[2][20] = Hmat[20][2] = K[16][4];
Hmat[2][21] = Hmat[21][2] = K[16][5];
Hmat[2][22] = Hmat[22][2] = K[16][6];
Hmat[1][17] = Hmat[17][1] = K[17][1];
Hmat[1][18] = Hmat[18][1] = K[17][2];
Hmat[1][19] = Hmat[19][1] = K[17][3];
Hmat[1][20] = Hmat[20][1] = K[17][4];
Hmat[1][21] = Hmat[21][1] = K[17][5];
Hmat[1][22] = Hmat[22][1] = K[17][6];
Hmat[3][17] = Hmat[17][3] = K[18][1];
Hmat[3][18] = Hmat[18][3] = K[18][2];
Hmat[3][19] = Hmat[19][3] = K[18][3];
Hmat[3][20] = Hmat[20][3] = K[18][4];
Hmat[3][21] = Hmat[21][3] = K[18][5];
Hmat[3][22] = Hmat[22][3] = K[18][6];
Hmat[4][17] = Hmat[17][4] = K[19][1];
Hmat[4][18] = Hmat[18][4] = K[19][2];
Hmat[4][19] = Hmat[19][4] = K[19][3];
Hmat[4][20] = Hmat[20][4] = K[19][4];
Hmat[4][21] = Hmat[21][4] = K[19][5];
Hmat[4][22] = Hmat[22][4] = K[19][6];
Hmat[5][17] = Hmat[17][5] = K[20][1];
Hmat[5][18] = Hmat[18][5] = K[20][2];
Hmat[5][19] = Hmat[19][5] = K[20][3];
Hmat[5][20] = Hmat[20][5] = K[20][4];
Hmat[5][21] = Hmat[21][5] = K[20][5];
Hmat[5][22] = Hmat[22][5] = K[20][6];
Hmat[6][17] = Hmat[17][6] = K[21][1];
Hmat[6][18] = Hmat[18][6] = K[21][2];
Hmat[6][19] = Hmat[19][6] = K[21][3];
Hmat[6][20] = Hmat[20][6] = K[21][4];
Hmat[6][21] = Hmat[21][6] = K[21][5];
Hmat[6][22] = Hmat[22][6] = K[21][6];
Hmat[7][17] = Hmat[17][7] = K[22][1];
Hmat[7][18] = Hmat[18][7] = K[22][2];
Hmat[7][19] = Hmat[19][7] = K[22][3];
Hmat[7][20] = Hmat[20][7] = K[22][4];
Hmat[7][21] = Hmat[21][7] = K[22][5];
Hmat[7][22] = Hmat[22][7] = K[22][6];
if (freeze_base)
  my_inv_ldlt(Hmat,ucvec,16,thdd);
else
  my_inv_ldlt(Hmat,ucvec,22,thdd);

baseo[0].qdd[1]=(-(baseo[0].ad[1]*baseo[0].qd[2]) - baseo[0].ad[2]*baseo[0].qd[3] - baseo[0].ad[3]*baseo[0].qd[4] - baseo[0].q[2]*thdd[20] - baseo[0].q[3]*thdd[21] - baseo[0].q[4]*thdd[22])/2.;
baseo[0].qdd[2]=(baseo[0].ad[1]*baseo[0].qd[1] - baseo[0].ad[3]*baseo[0].qd[3] + baseo[0].ad[2]*baseo[0].qd[4] + baseo[0].q[1]*thdd[20] + baseo[0].q[4]*thdd[21] - baseo[0].q[3]*thdd[22])/2.;
baseo[0].qdd[3]=(baseo[0].ad[2]*baseo[0].qd[1] + baseo[0].ad[3]*baseo[0].qd[2] - baseo[0].ad[1]*baseo[0].qd[4] - baseo[0].q[4]*thdd[20] + baseo[0].q[1]*thdd[21] + baseo[0].q[2]*thdd[22])/2.;
baseo[0].qdd[4]=(baseo[0].ad[3]*baseo[0].qd[1] - baseo[0].ad[2]*baseo[0].qd[2] + baseo[0].ad[1]*baseo[0].qd[3] + baseo[0].q[3]*thdd[20] - baseo[0].q[2]*thdd[21] + baseo[0].q[1]*thdd[22])/2.;
basec[0].xdd[1]=thdd[17];
basec[0].xdd[2]=thdd[18];
basec[0].xdd[3]=thdd[19];
baseo[0].add[1]=thdd[20];
baseo[0].add[2]=thdd[21];
baseo[0].add[3]=thdd[22];

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

