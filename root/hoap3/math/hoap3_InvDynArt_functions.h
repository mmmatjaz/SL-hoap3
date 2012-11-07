
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



S20[1][1]=cstate13th;
S20[1][3]=sstate13th;

S20[2][1]=-sstate13th;
S20[2][3]=cstate13th;


S32[1][1]=-sstate1th;
S32[1][3]=-cstate1th;

S32[2][1]=-cstate1th;
S32[2][3]=sstate1th;


S43[1][1]=-sstate2th;
S43[1][3]=cstate2th;

S43[2][1]=-cstate2th;
S43[2][3]=-sstate2th;


S54[1][1]=cstate3th;
S54[1][3]=sstate3th;

S54[2][1]=-sstate3th;
S54[2][3]=cstate3th;


S65[1][1]=cstate4th;
S65[1][2]=sstate4th;

S65[2][1]=-sstate4th;
S65[2][2]=cstate4th;


S76[1][1]=cstate5th;
S76[1][2]=sstate5th;

S76[2][1]=-sstate5th;
S76[2][2]=cstate5th;


S87[1][1]=cstate6th;
S87[1][3]=-sstate6th;

S87[2][1]=-sstate6th;
S87[2][3]=-cstate6th;






S138[1][1]=rceff1a2*rceff1a3;
S138[1][2]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
S138[1][3]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;

S138[2][1]=-(rceff1a2*rseff1a3);
S138[2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
S138[2][3]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;

S138[3][1]=rseff1a2;
S138[3][2]=-(rceff1a2*rseff1a1);
S138[3][3]=rceff1a1*rceff1a2;


S142[1][1]=-sstate7th;
S142[1][3]=-cstate7th;

S142[2][1]=-cstate7th;
S142[2][3]=sstate7th;


S1514[1][1]=-sstate8th;
S1514[1][3]=cstate8th;

S1514[2][1]=-cstate8th;
S1514[2][3]=-sstate8th;


S1615[1][1]=cstate9th;
S1615[1][3]=sstate9th;

S1615[2][1]=-sstate9th;
S1615[2][3]=cstate9th;


S1716[1][1]=cstate10th;
S1716[1][2]=sstate10th;

S1716[2][1]=-sstate10th;
S1716[2][2]=cstate10th;


S1817[1][1]=cstate11th;
S1817[1][2]=sstate11th;

S1817[2][1]=-sstate11th;
S1817[2][2]=cstate11th;


S1918[1][1]=cstate12th;
S1918[1][3]=-sstate12th;

S1918[2][1]=-sstate12th;
S1918[2][3]=-cstate12th;






S2419[1][1]=rceff2a2*rceff2a3;
S2419[1][2]=rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3;
S2419[1][3]=-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3;

S2419[2][1]=-(rceff2a2*rseff2a3);
S2419[2][2]=rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3;
S2419[2][3]=rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3;

S2419[3][1]=rseff2a2;
S2419[3][2]=-(rceff2a2*rseff2a1);
S2419[3][3]=rceff2a1*rceff2a2;




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



Si02[1][1]=cstate13th;
Si02[1][2]=-sstate13th;

Si02[3][1]=sstate13th;
Si02[3][2]=cstate13th;


Si23[1][1]=-sstate1th;
Si23[1][2]=-cstate1th;

Si23[3][1]=-cstate1th;
Si23[3][2]=sstate1th;


Si34[1][1]=-sstate2th;
Si34[1][2]=-cstate2th;

Si34[3][1]=cstate2th;
Si34[3][2]=-sstate2th;


Si45[1][1]=cstate3th;
Si45[1][2]=-sstate3th;

Si45[3][1]=sstate3th;
Si45[3][2]=cstate3th;


Si56[1][1]=cstate4th;
Si56[1][2]=-sstate4th;

Si56[2][1]=sstate4th;
Si56[2][2]=cstate4th;


Si67[1][1]=cstate5th;
Si67[1][2]=-sstate5th;

Si67[2][1]=sstate5th;
Si67[2][2]=cstate5th;


Si78[1][1]=cstate6th;
Si78[1][2]=-sstate6th;

Si78[3][1]=-sstate6th;
Si78[3][2]=-cstate6th;






Si813[1][1]=rceff1a2*rceff1a3;
Si813[1][2]=-(rceff1a2*rseff1a3);
Si813[1][3]=rseff1a2;

Si813[2][1]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
Si813[2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
Si813[2][3]=-(rceff1a2*rseff1a1);

Si813[3][1]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;
Si813[3][2]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;
Si813[3][3]=rceff1a1*rceff1a2;


Si214[1][1]=-sstate7th;
Si214[1][2]=-cstate7th;

Si214[3][1]=-cstate7th;
Si214[3][2]=sstate7th;


Si1415[1][1]=-sstate8th;
Si1415[1][2]=-cstate8th;

Si1415[3][1]=cstate8th;
Si1415[3][2]=-sstate8th;


Si1516[1][1]=cstate9th;
Si1516[1][2]=-sstate9th;

Si1516[3][1]=sstate9th;
Si1516[3][2]=cstate9th;


Si1617[1][1]=cstate10th;
Si1617[1][2]=-sstate10th;

Si1617[2][1]=sstate10th;
Si1617[2][2]=cstate10th;


Si1718[1][1]=cstate11th;
Si1718[1][2]=-sstate11th;

Si1718[2][1]=sstate11th;
Si1718[2][2]=cstate11th;


Si1819[1][1]=cstate12th;
Si1819[1][2]=-sstate12th;

Si1819[3][1]=-sstate12th;
Si1819[3][2]=-cstate12th;






Si1924[1][1]=rceff2a2*rceff2a3;
Si1924[1][2]=-(rceff2a2*rseff2a3);
Si1924[1][3]=rseff2a2;

Si1924[2][1]=rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3;
Si1924[2][2]=rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3;
Si1924[2][3]=-(rceff2a2*rseff2a1);

Si1924[3][1]=-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3;
Si1924[3][2]=rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3;
Si1924[3][3]=rceff2a1*rceff2a2;




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


SG20[1][1]=S00[1][1]*S20[1][1] + S00[3][1]*S20[1][3];
SG20[1][2]=S00[1][2]*S20[1][1] + S00[3][2]*S20[1][3];
SG20[1][3]=S00[1][3]*S20[1][1] + S00[3][3]*S20[1][3];

SG20[2][1]=S00[1][1]*S20[2][1] + S00[3][1]*S20[2][3];
SG20[2][2]=S00[1][2]*S20[2][1] + S00[3][2]*S20[2][3];
SG20[2][3]=S00[1][3]*S20[2][1] + S00[3][3]*S20[2][3];

SG20[3][1]=-S00[2][1];
SG20[3][2]=-S00[2][2];
SG20[3][3]=-S00[2][3];


SG30[1][1]=S32[1][1]*SG20[1][1] + S32[1][3]*SG20[3][1];
SG30[1][2]=S32[1][1]*SG20[1][2] + S32[1][3]*SG20[3][2];
SG30[1][3]=S32[1][1]*SG20[1][3] + S32[1][3]*SG20[3][3];

SG30[2][1]=S32[2][1]*SG20[1][1] + S32[2][3]*SG20[3][1];
SG30[2][2]=S32[2][1]*SG20[1][2] + S32[2][3]*SG20[3][2];
SG30[2][3]=S32[2][1]*SG20[1][3] + S32[2][3]*SG20[3][3];

SG30[3][1]=SG20[2][1];
SG30[3][2]=SG20[2][2];
SG30[3][3]=SG20[2][3];


SG40[1][1]=S43[1][1]*SG30[1][1] + S43[1][3]*SG30[3][1];
SG40[1][2]=S43[1][1]*SG30[1][2] + S43[1][3]*SG30[3][2];
SG40[1][3]=S43[1][1]*SG30[1][3] + S43[1][3]*SG30[3][3];

SG40[2][1]=S43[2][1]*SG30[1][1] + S43[2][3]*SG30[3][1];
SG40[2][2]=S43[2][1]*SG30[1][2] + S43[2][3]*SG30[3][2];
SG40[2][3]=S43[2][1]*SG30[1][3] + S43[2][3]*SG30[3][3];

SG40[3][1]=-SG30[2][1];
SG40[3][2]=-SG30[2][2];
SG40[3][3]=-SG30[2][3];


SG50[1][1]=S54[1][1]*SG40[1][1] + S54[1][3]*SG40[3][1];
SG50[1][2]=S54[1][1]*SG40[1][2] + S54[1][3]*SG40[3][2];
SG50[1][3]=S54[1][1]*SG40[1][3] + S54[1][3]*SG40[3][3];

SG50[2][1]=S54[2][1]*SG40[1][1] + S54[2][3]*SG40[3][1];
SG50[2][2]=S54[2][1]*SG40[1][2] + S54[2][3]*SG40[3][2];
SG50[2][3]=S54[2][1]*SG40[1][3] + S54[2][3]*SG40[3][3];

SG50[3][1]=-SG40[2][1];
SG50[3][2]=-SG40[2][2];
SG50[3][3]=-SG40[2][3];


SG60[1][1]=S65[1][1]*SG50[1][1] + S65[1][2]*SG50[2][1];
SG60[1][2]=S65[1][1]*SG50[1][2] + S65[1][2]*SG50[2][2];
SG60[1][3]=S65[1][1]*SG50[1][3] + S65[1][2]*SG50[2][3];

SG60[2][1]=S65[2][1]*SG50[1][1] + S65[2][2]*SG50[2][1];
SG60[2][2]=S65[2][1]*SG50[1][2] + S65[2][2]*SG50[2][2];
SG60[2][3]=S65[2][1]*SG50[1][3] + S65[2][2]*SG50[2][3];

SG60[3][1]=SG50[3][1];
SG60[3][2]=SG50[3][2];
SG60[3][3]=SG50[3][3];


SG70[1][1]=S76[1][1]*SG60[1][1] + S76[1][2]*SG60[2][1];
SG70[1][2]=S76[1][1]*SG60[1][2] + S76[1][2]*SG60[2][2];
SG70[1][3]=S76[1][1]*SG60[1][3] + S76[1][2]*SG60[2][3];

SG70[2][1]=S76[2][1]*SG60[1][1] + S76[2][2]*SG60[2][1];
SG70[2][2]=S76[2][1]*SG60[1][2] + S76[2][2]*SG60[2][2];
SG70[2][3]=S76[2][1]*SG60[1][3] + S76[2][2]*SG60[2][3];

SG70[3][1]=SG60[3][1];
SG70[3][2]=SG60[3][2];
SG70[3][3]=SG60[3][3];


SG80[1][1]=S87[1][1]*SG70[1][1] + S87[1][3]*SG70[3][1];
SG80[1][2]=S87[1][1]*SG70[1][2] + S87[1][3]*SG70[3][2];
SG80[1][3]=S87[1][1]*SG70[1][3] + S87[1][3]*SG70[3][3];

SG80[2][1]=S87[2][1]*SG70[1][1] + S87[2][3]*SG70[3][1];
SG80[2][2]=S87[2][1]*SG70[1][2] + S87[2][3]*SG70[3][2];
SG80[2][3]=S87[2][1]*SG70[1][3] + S87[2][3]*SG70[3][3];

SG80[3][1]=SG70[2][1];
SG80[3][2]=SG70[2][2];
SG80[3][3]=SG70[2][3];


SG90[1][1]=SG80[1][1];
SG90[1][2]=SG80[1][2];
SG90[1][3]=SG80[1][3];

SG90[2][1]=SG80[2][1];
SG90[2][2]=SG80[2][2];
SG90[2][3]=SG80[2][3];

SG90[3][1]=SG80[3][1];
SG90[3][2]=SG80[3][2];
SG90[3][3]=SG80[3][3];


SG100[1][1]=SG80[1][1];
SG100[1][2]=SG80[1][2];
SG100[1][3]=SG80[1][3];

SG100[2][1]=SG80[2][1];
SG100[2][2]=SG80[2][2];
SG100[2][3]=SG80[2][3];

SG100[3][1]=SG80[3][1];
SG100[3][2]=SG80[3][2];
SG100[3][3]=SG80[3][3];


SG110[1][1]=SG80[1][1];
SG110[1][2]=SG80[1][2];
SG110[1][3]=SG80[1][3];

SG110[2][1]=SG80[2][1];
SG110[2][2]=SG80[2][2];
SG110[2][3]=SG80[2][3];

SG110[3][1]=SG80[3][1];
SG110[3][2]=SG80[3][2];
SG110[3][3]=SG80[3][3];


SG120[1][1]=SG80[1][1];
SG120[1][2]=SG80[1][2];
SG120[1][3]=SG80[1][3];

SG120[2][1]=SG80[2][1];
SG120[2][2]=SG80[2][2];
SG120[2][3]=SG80[2][3];

SG120[3][1]=SG80[3][1];
SG120[3][2]=SG80[3][2];
SG120[3][3]=SG80[3][3];


SG130[1][1]=S138[1][1]*SG80[1][1] + S138[1][2]*SG80[2][1] + S138[1][3]*SG80[3][1];
SG130[1][2]=S138[1][1]*SG80[1][2] + S138[1][2]*SG80[2][2] + S138[1][3]*SG80[3][2];
SG130[1][3]=S138[1][1]*SG80[1][3] + S138[1][2]*SG80[2][3] + S138[1][3]*SG80[3][3];

SG130[2][1]=S138[2][1]*SG80[1][1] + S138[2][2]*SG80[2][1] + S138[2][3]*SG80[3][1];
SG130[2][2]=S138[2][1]*SG80[1][2] + S138[2][2]*SG80[2][2] + S138[2][3]*SG80[3][2];
SG130[2][3]=S138[2][1]*SG80[1][3] + S138[2][2]*SG80[2][3] + S138[2][3]*SG80[3][3];

SG130[3][1]=S138[3][1]*SG80[1][1] + S138[3][2]*SG80[2][1] + S138[3][3]*SG80[3][1];
SG130[3][2]=S138[3][1]*SG80[1][2] + S138[3][2]*SG80[2][2] + S138[3][3]*SG80[3][2];
SG130[3][3]=S138[3][1]*SG80[1][3] + S138[3][2]*SG80[2][3] + S138[3][3]*SG80[3][3];


SG140[1][1]=S142[1][1]*SG20[1][1] + S142[1][3]*SG20[3][1];
SG140[1][2]=S142[1][1]*SG20[1][2] + S142[1][3]*SG20[3][2];
SG140[1][3]=S142[1][1]*SG20[1][3] + S142[1][3]*SG20[3][3];

SG140[2][1]=S142[2][1]*SG20[1][1] + S142[2][3]*SG20[3][1];
SG140[2][2]=S142[2][1]*SG20[1][2] + S142[2][3]*SG20[3][2];
SG140[2][3]=S142[2][1]*SG20[1][3] + S142[2][3]*SG20[3][3];

SG140[3][1]=SG20[2][1];
SG140[3][2]=SG20[2][2];
SG140[3][3]=SG20[2][3];


SG150[1][1]=S1514[1][1]*SG140[1][1] + S1514[1][3]*SG140[3][1];
SG150[1][2]=S1514[1][1]*SG140[1][2] + S1514[1][3]*SG140[3][2];
SG150[1][3]=S1514[1][1]*SG140[1][3] + S1514[1][3]*SG140[3][3];

SG150[2][1]=S1514[2][1]*SG140[1][1] + S1514[2][3]*SG140[3][1];
SG150[2][2]=S1514[2][1]*SG140[1][2] + S1514[2][3]*SG140[3][2];
SG150[2][3]=S1514[2][1]*SG140[1][3] + S1514[2][3]*SG140[3][3];

SG150[3][1]=-SG140[2][1];
SG150[3][2]=-SG140[2][2];
SG150[3][3]=-SG140[2][3];


SG160[1][1]=S1615[1][1]*SG150[1][1] + S1615[1][3]*SG150[3][1];
SG160[1][2]=S1615[1][1]*SG150[1][2] + S1615[1][3]*SG150[3][2];
SG160[1][3]=S1615[1][1]*SG150[1][3] + S1615[1][3]*SG150[3][3];

SG160[2][1]=S1615[2][1]*SG150[1][1] + S1615[2][3]*SG150[3][1];
SG160[2][2]=S1615[2][1]*SG150[1][2] + S1615[2][3]*SG150[3][2];
SG160[2][3]=S1615[2][1]*SG150[1][3] + S1615[2][3]*SG150[3][3];

SG160[3][1]=-SG150[2][1];
SG160[3][2]=-SG150[2][2];
SG160[3][3]=-SG150[2][3];


SG170[1][1]=S1716[1][1]*SG160[1][1] + S1716[1][2]*SG160[2][1];
SG170[1][2]=S1716[1][1]*SG160[1][2] + S1716[1][2]*SG160[2][2];
SG170[1][3]=S1716[1][1]*SG160[1][3] + S1716[1][2]*SG160[2][3];

SG170[2][1]=S1716[2][1]*SG160[1][1] + S1716[2][2]*SG160[2][1];
SG170[2][2]=S1716[2][1]*SG160[1][2] + S1716[2][2]*SG160[2][2];
SG170[2][3]=S1716[2][1]*SG160[1][3] + S1716[2][2]*SG160[2][3];

SG170[3][1]=SG160[3][1];
SG170[3][2]=SG160[3][2];
SG170[3][3]=SG160[3][3];


SG180[1][1]=S1817[1][1]*SG170[1][1] + S1817[1][2]*SG170[2][1];
SG180[1][2]=S1817[1][1]*SG170[1][2] + S1817[1][2]*SG170[2][2];
SG180[1][3]=S1817[1][1]*SG170[1][3] + S1817[1][2]*SG170[2][3];

SG180[2][1]=S1817[2][1]*SG170[1][1] + S1817[2][2]*SG170[2][1];
SG180[2][2]=S1817[2][1]*SG170[1][2] + S1817[2][2]*SG170[2][2];
SG180[2][3]=S1817[2][1]*SG170[1][3] + S1817[2][2]*SG170[2][3];

SG180[3][1]=SG170[3][1];
SG180[3][2]=SG170[3][2];
SG180[3][3]=SG170[3][3];


SG190[1][1]=S1918[1][1]*SG180[1][1] + S1918[1][3]*SG180[3][1];
SG190[1][2]=S1918[1][1]*SG180[1][2] + S1918[1][3]*SG180[3][2];
SG190[1][3]=S1918[1][1]*SG180[1][3] + S1918[1][3]*SG180[3][3];

SG190[2][1]=S1918[2][1]*SG180[1][1] + S1918[2][3]*SG180[3][1];
SG190[2][2]=S1918[2][1]*SG180[1][2] + S1918[2][3]*SG180[3][2];
SG190[2][3]=S1918[2][1]*SG180[1][3] + S1918[2][3]*SG180[3][3];

SG190[3][1]=SG180[2][1];
SG190[3][2]=SG180[2][2];
SG190[3][3]=SG180[2][3];


SG200[1][1]=SG190[1][1];
SG200[1][2]=SG190[1][2];
SG200[1][3]=SG190[1][3];

SG200[2][1]=SG190[2][1];
SG200[2][2]=SG190[2][2];
SG200[2][3]=SG190[2][3];

SG200[3][1]=SG190[3][1];
SG200[3][2]=SG190[3][2];
SG200[3][3]=SG190[3][3];


SG210[1][1]=SG190[1][1];
SG210[1][2]=SG190[1][2];
SG210[1][3]=SG190[1][3];

SG210[2][1]=SG190[2][1];
SG210[2][2]=SG190[2][2];
SG210[2][3]=SG190[2][3];

SG210[3][1]=SG190[3][1];
SG210[3][2]=SG190[3][2];
SG210[3][3]=SG190[3][3];


SG220[1][1]=SG190[1][1];
SG220[1][2]=SG190[1][2];
SG220[1][3]=SG190[1][3];

SG220[2][1]=SG190[2][1];
SG220[2][2]=SG190[2][2];
SG220[2][3]=SG190[2][3];

SG220[3][1]=SG190[3][1];
SG220[3][2]=SG190[3][2];
SG220[3][3]=SG190[3][3];


SG230[1][1]=SG190[1][1];
SG230[1][2]=SG190[1][2];
SG230[1][3]=SG190[1][3];

SG230[2][1]=SG190[2][1];
SG230[2][2]=SG190[2][2];
SG230[2][3]=SG190[2][3];

SG230[3][1]=SG190[3][1];
SG230[3][2]=SG190[3][2];
SG230[3][3]=SG190[3][3];


SG240[1][1]=S2419[1][1]*SG190[1][1] + S2419[1][2]*SG190[2][1] + S2419[1][3]*SG190[3][1];
SG240[1][2]=S2419[1][1]*SG190[1][2] + S2419[1][2]*SG190[2][2] + S2419[1][3]*SG190[3][2];
SG240[1][3]=S2419[1][1]*SG190[1][3] + S2419[1][2]*SG190[2][3] + S2419[1][3]*SG190[3][3];

SG240[2][1]=S2419[2][1]*SG190[1][1] + S2419[2][2]*SG190[2][1] + S2419[2][3]*SG190[3][1];
SG240[2][2]=S2419[2][1]*SG190[1][2] + S2419[2][2]*SG190[2][2] + S2419[2][3]*SG190[3][2];
SG240[2][3]=S2419[2][1]*SG190[1][3] + S2419[2][2]*SG190[2][3] + S2419[2][3]*SG190[3][3];

SG240[3][1]=S2419[3][1]*SG190[1][1] + S2419[3][2]*SG190[2][1] + S2419[3][3]*SG190[3][1];
SG240[3][2]=S2419[3][1]*SG190[1][2] + S2419[3][2]*SG190[2][2] + S2419[3][3]*SG190[3][2];
SG240[3][3]=S2419[3][1]*SG190[1][3] + S2419[3][2]*SG190[2][3] + S2419[3][3]*SG190[3][3];




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

v2[1]=v0[1]*S20[1][1] + v0[3]*S20[1][3];
v2[2]=v0[1]*S20[2][1] + v0[3]*S20[2][3];
v2[3]=state[13].thd - v0[2];
v2[4]=v0[4]*S20[1][1] - BODYLINK2*v0[2]*S20[1][3] + v0[6]*S20[1][3];
v2[5]=v0[4]*S20[2][1] - BODYLINK2*v0[2]*S20[2][3] + v0[6]*S20[2][3];
v2[6]=-(BODYLINK2*v0[3]) - v0[5];

v3[1]=v2[1]*S32[1][1] + v2[3]*S32[1][3];
v3[2]=v2[1]*S32[2][1] + v2[3]*S32[2][3];
v3[3]=state[1].thd + v2[2];
v3[4]=WAISTLINK1*v2[3]*S32[1][1] + v2[4]*S32[1][1] - WAISTLINK1*v2[1]*S32[1][3] + v2[6]*S32[1][3] + v2[2]*(LEGLINK1*S32[1][1] + WAISTLINK2*S32[1][3]);
v3[5]=WAISTLINK1*v2[3]*S32[2][1] + v2[4]*S32[2][1] - WAISTLINK1*v2[1]*S32[2][3] + v2[6]*S32[2][3] + v2[2]*(LEGLINK1*S32[2][1] + WAISTLINK2*S32[2][3]);
v3[6]=-(LEGLINK1*v2[1]) - WAISTLINK2*v2[3] + v2[5];

v4[1]=v3[1]*S43[1][1] + v3[3]*S43[1][3];
v4[2]=v3[1]*S43[2][1] + v3[3]*S43[2][3];
v4[3]=state[2].thd - v3[2];
v4[4]=v3[4]*S43[1][1] + v3[6]*S43[1][3];
v4[5]=v3[4]*S43[2][1] + v3[6]*S43[2][3];
v4[6]=-v3[5];

v5[1]=v4[1]*S54[1][1] + v4[3]*S54[1][3];
v5[2]=v4[1]*S54[2][1] + v4[3]*S54[2][3];
v5[3]=state[3].thd - v4[2];
v5[4]=v4[4]*S54[1][1] + v4[6]*S54[1][3];
v5[5]=v4[4]*S54[2][1] + v4[6]*S54[2][3];
v5[6]=-v4[5];

v6[1]=v5[1]*S65[1][1] + v5[2]*S65[1][2];
v6[2]=v5[1]*S65[2][1] + v5[2]*S65[2][2];
v6[3]=state[4].thd + v5[3];
v6[4]=v5[4]*S65[1][1] - LEGLINK2*v5[3]*S65[1][2] + v5[5]*S65[1][2];
v6[5]=v5[4]*S65[2][1] - LEGLINK2*v5[3]*S65[2][2] + v5[5]*S65[2][2];
v6[6]=LEGLINK2*v5[2] + v5[6];

v7[1]=v6[1]*S76[1][1] + v6[2]*S76[1][2];
v7[2]=v6[1]*S76[2][1] + v6[2]*S76[2][2];
v7[3]=state[5].thd + v6[3];
v7[4]=v6[4]*S76[1][1] - LEGLINK3*v6[3]*S76[1][2] + v6[5]*S76[1][2];
v7[5]=v6[4]*S76[2][1] - LEGLINK3*v6[3]*S76[2][2] + v6[5]*S76[2][2];
v7[6]=LEGLINK3*v6[2] + v6[6];

v8[1]=v7[1]*S87[1][1] + v7[3]*S87[1][3];
v8[2]=v7[1]*S87[2][1] + v7[3]*S87[2][3];
v8[3]=state[6].thd + v7[2];
v8[4]=v7[4]*S87[1][1] + v7[6]*S87[1][3];
v8[5]=v7[4]*S87[2][1] + v7[6]*S87[2][3];
v8[6]=v7[5];

v9[1]=v8[1];
v9[2]=v8[2];
v9[3]=v8[3];
v9[4]=FOOTLLENGLONG*v8[2] + FOOTWIDLONG*v8[3] + v8[4];
v9[5]=-(FOOTLLENGLONG*v8[1]) - LEGLINK4*v8[3] + v8[5];
v9[6]=-(FOOTWIDLONG*v8[1]) + LEGLINK4*v8[2] + v8[6];

v10[1]=v8[1];
v10[2]=v8[2];
v10[3]=v8[3];
v10[4]=FOOTLLENGLONG*v8[2] - FOOTWIDSHORT*v8[3] + v8[4];
v10[5]=-(FOOTLLENGLONG*v8[1]) - LEGLINK4*v8[3] + v8[5];
v10[6]=FOOTWIDSHORT*v8[1] + LEGLINK4*v8[2] + v8[6];

v11[1]=v8[1];
v11[2]=v8[2];
v11[3]=v8[3];
v11[4]=-(FOOTLENGSHORT*v8[2]) - FOOTWIDSHORT*v8[3] + v8[4];
v11[5]=FOOTLENGSHORT*v8[1] - LEGLINK4*v8[3] + v8[5];
v11[6]=FOOTWIDSHORT*v8[1] + LEGLINK4*v8[2] + v8[6];

v12[1]=v8[1];
v12[2]=v8[2];
v12[3]=v8[3];
v12[4]=-(FOOTLENGSHORT*v8[2]) + FOOTWIDLONG*v8[3] + v8[4];
v12[5]=FOOTLENGSHORT*v8[1] - LEGLINK4*v8[3] + v8[5];
v12[6]=-(FOOTWIDLONG*v8[1]) + LEGLINK4*v8[2] + v8[6];

v13[1]=v8[1]*S138[1][1] + v8[2]*S138[1][2] + v8[3]*S138[1][3];
v13[2]=v8[1]*S138[2][1] + v8[2]*S138[2][2] + v8[3]*S138[2][3];
v13[3]=v8[1]*S138[3][1] + v8[2]*S138[3][2] + v8[3]*S138[3][3];
v13[4]=v8[4]*S138[1][1] + v8[5]*S138[1][2] + v8[3]*(-(eff[1].x[2]*S138[1][1]) + eff[1].x[1]*S138[1][2]) + v8[6]*S138[1][3] + v8[2]*(eff[1].x[3]*S138[1][1] - eff[1].x[1]*S138[1][3]) + v8[1]*(-(eff[1].x[3]*S138[1][2]) + eff[1].x[2]*S138[1][3]);
v13[5]=v8[4]*S138[2][1] + v8[5]*S138[2][2] + v8[3]*(-(eff[1].x[2]*S138[2][1]) + eff[1].x[1]*S138[2][2]) + v8[6]*S138[2][3] + v8[2]*(eff[1].x[3]*S138[2][1] - eff[1].x[1]*S138[2][3]) + v8[1]*(-(eff[1].x[3]*S138[2][2]) + eff[1].x[2]*S138[2][3]);
v13[6]=v8[4]*S138[3][1] + v8[5]*S138[3][2] + v8[3]*(-(eff[1].x[2]*S138[3][1]) + eff[1].x[1]*S138[3][2]) + v8[6]*S138[3][3] + v8[2]*(eff[1].x[3]*S138[3][1] - eff[1].x[1]*S138[3][3]) + v8[1]*(-(eff[1].x[3]*S138[3][2]) + eff[1].x[2]*S138[3][3]);

v14[1]=v2[1]*S142[1][1] + v2[3]*S142[1][3];
v14[2]=v2[1]*S142[2][1] + v2[3]*S142[2][3];
v14[3]=state[7].thd + v2[2];
v14[4]=WAISTLINK1*v2[3]*S142[1][1] + v2[4]*S142[1][1] - WAISTLINK1*v2[1]*S142[1][3] + v2[6]*S142[1][3] + v2[2]*(-(LEGLINK1*S142[1][1]) + WAISTLINK2*S142[1][3]);
v14[5]=WAISTLINK1*v2[3]*S142[2][1] + v2[4]*S142[2][1] - WAISTLINK1*v2[1]*S142[2][3] + v2[6]*S142[2][3] + v2[2]*(-(LEGLINK1*S142[2][1]) + WAISTLINK2*S142[2][3]);
v14[6]=LEGLINK1*v2[1] - WAISTLINK2*v2[3] + v2[5];

v15[1]=v14[1]*S1514[1][1] + v14[3]*S1514[1][3];
v15[2]=v14[1]*S1514[2][1] + v14[3]*S1514[2][3];
v15[3]=state[8].thd - v14[2];
v15[4]=v14[4]*S1514[1][1] + v14[6]*S1514[1][3];
v15[5]=v14[4]*S1514[2][1] + v14[6]*S1514[2][3];
v15[6]=-v14[5];

v16[1]=v15[1]*S1615[1][1] + v15[3]*S1615[1][3];
v16[2]=v15[1]*S1615[2][1] + v15[3]*S1615[2][3];
v16[3]=state[9].thd - v15[2];
v16[4]=v15[4]*S1615[1][1] + v15[6]*S1615[1][3];
v16[5]=v15[4]*S1615[2][1] + v15[6]*S1615[2][3];
v16[6]=-v15[5];

v17[1]=v16[1]*S1716[1][1] + v16[2]*S1716[1][2];
v17[2]=v16[1]*S1716[2][1] + v16[2]*S1716[2][2];
v17[3]=state[10].thd + v16[3];
v17[4]=v16[4]*S1716[1][1] - LEGLINK2*v16[3]*S1716[1][2] + v16[5]*S1716[1][2];
v17[5]=v16[4]*S1716[2][1] - LEGLINK2*v16[3]*S1716[2][2] + v16[5]*S1716[2][2];
v17[6]=LEGLINK2*v16[2] + v16[6];

v18[1]=v17[1]*S1817[1][1] + v17[2]*S1817[1][2];
v18[2]=v17[1]*S1817[2][1] + v17[2]*S1817[2][2];
v18[3]=state[11].thd + v17[3];
v18[4]=v17[4]*S1817[1][1] - LEGLINK3*v17[3]*S1817[1][2] + v17[5]*S1817[1][2];
v18[5]=v17[4]*S1817[2][1] - LEGLINK3*v17[3]*S1817[2][2] + v17[5]*S1817[2][2];
v18[6]=LEGLINK3*v17[2] + v17[6];

v19[1]=v18[1]*S1918[1][1] + v18[3]*S1918[1][3];
v19[2]=v18[1]*S1918[2][1] + v18[3]*S1918[2][3];
v19[3]=state[12].thd + v18[2];
v19[4]=v18[4]*S1918[1][1] + v18[6]*S1918[1][3];
v19[5]=v18[4]*S1918[2][1] + v18[6]*S1918[2][3];
v19[6]=v18[5];

v20[1]=v19[1];
v20[2]=v19[2];
v20[3]=v19[3];
v20[4]=FOOTLLENGLONG*v19[2] - FOOTWIDLONG*v19[3] + v19[4];
v20[5]=-(FOOTLLENGLONG*v19[1]) - LEGLINK4*v19[3] + v19[5];
v20[6]=FOOTWIDLONG*v19[1] + LEGLINK4*v19[2] + v19[6];

v21[1]=v19[1];
v21[2]=v19[2];
v21[3]=v19[3];
v21[4]=FOOTLLENGLONG*v19[2] + FOOTWIDSHORT*v19[3] + v19[4];
v21[5]=-(FOOTLLENGLONG*v19[1]) - LEGLINK4*v19[3] + v19[5];
v21[6]=-(FOOTWIDSHORT*v19[1]) + LEGLINK4*v19[2] + v19[6];

v22[1]=v19[1];
v22[2]=v19[2];
v22[3]=v19[3];
v22[4]=-(FOOTLENGSHORT*v19[2]) + FOOTWIDSHORT*v19[3] + v19[4];
v22[5]=FOOTLENGSHORT*v19[1] - LEGLINK4*v19[3] + v19[5];
v22[6]=-(FOOTWIDSHORT*v19[1]) + LEGLINK4*v19[2] + v19[6];

v23[1]=v19[1];
v23[2]=v19[2];
v23[3]=v19[3];
v23[4]=-(FOOTLENGSHORT*v19[2]) - FOOTWIDLONG*v19[3] + v19[4];
v23[5]=FOOTLENGSHORT*v19[1] - LEGLINK4*v19[3] + v19[5];
v23[6]=FOOTWIDLONG*v19[1] + LEGLINK4*v19[2] + v19[6];

v24[1]=v19[1]*S2419[1][1] + v19[2]*S2419[1][2] + v19[3]*S2419[1][3];
v24[2]=v19[1]*S2419[2][1] + v19[2]*S2419[2][2] + v19[3]*S2419[2][3];
v24[3]=v19[1]*S2419[3][1] + v19[2]*S2419[3][2] + v19[3]*S2419[3][3];
v24[4]=v19[4]*S2419[1][1] + v19[5]*S2419[1][2] + v19[3]*(-(eff[2].x[2]*S2419[1][1]) + eff[2].x[1]*S2419[1][2]) + v19[6]*S2419[1][3] + v19[2]*(eff[2].x[3]*S2419[1][1] - eff[2].x[1]*S2419[1][3]) + v19[1]*(-(eff[2].x[3]*S2419[1][2]) + eff[2].x[2]*S2419[1][3]);
v24[5]=v19[4]*S2419[2][1] + v19[5]*S2419[2][2] + v19[3]*(-(eff[2].x[2]*S2419[2][1]) + eff[2].x[1]*S2419[2][2]) + v19[6]*S2419[2][3] + v19[2]*(eff[2].x[3]*S2419[2][1] - eff[2].x[1]*S2419[2][3]) + v19[1]*(-(eff[2].x[3]*S2419[2][2]) + eff[2].x[2]*S2419[2][3]);
v24[6]=v19[4]*S2419[3][1] + v19[5]*S2419[3][2] + v19[3]*(-(eff[2].x[2]*S2419[3][1]) + eff[2].x[1]*S2419[3][2]) + v19[6]*S2419[3][3] + v19[2]*(eff[2].x[3]*S2419[3][1] - eff[2].x[1]*S2419[3][3]) + v19[1]*(-(eff[2].x[3]*S2419[3][2]) + eff[2].x[2]*S2419[3][3]);



}


void
hoap3_InvDynArtfunc5(void)
     {
/* c-misc vectors */
c2[1]=state[13].thd*v2[2];
c2[2]=-(state[13].thd*v2[1]);
c2[4]=state[13].thd*v2[5];
c2[5]=-(state[13].thd*v2[4]);

c3[1]=state[1].thd*v3[2];
c3[2]=-(state[1].thd*v3[1]);
c3[4]=state[1].thd*v3[5];
c3[5]=-(state[1].thd*v3[4]);

c4[1]=state[2].thd*v4[2];
c4[2]=-(state[2].thd*v4[1]);
c4[4]=state[2].thd*v4[5];
c4[5]=-(state[2].thd*v4[4]);

c5[1]=state[3].thd*v5[2];
c5[2]=-(state[3].thd*v5[1]);
c5[4]=state[3].thd*v5[5];
c5[5]=-(state[3].thd*v5[4]);

c6[1]=state[4].thd*v6[2];
c6[2]=-(state[4].thd*v6[1]);
c6[4]=state[4].thd*v6[5];
c6[5]=-(state[4].thd*v6[4]);

c7[1]=state[5].thd*v7[2];
c7[2]=-(state[5].thd*v7[1]);
c7[4]=state[5].thd*v7[5];
c7[5]=-(state[5].thd*v7[4]);

c8[1]=state[6].thd*v8[2];
c8[2]=-(state[6].thd*v8[1]);
c8[4]=state[6].thd*v8[5];
c8[5]=-(state[6].thd*v8[4]);

c14[1]=state[7].thd*v14[2];
c14[2]=-(state[7].thd*v14[1]);
c14[4]=state[7].thd*v14[5];
c14[5]=-(state[7].thd*v14[4]);

c15[1]=state[8].thd*v15[2];
c15[2]=-(state[8].thd*v15[1]);
c15[4]=state[8].thd*v15[5];
c15[5]=-(state[8].thd*v15[4]);

c16[1]=state[9].thd*v16[2];
c16[2]=-(state[9].thd*v16[1]);
c16[4]=state[9].thd*v16[5];
c16[5]=-(state[9].thd*v16[4]);

c17[1]=state[10].thd*v17[2];
c17[2]=-(state[10].thd*v17[1]);
c17[4]=state[10].thd*v17[5];
c17[5]=-(state[10].thd*v17[4]);

c18[1]=state[11].thd*v18[2];
c18[2]=-(state[11].thd*v18[1]);
c18[4]=state[11].thd*v18[5];
c18[5]=-(state[11].thd*v18[4]);

c19[1]=state[12].thd*v19[2];
c19[2]=-(state[12].thd*v19[1]);
c19[4]=state[12].thd*v19[5];
c19[5]=-(state[12].thd*v19[4]);



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

pv2[1]=-uex[13].f[1] - links[13].mcm[1]*Power(v2[2],2) - links[13].mcm[1]*Power(v2[3],2) + v2[1]*(links[13].mcm[2]*v2[2] + links[13].mcm[3]*v2[3]) - links[13].m*v2[3]*v2[5] + links[13].m*v2[2]*v2[6] + gravity*links[13].m*SG20[1][3];
pv2[2]=-uex[13].f[2] - links[13].mcm[2]*Power(v2[1],2) - links[13].mcm[2]*Power(v2[3],2) + v2[2]*(links[13].mcm[1]*v2[1] + links[13].mcm[3]*v2[3]) + links[13].m*v2[3]*v2[4] - links[13].m*v2[1]*v2[6] + gravity*links[13].m*SG20[2][3];
pv2[3]=-uex[13].f[3] - links[13].mcm[3]*Power(v2[1],2) - links[13].mcm[3]*Power(v2[2],2) + (links[13].mcm[1]*v2[1] + links[13].mcm[2]*v2[2])*v2[3] - links[13].m*v2[2]*v2[4] + links[13].m*v2[1]*v2[5] + gravity*links[13].m*SG20[3][3];
pv2[4]=-uex[13].t[1] + (-(links[13].mcm[2]*v2[2]) - links[13].mcm[3]*v2[3])*v2[4] + (links[13].mcm[1]*v2[3] + links[13].m*v2[5])*v2[6] + v2[5]*(links[13].mcm[1]*v2[2] - links[13].m*v2[6]) + v2[1]*(links[13].mcm[2]*v2[5] + links[13].mcm[3]*v2[6] - v2[3]*links[13].inertia[1][2] + v2[2]*links[13].inertia[1][3]) + v2[2]*(-(links[13].mcm[1]*v2[5]) - v2[3]*links[13].inertia[2][2] + v2[2]*links[13].inertia[2][3]) + v2[3]*(-(links[13].mcm[1]*v2[6]) - v2[3]*links[13].inertia[2][3] + v2[2]*links[13].inertia[3][3]) - gravity*links[13].mcm[3]*SG20[2][3] + gravity*links[13].mcm[2]*SG20[3][3];
pv2[5]=-uex[13].t[2] + (-(links[13].mcm[1]*v2[1]) - links[13].mcm[3]*v2[3])*v2[5] + (links[13].mcm[2]*v2[3] - links[13].m*v2[4])*v2[6] + v2[4]*(links[13].mcm[2]*v2[1] + links[13].m*v2[6]) + v2[1]*(-(links[13].mcm[2]*v2[4]) + v2[3]*links[13].inertia[1][1] - v2[1]*links[13].inertia[1][3]) + v2[2]*(links[13].mcm[1]*v2[4] + links[13].mcm[3]*v2[6] + v2[3]*links[13].inertia[1][2] - v2[1]*links[13].inertia[2][3]) + v2[3]*(-(links[13].mcm[2]*v2[6]) + v2[3]*links[13].inertia[1][3] - v2[1]*links[13].inertia[3][3]) + gravity*links[13].mcm[3]*SG20[1][3] - gravity*links[13].mcm[1]*SG20[3][3];
pv2[6]=-uex[13].t[3] + (links[13].mcm[3]*v2[2] + links[13].m*v2[4])*v2[5] + v2[4]*(links[13].mcm[3]*v2[1] - links[13].m*v2[5]) + (-(links[13].mcm[1]*v2[1]) - links[13].mcm[2]*v2[2])*v2[6] + v2[1]*(-(links[13].mcm[3]*v2[4]) - v2[2]*links[13].inertia[1][1] + v2[1]*links[13].inertia[1][2]) + v2[2]*(-(links[13].mcm[3]*v2[5]) - v2[2]*links[13].inertia[1][2] + v2[1]*links[13].inertia[2][2]) + v2[3]*(links[13].mcm[1]*v2[4] + links[13].mcm[2]*v2[5] - v2[2]*links[13].inertia[1][3] + v2[1]*links[13].inertia[2][3]) - gravity*links[13].mcm[2]*SG20[1][3] + gravity*links[13].mcm[1]*SG20[2][3];

pv3[1]=-uex[1].f[1] - links[1].mcm[1]*Power(v3[2],2) - links[1].mcm[1]*Power(v3[3],2) + v3[1]*(links[1].mcm[2]*v3[2] + links[1].mcm[3]*v3[3]) - links[1].m*v3[3]*v3[5] + links[1].m*v3[2]*v3[6] + gravity*links[1].m*SG30[1][3];
pv3[2]=-uex[1].f[2] - links[1].mcm[2]*Power(v3[1],2) - links[1].mcm[2]*Power(v3[3],2) + v3[2]*(links[1].mcm[1]*v3[1] + links[1].mcm[3]*v3[3]) + links[1].m*v3[3]*v3[4] - links[1].m*v3[1]*v3[6] + gravity*links[1].m*SG30[2][3];
pv3[3]=-uex[1].f[3] - links[1].mcm[3]*Power(v3[1],2) - links[1].mcm[3]*Power(v3[2],2) + (links[1].mcm[1]*v3[1] + links[1].mcm[2]*v3[2])*v3[3] - links[1].m*v3[2]*v3[4] + links[1].m*v3[1]*v3[5] + gravity*links[1].m*SG30[3][3];
pv3[4]=-uex[1].t[1] + (-(links[1].mcm[2]*v3[2]) - links[1].mcm[3]*v3[3])*v3[4] + (links[1].mcm[1]*v3[3] + links[1].m*v3[5])*v3[6] + v3[5]*(links[1].mcm[1]*v3[2] - links[1].m*v3[6]) + v3[1]*(links[1].mcm[2]*v3[5] + links[1].mcm[3]*v3[6] - v3[3]*links[1].inertia[1][2] + v3[2]*links[1].inertia[1][3]) + v3[2]*(-(links[1].mcm[1]*v3[5]) - v3[3]*links[1].inertia[2][2] + v3[2]*links[1].inertia[2][3]) + v3[3]*(-(links[1].mcm[1]*v3[6]) - v3[3]*links[1].inertia[2][3] + v3[2]*links[1].inertia[3][3]) - gravity*links[1].mcm[3]*SG30[2][3] + gravity*links[1].mcm[2]*SG30[3][3];
pv3[5]=-uex[1].t[2] + (-(links[1].mcm[1]*v3[1]) - links[1].mcm[3]*v3[3])*v3[5] + (links[1].mcm[2]*v3[3] - links[1].m*v3[4])*v3[6] + v3[4]*(links[1].mcm[2]*v3[1] + links[1].m*v3[6]) + v3[1]*(-(links[1].mcm[2]*v3[4]) + v3[3]*links[1].inertia[1][1] - v3[1]*links[1].inertia[1][3]) + v3[2]*(links[1].mcm[1]*v3[4] + links[1].mcm[3]*v3[6] + v3[3]*links[1].inertia[1][2] - v3[1]*links[1].inertia[2][3]) + v3[3]*(-(links[1].mcm[2]*v3[6]) + v3[3]*links[1].inertia[1][3] - v3[1]*links[1].inertia[3][3]) + gravity*links[1].mcm[3]*SG30[1][3] - gravity*links[1].mcm[1]*SG30[3][3];
pv3[6]=-uex[1].t[3] + (links[1].mcm[3]*v3[2] + links[1].m*v3[4])*v3[5] + v3[4]*(links[1].mcm[3]*v3[1] - links[1].m*v3[5]) + (-(links[1].mcm[1]*v3[1]) - links[1].mcm[2]*v3[2])*v3[6] + v3[1]*(-(links[1].mcm[3]*v3[4]) - v3[2]*links[1].inertia[1][1] + v3[1]*links[1].inertia[1][2]) + v3[2]*(-(links[1].mcm[3]*v3[5]) - v3[2]*links[1].inertia[1][2] + v3[1]*links[1].inertia[2][2]) + v3[3]*(links[1].mcm[1]*v3[4] + links[1].mcm[2]*v3[5] - v3[2]*links[1].inertia[1][3] + v3[1]*links[1].inertia[2][3]) - gravity*links[1].mcm[2]*SG30[1][3] + gravity*links[1].mcm[1]*SG30[2][3];

pv4[1]=-uex[2].f[1] - links[2].mcm[1]*Power(v4[2],2) - links[2].mcm[1]*Power(v4[3],2) + v4[1]*(links[2].mcm[2]*v4[2] + links[2].mcm[3]*v4[3]) - links[2].m*v4[3]*v4[5] + links[2].m*v4[2]*v4[6] + gravity*links[2].m*SG40[1][3];
pv4[2]=-uex[2].f[2] - links[2].mcm[2]*Power(v4[1],2) - links[2].mcm[2]*Power(v4[3],2) + v4[2]*(links[2].mcm[1]*v4[1] + links[2].mcm[3]*v4[3]) + links[2].m*v4[3]*v4[4] - links[2].m*v4[1]*v4[6] + gravity*links[2].m*SG40[2][3];
pv4[3]=-uex[2].f[3] - links[2].mcm[3]*Power(v4[1],2) - links[2].mcm[3]*Power(v4[2],2) + (links[2].mcm[1]*v4[1] + links[2].mcm[2]*v4[2])*v4[3] - links[2].m*v4[2]*v4[4] + links[2].m*v4[1]*v4[5] + gravity*links[2].m*SG40[3][3];
pv4[4]=-uex[2].t[1] + (-(links[2].mcm[2]*v4[2]) - links[2].mcm[3]*v4[3])*v4[4] + (links[2].mcm[1]*v4[3] + links[2].m*v4[5])*v4[6] + v4[5]*(links[2].mcm[1]*v4[2] - links[2].m*v4[6]) + v4[1]*(links[2].mcm[2]*v4[5] + links[2].mcm[3]*v4[6] - v4[3]*links[2].inertia[1][2] + v4[2]*links[2].inertia[1][3]) + v4[2]*(-(links[2].mcm[1]*v4[5]) - v4[3]*links[2].inertia[2][2] + v4[2]*links[2].inertia[2][3]) + v4[3]*(-(links[2].mcm[1]*v4[6]) - v4[3]*links[2].inertia[2][3] + v4[2]*links[2].inertia[3][3]) - gravity*links[2].mcm[3]*SG40[2][3] + gravity*links[2].mcm[2]*SG40[3][3];
pv4[5]=-uex[2].t[2] + (-(links[2].mcm[1]*v4[1]) - links[2].mcm[3]*v4[3])*v4[5] + (links[2].mcm[2]*v4[3] - links[2].m*v4[4])*v4[6] + v4[4]*(links[2].mcm[2]*v4[1] + links[2].m*v4[6]) + v4[1]*(-(links[2].mcm[2]*v4[4]) + v4[3]*links[2].inertia[1][1] - v4[1]*links[2].inertia[1][3]) + v4[2]*(links[2].mcm[1]*v4[4] + links[2].mcm[3]*v4[6] + v4[3]*links[2].inertia[1][2] - v4[1]*links[2].inertia[2][3]) + v4[3]*(-(links[2].mcm[2]*v4[6]) + v4[3]*links[2].inertia[1][3] - v4[1]*links[2].inertia[3][3]) + gravity*links[2].mcm[3]*SG40[1][3] - gravity*links[2].mcm[1]*SG40[3][3];
pv4[6]=-uex[2].t[3] + (links[2].mcm[3]*v4[2] + links[2].m*v4[4])*v4[5] + v4[4]*(links[2].mcm[3]*v4[1] - links[2].m*v4[5]) + (-(links[2].mcm[1]*v4[1]) - links[2].mcm[2]*v4[2])*v4[6] + v4[1]*(-(links[2].mcm[3]*v4[4]) - v4[2]*links[2].inertia[1][1] + v4[1]*links[2].inertia[1][2]) + v4[2]*(-(links[2].mcm[3]*v4[5]) - v4[2]*links[2].inertia[1][2] + v4[1]*links[2].inertia[2][2]) + v4[3]*(links[2].mcm[1]*v4[4] + links[2].mcm[2]*v4[5] - v4[2]*links[2].inertia[1][3] + v4[1]*links[2].inertia[2][3]) - gravity*links[2].mcm[2]*SG40[1][3] + gravity*links[2].mcm[1]*SG40[2][3];

pv5[1]=-uex[3].f[1] - links[3].mcm[1]*Power(v5[2],2) - links[3].mcm[1]*Power(v5[3],2) + v5[1]*(links[3].mcm[2]*v5[2] + links[3].mcm[3]*v5[3]) - links[3].m*v5[3]*v5[5] + links[3].m*v5[2]*v5[6] + gravity*links[3].m*SG50[1][3];
pv5[2]=-uex[3].f[2] - links[3].mcm[2]*Power(v5[1],2) - links[3].mcm[2]*Power(v5[3],2) + v5[2]*(links[3].mcm[1]*v5[1] + links[3].mcm[3]*v5[3]) + links[3].m*v5[3]*v5[4] - links[3].m*v5[1]*v5[6] + gravity*links[3].m*SG50[2][3];
pv5[3]=-uex[3].f[3] - links[3].mcm[3]*Power(v5[1],2) - links[3].mcm[3]*Power(v5[2],2) + (links[3].mcm[1]*v5[1] + links[3].mcm[2]*v5[2])*v5[3] - links[3].m*v5[2]*v5[4] + links[3].m*v5[1]*v5[5] + gravity*links[3].m*SG50[3][3];
pv5[4]=-uex[3].t[1] + (-(links[3].mcm[2]*v5[2]) - links[3].mcm[3]*v5[3])*v5[4] + (links[3].mcm[1]*v5[3] + links[3].m*v5[5])*v5[6] + v5[5]*(links[3].mcm[1]*v5[2] - links[3].m*v5[6]) + v5[1]*(links[3].mcm[2]*v5[5] + links[3].mcm[3]*v5[6] - v5[3]*links[3].inertia[1][2] + v5[2]*links[3].inertia[1][3]) + v5[2]*(-(links[3].mcm[1]*v5[5]) - v5[3]*links[3].inertia[2][2] + v5[2]*links[3].inertia[2][3]) + v5[3]*(-(links[3].mcm[1]*v5[6]) - v5[3]*links[3].inertia[2][3] + v5[2]*links[3].inertia[3][3]) - gravity*links[3].mcm[3]*SG50[2][3] + gravity*links[3].mcm[2]*SG50[3][3];
pv5[5]=-uex[3].t[2] + (-(links[3].mcm[1]*v5[1]) - links[3].mcm[3]*v5[3])*v5[5] + (links[3].mcm[2]*v5[3] - links[3].m*v5[4])*v5[6] + v5[4]*(links[3].mcm[2]*v5[1] + links[3].m*v5[6]) + v5[1]*(-(links[3].mcm[2]*v5[4]) + v5[3]*links[3].inertia[1][1] - v5[1]*links[3].inertia[1][3]) + v5[2]*(links[3].mcm[1]*v5[4] + links[3].mcm[3]*v5[6] + v5[3]*links[3].inertia[1][2] - v5[1]*links[3].inertia[2][3]) + v5[3]*(-(links[3].mcm[2]*v5[6]) + v5[3]*links[3].inertia[1][3] - v5[1]*links[3].inertia[3][3]) + gravity*links[3].mcm[3]*SG50[1][3] - gravity*links[3].mcm[1]*SG50[3][3];
pv5[6]=-uex[3].t[3] + (links[3].mcm[3]*v5[2] + links[3].m*v5[4])*v5[5] + v5[4]*(links[3].mcm[3]*v5[1] - links[3].m*v5[5]) + (-(links[3].mcm[1]*v5[1]) - links[3].mcm[2]*v5[2])*v5[6] + v5[1]*(-(links[3].mcm[3]*v5[4]) - v5[2]*links[3].inertia[1][1] + v5[1]*links[3].inertia[1][2]) + v5[2]*(-(links[3].mcm[3]*v5[5]) - v5[2]*links[3].inertia[1][2] + v5[1]*links[3].inertia[2][2]) + v5[3]*(links[3].mcm[1]*v5[4] + links[3].mcm[2]*v5[5] - v5[2]*links[3].inertia[1][3] + v5[1]*links[3].inertia[2][3]) - gravity*links[3].mcm[2]*SG50[1][3] + gravity*links[3].mcm[1]*SG50[2][3];

pv6[1]=-uex[4].f[1] - links[4].mcm[1]*Power(v6[2],2) - links[4].mcm[1]*Power(v6[3],2) + v6[1]*(links[4].mcm[2]*v6[2] + links[4].mcm[3]*v6[3]) - links[4].m*v6[3]*v6[5] + links[4].m*v6[2]*v6[6] + gravity*links[4].m*SG60[1][3];
pv6[2]=-uex[4].f[2] - links[4].mcm[2]*Power(v6[1],2) - links[4].mcm[2]*Power(v6[3],2) + v6[2]*(links[4].mcm[1]*v6[1] + links[4].mcm[3]*v6[3]) + links[4].m*v6[3]*v6[4] - links[4].m*v6[1]*v6[6] + gravity*links[4].m*SG60[2][3];
pv6[3]=-uex[4].f[3] - links[4].mcm[3]*Power(v6[1],2) - links[4].mcm[3]*Power(v6[2],2) + (links[4].mcm[1]*v6[1] + links[4].mcm[2]*v6[2])*v6[3] - links[4].m*v6[2]*v6[4] + links[4].m*v6[1]*v6[5] + gravity*links[4].m*SG60[3][3];
pv6[4]=-uex[4].t[1] + (-(links[4].mcm[2]*v6[2]) - links[4].mcm[3]*v6[3])*v6[4] + (links[4].mcm[1]*v6[3] + links[4].m*v6[5])*v6[6] + v6[5]*(links[4].mcm[1]*v6[2] - links[4].m*v6[6]) + v6[1]*(links[4].mcm[2]*v6[5] + links[4].mcm[3]*v6[6] - v6[3]*links[4].inertia[1][2] + v6[2]*links[4].inertia[1][3]) + v6[2]*(-(links[4].mcm[1]*v6[5]) - v6[3]*links[4].inertia[2][2] + v6[2]*links[4].inertia[2][3]) + v6[3]*(-(links[4].mcm[1]*v6[6]) - v6[3]*links[4].inertia[2][3] + v6[2]*links[4].inertia[3][3]) - gravity*links[4].mcm[3]*SG60[2][3] + gravity*links[4].mcm[2]*SG60[3][3];
pv6[5]=-uex[4].t[2] + (-(links[4].mcm[1]*v6[1]) - links[4].mcm[3]*v6[3])*v6[5] + (links[4].mcm[2]*v6[3] - links[4].m*v6[4])*v6[6] + v6[4]*(links[4].mcm[2]*v6[1] + links[4].m*v6[6]) + v6[1]*(-(links[4].mcm[2]*v6[4]) + v6[3]*links[4].inertia[1][1] - v6[1]*links[4].inertia[1][3]) + v6[2]*(links[4].mcm[1]*v6[4] + links[4].mcm[3]*v6[6] + v6[3]*links[4].inertia[1][2] - v6[1]*links[4].inertia[2][3]) + v6[3]*(-(links[4].mcm[2]*v6[6]) + v6[3]*links[4].inertia[1][3] - v6[1]*links[4].inertia[3][3]) + gravity*links[4].mcm[3]*SG60[1][3] - gravity*links[4].mcm[1]*SG60[3][3];
pv6[6]=-uex[4].t[3] + (links[4].mcm[3]*v6[2] + links[4].m*v6[4])*v6[5] + v6[4]*(links[4].mcm[3]*v6[1] - links[4].m*v6[5]) + (-(links[4].mcm[1]*v6[1]) - links[4].mcm[2]*v6[2])*v6[6] + v6[1]*(-(links[4].mcm[3]*v6[4]) - v6[2]*links[4].inertia[1][1] + v6[1]*links[4].inertia[1][2]) + v6[2]*(-(links[4].mcm[3]*v6[5]) - v6[2]*links[4].inertia[1][2] + v6[1]*links[4].inertia[2][2]) + v6[3]*(links[4].mcm[1]*v6[4] + links[4].mcm[2]*v6[5] - v6[2]*links[4].inertia[1][3] + v6[1]*links[4].inertia[2][3]) - gravity*links[4].mcm[2]*SG60[1][3] + gravity*links[4].mcm[1]*SG60[2][3];

pv7[1]=-uex[5].f[1] - links[5].mcm[1]*Power(v7[2],2) - links[5].mcm[1]*Power(v7[3],2) + v7[1]*(links[5].mcm[2]*v7[2] + links[5].mcm[3]*v7[3]) - links[5].m*v7[3]*v7[5] + links[5].m*v7[2]*v7[6] + gravity*links[5].m*SG70[1][3];
pv7[2]=-uex[5].f[2] - links[5].mcm[2]*Power(v7[1],2) - links[5].mcm[2]*Power(v7[3],2) + v7[2]*(links[5].mcm[1]*v7[1] + links[5].mcm[3]*v7[3]) + links[5].m*v7[3]*v7[4] - links[5].m*v7[1]*v7[6] + gravity*links[5].m*SG70[2][3];
pv7[3]=-uex[5].f[3] - links[5].mcm[3]*Power(v7[1],2) - links[5].mcm[3]*Power(v7[2],2) + (links[5].mcm[1]*v7[1] + links[5].mcm[2]*v7[2])*v7[3] - links[5].m*v7[2]*v7[4] + links[5].m*v7[1]*v7[5] + gravity*links[5].m*SG70[3][3];
pv7[4]=-uex[5].t[1] + (-(links[5].mcm[2]*v7[2]) - links[5].mcm[3]*v7[3])*v7[4] + (links[5].mcm[1]*v7[3] + links[5].m*v7[5])*v7[6] + v7[5]*(links[5].mcm[1]*v7[2] - links[5].m*v7[6]) + v7[1]*(links[5].mcm[2]*v7[5] + links[5].mcm[3]*v7[6] - v7[3]*links[5].inertia[1][2] + v7[2]*links[5].inertia[1][3]) + v7[2]*(-(links[5].mcm[1]*v7[5]) - v7[3]*links[5].inertia[2][2] + v7[2]*links[5].inertia[2][3]) + v7[3]*(-(links[5].mcm[1]*v7[6]) - v7[3]*links[5].inertia[2][3] + v7[2]*links[5].inertia[3][3]) - gravity*links[5].mcm[3]*SG70[2][3] + gravity*links[5].mcm[2]*SG70[3][3];
pv7[5]=-uex[5].t[2] + (-(links[5].mcm[1]*v7[1]) - links[5].mcm[3]*v7[3])*v7[5] + (links[5].mcm[2]*v7[3] - links[5].m*v7[4])*v7[6] + v7[4]*(links[5].mcm[2]*v7[1] + links[5].m*v7[6]) + v7[1]*(-(links[5].mcm[2]*v7[4]) + v7[3]*links[5].inertia[1][1] - v7[1]*links[5].inertia[1][3]) + v7[2]*(links[5].mcm[1]*v7[4] + links[5].mcm[3]*v7[6] + v7[3]*links[5].inertia[1][2] - v7[1]*links[5].inertia[2][3]) + v7[3]*(-(links[5].mcm[2]*v7[6]) + v7[3]*links[5].inertia[1][3] - v7[1]*links[5].inertia[3][3]) + gravity*links[5].mcm[3]*SG70[1][3] - gravity*links[5].mcm[1]*SG70[3][3];
pv7[6]=-uex[5].t[3] + (links[5].mcm[3]*v7[2] + links[5].m*v7[4])*v7[5] + v7[4]*(links[5].mcm[3]*v7[1] - links[5].m*v7[5]) + (-(links[5].mcm[1]*v7[1]) - links[5].mcm[2]*v7[2])*v7[6] + v7[1]*(-(links[5].mcm[3]*v7[4]) - v7[2]*links[5].inertia[1][1] + v7[1]*links[5].inertia[1][2]) + v7[2]*(-(links[5].mcm[3]*v7[5]) - v7[2]*links[5].inertia[1][2] + v7[1]*links[5].inertia[2][2]) + v7[3]*(links[5].mcm[1]*v7[4] + links[5].mcm[2]*v7[5] - v7[2]*links[5].inertia[1][3] + v7[1]*links[5].inertia[2][3]) - gravity*links[5].mcm[2]*SG70[1][3] + gravity*links[5].mcm[1]*SG70[2][3];

pv8[1]=-uex[6].f[1] - links[6].mcm[1]*Power(v8[2],2) - links[6].mcm[1]*Power(v8[3],2) + v8[1]*(links[6].mcm[2]*v8[2] + links[6].mcm[3]*v8[3]) - links[6].m*v8[3]*v8[5] + links[6].m*v8[2]*v8[6] + gravity*links[6].m*SG80[1][3];
pv8[2]=-uex[6].f[2] - links[6].mcm[2]*Power(v8[1],2) - links[6].mcm[2]*Power(v8[3],2) + v8[2]*(links[6].mcm[1]*v8[1] + links[6].mcm[3]*v8[3]) + links[6].m*v8[3]*v8[4] - links[6].m*v8[1]*v8[6] + gravity*links[6].m*SG80[2][3];
pv8[3]=-uex[6].f[3] - links[6].mcm[3]*Power(v8[1],2) - links[6].mcm[3]*Power(v8[2],2) + (links[6].mcm[1]*v8[1] + links[6].mcm[2]*v8[2])*v8[3] - links[6].m*v8[2]*v8[4] + links[6].m*v8[1]*v8[5] + gravity*links[6].m*SG80[3][3];
pv8[4]=-uex[6].t[1] + (-(links[6].mcm[2]*v8[2]) - links[6].mcm[3]*v8[3])*v8[4] + (links[6].mcm[1]*v8[3] + links[6].m*v8[5])*v8[6] + v8[5]*(links[6].mcm[1]*v8[2] - links[6].m*v8[6]) + v8[1]*(links[6].mcm[2]*v8[5] + links[6].mcm[3]*v8[6] - v8[3]*links[6].inertia[1][2] + v8[2]*links[6].inertia[1][3]) + v8[2]*(-(links[6].mcm[1]*v8[5]) - v8[3]*links[6].inertia[2][2] + v8[2]*links[6].inertia[2][3]) + v8[3]*(-(links[6].mcm[1]*v8[6]) - v8[3]*links[6].inertia[2][3] + v8[2]*links[6].inertia[3][3]) - gravity*links[6].mcm[3]*SG80[2][3] + gravity*links[6].mcm[2]*SG80[3][3];
pv8[5]=-uex[6].t[2] + (-(links[6].mcm[1]*v8[1]) - links[6].mcm[3]*v8[3])*v8[5] + (links[6].mcm[2]*v8[3] - links[6].m*v8[4])*v8[6] + v8[4]*(links[6].mcm[2]*v8[1] + links[6].m*v8[6]) + v8[1]*(-(links[6].mcm[2]*v8[4]) + v8[3]*links[6].inertia[1][1] - v8[1]*links[6].inertia[1][3]) + v8[2]*(links[6].mcm[1]*v8[4] + links[6].mcm[3]*v8[6] + v8[3]*links[6].inertia[1][2] - v8[1]*links[6].inertia[2][3]) + v8[3]*(-(links[6].mcm[2]*v8[6]) + v8[3]*links[6].inertia[1][3] - v8[1]*links[6].inertia[3][3]) + gravity*links[6].mcm[3]*SG80[1][3] - gravity*links[6].mcm[1]*SG80[3][3];
pv8[6]=-uex[6].t[3] + (links[6].mcm[3]*v8[2] + links[6].m*v8[4])*v8[5] + v8[4]*(links[6].mcm[3]*v8[1] - links[6].m*v8[5]) + (-(links[6].mcm[1]*v8[1]) - links[6].mcm[2]*v8[2])*v8[6] + v8[1]*(-(links[6].mcm[3]*v8[4]) - v8[2]*links[6].inertia[1][1] + v8[1]*links[6].inertia[1][2]) + v8[2]*(-(links[6].mcm[3]*v8[5]) - v8[2]*links[6].inertia[1][2] + v8[1]*links[6].inertia[2][2]) + v8[3]*(links[6].mcm[1]*v8[4] + links[6].mcm[2]*v8[5] - v8[2]*links[6].inertia[1][3] + v8[1]*links[6].inertia[2][3]) - gravity*links[6].mcm[2]*SG80[1][3] + gravity*links[6].mcm[1]*SG80[2][3];

pv13[1]=-(eff[1].mcm[1]*Power(v13[2],2)) - eff[1].mcm[1]*Power(v13[3],2) + v13[1]*(eff[1].mcm[2]*v13[2] + eff[1].mcm[3]*v13[3]) - eff[1].m*v13[3]*v13[5] + eff[1].m*v13[2]*v13[6] + eff[1].m*gravity*SG130[1][3];
pv13[2]=-(eff[1].mcm[2]*Power(v13[1],2)) - eff[1].mcm[2]*Power(v13[3],2) + v13[2]*(eff[1].mcm[1]*v13[1] + eff[1].mcm[3]*v13[3]) + eff[1].m*v13[3]*v13[4] - eff[1].m*v13[1]*v13[6] + eff[1].m*gravity*SG130[2][3];
pv13[3]=-(eff[1].mcm[3]*Power(v13[1],2)) - eff[1].mcm[3]*Power(v13[2],2) + (eff[1].mcm[1]*v13[1] + eff[1].mcm[2]*v13[2])*v13[3] - eff[1].m*v13[2]*v13[4] + eff[1].m*v13[1]*v13[5] + eff[1].m*gravity*SG130[3][3];
pv13[4]=(-(eff[1].mcm[2]*v13[2]) - eff[1].mcm[3]*v13[3])*v13[4] - eff[1].mcm[1]*v13[2]*v13[5] - eff[1].mcm[1]*v13[3]*v13[6] + (eff[1].mcm[1]*v13[3] + eff[1].m*v13[5])*v13[6] + v13[5]*(eff[1].mcm[1]*v13[2] - eff[1].m*v13[6]) + v13[1]*(eff[1].mcm[2]*v13[5] + eff[1].mcm[3]*v13[6]) - gravity*eff[1].mcm[3]*SG130[2][3] + gravity*eff[1].mcm[2]*SG130[3][3];
pv13[5]=-(eff[1].mcm[2]*v13[1]*v13[4]) + (-(eff[1].mcm[1]*v13[1]) - eff[1].mcm[3]*v13[3])*v13[5] - eff[1].mcm[2]*v13[3]*v13[6] + (eff[1].mcm[2]*v13[3] - eff[1].m*v13[4])*v13[6] + v13[4]*(eff[1].mcm[2]*v13[1] + eff[1].m*v13[6]) + v13[2]*(eff[1].mcm[1]*v13[4] + eff[1].mcm[3]*v13[6]) + gravity*eff[1].mcm[3]*SG130[1][3] - gravity*eff[1].mcm[1]*SG130[3][3];
pv13[6]=-(eff[1].mcm[3]*v13[1]*v13[4]) - eff[1].mcm[3]*v13[2]*v13[5] + (eff[1].mcm[3]*v13[2] + eff[1].m*v13[4])*v13[5] + v13[4]*(eff[1].mcm[3]*v13[1] - eff[1].m*v13[5]) + v13[3]*(eff[1].mcm[1]*v13[4] + eff[1].mcm[2]*v13[5]) + (-(eff[1].mcm[1]*v13[1]) - eff[1].mcm[2]*v13[2])*v13[6] - gravity*eff[1].mcm[2]*SG130[1][3] + gravity*eff[1].mcm[1]*SG130[2][3];

pv14[1]=-uex[7].f[1] - links[7].mcm[1]*Power(v14[2],2) - links[7].mcm[1]*Power(v14[3],2) + v14[1]*(links[7].mcm[2]*v14[2] + links[7].mcm[3]*v14[3]) - links[7].m*v14[3]*v14[5] + links[7].m*v14[2]*v14[6] + gravity*links[7].m*SG140[1][3];
pv14[2]=-uex[7].f[2] - links[7].mcm[2]*Power(v14[1],2) - links[7].mcm[2]*Power(v14[3],2) + v14[2]*(links[7].mcm[1]*v14[1] + links[7].mcm[3]*v14[3]) + links[7].m*v14[3]*v14[4] - links[7].m*v14[1]*v14[6] + gravity*links[7].m*SG140[2][3];
pv14[3]=-uex[7].f[3] - links[7].mcm[3]*Power(v14[1],2) - links[7].mcm[3]*Power(v14[2],2) + (links[7].mcm[1]*v14[1] + links[7].mcm[2]*v14[2])*v14[3] - links[7].m*v14[2]*v14[4] + links[7].m*v14[1]*v14[5] + gravity*links[7].m*SG140[3][3];
pv14[4]=-uex[7].t[1] + (-(links[7].mcm[2]*v14[2]) - links[7].mcm[3]*v14[3])*v14[4] + (links[7].mcm[1]*v14[3] + links[7].m*v14[5])*v14[6] + v14[5]*(links[7].mcm[1]*v14[2] - links[7].m*v14[6]) + v14[1]*(links[7].mcm[2]*v14[5] + links[7].mcm[3]*v14[6] - v14[3]*links[7].inertia[1][2] + v14[2]*links[7].inertia[1][3]) + v14[2]*(-(links[7].mcm[1]*v14[5]) - v14[3]*links[7].inertia[2][2] + v14[2]*links[7].inertia[2][3]) + v14[3]*(-(links[7].mcm[1]*v14[6]) - v14[3]*links[7].inertia[2][3] + v14[2]*links[7].inertia[3][3]) - gravity*links[7].mcm[3]*SG140[2][3] + gravity*links[7].mcm[2]*SG140[3][3];
pv14[5]=-uex[7].t[2] + (-(links[7].mcm[1]*v14[1]) - links[7].mcm[3]*v14[3])*v14[5] + (links[7].mcm[2]*v14[3] - links[7].m*v14[4])*v14[6] + v14[4]*(links[7].mcm[2]*v14[1] + links[7].m*v14[6]) + v14[1]*(-(links[7].mcm[2]*v14[4]) + v14[3]*links[7].inertia[1][1] - v14[1]*links[7].inertia[1][3]) + v14[2]*(links[7].mcm[1]*v14[4] + links[7].mcm[3]*v14[6] + v14[3]*links[7].inertia[1][2] - v14[1]*links[7].inertia[2][3]) + v14[3]*(-(links[7].mcm[2]*v14[6]) + v14[3]*links[7].inertia[1][3] - v14[1]*links[7].inertia[3][3]) + gravity*links[7].mcm[3]*SG140[1][3] - gravity*links[7].mcm[1]*SG140[3][3];
pv14[6]=-uex[7].t[3] + (links[7].mcm[3]*v14[2] + links[7].m*v14[4])*v14[5] + v14[4]*(links[7].mcm[3]*v14[1] - links[7].m*v14[5]) + (-(links[7].mcm[1]*v14[1]) - links[7].mcm[2]*v14[2])*v14[6] + v14[1]*(-(links[7].mcm[3]*v14[4]) - v14[2]*links[7].inertia[1][1] + v14[1]*links[7].inertia[1][2]) + v14[2]*(-(links[7].mcm[3]*v14[5]) - v14[2]*links[7].inertia[1][2] + v14[1]*links[7].inertia[2][2]) + v14[3]*(links[7].mcm[1]*v14[4] + links[7].mcm[2]*v14[5] - v14[2]*links[7].inertia[1][3] + v14[1]*links[7].inertia[2][3]) - gravity*links[7].mcm[2]*SG140[1][3] + gravity*links[7].mcm[1]*SG140[2][3];

pv15[1]=-uex[8].f[1] - links[8].mcm[1]*Power(v15[2],2) - links[8].mcm[1]*Power(v15[3],2) + v15[1]*(links[8].mcm[2]*v15[2] + links[8].mcm[3]*v15[3]) - links[8].m*v15[3]*v15[5] + links[8].m*v15[2]*v15[6] + gravity*links[8].m*SG150[1][3];
pv15[2]=-uex[8].f[2] - links[8].mcm[2]*Power(v15[1],2) - links[8].mcm[2]*Power(v15[3],2) + v15[2]*(links[8].mcm[1]*v15[1] + links[8].mcm[3]*v15[3]) + links[8].m*v15[3]*v15[4] - links[8].m*v15[1]*v15[6] + gravity*links[8].m*SG150[2][3];
pv15[3]=-uex[8].f[3] - links[8].mcm[3]*Power(v15[1],2) - links[8].mcm[3]*Power(v15[2],2) + (links[8].mcm[1]*v15[1] + links[8].mcm[2]*v15[2])*v15[3] - links[8].m*v15[2]*v15[4] + links[8].m*v15[1]*v15[5] + gravity*links[8].m*SG150[3][3];
pv15[4]=-uex[8].t[1] + (-(links[8].mcm[2]*v15[2]) - links[8].mcm[3]*v15[3])*v15[4] + (links[8].mcm[1]*v15[3] + links[8].m*v15[5])*v15[6] + v15[5]*(links[8].mcm[1]*v15[2] - links[8].m*v15[6]) + v15[1]*(links[8].mcm[2]*v15[5] + links[8].mcm[3]*v15[6] - v15[3]*links[8].inertia[1][2] + v15[2]*links[8].inertia[1][3]) + v15[2]*(-(links[8].mcm[1]*v15[5]) - v15[3]*links[8].inertia[2][2] + v15[2]*links[8].inertia[2][3]) + v15[3]*(-(links[8].mcm[1]*v15[6]) - v15[3]*links[8].inertia[2][3] + v15[2]*links[8].inertia[3][3]) - gravity*links[8].mcm[3]*SG150[2][3] + gravity*links[8].mcm[2]*SG150[3][3];
pv15[5]=-uex[8].t[2] + (-(links[8].mcm[1]*v15[1]) - links[8].mcm[3]*v15[3])*v15[5] + (links[8].mcm[2]*v15[3] - links[8].m*v15[4])*v15[6] + v15[4]*(links[8].mcm[2]*v15[1] + links[8].m*v15[6]) + v15[1]*(-(links[8].mcm[2]*v15[4]) + v15[3]*links[8].inertia[1][1] - v15[1]*links[8].inertia[1][3]) + v15[2]*(links[8].mcm[1]*v15[4] + links[8].mcm[3]*v15[6] + v15[3]*links[8].inertia[1][2] - v15[1]*links[8].inertia[2][3]) + v15[3]*(-(links[8].mcm[2]*v15[6]) + v15[3]*links[8].inertia[1][3] - v15[1]*links[8].inertia[3][3]) + gravity*links[8].mcm[3]*SG150[1][3] - gravity*links[8].mcm[1]*SG150[3][3];
pv15[6]=-uex[8].t[3] + (links[8].mcm[3]*v15[2] + links[8].m*v15[4])*v15[5] + v15[4]*(links[8].mcm[3]*v15[1] - links[8].m*v15[5]) + (-(links[8].mcm[1]*v15[1]) - links[8].mcm[2]*v15[2])*v15[6] + v15[1]*(-(links[8].mcm[3]*v15[4]) - v15[2]*links[8].inertia[1][1] + v15[1]*links[8].inertia[1][2]) + v15[2]*(-(links[8].mcm[3]*v15[5]) - v15[2]*links[8].inertia[1][2] + v15[1]*links[8].inertia[2][2]) + v15[3]*(links[8].mcm[1]*v15[4] + links[8].mcm[2]*v15[5] - v15[2]*links[8].inertia[1][3] + v15[1]*links[8].inertia[2][3]) - gravity*links[8].mcm[2]*SG150[1][3] + gravity*links[8].mcm[1]*SG150[2][3];

pv16[1]=-(links[9].mcm[1]*Power(v16[2],2)) - links[9].mcm[1]*Power(v16[3],2) + v16[1]*(links[9].mcm[2]*v16[2] + links[9].mcm[3]*v16[3]) - links[9].m*v16[3]*v16[5] + links[9].m*v16[2]*v16[6] + gravity*links[9].m*SG160[1][3];
pv16[2]=-(links[9].mcm[2]*Power(v16[1],2)) - links[9].mcm[2]*Power(v16[3],2) + v16[2]*(links[9].mcm[1]*v16[1] + links[9].mcm[3]*v16[3]) + links[9].m*v16[3]*v16[4] - links[9].m*v16[1]*v16[6] + gravity*links[9].m*SG160[2][3];
pv16[3]=-(links[9].mcm[3]*Power(v16[1],2)) - links[9].mcm[3]*Power(v16[2],2) + (links[9].mcm[1]*v16[1] + links[9].mcm[2]*v16[2])*v16[3] - links[9].m*v16[2]*v16[4] + links[9].m*v16[1]*v16[5] + gravity*links[9].m*SG160[3][3];
pv16[4]=(-(links[9].mcm[2]*v16[2]) - links[9].mcm[3]*v16[3])*v16[4] + (links[9].mcm[1]*v16[3] + links[9].m*v16[5])*v16[6] + v16[5]*(links[9].mcm[1]*v16[2] - links[9].m*v16[6]) + v16[1]*(links[9].mcm[2]*v16[5] + links[9].mcm[3]*v16[6] - v16[3]*links[9].inertia[1][2] + v16[2]*links[9].inertia[1][3]) + v16[2]*(-(links[9].mcm[1]*v16[5]) - v16[3]*links[9].inertia[2][2] + v16[2]*links[9].inertia[2][3]) + v16[3]*(-(links[9].mcm[1]*v16[6]) - v16[3]*links[9].inertia[2][3] + v16[2]*links[9].inertia[3][3]) - gravity*links[9].mcm[3]*SG160[2][3] + gravity*links[9].mcm[2]*SG160[3][3];
pv16[5]=(-(links[9].mcm[1]*v16[1]) - links[9].mcm[3]*v16[3])*v16[5] + (links[9].mcm[2]*v16[3] - links[9].m*v16[4])*v16[6] + v16[4]*(links[9].mcm[2]*v16[1] + links[9].m*v16[6]) + v16[1]*(-(links[9].mcm[2]*v16[4]) + v16[3]*links[9].inertia[1][1] - v16[1]*links[9].inertia[1][3]) + v16[2]*(links[9].mcm[1]*v16[4] + links[9].mcm[3]*v16[6] + v16[3]*links[9].inertia[1][2] - v16[1]*links[9].inertia[2][3]) + v16[3]*(-(links[9].mcm[2]*v16[6]) + v16[3]*links[9].inertia[1][3] - v16[1]*links[9].inertia[3][3]) + gravity*links[9].mcm[3]*SG160[1][3] - gravity*links[9].mcm[1]*SG160[3][3];
pv16[6]=(links[9].mcm[3]*v16[2] + links[9].m*v16[4])*v16[5] + v16[4]*(links[9].mcm[3]*v16[1] - links[9].m*v16[5]) + (-(links[9].mcm[1]*v16[1]) - links[9].mcm[2]*v16[2])*v16[6] + v16[1]*(-(links[9].mcm[3]*v16[4]) - v16[2]*links[9].inertia[1][1] + v16[1]*links[9].inertia[1][2]) + v16[2]*(-(links[9].mcm[3]*v16[5]) - v16[2]*links[9].inertia[1][2] + v16[1]*links[9].inertia[2][2]) + v16[3]*(links[9].mcm[1]*v16[4] + links[9].mcm[2]*v16[5] - v16[2]*links[9].inertia[1][3] + v16[1]*links[9].inertia[2][3]) - gravity*links[9].mcm[2]*SG160[1][3] + gravity*links[9].mcm[1]*SG160[2][3];

pv17[1]=-uex[10].f[1] - links[10].mcm[1]*Power(v17[2],2) - links[10].mcm[1]*Power(v17[3],2) + v17[1]*(links[10].mcm[2]*v17[2] + links[10].mcm[3]*v17[3]) - links[10].m*v17[3]*v17[5] + links[10].m*v17[2]*v17[6] + gravity*links[10].m*SG170[1][3];
pv17[2]=-uex[10].f[2] - links[10].mcm[2]*Power(v17[1],2) - links[10].mcm[2]*Power(v17[3],2) + v17[2]*(links[10].mcm[1]*v17[1] + links[10].mcm[3]*v17[3]) + links[10].m*v17[3]*v17[4] - links[10].m*v17[1]*v17[6] + gravity*links[10].m*SG170[2][3];
pv17[3]=-uex[10].f[3] - links[10].mcm[3]*Power(v17[1],2) - links[10].mcm[3]*Power(v17[2],2) + (links[10].mcm[1]*v17[1] + links[10].mcm[2]*v17[2])*v17[3] - links[10].m*v17[2]*v17[4] + links[10].m*v17[1]*v17[5] + gravity*links[10].m*SG170[3][3];
pv17[4]=-uex[10].t[1] + (-(links[10].mcm[2]*v17[2]) - links[10].mcm[3]*v17[3])*v17[4] + (links[10].mcm[1]*v17[3] + links[10].m*v17[5])*v17[6] + v17[5]*(links[10].mcm[1]*v17[2] - links[10].m*v17[6]) + v17[1]*(links[10].mcm[2]*v17[5] + links[10].mcm[3]*v17[6] - v17[3]*links[10].inertia[1][2] + v17[2]*links[10].inertia[1][3]) + v17[2]*(-(links[10].mcm[1]*v17[5]) - v17[3]*links[10].inertia[2][2] + v17[2]*links[10].inertia[2][3]) + v17[3]*(-(links[10].mcm[1]*v17[6]) - v17[3]*links[10].inertia[2][3] + v17[2]*links[10].inertia[3][3]) - gravity*links[10].mcm[3]*SG170[2][3] + gravity*links[10].mcm[2]*SG170[3][3];
pv17[5]=-uex[10].t[2] + (-(links[10].mcm[1]*v17[1]) - links[10].mcm[3]*v17[3])*v17[5] + (links[10].mcm[2]*v17[3] - links[10].m*v17[4])*v17[6] + v17[4]*(links[10].mcm[2]*v17[1] + links[10].m*v17[6]) + v17[1]*(-(links[10].mcm[2]*v17[4]) + v17[3]*links[10].inertia[1][1] - v17[1]*links[10].inertia[1][3]) + v17[2]*(links[10].mcm[1]*v17[4] + links[10].mcm[3]*v17[6] + v17[3]*links[10].inertia[1][2] - v17[1]*links[10].inertia[2][3]) + v17[3]*(-(links[10].mcm[2]*v17[6]) + v17[3]*links[10].inertia[1][3] - v17[1]*links[10].inertia[3][3]) + gravity*links[10].mcm[3]*SG170[1][3] - gravity*links[10].mcm[1]*SG170[3][3];
pv17[6]=-uex[10].t[3] + (links[10].mcm[3]*v17[2] + links[10].m*v17[4])*v17[5] + v17[4]*(links[10].mcm[3]*v17[1] - links[10].m*v17[5]) + (-(links[10].mcm[1]*v17[1]) - links[10].mcm[2]*v17[2])*v17[6] + v17[1]*(-(links[10].mcm[3]*v17[4]) - v17[2]*links[10].inertia[1][1] + v17[1]*links[10].inertia[1][2]) + v17[2]*(-(links[10].mcm[3]*v17[5]) - v17[2]*links[10].inertia[1][2] + v17[1]*links[10].inertia[2][2]) + v17[3]*(links[10].mcm[1]*v17[4] + links[10].mcm[2]*v17[5] - v17[2]*links[10].inertia[1][3] + v17[1]*links[10].inertia[2][3]) - gravity*links[10].mcm[2]*SG170[1][3] + gravity*links[10].mcm[1]*SG170[2][3];

pv18[1]=-uex[11].f[1] - links[11].mcm[1]*Power(v18[2],2) - links[11].mcm[1]*Power(v18[3],2) + v18[1]*(links[11].mcm[2]*v18[2] + links[11].mcm[3]*v18[3]) - links[11].m*v18[3]*v18[5] + links[11].m*v18[2]*v18[6] + gravity*links[11].m*SG180[1][3];
pv18[2]=-uex[11].f[2] - links[11].mcm[2]*Power(v18[1],2) - links[11].mcm[2]*Power(v18[3],2) + v18[2]*(links[11].mcm[1]*v18[1] + links[11].mcm[3]*v18[3]) + links[11].m*v18[3]*v18[4] - links[11].m*v18[1]*v18[6] + gravity*links[11].m*SG180[2][3];
pv18[3]=-uex[11].f[3] - links[11].mcm[3]*Power(v18[1],2) - links[11].mcm[3]*Power(v18[2],2) + (links[11].mcm[1]*v18[1] + links[11].mcm[2]*v18[2])*v18[3] - links[11].m*v18[2]*v18[4] + links[11].m*v18[1]*v18[5] + gravity*links[11].m*SG180[3][3];
pv18[4]=-uex[11].t[1] + (-(links[11].mcm[2]*v18[2]) - links[11].mcm[3]*v18[3])*v18[4] + (links[11].mcm[1]*v18[3] + links[11].m*v18[5])*v18[6] + v18[5]*(links[11].mcm[1]*v18[2] - links[11].m*v18[6]) + v18[1]*(links[11].mcm[2]*v18[5] + links[11].mcm[3]*v18[6] - v18[3]*links[11].inertia[1][2] + v18[2]*links[11].inertia[1][3]) + v18[2]*(-(links[11].mcm[1]*v18[5]) - v18[3]*links[11].inertia[2][2] + v18[2]*links[11].inertia[2][3]) + v18[3]*(-(links[11].mcm[1]*v18[6]) - v18[3]*links[11].inertia[2][3] + v18[2]*links[11].inertia[3][3]) - gravity*links[11].mcm[3]*SG180[2][3] + gravity*links[11].mcm[2]*SG180[3][3];
pv18[5]=-uex[11].t[2] + (-(links[11].mcm[1]*v18[1]) - links[11].mcm[3]*v18[3])*v18[5] + (links[11].mcm[2]*v18[3] - links[11].m*v18[4])*v18[6] + v18[4]*(links[11].mcm[2]*v18[1] + links[11].m*v18[6]) + v18[1]*(-(links[11].mcm[2]*v18[4]) + v18[3]*links[11].inertia[1][1] - v18[1]*links[11].inertia[1][3]) + v18[2]*(links[11].mcm[1]*v18[4] + links[11].mcm[3]*v18[6] + v18[3]*links[11].inertia[1][2] - v18[1]*links[11].inertia[2][3]) + v18[3]*(-(links[11].mcm[2]*v18[6]) + v18[3]*links[11].inertia[1][3] - v18[1]*links[11].inertia[3][3]) + gravity*links[11].mcm[3]*SG180[1][3] - gravity*links[11].mcm[1]*SG180[3][3];
pv18[6]=-uex[11].t[3] + (links[11].mcm[3]*v18[2] + links[11].m*v18[4])*v18[5] + v18[4]*(links[11].mcm[3]*v18[1] - links[11].m*v18[5]) + (-(links[11].mcm[1]*v18[1]) - links[11].mcm[2]*v18[2])*v18[6] + v18[1]*(-(links[11].mcm[3]*v18[4]) - v18[2]*links[11].inertia[1][1] + v18[1]*links[11].inertia[1][2]) + v18[2]*(-(links[11].mcm[3]*v18[5]) - v18[2]*links[11].inertia[1][2] + v18[1]*links[11].inertia[2][2]) + v18[3]*(links[11].mcm[1]*v18[4] + links[11].mcm[2]*v18[5] - v18[2]*links[11].inertia[1][3] + v18[1]*links[11].inertia[2][3]) - gravity*links[11].mcm[2]*SG180[1][3] + gravity*links[11].mcm[1]*SG180[2][3];

pv19[1]=-uex[12].f[1] - links[12].mcm[1]*Power(v19[2],2) - links[12].mcm[1]*Power(v19[3],2) + v19[1]*(links[12].mcm[2]*v19[2] + links[12].mcm[3]*v19[3]) - links[12].m*v19[3]*v19[5] + links[12].m*v19[2]*v19[6] + gravity*links[12].m*SG190[1][3];
pv19[2]=-uex[12].f[2] - links[12].mcm[2]*Power(v19[1],2) - links[12].mcm[2]*Power(v19[3],2) + v19[2]*(links[12].mcm[1]*v19[1] + links[12].mcm[3]*v19[3]) + links[12].m*v19[3]*v19[4] - links[12].m*v19[1]*v19[6] + gravity*links[12].m*SG190[2][3];
pv19[3]=-uex[12].f[3] - links[12].mcm[3]*Power(v19[1],2) - links[12].mcm[3]*Power(v19[2],2) + (links[12].mcm[1]*v19[1] + links[12].mcm[2]*v19[2])*v19[3] - links[12].m*v19[2]*v19[4] + links[12].m*v19[1]*v19[5] + gravity*links[12].m*SG190[3][3];
pv19[4]=-uex[12].t[1] + (-(links[12].mcm[2]*v19[2]) - links[12].mcm[3]*v19[3])*v19[4] + (links[12].mcm[1]*v19[3] + links[12].m*v19[5])*v19[6] + v19[5]*(links[12].mcm[1]*v19[2] - links[12].m*v19[6]) + v19[1]*(links[12].mcm[2]*v19[5] + links[12].mcm[3]*v19[6] - v19[3]*links[12].inertia[1][2] + v19[2]*links[12].inertia[1][3]) + v19[2]*(-(links[12].mcm[1]*v19[5]) - v19[3]*links[12].inertia[2][2] + v19[2]*links[12].inertia[2][3]) + v19[3]*(-(links[12].mcm[1]*v19[6]) - v19[3]*links[12].inertia[2][3] + v19[2]*links[12].inertia[3][3]) - gravity*links[12].mcm[3]*SG190[2][3] + gravity*links[12].mcm[2]*SG190[3][3];
pv19[5]=-uex[12].t[2] + (-(links[12].mcm[1]*v19[1]) - links[12].mcm[3]*v19[3])*v19[5] + (links[12].mcm[2]*v19[3] - links[12].m*v19[4])*v19[6] + v19[4]*(links[12].mcm[2]*v19[1] + links[12].m*v19[6]) + v19[1]*(-(links[12].mcm[2]*v19[4]) + v19[3]*links[12].inertia[1][1] - v19[1]*links[12].inertia[1][3]) + v19[2]*(links[12].mcm[1]*v19[4] + links[12].mcm[3]*v19[6] + v19[3]*links[12].inertia[1][2] - v19[1]*links[12].inertia[2][3]) + v19[3]*(-(links[12].mcm[2]*v19[6]) + v19[3]*links[12].inertia[1][3] - v19[1]*links[12].inertia[3][3]) + gravity*links[12].mcm[3]*SG190[1][3] - gravity*links[12].mcm[1]*SG190[3][3];
pv19[6]=-uex[12].t[3] + (links[12].mcm[3]*v19[2] + links[12].m*v19[4])*v19[5] + v19[4]*(links[12].mcm[3]*v19[1] - links[12].m*v19[5]) + (-(links[12].mcm[1]*v19[1]) - links[12].mcm[2]*v19[2])*v19[6] + v19[1]*(-(links[12].mcm[3]*v19[4]) - v19[2]*links[12].inertia[1][1] + v19[1]*links[12].inertia[1][2]) + v19[2]*(-(links[12].mcm[3]*v19[5]) - v19[2]*links[12].inertia[1][2] + v19[1]*links[12].inertia[2][2]) + v19[3]*(links[12].mcm[1]*v19[4] + links[12].mcm[2]*v19[5] - v19[2]*links[12].inertia[1][3] + v19[1]*links[12].inertia[2][3]) - gravity*links[12].mcm[2]*SG190[1][3] + gravity*links[12].mcm[1]*SG190[2][3];

pv24[1]=-(eff[2].mcm[1]*Power(v24[2],2)) - eff[2].mcm[1]*Power(v24[3],2) + v24[1]*(eff[2].mcm[2]*v24[2] + eff[2].mcm[3]*v24[3]) - eff[2].m*v24[3]*v24[5] + eff[2].m*v24[2]*v24[6] + eff[2].m*gravity*SG240[1][3];
pv24[2]=-(eff[2].mcm[2]*Power(v24[1],2)) - eff[2].mcm[2]*Power(v24[3],2) + v24[2]*(eff[2].mcm[1]*v24[1] + eff[2].mcm[3]*v24[3]) + eff[2].m*v24[3]*v24[4] - eff[2].m*v24[1]*v24[6] + eff[2].m*gravity*SG240[2][3];
pv24[3]=-(eff[2].mcm[3]*Power(v24[1],2)) - eff[2].mcm[3]*Power(v24[2],2) + (eff[2].mcm[1]*v24[1] + eff[2].mcm[2]*v24[2])*v24[3] - eff[2].m*v24[2]*v24[4] + eff[2].m*v24[1]*v24[5] + eff[2].m*gravity*SG240[3][3];
pv24[4]=(-(eff[2].mcm[2]*v24[2]) - eff[2].mcm[3]*v24[3])*v24[4] - eff[2].mcm[1]*v24[2]*v24[5] - eff[2].mcm[1]*v24[3]*v24[6] + (eff[2].mcm[1]*v24[3] + eff[2].m*v24[5])*v24[6] + v24[5]*(eff[2].mcm[1]*v24[2] - eff[2].m*v24[6]) + v24[1]*(eff[2].mcm[2]*v24[5] + eff[2].mcm[3]*v24[6]) - gravity*eff[2].mcm[3]*SG240[2][3] + gravity*eff[2].mcm[2]*SG240[3][3];
pv24[5]=-(eff[2].mcm[2]*v24[1]*v24[4]) + (-(eff[2].mcm[1]*v24[1]) - eff[2].mcm[3]*v24[3])*v24[5] - eff[2].mcm[2]*v24[3]*v24[6] + (eff[2].mcm[2]*v24[3] - eff[2].m*v24[4])*v24[6] + v24[4]*(eff[2].mcm[2]*v24[1] + eff[2].m*v24[6]) + v24[2]*(eff[2].mcm[1]*v24[4] + eff[2].mcm[3]*v24[6]) + gravity*eff[2].mcm[3]*SG240[1][3] - gravity*eff[2].mcm[1]*SG240[3][3];
pv24[6]=-(eff[2].mcm[3]*v24[1]*v24[4]) - eff[2].mcm[3]*v24[2]*v24[5] + (eff[2].mcm[3]*v24[2] + eff[2].m*v24[4])*v24[5] + v24[4]*(eff[2].mcm[3]*v24[1] - eff[2].m*v24[5]) + v24[3]*(eff[2].mcm[1]*v24[4] + eff[2].mcm[2]*v24[5]) + (-(eff[2].mcm[1]*v24[1]) - eff[2].mcm[2]*v24[2])*v24[6] - gravity*eff[2].mcm[2]*SG240[1][3] + gravity*eff[2].mcm[1]*SG240[2][3];



}

/* articulated body inertias and misc variables */

void
hoap3_InvDynArtfunc7(void)
     {
JA24[1][2]=eff[2].mcm[3];
JA24[1][3]=-eff[2].mcm[2];
JA24[1][4]=eff[2].m;

JA24[2][1]=-eff[2].mcm[3];
JA24[2][3]=eff[2].mcm[1];
JA24[2][5]=eff[2].m;

JA24[3][1]=eff[2].mcm[2];
JA24[3][2]=-eff[2].mcm[1];
JA24[3][6]=eff[2].m;

JA24[4][5]=-eff[2].mcm[3];
JA24[4][6]=eff[2].mcm[2];

JA24[5][4]=eff[2].mcm[3];
JA24[5][6]=-eff[2].mcm[1];

JA24[6][4]=-eff[2].mcm[2];
JA24[6][5]=eff[2].mcm[1];


T11924[1][2]=JA24[1][2];
T11924[1][3]=JA24[1][3];
T11924[1][4]=JA24[1][4];

T11924[2][1]=JA24[2][1];
T11924[2][3]=JA24[2][3];
T11924[2][5]=JA24[2][5];

T11924[3][1]=JA24[3][1];
T11924[3][2]=JA24[3][2];
T11924[3][6]=JA24[3][6];

T11924[4][5]=JA24[4][5];
T11924[4][6]=JA24[4][6];

T11924[5][4]=JA24[5][4];
T11924[5][6]=JA24[5][6];

T11924[6][4]=JA24[6][4];
T11924[6][5]=JA24[6][5];


T1924[1][1]=(-(eff[2].x[3]*S2419[1][2]) + eff[2].x[2]*S2419[1][3])*Si1924[1][1]*T11924[1][4] + S2419[3][1]*(Si1924[1][1]*T11924[1][3] + Si1924[1][2]*T11924[2][3]) + (-(eff[2].x[3]*S2419[2][2]) + eff[2].x[2]*S2419[2][3])*Si1924[1][2]*T11924[2][5] + S2419[1][1]*(Si1924[1][2]*T11924[2][1] + Si1924[1][3]*T11924[3][1]) + S2419[2][1]*(Si1924[1][1]*T11924[1][2] + Si1924[1][3]*T11924[3][2]) + (-(eff[2].x[3]*S2419[3][2]) + eff[2].x[2]*S2419[3][3])*Si1924[1][3]*T11924[3][6];
T1924[1][2]=(eff[2].x[3]*S2419[1][1] - eff[2].x[1]*S2419[1][3])*Si1924[1][1]*T11924[1][4] + S2419[3][2]*(Si1924[1][1]*T11924[1][3] + Si1924[1][2]*T11924[2][3]) + (eff[2].x[3]*S2419[2][1] - eff[2].x[1]*S2419[2][3])*Si1924[1][2]*T11924[2][5] + S2419[1][2]*(Si1924[1][2]*T11924[2][1] + Si1924[1][3]*T11924[3][1]) + S2419[2][2]*(Si1924[1][1]*T11924[1][2] + Si1924[1][3]*T11924[3][2]) + (eff[2].x[3]*S2419[3][1] - eff[2].x[1]*S2419[3][3])*Si1924[1][3]*T11924[3][6];
T1924[1][3]=(-(eff[2].x[2]*S2419[1][1]) + eff[2].x[1]*S2419[1][2])*Si1924[1][1]*T11924[1][4] + S2419[3][3]*(Si1924[1][1]*T11924[1][3] + Si1924[1][2]*T11924[2][3]) + (-(eff[2].x[2]*S2419[2][1]) + eff[2].x[1]*S2419[2][2])*Si1924[1][2]*T11924[2][5] + S2419[1][3]*(Si1924[1][2]*T11924[2][1] + Si1924[1][3]*T11924[3][1]) + S2419[2][3]*(Si1924[1][1]*T11924[1][2] + Si1924[1][3]*T11924[3][2]) + (-(eff[2].x[2]*S2419[3][1]) + eff[2].x[1]*S2419[3][2])*Si1924[1][3]*T11924[3][6];
T1924[1][4]=S2419[1][1]*Si1924[1][1]*T11924[1][4] + S2419[2][1]*Si1924[1][2]*T11924[2][5] + S2419[3][1]*Si1924[1][3]*T11924[3][6];
T1924[1][5]=S2419[1][2]*Si1924[1][1]*T11924[1][4] + S2419[2][2]*Si1924[1][2]*T11924[2][5] + S2419[3][2]*Si1924[1][3]*T11924[3][6];
T1924[1][6]=S2419[1][3]*Si1924[1][1]*T11924[1][4] + S2419[2][3]*Si1924[1][2]*T11924[2][5] + S2419[3][3]*Si1924[1][3]*T11924[3][6];

T1924[2][1]=(-(eff[2].x[3]*S2419[1][2]) + eff[2].x[2]*S2419[1][3])*Si1924[2][1]*T11924[1][4] + S2419[3][1]*(Si1924[2][1]*T11924[1][3] + Si1924[2][2]*T11924[2][3]) + (-(eff[2].x[3]*S2419[2][2]) + eff[2].x[2]*S2419[2][3])*Si1924[2][2]*T11924[2][5] + S2419[1][1]*(Si1924[2][2]*T11924[2][1] + Si1924[2][3]*T11924[3][1]) + S2419[2][1]*(Si1924[2][1]*T11924[1][2] + Si1924[2][3]*T11924[3][2]) + (-(eff[2].x[3]*S2419[3][2]) + eff[2].x[2]*S2419[3][3])*Si1924[2][3]*T11924[3][6];
T1924[2][2]=(eff[2].x[3]*S2419[1][1] - eff[2].x[1]*S2419[1][3])*Si1924[2][1]*T11924[1][4] + S2419[3][2]*(Si1924[2][1]*T11924[1][3] + Si1924[2][2]*T11924[2][3]) + (eff[2].x[3]*S2419[2][1] - eff[2].x[1]*S2419[2][3])*Si1924[2][2]*T11924[2][5] + S2419[1][2]*(Si1924[2][2]*T11924[2][1] + Si1924[2][3]*T11924[3][1]) + S2419[2][2]*(Si1924[2][1]*T11924[1][2] + Si1924[2][3]*T11924[3][2]) + (eff[2].x[3]*S2419[3][1] - eff[2].x[1]*S2419[3][3])*Si1924[2][3]*T11924[3][6];
T1924[2][3]=(-(eff[2].x[2]*S2419[1][1]) + eff[2].x[1]*S2419[1][2])*Si1924[2][1]*T11924[1][4] + S2419[3][3]*(Si1924[2][1]*T11924[1][3] + Si1924[2][2]*T11924[2][3]) + (-(eff[2].x[2]*S2419[2][1]) + eff[2].x[1]*S2419[2][2])*Si1924[2][2]*T11924[2][5] + S2419[1][3]*(Si1924[2][2]*T11924[2][1] + Si1924[2][3]*T11924[3][1]) + S2419[2][3]*(Si1924[2][1]*T11924[1][2] + Si1924[2][3]*T11924[3][2]) + (-(eff[2].x[2]*S2419[3][1]) + eff[2].x[1]*S2419[3][2])*Si1924[2][3]*T11924[3][6];
T1924[2][4]=S2419[1][1]*Si1924[2][1]*T11924[1][4] + S2419[2][1]*Si1924[2][2]*T11924[2][5] + S2419[3][1]*Si1924[2][3]*T11924[3][6];
T1924[2][5]=S2419[1][2]*Si1924[2][1]*T11924[1][4] + S2419[2][2]*Si1924[2][2]*T11924[2][5] + S2419[3][2]*Si1924[2][3]*T11924[3][6];
T1924[2][6]=S2419[1][3]*Si1924[2][1]*T11924[1][4] + S2419[2][3]*Si1924[2][2]*T11924[2][5] + S2419[3][3]*Si1924[2][3]*T11924[3][6];

T1924[3][1]=(-(eff[2].x[3]*S2419[1][2]) + eff[2].x[2]*S2419[1][3])*Si1924[3][1]*T11924[1][4] + S2419[3][1]*(Si1924[3][1]*T11924[1][3] + Si1924[3][2]*T11924[2][3]) + (-(eff[2].x[3]*S2419[2][2]) + eff[2].x[2]*S2419[2][3])*Si1924[3][2]*T11924[2][5] + S2419[1][1]*(Si1924[3][2]*T11924[2][1] + Si1924[3][3]*T11924[3][1]) + S2419[2][1]*(Si1924[3][1]*T11924[1][2] + Si1924[3][3]*T11924[3][2]) + (-(eff[2].x[3]*S2419[3][2]) + eff[2].x[2]*S2419[3][3])*Si1924[3][3]*T11924[3][6];
T1924[3][2]=(eff[2].x[3]*S2419[1][1] - eff[2].x[1]*S2419[1][3])*Si1924[3][1]*T11924[1][4] + S2419[3][2]*(Si1924[3][1]*T11924[1][3] + Si1924[3][2]*T11924[2][3]) + (eff[2].x[3]*S2419[2][1] - eff[2].x[1]*S2419[2][3])*Si1924[3][2]*T11924[2][5] + S2419[1][2]*(Si1924[3][2]*T11924[2][1] + Si1924[3][3]*T11924[3][1]) + S2419[2][2]*(Si1924[3][1]*T11924[1][2] + Si1924[3][3]*T11924[3][2]) + (eff[2].x[3]*S2419[3][1] - eff[2].x[1]*S2419[3][3])*Si1924[3][3]*T11924[3][6];
T1924[3][3]=(-(eff[2].x[2]*S2419[1][1]) + eff[2].x[1]*S2419[1][2])*Si1924[3][1]*T11924[1][4] + S2419[3][3]*(Si1924[3][1]*T11924[1][3] + Si1924[3][2]*T11924[2][3]) + (-(eff[2].x[2]*S2419[2][1]) + eff[2].x[1]*S2419[2][2])*Si1924[3][2]*T11924[2][5] + S2419[1][3]*(Si1924[3][2]*T11924[2][1] + Si1924[3][3]*T11924[3][1]) + S2419[2][3]*(Si1924[3][1]*T11924[1][2] + Si1924[3][3]*T11924[3][2]) + (-(eff[2].x[2]*S2419[3][1]) + eff[2].x[1]*S2419[3][2])*Si1924[3][3]*T11924[3][6];
T1924[3][4]=S2419[1][1]*Si1924[3][1]*T11924[1][4] + S2419[2][1]*Si1924[3][2]*T11924[2][5] + S2419[3][1]*Si1924[3][3]*T11924[3][6];
T1924[3][5]=S2419[1][2]*Si1924[3][1]*T11924[1][4] + S2419[2][2]*Si1924[3][2]*T11924[2][5] + S2419[3][2]*Si1924[3][3]*T11924[3][6];
T1924[3][6]=S2419[1][3]*Si1924[3][1]*T11924[1][4] + S2419[2][3]*Si1924[3][2]*T11924[2][5] + S2419[3][3]*Si1924[3][3]*T11924[3][6];

T1924[4][1]=S2419[3][1]*((-(eff[2].x[3]*Si1924[2][1]) + eff[2].x[2]*Si1924[3][1])*T11924[1][3] + (-(eff[2].x[3]*Si1924[2][2]) + eff[2].x[2]*Si1924[3][2])*T11924[2][3]) + S2419[1][1]*((-(eff[2].x[3]*Si1924[2][2]) + eff[2].x[2]*Si1924[3][2])*T11924[2][1] + (-(eff[2].x[3]*Si1924[2][3]) + eff[2].x[2]*Si1924[3][3])*T11924[3][1]) + S2419[2][1]*((-(eff[2].x[3]*Si1924[2][1]) + eff[2].x[2]*Si1924[3][1])*T11924[1][2] + (-(eff[2].x[3]*Si1924[2][3]) + eff[2].x[2]*Si1924[3][3])*T11924[3][2]) + (-(eff[2].x[3]*S2419[3][2]) + eff[2].x[2]*S2419[3][3])*((-(eff[2].x[3]*Si1924[2][3]) + eff[2].x[2]*Si1924[3][3])*T11924[3][6] + Si1924[1][1]*T11924[4][6] + Si1924[1][2]*T11924[5][6]) + (-(eff[2].x[3]*S2419[1][2]) + eff[2].x[2]*S2419[1][3])*((-(eff[2].x[3]*Si1924[2][1]) + eff[2].x[2]*Si1924[3][1])*T11924[1][4] + Si1924[1][2]*T11924[5][4] + Si1924[1][3]*T11924[6][4]) + (-(eff[2].x[3]*S2419[2][2]) + eff[2].x[2]*S2419[2][3])*((-(eff[2].x[3]*Si1924[2][2]) + eff[2].x[2]*Si1924[3][2])*T11924[2][5] + Si1924[1][1]*T11924[4][5] + Si1924[1][3]*T11924[6][5]);
T1924[4][2]=S2419[3][2]*((-(eff[2].x[3]*Si1924[2][1]) + eff[2].x[2]*Si1924[3][1])*T11924[1][3] + (-(eff[2].x[3]*Si1924[2][2]) + eff[2].x[2]*Si1924[3][2])*T11924[2][3]) + S2419[1][2]*((-(eff[2].x[3]*Si1924[2][2]) + eff[2].x[2]*Si1924[3][2])*T11924[2][1] + (-(eff[2].x[3]*Si1924[2][3]) + eff[2].x[2]*Si1924[3][3])*T11924[3][1]) + S2419[2][2]*((-(eff[2].x[3]*Si1924[2][1]) + eff[2].x[2]*Si1924[3][1])*T11924[1][2] + (-(eff[2].x[3]*Si1924[2][3]) + eff[2].x[2]*Si1924[3][3])*T11924[3][2]) + (eff[2].x[3]*S2419[3][1] - eff[2].x[1]*S2419[3][3])*((-(eff[2].x[3]*Si1924[2][3]) + eff[2].x[2]*Si1924[3][3])*T11924[3][6] + Si1924[1][1]*T11924[4][6] + Si1924[1][2]*T11924[5][6]) + (eff[2].x[3]*S2419[1][1] - eff[2].x[1]*S2419[1][3])*((-(eff[2].x[3]*Si1924[2][1]) + eff[2].x[2]*Si1924[3][1])*T11924[1][4] + Si1924[1][2]*T11924[5][4] + Si1924[1][3]*T11924[6][4]) + (eff[2].x[3]*S2419[2][1] - eff[2].x[1]*S2419[2][3])*((-(eff[2].x[3]*Si1924[2][2]) + eff[2].x[2]*Si1924[3][2])*T11924[2][5] + Si1924[1][1]*T11924[4][5] + Si1924[1][3]*T11924[6][5]);
T1924[4][3]=S2419[3][3]*((-(eff[2].x[3]*Si1924[2][1]) + eff[2].x[2]*Si1924[3][1])*T11924[1][3] + (-(eff[2].x[3]*Si1924[2][2]) + eff[2].x[2]*Si1924[3][2])*T11924[2][3]) + S2419[1][3]*((-(eff[2].x[3]*Si1924[2][2]) + eff[2].x[2]*Si1924[3][2])*T11924[2][1] + (-(eff[2].x[3]*Si1924[2][3]) + eff[2].x[2]*Si1924[3][3])*T11924[3][1]) + S2419[2][3]*((-(eff[2].x[3]*Si1924[2][1]) + eff[2].x[2]*Si1924[3][1])*T11924[1][2] + (-(eff[2].x[3]*Si1924[2][3]) + eff[2].x[2]*Si1924[3][3])*T11924[3][2]) + (-(eff[2].x[2]*S2419[3][1]) + eff[2].x[1]*S2419[3][2])*((-(eff[2].x[3]*Si1924[2][3]) + eff[2].x[2]*Si1924[3][3])*T11924[3][6] + Si1924[1][1]*T11924[4][6] + Si1924[1][2]*T11924[5][6]) + (-(eff[2].x[2]*S2419[1][1]) + eff[2].x[1]*S2419[1][2])*((-(eff[2].x[3]*Si1924[2][1]) + eff[2].x[2]*Si1924[3][1])*T11924[1][4] + Si1924[1][2]*T11924[5][4] + Si1924[1][3]*T11924[6][4]) + (-(eff[2].x[2]*S2419[2][1]) + eff[2].x[1]*S2419[2][2])*((-(eff[2].x[3]*Si1924[2][2]) + eff[2].x[2]*Si1924[3][2])*T11924[2][5] + Si1924[1][1]*T11924[4][5] + Si1924[1][3]*T11924[6][5]);
T1924[4][4]=S2419[3][1]*((-(eff[2].x[3]*Si1924[2][3]) + eff[2].x[2]*Si1924[3][3])*T11924[3][6] + Si1924[1][1]*T11924[4][6] + Si1924[1][2]*T11924[5][6]) + S2419[1][1]*((-(eff[2].x[3]*Si1924[2][1]) + eff[2].x[2]*Si1924[3][1])*T11924[1][4] + Si1924[1][2]*T11924[5][4] + Si1924[1][3]*T11924[6][4]) + S2419[2][1]*((-(eff[2].x[3]*Si1924[2][2]) + eff[2].x[2]*Si1924[3][2])*T11924[2][5] + Si1924[1][1]*T11924[4][5] + Si1924[1][3]*T11924[6][5]);
T1924[4][5]=S2419[3][2]*((-(eff[2].x[3]*Si1924[2][3]) + eff[2].x[2]*Si1924[3][3])*T11924[3][6] + Si1924[1][1]*T11924[4][6] + Si1924[1][2]*T11924[5][6]) + S2419[1][2]*((-(eff[2].x[3]*Si1924[2][1]) + eff[2].x[2]*Si1924[3][1])*T11924[1][4] + Si1924[1][2]*T11924[5][4] + Si1924[1][3]*T11924[6][4]) + S2419[2][2]*((-(eff[2].x[3]*Si1924[2][2]) + eff[2].x[2]*Si1924[3][2])*T11924[2][5] + Si1924[1][1]*T11924[4][5] + Si1924[1][3]*T11924[6][5]);
T1924[4][6]=S2419[3][3]*((-(eff[2].x[3]*Si1924[2][3]) + eff[2].x[2]*Si1924[3][3])*T11924[3][6] + Si1924[1][1]*T11924[4][6] + Si1924[1][2]*T11924[5][6]) + S2419[1][3]*((-(eff[2].x[3]*Si1924[2][1]) + eff[2].x[2]*Si1924[3][1])*T11924[1][4] + Si1924[1][2]*T11924[5][4] + Si1924[1][3]*T11924[6][4]) + S2419[2][3]*((-(eff[2].x[3]*Si1924[2][2]) + eff[2].x[2]*Si1924[3][2])*T11924[2][5] + Si1924[1][1]*T11924[4][5] + Si1924[1][3]*T11924[6][5]);

T1924[5][1]=S2419[3][1]*((eff[2].x[3]*Si1924[1][1] - eff[2].x[1]*Si1924[3][1])*T11924[1][3] + (eff[2].x[3]*Si1924[1][2] - eff[2].x[1]*Si1924[3][2])*T11924[2][3]) + S2419[1][1]*((eff[2].x[3]*Si1924[1][2] - eff[2].x[1]*Si1924[3][2])*T11924[2][1] + (eff[2].x[3]*Si1924[1][3] - eff[2].x[1]*Si1924[3][3])*T11924[3][1]) + S2419[2][1]*((eff[2].x[3]*Si1924[1][1] - eff[2].x[1]*Si1924[3][1])*T11924[1][2] + (eff[2].x[3]*Si1924[1][3] - eff[2].x[1]*Si1924[3][3])*T11924[3][2]) + (-(eff[2].x[3]*S2419[3][2]) + eff[2].x[2]*S2419[3][3])*((eff[2].x[3]*Si1924[1][3] - eff[2].x[1]*Si1924[3][3])*T11924[3][6] + Si1924[2][1]*T11924[4][6] + Si1924[2][2]*T11924[5][6]) + (-(eff[2].x[3]*S2419[1][2]) + eff[2].x[2]*S2419[1][3])*((eff[2].x[3]*Si1924[1][1] - eff[2].x[1]*Si1924[3][1])*T11924[1][4] + Si1924[2][2]*T11924[5][4] + Si1924[2][3]*T11924[6][4]) + (-(eff[2].x[3]*S2419[2][2]) + eff[2].x[2]*S2419[2][3])*((eff[2].x[3]*Si1924[1][2] - eff[2].x[1]*Si1924[3][2])*T11924[2][5] + Si1924[2][1]*T11924[4][5] + Si1924[2][3]*T11924[6][5]);
T1924[5][2]=S2419[3][2]*((eff[2].x[3]*Si1924[1][1] - eff[2].x[1]*Si1924[3][1])*T11924[1][3] + (eff[2].x[3]*Si1924[1][2] - eff[2].x[1]*Si1924[3][2])*T11924[2][3]) + S2419[1][2]*((eff[2].x[3]*Si1924[1][2] - eff[2].x[1]*Si1924[3][2])*T11924[2][1] + (eff[2].x[3]*Si1924[1][3] - eff[2].x[1]*Si1924[3][3])*T11924[3][1]) + S2419[2][2]*((eff[2].x[3]*Si1924[1][1] - eff[2].x[1]*Si1924[3][1])*T11924[1][2] + (eff[2].x[3]*Si1924[1][3] - eff[2].x[1]*Si1924[3][3])*T11924[3][2]) + (eff[2].x[3]*S2419[3][1] - eff[2].x[1]*S2419[3][3])*((eff[2].x[3]*Si1924[1][3] - eff[2].x[1]*Si1924[3][3])*T11924[3][6] + Si1924[2][1]*T11924[4][6] + Si1924[2][2]*T11924[5][6]) + (eff[2].x[3]*S2419[1][1] - eff[2].x[1]*S2419[1][3])*((eff[2].x[3]*Si1924[1][1] - eff[2].x[1]*Si1924[3][1])*T11924[1][4] + Si1924[2][2]*T11924[5][4] + Si1924[2][3]*T11924[6][4]) + (eff[2].x[3]*S2419[2][1] - eff[2].x[1]*S2419[2][3])*((eff[2].x[3]*Si1924[1][2] - eff[2].x[1]*Si1924[3][2])*T11924[2][5] + Si1924[2][1]*T11924[4][5] + Si1924[2][3]*T11924[6][5]);
T1924[5][3]=S2419[3][3]*((eff[2].x[3]*Si1924[1][1] - eff[2].x[1]*Si1924[3][1])*T11924[1][3] + (eff[2].x[3]*Si1924[1][2] - eff[2].x[1]*Si1924[3][2])*T11924[2][3]) + S2419[1][3]*((eff[2].x[3]*Si1924[1][2] - eff[2].x[1]*Si1924[3][2])*T11924[2][1] + (eff[2].x[3]*Si1924[1][3] - eff[2].x[1]*Si1924[3][3])*T11924[3][1]) + S2419[2][3]*((eff[2].x[3]*Si1924[1][1] - eff[2].x[1]*Si1924[3][1])*T11924[1][2] + (eff[2].x[3]*Si1924[1][3] - eff[2].x[1]*Si1924[3][3])*T11924[3][2]) + (-(eff[2].x[2]*S2419[3][1]) + eff[2].x[1]*S2419[3][2])*((eff[2].x[3]*Si1924[1][3] - eff[2].x[1]*Si1924[3][3])*T11924[3][6] + Si1924[2][1]*T11924[4][6] + Si1924[2][2]*T11924[5][6]) + (-(eff[2].x[2]*S2419[1][1]) + eff[2].x[1]*S2419[1][2])*((eff[2].x[3]*Si1924[1][1] - eff[2].x[1]*Si1924[3][1])*T11924[1][4] + Si1924[2][2]*T11924[5][4] + Si1924[2][3]*T11924[6][4]) + (-(eff[2].x[2]*S2419[2][1]) + eff[2].x[1]*S2419[2][2])*((eff[2].x[3]*Si1924[1][2] - eff[2].x[1]*Si1924[3][2])*T11924[2][5] + Si1924[2][1]*T11924[4][5] + Si1924[2][3]*T11924[6][5]);
T1924[5][4]=S2419[3][1]*((eff[2].x[3]*Si1924[1][3] - eff[2].x[1]*Si1924[3][3])*T11924[3][6] + Si1924[2][1]*T11924[4][6] + Si1924[2][2]*T11924[5][6]) + S2419[1][1]*((eff[2].x[3]*Si1924[1][1] - eff[2].x[1]*Si1924[3][1])*T11924[1][4] + Si1924[2][2]*T11924[5][4] + Si1924[2][3]*T11924[6][4]) + S2419[2][1]*((eff[2].x[3]*Si1924[1][2] - eff[2].x[1]*Si1924[3][2])*T11924[2][5] + Si1924[2][1]*T11924[4][5] + Si1924[2][3]*T11924[6][5]);
T1924[5][5]=S2419[3][2]*((eff[2].x[3]*Si1924[1][3] - eff[2].x[1]*Si1924[3][3])*T11924[3][6] + Si1924[2][1]*T11924[4][6] + Si1924[2][2]*T11924[5][6]) + S2419[1][2]*((eff[2].x[3]*Si1924[1][1] - eff[2].x[1]*Si1924[3][1])*T11924[1][4] + Si1924[2][2]*T11924[5][4] + Si1924[2][3]*T11924[6][4]) + S2419[2][2]*((eff[2].x[3]*Si1924[1][2] - eff[2].x[1]*Si1924[3][2])*T11924[2][5] + Si1924[2][1]*T11924[4][5] + Si1924[2][3]*T11924[6][5]);
T1924[5][6]=S2419[3][3]*((eff[2].x[3]*Si1924[1][3] - eff[2].x[1]*Si1924[3][3])*T11924[3][6] + Si1924[2][1]*T11924[4][6] + Si1924[2][2]*T11924[5][6]) + S2419[1][3]*((eff[2].x[3]*Si1924[1][1] - eff[2].x[1]*Si1924[3][1])*T11924[1][4] + Si1924[2][2]*T11924[5][4] + Si1924[2][3]*T11924[6][4]) + S2419[2][3]*((eff[2].x[3]*Si1924[1][2] - eff[2].x[1]*Si1924[3][2])*T11924[2][5] + Si1924[2][1]*T11924[4][5] + Si1924[2][3]*T11924[6][5]);

T1924[6][1]=S2419[3][1]*((-(eff[2].x[2]*Si1924[1][1]) + eff[2].x[1]*Si1924[2][1])*T11924[1][3] + (-(eff[2].x[2]*Si1924[1][2]) + eff[2].x[1]*Si1924[2][2])*T11924[2][3]) + S2419[1][1]*((-(eff[2].x[2]*Si1924[1][2]) + eff[2].x[1]*Si1924[2][2])*T11924[2][1] + (-(eff[2].x[2]*Si1924[1][3]) + eff[2].x[1]*Si1924[2][3])*T11924[3][1]) + S2419[2][1]*((-(eff[2].x[2]*Si1924[1][1]) + eff[2].x[1]*Si1924[2][1])*T11924[1][2] + (-(eff[2].x[2]*Si1924[1][3]) + eff[2].x[1]*Si1924[2][3])*T11924[3][2]) + (-(eff[2].x[3]*S2419[3][2]) + eff[2].x[2]*S2419[3][3])*((-(eff[2].x[2]*Si1924[1][3]) + eff[2].x[1]*Si1924[2][3])*T11924[3][6] + Si1924[3][1]*T11924[4][6] + Si1924[3][2]*T11924[5][6]) + (-(eff[2].x[3]*S2419[1][2]) + eff[2].x[2]*S2419[1][3])*((-(eff[2].x[2]*Si1924[1][1]) + eff[2].x[1]*Si1924[2][1])*T11924[1][4] + Si1924[3][2]*T11924[5][4] + Si1924[3][3]*T11924[6][4]) + (-(eff[2].x[3]*S2419[2][2]) + eff[2].x[2]*S2419[2][3])*((-(eff[2].x[2]*Si1924[1][2]) + eff[2].x[1]*Si1924[2][2])*T11924[2][5] + Si1924[3][1]*T11924[4][5] + Si1924[3][3]*T11924[6][5]);
T1924[6][2]=S2419[3][2]*((-(eff[2].x[2]*Si1924[1][1]) + eff[2].x[1]*Si1924[2][1])*T11924[1][3] + (-(eff[2].x[2]*Si1924[1][2]) + eff[2].x[1]*Si1924[2][2])*T11924[2][3]) + S2419[1][2]*((-(eff[2].x[2]*Si1924[1][2]) + eff[2].x[1]*Si1924[2][2])*T11924[2][1] + (-(eff[2].x[2]*Si1924[1][3]) + eff[2].x[1]*Si1924[2][3])*T11924[3][1]) + S2419[2][2]*((-(eff[2].x[2]*Si1924[1][1]) + eff[2].x[1]*Si1924[2][1])*T11924[1][2] + (-(eff[2].x[2]*Si1924[1][3]) + eff[2].x[1]*Si1924[2][3])*T11924[3][2]) + (eff[2].x[3]*S2419[3][1] - eff[2].x[1]*S2419[3][3])*((-(eff[2].x[2]*Si1924[1][3]) + eff[2].x[1]*Si1924[2][3])*T11924[3][6] + Si1924[3][1]*T11924[4][6] + Si1924[3][2]*T11924[5][6]) + (eff[2].x[3]*S2419[1][1] - eff[2].x[1]*S2419[1][3])*((-(eff[2].x[2]*Si1924[1][1]) + eff[2].x[1]*Si1924[2][1])*T11924[1][4] + Si1924[3][2]*T11924[5][4] + Si1924[3][3]*T11924[6][4]) + (eff[2].x[3]*S2419[2][1] - eff[2].x[1]*S2419[2][3])*((-(eff[2].x[2]*Si1924[1][2]) + eff[2].x[1]*Si1924[2][2])*T11924[2][5] + Si1924[3][1]*T11924[4][5] + Si1924[3][3]*T11924[6][5]);
T1924[6][3]=S2419[3][3]*((-(eff[2].x[2]*Si1924[1][1]) + eff[2].x[1]*Si1924[2][1])*T11924[1][3] + (-(eff[2].x[2]*Si1924[1][2]) + eff[2].x[1]*Si1924[2][2])*T11924[2][3]) + S2419[1][3]*((-(eff[2].x[2]*Si1924[1][2]) + eff[2].x[1]*Si1924[2][2])*T11924[2][1] + (-(eff[2].x[2]*Si1924[1][3]) + eff[2].x[1]*Si1924[2][3])*T11924[3][1]) + S2419[2][3]*((-(eff[2].x[2]*Si1924[1][1]) + eff[2].x[1]*Si1924[2][1])*T11924[1][2] + (-(eff[2].x[2]*Si1924[1][3]) + eff[2].x[1]*Si1924[2][3])*T11924[3][2]) + (-(eff[2].x[2]*S2419[3][1]) + eff[2].x[1]*S2419[3][2])*((-(eff[2].x[2]*Si1924[1][3]) + eff[2].x[1]*Si1924[2][3])*T11924[3][6] + Si1924[3][1]*T11924[4][6] + Si1924[3][2]*T11924[5][6]) + (-(eff[2].x[2]*S2419[1][1]) + eff[2].x[1]*S2419[1][2])*((-(eff[2].x[2]*Si1924[1][1]) + eff[2].x[1]*Si1924[2][1])*T11924[1][4] + Si1924[3][2]*T11924[5][4] + Si1924[3][3]*T11924[6][4]) + (-(eff[2].x[2]*S2419[2][1]) + eff[2].x[1]*S2419[2][2])*((-(eff[2].x[2]*Si1924[1][2]) + eff[2].x[1]*Si1924[2][2])*T11924[2][5] + Si1924[3][1]*T11924[4][5] + Si1924[3][3]*T11924[6][5]);
T1924[6][4]=S2419[3][1]*((-(eff[2].x[2]*Si1924[1][3]) + eff[2].x[1]*Si1924[2][3])*T11924[3][6] + Si1924[3][1]*T11924[4][6] + Si1924[3][2]*T11924[5][6]) + S2419[1][1]*((-(eff[2].x[2]*Si1924[1][1]) + eff[2].x[1]*Si1924[2][1])*T11924[1][4] + Si1924[3][2]*T11924[5][4] + Si1924[3][3]*T11924[6][4]) + S2419[2][1]*((-(eff[2].x[2]*Si1924[1][2]) + eff[2].x[1]*Si1924[2][2])*T11924[2][5] + Si1924[3][1]*T11924[4][5] + Si1924[3][3]*T11924[6][5]);
T1924[6][5]=S2419[3][2]*((-(eff[2].x[2]*Si1924[1][3]) + eff[2].x[1]*Si1924[2][3])*T11924[3][6] + Si1924[3][1]*T11924[4][6] + Si1924[3][2]*T11924[5][6]) + S2419[1][2]*((-(eff[2].x[2]*Si1924[1][1]) + eff[2].x[1]*Si1924[2][1])*T11924[1][4] + Si1924[3][2]*T11924[5][4] + Si1924[3][3]*T11924[6][4]) + S2419[2][2]*((-(eff[2].x[2]*Si1924[1][2]) + eff[2].x[1]*Si1924[2][2])*T11924[2][5] + Si1924[3][1]*T11924[4][5] + Si1924[3][3]*T11924[6][5]);
T1924[6][6]=S2419[3][3]*((-(eff[2].x[2]*Si1924[1][3]) + eff[2].x[1]*Si1924[2][3])*T11924[3][6] + Si1924[3][1]*T11924[4][6] + Si1924[3][2]*T11924[5][6]) + S2419[1][3]*((-(eff[2].x[2]*Si1924[1][1]) + eff[2].x[1]*Si1924[2][1])*T11924[1][4] + Si1924[3][2]*T11924[5][4] + Si1924[3][3]*T11924[6][4]) + S2419[2][3]*((-(eff[2].x[2]*Si1924[1][2]) + eff[2].x[1]*Si1924[2][2])*T11924[2][5] + Si1924[3][1]*T11924[4][5] + Si1924[3][3]*T11924[6][5]);



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
JA19[1][1]=0. + T1924[1][1];
JA19[1][2]=0. + links[12].mcm[3] + T1924[1][2];
JA19[1][3]=0. - links[12].mcm[2] + T1924[1][3];
JA19[1][4]=0. + links[12].m + T1924[1][4];
JA19[1][5]=0. + T1924[1][5];
JA19[1][6]=0. + T1924[1][6];

JA19[2][1]=0. - links[12].mcm[3] + T1924[2][1];
JA19[2][2]=0. + T1924[2][2];
JA19[2][3]=0. + links[12].mcm[1] + T1924[2][3];
JA19[2][4]=0. + T1924[2][4];
JA19[2][5]=0. + links[12].m + T1924[2][5];
JA19[2][6]=0. + T1924[2][6];

JA19[3][1]=0. + links[12].mcm[2] + T1924[3][1];
JA19[3][2]=0. - links[12].mcm[1] + T1924[3][2];
JA19[3][3]=0. + T1924[3][3];
JA19[3][4]=0. + T1924[3][4];
JA19[3][5]=0. + T1924[3][5];
JA19[3][6]=0. + links[12].m + T1924[3][6];

JA19[4][1]=0. + links[12].inertia[1][1] + T1924[4][1];
JA19[4][2]=0. + links[12].inertia[1][2] + T1924[4][2];
JA19[4][3]=0. + links[12].inertia[1][3] + T1924[4][3];
JA19[4][4]=0. + T1924[4][4];
JA19[4][5]=0. - links[12].mcm[3] + T1924[4][5];
JA19[4][6]=0. + links[12].mcm[2] + T1924[4][6];

JA19[5][1]=0. + links[12].inertia[1][2] + T1924[5][1];
JA19[5][2]=0. + links[12].inertia[2][2] + T1924[5][2];
JA19[5][3]=0. + links[12].inertia[2][3] + T1924[5][3];
JA19[5][4]=0. + links[12].mcm[3] + T1924[5][4];
JA19[5][5]=0. + T1924[5][5];
JA19[5][6]=0. - links[12].mcm[1] + T1924[5][6];

JA19[6][1]=0. + links[12].inertia[1][3] + T1924[6][1];
JA19[6][2]=0. + links[12].inertia[2][3] + T1924[6][2];
JA19[6][3]=0. + links[12].inertia[3][3] + T1924[6][3];
JA19[6][4]=0. - links[12].mcm[2] + T1924[6][4];
JA19[6][5]=0. + links[12].mcm[1] + T1924[6][5];
JA19[6][6]=0. + T1924[6][6];


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
T1819[1][2]=Si1819[1][1]*T11819[1][3] + Si1819[1][2]*T11819[2][3];
T1819[1][3]=S1918[1][3]*(Si1819[1][1]*T11819[1][1] + Si1819[1][2]*T11819[2][1]) + S1918[2][3]*(Si1819[1][1]*T11819[1][2] + Si1819[1][2]*T11819[2][2]);
T1819[1][4]=S1918[1][1]*(Si1819[1][1]*T11819[1][4] + Si1819[1][2]*T11819[2][4]) + S1918[2][1]*(Si1819[1][1]*T11819[1][5] + Si1819[1][2]*T11819[2][5]);
T1819[1][5]=Si1819[1][1]*T11819[1][6] + Si1819[1][2]*T11819[2][6];
T1819[1][6]=S1918[1][3]*(Si1819[1][1]*T11819[1][4] + Si1819[1][2]*T11819[2][4]) + S1918[2][3]*(Si1819[1][1]*T11819[1][5] + Si1819[1][2]*T11819[2][5]);

T1819[2][1]=S1918[1][1]*T11819[3][1] + S1918[2][1]*T11819[3][2];
T1819[2][2]=T11819[3][3];
T1819[2][3]=S1918[1][3]*T11819[3][1] + S1918[2][3]*T11819[3][2];
T1819[2][4]=S1918[1][1]*T11819[3][4] + S1918[2][1]*T11819[3][5];
T1819[2][5]=T11819[3][6];
T1819[2][6]=S1918[1][3]*T11819[3][4] + S1918[2][3]*T11819[3][5];

T1819[3][1]=S1918[1][1]*(Si1819[3][1]*T11819[1][1] + Si1819[3][2]*T11819[2][1]) + S1918[2][1]*(Si1819[3][1]*T11819[1][2] + Si1819[3][2]*T11819[2][2]);
T1819[3][2]=Si1819[3][1]*T11819[1][3] + Si1819[3][2]*T11819[2][3];
T1819[3][3]=S1918[1][3]*(Si1819[3][1]*T11819[1][1] + Si1819[3][2]*T11819[2][1]) + S1918[2][3]*(Si1819[3][1]*T11819[1][2] + Si1819[3][2]*T11819[2][2]);
T1819[3][4]=S1918[1][1]*(Si1819[3][1]*T11819[1][4] + Si1819[3][2]*T11819[2][4]) + S1918[2][1]*(Si1819[3][1]*T11819[1][5] + Si1819[3][2]*T11819[2][5]);
T1819[3][5]=Si1819[3][1]*T11819[1][6] + Si1819[3][2]*T11819[2][6];
T1819[3][6]=S1918[1][3]*(Si1819[3][1]*T11819[1][4] + Si1819[3][2]*T11819[2][4]) + S1918[2][3]*(Si1819[3][1]*T11819[1][5] + Si1819[3][2]*T11819[2][5]);

T1819[4][1]=S1918[1][1]*(Si1819[1][1]*T11819[4][1] + Si1819[1][2]*T11819[5][1]) + S1918[2][1]*(Si1819[1][1]*T11819[4][2] + Si1819[1][2]*T11819[5][2]);
T1819[4][2]=Si1819[1][1]*T11819[4][3] + Si1819[1][2]*T11819[5][3];
T1819[4][3]=S1918[1][3]*(Si1819[1][1]*T11819[4][1] + Si1819[1][2]*T11819[5][1]) + S1918[2][3]*(Si1819[1][1]*T11819[4][2] + Si1819[1][2]*T11819[5][2]);
T1819[4][4]=S1918[1][1]*(Si1819[1][1]*T11819[4][4] + Si1819[1][2]*T11819[5][4]) + S1918[2][1]*(Si1819[1][1]*T11819[4][5] + Si1819[1][2]*T11819[5][5]);
T1819[4][5]=Si1819[1][1]*T11819[4][6] + Si1819[1][2]*T11819[5][6];
T1819[4][6]=S1918[1][3]*(Si1819[1][1]*T11819[4][4] + Si1819[1][2]*T11819[5][4]) + S1918[2][3]*(Si1819[1][1]*T11819[4][5] + Si1819[1][2]*T11819[5][5]);

T1819[5][1]=S1918[1][1]*T11819[6][1] + S1918[2][1]*T11819[6][2];
T1819[5][2]=T11819[6][3];
T1819[5][3]=S1918[1][3]*T11819[6][1] + S1918[2][3]*T11819[6][2];
T1819[5][4]=S1918[1][1]*T11819[6][4] + S1918[2][1]*T11819[6][5];
T1819[5][5]=T11819[6][6];
T1819[5][6]=S1918[1][3]*T11819[6][4] + S1918[2][3]*T11819[6][5];

T1819[6][1]=S1918[1][1]*(Si1819[3][1]*T11819[4][1] + Si1819[3][2]*T11819[5][1]) + S1918[2][1]*(Si1819[3][1]*T11819[4][2] + Si1819[3][2]*T11819[5][2]);
T1819[6][2]=Si1819[3][1]*T11819[4][3] + Si1819[3][2]*T11819[5][3];
T1819[6][3]=S1918[1][3]*(Si1819[3][1]*T11819[4][1] + Si1819[3][2]*T11819[5][1]) + S1918[2][3]*(Si1819[3][1]*T11819[4][2] + Si1819[3][2]*T11819[5][2]);
T1819[6][4]=S1918[1][1]*(Si1819[3][1]*T11819[4][4] + Si1819[3][2]*T11819[5][4]) + S1918[2][1]*(Si1819[3][1]*T11819[4][5] + Si1819[3][2]*T11819[5][5]);
T1819[6][5]=Si1819[3][1]*T11819[4][6] + Si1819[3][2]*T11819[5][6];
T1819[6][6]=S1918[1][3]*(Si1819[3][1]*T11819[4][4] + Si1819[3][2]*T11819[5][4]) + S1918[2][3]*(Si1819[3][1]*T11819[4][5] + Si1819[3][2]*T11819[5][5]);



}


void
hoap3_InvDynArtfunc13(void)
      {
JA18[1][1]=T1819[1][1];
JA18[1][2]=links[11].mcm[3] + T1819[1][2];
JA18[1][3]=-links[11].mcm[2] + T1819[1][3];
JA18[1][4]=links[11].m + T1819[1][4];
JA18[1][5]=T1819[1][5];
JA18[1][6]=T1819[1][6];

JA18[2][1]=-links[11].mcm[3] + T1819[2][1];
JA18[2][2]=T1819[2][2];
JA18[2][3]=links[11].mcm[1] + T1819[2][3];
JA18[2][4]=T1819[2][4];
JA18[2][5]=links[11].m + T1819[2][5];
JA18[2][6]=T1819[2][6];

JA18[3][1]=links[11].mcm[2] + T1819[3][1];
JA18[3][2]=-links[11].mcm[1] + T1819[3][2];
JA18[3][3]=T1819[3][3];
JA18[3][4]=T1819[3][4];
JA18[3][5]=T1819[3][5];
JA18[3][6]=links[11].m + T1819[3][6];

JA18[4][1]=links[11].inertia[1][1] + T1819[4][1];
JA18[4][2]=links[11].inertia[1][2] + T1819[4][2];
JA18[4][3]=links[11].inertia[1][3] + T1819[4][3];
JA18[4][4]=T1819[4][4];
JA18[4][5]=-links[11].mcm[3] + T1819[4][5];
JA18[4][6]=links[11].mcm[2] + T1819[4][6];

JA18[5][1]=links[11].inertia[1][2] + T1819[5][1];
JA18[5][2]=links[11].inertia[2][2] + T1819[5][2];
JA18[5][3]=links[11].inertia[2][3] + T1819[5][3];
JA18[5][4]=links[11].mcm[3] + T1819[5][4];
JA18[5][5]=T1819[5][5];
JA18[5][6]=-links[11].mcm[1] + T1819[5][6];

JA18[6][1]=links[11].inertia[1][3] + T1819[6][1];
JA18[6][2]=links[11].inertia[2][3] + T1819[6][2];
JA18[6][3]=links[11].inertia[3][3] + T1819[6][3];
JA18[6][4]=-links[11].mcm[2] + T1819[6][4];
JA18[6][5]=links[11].mcm[1] + T1819[6][5];
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
T1718[1][2]=S1817[1][2]*(Si1718[1][1]*T11718[1][1] + Si1718[1][2]*T11718[2][1]) + S1817[2][2]*(Si1718[1][1]*T11718[1][2] + Si1718[1][2]*T11718[2][2]) + LEGLINK3*(Si1718[1][1]*T11718[1][6] + Si1718[1][2]*T11718[2][6]);
T1718[1][3]=Si1718[1][1]*T11718[1][3] + Si1718[1][2]*T11718[2][3] - LEGLINK3*S1817[1][2]*(Si1718[1][1]*T11718[1][4] + Si1718[1][2]*T11718[2][4]) - LEGLINK3*S1817[2][2]*(Si1718[1][1]*T11718[1][5] + Si1718[1][2]*T11718[2][5]);
T1718[1][4]=S1817[1][1]*(Si1718[1][1]*T11718[1][4] + Si1718[1][2]*T11718[2][4]) + S1817[2][1]*(Si1718[1][1]*T11718[1][5] + Si1718[1][2]*T11718[2][5]);
T1718[1][5]=S1817[1][2]*(Si1718[1][1]*T11718[1][4] + Si1718[1][2]*T11718[2][4]) + S1817[2][2]*(Si1718[1][1]*T11718[1][5] + Si1718[1][2]*T11718[2][5]);
T1718[1][6]=Si1718[1][1]*T11718[1][6] + Si1718[1][2]*T11718[2][6];

T1718[2][1]=S1817[1][1]*(Si1718[2][1]*T11718[1][1] + Si1718[2][2]*T11718[2][1]) + S1817[2][1]*(Si1718[2][1]*T11718[1][2] + Si1718[2][2]*T11718[2][2]);
T1718[2][2]=S1817[1][2]*(Si1718[2][1]*T11718[1][1] + Si1718[2][2]*T11718[2][1]) + S1817[2][2]*(Si1718[2][1]*T11718[1][2] + Si1718[2][2]*T11718[2][2]) + LEGLINK3*(Si1718[2][1]*T11718[1][6] + Si1718[2][2]*T11718[2][6]);
T1718[2][3]=Si1718[2][1]*T11718[1][3] + Si1718[2][2]*T11718[2][3] - LEGLINK3*S1817[1][2]*(Si1718[2][1]*T11718[1][4] + Si1718[2][2]*T11718[2][4]) - LEGLINK3*S1817[2][2]*(Si1718[2][1]*T11718[1][5] + Si1718[2][2]*T11718[2][5]);
T1718[2][4]=S1817[1][1]*(Si1718[2][1]*T11718[1][4] + Si1718[2][2]*T11718[2][4]) + S1817[2][1]*(Si1718[2][1]*T11718[1][5] + Si1718[2][2]*T11718[2][5]);
T1718[2][5]=S1817[1][2]*(Si1718[2][1]*T11718[1][4] + Si1718[2][2]*T11718[2][4]) + S1817[2][2]*(Si1718[2][1]*T11718[1][5] + Si1718[2][2]*T11718[2][5]);
T1718[2][6]=Si1718[2][1]*T11718[1][6] + Si1718[2][2]*T11718[2][6];

T1718[3][1]=S1817[1][1]*T11718[3][1] + S1817[2][1]*T11718[3][2];
T1718[3][2]=S1817[1][2]*T11718[3][1] + S1817[2][2]*T11718[3][2] + LEGLINK3*T11718[3][6];
T1718[3][3]=T11718[3][3] - LEGLINK3*S1817[1][2]*T11718[3][4] - LEGLINK3*S1817[2][2]*T11718[3][5];
T1718[3][4]=S1817[1][1]*T11718[3][4] + S1817[2][1]*T11718[3][5];
T1718[3][5]=S1817[1][2]*T11718[3][4] + S1817[2][2]*T11718[3][5];
T1718[3][6]=T11718[3][6];

T1718[4][1]=S1817[1][1]*(Si1718[1][1]*T11718[4][1] + Si1718[1][2]*T11718[5][1]) + S1817[2][1]*(Si1718[1][1]*T11718[4][2] + Si1718[1][2]*T11718[5][2]);
T1718[4][2]=S1817[1][2]*(Si1718[1][1]*T11718[4][1] + Si1718[1][2]*T11718[5][1]) + S1817[2][2]*(Si1718[1][1]*T11718[4][2] + Si1718[1][2]*T11718[5][2]) + LEGLINK3*(Si1718[1][1]*T11718[4][6] + Si1718[1][2]*T11718[5][6]);
T1718[4][3]=Si1718[1][1]*T11718[4][3] + Si1718[1][2]*T11718[5][3] - LEGLINK3*S1817[1][2]*(Si1718[1][1]*T11718[4][4] + Si1718[1][2]*T11718[5][4]) - LEGLINK3*S1817[2][2]*(Si1718[1][1]*T11718[4][5] + Si1718[1][2]*T11718[5][5]);
T1718[4][4]=S1817[1][1]*(Si1718[1][1]*T11718[4][4] + Si1718[1][2]*T11718[5][4]) + S1817[2][1]*(Si1718[1][1]*T11718[4][5] + Si1718[1][2]*T11718[5][5]);
T1718[4][5]=S1817[1][2]*(Si1718[1][1]*T11718[4][4] + Si1718[1][2]*T11718[5][4]) + S1817[2][2]*(Si1718[1][1]*T11718[4][5] + Si1718[1][2]*T11718[5][5]);
T1718[4][6]=Si1718[1][1]*T11718[4][6] + Si1718[1][2]*T11718[5][6];

T1718[5][1]=S1817[1][1]*(LEGLINK3*T11718[3][1] + Si1718[2][1]*T11718[4][1] + Si1718[2][2]*T11718[5][1]) + S1817[2][1]*(LEGLINK3*T11718[3][2] + Si1718[2][1]*T11718[4][2] + Si1718[2][2]*T11718[5][2]);
T1718[5][2]=S1817[1][2]*(LEGLINK3*T11718[3][1] + Si1718[2][1]*T11718[4][1] + Si1718[2][2]*T11718[5][1]) + S1817[2][2]*(LEGLINK3*T11718[3][2] + Si1718[2][1]*T11718[4][2] + Si1718[2][2]*T11718[5][2]) + LEGLINK3*(LEGLINK3*T11718[3][6] + Si1718[2][1]*T11718[4][6] + Si1718[2][2]*T11718[5][6]);
T1718[5][3]=LEGLINK3*T11718[3][3] + Si1718[2][1]*T11718[4][3] + Si1718[2][2]*T11718[5][3] - LEGLINK3*S1817[1][2]*(LEGLINK3*T11718[3][4] + Si1718[2][1]*T11718[4][4] + Si1718[2][2]*T11718[5][4]) - LEGLINK3*S1817[2][2]*(LEGLINK3*T11718[3][5] + Si1718[2][1]*T11718[4][5] + Si1718[2][2]*T11718[5][5]);
T1718[5][4]=S1817[1][1]*(LEGLINK3*T11718[3][4] + Si1718[2][1]*T11718[4][4] + Si1718[2][2]*T11718[5][4]) + S1817[2][1]*(LEGLINK3*T11718[3][5] + Si1718[2][1]*T11718[4][5] + Si1718[2][2]*T11718[5][5]);
T1718[5][5]=S1817[1][2]*(LEGLINK3*T11718[3][4] + Si1718[2][1]*T11718[4][4] + Si1718[2][2]*T11718[5][4]) + S1817[2][2]*(LEGLINK3*T11718[3][5] + Si1718[2][1]*T11718[4][5] + Si1718[2][2]*T11718[5][5]);
T1718[5][6]=LEGLINK3*T11718[3][6] + Si1718[2][1]*T11718[4][6] + Si1718[2][2]*T11718[5][6];

T1718[6][1]=S1817[1][1]*(-(LEGLINK3*Si1718[2][1]*T11718[1][1]) - LEGLINK3*Si1718[2][2]*T11718[2][1] + T11718[6][1]) + S1817[2][1]*(-(LEGLINK3*Si1718[2][1]*T11718[1][2]) - LEGLINK3*Si1718[2][2]*T11718[2][2] + T11718[6][2]);
T1718[6][2]=S1817[1][2]*(-(LEGLINK3*Si1718[2][1]*T11718[1][1]) - LEGLINK3*Si1718[2][2]*T11718[2][1] + T11718[6][1]) + S1817[2][2]*(-(LEGLINK3*Si1718[2][1]*T11718[1][2]) - LEGLINK3*Si1718[2][2]*T11718[2][2] + T11718[6][2]) + LEGLINK3*(-(LEGLINK3*Si1718[2][1]*T11718[1][6]) - LEGLINK3*Si1718[2][2]*T11718[2][6] + T11718[6][6]);
T1718[6][3]=-(LEGLINK3*Si1718[2][1]*T11718[1][3]) - LEGLINK3*Si1718[2][2]*T11718[2][3] + T11718[6][3] - LEGLINK3*S1817[1][2]*(-(LEGLINK3*Si1718[2][1]*T11718[1][4]) - LEGLINK3*Si1718[2][2]*T11718[2][4] + T11718[6][4]) - LEGLINK3*S1817[2][2]*(-(LEGLINK3*Si1718[2][1]*T11718[1][5]) - LEGLINK3*Si1718[2][2]*T11718[2][5] + T11718[6][5]);
T1718[6][4]=S1817[1][1]*(-(LEGLINK3*Si1718[2][1]*T11718[1][4]) - LEGLINK3*Si1718[2][2]*T11718[2][4] + T11718[6][4]) + S1817[2][1]*(-(LEGLINK3*Si1718[2][1]*T11718[1][5]) - LEGLINK3*Si1718[2][2]*T11718[2][5] + T11718[6][5]);
T1718[6][5]=S1817[1][2]*(-(LEGLINK3*Si1718[2][1]*T11718[1][4]) - LEGLINK3*Si1718[2][2]*T11718[2][4] + T11718[6][4]) + S1817[2][2]*(-(LEGLINK3*Si1718[2][1]*T11718[1][5]) - LEGLINK3*Si1718[2][2]*T11718[2][5] + T11718[6][5]);
T1718[6][6]=-(LEGLINK3*Si1718[2][1]*T11718[1][6]) - LEGLINK3*Si1718[2][2]*T11718[2][6] + T11718[6][6];



}


void
hoap3_InvDynArtfunc14(void)
      {
JA17[1][1]=T1718[1][1];
JA17[1][2]=links[10].mcm[3] + T1718[1][2];
JA17[1][3]=-links[10].mcm[2] + T1718[1][3];
JA17[1][4]=links[10].m + T1718[1][4];
JA17[1][5]=T1718[1][5];
JA17[1][6]=T1718[1][6];

JA17[2][1]=-links[10].mcm[3] + T1718[2][1];
JA17[2][2]=T1718[2][2];
JA17[2][3]=links[10].mcm[1] + T1718[2][3];
JA17[2][4]=T1718[2][4];
JA17[2][5]=links[10].m + T1718[2][5];
JA17[2][6]=T1718[2][6];

JA17[3][1]=links[10].mcm[2] + T1718[3][1];
JA17[3][2]=-links[10].mcm[1] + T1718[3][2];
JA17[3][3]=T1718[3][3];
JA17[3][4]=T1718[3][4];
JA17[3][5]=T1718[3][5];
JA17[3][6]=links[10].m + T1718[3][6];

JA17[4][1]=links[10].inertia[1][1] + T1718[4][1];
JA17[4][2]=links[10].inertia[1][2] + T1718[4][2];
JA17[4][3]=links[10].inertia[1][3] + T1718[4][3];
JA17[4][4]=T1718[4][4];
JA17[4][5]=-links[10].mcm[3] + T1718[4][5];
JA17[4][6]=links[10].mcm[2] + T1718[4][6];

JA17[5][1]=links[10].inertia[1][2] + T1718[5][1];
JA17[5][2]=links[10].inertia[2][2] + T1718[5][2];
JA17[5][3]=links[10].inertia[2][3] + T1718[5][3];
JA17[5][4]=links[10].mcm[3] + T1718[5][4];
JA17[5][5]=T1718[5][5];
JA17[5][6]=-links[10].mcm[1] + T1718[5][6];

JA17[6][1]=links[10].inertia[1][3] + T1718[6][1];
JA17[6][2]=links[10].inertia[2][3] + T1718[6][2];
JA17[6][3]=links[10].inertia[3][3] + T1718[6][3];
JA17[6][4]=-links[10].mcm[2] + T1718[6][4];
JA17[6][5]=links[10].mcm[1] + T1718[6][5];
JA17[6][6]=T1718[6][6];


h17[1]=JA17[1][3];
h17[2]=JA17[2][3];
h17[3]=JA17[3][3];
h17[4]=JA17[4][3];
h17[5]=JA17[5][3];
h17[6]=JA17[6][3];

T11617[1][1]=JA17[1][1];
T11617[1][2]=JA17[1][2];
T11617[1][3]=JA17[1][3];
T11617[1][4]=JA17[1][4];
T11617[1][5]=JA17[1][5];
T11617[1][6]=JA17[1][6];

T11617[2][1]=JA17[2][1];
T11617[2][2]=JA17[2][2];
T11617[2][3]=JA17[2][3];
T11617[2][4]=JA17[2][4];
T11617[2][5]=JA17[2][5];
T11617[2][6]=JA17[2][6];

T11617[3][1]=JA17[3][1];
T11617[3][2]=JA17[3][2];
T11617[3][3]=JA17[3][3];
T11617[3][4]=JA17[3][4];
T11617[3][5]=JA17[3][5];
T11617[3][6]=JA17[3][6];

T11617[4][1]=JA17[4][1];
T11617[4][2]=JA17[4][2];
T11617[4][3]=JA17[4][3];
T11617[4][4]=JA17[4][4];
T11617[4][5]=JA17[4][5];
T11617[4][6]=JA17[4][6];

T11617[5][1]=JA17[5][1];
T11617[5][2]=JA17[5][2];
T11617[5][3]=JA17[5][3];
T11617[5][4]=JA17[5][4];
T11617[5][5]=JA17[5][5];
T11617[5][6]=JA17[5][6];

T11617[6][1]=JA17[6][1];
T11617[6][2]=JA17[6][2];
T11617[6][3]=JA17[6][3];
T11617[6][4]=JA17[6][4];
T11617[6][5]=JA17[6][5];
T11617[6][6]=JA17[6][6];


T1617[1][1]=S1716[1][1]*(Si1617[1][1]*T11617[1][1] + Si1617[1][2]*T11617[2][1]) + S1716[2][1]*(Si1617[1][1]*T11617[1][2] + Si1617[1][2]*T11617[2][2]);
T1617[1][2]=S1716[1][2]*(Si1617[1][1]*T11617[1][1] + Si1617[1][2]*T11617[2][1]) + S1716[2][2]*(Si1617[1][1]*T11617[1][2] + Si1617[1][2]*T11617[2][2]) + LEGLINK2*(Si1617[1][1]*T11617[1][6] + Si1617[1][2]*T11617[2][6]);
T1617[1][3]=Si1617[1][1]*T11617[1][3] + Si1617[1][2]*T11617[2][3] - LEGLINK2*S1716[1][2]*(Si1617[1][1]*T11617[1][4] + Si1617[1][2]*T11617[2][4]) - LEGLINK2*S1716[2][2]*(Si1617[1][1]*T11617[1][5] + Si1617[1][2]*T11617[2][5]);
T1617[1][4]=S1716[1][1]*(Si1617[1][1]*T11617[1][4] + Si1617[1][2]*T11617[2][4]) + S1716[2][1]*(Si1617[1][1]*T11617[1][5] + Si1617[1][2]*T11617[2][5]);
T1617[1][5]=S1716[1][2]*(Si1617[1][1]*T11617[1][4] + Si1617[1][2]*T11617[2][4]) + S1716[2][2]*(Si1617[1][1]*T11617[1][5] + Si1617[1][2]*T11617[2][5]);
T1617[1][6]=Si1617[1][1]*T11617[1][6] + Si1617[1][2]*T11617[2][6];

T1617[2][1]=S1716[1][1]*(Si1617[2][1]*T11617[1][1] + Si1617[2][2]*T11617[2][1]) + S1716[2][1]*(Si1617[2][1]*T11617[1][2] + Si1617[2][2]*T11617[2][2]);
T1617[2][2]=S1716[1][2]*(Si1617[2][1]*T11617[1][1] + Si1617[2][2]*T11617[2][1]) + S1716[2][2]*(Si1617[2][1]*T11617[1][2] + Si1617[2][2]*T11617[2][2]) + LEGLINK2*(Si1617[2][1]*T11617[1][6] + Si1617[2][2]*T11617[2][6]);
T1617[2][3]=Si1617[2][1]*T11617[1][3] + Si1617[2][2]*T11617[2][3] - LEGLINK2*S1716[1][2]*(Si1617[2][1]*T11617[1][4] + Si1617[2][2]*T11617[2][4]) - LEGLINK2*S1716[2][2]*(Si1617[2][1]*T11617[1][5] + Si1617[2][2]*T11617[2][5]);
T1617[2][4]=S1716[1][1]*(Si1617[2][1]*T11617[1][4] + Si1617[2][2]*T11617[2][4]) + S1716[2][1]*(Si1617[2][1]*T11617[1][5] + Si1617[2][2]*T11617[2][5]);
T1617[2][5]=S1716[1][2]*(Si1617[2][1]*T11617[1][4] + Si1617[2][2]*T11617[2][4]) + S1716[2][2]*(Si1617[2][1]*T11617[1][5] + Si1617[2][2]*T11617[2][5]);
T1617[2][6]=Si1617[2][1]*T11617[1][6] + Si1617[2][2]*T11617[2][6];

T1617[3][1]=S1716[1][1]*T11617[3][1] + S1716[2][1]*T11617[3][2];
T1617[3][2]=S1716[1][2]*T11617[3][1] + S1716[2][2]*T11617[3][2] + LEGLINK2*T11617[3][6];
T1617[3][3]=T11617[3][3] - LEGLINK2*S1716[1][2]*T11617[3][4] - LEGLINK2*S1716[2][2]*T11617[3][5];
T1617[3][4]=S1716[1][1]*T11617[3][4] + S1716[2][1]*T11617[3][5];
T1617[3][5]=S1716[1][2]*T11617[3][4] + S1716[2][2]*T11617[3][5];
T1617[3][6]=T11617[3][6];

T1617[4][1]=S1716[1][1]*(Si1617[1][1]*T11617[4][1] + Si1617[1][2]*T11617[5][1]) + S1716[2][1]*(Si1617[1][1]*T11617[4][2] + Si1617[1][2]*T11617[5][2]);
T1617[4][2]=S1716[1][2]*(Si1617[1][1]*T11617[4][1] + Si1617[1][2]*T11617[5][1]) + S1716[2][2]*(Si1617[1][1]*T11617[4][2] + Si1617[1][2]*T11617[5][2]) + LEGLINK2*(Si1617[1][1]*T11617[4][6] + Si1617[1][2]*T11617[5][6]);
T1617[4][3]=Si1617[1][1]*T11617[4][3] + Si1617[1][2]*T11617[5][3] - LEGLINK2*S1716[1][2]*(Si1617[1][1]*T11617[4][4] + Si1617[1][2]*T11617[5][4]) - LEGLINK2*S1716[2][2]*(Si1617[1][1]*T11617[4][5] + Si1617[1][2]*T11617[5][5]);
T1617[4][4]=S1716[1][1]*(Si1617[1][1]*T11617[4][4] + Si1617[1][2]*T11617[5][4]) + S1716[2][1]*(Si1617[1][1]*T11617[4][5] + Si1617[1][2]*T11617[5][5]);
T1617[4][5]=S1716[1][2]*(Si1617[1][1]*T11617[4][4] + Si1617[1][2]*T11617[5][4]) + S1716[2][2]*(Si1617[1][1]*T11617[4][5] + Si1617[1][2]*T11617[5][5]);
T1617[4][6]=Si1617[1][1]*T11617[4][6] + Si1617[1][2]*T11617[5][6];

T1617[5][1]=S1716[1][1]*(LEGLINK2*T11617[3][1] + Si1617[2][1]*T11617[4][1] + Si1617[2][2]*T11617[5][1]) + S1716[2][1]*(LEGLINK2*T11617[3][2] + Si1617[2][1]*T11617[4][2] + Si1617[2][2]*T11617[5][2]);
T1617[5][2]=S1716[1][2]*(LEGLINK2*T11617[3][1] + Si1617[2][1]*T11617[4][1] + Si1617[2][2]*T11617[5][1]) + S1716[2][2]*(LEGLINK2*T11617[3][2] + Si1617[2][1]*T11617[4][2] + Si1617[2][2]*T11617[5][2]) + LEGLINK2*(LEGLINK2*T11617[3][6] + Si1617[2][1]*T11617[4][6] + Si1617[2][2]*T11617[5][6]);
T1617[5][3]=LEGLINK2*T11617[3][3] + Si1617[2][1]*T11617[4][3] + Si1617[2][2]*T11617[5][3] - LEGLINK2*S1716[1][2]*(LEGLINK2*T11617[3][4] + Si1617[2][1]*T11617[4][4] + Si1617[2][2]*T11617[5][4]) - LEGLINK2*S1716[2][2]*(LEGLINK2*T11617[3][5] + Si1617[2][1]*T11617[4][5] + Si1617[2][2]*T11617[5][5]);
T1617[5][4]=S1716[1][1]*(LEGLINK2*T11617[3][4] + Si1617[2][1]*T11617[4][4] + Si1617[2][2]*T11617[5][4]) + S1716[2][1]*(LEGLINK2*T11617[3][5] + Si1617[2][1]*T11617[4][5] + Si1617[2][2]*T11617[5][5]);
T1617[5][5]=S1716[1][2]*(LEGLINK2*T11617[3][4] + Si1617[2][1]*T11617[4][4] + Si1617[2][2]*T11617[5][4]) + S1716[2][2]*(LEGLINK2*T11617[3][5] + Si1617[2][1]*T11617[4][5] + Si1617[2][2]*T11617[5][5]);
T1617[5][6]=LEGLINK2*T11617[3][6] + Si1617[2][1]*T11617[4][6] + Si1617[2][2]*T11617[5][6];

T1617[6][1]=S1716[1][1]*(-(LEGLINK2*Si1617[2][1]*T11617[1][1]) - LEGLINK2*Si1617[2][2]*T11617[2][1] + T11617[6][1]) + S1716[2][1]*(-(LEGLINK2*Si1617[2][1]*T11617[1][2]) - LEGLINK2*Si1617[2][2]*T11617[2][2] + T11617[6][2]);
T1617[6][2]=S1716[1][2]*(-(LEGLINK2*Si1617[2][1]*T11617[1][1]) - LEGLINK2*Si1617[2][2]*T11617[2][1] + T11617[6][1]) + S1716[2][2]*(-(LEGLINK2*Si1617[2][1]*T11617[1][2]) - LEGLINK2*Si1617[2][2]*T11617[2][2] + T11617[6][2]) + LEGLINK2*(-(LEGLINK2*Si1617[2][1]*T11617[1][6]) - LEGLINK2*Si1617[2][2]*T11617[2][6] + T11617[6][6]);
T1617[6][3]=-(LEGLINK2*Si1617[2][1]*T11617[1][3]) - LEGLINK2*Si1617[2][2]*T11617[2][3] + T11617[6][3] - LEGLINK2*S1716[1][2]*(-(LEGLINK2*Si1617[2][1]*T11617[1][4]) - LEGLINK2*Si1617[2][2]*T11617[2][4] + T11617[6][4]) - LEGLINK2*S1716[2][2]*(-(LEGLINK2*Si1617[2][1]*T11617[1][5]) - LEGLINK2*Si1617[2][2]*T11617[2][5] + T11617[6][5]);
T1617[6][4]=S1716[1][1]*(-(LEGLINK2*Si1617[2][1]*T11617[1][4]) - LEGLINK2*Si1617[2][2]*T11617[2][4] + T11617[6][4]) + S1716[2][1]*(-(LEGLINK2*Si1617[2][1]*T11617[1][5]) - LEGLINK2*Si1617[2][2]*T11617[2][5] + T11617[6][5]);
T1617[6][5]=S1716[1][2]*(-(LEGLINK2*Si1617[2][1]*T11617[1][4]) - LEGLINK2*Si1617[2][2]*T11617[2][4] + T11617[6][4]) + S1716[2][2]*(-(LEGLINK2*Si1617[2][1]*T11617[1][5]) - LEGLINK2*Si1617[2][2]*T11617[2][5] + T11617[6][5]);
T1617[6][6]=-(LEGLINK2*Si1617[2][1]*T11617[1][6]) - LEGLINK2*Si1617[2][2]*T11617[2][6] + T11617[6][6];



}


void
hoap3_InvDynArtfunc15(void)
      {
JA16[1][1]=T1617[1][1];
JA16[1][2]=links[9].mcm[3] + T1617[1][2];
JA16[1][3]=-links[9].mcm[2] + T1617[1][3];
JA16[1][4]=links[9].m + T1617[1][4];
JA16[1][5]=T1617[1][5];
JA16[1][6]=T1617[1][6];

JA16[2][1]=-links[9].mcm[3] + T1617[2][1];
JA16[2][2]=T1617[2][2];
JA16[2][3]=links[9].mcm[1] + T1617[2][3];
JA16[2][4]=T1617[2][4];
JA16[2][5]=links[9].m + T1617[2][5];
JA16[2][6]=T1617[2][6];

JA16[3][1]=links[9].mcm[2] + T1617[3][1];
JA16[3][2]=-links[9].mcm[1] + T1617[3][2];
JA16[3][3]=T1617[3][3];
JA16[3][4]=T1617[3][4];
JA16[3][5]=T1617[3][5];
JA16[3][6]=links[9].m + T1617[3][6];

JA16[4][1]=links[9].inertia[1][1] + T1617[4][1];
JA16[4][2]=links[9].inertia[1][2] + T1617[4][2];
JA16[4][3]=links[9].inertia[1][3] + T1617[4][3];
JA16[4][4]=T1617[4][4];
JA16[4][5]=-links[9].mcm[3] + T1617[4][5];
JA16[4][6]=links[9].mcm[2] + T1617[4][6];

JA16[5][1]=links[9].inertia[1][2] + T1617[5][1];
JA16[5][2]=links[9].inertia[2][2] + T1617[5][2];
JA16[5][3]=links[9].inertia[2][3] + T1617[5][3];
JA16[5][4]=links[9].mcm[3] + T1617[5][4];
JA16[5][5]=T1617[5][5];
JA16[5][6]=-links[9].mcm[1] + T1617[5][6];

JA16[6][1]=links[9].inertia[1][3] + T1617[6][1];
JA16[6][2]=links[9].inertia[2][3] + T1617[6][2];
JA16[6][3]=links[9].inertia[3][3] + T1617[6][3];
JA16[6][4]=-links[9].mcm[2] + T1617[6][4];
JA16[6][5]=links[9].mcm[1] + T1617[6][5];
JA16[6][6]=T1617[6][6];


h16[1]=JA16[1][3];
h16[2]=JA16[2][3];
h16[3]=JA16[3][3];
h16[4]=JA16[4][3];
h16[5]=JA16[5][3];
h16[6]=JA16[6][3];

T11516[1][1]=JA16[1][1];
T11516[1][2]=JA16[1][2];
T11516[1][3]=JA16[1][3];
T11516[1][4]=JA16[1][4];
T11516[1][5]=JA16[1][5];
T11516[1][6]=JA16[1][6];

T11516[2][1]=JA16[2][1];
T11516[2][2]=JA16[2][2];
T11516[2][3]=JA16[2][3];
T11516[2][4]=JA16[2][4];
T11516[2][5]=JA16[2][5];
T11516[2][6]=JA16[2][6];

T11516[3][1]=JA16[3][1];
T11516[3][2]=JA16[3][2];
T11516[3][3]=JA16[3][3];
T11516[3][4]=JA16[3][4];
T11516[3][5]=JA16[3][5];
T11516[3][6]=JA16[3][6];

T11516[4][1]=JA16[4][1];
T11516[4][2]=JA16[4][2];
T11516[4][3]=JA16[4][3];
T11516[4][4]=JA16[4][4];
T11516[4][5]=JA16[4][5];
T11516[4][6]=JA16[4][6];

T11516[5][1]=JA16[5][1];
T11516[5][2]=JA16[5][2];
T11516[5][3]=JA16[5][3];
T11516[5][4]=JA16[5][4];
T11516[5][5]=JA16[5][5];
T11516[5][6]=JA16[5][6];

T11516[6][1]=JA16[6][1];
T11516[6][2]=JA16[6][2];
T11516[6][3]=JA16[6][3];
T11516[6][4]=JA16[6][4];
T11516[6][5]=JA16[6][5];
T11516[6][6]=JA16[6][6];


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
hoap3_InvDynArtfunc16(void)
      {
JA15[1][1]=T1516[1][1];
JA15[1][2]=links[8].mcm[3] + T1516[1][2];
JA15[1][3]=-links[8].mcm[2] + T1516[1][3];
JA15[1][4]=links[8].m + T1516[1][4];
JA15[1][5]=T1516[1][5];
JA15[1][6]=T1516[1][6];

JA15[2][1]=-links[8].mcm[3] + T1516[2][1];
JA15[2][2]=T1516[2][2];
JA15[2][3]=links[8].mcm[1] + T1516[2][3];
JA15[2][4]=T1516[2][4];
JA15[2][5]=links[8].m + T1516[2][5];
JA15[2][6]=T1516[2][6];

JA15[3][1]=links[8].mcm[2] + T1516[3][1];
JA15[3][2]=-links[8].mcm[1] + T1516[3][2];
JA15[3][3]=T1516[3][3];
JA15[3][4]=T1516[3][4];
JA15[3][5]=T1516[3][5];
JA15[3][6]=links[8].m + T1516[3][6];

JA15[4][1]=links[8].inertia[1][1] + T1516[4][1];
JA15[4][2]=links[8].inertia[1][2] + T1516[4][2];
JA15[4][3]=links[8].inertia[1][3] + T1516[4][3];
JA15[4][4]=T1516[4][4];
JA15[4][5]=-links[8].mcm[3] + T1516[4][5];
JA15[4][6]=links[8].mcm[2] + T1516[4][6];

JA15[5][1]=links[8].inertia[1][2] + T1516[5][1];
JA15[5][2]=links[8].inertia[2][2] + T1516[5][2];
JA15[5][3]=links[8].inertia[2][3] + T1516[5][3];
JA15[5][4]=links[8].mcm[3] + T1516[5][4];
JA15[5][5]=T1516[5][5];
JA15[5][6]=-links[8].mcm[1] + T1516[5][6];

JA15[6][1]=links[8].inertia[1][3] + T1516[6][1];
JA15[6][2]=links[8].inertia[2][3] + T1516[6][2];
JA15[6][3]=links[8].inertia[3][3] + T1516[6][3];
JA15[6][4]=-links[8].mcm[2] + T1516[6][4];
JA15[6][5]=links[8].mcm[1] + T1516[6][5];
JA15[6][6]=T1516[6][6];


h15[1]=JA15[1][3];
h15[2]=JA15[2][3];
h15[3]=JA15[3][3];
h15[4]=JA15[4][3];
h15[5]=JA15[5][3];
h15[6]=JA15[6][3];

T11415[1][1]=JA15[1][1];
T11415[1][2]=JA15[1][2];
T11415[1][3]=JA15[1][3];
T11415[1][4]=JA15[1][4];
T11415[1][5]=JA15[1][5];
T11415[1][6]=JA15[1][6];

T11415[2][1]=JA15[2][1];
T11415[2][2]=JA15[2][2];
T11415[2][3]=JA15[2][3];
T11415[2][4]=JA15[2][4];
T11415[2][5]=JA15[2][5];
T11415[2][6]=JA15[2][6];

T11415[3][1]=JA15[3][1];
T11415[3][2]=JA15[3][2];
T11415[3][3]=JA15[3][3];
T11415[3][4]=JA15[3][4];
T11415[3][5]=JA15[3][5];
T11415[3][6]=JA15[3][6];

T11415[4][1]=JA15[4][1];
T11415[4][2]=JA15[4][2];
T11415[4][3]=JA15[4][3];
T11415[4][4]=JA15[4][4];
T11415[4][5]=JA15[4][5];
T11415[4][6]=JA15[4][6];

T11415[5][1]=JA15[5][1];
T11415[5][2]=JA15[5][2];
T11415[5][3]=JA15[5][3];
T11415[5][4]=JA15[5][4];
T11415[5][5]=JA15[5][5];
T11415[5][6]=JA15[5][6];

T11415[6][1]=JA15[6][1];
T11415[6][2]=JA15[6][2];
T11415[6][3]=JA15[6][3];
T11415[6][4]=JA15[6][4];
T11415[6][5]=JA15[6][5];
T11415[6][6]=JA15[6][6];


T1415[1][1]=S1514[1][1]*(Si1415[1][1]*T11415[1][1] + Si1415[1][2]*T11415[2][1]) + S1514[2][1]*(Si1415[1][1]*T11415[1][2] + Si1415[1][2]*T11415[2][2]);
T1415[1][2]=-(Si1415[1][1]*T11415[1][3]) - Si1415[1][2]*T11415[2][3];
T1415[1][3]=S1514[1][3]*(Si1415[1][1]*T11415[1][1] + Si1415[1][2]*T11415[2][1]) + S1514[2][3]*(Si1415[1][1]*T11415[1][2] + Si1415[1][2]*T11415[2][2]);
T1415[1][4]=S1514[1][1]*(Si1415[1][1]*T11415[1][4] + Si1415[1][2]*T11415[2][4]) + S1514[2][1]*(Si1415[1][1]*T11415[1][5] + Si1415[1][2]*T11415[2][5]);
T1415[1][5]=-(Si1415[1][1]*T11415[1][6]) - Si1415[1][2]*T11415[2][6];
T1415[1][6]=S1514[1][3]*(Si1415[1][1]*T11415[1][4] + Si1415[1][2]*T11415[2][4]) + S1514[2][3]*(Si1415[1][1]*T11415[1][5] + Si1415[1][2]*T11415[2][5]);

T1415[2][1]=-(S1514[1][1]*T11415[3][1]) - S1514[2][1]*T11415[3][2];
T1415[2][2]=T11415[3][3];
T1415[2][3]=-(S1514[1][3]*T11415[3][1]) - S1514[2][3]*T11415[3][2];
T1415[2][4]=-(S1514[1][1]*T11415[3][4]) - S1514[2][1]*T11415[3][5];
T1415[2][5]=T11415[3][6];
T1415[2][6]=-(S1514[1][3]*T11415[3][4]) - S1514[2][3]*T11415[3][5];

T1415[3][1]=S1514[1][1]*(Si1415[3][1]*T11415[1][1] + Si1415[3][2]*T11415[2][1]) + S1514[2][1]*(Si1415[3][1]*T11415[1][2] + Si1415[3][2]*T11415[2][2]);
T1415[3][2]=-(Si1415[3][1]*T11415[1][3]) - Si1415[3][2]*T11415[2][3];
T1415[3][3]=S1514[1][3]*(Si1415[3][1]*T11415[1][1] + Si1415[3][2]*T11415[2][1]) + S1514[2][3]*(Si1415[3][1]*T11415[1][2] + Si1415[3][2]*T11415[2][2]);
T1415[3][4]=S1514[1][1]*(Si1415[3][1]*T11415[1][4] + Si1415[3][2]*T11415[2][4]) + S1514[2][1]*(Si1415[3][1]*T11415[1][5] + Si1415[3][2]*T11415[2][5]);
T1415[3][5]=-(Si1415[3][1]*T11415[1][6]) - Si1415[3][2]*T11415[2][6];
T1415[3][6]=S1514[1][3]*(Si1415[3][1]*T11415[1][4] + Si1415[3][2]*T11415[2][4]) + S1514[2][3]*(Si1415[3][1]*T11415[1][5] + Si1415[3][2]*T11415[2][5]);

T1415[4][1]=S1514[1][1]*(Si1415[1][1]*T11415[4][1] + Si1415[1][2]*T11415[5][1]) + S1514[2][1]*(Si1415[1][1]*T11415[4][2] + Si1415[1][2]*T11415[5][2]);
T1415[4][2]=-(Si1415[1][1]*T11415[4][3]) - Si1415[1][2]*T11415[5][3];
T1415[4][3]=S1514[1][3]*(Si1415[1][1]*T11415[4][1] + Si1415[1][2]*T11415[5][1]) + S1514[2][3]*(Si1415[1][1]*T11415[4][2] + Si1415[1][2]*T11415[5][2]);
T1415[4][4]=S1514[1][1]*(Si1415[1][1]*T11415[4][4] + Si1415[1][2]*T11415[5][4]) + S1514[2][1]*(Si1415[1][1]*T11415[4][5] + Si1415[1][2]*T11415[5][5]);
T1415[4][5]=-(Si1415[1][1]*T11415[4][6]) - Si1415[1][2]*T11415[5][6];
T1415[4][6]=S1514[1][3]*(Si1415[1][1]*T11415[4][4] + Si1415[1][2]*T11415[5][4]) + S1514[2][3]*(Si1415[1][1]*T11415[4][5] + Si1415[1][2]*T11415[5][5]);

T1415[5][1]=-(S1514[1][1]*T11415[6][1]) - S1514[2][1]*T11415[6][2];
T1415[5][2]=T11415[6][3];
T1415[5][3]=-(S1514[1][3]*T11415[6][1]) - S1514[2][3]*T11415[6][2];
T1415[5][4]=-(S1514[1][1]*T11415[6][4]) - S1514[2][1]*T11415[6][5];
T1415[5][5]=T11415[6][6];
T1415[5][6]=-(S1514[1][3]*T11415[6][4]) - S1514[2][3]*T11415[6][5];

T1415[6][1]=S1514[1][1]*(Si1415[3][1]*T11415[4][1] + Si1415[3][2]*T11415[5][1]) + S1514[2][1]*(Si1415[3][1]*T11415[4][2] + Si1415[3][2]*T11415[5][2]);
T1415[6][2]=-(Si1415[3][1]*T11415[4][3]) - Si1415[3][2]*T11415[5][3];
T1415[6][3]=S1514[1][3]*(Si1415[3][1]*T11415[4][1] + Si1415[3][2]*T11415[5][1]) + S1514[2][3]*(Si1415[3][1]*T11415[4][2] + Si1415[3][2]*T11415[5][2]);
T1415[6][4]=S1514[1][1]*(Si1415[3][1]*T11415[4][4] + Si1415[3][2]*T11415[5][4]) + S1514[2][1]*(Si1415[3][1]*T11415[4][5] + Si1415[3][2]*T11415[5][5]);
T1415[6][5]=-(Si1415[3][1]*T11415[4][6]) - Si1415[3][2]*T11415[5][6];
T1415[6][6]=S1514[1][3]*(Si1415[3][1]*T11415[4][4] + Si1415[3][2]*T11415[5][4]) + S1514[2][3]*(Si1415[3][1]*T11415[4][5] + Si1415[3][2]*T11415[5][5]);



}


void
hoap3_InvDynArtfunc17(void)
      {
JA14[1][1]=T1415[1][1];
JA14[1][2]=links[7].mcm[3] + T1415[1][2];
JA14[1][3]=-links[7].mcm[2] + T1415[1][3];
JA14[1][4]=links[7].m + T1415[1][4];
JA14[1][5]=T1415[1][5];
JA14[1][6]=T1415[1][6];

JA14[2][1]=-links[7].mcm[3] + T1415[2][1];
JA14[2][2]=T1415[2][2];
JA14[2][3]=links[7].mcm[1] + T1415[2][3];
JA14[2][4]=T1415[2][4];
JA14[2][5]=links[7].m + T1415[2][5];
JA14[2][6]=T1415[2][6];

JA14[3][1]=links[7].mcm[2] + T1415[3][1];
JA14[3][2]=-links[7].mcm[1] + T1415[3][2];
JA14[3][3]=T1415[3][3];
JA14[3][4]=T1415[3][4];
JA14[3][5]=T1415[3][5];
JA14[3][6]=links[7].m + T1415[3][6];

JA14[4][1]=links[7].inertia[1][1] + T1415[4][1];
JA14[4][2]=links[7].inertia[1][2] + T1415[4][2];
JA14[4][3]=links[7].inertia[1][3] + T1415[4][3];
JA14[4][4]=T1415[4][4];
JA14[4][5]=-links[7].mcm[3] + T1415[4][5];
JA14[4][6]=links[7].mcm[2] + T1415[4][6];

JA14[5][1]=links[7].inertia[1][2] + T1415[5][1];
JA14[5][2]=links[7].inertia[2][2] + T1415[5][2];
JA14[5][3]=links[7].inertia[2][3] + T1415[5][3];
JA14[5][4]=links[7].mcm[3] + T1415[5][4];
JA14[5][5]=T1415[5][5];
JA14[5][6]=-links[7].mcm[1] + T1415[5][6];

JA14[6][1]=links[7].inertia[1][3] + T1415[6][1];
JA14[6][2]=links[7].inertia[2][3] + T1415[6][2];
JA14[6][3]=links[7].inertia[3][3] + T1415[6][3];
JA14[6][4]=-links[7].mcm[2] + T1415[6][4];
JA14[6][5]=links[7].mcm[1] + T1415[6][5];
JA14[6][6]=T1415[6][6];


h14[1]=JA14[1][3];
h14[2]=JA14[2][3];
h14[3]=JA14[3][3];
h14[4]=JA14[4][3];
h14[5]=JA14[5][3];
h14[6]=JA14[6][3];

T1214[1][1]=JA14[1][1];
T1214[1][2]=JA14[1][2];
T1214[1][3]=JA14[1][3];
T1214[1][4]=JA14[1][4];
T1214[1][5]=JA14[1][5];
T1214[1][6]=JA14[1][6];

T1214[2][1]=JA14[2][1];
T1214[2][2]=JA14[2][2];
T1214[2][3]=JA14[2][3];
T1214[2][4]=JA14[2][4];
T1214[2][5]=JA14[2][5];
T1214[2][6]=JA14[2][6];

T1214[3][1]=JA14[3][1];
T1214[3][2]=JA14[3][2];
T1214[3][3]=JA14[3][3];
T1214[3][4]=JA14[3][4];
T1214[3][5]=JA14[3][5];
T1214[3][6]=JA14[3][6];

T1214[4][1]=JA14[4][1];
T1214[4][2]=JA14[4][2];
T1214[4][3]=JA14[4][3];
T1214[4][4]=JA14[4][4];
T1214[4][5]=JA14[4][5];
T1214[4][6]=JA14[4][6];

T1214[5][1]=JA14[5][1];
T1214[5][2]=JA14[5][2];
T1214[5][3]=JA14[5][3];
T1214[5][4]=JA14[5][4];
T1214[5][5]=JA14[5][5];
T1214[5][6]=JA14[5][6];

T1214[6][1]=JA14[6][1];
T1214[6][2]=JA14[6][2];
T1214[6][3]=JA14[6][3];
T1214[6][4]=JA14[6][4];
T1214[6][5]=JA14[6][5];
T1214[6][6]=JA14[6][6];


T214[1][1]=S142[1][1]*(Si214[1][1]*T1214[1][1] + Si214[1][2]*T1214[2][1]) + S142[2][1]*(Si214[1][1]*T1214[1][2] + Si214[1][2]*T1214[2][2]) - WAISTLINK1*S142[1][3]*(Si214[1][1]*T1214[1][4] + Si214[1][2]*T1214[2][4]) - WAISTLINK1*S142[2][3]*(Si214[1][1]*T1214[1][5] + Si214[1][2]*T1214[2][5]) + LEGLINK1*(Si214[1][1]*T1214[1][6] + Si214[1][2]*T1214[2][6]);
T214[1][2]=Si214[1][1]*T1214[1][3] + Si214[1][2]*T1214[2][3] + (-(LEGLINK1*S142[1][1]) + WAISTLINK2*S142[1][3])*(Si214[1][1]*T1214[1][4] + Si214[1][2]*T1214[2][4]) + (-(LEGLINK1*S142[2][1]) + WAISTLINK2*S142[2][3])*(Si214[1][1]*T1214[1][5] + Si214[1][2]*T1214[2][5]);
T214[1][3]=S142[1][3]*(Si214[1][1]*T1214[1][1] + Si214[1][2]*T1214[2][1]) + S142[2][3]*(Si214[1][1]*T1214[1][2] + Si214[1][2]*T1214[2][2]) + WAISTLINK1*S142[1][1]*(Si214[1][1]*T1214[1][4] + Si214[1][2]*T1214[2][4]) + WAISTLINK1*S142[2][1]*(Si214[1][1]*T1214[1][5] + Si214[1][2]*T1214[2][5]) - WAISTLINK2*(Si214[1][1]*T1214[1][6] + Si214[1][2]*T1214[2][6]);
T214[1][4]=S142[1][1]*(Si214[1][1]*T1214[1][4] + Si214[1][2]*T1214[2][4]) + S142[2][1]*(Si214[1][1]*T1214[1][5] + Si214[1][2]*T1214[2][5]);
T214[1][5]=Si214[1][1]*T1214[1][6] + Si214[1][2]*T1214[2][6];
T214[1][6]=S142[1][3]*(Si214[1][1]*T1214[1][4] + Si214[1][2]*T1214[2][4]) + S142[2][3]*(Si214[1][1]*T1214[1][5] + Si214[1][2]*T1214[2][5]);

T214[2][1]=S142[1][1]*T1214[3][1] + S142[2][1]*T1214[3][2] - WAISTLINK1*S142[1][3]*T1214[3][4] - WAISTLINK1*S142[2][3]*T1214[3][5] + LEGLINK1*T1214[3][6];
T214[2][2]=T1214[3][3] + (-(LEGLINK1*S142[1][1]) + WAISTLINK2*S142[1][3])*T1214[3][4] + (-(LEGLINK1*S142[2][1]) + WAISTLINK2*S142[2][3])*T1214[3][5];
T214[2][3]=S142[1][3]*T1214[3][1] + S142[2][3]*T1214[3][2] + WAISTLINK1*S142[1][1]*T1214[3][4] + WAISTLINK1*S142[2][1]*T1214[3][5] - WAISTLINK2*T1214[3][6];
T214[2][4]=S142[1][1]*T1214[3][4] + S142[2][1]*T1214[3][5];
T214[2][5]=T1214[3][6];
T214[2][6]=S142[1][3]*T1214[3][4] + S142[2][3]*T1214[3][5];

T214[3][1]=S142[1][1]*(Si214[3][1]*T1214[1][1] + Si214[3][2]*T1214[2][1]) + S142[2][1]*(Si214[3][1]*T1214[1][2] + Si214[3][2]*T1214[2][2]) - WAISTLINK1*S142[1][3]*(Si214[3][1]*T1214[1][4] + Si214[3][2]*T1214[2][4]) - WAISTLINK1*S142[2][3]*(Si214[3][1]*T1214[1][5] + Si214[3][2]*T1214[2][5]) + LEGLINK1*(Si214[3][1]*T1214[1][6] + Si214[3][2]*T1214[2][6]);
T214[3][2]=Si214[3][1]*T1214[1][3] + Si214[3][2]*T1214[2][3] + (-(LEGLINK1*S142[1][1]) + WAISTLINK2*S142[1][3])*(Si214[3][1]*T1214[1][4] + Si214[3][2]*T1214[2][4]) + (-(LEGLINK1*S142[2][1]) + WAISTLINK2*S142[2][3])*(Si214[3][1]*T1214[1][5] + Si214[3][2]*T1214[2][5]);
T214[3][3]=S142[1][3]*(Si214[3][1]*T1214[1][1] + Si214[3][2]*T1214[2][1]) + S142[2][3]*(Si214[3][1]*T1214[1][2] + Si214[3][2]*T1214[2][2]) + WAISTLINK1*S142[1][1]*(Si214[3][1]*T1214[1][4] + Si214[3][2]*T1214[2][4]) + WAISTLINK1*S142[2][1]*(Si214[3][1]*T1214[1][5] + Si214[3][2]*T1214[2][5]) - WAISTLINK2*(Si214[3][1]*T1214[1][6] + Si214[3][2]*T1214[2][6]);
T214[3][4]=S142[1][1]*(Si214[3][1]*T1214[1][4] + Si214[3][2]*T1214[2][4]) + S142[2][1]*(Si214[3][1]*T1214[1][5] + Si214[3][2]*T1214[2][5]);
T214[3][5]=Si214[3][1]*T1214[1][6] + Si214[3][2]*T1214[2][6];
T214[3][6]=S142[1][3]*(Si214[3][1]*T1214[1][4] + Si214[3][2]*T1214[2][4]) + S142[2][3]*(Si214[3][1]*T1214[1][5] + Si214[3][2]*T1214[2][5]);

T214[4][1]=S142[1][1]*(-(WAISTLINK1*Si214[3][1]*T1214[1][1]) - WAISTLINK1*Si214[3][2]*T1214[2][1] + LEGLINK1*T1214[3][1] + Si214[1][1]*T1214[4][1] + Si214[1][2]*T1214[5][1]) + S142[2][1]*(-(WAISTLINK1*Si214[3][1]*T1214[1][2]) - WAISTLINK1*Si214[3][2]*T1214[2][2] + LEGLINK1*T1214[3][2] + Si214[1][1]*T1214[4][2] + Si214[1][2]*T1214[5][2]) - WAISTLINK1*S142[1][3]*(-(WAISTLINK1*Si214[3][1]*T1214[1][4]) - WAISTLINK1*Si214[3][2]*T1214[2][4] + LEGLINK1*T1214[3][4] + Si214[1][1]*T1214[4][4] + Si214[1][2]*T1214[5][4]) - WAISTLINK1*S142[2][3]*(-(WAISTLINK1*Si214[3][1]*T1214[1][5]) - WAISTLINK1*Si214[3][2]*T1214[2][5] + LEGLINK1*T1214[3][5] + Si214[1][1]*T1214[4][5] + Si214[1][2]*T1214[5][5]) + LEGLINK1*(-(WAISTLINK1*Si214[3][1]*T1214[1][6]) - WAISTLINK1*Si214[3][2]*T1214[2][6] + LEGLINK1*T1214[3][6] + Si214[1][1]*T1214[4][6] + Si214[1][2]*T1214[5][6]);
T214[4][2]=-(WAISTLINK1*Si214[3][1]*T1214[1][3]) - WAISTLINK1*Si214[3][2]*T1214[2][3] + LEGLINK1*T1214[3][3] + Si214[1][1]*T1214[4][3] + Si214[1][2]*T1214[5][3] + (-(LEGLINK1*S142[1][1]) + WAISTLINK2*S142[1][3])*(-(WAISTLINK1*Si214[3][1]*T1214[1][4]) - WAISTLINK1*Si214[3][2]*T1214[2][4] + LEGLINK1*T1214[3][4] + Si214[1][1]*T1214[4][4] + Si214[1][2]*T1214[5][4]) + (-(LEGLINK1*S142[2][1]) + WAISTLINK2*S142[2][3])*(-(WAISTLINK1*Si214[3][1]*T1214[1][5]) - WAISTLINK1*Si214[3][2]*T1214[2][5] + LEGLINK1*T1214[3][5] + Si214[1][1]*T1214[4][5] + Si214[1][2]*T1214[5][5]);
T214[4][3]=S142[1][3]*(-(WAISTLINK1*Si214[3][1]*T1214[1][1]) - WAISTLINK1*Si214[3][2]*T1214[2][1] + LEGLINK1*T1214[3][1] + Si214[1][1]*T1214[4][1] + Si214[1][2]*T1214[5][1]) + S142[2][3]*(-(WAISTLINK1*Si214[3][1]*T1214[1][2]) - WAISTLINK1*Si214[3][2]*T1214[2][2] + LEGLINK1*T1214[3][2] + Si214[1][1]*T1214[4][2] + Si214[1][2]*T1214[5][2]) + WAISTLINK1*S142[1][1]*(-(WAISTLINK1*Si214[3][1]*T1214[1][4]) - WAISTLINK1*Si214[3][2]*T1214[2][4] + LEGLINK1*T1214[3][4] + Si214[1][1]*T1214[4][4] + Si214[1][2]*T1214[5][4]) + WAISTLINK1*S142[2][1]*(-(WAISTLINK1*Si214[3][1]*T1214[1][5]) - WAISTLINK1*Si214[3][2]*T1214[2][5] + LEGLINK1*T1214[3][5] + Si214[1][1]*T1214[4][5] + Si214[1][2]*T1214[5][5]) - WAISTLINK2*(-(WAISTLINK1*Si214[3][1]*T1214[1][6]) - WAISTLINK1*Si214[3][2]*T1214[2][6] + LEGLINK1*T1214[3][6] + Si214[1][1]*T1214[4][6] + Si214[1][2]*T1214[5][6]);
T214[4][4]=S142[1][1]*(-(WAISTLINK1*Si214[3][1]*T1214[1][4]) - WAISTLINK1*Si214[3][2]*T1214[2][4] + LEGLINK1*T1214[3][4] + Si214[1][1]*T1214[4][4] + Si214[1][2]*T1214[5][4]) + S142[2][1]*(-(WAISTLINK1*Si214[3][1]*T1214[1][5]) - WAISTLINK1*Si214[3][2]*T1214[2][5] + LEGLINK1*T1214[3][5] + Si214[1][1]*T1214[4][5] + Si214[1][2]*T1214[5][5]);
T214[4][5]=-(WAISTLINK1*Si214[3][1]*T1214[1][6]) - WAISTLINK1*Si214[3][2]*T1214[2][6] + LEGLINK1*T1214[3][6] + Si214[1][1]*T1214[4][6] + Si214[1][2]*T1214[5][6];
T214[4][6]=S142[1][3]*(-(WAISTLINK1*Si214[3][1]*T1214[1][4]) - WAISTLINK1*Si214[3][2]*T1214[2][4] + LEGLINK1*T1214[3][4] + Si214[1][1]*T1214[4][4] + Si214[1][2]*T1214[5][4]) + S142[2][3]*(-(WAISTLINK1*Si214[3][1]*T1214[1][5]) - WAISTLINK1*Si214[3][2]*T1214[2][5] + LEGLINK1*T1214[3][5] + Si214[1][1]*T1214[4][5] + Si214[1][2]*T1214[5][5]);

T214[5][1]=S142[1][1]*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][1] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][1] + T1214[6][1]) + S142[2][1]*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][2] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][2] + T1214[6][2]) - WAISTLINK1*S142[1][3]*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][4] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][4] + T1214[6][4]) - WAISTLINK1*S142[2][3]*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][5] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][5] + T1214[6][5]) + LEGLINK1*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][6] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][6] + T1214[6][6]);
T214[5][2]=(-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][3] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][3] + T1214[6][3] + (-(LEGLINK1*S142[1][1]) + WAISTLINK2*S142[1][3])*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][4] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][4] + T1214[6][4]) + (-(LEGLINK1*S142[2][1]) + WAISTLINK2*S142[2][3])*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][5] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][5] + T1214[6][5]);
T214[5][3]=S142[1][3]*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][1] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][1] + T1214[6][1]) + S142[2][3]*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][2] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][2] + T1214[6][2]) + WAISTLINK1*S142[1][1]*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][4] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][4] + T1214[6][4]) + WAISTLINK1*S142[2][1]*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][5] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][5] + T1214[6][5]) - WAISTLINK2*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][6] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][6] + T1214[6][6]);
T214[5][4]=S142[1][1]*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][4] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][4] + T1214[6][4]) + S142[2][1]*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][5] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][5] + T1214[6][5]);
T214[5][5]=(-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][6] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][6] + T1214[6][6];
T214[5][6]=S142[1][3]*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][4] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][4] + T1214[6][4]) + S142[2][3]*((-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1])*T1214[1][5] + (-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2])*T1214[2][5] + T1214[6][5]);

T214[6][1]=S142[1][1]*(WAISTLINK1*Si214[1][1]*T1214[1][1] + WAISTLINK1*Si214[1][2]*T1214[2][1] - WAISTLINK2*T1214[3][1] + Si214[3][1]*T1214[4][1] + Si214[3][2]*T1214[5][1]) + S142[2][1]*(WAISTLINK1*Si214[1][1]*T1214[1][2] + WAISTLINK1*Si214[1][2]*T1214[2][2] - WAISTLINK2*T1214[3][2] + Si214[3][1]*T1214[4][2] + Si214[3][2]*T1214[5][2]) - WAISTLINK1*S142[1][3]*(WAISTLINK1*Si214[1][1]*T1214[1][4] + WAISTLINK1*Si214[1][2]*T1214[2][4] - WAISTLINK2*T1214[3][4] + Si214[3][1]*T1214[4][4] + Si214[3][2]*T1214[5][4]) - WAISTLINK1*S142[2][3]*(WAISTLINK1*Si214[1][1]*T1214[1][5] + WAISTLINK1*Si214[1][2]*T1214[2][5] - WAISTLINK2*T1214[3][5] + Si214[3][1]*T1214[4][5] + Si214[3][2]*T1214[5][5]) + LEGLINK1*(WAISTLINK1*Si214[1][1]*T1214[1][6] + WAISTLINK1*Si214[1][2]*T1214[2][6] - WAISTLINK2*T1214[3][6] + Si214[3][1]*T1214[4][6] + Si214[3][2]*T1214[5][6]);
T214[6][2]=WAISTLINK1*Si214[1][1]*T1214[1][3] + WAISTLINK1*Si214[1][2]*T1214[2][3] - WAISTLINK2*T1214[3][3] + Si214[3][1]*T1214[4][3] + Si214[3][2]*T1214[5][3] + (-(LEGLINK1*S142[1][1]) + WAISTLINK2*S142[1][3])*(WAISTLINK1*Si214[1][1]*T1214[1][4] + WAISTLINK1*Si214[1][2]*T1214[2][4] - WAISTLINK2*T1214[3][4] + Si214[3][1]*T1214[4][4] + Si214[3][2]*T1214[5][4]) + (-(LEGLINK1*S142[2][1]) + WAISTLINK2*S142[2][3])*(WAISTLINK1*Si214[1][1]*T1214[1][5] + WAISTLINK1*Si214[1][2]*T1214[2][5] - WAISTLINK2*T1214[3][5] + Si214[3][1]*T1214[4][5] + Si214[3][2]*T1214[5][5]);
T214[6][3]=S142[1][3]*(WAISTLINK1*Si214[1][1]*T1214[1][1] + WAISTLINK1*Si214[1][2]*T1214[2][1] - WAISTLINK2*T1214[3][1] + Si214[3][1]*T1214[4][1] + Si214[3][2]*T1214[5][1]) + S142[2][3]*(WAISTLINK1*Si214[1][1]*T1214[1][2] + WAISTLINK1*Si214[1][2]*T1214[2][2] - WAISTLINK2*T1214[3][2] + Si214[3][1]*T1214[4][2] + Si214[3][2]*T1214[5][2]) + WAISTLINK1*S142[1][1]*(WAISTLINK1*Si214[1][1]*T1214[1][4] + WAISTLINK1*Si214[1][2]*T1214[2][4] - WAISTLINK2*T1214[3][4] + Si214[3][1]*T1214[4][4] + Si214[3][2]*T1214[5][4]) + WAISTLINK1*S142[2][1]*(WAISTLINK1*Si214[1][1]*T1214[1][5] + WAISTLINK1*Si214[1][2]*T1214[2][5] - WAISTLINK2*T1214[3][5] + Si214[3][1]*T1214[4][5] + Si214[3][2]*T1214[5][5]) - WAISTLINK2*(WAISTLINK1*Si214[1][1]*T1214[1][6] + WAISTLINK1*Si214[1][2]*T1214[2][6] - WAISTLINK2*T1214[3][6] + Si214[3][1]*T1214[4][6] + Si214[3][2]*T1214[5][6]);
T214[6][4]=S142[1][1]*(WAISTLINK1*Si214[1][1]*T1214[1][4] + WAISTLINK1*Si214[1][2]*T1214[2][4] - WAISTLINK2*T1214[3][4] + Si214[3][1]*T1214[4][4] + Si214[3][2]*T1214[5][4]) + S142[2][1]*(WAISTLINK1*Si214[1][1]*T1214[1][5] + WAISTLINK1*Si214[1][2]*T1214[2][5] - WAISTLINK2*T1214[3][5] + Si214[3][1]*T1214[4][5] + Si214[3][2]*T1214[5][5]);
T214[6][5]=WAISTLINK1*Si214[1][1]*T1214[1][6] + WAISTLINK1*Si214[1][2]*T1214[2][6] - WAISTLINK2*T1214[3][6] + Si214[3][1]*T1214[4][6] + Si214[3][2]*T1214[5][6];
T214[6][6]=S142[1][3]*(WAISTLINK1*Si214[1][1]*T1214[1][4] + WAISTLINK1*Si214[1][2]*T1214[2][4] - WAISTLINK2*T1214[3][4] + Si214[3][1]*T1214[4][4] + Si214[3][2]*T1214[5][4]) + S142[2][3]*(WAISTLINK1*Si214[1][1]*T1214[1][5] + WAISTLINK1*Si214[1][2]*T1214[2][5] - WAISTLINK2*T1214[3][5] + Si214[3][1]*T1214[4][5] + Si214[3][2]*T1214[5][5]);



}


void
hoap3_InvDynArtfunc18(void)
      {
JA13[1][2]=eff[1].mcm[3];
JA13[1][3]=-eff[1].mcm[2];
JA13[1][4]=eff[1].m;

JA13[2][1]=-eff[1].mcm[3];
JA13[2][3]=eff[1].mcm[1];
JA13[2][5]=eff[1].m;

JA13[3][1]=eff[1].mcm[2];
JA13[3][2]=-eff[1].mcm[1];
JA13[3][6]=eff[1].m;

JA13[4][5]=-eff[1].mcm[3];
JA13[4][6]=eff[1].mcm[2];

JA13[5][4]=eff[1].mcm[3];
JA13[5][6]=-eff[1].mcm[1];

JA13[6][4]=-eff[1].mcm[2];
JA13[6][5]=eff[1].mcm[1];


T1813[1][2]=JA13[1][2];
T1813[1][3]=JA13[1][3];
T1813[1][4]=JA13[1][4];

T1813[2][1]=JA13[2][1];
T1813[2][3]=JA13[2][3];
T1813[2][5]=JA13[2][5];

T1813[3][1]=JA13[3][1];
T1813[3][2]=JA13[3][2];
T1813[3][6]=JA13[3][6];

T1813[4][5]=JA13[4][5];
T1813[4][6]=JA13[4][6];

T1813[5][4]=JA13[5][4];
T1813[5][6]=JA13[5][6];

T1813[6][4]=JA13[6][4];
T1813[6][5]=JA13[6][5];


T813[1][1]=(-(eff[1].x[3]*S138[1][2]) + eff[1].x[2]*S138[1][3])*Si813[1][1]*T1813[1][4] + S138[3][1]*(Si813[1][1]*T1813[1][3] + Si813[1][2]*T1813[2][3]) + (-(eff[1].x[3]*S138[2][2]) + eff[1].x[2]*S138[2][3])*Si813[1][2]*T1813[2][5] + S138[1][1]*(Si813[1][2]*T1813[2][1] + Si813[1][3]*T1813[3][1]) + S138[2][1]*(Si813[1][1]*T1813[1][2] + Si813[1][3]*T1813[3][2]) + (-(eff[1].x[3]*S138[3][2]) + eff[1].x[2]*S138[3][3])*Si813[1][3]*T1813[3][6];
T813[1][2]=(eff[1].x[3]*S138[1][1] - eff[1].x[1]*S138[1][3])*Si813[1][1]*T1813[1][4] + S138[3][2]*(Si813[1][1]*T1813[1][3] + Si813[1][2]*T1813[2][3]) + (eff[1].x[3]*S138[2][1] - eff[1].x[1]*S138[2][3])*Si813[1][2]*T1813[2][5] + S138[1][2]*(Si813[1][2]*T1813[2][1] + Si813[1][3]*T1813[3][1]) + S138[2][2]*(Si813[1][1]*T1813[1][2] + Si813[1][3]*T1813[3][2]) + (eff[1].x[3]*S138[3][1] - eff[1].x[1]*S138[3][3])*Si813[1][3]*T1813[3][6];
T813[1][3]=(-(eff[1].x[2]*S138[1][1]) + eff[1].x[1]*S138[1][2])*Si813[1][1]*T1813[1][4] + S138[3][3]*(Si813[1][1]*T1813[1][3] + Si813[1][2]*T1813[2][3]) + (-(eff[1].x[2]*S138[2][1]) + eff[1].x[1]*S138[2][2])*Si813[1][2]*T1813[2][5] + S138[1][3]*(Si813[1][2]*T1813[2][1] + Si813[1][3]*T1813[3][1]) + S138[2][3]*(Si813[1][1]*T1813[1][2] + Si813[1][3]*T1813[3][2]) + (-(eff[1].x[2]*S138[3][1]) + eff[1].x[1]*S138[3][2])*Si813[1][3]*T1813[3][6];
T813[1][4]=S138[1][1]*Si813[1][1]*T1813[1][4] + S138[2][1]*Si813[1][2]*T1813[2][5] + S138[3][1]*Si813[1][3]*T1813[3][6];
T813[1][5]=S138[1][2]*Si813[1][1]*T1813[1][4] + S138[2][2]*Si813[1][2]*T1813[2][5] + S138[3][2]*Si813[1][3]*T1813[3][6];
T813[1][6]=S138[1][3]*Si813[1][1]*T1813[1][4] + S138[2][3]*Si813[1][2]*T1813[2][5] + S138[3][3]*Si813[1][3]*T1813[3][6];

T813[2][1]=(-(eff[1].x[3]*S138[1][2]) + eff[1].x[2]*S138[1][3])*Si813[2][1]*T1813[1][4] + S138[3][1]*(Si813[2][1]*T1813[1][3] + Si813[2][2]*T1813[2][3]) + (-(eff[1].x[3]*S138[2][2]) + eff[1].x[2]*S138[2][3])*Si813[2][2]*T1813[2][5] + S138[1][1]*(Si813[2][2]*T1813[2][1] + Si813[2][3]*T1813[3][1]) + S138[2][1]*(Si813[2][1]*T1813[1][2] + Si813[2][3]*T1813[3][2]) + (-(eff[1].x[3]*S138[3][2]) + eff[1].x[2]*S138[3][3])*Si813[2][3]*T1813[3][6];
T813[2][2]=(eff[1].x[3]*S138[1][1] - eff[1].x[1]*S138[1][3])*Si813[2][1]*T1813[1][4] + S138[3][2]*(Si813[2][1]*T1813[1][3] + Si813[2][2]*T1813[2][3]) + (eff[1].x[3]*S138[2][1] - eff[1].x[1]*S138[2][3])*Si813[2][2]*T1813[2][5] + S138[1][2]*(Si813[2][2]*T1813[2][1] + Si813[2][3]*T1813[3][1]) + S138[2][2]*(Si813[2][1]*T1813[1][2] + Si813[2][3]*T1813[3][2]) + (eff[1].x[3]*S138[3][1] - eff[1].x[1]*S138[3][3])*Si813[2][3]*T1813[3][6];
T813[2][3]=(-(eff[1].x[2]*S138[1][1]) + eff[1].x[1]*S138[1][2])*Si813[2][1]*T1813[1][4] + S138[3][3]*(Si813[2][1]*T1813[1][3] + Si813[2][2]*T1813[2][3]) + (-(eff[1].x[2]*S138[2][1]) + eff[1].x[1]*S138[2][2])*Si813[2][2]*T1813[2][5] + S138[1][3]*(Si813[2][2]*T1813[2][1] + Si813[2][3]*T1813[3][1]) + S138[2][3]*(Si813[2][1]*T1813[1][2] + Si813[2][3]*T1813[3][2]) + (-(eff[1].x[2]*S138[3][1]) + eff[1].x[1]*S138[3][2])*Si813[2][3]*T1813[3][6];
T813[2][4]=S138[1][1]*Si813[2][1]*T1813[1][4] + S138[2][1]*Si813[2][2]*T1813[2][5] + S138[3][1]*Si813[2][3]*T1813[3][6];
T813[2][5]=S138[1][2]*Si813[2][1]*T1813[1][4] + S138[2][2]*Si813[2][2]*T1813[2][5] + S138[3][2]*Si813[2][3]*T1813[3][6];
T813[2][6]=S138[1][3]*Si813[2][1]*T1813[1][4] + S138[2][3]*Si813[2][2]*T1813[2][5] + S138[3][3]*Si813[2][3]*T1813[3][6];

T813[3][1]=(-(eff[1].x[3]*S138[1][2]) + eff[1].x[2]*S138[1][3])*Si813[3][1]*T1813[1][4] + S138[3][1]*(Si813[3][1]*T1813[1][3] + Si813[3][2]*T1813[2][3]) + (-(eff[1].x[3]*S138[2][2]) + eff[1].x[2]*S138[2][3])*Si813[3][2]*T1813[2][5] + S138[1][1]*(Si813[3][2]*T1813[2][1] + Si813[3][3]*T1813[3][1]) + S138[2][1]*(Si813[3][1]*T1813[1][2] + Si813[3][3]*T1813[3][2]) + (-(eff[1].x[3]*S138[3][2]) + eff[1].x[2]*S138[3][3])*Si813[3][3]*T1813[3][6];
T813[3][2]=(eff[1].x[3]*S138[1][1] - eff[1].x[1]*S138[1][3])*Si813[3][1]*T1813[1][4] + S138[3][2]*(Si813[3][1]*T1813[1][3] + Si813[3][2]*T1813[2][3]) + (eff[1].x[3]*S138[2][1] - eff[1].x[1]*S138[2][3])*Si813[3][2]*T1813[2][5] + S138[1][2]*(Si813[3][2]*T1813[2][1] + Si813[3][3]*T1813[3][1]) + S138[2][2]*(Si813[3][1]*T1813[1][2] + Si813[3][3]*T1813[3][2]) + (eff[1].x[3]*S138[3][1] - eff[1].x[1]*S138[3][3])*Si813[3][3]*T1813[3][6];
T813[3][3]=(-(eff[1].x[2]*S138[1][1]) + eff[1].x[1]*S138[1][2])*Si813[3][1]*T1813[1][4] + S138[3][3]*(Si813[3][1]*T1813[1][3] + Si813[3][2]*T1813[2][3]) + (-(eff[1].x[2]*S138[2][1]) + eff[1].x[1]*S138[2][2])*Si813[3][2]*T1813[2][5] + S138[1][3]*(Si813[3][2]*T1813[2][1] + Si813[3][3]*T1813[3][1]) + S138[2][3]*(Si813[3][1]*T1813[1][2] + Si813[3][3]*T1813[3][2]) + (-(eff[1].x[2]*S138[3][1]) + eff[1].x[1]*S138[3][2])*Si813[3][3]*T1813[3][6];
T813[3][4]=S138[1][1]*Si813[3][1]*T1813[1][4] + S138[2][1]*Si813[3][2]*T1813[2][5] + S138[3][1]*Si813[3][3]*T1813[3][6];
T813[3][5]=S138[1][2]*Si813[3][1]*T1813[1][4] + S138[2][2]*Si813[3][2]*T1813[2][5] + S138[3][2]*Si813[3][3]*T1813[3][6];
T813[3][6]=S138[1][3]*Si813[3][1]*T1813[1][4] + S138[2][3]*Si813[3][2]*T1813[2][5] + S138[3][3]*Si813[3][3]*T1813[3][6];

T813[4][1]=S138[3][1]*((-(eff[1].x[3]*Si813[2][1]) + eff[1].x[2]*Si813[3][1])*T1813[1][3] + (-(eff[1].x[3]*Si813[2][2]) + eff[1].x[2]*Si813[3][2])*T1813[2][3]) + S138[1][1]*((-(eff[1].x[3]*Si813[2][2]) + eff[1].x[2]*Si813[3][2])*T1813[2][1] + (-(eff[1].x[3]*Si813[2][3]) + eff[1].x[2]*Si813[3][3])*T1813[3][1]) + S138[2][1]*((-(eff[1].x[3]*Si813[2][1]) + eff[1].x[2]*Si813[3][1])*T1813[1][2] + (-(eff[1].x[3]*Si813[2][3]) + eff[1].x[2]*Si813[3][3])*T1813[3][2]) + (-(eff[1].x[3]*S138[3][2]) + eff[1].x[2]*S138[3][3])*((-(eff[1].x[3]*Si813[2][3]) + eff[1].x[2]*Si813[3][3])*T1813[3][6] + Si813[1][1]*T1813[4][6] + Si813[1][2]*T1813[5][6]) + (-(eff[1].x[3]*S138[1][2]) + eff[1].x[2]*S138[1][3])*((-(eff[1].x[3]*Si813[2][1]) + eff[1].x[2]*Si813[3][1])*T1813[1][4] + Si813[1][2]*T1813[5][4] + Si813[1][3]*T1813[6][4]) + (-(eff[1].x[3]*S138[2][2]) + eff[1].x[2]*S138[2][3])*((-(eff[1].x[3]*Si813[2][2]) + eff[1].x[2]*Si813[3][2])*T1813[2][5] + Si813[1][1]*T1813[4][5] + Si813[1][3]*T1813[6][5]);
T813[4][2]=S138[3][2]*((-(eff[1].x[3]*Si813[2][1]) + eff[1].x[2]*Si813[3][1])*T1813[1][3] + (-(eff[1].x[3]*Si813[2][2]) + eff[1].x[2]*Si813[3][2])*T1813[2][3]) + S138[1][2]*((-(eff[1].x[3]*Si813[2][2]) + eff[1].x[2]*Si813[3][2])*T1813[2][1] + (-(eff[1].x[3]*Si813[2][3]) + eff[1].x[2]*Si813[3][3])*T1813[3][1]) + S138[2][2]*((-(eff[1].x[3]*Si813[2][1]) + eff[1].x[2]*Si813[3][1])*T1813[1][2] + (-(eff[1].x[3]*Si813[2][3]) + eff[1].x[2]*Si813[3][3])*T1813[3][2]) + (eff[1].x[3]*S138[3][1] - eff[1].x[1]*S138[3][3])*((-(eff[1].x[3]*Si813[2][3]) + eff[1].x[2]*Si813[3][3])*T1813[3][6] + Si813[1][1]*T1813[4][6] + Si813[1][2]*T1813[5][6]) + (eff[1].x[3]*S138[1][1] - eff[1].x[1]*S138[1][3])*((-(eff[1].x[3]*Si813[2][1]) + eff[1].x[2]*Si813[3][1])*T1813[1][4] + Si813[1][2]*T1813[5][4] + Si813[1][3]*T1813[6][4]) + (eff[1].x[3]*S138[2][1] - eff[1].x[1]*S138[2][3])*((-(eff[1].x[3]*Si813[2][2]) + eff[1].x[2]*Si813[3][2])*T1813[2][5] + Si813[1][1]*T1813[4][5] + Si813[1][3]*T1813[6][5]);
T813[4][3]=S138[3][3]*((-(eff[1].x[3]*Si813[2][1]) + eff[1].x[2]*Si813[3][1])*T1813[1][3] + (-(eff[1].x[3]*Si813[2][2]) + eff[1].x[2]*Si813[3][2])*T1813[2][3]) + S138[1][3]*((-(eff[1].x[3]*Si813[2][2]) + eff[1].x[2]*Si813[3][2])*T1813[2][1] + (-(eff[1].x[3]*Si813[2][3]) + eff[1].x[2]*Si813[3][3])*T1813[3][1]) + S138[2][3]*((-(eff[1].x[3]*Si813[2][1]) + eff[1].x[2]*Si813[3][1])*T1813[1][2] + (-(eff[1].x[3]*Si813[2][3]) + eff[1].x[2]*Si813[3][3])*T1813[3][2]) + (-(eff[1].x[2]*S138[3][1]) + eff[1].x[1]*S138[3][2])*((-(eff[1].x[3]*Si813[2][3]) + eff[1].x[2]*Si813[3][3])*T1813[3][6] + Si813[1][1]*T1813[4][6] + Si813[1][2]*T1813[5][6]) + (-(eff[1].x[2]*S138[1][1]) + eff[1].x[1]*S138[1][2])*((-(eff[1].x[3]*Si813[2][1]) + eff[1].x[2]*Si813[3][1])*T1813[1][4] + Si813[1][2]*T1813[5][4] + Si813[1][3]*T1813[6][4]) + (-(eff[1].x[2]*S138[2][1]) + eff[1].x[1]*S138[2][2])*((-(eff[1].x[3]*Si813[2][2]) + eff[1].x[2]*Si813[3][2])*T1813[2][5] + Si813[1][1]*T1813[4][5] + Si813[1][3]*T1813[6][5]);
T813[4][4]=S138[3][1]*((-(eff[1].x[3]*Si813[2][3]) + eff[1].x[2]*Si813[3][3])*T1813[3][6] + Si813[1][1]*T1813[4][6] + Si813[1][2]*T1813[5][6]) + S138[1][1]*((-(eff[1].x[3]*Si813[2][1]) + eff[1].x[2]*Si813[3][1])*T1813[1][4] + Si813[1][2]*T1813[5][4] + Si813[1][3]*T1813[6][4]) + S138[2][1]*((-(eff[1].x[3]*Si813[2][2]) + eff[1].x[2]*Si813[3][2])*T1813[2][5] + Si813[1][1]*T1813[4][5] + Si813[1][3]*T1813[6][5]);
T813[4][5]=S138[3][2]*((-(eff[1].x[3]*Si813[2][3]) + eff[1].x[2]*Si813[3][3])*T1813[3][6] + Si813[1][1]*T1813[4][6] + Si813[1][2]*T1813[5][6]) + S138[1][2]*((-(eff[1].x[3]*Si813[2][1]) + eff[1].x[2]*Si813[3][1])*T1813[1][4] + Si813[1][2]*T1813[5][4] + Si813[1][3]*T1813[6][4]) + S138[2][2]*((-(eff[1].x[3]*Si813[2][2]) + eff[1].x[2]*Si813[3][2])*T1813[2][5] + Si813[1][1]*T1813[4][5] + Si813[1][3]*T1813[6][5]);
T813[4][6]=S138[3][3]*((-(eff[1].x[3]*Si813[2][3]) + eff[1].x[2]*Si813[3][3])*T1813[3][6] + Si813[1][1]*T1813[4][6] + Si813[1][2]*T1813[5][6]) + S138[1][3]*((-(eff[1].x[3]*Si813[2][1]) + eff[1].x[2]*Si813[3][1])*T1813[1][4] + Si813[1][2]*T1813[5][4] + Si813[1][3]*T1813[6][4]) + S138[2][3]*((-(eff[1].x[3]*Si813[2][2]) + eff[1].x[2]*Si813[3][2])*T1813[2][5] + Si813[1][1]*T1813[4][5] + Si813[1][3]*T1813[6][5]);

T813[5][1]=S138[3][1]*((eff[1].x[3]*Si813[1][1] - eff[1].x[1]*Si813[3][1])*T1813[1][3] + (eff[1].x[3]*Si813[1][2] - eff[1].x[1]*Si813[3][2])*T1813[2][3]) + S138[1][1]*((eff[1].x[3]*Si813[1][2] - eff[1].x[1]*Si813[3][2])*T1813[2][1] + (eff[1].x[3]*Si813[1][3] - eff[1].x[1]*Si813[3][3])*T1813[3][1]) + S138[2][1]*((eff[1].x[3]*Si813[1][1] - eff[1].x[1]*Si813[3][1])*T1813[1][2] + (eff[1].x[3]*Si813[1][3] - eff[1].x[1]*Si813[3][3])*T1813[3][2]) + (-(eff[1].x[3]*S138[3][2]) + eff[1].x[2]*S138[3][3])*((eff[1].x[3]*Si813[1][3] - eff[1].x[1]*Si813[3][3])*T1813[3][6] + Si813[2][1]*T1813[4][6] + Si813[2][2]*T1813[5][6]) + (-(eff[1].x[3]*S138[1][2]) + eff[1].x[2]*S138[1][3])*((eff[1].x[3]*Si813[1][1] - eff[1].x[1]*Si813[3][1])*T1813[1][4] + Si813[2][2]*T1813[5][4] + Si813[2][3]*T1813[6][4]) + (-(eff[1].x[3]*S138[2][2]) + eff[1].x[2]*S138[2][3])*((eff[1].x[3]*Si813[1][2] - eff[1].x[1]*Si813[3][2])*T1813[2][5] + Si813[2][1]*T1813[4][5] + Si813[2][3]*T1813[6][5]);
T813[5][2]=S138[3][2]*((eff[1].x[3]*Si813[1][1] - eff[1].x[1]*Si813[3][1])*T1813[1][3] + (eff[1].x[3]*Si813[1][2] - eff[1].x[1]*Si813[3][2])*T1813[2][3]) + S138[1][2]*((eff[1].x[3]*Si813[1][2] - eff[1].x[1]*Si813[3][2])*T1813[2][1] + (eff[1].x[3]*Si813[1][3] - eff[1].x[1]*Si813[3][3])*T1813[3][1]) + S138[2][2]*((eff[1].x[3]*Si813[1][1] - eff[1].x[1]*Si813[3][1])*T1813[1][2] + (eff[1].x[3]*Si813[1][3] - eff[1].x[1]*Si813[3][3])*T1813[3][2]) + (eff[1].x[3]*S138[3][1] - eff[1].x[1]*S138[3][3])*((eff[1].x[3]*Si813[1][3] - eff[1].x[1]*Si813[3][3])*T1813[3][6] + Si813[2][1]*T1813[4][6] + Si813[2][2]*T1813[5][6]) + (eff[1].x[3]*S138[1][1] - eff[1].x[1]*S138[1][3])*((eff[1].x[3]*Si813[1][1] - eff[1].x[1]*Si813[3][1])*T1813[1][4] + Si813[2][2]*T1813[5][4] + Si813[2][3]*T1813[6][4]) + (eff[1].x[3]*S138[2][1] - eff[1].x[1]*S138[2][3])*((eff[1].x[3]*Si813[1][2] - eff[1].x[1]*Si813[3][2])*T1813[2][5] + Si813[2][1]*T1813[4][5] + Si813[2][3]*T1813[6][5]);
T813[5][3]=S138[3][3]*((eff[1].x[3]*Si813[1][1] - eff[1].x[1]*Si813[3][1])*T1813[1][3] + (eff[1].x[3]*Si813[1][2] - eff[1].x[1]*Si813[3][2])*T1813[2][3]) + S138[1][3]*((eff[1].x[3]*Si813[1][2] - eff[1].x[1]*Si813[3][2])*T1813[2][1] + (eff[1].x[3]*Si813[1][3] - eff[1].x[1]*Si813[3][3])*T1813[3][1]) + S138[2][3]*((eff[1].x[3]*Si813[1][1] - eff[1].x[1]*Si813[3][1])*T1813[1][2] + (eff[1].x[3]*Si813[1][3] - eff[1].x[1]*Si813[3][3])*T1813[3][2]) + (-(eff[1].x[2]*S138[3][1]) + eff[1].x[1]*S138[3][2])*((eff[1].x[3]*Si813[1][3] - eff[1].x[1]*Si813[3][3])*T1813[3][6] + Si813[2][1]*T1813[4][6] + Si813[2][2]*T1813[5][6]) + (-(eff[1].x[2]*S138[1][1]) + eff[1].x[1]*S138[1][2])*((eff[1].x[3]*Si813[1][1] - eff[1].x[1]*Si813[3][1])*T1813[1][4] + Si813[2][2]*T1813[5][4] + Si813[2][3]*T1813[6][4]) + (-(eff[1].x[2]*S138[2][1]) + eff[1].x[1]*S138[2][2])*((eff[1].x[3]*Si813[1][2] - eff[1].x[1]*Si813[3][2])*T1813[2][5] + Si813[2][1]*T1813[4][5] + Si813[2][3]*T1813[6][5]);
T813[5][4]=S138[3][1]*((eff[1].x[3]*Si813[1][3] - eff[1].x[1]*Si813[3][3])*T1813[3][6] + Si813[2][1]*T1813[4][6] + Si813[2][2]*T1813[5][6]) + S138[1][1]*((eff[1].x[3]*Si813[1][1] - eff[1].x[1]*Si813[3][1])*T1813[1][4] + Si813[2][2]*T1813[5][4] + Si813[2][3]*T1813[6][4]) + S138[2][1]*((eff[1].x[3]*Si813[1][2] - eff[1].x[1]*Si813[3][2])*T1813[2][5] + Si813[2][1]*T1813[4][5] + Si813[2][3]*T1813[6][5]);
T813[5][5]=S138[3][2]*((eff[1].x[3]*Si813[1][3] - eff[1].x[1]*Si813[3][3])*T1813[3][6] + Si813[2][1]*T1813[4][6] + Si813[2][2]*T1813[5][6]) + S138[1][2]*((eff[1].x[3]*Si813[1][1] - eff[1].x[1]*Si813[3][1])*T1813[1][4] + Si813[2][2]*T1813[5][4] + Si813[2][3]*T1813[6][4]) + S138[2][2]*((eff[1].x[3]*Si813[1][2] - eff[1].x[1]*Si813[3][2])*T1813[2][5] + Si813[2][1]*T1813[4][5] + Si813[2][3]*T1813[6][5]);
T813[5][6]=S138[3][3]*((eff[1].x[3]*Si813[1][3] - eff[1].x[1]*Si813[3][3])*T1813[3][6] + Si813[2][1]*T1813[4][6] + Si813[2][2]*T1813[5][6]) + S138[1][3]*((eff[1].x[3]*Si813[1][1] - eff[1].x[1]*Si813[3][1])*T1813[1][4] + Si813[2][2]*T1813[5][4] + Si813[2][3]*T1813[6][4]) + S138[2][3]*((eff[1].x[3]*Si813[1][2] - eff[1].x[1]*Si813[3][2])*T1813[2][5] + Si813[2][1]*T1813[4][5] + Si813[2][3]*T1813[6][5]);

T813[6][1]=S138[3][1]*((-(eff[1].x[2]*Si813[1][1]) + eff[1].x[1]*Si813[2][1])*T1813[1][3] + (-(eff[1].x[2]*Si813[1][2]) + eff[1].x[1]*Si813[2][2])*T1813[2][3]) + S138[1][1]*((-(eff[1].x[2]*Si813[1][2]) + eff[1].x[1]*Si813[2][2])*T1813[2][1] + (-(eff[1].x[2]*Si813[1][3]) + eff[1].x[1]*Si813[2][3])*T1813[3][1]) + S138[2][1]*((-(eff[1].x[2]*Si813[1][1]) + eff[1].x[1]*Si813[2][1])*T1813[1][2] + (-(eff[1].x[2]*Si813[1][3]) + eff[1].x[1]*Si813[2][3])*T1813[3][2]) + (-(eff[1].x[3]*S138[3][2]) + eff[1].x[2]*S138[3][3])*((-(eff[1].x[2]*Si813[1][3]) + eff[1].x[1]*Si813[2][3])*T1813[3][6] + Si813[3][1]*T1813[4][6] + Si813[3][2]*T1813[5][6]) + (-(eff[1].x[3]*S138[1][2]) + eff[1].x[2]*S138[1][3])*((-(eff[1].x[2]*Si813[1][1]) + eff[1].x[1]*Si813[2][1])*T1813[1][4] + Si813[3][2]*T1813[5][4] + Si813[3][3]*T1813[6][4]) + (-(eff[1].x[3]*S138[2][2]) + eff[1].x[2]*S138[2][3])*((-(eff[1].x[2]*Si813[1][2]) + eff[1].x[1]*Si813[2][2])*T1813[2][5] + Si813[3][1]*T1813[4][5] + Si813[3][3]*T1813[6][5]);
T813[6][2]=S138[3][2]*((-(eff[1].x[2]*Si813[1][1]) + eff[1].x[1]*Si813[2][1])*T1813[1][3] + (-(eff[1].x[2]*Si813[1][2]) + eff[1].x[1]*Si813[2][2])*T1813[2][3]) + S138[1][2]*((-(eff[1].x[2]*Si813[1][2]) + eff[1].x[1]*Si813[2][2])*T1813[2][1] + (-(eff[1].x[2]*Si813[1][3]) + eff[1].x[1]*Si813[2][3])*T1813[3][1]) + S138[2][2]*((-(eff[1].x[2]*Si813[1][1]) + eff[1].x[1]*Si813[2][1])*T1813[1][2] + (-(eff[1].x[2]*Si813[1][3]) + eff[1].x[1]*Si813[2][3])*T1813[3][2]) + (eff[1].x[3]*S138[3][1] - eff[1].x[1]*S138[3][3])*((-(eff[1].x[2]*Si813[1][3]) + eff[1].x[1]*Si813[2][3])*T1813[3][6] + Si813[3][1]*T1813[4][6] + Si813[3][2]*T1813[5][6]) + (eff[1].x[3]*S138[1][1] - eff[1].x[1]*S138[1][3])*((-(eff[1].x[2]*Si813[1][1]) + eff[1].x[1]*Si813[2][1])*T1813[1][4] + Si813[3][2]*T1813[5][4] + Si813[3][3]*T1813[6][4]) + (eff[1].x[3]*S138[2][1] - eff[1].x[1]*S138[2][3])*((-(eff[1].x[2]*Si813[1][2]) + eff[1].x[1]*Si813[2][2])*T1813[2][5] + Si813[3][1]*T1813[4][5] + Si813[3][3]*T1813[6][5]);
T813[6][3]=S138[3][3]*((-(eff[1].x[2]*Si813[1][1]) + eff[1].x[1]*Si813[2][1])*T1813[1][3] + (-(eff[1].x[2]*Si813[1][2]) + eff[1].x[1]*Si813[2][2])*T1813[2][3]) + S138[1][3]*((-(eff[1].x[2]*Si813[1][2]) + eff[1].x[1]*Si813[2][2])*T1813[2][1] + (-(eff[1].x[2]*Si813[1][3]) + eff[1].x[1]*Si813[2][3])*T1813[3][1]) + S138[2][3]*((-(eff[1].x[2]*Si813[1][1]) + eff[1].x[1]*Si813[2][1])*T1813[1][2] + (-(eff[1].x[2]*Si813[1][3]) + eff[1].x[1]*Si813[2][3])*T1813[3][2]) + (-(eff[1].x[2]*S138[3][1]) + eff[1].x[1]*S138[3][2])*((-(eff[1].x[2]*Si813[1][3]) + eff[1].x[1]*Si813[2][3])*T1813[3][6] + Si813[3][1]*T1813[4][6] + Si813[3][2]*T1813[5][6]) + (-(eff[1].x[2]*S138[1][1]) + eff[1].x[1]*S138[1][2])*((-(eff[1].x[2]*Si813[1][1]) + eff[1].x[1]*Si813[2][1])*T1813[1][4] + Si813[3][2]*T1813[5][4] + Si813[3][3]*T1813[6][4]) + (-(eff[1].x[2]*S138[2][1]) + eff[1].x[1]*S138[2][2])*((-(eff[1].x[2]*Si813[1][2]) + eff[1].x[1]*Si813[2][2])*T1813[2][5] + Si813[3][1]*T1813[4][5] + Si813[3][3]*T1813[6][5]);
T813[6][4]=S138[3][1]*((-(eff[1].x[2]*Si813[1][3]) + eff[1].x[1]*Si813[2][3])*T1813[3][6] + Si813[3][1]*T1813[4][6] + Si813[3][2]*T1813[5][6]) + S138[1][1]*((-(eff[1].x[2]*Si813[1][1]) + eff[1].x[1]*Si813[2][1])*T1813[1][4] + Si813[3][2]*T1813[5][4] + Si813[3][3]*T1813[6][4]) + S138[2][1]*((-(eff[1].x[2]*Si813[1][2]) + eff[1].x[1]*Si813[2][2])*T1813[2][5] + Si813[3][1]*T1813[4][5] + Si813[3][3]*T1813[6][5]);
T813[6][5]=S138[3][2]*((-(eff[1].x[2]*Si813[1][3]) + eff[1].x[1]*Si813[2][3])*T1813[3][6] + Si813[3][1]*T1813[4][6] + Si813[3][2]*T1813[5][6]) + S138[1][2]*((-(eff[1].x[2]*Si813[1][1]) + eff[1].x[1]*Si813[2][1])*T1813[1][4] + Si813[3][2]*T1813[5][4] + Si813[3][3]*T1813[6][4]) + S138[2][2]*((-(eff[1].x[2]*Si813[1][2]) + eff[1].x[1]*Si813[2][2])*T1813[2][5] + Si813[3][1]*T1813[4][5] + Si813[3][3]*T1813[6][5]);
T813[6][6]=S138[3][3]*((-(eff[1].x[2]*Si813[1][3]) + eff[1].x[1]*Si813[2][3])*T1813[3][6] + Si813[3][1]*T1813[4][6] + Si813[3][2]*T1813[5][6]) + S138[1][3]*((-(eff[1].x[2]*Si813[1][1]) + eff[1].x[1]*Si813[2][1])*T1813[1][4] + Si813[3][2]*T1813[5][4] + Si813[3][3]*T1813[6][4]) + S138[2][3]*((-(eff[1].x[2]*Si813[1][2]) + eff[1].x[1]*Si813[2][2])*T1813[2][5] + Si813[3][1]*T1813[4][5] + Si813[3][3]*T1813[6][5]);



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
JA8[1][1]=0. + T813[1][1];
JA8[1][2]=0. + links[6].mcm[3] + T813[1][2];
JA8[1][3]=0. - links[6].mcm[2] + T813[1][3];
JA8[1][4]=0. + links[6].m + T813[1][4];
JA8[1][5]=0. + T813[1][5];
JA8[1][6]=0. + T813[1][6];

JA8[2][1]=0. - links[6].mcm[3] + T813[2][1];
JA8[2][2]=0. + T813[2][2];
JA8[2][3]=0. + links[6].mcm[1] + T813[2][3];
JA8[2][4]=0. + T813[2][4];
JA8[2][5]=0. + links[6].m + T813[2][5];
JA8[2][6]=0. + T813[2][6];

JA8[3][1]=0. + links[6].mcm[2] + T813[3][1];
JA8[3][2]=0. - links[6].mcm[1] + T813[3][2];
JA8[3][3]=0. + T813[3][3];
JA8[3][4]=0. + T813[3][4];
JA8[3][5]=0. + T813[3][5];
JA8[3][6]=0. + links[6].m + T813[3][6];

JA8[4][1]=0. + links[6].inertia[1][1] + T813[4][1];
JA8[4][2]=0. + links[6].inertia[1][2] + T813[4][2];
JA8[4][3]=0. + links[6].inertia[1][3] + T813[4][3];
JA8[4][4]=0. + T813[4][4];
JA8[4][5]=0. - links[6].mcm[3] + T813[4][5];
JA8[4][6]=0. + links[6].mcm[2] + T813[4][6];

JA8[5][1]=0. + links[6].inertia[1][2] + T813[5][1];
JA8[5][2]=0. + links[6].inertia[2][2] + T813[5][2];
JA8[5][3]=0. + links[6].inertia[2][3] + T813[5][3];
JA8[5][4]=0. + links[6].mcm[3] + T813[5][4];
JA8[5][5]=0. + T813[5][5];
JA8[5][6]=0. - links[6].mcm[1] + T813[5][6];

JA8[6][1]=0. + links[6].inertia[1][3] + T813[6][1];
JA8[6][2]=0. + links[6].inertia[2][3] + T813[6][2];
JA8[6][3]=0. + links[6].inertia[3][3] + T813[6][3];
JA8[6][4]=0. - links[6].mcm[2] + T813[6][4];
JA8[6][5]=0. + links[6].mcm[1] + T813[6][5];
JA8[6][6]=0. + T813[6][6];


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
T78[1][2]=Si78[1][1]*T178[1][3] + Si78[1][2]*T178[2][3];
T78[1][3]=S87[1][3]*(Si78[1][1]*T178[1][1] + Si78[1][2]*T178[2][1]) + S87[2][3]*(Si78[1][1]*T178[1][2] + Si78[1][2]*T178[2][2]);
T78[1][4]=S87[1][1]*(Si78[1][1]*T178[1][4] + Si78[1][2]*T178[2][4]) + S87[2][1]*(Si78[1][1]*T178[1][5] + Si78[1][2]*T178[2][5]);
T78[1][5]=Si78[1][1]*T178[1][6] + Si78[1][2]*T178[2][6];
T78[1][6]=S87[1][3]*(Si78[1][1]*T178[1][4] + Si78[1][2]*T178[2][4]) + S87[2][3]*(Si78[1][1]*T178[1][5] + Si78[1][2]*T178[2][5]);

T78[2][1]=S87[1][1]*T178[3][1] + S87[2][1]*T178[3][2];
T78[2][2]=T178[3][3];
T78[2][3]=S87[1][3]*T178[3][1] + S87[2][3]*T178[3][2];
T78[2][4]=S87[1][1]*T178[3][4] + S87[2][1]*T178[3][5];
T78[2][5]=T178[3][6];
T78[2][6]=S87[1][3]*T178[3][4] + S87[2][3]*T178[3][5];

T78[3][1]=S87[1][1]*(Si78[3][1]*T178[1][1] + Si78[3][2]*T178[2][1]) + S87[2][1]*(Si78[3][1]*T178[1][2] + Si78[3][2]*T178[2][2]);
T78[3][2]=Si78[3][1]*T178[1][3] + Si78[3][2]*T178[2][3];
T78[3][3]=S87[1][3]*(Si78[3][1]*T178[1][1] + Si78[3][2]*T178[2][1]) + S87[2][3]*(Si78[3][1]*T178[1][2] + Si78[3][2]*T178[2][2]);
T78[3][4]=S87[1][1]*(Si78[3][1]*T178[1][4] + Si78[3][2]*T178[2][4]) + S87[2][1]*(Si78[3][1]*T178[1][5] + Si78[3][2]*T178[2][5]);
T78[3][5]=Si78[3][1]*T178[1][6] + Si78[3][2]*T178[2][6];
T78[3][6]=S87[1][3]*(Si78[3][1]*T178[1][4] + Si78[3][2]*T178[2][4]) + S87[2][3]*(Si78[3][1]*T178[1][5] + Si78[3][2]*T178[2][5]);

T78[4][1]=S87[1][1]*(Si78[1][1]*T178[4][1] + Si78[1][2]*T178[5][1]) + S87[2][1]*(Si78[1][1]*T178[4][2] + Si78[1][2]*T178[5][2]);
T78[4][2]=Si78[1][1]*T178[4][3] + Si78[1][2]*T178[5][3];
T78[4][3]=S87[1][3]*(Si78[1][1]*T178[4][1] + Si78[1][2]*T178[5][1]) + S87[2][3]*(Si78[1][1]*T178[4][2] + Si78[1][2]*T178[5][2]);
T78[4][4]=S87[1][1]*(Si78[1][1]*T178[4][4] + Si78[1][2]*T178[5][4]) + S87[2][1]*(Si78[1][1]*T178[4][5] + Si78[1][2]*T178[5][5]);
T78[4][5]=Si78[1][1]*T178[4][6] + Si78[1][2]*T178[5][6];
T78[4][6]=S87[1][3]*(Si78[1][1]*T178[4][4] + Si78[1][2]*T178[5][4]) + S87[2][3]*(Si78[1][1]*T178[4][5] + Si78[1][2]*T178[5][5]);

T78[5][1]=S87[1][1]*T178[6][1] + S87[2][1]*T178[6][2];
T78[5][2]=T178[6][3];
T78[5][3]=S87[1][3]*T178[6][1] + S87[2][3]*T178[6][2];
T78[5][4]=S87[1][1]*T178[6][4] + S87[2][1]*T178[6][5];
T78[5][5]=T178[6][6];
T78[5][6]=S87[1][3]*T178[6][4] + S87[2][3]*T178[6][5];

T78[6][1]=S87[1][1]*(Si78[3][1]*T178[4][1] + Si78[3][2]*T178[5][1]) + S87[2][1]*(Si78[3][1]*T178[4][2] + Si78[3][2]*T178[5][2]);
T78[6][2]=Si78[3][1]*T178[4][3] + Si78[3][2]*T178[5][3];
T78[6][3]=S87[1][3]*(Si78[3][1]*T178[4][1] + Si78[3][2]*T178[5][1]) + S87[2][3]*(Si78[3][1]*T178[4][2] + Si78[3][2]*T178[5][2]);
T78[6][4]=S87[1][1]*(Si78[3][1]*T178[4][4] + Si78[3][2]*T178[5][4]) + S87[2][1]*(Si78[3][1]*T178[4][5] + Si78[3][2]*T178[5][5]);
T78[6][5]=Si78[3][1]*T178[4][6] + Si78[3][2]*T178[5][6];
T78[6][6]=S87[1][3]*(Si78[3][1]*T178[4][4] + Si78[3][2]*T178[5][4]) + S87[2][3]*(Si78[3][1]*T178[4][5] + Si78[3][2]*T178[5][5]);



}


void
hoap3_InvDynArtfunc24(void)
      {
JA7[1][1]=T78[1][1];
JA7[1][2]=links[5].mcm[3] + T78[1][2];
JA7[1][3]=-links[5].mcm[2] + T78[1][3];
JA7[1][4]=links[5].m + T78[1][4];
JA7[1][5]=T78[1][5];
JA7[1][6]=T78[1][6];

JA7[2][1]=-links[5].mcm[3] + T78[2][1];
JA7[2][2]=T78[2][2];
JA7[2][3]=links[5].mcm[1] + T78[2][3];
JA7[2][4]=T78[2][4];
JA7[2][5]=links[5].m + T78[2][5];
JA7[2][6]=T78[2][6];

JA7[3][1]=links[5].mcm[2] + T78[3][1];
JA7[3][2]=-links[5].mcm[1] + T78[3][2];
JA7[3][3]=T78[3][3];
JA7[3][4]=T78[3][4];
JA7[3][5]=T78[3][5];
JA7[3][6]=links[5].m + T78[3][6];

JA7[4][1]=links[5].inertia[1][1] + T78[4][1];
JA7[4][2]=links[5].inertia[1][2] + T78[4][2];
JA7[4][3]=links[5].inertia[1][3] + T78[4][3];
JA7[4][4]=T78[4][4];
JA7[4][5]=-links[5].mcm[3] + T78[4][5];
JA7[4][6]=links[5].mcm[2] + T78[4][6];

JA7[5][1]=links[5].inertia[1][2] + T78[5][1];
JA7[5][2]=links[5].inertia[2][2] + T78[5][2];
JA7[5][3]=links[5].inertia[2][3] + T78[5][3];
JA7[5][4]=links[5].mcm[3] + T78[5][4];
JA7[5][5]=T78[5][5];
JA7[5][6]=-links[5].mcm[1] + T78[5][6];

JA7[6][1]=links[5].inertia[1][3] + T78[6][1];
JA7[6][2]=links[5].inertia[2][3] + T78[6][2];
JA7[6][3]=links[5].inertia[3][3] + T78[6][3];
JA7[6][4]=-links[5].mcm[2] + T78[6][4];
JA7[6][5]=links[5].mcm[1] + T78[6][5];
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
T67[1][2]=S76[1][2]*(Si67[1][1]*T167[1][1] + Si67[1][2]*T167[2][1]) + S76[2][2]*(Si67[1][1]*T167[1][2] + Si67[1][2]*T167[2][2]) + LEGLINK3*(Si67[1][1]*T167[1][6] + Si67[1][2]*T167[2][6]);
T67[1][3]=Si67[1][1]*T167[1][3] + Si67[1][2]*T167[2][3] - LEGLINK3*S76[1][2]*(Si67[1][1]*T167[1][4] + Si67[1][2]*T167[2][4]) - LEGLINK3*S76[2][2]*(Si67[1][1]*T167[1][5] + Si67[1][2]*T167[2][5]);
T67[1][4]=S76[1][1]*(Si67[1][1]*T167[1][4] + Si67[1][2]*T167[2][4]) + S76[2][1]*(Si67[1][1]*T167[1][5] + Si67[1][2]*T167[2][5]);
T67[1][5]=S76[1][2]*(Si67[1][1]*T167[1][4] + Si67[1][2]*T167[2][4]) + S76[2][2]*(Si67[1][1]*T167[1][5] + Si67[1][2]*T167[2][5]);
T67[1][6]=Si67[1][1]*T167[1][6] + Si67[1][2]*T167[2][6];

T67[2][1]=S76[1][1]*(Si67[2][1]*T167[1][1] + Si67[2][2]*T167[2][1]) + S76[2][1]*(Si67[2][1]*T167[1][2] + Si67[2][2]*T167[2][2]);
T67[2][2]=S76[1][2]*(Si67[2][1]*T167[1][1] + Si67[2][2]*T167[2][1]) + S76[2][2]*(Si67[2][1]*T167[1][2] + Si67[2][2]*T167[2][2]) + LEGLINK3*(Si67[2][1]*T167[1][6] + Si67[2][2]*T167[2][6]);
T67[2][3]=Si67[2][1]*T167[1][3] + Si67[2][2]*T167[2][3] - LEGLINK3*S76[1][2]*(Si67[2][1]*T167[1][4] + Si67[2][2]*T167[2][4]) - LEGLINK3*S76[2][2]*(Si67[2][1]*T167[1][5] + Si67[2][2]*T167[2][5]);
T67[2][4]=S76[1][1]*(Si67[2][1]*T167[1][4] + Si67[2][2]*T167[2][4]) + S76[2][1]*(Si67[2][1]*T167[1][5] + Si67[2][2]*T167[2][5]);
T67[2][5]=S76[1][2]*(Si67[2][1]*T167[1][4] + Si67[2][2]*T167[2][4]) + S76[2][2]*(Si67[2][1]*T167[1][5] + Si67[2][2]*T167[2][5]);
T67[2][6]=Si67[2][1]*T167[1][6] + Si67[2][2]*T167[2][6];

T67[3][1]=S76[1][1]*T167[3][1] + S76[2][1]*T167[3][2];
T67[3][2]=S76[1][2]*T167[3][1] + S76[2][2]*T167[3][2] + LEGLINK3*T167[3][6];
T67[3][3]=T167[3][3] - LEGLINK3*S76[1][2]*T167[3][4] - LEGLINK3*S76[2][2]*T167[3][5];
T67[3][4]=S76[1][1]*T167[3][4] + S76[2][1]*T167[3][5];
T67[3][5]=S76[1][2]*T167[3][4] + S76[2][2]*T167[3][5];
T67[3][6]=T167[3][6];

T67[4][1]=S76[1][1]*(Si67[1][1]*T167[4][1] + Si67[1][2]*T167[5][1]) + S76[2][1]*(Si67[1][1]*T167[4][2] + Si67[1][2]*T167[5][2]);
T67[4][2]=S76[1][2]*(Si67[1][1]*T167[4][1] + Si67[1][2]*T167[5][1]) + S76[2][2]*(Si67[1][1]*T167[4][2] + Si67[1][2]*T167[5][2]) + LEGLINK3*(Si67[1][1]*T167[4][6] + Si67[1][2]*T167[5][6]);
T67[4][3]=Si67[1][1]*T167[4][3] + Si67[1][2]*T167[5][3] - LEGLINK3*S76[1][2]*(Si67[1][1]*T167[4][4] + Si67[1][2]*T167[5][4]) - LEGLINK3*S76[2][2]*(Si67[1][1]*T167[4][5] + Si67[1][2]*T167[5][5]);
T67[4][4]=S76[1][1]*(Si67[1][1]*T167[4][4] + Si67[1][2]*T167[5][4]) + S76[2][1]*(Si67[1][1]*T167[4][5] + Si67[1][2]*T167[5][5]);
T67[4][5]=S76[1][2]*(Si67[1][1]*T167[4][4] + Si67[1][2]*T167[5][4]) + S76[2][2]*(Si67[1][1]*T167[4][5] + Si67[1][2]*T167[5][5]);
T67[4][6]=Si67[1][1]*T167[4][6] + Si67[1][2]*T167[5][6];

T67[5][1]=S76[1][1]*(LEGLINK3*T167[3][1] + Si67[2][1]*T167[4][1] + Si67[2][2]*T167[5][1]) + S76[2][1]*(LEGLINK3*T167[3][2] + Si67[2][1]*T167[4][2] + Si67[2][2]*T167[5][2]);
T67[5][2]=S76[1][2]*(LEGLINK3*T167[3][1] + Si67[2][1]*T167[4][1] + Si67[2][2]*T167[5][1]) + S76[2][2]*(LEGLINK3*T167[3][2] + Si67[2][1]*T167[4][2] + Si67[2][2]*T167[5][2]) + LEGLINK3*(LEGLINK3*T167[3][6] + Si67[2][1]*T167[4][6] + Si67[2][2]*T167[5][6]);
T67[5][3]=LEGLINK3*T167[3][3] + Si67[2][1]*T167[4][3] + Si67[2][2]*T167[5][3] - LEGLINK3*S76[1][2]*(LEGLINK3*T167[3][4] + Si67[2][1]*T167[4][4] + Si67[2][2]*T167[5][4]) - LEGLINK3*S76[2][2]*(LEGLINK3*T167[3][5] + Si67[2][1]*T167[4][5] + Si67[2][2]*T167[5][5]);
T67[5][4]=S76[1][1]*(LEGLINK3*T167[3][4] + Si67[2][1]*T167[4][4] + Si67[2][2]*T167[5][4]) + S76[2][1]*(LEGLINK3*T167[3][5] + Si67[2][1]*T167[4][5] + Si67[2][2]*T167[5][5]);
T67[5][5]=S76[1][2]*(LEGLINK3*T167[3][4] + Si67[2][1]*T167[4][4] + Si67[2][2]*T167[5][4]) + S76[2][2]*(LEGLINK3*T167[3][5] + Si67[2][1]*T167[4][5] + Si67[2][2]*T167[5][5]);
T67[5][6]=LEGLINK3*T167[3][6] + Si67[2][1]*T167[4][6] + Si67[2][2]*T167[5][6];

T67[6][1]=S76[1][1]*(-(LEGLINK3*Si67[2][1]*T167[1][1]) - LEGLINK3*Si67[2][2]*T167[2][1] + T167[6][1]) + S76[2][1]*(-(LEGLINK3*Si67[2][1]*T167[1][2]) - LEGLINK3*Si67[2][2]*T167[2][2] + T167[6][2]);
T67[6][2]=S76[1][2]*(-(LEGLINK3*Si67[2][1]*T167[1][1]) - LEGLINK3*Si67[2][2]*T167[2][1] + T167[6][1]) + S76[2][2]*(-(LEGLINK3*Si67[2][1]*T167[1][2]) - LEGLINK3*Si67[2][2]*T167[2][2] + T167[6][2]) + LEGLINK3*(-(LEGLINK3*Si67[2][1]*T167[1][6]) - LEGLINK3*Si67[2][2]*T167[2][6] + T167[6][6]);
T67[6][3]=-(LEGLINK3*Si67[2][1]*T167[1][3]) - LEGLINK3*Si67[2][2]*T167[2][3] + T167[6][3] - LEGLINK3*S76[1][2]*(-(LEGLINK3*Si67[2][1]*T167[1][4]) - LEGLINK3*Si67[2][2]*T167[2][4] + T167[6][4]) - LEGLINK3*S76[2][2]*(-(LEGLINK3*Si67[2][1]*T167[1][5]) - LEGLINK3*Si67[2][2]*T167[2][5] + T167[6][5]);
T67[6][4]=S76[1][1]*(-(LEGLINK3*Si67[2][1]*T167[1][4]) - LEGLINK3*Si67[2][2]*T167[2][4] + T167[6][4]) + S76[2][1]*(-(LEGLINK3*Si67[2][1]*T167[1][5]) - LEGLINK3*Si67[2][2]*T167[2][5] + T167[6][5]);
T67[6][5]=S76[1][2]*(-(LEGLINK3*Si67[2][1]*T167[1][4]) - LEGLINK3*Si67[2][2]*T167[2][4] + T167[6][4]) + S76[2][2]*(-(LEGLINK3*Si67[2][1]*T167[1][5]) - LEGLINK3*Si67[2][2]*T167[2][5] + T167[6][5]);
T67[6][6]=-(LEGLINK3*Si67[2][1]*T167[1][6]) - LEGLINK3*Si67[2][2]*T167[2][6] + T167[6][6];



}


void
hoap3_InvDynArtfunc25(void)
      {
JA6[1][1]=T67[1][1];
JA6[1][2]=links[4].mcm[3] + T67[1][2];
JA6[1][3]=-links[4].mcm[2] + T67[1][3];
JA6[1][4]=links[4].m + T67[1][4];
JA6[1][5]=T67[1][5];
JA6[1][6]=T67[1][6];

JA6[2][1]=-links[4].mcm[3] + T67[2][1];
JA6[2][2]=T67[2][2];
JA6[2][3]=links[4].mcm[1] + T67[2][3];
JA6[2][4]=T67[2][4];
JA6[2][5]=links[4].m + T67[2][5];
JA6[2][6]=T67[2][6];

JA6[3][1]=links[4].mcm[2] + T67[3][1];
JA6[3][2]=-links[4].mcm[1] + T67[3][2];
JA6[3][3]=T67[3][3];
JA6[3][4]=T67[3][4];
JA6[3][5]=T67[3][5];
JA6[3][6]=links[4].m + T67[3][6];

JA6[4][1]=links[4].inertia[1][1] + T67[4][1];
JA6[4][2]=links[4].inertia[1][2] + T67[4][2];
JA6[4][3]=links[4].inertia[1][3] + T67[4][3];
JA6[4][4]=T67[4][4];
JA6[4][5]=-links[4].mcm[3] + T67[4][5];
JA6[4][6]=links[4].mcm[2] + T67[4][6];

JA6[5][1]=links[4].inertia[1][2] + T67[5][1];
JA6[5][2]=links[4].inertia[2][2] + T67[5][2];
JA6[5][3]=links[4].inertia[2][3] + T67[5][3];
JA6[5][4]=links[4].mcm[3] + T67[5][4];
JA6[5][5]=T67[5][5];
JA6[5][6]=-links[4].mcm[1] + T67[5][6];

JA6[6][1]=links[4].inertia[1][3] + T67[6][1];
JA6[6][2]=links[4].inertia[2][3] + T67[6][2];
JA6[6][3]=links[4].inertia[3][3] + T67[6][3];
JA6[6][4]=-links[4].mcm[2] + T67[6][4];
JA6[6][5]=links[4].mcm[1] + T67[6][5];
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


T56[1][1]=S65[1][1]*(Si56[1][1]*T156[1][1] + Si56[1][2]*T156[2][1]) + S65[2][1]*(Si56[1][1]*T156[1][2] + Si56[1][2]*T156[2][2]);
T56[1][2]=S65[1][2]*(Si56[1][1]*T156[1][1] + Si56[1][2]*T156[2][1]) + S65[2][2]*(Si56[1][1]*T156[1][2] + Si56[1][2]*T156[2][2]) + LEGLINK2*(Si56[1][1]*T156[1][6] + Si56[1][2]*T156[2][6]);
T56[1][3]=Si56[1][1]*T156[1][3] + Si56[1][2]*T156[2][3] - LEGLINK2*S65[1][2]*(Si56[1][1]*T156[1][4] + Si56[1][2]*T156[2][4]) - LEGLINK2*S65[2][2]*(Si56[1][1]*T156[1][5] + Si56[1][2]*T156[2][5]);
T56[1][4]=S65[1][1]*(Si56[1][1]*T156[1][4] + Si56[1][2]*T156[2][4]) + S65[2][1]*(Si56[1][1]*T156[1][5] + Si56[1][2]*T156[2][5]);
T56[1][5]=S65[1][2]*(Si56[1][1]*T156[1][4] + Si56[1][2]*T156[2][4]) + S65[2][2]*(Si56[1][1]*T156[1][5] + Si56[1][2]*T156[2][5]);
T56[1][6]=Si56[1][1]*T156[1][6] + Si56[1][2]*T156[2][6];

T56[2][1]=S65[1][1]*(Si56[2][1]*T156[1][1] + Si56[2][2]*T156[2][1]) + S65[2][1]*(Si56[2][1]*T156[1][2] + Si56[2][2]*T156[2][2]);
T56[2][2]=S65[1][2]*(Si56[2][1]*T156[1][1] + Si56[2][2]*T156[2][1]) + S65[2][2]*(Si56[2][1]*T156[1][2] + Si56[2][2]*T156[2][2]) + LEGLINK2*(Si56[2][1]*T156[1][6] + Si56[2][2]*T156[2][6]);
T56[2][3]=Si56[2][1]*T156[1][3] + Si56[2][2]*T156[2][3] - LEGLINK2*S65[1][2]*(Si56[2][1]*T156[1][4] + Si56[2][2]*T156[2][4]) - LEGLINK2*S65[2][2]*(Si56[2][1]*T156[1][5] + Si56[2][2]*T156[2][5]);
T56[2][4]=S65[1][1]*(Si56[2][1]*T156[1][4] + Si56[2][2]*T156[2][4]) + S65[2][1]*(Si56[2][1]*T156[1][5] + Si56[2][2]*T156[2][5]);
T56[2][5]=S65[1][2]*(Si56[2][1]*T156[1][4] + Si56[2][2]*T156[2][4]) + S65[2][2]*(Si56[2][1]*T156[1][5] + Si56[2][2]*T156[2][5]);
T56[2][6]=Si56[2][1]*T156[1][6] + Si56[2][2]*T156[2][6];

T56[3][1]=S65[1][1]*T156[3][1] + S65[2][1]*T156[3][2];
T56[3][2]=S65[1][2]*T156[3][1] + S65[2][2]*T156[3][2] + LEGLINK2*T156[3][6];
T56[3][3]=T156[3][3] - LEGLINK2*S65[1][2]*T156[3][4] - LEGLINK2*S65[2][2]*T156[3][5];
T56[3][4]=S65[1][1]*T156[3][4] + S65[2][1]*T156[3][5];
T56[3][5]=S65[1][2]*T156[3][4] + S65[2][2]*T156[3][5];
T56[3][6]=T156[3][6];

T56[4][1]=S65[1][1]*(Si56[1][1]*T156[4][1] + Si56[1][2]*T156[5][1]) + S65[2][1]*(Si56[1][1]*T156[4][2] + Si56[1][2]*T156[5][2]);
T56[4][2]=S65[1][2]*(Si56[1][1]*T156[4][1] + Si56[1][2]*T156[5][1]) + S65[2][2]*(Si56[1][1]*T156[4][2] + Si56[1][2]*T156[5][2]) + LEGLINK2*(Si56[1][1]*T156[4][6] + Si56[1][2]*T156[5][6]);
T56[4][3]=Si56[1][1]*T156[4][3] + Si56[1][2]*T156[5][3] - LEGLINK2*S65[1][2]*(Si56[1][1]*T156[4][4] + Si56[1][2]*T156[5][4]) - LEGLINK2*S65[2][2]*(Si56[1][1]*T156[4][5] + Si56[1][2]*T156[5][5]);
T56[4][4]=S65[1][1]*(Si56[1][1]*T156[4][4] + Si56[1][2]*T156[5][4]) + S65[2][1]*(Si56[1][1]*T156[4][5] + Si56[1][2]*T156[5][5]);
T56[4][5]=S65[1][2]*(Si56[1][1]*T156[4][4] + Si56[1][2]*T156[5][4]) + S65[2][2]*(Si56[1][1]*T156[4][5] + Si56[1][2]*T156[5][5]);
T56[4][6]=Si56[1][1]*T156[4][6] + Si56[1][2]*T156[5][6];

T56[5][1]=S65[1][1]*(LEGLINK2*T156[3][1] + Si56[2][1]*T156[4][1] + Si56[2][2]*T156[5][1]) + S65[2][1]*(LEGLINK2*T156[3][2] + Si56[2][1]*T156[4][2] + Si56[2][2]*T156[5][2]);
T56[5][2]=S65[1][2]*(LEGLINK2*T156[3][1] + Si56[2][1]*T156[4][1] + Si56[2][2]*T156[5][1]) + S65[2][2]*(LEGLINK2*T156[3][2] + Si56[2][1]*T156[4][2] + Si56[2][2]*T156[5][2]) + LEGLINK2*(LEGLINK2*T156[3][6] + Si56[2][1]*T156[4][6] + Si56[2][2]*T156[5][6]);
T56[5][3]=LEGLINK2*T156[3][3] + Si56[2][1]*T156[4][3] + Si56[2][2]*T156[5][3] - LEGLINK2*S65[1][2]*(LEGLINK2*T156[3][4] + Si56[2][1]*T156[4][4] + Si56[2][2]*T156[5][4]) - LEGLINK2*S65[2][2]*(LEGLINK2*T156[3][5] + Si56[2][1]*T156[4][5] + Si56[2][2]*T156[5][5]);
T56[5][4]=S65[1][1]*(LEGLINK2*T156[3][4] + Si56[2][1]*T156[4][4] + Si56[2][2]*T156[5][4]) + S65[2][1]*(LEGLINK2*T156[3][5] + Si56[2][1]*T156[4][5] + Si56[2][2]*T156[5][5]);
T56[5][5]=S65[1][2]*(LEGLINK2*T156[3][4] + Si56[2][1]*T156[4][4] + Si56[2][2]*T156[5][4]) + S65[2][2]*(LEGLINK2*T156[3][5] + Si56[2][1]*T156[4][5] + Si56[2][2]*T156[5][5]);
T56[5][6]=LEGLINK2*T156[3][6] + Si56[2][1]*T156[4][6] + Si56[2][2]*T156[5][6];

T56[6][1]=S65[1][1]*(-(LEGLINK2*Si56[2][1]*T156[1][1]) - LEGLINK2*Si56[2][2]*T156[2][1] + T156[6][1]) + S65[2][1]*(-(LEGLINK2*Si56[2][1]*T156[1][2]) - LEGLINK2*Si56[2][2]*T156[2][2] + T156[6][2]);
T56[6][2]=S65[1][2]*(-(LEGLINK2*Si56[2][1]*T156[1][1]) - LEGLINK2*Si56[2][2]*T156[2][1] + T156[6][1]) + S65[2][2]*(-(LEGLINK2*Si56[2][1]*T156[1][2]) - LEGLINK2*Si56[2][2]*T156[2][2] + T156[6][2]) + LEGLINK2*(-(LEGLINK2*Si56[2][1]*T156[1][6]) - LEGLINK2*Si56[2][2]*T156[2][6] + T156[6][6]);
T56[6][3]=-(LEGLINK2*Si56[2][1]*T156[1][3]) - LEGLINK2*Si56[2][2]*T156[2][3] + T156[6][3] - LEGLINK2*S65[1][2]*(-(LEGLINK2*Si56[2][1]*T156[1][4]) - LEGLINK2*Si56[2][2]*T156[2][4] + T156[6][4]) - LEGLINK2*S65[2][2]*(-(LEGLINK2*Si56[2][1]*T156[1][5]) - LEGLINK2*Si56[2][2]*T156[2][5] + T156[6][5]);
T56[6][4]=S65[1][1]*(-(LEGLINK2*Si56[2][1]*T156[1][4]) - LEGLINK2*Si56[2][2]*T156[2][4] + T156[6][4]) + S65[2][1]*(-(LEGLINK2*Si56[2][1]*T156[1][5]) - LEGLINK2*Si56[2][2]*T156[2][5] + T156[6][5]);
T56[6][5]=S65[1][2]*(-(LEGLINK2*Si56[2][1]*T156[1][4]) - LEGLINK2*Si56[2][2]*T156[2][4] + T156[6][4]) + S65[2][2]*(-(LEGLINK2*Si56[2][1]*T156[1][5]) - LEGLINK2*Si56[2][2]*T156[2][5] + T156[6][5]);
T56[6][6]=-(LEGLINK2*Si56[2][1]*T156[1][6]) - LEGLINK2*Si56[2][2]*T156[2][6] + T156[6][6];



}


void
hoap3_InvDynArtfunc26(void)
      {
JA5[1][1]=T56[1][1];
JA5[1][2]=links[3].mcm[3] + T56[1][2];
JA5[1][3]=-links[3].mcm[2] + T56[1][3];
JA5[1][4]=links[3].m + T56[1][4];
JA5[1][5]=T56[1][5];
JA5[1][6]=T56[1][6];

JA5[2][1]=-links[3].mcm[3] + T56[2][1];
JA5[2][2]=T56[2][2];
JA5[2][3]=links[3].mcm[1] + T56[2][3];
JA5[2][4]=T56[2][4];
JA5[2][5]=links[3].m + T56[2][5];
JA5[2][6]=T56[2][6];

JA5[3][1]=links[3].mcm[2] + T56[3][1];
JA5[3][2]=-links[3].mcm[1] + T56[3][2];
JA5[3][3]=T56[3][3];
JA5[3][4]=T56[3][4];
JA5[3][5]=T56[3][5];
JA5[3][6]=links[3].m + T56[3][6];

JA5[4][1]=links[3].inertia[1][1] + T56[4][1];
JA5[4][2]=links[3].inertia[1][2] + T56[4][2];
JA5[4][3]=links[3].inertia[1][3] + T56[4][3];
JA5[4][4]=T56[4][4];
JA5[4][5]=-links[3].mcm[3] + T56[4][5];
JA5[4][6]=links[3].mcm[2] + T56[4][6];

JA5[5][1]=links[3].inertia[1][2] + T56[5][1];
JA5[5][2]=links[3].inertia[2][2] + T56[5][2];
JA5[5][3]=links[3].inertia[2][3] + T56[5][3];
JA5[5][4]=links[3].mcm[3] + T56[5][4];
JA5[5][5]=T56[5][5];
JA5[5][6]=-links[3].mcm[1] + T56[5][6];

JA5[6][1]=links[3].inertia[1][3] + T56[6][1];
JA5[6][2]=links[3].inertia[2][3] + T56[6][2];
JA5[6][3]=links[3].inertia[3][3] + T56[6][3];
JA5[6][4]=-links[3].mcm[2] + T56[6][4];
JA5[6][5]=links[3].mcm[1] + T56[6][5];
JA5[6][6]=T56[6][6];


h5[1]=JA5[1][3];
h5[2]=JA5[2][3];
h5[3]=JA5[3][3];
h5[4]=JA5[4][3];
h5[5]=JA5[5][3];
h5[6]=JA5[6][3];

T145[1][1]=JA5[1][1];
T145[1][2]=JA5[1][2];
T145[1][3]=JA5[1][3];
T145[1][4]=JA5[1][4];
T145[1][5]=JA5[1][5];
T145[1][6]=JA5[1][6];

T145[2][1]=JA5[2][1];
T145[2][2]=JA5[2][2];
T145[2][3]=JA5[2][3];
T145[2][4]=JA5[2][4];
T145[2][5]=JA5[2][5];
T145[2][6]=JA5[2][6];

T145[3][1]=JA5[3][1];
T145[3][2]=JA5[3][2];
T145[3][3]=JA5[3][3];
T145[3][4]=JA5[3][4];
T145[3][5]=JA5[3][5];
T145[3][6]=JA5[3][6];

T145[4][1]=JA5[4][1];
T145[4][2]=JA5[4][2];
T145[4][3]=JA5[4][3];
T145[4][4]=JA5[4][4];
T145[4][5]=JA5[4][5];
T145[4][6]=JA5[4][6];

T145[5][1]=JA5[5][1];
T145[5][2]=JA5[5][2];
T145[5][3]=JA5[5][3];
T145[5][4]=JA5[5][4];
T145[5][5]=JA5[5][5];
T145[5][6]=JA5[5][6];

T145[6][1]=JA5[6][1];
T145[6][2]=JA5[6][2];
T145[6][3]=JA5[6][3];
T145[6][4]=JA5[6][4];
T145[6][5]=JA5[6][5];
T145[6][6]=JA5[6][6];


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
hoap3_InvDynArtfunc27(void)
      {
JA4[1][1]=T45[1][1];
JA4[1][2]=links[2].mcm[3] + T45[1][2];
JA4[1][3]=-links[2].mcm[2] + T45[1][3];
JA4[1][4]=links[2].m + T45[1][4];
JA4[1][5]=T45[1][5];
JA4[1][6]=T45[1][6];

JA4[2][1]=-links[2].mcm[3] + T45[2][1];
JA4[2][2]=T45[2][2];
JA4[2][3]=links[2].mcm[1] + T45[2][3];
JA4[2][4]=T45[2][4];
JA4[2][5]=links[2].m + T45[2][5];
JA4[2][6]=T45[2][6];

JA4[3][1]=links[2].mcm[2] + T45[3][1];
JA4[3][2]=-links[2].mcm[1] + T45[3][2];
JA4[3][3]=T45[3][3];
JA4[3][4]=T45[3][4];
JA4[3][5]=T45[3][5];
JA4[3][6]=links[2].m + T45[3][6];

JA4[4][1]=links[2].inertia[1][1] + T45[4][1];
JA4[4][2]=links[2].inertia[1][2] + T45[4][2];
JA4[4][3]=links[2].inertia[1][3] + T45[4][3];
JA4[4][4]=T45[4][4];
JA4[4][5]=-links[2].mcm[3] + T45[4][5];
JA4[4][6]=links[2].mcm[2] + T45[4][6];

JA4[5][1]=links[2].inertia[1][2] + T45[5][1];
JA4[5][2]=links[2].inertia[2][2] + T45[5][2];
JA4[5][3]=links[2].inertia[2][3] + T45[5][3];
JA4[5][4]=links[2].mcm[3] + T45[5][4];
JA4[5][5]=T45[5][5];
JA4[5][6]=-links[2].mcm[1] + T45[5][6];

JA4[6][1]=links[2].inertia[1][3] + T45[6][1];
JA4[6][2]=links[2].inertia[2][3] + T45[6][2];
JA4[6][3]=links[2].inertia[3][3] + T45[6][3];
JA4[6][4]=-links[2].mcm[2] + T45[6][4];
JA4[6][5]=links[2].mcm[1] + T45[6][5];
JA4[6][6]=T45[6][6];


h4[1]=JA4[1][3];
h4[2]=JA4[2][3];
h4[3]=JA4[3][3];
h4[4]=JA4[4][3];
h4[5]=JA4[5][3];
h4[6]=JA4[6][3];

T134[1][1]=JA4[1][1];
T134[1][2]=JA4[1][2];
T134[1][3]=JA4[1][3];
T134[1][4]=JA4[1][4];
T134[1][5]=JA4[1][5];
T134[1][6]=JA4[1][6];

T134[2][1]=JA4[2][1];
T134[2][2]=JA4[2][2];
T134[2][3]=JA4[2][3];
T134[2][4]=JA4[2][4];
T134[2][5]=JA4[2][5];
T134[2][6]=JA4[2][6];

T134[3][1]=JA4[3][1];
T134[3][2]=JA4[3][2];
T134[3][3]=JA4[3][3];
T134[3][4]=JA4[3][4];
T134[3][5]=JA4[3][5];
T134[3][6]=JA4[3][6];

T134[4][1]=JA4[4][1];
T134[4][2]=JA4[4][2];
T134[4][3]=JA4[4][3];
T134[4][4]=JA4[4][4];
T134[4][5]=JA4[4][5];
T134[4][6]=JA4[4][6];

T134[5][1]=JA4[5][1];
T134[5][2]=JA4[5][2];
T134[5][3]=JA4[5][3];
T134[5][4]=JA4[5][4];
T134[5][5]=JA4[5][5];
T134[5][6]=JA4[5][6];

T134[6][1]=JA4[6][1];
T134[6][2]=JA4[6][2];
T134[6][3]=JA4[6][3];
T134[6][4]=JA4[6][4];
T134[6][5]=JA4[6][5];
T134[6][6]=JA4[6][6];


T34[1][1]=S43[1][1]*(Si34[1][1]*T134[1][1] + Si34[1][2]*T134[2][1]) + S43[2][1]*(Si34[1][1]*T134[1][2] + Si34[1][2]*T134[2][2]);
T34[1][2]=-(Si34[1][1]*T134[1][3]) - Si34[1][2]*T134[2][3];
T34[1][3]=S43[1][3]*(Si34[1][1]*T134[1][1] + Si34[1][2]*T134[2][1]) + S43[2][3]*(Si34[1][1]*T134[1][2] + Si34[1][2]*T134[2][2]);
T34[1][4]=S43[1][1]*(Si34[1][1]*T134[1][4] + Si34[1][2]*T134[2][4]) + S43[2][1]*(Si34[1][1]*T134[1][5] + Si34[1][2]*T134[2][5]);
T34[1][5]=-(Si34[1][1]*T134[1][6]) - Si34[1][2]*T134[2][6];
T34[1][6]=S43[1][3]*(Si34[1][1]*T134[1][4] + Si34[1][2]*T134[2][4]) + S43[2][3]*(Si34[1][1]*T134[1][5] + Si34[1][2]*T134[2][5]);

T34[2][1]=-(S43[1][1]*T134[3][1]) - S43[2][1]*T134[3][2];
T34[2][2]=T134[3][3];
T34[2][3]=-(S43[1][3]*T134[3][1]) - S43[2][3]*T134[3][2];
T34[2][4]=-(S43[1][1]*T134[3][4]) - S43[2][1]*T134[3][5];
T34[2][5]=T134[3][6];
T34[2][6]=-(S43[1][3]*T134[3][4]) - S43[2][3]*T134[3][5];

T34[3][1]=S43[1][1]*(Si34[3][1]*T134[1][1] + Si34[3][2]*T134[2][1]) + S43[2][1]*(Si34[3][1]*T134[1][2] + Si34[3][2]*T134[2][2]);
T34[3][2]=-(Si34[3][1]*T134[1][3]) - Si34[3][2]*T134[2][3];
T34[3][3]=S43[1][3]*(Si34[3][1]*T134[1][1] + Si34[3][2]*T134[2][1]) + S43[2][3]*(Si34[3][1]*T134[1][2] + Si34[3][2]*T134[2][2]);
T34[3][4]=S43[1][1]*(Si34[3][1]*T134[1][4] + Si34[3][2]*T134[2][4]) + S43[2][1]*(Si34[3][1]*T134[1][5] + Si34[3][2]*T134[2][5]);
T34[3][5]=-(Si34[3][1]*T134[1][6]) - Si34[3][2]*T134[2][6];
T34[3][6]=S43[1][3]*(Si34[3][1]*T134[1][4] + Si34[3][2]*T134[2][4]) + S43[2][3]*(Si34[3][1]*T134[1][5] + Si34[3][2]*T134[2][5]);

T34[4][1]=S43[1][1]*(Si34[1][1]*T134[4][1] + Si34[1][2]*T134[5][1]) + S43[2][1]*(Si34[1][1]*T134[4][2] + Si34[1][2]*T134[5][2]);
T34[4][2]=-(Si34[1][1]*T134[4][3]) - Si34[1][2]*T134[5][3];
T34[4][3]=S43[1][3]*(Si34[1][1]*T134[4][1] + Si34[1][2]*T134[5][1]) + S43[2][3]*(Si34[1][1]*T134[4][2] + Si34[1][2]*T134[5][2]);
T34[4][4]=S43[1][1]*(Si34[1][1]*T134[4][4] + Si34[1][2]*T134[5][4]) + S43[2][1]*(Si34[1][1]*T134[4][5] + Si34[1][2]*T134[5][5]);
T34[4][5]=-(Si34[1][1]*T134[4][6]) - Si34[1][2]*T134[5][6];
T34[4][6]=S43[1][3]*(Si34[1][1]*T134[4][4] + Si34[1][2]*T134[5][4]) + S43[2][3]*(Si34[1][1]*T134[4][5] + Si34[1][2]*T134[5][5]);

T34[5][1]=-(S43[1][1]*T134[6][1]) - S43[2][1]*T134[6][2];
T34[5][2]=T134[6][3];
T34[5][3]=-(S43[1][3]*T134[6][1]) - S43[2][3]*T134[6][2];
T34[5][4]=-(S43[1][1]*T134[6][4]) - S43[2][1]*T134[6][5];
T34[5][5]=T134[6][6];
T34[5][6]=-(S43[1][3]*T134[6][4]) - S43[2][3]*T134[6][5];

T34[6][1]=S43[1][1]*(Si34[3][1]*T134[4][1] + Si34[3][2]*T134[5][1]) + S43[2][1]*(Si34[3][1]*T134[4][2] + Si34[3][2]*T134[5][2]);
T34[6][2]=-(Si34[3][1]*T134[4][3]) - Si34[3][2]*T134[5][3];
T34[6][3]=S43[1][3]*(Si34[3][1]*T134[4][1] + Si34[3][2]*T134[5][1]) + S43[2][3]*(Si34[3][1]*T134[4][2] + Si34[3][2]*T134[5][2]);
T34[6][4]=S43[1][1]*(Si34[3][1]*T134[4][4] + Si34[3][2]*T134[5][4]) + S43[2][1]*(Si34[3][1]*T134[4][5] + Si34[3][2]*T134[5][5]);
T34[6][5]=-(Si34[3][1]*T134[4][6]) - Si34[3][2]*T134[5][6];
T34[6][6]=S43[1][3]*(Si34[3][1]*T134[4][4] + Si34[3][2]*T134[5][4]) + S43[2][3]*(Si34[3][1]*T134[4][5] + Si34[3][2]*T134[5][5]);



}


void
hoap3_InvDynArtfunc28(void)
      {
JA3[1][1]=T34[1][1];
JA3[1][2]=links[1].mcm[3] + T34[1][2];
JA3[1][3]=-links[1].mcm[2] + T34[1][3];
JA3[1][4]=links[1].m + T34[1][4];
JA3[1][5]=T34[1][5];
JA3[1][6]=T34[1][6];

JA3[2][1]=-links[1].mcm[3] + T34[2][1];
JA3[2][2]=T34[2][2];
JA3[2][3]=links[1].mcm[1] + T34[2][3];
JA3[2][4]=T34[2][4];
JA3[2][5]=links[1].m + T34[2][5];
JA3[2][6]=T34[2][6];

JA3[3][1]=links[1].mcm[2] + T34[3][1];
JA3[3][2]=-links[1].mcm[1] + T34[3][2];
JA3[3][3]=T34[3][3];
JA3[3][4]=T34[3][4];
JA3[3][5]=T34[3][5];
JA3[3][6]=links[1].m + T34[3][6];

JA3[4][1]=links[1].inertia[1][1] + T34[4][1];
JA3[4][2]=links[1].inertia[1][2] + T34[4][2];
JA3[4][3]=links[1].inertia[1][3] + T34[4][3];
JA3[4][4]=T34[4][4];
JA3[4][5]=-links[1].mcm[3] + T34[4][5];
JA3[4][6]=links[1].mcm[2] + T34[4][6];

JA3[5][1]=links[1].inertia[1][2] + T34[5][1];
JA3[5][2]=links[1].inertia[2][2] + T34[5][2];
JA3[5][3]=links[1].inertia[2][3] + T34[5][3];
JA3[5][4]=links[1].mcm[3] + T34[5][4];
JA3[5][5]=T34[5][5];
JA3[5][6]=-links[1].mcm[1] + T34[5][6];

JA3[6][1]=links[1].inertia[1][3] + T34[6][1];
JA3[6][2]=links[1].inertia[2][3] + T34[6][2];
JA3[6][3]=links[1].inertia[3][3] + T34[6][3];
JA3[6][4]=-links[1].mcm[2] + T34[6][4];
JA3[6][5]=links[1].mcm[1] + T34[6][5];
JA3[6][6]=T34[6][6];


h3[1]=JA3[1][3];
h3[2]=JA3[2][3];
h3[3]=JA3[3][3];
h3[4]=JA3[4][3];
h3[5]=JA3[5][3];
h3[6]=JA3[6][3];

T123[1][1]=JA3[1][1];
T123[1][2]=JA3[1][2];
T123[1][3]=JA3[1][3];
T123[1][4]=JA3[1][4];
T123[1][5]=JA3[1][5];
T123[1][6]=JA3[1][6];

T123[2][1]=JA3[2][1];
T123[2][2]=JA3[2][2];
T123[2][3]=JA3[2][3];
T123[2][4]=JA3[2][4];
T123[2][5]=JA3[2][5];
T123[2][6]=JA3[2][6];

T123[3][1]=JA3[3][1];
T123[3][2]=JA3[3][2];
T123[3][3]=JA3[3][3];
T123[3][4]=JA3[3][4];
T123[3][5]=JA3[3][5];
T123[3][6]=JA3[3][6];

T123[4][1]=JA3[4][1];
T123[4][2]=JA3[4][2];
T123[4][3]=JA3[4][3];
T123[4][4]=JA3[4][4];
T123[4][5]=JA3[4][5];
T123[4][6]=JA3[4][6];

T123[5][1]=JA3[5][1];
T123[5][2]=JA3[5][2];
T123[5][3]=JA3[5][3];
T123[5][4]=JA3[5][4];
T123[5][5]=JA3[5][5];
T123[5][6]=JA3[5][6];

T123[6][1]=JA3[6][1];
T123[6][2]=JA3[6][2];
T123[6][3]=JA3[6][3];
T123[6][4]=JA3[6][4];
T123[6][5]=JA3[6][5];
T123[6][6]=JA3[6][6];


T23[1][1]=S32[1][1]*(Si23[1][1]*T123[1][1] + Si23[1][2]*T123[2][1]) + S32[2][1]*(Si23[1][1]*T123[1][2] + Si23[1][2]*T123[2][2]) - WAISTLINK1*S32[1][3]*(Si23[1][1]*T123[1][4] + Si23[1][2]*T123[2][4]) - WAISTLINK1*S32[2][3]*(Si23[1][1]*T123[1][5] + Si23[1][2]*T123[2][5]) - LEGLINK1*(Si23[1][1]*T123[1][6] + Si23[1][2]*T123[2][6]);
T23[1][2]=Si23[1][1]*T123[1][3] + Si23[1][2]*T123[2][3] + (LEGLINK1*S32[1][1] + WAISTLINK2*S32[1][3])*(Si23[1][1]*T123[1][4] + Si23[1][2]*T123[2][4]) + (LEGLINK1*S32[2][1] + WAISTLINK2*S32[2][3])*(Si23[1][1]*T123[1][5] + Si23[1][2]*T123[2][5]);
T23[1][3]=S32[1][3]*(Si23[1][1]*T123[1][1] + Si23[1][2]*T123[2][1]) + S32[2][3]*(Si23[1][1]*T123[1][2] + Si23[1][2]*T123[2][2]) + WAISTLINK1*S32[1][1]*(Si23[1][1]*T123[1][4] + Si23[1][2]*T123[2][4]) + WAISTLINK1*S32[2][1]*(Si23[1][1]*T123[1][5] + Si23[1][2]*T123[2][5]) - WAISTLINK2*(Si23[1][1]*T123[1][6] + Si23[1][2]*T123[2][6]);
T23[1][4]=S32[1][1]*(Si23[1][1]*T123[1][4] + Si23[1][2]*T123[2][4]) + S32[2][1]*(Si23[1][1]*T123[1][5] + Si23[1][2]*T123[2][5]);
T23[1][5]=Si23[1][1]*T123[1][6] + Si23[1][2]*T123[2][6];
T23[1][6]=S32[1][3]*(Si23[1][1]*T123[1][4] + Si23[1][2]*T123[2][4]) + S32[2][3]*(Si23[1][1]*T123[1][5] + Si23[1][2]*T123[2][5]);

T23[2][1]=S32[1][1]*T123[3][1] + S32[2][1]*T123[3][2] - WAISTLINK1*S32[1][3]*T123[3][4] - WAISTLINK1*S32[2][3]*T123[3][5] - LEGLINK1*T123[3][6];
T23[2][2]=T123[3][3] + (LEGLINK1*S32[1][1] + WAISTLINK2*S32[1][3])*T123[3][4] + (LEGLINK1*S32[2][1] + WAISTLINK2*S32[2][3])*T123[3][5];
T23[2][3]=S32[1][3]*T123[3][1] + S32[2][3]*T123[3][2] + WAISTLINK1*S32[1][1]*T123[3][4] + WAISTLINK1*S32[2][1]*T123[3][5] - WAISTLINK2*T123[3][6];
T23[2][4]=S32[1][1]*T123[3][4] + S32[2][1]*T123[3][5];
T23[2][5]=T123[3][6];
T23[2][6]=S32[1][3]*T123[3][4] + S32[2][3]*T123[3][5];

T23[3][1]=S32[1][1]*(Si23[3][1]*T123[1][1] + Si23[3][2]*T123[2][1]) + S32[2][1]*(Si23[3][1]*T123[1][2] + Si23[3][2]*T123[2][2]) - WAISTLINK1*S32[1][3]*(Si23[3][1]*T123[1][4] + Si23[3][2]*T123[2][4]) - WAISTLINK1*S32[2][3]*(Si23[3][1]*T123[1][5] + Si23[3][2]*T123[2][5]) - LEGLINK1*(Si23[3][1]*T123[1][6] + Si23[3][2]*T123[2][6]);
T23[3][2]=Si23[3][1]*T123[1][3] + Si23[3][2]*T123[2][3] + (LEGLINK1*S32[1][1] + WAISTLINK2*S32[1][3])*(Si23[3][1]*T123[1][4] + Si23[3][2]*T123[2][4]) + (LEGLINK1*S32[2][1] + WAISTLINK2*S32[2][3])*(Si23[3][1]*T123[1][5] + Si23[3][2]*T123[2][5]);
T23[3][3]=S32[1][3]*(Si23[3][1]*T123[1][1] + Si23[3][2]*T123[2][1]) + S32[2][3]*(Si23[3][1]*T123[1][2] + Si23[3][2]*T123[2][2]) + WAISTLINK1*S32[1][1]*(Si23[3][1]*T123[1][4] + Si23[3][2]*T123[2][4]) + WAISTLINK1*S32[2][1]*(Si23[3][1]*T123[1][5] + Si23[3][2]*T123[2][5]) - WAISTLINK2*(Si23[3][1]*T123[1][6] + Si23[3][2]*T123[2][6]);
T23[3][4]=S32[1][1]*(Si23[3][1]*T123[1][4] + Si23[3][2]*T123[2][4]) + S32[2][1]*(Si23[3][1]*T123[1][5] + Si23[3][2]*T123[2][5]);
T23[3][5]=Si23[3][1]*T123[1][6] + Si23[3][2]*T123[2][6];
T23[3][6]=S32[1][3]*(Si23[3][1]*T123[1][4] + Si23[3][2]*T123[2][4]) + S32[2][3]*(Si23[3][1]*T123[1][5] + Si23[3][2]*T123[2][5]);

T23[4][1]=S32[1][1]*(-(WAISTLINK1*Si23[3][1]*T123[1][1]) - WAISTLINK1*Si23[3][2]*T123[2][1] - LEGLINK1*T123[3][1] + Si23[1][1]*T123[4][1] + Si23[1][2]*T123[5][1]) + S32[2][1]*(-(WAISTLINK1*Si23[3][1]*T123[1][2]) - WAISTLINK1*Si23[3][2]*T123[2][2] - LEGLINK1*T123[3][2] + Si23[1][1]*T123[4][2] + Si23[1][2]*T123[5][2]) - WAISTLINK1*S32[1][3]*(-(WAISTLINK1*Si23[3][1]*T123[1][4]) - WAISTLINK1*Si23[3][2]*T123[2][4] - LEGLINK1*T123[3][4] + Si23[1][1]*T123[4][4] + Si23[1][2]*T123[5][4]) - WAISTLINK1*S32[2][3]*(-(WAISTLINK1*Si23[3][1]*T123[1][5]) - WAISTLINK1*Si23[3][2]*T123[2][5] - LEGLINK1*T123[3][5] + Si23[1][1]*T123[4][5] + Si23[1][2]*T123[5][5]) - LEGLINK1*(-(WAISTLINK1*Si23[3][1]*T123[1][6]) - WAISTLINK1*Si23[3][2]*T123[2][6] - LEGLINK1*T123[3][6] + Si23[1][1]*T123[4][6] + Si23[1][2]*T123[5][6]);
T23[4][2]=-(WAISTLINK1*Si23[3][1]*T123[1][3]) - WAISTLINK1*Si23[3][2]*T123[2][3] - LEGLINK1*T123[3][3] + Si23[1][1]*T123[4][3] + Si23[1][2]*T123[5][3] + (LEGLINK1*S32[1][1] + WAISTLINK2*S32[1][3])*(-(WAISTLINK1*Si23[3][1]*T123[1][4]) - WAISTLINK1*Si23[3][2]*T123[2][4] - LEGLINK1*T123[3][4] + Si23[1][1]*T123[4][4] + Si23[1][2]*T123[5][4]) + (LEGLINK1*S32[2][1] + WAISTLINK2*S32[2][3])*(-(WAISTLINK1*Si23[3][1]*T123[1][5]) - WAISTLINK1*Si23[3][2]*T123[2][5] - LEGLINK1*T123[3][5] + Si23[1][1]*T123[4][5] + Si23[1][2]*T123[5][5]);
T23[4][3]=S32[1][3]*(-(WAISTLINK1*Si23[3][1]*T123[1][1]) - WAISTLINK1*Si23[3][2]*T123[2][1] - LEGLINK1*T123[3][1] + Si23[1][1]*T123[4][1] + Si23[1][2]*T123[5][1]) + S32[2][3]*(-(WAISTLINK1*Si23[3][1]*T123[1][2]) - WAISTLINK1*Si23[3][2]*T123[2][2] - LEGLINK1*T123[3][2] + Si23[1][1]*T123[4][2] + Si23[1][2]*T123[5][2]) + WAISTLINK1*S32[1][1]*(-(WAISTLINK1*Si23[3][1]*T123[1][4]) - WAISTLINK1*Si23[3][2]*T123[2][4] - LEGLINK1*T123[3][4] + Si23[1][1]*T123[4][4] + Si23[1][2]*T123[5][4]) + WAISTLINK1*S32[2][1]*(-(WAISTLINK1*Si23[3][1]*T123[1][5]) - WAISTLINK1*Si23[3][2]*T123[2][5] - LEGLINK1*T123[3][5] + Si23[1][1]*T123[4][5] + Si23[1][2]*T123[5][5]) - WAISTLINK2*(-(WAISTLINK1*Si23[3][1]*T123[1][6]) - WAISTLINK1*Si23[3][2]*T123[2][6] - LEGLINK1*T123[3][6] + Si23[1][1]*T123[4][6] + Si23[1][2]*T123[5][6]);
T23[4][4]=S32[1][1]*(-(WAISTLINK1*Si23[3][1]*T123[1][4]) - WAISTLINK1*Si23[3][2]*T123[2][4] - LEGLINK1*T123[3][4] + Si23[1][1]*T123[4][4] + Si23[1][2]*T123[5][4]) + S32[2][1]*(-(WAISTLINK1*Si23[3][1]*T123[1][5]) - WAISTLINK1*Si23[3][2]*T123[2][5] - LEGLINK1*T123[3][5] + Si23[1][1]*T123[4][5] + Si23[1][2]*T123[5][5]);
T23[4][5]=-(WAISTLINK1*Si23[3][1]*T123[1][6]) - WAISTLINK1*Si23[3][2]*T123[2][6] - LEGLINK1*T123[3][6] + Si23[1][1]*T123[4][6] + Si23[1][2]*T123[5][6];
T23[4][6]=S32[1][3]*(-(WAISTLINK1*Si23[3][1]*T123[1][4]) - WAISTLINK1*Si23[3][2]*T123[2][4] - LEGLINK1*T123[3][4] + Si23[1][1]*T123[4][4] + Si23[1][2]*T123[5][4]) + S32[2][3]*(-(WAISTLINK1*Si23[3][1]*T123[1][5]) - WAISTLINK1*Si23[3][2]*T123[2][5] - LEGLINK1*T123[3][5] + Si23[1][1]*T123[4][5] + Si23[1][2]*T123[5][5]);

T23[5][1]=S32[1][1]*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][1] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][1] + T123[6][1]) + S32[2][1]*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][2] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][2] + T123[6][2]) - WAISTLINK1*S32[1][3]*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][4] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][4] + T123[6][4]) - WAISTLINK1*S32[2][3]*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][5] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][5] + T123[6][5]) - LEGLINK1*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][6] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][6] + T123[6][6]);
T23[5][2]=(LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][3] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][3] + T123[6][3] + (LEGLINK1*S32[1][1] + WAISTLINK2*S32[1][3])*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][4] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][4] + T123[6][4]) + (LEGLINK1*S32[2][1] + WAISTLINK2*S32[2][3])*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][5] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][5] + T123[6][5]);
T23[5][3]=S32[1][3]*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][1] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][1] + T123[6][1]) + S32[2][3]*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][2] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][2] + T123[6][2]) + WAISTLINK1*S32[1][1]*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][4] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][4] + T123[6][4]) + WAISTLINK1*S32[2][1]*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][5] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][5] + T123[6][5]) - WAISTLINK2*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][6] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][6] + T123[6][6]);
T23[5][4]=S32[1][1]*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][4] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][4] + T123[6][4]) + S32[2][1]*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][5] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][5] + T123[6][5]);
T23[5][5]=(LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][6] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][6] + T123[6][6];
T23[5][6]=S32[1][3]*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][4] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][4] + T123[6][4]) + S32[2][3]*((LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1])*T123[1][5] + (LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2])*T123[2][5] + T123[6][5]);

T23[6][1]=S32[1][1]*(WAISTLINK1*Si23[1][1]*T123[1][1] + WAISTLINK1*Si23[1][2]*T123[2][1] - WAISTLINK2*T123[3][1] + Si23[3][1]*T123[4][1] + Si23[3][2]*T123[5][1]) + S32[2][1]*(WAISTLINK1*Si23[1][1]*T123[1][2] + WAISTLINK1*Si23[1][2]*T123[2][2] - WAISTLINK2*T123[3][2] + Si23[3][1]*T123[4][2] + Si23[3][2]*T123[5][2]) - WAISTLINK1*S32[1][3]*(WAISTLINK1*Si23[1][1]*T123[1][4] + WAISTLINK1*Si23[1][2]*T123[2][4] - WAISTLINK2*T123[3][4] + Si23[3][1]*T123[4][4] + Si23[3][2]*T123[5][4]) - WAISTLINK1*S32[2][3]*(WAISTLINK1*Si23[1][1]*T123[1][5] + WAISTLINK1*Si23[1][2]*T123[2][5] - WAISTLINK2*T123[3][5] + Si23[3][1]*T123[4][5] + Si23[3][2]*T123[5][5]) - LEGLINK1*(WAISTLINK1*Si23[1][1]*T123[1][6] + WAISTLINK1*Si23[1][2]*T123[2][6] - WAISTLINK2*T123[3][6] + Si23[3][1]*T123[4][6] + Si23[3][2]*T123[5][6]);
T23[6][2]=WAISTLINK1*Si23[1][1]*T123[1][3] + WAISTLINK1*Si23[1][2]*T123[2][3] - WAISTLINK2*T123[3][3] + Si23[3][1]*T123[4][3] + Si23[3][2]*T123[5][3] + (LEGLINK1*S32[1][1] + WAISTLINK2*S32[1][3])*(WAISTLINK1*Si23[1][1]*T123[1][4] + WAISTLINK1*Si23[1][2]*T123[2][4] - WAISTLINK2*T123[3][4] + Si23[3][1]*T123[4][4] + Si23[3][2]*T123[5][4]) + (LEGLINK1*S32[2][1] + WAISTLINK2*S32[2][3])*(WAISTLINK1*Si23[1][1]*T123[1][5] + WAISTLINK1*Si23[1][2]*T123[2][5] - WAISTLINK2*T123[3][5] + Si23[3][1]*T123[4][5] + Si23[3][2]*T123[5][5]);
T23[6][3]=S32[1][3]*(WAISTLINK1*Si23[1][1]*T123[1][1] + WAISTLINK1*Si23[1][2]*T123[2][1] - WAISTLINK2*T123[3][1] + Si23[3][1]*T123[4][1] + Si23[3][2]*T123[5][1]) + S32[2][3]*(WAISTLINK1*Si23[1][1]*T123[1][2] + WAISTLINK1*Si23[1][2]*T123[2][2] - WAISTLINK2*T123[3][2] + Si23[3][1]*T123[4][2] + Si23[3][2]*T123[5][2]) + WAISTLINK1*S32[1][1]*(WAISTLINK1*Si23[1][1]*T123[1][4] + WAISTLINK1*Si23[1][2]*T123[2][4] - WAISTLINK2*T123[3][4] + Si23[3][1]*T123[4][4] + Si23[3][2]*T123[5][4]) + WAISTLINK1*S32[2][1]*(WAISTLINK1*Si23[1][1]*T123[1][5] + WAISTLINK1*Si23[1][2]*T123[2][5] - WAISTLINK2*T123[3][5] + Si23[3][1]*T123[4][5] + Si23[3][2]*T123[5][5]) - WAISTLINK2*(WAISTLINK1*Si23[1][1]*T123[1][6] + WAISTLINK1*Si23[1][2]*T123[2][6] - WAISTLINK2*T123[3][6] + Si23[3][1]*T123[4][6] + Si23[3][2]*T123[5][6]);
T23[6][4]=S32[1][1]*(WAISTLINK1*Si23[1][1]*T123[1][4] + WAISTLINK1*Si23[1][2]*T123[2][4] - WAISTLINK2*T123[3][4] + Si23[3][1]*T123[4][4] + Si23[3][2]*T123[5][4]) + S32[2][1]*(WAISTLINK1*Si23[1][1]*T123[1][5] + WAISTLINK1*Si23[1][2]*T123[2][5] - WAISTLINK2*T123[3][5] + Si23[3][1]*T123[4][5] + Si23[3][2]*T123[5][5]);
T23[6][5]=WAISTLINK1*Si23[1][1]*T123[1][6] + WAISTLINK1*Si23[1][2]*T123[2][6] - WAISTLINK2*T123[3][6] + Si23[3][1]*T123[4][6] + Si23[3][2]*T123[5][6];
T23[6][6]=S32[1][3]*(WAISTLINK1*Si23[1][1]*T123[1][4] + WAISTLINK1*Si23[1][2]*T123[2][4] - WAISTLINK2*T123[3][4] + Si23[3][1]*T123[4][4] + Si23[3][2]*T123[5][4]) + S32[2][3]*(WAISTLINK1*Si23[1][1]*T123[1][5] + WAISTLINK1*Si23[1][2]*T123[2][5] - WAISTLINK2*T123[3][5] + Si23[3][1]*T123[4][5] + Si23[3][2]*T123[5][5]);



}


void
hoap3_InvDynArtfunc29(void)
      {
JA2[1][1]=T214[1][1] + T23[1][1];
JA2[1][2]=links[13].mcm[3] + T214[1][2] + T23[1][2];
JA2[1][3]=-links[13].mcm[2] + T214[1][3] + T23[1][3];
JA2[1][4]=links[13].m + T214[1][4] + T23[1][4];
JA2[1][5]=T214[1][5] + T23[1][5];
JA2[1][6]=T214[1][6] + T23[1][6];

JA2[2][1]=-links[13].mcm[3] + T214[2][1] + T23[2][1];
JA2[2][2]=T214[2][2] + T23[2][2];
JA2[2][3]=links[13].mcm[1] + T214[2][3] + T23[2][3];
JA2[2][4]=T214[2][4] + T23[2][4];
JA2[2][5]=links[13].m + T214[2][5] + T23[2][5];
JA2[2][6]=T214[2][6] + T23[2][6];

JA2[3][1]=links[13].mcm[2] + T214[3][1] + T23[3][1];
JA2[3][2]=-links[13].mcm[1] + T214[3][2] + T23[3][2];
JA2[3][3]=T214[3][3] + T23[3][3];
JA2[3][4]=T214[3][4] + T23[3][4];
JA2[3][5]=T214[3][5] + T23[3][5];
JA2[3][6]=links[13].m + T214[3][6] + T23[3][6];

JA2[4][1]=links[13].inertia[1][1] + T214[4][1] + T23[4][1];
JA2[4][2]=links[13].inertia[1][2] + T214[4][2] + T23[4][2];
JA2[4][3]=links[13].inertia[1][3] + T214[4][3] + T23[4][3];
JA2[4][4]=T214[4][4] + T23[4][4];
JA2[4][5]=-links[13].mcm[3] + T214[4][5] + T23[4][5];
JA2[4][6]=links[13].mcm[2] + T214[4][6] + T23[4][6];

JA2[5][1]=links[13].inertia[1][2] + T214[5][1] + T23[5][1];
JA2[5][2]=links[13].inertia[2][2] + T214[5][2] + T23[5][2];
JA2[5][3]=links[13].inertia[2][3] + T214[5][3] + T23[5][3];
JA2[5][4]=links[13].mcm[3] + T214[5][4] + T23[5][4];
JA2[5][5]=T214[5][5] + T23[5][5];
JA2[5][6]=-links[13].mcm[1] + T214[5][6] + T23[5][6];

JA2[6][1]=links[13].inertia[1][3] + T214[6][1] + T23[6][1];
JA2[6][2]=links[13].inertia[2][3] + T214[6][2] + T23[6][2];
JA2[6][3]=links[13].inertia[3][3] + T214[6][3] + T23[6][3];
JA2[6][4]=-links[13].mcm[2] + T214[6][4] + T23[6][4];
JA2[6][5]=links[13].mcm[1] + T214[6][5] + T23[6][5];
JA2[6][6]=T214[6][6] + T23[6][6];


h2[1]=JA2[1][3];
h2[2]=JA2[2][3];
h2[3]=JA2[3][3];
h2[4]=JA2[4][3];
h2[5]=JA2[5][3];
h2[6]=JA2[6][3];

T102[1][1]=JA2[1][1];
T102[1][2]=JA2[1][2];
T102[1][3]=JA2[1][3];
T102[1][4]=JA2[1][4];
T102[1][5]=JA2[1][5];
T102[1][6]=JA2[1][6];

T102[2][1]=JA2[2][1];
T102[2][2]=JA2[2][2];
T102[2][3]=JA2[2][3];
T102[2][4]=JA2[2][4];
T102[2][5]=JA2[2][5];
T102[2][6]=JA2[2][6];

T102[3][1]=JA2[3][1];
T102[3][2]=JA2[3][2];
T102[3][3]=JA2[3][3];
T102[3][4]=JA2[3][4];
T102[3][5]=JA2[3][5];
T102[3][6]=JA2[3][6];

T102[4][1]=JA2[4][1];
T102[4][2]=JA2[4][2];
T102[4][3]=JA2[4][3];
T102[4][4]=JA2[4][4];
T102[4][5]=JA2[4][5];
T102[4][6]=JA2[4][6];

T102[5][1]=JA2[5][1];
T102[5][2]=JA2[5][2];
T102[5][3]=JA2[5][3];
T102[5][4]=JA2[5][4];
T102[5][5]=JA2[5][5];
T102[5][6]=JA2[5][6];

T102[6][1]=JA2[6][1];
T102[6][2]=JA2[6][2];
T102[6][3]=JA2[6][3];
T102[6][4]=JA2[6][4];
T102[6][5]=JA2[6][5];
T102[6][6]=JA2[6][6];


T02[1][1]=S20[1][1]*(Si02[1][1]*T102[1][1] + Si02[1][2]*T102[2][1]) + S20[2][1]*(Si02[1][1]*T102[1][2] + Si02[1][2]*T102[2][2]);
T02[1][2]=-(Si02[1][1]*T102[1][3]) - Si02[1][2]*T102[2][3] - BODYLINK2*S20[1][3]*(Si02[1][1]*T102[1][4] + Si02[1][2]*T102[2][4]) - BODYLINK2*S20[2][3]*(Si02[1][1]*T102[1][5] + Si02[1][2]*T102[2][5]);
T02[1][3]=S20[1][3]*(Si02[1][1]*T102[1][1] + Si02[1][2]*T102[2][1]) + S20[2][3]*(Si02[1][1]*T102[1][2] + Si02[1][2]*T102[2][2]) - BODYLINK2*(Si02[1][1]*T102[1][6] + Si02[1][2]*T102[2][6]);
T02[1][4]=S20[1][1]*(Si02[1][1]*T102[1][4] + Si02[1][2]*T102[2][4]) + S20[2][1]*(Si02[1][1]*T102[1][5] + Si02[1][2]*T102[2][5]);
T02[1][5]=-(Si02[1][1]*T102[1][6]) - Si02[1][2]*T102[2][6];
T02[1][6]=S20[1][3]*(Si02[1][1]*T102[1][4] + Si02[1][2]*T102[2][4]) + S20[2][3]*(Si02[1][1]*T102[1][5] + Si02[1][2]*T102[2][5]);

T02[2][1]=-(S20[1][1]*T102[3][1]) - S20[2][1]*T102[3][2];
T02[2][2]=T102[3][3] + BODYLINK2*S20[1][3]*T102[3][4] + BODYLINK2*S20[2][3]*T102[3][5];
T02[2][3]=-(S20[1][3]*T102[3][1]) - S20[2][3]*T102[3][2] + BODYLINK2*T102[3][6];
T02[2][4]=-(S20[1][1]*T102[3][4]) - S20[2][1]*T102[3][5];
T02[2][5]=T102[3][6];
T02[2][6]=-(S20[1][3]*T102[3][4]) - S20[2][3]*T102[3][5];

T02[3][1]=S20[1][1]*(Si02[3][1]*T102[1][1] + Si02[3][2]*T102[2][1]) + S20[2][1]*(Si02[3][1]*T102[1][2] + Si02[3][2]*T102[2][2]);
T02[3][2]=-(Si02[3][1]*T102[1][3]) - Si02[3][2]*T102[2][3] - BODYLINK2*S20[1][3]*(Si02[3][1]*T102[1][4] + Si02[3][2]*T102[2][4]) - BODYLINK2*S20[2][3]*(Si02[3][1]*T102[1][5] + Si02[3][2]*T102[2][5]);
T02[3][3]=S20[1][3]*(Si02[3][1]*T102[1][1] + Si02[3][2]*T102[2][1]) + S20[2][3]*(Si02[3][1]*T102[1][2] + Si02[3][2]*T102[2][2]) - BODYLINK2*(Si02[3][1]*T102[1][6] + Si02[3][2]*T102[2][6]);
T02[3][4]=S20[1][1]*(Si02[3][1]*T102[1][4] + Si02[3][2]*T102[2][4]) + S20[2][1]*(Si02[3][1]*T102[1][5] + Si02[3][2]*T102[2][5]);
T02[3][5]=-(Si02[3][1]*T102[1][6]) - Si02[3][2]*T102[2][6];
T02[3][6]=S20[1][3]*(Si02[3][1]*T102[1][4] + Si02[3][2]*T102[2][4]) + S20[2][3]*(Si02[3][1]*T102[1][5] + Si02[3][2]*T102[2][5]);

T02[4][1]=S20[1][1]*(Si02[1][1]*T102[4][1] + Si02[1][2]*T102[5][1]) + S20[2][1]*(Si02[1][1]*T102[4][2] + Si02[1][2]*T102[5][2]);
T02[4][2]=-(Si02[1][1]*T102[4][3]) - Si02[1][2]*T102[5][3] - BODYLINK2*S20[1][3]*(Si02[1][1]*T102[4][4] + Si02[1][2]*T102[5][4]) - BODYLINK2*S20[2][3]*(Si02[1][1]*T102[4][5] + Si02[1][2]*T102[5][5]);
T02[4][3]=S20[1][3]*(Si02[1][1]*T102[4][1] + Si02[1][2]*T102[5][1]) + S20[2][3]*(Si02[1][1]*T102[4][2] + Si02[1][2]*T102[5][2]) - BODYLINK2*(Si02[1][1]*T102[4][6] + Si02[1][2]*T102[5][6]);
T02[4][4]=S20[1][1]*(Si02[1][1]*T102[4][4] + Si02[1][2]*T102[5][4]) + S20[2][1]*(Si02[1][1]*T102[4][5] + Si02[1][2]*T102[5][5]);
T02[4][5]=-(Si02[1][1]*T102[4][6]) - Si02[1][2]*T102[5][6];
T02[4][6]=S20[1][3]*(Si02[1][1]*T102[4][4] + Si02[1][2]*T102[5][4]) + S20[2][3]*(Si02[1][1]*T102[4][5] + Si02[1][2]*T102[5][5]);

T02[5][1]=S20[1][1]*(-(BODYLINK2*Si02[3][1]*T102[1][1]) - BODYLINK2*Si02[3][2]*T102[2][1] - T102[6][1]) + S20[2][1]*(-(BODYLINK2*Si02[3][1]*T102[1][2]) - BODYLINK2*Si02[3][2]*T102[2][2] - T102[6][2]);
T02[5][2]=BODYLINK2*Si02[3][1]*T102[1][3] + BODYLINK2*Si02[3][2]*T102[2][3] + T102[6][3] - BODYLINK2*S20[1][3]*(-(BODYLINK2*Si02[3][1]*T102[1][4]) - BODYLINK2*Si02[3][2]*T102[2][4] - T102[6][4]) - BODYLINK2*S20[2][3]*(-(BODYLINK2*Si02[3][1]*T102[1][5]) - BODYLINK2*Si02[3][2]*T102[2][5] - T102[6][5]);
T02[5][3]=S20[1][3]*(-(BODYLINK2*Si02[3][1]*T102[1][1]) - BODYLINK2*Si02[3][2]*T102[2][1] - T102[6][1]) + S20[2][3]*(-(BODYLINK2*Si02[3][1]*T102[1][2]) - BODYLINK2*Si02[3][2]*T102[2][2] - T102[6][2]) - BODYLINK2*(-(BODYLINK2*Si02[3][1]*T102[1][6]) - BODYLINK2*Si02[3][2]*T102[2][6] - T102[6][6]);
T02[5][4]=S20[1][1]*(-(BODYLINK2*Si02[3][1]*T102[1][4]) - BODYLINK2*Si02[3][2]*T102[2][4] - T102[6][4]) + S20[2][1]*(-(BODYLINK2*Si02[3][1]*T102[1][5]) - BODYLINK2*Si02[3][2]*T102[2][5] - T102[6][5]);
T02[5][5]=BODYLINK2*Si02[3][1]*T102[1][6] + BODYLINK2*Si02[3][2]*T102[2][6] + T102[6][6];
T02[5][6]=S20[1][3]*(-(BODYLINK2*Si02[3][1]*T102[1][4]) - BODYLINK2*Si02[3][2]*T102[2][4] - T102[6][4]) + S20[2][3]*(-(BODYLINK2*Si02[3][1]*T102[1][5]) - BODYLINK2*Si02[3][2]*T102[2][5] - T102[6][5]);

T02[6][1]=S20[1][1]*(-(BODYLINK2*T102[3][1]) + Si02[3][1]*T102[4][1] + Si02[3][2]*T102[5][1]) + S20[2][1]*(-(BODYLINK2*T102[3][2]) + Si02[3][1]*T102[4][2] + Si02[3][2]*T102[5][2]);
T02[6][2]=BODYLINK2*T102[3][3] - Si02[3][1]*T102[4][3] - Si02[3][2]*T102[5][3] - BODYLINK2*S20[1][3]*(-(BODYLINK2*T102[3][4]) + Si02[3][1]*T102[4][4] + Si02[3][2]*T102[5][4]) - BODYLINK2*S20[2][3]*(-(BODYLINK2*T102[3][5]) + Si02[3][1]*T102[4][5] + Si02[3][2]*T102[5][5]);
T02[6][3]=S20[1][3]*(-(BODYLINK2*T102[3][1]) + Si02[3][1]*T102[4][1] + Si02[3][2]*T102[5][1]) + S20[2][3]*(-(BODYLINK2*T102[3][2]) + Si02[3][1]*T102[4][2] + Si02[3][2]*T102[5][2]) - BODYLINK2*(-(BODYLINK2*T102[3][6]) + Si02[3][1]*T102[4][6] + Si02[3][2]*T102[5][6]);
T02[6][4]=S20[1][1]*(-(BODYLINK2*T102[3][4]) + Si02[3][1]*T102[4][4] + Si02[3][2]*T102[5][4]) + S20[2][1]*(-(BODYLINK2*T102[3][5]) + Si02[3][1]*T102[4][5] + Si02[3][2]*T102[5][5]);
T02[6][5]=BODYLINK2*T102[3][6] - Si02[3][1]*T102[4][6] - Si02[3][2]*T102[5][6];
T02[6][6]=S20[1][3]*(-(BODYLINK2*T102[3][4]) + Si02[3][1]*T102[4][4] + Si02[3][2]*T102[5][4]) + S20[2][3]*(-(BODYLINK2*T102[3][5]) + Si02[3][1]*T102[4][5] + Si02[3][2]*T102[5][5]);



}


void
hoap3_InvDynArtfunc30(void)
      {




}


void
hoap3_InvDynArtfunc31(void)
      {
JA0[1][1]=0. + T02[1][1];
JA0[1][2]=0. + links[0].mcm[3] + T02[1][2];
JA0[1][3]=0. - links[0].mcm[2] + T02[1][3];
JA0[1][4]=0. + links[0].m + T02[1][4];
JA0[1][5]=0. + T02[1][5];
JA0[1][6]=0. + T02[1][6];

JA0[2][1]=0. - links[0].mcm[3] + T02[2][1];
JA0[2][2]=0. + T02[2][2];
JA0[2][3]=0. + links[0].mcm[1] + T02[2][3];
JA0[2][4]=0. + T02[2][4];
JA0[2][5]=0. + links[0].m + T02[2][5];
JA0[2][6]=0. + T02[2][6];

JA0[3][1]=0. + links[0].mcm[2] + T02[3][1];
JA0[3][2]=0. - links[0].mcm[1] + T02[3][2];
JA0[3][3]=0. + T02[3][3];
JA0[3][4]=0. + T02[3][4];
JA0[3][5]=0. + T02[3][5];
JA0[3][6]=0. + links[0].m + T02[3][6];

JA0[4][1]=0. + links[0].inertia[1][1] + T02[4][1];
JA0[4][2]=0. + links[0].inertia[1][2] + T02[4][2];
JA0[4][3]=0. + links[0].inertia[1][3] + T02[4][3];
JA0[4][4]=0. + T02[4][4];
JA0[4][5]=0. - links[0].mcm[3] + T02[4][5];
JA0[4][6]=0. + links[0].mcm[2] + T02[4][6];

JA0[5][1]=0. + links[0].inertia[1][2] + T02[5][1];
JA0[5][2]=0. + links[0].inertia[2][2] + T02[5][2];
JA0[5][3]=0. + links[0].inertia[2][3] + T02[5][3];
JA0[5][4]=0. + links[0].mcm[3] + T02[5][4];
JA0[5][5]=0. + T02[5][5];
JA0[5][6]=0. - links[0].mcm[1] + T02[5][6];

JA0[6][1]=0. + links[0].inertia[1][3] + T02[6][1];
JA0[6][2]=0. + links[0].inertia[2][3] + T02[6][2];
JA0[6][3]=0. + links[0].inertia[3][3] + T02[6][3];
JA0[6][4]=0. - links[0].mcm[2] + T02[6][4];
JA0[6][5]=0. + links[0].mcm[1] + T02[6][5];
JA0[6][6]=0. + T02[6][6];



}


void
hoap3_InvDynArtfunc32(void)
      {
/* bias forces */
p24[1]=pv24[1];
p24[2]=pv24[2];
p24[3]=pv24[3];
p24[4]=pv24[4];
p24[5]=pv24[5];
p24[6]=pv24[6];

pmm24[1]=p24[1];
pmm24[2]=p24[2];
pmm24[3]=p24[3];
pmm24[4]=p24[4];
pmm24[5]=p24[5];
pmm24[6]=p24[6];

pm24[1]=pmm24[1]*Si1924[1][1] + pmm24[2]*Si1924[1][2] + pmm24[3]*Si1924[1][3];
pm24[2]=pmm24[1]*Si1924[2][1] + pmm24[2]*Si1924[2][2] + pmm24[3]*Si1924[2][3];
pm24[3]=pmm24[1]*Si1924[3][1] + pmm24[2]*Si1924[3][2] + pmm24[3]*Si1924[3][3];
pm24[4]=pmm24[4]*Si1924[1][1] + pmm24[5]*Si1924[1][2] + pmm24[6]*Si1924[1][3] + pmm24[1]*(-(eff[2].x[3]*Si1924[2][1]) + eff[2].x[2]*Si1924[3][1]) + pmm24[2]*(-(eff[2].x[3]*Si1924[2][2]) + eff[2].x[2]*Si1924[3][2]) + pmm24[3]*(-(eff[2].x[3]*Si1924[2][3]) + eff[2].x[2]*Si1924[3][3]);
pm24[5]=pmm24[4]*Si1924[2][1] + pmm24[5]*Si1924[2][2] + pmm24[6]*Si1924[2][3] + pmm24[1]*(eff[2].x[3]*Si1924[1][1] - eff[2].x[1]*Si1924[3][1]) + pmm24[2]*(eff[2].x[3]*Si1924[1][2] - eff[2].x[1]*Si1924[3][2]) + pmm24[3]*(eff[2].x[3]*Si1924[1][3] - eff[2].x[1]*Si1924[3][3]);
pm24[6]=pmm24[1]*(-(eff[2].x[2]*Si1924[1][1]) + eff[2].x[1]*Si1924[2][1]) + pmm24[2]*(-(eff[2].x[2]*Si1924[1][2]) + eff[2].x[1]*Si1924[2][2]) + pmm24[3]*(-(eff[2].x[2]*Si1924[1][3]) + eff[2].x[1]*Si1924[2][3]) + pmm24[4]*Si1924[3][1] + pmm24[5]*Si1924[3][2] + pmm24[6]*Si1924[3][3];

p19[1]=0. + pm24[1] + pv19[1];
p19[2]=0. + pm24[2] + pv19[2];
p19[3]=0. + pm24[3] + pv19[3];
p19[4]=0. + pm24[4] + pv19[4];
p19[5]=0. + pm24[5] + pv19[5];
p19[6]=0. + pm24[6] + pv19[6];

pmm19[1]=state[12].thdd*h19[1] + p19[1] + c19[1]*JA19[1][1] + c19[2]*JA19[1][2] + c19[4]*JA19[1][4] + c19[5]*JA19[1][5];
pmm19[2]=state[12].thdd*h19[2] + p19[2] + c19[1]*JA19[2][1] + c19[2]*JA19[2][2] + c19[4]*JA19[2][4] + c19[5]*JA19[2][5];
pmm19[3]=state[12].thdd*h19[3] + p19[3] + c19[1]*JA19[3][1] + c19[2]*JA19[3][2] + c19[4]*JA19[3][4] + c19[5]*JA19[3][5];
pmm19[4]=state[12].thdd*h19[4] + p19[4] + c19[1]*JA19[4][1] + c19[2]*JA19[4][2] + c19[4]*JA19[4][4] + c19[5]*JA19[4][5];
pmm19[5]=state[12].thdd*h19[5] + p19[5] + c19[1]*JA19[5][1] + c19[2]*JA19[5][2] + c19[4]*JA19[5][4] + c19[5]*JA19[5][5];
pmm19[6]=state[12].thdd*h19[6] + p19[6] + c19[1]*JA19[6][1] + c19[2]*JA19[6][2] + c19[4]*JA19[6][4] + c19[5]*JA19[6][5];

pm19[1]=pmm19[1]*Si1819[1][1] + pmm19[2]*Si1819[1][2];
pm19[2]=pmm19[3];
pm19[3]=pmm19[1]*Si1819[3][1] + pmm19[2]*Si1819[3][2];
pm19[4]=pmm19[4]*Si1819[1][1] + pmm19[5]*Si1819[1][2];
pm19[5]=pmm19[6];
pm19[6]=pmm19[4]*Si1819[3][1] + pmm19[5]*Si1819[3][2];

p18[1]=pm19[1] + pv18[1];
p18[2]=pm19[2] + pv18[2];
p18[3]=pm19[3] + pv18[3];
p18[4]=pm19[4] + pv18[4];
p18[5]=pm19[5] + pv18[5];
p18[6]=pm19[6] + pv18[6];

pmm18[1]=state[11].thdd*h18[1] + p18[1] + c18[1]*JA18[1][1] + c18[2]*JA18[1][2] + c18[4]*JA18[1][4] + c18[5]*JA18[1][5];
pmm18[2]=state[11].thdd*h18[2] + p18[2] + c18[1]*JA18[2][1] + c18[2]*JA18[2][2] + c18[4]*JA18[2][4] + c18[5]*JA18[2][5];
pmm18[3]=state[11].thdd*h18[3] + p18[3] + c18[1]*JA18[3][1] + c18[2]*JA18[3][2] + c18[4]*JA18[3][4] + c18[5]*JA18[3][5];
pmm18[4]=state[11].thdd*h18[4] + p18[4] + c18[1]*JA18[4][1] + c18[2]*JA18[4][2] + c18[4]*JA18[4][4] + c18[5]*JA18[4][5];
pmm18[5]=state[11].thdd*h18[5] + p18[5] + c18[1]*JA18[5][1] + c18[2]*JA18[5][2] + c18[4]*JA18[5][4] + c18[5]*JA18[5][5];
pmm18[6]=state[11].thdd*h18[6] + p18[6] + c18[1]*JA18[6][1] + c18[2]*JA18[6][2] + c18[4]*JA18[6][4] + c18[5]*JA18[6][5];

pm18[1]=pmm18[1]*Si1718[1][1] + pmm18[2]*Si1718[1][2];
pm18[2]=pmm18[1]*Si1718[2][1] + pmm18[2]*Si1718[2][2];
pm18[3]=pmm18[3];
pm18[4]=pmm18[4]*Si1718[1][1] + pmm18[5]*Si1718[1][2];
pm18[5]=LEGLINK3*pmm18[3] + pmm18[4]*Si1718[2][1] + pmm18[5]*Si1718[2][2];
pm18[6]=pmm18[6] - LEGLINK3*pmm18[1]*Si1718[2][1] - LEGLINK3*pmm18[2]*Si1718[2][2];

p17[1]=pm18[1] + pv17[1];
p17[2]=pm18[2] + pv17[2];
p17[3]=pm18[3] + pv17[3];
p17[4]=pm18[4] + pv17[4];
p17[5]=pm18[5] + pv17[5];
p17[6]=pm18[6] + pv17[6];

pmm17[1]=state[10].thdd*h17[1] + p17[1] + c17[1]*JA17[1][1] + c17[2]*JA17[1][2] + c17[4]*JA17[1][4] + c17[5]*JA17[1][5];
pmm17[2]=state[10].thdd*h17[2] + p17[2] + c17[1]*JA17[2][1] + c17[2]*JA17[2][2] + c17[4]*JA17[2][4] + c17[5]*JA17[2][5];
pmm17[3]=state[10].thdd*h17[3] + p17[3] + c17[1]*JA17[3][1] + c17[2]*JA17[3][2] + c17[4]*JA17[3][4] + c17[5]*JA17[3][5];
pmm17[4]=state[10].thdd*h17[4] + p17[4] + c17[1]*JA17[4][1] + c17[2]*JA17[4][2] + c17[4]*JA17[4][4] + c17[5]*JA17[4][5];
pmm17[5]=state[10].thdd*h17[5] + p17[5] + c17[1]*JA17[5][1] + c17[2]*JA17[5][2] + c17[4]*JA17[5][4] + c17[5]*JA17[5][5];
pmm17[6]=state[10].thdd*h17[6] + p17[6] + c17[1]*JA17[6][1] + c17[2]*JA17[6][2] + c17[4]*JA17[6][4] + c17[5]*JA17[6][5];

pm17[1]=pmm17[1]*Si1617[1][1] + pmm17[2]*Si1617[1][2];
pm17[2]=pmm17[1]*Si1617[2][1] + pmm17[2]*Si1617[2][2];
pm17[3]=pmm17[3];
pm17[4]=pmm17[4]*Si1617[1][1] + pmm17[5]*Si1617[1][2];
pm17[5]=LEGLINK2*pmm17[3] + pmm17[4]*Si1617[2][1] + pmm17[5]*Si1617[2][2];
pm17[6]=pmm17[6] - LEGLINK2*pmm17[1]*Si1617[2][1] - LEGLINK2*pmm17[2]*Si1617[2][2];

p16[1]=pm17[1] + pv16[1];
p16[2]=pm17[2] + pv16[2];
p16[3]=pm17[3] + pv16[3];
p16[4]=pm17[4] + pv16[4];
p16[5]=pm17[5] + pv16[5];
p16[6]=pm17[6] + pv16[6];

pmm16[1]=state[9].thdd*h16[1] + p16[1] + c16[1]*JA16[1][1] + c16[2]*JA16[1][2] + c16[4]*JA16[1][4] + c16[5]*JA16[1][5];
pmm16[2]=state[9].thdd*h16[2] + p16[2] + c16[1]*JA16[2][1] + c16[2]*JA16[2][2] + c16[4]*JA16[2][4] + c16[5]*JA16[2][5];
pmm16[3]=state[9].thdd*h16[3] + p16[3] + c16[1]*JA16[3][1] + c16[2]*JA16[3][2] + c16[4]*JA16[3][4] + c16[5]*JA16[3][5];
pmm16[4]=state[9].thdd*h16[4] + p16[4] + c16[1]*JA16[4][1] + c16[2]*JA16[4][2] + c16[4]*JA16[4][4] + c16[5]*JA16[4][5];
pmm16[5]=state[9].thdd*h16[5] + p16[5] + c16[1]*JA16[5][1] + c16[2]*JA16[5][2] + c16[4]*JA16[5][4] + c16[5]*JA16[5][5];
pmm16[6]=state[9].thdd*h16[6] + p16[6] + c16[1]*JA16[6][1] + c16[2]*JA16[6][2] + c16[4]*JA16[6][4] + c16[5]*JA16[6][5];

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

pmm15[1]=state[8].thdd*h15[1] + p15[1] + c15[1]*JA15[1][1] + c15[2]*JA15[1][2] + c15[4]*JA15[1][4] + c15[5]*JA15[1][5];
pmm15[2]=state[8].thdd*h15[2] + p15[2] + c15[1]*JA15[2][1] + c15[2]*JA15[2][2] + c15[4]*JA15[2][4] + c15[5]*JA15[2][5];
pmm15[3]=state[8].thdd*h15[3] + p15[3] + c15[1]*JA15[3][1] + c15[2]*JA15[3][2] + c15[4]*JA15[3][4] + c15[5]*JA15[3][5];
pmm15[4]=state[8].thdd*h15[4] + p15[4] + c15[1]*JA15[4][1] + c15[2]*JA15[4][2] + c15[4]*JA15[4][4] + c15[5]*JA15[4][5];
pmm15[5]=state[8].thdd*h15[5] + p15[5] + c15[1]*JA15[5][1] + c15[2]*JA15[5][2] + c15[4]*JA15[5][4] + c15[5]*JA15[5][5];
pmm15[6]=state[8].thdd*h15[6] + p15[6] + c15[1]*JA15[6][1] + c15[2]*JA15[6][2] + c15[4]*JA15[6][4] + c15[5]*JA15[6][5];

pm15[1]=pmm15[1]*Si1415[1][1] + pmm15[2]*Si1415[1][2];
pm15[2]=-pmm15[3];
pm15[3]=pmm15[1]*Si1415[3][1] + pmm15[2]*Si1415[3][2];
pm15[4]=pmm15[4]*Si1415[1][1] + pmm15[5]*Si1415[1][2];
pm15[5]=-pmm15[6];
pm15[6]=pmm15[4]*Si1415[3][1] + pmm15[5]*Si1415[3][2];

p14[1]=pm15[1] + pv14[1];
p14[2]=pm15[2] + pv14[2];
p14[3]=pm15[3] + pv14[3];
p14[4]=pm15[4] + pv14[4];
p14[5]=pm15[5] + pv14[5];
p14[6]=pm15[6] + pv14[6];

pmm14[1]=state[7].thdd*h14[1] + p14[1] + c14[1]*JA14[1][1] + c14[2]*JA14[1][2] + c14[4]*JA14[1][4] + c14[5]*JA14[1][5];
pmm14[2]=state[7].thdd*h14[2] + p14[2] + c14[1]*JA14[2][1] + c14[2]*JA14[2][2] + c14[4]*JA14[2][4] + c14[5]*JA14[2][5];
pmm14[3]=state[7].thdd*h14[3] + p14[3] + c14[1]*JA14[3][1] + c14[2]*JA14[3][2] + c14[4]*JA14[3][4] + c14[5]*JA14[3][5];
pmm14[4]=state[7].thdd*h14[4] + p14[4] + c14[1]*JA14[4][1] + c14[2]*JA14[4][2] + c14[4]*JA14[4][4] + c14[5]*JA14[4][5];
pmm14[5]=state[7].thdd*h14[5] + p14[5] + c14[1]*JA14[5][1] + c14[2]*JA14[5][2] + c14[4]*JA14[5][4] + c14[5]*JA14[5][5];
pmm14[6]=state[7].thdd*h14[6] + p14[6] + c14[1]*JA14[6][1] + c14[2]*JA14[6][2] + c14[4]*JA14[6][4] + c14[5]*JA14[6][5];

pm14[1]=pmm14[1]*Si214[1][1] + pmm14[2]*Si214[1][2];
pm14[2]=pmm14[3];
pm14[3]=pmm14[1]*Si214[3][1] + pmm14[2]*Si214[3][2];
pm14[4]=LEGLINK1*pmm14[3] + pmm14[4]*Si214[1][1] + pmm14[5]*Si214[1][2] - WAISTLINK1*pmm14[1]*Si214[3][1] - WAISTLINK1*pmm14[2]*Si214[3][2];
pm14[5]=pmm14[6] + pmm14[1]*(-(LEGLINK1*Si214[1][1]) + WAISTLINK2*Si214[3][1]) + pmm14[2]*(-(LEGLINK1*Si214[1][2]) + WAISTLINK2*Si214[3][2]);
pm14[6]=-(WAISTLINK2*pmm14[3]) + WAISTLINK1*pmm14[1]*Si214[1][1] + WAISTLINK1*pmm14[2]*Si214[1][2] + pmm14[4]*Si214[3][1] + pmm14[5]*Si214[3][2];

p13[1]=pv13[1];
p13[2]=pv13[2];
p13[3]=pv13[3];
p13[4]=pv13[4];
p13[5]=pv13[5];
p13[6]=pv13[6];

pmm13[1]=p13[1];
pmm13[2]=p13[2];
pmm13[3]=p13[3];
pmm13[4]=p13[4];
pmm13[5]=p13[5];
pmm13[6]=p13[6];

pm13[1]=pmm13[1]*Si813[1][1] + pmm13[2]*Si813[1][2] + pmm13[3]*Si813[1][3];
pm13[2]=pmm13[1]*Si813[2][1] + pmm13[2]*Si813[2][2] + pmm13[3]*Si813[2][3];
pm13[3]=pmm13[1]*Si813[3][1] + pmm13[2]*Si813[3][2] + pmm13[3]*Si813[3][3];
pm13[4]=pmm13[4]*Si813[1][1] + pmm13[5]*Si813[1][2] + pmm13[6]*Si813[1][3] + pmm13[1]*(-(eff[1].x[3]*Si813[2][1]) + eff[1].x[2]*Si813[3][1]) + pmm13[2]*(-(eff[1].x[3]*Si813[2][2]) + eff[1].x[2]*Si813[3][2]) + pmm13[3]*(-(eff[1].x[3]*Si813[2][3]) + eff[1].x[2]*Si813[3][3]);
pm13[5]=pmm13[4]*Si813[2][1] + pmm13[5]*Si813[2][2] + pmm13[6]*Si813[2][3] + pmm13[1]*(eff[1].x[3]*Si813[1][1] - eff[1].x[1]*Si813[3][1]) + pmm13[2]*(eff[1].x[3]*Si813[1][2] - eff[1].x[1]*Si813[3][2]) + pmm13[3]*(eff[1].x[3]*Si813[1][3] - eff[1].x[1]*Si813[3][3]);
pm13[6]=pmm13[1]*(-(eff[1].x[2]*Si813[1][1]) + eff[1].x[1]*Si813[2][1]) + pmm13[2]*(-(eff[1].x[2]*Si813[1][2]) + eff[1].x[1]*Si813[2][2]) + pmm13[3]*(-(eff[1].x[2]*Si813[1][3]) + eff[1].x[1]*Si813[2][3]) + pmm13[4]*Si813[3][1] + pmm13[5]*Si813[3][2] + pmm13[6]*Si813[3][3];

p8[1]=0. + pm13[1] + pv8[1];
p8[2]=0. + pm13[2] + pv8[2];
p8[3]=0. + pm13[3] + pv8[3];
p8[4]=0. + pm13[4] + pv8[4];
p8[5]=0. + pm13[5] + pv8[5];
p8[6]=0. + pm13[6] + pv8[6];

pmm8[1]=state[6].thdd*h8[1] + p8[1] + c8[1]*JA8[1][1] + c8[2]*JA8[1][2] + c8[4]*JA8[1][4] + c8[5]*JA8[1][5];
pmm8[2]=state[6].thdd*h8[2] + p8[2] + c8[1]*JA8[2][1] + c8[2]*JA8[2][2] + c8[4]*JA8[2][4] + c8[5]*JA8[2][5];
pmm8[3]=state[6].thdd*h8[3] + p8[3] + c8[1]*JA8[3][1] + c8[2]*JA8[3][2] + c8[4]*JA8[3][4] + c8[5]*JA8[3][5];
pmm8[4]=state[6].thdd*h8[4] + p8[4] + c8[1]*JA8[4][1] + c8[2]*JA8[4][2] + c8[4]*JA8[4][4] + c8[5]*JA8[4][5];
pmm8[5]=state[6].thdd*h8[5] + p8[5] + c8[1]*JA8[5][1] + c8[2]*JA8[5][2] + c8[4]*JA8[5][4] + c8[5]*JA8[5][5];
pmm8[6]=state[6].thdd*h8[6] + p8[6] + c8[1]*JA8[6][1] + c8[2]*JA8[6][2] + c8[4]*JA8[6][4] + c8[5]*JA8[6][5];

pm8[1]=pmm8[1]*Si78[1][1] + pmm8[2]*Si78[1][2];
pm8[2]=pmm8[3];
pm8[3]=pmm8[1]*Si78[3][1] + pmm8[2]*Si78[3][2];
pm8[4]=pmm8[4]*Si78[1][1] + pmm8[5]*Si78[1][2];
pm8[5]=pmm8[6];
pm8[6]=pmm8[4]*Si78[3][1] + pmm8[5]*Si78[3][2];

p7[1]=pm8[1] + pv7[1];
p7[2]=pm8[2] + pv7[2];
p7[3]=pm8[3] + pv7[3];
p7[4]=pm8[4] + pv7[4];
p7[5]=pm8[5] + pv7[5];
p7[6]=pm8[6] + pv7[6];

pmm7[1]=state[5].thdd*h7[1] + p7[1] + c7[1]*JA7[1][1] + c7[2]*JA7[1][2] + c7[4]*JA7[1][4] + c7[5]*JA7[1][5];
pmm7[2]=state[5].thdd*h7[2] + p7[2] + c7[1]*JA7[2][1] + c7[2]*JA7[2][2] + c7[4]*JA7[2][4] + c7[5]*JA7[2][5];
pmm7[3]=state[5].thdd*h7[3] + p7[3] + c7[1]*JA7[3][1] + c7[2]*JA7[3][2] + c7[4]*JA7[3][4] + c7[5]*JA7[3][5];
pmm7[4]=state[5].thdd*h7[4] + p7[4] + c7[1]*JA7[4][1] + c7[2]*JA7[4][2] + c7[4]*JA7[4][4] + c7[5]*JA7[4][5];
pmm7[5]=state[5].thdd*h7[5] + p7[5] + c7[1]*JA7[5][1] + c7[2]*JA7[5][2] + c7[4]*JA7[5][4] + c7[5]*JA7[5][5];
pmm7[6]=state[5].thdd*h7[6] + p7[6] + c7[1]*JA7[6][1] + c7[2]*JA7[6][2] + c7[4]*JA7[6][4] + c7[5]*JA7[6][5];

pm7[1]=pmm7[1]*Si67[1][1] + pmm7[2]*Si67[1][2];
pm7[2]=pmm7[1]*Si67[2][1] + pmm7[2]*Si67[2][2];
pm7[3]=pmm7[3];
pm7[4]=pmm7[4]*Si67[1][1] + pmm7[5]*Si67[1][2];
pm7[5]=LEGLINK3*pmm7[3] + pmm7[4]*Si67[2][1] + pmm7[5]*Si67[2][2];
pm7[6]=pmm7[6] - LEGLINK3*pmm7[1]*Si67[2][1] - LEGLINK3*pmm7[2]*Si67[2][2];

p6[1]=pm7[1] + pv6[1];
p6[2]=pm7[2] + pv6[2];
p6[3]=pm7[3] + pv6[3];
p6[4]=pm7[4] + pv6[4];
p6[5]=pm7[5] + pv6[5];
p6[6]=pm7[6] + pv6[6];

pmm6[1]=state[4].thdd*h6[1] + p6[1] + c6[1]*JA6[1][1] + c6[2]*JA6[1][2] + c6[4]*JA6[1][4] + c6[5]*JA6[1][5];
pmm6[2]=state[4].thdd*h6[2] + p6[2] + c6[1]*JA6[2][1] + c6[2]*JA6[2][2] + c6[4]*JA6[2][4] + c6[5]*JA6[2][5];
pmm6[3]=state[4].thdd*h6[3] + p6[3] + c6[1]*JA6[3][1] + c6[2]*JA6[3][2] + c6[4]*JA6[3][4] + c6[5]*JA6[3][5];
pmm6[4]=state[4].thdd*h6[4] + p6[4] + c6[1]*JA6[4][1] + c6[2]*JA6[4][2] + c6[4]*JA6[4][4] + c6[5]*JA6[4][5];
pmm6[5]=state[4].thdd*h6[5] + p6[5] + c6[1]*JA6[5][1] + c6[2]*JA6[5][2] + c6[4]*JA6[5][4] + c6[5]*JA6[5][5];
pmm6[6]=state[4].thdd*h6[6] + p6[6] + c6[1]*JA6[6][1] + c6[2]*JA6[6][2] + c6[4]*JA6[6][4] + c6[5]*JA6[6][5];

pm6[1]=pmm6[1]*Si56[1][1] + pmm6[2]*Si56[1][2];
pm6[2]=pmm6[1]*Si56[2][1] + pmm6[2]*Si56[2][2];
pm6[3]=pmm6[3];
pm6[4]=pmm6[4]*Si56[1][1] + pmm6[5]*Si56[1][2];
pm6[5]=LEGLINK2*pmm6[3] + pmm6[4]*Si56[2][1] + pmm6[5]*Si56[2][2];
pm6[6]=pmm6[6] - LEGLINK2*pmm6[1]*Si56[2][1] - LEGLINK2*pmm6[2]*Si56[2][2];

p5[1]=pm6[1] + pv5[1];
p5[2]=pm6[2] + pv5[2];
p5[3]=pm6[3] + pv5[3];
p5[4]=pm6[4] + pv5[4];
p5[5]=pm6[5] + pv5[5];
p5[6]=pm6[6] + pv5[6];

pmm5[1]=state[3].thdd*h5[1] + p5[1] + c5[1]*JA5[1][1] + c5[2]*JA5[1][2] + c5[4]*JA5[1][4] + c5[5]*JA5[1][5];
pmm5[2]=state[3].thdd*h5[2] + p5[2] + c5[1]*JA5[2][1] + c5[2]*JA5[2][2] + c5[4]*JA5[2][4] + c5[5]*JA5[2][5];
pmm5[3]=state[3].thdd*h5[3] + p5[3] + c5[1]*JA5[3][1] + c5[2]*JA5[3][2] + c5[4]*JA5[3][4] + c5[5]*JA5[3][5];
pmm5[4]=state[3].thdd*h5[4] + p5[4] + c5[1]*JA5[4][1] + c5[2]*JA5[4][2] + c5[4]*JA5[4][4] + c5[5]*JA5[4][5];
pmm5[5]=state[3].thdd*h5[5] + p5[5] + c5[1]*JA5[5][1] + c5[2]*JA5[5][2] + c5[4]*JA5[5][4] + c5[5]*JA5[5][5];
pmm5[6]=state[3].thdd*h5[6] + p5[6] + c5[1]*JA5[6][1] + c5[2]*JA5[6][2] + c5[4]*JA5[6][4] + c5[5]*JA5[6][5];

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

pmm4[1]=state[2].thdd*h4[1] + p4[1] + c4[1]*JA4[1][1] + c4[2]*JA4[1][2] + c4[4]*JA4[1][4] + c4[5]*JA4[1][5];
pmm4[2]=state[2].thdd*h4[2] + p4[2] + c4[1]*JA4[2][1] + c4[2]*JA4[2][2] + c4[4]*JA4[2][4] + c4[5]*JA4[2][5];
pmm4[3]=state[2].thdd*h4[3] + p4[3] + c4[1]*JA4[3][1] + c4[2]*JA4[3][2] + c4[4]*JA4[3][4] + c4[5]*JA4[3][5];
pmm4[4]=state[2].thdd*h4[4] + p4[4] + c4[1]*JA4[4][1] + c4[2]*JA4[4][2] + c4[4]*JA4[4][4] + c4[5]*JA4[4][5];
pmm4[5]=state[2].thdd*h4[5] + p4[5] + c4[1]*JA4[5][1] + c4[2]*JA4[5][2] + c4[4]*JA4[5][4] + c4[5]*JA4[5][5];
pmm4[6]=state[2].thdd*h4[6] + p4[6] + c4[1]*JA4[6][1] + c4[2]*JA4[6][2] + c4[4]*JA4[6][4] + c4[5]*JA4[6][5];

pm4[1]=pmm4[1]*Si34[1][1] + pmm4[2]*Si34[1][2];
pm4[2]=-pmm4[3];
pm4[3]=pmm4[1]*Si34[3][1] + pmm4[2]*Si34[3][2];
pm4[4]=pmm4[4]*Si34[1][1] + pmm4[5]*Si34[1][2];
pm4[5]=-pmm4[6];
pm4[6]=pmm4[4]*Si34[3][1] + pmm4[5]*Si34[3][2];

p3[1]=pm4[1] + pv3[1];
p3[2]=pm4[2] + pv3[2];
p3[3]=pm4[3] + pv3[3];
p3[4]=pm4[4] + pv3[4];
p3[5]=pm4[5] + pv3[5];
p3[6]=pm4[6] + pv3[6];

pmm3[1]=state[1].thdd*h3[1] + p3[1] + c3[1]*JA3[1][1] + c3[2]*JA3[1][2] + c3[4]*JA3[1][4] + c3[5]*JA3[1][5];
pmm3[2]=state[1].thdd*h3[2] + p3[2] + c3[1]*JA3[2][1] + c3[2]*JA3[2][2] + c3[4]*JA3[2][4] + c3[5]*JA3[2][5];
pmm3[3]=state[1].thdd*h3[3] + p3[3] + c3[1]*JA3[3][1] + c3[2]*JA3[3][2] + c3[4]*JA3[3][4] + c3[5]*JA3[3][5];
pmm3[4]=state[1].thdd*h3[4] + p3[4] + c3[1]*JA3[4][1] + c3[2]*JA3[4][2] + c3[4]*JA3[4][4] + c3[5]*JA3[4][5];
pmm3[5]=state[1].thdd*h3[5] + p3[5] + c3[1]*JA3[5][1] + c3[2]*JA3[5][2] + c3[4]*JA3[5][4] + c3[5]*JA3[5][5];
pmm3[6]=state[1].thdd*h3[6] + p3[6] + c3[1]*JA3[6][1] + c3[2]*JA3[6][2] + c3[4]*JA3[6][4] + c3[5]*JA3[6][5];

pm3[1]=pmm3[1]*Si23[1][1] + pmm3[2]*Si23[1][2];
pm3[2]=pmm3[3];
pm3[3]=pmm3[1]*Si23[3][1] + pmm3[2]*Si23[3][2];
pm3[4]=-(LEGLINK1*pmm3[3]) + pmm3[4]*Si23[1][1] + pmm3[5]*Si23[1][2] - WAISTLINK1*pmm3[1]*Si23[3][1] - WAISTLINK1*pmm3[2]*Si23[3][2];
pm3[5]=pmm3[6] + pmm3[1]*(LEGLINK1*Si23[1][1] + WAISTLINK2*Si23[3][1]) + pmm3[2]*(LEGLINK1*Si23[1][2] + WAISTLINK2*Si23[3][2]);
pm3[6]=-(WAISTLINK2*pmm3[3]) + WAISTLINK1*pmm3[1]*Si23[1][1] + WAISTLINK1*pmm3[2]*Si23[1][2] + pmm3[4]*Si23[3][1] + pmm3[5]*Si23[3][2];

p2[1]=pm14[1] + pm3[1] + pv2[1];
p2[2]=pm14[2] + pm3[2] + pv2[2];
p2[3]=pm14[3] + pm3[3] + pv2[3];
p2[4]=pm14[4] + pm3[4] + pv2[4];
p2[5]=pm14[5] + pm3[5] + pv2[5];
p2[6]=pm14[6] + pm3[6] + pv2[6];

pmm2[1]=state[13].thdd*h2[1] + p2[1] + c2[1]*JA2[1][1] + c2[2]*JA2[1][2] + c2[4]*JA2[1][4] + c2[5]*JA2[1][5];
pmm2[2]=state[13].thdd*h2[2] + p2[2] + c2[1]*JA2[2][1] + c2[2]*JA2[2][2] + c2[4]*JA2[2][4] + c2[5]*JA2[2][5];
pmm2[3]=state[13].thdd*h2[3] + p2[3] + c2[1]*JA2[3][1] + c2[2]*JA2[3][2] + c2[4]*JA2[3][4] + c2[5]*JA2[3][5];
pmm2[4]=state[13].thdd*h2[4] + p2[4] + c2[1]*JA2[4][1] + c2[2]*JA2[4][2] + c2[4]*JA2[4][4] + c2[5]*JA2[4][5];
pmm2[5]=state[13].thdd*h2[5] + p2[5] + c2[1]*JA2[5][1] + c2[2]*JA2[5][2] + c2[4]*JA2[5][4] + c2[5]*JA2[5][5];
pmm2[6]=state[13].thdd*h2[6] + p2[6] + c2[1]*JA2[6][1] + c2[2]*JA2[6][2] + c2[4]*JA2[6][4] + c2[5]*JA2[6][5];

pm2[1]=pmm2[1]*Si02[1][1] + pmm2[2]*Si02[1][2];
pm2[2]=-pmm2[3];
pm2[3]=pmm2[1]*Si02[3][1] + pmm2[2]*Si02[3][2];
pm2[4]=pmm2[4]*Si02[1][1] + pmm2[5]*Si02[1][2];
pm2[5]=-pmm2[6] - BODYLINK2*pmm2[1]*Si02[3][1] - BODYLINK2*pmm2[2]*Si02[3][2];
pm2[6]=-(BODYLINK2*pmm2[3]) + pmm2[4]*Si02[3][1] + pmm2[5]*Si02[3][2];

p0[1]=0. + pm2[1] + pv0[1];
p0[2]=0. + pm2[2] + pv0[2];
p0[3]=0. + pm2[3] + pv0[3];
p0[4]=0. + pm2[4] + pv0[4];
p0[5]=0. + pm2[5] + pv0[5];
p0[6]=0. + pm2[6] + pv0[6];


}

