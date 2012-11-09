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
c[1]=0;
c[2]=f2[6] + fext2[6];
c[3]=-f3[5] - fext3[5];
c[4]=f4[4] + fext4[4];
c[5]=f5[6] + fext5[6];
c[6]=0.;
c[7]=f7[6] + fext7[6];
c[8]=f8[6] + fext8[6];
c[9]=f9[6] + fext9[6];
c[10]=f10[6] + fext10[6];
c[11]=f11[6] + fext11[6];
c[12]=f12[6] + fext12[6];
c[13]=f13[6] + fext13[6];
c[14]=0.;
c[15]=0.;
c[16]=0.;
c[17]=0.;
c[18]=0;
c[19]=f19[6] + fext19[6];
c[20]=f20[6] + fext20[6];
c[21]=f21[6] + fext21[6];
c[22]=f22[6] + fext22[6];
c[23]=f23[6] + fext23[6];
c[24]=f24[6] + fext24[6];
c[25]=0.;
c[26]=0.;
c[27]=0.;
c[28]=0.;
c[29]=0;

/* torques due to external forces */
qext[1]=0;
qext[2]=fext2[6];
qext[3]=-fext3[5];
qext[4]=fext4[4];
qext[5]=fext5[6];
qext[6]=0.;
qext[7]=fext7[6];
qext[8]=fext8[6];
qext[9]=fext9[6];
qext[10]=fext10[6];
qext[11]=fext11[6];
qext[12]=fext12[6];
qext[13]=fext13[6];
qext[14]=0.;
qext[15]=0.;
qext[16]=0.;
qext[17]=0.;
qext[18]=0.;
qext[19]=fext19[6];
qext[20]=fext20[6];
qext[21]=fext21[6];
qext[22]=fext22[6];
qext[23]=fext23[6];
qext[24]=fext24[6];
qext[25]=0.;
qext[26]=0.;
qext[27]=0.;
qext[28]=0.;
qext[29]=0.;

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

hoap3func42();

hoap3func43();

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
c[28]=c[28] - qext[28] + vcross[1]*K[28][1] + vcross[2]*K[28][2] + vcross[3]*K[28][3];
c[29]=c[29] - qext[29] + vcross[1]*K[29][1] + vcross[2]*K[29][2] + vcross[3]*K[29][3];
c[30]=vcross[1]*Jc0[1][4] + vcross[2]*Jc0[1][5] + vcross[3]*Jc0[1][6] + f0[1]*Si00[1][1] + f0[2]*Si00[1][2] + f0[3]*Si00[1][3];
c[31]=vcross[1]*Jc0[2][4] + vcross[2]*Jc0[2][5] + vcross[3]*Jc0[2][6] + f0[1]*Si00[2][1] + f0[2]*Si00[2][2] + f0[3]*Si00[2][3];
c[32]=vcross[1]*Jc0[3][4] + vcross[2]*Jc0[3][5] + vcross[3]*Jc0[3][6] + f0[1]*Si00[3][1] + f0[2]*Si00[3][2] + f0[3]*Si00[3][3];
c[33]=vcross[1]*Jc0[4][4] + vcross[2]*Jc0[4][5] + vcross[3]*Jc0[4][6] + f0[4]*Si00[1][1] + f0[5]*Si00[1][2] + f0[6]*Si00[1][3];
c[34]=vcross[1]*Jc0[5][4] + vcross[2]*Jc0[5][5] + vcross[3]*Jc0[5][6] + f0[4]*Si00[2][1] + f0[5]*Si00[2][2] + f0[6]*Si00[2][3];
c[35]=vcross[1]*Jc0[6][4] + vcross[2]*Jc0[6][5] + vcross[3]*Jc0[6][6] + f0[4]*Si00[3][1] + f0[5]*Si00[3][2] + f0[6]*Si00[3][3];

