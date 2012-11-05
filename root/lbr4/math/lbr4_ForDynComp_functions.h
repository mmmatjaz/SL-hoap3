
void
lbr4_ForDynCompfunc1(void)
     {
/* rotation matrices */
S00[1][1]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[2],2);
S00[1][2]=2*(baseo[0].q[2]*baseo[0].q[3] + baseo[0].q[1]*baseo[0].q[4]);
S00[1][3]=2*(-(baseo[0].q[1]*baseo[0].q[3]) + baseo[0].q[2]*baseo[0].q[4]);

S00[2][1]=2*(baseo[0].q[2]*baseo[0].q[3] - baseo[0].q[1]*baseo[0].q[4]);
S00[2][2]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[3],2);
S00[2][3]=2*(baseo[0].q[1]*baseo[0].q[2] + baseo[0].q[3]*baseo[0].q[4]);

S00[3][1]=2*(baseo[0].q[1]*baseo[0].q[3] + baseo[0].q[2]*baseo[0].q[4]);
S00[3][2]=2*(-(baseo[0].q[1]*baseo[0].q[2]) + baseo[0].q[3]*baseo[0].q[4]);
S00[3][3]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[4],2);


S10[1][1]=cstate1th;
S10[1][2]=sstate1th;

S10[2][1]=-sstate1th;
S10[2][2]=cstate1th;


S21[1][2]=sstate2th;
S21[1][3]=-cstate2th;

S21[2][2]=cstate2th;
S21[2][3]=sstate2th;


S32[1][2]=sstate3th;
S32[1][3]=cstate3th;

S32[2][2]=cstate3th;
S32[2][3]=-sstate3th;


S43[1][2]=sstate4th;
S43[1][3]=cstate4th;

S43[2][2]=cstate4th;
S43[2][3]=-sstate4th;


S54[1][2]=sstate5th;
S54[1][3]=-cstate5th;

S54[2][2]=cstate5th;
S54[2][3]=sstate5th;


S65[1][2]=sstate6th;
S65[1][3]=-cstate6th;

S65[2][2]=cstate6th;
S65[2][3]=sstate6th;


S76[1][2]=sstate7th;
S76[1][3]=cstate7th;

S76[2][2]=cstate7th;
S76[2][3]=-sstate7th;


S87[1][1]=rceff1a2*rceff1a3;
S87[1][2]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
S87[1][3]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;

S87[2][1]=-(rceff1a2*rseff1a3);
S87[2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
S87[2][3]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;

S87[3][1]=rseff1a2;
S87[3][2]=-(rceff1a2*rseff1a1);
S87[3][3]=rceff1a1*rceff1a2;




}


void
lbr4_ForDynCompfunc2(void)
     {
/* inverse rotation matrices */
Si00[1][1]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[2],2);
Si00[1][2]=2*(baseo[0].q[2]*baseo[0].q[3] - baseo[0].q[1]*baseo[0].q[4]);
Si00[1][3]=2*(baseo[0].q[1]*baseo[0].q[3] + baseo[0].q[2]*baseo[0].q[4]);

Si00[2][1]=2*(baseo[0].q[2]*baseo[0].q[3] + baseo[0].q[1]*baseo[0].q[4]);
Si00[2][2]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[3],2);
Si00[2][3]=2*(-(baseo[0].q[1]*baseo[0].q[2]) + baseo[0].q[3]*baseo[0].q[4]);

Si00[3][1]=2*(-(baseo[0].q[1]*baseo[0].q[3]) + baseo[0].q[2]*baseo[0].q[4]);
Si00[3][2]=2*(baseo[0].q[1]*baseo[0].q[2] + baseo[0].q[3]*baseo[0].q[4]);
Si00[3][3]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[4],2);


Si01[1][1]=cstate1th;
Si01[1][2]=-sstate1th;

Si01[2][1]=sstate1th;
Si01[2][2]=cstate1th;


Si12[2][1]=sstate2th;
Si12[2][2]=cstate2th;

Si12[3][1]=-cstate2th;
Si12[3][2]=sstate2th;


Si23[2][1]=sstate3th;
Si23[2][2]=cstate3th;

Si23[3][1]=cstate3th;
Si23[3][2]=-sstate3th;


Si34[2][1]=sstate4th;
Si34[2][2]=cstate4th;

Si34[3][1]=cstate4th;
Si34[3][2]=-sstate4th;


Si45[2][1]=sstate5th;
Si45[2][2]=cstate5th;

Si45[3][1]=-cstate5th;
Si45[3][2]=sstate5th;


Si56[2][1]=sstate6th;
Si56[2][2]=cstate6th;

Si56[3][1]=-cstate6th;
Si56[3][2]=sstate6th;


Si67[2][1]=sstate7th;
Si67[2][2]=cstate7th;

Si67[3][1]=cstate7th;
Si67[3][2]=-sstate7th;


Si78[1][1]=rceff1a2*rceff1a3;
Si78[1][2]=-(rceff1a2*rseff1a3);
Si78[1][3]=rseff1a2;

Si78[2][1]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
Si78[2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
Si78[2][3]=-(rceff1a2*rseff1a1);

Si78[3][1]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;
Si78[3][2]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;
Si78[3][3]=rceff1a1*rceff1a2;




}


void
lbr4_ForDynCompfunc3(void)
     {
/* rotation matrices from global to link coordinates */
SG10[1][1]=S00[1][1]*S10[1][1] + S00[2][1]*S10[1][2];
SG10[1][2]=S00[1][2]*S10[1][1] + S00[2][2]*S10[1][2];
SG10[1][3]=S00[1][3]*S10[1][1] + S00[2][3]*S10[1][2];

SG10[2][1]=S00[1][1]*S10[2][1] + S00[2][1]*S10[2][2];
SG10[2][2]=S00[1][2]*S10[2][1] + S00[2][2]*S10[2][2];
SG10[2][3]=S00[1][3]*S10[2][1] + S00[2][3]*S10[2][2];

SG10[3][1]=S00[3][1];
SG10[3][2]=S00[3][2];
SG10[3][3]=S00[3][3];


SG20[1][1]=S21[1][2]*SG10[2][1] + S21[1][3]*SG10[3][1];
SG20[1][2]=S21[1][2]*SG10[2][2] + S21[1][3]*SG10[3][2];
SG20[1][3]=S21[1][2]*SG10[2][3] + S21[1][3]*SG10[3][3];

SG20[2][1]=S21[2][2]*SG10[2][1] + S21[2][3]*SG10[3][1];
SG20[2][2]=S21[2][2]*SG10[2][2] + S21[2][3]*SG10[3][2];
SG20[2][3]=S21[2][2]*SG10[2][3] + S21[2][3]*SG10[3][3];

SG20[3][1]=SG10[1][1];
SG20[3][2]=SG10[1][2];
SG20[3][3]=SG10[1][3];


SG30[1][1]=S32[1][2]*SG20[2][1] + S32[1][3]*SG20[3][1];
SG30[1][2]=S32[1][2]*SG20[2][2] + S32[1][3]*SG20[3][2];
SG30[1][3]=S32[1][2]*SG20[2][3] + S32[1][3]*SG20[3][3];

SG30[2][1]=S32[2][2]*SG20[2][1] + S32[2][3]*SG20[3][1];
SG30[2][2]=S32[2][2]*SG20[2][2] + S32[2][3]*SG20[3][2];
SG30[2][3]=S32[2][2]*SG20[2][3] + S32[2][3]*SG20[3][3];

SG30[3][1]=-SG20[1][1];
SG30[3][2]=-SG20[1][2];
SG30[3][3]=-SG20[1][3];


SG40[1][1]=S43[1][2]*SG30[2][1] + S43[1][3]*SG30[3][1];
SG40[1][2]=S43[1][2]*SG30[2][2] + S43[1][3]*SG30[3][2];
SG40[1][3]=S43[1][2]*SG30[2][3] + S43[1][3]*SG30[3][3];

SG40[2][1]=S43[2][2]*SG30[2][1] + S43[2][3]*SG30[3][1];
SG40[2][2]=S43[2][2]*SG30[2][2] + S43[2][3]*SG30[3][2];
SG40[2][3]=S43[2][2]*SG30[2][3] + S43[2][3]*SG30[3][3];

SG40[3][1]=-SG30[1][1];
SG40[3][2]=-SG30[1][2];
SG40[3][3]=-SG30[1][3];


SG50[1][1]=S54[1][2]*SG40[2][1] + S54[1][3]*SG40[3][1];
SG50[1][2]=S54[1][2]*SG40[2][2] + S54[1][3]*SG40[3][2];
SG50[1][3]=S54[1][2]*SG40[2][3] + S54[1][3]*SG40[3][3];

SG50[2][1]=S54[2][2]*SG40[2][1] + S54[2][3]*SG40[3][1];
SG50[2][2]=S54[2][2]*SG40[2][2] + S54[2][3]*SG40[3][2];
SG50[2][3]=S54[2][2]*SG40[2][3] + S54[2][3]*SG40[3][3];

SG50[3][1]=SG40[1][1];
SG50[3][2]=SG40[1][2];
SG50[3][3]=SG40[1][3];


SG60[1][1]=S65[1][2]*SG50[2][1] + S65[1][3]*SG50[3][1];
SG60[1][2]=S65[1][2]*SG50[2][2] + S65[1][3]*SG50[3][2];
SG60[1][3]=S65[1][2]*SG50[2][3] + S65[1][3]*SG50[3][3];

SG60[2][1]=S65[2][2]*SG50[2][1] + S65[2][3]*SG50[3][1];
SG60[2][2]=S65[2][2]*SG50[2][2] + S65[2][3]*SG50[3][2];
SG60[2][3]=S65[2][2]*SG50[2][3] + S65[2][3]*SG50[3][3];

SG60[3][1]=SG50[1][1];
SG60[3][2]=SG50[1][2];
SG60[3][3]=SG50[1][3];


SG70[1][1]=S76[1][2]*SG60[2][1] + S76[1][3]*SG60[3][1];
SG70[1][2]=S76[1][2]*SG60[2][2] + S76[1][3]*SG60[3][2];
SG70[1][3]=S76[1][2]*SG60[2][3] + S76[1][3]*SG60[3][3];

SG70[2][1]=S76[2][2]*SG60[2][1] + S76[2][3]*SG60[3][1];
SG70[2][2]=S76[2][2]*SG60[2][2] + S76[2][3]*SG60[3][2];
SG70[2][3]=S76[2][2]*SG60[2][3] + S76[2][3]*SG60[3][3];

SG70[3][1]=-SG60[1][1];
SG70[3][2]=-SG60[1][2];
SG70[3][3]=-SG60[1][3];


SG80[1][1]=S87[1][1]*SG70[1][1] + S87[1][2]*SG70[2][1] + S87[1][3]*SG70[3][1];
SG80[1][2]=S87[1][1]*SG70[1][2] + S87[1][2]*SG70[2][2] + S87[1][3]*SG70[3][2];
SG80[1][3]=S87[1][1]*SG70[1][3] + S87[1][2]*SG70[2][3] + S87[1][3]*SG70[3][3];

SG80[2][1]=S87[2][1]*SG70[1][1] + S87[2][2]*SG70[2][1] + S87[2][3]*SG70[3][1];
SG80[2][2]=S87[2][1]*SG70[1][2] + S87[2][2]*SG70[2][2] + S87[2][3]*SG70[3][2];
SG80[2][3]=S87[2][1]*SG70[1][3] + S87[2][2]*SG70[2][3] + S87[2][3]*SG70[3][3];

SG80[3][1]=S87[3][1]*SG70[1][1] + S87[3][2]*SG70[2][1] + S87[3][3]*SG70[3][1];
SG80[3][2]=S87[3][1]*SG70[1][2] + S87[3][2]*SG70[2][2] + S87[3][3]*SG70[3][2];
SG80[3][3]=S87[3][1]*SG70[1][3] + S87[3][2]*SG70[2][3] + S87[3][3]*SG70[3][3];




}


void
lbr4_ForDynCompfunc4(void)
     {
/* velocity vectors */
v0[1]=baseo[0].ad[1]*S00[1][1] + baseo[0].ad[2]*S00[1][2] + baseo[0].ad[3]*S00[1][3];
v0[2]=baseo[0].ad[1]*S00[2][1] + baseo[0].ad[2]*S00[2][2] + baseo[0].ad[3]*S00[2][3];
v0[3]=baseo[0].ad[1]*S00[3][1] + baseo[0].ad[2]*S00[3][2] + baseo[0].ad[3]*S00[3][3];
v0[4]=basec[0].xd[1]*S00[1][1] + basec[0].xd[2]*S00[1][2] + basec[0].xd[3]*S00[1][3];
v0[5]=basec[0].xd[1]*S00[2][1] + basec[0].xd[2]*S00[2][2] + basec[0].xd[3]*S00[2][3];
v0[6]=basec[0].xd[1]*S00[3][1] + basec[0].xd[2]*S00[3][2] + basec[0].xd[3]*S00[3][3];

v1[1]=v0[1]*S10[1][1] + v0[2]*S10[1][2];
v1[2]=v0[1]*S10[2][1] + v0[2]*S10[2][2];
v1[3]=state[1].thd + v0[3];
v1[4]=BA1*v0[2]*S10[1][1] + v0[4]*S10[1][1] - BA1*v0[1]*S10[1][2] + v0[5]*S10[1][2];
v1[5]=BA1*v0[2]*S10[2][1] + v0[4]*S10[2][1] - BA1*v0[1]*S10[2][2] + v0[5]*S10[2][2];
v1[6]=v0[6];

v2[1]=v1[2]*S21[1][2] + v1[3]*S21[1][3];
v2[2]=v1[2]*S21[2][2] + v1[3]*S21[2][3];
v2[3]=state[2].thd + v1[1];
v2[4]=-(A1A2*v1[1]*S21[1][2]) + v1[5]*S21[1][2] + v1[6]*S21[1][3];
v2[5]=-(A1A2*v1[1]*S21[2][2]) + v1[5]*S21[2][2] + v1[6]*S21[2][3];
v2[6]=A1A2*v1[2] + v1[4];

v3[1]=v2[2]*S32[1][2] + v2[3]*S32[1][3];
v3[2]=v2[2]*S32[2][2] + v2[3]*S32[2][3];
v3[3]=state[3].thd - v2[1];
v3[4]=-(A2E1*v2[3]*S32[1][2]) + v2[5]*S32[1][2] + A2E1*v2[2]*S32[1][3] + v2[6]*S32[1][3];
v3[5]=-(A2E1*v2[3]*S32[2][2]) + v2[5]*S32[2][2] + A2E1*v2[2]*S32[2][3] + v2[6]*S32[2][3];
v3[6]=-v2[4];

v4[1]=v3[2]*S43[1][2] + v3[3]*S43[1][3];
v4[2]=v3[2]*S43[2][2] + v3[3]*S43[2][3];
v4[3]=state[4].thd - v3[1];
v4[4]=-(E1A3*v3[1]*S43[1][2]) + v3[5]*S43[1][2] + v3[6]*S43[1][3];
v4[5]=-(E1A3*v3[1]*S43[2][2]) + v3[5]*S43[2][2] + v3[6]*S43[2][3];
v4[6]=-(E1A3*v3[2]) - v3[4];

v5[1]=v4[2]*S54[1][2] + v4[3]*S54[1][3];
v5[2]=v4[2]*S54[2][2] + v4[3]*S54[2][3];
v5[3]=state[5].thd + v4[1];
v5[4]=A3A4*v4[3]*S54[1][2] + v4[5]*S54[1][2] - A3A4*v4[2]*S54[1][3] + v4[6]*S54[1][3];
v5[5]=A3A4*v4[3]*S54[2][2] + v4[5]*S54[2][2] - A3A4*v4[2]*S54[2][3] + v4[6]*S54[2][3];
v5[6]=v4[4];

v6[1]=v5[2]*S65[1][2] + v5[3]*S65[1][3];
v6[2]=v5[2]*S65[2][2] + v5[3]*S65[2][3];
v6[3]=state[6].thd + v5[1];
v6[4]=-(A4A5*v5[1]*S65[1][2]) + v5[5]*S65[1][2] + v5[6]*S65[1][3];
v6[5]=-(A4A5*v5[1]*S65[2][2]) + v5[5]*S65[2][2] + v5[6]*S65[2][3];
v6[6]=A4A5*v5[2] + v5[4];

v7[1]=v6[2]*S76[1][2] + v6[3]*S76[1][3];
v7[2]=v6[2]*S76[2][2] + v6[3]*S76[2][3];
v7[3]=state[7].thd - v6[1];
v7[4]=-(A5A6*v6[3]*S76[1][2]) + v6[5]*S76[1][2] + A5A6*v6[2]*S76[1][3] + v6[6]*S76[1][3];
v7[5]=-(A5A6*v6[3]*S76[2][2]) + v6[5]*S76[2][2] + A5A6*v6[2]*S76[2][3] + v6[6]*S76[2][3];
v7[6]=-v6[4];

v8[1]=v7[1]*S87[1][1] + v7[2]*S87[1][2] + v7[3]*S87[1][3];
v8[2]=v7[1]*S87[2][1] + v7[2]*S87[2][2] + v7[3]*S87[2][3];
v8[3]=v7[1]*S87[3][1] + v7[2]*S87[3][2] + v7[3]*S87[3][3];
v8[4]=v7[4]*S87[1][1] + v7[5]*S87[1][2] + v7[3]*(-(eff[1].x[2]*S87[1][1]) + eff[1].x[1]*S87[1][2]) + v7[6]*S87[1][3] + v7[2]*(eff[1].x[3]*S87[1][1] - eff[1].x[1]*S87[1][3]) + v7[1]*(-(eff[1].x[3]*S87[1][2]) + eff[1].x[2]*S87[1][3]);
v8[5]=v7[4]*S87[2][1] + v7[5]*S87[2][2] + v7[3]*(-(eff[1].x[2]*S87[2][1]) + eff[1].x[1]*S87[2][2]) + v7[6]*S87[2][3] + v7[2]*(eff[1].x[3]*S87[2][1] - eff[1].x[1]*S87[2][3]) + v7[1]*(-(eff[1].x[3]*S87[2][2]) + eff[1].x[2]*S87[2][3]);
v8[6]=v7[4]*S87[3][1] + v7[5]*S87[3][2] + v7[3]*(-(eff[1].x[2]*S87[3][1]) + eff[1].x[1]*S87[3][2]) + v7[6]*S87[3][3] + v7[2]*(eff[1].x[3]*S87[3][1] - eff[1].x[1]*S87[3][3]) + v7[1]*(-(eff[1].x[3]*S87[3][2]) + eff[1].x[2]*S87[3][3]);



}


void
lbr4_ForDynCompfunc5(void)
     {
/* acceleration vectors */
a0[4]=gravity*S00[1][3];
a0[5]=gravity*S00[2][3];
a0[6]=gravity*S00[3][3];

a1[1]=state[1].thd*v1[2];
a1[2]=-(state[1].thd*v1[1]);
a1[4]=state[1].thd*v1[5] + a0[4]*S10[1][1] + a0[5]*S10[1][2];
a1[5]=-(state[1].thd*v1[4]) + a0[4]*S10[2][1] + a0[5]*S10[2][2];
a1[6]=a0[6];

a2[1]=state[2].thd*v2[2] + a1[2]*S21[1][2];
a2[2]=-(state[2].thd*v2[1]) + a1[2]*S21[2][2];
a2[3]=a1[1];
a2[4]=state[2].thd*v2[5] - A1A2*a1[1]*S21[1][2] + a1[5]*S21[1][2] + a1[6]*S21[1][3];
a2[5]=-(state[2].thd*v2[4]) - A1A2*a1[1]*S21[2][2] + a1[5]*S21[2][2] + a1[6]*S21[2][3];
a2[6]=A1A2*a1[2] + a1[4];

a3[1]=state[3].thd*v3[2] + a2[2]*S32[1][2] + a2[3]*S32[1][3];
a3[2]=-(state[3].thd*v3[1]) + a2[2]*S32[2][2] + a2[3]*S32[2][3];
a3[3]=-a2[1];
a3[4]=state[3].thd*v3[5] - A2E1*a2[3]*S32[1][2] + a2[5]*S32[1][2] + A2E1*a2[2]*S32[1][3] + a2[6]*S32[1][3];
a3[5]=-(state[3].thd*v3[4]) - A2E1*a2[3]*S32[2][2] + a2[5]*S32[2][2] + A2E1*a2[2]*S32[2][3] + a2[6]*S32[2][3];
a3[6]=-a2[4];

a4[1]=state[4].thd*v4[2] + a3[2]*S43[1][2] + a3[3]*S43[1][3];
a4[2]=-(state[4].thd*v4[1]) + a3[2]*S43[2][2] + a3[3]*S43[2][3];
a4[3]=-a3[1];
a4[4]=state[4].thd*v4[5] - E1A3*a3[1]*S43[1][2] + a3[5]*S43[1][2] + a3[6]*S43[1][3];
a4[5]=-(state[4].thd*v4[4]) - E1A3*a3[1]*S43[2][2] + a3[5]*S43[2][2] + a3[6]*S43[2][3];
a4[6]=-(E1A3*a3[2]) - a3[4];

a5[1]=state[5].thd*v5[2] + a4[2]*S54[1][2] + a4[3]*S54[1][3];
a5[2]=-(state[5].thd*v5[1]) + a4[2]*S54[2][2] + a4[3]*S54[2][3];
a5[3]=a4[1];
a5[4]=state[5].thd*v5[5] + A3A4*a4[3]*S54[1][2] + a4[5]*S54[1][2] - A3A4*a4[2]*S54[1][3] + a4[6]*S54[1][3];
a5[5]=-(state[5].thd*v5[4]) + A3A4*a4[3]*S54[2][2] + a4[5]*S54[2][2] - A3A4*a4[2]*S54[2][3] + a4[6]*S54[2][3];
a5[6]=a4[4];

a6[1]=state[6].thd*v6[2] + a5[2]*S65[1][2] + a5[3]*S65[1][3];
a6[2]=-(state[6].thd*v6[1]) + a5[2]*S65[2][2] + a5[3]*S65[2][3];
a6[3]=a5[1];
a6[4]=state[6].thd*v6[5] - A4A5*a5[1]*S65[1][2] + a5[5]*S65[1][2] + a5[6]*S65[1][3];
a6[5]=-(state[6].thd*v6[4]) - A4A5*a5[1]*S65[2][2] + a5[5]*S65[2][2] + a5[6]*S65[2][3];
a6[6]=A4A5*a5[2] + a5[4];

a7[1]=state[7].thd*v7[2] + a6[2]*S76[1][2] + a6[3]*S76[1][3];
a7[2]=-(state[7].thd*v7[1]) + a6[2]*S76[2][2] + a6[3]*S76[2][3];
a7[3]=-a6[1];
a7[4]=state[7].thd*v7[5] - A5A6*a6[3]*S76[1][2] + a6[5]*S76[1][2] + A5A6*a6[2]*S76[1][3] + a6[6]*S76[1][3];
a7[5]=-(state[7].thd*v7[4]) - A5A6*a6[3]*S76[2][2] + a6[5]*S76[2][2] + A5A6*a6[2]*S76[2][3] + a6[6]*S76[2][3];
a7[6]=-a6[4];

a8[1]=a7[1]*S87[1][1] + a7[2]*S87[1][2] + a7[3]*S87[1][3];
a8[2]=a7[1]*S87[2][1] + a7[2]*S87[2][2] + a7[3]*S87[2][3];
a8[3]=a7[1]*S87[3][1] + a7[2]*S87[3][2] + a7[3]*S87[3][3];
a8[4]=a7[4]*S87[1][1] + a7[5]*S87[1][2] + a7[3]*(-(eff[1].x[2]*S87[1][1]) + eff[1].x[1]*S87[1][2]) + a7[6]*S87[1][3] + a7[2]*(eff[1].x[3]*S87[1][1] - eff[1].x[1]*S87[1][3]) + a7[1]*(-(eff[1].x[3]*S87[1][2]) + eff[1].x[2]*S87[1][3]);
a8[5]=a7[4]*S87[2][1] + a7[5]*S87[2][2] + a7[3]*(-(eff[1].x[2]*S87[2][1]) + eff[1].x[1]*S87[2][2]) + a7[6]*S87[2][3] + a7[2]*(eff[1].x[3]*S87[2][1] - eff[1].x[1]*S87[2][3]) + a7[1]*(-(eff[1].x[3]*S87[2][2]) + eff[1].x[2]*S87[2][3]);
a8[6]=a7[4]*S87[3][1] + a7[5]*S87[3][2] + a7[3]*(-(eff[1].x[2]*S87[3][1]) + eff[1].x[1]*S87[3][2]) + a7[6]*S87[3][3] + a7[2]*(eff[1].x[3]*S87[3][1] - eff[1].x[1]*S87[3][3]) + a7[1]*(-(eff[1].x[3]*S87[3][2]) + eff[1].x[2]*S87[3][3]);



}


