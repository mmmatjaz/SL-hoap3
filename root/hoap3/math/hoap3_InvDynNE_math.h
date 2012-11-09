/* sine and cosine precomputation */
sstate22th=Sin(state[22].th);
cstate22th=Cos(state[22].th);

sstate23th=Sin(state[23].th);
cstate23th=Cos(state[23].th);

sstate24th=Sin(state[24].th);
cstate24th=Cos(state[24].th);

sstate7th=Sin(state[7].th);
cstate7th=Cos(state[7].th);

sstate8th=Sin(state[8].th);
cstate8th=Cos(state[8].th);

sstate9th=Sin(state[9].th);
cstate9th=Cos(state[9].th);

sstate10th=Sin(state[10].th);
cstate10th=Cos(state[10].th);

sstate25th=Sin(state[25].th);
cstate25th=Cos(state[25].th);

sstate26th=Sin(state[26].th);
cstate26th=Cos(state[26].th);

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




hoap3_InvDynNEfunc1();

hoap3_InvDynNEfunc2();

hoap3_InvDynNEfunc3();

hoap3_InvDynNEfunc4();

hoap3_InvDynNEfunc5();

hoap3_InvDynNEfunc6();

hoap3_InvDynNEfunc7();

/* force/torque of base in world coordinates */
fbase[1]=f0[1]*Si00[1][1] + f0[2]*Si00[1][2] + f0[3]*Si00[1][3];
fbase[2]=f0[1]*Si00[2][1] + f0[2]*Si00[2][2] + f0[3]*Si00[2][3];
fbase[3]=f0[1]*Si00[3][1] + f0[2]*Si00[3][2] + f0[3]*Si00[3][3];
fbase[4]=f0[4]*Si00[1][1] + f0[5]*Si00[1][2] + f0[6]*Si00[1][3];
fbase[5]=f0[4]*Si00[2][1] + f0[5]*Si00[2][2] + f0[6]*Si00[2][3];
fbase[6]=f0[4]*Si00[3][1] + f0[5]*Si00[3][2] + f0[6]*Si00[3][3];

/* inverse dynamics torques */
state[22].uff=-state[22].uex + f2[6] + fext2[6];
state[23].uff=-state[23].uex + f3[6] + fext3[6];
state[24].uff=-state[24].uex + f4[4] + fext4[4];
state[7].uff=-state[7].uex + f5[6] + fext5[6];
state[8].uff=-state[8].uex + f6[6] + fext6[6];
state[9].uff=-state[9].uex + f7[6] + fext7[6];
state[10].uff=state[10].uex - f8[6] - fext8[6];
state[25].uff=-state[25].uex + f9[6] + fext9[6];
state[26].uff=-state[26].uex + f12[6] + fext12[6];
state[17].uff=state[17].uex - f14[6] - fext14[6];
state[18].uff=-state[18].uex + f15[6] + fext15[6];
state[19].uff=-state[19].uex + f16[6] + fext16[6];
state[20].uff=-state[20].uex + f17[6] + fext17[6];
state[27].uff=-state[27].uex + f18[6] + fext18[6];
state[28].uff=-state[28].uex + f21[6] + fext21[6];
state[21].uff=-state[21].uex + f23[6] + fext23[6];
state[1].uff=-state[1].uex + f24[6] + fext24[6];
state[2].uff=-state[2].uex + f25[6] + fext25[6];
state[3].uff=state[3].uex - f26[6] - fext26[6];
state[4].uff=-state[4].uex + f27[6] + fext27[6];
state[5].uff=-state[5].uex + f28[6] + fext28[6];
state[6].uff=state[6].uex - f29[6] - fext29[6];
state[11].uff=-state[11].uex + f36[6] + fext36[6];
state[12].uff=-state[12].uex + f37[6] + fext37[6];
state[13].uff=-state[13].uex + f38[6] + fext38[6];
state[14].uff=state[14].uex - f39[6] - fext39[6];
state[15].uff=state[15].uex - f40[6] - fext40[6];
state[16].uff=state[16].uex - f41[6] - fext41[6];

/* torques due to external forces */
qext[1]=0;
qext[2]=-state[22].uex + fext2[6];
qext[3]=-state[23].uex + fext3[6];
qext[4]=-state[24].uex + fext4[4];
qext[5]=-state[7].uex + fext5[6];
qext[6]=-state[8].uex + fext6[6];
qext[7]=-state[9].uex + fext7[6];
qext[8]=state[10].uex - fext8[6];
qext[9]=-state[25].uex + fext9[6];
qext[10]=0.;
qext[11]=0.;
qext[12]=-state[26].uex + fext12[6];
qext[13]=0.;
qext[14]=state[17].uex - fext14[6];
qext[15]=-state[18].uex + fext15[6];
qext[16]=-state[19].uex + fext16[6];
qext[17]=-state[20].uex + fext17[6];
qext[18]=-state[27].uex + fext18[6];
qext[19]=0.;
qext[20]=0.;
qext[21]=-state[28].uex + fext21[6];
qext[22]=0.;
qext[23]=-state[21].uex + fext23[6];
qext[24]=-state[1].uex + fext24[6];
qext[25]=-state[2].uex + fext25[6];
qext[26]=state[3].uex - fext26[6];
qext[27]=-state[4].uex + fext27[6];
qext[28]=-state[5].uex + fext28[6];
qext[29]=state[6].uex - fext29[6];
qext[30]=0.;
qext[31]=0.;
qext[32]=0.;
qext[33]=0.;
qext[34]=0.;
qext[35]=0.;
qext[36]=-state[11].uex + fext36[6];
qext[37]=-state[12].uex + fext37[6];
qext[38]=-state[13].uex + fext38[6];
qext[39]=state[14].uex - fext39[6];
qext[40]=state[15].uex - fext40[6];
qext[41]=state[16].uex - fext41[6];
qext[42]=0.;
qext[43]=0.;
qext[44]=0.;
qext[45]=0.;
qext[46]=0.;
qext[47]=0.;

