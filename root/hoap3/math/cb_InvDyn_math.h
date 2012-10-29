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



cb_InvDynfunc1();

cb_InvDynfunc2();

cb_InvDynfunc3();

cb_InvDynfunc4();

cb_InvDynfunc5();

cb_InvDynfunc6();

cb_InvDynfunc7();

/* inverse dynamics torques */
state[29].uff=0. - state[29].uex + f1[6];
state[30].uff=0. - state[30].uex + f2[6];
state[31].uff=0. - state[31].uex + f3[6];
state[1].uff=0. - state[1].uex + f4[6];
state[2].uff=0. - state[2].uex + f5[6];
state[3].uff=0. - state[3].uex + f6[6];
state[4].uff=0. - state[4].uex + f7[6];
state[5].uff=0. - state[5].uex + f8[6];
state[6].uff=0. - state[6].uex + f9[6];
state[7].uff=0. - state[7].uex + f10[6];
state[8].uff=0. - state[8].uex + f12[6];
state[9].uff=0. - state[9].uex + f13[6];
state[10].uff=0. - state[10].uex + f14[6];
state[11].uff=0. - state[11].uex + f15[6];
state[12].uff=0. - state[12].uex + f16[6];
state[13].uff=0. - state[13].uex + f17[6];
state[14].uff=0. - state[14].uex + f18[6];
state[32].uff=0. - state[32].uex + f20[6];
state[33].uff=0. - state[33].uex + f21[6];
state[34].uff=0. - state[34].uex + f22[6];
state[35].uff=0. - state[35].uex + f23[6];
state[36].uff=0. - state[36].uex + f24[6];
state[37].uff=0. - state[37].uex + f26[6];
state[38].uff=0. - state[38].uex + f27[6];
state[23].uff=0. - state[23].uex + f30[6];
state[22].uff=0. - state[22].uex + f31[6];
state[24].uff=0. - state[24].uex + f32[6];
state[25].uff=0. - state[25].uex + f33[6];
state[26].uff=0. - state[26].uex + f34[6];
state[27].uff=0. - state[27].uex + f35[6];
state[28].uff=0. - state[28].uex + f36[6];
state[16].uff=0. - state[16].uex + f42[6];
state[15].uff=0. - state[15].uex + f43[6];
state[17].uff=0. - state[17].uex + f44[6];
state[18].uff=0. - state[18].uex + f45[6];
state[19].uff=0. - state[19].uex + f46[6];
state[20].uff=0. - state[20].uex + f47[6];
state[21].uff=0. - state[21].uex + f48[6];

/* torques due to external forces */
qext[1]=0. - state[29].uex;
qext[2]=0. - state[30].uex;
qext[3]=0. - state[31].uex;
qext[4]=0. - state[1].uex;
qext[5]=0. - state[2].uex;
qext[6]=0. - state[3].uex;
qext[7]=0. - state[4].uex;
qext[8]=0. - state[5].uex;
qext[9]=0. - state[6].uex;
qext[10]=0. - state[7].uex;
qext[12]=0. - state[8].uex;
qext[13]=0. - state[9].uex;
qext[14]=0. - state[10].uex;
qext[15]=0. - state[11].uex;
qext[16]=0. - state[12].uex;
qext[17]=0. - state[13].uex;
qext[18]=0. - state[14].uex;
qext[20]=0. - state[32].uex;
qext[21]=0. - state[33].uex;
qext[22]=0. - state[34].uex;
qext[23]=0. - state[35].uex;
qext[24]=0. - state[36].uex;
qext[26]=0. - state[37].uex;
qext[27]=0. - state[38].uex;
qext[30]=0. - state[23].uex;
qext[31]=0. - state[22].uex;
qext[32]=0. - state[24].uex;
qext[33]=0. - state[25].uex;
qext[34]=0. - state[26].uex;
qext[35]=0. - state[27].uex;
qext[36]=0. - state[28].uex;
qext[42]=0. - state[16].uex;
qext[43]=0. - state[15].uex;
qext[44]=0. - state[17].uex;
qext[45]=0. - state[18].uex;
qext[46]=0. - state[19].uex;
qext[47]=0. - state[20].uex;
qext[48]=0. - state[21].uex;