void
lbr4_ForDynCompfunc6(void)
     {
/* net forces and external forces for each joint */
fnet0[1]=links[0].m*a0[4] - links[0].mcm[1]*Power(v0[2],2) - links[0].mcm[1]*Power(v0[3],2) + v0[1]*(links[0].mcm[2]*v0[2] + links[0].mcm[3]*v0[3]) - links[0].m*v0[3]*v0[5] + links[0].m*v0[2]*v0[6];
fnet0[2]=links[0].m*a0[5] - links[0].mcm[2]*Power(v0[1],2) - links[0].mcm[2]*Power(v0[3],2) + v0[2]*(links[0].mcm[1]*v0[1] + links[0].mcm[3]*v0[3]) + links[0].m*v0[3]*v0[4] - links[0].m*v0[1]*v0[6];
fnet0[3]=links[0].m*a0[6] - links[0].mcm[3]*Power(v0[1],2) - links[0].mcm[3]*Power(v0[2],2) + (links[0].mcm[1]*v0[1] + links[0].mcm[2]*v0[2])*v0[3] - links[0].m*v0[2]*v0[4] + links[0].m*v0[1]*v0[5];
fnet0[4]=a0[6]*links[0].mcm[2] - a0[5]*links[0].mcm[3] + (-(links[0].mcm[2]*v0[2]) - links[0].mcm[3]*v0[3])*v0[4] + (links[0].mcm[1]*v0[3] + links[0].m*v0[5])*v0[6] + v0[5]*(links[0].mcm[1]*v0[2] - links[0].m*v0[6]) + v0[1]*(links[0].mcm[2]*v0[5] + links[0].mcm[3]*v0[6] - v0[3]*links[0].inertia[1][2] + v0[2]*links[0].inertia[1][3]) + v0[2]*(-(links[0].mcm[1]*v0[5]) - v0[3]*links[0].inertia[2][2] + v0[2]*links[0].inertia[2][3]) + v0[3]*(-(links[0].mcm[1]*v0[6]) - v0[3]*links[0].inertia[2][3] + v0[2]*links[0].inertia[3][3]);
fnet0[5]=-(a0[6]*links[0].mcm[1]) + a0[4]*links[0].mcm[3] + (-(links[0].mcm[1]*v0[1]) - links[0].mcm[3]*v0[3])*v0[5] + (links[0].mcm[2]*v0[3] - links[0].m*v0[4])*v0[6] + v0[4]*(links[0].mcm[2]*v0[1] + links[0].m*v0[6]) + v0[1]*(-(links[0].mcm[2]*v0[4]) + v0[3]*links[0].inertia[1][1] - v0[1]*links[0].inertia[1][3]) + v0[2]*(links[0].mcm[1]*v0[4] + links[0].mcm[3]*v0[6] + v0[3]*links[0].inertia[1][2] - v0[1]*links[0].inertia[2][3]) + v0[3]*(-(links[0].mcm[2]*v0[6]) + v0[3]*links[0].inertia[1][3] - v0[1]*links[0].inertia[3][3]);
fnet0[6]=a0[5]*links[0].mcm[1] - a0[4]*links[0].mcm[2] + (links[0].mcm[3]*v0[2] + links[0].m*v0[4])*v0[5] + v0[4]*(links[0].mcm[3]*v0[1] - links[0].m*v0[5]) + (-(links[0].mcm[1]*v0[1]) - links[0].mcm[2]*v0[2])*v0[6] + v0[1]*(-(links[0].mcm[3]*v0[4]) - v0[2]*links[0].inertia[1][1] + v0[1]*links[0].inertia[1][2]) + v0[2]*(-(links[0].mcm[3]*v0[5]) - v0[2]*links[0].inertia[1][2] + v0[1]*links[0].inertia[2][2]) + v0[3]*(links[0].mcm[1]*v0[4] + links[0].mcm[2]*v0[5] - v0[2]*links[0].inertia[1][3] + v0[1]*links[0].inertia[2][3]);

fnet1[1]=links[1].m*a1[4] + a1[2]*links[1].mcm[3] - links[1].mcm[1]*Power(v1[2],2) - links[1].mcm[1]*Power(v1[3],2) + v1[1]*(links[1].mcm[2]*v1[2] + links[1].mcm[3]*v1[3]) - links[1].m*v1[3]*v1[5] + links[1].m*v1[2]*v1[6];
fnet1[2]=links[1].m*a1[5] - a1[1]*links[1].mcm[3] - links[1].mcm[2]*Power(v1[1],2) - links[1].mcm[2]*Power(v1[3],2) + v1[2]*(links[1].mcm[1]*v1[1] + links[1].mcm[3]*v1[3]) + links[1].m*v1[3]*v1[4] - links[1].m*v1[1]*v1[6];
fnet1[3]=links[1].m*a1[6] - a1[2]*links[1].mcm[1] + a1[1]*links[1].mcm[2] - links[1].mcm[3]*Power(v1[1],2) - links[1].mcm[3]*Power(v1[2],2) + (links[1].mcm[1]*v1[1] + links[1].mcm[2]*v1[2])*v1[3] - links[1].m*v1[2]*v1[4] + links[1].m*v1[1]*v1[5];
fnet1[4]=a1[6]*links[1].mcm[2] - a1[5]*links[1].mcm[3] + (-(links[1].mcm[2]*v1[2]) - links[1].mcm[3]*v1[3])*v1[4] + (links[1].mcm[1]*v1[3] + links[1].m*v1[5])*v1[6] + v1[5]*(links[1].mcm[1]*v1[2] - links[1].m*v1[6]) + a1[1]*links[1].inertia[1][1] + a1[2]*links[1].inertia[1][2] + v1[1]*(links[1].mcm[2]*v1[5] + links[1].mcm[3]*v1[6] - v1[3]*links[1].inertia[1][2] + v1[2]*links[1].inertia[1][3]) + v1[2]*(-(links[1].mcm[1]*v1[5]) - v1[3]*links[1].inertia[2][2] + v1[2]*links[1].inertia[2][3]) + v1[3]*(-(links[1].mcm[1]*v1[6]) - v1[3]*links[1].inertia[2][3] + v1[2]*links[1].inertia[3][3]);
fnet1[5]=-(a1[6]*links[1].mcm[1]) + a1[4]*links[1].mcm[3] + (-(links[1].mcm[1]*v1[1]) - links[1].mcm[3]*v1[3])*v1[5] + (links[1].mcm[2]*v1[3] - links[1].m*v1[4])*v1[6] + v1[4]*(links[1].mcm[2]*v1[1] + links[1].m*v1[6]) + a1[1]*links[1].inertia[1][2] + v1[1]*(-(links[1].mcm[2]*v1[4]) + v1[3]*links[1].inertia[1][1] - v1[1]*links[1].inertia[1][3]) + a1[2]*links[1].inertia[2][2] + v1[2]*(links[1].mcm[1]*v1[4] + links[1].mcm[3]*v1[6] + v1[3]*links[1].inertia[1][2] - v1[1]*links[1].inertia[2][3]) + v1[3]*(-(links[1].mcm[2]*v1[6]) + v1[3]*links[1].inertia[1][3] - v1[1]*links[1].inertia[3][3]);
fnet1[6]=a1[5]*links[1].mcm[1] - a1[4]*links[1].mcm[2] + (links[1].mcm[3]*v1[2] + links[1].m*v1[4])*v1[5] + v1[4]*(links[1].mcm[3]*v1[1] - links[1].m*v1[5]) + (-(links[1].mcm[1]*v1[1]) - links[1].mcm[2]*v1[2])*v1[6] + v1[1]*(-(links[1].mcm[3]*v1[4]) - v1[2]*links[1].inertia[1][1] + v1[1]*links[1].inertia[1][2]) + a1[1]*links[1].inertia[1][3] + v1[2]*(-(links[1].mcm[3]*v1[5]) - v1[2]*links[1].inertia[1][2] + v1[1]*links[1].inertia[2][2]) + a1[2]*links[1].inertia[2][3] + v1[3]*(links[1].mcm[1]*v1[4] + links[1].mcm[2]*v1[5] - v1[2]*links[1].inertia[1][3] + v1[1]*links[1].inertia[2][3]);

fnet2[1]=links[2].m*a2[4] - a2[3]*links[2].mcm[2] + a2[2]*links[2].mcm[3] - links[2].mcm[1]*Power(v2[2],2) - links[2].mcm[1]*Power(v2[3],2) + v2[1]*(links[2].mcm[2]*v2[2] + links[2].mcm[3]*v2[3]) - links[2].m*v2[3]*v2[5] + links[2].m*v2[2]*v2[6];
fnet2[2]=links[2].m*a2[5] + a2[3]*links[2].mcm[1] - a2[1]*links[2].mcm[3] - links[2].mcm[2]*Power(v2[1],2) - links[2].mcm[2]*Power(v2[3],2) + v2[2]*(links[2].mcm[1]*v2[1] + links[2].mcm[3]*v2[3]) + links[2].m*v2[3]*v2[4] - links[2].m*v2[1]*v2[6];
fnet2[3]=links[2].m*a2[6] - a2[2]*links[2].mcm[1] + a2[1]*links[2].mcm[2] - links[2].mcm[3]*Power(v2[1],2) - links[2].mcm[3]*Power(v2[2],2) + (links[2].mcm[1]*v2[1] + links[2].mcm[2]*v2[2])*v2[3] - links[2].m*v2[2]*v2[4] + links[2].m*v2[1]*v2[5];
fnet2[4]=a2[6]*links[2].mcm[2] - a2[5]*links[2].mcm[3] + (-(links[2].mcm[2]*v2[2]) - links[2].mcm[3]*v2[3])*v2[4] + (links[2].mcm[1]*v2[3] + links[2].m*v2[5])*v2[6] + v2[5]*(links[2].mcm[1]*v2[2] - links[2].m*v2[6]) + a2[1]*links[2].inertia[1][1] + a2[2]*links[2].inertia[1][2] + a2[3]*links[2].inertia[1][3] + v2[1]*(links[2].mcm[2]*v2[5] + links[2].mcm[3]*v2[6] - v2[3]*links[2].inertia[1][2] + v2[2]*links[2].inertia[1][3]) + v2[2]*(-(links[2].mcm[1]*v2[5]) - v2[3]*links[2].inertia[2][2] + v2[2]*links[2].inertia[2][3]) + v2[3]*(-(links[2].mcm[1]*v2[6]) - v2[3]*links[2].inertia[2][3] + v2[2]*links[2].inertia[3][3]);
fnet2[5]=-(a2[6]*links[2].mcm[1]) + a2[4]*links[2].mcm[3] + (-(links[2].mcm[1]*v2[1]) - links[2].mcm[3]*v2[3])*v2[5] + (links[2].mcm[2]*v2[3] - links[2].m*v2[4])*v2[6] + v2[4]*(links[2].mcm[2]*v2[1] + links[2].m*v2[6]) + a2[1]*links[2].inertia[1][2] + v2[1]*(-(links[2].mcm[2]*v2[4]) + v2[3]*links[2].inertia[1][1] - v2[1]*links[2].inertia[1][3]) + a2[2]*links[2].inertia[2][2] + a2[3]*links[2].inertia[2][3] + v2[2]*(links[2].mcm[1]*v2[4] + links[2].mcm[3]*v2[6] + v2[3]*links[2].inertia[1][2] - v2[1]*links[2].inertia[2][3]) + v2[3]*(-(links[2].mcm[2]*v2[6]) + v2[3]*links[2].inertia[1][3] - v2[1]*links[2].inertia[3][3]);
fnet2[6]=a2[5]*links[2].mcm[1] - a2[4]*links[2].mcm[2] + (links[2].mcm[3]*v2[2] + links[2].m*v2[4])*v2[5] + v2[4]*(links[2].mcm[3]*v2[1] - links[2].m*v2[5]) + (-(links[2].mcm[1]*v2[1]) - links[2].mcm[2]*v2[2])*v2[6] + v2[1]*(-(links[2].mcm[3]*v2[4]) - v2[2]*links[2].inertia[1][1] + v2[1]*links[2].inertia[1][2]) + a2[1]*links[2].inertia[1][3] + v2[2]*(-(links[2].mcm[3]*v2[5]) - v2[2]*links[2].inertia[1][2] + v2[1]*links[2].inertia[2][2]) + a2[2]*links[2].inertia[2][3] + v2[3]*(links[2].mcm[1]*v2[4] + links[2].mcm[2]*v2[5] - v2[2]*links[2].inertia[1][3] + v2[1]*links[2].inertia[2][3]) + a2[3]*links[2].inertia[3][3];

fnet3[1]=links[3].m*a3[4] - a3[3]*links[3].mcm[2] + a3[2]*links[3].mcm[3] - links[3].mcm[1]*Power(v3[2],2) - links[3].mcm[1]*Power(v3[3],2) + v3[1]*(links[3].mcm[2]*v3[2] + links[3].mcm[3]*v3[3]) - links[3].m*v3[3]*v3[5] + links[3].m*v3[2]*v3[6];
fnet3[2]=links[3].m*a3[5] + a3[3]*links[3].mcm[1] - a3[1]*links[3].mcm[3] - links[3].mcm[2]*Power(v3[1],2) - links[3].mcm[2]*Power(v3[3],2) + v3[2]*(links[3].mcm[1]*v3[1] + links[3].mcm[3]*v3[3]) + links[3].m*v3[3]*v3[4] - links[3].m*v3[1]*v3[6];
fnet3[3]=links[3].m*a3[6] - a3[2]*links[3].mcm[1] + a3[1]*links[3].mcm[2] - links[3].mcm[3]*Power(v3[1],2) - links[3].mcm[3]*Power(v3[2],2) + (links[3].mcm[1]*v3[1] + links[3].mcm[2]*v3[2])*v3[3] - links[3].m*v3[2]*v3[4] + links[3].m*v3[1]*v3[5];
fnet3[4]=a3[6]*links[3].mcm[2] - a3[5]*links[3].mcm[3] + (-(links[3].mcm[2]*v3[2]) - links[3].mcm[3]*v3[3])*v3[4] + (links[3].mcm[1]*v3[3] + links[3].m*v3[5])*v3[6] + v3[5]*(links[3].mcm[1]*v3[2] - links[3].m*v3[6]) + a3[1]*links[3].inertia[1][1] + a3[2]*links[3].inertia[1][2] + a3[3]*links[3].inertia[1][3] + v3[1]*(links[3].mcm[2]*v3[5] + links[3].mcm[3]*v3[6] - v3[3]*links[3].inertia[1][2] + v3[2]*links[3].inertia[1][3]) + v3[2]*(-(links[3].mcm[1]*v3[5]) - v3[3]*links[3].inertia[2][2] + v3[2]*links[3].inertia[2][3]) + v3[3]*(-(links[3].mcm[1]*v3[6]) - v3[3]*links[3].inertia[2][3] + v3[2]*links[3].inertia[3][3]);
fnet3[5]=-(a3[6]*links[3].mcm[1]) + a3[4]*links[3].mcm[3] + (-(links[3].mcm[1]*v3[1]) - links[3].mcm[3]*v3[3])*v3[5] + (links[3].mcm[2]*v3[3] - links[3].m*v3[4])*v3[6] + v3[4]*(links[3].mcm[2]*v3[1] + links[3].m*v3[6]) + a3[1]*links[3].inertia[1][2] + v3[1]*(-(links[3].mcm[2]*v3[4]) + v3[3]*links[3].inertia[1][1] - v3[1]*links[3].inertia[1][3]) + a3[2]*links[3].inertia[2][2] + a3[3]*links[3].inertia[2][3] + v3[2]*(links[3].mcm[1]*v3[4] + links[3].mcm[3]*v3[6] + v3[3]*links[3].inertia[1][2] - v3[1]*links[3].inertia[2][3]) + v3[3]*(-(links[3].mcm[2]*v3[6]) + v3[3]*links[3].inertia[1][3] - v3[1]*links[3].inertia[3][3]);
fnet3[6]=a3[5]*links[3].mcm[1] - a3[4]*links[3].mcm[2] + (links[3].mcm[3]*v3[2] + links[3].m*v3[4])*v3[5] + v3[4]*(links[3].mcm[3]*v3[1] - links[3].m*v3[5]) + (-(links[3].mcm[1]*v3[1]) - links[3].mcm[2]*v3[2])*v3[6] + v3[1]*(-(links[3].mcm[3]*v3[4]) - v3[2]*links[3].inertia[1][1] + v3[1]*links[3].inertia[1][2]) + a3[1]*links[3].inertia[1][3] + v3[2]*(-(links[3].mcm[3]*v3[5]) - v3[2]*links[3].inertia[1][2] + v3[1]*links[3].inertia[2][2]) + a3[2]*links[3].inertia[2][3] + v3[3]*(links[3].mcm[1]*v3[4] + links[3].mcm[2]*v3[5] - v3[2]*links[3].inertia[1][3] + v3[1]*links[3].inertia[2][3]) + a3[3]*links[3].inertia[3][3];

fnet4[1]=links[4].m*a4[4] - a4[3]*links[4].mcm[2] + a4[2]*links[4].mcm[3] - links[4].mcm[1]*Power(v4[2],2) - links[4].mcm[1]*Power(v4[3],2) + v4[1]*(links[4].mcm[2]*v4[2] + links[4].mcm[3]*v4[3]) - links[4].m*v4[3]*v4[5] + links[4].m*v4[2]*v4[6];
fnet4[2]=links[4].m*a4[5] + a4[3]*links[4].mcm[1] - a4[1]*links[4].mcm[3] - links[4].mcm[2]*Power(v4[1],2) - links[4].mcm[2]*Power(v4[3],2) + v4[2]*(links[4].mcm[1]*v4[1] + links[4].mcm[3]*v4[3]) + links[4].m*v4[3]*v4[4] - links[4].m*v4[1]*v4[6];
fnet4[3]=links[4].m*a4[6] - a4[2]*links[4].mcm[1] + a4[1]*links[4].mcm[2] - links[4].mcm[3]*Power(v4[1],2) - links[4].mcm[3]*Power(v4[2],2) + (links[4].mcm[1]*v4[1] + links[4].mcm[2]*v4[2])*v4[3] - links[4].m*v4[2]*v4[4] + links[4].m*v4[1]*v4[5];
fnet4[4]=a4[6]*links[4].mcm[2] - a4[5]*links[4].mcm[3] + (-(links[4].mcm[2]*v4[2]) - links[4].mcm[3]*v4[3])*v4[4] + (links[4].mcm[1]*v4[3] + links[4].m*v4[5])*v4[6] + v4[5]*(links[4].mcm[1]*v4[2] - links[4].m*v4[6]) + a4[1]*links[4].inertia[1][1] + a4[2]*links[4].inertia[1][2] + a4[3]*links[4].inertia[1][3] + v4[1]*(links[4].mcm[2]*v4[5] + links[4].mcm[3]*v4[6] - v4[3]*links[4].inertia[1][2] + v4[2]*links[4].inertia[1][3]) + v4[2]*(-(links[4].mcm[1]*v4[5]) - v4[3]*links[4].inertia[2][2] + v4[2]*links[4].inertia[2][3]) + v4[3]*(-(links[4].mcm[1]*v4[6]) - v4[3]*links[4].inertia[2][3] + v4[2]*links[4].inertia[3][3]);
fnet4[5]=-(a4[6]*links[4].mcm[1]) + a4[4]*links[4].mcm[3] + (-(links[4].mcm[1]*v4[1]) - links[4].mcm[3]*v4[3])*v4[5] + (links[4].mcm[2]*v4[3] - links[4].m*v4[4])*v4[6] + v4[4]*(links[4].mcm[2]*v4[1] + links[4].m*v4[6]) + a4[1]*links[4].inertia[1][2] + v4[1]*(-(links[4].mcm[2]*v4[4]) + v4[3]*links[4].inertia[1][1] - v4[1]*links[4].inertia[1][3]) + a4[2]*links[4].inertia[2][2] + a4[3]*links[4].inertia[2][3] + v4[2]*(links[4].mcm[1]*v4[4] + links[4].mcm[3]*v4[6] + v4[3]*links[4].inertia[1][2] - v4[1]*links[4].inertia[2][3]) + v4[3]*(-(links[4].mcm[2]*v4[6]) + v4[3]*links[4].inertia[1][3] - v4[1]*links[4].inertia[3][3]);
fnet4[6]=a4[5]*links[4].mcm[1] - a4[4]*links[4].mcm[2] + (links[4].mcm[3]*v4[2] + links[4].m*v4[4])*v4[5] + v4[4]*(links[4].mcm[3]*v4[1] - links[4].m*v4[5]) + (-(links[4].mcm[1]*v4[1]) - links[4].mcm[2]*v4[2])*v4[6] + v4[1]*(-(links[4].mcm[3]*v4[4]) - v4[2]*links[4].inertia[1][1] + v4[1]*links[4].inertia[1][2]) + a4[1]*links[4].inertia[1][3] + v4[2]*(-(links[4].mcm[3]*v4[5]) - v4[2]*links[4].inertia[1][2] + v4[1]*links[4].inertia[2][2]) + a4[2]*links[4].inertia[2][3] + v4[3]*(links[4].mcm[1]*v4[4] + links[4].mcm[2]*v4[5] - v4[2]*links[4].inertia[1][3] + v4[1]*links[4].inertia[2][3]) + a4[3]*links[4].inertia[3][3];

fnet5[1]=links[5].m*a5[4] - a5[3]*links[5].mcm[2] + a5[2]*links[5].mcm[3] - links[5].mcm[1]*Power(v5[2],2) - links[5].mcm[1]*Power(v5[3],2) + v5[1]*(links[5].mcm[2]*v5[2] + links[5].mcm[3]*v5[3]) - links[5].m*v5[3]*v5[5] + links[5].m*v5[2]*v5[6];
fnet5[2]=links[5].m*a5[5] + a5[3]*links[5].mcm[1] - a5[1]*links[5].mcm[3] - links[5].mcm[2]*Power(v5[1],2) - links[5].mcm[2]*Power(v5[3],2) + v5[2]*(links[5].mcm[1]*v5[1] + links[5].mcm[3]*v5[3]) + links[5].m*v5[3]*v5[4] - links[5].m*v5[1]*v5[6];
fnet5[3]=links[5].m*a5[6] - a5[2]*links[5].mcm[1] + a5[1]*links[5].mcm[2] - links[5].mcm[3]*Power(v5[1],2) - links[5].mcm[3]*Power(v5[2],2) + (links[5].mcm[1]*v5[1] + links[5].mcm[2]*v5[2])*v5[3] - links[5].m*v5[2]*v5[4] + links[5].m*v5[1]*v5[5];
fnet5[4]=a5[6]*links[5].mcm[2] - a5[5]*links[5].mcm[3] + (-(links[5].mcm[2]*v5[2]) - links[5].mcm[3]*v5[3])*v5[4] + (links[5].mcm[1]*v5[3] + links[5].m*v5[5])*v5[6] + v5[5]*(links[5].mcm[1]*v5[2] - links[5].m*v5[6]) + a5[1]*links[5].inertia[1][1] + a5[2]*links[5].inertia[1][2] + a5[3]*links[5].inertia[1][3] + v5[1]*(links[5].mcm[2]*v5[5] + links[5].mcm[3]*v5[6] - v5[3]*links[5].inertia[1][2] + v5[2]*links[5].inertia[1][3]) + v5[2]*(-(links[5].mcm[1]*v5[5]) - v5[3]*links[5].inertia[2][2] + v5[2]*links[5].inertia[2][3]) + v5[3]*(-(links[5].mcm[1]*v5[6]) - v5[3]*links[5].inertia[2][3] + v5[2]*links[5].inertia[3][3]);
fnet5[5]=-(a5[6]*links[5].mcm[1]) + a5[4]*links[5].mcm[3] + (-(links[5].mcm[1]*v5[1]) - links[5].mcm[3]*v5[3])*v5[5] + (links[5].mcm[2]*v5[3] - links[5].m*v5[4])*v5[6] + v5[4]*(links[5].mcm[2]*v5[1] + links[5].m*v5[6]) + a5[1]*links[5].inertia[1][2] + v5[1]*(-(links[5].mcm[2]*v5[4]) + v5[3]*links[5].inertia[1][1] - v5[1]*links[5].inertia[1][3]) + a5[2]*links[5].inertia[2][2] + a5[3]*links[5].inertia[2][3] + v5[2]*(links[5].mcm[1]*v5[4] + links[5].mcm[3]*v5[6] + v5[3]*links[5].inertia[1][2] - v5[1]*links[5].inertia[2][3]) + v5[3]*(-(links[5].mcm[2]*v5[6]) + v5[3]*links[5].inertia[1][3] - v5[1]*links[5].inertia[3][3]);
fnet5[6]=a5[5]*links[5].mcm[1] - a5[4]*links[5].mcm[2] + (links[5].mcm[3]*v5[2] + links[5].m*v5[4])*v5[5] + v5[4]*(links[5].mcm[3]*v5[1] - links[5].m*v5[5]) + (-(links[5].mcm[1]*v5[1]) - links[5].mcm[2]*v5[2])*v5[6] + v5[1]*(-(links[5].mcm[3]*v5[4]) - v5[2]*links[5].inertia[1][1] + v5[1]*links[5].inertia[1][2]) + a5[1]*links[5].inertia[1][3] + v5[2]*(-(links[5].mcm[3]*v5[5]) - v5[2]*links[5].inertia[1][2] + v5[1]*links[5].inertia[2][2]) + a5[2]*links[5].inertia[2][3] + v5[3]*(links[5].mcm[1]*v5[4] + links[5].mcm[2]*v5[5] - v5[2]*links[5].inertia[1][3] + v5[1]*links[5].inertia[2][3]) + a5[3]*links[5].inertia[3][3];

fnet6[1]=links[6].m*a6[4] - a6[3]*links[6].mcm[2] + a6[2]*links[6].mcm[3] - links[6].mcm[1]*Power(v6[2],2) - links[6].mcm[1]*Power(v6[3],2) + v6[1]*(links[6].mcm[2]*v6[2] + links[6].mcm[3]*v6[3]) - links[6].m*v6[3]*v6[5] + links[6].m*v6[2]*v6[6];
fnet6[2]=links[6].m*a6[5] + a6[3]*links[6].mcm[1] - a6[1]*links[6].mcm[3] - links[6].mcm[2]*Power(v6[1],2) - links[6].mcm[2]*Power(v6[3],2) + v6[2]*(links[6].mcm[1]*v6[1] + links[6].mcm[3]*v6[3]) + links[6].m*v6[3]*v6[4] - links[6].m*v6[1]*v6[6];
fnet6[3]=links[6].m*a6[6] - a6[2]*links[6].mcm[1] + a6[1]*links[6].mcm[2] - links[6].mcm[3]*Power(v6[1],2) - links[6].mcm[3]*Power(v6[2],2) + (links[6].mcm[1]*v6[1] + links[6].mcm[2]*v6[2])*v6[3] - links[6].m*v6[2]*v6[4] + links[6].m*v6[1]*v6[5];
fnet6[4]=a6[6]*links[6].mcm[2] - a6[5]*links[6].mcm[3] + (-(links[6].mcm[2]*v6[2]) - links[6].mcm[3]*v6[3])*v6[4] + (links[6].mcm[1]*v6[3] + links[6].m*v6[5])*v6[6] + v6[5]*(links[6].mcm[1]*v6[2] - links[6].m*v6[6]) + a6[1]*links[6].inertia[1][1] + a6[2]*links[6].inertia[1][2] + a6[3]*links[6].inertia[1][3] + v6[1]*(links[6].mcm[2]*v6[5] + links[6].mcm[3]*v6[6] - v6[3]*links[6].inertia[1][2] + v6[2]*links[6].inertia[1][3]) + v6[2]*(-(links[6].mcm[1]*v6[5]) - v6[3]*links[6].inertia[2][2] + v6[2]*links[6].inertia[2][3]) + v6[3]*(-(links[6].mcm[1]*v6[6]) - v6[3]*links[6].inertia[2][3] + v6[2]*links[6].inertia[3][3]);
fnet6[5]=-(a6[6]*links[6].mcm[1]) + a6[4]*links[6].mcm[3] + (-(links[6].mcm[1]*v6[1]) - links[6].mcm[3]*v6[3])*v6[5] + (links[6].mcm[2]*v6[3] - links[6].m*v6[4])*v6[6] + v6[4]*(links[6].mcm[2]*v6[1] + links[6].m*v6[6]) + a6[1]*links[6].inertia[1][2] + v6[1]*(-(links[6].mcm[2]*v6[4]) + v6[3]*links[6].inertia[1][1] - v6[1]*links[6].inertia[1][3]) + a6[2]*links[6].inertia[2][2] + a6[3]*links[6].inertia[2][3] + v6[2]*(links[6].mcm[1]*v6[4] + links[6].mcm[3]*v6[6] + v6[3]*links[6].inertia[1][2] - v6[1]*links[6].inertia[2][3]) + v6[3]*(-(links[6].mcm[2]*v6[6]) + v6[3]*links[6].inertia[1][3] - v6[1]*links[6].inertia[3][3]);
fnet6[6]=a6[5]*links[6].mcm[1] - a6[4]*links[6].mcm[2] + (links[6].mcm[3]*v6[2] + links[6].m*v6[4])*v6[5] + v6[4]*(links[6].mcm[3]*v6[1] - links[6].m*v6[5]) + (-(links[6].mcm[1]*v6[1]) - links[6].mcm[2]*v6[2])*v6[6] + v6[1]*(-(links[6].mcm[3]*v6[4]) - v6[2]*links[6].inertia[1][1] + v6[1]*links[6].inertia[1][2]) + a6[1]*links[6].inertia[1][3] + v6[2]*(-(links[6].mcm[3]*v6[5]) - v6[2]*links[6].inertia[1][2] + v6[1]*links[6].inertia[2][2]) + a6[2]*links[6].inertia[2][3] + v6[3]*(links[6].mcm[1]*v6[4] + links[6].mcm[2]*v6[5] - v6[2]*links[6].inertia[1][3] + v6[1]*links[6].inertia[2][3]) + a6[3]*links[6].inertia[3][3];

fnet7[1]=links[7].m*a7[4] - a7[3]*links[7].mcm[2] + a7[2]*links[7].mcm[3] - links[7].mcm[1]*Power(v7[2],2) - links[7].mcm[1]*Power(v7[3],2) + v7[1]*(links[7].mcm[2]*v7[2] + links[7].mcm[3]*v7[3]) - links[7].m*v7[3]*v7[5] + links[7].m*v7[2]*v7[6];
fnet7[2]=links[7].m*a7[5] + a7[3]*links[7].mcm[1] - a7[1]*links[7].mcm[3] - links[7].mcm[2]*Power(v7[1],2) - links[7].mcm[2]*Power(v7[3],2) + v7[2]*(links[7].mcm[1]*v7[1] + links[7].mcm[3]*v7[3]) + links[7].m*v7[3]*v7[4] - links[7].m*v7[1]*v7[6];
fnet7[3]=links[7].m*a7[6] - a7[2]*links[7].mcm[1] + a7[1]*links[7].mcm[2] - links[7].mcm[3]*Power(v7[1],2) - links[7].mcm[3]*Power(v7[2],2) + (links[7].mcm[1]*v7[1] + links[7].mcm[2]*v7[2])*v7[3] - links[7].m*v7[2]*v7[4] + links[7].m*v7[1]*v7[5];
fnet7[4]=a7[6]*links[7].mcm[2] - a7[5]*links[7].mcm[3] + (-(links[7].mcm[2]*v7[2]) - links[7].mcm[3]*v7[3])*v7[4] + (links[7].mcm[1]*v7[3] + links[7].m*v7[5])*v7[6] + v7[5]*(links[7].mcm[1]*v7[2] - links[7].m*v7[6]) + a7[1]*links[7].inertia[1][1] + a7[2]*links[7].inertia[1][2] + a7[3]*links[7].inertia[1][3] + v7[1]*(links[7].mcm[2]*v7[5] + links[7].mcm[3]*v7[6] - v7[3]*links[7].inertia[1][2] + v7[2]*links[7].inertia[1][3]) + v7[2]*(-(links[7].mcm[1]*v7[5]) - v7[3]*links[7].inertia[2][2] + v7[2]*links[7].inertia[2][3]) + v7[3]*(-(links[7].mcm[1]*v7[6]) - v7[3]*links[7].inertia[2][3] + v7[2]*links[7].inertia[3][3]);
fnet7[5]=-(a7[6]*links[7].mcm[1]) + a7[4]*links[7].mcm[3] + (-(links[7].mcm[1]*v7[1]) - links[7].mcm[3]*v7[3])*v7[5] + (links[7].mcm[2]*v7[3] - links[7].m*v7[4])*v7[6] + v7[4]*(links[7].mcm[2]*v7[1] + links[7].m*v7[6]) + a7[1]*links[7].inertia[1][2] + v7[1]*(-(links[7].mcm[2]*v7[4]) + v7[3]*links[7].inertia[1][1] - v7[1]*links[7].inertia[1][3]) + a7[2]*links[7].inertia[2][2] + a7[3]*links[7].inertia[2][3] + v7[2]*(links[7].mcm[1]*v7[4] + links[7].mcm[3]*v7[6] + v7[3]*links[7].inertia[1][2] - v7[1]*links[7].inertia[2][3]) + v7[3]*(-(links[7].mcm[2]*v7[6]) + v7[3]*links[7].inertia[1][3] - v7[1]*links[7].inertia[3][3]);
fnet7[6]=a7[5]*links[7].mcm[1] - a7[4]*links[7].mcm[2] + (links[7].mcm[3]*v7[2] + links[7].m*v7[4])*v7[5] + v7[4]*(links[7].mcm[3]*v7[1] - links[7].m*v7[5]) + (-(links[7].mcm[1]*v7[1]) - links[7].mcm[2]*v7[2])*v7[6] + v7[1]*(-(links[7].mcm[3]*v7[4]) - v7[2]*links[7].inertia[1][1] + v7[1]*links[7].inertia[1][2]) + a7[1]*links[7].inertia[1][3] + v7[2]*(-(links[7].mcm[3]*v7[5]) - v7[2]*links[7].inertia[1][2] + v7[1]*links[7].inertia[2][2]) + a7[2]*links[7].inertia[2][3] + v7[3]*(links[7].mcm[1]*v7[4] + links[7].mcm[2]*v7[5] - v7[2]*links[7].inertia[1][3] + v7[1]*links[7].inertia[2][3]) + a7[3]*links[7].inertia[3][3];

fnet8[1]=eff[1].m*a8[4] - a8[3]*eff[1].mcm[2] + a8[2]*eff[1].mcm[3] - eff[1].mcm[1]*Power(v8[2],2) - eff[1].mcm[1]*Power(v8[3],2) + v8[1]*(eff[1].mcm[2]*v8[2] + eff[1].mcm[3]*v8[3]) - eff[1].m*v8[3]*v8[5] + eff[1].m*v8[2]*v8[6];
fnet8[2]=eff[1].m*a8[5] + a8[3]*eff[1].mcm[1] - a8[1]*eff[1].mcm[3] - eff[1].mcm[2]*Power(v8[1],2) - eff[1].mcm[2]*Power(v8[3],2) + v8[2]*(eff[1].mcm[1]*v8[1] + eff[1].mcm[3]*v8[3]) + eff[1].m*v8[3]*v8[4] - eff[1].m*v8[1]*v8[6];
fnet8[3]=eff[1].m*a8[6] - a8[2]*eff[1].mcm[1] + a8[1]*eff[1].mcm[2] - eff[1].mcm[3]*Power(v8[1],2) - eff[1].mcm[3]*Power(v8[2],2) + (eff[1].mcm[1]*v8[1] + eff[1].mcm[2]*v8[2])*v8[3] - eff[1].m*v8[2]*v8[4] + eff[1].m*v8[1]*v8[5];
fnet8[4]=a8[6]*eff[1].mcm[2] - a8[5]*eff[1].mcm[3] + (-(eff[1].mcm[2]*v8[2]) - eff[1].mcm[3]*v8[3])*v8[4] - eff[1].mcm[1]*v8[2]*v8[5] - eff[1].mcm[1]*v8[3]*v8[6] + (eff[1].mcm[1]*v8[3] + eff[1].m*v8[5])*v8[6] + v8[5]*(eff[1].mcm[1]*v8[2] - eff[1].m*v8[6]) + v8[1]*(eff[1].mcm[2]*v8[5] + eff[1].mcm[3]*v8[6]);
fnet8[5]=-(a8[6]*eff[1].mcm[1]) + a8[4]*eff[1].mcm[3] - eff[1].mcm[2]*v8[1]*v8[4] + (-(eff[1].mcm[1]*v8[1]) - eff[1].mcm[3]*v8[3])*v8[5] - eff[1].mcm[2]*v8[3]*v8[6] + (eff[1].mcm[2]*v8[3] - eff[1].m*v8[4])*v8[6] + v8[4]*(eff[1].mcm[2]*v8[1] + eff[1].m*v8[6]) + v8[2]*(eff[1].mcm[1]*v8[4] + eff[1].mcm[3]*v8[6]);
fnet8[6]=a8[5]*eff[1].mcm[1] - a8[4]*eff[1].mcm[2] - eff[1].mcm[3]*v8[1]*v8[4] - eff[1].mcm[3]*v8[2]*v8[5] + (eff[1].mcm[3]*v8[2] + eff[1].m*v8[4])*v8[5] + v8[4]*(eff[1].mcm[3]*v8[1] - eff[1].m*v8[5]) + v8[3]*(eff[1].mcm[1]*v8[4] + eff[1].mcm[2]*v8[5]) + (-(eff[1].mcm[1]*v8[1]) - eff[1].mcm[2]*v8[2])*v8[6];


fex1[1]=-(uex[1].f[1]*SG10[1][1]) - uex[1].f[2]*SG10[1][2] - uex[1].f[3]*SG10[1][3];
fex1[2]=-(uex[1].f[1]*SG10[2][1]) - uex[1].f[2]*SG10[2][2] - uex[1].f[3]*SG10[2][3];
fex1[3]=-(uex[1].f[1]*SG10[3][1]) - uex[1].f[2]*SG10[3][2] - uex[1].f[3]*SG10[3][3];
fex1[4]=-(uex[1].t[1]*SG10[1][1]) - uex[1].t[2]*SG10[1][2] - uex[1].t[3]*SG10[1][3];
fex1[5]=-(uex[1].t[1]*SG10[2][1]) - uex[1].t[2]*SG10[2][2] - uex[1].t[3]*SG10[2][3];
fex1[6]=-(uex[1].t[1]*SG10[3][1]) - uex[1].t[2]*SG10[3][2] - uex[1].t[3]*SG10[3][3];

fex2[1]=-(uex[2].f[1]*SG20[1][1]) - uex[2].f[2]*SG20[1][2] - uex[2].f[3]*SG20[1][3];
fex2[2]=-(uex[2].f[1]*SG20[2][1]) - uex[2].f[2]*SG20[2][2] - uex[2].f[3]*SG20[2][3];
fex2[3]=-(uex[2].f[1]*SG20[3][1]) - uex[2].f[2]*SG20[3][2] - uex[2].f[3]*SG20[3][3];
fex2[4]=-(uex[2].t[1]*SG20[1][1]) - uex[2].t[2]*SG20[1][2] - uex[2].t[3]*SG20[1][3];
fex2[5]=-(uex[2].t[1]*SG20[2][1]) - uex[2].t[2]*SG20[2][2] - uex[2].t[3]*SG20[2][3];
fex2[6]=-(uex[2].t[1]*SG20[3][1]) - uex[2].t[2]*SG20[3][2] - uex[2].t[3]*SG20[3][3];

fex3[1]=-(uex[3].f[1]*SG30[1][1]) - uex[3].f[2]*SG30[1][2] - uex[3].f[3]*SG30[1][3];
fex3[2]=-(uex[3].f[1]*SG30[2][1]) - uex[3].f[2]*SG30[2][2] - uex[3].f[3]*SG30[2][3];
fex3[3]=-(uex[3].f[1]*SG30[3][1]) - uex[3].f[2]*SG30[3][2] - uex[3].f[3]*SG30[3][3];
fex3[4]=-(uex[3].t[1]*SG30[1][1]) - uex[3].t[2]*SG30[1][2] - uex[3].t[3]*SG30[1][3];
fex3[5]=-(uex[3].t[1]*SG30[2][1]) - uex[3].t[2]*SG30[2][2] - uex[3].t[3]*SG30[2][3];
fex3[6]=-(uex[3].t[1]*SG30[3][1]) - uex[3].t[2]*SG30[3][2] - uex[3].t[3]*SG30[3][3];

fex4[1]=-(uex[4].f[1]*SG40[1][1]) - uex[4].f[2]*SG40[1][2] - uex[4].f[3]*SG40[1][3];
fex4[2]=-(uex[4].f[1]*SG40[2][1]) - uex[4].f[2]*SG40[2][2] - uex[4].f[3]*SG40[2][3];
fex4[3]=-(uex[4].f[1]*SG40[3][1]) - uex[4].f[2]*SG40[3][2] - uex[4].f[3]*SG40[3][3];
fex4[4]=-(uex[4].t[1]*SG40[1][1]) - uex[4].t[2]*SG40[1][2] - uex[4].t[3]*SG40[1][3];
fex4[5]=-(uex[4].t[1]*SG40[2][1]) - uex[4].t[2]*SG40[2][2] - uex[4].t[3]*SG40[2][3];
fex4[6]=-(uex[4].t[1]*SG40[3][1]) - uex[4].t[2]*SG40[3][2] - uex[4].t[3]*SG40[3][3];

fex5[1]=-(uex[5].f[1]*SG50[1][1]) - uex[5].f[2]*SG50[1][2] - uex[5].f[3]*SG50[1][3];
fex5[2]=-(uex[5].f[1]*SG50[2][1]) - uex[5].f[2]*SG50[2][2] - uex[5].f[3]*SG50[2][3];
fex5[3]=-(uex[5].f[1]*SG50[3][1]) - uex[5].f[2]*SG50[3][2] - uex[5].f[3]*SG50[3][3];
fex5[4]=-(uex[5].t[1]*SG50[1][1]) - uex[5].t[2]*SG50[1][2] - uex[5].t[3]*SG50[1][3];
fex5[5]=-(uex[5].t[1]*SG50[2][1]) - uex[5].t[2]*SG50[2][2] - uex[5].t[3]*SG50[2][3];
fex5[6]=-(uex[5].t[1]*SG50[3][1]) - uex[5].t[2]*SG50[3][2] - uex[5].t[3]*SG50[3][3];

fex6[1]=-(uex[6].f[1]*SG60[1][1]) - uex[6].f[2]*SG60[1][2] - uex[6].f[3]*SG60[1][3];
fex6[2]=-(uex[6].f[1]*SG60[2][1]) - uex[6].f[2]*SG60[2][2] - uex[6].f[3]*SG60[2][3];
fex6[3]=-(uex[6].f[1]*SG60[3][1]) - uex[6].f[2]*SG60[3][2] - uex[6].f[3]*SG60[3][3];
fex6[4]=-(uex[6].t[1]*SG60[1][1]) - uex[6].t[2]*SG60[1][2] - uex[6].t[3]*SG60[1][3];
fex6[5]=-(uex[6].t[1]*SG60[2][1]) - uex[6].t[2]*SG60[2][2] - uex[6].t[3]*SG60[2][3];
fex6[6]=-(uex[6].t[1]*SG60[3][1]) - uex[6].t[2]*SG60[3][2] - uex[6].t[3]*SG60[3][3];

fex7[1]=-(uex[7].f[1]*SG70[1][1]) - uex[7].f[2]*SG70[1][2] - uex[7].f[3]*SG70[1][3];
fex7[2]=-(uex[7].f[1]*SG70[2][1]) - uex[7].f[2]*SG70[2][2] - uex[7].f[3]*SG70[2][3];
fex7[3]=-(uex[7].f[1]*SG70[3][1]) - uex[7].f[2]*SG70[3][2] - uex[7].f[3]*SG70[3][3];
fex7[4]=-(uex[7].t[1]*SG70[1][1]) - uex[7].t[2]*SG70[1][2] - uex[7].t[3]*SG70[1][3];
fex7[5]=-(uex[7].t[1]*SG70[2][1]) - uex[7].t[2]*SG70[2][2] - uex[7].t[3]*SG70[2][3];
fex7[6]=-(uex[7].t[1]*SG70[3][1]) - uex[7].t[2]*SG70[3][2] - uex[7].t[3]*SG70[3][3];



}