uc[1]=-c[1] - qext[1];
uc[2]=state[14].u - c[2] - qext[2];
uc[3]=state[15].u - c[3] - qext[3];
uc[4]=state[16].u - c[4] - qext[4];
uc[5]=state[17].u - c[5] - qext[5];
uc[6]=-c[6] - qext[6];
uc[7]=state[13].u - c[7] - qext[7];
uc[8]=state[1].u - c[8] - qext[8];
uc[9]=state[2].u - c[9] - qext[9];
uc[10]=state[3].u - c[10] - qext[10];
uc[11]=state[4].u - c[11] - qext[11];
uc[12]=state[5].u - c[12] - qext[12];
uc[13]=state[6].u - c[13] - qext[13];
uc[14]=-c[14] - qext[14];
uc[15]=-c[15] - qext[15];
uc[16]=-c[16] - qext[16];
uc[17]=-c[17] - qext[17];
uc[18]=-c[18] - qext[18];
uc[19]=state[7].u - c[19] - qext[19];
uc[20]=state[8].u - c[20] - qext[20];
uc[21]=state[9].u - c[21] - qext[21];
uc[22]=state[10].u - c[22] - qext[22];
uc[23]=state[11].u - c[23] - qext[23];
uc[24]=state[12].u - c[24] - qext[24];
uc[25]=-c[25] - qext[25];
uc[26]=-c[26] - qext[26];
uc[27]=-c[27] - qext[27];
uc[28]=-c[28] - qext[28];
uc[29]=-c[29] - qext[29];
uc[30]=-c[30] - fext0[1]*Si00[1][1] - fext0[2]*Si00[1][2] - fext0[3]*Si00[1][3];
uc[31]=-c[31] - fext0[1]*Si00[2][1] - fext0[2]*Si00[2][2] - fext0[3]*Si00[2][3];
uc[32]=-c[32] - fext0[1]*Si00[3][1] - fext0[2]*Si00[3][2] - fext0[3]*Si00[3][3];
uc[33]=-c[33] - fext0[4]*Si00[1][1] - fext0[5]*Si00[1][2] - fext0[6]*Si00[1][3];
uc[34]=-c[34] - fext0[4]*Si00[2][1] - fext0[5]*Si00[2][2] - fext0[6]*Si00[2][3];
uc[35]=-c[35] - fext0[4]*Si00[3][1] - fext0[5]*Si00[3][2] - fext0[6]*Si00[3][3];

