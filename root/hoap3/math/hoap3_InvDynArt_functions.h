
void
hoap3_InvDynArtfunc1(void)
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


S32[1][1]=-sstate15th;
S32[1][3]=cstate15th;

S32[2][1]=-cstate15th;
S32[2][3]=-sstate15th;



S50[1][1]=cstate13th;
S50[1][3]=sstate13th;

S50[2][1]=-sstate13th;
S50[2][3]=cstate13th;


S65[1][1]=-sstate1th;
S65[1][3]=-cstate1th;

S65[2][1]=-cstate1th;
S65[2][3]=sstate1th;


S76[1][1]=-sstate2th;
S76[1][3]=cstate2th;

S76[2][1]=-cstate2th;
S76[2][3]=-sstate2th;


S87[1][1]=cstate3th;
S87[1][3]=sstate3th;

S87[2][1]=-sstate3th;
S87[2][3]=cstate3th;


S98[1][1]=cstate4th;
S98[1][2]=sstate4th;

S98[2][1]=-sstate4th;
S98[2][2]=cstate4th;


S109[1][1]=cstate5th;
S109[1][2]=sstate5th;

S109[2][1]=-sstate5th;
S109[2][2]=cstate5th;


S1110[1][1]=cstate6th;
S1110[1][3]=-sstate6th;

S1110[2][1]=-sstate6th;
S1110[2][3]=-cstate6th;






S1611[1][1]=rceff1a2*rceff1a3;
S1611[1][2]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
S1611[1][3]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;

S1611[2][1]=-(rceff1a2*rseff1a3);
S1611[2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
S1611[2][3]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;

S1611[3][1]=rseff1a2;
S1611[3][2]=-(rceff1a2*rseff1a1);
S1611[3][3]=rceff1a1*rceff1a2;


S175[1][1]=-sstate7th;
S175[1][3]=-cstate7th;

S175[2][1]=-cstate7th;
S175[2][3]=sstate7th;


S1817[1][1]=-sstate8th;
S1817[1][3]=cstate8th;

S1817[2][1]=-cstate8th;
S1817[2][3]=-sstate8th;


S1918[1][1]=cstate9th;
S1918[1][3]=sstate9th;

S1918[2][1]=-sstate9th;
S1918[2][3]=cstate9th;


S2019[1][1]=cstate10th;
S2019[1][2]=sstate10th;

S2019[2][1]=-sstate10th;
S2019[2][2]=cstate10th;


S2120[1][1]=cstate11th;
S2120[1][2]=sstate11th;

S2120[2][1]=-sstate11th;
S2120[2][2]=cstate11th;


S2221[1][1]=cstate12th;
S2221[1][3]=-sstate12th;

S2221[2][1]=-sstate12th;
S2221[2][3]=-cstate12th;






S2722[1][1]=rceff2a2*rceff2a3;
S2722[1][2]=rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3;
S2722[1][3]=-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3;

S2722[2][1]=-(rceff2a2*rseff2a3);
S2722[2][2]=rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3;
S2722[2][3]=rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3;

S2722[3][1]=rseff2a2;
S2722[3][2]=-(rceff2a2*rseff2a1);
S2722[3][3]=rceff2a1*rceff2a2;




}


void
hoap3_InvDynArtfunc2(void)
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


Si23[1][1]=-sstate15th;
Si23[1][2]=-cstate15th;

Si23[3][1]=cstate15th;
Si23[3][2]=-sstate15th;



Si05[1][1]=cstate13th;
Si05[1][2]=-sstate13th;

Si05[3][1]=sstate13th;
Si05[3][2]=cstate13th;


Si56[1][1]=-sstate1th;
Si56[1][2]=-cstate1th;

Si56[3][1]=-cstate1th;
Si56[3][2]=sstate1th;


Si67[1][1]=-sstate2th;
Si67[1][2]=-cstate2th;

Si67[3][1]=cstate2th;
Si67[3][2]=-sstate2th;


Si78[1][1]=cstate3th;
Si78[1][2]=-sstate3th;

Si78[3][1]=sstate3th;
Si78[3][2]=cstate3th;


Si89[1][1]=cstate4th;
Si89[1][2]=-sstate4th;

Si89[2][1]=sstate4th;
Si89[2][2]=cstate4th;


Si910[1][1]=cstate5th;
Si910[1][2]=-sstate5th;

Si910[2][1]=sstate5th;
Si910[2][2]=cstate5th;


Si1011[1][1]=cstate6th;
Si1011[1][2]=-sstate6th;

Si1011[3][1]=-sstate6th;
Si1011[3][2]=-cstate6th;






Si1116[1][1]=rceff1a2*rceff1a3;
Si1116[1][2]=-(rceff1a2*rseff1a3);
Si1116[1][3]=rseff1a2;

Si1116[2][1]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
Si1116[2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
Si1116[2][3]=-(rceff1a2*rseff1a1);

Si1116[3][1]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;
Si1116[3][2]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;
Si1116[3][3]=rceff1a1*rceff1a2;


Si517[1][1]=-sstate7th;
Si517[1][2]=-cstate7th;

Si517[3][1]=-cstate7th;
Si517[3][2]=sstate7th;


Si1718[1][1]=-sstate8th;
Si1718[1][2]=-cstate8th;

Si1718[3][1]=cstate8th;
Si1718[3][2]=-sstate8th;


Si1819[1][1]=cstate9th;
Si1819[1][2]=-sstate9th;

Si1819[3][1]=sstate9th;
Si1819[3][2]=cstate9th;


Si1920[1][1]=cstate10th;
Si1920[1][2]=-sstate10th;

Si1920[2][1]=sstate10th;
Si1920[2][2]=cstate10th;


Si2021[1][1]=cstate11th;
Si2021[1][2]=-sstate11th;

Si2021[2][1]=sstate11th;
Si2021[2][2]=cstate11th;


Si2122[1][1]=cstate12th;
Si2122[1][2]=-sstate12th;

Si2122[3][1]=-sstate12th;
Si2122[3][2]=-cstate12th;






Si2227[1][1]=rceff2a2*rceff2a3;
Si2227[1][2]=-(rceff2a2*rseff2a3);
Si2227[1][3]=rseff2a2;

Si2227[2][1]=rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3;
Si2227[2][2]=rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3;
Si2227[2][3]=-(rceff2a2*rseff2a1);

Si2227[3][1]=-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3;
Si2227[3][2]=rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3;
Si2227[3][3]=rceff2a1*rceff2a2;




}


void
hoap3_InvDynArtfunc3(void)
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


SG30[1][1]=S32[1][1]*SG20[1][1] + S32[1][3]*SG20[3][1];
SG30[1][2]=S32[1][1]*SG20[1][2] + S32[1][3]*SG20[3][2];
SG30[1][3]=S32[1][1]*SG20[1][3] + S32[1][3]*SG20[3][3];

SG30[2][1]=S32[2][1]*SG20[1][1] + S32[2][3]*SG20[3][1];
SG30[2][2]=S32[2][1]*SG20[1][2] + S32[2][3]*SG20[3][2];
SG30[2][3]=S32[2][1]*SG20[1][3] + S32[2][3]*SG20[3][3];

SG30[3][1]=-SG20[2][1];
SG30[3][2]=-SG20[2][2];
SG30[3][3]=-SG20[2][3];


SG40[1][1]=SG30[1][1];
SG40[1][2]=SG30[1][2];
SG40[1][3]=SG30[1][3];

SG40[2][1]=SG30[2][1];
SG40[2][2]=SG30[2][2];
SG40[2][3]=SG30[2][3];

SG40[3][1]=SG30[3][1];
SG40[3][2]=SG30[3][2];
SG40[3][3]=SG30[3][3];


SG50[1][1]=S00[1][1]*S50[1][1] + S00[3][1]*S50[1][3];
SG50[1][2]=S00[1][2]*S50[1][1] + S00[3][2]*S50[1][3];
SG50[1][3]=S00[1][3]*S50[1][1] + S00[3][3]*S50[1][3];

SG50[2][1]=S00[1][1]*S50[2][1] + S00[3][1]*S50[2][3];
SG50[2][2]=S00[1][2]*S50[2][1] + S00[3][2]*S50[2][3];
SG50[2][3]=S00[1][3]*S50[2][1] + S00[3][3]*S50[2][3];

SG50[3][1]=-S00[2][1];
SG50[3][2]=-S00[2][2];
SG50[3][3]=-S00[2][3];


SG60[1][1]=S65[1][1]*SG50[1][1] + S65[1][3]*SG50[3][1];
SG60[1][2]=S65[1][1]*SG50[1][2] + S65[1][3]*SG50[3][2];
SG60[1][3]=S65[1][1]*SG50[1][3] + S65[1][3]*SG50[3][3];

SG60[2][1]=S65[2][1]*SG50[1][1] + S65[2][3]*SG50[3][1];
SG60[2][2]=S65[2][1]*SG50[1][2] + S65[2][3]*SG50[3][2];
SG60[2][3]=S65[2][1]*SG50[1][3] + S65[2][3]*SG50[3][3];

SG60[3][1]=SG50[2][1];
SG60[3][2]=SG50[2][2];
SG60[3][3]=SG50[2][3];


SG70[1][1]=S76[1][1]*SG60[1][1] + S76[1][3]*SG60[3][1];
SG70[1][2]=S76[1][1]*SG60[1][2] + S76[1][3]*SG60[3][2];
SG70[1][3]=S76[1][1]*SG60[1][3] + S76[1][3]*SG60[3][3];

SG70[2][1]=S76[2][1]*SG60[1][1] + S76[2][3]*SG60[3][1];
SG70[2][2]=S76[2][1]*SG60[1][2] + S76[2][3]*SG60[3][2];
SG70[2][3]=S76[2][1]*SG60[1][3] + S76[2][3]*SG60[3][3];

SG70[3][1]=-SG60[2][1];
SG70[3][2]=-SG60[2][2];
SG70[3][3]=-SG60[2][3];


SG80[1][1]=S87[1][1]*SG70[1][1] + S87[1][3]*SG70[3][1];
SG80[1][2]=S87[1][1]*SG70[1][2] + S87[1][3]*SG70[3][2];
SG80[1][3]=S87[1][1]*SG70[1][3] + S87[1][3]*SG70[3][3];

SG80[2][1]=S87[2][1]*SG70[1][1] + S87[2][3]*SG70[3][1];
SG80[2][2]=S87[2][1]*SG70[1][2] + S87[2][3]*SG70[3][2];
SG80[2][3]=S87[2][1]*SG70[1][3] + S87[2][3]*SG70[3][3];

SG80[3][1]=-SG70[2][1];
SG80[3][2]=-SG70[2][2];
SG80[3][3]=-SG70[2][3];


SG90[1][1]=S98[1][1]*SG80[1][1] + S98[1][2]*SG80[2][1];
SG90[1][2]=S98[1][1]*SG80[1][2] + S98[1][2]*SG80[2][2];
SG90[1][3]=S98[1][1]*SG80[1][3] + S98[1][2]*SG80[2][3];

SG90[2][1]=S98[2][1]*SG80[1][1] + S98[2][2]*SG80[2][1];
SG90[2][2]=S98[2][1]*SG80[1][2] + S98[2][2]*SG80[2][2];
SG90[2][3]=S98[2][1]*SG80[1][3] + S98[2][2]*SG80[2][3];

SG90[3][1]=SG80[3][1];
SG90[3][2]=SG80[3][2];
SG90[3][3]=SG80[3][3];


SG100[1][1]=S109[1][1]*SG90[1][1] + S109[1][2]*SG90[2][1];
SG100[1][2]=S109[1][1]*SG90[1][2] + S109[1][2]*SG90[2][2];
SG100[1][3]=S109[1][1]*SG90[1][3] + S109[1][2]*SG90[2][3];

SG100[2][1]=S109[2][1]*SG90[1][1] + S109[2][2]*SG90[2][1];
SG100[2][2]=S109[2][1]*SG90[1][2] + S109[2][2]*SG90[2][2];
SG100[2][3]=S109[2][1]*SG90[1][3] + S109[2][2]*SG90[2][3];

SG100[3][1]=SG90[3][1];
SG100[3][2]=SG90[3][2];
SG100[3][3]=SG90[3][3];


SG110[1][1]=S1110[1][1]*SG100[1][1] + S1110[1][3]*SG100[3][1];
SG110[1][2]=S1110[1][1]*SG100[1][2] + S1110[1][3]*SG100[3][2];
SG110[1][3]=S1110[1][1]*SG100[1][3] + S1110[1][3]*SG100[3][3];

SG110[2][1]=S1110[2][1]*SG100[1][1] + S1110[2][3]*SG100[3][1];
SG110[2][2]=S1110[2][1]*SG100[1][2] + S1110[2][3]*SG100[3][2];
SG110[2][3]=S1110[2][1]*SG100[1][3] + S1110[2][3]*SG100[3][3];

SG110[3][1]=SG100[2][1];
SG110[3][2]=SG100[2][2];
SG110[3][3]=SG100[2][3];


SG120[1][1]=SG110[1][1];
SG120[1][2]=SG110[1][2];
SG120[1][3]=SG110[1][3];

SG120[2][1]=SG110[2][1];
SG120[2][2]=SG110[2][2];
SG120[2][3]=SG110[2][3];

SG120[3][1]=SG110[3][1];
SG120[3][2]=SG110[3][2];
SG120[3][3]=SG110[3][3];


SG130[1][1]=SG110[1][1];
SG130[1][2]=SG110[1][2];
SG130[1][3]=SG110[1][3];

SG130[2][1]=SG110[2][1];
SG130[2][2]=SG110[2][2];
SG130[2][3]=SG110[2][3];

SG130[3][1]=SG110[3][1];
SG130[3][2]=SG110[3][2];
SG130[3][3]=SG110[3][3];


SG140[1][1]=SG110[1][1];
SG140[1][2]=SG110[1][2];
SG140[1][3]=SG110[1][3];

SG140[2][1]=SG110[2][1];
SG140[2][2]=SG110[2][2];
SG140[2][3]=SG110[2][3];

SG140[3][1]=SG110[3][1];
SG140[3][2]=SG110[3][2];
SG140[3][3]=SG110[3][3];


SG150[1][1]=SG110[1][1];
SG150[1][2]=SG110[1][2];
SG150[1][3]=SG110[1][3];

SG150[2][1]=SG110[2][1];
SG150[2][2]=SG110[2][2];
SG150[2][3]=SG110[2][3];

SG150[3][1]=SG110[3][1];
SG150[3][2]=SG110[3][2];
SG150[3][3]=SG110[3][3];


SG160[1][1]=S1611[1][1]*SG110[1][1] + S1611[1][2]*SG110[2][1] + S1611[1][3]*SG110[3][1];
SG160[1][2]=S1611[1][1]*SG110[1][2] + S1611[1][2]*SG110[2][2] + S1611[1][3]*SG110[3][2];
SG160[1][3]=S1611[1][1]*SG110[1][3] + S1611[1][2]*SG110[2][3] + S1611[1][3]*SG110[3][3];

SG160[2][1]=S1611[2][1]*SG110[1][1] + S1611[2][2]*SG110[2][1] + S1611[2][3]*SG110[3][1];
SG160[2][2]=S1611[2][1]*SG110[1][2] + S1611[2][2]*SG110[2][2] + S1611[2][3]*SG110[3][2];
SG160[2][3]=S1611[2][1]*SG110[1][3] + S1611[2][2]*SG110[2][3] + S1611[2][3]*SG110[3][3];

SG160[3][1]=S1611[3][1]*SG110[1][1] + S1611[3][2]*SG110[2][1] + S1611[3][3]*SG110[3][1];
SG160[3][2]=S1611[3][1]*SG110[1][2] + S1611[3][2]*SG110[2][2] + S1611[3][3]*SG110[3][2];
SG160[3][3]=S1611[3][1]*SG110[1][3] + S1611[3][2]*SG110[2][3] + S1611[3][3]*SG110[3][3];


SG170[1][1]=S175[1][1]*SG50[1][1] + S175[1][3]*SG50[3][1];
SG170[1][2]=S175[1][1]*SG50[1][2] + S175[1][3]*SG50[3][2];
SG170[1][3]=S175[1][1]*SG50[1][3] + S175[1][3]*SG50[3][3];

SG170[2][1]=S175[2][1]*SG50[1][1] + S175[2][3]*SG50[3][1];
SG170[2][2]=S175[2][1]*SG50[1][2] + S175[2][3]*SG50[3][2];
SG170[2][3]=S175[2][1]*SG50[1][3] + S175[2][3]*SG50[3][3];

SG170[3][1]=SG50[2][1];
SG170[3][2]=SG50[2][2];
SG170[3][3]=SG50[2][3];


SG180[1][1]=S1817[1][1]*SG170[1][1] + S1817[1][3]*SG170[3][1];
SG180[1][2]=S1817[1][1]*SG170[1][2] + S1817[1][3]*SG170[3][2];
SG180[1][3]=S1817[1][1]*SG170[1][3] + S1817[1][3]*SG170[3][3];

SG180[2][1]=S1817[2][1]*SG170[1][1] + S1817[2][3]*SG170[3][1];
SG180[2][2]=S1817[2][1]*SG170[1][2] + S1817[2][3]*SG170[3][2];
SG180[2][3]=S1817[2][1]*SG170[1][3] + S1817[2][3]*SG170[3][3];

SG180[3][1]=-SG170[2][1];
SG180[3][2]=-SG170[2][2];
SG180[3][3]=-SG170[2][3];


SG190[1][1]=S1918[1][1]*SG180[1][1] + S1918[1][3]*SG180[3][1];
SG190[1][2]=S1918[1][1]*SG180[1][2] + S1918[1][3]*SG180[3][2];
SG190[1][3]=S1918[1][1]*SG180[1][3] + S1918[1][3]*SG180[3][3];

SG190[2][1]=S1918[2][1]*SG180[1][1] + S1918[2][3]*SG180[3][1];
SG190[2][2]=S1918[2][1]*SG180[1][2] + S1918[2][3]*SG180[3][2];
SG190[2][3]=S1918[2][1]*SG180[1][3] + S1918[2][3]*SG180[3][3];

SG190[3][1]=-SG180[2][1];
SG190[3][2]=-SG180[2][2];
SG190[3][3]=-SG180[2][3];


SG200[1][1]=S2019[1][1]*SG190[1][1] + S2019[1][2]*SG190[2][1];
SG200[1][2]=S2019[1][1]*SG190[1][2] + S2019[1][2]*SG190[2][2];
SG200[1][3]=S2019[1][1]*SG190[1][3] + S2019[1][2]*SG190[2][3];

SG200[2][1]=S2019[2][1]*SG190[1][1] + S2019[2][2]*SG190[2][1];
SG200[2][2]=S2019[2][1]*SG190[1][2] + S2019[2][2]*SG190[2][2];
SG200[2][3]=S2019[2][1]*SG190[1][3] + S2019[2][2]*SG190[2][3];

SG200[3][1]=SG190[3][1];
SG200[3][2]=SG190[3][2];
SG200[3][3]=SG190[3][3];


SG210[1][1]=S2120[1][1]*SG200[1][1] + S2120[1][2]*SG200[2][1];
SG210[1][2]=S2120[1][1]*SG200[1][2] + S2120[1][2]*SG200[2][2];
SG210[1][3]=S2120[1][1]*SG200[1][3] + S2120[1][2]*SG200[2][3];

SG210[2][1]=S2120[2][1]*SG200[1][1] + S2120[2][2]*SG200[2][1];
SG210[2][2]=S2120[2][1]*SG200[1][2] + S2120[2][2]*SG200[2][2];
SG210[2][3]=S2120[2][1]*SG200[1][3] + S2120[2][2]*SG200[2][3];

SG210[3][1]=SG200[3][1];
SG210[3][2]=SG200[3][2];
SG210[3][3]=SG200[3][3];


SG220[1][1]=S2221[1][1]*SG210[1][1] + S2221[1][3]*SG210[3][1];
SG220[1][2]=S2221[1][1]*SG210[1][2] + S2221[1][3]*SG210[3][2];
SG220[1][3]=S2221[1][1]*SG210[1][3] + S2221[1][3]*SG210[3][3];

SG220[2][1]=S2221[2][1]*SG210[1][1] + S2221[2][3]*SG210[3][1];
SG220[2][2]=S2221[2][1]*SG210[1][2] + S2221[2][3]*SG210[3][2];
SG220[2][3]=S2221[2][1]*SG210[1][3] + S2221[2][3]*SG210[3][3];

SG220[3][1]=SG210[2][1];
SG220[3][2]=SG210[2][2];
SG220[3][3]=SG210[2][3];


SG230[1][1]=SG220[1][1];
SG230[1][2]=SG220[1][2];
SG230[1][3]=SG220[1][3];

SG230[2][1]=SG220[2][1];
SG230[2][2]=SG220[2][2];
SG230[2][3]=SG220[2][3];

SG230[3][1]=SG220[3][1];
SG230[3][2]=SG220[3][2];
SG230[3][3]=SG220[3][3];


SG240[1][1]=SG220[1][1];
SG240[1][2]=SG220[1][2];
SG240[1][3]=SG220[1][3];

SG240[2][1]=SG220[2][1];
SG240[2][2]=SG220[2][2];
SG240[2][3]=SG220[2][3];

SG240[3][1]=SG220[3][1];
SG240[3][2]=SG220[3][2];
SG240[3][3]=SG220[3][3];


SG250[1][1]=SG220[1][1];
SG250[1][2]=SG220[1][2];
SG250[1][3]=SG220[1][3];

SG250[2][1]=SG220[2][1];
SG250[2][2]=SG220[2][2];
SG250[2][3]=SG220[2][3];

SG250[3][1]=SG220[3][1];
SG250[3][2]=SG220[3][2];
SG250[3][3]=SG220[3][3];


SG260[1][1]=SG220[1][1];
SG260[1][2]=SG220[1][2];
SG260[1][3]=SG220[1][3];

SG260[2][1]=SG220[2][1];
SG260[2][2]=SG220[2][2];
SG260[2][3]=SG220[2][3];

SG260[3][1]=SG220[3][1];
SG260[3][2]=SG220[3][2];
SG260[3][3]=SG220[3][3];


SG270[1][1]=S2722[1][1]*SG220[1][1] + S2722[1][2]*SG220[2][1] + S2722[1][3]*SG220[3][1];
SG270[1][2]=S2722[1][1]*SG220[1][2] + S2722[1][2]*SG220[2][2] + S2722[1][3]*SG220[3][2];
SG270[1][3]=S2722[1][1]*SG220[1][3] + S2722[1][2]*SG220[2][3] + S2722[1][3]*SG220[3][3];

SG270[2][1]=S2722[2][1]*SG220[1][1] + S2722[2][2]*SG220[2][1] + S2722[2][3]*SG220[3][1];
SG270[2][2]=S2722[2][1]*SG220[1][2] + S2722[2][2]*SG220[2][2] + S2722[2][3]*SG220[3][2];
SG270[2][3]=S2722[2][1]*SG220[1][3] + S2722[2][2]*SG220[2][3] + S2722[2][3]*SG220[3][3];

SG270[3][1]=S2722[3][1]*SG220[1][1] + S2722[3][2]*SG220[2][1] + S2722[3][3]*SG220[3][1];
SG270[3][2]=S2722[3][1]*SG220[1][2] + S2722[3][2]*SG220[2][2] + S2722[3][3]*SG220[3][2];
SG270[3][3]=S2722[3][1]*SG220[1][3] + S2722[3][2]*SG220[2][3] + S2722[3][3]*SG220[3][3];




}


void
hoap3_InvDynArtfunc4(void)
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

v3[1]=v2[1]*S32[1][1] + v2[3]*S32[1][3];
v3[2]=v2[1]*S32[2][1] + v2[3]*S32[2][3];
v3[3]=state[15].thd - v2[2];
v3[4]=v2[4]*S32[1][1] + v2[6]*S32[1][3];
v3[5]=v2[4]*S32[2][1] + v2[6]*S32[2][3];
v3[6]=-v2[5];

v4[1]=v3[1];
v4[2]=v3[2];
v4[3]=v3[3];
v4[4]=ARMLINK2*v3[2] + v3[4];
v4[5]=-(ARMLINK2*v3[1]) + v3[5];
v4[6]=v3[6];

v5[1]=v0[1]*S50[1][1] + v0[3]*S50[1][3];
v5[2]=v0[1]*S50[2][1] + v0[3]*S50[2][3];
v5[3]=state[13].thd - v0[2];
v5[4]=v0[4]*S50[1][1] - BODYLINK2*v0[2]*S50[1][3] + v0[6]*S50[1][3];
v5[5]=v0[4]*S50[2][1] - BODYLINK2*v0[2]*S50[2][3] + v0[6]*S50[2][3];
v5[6]=-(BODYLINK2*v0[3]) - v0[5];

v6[1]=v5[1]*S65[1][1] + v5[3]*S65[1][3];
v6[2]=v5[1]*S65[2][1] + v5[3]*S65[2][3];
v6[3]=state[1].thd + v5[2];
v6[4]=WAISTLINK1*v5[3]*S65[1][1] + v5[4]*S65[1][1] - WAISTLINK1*v5[1]*S65[1][3] + v5[6]*S65[1][3] + v5[2]*(LEGLINK1*S65[1][1] + WAISTLINK2*S65[1][3]);
v6[5]=WAISTLINK1*v5[3]*S65[2][1] + v5[4]*S65[2][1] - WAISTLINK1*v5[1]*S65[2][3] + v5[6]*S65[2][3] + v5[2]*(LEGLINK1*S65[2][1] + WAISTLINK2*S65[2][3]);
v6[6]=-(LEGLINK1*v5[1]) - WAISTLINK2*v5[3] + v5[5];

v7[1]=v6[1]*S76[1][1] + v6[3]*S76[1][3];
v7[2]=v6[1]*S76[2][1] + v6[3]*S76[2][3];
v7[3]=state[2].thd - v6[2];
v7[4]=v6[4]*S76[1][1] + v6[6]*S76[1][3];
v7[5]=v6[4]*S76[2][1] + v6[6]*S76[2][3];
v7[6]=-v6[5];

v8[1]=v7[1]*S87[1][1] + v7[3]*S87[1][3];
v8[2]=v7[1]*S87[2][1] + v7[3]*S87[2][3];
v8[3]=state[3].thd - v7[2];
v8[4]=v7[4]*S87[1][1] + v7[6]*S87[1][3];
v8[5]=v7[4]*S87[2][1] + v7[6]*S87[2][3];
v8[6]=-v7[5];

v9[1]=v8[1]*S98[1][1] + v8[2]*S98[1][2];
v9[2]=v8[1]*S98[2][1] + v8[2]*S98[2][2];
v9[3]=state[4].thd + v8[3];
v9[4]=v8[4]*S98[1][1] - LEGLINK2*v8[3]*S98[1][2] + v8[5]*S98[1][2];
v9[5]=v8[4]*S98[2][1] - LEGLINK2*v8[3]*S98[2][2] + v8[5]*S98[2][2];
v9[6]=LEGLINK2*v8[2] + v8[6];

v10[1]=v9[1]*S109[1][1] + v9[2]*S109[1][2];
v10[2]=v9[1]*S109[2][1] + v9[2]*S109[2][2];
v10[3]=state[5].thd + v9[3];
v10[4]=v9[4]*S109[1][1] - LEGLINK3*v9[3]*S109[1][2] + v9[5]*S109[1][2];
v10[5]=v9[4]*S109[2][1] - LEGLINK3*v9[3]*S109[2][2] + v9[5]*S109[2][2];
v10[6]=LEGLINK3*v9[2] + v9[6];

v11[1]=v10[1]*S1110[1][1] + v10[3]*S1110[1][3];
v11[2]=v10[1]*S1110[2][1] + v10[3]*S1110[2][3];
v11[3]=state[6].thd + v10[2];
v11[4]=v10[4]*S1110[1][1] + v10[6]*S1110[1][3];
v11[5]=v10[4]*S1110[2][1] + v10[6]*S1110[2][3];
v11[6]=v10[5];

v12[1]=v11[1];
v12[2]=v11[2];
v12[3]=v11[3];
v12[4]=FOOTLLENGLONG*v11[2] - FOOTWIDLONG*v11[3] + v11[4];
v12[5]=-(FOOTLLENGLONG*v11[1]) - LEGLINK4*v11[3] + v11[5];
v12[6]=FOOTWIDLONG*v11[1] + LEGLINK4*v11[2] + v11[6];

v13[1]=v11[1];
v13[2]=v11[2];
v13[3]=v11[3];
v13[4]=FOOTLLENGLONG*v11[2] + FOOTWIDSHORT*v11[3] + v11[4];
v13[5]=-(FOOTLLENGLONG*v11[1]) - LEGLINK4*v11[3] + v11[5];
v13[6]=-(FOOTWIDSHORT*v11[1]) + LEGLINK4*v11[2] + v11[6];

v14[1]=v11[1];
v14[2]=v11[2];
v14[3]=v11[3];
v14[4]=-(FOOTLENGSHORT*v11[2]) + FOOTWIDSHORT*v11[3] + v11[4];
v14[5]=FOOTLENGSHORT*v11[1] - LEGLINK4*v11[3] + v11[5];
v14[6]=-(FOOTWIDSHORT*v11[1]) + LEGLINK4*v11[2] + v11[6];

v15[1]=v11[1];
v15[2]=v11[2];
v15[3]=v11[3];
v15[4]=-(FOOTLENGSHORT*v11[2]) - FOOTWIDLONG*v11[3] + v11[4];
v15[5]=FOOTLENGSHORT*v11[1] - LEGLINK4*v11[3] + v11[5];
v15[6]=FOOTWIDLONG*v11[1] + LEGLINK4*v11[2] + v11[6];

v16[1]=v11[1]*S1611[1][1] + v11[2]*S1611[1][2] + v11[3]*S1611[1][3];
v16[2]=v11[1]*S1611[2][1] + v11[2]*S1611[2][2] + v11[3]*S1611[2][3];
v16[3]=v11[1]*S1611[3][1] + v11[2]*S1611[3][2] + v11[3]*S1611[3][3];
v16[4]=v11[4]*S1611[1][1] + v11[5]*S1611[1][2] + v11[3]*(-(eff[1].x[2]*S1611[1][1]) + eff[1].x[1]*S1611[1][2]) + v11[6]*S1611[1][3] + v11[2]*(eff[1].x[3]*S1611[1][1] - eff[1].x[1]*S1611[1][3]) + v11[1]*(-(eff[1].x[3]*S1611[1][2]) + eff[1].x[2]*S1611[1][3]);
v16[5]=v11[4]*S1611[2][1] + v11[5]*S1611[2][2] + v11[3]*(-(eff[1].x[2]*S1611[2][1]) + eff[1].x[1]*S1611[2][2]) + v11[6]*S1611[2][3] + v11[2]*(eff[1].x[3]*S1611[2][1] - eff[1].x[1]*S1611[2][3]) + v11[1]*(-(eff[1].x[3]*S1611[2][2]) + eff[1].x[2]*S1611[2][3]);
v16[6]=v11[4]*S1611[3][1] + v11[5]*S1611[3][2] + v11[3]*(-(eff[1].x[2]*S1611[3][1]) + eff[1].x[1]*S1611[3][2]) + v11[6]*S1611[3][3] + v11[2]*(eff[1].x[3]*S1611[3][1] - eff[1].x[1]*S1611[3][3]) + v11[1]*(-(eff[1].x[3]*S1611[3][2]) + eff[1].x[2]*S1611[3][3]);

v17[1]=v5[1]*S175[1][1] + v5[3]*S175[1][3];
v17[2]=v5[1]*S175[2][1] + v5[3]*S175[2][3];
v17[3]=state[7].thd + v5[2];
v17[4]=WAISTLINK1*v5[3]*S175[1][1] + v5[4]*S175[1][1] - WAISTLINK1*v5[1]*S175[1][3] + v5[6]*S175[1][3] + v5[2]*(-(LEGLINK1*S175[1][1]) + WAISTLINK2*S175[1][3]);
v17[5]=WAISTLINK1*v5[3]*S175[2][1] + v5[4]*S175[2][1] - WAISTLINK1*v5[1]*S175[2][3] + v5[6]*S175[2][3] + v5[2]*(-(LEGLINK1*S175[2][1]) + WAISTLINK2*S175[2][3]);
v17[6]=LEGLINK1*v5[1] - WAISTLINK2*v5[3] + v5[5];

v18[1]=v17[1]*S1817[1][1] + v17[3]*S1817[1][3];
v18[2]=v17[1]*S1817[2][1] + v17[3]*S1817[2][3];
v18[3]=state[8].thd - v17[2];
v18[4]=v17[4]*S1817[1][1] + v17[6]*S1817[1][3];
v18[5]=v17[4]*S1817[2][1] + v17[6]*S1817[2][3];
v18[6]=-v17[5];

v19[1]=v18[1]*S1918[1][1] + v18[3]*S1918[1][3];
v19[2]=v18[1]*S1918[2][1] + v18[3]*S1918[2][3];
v19[3]=state[9].thd - v18[2];
v19[4]=v18[4]*S1918[1][1] + v18[6]*S1918[1][3];
v19[5]=v18[4]*S1918[2][1] + v18[6]*S1918[2][3];
v19[6]=-v18[5];

v20[1]=v19[1]*S2019[1][1] + v19[2]*S2019[1][2];
v20[2]=v19[1]*S2019[2][1] + v19[2]*S2019[2][2];
v20[3]=state[10].thd + v19[3];
v20[4]=v19[4]*S2019[1][1] - LEGLINK2*v19[3]*S2019[1][2] + v19[5]*S2019[1][2];
v20[5]=v19[4]*S2019[2][1] - LEGLINK2*v19[3]*S2019[2][2] + v19[5]*S2019[2][2];
v20[6]=LEGLINK2*v19[2] + v19[6];

v21[1]=v20[1]*S2120[1][1] + v20[2]*S2120[1][2];
v21[2]=v20[1]*S2120[2][1] + v20[2]*S2120[2][2];
v21[3]=state[11].thd + v20[3];
v21[4]=v20[4]*S2120[1][1] - LEGLINK3*v20[3]*S2120[1][2] + v20[5]*S2120[1][2];
v21[5]=v20[4]*S2120[2][1] - LEGLINK3*v20[3]*S2120[2][2] + v20[5]*S2120[2][2];
v21[6]=LEGLINK3*v20[2] + v20[6];

v22[1]=v21[1]*S2221[1][1] + v21[3]*S2221[1][3];
v22[2]=v21[1]*S2221[2][1] + v21[3]*S2221[2][3];
v22[3]=state[12].thd + v21[2];
v22[4]=v21[4]*S2221[1][1] + v21[6]*S2221[1][3];
v22[5]=v21[4]*S2221[2][1] + v21[6]*S2221[2][3];
v22[6]=v21[5];

v23[1]=v22[1];
v23[2]=v22[2];
v23[3]=v22[3];
v23[4]=FOOTLLENGLONG*v22[2] + FOOTWIDLONG*v22[3] + v22[4];
v23[5]=-(FOOTLLENGLONG*v22[1]) - LEGLINK4*v22[3] + v22[5];
v23[6]=-(FOOTWIDLONG*v22[1]) + LEGLINK4*v22[2] + v22[6];

v24[1]=v22[1];
v24[2]=v22[2];
v24[3]=v22[3];
v24[4]=FOOTLLENGLONG*v22[2] - FOOTWIDSHORT*v22[3] + v22[4];
v24[5]=-(FOOTLLENGLONG*v22[1]) - LEGLINK4*v22[3] + v22[5];
v24[6]=FOOTWIDSHORT*v22[1] + LEGLINK4*v22[2] + v22[6];

v25[1]=v22[1];
v25[2]=v22[2];
v25[3]=v22[3];
v25[4]=-(FOOTLENGSHORT*v22[2]) - FOOTWIDSHORT*v22[3] + v22[4];
v25[5]=FOOTLENGSHORT*v22[1] - LEGLINK4*v22[3] + v22[5];
v25[6]=FOOTWIDSHORT*v22[1] + LEGLINK4*v22[2] + v22[6];

v26[1]=v22[1];
v26[2]=v22[2];
v26[3]=v22[3];
v26[4]=-(FOOTLENGSHORT*v22[2]) + FOOTWIDLONG*v22[3] + v22[4];
v26[5]=FOOTLENGSHORT*v22[1] - LEGLINK4*v22[3] + v22[5];
v26[6]=-(FOOTWIDLONG*v22[1]) + LEGLINK4*v22[2] + v22[6];

v27[1]=v22[1]*S2722[1][1] + v22[2]*S2722[1][2] + v22[3]*S2722[1][3];
v27[2]=v22[1]*S2722[2][1] + v22[2]*S2722[2][2] + v22[3]*S2722[2][3];
v27[3]=v22[1]*S2722[3][1] + v22[2]*S2722[3][2] + v22[3]*S2722[3][3];
v27[4]=v22[4]*S2722[1][1] + v22[5]*S2722[1][2] + v22[3]*(-(eff[2].x[2]*S2722[1][1]) + eff[2].x[1]*S2722[1][2]) + v22[6]*S2722[1][3] + v22[2]*(eff[2].x[3]*S2722[1][1] - eff[2].x[1]*S2722[1][3]) + v22[1]*(-(eff[2].x[3]*S2722[1][2]) + eff[2].x[2]*S2722[1][3]);
v27[5]=v22[4]*S2722[2][1] + v22[5]*S2722[2][2] + v22[3]*(-(eff[2].x[2]*S2722[2][1]) + eff[2].x[1]*S2722[2][2]) + v22[6]*S2722[2][3] + v22[2]*(eff[2].x[3]*S2722[2][1] - eff[2].x[1]*S2722[2][3]) + v22[1]*(-(eff[2].x[3]*S2722[2][2]) + eff[2].x[2]*S2722[2][3]);
v27[6]=v22[4]*S2722[3][1] + v22[5]*S2722[3][2] + v22[3]*(-(eff[2].x[2]*S2722[3][1]) + eff[2].x[1]*S2722[3][2]) + v22[6]*S2722[3][3] + v22[2]*(eff[2].x[3]*S2722[3][1] - eff[2].x[1]*S2722[3][3]) + v22[1]*(-(eff[2].x[3]*S2722[3][2]) + eff[2].x[2]*S2722[3][3]);



}


void
hoap3_InvDynArtfunc5(void)
     {
/* c-misc vectors */
c2[1]=state[14].thd*v2[2];
c2[2]=-(state[14].thd*v2[1]);
c2[4]=state[14].thd*v2[5];
c2[5]=-(state[14].thd*v2[4]);

c3[1]=state[15].thd*v3[2];
c3[2]=-(state[15].thd*v3[1]);
c3[4]=state[15].thd*v3[5];
c3[5]=-(state[15].thd*v3[4]);

c5[1]=state[13].thd*v5[2];
c5[2]=-(state[13].thd*v5[1]);
c5[4]=state[13].thd*v5[5];
c5[5]=-(state[13].thd*v5[4]);

c6[1]=state[1].thd*v6[2];
c6[2]=-(state[1].thd*v6[1]);
c6[4]=state[1].thd*v6[5];
c6[5]=-(state[1].thd*v6[4]);

c7[1]=state[2].thd*v7[2];
c7[2]=-(state[2].thd*v7[1]);
c7[4]=state[2].thd*v7[5];
c7[5]=-(state[2].thd*v7[4]);

c8[1]=state[3].thd*v8[2];
c8[2]=-(state[3].thd*v8[1]);
c8[4]=state[3].thd*v8[5];
c8[5]=-(state[3].thd*v8[4]);

c9[1]=state[4].thd*v9[2];
c9[2]=-(state[4].thd*v9[1]);
c9[4]=state[4].thd*v9[5];
c9[5]=-(state[4].thd*v9[4]);

c10[1]=state[5].thd*v10[2];
c10[2]=-(state[5].thd*v10[1]);
c10[4]=state[5].thd*v10[5];
c10[5]=-(state[5].thd*v10[4]);

c11[1]=state[6].thd*v11[2];
c11[2]=-(state[6].thd*v11[1]);
c11[4]=state[6].thd*v11[5];
c11[5]=-(state[6].thd*v11[4]);

c17[1]=state[7].thd*v17[2];
c17[2]=-(state[7].thd*v17[1]);
c17[4]=state[7].thd*v17[5];
c17[5]=-(state[7].thd*v17[4]);

c18[1]=state[8].thd*v18[2];
c18[2]=-(state[8].thd*v18[1]);
c18[4]=state[8].thd*v18[5];
c18[5]=-(state[8].thd*v18[4]);

c19[1]=state[9].thd*v19[2];
c19[2]=-(state[9].thd*v19[1]);
c19[4]=state[9].thd*v19[5];
c19[5]=-(state[9].thd*v19[4]);

c20[1]=state[10].thd*v20[2];
c20[2]=-(state[10].thd*v20[1]);
c20[4]=state[10].thd*v20[5];
c20[5]=-(state[10].thd*v20[4]);

c21[1]=state[11].thd*v21[2];
c21[2]=-(state[11].thd*v21[1]);
c21[4]=state[11].thd*v21[5];
c21[5]=-(state[11].thd*v21[4]);

c22[1]=state[12].thd*v22[2];
c22[2]=-(state[12].thd*v22[1]);
c22[4]=state[12].thd*v22[5];
c22[5]=-(state[12].thd*v22[4]);



}


void
hoap3_InvDynArtfunc6(void)
     {
/* pv-misc vectors */
pv0[1]=-uex[0].f[1] - links[0].mcm[1]*Power(v0[2],2) - links[0].mcm[1]*Power(v0[3],2) + v0[1]*(links[0].mcm[2]*v0[2] + links[0].mcm[3]*v0[3]) - links[0].m*v0[3]*v0[5] + links[0].m*v0[2]*v0[6] + gravity*links[0].m*S00[1][3];
pv0[2]=-uex[0].f[2] - links[0].mcm[2]*Power(v0[1],2) - links[0].mcm[2]*Power(v0[3],2) + v0[2]*(links[0].mcm[1]*v0[1] + links[0].mcm[3]*v0[3]) + links[0].m*v0[3]*v0[4] - links[0].m*v0[1]*v0[6] + gravity*links[0].m*S00[2][3];
pv0[3]=-uex[0].f[3] - links[0].mcm[3]*Power(v0[1],2) - links[0].mcm[3]*Power(v0[2],2) + (links[0].mcm[1]*v0[1] + links[0].mcm[2]*v0[2])*v0[3] - links[0].m*v0[2]*v0[4] + links[0].m*v0[1]*v0[5] + gravity*links[0].m*S00[3][3];
pv0[4]=-uex[0].t[1] + (-(links[0].mcm[2]*v0[2]) - links[0].mcm[3]*v0[3])*v0[4] + (links[0].mcm[1]*v0[3] + links[0].m*v0[5])*v0[6] + v0[5]*(links[0].mcm[1]*v0[2] - links[0].m*v0[6]) + v0[1]*(links[0].mcm[2]*v0[5] + links[0].mcm[3]*v0[6] - v0[3]*links[0].inertia[1][2] + v0[2]*links[0].inertia[1][3]) + v0[2]*(-(links[0].mcm[1]*v0[5]) - v0[3]*links[0].inertia[2][2] + v0[2]*links[0].inertia[2][3]) + v0[3]*(-(links[0].mcm[1]*v0[6]) - v0[3]*links[0].inertia[2][3] + v0[2]*links[0].inertia[3][3]) - gravity*links[0].mcm[3]*S00[2][3] + gravity*links[0].mcm[2]*S00[3][3];
pv0[5]=-uex[0].t[2] + (-(links[0].mcm[1]*v0[1]) - links[0].mcm[3]*v0[3])*v0[5] + (links[0].mcm[2]*v0[3] - links[0].m*v0[4])*v0[6] + v0[4]*(links[0].mcm[2]*v0[1] + links[0].m*v0[6]) + v0[1]*(-(links[0].mcm[2]*v0[4]) + v0[3]*links[0].inertia[1][1] - v0[1]*links[0].inertia[1][3]) + v0[2]*(links[0].mcm[1]*v0[4] + links[0].mcm[3]*v0[6] + v0[3]*links[0].inertia[1][2] - v0[1]*links[0].inertia[2][3]) + v0[3]*(-(links[0].mcm[2]*v0[6]) + v0[3]*links[0].inertia[1][3] - v0[1]*links[0].inertia[3][3]) + gravity*links[0].mcm[3]*S00[1][3] - gravity*links[0].mcm[1]*S00[3][3];
pv0[6]=-uex[0].t[3] + (links[0].mcm[3]*v0[2] + links[0].m*v0[4])*v0[5] + v0[4]*(links[0].mcm[3]*v0[1] - links[0].m*v0[5]) + (-(links[0].mcm[1]*v0[1]) - links[0].mcm[2]*v0[2])*v0[6] + v0[1]*(-(links[0].mcm[3]*v0[4]) - v0[2]*links[0].inertia[1][1] + v0[1]*links[0].inertia[1][2]) + v0[2]*(-(links[0].mcm[3]*v0[5]) - v0[2]*links[0].inertia[1][2] + v0[1]*links[0].inertia[2][2]) + v0[3]*(links[0].mcm[1]*v0[4] + links[0].mcm[2]*v0[5] - v0[2]*links[0].inertia[1][3] + v0[1]*links[0].inertia[2][3]) - gravity*links[0].mcm[2]*S00[1][3] + gravity*links[0].mcm[1]*S00[2][3];

pv2[1]=-(links[14].mcm[1]*Power(v2[2],2)) - links[14].mcm[1]*Power(v2[3],2) + v2[1]*(links[14].mcm[2]*v2[2] + links[14].mcm[3]*v2[3]) - links[14].m*v2[3]*v2[5] + links[14].m*v2[2]*v2[6] + gravity*links[14].m*SG20[1][3];
pv2[2]=-(links[14].mcm[2]*Power(v2[1],2)) - links[14].mcm[2]*Power(v2[3],2) + v2[2]*(links[14].mcm[1]*v2[1] + links[14].mcm[3]*v2[3]) + links[14].m*v2[3]*v2[4] - links[14].m*v2[1]*v2[6] + gravity*links[14].m*SG20[2][3];
pv2[3]=-(links[14].mcm[3]*Power(v2[1],2)) - links[14].mcm[3]*Power(v2[2],2) + (links[14].mcm[1]*v2[1] + links[14].mcm[2]*v2[2])*v2[3] - links[14].m*v2[2]*v2[4] + links[14].m*v2[1]*v2[5] + gravity*links[14].m*SG20[3][3];
pv2[4]=(-(links[14].mcm[2]*v2[2]) - links[14].mcm[3]*v2[3])*v2[4] + (links[14].mcm[1]*v2[3] + links[14].m*v2[5])*v2[6] + v2[5]*(links[14].mcm[1]*v2[2] - links[14].m*v2[6]) + v2[1]*(links[14].mcm[2]*v2[5] + links[14].mcm[3]*v2[6] - v2[3]*links[14].inertia[1][2] + v2[2]*links[14].inertia[1][3]) + v2[2]*(-(links[14].mcm[1]*v2[5]) - v2[3]*links[14].inertia[2][2] + v2[2]*links[14].inertia[2][3]) + v2[3]*(-(links[14].mcm[1]*v2[6]) - v2[3]*links[14].inertia[2][3] + v2[2]*links[14].inertia[3][3]) - gravity*links[14].mcm[3]*SG20[2][3] + gravity*links[14].mcm[2]*SG20[3][3];
pv2[5]=(-(links[14].mcm[1]*v2[1]) - links[14].mcm[3]*v2[3])*v2[5] + (links[14].mcm[2]*v2[3] - links[14].m*v2[4])*v2[6] + v2[4]*(links[14].mcm[2]*v2[1] + links[14].m*v2[6]) + v2[1]*(-(links[14].mcm[2]*v2[4]) + v2[3]*links[14].inertia[1][1] - v2[1]*links[14].inertia[1][3]) + v2[2]*(links[14].mcm[1]*v2[4] + links[14].mcm[3]*v2[6] + v2[3]*links[14].inertia[1][2] - v2[1]*links[14].inertia[2][3]) + v2[3]*(-(links[14].mcm[2]*v2[6]) + v2[3]*links[14].inertia[1][3] - v2[1]*links[14].inertia[3][3]) + gravity*links[14].mcm[3]*SG20[1][3] - gravity*links[14].mcm[1]*SG20[3][3];
pv2[6]=(links[14].mcm[3]*v2[2] + links[14].m*v2[4])*v2[5] + v2[4]*(links[14].mcm[3]*v2[1] - links[14].m*v2[5]) + (-(links[14].mcm[1]*v2[1]) - links[14].mcm[2]*v2[2])*v2[6] + v2[1]*(-(links[14].mcm[3]*v2[4]) - v2[2]*links[14].inertia[1][1] + v2[1]*links[14].inertia[1][2]) + v2[2]*(-(links[14].mcm[3]*v2[5]) - v2[2]*links[14].inertia[1][2] + v2[1]*links[14].inertia[2][2]) + v2[3]*(links[14].mcm[1]*v2[4] + links[14].mcm[2]*v2[5] - v2[2]*links[14].inertia[1][3] + v2[1]*links[14].inertia[2][3]) - gravity*links[14].mcm[2]*SG20[1][3] + gravity*links[14].mcm[1]*SG20[2][3];

pv3[1]=-uex[15].f[1] - links[15].mcm[1]*Power(v3[2],2) - links[15].mcm[1]*Power(v3[3],2) + v3[1]*(links[15].mcm[2]*v3[2] + links[15].mcm[3]*v3[3]) - links[15].m*v3[3]*v3[5] + links[15].m*v3[2]*v3[6] + gravity*links[15].m*SG30[1][3];
pv3[2]=-uex[15].f[2] - links[15].mcm[2]*Power(v3[1],2) - links[15].mcm[2]*Power(v3[3],2) + v3[2]*(links[15].mcm[1]*v3[1] + links[15].mcm[3]*v3[3]) + links[15].m*v3[3]*v3[4] - links[15].m*v3[1]*v3[6] + gravity*links[15].m*SG30[2][3];
pv3[3]=-uex[15].f[3] - links[15].mcm[3]*Power(v3[1],2) - links[15].mcm[3]*Power(v3[2],2) + (links[15].mcm[1]*v3[1] + links[15].mcm[2]*v3[2])*v3[3] - links[15].m*v3[2]*v3[4] + links[15].m*v3[1]*v3[5] + gravity*links[15].m*SG30[3][3];
pv3[4]=-uex[15].t[1] + (-(links[15].mcm[2]*v3[2]) - links[15].mcm[3]*v3[3])*v3[4] + (links[15].mcm[1]*v3[3] + links[15].m*v3[5])*v3[6] + v3[5]*(links[15].mcm[1]*v3[2] - links[15].m*v3[6]) + v3[1]*(links[15].mcm[2]*v3[5] + links[15].mcm[3]*v3[6] - v3[3]*links[15].inertia[1][2] + v3[2]*links[15].inertia[1][3]) + v3[2]*(-(links[15].mcm[1]*v3[5]) - v3[3]*links[15].inertia[2][2] + v3[2]*links[15].inertia[2][3]) + v3[3]*(-(links[15].mcm[1]*v3[6]) - v3[3]*links[15].inertia[2][3] + v3[2]*links[15].inertia[3][3]) - gravity*links[15].mcm[3]*SG30[2][3] + gravity*links[15].mcm[2]*SG30[3][3];
pv3[5]=-uex[15].t[2] + (-(links[15].mcm[1]*v3[1]) - links[15].mcm[3]*v3[3])*v3[5] + (links[15].mcm[2]*v3[3] - links[15].m*v3[4])*v3[6] + v3[4]*(links[15].mcm[2]*v3[1] + links[15].m*v3[6]) + v3[1]*(-(links[15].mcm[2]*v3[4]) + v3[3]*links[15].inertia[1][1] - v3[1]*links[15].inertia[1][3]) + v3[2]*(links[15].mcm[1]*v3[4] + links[15].mcm[3]*v3[6] + v3[3]*links[15].inertia[1][2] - v3[1]*links[15].inertia[2][3]) + v3[3]*(-(links[15].mcm[2]*v3[6]) + v3[3]*links[15].inertia[1][3] - v3[1]*links[15].inertia[3][3]) + gravity*links[15].mcm[3]*SG30[1][3] - gravity*links[15].mcm[1]*SG30[3][3];
pv3[6]=-uex[15].t[3] + (links[15].mcm[3]*v3[2] + links[15].m*v3[4])*v3[5] + v3[4]*(links[15].mcm[3]*v3[1] - links[15].m*v3[5]) + (-(links[15].mcm[1]*v3[1]) - links[15].mcm[2]*v3[2])*v3[6] + v3[1]*(-(links[15].mcm[3]*v3[4]) - v3[2]*links[15].inertia[1][1] + v3[1]*links[15].inertia[1][2]) + v3[2]*(-(links[15].mcm[3]*v3[5]) - v3[2]*links[15].inertia[1][2] + v3[1]*links[15].inertia[2][2]) + v3[3]*(links[15].mcm[1]*v3[4] + links[15].mcm[2]*v3[5] - v3[2]*links[15].inertia[1][3] + v3[1]*links[15].inertia[2][3]) - gravity*links[15].mcm[2]*SG30[1][3] + gravity*links[15].mcm[1]*SG30[2][3];

pv5[1]=-uex[13].f[1] - links[13].mcm[1]*Power(v5[2],2) - links[13].mcm[1]*Power(v5[3],2) + v5[1]*(links[13].mcm[2]*v5[2] + links[13].mcm[3]*v5[3]) - links[13].m*v5[3]*v5[5] + links[13].m*v5[2]*v5[6] + gravity*links[13].m*SG50[1][3];
pv5[2]=-uex[13].f[2] - links[13].mcm[2]*Power(v5[1],2) - links[13].mcm[2]*Power(v5[3],2) + v5[2]*(links[13].mcm[1]*v5[1] + links[13].mcm[3]*v5[3]) + links[13].m*v5[3]*v5[4] - links[13].m*v5[1]*v5[6] + gravity*links[13].m*SG50[2][3];
pv5[3]=-uex[13].f[3] - links[13].mcm[3]*Power(v5[1],2) - links[13].mcm[3]*Power(v5[2],2) + (links[13].mcm[1]*v5[1] + links[13].mcm[2]*v5[2])*v5[3] - links[13].m*v5[2]*v5[4] + links[13].m*v5[1]*v5[5] + gravity*links[13].m*SG50[3][3];
pv5[4]=-uex[13].t[1] + (-(links[13].mcm[2]*v5[2]) - links[13].mcm[3]*v5[3])*v5[4] + (links[13].mcm[1]*v5[3] + links[13].m*v5[5])*v5[6] + v5[5]*(links[13].mcm[1]*v5[2] - links[13].m*v5[6]) + v5[1]*(links[13].mcm[2]*v5[5] + links[13].mcm[3]*v5[6] - v5[3]*links[13].inertia[1][2] + v5[2]*links[13].inertia[1][3]) + v5[2]*(-(links[13].mcm[1]*v5[5]) - v5[3]*links[13].inertia[2][2] + v5[2]*links[13].inertia[2][3]) + v5[3]*(-(links[13].mcm[1]*v5[6]) - v5[3]*links[13].inertia[2][3] + v5[2]*links[13].inertia[3][3]) - gravity*links[13].mcm[3]*SG50[2][3] + gravity*links[13].mcm[2]*SG50[3][3];
pv5[5]=-uex[13].t[2] + (-(links[13].mcm[1]*v5[1]) - links[13].mcm[3]*v5[3])*v5[5] + (links[13].mcm[2]*v5[3] - links[13].m*v5[4])*v5[6] + v5[4]*(links[13].mcm[2]*v5[1] + links[13].m*v5[6]) + v5[1]*(-(links[13].mcm[2]*v5[4]) + v5[3]*links[13].inertia[1][1] - v5[1]*links[13].inertia[1][3]) + v5[2]*(links[13].mcm[1]*v5[4] + links[13].mcm[3]*v5[6] + v5[3]*links[13].inertia[1][2] - v5[1]*links[13].inertia[2][3]) + v5[3]*(-(links[13].mcm[2]*v5[6]) + v5[3]*links[13].inertia[1][3] - v5[1]*links[13].inertia[3][3]) + gravity*links[13].mcm[3]*SG50[1][3] - gravity*links[13].mcm[1]*SG50[3][3];
pv5[6]=-uex[13].t[3] + (links[13].mcm[3]*v5[2] + links[13].m*v5[4])*v5[5] + v5[4]*(links[13].mcm[3]*v5[1] - links[13].m*v5[5]) + (-(links[13].mcm[1]*v5[1]) - links[13].mcm[2]*v5[2])*v5[6] + v5[1]*(-(links[13].mcm[3]*v5[4]) - v5[2]*links[13].inertia[1][1] + v5[1]*links[13].inertia[1][2]) + v5[2]*(-(links[13].mcm[3]*v5[5]) - v5[2]*links[13].inertia[1][2] + v5[1]*links[13].inertia[2][2]) + v5[3]*(links[13].mcm[1]*v5[4] + links[13].mcm[2]*v5[5] - v5[2]*links[13].inertia[1][3] + v5[1]*links[13].inertia[2][3]) - gravity*links[13].mcm[2]*SG50[1][3] + gravity*links[13].mcm[1]*SG50[2][3];

pv6[1]=-uex[1].f[1] - links[1].mcm[1]*Power(v6[2],2) - links[1].mcm[1]*Power(v6[3],2) + v6[1]*(links[1].mcm[2]*v6[2] + links[1].mcm[3]*v6[3]) - links[1].m*v6[3]*v6[5] + links[1].m*v6[2]*v6[6] + gravity*links[1].m*SG60[1][3];
pv6[2]=-uex[1].f[2] - links[1].mcm[2]*Power(v6[1],2) - links[1].mcm[2]*Power(v6[3],2) + v6[2]*(links[1].mcm[1]*v6[1] + links[1].mcm[3]*v6[3]) + links[1].m*v6[3]*v6[4] - links[1].m*v6[1]*v6[6] + gravity*links[1].m*SG60[2][3];
pv6[3]=-uex[1].f[3] - links[1].mcm[3]*Power(v6[1],2) - links[1].mcm[3]*Power(v6[2],2) + (links[1].mcm[1]*v6[1] + links[1].mcm[2]*v6[2])*v6[3] - links[1].m*v6[2]*v6[4] + links[1].m*v6[1]*v6[5] + gravity*links[1].m*SG60[3][3];
pv6[4]=-uex[1].t[1] + (-(links[1].mcm[2]*v6[2]) - links[1].mcm[3]*v6[3])*v6[4] + (links[1].mcm[1]*v6[3] + links[1].m*v6[5])*v6[6] + v6[5]*(links[1].mcm[1]*v6[2] - links[1].m*v6[6]) + v6[1]*(links[1].mcm[2]*v6[5] + links[1].mcm[3]*v6[6] - v6[3]*links[1].inertia[1][2] + v6[2]*links[1].inertia[1][3]) + v6[2]*(-(links[1].mcm[1]*v6[5]) - v6[3]*links[1].inertia[2][2] + v6[2]*links[1].inertia[2][3]) + v6[3]*(-(links[1].mcm[1]*v6[6]) - v6[3]*links[1].inertia[2][3] + v6[2]*links[1].inertia[3][3]) - gravity*links[1].mcm[3]*SG60[2][3] + gravity*links[1].mcm[2]*SG60[3][3];
pv6[5]=-uex[1].t[2] + (-(links[1].mcm[1]*v6[1]) - links[1].mcm[3]*v6[3])*v6[5] + (links[1].mcm[2]*v6[3] - links[1].m*v6[4])*v6[6] + v6[4]*(links[1].mcm[2]*v6[1] + links[1].m*v6[6]) + v6[1]*(-(links[1].mcm[2]*v6[4]) + v6[3]*links[1].inertia[1][1] - v6[1]*links[1].inertia[1][3]) + v6[2]*(links[1].mcm[1]*v6[4] + links[1].mcm[3]*v6[6] + v6[3]*links[1].inertia[1][2] - v6[1]*links[1].inertia[2][3]) + v6[3]*(-(links[1].mcm[2]*v6[6]) + v6[3]*links[1].inertia[1][3] - v6[1]*links[1].inertia[3][3]) + gravity*links[1].mcm[3]*SG60[1][3] - gravity*links[1].mcm[1]*SG60[3][3];
pv6[6]=-uex[1].t[3] + (links[1].mcm[3]*v6[2] + links[1].m*v6[4])*v6[5] + v6[4]*(links[1].mcm[3]*v6[1] - links[1].m*v6[5]) + (-(links[1].mcm[1]*v6[1]) - links[1].mcm[2]*v6[2])*v6[6] + v6[1]*(-(links[1].mcm[3]*v6[4]) - v6[2]*links[1].inertia[1][1] + v6[1]*links[1].inertia[1][2]) + v6[2]*(-(links[1].mcm[3]*v6[5]) - v6[2]*links[1].inertia[1][2] + v6[1]*links[1].inertia[2][2]) + v6[3]*(links[1].mcm[1]*v6[4] + links[1].mcm[2]*v6[5] - v6[2]*links[1].inertia[1][3] + v6[1]*links[1].inertia[2][3]) - gravity*links[1].mcm[2]*SG60[1][3] + gravity*links[1].mcm[1]*SG60[2][3];

pv7[1]=-uex[2].f[1] - links[2].mcm[1]*Power(v7[2],2) - links[2].mcm[1]*Power(v7[3],2) + v7[1]*(links[2].mcm[2]*v7[2] + links[2].mcm[3]*v7[3]) - links[2].m*v7[3]*v7[5] + links[2].m*v7[2]*v7[6] + gravity*links[2].m*SG70[1][3];
pv7[2]=-uex[2].f[2] - links[2].mcm[2]*Power(v7[1],2) - links[2].mcm[2]*Power(v7[3],2) + v7[2]*(links[2].mcm[1]*v7[1] + links[2].mcm[3]*v7[3]) + links[2].m*v7[3]*v7[4] - links[2].m*v7[1]*v7[6] + gravity*links[2].m*SG70[2][3];
pv7[3]=-uex[2].f[3] - links[2].mcm[3]*Power(v7[1],2) - links[2].mcm[3]*Power(v7[2],2) + (links[2].mcm[1]*v7[1] + links[2].mcm[2]*v7[2])*v7[3] - links[2].m*v7[2]*v7[4] + links[2].m*v7[1]*v7[5] + gravity*links[2].m*SG70[3][3];
pv7[4]=-uex[2].t[1] + (-(links[2].mcm[2]*v7[2]) - links[2].mcm[3]*v7[3])*v7[4] + (links[2].mcm[1]*v7[3] + links[2].m*v7[5])*v7[6] + v7[5]*(links[2].mcm[1]*v7[2] - links[2].m*v7[6]) + v7[1]*(links[2].mcm[2]*v7[5] + links[2].mcm[3]*v7[6] - v7[3]*links[2].inertia[1][2] + v7[2]*links[2].inertia[1][3]) + v7[2]*(-(links[2].mcm[1]*v7[5]) - v7[3]*links[2].inertia[2][2] + v7[2]*links[2].inertia[2][3]) + v7[3]*(-(links[2].mcm[1]*v7[6]) - v7[3]*links[2].inertia[2][3] + v7[2]*links[2].inertia[3][3]) - gravity*links[2].mcm[3]*SG70[2][3] + gravity*links[2].mcm[2]*SG70[3][3];
pv7[5]=-uex[2].t[2] + (-(links[2].mcm[1]*v7[1]) - links[2].mcm[3]*v7[3])*v7[5] + (links[2].mcm[2]*v7[3] - links[2].m*v7[4])*v7[6] + v7[4]*(links[2].mcm[2]*v7[1] + links[2].m*v7[6]) + v7[1]*(-(links[2].mcm[2]*v7[4]) + v7[3]*links[2].inertia[1][1] - v7[1]*links[2].inertia[1][3]) + v7[2]*(links[2].mcm[1]*v7[4] + links[2].mcm[3]*v7[6] + v7[3]*links[2].inertia[1][2] - v7[1]*links[2].inertia[2][3]) + v7[3]*(-(links[2].mcm[2]*v7[6]) + v7[3]*links[2].inertia[1][3] - v7[1]*links[2].inertia[3][3]) + gravity*links[2].mcm[3]*SG70[1][3] - gravity*links[2].mcm[1]*SG70[3][3];
pv7[6]=-uex[2].t[3] + (links[2].mcm[3]*v7[2] + links[2].m*v7[4])*v7[5] + v7[4]*(links[2].mcm[3]*v7[1] - links[2].m*v7[5]) + (-(links[2].mcm[1]*v7[1]) - links[2].mcm[2]*v7[2])*v7[6] + v7[1]*(-(links[2].mcm[3]*v7[4]) - v7[2]*links[2].inertia[1][1] + v7[1]*links[2].inertia[1][2]) + v7[2]*(-(links[2].mcm[3]*v7[5]) - v7[2]*links[2].inertia[1][2] + v7[1]*links[2].inertia[2][2]) + v7[3]*(links[2].mcm[1]*v7[4] + links[2].mcm[2]*v7[5] - v7[2]*links[2].inertia[1][3] + v7[1]*links[2].inertia[2][3]) - gravity*links[2].mcm[2]*SG70[1][3] + gravity*links[2].mcm[1]*SG70[2][3];

pv8[1]=-uex[3].f[1] - links[3].mcm[1]*Power(v8[2],2) - links[3].mcm[1]*Power(v8[3],2) + v8[1]*(links[3].mcm[2]*v8[2] + links[3].mcm[3]*v8[3]) - links[3].m*v8[3]*v8[5] + links[3].m*v8[2]*v8[6] + gravity*links[3].m*SG80[1][3];
pv8[2]=-uex[3].f[2] - links[3].mcm[2]*Power(v8[1],2) - links[3].mcm[2]*Power(v8[3],2) + v8[2]*(links[3].mcm[1]*v8[1] + links[3].mcm[3]*v8[3]) + links[3].m*v8[3]*v8[4] - links[3].m*v8[1]*v8[6] + gravity*links[3].m*SG80[2][3];
pv8[3]=-uex[3].f[3] - links[3].mcm[3]*Power(v8[1],2) - links[3].mcm[3]*Power(v8[2],2) + (links[3].mcm[1]*v8[1] + links[3].mcm[2]*v8[2])*v8[3] - links[3].m*v8[2]*v8[4] + links[3].m*v8[1]*v8[5] + gravity*links[3].m*SG80[3][3];
pv8[4]=-uex[3].t[1] + (-(links[3].mcm[2]*v8[2]) - links[3].mcm[3]*v8[3])*v8[4] + (links[3].mcm[1]*v8[3] + links[3].m*v8[5])*v8[6] + v8[5]*(links[3].mcm[1]*v8[2] - links[3].m*v8[6]) + v8[1]*(links[3].mcm[2]*v8[5] + links[3].mcm[3]*v8[6] - v8[3]*links[3].inertia[1][2] + v8[2]*links[3].inertia[1][3]) + v8[2]*(-(links[3].mcm[1]*v8[5]) - v8[3]*links[3].inertia[2][2] + v8[2]*links[3].inertia[2][3]) + v8[3]*(-(links[3].mcm[1]*v8[6]) - v8[3]*links[3].inertia[2][3] + v8[2]*links[3].inertia[3][3]) - gravity*links[3].mcm[3]*SG80[2][3] + gravity*links[3].mcm[2]*SG80[3][3];
pv8[5]=-uex[3].t[2] + (-(links[3].mcm[1]*v8[1]) - links[3].mcm[3]*v8[3])*v8[5] + (links[3].mcm[2]*v8[3] - links[3].m*v8[4])*v8[6] + v8[4]*(links[3].mcm[2]*v8[1] + links[3].m*v8[6]) + v8[1]*(-(links[3].mcm[2]*v8[4]) + v8[3]*links[3].inertia[1][1] - v8[1]*links[3].inertia[1][3]) + v8[2]*(links[3].mcm[1]*v8[4] + links[3].mcm[3]*v8[6] + v8[3]*links[3].inertia[1][2] - v8[1]*links[3].inertia[2][3]) + v8[3]*(-(links[3].mcm[2]*v8[6]) + v8[3]*links[3].inertia[1][3] - v8[1]*links[3].inertia[3][3]) + gravity*links[3].mcm[3]*SG80[1][3] - gravity*links[3].mcm[1]*SG80[3][3];
pv8[6]=-uex[3].t[3] + (links[3].mcm[3]*v8[2] + links[3].m*v8[4])*v8[5] + v8[4]*(links[3].mcm[3]*v8[1] - links[3].m*v8[5]) + (-(links[3].mcm[1]*v8[1]) - links[3].mcm[2]*v8[2])*v8[6] + v8[1]*(-(links[3].mcm[3]*v8[4]) - v8[2]*links[3].inertia[1][1] + v8[1]*links[3].inertia[1][2]) + v8[2]*(-(links[3].mcm[3]*v8[5]) - v8[2]*links[3].inertia[1][2] + v8[1]*links[3].inertia[2][2]) + v8[3]*(links[3].mcm[1]*v8[4] + links[3].mcm[2]*v8[5] - v8[2]*links[3].inertia[1][3] + v8[1]*links[3].inertia[2][3]) - gravity*links[3].mcm[2]*SG80[1][3] + gravity*links[3].mcm[1]*SG80[2][3];

pv9[1]=-uex[4].f[1] - links[4].mcm[1]*Power(v9[2],2) - links[4].mcm[1]*Power(v9[3],2) + v9[1]*(links[4].mcm[2]*v9[2] + links[4].mcm[3]*v9[3]) - links[4].m*v9[3]*v9[5] + links[4].m*v9[2]*v9[6] + gravity*links[4].m*SG90[1][3];
pv9[2]=-uex[4].f[2] - links[4].mcm[2]*Power(v9[1],2) - links[4].mcm[2]*Power(v9[3],2) + v9[2]*(links[4].mcm[1]*v9[1] + links[4].mcm[3]*v9[3]) + links[4].m*v9[3]*v9[4] - links[4].m*v9[1]*v9[6] + gravity*links[4].m*SG90[2][3];
pv9[3]=-uex[4].f[3] - links[4].mcm[3]*Power(v9[1],2) - links[4].mcm[3]*Power(v9[2],2) + (links[4].mcm[1]*v9[1] + links[4].mcm[2]*v9[2])*v9[3] - links[4].m*v9[2]*v9[4] + links[4].m*v9[1]*v9[5] + gravity*links[4].m*SG90[3][3];
pv9[4]=-uex[4].t[1] + (-(links[4].mcm[2]*v9[2]) - links[4].mcm[3]*v9[3])*v9[4] + (links[4].mcm[1]*v9[3] + links[4].m*v9[5])*v9[6] + v9[5]*(links[4].mcm[1]*v9[2] - links[4].m*v9[6]) + v9[1]*(links[4].mcm[2]*v9[5] + links[4].mcm[3]*v9[6] - v9[3]*links[4].inertia[1][2] + v9[2]*links[4].inertia[1][3]) + v9[2]*(-(links[4].mcm[1]*v9[5]) - v9[3]*links[4].inertia[2][2] + v9[2]*links[4].inertia[2][3]) + v9[3]*(-(links[4].mcm[1]*v9[6]) - v9[3]*links[4].inertia[2][3] + v9[2]*links[4].inertia[3][3]) - gravity*links[4].mcm[3]*SG90[2][3] + gravity*links[4].mcm[2]*SG90[3][3];
pv9[5]=-uex[4].t[2] + (-(links[4].mcm[1]*v9[1]) - links[4].mcm[3]*v9[3])*v9[5] + (links[4].mcm[2]*v9[3] - links[4].m*v9[4])*v9[6] + v9[4]*(links[4].mcm[2]*v9[1] + links[4].m*v9[6]) + v9[1]*(-(links[4].mcm[2]*v9[4]) + v9[3]*links[4].inertia[1][1] - v9[1]*links[4].inertia[1][3]) + v9[2]*(links[4].mcm[1]*v9[4] + links[4].mcm[3]*v9[6] + v9[3]*links[4].inertia[1][2] - v9[1]*links[4].inertia[2][3]) + v9[3]*(-(links[4].mcm[2]*v9[6]) + v9[3]*links[4].inertia[1][3] - v9[1]*links[4].inertia[3][3]) + gravity*links[4].mcm[3]*SG90[1][3] - gravity*links[4].mcm[1]*SG90[3][3];
pv9[6]=-uex[4].t[3] + (links[4].mcm[3]*v9[2] + links[4].m*v9[4])*v9[5] + v9[4]*(links[4].mcm[3]*v9[1] - links[4].m*v9[5]) + (-(links[4].mcm[1]*v9[1]) - links[4].mcm[2]*v9[2])*v9[6] + v9[1]*(-(links[4].mcm[3]*v9[4]) - v9[2]*links[4].inertia[1][1] + v9[1]*links[4].inertia[1][2]) + v9[2]*(-(links[4].mcm[3]*v9[5]) - v9[2]*links[4].inertia[1][2] + v9[1]*links[4].inertia[2][2]) + v9[3]*(links[4].mcm[1]*v9[4] + links[4].mcm[2]*v9[5] - v9[2]*links[4].inertia[1][3] + v9[1]*links[4].inertia[2][3]) - gravity*links[4].mcm[2]*SG90[1][3] + gravity*links[4].mcm[1]*SG90[2][3];

pv10[1]=-uex[5].f[1] - links[5].mcm[1]*Power(v10[2],2) - links[5].mcm[1]*Power(v10[3],2) + v10[1]*(links[5].mcm[2]*v10[2] + links[5].mcm[3]*v10[3]) - links[5].m*v10[3]*v10[5] + links[5].m*v10[2]*v10[6] + gravity*links[5].m*SG100[1][3];
pv10[2]=-uex[5].f[2] - links[5].mcm[2]*Power(v10[1],2) - links[5].mcm[2]*Power(v10[3],2) + v10[2]*(links[5].mcm[1]*v10[1] + links[5].mcm[3]*v10[3]) + links[5].m*v10[3]*v10[4] - links[5].m*v10[1]*v10[6] + gravity*links[5].m*SG100[2][3];
pv10[3]=-uex[5].f[3] - links[5].mcm[3]*Power(v10[1],2) - links[5].mcm[3]*Power(v10[2],2) + (links[5].mcm[1]*v10[1] + links[5].mcm[2]*v10[2])*v10[3] - links[5].m*v10[2]*v10[4] + links[5].m*v10[1]*v10[5] + gravity*links[5].m*SG100[3][3];
pv10[4]=-uex[5].t[1] + (-(links[5].mcm[2]*v10[2]) - links[5].mcm[3]*v10[3])*v10[4] + (links[5].mcm[1]*v10[3] + links[5].m*v10[5])*v10[6] + v10[5]*(links[5].mcm[1]*v10[2] - links[5].m*v10[6]) + v10[1]*(links[5].mcm[2]*v10[5] + links[5].mcm[3]*v10[6] - v10[3]*links[5].inertia[1][2] + v10[2]*links[5].inertia[1][3]) + v10[2]*(-(links[5].mcm[1]*v10[5]) - v10[3]*links[5].inertia[2][2] + v10[2]*links[5].inertia[2][3]) + v10[3]*(-(links[5].mcm[1]*v10[6]) - v10[3]*links[5].inertia[2][3] + v10[2]*links[5].inertia[3][3]) - gravity*links[5].mcm[3]*SG100[2][3] + gravity*links[5].mcm[2]*SG100[3][3];
pv10[5]=-uex[5].t[2] + (-(links[5].mcm[1]*v10[1]) - links[5].mcm[3]*v10[3])*v10[5] + (links[5].mcm[2]*v10[3] - links[5].m*v10[4])*v10[6] + v10[4]*(links[5].mcm[2]*v10[1] + links[5].m*v10[6]) + v10[1]*(-(links[5].mcm[2]*v10[4]) + v10[3]*links[5].inertia[1][1] - v10[1]*links[5].inertia[1][3]) + v10[2]*(links[5].mcm[1]*v10[4] + links[5].mcm[3]*v10[6] + v10[3]*links[5].inertia[1][2] - v10[1]*links[5].inertia[2][3]) + v10[3]*(-(links[5].mcm[2]*v10[6]) + v10[3]*links[5].inertia[1][3] - v10[1]*links[5].inertia[3][3]) + gravity*links[5].mcm[3]*SG100[1][3] - gravity*links[5].mcm[1]*SG100[3][3];
pv10[6]=-uex[5].t[3] + (links[5].mcm[3]*v10[2] + links[5].m*v10[4])*v10[5] + v10[4]*(links[5].mcm[3]*v10[1] - links[5].m*v10[5]) + (-(links[5].mcm[1]*v10[1]) - links[5].mcm[2]*v10[2])*v10[6] + v10[1]*(-(links[5].mcm[3]*v10[4]) - v10[2]*links[5].inertia[1][1] + v10[1]*links[5].inertia[1][2]) + v10[2]*(-(links[5].mcm[3]*v10[5]) - v10[2]*links[5].inertia[1][2] + v10[1]*links[5].inertia[2][2]) + v10[3]*(links[5].mcm[1]*v10[4] + links[5].mcm[2]*v10[5] - v10[2]*links[5].inertia[1][3] + v10[1]*links[5].inertia[2][3]) - gravity*links[5].mcm[2]*SG100[1][3] + gravity*links[5].mcm[1]*SG100[2][3];

pv11[1]=-uex[6].f[1] - links[6].mcm[1]*Power(v11[2],2) - links[6].mcm[1]*Power(v11[3],2) + v11[1]*(links[6].mcm[2]*v11[2] + links[6].mcm[3]*v11[3]) - links[6].m*v11[3]*v11[5] + links[6].m*v11[2]*v11[6] + gravity*links[6].m*SG110[1][3];
pv11[2]=-uex[6].f[2] - links[6].mcm[2]*Power(v11[1],2) - links[6].mcm[2]*Power(v11[3],2) + v11[2]*(links[6].mcm[1]*v11[1] + links[6].mcm[3]*v11[3]) + links[6].m*v11[3]*v11[4] - links[6].m*v11[1]*v11[6] + gravity*links[6].m*SG110[2][3];
pv11[3]=-uex[6].f[3] - links[6].mcm[3]*Power(v11[1],2) - links[6].mcm[3]*Power(v11[2],2) + (links[6].mcm[1]*v11[1] + links[6].mcm[2]*v11[2])*v11[3] - links[6].m*v11[2]*v11[4] + links[6].m*v11[1]*v11[5] + gravity*links[6].m*SG110[3][3];
pv11[4]=-uex[6].t[1] + (-(links[6].mcm[2]*v11[2]) - links[6].mcm[3]*v11[3])*v11[4] + (links[6].mcm[1]*v11[3] + links[6].m*v11[5])*v11[6] + v11[5]*(links[6].mcm[1]*v11[2] - links[6].m*v11[6]) + v11[1]*(links[6].mcm[2]*v11[5] + links[6].mcm[3]*v11[6] - v11[3]*links[6].inertia[1][2] + v11[2]*links[6].inertia[1][3]) + v11[2]*(-(links[6].mcm[1]*v11[5]) - v11[3]*links[6].inertia[2][2] + v11[2]*links[6].inertia[2][3]) + v11[3]*(-(links[6].mcm[1]*v11[6]) - v11[3]*links[6].inertia[2][3] + v11[2]*links[6].inertia[3][3]) - gravity*links[6].mcm[3]*SG110[2][3] + gravity*links[6].mcm[2]*SG110[3][3];
pv11[5]=-uex[6].t[2] + (-(links[6].mcm[1]*v11[1]) - links[6].mcm[3]*v11[3])*v11[5] + (links[6].mcm[2]*v11[3] - links[6].m*v11[4])*v11[6] + v11[4]*(links[6].mcm[2]*v11[1] + links[6].m*v11[6]) + v11[1]*(-(links[6].mcm[2]*v11[4]) + v11[3]*links[6].inertia[1][1] - v11[1]*links[6].inertia[1][3]) + v11[2]*(links[6].mcm[1]*v11[4] + links[6].mcm[3]*v11[6] + v11[3]*links[6].inertia[1][2] - v11[1]*links[6].inertia[2][3]) + v11[3]*(-(links[6].mcm[2]*v11[6]) + v11[3]*links[6].inertia[1][3] - v11[1]*links[6].inertia[3][3]) + gravity*links[6].mcm[3]*SG110[1][3] - gravity*links[6].mcm[1]*SG110[3][3];
pv11[6]=-uex[6].t[3] + (links[6].mcm[3]*v11[2] + links[6].m*v11[4])*v11[5] + v11[4]*(links[6].mcm[3]*v11[1] - links[6].m*v11[5]) + (-(links[6].mcm[1]*v11[1]) - links[6].mcm[2]*v11[2])*v11[6] + v11[1]*(-(links[6].mcm[3]*v11[4]) - v11[2]*links[6].inertia[1][1] + v11[1]*links[6].inertia[1][2]) + v11[2]*(-(links[6].mcm[3]*v11[5]) - v11[2]*links[6].inertia[1][2] + v11[1]*links[6].inertia[2][2]) + v11[3]*(links[6].mcm[1]*v11[4] + links[6].mcm[2]*v11[5] - v11[2]*links[6].inertia[1][3] + v11[1]*links[6].inertia[2][3]) - gravity*links[6].mcm[2]*SG110[1][3] + gravity*links[6].mcm[1]*SG110[2][3];

pv16[1]=-(eff[1].mcm[1]*Power(v16[2],2)) - eff[1].mcm[1]*Power(v16[3],2) + v16[1]*(eff[1].mcm[2]*v16[2] + eff[1].mcm[3]*v16[3]) - eff[1].m*v16[3]*v16[5] + eff[1].m*v16[2]*v16[6] + eff[1].m*gravity*SG160[1][3];
pv16[2]=-(eff[1].mcm[2]*Power(v16[1],2)) - eff[1].mcm[2]*Power(v16[3],2) + v16[2]*(eff[1].mcm[1]*v16[1] + eff[1].mcm[3]*v16[3]) + eff[1].m*v16[3]*v16[4] - eff[1].m*v16[1]*v16[6] + eff[1].m*gravity*SG160[2][3];
pv16[3]=-(eff[1].mcm[3]*Power(v16[1],2)) - eff[1].mcm[3]*Power(v16[2],2) + (eff[1].mcm[1]*v16[1] + eff[1].mcm[2]*v16[2])*v16[3] - eff[1].m*v16[2]*v16[4] + eff[1].m*v16[1]*v16[5] + eff[1].m*gravity*SG160[3][3];
pv16[4]=(-(eff[1].mcm[2]*v16[2]) - eff[1].mcm[3]*v16[3])*v16[4] - eff[1].mcm[1]*v16[2]*v16[5] - eff[1].mcm[1]*v16[3]*v16[6] + (eff[1].mcm[1]*v16[3] + eff[1].m*v16[5])*v16[6] + v16[5]*(eff[1].mcm[1]*v16[2] - eff[1].m*v16[6]) + v16[1]*(eff[1].mcm[2]*v16[5] + eff[1].mcm[3]*v16[6]) - gravity*eff[1].mcm[3]*SG160[2][3] + gravity*eff[1].mcm[2]*SG160[3][3];
pv16[5]=-(eff[1].mcm[2]*v16[1]*v16[4]) + (-(eff[1].mcm[1]*v16[1]) - eff[1].mcm[3]*v16[3])*v16[5] - eff[1].mcm[2]*v16[3]*v16[6] + (eff[1].mcm[2]*v16[3] - eff[1].m*v16[4])*v16[6] + v16[4]*(eff[1].mcm[2]*v16[1] + eff[1].m*v16[6]) + v16[2]*(eff[1].mcm[1]*v16[4] + eff[1].mcm[3]*v16[6]) + gravity*eff[1].mcm[3]*SG160[1][3] - gravity*eff[1].mcm[1]*SG160[3][3];
pv16[6]=-(eff[1].mcm[3]*v16[1]*v16[4]) - eff[1].mcm[3]*v16[2]*v16[5] + (eff[1].mcm[3]*v16[2] + eff[1].m*v16[4])*v16[5] + v16[4]*(eff[1].mcm[3]*v16[1] - eff[1].m*v16[5]) + v16[3]*(eff[1].mcm[1]*v16[4] + eff[1].mcm[2]*v16[5]) + (-(eff[1].mcm[1]*v16[1]) - eff[1].mcm[2]*v16[2])*v16[6] - gravity*eff[1].mcm[2]*SG160[1][3] + gravity*eff[1].mcm[1]*SG160[2][3];

pv17[1]=-uex[7].f[1] - links[7].mcm[1]*Power(v17[2],2) - links[7].mcm[1]*Power(v17[3],2) + v17[1]*(links[7].mcm[2]*v17[2] + links[7].mcm[3]*v17[3]) - links[7].m*v17[3]*v17[5] + links[7].m*v17[2]*v17[6] + gravity*links[7].m*SG170[1][3];
pv17[2]=-uex[7].f[2] - links[7].mcm[2]*Power(v17[1],2) - links[7].mcm[2]*Power(v17[3],2) + v17[2]*(links[7].mcm[1]*v17[1] + links[7].mcm[3]*v17[3]) + links[7].m*v17[3]*v17[4] - links[7].m*v17[1]*v17[6] + gravity*links[7].m*SG170[2][3];
pv17[3]=-uex[7].f[3] - links[7].mcm[3]*Power(v17[1],2) - links[7].mcm[3]*Power(v17[2],2) + (links[7].mcm[1]*v17[1] + links[7].mcm[2]*v17[2])*v17[3] - links[7].m*v17[2]*v17[4] + links[7].m*v17[1]*v17[5] + gravity*links[7].m*SG170[3][3];
pv17[4]=-uex[7].t[1] + (-(links[7].mcm[2]*v17[2]) - links[7].mcm[3]*v17[3])*v17[4] + (links[7].mcm[1]*v17[3] + links[7].m*v17[5])*v17[6] + v17[5]*(links[7].mcm[1]*v17[2] - links[7].m*v17[6]) + v17[1]*(links[7].mcm[2]*v17[5] + links[7].mcm[3]*v17[6] - v17[3]*links[7].inertia[1][2] + v17[2]*links[7].inertia[1][3]) + v17[2]*(-(links[7].mcm[1]*v17[5]) - v17[3]*links[7].inertia[2][2] + v17[2]*links[7].inertia[2][3]) + v17[3]*(-(links[7].mcm[1]*v17[6]) - v17[3]*links[7].inertia[2][3] + v17[2]*links[7].inertia[3][3]) - gravity*links[7].mcm[3]*SG170[2][3] + gravity*links[7].mcm[2]*SG170[3][3];
pv17[5]=-uex[7].t[2] + (-(links[7].mcm[1]*v17[1]) - links[7].mcm[3]*v17[3])*v17[5] + (links[7].mcm[2]*v17[3] - links[7].m*v17[4])*v17[6] + v17[4]*(links[7].mcm[2]*v17[1] + links[7].m*v17[6]) + v17[1]*(-(links[7].mcm[2]*v17[4]) + v17[3]*links[7].inertia[1][1] - v17[1]*links[7].inertia[1][3]) + v17[2]*(links[7].mcm[1]*v17[4] + links[7].mcm[3]*v17[6] + v17[3]*links[7].inertia[1][2] - v17[1]*links[7].inertia[2][3]) + v17[3]*(-(links[7].mcm[2]*v17[6]) + v17[3]*links[7].inertia[1][3] - v17[1]*links[7].inertia[3][3]) + gravity*links[7].mcm[3]*SG170[1][3] - gravity*links[7].mcm[1]*SG170[3][3];
pv17[6]=-uex[7].t[3] + (links[7].mcm[3]*v17[2] + links[7].m*v17[4])*v17[5] + v17[4]*(links[7].mcm[3]*v17[1] - links[7].m*v17[5]) + (-(links[7].mcm[1]*v17[1]) - links[7].mcm[2]*v17[2])*v17[6] + v17[1]*(-(links[7].mcm[3]*v17[4]) - v17[2]*links[7].inertia[1][1] + v17[1]*links[7].inertia[1][2]) + v17[2]*(-(links[7].mcm[3]*v17[5]) - v17[2]*links[7].inertia[1][2] + v17[1]*links[7].inertia[2][2]) + v17[3]*(links[7].mcm[1]*v17[4] + links[7].mcm[2]*v17[5] - v17[2]*links[7].inertia[1][3] + v17[1]*links[7].inertia[2][3]) - gravity*links[7].mcm[2]*SG170[1][3] + gravity*links[7].mcm[1]*SG170[2][3];

pv18[1]=-uex[8].f[1] - links[8].mcm[1]*Power(v18[2],2) - links[8].mcm[1]*Power(v18[3],2) + v18[1]*(links[8].mcm[2]*v18[2] + links[8].mcm[3]*v18[3]) - links[8].m*v18[3]*v18[5] + links[8].m*v18[2]*v18[6] + gravity*links[8].m*SG180[1][3];
pv18[2]=-uex[8].f[2] - links[8].mcm[2]*Power(v18[1],2) - links[8].mcm[2]*Power(v18[3],2) + v18[2]*(links[8].mcm[1]*v18[1] + links[8].mcm[3]*v18[3]) + links[8].m*v18[3]*v18[4] - links[8].m*v18[1]*v18[6] + gravity*links[8].m*SG180[2][3];
pv18[3]=-uex[8].f[3] - links[8].mcm[3]*Power(v18[1],2) - links[8].mcm[3]*Power(v18[2],2) + (links[8].mcm[1]*v18[1] + links[8].mcm[2]*v18[2])*v18[3] - links[8].m*v18[2]*v18[4] + links[8].m*v18[1]*v18[5] + gravity*links[8].m*SG180[3][3];
pv18[4]=-uex[8].t[1] + (-(links[8].mcm[2]*v18[2]) - links[8].mcm[3]*v18[3])*v18[4] + (links[8].mcm[1]*v18[3] + links[8].m*v18[5])*v18[6] + v18[5]*(links[8].mcm[1]*v18[2] - links[8].m*v18[6]) + v18[1]*(links[8].mcm[2]*v18[5] + links[8].mcm[3]*v18[6] - v18[3]*links[8].inertia[1][2] + v18[2]*links[8].inertia[1][3]) + v18[2]*(-(links[8].mcm[1]*v18[5]) - v18[3]*links[8].inertia[2][2] + v18[2]*links[8].inertia[2][3]) + v18[3]*(-(links[8].mcm[1]*v18[6]) - v18[3]*links[8].inertia[2][3] + v18[2]*links[8].inertia[3][3]) - gravity*links[8].mcm[3]*SG180[2][3] + gravity*links[8].mcm[2]*SG180[3][3];
pv18[5]=-uex[8].t[2] + (-(links[8].mcm[1]*v18[1]) - links[8].mcm[3]*v18[3])*v18[5] + (links[8].mcm[2]*v18[3] - links[8].m*v18[4])*v18[6] + v18[4]*(links[8].mcm[2]*v18[1] + links[8].m*v18[6]) + v18[1]*(-(links[8].mcm[2]*v18[4]) + v18[3]*links[8].inertia[1][1] - v18[1]*links[8].inertia[1][3]) + v18[2]*(links[8].mcm[1]*v18[4] + links[8].mcm[3]*v18[6] + v18[3]*links[8].inertia[1][2] - v18[1]*links[8].inertia[2][3]) + v18[3]*(-(links[8].mcm[2]*v18[6]) + v18[3]*links[8].inertia[1][3] - v18[1]*links[8].inertia[3][3]) + gravity*links[8].mcm[3]*SG180[1][3] - gravity*links[8].mcm[1]*SG180[3][3];
pv18[6]=-uex[8].t[3] + (links[8].mcm[3]*v18[2] + links[8].m*v18[4])*v18[5] + v18[4]*(links[8].mcm[3]*v18[1] - links[8].m*v18[5]) + (-(links[8].mcm[1]*v18[1]) - links[8].mcm[2]*v18[2])*v18[6] + v18[1]*(-(links[8].mcm[3]*v18[4]) - v18[2]*links[8].inertia[1][1] + v18[1]*links[8].inertia[1][2]) + v18[2]*(-(links[8].mcm[3]*v18[5]) - v18[2]*links[8].inertia[1][2] + v18[1]*links[8].inertia[2][2]) + v18[3]*(links[8].mcm[1]*v18[4] + links[8].mcm[2]*v18[5] - v18[2]*links[8].inertia[1][3] + v18[1]*links[8].inertia[2][3]) - gravity*links[8].mcm[2]*SG180[1][3] + gravity*links[8].mcm[1]*SG180[2][3];

pv19[1]=-(links[9].mcm[1]*Power(v19[2],2)) - links[9].mcm[1]*Power(v19[3],2) + v19[1]*(links[9].mcm[2]*v19[2] + links[9].mcm[3]*v19[3]) - links[9].m*v19[3]*v19[5] + links[9].m*v19[2]*v19[6] + gravity*links[9].m*SG190[1][3];
pv19[2]=-(links[9].mcm[2]*Power(v19[1],2)) - links[9].mcm[2]*Power(v19[3],2) + v19[2]*(links[9].mcm[1]*v19[1] + links[9].mcm[3]*v19[3]) + links[9].m*v19[3]*v19[4] - links[9].m*v19[1]*v19[6] + gravity*links[9].m*SG190[2][3];
pv19[3]=-(links[9].mcm[3]*Power(v19[1],2)) - links[9].mcm[3]*Power(v19[2],2) + (links[9].mcm[1]*v19[1] + links[9].mcm[2]*v19[2])*v19[3] - links[9].m*v19[2]*v19[4] + links[9].m*v19[1]*v19[5] + gravity*links[9].m*SG190[3][3];
pv19[4]=(-(links[9].mcm[2]*v19[2]) - links[9].mcm[3]*v19[3])*v19[4] + (links[9].mcm[1]*v19[3] + links[9].m*v19[5])*v19[6] + v19[5]*(links[9].mcm[1]*v19[2] - links[9].m*v19[6]) + v19[1]*(links[9].mcm[2]*v19[5] + links[9].mcm[3]*v19[6] - v19[3]*links[9].inertia[1][2] + v19[2]*links[9].inertia[1][3]) + v19[2]*(-(links[9].mcm[1]*v19[5]) - v19[3]*links[9].inertia[2][2] + v19[2]*links[9].inertia[2][3]) + v19[3]*(-(links[9].mcm[1]*v19[6]) - v19[3]*links[9].inertia[2][3] + v19[2]*links[9].inertia[3][3]) - gravity*links[9].mcm[3]*SG190[2][3] + gravity*links[9].mcm[2]*SG190[3][3];
pv19[5]=(-(links[9].mcm[1]*v19[1]) - links[9].mcm[3]*v19[3])*v19[5] + (links[9].mcm[2]*v19[3] - links[9].m*v19[4])*v19[6] + v19[4]*(links[9].mcm[2]*v19[1] + links[9].m*v19[6]) + v19[1]*(-(links[9].mcm[2]*v19[4]) + v19[3]*links[9].inertia[1][1] - v19[1]*links[9].inertia[1][3]) + v19[2]*(links[9].mcm[1]*v19[4] + links[9].mcm[3]*v19[6] + v19[3]*links[9].inertia[1][2] - v19[1]*links[9].inertia[2][3]) + v19[3]*(-(links[9].mcm[2]*v19[6]) + v19[3]*links[9].inertia[1][3] - v19[1]*links[9].inertia[3][3]) + gravity*links[9].mcm[3]*SG190[1][3] - gravity*links[9].mcm[1]*SG190[3][3];
pv19[6]=(links[9].mcm[3]*v19[2] + links[9].m*v19[4])*v19[5] + v19[4]*(links[9].mcm[3]*v19[1] - links[9].m*v19[5]) + (-(links[9].mcm[1]*v19[1]) - links[9].mcm[2]*v19[2])*v19[6] + v19[1]*(-(links[9].mcm[3]*v19[4]) - v19[2]*links[9].inertia[1][1] + v19[1]*links[9].inertia[1][2]) + v19[2]*(-(links[9].mcm[3]*v19[5]) - v19[2]*links[9].inertia[1][2] + v19[1]*links[9].inertia[2][2]) + v19[3]*(links[9].mcm[1]*v19[4] + links[9].mcm[2]*v19[5] - v19[2]*links[9].inertia[1][3] + v19[1]*links[9].inertia[2][3]) - gravity*links[9].mcm[2]*SG190[1][3] + gravity*links[9].mcm[1]*SG190[2][3];

pv20[1]=-uex[10].f[1] - links[10].mcm[1]*Power(v20[2],2) - links[10].mcm[1]*Power(v20[3],2) + v20[1]*(links[10].mcm[2]*v20[2] + links[10].mcm[3]*v20[3]) - links[10].m*v20[3]*v20[5] + links[10].m*v20[2]*v20[6] + gravity*links[10].m*SG200[1][3];
pv20[2]=-uex[10].f[2] - links[10].mcm[2]*Power(v20[1],2) - links[10].mcm[2]*Power(v20[3],2) + v20[2]*(links[10].mcm[1]*v20[1] + links[10].mcm[3]*v20[3]) + links[10].m*v20[3]*v20[4] - links[10].m*v20[1]*v20[6] + gravity*links[10].m*SG200[2][3];
pv20[3]=-uex[10].f[3] - links[10].mcm[3]*Power(v20[1],2) - links[10].mcm[3]*Power(v20[2],2) + (links[10].mcm[1]*v20[1] + links[10].mcm[2]*v20[2])*v20[3] - links[10].m*v20[2]*v20[4] + links[10].m*v20[1]*v20[5] + gravity*links[10].m*SG200[3][3];
pv20[4]=-uex[10].t[1] + (-(links[10].mcm[2]*v20[2]) - links[10].mcm[3]*v20[3])*v20[4] + (links[10].mcm[1]*v20[3] + links[10].m*v20[5])*v20[6] + v20[5]*(links[10].mcm[1]*v20[2] - links[10].m*v20[6]) + v20[1]*(links[10].mcm[2]*v20[5] + links[10].mcm[3]*v20[6] - v20[3]*links[10].inertia[1][2] + v20[2]*links[10].inertia[1][3]) + v20[2]*(-(links[10].mcm[1]*v20[5]) - v20[3]*links[10].inertia[2][2] + v20[2]*links[10].inertia[2][3]) + v20[3]*(-(links[10].mcm[1]*v20[6]) - v20[3]*links[10].inertia[2][3] + v20[2]*links[10].inertia[3][3]) - gravity*links[10].mcm[3]*SG200[2][3] + gravity*links[10].mcm[2]*SG200[3][3];
pv20[5]=-uex[10].t[2] + (-(links[10].mcm[1]*v20[1]) - links[10].mcm[3]*v20[3])*v20[5] + (links[10].mcm[2]*v20[3] - links[10].m*v20[4])*v20[6] + v20[4]*(links[10].mcm[2]*v20[1] + links[10].m*v20[6]) + v20[1]*(-(links[10].mcm[2]*v20[4]) + v20[3]*links[10].inertia[1][1] - v20[1]*links[10].inertia[1][3]) + v20[2]*(links[10].mcm[1]*v20[4] + links[10].mcm[3]*v20[6] + v20[3]*links[10].inertia[1][2] - v20[1]*links[10].inertia[2][3]) + v20[3]*(-(links[10].mcm[2]*v20[6]) + v20[3]*links[10].inertia[1][3] - v20[1]*links[10].inertia[3][3]) + gravity*links[10].mcm[3]*SG200[1][3] - gravity*links[10].mcm[1]*SG200[3][3];
pv20[6]=-uex[10].t[3] + (links[10].mcm[3]*v20[2] + links[10].m*v20[4])*v20[5] + v20[4]*(links[10].mcm[3]*v20[1] - links[10].m*v20[5]) + (-(links[10].mcm[1]*v20[1]) - links[10].mcm[2]*v20[2])*v20[6] + v20[1]*(-(links[10].mcm[3]*v20[4]) - v20[2]*links[10].inertia[1][1] + v20[1]*links[10].inertia[1][2]) + v20[2]*(-(links[10].mcm[3]*v20[5]) - v20[2]*links[10].inertia[1][2] + v20[1]*links[10].inertia[2][2]) + v20[3]*(links[10].mcm[1]*v20[4] + links[10].mcm[2]*v20[5] - v20[2]*links[10].inertia[1][3] + v20[1]*links[10].inertia[2][3]) - gravity*links[10].mcm[2]*SG200[1][3] + gravity*links[10].mcm[1]*SG200[2][3];

pv21[1]=-uex[11].f[1] - links[11].mcm[1]*Power(v21[2],2) - links[11].mcm[1]*Power(v21[3],2) + v21[1]*(links[11].mcm[2]*v21[2] + links[11].mcm[3]*v21[3]) - links[11].m*v21[3]*v21[5] + links[11].m*v21[2]*v21[6] + gravity*links[11].m*SG210[1][3];
pv21[2]=-uex[11].f[2] - links[11].mcm[2]*Power(v21[1],2) - links[11].mcm[2]*Power(v21[3],2) + v21[2]*(links[11].mcm[1]*v21[1] + links[11].mcm[3]*v21[3]) + links[11].m*v21[3]*v21[4] - links[11].m*v21[1]*v21[6] + gravity*links[11].m*SG210[2][3];
pv21[3]=-uex[11].f[3] - links[11].mcm[3]*Power(v21[1],2) - links[11].mcm[3]*Power(v21[2],2) + (links[11].mcm[1]*v21[1] + links[11].mcm[2]*v21[2])*v21[3] - links[11].m*v21[2]*v21[4] + links[11].m*v21[1]*v21[5] + gravity*links[11].m*SG210[3][3];
pv21[4]=-uex[11].t[1] + (-(links[11].mcm[2]*v21[2]) - links[11].mcm[3]*v21[3])*v21[4] + (links[11].mcm[1]*v21[3] + links[11].m*v21[5])*v21[6] + v21[5]*(links[11].mcm[1]*v21[2] - links[11].m*v21[6]) + v21[1]*(links[11].mcm[2]*v21[5] + links[11].mcm[3]*v21[6] - v21[3]*links[11].inertia[1][2] + v21[2]*links[11].inertia[1][3]) + v21[2]*(-(links[11].mcm[1]*v21[5]) - v21[3]*links[11].inertia[2][2] + v21[2]*links[11].inertia[2][3]) + v21[3]*(-(links[11].mcm[1]*v21[6]) - v21[3]*links[11].inertia[2][3] + v21[2]*links[11].inertia[3][3]) - gravity*links[11].mcm[3]*SG210[2][3] + gravity*links[11].mcm[2]*SG210[3][3];
pv21[5]=-uex[11].t[2] + (-(links[11].mcm[1]*v21[1]) - links[11].mcm[3]*v21[3])*v21[5] + (links[11].mcm[2]*v21[3] - links[11].m*v21[4])*v21[6] + v21[4]*(links[11].mcm[2]*v21[1] + links[11].m*v21[6]) + v21[1]*(-(links[11].mcm[2]*v21[4]) + v21[3]*links[11].inertia[1][1] - v21[1]*links[11].inertia[1][3]) + v21[2]*(links[11].mcm[1]*v21[4] + links[11].mcm[3]*v21[6] + v21[3]*links[11].inertia[1][2] - v21[1]*links[11].inertia[2][3]) + v21[3]*(-(links[11].mcm[2]*v21[6]) + v21[3]*links[11].inertia[1][3] - v21[1]*links[11].inertia[3][3]) + gravity*links[11].mcm[3]*SG210[1][3] - gravity*links[11].mcm[1]*SG210[3][3];
pv21[6]=-uex[11].t[3] + (links[11].mcm[3]*v21[2] + links[11].m*v21[4])*v21[5] + v21[4]*(links[11].mcm[3]*v21[1] - links[11].m*v21[5]) + (-(links[11].mcm[1]*v21[1]) - links[11].mcm[2]*v21[2])*v21[6] + v21[1]*(-(links[11].mcm[3]*v21[4]) - v21[2]*links[11].inertia[1][1] + v21[1]*links[11].inertia[1][2]) + v21[2]*(-(links[11].mcm[3]*v21[5]) - v21[2]*links[11].inertia[1][2] + v21[1]*links[11].inertia[2][2]) + v21[3]*(links[11].mcm[1]*v21[4] + links[11].mcm[2]*v21[5] - v21[2]*links[11].inertia[1][3] + v21[1]*links[11].inertia[2][3]) - gravity*links[11].mcm[2]*SG210[1][3] + gravity*links[11].mcm[1]*SG210[2][3];

pv22[1]=-uex[12].f[1] - links[12].mcm[1]*Power(v22[2],2) - links[12].mcm[1]*Power(v22[3],2) + v22[1]*(links[12].mcm[2]*v22[2] + links[12].mcm[3]*v22[3]) - links[12].m*v22[3]*v22[5] + links[12].m*v22[2]*v22[6] + gravity*links[12].m*SG220[1][3];
pv22[2]=-uex[12].f[2] - links[12].mcm[2]*Power(v22[1],2) - links[12].mcm[2]*Power(v22[3],2) + v22[2]*(links[12].mcm[1]*v22[1] + links[12].mcm[3]*v22[3]) + links[12].m*v22[3]*v22[4] - links[12].m*v22[1]*v22[6] + gravity*links[12].m*SG220[2][3];
pv22[3]=-uex[12].f[3] - links[12].mcm[3]*Power(v22[1],2) - links[12].mcm[3]*Power(v22[2],2) + (links[12].mcm[1]*v22[1] + links[12].mcm[2]*v22[2])*v22[3] - links[12].m*v22[2]*v22[4] + links[12].m*v22[1]*v22[5] + gravity*links[12].m*SG220[3][3];
pv22[4]=-uex[12].t[1] + (-(links[12].mcm[2]*v22[2]) - links[12].mcm[3]*v22[3])*v22[4] + (links[12].mcm[1]*v22[3] + links[12].m*v22[5])*v22[6] + v22[5]*(links[12].mcm[1]*v22[2] - links[12].m*v22[6]) + v22[1]*(links[12].mcm[2]*v22[5] + links[12].mcm[3]*v22[6] - v22[3]*links[12].inertia[1][2] + v22[2]*links[12].inertia[1][3]) + v22[2]*(-(links[12].mcm[1]*v22[5]) - v22[3]*links[12].inertia[2][2] + v22[2]*links[12].inertia[2][3]) + v22[3]*(-(links[12].mcm[1]*v22[6]) - v22[3]*links[12].inertia[2][3] + v22[2]*links[12].inertia[3][3]) - gravity*links[12].mcm[3]*SG220[2][3] + gravity*links[12].mcm[2]*SG220[3][3];
pv22[5]=-uex[12].t[2] + (-(links[12].mcm[1]*v22[1]) - links[12].mcm[3]*v22[3])*v22[5] + (links[12].mcm[2]*v22[3] - links[12].m*v22[4])*v22[6] + v22[4]*(links[12].mcm[2]*v22[1] + links[12].m*v22[6]) + v22[1]*(-(links[12].mcm[2]*v22[4]) + v22[3]*links[12].inertia[1][1] - v22[1]*links[12].inertia[1][3]) + v22[2]*(links[12].mcm[1]*v22[4] + links[12].mcm[3]*v22[6] + v22[3]*links[12].inertia[1][2] - v22[1]*links[12].inertia[2][3]) + v22[3]*(-(links[12].mcm[2]*v22[6]) + v22[3]*links[12].inertia[1][3] - v22[1]*links[12].inertia[3][3]) + gravity*links[12].mcm[3]*SG220[1][3] - gravity*links[12].mcm[1]*SG220[3][3];
pv22[6]=-uex[12].t[3] + (links[12].mcm[3]*v22[2] + links[12].m*v22[4])*v22[5] + v22[4]*(links[12].mcm[3]*v22[1] - links[12].m*v22[5]) + (-(links[12].mcm[1]*v22[1]) - links[12].mcm[2]*v22[2])*v22[6] + v22[1]*(-(links[12].mcm[3]*v22[4]) - v22[2]*links[12].inertia[1][1] + v22[1]*links[12].inertia[1][2]) + v22[2]*(-(links[12].mcm[3]*v22[5]) - v22[2]*links[12].inertia[1][2] + v22[1]*links[12].inertia[2][2]) + v22[3]*(links[12].mcm[1]*v22[4] + links[12].mcm[2]*v22[5] - v22[2]*links[12].inertia[1][3] + v22[1]*links[12].inertia[2][3]) - gravity*links[12].mcm[2]*SG220[1][3] + gravity*links[12].mcm[1]*SG220[2][3];

pv27[1]=-(eff[2].mcm[1]*Power(v27[2],2)) - eff[2].mcm[1]*Power(v27[3],2) + v27[1]*(eff[2].mcm[2]*v27[2] + eff[2].mcm[3]*v27[3]) - eff[2].m*v27[3]*v27[5] + eff[2].m*v27[2]*v27[6] + eff[2].m*gravity*SG270[1][3];
pv27[2]=-(eff[2].mcm[2]*Power(v27[1],2)) - eff[2].mcm[2]*Power(v27[3],2) + v27[2]*(eff[2].mcm[1]*v27[1] + eff[2].mcm[3]*v27[3]) + eff[2].m*v27[3]*v27[4] - eff[2].m*v27[1]*v27[6] + eff[2].m*gravity*SG270[2][3];
pv27[3]=-(eff[2].mcm[3]*Power(v27[1],2)) - eff[2].mcm[3]*Power(v27[2],2) + (eff[2].mcm[1]*v27[1] + eff[2].mcm[2]*v27[2])*v27[3] - eff[2].m*v27[2]*v27[4] + eff[2].m*v27[1]*v27[5] + eff[2].m*gravity*SG270[3][3];
pv27[4]=(-(eff[2].mcm[2]*v27[2]) - eff[2].mcm[3]*v27[3])*v27[4] - eff[2].mcm[1]*v27[2]*v27[5] - eff[2].mcm[1]*v27[3]*v27[6] + (eff[2].mcm[1]*v27[3] + eff[2].m*v27[5])*v27[6] + v27[5]*(eff[2].mcm[1]*v27[2] - eff[2].m*v27[6]) + v27[1]*(eff[2].mcm[2]*v27[5] + eff[2].mcm[3]*v27[6]) - gravity*eff[2].mcm[3]*SG270[2][3] + gravity*eff[2].mcm[2]*SG270[3][3];
pv27[5]=-(eff[2].mcm[2]*v27[1]*v27[4]) + (-(eff[2].mcm[1]*v27[1]) - eff[2].mcm[3]*v27[3])*v27[5] - eff[2].mcm[2]*v27[3]*v27[6] + (eff[2].mcm[2]*v27[3] - eff[2].m*v27[4])*v27[6] + v27[4]*(eff[2].mcm[2]*v27[1] + eff[2].m*v27[6]) + v27[2]*(eff[2].mcm[1]*v27[4] + eff[2].mcm[3]*v27[6]) + gravity*eff[2].mcm[3]*SG270[1][3] - gravity*eff[2].mcm[1]*SG270[3][3];
pv27[6]=-(eff[2].mcm[3]*v27[1]*v27[4]) - eff[2].mcm[3]*v27[2]*v27[5] + (eff[2].mcm[3]*v27[2] + eff[2].m*v27[4])*v27[5] + v27[4]*(eff[2].mcm[3]*v27[1] - eff[2].m*v27[5]) + v27[3]*(eff[2].mcm[1]*v27[4] + eff[2].mcm[2]*v27[5]) + (-(eff[2].mcm[1]*v27[1]) - eff[2].mcm[2]*v27[2])*v27[6] - gravity*eff[2].mcm[2]*SG270[1][3] + gravity*eff[2].mcm[1]*SG270[2][3];



}

/* articulated body inertias and misc variables */

void
hoap3_InvDynArtfunc7(void)
     {
JA27[1][2]=eff[2].mcm[3];
JA27[1][3]=-eff[2].mcm[2];
JA27[1][4]=eff[2].m;

JA27[2][1]=-eff[2].mcm[3];
JA27[2][3]=eff[2].mcm[1];
JA27[2][5]=eff[2].m;

JA27[3][1]=eff[2].mcm[2];
JA27[3][2]=-eff[2].mcm[1];
JA27[3][6]=eff[2].m;

JA27[4][5]=-eff[2].mcm[3];
JA27[4][6]=eff[2].mcm[2];

JA27[5][4]=eff[2].mcm[3];
JA27[5][6]=-eff[2].mcm[1];

JA27[6][4]=-eff[2].mcm[2];
JA27[6][5]=eff[2].mcm[1];


T12227[1][2]=JA27[1][2];
T12227[1][3]=JA27[1][3];
T12227[1][4]=JA27[1][4];

T12227[2][1]=JA27[2][1];
T12227[2][3]=JA27[2][3];
T12227[2][5]=JA27[2][5];

T12227[3][1]=JA27[3][1];
T12227[3][2]=JA27[3][2];
T12227[3][6]=JA27[3][6];

T12227[4][5]=JA27[4][5];
T12227[4][6]=JA27[4][6];

T12227[5][4]=JA27[5][4];
T12227[5][6]=JA27[5][6];

T12227[6][4]=JA27[6][4];
T12227[6][5]=JA27[6][5];


T2227[1][1]=(-(eff[2].x[3]*S2722[1][2]) + eff[2].x[2]*S2722[1][3])*Si2227[1][1]*T12227[1][4] + S2722[3][1]*(Si2227[1][1]*T12227[1][3] + Si2227[1][2]*T12227[2][3]) + (-(eff[2].x[3]*S2722[2][2]) + eff[2].x[2]*S2722[2][3])*Si2227[1][2]*T12227[2][5] + S2722[1][1]*(Si2227[1][2]*T12227[2][1] + Si2227[1][3]*T12227[3][1]) + S2722[2][1]*(Si2227[1][1]*T12227[1][2] + Si2227[1][3]*T12227[3][2]) + (-(eff[2].x[3]*S2722[3][2]) + eff[2].x[2]*S2722[3][3])*Si2227[1][3]*T12227[3][6];
T2227[1][2]=(eff[2].x[3]*S2722[1][1] - eff[2].x[1]*S2722[1][3])*Si2227[1][1]*T12227[1][4] + S2722[3][2]*(Si2227[1][1]*T12227[1][3] + Si2227[1][2]*T12227[2][3]) + (eff[2].x[3]*S2722[2][1] - eff[2].x[1]*S2722[2][3])*Si2227[1][2]*T12227[2][5] + S2722[1][2]*(Si2227[1][2]*T12227[2][1] + Si2227[1][3]*T12227[3][1]) + S2722[2][2]*(Si2227[1][1]*T12227[1][2] + Si2227[1][3]*T12227[3][2]) + (eff[2].x[3]*S2722[3][1] - eff[2].x[1]*S2722[3][3])*Si2227[1][3]*T12227[3][6];
T2227[1][3]=(-(eff[2].x[2]*S2722[1][1]) + eff[2].x[1]*S2722[1][2])*Si2227[1][1]*T12227[1][4] + S2722[3][3]*(Si2227[1][1]*T12227[1][3] + Si2227[1][2]*T12227[2][3]) + (-(eff[2].x[2]*S2722[2][1]) + eff[2].x[1]*S2722[2][2])*Si2227[1][2]*T12227[2][5] + S2722[1][3]*(Si2227[1][2]*T12227[2][1] + Si2227[1][3]*T12227[3][1]) + S2722[2][3]*(Si2227[1][1]*T12227[1][2] + Si2227[1][3]*T12227[3][2]) + (-(eff[2].x[2]*S2722[3][1]) + eff[2].x[1]*S2722[3][2])*Si2227[1][3]*T12227[3][6];
T2227[1][4]=S2722[1][1]*Si2227[1][1]*T12227[1][4] + S2722[2][1]*Si2227[1][2]*T12227[2][5] + S2722[3][1]*Si2227[1][3]*T12227[3][6];
T2227[1][5]=S2722[1][2]*Si2227[1][1]*T12227[1][4] + S2722[2][2]*Si2227[1][2]*T12227[2][5] + S2722[3][2]*Si2227[1][3]*T12227[3][6];
T2227[1][6]=S2722[1][3]*Si2227[1][1]*T12227[1][4] + S2722[2][3]*Si2227[1][2]*T12227[2][5] + S2722[3][3]*Si2227[1][3]*T12227[3][6];

T2227[2][1]=(-(eff[2].x[3]*S2722[1][2]) + eff[2].x[2]*S2722[1][3])*Si2227[2][1]*T12227[1][4] + S2722[3][1]*(Si2227[2][1]*T12227[1][3] + Si2227[2][2]*T12227[2][3]) + (-(eff[2].x[3]*S2722[2][2]) + eff[2].x[2]*S2722[2][3])*Si2227[2][2]*T12227[2][5] + S2722[1][1]*(Si2227[2][2]*T12227[2][1] + Si2227[2][3]*T12227[3][1]) + S2722[2][1]*(Si2227[2][1]*T12227[1][2] + Si2227[2][3]*T12227[3][2]) + (-(eff[2].x[3]*S2722[3][2]) + eff[2].x[2]*S2722[3][3])*Si2227[2][3]*T12227[3][6];
T2227[2][2]=(eff[2].x[3]*S2722[1][1] - eff[2].x[1]*S2722[1][3])*Si2227[2][1]*T12227[1][4] + S2722[3][2]*(Si2227[2][1]*T12227[1][3] + Si2227[2][2]*T12227[2][3]) + (eff[2].x[3]*S2722[2][1] - eff[2].x[1]*S2722[2][3])*Si2227[2][2]*T12227[2][5] + S2722[1][2]*(Si2227[2][2]*T12227[2][1] + Si2227[2][3]*T12227[3][1]) + S2722[2][2]*(Si2227[2][1]*T12227[1][2] + Si2227[2][3]*T12227[3][2]) + (eff[2].x[3]*S2722[3][1] - eff[2].x[1]*S2722[3][3])*Si2227[2][3]*T12227[3][6];
T2227[2][3]=(-(eff[2].x[2]*S2722[1][1]) + eff[2].x[1]*S2722[1][2])*Si2227[2][1]*T12227[1][4] + S2722[3][3]*(Si2227[2][1]*T12227[1][3] + Si2227[2][2]*T12227[2][3]) + (-(eff[2].x[2]*S2722[2][1]) + eff[2].x[1]*S2722[2][2])*Si2227[2][2]*T12227[2][5] + S2722[1][3]*(Si2227[2][2]*T12227[2][1] + Si2227[2][3]*T12227[3][1]) + S2722[2][3]*(Si2227[2][1]*T12227[1][2] + Si2227[2][3]*T12227[3][2]) + (-(eff[2].x[2]*S2722[3][1]) + eff[2].x[1]*S2722[3][2])*Si2227[2][3]*T12227[3][6];
T2227[2][4]=S2722[1][1]*Si2227[2][1]*T12227[1][4] + S2722[2][1]*Si2227[2][2]*T12227[2][5] + S2722[3][1]*Si2227[2][3]*T12227[3][6];
T2227[2][5]=S2722[1][2]*Si2227[2][1]*T12227[1][4] + S2722[2][2]*Si2227[2][2]*T12227[2][5] + S2722[3][2]*Si2227[2][3]*T12227[3][6];
T2227[2][6]=S2722[1][3]*Si2227[2][1]*T12227[1][4] + S2722[2][3]*Si2227[2][2]*T12227[2][5] + S2722[3][3]*Si2227[2][3]*T12227[3][6];

T2227[3][1]=(-(eff[2].x[3]*S2722[1][2]) + eff[2].x[2]*S2722[1][3])*Si2227[3][1]*T12227[1][4] + S2722[3][1]*(Si2227[3][1]*T12227[1][3] + Si2227[3][2]*T12227[2][3]) + (-(eff[2].x[3]*S2722[2][2]) + eff[2].x[2]*S2722[2][3])*Si2227[3][2]*T12227[2][5] + S2722[1][1]*(Si2227[3][2]*T12227[2][1] + Si2227[3][3]*T12227[3][1]) + S2722[2][1]*(Si2227[3][1]*T12227[1][2] + Si2227[3][3]*T12227[3][2]) + (-(eff[2].x[3]*S2722[3][2]) + eff[2].x[2]*S2722[3][3])*Si2227[3][3]*T12227[3][6];
T2227[3][2]=(eff[2].x[3]*S2722[1][1] - eff[2].x[1]*S2722[1][3])*Si2227[3][1]*T12227[1][4] + S2722[3][2]*(Si2227[3][1]*T12227[1][3] + Si2227[3][2]*T12227[2][3]) + (eff[2].x[3]*S2722[2][1] - eff[2].x[1]*S2722[2][3])*Si2227[3][2]*T12227[2][5] + S2722[1][2]*(Si2227[3][2]*T12227[2][1] + Si2227[3][3]*T12227[3][1]) + S2722[2][2]*(Si2227[3][1]*T12227[1][2] + Si2227[3][3]*T12227[3][2]) + (eff[2].x[3]*S2722[3][1] - eff[2].x[1]*S2722[3][3])*Si2227[3][3]*T12227[3][6];
T2227[3][3]=(-(eff[2].x[2]*S2722[1][1]) + eff[2].x[1]*S2722[1][2])*Si2227[3][1]*T12227[1][4] + S2722[3][3]*(Si2227[3][1]*T12227[1][3] + Si2227[3][2]*T12227[2][3]) + (-(eff[2].x[2]*S2722[2][1]) + eff[2].x[1]*S2722[2][2])*Si2227[3][2]*T12227[2][5] + S2722[1][3]*(Si2227[3][2]*T12227[2][1] + Si2227[3][3]*T12227[3][1]) + S2722[2][3]*(Si2227[3][1]*T12227[1][2] + Si2227[3][3]*T12227[3][2]) + (-(eff[2].x[2]*S2722[3][1]) + eff[2].x[1]*S2722[3][2])*Si2227[3][3]*T12227[3][6];
T2227[3][4]=S2722[1][1]*Si2227[3][1]*T12227[1][4] + S2722[2][1]*Si2227[3][2]*T12227[2][5] + S2722[3][1]*Si2227[3][3]*T12227[3][6];
T2227[3][5]=S2722[1][2]*Si2227[3][1]*T12227[1][4] + S2722[2][2]*Si2227[3][2]*T12227[2][5] + S2722[3][2]*Si2227[3][3]*T12227[3][6];
T2227[3][6]=S2722[1][3]*Si2227[3][1]*T12227[1][4] + S2722[2][3]*Si2227[3][2]*T12227[2][5] + S2722[3][3]*Si2227[3][3]*T12227[3][6];

T2227[4][1]=S2722[3][1]*((-(eff[2].x[3]*Si2227[2][1]) + eff[2].x[2]*Si2227[3][1])*T12227[1][3] + (-(eff[2].x[3]*Si2227[2][2]) + eff[2].x[2]*Si2227[3][2])*T12227[2][3]) + S2722[1][1]*((-(eff[2].x[3]*Si2227[2][2]) + eff[2].x[2]*Si2227[3][2])*T12227[2][1] + (-(eff[2].x[3]*Si2227[2][3]) + eff[2].x[2]*Si2227[3][3])*T12227[3][1]) + S2722[2][1]*((-(eff[2].x[3]*Si2227[2][1]) + eff[2].x[2]*Si2227[3][1])*T12227[1][2] + (-(eff[2].x[3]*Si2227[2][3]) + eff[2].x[2]*Si2227[3][3])*T12227[3][2]) + (-(eff[2].x[3]*S2722[3][2]) + eff[2].x[2]*S2722[3][3])*((-(eff[2].x[3]*Si2227[2][3]) + eff[2].x[2]*Si2227[3][3])*T12227[3][6] + Si2227[1][1]*T12227[4][6] + Si2227[1][2]*T12227[5][6]) + (-(eff[2].x[3]*S2722[1][2]) + eff[2].x[2]*S2722[1][3])*((-(eff[2].x[3]*Si2227[2][1]) + eff[2].x[2]*Si2227[3][1])*T12227[1][4] + Si2227[1][2]*T12227[5][4] + Si2227[1][3]*T12227[6][4]) + (-(eff[2].x[3]*S2722[2][2]) + eff[2].x[2]*S2722[2][3])*((-(eff[2].x[3]*Si2227[2][2]) + eff[2].x[2]*Si2227[3][2])*T12227[2][5] + Si2227[1][1]*T12227[4][5] + Si2227[1][3]*T12227[6][5]);
T2227[4][2]=S2722[3][2]*((-(eff[2].x[3]*Si2227[2][1]) + eff[2].x[2]*Si2227[3][1])*T12227[1][3] + (-(eff[2].x[3]*Si2227[2][2]) + eff[2].x[2]*Si2227[3][2])*T12227[2][3]) + S2722[1][2]*((-(eff[2].x[3]*Si2227[2][2]) + eff[2].x[2]*Si2227[3][2])*T12227[2][1] + (-(eff[2].x[3]*Si2227[2][3]) + eff[2].x[2]*Si2227[3][3])*T12227[3][1]) + S2722[2][2]*((-(eff[2].x[3]*Si2227[2][1]) + eff[2].x[2]*Si2227[3][1])*T12227[1][2] + (-(eff[2].x[3]*Si2227[2][3]) + eff[2].x[2]*Si2227[3][3])*T12227[3][2]) + (eff[2].x[3]*S2722[3][1] - eff[2].x[1]*S2722[3][3])*((-(eff[2].x[3]*Si2227[2][3]) + eff[2].x[2]*Si2227[3][3])*T12227[3][6] + Si2227[1][1]*T12227[4][6] + Si2227[1][2]*T12227[5][6]) + (eff[2].x[3]*S2722[1][1] - eff[2].x[1]*S2722[1][3])*((-(eff[2].x[3]*Si2227[2][1]) + eff[2].x[2]*Si2227[3][1])*T12227[1][4] + Si2227[1][2]*T12227[5][4] + Si2227[1][3]*T12227[6][4]) + (eff[2].x[3]*S2722[2][1] - eff[2].x[1]*S2722[2][3])*((-(eff[2].x[3]*Si2227[2][2]) + eff[2].x[2]*Si2227[3][2])*T12227[2][5] + Si2227[1][1]*T12227[4][5] + Si2227[1][3]*T12227[6][5]);
T2227[4][3]=S2722[3][3]*((-(eff[2].x[3]*Si2227[2][1]) + eff[2].x[2]*Si2227[3][1])*T12227[1][3] + (-(eff[2].x[3]*Si2227[2][2]) + eff[2].x[2]*Si2227[3][2])*T12227[2][3]) + S2722[1][3]*((-(eff[2].x[3]*Si2227[2][2]) + eff[2].x[2]*Si2227[3][2])*T12227[2][1] + (-(eff[2].x[3]*Si2227[2][3]) + eff[2].x[2]*Si2227[3][3])*T12227[3][1]) + S2722[2][3]*((-(eff[2].x[3]*Si2227[2][1]) + eff[2].x[2]*Si2227[3][1])*T12227[1][2] + (-(eff[2].x[3]*Si2227[2][3]) + eff[2].x[2]*Si2227[3][3])*T12227[3][2]) + (-(eff[2].x[2]*S2722[3][1]) + eff[2].x[1]*S2722[3][2])*((-(eff[2].x[3]*Si2227[2][3]) + eff[2].x[2]*Si2227[3][3])*T12227[3][6] + Si2227[1][1]*T12227[4][6] + Si2227[1][2]*T12227[5][6]) + (-(eff[2].x[2]*S2722[1][1]) + eff[2].x[1]*S2722[1][2])*((-(eff[2].x[3]*Si2227[2][1]) + eff[2].x[2]*Si2227[3][1])*T12227[1][4] + Si2227[1][2]*T12227[5][4] + Si2227[1][3]*T12227[6][4]) + (-(eff[2].x[2]*S2722[2][1]) + eff[2].x[1]*S2722[2][2])*((-(eff[2].x[3]*Si2227[2][2]) + eff[2].x[2]*Si2227[3][2])*T12227[2][5] + Si2227[1][1]*T12227[4][5] + Si2227[1][3]*T12227[6][5]);
T2227[4][4]=S2722[3][1]*((-(eff[2].x[3]*Si2227[2][3]) + eff[2].x[2]*Si2227[3][3])*T12227[3][6] + Si2227[1][1]*T12227[4][6] + Si2227[1][2]*T12227[5][6]) + S2722[1][1]*((-(eff[2].x[3]*Si2227[2][1]) + eff[2].x[2]*Si2227[3][1])*T12227[1][4] + Si2227[1][2]*T12227[5][4] + Si2227[1][3]*T12227[6][4]) + S2722[2][1]*((-(eff[2].x[3]*Si2227[2][2]) + eff[2].x[2]*Si2227[3][2])*T12227[2][5] + Si2227[1][1]*T12227[4][5] + Si2227[1][3]*T12227[6][5]);
T2227[4][5]=S2722[3][2]*((-(eff[2].x[3]*Si2227[2][3]) + eff[2].x[2]*Si2227[3][3])*T12227[3][6] + Si2227[1][1]*T12227[4][6] + Si2227[1][2]*T12227[5][6]) + S2722[1][2]*((-(eff[2].x[3]*Si2227[2][1]) + eff[2].x[2]*Si2227[3][1])*T12227[1][4] + Si2227[1][2]*T12227[5][4] + Si2227[1][3]*T12227[6][4]) + S2722[2][2]*((-(eff[2].x[3]*Si2227[2][2]) + eff[2].x[2]*Si2227[3][2])*T12227[2][5] + Si2227[1][1]*T12227[4][5] + Si2227[1][3]*T12227[6][5]);
T2227[4][6]=S2722[3][3]*((-(eff[2].x[3]*Si2227[2][3]) + eff[2].x[2]*Si2227[3][3])*T12227[3][6] + Si2227[1][1]*T12227[4][6] + Si2227[1][2]*T12227[5][6]) + S2722[1][3]*((-(eff[2].x[3]*Si2227[2][1]) + eff[2].x[2]*Si2227[3][1])*T12227[1][4] + Si2227[1][2]*T12227[5][4] + Si2227[1][3]*T12227[6][4]) + S2722[2][3]*((-(eff[2].x[3]*Si2227[2][2]) + eff[2].x[2]*Si2227[3][2])*T12227[2][5] + Si2227[1][1]*T12227[4][5] + Si2227[1][3]*T12227[6][5]);

T2227[5][1]=S2722[3][1]*((eff[2].x[3]*Si2227[1][1] - eff[2].x[1]*Si2227[3][1])*T12227[1][3] + (eff[2].x[3]*Si2227[1][2] - eff[2].x[1]*Si2227[3][2])*T12227[2][3]) + S2722[1][1]*((eff[2].x[3]*Si2227[1][2] - eff[2].x[1]*Si2227[3][2])*T12227[2][1] + (eff[2].x[3]*Si2227[1][3] - eff[2].x[1]*Si2227[3][3])*T12227[3][1]) + S2722[2][1]*((eff[2].x[3]*Si2227[1][1] - eff[2].x[1]*Si2227[3][1])*T12227[1][2] + (eff[2].x[3]*Si2227[1][3] - eff[2].x[1]*Si2227[3][3])*T12227[3][2]) + (-(eff[2].x[3]*S2722[3][2]) + eff[2].x[2]*S2722[3][3])*((eff[2].x[3]*Si2227[1][3] - eff[2].x[1]*Si2227[3][3])*T12227[3][6] + Si2227[2][1]*T12227[4][6] + Si2227[2][2]*T12227[5][6]) + (-(eff[2].x[3]*S2722[1][2]) + eff[2].x[2]*S2722[1][3])*((eff[2].x[3]*Si2227[1][1] - eff[2].x[1]*Si2227[3][1])*T12227[1][4] + Si2227[2][2]*T12227[5][4] + Si2227[2][3]*T12227[6][4]) + (-(eff[2].x[3]*S2722[2][2]) + eff[2].x[2]*S2722[2][3])*((eff[2].x[3]*Si2227[1][2] - eff[2].x[1]*Si2227[3][2])*T12227[2][5] + Si2227[2][1]*T12227[4][5] + Si2227[2][3]*T12227[6][5]);
T2227[5][2]=S2722[3][2]*((eff[2].x[3]*Si2227[1][1] - eff[2].x[1]*Si2227[3][1])*T12227[1][3] + (eff[2].x[3]*Si2227[1][2] - eff[2].x[1]*Si2227[3][2])*T12227[2][3]) + S2722[1][2]*((eff[2].x[3]*Si2227[1][2] - eff[2].x[1]*Si2227[3][2])*T12227[2][1] + (eff[2].x[3]*Si2227[1][3] - eff[2].x[1]*Si2227[3][3])*T12227[3][1]) + S2722[2][2]*((eff[2].x[3]*Si2227[1][1] - eff[2].x[1]*Si2227[3][1])*T12227[1][2] + (eff[2].x[3]*Si2227[1][3] - eff[2].x[1]*Si2227[3][3])*T12227[3][2]) + (eff[2].x[3]*S2722[3][1] - eff[2].x[1]*S2722[3][3])*((eff[2].x[3]*Si2227[1][3] - eff[2].x[1]*Si2227[3][3])*T12227[3][6] + Si2227[2][1]*T12227[4][6] + Si2227[2][2]*T12227[5][6]) + (eff[2].x[3]*S2722[1][1] - eff[2].x[1]*S2722[1][3])*((eff[2].x[3]*Si2227[1][1] - eff[2].x[1]*Si2227[3][1])*T12227[1][4] + Si2227[2][2]*T12227[5][4] + Si2227[2][3]*T12227[6][4]) + (eff[2].x[3]*S2722[2][1] - eff[2].x[1]*S2722[2][3])*((eff[2].x[3]*Si2227[1][2] - eff[2].x[1]*Si2227[3][2])*T12227[2][5] + Si2227[2][1]*T12227[4][5] + Si2227[2][3]*T12227[6][5]);
T2227[5][3]=S2722[3][3]*((eff[2].x[3]*Si2227[1][1] - eff[2].x[1]*Si2227[3][1])*T12227[1][3] + (eff[2].x[3]*Si2227[1][2] - eff[2].x[1]*Si2227[3][2])*T12227[2][3]) + S2722[1][3]*((eff[2].x[3]*Si2227[1][2] - eff[2].x[1]*Si2227[3][2])*T12227[2][1] + (eff[2].x[3]*Si2227[1][3] - eff[2].x[1]*Si2227[3][3])*T12227[3][1]) + S2722[2][3]*((eff[2].x[3]*Si2227[1][1] - eff[2].x[1]*Si2227[3][1])*T12227[1][2] + (eff[2].x[3]*Si2227[1][3] - eff[2].x[1]*Si2227[3][3])*T12227[3][2]) + (-(eff[2].x[2]*S2722[3][1]) + eff[2].x[1]*S2722[3][2])*((eff[2].x[3]*Si2227[1][3] - eff[2].x[1]*Si2227[3][3])*T12227[3][6] + Si2227[2][1]*T12227[4][6] + Si2227[2][2]*T12227[5][6]) + (-(eff[2].x[2]*S2722[1][1]) + eff[2].x[1]*S2722[1][2])*((eff[2].x[3]*Si2227[1][1] - eff[2].x[1]*Si2227[3][1])*T12227[1][4] + Si2227[2][2]*T12227[5][4] + Si2227[2][3]*T12227[6][4]) + (-(eff[2].x[2]*S2722[2][1]) + eff[2].x[1]*S2722[2][2])*((eff[2].x[3]*Si2227[1][2] - eff[2].x[1]*Si2227[3][2])*T12227[2][5] + Si2227[2][1]*T12227[4][5] + Si2227[2][3]*T12227[6][5]);
T2227[5][4]=S2722[3][1]*((eff[2].x[3]*Si2227[1][3] - eff[2].x[1]*Si2227[3][3])*T12227[3][6] + Si2227[2][1]*T12227[4][6] + Si2227[2][2]*T12227[5][6]) + S2722[1][1]*((eff[2].x[3]*Si2227[1][1] - eff[2].x[1]*Si2227[3][1])*T12227[1][4] + Si2227[2][2]*T12227[5][4] + Si2227[2][3]*T12227[6][4]) + S2722[2][1]*((eff[2].x[3]*Si2227[1][2] - eff[2].x[1]*Si2227[3][2])*T12227[2][5] + Si2227[2][1]*T12227[4][5] + Si2227[2][3]*T12227[6][5]);
T2227[5][5]=S2722[3][2]*((eff[2].x[3]*Si2227[1][3] - eff[2].x[1]*Si2227[3][3])*T12227[3][6] + Si2227[2][1]*T12227[4][6] + Si2227[2][2]*T12227[5][6]) + S2722[1][2]*((eff[2].x[3]*Si2227[1][1] - eff[2].x[1]*Si2227[3][1])*T12227[1][4] + Si2227[2][2]*T12227[5][4] + Si2227[2][3]*T12227[6][4]) + S2722[2][2]*((eff[2].x[3]*Si2227[1][2] - eff[2].x[1]*Si2227[3][2])*T12227[2][5] + Si2227[2][1]*T12227[4][5] + Si2227[2][3]*T12227[6][5]);
T2227[5][6]=S2722[3][3]*((eff[2].x[3]*Si2227[1][3] - eff[2].x[1]*Si2227[3][3])*T12227[3][6] + Si2227[2][1]*T12227[4][6] + Si2227[2][2]*T12227[5][6]) + S2722[1][3]*((eff[2].x[3]*Si2227[1][1] - eff[2].x[1]*Si2227[3][1])*T12227[1][4] + Si2227[2][2]*T12227[5][4] + Si2227[2][3]*T12227[6][4]) + S2722[2][3]*((eff[2].x[3]*Si2227[1][2] - eff[2].x[1]*Si2227[3][2])*T12227[2][5] + Si2227[2][1]*T12227[4][5] + Si2227[2][3]*T12227[6][5]);

T2227[6][1]=S2722[3][1]*((-(eff[2].x[2]*Si2227[1][1]) + eff[2].x[1]*Si2227[2][1])*T12227[1][3] + (-(eff[2].x[2]*Si2227[1][2]) + eff[2].x[1]*Si2227[2][2])*T12227[2][3]) + S2722[1][1]*((-(eff[2].x[2]*Si2227[1][2]) + eff[2].x[1]*Si2227[2][2])*T12227[2][1] + (-(eff[2].x[2]*Si2227[1][3]) + eff[2].x[1]*Si2227[2][3])*T12227[3][1]) + S2722[2][1]*((-(eff[2].x[2]*Si2227[1][1]) + eff[2].x[1]*Si2227[2][1])*T12227[1][2] + (-(eff[2].x[2]*Si2227[1][3]) + eff[2].x[1]*Si2227[2][3])*T12227[3][2]) + (-(eff[2].x[3]*S2722[3][2]) + eff[2].x[2]*S2722[3][3])*((-(eff[2].x[2]*Si2227[1][3]) + eff[2].x[1]*Si2227[2][3])*T12227[3][6] + Si2227[3][1]*T12227[4][6] + Si2227[3][2]*T12227[5][6]) + (-(eff[2].x[3]*S2722[1][2]) + eff[2].x[2]*S2722[1][3])*((-(eff[2].x[2]*Si2227[1][1]) + eff[2].x[1]*Si2227[2][1])*T12227[1][4] + Si2227[3][2]*T12227[5][4] + Si2227[3][3]*T12227[6][4]) + (-(eff[2].x[3]*S2722[2][2]) + eff[2].x[2]*S2722[2][3])*((-(eff[2].x[2]*Si2227[1][2]) + eff[2].x[1]*Si2227[2][2])*T12227[2][5] + Si2227[3][1]*T12227[4][5] + Si2227[3][3]*T12227[6][5]);
T2227[6][2]=S2722[3][2]*((-(eff[2].x[2]*Si2227[1][1]) + eff[2].x[1]*Si2227[2][1])*T12227[1][3] + (-(eff[2].x[2]*Si2227[1][2]) + eff[2].x[1]*Si2227[2][2])*T12227[2][3]) + S2722[1][2]*((-(eff[2].x[2]*Si2227[1][2]) + eff[2].x[1]*Si2227[2][2])*T12227[2][1] + (-(eff[2].x[2]*Si2227[1][3]) + eff[2].x[1]*Si2227[2][3])*T12227[3][1]) + S2722[2][2]*((-(eff[2].x[2]*Si2227[1][1]) + eff[2].x[1]*Si2227[2][1])*T12227[1][2] + (-(eff[2].x[2]*Si2227[1][3]) + eff[2].x[1]*Si2227[2][3])*T12227[3][2]) + (eff[2].x[3]*S2722[3][1] - eff[2].x[1]*S2722[3][3])*((-(eff[2].x[2]*Si2227[1][3]) + eff[2].x[1]*Si2227[2][3])*T12227[3][6] + Si2227[3][1]*T12227[4][6] + Si2227[3][2]*T12227[5][6]) + (eff[2].x[3]*S2722[1][1] - eff[2].x[1]*S2722[1][3])*((-(eff[2].x[2]*Si2227[1][1]) + eff[2].x[1]*Si2227[2][1])*T12227[1][4] + Si2227[3][2]*T12227[5][4] + Si2227[3][3]*T12227[6][4]) + (eff[2].x[3]*S2722[2][1] - eff[2].x[1]*S2722[2][3])*((-(eff[2].x[2]*Si2227[1][2]) + eff[2].x[1]*Si2227[2][2])*T12227[2][5] + Si2227[3][1]*T12227[4][5] + Si2227[3][3]*T12227[6][5]);
T2227[6][3]=S2722[3][3]*((-(eff[2].x[2]*Si2227[1][1]) + eff[2].x[1]*Si2227[2][1])*T12227[1][3] + (-(eff[2].x[2]*Si2227[1][2]) + eff[2].x[1]*Si2227[2][2])*T12227[2][3]) + S2722[1][3]*((-(eff[2].x[2]*Si2227[1][2]) + eff[2].x[1]*Si2227[2][2])*T12227[2][1] + (-(eff[2].x[2]*Si2227[1][3]) + eff[2].x[1]*Si2227[2][3])*T12227[3][1]) + S2722[2][3]*((-(eff[2].x[2]*Si2227[1][1]) + eff[2].x[1]*Si2227[2][1])*T12227[1][2] + (-(eff[2].x[2]*Si2227[1][3]) + eff[2].x[1]*Si2227[2][3])*T12227[3][2]) + (-(eff[2].x[2]*S2722[3][1]) + eff[2].x[1]*S2722[3][2])*((-(eff[2].x[2]*Si2227[1][3]) + eff[2].x[1]*Si2227[2][3])*T12227[3][6] + Si2227[3][1]*T12227[4][6] + Si2227[3][2]*T12227[5][6]) + (-(eff[2].x[2]*S2722[1][1]) + eff[2].x[1]*S2722[1][2])*((-(eff[2].x[2]*Si2227[1][1]) + eff[2].x[1]*Si2227[2][1])*T12227[1][4] + Si2227[3][2]*T12227[5][4] + Si2227[3][3]*T12227[6][4]) + (-(eff[2].x[2]*S2722[2][1]) + eff[2].x[1]*S2722[2][2])*((-(eff[2].x[2]*Si2227[1][2]) + eff[2].x[1]*Si2227[2][2])*T12227[2][5] + Si2227[3][1]*T12227[4][5] + Si2227[3][3]*T12227[6][5]);
T2227[6][4]=S2722[3][1]*((-(eff[2].x[2]*Si2227[1][3]) + eff[2].x[1]*Si2227[2][3])*T12227[3][6] + Si2227[3][1]*T12227[4][6] + Si2227[3][2]*T12227[5][6]) + S2722[1][1]*((-(eff[2].x[2]*Si2227[1][1]) + eff[2].x[1]*Si2227[2][1])*T12227[1][4] + Si2227[3][2]*T12227[5][4] + Si2227[3][3]*T12227[6][4]) + S2722[2][1]*((-(eff[2].x[2]*Si2227[1][2]) + eff[2].x[1]*Si2227[2][2])*T12227[2][5] + Si2227[3][1]*T12227[4][5] + Si2227[3][3]*T12227[6][5]);
T2227[6][5]=S2722[3][2]*((-(eff[2].x[2]*Si2227[1][3]) + eff[2].x[1]*Si2227[2][3])*T12227[3][6] + Si2227[3][1]*T12227[4][6] + Si2227[3][2]*T12227[5][6]) + S2722[1][2]*((-(eff[2].x[2]*Si2227[1][1]) + eff[2].x[1]*Si2227[2][1])*T12227[1][4] + Si2227[3][2]*T12227[5][4] + Si2227[3][3]*T12227[6][4]) + S2722[2][2]*((-(eff[2].x[2]*Si2227[1][2]) + eff[2].x[1]*Si2227[2][2])*T12227[2][5] + Si2227[3][1]*T12227[4][5] + Si2227[3][3]*T12227[6][5]);
T2227[6][6]=S2722[3][3]*((-(eff[2].x[2]*Si2227[1][3]) + eff[2].x[1]*Si2227[2][3])*T12227[3][6] + Si2227[3][1]*T12227[4][6] + Si2227[3][2]*T12227[5][6]) + S2722[1][3]*((-(eff[2].x[2]*Si2227[1][1]) + eff[2].x[1]*Si2227[2][1])*T12227[1][4] + Si2227[3][2]*T12227[5][4] + Si2227[3][3]*T12227[6][4]) + S2722[2][3]*((-(eff[2].x[2]*Si2227[1][2]) + eff[2].x[1]*Si2227[2][2])*T12227[2][5] + Si2227[3][1]*T12227[4][5] + Si2227[3][3]*T12227[6][5]);



}


void
hoap3_InvDynArtfunc8(void)
     {




}


void
hoap3_InvDynArtfunc9(void)
     {




}


void
hoap3_InvDynArtfunc10(void)
      {




}


void
hoap3_InvDynArtfunc11(void)
      {




}


void
hoap3_InvDynArtfunc12(void)
      {
JA22[1][1]=0. + T2227[1][1];
JA22[1][2]=0. + links[12].mcm[3] + T2227[1][2];
JA22[1][3]=0. - links[12].mcm[2] + T2227[1][3];
JA22[1][4]=0. + links[12].m + T2227[1][4];
JA22[1][5]=0. + T2227[1][5];
JA22[1][6]=0. + T2227[1][6];

JA22[2][1]=0. - links[12].mcm[3] + T2227[2][1];
JA22[2][2]=0. + T2227[2][2];
JA22[2][3]=0. + links[12].mcm[1] + T2227[2][3];
JA22[2][4]=0. + T2227[2][4];
JA22[2][5]=0. + links[12].m + T2227[2][5];
JA22[2][6]=0. + T2227[2][6];

JA22[3][1]=0. + links[12].mcm[2] + T2227[3][1];
JA22[3][2]=0. - links[12].mcm[1] + T2227[3][2];
JA22[3][3]=0. + T2227[3][3];
JA22[3][4]=0. + T2227[3][4];
JA22[3][5]=0. + T2227[3][5];
JA22[3][6]=0. + links[12].m + T2227[3][6];

JA22[4][1]=0. + links[12].inertia[1][1] + T2227[4][1];
JA22[4][2]=0. + links[12].inertia[1][2] + T2227[4][2];
JA22[4][3]=0. + links[12].inertia[1][3] + T2227[4][3];
JA22[4][4]=0. + T2227[4][4];
JA22[4][5]=0. - links[12].mcm[3] + T2227[4][5];
JA22[4][6]=0. + links[12].mcm[2] + T2227[4][6];

JA22[5][1]=0. + links[12].inertia[1][2] + T2227[5][1];
JA22[5][2]=0. + links[12].inertia[2][2] + T2227[5][2];
JA22[5][3]=0. + links[12].inertia[2][3] + T2227[5][3];
JA22[5][4]=0. + links[12].mcm[3] + T2227[5][4];
JA22[5][5]=0. + T2227[5][5];
JA22[5][6]=0. - links[12].mcm[1] + T2227[5][6];

JA22[6][1]=0. + links[12].inertia[1][3] + T2227[6][1];
JA22[6][2]=0. + links[12].inertia[2][3] + T2227[6][2];
JA22[6][3]=0. + links[12].inertia[3][3] + T2227[6][3];
JA22[6][4]=0. - links[12].mcm[2] + T2227[6][4];
JA22[6][5]=0. + links[12].mcm[1] + T2227[6][5];
JA22[6][6]=0. + T2227[6][6];


h22[1]=JA22[1][3];
h22[2]=JA22[2][3];
h22[3]=JA22[3][3];
h22[4]=JA22[4][3];
h22[5]=JA22[5][3];
h22[6]=JA22[6][3];

T12122[1][1]=JA22[1][1];
T12122[1][2]=JA22[1][2];
T12122[1][3]=JA22[1][3];
T12122[1][4]=JA22[1][4];
T12122[1][5]=JA22[1][5];
T12122[1][6]=JA22[1][6];

T12122[2][1]=JA22[2][1];
T12122[2][2]=JA22[2][2];
T12122[2][3]=JA22[2][3];
T12122[2][4]=JA22[2][4];
T12122[2][5]=JA22[2][5];
T12122[2][6]=JA22[2][6];

T12122[3][1]=JA22[3][1];
T12122[3][2]=JA22[3][2];
T12122[3][3]=JA22[3][3];
T12122[3][4]=JA22[3][4];
T12122[3][5]=JA22[3][5];
T12122[3][6]=JA22[3][6];

T12122[4][1]=JA22[4][1];
T12122[4][2]=JA22[4][2];
T12122[4][3]=JA22[4][3];
T12122[4][4]=JA22[4][4];
T12122[4][5]=JA22[4][5];
T12122[4][6]=JA22[4][6];

T12122[5][1]=JA22[5][1];
T12122[5][2]=JA22[5][2];
T12122[5][3]=JA22[5][3];
T12122[5][4]=JA22[5][4];
T12122[5][5]=JA22[5][5];
T12122[5][6]=JA22[5][6];

T12122[6][1]=JA22[6][1];
T12122[6][2]=JA22[6][2];
T12122[6][3]=JA22[6][3];
T12122[6][4]=JA22[6][4];
T12122[6][5]=JA22[6][5];
T12122[6][6]=JA22[6][6];


T2122[1][1]=S2221[1][1]*(Si2122[1][1]*T12122[1][1] + Si2122[1][2]*T12122[2][1]) + S2221[2][1]*(Si2122[1][1]*T12122[1][2] + Si2122[1][2]*T12122[2][2]);
T2122[1][2]=Si2122[1][1]*T12122[1][3] + Si2122[1][2]*T12122[2][3];
T2122[1][3]=S2221[1][3]*(Si2122[1][1]*T12122[1][1] + Si2122[1][2]*T12122[2][1]) + S2221[2][3]*(Si2122[1][1]*T12122[1][2] + Si2122[1][2]*T12122[2][2]);
T2122[1][4]=S2221[1][1]*(Si2122[1][1]*T12122[1][4] + Si2122[1][2]*T12122[2][4]) + S2221[2][1]*(Si2122[1][1]*T12122[1][5] + Si2122[1][2]*T12122[2][5]);
T2122[1][5]=Si2122[1][1]*T12122[1][6] + Si2122[1][2]*T12122[2][6];
T2122[1][6]=S2221[1][3]*(Si2122[1][1]*T12122[1][4] + Si2122[1][2]*T12122[2][4]) + S2221[2][3]*(Si2122[1][1]*T12122[1][5] + Si2122[1][2]*T12122[2][5]);

T2122[2][1]=S2221[1][1]*T12122[3][1] + S2221[2][1]*T12122[3][2];
T2122[2][2]=T12122[3][3];
T2122[2][3]=S2221[1][3]*T12122[3][1] + S2221[2][3]*T12122[3][2];
T2122[2][4]=S2221[1][1]*T12122[3][4] + S2221[2][1]*T12122[3][5];
T2122[2][5]=T12122[3][6];
T2122[2][6]=S2221[1][3]*T12122[3][4] + S2221[2][3]*T12122[3][5];

T2122[3][1]=S2221[1][1]*(Si2122[3][1]*T12122[1][1] + Si2122[3][2]*T12122[2][1]) + S2221[2][1]*(Si2122[3][1]*T12122[1][2] + Si2122[3][2]*T12122[2][2]);
T2122[3][2]=Si2122[3][1]*T12122[1][3] + Si2122[3][2]*T12122[2][3];
T2122[3][3]=S2221[1][3]*(Si2122[3][1]*T12122[1][1] + Si2122[3][2]*T12122[2][1]) + S2221[2][3]*(Si2122[3][1]*T12122[1][2] + Si2122[3][2]*T12122[2][2]);
T2122[3][4]=S2221[1][1]*(Si2122[3][1]*T12122[1][4] + Si2122[3][2]*T12122[2][4]) + S2221[2][1]*(Si2122[3][1]*T12122[1][5] + Si2122[3][2]*T12122[2][5]);
T2122[3][5]=Si2122[3][1]*T12122[1][6] + Si2122[3][2]*T12122[2][6];
T2122[3][6]=S2221[1][3]*(Si2122[3][1]*T12122[1][4] + Si2122[3][2]*T12122[2][4]) + S2221[2][3]*(Si2122[3][1]*T12122[1][5] + Si2122[3][2]*T12122[2][5]);

T2122[4][1]=S2221[1][1]*(Si2122[1][1]*T12122[4][1] + Si2122[1][2]*T12122[5][1]) + S2221[2][1]*(Si2122[1][1]*T12122[4][2] + Si2122[1][2]*T12122[5][2]);
T2122[4][2]=Si2122[1][1]*T12122[4][3] + Si2122[1][2]*T12122[5][3];
T2122[4][3]=S2221[1][3]*(Si2122[1][1]*T12122[4][1] + Si2122[1][2]*T12122[5][1]) + S2221[2][3]*(Si2122[1][1]*T12122[4][2] + Si2122[1][2]*T12122[5][2]);
T2122[4][4]=S2221[1][1]*(Si2122[1][1]*T12122[4][4] + Si2122[1][2]*T12122[5][4]) + S2221[2][1]*(Si2122[1][1]*T12122[4][5] + Si2122[1][2]*T12122[5][5]);
T2122[4][5]=Si2122[1][1]*T12122[4][6] + Si2122[1][2]*T12122[5][6];
T2122[4][6]=S2221[1][3]*(Si2122[1][1]*T12122[4][4] + Si2122[1][2]*T12122[5][4]) + S2221[2][3]*(Si2122[1][1]*T12122[4][5] + Si2122[1][2]*T12122[5][5]);

T2122[5][1]=S2221[1][1]*T12122[6][1] + S2221[2][1]*T12122[6][2];
T2122[5][2]=T12122[6][3];
T2122[5][3]=S2221[1][3]*T12122[6][1] + S2221[2][3]*T12122[6][2];
T2122[5][4]=S2221[1][1]*T12122[6][4] + S2221[2][1]*T12122[6][5];
T2122[5][5]=T12122[6][6];
T2122[5][6]=S2221[1][3]*T12122[6][4] + S2221[2][3]*T12122[6][5];

T2122[6][1]=S2221[1][1]*(Si2122[3][1]*T12122[4][1] + Si2122[3][2]*T12122[5][1]) + S2221[2][1]*(Si2122[3][1]*T12122[4][2] + Si2122[3][2]*T12122[5][2]);
T2122[6][2]=Si2122[3][1]*T12122[4][3] + Si2122[3][2]*T12122[5][3];
T2122[6][3]=S2221[1][3]*(Si2122[3][1]*T12122[4][1] + Si2122[3][2]*T12122[5][1]) + S2221[2][3]*(Si2122[3][1]*T12122[4][2] + Si2122[3][2]*T12122[5][2]);
T2122[6][4]=S2221[1][1]*(Si2122[3][1]*T12122[4][4] + Si2122[3][2]*T12122[5][4]) + S2221[2][1]*(Si2122[3][1]*T12122[4][5] + Si2122[3][2]*T12122[5][5]);
T2122[6][5]=Si2122[3][1]*T12122[4][6] + Si2122[3][2]*T12122[5][6];
T2122[6][6]=S2221[1][3]*(Si2122[3][1]*T12122[4][4] + Si2122[3][2]*T12122[5][4]) + S2221[2][3]*(Si2122[3][1]*T12122[4][5] + Si2122[3][2]*T12122[5][5]);



}


void
hoap3_InvDynArtfunc13(void)
      {
JA21[1][1]=T2122[1][1];
JA21[1][2]=links[11].mcm[3] + T2122[1][2];
JA21[1][3]=-links[11].mcm[2] + T2122[1][3];
JA21[1][4]=links[11].m + T2122[1][4];
JA21[1][5]=T2122[1][5];
JA21[1][6]=T2122[1][6];

JA21[2][1]=-links[11].mcm[3] + T2122[2][1];
JA21[2][2]=T2122[2][2];
JA21[2][3]=links[11].mcm[1] + T2122[2][3];
JA21[2][4]=T2122[2][4];
JA21[2][5]=links[11].m + T2122[2][5];
JA21[2][6]=T2122[2][6];

JA21[3][1]=links[11].mcm[2] + T2122[3][1];
JA21[3][2]=-links[11].mcm[1] + T2122[3][2];
JA21[3][3]=T2122[3][3];
JA21[3][4]=T2122[3][4];
JA21[3][5]=T2122[3][5];
JA21[3][6]=links[11].m + T2122[3][6];

JA21[4][1]=links[11].inertia[1][1] + T2122[4][1];
JA21[4][2]=links[11].inertia[1][2] + T2122[4][2];
JA21[4][3]=links[11].inertia[1][3] + T2122[4][3];
JA21[4][4]=T2122[4][4];
JA21[4][5]=-links[11].mcm[3] + T2122[4][5];
JA21[4][6]=links[11].mcm[2] + T2122[4][6];

JA21[5][1]=links[11].inertia[1][2] + T2122[5][1];
JA21[5][2]=links[11].inertia[2][2] + T2122[5][2];
JA21[5][3]=links[11].inertia[2][3] + T2122[5][3];
JA21[5][4]=links[11].mcm[3] + T2122[5][4];
JA21[5][5]=T2122[5][5];
JA21[5][6]=-links[11].mcm[1] + T2122[5][6];

JA21[6][1]=links[11].inertia[1][3] + T2122[6][1];
JA21[6][2]=links[11].inertia[2][3] + T2122[6][2];
JA21[6][3]=links[11].inertia[3][3] + T2122[6][3];
JA21[6][4]=-links[11].mcm[2] + T2122[6][4];
JA21[6][5]=links[11].mcm[1] + T2122[6][5];
JA21[6][6]=T2122[6][6];


h21[1]=JA21[1][3];
h21[2]=JA21[2][3];
h21[3]=JA21[3][3];
h21[4]=JA21[4][3];
h21[5]=JA21[5][3];
h21[6]=JA21[6][3];

T12021[1][1]=JA21[1][1];
T12021[1][2]=JA21[1][2];
T12021[1][3]=JA21[1][3];
T12021[1][4]=JA21[1][4];
T12021[1][5]=JA21[1][5];
T12021[1][6]=JA21[1][6];

T12021[2][1]=JA21[2][1];
T12021[2][2]=JA21[2][2];
T12021[2][3]=JA21[2][3];
T12021[2][4]=JA21[2][4];
T12021[2][5]=JA21[2][5];
T12021[2][6]=JA21[2][6];

T12021[3][1]=JA21[3][1];
T12021[3][2]=JA21[3][2];
T12021[3][3]=JA21[3][3];
T12021[3][4]=JA21[3][4];
T12021[3][5]=JA21[3][5];
T12021[3][6]=JA21[3][6];

T12021[4][1]=JA21[4][1];
T12021[4][2]=JA21[4][2];
T12021[4][3]=JA21[4][3];
T12021[4][4]=JA21[4][4];
T12021[4][5]=JA21[4][5];
T12021[4][6]=JA21[4][6];

T12021[5][1]=JA21[5][1];
T12021[5][2]=JA21[5][2];
T12021[5][3]=JA21[5][3];
T12021[5][4]=JA21[5][4];
T12021[5][5]=JA21[5][5];
T12021[5][6]=JA21[5][6];

T12021[6][1]=JA21[6][1];
T12021[6][2]=JA21[6][2];
T12021[6][3]=JA21[6][3];
T12021[6][4]=JA21[6][4];
T12021[6][5]=JA21[6][5];
T12021[6][6]=JA21[6][6];


T2021[1][1]=S2120[1][1]*(Si2021[1][1]*T12021[1][1] + Si2021[1][2]*T12021[2][1]) + S2120[2][1]*(Si2021[1][1]*T12021[1][2] + Si2021[1][2]*T12021[2][2]);
T2021[1][2]=S2120[1][2]*(Si2021[1][1]*T12021[1][1] + Si2021[1][2]*T12021[2][1]) + S2120[2][2]*(Si2021[1][1]*T12021[1][2] + Si2021[1][2]*T12021[2][2]) + LEGLINK3*(Si2021[1][1]*T12021[1][6] + Si2021[1][2]*T12021[2][6]);
T2021[1][3]=Si2021[1][1]*T12021[1][3] + Si2021[1][2]*T12021[2][3] - LEGLINK3*S2120[1][2]*(Si2021[1][1]*T12021[1][4] + Si2021[1][2]*T12021[2][4]) - LEGLINK3*S2120[2][2]*(Si2021[1][1]*T12021[1][5] + Si2021[1][2]*T12021[2][5]);
T2021[1][4]=S2120[1][1]*(Si2021[1][1]*T12021[1][4] + Si2021[1][2]*T12021[2][4]) + S2120[2][1]*(Si2021[1][1]*T12021[1][5] + Si2021[1][2]*T12021[2][5]);
T2021[1][5]=S2120[1][2]*(Si2021[1][1]*T12021[1][4] + Si2021[1][2]*T12021[2][4]) + S2120[2][2]*(Si2021[1][1]*T12021[1][5] + Si2021[1][2]*T12021[2][5]);
T2021[1][6]=Si2021[1][1]*T12021[1][6] + Si2021[1][2]*T12021[2][6];

T2021[2][1]=S2120[1][1]*(Si2021[2][1]*T12021[1][1] + Si2021[2][2]*T12021[2][1]) + S2120[2][1]*(Si2021[2][1]*T12021[1][2] + Si2021[2][2]*T12021[2][2]);
T2021[2][2]=S2120[1][2]*(Si2021[2][1]*T12021[1][1] + Si2021[2][2]*T12021[2][1]) + S2120[2][2]*(Si2021[2][1]*T12021[1][2] + Si2021[2][2]*T12021[2][2]) + LEGLINK3*(Si2021[2][1]*T12021[1][6] + Si2021[2][2]*T12021[2][6]);
T2021[2][3]=Si2021[2][1]*T12021[1][3] + Si2021[2][2]*T12021[2][3] - LEGLINK3*S2120[1][2]*(Si2021[2][1]*T12021[1][4] + Si2021[2][2]*T12021[2][4]) - LEGLINK3*S2120[2][2]*(Si2021[2][1]*T12021[1][5] + Si2021[2][2]*T12021[2][5]);
T2021[2][4]=S2120[1][1]*(Si2021[2][1]*T12021[1][4] + Si2021[2][2]*T12021[2][4]) + S2120[2][1]*(Si2021[2][1]*T12021[1][5] + Si2021[2][2]*T12021[2][5]);
T2021[2][5]=S2120[1][2]*(Si2021[2][1]*T12021[1][4] + Si2021[2][2]*T12021[2][4]) + S2120[2][2]*(Si2021[2][1]*T12021[1][5] + Si2021[2][2]*T12021[2][5]);
T2021[2][6]=Si2021[2][1]*T12021[1][6] + Si2021[2][2]*T12021[2][6];

T2021[3][1]=S2120[1][1]*T12021[3][1] + S2120[2][1]*T12021[3][2];
T2021[3][2]=S2120[1][2]*T12021[3][1] + S2120[2][2]*T12021[3][2] + LEGLINK3*T12021[3][6];
T2021[3][3]=T12021[3][3] - LEGLINK3*S2120[1][2]*T12021[3][4] - LEGLINK3*S2120[2][2]*T12021[3][5];
T2021[3][4]=S2120[1][1]*T12021[3][4] + S2120[2][1]*T12021[3][5];
T2021[3][5]=S2120[1][2]*T12021[3][4] + S2120[2][2]*T12021[3][5];
T2021[3][6]=T12021[3][6];

T2021[4][1]=S2120[1][1]*(Si2021[1][1]*T12021[4][1] + Si2021[1][2]*T12021[5][1]) + S2120[2][1]*(Si2021[1][1]*T12021[4][2] + Si2021[1][2]*T12021[5][2]);
T2021[4][2]=S2120[1][2]*(Si2021[1][1]*T12021[4][1] + Si2021[1][2]*T12021[5][1]) + S2120[2][2]*(Si2021[1][1]*T12021[4][2] + Si2021[1][2]*T12021[5][2]) + LEGLINK3*(Si2021[1][1]*T12021[4][6] + Si2021[1][2]*T12021[5][6]);
T2021[4][3]=Si2021[1][1]*T12021[4][3] + Si2021[1][2]*T12021[5][3] - LEGLINK3*S2120[1][2]*(Si2021[1][1]*T12021[4][4] + Si2021[1][2]*T12021[5][4]) - LEGLINK3*S2120[2][2]*(Si2021[1][1]*T12021[4][5] + Si2021[1][2]*T12021[5][5]);
T2021[4][4]=S2120[1][1]*(Si2021[1][1]*T12021[4][4] + Si2021[1][2]*T12021[5][4]) + S2120[2][1]*(Si2021[1][1]*T12021[4][5] + Si2021[1][2]*T12021[5][5]);
T2021[4][5]=S2120[1][2]*(Si2021[1][1]*T12021[4][4] + Si2021[1][2]*T12021[5][4]) + S2120[2][2]*(Si2021[1][1]*T12021[4][5] + Si2021[1][2]*T12021[5][5]);
T2021[4][6]=Si2021[1][1]*T12021[4][6] + Si2021[1][2]*T12021[5][6];

T2021[5][1]=S2120[1][1]*(LEGLINK3*T12021[3][1] + Si2021[2][1]*T12021[4][1] + Si2021[2][2]*T12021[5][1]) + S2120[2][1]*(LEGLINK3*T12021[3][2] + Si2021[2][1]*T12021[4][2] + Si2021[2][2]*T12021[5][2]);
T2021[5][2]=S2120[1][2]*(LEGLINK3*T12021[3][1] + Si2021[2][1]*T12021[4][1] + Si2021[2][2]*T12021[5][1]) + S2120[2][2]*(LEGLINK3*T12021[3][2] + Si2021[2][1]*T12021[4][2] + Si2021[2][2]*T12021[5][2]) + LEGLINK3*(LEGLINK3*T12021[3][6] + Si2021[2][1]*T12021[4][6] + Si2021[2][2]*T12021[5][6]);
T2021[5][3]=LEGLINK3*T12021[3][3] + Si2021[2][1]*T12021[4][3] + Si2021[2][2]*T12021[5][3] - LEGLINK3*S2120[1][2]*(LEGLINK3*T12021[3][4] + Si2021[2][1]*T12021[4][4] + Si2021[2][2]*T12021[5][4]) - LEGLINK3*S2120[2][2]*(LEGLINK3*T12021[3][5] + Si2021[2][1]*T12021[4][5] + Si2021[2][2]*T12021[5][5]);
T2021[5][4]=S2120[1][1]*(LEGLINK3*T12021[3][4] + Si2021[2][1]*T12021[4][4] + Si2021[2][2]*T12021[5][4]) + S2120[2][1]*(LEGLINK3*T12021[3][5] + Si2021[2][1]*T12021[4][5] + Si2021[2][2]*T12021[5][5]);
T2021[5][5]=S2120[1][2]*(LEGLINK3*T12021[3][4] + Si2021[2][1]*T12021[4][4] + Si2021[2][2]*T12021[5][4]) + S2120[2][2]*(LEGLINK3*T12021[3][5] + Si2021[2][1]*T12021[4][5] + Si2021[2][2]*T12021[5][5]);
T2021[5][6]=LEGLINK3*T12021[3][6] + Si2021[2][1]*T12021[4][6] + Si2021[2][2]*T12021[5][6];

T2021[6][1]=S2120[1][1]*(-(LEGLINK3*Si2021[2][1]*T12021[1][1]) - LEGLINK3*Si2021[2][2]*T12021[2][1] + T12021[6][1]) + S2120[2][1]*(-(LEGLINK3*Si2021[2][1]*T12021[1][2]) - LEGLINK3*Si2021[2][2]*T12021[2][2] + T12021[6][2]);
T2021[6][2]=S2120[1][2]*(-(LEGLINK3*Si2021[2][1]*T12021[1][1]) - LEGLINK3*Si2021[2][2]*T12021[2][1] + T12021[6][1]) + S2120[2][2]*(-(LEGLINK3*Si2021[2][1]*T12021[1][2]) - LEGLINK3*Si2021[2][2]*T12021[2][2] + T12021[6][2]) + LEGLINK3*(-(LEGLINK3*Si2021[2][1]*T12021[1][6]) - LEGLINK3*Si2021[2][2]*T12021[2][6] + T12021[6][6]);
T2021[6][3]=-(LEGLINK3*Si2021[2][1]*T12021[1][3]) - LEGLINK3*Si2021[2][2]*T12021[2][3] + T12021[6][3] - LEGLINK3*S2120[1][2]*(-(LEGLINK3*Si2021[2][1]*T12021[1][4]) - LEGLINK3*Si2021[2][2]*T12021[2][4] + T12021[6][4]) - LEGLINK3*S2120[2][2]*(-(LEGLINK3*Si2021[2][1]*T12021[1][5]) - LEGLINK3*Si2021[2][2]*T12021[2][5] + T12021[6][5]);
T2021[6][4]=S2120[1][1]*(-(LEGLINK3*Si2021[2][1]*T12021[1][4]) - LEGLINK3*Si2021[2][2]*T12021[2][4] + T12021[6][4]) + S2120[2][1]*(-(LEGLINK3*Si2021[2][1]*T12021[1][5]) - LEGLINK3*Si2021[2][2]*T12021[2][5] + T12021[6][5]);
T2021[6][5]=S2120[1][2]*(-(LEGLINK3*Si2021[2][1]*T12021[1][4]) - LEGLINK3*Si2021[2][2]*T12021[2][4] + T12021[6][4]) + S2120[2][2]*(-(LEGLINK3*Si2021[2][1]*T12021[1][5]) - LEGLINK3*Si2021[2][2]*T12021[2][5] + T12021[6][5]);
T2021[6][6]=-(LEGLINK3*Si2021[2][1]*T12021[1][6]) - LEGLINK3*Si2021[2][2]*T12021[2][6] + T12021[6][6];



}


void
hoap3_InvDynArtfunc14(void)
      {
JA20[1][1]=T2021[1][1];
JA20[1][2]=links[10].mcm[3] + T2021[1][2];
JA20[1][3]=-links[10].mcm[2] + T2021[1][3];
JA20[1][4]=links[10].m + T2021[1][4];
JA20[1][5]=T2021[1][5];
JA20[1][6]=T2021[1][6];

JA20[2][1]=-links[10].mcm[3] + T2021[2][1];
JA20[2][2]=T2021[2][2];
JA20[2][3]=links[10].mcm[1] + T2021[2][3];
JA20[2][4]=T2021[2][4];
JA20[2][5]=links[10].m + T2021[2][5];
JA20[2][6]=T2021[2][6];

JA20[3][1]=links[10].mcm[2] + T2021[3][1];
JA20[3][2]=-links[10].mcm[1] + T2021[3][2];
JA20[3][3]=T2021[3][3];
JA20[3][4]=T2021[3][4];
JA20[3][5]=T2021[3][5];
JA20[3][6]=links[10].m + T2021[3][6];

JA20[4][1]=links[10].inertia[1][1] + T2021[4][1];
JA20[4][2]=links[10].inertia[1][2] + T2021[4][2];
JA20[4][3]=links[10].inertia[1][3] + T2021[4][3];
JA20[4][4]=T2021[4][4];
JA20[4][5]=-links[10].mcm[3] + T2021[4][5];
JA20[4][6]=links[10].mcm[2] + T2021[4][6];

JA20[5][1]=links[10].inertia[1][2] + T2021[5][1];
JA20[5][2]=links[10].inertia[2][2] + T2021[5][2];
JA20[5][3]=links[10].inertia[2][3] + T2021[5][3];
JA20[5][4]=links[10].mcm[3] + T2021[5][4];
JA20[5][5]=T2021[5][5];
JA20[5][6]=-links[10].mcm[1] + T2021[5][6];

JA20[6][1]=links[10].inertia[1][3] + T2021[6][1];
JA20[6][2]=links[10].inertia[2][3] + T2021[6][2];
JA20[6][3]=links[10].inertia[3][3] + T2021[6][3];
JA20[6][4]=-links[10].mcm[2] + T2021[6][4];
JA20[6][5]=links[10].mcm[1] + T2021[6][5];
JA20[6][6]=T2021[6][6];


h20[1]=JA20[1][3];
h20[2]=JA20[2][3];
h20[3]=JA20[3][3];
h20[4]=JA20[4][3];
h20[5]=JA20[5][3];
h20[6]=JA20[6][3];

T11920[1][1]=JA20[1][1];
T11920[1][2]=JA20[1][2];
T11920[1][3]=JA20[1][3];
T11920[1][4]=JA20[1][4];
T11920[1][5]=JA20[1][5];
T11920[1][6]=JA20[1][6];

T11920[2][1]=JA20[2][1];
T11920[2][2]=JA20[2][2];
T11920[2][3]=JA20[2][3];
T11920[2][4]=JA20[2][4];
T11920[2][5]=JA20[2][5];
T11920[2][6]=JA20[2][6];

T11920[3][1]=JA20[3][1];
T11920[3][2]=JA20[3][2];
T11920[3][3]=JA20[3][3];
T11920[3][4]=JA20[3][4];
T11920[3][5]=JA20[3][5];
T11920[3][6]=JA20[3][6];

T11920[4][1]=JA20[4][1];
T11920[4][2]=JA20[4][2];
T11920[4][3]=JA20[4][3];
T11920[4][4]=JA20[4][4];
T11920[4][5]=JA20[4][5];
T11920[4][6]=JA20[4][6];

T11920[5][1]=JA20[5][1];
T11920[5][2]=JA20[5][2];
T11920[5][3]=JA20[5][3];
T11920[5][4]=JA20[5][4];
T11920[5][5]=JA20[5][5];
T11920[5][6]=JA20[5][6];

T11920[6][1]=JA20[6][1];
T11920[6][2]=JA20[6][2];
T11920[6][3]=JA20[6][3];
T11920[6][4]=JA20[6][4];
T11920[6][5]=JA20[6][5];
T11920[6][6]=JA20[6][6];


T1920[1][1]=S2019[1][1]*(Si1920[1][1]*T11920[1][1] + Si1920[1][2]*T11920[2][1]) + S2019[2][1]*(Si1920[1][1]*T11920[1][2] + Si1920[1][2]*T11920[2][2]);
T1920[1][2]=S2019[1][2]*(Si1920[1][1]*T11920[1][1] + Si1920[1][2]*T11920[2][1]) + S2019[2][2]*(Si1920[1][1]*T11920[1][2] + Si1920[1][2]*T11920[2][2]) + LEGLINK2*(Si1920[1][1]*T11920[1][6] + Si1920[1][2]*T11920[2][6]);
T1920[1][3]=Si1920[1][1]*T11920[1][3] + Si1920[1][2]*T11920[2][3] - LEGLINK2*S2019[1][2]*(Si1920[1][1]*T11920[1][4] + Si1920[1][2]*T11920[2][4]) - LEGLINK2*S2019[2][2]*(Si1920[1][1]*T11920[1][5] + Si1920[1][2]*T11920[2][5]);
T1920[1][4]=S2019[1][1]*(Si1920[1][1]*T11920[1][4] + Si1920[1][2]*T11920[2][4]) + S2019[2][1]*(Si1920[1][1]*T11920[1][5] + Si1920[1][2]*T11920[2][5]);
T1920[1][5]=S2019[1][2]*(Si1920[1][1]*T11920[1][4] + Si1920[1][2]*T11920[2][4]) + S2019[2][2]*(Si1920[1][1]*T11920[1][5] + Si1920[1][2]*T11920[2][5]);
T1920[1][6]=Si1920[1][1]*T11920[1][6] + Si1920[1][2]*T11920[2][6];

T1920[2][1]=S2019[1][1]*(Si1920[2][1]*T11920[1][1] + Si1920[2][2]*T11920[2][1]) + S2019[2][1]*(Si1920[2][1]*T11920[1][2] + Si1920[2][2]*T11920[2][2]);
T1920[2][2]=S2019[1][2]*(Si1920[2][1]*T11920[1][1] + Si1920[2][2]*T11920[2][1]) + S2019[2][2]*(Si1920[2][1]*T11920[1][2] + Si1920[2][2]*T11920[2][2]) + LEGLINK2*(Si1920[2][1]*T11920[1][6] + Si1920[2][2]*T11920[2][6]);
T1920[2][3]=Si1920[2][1]*T11920[1][3] + Si1920[2][2]*T11920[2][3] - LEGLINK2*S2019[1][2]*(Si1920[2][1]*T11920[1][4] + Si1920[2][2]*T11920[2][4]) - LEGLINK2*S2019[2][2]*(Si1920[2][1]*T11920[1][5] + Si1920[2][2]*T11920[2][5]);
T1920[2][4]=S2019[1][1]*(Si1920[2][1]*T11920[1][4] + Si1920[2][2]*T11920[2][4]) + S2019[2][1]*(Si1920[2][1]*T11920[1][5] + Si1920[2][2]*T11920[2][5]);
T1920[2][5]=S2019[1][2]*(Si1920[2][1]*T11920[1][4] + Si1920[2][2]*T11920[2][4]) + S2019[2][2]*(Si1920[2][1]*T11920[1][5] + Si1920[2][2]*T11920[2][5]);
T1920[2][6]=Si1920[2][1]*T11920[1][6] + Si1920[2][2]*T11920[2][6];

T1920[3][1]=S2019[1][1]*T11920[3][1] + S2019[2][1]*T11920[3][2];
T1920[3][2]=S2019[1][2]*T11920[3][1] + S2019[2][2]*T11920[3][2] + LEGLINK2*T11920[3][6];
T1920[3][3]=T11920[3][3] - LEGLINK2*S2019[1][2]*T11920[3][4] - LEGLINK2*S2019[2][2]*T11920[3][5];
T1920[3][4]=S2019[1][1]*T11920[3][4] + S2019[2][1]*T11920[3][5];
T1920[3][5]=S2019[1][2]*T11920[3][4] + S2019[2][2]*T11920[3][5];
T1920[3][6]=T11920[3][6];

T1920[4][1]=S2019[1][1]*(Si1920[1][1]*T11920[4][1] + Si1920[1][2]*T11920[5][1]) + S2019[2][1]*(Si1920[1][1]*T11920[4][2] + Si1920[1][2]*T11920[5][2]);
T1920[4][2]=S2019[1][2]*(Si1920[1][1]*T11920[4][1] + Si1920[1][2]*T11920[5][1]) + S2019[2][2]*(Si1920[1][1]*T11920[4][2] + Si1920[1][2]*T11920[5][2]) + LEGLINK2*(Si1920[1][1]*T11920[4][6] + Si1920[1][2]*T11920[5][6]);
T1920[4][3]=Si1920[1][1]*T11920[4][3] + Si1920[1][2]*T11920[5][3] - LEGLINK2*S2019[1][2]*(Si1920[1][1]*T11920[4][4] + Si1920[1][2]*T11920[5][4]) - LEGLINK2*S2019[2][2]*(Si1920[1][1]*T11920[4][5] + Si1920[1][2]*T11920[5][5]);
T1920[4][4]=S2019[1][1]*(Si1920[1][1]*T11920[4][4] + Si1920[1][2]*T11920[5][4]) + S2019[2][1]*(Si1920[1][1]*T11920[4][5] + Si1920[1][2]*T11920[5][5]);
T1920[4][5]=S2019[1][2]*(Si1920[1][1]*T11920[4][4] + Si1920[1][2]*T11920[5][4]) + S2019[2][2]*(Si1920[1][1]*T11920[4][5] + Si1920[1][2]*T11920[5][5]);
T1920[4][6]=Si1920[1][1]*T11920[4][6] + Si1920[1][2]*T11920[5][6];

T1920[5][1]=S2019[1][1]*(LEGLINK2*T11920[3][1] + Si1920[2][1]*T11920[4][1] + Si1920[2][2]*T11920[5][1]) + S2019[2][1]*(LEGLINK2*T11920[3][2] + Si1920[2][1]*T11920[4][2] + Si1920[2][2]*T11920[5][2]);
T1920[5][2]=S2019[1][2]*(LEGLINK2*T11920[3][1] + Si1920[2][1]*T11920[4][1] + Si1920[2][2]*T11920[5][1]) + S2019[2][2]*(LEGLINK2*T11920[3][2] + Si1920[2][1]*T11920[4][2] + Si1920[2][2]*T11920[5][2]) + LEGLINK2*(LEGLINK2*T11920[3][6] + Si1920[2][1]*T11920[4][6] + Si1920[2][2]*T11920[5][6]);
T1920[5][3]=LEGLINK2*T11920[3][3] + Si1920[2][1]*T11920[4][3] + Si1920[2][2]*T11920[5][3] - LEGLINK2*S2019[1][2]*(LEGLINK2*T11920[3][4] + Si1920[2][1]*T11920[4][4] + Si1920[2][2]*T11920[5][4]) - LEGLINK2*S2019[2][2]*(LEGLINK2*T11920[3][5] + Si1920[2][1]*T11920[4][5] + Si1920[2][2]*T11920[5][5]);
T1920[5][4]=S2019[1][1]*(LEGLINK2*T11920[3][4] + Si1920[2][1]*T11920[4][4] + Si1920[2][2]*T11920[5][4]) + S2019[2][1]*(LEGLINK2*T11920[3][5] + Si1920[2][1]*T11920[4][5] + Si1920[2][2]*T11920[5][5]);
T1920[5][5]=S2019[1][2]*(LEGLINK2*T11920[3][4] + Si1920[2][1]*T11920[4][4] + Si1920[2][2]*T11920[5][4]) + S2019[2][2]*(LEGLINK2*T11920[3][5] + Si1920[2][1]*T11920[4][5] + Si1920[2][2]*T11920[5][5]);
T1920[5][6]=LEGLINK2*T11920[3][6] + Si1920[2][1]*T11920[4][6] + Si1920[2][2]*T11920[5][6];

T1920[6][1]=S2019[1][1]*(-(LEGLINK2*Si1920[2][1]*T11920[1][1]) - LEGLINK2*Si1920[2][2]*T11920[2][1] + T11920[6][1]) + S2019[2][1]*(-(LEGLINK2*Si1920[2][1]*T11920[1][2]) - LEGLINK2*Si1920[2][2]*T11920[2][2] + T11920[6][2]);
T1920[6][2]=S2019[1][2]*(-(LEGLINK2*Si1920[2][1]*T11920[1][1]) - LEGLINK2*Si1920[2][2]*T11920[2][1] + T11920[6][1]) + S2019[2][2]*(-(LEGLINK2*Si1920[2][1]*T11920[1][2]) - LEGLINK2*Si1920[2][2]*T11920[2][2] + T11920[6][2]) + LEGLINK2*(-(LEGLINK2*Si1920[2][1]*T11920[1][6]) - LEGLINK2*Si1920[2][2]*T11920[2][6] + T11920[6][6]);
T1920[6][3]=-(LEGLINK2*Si1920[2][1]*T11920[1][3]) - LEGLINK2*Si1920[2][2]*T11920[2][3] + T11920[6][3] - LEGLINK2*S2019[1][2]*(-(LEGLINK2*Si1920[2][1]*T11920[1][4]) - LEGLINK2*Si1920[2][2]*T11920[2][4] + T11920[6][4]) - LEGLINK2*S2019[2][2]*(-(LEGLINK2*Si1920[2][1]*T11920[1][5]) - LEGLINK2*Si1920[2][2]*T11920[2][5] + T11920[6][5]);
T1920[6][4]=S2019[1][1]*(-(LEGLINK2*Si1920[2][1]*T11920[1][4]) - LEGLINK2*Si1920[2][2]*T11920[2][4] + T11920[6][4]) + S2019[2][1]*(-(LEGLINK2*Si1920[2][1]*T11920[1][5]) - LEGLINK2*Si1920[2][2]*T11920[2][5] + T11920[6][5]);
T1920[6][5]=S2019[1][2]*(-(LEGLINK2*Si1920[2][1]*T11920[1][4]) - LEGLINK2*Si1920[2][2]*T11920[2][4] + T11920[6][4]) + S2019[2][2]*(-(LEGLINK2*Si1920[2][1]*T11920[1][5]) - LEGLINK2*Si1920[2][2]*T11920[2][5] + T11920[6][5]);
T1920[6][6]=-(LEGLINK2*Si1920[2][1]*T11920[1][6]) - LEGLINK2*Si1920[2][2]*T11920[2][6] + T11920[6][6];



}


void
hoap3_InvDynArtfunc15(void)
      {
JA19[1][1]=T1920[1][1];
JA19[1][2]=links[9].mcm[3] + T1920[1][2];
JA19[1][3]=-links[9].mcm[2] + T1920[1][3];
JA19[1][4]=links[9].m + T1920[1][4];
JA19[1][5]=T1920[1][5];
JA19[1][6]=T1920[1][6];

JA19[2][1]=-links[9].mcm[3] + T1920[2][1];
JA19[2][2]=T1920[2][2];
JA19[2][3]=links[9].mcm[1] + T1920[2][3];
JA19[2][4]=T1920[2][4];
JA19[2][5]=links[9].m + T1920[2][5];
JA19[2][6]=T1920[2][6];

JA19[3][1]=links[9].mcm[2] + T1920[3][1];
JA19[3][2]=-links[9].mcm[1] + T1920[3][2];
JA19[3][3]=T1920[3][3];
JA19[3][4]=T1920[3][4];
JA19[3][5]=T1920[3][5];
JA19[3][6]=links[9].m + T1920[3][6];

JA19[4][1]=links[9].inertia[1][1] + T1920[4][1];
JA19[4][2]=links[9].inertia[1][2] + T1920[4][2];
JA19[4][3]=links[9].inertia[1][3] + T1920[4][3];
JA19[4][4]=T1920[4][4];
JA19[4][5]=-links[9].mcm[3] + T1920[4][5];
JA19[4][6]=links[9].mcm[2] + T1920[4][6];

JA19[5][1]=links[9].inertia[1][2] + T1920[5][1];
JA19[5][2]=links[9].inertia[2][2] + T1920[5][2];
JA19[5][3]=links[9].inertia[2][3] + T1920[5][3];
JA19[5][4]=links[9].mcm[3] + T1920[5][4];
JA19[5][5]=T1920[5][5];
JA19[5][6]=-links[9].mcm[1] + T1920[5][6];

JA19[6][1]=links[9].inertia[1][3] + T1920[6][1];
JA19[6][2]=links[9].inertia[2][3] + T1920[6][2];
JA19[6][3]=links[9].inertia[3][3] + T1920[6][3];
JA19[6][4]=-links[9].mcm[2] + T1920[6][4];
JA19[6][5]=links[9].mcm[1] + T1920[6][5];
JA19[6][6]=T1920[6][6];


h19[1]=JA19[1][3];
h19[2]=JA19[2][3];
h19[3]=JA19[3][3];
h19[4]=JA19[4][3];
h19[5]=JA19[5][3];
h19[6]=JA19[6][3];

T11819[1][1]=JA19[1][1];
T11819[1][2]=JA19[1][2];
T11819[1][3]=JA19[1][3];
T11819[1][4]=JA19[1][4];
T11819[1][5]=JA19[1][5];
T11819[1][6]=JA19[1][6];

T11819[2][1]=JA19[2][1];
T11819[2][2]=JA19[2][2];
T11819[2][3]=JA19[2][3];
T11819[2][4]=JA19[2][4];
T11819[2][5]=JA19[2][5];
T11819[2][6]=JA19[2][6];

T11819[3][1]=JA19[3][1];
T11819[3][2]=JA19[3][2];
T11819[3][3]=JA19[3][3];
T11819[3][4]=JA19[3][4];
T11819[3][5]=JA19[3][5];
T11819[3][6]=JA19[3][6];

T11819[4][1]=JA19[4][1];
T11819[4][2]=JA19[4][2];
T11819[4][3]=JA19[4][3];
T11819[4][4]=JA19[4][4];
T11819[4][5]=JA19[4][5];
T11819[4][6]=JA19[4][6];

T11819[5][1]=JA19[5][1];
T11819[5][2]=JA19[5][2];
T11819[5][3]=JA19[5][3];
T11819[5][4]=JA19[5][4];
T11819[5][5]=JA19[5][5];
T11819[5][6]=JA19[5][6];

T11819[6][1]=JA19[6][1];
T11819[6][2]=JA19[6][2];
T11819[6][3]=JA19[6][3];
T11819[6][4]=JA19[6][4];
T11819[6][5]=JA19[6][5];
T11819[6][6]=JA19[6][6];


T1819[1][1]=S1918[1][1]*(Si1819[1][1]*T11819[1][1] + Si1819[1][2]*T11819[2][1]) + S1918[2][1]*(Si1819[1][1]*T11819[1][2] + Si1819[1][2]*T11819[2][2]);
T1819[1][2]=-(Si1819[1][1]*T11819[1][3]) - Si1819[1][2]*T11819[2][3];
T1819[1][3]=S1918[1][3]*(Si1819[1][1]*T11819[1][1] + Si1819[1][2]*T11819[2][1]) + S1918[2][3]*(Si1819[1][1]*T11819[1][2] + Si1819[1][2]*T11819[2][2]);
T1819[1][4]=S1918[1][1]*(Si1819[1][1]*T11819[1][4] + Si1819[1][2]*T11819[2][4]) + S1918[2][1]*(Si1819[1][1]*T11819[1][5] + Si1819[1][2]*T11819[2][5]);
T1819[1][5]=-(Si1819[1][1]*T11819[1][6]) - Si1819[1][2]*T11819[2][6];
T1819[1][6]=S1918[1][3]*(Si1819[1][1]*T11819[1][4] + Si1819[1][2]*T11819[2][4]) + S1918[2][3]*(Si1819[1][1]*T11819[1][5] + Si1819[1][2]*T11819[2][5]);

T1819[2][1]=-(S1918[1][1]*T11819[3][1]) - S1918[2][1]*T11819[3][2];
T1819[2][2]=T11819[3][3];
T1819[2][3]=-(S1918[1][3]*T11819[3][1]) - S1918[2][3]*T11819[3][2];
T1819[2][4]=-(S1918[1][1]*T11819[3][4]) - S1918[2][1]*T11819[3][5];
T1819[2][5]=T11819[3][6];
T1819[2][6]=-(S1918[1][3]*T11819[3][4]) - S1918[2][3]*T11819[3][5];

T1819[3][1]=S1918[1][1]*(Si1819[3][1]*T11819[1][1] + Si1819[3][2]*T11819[2][1]) + S1918[2][1]*(Si1819[3][1]*T11819[1][2] + Si1819[3][2]*T11819[2][2]);
T1819[3][2]=-(Si1819[3][1]*T11819[1][3]) - Si1819[3][2]*T11819[2][3];
T1819[3][3]=S1918[1][3]*(Si1819[3][1]*T11819[1][1] + Si1819[3][2]*T11819[2][1]) + S1918[2][3]*(Si1819[3][1]*T11819[1][2] + Si1819[3][2]*T11819[2][2]);
T1819[3][4]=S1918[1][1]*(Si1819[3][1]*T11819[1][4] + Si1819[3][2]*T11819[2][4]) + S1918[2][1]*(Si1819[3][1]*T11819[1][5] + Si1819[3][2]*T11819[2][5]);
T1819[3][5]=-(Si1819[3][1]*T11819[1][6]) - Si1819[3][2]*T11819[2][6];
T1819[3][6]=S1918[1][3]*(Si1819[3][1]*T11819[1][4] + Si1819[3][2]*T11819[2][4]) + S1918[2][3]*(Si1819[3][1]*T11819[1][5] + Si1819[3][2]*T11819[2][5]);

T1819[4][1]=S1918[1][1]*(Si1819[1][1]*T11819[4][1] + Si1819[1][2]*T11819[5][1]) + S1918[2][1]*(Si1819[1][1]*T11819[4][2] + Si1819[1][2]*T11819[5][2]);
T1819[4][2]=-(Si1819[1][1]*T11819[4][3]) - Si1819[1][2]*T11819[5][3];
T1819[4][3]=S1918[1][3]*(Si1819[1][1]*T11819[4][1] + Si1819[1][2]*T11819[5][1]) + S1918[2][3]*(Si1819[1][1]*T11819[4][2] + Si1819[1][2]*T11819[5][2]);
T1819[4][4]=S1918[1][1]*(Si1819[1][1]*T11819[4][4] + Si1819[1][2]*T11819[5][4]) + S1918[2][1]*(Si1819[1][1]*T11819[4][5] + Si1819[1][2]*T11819[5][5]);
T1819[4][5]=-(Si1819[1][1]*T11819[4][6]) - Si1819[1][2]*T11819[5][6];
T1819[4][6]=S1918[1][3]*(Si1819[1][1]*T11819[4][4] + Si1819[1][2]*T11819[5][4]) + S1918[2][3]*(Si1819[1][1]*T11819[4][5] + Si1819[1][2]*T11819[5][5]);

T1819[5][1]=-(S1918[1][1]*T11819[6][1]) - S1918[2][1]*T11819[6][2];
T1819[5][2]=T11819[6][3];
T1819[5][3]=-(S1918[1][3]*T11819[6][1]) - S1918[2][3]*T11819[6][2];
T1819[5][4]=-(S1918[1][1]*T11819[6][4]) - S1918[2][1]*T11819[6][5];
T1819[5][5]=T11819[6][6];
T1819[5][6]=-(S1918[1][3]*T11819[6][4]) - S1918[2][3]*T11819[6][5];

T1819[6][1]=S1918[1][1]*(Si1819[3][1]*T11819[4][1] + Si1819[3][2]*T11819[5][1]) + S1918[2][1]*(Si1819[3][1]*T11819[4][2] + Si1819[3][2]*T11819[5][2]);
T1819[6][2]=-(Si1819[3][1]*T11819[4][3]) - Si1819[3][2]*T11819[5][3];
T1819[6][3]=S1918[1][3]*(Si1819[3][1]*T11819[4][1] + Si1819[3][2]*T11819[5][1]) + S1918[2][3]*(Si1819[3][1]*T11819[4][2] + Si1819[3][2]*T11819[5][2]);
T1819[6][4]=S1918[1][1]*(Si1819[3][1]*T11819[4][4] + Si1819[3][2]*T11819[5][4]) + S1918[2][1]*(Si1819[3][1]*T11819[4][5] + Si1819[3][2]*T11819[5][5]);
T1819[6][5]=-(Si1819[3][1]*T11819[4][6]) - Si1819[3][2]*T11819[5][6];
T1819[6][6]=S1918[1][3]*(Si1819[3][1]*T11819[4][4] + Si1819[3][2]*T11819[5][4]) + S1918[2][3]*(Si1819[3][1]*T11819[4][5] + Si1819[3][2]*T11819[5][5]);



}


void
hoap3_InvDynArtfunc16(void)
      {
JA18[1][1]=T1819[1][1];
JA18[1][2]=links[8].mcm[3] + T1819[1][2];
JA18[1][3]=-links[8].mcm[2] + T1819[1][3];
JA18[1][4]=links[8].m + T1819[1][4];
JA18[1][5]=T1819[1][5];
JA18[1][6]=T1819[1][6];

JA18[2][1]=-links[8].mcm[3] + T1819[2][1];
JA18[2][2]=T1819[2][2];
JA18[2][3]=links[8].mcm[1] + T1819[2][3];
JA18[2][4]=T1819[2][4];
JA18[2][5]=links[8].m + T1819[2][5];
JA18[2][6]=T1819[2][6];

JA18[3][1]=links[8].mcm[2] + T1819[3][1];
JA18[3][2]=-links[8].mcm[1] + T1819[3][2];
JA18[3][3]=T1819[3][3];
JA18[3][4]=T1819[3][4];
JA18[3][5]=T1819[3][5];
JA18[3][6]=links[8].m + T1819[3][6];

JA18[4][1]=links[8].inertia[1][1] + T1819[4][1];
JA18[4][2]=links[8].inertia[1][2] + T1819[4][2];
JA18[4][3]=links[8].inertia[1][3] + T1819[4][3];
JA18[4][4]=T1819[4][4];
JA18[4][5]=-links[8].mcm[3] + T1819[4][5];
JA18[4][6]=links[8].mcm[2] + T1819[4][6];

JA18[5][1]=links[8].inertia[1][2] + T1819[5][1];
JA18[5][2]=links[8].inertia[2][2] + T1819[5][2];
JA18[5][3]=links[8].inertia[2][3] + T1819[5][3];
JA18[5][4]=links[8].mcm[3] + T1819[5][4];
JA18[5][5]=T1819[5][5];
JA18[5][6]=-links[8].mcm[1] + T1819[5][6];

JA18[6][1]=links[8].inertia[1][3] + T1819[6][1];
JA18[6][2]=links[8].inertia[2][3] + T1819[6][2];
JA18[6][3]=links[8].inertia[3][3] + T1819[6][3];
JA18[6][4]=-links[8].mcm[2] + T1819[6][4];
JA18[6][5]=links[8].mcm[1] + T1819[6][5];
JA18[6][6]=T1819[6][6];


h18[1]=JA18[1][3];
h18[2]=JA18[2][3];
h18[3]=JA18[3][3];
h18[4]=JA18[4][3];
h18[5]=JA18[5][3];
h18[6]=JA18[6][3];

T11718[1][1]=JA18[1][1];
T11718[1][2]=JA18[1][2];
T11718[1][3]=JA18[1][3];
T11718[1][4]=JA18[1][4];
T11718[1][5]=JA18[1][5];
T11718[1][6]=JA18[1][6];

T11718[2][1]=JA18[2][1];
T11718[2][2]=JA18[2][2];
T11718[2][3]=JA18[2][3];
T11718[2][4]=JA18[2][4];
T11718[2][5]=JA18[2][5];
T11718[2][6]=JA18[2][6];

T11718[3][1]=JA18[3][1];
T11718[3][2]=JA18[3][2];
T11718[3][3]=JA18[3][3];
T11718[3][4]=JA18[3][4];
T11718[3][5]=JA18[3][5];
T11718[3][6]=JA18[3][6];

T11718[4][1]=JA18[4][1];
T11718[4][2]=JA18[4][2];
T11718[4][3]=JA18[4][3];
T11718[4][4]=JA18[4][4];
T11718[4][5]=JA18[4][5];
T11718[4][6]=JA18[4][6];

T11718[5][1]=JA18[5][1];
T11718[5][2]=JA18[5][2];
T11718[5][3]=JA18[5][3];
T11718[5][4]=JA18[5][4];
T11718[5][5]=JA18[5][5];
T11718[5][6]=JA18[5][6];

T11718[6][1]=JA18[6][1];
T11718[6][2]=JA18[6][2];
T11718[6][3]=JA18[6][3];
T11718[6][4]=JA18[6][4];
T11718[6][5]=JA18[6][5];
T11718[6][6]=JA18[6][6];


T1718[1][1]=S1817[1][1]*(Si1718[1][1]*T11718[1][1] + Si1718[1][2]*T11718[2][1]) + S1817[2][1]*(Si1718[1][1]*T11718[1][2] + Si1718[1][2]*T11718[2][2]);
T1718[1][2]=-(Si1718[1][1]*T11718[1][3]) - Si1718[1][2]*T11718[2][3];
T1718[1][3]=S1817[1][3]*(Si1718[1][1]*T11718[1][1] + Si1718[1][2]*T11718[2][1]) + S1817[2][3]*(Si1718[1][1]*T11718[1][2] + Si1718[1][2]*T11718[2][2]);
T1718[1][4]=S1817[1][1]*(Si1718[1][1]*T11718[1][4] + Si1718[1][2]*T11718[2][4]) + S1817[2][1]*(Si1718[1][1]*T11718[1][5] + Si1718[1][2]*T11718[2][5]);
T1718[1][5]=-(Si1718[1][1]*T11718[1][6]) - Si1718[1][2]*T11718[2][6];
T1718[1][6]=S1817[1][3]*(Si1718[1][1]*T11718[1][4] + Si1718[1][2]*T11718[2][4]) + S1817[2][3]*(Si1718[1][1]*T11718[1][5] + Si1718[1][2]*T11718[2][5]);

T1718[2][1]=-(S1817[1][1]*T11718[3][1]) - S1817[2][1]*T11718[3][2];
T1718[2][2]=T11718[3][3];
T1718[2][3]=-(S1817[1][3]*T11718[3][1]) - S1817[2][3]*T11718[3][2];
T1718[2][4]=-(S1817[1][1]*T11718[3][4]) - S1817[2][1]*T11718[3][5];
T1718[2][5]=T11718[3][6];
T1718[2][6]=-(S1817[1][3]*T11718[3][4]) - S1817[2][3]*T11718[3][5];

T1718[3][1]=S1817[1][1]*(Si1718[3][1]*T11718[1][1] + Si1718[3][2]*T11718[2][1]) + S1817[2][1]*(Si1718[3][1]*T11718[1][2] + Si1718[3][2]*T11718[2][2]);
T1718[3][2]=-(Si1718[3][1]*T11718[1][3]) - Si1718[3][2]*T11718[2][3];
T1718[3][3]=S1817[1][3]*(Si1718[3][1]*T11718[1][1] + Si1718[3][2]*T11718[2][1]) + S1817[2][3]*(Si1718[3][1]*T11718[1][2] + Si1718[3][2]*T11718[2][2]);
T1718[3][4]=S1817[1][1]*(Si1718[3][1]*T11718[1][4] + Si1718[3][2]*T11718[2][4]) + S1817[2][1]*(Si1718[3][1]*T11718[1][5] + Si1718[3][2]*T11718[2][5]);
T1718[3][5]=-(Si1718[3][1]*T11718[1][6]) - Si1718[3][2]*T11718[2][6];
T1718[3][6]=S1817[1][3]*(Si1718[3][1]*T11718[1][4] + Si1718[3][2]*T11718[2][4]) + S1817[2][3]*(Si1718[3][1]*T11718[1][5] + Si1718[3][2]*T11718[2][5]);

T1718[4][1]=S1817[1][1]*(Si1718[1][1]*T11718[4][1] + Si1718[1][2]*T11718[5][1]) + S1817[2][1]*(Si1718[1][1]*T11718[4][2] + Si1718[1][2]*T11718[5][2]);
T1718[4][2]=-(Si1718[1][1]*T11718[4][3]) - Si1718[1][2]*T11718[5][3];
T1718[4][3]=S1817[1][3]*(Si1718[1][1]*T11718[4][1] + Si1718[1][2]*T11718[5][1]) + S1817[2][3]*(Si1718[1][1]*T11718[4][2] + Si1718[1][2]*T11718[5][2]);
T1718[4][4]=S1817[1][1]*(Si1718[1][1]*T11718[4][4] + Si1718[1][2]*T11718[5][4]) + S1817[2][1]*(Si1718[1][1]*T11718[4][5] + Si1718[1][2]*T11718[5][5]);
T1718[4][5]=-(Si1718[1][1]*T11718[4][6]) - Si1718[1][2]*T11718[5][6];
T1718[4][6]=S1817[1][3]*(Si1718[1][1]*T11718[4][4] + Si1718[1][2]*T11718[5][4]) + S1817[2][3]*(Si1718[1][1]*T11718[4][5] + Si1718[1][2]*T11718[5][5]);

T1718[5][1]=-(S1817[1][1]*T11718[6][1]) - S1817[2][1]*T11718[6][2];
T1718[5][2]=T11718[6][3];
T1718[5][3]=-(S1817[1][3]*T11718[6][1]) - S1817[2][3]*T11718[6][2];
T1718[5][4]=-(S1817[1][1]*T11718[6][4]) - S1817[2][1]*T11718[6][5];
T1718[5][5]=T11718[6][6];
T1718[5][6]=-(S1817[1][3]*T11718[6][4]) - S1817[2][3]*T11718[6][5];

T1718[6][1]=S1817[1][1]*(Si1718[3][1]*T11718[4][1] + Si1718[3][2]*T11718[5][1]) + S1817[2][1]*(Si1718[3][1]*T11718[4][2] + Si1718[3][2]*T11718[5][2]);
T1718[6][2]=-(Si1718[3][1]*T11718[4][3]) - Si1718[3][2]*T11718[5][3];
T1718[6][3]=S1817[1][3]*(Si1718[3][1]*T11718[4][1] + Si1718[3][2]*T11718[5][1]) + S1817[2][3]*(Si1718[3][1]*T11718[4][2] + Si1718[3][2]*T11718[5][2]);
T1718[6][4]=S1817[1][1]*(Si1718[3][1]*T11718[4][4] + Si1718[3][2]*T11718[5][4]) + S1817[2][1]*(Si1718[3][1]*T11718[4][5] + Si1718[3][2]*T11718[5][5]);
T1718[6][5]=-(Si1718[3][1]*T11718[4][6]) - Si1718[3][2]*T11718[5][6];
T1718[6][6]=S1817[1][3]*(Si1718[3][1]*T11718[4][4] + Si1718[3][2]*T11718[5][4]) + S1817[2][3]*(Si1718[3][1]*T11718[4][5] + Si1718[3][2]*T11718[5][5]);



}


void
hoap3_InvDynArtfunc17(void)
      {
JA17[1][1]=T1718[1][1];
JA17[1][2]=links[7].mcm[3] + T1718[1][2];
JA17[1][3]=-links[7].mcm[2] + T1718[1][3];
JA17[1][4]=links[7].m + T1718[1][4];
JA17[1][5]=T1718[1][5];
JA17[1][6]=T1718[1][6];

JA17[2][1]=-links[7].mcm[3] + T1718[2][1];
JA17[2][2]=T1718[2][2];
JA17[2][3]=links[7].mcm[1] + T1718[2][3];
JA17[2][4]=T1718[2][4];
JA17[2][5]=links[7].m + T1718[2][5];
JA17[2][6]=T1718[2][6];

JA17[3][1]=links[7].mcm[2] + T1718[3][1];
JA17[3][2]=-links[7].mcm[1] + T1718[3][2];
JA17[3][3]=T1718[3][3];
JA17[3][4]=T1718[3][4];
JA17[3][5]=T1718[3][5];
JA17[3][6]=links[7].m + T1718[3][6];

JA17[4][1]=links[7].inertia[1][1] + T1718[4][1];
JA17[4][2]=links[7].inertia[1][2] + T1718[4][2];
JA17[4][3]=links[7].inertia[1][3] + T1718[4][3];
JA17[4][4]=T1718[4][4];
JA17[4][5]=-links[7].mcm[3] + T1718[4][5];
JA17[4][6]=links[7].mcm[2] + T1718[4][6];

JA17[5][1]=links[7].inertia[1][2] + T1718[5][1];
JA17[5][2]=links[7].inertia[2][2] + T1718[5][2];
JA17[5][3]=links[7].inertia[2][3] + T1718[5][3];
JA17[5][4]=links[7].mcm[3] + T1718[5][4];
JA17[5][5]=T1718[5][5];
JA17[5][6]=-links[7].mcm[1] + T1718[5][6];

JA17[6][1]=links[7].inertia[1][3] + T1718[6][1];
JA17[6][2]=links[7].inertia[2][3] + T1718[6][2];
JA17[6][3]=links[7].inertia[3][3] + T1718[6][3];
JA17[6][4]=-links[7].mcm[2] + T1718[6][4];
JA17[6][5]=links[7].mcm[1] + T1718[6][5];
JA17[6][6]=T1718[6][6];


h17[1]=JA17[1][3];
h17[2]=JA17[2][3];
h17[3]=JA17[3][3];
h17[4]=JA17[4][3];
h17[5]=JA17[5][3];
h17[6]=JA17[6][3];

T1517[1][1]=JA17[1][1];
T1517[1][2]=JA17[1][2];
T1517[1][3]=JA17[1][3];
T1517[1][4]=JA17[1][4];
T1517[1][5]=JA17[1][5];
T1517[1][6]=JA17[1][6];

T1517[2][1]=JA17[2][1];
T1517[2][2]=JA17[2][2];
T1517[2][3]=JA17[2][3];
T1517[2][4]=JA17[2][4];
T1517[2][5]=JA17[2][5];
T1517[2][6]=JA17[2][6];

T1517[3][1]=JA17[3][1];
T1517[3][2]=JA17[3][2];
T1517[3][3]=JA17[3][3];
T1517[3][4]=JA17[3][4];
T1517[3][5]=JA17[3][5];
T1517[3][6]=JA17[3][6];

T1517[4][1]=JA17[4][1];
T1517[4][2]=JA17[4][2];
T1517[4][3]=JA17[4][3];
T1517[4][4]=JA17[4][4];
T1517[4][5]=JA17[4][5];
T1517[4][6]=JA17[4][6];

T1517[5][1]=JA17[5][1];
T1517[5][2]=JA17[5][2];
T1517[5][3]=JA17[5][3];
T1517[5][4]=JA17[5][4];
T1517[5][5]=JA17[5][5];
T1517[5][6]=JA17[5][6];

T1517[6][1]=JA17[6][1];
T1517[6][2]=JA17[6][2];
T1517[6][3]=JA17[6][3];
T1517[6][4]=JA17[6][4];
T1517[6][5]=JA17[6][5];
T1517[6][6]=JA17[6][6];


T517[1][1]=S175[1][1]*(Si517[1][1]*T1517[1][1] + Si517[1][2]*T1517[2][1]) + S175[2][1]*(Si517[1][1]*T1517[1][2] + Si517[1][2]*T1517[2][2]) - WAISTLINK1*S175[1][3]*(Si517[1][1]*T1517[1][4] + Si517[1][2]*T1517[2][4]) - WAISTLINK1*S175[2][3]*(Si517[1][1]*T1517[1][5] + Si517[1][2]*T1517[2][5]) + LEGLINK1*(Si517[1][1]*T1517[1][6] + Si517[1][2]*T1517[2][6]);
T517[1][2]=Si517[1][1]*T1517[1][3] + Si517[1][2]*T1517[2][3] + (-(LEGLINK1*S175[1][1]) + WAISTLINK2*S175[1][3])*(Si517[1][1]*T1517[1][4] + Si517[1][2]*T1517[2][4]) + (-(LEGLINK1*S175[2][1]) + WAISTLINK2*S175[2][3])*(Si517[1][1]*T1517[1][5] + Si517[1][2]*T1517[2][5]);
T517[1][3]=S175[1][3]*(Si517[1][1]*T1517[1][1] + Si517[1][2]*T1517[2][1]) + S175[2][3]*(Si517[1][1]*T1517[1][2] + Si517[1][2]*T1517[2][2]) + WAISTLINK1*S175[1][1]*(Si517[1][1]*T1517[1][4] + Si517[1][2]*T1517[2][4]) + WAISTLINK1*S175[2][1]*(Si517[1][1]*T1517[1][5] + Si517[1][2]*T1517[2][5]) - WAISTLINK2*(Si517[1][1]*T1517[1][6] + Si517[1][2]*T1517[2][6]);
T517[1][4]=S175[1][1]*(Si517[1][1]*T1517[1][4] + Si517[1][2]*T1517[2][4]) + S175[2][1]*(Si517[1][1]*T1517[1][5] + Si517[1][2]*T1517[2][5]);
T517[1][5]=Si517[1][1]*T1517[1][6] + Si517[1][2]*T1517[2][6];
T517[1][6]=S175[1][3]*(Si517[1][1]*T1517[1][4] + Si517[1][2]*T1517[2][4]) + S175[2][3]*(Si517[1][1]*T1517[1][5] + Si517[1][2]*T1517[2][5]);

T517[2][1]=S175[1][1]*T1517[3][1] + S175[2][1]*T1517[3][2] - WAISTLINK1*S175[1][3]*T1517[3][4] - WAISTLINK1*S175[2][3]*T1517[3][5] + LEGLINK1*T1517[3][6];
T517[2][2]=T1517[3][3] + (-(LEGLINK1*S175[1][1]) + WAISTLINK2*S175[1][3])*T1517[3][4] + (-(LEGLINK1*S175[2][1]) + WAISTLINK2*S175[2][3])*T1517[3][5];
T517[2][3]=S175[1][3]*T1517[3][1] + S175[2][3]*T1517[3][2] + WAISTLINK1*S175[1][1]*T1517[3][4] + WAISTLINK1*S175[2][1]*T1517[3][5] - WAISTLINK2*T1517[3][6];
T517[2][4]=S175[1][1]*T1517[3][4] + S175[2][1]*T1517[3][5];
T517[2][5]=T1517[3][6];
T517[2][6]=S175[1][3]*T1517[3][4] + S175[2][3]*T1517[3][5];

T517[3][1]=S175[1][1]*(Si517[3][1]*T1517[1][1] + Si517[3][2]*T1517[2][1]) + S175[2][1]*(Si517[3][1]*T1517[1][2] + Si517[3][2]*T1517[2][2]) - WAISTLINK1*S175[1][3]*(Si517[3][1]*T1517[1][4] + Si517[3][2]*T1517[2][4]) - WAISTLINK1*S175[2][3]*(Si517[3][1]*T1517[1][5] + Si517[3][2]*T1517[2][5]) + LEGLINK1*(Si517[3][1]*T1517[1][6] + Si517[3][2]*T1517[2][6]);
T517[3][2]=Si517[3][1]*T1517[1][3] + Si517[3][2]*T1517[2][3] + (-(LEGLINK1*S175[1][1]) + WAISTLINK2*S175[1][3])*(Si517[3][1]*T1517[1][4] + Si517[3][2]*T1517[2][4]) + (-(LEGLINK1*S175[2][1]) + WAISTLINK2*S175[2][3])*(Si517[3][1]*T1517[1][5] + Si517[3][2]*T1517[2][5]);
T517[3][3]=S175[1][3]*(Si517[3][1]*T1517[1][1] + Si517[3][2]*T1517[2][1]) + S175[2][3]*(Si517[3][1]*T1517[1][2] + Si517[3][2]*T1517[2][2]) + WAISTLINK1*S175[1][1]*(Si517[3][1]*T1517[1][4] + Si517[3][2]*T1517[2][4]) + WAISTLINK1*S175[2][1]*(Si517[3][1]*T1517[1][5] + Si517[3][2]*T1517[2][5]) - WAISTLINK2*(Si517[3][1]*T1517[1][6] + Si517[3][2]*T1517[2][6]);
T517[3][4]=S175[1][1]*(Si517[3][1]*T1517[1][4] + Si517[3][2]*T1517[2][4]) + S175[2][1]*(Si517[3][1]*T1517[1][5] + Si517[3][2]*T1517[2][5]);
T517[3][5]=Si517[3][1]*T1517[1][6] + Si517[3][2]*T1517[2][6];
T517[3][6]=S175[1][3]*(Si517[3][1]*T1517[1][4] + Si517[3][2]*T1517[2][4]) + S175[2][3]*(Si517[3][1]*T1517[1][5] + Si517[3][2]*T1517[2][5]);

T517[4][1]=S175[1][1]*(-(WAISTLINK1*Si517[3][1]*T1517[1][1]) - WAISTLINK1*Si517[3][2]*T1517[2][1] + LEGLINK1*T1517[3][1] + Si517[1][1]*T1517[4][1] + Si517[1][2]*T1517[5][1]) + S175[2][1]*(-(WAISTLINK1*Si517[3][1]*T1517[1][2]) - WAISTLINK1*Si517[3][2]*T1517[2][2] + LEGLINK1*T1517[3][2] + Si517[1][1]*T1517[4][2] + Si517[1][2]*T1517[5][2]) - WAISTLINK1*S175[1][3]*(-(WAISTLINK1*Si517[3][1]*T1517[1][4]) - WAISTLINK1*Si517[3][2]*T1517[2][4] + LEGLINK1*T1517[3][4] + Si517[1][1]*T1517[4][4] + Si517[1][2]*T1517[5][4]) - WAISTLINK1*S175[2][3]*(-(WAISTLINK1*Si517[3][1]*T1517[1][5]) - WAISTLINK1*Si517[3][2]*T1517[2][5] + LEGLINK1*T1517[3][5] + Si517[1][1]*T1517[4][5] + Si517[1][2]*T1517[5][5]) + LEGLINK1*(-(WAISTLINK1*Si517[3][1]*T1517[1][6]) - WAISTLINK1*Si517[3][2]*T1517[2][6] + LEGLINK1*T1517[3][6] + Si517[1][1]*T1517[4][6] + Si517[1][2]*T1517[5][6]);
T517[4][2]=-(WAISTLINK1*Si517[3][1]*T1517[1][3]) - WAISTLINK1*Si517[3][2]*T1517[2][3] + LEGLINK1*T1517[3][3] + Si517[1][1]*T1517[4][3] + Si517[1][2]*T1517[5][3] + (-(LEGLINK1*S175[1][1]) + WAISTLINK2*S175[1][3])*(-(WAISTLINK1*Si517[3][1]*T1517[1][4]) - WAISTLINK1*Si517[3][2]*T1517[2][4] + LEGLINK1*T1517[3][4] + Si517[1][1]*T1517[4][4] + Si517[1][2]*T1517[5][4]) + (-(LEGLINK1*S175[2][1]) + WAISTLINK2*S175[2][3])*(-(WAISTLINK1*Si517[3][1]*T1517[1][5]) - WAISTLINK1*Si517[3][2]*T1517[2][5] + LEGLINK1*T1517[3][5] + Si517[1][1]*T1517[4][5] + Si517[1][2]*T1517[5][5]);
T517[4][3]=S175[1][3]*(-(WAISTLINK1*Si517[3][1]*T1517[1][1]) - WAISTLINK1*Si517[3][2]*T1517[2][1] + LEGLINK1*T1517[3][1] + Si517[1][1]*T1517[4][1] + Si517[1][2]*T1517[5][1]) + S175[2][3]*(-(WAISTLINK1*Si517[3][1]*T1517[1][2]) - WAISTLINK1*Si517[3][2]*T1517[2][2] + LEGLINK1*T1517[3][2] + Si517[1][1]*T1517[4][2] + Si517[1][2]*T1517[5][2]) + WAISTLINK1*S175[1][1]*(-(WAISTLINK1*Si517[3][1]*T1517[1][4]) - WAISTLINK1*Si517[3][2]*T1517[2][4] + LEGLINK1*T1517[3][4] + Si517[1][1]*T1517[4][4] + Si517[1][2]*T1517[5][4]) + WAISTLINK1*S175[2][1]*(-(WAISTLINK1*Si517[3][1]*T1517[1][5]) - WAISTLINK1*Si517[3][2]*T1517[2][5] + LEGLINK1*T1517[3][5] + Si517[1][1]*T1517[4][5] + Si517[1][2]*T1517[5][5]) - WAISTLINK2*(-(WAISTLINK1*Si517[3][1]*T1517[1][6]) - WAISTLINK1*Si517[3][2]*T1517[2][6] + LEGLINK1*T1517[3][6] + Si517[1][1]*T1517[4][6] + Si517[1][2]*T1517[5][6]);
T517[4][4]=S175[1][1]*(-(WAISTLINK1*Si517[3][1]*T1517[1][4]) - WAISTLINK1*Si517[3][2]*T1517[2][4] + LEGLINK1*T1517[3][4] + Si517[1][1]*T1517[4][4] + Si517[1][2]*T1517[5][4]) + S175[2][1]*(-(WAISTLINK1*Si517[3][1]*T1517[1][5]) - WAISTLINK1*Si517[3][2]*T1517[2][5] + LEGLINK1*T1517[3][5] + Si517[1][1]*T1517[4][5] + Si517[1][2]*T1517[5][5]);
T517[4][5]=-(WAISTLINK1*Si517[3][1]*T1517[1][6]) - WAISTLINK1*Si517[3][2]*T1517[2][6] + LEGLINK1*T1517[3][6] + Si517[1][1]*T1517[4][6] + Si517[1][2]*T1517[5][6];
T517[4][6]=S175[1][3]*(-(WAISTLINK1*Si517[3][1]*T1517[1][4]) - WAISTLINK1*Si517[3][2]*T1517[2][4] + LEGLINK1*T1517[3][4] + Si517[1][1]*T1517[4][4] + Si517[1][2]*T1517[5][4]) + S175[2][3]*(-(WAISTLINK1*Si517[3][1]*T1517[1][5]) - WAISTLINK1*Si517[3][2]*T1517[2][5] + LEGLINK1*T1517[3][5] + Si517[1][1]*T1517[4][5] + Si517[1][2]*T1517[5][5]);

T517[5][1]=S175[1][1]*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][1] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][1] + T1517[6][1]) + S175[2][1]*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][2] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][2] + T1517[6][2]) - WAISTLINK1*S175[1][3]*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][4] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][4] + T1517[6][4]) - WAISTLINK1*S175[2][3]*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][5] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][5] + T1517[6][5]) + LEGLINK1*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][6] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][6] + T1517[6][6]);
T517[5][2]=(-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][3] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][3] + T1517[6][3] + (-(LEGLINK1*S175[1][1]) + WAISTLINK2*S175[1][3])*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][4] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][4] + T1517[6][4]) + (-(LEGLINK1*S175[2][1]) + WAISTLINK2*S175[2][3])*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][5] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][5] + T1517[6][5]);
T517[5][3]=S175[1][3]*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][1] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][1] + T1517[6][1]) + S175[2][3]*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][2] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][2] + T1517[6][2]) + WAISTLINK1*S175[1][1]*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][4] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][4] + T1517[6][4]) + WAISTLINK1*S175[2][1]*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][5] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][5] + T1517[6][5]) - WAISTLINK2*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][6] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][6] + T1517[6][6]);
T517[5][4]=S175[1][1]*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][4] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][4] + T1517[6][4]) + S175[2][1]*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][5] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][5] + T1517[6][5]);
T517[5][5]=(-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][6] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][6] + T1517[6][6];
T517[5][6]=S175[1][3]*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][4] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][4] + T1517[6][4]) + S175[2][3]*((-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1])*T1517[1][5] + (-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2])*T1517[2][5] + T1517[6][5]);

T517[6][1]=S175[1][1]*(WAISTLINK1*Si517[1][1]*T1517[1][1] + WAISTLINK1*Si517[1][2]*T1517[2][1] - WAISTLINK2*T1517[3][1] + Si517[3][1]*T1517[4][1] + Si517[3][2]*T1517[5][1]) + S175[2][1]*(WAISTLINK1*Si517[1][1]*T1517[1][2] + WAISTLINK1*Si517[1][2]*T1517[2][2] - WAISTLINK2*T1517[3][2] + Si517[3][1]*T1517[4][2] + Si517[3][2]*T1517[5][2]) - WAISTLINK1*S175[1][3]*(WAISTLINK1*Si517[1][1]*T1517[1][4] + WAISTLINK1*Si517[1][2]*T1517[2][4] - WAISTLINK2*T1517[3][4] + Si517[3][1]*T1517[4][4] + Si517[3][2]*T1517[5][4]) - WAISTLINK1*S175[2][3]*(WAISTLINK1*Si517[1][1]*T1517[1][5] + WAISTLINK1*Si517[1][2]*T1517[2][5] - WAISTLINK2*T1517[3][5] + Si517[3][1]*T1517[4][5] + Si517[3][2]*T1517[5][5]) + LEGLINK1*(WAISTLINK1*Si517[1][1]*T1517[1][6] + WAISTLINK1*Si517[1][2]*T1517[2][6] - WAISTLINK2*T1517[3][6] + Si517[3][1]*T1517[4][6] + Si517[3][2]*T1517[5][6]);
T517[6][2]=WAISTLINK1*Si517[1][1]*T1517[1][3] + WAISTLINK1*Si517[1][2]*T1517[2][3] - WAISTLINK2*T1517[3][3] + Si517[3][1]*T1517[4][3] + Si517[3][2]*T1517[5][3] + (-(LEGLINK1*S175[1][1]) + WAISTLINK2*S175[1][3])*(WAISTLINK1*Si517[1][1]*T1517[1][4] + WAISTLINK1*Si517[1][2]*T1517[2][4] - WAISTLINK2*T1517[3][4] + Si517[3][1]*T1517[4][4] + Si517[3][2]*T1517[5][4]) + (-(LEGLINK1*S175[2][1]) + WAISTLINK2*S175[2][3])*(WAISTLINK1*Si517[1][1]*T1517[1][5] + WAISTLINK1*Si517[1][2]*T1517[2][5] - WAISTLINK2*T1517[3][5] + Si517[3][1]*T1517[4][5] + Si517[3][2]*T1517[5][5]);
T517[6][3]=S175[1][3]*(WAISTLINK1*Si517[1][1]*T1517[1][1] + WAISTLINK1*Si517[1][2]*T1517[2][1] - WAISTLINK2*T1517[3][1] + Si517[3][1]*T1517[4][1] + Si517[3][2]*T1517[5][1]) + S175[2][3]*(WAISTLINK1*Si517[1][1]*T1517[1][2] + WAISTLINK1*Si517[1][2]*T1517[2][2] - WAISTLINK2*T1517[3][2] + Si517[3][1]*T1517[4][2] + Si517[3][2]*T1517[5][2]) + WAISTLINK1*S175[1][1]*(WAISTLINK1*Si517[1][1]*T1517[1][4] + WAISTLINK1*Si517[1][2]*T1517[2][4] - WAISTLINK2*T1517[3][4] + Si517[3][1]*T1517[4][4] + Si517[3][2]*T1517[5][4]) + WAISTLINK1*S175[2][1]*(WAISTLINK1*Si517[1][1]*T1517[1][5] + WAISTLINK1*Si517[1][2]*T1517[2][5] - WAISTLINK2*T1517[3][5] + Si517[3][1]*T1517[4][5] + Si517[3][2]*T1517[5][5]) - WAISTLINK2*(WAISTLINK1*Si517[1][1]*T1517[1][6] + WAISTLINK1*Si517[1][2]*T1517[2][6] - WAISTLINK2*T1517[3][6] + Si517[3][1]*T1517[4][6] + Si517[3][2]*T1517[5][6]);
T517[6][4]=S175[1][1]*(WAISTLINK1*Si517[1][1]*T1517[1][4] + WAISTLINK1*Si517[1][2]*T1517[2][4] - WAISTLINK2*T1517[3][4] + Si517[3][1]*T1517[4][4] + Si517[3][2]*T1517[5][4]) + S175[2][1]*(WAISTLINK1*Si517[1][1]*T1517[1][5] + WAISTLINK1*Si517[1][2]*T1517[2][5] - WAISTLINK2*T1517[3][5] + Si517[3][1]*T1517[4][5] + Si517[3][2]*T1517[5][5]);
T517[6][5]=WAISTLINK1*Si517[1][1]*T1517[1][6] + WAISTLINK1*Si517[1][2]*T1517[2][6] - WAISTLINK2*T1517[3][6] + Si517[3][1]*T1517[4][6] + Si517[3][2]*T1517[5][6];
T517[6][6]=S175[1][3]*(WAISTLINK1*Si517[1][1]*T1517[1][4] + WAISTLINK1*Si517[1][2]*T1517[2][4] - WAISTLINK2*T1517[3][4] + Si517[3][1]*T1517[4][4] + Si517[3][2]*T1517[5][4]) + S175[2][3]*(WAISTLINK1*Si517[1][1]*T1517[1][5] + WAISTLINK1*Si517[1][2]*T1517[2][5] - WAISTLINK2*T1517[3][5] + Si517[3][1]*T1517[4][5] + Si517[3][2]*T1517[5][5]);



}


void
hoap3_InvDynArtfunc18(void)
      {
JA16[1][2]=eff[1].mcm[3];
JA16[1][3]=-eff[1].mcm[2];
JA16[1][4]=eff[1].m;

JA16[2][1]=-eff[1].mcm[3];
JA16[2][3]=eff[1].mcm[1];
JA16[2][5]=eff[1].m;

JA16[3][1]=eff[1].mcm[2];
JA16[3][2]=-eff[1].mcm[1];
JA16[3][6]=eff[1].m;

JA16[4][5]=-eff[1].mcm[3];
JA16[4][6]=eff[1].mcm[2];

JA16[5][4]=eff[1].mcm[3];
JA16[5][6]=-eff[1].mcm[1];

JA16[6][4]=-eff[1].mcm[2];
JA16[6][5]=eff[1].mcm[1];


T11116[1][2]=JA16[1][2];
T11116[1][3]=JA16[1][3];
T11116[1][4]=JA16[1][4];

T11116[2][1]=JA16[2][1];
T11116[2][3]=JA16[2][3];
T11116[2][5]=JA16[2][5];

T11116[3][1]=JA16[3][1];
T11116[3][2]=JA16[3][2];
T11116[3][6]=JA16[3][6];

T11116[4][5]=JA16[4][5];
T11116[4][6]=JA16[4][6];

T11116[5][4]=JA16[5][4];
T11116[5][6]=JA16[5][6];

T11116[6][4]=JA16[6][4];
T11116[6][5]=JA16[6][5];


T1116[1][1]=(-(eff[1].x[3]*S1611[1][2]) + eff[1].x[2]*S1611[1][3])*Si1116[1][1]*T11116[1][4] + S1611[3][1]*(Si1116[1][1]*T11116[1][3] + Si1116[1][2]*T11116[2][3]) + (-(eff[1].x[3]*S1611[2][2]) + eff[1].x[2]*S1611[2][3])*Si1116[1][2]*T11116[2][5] + S1611[1][1]*(Si1116[1][2]*T11116[2][1] + Si1116[1][3]*T11116[3][1]) + S1611[2][1]*(Si1116[1][1]*T11116[1][2] + Si1116[1][3]*T11116[3][2]) + (-(eff[1].x[3]*S1611[3][2]) + eff[1].x[2]*S1611[3][3])*Si1116[1][3]*T11116[3][6];
T1116[1][2]=(eff[1].x[3]*S1611[1][1] - eff[1].x[1]*S1611[1][3])*Si1116[1][1]*T11116[1][4] + S1611[3][2]*(Si1116[1][1]*T11116[1][3] + Si1116[1][2]*T11116[2][3]) + (eff[1].x[3]*S1611[2][1] - eff[1].x[1]*S1611[2][3])*Si1116[1][2]*T11116[2][5] + S1611[1][2]*(Si1116[1][2]*T11116[2][1] + Si1116[1][3]*T11116[3][1]) + S1611[2][2]*(Si1116[1][1]*T11116[1][2] + Si1116[1][3]*T11116[3][2]) + (eff[1].x[3]*S1611[3][1] - eff[1].x[1]*S1611[3][3])*Si1116[1][3]*T11116[3][6];
T1116[1][3]=(-(eff[1].x[2]*S1611[1][1]) + eff[1].x[1]*S1611[1][2])*Si1116[1][1]*T11116[1][4] + S1611[3][3]*(Si1116[1][1]*T11116[1][3] + Si1116[1][2]*T11116[2][3]) + (-(eff[1].x[2]*S1611[2][1]) + eff[1].x[1]*S1611[2][2])*Si1116[1][2]*T11116[2][5] + S1611[1][3]*(Si1116[1][2]*T11116[2][1] + Si1116[1][3]*T11116[3][1]) + S1611[2][3]*(Si1116[1][1]*T11116[1][2] + Si1116[1][3]*T11116[3][2]) + (-(eff[1].x[2]*S1611[3][1]) + eff[1].x[1]*S1611[3][2])*Si1116[1][3]*T11116[3][6];
T1116[1][4]=S1611[1][1]*Si1116[1][1]*T11116[1][4] + S1611[2][1]*Si1116[1][2]*T11116[2][5] + S1611[3][1]*Si1116[1][3]*T11116[3][6];
T1116[1][5]=S1611[1][2]*Si1116[1][1]*T11116[1][4] + S1611[2][2]*Si1116[1][2]*T11116[2][5] + S1611[3][2]*Si1116[1][3]*T11116[3][6];
T1116[1][6]=S1611[1][3]*Si1116[1][1]*T11116[1][4] + S1611[2][3]*Si1116[1][2]*T11116[2][5] + S1611[3][3]*Si1116[1][3]*T11116[3][6];

T1116[2][1]=(-(eff[1].x[3]*S1611[1][2]) + eff[1].x[2]*S1611[1][3])*Si1116[2][1]*T11116[1][4] + S1611[3][1]*(Si1116[2][1]*T11116[1][3] + Si1116[2][2]*T11116[2][3]) + (-(eff[1].x[3]*S1611[2][2]) + eff[1].x[2]*S1611[2][3])*Si1116[2][2]*T11116[2][5] + S1611[1][1]*(Si1116[2][2]*T11116[2][1] + Si1116[2][3]*T11116[3][1]) + S1611[2][1]*(Si1116[2][1]*T11116[1][2] + Si1116[2][3]*T11116[3][2]) + (-(eff[1].x[3]*S1611[3][2]) + eff[1].x[2]*S1611[3][3])*Si1116[2][3]*T11116[3][6];
T1116[2][2]=(eff[1].x[3]*S1611[1][1] - eff[1].x[1]*S1611[1][3])*Si1116[2][1]*T11116[1][4] + S1611[3][2]*(Si1116[2][1]*T11116[1][3] + Si1116[2][2]*T11116[2][3]) + (eff[1].x[3]*S1611[2][1] - eff[1].x[1]*S1611[2][3])*Si1116[2][2]*T11116[2][5] + S1611[1][2]*(Si1116[2][2]*T11116[2][1] + Si1116[2][3]*T11116[3][1]) + S1611[2][2]*(Si1116[2][1]*T11116[1][2] + Si1116[2][3]*T11116[3][2]) + (eff[1].x[3]*S1611[3][1] - eff[1].x[1]*S1611[3][3])*Si1116[2][3]*T11116[3][6];
T1116[2][3]=(-(eff[1].x[2]*S1611[1][1]) + eff[1].x[1]*S1611[1][2])*Si1116[2][1]*T11116[1][4] + S1611[3][3]*(Si1116[2][1]*T11116[1][3] + Si1116[2][2]*T11116[2][3]) + (-(eff[1].x[2]*S1611[2][1]) + eff[1].x[1]*S1611[2][2])*Si1116[2][2]*T11116[2][5] + S1611[1][3]*(Si1116[2][2]*T11116[2][1] + Si1116[2][3]*T11116[3][1]) + S1611[2][3]*(Si1116[2][1]*T11116[1][2] + Si1116[2][3]*T11116[3][2]) + (-(eff[1].x[2]*S1611[3][1]) + eff[1].x[1]*S1611[3][2])*Si1116[2][3]*T11116[3][6];
T1116[2][4]=S1611[1][1]*Si1116[2][1]*T11116[1][4] + S1611[2][1]*Si1116[2][2]*T11116[2][5] + S1611[3][1]*Si1116[2][3]*T11116[3][6];
T1116[2][5]=S1611[1][2]*Si1116[2][1]*T11116[1][4] + S1611[2][2]*Si1116[2][2]*T11116[2][5] + S1611[3][2]*Si1116[2][3]*T11116[3][6];
T1116[2][6]=S1611[1][3]*Si1116[2][1]*T11116[1][4] + S1611[2][3]*Si1116[2][2]*T11116[2][5] + S1611[3][3]*Si1116[2][3]*T11116[3][6];

T1116[3][1]=(-(eff[1].x[3]*S1611[1][2]) + eff[1].x[2]*S1611[1][3])*Si1116[3][1]*T11116[1][4] + S1611[3][1]*(Si1116[3][1]*T11116[1][3] + Si1116[3][2]*T11116[2][3]) + (-(eff[1].x[3]*S1611[2][2]) + eff[1].x[2]*S1611[2][3])*Si1116[3][2]*T11116[2][5] + S1611[1][1]*(Si1116[3][2]*T11116[2][1] + Si1116[3][3]*T11116[3][1]) + S1611[2][1]*(Si1116[3][1]*T11116[1][2] + Si1116[3][3]*T11116[3][2]) + (-(eff[1].x[3]*S1611[3][2]) + eff[1].x[2]*S1611[3][3])*Si1116[3][3]*T11116[3][6];
T1116[3][2]=(eff[1].x[3]*S1611[1][1] - eff[1].x[1]*S1611[1][3])*Si1116[3][1]*T11116[1][4] + S1611[3][2]*(Si1116[3][1]*T11116[1][3] + Si1116[3][2]*T11116[2][3]) + (eff[1].x[3]*S1611[2][1] - eff[1].x[1]*S1611[2][3])*Si1116[3][2]*T11116[2][5] + S1611[1][2]*(Si1116[3][2]*T11116[2][1] + Si1116[3][3]*T11116[3][1]) + S1611[2][2]*(Si1116[3][1]*T11116[1][2] + Si1116[3][3]*T11116[3][2]) + (eff[1].x[3]*S1611[3][1] - eff[1].x[1]*S1611[3][3])*Si1116[3][3]*T11116[3][6];
T1116[3][3]=(-(eff[1].x[2]*S1611[1][1]) + eff[1].x[1]*S1611[1][2])*Si1116[3][1]*T11116[1][4] + S1611[3][3]*(Si1116[3][1]*T11116[1][3] + Si1116[3][2]*T11116[2][3]) + (-(eff[1].x[2]*S1611[2][1]) + eff[1].x[1]*S1611[2][2])*Si1116[3][2]*T11116[2][5] + S1611[1][3]*(Si1116[3][2]*T11116[2][1] + Si1116[3][3]*T11116[3][1]) + S1611[2][3]*(Si1116[3][1]*T11116[1][2] + Si1116[3][3]*T11116[3][2]) + (-(eff[1].x[2]*S1611[3][1]) + eff[1].x[1]*S1611[3][2])*Si1116[3][3]*T11116[3][6];
T1116[3][4]=S1611[1][1]*Si1116[3][1]*T11116[1][4] + S1611[2][1]*Si1116[3][2]*T11116[2][5] + S1611[3][1]*Si1116[3][3]*T11116[3][6];
T1116[3][5]=S1611[1][2]*Si1116[3][1]*T11116[1][4] + S1611[2][2]*Si1116[3][2]*T11116[2][5] + S1611[3][2]*Si1116[3][3]*T11116[3][6];
T1116[3][6]=S1611[1][3]*Si1116[3][1]*T11116[1][4] + S1611[2][3]*Si1116[3][2]*T11116[2][5] + S1611[3][3]*Si1116[3][3]*T11116[3][6];

T1116[4][1]=S1611[3][1]*((-(eff[1].x[3]*Si1116[2][1]) + eff[1].x[2]*Si1116[3][1])*T11116[1][3] + (-(eff[1].x[3]*Si1116[2][2]) + eff[1].x[2]*Si1116[3][2])*T11116[2][3]) + S1611[1][1]*((-(eff[1].x[3]*Si1116[2][2]) + eff[1].x[2]*Si1116[3][2])*T11116[2][1] + (-(eff[1].x[3]*Si1116[2][3]) + eff[1].x[2]*Si1116[3][3])*T11116[3][1]) + S1611[2][1]*((-(eff[1].x[3]*Si1116[2][1]) + eff[1].x[2]*Si1116[3][1])*T11116[1][2] + (-(eff[1].x[3]*Si1116[2][3]) + eff[1].x[2]*Si1116[3][3])*T11116[3][2]) + (-(eff[1].x[3]*S1611[3][2]) + eff[1].x[2]*S1611[3][3])*((-(eff[1].x[3]*Si1116[2][3]) + eff[1].x[2]*Si1116[3][3])*T11116[3][6] + Si1116[1][1]*T11116[4][6] + Si1116[1][2]*T11116[5][6]) + (-(eff[1].x[3]*S1611[1][2]) + eff[1].x[2]*S1611[1][3])*((-(eff[1].x[3]*Si1116[2][1]) + eff[1].x[2]*Si1116[3][1])*T11116[1][4] + Si1116[1][2]*T11116[5][4] + Si1116[1][3]*T11116[6][4]) + (-(eff[1].x[3]*S1611[2][2]) + eff[1].x[2]*S1611[2][3])*((-(eff[1].x[3]*Si1116[2][2]) + eff[1].x[2]*Si1116[3][2])*T11116[2][5] + Si1116[1][1]*T11116[4][5] + Si1116[1][3]*T11116[6][5]);
T1116[4][2]=S1611[3][2]*((-(eff[1].x[3]*Si1116[2][1]) + eff[1].x[2]*Si1116[3][1])*T11116[1][3] + (-(eff[1].x[3]*Si1116[2][2]) + eff[1].x[2]*Si1116[3][2])*T11116[2][3]) + S1611[1][2]*((-(eff[1].x[3]*Si1116[2][2]) + eff[1].x[2]*Si1116[3][2])*T11116[2][1] + (-(eff[1].x[3]*Si1116[2][3]) + eff[1].x[2]*Si1116[3][3])*T11116[3][1]) + S1611[2][2]*((-(eff[1].x[3]*Si1116[2][1]) + eff[1].x[2]*Si1116[3][1])*T11116[1][2] + (-(eff[1].x[3]*Si1116[2][3]) + eff[1].x[2]*Si1116[3][3])*T11116[3][2]) + (eff[1].x[3]*S1611[3][1] - eff[1].x[1]*S1611[3][3])*((-(eff[1].x[3]*Si1116[2][3]) + eff[1].x[2]*Si1116[3][3])*T11116[3][6] + Si1116[1][1]*T11116[4][6] + Si1116[1][2]*T11116[5][6]) + (eff[1].x[3]*S1611[1][1] - eff[1].x[1]*S1611[1][3])*((-(eff[1].x[3]*Si1116[2][1]) + eff[1].x[2]*Si1116[3][1])*T11116[1][4] + Si1116[1][2]*T11116[5][4] + Si1116[1][3]*T11116[6][4]) + (eff[1].x[3]*S1611[2][1] - eff[1].x[1]*S1611[2][3])*((-(eff[1].x[3]*Si1116[2][2]) + eff[1].x[2]*Si1116[3][2])*T11116[2][5] + Si1116[1][1]*T11116[4][5] + Si1116[1][3]*T11116[6][5]);
T1116[4][3]=S1611[3][3]*((-(eff[1].x[3]*Si1116[2][1]) + eff[1].x[2]*Si1116[3][1])*T11116[1][3] + (-(eff[1].x[3]*Si1116[2][2]) + eff[1].x[2]*Si1116[3][2])*T11116[2][3]) + S1611[1][3]*((-(eff[1].x[3]*Si1116[2][2]) + eff[1].x[2]*Si1116[3][2])*T11116[2][1] + (-(eff[1].x[3]*Si1116[2][3]) + eff[1].x[2]*Si1116[3][3])*T11116[3][1]) + S1611[2][3]*((-(eff[1].x[3]*Si1116[2][1]) + eff[1].x[2]*Si1116[3][1])*T11116[1][2] + (-(eff[1].x[3]*Si1116[2][3]) + eff[1].x[2]*Si1116[3][3])*T11116[3][2]) + (-(eff[1].x[2]*S1611[3][1]) + eff[1].x[1]*S1611[3][2])*((-(eff[1].x[3]*Si1116[2][3]) + eff[1].x[2]*Si1116[3][3])*T11116[3][6] + Si1116[1][1]*T11116[4][6] + Si1116[1][2]*T11116[5][6]) + (-(eff[1].x[2]*S1611[1][1]) + eff[1].x[1]*S1611[1][2])*((-(eff[1].x[3]*Si1116[2][1]) + eff[1].x[2]*Si1116[3][1])*T11116[1][4] + Si1116[1][2]*T11116[5][4] + Si1116[1][3]*T11116[6][4]) + (-(eff[1].x[2]*S1611[2][1]) + eff[1].x[1]*S1611[2][2])*((-(eff[1].x[3]*Si1116[2][2]) + eff[1].x[2]*Si1116[3][2])*T11116[2][5] + Si1116[1][1]*T11116[4][5] + Si1116[1][3]*T11116[6][5]);
T1116[4][4]=S1611[3][1]*((-(eff[1].x[3]*Si1116[2][3]) + eff[1].x[2]*Si1116[3][3])*T11116[3][6] + Si1116[1][1]*T11116[4][6] + Si1116[1][2]*T11116[5][6]) + S1611[1][1]*((-(eff[1].x[3]*Si1116[2][1]) + eff[1].x[2]*Si1116[3][1])*T11116[1][4] + Si1116[1][2]*T11116[5][4] + Si1116[1][3]*T11116[6][4]) + S1611[2][1]*((-(eff[1].x[3]*Si1116[2][2]) + eff[1].x[2]*Si1116[3][2])*T11116[2][5] + Si1116[1][1]*T11116[4][5] + Si1116[1][3]*T11116[6][5]);
T1116[4][5]=S1611[3][2]*((-(eff[1].x[3]*Si1116[2][3]) + eff[1].x[2]*Si1116[3][3])*T11116[3][6] + Si1116[1][1]*T11116[4][6] + Si1116[1][2]*T11116[5][6]) + S1611[1][2]*((-(eff[1].x[3]*Si1116[2][1]) + eff[1].x[2]*Si1116[3][1])*T11116[1][4] + Si1116[1][2]*T11116[5][4] + Si1116[1][3]*T11116[6][4]) + S1611[2][2]*((-(eff[1].x[3]*Si1116[2][2]) + eff[1].x[2]*Si1116[3][2])*T11116[2][5] + Si1116[1][1]*T11116[4][5] + Si1116[1][3]*T11116[6][5]);
T1116[4][6]=S1611[3][3]*((-(eff[1].x[3]*Si1116[2][3]) + eff[1].x[2]*Si1116[3][3])*T11116[3][6] + Si1116[1][1]*T11116[4][6] + Si1116[1][2]*T11116[5][6]) + S1611[1][3]*((-(eff[1].x[3]*Si1116[2][1]) + eff[1].x[2]*Si1116[3][1])*T11116[1][4] + Si1116[1][2]*T11116[5][4] + Si1116[1][3]*T11116[6][4]) + S1611[2][3]*((-(eff[1].x[3]*Si1116[2][2]) + eff[1].x[2]*Si1116[3][2])*T11116[2][5] + Si1116[1][1]*T11116[4][5] + Si1116[1][3]*T11116[6][5]);

T1116[5][1]=S1611[3][1]*((eff[1].x[3]*Si1116[1][1] - eff[1].x[1]*Si1116[3][1])*T11116[1][3] + (eff[1].x[3]*Si1116[1][2] - eff[1].x[1]*Si1116[3][2])*T11116[2][3]) + S1611[1][1]*((eff[1].x[3]*Si1116[1][2] - eff[1].x[1]*Si1116[3][2])*T11116[2][1] + (eff[1].x[3]*Si1116[1][3] - eff[1].x[1]*Si1116[3][3])*T11116[3][1]) + S1611[2][1]*((eff[1].x[3]*Si1116[1][1] - eff[1].x[1]*Si1116[3][1])*T11116[1][2] + (eff[1].x[3]*Si1116[1][3] - eff[1].x[1]*Si1116[3][3])*T11116[3][2]) + (-(eff[1].x[3]*S1611[3][2]) + eff[1].x[2]*S1611[3][3])*((eff[1].x[3]*Si1116[1][3] - eff[1].x[1]*Si1116[3][3])*T11116[3][6] + Si1116[2][1]*T11116[4][6] + Si1116[2][2]*T11116[5][6]) + (-(eff[1].x[3]*S1611[1][2]) + eff[1].x[2]*S1611[1][3])*((eff[1].x[3]*Si1116[1][1] - eff[1].x[1]*Si1116[3][1])*T11116[1][4] + Si1116[2][2]*T11116[5][4] + Si1116[2][3]*T11116[6][4]) + (-(eff[1].x[3]*S1611[2][2]) + eff[1].x[2]*S1611[2][3])*((eff[1].x[3]*Si1116[1][2] - eff[1].x[1]*Si1116[3][2])*T11116[2][5] + Si1116[2][1]*T11116[4][5] + Si1116[2][3]*T11116[6][5]);
T1116[5][2]=S1611[3][2]*((eff[1].x[3]*Si1116[1][1] - eff[1].x[1]*Si1116[3][1])*T11116[1][3] + (eff[1].x[3]*Si1116[1][2] - eff[1].x[1]*Si1116[3][2])*T11116[2][3]) + S1611[1][2]*((eff[1].x[3]*Si1116[1][2] - eff[1].x[1]*Si1116[3][2])*T11116[2][1] + (eff[1].x[3]*Si1116[1][3] - eff[1].x[1]*Si1116[3][3])*T11116[3][1]) + S1611[2][2]*((eff[1].x[3]*Si1116[1][1] - eff[1].x[1]*Si1116[3][1])*T11116[1][2] + (eff[1].x[3]*Si1116[1][3] - eff[1].x[1]*Si1116[3][3])*T11116[3][2]) + (eff[1].x[3]*S1611[3][1] - eff[1].x[1]*S1611[3][3])*((eff[1].x[3]*Si1116[1][3] - eff[1].x[1]*Si1116[3][3])*T11116[3][6] + Si1116[2][1]*T11116[4][6] + Si1116[2][2]*T11116[5][6]) + (eff[1].x[3]*S1611[1][1] - eff[1].x[1]*S1611[1][3])*((eff[1].x[3]*Si1116[1][1] - eff[1].x[1]*Si1116[3][1])*T11116[1][4] + Si1116[2][2]*T11116[5][4] + Si1116[2][3]*T11116[6][4]) + (eff[1].x[3]*S1611[2][1] - eff[1].x[1]*S1611[2][3])*((eff[1].x[3]*Si1116[1][2] - eff[1].x[1]*Si1116[3][2])*T11116[2][5] + Si1116[2][1]*T11116[4][5] + Si1116[2][3]*T11116[6][5]);
T1116[5][3]=S1611[3][3]*((eff[1].x[3]*Si1116[1][1] - eff[1].x[1]*Si1116[3][1])*T11116[1][3] + (eff[1].x[3]*Si1116[1][2] - eff[1].x[1]*Si1116[3][2])*T11116[2][3]) + S1611[1][3]*((eff[1].x[3]*Si1116[1][2] - eff[1].x[1]*Si1116[3][2])*T11116[2][1] + (eff[1].x[3]*Si1116[1][3] - eff[1].x[1]*Si1116[3][3])*T11116[3][1]) + S1611[2][3]*((eff[1].x[3]*Si1116[1][1] - eff[1].x[1]*Si1116[3][1])*T11116[1][2] + (eff[1].x[3]*Si1116[1][3] - eff[1].x[1]*Si1116[3][3])*T11116[3][2]) + (-(eff[1].x[2]*S1611[3][1]) + eff[1].x[1]*S1611[3][2])*((eff[1].x[3]*Si1116[1][3] - eff[1].x[1]*Si1116[3][3])*T11116[3][6] + Si1116[2][1]*T11116[4][6] + Si1116[2][2]*T11116[5][6]) + (-(eff[1].x[2]*S1611[1][1]) + eff[1].x[1]*S1611[1][2])*((eff[1].x[3]*Si1116[1][1] - eff[1].x[1]*Si1116[3][1])*T11116[1][4] + Si1116[2][2]*T11116[5][4] + Si1116[2][3]*T11116[6][4]) + (-(eff[1].x[2]*S1611[2][1]) + eff[1].x[1]*S1611[2][2])*((eff[1].x[3]*Si1116[1][2] - eff[1].x[1]*Si1116[3][2])*T11116[2][5] + Si1116[2][1]*T11116[4][5] + Si1116[2][3]*T11116[6][5]);
T1116[5][4]=S1611[3][1]*((eff[1].x[3]*Si1116[1][3] - eff[1].x[1]*Si1116[3][3])*T11116[3][6] + Si1116[2][1]*T11116[4][6] + Si1116[2][2]*T11116[5][6]) + S1611[1][1]*((eff[1].x[3]*Si1116[1][1] - eff[1].x[1]*Si1116[3][1])*T11116[1][4] + Si1116[2][2]*T11116[5][4] + Si1116[2][3]*T11116[6][4]) + S1611[2][1]*((eff[1].x[3]*Si1116[1][2] - eff[1].x[1]*Si1116[3][2])*T11116[2][5] + Si1116[2][1]*T11116[4][5] + Si1116[2][3]*T11116[6][5]);
T1116[5][5]=S1611[3][2]*((eff[1].x[3]*Si1116[1][3] - eff[1].x[1]*Si1116[3][3])*T11116[3][6] + Si1116[2][1]*T11116[4][6] + Si1116[2][2]*T11116[5][6]) + S1611[1][2]*((eff[1].x[3]*Si1116[1][1] - eff[1].x[1]*Si1116[3][1])*T11116[1][4] + Si1116[2][2]*T11116[5][4] + Si1116[2][3]*T11116[6][4]) + S1611[2][2]*((eff[1].x[3]*Si1116[1][2] - eff[1].x[1]*Si1116[3][2])*T11116[2][5] + Si1116[2][1]*T11116[4][5] + Si1116[2][3]*T11116[6][5]);
T1116[5][6]=S1611[3][3]*((eff[1].x[3]*Si1116[1][3] - eff[1].x[1]*Si1116[3][3])*T11116[3][6] + Si1116[2][1]*T11116[4][6] + Si1116[2][2]*T11116[5][6]) + S1611[1][3]*((eff[1].x[3]*Si1116[1][1] - eff[1].x[1]*Si1116[3][1])*T11116[1][4] + Si1116[2][2]*T11116[5][4] + Si1116[2][3]*T11116[6][4]) + S1611[2][3]*((eff[1].x[3]*Si1116[1][2] - eff[1].x[1]*Si1116[3][2])*T11116[2][5] + Si1116[2][1]*T11116[4][5] + Si1116[2][3]*T11116[6][5]);

T1116[6][1]=S1611[3][1]*((-(eff[1].x[2]*Si1116[1][1]) + eff[1].x[1]*Si1116[2][1])*T11116[1][3] + (-(eff[1].x[2]*Si1116[1][2]) + eff[1].x[1]*Si1116[2][2])*T11116[2][3]) + S1611[1][1]*((-(eff[1].x[2]*Si1116[1][2]) + eff[1].x[1]*Si1116[2][2])*T11116[2][1] + (-(eff[1].x[2]*Si1116[1][3]) + eff[1].x[1]*Si1116[2][3])*T11116[3][1]) + S1611[2][1]*((-(eff[1].x[2]*Si1116[1][1]) + eff[1].x[1]*Si1116[2][1])*T11116[1][2] + (-(eff[1].x[2]*Si1116[1][3]) + eff[1].x[1]*Si1116[2][3])*T11116[3][2]) + (-(eff[1].x[3]*S1611[3][2]) + eff[1].x[2]*S1611[3][3])*((-(eff[1].x[2]*Si1116[1][3]) + eff[1].x[1]*Si1116[2][3])*T11116[3][6] + Si1116[3][1]*T11116[4][6] + Si1116[3][2]*T11116[5][6]) + (-(eff[1].x[3]*S1611[1][2]) + eff[1].x[2]*S1611[1][3])*((-(eff[1].x[2]*Si1116[1][1]) + eff[1].x[1]*Si1116[2][1])*T11116[1][4] + Si1116[3][2]*T11116[5][4] + Si1116[3][3]*T11116[6][4]) + (-(eff[1].x[3]*S1611[2][2]) + eff[1].x[2]*S1611[2][3])*((-(eff[1].x[2]*Si1116[1][2]) + eff[1].x[1]*Si1116[2][2])*T11116[2][5] + Si1116[3][1]*T11116[4][5] + Si1116[3][3]*T11116[6][5]);
T1116[6][2]=S1611[3][2]*((-(eff[1].x[2]*Si1116[1][1]) + eff[1].x[1]*Si1116[2][1])*T11116[1][3] + (-(eff[1].x[2]*Si1116[1][2]) + eff[1].x[1]*Si1116[2][2])*T11116[2][3]) + S1611[1][2]*((-(eff[1].x[2]*Si1116[1][2]) + eff[1].x[1]*Si1116[2][2])*T11116[2][1] + (-(eff[1].x[2]*Si1116[1][3]) + eff[1].x[1]*Si1116[2][3])*T11116[3][1]) + S1611[2][2]*((-(eff[1].x[2]*Si1116[1][1]) + eff[1].x[1]*Si1116[2][1])*T11116[1][2] + (-(eff[1].x[2]*Si1116[1][3]) + eff[1].x[1]*Si1116[2][3])*T11116[3][2]) + (eff[1].x[3]*S1611[3][1] - eff[1].x[1]*S1611[3][3])*((-(eff[1].x[2]*Si1116[1][3]) + eff[1].x[1]*Si1116[2][3])*T11116[3][6] + Si1116[3][1]*T11116[4][6] + Si1116[3][2]*T11116[5][6]) + (eff[1].x[3]*S1611[1][1] - eff[1].x[1]*S1611[1][3])*((-(eff[1].x[2]*Si1116[1][1]) + eff[1].x[1]*Si1116[2][1])*T11116[1][4] + Si1116[3][2]*T11116[5][4] + Si1116[3][3]*T11116[6][4]) + (eff[1].x[3]*S1611[2][1] - eff[1].x[1]*S1611[2][3])*((-(eff[1].x[2]*Si1116[1][2]) + eff[1].x[1]*Si1116[2][2])*T11116[2][5] + Si1116[3][1]*T11116[4][5] + Si1116[3][3]*T11116[6][5]);
T1116[6][3]=S1611[3][3]*((-(eff[1].x[2]*Si1116[1][1]) + eff[1].x[1]*Si1116[2][1])*T11116[1][3] + (-(eff[1].x[2]*Si1116[1][2]) + eff[1].x[1]*Si1116[2][2])*T11116[2][3]) + S1611[1][3]*((-(eff[1].x[2]*Si1116[1][2]) + eff[1].x[1]*Si1116[2][2])*T11116[2][1] + (-(eff[1].x[2]*Si1116[1][3]) + eff[1].x[1]*Si1116[2][3])*T11116[3][1]) + S1611[2][3]*((-(eff[1].x[2]*Si1116[1][1]) + eff[1].x[1]*Si1116[2][1])*T11116[1][2] + (-(eff[1].x[2]*Si1116[1][3]) + eff[1].x[1]*Si1116[2][3])*T11116[3][2]) + (-(eff[1].x[2]*S1611[3][1]) + eff[1].x[1]*S1611[3][2])*((-(eff[1].x[2]*Si1116[1][3]) + eff[1].x[1]*Si1116[2][3])*T11116[3][6] + Si1116[3][1]*T11116[4][6] + Si1116[3][2]*T11116[5][6]) + (-(eff[1].x[2]*S1611[1][1]) + eff[1].x[1]*S1611[1][2])*((-(eff[1].x[2]*Si1116[1][1]) + eff[1].x[1]*Si1116[2][1])*T11116[1][4] + Si1116[3][2]*T11116[5][4] + Si1116[3][3]*T11116[6][4]) + (-(eff[1].x[2]*S1611[2][1]) + eff[1].x[1]*S1611[2][2])*((-(eff[1].x[2]*Si1116[1][2]) + eff[1].x[1]*Si1116[2][2])*T11116[2][5] + Si1116[3][1]*T11116[4][5] + Si1116[3][3]*T11116[6][5]);
T1116[6][4]=S1611[3][1]*((-(eff[1].x[2]*Si1116[1][3]) + eff[1].x[1]*Si1116[2][3])*T11116[3][6] + Si1116[3][1]*T11116[4][6] + Si1116[3][2]*T11116[5][6]) + S1611[1][1]*((-(eff[1].x[2]*Si1116[1][1]) + eff[1].x[1]*Si1116[2][1])*T11116[1][4] + Si1116[3][2]*T11116[5][4] + Si1116[3][3]*T11116[6][4]) + S1611[2][1]*((-(eff[1].x[2]*Si1116[1][2]) + eff[1].x[1]*Si1116[2][2])*T11116[2][5] + Si1116[3][1]*T11116[4][5] + Si1116[3][3]*T11116[6][5]);
T1116[6][5]=S1611[3][2]*((-(eff[1].x[2]*Si1116[1][3]) + eff[1].x[1]*Si1116[2][3])*T11116[3][6] + Si1116[3][1]*T11116[4][6] + Si1116[3][2]*T11116[5][6]) + S1611[1][2]*((-(eff[1].x[2]*Si1116[1][1]) + eff[1].x[1]*Si1116[2][1])*T11116[1][4] + Si1116[3][2]*T11116[5][4] + Si1116[3][3]*T11116[6][4]) + S1611[2][2]*((-(eff[1].x[2]*Si1116[1][2]) + eff[1].x[1]*Si1116[2][2])*T11116[2][5] + Si1116[3][1]*T11116[4][5] + Si1116[3][3]*T11116[6][5]);
T1116[6][6]=S1611[3][3]*((-(eff[1].x[2]*Si1116[1][3]) + eff[1].x[1]*Si1116[2][3])*T11116[3][6] + Si1116[3][1]*T11116[4][6] + Si1116[3][2]*T11116[5][6]) + S1611[1][3]*((-(eff[1].x[2]*Si1116[1][1]) + eff[1].x[1]*Si1116[2][1])*T11116[1][4] + Si1116[3][2]*T11116[5][4] + Si1116[3][3]*T11116[6][4]) + S1611[2][3]*((-(eff[1].x[2]*Si1116[1][2]) + eff[1].x[1]*Si1116[2][2])*T11116[2][5] + Si1116[3][1]*T11116[4][5] + Si1116[3][3]*T11116[6][5]);



}


void
hoap3_InvDynArtfunc19(void)
      {




}


void
hoap3_InvDynArtfunc20(void)
      {




}


void
hoap3_InvDynArtfunc21(void)
      {




}


void
hoap3_InvDynArtfunc22(void)
      {




}


void
hoap3_InvDynArtfunc23(void)
      {
JA11[1][1]=0. + T1116[1][1];
JA11[1][2]=0. + links[6].mcm[3] + T1116[1][2];
JA11[1][3]=0. - links[6].mcm[2] + T1116[1][3];
JA11[1][4]=0. + links[6].m + T1116[1][4];
JA11[1][5]=0. + T1116[1][5];
JA11[1][6]=0. + T1116[1][6];

JA11[2][1]=0. - links[6].mcm[3] + T1116[2][1];
JA11[2][2]=0. + T1116[2][2];
JA11[2][3]=0. + links[6].mcm[1] + T1116[2][3];
JA11[2][4]=0. + T1116[2][4];
JA11[2][5]=0. + links[6].m + T1116[2][5];
JA11[2][6]=0. + T1116[2][6];

JA11[3][1]=0. + links[6].mcm[2] + T1116[3][1];
JA11[3][2]=0. - links[6].mcm[1] + T1116[3][2];
JA11[3][3]=0. + T1116[3][3];
JA11[3][4]=0. + T1116[3][4];
JA11[3][5]=0. + T1116[3][5];
JA11[3][6]=0. + links[6].m + T1116[3][6];

JA11[4][1]=0. + links[6].inertia[1][1] + T1116[4][1];
JA11[4][2]=0. + links[6].inertia[1][2] + T1116[4][2];
JA11[4][3]=0. + links[6].inertia[1][3] + T1116[4][3];
JA11[4][4]=0. + T1116[4][4];
JA11[4][5]=0. - links[6].mcm[3] + T1116[4][5];
JA11[4][6]=0. + links[6].mcm[2] + T1116[4][6];

JA11[5][1]=0. + links[6].inertia[1][2] + T1116[5][1];
JA11[5][2]=0. + links[6].inertia[2][2] + T1116[5][2];
JA11[5][3]=0. + links[6].inertia[2][3] + T1116[5][3];
JA11[5][4]=0. + links[6].mcm[3] + T1116[5][4];
JA11[5][5]=0. + T1116[5][5];
JA11[5][6]=0. - links[6].mcm[1] + T1116[5][6];

JA11[6][1]=0. + links[6].inertia[1][3] + T1116[6][1];
JA11[6][2]=0. + links[6].inertia[2][3] + T1116[6][2];
JA11[6][3]=0. + links[6].inertia[3][3] + T1116[6][3];
JA11[6][4]=0. - links[6].mcm[2] + T1116[6][4];
JA11[6][5]=0. + links[6].mcm[1] + T1116[6][5];
JA11[6][6]=0. + T1116[6][6];


h11[1]=JA11[1][3];
h11[2]=JA11[2][3];
h11[3]=JA11[3][3];
h11[4]=JA11[4][3];
h11[5]=JA11[5][3];
h11[6]=JA11[6][3];

T11011[1][1]=JA11[1][1];
T11011[1][2]=JA11[1][2];
T11011[1][3]=JA11[1][3];
T11011[1][4]=JA11[1][4];
T11011[1][5]=JA11[1][5];
T11011[1][6]=JA11[1][6];

T11011[2][1]=JA11[2][1];
T11011[2][2]=JA11[2][2];
T11011[2][3]=JA11[2][3];
T11011[2][4]=JA11[2][4];
T11011[2][5]=JA11[2][5];
T11011[2][6]=JA11[2][6];

T11011[3][1]=JA11[3][1];
T11011[3][2]=JA11[3][2];
T11011[3][3]=JA11[3][3];
T11011[3][4]=JA11[3][4];
T11011[3][5]=JA11[3][5];
T11011[3][6]=JA11[3][6];

T11011[4][1]=JA11[4][1];
T11011[4][2]=JA11[4][2];
T11011[4][3]=JA11[4][3];
T11011[4][4]=JA11[4][4];
T11011[4][5]=JA11[4][5];
T11011[4][6]=JA11[4][6];

T11011[5][1]=JA11[5][1];
T11011[5][2]=JA11[5][2];
T11011[5][3]=JA11[5][3];
T11011[5][4]=JA11[5][4];
T11011[5][5]=JA11[5][5];
T11011[5][6]=JA11[5][6];

T11011[6][1]=JA11[6][1];
T11011[6][2]=JA11[6][2];
T11011[6][3]=JA11[6][3];
T11011[6][4]=JA11[6][4];
T11011[6][5]=JA11[6][5];
T11011[6][6]=JA11[6][6];


T1011[1][1]=S1110[1][1]*(Si1011[1][1]*T11011[1][1] + Si1011[1][2]*T11011[2][1]) + S1110[2][1]*(Si1011[1][1]*T11011[1][2] + Si1011[1][2]*T11011[2][2]);
T1011[1][2]=Si1011[1][1]*T11011[1][3] + Si1011[1][2]*T11011[2][3];
T1011[1][3]=S1110[1][3]*(Si1011[1][1]*T11011[1][1] + Si1011[1][2]*T11011[2][1]) + S1110[2][3]*(Si1011[1][1]*T11011[1][2] + Si1011[1][2]*T11011[2][2]);
T1011[1][4]=S1110[1][1]*(Si1011[1][1]*T11011[1][4] + Si1011[1][2]*T11011[2][4]) + S1110[2][1]*(Si1011[1][1]*T11011[1][5] + Si1011[1][2]*T11011[2][5]);
T1011[1][5]=Si1011[1][1]*T11011[1][6] + Si1011[1][2]*T11011[2][6];
T1011[1][6]=S1110[1][3]*(Si1011[1][1]*T11011[1][4] + Si1011[1][2]*T11011[2][4]) + S1110[2][3]*(Si1011[1][1]*T11011[1][5] + Si1011[1][2]*T11011[2][5]);

T1011[2][1]=S1110[1][1]*T11011[3][1] + S1110[2][1]*T11011[3][2];
T1011[2][2]=T11011[3][3];
T1011[2][3]=S1110[1][3]*T11011[3][1] + S1110[2][3]*T11011[3][2];
T1011[2][4]=S1110[1][1]*T11011[3][4] + S1110[2][1]*T11011[3][5];
T1011[2][5]=T11011[3][6];
T1011[2][6]=S1110[1][3]*T11011[3][4] + S1110[2][3]*T11011[3][5];

T1011[3][1]=S1110[1][1]*(Si1011[3][1]*T11011[1][1] + Si1011[3][2]*T11011[2][1]) + S1110[2][1]*(Si1011[3][1]*T11011[1][2] + Si1011[3][2]*T11011[2][2]);
T1011[3][2]=Si1011[3][1]*T11011[1][3] + Si1011[3][2]*T11011[2][3];
T1011[3][3]=S1110[1][3]*(Si1011[3][1]*T11011[1][1] + Si1011[3][2]*T11011[2][1]) + S1110[2][3]*(Si1011[3][1]*T11011[1][2] + Si1011[3][2]*T11011[2][2]);
T1011[3][4]=S1110[1][1]*(Si1011[3][1]*T11011[1][4] + Si1011[3][2]*T11011[2][4]) + S1110[2][1]*(Si1011[3][1]*T11011[1][5] + Si1011[3][2]*T11011[2][5]);
T1011[3][5]=Si1011[3][1]*T11011[1][6] + Si1011[3][2]*T11011[2][6];
T1011[3][6]=S1110[1][3]*(Si1011[3][1]*T11011[1][4] + Si1011[3][2]*T11011[2][4]) + S1110[2][3]*(Si1011[3][1]*T11011[1][5] + Si1011[3][2]*T11011[2][5]);

T1011[4][1]=S1110[1][1]*(Si1011[1][1]*T11011[4][1] + Si1011[1][2]*T11011[5][1]) + S1110[2][1]*(Si1011[1][1]*T11011[4][2] + Si1011[1][2]*T11011[5][2]);
T1011[4][2]=Si1011[1][1]*T11011[4][3] + Si1011[1][2]*T11011[5][3];
T1011[4][3]=S1110[1][3]*(Si1011[1][1]*T11011[4][1] + Si1011[1][2]*T11011[5][1]) + S1110[2][3]*(Si1011[1][1]*T11011[4][2] + Si1011[1][2]*T11011[5][2]);
T1011[4][4]=S1110[1][1]*(Si1011[1][1]*T11011[4][4] + Si1011[1][2]*T11011[5][4]) + S1110[2][1]*(Si1011[1][1]*T11011[4][5] + Si1011[1][2]*T11011[5][5]);
T1011[4][5]=Si1011[1][1]*T11011[4][6] + Si1011[1][2]*T11011[5][6];
T1011[4][6]=S1110[1][3]*(Si1011[1][1]*T11011[4][4] + Si1011[1][2]*T11011[5][4]) + S1110[2][3]*(Si1011[1][1]*T11011[4][5] + Si1011[1][2]*T11011[5][5]);

T1011[5][1]=S1110[1][1]*T11011[6][1] + S1110[2][1]*T11011[6][2];
T1011[5][2]=T11011[6][3];
T1011[5][3]=S1110[1][3]*T11011[6][1] + S1110[2][3]*T11011[6][2];
T1011[5][4]=S1110[1][1]*T11011[6][4] + S1110[2][1]*T11011[6][5];
T1011[5][5]=T11011[6][6];
T1011[5][6]=S1110[1][3]*T11011[6][4] + S1110[2][3]*T11011[6][5];

T1011[6][1]=S1110[1][1]*(Si1011[3][1]*T11011[4][1] + Si1011[3][2]*T11011[5][1]) + S1110[2][1]*(Si1011[3][1]*T11011[4][2] + Si1011[3][2]*T11011[5][2]);
T1011[6][2]=Si1011[3][1]*T11011[4][3] + Si1011[3][2]*T11011[5][3];
T1011[6][3]=S1110[1][3]*(Si1011[3][1]*T11011[4][1] + Si1011[3][2]*T11011[5][1]) + S1110[2][3]*(Si1011[3][1]*T11011[4][2] + Si1011[3][2]*T11011[5][2]);
T1011[6][4]=S1110[1][1]*(Si1011[3][1]*T11011[4][4] + Si1011[3][2]*T11011[5][4]) + S1110[2][1]*(Si1011[3][1]*T11011[4][5] + Si1011[3][2]*T11011[5][5]);
T1011[6][5]=Si1011[3][1]*T11011[4][6] + Si1011[3][2]*T11011[5][6];
T1011[6][6]=S1110[1][3]*(Si1011[3][1]*T11011[4][4] + Si1011[3][2]*T11011[5][4]) + S1110[2][3]*(Si1011[3][1]*T11011[4][5] + Si1011[3][2]*T11011[5][5]);



}


void
hoap3_InvDynArtfunc24(void)
      {
JA10[1][1]=T1011[1][1];
JA10[1][2]=links[5].mcm[3] + T1011[1][2];
JA10[1][3]=-links[5].mcm[2] + T1011[1][3];
JA10[1][4]=links[5].m + T1011[1][4];
JA10[1][5]=T1011[1][5];
JA10[1][6]=T1011[1][6];

JA10[2][1]=-links[5].mcm[3] + T1011[2][1];
JA10[2][2]=T1011[2][2];
JA10[2][3]=links[5].mcm[1] + T1011[2][3];
JA10[2][4]=T1011[2][4];
JA10[2][5]=links[5].m + T1011[2][5];
JA10[2][6]=T1011[2][6];

JA10[3][1]=links[5].mcm[2] + T1011[3][1];
JA10[3][2]=-links[5].mcm[1] + T1011[3][2];
JA10[3][3]=T1011[3][3];
JA10[3][4]=T1011[3][4];
JA10[3][5]=T1011[3][5];
JA10[3][6]=links[5].m + T1011[3][6];

JA10[4][1]=links[5].inertia[1][1] + T1011[4][1];
JA10[4][2]=links[5].inertia[1][2] + T1011[4][2];
JA10[4][3]=links[5].inertia[1][3] + T1011[4][3];
JA10[4][4]=T1011[4][4];
JA10[4][5]=-links[5].mcm[3] + T1011[4][5];
JA10[4][6]=links[5].mcm[2] + T1011[4][6];

JA10[5][1]=links[5].inertia[1][2] + T1011[5][1];
JA10[5][2]=links[5].inertia[2][2] + T1011[5][2];
JA10[5][3]=links[5].inertia[2][3] + T1011[5][3];
JA10[5][4]=links[5].mcm[3] + T1011[5][4];
JA10[5][5]=T1011[5][5];
JA10[5][6]=-links[5].mcm[1] + T1011[5][6];

JA10[6][1]=links[5].inertia[1][3] + T1011[6][1];
JA10[6][2]=links[5].inertia[2][3] + T1011[6][2];
JA10[6][3]=links[5].inertia[3][3] + T1011[6][3];
JA10[6][4]=-links[5].mcm[2] + T1011[6][4];
JA10[6][5]=links[5].mcm[1] + T1011[6][5];
JA10[6][6]=T1011[6][6];


h10[1]=JA10[1][3];
h10[2]=JA10[2][3];
h10[3]=JA10[3][3];
h10[4]=JA10[4][3];
h10[5]=JA10[5][3];
h10[6]=JA10[6][3];

T1910[1][1]=JA10[1][1];
T1910[1][2]=JA10[1][2];
T1910[1][3]=JA10[1][3];
T1910[1][4]=JA10[1][4];
T1910[1][5]=JA10[1][5];
T1910[1][6]=JA10[1][6];

T1910[2][1]=JA10[2][1];
T1910[2][2]=JA10[2][2];
T1910[2][3]=JA10[2][3];
T1910[2][4]=JA10[2][4];
T1910[2][5]=JA10[2][5];
T1910[2][6]=JA10[2][6];

T1910[3][1]=JA10[3][1];
T1910[3][2]=JA10[3][2];
T1910[3][3]=JA10[3][3];
T1910[3][4]=JA10[3][4];
T1910[3][5]=JA10[3][5];
T1910[3][6]=JA10[3][6];

T1910[4][1]=JA10[4][1];
T1910[4][2]=JA10[4][2];
T1910[4][3]=JA10[4][3];
T1910[4][4]=JA10[4][4];
T1910[4][5]=JA10[4][5];
T1910[4][6]=JA10[4][6];

T1910[5][1]=JA10[5][1];
T1910[5][2]=JA10[5][2];
T1910[5][3]=JA10[5][3];
T1910[5][4]=JA10[5][4];
T1910[5][5]=JA10[5][5];
T1910[5][6]=JA10[5][6];

T1910[6][1]=JA10[6][1];
T1910[6][2]=JA10[6][2];
T1910[6][3]=JA10[6][3];
T1910[6][4]=JA10[6][4];
T1910[6][5]=JA10[6][5];
T1910[6][6]=JA10[6][6];


T910[1][1]=S109[1][1]*(Si910[1][1]*T1910[1][1] + Si910[1][2]*T1910[2][1]) + S109[2][1]*(Si910[1][1]*T1910[1][2] + Si910[1][2]*T1910[2][2]);
T910[1][2]=S109[1][2]*(Si910[1][1]*T1910[1][1] + Si910[1][2]*T1910[2][1]) + S109[2][2]*(Si910[1][1]*T1910[1][2] + Si910[1][2]*T1910[2][2]) + LEGLINK3*(Si910[1][1]*T1910[1][6] + Si910[1][2]*T1910[2][6]);
T910[1][3]=Si910[1][1]*T1910[1][3] + Si910[1][2]*T1910[2][3] - LEGLINK3*S109[1][2]*(Si910[1][1]*T1910[1][4] + Si910[1][2]*T1910[2][4]) - LEGLINK3*S109[2][2]*(Si910[1][1]*T1910[1][5] + Si910[1][2]*T1910[2][5]);
T910[1][4]=S109[1][1]*(Si910[1][1]*T1910[1][4] + Si910[1][2]*T1910[2][4]) + S109[2][1]*(Si910[1][1]*T1910[1][5] + Si910[1][2]*T1910[2][5]);
T910[1][5]=S109[1][2]*(Si910[1][1]*T1910[1][4] + Si910[1][2]*T1910[2][4]) + S109[2][2]*(Si910[1][1]*T1910[1][5] + Si910[1][2]*T1910[2][5]);
T910[1][6]=Si910[1][1]*T1910[1][6] + Si910[1][2]*T1910[2][6];

T910[2][1]=S109[1][1]*(Si910[2][1]*T1910[1][1] + Si910[2][2]*T1910[2][1]) + S109[2][1]*(Si910[2][1]*T1910[1][2] + Si910[2][2]*T1910[2][2]);
T910[2][2]=S109[1][2]*(Si910[2][1]*T1910[1][1] + Si910[2][2]*T1910[2][1]) + S109[2][2]*(Si910[2][1]*T1910[1][2] + Si910[2][2]*T1910[2][2]) + LEGLINK3*(Si910[2][1]*T1910[1][6] + Si910[2][2]*T1910[2][6]);
T910[2][3]=Si910[2][1]*T1910[1][3] + Si910[2][2]*T1910[2][3] - LEGLINK3*S109[1][2]*(Si910[2][1]*T1910[1][4] + Si910[2][2]*T1910[2][4]) - LEGLINK3*S109[2][2]*(Si910[2][1]*T1910[1][5] + Si910[2][2]*T1910[2][5]);
T910[2][4]=S109[1][1]*(Si910[2][1]*T1910[1][4] + Si910[2][2]*T1910[2][4]) + S109[2][1]*(Si910[2][1]*T1910[1][5] + Si910[2][2]*T1910[2][5]);
T910[2][5]=S109[1][2]*(Si910[2][1]*T1910[1][4] + Si910[2][2]*T1910[2][4]) + S109[2][2]*(Si910[2][1]*T1910[1][5] + Si910[2][2]*T1910[2][5]);
T910[2][6]=Si910[2][1]*T1910[1][6] + Si910[2][2]*T1910[2][6];

T910[3][1]=S109[1][1]*T1910[3][1] + S109[2][1]*T1910[3][2];
T910[3][2]=S109[1][2]*T1910[3][1] + S109[2][2]*T1910[3][2] + LEGLINK3*T1910[3][6];
T910[3][3]=T1910[3][3] - LEGLINK3*S109[1][2]*T1910[3][4] - LEGLINK3*S109[2][2]*T1910[3][5];
T910[3][4]=S109[1][1]*T1910[3][4] + S109[2][1]*T1910[3][5];
T910[3][5]=S109[1][2]*T1910[3][4] + S109[2][2]*T1910[3][5];
T910[3][6]=T1910[3][6];

T910[4][1]=S109[1][1]*(Si910[1][1]*T1910[4][1] + Si910[1][2]*T1910[5][1]) + S109[2][1]*(Si910[1][1]*T1910[4][2] + Si910[1][2]*T1910[5][2]);
T910[4][2]=S109[1][2]*(Si910[1][1]*T1910[4][1] + Si910[1][2]*T1910[5][1]) + S109[2][2]*(Si910[1][1]*T1910[4][2] + Si910[1][2]*T1910[5][2]) + LEGLINK3*(Si910[1][1]*T1910[4][6] + Si910[1][2]*T1910[5][6]);
T910[4][3]=Si910[1][1]*T1910[4][3] + Si910[1][2]*T1910[5][3] - LEGLINK3*S109[1][2]*(Si910[1][1]*T1910[4][4] + Si910[1][2]*T1910[5][4]) - LEGLINK3*S109[2][2]*(Si910[1][1]*T1910[4][5] + Si910[1][2]*T1910[5][5]);
T910[4][4]=S109[1][1]*(Si910[1][1]*T1910[4][4] + Si910[1][2]*T1910[5][4]) + S109[2][1]*(Si910[1][1]*T1910[4][5] + Si910[1][2]*T1910[5][5]);
T910[4][5]=S109[1][2]*(Si910[1][1]*T1910[4][4] + Si910[1][2]*T1910[5][4]) + S109[2][2]*(Si910[1][1]*T1910[4][5] + Si910[1][2]*T1910[5][5]);
T910[4][6]=Si910[1][1]*T1910[4][6] + Si910[1][2]*T1910[5][6];

T910[5][1]=S109[1][1]*(LEGLINK3*T1910[3][1] + Si910[2][1]*T1910[4][1] + Si910[2][2]*T1910[5][1]) + S109[2][1]*(LEGLINK3*T1910[3][2] + Si910[2][1]*T1910[4][2] + Si910[2][2]*T1910[5][2]);
T910[5][2]=S109[1][2]*(LEGLINK3*T1910[3][1] + Si910[2][1]*T1910[4][1] + Si910[2][2]*T1910[5][1]) + S109[2][2]*(LEGLINK3*T1910[3][2] + Si910[2][1]*T1910[4][2] + Si910[2][2]*T1910[5][2]) + LEGLINK3*(LEGLINK3*T1910[3][6] + Si910[2][1]*T1910[4][6] + Si910[2][2]*T1910[5][6]);
T910[5][3]=LEGLINK3*T1910[3][3] + Si910[2][1]*T1910[4][3] + Si910[2][2]*T1910[5][3] - LEGLINK3*S109[1][2]*(LEGLINK3*T1910[3][4] + Si910[2][1]*T1910[4][4] + Si910[2][2]*T1910[5][4]) - LEGLINK3*S109[2][2]*(LEGLINK3*T1910[3][5] + Si910[2][1]*T1910[4][5] + Si910[2][2]*T1910[5][5]);
T910[5][4]=S109[1][1]*(LEGLINK3*T1910[3][4] + Si910[2][1]*T1910[4][4] + Si910[2][2]*T1910[5][4]) + S109[2][1]*(LEGLINK3*T1910[3][5] + Si910[2][1]*T1910[4][5] + Si910[2][2]*T1910[5][5]);
T910[5][5]=S109[1][2]*(LEGLINK3*T1910[3][4] + Si910[2][1]*T1910[4][4] + Si910[2][2]*T1910[5][4]) + S109[2][2]*(LEGLINK3*T1910[3][5] + Si910[2][1]*T1910[4][5] + Si910[2][2]*T1910[5][5]);
T910[5][6]=LEGLINK3*T1910[3][6] + Si910[2][1]*T1910[4][6] + Si910[2][2]*T1910[5][6];

T910[6][1]=S109[1][1]*(-(LEGLINK3*Si910[2][1]*T1910[1][1]) - LEGLINK3*Si910[2][2]*T1910[2][1] + T1910[6][1]) + S109[2][1]*(-(LEGLINK3*Si910[2][1]*T1910[1][2]) - LEGLINK3*Si910[2][2]*T1910[2][2] + T1910[6][2]);
T910[6][2]=S109[1][2]*(-(LEGLINK3*Si910[2][1]*T1910[1][1]) - LEGLINK3*Si910[2][2]*T1910[2][1] + T1910[6][1]) + S109[2][2]*(-(LEGLINK3*Si910[2][1]*T1910[1][2]) - LEGLINK3*Si910[2][2]*T1910[2][2] + T1910[6][2]) + LEGLINK3*(-(LEGLINK3*Si910[2][1]*T1910[1][6]) - LEGLINK3*Si910[2][2]*T1910[2][6] + T1910[6][6]);
T910[6][3]=-(LEGLINK3*Si910[2][1]*T1910[1][3]) - LEGLINK3*Si910[2][2]*T1910[2][3] + T1910[6][3] - LEGLINK3*S109[1][2]*(-(LEGLINK3*Si910[2][1]*T1910[1][4]) - LEGLINK3*Si910[2][2]*T1910[2][4] + T1910[6][4]) - LEGLINK3*S109[2][2]*(-(LEGLINK3*Si910[2][1]*T1910[1][5]) - LEGLINK3*Si910[2][2]*T1910[2][5] + T1910[6][5]);
T910[6][4]=S109[1][1]*(-(LEGLINK3*Si910[2][1]*T1910[1][4]) - LEGLINK3*Si910[2][2]*T1910[2][4] + T1910[6][4]) + S109[2][1]*(-(LEGLINK3*Si910[2][1]*T1910[1][5]) - LEGLINK3*Si910[2][2]*T1910[2][5] + T1910[6][5]);
T910[6][5]=S109[1][2]*(-(LEGLINK3*Si910[2][1]*T1910[1][4]) - LEGLINK3*Si910[2][2]*T1910[2][4] + T1910[6][4]) + S109[2][2]*(-(LEGLINK3*Si910[2][1]*T1910[1][5]) - LEGLINK3*Si910[2][2]*T1910[2][5] + T1910[6][5]);
T910[6][6]=-(LEGLINK3*Si910[2][1]*T1910[1][6]) - LEGLINK3*Si910[2][2]*T1910[2][6] + T1910[6][6];



}


void
hoap3_InvDynArtfunc25(void)
      {
JA9[1][1]=T910[1][1];
JA9[1][2]=links[4].mcm[3] + T910[1][2];
JA9[1][3]=-links[4].mcm[2] + T910[1][3];
JA9[1][4]=links[4].m + T910[1][4];
JA9[1][5]=T910[1][5];
JA9[1][6]=T910[1][6];

JA9[2][1]=-links[4].mcm[3] + T910[2][1];
JA9[2][2]=T910[2][2];
JA9[2][3]=links[4].mcm[1] + T910[2][3];
JA9[2][4]=T910[2][4];
JA9[2][5]=links[4].m + T910[2][5];
JA9[2][6]=T910[2][6];

JA9[3][1]=links[4].mcm[2] + T910[3][1];
JA9[3][2]=-links[4].mcm[1] + T910[3][2];
JA9[3][3]=T910[3][3];
JA9[3][4]=T910[3][4];
JA9[3][5]=T910[3][5];
JA9[3][6]=links[4].m + T910[3][6];

JA9[4][1]=links[4].inertia[1][1] + T910[4][1];
JA9[4][2]=links[4].inertia[1][2] + T910[4][2];
JA9[4][3]=links[4].inertia[1][3] + T910[4][3];
JA9[4][4]=T910[4][4];
JA9[4][5]=-links[4].mcm[3] + T910[4][5];
JA9[4][6]=links[4].mcm[2] + T910[4][6];

JA9[5][1]=links[4].inertia[1][2] + T910[5][1];
JA9[5][2]=links[4].inertia[2][2] + T910[5][2];
JA9[5][3]=links[4].inertia[2][3] + T910[5][3];
JA9[5][4]=links[4].mcm[3] + T910[5][4];
JA9[5][5]=T910[5][5];
JA9[5][6]=-links[4].mcm[1] + T910[5][6];

JA9[6][1]=links[4].inertia[1][3] + T910[6][1];
JA9[6][2]=links[4].inertia[2][3] + T910[6][2];
JA9[6][3]=links[4].inertia[3][3] + T910[6][3];
JA9[6][4]=-links[4].mcm[2] + T910[6][4];
JA9[6][5]=links[4].mcm[1] + T910[6][5];
JA9[6][6]=T910[6][6];


h9[1]=JA9[1][3];
h9[2]=JA9[2][3];
h9[3]=JA9[3][3];
h9[4]=JA9[4][3];
h9[5]=JA9[5][3];
h9[6]=JA9[6][3];

T189[1][1]=JA9[1][1];
T189[1][2]=JA9[1][2];
T189[1][3]=JA9[1][3];
T189[1][4]=JA9[1][4];
T189[1][5]=JA9[1][5];
T189[1][6]=JA9[1][6];

T189[2][1]=JA9[2][1];
T189[2][2]=JA9[2][2];
T189[2][3]=JA9[2][3];
T189[2][4]=JA9[2][4];
T189[2][5]=JA9[2][5];
T189[2][6]=JA9[2][6];

T189[3][1]=JA9[3][1];
T189[3][2]=JA9[3][2];
T189[3][3]=JA9[3][3];
T189[3][4]=JA9[3][4];
T189[3][5]=JA9[3][5];
T189[3][6]=JA9[3][6];

T189[4][1]=JA9[4][1];
T189[4][2]=JA9[4][2];
T189[4][3]=JA9[4][3];
T189[4][4]=JA9[4][4];
T189[4][5]=JA9[4][5];
T189[4][6]=JA9[4][6];

T189[5][1]=JA9[5][1];
T189[5][2]=JA9[5][2];
T189[5][3]=JA9[5][3];
T189[5][4]=JA9[5][4];
T189[5][5]=JA9[5][5];
T189[5][6]=JA9[5][6];

T189[6][1]=JA9[6][1];
T189[6][2]=JA9[6][2];
T189[6][3]=JA9[6][3];
T189[6][4]=JA9[6][4];
T189[6][5]=JA9[6][5];
T189[6][6]=JA9[6][6];


T89[1][1]=S98[1][1]*(Si89[1][1]*T189[1][1] + Si89[1][2]*T189[2][1]) + S98[2][1]*(Si89[1][1]*T189[1][2] + Si89[1][2]*T189[2][2]);
T89[1][2]=S98[1][2]*(Si89[1][1]*T189[1][1] + Si89[1][2]*T189[2][1]) + S98[2][2]*(Si89[1][1]*T189[1][2] + Si89[1][2]*T189[2][2]) + LEGLINK2*(Si89[1][1]*T189[1][6] + Si89[1][2]*T189[2][6]);
T89[1][3]=Si89[1][1]*T189[1][3] + Si89[1][2]*T189[2][3] - LEGLINK2*S98[1][2]*(Si89[1][1]*T189[1][4] + Si89[1][2]*T189[2][4]) - LEGLINK2*S98[2][2]*(Si89[1][1]*T189[1][5] + Si89[1][2]*T189[2][5]);
T89[1][4]=S98[1][1]*(Si89[1][1]*T189[1][4] + Si89[1][2]*T189[2][4]) + S98[2][1]*(Si89[1][1]*T189[1][5] + Si89[1][2]*T189[2][5]);
T89[1][5]=S98[1][2]*(Si89[1][1]*T189[1][4] + Si89[1][2]*T189[2][4]) + S98[2][2]*(Si89[1][1]*T189[1][5] + Si89[1][2]*T189[2][5]);
T89[1][6]=Si89[1][1]*T189[1][6] + Si89[1][2]*T189[2][6];

T89[2][1]=S98[1][1]*(Si89[2][1]*T189[1][1] + Si89[2][2]*T189[2][1]) + S98[2][1]*(Si89[2][1]*T189[1][2] + Si89[2][2]*T189[2][2]);
T89[2][2]=S98[1][2]*(Si89[2][1]*T189[1][1] + Si89[2][2]*T189[2][1]) + S98[2][2]*(Si89[2][1]*T189[1][2] + Si89[2][2]*T189[2][2]) + LEGLINK2*(Si89[2][1]*T189[1][6] + Si89[2][2]*T189[2][6]);
T89[2][3]=Si89[2][1]*T189[1][3] + Si89[2][2]*T189[2][3] - LEGLINK2*S98[1][2]*(Si89[2][1]*T189[1][4] + Si89[2][2]*T189[2][4]) - LEGLINK2*S98[2][2]*(Si89[2][1]*T189[1][5] + Si89[2][2]*T189[2][5]);
T89[2][4]=S98[1][1]*(Si89[2][1]*T189[1][4] + Si89[2][2]*T189[2][4]) + S98[2][1]*(Si89[2][1]*T189[1][5] + Si89[2][2]*T189[2][5]);
T89[2][5]=S98[1][2]*(Si89[2][1]*T189[1][4] + Si89[2][2]*T189[2][4]) + S98[2][2]*(Si89[2][1]*T189[1][5] + Si89[2][2]*T189[2][5]);
T89[2][6]=Si89[2][1]*T189[1][6] + Si89[2][2]*T189[2][6];

T89[3][1]=S98[1][1]*T189[3][1] + S98[2][1]*T189[3][2];
T89[3][2]=S98[1][2]*T189[3][1] + S98[2][2]*T189[3][2] + LEGLINK2*T189[3][6];
T89[3][3]=T189[3][3] - LEGLINK2*S98[1][2]*T189[3][4] - LEGLINK2*S98[2][2]*T189[3][5];
T89[3][4]=S98[1][1]*T189[3][4] + S98[2][1]*T189[3][5];
T89[3][5]=S98[1][2]*T189[3][4] + S98[2][2]*T189[3][5];
T89[3][6]=T189[3][6];

T89[4][1]=S98[1][1]*(Si89[1][1]*T189[4][1] + Si89[1][2]*T189[5][1]) + S98[2][1]*(Si89[1][1]*T189[4][2] + Si89[1][2]*T189[5][2]);
T89[4][2]=S98[1][2]*(Si89[1][1]*T189[4][1] + Si89[1][2]*T189[5][1]) + S98[2][2]*(Si89[1][1]*T189[4][2] + Si89[1][2]*T189[5][2]) + LEGLINK2*(Si89[1][1]*T189[4][6] + Si89[1][2]*T189[5][6]);
T89[4][3]=Si89[1][1]*T189[4][3] + Si89[1][2]*T189[5][3] - LEGLINK2*S98[1][2]*(Si89[1][1]*T189[4][4] + Si89[1][2]*T189[5][4]) - LEGLINK2*S98[2][2]*(Si89[1][1]*T189[4][5] + Si89[1][2]*T189[5][5]);
T89[4][4]=S98[1][1]*(Si89[1][1]*T189[4][4] + Si89[1][2]*T189[5][4]) + S98[2][1]*(Si89[1][1]*T189[4][5] + Si89[1][2]*T189[5][5]);
T89[4][5]=S98[1][2]*(Si89[1][1]*T189[4][4] + Si89[1][2]*T189[5][4]) + S98[2][2]*(Si89[1][1]*T189[4][5] + Si89[1][2]*T189[5][5]);
T89[4][6]=Si89[1][1]*T189[4][6] + Si89[1][2]*T189[5][6];

T89[5][1]=S98[1][1]*(LEGLINK2*T189[3][1] + Si89[2][1]*T189[4][1] + Si89[2][2]*T189[5][1]) + S98[2][1]*(LEGLINK2*T189[3][2] + Si89[2][1]*T189[4][2] + Si89[2][2]*T189[5][2]);
T89[5][2]=S98[1][2]*(LEGLINK2*T189[3][1] + Si89[2][1]*T189[4][1] + Si89[2][2]*T189[5][1]) + S98[2][2]*(LEGLINK2*T189[3][2] + Si89[2][1]*T189[4][2] + Si89[2][2]*T189[5][2]) + LEGLINK2*(LEGLINK2*T189[3][6] + Si89[2][1]*T189[4][6] + Si89[2][2]*T189[5][6]);
T89[5][3]=LEGLINK2*T189[3][3] + Si89[2][1]*T189[4][3] + Si89[2][2]*T189[5][3] - LEGLINK2*S98[1][2]*(LEGLINK2*T189[3][4] + Si89[2][1]*T189[4][4] + Si89[2][2]*T189[5][4]) - LEGLINK2*S98[2][2]*(LEGLINK2*T189[3][5] + Si89[2][1]*T189[4][5] + Si89[2][2]*T189[5][5]);
T89[5][4]=S98[1][1]*(LEGLINK2*T189[3][4] + Si89[2][1]*T189[4][4] + Si89[2][2]*T189[5][4]) + S98[2][1]*(LEGLINK2*T189[3][5] + Si89[2][1]*T189[4][5] + Si89[2][2]*T189[5][5]);
T89[5][5]=S98[1][2]*(LEGLINK2*T189[3][4] + Si89[2][1]*T189[4][4] + Si89[2][2]*T189[5][4]) + S98[2][2]*(LEGLINK2*T189[3][5] + Si89[2][1]*T189[4][5] + Si89[2][2]*T189[5][5]);
T89[5][6]=LEGLINK2*T189[3][6] + Si89[2][1]*T189[4][6] + Si89[2][2]*T189[5][6];

T89[6][1]=S98[1][1]*(-(LEGLINK2*Si89[2][1]*T189[1][1]) - LEGLINK2*Si89[2][2]*T189[2][1] + T189[6][1]) + S98[2][1]*(-(LEGLINK2*Si89[2][1]*T189[1][2]) - LEGLINK2*Si89[2][2]*T189[2][2] + T189[6][2]);
T89[6][2]=S98[1][2]*(-(LEGLINK2*Si89[2][1]*T189[1][1]) - LEGLINK2*Si89[2][2]*T189[2][1] + T189[6][1]) + S98[2][2]*(-(LEGLINK2*Si89[2][1]*T189[1][2]) - LEGLINK2*Si89[2][2]*T189[2][2] + T189[6][2]) + LEGLINK2*(-(LEGLINK2*Si89[2][1]*T189[1][6]) - LEGLINK2*Si89[2][2]*T189[2][6] + T189[6][6]);
T89[6][3]=-(LEGLINK2*Si89[2][1]*T189[1][3]) - LEGLINK2*Si89[2][2]*T189[2][3] + T189[6][3] - LEGLINK2*S98[1][2]*(-(LEGLINK2*Si89[2][1]*T189[1][4]) - LEGLINK2*Si89[2][2]*T189[2][4] + T189[6][4]) - LEGLINK2*S98[2][2]*(-(LEGLINK2*Si89[2][1]*T189[1][5]) - LEGLINK2*Si89[2][2]*T189[2][5] + T189[6][5]);
T89[6][4]=S98[1][1]*(-(LEGLINK2*Si89[2][1]*T189[1][4]) - LEGLINK2*Si89[2][2]*T189[2][4] + T189[6][4]) + S98[2][1]*(-(LEGLINK2*Si89[2][1]*T189[1][5]) - LEGLINK2*Si89[2][2]*T189[2][5] + T189[6][5]);
T89[6][5]=S98[1][2]*(-(LEGLINK2*Si89[2][1]*T189[1][4]) - LEGLINK2*Si89[2][2]*T189[2][4] + T189[6][4]) + S98[2][2]*(-(LEGLINK2*Si89[2][1]*T189[1][5]) - LEGLINK2*Si89[2][2]*T189[2][5] + T189[6][5]);
T89[6][6]=-(LEGLINK2*Si89[2][1]*T189[1][6]) - LEGLINK2*Si89[2][2]*T189[2][6] + T189[6][6];



}


void
hoap3_InvDynArtfunc26(void)
      {
JA8[1][1]=T89[1][1];
JA8[1][2]=links[3].mcm[3] + T89[1][2];
JA8[1][3]=-links[3].mcm[2] + T89[1][3];
JA8[1][4]=links[3].m + T89[1][4];
JA8[1][5]=T89[1][5];
JA8[1][6]=T89[1][6];

JA8[2][1]=-links[3].mcm[3] + T89[2][1];
JA8[2][2]=T89[2][2];
JA8[2][3]=links[3].mcm[1] + T89[2][3];
JA8[2][4]=T89[2][4];
JA8[2][5]=links[3].m + T89[2][5];
JA8[2][6]=T89[2][6];

JA8[3][1]=links[3].mcm[2] + T89[3][1];
JA8[3][2]=-links[3].mcm[1] + T89[3][2];
JA8[3][3]=T89[3][3];
JA8[3][4]=T89[3][4];
JA8[3][5]=T89[3][5];
JA8[3][6]=links[3].m + T89[3][6];

JA8[4][1]=links[3].inertia[1][1] + T89[4][1];
JA8[4][2]=links[3].inertia[1][2] + T89[4][2];
JA8[4][3]=links[3].inertia[1][3] + T89[4][3];
JA8[4][4]=T89[4][4];
JA8[4][5]=-links[3].mcm[3] + T89[4][5];
JA8[4][6]=links[3].mcm[2] + T89[4][6];

JA8[5][1]=links[3].inertia[1][2] + T89[5][1];
JA8[5][2]=links[3].inertia[2][2] + T89[5][2];
JA8[5][3]=links[3].inertia[2][3] + T89[5][3];
JA8[5][4]=links[3].mcm[3] + T89[5][4];
JA8[5][5]=T89[5][5];
JA8[5][6]=-links[3].mcm[1] + T89[5][6];

JA8[6][1]=links[3].inertia[1][3] + T89[6][1];
JA8[6][2]=links[3].inertia[2][3] + T89[6][2];
JA8[6][3]=links[3].inertia[3][3] + T89[6][3];
JA8[6][4]=-links[3].mcm[2] + T89[6][4];
JA8[6][5]=links[3].mcm[1] + T89[6][5];
JA8[6][6]=T89[6][6];


h8[1]=JA8[1][3];
h8[2]=JA8[2][3];
h8[3]=JA8[3][3];
h8[4]=JA8[4][3];
h8[5]=JA8[5][3];
h8[6]=JA8[6][3];

T178[1][1]=JA8[1][1];
T178[1][2]=JA8[1][2];
T178[1][3]=JA8[1][3];
T178[1][4]=JA8[1][4];
T178[1][5]=JA8[1][5];
T178[1][6]=JA8[1][6];

T178[2][1]=JA8[2][1];
T178[2][2]=JA8[2][2];
T178[2][3]=JA8[2][3];
T178[2][4]=JA8[2][4];
T178[2][5]=JA8[2][5];
T178[2][6]=JA8[2][6];

T178[3][1]=JA8[3][1];
T178[3][2]=JA8[3][2];
T178[3][3]=JA8[3][3];
T178[3][4]=JA8[3][4];
T178[3][5]=JA8[3][5];
T178[3][6]=JA8[3][6];

T178[4][1]=JA8[4][1];
T178[4][2]=JA8[4][2];
T178[4][3]=JA8[4][3];
T178[4][4]=JA8[4][4];
T178[4][5]=JA8[4][5];
T178[4][6]=JA8[4][6];

T178[5][1]=JA8[5][1];
T178[5][2]=JA8[5][2];
T178[5][3]=JA8[5][3];
T178[5][4]=JA8[5][4];
T178[5][5]=JA8[5][5];
T178[5][6]=JA8[5][6];

T178[6][1]=JA8[6][1];
T178[6][2]=JA8[6][2];
T178[6][3]=JA8[6][3];
T178[6][4]=JA8[6][4];
T178[6][5]=JA8[6][5];
T178[6][6]=JA8[6][6];


T78[1][1]=S87[1][1]*(Si78[1][1]*T178[1][1] + Si78[1][2]*T178[2][1]) + S87[2][1]*(Si78[1][1]*T178[1][2] + Si78[1][2]*T178[2][2]);
T78[1][2]=-(Si78[1][1]*T178[1][3]) - Si78[1][2]*T178[2][3];
T78[1][3]=S87[1][3]*(Si78[1][1]*T178[1][1] + Si78[1][2]*T178[2][1]) + S87[2][3]*(Si78[1][1]*T178[1][2] + Si78[1][2]*T178[2][2]);
T78[1][4]=S87[1][1]*(Si78[1][1]*T178[1][4] + Si78[1][2]*T178[2][4]) + S87[2][1]*(Si78[1][1]*T178[1][5] + Si78[1][2]*T178[2][5]);
T78[1][5]=-(Si78[1][1]*T178[1][6]) - Si78[1][2]*T178[2][6];
T78[1][6]=S87[1][3]*(Si78[1][1]*T178[1][4] + Si78[1][2]*T178[2][4]) + S87[2][3]*(Si78[1][1]*T178[1][5] + Si78[1][2]*T178[2][5]);

T78[2][1]=-(S87[1][1]*T178[3][1]) - S87[2][1]*T178[3][2];
T78[2][2]=T178[3][3];
T78[2][3]=-(S87[1][3]*T178[3][1]) - S87[2][3]*T178[3][2];
T78[2][4]=-(S87[1][1]*T178[3][4]) - S87[2][1]*T178[3][5];
T78[2][5]=T178[3][6];
T78[2][6]=-(S87[1][3]*T178[3][4]) - S87[2][3]*T178[3][5];

T78[3][1]=S87[1][1]*(Si78[3][1]*T178[1][1] + Si78[3][2]*T178[2][1]) + S87[2][1]*(Si78[3][1]*T178[1][2] + Si78[3][2]*T178[2][2]);
T78[3][2]=-(Si78[3][1]*T178[1][3]) - Si78[3][2]*T178[2][3];
T78[3][3]=S87[1][3]*(Si78[3][1]*T178[1][1] + Si78[3][2]*T178[2][1]) + S87[2][3]*(Si78[3][1]*T178[1][2] + Si78[3][2]*T178[2][2]);
T78[3][4]=S87[1][1]*(Si78[3][1]*T178[1][4] + Si78[3][2]*T178[2][4]) + S87[2][1]*(Si78[3][1]*T178[1][5] + Si78[3][2]*T178[2][5]);
T78[3][5]=-(Si78[3][1]*T178[1][6]) - Si78[3][2]*T178[2][6];
T78[3][6]=S87[1][3]*(Si78[3][1]*T178[1][4] + Si78[3][2]*T178[2][4]) + S87[2][3]*(Si78[3][1]*T178[1][5] + Si78[3][2]*T178[2][5]);

T78[4][1]=S87[1][1]*(Si78[1][1]*T178[4][1] + Si78[1][2]*T178[5][1]) + S87[2][1]*(Si78[1][1]*T178[4][2] + Si78[1][2]*T178[5][2]);
T78[4][2]=-(Si78[1][1]*T178[4][3]) - Si78[1][2]*T178[5][3];
T78[4][3]=S87[1][3]*(Si78[1][1]*T178[4][1] + Si78[1][2]*T178[5][1]) + S87[2][3]*(Si78[1][1]*T178[4][2] + Si78[1][2]*T178[5][2]);
T78[4][4]=S87[1][1]*(Si78[1][1]*T178[4][4] + Si78[1][2]*T178[5][4]) + S87[2][1]*(Si78[1][1]*T178[4][5] + Si78[1][2]*T178[5][5]);
T78[4][5]=-(Si78[1][1]*T178[4][6]) - Si78[1][2]*T178[5][6];
T78[4][6]=S87[1][3]*(Si78[1][1]*T178[4][4] + Si78[1][2]*T178[5][4]) + S87[2][3]*(Si78[1][1]*T178[4][5] + Si78[1][2]*T178[5][5]);

T78[5][1]=-(S87[1][1]*T178[6][1]) - S87[2][1]*T178[6][2];
T78[5][2]=T178[6][3];
T78[5][3]=-(S87[1][3]*T178[6][1]) - S87[2][3]*T178[6][2];
T78[5][4]=-(S87[1][1]*T178[6][4]) - S87[2][1]*T178[6][5];
T78[5][5]=T178[6][6];
T78[5][6]=-(S87[1][3]*T178[6][4]) - S87[2][3]*T178[6][5];

T78[6][1]=S87[1][1]*(Si78[3][1]*T178[4][1] + Si78[3][2]*T178[5][1]) + S87[2][1]*(Si78[3][1]*T178[4][2] + Si78[3][2]*T178[5][2]);
T78[6][2]=-(Si78[3][1]*T178[4][3]) - Si78[3][2]*T178[5][3];
T78[6][3]=S87[1][3]*(Si78[3][1]*T178[4][1] + Si78[3][2]*T178[5][1]) + S87[2][3]*(Si78[3][1]*T178[4][2] + Si78[3][2]*T178[5][2]);
T78[6][4]=S87[1][1]*(Si78[3][1]*T178[4][4] + Si78[3][2]*T178[5][4]) + S87[2][1]*(Si78[3][1]*T178[4][5] + Si78[3][2]*T178[5][5]);
T78[6][5]=-(Si78[3][1]*T178[4][6]) - Si78[3][2]*T178[5][6];
T78[6][6]=S87[1][3]*(Si78[3][1]*T178[4][4] + Si78[3][2]*T178[5][4]) + S87[2][3]*(Si78[3][1]*T178[4][5] + Si78[3][2]*T178[5][5]);



}


void
hoap3_InvDynArtfunc27(void)
      {
JA7[1][1]=T78[1][1];
JA7[1][2]=links[2].mcm[3] + T78[1][2];
JA7[1][3]=-links[2].mcm[2] + T78[1][3];
JA7[1][4]=links[2].m + T78[1][4];
JA7[1][5]=T78[1][5];
JA7[1][6]=T78[1][6];

JA7[2][1]=-links[2].mcm[3] + T78[2][1];
JA7[2][2]=T78[2][2];
JA7[2][3]=links[2].mcm[1] + T78[2][3];
JA7[2][4]=T78[2][4];
JA7[2][5]=links[2].m + T78[2][5];
JA7[2][6]=T78[2][6];

JA7[3][1]=links[2].mcm[2] + T78[3][1];
JA7[3][2]=-links[2].mcm[1] + T78[3][2];
JA7[3][3]=T78[3][3];
JA7[3][4]=T78[3][4];
JA7[3][5]=T78[3][5];
JA7[3][6]=links[2].m + T78[3][6];

JA7[4][1]=links[2].inertia[1][1] + T78[4][1];
JA7[4][2]=links[2].inertia[1][2] + T78[4][2];
JA7[4][3]=links[2].inertia[1][3] + T78[4][3];
JA7[4][4]=T78[4][4];
JA7[4][5]=-links[2].mcm[3] + T78[4][5];
JA7[4][6]=links[2].mcm[2] + T78[4][6];

JA7[5][1]=links[2].inertia[1][2] + T78[5][1];
JA7[5][2]=links[2].inertia[2][2] + T78[5][2];
JA7[5][3]=links[2].inertia[2][3] + T78[5][3];
JA7[5][4]=links[2].mcm[3] + T78[5][4];
JA7[5][5]=T78[5][5];
JA7[5][6]=-links[2].mcm[1] + T78[5][6];

JA7[6][1]=links[2].inertia[1][3] + T78[6][1];
JA7[6][2]=links[2].inertia[2][3] + T78[6][2];
JA7[6][3]=links[2].inertia[3][3] + T78[6][3];
JA7[6][4]=-links[2].mcm[2] + T78[6][4];
JA7[6][5]=links[2].mcm[1] + T78[6][5];
JA7[6][6]=T78[6][6];


h7[1]=JA7[1][3];
h7[2]=JA7[2][3];
h7[3]=JA7[3][3];
h7[4]=JA7[4][3];
h7[5]=JA7[5][3];
h7[6]=JA7[6][3];

T167[1][1]=JA7[1][1];
T167[1][2]=JA7[1][2];
T167[1][3]=JA7[1][3];
T167[1][4]=JA7[1][4];
T167[1][5]=JA7[1][5];
T167[1][6]=JA7[1][6];

T167[2][1]=JA7[2][1];
T167[2][2]=JA7[2][2];
T167[2][3]=JA7[2][3];
T167[2][4]=JA7[2][4];
T167[2][5]=JA7[2][5];
T167[2][6]=JA7[2][6];

T167[3][1]=JA7[3][1];
T167[3][2]=JA7[3][2];
T167[3][3]=JA7[3][3];
T167[3][4]=JA7[3][4];
T167[3][5]=JA7[3][5];
T167[3][6]=JA7[3][6];

T167[4][1]=JA7[4][1];
T167[4][2]=JA7[4][2];
T167[4][3]=JA7[4][3];
T167[4][4]=JA7[4][4];
T167[4][5]=JA7[4][5];
T167[4][6]=JA7[4][6];

T167[5][1]=JA7[5][1];
T167[5][2]=JA7[5][2];
T167[5][3]=JA7[5][3];
T167[5][4]=JA7[5][4];
T167[5][5]=JA7[5][5];
T167[5][6]=JA7[5][6];

T167[6][1]=JA7[6][1];
T167[6][2]=JA7[6][2];
T167[6][3]=JA7[6][3];
T167[6][4]=JA7[6][4];
T167[6][5]=JA7[6][5];
T167[6][6]=JA7[6][6];


T67[1][1]=S76[1][1]*(Si67[1][1]*T167[1][1] + Si67[1][2]*T167[2][1]) + S76[2][1]*(Si67[1][1]*T167[1][2] + Si67[1][2]*T167[2][2]);
T67[1][2]=-(Si67[1][1]*T167[1][3]) - Si67[1][2]*T167[2][3];
T67[1][3]=S76[1][3]*(Si67[1][1]*T167[1][1] + Si67[1][2]*T167[2][1]) + S76[2][3]*(Si67[1][1]*T167[1][2] + Si67[1][2]*T167[2][2]);
T67[1][4]=S76[1][1]*(Si67[1][1]*T167[1][4] + Si67[1][2]*T167[2][4]) + S76[2][1]*(Si67[1][1]*T167[1][5] + Si67[1][2]*T167[2][5]);
T67[1][5]=-(Si67[1][1]*T167[1][6]) - Si67[1][2]*T167[2][6];
T67[1][6]=S76[1][3]*(Si67[1][1]*T167[1][4] + Si67[1][2]*T167[2][4]) + S76[2][3]*(Si67[1][1]*T167[1][5] + Si67[1][2]*T167[2][5]);

T67[2][1]=-(S76[1][1]*T167[3][1]) - S76[2][1]*T167[3][2];
T67[2][2]=T167[3][3];
T67[2][3]=-(S76[1][3]*T167[3][1]) - S76[2][3]*T167[3][2];
T67[2][4]=-(S76[1][1]*T167[3][4]) - S76[2][1]*T167[3][5];
T67[2][5]=T167[3][6];
T67[2][6]=-(S76[1][3]*T167[3][4]) - S76[2][3]*T167[3][5];

T67[3][1]=S76[1][1]*(Si67[3][1]*T167[1][1] + Si67[3][2]*T167[2][1]) + S76[2][1]*(Si67[3][1]*T167[1][2] + Si67[3][2]*T167[2][2]);
T67[3][2]=-(Si67[3][1]*T167[1][3]) - Si67[3][2]*T167[2][3];
T67[3][3]=S76[1][3]*(Si67[3][1]*T167[1][1] + Si67[3][2]*T167[2][1]) + S76[2][3]*(Si67[3][1]*T167[1][2] + Si67[3][2]*T167[2][2]);
T67[3][4]=S76[1][1]*(Si67[3][1]*T167[1][4] + Si67[3][2]*T167[2][4]) + S76[2][1]*(Si67[3][1]*T167[1][5] + Si67[3][2]*T167[2][5]);
T67[3][5]=-(Si67[3][1]*T167[1][6]) - Si67[3][2]*T167[2][6];
T67[3][6]=S76[1][3]*(Si67[3][1]*T167[1][4] + Si67[3][2]*T167[2][4]) + S76[2][3]*(Si67[3][1]*T167[1][5] + Si67[3][2]*T167[2][5]);

T67[4][1]=S76[1][1]*(Si67[1][1]*T167[4][1] + Si67[1][2]*T167[5][1]) + S76[2][1]*(Si67[1][1]*T167[4][2] + Si67[1][2]*T167[5][2]);
T67[4][2]=-(Si67[1][1]*T167[4][3]) - Si67[1][2]*T167[5][3];
T67[4][3]=S76[1][3]*(Si67[1][1]*T167[4][1] + Si67[1][2]*T167[5][1]) + S76[2][3]*(Si67[1][1]*T167[4][2] + Si67[1][2]*T167[5][2]);
T67[4][4]=S76[1][1]*(Si67[1][1]*T167[4][4] + Si67[1][2]*T167[5][4]) + S76[2][1]*(Si67[1][1]*T167[4][5] + Si67[1][2]*T167[5][5]);
T67[4][5]=-(Si67[1][1]*T167[4][6]) - Si67[1][2]*T167[5][6];
T67[4][6]=S76[1][3]*(Si67[1][1]*T167[4][4] + Si67[1][2]*T167[5][4]) + S76[2][3]*(Si67[1][1]*T167[4][5] + Si67[1][2]*T167[5][5]);

T67[5][1]=-(S76[1][1]*T167[6][1]) - S76[2][1]*T167[6][2];
T67[5][2]=T167[6][3];
T67[5][3]=-(S76[1][3]*T167[6][1]) - S76[2][3]*T167[6][2];
T67[5][4]=-(S76[1][1]*T167[6][4]) - S76[2][1]*T167[6][5];
T67[5][5]=T167[6][6];
T67[5][6]=-(S76[1][3]*T167[6][4]) - S76[2][3]*T167[6][5];

T67[6][1]=S76[1][1]*(Si67[3][1]*T167[4][1] + Si67[3][2]*T167[5][1]) + S76[2][1]*(Si67[3][1]*T167[4][2] + Si67[3][2]*T167[5][2]);
T67[6][2]=-(Si67[3][1]*T167[4][3]) - Si67[3][2]*T167[5][3];
T67[6][3]=S76[1][3]*(Si67[3][1]*T167[4][1] + Si67[3][2]*T167[5][1]) + S76[2][3]*(Si67[3][1]*T167[4][2] + Si67[3][2]*T167[5][2]);
T67[6][4]=S76[1][1]*(Si67[3][1]*T167[4][4] + Si67[3][2]*T167[5][4]) + S76[2][1]*(Si67[3][1]*T167[4][5] + Si67[3][2]*T167[5][5]);
T67[6][5]=-(Si67[3][1]*T167[4][6]) - Si67[3][2]*T167[5][6];
T67[6][6]=S76[1][3]*(Si67[3][1]*T167[4][4] + Si67[3][2]*T167[5][4]) + S76[2][3]*(Si67[3][1]*T167[4][5] + Si67[3][2]*T167[5][5]);



}


void
hoap3_InvDynArtfunc28(void)
      {
JA6[1][1]=T67[1][1];
JA6[1][2]=links[1].mcm[3] + T67[1][2];
JA6[1][3]=-links[1].mcm[2] + T67[1][3];
JA6[1][4]=links[1].m + T67[1][4];
JA6[1][5]=T67[1][5];
JA6[1][6]=T67[1][6];

JA6[2][1]=-links[1].mcm[3] + T67[2][1];
JA6[2][2]=T67[2][2];
JA6[2][3]=links[1].mcm[1] + T67[2][3];
JA6[2][4]=T67[2][4];
JA6[2][5]=links[1].m + T67[2][5];
JA6[2][6]=T67[2][6];

JA6[3][1]=links[1].mcm[2] + T67[3][1];
JA6[3][2]=-links[1].mcm[1] + T67[3][2];
JA6[3][3]=T67[3][3];
JA6[3][4]=T67[3][4];
JA6[3][5]=T67[3][5];
JA6[3][6]=links[1].m + T67[3][6];

JA6[4][1]=links[1].inertia[1][1] + T67[4][1];
JA6[4][2]=links[1].inertia[1][2] + T67[4][2];
JA6[4][3]=links[1].inertia[1][3] + T67[4][3];
JA6[4][4]=T67[4][4];
JA6[4][5]=-links[1].mcm[3] + T67[4][5];
JA6[4][6]=links[1].mcm[2] + T67[4][6];

JA6[5][1]=links[1].inertia[1][2] + T67[5][1];
JA6[5][2]=links[1].inertia[2][2] + T67[5][2];
JA6[5][3]=links[1].inertia[2][3] + T67[5][3];
JA6[5][4]=links[1].mcm[3] + T67[5][4];
JA6[5][5]=T67[5][5];
JA6[5][6]=-links[1].mcm[1] + T67[5][6];

JA6[6][1]=links[1].inertia[1][3] + T67[6][1];
JA6[6][2]=links[1].inertia[2][3] + T67[6][2];
JA6[6][3]=links[1].inertia[3][3] + T67[6][3];
JA6[6][4]=-links[1].mcm[2] + T67[6][4];
JA6[6][5]=links[1].mcm[1] + T67[6][5];
JA6[6][6]=T67[6][6];


h6[1]=JA6[1][3];
h6[2]=JA6[2][3];
h6[3]=JA6[3][3];
h6[4]=JA6[4][3];
h6[5]=JA6[5][3];
h6[6]=JA6[6][3];

T156[1][1]=JA6[1][1];
T156[1][2]=JA6[1][2];
T156[1][3]=JA6[1][3];
T156[1][4]=JA6[1][4];
T156[1][5]=JA6[1][5];
T156[1][6]=JA6[1][6];

T156[2][1]=JA6[2][1];
T156[2][2]=JA6[2][2];
T156[2][3]=JA6[2][3];
T156[2][4]=JA6[2][4];
T156[2][5]=JA6[2][5];
T156[2][6]=JA6[2][6];

T156[3][1]=JA6[3][1];
T156[3][2]=JA6[3][2];
T156[3][3]=JA6[3][3];
T156[3][4]=JA6[3][4];
T156[3][5]=JA6[3][5];
T156[3][6]=JA6[3][6];

T156[4][1]=JA6[4][1];
T156[4][2]=JA6[4][2];
T156[4][3]=JA6[4][3];
T156[4][4]=JA6[4][4];
T156[4][5]=JA6[4][5];
T156[4][6]=JA6[4][6];

T156[5][1]=JA6[5][1];
T156[5][2]=JA6[5][2];
T156[5][3]=JA6[5][3];
T156[5][4]=JA6[5][4];
T156[5][5]=JA6[5][5];
T156[5][6]=JA6[5][6];

T156[6][1]=JA6[6][1];
T156[6][2]=JA6[6][2];
T156[6][3]=JA6[6][3];
T156[6][4]=JA6[6][4];
T156[6][5]=JA6[6][5];
T156[6][6]=JA6[6][6];


T56[1][1]=S65[1][1]*(Si56[1][1]*T156[1][1] + Si56[1][2]*T156[2][1]) + S65[2][1]*(Si56[1][1]*T156[1][2] + Si56[1][2]*T156[2][2]) - WAISTLINK1*S65[1][3]*(Si56[1][1]*T156[1][4] + Si56[1][2]*T156[2][4]) - WAISTLINK1*S65[2][3]*(Si56[1][1]*T156[1][5] + Si56[1][2]*T156[2][5]) - LEGLINK1*(Si56[1][1]*T156[1][6] + Si56[1][2]*T156[2][6]);
T56[1][2]=Si56[1][1]*T156[1][3] + Si56[1][2]*T156[2][3] + (LEGLINK1*S65[1][1] + WAISTLINK2*S65[1][3])*(Si56[1][1]*T156[1][4] + Si56[1][2]*T156[2][4]) + (LEGLINK1*S65[2][1] + WAISTLINK2*S65[2][3])*(Si56[1][1]*T156[1][5] + Si56[1][2]*T156[2][5]);
T56[1][3]=S65[1][3]*(Si56[1][1]*T156[1][1] + Si56[1][2]*T156[2][1]) + S65[2][3]*(Si56[1][1]*T156[1][2] + Si56[1][2]*T156[2][2]) + WAISTLINK1*S65[1][1]*(Si56[1][1]*T156[1][4] + Si56[1][2]*T156[2][4]) + WAISTLINK1*S65[2][1]*(Si56[1][1]*T156[1][5] + Si56[1][2]*T156[2][5]) - WAISTLINK2*(Si56[1][1]*T156[1][6] + Si56[1][2]*T156[2][6]);
T56[1][4]=S65[1][1]*(Si56[1][1]*T156[1][4] + Si56[1][2]*T156[2][4]) + S65[2][1]*(Si56[1][1]*T156[1][5] + Si56[1][2]*T156[2][5]);
T56[1][5]=Si56[1][1]*T156[1][6] + Si56[1][2]*T156[2][6];
T56[1][6]=S65[1][3]*(Si56[1][1]*T156[1][4] + Si56[1][2]*T156[2][4]) + S65[2][3]*(Si56[1][1]*T156[1][5] + Si56[1][2]*T156[2][5]);

T56[2][1]=S65[1][1]*T156[3][1] + S65[2][1]*T156[3][2] - WAISTLINK1*S65[1][3]*T156[3][4] - WAISTLINK1*S65[2][3]*T156[3][5] - LEGLINK1*T156[3][6];
T56[2][2]=T156[3][3] + (LEGLINK1*S65[1][1] + WAISTLINK2*S65[1][3])*T156[3][4] + (LEGLINK1*S65[2][1] + WAISTLINK2*S65[2][3])*T156[3][5];
T56[2][3]=S65[1][3]*T156[3][1] + S65[2][3]*T156[3][2] + WAISTLINK1*S65[1][1]*T156[3][4] + WAISTLINK1*S65[2][1]*T156[3][5] - WAISTLINK2*T156[3][6];
T56[2][4]=S65[1][1]*T156[3][4] + S65[2][1]*T156[3][5];
T56[2][5]=T156[3][6];
T56[2][6]=S65[1][3]*T156[3][4] + S65[2][3]*T156[3][5];

T56[3][1]=S65[1][1]*(Si56[3][1]*T156[1][1] + Si56[3][2]*T156[2][1]) + S65[2][1]*(Si56[3][1]*T156[1][2] + Si56[3][2]*T156[2][2]) - WAISTLINK1*S65[1][3]*(Si56[3][1]*T156[1][4] + Si56[3][2]*T156[2][4]) - WAISTLINK1*S65[2][3]*(Si56[3][1]*T156[1][5] + Si56[3][2]*T156[2][5]) - LEGLINK1*(Si56[3][1]*T156[1][6] + Si56[3][2]*T156[2][6]);
T56[3][2]=Si56[3][1]*T156[1][3] + Si56[3][2]*T156[2][3] + (LEGLINK1*S65[1][1] + WAISTLINK2*S65[1][3])*(Si56[3][1]*T156[1][4] + Si56[3][2]*T156[2][4]) + (LEGLINK1*S65[2][1] + WAISTLINK2*S65[2][3])*(Si56[3][1]*T156[1][5] + Si56[3][2]*T156[2][5]);
T56[3][3]=S65[1][3]*(Si56[3][1]*T156[1][1] + Si56[3][2]*T156[2][1]) + S65[2][3]*(Si56[3][1]*T156[1][2] + Si56[3][2]*T156[2][2]) + WAISTLINK1*S65[1][1]*(Si56[3][1]*T156[1][4] + Si56[3][2]*T156[2][4]) + WAISTLINK1*S65[2][1]*(Si56[3][1]*T156[1][5] + Si56[3][2]*T156[2][5]) - WAISTLINK2*(Si56[3][1]*T156[1][6] + Si56[3][2]*T156[2][6]);
T56[3][4]=S65[1][1]*(Si56[3][1]*T156[1][4] + Si56[3][2]*T156[2][4]) + S65[2][1]*(Si56[3][1]*T156[1][5] + Si56[3][2]*T156[2][5]);
T56[3][5]=Si56[3][1]*T156[1][6] + Si56[3][2]*T156[2][6];
T56[3][6]=S65[1][3]*(Si56[3][1]*T156[1][4] + Si56[3][2]*T156[2][4]) + S65[2][3]*(Si56[3][1]*T156[1][5] + Si56[3][2]*T156[2][5]);

T56[4][1]=S65[1][1]*(-(WAISTLINK1*Si56[3][1]*T156[1][1]) - WAISTLINK1*Si56[3][2]*T156[2][1] - LEGLINK1*T156[3][1] + Si56[1][1]*T156[4][1] + Si56[1][2]*T156[5][1]) + S65[2][1]*(-(WAISTLINK1*Si56[3][1]*T156[1][2]) - WAISTLINK1*Si56[3][2]*T156[2][2] - LEGLINK1*T156[3][2] + Si56[1][1]*T156[4][2] + Si56[1][2]*T156[5][2]) - WAISTLINK1*S65[1][3]*(-(WAISTLINK1*Si56[3][1]*T156[1][4]) - WAISTLINK1*Si56[3][2]*T156[2][4] - LEGLINK1*T156[3][4] + Si56[1][1]*T156[4][4] + Si56[1][2]*T156[5][4]) - WAISTLINK1*S65[2][3]*(-(WAISTLINK1*Si56[3][1]*T156[1][5]) - WAISTLINK1*Si56[3][2]*T156[2][5] - LEGLINK1*T156[3][5] + Si56[1][1]*T156[4][5] + Si56[1][2]*T156[5][5]) - LEGLINK1*(-(WAISTLINK1*Si56[3][1]*T156[1][6]) - WAISTLINK1*Si56[3][2]*T156[2][6] - LEGLINK1*T156[3][6] + Si56[1][1]*T156[4][6] + Si56[1][2]*T156[5][6]);
T56[4][2]=-(WAISTLINK1*Si56[3][1]*T156[1][3]) - WAISTLINK1*Si56[3][2]*T156[2][3] - LEGLINK1*T156[3][3] + Si56[1][1]*T156[4][3] + Si56[1][2]*T156[5][3] + (LEGLINK1*S65[1][1] + WAISTLINK2*S65[1][3])*(-(WAISTLINK1*Si56[3][1]*T156[1][4]) - WAISTLINK1*Si56[3][2]*T156[2][4] - LEGLINK1*T156[3][4] + Si56[1][1]*T156[4][4] + Si56[1][2]*T156[5][4]) + (LEGLINK1*S65[2][1] + WAISTLINK2*S65[2][3])*(-(WAISTLINK1*Si56[3][1]*T156[1][5]) - WAISTLINK1*Si56[3][2]*T156[2][5] - LEGLINK1*T156[3][5] + Si56[1][1]*T156[4][5] + Si56[1][2]*T156[5][5]);
T56[4][3]=S65[1][3]*(-(WAISTLINK1*Si56[3][1]*T156[1][1]) - WAISTLINK1*Si56[3][2]*T156[2][1] - LEGLINK1*T156[3][1] + Si56[1][1]*T156[4][1] + Si56[1][2]*T156[5][1]) + S65[2][3]*(-(WAISTLINK1*Si56[3][1]*T156[1][2]) - WAISTLINK1*Si56[3][2]*T156[2][2] - LEGLINK1*T156[3][2] + Si56[1][1]*T156[4][2] + Si56[1][2]*T156[5][2]) + WAISTLINK1*S65[1][1]*(-(WAISTLINK1*Si56[3][1]*T156[1][4]) - WAISTLINK1*Si56[3][2]*T156[2][4] - LEGLINK1*T156[3][4] + Si56[1][1]*T156[4][4] + Si56[1][2]*T156[5][4]) + WAISTLINK1*S65[2][1]*(-(WAISTLINK1*Si56[3][1]*T156[1][5]) - WAISTLINK1*Si56[3][2]*T156[2][5] - LEGLINK1*T156[3][5] + Si56[1][1]*T156[4][5] + Si56[1][2]*T156[5][5]) - WAISTLINK2*(-(WAISTLINK1*Si56[3][1]*T156[1][6]) - WAISTLINK1*Si56[3][2]*T156[2][6] - LEGLINK1*T156[3][6] + Si56[1][1]*T156[4][6] + Si56[1][2]*T156[5][6]);
T56[4][4]=S65[1][1]*(-(WAISTLINK1*Si56[3][1]*T156[1][4]) - WAISTLINK1*Si56[3][2]*T156[2][4] - LEGLINK1*T156[3][4] + Si56[1][1]*T156[4][4] + Si56[1][2]*T156[5][4]) + S65[2][1]*(-(WAISTLINK1*Si56[3][1]*T156[1][5]) - WAISTLINK1*Si56[3][2]*T156[2][5] - LEGLINK1*T156[3][5] + Si56[1][1]*T156[4][5] + Si56[1][2]*T156[5][5]);
T56[4][5]=-(WAISTLINK1*Si56[3][1]*T156[1][6]) - WAISTLINK1*Si56[3][2]*T156[2][6] - LEGLINK1*T156[3][6] + Si56[1][1]*T156[4][6] + Si56[1][2]*T156[5][6];
T56[4][6]=S65[1][3]*(-(WAISTLINK1*Si56[3][1]*T156[1][4]) - WAISTLINK1*Si56[3][2]*T156[2][4] - LEGLINK1*T156[3][4] + Si56[1][1]*T156[4][4] + Si56[1][2]*T156[5][4]) + S65[2][3]*(-(WAISTLINK1*Si56[3][1]*T156[1][5]) - WAISTLINK1*Si56[3][2]*T156[2][5] - LEGLINK1*T156[3][5] + Si56[1][1]*T156[4][5] + Si56[1][2]*T156[5][5]);

T56[5][1]=S65[1][1]*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][1] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][1] + T156[6][1]) + S65[2][1]*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][2] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][2] + T156[6][2]) - WAISTLINK1*S65[1][3]*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][4] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][4] + T156[6][4]) - WAISTLINK1*S65[2][3]*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][5] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][5] + T156[6][5]) - LEGLINK1*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][6] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][6] + T156[6][6]);
T56[5][2]=(LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][3] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][3] + T156[6][3] + (LEGLINK1*S65[1][1] + WAISTLINK2*S65[1][3])*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][4] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][4] + T156[6][4]) + (LEGLINK1*S65[2][1] + WAISTLINK2*S65[2][3])*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][5] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][5] + T156[6][5]);
T56[5][3]=S65[1][3]*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][1] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][1] + T156[6][1]) + S65[2][3]*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][2] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][2] + T156[6][2]) + WAISTLINK1*S65[1][1]*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][4] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][4] + T156[6][4]) + WAISTLINK1*S65[2][1]*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][5] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][5] + T156[6][5]) - WAISTLINK2*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][6] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][6] + T156[6][6]);
T56[5][4]=S65[1][1]*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][4] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][4] + T156[6][4]) + S65[2][1]*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][5] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][5] + T156[6][5]);
T56[5][5]=(LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][6] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][6] + T156[6][6];
T56[5][6]=S65[1][3]*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][4] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][4] + T156[6][4]) + S65[2][3]*((LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1])*T156[1][5] + (LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2])*T156[2][5] + T156[6][5]);

T56[6][1]=S65[1][1]*(WAISTLINK1*Si56[1][1]*T156[1][1] + WAISTLINK1*Si56[1][2]*T156[2][1] - WAISTLINK2*T156[3][1] + Si56[3][1]*T156[4][1] + Si56[3][2]*T156[5][1]) + S65[2][1]*(WAISTLINK1*Si56[1][1]*T156[1][2] + WAISTLINK1*Si56[1][2]*T156[2][2] - WAISTLINK2*T156[3][2] + Si56[3][1]*T156[4][2] + Si56[3][2]*T156[5][2]) - WAISTLINK1*S65[1][3]*(WAISTLINK1*Si56[1][1]*T156[1][4] + WAISTLINK1*Si56[1][2]*T156[2][4] - WAISTLINK2*T156[3][4] + Si56[3][1]*T156[4][4] + Si56[3][2]*T156[5][4]) - WAISTLINK1*S65[2][3]*(WAISTLINK1*Si56[1][1]*T156[1][5] + WAISTLINK1*Si56[1][2]*T156[2][5] - WAISTLINK2*T156[3][5] + Si56[3][1]*T156[4][5] + Si56[3][2]*T156[5][5]) - LEGLINK1*(WAISTLINK1*Si56[1][1]*T156[1][6] + WAISTLINK1*Si56[1][2]*T156[2][6] - WAISTLINK2*T156[3][6] + Si56[3][1]*T156[4][6] + Si56[3][2]*T156[5][6]);
T56[6][2]=WAISTLINK1*Si56[1][1]*T156[1][3] + WAISTLINK1*Si56[1][2]*T156[2][3] - WAISTLINK2*T156[3][3] + Si56[3][1]*T156[4][3] + Si56[3][2]*T156[5][3] + (LEGLINK1*S65[1][1] + WAISTLINK2*S65[1][3])*(WAISTLINK1*Si56[1][1]*T156[1][4] + WAISTLINK1*Si56[1][2]*T156[2][4] - WAISTLINK2*T156[3][4] + Si56[3][1]*T156[4][4] + Si56[3][2]*T156[5][4]) + (LEGLINK1*S65[2][1] + WAISTLINK2*S65[2][3])*(WAISTLINK1*Si56[1][1]*T156[1][5] + WAISTLINK1*Si56[1][2]*T156[2][5] - WAISTLINK2*T156[3][5] + Si56[3][1]*T156[4][5] + Si56[3][2]*T156[5][5]);
T56[6][3]=S65[1][3]*(WAISTLINK1*Si56[1][1]*T156[1][1] + WAISTLINK1*Si56[1][2]*T156[2][1] - WAISTLINK2*T156[3][1] + Si56[3][1]*T156[4][1] + Si56[3][2]*T156[5][1]) + S65[2][3]*(WAISTLINK1*Si56[1][1]*T156[1][2] + WAISTLINK1*Si56[1][2]*T156[2][2] - WAISTLINK2*T156[3][2] + Si56[3][1]*T156[4][2] + Si56[3][2]*T156[5][2]) + WAISTLINK1*S65[1][1]*(WAISTLINK1*Si56[1][1]*T156[1][4] + WAISTLINK1*Si56[1][2]*T156[2][4] - WAISTLINK2*T156[3][4] + Si56[3][1]*T156[4][4] + Si56[3][2]*T156[5][4]) + WAISTLINK1*S65[2][1]*(WAISTLINK1*Si56[1][1]*T156[1][5] + WAISTLINK1*Si56[1][2]*T156[2][5] - WAISTLINK2*T156[3][5] + Si56[3][1]*T156[4][5] + Si56[3][2]*T156[5][5]) - WAISTLINK2*(WAISTLINK1*Si56[1][1]*T156[1][6] + WAISTLINK1*Si56[1][2]*T156[2][6] - WAISTLINK2*T156[3][6] + Si56[3][1]*T156[4][6] + Si56[3][2]*T156[5][6]);
T56[6][4]=S65[1][1]*(WAISTLINK1*Si56[1][1]*T156[1][4] + WAISTLINK1*Si56[1][2]*T156[2][4] - WAISTLINK2*T156[3][4] + Si56[3][1]*T156[4][4] + Si56[3][2]*T156[5][4]) + S65[2][1]*(WAISTLINK1*Si56[1][1]*T156[1][5] + WAISTLINK1*Si56[1][2]*T156[2][5] - WAISTLINK2*T156[3][5] + Si56[3][1]*T156[4][5] + Si56[3][2]*T156[5][5]);
T56[6][5]=WAISTLINK1*Si56[1][1]*T156[1][6] + WAISTLINK1*Si56[1][2]*T156[2][6] - WAISTLINK2*T156[3][6] + Si56[3][1]*T156[4][6] + Si56[3][2]*T156[5][6];
T56[6][6]=S65[1][3]*(WAISTLINK1*Si56[1][1]*T156[1][4] + WAISTLINK1*Si56[1][2]*T156[2][4] - WAISTLINK2*T156[3][4] + Si56[3][1]*T156[4][4] + Si56[3][2]*T156[5][4]) + S65[2][3]*(WAISTLINK1*Si56[1][1]*T156[1][5] + WAISTLINK1*Si56[1][2]*T156[2][5] - WAISTLINK2*T156[3][5] + Si56[3][1]*T156[4][5] + Si56[3][2]*T156[5][5]);



}


void
hoap3_InvDynArtfunc29(void)
      {
JA5[1][1]=T517[1][1] + T56[1][1];
JA5[1][2]=links[13].mcm[3] + T517[1][2] + T56[1][2];
JA5[1][3]=-links[13].mcm[2] + T517[1][3] + T56[1][3];
JA5[1][4]=links[13].m + T517[1][4] + T56[1][4];
JA5[1][5]=T517[1][5] + T56[1][5];
JA5[1][6]=T517[1][6] + T56[1][6];

JA5[2][1]=-links[13].mcm[3] + T517[2][1] + T56[2][1];
JA5[2][2]=T517[2][2] + T56[2][2];
JA5[2][3]=links[13].mcm[1] + T517[2][3] + T56[2][3];
JA5[2][4]=T517[2][4] + T56[2][4];
JA5[2][5]=links[13].m + T517[2][5] + T56[2][5];
JA5[2][6]=T517[2][6] + T56[2][6];

JA5[3][1]=links[13].mcm[2] + T517[3][1] + T56[3][1];
JA5[3][2]=-links[13].mcm[1] + T517[3][2] + T56[3][2];
JA5[3][3]=T517[3][3] + T56[3][3];
JA5[3][4]=T517[3][4] + T56[3][4];
JA5[3][5]=T517[3][5] + T56[3][5];
JA5[3][6]=links[13].m + T517[3][6] + T56[3][6];

JA5[4][1]=links[13].inertia[1][1] + T517[4][1] + T56[4][1];
JA5[4][2]=links[13].inertia[1][2] + T517[4][2] + T56[4][2];
JA5[4][3]=links[13].inertia[1][3] + T517[4][3] + T56[4][3];
JA5[4][4]=T517[4][4] + T56[4][4];
JA5[4][5]=-links[13].mcm[3] + T517[4][5] + T56[4][5];
JA5[4][6]=links[13].mcm[2] + T517[4][6] + T56[4][6];

JA5[5][1]=links[13].inertia[1][2] + T517[5][1] + T56[5][1];
JA5[5][2]=links[13].inertia[2][2] + T517[5][2] + T56[5][2];
JA5[5][3]=links[13].inertia[2][3] + T517[5][3] + T56[5][3];
JA5[5][4]=links[13].mcm[3] + T517[5][4] + T56[5][4];
JA5[5][5]=T517[5][5] + T56[5][5];
JA5[5][6]=-links[13].mcm[1] + T517[5][6] + T56[5][6];

JA5[6][1]=links[13].inertia[1][3] + T517[6][1] + T56[6][1];
JA5[6][2]=links[13].inertia[2][3] + T517[6][2] + T56[6][2];
JA5[6][3]=links[13].inertia[3][3] + T517[6][3] + T56[6][3];
JA5[6][4]=-links[13].mcm[2] + T517[6][4] + T56[6][4];
JA5[6][5]=links[13].mcm[1] + T517[6][5] + T56[6][5];
JA5[6][6]=T517[6][6] + T56[6][6];


h5[1]=JA5[1][3];
h5[2]=JA5[2][3];
h5[3]=JA5[3][3];
h5[4]=JA5[4][3];
h5[5]=JA5[5][3];
h5[6]=JA5[6][3];

T105[1][1]=JA5[1][1];
T105[1][2]=JA5[1][2];
T105[1][3]=JA5[1][3];
T105[1][4]=JA5[1][4];
T105[1][5]=JA5[1][5];
T105[1][6]=JA5[1][6];

T105[2][1]=JA5[2][1];
T105[2][2]=JA5[2][2];
T105[2][3]=JA5[2][3];
T105[2][4]=JA5[2][4];
T105[2][5]=JA5[2][5];
T105[2][6]=JA5[2][6];

T105[3][1]=JA5[3][1];
T105[3][2]=JA5[3][2];
T105[3][3]=JA5[3][3];
T105[3][4]=JA5[3][4];
T105[3][5]=JA5[3][5];
T105[3][6]=JA5[3][6];

T105[4][1]=JA5[4][1];
T105[4][2]=JA5[4][2];
T105[4][3]=JA5[4][3];
T105[4][4]=JA5[4][4];
T105[4][5]=JA5[4][5];
T105[4][6]=JA5[4][6];

T105[5][1]=JA5[5][1];
T105[5][2]=JA5[5][2];
T105[5][3]=JA5[5][3];
T105[5][4]=JA5[5][4];
T105[5][5]=JA5[5][5];
T105[5][6]=JA5[5][6];

T105[6][1]=JA5[6][1];
T105[6][2]=JA5[6][2];
T105[6][3]=JA5[6][3];
T105[6][4]=JA5[6][4];
T105[6][5]=JA5[6][5];
T105[6][6]=JA5[6][6];


T05[1][1]=S50[1][1]*(Si05[1][1]*T105[1][1] + Si05[1][2]*T105[2][1]) + S50[2][1]*(Si05[1][1]*T105[1][2] + Si05[1][2]*T105[2][2]);
T05[1][2]=-(Si05[1][1]*T105[1][3]) - Si05[1][2]*T105[2][3] - BODYLINK2*S50[1][3]*(Si05[1][1]*T105[1][4] + Si05[1][2]*T105[2][4]) - BODYLINK2*S50[2][3]*(Si05[1][1]*T105[1][5] + Si05[1][2]*T105[2][5]);
T05[1][3]=S50[1][3]*(Si05[1][1]*T105[1][1] + Si05[1][2]*T105[2][1]) + S50[2][3]*(Si05[1][1]*T105[1][2] + Si05[1][2]*T105[2][2]) - BODYLINK2*(Si05[1][1]*T105[1][6] + Si05[1][2]*T105[2][6]);
T05[1][4]=S50[1][1]*(Si05[1][1]*T105[1][4] + Si05[1][2]*T105[2][4]) + S50[2][1]*(Si05[1][1]*T105[1][5] + Si05[1][2]*T105[2][5]);
T05[1][5]=-(Si05[1][1]*T105[1][6]) - Si05[1][2]*T105[2][6];
T05[1][6]=S50[1][3]*(Si05[1][1]*T105[1][4] + Si05[1][2]*T105[2][4]) + S50[2][3]*(Si05[1][1]*T105[1][5] + Si05[1][2]*T105[2][5]);

T05[2][1]=-(S50[1][1]*T105[3][1]) - S50[2][1]*T105[3][2];
T05[2][2]=T105[3][3] + BODYLINK2*S50[1][3]*T105[3][4] + BODYLINK2*S50[2][3]*T105[3][5];
T05[2][3]=-(S50[1][3]*T105[3][1]) - S50[2][3]*T105[3][2] + BODYLINK2*T105[3][6];
T05[2][4]=-(S50[1][1]*T105[3][4]) - S50[2][1]*T105[3][5];
T05[2][5]=T105[3][6];
T05[2][6]=-(S50[1][3]*T105[3][4]) - S50[2][3]*T105[3][5];

T05[3][1]=S50[1][1]*(Si05[3][1]*T105[1][1] + Si05[3][2]*T105[2][1]) + S50[2][1]*(Si05[3][1]*T105[1][2] + Si05[3][2]*T105[2][2]);
T05[3][2]=-(Si05[3][1]*T105[1][3]) - Si05[3][2]*T105[2][3] - BODYLINK2*S50[1][3]*(Si05[3][1]*T105[1][4] + Si05[3][2]*T105[2][4]) - BODYLINK2*S50[2][3]*(Si05[3][1]*T105[1][5] + Si05[3][2]*T105[2][5]);
T05[3][3]=S50[1][3]*(Si05[3][1]*T105[1][1] + Si05[3][2]*T105[2][1]) + S50[2][3]*(Si05[3][1]*T105[1][2] + Si05[3][2]*T105[2][2]) - BODYLINK2*(Si05[3][1]*T105[1][6] + Si05[3][2]*T105[2][6]);
T05[3][4]=S50[1][1]*(Si05[3][1]*T105[1][4] + Si05[3][2]*T105[2][4]) + S50[2][1]*(Si05[3][1]*T105[1][5] + Si05[3][2]*T105[2][5]);
T05[3][5]=-(Si05[3][1]*T105[1][6]) - Si05[3][2]*T105[2][6];
T05[3][6]=S50[1][3]*(Si05[3][1]*T105[1][4] + Si05[3][2]*T105[2][4]) + S50[2][3]*(Si05[3][1]*T105[1][5] + Si05[3][2]*T105[2][5]);

T05[4][1]=S50[1][1]*(Si05[1][1]*T105[4][1] + Si05[1][2]*T105[5][1]) + S50[2][1]*(Si05[1][1]*T105[4][2] + Si05[1][2]*T105[5][2]);
T05[4][2]=-(Si05[1][1]*T105[4][3]) - Si05[1][2]*T105[5][3] - BODYLINK2*S50[1][3]*(Si05[1][1]*T105[4][4] + Si05[1][2]*T105[5][4]) - BODYLINK2*S50[2][3]*(Si05[1][1]*T105[4][5] + Si05[1][2]*T105[5][5]);
T05[4][3]=S50[1][3]*(Si05[1][1]*T105[4][1] + Si05[1][2]*T105[5][1]) + S50[2][3]*(Si05[1][1]*T105[4][2] + Si05[1][2]*T105[5][2]) - BODYLINK2*(Si05[1][1]*T105[4][6] + Si05[1][2]*T105[5][6]);
T05[4][4]=S50[1][1]*(Si05[1][1]*T105[4][4] + Si05[1][2]*T105[5][4]) + S50[2][1]*(Si05[1][1]*T105[4][5] + Si05[1][2]*T105[5][5]);
T05[4][5]=-(Si05[1][1]*T105[4][6]) - Si05[1][2]*T105[5][6];
T05[4][6]=S50[1][3]*(Si05[1][1]*T105[4][4] + Si05[1][2]*T105[5][4]) + S50[2][3]*(Si05[1][1]*T105[4][5] + Si05[1][2]*T105[5][5]);

T05[5][1]=S50[1][1]*(-(BODYLINK2*Si05[3][1]*T105[1][1]) - BODYLINK2*Si05[3][2]*T105[2][1] - T105[6][1]) + S50[2][1]*(-(BODYLINK2*Si05[3][1]*T105[1][2]) - BODYLINK2*Si05[3][2]*T105[2][2] - T105[6][2]);
T05[5][2]=BODYLINK2*Si05[3][1]*T105[1][3] + BODYLINK2*Si05[3][2]*T105[2][3] + T105[6][3] - BODYLINK2*S50[1][3]*(-(BODYLINK2*Si05[3][1]*T105[1][4]) - BODYLINK2*Si05[3][2]*T105[2][4] - T105[6][4]) - BODYLINK2*S50[2][3]*(-(BODYLINK2*Si05[3][1]*T105[1][5]) - BODYLINK2*Si05[3][2]*T105[2][5] - T105[6][5]);
T05[5][3]=S50[1][3]*(-(BODYLINK2*Si05[3][1]*T105[1][1]) - BODYLINK2*Si05[3][2]*T105[2][1] - T105[6][1]) + S50[2][3]*(-(BODYLINK2*Si05[3][1]*T105[1][2]) - BODYLINK2*Si05[3][2]*T105[2][2] - T105[6][2]) - BODYLINK2*(-(BODYLINK2*Si05[3][1]*T105[1][6]) - BODYLINK2*Si05[3][2]*T105[2][6] - T105[6][6]);
T05[5][4]=S50[1][1]*(-(BODYLINK2*Si05[3][1]*T105[1][4]) - BODYLINK2*Si05[3][2]*T105[2][4] - T105[6][4]) + S50[2][1]*(-(BODYLINK2*Si05[3][1]*T105[1][5]) - BODYLINK2*Si05[3][2]*T105[2][5] - T105[6][5]);
T05[5][5]=BODYLINK2*Si05[3][1]*T105[1][6] + BODYLINK2*Si05[3][2]*T105[2][6] + T105[6][6];
T05[5][6]=S50[1][3]*(-(BODYLINK2*Si05[3][1]*T105[1][4]) - BODYLINK2*Si05[3][2]*T105[2][4] - T105[6][4]) + S50[2][3]*(-(BODYLINK2*Si05[3][1]*T105[1][5]) - BODYLINK2*Si05[3][2]*T105[2][5] - T105[6][5]);

T05[6][1]=S50[1][1]*(-(BODYLINK2*T105[3][1]) + Si05[3][1]*T105[4][1] + Si05[3][2]*T105[5][1]) + S50[2][1]*(-(BODYLINK2*T105[3][2]) + Si05[3][1]*T105[4][2] + Si05[3][2]*T105[5][2]);
T05[6][2]=BODYLINK2*T105[3][3] - Si05[3][1]*T105[4][3] - Si05[3][2]*T105[5][3] - BODYLINK2*S50[1][3]*(-(BODYLINK2*T105[3][4]) + Si05[3][1]*T105[4][4] + Si05[3][2]*T105[5][4]) - BODYLINK2*S50[2][3]*(-(BODYLINK2*T105[3][5]) + Si05[3][1]*T105[4][5] + Si05[3][2]*T105[5][5]);
T05[6][3]=S50[1][3]*(-(BODYLINK2*T105[3][1]) + Si05[3][1]*T105[4][1] + Si05[3][2]*T105[5][1]) + S50[2][3]*(-(BODYLINK2*T105[3][2]) + Si05[3][1]*T105[4][2] + Si05[3][2]*T105[5][2]) - BODYLINK2*(-(BODYLINK2*T105[3][6]) + Si05[3][1]*T105[4][6] + Si05[3][2]*T105[5][6]);
T05[6][4]=S50[1][1]*(-(BODYLINK2*T105[3][4]) + Si05[3][1]*T105[4][4] + Si05[3][2]*T105[5][4]) + S50[2][1]*(-(BODYLINK2*T105[3][5]) + Si05[3][1]*T105[4][5] + Si05[3][2]*T105[5][5]);
T05[6][5]=BODYLINK2*T105[3][6] - Si05[3][1]*T105[4][6] - Si05[3][2]*T105[5][6];
T05[6][6]=S50[1][3]*(-(BODYLINK2*T105[3][4]) + Si05[3][1]*T105[4][4] + Si05[3][2]*T105[5][4]) + S50[2][3]*(-(BODYLINK2*T105[3][5]) + Si05[3][1]*T105[4][5] + Si05[3][2]*T105[5][5]);



}


void
hoap3_InvDynArtfunc30(void)
      {




}


void
hoap3_InvDynArtfunc31(void)
      {
JA3[1][2]=0. + links[15].mcm[3];
JA3[1][3]=0. - links[15].mcm[2];
JA3[1][4]=0. + links[15].m;

JA3[2][1]=0. - links[15].mcm[3];
JA3[2][3]=0. + links[15].mcm[1];
JA3[2][5]=0. + links[15].m;

JA3[3][1]=0. + links[15].mcm[2];
JA3[3][2]=0. - links[15].mcm[1];
JA3[3][6]=0. + links[15].m;

JA3[4][1]=0. + links[15].inertia[1][1];
JA3[4][2]=0. + links[15].inertia[1][2];
JA3[4][3]=0. + links[15].inertia[1][3];
JA3[4][5]=0. - links[15].mcm[3];
JA3[4][6]=0. + links[15].mcm[2];

JA3[5][1]=0. + links[15].inertia[1][2];
JA3[5][2]=0. + links[15].inertia[2][2];
JA3[5][3]=0. + links[15].inertia[2][3];
JA3[5][4]=0. + links[15].mcm[3];
JA3[5][6]=0. - links[15].mcm[1];

JA3[6][1]=0. + links[15].inertia[1][3];
JA3[6][2]=0. + links[15].inertia[2][3];
JA3[6][3]=0. + links[15].inertia[3][3];
JA3[6][4]=0. - links[15].mcm[2];
JA3[6][5]=0. + links[15].mcm[1];


h3[1]=0. + JA3[1][3];
h3[2]=0. + JA3[2][3];
h3[4]=0. + JA3[4][3];
h3[5]=0. + JA3[5][3];
h3[6]=0. + JA3[6][3];

T123[1][2]=JA3[1][2];
T123[1][3]=JA3[1][3];
T123[1][4]=JA3[1][4];

T123[2][1]=JA3[2][1];
T123[2][3]=JA3[2][3];
T123[2][5]=JA3[2][5];

T123[3][1]=JA3[3][1];
T123[3][2]=JA3[3][2];
T123[3][6]=JA3[3][6];

T123[4][1]=JA3[4][1];
T123[4][2]=JA3[4][2];
T123[4][3]=JA3[4][3];
T123[4][5]=JA3[4][5];
T123[4][6]=JA3[4][6];

T123[5][1]=JA3[5][1];
T123[5][2]=JA3[5][2];
T123[5][3]=JA3[5][3];
T123[5][4]=JA3[5][4];
T123[5][6]=JA3[5][6];

T123[6][1]=JA3[6][1];
T123[6][2]=JA3[6][2];
T123[6][3]=JA3[6][3];
T123[6][4]=JA3[6][4];
T123[6][5]=JA3[6][5];


T23[1][1]=S32[2][1]*Si23[1][1]*T123[1][2] + S32[1][1]*Si23[1][2]*T123[2][1];
T23[1][2]=-(Si23[1][1]*T123[1][3]) - Si23[1][2]*T123[2][3];
T23[1][3]=S32[2][3]*Si23[1][1]*T123[1][2] + S32[1][3]*Si23[1][2]*T123[2][1];
T23[1][4]=S32[1][1]*Si23[1][1]*T123[1][4] + S32[2][1]*Si23[1][2]*T123[2][5];
T23[1][6]=S32[1][3]*Si23[1][1]*T123[1][4] + S32[2][3]*Si23[1][2]*T123[2][5];

T23[2][1]=-(S32[1][1]*T123[3][1]) - S32[2][1]*T123[3][2];
T23[2][3]=-(S32[1][3]*T123[3][1]) - S32[2][3]*T123[3][2];
T23[2][5]=T123[3][6];

T23[3][1]=S32[2][1]*Si23[3][1]*T123[1][2] + S32[1][1]*Si23[3][2]*T123[2][1];
T23[3][2]=-(Si23[3][1]*T123[1][3]) - Si23[3][2]*T123[2][3];
T23[3][3]=S32[2][3]*Si23[3][1]*T123[1][2] + S32[1][3]*Si23[3][2]*T123[2][1];
T23[3][4]=S32[1][1]*Si23[3][1]*T123[1][4] + S32[2][1]*Si23[3][2]*T123[2][5];
T23[3][6]=S32[1][3]*Si23[3][1]*T123[1][4] + S32[2][3]*Si23[3][2]*T123[2][5];

T23[4][1]=S32[1][1]*(Si23[1][1]*T123[4][1] + Si23[1][2]*T123[5][1]) + S32[2][1]*(Si23[1][1]*T123[4][2] + Si23[1][2]*T123[5][2]);
T23[4][2]=-(Si23[1][1]*T123[4][3]) - Si23[1][2]*T123[5][3];
T23[4][3]=S32[1][3]*(Si23[1][1]*T123[4][1] + Si23[1][2]*T123[5][1]) + S32[2][3]*(Si23[1][1]*T123[4][2] + Si23[1][2]*T123[5][2]);
T23[4][4]=S32[2][1]*Si23[1][1]*T123[4][5] + S32[1][1]*Si23[1][2]*T123[5][4];
T23[4][5]=-(Si23[1][1]*T123[4][6]) - Si23[1][2]*T123[5][6];
T23[4][6]=S32[2][3]*Si23[1][1]*T123[4][5] + S32[1][3]*Si23[1][2]*T123[5][4];

T23[5][1]=-(S32[1][1]*T123[6][1]) - S32[2][1]*T123[6][2];
T23[5][2]=T123[6][3];
T23[5][3]=-(S32[1][3]*T123[6][1]) - S32[2][3]*T123[6][2];
T23[5][4]=-(S32[1][1]*T123[6][4]) - S32[2][1]*T123[6][5];
T23[5][6]=-(S32[1][3]*T123[6][4]) - S32[2][3]*T123[6][5];

T23[6][1]=S32[1][1]*(Si23[3][1]*T123[4][1] + Si23[3][2]*T123[5][1]) + S32[2][1]*(Si23[3][1]*T123[4][2] + Si23[3][2]*T123[5][2]);
T23[6][2]=-(Si23[3][1]*T123[4][3]) - Si23[3][2]*T123[5][3];
T23[6][3]=S32[1][3]*(Si23[3][1]*T123[4][1] + Si23[3][2]*T123[5][1]) + S32[2][3]*(Si23[3][1]*T123[4][2] + Si23[3][2]*T123[5][2]);
T23[6][4]=S32[2][1]*Si23[3][1]*T123[4][5] + S32[1][1]*Si23[3][2]*T123[5][4];
T23[6][5]=-(Si23[3][1]*T123[4][6]) - Si23[3][2]*T123[5][6];
T23[6][6]=S32[2][3]*Si23[3][1]*T123[4][5] + S32[1][3]*Si23[3][2]*T123[5][4];



}


void
hoap3_InvDynArtfunc32(void)
      {
JA2[1][1]=T23[1][1];
JA2[1][2]=links[14].mcm[3] + T23[1][2];
JA2[1][3]=-links[14].mcm[2] + T23[1][3];
JA2[1][4]=links[14].m + T23[1][4];
JA2[1][6]=T23[1][6];

JA2[2][1]=-links[14].mcm[3] + T23[2][1];
JA2[2][3]=links[14].mcm[1] + T23[2][3];
JA2[2][5]=links[14].m + T23[2][5];

JA2[3][1]=links[14].mcm[2] + T23[3][1];
JA2[3][2]=-links[14].mcm[1] + T23[3][2];
JA2[3][3]=T23[3][3];
JA2[3][4]=T23[3][4];
JA2[3][6]=links[14].m + T23[3][6];

JA2[4][1]=links[14].inertia[1][1] + T23[4][1];
JA2[4][2]=links[14].inertia[1][2] + T23[4][2];
JA2[4][3]=links[14].inertia[1][3] + T23[4][3];
JA2[4][4]=T23[4][4];
JA2[4][5]=-links[14].mcm[3] + T23[4][5];
JA2[4][6]=links[14].mcm[2] + T23[4][6];

JA2[5][1]=links[14].inertia[1][2] + T23[5][1];
JA2[5][2]=links[14].inertia[2][2] + T23[5][2];
JA2[5][3]=links[14].inertia[2][3] + T23[5][3];
JA2[5][4]=links[14].mcm[3] + T23[5][4];
JA2[5][6]=-links[14].mcm[1] + T23[5][6];

JA2[6][1]=links[14].inertia[1][3] + T23[6][1];
JA2[6][2]=links[14].inertia[2][3] + T23[6][2];
JA2[6][3]=links[14].inertia[3][3] + T23[6][3];
JA2[6][4]=-links[14].mcm[2] + T23[6][4];
JA2[6][5]=links[14].mcm[1] + T23[6][5];
JA2[6][6]=T23[6][6];


h2[1]=0. + JA2[1][3];
h2[2]=0. + JA2[2][3];
h2[3]=0. + JA2[3][3];
h2[4]=JA2[4][3];
h2[5]=0. + JA2[5][3];
h2[6]=JA2[6][3];

T112[1][1]=JA2[1][1];
T112[1][2]=JA2[1][2];
T112[1][3]=JA2[1][3];
T112[1][4]=JA2[1][4];
T112[1][6]=JA2[1][6];

T112[2][1]=JA2[2][1];
T112[2][3]=JA2[2][3];
T112[2][5]=JA2[2][5];

T112[3][1]=JA2[3][1];
T112[3][2]=JA2[3][2];
T112[3][3]=JA2[3][3];
T112[3][4]=JA2[3][4];
T112[3][6]=JA2[3][6];

T112[4][1]=JA2[4][1];
T112[4][2]=JA2[4][2];
T112[4][3]=JA2[4][3];
T112[4][4]=JA2[4][4];
T112[4][5]=JA2[4][5];
T112[4][6]=JA2[4][6];

T112[5][1]=JA2[5][1];
T112[5][2]=JA2[5][2];
T112[5][3]=JA2[5][3];
T112[5][4]=JA2[5][4];
T112[5][6]=JA2[5][6];

T112[6][1]=JA2[6][1];
T112[6][2]=JA2[6][2];
T112[6][3]=JA2[6][3];
T112[6][4]=JA2[6][4];
T112[6][5]=JA2[6][5];
T112[6][6]=JA2[6][6];


T12[1][1]=S21[2][1]*Si12[1][1]*T112[1][2] - ARMLINK1*S21[1][3]*Si12[1][1]*T112[1][4] + S21[1][1]*(Si12[1][1]*T112[1][1] + Si12[1][2]*T112[2][1]) - ARMLINK1*S21[2][3]*Si12[1][2]*T112[2][5];
T12[1][2]=Si12[1][1]*T112[1][3] + Si12[1][2]*T112[2][3];
T12[1][3]=S21[2][3]*Si12[1][1]*T112[1][2] + ARMLINK1*S21[1][1]*Si12[1][1]*T112[1][4] + S21[1][3]*(Si12[1][1]*T112[1][1] + Si12[1][2]*T112[2][1]) + ARMLINK1*S21[2][1]*Si12[1][2]*T112[2][5];
T12[1][4]=S21[1][1]*Si12[1][1]*T112[1][4] + S21[2][1]*Si12[1][2]*T112[2][5];
T12[1][5]=Si12[1][1]*T112[1][6];
T12[1][6]=S21[1][3]*Si12[1][1]*T112[1][4] + S21[2][3]*Si12[1][2]*T112[2][5];

T12[2][1]=S21[1][1]*T112[3][1] + S21[2][1]*T112[3][2] - ARMLINK1*S21[1][3]*T112[3][4];
T12[2][2]=T112[3][3];
T12[2][3]=S21[1][3]*T112[3][1] + S21[2][3]*T112[3][2] + ARMLINK1*S21[1][1]*T112[3][4];
T12[2][4]=S21[1][1]*T112[3][4];
T12[2][5]=T112[3][6];
T12[2][6]=S21[1][3]*T112[3][4];

T12[3][1]=S21[2][1]*Si12[3][1]*T112[1][2] - ARMLINK1*S21[1][3]*Si12[3][1]*T112[1][4] + S21[1][1]*(Si12[3][1]*T112[1][1] + Si12[3][2]*T112[2][1]) - ARMLINK1*S21[2][3]*Si12[3][2]*T112[2][5];
T12[3][2]=Si12[3][1]*T112[1][3] + Si12[3][2]*T112[2][3];
T12[3][3]=S21[2][3]*Si12[3][1]*T112[1][2] + ARMLINK1*S21[1][1]*Si12[3][1]*T112[1][4] + S21[1][3]*(Si12[3][1]*T112[1][1] + Si12[3][2]*T112[2][1]) + ARMLINK1*S21[2][1]*Si12[3][2]*T112[2][5];
T12[3][4]=S21[1][1]*Si12[3][1]*T112[1][4] + S21[2][1]*Si12[3][2]*T112[2][5];
T12[3][5]=Si12[3][1]*T112[1][6];
T12[3][6]=S21[1][3]*Si12[3][1]*T112[1][4] + S21[2][3]*Si12[3][2]*T112[2][5];

T12[4][1]=-(ARMLINK1*S21[2][3]*(-(ARMLINK1*Si12[3][2]*T112[2][5]) + Si12[1][1]*T112[4][5])) + S21[1][1]*(-(ARMLINK1*Si12[3][1]*T112[1][1]) - ARMLINK1*Si12[3][2]*T112[2][1] + Si12[1][1]*T112[4][1] + Si12[1][2]*T112[5][1]) + S21[2][1]*(-(ARMLINK1*Si12[3][1]*T112[1][2]) + Si12[1][1]*T112[4][2] + Si12[1][2]*T112[5][2]) - ARMLINK1*S21[1][3]*(-(ARMLINK1*Si12[3][1]*T112[1][4]) + Si12[1][1]*T112[4][4] + Si12[1][2]*T112[5][4]);
T12[4][2]=-(ARMLINK1*Si12[3][1]*T112[1][3]) - ARMLINK1*Si12[3][2]*T112[2][3] + Si12[1][1]*T112[4][3] + Si12[1][2]*T112[5][3];
T12[4][3]=ARMLINK1*S21[2][1]*(-(ARMLINK1*Si12[3][2]*T112[2][5]) + Si12[1][1]*T112[4][5]) + S21[1][3]*(-(ARMLINK1*Si12[3][1]*T112[1][1]) - ARMLINK1*Si12[3][2]*T112[2][1] + Si12[1][1]*T112[4][1] + Si12[1][2]*T112[5][1]) + S21[2][3]*(-(ARMLINK1*Si12[3][1]*T112[1][2]) + Si12[1][1]*T112[4][2] + Si12[1][2]*T112[5][2]) + ARMLINK1*S21[1][1]*(-(ARMLINK1*Si12[3][1]*T112[1][4]) + Si12[1][1]*T112[4][4] + Si12[1][2]*T112[5][4]);
T12[4][4]=S21[2][1]*(-(ARMLINK1*Si12[3][2]*T112[2][5]) + Si12[1][1]*T112[4][5]) + S21[1][1]*(-(ARMLINK1*Si12[3][1]*T112[1][4]) + Si12[1][1]*T112[4][4] + Si12[1][2]*T112[5][4]);
T12[4][5]=-(ARMLINK1*Si12[3][1]*T112[1][6]) + Si12[1][1]*T112[4][6] + Si12[1][2]*T112[5][6];
T12[4][6]=S21[2][3]*(-(ARMLINK1*Si12[3][2]*T112[2][5]) + Si12[1][1]*T112[4][5]) + S21[1][3]*(-(ARMLINK1*Si12[3][1]*T112[1][4]) + Si12[1][1]*T112[4][4] + Si12[1][2]*T112[5][4]);

T12[5][1]=S21[1][1]*T112[6][1] + S21[2][1]*T112[6][2] - ARMLINK1*S21[1][3]*T112[6][4] - ARMLINK1*S21[2][3]*T112[6][5];
T12[5][2]=T112[6][3];
T12[5][3]=S21[1][3]*T112[6][1] + S21[2][3]*T112[6][2] + ARMLINK1*S21[1][1]*T112[6][4] + ARMLINK1*S21[2][1]*T112[6][5];
T12[5][4]=S21[1][1]*T112[6][4] + S21[2][1]*T112[6][5];
T12[5][5]=T112[6][6];
T12[5][6]=S21[1][3]*T112[6][4] + S21[2][3]*T112[6][5];

T12[6][1]=-(ARMLINK1*S21[2][3]*(ARMLINK1*Si12[1][2]*T112[2][5] + Si12[3][1]*T112[4][5])) + S21[1][1]*(ARMLINK1*Si12[1][1]*T112[1][1] + ARMLINK1*Si12[1][2]*T112[2][1] + Si12[3][1]*T112[4][1] + Si12[3][2]*T112[5][1]) + S21[2][1]*(ARMLINK1*Si12[1][1]*T112[1][2] + Si12[3][1]*T112[4][2] + Si12[3][2]*T112[5][2]) - ARMLINK1*S21[1][3]*(ARMLINK1*Si12[1][1]*T112[1][4] + Si12[3][1]*T112[4][4] + Si12[3][2]*T112[5][4]);
T12[6][2]=ARMLINK1*Si12[1][1]*T112[1][3] + ARMLINK1*Si12[1][2]*T112[2][3] + Si12[3][1]*T112[4][3] + Si12[3][2]*T112[5][3];
T12[6][3]=ARMLINK1*S21[2][1]*(ARMLINK1*Si12[1][2]*T112[2][5] + Si12[3][1]*T112[4][5]) + S21[1][3]*(ARMLINK1*Si12[1][1]*T112[1][1] + ARMLINK1*Si12[1][2]*T112[2][1] + Si12[3][1]*T112[4][1] + Si12[3][2]*T112[5][1]) + S21[2][3]*(ARMLINK1*Si12[1][1]*T112[1][2] + Si12[3][1]*T112[4][2] + Si12[3][2]*T112[5][2]) + ARMLINK1*S21[1][1]*(ARMLINK1*Si12[1][1]*T112[1][4] + Si12[3][1]*T112[4][4] + Si12[3][2]*T112[5][4]);
T12[6][4]=S21[2][1]*(ARMLINK1*Si12[1][2]*T112[2][5] + Si12[3][1]*T112[4][5]) + S21[1][1]*(ARMLINK1*Si12[1][1]*T112[1][4] + Si12[3][1]*T112[4][4] + Si12[3][2]*T112[5][4]);
T12[6][5]=ARMLINK1*Si12[1][1]*T112[1][6] + Si12[3][1]*T112[4][6] + Si12[3][2]*T112[5][6];
T12[6][6]=S21[2][3]*(ARMLINK1*Si12[1][2]*T112[2][5] + Si12[3][1]*T112[4][5]) + S21[1][3]*(ARMLINK1*Si12[1][1]*T112[1][4] + Si12[3][1]*T112[4][4] + Si12[3][2]*T112[5][4]);



}


void
hoap3_InvDynArtfunc33(void)
      {
JA1[1][1]=T12[1][1];
JA1[1][2]=T12[1][2];
JA1[1][3]=T12[1][3];
JA1[1][4]=T12[1][4];
JA1[1][5]=T12[1][5];
JA1[1][6]=T12[1][6];

JA1[2][1]=T12[2][1];
JA1[2][2]=T12[2][2];
JA1[2][3]=T12[2][3];
JA1[2][4]=T12[2][4];
JA1[2][5]=T12[2][5];
JA1[2][6]=T12[2][6];

JA1[3][1]=T12[3][1];
JA1[3][2]=T12[3][2];
JA1[3][3]=T12[3][3];
JA1[3][4]=T12[3][4];
JA1[3][5]=T12[3][5];
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
JA1[5][5]=T12[5][5];
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
T101[1][5]=JA1[1][5];
T101[1][6]=JA1[1][6];

T101[2][1]=JA1[2][1];
T101[2][2]=JA1[2][2];
T101[2][3]=JA1[2][3];
T101[2][4]=JA1[2][4];
T101[2][5]=JA1[2][5];
T101[2][6]=JA1[2][6];

T101[3][1]=JA1[3][1];
T101[3][2]=JA1[3][2];
T101[3][3]=JA1[3][3];
T101[3][4]=JA1[3][4];
T101[3][5]=JA1[3][5];
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
T101[5][5]=JA1[5][5];
T101[5][6]=JA1[5][6];

T101[6][1]=JA1[6][1];
T101[6][2]=JA1[6][2];
T101[6][3]=JA1[6][3];
T101[6][4]=JA1[6][4];
T101[6][5]=JA1[6][5];
T101[6][6]=JA1[6][6];


T01[1][1]=T101[1][1] - BODYLINK1*T101[1][5];
T01[1][2]=T101[1][2] + BODYLINK1*T101[1][4];
T01[1][3]=T101[1][3];
T01[1][4]=T101[1][4];
T01[1][5]=T101[1][5];
T01[1][6]=T101[1][6];

T01[2][1]=T101[2][1] - BODYLINK1*T101[2][5];
T01[2][2]=T101[2][2] + BODYLINK1*T101[2][4];
T01[2][3]=T101[2][3];
T01[2][4]=T101[2][4];
T01[2][5]=T101[2][5];
T01[2][6]=T101[2][6];

T01[3][1]=T101[3][1] - BODYLINK1*T101[3][5];
T01[3][2]=T101[3][2] + BODYLINK1*T101[3][4];
T01[3][3]=T101[3][3];
T01[3][4]=T101[3][4];
T01[3][5]=T101[3][5];
T01[3][6]=T101[3][6];

T01[4][1]=-(BODYLINK1*T101[2][1]) + T101[4][1] - BODYLINK1*(-(BODYLINK1*T101[2][5]) + T101[4][5]);
T01[4][2]=-(BODYLINK1*T101[2][2]) + T101[4][2] + BODYLINK1*(-(BODYLINK1*T101[2][4]) + T101[4][4]);
T01[4][3]=-(BODYLINK1*T101[2][3]) + T101[4][3];
T01[4][4]=-(BODYLINK1*T101[2][4]) + T101[4][4];
T01[4][5]=-(BODYLINK1*T101[2][5]) + T101[4][5];
T01[4][6]=-(BODYLINK1*T101[2][6]) + T101[4][6];

T01[5][1]=BODYLINK1*T101[1][1] + T101[5][1] - BODYLINK1*(BODYLINK1*T101[1][5] + T101[5][5]);
T01[5][2]=BODYLINK1*T101[1][2] + T101[5][2] + BODYLINK1*(BODYLINK1*T101[1][4] + T101[5][4]);
T01[5][3]=BODYLINK1*T101[1][3] + T101[5][3];
T01[5][4]=BODYLINK1*T101[1][4] + T101[5][4];
T01[5][5]=BODYLINK1*T101[1][5] + T101[5][5];
T01[5][6]=BODYLINK1*T101[1][6] + T101[5][6];

T01[6][1]=T101[6][1] - BODYLINK1*T101[6][5];
T01[6][2]=T101[6][2] + BODYLINK1*T101[6][4];
T01[6][3]=T101[6][3];
T01[6][4]=T101[6][4];
T01[6][5]=T101[6][5];
T01[6][6]=T101[6][6];



}


void
hoap3_InvDynArtfunc34(void)
      {
JA0[1][1]=T01[1][1] + T05[1][1];
JA0[1][2]=links[0].mcm[3] + T01[1][2] + T05[1][2];
JA0[1][3]=-links[0].mcm[2] + T01[1][3] + T05[1][3];
JA0[1][4]=links[0].m + T01[1][4] + T05[1][4];
JA0[1][5]=T01[1][5] + T05[1][5];
JA0[1][6]=T01[1][6] + T05[1][6];

JA0[2][1]=-links[0].mcm[3] + T01[2][1] + T05[2][1];
JA0[2][2]=T01[2][2] + T05[2][2];
JA0[2][3]=links[0].mcm[1] + T01[2][3] + T05[2][3];
JA0[2][4]=T01[2][4] + T05[2][4];
JA0[2][5]=links[0].m + T01[2][5] + T05[2][5];
JA0[2][6]=T01[2][6] + T05[2][6];

JA0[3][1]=links[0].mcm[2] + T01[3][1] + T05[3][1];
JA0[3][2]=-links[0].mcm[1] + T01[3][2] + T05[3][2];
JA0[3][3]=T01[3][3] + T05[3][3];
JA0[3][4]=T01[3][4] + T05[3][4];
JA0[3][5]=T01[3][5] + T05[3][5];
JA0[3][6]=links[0].m + T01[3][6] + T05[3][6];

JA0[4][1]=links[0].inertia[1][1] + T01[4][1] + T05[4][1];
JA0[4][2]=links[0].inertia[1][2] + T01[4][2] + T05[4][2];
JA0[4][3]=links[0].inertia[1][3] + T01[4][3] + T05[4][3];
JA0[4][4]=T01[4][4] + T05[4][4];
JA0[4][5]=-links[0].mcm[3] + T01[4][5] + T05[4][5];
JA0[4][6]=links[0].mcm[2] + T01[4][6] + T05[4][6];

JA0[5][1]=links[0].inertia[1][2] + T01[5][1] + T05[5][1];
JA0[5][2]=links[0].inertia[2][2] + T01[5][2] + T05[5][2];
JA0[5][3]=links[0].inertia[2][3] + T01[5][3] + T05[5][3];
JA0[5][4]=links[0].mcm[3] + T01[5][4] + T05[5][4];
JA0[5][5]=T01[5][5] + T05[5][5];
JA0[5][6]=-links[0].mcm[1] + T01[5][6] + T05[5][6];

JA0[6][1]=links[0].inertia[1][3] + T01[6][1] + T05[6][1];
JA0[6][2]=links[0].inertia[2][3] + T01[6][2] + T05[6][2];
JA0[6][3]=links[0].inertia[3][3] + T01[6][3] + T05[6][3];
JA0[6][4]=-links[0].mcm[2] + T01[6][4] + T05[6][4];
JA0[6][5]=links[0].mcm[1] + T01[6][5] + T05[6][5];
JA0[6][6]=T01[6][6] + T05[6][6];



}


void
hoap3_InvDynArtfunc35(void)
      {
/* bias forces */
p27[1]=pv27[1];
p27[2]=pv27[2];
p27[3]=pv27[3];
p27[4]=pv27[4];
p27[5]=pv27[5];
p27[6]=pv27[6];

pmm27[1]=p27[1];
pmm27[2]=p27[2];
pmm27[3]=p27[3];
pmm27[4]=p27[4];
pmm27[5]=p27[5];
pmm27[6]=p27[6];

pm27[1]=pmm27[1]*Si2227[1][1] + pmm27[2]*Si2227[1][2] + pmm27[3]*Si2227[1][3];
pm27[2]=pmm27[1]*Si2227[2][1] + pmm27[2]*Si2227[2][2] + pmm27[3]*Si2227[2][3];
pm27[3]=pmm27[1]*Si2227[3][1] + pmm27[2]*Si2227[3][2] + pmm27[3]*Si2227[3][3];
pm27[4]=pmm27[4]*Si2227[1][1] + pmm27[5]*Si2227[1][2] + pmm27[6]*Si2227[1][3] + pmm27[1]*(-(eff[2].x[3]*Si2227[2][1]) + eff[2].x[2]*Si2227[3][1]) + pmm27[2]*(-(eff[2].x[3]*Si2227[2][2]) + eff[2].x[2]*Si2227[3][2]) + pmm27[3]*(-(eff[2].x[3]*Si2227[2][3]) + eff[2].x[2]*Si2227[3][3]);
pm27[5]=pmm27[4]*Si2227[2][1] + pmm27[5]*Si2227[2][2] + pmm27[6]*Si2227[2][3] + pmm27[1]*(eff[2].x[3]*Si2227[1][1] - eff[2].x[1]*Si2227[3][1]) + pmm27[2]*(eff[2].x[3]*Si2227[1][2] - eff[2].x[1]*Si2227[3][2]) + pmm27[3]*(eff[2].x[3]*Si2227[1][3] - eff[2].x[1]*Si2227[3][3]);
pm27[6]=pmm27[1]*(-(eff[2].x[2]*Si2227[1][1]) + eff[2].x[1]*Si2227[2][1]) + pmm27[2]*(-(eff[2].x[2]*Si2227[1][2]) + eff[2].x[1]*Si2227[2][2]) + pmm27[3]*(-(eff[2].x[2]*Si2227[1][3]) + eff[2].x[1]*Si2227[2][3]) + pmm27[4]*Si2227[3][1] + pmm27[5]*Si2227[3][2] + pmm27[6]*Si2227[3][3];

p22[1]=0. + pm27[1] + pv22[1];
p22[2]=0. + pm27[2] + pv22[2];
p22[3]=0. + pm27[3] + pv22[3];
p22[4]=0. + pm27[4] + pv22[4];
p22[5]=0. + pm27[5] + pv22[5];
p22[6]=0. + pm27[6] + pv22[6];

pmm22[1]=state[12].thdd*h22[1] + p22[1] + c22[1]*JA22[1][1] + c22[2]*JA22[1][2] + c22[4]*JA22[1][4] + c22[5]*JA22[1][5];
pmm22[2]=state[12].thdd*h22[2] + p22[2] + c22[1]*JA22[2][1] + c22[2]*JA22[2][2] + c22[4]*JA22[2][4] + c22[5]*JA22[2][5];
pmm22[3]=state[12].thdd*h22[3] + p22[3] + c22[1]*JA22[3][1] + c22[2]*JA22[3][2] + c22[4]*JA22[3][4] + c22[5]*JA22[3][5];
pmm22[4]=state[12].thdd*h22[4] + p22[4] + c22[1]*JA22[4][1] + c22[2]*JA22[4][2] + c22[4]*JA22[4][4] + c22[5]*JA22[4][5];
pmm22[5]=state[12].thdd*h22[5] + p22[5] + c22[1]*JA22[5][1] + c22[2]*JA22[5][2] + c22[4]*JA22[5][4] + c22[5]*JA22[5][5];
pmm22[6]=state[12].thdd*h22[6] + p22[6] + c22[1]*JA22[6][1] + c22[2]*JA22[6][2] + c22[4]*JA22[6][4] + c22[5]*JA22[6][5];

pm22[1]=pmm22[1]*Si2122[1][1] + pmm22[2]*Si2122[1][2];
pm22[2]=pmm22[3];
pm22[3]=pmm22[1]*Si2122[3][1] + pmm22[2]*Si2122[3][2];
pm22[4]=pmm22[4]*Si2122[1][1] + pmm22[5]*Si2122[1][2];
pm22[5]=pmm22[6];
pm22[6]=pmm22[4]*Si2122[3][1] + pmm22[5]*Si2122[3][2];

p21[1]=pm22[1] + pv21[1];
p21[2]=pm22[2] + pv21[2];
p21[3]=pm22[3] + pv21[3];
p21[4]=pm22[4] + pv21[4];
p21[5]=pm22[5] + pv21[5];
p21[6]=pm22[6] + pv21[6];

pmm21[1]=state[11].thdd*h21[1] + p21[1] + c21[1]*JA21[1][1] + c21[2]*JA21[1][2] + c21[4]*JA21[1][4] + c21[5]*JA21[1][5];
pmm21[2]=state[11].thdd*h21[2] + p21[2] + c21[1]*JA21[2][1] + c21[2]*JA21[2][2] + c21[4]*JA21[2][4] + c21[5]*JA21[2][5];
pmm21[3]=state[11].thdd*h21[3] + p21[3] + c21[1]*JA21[3][1] + c21[2]*JA21[3][2] + c21[4]*JA21[3][4] + c21[5]*JA21[3][5];
pmm21[4]=state[11].thdd*h21[4] + p21[4] + c21[1]*JA21[4][1] + c21[2]*JA21[4][2] + c21[4]*JA21[4][4] + c21[5]*JA21[4][5];
pmm21[5]=state[11].thdd*h21[5] + p21[5] + c21[1]*JA21[5][1] + c21[2]*JA21[5][2] + c21[4]*JA21[5][4] + c21[5]*JA21[5][5];
pmm21[6]=state[11].thdd*h21[6] + p21[6] + c21[1]*JA21[6][1] + c21[2]*JA21[6][2] + c21[4]*JA21[6][4] + c21[5]*JA21[6][5];

pm21[1]=pmm21[1]*Si2021[1][1] + pmm21[2]*Si2021[1][2];
pm21[2]=pmm21[1]*Si2021[2][1] + pmm21[2]*Si2021[2][2];
pm21[3]=pmm21[3];
pm21[4]=pmm21[4]*Si2021[1][1] + pmm21[5]*Si2021[1][2];
pm21[5]=LEGLINK3*pmm21[3] + pmm21[4]*Si2021[2][1] + pmm21[5]*Si2021[2][2];
pm21[6]=pmm21[6] - LEGLINK3*pmm21[1]*Si2021[2][1] - LEGLINK3*pmm21[2]*Si2021[2][2];

p20[1]=pm21[1] + pv20[1];
p20[2]=pm21[2] + pv20[2];
p20[3]=pm21[3] + pv20[3];
p20[4]=pm21[4] + pv20[4];
p20[5]=pm21[5] + pv20[5];
p20[6]=pm21[6] + pv20[6];

pmm20[1]=state[10].thdd*h20[1] + p20[1] + c20[1]*JA20[1][1] + c20[2]*JA20[1][2] + c20[4]*JA20[1][4] + c20[5]*JA20[1][5];
pmm20[2]=state[10].thdd*h20[2] + p20[2] + c20[1]*JA20[2][1] + c20[2]*JA20[2][2] + c20[4]*JA20[2][4] + c20[5]*JA20[2][5];
pmm20[3]=state[10].thdd*h20[3] + p20[3] + c20[1]*JA20[3][1] + c20[2]*JA20[3][2] + c20[4]*JA20[3][4] + c20[5]*JA20[3][5];
pmm20[4]=state[10].thdd*h20[4] + p20[4] + c20[1]*JA20[4][1] + c20[2]*JA20[4][2] + c20[4]*JA20[4][4] + c20[5]*JA20[4][5];
pmm20[5]=state[10].thdd*h20[5] + p20[5] + c20[1]*JA20[5][1] + c20[2]*JA20[5][2] + c20[4]*JA20[5][4] + c20[5]*JA20[5][5];
pmm20[6]=state[10].thdd*h20[6] + p20[6] + c20[1]*JA20[6][1] + c20[2]*JA20[6][2] + c20[4]*JA20[6][4] + c20[5]*JA20[6][5];

pm20[1]=pmm20[1]*Si1920[1][1] + pmm20[2]*Si1920[1][2];
pm20[2]=pmm20[1]*Si1920[2][1] + pmm20[2]*Si1920[2][2];
pm20[3]=pmm20[3];
pm20[4]=pmm20[4]*Si1920[1][1] + pmm20[5]*Si1920[1][2];
pm20[5]=LEGLINK2*pmm20[3] + pmm20[4]*Si1920[2][1] + pmm20[5]*Si1920[2][2];
pm20[6]=pmm20[6] - LEGLINK2*pmm20[1]*Si1920[2][1] - LEGLINK2*pmm20[2]*Si1920[2][2];

p19[1]=pm20[1] + pv19[1];
p19[2]=pm20[2] + pv19[2];
p19[3]=pm20[3] + pv19[3];
p19[4]=pm20[4] + pv19[4];
p19[5]=pm20[5] + pv19[5];
p19[6]=pm20[6] + pv19[6];

pmm19[1]=state[9].thdd*h19[1] + p19[1] + c19[1]*JA19[1][1] + c19[2]*JA19[1][2] + c19[4]*JA19[1][4] + c19[5]*JA19[1][5];
pmm19[2]=state[9].thdd*h19[2] + p19[2] + c19[1]*JA19[2][1] + c19[2]*JA19[2][2] + c19[4]*JA19[2][4] + c19[5]*JA19[2][5];
pmm19[3]=state[9].thdd*h19[3] + p19[3] + c19[1]*JA19[3][1] + c19[2]*JA19[3][2] + c19[4]*JA19[3][4] + c19[5]*JA19[3][5];
pmm19[4]=state[9].thdd*h19[4] + p19[4] + c19[1]*JA19[4][1] + c19[2]*JA19[4][2] + c19[4]*JA19[4][4] + c19[5]*JA19[4][5];
pmm19[5]=state[9].thdd*h19[5] + p19[5] + c19[1]*JA19[5][1] + c19[2]*JA19[5][2] + c19[4]*JA19[5][4] + c19[5]*JA19[5][5];
pmm19[6]=state[9].thdd*h19[6] + p19[6] + c19[1]*JA19[6][1] + c19[2]*JA19[6][2] + c19[4]*JA19[6][4] + c19[5]*JA19[6][5];

pm19[1]=pmm19[1]*Si1819[1][1] + pmm19[2]*Si1819[1][2];
pm19[2]=-pmm19[3];
pm19[3]=pmm19[1]*Si1819[3][1] + pmm19[2]*Si1819[3][2];
pm19[4]=pmm19[4]*Si1819[1][1] + pmm19[5]*Si1819[1][2];
pm19[5]=-pmm19[6];
pm19[6]=pmm19[4]*Si1819[3][1] + pmm19[5]*Si1819[3][2];

p18[1]=pm19[1] + pv18[1];
p18[2]=pm19[2] + pv18[2];
p18[3]=pm19[3] + pv18[3];
p18[4]=pm19[4] + pv18[4];
p18[5]=pm19[5] + pv18[5];
p18[6]=pm19[6] + pv18[6];

pmm18[1]=state[8].thdd*h18[1] + p18[1] + c18[1]*JA18[1][1] + c18[2]*JA18[1][2] + c18[4]*JA18[1][4] + c18[5]*JA18[1][5];
pmm18[2]=state[8].thdd*h18[2] + p18[2] + c18[1]*JA18[2][1] + c18[2]*JA18[2][2] + c18[4]*JA18[2][4] + c18[5]*JA18[2][5];
pmm18[3]=state[8].thdd*h18[3] + p18[3] + c18[1]*JA18[3][1] + c18[2]*JA18[3][2] + c18[4]*JA18[3][4] + c18[5]*JA18[3][5];
pmm18[4]=state[8].thdd*h18[4] + p18[4] + c18[1]*JA18[4][1] + c18[2]*JA18[4][2] + c18[4]*JA18[4][4] + c18[5]*JA18[4][5];
pmm18[5]=state[8].thdd*h18[5] + p18[5] + c18[1]*JA18[5][1] + c18[2]*JA18[5][2] + c18[4]*JA18[5][4] + c18[5]*JA18[5][5];
pmm18[6]=state[8].thdd*h18[6] + p18[6] + c18[1]*JA18[6][1] + c18[2]*JA18[6][2] + c18[4]*JA18[6][4] + c18[5]*JA18[6][5];

pm18[1]=pmm18[1]*Si1718[1][1] + pmm18[2]*Si1718[1][2];
pm18[2]=-pmm18[3];
pm18[3]=pmm18[1]*Si1718[3][1] + pmm18[2]*Si1718[3][2];
pm18[4]=pmm18[4]*Si1718[1][1] + pmm18[5]*Si1718[1][2];
pm18[5]=-pmm18[6];
pm18[6]=pmm18[4]*Si1718[3][1] + pmm18[5]*Si1718[3][2];

p17[1]=pm18[1] + pv17[1];
p17[2]=pm18[2] + pv17[2];
p17[3]=pm18[3] + pv17[3];
p17[4]=pm18[4] + pv17[4];
p17[5]=pm18[5] + pv17[5];
p17[6]=pm18[6] + pv17[6];

pmm17[1]=state[7].thdd*h17[1] + p17[1] + c17[1]*JA17[1][1] + c17[2]*JA17[1][2] + c17[4]*JA17[1][4] + c17[5]*JA17[1][5];
pmm17[2]=state[7].thdd*h17[2] + p17[2] + c17[1]*JA17[2][1] + c17[2]*JA17[2][2] + c17[4]*JA17[2][4] + c17[5]*JA17[2][5];
pmm17[3]=state[7].thdd*h17[3] + p17[3] + c17[1]*JA17[3][1] + c17[2]*JA17[3][2] + c17[4]*JA17[3][4] + c17[5]*JA17[3][5];
pmm17[4]=state[7].thdd*h17[4] + p17[4] + c17[1]*JA17[4][1] + c17[2]*JA17[4][2] + c17[4]*JA17[4][4] + c17[5]*JA17[4][5];
pmm17[5]=state[7].thdd*h17[5] + p17[5] + c17[1]*JA17[5][1] + c17[2]*JA17[5][2] + c17[4]*JA17[5][4] + c17[5]*JA17[5][5];
pmm17[6]=state[7].thdd*h17[6] + p17[6] + c17[1]*JA17[6][1] + c17[2]*JA17[6][2] + c17[4]*JA17[6][4] + c17[5]*JA17[6][5];

pm17[1]=pmm17[1]*Si517[1][1] + pmm17[2]*Si517[1][2];
pm17[2]=pmm17[3];
pm17[3]=pmm17[1]*Si517[3][1] + pmm17[2]*Si517[3][2];
pm17[4]=LEGLINK1*pmm17[3] + pmm17[4]*Si517[1][1] + pmm17[5]*Si517[1][2] - WAISTLINK1*pmm17[1]*Si517[3][1] - WAISTLINK1*pmm17[2]*Si517[3][2];
pm17[5]=pmm17[6] + pmm17[1]*(-(LEGLINK1*Si517[1][1]) + WAISTLINK2*Si517[3][1]) + pmm17[2]*(-(LEGLINK1*Si517[1][2]) + WAISTLINK2*Si517[3][2]);
pm17[6]=-(WAISTLINK2*pmm17[3]) + WAISTLINK1*pmm17[1]*Si517[1][1] + WAISTLINK1*pmm17[2]*Si517[1][2] + pmm17[4]*Si517[3][1] + pmm17[5]*Si517[3][2];

p16[1]=pv16[1];
p16[2]=pv16[2];
p16[3]=pv16[3];
p16[4]=pv16[4];
p16[5]=pv16[5];
p16[6]=pv16[6];

pmm16[1]=p16[1];
pmm16[2]=p16[2];
pmm16[3]=p16[3];
pmm16[4]=p16[4];
pmm16[5]=p16[5];
pmm16[6]=p16[6];

pm16[1]=pmm16[1]*Si1116[1][1] + pmm16[2]*Si1116[1][2] + pmm16[3]*Si1116[1][3];
pm16[2]=pmm16[1]*Si1116[2][1] + pmm16[2]*Si1116[2][2] + pmm16[3]*Si1116[2][3];
pm16[3]=pmm16[1]*Si1116[3][1] + pmm16[2]*Si1116[3][2] + pmm16[3]*Si1116[3][3];
pm16[4]=pmm16[4]*Si1116[1][1] + pmm16[5]*Si1116[1][2] + pmm16[6]*Si1116[1][3] + pmm16[1]*(-(eff[1].x[3]*Si1116[2][1]) + eff[1].x[2]*Si1116[3][1]) + pmm16[2]*(-(eff[1].x[3]*Si1116[2][2]) + eff[1].x[2]*Si1116[3][2]) + pmm16[3]*(-(eff[1].x[3]*Si1116[2][3]) + eff[1].x[2]*Si1116[3][3]);
pm16[5]=pmm16[4]*Si1116[2][1] + pmm16[5]*Si1116[2][2] + pmm16[6]*Si1116[2][3] + pmm16[1]*(eff[1].x[3]*Si1116[1][1] - eff[1].x[1]*Si1116[3][1]) + pmm16[2]*(eff[1].x[3]*Si1116[1][2] - eff[1].x[1]*Si1116[3][2]) + pmm16[3]*(eff[1].x[3]*Si1116[1][3] - eff[1].x[1]*Si1116[3][3]);
pm16[6]=pmm16[1]*(-(eff[1].x[2]*Si1116[1][1]) + eff[1].x[1]*Si1116[2][1]) + pmm16[2]*(-(eff[1].x[2]*Si1116[1][2]) + eff[1].x[1]*Si1116[2][2]) + pmm16[3]*(-(eff[1].x[2]*Si1116[1][3]) + eff[1].x[1]*Si1116[2][3]) + pmm16[4]*Si1116[3][1] + pmm16[5]*Si1116[3][2] + pmm16[6]*Si1116[3][3];

p11[1]=0. + pm16[1] + pv11[1];
p11[2]=0. + pm16[2] + pv11[2];
p11[3]=0. + pm16[3] + pv11[3];
p11[4]=0. + pm16[4] + pv11[4];
p11[5]=0. + pm16[5] + pv11[5];
p11[6]=0. + pm16[6] + pv11[6];

pmm11[1]=state[6].thdd*h11[1] + p11[1] + c11[1]*JA11[1][1] + c11[2]*JA11[1][2] + c11[4]*JA11[1][4] + c11[5]*JA11[1][5];
pmm11[2]=state[6].thdd*h11[2] + p11[2] + c11[1]*JA11[2][1] + c11[2]*JA11[2][2] + c11[4]*JA11[2][4] + c11[5]*JA11[2][5];
pmm11[3]=state[6].thdd*h11[3] + p11[3] + c11[1]*JA11[3][1] + c11[2]*JA11[3][2] + c11[4]*JA11[3][4] + c11[5]*JA11[3][5];
pmm11[4]=state[6].thdd*h11[4] + p11[4] + c11[1]*JA11[4][1] + c11[2]*JA11[4][2] + c11[4]*JA11[4][4] + c11[5]*JA11[4][5];
pmm11[5]=state[6].thdd*h11[5] + p11[5] + c11[1]*JA11[5][1] + c11[2]*JA11[5][2] + c11[4]*JA11[5][4] + c11[5]*JA11[5][5];
pmm11[6]=state[6].thdd*h11[6] + p11[6] + c11[1]*JA11[6][1] + c11[2]*JA11[6][2] + c11[4]*JA11[6][4] + c11[5]*JA11[6][5];

pm11[1]=pmm11[1]*Si1011[1][1] + pmm11[2]*Si1011[1][2];
pm11[2]=pmm11[3];
pm11[3]=pmm11[1]*Si1011[3][1] + pmm11[2]*Si1011[3][2];
pm11[4]=pmm11[4]*Si1011[1][1] + pmm11[5]*Si1011[1][2];
pm11[5]=pmm11[6];
pm11[6]=pmm11[4]*Si1011[3][1] + pmm11[5]*Si1011[3][2];

p10[1]=pm11[1] + pv10[1];
p10[2]=pm11[2] + pv10[2];
p10[3]=pm11[3] + pv10[3];
p10[4]=pm11[4] + pv10[4];
p10[5]=pm11[5] + pv10[5];
p10[6]=pm11[6] + pv10[6];

pmm10[1]=state[5].thdd*h10[1] + p10[1] + c10[1]*JA10[1][1] + c10[2]*JA10[1][2] + c10[4]*JA10[1][4] + c10[5]*JA10[1][5];
pmm10[2]=state[5].thdd*h10[2] + p10[2] + c10[1]*JA10[2][1] + c10[2]*JA10[2][2] + c10[4]*JA10[2][4] + c10[5]*JA10[2][5];
pmm10[3]=state[5].thdd*h10[3] + p10[3] + c10[1]*JA10[3][1] + c10[2]*JA10[3][2] + c10[4]*JA10[3][4] + c10[5]*JA10[3][5];
pmm10[4]=state[5].thdd*h10[4] + p10[4] + c10[1]*JA10[4][1] + c10[2]*JA10[4][2] + c10[4]*JA10[4][4] + c10[5]*JA10[4][5];
pmm10[5]=state[5].thdd*h10[5] + p10[5] + c10[1]*JA10[5][1] + c10[2]*JA10[5][2] + c10[4]*JA10[5][4] + c10[5]*JA10[5][5];
pmm10[6]=state[5].thdd*h10[6] + p10[6] + c10[1]*JA10[6][1] + c10[2]*JA10[6][2] + c10[4]*JA10[6][4] + c10[5]*JA10[6][5];

pm10[1]=pmm10[1]*Si910[1][1] + pmm10[2]*Si910[1][2];
pm10[2]=pmm10[1]*Si910[2][1] + pmm10[2]*Si910[2][2];
pm10[3]=pmm10[3];
pm10[4]=pmm10[4]*Si910[1][1] + pmm10[5]*Si910[1][2];
pm10[5]=LEGLINK3*pmm10[3] + pmm10[4]*Si910[2][1] + pmm10[5]*Si910[2][2];
pm10[6]=pmm10[6] - LEGLINK3*pmm10[1]*Si910[2][1] - LEGLINK3*pmm10[2]*Si910[2][2];

p9[1]=pm10[1] + pv9[1];
p9[2]=pm10[2] + pv9[2];
p9[3]=pm10[3] + pv9[3];
p9[4]=pm10[4] + pv9[4];
p9[5]=pm10[5] + pv9[5];
p9[6]=pm10[6] + pv9[6];

pmm9[1]=state[4].thdd*h9[1] + p9[1] + c9[1]*JA9[1][1] + c9[2]*JA9[1][2] + c9[4]*JA9[1][4] + c9[5]*JA9[1][5];
pmm9[2]=state[4].thdd*h9[2] + p9[2] + c9[1]*JA9[2][1] + c9[2]*JA9[2][2] + c9[4]*JA9[2][4] + c9[5]*JA9[2][5];
pmm9[3]=state[4].thdd*h9[3] + p9[3] + c9[1]*JA9[3][1] + c9[2]*JA9[3][2] + c9[4]*JA9[3][4] + c9[5]*JA9[3][5];
pmm9[4]=state[4].thdd*h9[4] + p9[4] + c9[1]*JA9[4][1] + c9[2]*JA9[4][2] + c9[4]*JA9[4][4] + c9[5]*JA9[4][5];
pmm9[5]=state[4].thdd*h9[5] + p9[5] + c9[1]*JA9[5][1] + c9[2]*JA9[5][2] + c9[4]*JA9[5][4] + c9[5]*JA9[5][5];
pmm9[6]=state[4].thdd*h9[6] + p9[6] + c9[1]*JA9[6][1] + c9[2]*JA9[6][2] + c9[4]*JA9[6][4] + c9[5]*JA9[6][5];

pm9[1]=pmm9[1]*Si89[1][1] + pmm9[2]*Si89[1][2];
pm9[2]=pmm9[1]*Si89[2][1] + pmm9[2]*Si89[2][2];
pm9[3]=pmm9[3];
pm9[4]=pmm9[4]*Si89[1][1] + pmm9[5]*Si89[1][2];
pm9[5]=LEGLINK2*pmm9[3] + pmm9[4]*Si89[2][1] + pmm9[5]*Si89[2][2];
pm9[6]=pmm9[6] - LEGLINK2*pmm9[1]*Si89[2][1] - LEGLINK2*pmm9[2]*Si89[2][2];

p8[1]=pm9[1] + pv8[1];
p8[2]=pm9[2] + pv8[2];
p8[3]=pm9[3] + pv8[3];
p8[4]=pm9[4] + pv8[4];
p8[5]=pm9[5] + pv8[5];
p8[6]=pm9[6] + pv8[6];

pmm8[1]=state[3].thdd*h8[1] + p8[1] + c8[1]*JA8[1][1] + c8[2]*JA8[1][2] + c8[4]*JA8[1][4] + c8[5]*JA8[1][5];
pmm8[2]=state[3].thdd*h8[2] + p8[2] + c8[1]*JA8[2][1] + c8[2]*JA8[2][2] + c8[4]*JA8[2][4] + c8[5]*JA8[2][5];
pmm8[3]=state[3].thdd*h8[3] + p8[3] + c8[1]*JA8[3][1] + c8[2]*JA8[3][2] + c8[4]*JA8[3][4] + c8[5]*JA8[3][5];
pmm8[4]=state[3].thdd*h8[4] + p8[4] + c8[1]*JA8[4][1] + c8[2]*JA8[4][2] + c8[4]*JA8[4][4] + c8[5]*JA8[4][5];
pmm8[5]=state[3].thdd*h8[5] + p8[5] + c8[1]*JA8[5][1] + c8[2]*JA8[5][2] + c8[4]*JA8[5][4] + c8[5]*JA8[5][5];
pmm8[6]=state[3].thdd*h8[6] + p8[6] + c8[1]*JA8[6][1] + c8[2]*JA8[6][2] + c8[4]*JA8[6][4] + c8[5]*JA8[6][5];

pm8[1]=pmm8[1]*Si78[1][1] + pmm8[2]*Si78[1][2];
pm8[2]=-pmm8[3];
pm8[3]=pmm8[1]*Si78[3][1] + pmm8[2]*Si78[3][2];
pm8[4]=pmm8[4]*Si78[1][1] + pmm8[5]*Si78[1][2];
pm8[5]=-pmm8[6];
pm8[6]=pmm8[4]*Si78[3][1] + pmm8[5]*Si78[3][2];

p7[1]=pm8[1] + pv7[1];
p7[2]=pm8[2] + pv7[2];
p7[3]=pm8[3] + pv7[3];
p7[4]=pm8[4] + pv7[4];
p7[5]=pm8[5] + pv7[5];
p7[6]=pm8[6] + pv7[6];

pmm7[1]=state[2].thdd*h7[1] + p7[1] + c7[1]*JA7[1][1] + c7[2]*JA7[1][2] + c7[4]*JA7[1][4] + c7[5]*JA7[1][5];
pmm7[2]=state[2].thdd*h7[2] + p7[2] + c7[1]*JA7[2][1] + c7[2]*JA7[2][2] + c7[4]*JA7[2][4] + c7[5]*JA7[2][5];
pmm7[3]=state[2].thdd*h7[3] + p7[3] + c7[1]*JA7[3][1] + c7[2]*JA7[3][2] + c7[4]*JA7[3][4] + c7[5]*JA7[3][5];
pmm7[4]=state[2].thdd*h7[4] + p7[4] + c7[1]*JA7[4][1] + c7[2]*JA7[4][2] + c7[4]*JA7[4][4] + c7[5]*JA7[4][5];
pmm7[5]=state[2].thdd*h7[5] + p7[5] + c7[1]*JA7[5][1] + c7[2]*JA7[5][2] + c7[4]*JA7[5][4] + c7[5]*JA7[5][5];
pmm7[6]=state[2].thdd*h7[6] + p7[6] + c7[1]*JA7[6][1] + c7[2]*JA7[6][2] + c7[4]*JA7[6][4] + c7[5]*JA7[6][5];

pm7[1]=pmm7[1]*Si67[1][1] + pmm7[2]*Si67[1][2];
pm7[2]=-pmm7[3];
pm7[3]=pmm7[1]*Si67[3][1] + pmm7[2]*Si67[3][2];
pm7[4]=pmm7[4]*Si67[1][1] + pmm7[5]*Si67[1][2];
pm7[5]=-pmm7[6];
pm7[6]=pmm7[4]*Si67[3][1] + pmm7[5]*Si67[3][2];

p6[1]=pm7[1] + pv6[1];
p6[2]=pm7[2] + pv6[2];
p6[3]=pm7[3] + pv6[3];
p6[4]=pm7[4] + pv6[4];
p6[5]=pm7[5] + pv6[5];
p6[6]=pm7[6] + pv6[6];

pmm6[1]=state[1].thdd*h6[1] + p6[1] + c6[1]*JA6[1][1] + c6[2]*JA6[1][2] + c6[4]*JA6[1][4] + c6[5]*JA6[1][5];
pmm6[2]=state[1].thdd*h6[2] + p6[2] + c6[1]*JA6[2][1] + c6[2]*JA6[2][2] + c6[4]*JA6[2][4] + c6[5]*JA6[2][5];
pmm6[3]=state[1].thdd*h6[3] + p6[3] + c6[1]*JA6[3][1] + c6[2]*JA6[3][2] + c6[4]*JA6[3][4] + c6[5]*JA6[3][5];
pmm6[4]=state[1].thdd*h6[4] + p6[4] + c6[1]*JA6[4][1] + c6[2]*JA6[4][2] + c6[4]*JA6[4][4] + c6[5]*JA6[4][5];
pmm6[5]=state[1].thdd*h6[5] + p6[5] + c6[1]*JA6[5][1] + c6[2]*JA6[5][2] + c6[4]*JA6[5][4] + c6[5]*JA6[5][5];
pmm6[6]=state[1].thdd*h6[6] + p6[6] + c6[1]*JA6[6][1] + c6[2]*JA6[6][2] + c6[4]*JA6[6][4] + c6[5]*JA6[6][5];

pm6[1]=pmm6[1]*Si56[1][1] + pmm6[2]*Si56[1][2];
pm6[2]=pmm6[3];
pm6[3]=pmm6[1]*Si56[3][1] + pmm6[2]*Si56[3][2];
pm6[4]=-(LEGLINK1*pmm6[3]) + pmm6[4]*Si56[1][1] + pmm6[5]*Si56[1][2] - WAISTLINK1*pmm6[1]*Si56[3][1] - WAISTLINK1*pmm6[2]*Si56[3][2];
pm6[5]=pmm6[6] + pmm6[1]*(LEGLINK1*Si56[1][1] + WAISTLINK2*Si56[3][1]) + pmm6[2]*(LEGLINK1*Si56[1][2] + WAISTLINK2*Si56[3][2]);
pm6[6]=-(WAISTLINK2*pmm6[3]) + WAISTLINK1*pmm6[1]*Si56[1][1] + WAISTLINK1*pmm6[2]*Si56[1][2] + pmm6[4]*Si56[3][1] + pmm6[5]*Si56[3][2];

p5[1]=pm17[1] + pm6[1] + pv5[1];
p5[2]=pm17[2] + pm6[2] + pv5[2];
p5[3]=pm17[3] + pm6[3] + pv5[3];
p5[4]=pm17[4] + pm6[4] + pv5[4];
p5[5]=pm17[5] + pm6[5] + pv5[5];
p5[6]=pm17[6] + pm6[6] + pv5[6];

pmm5[1]=state[13].thdd*h5[1] + p5[1] + c5[1]*JA5[1][1] + c5[2]*JA5[1][2] + c5[4]*JA5[1][4] + c5[5]*JA5[1][5];
pmm5[2]=state[13].thdd*h5[2] + p5[2] + c5[1]*JA5[2][1] + c5[2]*JA5[2][2] + c5[4]*JA5[2][4] + c5[5]*JA5[2][5];
pmm5[3]=state[13].thdd*h5[3] + p5[3] + c5[1]*JA5[3][1] + c5[2]*JA5[3][2] + c5[4]*JA5[3][4] + c5[5]*JA5[3][5];
pmm5[4]=state[13].thdd*h5[4] + p5[4] + c5[1]*JA5[4][1] + c5[2]*JA5[4][2] + c5[4]*JA5[4][4] + c5[5]*JA5[4][5];
pmm5[5]=state[13].thdd*h5[5] + p5[5] + c5[1]*JA5[5][1] + c5[2]*JA5[5][2] + c5[4]*JA5[5][4] + c5[5]*JA5[5][5];
pmm5[6]=state[13].thdd*h5[6] + p5[6] + c5[1]*JA5[6][1] + c5[2]*JA5[6][2] + c5[4]*JA5[6][4] + c5[5]*JA5[6][5];

pm5[1]=pmm5[1]*Si05[1][1] + pmm5[2]*Si05[1][2];
pm5[2]=-pmm5[3];
pm5[3]=pmm5[1]*Si05[3][1] + pmm5[2]*Si05[3][2];
pm5[4]=pmm5[4]*Si05[1][1] + pmm5[5]*Si05[1][2];
pm5[5]=-pmm5[6] - BODYLINK2*pmm5[1]*Si05[3][1] - BODYLINK2*pmm5[2]*Si05[3][2];
pm5[6]=-(BODYLINK2*pmm5[3]) + pmm5[4]*Si05[3][1] + pmm5[5]*Si05[3][2];

p3[1]=0. + pv3[1];
p3[2]=0. + pv3[2];
p3[3]=0. + pv3[3];
p3[4]=0. + pv3[4];
p3[5]=0. + pv3[5];
p3[6]=0. + pv3[6];

pmm3[1]=state[15].thdd*h3[1] + p3[1] + c3[2]*JA3[1][2] + c3[4]*JA3[1][4];
pmm3[2]=state[15].thdd*h3[2] + p3[2] + c3[1]*JA3[2][1] + c3[5]*JA3[2][5];
pmm3[3]=p3[3] + c3[1]*JA3[3][1] + c3[2]*JA3[3][2];
pmm3[4]=state[15].thdd*h3[4] + p3[4] + c3[1]*JA3[4][1] + c3[2]*JA3[4][2] + c3[5]*JA3[4][5];
pmm3[5]=state[15].thdd*h3[5] + p3[5] + c3[1]*JA3[5][1] + c3[2]*JA3[5][2] + c3[4]*JA3[5][4];
pmm3[6]=state[15].thdd*h3[6] + p3[6] + c3[1]*JA3[6][1] + c3[2]*JA3[6][2] + c3[4]*JA3[6][4] + c3[5]*JA3[6][5];

pm3[1]=pmm3[1]*Si23[1][1] + pmm3[2]*Si23[1][2];
pm3[2]=-pmm3[3];
pm3[3]=pmm3[1]*Si23[3][1] + pmm3[2]*Si23[3][2];
pm3[4]=pmm3[4]*Si23[1][1] + pmm3[5]*Si23[1][2];
pm3[5]=-pmm3[6];
pm3[6]=pmm3[4]*Si23[3][1] + pmm3[5]*Si23[3][2];

p2[1]=pm3[1] + pv2[1];
p2[2]=pm3[2] + pv2[2];
p2[3]=pm3[3] + pv2[3];
p2[4]=pm3[4] + pv2[4];
p2[5]=pm3[5] + pv2[5];
p2[6]=pm3[6] + pv2[6];

pmm2[1]=state[14].thdd*h2[1] + p2[1] + c2[1]*JA2[1][1] + c2[2]*JA2[1][2] + c2[4]*JA2[1][4];
pmm2[2]=state[14].thdd*h2[2] + p2[2] + c2[1]*JA2[2][1] + c2[5]*JA2[2][5];
pmm2[3]=state[14].thdd*h2[3] + p2[3] + c2[1]*JA2[3][1] + c2[2]*JA2[3][2] + c2[4]*JA2[3][4];
pmm2[4]=state[14].thdd*h2[4] + p2[4] + c2[1]*JA2[4][1] + c2[2]*JA2[4][2] + c2[4]*JA2[4][4] + c2[5]*JA2[4][5];
pmm2[5]=state[14].thdd*h2[5] + p2[5] + c2[1]*JA2[5][1] + c2[2]*JA2[5][2] + c2[4]*JA2[5][4];
pmm2[6]=state[14].thdd*h2[6] + p2[6] + c2[1]*JA2[6][1] + c2[2]*JA2[6][2] + c2[4]*JA2[6][4] + c2[5]*JA2[6][5];

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

p0[1]=pm1[1] + pm5[1] + pv0[1];
p0[2]=pm1[2] + pm5[2] + pv0[2];
p0[3]=pm1[3] + pm5[3] + pv0[3];
p0[4]=pm1[4] + pm5[4] + pv0[4];
p0[5]=pm1[5] + pm5[5] + pv0[5];
p0[6]=pm1[6] + pm5[6] + pv0[6];


}