void
lbr4_ForDynCompfunc7(void)
     {
/* total forces and external forces for each joint */
f8[1]=fnet8[1];
f8[2]=fnet8[2];
f8[3]=fnet8[3];
f8[4]=fnet8[4];
f8[5]=fnet8[5];
f8[6]=fnet8[6];

f7[1]=fnet7[1] + f8[1]*Si78[1][1] + f8[2]*Si78[1][2] + f8[3]*Si78[1][3];
f7[2]=fnet7[2] + f8[1]*Si78[2][1] + f8[2]*Si78[2][2] + f8[3]*Si78[2][3];
f7[3]=fnet7[3] + f8[1]*Si78[3][1] + f8[2]*Si78[3][2] + f8[3]*Si78[3][3];
f7[4]=fnet7[4] + f8[4]*Si78[1][1] + f8[5]*Si78[1][2] + f8[6]*Si78[1][3] + f8[1]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + f8[2]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + f8[3]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3]);
f7[5]=fnet7[5] + f8[4]*Si78[2][1] + f8[5]*Si78[2][2] + f8[6]*Si78[2][3] + f8[1]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + f8[2]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + f8[3]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3]);
f7[6]=fnet7[6] + f8[1]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + f8[2]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + f8[3]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + f8[4]*Si78[3][1] + f8[5]*Si78[3][2] + f8[6]*Si78[3][3];

f6[1]=-f7[3] + fnet6[1];
f6[2]=fnet6[2] + f7[1]*Si67[2][1] + f7[2]*Si67[2][2];
f6[3]=fnet6[3] + f7[1]*Si67[3][1] + f7[2]*Si67[3][2];
f6[4]=-f7[6] + fnet6[4];
f6[5]=fnet6[5] + f7[4]*Si67[2][1] + f7[5]*Si67[2][2] + A5A6*f7[1]*Si67[3][1] + A5A6*f7[2]*Si67[3][2];
f6[6]=fnet6[6] - A5A6*f7[1]*Si67[2][1] - A5A6*f7[2]*Si67[2][2] + f7[4]*Si67[3][1] + f7[5]*Si67[3][2];

f5[1]=f6[3] + fnet5[1];
f5[2]=fnet5[2] + f6[1]*Si56[2][1] + f6[2]*Si56[2][2];
f5[3]=fnet5[3] + f6[1]*Si56[3][1] + f6[2]*Si56[3][2];
f5[4]=f6[6] + fnet5[4] - A4A5*f6[1]*Si56[2][1] - A4A5*f6[2]*Si56[2][2];
f5[5]=A4A5*f6[3] + fnet5[5] + f6[4]*Si56[2][1] + f6[5]*Si56[2][2];
f5[6]=fnet5[6] + f6[4]*Si56[3][1] + f6[5]*Si56[3][2];

f4[1]=f5[3] + fnet4[1];
f4[2]=fnet4[2] + f5[1]*Si45[2][1] + f5[2]*Si45[2][2];
f4[3]=fnet4[3] + f5[1]*Si45[3][1] + f5[2]*Si45[3][2];
f4[4]=f5[6] + fnet4[4];
f4[5]=fnet4[5] + f5[4]*Si45[2][1] + f5[5]*Si45[2][2] - A3A4*f5[1]*Si45[3][1] - A3A4*f5[2]*Si45[3][2];
f4[6]=fnet4[6] + A3A4*f5[1]*Si45[2][1] + A3A4*f5[2]*Si45[2][2] + f5[4]*Si45[3][1] + f5[5]*Si45[3][2];

f3[1]=-f4[3] + fnet3[1];
f3[2]=fnet3[2] + f4[1]*Si34[2][1] + f4[2]*Si34[2][2];
f3[3]=fnet3[3] + f4[1]*Si34[3][1] + f4[2]*Si34[3][2];
f3[4]=-f4[6] + fnet3[4] - E1A3*f4[1]*Si34[2][1] - E1A3*f4[2]*Si34[2][2];
f3[5]=-(E1A3*f4[3]) + fnet3[5] + f4[4]*Si34[2][1] + f4[5]*Si34[2][2];
f3[6]=fnet3[6] + f4[4]*Si34[3][1] + f4[5]*Si34[3][2];

f2[1]=-f3[3] + fnet2[1];
f2[2]=fnet2[2] + f3[1]*Si23[2][1] + f3[2]*Si23[2][2];
f2[3]=fnet2[3] + f3[1]*Si23[3][1] + f3[2]*Si23[3][2];
f2[4]=-f3[6] + fnet2[4];
f2[5]=fnet2[5] + f3[4]*Si23[2][1] + f3[5]*Si23[2][2] + A2E1*f3[1]*Si23[3][1] + A2E1*f3[2]*Si23[3][2];
f2[6]=fnet2[6] - A2E1*f3[1]*Si23[2][1] - A2E1*f3[2]*Si23[2][2] + f3[4]*Si23[3][1] + f3[5]*Si23[3][2];

f1[1]=f2[3] + fnet1[1];
f1[2]=fnet1[2] + f2[1]*Si12[2][1] + f2[2]*Si12[2][2];
f1[3]=fnet1[3] + f2[1]*Si12[3][1] + f2[2]*Si12[3][2];
f1[4]=f2[6] + fnet1[4] - A1A2*f2[1]*Si12[2][1] - A1A2*f2[2]*Si12[2][2];
f1[5]=A1A2*f2[3] + fnet1[5] + f2[4]*Si12[2][1] + f2[5]*Si12[2][2];
f1[6]=fnet1[6] + f2[4]*Si12[3][1] + f2[5]*Si12[3][2];

f0[1]=fnet0[1] + f1[1]*Si01[1][1] + f1[2]*Si01[1][2];
f0[2]=fnet0[2] + f1[1]*Si01[2][1] + f1[2]*Si01[2][2];
f0[3]=f1[3] + fnet0[3];
f0[4]=fnet0[4] + f1[4]*Si01[1][1] + f1[5]*Si01[1][2] - BA1*f1[1]*Si01[2][1] - BA1*f1[2]*Si01[2][2];
f0[5]=fnet0[5] + BA1*f1[1]*Si01[1][1] + BA1*f1[2]*Si01[1][2] + f1[4]*Si01[2][1] + f1[5]*Si01[2][2];
f0[6]=f1[6] + fnet0[6];


fext7[1]=fex7[1];
fext7[2]=fex7[2];
fext7[3]=fex7[3];
fext7[4]=fex7[4];
fext7[5]=fex7[5];
fext7[6]=fex7[6];

fext6[1]=fex6[1] - fext7[3];
fext6[2]=fex6[2] + fext7[1]*Si67[2][1] + fext7[2]*Si67[2][2];
fext6[3]=fex6[3] + fext7[1]*Si67[3][1] + fext7[2]*Si67[3][2];
fext6[4]=fex6[4] - fext7[6];
fext6[5]=fex6[5] + fext7[4]*Si67[2][1] + fext7[5]*Si67[2][2] + A5A6*fext7[1]*Si67[3][1] + A5A6*fext7[2]*Si67[3][2];
fext6[6]=fex6[6] - A5A6*fext7[1]*Si67[2][1] - A5A6*fext7[2]*Si67[2][2] + fext7[4]*Si67[3][1] + fext7[5]*Si67[3][2];

fext5[1]=fex5[1] + fext6[3];
fext5[2]=fex5[2] + fext6[1]*Si56[2][1] + fext6[2]*Si56[2][2];
fext5[3]=fex5[3] + fext6[1]*Si56[3][1] + fext6[2]*Si56[3][2];
fext5[4]=fex5[4] + fext6[6] - A4A5*fext6[1]*Si56[2][1] - A4A5*fext6[2]*Si56[2][2];
fext5[5]=fex5[5] + A4A5*fext6[3] + fext6[4]*Si56[2][1] + fext6[5]*Si56[2][2];
fext5[6]=fex5[6] + fext6[4]*Si56[3][1] + fext6[5]*Si56[3][2];

fext4[1]=fex4[1] + fext5[3];
fext4[2]=fex4[2] + fext5[1]*Si45[2][1] + fext5[2]*Si45[2][2];
fext4[3]=fex4[3] + fext5[1]*Si45[3][1] + fext5[2]*Si45[3][2];
fext4[4]=fex4[4] + fext5[6];
fext4[5]=fex4[5] + fext5[4]*Si45[2][1] + fext5[5]*Si45[2][2] - A3A4*fext5[1]*Si45[3][1] - A3A4*fext5[2]*Si45[3][2];
fext4[6]=fex4[6] + A3A4*fext5[1]*Si45[2][1] + A3A4*fext5[2]*Si45[2][2] + fext5[4]*Si45[3][1] + fext5[5]*Si45[3][2];

fext3[1]=fex3[1] - fext4[3];
fext3[2]=fex3[2] + fext4[1]*Si34[2][1] + fext4[2]*Si34[2][2];
fext3[3]=fex3[3] + fext4[1]*Si34[3][1] + fext4[2]*Si34[3][2];
fext3[4]=fex3[4] - fext4[6] - E1A3*fext4[1]*Si34[2][1] - E1A3*fext4[2]*Si34[2][2];
fext3[5]=fex3[5] - E1A3*fext4[3] + fext4[4]*Si34[2][1] + fext4[5]*Si34[2][2];
fext3[6]=fex3[6] + fext4[4]*Si34[3][1] + fext4[5]*Si34[3][2];

fext2[1]=fex2[1] - fext3[3];
fext2[2]=fex2[2] + fext3[1]*Si23[2][1] + fext3[2]*Si23[2][2];
fext2[3]=fex2[3] + fext3[1]*Si23[3][1] + fext3[2]*Si23[3][2];
fext2[4]=fex2[4] - fext3[6];
fext2[5]=fex2[5] + fext3[4]*Si23[2][1] + fext3[5]*Si23[2][2] + A2E1*fext3[1]*Si23[3][1] + A2E1*fext3[2]*Si23[3][2];
fext2[6]=fex2[6] - A2E1*fext3[1]*Si23[2][1] - A2E1*fext3[2]*Si23[2][2] + fext3[4]*Si23[3][1] + fext3[5]*Si23[3][2];

fext1[1]=fex1[1] + fext2[3];
fext1[2]=fex1[2] + fext2[1]*Si12[2][1] + fext2[2]*Si12[2][2];
fext1[3]=fex1[3] + fext2[1]*Si12[3][1] + fext2[2]*Si12[3][2];
fext1[4]=fex1[4] + fext2[6] - A1A2*fext2[1]*Si12[2][1] - A1A2*fext2[2]*Si12[2][2];
fext1[5]=fex1[5] + A1A2*fext2[3] + fext2[4]*Si12[2][1] + fext2[5]*Si12[2][2];
fext1[6]=fex1[6] + fext2[4]*Si12[3][1] + fext2[5]*Si12[3][2];

fext0[1]=fext1[1]*Si01[1][1] + fext1[2]*Si01[1][2];
fext0[2]=fext1[1]*Si01[2][1] + fext1[2]*Si01[2][2];
fext0[3]=fext1[3];
fext0[4]=fext1[4]*Si01[1][1] + fext1[5]*Si01[1][2] - BA1*fext1[1]*Si01[2][1] - BA1*fext1[2]*Si01[2][2];
fext0[5]=BA1*fext1[1]*Si01[1][1] + BA1*fext1[2]*Si01[1][2] + fext1[4]*Si01[2][1] + fext1[5]*Si01[2][2];
fext0[6]=fext1[6];



}


void
lbr4func11(void)
      {
/* composite inertia matrices */
Jc8[1][1]=0;
Jc8[1][2]=eff[1].mcm[3];
Jc8[1][3]=-eff[1].mcm[2];
Jc8[1][4]=eff[1].m;
Jc8[1][5]=0;
Jc8[1][6]=0;

Jc8[2][1]=-eff[1].mcm[3];
Jc8[2][2]=0;
Jc8[2][3]=eff[1].mcm[1];
Jc8[2][4]=0;
Jc8[2][5]=eff[1].m;
Jc8[2][6]=0;

Jc8[3][1]=eff[1].mcm[2];
Jc8[3][2]=-eff[1].mcm[1];
Jc8[3][3]=0;
Jc8[3][4]=0;
Jc8[3][5]=0;
Jc8[3][6]=eff[1].m;

Jc8[4][1]=0;
Jc8[4][2]=0;
Jc8[4][3]=0;
Jc8[4][4]=0;
Jc8[4][5]=-eff[1].mcm[3];
Jc8[4][6]=eff[1].mcm[2];

Jc8[5][1]=0;
Jc8[5][2]=0;
Jc8[5][3]=0;
Jc8[5][4]=eff[1].mcm[3];
Jc8[5][5]=0;
Jc8[5][6]=-eff[1].mcm[1];

Jc8[6][1]=0;
Jc8[6][2]=0;
Jc8[6][3]=0;
Jc8[6][4]=-eff[1].mcm[2];
Jc8[6][5]=eff[1].mcm[1];
Jc8[6][6]=0;



}


void
lbr4func12(void)
      {
/* composite inertia matrices */
Jc7[1][1]=S87[1][1]*(Jc8[1][1]*Si78[1][1] + Jc8[2][1]*Si78[1][2] + Jc8[3][1]*Si78[1][3]) + S87[2][1]*(Jc8[1][2]*Si78[1][1] + Jc8[2][2]*Si78[1][2] + Jc8[3][2]*Si78[1][3]) + S87[3][1]*(Jc8[1][3]*Si78[1][1] + Jc8[2][3]*Si78[1][2] + Jc8[3][3]*Si78[1][3]) + (-(eff[1].x[3]*S87[1][2]) + eff[1].x[2]*S87[1][3])*(Jc8[1][4]*Si78[1][1] + Jc8[2][4]*Si78[1][2] + Jc8[3][4]*Si78[1][3]) + (-(eff[1].x[3]*S87[2][2]) + eff[1].x[2]*S87[2][3])*(Jc8[1][5]*Si78[1][1] + Jc8[2][5]*Si78[1][2] + Jc8[3][5]*Si78[1][3]) + (-(eff[1].x[3]*S87[3][2]) + eff[1].x[2]*S87[3][3])*(Jc8[1][6]*Si78[1][1] + Jc8[2][6]*Si78[1][2] + Jc8[3][6]*Si78[1][3]);
Jc7[1][2]=links[7].mcm[3] + S87[1][2]*(Jc8[1][1]*Si78[1][1] + Jc8[2][1]*Si78[1][2] + Jc8[3][1]*Si78[1][3]) + S87[2][2]*(Jc8[1][2]*Si78[1][1] + Jc8[2][2]*Si78[1][2] + Jc8[3][2]*Si78[1][3]) + S87[3][2]*(Jc8[1][3]*Si78[1][1] + Jc8[2][3]*Si78[1][2] + Jc8[3][3]*Si78[1][3]) + (eff[1].x[3]*S87[1][1] - eff[1].x[1]*S87[1][3])*(Jc8[1][4]*Si78[1][1] + Jc8[2][4]*Si78[1][2] + Jc8[3][4]*Si78[1][3]) + (eff[1].x[3]*S87[2][1] - eff[1].x[1]*S87[2][3])*(Jc8[1][5]*Si78[1][1] + Jc8[2][5]*Si78[1][2] + Jc8[3][5]*Si78[1][3]) + (eff[1].x[3]*S87[3][1] - eff[1].x[1]*S87[3][3])*(Jc8[1][6]*Si78[1][1] + Jc8[2][6]*Si78[1][2] + Jc8[3][6]*Si78[1][3]);
Jc7[1][3]=-links[7].mcm[2] + S87[1][3]*(Jc8[1][1]*Si78[1][1] + Jc8[2][1]*Si78[1][2] + Jc8[3][1]*Si78[1][3]) + S87[2][3]*(Jc8[1][2]*Si78[1][1] + Jc8[2][2]*Si78[1][2] + Jc8[3][2]*Si78[1][3]) + S87[3][3]*(Jc8[1][3]*Si78[1][1] + Jc8[2][3]*Si78[1][2] + Jc8[3][3]*Si78[1][3]) + (-(eff[1].x[2]*S87[1][1]) + eff[1].x[1]*S87[1][2])*(Jc8[1][4]*Si78[1][1] + Jc8[2][4]*Si78[1][2] + Jc8[3][4]*Si78[1][3]) + (-(eff[1].x[2]*S87[2][1]) + eff[1].x[1]*S87[2][2])*(Jc8[1][5]*Si78[1][1] + Jc8[2][5]*Si78[1][2] + Jc8[3][5]*Si78[1][3]) + (-(eff[1].x[2]*S87[3][1]) + eff[1].x[1]*S87[3][2])*(Jc8[1][6]*Si78[1][1] + Jc8[2][6]*Si78[1][2] + Jc8[3][6]*Si78[1][3]);
Jc7[1][4]=links[7].m + S87[1][1]*(Jc8[1][4]*Si78[1][1] + Jc8[2][4]*Si78[1][2] + Jc8[3][4]*Si78[1][3]) + S87[2][1]*(Jc8[1][5]*Si78[1][1] + Jc8[2][5]*Si78[1][2] + Jc8[3][5]*Si78[1][3]) + S87[3][1]*(Jc8[1][6]*Si78[1][1] + Jc8[2][6]*Si78[1][2] + Jc8[3][6]*Si78[1][3]);
Jc7[1][5]=S87[1][2]*(Jc8[1][4]*Si78[1][1] + Jc8[2][4]*Si78[1][2] + Jc8[3][4]*Si78[1][3]) + S87[2][2]*(Jc8[1][5]*Si78[1][1] + Jc8[2][5]*Si78[1][2] + Jc8[3][5]*Si78[1][3]) + S87[3][2]*(Jc8[1][6]*Si78[1][1] + Jc8[2][6]*Si78[1][2] + Jc8[3][6]*Si78[1][3]);
Jc7[1][6]=S87[1][3]*(Jc8[1][4]*Si78[1][1] + Jc8[2][4]*Si78[1][2] + Jc8[3][4]*Si78[1][3]) + S87[2][3]*(Jc8[1][5]*Si78[1][1] + Jc8[2][5]*Si78[1][2] + Jc8[3][5]*Si78[1][3]) + S87[3][3]*(Jc8[1][6]*Si78[1][1] + Jc8[2][6]*Si78[1][2] + Jc8[3][6]*Si78[1][3]);

Jc7[2][1]=-links[7].mcm[3] + S87[1][1]*(Jc8[1][1]*Si78[2][1] + Jc8[2][1]*Si78[2][2] + Jc8[3][1]*Si78[2][3]) + S87[2][1]*(Jc8[1][2]*Si78[2][1] + Jc8[2][2]*Si78[2][2] + Jc8[3][2]*Si78[2][3]) + S87[3][1]*(Jc8[1][3]*Si78[2][1] + Jc8[2][3]*Si78[2][2] + Jc8[3][3]*Si78[2][3]) + (-(eff[1].x[3]*S87[1][2]) + eff[1].x[2]*S87[1][3])*(Jc8[1][4]*Si78[2][1] + Jc8[2][4]*Si78[2][2] + Jc8[3][4]*Si78[2][3]) + (-(eff[1].x[3]*S87[2][2]) + eff[1].x[2]*S87[2][3])*(Jc8[1][5]*Si78[2][1] + Jc8[2][5]*Si78[2][2] + Jc8[3][5]*Si78[2][3]) + (-(eff[1].x[3]*S87[3][2]) + eff[1].x[2]*S87[3][3])*(Jc8[1][6]*Si78[2][1] + Jc8[2][6]*Si78[2][2] + Jc8[3][6]*Si78[2][3]);
Jc7[2][2]=S87[1][2]*(Jc8[1][1]*Si78[2][1] + Jc8[2][1]*Si78[2][2] + Jc8[3][1]*Si78[2][3]) + S87[2][2]*(Jc8[1][2]*Si78[2][1] + Jc8[2][2]*Si78[2][2] + Jc8[3][2]*Si78[2][3]) + S87[3][2]*(Jc8[1][3]*Si78[2][1] + Jc8[2][3]*Si78[2][2] + Jc8[3][3]*Si78[2][3]) + (eff[1].x[3]*S87[1][1] - eff[1].x[1]*S87[1][3])*(Jc8[1][4]*Si78[2][1] + Jc8[2][4]*Si78[2][2] + Jc8[3][4]*Si78[2][3]) + (eff[1].x[3]*S87[2][1] - eff[1].x[1]*S87[2][3])*(Jc8[1][5]*Si78[2][1] + Jc8[2][5]*Si78[2][2] + Jc8[3][5]*Si78[2][3]) + (eff[1].x[3]*S87[3][1] - eff[1].x[1]*S87[3][3])*(Jc8[1][6]*Si78[2][1] + Jc8[2][6]*Si78[2][2] + Jc8[3][6]*Si78[2][3]);
Jc7[2][3]=links[7].mcm[1] + S87[1][3]*(Jc8[1][1]*Si78[2][1] + Jc8[2][1]*Si78[2][2] + Jc8[3][1]*Si78[2][3]) + S87[2][3]*(Jc8[1][2]*Si78[2][1] + Jc8[2][2]*Si78[2][2] + Jc8[3][2]*Si78[2][3]) + S87[3][3]*(Jc8[1][3]*Si78[2][1] + Jc8[2][3]*Si78[2][2] + Jc8[3][3]*Si78[2][3]) + (-(eff[1].x[2]*S87[1][1]) + eff[1].x[1]*S87[1][2])*(Jc8[1][4]*Si78[2][1] + Jc8[2][4]*Si78[2][2] + Jc8[3][4]*Si78[2][3]) + (-(eff[1].x[2]*S87[2][1]) + eff[1].x[1]*S87[2][2])*(Jc8[1][5]*Si78[2][1] + Jc8[2][5]*Si78[2][2] + Jc8[3][5]*Si78[2][3]) + (-(eff[1].x[2]*S87[3][1]) + eff[1].x[1]*S87[3][2])*(Jc8[1][6]*Si78[2][1] + Jc8[2][6]*Si78[2][2] + Jc8[3][6]*Si78[2][3]);
Jc7[2][4]=S87[1][1]*(Jc8[1][4]*Si78[2][1] + Jc8[2][4]*Si78[2][2] + Jc8[3][4]*Si78[2][3]) + S87[2][1]*(Jc8[1][5]*Si78[2][1] + Jc8[2][5]*Si78[2][2] + Jc8[3][5]*Si78[2][3]) + S87[3][1]*(Jc8[1][6]*Si78[2][1] + Jc8[2][6]*Si78[2][2] + Jc8[3][6]*Si78[2][3]);
Jc7[2][5]=links[7].m + S87[1][2]*(Jc8[1][4]*Si78[2][1] + Jc8[2][4]*Si78[2][2] + Jc8[3][4]*Si78[2][3]) + S87[2][2]*(Jc8[1][5]*Si78[2][1] + Jc8[2][5]*Si78[2][2] + Jc8[3][5]*Si78[2][3]) + S87[3][2]*(Jc8[1][6]*Si78[2][1] + Jc8[2][6]*Si78[2][2] + Jc8[3][6]*Si78[2][3]);
Jc7[2][6]=S87[1][3]*(Jc8[1][4]*Si78[2][1] + Jc8[2][4]*Si78[2][2] + Jc8[3][4]*Si78[2][3]) + S87[2][3]*(Jc8[1][5]*Si78[2][1] + Jc8[2][5]*Si78[2][2] + Jc8[3][5]*Si78[2][3]) + S87[3][3]*(Jc8[1][6]*Si78[2][1] + Jc8[2][6]*Si78[2][2] + Jc8[3][6]*Si78[2][3]);

Jc7[3][1]=links[7].mcm[2] + S87[1][1]*(Jc8[1][1]*Si78[3][1] + Jc8[2][1]*Si78[3][2] + Jc8[3][1]*Si78[3][3]) + S87[2][1]*(Jc8[1][2]*Si78[3][1] + Jc8[2][2]*Si78[3][2] + Jc8[3][2]*Si78[3][3]) + S87[3][1]*(Jc8[1][3]*Si78[3][1] + Jc8[2][3]*Si78[3][2] + Jc8[3][3]*Si78[3][3]) + (-(eff[1].x[3]*S87[1][2]) + eff[1].x[2]*S87[1][3])*(Jc8[1][4]*Si78[3][1] + Jc8[2][4]*Si78[3][2] + Jc8[3][4]*Si78[3][3]) + (-(eff[1].x[3]*S87[2][2]) + eff[1].x[2]*S87[2][3])*(Jc8[1][5]*Si78[3][1] + Jc8[2][5]*Si78[3][2] + Jc8[3][5]*Si78[3][3]) + (-(eff[1].x[3]*S87[3][2]) + eff[1].x[2]*S87[3][3])*(Jc8[1][6]*Si78[3][1] + Jc8[2][6]*Si78[3][2] + Jc8[3][6]*Si78[3][3]);
Jc7[3][2]=-links[7].mcm[1] + S87[1][2]*(Jc8[1][1]*Si78[3][1] + Jc8[2][1]*Si78[3][2] + Jc8[3][1]*Si78[3][3]) + S87[2][2]*(Jc8[1][2]*Si78[3][1] + Jc8[2][2]*Si78[3][2] + Jc8[3][2]*Si78[3][3]) + S87[3][2]*(Jc8[1][3]*Si78[3][1] + Jc8[2][3]*Si78[3][2] + Jc8[3][3]*Si78[3][3]) + (eff[1].x[3]*S87[1][1] - eff[1].x[1]*S87[1][3])*(Jc8[1][4]*Si78[3][1] + Jc8[2][4]*Si78[3][2] + Jc8[3][4]*Si78[3][3]) + (eff[1].x[3]*S87[2][1] - eff[1].x[1]*S87[2][3])*(Jc8[1][5]*Si78[3][1] + Jc8[2][5]*Si78[3][2] + Jc8[3][5]*Si78[3][3]) + (eff[1].x[3]*S87[3][1] - eff[1].x[1]*S87[3][3])*(Jc8[1][6]*Si78[3][1] + Jc8[2][6]*Si78[3][2] + Jc8[3][6]*Si78[3][3]);
Jc7[3][3]=S87[1][3]*(Jc8[1][1]*Si78[3][1] + Jc8[2][1]*Si78[3][2] + Jc8[3][1]*Si78[3][3]) + S87[2][3]*(Jc8[1][2]*Si78[3][1] + Jc8[2][2]*Si78[3][2] + Jc8[3][2]*Si78[3][3]) + S87[3][3]*(Jc8[1][3]*Si78[3][1] + Jc8[2][3]*Si78[3][2] + Jc8[3][3]*Si78[3][3]) + (-(eff[1].x[2]*S87[1][1]) + eff[1].x[1]*S87[1][2])*(Jc8[1][4]*Si78[3][1] + Jc8[2][4]*Si78[3][2] + Jc8[3][4]*Si78[3][3]) + (-(eff[1].x[2]*S87[2][1]) + eff[1].x[1]*S87[2][2])*(Jc8[1][5]*Si78[3][1] + Jc8[2][5]*Si78[3][2] + Jc8[3][5]*Si78[3][3]) + (-(eff[1].x[2]*S87[3][1]) + eff[1].x[1]*S87[3][2])*(Jc8[1][6]*Si78[3][1] + Jc8[2][6]*Si78[3][2] + Jc8[3][6]*Si78[3][3]);
Jc7[3][4]=S87[1][1]*(Jc8[1][4]*Si78[3][1] + Jc8[2][4]*Si78[3][2] + Jc8[3][4]*Si78[3][3]) + S87[2][1]*(Jc8[1][5]*Si78[3][1] + Jc8[2][5]*Si78[3][2] + Jc8[3][5]*Si78[3][3]) + S87[3][1]*(Jc8[1][6]*Si78[3][1] + Jc8[2][6]*Si78[3][2] + Jc8[3][6]*Si78[3][3]);
Jc7[3][5]=S87[1][2]*(Jc8[1][4]*Si78[3][1] + Jc8[2][4]*Si78[3][2] + Jc8[3][4]*Si78[3][3]) + S87[2][2]*(Jc8[1][5]*Si78[3][1] + Jc8[2][5]*Si78[3][2] + Jc8[3][5]*Si78[3][3]) + S87[3][2]*(Jc8[1][6]*Si78[3][1] + Jc8[2][6]*Si78[3][2] + Jc8[3][6]*Si78[3][3]);
Jc7[3][6]=links[7].m + S87[1][3]*(Jc8[1][4]*Si78[3][1] + Jc8[2][4]*Si78[3][2] + Jc8[3][4]*Si78[3][3]) + S87[2][3]*(Jc8[1][5]*Si78[3][1] + Jc8[2][5]*Si78[3][2] + Jc8[3][5]*Si78[3][3]) + S87[3][3]*(Jc8[1][6]*Si78[3][1] + Jc8[2][6]*Si78[3][2] + Jc8[3][6]*Si78[3][3]);

Jc7[4][1]=links[7].inertia[1][1] + S87[1][1]*(Jc8[4][1]*Si78[1][1] + Jc8[5][1]*Si78[1][2] + Jc8[6][1]*Si78[1][3] + Jc8[1][1]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][1]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][1]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + S87[2][1]*(Jc8[4][2]*Si78[1][1] + Jc8[5][2]*Si78[1][2] + Jc8[6][2]*Si78[1][3] + Jc8[1][2]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][2]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][2]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + S87[3][1]*(Jc8[4][3]*Si78[1][1] + Jc8[5][3]*Si78[1][2] + Jc8[6][3]*Si78[1][3] + Jc8[1][3]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][3]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][3]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + (-(eff[1].x[3]*S87[1][2]) + eff[1].x[2]*S87[1][3])*(Jc8[4][4]*Si78[1][1] + Jc8[5][4]*Si78[1][2] + Jc8[6][4]*Si78[1][3] + Jc8[1][4]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][4]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][4]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + (-(eff[1].x[3]*S87[2][2]) + eff[1].x[2]*S87[2][3])*(Jc8[4][5]*Si78[1][1] + Jc8[5][5]*Si78[1][2] + Jc8[6][5]*Si78[1][3] + Jc8[1][5]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][5]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][5]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + (-(eff[1].x[3]*S87[3][2]) + eff[1].x[2]*S87[3][3])*(Jc8[4][6]*Si78[1][1] + Jc8[5][6]*Si78[1][2] + Jc8[6][6]*Si78[1][3] + Jc8[1][6]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][6]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][6]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3]));
Jc7[4][2]=links[7].inertia[1][2] + S87[1][2]*(Jc8[4][1]*Si78[1][1] + Jc8[5][1]*Si78[1][2] + Jc8[6][1]*Si78[1][3] + Jc8[1][1]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][1]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][1]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + S87[2][2]*(Jc8[4][2]*Si78[1][1] + Jc8[5][2]*Si78[1][2] + Jc8[6][2]*Si78[1][3] + Jc8[1][2]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][2]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][2]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + S87[3][2]*(Jc8[4][3]*Si78[1][1] + Jc8[5][3]*Si78[1][2] + Jc8[6][3]*Si78[1][3] + Jc8[1][3]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][3]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][3]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + (eff[1].x[3]*S87[1][1] - eff[1].x[1]*S87[1][3])*(Jc8[4][4]*Si78[1][1] + Jc8[5][4]*Si78[1][2] + Jc8[6][4]*Si78[1][3] + Jc8[1][4]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][4]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][4]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + (eff[1].x[3]*S87[2][1] - eff[1].x[1]*S87[2][3])*(Jc8[4][5]*Si78[1][1] + Jc8[5][5]*Si78[1][2] + Jc8[6][5]*Si78[1][3] + Jc8[1][5]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][5]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][5]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + (eff[1].x[3]*S87[3][1] - eff[1].x[1]*S87[3][3])*(Jc8[4][6]*Si78[1][1] + Jc8[5][6]*Si78[1][2] + Jc8[6][6]*Si78[1][3] + Jc8[1][6]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][6]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][6]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3]));
Jc7[4][3]=links[7].inertia[1][3] + S87[1][3]*(Jc8[4][1]*Si78[1][1] + Jc8[5][1]*Si78[1][2] + Jc8[6][1]*Si78[1][3] + Jc8[1][1]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][1]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][1]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + S87[2][3]*(Jc8[4][2]*Si78[1][1] + Jc8[5][2]*Si78[1][2] + Jc8[6][2]*Si78[1][3] + Jc8[1][2]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][2]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][2]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + S87[3][3]*(Jc8[4][3]*Si78[1][1] + Jc8[5][3]*Si78[1][2] + Jc8[6][3]*Si78[1][3] + Jc8[1][3]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][3]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][3]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + (-(eff[1].x[2]*S87[1][1]) + eff[1].x[1]*S87[1][2])*(Jc8[4][4]*Si78[1][1] + Jc8[5][4]*Si78[1][2] + Jc8[6][4]*Si78[1][3] + Jc8[1][4]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][4]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][4]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + (-(eff[1].x[2]*S87[2][1]) + eff[1].x[1]*S87[2][2])*(Jc8[4][5]*Si78[1][1] + Jc8[5][5]*Si78[1][2] + Jc8[6][5]*Si78[1][3] + Jc8[1][5]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][5]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][5]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + (-(eff[1].x[2]*S87[3][1]) + eff[1].x[1]*S87[3][2])*(Jc8[4][6]*Si78[1][1] + Jc8[5][6]*Si78[1][2] + Jc8[6][6]*Si78[1][3] + Jc8[1][6]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][6]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][6]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3]));
Jc7[4][4]=S87[1][1]*(Jc8[4][4]*Si78[1][1] + Jc8[5][4]*Si78[1][2] + Jc8[6][4]*Si78[1][3] + Jc8[1][4]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][4]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][4]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + S87[2][1]*(Jc8[4][5]*Si78[1][1] + Jc8[5][5]*Si78[1][2] + Jc8[6][5]*Si78[1][3] + Jc8[1][5]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][5]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][5]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + S87[3][1]*(Jc8[4][6]*Si78[1][1] + Jc8[5][6]*Si78[1][2] + Jc8[6][6]*Si78[1][3] + Jc8[1][6]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][6]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][6]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3]));
Jc7[4][5]=-links[7].mcm[3] + S87[1][2]*(Jc8[4][4]*Si78[1][1] + Jc8[5][4]*Si78[1][2] + Jc8[6][4]*Si78[1][3] + Jc8[1][4]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][4]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][4]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + S87[2][2]*(Jc8[4][5]*Si78[1][1] + Jc8[5][5]*Si78[1][2] + Jc8[6][5]*Si78[1][3] + Jc8[1][5]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][5]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][5]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + S87[3][2]*(Jc8[4][6]*Si78[1][1] + Jc8[5][6]*Si78[1][2] + Jc8[6][6]*Si78[1][3] + Jc8[1][6]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][6]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][6]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3]));
Jc7[4][6]=links[7].mcm[2] + S87[1][3]*(Jc8[4][4]*Si78[1][1] + Jc8[5][4]*Si78[1][2] + Jc8[6][4]*Si78[1][3] + Jc8[1][4]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][4]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][4]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + S87[2][3]*(Jc8[4][5]*Si78[1][1] + Jc8[5][5]*Si78[1][2] + Jc8[6][5]*Si78[1][3] + Jc8[1][5]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][5]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][5]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3])) + S87[3][3]*(Jc8[4][6]*Si78[1][1] + Jc8[5][6]*Si78[1][2] + Jc8[6][6]*Si78[1][3] + Jc8[1][6]*(-(eff[1].x[3]*Si78[2][1]) + eff[1].x[2]*Si78[3][1]) + Jc8[2][6]*(-(eff[1].x[3]*Si78[2][2]) + eff[1].x[2]*Si78[3][2]) + Jc8[3][6]*(-(eff[1].x[3]*Si78[2][3]) + eff[1].x[2]*Si78[3][3]));