/* now solve for accelerations: uc = H * thdd           */
/* Note: uc and H are calculated above */
Hmat[14][14] = Hmat[14][14] = H[2][2];
Hmat[14][15] = Hmat[15][14] = H[3][2];
Hmat[14][16] = Hmat[16][14] = H[4][2];
Hmat[14][17] = Hmat[17][14] = H[5][2];
Hmat[14][13] = Hmat[13][14] = H[7][2];
Hmat[14][1] = Hmat[1][14] = H[8][2];
Hmat[14][2] = Hmat[2][14] = H[9][2];
Hmat[14][3] = Hmat[3][14] = H[10][2];
Hmat[14][4] = Hmat[4][14] = H[11][2];
Hmat[14][5] = Hmat[5][14] = H[12][2];
Hmat[14][6] = Hmat[6][14] = H[13][2];
Hmat[14][7] = Hmat[7][14] = H[19][2];
Hmat[14][8] = Hmat[8][14] = H[20][2];
Hmat[14][9] = Hmat[9][14] = H[21][2];
Hmat[14][10] = Hmat[10][14] = H[22][2];
Hmat[14][11] = Hmat[11][14] = H[23][2];
Hmat[14][12] = Hmat[12][14] = H[24][2];
Hmat[15][15] = Hmat[15][15] = H[3][3];
Hmat[15][16] = Hmat[16][15] = H[4][3];
Hmat[15][17] = Hmat[17][15] = H[5][3];
Hmat[15][13] = Hmat[13][15] = H[7][3];
Hmat[15][1] = Hmat[1][15] = H[8][3];
Hmat[15][2] = Hmat[2][15] = H[9][3];
Hmat[15][3] = Hmat[3][15] = H[10][3];
Hmat[15][4] = Hmat[4][15] = H[11][3];
Hmat[15][5] = Hmat[5][15] = H[12][3];
Hmat[15][6] = Hmat[6][15] = H[13][3];
Hmat[15][7] = Hmat[7][15] = H[19][3];
Hmat[15][8] = Hmat[8][15] = H[20][3];
Hmat[15][9] = Hmat[9][15] = H[21][3];
Hmat[15][10] = Hmat[10][15] = H[22][3];
Hmat[15][11] = Hmat[11][15] = H[23][3];
Hmat[15][12] = Hmat[12][15] = H[24][3];
Hmat[16][16] = Hmat[16][16] = H[4][4];
Hmat[16][17] = Hmat[17][16] = H[5][4];
Hmat[16][13] = Hmat[13][16] = H[7][4];
Hmat[16][1] = Hmat[1][16] = H[8][4];
Hmat[16][2] = Hmat[2][16] = H[9][4];
Hmat[16][3] = Hmat[3][16] = H[10][4];
Hmat[16][4] = Hmat[4][16] = H[11][4];
Hmat[16][5] = Hmat[5][16] = H[12][4];
Hmat[16][6] = Hmat[6][16] = H[13][4];
Hmat[16][7] = Hmat[7][16] = H[19][4];
Hmat[16][8] = Hmat[8][16] = H[20][4];
Hmat[16][9] = Hmat[9][16] = H[21][4];
Hmat[16][10] = Hmat[10][16] = H[22][4];
Hmat[16][11] = Hmat[11][16] = H[23][4];
Hmat[16][12] = Hmat[12][16] = H[24][4];
Hmat[17][17] = Hmat[17][17] = H[5][5];
Hmat[17][13] = Hmat[13][17] = H[7][5];
Hmat[17][1] = Hmat[1][17] = H[8][5];
Hmat[17][2] = Hmat[2][17] = H[9][5];
Hmat[17][3] = Hmat[3][17] = H[10][5];
Hmat[17][4] = Hmat[4][17] = H[11][5];
Hmat[17][5] = Hmat[5][17] = H[12][5];
Hmat[17][6] = Hmat[6][17] = H[13][5];
Hmat[17][7] = Hmat[7][17] = H[19][5];
Hmat[17][8] = Hmat[8][17] = H[20][5];
Hmat[17][9] = Hmat[9][17] = H[21][5];
Hmat[17][10] = Hmat[10][17] = H[22][5];
Hmat[17][11] = Hmat[11][17] = H[23][5];
Hmat[17][12] = Hmat[12][17] = H[24][5];
Hmat[13][13] = Hmat[13][13] = H[7][7];
Hmat[13][1] = Hmat[1][13] = H[8][7];
Hmat[13][2] = Hmat[2][13] = H[9][7];
Hmat[13][3] = Hmat[3][13] = H[10][7];
Hmat[13][4] = Hmat[4][13] = H[11][7];
Hmat[13][5] = Hmat[5][13] = H[12][7];
Hmat[13][6] = Hmat[6][13] = H[13][7];
Hmat[13][7] = Hmat[7][13] = H[19][7];
Hmat[13][8] = Hmat[8][13] = H[20][7];
Hmat[13][9] = Hmat[9][13] = H[21][7];
Hmat[13][10] = Hmat[10][13] = H[22][7];
Hmat[13][11] = Hmat[11][13] = H[23][7];
Hmat[13][12] = Hmat[12][13] = H[24][7];
Hmat[1][1] = Hmat[1][1] = H[8][8];
Hmat[1][2] = Hmat[2][1] = H[9][8];
Hmat[1][3] = Hmat[3][1] = H[10][8];
Hmat[1][4] = Hmat[4][1] = H[11][8];
Hmat[1][5] = Hmat[5][1] = H[12][8];
Hmat[1][6] = Hmat[6][1] = H[13][8];
Hmat[1][7] = Hmat[7][1] = H[19][8];
Hmat[1][8] = Hmat[8][1] = H[20][8];
Hmat[1][9] = Hmat[9][1] = H[21][8];
Hmat[1][10] = Hmat[10][1] = H[22][8];
Hmat[1][11] = Hmat[11][1] = H[23][8];
Hmat[1][12] = Hmat[12][1] = H[24][8];
Hmat[2][2] = Hmat[2][2] = H[9][9];
Hmat[2][3] = Hmat[3][2] = H[10][9];
Hmat[2][4] = Hmat[4][2] = H[11][9];
Hmat[2][5] = Hmat[5][2] = H[12][9];
Hmat[2][6] = Hmat[6][2] = H[13][9];
Hmat[2][7] = Hmat[7][2] = H[19][9];
Hmat[2][8] = Hmat[8][2] = H[20][9];
Hmat[2][9] = Hmat[9][2] = H[21][9];
Hmat[2][10] = Hmat[10][2] = H[22][9];
Hmat[2][11] = Hmat[11][2] = H[23][9];
Hmat[2][12] = Hmat[12][2] = H[24][9];
Hmat[3][3] = Hmat[3][3] = H[10][10];
Hmat[3][4] = Hmat[4][3] = H[11][10];
Hmat[3][5] = Hmat[5][3] = H[12][10];
Hmat[3][6] = Hmat[6][3] = H[13][10];
Hmat[3][7] = Hmat[7][3] = H[19][10];
Hmat[3][8] = Hmat[8][3] = H[20][10];
Hmat[3][9] = Hmat[9][3] = H[21][10];
Hmat[3][10] = Hmat[10][3] = H[22][10];
Hmat[3][11] = Hmat[11][3] = H[23][10];
Hmat[3][12] = Hmat[12][3] = H[24][10];
Hmat[4][4] = Hmat[4][4] = H[11][11];
Hmat[4][5] = Hmat[5][4] = H[12][11];
Hmat[4][6] = Hmat[6][4] = H[13][11];
Hmat[4][7] = Hmat[7][4] = H[19][11];
Hmat[4][8] = Hmat[8][4] = H[20][11];
Hmat[4][9] = Hmat[9][4] = H[21][11];
Hmat[4][10] = Hmat[10][4] = H[22][11];
Hmat[4][11] = Hmat[11][4] = H[23][11];
Hmat[4][12] = Hmat[12][4] = H[24][11];
Hmat[5][5] = Hmat[5][5] = H[12][12];
Hmat[5][6] = Hmat[6][5] = H[13][12];
Hmat[5][7] = Hmat[7][5] = H[19][12];
Hmat[5][8] = Hmat[8][5] = H[20][12];
Hmat[5][9] = Hmat[9][5] = H[21][12];
Hmat[5][10] = Hmat[10][5] = H[22][12];
Hmat[5][11] = Hmat[11][5] = H[23][12];
Hmat[5][12] = Hmat[12][5] = H[24][12];
Hmat[6][6] = Hmat[6][6] = H[13][13];
Hmat[6][7] = Hmat[7][6] = H[19][13];
Hmat[6][8] = Hmat[8][6] = H[20][13];
Hmat[6][9] = Hmat[9][6] = H[21][13];
Hmat[6][10] = Hmat[10][6] = H[22][13];
Hmat[6][11] = Hmat[11][6] = H[23][13];
Hmat[6][12] = Hmat[12][6] = H[24][13];
Hmat[7][7] = Hmat[7][7] = H[19][19];
Hmat[7][8] = Hmat[8][7] = H[20][19];
Hmat[7][9] = Hmat[9][7] = H[21][19];
Hmat[7][10] = Hmat[10][7] = H[22][19];
Hmat[7][11] = Hmat[11][7] = H[23][19];
Hmat[7][12] = Hmat[12][7] = H[24][19];
Hmat[8][8] = Hmat[8][8] = H[20][20];
Hmat[8][9] = Hmat[9][8] = H[21][20];
Hmat[8][10] = Hmat[10][8] = H[22][20];
Hmat[8][11] = Hmat[11][8] = H[23][20];
Hmat[8][12] = Hmat[12][8] = H[24][20];
Hmat[9][9] = Hmat[9][9] = H[21][21];
Hmat[9][10] = Hmat[10][9] = H[22][21];
Hmat[9][11] = Hmat[11][9] = H[23][21];
Hmat[9][12] = Hmat[12][9] = H[24][21];
Hmat[10][10] = Hmat[10][10] = H[22][22];
Hmat[10][11] = Hmat[11][10] = H[23][22];
Hmat[10][12] = Hmat[12][10] = H[24][22];
Hmat[11][11] = Hmat[11][11] = H[23][23];
Hmat[11][12] = Hmat[12][11] = H[24][23];
Hmat[12][12] = Hmat[12][12] = H[24][24];
cvec[14]  = c[2];
ucvec[14] = uc[2];
cvec[15]  = c[3];
ucvec[15] = uc[3];
cvec[16]  = c[4];
ucvec[16] = uc[4];
cvec[17]  = c[5];
ucvec[17] = uc[5];
cvec[13]  = c[7];
ucvec[13] = uc[7];
cvec[1]  = c[8];
ucvec[1] = uc[8];
cvec[2]  = c[9];
ucvec[2] = uc[9];
cvec[3]  = c[10];
ucvec[3] = uc[10];
cvec[4]  = c[11];
ucvec[4] = uc[11];
cvec[5]  = c[12];
ucvec[5] = uc[12];
cvec[6]  = c[13];
ucvec[6] = uc[13];
cvec[7]  = c[19];
ucvec[7] = uc[19];
cvec[8]  = c[20];
ucvec[8] = uc[20];
cvec[9]  = c[21];
ucvec[9] = uc[21];
cvec[10]  = c[22];
ucvec[10] = uc[22];
cvec[11]  = c[23];
ucvec[11] = uc[23];
cvec[12]  = c[24];
ucvec[12] = uc[24];
 for (i=1; i<=6; ++i) 
      cvec[17+i]=c[29+i];
 for (i=1; i<=6; ++i) 
      ucvec[17+i]=uc[29+i];
my_inv_ldlt(Hmat,ucvec,17,thdd);

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

