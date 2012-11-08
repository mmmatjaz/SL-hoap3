
void
hoap3_ForDynArtfunc1(void)
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



S21[1][1]=cstate14th;
S21[1][3]=-sstate14th;

S21[2][1]=-sstate14th;
S21[2][3]=-cstate14th;


S30[1][1]=cstate13th;
S30[1][3]=sstate13th;

S30[2][1]=-sstate13th;
S30[2][3]=cstate13th;


S43[1][1]=-sstate1th;
S43[1][3]=-cstate1th;

S43[2][1]=-cstate1th;
S43[2][3]=sstate1th;


S54[1][1]=-sstate2th;
S54[1][3]=cstate2th;

S54[2][1]=-cstate2th;
S54[2][3]=-sstate2th;


S65[1][1]=cstate3th;
S65[1][3]=sstate3th;

S65[2][1]=-sstate3th;
S65[2][3]=cstate3th;


S76[1][1]=cstate4th;
S76[1][2]=sstate4th;

S76[2][1]=-sstate4th;
S76[2][2]=cstate4th;


S87[1][1]=cstate5th;
S87[1][2]=sstate5th;

S87[2][1]=-sstate5th;
S87[2][2]=cstate5th;


S98[1][1]=cstate6th;
S98[1][3]=-sstate6th;

S98[2][1]=-sstate6th;
S98[2][3]=-cstate6th;






S149[1][1]=rceff1a2*rceff1a3;
S149[1][2]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
S149[1][3]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;

S149[2][1]=-(rceff1a2*rseff1a3);
S149[2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
S149[2][3]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;

S149[3][1]=rseff1a2;
S149[3][2]=-(rceff1a2*rseff1a1);
S149[3][3]=rceff1a1*rceff1a2;


S153[1][1]=-sstate7th;
S153[1][3]=-cstate7th;

S153[2][1]=-cstate7th;
S153[2][3]=sstate7th;


S1615[1][1]=-sstate8th;
S1615[1][3]=cstate8th;

S1615[2][1]=-cstate8th;
S1615[2][3]=-sstate8th;


S1716[1][1]=cstate9th;
S1716[1][3]=sstate9th;

S1716[2][1]=-sstate9th;
S1716[2][3]=cstate9th;


S1817[1][1]=cstate10th;
S1817[1][2]=sstate10th;

S1817[2][1]=-sstate10th;
S1817[2][2]=cstate10th;


S1918[1][1]=cstate11th;
S1918[1][2]=sstate11th;

S1918[2][1]=-sstate11th;
S1918[2][2]=cstate11th;


S2019[1][1]=cstate12th;
S2019[1][3]=-sstate12th;

S2019[2][1]=-sstate12th;
S2019[2][3]=-cstate12th;






S2520[1][1]=rceff2a2*rceff2a3;
S2520[1][2]=rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3;
S2520[1][3]=-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3;

S2520[2][1]=-(rceff2a2*rseff2a3);
S2520[2][2]=rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3;
S2520[2][3]=rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3;

S2520[3][1]=rseff2a2;
S2520[3][2]=-(rceff2a2*rseff2a1);
S2520[3][3]=rceff2a1*rceff2a2;




}


void
hoap3_ForDynArtfunc2(void)
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



Si12[1][1]=cstate14th;
Si12[1][2]=-sstate14th;

Si12[3][1]=-sstate14th;
Si12[3][2]=-cstate14th;


Si03[1][1]=cstate13th;
Si03[1][2]=-sstate13th;

Si03[3][1]=sstate13th;
Si03[3][2]=cstate13th;


Si34[1][1]=-sstate1th;
Si34[1][2]=-cstate1th;

Si34[3][1]=-cstate1th;
Si34[3][2]=sstate1th;


Si45[1][1]=-sstate2th;
Si45[1][2]=-cstate2th;

Si45[3][1]=cstate2th;
Si45[3][2]=-sstate2th;


Si56[1][1]=cstate3th;
Si56[1][2]=-sstate3th;

Si56[3][1]=sstate3th;
Si56[3][2]=cstate3th;


Si67[1][1]=cstate4th;
Si67[1][2]=-sstate4th;

Si67[2][1]=sstate4th;
Si67[2][2]=cstate4th;


Si78[1][1]=cstate5th;
Si78[1][2]=-sstate5th;

Si78[2][1]=sstate5th;
Si78[2][2]=cstate5th;


Si89[1][1]=cstate6th;
Si89[1][2]=-sstate6th;

Si89[3][1]=-sstate6th;
Si89[3][2]=-cstate6th;






Si914[1][1]=rceff1a2*rceff1a3;
Si914[1][2]=-(rceff1a2*rseff1a3);
Si914[1][3]=rseff1a2;

Si914[2][1]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
Si914[2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
Si914[2][3]=-(rceff1a2*rseff1a1);

Si914[3][1]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;
Si914[3][2]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;
Si914[3][3]=rceff1a1*rceff1a2;


Si315[1][1]=-sstate7th;
Si315[1][2]=-cstate7th;

Si315[3][1]=-cstate7th;
Si315[3][2]=sstate7th;


Si1516[1][1]=-sstate8th;
Si1516[1][2]=-cstate8th;

Si1516[3][1]=cstate8th;
Si1516[3][2]=-sstate8th;


Si1617[1][1]=cstate9th;
Si1617[1][2]=-sstate9th;

Si1617[3][1]=sstate9th;
Si1617[3][2]=cstate9th;


Si1718[1][1]=cstate10th;
Si1718[1][2]=-sstate10th;

Si1718[2][1]=sstate10th;
Si1718[2][2]=cstate10th;


Si1819[1][1]=cstate11th;
Si1819[1][2]=-sstate11th;

Si1819[2][1]=sstate11th;
Si1819[2][2]=cstate11th;


Si1920[1][1]=cstate12th;
Si1920[1][2]=-sstate12th;

Si1920[3][1]=-sstate12th;
Si1920[3][2]=-cstate12th;






Si2025[1][1]=rceff2a2*rceff2a3;
Si2025[1][2]=-(rceff2a2*rseff2a3);
Si2025[1][3]=rseff2a2;

Si2025[2][1]=rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3;
Si2025[2][2]=rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3;
Si2025[2][3]=-(rceff2a2*rseff2a1);

Si2025[3][1]=-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3;
Si2025[3][2]=rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3;
Si2025[3][3]=rceff2a1*rceff2a2;




}


void
hoap3_ForDynArtfunc3(void)
     {
/* rotation matrices from global to link coordinates */
SG10[1][1]=S00[1][1];
SG10[1][2]=S00[1][2];
SG10[1][3]=S00[1][3];

SG10[2][1]=S00[2][1];
SG10[2][2]=S00[2][2];
SG10[2][3]=S00[2][3];

SG10[3][1]=S00[3][1];
SG10[3][2]=S00[3][2];
SG10[3][3]=S00[3][3];


SG20[1][1]=S21[1][1]*SG10[1][1] + S21[1][3]*SG10[3][1];
SG20[1][2]=S21[1][1]*SG10[1][2] + S21[1][3]*SG10[3][2];
SG20[1][3]=S21[1][1]*SG10[1][3] + S21[1][3]*SG10[3][3];

SG20[2][1]=S21[2][1]*SG10[1][1] + S21[2][3]*SG10[3][1];
SG20[2][2]=S21[2][1]*SG10[1][2] + S21[2][3]*SG10[3][2];
SG20[2][3]=S21[2][1]*SG10[1][3] + S21[2][3]*SG10[3][3];

SG20[3][1]=SG10[2][1];
SG20[3][2]=SG10[2][2];
SG20[3][3]=SG10[2][3];


SG30[1][1]=S00[1][1]*S30[1][1] + S00[3][1]*S30[1][3];
SG30[1][2]=S00[1][2]*S30[1][1] + S00[3][2]*S30[1][3];
SG30[1][3]=S00[1][3]*S30[1][1] + S00[3][3]*S30[1][3];

SG30[2][1]=S00[1][1]*S30[2][1] + S00[3][1]*S30[2][3];
SG30[2][2]=S00[1][2]*S30[2][1] + S00[3][2]*S30[2][3];
SG30[2][3]=S00[1][3]*S30[2][1] + S00[3][3]*S30[2][3];

SG30[3][1]=-S00[2][1];
SG30[3][2]=-S00[2][2];
SG30[3][3]=-S00[2][3];


SG40[1][1]=S43[1][1]*SG30[1][1] + S43[1][3]*SG30[3][1];
SG40[1][2]=S43[1][1]*SG30[1][2] + S43[1][3]*SG30[3][2];
SG40[1][3]=S43[1][1]*SG30[1][3] + S43[1][3]*SG30[3][3];

SG40[2][1]=S43[2][1]*SG30[1][1] + S43[2][3]*SG30[3][1];
SG40[2][2]=S43[2][1]*SG30[1][2] + S43[2][3]*SG30[3][2];
SG40[2][3]=S43[2][1]*SG30[1][3] + S43[2][3]*SG30[3][3];

SG40[3][1]=SG30[2][1];
SG40[3][2]=SG30[2][2];
SG40[3][3]=SG30[2][3];


SG50[1][1]=S54[1][1]*SG40[1][1] + S54[1][3]*SG40[3][1];
SG50[1][2]=S54[1][1]*SG40[1][2] + S54[1][3]*SG40[3][2];
SG50[1][3]=S54[1][1]*SG40[1][3] + S54[1][3]*SG40[3][3];

SG50[2][1]=S54[2][1]*SG40[1][1] + S54[2][3]*SG40[3][1];
SG50[2][2]=S54[2][1]*SG40[1][2] + S54[2][3]*SG40[3][2];
SG50[2][3]=S54[2][1]*SG40[1][3] + S54[2][3]*SG40[3][3];

SG50[3][1]=-SG40[2][1];
SG50[3][2]=-SG40[2][2];
SG50[3][3]=-SG40[2][3];


SG60[1][1]=S65[1][1]*SG50[1][1] + S65[1][3]*SG50[3][1];
SG60[1][2]=S65[1][1]*SG50[1][2] + S65[1][3]*SG50[3][2];
SG60[1][3]=S65[1][1]*SG50[1][3] + S65[1][3]*SG50[3][3];

SG60[2][1]=S65[2][1]*SG50[1][1] + S65[2][3]*SG50[3][1];
SG60[2][2]=S65[2][1]*SG50[1][2] + S65[2][3]*SG50[3][2];
SG60[2][3]=S65[2][1]*SG50[1][3] + S65[2][3]*SG50[3][3];

SG60[3][1]=-SG50[2][1];
SG60[3][2]=-SG50[2][2];
SG60[3][3]=-SG50[2][3];


SG70[1][1]=S76[1][1]*SG60[1][1] + S76[1][2]*SG60[2][1];
SG70[1][2]=S76[1][1]*SG60[1][2] + S76[1][2]*SG60[2][2];
SG70[1][3]=S76[1][1]*SG60[1][3] + S76[1][2]*SG60[2][3];

SG70[2][1]=S76[2][1]*SG60[1][1] + S76[2][2]*SG60[2][1];
SG70[2][2]=S76[2][1]*SG60[1][2] + S76[2][2]*SG60[2][2];
SG70[2][3]=S76[2][1]*SG60[1][3] + S76[2][2]*SG60[2][3];

SG70[3][1]=SG60[3][1];
SG70[3][2]=SG60[3][2];
SG70[3][3]=SG60[3][3];


SG80[1][1]=S87[1][1]*SG70[1][1] + S87[1][2]*SG70[2][1];
SG80[1][2]=S87[1][1]*SG70[1][2] + S87[1][2]*SG70[2][2];
SG80[1][3]=S87[1][1]*SG70[1][3] + S87[1][2]*SG70[2][3];

SG80[2][1]=S87[2][1]*SG70[1][1] + S87[2][2]*SG70[2][1];
SG80[2][2]=S87[2][1]*SG70[1][2] + S87[2][2]*SG70[2][2];
SG80[2][3]=S87[2][1]*SG70[1][3] + S87[2][2]*SG70[2][3];

SG80[3][1]=SG70[3][1];
SG80[3][2]=SG70[3][2];
SG80[3][3]=SG70[3][3];


SG90[1][1]=S98[1][1]*SG80[1][1] + S98[1][3]*SG80[3][1];
SG90[1][2]=S98[1][1]*SG80[1][2] + S98[1][3]*SG80[3][2];
SG90[1][3]=S98[1][1]*SG80[1][3] + S98[1][3]*SG80[3][3];

SG90[2][1]=S98[2][1]*SG80[1][1] + S98[2][3]*SG80[3][1];
SG90[2][2]=S98[2][1]*SG80[1][2] + S98[2][3]*SG80[3][2];
SG90[2][3]=S98[2][1]*SG80[1][3] + S98[2][3]*SG80[3][3];

SG90[3][1]=SG80[2][1];
SG90[3][2]=SG80[2][2];
SG90[3][3]=SG80[2][3];


SG100[1][1]=SG90[1][1];
SG100[1][2]=SG90[1][2];
SG100[1][3]=SG90[1][3];

SG100[2][1]=SG90[2][1];
SG100[2][2]=SG90[2][2];
SG100[2][3]=SG90[2][3];

SG100[3][1]=SG90[3][1];
SG100[3][2]=SG90[3][2];
SG100[3][3]=SG90[3][3];


SG110[1][1]=SG90[1][1];
SG110[1][2]=SG90[1][2];
SG110[1][3]=SG90[1][3];

SG110[2][1]=SG90[2][1];
SG110[2][2]=SG90[2][2];
SG110[2][3]=SG90[2][3];

SG110[3][1]=SG90[3][1];
SG110[3][2]=SG90[3][2];
SG110[3][3]=SG90[3][3];


SG120[1][1]=SG90[1][1];
SG120[1][2]=SG90[1][2];
SG120[1][3]=SG90[1][3];

SG120[2][1]=SG90[2][1];
SG120[2][2]=SG90[2][2];
SG120[2][3]=SG90[2][3];

SG120[3][1]=SG90[3][1];
SG120[3][2]=SG90[3][2];
SG120[3][3]=SG90[3][3];


SG130[1][1]=SG90[1][1];
SG130[1][2]=SG90[1][2];
SG130[1][3]=SG90[1][3];

SG130[2][1]=SG90[2][1];
SG130[2][2]=SG90[2][2];
SG130[2][3]=SG90[2][3];

SG130[3][1]=SG90[3][1];
SG130[3][2]=SG90[3][2];
SG130[3][3]=SG90[3][3];


SG140[1][1]=S149[1][1]*SG90[1][1] + S149[1][2]*SG90[2][1] + S149[1][3]*SG90[3][1];
SG140[1][2]=S149[1][1]*SG90[1][2] + S149[1][2]*SG90[2][2] + S149[1][3]*SG90[3][2];
SG140[1][3]=S149[1][1]*SG90[1][3] + S149[1][2]*SG90[2][3] + S149[1][3]*SG90[3][3];

SG140[2][1]=S149[2][1]*SG90[1][1] + S149[2][2]*SG90[2][1] + S149[2][3]*SG90[3][1];
SG140[2][2]=S149[2][1]*SG90[1][2] + S149[2][2]*SG90[2][2] + S149[2][3]*SG90[3][2];
SG140[2][3]=S149[2][1]*SG90[1][3] + S149[2][2]*SG90[2][3] + S149[2][3]*SG90[3][3];

SG140[3][1]=S149[3][1]*SG90[1][1] + S149[3][2]*SG90[2][1] + S149[3][3]*SG90[3][1];
SG140[3][2]=S149[3][1]*SG90[1][2] + S149[3][2]*SG90[2][2] + S149[3][3]*SG90[3][2];
SG140[3][3]=S149[3][1]*SG90[1][3] + S149[3][2]*SG90[2][3] + S149[3][3]*SG90[3][3];


SG150[1][1]=S153[1][1]*SG30[1][1] + S153[1][3]*SG30[3][1];
SG150[1][2]=S153[1][1]*SG30[1][2] + S153[1][3]*SG30[3][2];
SG150[1][3]=S153[1][1]*SG30[1][3] + S153[1][3]*SG30[3][3];

SG150[2][1]=S153[2][1]*SG30[1][1] + S153[2][3]*SG30[3][1];
SG150[2][2]=S153[2][1]*SG30[1][2] + S153[2][3]*SG30[3][2];
SG150[2][3]=S153[2][1]*SG30[1][3] + S153[2][3]*SG30[3][3];

SG150[3][1]=SG30[2][1];
SG150[3][2]=SG30[2][2];
SG150[3][3]=SG30[2][3];


SG160[1][1]=S1615[1][1]*SG150[1][1] + S1615[1][3]*SG150[3][1];
SG160[1][2]=S1615[1][1]*SG150[1][2] + S1615[1][3]*SG150[3][2];
SG160[1][3]=S1615[1][1]*SG150[1][3] + S1615[1][3]*SG150[3][3];

SG160[2][1]=S1615[2][1]*SG150[1][1] + S1615[2][3]*SG150[3][1];
SG160[2][2]=S1615[2][1]*SG150[1][2] + S1615[2][3]*SG150[3][2];
SG160[2][3]=S1615[2][1]*SG150[1][3] + S1615[2][3]*SG150[3][3];

SG160[3][1]=-SG150[2][1];
SG160[3][2]=-SG150[2][2];
SG160[3][3]=-SG150[2][3];


SG170[1][1]=S1716[1][1]*SG160[1][1] + S1716[1][3]*SG160[3][1];
SG170[1][2]=S1716[1][1]*SG160[1][2] + S1716[1][3]*SG160[3][2];
SG170[1][3]=S1716[1][1]*SG160[1][3] + S1716[1][3]*SG160[3][3];

SG170[2][1]=S1716[2][1]*SG160[1][1] + S1716[2][3]*SG160[3][1];
SG170[2][2]=S1716[2][1]*SG160[1][2] + S1716[2][3]*SG160[3][2];
SG170[2][3]=S1716[2][1]*SG160[1][3] + S1716[2][3]*SG160[3][3];

SG170[3][1]=-SG160[2][1];
SG170[3][2]=-SG160[2][2];
SG170[3][3]=-SG160[2][3];


SG180[1][1]=S1817[1][1]*SG170[1][1] + S1817[1][2]*SG170[2][1];
SG180[1][2]=S1817[1][1]*SG170[1][2] + S1817[1][2]*SG170[2][2];
SG180[1][3]=S1817[1][1]*SG170[1][3] + S1817[1][2]*SG170[2][3];

SG180[2][1]=S1817[2][1]*SG170[1][1] + S1817[2][2]*SG170[2][1];
SG180[2][2]=S1817[2][1]*SG170[1][2] + S1817[2][2]*SG170[2][2];
SG180[2][3]=S1817[2][1]*SG170[1][3] + S1817[2][2]*SG170[2][3];

SG180[3][1]=SG170[3][1];
SG180[3][2]=SG170[3][2];
SG180[3][3]=SG170[3][3];


SG190[1][1]=S1918[1][1]*SG180[1][1] + S1918[1][2]*SG180[2][1];
SG190[1][2]=S1918[1][1]*SG180[1][2] + S1918[1][2]*SG180[2][2];
SG190[1][3]=S1918[1][1]*SG180[1][3] + S1918[1][2]*SG180[2][3];

SG190[2][1]=S1918[2][1]*SG180[1][1] + S1918[2][2]*SG180[2][1];
SG190[2][2]=S1918[2][1]*SG180[1][2] + S1918[2][2]*SG180[2][2];
SG190[2][3]=S1918[2][1]*SG180[1][3] + S1918[2][2]*SG180[2][3];

SG190[3][1]=SG180[3][1];
SG190[3][2]=SG180[3][2];
SG190[3][3]=SG180[3][3];


SG200[1][1]=S2019[1][1]*SG190[1][1] + S2019[1][3]*SG190[3][1];
SG200[1][2]=S2019[1][1]*SG190[1][2] + S2019[1][3]*SG190[3][2];
SG200[1][3]=S2019[1][1]*SG190[1][3] + S2019[1][3]*SG190[3][3];

SG200[2][1]=S2019[2][1]*SG190[1][1] + S2019[2][3]*SG190[3][1];
SG200[2][2]=S2019[2][1]*SG190[1][2] + S2019[2][3]*SG190[3][2];
SG200[2][3]=S2019[2][1]*SG190[1][3] + S2019[2][3]*SG190[3][3];

SG200[3][1]=SG190[2][1];
SG200[3][2]=SG190[2][2];
SG200[3][3]=SG190[2][3];


SG210[1][1]=SG200[1][1];
SG210[1][2]=SG200[1][2];
SG210[1][3]=SG200[1][3];

SG210[2][1]=SG200[2][1];
SG210[2][2]=SG200[2][2];
SG210[2][3]=SG200[2][3];

SG210[3][1]=SG200[3][1];
SG210[3][2]=SG200[3][2];
SG210[3][3]=SG200[3][3];


SG220[1][1]=SG200[1][1];
SG220[1][2]=SG200[1][2];
SG220[1][3]=SG200[1][3];

SG220[2][1]=SG200[2][1];
SG220[2][2]=SG200[2][2];
SG220[2][3]=SG200[2][3];

SG220[3][1]=SG200[3][1];
SG220[3][2]=SG200[3][2];
SG220[3][3]=SG200[3][3];


SG230[1][1]=SG200[1][1];
SG230[1][2]=SG200[1][2];
SG230[1][3]=SG200[1][3];

SG230[2][1]=SG200[2][1];
SG230[2][2]=SG200[2][2];
SG230[2][3]=SG200[2][3];

SG230[3][1]=SG200[3][1];
SG230[3][2]=SG200[3][2];
SG230[3][3]=SG200[3][3];


SG240[1][1]=SG200[1][1];
SG240[1][2]=SG200[1][2];
SG240[1][3]=SG200[1][3];

SG240[2][1]=SG200[2][1];
SG240[2][2]=SG200[2][2];
SG240[2][3]=SG200[2][3];

SG240[3][1]=SG200[3][1];
SG240[3][2]=SG200[3][2];
SG240[3][3]=SG200[3][3];


SG250[1][1]=S2520[1][1]*SG200[1][1] + S2520[1][2]*SG200[2][1] + S2520[1][3]*SG200[3][1];
SG250[1][2]=S2520[1][1]*SG200[1][2] + S2520[1][2]*SG200[2][2] + S2520[1][3]*SG200[3][2];
SG250[1][3]=S2520[1][1]*SG200[1][3] + S2520[1][2]*SG200[2][3] + S2520[1][3]*SG200[3][3];

SG250[2][1]=S2520[2][1]*SG200[1][1] + S2520[2][2]*SG200[2][1] + S2520[2][3]*SG200[3][1];
SG250[2][2]=S2520[2][1]*SG200[1][2] + S2520[2][2]*SG200[2][2] + S2520[2][3]*SG200[3][2];
SG250[2][3]=S2520[2][1]*SG200[1][3] + S2520[2][2]*SG200[2][3] + S2520[2][3]*SG200[3][3];

SG250[3][1]=S2520[3][1]*SG200[1][1] + S2520[3][2]*SG200[2][1] + S2520[3][3]*SG200[3][1];
SG250[3][2]=S2520[3][1]*SG200[1][2] + S2520[3][2]*SG200[2][2] + S2520[3][3]*SG200[3][2];
SG250[3][3]=S2520[3][1]*SG200[1][3] + S2520[3][2]*SG200[2][3] + S2520[3][3]*SG200[3][3];




}


void
hoap3_ForDynArtfunc4(void)
     {
/* velocity vectors */
v0[1]=baseo[0].ad[1]*S00[1][1] + baseo[0].ad[2]*S00[1][2] + baseo[0].ad[3]*S00[1][3];
v0[2]=baseo[0].ad[1]*S00[2][1] + baseo[0].ad[2]*S00[2][2] + baseo[0].ad[3]*S00[2][3];
v0[3]=baseo[0].ad[1]*S00[3][1] + baseo[0].ad[2]*S00[3][2] + baseo[0].ad[3]*S00[3][3];
v0[4]=basec[0].xd[1]*S00[1][1] + basec[0].xd[2]*S00[1][2] + basec[0].xd[3]*S00[1][3];
v0[5]=basec[0].xd[1]*S00[2][1] + basec[0].xd[2]*S00[2][2] + basec[0].xd[3]*S00[2][3];
v0[6]=basec[0].xd[1]*S00[3][1] + basec[0].xd[2]*S00[3][2] + basec[0].xd[3]*S00[3][3];

v1[1]=v0[1];
v1[2]=v0[2];
v1[3]=v0[3];
v1[4]=BODYLINK1*v0[2] + v0[4];
v1[5]=-(BODYLINK1*v0[1]) + v0[5];
v1[6]=v0[6];

v2[1]=v1[1]*S21[1][1] + v1[3]*S21[1][3];
v2[2]=v1[1]*S21[2][1] + v1[3]*S21[2][3];
v2[3]=state[14].thd + v1[2];
v2[4]=ARMLINK1*v1[3]*S21[1][1] + v1[4]*S21[1][1] - ARMLINK1*v1[1]*S21[1][3] + v1[6]*S21[1][3];
v2[5]=ARMLINK1*v1[3]*S21[2][1] + v1[4]*S21[2][1] - ARMLINK1*v1[1]*S21[2][3] + v1[6]*S21[2][3];
v2[6]=v1[5];

v3[1]=v0[1]*S30[1][1] + v0[3]*S30[1][3];
v3[2]=v0[1]*S30[2][1] + v0[3]*S30[2][3];
v3[3]=state[13].thd - v0[2];
v3[4]=v0[4]*S30[1][1] - BODYLINK2*v0[2]*S30[1][3] + v0[6]*S30[1][3];
v3[5]=v0[4]*S30[2][1] - BODYLINK2*v0[2]*S30[2][3] + v0[6]*S30[2][3];
v3[6]=-(BODYLINK2*v0[3]) - v0[5];

v4[1]=v3[1]*S43[1][1] + v3[3]*S43[1][3];
v4[2]=v3[1]*S43[2][1] + v3[3]*S43[2][3];
v4[3]=state[1].thd + v3[2];
v4[4]=WAISTLINK1*v3[3]*S43[1][1] + v3[4]*S43[1][1] - WAISTLINK1*v3[1]*S43[1][3] + v3[6]*S43[1][3] + v3[2]*(LEGLINK1*S43[1][1] + WAISTLINK2*S43[1][3]);
v4[5]=WAISTLINK1*v3[3]*S43[2][1] + v3[4]*S43[2][1] - WAISTLINK1*v3[1]*S43[2][3] + v3[6]*S43[2][3] + v3[2]*(LEGLINK1*S43[2][1] + WAISTLINK2*S43[2][3]);
v4[6]=-(LEGLINK1*v3[1]) - WAISTLINK2*v3[3] + v3[5];

v5[1]=v4[1]*S54[1][1] + v4[3]*S54[1][3];
v5[2]=v4[1]*S54[2][1] + v4[3]*S54[2][3];
v5[3]=state[2].thd - v4[2];
v5[4]=v4[4]*S54[1][1] + v4[6]*S54[1][3];
v5[5]=v4[4]*S54[2][1] + v4[6]*S54[2][3];
v5[6]=-v4[5];

v6[1]=v5[1]*S65[1][1] + v5[3]*S65[1][3];
v6[2]=v5[1]*S65[2][1] + v5[3]*S65[2][3];
v6[3]=state[3].thd - v5[2];
v6[4]=v5[4]*S65[1][1] + v5[6]*S65[1][3];
v6[5]=v5[4]*S65[2][1] + v5[6]*S65[2][3];
v6[6]=-v5[5];

v7[1]=v6[1]*S76[1][1] + v6[2]*S76[1][2];
v7[2]=v6[1]*S76[2][1] + v6[2]*S76[2][2];
v7[3]=state[4].thd + v6[3];
v7[4]=v6[4]*S76[1][1] - LEGLINK2*v6[3]*S76[1][2] + v6[5]*S76[1][2];
v7[5]=v6[4]*S76[2][1] - LEGLINK2*v6[3]*S76[2][2] + v6[5]*S76[2][2];
v7[6]=LEGLINK2*v6[2] + v6[6];

v8[1]=v7[1]*S87[1][1] + v7[2]*S87[1][2];
v8[2]=v7[1]*S87[2][1] + v7[2]*S87[2][2];
v8[3]=state[5].thd + v7[3];
v8[4]=v7[4]*S87[1][1] - LEGLINK3*v7[3]*S87[1][2] + v7[5]*S87[1][2];
v8[5]=v7[4]*S87[2][1] - LEGLINK3*v7[3]*S87[2][2] + v7[5]*S87[2][2];
v8[6]=LEGLINK3*v7[2] + v7[6];

v9[1]=v8[1]*S98[1][1] + v8[3]*S98[1][3];
v9[2]=v8[1]*S98[2][1] + v8[3]*S98[2][3];
v9[3]=state[6].thd + v8[2];
v9[4]=v8[4]*S98[1][1] + v8[6]*S98[1][3];
v9[5]=v8[4]*S98[2][1] + v8[6]*S98[2][3];
v9[6]=v8[5];

v10[1]=v9[1];
v10[2]=v9[2];
v10[3]=v9[3];
v10[4]=FOOTLLENGLONG*v9[2] - FOOTWIDLONG*v9[3] + v9[4];
v10[5]=-(FOOTLLENGLONG*v9[1]) - LEGLINK4*v9[3] + v9[5];
v10[6]=FOOTWIDLONG*v9[1] + LEGLINK4*v9[2] + v9[6];

v11[1]=v9[1];
v11[2]=v9[2];
v11[3]=v9[3];
v11[4]=FOOTLLENGLONG*v9[2] + FOOTWIDSHORT*v9[3] + v9[4];
v11[5]=-(FOOTLLENGLONG*v9[1]) - LEGLINK4*v9[3] + v9[5];
v11[6]=-(FOOTWIDSHORT*v9[1]) + LEGLINK4*v9[2] + v9[6];

v12[1]=v9[1];
v12[2]=v9[2];
v12[3]=v9[3];
v12[4]=-(FOOTLENGSHORT*v9[2]) + FOOTWIDSHORT*v9[3] + v9[4];
v12[5]=FOOTLENGSHORT*v9[1] - LEGLINK4*v9[3] + v9[5];
v12[6]=-(FOOTWIDSHORT*v9[1]) + LEGLINK4*v9[2] + v9[6];

v13[1]=v9[1];
v13[2]=v9[2];
v13[3]=v9[3];
v13[4]=-(FOOTLENGSHORT*v9[2]) - FOOTWIDLONG*v9[3] + v9[4];
v13[5]=FOOTLENGSHORT*v9[1] - LEGLINK4*v9[3] + v9[5];
v13[6]=FOOTWIDLONG*v9[1] + LEGLINK4*v9[2] + v9[6];

v14[1]=v9[1]*S149[1][1] + v9[2]*S149[1][2] + v9[3]*S149[1][3];
v14[2]=v9[1]*S149[2][1] + v9[2]*S149[2][2] + v9[3]*S149[2][3];
v14[3]=v9[1]*S149[3][1] + v9[2]*S149[3][2] + v9[3]*S149[3][3];
v14[4]=v9[4]*S149[1][1] + v9[5]*S149[1][2] + v9[3]*(-(eff[1].x[2]*S149[1][1]) + eff[1].x[1]*S149[1][2]) + v9[6]*S149[1][3] + v9[2]*(eff[1].x[3]*S149[1][1] - eff[1].x[1]*S149[1][3]) + v9[1]*(-(eff[1].x[3]*S149[1][2]) + eff[1].x[2]*S149[1][3]);
v14[5]=v9[4]*S149[2][1] + v9[5]*S149[2][2] + v9[3]*(-(eff[1].x[2]*S149[2][1]) + eff[1].x[1]*S149[2][2]) + v9[6]*S149[2][3] + v9[2]*(eff[1].x[3]*S149[2][1] - eff[1].x[1]*S149[2][3]) + v9[1]*(-(eff[1].x[3]*S149[2][2]) + eff[1].x[2]*S149[2][3]);
v14[6]=v9[4]*S149[3][1] + v9[5]*S149[3][2] + v9[3]*(-(eff[1].x[2]*S149[3][1]) + eff[1].x[1]*S149[3][2]) + v9[6]*S149[3][3] + v9[2]*(eff[1].x[3]*S149[3][1] - eff[1].x[1]*S149[3][3]) + v9[1]*(-(eff[1].x[3]*S149[3][2]) + eff[1].x[2]*S149[3][3]);

v15[1]=v3[1]*S153[1][1] + v3[3]*S153[1][3];
v15[2]=v3[1]*S153[2][1] + v3[3]*S153[2][3];
v15[3]=state[7].thd + v3[2];
v15[4]=WAISTLINK1*v3[3]*S153[1][1] + v3[4]*S153[1][1] - WAISTLINK1*v3[1]*S153[1][3] + v3[6]*S153[1][3] + v3[2]*(-(LEGLINK1*S153[1][1]) + WAISTLINK2*S153[1][3]);
v15[5]=WAISTLINK1*v3[3]*S153[2][1] + v3[4]*S153[2][1] - WAISTLINK1*v3[1]*S153[2][3] + v3[6]*S153[2][3] + v3[2]*(-(LEGLINK1*S153[2][1]) + WAISTLINK2*S153[2][3]);
v15[6]=LEGLINK1*v3[1] - WAISTLINK2*v3[3] + v3[5];

v16[1]=v15[1]*S1615[1][1] + v15[3]*S1615[1][3];
v16[2]=v15[1]*S1615[2][1] + v15[3]*S1615[2][3];
v16[3]=state[8].thd - v15[2];
v16[4]=v15[4]*S1615[1][1] + v15[6]*S1615[1][3];
v16[5]=v15[4]*S1615[2][1] + v15[6]*S1615[2][3];
v16[6]=-v15[5];

v17[1]=v16[1]*S1716[1][1] + v16[3]*S1716[1][3];
v17[2]=v16[1]*S1716[2][1] + v16[3]*S1716[2][3];
v17[3]=state[9].thd - v16[2];
v17[4]=v16[4]*S1716[1][1] + v16[6]*S1716[1][3];
v17[5]=v16[4]*S1716[2][1] + v16[6]*S1716[2][3];
v17[6]=-v16[5];

v18[1]=v17[1]*S1817[1][1] + v17[2]*S1817[1][2];
v18[2]=v17[1]*S1817[2][1] + v17[2]*S1817[2][2];
v18[3]=state[10].thd + v17[3];
v18[4]=v17[4]*S1817[1][1] - LEGLINK2*v17[3]*S1817[1][2] + v17[5]*S1817[1][2];
v18[5]=v17[4]*S1817[2][1] - LEGLINK2*v17[3]*S1817[2][2] + v17[5]*S1817[2][2];
v18[6]=LEGLINK2*v17[2] + v17[6];

v19[1]=v18[1]*S1918[1][1] + v18[2]*S1918[1][2];
v19[2]=v18[1]*S1918[2][1] + v18[2]*S1918[2][2];
v19[3]=state[11].thd + v18[3];
v19[4]=v18[4]*S1918[1][1] - LEGLINK3*v18[3]*S1918[1][2] + v18[5]*S1918[1][2];
v19[5]=v18[4]*S1918[2][1] - LEGLINK3*v18[3]*S1918[2][2] + v18[5]*S1918[2][2];
v19[6]=LEGLINK3*v18[2] + v18[6];

v20[1]=v19[1]*S2019[1][1] + v19[3]*S2019[1][3];
v20[2]=v19[1]*S2019[2][1] + v19[3]*S2019[2][3];
v20[3]=state[12].thd + v19[2];
v20[4]=v19[4]*S2019[1][1] + v19[6]*S2019[1][3];
v20[5]=v19[4]*S2019[2][1] + v19[6]*S2019[2][3];
v20[6]=v19[5];

v21[1]=v20[1];
v21[2]=v20[2];
v21[3]=v20[3];
v21[4]=FOOTLLENGLONG*v20[2] + FOOTWIDLONG*v20[3] + v20[4];
v21[5]=-(FOOTLLENGLONG*v20[1]) - LEGLINK4*v20[3] + v20[5];
v21[6]=-(FOOTWIDLONG*v20[1]) + LEGLINK4*v20[2] + v20[6];

v22[1]=v20[1];
v22[2]=v20[2];
v22[3]=v20[3];
v22[4]=FOOTLLENGLONG*v20[2] - FOOTWIDSHORT*v20[3] + v20[4];
v22[5]=-(FOOTLLENGLONG*v20[1]) - LEGLINK4*v20[3] + v20[5];
v22[6]=FOOTWIDSHORT*v20[1] + LEGLINK4*v20[2] + v20[6];

v23[1]=v20[1];
v23[2]=v20[2];
v23[3]=v20[3];
v23[4]=-(FOOTLENGSHORT*v20[2]) - FOOTWIDSHORT*v20[3] + v20[4];
v23[5]=FOOTLENGSHORT*v20[1] - LEGLINK4*v20[3] + v20[5];
v23[6]=FOOTWIDSHORT*v20[1] + LEGLINK4*v20[2] + v20[6];

v24[1]=v20[1];
v24[2]=v20[2];
v24[3]=v20[3];
v24[4]=-(FOOTLENGSHORT*v20[2]) + FOOTWIDLONG*v20[3] + v20[4];
v24[5]=FOOTLENGSHORT*v20[1] - LEGLINK4*v20[3] + v20[5];
v24[6]=-(FOOTWIDLONG*v20[1]) + LEGLINK4*v20[2] + v20[6];

v25[1]=v20[1]*S2520[1][1] + v20[2]*S2520[1][2] + v20[3]*S2520[1][3];
v25[2]=v20[1]*S2520[2][1] + v20[2]*S2520[2][2] + v20[3]*S2520[2][3];
v25[3]=v20[1]*S2520[3][1] + v20[2]*S2520[3][2] + v20[3]*S2520[3][3];
v25[4]=v20[4]*S2520[1][1] + v20[5]*S2520[1][2] + v20[3]*(-(eff[2].x[2]*S2520[1][1]) + eff[2].x[1]*S2520[1][2]) + v20[6]*S2520[1][3] + v20[2]*(eff[2].x[3]*S2520[1][1] - eff[2].x[1]*S2520[1][3]) + v20[1]*(-(eff[2].x[3]*S2520[1][2]) + eff[2].x[2]*S2520[1][3]);
v25[5]=v20[4]*S2520[2][1] + v20[5]*S2520[2][2] + v20[3]*(-(eff[2].x[2]*S2520[2][1]) + eff[2].x[1]*S2520[2][2]) + v20[6]*S2520[2][3] + v20[2]*(eff[2].x[3]*S2520[2][1] - eff[2].x[1]*S2520[2][3]) + v20[1]*(-(eff[2].x[3]*S2520[2][2]) + eff[2].x[2]*S2520[2][3]);
v25[6]=v20[4]*S2520[3][1] + v20[5]*S2520[3][2] + v20[3]*(-(eff[2].x[2]*S2520[3][1]) + eff[2].x[1]*S2520[3][2]) + v20[6]*S2520[3][3] + v20[2]*(eff[2].x[3]*S2520[3][1] - eff[2].x[1]*S2520[3][3]) + v20[1]*(-(eff[2].x[3]*S2520[3][2]) + eff[2].x[2]*S2520[3][3]);



}


void
hoap3_ForDynArtfunc5(void)
     {
/* c-misc vectors */
c2[1]=state[14].thd*v2[2];
c2[2]=-(state[14].thd*v2[1]);
c2[4]=state[14].thd*v2[5];
c2[5]=-(state[14].thd*v2[4]);

c3[1]=state[13].thd*v3[2];
c3[2]=-(state[13].thd*v3[1]);
c3[4]=state[13].thd*v3[5];
c3[5]=-(state[13].thd*v3[4]);

c4[1]=state[1].thd*v4[2];
c4[2]=-(state[1].thd*v4[1]);
c4[4]=state[1].thd*v4[5];
c4[5]=-(state[1].thd*v4[4]);

c5[1]=state[2].thd*v5[2];
c5[2]=-(state[2].thd*v5[1]);
c5[4]=state[2].thd*v5[5];
c5[5]=-(state[2].thd*v5[4]);

c6[1]=state[3].thd*v6[2];
c6[2]=-(state[3].thd*v6[1]);
c6[4]=state[3].thd*v6[5];
c6[5]=-(state[3].thd*v6[4]);

c7[1]=state[4].thd*v7[2];
c7[2]=-(state[4].thd*v7[1]);
c7[4]=state[4].thd*v7[5];
c7[5]=-(state[4].thd*v7[4]);

c8[1]=state[5].thd*v8[2];
c8[2]=-(state[5].thd*v8[1]);
c8[4]=state[5].thd*v8[5];
c8[5]=-(state[5].thd*v8[4]);

c9[1]=state[6].thd*v9[2];
c9[2]=-(state[6].thd*v9[1]);
c9[4]=state[6].thd*v9[5];
c9[5]=-(state[6].thd*v9[4]);

c15[1]=state[7].thd*v15[2];
c15[2]=-(state[7].thd*v15[1]);
c15[4]=state[7].thd*v15[5];
c15[5]=-(state[7].thd*v15[4]);

c16[1]=state[8].thd*v16[2];
c16[2]=-(state[8].thd*v16[1]);
c16[4]=state[8].thd*v16[5];
c16[5]=-(state[8].thd*v16[4]);

c17[1]=state[9].thd*v17[2];
c17[2]=-(state[9].thd*v17[1]);
c17[4]=state[9].thd*v17[5];
c17[5]=-(state[9].thd*v17[4]);

c18[1]=state[10].thd*v18[2];
c18[2]=-(state[10].thd*v18[1]);
c18[4]=state[10].thd*v18[5];
c18[5]=-(state[10].thd*v18[4]);

c19[1]=state[11].thd*v19[2];
c19[2]=-(state[11].thd*v19[1]);
c19[4]=state[11].thd*v19[5];
c19[5]=-(state[11].thd*v19[4]);

c20[1]=state[12].thd*v20[2];
c20[2]=-(state[12].thd*v20[1]);
c20[4]=state[12].thd*v20[5];
c20[5]=-(state[12].thd*v20[4]);



}


void
hoap3_ForDynArtfunc6(void)
     {
/* pv-misc vectors */
pv0[1]=-(links[0].mcm[1]*Power(v0[2],2)) - links[0].mcm[1]*Power(v0[3],2) + v0[1]*(links[0].mcm[2]*v0[2] + links[0].mcm[3]*v0[3]) - links[0].m*v0[3]*v0[5] + links[0].m*v0[2]*v0[6] - uex[0].f[1]*S00[1][1] - uex[0].f[2]*S00[1][2] + gravity*links[0].m*S00[1][3] - uex[0].f[3]*S00[1][3];
pv0[2]=-(links[0].mcm[2]*Power(v0[1],2)) - links[0].mcm[2]*Power(v0[3],2) + v0[2]*(links[0].mcm[1]*v0[1] + links[0].mcm[3]*v0[3]) + links[0].m*v0[3]*v0[4] - links[0].m*v0[1]*v0[6] - uex[0].f[1]*S00[2][1] - uex[0].f[2]*S00[2][2] + gravity*links[0].m*S00[2][3] - uex[0].f[3]*S00[2][3];
pv0[3]=-(links[0].mcm[3]*Power(v0[1],2)) - links[0].mcm[3]*Power(v0[2],2) + (links[0].mcm[1]*v0[1] + links[0].mcm[2]*v0[2])*v0[3] - links[0].m*v0[2]*v0[4] + links[0].m*v0[1]*v0[5] - uex[0].f[1]*S00[3][1] - uex[0].f[2]*S00[3][2] + gravity*links[0].m*S00[3][3] - uex[0].f[3]*S00[3][3];
pv0[4]=(-(links[0].mcm[2]*v0[2]) - links[0].mcm[3]*v0[3])*v0[4] + (links[0].mcm[1]*v0[3] + links[0].m*v0[5])*v0[6] + v0[5]*(links[0].mcm[1]*v0[2] - links[0].m*v0[6]) + v0[1]*(links[0].mcm[2]*v0[5] + links[0].mcm[3]*v0[6] - v0[3]*links[0].inertia[1][2] + v0[2]*links[0].inertia[1][3]) + v0[2]*(-(links[0].mcm[1]*v0[5]) - v0[3]*links[0].inertia[2][2] + v0[2]*links[0].inertia[2][3]) + v0[3]*(-(links[0].mcm[1]*v0[6]) - v0[3]*links[0].inertia[2][3] + v0[2]*links[0].inertia[3][3]) - uex[0].t[1]*S00[1][1] - uex[0].t[2]*S00[1][2] - uex[0].t[3]*S00[1][3] - gravity*links[0].mcm[3]*S00[2][3] + gravity*links[0].mcm[2]*S00[3][3];
pv0[5]=(-(links[0].mcm[1]*v0[1]) - links[0].mcm[3]*v0[3])*v0[5] + (links[0].mcm[2]*v0[3] - links[0].m*v0[4])*v0[6] + v0[4]*(links[0].mcm[2]*v0[1] + links[0].m*v0[6]) + v0[1]*(-(links[0].mcm[2]*v0[4]) + v0[3]*links[0].inertia[1][1] - v0[1]*links[0].inertia[1][3]) + v0[2]*(links[0].mcm[1]*v0[4] + links[0].mcm[3]*v0[6] + v0[3]*links[0].inertia[1][2] - v0[1]*links[0].inertia[2][3]) + v0[3]*(-(links[0].mcm[2]*v0[6]) + v0[3]*links[0].inertia[1][3] - v0[1]*links[0].inertia[3][3]) + gravity*links[0].mcm[3]*S00[1][3] - uex[0].t[1]*S00[2][1] - uex[0].t[2]*S00[2][2] - uex[0].t[3]*S00[2][3] - gravity*links[0].mcm[1]*S00[3][3];
pv0[6]=(links[0].mcm[3]*v0[2] + links[0].m*v0[4])*v0[5] + v0[4]*(links[0].mcm[3]*v0[1] - links[0].m*v0[5]) + (-(links[0].mcm[1]*v0[1]) - links[0].mcm[2]*v0[2])*v0[6] + v0[1]*(-(links[0].mcm[3]*v0[4]) - v0[2]*links[0].inertia[1][1] + v0[1]*links[0].inertia[1][2]) + v0[2]*(-(links[0].mcm[3]*v0[5]) - v0[2]*links[0].inertia[1][2] + v0[1]*links[0].inertia[2][2]) + v0[3]*(links[0].mcm[1]*v0[4] + links[0].mcm[2]*v0[5] - v0[2]*links[0].inertia[1][3] + v0[1]*links[0].inertia[2][3]) - gravity*links[0].mcm[2]*S00[1][3] + gravity*links[0].mcm[1]*S00[2][3] - uex[0].t[1]*S00[3][1] - uex[0].t[2]*S00[3][2] - uex[0].t[3]*S00[3][3];

pv2[1]=-(links[14].mcm[1]*Power(v2[2],2)) - links[14].mcm[1]*Power(v2[3],2) + v2[1]*(links[14].mcm[2]*v2[2] + links[14].mcm[3]*v2[3]) - links[14].m*v2[3]*v2[5] + links[14].m*v2[2]*v2[6] + gravity*links[14].m*SG20[1][3];
pv2[2]=-(links[14].mcm[2]*Power(v2[1],2)) - links[14].mcm[2]*Power(v2[3],2) + v2[2]*(links[14].mcm[1]*v2[1] + links[14].mcm[3]*v2[3]) + links[14].m*v2[3]*v2[4] - links[14].m*v2[1]*v2[6] + gravity*links[14].m*SG20[2][3];
pv2[3]=-(links[14].mcm[3]*Power(v2[1],2)) - links[14].mcm[3]*Power(v2[2],2) + (links[14].mcm[1]*v2[1] + links[14].mcm[2]*v2[2])*v2[3] - links[14].m*v2[2]*v2[4] + links[14].m*v2[1]*v2[5] + gravity*links[14].m*SG20[3][3];
pv2[4]=(-(links[14].mcm[2]*v2[2]) - links[14].mcm[3]*v2[3])*v2[4] + (links[14].mcm[1]*v2[3] + links[14].m*v2[5])*v2[6] + v2[5]*(links[14].mcm[1]*v2[2] - links[14].m*v2[6]) + v2[1]*(links[14].mcm[2]*v2[5] + links[14].mcm[3]*v2[6] - v2[3]*links[14].inertia[1][2] + v2[2]*links[14].inertia[1][3]) + v2[2]*(-(links[14].mcm[1]*v2[5]) - v2[3]*links[14].inertia[2][2] + v2[2]*links[14].inertia[2][3]) + v2[3]*(-(links[14].mcm[1]*v2[6]) - v2[3]*links[14].inertia[2][3] + v2[2]*links[14].inertia[3][3]) - gravity*links[14].mcm[3]*SG20[2][3] + gravity*links[14].mcm[2]*SG20[3][3];
pv2[5]=(-(links[14].mcm[1]*v2[1]) - links[14].mcm[3]*v2[3])*v2[5] + (links[14].mcm[2]*v2[3] - links[14].m*v2[4])*v2[6] + v2[4]*(links[14].mcm[2]*v2[1] + links[14].m*v2[6]) + v2[1]*(-(links[14].mcm[2]*v2[4]) + v2[3]*links[14].inertia[1][1] - v2[1]*links[14].inertia[1][3]) + v2[2]*(links[14].mcm[1]*v2[4] + links[14].mcm[3]*v2[6] + v2[3]*links[14].inertia[1][2] - v2[1]*links[14].inertia[2][3]) + v2[3]*(-(links[14].mcm[2]*v2[6]) + v2[3]*links[14].inertia[1][3] - v2[1]*links[14].inertia[3][3]) + gravity*links[14].mcm[3]*SG20[1][3] - gravity*links[14].mcm[1]*SG20[3][3];
pv2[6]=(links[14].mcm[3]*v2[2] + links[14].m*v2[4])*v2[5] + v2[4]*(links[14].mcm[3]*v2[1] - links[14].m*v2[5]) + (-(links[14].mcm[1]*v2[1]) - links[14].mcm[2]*v2[2])*v2[6] + v2[1]*(-(links[14].mcm[3]*v2[4]) - v2[2]*links[14].inertia[1][1] + v2[1]*links[14].inertia[1][2]) + v2[2]*(-(links[14].mcm[3]*v2[5]) - v2[2]*links[14].inertia[1][2] + v2[1]*links[14].inertia[2][2]) + v2[3]*(links[14].mcm[1]*v2[4] + links[14].mcm[2]*v2[5] - v2[2]*links[14].inertia[1][3] + v2[1]*links[14].inertia[2][3]) - gravity*links[14].mcm[2]*SG20[1][3] + gravity*links[14].mcm[1]*SG20[2][3];

pv3[1]=-(links[13].mcm[1]*Power(v3[2],2)) - links[13].mcm[1]*Power(v3[3],2) + v3[1]*(links[13].mcm[2]*v3[2] + links[13].mcm[3]*v3[3]) - links[13].m*v3[3]*v3[5] + links[13].m*v3[2]*v3[6] - uex[13].f[1]*SG30[1][1] - uex[13].f[2]*SG30[1][2] + gravity*links[13].m*SG30[1][3] - uex[13].f[3]*SG30[1][3];
pv3[2]=-(links[13].mcm[2]*Power(v3[1],2)) - links[13].mcm[2]*Power(v3[3],2) + v3[2]*(links[13].mcm[1]*v3[1] + links[13].mcm[3]*v3[3]) + links[13].m*v3[3]*v3[4] - links[13].m*v3[1]*v3[6] - uex[13].f[1]*SG30[2][1] - uex[13].f[2]*SG30[2][2] + gravity*links[13].m*SG30[2][3] - uex[13].f[3]*SG30[2][3];
pv3[3]=-(links[13].mcm[3]*Power(v3[1],2)) - links[13].mcm[3]*Power(v3[2],2) + (links[13].mcm[1]*v3[1] + links[13].mcm[2]*v3[2])*v3[3] - links[13].m*v3[2]*v3[4] + links[13].m*v3[1]*v3[5] - uex[13].f[1]*SG30[3][1] - uex[13].f[2]*SG30[3][2] + gravity*links[13].m*SG30[3][3] - uex[13].f[3]*SG30[3][3];
pv3[4]=(-(links[13].mcm[2]*v3[2]) - links[13].mcm[3]*v3[3])*v3[4] + (links[13].mcm[1]*v3[3] + links[13].m*v3[5])*v3[6] + v3[5]*(links[13].mcm[1]*v3[2] - links[13].m*v3[6]) + v3[1]*(links[13].mcm[2]*v3[5] + links[13].mcm[3]*v3[6] - v3[3]*links[13].inertia[1][2] + v3[2]*links[13].inertia[1][3]) + v3[2]*(-(links[13].mcm[1]*v3[5]) - v3[3]*links[13].inertia[2][2] + v3[2]*links[13].inertia[2][3]) + v3[3]*(-(links[13].mcm[1]*v3[6]) - v3[3]*links[13].inertia[2][3] + v3[2]*links[13].inertia[3][3]) - uex[13].t[1]*SG30[1][1] - uex[13].t[2]*SG30[1][2] - uex[13].t[3]*SG30[1][3] - gravity*links[13].mcm[3]*SG30[2][3] + gravity*links[13].mcm[2]*SG30[3][3];
pv3[5]=(-(links[13].mcm[1]*v3[1]) - links[13].mcm[3]*v3[3])*v3[5] + (links[13].mcm[2]*v3[3] - links[13].m*v3[4])*v3[6] + v3[4]*(links[13].mcm[2]*v3[1] + links[13].m*v3[6]) + v3[1]*(-(links[13].mcm[2]*v3[4]) + v3[3]*links[13].inertia[1][1] - v3[1]*links[13].inertia[1][3]) + v3[2]*(links[13].mcm[1]*v3[4] + links[13].mcm[3]*v3[6] + v3[3]*links[13].inertia[1][2] - v3[1]*links[13].inertia[2][3]) + v3[3]*(-(links[13].mcm[2]*v3[6]) + v3[3]*links[13].inertia[1][3] - v3[1]*links[13].inertia[3][3]) + gravity*links[13].mcm[3]*SG30[1][3] - uex[13].t[1]*SG30[2][1] - uex[13].t[2]*SG30[2][2] - uex[13].t[3]*SG30[2][3] - gravity*links[13].mcm[1]*SG30[3][3];
pv3[6]=(links[13].mcm[3]*v3[2] + links[13].m*v3[4])*v3[5] + v3[4]*(links[13].mcm[3]*v3[1] - links[13].m*v3[5]) + (-(links[13].mcm[1]*v3[1]) - links[13].mcm[2]*v3[2])*v3[6] + v3[1]*(-(links[13].mcm[3]*v3[4]) - v3[2]*links[13].inertia[1][1] + v3[1]*links[13].inertia[1][2]) + v3[2]*(-(links[13].mcm[3]*v3[5]) - v3[2]*links[13].inertia[1][2] + v3[1]*links[13].inertia[2][2]) + v3[3]*(links[13].mcm[1]*v3[4] + links[13].mcm[2]*v3[5] - v3[2]*links[13].inertia[1][3] + v3[1]*links[13].inertia[2][3]) - gravity*links[13].mcm[2]*SG30[1][3] + gravity*links[13].mcm[1]*SG30[2][3] - uex[13].t[1]*SG30[3][1] - uex[13].t[2]*SG30[3][2] - uex[13].t[3]*SG30[3][3];

pv4[1]=-(links[1].mcm[1]*Power(v4[2],2)) - links[1].mcm[1]*Power(v4[3],2) + v4[1]*(links[1].mcm[2]*v4[2] + links[1].mcm[3]*v4[3]) - links[1].m*v4[3]*v4[5] + links[1].m*v4[2]*v4[6] - uex[1].f[1]*SG40[1][1] - uex[1].f[2]*SG40[1][2] + gravity*links[1].m*SG40[1][3] - uex[1].f[3]*SG40[1][3];
pv4[2]=-(links[1].mcm[2]*Power(v4[1],2)) - links[1].mcm[2]*Power(v4[3],2) + v4[2]*(links[1].mcm[1]*v4[1] + links[1].mcm[3]*v4[3]) + links[1].m*v4[3]*v4[4] - links[1].m*v4[1]*v4[6] - uex[1].f[1]*SG40[2][1] - uex[1].f[2]*SG40[2][2] + gravity*links[1].m*SG40[2][3] - uex[1].f[3]*SG40[2][3];
pv4[3]=-(links[1].mcm[3]*Power(v4[1],2)) - links[1].mcm[3]*Power(v4[2],2) + (links[1].mcm[1]*v4[1] + links[1].mcm[2]*v4[2])*v4[3] - links[1].m*v4[2]*v4[4] + links[1].m*v4[1]*v4[5] - uex[1].f[1]*SG40[3][1] - uex[1].f[2]*SG40[3][2] + gravity*links[1].m*SG40[3][3] - uex[1].f[3]*SG40[3][3];
pv4[4]=(-(links[1].mcm[2]*v4[2]) - links[1].mcm[3]*v4[3])*v4[4] + (links[1].mcm[1]*v4[3] + links[1].m*v4[5])*v4[6] + v4[5]*(links[1].mcm[1]*v4[2] - links[1].m*v4[6]) + v4[1]*(links[1].mcm[2]*v4[5] + links[1].mcm[3]*v4[6] - v4[3]*links[1].inertia[1][2] + v4[2]*links[1].inertia[1][3]) + v4[2]*(-(links[1].mcm[1]*v4[5]) - v4[3]*links[1].inertia[2][2] + v4[2]*links[1].inertia[2][3]) + v4[3]*(-(links[1].mcm[1]*v4[6]) - v4[3]*links[1].inertia[2][3] + v4[2]*links[1].inertia[3][3]) - uex[1].t[1]*SG40[1][1] - uex[1].t[2]*SG40[1][2] - uex[1].t[3]*SG40[1][3] - gravity*links[1].mcm[3]*SG40[2][3] + gravity*links[1].mcm[2]*SG40[3][3];
pv4[5]=(-(links[1].mcm[1]*v4[1]) - links[1].mcm[3]*v4[3])*v4[5] + (links[1].mcm[2]*v4[3] - links[1].m*v4[4])*v4[6] + v4[4]*(links[1].mcm[2]*v4[1] + links[1].m*v4[6]) + v4[1]*(-(links[1].mcm[2]*v4[4]) + v4[3]*links[1].inertia[1][1] - v4[1]*links[1].inertia[1][3]) + v4[2]*(links[1].mcm[1]*v4[4] + links[1].mcm[3]*v4[6] + v4[3]*links[1].inertia[1][2] - v4[1]*links[1].inertia[2][3]) + v4[3]*(-(links[1].mcm[2]*v4[6]) + v4[3]*links[1].inertia[1][3] - v4[1]*links[1].inertia[3][3]) + gravity*links[1].mcm[3]*SG40[1][3] - uex[1].t[1]*SG40[2][1] - uex[1].t[2]*SG40[2][2] - uex[1].t[3]*SG40[2][3] - gravity*links[1].mcm[1]*SG40[3][3];
pv4[6]=(links[1].mcm[3]*v4[2] + links[1].m*v4[4])*v4[5] + v4[4]*(links[1].mcm[3]*v4[1] - links[1].m*v4[5]) + (-(links[1].mcm[1]*v4[1]) - links[1].mcm[2]*v4[2])*v4[6] + v4[1]*(-(links[1].mcm[3]*v4[4]) - v4[2]*links[1].inertia[1][1] + v4[1]*links[1].inertia[1][2]) + v4[2]*(-(links[1].mcm[3]*v4[5]) - v4[2]*links[1].inertia[1][2] + v4[1]*links[1].inertia[2][2]) + v4[3]*(links[1].mcm[1]*v4[4] + links[1].mcm[2]*v4[5] - v4[2]*links[1].inertia[1][3] + v4[1]*links[1].inertia[2][3]) - gravity*links[1].mcm[2]*SG40[1][3] + gravity*links[1].mcm[1]*SG40[2][3] - uex[1].t[1]*SG40[3][1] - uex[1].t[2]*SG40[3][2] - uex[1].t[3]*SG40[3][3];

pv5[1]=-(links[2].mcm[1]*Power(v5[2],2)) - links[2].mcm[1]*Power(v5[3],2) + v5[1]*(links[2].mcm[2]*v5[2] + links[2].mcm[3]*v5[3]) - links[2].m*v5[3]*v5[5] + links[2].m*v5[2]*v5[6] - uex[2].f[1]*SG50[1][1] - uex[2].f[2]*SG50[1][2] + gravity*links[2].m*SG50[1][3] - uex[2].f[3]*SG50[1][3];
pv5[2]=-(links[2].mcm[2]*Power(v5[1],2)) - links[2].mcm[2]*Power(v5[3],2) + v5[2]*(links[2].mcm[1]*v5[1] + links[2].mcm[3]*v5[3]) + links[2].m*v5[3]*v5[4] - links[2].m*v5[1]*v5[6] - uex[2].f[1]*SG50[2][1] - uex[2].f[2]*SG50[2][2] + gravity*links[2].m*SG50[2][3] - uex[2].f[3]*SG50[2][3];
pv5[3]=-(links[2].mcm[3]*Power(v5[1],2)) - links[2].mcm[3]*Power(v5[2],2) + (links[2].mcm[1]*v5[1] + links[2].mcm[2]*v5[2])*v5[3] - links[2].m*v5[2]*v5[4] + links[2].m*v5[1]*v5[5] - uex[2].f[1]*SG50[3][1] - uex[2].f[2]*SG50[3][2] + gravity*links[2].m*SG50[3][3] - uex[2].f[3]*SG50[3][3];
pv5[4]=(-(links[2].mcm[2]*v5[2]) - links[2].mcm[3]*v5[3])*v5[4] + (links[2].mcm[1]*v5[3] + links[2].m*v5[5])*v5[6] + v5[5]*(links[2].mcm[1]*v5[2] - links[2].m*v5[6]) + v5[1]*(links[2].mcm[2]*v5[5] + links[2].mcm[3]*v5[6] - v5[3]*links[2].inertia[1][2] + v5[2]*links[2].inertia[1][3]) + v5[2]*(-(links[2].mcm[1]*v5[5]) - v5[3]*links[2].inertia[2][2] + v5[2]*links[2].inertia[2][3]) + v5[3]*(-(links[2].mcm[1]*v5[6]) - v5[3]*links[2].inertia[2][3] + v5[2]*links[2].inertia[3][3]) - uex[2].t[1]*SG50[1][1] - uex[2].t[2]*SG50[1][2] - uex[2].t[3]*SG50[1][3] - gravity*links[2].mcm[3]*SG50[2][3] + gravity*links[2].mcm[2]*SG50[3][3];
pv5[5]=(-(links[2].mcm[1]*v5[1]) - links[2].mcm[3]*v5[3])*v5[5] + (links[2].mcm[2]*v5[3] - links[2].m*v5[4])*v5[6] + v5[4]*(links[2].mcm[2]*v5[1] + links[2].m*v5[6]) + v5[1]*(-(links[2].mcm[2]*v5[4]) + v5[3]*links[2].inertia[1][1] - v5[1]*links[2].inertia[1][3]) + v5[2]*(links[2].mcm[1]*v5[4] + links[2].mcm[3]*v5[6] + v5[3]*links[2].inertia[1][2] - v5[1]*links[2].inertia[2][3]) + v5[3]*(-(links[2].mcm[2]*v5[6]) + v5[3]*links[2].inertia[1][3] - v5[1]*links[2].inertia[3][3]) + gravity*links[2].mcm[3]*SG50[1][3] - uex[2].t[1]*SG50[2][1] - uex[2].t[2]*SG50[2][2] - uex[2].t[3]*SG50[2][3] - gravity*links[2].mcm[1]*SG50[3][3];
pv5[6]=(links[2].mcm[3]*v5[2] + links[2].m*v5[4])*v5[5] + v5[4]*(links[2].mcm[3]*v5[1] - links[2].m*v5[5]) + (-(links[2].mcm[1]*v5[1]) - links[2].mcm[2]*v5[2])*v5[6] + v5[1]*(-(links[2].mcm[3]*v5[4]) - v5[2]*links[2].inertia[1][1] + v5[1]*links[2].inertia[1][2]) + v5[2]*(-(links[2].mcm[3]*v5[5]) - v5[2]*links[2].inertia[1][2] + v5[1]*links[2].inertia[2][2]) + v5[3]*(links[2].mcm[1]*v5[4] + links[2].mcm[2]*v5[5] - v5[2]*links[2].inertia[1][3] + v5[1]*links[2].inertia[2][3]) - gravity*links[2].mcm[2]*SG50[1][3] + gravity*links[2].mcm[1]*SG50[2][3] - uex[2].t[1]*SG50[3][1] - uex[2].t[2]*SG50[3][2] - uex[2].t[3]*SG50[3][3];

pv6[1]=-(links[3].mcm[1]*Power(v6[2],2)) - links[3].mcm[1]*Power(v6[3],2) + v6[1]*(links[3].mcm[2]*v6[2] + links[3].mcm[3]*v6[3]) - links[3].m*v6[3]*v6[5] + links[3].m*v6[2]*v6[6] - uex[3].f[1]*SG60[1][1] - uex[3].f[2]*SG60[1][2] + gravity*links[3].m*SG60[1][3] - uex[3].f[3]*SG60[1][3];
pv6[2]=-(links[3].mcm[2]*Power(v6[1],2)) - links[3].mcm[2]*Power(v6[3],2) + v6[2]*(links[3].mcm[1]*v6[1] + links[3].mcm[3]*v6[3]) + links[3].m*v6[3]*v6[4] - links[3].m*v6[1]*v6[6] - uex[3].f[1]*SG60[2][1] - uex[3].f[2]*SG60[2][2] + gravity*links[3].m*SG60[2][3] - uex[3].f[3]*SG60[2][3];
pv6[3]=-(links[3].mcm[3]*Power(v6[1],2)) - links[3].mcm[3]*Power(v6[2],2) + (links[3].mcm[1]*v6[1] + links[3].mcm[2]*v6[2])*v6[3] - links[3].m*v6[2]*v6[4] + links[3].m*v6[1]*v6[5] - uex[3].f[1]*SG60[3][1] - uex[3].f[2]*SG60[3][2] + gravity*links[3].m*SG60[3][3] - uex[3].f[3]*SG60[3][3];
pv6[4]=(-(links[3].mcm[2]*v6[2]) - links[3].mcm[3]*v6[3])*v6[4] + (links[3].mcm[1]*v6[3] + links[3].m*v6[5])*v6[6] + v6[5]*(links[3].mcm[1]*v6[2] - links[3].m*v6[6]) + v6[1]*(links[3].mcm[2]*v6[5] + links[3].mcm[3]*v6[6] - v6[3]*links[3].inertia[1][2] + v6[2]*links[3].inertia[1][3]) + v6[2]*(-(links[3].mcm[1]*v6[5]) - v6[3]*links[3].inertia[2][2] + v6[2]*links[3].inertia[2][3]) + v6[3]*(-(links[3].mcm[1]*v6[6]) - v6[3]*links[3].inertia[2][3] + v6[2]*links[3].inertia[3][3]) - uex[3].t[1]*SG60[1][1] - uex[3].t[2]*SG60[1][2] - uex[3].t[3]*SG60[1][3] - gravity*links[3].mcm[3]*SG60[2][3] + gravity*links[3].mcm[2]*SG60[3][3];
pv6[5]=(-(links[3].mcm[1]*v6[1]) - links[3].mcm[3]*v6[3])*v6[5] + (links[3].mcm[2]*v6[3] - links[3].m*v6[4])*v6[6] + v6[4]*(links[3].mcm[2]*v6[1] + links[3].m*v6[6]) + v6[1]*(-(links[3].mcm[2]*v6[4]) + v6[3]*links[3].inertia[1][1] - v6[1]*links[3].inertia[1][3]) + v6[2]*(links[3].mcm[1]*v6[4] + links[3].mcm[3]*v6[6] + v6[3]*links[3].inertia[1][2] - v6[1]*links[3].inertia[2][3]) + v6[3]*(-(links[3].mcm[2]*v6[6]) + v6[3]*links[3].inertia[1][3] - v6[1]*links[3].inertia[3][3]) + gravity*links[3].mcm[3]*SG60[1][3] - uex[3].t[1]*SG60[2][1] - uex[3].t[2]*SG60[2][2] - uex[3].t[3]*SG60[2][3] - gravity*links[3].mcm[1]*SG60[3][3];
pv6[6]=(links[3].mcm[3]*v6[2] + links[3].m*v6[4])*v6[5] + v6[4]*(links[3].mcm[3]*v6[1] - links[3].m*v6[5]) + (-(links[3].mcm[1]*v6[1]) - links[3].mcm[2]*v6[2])*v6[6] + v6[1]*(-(links[3].mcm[3]*v6[4]) - v6[2]*links[3].inertia[1][1] + v6[1]*links[3].inertia[1][2]) + v6[2]*(-(links[3].mcm[3]*v6[5]) - v6[2]*links[3].inertia[1][2] + v6[1]*links[3].inertia[2][2]) + v6[3]*(links[3].mcm[1]*v6[4] + links[3].mcm[2]*v6[5] - v6[2]*links[3].inertia[1][3] + v6[1]*links[3].inertia[2][3]) - gravity*links[3].mcm[2]*SG60[1][3] + gravity*links[3].mcm[1]*SG60[2][3] - uex[3].t[1]*SG60[3][1] - uex[3].t[2]*SG60[3][2] - uex[3].t[3]*SG60[3][3];

pv7[1]=-(links[4].mcm[1]*Power(v7[2],2)) - links[4].mcm[1]*Power(v7[3],2) + v7[1]*(links[4].mcm[2]*v7[2] + links[4].mcm[3]*v7[3]) - links[4].m*v7[3]*v7[5] + links[4].m*v7[2]*v7[6] - uex[4].f[1]*SG70[1][1] - uex[4].f[2]*SG70[1][2] + gravity*links[4].m*SG70[1][3] - uex[4].f[3]*SG70[1][3];
pv7[2]=-(links[4].mcm[2]*Power(v7[1],2)) - links[4].mcm[2]*Power(v7[3],2) + v7[2]*(links[4].mcm[1]*v7[1] + links[4].mcm[3]*v7[3]) + links[4].m*v7[3]*v7[4] - links[4].m*v7[1]*v7[6] - uex[4].f[1]*SG70[2][1] - uex[4].f[2]*SG70[2][2] + gravity*links[4].m*SG70[2][3] - uex[4].f[3]*SG70[2][3];
pv7[3]=-(links[4].mcm[3]*Power(v7[1],2)) - links[4].mcm[3]*Power(v7[2],2) + (links[4].mcm[1]*v7[1] + links[4].mcm[2]*v7[2])*v7[3] - links[4].m*v7[2]*v7[4] + links[4].m*v7[1]*v7[5] - uex[4].f[1]*SG70[3][1] - uex[4].f[2]*SG70[3][2] + gravity*links[4].m*SG70[3][3] - uex[4].f[3]*SG70[3][3];
pv7[4]=(-(links[4].mcm[2]*v7[2]) - links[4].mcm[3]*v7[3])*v7[4] + (links[4].mcm[1]*v7[3] + links[4].m*v7[5])*v7[6] + v7[5]*(links[4].mcm[1]*v7[2] - links[4].m*v7[6]) + v7[1]*(links[4].mcm[2]*v7[5] + links[4].mcm[3]*v7[6] - v7[3]*links[4].inertia[1][2] + v7[2]*links[4].inertia[1][3]) + v7[2]*(-(links[4].mcm[1]*v7[5]) - v7[3]*links[4].inertia[2][2] + v7[2]*links[4].inertia[2][3]) + v7[3]*(-(links[4].mcm[1]*v7[6]) - v7[3]*links[4].inertia[2][3] + v7[2]*links[4].inertia[3][3]) - uex[4].t[1]*SG70[1][1] - uex[4].t[2]*SG70[1][2] - uex[4].t[3]*SG70[1][3] - gravity*links[4].mcm[3]*SG70[2][3] + gravity*links[4].mcm[2]*SG70[3][3];
pv7[5]=(-(links[4].mcm[1]*v7[1]) - links[4].mcm[3]*v7[3])*v7[5] + (links[4].mcm[2]*v7[3] - links[4].m*v7[4])*v7[6] + v7[4]*(links[4].mcm[2]*v7[1] + links[4].m*v7[6]) + v7[1]*(-(links[4].mcm[2]*v7[4]) + v7[3]*links[4].inertia[1][1] - v7[1]*links[4].inertia[1][3]) + v7[2]*(links[4].mcm[1]*v7[4] + links[4].mcm[3]*v7[6] + v7[3]*links[4].inertia[1][2] - v7[1]*links[4].inertia[2][3]) + v7[3]*(-(links[4].mcm[2]*v7[6]) + v7[3]*links[4].inertia[1][3] - v7[1]*links[4].inertia[3][3]) + gravity*links[4].mcm[3]*SG70[1][3] - uex[4].t[1]*SG70[2][1] - uex[4].t[2]*SG70[2][2] - uex[4].t[3]*SG70[2][3] - gravity*links[4].mcm[1]*SG70[3][3];
pv7[6]=(links[4].mcm[3]*v7[2] + links[4].m*v7[4])*v7[5] + v7[4]*(links[4].mcm[3]*v7[1] - links[4].m*v7[5]) + (-(links[4].mcm[1]*v7[1]) - links[4].mcm[2]*v7[2])*v7[6] + v7[1]*(-(links[4].mcm[3]*v7[4]) - v7[2]*links[4].inertia[1][1] + v7[1]*links[4].inertia[1][2]) + v7[2]*(-(links[4].mcm[3]*v7[5]) - v7[2]*links[4].inertia[1][2] + v7[1]*links[4].inertia[2][2]) + v7[3]*(links[4].mcm[1]*v7[4] + links[4].mcm[2]*v7[5] - v7[2]*links[4].inertia[1][3] + v7[1]*links[4].inertia[2][3]) - gravity*links[4].mcm[2]*SG70[1][3] + gravity*links[4].mcm[1]*SG70[2][3] - uex[4].t[1]*SG70[3][1] - uex[4].t[2]*SG70[3][2] - uex[4].t[3]*SG70[3][3];

pv8[1]=-(links[5].mcm[1]*Power(v8[2],2)) - links[5].mcm[1]*Power(v8[3],2) + v8[1]*(links[5].mcm[2]*v8[2] + links[5].mcm[3]*v8[3]) - links[5].m*v8[3]*v8[5] + links[5].m*v8[2]*v8[6] - uex[5].f[1]*SG80[1][1] - uex[5].f[2]*SG80[1][2] + gravity*links[5].m*SG80[1][3] - uex[5].f[3]*SG80[1][3];
pv8[2]=-(links[5].mcm[2]*Power(v8[1],2)) - links[5].mcm[2]*Power(v8[3],2) + v8[2]*(links[5].mcm[1]*v8[1] + links[5].mcm[3]*v8[3]) + links[5].m*v8[3]*v8[4] - links[5].m*v8[1]*v8[6] - uex[5].f[1]*SG80[2][1] - uex[5].f[2]*SG80[2][2] + gravity*links[5].m*SG80[2][3] - uex[5].f[3]*SG80[2][3];
pv8[3]=-(links[5].mcm[3]*Power(v8[1],2)) - links[5].mcm[3]*Power(v8[2],2) + (links[5].mcm[1]*v8[1] + links[5].mcm[2]*v8[2])*v8[3] - links[5].m*v8[2]*v8[4] + links[5].m*v8[1]*v8[5] - uex[5].f[1]*SG80[3][1] - uex[5].f[2]*SG80[3][2] + gravity*links[5].m*SG80[3][3] - uex[5].f[3]*SG80[3][3];
pv8[4]=(-(links[5].mcm[2]*v8[2]) - links[5].mcm[3]*v8[3])*v8[4] + (links[5].mcm[1]*v8[3] + links[5].m*v8[5])*v8[6] + v8[5]*(links[5].mcm[1]*v8[2] - links[5].m*v8[6]) + v8[1]*(links[5].mcm[2]*v8[5] + links[5].mcm[3]*v8[6] - v8[3]*links[5].inertia[1][2] + v8[2]*links[5].inertia[1][3]) + v8[2]*(-(links[5].mcm[1]*v8[5]) - v8[3]*links[5].inertia[2][2] + v8[2]*links[5].inertia[2][3]) + v8[3]*(-(links[5].mcm[1]*v8[6]) - v8[3]*links[5].inertia[2][3] + v8[2]*links[5].inertia[3][3]) - uex[5].t[1]*SG80[1][1] - uex[5].t[2]*SG80[1][2] - uex[5].t[3]*SG80[1][3] - gravity*links[5].mcm[3]*SG80[2][3] + gravity*links[5].mcm[2]*SG80[3][3];
pv8[5]=(-(links[5].mcm[1]*v8[1]) - links[5].mcm[3]*v8[3])*v8[5] + (links[5].mcm[2]*v8[3] - links[5].m*v8[4])*v8[6] + v8[4]*(links[5].mcm[2]*v8[1] + links[5].m*v8[6]) + v8[1]*(-(links[5].mcm[2]*v8[4]) + v8[3]*links[5].inertia[1][1] - v8[1]*links[5].inertia[1][3]) + v8[2]*(links[5].mcm[1]*v8[4] + links[5].mcm[3]*v8[6] + v8[3]*links[5].inertia[1][2] - v8[1]*links[5].inertia[2][3]) + v8[3]*(-(links[5].mcm[2]*v8[6]) + v8[3]*links[5].inertia[1][3] - v8[1]*links[5].inertia[3][3]) + gravity*links[5].mcm[3]*SG80[1][3] - uex[5].t[1]*SG80[2][1] - uex[5].t[2]*SG80[2][2] - uex[5].t[3]*SG80[2][3] - gravity*links[5].mcm[1]*SG80[3][3];
pv8[6]=(links[5].mcm[3]*v8[2] + links[5].m*v8[4])*v8[5] + v8[4]*(links[5].mcm[3]*v8[1] - links[5].m*v8[5]) + (-(links[5].mcm[1]*v8[1]) - links[5].mcm[2]*v8[2])*v8[6] + v8[1]*(-(links[5].mcm[3]*v8[4]) - v8[2]*links[5].inertia[1][1] + v8[1]*links[5].inertia[1][2]) + v8[2]*(-(links[5].mcm[3]*v8[5]) - v8[2]*links[5].inertia[1][2] + v8[1]*links[5].inertia[2][2]) + v8[3]*(links[5].mcm[1]*v8[4] + links[5].mcm[2]*v8[5] - v8[2]*links[5].inertia[1][3] + v8[1]*links[5].inertia[2][3]) - gravity*links[5].mcm[2]*SG80[1][3] + gravity*links[5].mcm[1]*SG80[2][3] - uex[5].t[1]*SG80[3][1] - uex[5].t[2]*SG80[3][2] - uex[5].t[3]*SG80[3][3];

pv9[1]=-(links[6].mcm[1]*Power(v9[2],2)) - links[6].mcm[1]*Power(v9[3],2) + v9[1]*(links[6].mcm[2]*v9[2] + links[6].mcm[3]*v9[3]) - links[6].m*v9[3]*v9[5] + links[6].m*v9[2]*v9[6] - uex[6].f[1]*SG90[1][1] - uex[6].f[2]*SG90[1][2] + gravity*links[6].m*SG90[1][3] - uex[6].f[3]*SG90[1][3];
pv9[2]=-(links[6].mcm[2]*Power(v9[1],2)) - links[6].mcm[2]*Power(v9[3],2) + v9[2]*(links[6].mcm[1]*v9[1] + links[6].mcm[3]*v9[3]) + links[6].m*v9[3]*v9[4] - links[6].m*v9[1]*v9[6] - uex[6].f[1]*SG90[2][1] - uex[6].f[2]*SG90[2][2] + gravity*links[6].m*SG90[2][3] - uex[6].f[3]*SG90[2][3];
pv9[3]=-(links[6].mcm[3]*Power(v9[1],2)) - links[6].mcm[3]*Power(v9[2],2) + (links[6].mcm[1]*v9[1] + links[6].mcm[2]*v9[2])*v9[3] - links[6].m*v9[2]*v9[4] + links[6].m*v9[1]*v9[5] - uex[6].f[1]*SG90[3][1] - uex[6].f[2]*SG90[3][2] + gravity*links[6].m*SG90[3][3] - uex[6].f[3]*SG90[3][3];
pv9[4]=(-(links[6].mcm[2]*v9[2]) - links[6].mcm[3]*v9[3])*v9[4] + (links[6].mcm[1]*v9[3] + links[6].m*v9[5])*v9[6] + v9[5]*(links[6].mcm[1]*v9[2] - links[6].m*v9[6]) + v9[1]*(links[6].mcm[2]*v9[5] + links[6].mcm[3]*v9[6] - v9[3]*links[6].inertia[1][2] + v9[2]*links[6].inertia[1][3]) + v9[2]*(-(links[6].mcm[1]*v9[5]) - v9[3]*links[6].inertia[2][2] + v9[2]*links[6].inertia[2][3]) + v9[3]*(-(links[6].mcm[1]*v9[6]) - v9[3]*links[6].inertia[2][3] + v9[2]*links[6].inertia[3][3]) - uex[6].t[1]*SG90[1][1] - uex[6].t[2]*SG90[1][2] - uex[6].t[3]*SG90[1][3] - gravity*links[6].mcm[3]*SG90[2][3] + gravity*links[6].mcm[2]*SG90[3][3];
pv9[5]=(-(links[6].mcm[1]*v9[1]) - links[6].mcm[3]*v9[3])*v9[5] + (links[6].mcm[2]*v9[3] - links[6].m*v9[4])*v9[6] + v9[4]*(links[6].mcm[2]*v9[1] + links[6].m*v9[6]) + v9[1]*(-(links[6].mcm[2]*v9[4]) + v9[3]*links[6].inertia[1][1] - v9[1]*links[6].inertia[1][3]) + v9[2]*(links[6].mcm[1]*v9[4] + links[6].mcm[3]*v9[6] + v9[3]*links[6].inertia[1][2] - v9[1]*links[6].inertia[2][3]) + v9[3]*(-(links[6].mcm[2]*v9[6]) + v9[3]*links[6].inertia[1][3] - v9[1]*links[6].inertia[3][3]) + gravity*links[6].mcm[3]*SG90[1][3] - uex[6].t[1]*SG90[2][1] - uex[6].t[2]*SG90[2][2] - uex[6].t[3]*SG90[2][3] - gravity*links[6].mcm[1]*SG90[3][3];
pv9[6]=(links[6].mcm[3]*v9[2] + links[6].m*v9[4])*v9[5] + v9[4]*(links[6].mcm[3]*v9[1] - links[6].m*v9[5]) + (-(links[6].mcm[1]*v9[1]) - links[6].mcm[2]*v9[2])*v9[6] + v9[1]*(-(links[6].mcm[3]*v9[4]) - v9[2]*links[6].inertia[1][1] + v9[1]*links[6].inertia[1][2]) + v9[2]*(-(links[6].mcm[3]*v9[5]) - v9[2]*links[6].inertia[1][2] + v9[1]*links[6].inertia[2][2]) + v9[3]*(links[6].mcm[1]*v9[4] + links[6].mcm[2]*v9[5] - v9[2]*links[6].inertia[1][3] + v9[1]*links[6].inertia[2][3]) - gravity*links[6].mcm[2]*SG90[1][3] + gravity*links[6].mcm[1]*SG90[2][3] - uex[6].t[1]*SG90[3][1] - uex[6].t[2]*SG90[3][2] - uex[6].t[3]*SG90[3][3];

pv14[1]=-(eff[1].mcm[1]*Power(v14[2],2)) - eff[1].mcm[1]*Power(v14[3],2) + v14[1]*(eff[1].mcm[2]*v14[2] + eff[1].mcm[3]*v14[3]) - eff[1].m*v14[3]*v14[5] + eff[1].m*v14[2]*v14[6] + eff[1].m*gravity*SG140[1][3];
pv14[2]=-(eff[1].mcm[2]*Power(v14[1],2)) - eff[1].mcm[2]*Power(v14[3],2) + v14[2]*(eff[1].mcm[1]*v14[1] + eff[1].mcm[3]*v14[3]) + eff[1].m*v14[3]*v14[4] - eff[1].m*v14[1]*v14[6] + eff[1].m*gravity*SG140[2][3];
pv14[3]=-(eff[1].mcm[3]*Power(v14[1],2)) - eff[1].mcm[3]*Power(v14[2],2) + (eff[1].mcm[1]*v14[1] + eff[1].mcm[2]*v14[2])*v14[3] - eff[1].m*v14[2]*v14[4] + eff[1].m*v14[1]*v14[5] + eff[1].m*gravity*SG140[3][3];
pv14[4]=(-(eff[1].mcm[2]*v14[2]) - eff[1].mcm[3]*v14[3])*v14[4] - eff[1].mcm[1]*v14[2]*v14[5] - eff[1].mcm[1]*v14[3]*v14[6] + (eff[1].mcm[1]*v14[3] + eff[1].m*v14[5])*v14[6] + v14[5]*(eff[1].mcm[1]*v14[2] - eff[1].m*v14[6]) + v14[1]*(eff[1].mcm[2]*v14[5] + eff[1].mcm[3]*v14[6]) - gravity*eff[1].mcm[3]*SG140[2][3] + gravity*eff[1].mcm[2]*SG140[3][3];
pv14[5]=-(eff[1].mcm[2]*v14[1]*v14[4]) + (-(eff[1].mcm[1]*v14[1]) - eff[1].mcm[3]*v14[3])*v14[5] - eff[1].mcm[2]*v14[3]*v14[6] + (eff[1].mcm[2]*v14[3] - eff[1].m*v14[4])*v14[6] + v14[4]*(eff[1].mcm[2]*v14[1] + eff[1].m*v14[6]) + v14[2]*(eff[1].mcm[1]*v14[4] + eff[1].mcm[3]*v14[6]) + gravity*eff[1].mcm[3]*SG140[1][3] - gravity*eff[1].mcm[1]*SG140[3][3];
pv14[6]=-(eff[1].mcm[3]*v14[1]*v14[4]) - eff[1].mcm[3]*v14[2]*v14[5] + (eff[1].mcm[3]*v14[2] + eff[1].m*v14[4])*v14[5] + v14[4]*(eff[1].mcm[3]*v14[1] - eff[1].m*v14[5]) + v14[3]*(eff[1].mcm[1]*v14[4] + eff[1].mcm[2]*v14[5]) + (-(eff[1].mcm[1]*v14[1]) - eff[1].mcm[2]*v14[2])*v14[6] - gravity*eff[1].mcm[2]*SG140[1][3] + gravity*eff[1].mcm[1]*SG140[2][3];

pv15[1]=-(links[7].mcm[1]*Power(v15[2],2)) - links[7].mcm[1]*Power(v15[3],2) + v15[1]*(links[7].mcm[2]*v15[2] + links[7].mcm[3]*v15[3]) - links[7].m*v15[3]*v15[5] + links[7].m*v15[2]*v15[6] - uex[7].f[1]*SG150[1][1] - uex[7].f[2]*SG150[1][2] + gravity*links[7].m*SG150[1][3] - uex[7].f[3]*SG150[1][3];
pv15[2]=-(links[7].mcm[2]*Power(v15[1],2)) - links[7].mcm[2]*Power(v15[3],2) + v15[2]*(links[7].mcm[1]*v15[1] + links[7].mcm[3]*v15[3]) + links[7].m*v15[3]*v15[4] - links[7].m*v15[1]*v15[6] - uex[7].f[1]*SG150[2][1] - uex[7].f[2]*SG150[2][2] + gravity*links[7].m*SG150[2][3] - uex[7].f[3]*SG150[2][3];
pv15[3]=-(links[7].mcm[3]*Power(v15[1],2)) - links[7].mcm[3]*Power(v15[2],2) + (links[7].mcm[1]*v15[1] + links[7].mcm[2]*v15[2])*v15[3] - links[7].m*v15[2]*v15[4] + links[7].m*v15[1]*v15[5] - uex[7].f[1]*SG150[3][1] - uex[7].f[2]*SG150[3][2] + gravity*links[7].m*SG150[3][3] - uex[7].f[3]*SG150[3][3];
pv15[4]=(-(links[7].mcm[2]*v15[2]) - links[7].mcm[3]*v15[3])*v15[4] + (links[7].mcm[1]*v15[3] + links[7].m*v15[5])*v15[6] + v15[5]*(links[7].mcm[1]*v15[2] - links[7].m*v15[6]) + v15[1]*(links[7].mcm[2]*v15[5] + links[7].mcm[3]*v15[6] - v15[3]*links[7].inertia[1][2] + v15[2]*links[7].inertia[1][3]) + v15[2]*(-(links[7].mcm[1]*v15[5]) - v15[3]*links[7].inertia[2][2] + v15[2]*links[7].inertia[2][3]) + v15[3]*(-(links[7].mcm[1]*v15[6]) - v15[3]*links[7].inertia[2][3] + v15[2]*links[7].inertia[3][3]) - uex[7].t[1]*SG150[1][1] - uex[7].t[2]*SG150[1][2] - uex[7].t[3]*SG150[1][3] - gravity*links[7].mcm[3]*SG150[2][3] + gravity*links[7].mcm[2]*SG150[3][3];
pv15[5]=(-(links[7].mcm[1]*v15[1]) - links[7].mcm[3]*v15[3])*v15[5] + (links[7].mcm[2]*v15[3] - links[7].m*v15[4])*v15[6] + v15[4]*(links[7].mcm[2]*v15[1] + links[7].m*v15[6]) + v15[1]*(-(links[7].mcm[2]*v15[4]) + v15[3]*links[7].inertia[1][1] - v15[1]*links[7].inertia[1][3]) + v15[2]*(links[7].mcm[1]*v15[4] + links[7].mcm[3]*v15[6] + v15[3]*links[7].inertia[1][2] - v15[1]*links[7].inertia[2][3]) + v15[3]*(-(links[7].mcm[2]*v15[6]) + v15[3]*links[7].inertia[1][3] - v15[1]*links[7].inertia[3][3]) + gravity*links[7].mcm[3]*SG150[1][3] - uex[7].t[1]*SG150[2][1] - uex[7].t[2]*SG150[2][2] - uex[7].t[3]*SG150[2][3] - gravity*links[7].mcm[1]*SG150[3][3];
pv15[6]=(links[7].mcm[3]*v15[2] + links[7].m*v15[4])*v15[5] + v15[4]*(links[7].mcm[3]*v15[1] - links[7].m*v15[5]) + (-(links[7].mcm[1]*v15[1]) - links[7].mcm[2]*v15[2])*v15[6] + v15[1]*(-(links[7].mcm[3]*v15[4]) - v15[2]*links[7].inertia[1][1] + v15[1]*links[7].inertia[1][2]) + v15[2]*(-(links[7].mcm[3]*v15[5]) - v15[2]*links[7].inertia[1][2] + v15[1]*links[7].inertia[2][2]) + v15[3]*(links[7].mcm[1]*v15[4] + links[7].mcm[2]*v15[5] - v15[2]*links[7].inertia[1][3] + v15[1]*links[7].inertia[2][3]) - gravity*links[7].mcm[2]*SG150[1][3] + gravity*links[7].mcm[1]*SG150[2][3] - uex[7].t[1]*SG150[3][1] - uex[7].t[2]*SG150[3][2] - uex[7].t[3]*SG150[3][3];

pv16[1]=-(links[8].mcm[1]*Power(v16[2],2)) - links[8].mcm[1]*Power(v16[3],2) + v16[1]*(links[8].mcm[2]*v16[2] + links[8].mcm[3]*v16[3]) - links[8].m*v16[3]*v16[5] + links[8].m*v16[2]*v16[6] - uex[8].f[1]*SG160[1][1] - uex[8].f[2]*SG160[1][2] + gravity*links[8].m*SG160[1][3] - uex[8].f[3]*SG160[1][3];
pv16[2]=-(links[8].mcm[2]*Power(v16[1],2)) - links[8].mcm[2]*Power(v16[3],2) + v16[2]*(links[8].mcm[1]*v16[1] + links[8].mcm[3]*v16[3]) + links[8].m*v16[3]*v16[4] - links[8].m*v16[1]*v16[6] - uex[8].f[1]*SG160[2][1] - uex[8].f[2]*SG160[2][2] + gravity*links[8].m*SG160[2][3] - uex[8].f[3]*SG160[2][3];
pv16[3]=-(links[8].mcm[3]*Power(v16[1],2)) - links[8].mcm[3]*Power(v16[2],2) + (links[8].mcm[1]*v16[1] + links[8].mcm[2]*v16[2])*v16[3] - links[8].m*v16[2]*v16[4] + links[8].m*v16[1]*v16[5] - uex[8].f[1]*SG160[3][1] - uex[8].f[2]*SG160[3][2] + gravity*links[8].m*SG160[3][3] - uex[8].f[3]*SG160[3][3];
pv16[4]=(-(links[8].mcm[2]*v16[2]) - links[8].mcm[3]*v16[3])*v16[4] + (links[8].mcm[1]*v16[3] + links[8].m*v16[5])*v16[6] + v16[5]*(links[8].mcm[1]*v16[2] - links[8].m*v16[6]) + v16[1]*(links[8].mcm[2]*v16[5] + links[8].mcm[3]*v16[6] - v16[3]*links[8].inertia[1][2] + v16[2]*links[8].inertia[1][3]) + v16[2]*(-(links[8].mcm[1]*v16[5]) - v16[3]*links[8].inertia[2][2] + v16[2]*links[8].inertia[2][3]) + v16[3]*(-(links[8].mcm[1]*v16[6]) - v16[3]*links[8].inertia[2][3] + v16[2]*links[8].inertia[3][3]) - uex[8].t[1]*SG160[1][1] - uex[8].t[2]*SG160[1][2] - uex[8].t[3]*SG160[1][3] - gravity*links[8].mcm[3]*SG160[2][3] + gravity*links[8].mcm[2]*SG160[3][3];
pv16[5]=(-(links[8].mcm[1]*v16[1]) - links[8].mcm[3]*v16[3])*v16[5] + (links[8].mcm[2]*v16[3] - links[8].m*v16[4])*v16[6] + v16[4]*(links[8].mcm[2]*v16[1] + links[8].m*v16[6]) + v16[1]*(-(links[8].mcm[2]*v16[4]) + v16[3]*links[8].inertia[1][1] - v16[1]*links[8].inertia[1][3]) + v16[2]*(links[8].mcm[1]*v16[4] + links[8].mcm[3]*v16[6] + v16[3]*links[8].inertia[1][2] - v16[1]*links[8].inertia[2][3]) + v16[3]*(-(links[8].mcm[2]*v16[6]) + v16[3]*links[8].inertia[1][3] - v16[1]*links[8].inertia[3][3]) + gravity*links[8].mcm[3]*SG160[1][3] - uex[8].t[1]*SG160[2][1] - uex[8].t[2]*SG160[2][2] - uex[8].t[3]*SG160[2][3] - gravity*links[8].mcm[1]*SG160[3][3];
pv16[6]=(links[8].mcm[3]*v16[2] + links[8].m*v16[4])*v16[5] + v16[4]*(links[8].mcm[3]*v16[1] - links[8].m*v16[5]) + (-(links[8].mcm[1]*v16[1]) - links[8].mcm[2]*v16[2])*v16[6] + v16[1]*(-(links[8].mcm[3]*v16[4]) - v16[2]*links[8].inertia[1][1] + v16[1]*links[8].inertia[1][2]) + v16[2]*(-(links[8].mcm[3]*v16[5]) - v16[2]*links[8].inertia[1][2] + v16[1]*links[8].inertia[2][2]) + v16[3]*(links[8].mcm[1]*v16[4] + links[8].mcm[2]*v16[5] - v16[2]*links[8].inertia[1][3] + v16[1]*links[8].inertia[2][3]) - gravity*links[8].mcm[2]*SG160[1][3] + gravity*links[8].mcm[1]*SG160[2][3] - uex[8].t[1]*SG160[3][1] - uex[8].t[2]*SG160[3][2] - uex[8].t[3]*SG160[3][3];

pv17[1]=-(links[9].mcm[1]*Power(v17[2],2)) - links[9].mcm[1]*Power(v17[3],2) + v17[1]*(links[9].mcm[2]*v17[2] + links[9].mcm[3]*v17[3]) - links[9].m*v17[3]*v17[5] + links[9].m*v17[2]*v17[6] + gravity*links[9].m*SG170[1][3];
pv17[2]=-(links[9].mcm[2]*Power(v17[1],2)) - links[9].mcm[2]*Power(v17[3],2) + v17[2]*(links[9].mcm[1]*v17[1] + links[9].mcm[3]*v17[3]) + links[9].m*v17[3]*v17[4] - links[9].m*v17[1]*v17[6] + gravity*links[9].m*SG170[2][3];
pv17[3]=-(links[9].mcm[3]*Power(v17[1],2)) - links[9].mcm[3]*Power(v17[2],2) + (links[9].mcm[1]*v17[1] + links[9].mcm[2]*v17[2])*v17[3] - links[9].m*v17[2]*v17[4] + links[9].m*v17[1]*v17[5] + gravity*links[9].m*SG170[3][3];
pv17[4]=(-(links[9].mcm[2]*v17[2]) - links[9].mcm[3]*v17[3])*v17[4] + (links[9].mcm[1]*v17[3] + links[9].m*v17[5])*v17[6] + v17[5]*(links[9].mcm[1]*v17[2] - links[9].m*v17[6]) + v17[1]*(links[9].mcm[2]*v17[5] + links[9].mcm[3]*v17[6] - v17[3]*links[9].inertia[1][2] + v17[2]*links[9].inertia[1][3]) + v17[2]*(-(links[9].mcm[1]*v17[5]) - v17[3]*links[9].inertia[2][2] + v17[2]*links[9].inertia[2][3]) + v17[3]*(-(links[9].mcm[1]*v17[6]) - v17[3]*links[9].inertia[2][3] + v17[2]*links[9].inertia[3][3]) - gravity*links[9].mcm[3]*SG170[2][3] + gravity*links[9].mcm[2]*SG170[3][3];
pv17[5]=(-(links[9].mcm[1]*v17[1]) - links[9].mcm[3]*v17[3])*v17[5] + (links[9].mcm[2]*v17[3] - links[9].m*v17[4])*v17[6] + v17[4]*(links[9].mcm[2]*v17[1] + links[9].m*v17[6]) + v17[1]*(-(links[9].mcm[2]*v17[4]) + v17[3]*links[9].inertia[1][1] - v17[1]*links[9].inertia[1][3]) + v17[2]*(links[9].mcm[1]*v17[4] + links[9].mcm[3]*v17[6] + v17[3]*links[9].inertia[1][2] - v17[1]*links[9].inertia[2][3]) + v17[3]*(-(links[9].mcm[2]*v17[6]) + v17[3]*links[9].inertia[1][3] - v17[1]*links[9].inertia[3][3]) + gravity*links[9].mcm[3]*SG170[1][3] - gravity*links[9].mcm[1]*SG170[3][3];
pv17[6]=(links[9].mcm[3]*v17[2] + links[9].m*v17[4])*v17[5] + v17[4]*(links[9].mcm[3]*v17[1] - links[9].m*v17[5]) + (-(links[9].mcm[1]*v17[1]) - links[9].mcm[2]*v17[2])*v17[6] + v17[1]*(-(links[9].mcm[3]*v17[4]) - v17[2]*links[9].inertia[1][1] + v17[1]*links[9].inertia[1][2]) + v17[2]*(-(links[9].mcm[3]*v17[5]) - v17[2]*links[9].inertia[1][2] + v17[1]*links[9].inertia[2][2]) + v17[3]*(links[9].mcm[1]*v17[4] + links[9].mcm[2]*v17[5] - v17[2]*links[9].inertia[1][3] + v17[1]*links[9].inertia[2][3]) - gravity*links[9].mcm[2]*SG170[1][3] + gravity*links[9].mcm[1]*SG170[2][3];

pv18[1]=-(links[10].mcm[1]*Power(v18[2],2)) - links[10].mcm[1]*Power(v18[3],2) + v18[1]*(links[10].mcm[2]*v18[2] + links[10].mcm[3]*v18[3]) - links[10].m*v18[3]*v18[5] + links[10].m*v18[2]*v18[6] - uex[10].f[1]*SG180[1][1] - uex[10].f[2]*SG180[1][2] + gravity*links[10].m*SG180[1][3] - uex[10].f[3]*SG180[1][3];
pv18[2]=-(links[10].mcm[2]*Power(v18[1],2)) - links[10].mcm[2]*Power(v18[3],2) + v18[2]*(links[10].mcm[1]*v18[1] + links[10].mcm[3]*v18[3]) + links[10].m*v18[3]*v18[4] - links[10].m*v18[1]*v18[6] - uex[10].f[1]*SG180[2][1] - uex[10].f[2]*SG180[2][2] + gravity*links[10].m*SG180[2][3] - uex[10].f[3]*SG180[2][3];
pv18[3]=-(links[10].mcm[3]*Power(v18[1],2)) - links[10].mcm[3]*Power(v18[2],2) + (links[10].mcm[1]*v18[1] + links[10].mcm[2]*v18[2])*v18[3] - links[10].m*v18[2]*v18[4] + links[10].m*v18[1]*v18[5] - uex[10].f[1]*SG180[3][1] - uex[10].f[2]*SG180[3][2] + gravity*links[10].m*SG180[3][3] - uex[10].f[3]*SG180[3][3];
pv18[4]=(-(links[10].mcm[2]*v18[2]) - links[10].mcm[3]*v18[3])*v18[4] + (links[10].mcm[1]*v18[3] + links[10].m*v18[5])*v18[6] + v18[5]*(links[10].mcm[1]*v18[2] - links[10].m*v18[6]) + v18[1]*(links[10].mcm[2]*v18[5] + links[10].mcm[3]*v18[6] - v18[3]*links[10].inertia[1][2] + v18[2]*links[10].inertia[1][3]) + v18[2]*(-(links[10].mcm[1]*v18[5]) - v18[3]*links[10].inertia[2][2] + v18[2]*links[10].inertia[2][3]) + v18[3]*(-(links[10].mcm[1]*v18[6]) - v18[3]*links[10].inertia[2][3] + v18[2]*links[10].inertia[3][3]) - uex[10].t[1]*SG180[1][1] - uex[10].t[2]*SG180[1][2] - uex[10].t[3]*SG180[1][3] - gravity*links[10].mcm[3]*SG180[2][3] + gravity*links[10].mcm[2]*SG180[3][3];
pv18[5]=(-(links[10].mcm[1]*v18[1]) - links[10].mcm[3]*v18[3])*v18[5] + (links[10].mcm[2]*v18[3] - links[10].m*v18[4])*v18[6] + v18[4]*(links[10].mcm[2]*v18[1] + links[10].m*v18[6]) + v18[1]*(-(links[10].mcm[2]*v18[4]) + v18[3]*links[10].inertia[1][1] - v18[1]*links[10].inertia[1][3]) + v18[2]*(links[10].mcm[1]*v18[4] + links[10].mcm[3]*v18[6] + v18[3]*links[10].inertia[1][2] - v18[1]*links[10].inertia[2][3]) + v18[3]*(-(links[10].mcm[2]*v18[6]) + v18[3]*links[10].inertia[1][3] - v18[1]*links[10].inertia[3][3]) + gravity*links[10].mcm[3]*SG180[1][3] - uex[10].t[1]*SG180[2][1] - uex[10].t[2]*SG180[2][2] - uex[10].t[3]*SG180[2][3] - gravity*links[10].mcm[1]*SG180[3][3];
pv18[6]=(links[10].mcm[3]*v18[2] + links[10].m*v18[4])*v18[5] + v18[4]*(links[10].mcm[3]*v18[1] - links[10].m*v18[5]) + (-(links[10].mcm[1]*v18[1]) - links[10].mcm[2]*v18[2])*v18[6] + v18[1]*(-(links[10].mcm[3]*v18[4]) - v18[2]*links[10].inertia[1][1] + v18[1]*links[10].inertia[1][2]) + v18[2]*(-(links[10].mcm[3]*v18[5]) - v18[2]*links[10].inertia[1][2] + v18[1]*links[10].inertia[2][2]) + v18[3]*(links[10].mcm[1]*v18[4] + links[10].mcm[2]*v18[5] - v18[2]*links[10].inertia[1][3] + v18[1]*links[10].inertia[2][3]) - gravity*links[10].mcm[2]*SG180[1][3] + gravity*links[10].mcm[1]*SG180[2][3] - uex[10].t[1]*SG180[3][1] - uex[10].t[2]*SG180[3][2] - uex[10].t[3]*SG180[3][3];

pv19[1]=-(links[11].mcm[1]*Power(v19[2],2)) - links[11].mcm[1]*Power(v19[3],2) + v19[1]*(links[11].mcm[2]*v19[2] + links[11].mcm[3]*v19[3]) - links[11].m*v19[3]*v19[5] + links[11].m*v19[2]*v19[6] - uex[11].f[1]*SG190[1][1] - uex[11].f[2]*SG190[1][2] + gravity*links[11].m*SG190[1][3] - uex[11].f[3]*SG190[1][3];
pv19[2]=-(links[11].mcm[2]*Power(v19[1],2)) - links[11].mcm[2]*Power(v19[3],2) + v19[2]*(links[11].mcm[1]*v19[1] + links[11].mcm[3]*v19[3]) + links[11].m*v19[3]*v19[4] - links[11].m*v19[1]*v19[6] - uex[11].f[1]*SG190[2][1] - uex[11].f[2]*SG190[2][2] + gravity*links[11].m*SG190[2][3] - uex[11].f[3]*SG190[2][3];
pv19[3]=-(links[11].mcm[3]*Power(v19[1],2)) - links[11].mcm[3]*Power(v19[2],2) + (links[11].mcm[1]*v19[1] + links[11].mcm[2]*v19[2])*v19[3] - links[11].m*v19[2]*v19[4] + links[11].m*v19[1]*v19[5] - uex[11].f[1]*SG190[3][1] - uex[11].f[2]*SG190[3][2] + gravity*links[11].m*SG190[3][3] - uex[11].f[3]*SG190[3][3];
pv19[4]=(-(links[11].mcm[2]*v19[2]) - links[11].mcm[3]*v19[3])*v19[4] + (links[11].mcm[1]*v19[3] + links[11].m*v19[5])*v19[6] + v19[5]*(links[11].mcm[1]*v19[2] - links[11].m*v19[6]) + v19[1]*(links[11].mcm[2]*v19[5] + links[11].mcm[3]*v19[6] - v19[3]*links[11].inertia[1][2] + v19[2]*links[11].inertia[1][3]) + v19[2]*(-(links[11].mcm[1]*v19[5]) - v19[3]*links[11].inertia[2][2] + v19[2]*links[11].inertia[2][3]) + v19[3]*(-(links[11].mcm[1]*v19[6]) - v19[3]*links[11].inertia[2][3] + v19[2]*links[11].inertia[3][3]) - uex[11].t[1]*SG190[1][1] - uex[11].t[2]*SG190[1][2] - uex[11].t[3]*SG190[1][3] - gravity*links[11].mcm[3]*SG190[2][3] + gravity*links[11].mcm[2]*SG190[3][3];
pv19[5]=(-(links[11].mcm[1]*v19[1]) - links[11].mcm[3]*v19[3])*v19[5] + (links[11].mcm[2]*v19[3] - links[11].m*v19[4])*v19[6] + v19[4]*(links[11].mcm[2]*v19[1] + links[11].m*v19[6]) + v19[1]*(-(links[11].mcm[2]*v19[4]) + v19[3]*links[11].inertia[1][1] - v19[1]*links[11].inertia[1][3]) + v19[2]*(links[11].mcm[1]*v19[4] + links[11].mcm[3]*v19[6] + v19[3]*links[11].inertia[1][2] - v19[1]*links[11].inertia[2][3]) + v19[3]*(-(links[11].mcm[2]*v19[6]) + v19[3]*links[11].inertia[1][3] - v19[1]*links[11].inertia[3][3]) + gravity*links[11].mcm[3]*SG190[1][3] - uex[11].t[1]*SG190[2][1] - uex[11].t[2]*SG190[2][2] - uex[11].t[3]*SG190[2][3] - gravity*links[11].mcm[1]*SG190[3][3];
pv19[6]=(links[11].mcm[3]*v19[2] + links[11].m*v19[4])*v19[5] + v19[4]*(links[11].mcm[3]*v19[1] - links[11].m*v19[5]) + (-(links[11].mcm[1]*v19[1]) - links[11].mcm[2]*v19[2])*v19[6] + v19[1]*(-(links[11].mcm[3]*v19[4]) - v19[2]*links[11].inertia[1][1] + v19[1]*links[11].inertia[1][2]) + v19[2]*(-(links[11].mcm[3]*v19[5]) - v19[2]*links[11].inertia[1][2] + v19[1]*links[11].inertia[2][2]) + v19[3]*(links[11].mcm[1]*v19[4] + links[11].mcm[2]*v19[5] - v19[2]*links[11].inertia[1][3] + v19[1]*links[11].inertia[2][3]) - gravity*links[11].mcm[2]*SG190[1][3] + gravity*links[11].mcm[1]*SG190[2][3] - uex[11].t[1]*SG190[3][1] - uex[11].t[2]*SG190[3][2] - uex[11].t[3]*SG190[3][3];

pv20[1]=-(links[12].mcm[1]*Power(v20[2],2)) - links[12].mcm[1]*Power(v20[3],2) + v20[1]*(links[12].mcm[2]*v20[2] + links[12].mcm[3]*v20[3]) - links[12].m*v20[3]*v20[5] + links[12].m*v20[2]*v20[6] - uex[12].f[1]*SG200[1][1] - uex[12].f[2]*SG200[1][2] + gravity*links[12].m*SG200[1][3] - uex[12].f[3]*SG200[1][3];
pv20[2]=-(links[12].mcm[2]*Power(v20[1],2)) - links[12].mcm[2]*Power(v20[3],2) + v20[2]*(links[12].mcm[1]*v20[1] + links[12].mcm[3]*v20[3]) + links[12].m*v20[3]*v20[4] - links[12].m*v20[1]*v20[6] - uex[12].f[1]*SG200[2][1] - uex[12].f[2]*SG200[2][2] + gravity*links[12].m*SG200[2][3] - uex[12].f[3]*SG200[2][3];
pv20[3]=-(links[12].mcm[3]*Power(v20[1],2)) - links[12].mcm[3]*Power(v20[2],2) + (links[12].mcm[1]*v20[1] + links[12].mcm[2]*v20[2])*v20[3] - links[12].m*v20[2]*v20[4] + links[12].m*v20[1]*v20[5] - uex[12].f[1]*SG200[3][1] - uex[12].f[2]*SG200[3][2] + gravity*links[12].m*SG200[3][3] - uex[12].f[3]*SG200[3][3];
pv20[4]=(-(links[12].mcm[2]*v20[2]) - links[12].mcm[3]*v20[3])*v20[4] + (links[12].mcm[1]*v20[3] + links[12].m*v20[5])*v20[6] + v20[5]*(links[12].mcm[1]*v20[2] - links[12].m*v20[6]) + v20[1]*(links[12].mcm[2]*v20[5] + links[12].mcm[3]*v20[6] - v20[3]*links[12].inertia[1][2] + v20[2]*links[12].inertia[1][3]) + v20[2]*(-(links[12].mcm[1]*v20[5]) - v20[3]*links[12].inertia[2][2] + v20[2]*links[12].inertia[2][3]) + v20[3]*(-(links[12].mcm[1]*v20[6]) - v20[3]*links[12].inertia[2][3] + v20[2]*links[12].inertia[3][3]) - uex[12].t[1]*SG200[1][1] - uex[12].t[2]*SG200[1][2] - uex[12].t[3]*SG200[1][3] - gravity*links[12].mcm[3]*SG200[2][3] + gravity*links[12].mcm[2]*SG200[3][3];
pv20[5]=(-(links[12].mcm[1]*v20[1]) - links[12].mcm[3]*v20[3])*v20[5] + (links[12].mcm[2]*v20[3] - links[12].m*v20[4])*v20[6] + v20[4]*(links[12].mcm[2]*v20[1] + links[12].m*v20[6]) + v20[1]*(-(links[12].mcm[2]*v20[4]) + v20[3]*links[12].inertia[1][1] - v20[1]*links[12].inertia[1][3]) + v20[2]*(links[12].mcm[1]*v20[4] + links[12].mcm[3]*v20[6] + v20[3]*links[12].inertia[1][2] - v20[1]*links[12].inertia[2][3]) + v20[3]*(-(links[12].mcm[2]*v20[6]) + v20[3]*links[12].inertia[1][3] - v20[1]*links[12].inertia[3][3]) + gravity*links[12].mcm[3]*SG200[1][3] - uex[12].t[1]*SG200[2][1] - uex[12].t[2]*SG200[2][2] - uex[12].t[3]*SG200[2][3] - gravity*links[12].mcm[1]*SG200[3][3];
pv20[6]=(links[12].mcm[3]*v20[2] + links[12].m*v20[4])*v20[5] + v20[4]*(links[12].mcm[3]*v20[1] - links[12].m*v20[5]) + (-(links[12].mcm[1]*v20[1]) - links[12].mcm[2]*v20[2])*v20[6] + v20[1]*(-(links[12].mcm[3]*v20[4]) - v20[2]*links[12].inertia[1][1] + v20[1]*links[12].inertia[1][2]) + v20[2]*(-(links[12].mcm[3]*v20[5]) - v20[2]*links[12].inertia[1][2] + v20[1]*links[12].inertia[2][2]) + v20[3]*(links[12].mcm[1]*v20[4] + links[12].mcm[2]*v20[5] - v20[2]*links[12].inertia[1][3] + v20[1]*links[12].inertia[2][3]) - gravity*links[12].mcm[2]*SG200[1][3] + gravity*links[12].mcm[1]*SG200[2][3] - uex[12].t[1]*SG200[3][1] - uex[12].t[2]*SG200[3][2] - uex[12].t[3]*SG200[3][3];

pv25[1]=-(eff[2].mcm[1]*Power(v25[2],2)) - eff[2].mcm[1]*Power(v25[3],2) + v25[1]*(eff[2].mcm[2]*v25[2] + eff[2].mcm[3]*v25[3]) - eff[2].m*v25[3]*v25[5] + eff[2].m*v25[2]*v25[6] + eff[2].m*gravity*SG250[1][3];
pv25[2]=-(eff[2].mcm[2]*Power(v25[1],2)) - eff[2].mcm[2]*Power(v25[3],2) + v25[2]*(eff[2].mcm[1]*v25[1] + eff[2].mcm[3]*v25[3]) + eff[2].m*v25[3]*v25[4] - eff[2].m*v25[1]*v25[6] + eff[2].m*gravity*SG250[2][3];
pv25[3]=-(eff[2].mcm[3]*Power(v25[1],2)) - eff[2].mcm[3]*Power(v25[2],2) + (eff[2].mcm[1]*v25[1] + eff[2].mcm[2]*v25[2])*v25[3] - eff[2].m*v25[2]*v25[4] + eff[2].m*v25[1]*v25[5] + eff[2].m*gravity*SG250[3][3];
pv25[4]=(-(eff[2].mcm[2]*v25[2]) - eff[2].mcm[3]*v25[3])*v25[4] - eff[2].mcm[1]*v25[2]*v25[5] - eff[2].mcm[1]*v25[3]*v25[6] + (eff[2].mcm[1]*v25[3] + eff[2].m*v25[5])*v25[6] + v25[5]*(eff[2].mcm[1]*v25[2] - eff[2].m*v25[6]) + v25[1]*(eff[2].mcm[2]*v25[5] + eff[2].mcm[3]*v25[6]) - gravity*eff[2].mcm[3]*SG250[2][3] + gravity*eff[2].mcm[2]*SG250[3][3];
pv25[5]=-(eff[2].mcm[2]*v25[1]*v25[4]) + (-(eff[2].mcm[1]*v25[1]) - eff[2].mcm[3]*v25[3])*v25[5] - eff[2].mcm[2]*v25[3]*v25[6] + (eff[2].mcm[2]*v25[3] - eff[2].m*v25[4])*v25[6] + v25[4]*(eff[2].mcm[2]*v25[1] + eff[2].m*v25[6]) + v25[2]*(eff[2].mcm[1]*v25[4] + eff[2].mcm[3]*v25[6]) + gravity*eff[2].mcm[3]*SG250[1][3] - gravity*eff[2].mcm[1]*SG250[3][3];
pv25[6]=-(eff[2].mcm[3]*v25[1]*v25[4]) - eff[2].mcm[3]*v25[2]*v25[5] + (eff[2].mcm[3]*v25[2] + eff[2].m*v25[4])*v25[5] + v25[4]*(eff[2].mcm[3]*v25[1] - eff[2].m*v25[5]) + v25[3]*(eff[2].mcm[1]*v25[4] + eff[2].mcm[2]*v25[5]) + (-(eff[2].mcm[1]*v25[1]) - eff[2].mcm[2]*v25[2])*v25[6] - gravity*eff[2].mcm[2]*SG250[1][3] + gravity*eff[2].mcm[1]*SG250[2][3];



}

/* articulated body inertias and misc variables */

void
hoap3_ForDynArtfunc7(void)
     {
JA25[1][2]=eff[2].mcm[3];
JA25[1][3]=-eff[2].mcm[2];
JA25[1][4]=eff[2].m;

JA25[2][1]=-eff[2].mcm[3];
JA25[2][3]=eff[2].mcm[1];
JA25[2][5]=eff[2].m;

JA25[3][1]=eff[2].mcm[2];
JA25[3][2]=-eff[2].mcm[1];
JA25[3][6]=eff[2].m;

JA25[4][5]=-eff[2].mcm[3];
JA25[4][6]=eff[2].mcm[2];

JA25[5][4]=eff[2].mcm[3];
JA25[5][6]=-eff[2].mcm[1];

JA25[6][4]=-eff[2].mcm[2];
JA25[6][5]=eff[2].mcm[1];


T12025[1][2]=JA25[1][2];
T12025[1][3]=JA25[1][3];
T12025[1][4]=JA25[1][4];

T12025[2][1]=JA25[2][1];
T12025[2][3]=JA25[2][3];
T12025[2][5]=JA25[2][5];

T12025[3][1]=JA25[3][1];
T12025[3][2]=JA25[3][2];
T12025[3][6]=JA25[3][6];

T12025[4][5]=JA25[4][5];
T12025[4][6]=JA25[4][6];

T12025[5][4]=JA25[5][4];
T12025[5][6]=JA25[5][6];

T12025[6][4]=JA25[6][4];
T12025[6][5]=JA25[6][5];


T2025[1][1]=(-(eff[2].x[3]*S2520[1][2]) + eff[2].x[2]*S2520[1][3])*Si2025[1][1]*T12025[1][4] + S2520[3][1]*(Si2025[1][1]*T12025[1][3] + Si2025[1][2]*T12025[2][3]) + (-(eff[2].x[3]*S2520[2][2]) + eff[2].x[2]*S2520[2][3])*Si2025[1][2]*T12025[2][5] + S2520[1][1]*(Si2025[1][2]*T12025[2][1] + Si2025[1][3]*T12025[3][1]) + S2520[2][1]*(Si2025[1][1]*T12025[1][2] + Si2025[1][3]*T12025[3][2]) + (-(eff[2].x[3]*S2520[3][2]) + eff[2].x[2]*S2520[3][3])*Si2025[1][3]*T12025[3][6];
T2025[1][2]=(eff[2].x[3]*S2520[1][1] - eff[2].x[1]*S2520[1][3])*Si2025[1][1]*T12025[1][4] + S2520[3][2]*(Si2025[1][1]*T12025[1][3] + Si2025[1][2]*T12025[2][3]) + (eff[2].x[3]*S2520[2][1] - eff[2].x[1]*S2520[2][3])*Si2025[1][2]*T12025[2][5] + S2520[1][2]*(Si2025[1][2]*T12025[2][1] + Si2025[1][3]*T12025[3][1]) + S2520[2][2]*(Si2025[1][1]*T12025[1][2] + Si2025[1][3]*T12025[3][2]) + (eff[2].x[3]*S2520[3][1] - eff[2].x[1]*S2520[3][3])*Si2025[1][3]*T12025[3][6];
T2025[1][3]=(-(eff[2].x[2]*S2520[1][1]) + eff[2].x[1]*S2520[1][2])*Si2025[1][1]*T12025[1][4] + S2520[3][3]*(Si2025[1][1]*T12025[1][3] + Si2025[1][2]*T12025[2][3]) + (-(eff[2].x[2]*S2520[2][1]) + eff[2].x[1]*S2520[2][2])*Si2025[1][2]*T12025[2][5] + S2520[1][3]*(Si2025[1][2]*T12025[2][1] + Si2025[1][3]*T12025[3][1]) + S2520[2][3]*(Si2025[1][1]*T12025[1][2] + Si2025[1][3]*T12025[3][2]) + (-(eff[2].x[2]*S2520[3][1]) + eff[2].x[1]*S2520[3][2])*Si2025[1][3]*T12025[3][6];
T2025[1][4]=S2520[1][1]*Si2025[1][1]*T12025[1][4] + S2520[2][1]*Si2025[1][2]*T12025[2][5] + S2520[3][1]*Si2025[1][3]*T12025[3][6];
T2025[1][5]=S2520[1][2]*Si2025[1][1]*T12025[1][4] + S2520[2][2]*Si2025[1][2]*T12025[2][5] + S2520[3][2]*Si2025[1][3]*T12025[3][6];
T2025[1][6]=S2520[1][3]*Si2025[1][1]*T12025[1][4] + S2520[2][3]*Si2025[1][2]*T12025[2][5] + S2520[3][3]*Si2025[1][3]*T12025[3][6];

T2025[2][1]=(-(eff[2].x[3]*S2520[1][2]) + eff[2].x[2]*S2520[1][3])*Si2025[2][1]*T12025[1][4] + S2520[3][1]*(Si2025[2][1]*T12025[1][3] + Si2025[2][2]*T12025[2][3]) + (-(eff[2].x[3]*S2520[2][2]) + eff[2].x[2]*S2520[2][3])*Si2025[2][2]*T12025[2][5] + S2520[1][1]*(Si2025[2][2]*T12025[2][1] + Si2025[2][3]*T12025[3][1]) + S2520[2][1]*(Si2025[2][1]*T12025[1][2] + Si2025[2][3]*T12025[3][2]) + (-(eff[2].x[3]*S2520[3][2]) + eff[2].x[2]*S2520[3][3])*Si2025[2][3]*T12025[3][6];
T2025[2][2]=(eff[2].x[3]*S2520[1][1] - eff[2].x[1]*S2520[1][3])*Si2025[2][1]*T12025[1][4] + S2520[3][2]*(Si2025[2][1]*T12025[1][3] + Si2025[2][2]*T12025[2][3]) + (eff[2].x[3]*S2520[2][1] - eff[2].x[1]*S2520[2][3])*Si2025[2][2]*T12025[2][5] + S2520[1][2]*(Si2025[2][2]*T12025[2][1] + Si2025[2][3]*T12025[3][1]) + S2520[2][2]*(Si2025[2][1]*T12025[1][2] + Si2025[2][3]*T12025[3][2]) + (eff[2].x[3]*S2520[3][1] - eff[2].x[1]*S2520[3][3])*Si2025[2][3]*T12025[3][6];
T2025[2][3]=(-(eff[2].x[2]*S2520[1][1]) + eff[2].x[1]*S2520[1][2])*Si2025[2][1]*T12025[1][4] + S2520[3][3]*(Si2025[2][1]*T12025[1][3] + Si2025[2][2]*T12025[2][3]) + (-(eff[2].x[2]*S2520[2][1]) + eff[2].x[1]*S2520[2][2])*Si2025[2][2]*T12025[2][5] + S2520[1][3]*(Si2025[2][2]*T12025[2][1] + Si2025[2][3]*T12025[3][1]) + S2520[2][3]*(Si2025[2][1]*T12025[1][2] + Si2025[2][3]*T12025[3][2]) + (-(eff[2].x[2]*S2520[3][1]) + eff[2].x[1]*S2520[3][2])*Si2025[2][3]*T12025[3][6];
T2025[2][4]=S2520[1][1]*Si2025[2][1]*T12025[1][4] + S2520[2][1]*Si2025[2][2]*T12025[2][5] + S2520[3][1]*Si2025[2][3]*T12025[3][6];
T2025[2][5]=S2520[1][2]*Si2025[2][1]*T12025[1][4] + S2520[2][2]*Si2025[2][2]*T12025[2][5] + S2520[3][2]*Si2025[2][3]*T12025[3][6];
T2025[2][6]=S2520[1][3]*Si2025[2][1]*T12025[1][4] + S2520[2][3]*Si2025[2][2]*T12025[2][5] + S2520[3][3]*Si2025[2][3]*T12025[3][6];

T2025[3][1]=(-(eff[2].x[3]*S2520[1][2]) + eff[2].x[2]*S2520[1][3])*Si2025[3][1]*T12025[1][4] + S2520[3][1]*(Si2025[3][1]*T12025[1][3] + Si2025[3][2]*T12025[2][3]) + (-(eff[2].x[3]*S2520[2][2]) + eff[2].x[2]*S2520[2][3])*Si2025[3][2]*T12025[2][5] + S2520[1][1]*(Si2025[3][2]*T12025[2][1] + Si2025[3][3]*T12025[3][1]) + S2520[2][1]*(Si2025[3][1]*T12025[1][2] + Si2025[3][3]*T12025[3][2]) + (-(eff[2].x[3]*S2520[3][2]) + eff[2].x[2]*S2520[3][3])*Si2025[3][3]*T12025[3][6];
T2025[3][2]=(eff[2].x[3]*S2520[1][1] - eff[2].x[1]*S2520[1][3])*Si2025[3][1]*T12025[1][4] + S2520[3][2]*(Si2025[3][1]*T12025[1][3] + Si2025[3][2]*T12025[2][3]) + (eff[2].x[3]*S2520[2][1] - eff[2].x[1]*S2520[2][3])*Si2025[3][2]*T12025[2][5] + S2520[1][2]*(Si2025[3][2]*T12025[2][1] + Si2025[3][3]*T12025[3][1]) + S2520[2][2]*(Si2025[3][1]*T12025[1][2] + Si2025[3][3]*T12025[3][2]) + (eff[2].x[3]*S2520[3][1] - eff[2].x[1]*S2520[3][3])*Si2025[3][3]*T12025[3][6];
T2025[3][3]=(-(eff[2].x[2]*S2520[1][1]) + eff[2].x[1]*S2520[1][2])*Si2025[3][1]*T12025[1][4] + S2520[3][3]*(Si2025[3][1]*T12025[1][3] + Si2025[3][2]*T12025[2][3]) + (-(eff[2].x[2]*S2520[2][1]) + eff[2].x[1]*S2520[2][2])*Si2025[3][2]*T12025[2][5] + S2520[1][3]*(Si2025[3][2]*T12025[2][1] + Si2025[3][3]*T12025[3][1]) + S2520[2][3]*(Si2025[3][1]*T12025[1][2] + Si2025[3][3]*T12025[3][2]) + (-(eff[2].x[2]*S2520[3][1]) + eff[2].x[1]*S2520[3][2])*Si2025[3][3]*T12025[3][6];
T2025[3][4]=S2520[1][1]*Si2025[3][1]*T12025[1][4] + S2520[2][1]*Si2025[3][2]*T12025[2][5] + S2520[3][1]*Si2025[3][3]*T12025[3][6];
T2025[3][5]=S2520[1][2]*Si2025[3][1]*T12025[1][4] + S2520[2][2]*Si2025[3][2]*T12025[2][5] + S2520[3][2]*Si2025[3][3]*T12025[3][6];
T2025[3][6]=S2520[1][3]*Si2025[3][1]*T12025[1][4] + S2520[2][3]*Si2025[3][2]*T12025[2][5] + S2520[3][3]*Si2025[3][3]*T12025[3][6];

T2025[4][1]=S2520[3][1]*((-(eff[2].x[3]*Si2025[2][1]) + eff[2].x[2]*Si2025[3][1])*T12025[1][3] + (-(eff[2].x[3]*Si2025[2][2]) + eff[2].x[2]*Si2025[3][2])*T12025[2][3]) + S2520[1][1]*((-(eff[2].x[3]*Si2025[2][2]) + eff[2].x[2]*Si2025[3][2])*T12025[2][1] + (-(eff[2].x[3]*Si2025[2][3]) + eff[2].x[2]*Si2025[3][3])*T12025[3][1]) + S2520[2][1]*((-(eff[2].x[3]*Si2025[2][1]) + eff[2].x[2]*Si2025[3][1])*T12025[1][2] + (-(eff[2].x[3]*Si2025[2][3]) + eff[2].x[2]*Si2025[3][3])*T12025[3][2]) + (-(eff[2].x[3]*S2520[3][2]) + eff[2].x[2]*S2520[3][3])*((-(eff[2].x[3]*Si2025[2][3]) + eff[2].x[2]*Si2025[3][3])*T12025[3][6] + Si2025[1][1]*T12025[4][6] + Si2025[1][2]*T12025[5][6]) + (-(eff[2].x[3]*S2520[1][2]) + eff[2].x[2]*S2520[1][3])*((-(eff[2].x[3]*Si2025[2][1]) + eff[2].x[2]*Si2025[3][1])*T12025[1][4] + Si2025[1][2]*T12025[5][4] + Si2025[1][3]*T12025[6][4]) + (-(eff[2].x[3]*S2520[2][2]) + eff[2].x[2]*S2520[2][3])*((-(eff[2].x[3]*Si2025[2][2]) + eff[2].x[2]*Si2025[3][2])*T12025[2][5] + Si2025[1][1]*T12025[4][5] + Si2025[1][3]*T12025[6][5]);
T2025[4][2]=S2520[3][2]*((-(eff[2].x[3]*Si2025[2][1]) + eff[2].x[2]*Si2025[3][1])*T12025[1][3] + (-(eff[2].x[3]*Si2025[2][2]) + eff[2].x[2]*Si2025[3][2])*T12025[2][3]) + S2520[1][2]*((-(eff[2].x[3]*Si2025[2][2]) + eff[2].x[2]*Si2025[3][2])*T12025[2][1] + (-(eff[2].x[3]*Si2025[2][3]) + eff[2].x[2]*Si2025[3][3])*T12025[3][1]) + S2520[2][2]*((-(eff[2].x[3]*Si2025[2][1]) + eff[2].x[2]*Si2025[3][1])*T12025[1][2] + (-(eff[2].x[3]*Si2025[2][3]) + eff[2].x[2]*Si2025[3][3])*T12025[3][2]) + (eff[2].x[3]*S2520[3][1] - eff[2].x[1]*S2520[3][3])*((-(eff[2].x[3]*Si2025[2][3]) + eff[2].x[2]*Si2025[3][3])*T12025[3][6] + Si2025[1][1]*T12025[4][6] + Si2025[1][2]*T12025[5][6]) + (eff[2].x[3]*S2520[1][1] - eff[2].x[1]*S2520[1][3])*((-(eff[2].x[3]*Si2025[2][1]) + eff[2].x[2]*Si2025[3][1])*T12025[1][4] + Si2025[1][2]*T12025[5][4] + Si2025[1][3]*T12025[6][4]) + (eff[2].x[3]*S2520[2][1] - eff[2].x[1]*S2520[2][3])*((-(eff[2].x[3]*Si2025[2][2]) + eff[2].x[2]*Si2025[3][2])*T12025[2][5] + Si2025[1][1]*T12025[4][5] + Si2025[1][3]*T12025[6][5]);
T2025[4][3]=S2520[3][3]*((-(eff[2].x[3]*Si2025[2][1]) + eff[2].x[2]*Si2025[3][1])*T12025[1][3] + (-(eff[2].x[3]*Si2025[2][2]) + eff[2].x[2]*Si2025[3][2])*T12025[2][3]) + S2520[1][3]*((-(eff[2].x[3]*Si2025[2][2]) + eff[2].x[2]*Si2025[3][2])*T12025[2][1] + (-(eff[2].x[3]*Si2025[2][3]) + eff[2].x[2]*Si2025[3][3])*T12025[3][1]) + S2520[2][3]*((-(eff[2].x[3]*Si2025[2][1]) + eff[2].x[2]*Si2025[3][1])*T12025[1][2] + (-(eff[2].x[3]*Si2025[2][3]) + eff[2].x[2]*Si2025[3][3])*T12025[3][2]) + (-(eff[2].x[2]*S2520[3][1]) + eff[2].x[1]*S2520[3][2])*((-(eff[2].x[3]*Si2025[2][3]) + eff[2].x[2]*Si2025[3][3])*T12025[3][6] + Si2025[1][1]*T12025[4][6] + Si2025[1][2]*T12025[5][6]) + (-(eff[2].x[2]*S2520[1][1]) + eff[2].x[1]*S2520[1][2])*((-(eff[2].x[3]*Si2025[2][1]) + eff[2].x[2]*Si2025[3][1])*T12025[1][4] + Si2025[1][2]*T12025[5][4] + Si2025[1][3]*T12025[6][4]) + (-(eff[2].x[2]*S2520[2][1]) + eff[2].x[1]*S2520[2][2])*((-(eff[2].x[3]*Si2025[2][2]) + eff[2].x[2]*Si2025[3][2])*T12025[2][5] + Si2025[1][1]*T12025[4][5] + Si2025[1][3]*T12025[6][5]);
T2025[4][4]=S2520[3][1]*((-(eff[2].x[3]*Si2025[2][3]) + eff[2].x[2]*Si2025[3][3])*T12025[3][6] + Si2025[1][1]*T12025[4][6] + Si2025[1][2]*T12025[5][6]) + S2520[1][1]*((-(eff[2].x[3]*Si2025[2][1]) + eff[2].x[2]*Si2025[3][1])*T12025[1][4] + Si2025[1][2]*T12025[5][4] + Si2025[1][3]*T12025[6][4]) + S2520[2][1]*((-(eff[2].x[3]*Si2025[2][2]) + eff[2].x[2]*Si2025[3][2])*T12025[2][5] + Si2025[1][1]*T12025[4][5] + Si2025[1][3]*T12025[6][5]);
T2025[4][5]=S2520[3][2]*((-(eff[2].x[3]*Si2025[2][3]) + eff[2].x[2]*Si2025[3][3])*T12025[3][6] + Si2025[1][1]*T12025[4][6] + Si2025[1][2]*T12025[5][6]) + S2520[1][2]*((-(eff[2].x[3]*Si2025[2][1]) + eff[2].x[2]*Si2025[3][1])*T12025[1][4] + Si2025[1][2]*T12025[5][4] + Si2025[1][3]*T12025[6][4]) + S2520[2][2]*((-(eff[2].x[3]*Si2025[2][2]) + eff[2].x[2]*Si2025[3][2])*T12025[2][5] + Si2025[1][1]*T12025[4][5] + Si2025[1][3]*T12025[6][5]);
T2025[4][6]=S2520[3][3]*((-(eff[2].x[3]*Si2025[2][3]) + eff[2].x[2]*Si2025[3][3])*T12025[3][6] + Si2025[1][1]*T12025[4][6] + Si2025[1][2]*T12025[5][6]) + S2520[1][3]*((-(eff[2].x[3]*Si2025[2][1]) + eff[2].x[2]*Si2025[3][1])*T12025[1][4] + Si2025[1][2]*T12025[5][4] + Si2025[1][3]*T12025[6][4]) + S2520[2][3]*((-(eff[2].x[3]*Si2025[2][2]) + eff[2].x[2]*Si2025[3][2])*T12025[2][5] + Si2025[1][1]*T12025[4][5] + Si2025[1][3]*T12025[6][5]);

T2025[5][1]=S2520[3][1]*((eff[2].x[3]*Si2025[1][1] - eff[2].x[1]*Si2025[3][1])*T12025[1][3] + (eff[2].x[3]*Si2025[1][2] - eff[2].x[1]*Si2025[3][2])*T12025[2][3]) + S2520[1][1]*((eff[2].x[3]*Si2025[1][2] - eff[2].x[1]*Si2025[3][2])*T12025[2][1] + (eff[2].x[3]*Si2025[1][3] - eff[2].x[1]*Si2025[3][3])*T12025[3][1]) + S2520[2][1]*((eff[2].x[3]*Si2025[1][1] - eff[2].x[1]*Si2025[3][1])*T12025[1][2] + (eff[2].x[3]*Si2025[1][3] - eff[2].x[1]*Si2025[3][3])*T12025[3][2]) + (-(eff[2].x[3]*S2520[3][2]) + eff[2].x[2]*S2520[3][3])*((eff[2].x[3]*Si2025[1][3] - eff[2].x[1]*Si2025[3][3])*T12025[3][6] + Si2025[2][1]*T12025[4][6] + Si2025[2][2]*T12025[5][6]) + (-(eff[2].x[3]*S2520[1][2]) + eff[2].x[2]*S2520[1][3])*((eff[2].x[3]*Si2025[1][1] - eff[2].x[1]*Si2025[3][1])*T12025[1][4] + Si2025[2][2]*T12025[5][4] + Si2025[2][3]*T12025[6][4]) + (-(eff[2].x[3]*S2520[2][2]) + eff[2].x[2]*S2520[2][3])*((eff[2].x[3]*Si2025[1][2] - eff[2].x[1]*Si2025[3][2])*T12025[2][5] + Si2025[2][1]*T12025[4][5] + Si2025[2][3]*T12025[6][5]);
T2025[5][2]=S2520[3][2]*((eff[2].x[3]*Si2025[1][1] - eff[2].x[1]*Si2025[3][1])*T12025[1][3] + (eff[2].x[3]*Si2025[1][2] - eff[2].x[1]*Si2025[3][2])*T12025[2][3]) + S2520[1][2]*((eff[2].x[3]*Si2025[1][2] - eff[2].x[1]*Si2025[3][2])*T12025[2][1] + (eff[2].x[3]*Si2025[1][3] - eff[2].x[1]*Si2025[3][3])*T12025[3][1]) + S2520[2][2]*((eff[2].x[3]*Si2025[1][1] - eff[2].x[1]*Si2025[3][1])*T12025[1][2] + (eff[2].x[3]*Si2025[1][3] - eff[2].x[1]*Si2025[3][3])*T12025[3][2]) + (eff[2].x[3]*S2520[3][1] - eff[2].x[1]*S2520[3][3])*((eff[2].x[3]*Si2025[1][3] - eff[2].x[1]*Si2025[3][3])*T12025[3][6] + Si2025[2][1]*T12025[4][6] + Si2025[2][2]*T12025[5][6]) + (eff[2].x[3]*S2520[1][1] - eff[2].x[1]*S2520[1][3])*((eff[2].x[3]*Si2025[1][1] - eff[2].x[1]*Si2025[3][1])*T12025[1][4] + Si2025[2][2]*T12025[5][4] + Si2025[2][3]*T12025[6][4]) + (eff[2].x[3]*S2520[2][1] - eff[2].x[1]*S2520[2][3])*((eff[2].x[3]*Si2025[1][2] - eff[2].x[1]*Si2025[3][2])*T12025[2][5] + Si2025[2][1]*T12025[4][5] + Si2025[2][3]*T12025[6][5]);
T2025[5][3]=S2520[3][3]*((eff[2].x[3]*Si2025[1][1] - eff[2].x[1]*Si2025[3][1])*T12025[1][3] + (eff[2].x[3]*Si2025[1][2] - eff[2].x[1]*Si2025[3][2])*T12025[2][3]) + S2520[1][3]*((eff[2].x[3]*Si2025[1][2] - eff[2].x[1]*Si2025[3][2])*T12025[2][1] + (eff[2].x[3]*Si2025[1][3] - eff[2].x[1]*Si2025[3][3])*T12025[3][1]) + S2520[2][3]*((eff[2].x[3]*Si2025[1][1] - eff[2].x[1]*Si2025[3][1])*T12025[1][2] + (eff[2].x[3]*Si2025[1][3] - eff[2].x[1]*Si2025[3][3])*T12025[3][2]) + (-(eff[2].x[2]*S2520[3][1]) + eff[2].x[1]*S2520[3][2])*((eff[2].x[3]*Si2025[1][3] - eff[2].x[1]*Si2025[3][3])*T12025[3][6] + Si2025[2][1]*T12025[4][6] + Si2025[2][2]*T12025[5][6]) + (-(eff[2].x[2]*S2520[1][1]) + eff[2].x[1]*S2520[1][2])*((eff[2].x[3]*Si2025[1][1] - eff[2].x[1]*Si2025[3][1])*T12025[1][4] + Si2025[2][2]*T12025[5][4] + Si2025[2][3]*T12025[6][4]) + (-(eff[2].x[2]*S2520[2][1]) + eff[2].x[1]*S2520[2][2])*((eff[2].x[3]*Si2025[1][2] - eff[2].x[1]*Si2025[3][2])*T12025[2][5] + Si2025[2][1]*T12025[4][5] + Si2025[2][3]*T12025[6][5]);
T2025[5][4]=S2520[3][1]*((eff[2].x[3]*Si2025[1][3] - eff[2].x[1]*Si2025[3][3])*T12025[3][6] + Si2025[2][1]*T12025[4][6] + Si2025[2][2]*T12025[5][6]) + S2520[1][1]*((eff[2].x[3]*Si2025[1][1] - eff[2].x[1]*Si2025[3][1])*T12025[1][4] + Si2025[2][2]*T12025[5][4] + Si2025[2][3]*T12025[6][4]) + S2520[2][1]*((eff[2].x[3]*Si2025[1][2] - eff[2].x[1]*Si2025[3][2])*T12025[2][5] + Si2025[2][1]*T12025[4][5] + Si2025[2][3]*T12025[6][5]);
T2025[5][5]=S2520[3][2]*((eff[2].x[3]*Si2025[1][3] - eff[2].x[1]*Si2025[3][3])*T12025[3][6] + Si2025[2][1]*T12025[4][6] + Si2025[2][2]*T12025[5][6]) + S2520[1][2]*((eff[2].x[3]*Si2025[1][1] - eff[2].x[1]*Si2025[3][1])*T12025[1][4] + Si2025[2][2]*T12025[5][4] + Si2025[2][3]*T12025[6][4]) + S2520[2][2]*((eff[2].x[3]*Si2025[1][2] - eff[2].x[1]*Si2025[3][2])*T12025[2][5] + Si2025[2][1]*T12025[4][5] + Si2025[2][3]*T12025[6][5]);
T2025[5][6]=S2520[3][3]*((eff[2].x[3]*Si2025[1][3] - eff[2].x[1]*Si2025[3][3])*T12025[3][6] + Si2025[2][1]*T12025[4][6] + Si2025[2][2]*T12025[5][6]) + S2520[1][3]*((eff[2].x[3]*Si2025[1][1] - eff[2].x[1]*Si2025[3][1])*T12025[1][4] + Si2025[2][2]*T12025[5][4] + Si2025[2][3]*T12025[6][4]) + S2520[2][3]*((eff[2].x[3]*Si2025[1][2] - eff[2].x[1]*Si2025[3][2])*T12025[2][5] + Si2025[2][1]*T12025[4][5] + Si2025[2][3]*T12025[6][5]);

T2025[6][1]=S2520[3][1]*((-(eff[2].x[2]*Si2025[1][1]) + eff[2].x[1]*Si2025[2][1])*T12025[1][3] + (-(eff[2].x[2]*Si2025[1][2]) + eff[2].x[1]*Si2025[2][2])*T12025[2][3]) + S2520[1][1]*((-(eff[2].x[2]*Si2025[1][2]) + eff[2].x[1]*Si2025[2][2])*T12025[2][1] + (-(eff[2].x[2]*Si2025[1][3]) + eff[2].x[1]*Si2025[2][3])*T12025[3][1]) + S2520[2][1]*((-(eff[2].x[2]*Si2025[1][1]) + eff[2].x[1]*Si2025[2][1])*T12025[1][2] + (-(eff[2].x[2]*Si2025[1][3]) + eff[2].x[1]*Si2025[2][3])*T12025[3][2]) + (-(eff[2].x[3]*S2520[3][2]) + eff[2].x[2]*S2520[3][3])*((-(eff[2].x[2]*Si2025[1][3]) + eff[2].x[1]*Si2025[2][3])*T12025[3][6] + Si2025[3][1]*T12025[4][6] + Si2025[3][2]*T12025[5][6]) + (-(eff[2].x[3]*S2520[1][2]) + eff[2].x[2]*S2520[1][3])*((-(eff[2].x[2]*Si2025[1][1]) + eff[2].x[1]*Si2025[2][1])*T12025[1][4] + Si2025[3][2]*T12025[5][4] + Si2025[3][3]*T12025[6][4]) + (-(eff[2].x[3]*S2520[2][2]) + eff[2].x[2]*S2520[2][3])*((-(eff[2].x[2]*Si2025[1][2]) + eff[2].x[1]*Si2025[2][2])*T12025[2][5] + Si2025[3][1]*T12025[4][5] + Si2025[3][3]*T12025[6][5]);
T2025[6][2]=S2520[3][2]*((-(eff[2].x[2]*Si2025[1][1]) + eff[2].x[1]*Si2025[2][1])*T12025[1][3] + (-(eff[2].x[2]*Si2025[1][2]) + eff[2].x[1]*Si2025[2][2])*T12025[2][3]) + S2520[1][2]*((-(eff[2].x[2]*Si2025[1][2]) + eff[2].x[1]*Si2025[2][2])*T12025[2][1] + (-(eff[2].x[2]*Si2025[1][3]) + eff[2].x[1]*Si2025[2][3])*T12025[3][1]) + S2520[2][2]*((-(eff[2].x[2]*Si2025[1][1]) + eff[2].x[1]*Si2025[2][1])*T12025[1][2] + (-(eff[2].x[2]*Si2025[1][3]) + eff[2].x[1]*Si2025[2][3])*T12025[3][2]) + (eff[2].x[3]*S2520[3][1] - eff[2].x[1]*S2520[3][3])*((-(eff[2].x[2]*Si2025[1][3]) + eff[2].x[1]*Si2025[2][3])*T12025[3][6] + Si2025[3][1]*T12025[4][6] + Si2025[3][2]*T12025[5][6]) + (eff[2].x[3]*S2520[1][1] - eff[2].x[1]*S2520[1][3])*((-(eff[2].x[2]*Si2025[1][1]) + eff[2].x[1]*Si2025[2][1])*T12025[1][4] + Si2025[3][2]*T12025[5][4] + Si2025[3][3]*T12025[6][4]) + (eff[2].x[3]*S2520[2][1] - eff[2].x[1]*S2520[2][3])*((-(eff[2].x[2]*Si2025[1][2]) + eff[2].x[1]*Si2025[2][2])*T12025[2][5] + Si2025[3][1]*T12025[4][5] + Si2025[3][3]*T12025[6][5]);
T2025[6][3]=S2520[3][3]*((-(eff[2].x[2]*Si2025[1][1]) + eff[2].x[1]*Si2025[2][1])*T12025[1][3] + (-(eff[2].x[2]*Si2025[1][2]) + eff[2].x[1]*Si2025[2][2])*T12025[2][3]) + S2520[1][3]*((-(eff[2].x[2]*Si2025[1][2]) + eff[2].x[1]*Si2025[2][2])*T12025[2][1] + (-(eff[2].x[2]*Si2025[1][3]) + eff[2].x[1]*Si2025[2][3])*T12025[3][1]) + S2520[2][3]*((-(eff[2].x[2]*Si2025[1][1]) + eff[2].x[1]*Si2025[2][1])*T12025[1][2] + (-(eff[2].x[2]*Si2025[1][3]) + eff[2].x[1]*Si2025[2][3])*T12025[3][2]) + (-(eff[2].x[2]*S2520[3][1]) + eff[2].x[1]*S2520[3][2])*((-(eff[2].x[2]*Si2025[1][3]) + eff[2].x[1]*Si2025[2][3])*T12025[3][6] + Si2025[3][1]*T12025[4][6] + Si2025[3][2]*T12025[5][6]) + (-(eff[2].x[2]*S2520[1][1]) + eff[2].x[1]*S2520[1][2])*((-(eff[2].x[2]*Si2025[1][1]) + eff[2].x[1]*Si2025[2][1])*T12025[1][4] + Si2025[3][2]*T12025[5][4] + Si2025[3][3]*T12025[6][4]) + (-(eff[2].x[2]*S2520[2][1]) + eff[2].x[1]*S2520[2][2])*((-(eff[2].x[2]*Si2025[1][2]) + eff[2].x[1]*Si2025[2][2])*T12025[2][5] + Si2025[3][1]*T12025[4][5] + Si2025[3][3]*T12025[6][5]);
T2025[6][4]=S2520[3][1]*((-(eff[2].x[2]*Si2025[1][3]) + eff[2].x[1]*Si2025[2][3])*T12025[3][6] + Si2025[3][1]*T12025[4][6] + Si2025[3][2]*T12025[5][6]) + S2520[1][1]*((-(eff[2].x[2]*Si2025[1][1]) + eff[2].x[1]*Si2025[2][1])*T12025[1][4] + Si2025[3][2]*T12025[5][4] + Si2025[3][3]*T12025[6][4]) + S2520[2][1]*((-(eff[2].x[2]*Si2025[1][2]) + eff[2].x[1]*Si2025[2][2])*T12025[2][5] + Si2025[3][1]*T12025[4][5] + Si2025[3][3]*T12025[6][5]);
T2025[6][5]=S2520[3][2]*((-(eff[2].x[2]*Si2025[1][3]) + eff[2].x[1]*Si2025[2][3])*T12025[3][6] + Si2025[3][1]*T12025[4][6] + Si2025[3][2]*T12025[5][6]) + S2520[1][2]*((-(eff[2].x[2]*Si2025[1][1]) + eff[2].x[1]*Si2025[2][1])*T12025[1][4] + Si2025[3][2]*T12025[5][4] + Si2025[3][3]*T12025[6][4]) + S2520[2][2]*((-(eff[2].x[2]*Si2025[1][2]) + eff[2].x[1]*Si2025[2][2])*T12025[2][5] + Si2025[3][1]*T12025[4][5] + Si2025[3][3]*T12025[6][5]);
T2025[6][6]=S2520[3][3]*((-(eff[2].x[2]*Si2025[1][3]) + eff[2].x[1]*Si2025[2][3])*T12025[3][6] + Si2025[3][1]*T12025[4][6] + Si2025[3][2]*T12025[5][6]) + S2520[1][3]*((-(eff[2].x[2]*Si2025[1][1]) + eff[2].x[1]*Si2025[2][1])*T12025[1][4] + Si2025[3][2]*T12025[5][4] + Si2025[3][3]*T12025[6][4]) + S2520[2][3]*((-(eff[2].x[2]*Si2025[1][2]) + eff[2].x[1]*Si2025[2][2])*T12025[2][5] + Si2025[3][1]*T12025[4][5] + Si2025[3][3]*T12025[6][5]);



}


void
hoap3_ForDynArtfunc8(void)
     {




}


void
hoap3_ForDynArtfunc9(void)
     {




}


void
hoap3_ForDynArtfunc10(void)
      {




}


void
hoap3_ForDynArtfunc11(void)
      {




}


void
hoap3_ForDynArtfunc12(void)
      {
JA20[1][1]=0. + T2025[1][1];
JA20[1][2]=0. + links[12].mcm[3] + T2025[1][2];
JA20[1][3]=0. - links[12].mcm[2] + T2025[1][3];
JA20[1][4]=0. + links[12].m + T2025[1][4];
JA20[1][5]=0. + T2025[1][5];
JA20[1][6]=0. + T2025[1][6];

JA20[2][1]=0. - links[12].mcm[3] + T2025[2][1];
JA20[2][2]=0. + T2025[2][2];
JA20[2][3]=0. + links[12].mcm[1] + T2025[2][3];
JA20[2][4]=0. + T2025[2][4];
JA20[2][5]=0. + links[12].m + T2025[2][5];
JA20[2][6]=0. + T2025[2][6];

JA20[3][1]=0. + links[12].mcm[2] + T2025[3][1];
JA20[3][2]=0. - links[12].mcm[1] + T2025[3][2];
JA20[3][3]=0. + T2025[3][3];
JA20[3][4]=0. + T2025[3][4];
JA20[3][5]=0. + T2025[3][5];
JA20[3][6]=0. + links[12].m + T2025[3][6];

JA20[4][1]=0. + links[12].inertia[1][1] + T2025[4][1];
JA20[4][2]=0. + links[12].inertia[1][2] + T2025[4][2];
JA20[4][3]=0. + links[12].inertia[1][3] + T2025[4][3];
JA20[4][4]=0. + T2025[4][4];
JA20[4][5]=0. - links[12].mcm[3] + T2025[4][5];
JA20[4][6]=0. + links[12].mcm[2] + T2025[4][6];

JA20[5][1]=0. + links[12].inertia[1][2] + T2025[5][1];
JA20[5][2]=0. + links[12].inertia[2][2] + T2025[5][2];
JA20[5][3]=0. + links[12].inertia[2][3] + T2025[5][3];
JA20[5][4]=0. + links[12].mcm[3] + T2025[5][4];
JA20[5][5]=0. + T2025[5][5];
JA20[5][6]=0. - links[12].mcm[1] + T2025[5][6];

JA20[6][1]=0. + links[12].inertia[1][3] + T2025[6][1];
JA20[6][2]=0. + links[12].inertia[2][3] + T2025[6][2];
JA20[6][3]=0. + links[12].inertia[3][3] + T2025[6][3];
JA20[6][4]=0. - links[12].mcm[2] + T2025[6][4];
JA20[6][5]=0. + links[12].mcm[1] + T2025[6][5];
JA20[6][6]=0. + T2025[6][6];


h20[1]=JA20[1][3];
h20[2]=JA20[2][3];
h20[3]=JA20[3][3];
h20[4]=JA20[4][3];
h20[5]=JA20[5][3];
h20[6]=JA20[6][3];

d[20]=1.e-10 + h20[6];

T11920[1][1]=-((h20[1]*h20[4])/d[20]) + JA20[1][1];
T11920[1][2]=-((h20[1]*h20[5])/d[20]) + JA20[1][2];
T11920[1][3]=-((h20[1]*h20[6])/d[20]) + JA20[1][3];
T11920[1][4]=-(Power(h20[1],2)/d[20]) + JA20[1][4];
T11920[1][5]=-((h20[1]*h20[2])/d[20]) + JA20[1][5];
T11920[1][6]=-((h20[1]*h20[3])/d[20]) + JA20[1][6];

T11920[2][1]=-((h20[2]*h20[4])/d[20]) + JA20[2][1];
T11920[2][2]=-((h20[2]*h20[5])/d[20]) + JA20[2][2];
T11920[2][3]=-((h20[2]*h20[6])/d[20]) + JA20[2][3];
T11920[2][4]=-((h20[1]*h20[2])/d[20]) + JA20[2][4];
T11920[2][5]=-(Power(h20[2],2)/d[20]) + JA20[2][5];
T11920[2][6]=-((h20[2]*h20[3])/d[20]) + JA20[2][6];

T11920[3][1]=-((h20[3]*h20[4])/d[20]) + JA20[3][1];
T11920[3][2]=-((h20[3]*h20[5])/d[20]) + JA20[3][2];
T11920[3][3]=-((h20[3]*h20[6])/d[20]) + JA20[3][3];
T11920[3][4]=-((h20[1]*h20[3])/d[20]) + JA20[3][4];
T11920[3][5]=-((h20[2]*h20[3])/d[20]) + JA20[3][5];
T11920[3][6]=-(Power(h20[3],2)/d[20]) + JA20[3][6];

T11920[4][1]=-(Power(h20[4],2)/d[20]) + JA20[4][1];
T11920[4][2]=-((h20[4]*h20[5])/d[20]) + JA20[4][2];
T11920[4][3]=-((h20[4]*h20[6])/d[20]) + JA20[4][3];
T11920[4][4]=-((h20[1]*h20[4])/d[20]) + JA20[4][4];
T11920[4][5]=-((h20[2]*h20[4])/d[20]) + JA20[4][5];
T11920[4][6]=-((h20[3]*h20[4])/d[20]) + JA20[4][6];

T11920[5][1]=-((h20[4]*h20[5])/d[20]) + JA20[5][1];
T11920[5][2]=-(Power(h20[5],2)/d[20]) + JA20[5][2];
T11920[5][3]=-((h20[5]*h20[6])/d[20]) + JA20[5][3];
T11920[5][4]=-((h20[1]*h20[5])/d[20]) + JA20[5][4];
T11920[5][5]=-((h20[2]*h20[5])/d[20]) + JA20[5][5];
T11920[5][6]=-((h20[3]*h20[5])/d[20]) + JA20[5][6];

T11920[6][1]=-((h20[4]*h20[6])/d[20]) + JA20[6][1];
T11920[6][2]=-((h20[5]*h20[6])/d[20]) + JA20[6][2];
T11920[6][3]=-(Power(h20[6],2)/d[20]) + JA20[6][3];
T11920[6][4]=-((h20[1]*h20[6])/d[20]) + JA20[6][4];
T11920[6][5]=-((h20[2]*h20[6])/d[20]) + JA20[6][5];
T11920[6][6]=-((h20[3]*h20[6])/d[20]) + JA20[6][6];


T1920[1][1]=S2019[1][1]*(Si1920[1][1]*T11920[1][1] + Si1920[1][2]*T11920[2][1]) + S2019[2][1]*(Si1920[1][1]*T11920[1][2] + Si1920[1][2]*T11920[2][2]);
T1920[1][2]=Si1920[1][1]*T11920[1][3] + Si1920[1][2]*T11920[2][3];
T1920[1][3]=S2019[1][3]*(Si1920[1][1]*T11920[1][1] + Si1920[1][2]*T11920[2][1]) + S2019[2][3]*(Si1920[1][1]*T11920[1][2] + Si1920[1][2]*T11920[2][2]);
T1920[1][4]=S2019[1][1]*(Si1920[1][1]*T11920[1][4] + Si1920[1][2]*T11920[2][4]) + S2019[2][1]*(Si1920[1][1]*T11920[1][5] + Si1920[1][2]*T11920[2][5]);
T1920[1][5]=Si1920[1][1]*T11920[1][6] + Si1920[1][2]*T11920[2][6];
T1920[1][6]=S2019[1][3]*(Si1920[1][1]*T11920[1][4] + Si1920[1][2]*T11920[2][4]) + S2019[2][3]*(Si1920[1][1]*T11920[1][5] + Si1920[1][2]*T11920[2][5]);

T1920[2][1]=S2019[1][1]*T11920[3][1] + S2019[2][1]*T11920[3][2];
T1920[2][2]=T11920[3][3];
T1920[2][3]=S2019[1][3]*T11920[3][1] + S2019[2][3]*T11920[3][2];
T1920[2][4]=S2019[1][1]*T11920[3][4] + S2019[2][1]*T11920[3][5];
T1920[2][5]=T11920[3][6];
T1920[2][6]=S2019[1][3]*T11920[3][4] + S2019[2][3]*T11920[3][5];

T1920[3][1]=S2019[1][1]*(Si1920[3][1]*T11920[1][1] + Si1920[3][2]*T11920[2][1]) + S2019[2][1]*(Si1920[3][1]*T11920[1][2] + Si1920[3][2]*T11920[2][2]);
T1920[3][2]=Si1920[3][1]*T11920[1][3] + Si1920[3][2]*T11920[2][3];
T1920[3][3]=S2019[1][3]*(Si1920[3][1]*T11920[1][1] + Si1920[3][2]*T11920[2][1]) + S2019[2][3]*(Si1920[3][1]*T11920[1][2] + Si1920[3][2]*T11920[2][2]);
T1920[3][4]=S2019[1][1]*(Si1920[3][1]*T11920[1][4] + Si1920[3][2]*T11920[2][4]) + S2019[2][1]*(Si1920[3][1]*T11920[1][5] + Si1920[3][2]*T11920[2][5]);
T1920[3][5]=Si1920[3][1]*T11920[1][6] + Si1920[3][2]*T11920[2][6];
T1920[3][6]=S2019[1][3]*(Si1920[3][1]*T11920[1][4] + Si1920[3][2]*T11920[2][4]) + S2019[2][3]*(Si1920[3][1]*T11920[1][5] + Si1920[3][2]*T11920[2][5]);

T1920[4][1]=S2019[1][1]*(Si1920[1][1]*T11920[4][1] + Si1920[1][2]*T11920[5][1]) + S2019[2][1]*(Si1920[1][1]*T11920[4][2] + Si1920[1][2]*T11920[5][2]);
T1920[4][2]=Si1920[1][1]*T11920[4][3] + Si1920[1][2]*T11920[5][3];
T1920[4][3]=S2019[1][3]*(Si1920[1][1]*T11920[4][1] + Si1920[1][2]*T11920[5][1]) + S2019[2][3]*(Si1920[1][1]*T11920[4][2] + Si1920[1][2]*T11920[5][2]);
T1920[4][4]=S2019[1][1]*(Si1920[1][1]*T11920[4][4] + Si1920[1][2]*T11920[5][4]) + S2019[2][1]*(Si1920[1][1]*T11920[4][5] + Si1920[1][2]*T11920[5][5]);
T1920[4][5]=Si1920[1][1]*T11920[4][6] + Si1920[1][2]*T11920[5][6];
T1920[4][6]=S2019[1][3]*(Si1920[1][1]*T11920[4][4] + Si1920[1][2]*T11920[5][4]) + S2019[2][3]*(Si1920[1][1]*T11920[4][5] + Si1920[1][2]*T11920[5][5]);

T1920[5][1]=S2019[1][1]*T11920[6][1] + S2019[2][1]*T11920[6][2];
T1920[5][2]=T11920[6][3];
T1920[5][3]=S2019[1][3]*T11920[6][1] + S2019[2][3]*T11920[6][2];
T1920[5][4]=S2019[1][1]*T11920[6][4] + S2019[2][1]*T11920[6][5];
T1920[5][5]=T11920[6][6];
T1920[5][6]=S2019[1][3]*T11920[6][4] + S2019[2][3]*T11920[6][5];

T1920[6][1]=S2019[1][1]*(Si1920[3][1]*T11920[4][1] + Si1920[3][2]*T11920[5][1]) + S2019[2][1]*(Si1920[3][1]*T11920[4][2] + Si1920[3][2]*T11920[5][2]);
T1920[6][2]=Si1920[3][1]*T11920[4][3] + Si1920[3][2]*T11920[5][3];
T1920[6][3]=S2019[1][3]*(Si1920[3][1]*T11920[4][1] + Si1920[3][2]*T11920[5][1]) + S2019[2][3]*(Si1920[3][1]*T11920[4][2] + Si1920[3][2]*T11920[5][2]);
T1920[6][4]=S2019[1][1]*(Si1920[3][1]*T11920[4][4] + Si1920[3][2]*T11920[5][4]) + S2019[2][1]*(Si1920[3][1]*T11920[4][5] + Si1920[3][2]*T11920[5][5]);
T1920[6][5]=Si1920[3][1]*T11920[4][6] + Si1920[3][2]*T11920[5][6];
T1920[6][6]=S2019[1][3]*(Si1920[3][1]*T11920[4][4] + Si1920[3][2]*T11920[5][4]) + S2019[2][3]*(Si1920[3][1]*T11920[4][5] + Si1920[3][2]*T11920[5][5]);



}


void
hoap3_ForDynArtfunc13(void)
      {
JA19[1][1]=T1920[1][1];
JA19[1][2]=links[11].mcm[3] + T1920[1][2];
JA19[1][3]=-links[11].mcm[2] + T1920[1][3];
JA19[1][4]=links[11].m + T1920[1][4];
JA19[1][5]=T1920[1][5];
JA19[1][6]=T1920[1][6];

JA19[2][1]=-links[11].mcm[3] + T1920[2][1];
JA19[2][2]=T1920[2][2];
JA19[2][3]=links[11].mcm[1] + T1920[2][3];
JA19[2][4]=T1920[2][4];
JA19[2][5]=links[11].m + T1920[2][5];
JA19[2][6]=T1920[2][6];

JA19[3][1]=links[11].mcm[2] + T1920[3][1];
JA19[3][2]=-links[11].mcm[1] + T1920[3][2];
JA19[3][3]=T1920[3][3];
JA19[3][4]=T1920[3][4];
JA19[3][5]=T1920[3][5];
JA19[3][6]=links[11].m + T1920[3][6];

JA19[4][1]=links[11].inertia[1][1] + T1920[4][1];
JA19[4][2]=links[11].inertia[1][2] + T1920[4][2];
JA19[4][3]=links[11].inertia[1][3] + T1920[4][3];
JA19[4][4]=T1920[4][4];
JA19[4][5]=-links[11].mcm[3] + T1920[4][5];
JA19[4][6]=links[11].mcm[2] + T1920[4][6];

JA19[5][1]=links[11].inertia[1][2] + T1920[5][1];
JA19[5][2]=links[11].inertia[2][2] + T1920[5][2];
JA19[5][3]=links[11].inertia[2][3] + T1920[5][3];
JA19[5][4]=links[11].mcm[3] + T1920[5][4];
JA19[5][5]=T1920[5][5];
JA19[5][6]=-links[11].mcm[1] + T1920[5][6];

JA19[6][1]=links[11].inertia[1][3] + T1920[6][1];
JA19[6][2]=links[11].inertia[2][3] + T1920[6][2];
JA19[6][3]=links[11].inertia[3][3] + T1920[6][3];
JA19[6][4]=-links[11].mcm[2] + T1920[6][4];
JA19[6][5]=links[11].mcm[1] + T1920[6][5];
JA19[6][6]=T1920[6][6];


h19[1]=JA19[1][3];
h19[2]=JA19[2][3];
h19[3]=JA19[3][3];
h19[4]=JA19[4][3];
h19[5]=JA19[5][3];
h19[6]=JA19[6][3];

d[19]=1.e-10 + h19[6];

T11819[1][1]=-((h19[1]*h19[4])/d[19]) + JA19[1][1];
T11819[1][2]=-((h19[1]*h19[5])/d[19]) + JA19[1][2];
T11819[1][3]=-((h19[1]*h19[6])/d[19]) + JA19[1][3];
T11819[1][4]=-(Power(h19[1],2)/d[19]) + JA19[1][4];
T11819[1][5]=-((h19[1]*h19[2])/d[19]) + JA19[1][5];
T11819[1][6]=-((h19[1]*h19[3])/d[19]) + JA19[1][6];

T11819[2][1]=-((h19[2]*h19[4])/d[19]) + JA19[2][1];
T11819[2][2]=-((h19[2]*h19[5])/d[19]) + JA19[2][2];
T11819[2][3]=-((h19[2]*h19[6])/d[19]) + JA19[2][3];
T11819[2][4]=-((h19[1]*h19[2])/d[19]) + JA19[2][4];
T11819[2][5]=-(Power(h19[2],2)/d[19]) + JA19[2][5];
T11819[2][6]=-((h19[2]*h19[3])/d[19]) + JA19[2][6];

T11819[3][1]=-((h19[3]*h19[4])/d[19]) + JA19[3][1];
T11819[3][2]=-((h19[3]*h19[5])/d[19]) + JA19[3][2];
T11819[3][3]=-((h19[3]*h19[6])/d[19]) + JA19[3][3];
T11819[3][4]=-((h19[1]*h19[3])/d[19]) + JA19[3][4];
T11819[3][5]=-((h19[2]*h19[3])/d[19]) + JA19[3][5];
T11819[3][6]=-(Power(h19[3],2)/d[19]) + JA19[3][6];

T11819[4][1]=-(Power(h19[4],2)/d[19]) + JA19[4][1];
T11819[4][2]=-((h19[4]*h19[5])/d[19]) + JA19[4][2];
T11819[4][3]=-((h19[4]*h19[6])/d[19]) + JA19[4][3];
T11819[4][4]=-((h19[1]*h19[4])/d[19]) + JA19[4][4];
T11819[4][5]=-((h19[2]*h19[4])/d[19]) + JA19[4][5];
T11819[4][6]=-((h19[3]*h19[4])/d[19]) + JA19[4][6];

T11819[5][1]=-((h19[4]*h19[5])/d[19]) + JA19[5][1];
T11819[5][2]=-(Power(h19[5],2)/d[19]) + JA19[5][2];
T11819[5][3]=-((h19[5]*h19[6])/d[19]) + JA19[5][3];
T11819[5][4]=-((h19[1]*h19[5])/d[19]) + JA19[5][4];
T11819[5][5]=-((h19[2]*h19[5])/d[19]) + JA19[5][5];
T11819[5][6]=-((h19[3]*h19[5])/d[19]) + JA19[5][6];

T11819[6][1]=-((h19[4]*h19[6])/d[19]) + JA19[6][1];
T11819[6][2]=-((h19[5]*h19[6])/d[19]) + JA19[6][2];
T11819[6][3]=-(Power(h19[6],2)/d[19]) + JA19[6][3];
T11819[6][4]=-((h19[1]*h19[6])/d[19]) + JA19[6][4];
T11819[6][5]=-((h19[2]*h19[6])/d[19]) + JA19[6][5];
T11819[6][6]=-((h19[3]*h19[6])/d[19]) + JA19[6][6];


T1819[1][1]=S1918[1][1]*(Si1819[1][1]*T11819[1][1] + Si1819[1][2]*T11819[2][1]) + S1918[2][1]*(Si1819[1][1]*T11819[1][2] + Si1819[1][2]*T11819[2][2]);
T1819[1][2]=S1918[1][2]*(Si1819[1][1]*T11819[1][1] + Si1819[1][2]*T11819[2][1]) + S1918[2][2]*(Si1819[1][1]*T11819[1][2] + Si1819[1][2]*T11819[2][2]) + LEGLINK3*(Si1819[1][1]*T11819[1][6] + Si1819[1][2]*T11819[2][6]);
T1819[1][3]=Si1819[1][1]*T11819[1][3] + Si1819[1][2]*T11819[2][3] - LEGLINK3*S1918[1][2]*(Si1819[1][1]*T11819[1][4] + Si1819[1][2]*T11819[2][4]) - LEGLINK3*S1918[2][2]*(Si1819[1][1]*T11819[1][5] + Si1819[1][2]*T11819[2][5]);
T1819[1][4]=S1918[1][1]*(Si1819[1][1]*T11819[1][4] + Si1819[1][2]*T11819[2][4]) + S1918[2][1]*(Si1819[1][1]*T11819[1][5] + Si1819[1][2]*T11819[2][5]);
T1819[1][5]=S1918[1][2]*(Si1819[1][1]*T11819[1][4] + Si1819[1][2]*T11819[2][4]) + S1918[2][2]*(Si1819[1][1]*T11819[1][5] + Si1819[1][2]*T11819[2][5]);
T1819[1][6]=Si1819[1][1]*T11819[1][6] + Si1819[1][2]*T11819[2][6];

T1819[2][1]=S1918[1][1]*(Si1819[2][1]*T11819[1][1] + Si1819[2][2]*T11819[2][1]) + S1918[2][1]*(Si1819[2][1]*T11819[1][2] + Si1819[2][2]*T11819[2][2]);
T1819[2][2]=S1918[1][2]*(Si1819[2][1]*T11819[1][1] + Si1819[2][2]*T11819[2][1]) + S1918[2][2]*(Si1819[2][1]*T11819[1][2] + Si1819[2][2]*T11819[2][2]) + LEGLINK3*(Si1819[2][1]*T11819[1][6] + Si1819[2][2]*T11819[2][6]);
T1819[2][3]=Si1819[2][1]*T11819[1][3] + Si1819[2][2]*T11819[2][3] - LEGLINK3*S1918[1][2]*(Si1819[2][1]*T11819[1][4] + Si1819[2][2]*T11819[2][4]) - LEGLINK3*S1918[2][2]*(Si1819[2][1]*T11819[1][5] + Si1819[2][2]*T11819[2][5]);
T1819[2][4]=S1918[1][1]*(Si1819[2][1]*T11819[1][4] + Si1819[2][2]*T11819[2][4]) + S1918[2][1]*(Si1819[2][1]*T11819[1][5] + Si1819[2][2]*T11819[2][5]);
T1819[2][5]=S1918[1][2]*(Si1819[2][1]*T11819[1][4] + Si1819[2][2]*T11819[2][4]) + S1918[2][2]*(Si1819[2][1]*T11819[1][5] + Si1819[2][2]*T11819[2][5]);
T1819[2][6]=Si1819[2][1]*T11819[1][6] + Si1819[2][2]*T11819[2][6];

T1819[3][1]=S1918[1][1]*T11819[3][1] + S1918[2][1]*T11819[3][2];
T1819[3][2]=S1918[1][2]*T11819[3][1] + S1918[2][2]*T11819[3][2] + LEGLINK3*T11819[3][6];
T1819[3][3]=T11819[3][3] - LEGLINK3*S1918[1][2]*T11819[3][4] - LEGLINK3*S1918[2][2]*T11819[3][5];
T1819[3][4]=S1918[1][1]*T11819[3][4] + S1918[2][1]*T11819[3][5];
T1819[3][5]=S1918[1][2]*T11819[3][4] + S1918[2][2]*T11819[3][5];
T1819[3][6]=T11819[3][6];

T1819[4][1]=S1918[1][1]*(Si1819[1][1]*T11819[4][1] + Si1819[1][2]*T11819[5][1]) + S1918[2][1]*(Si1819[1][1]*T11819[4][2] + Si1819[1][2]*T11819[5][2]);
T1819[4][2]=S1918[1][2]*(Si1819[1][1]*T11819[4][1] + Si1819[1][2]*T11819[5][1]) + S1918[2][2]*(Si1819[1][1]*T11819[4][2] + Si1819[1][2]*T11819[5][2]) + LEGLINK3*(Si1819[1][1]*T11819[4][6] + Si1819[1][2]*T11819[5][6]);
T1819[4][3]=Si1819[1][1]*T11819[4][3] + Si1819[1][2]*T11819[5][3] - LEGLINK3*S1918[1][2]*(Si1819[1][1]*T11819[4][4] + Si1819[1][2]*T11819[5][4]) - LEGLINK3*S1918[2][2]*(Si1819[1][1]*T11819[4][5] + Si1819[1][2]*T11819[5][5]);
T1819[4][4]=S1918[1][1]*(Si1819[1][1]*T11819[4][4] + Si1819[1][2]*T11819[5][4]) + S1918[2][1]*(Si1819[1][1]*T11819[4][5] + Si1819[1][2]*T11819[5][5]);
T1819[4][5]=S1918[1][2]*(Si1819[1][1]*T11819[4][4] + Si1819[1][2]*T11819[5][4]) + S1918[2][2]*(Si1819[1][1]*T11819[4][5] + Si1819[1][2]*T11819[5][5]);
T1819[4][6]=Si1819[1][1]*T11819[4][6] + Si1819[1][2]*T11819[5][6];

T1819[5][1]=S1918[1][1]*(LEGLINK3*T11819[3][1] + Si1819[2][1]*T11819[4][1] + Si1819[2][2]*T11819[5][1]) + S1918[2][1]*(LEGLINK3*T11819[3][2] + Si1819[2][1]*T11819[4][2] + Si1819[2][2]*T11819[5][2]);
T1819[5][2]=S1918[1][2]*(LEGLINK3*T11819[3][1] + Si1819[2][1]*T11819[4][1] + Si1819[2][2]*T11819[5][1]) + S1918[2][2]*(LEGLINK3*T11819[3][2] + Si1819[2][1]*T11819[4][2] + Si1819[2][2]*T11819[5][2]) + LEGLINK3*(LEGLINK3*T11819[3][6] + Si1819[2][1]*T11819[4][6] + Si1819[2][2]*T11819[5][6]);
T1819[5][3]=LEGLINK3*T11819[3][3] + Si1819[2][1]*T11819[4][3] + Si1819[2][2]*T11819[5][3] - LEGLINK3*S1918[1][2]*(LEGLINK3*T11819[3][4] + Si1819[2][1]*T11819[4][4] + Si1819[2][2]*T11819[5][4]) - LEGLINK3*S1918[2][2]*(LEGLINK3*T11819[3][5] + Si1819[2][1]*T11819[4][5] + Si1819[2][2]*T11819[5][5]);
T1819[5][4]=S1918[1][1]*(LEGLINK3*T11819[3][4] + Si1819[2][1]*T11819[4][4] + Si1819[2][2]*T11819[5][4]) + S1918[2][1]*(LEGLINK3*T11819[3][5] + Si1819[2][1]*T11819[4][5] + Si1819[2][2]*T11819[5][5]);
T1819[5][5]=S1918[1][2]*(LEGLINK3*T11819[3][4] + Si1819[2][1]*T11819[4][4] + Si1819[2][2]*T11819[5][4]) + S1918[2][2]*(LEGLINK3*T11819[3][5] + Si1819[2][1]*T11819[4][5] + Si1819[2][2]*T11819[5][5]);
T1819[5][6]=LEGLINK3*T11819[3][6] + Si1819[2][1]*T11819[4][6] + Si1819[2][2]*T11819[5][6];

T1819[6][1]=S1918[1][1]*(-(LEGLINK3*Si1819[2][1]*T11819[1][1]) - LEGLINK3*Si1819[2][2]*T11819[2][1] + T11819[6][1]) + S1918[2][1]*(-(LEGLINK3*Si1819[2][1]*T11819[1][2]) - LEGLINK3*Si1819[2][2]*T11819[2][2] + T11819[6][2]);
T1819[6][2]=S1918[1][2]*(-(LEGLINK3*Si1819[2][1]*T11819[1][1]) - LEGLINK3*Si1819[2][2]*T11819[2][1] + T11819[6][1]) + S1918[2][2]*(-(LEGLINK3*Si1819[2][1]*T11819[1][2]) - LEGLINK3*Si1819[2][2]*T11819[2][2] + T11819[6][2]) + LEGLINK3*(-(LEGLINK3*Si1819[2][1]*T11819[1][6]) - LEGLINK3*Si1819[2][2]*T11819[2][6] + T11819[6][6]);
T1819[6][3]=-(LEGLINK3*Si1819[2][1]*T11819[1][3]) - LEGLINK3*Si1819[2][2]*T11819[2][3] + T11819[6][3] - LEGLINK3*S1918[1][2]*(-(LEGLINK3*Si1819[2][1]*T11819[1][4]) - LEGLINK3*Si1819[2][2]*T11819[2][4] + T11819[6][4]) - LEGLINK3*S1918[2][2]*(-(LEGLINK3*Si1819[2][1]*T11819[1][5]) - LEGLINK3*Si1819[2][2]*T11819[2][5] + T11819[6][5]);
T1819[6][4]=S1918[1][1]*(-(LEGLINK3*Si1819[2][1]*T11819[1][4]) - LEGLINK3*Si1819[2][2]*T11819[2][4] + T11819[6][4]) + S1918[2][1]*(-(LEGLINK3*Si1819[2][1]*T11819[1][5]) - LEGLINK3*Si1819[2][2]*T11819[2][5] + T11819[6][5]);
T1819[6][5]=S1918[1][2]*(-(LEGLINK3*Si1819[2][1]*T11819[1][4]) - LEGLINK3*Si1819[2][2]*T11819[2][4] + T11819[6][4]) + S1918[2][2]*(-(LEGLINK3*Si1819[2][1]*T11819[1][5]) - LEGLINK3*Si1819[2][2]*T11819[2][5] + T11819[6][5]);
T1819[6][6]=-(LEGLINK3*Si1819[2][1]*T11819[1][6]) - LEGLINK3*Si1819[2][2]*T11819[2][6] + T11819[6][6];



}


void
hoap3_ForDynArtfunc14(void)
      {
JA18[1][1]=T1819[1][1];
JA18[1][2]=links[10].mcm[3] + T1819[1][2];
JA18[1][3]=-links[10].mcm[2] + T1819[1][3];
JA18[1][4]=links[10].m + T1819[1][4];
JA18[1][5]=T1819[1][5];
JA18[1][6]=T1819[1][6];

JA18[2][1]=-links[10].mcm[3] + T1819[2][1];
JA18[2][2]=T1819[2][2];
JA18[2][3]=links[10].mcm[1] + T1819[2][3];
JA18[2][4]=T1819[2][4];
JA18[2][5]=links[10].m + T1819[2][5];
JA18[2][6]=T1819[2][6];

JA18[3][1]=links[10].mcm[2] + T1819[3][1];
JA18[3][2]=-links[10].mcm[1] + T1819[3][2];
JA18[3][3]=T1819[3][3];
JA18[3][4]=T1819[3][4];
JA18[3][5]=T1819[3][5];
JA18[3][6]=links[10].m + T1819[3][6];

JA18[4][1]=links[10].inertia[1][1] + T1819[4][1];
JA18[4][2]=links[10].inertia[1][2] + T1819[4][2];
JA18[4][3]=links[10].inertia[1][3] + T1819[4][3];
JA18[4][4]=T1819[4][4];
JA18[4][5]=-links[10].mcm[3] + T1819[4][5];
JA18[4][6]=links[10].mcm[2] + T1819[4][6];

JA18[5][1]=links[10].inertia[1][2] + T1819[5][1];
JA18[5][2]=links[10].inertia[2][2] + T1819[5][2];
JA18[5][3]=links[10].inertia[2][3] + T1819[5][3];
JA18[5][4]=links[10].mcm[3] + T1819[5][4];
JA18[5][5]=T1819[5][5];
JA18[5][6]=-links[10].mcm[1] + T1819[5][6];

JA18[6][1]=links[10].inertia[1][3] + T1819[6][1];
JA18[6][2]=links[10].inertia[2][3] + T1819[6][2];
JA18[6][3]=links[10].inertia[3][3] + T1819[6][3];
JA18[6][4]=-links[10].mcm[2] + T1819[6][4];
JA18[6][5]=links[10].mcm[1] + T1819[6][5];
JA18[6][6]=T1819[6][6];


h18[1]=JA18[1][3];
h18[2]=JA18[2][3];
h18[3]=JA18[3][3];
h18[4]=JA18[4][3];
h18[5]=JA18[5][3];
h18[6]=JA18[6][3];

d[18]=1.e-10 + h18[6];

T11718[1][1]=-((h18[1]*h18[4])/d[18]) + JA18[1][1];
T11718[1][2]=-((h18[1]*h18[5])/d[18]) + JA18[1][2];
T11718[1][3]=-((h18[1]*h18[6])/d[18]) + JA18[1][3];
T11718[1][4]=-(Power(h18[1],2)/d[18]) + JA18[1][4];
T11718[1][5]=-((h18[1]*h18[2])/d[18]) + JA18[1][5];
T11718[1][6]=-((h18[1]*h18[3])/d[18]) + JA18[1][6];

T11718[2][1]=-((h18[2]*h18[4])/d[18]) + JA18[2][1];
T11718[2][2]=-((h18[2]*h18[5])/d[18]) + JA18[2][2];
T11718[2][3]=-((h18[2]*h18[6])/d[18]) + JA18[2][3];
T11718[2][4]=-((h18[1]*h18[2])/d[18]) + JA18[2][4];
T11718[2][5]=-(Power(h18[2],2)/d[18]) + JA18[2][5];
T11718[2][6]=-((h18[2]*h18[3])/d[18]) + JA18[2][6];

T11718[3][1]=-((h18[3]*h18[4])/d[18]) + JA18[3][1];
T11718[3][2]=-((h18[3]*h18[5])/d[18]) + JA18[3][2];
T11718[3][3]=-((h18[3]*h18[6])/d[18]) + JA18[3][3];
T11718[3][4]=-((h18[1]*h18[3])/d[18]) + JA18[3][4];
T11718[3][5]=-((h18[2]*h18[3])/d[18]) + JA18[3][5];
T11718[3][6]=-(Power(h18[3],2)/d[18]) + JA18[3][6];

T11718[4][1]=-(Power(h18[4],2)/d[18]) + JA18[4][1];
T11718[4][2]=-((h18[4]*h18[5])/d[18]) + JA18[4][2];
T11718[4][3]=-((h18[4]*h18[6])/d[18]) + JA18[4][3];
T11718[4][4]=-((h18[1]*h18[4])/d[18]) + JA18[4][4];
T11718[4][5]=-((h18[2]*h18[4])/d[18]) + JA18[4][5];
T11718[4][6]=-((h18[3]*h18[4])/d[18]) + JA18[4][6];

T11718[5][1]=-((h18[4]*h18[5])/d[18]) + JA18[5][1];
T11718[5][2]=-(Power(h18[5],2)/d[18]) + JA18[5][2];
T11718[5][3]=-((h18[5]*h18[6])/d[18]) + JA18[5][3];
T11718[5][4]=-((h18[1]*h18[5])/d[18]) + JA18[5][4];
T11718[5][5]=-((h18[2]*h18[5])/d[18]) + JA18[5][5];
T11718[5][6]=-((h18[3]*h18[5])/d[18]) + JA18[5][6];

T11718[6][1]=-((h18[4]*h18[6])/d[18]) + JA18[6][1];
T11718[6][2]=-((h18[5]*h18[6])/d[18]) + JA18[6][2];
T11718[6][3]=-(Power(h18[6],2)/d[18]) + JA18[6][3];
T11718[6][4]=-((h18[1]*h18[6])/d[18]) + JA18[6][4];
T11718[6][5]=-((h18[2]*h18[6])/d[18]) + JA18[6][5];
T11718[6][6]=-((h18[3]*h18[6])/d[18]) + JA18[6][6];


T1718[1][1]=S1817[1][1]*(Si1718[1][1]*T11718[1][1] + Si1718[1][2]*T11718[2][1]) + S1817[2][1]*(Si1718[1][1]*T11718[1][2] + Si1718[1][2]*T11718[2][2]);
T1718[1][2]=S1817[1][2]*(Si1718[1][1]*T11718[1][1] + Si1718[1][2]*T11718[2][1]) + S1817[2][2]*(Si1718[1][1]*T11718[1][2] + Si1718[1][2]*T11718[2][2]) + LEGLINK2*(Si1718[1][1]*T11718[1][6] + Si1718[1][2]*T11718[2][6]);
T1718[1][3]=Si1718[1][1]*T11718[1][3] + Si1718[1][2]*T11718[2][3] - LEGLINK2*S1817[1][2]*(Si1718[1][1]*T11718[1][4] + Si1718[1][2]*T11718[2][4]) - LEGLINK2*S1817[2][2]*(Si1718[1][1]*T11718[1][5] + Si1718[1][2]*T11718[2][5]);
T1718[1][4]=S1817[1][1]*(Si1718[1][1]*T11718[1][4] + Si1718[1][2]*T11718[2][4]) + S1817[2][1]*(Si1718[1][1]*T11718[1][5] + Si1718[1][2]*T11718[2][5]);
T1718[1][5]=S1817[1][2]*(Si1718[1][1]*T11718[1][4] + Si1718[1][2]*T11718[2][4]) + S1817[2][2]*(Si1718[1][1]*T11718[1][5] + Si1718[1][2]*T11718[2][5]);
T1718[1][6]=Si1718[1][1]*T11718[1][6] + Si1718[1][2]*T11718[2][6];

T1718[2][1]=S1817[1][1]*(Si1718[2][1]*T11718[1][1] + Si1718[2][2]*T11718[2][1]) + S1817[2][1]*(Si1718[2][1]*T11718[1][2] + Si1718[2][2]*T11718[2][2]);
T1718[2][2]=S1817[1][2]*(Si1718[2][1]*T11718[1][1] + Si1718[2][2]*T11718[2][1]) + S1817[2][2]*(Si1718[2][1]*T11718[1][2] + Si1718[2][2]*T11718[2][2]) + LEGLINK2*(Si1718[2][1]*T11718[1][6] + Si1718[2][2]*T11718[2][6]);
T1718[2][3]=Si1718[2][1]*T11718[1][3] + Si1718[2][2]*T11718[2][3] - LEGLINK2*S1817[1][2]*(Si1718[2][1]*T11718[1][4] + Si1718[2][2]*T11718[2][4]) - LEGLINK2*S1817[2][2]*(Si1718[2][1]*T11718[1][5] + Si1718[2][2]*T11718[2][5]);
T1718[2][4]=S1817[1][1]*(Si1718[2][1]*T11718[1][4] + Si1718[2][2]*T11718[2][4]) + S1817[2][1]*(Si1718[2][1]*T11718[1][5] + Si1718[2][2]*T11718[2][5]);
T1718[2][5]=S1817[1][2]*(Si1718[2][1]*T11718[1][4] + Si1718[2][2]*T11718[2][4]) + S1817[2][2]*(Si1718[2][1]*T11718[1][5] + Si1718[2][2]*T11718[2][5]);
T1718[2][6]=Si1718[2][1]*T11718[1][6] + Si1718[2][2]*T11718[2][6];

T1718[3][1]=S1817[1][1]*T11718[3][1] + S1817[2][1]*T11718[3][2];
T1718[3][2]=S1817[1][2]*T11718[3][1] + S1817[2][2]*T11718[3][2] + LEGLINK2*T11718[3][6];
T1718[3][3]=T11718[3][3] - LEGLINK2*S1817[1][2]*T11718[3][4] - LEGLINK2*S1817[2][2]*T11718[3][5];
T1718[3][4]=S1817[1][1]*T11718[3][4] + S1817[2][1]*T11718[3][5];
T1718[3][5]=S1817[1][2]*T11718[3][4] + S1817[2][2]*T11718[3][5];
T1718[3][6]=T11718[3][6];

T1718[4][1]=S1817[1][1]*(Si1718[1][1]*T11718[4][1] + Si1718[1][2]*T11718[5][1]) + S1817[2][1]*(Si1718[1][1]*T11718[4][2] + Si1718[1][2]*T11718[5][2]);
T1718[4][2]=S1817[1][2]*(Si1718[1][1]*T11718[4][1] + Si1718[1][2]*T11718[5][1]) + S1817[2][2]*(Si1718[1][1]*T11718[4][2] + Si1718[1][2]*T11718[5][2]) + LEGLINK2*(Si1718[1][1]*T11718[4][6] + Si1718[1][2]*T11718[5][6]);
T1718[4][3]=Si1718[1][1]*T11718[4][3] + Si1718[1][2]*T11718[5][3] - LEGLINK2*S1817[1][2]*(Si1718[1][1]*T11718[4][4] + Si1718[1][2]*T11718[5][4]) - LEGLINK2*S1817[2][2]*(Si1718[1][1]*T11718[4][5] + Si1718[1][2]*T11718[5][5]);
T1718[4][4]=S1817[1][1]*(Si1718[1][1]*T11718[4][4] + Si1718[1][2]*T11718[5][4]) + S1817[2][1]*(Si1718[1][1]*T11718[4][5] + Si1718[1][2]*T11718[5][5]);
T1718[4][5]=S1817[1][2]*(Si1718[1][1]*T11718[4][4] + Si1718[1][2]*T11718[5][4]) + S1817[2][2]*(Si1718[1][1]*T11718[4][5] + Si1718[1][2]*T11718[5][5]);
T1718[4][6]=Si1718[1][1]*T11718[4][6] + Si1718[1][2]*T11718[5][6];

T1718[5][1]=S1817[1][1]*(LEGLINK2*T11718[3][1] + Si1718[2][1]*T11718[4][1] + Si1718[2][2]*T11718[5][1]) + S1817[2][1]*(LEGLINK2*T11718[3][2] + Si1718[2][1]*T11718[4][2] + Si1718[2][2]*T11718[5][2]);
T1718[5][2]=S1817[1][2]*(LEGLINK2*T11718[3][1] + Si1718[2][1]*T11718[4][1] + Si1718[2][2]*T11718[5][1]) + S1817[2][2]*(LEGLINK2*T11718[3][2] + Si1718[2][1]*T11718[4][2] + Si1718[2][2]*T11718[5][2]) + LEGLINK2*(LEGLINK2*T11718[3][6] + Si1718[2][1]*T11718[4][6] + Si1718[2][2]*T11718[5][6]);
T1718[5][3]=LEGLINK2*T11718[3][3] + Si1718[2][1]*T11718[4][3] + Si1718[2][2]*T11718[5][3] - LEGLINK2*S1817[1][2]*(LEGLINK2*T11718[3][4] + Si1718[2][1]*T11718[4][4] + Si1718[2][2]*T11718[5][4]) - LEGLINK2*S1817[2][2]*(LEGLINK2*T11718[3][5] + Si1718[2][1]*T11718[4][5] + Si1718[2][2]*T11718[5][5]);
T1718[5][4]=S1817[1][1]*(LEGLINK2*T11718[3][4] + Si1718[2][1]*T11718[4][4] + Si1718[2][2]*T11718[5][4]) + S1817[2][1]*(LEGLINK2*T11718[3][5] + Si1718[2][1]*T11718[4][5] + Si1718[2][2]*T11718[5][5]);
T1718[5][5]=S1817[1][2]*(LEGLINK2*T11718[3][4] + Si1718[2][1]*T11718[4][4] + Si1718[2][2]*T11718[5][4]) + S1817[2][2]*(LEGLINK2*T11718[3][5] + Si1718[2][1]*T11718[4][5] + Si1718[2][2]*T11718[5][5]);
T1718[5][6]=LEGLINK2*T11718[3][6] + Si1718[2][1]*T11718[4][6] + Si1718[2][2]*T11718[5][6];

T1718[6][1]=S1817[1][1]*(-(LEGLINK2*Si1718[2][1]*T11718[1][1]) - LEGLINK2*Si1718[2][2]*T11718[2][1] + T11718[6][1]) + S1817[2][1]*(-(LEGLINK2*Si1718[2][1]*T11718[1][2]) - LEGLINK2*Si1718[2][2]*T11718[2][2] + T11718[6][2]);
T1718[6][2]=S1817[1][2]*(-(LEGLINK2*Si1718[2][1]*T11718[1][1]) - LEGLINK2*Si1718[2][2]*T11718[2][1] + T11718[6][1]) + S1817[2][2]*(-(LEGLINK2*Si1718[2][1]*T11718[1][2]) - LEGLINK2*Si1718[2][2]*T11718[2][2] + T11718[6][2]) + LEGLINK2*(-(LEGLINK2*Si1718[2][1]*T11718[1][6]) - LEGLINK2*Si1718[2][2]*T11718[2][6] + T11718[6][6]);
T1718[6][3]=-(LEGLINK2*Si1718[2][1]*T11718[1][3]) - LEGLINK2*Si1718[2][2]*T11718[2][3] + T11718[6][3] - LEGLINK2*S1817[1][2]*(-(LEGLINK2*Si1718[2][1]*T11718[1][4]) - LEGLINK2*Si1718[2][2]*T11718[2][4] + T11718[6][4]) - LEGLINK2*S1817[2][2]*(-(LEGLINK2*Si1718[2][1]*T11718[1][5]) - LEGLINK2*Si1718[2][2]*T11718[2][5] + T11718[6][5]);
T1718[6][4]=S1817[1][1]*(-(LEGLINK2*Si1718[2][1]*T11718[1][4]) - LEGLINK2*Si1718[2][2]*T11718[2][4] + T11718[6][4]) + S1817[2][1]*(-(LEGLINK2*Si1718[2][1]*T11718[1][5]) - LEGLINK2*Si1718[2][2]*T11718[2][5] + T11718[6][5]);
T1718[6][5]=S1817[1][2]*(-(LEGLINK2*Si1718[2][1]*T11718[1][4]) - LEGLINK2*Si1718[2][2]*T11718[2][4] + T11718[6][4]) + S1817[2][2]*(-(LEGLINK2*Si1718[2][1]*T11718[1][5]) - LEGLINK2*Si1718[2][2]*T11718[2][5] + T11718[6][5]);
T1718[6][6]=-(LEGLINK2*Si1718[2][1]*T11718[1][6]) - LEGLINK2*Si1718[2][2]*T11718[2][6] + T11718[6][6];



}


void
hoap3_ForDynArtfunc15(void)
      {
JA17[1][1]=T1718[1][1];
JA17[1][2]=links[9].mcm[3] + T1718[1][2];
JA17[1][3]=-links[9].mcm[2] + T1718[1][3];
JA17[1][4]=links[9].m + T1718[1][4];
JA17[1][5]=T1718[1][5];
JA17[1][6]=T1718[1][6];

JA17[2][1]=-links[9].mcm[3] + T1718[2][1];
JA17[2][2]=T1718[2][2];
JA17[2][3]=links[9].mcm[1] + T1718[2][3];
JA17[2][4]=T1718[2][4];
JA17[2][5]=links[9].m + T1718[2][5];
JA17[2][6]=T1718[2][6];

JA17[3][1]=links[9].mcm[2] + T1718[3][1];
JA17[3][2]=-links[9].mcm[1] + T1718[3][2];
JA17[3][3]=T1718[3][3];
JA17[3][4]=T1718[3][4];
JA17[3][5]=T1718[3][5];
JA17[3][6]=links[9].m + T1718[3][6];

JA17[4][1]=links[9].inertia[1][1] + T1718[4][1];
JA17[4][2]=links[9].inertia[1][2] + T1718[4][2];
JA17[4][3]=links[9].inertia[1][3] + T1718[4][3];
JA17[4][4]=T1718[4][4];
JA17[4][5]=-links[9].mcm[3] + T1718[4][5];
JA17[4][6]=links[9].mcm[2] + T1718[4][6];

JA17[5][1]=links[9].inertia[1][2] + T1718[5][1];
JA17[5][2]=links[9].inertia[2][2] + T1718[5][2];
JA17[5][3]=links[9].inertia[2][3] + T1718[5][3];
JA17[5][4]=links[9].mcm[3] + T1718[5][4];
JA17[5][5]=T1718[5][5];
JA17[5][6]=-links[9].mcm[1] + T1718[5][6];

JA17[6][1]=links[9].inertia[1][3] + T1718[6][1];
JA17[6][2]=links[9].inertia[2][3] + T1718[6][2];
JA17[6][3]=links[9].inertia[3][3] + T1718[6][3];
JA17[6][4]=-links[9].mcm[2] + T1718[6][4];
JA17[6][5]=links[9].mcm[1] + T1718[6][5];
JA17[6][6]=T1718[6][6];


h17[1]=JA17[1][3];
h17[2]=JA17[2][3];
h17[3]=JA17[3][3];
h17[4]=JA17[4][3];
h17[5]=JA17[5][3];
h17[6]=JA17[6][3];

d[17]=1.e-10 + h17[6];

T11617[1][1]=-((h17[1]*h17[4])/d[17]) + JA17[1][1];
T11617[1][2]=-((h17[1]*h17[5])/d[17]) + JA17[1][2];
T11617[1][3]=-((h17[1]*h17[6])/d[17]) + JA17[1][3];
T11617[1][4]=-(Power(h17[1],2)/d[17]) + JA17[1][4];
T11617[1][5]=-((h17[1]*h17[2])/d[17]) + JA17[1][5];
T11617[1][6]=-((h17[1]*h17[3])/d[17]) + JA17[1][6];

T11617[2][1]=-((h17[2]*h17[4])/d[17]) + JA17[2][1];
T11617[2][2]=-((h17[2]*h17[5])/d[17]) + JA17[2][2];
T11617[2][3]=-((h17[2]*h17[6])/d[17]) + JA17[2][3];
T11617[2][4]=-((h17[1]*h17[2])/d[17]) + JA17[2][4];
T11617[2][5]=-(Power(h17[2],2)/d[17]) + JA17[2][5];
T11617[2][6]=-((h17[2]*h17[3])/d[17]) + JA17[2][6];

T11617[3][1]=-((h17[3]*h17[4])/d[17]) + JA17[3][1];
T11617[3][2]=-((h17[3]*h17[5])/d[17]) + JA17[3][2];
T11617[3][3]=-((h17[3]*h17[6])/d[17]) + JA17[3][3];
T11617[3][4]=-((h17[1]*h17[3])/d[17]) + JA17[3][4];
T11617[3][5]=-((h17[2]*h17[3])/d[17]) + JA17[3][5];
T11617[3][6]=-(Power(h17[3],2)/d[17]) + JA17[3][6];

T11617[4][1]=-(Power(h17[4],2)/d[17]) + JA17[4][1];
T11617[4][2]=-((h17[4]*h17[5])/d[17]) + JA17[4][2];
T11617[4][3]=-((h17[4]*h17[6])/d[17]) + JA17[4][3];
T11617[4][4]=-((h17[1]*h17[4])/d[17]) + JA17[4][4];
T11617[4][5]=-((h17[2]*h17[4])/d[17]) + JA17[4][5];
T11617[4][6]=-((h17[3]*h17[4])/d[17]) + JA17[4][6];

T11617[5][1]=-((h17[4]*h17[5])/d[17]) + JA17[5][1];
T11617[5][2]=-(Power(h17[5],2)/d[17]) + JA17[5][2];
T11617[5][3]=-((h17[5]*h17[6])/d[17]) + JA17[5][3];
T11617[5][4]=-((h17[1]*h17[5])/d[17]) + JA17[5][4];
T11617[5][5]=-((h17[2]*h17[5])/d[17]) + JA17[5][5];
T11617[5][6]=-((h17[3]*h17[5])/d[17]) + JA17[5][6];

T11617[6][1]=-((h17[4]*h17[6])/d[17]) + JA17[6][1];
T11617[6][2]=-((h17[5]*h17[6])/d[17]) + JA17[6][2];
T11617[6][3]=-(Power(h17[6],2)/d[17]) + JA17[6][3];
T11617[6][4]=-((h17[1]*h17[6])/d[17]) + JA17[6][4];
T11617[6][5]=-((h17[2]*h17[6])/d[17]) + JA17[6][5];
T11617[6][6]=-((h17[3]*h17[6])/d[17]) + JA17[6][6];


T1617[1][1]=S1716[1][1]*(Si1617[1][1]*T11617[1][1] + Si1617[1][2]*T11617[2][1]) + S1716[2][1]*(Si1617[1][1]*T11617[1][2] + Si1617[1][2]*T11617[2][2]);
T1617[1][2]=-(Si1617[1][1]*T11617[1][3]) - Si1617[1][2]*T11617[2][3];
T1617[1][3]=S1716[1][3]*(Si1617[1][1]*T11617[1][1] + Si1617[1][2]*T11617[2][1]) + S1716[2][3]*(Si1617[1][1]*T11617[1][2] + Si1617[1][2]*T11617[2][2]);
T1617[1][4]=S1716[1][1]*(Si1617[1][1]*T11617[1][4] + Si1617[1][2]*T11617[2][4]) + S1716[2][1]*(Si1617[1][1]*T11617[1][5] + Si1617[1][2]*T11617[2][5]);
T1617[1][5]=-(Si1617[1][1]*T11617[1][6]) - Si1617[1][2]*T11617[2][6];
T1617[1][6]=S1716[1][3]*(Si1617[1][1]*T11617[1][4] + Si1617[1][2]*T11617[2][4]) + S1716[2][3]*(Si1617[1][1]*T11617[1][5] + Si1617[1][2]*T11617[2][5]);

T1617[2][1]=-(S1716[1][1]*T11617[3][1]) - S1716[2][1]*T11617[3][2];
T1617[2][2]=T11617[3][3];
T1617[2][3]=-(S1716[1][3]*T11617[3][1]) - S1716[2][3]*T11617[3][2];
T1617[2][4]=-(S1716[1][1]*T11617[3][4]) - S1716[2][1]*T11617[3][5];
T1617[2][5]=T11617[3][6];
T1617[2][6]=-(S1716[1][3]*T11617[3][4]) - S1716[2][3]*T11617[3][5];

T1617[3][1]=S1716[1][1]*(Si1617[3][1]*T11617[1][1] + Si1617[3][2]*T11617[2][1]) + S1716[2][1]*(Si1617[3][1]*T11617[1][2] + Si1617[3][2]*T11617[2][2]);
T1617[3][2]=-(Si1617[3][1]*T11617[1][3]) - Si1617[3][2]*T11617[2][3];
T1617[3][3]=S1716[1][3]*(Si1617[3][1]*T11617[1][1] + Si1617[3][2]*T11617[2][1]) + S1716[2][3]*(Si1617[3][1]*T11617[1][2] + Si1617[3][2]*T11617[2][2]);
T1617[3][4]=S1716[1][1]*(Si1617[3][1]*T11617[1][4] + Si1617[3][2]*T11617[2][4]) + S1716[2][1]*(Si1617[3][1]*T11617[1][5] + Si1617[3][2]*T11617[2][5]);
T1617[3][5]=-(Si1617[3][1]*T11617[1][6]) - Si1617[3][2]*T11617[2][6];
T1617[3][6]=S1716[1][3]*(Si1617[3][1]*T11617[1][4] + Si1617[3][2]*T11617[2][4]) + S1716[2][3]*(Si1617[3][1]*T11617[1][5] + Si1617[3][2]*T11617[2][5]);

T1617[4][1]=S1716[1][1]*(Si1617[1][1]*T11617[4][1] + Si1617[1][2]*T11617[5][1]) + S1716[2][1]*(Si1617[1][1]*T11617[4][2] + Si1617[1][2]*T11617[5][2]);
T1617[4][2]=-(Si1617[1][1]*T11617[4][3]) - Si1617[1][2]*T11617[5][3];
T1617[4][3]=S1716[1][3]*(Si1617[1][1]*T11617[4][1] + Si1617[1][2]*T11617[5][1]) + S1716[2][3]*(Si1617[1][1]*T11617[4][2] + Si1617[1][2]*T11617[5][2]);
T1617[4][4]=S1716[1][1]*(Si1617[1][1]*T11617[4][4] + Si1617[1][2]*T11617[5][4]) + S1716[2][1]*(Si1617[1][1]*T11617[4][5] + Si1617[1][2]*T11617[5][5]);
T1617[4][5]=-(Si1617[1][1]*T11617[4][6]) - Si1617[1][2]*T11617[5][6];
T1617[4][6]=S1716[1][3]*(Si1617[1][1]*T11617[4][4] + Si1617[1][2]*T11617[5][4]) + S1716[2][3]*(Si1617[1][1]*T11617[4][5] + Si1617[1][2]*T11617[5][5]);

T1617[5][1]=-(S1716[1][1]*T11617[6][1]) - S1716[2][1]*T11617[6][2];
T1617[5][2]=T11617[6][3];
T1617[5][3]=-(S1716[1][3]*T11617[6][1]) - S1716[2][3]*T11617[6][2];
T1617[5][4]=-(S1716[1][1]*T11617[6][4]) - S1716[2][1]*T11617[6][5];
T1617[5][5]=T11617[6][6];
T1617[5][6]=-(S1716[1][3]*T11617[6][4]) - S1716[2][3]*T11617[6][5];

T1617[6][1]=S1716[1][1]*(Si1617[3][1]*T11617[4][1] + Si1617[3][2]*T11617[5][1]) + S1716[2][1]*(Si1617[3][1]*T11617[4][2] + Si1617[3][2]*T11617[5][2]);
T1617[6][2]=-(Si1617[3][1]*T11617[4][3]) - Si1617[3][2]*T11617[5][3];
T1617[6][3]=S1716[1][3]*(Si1617[3][1]*T11617[4][1] + Si1617[3][2]*T11617[5][1]) + S1716[2][3]*(Si1617[3][1]*T11617[4][2] + Si1617[3][2]*T11617[5][2]);
T1617[6][4]=S1716[1][1]*(Si1617[3][1]*T11617[4][4] + Si1617[3][2]*T11617[5][4]) + S1716[2][1]*(Si1617[3][1]*T11617[4][5] + Si1617[3][2]*T11617[5][5]);
T1617[6][5]=-(Si1617[3][1]*T11617[4][6]) - Si1617[3][2]*T11617[5][6];
T1617[6][6]=S1716[1][3]*(Si1617[3][1]*T11617[4][4] + Si1617[3][2]*T11617[5][4]) + S1716[2][3]*(Si1617[3][1]*T11617[4][5] + Si1617[3][2]*T11617[5][5]);



}


void
hoap3_ForDynArtfunc16(void)
      {
JA16[1][1]=T1617[1][1];
JA16[1][2]=links[8].mcm[3] + T1617[1][2];
JA16[1][3]=-links[8].mcm[2] + T1617[1][3];
JA16[1][4]=links[8].m + T1617[1][4];
JA16[1][5]=T1617[1][5];
JA16[1][6]=T1617[1][6];

JA16[2][1]=-links[8].mcm[3] + T1617[2][1];
JA16[2][2]=T1617[2][2];
JA16[2][3]=links[8].mcm[1] + T1617[2][3];
JA16[2][4]=T1617[2][4];
JA16[2][5]=links[8].m + T1617[2][5];
JA16[2][6]=T1617[2][6];

JA16[3][1]=links[8].mcm[2] + T1617[3][1];
JA16[3][2]=-links[8].mcm[1] + T1617[3][2];
JA16[3][3]=T1617[3][3];
JA16[3][4]=T1617[3][4];
JA16[3][5]=T1617[3][5];
JA16[3][6]=links[8].m + T1617[3][6];

JA16[4][1]=links[8].inertia[1][1] + T1617[4][1];
JA16[4][2]=links[8].inertia[1][2] + T1617[4][2];
JA16[4][3]=links[8].inertia[1][3] + T1617[4][3];
JA16[4][4]=T1617[4][4];
JA16[4][5]=-links[8].mcm[3] + T1617[4][5];
JA16[4][6]=links[8].mcm[2] + T1617[4][6];

JA16[5][1]=links[8].inertia[1][2] + T1617[5][1];
JA16[5][2]=links[8].inertia[2][2] + T1617[5][2];
JA16[5][3]=links[8].inertia[2][3] + T1617[5][3];
JA16[5][4]=links[8].mcm[3] + T1617[5][4];
JA16[5][5]=T1617[5][5];
JA16[5][6]=-links[8].mcm[1] + T1617[5][6];

JA16[6][1]=links[8].inertia[1][3] + T1617[6][1];
JA16[6][2]=links[8].inertia[2][3] + T1617[6][2];
JA16[6][3]=links[8].inertia[3][3] + T1617[6][3];
JA16[6][4]=-links[8].mcm[2] + T1617[6][4];
JA16[6][5]=links[8].mcm[1] + T1617[6][5];
JA16[6][6]=T1617[6][6];


h16[1]=JA16[1][3];
h16[2]=JA16[2][3];
h16[3]=JA16[3][3];
h16[4]=JA16[4][3];
h16[5]=JA16[5][3];
h16[6]=JA16[6][3];

d[16]=1.e-10 + h16[6];

T11516[1][1]=-((h16[1]*h16[4])/d[16]) + JA16[1][1];
T11516[1][2]=-((h16[1]*h16[5])/d[16]) + JA16[1][2];
T11516[1][3]=-((h16[1]*h16[6])/d[16]) + JA16[1][3];
T11516[1][4]=-(Power(h16[1],2)/d[16]) + JA16[1][4];
T11516[1][5]=-((h16[1]*h16[2])/d[16]) + JA16[1][5];
T11516[1][6]=-((h16[1]*h16[3])/d[16]) + JA16[1][6];

T11516[2][1]=-((h16[2]*h16[4])/d[16]) + JA16[2][1];
T11516[2][2]=-((h16[2]*h16[5])/d[16]) + JA16[2][2];
T11516[2][3]=-((h16[2]*h16[6])/d[16]) + JA16[2][3];
T11516[2][4]=-((h16[1]*h16[2])/d[16]) + JA16[2][4];
T11516[2][5]=-(Power(h16[2],2)/d[16]) + JA16[2][5];
T11516[2][6]=-((h16[2]*h16[3])/d[16]) + JA16[2][6];

T11516[3][1]=-((h16[3]*h16[4])/d[16]) + JA16[3][1];
T11516[3][2]=-((h16[3]*h16[5])/d[16]) + JA16[3][2];
T11516[3][3]=-((h16[3]*h16[6])/d[16]) + JA16[3][3];
T11516[3][4]=-((h16[1]*h16[3])/d[16]) + JA16[3][4];
T11516[3][5]=-((h16[2]*h16[3])/d[16]) + JA16[3][5];
T11516[3][6]=-(Power(h16[3],2)/d[16]) + JA16[3][6];

T11516[4][1]=-(Power(h16[4],2)/d[16]) + JA16[4][1];
T11516[4][2]=-((h16[4]*h16[5])/d[16]) + JA16[4][2];
T11516[4][3]=-((h16[4]*h16[6])/d[16]) + JA16[4][3];
T11516[4][4]=-((h16[1]*h16[4])/d[16]) + JA16[4][4];
T11516[4][5]=-((h16[2]*h16[4])/d[16]) + JA16[4][5];
T11516[4][6]=-((h16[3]*h16[4])/d[16]) + JA16[4][6];

T11516[5][1]=-((h16[4]*h16[5])/d[16]) + JA16[5][1];
T11516[5][2]=-(Power(h16[5],2)/d[16]) + JA16[5][2];
T11516[5][3]=-((h16[5]*h16[6])/d[16]) + JA16[5][3];
T11516[5][4]=-((h16[1]*h16[5])/d[16]) + JA16[5][4];
T11516[5][5]=-((h16[2]*h16[5])/d[16]) + JA16[5][5];
T11516[5][6]=-((h16[3]*h16[5])/d[16]) + JA16[5][6];

T11516[6][1]=-((h16[4]*h16[6])/d[16]) + JA16[6][1];
T11516[6][2]=-((h16[5]*h16[6])/d[16]) + JA16[6][2];
T11516[6][3]=-(Power(h16[6],2)/d[16]) + JA16[6][3];
T11516[6][4]=-((h16[1]*h16[6])/d[16]) + JA16[6][4];
T11516[6][5]=-((h16[2]*h16[6])/d[16]) + JA16[6][5];
T11516[6][6]=-((h16[3]*h16[6])/d[16]) + JA16[6][6];


T1516[1][1]=S1615[1][1]*(Si1516[1][1]*T11516[1][1] + Si1516[1][2]*T11516[2][1]) + S1615[2][1]*(Si1516[1][1]*T11516[1][2] + Si1516[1][2]*T11516[2][2]);
T1516[1][2]=-(Si1516[1][1]*T11516[1][3]) - Si1516[1][2]*T11516[2][3];
T1516[1][3]=S1615[1][3]*(Si1516[1][1]*T11516[1][1] + Si1516[1][2]*T11516[2][1]) + S1615[2][3]*(Si1516[1][1]*T11516[1][2] + Si1516[1][2]*T11516[2][2]);
T1516[1][4]=S1615[1][1]*(Si1516[1][1]*T11516[1][4] + Si1516[1][2]*T11516[2][4]) + S1615[2][1]*(Si1516[1][1]*T11516[1][5] + Si1516[1][2]*T11516[2][5]);
T1516[1][5]=-(Si1516[1][1]*T11516[1][6]) - Si1516[1][2]*T11516[2][6];
T1516[1][6]=S1615[1][3]*(Si1516[1][1]*T11516[1][4] + Si1516[1][2]*T11516[2][4]) + S1615[2][3]*(Si1516[1][1]*T11516[1][5] + Si1516[1][2]*T11516[2][5]);

T1516[2][1]=-(S1615[1][1]*T11516[3][1]) - S1615[2][1]*T11516[3][2];
T1516[2][2]=T11516[3][3];
T1516[2][3]=-(S1615[1][3]*T11516[3][1]) - S1615[2][3]*T11516[3][2];
T1516[2][4]=-(S1615[1][1]*T11516[3][4]) - S1615[2][1]*T11516[3][5];
T1516[2][5]=T11516[3][6];
T1516[2][6]=-(S1615[1][3]*T11516[3][4]) - S1615[2][3]*T11516[3][5];

T1516[3][1]=S1615[1][1]*(Si1516[3][1]*T11516[1][1] + Si1516[3][2]*T11516[2][1]) + S1615[2][1]*(Si1516[3][1]*T11516[1][2] + Si1516[3][2]*T11516[2][2]);
T1516[3][2]=-(Si1516[3][1]*T11516[1][3]) - Si1516[3][2]*T11516[2][3];
T1516[3][3]=S1615[1][3]*(Si1516[3][1]*T11516[1][1] + Si1516[3][2]*T11516[2][1]) + S1615[2][3]*(Si1516[3][1]*T11516[1][2] + Si1516[3][2]*T11516[2][2]);
T1516[3][4]=S1615[1][1]*(Si1516[3][1]*T11516[1][4] + Si1516[3][2]*T11516[2][4]) + S1615[2][1]*(Si1516[3][1]*T11516[1][5] + Si1516[3][2]*T11516[2][5]);
T1516[3][5]=-(Si1516[3][1]*T11516[1][6]) - Si1516[3][2]*T11516[2][6];
T1516[3][6]=S1615[1][3]*(Si1516[3][1]*T11516[1][4] + Si1516[3][2]*T11516[2][4]) + S1615[2][3]*(Si1516[3][1]*T11516[1][5] + Si1516[3][2]*T11516[2][5]);

T1516[4][1]=S1615[1][1]*(Si1516[1][1]*T11516[4][1] + Si1516[1][2]*T11516[5][1]) + S1615[2][1]*(Si1516[1][1]*T11516[4][2] + Si1516[1][2]*T11516[5][2]);
T1516[4][2]=-(Si1516[1][1]*T11516[4][3]) - Si1516[1][2]*T11516[5][3];
T1516[4][3]=S1615[1][3]*(Si1516[1][1]*T11516[4][1] + Si1516[1][2]*T11516[5][1]) + S1615[2][3]*(Si1516[1][1]*T11516[4][2] + Si1516[1][2]*T11516[5][2]);
T1516[4][4]=S1615[1][1]*(Si1516[1][1]*T11516[4][4] + Si1516[1][2]*T11516[5][4]) + S1615[2][1]*(Si1516[1][1]*T11516[4][5] + Si1516[1][2]*T11516[5][5]);
T1516[4][5]=-(Si1516[1][1]*T11516[4][6]) - Si1516[1][2]*T11516[5][6];
T1516[4][6]=S1615[1][3]*(Si1516[1][1]*T11516[4][4] + Si1516[1][2]*T11516[5][4]) + S1615[2][3]*(Si1516[1][1]*T11516[4][5] + Si1516[1][2]*T11516[5][5]);

T1516[5][1]=-(S1615[1][1]*T11516[6][1]) - S1615[2][1]*T11516[6][2];
T1516[5][2]=T11516[6][3];
T1516[5][3]=-(S1615[1][3]*T11516[6][1]) - S1615[2][3]*T11516[6][2];
T1516[5][4]=-(S1615[1][1]*T11516[6][4]) - S1615[2][1]*T11516[6][5];
T1516[5][5]=T11516[6][6];
T1516[5][6]=-(S1615[1][3]*T11516[6][4]) - S1615[2][3]*T11516[6][5];

T1516[6][1]=S1615[1][1]*(Si1516[3][1]*T11516[4][1] + Si1516[3][2]*T11516[5][1]) + S1615[2][1]*(Si1516[3][1]*T11516[4][2] + Si1516[3][2]*T11516[5][2]);
T1516[6][2]=-(Si1516[3][1]*T11516[4][3]) - Si1516[3][2]*T11516[5][3];
T1516[6][3]=S1615[1][3]*(Si1516[3][1]*T11516[4][1] + Si1516[3][2]*T11516[5][1]) + S1615[2][3]*(Si1516[3][1]*T11516[4][2] + Si1516[3][2]*T11516[5][2]);
T1516[6][4]=S1615[1][1]*(Si1516[3][1]*T11516[4][4] + Si1516[3][2]*T11516[5][4]) + S1615[2][1]*(Si1516[3][1]*T11516[4][5] + Si1516[3][2]*T11516[5][5]);
T1516[6][5]=-(Si1516[3][1]*T11516[4][6]) - Si1516[3][2]*T11516[5][6];
T1516[6][6]=S1615[1][3]*(Si1516[3][1]*T11516[4][4] + Si1516[3][2]*T11516[5][4]) + S1615[2][3]*(Si1516[3][1]*T11516[4][5] + Si1516[3][2]*T11516[5][5]);



}


void
hoap3_ForDynArtfunc17(void)
      {
JA15[1][1]=T1516[1][1];
JA15[1][2]=links[7].mcm[3] + T1516[1][2];
JA15[1][3]=-links[7].mcm[2] + T1516[1][3];
JA15[1][4]=links[7].m + T1516[1][4];
JA15[1][5]=T1516[1][5];
JA15[1][6]=T1516[1][6];

JA15[2][1]=-links[7].mcm[3] + T1516[2][1];
JA15[2][2]=T1516[2][2];
JA15[2][3]=links[7].mcm[1] + T1516[2][3];
JA15[2][4]=T1516[2][4];
JA15[2][5]=links[7].m + T1516[2][5];
JA15[2][6]=T1516[2][6];

JA15[3][1]=links[7].mcm[2] + T1516[3][1];
JA15[3][2]=-links[7].mcm[1] + T1516[3][2];
JA15[3][3]=T1516[3][3];
JA15[3][4]=T1516[3][4];
JA15[3][5]=T1516[3][5];
JA15[3][6]=links[7].m + T1516[3][6];

JA15[4][1]=links[7].inertia[1][1] + T1516[4][1];
JA15[4][2]=links[7].inertia[1][2] + T1516[4][2];
JA15[4][3]=links[7].inertia[1][3] + T1516[4][3];
JA15[4][4]=T1516[4][4];
JA15[4][5]=-links[7].mcm[3] + T1516[4][5];
JA15[4][6]=links[7].mcm[2] + T1516[4][6];

JA15[5][1]=links[7].inertia[1][2] + T1516[5][1];
JA15[5][2]=links[7].inertia[2][2] + T1516[5][2];
JA15[5][3]=links[7].inertia[2][3] + T1516[5][3];
JA15[5][4]=links[7].mcm[3] + T1516[5][4];
JA15[5][5]=T1516[5][5];
JA15[5][6]=-links[7].mcm[1] + T1516[5][6];

JA15[6][1]=links[7].inertia[1][3] + T1516[6][1];
JA15[6][2]=links[7].inertia[2][3] + T1516[6][2];
JA15[6][3]=links[7].inertia[3][3] + T1516[6][3];
JA15[6][4]=-links[7].mcm[2] + T1516[6][4];
JA15[6][5]=links[7].mcm[1] + T1516[6][5];
JA15[6][6]=T1516[6][6];


h15[1]=JA15[1][3];
h15[2]=JA15[2][3];
h15[3]=JA15[3][3];
h15[4]=JA15[4][3];
h15[5]=JA15[5][3];
h15[6]=JA15[6][3];

d[15]=1.e-10 + h15[6];

T1315[1][1]=-((h15[1]*h15[4])/d[15]) + JA15[1][1];
T1315[1][2]=-((h15[1]*h15[5])/d[15]) + JA15[1][2];
T1315[1][3]=-((h15[1]*h15[6])/d[15]) + JA15[1][3];
T1315[1][4]=-(Power(h15[1],2)/d[15]) + JA15[1][4];
T1315[1][5]=-((h15[1]*h15[2])/d[15]) + JA15[1][5];
T1315[1][6]=-((h15[1]*h15[3])/d[15]) + JA15[1][6];

T1315[2][1]=-((h15[2]*h15[4])/d[15]) + JA15[2][1];
T1315[2][2]=-((h15[2]*h15[5])/d[15]) + JA15[2][2];
T1315[2][3]=-((h15[2]*h15[6])/d[15]) + JA15[2][3];
T1315[2][4]=-((h15[1]*h15[2])/d[15]) + JA15[2][4];
T1315[2][5]=-(Power(h15[2],2)/d[15]) + JA15[2][5];
T1315[2][6]=-((h15[2]*h15[3])/d[15]) + JA15[2][6];

T1315[3][1]=-((h15[3]*h15[4])/d[15]) + JA15[3][1];
T1315[3][2]=-((h15[3]*h15[5])/d[15]) + JA15[3][2];
T1315[3][3]=-((h15[3]*h15[6])/d[15]) + JA15[3][3];
T1315[3][4]=-((h15[1]*h15[3])/d[15]) + JA15[3][4];
T1315[3][5]=-((h15[2]*h15[3])/d[15]) + JA15[3][5];
T1315[3][6]=-(Power(h15[3],2)/d[15]) + JA15[3][6];

T1315[4][1]=-(Power(h15[4],2)/d[15]) + JA15[4][1];
T1315[4][2]=-((h15[4]*h15[5])/d[15]) + JA15[4][2];
T1315[4][3]=-((h15[4]*h15[6])/d[15]) + JA15[4][3];
T1315[4][4]=-((h15[1]*h15[4])/d[15]) + JA15[4][4];
T1315[4][5]=-((h15[2]*h15[4])/d[15]) + JA15[4][5];
T1315[4][6]=-((h15[3]*h15[4])/d[15]) + JA15[4][6];

T1315[5][1]=-((h15[4]*h15[5])/d[15]) + JA15[5][1];
T1315[5][2]=-(Power(h15[5],2)/d[15]) + JA15[5][2];
T1315[5][3]=-((h15[5]*h15[6])/d[15]) + JA15[5][3];
T1315[5][4]=-((h15[1]*h15[5])/d[15]) + JA15[5][4];
T1315[5][5]=-((h15[2]*h15[5])/d[15]) + JA15[5][5];
T1315[5][6]=-((h15[3]*h15[5])/d[15]) + JA15[5][6];

T1315[6][1]=-((h15[4]*h15[6])/d[15]) + JA15[6][1];
T1315[6][2]=-((h15[5]*h15[6])/d[15]) + JA15[6][2];
T1315[6][3]=-(Power(h15[6],2)/d[15]) + JA15[6][3];
T1315[6][4]=-((h15[1]*h15[6])/d[15]) + JA15[6][4];
T1315[6][5]=-((h15[2]*h15[6])/d[15]) + JA15[6][5];
T1315[6][6]=-((h15[3]*h15[6])/d[15]) + JA15[6][6];


T315[1][1]=S153[1][1]*(Si315[1][1]*T1315[1][1] + Si315[1][2]*T1315[2][1]) + S153[2][1]*(Si315[1][1]*T1315[1][2] + Si315[1][2]*T1315[2][2]) - WAISTLINK1*S153[1][3]*(Si315[1][1]*T1315[1][4] + Si315[1][2]*T1315[2][4]) - WAISTLINK1*S153[2][3]*(Si315[1][1]*T1315[1][5] + Si315[1][2]*T1315[2][5]) + LEGLINK1*(Si315[1][1]*T1315[1][6] + Si315[1][2]*T1315[2][6]);
T315[1][2]=Si315[1][1]*T1315[1][3] + Si315[1][2]*T1315[2][3] + (-(LEGLINK1*S153[1][1]) + WAISTLINK2*S153[1][3])*(Si315[1][1]*T1315[1][4] + Si315[1][2]*T1315[2][4]) + (-(LEGLINK1*S153[2][1]) + WAISTLINK2*S153[2][3])*(Si315[1][1]*T1315[1][5] + Si315[1][2]*T1315[2][5]);
T315[1][3]=S153[1][3]*(Si315[1][1]*T1315[1][1] + Si315[1][2]*T1315[2][1]) + S153[2][3]*(Si315[1][1]*T1315[1][2] + Si315[1][2]*T1315[2][2]) + WAISTLINK1*S153[1][1]*(Si315[1][1]*T1315[1][4] + Si315[1][2]*T1315[2][4]) + WAISTLINK1*S153[2][1]*(Si315[1][1]*T1315[1][5] + Si315[1][2]*T1315[2][5]) - WAISTLINK2*(Si315[1][1]*T1315[1][6] + Si315[1][2]*T1315[2][6]);
T315[1][4]=S153[1][1]*(Si315[1][1]*T1315[1][4] + Si315[1][2]*T1315[2][4]) + S153[2][1]*(Si315[1][1]*T1315[1][5] + Si315[1][2]*T1315[2][5]);
T315[1][5]=Si315[1][1]*T1315[1][6] + Si315[1][2]*T1315[2][6];
T315[1][6]=S153[1][3]*(Si315[1][1]*T1315[1][4] + Si315[1][2]*T1315[2][4]) + S153[2][3]*(Si315[1][1]*T1315[1][5] + Si315[1][2]*T1315[2][5]);

T315[2][1]=S153[1][1]*T1315[3][1] + S153[2][1]*T1315[3][2] - WAISTLINK1*S153[1][3]*T1315[3][4] - WAISTLINK1*S153[2][3]*T1315[3][5] + LEGLINK1*T1315[3][6];
T315[2][2]=T1315[3][3] + (-(LEGLINK1*S153[1][1]) + WAISTLINK2*S153[1][3])*T1315[3][4] + (-(LEGLINK1*S153[2][1]) + WAISTLINK2*S153[2][3])*T1315[3][5];
T315[2][3]=S153[1][3]*T1315[3][1] + S153[2][3]*T1315[3][2] + WAISTLINK1*S153[1][1]*T1315[3][4] + WAISTLINK1*S153[2][1]*T1315[3][5] - WAISTLINK2*T1315[3][6];
T315[2][4]=S153[1][1]*T1315[3][4] + S153[2][1]*T1315[3][5];
T315[2][5]=T1315[3][6];
T315[2][6]=S153[1][3]*T1315[3][4] + S153[2][3]*T1315[3][5];

T315[3][1]=S153[1][1]*(Si315[3][1]*T1315[1][1] + Si315[3][2]*T1315[2][1]) + S153[2][1]*(Si315[3][1]*T1315[1][2] + Si315[3][2]*T1315[2][2]) - WAISTLINK1*S153[1][3]*(Si315[3][1]*T1315[1][4] + Si315[3][2]*T1315[2][4]) - WAISTLINK1*S153[2][3]*(Si315[3][1]*T1315[1][5] + Si315[3][2]*T1315[2][5]) + LEGLINK1*(Si315[3][1]*T1315[1][6] + Si315[3][2]*T1315[2][6]);
T315[3][2]=Si315[3][1]*T1315[1][3] + Si315[3][2]*T1315[2][3] + (-(LEGLINK1*S153[1][1]) + WAISTLINK2*S153[1][3])*(Si315[3][1]*T1315[1][4] + Si315[3][2]*T1315[2][4]) + (-(LEGLINK1*S153[2][1]) + WAISTLINK2*S153[2][3])*(Si315[3][1]*T1315[1][5] + Si315[3][2]*T1315[2][5]);
T315[3][3]=S153[1][3]*(Si315[3][1]*T1315[1][1] + Si315[3][2]*T1315[2][1]) + S153[2][3]*(Si315[3][1]*T1315[1][2] + Si315[3][2]*T1315[2][2]) + WAISTLINK1*S153[1][1]*(Si315[3][1]*T1315[1][4] + Si315[3][2]*T1315[2][4]) + WAISTLINK1*S153[2][1]*(Si315[3][1]*T1315[1][5] + Si315[3][2]*T1315[2][5]) - WAISTLINK2*(Si315[3][1]*T1315[1][6] + Si315[3][2]*T1315[2][6]);
T315[3][4]=S153[1][1]*(Si315[3][1]*T1315[1][4] + Si315[3][2]*T1315[2][4]) + S153[2][1]*(Si315[3][1]*T1315[1][5] + Si315[3][2]*T1315[2][5]);
T315[3][5]=Si315[3][1]*T1315[1][6] + Si315[3][2]*T1315[2][6];
T315[3][6]=S153[1][3]*(Si315[3][1]*T1315[1][4] + Si315[3][2]*T1315[2][4]) + S153[2][3]*(Si315[3][1]*T1315[1][5] + Si315[3][2]*T1315[2][5]);

T315[4][1]=S153[1][1]*(-(WAISTLINK1*Si315[3][1]*T1315[1][1]) - WAISTLINK1*Si315[3][2]*T1315[2][1] + LEGLINK1*T1315[3][1] + Si315[1][1]*T1315[4][1] + Si315[1][2]*T1315[5][1]) + S153[2][1]*(-(WAISTLINK1*Si315[3][1]*T1315[1][2]) - WAISTLINK1*Si315[3][2]*T1315[2][2] + LEGLINK1*T1315[3][2] + Si315[1][1]*T1315[4][2] + Si315[1][2]*T1315[5][2]) - WAISTLINK1*S153[1][3]*(-(WAISTLINK1*Si315[3][1]*T1315[1][4]) - WAISTLINK1*Si315[3][2]*T1315[2][4] + LEGLINK1*T1315[3][4] + Si315[1][1]*T1315[4][4] + Si315[1][2]*T1315[5][4]) - WAISTLINK1*S153[2][3]*(-(WAISTLINK1*Si315[3][1]*T1315[1][5]) - WAISTLINK1*Si315[3][2]*T1315[2][5] + LEGLINK1*T1315[3][5] + Si315[1][1]*T1315[4][5] + Si315[1][2]*T1315[5][5]) + LEGLINK1*(-(WAISTLINK1*Si315[3][1]*T1315[1][6]) - WAISTLINK1*Si315[3][2]*T1315[2][6] + LEGLINK1*T1315[3][6] + Si315[1][1]*T1315[4][6] + Si315[1][2]*T1315[5][6]);
T315[4][2]=-(WAISTLINK1*Si315[3][1]*T1315[1][3]) - WAISTLINK1*Si315[3][2]*T1315[2][3] + LEGLINK1*T1315[3][3] + Si315[1][1]*T1315[4][3] + Si315[1][2]*T1315[5][3] + (-(LEGLINK1*S153[1][1]) + WAISTLINK2*S153[1][3])*(-(WAISTLINK1*Si315[3][1]*T1315[1][4]) - WAISTLINK1*Si315[3][2]*T1315[2][4] + LEGLINK1*T1315[3][4] + Si315[1][1]*T1315[4][4] + Si315[1][2]*T1315[5][4]) + (-(LEGLINK1*S153[2][1]) + WAISTLINK2*S153[2][3])*(-(WAISTLINK1*Si315[3][1]*T1315[1][5]) - WAISTLINK1*Si315[3][2]*T1315[2][5] + LEGLINK1*T1315[3][5] + Si315[1][1]*T1315[4][5] + Si315[1][2]*T1315[5][5]);
T315[4][3]=S153[1][3]*(-(WAISTLINK1*Si315[3][1]*T1315[1][1]) - WAISTLINK1*Si315[3][2]*T1315[2][1] + LEGLINK1*T1315[3][1] + Si315[1][1]*T1315[4][1] + Si315[1][2]*T1315[5][1]) + S153[2][3]*(-(WAISTLINK1*Si315[3][1]*T1315[1][2]) - WAISTLINK1*Si315[3][2]*T1315[2][2] + LEGLINK1*T1315[3][2] + Si315[1][1]*T1315[4][2] + Si315[1][2]*T1315[5][2]) + WAISTLINK1*S153[1][1]*(-(WAISTLINK1*Si315[3][1]*T1315[1][4]) - WAISTLINK1*Si315[3][2]*T1315[2][4] + LEGLINK1*T1315[3][4] + Si315[1][1]*T1315[4][4] + Si315[1][2]*T1315[5][4]) + WAISTLINK1*S153[2][1]*(-(WAISTLINK1*Si315[3][1]*T1315[1][5]) - WAISTLINK1*Si315[3][2]*T1315[2][5] + LEGLINK1*T1315[3][5] + Si315[1][1]*T1315[4][5] + Si315[1][2]*T1315[5][5]) - WAISTLINK2*(-(WAISTLINK1*Si315[3][1]*T1315[1][6]) - WAISTLINK1*Si315[3][2]*T1315[2][6] + LEGLINK1*T1315[3][6] + Si315[1][1]*T1315[4][6] + Si315[1][2]*T1315[5][6]);
T315[4][4]=S153[1][1]*(-(WAISTLINK1*Si315[3][1]*T1315[1][4]) - WAISTLINK1*Si315[3][2]*T1315[2][4] + LEGLINK1*T1315[3][4] + Si315[1][1]*T1315[4][4] + Si315[1][2]*T1315[5][4]) + S153[2][1]*(-(WAISTLINK1*Si315[3][1]*T1315[1][5]) - WAISTLINK1*Si315[3][2]*T1315[2][5] + LEGLINK1*T1315[3][5] + Si315[1][1]*T1315[4][5] + Si315[1][2]*T1315[5][5]);
T315[4][5]=-(WAISTLINK1*Si315[3][1]*T1315[1][6]) - WAISTLINK1*Si315[3][2]*T1315[2][6] + LEGLINK1*T1315[3][6] + Si315[1][1]*T1315[4][6] + Si315[1][2]*T1315[5][6];
T315[4][6]=S153[1][3]*(-(WAISTLINK1*Si315[3][1]*T1315[1][4]) - WAISTLINK1*Si315[3][2]*T1315[2][4] + LEGLINK1*T1315[3][4] + Si315[1][1]*T1315[4][4] + Si315[1][2]*T1315[5][4]) + S153[2][3]*(-(WAISTLINK1*Si315[3][1]*T1315[1][5]) - WAISTLINK1*Si315[3][2]*T1315[2][5] + LEGLINK1*T1315[3][5] + Si315[1][1]*T1315[4][5] + Si315[1][2]*T1315[5][5]);

T315[5][1]=S153[1][1]*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][1] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][1] + T1315[6][1]) + S153[2][1]*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][2] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][2] + T1315[6][2]) - WAISTLINK1*S153[1][3]*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][4] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][4] + T1315[6][4]) - WAISTLINK1*S153[2][3]*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][5] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][5] + T1315[6][5]) + LEGLINK1*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][6] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][6] + T1315[6][6]);
T315[5][2]=(-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][3] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][3] + T1315[6][3] + (-(LEGLINK1*S153[1][1]) + WAISTLINK2*S153[1][3])*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][4] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][4] + T1315[6][4]) + (-(LEGLINK1*S153[2][1]) + WAISTLINK2*S153[2][3])*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][5] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][5] + T1315[6][5]);
T315[5][3]=S153[1][3]*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][1] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][1] + T1315[6][1]) + S153[2][3]*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][2] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][2] + T1315[6][2]) + WAISTLINK1*S153[1][1]*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][4] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][4] + T1315[6][4]) + WAISTLINK1*S153[2][1]*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][5] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][5] + T1315[6][5]) - WAISTLINK2*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][6] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][6] + T1315[6][6]);
T315[5][4]=S153[1][1]*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][4] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][4] + T1315[6][4]) + S153[2][1]*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][5] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][5] + T1315[6][5]);
T315[5][5]=(-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][6] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][6] + T1315[6][6];
T315[5][6]=S153[1][3]*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][4] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][4] + T1315[6][4]) + S153[2][3]*((-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1])*T1315[1][5] + (-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2])*T1315[2][5] + T1315[6][5]);

T315[6][1]=S153[1][1]*(WAISTLINK1*Si315[1][1]*T1315[1][1] + WAISTLINK1*Si315[1][2]*T1315[2][1] - WAISTLINK2*T1315[3][1] + Si315[3][1]*T1315[4][1] + Si315[3][2]*T1315[5][1]) + S153[2][1]*(WAISTLINK1*Si315[1][1]*T1315[1][2] + WAISTLINK1*Si315[1][2]*T1315[2][2] - WAISTLINK2*T1315[3][2] + Si315[3][1]*T1315[4][2] + Si315[3][2]*T1315[5][2]) - WAISTLINK1*S153[1][3]*(WAISTLINK1*Si315[1][1]*T1315[1][4] + WAISTLINK1*Si315[1][2]*T1315[2][4] - WAISTLINK2*T1315[3][4] + Si315[3][1]*T1315[4][4] + Si315[3][2]*T1315[5][4]) - WAISTLINK1*S153[2][3]*(WAISTLINK1*Si315[1][1]*T1315[1][5] + WAISTLINK1*Si315[1][2]*T1315[2][5] - WAISTLINK2*T1315[3][5] + Si315[3][1]*T1315[4][5] + Si315[3][2]*T1315[5][5]) + LEGLINK1*(WAISTLINK1*Si315[1][1]*T1315[1][6] + WAISTLINK1*Si315[1][2]*T1315[2][6] - WAISTLINK2*T1315[3][6] + Si315[3][1]*T1315[4][6] + Si315[3][2]*T1315[5][6]);
T315[6][2]=WAISTLINK1*Si315[1][1]*T1315[1][3] + WAISTLINK1*Si315[1][2]*T1315[2][3] - WAISTLINK2*T1315[3][3] + Si315[3][1]*T1315[4][3] + Si315[3][2]*T1315[5][3] + (-(LEGLINK1*S153[1][1]) + WAISTLINK2*S153[1][3])*(WAISTLINK1*Si315[1][1]*T1315[1][4] + WAISTLINK1*Si315[1][2]*T1315[2][4] - WAISTLINK2*T1315[3][4] + Si315[3][1]*T1315[4][4] + Si315[3][2]*T1315[5][4]) + (-(LEGLINK1*S153[2][1]) + WAISTLINK2*S153[2][3])*(WAISTLINK1*Si315[1][1]*T1315[1][5] + WAISTLINK1*Si315[1][2]*T1315[2][5] - WAISTLINK2*T1315[3][5] + Si315[3][1]*T1315[4][5] + Si315[3][2]*T1315[5][5]);
T315[6][3]=S153[1][3]*(WAISTLINK1*Si315[1][1]*T1315[1][1] + WAISTLINK1*Si315[1][2]*T1315[2][1] - WAISTLINK2*T1315[3][1] + Si315[3][1]*T1315[4][1] + Si315[3][2]*T1315[5][1]) + S153[2][3]*(WAISTLINK1*Si315[1][1]*T1315[1][2] + WAISTLINK1*Si315[1][2]*T1315[2][2] - WAISTLINK2*T1315[3][2] + Si315[3][1]*T1315[4][2] + Si315[3][2]*T1315[5][2]) + WAISTLINK1*S153[1][1]*(WAISTLINK1*Si315[1][1]*T1315[1][4] + WAISTLINK1*Si315[1][2]*T1315[2][4] - WAISTLINK2*T1315[3][4] + Si315[3][1]*T1315[4][4] + Si315[3][2]*T1315[5][4]) + WAISTLINK1*S153[2][1]*(WAISTLINK1*Si315[1][1]*T1315[1][5] + WAISTLINK1*Si315[1][2]*T1315[2][5] - WAISTLINK2*T1315[3][5] + Si315[3][1]*T1315[4][5] + Si315[3][2]*T1315[5][5]) - WAISTLINK2*(WAISTLINK1*Si315[1][1]*T1315[1][6] + WAISTLINK1*Si315[1][2]*T1315[2][6] - WAISTLINK2*T1315[3][6] + Si315[3][1]*T1315[4][6] + Si315[3][2]*T1315[5][6]);
T315[6][4]=S153[1][1]*(WAISTLINK1*Si315[1][1]*T1315[1][4] + WAISTLINK1*Si315[1][2]*T1315[2][4] - WAISTLINK2*T1315[3][4] + Si315[3][1]*T1315[4][4] + Si315[3][2]*T1315[5][4]) + S153[2][1]*(WAISTLINK1*Si315[1][1]*T1315[1][5] + WAISTLINK1*Si315[1][2]*T1315[2][5] - WAISTLINK2*T1315[3][5] + Si315[3][1]*T1315[4][5] + Si315[3][2]*T1315[5][5]);
T315[6][5]=WAISTLINK1*Si315[1][1]*T1315[1][6] + WAISTLINK1*Si315[1][2]*T1315[2][6] - WAISTLINK2*T1315[3][6] + Si315[3][1]*T1315[4][6] + Si315[3][2]*T1315[5][6];
T315[6][6]=S153[1][3]*(WAISTLINK1*Si315[1][1]*T1315[1][4] + WAISTLINK1*Si315[1][2]*T1315[2][4] - WAISTLINK2*T1315[3][4] + Si315[3][1]*T1315[4][4] + Si315[3][2]*T1315[5][4]) + S153[2][3]*(WAISTLINK1*Si315[1][1]*T1315[1][5] + WAISTLINK1*Si315[1][2]*T1315[2][5] - WAISTLINK2*T1315[3][5] + Si315[3][1]*T1315[4][5] + Si315[3][2]*T1315[5][5]);



}


void
hoap3_ForDynArtfunc18(void)
      {
JA14[1][2]=eff[1].mcm[3];
JA14[1][3]=-eff[1].mcm[2];
JA14[1][4]=eff[1].m;

JA14[2][1]=-eff[1].mcm[3];
JA14[2][3]=eff[1].mcm[1];
JA14[2][5]=eff[1].m;

JA14[3][1]=eff[1].mcm[2];
JA14[3][2]=-eff[1].mcm[1];
JA14[3][6]=eff[1].m;

JA14[4][5]=-eff[1].mcm[3];
JA14[4][6]=eff[1].mcm[2];

JA14[5][4]=eff[1].mcm[3];
JA14[5][6]=-eff[1].mcm[1];

JA14[6][4]=-eff[1].mcm[2];
JA14[6][5]=eff[1].mcm[1];


T1914[1][2]=JA14[1][2];
T1914[1][3]=JA14[1][3];
T1914[1][4]=JA14[1][4];

T1914[2][1]=JA14[2][1];
T1914[2][3]=JA14[2][3];
T1914[2][5]=JA14[2][5];

T1914[3][1]=JA14[3][1];
T1914[3][2]=JA14[3][2];
T1914[3][6]=JA14[3][6];

T1914[4][5]=JA14[4][5];
T1914[4][6]=JA14[4][6];

T1914[5][4]=JA14[5][4];
T1914[5][6]=JA14[5][6];

T1914[6][4]=JA14[6][4];
T1914[6][5]=JA14[6][5];


T914[1][1]=(-(eff[1].x[3]*S149[1][2]) + eff[1].x[2]*S149[1][3])*Si914[1][1]*T1914[1][4] + S149[3][1]*(Si914[1][1]*T1914[1][3] + Si914[1][2]*T1914[2][3]) + (-(eff[1].x[3]*S149[2][2]) + eff[1].x[2]*S149[2][3])*Si914[1][2]*T1914[2][5] + S149[1][1]*(Si914[1][2]*T1914[2][1] + Si914[1][3]*T1914[3][1]) + S149[2][1]*(Si914[1][1]*T1914[1][2] + Si914[1][3]*T1914[3][2]) + (-(eff[1].x[3]*S149[3][2]) + eff[1].x[2]*S149[3][3])*Si914[1][3]*T1914[3][6];
T914[1][2]=(eff[1].x[3]*S149[1][1] - eff[1].x[1]*S149[1][3])*Si914[1][1]*T1914[1][4] + S149[3][2]*(Si914[1][1]*T1914[1][3] + Si914[1][2]*T1914[2][3]) + (eff[1].x[3]*S149[2][1] - eff[1].x[1]*S149[2][3])*Si914[1][2]*T1914[2][5] + S149[1][2]*(Si914[1][2]*T1914[2][1] + Si914[1][3]*T1914[3][1]) + S149[2][2]*(Si914[1][1]*T1914[1][2] + Si914[1][3]*T1914[3][2]) + (eff[1].x[3]*S149[3][1] - eff[1].x[1]*S149[3][3])*Si914[1][3]*T1914[3][6];
T914[1][3]=(-(eff[1].x[2]*S149[1][1]) + eff[1].x[1]*S149[1][2])*Si914[1][1]*T1914[1][4] + S149[3][3]*(Si914[1][1]*T1914[1][3] + Si914[1][2]*T1914[2][3]) + (-(eff[1].x[2]*S149[2][1]) + eff[1].x[1]*S149[2][2])*Si914[1][2]*T1914[2][5] + S149[1][3]*(Si914[1][2]*T1914[2][1] + Si914[1][3]*T1914[3][1]) + S149[2][3]*(Si914[1][1]*T1914[1][2] + Si914[1][3]*T1914[3][2]) + (-(eff[1].x[2]*S149[3][1]) + eff[1].x[1]*S149[3][2])*Si914[1][3]*T1914[3][6];
T914[1][4]=S149[1][1]*Si914[1][1]*T1914[1][4] + S149[2][1]*Si914[1][2]*T1914[2][5] + S149[3][1]*Si914[1][3]*T1914[3][6];
T914[1][5]=S149[1][2]*Si914[1][1]*T1914[1][4] + S149[2][2]*Si914[1][2]*T1914[2][5] + S149[3][2]*Si914[1][3]*T1914[3][6];
T914[1][6]=S149[1][3]*Si914[1][1]*T1914[1][4] + S149[2][3]*Si914[1][2]*T1914[2][5] + S149[3][3]*Si914[1][3]*T1914[3][6];

T914[2][1]=(-(eff[1].x[3]*S149[1][2]) + eff[1].x[2]*S149[1][3])*Si914[2][1]*T1914[1][4] + S149[3][1]*(Si914[2][1]*T1914[1][3] + Si914[2][2]*T1914[2][3]) + (-(eff[1].x[3]*S149[2][2]) + eff[1].x[2]*S149[2][3])*Si914[2][2]*T1914[2][5] + S149[1][1]*(Si914[2][2]*T1914[2][1] + Si914[2][3]*T1914[3][1]) + S149[2][1]*(Si914[2][1]*T1914[1][2] + Si914[2][3]*T1914[3][2]) + (-(eff[1].x[3]*S149[3][2]) + eff[1].x[2]*S149[3][3])*Si914[2][3]*T1914[3][6];
T914[2][2]=(eff[1].x[3]*S149[1][1] - eff[1].x[1]*S149[1][3])*Si914[2][1]*T1914[1][4] + S149[3][2]*(Si914[2][1]*T1914[1][3] + Si914[2][2]*T1914[2][3]) + (eff[1].x[3]*S149[2][1] - eff[1].x[1]*S149[2][3])*Si914[2][2]*T1914[2][5] + S149[1][2]*(Si914[2][2]*T1914[2][1] + Si914[2][3]*T1914[3][1]) + S149[2][2]*(Si914[2][1]*T1914[1][2] + Si914[2][3]*T1914[3][2]) + (eff[1].x[3]*S149[3][1] - eff[1].x[1]*S149[3][3])*Si914[2][3]*T1914[3][6];
T914[2][3]=(-(eff[1].x[2]*S149[1][1]) + eff[1].x[1]*S149[1][2])*Si914[2][1]*T1914[1][4] + S149[3][3]*(Si914[2][1]*T1914[1][3] + Si914[2][2]*T1914[2][3]) + (-(eff[1].x[2]*S149[2][1]) + eff[1].x[1]*S149[2][2])*Si914[2][2]*T1914[2][5] + S149[1][3]*(Si914[2][2]*T1914[2][1] + Si914[2][3]*T1914[3][1]) + S149[2][3]*(Si914[2][1]*T1914[1][2] + Si914[2][3]*T1914[3][2]) + (-(eff[1].x[2]*S149[3][1]) + eff[1].x[1]*S149[3][2])*Si914[2][3]*T1914[3][6];
T914[2][4]=S149[1][1]*Si914[2][1]*T1914[1][4] + S149[2][1]*Si914[2][2]*T1914[2][5] + S149[3][1]*Si914[2][3]*T1914[3][6];
T914[2][5]=S149[1][2]*Si914[2][1]*T1914[1][4] + S149[2][2]*Si914[2][2]*T1914[2][5] + S149[3][2]*Si914[2][3]*T1914[3][6];
T914[2][6]=S149[1][3]*Si914[2][1]*T1914[1][4] + S149[2][3]*Si914[2][2]*T1914[2][5] + S149[3][3]*Si914[2][3]*T1914[3][6];

T914[3][1]=(-(eff[1].x[3]*S149[1][2]) + eff[1].x[2]*S149[1][3])*Si914[3][1]*T1914[1][4] + S149[3][1]*(Si914[3][1]*T1914[1][3] + Si914[3][2]*T1914[2][3]) + (-(eff[1].x[3]*S149[2][2]) + eff[1].x[2]*S149[2][3])*Si914[3][2]*T1914[2][5] + S149[1][1]*(Si914[3][2]*T1914[2][1] + Si914[3][3]*T1914[3][1]) + S149[2][1]*(Si914[3][1]*T1914[1][2] + Si914[3][3]*T1914[3][2]) + (-(eff[1].x[3]*S149[3][2]) + eff[1].x[2]*S149[3][3])*Si914[3][3]*T1914[3][6];
T914[3][2]=(eff[1].x[3]*S149[1][1] - eff[1].x[1]*S149[1][3])*Si914[3][1]*T1914[1][4] + S149[3][2]*(Si914[3][1]*T1914[1][3] + Si914[3][2]*T1914[2][3]) + (eff[1].x[3]*S149[2][1] - eff[1].x[1]*S149[2][3])*Si914[3][2]*T1914[2][5] + S149[1][2]*(Si914[3][2]*T1914[2][1] + Si914[3][3]*T1914[3][1]) + S149[2][2]*(Si914[3][1]*T1914[1][2] + Si914[3][3]*T1914[3][2]) + (eff[1].x[3]*S149[3][1] - eff[1].x[1]*S149[3][3])*Si914[3][3]*T1914[3][6];
T914[3][3]=(-(eff[1].x[2]*S149[1][1]) + eff[1].x[1]*S149[1][2])*Si914[3][1]*T1914[1][4] + S149[3][3]*(Si914[3][1]*T1914[1][3] + Si914[3][2]*T1914[2][3]) + (-(eff[1].x[2]*S149[2][1]) + eff[1].x[1]*S149[2][2])*Si914[3][2]*T1914[2][5] + S149[1][3]*(Si914[3][2]*T1914[2][1] + Si914[3][3]*T1914[3][1]) + S149[2][3]*(Si914[3][1]*T1914[1][2] + Si914[3][3]*T1914[3][2]) + (-(eff[1].x[2]*S149[3][1]) + eff[1].x[1]*S149[3][2])*Si914[3][3]*T1914[3][6];
T914[3][4]=S149[1][1]*Si914[3][1]*T1914[1][4] + S149[2][1]*Si914[3][2]*T1914[2][5] + S149[3][1]*Si914[3][3]*T1914[3][6];
T914[3][5]=S149[1][2]*Si914[3][1]*T1914[1][4] + S149[2][2]*Si914[3][2]*T1914[2][5] + S149[3][2]*Si914[3][3]*T1914[3][6];
T914[3][6]=S149[1][3]*Si914[3][1]*T1914[1][4] + S149[2][3]*Si914[3][2]*T1914[2][5] + S149[3][3]*Si914[3][3]*T1914[3][6];

T914[4][1]=S149[3][1]*((-(eff[1].x[3]*Si914[2][1]) + eff[1].x[2]*Si914[3][1])*T1914[1][3] + (-(eff[1].x[3]*Si914[2][2]) + eff[1].x[2]*Si914[3][2])*T1914[2][3]) + S149[1][1]*((-(eff[1].x[3]*Si914[2][2]) + eff[1].x[2]*Si914[3][2])*T1914[2][1] + (-(eff[1].x[3]*Si914[2][3]) + eff[1].x[2]*Si914[3][3])*T1914[3][1]) + S149[2][1]*((-(eff[1].x[3]*Si914[2][1]) + eff[1].x[2]*Si914[3][1])*T1914[1][2] + (-(eff[1].x[3]*Si914[2][3]) + eff[1].x[2]*Si914[3][3])*T1914[3][2]) + (-(eff[1].x[3]*S149[3][2]) + eff[1].x[2]*S149[3][3])*((-(eff[1].x[3]*Si914[2][3]) + eff[1].x[2]*Si914[3][3])*T1914[3][6] + Si914[1][1]*T1914[4][6] + Si914[1][2]*T1914[5][6]) + (-(eff[1].x[3]*S149[1][2]) + eff[1].x[2]*S149[1][3])*((-(eff[1].x[3]*Si914[2][1]) + eff[1].x[2]*Si914[3][1])*T1914[1][4] + Si914[1][2]*T1914[5][4] + Si914[1][3]*T1914[6][4]) + (-(eff[1].x[3]*S149[2][2]) + eff[1].x[2]*S149[2][3])*((-(eff[1].x[3]*Si914[2][2]) + eff[1].x[2]*Si914[3][2])*T1914[2][5] + Si914[1][1]*T1914[4][5] + Si914[1][3]*T1914[6][5]);
T914[4][2]=S149[3][2]*((-(eff[1].x[3]*Si914[2][1]) + eff[1].x[2]*Si914[3][1])*T1914[1][3] + (-(eff[1].x[3]*Si914[2][2]) + eff[1].x[2]*Si914[3][2])*T1914[2][3]) + S149[1][2]*((-(eff[1].x[3]*Si914[2][2]) + eff[1].x[2]*Si914[3][2])*T1914[2][1] + (-(eff[1].x[3]*Si914[2][3]) + eff[1].x[2]*Si914[3][3])*T1914[3][1]) + S149[2][2]*((-(eff[1].x[3]*Si914[2][1]) + eff[1].x[2]*Si914[3][1])*T1914[1][2] + (-(eff[1].x[3]*Si914[2][3]) + eff[1].x[2]*Si914[3][3])*T1914[3][2]) + (eff[1].x[3]*S149[3][1] - eff[1].x[1]*S149[3][3])*((-(eff[1].x[3]*Si914[2][3]) + eff[1].x[2]*Si914[3][3])*T1914[3][6] + Si914[1][1]*T1914[4][6] + Si914[1][2]*T1914[5][6]) + (eff[1].x[3]*S149[1][1] - eff[1].x[1]*S149[1][3])*((-(eff[1].x[3]*Si914[2][1]) + eff[1].x[2]*Si914[3][1])*T1914[1][4] + Si914[1][2]*T1914[5][4] + Si914[1][3]*T1914[6][4]) + (eff[1].x[3]*S149[2][1] - eff[1].x[1]*S149[2][3])*((-(eff[1].x[3]*Si914[2][2]) + eff[1].x[2]*Si914[3][2])*T1914[2][5] + Si914[1][1]*T1914[4][5] + Si914[1][3]*T1914[6][5]);
T914[4][3]=S149[3][3]*((-(eff[1].x[3]*Si914[2][1]) + eff[1].x[2]*Si914[3][1])*T1914[1][3] + (-(eff[1].x[3]*Si914[2][2]) + eff[1].x[2]*Si914[3][2])*T1914[2][3]) + S149[1][3]*((-(eff[1].x[3]*Si914[2][2]) + eff[1].x[2]*Si914[3][2])*T1914[2][1] + (-(eff[1].x[3]*Si914[2][3]) + eff[1].x[2]*Si914[3][3])*T1914[3][1]) + S149[2][3]*((-(eff[1].x[3]*Si914[2][1]) + eff[1].x[2]*Si914[3][1])*T1914[1][2] + (-(eff[1].x[3]*Si914[2][3]) + eff[1].x[2]*Si914[3][3])*T1914[3][2]) + (-(eff[1].x[2]*S149[3][1]) + eff[1].x[1]*S149[3][2])*((-(eff[1].x[3]*Si914[2][3]) + eff[1].x[2]*Si914[3][3])*T1914[3][6] + Si914[1][1]*T1914[4][6] + Si914[1][2]*T1914[5][6]) + (-(eff[1].x[2]*S149[1][1]) + eff[1].x[1]*S149[1][2])*((-(eff[1].x[3]*Si914[2][1]) + eff[1].x[2]*Si914[3][1])*T1914[1][4] + Si914[1][2]*T1914[5][4] + Si914[1][3]*T1914[6][4]) + (-(eff[1].x[2]*S149[2][1]) + eff[1].x[1]*S149[2][2])*((-(eff[1].x[3]*Si914[2][2]) + eff[1].x[2]*Si914[3][2])*T1914[2][5] + Si914[1][1]*T1914[4][5] + Si914[1][3]*T1914[6][5]);
T914[4][4]=S149[3][1]*((-(eff[1].x[3]*Si914[2][3]) + eff[1].x[2]*Si914[3][3])*T1914[3][6] + Si914[1][1]*T1914[4][6] + Si914[1][2]*T1914[5][6]) + S149[1][1]*((-(eff[1].x[3]*Si914[2][1]) + eff[1].x[2]*Si914[3][1])*T1914[1][4] + Si914[1][2]*T1914[5][4] + Si914[1][3]*T1914[6][4]) + S149[2][1]*((-(eff[1].x[3]*Si914[2][2]) + eff[1].x[2]*Si914[3][2])*T1914[2][5] + Si914[1][1]*T1914[4][5] + Si914[1][3]*T1914[6][5]);
T914[4][5]=S149[3][2]*((-(eff[1].x[3]*Si914[2][3]) + eff[1].x[2]*Si914[3][3])*T1914[3][6] + Si914[1][1]*T1914[4][6] + Si914[1][2]*T1914[5][6]) + S149[1][2]*((-(eff[1].x[3]*Si914[2][1]) + eff[1].x[2]*Si914[3][1])*T1914[1][4] + Si914[1][2]*T1914[5][4] + Si914[1][3]*T1914[6][4]) + S149[2][2]*((-(eff[1].x[3]*Si914[2][2]) + eff[1].x[2]*Si914[3][2])*T1914[2][5] + Si914[1][1]*T1914[4][5] + Si914[1][3]*T1914[6][5]);
T914[4][6]=S149[3][3]*((-(eff[1].x[3]*Si914[2][3]) + eff[1].x[2]*Si914[3][3])*T1914[3][6] + Si914[1][1]*T1914[4][6] + Si914[1][2]*T1914[5][6]) + S149[1][3]*((-(eff[1].x[3]*Si914[2][1]) + eff[1].x[2]*Si914[3][1])*T1914[1][4] + Si914[1][2]*T1914[5][4] + Si914[1][3]*T1914[6][4]) + S149[2][3]*((-(eff[1].x[3]*Si914[2][2]) + eff[1].x[2]*Si914[3][2])*T1914[2][5] + Si914[1][1]*T1914[4][5] + Si914[1][3]*T1914[6][5]);

T914[5][1]=S149[3][1]*((eff[1].x[3]*Si914[1][1] - eff[1].x[1]*Si914[3][1])*T1914[1][3] + (eff[1].x[3]*Si914[1][2] - eff[1].x[1]*Si914[3][2])*T1914[2][3]) + S149[1][1]*((eff[1].x[3]*Si914[1][2] - eff[1].x[1]*Si914[3][2])*T1914[2][1] + (eff[1].x[3]*Si914[1][3] - eff[1].x[1]*Si914[3][3])*T1914[3][1]) + S149[2][1]*((eff[1].x[3]*Si914[1][1] - eff[1].x[1]*Si914[3][1])*T1914[1][2] + (eff[1].x[3]*Si914[1][3] - eff[1].x[1]*Si914[3][3])*T1914[3][2]) + (-(eff[1].x[3]*S149[3][2]) + eff[1].x[2]*S149[3][3])*((eff[1].x[3]*Si914[1][3] - eff[1].x[1]*Si914[3][3])*T1914[3][6] + Si914[2][1]*T1914[4][6] + Si914[2][2]*T1914[5][6]) + (-(eff[1].x[3]*S149[1][2]) + eff[1].x[2]*S149[1][3])*((eff[1].x[3]*Si914[1][1] - eff[1].x[1]*Si914[3][1])*T1914[1][4] + Si914[2][2]*T1914[5][4] + Si914[2][3]*T1914[6][4]) + (-(eff[1].x[3]*S149[2][2]) + eff[1].x[2]*S149[2][3])*((eff[1].x[3]*Si914[1][2] - eff[1].x[1]*Si914[3][2])*T1914[2][5] + Si914[2][1]*T1914[4][5] + Si914[2][3]*T1914[6][5]);
T914[5][2]=S149[3][2]*((eff[1].x[3]*Si914[1][1] - eff[1].x[1]*Si914[3][1])*T1914[1][3] + (eff[1].x[3]*Si914[1][2] - eff[1].x[1]*Si914[3][2])*T1914[2][3]) + S149[1][2]*((eff[1].x[3]*Si914[1][2] - eff[1].x[1]*Si914[3][2])*T1914[2][1] + (eff[1].x[3]*Si914[1][3] - eff[1].x[1]*Si914[3][3])*T1914[3][1]) + S149[2][2]*((eff[1].x[3]*Si914[1][1] - eff[1].x[1]*Si914[3][1])*T1914[1][2] + (eff[1].x[3]*Si914[1][3] - eff[1].x[1]*Si914[3][3])*T1914[3][2]) + (eff[1].x[3]*S149[3][1] - eff[1].x[1]*S149[3][3])*((eff[1].x[3]*Si914[1][3] - eff[1].x[1]*Si914[3][3])*T1914[3][6] + Si914[2][1]*T1914[4][6] + Si914[2][2]*T1914[5][6]) + (eff[1].x[3]*S149[1][1] - eff[1].x[1]*S149[1][3])*((eff[1].x[3]*Si914[1][1] - eff[1].x[1]*Si914[3][1])*T1914[1][4] + Si914[2][2]*T1914[5][4] + Si914[2][3]*T1914[6][4]) + (eff[1].x[3]*S149[2][1] - eff[1].x[1]*S149[2][3])*((eff[1].x[3]*Si914[1][2] - eff[1].x[1]*Si914[3][2])*T1914[2][5] + Si914[2][1]*T1914[4][5] + Si914[2][3]*T1914[6][5]);
T914[5][3]=S149[3][3]*((eff[1].x[3]*Si914[1][1] - eff[1].x[1]*Si914[3][1])*T1914[1][3] + (eff[1].x[3]*Si914[1][2] - eff[1].x[1]*Si914[3][2])*T1914[2][3]) + S149[1][3]*((eff[1].x[3]*Si914[1][2] - eff[1].x[1]*Si914[3][2])*T1914[2][1] + (eff[1].x[3]*Si914[1][3] - eff[1].x[1]*Si914[3][3])*T1914[3][1]) + S149[2][3]*((eff[1].x[3]*Si914[1][1] - eff[1].x[1]*Si914[3][1])*T1914[1][2] + (eff[1].x[3]*Si914[1][3] - eff[1].x[1]*Si914[3][3])*T1914[3][2]) + (-(eff[1].x[2]*S149[3][1]) + eff[1].x[1]*S149[3][2])*((eff[1].x[3]*Si914[1][3] - eff[1].x[1]*Si914[3][3])*T1914[3][6] + Si914[2][1]*T1914[4][6] + Si914[2][2]*T1914[5][6]) + (-(eff[1].x[2]*S149[1][1]) + eff[1].x[1]*S149[1][2])*((eff[1].x[3]*Si914[1][1] - eff[1].x[1]*Si914[3][1])*T1914[1][4] + Si914[2][2]*T1914[5][4] + Si914[2][3]*T1914[6][4]) + (-(eff[1].x[2]*S149[2][1]) + eff[1].x[1]*S149[2][2])*((eff[1].x[3]*Si914[1][2] - eff[1].x[1]*Si914[3][2])*T1914[2][5] + Si914[2][1]*T1914[4][5] + Si914[2][3]*T1914[6][5]);
T914[5][4]=S149[3][1]*((eff[1].x[3]*Si914[1][3] - eff[1].x[1]*Si914[3][3])*T1914[3][6] + Si914[2][1]*T1914[4][6] + Si914[2][2]*T1914[5][6]) + S149[1][1]*((eff[1].x[3]*Si914[1][1] - eff[1].x[1]*Si914[3][1])*T1914[1][4] + Si914[2][2]*T1914[5][4] + Si914[2][3]*T1914[6][4]) + S149[2][1]*((eff[1].x[3]*Si914[1][2] - eff[1].x[1]*Si914[3][2])*T1914[2][5] + Si914[2][1]*T1914[4][5] + Si914[2][3]*T1914[6][5]);
T914[5][5]=S149[3][2]*((eff[1].x[3]*Si914[1][3] - eff[1].x[1]*Si914[3][3])*T1914[3][6] + Si914[2][1]*T1914[4][6] + Si914[2][2]*T1914[5][6]) + S149[1][2]*((eff[1].x[3]*Si914[1][1] - eff[1].x[1]*Si914[3][1])*T1914[1][4] + Si914[2][2]*T1914[5][4] + Si914[2][3]*T1914[6][4]) + S149[2][2]*((eff[1].x[3]*Si914[1][2] - eff[1].x[1]*Si914[3][2])*T1914[2][5] + Si914[2][1]*T1914[4][5] + Si914[2][3]*T1914[6][5]);
T914[5][6]=S149[3][3]*((eff[1].x[3]*Si914[1][3] - eff[1].x[1]*Si914[3][3])*T1914[3][6] + Si914[2][1]*T1914[4][6] + Si914[2][2]*T1914[5][6]) + S149[1][3]*((eff[1].x[3]*Si914[1][1] - eff[1].x[1]*Si914[3][1])*T1914[1][4] + Si914[2][2]*T1914[5][4] + Si914[2][3]*T1914[6][4]) + S149[2][3]*((eff[1].x[3]*Si914[1][2] - eff[1].x[1]*Si914[3][2])*T1914[2][5] + Si914[2][1]*T1914[4][5] + Si914[2][3]*T1914[6][5]);

T914[6][1]=S149[3][1]*((-(eff[1].x[2]*Si914[1][1]) + eff[1].x[1]*Si914[2][1])*T1914[1][3] + (-(eff[1].x[2]*Si914[1][2]) + eff[1].x[1]*Si914[2][2])*T1914[2][3]) + S149[1][1]*((-(eff[1].x[2]*Si914[1][2]) + eff[1].x[1]*Si914[2][2])*T1914[2][1] + (-(eff[1].x[2]*Si914[1][3]) + eff[1].x[1]*Si914[2][3])*T1914[3][1]) + S149[2][1]*((-(eff[1].x[2]*Si914[1][1]) + eff[1].x[1]*Si914[2][1])*T1914[1][2] + (-(eff[1].x[2]*Si914[1][3]) + eff[1].x[1]*Si914[2][3])*T1914[3][2]) + (-(eff[1].x[3]*S149[3][2]) + eff[1].x[2]*S149[3][3])*((-(eff[1].x[2]*Si914[1][3]) + eff[1].x[1]*Si914[2][3])*T1914[3][6] + Si914[3][1]*T1914[4][6] + Si914[3][2]*T1914[5][6]) + (-(eff[1].x[3]*S149[1][2]) + eff[1].x[2]*S149[1][3])*((-(eff[1].x[2]*Si914[1][1]) + eff[1].x[1]*Si914[2][1])*T1914[1][4] + Si914[3][2]*T1914[5][4] + Si914[3][3]*T1914[6][4]) + (-(eff[1].x[3]*S149[2][2]) + eff[1].x[2]*S149[2][3])*((-(eff[1].x[2]*Si914[1][2]) + eff[1].x[1]*Si914[2][2])*T1914[2][5] + Si914[3][1]*T1914[4][5] + Si914[3][3]*T1914[6][5]);
T914[6][2]=S149[3][2]*((-(eff[1].x[2]*Si914[1][1]) + eff[1].x[1]*Si914[2][1])*T1914[1][3] + (-(eff[1].x[2]*Si914[1][2]) + eff[1].x[1]*Si914[2][2])*T1914[2][3]) + S149[1][2]*((-(eff[1].x[2]*Si914[1][2]) + eff[1].x[1]*Si914[2][2])*T1914[2][1] + (-(eff[1].x[2]*Si914[1][3]) + eff[1].x[1]*Si914[2][3])*T1914[3][1]) + S149[2][2]*((-(eff[1].x[2]*Si914[1][1]) + eff[1].x[1]*Si914[2][1])*T1914[1][2] + (-(eff[1].x[2]*Si914[1][3]) + eff[1].x[1]*Si914[2][3])*T1914[3][2]) + (eff[1].x[3]*S149[3][1] - eff[1].x[1]*S149[3][3])*((-(eff[1].x[2]*Si914[1][3]) + eff[1].x[1]*Si914[2][3])*T1914[3][6] + Si914[3][1]*T1914[4][6] + Si914[3][2]*T1914[5][6]) + (eff[1].x[3]*S149[1][1] - eff[1].x[1]*S149[1][3])*((-(eff[1].x[2]*Si914[1][1]) + eff[1].x[1]*Si914[2][1])*T1914[1][4] + Si914[3][2]*T1914[5][4] + Si914[3][3]*T1914[6][4]) + (eff[1].x[3]*S149[2][1] - eff[1].x[1]*S149[2][3])*((-(eff[1].x[2]*Si914[1][2]) + eff[1].x[1]*Si914[2][2])*T1914[2][5] + Si914[3][1]*T1914[4][5] + Si914[3][3]*T1914[6][5]);
T914[6][3]=S149[3][3]*((-(eff[1].x[2]*Si914[1][1]) + eff[1].x[1]*Si914[2][1])*T1914[1][3] + (-(eff[1].x[2]*Si914[1][2]) + eff[1].x[1]*Si914[2][2])*T1914[2][3]) + S149[1][3]*((-(eff[1].x[2]*Si914[1][2]) + eff[1].x[1]*Si914[2][2])*T1914[2][1] + (-(eff[1].x[2]*Si914[1][3]) + eff[1].x[1]*Si914[2][3])*T1914[3][1]) + S149[2][3]*((-(eff[1].x[2]*Si914[1][1]) + eff[1].x[1]*Si914[2][1])*T1914[1][2] + (-(eff[1].x[2]*Si914[1][3]) + eff[1].x[1]*Si914[2][3])*T1914[3][2]) + (-(eff[1].x[2]*S149[3][1]) + eff[1].x[1]*S149[3][2])*((-(eff[1].x[2]*Si914[1][3]) + eff[1].x[1]*Si914[2][3])*T1914[3][6] + Si914[3][1]*T1914[4][6] + Si914[3][2]*T1914[5][6]) + (-(eff[1].x[2]*S149[1][1]) + eff[1].x[1]*S149[1][2])*((-(eff[1].x[2]*Si914[1][1]) + eff[1].x[1]*Si914[2][1])*T1914[1][4] + Si914[3][2]*T1914[5][4] + Si914[3][3]*T1914[6][4]) + (-(eff[1].x[2]*S149[2][1]) + eff[1].x[1]*S149[2][2])*((-(eff[1].x[2]*Si914[1][2]) + eff[1].x[1]*Si914[2][2])*T1914[2][5] + Si914[3][1]*T1914[4][5] + Si914[3][3]*T1914[6][5]);
T914[6][4]=S149[3][1]*((-(eff[1].x[2]*Si914[1][3]) + eff[1].x[1]*Si914[2][3])*T1914[3][6] + Si914[3][1]*T1914[4][6] + Si914[3][2]*T1914[5][6]) + S149[1][1]*((-(eff[1].x[2]*Si914[1][1]) + eff[1].x[1]*Si914[2][1])*T1914[1][4] + Si914[3][2]*T1914[5][4] + Si914[3][3]*T1914[6][4]) + S149[2][1]*((-(eff[1].x[2]*Si914[1][2]) + eff[1].x[1]*Si914[2][2])*T1914[2][5] + Si914[3][1]*T1914[4][5] + Si914[3][3]*T1914[6][5]);
T914[6][5]=S149[3][2]*((-(eff[1].x[2]*Si914[1][3]) + eff[1].x[1]*Si914[2][3])*T1914[3][6] + Si914[3][1]*T1914[4][6] + Si914[3][2]*T1914[5][6]) + S149[1][2]*((-(eff[1].x[2]*Si914[1][1]) + eff[1].x[1]*Si914[2][1])*T1914[1][4] + Si914[3][2]*T1914[5][4] + Si914[3][3]*T1914[6][4]) + S149[2][2]*((-(eff[1].x[2]*Si914[1][2]) + eff[1].x[1]*Si914[2][2])*T1914[2][5] + Si914[3][1]*T1914[4][5] + Si914[3][3]*T1914[6][5]);
T914[6][6]=S149[3][3]*((-(eff[1].x[2]*Si914[1][3]) + eff[1].x[1]*Si914[2][3])*T1914[3][6] + Si914[3][1]*T1914[4][6] + Si914[3][2]*T1914[5][6]) + S149[1][3]*((-(eff[1].x[2]*Si914[1][1]) + eff[1].x[1]*Si914[2][1])*T1914[1][4] + Si914[3][2]*T1914[5][4] + Si914[3][3]*T1914[6][4]) + S149[2][3]*((-(eff[1].x[2]*Si914[1][2]) + eff[1].x[1]*Si914[2][2])*T1914[2][5] + Si914[3][1]*T1914[4][5] + Si914[3][3]*T1914[6][5]);



}


void
hoap3_ForDynArtfunc19(void)
      {




}


void
hoap3_ForDynArtfunc20(void)
      {




}


void
hoap3_ForDynArtfunc21(void)
      {




}


void
hoap3_ForDynArtfunc22(void)
      {




}


void
hoap3_ForDynArtfunc23(void)
      {
JA9[1][1]=0. + T914[1][1];
JA9[1][2]=0. + links[6].mcm[3] + T914[1][2];
JA9[1][3]=0. - links[6].mcm[2] + T914[1][3];
JA9[1][4]=0. + links[6].m + T914[1][4];
JA9[1][5]=0. + T914[1][5];
JA9[1][6]=0. + T914[1][6];

JA9[2][1]=0. - links[6].mcm[3] + T914[2][1];
JA9[2][2]=0. + T914[2][2];
JA9[2][3]=0. + links[6].mcm[1] + T914[2][3];
JA9[2][4]=0. + T914[2][4];
JA9[2][5]=0. + links[6].m + T914[2][5];
JA9[2][6]=0. + T914[2][6];

JA9[3][1]=0. + links[6].mcm[2] + T914[3][1];
JA9[3][2]=0. - links[6].mcm[1] + T914[3][2];
JA9[3][3]=0. + T914[3][3];
JA9[3][4]=0. + T914[3][4];
JA9[3][5]=0. + T914[3][5];
JA9[3][6]=0. + links[6].m + T914[3][6];

JA9[4][1]=0. + links[6].inertia[1][1] + T914[4][1];
JA9[4][2]=0. + links[6].inertia[1][2] + T914[4][2];
JA9[4][3]=0. + links[6].inertia[1][3] + T914[4][3];
JA9[4][4]=0. + T914[4][4];
JA9[4][5]=0. - links[6].mcm[3] + T914[4][5];
JA9[4][6]=0. + links[6].mcm[2] + T914[4][6];

JA9[5][1]=0. + links[6].inertia[1][2] + T914[5][1];
JA9[5][2]=0. + links[6].inertia[2][2] + T914[5][2];
JA9[5][3]=0. + links[6].inertia[2][3] + T914[5][3];
JA9[5][4]=0. + links[6].mcm[3] + T914[5][4];
JA9[5][5]=0. + T914[5][5];
JA9[5][6]=0. - links[6].mcm[1] + T914[5][6];

JA9[6][1]=0. + links[6].inertia[1][3] + T914[6][1];
JA9[6][2]=0. + links[6].inertia[2][3] + T914[6][2];
JA9[6][3]=0. + links[6].inertia[3][3] + T914[6][3];
JA9[6][4]=0. - links[6].mcm[2] + T914[6][4];
JA9[6][5]=0. + links[6].mcm[1] + T914[6][5];
JA9[6][6]=0. + T914[6][6];


h9[1]=JA9[1][3];
h9[2]=JA9[2][3];
h9[3]=JA9[3][3];
h9[4]=JA9[4][3];
h9[5]=JA9[5][3];
h9[6]=JA9[6][3];

d[9]=1.e-10 + h9[6];

T189[1][1]=-((h9[1]*h9[4])/d[9]) + JA9[1][1];
T189[1][2]=-((h9[1]*h9[5])/d[9]) + JA9[1][2];
T189[1][3]=-((h9[1]*h9[6])/d[9]) + JA9[1][3];
T189[1][4]=-(Power(h9[1],2)/d[9]) + JA9[1][4];
T189[1][5]=-((h9[1]*h9[2])/d[9]) + JA9[1][5];
T189[1][6]=-((h9[1]*h9[3])/d[9]) + JA9[1][6];

T189[2][1]=-((h9[2]*h9[4])/d[9]) + JA9[2][1];
T189[2][2]=-((h9[2]*h9[5])/d[9]) + JA9[2][2];
T189[2][3]=-((h9[2]*h9[6])/d[9]) + JA9[2][3];
T189[2][4]=-((h9[1]*h9[2])/d[9]) + JA9[2][4];
T189[2][5]=-(Power(h9[2],2)/d[9]) + JA9[2][5];
T189[2][6]=-((h9[2]*h9[3])/d[9]) + JA9[2][6];

T189[3][1]=-((h9[3]*h9[4])/d[9]) + JA9[3][1];
T189[3][2]=-((h9[3]*h9[5])/d[9]) + JA9[3][2];
T189[3][3]=-((h9[3]*h9[6])/d[9]) + JA9[3][3];
T189[3][4]=-((h9[1]*h9[3])/d[9]) + JA9[3][4];
T189[3][5]=-((h9[2]*h9[3])/d[9]) + JA9[3][5];
T189[3][6]=-(Power(h9[3],2)/d[9]) + JA9[3][6];

T189[4][1]=-(Power(h9[4],2)/d[9]) + JA9[4][1];
T189[4][2]=-((h9[4]*h9[5])/d[9]) + JA9[4][2];
T189[4][3]=-((h9[4]*h9[6])/d[9]) + JA9[4][3];
T189[4][4]=-((h9[1]*h9[4])/d[9]) + JA9[4][4];
T189[4][5]=-((h9[2]*h9[4])/d[9]) + JA9[4][5];
T189[4][6]=-((h9[3]*h9[4])/d[9]) + JA9[4][6];

T189[5][1]=-((h9[4]*h9[5])/d[9]) + JA9[5][1];
T189[5][2]=-(Power(h9[5],2)/d[9]) + JA9[5][2];
T189[5][3]=-((h9[5]*h9[6])/d[9]) + JA9[5][3];
T189[5][4]=-((h9[1]*h9[5])/d[9]) + JA9[5][4];
T189[5][5]=-((h9[2]*h9[5])/d[9]) + JA9[5][5];
T189[5][6]=-((h9[3]*h9[5])/d[9]) + JA9[5][6];

T189[6][1]=-((h9[4]*h9[6])/d[9]) + JA9[6][1];
T189[6][2]=-((h9[5]*h9[6])/d[9]) + JA9[6][2];
T189[6][3]=-(Power(h9[6],2)/d[9]) + JA9[6][3];
T189[6][4]=-((h9[1]*h9[6])/d[9]) + JA9[6][4];
T189[6][5]=-((h9[2]*h9[6])/d[9]) + JA9[6][5];
T189[6][6]=-((h9[3]*h9[6])/d[9]) + JA9[6][6];


T89[1][1]=S98[1][1]*(Si89[1][1]*T189[1][1] + Si89[1][2]*T189[2][1]) + S98[2][1]*(Si89[1][1]*T189[1][2] + Si89[1][2]*T189[2][2]);
T89[1][2]=Si89[1][1]*T189[1][3] + Si89[1][2]*T189[2][3];
T89[1][3]=S98[1][3]*(Si89[1][1]*T189[1][1] + Si89[1][2]*T189[2][1]) + S98[2][3]*(Si89[1][1]*T189[1][2] + Si89[1][2]*T189[2][2]);
T89[1][4]=S98[1][1]*(Si89[1][1]*T189[1][4] + Si89[1][2]*T189[2][4]) + S98[2][1]*(Si89[1][1]*T189[1][5] + Si89[1][2]*T189[2][5]);
T89[1][5]=Si89[1][1]*T189[1][6] + Si89[1][2]*T189[2][6];
T89[1][6]=S98[1][3]*(Si89[1][1]*T189[1][4] + Si89[1][2]*T189[2][4]) + S98[2][3]*(Si89[1][1]*T189[1][5] + Si89[1][2]*T189[2][5]);

T89[2][1]=S98[1][1]*T189[3][1] + S98[2][1]*T189[3][2];
T89[2][2]=T189[3][3];
T89[2][3]=S98[1][3]*T189[3][1] + S98[2][3]*T189[3][2];
T89[2][4]=S98[1][1]*T189[3][4] + S98[2][1]*T189[3][5];
T89[2][5]=T189[3][6];
T89[2][6]=S98[1][3]*T189[3][4] + S98[2][3]*T189[3][5];

T89[3][1]=S98[1][1]*(Si89[3][1]*T189[1][1] + Si89[3][2]*T189[2][1]) + S98[2][1]*(Si89[3][1]*T189[1][2] + Si89[3][2]*T189[2][2]);
T89[3][2]=Si89[3][1]*T189[1][3] + Si89[3][2]*T189[2][3];
T89[3][3]=S98[1][3]*(Si89[3][1]*T189[1][1] + Si89[3][2]*T189[2][1]) + S98[2][3]*(Si89[3][1]*T189[1][2] + Si89[3][2]*T189[2][2]);
T89[3][4]=S98[1][1]*(Si89[3][1]*T189[1][4] + Si89[3][2]*T189[2][4]) + S98[2][1]*(Si89[3][1]*T189[1][5] + Si89[3][2]*T189[2][5]);
T89[3][5]=Si89[3][1]*T189[1][6] + Si89[3][2]*T189[2][6];
T89[3][6]=S98[1][3]*(Si89[3][1]*T189[1][4] + Si89[3][2]*T189[2][4]) + S98[2][3]*(Si89[3][1]*T189[1][5] + Si89[3][2]*T189[2][5]);

T89[4][1]=S98[1][1]*(Si89[1][1]*T189[4][1] + Si89[1][2]*T189[5][1]) + S98[2][1]*(Si89[1][1]*T189[4][2] + Si89[1][2]*T189[5][2]);
T89[4][2]=Si89[1][1]*T189[4][3] + Si89[1][2]*T189[5][3];
T89[4][3]=S98[1][3]*(Si89[1][1]*T189[4][1] + Si89[1][2]*T189[5][1]) + S98[2][3]*(Si89[1][1]*T189[4][2] + Si89[1][2]*T189[5][2]);
T89[4][4]=S98[1][1]*(Si89[1][1]*T189[4][4] + Si89[1][2]*T189[5][4]) + S98[2][1]*(Si89[1][1]*T189[4][5] + Si89[1][2]*T189[5][5]);
T89[4][5]=Si89[1][1]*T189[4][6] + Si89[1][2]*T189[5][6];
T89[4][6]=S98[1][3]*(Si89[1][1]*T189[4][4] + Si89[1][2]*T189[5][4]) + S98[2][3]*(Si89[1][1]*T189[4][5] + Si89[1][2]*T189[5][5]);

T89[5][1]=S98[1][1]*T189[6][1] + S98[2][1]*T189[6][2];
T89[5][2]=T189[6][3];
T89[5][3]=S98[1][3]*T189[6][1] + S98[2][3]*T189[6][2];
T89[5][4]=S98[1][1]*T189[6][4] + S98[2][1]*T189[6][5];
T89[5][5]=T189[6][6];
T89[5][6]=S98[1][3]*T189[6][4] + S98[2][3]*T189[6][5];

T89[6][1]=S98[1][1]*(Si89[3][1]*T189[4][1] + Si89[3][2]*T189[5][1]) + S98[2][1]*(Si89[3][1]*T189[4][2] + Si89[3][2]*T189[5][2]);
T89[6][2]=Si89[3][1]*T189[4][3] + Si89[3][2]*T189[5][3];
T89[6][3]=S98[1][3]*(Si89[3][1]*T189[4][1] + Si89[3][2]*T189[5][1]) + S98[2][3]*(Si89[3][1]*T189[4][2] + Si89[3][2]*T189[5][2]);
T89[6][4]=S98[1][1]*(Si89[3][1]*T189[4][4] + Si89[3][2]*T189[5][4]) + S98[2][1]*(Si89[3][1]*T189[4][5] + Si89[3][2]*T189[5][5]);
T89[6][5]=Si89[3][1]*T189[4][6] + Si89[3][2]*T189[5][6];
T89[6][6]=S98[1][3]*(Si89[3][1]*T189[4][4] + Si89[3][2]*T189[5][4]) + S98[2][3]*(Si89[3][1]*T189[4][5] + Si89[3][2]*T189[5][5]);



}


void
hoap3_ForDynArtfunc24(void)
      {
JA8[1][1]=T89[1][1];
JA8[1][2]=links[5].mcm[3] + T89[1][2];
JA8[1][3]=-links[5].mcm[2] + T89[1][3];
JA8[1][4]=links[5].m + T89[1][4];
JA8[1][5]=T89[1][5];
JA8[1][6]=T89[1][6];

JA8[2][1]=-links[5].mcm[3] + T89[2][1];
JA8[2][2]=T89[2][2];
JA8[2][3]=links[5].mcm[1] + T89[2][3];
JA8[2][4]=T89[2][4];
JA8[2][5]=links[5].m + T89[2][5];
JA8[2][6]=T89[2][6];

JA8[3][1]=links[5].mcm[2] + T89[3][1];
JA8[3][2]=-links[5].mcm[1] + T89[3][2];
JA8[3][3]=T89[3][3];
JA8[3][4]=T89[3][4];
JA8[3][5]=T89[3][5];
JA8[3][6]=links[5].m + T89[3][6];

JA8[4][1]=links[5].inertia[1][1] + T89[4][1];
JA8[4][2]=links[5].inertia[1][2] + T89[4][2];
JA8[4][3]=links[5].inertia[1][3] + T89[4][3];
JA8[4][4]=T89[4][4];
JA8[4][5]=-links[5].mcm[3] + T89[4][5];
JA8[4][6]=links[5].mcm[2] + T89[4][6];

JA8[5][1]=links[5].inertia[1][2] + T89[5][1];
JA8[5][2]=links[5].inertia[2][2] + T89[5][2];
JA8[5][3]=links[5].inertia[2][3] + T89[5][3];
JA8[5][4]=links[5].mcm[3] + T89[5][4];
JA8[5][5]=T89[5][5];
JA8[5][6]=-links[5].mcm[1] + T89[5][6];

JA8[6][1]=links[5].inertia[1][3] + T89[6][1];
JA8[6][2]=links[5].inertia[2][3] + T89[6][2];
JA8[6][3]=links[5].inertia[3][3] + T89[6][3];
JA8[6][4]=-links[5].mcm[2] + T89[6][4];
JA8[6][5]=links[5].mcm[1] + T89[6][5];
JA8[6][6]=T89[6][6];


h8[1]=JA8[1][3];
h8[2]=JA8[2][3];
h8[3]=JA8[3][3];
h8[4]=JA8[4][3];
h8[5]=JA8[5][3];
h8[6]=JA8[6][3];

d[8]=1.e-10 + h8[6];

T178[1][1]=-((h8[1]*h8[4])/d[8]) + JA8[1][1];
T178[1][2]=-((h8[1]*h8[5])/d[8]) + JA8[1][2];
T178[1][3]=-((h8[1]*h8[6])/d[8]) + JA8[1][3];
T178[1][4]=-(Power(h8[1],2)/d[8]) + JA8[1][4];
T178[1][5]=-((h8[1]*h8[2])/d[8]) + JA8[1][5];
T178[1][6]=-((h8[1]*h8[3])/d[8]) + JA8[1][6];

T178[2][1]=-((h8[2]*h8[4])/d[8]) + JA8[2][1];
T178[2][2]=-((h8[2]*h8[5])/d[8]) + JA8[2][2];
T178[2][3]=-((h8[2]*h8[6])/d[8]) + JA8[2][3];
T178[2][4]=-((h8[1]*h8[2])/d[8]) + JA8[2][4];
T178[2][5]=-(Power(h8[2],2)/d[8]) + JA8[2][5];
T178[2][6]=-((h8[2]*h8[3])/d[8]) + JA8[2][6];

T178[3][1]=-((h8[3]*h8[4])/d[8]) + JA8[3][1];
T178[3][2]=-((h8[3]*h8[5])/d[8]) + JA8[3][2];
T178[3][3]=-((h8[3]*h8[6])/d[8]) + JA8[3][3];
T178[3][4]=-((h8[1]*h8[3])/d[8]) + JA8[3][4];
T178[3][5]=-((h8[2]*h8[3])/d[8]) + JA8[3][5];
T178[3][6]=-(Power(h8[3],2)/d[8]) + JA8[3][6];

T178[4][1]=-(Power(h8[4],2)/d[8]) + JA8[4][1];
T178[4][2]=-((h8[4]*h8[5])/d[8]) + JA8[4][2];
T178[4][3]=-((h8[4]*h8[6])/d[8]) + JA8[4][3];
T178[4][4]=-((h8[1]*h8[4])/d[8]) + JA8[4][4];
T178[4][5]=-((h8[2]*h8[4])/d[8]) + JA8[4][5];
T178[4][6]=-((h8[3]*h8[4])/d[8]) + JA8[4][6];

T178[5][1]=-((h8[4]*h8[5])/d[8]) + JA8[5][1];
T178[5][2]=-(Power(h8[5],2)/d[8]) + JA8[5][2];
T178[5][3]=-((h8[5]*h8[6])/d[8]) + JA8[5][3];
T178[5][4]=-((h8[1]*h8[5])/d[8]) + JA8[5][4];
T178[5][5]=-((h8[2]*h8[5])/d[8]) + JA8[5][5];
T178[5][6]=-((h8[3]*h8[5])/d[8]) + JA8[5][6];

T178[6][1]=-((h8[4]*h8[6])/d[8]) + JA8[6][1];
T178[6][2]=-((h8[5]*h8[6])/d[8]) + JA8[6][2];
T178[6][3]=-(Power(h8[6],2)/d[8]) + JA8[6][3];
T178[6][4]=-((h8[1]*h8[6])/d[8]) + JA8[6][4];
T178[6][5]=-((h8[2]*h8[6])/d[8]) + JA8[6][5];
T178[6][6]=-((h8[3]*h8[6])/d[8]) + JA8[6][6];


T78[1][1]=S87[1][1]*(Si78[1][1]*T178[1][1] + Si78[1][2]*T178[2][1]) + S87[2][1]*(Si78[1][1]*T178[1][2] + Si78[1][2]*T178[2][2]);
T78[1][2]=S87[1][2]*(Si78[1][1]*T178[1][1] + Si78[1][2]*T178[2][1]) + S87[2][2]*(Si78[1][1]*T178[1][2] + Si78[1][2]*T178[2][2]) + LEGLINK3*(Si78[1][1]*T178[1][6] + Si78[1][2]*T178[2][6]);
T78[1][3]=Si78[1][1]*T178[1][3] + Si78[1][2]*T178[2][3] - LEGLINK3*S87[1][2]*(Si78[1][1]*T178[1][4] + Si78[1][2]*T178[2][4]) - LEGLINK3*S87[2][2]*(Si78[1][1]*T178[1][5] + Si78[1][2]*T178[2][5]);
T78[1][4]=S87[1][1]*(Si78[1][1]*T178[1][4] + Si78[1][2]*T178[2][4]) + S87[2][1]*(Si78[1][1]*T178[1][5] + Si78[1][2]*T178[2][5]);
T78[1][5]=S87[1][2]*(Si78[1][1]*T178[1][4] + Si78[1][2]*T178[2][4]) + S87[2][2]*(Si78[1][1]*T178[1][5] + Si78[1][2]*T178[2][5]);
T78[1][6]=Si78[1][1]*T178[1][6] + Si78[1][2]*T178[2][6];

T78[2][1]=S87[1][1]*(Si78[2][1]*T178[1][1] + Si78[2][2]*T178[2][1]) + S87[2][1]*(Si78[2][1]*T178[1][2] + Si78[2][2]*T178[2][2]);
T78[2][2]=S87[1][2]*(Si78[2][1]*T178[1][1] + Si78[2][2]*T178[2][1]) + S87[2][2]*(Si78[2][1]*T178[1][2] + Si78[2][2]*T178[2][2]) + LEGLINK3*(Si78[2][1]*T178[1][6] + Si78[2][2]*T178[2][6]);
T78[2][3]=Si78[2][1]*T178[1][3] + Si78[2][2]*T178[2][3] - LEGLINK3*S87[1][2]*(Si78[2][1]*T178[1][4] + Si78[2][2]*T178[2][4]) - LEGLINK3*S87[2][2]*(Si78[2][1]*T178[1][5] + Si78[2][2]*T178[2][5]);
T78[2][4]=S87[1][1]*(Si78[2][1]*T178[1][4] + Si78[2][2]*T178[2][4]) + S87[2][1]*(Si78[2][1]*T178[1][5] + Si78[2][2]*T178[2][5]);
T78[2][5]=S87[1][2]*(Si78[2][1]*T178[1][4] + Si78[2][2]*T178[2][4]) + S87[2][2]*(Si78[2][1]*T178[1][5] + Si78[2][2]*T178[2][5]);
T78[2][6]=Si78[2][1]*T178[1][6] + Si78[2][2]*T178[2][6];

T78[3][1]=S87[1][1]*T178[3][1] + S87[2][1]*T178[3][2];
T78[3][2]=S87[1][2]*T178[3][1] + S87[2][2]*T178[3][2] + LEGLINK3*T178[3][6];
T78[3][3]=T178[3][3] - LEGLINK3*S87[1][2]*T178[3][4] - LEGLINK3*S87[2][2]*T178[3][5];
T78[3][4]=S87[1][1]*T178[3][4] + S87[2][1]*T178[3][5];
T78[3][5]=S87[1][2]*T178[3][4] + S87[2][2]*T178[3][5];
T78[3][6]=T178[3][6];

T78[4][1]=S87[1][1]*(Si78[1][1]*T178[4][1] + Si78[1][2]*T178[5][1]) + S87[2][1]*(Si78[1][1]*T178[4][2] + Si78[1][2]*T178[5][2]);
T78[4][2]=S87[1][2]*(Si78[1][1]*T178[4][1] + Si78[1][2]*T178[5][1]) + S87[2][2]*(Si78[1][1]*T178[4][2] + Si78[1][2]*T178[5][2]) + LEGLINK3*(Si78[1][1]*T178[4][6] + Si78[1][2]*T178[5][6]);
T78[4][3]=Si78[1][1]*T178[4][3] + Si78[1][2]*T178[5][3] - LEGLINK3*S87[1][2]*(Si78[1][1]*T178[4][4] + Si78[1][2]*T178[5][4]) - LEGLINK3*S87[2][2]*(Si78[1][1]*T178[4][5] + Si78[1][2]*T178[5][5]);
T78[4][4]=S87[1][1]*(Si78[1][1]*T178[4][4] + Si78[1][2]*T178[5][4]) + S87[2][1]*(Si78[1][1]*T178[4][5] + Si78[1][2]*T178[5][5]);
T78[4][5]=S87[1][2]*(Si78[1][1]*T178[4][4] + Si78[1][2]*T178[5][4]) + S87[2][2]*(Si78[1][1]*T178[4][5] + Si78[1][2]*T178[5][5]);
T78[4][6]=Si78[1][1]*T178[4][6] + Si78[1][2]*T178[5][6];

T78[5][1]=S87[1][1]*(LEGLINK3*T178[3][1] + Si78[2][1]*T178[4][1] + Si78[2][2]*T178[5][1]) + S87[2][1]*(LEGLINK3*T178[3][2] + Si78[2][1]*T178[4][2] + Si78[2][2]*T178[5][2]);
T78[5][2]=S87[1][2]*(LEGLINK3*T178[3][1] + Si78[2][1]*T178[4][1] + Si78[2][2]*T178[5][1]) + S87[2][2]*(LEGLINK3*T178[3][2] + Si78[2][1]*T178[4][2] + Si78[2][2]*T178[5][2]) + LEGLINK3*(LEGLINK3*T178[3][6] + Si78[2][1]*T178[4][6] + Si78[2][2]*T178[5][6]);
T78[5][3]=LEGLINK3*T178[3][3] + Si78[2][1]*T178[4][3] + Si78[2][2]*T178[5][3] - LEGLINK3*S87[1][2]*(LEGLINK3*T178[3][4] + Si78[2][1]*T178[4][4] + Si78[2][2]*T178[5][4]) - LEGLINK3*S87[2][2]*(LEGLINK3*T178[3][5] + Si78[2][1]*T178[4][5] + Si78[2][2]*T178[5][5]);
T78[5][4]=S87[1][1]*(LEGLINK3*T178[3][4] + Si78[2][1]*T178[4][4] + Si78[2][2]*T178[5][4]) + S87[2][1]*(LEGLINK3*T178[3][5] + Si78[2][1]*T178[4][5] + Si78[2][2]*T178[5][5]);
T78[5][5]=S87[1][2]*(LEGLINK3*T178[3][4] + Si78[2][1]*T178[4][4] + Si78[2][2]*T178[5][4]) + S87[2][2]*(LEGLINK3*T178[3][5] + Si78[2][1]*T178[4][5] + Si78[2][2]*T178[5][5]);
T78[5][6]=LEGLINK3*T178[3][6] + Si78[2][1]*T178[4][6] + Si78[2][2]*T178[5][6];

T78[6][1]=S87[1][1]*(-(LEGLINK3*Si78[2][1]*T178[1][1]) - LEGLINK3*Si78[2][2]*T178[2][1] + T178[6][1]) + S87[2][1]*(-(LEGLINK3*Si78[2][1]*T178[1][2]) - LEGLINK3*Si78[2][2]*T178[2][2] + T178[6][2]);
T78[6][2]=S87[1][2]*(-(LEGLINK3*Si78[2][1]*T178[1][1]) - LEGLINK3*Si78[2][2]*T178[2][1] + T178[6][1]) + S87[2][2]*(-(LEGLINK3*Si78[2][1]*T178[1][2]) - LEGLINK3*Si78[2][2]*T178[2][2] + T178[6][2]) + LEGLINK3*(-(LEGLINK3*Si78[2][1]*T178[1][6]) - LEGLINK3*Si78[2][2]*T178[2][6] + T178[6][6]);
T78[6][3]=-(LEGLINK3*Si78[2][1]*T178[1][3]) - LEGLINK3*Si78[2][2]*T178[2][3] + T178[6][3] - LEGLINK3*S87[1][2]*(-(LEGLINK3*Si78[2][1]*T178[1][4]) - LEGLINK3*Si78[2][2]*T178[2][4] + T178[6][4]) - LEGLINK3*S87[2][2]*(-(LEGLINK3*Si78[2][1]*T178[1][5]) - LEGLINK3*Si78[2][2]*T178[2][5] + T178[6][5]);
T78[6][4]=S87[1][1]*(-(LEGLINK3*Si78[2][1]*T178[1][4]) - LEGLINK3*Si78[2][2]*T178[2][4] + T178[6][4]) + S87[2][1]*(-(LEGLINK3*Si78[2][1]*T178[1][5]) - LEGLINK3*Si78[2][2]*T178[2][5] + T178[6][5]);
T78[6][5]=S87[1][2]*(-(LEGLINK3*Si78[2][1]*T178[1][4]) - LEGLINK3*Si78[2][2]*T178[2][4] + T178[6][4]) + S87[2][2]*(-(LEGLINK3*Si78[2][1]*T178[1][5]) - LEGLINK3*Si78[2][2]*T178[2][5] + T178[6][5]);
T78[6][6]=-(LEGLINK3*Si78[2][1]*T178[1][6]) - LEGLINK3*Si78[2][2]*T178[2][6] + T178[6][6];



}


void
hoap3_ForDynArtfunc25(void)
      {
JA7[1][1]=T78[1][1];
JA7[1][2]=links[4].mcm[3] + T78[1][2];
JA7[1][3]=-links[4].mcm[2] + T78[1][3];
JA7[1][4]=links[4].m + T78[1][4];
JA7[1][5]=T78[1][5];
JA7[1][6]=T78[1][6];

JA7[2][1]=-links[4].mcm[3] + T78[2][1];
JA7[2][2]=T78[2][2];
JA7[2][3]=links[4].mcm[1] + T78[2][3];
JA7[2][4]=T78[2][4];
JA7[2][5]=links[4].m + T78[2][5];
JA7[2][6]=T78[2][6];

JA7[3][1]=links[4].mcm[2] + T78[3][1];
JA7[3][2]=-links[4].mcm[1] + T78[3][2];
JA7[3][3]=T78[3][3];
JA7[3][4]=T78[3][4];
JA7[3][5]=T78[3][5];
JA7[3][6]=links[4].m + T78[3][6];

JA7[4][1]=links[4].inertia[1][1] + T78[4][1];
JA7[4][2]=links[4].inertia[1][2] + T78[4][2];
JA7[4][3]=links[4].inertia[1][3] + T78[4][3];
JA7[4][4]=T78[4][4];
JA7[4][5]=-links[4].mcm[3] + T78[4][5];
JA7[4][6]=links[4].mcm[2] + T78[4][6];

JA7[5][1]=links[4].inertia[1][2] + T78[5][1];
JA7[5][2]=links[4].inertia[2][2] + T78[5][2];
JA7[5][3]=links[4].inertia[2][3] + T78[5][3];
JA7[5][4]=links[4].mcm[3] + T78[5][4];
JA7[5][5]=T78[5][5];
JA7[5][6]=-links[4].mcm[1] + T78[5][6];

JA7[6][1]=links[4].inertia[1][3] + T78[6][1];
JA7[6][2]=links[4].inertia[2][3] + T78[6][2];
JA7[6][3]=links[4].inertia[3][3] + T78[6][3];
JA7[6][4]=-links[4].mcm[2] + T78[6][4];
JA7[6][5]=links[4].mcm[1] + T78[6][5];
JA7[6][6]=T78[6][6];


h7[1]=JA7[1][3];
h7[2]=JA7[2][3];
h7[3]=JA7[3][3];
h7[4]=JA7[4][3];
h7[5]=JA7[5][3];
h7[6]=JA7[6][3];

d[7]=1.e-10 + h7[6];

T167[1][1]=-((h7[1]*h7[4])/d[7]) + JA7[1][1];
T167[1][2]=-((h7[1]*h7[5])/d[7]) + JA7[1][2];
T167[1][3]=-((h7[1]*h7[6])/d[7]) + JA7[1][3];
T167[1][4]=-(Power(h7[1],2)/d[7]) + JA7[1][4];
T167[1][5]=-((h7[1]*h7[2])/d[7]) + JA7[1][5];
T167[1][6]=-((h7[1]*h7[3])/d[7]) + JA7[1][6];

T167[2][1]=-((h7[2]*h7[4])/d[7]) + JA7[2][1];
T167[2][2]=-((h7[2]*h7[5])/d[7]) + JA7[2][2];
T167[2][3]=-((h7[2]*h7[6])/d[7]) + JA7[2][3];
T167[2][4]=-((h7[1]*h7[2])/d[7]) + JA7[2][4];
T167[2][5]=-(Power(h7[2],2)/d[7]) + JA7[2][5];
T167[2][6]=-((h7[2]*h7[3])/d[7]) + JA7[2][6];

T167[3][1]=-((h7[3]*h7[4])/d[7]) + JA7[3][1];
T167[3][2]=-((h7[3]*h7[5])/d[7]) + JA7[3][2];
T167[3][3]=-((h7[3]*h7[6])/d[7]) + JA7[3][3];
T167[3][4]=-((h7[1]*h7[3])/d[7]) + JA7[3][4];
T167[3][5]=-((h7[2]*h7[3])/d[7]) + JA7[3][5];
T167[3][6]=-(Power(h7[3],2)/d[7]) + JA7[3][6];

T167[4][1]=-(Power(h7[4],2)/d[7]) + JA7[4][1];
T167[4][2]=-((h7[4]*h7[5])/d[7]) + JA7[4][2];
T167[4][3]=-((h7[4]*h7[6])/d[7]) + JA7[4][3];
T167[4][4]=-((h7[1]*h7[4])/d[7]) + JA7[4][4];
T167[4][5]=-((h7[2]*h7[4])/d[7]) + JA7[4][5];
T167[4][6]=-((h7[3]*h7[4])/d[7]) + JA7[4][6];

T167[5][1]=-((h7[4]*h7[5])/d[7]) + JA7[5][1];
T167[5][2]=-(Power(h7[5],2)/d[7]) + JA7[5][2];
T167[5][3]=-((h7[5]*h7[6])/d[7]) + JA7[5][3];
T167[5][4]=-((h7[1]*h7[5])/d[7]) + JA7[5][4];
T167[5][5]=-((h7[2]*h7[5])/d[7]) + JA7[5][5];
T167[5][6]=-((h7[3]*h7[5])/d[7]) + JA7[5][6];

T167[6][1]=-((h7[4]*h7[6])/d[7]) + JA7[6][1];
T167[6][2]=-((h7[5]*h7[6])/d[7]) + JA7[6][2];
T167[6][3]=-(Power(h7[6],2)/d[7]) + JA7[6][3];
T167[6][4]=-((h7[1]*h7[6])/d[7]) + JA7[6][4];
T167[6][5]=-((h7[2]*h7[6])/d[7]) + JA7[6][5];
T167[6][6]=-((h7[3]*h7[6])/d[7]) + JA7[6][6];


T67[1][1]=S76[1][1]*(Si67[1][1]*T167[1][1] + Si67[1][2]*T167[2][1]) + S76[2][1]*(Si67[1][1]*T167[1][2] + Si67[1][2]*T167[2][2]);
T67[1][2]=S76[1][2]*(Si67[1][1]*T167[1][1] + Si67[1][2]*T167[2][1]) + S76[2][2]*(Si67[1][1]*T167[1][2] + Si67[1][2]*T167[2][2]) + LEGLINK2*(Si67[1][1]*T167[1][6] + Si67[1][2]*T167[2][6]);
T67[1][3]=Si67[1][1]*T167[1][3] + Si67[1][2]*T167[2][3] - LEGLINK2*S76[1][2]*(Si67[1][1]*T167[1][4] + Si67[1][2]*T167[2][4]) - LEGLINK2*S76[2][2]*(Si67[1][1]*T167[1][5] + Si67[1][2]*T167[2][5]);
T67[1][4]=S76[1][1]*(Si67[1][1]*T167[1][4] + Si67[1][2]*T167[2][4]) + S76[2][1]*(Si67[1][1]*T167[1][5] + Si67[1][2]*T167[2][5]);
T67[1][5]=S76[1][2]*(Si67[1][1]*T167[1][4] + Si67[1][2]*T167[2][4]) + S76[2][2]*(Si67[1][1]*T167[1][5] + Si67[1][2]*T167[2][5]);
T67[1][6]=Si67[1][1]*T167[1][6] + Si67[1][2]*T167[2][6];

T67[2][1]=S76[1][1]*(Si67[2][1]*T167[1][1] + Si67[2][2]*T167[2][1]) + S76[2][1]*(Si67[2][1]*T167[1][2] + Si67[2][2]*T167[2][2]);
T67[2][2]=S76[1][2]*(Si67[2][1]*T167[1][1] + Si67[2][2]*T167[2][1]) + S76[2][2]*(Si67[2][1]*T167[1][2] + Si67[2][2]*T167[2][2]) + LEGLINK2*(Si67[2][1]*T167[1][6] + Si67[2][2]*T167[2][6]);
T67[2][3]=Si67[2][1]*T167[1][3] + Si67[2][2]*T167[2][3] - LEGLINK2*S76[1][2]*(Si67[2][1]*T167[1][4] + Si67[2][2]*T167[2][4]) - LEGLINK2*S76[2][2]*(Si67[2][1]*T167[1][5] + Si67[2][2]*T167[2][5]);
T67[2][4]=S76[1][1]*(Si67[2][1]*T167[1][4] + Si67[2][2]*T167[2][4]) + S76[2][1]*(Si67[2][1]*T167[1][5] + Si67[2][2]*T167[2][5]);
T67[2][5]=S76[1][2]*(Si67[2][1]*T167[1][4] + Si67[2][2]*T167[2][4]) + S76[2][2]*(Si67[2][1]*T167[1][5] + Si67[2][2]*T167[2][5]);
T67[2][6]=Si67[2][1]*T167[1][6] + Si67[2][2]*T167[2][6];

T67[3][1]=S76[1][1]*T167[3][1] + S76[2][1]*T167[3][2];
T67[3][2]=S76[1][2]*T167[3][1] + S76[2][2]*T167[3][2] + LEGLINK2*T167[3][6];
T67[3][3]=T167[3][3] - LEGLINK2*S76[1][2]*T167[3][4] - LEGLINK2*S76[2][2]*T167[3][5];
T67[3][4]=S76[1][1]*T167[3][4] + S76[2][1]*T167[3][5];
T67[3][5]=S76[1][2]*T167[3][4] + S76[2][2]*T167[3][5];
T67[3][6]=T167[3][6];

T67[4][1]=S76[1][1]*(Si67[1][1]*T167[4][1] + Si67[1][2]*T167[5][1]) + S76[2][1]*(Si67[1][1]*T167[4][2] + Si67[1][2]*T167[5][2]);
T67[4][2]=S76[1][2]*(Si67[1][1]*T167[4][1] + Si67[1][2]*T167[5][1]) + S76[2][2]*(Si67[1][1]*T167[4][2] + Si67[1][2]*T167[5][2]) + LEGLINK2*(Si67[1][1]*T167[4][6] + Si67[1][2]*T167[5][6]);
T67[4][3]=Si67[1][1]*T167[4][3] + Si67[1][2]*T167[5][3] - LEGLINK2*S76[1][2]*(Si67[1][1]*T167[4][4] + Si67[1][2]*T167[5][4]) - LEGLINK2*S76[2][2]*(Si67[1][1]*T167[4][5] + Si67[1][2]*T167[5][5]);
T67[4][4]=S76[1][1]*(Si67[1][1]*T167[4][4] + Si67[1][2]*T167[5][4]) + S76[2][1]*(Si67[1][1]*T167[4][5] + Si67[1][2]*T167[5][5]);
T67[4][5]=S76[1][2]*(Si67[1][1]*T167[4][4] + Si67[1][2]*T167[5][4]) + S76[2][2]*(Si67[1][1]*T167[4][5] + Si67[1][2]*T167[5][5]);
T67[4][6]=Si67[1][1]*T167[4][6] + Si67[1][2]*T167[5][6];

T67[5][1]=S76[1][1]*(LEGLINK2*T167[3][1] + Si67[2][1]*T167[4][1] + Si67[2][2]*T167[5][1]) + S76[2][1]*(LEGLINK2*T167[3][2] + Si67[2][1]*T167[4][2] + Si67[2][2]*T167[5][2]);
T67[5][2]=S76[1][2]*(LEGLINK2*T167[3][1] + Si67[2][1]*T167[4][1] + Si67[2][2]*T167[5][1]) + S76[2][2]*(LEGLINK2*T167[3][2] + Si67[2][1]*T167[4][2] + Si67[2][2]*T167[5][2]) + LEGLINK2*(LEGLINK2*T167[3][6] + Si67[2][1]*T167[4][6] + Si67[2][2]*T167[5][6]);
T67[5][3]=LEGLINK2*T167[3][3] + Si67[2][1]*T167[4][3] + Si67[2][2]*T167[5][3] - LEGLINK2*S76[1][2]*(LEGLINK2*T167[3][4] + Si67[2][1]*T167[4][4] + Si67[2][2]*T167[5][4]) - LEGLINK2*S76[2][2]*(LEGLINK2*T167[3][5] + Si67[2][1]*T167[4][5] + Si67[2][2]*T167[5][5]);
T67[5][4]=S76[1][1]*(LEGLINK2*T167[3][4] + Si67[2][1]*T167[4][4] + Si67[2][2]*T167[5][4]) + S76[2][1]*(LEGLINK2*T167[3][5] + Si67[2][1]*T167[4][5] + Si67[2][2]*T167[5][5]);
T67[5][5]=S76[1][2]*(LEGLINK2*T167[3][4] + Si67[2][1]*T167[4][4] + Si67[2][2]*T167[5][4]) + S76[2][2]*(LEGLINK2*T167[3][5] + Si67[2][1]*T167[4][5] + Si67[2][2]*T167[5][5]);
T67[5][6]=LEGLINK2*T167[3][6] + Si67[2][1]*T167[4][6] + Si67[2][2]*T167[5][6];

T67[6][1]=S76[1][1]*(-(LEGLINK2*Si67[2][1]*T167[1][1]) - LEGLINK2*Si67[2][2]*T167[2][1] + T167[6][1]) + S76[2][1]*(-(LEGLINK2*Si67[2][1]*T167[1][2]) - LEGLINK2*Si67[2][2]*T167[2][2] + T167[6][2]);
T67[6][2]=S76[1][2]*(-(LEGLINK2*Si67[2][1]*T167[1][1]) - LEGLINK2*Si67[2][2]*T167[2][1] + T167[6][1]) + S76[2][2]*(-(LEGLINK2*Si67[2][1]*T167[1][2]) - LEGLINK2*Si67[2][2]*T167[2][2] + T167[6][2]) + LEGLINK2*(-(LEGLINK2*Si67[2][1]*T167[1][6]) - LEGLINK2*Si67[2][2]*T167[2][6] + T167[6][6]);
T67[6][3]=-(LEGLINK2*Si67[2][1]*T167[1][3]) - LEGLINK2*Si67[2][2]*T167[2][3] + T167[6][3] - LEGLINK2*S76[1][2]*(-(LEGLINK2*Si67[2][1]*T167[1][4]) - LEGLINK2*Si67[2][2]*T167[2][4] + T167[6][4]) - LEGLINK2*S76[2][2]*(-(LEGLINK2*Si67[2][1]*T167[1][5]) - LEGLINK2*Si67[2][2]*T167[2][5] + T167[6][5]);
T67[6][4]=S76[1][1]*(-(LEGLINK2*Si67[2][1]*T167[1][4]) - LEGLINK2*Si67[2][2]*T167[2][4] + T167[6][4]) + S76[2][1]*(-(LEGLINK2*Si67[2][1]*T167[1][5]) - LEGLINK2*Si67[2][2]*T167[2][5] + T167[6][5]);
T67[6][5]=S76[1][2]*(-(LEGLINK2*Si67[2][1]*T167[1][4]) - LEGLINK2*Si67[2][2]*T167[2][4] + T167[6][4]) + S76[2][2]*(-(LEGLINK2*Si67[2][1]*T167[1][5]) - LEGLINK2*Si67[2][2]*T167[2][5] + T167[6][5]);
T67[6][6]=-(LEGLINK2*Si67[2][1]*T167[1][6]) - LEGLINK2*Si67[2][2]*T167[2][6] + T167[6][6];



}


void
hoap3_ForDynArtfunc26(void)
      {
JA6[1][1]=T67[1][1];
JA6[1][2]=links[3].mcm[3] + T67[1][2];
JA6[1][3]=-links[3].mcm[2] + T67[1][3];
JA6[1][4]=links[3].m + T67[1][4];
JA6[1][5]=T67[1][5];
JA6[1][6]=T67[1][6];

JA6[2][1]=-links[3].mcm[3] + T67[2][1];
JA6[2][2]=T67[2][2];
JA6[2][3]=links[3].mcm[1] + T67[2][3];
JA6[2][4]=T67[2][4];
JA6[2][5]=links[3].m + T67[2][5];
JA6[2][6]=T67[2][6];

JA6[3][1]=links[3].mcm[2] + T67[3][1];
JA6[3][2]=-links[3].mcm[1] + T67[3][2];
JA6[3][3]=T67[3][3];
JA6[3][4]=T67[3][4];
JA6[3][5]=T67[3][5];
JA6[3][6]=links[3].m + T67[3][6];

JA6[4][1]=links[3].inertia[1][1] + T67[4][1];
JA6[4][2]=links[3].inertia[1][2] + T67[4][2];
JA6[4][3]=links[3].inertia[1][3] + T67[4][3];
JA6[4][4]=T67[4][4];
JA6[4][5]=-links[3].mcm[3] + T67[4][5];
JA6[4][6]=links[3].mcm[2] + T67[4][6];

JA6[5][1]=links[3].inertia[1][2] + T67[5][1];
JA6[5][2]=links[3].inertia[2][2] + T67[5][2];
JA6[5][3]=links[3].inertia[2][3] + T67[5][3];
JA6[5][4]=links[3].mcm[3] + T67[5][4];
JA6[5][5]=T67[5][5];
JA6[5][6]=-links[3].mcm[1] + T67[5][6];

JA6[6][1]=links[3].inertia[1][3] + T67[6][1];
JA6[6][2]=links[3].inertia[2][3] + T67[6][2];
JA6[6][3]=links[3].inertia[3][3] + T67[6][3];
JA6[6][4]=-links[3].mcm[2] + T67[6][4];
JA6[6][5]=links[3].mcm[1] + T67[6][5];
JA6[6][6]=T67[6][6];


h6[1]=JA6[1][3];
h6[2]=JA6[2][3];
h6[3]=JA6[3][3];
h6[4]=JA6[4][3];
h6[5]=JA6[5][3];
h6[6]=JA6[6][3];

d[6]=1.e-10 + h6[6];

T156[1][1]=-((h6[1]*h6[4])/d[6]) + JA6[1][1];
T156[1][2]=-((h6[1]*h6[5])/d[6]) + JA6[1][2];
T156[1][3]=-((h6[1]*h6[6])/d[6]) + JA6[1][3];
T156[1][4]=-(Power(h6[1],2)/d[6]) + JA6[1][4];
T156[1][5]=-((h6[1]*h6[2])/d[6]) + JA6[1][5];
T156[1][6]=-((h6[1]*h6[3])/d[6]) + JA6[1][6];

T156[2][1]=-((h6[2]*h6[4])/d[6]) + JA6[2][1];
T156[2][2]=-((h6[2]*h6[5])/d[6]) + JA6[2][2];
T156[2][3]=-((h6[2]*h6[6])/d[6]) + JA6[2][3];
T156[2][4]=-((h6[1]*h6[2])/d[6]) + JA6[2][4];
T156[2][5]=-(Power(h6[2],2)/d[6]) + JA6[2][5];
T156[2][6]=-((h6[2]*h6[3])/d[6]) + JA6[2][6];

T156[3][1]=-((h6[3]*h6[4])/d[6]) + JA6[3][1];
T156[3][2]=-((h6[3]*h6[5])/d[6]) + JA6[3][2];
T156[3][3]=-((h6[3]*h6[6])/d[6]) + JA6[3][3];
T156[3][4]=-((h6[1]*h6[3])/d[6]) + JA6[3][4];
T156[3][5]=-((h6[2]*h6[3])/d[6]) + JA6[3][5];
T156[3][6]=-(Power(h6[3],2)/d[6]) + JA6[3][6];

T156[4][1]=-(Power(h6[4],2)/d[6]) + JA6[4][1];
T156[4][2]=-((h6[4]*h6[5])/d[6]) + JA6[4][2];
T156[4][3]=-((h6[4]*h6[6])/d[6]) + JA6[4][3];
T156[4][4]=-((h6[1]*h6[4])/d[6]) + JA6[4][4];
T156[4][5]=-((h6[2]*h6[4])/d[6]) + JA6[4][5];
T156[4][6]=-((h6[3]*h6[4])/d[6]) + JA6[4][6];

T156[5][1]=-((h6[4]*h6[5])/d[6]) + JA6[5][1];
T156[5][2]=-(Power(h6[5],2)/d[6]) + JA6[5][2];
T156[5][3]=-((h6[5]*h6[6])/d[6]) + JA6[5][3];
T156[5][4]=-((h6[1]*h6[5])/d[6]) + JA6[5][4];
T156[5][5]=-((h6[2]*h6[5])/d[6]) + JA6[5][5];
T156[5][6]=-((h6[3]*h6[5])/d[6]) + JA6[5][6];

T156[6][1]=-((h6[4]*h6[6])/d[6]) + JA6[6][1];
T156[6][2]=-((h6[5]*h6[6])/d[6]) + JA6[6][2];
T156[6][3]=-(Power(h6[6],2)/d[6]) + JA6[6][3];
T156[6][4]=-((h6[1]*h6[6])/d[6]) + JA6[6][4];
T156[6][5]=-((h6[2]*h6[6])/d[6]) + JA6[6][5];
T156[6][6]=-((h6[3]*h6[6])/d[6]) + JA6[6][6];


T56[1][1]=S65[1][1]*(Si56[1][1]*T156[1][1] + Si56[1][2]*T156[2][1]) + S65[2][1]*(Si56[1][1]*T156[1][2] + Si56[1][2]*T156[2][2]);
T56[1][2]=-(Si56[1][1]*T156[1][3]) - Si56[1][2]*T156[2][3];
T56[1][3]=S65[1][3]*(Si56[1][1]*T156[1][1] + Si56[1][2]*T156[2][1]) + S65[2][3]*(Si56[1][1]*T156[1][2] + Si56[1][2]*T156[2][2]);
T56[1][4]=S65[1][1]*(Si56[1][1]*T156[1][4] + Si56[1][2]*T156[2][4]) + S65[2][1]*(Si56[1][1]*T156[1][5] + Si56[1][2]*T156[2][5]);
T56[1][5]=-(Si56[1][1]*T156[1][6]) - Si56[1][2]*T156[2][6];
T56[1][6]=S65[1][3]*(Si56[1][1]*T156[1][4] + Si56[1][2]*T156[2][4]) + S65[2][3]*(Si56[1][1]*T156[1][5] + Si56[1][2]*T156[2][5]);

T56[2][1]=-(S65[1][1]*T156[3][1]) - S65[2][1]*T156[3][2];
T56[2][2]=T156[3][3];
T56[2][3]=-(S65[1][3]*T156[3][1]) - S65[2][3]*T156[3][2];
T56[2][4]=-(S65[1][1]*T156[3][4]) - S65[2][1]*T156[3][5];
T56[2][5]=T156[3][6];
T56[2][6]=-(S65[1][3]*T156[3][4]) - S65[2][3]*T156[3][5];

T56[3][1]=S65[1][1]*(Si56[3][1]*T156[1][1] + Si56[3][2]*T156[2][1]) + S65[2][1]*(Si56[3][1]*T156[1][2] + Si56[3][2]*T156[2][2]);
T56[3][2]=-(Si56[3][1]*T156[1][3]) - Si56[3][2]*T156[2][3];
T56[3][3]=S65[1][3]*(Si56[3][1]*T156[1][1] + Si56[3][2]*T156[2][1]) + S65[2][3]*(Si56[3][1]*T156[1][2] + Si56[3][2]*T156[2][2]);
T56[3][4]=S65[1][1]*(Si56[3][1]*T156[1][4] + Si56[3][2]*T156[2][4]) + S65[2][1]*(Si56[3][1]*T156[1][5] + Si56[3][2]*T156[2][5]);
T56[3][5]=-(Si56[3][1]*T156[1][6]) - Si56[3][2]*T156[2][6];
T56[3][6]=S65[1][3]*(Si56[3][1]*T156[1][4] + Si56[3][2]*T156[2][4]) + S65[2][3]*(Si56[3][1]*T156[1][5] + Si56[3][2]*T156[2][5]);

T56[4][1]=S65[1][1]*(Si56[1][1]*T156[4][1] + Si56[1][2]*T156[5][1]) + S65[2][1]*(Si56[1][1]*T156[4][2] + Si56[1][2]*T156[5][2]);
T56[4][2]=-(Si56[1][1]*T156[4][3]) - Si56[1][2]*T156[5][3];
T56[4][3]=S65[1][3]*(Si56[1][1]*T156[4][1] + Si56[1][2]*T156[5][1]) + S65[2][3]*(Si56[1][1]*T156[4][2] + Si56[1][2]*T156[5][2]);
T56[4][4]=S65[1][1]*(Si56[1][1]*T156[4][4] + Si56[1][2]*T156[5][4]) + S65[2][1]*(Si56[1][1]*T156[4][5] + Si56[1][2]*T156[5][5]);
T56[4][5]=-(Si56[1][1]*T156[4][6]) - Si56[1][2]*T156[5][6];
T56[4][6]=S65[1][3]*(Si56[1][1]*T156[4][4] + Si56[1][2]*T156[5][4]) + S65[2][3]*(Si56[1][1]*T156[4][5] + Si56[1][2]*T156[5][5]);

T56[5][1]=-(S65[1][1]*T156[6][1]) - S65[2][1]*T156[6][2];
T56[5][2]=T156[6][3];
T56[5][3]=-(S65[1][3]*T156[6][1]) - S65[2][3]*T156[6][2];
T56[5][4]=-(S65[1][1]*T156[6][4]) - S65[2][1]*T156[6][5];
T56[5][5]=T156[6][6];
T56[5][6]=-(S65[1][3]*T156[6][4]) - S65[2][3]*T156[6][5];

T56[6][1]=S65[1][1]*(Si56[3][1]*T156[4][1] + Si56[3][2]*T156[5][1]) + S65[2][1]*(Si56[3][1]*T156[4][2] + Si56[3][2]*T156[5][2]);
T56[6][2]=-(Si56[3][1]*T156[4][3]) - Si56[3][2]*T156[5][3];
T56[6][3]=S65[1][3]*(Si56[3][1]*T156[4][1] + Si56[3][2]*T156[5][1]) + S65[2][3]*(Si56[3][1]*T156[4][2] + Si56[3][2]*T156[5][2]);
T56[6][4]=S65[1][1]*(Si56[3][1]*T156[4][4] + Si56[3][2]*T156[5][4]) + S65[2][1]*(Si56[3][1]*T156[4][5] + Si56[3][2]*T156[5][5]);
T56[6][5]=-(Si56[3][1]*T156[4][6]) - Si56[3][2]*T156[5][6];
T56[6][6]=S65[1][3]*(Si56[3][1]*T156[4][4] + Si56[3][2]*T156[5][4]) + S65[2][3]*(Si56[3][1]*T156[4][5] + Si56[3][2]*T156[5][5]);



}


void
hoap3_ForDynArtfunc27(void)
      {
JA5[1][1]=T56[1][1];
JA5[1][2]=links[2].mcm[3] + T56[1][2];
JA5[1][3]=-links[2].mcm[2] + T56[1][3];
JA5[1][4]=links[2].m + T56[1][4];
JA5[1][5]=T56[1][5];
JA5[1][6]=T56[1][6];

JA5[2][1]=-links[2].mcm[3] + T56[2][1];
JA5[2][2]=T56[2][2];
JA5[2][3]=links[2].mcm[1] + T56[2][3];
JA5[2][4]=T56[2][4];
JA5[2][5]=links[2].m + T56[2][5];
JA5[2][6]=T56[2][6];

JA5[3][1]=links[2].mcm[2] + T56[3][1];
JA5[3][2]=-links[2].mcm[1] + T56[3][2];
JA5[3][3]=T56[3][3];
JA5[3][4]=T56[3][4];
JA5[3][5]=T56[3][5];
JA5[3][6]=links[2].m + T56[3][6];

JA5[4][1]=links[2].inertia[1][1] + T56[4][1];
JA5[4][2]=links[2].inertia[1][2] + T56[4][2];
JA5[4][3]=links[2].inertia[1][3] + T56[4][3];
JA5[4][4]=T56[4][4];
JA5[4][5]=-links[2].mcm[3] + T56[4][5];
JA5[4][6]=links[2].mcm[2] + T56[4][6];

JA5[5][1]=links[2].inertia[1][2] + T56[5][1];
JA5[5][2]=links[2].inertia[2][2] + T56[5][2];
JA5[5][3]=links[2].inertia[2][3] + T56[5][3];
JA5[5][4]=links[2].mcm[3] + T56[5][4];
JA5[5][5]=T56[5][5];
JA5[5][6]=-links[2].mcm[1] + T56[5][6];

JA5[6][1]=links[2].inertia[1][3] + T56[6][1];
JA5[6][2]=links[2].inertia[2][3] + T56[6][2];
JA5[6][3]=links[2].inertia[3][3] + T56[6][3];
JA5[6][4]=-links[2].mcm[2] + T56[6][4];
JA5[6][5]=links[2].mcm[1] + T56[6][5];
JA5[6][6]=T56[6][6];


h5[1]=JA5[1][3];
h5[2]=JA5[2][3];
h5[3]=JA5[3][3];
h5[4]=JA5[4][3];
h5[5]=JA5[5][3];
h5[6]=JA5[6][3];

d[5]=1.e-10 + h5[6];

T145[1][1]=-((h5[1]*h5[4])/d[5]) + JA5[1][1];
T145[1][2]=-((h5[1]*h5[5])/d[5]) + JA5[1][2];
T145[1][3]=-((h5[1]*h5[6])/d[5]) + JA5[1][3];
T145[1][4]=-(Power(h5[1],2)/d[5]) + JA5[1][4];
T145[1][5]=-((h5[1]*h5[2])/d[5]) + JA5[1][5];
T145[1][6]=-((h5[1]*h5[3])/d[5]) + JA5[1][6];

T145[2][1]=-((h5[2]*h5[4])/d[5]) + JA5[2][1];
T145[2][2]=-((h5[2]*h5[5])/d[5]) + JA5[2][2];
T145[2][3]=-((h5[2]*h5[6])/d[5]) + JA5[2][3];
T145[2][4]=-((h5[1]*h5[2])/d[5]) + JA5[2][4];
T145[2][5]=-(Power(h5[2],2)/d[5]) + JA5[2][5];
T145[2][6]=-((h5[2]*h5[3])/d[5]) + JA5[2][6];

T145[3][1]=-((h5[3]*h5[4])/d[5]) + JA5[3][1];
T145[3][2]=-((h5[3]*h5[5])/d[5]) + JA5[3][2];
T145[3][3]=-((h5[3]*h5[6])/d[5]) + JA5[3][3];
T145[3][4]=-((h5[1]*h5[3])/d[5]) + JA5[3][4];
T145[3][5]=-((h5[2]*h5[3])/d[5]) + JA5[3][5];
T145[3][6]=-(Power(h5[3],2)/d[5]) + JA5[3][6];

T145[4][1]=-(Power(h5[4],2)/d[5]) + JA5[4][1];
T145[4][2]=-((h5[4]*h5[5])/d[5]) + JA5[4][2];
T145[4][3]=-((h5[4]*h5[6])/d[5]) + JA5[4][3];
T145[4][4]=-((h5[1]*h5[4])/d[5]) + JA5[4][4];
T145[4][5]=-((h5[2]*h5[4])/d[5]) + JA5[4][5];
T145[4][6]=-((h5[3]*h5[4])/d[5]) + JA5[4][6];

T145[5][1]=-((h5[4]*h5[5])/d[5]) + JA5[5][1];
T145[5][2]=-(Power(h5[5],2)/d[5]) + JA5[5][2];
T145[5][3]=-((h5[5]*h5[6])/d[5]) + JA5[5][3];
T145[5][4]=-((h5[1]*h5[5])/d[5]) + JA5[5][4];
T145[5][5]=-((h5[2]*h5[5])/d[5]) + JA5[5][5];
T145[5][6]=-((h5[3]*h5[5])/d[5]) + JA5[5][6];

T145[6][1]=-((h5[4]*h5[6])/d[5]) + JA5[6][1];
T145[6][2]=-((h5[5]*h5[6])/d[5]) + JA5[6][2];
T145[6][3]=-(Power(h5[6],2)/d[5]) + JA5[6][3];
T145[6][4]=-((h5[1]*h5[6])/d[5]) + JA5[6][4];
T145[6][5]=-((h5[2]*h5[6])/d[5]) + JA5[6][5];
T145[6][6]=-((h5[3]*h5[6])/d[5]) + JA5[6][6];


T45[1][1]=S54[1][1]*(Si45[1][1]*T145[1][1] + Si45[1][2]*T145[2][1]) + S54[2][1]*(Si45[1][1]*T145[1][2] + Si45[1][2]*T145[2][2]);
T45[1][2]=-(Si45[1][1]*T145[1][3]) - Si45[1][2]*T145[2][3];
T45[1][3]=S54[1][3]*(Si45[1][1]*T145[1][1] + Si45[1][2]*T145[2][1]) + S54[2][3]*(Si45[1][1]*T145[1][2] + Si45[1][2]*T145[2][2]);
T45[1][4]=S54[1][1]*(Si45[1][1]*T145[1][4] + Si45[1][2]*T145[2][4]) + S54[2][1]*(Si45[1][1]*T145[1][5] + Si45[1][2]*T145[2][5]);
T45[1][5]=-(Si45[1][1]*T145[1][6]) - Si45[1][2]*T145[2][6];
T45[1][6]=S54[1][3]*(Si45[1][1]*T145[1][4] + Si45[1][2]*T145[2][4]) + S54[2][3]*(Si45[1][1]*T145[1][5] + Si45[1][2]*T145[2][5]);

T45[2][1]=-(S54[1][1]*T145[3][1]) - S54[2][1]*T145[3][2];
T45[2][2]=T145[3][3];
T45[2][3]=-(S54[1][3]*T145[3][1]) - S54[2][3]*T145[3][2];
T45[2][4]=-(S54[1][1]*T145[3][4]) - S54[2][1]*T145[3][5];
T45[2][5]=T145[3][6];
T45[2][6]=-(S54[1][3]*T145[3][4]) - S54[2][3]*T145[3][5];

T45[3][1]=S54[1][1]*(Si45[3][1]*T145[1][1] + Si45[3][2]*T145[2][1]) + S54[2][1]*(Si45[3][1]*T145[1][2] + Si45[3][2]*T145[2][2]);
T45[3][2]=-(Si45[3][1]*T145[1][3]) - Si45[3][2]*T145[2][3];
T45[3][3]=S54[1][3]*(Si45[3][1]*T145[1][1] + Si45[3][2]*T145[2][1]) + S54[2][3]*(Si45[3][1]*T145[1][2] + Si45[3][2]*T145[2][2]);
T45[3][4]=S54[1][1]*(Si45[3][1]*T145[1][4] + Si45[3][2]*T145[2][4]) + S54[2][1]*(Si45[3][1]*T145[1][5] + Si45[3][2]*T145[2][5]);
T45[3][5]=-(Si45[3][1]*T145[1][6]) - Si45[3][2]*T145[2][6];
T45[3][6]=S54[1][3]*(Si45[3][1]*T145[1][4] + Si45[3][2]*T145[2][4]) + S54[2][3]*(Si45[3][1]*T145[1][5] + Si45[3][2]*T145[2][5]);

T45[4][1]=S54[1][1]*(Si45[1][1]*T145[4][1] + Si45[1][2]*T145[5][1]) + S54[2][1]*(Si45[1][1]*T145[4][2] + Si45[1][2]*T145[5][2]);
T45[4][2]=-(Si45[1][1]*T145[4][3]) - Si45[1][2]*T145[5][3];
T45[4][3]=S54[1][3]*(Si45[1][1]*T145[4][1] + Si45[1][2]*T145[5][1]) + S54[2][3]*(Si45[1][1]*T145[4][2] + Si45[1][2]*T145[5][2]);
T45[4][4]=S54[1][1]*(Si45[1][1]*T145[4][4] + Si45[1][2]*T145[5][4]) + S54[2][1]*(Si45[1][1]*T145[4][5] + Si45[1][2]*T145[5][5]);
T45[4][5]=-(Si45[1][1]*T145[4][6]) - Si45[1][2]*T145[5][6];
T45[4][6]=S54[1][3]*(Si45[1][1]*T145[4][4] + Si45[1][2]*T145[5][4]) + S54[2][3]*(Si45[1][1]*T145[4][5] + Si45[1][2]*T145[5][5]);

T45[5][1]=-(S54[1][1]*T145[6][1]) - S54[2][1]*T145[6][2];
T45[5][2]=T145[6][3];
T45[5][3]=-(S54[1][3]*T145[6][1]) - S54[2][3]*T145[6][2];
T45[5][4]=-(S54[1][1]*T145[6][4]) - S54[2][1]*T145[6][5];
T45[5][5]=T145[6][6];
T45[5][6]=-(S54[1][3]*T145[6][4]) - S54[2][3]*T145[6][5];

T45[6][1]=S54[1][1]*(Si45[3][1]*T145[4][1] + Si45[3][2]*T145[5][1]) + S54[2][1]*(Si45[3][1]*T145[4][2] + Si45[3][2]*T145[5][2]);
T45[6][2]=-(Si45[3][1]*T145[4][3]) - Si45[3][2]*T145[5][3];
T45[6][3]=S54[1][3]*(Si45[3][1]*T145[4][1] + Si45[3][2]*T145[5][1]) + S54[2][3]*(Si45[3][1]*T145[4][2] + Si45[3][2]*T145[5][2]);
T45[6][4]=S54[1][1]*(Si45[3][1]*T145[4][4] + Si45[3][2]*T145[5][4]) + S54[2][1]*(Si45[3][1]*T145[4][5] + Si45[3][2]*T145[5][5]);
T45[6][5]=-(Si45[3][1]*T145[4][6]) - Si45[3][2]*T145[5][6];
T45[6][6]=S54[1][3]*(Si45[3][1]*T145[4][4] + Si45[3][2]*T145[5][4]) + S54[2][3]*(Si45[3][1]*T145[4][5] + Si45[3][2]*T145[5][5]);



}


void
hoap3_ForDynArtfunc28(void)
      {
JA4[1][1]=T45[1][1];
JA4[1][2]=links[1].mcm[3] + T45[1][2];
JA4[1][3]=-links[1].mcm[2] + T45[1][3];
JA4[1][4]=links[1].m + T45[1][4];
JA4[1][5]=T45[1][5];
JA4[1][6]=T45[1][6];

JA4[2][1]=-links[1].mcm[3] + T45[2][1];
JA4[2][2]=T45[2][2];
JA4[2][3]=links[1].mcm[1] + T45[2][3];
JA4[2][4]=T45[2][4];
JA4[2][5]=links[1].m + T45[2][5];
JA4[2][6]=T45[2][6];

JA4[3][1]=links[1].mcm[2] + T45[3][1];
JA4[3][2]=-links[1].mcm[1] + T45[3][2];
JA4[3][3]=T45[3][3];
JA4[3][4]=T45[3][4];
JA4[3][5]=T45[3][5];
JA4[3][6]=links[1].m + T45[3][6];

JA4[4][1]=links[1].inertia[1][1] + T45[4][1];
JA4[4][2]=links[1].inertia[1][2] + T45[4][2];
JA4[4][3]=links[1].inertia[1][3] + T45[4][3];
JA4[4][4]=T45[4][4];
JA4[4][5]=-links[1].mcm[3] + T45[4][5];
JA4[4][6]=links[1].mcm[2] + T45[4][6];

JA4[5][1]=links[1].inertia[1][2] + T45[5][1];
JA4[5][2]=links[1].inertia[2][2] + T45[5][2];
JA4[5][3]=links[1].inertia[2][3] + T45[5][3];
JA4[5][4]=links[1].mcm[3] + T45[5][4];
JA4[5][5]=T45[5][5];
JA4[5][6]=-links[1].mcm[1] + T45[5][6];

JA4[6][1]=links[1].inertia[1][3] + T45[6][1];
JA4[6][2]=links[1].inertia[2][3] + T45[6][2];
JA4[6][3]=links[1].inertia[3][3] + T45[6][3];
JA4[6][4]=-links[1].mcm[2] + T45[6][4];
JA4[6][5]=links[1].mcm[1] + T45[6][5];
JA4[6][6]=T45[6][6];


h4[1]=JA4[1][3];
h4[2]=JA4[2][3];
h4[3]=JA4[3][3];
h4[4]=JA4[4][3];
h4[5]=JA4[5][3];
h4[6]=JA4[6][3];

d[4]=1.e-10 + h4[6];

T134[1][1]=-((h4[1]*h4[4])/d[4]) + JA4[1][1];
T134[1][2]=-((h4[1]*h4[5])/d[4]) + JA4[1][2];
T134[1][3]=-((h4[1]*h4[6])/d[4]) + JA4[1][3];
T134[1][4]=-(Power(h4[1],2)/d[4]) + JA4[1][4];
T134[1][5]=-((h4[1]*h4[2])/d[4]) + JA4[1][5];
T134[1][6]=-((h4[1]*h4[3])/d[4]) + JA4[1][6];

T134[2][1]=-((h4[2]*h4[4])/d[4]) + JA4[2][1];
T134[2][2]=-((h4[2]*h4[5])/d[4]) + JA4[2][2];
T134[2][3]=-((h4[2]*h4[6])/d[4]) + JA4[2][3];
T134[2][4]=-((h4[1]*h4[2])/d[4]) + JA4[2][4];
T134[2][5]=-(Power(h4[2],2)/d[4]) + JA4[2][5];
T134[2][6]=-((h4[2]*h4[3])/d[4]) + JA4[2][6];

T134[3][1]=-((h4[3]*h4[4])/d[4]) + JA4[3][1];
T134[3][2]=-((h4[3]*h4[5])/d[4]) + JA4[3][2];
T134[3][3]=-((h4[3]*h4[6])/d[4]) + JA4[3][3];
T134[3][4]=-((h4[1]*h4[3])/d[4]) + JA4[3][4];
T134[3][5]=-((h4[2]*h4[3])/d[4]) + JA4[3][5];
T134[3][6]=-(Power(h4[3],2)/d[4]) + JA4[3][6];

T134[4][1]=-(Power(h4[4],2)/d[4]) + JA4[4][1];
T134[4][2]=-((h4[4]*h4[5])/d[4]) + JA4[4][2];
T134[4][3]=-((h4[4]*h4[6])/d[4]) + JA4[4][3];
T134[4][4]=-((h4[1]*h4[4])/d[4]) + JA4[4][4];
T134[4][5]=-((h4[2]*h4[4])/d[4]) + JA4[4][5];
T134[4][6]=-((h4[3]*h4[4])/d[4]) + JA4[4][6];

T134[5][1]=-((h4[4]*h4[5])/d[4]) + JA4[5][1];
T134[5][2]=-(Power(h4[5],2)/d[4]) + JA4[5][2];
T134[5][3]=-((h4[5]*h4[6])/d[4]) + JA4[5][3];
T134[5][4]=-((h4[1]*h4[5])/d[4]) + JA4[5][4];
T134[5][5]=-((h4[2]*h4[5])/d[4]) + JA4[5][5];
T134[5][6]=-((h4[3]*h4[5])/d[4]) + JA4[5][6];

T134[6][1]=-((h4[4]*h4[6])/d[4]) + JA4[6][1];
T134[6][2]=-((h4[5]*h4[6])/d[4]) + JA4[6][2];
T134[6][3]=-(Power(h4[6],2)/d[4]) + JA4[6][3];
T134[6][4]=-((h4[1]*h4[6])/d[4]) + JA4[6][4];
T134[6][5]=-((h4[2]*h4[6])/d[4]) + JA4[6][5];
T134[6][6]=-((h4[3]*h4[6])/d[4]) + JA4[6][6];


T34[1][1]=S43[1][1]*(Si34[1][1]*T134[1][1] + Si34[1][2]*T134[2][1]) + S43[2][1]*(Si34[1][1]*T134[1][2] + Si34[1][2]*T134[2][2]) - WAISTLINK1*S43[1][3]*(Si34[1][1]*T134[1][4] + Si34[1][2]*T134[2][4]) - WAISTLINK1*S43[2][3]*(Si34[1][1]*T134[1][5] + Si34[1][2]*T134[2][5]) - LEGLINK1*(Si34[1][1]*T134[1][6] + Si34[1][2]*T134[2][6]);
T34[1][2]=Si34[1][1]*T134[1][3] + Si34[1][2]*T134[2][3] + (LEGLINK1*S43[1][1] + WAISTLINK2*S43[1][3])*(Si34[1][1]*T134[1][4] + Si34[1][2]*T134[2][4]) + (LEGLINK1*S43[2][1] + WAISTLINK2*S43[2][3])*(Si34[1][1]*T134[1][5] + Si34[1][2]*T134[2][5]);
T34[1][3]=S43[1][3]*(Si34[1][1]*T134[1][1] + Si34[1][2]*T134[2][1]) + S43[2][3]*(Si34[1][1]*T134[1][2] + Si34[1][2]*T134[2][2]) + WAISTLINK1*S43[1][1]*(Si34[1][1]*T134[1][4] + Si34[1][2]*T134[2][4]) + WAISTLINK1*S43[2][1]*(Si34[1][1]*T134[1][5] + Si34[1][2]*T134[2][5]) - WAISTLINK2*(Si34[1][1]*T134[1][6] + Si34[1][2]*T134[2][6]);
T34[1][4]=S43[1][1]*(Si34[1][1]*T134[1][4] + Si34[1][2]*T134[2][4]) + S43[2][1]*(Si34[1][1]*T134[1][5] + Si34[1][2]*T134[2][5]);
T34[1][5]=Si34[1][1]*T134[1][6] + Si34[1][2]*T134[2][6];
T34[1][6]=S43[1][3]*(Si34[1][1]*T134[1][4] + Si34[1][2]*T134[2][4]) + S43[2][3]*(Si34[1][1]*T134[1][5] + Si34[1][2]*T134[2][5]);

T34[2][1]=S43[1][1]*T134[3][1] + S43[2][1]*T134[3][2] - WAISTLINK1*S43[1][3]*T134[3][4] - WAISTLINK1*S43[2][3]*T134[3][5] - LEGLINK1*T134[3][6];
T34[2][2]=T134[3][3] + (LEGLINK1*S43[1][1] + WAISTLINK2*S43[1][3])*T134[3][4] + (LEGLINK1*S43[2][1] + WAISTLINK2*S43[2][3])*T134[3][5];
T34[2][3]=S43[1][3]*T134[3][1] + S43[2][3]*T134[3][2] + WAISTLINK1*S43[1][1]*T134[3][4] + WAISTLINK1*S43[2][1]*T134[3][5] - WAISTLINK2*T134[3][6];
T34[2][4]=S43[1][1]*T134[3][4] + S43[2][1]*T134[3][5];
T34[2][5]=T134[3][6];
T34[2][6]=S43[1][3]*T134[3][4] + S43[2][3]*T134[3][5];

T34[3][1]=S43[1][1]*(Si34[3][1]*T134[1][1] + Si34[3][2]*T134[2][1]) + S43[2][1]*(Si34[3][1]*T134[1][2] + Si34[3][2]*T134[2][2]) - WAISTLINK1*S43[1][3]*(Si34[3][1]*T134[1][4] + Si34[3][2]*T134[2][4]) - WAISTLINK1*S43[2][3]*(Si34[3][1]*T134[1][5] + Si34[3][2]*T134[2][5]) - LEGLINK1*(Si34[3][1]*T134[1][6] + Si34[3][2]*T134[2][6]);
T34[3][2]=Si34[3][1]*T134[1][3] + Si34[3][2]*T134[2][3] + (LEGLINK1*S43[1][1] + WAISTLINK2*S43[1][3])*(Si34[3][1]*T134[1][4] + Si34[3][2]*T134[2][4]) + (LEGLINK1*S43[2][1] + WAISTLINK2*S43[2][3])*(Si34[3][1]*T134[1][5] + Si34[3][2]*T134[2][5]);
T34[3][3]=S43[1][3]*(Si34[3][1]*T134[1][1] + Si34[3][2]*T134[2][1]) + S43[2][3]*(Si34[3][1]*T134[1][2] + Si34[3][2]*T134[2][2]) + WAISTLINK1*S43[1][1]*(Si34[3][1]*T134[1][4] + Si34[3][2]*T134[2][4]) + WAISTLINK1*S43[2][1]*(Si34[3][1]*T134[1][5] + Si34[3][2]*T134[2][5]) - WAISTLINK2*(Si34[3][1]*T134[1][6] + Si34[3][2]*T134[2][6]);
T34[3][4]=S43[1][1]*(Si34[3][1]*T134[1][4] + Si34[3][2]*T134[2][4]) + S43[2][1]*(Si34[3][1]*T134[1][5] + Si34[3][2]*T134[2][5]);
T34[3][5]=Si34[3][1]*T134[1][6] + Si34[3][2]*T134[2][6];
T34[3][6]=S43[1][3]*(Si34[3][1]*T134[1][4] + Si34[3][2]*T134[2][4]) + S43[2][3]*(Si34[3][1]*T134[1][5] + Si34[3][2]*T134[2][5]);

T34[4][1]=S43[1][1]*(-(WAISTLINK1*Si34[3][1]*T134[1][1]) - WAISTLINK1*Si34[3][2]*T134[2][1] - LEGLINK1*T134[3][1] + Si34[1][1]*T134[4][1] + Si34[1][2]*T134[5][1]) + S43[2][1]*(-(WAISTLINK1*Si34[3][1]*T134[1][2]) - WAISTLINK1*Si34[3][2]*T134[2][2] - LEGLINK1*T134[3][2] + Si34[1][1]*T134[4][2] + Si34[1][2]*T134[5][2]) - WAISTLINK1*S43[1][3]*(-(WAISTLINK1*Si34[3][1]*T134[1][4]) - WAISTLINK1*Si34[3][2]*T134[2][4] - LEGLINK1*T134[3][4] + Si34[1][1]*T134[4][4] + Si34[1][2]*T134[5][4]) - WAISTLINK1*S43[2][3]*(-(WAISTLINK1*Si34[3][1]*T134[1][5]) - WAISTLINK1*Si34[3][2]*T134[2][5] - LEGLINK1*T134[3][5] + Si34[1][1]*T134[4][5] + Si34[1][2]*T134[5][5]) - LEGLINK1*(-(WAISTLINK1*Si34[3][1]*T134[1][6]) - WAISTLINK1*Si34[3][2]*T134[2][6] - LEGLINK1*T134[3][6] + Si34[1][1]*T134[4][6] + Si34[1][2]*T134[5][6]);
T34[4][2]=-(WAISTLINK1*Si34[3][1]*T134[1][3]) - WAISTLINK1*Si34[3][2]*T134[2][3] - LEGLINK1*T134[3][3] + Si34[1][1]*T134[4][3] + Si34[1][2]*T134[5][3] + (LEGLINK1*S43[1][1] + WAISTLINK2*S43[1][3])*(-(WAISTLINK1*Si34[3][1]*T134[1][4]) - WAISTLINK1*Si34[3][2]*T134[2][4] - LEGLINK1*T134[3][4] + Si34[1][1]*T134[4][4] + Si34[1][2]*T134[5][4]) + (LEGLINK1*S43[2][1] + WAISTLINK2*S43[2][3])*(-(WAISTLINK1*Si34[3][1]*T134[1][5]) - WAISTLINK1*Si34[3][2]*T134[2][5] - LEGLINK1*T134[3][5] + Si34[1][1]*T134[4][5] + Si34[1][2]*T134[5][5]);
T34[4][3]=S43[1][3]*(-(WAISTLINK1*Si34[3][1]*T134[1][1]) - WAISTLINK1*Si34[3][2]*T134[2][1] - LEGLINK1*T134[3][1] + Si34[1][1]*T134[4][1] + Si34[1][2]*T134[5][1]) + S43[2][3]*(-(WAISTLINK1*Si34[3][1]*T134[1][2]) - WAISTLINK1*Si34[3][2]*T134[2][2] - LEGLINK1*T134[3][2] + Si34[1][1]*T134[4][2] + Si34[1][2]*T134[5][2]) + WAISTLINK1*S43[1][1]*(-(WAISTLINK1*Si34[3][1]*T134[1][4]) - WAISTLINK1*Si34[3][2]*T134[2][4] - LEGLINK1*T134[3][4] + Si34[1][1]*T134[4][4] + Si34[1][2]*T134[5][4]) + WAISTLINK1*S43[2][1]*(-(WAISTLINK1*Si34[3][1]*T134[1][5]) - WAISTLINK1*Si34[3][2]*T134[2][5] - LEGLINK1*T134[3][5] + Si34[1][1]*T134[4][5] + Si34[1][2]*T134[5][5]) - WAISTLINK2*(-(WAISTLINK1*Si34[3][1]*T134[1][6]) - WAISTLINK1*Si34[3][2]*T134[2][6] - LEGLINK1*T134[3][6] + Si34[1][1]*T134[4][6] + Si34[1][2]*T134[5][6]);
T34[4][4]=S43[1][1]*(-(WAISTLINK1*Si34[3][1]*T134[1][4]) - WAISTLINK1*Si34[3][2]*T134[2][4] - LEGLINK1*T134[3][4] + Si34[1][1]*T134[4][4] + Si34[1][2]*T134[5][4]) + S43[2][1]*(-(WAISTLINK1*Si34[3][1]*T134[1][5]) - WAISTLINK1*Si34[3][2]*T134[2][5] - LEGLINK1*T134[3][5] + Si34[1][1]*T134[4][5] + Si34[1][2]*T134[5][5]);
T34[4][5]=-(WAISTLINK1*Si34[3][1]*T134[1][6]) - WAISTLINK1*Si34[3][2]*T134[2][6] - LEGLINK1*T134[3][6] + Si34[1][1]*T134[4][6] + Si34[1][2]*T134[5][6];
T34[4][6]=S43[1][3]*(-(WAISTLINK1*Si34[3][1]*T134[1][4]) - WAISTLINK1*Si34[3][2]*T134[2][4] - LEGLINK1*T134[3][4] + Si34[1][1]*T134[4][4] + Si34[1][2]*T134[5][4]) + S43[2][3]*(-(WAISTLINK1*Si34[3][1]*T134[1][5]) - WAISTLINK1*Si34[3][2]*T134[2][5] - LEGLINK1*T134[3][5] + Si34[1][1]*T134[4][5] + Si34[1][2]*T134[5][5]);

T34[5][1]=S43[1][1]*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][1] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][1] + T134[6][1]) + S43[2][1]*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][2] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][2] + T134[6][2]) - WAISTLINK1*S43[1][3]*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][4] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][4] + T134[6][4]) - WAISTLINK1*S43[2][3]*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][5] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][5] + T134[6][5]) - LEGLINK1*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][6] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][6] + T134[6][6]);
T34[5][2]=(LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][3] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][3] + T134[6][3] + (LEGLINK1*S43[1][1] + WAISTLINK2*S43[1][3])*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][4] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][4] + T134[6][4]) + (LEGLINK1*S43[2][1] + WAISTLINK2*S43[2][3])*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][5] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][5] + T134[6][5]);
T34[5][3]=S43[1][3]*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][1] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][1] + T134[6][1]) + S43[2][3]*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][2] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][2] + T134[6][2]) + WAISTLINK1*S43[1][1]*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][4] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][4] + T134[6][4]) + WAISTLINK1*S43[2][1]*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][5] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][5] + T134[6][5]) - WAISTLINK2*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][6] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][6] + T134[6][6]);
T34[5][4]=S43[1][1]*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][4] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][4] + T134[6][4]) + S43[2][1]*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][5] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][5] + T134[6][5]);
T34[5][5]=(LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][6] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][6] + T134[6][6];
T34[5][6]=S43[1][3]*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][4] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][4] + T134[6][4]) + S43[2][3]*((LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1])*T134[1][5] + (LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2])*T134[2][5] + T134[6][5]);

T34[6][1]=S43[1][1]*(WAISTLINK1*Si34[1][1]*T134[1][1] + WAISTLINK1*Si34[1][2]*T134[2][1] - WAISTLINK2*T134[3][1] + Si34[3][1]*T134[4][1] + Si34[3][2]*T134[5][1]) + S43[2][1]*(WAISTLINK1*Si34[1][1]*T134[1][2] + WAISTLINK1*Si34[1][2]*T134[2][2] - WAISTLINK2*T134[3][2] + Si34[3][1]*T134[4][2] + Si34[3][2]*T134[5][2]) - WAISTLINK1*S43[1][3]*(WAISTLINK1*Si34[1][1]*T134[1][4] + WAISTLINK1*Si34[1][2]*T134[2][4] - WAISTLINK2*T134[3][4] + Si34[3][1]*T134[4][4] + Si34[3][2]*T134[5][4]) - WAISTLINK1*S43[2][3]*(WAISTLINK1*Si34[1][1]*T134[1][5] + WAISTLINK1*Si34[1][2]*T134[2][5] - WAISTLINK2*T134[3][5] + Si34[3][1]*T134[4][5] + Si34[3][2]*T134[5][5]) - LEGLINK1*(WAISTLINK1*Si34[1][1]*T134[1][6] + WAISTLINK1*Si34[1][2]*T134[2][6] - WAISTLINK2*T134[3][6] + Si34[3][1]*T134[4][6] + Si34[3][2]*T134[5][6]);
T34[6][2]=WAISTLINK1*Si34[1][1]*T134[1][3] + WAISTLINK1*Si34[1][2]*T134[2][3] - WAISTLINK2*T134[3][3] + Si34[3][1]*T134[4][3] + Si34[3][2]*T134[5][3] + (LEGLINK1*S43[1][1] + WAISTLINK2*S43[1][3])*(WAISTLINK1*Si34[1][1]*T134[1][4] + WAISTLINK1*Si34[1][2]*T134[2][4] - WAISTLINK2*T134[3][4] + Si34[3][1]*T134[4][4] + Si34[3][2]*T134[5][4]) + (LEGLINK1*S43[2][1] + WAISTLINK2*S43[2][3])*(WAISTLINK1*Si34[1][1]*T134[1][5] + WAISTLINK1*Si34[1][2]*T134[2][5] - WAISTLINK2*T134[3][5] + Si34[3][1]*T134[4][5] + Si34[3][2]*T134[5][5]);
T34[6][3]=S43[1][3]*(WAISTLINK1*Si34[1][1]*T134[1][1] + WAISTLINK1*Si34[1][2]*T134[2][1] - WAISTLINK2*T134[3][1] + Si34[3][1]*T134[4][1] + Si34[3][2]*T134[5][1]) + S43[2][3]*(WAISTLINK1*Si34[1][1]*T134[1][2] + WAISTLINK1*Si34[1][2]*T134[2][2] - WAISTLINK2*T134[3][2] + Si34[3][1]*T134[4][2] + Si34[3][2]*T134[5][2]) + WAISTLINK1*S43[1][1]*(WAISTLINK1*Si34[1][1]*T134[1][4] + WAISTLINK1*Si34[1][2]*T134[2][4] - WAISTLINK2*T134[3][4] + Si34[3][1]*T134[4][4] + Si34[3][2]*T134[5][4]) + WAISTLINK1*S43[2][1]*(WAISTLINK1*Si34[1][1]*T134[1][5] + WAISTLINK1*Si34[1][2]*T134[2][5] - WAISTLINK2*T134[3][5] + Si34[3][1]*T134[4][5] + Si34[3][2]*T134[5][5]) - WAISTLINK2*(WAISTLINK1*Si34[1][1]*T134[1][6] + WAISTLINK1*Si34[1][2]*T134[2][6] - WAISTLINK2*T134[3][6] + Si34[3][1]*T134[4][6] + Si34[3][2]*T134[5][6]);
T34[6][4]=S43[1][1]*(WAISTLINK1*Si34[1][1]*T134[1][4] + WAISTLINK1*Si34[1][2]*T134[2][4] - WAISTLINK2*T134[3][4] + Si34[3][1]*T134[4][4] + Si34[3][2]*T134[5][4]) + S43[2][1]*(WAISTLINK1*Si34[1][1]*T134[1][5] + WAISTLINK1*Si34[1][2]*T134[2][5] - WAISTLINK2*T134[3][5] + Si34[3][1]*T134[4][5] + Si34[3][2]*T134[5][5]);
T34[6][5]=WAISTLINK1*Si34[1][1]*T134[1][6] + WAISTLINK1*Si34[1][2]*T134[2][6] - WAISTLINK2*T134[3][6] + Si34[3][1]*T134[4][6] + Si34[3][2]*T134[5][6];
T34[6][6]=S43[1][3]*(WAISTLINK1*Si34[1][1]*T134[1][4] + WAISTLINK1*Si34[1][2]*T134[2][4] - WAISTLINK2*T134[3][4] + Si34[3][1]*T134[4][4] + Si34[3][2]*T134[5][4]) + S43[2][3]*(WAISTLINK1*Si34[1][1]*T134[1][5] + WAISTLINK1*Si34[1][2]*T134[2][5] - WAISTLINK2*T134[3][5] + Si34[3][1]*T134[4][5] + Si34[3][2]*T134[5][5]);



}


void
hoap3_ForDynArtfunc29(void)
      {
JA3[1][1]=T315[1][1] + T34[1][1];
JA3[1][2]=links[13].mcm[3] + T315[1][2] + T34[1][2];
JA3[1][3]=-links[13].mcm[2] + T315[1][3] + T34[1][3];
JA3[1][4]=links[13].m + T315[1][4] + T34[1][4];
JA3[1][5]=T315[1][5] + T34[1][5];
JA3[1][6]=T315[1][6] + T34[1][6];

JA3[2][1]=-links[13].mcm[3] + T315[2][1] + T34[2][1];
JA3[2][2]=T315[2][2] + T34[2][2];
JA3[2][3]=links[13].mcm[1] + T315[2][3] + T34[2][3];
JA3[2][4]=T315[2][4] + T34[2][4];
JA3[2][5]=links[13].m + T315[2][5] + T34[2][5];
JA3[2][6]=T315[2][6] + T34[2][6];

JA3[3][1]=links[13].mcm[2] + T315[3][1] + T34[3][1];
JA3[3][2]=-links[13].mcm[1] + T315[3][2] + T34[3][2];
JA3[3][3]=T315[3][3] + T34[3][3];
JA3[3][4]=T315[3][4] + T34[3][4];
JA3[3][5]=T315[3][5] + T34[3][5];
JA3[3][6]=links[13].m + T315[3][6] + T34[3][6];

JA3[4][1]=links[13].inertia[1][1] + T315[4][1] + T34[4][1];
JA3[4][2]=links[13].inertia[1][2] + T315[4][2] + T34[4][2];
JA3[4][3]=links[13].inertia[1][3] + T315[4][3] + T34[4][3];
JA3[4][4]=T315[4][4] + T34[4][4];
JA3[4][5]=-links[13].mcm[3] + T315[4][5] + T34[4][5];
JA3[4][6]=links[13].mcm[2] + T315[4][6] + T34[4][6];

JA3[5][1]=links[13].inertia[1][2] + T315[5][1] + T34[5][1];
JA3[5][2]=links[13].inertia[2][2] + T315[5][2] + T34[5][2];
JA3[5][3]=links[13].inertia[2][3] + T315[5][3] + T34[5][3];
JA3[5][4]=links[13].mcm[3] + T315[5][4] + T34[5][4];
JA3[5][5]=T315[5][5] + T34[5][5];
JA3[5][6]=-links[13].mcm[1] + T315[5][6] + T34[5][6];

JA3[6][1]=links[13].inertia[1][3] + T315[6][1] + T34[6][1];
JA3[6][2]=links[13].inertia[2][3] + T315[6][2] + T34[6][2];
JA3[6][3]=links[13].inertia[3][3] + T315[6][3] + T34[6][3];
JA3[6][4]=-links[13].mcm[2] + T315[6][4] + T34[6][4];
JA3[6][5]=links[13].mcm[1] + T315[6][5] + T34[6][5];
JA3[6][6]=T315[6][6] + T34[6][6];


h3[1]=JA3[1][3];
h3[2]=JA3[2][3];
h3[3]=JA3[3][3];
h3[4]=JA3[4][3];
h3[5]=JA3[5][3];
h3[6]=JA3[6][3];

d[3]=1.e-10 + h3[6];

T103[1][1]=-((h3[1]*h3[4])/d[3]) + JA3[1][1];
T103[1][2]=-((h3[1]*h3[5])/d[3]) + JA3[1][2];
T103[1][3]=-((h3[1]*h3[6])/d[3]) + JA3[1][3];
T103[1][4]=-(Power(h3[1],2)/d[3]) + JA3[1][4];
T103[1][5]=-((h3[1]*h3[2])/d[3]) + JA3[1][5];
T103[1][6]=-((h3[1]*h3[3])/d[3]) + JA3[1][6];

T103[2][1]=-((h3[2]*h3[4])/d[3]) + JA3[2][1];
T103[2][2]=-((h3[2]*h3[5])/d[3]) + JA3[2][2];
T103[2][3]=-((h3[2]*h3[6])/d[3]) + JA3[2][3];
T103[2][4]=-((h3[1]*h3[2])/d[3]) + JA3[2][4];
T103[2][5]=-(Power(h3[2],2)/d[3]) + JA3[2][5];
T103[2][6]=-((h3[2]*h3[3])/d[3]) + JA3[2][6];

T103[3][1]=-((h3[3]*h3[4])/d[3]) + JA3[3][1];
T103[3][2]=-((h3[3]*h3[5])/d[3]) + JA3[3][2];
T103[3][3]=-((h3[3]*h3[6])/d[3]) + JA3[3][3];
T103[3][4]=-((h3[1]*h3[3])/d[3]) + JA3[3][4];
T103[3][5]=-((h3[2]*h3[3])/d[3]) + JA3[3][5];
T103[3][6]=-(Power(h3[3],2)/d[3]) + JA3[3][6];

T103[4][1]=-(Power(h3[4],2)/d[3]) + JA3[4][1];
T103[4][2]=-((h3[4]*h3[5])/d[3]) + JA3[4][2];
T103[4][3]=-((h3[4]*h3[6])/d[3]) + JA3[4][3];
T103[4][4]=-((h3[1]*h3[4])/d[3]) + JA3[4][4];
T103[4][5]=-((h3[2]*h3[4])/d[3]) + JA3[4][5];
T103[4][6]=-((h3[3]*h3[4])/d[3]) + JA3[4][6];

T103[5][1]=-((h3[4]*h3[5])/d[3]) + JA3[5][1];
T103[5][2]=-(Power(h3[5],2)/d[3]) + JA3[5][2];
T103[5][3]=-((h3[5]*h3[6])/d[3]) + JA3[5][3];
T103[5][4]=-((h3[1]*h3[5])/d[3]) + JA3[5][4];
T103[5][5]=-((h3[2]*h3[5])/d[3]) + JA3[5][5];
T103[5][6]=-((h3[3]*h3[5])/d[3]) + JA3[5][6];

T103[6][1]=-((h3[4]*h3[6])/d[3]) + JA3[6][1];
T103[6][2]=-((h3[5]*h3[6])/d[3]) + JA3[6][2];
T103[6][3]=-(Power(h3[6],2)/d[3]) + JA3[6][3];
T103[6][4]=-((h3[1]*h3[6])/d[3]) + JA3[6][4];
T103[6][5]=-((h3[2]*h3[6])/d[3]) + JA3[6][5];
T103[6][6]=-((h3[3]*h3[6])/d[3]) + JA3[6][6];


T03[1][1]=S30[1][1]*(Si03[1][1]*T103[1][1] + Si03[1][2]*T103[2][1]) + S30[2][1]*(Si03[1][1]*T103[1][2] + Si03[1][2]*T103[2][2]);
T03[1][2]=-(Si03[1][1]*T103[1][3]) - Si03[1][2]*T103[2][3] - BODYLINK2*S30[1][3]*(Si03[1][1]*T103[1][4] + Si03[1][2]*T103[2][4]) - BODYLINK2*S30[2][3]*(Si03[1][1]*T103[1][5] + Si03[1][2]*T103[2][5]);
T03[1][3]=S30[1][3]*(Si03[1][1]*T103[1][1] + Si03[1][2]*T103[2][1]) + S30[2][3]*(Si03[1][1]*T103[1][2] + Si03[1][2]*T103[2][2]) - BODYLINK2*(Si03[1][1]*T103[1][6] + Si03[1][2]*T103[2][6]);
T03[1][4]=S30[1][1]*(Si03[1][1]*T103[1][4] + Si03[1][2]*T103[2][4]) + S30[2][1]*(Si03[1][1]*T103[1][5] + Si03[1][2]*T103[2][5]);
T03[1][5]=-(Si03[1][1]*T103[1][6]) - Si03[1][2]*T103[2][6];
T03[1][6]=S30[1][3]*(Si03[1][1]*T103[1][4] + Si03[1][2]*T103[2][4]) + S30[2][3]*(Si03[1][1]*T103[1][5] + Si03[1][2]*T103[2][5]);

T03[2][1]=-(S30[1][1]*T103[3][1]) - S30[2][1]*T103[3][2];
T03[2][2]=T103[3][3] + BODYLINK2*S30[1][3]*T103[3][4] + BODYLINK2*S30[2][3]*T103[3][5];
T03[2][3]=-(S30[1][3]*T103[3][1]) - S30[2][3]*T103[3][2] + BODYLINK2*T103[3][6];
T03[2][4]=-(S30[1][1]*T103[3][4]) - S30[2][1]*T103[3][5];
T03[2][5]=T103[3][6];
T03[2][6]=-(S30[1][3]*T103[3][4]) - S30[2][3]*T103[3][5];

T03[3][1]=S30[1][1]*(Si03[3][1]*T103[1][1] + Si03[3][2]*T103[2][1]) + S30[2][1]*(Si03[3][1]*T103[1][2] + Si03[3][2]*T103[2][2]);
T03[3][2]=-(Si03[3][1]*T103[1][3]) - Si03[3][2]*T103[2][3] - BODYLINK2*S30[1][3]*(Si03[3][1]*T103[1][4] + Si03[3][2]*T103[2][4]) - BODYLINK2*S30[2][3]*(Si03[3][1]*T103[1][5] + Si03[3][2]*T103[2][5]);
T03[3][3]=S30[1][3]*(Si03[3][1]*T103[1][1] + Si03[3][2]*T103[2][1]) + S30[2][3]*(Si03[3][1]*T103[1][2] + Si03[3][2]*T103[2][2]) - BODYLINK2*(Si03[3][1]*T103[1][6] + Si03[3][2]*T103[2][6]);
T03[3][4]=S30[1][1]*(Si03[3][1]*T103[1][4] + Si03[3][2]*T103[2][4]) + S30[2][1]*(Si03[3][1]*T103[1][5] + Si03[3][2]*T103[2][5]);
T03[3][5]=-(Si03[3][1]*T103[1][6]) - Si03[3][2]*T103[2][6];
T03[3][6]=S30[1][3]*(Si03[3][1]*T103[1][4] + Si03[3][2]*T103[2][4]) + S30[2][3]*(Si03[3][1]*T103[1][5] + Si03[3][2]*T103[2][5]);

T03[4][1]=S30[1][1]*(Si03[1][1]*T103[4][1] + Si03[1][2]*T103[5][1]) + S30[2][1]*(Si03[1][1]*T103[4][2] + Si03[1][2]*T103[5][2]);
T03[4][2]=-(Si03[1][1]*T103[4][3]) - Si03[1][2]*T103[5][3] - BODYLINK2*S30[1][3]*(Si03[1][1]*T103[4][4] + Si03[1][2]*T103[5][4]) - BODYLINK2*S30[2][3]*(Si03[1][1]*T103[4][5] + Si03[1][2]*T103[5][5]);
T03[4][3]=S30[1][3]*(Si03[1][1]*T103[4][1] + Si03[1][2]*T103[5][1]) + S30[2][3]*(Si03[1][1]*T103[4][2] + Si03[1][2]*T103[5][2]) - BODYLINK2*(Si03[1][1]*T103[4][6] + Si03[1][2]*T103[5][6]);
T03[4][4]=S30[1][1]*(Si03[1][1]*T103[4][4] + Si03[1][2]*T103[5][4]) + S30[2][1]*(Si03[1][1]*T103[4][5] + Si03[1][2]*T103[5][5]);
T03[4][5]=-(Si03[1][1]*T103[4][6]) - Si03[1][2]*T103[5][6];
T03[4][6]=S30[1][3]*(Si03[1][1]*T103[4][4] + Si03[1][2]*T103[5][4]) + S30[2][3]*(Si03[1][1]*T103[4][5] + Si03[1][2]*T103[5][5]);

T03[5][1]=S30[1][1]*(-(BODYLINK2*Si03[3][1]*T103[1][1]) - BODYLINK2*Si03[3][2]*T103[2][1] - T103[6][1]) + S30[2][1]*(-(BODYLINK2*Si03[3][1]*T103[1][2]) - BODYLINK2*Si03[3][2]*T103[2][2] - T103[6][2]);
T03[5][2]=BODYLINK2*Si03[3][1]*T103[1][3] + BODYLINK2*Si03[3][2]*T103[2][3] + T103[6][3] - BODYLINK2*S30[1][3]*(-(BODYLINK2*Si03[3][1]*T103[1][4]) - BODYLINK2*Si03[3][2]*T103[2][4] - T103[6][4]) - BODYLINK2*S30[2][3]*(-(BODYLINK2*Si03[3][1]*T103[1][5]) - BODYLINK2*Si03[3][2]*T103[2][5] - T103[6][5]);
T03[5][3]=S30[1][3]*(-(BODYLINK2*Si03[3][1]*T103[1][1]) - BODYLINK2*Si03[3][2]*T103[2][1] - T103[6][1]) + S30[2][3]*(-(BODYLINK2*Si03[3][1]*T103[1][2]) - BODYLINK2*Si03[3][2]*T103[2][2] - T103[6][2]) - BODYLINK2*(-(BODYLINK2*Si03[3][1]*T103[1][6]) - BODYLINK2*Si03[3][2]*T103[2][6] - T103[6][6]);
T03[5][4]=S30[1][1]*(-(BODYLINK2*Si03[3][1]*T103[1][4]) - BODYLINK2*Si03[3][2]*T103[2][4] - T103[6][4]) + S30[2][1]*(-(BODYLINK2*Si03[3][1]*T103[1][5]) - BODYLINK2*Si03[3][2]*T103[2][5] - T103[6][5]);
T03[5][5]=BODYLINK2*Si03[3][1]*T103[1][6] + BODYLINK2*Si03[3][2]*T103[2][6] + T103[6][6];
T03[5][6]=S30[1][3]*(-(BODYLINK2*Si03[3][1]*T103[1][4]) - BODYLINK2*Si03[3][2]*T103[2][4] - T103[6][4]) + S30[2][3]*(-(BODYLINK2*Si03[3][1]*T103[1][5]) - BODYLINK2*Si03[3][2]*T103[2][5] - T103[6][5]);

T03[6][1]=S30[1][1]*(-(BODYLINK2*T103[3][1]) + Si03[3][1]*T103[4][1] + Si03[3][2]*T103[5][1]) + S30[2][1]*(-(BODYLINK2*T103[3][2]) + Si03[3][1]*T103[4][2] + Si03[3][2]*T103[5][2]);
T03[6][2]=BODYLINK2*T103[3][3] - Si03[3][1]*T103[4][3] - Si03[3][2]*T103[5][3] - BODYLINK2*S30[1][3]*(-(BODYLINK2*T103[3][4]) + Si03[3][1]*T103[4][4] + Si03[3][2]*T103[5][4]) - BODYLINK2*S30[2][3]*(-(BODYLINK2*T103[3][5]) + Si03[3][1]*T103[4][5] + Si03[3][2]*T103[5][5]);
T03[6][3]=S30[1][3]*(-(BODYLINK2*T103[3][1]) + Si03[3][1]*T103[4][1] + Si03[3][2]*T103[5][1]) + S30[2][3]*(-(BODYLINK2*T103[3][2]) + Si03[3][1]*T103[4][2] + Si03[3][2]*T103[5][2]) - BODYLINK2*(-(BODYLINK2*T103[3][6]) + Si03[3][1]*T103[4][6] + Si03[3][2]*T103[5][6]);
T03[6][4]=S30[1][1]*(-(BODYLINK2*T103[3][4]) + Si03[3][1]*T103[4][4] + Si03[3][2]*T103[5][4]) + S30[2][1]*(-(BODYLINK2*T103[3][5]) + Si03[3][1]*T103[4][5] + Si03[3][2]*T103[5][5]);
T03[6][5]=BODYLINK2*T103[3][6] - Si03[3][1]*T103[4][6] - Si03[3][2]*T103[5][6];
T03[6][6]=S30[1][3]*(-(BODYLINK2*T103[3][4]) + Si03[3][1]*T103[4][4] + Si03[3][2]*T103[5][4]) + S30[2][3]*(-(BODYLINK2*T103[3][5]) + Si03[3][1]*T103[4][5] + Si03[3][2]*T103[5][5]);



}


void
hoap3_ForDynArtfunc30(void)
      {
JA2[1][2]=links[14].mcm[3];
JA2[1][3]=-links[14].mcm[2];
JA2[1][4]=links[14].m;

JA2[2][1]=-links[14].mcm[3];
JA2[2][3]=links[14].mcm[1];
JA2[2][5]=links[14].m;

JA2[3][1]=links[14].mcm[2];
JA2[3][2]=-links[14].mcm[1];
JA2[3][6]=links[14].m;

JA2[4][1]=links[14].inertia[1][1];
JA2[4][2]=links[14].inertia[1][2];
JA2[4][3]=links[14].inertia[1][3];
JA2[4][5]=-links[14].mcm[3];
JA2[4][6]=links[14].mcm[2];

JA2[5][1]=links[14].inertia[1][2];
JA2[5][2]=links[14].inertia[2][2];
JA2[5][3]=links[14].inertia[2][3];
JA2[5][4]=links[14].mcm[3];
JA2[5][6]=-links[14].mcm[1];

JA2[6][1]=links[14].inertia[1][3];
JA2[6][2]=links[14].inertia[2][3];
JA2[6][3]=links[14].inertia[3][3];
JA2[6][4]=-links[14].mcm[2];
JA2[6][5]=links[14].mcm[1];


h2[1]=0. + JA2[1][3];
h2[2]=0. + JA2[2][3];
h2[4]=0. + JA2[4][3];
h2[5]=0. + JA2[5][3];
h2[6]=0. + JA2[6][3];

d[2]=1.e-10 + h2[6];

T112[1][1]=-((h2[1]*h2[4])/d[2]);
T112[1][2]=-((h2[1]*h2[5])/d[2]) + JA2[1][2];
T112[1][3]=-((h2[1]*h2[6])/d[2]) + JA2[1][3];
T112[1][4]=-(Power(h2[1],2)/d[2]) + JA2[1][4];
T112[1][5]=-((h2[1]*h2[2])/d[2]);

T112[2][1]=-((h2[2]*h2[4])/d[2]) + JA2[2][1];
T112[2][2]=-((h2[2]*h2[5])/d[2]);
T112[2][3]=-((h2[2]*h2[6])/d[2]) + JA2[2][3];
T112[2][4]=-((h2[1]*h2[2])/d[2]);
T112[2][5]=-(Power(h2[2],2)/d[2]) + JA2[2][5];

T112[3][1]=JA2[3][1];
T112[3][2]=JA2[3][2];
T112[3][6]=JA2[3][6];

T112[4][1]=-(Power(h2[4],2)/d[2]) + JA2[4][1];
T112[4][2]=-((h2[4]*h2[5])/d[2]) + JA2[4][2];
T112[4][3]=-((h2[4]*h2[6])/d[2]) + JA2[4][3];
T112[4][4]=-((h2[1]*h2[4])/d[2]);
T112[4][5]=-((h2[2]*h2[4])/d[2]) + JA2[4][5];
T112[4][6]=JA2[4][6];

T112[5][1]=-((h2[4]*h2[5])/d[2]) + JA2[5][1];
T112[5][2]=-(Power(h2[5],2)/d[2]) + JA2[5][2];
T112[5][3]=-((h2[5]*h2[6])/d[2]) + JA2[5][3];
T112[5][4]=-((h2[1]*h2[5])/d[2]) + JA2[5][4];
T112[5][5]=-((h2[2]*h2[5])/d[2]);
T112[5][6]=JA2[5][6];

T112[6][1]=-((h2[4]*h2[6])/d[2]) + JA2[6][1];
T112[6][2]=-((h2[5]*h2[6])/d[2]) + JA2[6][2];
T112[6][3]=-(Power(h2[6],2)/d[2]) + JA2[6][3];
T112[6][4]=-((h2[1]*h2[6])/d[2]) + JA2[6][4];
T112[6][5]=-((h2[2]*h2[6])/d[2]) + JA2[6][5];


T12[1][1]=S21[1][1]*(Si12[1][1]*T112[1][1] + Si12[1][2]*T112[2][1]) + S21[2][1]*(Si12[1][1]*T112[1][2] + Si12[1][2]*T112[2][2]) - ARMLINK1*S21[1][3]*(Si12[1][1]*T112[1][4] + Si12[1][2]*T112[2][4]) - ARMLINK1*S21[2][3]*(Si12[1][1]*T112[1][5] + Si12[1][2]*T112[2][5]);
T12[1][2]=Si12[1][1]*T112[1][3] + Si12[1][2]*T112[2][3];
T12[1][3]=S21[1][3]*(Si12[1][1]*T112[1][1] + Si12[1][2]*T112[2][1]) + S21[2][3]*(Si12[1][1]*T112[1][2] + Si12[1][2]*T112[2][2]) + ARMLINK1*S21[1][1]*(Si12[1][1]*T112[1][4] + Si12[1][2]*T112[2][4]) + ARMLINK1*S21[2][1]*(Si12[1][1]*T112[1][5] + Si12[1][2]*T112[2][5]);
T12[1][4]=S21[1][1]*(Si12[1][1]*T112[1][4] + Si12[1][2]*T112[2][4]) + S21[2][1]*(Si12[1][1]*T112[1][5] + Si12[1][2]*T112[2][5]);
T12[1][6]=S21[1][3]*(Si12[1][1]*T112[1][4] + Si12[1][2]*T112[2][4]) + S21[2][3]*(Si12[1][1]*T112[1][5] + Si12[1][2]*T112[2][5]);

T12[2][1]=S21[1][1]*T112[3][1] + S21[2][1]*T112[3][2];
T12[2][3]=S21[1][3]*T112[3][1] + S21[2][3]*T112[3][2];
T12[2][5]=T112[3][6];

T12[3][1]=S21[1][1]*(Si12[3][1]*T112[1][1] + Si12[3][2]*T112[2][1]) + S21[2][1]*(Si12[3][1]*T112[1][2] + Si12[3][2]*T112[2][2]) - ARMLINK1*S21[1][3]*(Si12[3][1]*T112[1][4] + Si12[3][2]*T112[2][4]) - ARMLINK1*S21[2][3]*(Si12[3][1]*T112[1][5] + Si12[3][2]*T112[2][5]);
T12[3][2]=Si12[3][1]*T112[1][3] + Si12[3][2]*T112[2][3];
T12[3][3]=S21[1][3]*(Si12[3][1]*T112[1][1] + Si12[3][2]*T112[2][1]) + S21[2][3]*(Si12[3][1]*T112[1][2] + Si12[3][2]*T112[2][2]) + ARMLINK1*S21[1][1]*(Si12[3][1]*T112[1][4] + Si12[3][2]*T112[2][4]) + ARMLINK1*S21[2][1]*(Si12[3][1]*T112[1][5] + Si12[3][2]*T112[2][5]);
T12[3][4]=S21[1][1]*(Si12[3][1]*T112[1][4] + Si12[3][2]*T112[2][4]) + S21[2][1]*(Si12[3][1]*T112[1][5] + Si12[3][2]*T112[2][5]);
T12[3][6]=S21[1][3]*(Si12[3][1]*T112[1][4] + Si12[3][2]*T112[2][4]) + S21[2][3]*(Si12[3][1]*T112[1][5] + Si12[3][2]*T112[2][5]);

T12[4][1]=S21[1][1]*(-(ARMLINK1*Si12[3][1]*T112[1][1]) - ARMLINK1*Si12[3][2]*T112[2][1] + Si12[1][1]*T112[4][1] + Si12[1][2]*T112[5][1]) + S21[2][1]*(-(ARMLINK1*Si12[3][1]*T112[1][2]) - ARMLINK1*Si12[3][2]*T112[2][2] + Si12[1][1]*T112[4][2] + Si12[1][2]*T112[5][2]) - ARMLINK1*S21[1][3]*(-(ARMLINK1*Si12[3][1]*T112[1][4]) - ARMLINK1*Si12[3][2]*T112[2][4] + Si12[1][1]*T112[4][4] + Si12[1][2]*T112[5][4]) - ARMLINK1*S21[2][3]*(-(ARMLINK1*Si12[3][1]*T112[1][5]) - ARMLINK1*Si12[3][2]*T112[2][5] + Si12[1][1]*T112[4][5] + Si12[1][2]*T112[5][5]);
T12[4][2]=-(ARMLINK1*Si12[3][1]*T112[1][3]) - ARMLINK1*Si12[3][2]*T112[2][3] + Si12[1][1]*T112[4][3] + Si12[1][2]*T112[5][3];
T12[4][3]=S21[1][3]*(-(ARMLINK1*Si12[3][1]*T112[1][1]) - ARMLINK1*Si12[3][2]*T112[2][1] + Si12[1][1]*T112[4][1] + Si12[1][2]*T112[5][1]) + S21[2][3]*(-(ARMLINK1*Si12[3][1]*T112[1][2]) - ARMLINK1*Si12[3][2]*T112[2][2] + Si12[1][1]*T112[4][2] + Si12[1][2]*T112[5][2]) + ARMLINK1*S21[1][1]*(-(ARMLINK1*Si12[3][1]*T112[1][4]) - ARMLINK1*Si12[3][2]*T112[2][4] + Si12[1][1]*T112[4][4] + Si12[1][2]*T112[5][4]) + ARMLINK1*S21[2][1]*(-(ARMLINK1*Si12[3][1]*T112[1][5]) - ARMLINK1*Si12[3][2]*T112[2][5] + Si12[1][1]*T112[4][5] + Si12[1][2]*T112[5][5]);
T12[4][4]=S21[1][1]*(-(ARMLINK1*Si12[3][1]*T112[1][4]) - ARMLINK1*Si12[3][2]*T112[2][4] + Si12[1][1]*T112[4][4] + Si12[1][2]*T112[5][4]) + S21[2][1]*(-(ARMLINK1*Si12[3][1]*T112[1][5]) - ARMLINK1*Si12[3][2]*T112[2][5] + Si12[1][1]*T112[4][5] + Si12[1][2]*T112[5][5]);
T12[4][5]=Si12[1][1]*T112[4][6] + Si12[1][2]*T112[5][6];
T12[4][6]=S21[1][3]*(-(ARMLINK1*Si12[3][1]*T112[1][4]) - ARMLINK1*Si12[3][2]*T112[2][4] + Si12[1][1]*T112[4][4] + Si12[1][2]*T112[5][4]) + S21[2][3]*(-(ARMLINK1*Si12[3][1]*T112[1][5]) - ARMLINK1*Si12[3][2]*T112[2][5] + Si12[1][1]*T112[4][5] + Si12[1][2]*T112[5][5]);

T12[5][1]=S21[1][1]*T112[6][1] + S21[2][1]*T112[6][2] - ARMLINK1*S21[1][3]*T112[6][4] - ARMLINK1*S21[2][3]*T112[6][5];
T12[5][2]=T112[6][3];
T12[5][3]=S21[1][3]*T112[6][1] + S21[2][3]*T112[6][2] + ARMLINK1*S21[1][1]*T112[6][4] + ARMLINK1*S21[2][1]*T112[6][5];
T12[5][4]=S21[1][1]*T112[6][4] + S21[2][1]*T112[6][5];
T12[5][6]=S21[1][3]*T112[6][4] + S21[2][3]*T112[6][5];

T12[6][1]=S21[1][1]*(ARMLINK1*Si12[1][1]*T112[1][1] + ARMLINK1*Si12[1][2]*T112[2][1] + Si12[3][1]*T112[4][1] + Si12[3][2]*T112[5][1]) + S21[2][1]*(ARMLINK1*Si12[1][1]*T112[1][2] + ARMLINK1*Si12[1][2]*T112[2][2] + Si12[3][1]*T112[4][2] + Si12[3][2]*T112[5][2]) - ARMLINK1*S21[1][3]*(ARMLINK1*Si12[1][1]*T112[1][4] + ARMLINK1*Si12[1][2]*T112[2][4] + Si12[3][1]*T112[4][4] + Si12[3][2]*T112[5][4]) - ARMLINK1*S21[2][3]*(ARMLINK1*Si12[1][1]*T112[1][5] + ARMLINK1*Si12[1][2]*T112[2][5] + Si12[3][1]*T112[4][5] + Si12[3][2]*T112[5][5]);
T12[6][2]=ARMLINK1*Si12[1][1]*T112[1][3] + ARMLINK1*Si12[1][2]*T112[2][3] + Si12[3][1]*T112[4][3] + Si12[3][2]*T112[5][3];
T12[6][3]=S21[1][3]*(ARMLINK1*Si12[1][1]*T112[1][1] + ARMLINK1*Si12[1][2]*T112[2][1] + Si12[3][1]*T112[4][1] + Si12[3][2]*T112[5][1]) + S21[2][3]*(ARMLINK1*Si12[1][1]*T112[1][2] + ARMLINK1*Si12[1][2]*T112[2][2] + Si12[3][1]*T112[4][2] + Si12[3][2]*T112[5][2]) + ARMLINK1*S21[1][1]*(ARMLINK1*Si12[1][1]*T112[1][4] + ARMLINK1*Si12[1][2]*T112[2][4] + Si12[3][1]*T112[4][4] + Si12[3][2]*T112[5][4]) + ARMLINK1*S21[2][1]*(ARMLINK1*Si12[1][1]*T112[1][5] + ARMLINK1*Si12[1][2]*T112[2][5] + Si12[3][1]*T112[4][5] + Si12[3][2]*T112[5][5]);
T12[6][4]=S21[1][1]*(ARMLINK1*Si12[1][1]*T112[1][4] + ARMLINK1*Si12[1][2]*T112[2][4] + Si12[3][1]*T112[4][4] + Si12[3][2]*T112[5][4]) + S21[2][1]*(ARMLINK1*Si12[1][1]*T112[1][5] + ARMLINK1*Si12[1][2]*T112[2][5] + Si12[3][1]*T112[4][5] + Si12[3][2]*T112[5][5]);
T12[6][5]=Si12[3][1]*T112[4][6] + Si12[3][2]*T112[5][6];
T12[6][6]=S21[1][3]*(ARMLINK1*Si12[1][1]*T112[1][4] + ARMLINK1*Si12[1][2]*T112[2][4] + Si12[3][1]*T112[4][4] + Si12[3][2]*T112[5][4]) + S21[2][3]*(ARMLINK1*Si12[1][1]*T112[1][5] + ARMLINK1*Si12[1][2]*T112[2][5] + Si12[3][1]*T112[4][5] + Si12[3][2]*T112[5][5]);



}


void
hoap3_ForDynArtfunc31(void)
      {
JA1[1][1]=T12[1][1];
JA1[1][2]=T12[1][2];
JA1[1][3]=T12[1][3];
JA1[1][4]=T12[1][4];
JA1[1][6]=T12[1][6];

JA1[2][1]=T12[2][1];
JA1[2][3]=T12[2][3];
JA1[2][5]=T12[2][5];

JA1[3][1]=T12[3][1];
JA1[3][2]=T12[3][2];
JA1[3][3]=T12[3][3];
JA1[3][4]=T12[3][4];
JA1[3][6]=T12[3][6];

JA1[4][1]=T12[4][1];
JA1[4][2]=T12[4][2];
JA1[4][3]=T12[4][3];
JA1[4][4]=T12[4][4];
JA1[4][5]=T12[4][5];
JA1[4][6]=T12[4][6];

JA1[5][1]=T12[5][1];
JA1[5][2]=T12[5][2];
JA1[5][3]=T12[5][3];
JA1[5][4]=T12[5][4];
JA1[5][6]=T12[5][6];

JA1[6][1]=T12[6][1];
JA1[6][2]=T12[6][2];
JA1[6][3]=T12[6][3];
JA1[6][4]=T12[6][4];
JA1[6][5]=T12[6][5];
JA1[6][6]=T12[6][6];


T101[1][1]=JA1[1][1];
T101[1][2]=JA1[1][2];
T101[1][3]=JA1[1][3];
T101[1][4]=JA1[1][4];
T101[1][6]=JA1[1][6];

T101[2][1]=JA1[2][1];
T101[2][3]=JA1[2][3];
T101[2][5]=JA1[2][5];

T101[3][1]=JA1[3][1];
T101[3][2]=JA1[3][2];
T101[3][3]=JA1[3][3];
T101[3][4]=JA1[3][4];
T101[3][6]=JA1[3][6];

T101[4][1]=JA1[4][1];
T101[4][2]=JA1[4][2];
T101[4][3]=JA1[4][3];
T101[4][4]=JA1[4][4];
T101[4][5]=JA1[4][5];
T101[4][6]=JA1[4][6];

T101[5][1]=JA1[5][1];
T101[5][2]=JA1[5][2];
T101[5][3]=JA1[5][3];
T101[5][4]=JA1[5][4];
T101[5][6]=JA1[5][6];

T101[6][1]=JA1[6][1];
T101[6][2]=JA1[6][2];
T101[6][3]=JA1[6][3];
T101[6][4]=JA1[6][4];
T101[6][5]=JA1[6][5];
T101[6][6]=JA1[6][6];


T01[1][1]=T101[1][1];
T01[1][2]=T101[1][2] + BODYLINK1*T101[1][4];
T01[1][3]=T101[1][3];
T01[1][4]=T101[1][4];
T01[1][6]=T101[1][6];

T01[2][1]=T101[2][1] - BODYLINK1*T101[2][5];
T01[2][3]=T101[2][3];
T01[2][5]=T101[2][5];

T01[3][1]=T101[3][1];
T01[3][2]=T101[3][2] + BODYLINK1*T101[3][4];
T01[3][3]=T101[3][3];
T01[3][4]=T101[3][4];
T01[3][6]=T101[3][6];

T01[4][1]=-(BODYLINK1*T101[2][1]) + T101[4][1] - BODYLINK1*(-(BODYLINK1*T101[2][5]) + T101[4][5]);
T01[4][2]=T101[4][2] + BODYLINK1*T101[4][4];
T01[4][3]=-(BODYLINK1*T101[2][3]) + T101[4][3];
T01[4][4]=T101[4][4];
T01[4][5]=-(BODYLINK1*T101[2][5]) + T101[4][5];
T01[4][6]=T101[4][6];

T01[5][1]=BODYLINK1*T101[1][1] + T101[5][1];
T01[5][2]=BODYLINK1*T101[1][2] + T101[5][2] + BODYLINK1*(BODYLINK1*T101[1][4] + T101[5][4]);
T01[5][3]=BODYLINK1*T101[1][3] + T101[5][3];
T01[5][4]=BODYLINK1*T101[1][4] + T101[5][4];
T01[5][6]=BODYLINK1*T101[1][6] + T101[5][6];

T01[6][1]=T101[6][1] - BODYLINK1*T101[6][5];
T01[6][2]=T101[6][2] + BODYLINK1*T101[6][4];
T01[6][3]=T101[6][3];
T01[6][4]=T101[6][4];
T01[6][5]=T101[6][5];
T01[6][6]=T101[6][6];



}


void
hoap3_ForDynArtfunc32(void)
      {
JA0[1][1]=T01[1][1] + T03[1][1];
JA0[1][2]=links[0].mcm[3] + T01[1][2] + T03[1][2];
JA0[1][3]=-links[0].mcm[2] + T01[1][3] + T03[1][3];
JA0[1][4]=links[0].m + T01[1][4] + T03[1][4];
JA0[1][5]=0. + T03[1][5];
JA0[1][6]=T01[1][6] + T03[1][6];

JA0[2][1]=-links[0].mcm[3] + T01[2][1] + T03[2][1];
JA0[2][2]=0. + T03[2][2];
JA0[2][3]=links[0].mcm[1] + T01[2][3] + T03[2][3];
JA0[2][4]=0. + T03[2][4];
JA0[2][5]=links[0].m + T01[2][5] + T03[2][5];
JA0[2][6]=0. + T03[2][6];

JA0[3][1]=links[0].mcm[2] + T01[3][1] + T03[3][1];
JA0[3][2]=-links[0].mcm[1] + T01[3][2] + T03[3][2];
JA0[3][3]=T01[3][3] + T03[3][3];
JA0[3][4]=T01[3][4] + T03[3][4];
JA0[3][5]=0. + T03[3][5];
JA0[3][6]=links[0].m + T01[3][6] + T03[3][6];

JA0[4][1]=links[0].inertia[1][1] + T01[4][1] + T03[4][1];
JA0[4][2]=links[0].inertia[1][2] + T01[4][2] + T03[4][2];
JA0[4][3]=links[0].inertia[1][3] + T01[4][3] + T03[4][3];
JA0[4][4]=T01[4][4] + T03[4][4];
JA0[4][5]=-links[0].mcm[3] + T01[4][5] + T03[4][5];
JA0[4][6]=links[0].mcm[2] + T01[4][6] + T03[4][6];

JA0[5][1]=links[0].inertia[1][2] + T01[5][1] + T03[5][1];
JA0[5][2]=links[0].inertia[2][2] + T01[5][2] + T03[5][2];
JA0[5][3]=links[0].inertia[2][3] + T01[5][3] + T03[5][3];
JA0[5][4]=links[0].mcm[3] + T01[5][4] + T03[5][4];
JA0[5][5]=0. + T03[5][5];
JA0[5][6]=-links[0].mcm[1] + T01[5][6] + T03[5][6];

JA0[6][1]=links[0].inertia[1][3] + T01[6][1] + T03[6][1];
JA0[6][2]=links[0].inertia[2][3] + T01[6][2] + T03[6][2];
JA0[6][3]=links[0].inertia[3][3] + T01[6][3] + T03[6][3];
JA0[6][4]=-links[0].mcm[2] + T01[6][4] + T03[6][4];
JA0[6][5]=links[0].mcm[1] + T01[6][5] + T03[6][5];
JA0[6][6]=T01[6][6] + T03[6][6];



}


void
hoap3_ForDynArtfunc33(void)
      {
/* bias forces */
p25[1]=pv25[1];
p25[2]=pv25[2];
p25[3]=pv25[3];
p25[4]=pv25[4];
p25[5]=pv25[5];
p25[6]=pv25[6];

pmm25[1]=p25[1];
pmm25[2]=p25[2];
pmm25[3]=p25[3];
pmm25[4]=p25[4];
pmm25[5]=p25[5];
pmm25[6]=p25[6];

pm25[1]=pmm25[1]*Si2025[1][1] + pmm25[2]*Si2025[1][2] + pmm25[3]*Si2025[1][3];
pm25[2]=pmm25[1]*Si2025[2][1] + pmm25[2]*Si2025[2][2] + pmm25[3]*Si2025[2][3];
pm25[3]=pmm25[1]*Si2025[3][1] + pmm25[2]*Si2025[3][2] + pmm25[3]*Si2025[3][3];
pm25[4]=pmm25[4]*Si2025[1][1] + pmm25[5]*Si2025[1][2] + pmm25[6]*Si2025[1][3] + pmm25[1]*(-(eff[2].x[3]*Si2025[2][1]) + eff[2].x[2]*Si2025[3][1]) + pmm25[2]*(-(eff[2].x[3]*Si2025[2][2]) + eff[2].x[2]*Si2025[3][2]) + pmm25[3]*(-(eff[2].x[3]*Si2025[2][3]) + eff[2].x[2]*Si2025[3][3]);
pm25[5]=pmm25[4]*Si2025[2][1] + pmm25[5]*Si2025[2][2] + pmm25[6]*Si2025[2][3] + pmm25[1]*(eff[2].x[3]*Si2025[1][1] - eff[2].x[1]*Si2025[3][1]) + pmm25[2]*(eff[2].x[3]*Si2025[1][2] - eff[2].x[1]*Si2025[3][2]) + pmm25[3]*(eff[2].x[3]*Si2025[1][3] - eff[2].x[1]*Si2025[3][3]);
pm25[6]=pmm25[1]*(-(eff[2].x[2]*Si2025[1][1]) + eff[2].x[1]*Si2025[2][1]) + pmm25[2]*(-(eff[2].x[2]*Si2025[1][2]) + eff[2].x[1]*Si2025[2][2]) + pmm25[3]*(-(eff[2].x[2]*Si2025[1][3]) + eff[2].x[1]*Si2025[2][3]) + pmm25[4]*Si2025[3][1] + pmm25[5]*Si2025[3][2] + pmm25[6]*Si2025[3][3];

p20[1]=0. + pm25[1] + pv20[1];
p20[2]=0. + pm25[2] + pv20[2];
p20[3]=0. + pm25[3] + pv20[3];
p20[4]=0. + pm25[4] + pv20[4];
p20[5]=0. + pm25[5] + pv20[5];
p20[6]=0. + pm25[6] + pv20[6];

u[20]=0. + state[12].u - c20[4]*h20[1] - c20[5]*h20[2] - c20[1]*h20[4] - c20[2]*h20[5] - p20[6];

pmm20[1]=p20[1] + (h20[1]*u[20])/d[20] + c20[1]*JA20[1][1] + c20[2]*JA20[1][2] + c20[4]*JA20[1][4] + c20[5]*JA20[1][5];
pmm20[2]=p20[2] + (h20[2]*u[20])/d[20] + c20[1]*JA20[2][1] + c20[2]*JA20[2][2] + c20[4]*JA20[2][4] + c20[5]*JA20[2][5];
pmm20[3]=p20[3] + (h20[3]*u[20])/d[20] + c20[1]*JA20[3][1] + c20[2]*JA20[3][2] + c20[4]*JA20[3][4] + c20[5]*JA20[3][5];
pmm20[4]=p20[4] + (h20[4]*u[20])/d[20] + c20[1]*JA20[4][1] + c20[2]*JA20[4][2] + c20[4]*JA20[4][4] + c20[5]*JA20[4][5];
pmm20[5]=p20[5] + (h20[5]*u[20])/d[20] + c20[1]*JA20[5][1] + c20[2]*JA20[5][2] + c20[4]*JA20[5][4] + c20[5]*JA20[5][5];
pmm20[6]=p20[6] + (h20[6]*u[20])/d[20] + c20[1]*JA20[6][1] + c20[2]*JA20[6][2] + c20[4]*JA20[6][4] + c20[5]*JA20[6][5];

pm20[1]=pmm20[1]*Si1920[1][1] + pmm20[2]*Si1920[1][2];
pm20[2]=pmm20[3];
pm20[3]=pmm20[1]*Si1920[3][1] + pmm20[2]*Si1920[3][2];
pm20[4]=pmm20[4]*Si1920[1][1] + pmm20[5]*Si1920[1][2];
pm20[5]=pmm20[6];
pm20[6]=pmm20[4]*Si1920[3][1] + pmm20[5]*Si1920[3][2];

p19[1]=pm20[1] + pv19[1];
p19[2]=pm20[2] + pv19[2];
p19[3]=pm20[3] + pv19[3];
p19[4]=pm20[4] + pv19[4];
p19[5]=pm20[5] + pv19[5];
p19[6]=pm20[6] + pv19[6];

u[19]=0. + state[11].u - c19[4]*h19[1] - c19[5]*h19[2] - c19[1]*h19[4] - c19[2]*h19[5] - p19[6];

pmm19[1]=p19[1] + (h19[1]*u[19])/d[19] + c19[1]*JA19[1][1] + c19[2]*JA19[1][2] + c19[4]*JA19[1][4] + c19[5]*JA19[1][5];
pmm19[2]=p19[2] + (h19[2]*u[19])/d[19] + c19[1]*JA19[2][1] + c19[2]*JA19[2][2] + c19[4]*JA19[2][4] + c19[5]*JA19[2][5];
pmm19[3]=p19[3] + (h19[3]*u[19])/d[19] + c19[1]*JA19[3][1] + c19[2]*JA19[3][2] + c19[4]*JA19[3][4] + c19[5]*JA19[3][5];
pmm19[4]=p19[4] + (h19[4]*u[19])/d[19] + c19[1]*JA19[4][1] + c19[2]*JA19[4][2] + c19[4]*JA19[4][4] + c19[5]*JA19[4][5];
pmm19[5]=p19[5] + (h19[5]*u[19])/d[19] + c19[1]*JA19[5][1] + c19[2]*JA19[5][2] + c19[4]*JA19[5][4] + c19[5]*JA19[5][5];
pmm19[6]=p19[6] + (h19[6]*u[19])/d[19] + c19[1]*JA19[6][1] + c19[2]*JA19[6][2] + c19[4]*JA19[6][4] + c19[5]*JA19[6][5];

pm19[1]=pmm19[1]*Si1819[1][1] + pmm19[2]*Si1819[1][2];
pm19[2]=pmm19[1]*Si1819[2][1] + pmm19[2]*Si1819[2][2];
pm19[3]=pmm19[3];
pm19[4]=pmm19[4]*Si1819[1][1] + pmm19[5]*Si1819[1][2];
pm19[5]=LEGLINK3*pmm19[3] + pmm19[4]*Si1819[2][1] + pmm19[5]*Si1819[2][2];
pm19[6]=pmm19[6] - LEGLINK3*pmm19[1]*Si1819[2][1] - LEGLINK3*pmm19[2]*Si1819[2][2];

p18[1]=pm19[1] + pv18[1];
p18[2]=pm19[2] + pv18[2];
p18[3]=pm19[3] + pv18[3];
p18[4]=pm19[4] + pv18[4];
p18[5]=pm19[5] + pv18[5];
p18[6]=pm19[6] + pv18[6];

u[18]=0. + state[10].u - c18[4]*h18[1] - c18[5]*h18[2] - c18[1]*h18[4] - c18[2]*h18[5] - p18[6];

pmm18[1]=p18[1] + (h18[1]*u[18])/d[18] + c18[1]*JA18[1][1] + c18[2]*JA18[1][2] + c18[4]*JA18[1][4] + c18[5]*JA18[1][5];
pmm18[2]=p18[2] + (h18[2]*u[18])/d[18] + c18[1]*JA18[2][1] + c18[2]*JA18[2][2] + c18[4]*JA18[2][4] + c18[5]*JA18[2][5];
pmm18[3]=p18[3] + (h18[3]*u[18])/d[18] + c18[1]*JA18[3][1] + c18[2]*JA18[3][2] + c18[4]*JA18[3][4] + c18[5]*JA18[3][5];
pmm18[4]=p18[4] + (h18[4]*u[18])/d[18] + c18[1]*JA18[4][1] + c18[2]*JA18[4][2] + c18[4]*JA18[4][4] + c18[5]*JA18[4][5];
pmm18[5]=p18[5] + (h18[5]*u[18])/d[18] + c18[1]*JA18[5][1] + c18[2]*JA18[5][2] + c18[4]*JA18[5][4] + c18[5]*JA18[5][5];
pmm18[6]=p18[6] + (h18[6]*u[18])/d[18] + c18[1]*JA18[6][1] + c18[2]*JA18[6][2] + c18[4]*JA18[6][4] + c18[5]*JA18[6][5];

pm18[1]=pmm18[1]*Si1718[1][1] + pmm18[2]*Si1718[1][2];
pm18[2]=pmm18[1]*Si1718[2][1] + pmm18[2]*Si1718[2][2];
pm18[3]=pmm18[3];
pm18[4]=pmm18[4]*Si1718[1][1] + pmm18[5]*Si1718[1][2];
pm18[5]=LEGLINK2*pmm18[3] + pmm18[4]*Si1718[2][1] + pmm18[5]*Si1718[2][2];
pm18[6]=pmm18[6] - LEGLINK2*pmm18[1]*Si1718[2][1] - LEGLINK2*pmm18[2]*Si1718[2][2];

p17[1]=pm18[1] + pv17[1];
p17[2]=pm18[2] + pv17[2];
p17[3]=pm18[3] + pv17[3];
p17[4]=pm18[4] + pv17[4];
p17[5]=pm18[5] + pv17[5];
p17[6]=pm18[6] + pv17[6];

u[17]=0. + state[9].u - c17[4]*h17[1] - c17[5]*h17[2] - c17[1]*h17[4] - c17[2]*h17[5] - p17[6];

pmm17[1]=p17[1] + (h17[1]*u[17])/d[17] + c17[1]*JA17[1][1] + c17[2]*JA17[1][2] + c17[4]*JA17[1][4] + c17[5]*JA17[1][5];
pmm17[2]=p17[2] + (h17[2]*u[17])/d[17] + c17[1]*JA17[2][1] + c17[2]*JA17[2][2] + c17[4]*JA17[2][4] + c17[5]*JA17[2][5];
pmm17[3]=p17[3] + (h17[3]*u[17])/d[17] + c17[1]*JA17[3][1] + c17[2]*JA17[3][2] + c17[4]*JA17[3][4] + c17[5]*JA17[3][5];
pmm17[4]=p17[4] + (h17[4]*u[17])/d[17] + c17[1]*JA17[4][1] + c17[2]*JA17[4][2] + c17[4]*JA17[4][4] + c17[5]*JA17[4][5];
pmm17[5]=p17[5] + (h17[5]*u[17])/d[17] + c17[1]*JA17[5][1] + c17[2]*JA17[5][2] + c17[4]*JA17[5][4] + c17[5]*JA17[5][5];
pmm17[6]=p17[6] + (h17[6]*u[17])/d[17] + c17[1]*JA17[6][1] + c17[2]*JA17[6][2] + c17[4]*JA17[6][4] + c17[5]*JA17[6][5];

pm17[1]=pmm17[1]*Si1617[1][1] + pmm17[2]*Si1617[1][2];
pm17[2]=-pmm17[3];
pm17[3]=pmm17[1]*Si1617[3][1] + pmm17[2]*Si1617[3][2];
pm17[4]=pmm17[4]*Si1617[1][1] + pmm17[5]*Si1617[1][2];
pm17[5]=-pmm17[6];
pm17[6]=pmm17[4]*Si1617[3][1] + pmm17[5]*Si1617[3][2];

p16[1]=pm17[1] + pv16[1];
p16[2]=pm17[2] + pv16[2];
p16[3]=pm17[3] + pv16[3];
p16[4]=pm17[4] + pv16[4];
p16[5]=pm17[5] + pv16[5];
p16[6]=pm17[6] + pv16[6];

u[16]=0. + state[8].u - c16[4]*h16[1] - c16[5]*h16[2] - c16[1]*h16[4] - c16[2]*h16[5] - p16[6];

pmm16[1]=p16[1] + (h16[1]*u[16])/d[16] + c16[1]*JA16[1][1] + c16[2]*JA16[1][2] + c16[4]*JA16[1][4] + c16[5]*JA16[1][5];
pmm16[2]=p16[2] + (h16[2]*u[16])/d[16] + c16[1]*JA16[2][1] + c16[2]*JA16[2][2] + c16[4]*JA16[2][4] + c16[5]*JA16[2][5];
pmm16[3]=p16[3] + (h16[3]*u[16])/d[16] + c16[1]*JA16[3][1] + c16[2]*JA16[3][2] + c16[4]*JA16[3][4] + c16[5]*JA16[3][5];
pmm16[4]=p16[4] + (h16[4]*u[16])/d[16] + c16[1]*JA16[4][1] + c16[2]*JA16[4][2] + c16[4]*JA16[4][4] + c16[5]*JA16[4][5];
pmm16[5]=p16[5] + (h16[5]*u[16])/d[16] + c16[1]*JA16[5][1] + c16[2]*JA16[5][2] + c16[4]*JA16[5][4] + c16[5]*JA16[5][5];
pmm16[6]=p16[6] + (h16[6]*u[16])/d[16] + c16[1]*JA16[6][1] + c16[2]*JA16[6][2] + c16[4]*JA16[6][4] + c16[5]*JA16[6][5];

pm16[1]=pmm16[1]*Si1516[1][1] + pmm16[2]*Si1516[1][2];
pm16[2]=-pmm16[3];
pm16[3]=pmm16[1]*Si1516[3][1] + pmm16[2]*Si1516[3][2];
pm16[4]=pmm16[4]*Si1516[1][1] + pmm16[5]*Si1516[1][2];
pm16[5]=-pmm16[6];
pm16[6]=pmm16[4]*Si1516[3][1] + pmm16[5]*Si1516[3][2];

p15[1]=pm16[1] + pv15[1];
p15[2]=pm16[2] + pv15[2];
p15[3]=pm16[3] + pv15[3];
p15[4]=pm16[4] + pv15[4];
p15[5]=pm16[5] + pv15[5];
p15[6]=pm16[6] + pv15[6];

u[15]=0. + state[7].u - c15[4]*h15[1] - c15[5]*h15[2] - c15[1]*h15[4] - c15[2]*h15[5] - p15[6];

pmm15[1]=p15[1] + (h15[1]*u[15])/d[15] + c15[1]*JA15[1][1] + c15[2]*JA15[1][2] + c15[4]*JA15[1][4] + c15[5]*JA15[1][5];
pmm15[2]=p15[2] + (h15[2]*u[15])/d[15] + c15[1]*JA15[2][1] + c15[2]*JA15[2][2] + c15[4]*JA15[2][4] + c15[5]*JA15[2][5];
pmm15[3]=p15[3] + (h15[3]*u[15])/d[15] + c15[1]*JA15[3][1] + c15[2]*JA15[3][2] + c15[4]*JA15[3][4] + c15[5]*JA15[3][5];
pmm15[4]=p15[4] + (h15[4]*u[15])/d[15] + c15[1]*JA15[4][1] + c15[2]*JA15[4][2] + c15[4]*JA15[4][4] + c15[5]*JA15[4][5];
pmm15[5]=p15[5] + (h15[5]*u[15])/d[15] + c15[1]*JA15[5][1] + c15[2]*JA15[5][2] + c15[4]*JA15[5][4] + c15[5]*JA15[5][5];
pmm15[6]=p15[6] + (h15[6]*u[15])/d[15] + c15[1]*JA15[6][1] + c15[2]*JA15[6][2] + c15[4]*JA15[6][4] + c15[5]*JA15[6][5];

pm15[1]=pmm15[1]*Si315[1][1] + pmm15[2]*Si315[1][2];
pm15[2]=pmm15[3];
pm15[3]=pmm15[1]*Si315[3][1] + pmm15[2]*Si315[3][2];
pm15[4]=LEGLINK1*pmm15[3] + pmm15[4]*Si315[1][1] + pmm15[5]*Si315[1][2] - WAISTLINK1*pmm15[1]*Si315[3][1] - WAISTLINK1*pmm15[2]*Si315[3][2];
pm15[5]=pmm15[6] + pmm15[1]*(-(LEGLINK1*Si315[1][1]) + WAISTLINK2*Si315[3][1]) + pmm15[2]*(-(LEGLINK1*Si315[1][2]) + WAISTLINK2*Si315[3][2]);
pm15[6]=-(WAISTLINK2*pmm15[3]) + WAISTLINK1*pmm15[1]*Si315[1][1] + WAISTLINK1*pmm15[2]*Si315[1][2] + pmm15[4]*Si315[3][1] + pmm15[5]*Si315[3][2];

p14[1]=pv14[1];
p14[2]=pv14[2];
p14[3]=pv14[3];
p14[4]=pv14[4];
p14[5]=pv14[5];
p14[6]=pv14[6];

pmm14[1]=p14[1];
pmm14[2]=p14[2];
pmm14[3]=p14[3];
pmm14[4]=p14[4];
pmm14[5]=p14[5];
pmm14[6]=p14[6];

pm14[1]=pmm14[1]*Si914[1][1] + pmm14[2]*Si914[1][2] + pmm14[3]*Si914[1][3];
pm14[2]=pmm14[1]*Si914[2][1] + pmm14[2]*Si914[2][2] + pmm14[3]*Si914[2][3];
pm14[3]=pmm14[1]*Si914[3][1] + pmm14[2]*Si914[3][2] + pmm14[3]*Si914[3][3];
pm14[4]=pmm14[4]*Si914[1][1] + pmm14[5]*Si914[1][2] + pmm14[6]*Si914[1][3] + pmm14[1]*(-(eff[1].x[3]*Si914[2][1]) + eff[1].x[2]*Si914[3][1]) + pmm14[2]*(-(eff[1].x[3]*Si914[2][2]) + eff[1].x[2]*Si914[3][2]) + pmm14[3]*(-(eff[1].x[3]*Si914[2][3]) + eff[1].x[2]*Si914[3][3]);
pm14[5]=pmm14[4]*Si914[2][1] + pmm14[5]*Si914[2][2] + pmm14[6]*Si914[2][3] + pmm14[1]*(eff[1].x[3]*Si914[1][1] - eff[1].x[1]*Si914[3][1]) + pmm14[2]*(eff[1].x[3]*Si914[1][2] - eff[1].x[1]*Si914[3][2]) + pmm14[3]*(eff[1].x[3]*Si914[1][3] - eff[1].x[1]*Si914[3][3]);
pm14[6]=pmm14[1]*(-(eff[1].x[2]*Si914[1][1]) + eff[1].x[1]*Si914[2][1]) + pmm14[2]*(-(eff[1].x[2]*Si914[1][2]) + eff[1].x[1]*Si914[2][2]) + pmm14[3]*(-(eff[1].x[2]*Si914[1][3]) + eff[1].x[1]*Si914[2][3]) + pmm14[4]*Si914[3][1] + pmm14[5]*Si914[3][2] + pmm14[6]*Si914[3][3];

p9[1]=0. + pm14[1] + pv9[1];
p9[2]=0. + pm14[2] + pv9[2];
p9[3]=0. + pm14[3] + pv9[3];
p9[4]=0. + pm14[4] + pv9[4];
p9[5]=0. + pm14[5] + pv9[5];
p9[6]=0. + pm14[6] + pv9[6];

u[9]=0. + state[6].u - c9[4]*h9[1] - c9[5]*h9[2] - c9[1]*h9[4] - c9[2]*h9[5] - p9[6];

pmm9[1]=p9[1] + (h9[1]*u[9])/d[9] + c9[1]*JA9[1][1] + c9[2]*JA9[1][2] + c9[4]*JA9[1][4] + c9[5]*JA9[1][5];
pmm9[2]=p9[2] + (h9[2]*u[9])/d[9] + c9[1]*JA9[2][1] + c9[2]*JA9[2][2] + c9[4]*JA9[2][4] + c9[5]*JA9[2][5];
pmm9[3]=p9[3] + (h9[3]*u[9])/d[9] + c9[1]*JA9[3][1] + c9[2]*JA9[3][2] + c9[4]*JA9[3][4] + c9[5]*JA9[3][5];
pmm9[4]=p9[4] + (h9[4]*u[9])/d[9] + c9[1]*JA9[4][1] + c9[2]*JA9[4][2] + c9[4]*JA9[4][4] + c9[5]*JA9[4][5];
pmm9[5]=p9[5] + (h9[5]*u[9])/d[9] + c9[1]*JA9[5][1] + c9[2]*JA9[5][2] + c9[4]*JA9[5][4] + c9[5]*JA9[5][5];
pmm9[6]=p9[6] + (h9[6]*u[9])/d[9] + c9[1]*JA9[6][1] + c9[2]*JA9[6][2] + c9[4]*JA9[6][4] + c9[5]*JA9[6][5];

pm9[1]=pmm9[1]*Si89[1][1] + pmm9[2]*Si89[1][2];
pm9[2]=pmm9[3];
pm9[3]=pmm9[1]*Si89[3][1] + pmm9[2]*Si89[3][2];
pm9[4]=pmm9[4]*Si89[1][1] + pmm9[5]*Si89[1][2];
pm9[5]=pmm9[6];
pm9[6]=pmm9[4]*Si89[3][1] + pmm9[5]*Si89[3][2];

p8[1]=pm9[1] + pv8[1];
p8[2]=pm9[2] + pv8[2];
p8[3]=pm9[3] + pv8[3];
p8[4]=pm9[4] + pv8[4];
p8[5]=pm9[5] + pv8[5];
p8[6]=pm9[6] + pv8[6];

u[8]=0. + state[5].u - c8[4]*h8[1] - c8[5]*h8[2] - c8[1]*h8[4] - c8[2]*h8[5] - p8[6];

pmm8[1]=p8[1] + (h8[1]*u[8])/d[8] + c8[1]*JA8[1][1] + c8[2]*JA8[1][2] + c8[4]*JA8[1][4] + c8[5]*JA8[1][5];
pmm8[2]=p8[2] + (h8[2]*u[8])/d[8] + c8[1]*JA8[2][1] + c8[2]*JA8[2][2] + c8[4]*JA8[2][4] + c8[5]*JA8[2][5];
pmm8[3]=p8[3] + (h8[3]*u[8])/d[8] + c8[1]*JA8[3][1] + c8[2]*JA8[3][2] + c8[4]*JA8[3][4] + c8[5]*JA8[3][5];
pmm8[4]=p8[4] + (h8[4]*u[8])/d[8] + c8[1]*JA8[4][1] + c8[2]*JA8[4][2] + c8[4]*JA8[4][4] + c8[5]*JA8[4][5];
pmm8[5]=p8[5] + (h8[5]*u[8])/d[8] + c8[1]*JA8[5][1] + c8[2]*JA8[5][2] + c8[4]*JA8[5][4] + c8[5]*JA8[5][5];
pmm8[6]=p8[6] + (h8[6]*u[8])/d[8] + c8[1]*JA8[6][1] + c8[2]*JA8[6][2] + c8[4]*JA8[6][4] + c8[5]*JA8[6][5];

pm8[1]=pmm8[1]*Si78[1][1] + pmm8[2]*Si78[1][2];
pm8[2]=pmm8[1]*Si78[2][1] + pmm8[2]*Si78[2][2];
pm8[3]=pmm8[3];
pm8[4]=pmm8[4]*Si78[1][1] + pmm8[5]*Si78[1][2];
pm8[5]=LEGLINK3*pmm8[3] + pmm8[4]*Si78[2][1] + pmm8[5]*Si78[2][2];
pm8[6]=pmm8[6] - LEGLINK3*pmm8[1]*Si78[2][1] - LEGLINK3*pmm8[2]*Si78[2][2];

p7[1]=pm8[1] + pv7[1];
p7[2]=pm8[2] + pv7[2];
p7[3]=pm8[3] + pv7[3];
p7[4]=pm8[4] + pv7[4];
p7[5]=pm8[5] + pv7[5];
p7[6]=pm8[6] + pv7[6];

u[7]=0. + state[4].u - c7[4]*h7[1] - c7[5]*h7[2] - c7[1]*h7[4] - c7[2]*h7[5] - p7[6];

pmm7[1]=p7[1] + (h7[1]*u[7])/d[7] + c7[1]*JA7[1][1] + c7[2]*JA7[1][2] + c7[4]*JA7[1][4] + c7[5]*JA7[1][5];
pmm7[2]=p7[2] + (h7[2]*u[7])/d[7] + c7[1]*JA7[2][1] + c7[2]*JA7[2][2] + c7[4]*JA7[2][4] + c7[5]*JA7[2][5];
pmm7[3]=p7[3] + (h7[3]*u[7])/d[7] + c7[1]*JA7[3][1] + c7[2]*JA7[3][2] + c7[4]*JA7[3][4] + c7[5]*JA7[3][5];
pmm7[4]=p7[4] + (h7[4]*u[7])/d[7] + c7[1]*JA7[4][1] + c7[2]*JA7[4][2] + c7[4]*JA7[4][4] + c7[5]*JA7[4][5];
pmm7[5]=p7[5] + (h7[5]*u[7])/d[7] + c7[1]*JA7[5][1] + c7[2]*JA7[5][2] + c7[4]*JA7[5][4] + c7[5]*JA7[5][5];
pmm7[6]=p7[6] + (h7[6]*u[7])/d[7] + c7[1]*JA7[6][1] + c7[2]*JA7[6][2] + c7[4]*JA7[6][4] + c7[5]*JA7[6][5];

pm7[1]=pmm7[1]*Si67[1][1] + pmm7[2]*Si67[1][2];
pm7[2]=pmm7[1]*Si67[2][1] + pmm7[2]*Si67[2][2];
pm7[3]=pmm7[3];
pm7[4]=pmm7[4]*Si67[1][1] + pmm7[5]*Si67[1][2];
pm7[5]=LEGLINK2*pmm7[3] + pmm7[4]*Si67[2][1] + pmm7[5]*Si67[2][2];
pm7[6]=pmm7[6] - LEGLINK2*pmm7[1]*Si67[2][1] - LEGLINK2*pmm7[2]*Si67[2][2];

p6[1]=pm7[1] + pv6[1];
p6[2]=pm7[2] + pv6[2];
p6[3]=pm7[3] + pv6[3];
p6[4]=pm7[4] + pv6[4];
p6[5]=pm7[5] + pv6[5];
p6[6]=pm7[6] + pv6[6];

u[6]=0. + state[3].u - c6[4]*h6[1] - c6[5]*h6[2] - c6[1]*h6[4] - c6[2]*h6[5] - p6[6];

pmm6[1]=p6[1] + (h6[1]*u[6])/d[6] + c6[1]*JA6[1][1] + c6[2]*JA6[1][2] + c6[4]*JA6[1][4] + c6[5]*JA6[1][5];
pmm6[2]=p6[2] + (h6[2]*u[6])/d[6] + c6[1]*JA6[2][1] + c6[2]*JA6[2][2] + c6[4]*JA6[2][4] + c6[5]*JA6[2][5];
pmm6[3]=p6[3] + (h6[3]*u[6])/d[6] + c6[1]*JA6[3][1] + c6[2]*JA6[3][2] + c6[4]*JA6[3][4] + c6[5]*JA6[3][5];
pmm6[4]=p6[4] + (h6[4]*u[6])/d[6] + c6[1]*JA6[4][1] + c6[2]*JA6[4][2] + c6[4]*JA6[4][4] + c6[5]*JA6[4][5];
pmm6[5]=p6[5] + (h6[5]*u[6])/d[6] + c6[1]*JA6[5][1] + c6[2]*JA6[5][2] + c6[4]*JA6[5][4] + c6[5]*JA6[5][5];
pmm6[6]=p6[6] + (h6[6]*u[6])/d[6] + c6[1]*JA6[6][1] + c6[2]*JA6[6][2] + c6[4]*JA6[6][4] + c6[5]*JA6[6][5];

pm6[1]=pmm6[1]*Si56[1][1] + pmm6[2]*Si56[1][2];
pm6[2]=-pmm6[3];
pm6[3]=pmm6[1]*Si56[3][1] + pmm6[2]*Si56[3][2];
pm6[4]=pmm6[4]*Si56[1][1] + pmm6[5]*Si56[1][2];
pm6[5]=-pmm6[6];
pm6[6]=pmm6[4]*Si56[3][1] + pmm6[5]*Si56[3][2];

p5[1]=pm6[1] + pv5[1];
p5[2]=pm6[2] + pv5[2];
p5[3]=pm6[3] + pv5[3];
p5[4]=pm6[4] + pv5[4];
p5[5]=pm6[5] + pv5[5];
p5[6]=pm6[6] + pv5[6];

u[5]=0. + state[2].u - c5[4]*h5[1] - c5[5]*h5[2] - c5[1]*h5[4] - c5[2]*h5[5] - p5[6];

pmm5[1]=p5[1] + (h5[1]*u[5])/d[5] + c5[1]*JA5[1][1] + c5[2]*JA5[1][2] + c5[4]*JA5[1][4] + c5[5]*JA5[1][5];
pmm5[2]=p5[2] + (h5[2]*u[5])/d[5] + c5[1]*JA5[2][1] + c5[2]*JA5[2][2] + c5[4]*JA5[2][4] + c5[5]*JA5[2][5];
pmm5[3]=p5[3] + (h5[3]*u[5])/d[5] + c5[1]*JA5[3][1] + c5[2]*JA5[3][2] + c5[4]*JA5[3][4] + c5[5]*JA5[3][5];
pmm5[4]=p5[4] + (h5[4]*u[5])/d[5] + c5[1]*JA5[4][1] + c5[2]*JA5[4][2] + c5[4]*JA5[4][4] + c5[5]*JA5[4][5];
pmm5[5]=p5[5] + (h5[5]*u[5])/d[5] + c5[1]*JA5[5][1] + c5[2]*JA5[5][2] + c5[4]*JA5[5][4] + c5[5]*JA5[5][5];
pmm5[6]=p5[6] + (h5[6]*u[5])/d[5] + c5[1]*JA5[6][1] + c5[2]*JA5[6][2] + c5[4]*JA5[6][4] + c5[5]*JA5[6][5];

pm5[1]=pmm5[1]*Si45[1][1] + pmm5[2]*Si45[1][2];
pm5[2]=-pmm5[3];
pm5[3]=pmm5[1]*Si45[3][1] + pmm5[2]*Si45[3][2];
pm5[4]=pmm5[4]*Si45[1][1] + pmm5[5]*Si45[1][2];
pm5[5]=-pmm5[6];
pm5[6]=pmm5[4]*Si45[3][1] + pmm5[5]*Si45[3][2];

p4[1]=pm5[1] + pv4[1];
p4[2]=pm5[2] + pv4[2];
p4[3]=pm5[3] + pv4[3];
p4[4]=pm5[4] + pv4[4];
p4[5]=pm5[5] + pv4[5];
p4[6]=pm5[6] + pv4[6];

u[4]=0. + state[1].u - c4[4]*h4[1] - c4[5]*h4[2] - c4[1]*h4[4] - c4[2]*h4[5] - p4[6];

pmm4[1]=p4[1] + (h4[1]*u[4])/d[4] + c4[1]*JA4[1][1] + c4[2]*JA4[1][2] + c4[4]*JA4[1][4] + c4[5]*JA4[1][5];
pmm4[2]=p4[2] + (h4[2]*u[4])/d[4] + c4[1]*JA4[2][1] + c4[2]*JA4[2][2] + c4[4]*JA4[2][4] + c4[5]*JA4[2][5];
pmm4[3]=p4[3] + (h4[3]*u[4])/d[4] + c4[1]*JA4[3][1] + c4[2]*JA4[3][2] + c4[4]*JA4[3][4] + c4[5]*JA4[3][5];
pmm4[4]=p4[4] + (h4[4]*u[4])/d[4] + c4[1]*JA4[4][1] + c4[2]*JA4[4][2] + c4[4]*JA4[4][4] + c4[5]*JA4[4][5];
pmm4[5]=p4[5] + (h4[5]*u[4])/d[4] + c4[1]*JA4[5][1] + c4[2]*JA4[5][2] + c4[4]*JA4[5][4] + c4[5]*JA4[5][5];
pmm4[6]=p4[6] + (h4[6]*u[4])/d[4] + c4[1]*JA4[6][1] + c4[2]*JA4[6][2] + c4[4]*JA4[6][4] + c4[5]*JA4[6][5];

pm4[1]=pmm4[1]*Si34[1][1] + pmm4[2]*Si34[1][2];
pm4[2]=pmm4[3];
pm4[3]=pmm4[1]*Si34[3][1] + pmm4[2]*Si34[3][2];
pm4[4]=-(LEGLINK1*pmm4[3]) + pmm4[4]*Si34[1][1] + pmm4[5]*Si34[1][2] - WAISTLINK1*pmm4[1]*Si34[3][1] - WAISTLINK1*pmm4[2]*Si34[3][2];
pm4[5]=pmm4[6] + pmm4[1]*(LEGLINK1*Si34[1][1] + WAISTLINK2*Si34[3][1]) + pmm4[2]*(LEGLINK1*Si34[1][2] + WAISTLINK2*Si34[3][2]);
pm4[6]=-(WAISTLINK2*pmm4[3]) + WAISTLINK1*pmm4[1]*Si34[1][1] + WAISTLINK1*pmm4[2]*Si34[1][2] + pmm4[4]*Si34[3][1] + pmm4[5]*Si34[3][2];

p3[1]=pm15[1] + pm4[1] + pv3[1];
p3[2]=pm15[2] + pm4[2] + pv3[2];
p3[3]=pm15[3] + pm4[3] + pv3[3];
p3[4]=pm15[4] + pm4[4] + pv3[4];
p3[5]=pm15[5] + pm4[5] + pv3[5];
p3[6]=pm15[6] + pm4[6] + pv3[6];

u[3]=0. + state[13].u - c3[4]*h3[1] - c3[5]*h3[2] - c3[1]*h3[4] - c3[2]*h3[5] - p3[6];

pmm3[1]=p3[1] + (h3[1]*u[3])/d[3] + c3[1]*JA3[1][1] + c3[2]*JA3[1][2] + c3[4]*JA3[1][4] + c3[5]*JA3[1][5];
pmm3[2]=p3[2] + (h3[2]*u[3])/d[3] + c3[1]*JA3[2][1] + c3[2]*JA3[2][2] + c3[4]*JA3[2][4] + c3[5]*JA3[2][5];
pmm3[3]=p3[3] + (h3[3]*u[3])/d[3] + c3[1]*JA3[3][1] + c3[2]*JA3[3][2] + c3[4]*JA3[3][4] + c3[5]*JA3[3][5];
pmm3[4]=p3[4] + (h3[4]*u[3])/d[3] + c3[1]*JA3[4][1] + c3[2]*JA3[4][2] + c3[4]*JA3[4][4] + c3[5]*JA3[4][5];
pmm3[5]=p3[5] + (h3[5]*u[3])/d[3] + c3[1]*JA3[5][1] + c3[2]*JA3[5][2] + c3[4]*JA3[5][4] + c3[5]*JA3[5][5];
pmm3[6]=p3[6] + (h3[6]*u[3])/d[3] + c3[1]*JA3[6][1] + c3[2]*JA3[6][2] + c3[4]*JA3[6][4] + c3[5]*JA3[6][5];

pm3[1]=pmm3[1]*Si03[1][1] + pmm3[2]*Si03[1][2];
pm3[2]=-pmm3[3];
pm3[3]=pmm3[1]*Si03[3][1] + pmm3[2]*Si03[3][2];
pm3[4]=pmm3[4]*Si03[1][1] + pmm3[5]*Si03[1][2];
pm3[5]=-pmm3[6] - BODYLINK2*pmm3[1]*Si03[3][1] - BODYLINK2*pmm3[2]*Si03[3][2];
pm3[6]=-(BODYLINK2*pmm3[3]) + pmm3[4]*Si03[3][1] + pmm3[5]*Si03[3][2];

p2[1]=pv2[1];
p2[2]=pv2[2];
p2[3]=pv2[3];
p2[4]=pv2[4];
p2[5]=pv2[5];
p2[6]=pv2[6];

u[2]=0. + state[14].u - c2[4]*h2[1] - c2[5]*h2[2] - c2[1]*h2[4] - c2[2]*h2[5] - p2[6];

pmm2[1]=p2[1] + (h2[1]*u[2])/d[2] + c2[2]*JA2[1][2] + c2[4]*JA2[1][4];
pmm2[2]=p2[2] + (h2[2]*u[2])/d[2] + c2[1]*JA2[2][1] + c2[5]*JA2[2][5];
pmm2[3]=p2[3] + c2[1]*JA2[3][1] + c2[2]*JA2[3][2];
pmm2[4]=p2[4] + (h2[4]*u[2])/d[2] + c2[1]*JA2[4][1] + c2[2]*JA2[4][2] + c2[5]*JA2[4][5];
pmm2[5]=p2[5] + (h2[5]*u[2])/d[2] + c2[1]*JA2[5][1] + c2[2]*JA2[5][2] + c2[4]*JA2[5][4];
pmm2[6]=p2[6] + (h2[6]*u[2])/d[2] + c2[1]*JA2[6][1] + c2[2]*JA2[6][2] + c2[4]*JA2[6][4] + c2[5]*JA2[6][5];

pm2[1]=pmm2[1]*Si12[1][1] + pmm2[2]*Si12[1][2];
pm2[2]=pmm2[3];
pm2[3]=pmm2[1]*Si12[3][1] + pmm2[2]*Si12[3][2];
pm2[4]=pmm2[4]*Si12[1][1] + pmm2[5]*Si12[1][2] - ARMLINK1*pmm2[1]*Si12[3][1] - ARMLINK1*pmm2[2]*Si12[3][2];
pm2[5]=pmm2[6];
pm2[6]=ARMLINK1*pmm2[1]*Si12[1][1] + ARMLINK1*pmm2[2]*Si12[1][2] + pmm2[4]*Si12[3][1] + pmm2[5]*Si12[3][2];

p1[1]=0. + pm2[1];
p1[2]=0. + pm2[2];
p1[3]=0. + pm2[3];
p1[4]=0. + pm2[4];
p1[5]=0. + pm2[5];
p1[6]=0. + pm2[6];

pmm1[1]=p1[1];
pmm1[2]=p1[2];
pmm1[3]=p1[3];
pmm1[4]=p1[4];
pmm1[5]=p1[5];
pmm1[6]=p1[6];

pm1[1]=pmm1[1];
pm1[2]=pmm1[2];
pm1[3]=pmm1[3];
pm1[4]=-(BODYLINK1*pmm1[2]) + pmm1[4];
pm1[5]=BODYLINK1*pmm1[1] + pmm1[5];
pm1[6]=pmm1[6];

p0[1]=pm1[1] + pm3[1] + pv0[1];
p0[2]=pm1[2] + pm3[2] + pv0[2];
p0[3]=pm1[3] + pm3[3] + pv0[3];
p0[4]=pm1[4] + pm3[4] + pv0[4];
p0[5]=pm1[5] + pm3[5] + pv0[5];
p0[6]=pm1[6] + pm3[6] + pv0[6];


}