Jc7[5][1]=links[7].inertia[1][2] + S87[1][1]*(Jc8[4][1]*Si78[2][1] + Jc8[5][1]*Si78[2][2] + Jc8[6][1]*Si78[2][3] + Jc8[1][1]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][1]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][1]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + S87[2][1]*(Jc8[4][2]*Si78[2][1] + Jc8[5][2]*Si78[2][2] + Jc8[6][2]*Si78[2][3] + Jc8[1][2]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][2]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][2]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + S87[3][1]*(Jc8[4][3]*Si78[2][1] + Jc8[5][3]*Si78[2][2] + Jc8[6][3]*Si78[2][3] + Jc8[1][3]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][3]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][3]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + (-(eff[1].x[3]*S87[1][2]) + eff[1].x[2]*S87[1][3])*(Jc8[4][4]*Si78[2][1] + Jc8[5][4]*Si78[2][2] + Jc8[6][4]*Si78[2][3] + Jc8[1][4]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][4]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][4]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + (-(eff[1].x[3]*S87[2][2]) + eff[1].x[2]*S87[2][3])*(Jc8[4][5]*Si78[2][1] + Jc8[5][5]*Si78[2][2] + Jc8[6][5]*Si78[2][3] + Jc8[1][5]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][5]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][5]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + (-(eff[1].x[3]*S87[3][2]) + eff[1].x[2]*S87[3][3])*(Jc8[4][6]*Si78[2][1] + Jc8[5][6]*Si78[2][2] + Jc8[6][6]*Si78[2][3] + Jc8[1][6]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][6]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][6]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3]));
Jc7[5][2]=links[7].inertia[2][2] + S87[1][2]*(Jc8[4][1]*Si78[2][1] + Jc8[5][1]*Si78[2][2] + Jc8[6][1]*Si78[2][3] + Jc8[1][1]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][1]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][1]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + S87[2][2]*(Jc8[4][2]*Si78[2][1] + Jc8[5][2]*Si78[2][2] + Jc8[6][2]*Si78[2][3] + Jc8[1][2]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][2]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][2]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + S87[3][2]*(Jc8[4][3]*Si78[2][1] + Jc8[5][3]*Si78[2][2] + Jc8[6][3]*Si78[2][3] + Jc8[1][3]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][3]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][3]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + (eff[1].x[3]*S87[1][1] - eff[1].x[1]*S87[1][3])*(Jc8[4][4]*Si78[2][1] + Jc8[5][4]*Si78[2][2] + Jc8[6][4]*Si78[2][3] + Jc8[1][4]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][4]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][4]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + (eff[1].x[3]*S87[2][1] - eff[1].x[1]*S87[2][3])*(Jc8[4][5]*Si78[2][1] + Jc8[5][5]*Si78[2][2] + Jc8[6][5]*Si78[2][3] + Jc8[1][5]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][5]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][5]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + (eff[1].x[3]*S87[3][1] - eff[1].x[1]*S87[3][3])*(Jc8[4][6]*Si78[2][1] + Jc8[5][6]*Si78[2][2] + Jc8[6][6]*Si78[2][3] + Jc8[1][6]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][6]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][6]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3]));
Jc7[5][3]=links[7].inertia[2][3] + S87[1][3]*(Jc8[4][1]*Si78[2][1] + Jc8[5][1]*Si78[2][2] + Jc8[6][1]*Si78[2][3] + Jc8[1][1]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][1]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][1]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + S87[2][3]*(Jc8[4][2]*Si78[2][1] + Jc8[5][2]*Si78[2][2] + Jc8[6][2]*Si78[2][3] + Jc8[1][2]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][2]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][2]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + S87[3][3]*(Jc8[4][3]*Si78[2][1] + Jc8[5][3]*Si78[2][2] + Jc8[6][3]*Si78[2][3] + Jc8[1][3]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][3]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][3]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + (-(eff[1].x[2]*S87[1][1]) + eff[1].x[1]*S87[1][2])*(Jc8[4][4]*Si78[2][1] + Jc8[5][4]*Si78[2][2] + Jc8[6][4]*Si78[2][3] + Jc8[1][4]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][4]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][4]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + (-(eff[1].x[2]*S87[2][1]) + eff[1].x[1]*S87[2][2])*(Jc8[4][5]*Si78[2][1] + Jc8[5][5]*Si78[2][2] + Jc8[6][5]*Si78[2][3] + Jc8[1][5]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][5]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][5]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + (-(eff[1].x[2]*S87[3][1]) + eff[1].x[1]*S87[3][2])*(Jc8[4][6]*Si78[2][1] + Jc8[5][6]*Si78[2][2] + Jc8[6][6]*Si78[2][3] + Jc8[1][6]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][6]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][6]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3]));
Jc7[5][4]=links[7].mcm[3] + S87[1][1]*(Jc8[4][4]*Si78[2][1] + Jc8[5][4]*Si78[2][2] + Jc8[6][4]*Si78[2][3] + Jc8[1][4]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][4]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][4]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + S87[2][1]*(Jc8[4][5]*Si78[2][1] + Jc8[5][5]*Si78[2][2] + Jc8[6][5]*Si78[2][3] + Jc8[1][5]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][5]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][5]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + S87[3][1]*(Jc8[4][6]*Si78[2][1] + Jc8[5][6]*Si78[2][2] + Jc8[6][6]*Si78[2][3] + Jc8[1][6]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][6]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][6]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3]));
Jc7[5][5]=S87[1][2]*(Jc8[4][4]*Si78[2][1] + Jc8[5][4]*Si78[2][2] + Jc8[6][4]*Si78[2][3] + Jc8[1][4]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][4]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][4]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + S87[2][2]*(Jc8[4][5]*Si78[2][1] + Jc8[5][5]*Si78[2][2] + Jc8[6][5]*Si78[2][3] + Jc8[1][5]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][5]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][5]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + S87[3][2]*(Jc8[4][6]*Si78[2][1] + Jc8[5][6]*Si78[2][2] + Jc8[6][6]*Si78[2][3] + Jc8[1][6]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][6]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][6]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3]));
Jc7[5][6]=-links[7].mcm[1] + S87[1][3]*(Jc8[4][4]*Si78[2][1] + Jc8[5][4]*Si78[2][2] + Jc8[6][4]*Si78[2][3] + Jc8[1][4]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][4]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][4]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + S87[2][3]*(Jc8[4][5]*Si78[2][1] + Jc8[5][5]*Si78[2][2] + Jc8[6][5]*Si78[2][3] + Jc8[1][5]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][5]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][5]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3])) + S87[3][3]*(Jc8[4][6]*Si78[2][1] + Jc8[5][6]*Si78[2][2] + Jc8[6][6]*Si78[2][3] + Jc8[1][6]*(eff[1].x[3]*Si78[1][1] - eff[1].x[1]*Si78[3][1]) + Jc8[2][6]*(eff[1].x[3]*Si78[1][2] - eff[1].x[1]*Si78[3][2]) + Jc8[3][6]*(eff[1].x[3]*Si78[1][3] - eff[1].x[1]*Si78[3][3]));

Jc7[6][1]=links[7].inertia[1][3] + S87[1][1]*(Jc8[1][1]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][1]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][1]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][1]*Si78[3][1] + Jc8[5][1]*Si78[3][2] + Jc8[6][1]*Si78[3][3]) + S87[2][1]*(Jc8[1][2]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][2]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][2]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][2]*Si78[3][1] + Jc8[5][2]*Si78[3][2] + Jc8[6][2]*Si78[3][3]) + S87[3][1]*(Jc8[1][3]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][3]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][3]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][3]*Si78[3][1] + Jc8[5][3]*Si78[3][2] + Jc8[6][3]*Si78[3][3]) + (-(eff[1].x[3]*S87[1][2]) + eff[1].x[2]*S87[1][3])*(Jc8[1][4]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][4]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][4]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][4]*Si78[3][1] + Jc8[5][4]*Si78[3][2] + Jc8[6][4]*Si78[3][3]) + (-(eff[1].x[3]*S87[2][2]) + eff[1].x[2]*S87[2][3])*(Jc8[1][5]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][5]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][5]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][5]*Si78[3][1] + Jc8[5][5]*Si78[3][2] + Jc8[6][5]*Si78[3][3]) + (-(eff[1].x[3]*S87[3][2]) + eff[1].x[2]*S87[3][3])*(Jc8[1][6]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][6]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][6]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][6]*Si78[3][1] + Jc8[5][6]*Si78[3][2] + Jc8[6][6]*Si78[3][3]);
Jc7[6][2]=links[7].inertia[2][3] + S87[1][2]*(Jc8[1][1]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][1]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][1]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][1]*Si78[3][1] + Jc8[5][1]*Si78[3][2] + Jc8[6][1]*Si78[3][3]) + S87[2][2]*(Jc8[1][2]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][2]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][2]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][2]*Si78[3][1] + Jc8[5][2]*Si78[3][2] + Jc8[6][2]*Si78[3][3]) + S87[3][2]*(Jc8[1][3]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][3]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][3]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][3]*Si78[3][1] + Jc8[5][3]*Si78[3][2] + Jc8[6][3]*Si78[3][3]) + (eff[1].x[3]*S87[1][1] - eff[1].x[1]*S87[1][3])*(Jc8[1][4]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][4]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][4]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][4]*Si78[3][1] + Jc8[5][4]*Si78[3][2] + Jc8[6][4]*Si78[3][3]) + (eff[1].x[3]*S87[2][1] - eff[1].x[1]*S87[2][3])*(Jc8[1][5]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][5]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][5]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][5]*Si78[3][1] + Jc8[5][5]*Si78[3][2] + Jc8[6][5]*Si78[3][3]) + (eff[1].x[3]*S87[3][1] - eff[1].x[1]*S87[3][3])*(Jc8[1][6]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][6]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][6]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][6]*Si78[3][1] + Jc8[5][6]*Si78[3][2] + Jc8[6][6]*Si78[3][3]);
Jc7[6][3]=links[7].inertia[3][3] + S87[1][3]*(Jc8[1][1]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][1]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][1]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][1]*Si78[3][1] + Jc8[5][1]*Si78[3][2] + Jc8[6][1]*Si78[3][3]) + S87[2][3]*(Jc8[1][2]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][2]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][2]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][2]*Si78[3][1] + Jc8[5][2]*Si78[3][2] + Jc8[6][2]*Si78[3][3]) + S87[3][3]*(Jc8[1][3]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][3]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][3]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][3]*Si78[3][1] + Jc8[5][3]*Si78[3][2] + Jc8[6][3]*Si78[3][3]) + (-(eff[1].x[2]*S87[1][1]) + eff[1].x[1]*S87[1][2])*(Jc8[1][4]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][4]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][4]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][4]*Si78[3][1] + Jc8[5][4]*Si78[3][2] + Jc8[6][4]*Si78[3][3]) + (-(eff[1].x[2]*S87[2][1]) + eff[1].x[1]*S87[2][2])*(Jc8[1][5]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][5]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][5]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][5]*Si78[3][1] + Jc8[5][5]*Si78[3][2] + Jc8[6][5]*Si78[3][3]) + (-(eff[1].x[2]*S87[3][1]) + eff[1].x[1]*S87[3][2])*(Jc8[1][6]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][6]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][6]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][6]*Si78[3][1] + Jc8[5][6]*Si78[3][2] + Jc8[6][6]*Si78[3][3]);
Jc7[6][4]=-links[7].mcm[2] + S87[1][1]*(Jc8[1][4]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][4]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][4]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][4]*Si78[3][1] + Jc8[5][4]*Si78[3][2] + Jc8[6][4]*Si78[3][3]) + S87[2][1]*(Jc8[1][5]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][5]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][5]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][5]*Si78[3][1] + Jc8[5][5]*Si78[3][2] + Jc8[6][5]*Si78[3][3]) + S87[3][1]*(Jc8[1][6]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][6]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][6]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][6]*Si78[3][1] + Jc8[5][6]*Si78[3][2] + Jc8[6][6]*Si78[3][3]);
Jc7[6][5]=links[7].mcm[1] + S87[1][2]*(Jc8[1][4]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][4]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][4]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][4]*Si78[3][1] + Jc8[5][4]*Si78[3][2] + Jc8[6][4]*Si78[3][3]) + S87[2][2]*(Jc8[1][5]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][5]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][5]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][5]*Si78[3][1] + Jc8[5][5]*Si78[3][2] + Jc8[6][5]*Si78[3][3]) + S87[3][2]*(Jc8[1][6]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][6]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][6]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][6]*Si78[3][1] + Jc8[5][6]*Si78[3][2] + Jc8[6][6]*Si78[3][3]);
Jc7[6][6]=S87[1][3]*(Jc8[1][4]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][4]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][4]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][4]*Si78[3][1] + Jc8[5][4]*Si78[3][2] + Jc8[6][4]*Si78[3][3]) + S87[2][3]*(Jc8[1][5]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][5]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][5]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][5]*Si78[3][1] + Jc8[5][5]*Si78[3][2] + Jc8[6][5]*Si78[3][3]) + S87[3][3]*(Jc8[1][6]*(-(eff[1].x[2]*Si78[1][1]) + eff[1].x[1]*Si78[2][1]) + Jc8[2][6]*(-(eff[1].x[2]*Si78[1][2]) + eff[1].x[1]*Si78[2][2]) + Jc8[3][6]*(-(eff[1].x[2]*Si78[1][3]) + eff[1].x[1]*Si78[2][3]) + Jc8[4][6]*Si78[3][1] + Jc8[5][6]*Si78[3][2] + Jc8[6][6]*Si78[3][3]);



}


void
lbr4func13(void)
      {
/* composite inertia matrices */
Jc6[1][1]=Jc7[3][3];
Jc6[1][2]=links[6].mcm[3] - Jc7[3][1]*S76[1][2] - A5A6*Jc7[3][4]*S76[1][3] - Jc7[3][2]*S76[2][2] - A5A6*Jc7[3][5]*S76[2][3];
Jc6[1][3]=-links[6].mcm[2] + A5A6*Jc7[3][4]*S76[1][2] - Jc7[3][1]*S76[1][3] + A5A6*Jc7[3][5]*S76[2][2] - Jc7[3][2]*S76[2][3];
Jc6[1][4]=links[6].m + Jc7[3][6];
Jc6[1][5]=-(Jc7[3][4]*S76[1][2]) - Jc7[3][5]*S76[2][2];
Jc6[1][6]=-(Jc7[3][4]*S76[1][3]) - Jc7[3][5]*S76[2][3];

Jc6[2][1]=-links[6].mcm[3] - Jc7[1][3]*Si67[2][1] - Jc7[2][3]*Si67[2][2];
Jc6[2][2]=S76[1][2]*(Jc7[1][1]*Si67[2][1] + Jc7[2][1]*Si67[2][2]) + S76[2][2]*(Jc7[1][2]*Si67[2][1] + Jc7[2][2]*Si67[2][2]) + A5A6*S76[1][3]*(Jc7[1][4]*Si67[2][1] + Jc7[2][4]*Si67[2][2]) + A5A6*S76[2][3]*(Jc7[1][5]*Si67[2][1] + Jc7[2][5]*Si67[2][2]);
Jc6[2][3]=links[6].mcm[1] + S76[1][3]*(Jc7[1][1]*Si67[2][1] + Jc7[2][1]*Si67[2][2]) + S76[2][3]*(Jc7[1][2]*Si67[2][1] + Jc7[2][2]*Si67[2][2]) - A5A6*S76[1][2]*(Jc7[1][4]*Si67[2][1] + Jc7[2][4]*Si67[2][2]) - A5A6*S76[2][2]*(Jc7[1][5]*Si67[2][1] + Jc7[2][5]*Si67[2][2]);
Jc6[2][4]=-(Jc7[1][6]*Si67[2][1]) - Jc7[2][6]*Si67[2][2];
Jc6[2][5]=links[6].m + S76[1][2]*(Jc7[1][4]*Si67[2][1] + Jc7[2][4]*Si67[2][2]) + S76[2][2]*(Jc7[1][5]*Si67[2][1] + Jc7[2][5]*Si67[2][2]);
Jc6[2][6]=S76[1][3]*(Jc7[1][4]*Si67[2][1] + Jc7[2][4]*Si67[2][2]) + S76[2][3]*(Jc7[1][5]*Si67[2][1] + Jc7[2][5]*Si67[2][2]);

Jc6[3][1]=links[6].mcm[2] - Jc7[1][3]*Si67[3][1] - Jc7[2][3]*Si67[3][2];
Jc6[3][2]=-links[6].mcm[1] + S76[1][2]*(Jc7[1][1]*Si67[3][1] + Jc7[2][1]*Si67[3][2]) + S76[2][2]*(Jc7[1][2]*Si67[3][1] + Jc7[2][2]*Si67[3][2]) + A5A6*S76[1][3]*(Jc7[1][4]*Si67[3][1] + Jc7[2][4]*Si67[3][2]) + A5A6*S76[2][3]*(Jc7[1][5]*Si67[3][1] + Jc7[2][5]*Si67[3][2]);
Jc6[3][3]=S76[1][3]*(Jc7[1][1]*Si67[3][1] + Jc7[2][1]*Si67[3][2]) + S76[2][3]*(Jc7[1][2]*Si67[3][1] + Jc7[2][2]*Si67[3][2]) - A5A6*S76[1][2]*(Jc7[1][4]*Si67[3][1] + Jc7[2][4]*Si67[3][2]) - A5A6*S76[2][2]*(Jc7[1][5]*Si67[3][1] + Jc7[2][5]*Si67[3][2]);
Jc6[3][4]=-(Jc7[1][6]*Si67[3][1]) - Jc7[2][6]*Si67[3][2];
Jc6[3][5]=S76[1][2]*(Jc7[1][4]*Si67[3][1] + Jc7[2][4]*Si67[3][2]) + S76[2][2]*(Jc7[1][5]*Si67[3][1] + Jc7[2][5]*Si67[3][2]);
Jc6[3][6]=links[6].m + S76[1][3]*(Jc7[1][4]*Si67[3][1] + Jc7[2][4]*Si67[3][2]) + S76[2][3]*(Jc7[1][5]*Si67[3][1] + Jc7[2][5]*Si67[3][2]);

Jc6[4][1]=Jc7[6][3] + links[6].inertia[1][1];
Jc6[4][2]=links[6].inertia[1][2] - Jc7[6][1]*S76[1][2] - A5A6*Jc7[6][4]*S76[1][3] - Jc7[6][2]*S76[2][2] - A5A6*Jc7[6][5]*S76[2][3];
Jc6[4][3]=links[6].inertia[1][3] + A5A6*Jc7[6][4]*S76[1][2] - Jc7[6][1]*S76[1][3] + A5A6*Jc7[6][5]*S76[2][2] - Jc7[6][2]*S76[2][3];
Jc6[4][4]=Jc7[6][6];
Jc6[4][5]=-links[6].mcm[3] - Jc7[6][4]*S76[1][2] - Jc7[6][5]*S76[2][2];
Jc6[4][6]=links[6].mcm[2] - Jc7[6][4]*S76[1][3] - Jc7[6][5]*S76[2][3];

Jc6[5][1]=links[6].inertia[1][2] - Jc7[4][3]*Si67[2][1] - Jc7[5][3]*Si67[2][2] - A5A6*Jc7[1][3]*Si67[3][1] - A5A6*Jc7[2][3]*Si67[3][2];
Jc6[5][2]=links[6].inertia[2][2] + S76[1][2]*(Jc7[4][1]*Si67[2][1] + Jc7[5][1]*Si67[2][2] + A5A6*Jc7[1][1]*Si67[3][1] + A5A6*Jc7[2][1]*Si67[3][2]) + S76[2][2]*(Jc7[4][2]*Si67[2][1] + Jc7[5][2]*Si67[2][2] + A5A6*Jc7[1][2]*Si67[3][1] + A5A6*Jc7[2][2]*Si67[3][2]) + A5A6*S76[1][3]*(Jc7[4][4]*Si67[2][1] + Jc7[5][4]*Si67[2][2] + A5A6*Jc7[1][4]*Si67[3][1] + A5A6*Jc7[2][4]*Si67[3][2]) + A5A6*S76[2][3]*(Jc7[4][5]*Si67[2][1] + Jc7[5][5]*Si67[2][2] + A5A6*Jc7[1][5]*Si67[3][1] + A5A6*Jc7[2][5]*Si67[3][2]);
Jc6[5][3]=links[6].inertia[2][3] + S76[1][3]*(Jc7[4][1]*Si67[2][1] + Jc7[5][1]*Si67[2][2] + A5A6*Jc7[1][1]*Si67[3][1] + A5A6*Jc7[2][1]*Si67[3][2]) + S76[2][3]*(Jc7[4][2]*Si67[2][1] + Jc7[5][2]*Si67[2][2] + A5A6*Jc7[1][2]*Si67[3][1] + A5A6*Jc7[2][2]*Si67[3][2]) - A5A6*S76[1][2]*(Jc7[4][4]*Si67[2][1] + Jc7[5][4]*Si67[2][2] + A5A6*Jc7[1][4]*Si67[3][1] + A5A6*Jc7[2][4]*Si67[3][2]) - A5A6*S76[2][2]*(Jc7[4][5]*Si67[2][1] + Jc7[5][5]*Si67[2][2] + A5A6*Jc7[1][5]*Si67[3][1] + A5A6*Jc7[2][5]*Si67[3][2]);
Jc6[5][4]=links[6].mcm[3] - Jc7[4][6]*Si67[2][1] - Jc7[5][6]*Si67[2][2] - A5A6*Jc7[1][6]*Si67[3][1] - A5A6*Jc7[2][6]*Si67[3][2];
Jc6[5][5]=S76[1][2]*(Jc7[4][4]*Si67[2][1] + Jc7[5][4]*Si67[2][2] + A5A6*Jc7[1][4]*Si67[3][1] + A5A6*Jc7[2][4]*Si67[3][2]) + S76[2][2]*(Jc7[4][5]*Si67[2][1] + Jc7[5][5]*Si67[2][2] + A5A6*Jc7[1][5]*Si67[3][1] + A5A6*Jc7[2][5]*Si67[3][2]);
Jc6[5][6]=-links[6].mcm[1] + S76[1][3]*(Jc7[4][4]*Si67[2][1] + Jc7[5][4]*Si67[2][2] + A5A6*Jc7[1][4]*Si67[3][1] + A5A6*Jc7[2][4]*Si67[3][2]) + S76[2][3]*(Jc7[4][5]*Si67[2][1] + Jc7[5][5]*Si67[2][2] + A5A6*Jc7[1][5]*Si67[3][1] + A5A6*Jc7[2][5]*Si67[3][2]);

Jc6[6][1]=links[6].inertia[1][3] + A5A6*Jc7[1][3]*Si67[2][1] + A5A6*Jc7[2][3]*Si67[2][2] - Jc7[4][3]*Si67[3][1] - Jc7[5][3]*Si67[3][2];
Jc6[6][2]=links[6].inertia[2][3] + S76[1][2]*(-(A5A6*Jc7[1][1]*Si67[2][1]) - A5A6*Jc7[2][1]*Si67[2][2] + Jc7[4][1]*Si67[3][1] + Jc7[5][1]*Si67[3][2]) + S76[2][2]*(-(A5A6*Jc7[1][2]*Si67[2][1]) - A5A6*Jc7[2][2]*Si67[2][2] + Jc7[4][2]*Si67[3][1] + Jc7[5][2]*Si67[3][2]) + A5A6*S76[1][3]*(-(A5A6*Jc7[1][4]*Si67[2][1]) - A5A6*Jc7[2][4]*Si67[2][2] + Jc7[4][4]*Si67[3][1] + Jc7[5][4]*Si67[3][2]) + A5A6*S76[2][3]*(-(A5A6*Jc7[1][5]*Si67[2][1]) - A5A6*Jc7[2][5]*Si67[2][2] + Jc7[4][5]*Si67[3][1] + Jc7[5][5]*Si67[3][2]);
Jc6[6][3]=links[6].inertia[3][3] + S76[1][3]*(-(A5A6*Jc7[1][1]*Si67[2][1]) - A5A6*Jc7[2][1]*Si67[2][2] + Jc7[4][1]*Si67[3][1] + Jc7[5][1]*Si67[3][2]) + S76[2][3]*(-(A5A6*Jc7[1][2]*Si67[2][1]) - A5A6*Jc7[2][2]*Si67[2][2] + Jc7[4][2]*Si67[3][1] + Jc7[5][2]*Si67[3][2]) - A5A6*S76[1][2]*(-(A5A6*Jc7[1][4]*Si67[2][1]) - A5A6*Jc7[2][4]*Si67[2][2] + Jc7[4][4]*Si67[3][1] + Jc7[5][4]*Si67[3][2]) - A5A6*S76[2][2]*(-(A5A6*Jc7[1][5]*Si67[2][1]) - A5A6*Jc7[2][5]*Si67[2][2] + Jc7[4][5]*Si67[3][1] + Jc7[5][5]*Si67[3][2]);
Jc6[6][4]=-links[6].mcm[2] + A5A6*Jc7[1][6]*Si67[2][1] + A5A6*Jc7[2][6]*Si67[2][2] - Jc7[4][6]*Si67[3][1] - Jc7[5][6]*Si67[3][2];
Jc6[6][5]=links[6].mcm[1] + S76[1][2]*(-(A5A6*Jc7[1][4]*Si67[2][1]) - A5A6*Jc7[2][4]*Si67[2][2] + Jc7[4][4]*Si67[3][1] + Jc7[5][4]*Si67[3][2]) + S76[2][2]*(-(A5A6*Jc7[1][5]*Si67[2][1]) - A5A6*Jc7[2][5]*Si67[2][2] + Jc7[4][5]*Si67[3][1] + Jc7[5][5]*Si67[3][2]);
Jc6[6][6]=S76[1][3]*(-(A5A6*Jc7[1][4]*Si67[2][1]) - A5A6*Jc7[2][4]*Si67[2][2] + Jc7[4][4]*Si67[3][1] + Jc7[5][4]*Si67[3][2]) + S76[2][3]*(-(A5A6*Jc7[1][5]*Si67[2][1]) - A5A6*Jc7[2][5]*Si67[2][2] + Jc7[4][5]*Si67[3][1] + Jc7[5][5]*Si67[3][2]);



}


void
lbr4func14(void)
      {
/* composite inertia matrices */
Jc5[1][1]=Jc6[3][3] - A4A5*Jc6[3][4]*S65[1][2] - A4A5*Jc6[3][5]*S65[2][2];
Jc5[1][2]=links[5].mcm[3] + A4A5*Jc6[3][6] + Jc6[3][1]*S65[1][2] + Jc6[3][2]*S65[2][2];
Jc5[1][3]=-links[5].mcm[2] + Jc6[3][1]*S65[1][3] + Jc6[3][2]*S65[2][3];
Jc5[1][4]=links[5].m + Jc6[3][6];
Jc5[1][5]=Jc6[3][4]*S65[1][2] + Jc6[3][5]*S65[2][2];
Jc5[1][6]=Jc6[3][4]*S65[1][3] + Jc6[3][5]*S65[2][3];

Jc5[2][1]=-links[5].mcm[3] + Jc6[1][3]*Si56[2][1] + Jc6[2][3]*Si56[2][2] - A4A5*S65[1][2]*(Jc6[1][4]*Si56[2][1] + Jc6[2][4]*Si56[2][2]) - A4A5*S65[2][2]*(Jc6[1][5]*Si56[2][1] + Jc6[2][5]*Si56[2][2]);
Jc5[2][2]=S65[1][2]*(Jc6[1][1]*Si56[2][1] + Jc6[2][1]*Si56[2][2]) + S65[2][2]*(Jc6[1][2]*Si56[2][1] + Jc6[2][2]*Si56[2][2]) + A4A5*(Jc6[1][6]*Si56[2][1] + Jc6[2][6]*Si56[2][2]);
Jc5[2][3]=links[5].mcm[1] + S65[1][3]*(Jc6[1][1]*Si56[2][1] + Jc6[2][1]*Si56[2][2]) + S65[2][3]*(Jc6[1][2]*Si56[2][1] + Jc6[2][2]*Si56[2][2]);
Jc5[2][4]=Jc6[1][6]*Si56[2][1] + Jc6[2][6]*Si56[2][2];
Jc5[2][5]=links[5].m + S65[1][2]*(Jc6[1][4]*Si56[2][1] + Jc6[2][4]*Si56[2][2]) + S65[2][2]*(Jc6[1][5]*Si56[2][1] + Jc6[2][5]*Si56[2][2]);
Jc5[2][6]=S65[1][3]*(Jc6[1][4]*Si56[2][1] + Jc6[2][4]*Si56[2][2]) + S65[2][3]*(Jc6[1][5]*Si56[2][1] + Jc6[2][5]*Si56[2][2]);

Jc5[3][1]=links[5].mcm[2] + Jc6[1][3]*Si56[3][1] + Jc6[2][3]*Si56[3][2] - A4A5*S65[1][2]*(Jc6[1][4]*Si56[3][1] + Jc6[2][4]*Si56[3][2]) - A4A5*S65[2][2]*(Jc6[1][5]*Si56[3][1] + Jc6[2][5]*Si56[3][2]);
Jc5[3][2]=-links[5].mcm[1] + S65[1][2]*(Jc6[1][1]*Si56[3][1] + Jc6[2][1]*Si56[3][2]) + S65[2][2]*(Jc6[1][2]*Si56[3][1] + Jc6[2][2]*Si56[3][2]) + A4A5*(Jc6[1][6]*Si56[3][1] + Jc6[2][6]*Si56[3][2]);
Jc5[3][3]=S65[1][3]*(Jc6[1][1]*Si56[3][1] + Jc6[2][1]*Si56[3][2]) + S65[2][3]*(Jc6[1][2]*Si56[3][1] + Jc6[2][2]*Si56[3][2]);
Jc5[3][4]=Jc6[1][6]*Si56[3][1] + Jc6[2][6]*Si56[3][2];
Jc5[3][5]=S65[1][2]*(Jc6[1][4]*Si56[3][1] + Jc6[2][4]*Si56[3][2]) + S65[2][2]*(Jc6[1][5]*Si56[3][1] + Jc6[2][5]*Si56[3][2]);
Jc5[3][6]=links[5].m + S65[1][3]*(Jc6[1][4]*Si56[3][1] + Jc6[2][4]*Si56[3][2]) + S65[2][3]*(Jc6[1][5]*Si56[3][1] + Jc6[2][5]*Si56[3][2]);

Jc5[4][1]=Jc6[6][3] + links[5].inertia[1][1] - A4A5*Jc6[1][3]*Si56[2][1] - A4A5*Jc6[2][3]*Si56[2][2] - A4A5*S65[1][2]*(Jc6[6][4] - A4A5*Jc6[1][4]*Si56[2][1] - A4A5*Jc6[2][4]*Si56[2][2]) - A4A5*S65[2][2]*(Jc6[6][5] - A4A5*Jc6[1][5]*Si56[2][1] - A4A5*Jc6[2][5]*Si56[2][2]);
Jc5[4][2]=links[5].inertia[1][2] + S65[1][2]*(Jc6[6][1] - A4A5*Jc6[1][1]*Si56[2][1] - A4A5*Jc6[2][1]*Si56[2][2]) + S65[2][2]*(Jc6[6][2] - A4A5*Jc6[1][2]*Si56[2][1] - A4A5*Jc6[2][2]*Si56[2][2]) + A4A5*(Jc6[6][6] - A4A5*Jc6[1][6]*Si56[2][1] - A4A5*Jc6[2][6]*Si56[2][2]);
Jc5[4][3]=links[5].inertia[1][3] + S65[1][3]*(Jc6[6][1] - A4A5*Jc6[1][1]*Si56[2][1] - A4A5*Jc6[2][1]*Si56[2][2]) + S65[2][3]*(Jc6[6][2] - A4A5*Jc6[1][2]*Si56[2][1] - A4A5*Jc6[2][2]*Si56[2][2]);
Jc5[4][4]=Jc6[6][6] - A4A5*Jc6[1][6]*Si56[2][1] - A4A5*Jc6[2][6]*Si56[2][2];
Jc5[4][5]=-links[5].mcm[3] + S65[1][2]*(Jc6[6][4] - A4A5*Jc6[1][4]*Si56[2][1] - A4A5*Jc6[2][4]*Si56[2][2]) + S65[2][2]*(Jc6[6][5] - A4A5*Jc6[1][5]*Si56[2][1] - A4A5*Jc6[2][5]*Si56[2][2]);
Jc5[4][6]=links[5].mcm[2] + S65[1][3]*(Jc6[6][4] - A4A5*Jc6[1][4]*Si56[2][1] - A4A5*Jc6[2][4]*Si56[2][2]) + S65[2][3]*(Jc6[6][5] - A4A5*Jc6[1][5]*Si56[2][1] - A4A5*Jc6[2][5]*Si56[2][2]);

Jc5[5][1]=A4A5*Jc6[3][3] + links[5].inertia[1][2] + Jc6[4][3]*Si56[2][1] + Jc6[5][3]*Si56[2][2] - A4A5*S65[1][2]*(A4A5*Jc6[3][4] + Jc6[4][4]*Si56[2][1] + Jc6[5][4]*Si56[2][2]) - A4A5*S65[2][2]*(A4A5*Jc6[3][5] + Jc6[4][5]*Si56[2][1] + Jc6[5][5]*Si56[2][2]);
Jc5[5][2]=links[5].inertia[2][2] + S65[1][2]*(A4A5*Jc6[3][1] + Jc6[4][1]*Si56[2][1] + Jc6[5][1]*Si56[2][2]) + S65[2][2]*(A4A5*Jc6[3][2] + Jc6[4][2]*Si56[2][1] + Jc6[5][2]*Si56[2][2]) + A4A5*(A4A5*Jc6[3][6] + Jc6[4][6]*Si56[2][1] + Jc6[5][6]*Si56[2][2]);
Jc5[5][3]=links[5].inertia[2][3] + S65[1][3]*(A4A5*Jc6[3][1] + Jc6[4][1]*Si56[2][1] + Jc6[5][1]*Si56[2][2]) + S65[2][3]*(A4A5*Jc6[3][2] + Jc6[4][2]*Si56[2][1] + Jc6[5][2]*Si56[2][2]);
Jc5[5][4]=links[5].mcm[3] + A4A5*Jc6[3][6] + Jc6[4][6]*Si56[2][1] + Jc6[5][6]*Si56[2][2];
Jc5[5][5]=S65[1][2]*(A4A5*Jc6[3][4] + Jc6[4][4]*Si56[2][1] + Jc6[5][4]*Si56[2][2]) + S65[2][2]*(A4A5*Jc6[3][5] + Jc6[4][5]*Si56[2][1] + Jc6[5][5]*Si56[2][2]);
Jc5[5][6]=-links[5].mcm[1] + S65[1][3]*(A4A5*Jc6[3][4] + Jc6[4][4]*Si56[2][1] + Jc6[5][4]*Si56[2][2]) + S65[2][3]*(A4A5*Jc6[3][5] + Jc6[4][5]*Si56[2][1] + Jc6[5][5]*Si56[2][2]);

Jc5[6][1]=links[5].inertia[1][3] + Jc6[4][3]*Si56[3][1] + Jc6[5][3]*Si56[3][2] - A4A5*S65[1][2]*(Jc6[4][4]*Si56[3][1] + Jc6[5][4]*Si56[3][2]) - A4A5*S65[2][2]*(Jc6[4][5]*Si56[3][1] + Jc6[5][5]*Si56[3][2]);
Jc5[6][2]=links[5].inertia[2][3] + S65[1][2]*(Jc6[4][1]*Si56[3][1] + Jc6[5][1]*Si56[3][2]) + S65[2][2]*(Jc6[4][2]*Si56[3][1] + Jc6[5][2]*Si56[3][2]) + A4A5*(Jc6[4][6]*Si56[3][1] + Jc6[5][6]*Si56[3][2]);
Jc5[6][3]=links[5].inertia[3][3] + S65[1][3]*(Jc6[4][1]*Si56[3][1] + Jc6[5][1]*Si56[3][2]) + S65[2][3]*(Jc6[4][2]*Si56[3][1] + Jc6[5][2]*Si56[3][2]);
Jc5[6][4]=-links[5].mcm[2] + Jc6[4][6]*Si56[3][1] + Jc6[5][6]*Si56[3][2];
Jc5[6][5]=links[5].mcm[1] + S65[1][2]*(Jc6[4][4]*Si56[3][1] + Jc6[5][4]*Si56[3][2]) + S65[2][2]*(Jc6[4][5]*Si56[3][1] + Jc6[5][5]*Si56[3][2]);
Jc5[6][6]=S65[1][3]*(Jc6[4][4]*Si56[3][1] + Jc6[5][4]*Si56[3][2]) + S65[2][3]*(Jc6[4][5]*Si56[3][1] + Jc6[5][5]*Si56[3][2]);



}


void
lbr4func15(void)
      {
/* composite inertia matrices */
Jc4[1][1]=Jc5[3][3];
Jc4[1][2]=links[4].mcm[3] + Jc5[3][1]*S54[1][2] - A3A4*Jc5[3][4]*S54[1][3] + Jc5[3][2]*S54[2][2] - A3A4*Jc5[3][5]*S54[2][3];
Jc4[1][3]=-links[4].mcm[2] + A3A4*Jc5[3][4]*S54[1][2] + Jc5[3][1]*S54[1][3] + A3A4*Jc5[3][5]*S54[2][2] + Jc5[3][2]*S54[2][3];
Jc4[1][4]=links[4].m + Jc5[3][6];
Jc4[1][5]=Jc5[3][4]*S54[1][2] + Jc5[3][5]*S54[2][2];
Jc4[1][6]=Jc5[3][4]*S54[1][3] + Jc5[3][5]*S54[2][3];

Jc4[2][1]=-links[4].mcm[3] + Jc5[1][3]*Si45[2][1] + Jc5[2][3]*Si45[2][2];
Jc4[2][2]=S54[1][2]*(Jc5[1][1]*Si45[2][1] + Jc5[2][1]*Si45[2][2]) + S54[2][2]*(Jc5[1][2]*Si45[2][1] + Jc5[2][2]*Si45[2][2]) - A3A4*S54[1][3]*(Jc5[1][4]*Si45[2][1] + Jc5[2][4]*Si45[2][2]) - A3A4*S54[2][3]*(Jc5[1][5]*Si45[2][1] + Jc5[2][5]*Si45[2][2]);
Jc4[2][3]=links[4].mcm[1] + S54[1][3]*(Jc5[1][1]*Si45[2][1] + Jc5[2][1]*Si45[2][2]) + S54[2][3]*(Jc5[1][2]*Si45[2][1] + Jc5[2][2]*Si45[2][2]) + A3A4*S54[1][2]*(Jc5[1][4]*Si45[2][1] + Jc5[2][4]*Si45[2][2]) + A3A4*S54[2][2]*(Jc5[1][5]*Si45[2][1] + Jc5[2][5]*Si45[2][2]);
Jc4[2][4]=Jc5[1][6]*Si45[2][1] + Jc5[2][6]*Si45[2][2];
Jc4[2][5]=links[4].m + S54[1][2]*(Jc5[1][4]*Si45[2][1] + Jc5[2][4]*Si45[2][2]) + S54[2][2]*(Jc5[1][5]*Si45[2][1] + Jc5[2][5]*Si45[2][2]);
Jc4[2][6]=S54[1][3]*(Jc5[1][4]*Si45[2][1] + Jc5[2][4]*Si45[2][2]) + S54[2][3]*(Jc5[1][5]*Si45[2][1] + Jc5[2][5]*Si45[2][2]);

Jc4[3][1]=links[4].mcm[2] + Jc5[1][3]*Si45[3][1] + Jc5[2][3]*Si45[3][2];
Jc4[3][2]=-links[4].mcm[1] + S54[1][2]*(Jc5[1][1]*Si45[3][1] + Jc5[2][1]*Si45[3][2]) + S54[2][2]*(Jc5[1][2]*Si45[3][1] + Jc5[2][2]*Si45[3][2]) - A3A4*S54[1][3]*(Jc5[1][4]*Si45[3][1] + Jc5[2][4]*Si45[3][2]) - A3A4*S54[2][3]*(Jc5[1][5]*Si45[3][1] + Jc5[2][5]*Si45[3][2]);
Jc4[3][3]=S54[1][3]*(Jc5[1][1]*Si45[3][1] + Jc5[2][1]*Si45[3][2]) + S54[2][3]*(Jc5[1][2]*Si45[3][1] + Jc5[2][2]*Si45[3][2]) + A3A4*S54[1][2]*(Jc5[1][4]*Si45[3][1] + Jc5[2][4]*Si45[3][2]) + A3A4*S54[2][2]*(Jc5[1][5]*Si45[3][1] + Jc5[2][5]*Si45[3][2]);
Jc4[3][4]=Jc5[1][6]*Si45[3][1] + Jc5[2][6]*Si45[3][2];
Jc4[3][5]=S54[1][2]*(Jc5[1][4]*Si45[3][1] + Jc5[2][4]*Si45[3][2]) + S54[2][2]*(Jc5[1][5]*Si45[3][1] + Jc5[2][5]*Si45[3][2]);
Jc4[3][6]=links[4].m + S54[1][3]*(Jc5[1][4]*Si45[3][1] + Jc5[2][4]*Si45[3][2]) + S54[2][3]*(Jc5[1][5]*Si45[3][1] + Jc5[2][5]*Si45[3][2]);

Jc4[4][1]=Jc5[6][3] + links[4].inertia[1][1];
Jc4[4][2]=links[4].inertia[1][2] + Jc5[6][1]*S54[1][2] - A3A4*Jc5[6][4]*S54[1][3] + Jc5[6][2]*S54[2][2] - A3A4*Jc5[6][5]*S54[2][3];
Jc4[4][3]=links[4].inertia[1][3] + A3A4*Jc5[6][4]*S54[1][2] + Jc5[6][1]*S54[1][3] + A3A4*Jc5[6][5]*S54[2][2] + Jc5[6][2]*S54[2][3];
Jc4[4][4]=Jc5[6][6];
Jc4[4][5]=-links[4].mcm[3] + Jc5[6][4]*S54[1][2] + Jc5[6][5]*S54[2][2];
Jc4[4][6]=links[4].mcm[2] + Jc5[6][4]*S54[1][3] + Jc5[6][5]*S54[2][3];

Jc4[5][1]=links[4].inertia[1][2] + Jc5[4][3]*Si45[2][1] + Jc5[5][3]*Si45[2][2] - A3A4*Jc5[1][3]*Si45[3][1] - A3A4*Jc5[2][3]*Si45[3][2];
Jc4[5][2]=links[4].inertia[2][2] + S54[1][2]*(Jc5[4][1]*Si45[2][1] + Jc5[5][1]*Si45[2][2] - A3A4*Jc5[1][1]*Si45[3][1] - A3A4*Jc5[2][1]*Si45[3][2]) + S54[2][2]*(Jc5[4][2]*Si45[2][1] + Jc5[5][2]*Si45[2][2] - A3A4*Jc5[1][2]*Si45[3][1] - A3A4*Jc5[2][2]*Si45[3][2]) - A3A4*S54[1][3]*(Jc5[4][4]*Si45[2][1] + Jc5[5][4]*Si45[2][2] - A3A4*Jc5[1][4]*Si45[3][1] - A3A4*Jc5[2][4]*Si45[3][2]) - A3A4*S54[2][3]*(Jc5[4][5]*Si45[2][1] + Jc5[5][5]*Si45[2][2] - A3A4*Jc5[1][5]*Si45[3][1] - A3A4*Jc5[2][5]*Si45[3][2]);
Jc4[5][3]=links[4].inertia[2][3] + S54[1][3]*(Jc5[4][1]*Si45[2][1] + Jc5[5][1]*Si45[2][2] - A3A4*Jc5[1][1]*Si45[3][1] - A3A4*Jc5[2][1]*Si45[3][2]) + S54[2][3]*(Jc5[4][2]*Si45[2][1] + Jc5[5][2]*Si45[2][2] - A3A4*Jc5[1][2]*Si45[3][1] - A3A4*Jc5[2][2]*Si45[3][2]) + A3A4*S54[1][2]*(Jc5[4][4]*Si45[2][1] + Jc5[5][4]*Si45[2][2] - A3A4*Jc5[1][4]*Si45[3][1] - A3A4*Jc5[2][4]*Si45[3][2]) + A3A4*S54[2][2]*(Jc5[4][5]*Si45[2][1] + Jc5[5][5]*Si45[2][2] - A3A4*Jc5[1][5]*Si45[3][1] - A3A4*Jc5[2][5]*Si45[3][2]);
Jc4[5][4]=links[4].mcm[3] + Jc5[4][6]*Si45[2][1] + Jc5[5][6]*Si45[2][2] - A3A4*Jc5[1][6]*Si45[3][1] - A3A4*Jc5[2][6]*Si45[3][2];
Jc4[5][5]=S54[1][2]*(Jc5[4][4]*Si45[2][1] + Jc5[5][4]*Si45[2][2] - A3A4*Jc5[1][4]*Si45[3][1] - A3A4*Jc5[2][4]*Si45[3][2]) + S54[2][2]*(Jc5[4][5]*Si45[2][1] + Jc5[5][5]*Si45[2][2] - A3A4*Jc5[1][5]*Si45[3][1] - A3A4*Jc5[2][5]*Si45[3][2]);
Jc4[5][6]=-links[4].mcm[1] + S54[1][3]*(Jc5[4][4]*Si45[2][1] + Jc5[5][4]*Si45[2][2] - A3A4*Jc5[1][4]*Si45[3][1] - A3A4*Jc5[2][4]*Si45[3][2]) + S54[2][3]*(Jc5[4][5]*Si45[2][1] + Jc5[5][5]*Si45[2][2] - A3A4*Jc5[1][5]*Si45[3][1] - A3A4*Jc5[2][5]*Si45[3][2]);

Jc4[6][1]=links[4].inertia[1][3] + A3A4*Jc5[1][3]*Si45[2][1] + A3A4*Jc5[2][3]*Si45[2][2] + Jc5[4][3]*Si45[3][1] + Jc5[5][3]*Si45[3][2];
Jc4[6][2]=links[4].inertia[2][3] + S54[1][2]*(A3A4*Jc5[1][1]*Si45[2][1] + A3A4*Jc5[2][1]*Si45[2][2] + Jc5[4][1]*Si45[3][1] + Jc5[5][1]*Si45[3][2]) + S54[2][2]*(A3A4*Jc5[1][2]*Si45[2][1] + A3A4*Jc5[2][2]*Si45[2][2] + Jc5[4][2]*Si45[3][1] + Jc5[5][2]*Si45[3][2]) - A3A4*S54[1][3]*(A3A4*Jc5[1][4]*Si45[2][1] + A3A4*Jc5[2][4]*Si45[2][2] + Jc5[4][4]*Si45[3][1] + Jc5[5][4]*Si45[3][2]) - A3A4*S54[2][3]*(A3A4*Jc5[1][5]*Si45[2][1] + A3A4*Jc5[2][5]*Si45[2][2] + Jc5[4][5]*Si45[3][1] + Jc5[5][5]*Si45[3][2]);
Jc4[6][3]=links[4].inertia[3][3] + S54[1][3]*(A3A4*Jc5[1][1]*Si45[2][1] + A3A4*Jc5[2][1]*Si45[2][2] + Jc5[4][1]*Si45[3][1] + Jc5[5][1]*Si45[3][2]) + S54[2][3]*(A3A4*Jc5[1][2]*Si45[2][1] + A3A4*Jc5[2][2]*Si45[2][2] + Jc5[4][2]*Si45[3][1] + Jc5[5][2]*Si45[3][2]) + A3A4*S54[1][2]*(A3A4*Jc5[1][4]*Si45[2][1] + A3A4*Jc5[2][4]*Si45[2][2] + Jc5[4][4]*Si45[3][1] + Jc5[5][4]*Si45[3][2]) + A3A4*S54[2][2]*(A3A4*Jc5[1][5]*Si45[2][1] + A3A4*Jc5[2][5]*Si45[2][2] + Jc5[4][5]*Si45[3][1] + Jc5[5][5]*Si45[3][2]);
Jc4[6][4]=-links[4].mcm[2] + A3A4*Jc5[1][6]*Si45[2][1] + A3A4*Jc5[2][6]*Si45[2][2] + Jc5[4][6]*Si45[3][1] + Jc5[5][6]*Si45[3][2];
Jc4[6][5]=links[4].mcm[1] + S54[1][2]*(A3A4*Jc5[1][4]*Si45[2][1] + A3A4*Jc5[2][4]*Si45[2][2] + Jc5[4][4]*Si45[3][1] + Jc5[5][4]*Si45[3][2]) + S54[2][2]*(A3A4*Jc5[1][5]*Si45[2][1] + A3A4*Jc5[2][5]*Si45[2][2] + Jc5[4][5]*Si45[3][1] + Jc5[5][5]*Si45[3][2]);
Jc4[6][6]=S54[1][3]*(A3A4*Jc5[1][4]*Si45[2][1] + A3A4*Jc5[2][4]*Si45[2][2] + Jc5[4][4]*Si45[3][1] + Jc5[5][4]*Si45[3][2]) + S54[2][3]*(A3A4*Jc5[1][5]*Si45[2][1] + A3A4*Jc5[2][5]*Si45[2][2] + Jc5[4][5]*Si45[3][1] + Jc5[5][5]*Si45[3][2]);



}


void
lbr4func16(void)
      {
/* composite inertia matrices */
Jc3[1][1]=Jc4[3][3] + E1A3*Jc4[3][4]*S43[1][2] + E1A3*Jc4[3][5]*S43[2][2];
Jc3[1][2]=links[3].mcm[3] + E1A3*Jc4[3][6] - Jc4[3][1]*S43[1][2] - Jc4[3][2]*S43[2][2];
Jc3[1][3]=-links[3].mcm[2] - Jc4[3][1]*S43[1][3] - Jc4[3][2]*S43[2][3];
Jc3[1][4]=links[3].m + Jc4[3][6];
Jc3[1][5]=-(Jc4[3][4]*S43[1][2]) - Jc4[3][5]*S43[2][2];
Jc3[1][6]=-(Jc4[3][4]*S43[1][3]) - Jc4[3][5]*S43[2][3];

Jc3[2][1]=-links[3].mcm[3] - Jc4[1][3]*Si34[2][1] - Jc4[2][3]*Si34[2][2] - E1A3*S43[1][2]*(Jc4[1][4]*Si34[2][1] + Jc4[2][4]*Si34[2][2]) - E1A3*S43[2][2]*(Jc4[1][5]*Si34[2][1] + Jc4[2][5]*Si34[2][2]);
Jc3[2][2]=S43[1][2]*(Jc4[1][1]*Si34[2][1] + Jc4[2][1]*Si34[2][2]) + S43[2][2]*(Jc4[1][2]*Si34[2][1] + Jc4[2][2]*Si34[2][2]) - E1A3*(Jc4[1][6]*Si34[2][1] + Jc4[2][6]*Si34[2][2]);
Jc3[2][3]=links[3].mcm[1] + S43[1][3]*(Jc4[1][1]*Si34[2][1] + Jc4[2][1]*Si34[2][2]) + S43[2][3]*(Jc4[1][2]*Si34[2][1] + Jc4[2][2]*Si34[2][2]);
Jc3[2][4]=-(Jc4[1][6]*Si34[2][1]) - Jc4[2][6]*Si34[2][2];
Jc3[2][5]=links[3].m + S43[1][2]*(Jc4[1][4]*Si34[2][1] + Jc4[2][4]*Si34[2][2]) + S43[2][2]*(Jc4[1][5]*Si34[2][1] + Jc4[2][5]*Si34[2][2]);
Jc3[2][6]=S43[1][3]*(Jc4[1][4]*Si34[2][1] + Jc4[2][4]*Si34[2][2]) + S43[2][3]*(Jc4[1][5]*Si34[2][1] + Jc4[2][5]*Si34[2][2]);

Jc3[3][1]=links[3].mcm[2] - Jc4[1][3]*Si34[3][1] - Jc4[2][3]*Si34[3][2] - E1A3*S43[1][2]*(Jc4[1][4]*Si34[3][1] + Jc4[2][4]*Si34[3][2]) - E1A3*S43[2][2]*(Jc4[1][5]*Si34[3][1] + Jc4[2][5]*Si34[3][2]);
Jc3[3][2]=-links[3].mcm[1] + S43[1][2]*(Jc4[1][1]*Si34[3][1] + Jc4[2][1]*Si34[3][2]) + S43[2][2]*(Jc4[1][2]*Si34[3][1] + Jc4[2][2]*Si34[3][2]) - E1A3*(Jc4[1][6]*Si34[3][1] + Jc4[2][6]*Si34[3][2]);
Jc3[3][3]=S43[1][3]*(Jc4[1][1]*Si34[3][1] + Jc4[2][1]*Si34[3][2]) + S43[2][3]*(Jc4[1][2]*Si34[3][1] + Jc4[2][2]*Si34[3][2]);
Jc3[3][4]=-(Jc4[1][6]*Si34[3][1]) - Jc4[2][6]*Si34[3][2];
Jc3[3][5]=S43[1][2]*(Jc4[1][4]*Si34[3][1] + Jc4[2][4]*Si34[3][2]) + S43[2][2]*(Jc4[1][5]*Si34[3][1] + Jc4[2][5]*Si34[3][2]);
Jc3[3][6]=links[3].m + S43[1][3]*(Jc4[1][4]*Si34[3][1] + Jc4[2][4]*Si34[3][2]) + S43[2][3]*(Jc4[1][5]*Si34[3][1] + Jc4[2][5]*Si34[3][2]);

Jc3[4][1]=Jc4[6][3] + links[3].inertia[1][1] + E1A3*Jc4[1][3]*Si34[2][1] + E1A3*Jc4[2][3]*Si34[2][2] - E1A3*S43[1][2]*(-Jc4[6][4] - E1A3*Jc4[1][4]*Si34[2][1] - E1A3*Jc4[2][4]*Si34[2][2]) - E1A3*S43[2][2]*(-Jc4[6][5] - E1A3*Jc4[1][5]*Si34[2][1] - E1A3*Jc4[2][5]*Si34[2][2]);
Jc3[4][2]=links[3].inertia[1][2] + S43[1][2]*(-Jc4[6][1] - E1A3*Jc4[1][1]*Si34[2][1] - E1A3*Jc4[2][1]*Si34[2][2]) + S43[2][2]*(-Jc4[6][2] - E1A3*Jc4[1][2]*Si34[2][1] - E1A3*Jc4[2][2]*Si34[2][2]) - E1A3*(-Jc4[6][6] - E1A3*Jc4[1][6]*Si34[2][1] - E1A3*Jc4[2][6]*Si34[2][2]);
Jc3[4][3]=links[3].inertia[1][3] + S43[1][3]*(-Jc4[6][1] - E1A3*Jc4[1][1]*Si34[2][1] - E1A3*Jc4[2][1]*Si34[2][2]) + S43[2][3]*(-Jc4[6][2] - E1A3*Jc4[1][2]*Si34[2][1] - E1A3*Jc4[2][2]*Si34[2][2]);
Jc3[4][4]=Jc4[6][6] + E1A3*Jc4[1][6]*Si34[2][1] + E1A3*Jc4[2][6]*Si34[2][2];
Jc3[4][5]=-links[3].mcm[3] + S43[1][2]*(-Jc4[6][4] - E1A3*Jc4[1][4]*Si34[2][1] - E1A3*Jc4[2][4]*Si34[2][2]) + S43[2][2]*(-Jc4[6][5] - E1A3*Jc4[1][5]*Si34[2][1] - E1A3*Jc4[2][5]*Si34[2][2]);
Jc3[4][6]=links[3].mcm[2] + S43[1][3]*(-Jc4[6][4] - E1A3*Jc4[1][4]*Si34[2][1] - E1A3*Jc4[2][4]*Si34[2][2]) + S43[2][3]*(-Jc4[6][5] - E1A3*Jc4[1][5]*Si34[2][1] - E1A3*Jc4[2][5]*Si34[2][2]);

Jc3[5][1]=E1A3*Jc4[3][3] + links[3].inertia[1][2] - Jc4[4][3]*Si34[2][1] - Jc4[5][3]*Si34[2][2] - E1A3*S43[1][2]*(-(E1A3*Jc4[3][4]) + Jc4[4][4]*Si34[2][1] + Jc4[5][4]*Si34[2][2]) - E1A3*S43[2][2]*(-(E1A3*Jc4[3][5]) + Jc4[4][5]*Si34[2][1] + Jc4[5][5]*Si34[2][2]);
Jc3[5][2]=links[3].inertia[2][2] + S43[1][2]*(-(E1A3*Jc4[3][1]) + Jc4[4][1]*Si34[2][1] + Jc4[5][1]*Si34[2][2]) + S43[2][2]*(-(E1A3*Jc4[3][2]) + Jc4[4][2]*Si34[2][1] + Jc4[5][2]*Si34[2][2]) - E1A3*(-(E1A3*Jc4[3][6]) + Jc4[4][6]*Si34[2][1] + Jc4[5][6]*Si34[2][2]);
Jc3[5][3]=links[3].inertia[2][3] + S43[1][3]*(-(E1A3*Jc4[3][1]) + Jc4[4][1]*Si34[2][1] + Jc4[5][1]*Si34[2][2]) + S43[2][3]*(-(E1A3*Jc4[3][2]) + Jc4[4][2]*Si34[2][1] + Jc4[5][2]*Si34[2][2]);
Jc3[5][4]=links[3].mcm[3] + E1A3*Jc4[3][6] - Jc4[4][6]*Si34[2][1] - Jc4[5][6]*Si34[2][2];
Jc3[5][5]=S43[1][2]*(-(E1A3*Jc4[3][4]) + Jc4[4][4]*Si34[2][1] + Jc4[5][4]*Si34[2][2]) + S43[2][2]*(-(E1A3*Jc4[3][5]) + Jc4[4][5]*Si34[2][1] + Jc4[5][5]*Si34[2][2]);
Jc3[5][6]=-links[3].mcm[1] + S43[1][3]*(-(E1A3*Jc4[3][4]) + Jc4[4][4]*Si34[2][1] + Jc4[5][4]*Si34[2][2]) + S43[2][3]*(-(E1A3*Jc4[3][5]) + Jc4[4][5]*Si34[2][1] + Jc4[5][5]*Si34[2][2]);

Jc3[6][1]=links[3].inertia[1][3] - Jc4[4][3]*Si34[3][1] - Jc4[5][3]*Si34[3][2] - E1A3*S43[1][2]*(Jc4[4][4]*Si34[3][1] + Jc4[5][4]*Si34[3][2]) - E1A3*S43[2][2]*(Jc4[4][5]*Si34[3][1] + Jc4[5][5]*Si34[3][2]);
Jc3[6][2]=links[3].inertia[2][3] + S43[1][2]*(Jc4[4][1]*Si34[3][1] + Jc4[5][1]*Si34[3][2]) + S43[2][2]*(Jc4[4][2]*Si34[3][1] + Jc4[5][2]*Si34[3][2]) - E1A3*(Jc4[4][6]*Si34[3][1] + Jc4[5][6]*Si34[3][2]);
Jc3[6][3]=links[3].inertia[3][3] + S43[1][3]*(Jc4[4][1]*Si34[3][1] + Jc4[5][1]*Si34[3][2]) + S43[2][3]*(Jc4[4][2]*Si34[3][1] + Jc4[5][2]*Si34[3][2]);
Jc3[6][4]=-links[3].mcm[2] - Jc4[4][6]*Si34[3][1] - Jc4[5][6]*Si34[3][2];
Jc3[6][5]=links[3].mcm[1] + S43[1][2]*(Jc4[4][4]*Si34[3][1] + Jc4[5][4]*Si34[3][2]) + S43[2][2]*(Jc4[4][5]*Si34[3][1] + Jc4[5][5]*Si34[3][2]);
Jc3[6][6]=S43[1][3]*(Jc4[4][4]*Si34[3][1] + Jc4[5][4]*Si34[3][2]) + S43[2][3]*(Jc4[4][5]*Si34[3][1] + Jc4[5][5]*Si34[3][2]);



}


void
lbr4func17(void)
      {
/* composite inertia matrices */
Jc2[1][1]=Jc3[3][3];
Jc2[1][2]=links[2].mcm[3] - Jc3[3][1]*S32[1][2] - A2E1*Jc3[3][4]*S32[1][3] - Jc3[3][2]*S32[2][2] - A2E1*Jc3[3][5]*S32[2][3];
Jc2[1][3]=-links[2].mcm[2] + A2E1*Jc3[3][4]*S32[1][2] - Jc3[3][1]*S32[1][3] + A2E1*Jc3[3][5]*S32[2][2] - Jc3[3][2]*S32[2][3];
Jc2[1][4]=links[2].m + Jc3[3][6];
Jc2[1][5]=-(Jc3[3][4]*S32[1][2]) - Jc3[3][5]*S32[2][2];
Jc2[1][6]=-(Jc3[3][4]*S32[1][3]) - Jc3[3][5]*S32[2][3];

Jc2[2][1]=-links[2].mcm[3] - Jc3[1][3]*Si23[2][1] - Jc3[2][3]*Si23[2][2];
Jc2[2][2]=S32[1][2]*(Jc3[1][1]*Si23[2][1] + Jc3[2][1]*Si23[2][2]) + S32[2][2]*(Jc3[1][2]*Si23[2][1] + Jc3[2][2]*Si23[2][2]) + A2E1*S32[1][3]*(Jc3[1][4]*Si23[2][1] + Jc3[2][4]*Si23[2][2]) + A2E1*S32[2][3]*(Jc3[1][5]*Si23[2][1] + Jc3[2][5]*Si23[2][2]);
Jc2[2][3]=links[2].mcm[1] + S32[1][3]*(Jc3[1][1]*Si23[2][1] + Jc3[2][1]*Si23[2][2]) + S32[2][3]*(Jc3[1][2]*Si23[2][1] + Jc3[2][2]*Si23[2][2]) - A2E1*S32[1][2]*(Jc3[1][4]*Si23[2][1] + Jc3[2][4]*Si23[2][2]) - A2E1*S32[2][2]*(Jc3[1][5]*Si23[2][1] + Jc3[2][5]*Si23[2][2]);
Jc2[2][4]=-(Jc3[1][6]*Si23[2][1]) - Jc3[2][6]*Si23[2][2];
Jc2[2][5]=links[2].m + S32[1][2]*(Jc3[1][4]*Si23[2][1] + Jc3[2][4]*Si23[2][2]) + S32[2][2]*(Jc3[1][5]*Si23[2][1] + Jc3[2][5]*Si23[2][2]);
Jc2[2][6]=S32[1][3]*(Jc3[1][4]*Si23[2][1] + Jc3[2][4]*Si23[2][2]) + S32[2][3]*(Jc3[1][5]*Si23[2][1] + Jc3[2][5]*Si23[2][2]);

Jc2[3][1]=links[2].mcm[2] - Jc3[1][3]*Si23[3][1] - Jc3[2][3]*Si23[3][2];
Jc2[3][2]=-links[2].mcm[1] + S32[1][2]*(Jc3[1][1]*Si23[3][1] + Jc3[2][1]*Si23[3][2]) + S32[2][2]*(Jc3[1][2]*Si23[3][1] + Jc3[2][2]*Si23[3][2]) + A2E1*S32[1][3]*(Jc3[1][4]*Si23[3][1] + Jc3[2][4]*Si23[3][2]) + A2E1*S32[2][3]*(Jc3[1][5]*Si23[3][1] + Jc3[2][5]*Si23[3][2]);
Jc2[3][3]=S32[1][3]*(Jc3[1][1]*Si23[3][1] + Jc3[2][1]*Si23[3][2]) + S32[2][3]*(Jc3[1][2]*Si23[3][1] + Jc3[2][2]*Si23[3][2]) - A2E1*S32[1][2]*(Jc3[1][4]*Si23[3][1] + Jc3[2][4]*Si23[3][2]) - A2E1*S32[2][2]*(Jc3[1][5]*Si23[3][1] + Jc3[2][5]*Si23[3][2]);
Jc2[3][4]=-(Jc3[1][6]*Si23[3][1]) - Jc3[2][6]*Si23[3][2];
Jc2[3][5]=S32[1][2]*(Jc3[1][4]*Si23[3][1] + Jc3[2][4]*Si23[3][2]) + S32[2][2]*(Jc3[1][5]*Si23[3][1] + Jc3[2][5]*Si23[3][2]);
Jc2[3][6]=links[2].m + S32[1][3]*(Jc3[1][4]*Si23[3][1] + Jc3[2][4]*Si23[3][2]) + S32[2][3]*(Jc3[1][5]*Si23[3][1] + Jc3[2][5]*Si23[3][2]);

Jc2[4][1]=Jc3[6][3] + links[2].inertia[1][1];
Jc2[4][2]=links[2].inertia[1][2] - Jc3[6][1]*S32[1][2] - A2E1*Jc3[6][4]*S32[1][3] - Jc3[6][2]*S32[2][2] - A2E1*Jc3[6][5]*S32[2][3];
Jc2[4][3]=links[2].inertia[1][3] + A2E1*Jc3[6][4]*S32[1][2] - Jc3[6][1]*S32[1][3] + A2E1*Jc3[6][5]*S32[2][2] - Jc3[6][2]*S32[2][3];
Jc2[4][4]=Jc3[6][6];
Jc2[4][5]=-links[2].mcm[3] - Jc3[6][4]*S32[1][2] - Jc3[6][5]*S32[2][2];
Jc2[4][6]=links[2].mcm[2] - Jc3[6][4]*S32[1][3] - Jc3[6][5]*S32[2][3];

Jc2[5][1]=links[2].inertia[1][2] - Jc3[4][3]*Si23[2][1] - Jc3[5][3]*Si23[2][2] - A2E1*Jc3[1][3]*Si23[3][1] - A2E1*Jc3[2][3]*Si23[3][2];
Jc2[5][2]=links[2].inertia[2][2] + S32[1][2]*(Jc3[4][1]*Si23[2][1] + Jc3[5][1]*Si23[2][2] + A2E1*Jc3[1][1]*Si23[3][1] + A2E1*Jc3[2][1]*Si23[3][2]) + S32[2][2]*(Jc3[4][2]*Si23[2][1] + Jc3[5][2]*Si23[2][2] + A2E1*Jc3[1][2]*Si23[3][1] + A2E1*Jc3[2][2]*Si23[3][2]) + A2E1*S32[1][3]*(Jc3[4][4]*Si23[2][1] + Jc3[5][4]*Si23[2][2] + A2E1*Jc3[1][4]*Si23[3][1] + A2E1*Jc3[2][4]*Si23[3][2]) + A2E1*S32[2][3]*(Jc3[4][5]*Si23[2][1] + Jc3[5][5]*Si23[2][2] + A2E1*Jc3[1][5]*Si23[3][1] + A2E1*Jc3[2][5]*Si23[3][2]);
Jc2[5][3]=links[2].inertia[2][3] + S32[1][3]*(Jc3[4][1]*Si23[2][1] + Jc3[5][1]*Si23[2][2] + A2E1*Jc3[1][1]*Si23[3][1] + A2E1*Jc3[2][1]*Si23[3][2]) + S32[2][3]*(Jc3[4][2]*Si23[2][1] + Jc3[5][2]*Si23[2][2] + A2E1*Jc3[1][2]*Si23[3][1] + A2E1*Jc3[2][2]*Si23[3][2]) - A2E1*S32[1][2]*(Jc3[4][4]*Si23[2][1] + Jc3[5][4]*Si23[2][2] + A2E1*Jc3[1][4]*Si23[3][1] + A2E1*Jc3[2][4]*Si23[3][2]) - A2E1*S32[2][2]*(Jc3[4][5]*Si23[2][1] + Jc3[5][5]*Si23[2][2] + A2E1*Jc3[1][5]*Si23[3][1] + A2E1*Jc3[2][5]*Si23[3][2]);
Jc2[5][4]=links[2].mcm[3] - Jc3[4][6]*Si23[2][1] - Jc3[5][6]*Si23[2][2] - A2E1*Jc3[1][6]*Si23[3][1] - A2E1*Jc3[2][6]*Si23[3][2];
Jc2[5][5]=S32[1][2]*(Jc3[4][4]*Si23[2][1] + Jc3[5][4]*Si23[2][2] + A2E1*Jc3[1][4]*Si23[3][1] + A2E1*Jc3[2][4]*Si23[3][2]) + S32[2][2]*(Jc3[4][5]*Si23[2][1] + Jc3[5][5]*Si23[2][2] + A2E1*Jc3[1][5]*Si23[3][1] + A2E1*Jc3[2][5]*Si23[3][2]);
Jc2[5][6]=-links[2].mcm[1] + S32[1][3]*(Jc3[4][4]*Si23[2][1] + Jc3[5][4]*Si23[2][2] + A2E1*Jc3[1][4]*Si23[3][1] + A2E1*Jc3[2][4]*Si23[3][2]) + S32[2][3]*(Jc3[4][5]*Si23[2][1] + Jc3[5][5]*Si23[2][2] + A2E1*Jc3[1][5]*Si23[3][1] + A2E1*Jc3[2][5]*Si23[3][2]);

Jc2[6][1]=links[2].inertia[1][3] + A2E1*Jc3[1][3]*Si23[2][1] + A2E1*Jc3[2][3]*Si23[2][2] - Jc3[4][3]*Si23[3][1] - Jc3[5][3]*Si23[3][2];
Jc2[6][2]=links[2].inertia[2][3] + S32[1][2]*(-(A2E1*Jc3[1][1]*Si23[2][1]) - A2E1*Jc3[2][1]*Si23[2][2] + Jc3[4][1]*Si23[3][1] + Jc3[5][1]*Si23[3][2]) + S32[2][2]*(-(A2E1*Jc3[1][2]*Si23[2][1]) - A2E1*Jc3[2][2]*Si23[2][2] + Jc3[4][2]*Si23[3][1] + Jc3[5][2]*Si23[3][2]) + A2E1*S32[1][3]*(-(A2E1*Jc3[1][4]*Si23[2][1]) - A2E1*Jc3[2][4]*Si23[2][2] + Jc3[4][4]*Si23[3][1] + Jc3[5][4]*Si23[3][2]) + A2E1*S32[2][3]*(-(A2E1*Jc3[1][5]*Si23[2][1]) - A2E1*Jc3[2][5]*Si23[2][2] + Jc3[4][5]*Si23[3][1] + Jc3[5][5]*Si23[3][2]);
Jc2[6][3]=links[2].inertia[3][3] + S32[1][3]*(-(A2E1*Jc3[1][1]*Si23[2][1]) - A2E1*Jc3[2][1]*Si23[2][2] + Jc3[4][1]*Si23[3][1] + Jc3[5][1]*Si23[3][2]) + S32[2][3]*(-(A2E1*Jc3[1][2]*Si23[2][1]) - A2E1*Jc3[2][2]*Si23[2][2] + Jc3[4][2]*Si23[3][1] + Jc3[5][2]*Si23[3][2]) - A2E1*S32[1][2]*(-(A2E1*Jc3[1][4]*Si23[2][1]) - A2E1*Jc3[2][4]*Si23[2][2] + Jc3[4][4]*Si23[3][1] + Jc3[5][4]*Si23[3][2]) - A2E1*S32[2][2]*(-(A2E1*Jc3[1][5]*Si23[2][1]) - A2E1*Jc3[2][5]*Si23[2][2] + Jc3[4][5]*Si23[3][1] + Jc3[5][5]*Si23[3][2]);
Jc2[6][4]=-links[2].mcm[2] + A2E1*Jc3[1][6]*Si23[2][1] + A2E1*Jc3[2][6]*Si23[2][2] - Jc3[4][6]*Si23[3][1] - Jc3[5][6]*Si23[3][2];
Jc2[6][5]=links[2].mcm[1] + S32[1][2]*(-(A2E1*Jc3[1][4]*Si23[2][1]) - A2E1*Jc3[2][4]*Si23[2][2] + Jc3[4][4]*Si23[3][1] + Jc3[5][4]*Si23[3][2]) + S32[2][2]*(-(A2E1*Jc3[1][5]*Si23[2][1]) - A2E1*Jc3[2][5]*Si23[2][2] + Jc3[4][5]*Si23[3][1] + Jc3[5][5]*Si23[3][2]);
Jc2[6][6]=S32[1][3]*(-(A2E1*Jc3[1][4]*Si23[2][1]) - A2E1*Jc3[2][4]*Si23[2][2] + Jc3[4][4]*Si23[3][1] + Jc3[5][4]*Si23[3][2]) + S32[2][3]*(-(A2E1*Jc3[1][5]*Si23[2][1]) - A2E1*Jc3[2][5]*Si23[2][2] + Jc3[4][5]*Si23[3][1] + Jc3[5][5]*Si23[3][2]);



}


void
lbr4func18(void)
      {
/* composite inertia matrices */
Jc1[1][1]=Jc2[3][3] - A1A2*Jc2[3][4]*S21[1][2] - A1A2*Jc2[3][5]*S21[2][2];
Jc1[1][2]=links[1].mcm[3] + A1A2*Jc2[3][6] + Jc2[3][1]*S21[1][2] + Jc2[3][2]*S21[2][2];
Jc1[1][3]=-links[1].mcm[2] + Jc2[3][1]*S21[1][3] + Jc2[3][2]*S21[2][3];
Jc1[1][4]=links[1].m + Jc2[3][6];
Jc1[1][5]=Jc2[3][4]*S21[1][2] + Jc2[3][5]*S21[2][2];
Jc1[1][6]=Jc2[3][4]*S21[1][3] + Jc2[3][5]*S21[2][3];

Jc1[2][1]=-links[1].mcm[3] + Jc2[1][3]*Si12[2][1] + Jc2[2][3]*Si12[2][2] - A1A2*S21[1][2]*(Jc2[1][4]*Si12[2][1] + Jc2[2][4]*Si12[2][2]) - A1A2*S21[2][2]*(Jc2[1][5]*Si12[2][1] + Jc2[2][5]*Si12[2][2]);
Jc1[2][2]=S21[1][2]*(Jc2[1][1]*Si12[2][1] + Jc2[2][1]*Si12[2][2]) + S21[2][2]*(Jc2[1][2]*Si12[2][1] + Jc2[2][2]*Si12[2][2]) + A1A2*(Jc2[1][6]*Si12[2][1] + Jc2[2][6]*Si12[2][2]);
Jc1[2][3]=links[1].mcm[1] + S21[1][3]*(Jc2[1][1]*Si12[2][1] + Jc2[2][1]*Si12[2][2]) + S21[2][3]*(Jc2[1][2]*Si12[2][1] + Jc2[2][2]*Si12[2][2]);
Jc1[2][4]=Jc2[1][6]*Si12[2][1] + Jc2[2][6]*Si12[2][2];
Jc1[2][5]=links[1].m + S21[1][2]*(Jc2[1][4]*Si12[2][1] + Jc2[2][4]*Si12[2][2]) + S21[2][2]*(Jc2[1][5]*Si12[2][1] + Jc2[2][5]*Si12[2][2]);
Jc1[2][6]=S21[1][3]*(Jc2[1][4]*Si12[2][1] + Jc2[2][4]*Si12[2][2]) + S21[2][3]*(Jc2[1][5]*Si12[2][1] + Jc2[2][5]*Si12[2][2]);

Jc1[3][1]=links[1].mcm[2] + Jc2[1][3]*Si12[3][1] + Jc2[2][3]*Si12[3][2] - A1A2*S21[1][2]*(Jc2[1][4]*Si12[3][1] + Jc2[2][4]*Si12[3][2]) - A1A2*S21[2][2]*(Jc2[1][5]*Si12[3][1] + Jc2[2][5]*Si12[3][2]);
Jc1[3][2]=-links[1].mcm[1] + S21[1][2]*(Jc2[1][1]*Si12[3][1] + Jc2[2][1]*Si12[3][2]) + S21[2][2]*(Jc2[1][2]*Si12[3][1] + Jc2[2][2]*Si12[3][2]) + A1A2*(Jc2[1][6]*Si12[3][1] + Jc2[2][6]*Si12[3][2]);
Jc1[3][3]=S21[1][3]*(Jc2[1][1]*Si12[3][1] + Jc2[2][1]*Si12[3][2]) + S21[2][3]*(Jc2[1][2]*Si12[3][1] + Jc2[2][2]*Si12[3][2]);
Jc1[3][4]=Jc2[1][6]*Si12[3][1] + Jc2[2][6]*Si12[3][2];
Jc1[3][5]=S21[1][2]*(Jc2[1][4]*Si12[3][1] + Jc2[2][4]*Si12[3][2]) + S21[2][2]*(Jc2[1][5]*Si12[3][1] + Jc2[2][5]*Si12[3][2]);
Jc1[3][6]=links[1].m + S21[1][3]*(Jc2[1][4]*Si12[3][1] + Jc2[2][4]*Si12[3][2]) + S21[2][3]*(Jc2[1][5]*Si12[3][1] + Jc2[2][5]*Si12[3][2]);

Jc1[4][1]=Jc2[6][3] + links[1].inertia[1][1] - A1A2*Jc2[1][3]*Si12[2][1] - A1A2*Jc2[2][3]*Si12[2][2] - A1A2*S21[1][2]*(Jc2[6][4] - A1A2*Jc2[1][4]*Si12[2][1] - A1A2*Jc2[2][4]*Si12[2][2]) - A1A2*S21[2][2]*(Jc2[6][5] - A1A2*Jc2[1][5]*Si12[2][1] - A1A2*Jc2[2][5]*Si12[2][2]);
Jc1[4][2]=links[1].inertia[1][2] + S21[1][2]*(Jc2[6][1] - A1A2*Jc2[1][1]*Si12[2][1] - A1A2*Jc2[2][1]*Si12[2][2]) + S21[2][2]*(Jc2[6][2] - A1A2*Jc2[1][2]*Si12[2][1] - A1A2*Jc2[2][2]*Si12[2][2]) + A1A2*(Jc2[6][6] - A1A2*Jc2[1][6]*Si12[2][1] - A1A2*Jc2[2][6]*Si12[2][2]);
Jc1[4][3]=links[1].inertia[1][3] + S21[1][3]*(Jc2[6][1] - A1A2*Jc2[1][1]*Si12[2][1] - A1A2*Jc2[2][1]*Si12[2][2]) + S21[2][3]*(Jc2[6][2] - A1A2*Jc2[1][2]*Si12[2][1] - A1A2*Jc2[2][2]*Si12[2][2]);
Jc1[4][4]=Jc2[6][6] - A1A2*Jc2[1][6]*Si12[2][1] - A1A2*Jc2[2][6]*Si12[2][2];
Jc1[4][5]=-links[1].mcm[3] + S21[1][2]*(Jc2[6][4] - A1A2*Jc2[1][4]*Si12[2][1] - A1A2*Jc2[2][4]*Si12[2][2]) + S21[2][2]*(Jc2[6][5] - A1A2*Jc2[1][5]*Si12[2][1] - A1A2*Jc2[2][5]*Si12[2][2]);
Jc1[4][6]=links[1].mcm[2] + S21[1][3]*(Jc2[6][4] - A1A2*Jc2[1][4]*Si12[2][1] - A1A2*Jc2[2][4]*Si12[2][2]) + S21[2][3]*(Jc2[6][5] - A1A2*Jc2[1][5]*Si12[2][1] - A1A2*Jc2[2][5]*Si12[2][2]);

Jc1[5][1]=A1A2*Jc2[3][3] + links[1].inertia[1][2] + Jc2[4][3]*Si12[2][1] + Jc2[5][3]*Si12[2][2] - A1A2*S21[1][2]*(A1A2*Jc2[3][4] + Jc2[4][4]*Si12[2][1] + Jc2[5][4]*Si12[2][2]) - A1A2*S21[2][2]*(A1A2*Jc2[3][5] + Jc2[4][5]*Si12[2][1] + Jc2[5][5]*Si12[2][2]);
Jc1[5][2]=links[1].inertia[2][2] + S21[1][2]*(A1A2*Jc2[3][1] + Jc2[4][1]*Si12[2][1] + Jc2[5][1]*Si12[2][2]) + S21[2][2]*(A1A2*Jc2[3][2] + Jc2[4][2]*Si12[2][1] + Jc2[5][2]*Si12[2][2]) + A1A2*(A1A2*Jc2[3][6] + Jc2[4][6]*Si12[2][1] + Jc2[5][6]*Si12[2][2]);
Jc1[5][3]=links[1].inertia[2][3] + S21[1][3]*(A1A2*Jc2[3][1] + Jc2[4][1]*Si12[2][1] + Jc2[5][1]*Si12[2][2]) + S21[2][3]*(A1A2*Jc2[3][2] + Jc2[4][2]*Si12[2][1] + Jc2[5][2]*Si12[2][2]);
Jc1[5][4]=links[1].mcm[3] + A1A2*Jc2[3][6] + Jc2[4][6]*Si12[2][1] + Jc2[5][6]*Si12[2][2];
Jc1[5][5]=S21[1][2]*(A1A2*Jc2[3][4] + Jc2[4][4]*Si12[2][1] + Jc2[5][4]*Si12[2][2]) + S21[2][2]*(A1A2*Jc2[3][5] + Jc2[4][5]*Si12[2][1] + Jc2[5][5]*Si12[2][2]);
Jc1[5][6]=-links[1].mcm[1] + S21[1][3]*(A1A2*Jc2[3][4] + Jc2[4][4]*Si12[2][1] + Jc2[5][4]*Si12[2][2]) + S21[2][3]*(A1A2*Jc2[3][5] + Jc2[4][5]*Si12[2][1] + Jc2[5][5]*Si12[2][2]);

Jc1[6][1]=links[1].inertia[1][3] + Jc2[4][3]*Si12[3][1] + Jc2[5][3]*Si12[3][2] - A1A2*S21[1][2]*(Jc2[4][4]*Si12[3][1] + Jc2[5][4]*Si12[3][2]) - A1A2*S21[2][2]*(Jc2[4][5]*Si12[3][1] + Jc2[5][5]*Si12[3][2]);
Jc1[6][2]=links[1].inertia[2][3] + S21[1][2]*(Jc2[4][1]*Si12[3][1] + Jc2[5][1]*Si12[3][2]) + S21[2][2]*(Jc2[4][2]*Si12[3][1] + Jc2[5][2]*Si12[3][2]) + A1A2*(Jc2[4][6]*Si12[3][1] + Jc2[5][6]*Si12[3][2]);
Jc1[6][3]=links[1].inertia[3][3] + S21[1][3]*(Jc2[4][1]*Si12[3][1] + Jc2[5][1]*Si12[3][2]) + S21[2][3]*(Jc2[4][2]*Si12[3][1] + Jc2[5][2]*Si12[3][2]);
Jc1[6][4]=-links[1].mcm[2] + Jc2[4][6]*Si12[3][1] + Jc2[5][6]*Si12[3][2];
Jc1[6][5]=links[1].mcm[1] + S21[1][2]*(Jc2[4][4]*Si12[3][1] + Jc2[5][4]*Si12[3][2]) + S21[2][2]*(Jc2[4][5]*Si12[3][1] + Jc2[5][5]*Si12[3][2]);
Jc1[6][6]=S21[1][3]*(Jc2[4][4]*Si12[3][1] + Jc2[5][4]*Si12[3][2]) + S21[2][3]*(Jc2[4][5]*Si12[3][1] + Jc2[5][5]*Si12[3][2]);



}


void
lbr4func19(void)
      {
/* composite inertia matrices */
Jcc0[1][1]=S10[1][1]*(Jc1[1][1]*Si01[1][1] + Jc1[2][1]*Si01[1][2]) + S10[2][1]*(Jc1[1][2]*Si01[1][1] + Jc1[2][2]*Si01[1][2]) - BA1*S10[1][2]*(Jc1[1][4]*Si01[1][1] + Jc1[2][4]*Si01[1][2]) - BA1*S10[2][2]*(Jc1[1][5]*Si01[1][1] + Jc1[2][5]*Si01[1][2]);
Jcc0[1][2]=links[0].mcm[3] + S10[1][2]*(Jc1[1][1]*Si01[1][1] + Jc1[2][1]*Si01[1][2]) + S10[2][2]*(Jc1[1][2]*Si01[1][1] + Jc1[2][2]*Si01[1][2]) + BA1*S10[1][1]*(Jc1[1][4]*Si01[1][1] + Jc1[2][4]*Si01[1][2]) + BA1*S10[2][1]*(Jc1[1][5]*Si01[1][1] + Jc1[2][5]*Si01[1][2]);
Jcc0[1][3]=-links[0].mcm[2] + Jc1[1][3]*Si01[1][1] + Jc1[2][3]*Si01[1][2];
Jcc0[1][4]=links[0].m + S10[1][1]*(Jc1[1][4]*Si01[1][1] + Jc1[2][4]*Si01[1][2]) + S10[2][1]*(Jc1[1][5]*Si01[1][1] + Jc1[2][5]*Si01[1][2]);
Jcc0[1][5]=S10[1][2]*(Jc1[1][4]*Si01[1][1] + Jc1[2][4]*Si01[1][2]) + S10[2][2]*(Jc1[1][5]*Si01[1][1] + Jc1[2][5]*Si01[1][2]);
Jcc0[1][6]=Jc1[1][6]*Si01[1][1] + Jc1[2][6]*Si01[1][2];

Jcc0[2][1]=-links[0].mcm[3] + S10[1][1]*(Jc1[1][1]*Si01[2][1] + Jc1[2][1]*Si01[2][2]) + S10[2][1]*(Jc1[1][2]*Si01[2][1] + Jc1[2][2]*Si01[2][2]) - BA1*S10[1][2]*(Jc1[1][4]*Si01[2][1] + Jc1[2][4]*Si01[2][2]) - BA1*S10[2][2]*(Jc1[1][5]*Si01[2][1] + Jc1[2][5]*Si01[2][2]);
Jcc0[2][2]=S10[1][2]*(Jc1[1][1]*Si01[2][1] + Jc1[2][1]*Si01[2][2]) + S10[2][2]*(Jc1[1][2]*Si01[2][1] + Jc1[2][2]*Si01[2][2]) + BA1*S10[1][1]*(Jc1[1][4]*Si01[2][1] + Jc1[2][4]*Si01[2][2]) + BA1*S10[2][1]*(Jc1[1][5]*Si01[2][1] + Jc1[2][5]*Si01[2][2]);
Jcc0[2][3]=links[0].mcm[1] + Jc1[1][3]*Si01[2][1] + Jc1[2][3]*Si01[2][2];
Jcc0[2][4]=S10[1][1]*(Jc1[1][4]*Si01[2][1] + Jc1[2][4]*Si01[2][2]) + S10[2][1]*(Jc1[1][5]*Si01[2][1] + Jc1[2][5]*Si01[2][2]);
Jcc0[2][5]=links[0].m + S10[1][2]*(Jc1[1][4]*Si01[2][1] + Jc1[2][4]*Si01[2][2]) + S10[2][2]*(Jc1[1][5]*Si01[2][1] + Jc1[2][5]*Si01[2][2]);
Jcc0[2][6]=Jc1[1][6]*Si01[2][1] + Jc1[2][6]*Si01[2][2];

Jcc0[3][1]=links[0].mcm[2] + Jc1[3][1]*S10[1][1] - BA1*Jc1[3][4]*S10[1][2] + Jc1[3][2]*S10[2][1] - BA1*Jc1[3][5]*S10[2][2];
Jcc0[3][2]=-links[0].mcm[1] + BA1*Jc1[3][4]*S10[1][1] + Jc1[3][1]*S10[1][2] + BA1*Jc1[3][5]*S10[2][1] + Jc1[3][2]*S10[2][2];
Jcc0[3][3]=Jc1[3][3];
Jcc0[3][4]=Jc1[3][4]*S10[1][1] + Jc1[3][5]*S10[2][1];
Jcc0[3][5]=Jc1[3][4]*S10[1][2] + Jc1[3][5]*S10[2][2];
Jcc0[3][6]=links[0].m + Jc1[3][6];

Jcc0[4][1]=links[0].inertia[1][1] + S10[1][1]*(Jc1[4][1]*Si01[1][1] + Jc1[5][1]*Si01[1][2] - BA1*Jc1[1][1]*Si01[2][1] - BA1*Jc1[2][1]*Si01[2][2]) + S10[2][1]*(Jc1[4][2]*Si01[1][1] + Jc1[5][2]*Si01[1][2] - BA1*Jc1[1][2]*Si01[2][1] - BA1*Jc1[2][2]*Si01[2][2]) - BA1*S10[1][2]*(Jc1[4][4]*Si01[1][1] + Jc1[5][4]*Si01[1][2] - BA1*Jc1[1][4]*Si01[2][1] - BA1*Jc1[2][4]*Si01[2][2]) - BA1*S10[2][2]*(Jc1[4][5]*Si01[1][1] + Jc1[5][5]*Si01[1][2] - BA1*Jc1[1][5]*Si01[2][1] - BA1*Jc1[2][5]*Si01[2][2]);
Jcc0[4][2]=links[0].inertia[1][2] + S10[1][2]*(Jc1[4][1]*Si01[1][1] + Jc1[5][1]*Si01[1][2] - BA1*Jc1[1][1]*Si01[2][1] - BA1*Jc1[2][1]*Si01[2][2]) + S10[2][2]*(Jc1[4][2]*Si01[1][1] + Jc1[5][2]*Si01[1][2] - BA1*Jc1[1][2]*Si01[2][1] - BA1*Jc1[2][2]*Si01[2][2]) + BA1*S10[1][1]*(Jc1[4][4]*Si01[1][1] + Jc1[5][4]*Si01[1][2] - BA1*Jc1[1][4]*Si01[2][1] - BA1*Jc1[2][4]*Si01[2][2]) + BA1*S10[2][1]*(Jc1[4][5]*Si01[1][1] + Jc1[5][5]*Si01[1][2] - BA1*Jc1[1][5]*Si01[2][1] - BA1*Jc1[2][5]*Si01[2][2]);
Jcc0[4][3]=links[0].inertia[1][3] + Jc1[4][3]*Si01[1][1] + Jc1[5][3]*Si01[1][2] - BA1*Jc1[1][3]*Si01[2][1] - BA1*Jc1[2][3]*Si01[2][2];
Jcc0[4][4]=S10[1][1]*(Jc1[4][4]*Si01[1][1] + Jc1[5][4]*Si01[1][2] - BA1*Jc1[1][4]*Si01[2][1] - BA1*Jc1[2][4]*Si01[2][2]) + S10[2][1]*(Jc1[4][5]*Si01[1][1] + Jc1[5][5]*Si01[1][2] - BA1*Jc1[1][5]*Si01[2][1] - BA1*Jc1[2][5]*Si01[2][2]);
Jcc0[4][5]=-links[0].mcm[3] + S10[1][2]*(Jc1[4][4]*Si01[1][1] + Jc1[5][4]*Si01[1][2] - BA1*Jc1[1][4]*Si01[2][1] - BA1*Jc1[2][4]*Si01[2][2]) + S10[2][2]*(Jc1[4][5]*Si01[1][1] + Jc1[5][5]*Si01[1][2] - BA1*Jc1[1][5]*Si01[2][1] - BA1*Jc1[2][5]*Si01[2][2]);
Jcc0[4][6]=links[0].mcm[2] + Jc1[4][6]*Si01[1][1] + Jc1[5][6]*Si01[1][2] - BA1*Jc1[1][6]*Si01[2][1] - BA1*Jc1[2][6]*Si01[2][2];

Jcc0[5][1]=links[0].inertia[1][2] + S10[1][1]*(BA1*Jc1[1][1]*Si01[1][1] + BA1*Jc1[2][1]*Si01[1][2] + Jc1[4][1]*Si01[2][1] + Jc1[5][1]*Si01[2][2]) + S10[2][1]*(BA1*Jc1[1][2]*Si01[1][1] + BA1*Jc1[2][2]*Si01[1][2] + Jc1[4][2]*Si01[2][1] + Jc1[5][2]*Si01[2][2]) - BA1*S10[1][2]*(BA1*Jc1[1][4]*Si01[1][1] + BA1*Jc1[2][4]*Si01[1][2] + Jc1[4][4]*Si01[2][1] + Jc1[5][4]*Si01[2][2]) - BA1*S10[2][2]*(BA1*Jc1[1][5]*Si01[1][1] + BA1*Jc1[2][5]*Si01[1][2] + Jc1[4][5]*Si01[2][1] + Jc1[5][5]*Si01[2][2]);
Jcc0[5][2]=links[0].inertia[2][2] + S10[1][2]*(BA1*Jc1[1][1]*Si01[1][1] + BA1*Jc1[2][1]*Si01[1][2] + Jc1[4][1]*Si01[2][1] + Jc1[5][1]*Si01[2][2]) + S10[2][2]*(BA1*Jc1[1][2]*Si01[1][1] + BA1*Jc1[2][2]*Si01[1][2] + Jc1[4][2]*Si01[2][1] + Jc1[5][2]*Si01[2][2]) + BA1*S10[1][1]*(BA1*Jc1[1][4]*Si01[1][1] + BA1*Jc1[2][4]*Si01[1][2] + Jc1[4][4]*Si01[2][1] + Jc1[5][4]*Si01[2][2]) + BA1*S10[2][1]*(BA1*Jc1[1][5]*Si01[1][1] + BA1*Jc1[2][5]*Si01[1][2] + Jc1[4][5]*Si01[2][1] + Jc1[5][5]*Si01[2][2]);
Jcc0[5][3]=links[0].inertia[2][3] + BA1*Jc1[1][3]*Si01[1][1] + BA1*Jc1[2][3]*Si01[1][2] + Jc1[4][3]*Si01[2][1] + Jc1[5][3]*Si01[2][2];
Jcc0[5][4]=links[0].mcm[3] + S10[1][1]*(BA1*Jc1[1][4]*Si01[1][1] + BA1*Jc1[2][4]*Si01[1][2] + Jc1[4][4]*Si01[2][1] + Jc1[5][4]*Si01[2][2]) + S10[2][1]*(BA1*Jc1[1][5]*Si01[1][1] + BA1*Jc1[2][5]*Si01[1][2] + Jc1[4][5]*Si01[2][1] + Jc1[5][5]*Si01[2][2]);
Jcc0[5][5]=S10[1][2]*(BA1*Jc1[1][4]*Si01[1][1] + BA1*Jc1[2][4]*Si01[1][2] + Jc1[4][4]*Si01[2][1] + Jc1[5][4]*Si01[2][2]) + S10[2][2]*(BA1*Jc1[1][5]*Si01[1][1] + BA1*Jc1[2][5]*Si01[1][2] + Jc1[4][5]*Si01[2][1] + Jc1[5][5]*Si01[2][2]);
Jcc0[5][6]=-links[0].mcm[1] + BA1*Jc1[1][6]*Si01[1][1] + BA1*Jc1[2][6]*Si01[1][2] + Jc1[4][6]*Si01[2][1] + Jc1[5][6]*Si01[2][2];

Jcc0[6][1]=links[0].inertia[1][3] + Jc1[6][1]*S10[1][1] - BA1*Jc1[6][4]*S10[1][2] + Jc1[6][2]*S10[2][1] - BA1*Jc1[6][5]*S10[2][2];
Jcc0[6][2]=links[0].inertia[2][3] + BA1*Jc1[6][4]*S10[1][1] + Jc1[6][1]*S10[1][2] + BA1*Jc1[6][5]*S10[2][1] + Jc1[6][2]*S10[2][2];
Jcc0[6][3]=Jc1[6][3] + links[0].inertia[3][3];
Jcc0[6][4]=-links[0].mcm[2] + Jc1[6][4]*S10[1][1] + Jc1[6][5]*S10[2][1];
Jcc0[6][5]=links[0].mcm[1] + Jc1[6][4]*S10[1][2] + Jc1[6][5]*S10[2][2];
Jcc0[6][6]=Jc1[6][6];



}


void
lbr4func20(void)
      {
/* composite inertia matrices */
Jc0[1][1]=S00[1][1]*(Jcc0[1][1]*Si00[1][1] + Jcc0[2][1]*Si00[1][2] + Jcc0[3][1]*Si00[1][3]) + S00[2][1]*(Jcc0[1][2]*Si00[1][1] + Jcc0[2][2]*Si00[1][2] + Jcc0[3][2]*Si00[1][3]) + S00[3][1]*(Jcc0[1][3]*Si00[1][1] + Jcc0[2][3]*Si00[1][2] + Jcc0[3][3]*Si00[1][3]);
Jc0[1][2]=S00[1][2]*(Jcc0[1][1]*Si00[1][1] + Jcc0[2][1]*Si00[1][2] + Jcc0[3][1]*Si00[1][3]) + S00[2][2]*(Jcc0[1][2]*Si00[1][1] + Jcc0[2][2]*Si00[1][2] + Jcc0[3][2]*Si00[1][3]) + S00[3][2]*(Jcc0[1][3]*Si00[1][1] + Jcc0[2][3]*Si00[1][2] + Jcc0[3][3]*Si00[1][3]);
Jc0[1][3]=S00[1][3]*(Jcc0[1][1]*Si00[1][1] + Jcc0[2][1]*Si00[1][2] + Jcc0[3][1]*Si00[1][3]) + S00[2][3]*(Jcc0[1][2]*Si00[1][1] + Jcc0[2][2]*Si00[1][2] + Jcc0[3][2]*Si00[1][3]) + S00[3][3]*(Jcc0[1][3]*Si00[1][1] + Jcc0[2][3]*Si00[1][2] + Jcc0[3][3]*Si00[1][3]);
Jc0[1][4]=S00[1][1]*(Jcc0[1][4]*Si00[1][1] + Jcc0[2][4]*Si00[1][2] + Jcc0[3][4]*Si00[1][3]) + S00[2][1]*(Jcc0[1][5]*Si00[1][1] + Jcc0[2][5]*Si00[1][2] + Jcc0[3][5]*Si00[1][3]) + S00[3][1]*(Jcc0[1][6]*Si00[1][1] + Jcc0[2][6]*Si00[1][2] + Jcc0[3][6]*Si00[1][3]);
Jc0[1][5]=S00[1][2]*(Jcc0[1][4]*Si00[1][1] + Jcc0[2][4]*Si00[1][2] + Jcc0[3][4]*Si00[1][3]) + S00[2][2]*(Jcc0[1][5]*Si00[1][1] + Jcc0[2][5]*Si00[1][2] + Jcc0[3][5]*Si00[1][3]) + S00[3][2]*(Jcc0[1][6]*Si00[1][1] + Jcc0[2][6]*Si00[1][2] + Jcc0[3][6]*Si00[1][3]);
Jc0[1][6]=S00[1][3]*(Jcc0[1][4]*Si00[1][1] + Jcc0[2][4]*Si00[1][2] + Jcc0[3][4]*Si00[1][3]) + S00[2][3]*(Jcc0[1][5]*Si00[1][1] + Jcc0[2][5]*Si00[1][2] + Jcc0[3][5]*Si00[1][3]) + S00[3][3]*(Jcc0[1][6]*Si00[1][1] + Jcc0[2][6]*Si00[1][2] + Jcc0[3][6]*Si00[1][3]);

Jc0[2][1]=S00[1][1]*(Jcc0[1][1]*Si00[2][1] + Jcc0[2][1]*Si00[2][2] + Jcc0[3][1]*Si00[2][3]) + S00[2][1]*(Jcc0[1][2]*Si00[2][1] + Jcc0[2][2]*Si00[2][2] + Jcc0[3][2]*Si00[2][3]) + S00[3][1]*(Jcc0[1][3]*Si00[2][1] + Jcc0[2][3]*Si00[2][2] + Jcc0[3][3]*Si00[2][3]);
Jc0[2][2]=S00[1][2]*(Jcc0[1][1]*Si00[2][1] + Jcc0[2][1]*Si00[2][2] + Jcc0[3][1]*Si00[2][3]) + S00[2][2]*(Jcc0[1][2]*Si00[2][1] + Jcc0[2][2]*Si00[2][2] + Jcc0[3][2]*Si00[2][3]) + S00[3][2]*(Jcc0[1][3]*Si00[2][1] + Jcc0[2][3]*Si00[2][2] + Jcc0[3][3]*Si00[2][3]);
Jc0[2][3]=S00[1][3]*(Jcc0[1][1]*Si00[2][1] + Jcc0[2][1]*Si00[2][2] + Jcc0[3][1]*Si00[2][3]) + S00[2][3]*(Jcc0[1][2]*Si00[2][1] + Jcc0[2][2]*Si00[2][2] + Jcc0[3][2]*Si00[2][3]) + S00[3][3]*(Jcc0[1][3]*Si00[2][1] + Jcc0[2][3]*Si00[2][2] + Jcc0[3][3]*Si00[2][3]);
Jc0[2][4]=S00[1][1]*(Jcc0[1][4]*Si00[2][1] + Jcc0[2][4]*Si00[2][2] + Jcc0[3][4]*Si00[2][3]) + S00[2][1]*(Jcc0[1][5]*Si00[2][1] + Jcc0[2][5]*Si00[2][2] + Jcc0[3][5]*Si00[2][3]) + S00[3][1]*(Jcc0[1][6]*Si00[2][1] + Jcc0[2][6]*Si00[2][2] + Jcc0[3][6]*Si00[2][3]);
Jc0[2][5]=S00[1][2]*(Jcc0[1][4]*Si00[2][1] + Jcc0[2][4]*Si00[2][2] + Jcc0[3][4]*Si00[2][3]) + S00[2][2]*(Jcc0[1][5]*Si00[2][1] + Jcc0[2][5]*Si00[2][2] + Jcc0[3][5]*Si00[2][3]) + S00[3][2]*(Jcc0[1][6]*Si00[2][1] + Jcc0[2][6]*Si00[2][2] + Jcc0[3][6]*Si00[2][3]);
Jc0[2][6]=S00[1][3]*(Jcc0[1][4]*Si00[2][1] + Jcc0[2][4]*Si00[2][2] + Jcc0[3][4]*Si00[2][3]) + S00[2][3]*(Jcc0[1][5]*Si00[2][1] + Jcc0[2][5]*Si00[2][2] + Jcc0[3][5]*Si00[2][3]) + S00[3][3]*(Jcc0[1][6]*Si00[2][1] + Jcc0[2][6]*Si00[2][2] + Jcc0[3][6]*Si00[2][3]);

Jc0[3][1]=S00[1][1]*(Jcc0[1][1]*Si00[3][1] + Jcc0[2][1]*Si00[3][2] + Jcc0[3][1]*Si00[3][3]) + S00[2][1]*(Jcc0[1][2]*Si00[3][1] + Jcc0[2][2]*Si00[3][2] + Jcc0[3][2]*Si00[3][3]) + S00[3][1]*(Jcc0[1][3]*Si00[3][1] + Jcc0[2][3]*Si00[3][2] + Jcc0[3][3]*Si00[3][3]);
Jc0[3][2]=S00[1][2]*(Jcc0[1][1]*Si00[3][1] + Jcc0[2][1]*Si00[3][2] + Jcc0[3][1]*Si00[3][3]) + S00[2][2]*(Jcc0[1][2]*Si00[3][1] + Jcc0[2][2]*Si00[3][2] + Jcc0[3][2]*Si00[3][3]) + S00[3][2]*(Jcc0[1][3]*Si00[3][1] + Jcc0[2][3]*Si00[3][2] + Jcc0[3][3]*Si00[3][3]);
Jc0[3][3]=S00[1][3]*(Jcc0[1][1]*Si00[3][1] + Jcc0[2][1]*Si00[3][2] + Jcc0[3][1]*Si00[3][3]) + S00[2][3]*(Jcc0[1][2]*Si00[3][1] + Jcc0[2][2]*Si00[3][2] + Jcc0[3][2]*Si00[3][3]) + S00[3][3]*(Jcc0[1][3]*Si00[3][1] + Jcc0[2][3]*Si00[3][2] + Jcc0[3][3]*Si00[3][3]);
Jc0[3][4]=S00[1][1]*(Jcc0[1][4]*Si00[3][1] + Jcc0[2][4]*Si00[3][2] + Jcc0[3][4]*Si00[3][3]) + S00[2][1]*(Jcc0[1][5]*Si00[3][1] + Jcc0[2][5]*Si00[3][2] + Jcc0[3][5]*Si00[3][3]) + S00[3][1]*(Jcc0[1][6]*Si00[3][1] + Jcc0[2][6]*Si00[3][2] + Jcc0[3][6]*Si00[3][3]);
Jc0[3][5]=S00[1][2]*(Jcc0[1][4]*Si00[3][1] + Jcc0[2][4]*Si00[3][2] + Jcc0[3][4]*Si00[3][3]) + S00[2][2]*(Jcc0[1][5]*Si00[3][1] + Jcc0[2][5]*Si00[3][2] + Jcc0[3][5]*Si00[3][3]) + S00[3][2]*(Jcc0[1][6]*Si00[3][1] + Jcc0[2][6]*Si00[3][2] + Jcc0[3][6]*Si00[3][3]);
Jc0[3][6]=S00[1][3]*(Jcc0[1][4]*Si00[3][1] + Jcc0[2][4]*Si00[3][2] + Jcc0[3][4]*Si00[3][3]) + S00[2][3]*(Jcc0[1][5]*Si00[3][1] + Jcc0[2][5]*Si00[3][2] + Jcc0[3][5]*Si00[3][3]) + S00[3][3]*(Jcc0[1][6]*Si00[3][1] + Jcc0[2][6]*Si00[3][2] + Jcc0[3][6]*Si00[3][3]);

Jc0[4][1]=S00[1][1]*(Jcc0[4][1]*Si00[1][1] + Jcc0[5][1]*Si00[1][2] + Jcc0[6][1]*Si00[1][3]) + S00[2][1]*(Jcc0[4][2]*Si00[1][1] + Jcc0[5][2]*Si00[1][2] + Jcc0[6][2]*Si00[1][3]) + S00[3][1]*(Jcc0[4][3]*Si00[1][1] + Jcc0[5][3]*Si00[1][2] + Jcc0[6][3]*Si00[1][3]);
Jc0[4][2]=S00[1][2]*(Jcc0[4][1]*Si00[1][1] + Jcc0[5][1]*Si00[1][2] + Jcc0[6][1]*Si00[1][3]) + S00[2][2]*(Jcc0[4][2]*Si00[1][1] + Jcc0[5][2]*Si00[1][2] + Jcc0[6][2]*Si00[1][3]) + S00[3][2]*(Jcc0[4][3]*Si00[1][1] + Jcc0[5][3]*Si00[1][2] + Jcc0[6][3]*Si00[1][3]);
Jc0[4][3]=S00[1][3]*(Jcc0[4][1]*Si00[1][1] + Jcc0[5][1]*Si00[1][2] + Jcc0[6][1]*Si00[1][3]) + S00[2][3]*(Jcc0[4][2]*Si00[1][1] + Jcc0[5][2]*Si00[1][2] + Jcc0[6][2]*Si00[1][3]) + S00[3][3]*(Jcc0[4][3]*Si00[1][1] + Jcc0[5][3]*Si00[1][2] + Jcc0[6][3]*Si00[1][3]);
Jc0[4][4]=S00[1][1]*(Jcc0[4][4]*Si00[1][1] + Jcc0[5][4]*Si00[1][2] + Jcc0[6][4]*Si00[1][3]) + S00[2][1]*(Jcc0[4][5]*Si00[1][1] + Jcc0[5][5]*Si00[1][2] + Jcc0[6][5]*Si00[1][3]) + S00[3][1]*(Jcc0[4][6]*Si00[1][1] + Jcc0[5][6]*Si00[1][2] + Jcc0[6][6]*Si00[1][3]);
Jc0[4][5]=S00[1][2]*(Jcc0[4][4]*Si00[1][1] + Jcc0[5][4]*Si00[1][2] + Jcc0[6][4]*Si00[1][3]) + S00[2][2]*(Jcc0[4][5]*Si00[1][1] + Jcc0[5][5]*Si00[1][2] + Jcc0[6][5]*Si00[1][3]) + S00[3][2]*(Jcc0[4][6]*Si00[1][1] + Jcc0[5][6]*Si00[1][2] + Jcc0[6][6]*Si00[1][3]);
Jc0[4][6]=S00[1][3]*(Jcc0[4][4]*Si00[1][1] + Jcc0[5][4]*Si00[1][2] + Jcc0[6][4]*Si00[1][3]) + S00[2][3]*(Jcc0[4][5]*Si00[1][1] + Jcc0[5][5]*Si00[1][2] + Jcc0[6][5]*Si00[1][3]) + S00[3][3]*(Jcc0[4][6]*Si00[1][1] + Jcc0[5][6]*Si00[1][2] + Jcc0[6][6]*Si00[1][3]);

Jc0[5][1]=S00[1][1]*(Jcc0[4][1]*Si00[2][1] + Jcc0[5][1]*Si00[2][2] + Jcc0[6][1]*Si00[2][3]) + S00[2][1]*(Jcc0[4][2]*Si00[2][1] + Jcc0[5][2]*Si00[2][2] + Jcc0[6][2]*Si00[2][3]) + S00[3][1]*(Jcc0[4][3]*Si00[2][1] + Jcc0[5][3]*Si00[2][2] + Jcc0[6][3]*Si00[2][3]);
Jc0[5][2]=S00[1][2]*(Jcc0[4][1]*Si00[2][1] + Jcc0[5][1]*Si00[2][2] + Jcc0[6][1]*Si00[2][3]) + S00[2][2]*(Jcc0[4][2]*Si00[2][1] + Jcc0[5][2]*Si00[2][2] + Jcc0[6][2]*Si00[2][3]) + S00[3][2]*(Jcc0[4][3]*Si00[2][1] + Jcc0[5][3]*Si00[2][2] + Jcc0[6][3]*Si00[2][3]);
Jc0[5][3]=S00[1][3]*(Jcc0[4][1]*Si00[2][1] + Jcc0[5][1]*Si00[2][2] + Jcc0[6][1]*Si00[2][3]) + S00[2][3]*(Jcc0[4][2]*Si00[2][1] + Jcc0[5][2]*Si00[2][2] + Jcc0[6][2]*Si00[2][3]) + S00[3][3]*(Jcc0[4][3]*Si00[2][1] + Jcc0[5][3]*Si00[2][2] + Jcc0[6][3]*Si00[2][3]);
Jc0[5][4]=S00[1][1]*(Jcc0[4][4]*Si00[2][1] + Jcc0[5][4]*Si00[2][2] + Jcc0[6][4]*Si00[2][3]) + S00[2][1]*(Jcc0[4][5]*Si00[2][1] + Jcc0[5][5]*Si00[2][2] + Jcc0[6][5]*Si00[2][3]) + S00[3][1]*(Jcc0[4][6]*Si00[2][1] + Jcc0[5][6]*Si00[2][2] + Jcc0[6][6]*Si00[2][3]);
Jc0[5][5]=S00[1][2]*(Jcc0[4][4]*Si00[2][1] + Jcc0[5][4]*Si00[2][2] + Jcc0[6][4]*Si00[2][3]) + S00[2][2]*(Jcc0[4][5]*Si00[2][1] + Jcc0[5][5]*Si00[2][2] + Jcc0[6][5]*Si00[2][3]) + S00[3][2]*(Jcc0[4][6]*Si00[2][1] + Jcc0[5][6]*Si00[2][2] + Jcc0[6][6]*Si00[2][3]);
Jc0[5][6]=S00[1][3]*(Jcc0[4][4]*Si00[2][1] + Jcc0[5][4]*Si00[2][2] + Jcc0[6][4]*Si00[2][3]) + S00[2][3]*(Jcc0[4][5]*Si00[2][1] + Jcc0[5][5]*Si00[2][2] + Jcc0[6][5]*Si00[2][3]) + S00[3][3]*(Jcc0[4][6]*Si00[2][1] + Jcc0[5][6]*Si00[2][2] + Jcc0[6][6]*Si00[2][3]);

Jc0[6][1]=S00[1][1]*(Jcc0[4][1]*Si00[3][1] + Jcc0[5][1]*Si00[3][2] + Jcc0[6][1]*Si00[3][3]) + S00[2][1]*(Jcc0[4][2]*Si00[3][1] + Jcc0[5][2]*Si00[3][2] + Jcc0[6][2]*Si00[3][3]) + S00[3][1]*(Jcc0[4][3]*Si00[3][1] + Jcc0[5][3]*Si00[3][2] + Jcc0[6][3]*Si00[3][3]);
Jc0[6][2]=S00[1][2]*(Jcc0[4][1]*Si00[3][1] + Jcc0[5][1]*Si00[3][2] + Jcc0[6][1]*Si00[3][3]) + S00[2][2]*(Jcc0[4][2]*Si00[3][1] + Jcc0[5][2]*Si00[3][2] + Jcc0[6][2]*Si00[3][3]) + S00[3][2]*(Jcc0[4][3]*Si00[3][1] + Jcc0[5][3]*Si00[3][2] + Jcc0[6][3]*Si00[3][3]);
Jc0[6][3]=S00[1][3]*(Jcc0[4][1]*Si00[3][1] + Jcc0[5][1]*Si00[3][2] + Jcc0[6][1]*Si00[3][3]) + S00[2][3]*(Jcc0[4][2]*Si00[3][1] + Jcc0[5][2]*Si00[3][2] + Jcc0[6][2]*Si00[3][3]) + S00[3][3]*(Jcc0[4][3]*Si00[3][1] + Jcc0[5][3]*Si00[3][2] + Jcc0[6][3]*Si00[3][3]);
Jc0[6][4]=S00[1][1]*(Jcc0[4][4]*Si00[3][1] + Jcc0[5][4]*Si00[3][2] + Jcc0[6][4]*Si00[3][3]) + S00[2][1]*(Jcc0[4][5]*Si00[3][1] + Jcc0[5][5]*Si00[3][2] + Jcc0[6][5]*Si00[3][3]) + S00[3][1]*(Jcc0[4][6]*Si00[3][1] + Jcc0[5][6]*Si00[3][2] + Jcc0[6][6]*Si00[3][3]);
Jc0[6][5]=S00[1][2]*(Jcc0[4][4]*Si00[3][1] + Jcc0[5][4]*Si00[3][2] + Jcc0[6][4]*Si00[3][3]) + S00[2][2]*(Jcc0[4][5]*Si00[3][1] + Jcc0[5][5]*Si00[3][2] + Jcc0[6][5]*Si00[3][3]) + S00[3][2]*(Jcc0[4][6]*Si00[3][1] + Jcc0[5][6]*Si00[3][2] + Jcc0[6][6]*Si00[3][3]);
Jc0[6][6]=S00[1][3]*(Jcc0[4][4]*Si00[3][1] + Jcc0[5][4]*Si00[3][2] + Jcc0[6][4]*Si00[3][3]) + S00[2][3]*(Jcc0[4][5]*Si00[3][1] + Jcc0[5][5]*Si00[3][2] + Jcc0[6][5]*Si00[3][3]) + S00[3][3]*(Jcc0[4][6]*Si00[3][1] + Jcc0[5][6]*Si00[3][2] + Jcc0[6][6]*Si00[3][3]);



}


void
lbr4func21(void)
      {
/* unit force elements of inertia matrix */

Fu77[1]=Jc7[1][3];
Fu77[2]=Jc7[2][3];
Fu77[3]=Jc7[3][3];
Fu77[4]=Jc7[4][3];
Fu77[5]=Jc7[5][3];
Fu77[6]=Jc7[6][3];

Fu76[1]=-Fu77[3];
Fu76[2]=Fu77[1]*Si67[2][1] + Fu77[2]*Si67[2][2];
Fu76[3]=Fu77[1]*Si67[3][1] + Fu77[2]*Si67[3][2];
Fu76[4]=-Fu77[6];
Fu76[5]=Fu77[4]*Si67[2][1] + Fu77[5]*Si67[2][2] + A5A6*Fu77[1]*Si67[3][1] + A5A6*Fu77[2]*Si67[3][2];
Fu76[6]=-(A5A6*Fu77[1]*Si67[2][1]) - A5A6*Fu77[2]*Si67[2][2] + Fu77[4]*Si67[3][1] + Fu77[5]*Si67[3][2];

Fu75[1]=Fu76[3];
Fu75[2]=Fu76[1]*Si56[2][1] + Fu76[2]*Si56[2][2];
Fu75[3]=Fu76[1]*Si56[3][1] + Fu76[2]*Si56[3][2];
Fu75[4]=Fu76[6] - A4A5*Fu76[1]*Si56[2][1] - A4A5*Fu76[2]*Si56[2][2];
Fu75[5]=A4A5*Fu76[3] + Fu76[4]*Si56[2][1] + Fu76[5]*Si56[2][2];
Fu75[6]=Fu76[4]*Si56[3][1] + Fu76[5]*Si56[3][2];

Fu74[1]=Fu75[3];
Fu74[2]=Fu75[1]*Si45[2][1] + Fu75[2]*Si45[2][2];
Fu74[3]=Fu75[1]*Si45[3][1] + Fu75[2]*Si45[3][2];
Fu74[4]=Fu75[6];
Fu74[5]=Fu75[4]*Si45[2][1] + Fu75[5]*Si45[2][2] - A3A4*Fu75[1]*Si45[3][1] - A3A4*Fu75[2]*Si45[3][2];
Fu74[6]=A3A4*Fu75[1]*Si45[2][1] + A3A4*Fu75[2]*Si45[2][2] + Fu75[4]*Si45[3][1] + Fu75[5]*Si45[3][2];

Fu73[1]=-Fu74[3];
Fu73[2]=Fu74[1]*Si34[2][1] + Fu74[2]*Si34[2][2];
Fu73[3]=Fu74[1]*Si34[3][1] + Fu74[2]*Si34[3][2];
Fu73[4]=-Fu74[6] - E1A3*Fu74[1]*Si34[2][1] - E1A3*Fu74[2]*Si34[2][2];
Fu73[5]=-(E1A3*Fu74[3]) + Fu74[4]*Si34[2][1] + Fu74[5]*Si34[2][2];
Fu73[6]=Fu74[4]*Si34[3][1] + Fu74[5]*Si34[3][2];

Fu72[1]=-Fu73[3];
Fu72[2]=Fu73[1]*Si23[2][1] + Fu73[2]*Si23[2][2];
Fu72[3]=Fu73[1]*Si23[3][1] + Fu73[2]*Si23[3][2];
Fu72[4]=-Fu73[6];
Fu72[5]=Fu73[4]*Si23[2][1] + Fu73[5]*Si23[2][2] + A2E1*Fu73[1]*Si23[3][1] + A2E1*Fu73[2]*Si23[3][2];
Fu72[6]=-(A2E1*Fu73[1]*Si23[2][1]) - A2E1*Fu73[2]*Si23[2][2] + Fu73[4]*Si23[3][1] + Fu73[5]*Si23[3][2];

Fu71[1]=Fu72[3];
Fu71[2]=Fu72[1]*Si12[2][1] + Fu72[2]*Si12[2][2];
Fu71[3]=Fu72[1]*Si12[3][1] + Fu72[2]*Si12[3][2];
Fu71[4]=Fu72[6] - A1A2*Fu72[1]*Si12[2][1] - A1A2*Fu72[2]*Si12[2][2];
Fu71[5]=A1A2*Fu72[3] + Fu72[4]*Si12[2][1] + Fu72[5]*Si12[2][2];
Fu71[6]=Fu72[4]*Si12[3][1] + Fu72[5]*Si12[3][2];


Fu66[1]=Jc6[1][3];
Fu66[2]=Jc6[2][3];
Fu66[3]=Jc6[3][3];
Fu66[4]=Jc6[4][3];
Fu66[5]=Jc6[5][3];
Fu66[6]=Jc6[6][3];

Fu65[1]=Fu66[3];
Fu65[2]=Fu66[1]*Si56[2][1] + Fu66[2]*Si56[2][2];
Fu65[3]=Fu66[1]*Si56[3][1] + Fu66[2]*Si56[3][2];
Fu65[4]=Fu66[6] - A4A5*Fu66[1]*Si56[2][1] - A4A5*Fu66[2]*Si56[2][2];
Fu65[5]=A4A5*Fu66[3] + Fu66[4]*Si56[2][1] + Fu66[5]*Si56[2][2];
Fu65[6]=Fu66[4]*Si56[3][1] + Fu66[5]*Si56[3][2];

Fu64[1]=Fu65[3];
Fu64[2]=Fu65[1]*Si45[2][1] + Fu65[2]*Si45[2][2];
Fu64[3]=Fu65[1]*Si45[3][1] + Fu65[2]*Si45[3][2];
Fu64[4]=Fu65[6];
Fu64[5]=Fu65[4]*Si45[2][1] + Fu65[5]*Si45[2][2] - A3A4*Fu65[1]*Si45[3][1] - A3A4*Fu65[2]*Si45[3][2];
Fu64[6]=A3A4*Fu65[1]*Si45[2][1] + A3A4*Fu65[2]*Si45[2][2] + Fu65[4]*Si45[3][1] + Fu65[5]*Si45[3][2];

Fu63[1]=-Fu64[3];
Fu63[2]=Fu64[1]*Si34[2][1] + Fu64[2]*Si34[2][2];
Fu63[3]=Fu64[1]*Si34[3][1] + Fu64[2]*Si34[3][2];
Fu63[4]=-Fu64[6] - E1A3*Fu64[1]*Si34[2][1] - E1A3*Fu64[2]*Si34[2][2];
Fu63[5]=-(E1A3*Fu64[3]) + Fu64[4]*Si34[2][1] + Fu64[5]*Si34[2][2];
Fu63[6]=Fu64[4]*Si34[3][1] + Fu64[5]*Si34[3][2];

Fu62[1]=-Fu63[3];
Fu62[2]=Fu63[1]*Si23[2][1] + Fu63[2]*Si23[2][2];
Fu62[3]=Fu63[1]*Si23[3][1] + Fu63[2]*Si23[3][2];
Fu62[4]=-Fu63[6];
Fu62[5]=Fu63[4]*Si23[2][1] + Fu63[5]*Si23[2][2] + A2E1*Fu63[1]*Si23[3][1] + A2E1*Fu63[2]*Si23[3][2];
Fu62[6]=-(A2E1*Fu63[1]*Si23[2][1]) - A2E1*Fu63[2]*Si23[2][2] + Fu63[4]*Si23[3][1] + Fu63[5]*Si23[3][2];

Fu61[1]=Fu62[3];
Fu61[2]=Fu62[1]*Si12[2][1] + Fu62[2]*Si12[2][2];
Fu61[3]=Fu62[1]*Si12[3][1] + Fu62[2]*Si12[3][2];
Fu61[4]=Fu62[6] - A1A2*Fu62[1]*Si12[2][1] - A1A2*Fu62[2]*Si12[2][2];
Fu61[5]=A1A2*Fu62[3] + Fu62[4]*Si12[2][1] + Fu62[5]*Si12[2][2];
Fu61[6]=Fu62[4]*Si12[3][1] + Fu62[5]*Si12[3][2];


Fu55[1]=Jc5[1][3];
Fu55[2]=Jc5[2][3];
Fu55[3]=Jc5[3][3];
Fu55[4]=Jc5[4][3];
Fu55[5]=Jc5[5][3];
Fu55[6]=Jc5[6][3];

Fu54[1]=Fu55[3];
Fu54[2]=Fu55[1]*Si45[2][1] + Fu55[2]*Si45[2][2];
Fu54[3]=Fu55[1]*Si45[3][1] + Fu55[2]*Si45[3][2];
Fu54[4]=Fu55[6];
Fu54[5]=Fu55[4]*Si45[2][1] + Fu55[5]*Si45[2][2] - A3A4*Fu55[1]*Si45[3][1] - A3A4*Fu55[2]*Si45[3][2];
Fu54[6]=A3A4*Fu55[1]*Si45[2][1] + A3A4*Fu55[2]*Si45[2][2] + Fu55[4]*Si45[3][1] + Fu55[5]*Si45[3][2];

Fu53[1]=-Fu54[3];
Fu53[2]=Fu54[1]*Si34[2][1] + Fu54[2]*Si34[2][2];
Fu53[3]=Fu54[1]*Si34[3][1] + Fu54[2]*Si34[3][2];
Fu53[4]=-Fu54[6] - E1A3*Fu54[1]*Si34[2][1] - E1A3*Fu54[2]*Si34[2][2];
Fu53[5]=-(E1A3*Fu54[3]) + Fu54[4]*Si34[2][1] + Fu54[5]*Si34[2][2];
Fu53[6]=Fu54[4]*Si34[3][1] + Fu54[5]*Si34[3][2];

Fu52[1]=-Fu53[3];
Fu52[2]=Fu53[1]*Si23[2][1] + Fu53[2]*Si23[2][2];
Fu52[3]=Fu53[1]*Si23[3][1] + Fu53[2]*Si23[3][2];
Fu52[4]=-Fu53[6];
Fu52[5]=Fu53[4]*Si23[2][1] + Fu53[5]*Si23[2][2] + A2E1*Fu53[1]*Si23[3][1] + A2E1*Fu53[2]*Si23[3][2];
Fu52[6]=-(A2E1*Fu53[1]*Si23[2][1]) - A2E1*Fu53[2]*Si23[2][2] + Fu53[4]*Si23[3][1] + Fu53[5]*Si23[3][2];

Fu51[1]=Fu52[3];
Fu51[2]=Fu52[1]*Si12[2][1] + Fu52[2]*Si12[2][2];
Fu51[3]=Fu52[1]*Si12[3][1] + Fu52[2]*Si12[3][2];
Fu51[4]=Fu52[6] - A1A2*Fu52[1]*Si12[2][1] - A1A2*Fu52[2]*Si12[2][2];
Fu51[5]=A1A2*Fu52[3] + Fu52[4]*Si12[2][1] + Fu52[5]*Si12[2][2];
Fu51[6]=Fu52[4]*Si12[3][1] + Fu52[5]*Si12[3][2];


Fu44[1]=Jc4[1][3];
Fu44[2]=Jc4[2][3];
Fu44[3]=Jc4[3][3];
Fu44[4]=Jc4[4][3];
Fu44[5]=Jc4[5][3];
Fu44[6]=Jc4[6][3];

Fu43[1]=-Fu44[3];
Fu43[2]=Fu44[1]*Si34[2][1] + Fu44[2]*Si34[2][2];
Fu43[3]=Fu44[1]*Si34[3][1] + Fu44[2]*Si34[3][2];
Fu43[4]=-Fu44[6] - E1A3*Fu44[1]*Si34[2][1] - E1A3*Fu44[2]*Si34[2][2];
Fu43[5]=-(E1A3*Fu44[3]) + Fu44[4]*Si34[2][1] + Fu44[5]*Si34[2][2];
Fu43[6]=Fu44[4]*Si34[3][1] + Fu44[5]*Si34[3][2];

Fu42[1]=-Fu43[3];
Fu42[2]=Fu43[1]*Si23[2][1] + Fu43[2]*Si23[2][2];
Fu42[3]=Fu43[1]*Si23[3][1] + Fu43[2]*Si23[3][2];
Fu42[4]=-Fu43[6];
Fu42[5]=Fu43[4]*Si23[2][1] + Fu43[5]*Si23[2][2] + A2E1*Fu43[1]*Si23[3][1] + A2E1*Fu43[2]*Si23[3][2];
Fu42[6]=-(A2E1*Fu43[1]*Si23[2][1]) - A2E1*Fu43[2]*Si23[2][2] + Fu43[4]*Si23[3][1] + Fu43[5]*Si23[3][2];

Fu41[1]=Fu42[3];
Fu41[2]=Fu42[1]*Si12[2][1] + Fu42[2]*Si12[2][2];
Fu41[3]=Fu42[1]*Si12[3][1] + Fu42[2]*Si12[3][2];
Fu41[4]=Fu42[6] - A1A2*Fu42[1]*Si12[2][1] - A1A2*Fu42[2]*Si12[2][2];
Fu41[5]=A1A2*Fu42[3] + Fu42[4]*Si12[2][1] + Fu42[5]*Si12[2][2];
Fu41[6]=Fu42[4]*Si12[3][1] + Fu42[5]*Si12[3][2];


Fu33[1]=Jc3[1][3];
Fu33[2]=Jc3[2][3];
Fu33[3]=Jc3[3][3];
Fu33[4]=Jc3[4][3];
Fu33[5]=Jc3[5][3];
Fu33[6]=Jc3[6][3];

Fu32[1]=-Fu33[3];
Fu32[2]=Fu33[1]*Si23[2][1] + Fu33[2]*Si23[2][2];
Fu32[3]=Fu33[1]*Si23[3][1] + Fu33[2]*Si23[3][2];
Fu32[4]=-Fu33[6];
Fu32[5]=Fu33[4]*Si23[2][1] + Fu33[5]*Si23[2][2] + A2E1*Fu33[1]*Si23[3][1] + A2E1*Fu33[2]*Si23[3][2];
Fu32[6]=-(A2E1*Fu33[1]*Si23[2][1]) - A2E1*Fu33[2]*Si23[2][2] + Fu33[4]*Si23[3][1] + Fu33[5]*Si23[3][2];

Fu31[1]=Fu32[3];
Fu31[2]=Fu32[1]*Si12[2][1] + Fu32[2]*Si12[2][2];
Fu31[3]=Fu32[1]*Si12[3][1] + Fu32[2]*Si12[3][2];
Fu31[4]=Fu32[6] - A1A2*Fu32[1]*Si12[2][1] - A1A2*Fu32[2]*Si12[2][2];
Fu31[5]=A1A2*Fu32[3] + Fu32[4]*Si12[2][1] + Fu32[5]*Si12[2][2];
Fu31[6]=Fu32[4]*Si12[3][1] + Fu32[5]*Si12[3][2];


Fu22[1]=Jc2[1][3];
Fu22[2]=Jc2[2][3];
Fu22[3]=Jc2[3][3];
Fu22[4]=Jc2[4][3];
Fu22[5]=Jc2[5][3];
Fu22[6]=Jc2[6][3];

Fu21[1]=Fu22[3];
Fu21[2]=Fu22[1]*Si12[2][1] + Fu22[2]*Si12[2][2];
Fu21[3]=Fu22[1]*Si12[3][1] + Fu22[2]*Si12[3][2];
Fu21[4]=Fu22[6] - A1A2*Fu22[1]*Si12[2][1] - A1A2*Fu22[2]*Si12[2][2];
Fu21[5]=A1A2*Fu22[3] + Fu22[4]*Si12[2][1] + Fu22[5]*Si12[2][2];
Fu21[6]=Fu22[4]*Si12[3][1] + Fu22[5]*Si12[3][2];


Fu11[1]=Jc1[1][3];
Fu11[2]=Jc1[2][3];
Fu11[3]=Jc1[3][3];
Fu11[4]=Jc1[4][3];
Fu11[5]=Jc1[5][3];
Fu11[6]=Jc1[6][3];


/* off-diagonal elements of full inertia matrix */
K[1][1]=Fu11[3]*Si00[1][3] + Si00[1][1]*(Fu11[1]*Si01[1][1] + Fu11[2]*Si01[1][2]) + Si00[1][2]*(Fu11[1]*Si01[2][1] + Fu11[2]*Si01[2][2]);
K[1][2]=Fu11[3]*Si00[2][3] + Si00[2][1]*(Fu11[1]*Si01[1][1] + Fu11[2]*Si01[1][2]) + Si00[2][2]*(Fu11[1]*Si01[2][1] + Fu11[2]*Si01[2][2]);
K[1][3]=Fu11[3]*Si00[3][3] + Si00[3][1]*(Fu11[1]*Si01[1][1] + Fu11[2]*Si01[1][2]) + Si00[3][2]*(Fu11[1]*Si01[2][1] + Fu11[2]*Si01[2][2]);
K[1][4]=Fu11[6]*Si00[1][3] + Si00[1][1]*(Fu11[4]*Si01[1][1] + Fu11[5]*Si01[1][2] - BA1*Fu11[1]*Si01[2][1] - BA1*Fu11[2]*Si01[2][2]) + Si00[1][2]*(BA1*Fu11[1]*Si01[1][1] + BA1*Fu11[2]*Si01[1][2] + Fu11[4]*Si01[2][1] + Fu11[5]*Si01[2][2]);
K[1][5]=Fu11[6]*Si00[2][3] + Si00[2][1]*(Fu11[4]*Si01[1][1] + Fu11[5]*Si01[1][2] - BA1*Fu11[1]*Si01[2][1] - BA1*Fu11[2]*Si01[2][2]) + Si00[2][2]*(BA1*Fu11[1]*Si01[1][1] + BA1*Fu11[2]*Si01[1][2] + Fu11[4]*Si01[2][1] + Fu11[5]*Si01[2][2]);
K[1][6]=Fu11[6]*Si00[3][3] + Si00[3][1]*(Fu11[4]*Si01[1][1] + Fu11[5]*Si01[1][2] - BA1*Fu11[1]*Si01[2][1] - BA1*Fu11[2]*Si01[2][2]) + Si00[3][2]*(BA1*Fu11[1]*Si01[1][1] + BA1*Fu11[2]*Si01[1][2] + Fu11[4]*Si01[2][1] + Fu11[5]*Si01[2][2]);

K[2][1]=Fu21[3]*Si00[1][3] + Si00[1][1]*(Fu21[1]*Si01[1][1] + Fu21[2]*Si01[1][2]) + Si00[1][2]*(Fu21[1]*Si01[2][1] + Fu21[2]*Si01[2][2]);
K[2][2]=Fu21[3]*Si00[2][3] + Si00[2][1]*(Fu21[1]*Si01[1][1] + Fu21[2]*Si01[1][2]) + Si00[2][2]*(Fu21[1]*Si01[2][1] + Fu21[2]*Si01[2][2]);
K[2][3]=Fu21[3]*Si00[3][3] + Si00[3][1]*(Fu21[1]*Si01[1][1] + Fu21[2]*Si01[1][2]) + Si00[3][2]*(Fu21[1]*Si01[2][1] + Fu21[2]*Si01[2][2]);
K[2][4]=Fu21[6]*Si00[1][3] + Si00[1][1]*(Fu21[4]*Si01[1][1] + Fu21[5]*Si01[1][2] - BA1*Fu21[1]*Si01[2][1] - BA1*Fu21[2]*Si01[2][2]) + Si00[1][2]*(BA1*Fu21[1]*Si01[1][1] + BA1*Fu21[2]*Si01[1][2] + Fu21[4]*Si01[2][1] + Fu21[5]*Si01[2][2]);
K[2][5]=Fu21[6]*Si00[2][3] + Si00[2][1]*(Fu21[4]*Si01[1][1] + Fu21[5]*Si01[1][2] - BA1*Fu21[1]*Si01[2][1] - BA1*Fu21[2]*Si01[2][2]) + Si00[2][2]*(BA1*Fu21[1]*Si01[1][1] + BA1*Fu21[2]*Si01[1][2] + Fu21[4]*Si01[2][1] + Fu21[5]*Si01[2][2]);
K[2][6]=Fu21[6]*Si00[3][3] + Si00[3][1]*(Fu21[4]*Si01[1][1] + Fu21[5]*Si01[1][2] - BA1*Fu21[1]*Si01[2][1] - BA1*Fu21[2]*Si01[2][2]) + Si00[3][2]*(BA1*Fu21[1]*Si01[1][1] + BA1*Fu21[2]*Si01[1][2] + Fu21[4]*Si01[2][1] + Fu21[5]*Si01[2][2]);

K[3][1]=Fu31[3]*Si00[1][3] + Si00[1][1]*(Fu31[1]*Si01[1][1] + Fu31[2]*Si01[1][2]) + Si00[1][2]*(Fu31[1]*Si01[2][1] + Fu31[2]*Si01[2][2]);
K[3][2]=Fu31[3]*Si00[2][3] + Si00[2][1]*(Fu31[1]*Si01[1][1] + Fu31[2]*Si01[1][2]) + Si00[2][2]*(Fu31[1]*Si01[2][1] + Fu31[2]*Si01[2][2]);
K[3][3]=Fu31[3]*Si00[3][3] + Si00[3][1]*(Fu31[1]*Si01[1][1] + Fu31[2]*Si01[1][2]) + Si00[3][2]*(Fu31[1]*Si01[2][1] + Fu31[2]*Si01[2][2]);
K[3][4]=Fu31[6]*Si00[1][3] + Si00[1][1]*(Fu31[4]*Si01[1][1] + Fu31[5]*Si01[1][2] - BA1*Fu31[1]*Si01[2][1] - BA1*Fu31[2]*Si01[2][2]) + Si00[1][2]*(BA1*Fu31[1]*Si01[1][1] + BA1*Fu31[2]*Si01[1][2] + Fu31[4]*Si01[2][1] + Fu31[5]*Si01[2][2]);
K[3][5]=Fu31[6]*Si00[2][3] + Si00[2][1]*(Fu31[4]*Si01[1][1] + Fu31[5]*Si01[1][2] - BA1*Fu31[1]*Si01[2][1] - BA1*Fu31[2]*Si01[2][2]) + Si00[2][2]*(BA1*Fu31[1]*Si01[1][1] + BA1*Fu31[2]*Si01[1][2] + Fu31[4]*Si01[2][1] + Fu31[5]*Si01[2][2]);
K[3][6]=Fu31[6]*Si00[3][3] + Si00[3][1]*(Fu31[4]*Si01[1][1] + Fu31[5]*Si01[1][2] - BA1*Fu31[1]*Si01[2][1] - BA1*Fu31[2]*Si01[2][2]) + Si00[3][2]*(BA1*Fu31[1]*Si01[1][1] + BA1*Fu31[2]*Si01[1][2] + Fu31[4]*Si01[2][1] + Fu31[5]*Si01[2][2]);

K[4][1]=Fu41[3]*Si00[1][3] + Si00[1][1]*(Fu41[1]*Si01[1][1] + Fu41[2]*Si01[1][2]) + Si00[1][2]*(Fu41[1]*Si01[2][1] + Fu41[2]*Si01[2][2]);
K[4][2]=Fu41[3]*Si00[2][3] + Si00[2][1]*(Fu41[1]*Si01[1][1] + Fu41[2]*Si01[1][2]) + Si00[2][2]*(Fu41[1]*Si01[2][1] + Fu41[2]*Si01[2][2]);
K[4][3]=Fu41[3]*Si00[3][3] + Si00[3][1]*(Fu41[1]*Si01[1][1] + Fu41[2]*Si01[1][2]) + Si00[3][2]*(Fu41[1]*Si01[2][1] + Fu41[2]*Si01[2][2]);
K[4][4]=Fu41[6]*Si00[1][3] + Si00[1][1]*(Fu41[4]*Si01[1][1] + Fu41[5]*Si01[1][2] - BA1*Fu41[1]*Si01[2][1] - BA1*Fu41[2]*Si01[2][2]) + Si00[1][2]*(BA1*Fu41[1]*Si01[1][1] + BA1*Fu41[2]*Si01[1][2] + Fu41[4]*Si01[2][1] + Fu41[5]*Si01[2][2]);
K[4][5]=Fu41[6]*Si00[2][3] + Si00[2][1]*(Fu41[4]*Si01[1][1] + Fu41[5]*Si01[1][2] - BA1*Fu41[1]*Si01[2][1] - BA1*Fu41[2]*Si01[2][2]) + Si00[2][2]*(BA1*Fu41[1]*Si01[1][1] + BA1*Fu41[2]*Si01[1][2] + Fu41[4]*Si01[2][1] + Fu41[5]*Si01[2][2]);
K[4][6]=Fu41[6]*Si00[3][3] + Si00[3][1]*(Fu41[4]*Si01[1][1] + Fu41[5]*Si01[1][2] - BA1*Fu41[1]*Si01[2][1] - BA1*Fu41[2]*Si01[2][2]) + Si00[3][2]*(BA1*Fu41[1]*Si01[1][1] + BA1*Fu41[2]*Si01[1][2] + Fu41[4]*Si01[2][1] + Fu41[5]*Si01[2][2]);

K[5][1]=Fu51[3]*Si00[1][3] + Si00[1][1]*(Fu51[1]*Si01[1][1] + Fu51[2]*Si01[1][2]) + Si00[1][2]*(Fu51[1]*Si01[2][1] + Fu51[2]*Si01[2][2]);
K[5][2]=Fu51[3]*Si00[2][3] + Si00[2][1]*(Fu51[1]*Si01[1][1] + Fu51[2]*Si01[1][2]) + Si00[2][2]*(Fu51[1]*Si01[2][1] + Fu51[2]*Si01[2][2]);
K[5][3]=Fu51[3]*Si00[3][3] + Si00[3][1]*(Fu51[1]*Si01[1][1] + Fu51[2]*Si01[1][2]) + Si00[3][2]*(Fu51[1]*Si01[2][1] + Fu51[2]*Si01[2][2]);
K[5][4]=Fu51[6]*Si00[1][3] + Si00[1][1]*(Fu51[4]*Si01[1][1] + Fu51[5]*Si01[1][2] - BA1*Fu51[1]*Si01[2][1] - BA1*Fu51[2]*Si01[2][2]) + Si00[1][2]*(BA1*Fu51[1]*Si01[1][1] + BA1*Fu51[2]*Si01[1][2] + Fu51[4]*Si01[2][1] + Fu51[5]*Si01[2][2]);
K[5][5]=Fu51[6]*Si00[2][3] + Si00[2][1]*(Fu51[4]*Si01[1][1] + Fu51[5]*Si01[1][2] - BA1*Fu51[1]*Si01[2][1] - BA1*Fu51[2]*Si01[2][2]) + Si00[2][2]*(BA1*Fu51[1]*Si01[1][1] + BA1*Fu51[2]*Si01[1][2] + Fu51[4]*Si01[2][1] + Fu51[5]*Si01[2][2]);
K[5][6]=Fu51[6]*Si00[3][3] + Si00[3][1]*(Fu51[4]*Si01[1][1] + Fu51[5]*Si01[1][2] - BA1*Fu51[1]*Si01[2][1] - BA1*Fu51[2]*Si01[2][2]) + Si00[3][2]*(BA1*Fu51[1]*Si01[1][1] + BA1*Fu51[2]*Si01[1][2] + Fu51[4]*Si01[2][1] + Fu51[5]*Si01[2][2]);

K[6][1]=Fu61[3]*Si00[1][3] + Si00[1][1]*(Fu61[1]*Si01[1][1] + Fu61[2]*Si01[1][2]) + Si00[1][2]*(Fu61[1]*Si01[2][1] + Fu61[2]*Si01[2][2]);
K[6][2]=Fu61[3]*Si00[2][3] + Si00[2][1]*(Fu61[1]*Si01[1][1] + Fu61[2]*Si01[1][2]) + Si00[2][2]*(Fu61[1]*Si01[2][1] + Fu61[2]*Si01[2][2]);
K[6][3]=Fu61[3]*Si00[3][3] + Si00[3][1]*(Fu61[1]*Si01[1][1] + Fu61[2]*Si01[1][2]) + Si00[3][2]*(Fu61[1]*Si01[2][1] + Fu61[2]*Si01[2][2]);
K[6][4]=Fu61[6]*Si00[1][3] + Si00[1][1]*(Fu61[4]*Si01[1][1] + Fu61[5]*Si01[1][2] - BA1*Fu61[1]*Si01[2][1] - BA1*Fu61[2]*Si01[2][2]) + Si00[1][2]*(BA1*Fu61[1]*Si01[1][1] + BA1*Fu61[2]*Si01[1][2] + Fu61[4]*Si01[2][1] + Fu61[5]*Si01[2][2]);
K[6][5]=Fu61[6]*Si00[2][3] + Si00[2][1]*(Fu61[4]*Si01[1][1] + Fu61[5]*Si01[1][2] - BA1*Fu61[1]*Si01[2][1] - BA1*Fu61[2]*Si01[2][2]) + Si00[2][2]*(BA1*Fu61[1]*Si01[1][1] + BA1*Fu61[2]*Si01[1][2] + Fu61[4]*Si01[2][1] + Fu61[5]*Si01[2][2]);
K[6][6]=Fu61[6]*Si00[3][3] + Si00[3][1]*(Fu61[4]*Si01[1][1] + Fu61[5]*Si01[1][2] - BA1*Fu61[1]*Si01[2][1] - BA1*Fu61[2]*Si01[2][2]) + Si00[3][2]*(BA1*Fu61[1]*Si01[1][1] + BA1*Fu61[2]*Si01[1][2] + Fu61[4]*Si01[2][1] + Fu61[5]*Si01[2][2]);

K[7][1]=Fu71[3]*Si00[1][3] + Si00[1][1]*(Fu71[1]*Si01[1][1] + Fu71[2]*Si01[1][2]) + Si00[1][2]*(Fu71[1]*Si01[2][1] + Fu71[2]*Si01[2][2]);
K[7][2]=Fu71[3]*Si00[2][3] + Si00[2][1]*(Fu71[1]*Si01[1][1] + Fu71[2]*Si01[1][2]) + Si00[2][2]*(Fu71[1]*Si01[2][1] + Fu71[2]*Si01[2][2]);
K[7][3]=Fu71[3]*Si00[3][3] + Si00[3][1]*(Fu71[1]*Si01[1][1] + Fu71[2]*Si01[1][2]) + Si00[3][2]*(Fu71[1]*Si01[2][1] + Fu71[2]*Si01[2][2]);
K[7][4]=Fu71[6]*Si00[1][3] + Si00[1][1]*(Fu71[4]*Si01[1][1] + Fu71[5]*Si01[1][2] - BA1*Fu71[1]*Si01[2][1] - BA1*Fu71[2]*Si01[2][2]) + Si00[1][2]*(BA1*Fu71[1]*Si01[1][1] + BA1*Fu71[2]*Si01[1][2] + Fu71[4]*Si01[2][1] + Fu71[5]*Si01[2][2]);
K[7][5]=Fu71[6]*Si00[2][3] + Si00[2][1]*(Fu71[4]*Si01[1][1] + Fu71[5]*Si01[1][2] - BA1*Fu71[1]*Si01[2][1] - BA1*Fu71[2]*Si01[2][2]) + Si00[2][2]*(BA1*Fu71[1]*Si01[1][1] + BA1*Fu71[2]*Si01[1][2] + Fu71[4]*Si01[2][1] + Fu71[5]*Si01[2][2]);
K[7][6]=Fu71[6]*Si00[3][3] + Si00[3][1]*(Fu71[4]*Si01[1][1] + Fu71[5]*Si01[1][2] - BA1*Fu71[1]*Si01[2][1] - BA1*Fu71[2]*Si01[2][2]) + Si00[3][2]*(BA1*Fu71[1]*Si01[1][1] + BA1*Fu71[2]*Si01[1][2] + Fu71[4]*Si01[2][1] + Fu71[5]*Si01[2][2]);

K[8][1]=0;
K[8][2]=0;
K[8][3]=0;
K[8][4]=0;
K[8][5]=0;
K[8][6]=0;



}


void
lbr4func22(void)
      {
/* elements of inertia matrix */
H[1][1]=Fu11[6];
H[1][2]=0;
H[1][3]=0;
H[1][4]=0;
H[1][5]=0;
H[1][6]=0;
H[1][7]=0;
H[1][8]=0;

H[2][1]=Fu21[6];
H[2][2]=Fu22[6];
H[2][3]=0;
H[2][4]=0;
H[2][5]=0;
H[2][6]=0;
H[2][7]=0;
H[2][8]=0;

H[3][1]=Fu31[6];
H[3][2]=Fu32[6];
H[3][3]=Fu33[6];
H[3][4]=0;
H[3][5]=0;
H[3][6]=0;
H[3][7]=0;
H[3][8]=0;

H[4][1]=Fu41[6];
H[4][2]=Fu42[6];
H[4][3]=Fu43[6];
H[4][4]=Fu44[6];
H[4][5]=0;
H[4][6]=0;
H[4][7]=0;
H[4][8]=0;

H[5][1]=Fu51[6];
H[5][2]=Fu52[6];
H[5][3]=Fu53[6];
H[5][4]=Fu54[6];
H[5][5]=Fu55[6];
H[5][6]=0;
H[5][7]=0;
H[5][8]=0;

H[6][1]=Fu61[6];
H[6][2]=Fu62[6];
H[6][3]=Fu63[6];
H[6][4]=Fu64[6];
H[6][5]=Fu65[6];
H[6][6]=Fu66[6];
H[6][7]=0;
H[6][8]=0;

H[7][1]=Fu71[6];
H[7][2]=Fu72[6];
H[7][3]=Fu73[6];
H[7][4]=Fu74[6];
H[7][5]=Fu75[6];
H[7][6]=Fu76[6];
H[7][7]=Fu77[6];
H[7][8]=0;

H[8][1]=0;
H[8][2]=0;
H[8][3]=0;
H[8][4]=0;
H[8][5]=0;
H[8][6]=0;
H[8][7]=0;
H[8][8]=1;



}

