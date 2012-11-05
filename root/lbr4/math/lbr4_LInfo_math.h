/* Need [n_joints+1]x[3+1] matrices: Xorigin,Xmcog,Xaxis, and Xlink[nLinks+1][3+1] */

/* sine and cosine precomputation */
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


/* rotation matrix sine and cosine precomputation */







rseff1a1=Sin(eff[1].a[1]);
rceff1a1=Cos(eff[1].a[1]);

rseff1a2=Sin(eff[1].a[2]);
rceff1a2=Cos(eff[1].a[2]);

rseff1a3=Sin(eff[1].a[3]);
rceff1a3=Cos(eff[1].a[3]);



/* inverse homogeneous rotation matrices */
Hi00[1][1]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[2],2);
Hi00[1][2]=2*(baseo[0].q[2]*baseo[0].q[3] - baseo[0].q[1]*baseo[0].q[4]);
Hi00[1][3]=2*(baseo[0].q[1]*baseo[0].q[3] + baseo[0].q[2]*baseo[0].q[4]);
Hi00[1][4]=basec[0].x[1];

Hi00[2][1]=2*(baseo[0].q[2]*baseo[0].q[3] + baseo[0].q[1]*baseo[0].q[4]);
Hi00[2][2]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[3],2);
Hi00[2][3]=2*(-(baseo[0].q[1]*baseo[0].q[2]) + baseo[0].q[3]*baseo[0].q[4]);
Hi00[2][4]=basec[0].x[2];

Hi00[3][1]=2*(-(baseo[0].q[1]*baseo[0].q[3]) + baseo[0].q[2]*baseo[0].q[4]);
Hi00[3][2]=2*(baseo[0].q[1]*baseo[0].q[2] + baseo[0].q[3]*baseo[0].q[4]);
Hi00[3][3]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[4],2);
Hi00[3][4]=basec[0].x[3];


Hi01[1][1]=cstate1th;
Hi01[1][2]=-sstate1th;

Hi01[2][1]=sstate1th;
Hi01[2][2]=cstate1th;

Hi01[3][4]=BA1;


Hi12[2][1]=sstate2th;
Hi12[2][2]=cstate2th;

Hi12[3][1]=-cstate2th;
Hi12[3][2]=sstate2th;
Hi12[3][4]=A1A2;


Hi23[1][4]=-A2E1;

Hi23[2][1]=sstate3th;
Hi23[2][2]=cstate3th;

Hi23[3][1]=cstate3th;
Hi23[3][2]=-sstate3th;


Hi34[2][1]=sstate4th;
Hi34[2][2]=cstate4th;

Hi34[3][1]=cstate4th;
Hi34[3][2]=-sstate4th;
Hi34[3][4]=E1A3;


Hi45[1][4]=A3A4;

Hi45[2][1]=sstate5th;
Hi45[2][2]=cstate5th;

Hi45[3][1]=-cstate5th;
Hi45[3][2]=sstate5th;


Hi56[2][1]=sstate6th;
Hi56[2][2]=cstate6th;

Hi56[3][1]=-cstate6th;
Hi56[3][2]=sstate6th;
Hi56[3][4]=A4A5;


Hi67[1][4]=-A5A6;

Hi67[2][1]=sstate7th;
Hi67[2][2]=cstate7th;

Hi67[3][1]=cstate7th;
Hi67[3][2]=-sstate7th;


Hi78[1][1]=rceff1a2*rceff1a3;
Hi78[1][2]=-(rceff1a2*rseff1a3);
Hi78[1][3]=rseff1a2;
Hi78[1][4]=eff[1].x[1];

Hi78[2][1]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
Hi78[2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
Hi78[2][3]=-(rceff1a2*rseff1a1);
Hi78[2][4]=eff[1].x[2];

Hi78[3][1]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;
Hi78[3][2]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;
Hi78[3][3]=rceff1a1*rceff1a2;
Hi78[3][4]=eff[1].x[3];



/* per link inverse homogeneous rotation matrices */
Ai01[1][1]=Hi00[1][1]*Hi01[1][1] + Hi00[1][2]*Hi01[2][1];
Ai01[1][2]=Hi00[1][1]*Hi01[1][2] + Hi00[1][2]*Hi01[2][2];
Ai01[1][3]=Hi00[1][3];
Ai01[1][4]=Hi00[1][4] + Hi00[1][3]*Hi01[3][4];

Ai01[2][1]=Hi00[2][1]*Hi01[1][1] + Hi00[2][2]*Hi01[2][1];
Ai01[2][2]=Hi00[2][1]*Hi01[1][2] + Hi00[2][2]*Hi01[2][2];
Ai01[2][3]=Hi00[2][3];
Ai01[2][4]=Hi00[2][4] + Hi00[2][3]*Hi01[3][4];

Ai01[3][1]=Hi00[3][1]*Hi01[1][1] + Hi00[3][2]*Hi01[2][1];
Ai01[3][2]=Hi00[3][1]*Hi01[1][2] + Hi00[3][2]*Hi01[2][2];
Ai01[3][3]=Hi00[3][3];
Ai01[3][4]=Hi00[3][4] + Hi00[3][3]*Hi01[3][4];


Ai02[1][1]=Ai01[1][2]*Hi12[2][1] + Ai01[1][3]*Hi12[3][1];
Ai02[1][2]=Ai01[1][2]*Hi12[2][2] + Ai01[1][3]*Hi12[3][2];
Ai02[1][3]=Ai01[1][1];
Ai02[1][4]=Ai01[1][4] + Ai01[1][3]*Hi12[3][4];

Ai02[2][1]=Ai01[2][2]*Hi12[2][1] + Ai01[2][3]*Hi12[3][1];
Ai02[2][2]=Ai01[2][2]*Hi12[2][2] + Ai01[2][3]*Hi12[3][2];
Ai02[2][3]=Ai01[2][1];
Ai02[2][4]=Ai01[2][4] + Ai01[2][3]*Hi12[3][4];

Ai02[3][1]=Ai01[3][2]*Hi12[2][1] + Ai01[3][3]*Hi12[3][1];
Ai02[3][2]=Ai01[3][2]*Hi12[2][2] + Ai01[3][3]*Hi12[3][2];
Ai02[3][3]=Ai01[3][1];
Ai02[3][4]=Ai01[3][4] + Ai01[3][3]*Hi12[3][4];


Ai03[1][1]=Ai02[1][2]*Hi23[2][1] + Ai02[1][3]*Hi23[3][1];
Ai03[1][2]=Ai02[1][2]*Hi23[2][2] + Ai02[1][3]*Hi23[3][2];
Ai03[1][3]=-Ai02[1][1];
Ai03[1][4]=Ai02[1][4] + Ai02[1][1]*Hi23[1][4];

Ai03[2][1]=Ai02[2][2]*Hi23[2][1] + Ai02[2][3]*Hi23[3][1];
Ai03[2][2]=Ai02[2][2]*Hi23[2][2] + Ai02[2][3]*Hi23[3][2];
Ai03[2][3]=-Ai02[2][1];
Ai03[2][4]=Ai02[2][4] + Ai02[2][1]*Hi23[1][4];

Ai03[3][1]=Ai02[3][2]*Hi23[2][1] + Ai02[3][3]*Hi23[3][1];
Ai03[3][2]=Ai02[3][2]*Hi23[2][2] + Ai02[3][3]*Hi23[3][2];
Ai03[3][3]=-Ai02[3][1];
Ai03[3][4]=Ai02[3][4] + Ai02[3][1]*Hi23[1][4];


Ai04[1][1]=Ai03[1][2]*Hi34[2][1] + Ai03[1][3]*Hi34[3][1];
Ai04[1][2]=Ai03[1][2]*Hi34[2][2] + Ai03[1][3]*Hi34[3][2];
Ai04[1][3]=-Ai03[1][1];
Ai04[1][4]=Ai03[1][4] + Ai03[1][3]*Hi34[3][4];

Ai04[2][1]=Ai03[2][2]*Hi34[2][1] + Ai03[2][3]*Hi34[3][1];
Ai04[2][2]=Ai03[2][2]*Hi34[2][2] + Ai03[2][3]*Hi34[3][2];
Ai04[2][3]=-Ai03[2][1];
Ai04[2][4]=Ai03[2][4] + Ai03[2][3]*Hi34[3][4];

Ai04[3][1]=Ai03[3][2]*Hi34[2][1] + Ai03[3][3]*Hi34[3][1];
Ai04[3][2]=Ai03[3][2]*Hi34[2][2] + Ai03[3][3]*Hi34[3][2];
Ai04[3][3]=-Ai03[3][1];
Ai04[3][4]=Ai03[3][4] + Ai03[3][3]*Hi34[3][4];


Ai05[1][1]=Ai04[1][2]*Hi45[2][1] + Ai04[1][3]*Hi45[3][1];
Ai05[1][2]=Ai04[1][2]*Hi45[2][2] + Ai04[1][3]*Hi45[3][2];
Ai05[1][3]=Ai04[1][1];
Ai05[1][4]=Ai04[1][4] + Ai04[1][1]*Hi45[1][4];

Ai05[2][1]=Ai04[2][2]*Hi45[2][1] + Ai04[2][3]*Hi45[3][1];
Ai05[2][2]=Ai04[2][2]*Hi45[2][2] + Ai04[2][3]*Hi45[3][2];
Ai05[2][3]=Ai04[2][1];
Ai05[2][4]=Ai04[2][4] + Ai04[2][1]*Hi45[1][4];

Ai05[3][1]=Ai04[3][2]*Hi45[2][1] + Ai04[3][3]*Hi45[3][1];
Ai05[3][2]=Ai04[3][2]*Hi45[2][2] + Ai04[3][3]*Hi45[3][2];
Ai05[3][3]=Ai04[3][1];
Ai05[3][4]=Ai04[3][4] + Ai04[3][1]*Hi45[1][4];


Ai06[1][1]=Ai05[1][2]*Hi56[2][1] + Ai05[1][3]*Hi56[3][1];
Ai06[1][2]=Ai05[1][2]*Hi56[2][2] + Ai05[1][3]*Hi56[3][2];
Ai06[1][3]=Ai05[1][1];
Ai06[1][4]=Ai05[1][4] + Ai05[1][3]*Hi56[3][4];

Ai06[2][1]=Ai05[2][2]*Hi56[2][1] + Ai05[2][3]*Hi56[3][1];
Ai06[2][2]=Ai05[2][2]*Hi56[2][2] + Ai05[2][3]*Hi56[3][2];
Ai06[2][3]=Ai05[2][1];
Ai06[2][4]=Ai05[2][4] + Ai05[2][3]*Hi56[3][4];

Ai06[3][1]=Ai05[3][2]*Hi56[2][1] + Ai05[3][3]*Hi56[3][1];
Ai06[3][2]=Ai05[3][2]*Hi56[2][2] + Ai05[3][3]*Hi56[3][2];
Ai06[3][3]=Ai05[3][1];
Ai06[3][4]=Ai05[3][4] + Ai05[3][3]*Hi56[3][4];


Ai07[1][1]=Ai06[1][2]*Hi67[2][1] + Ai06[1][3]*Hi67[3][1];
Ai07[1][2]=Ai06[1][2]*Hi67[2][2] + Ai06[1][3]*Hi67[3][2];
Ai07[1][3]=-Ai06[1][1];
Ai07[1][4]=Ai06[1][4] + Ai06[1][1]*Hi67[1][4];

Ai07[2][1]=Ai06[2][2]*Hi67[2][1] + Ai06[2][3]*Hi67[3][1];
Ai07[2][2]=Ai06[2][2]*Hi67[2][2] + Ai06[2][3]*Hi67[3][2];
Ai07[2][3]=-Ai06[2][1];
Ai07[2][4]=Ai06[2][4] + Ai06[2][1]*Hi67[1][4];

Ai07[3][1]=Ai06[3][2]*Hi67[2][1] + Ai06[3][3]*Hi67[3][1];
Ai07[3][2]=Ai06[3][2]*Hi67[2][2] + Ai06[3][3]*Hi67[3][2];
Ai07[3][3]=-Ai06[3][1];
Ai07[3][4]=Ai06[3][4] + Ai06[3][1]*Hi67[1][4];


Ai08[1][1]=Ai07[1][1]*Hi78[1][1] + Ai07[1][2]*Hi78[2][1] + Ai07[1][3]*Hi78[3][1];
Ai08[1][2]=Ai07[1][1]*Hi78[1][2] + Ai07[1][2]*Hi78[2][2] + Ai07[1][3]*Hi78[3][2];
Ai08[1][3]=Ai07[1][1]*Hi78[1][3] + Ai07[1][2]*Hi78[2][3] + Ai07[1][3]*Hi78[3][3];
Ai08[1][4]=Ai07[1][4] + Ai07[1][1]*Hi78[1][4] + Ai07[1][2]*Hi78[2][4] + Ai07[1][3]*Hi78[3][4];

Ai08[2][1]=Ai07[2][1]*Hi78[1][1] + Ai07[2][2]*Hi78[2][1] + Ai07[2][3]*Hi78[3][1];
Ai08[2][2]=Ai07[2][1]*Hi78[1][2] + Ai07[2][2]*Hi78[2][2] + Ai07[2][3]*Hi78[3][2];
Ai08[2][3]=Ai07[2][1]*Hi78[1][3] + Ai07[2][2]*Hi78[2][3] + Ai07[2][3]*Hi78[3][3];
Ai08[2][4]=Ai07[2][4] + Ai07[2][1]*Hi78[1][4] + Ai07[2][2]*Hi78[2][4] + Ai07[2][3]*Hi78[3][4];

Ai08[3][1]=Ai07[3][1]*Hi78[1][1] + Ai07[3][2]*Hi78[2][1] + Ai07[3][3]*Hi78[3][1];
Ai08[3][2]=Ai07[3][1]*Hi78[1][2] + Ai07[3][2]*Hi78[2][2] + Ai07[3][3]*Hi78[3][2];
Ai08[3][3]=Ai07[3][1]*Hi78[1][3] + Ai07[3][2]*Hi78[2][3] + Ai07[3][3]*Hi78[3][3];
Ai08[3][4]=Ai07[3][4] + Ai07[3][1]*Hi78[1][4] + Ai07[3][2]*Hi78[2][4] + Ai07[3][3]*Hi78[3][4];



/* joint ID: 0 */
Xorigin[0][1]=Hi00[1][4];
Xorigin[0][2]=Hi00[2][4];
Xorigin[0][3]=Hi00[3][4];

Xmcog[0][1]=links[0].mcm[1]*Hi00[1][1] + links[0].mcm[2]*Hi00[1][2] + links[0].mcm[3]*Hi00[1][3] + links[0].m*Hi00[1][4];
Xmcog[0][2]=links[0].mcm[1]*Hi00[2][1] + links[0].mcm[2]*Hi00[2][2] + links[0].mcm[3]*Hi00[2][3] + links[0].m*Hi00[2][4];
Xmcog[0][3]=links[0].mcm[1]*Hi00[3][1] + links[0].mcm[2]*Hi00[3][2] + links[0].mcm[3]*Hi00[3][3] + links[0].m*Hi00[3][4];

Xaxis[0][1]=0;
Xaxis[0][2]=0;
Xaxis[0][3]=0;

/* link 0: {basec$0$$x[[1]], basec$0$$x[[2]], basec$0$$x[[3]]} */
Xlink[0][1]=Hi00[1][4];
Xlink[0][2]=Hi00[2][4];
Xlink[0][3]=Hi00[3][4];

Ahmat[0][1][1]=Hi00[1][1];
Ahmat[0][1][2]=Hi00[1][2];
Ahmat[0][1][3]=Hi00[1][3];
Ahmat[0][1][4]=Hi00[1][4];

Ahmat[0][2][1]=Hi00[2][1];
Ahmat[0][2][2]=Hi00[2][2];
Ahmat[0][2][3]=Hi00[2][3];
Ahmat[0][2][4]=Hi00[2][4];

Ahmat[0][3][1]=Hi00[3][1];
Ahmat[0][3][2]=Hi00[3][2];
Ahmat[0][3][3]=Hi00[3][3];
Ahmat[0][3][4]=Hi00[3][4];

Ahmat[0][4][1]=0.;
Ahmat[0][4][2]=0.;
Ahmat[0][4][3]=0.;
Ahmat[0][4][4]=1;


/* joint ID: 1 */
Xorigin[1][1]=Ai01[1][4];
Xorigin[1][2]=Ai01[2][4];
Xorigin[1][3]=Ai01[3][4];

Xmcog[1][1]=links[1].mcm[1]*Ai01[1][1] + links[1].mcm[2]*Ai01[1][2] + links[1].mcm[3]*Ai01[1][3] + links[1].m*Ai01[1][4];
Xmcog[1][2]=links[1].mcm[1]*Ai01[2][1] + links[1].mcm[2]*Ai01[2][2] + links[1].mcm[3]*Ai01[2][3] + links[1].m*Ai01[2][4];
Xmcog[1][3]=links[1].mcm[1]*Ai01[3][1] + links[1].mcm[2]*Ai01[3][2] + links[1].mcm[3]*Ai01[3][3] + links[1].m*Ai01[3][4];

Xaxis[1][1]=Ai01[1][3];
Xaxis[1][2]=Ai01[2][3];
Xaxis[1][3]=Ai01[3][3];

/* link 1: {0, 0, BA1} */
Xlink[1][1]=Ai01[1][4];
Xlink[1][2]=Ai01[2][4];
Xlink[1][3]=Ai01[3][4];

Ahmat[1][1][1]=Ai01[1][1];
Ahmat[1][1][2]=Ai01[1][2];
Ahmat[1][1][3]=Ai01[1][3];
Ahmat[1][1][4]=Ai01[1][4];

Ahmat[1][2][1]=Ai01[2][1];
Ahmat[1][2][2]=Ai01[2][2];
Ahmat[1][2][3]=Ai01[2][3];
Ahmat[1][2][4]=Ai01[2][4];

Ahmat[1][3][1]=Ai01[3][1];
Ahmat[1][3][2]=Ai01[3][2];
Ahmat[1][3][3]=Ai01[3][3];
Ahmat[1][3][4]=Ai01[3][4];

Ahmat[1][4][1]=0.;
Ahmat[1][4][2]=0.;
Ahmat[1][4][3]=0.;
Ahmat[1][4][4]=1;


/* joint ID: 2 */
Xorigin[2][1]=Ai02[1][4];
Xorigin[2][2]=Ai02[2][4];
Xorigin[2][3]=Ai02[3][4];

Xmcog[2][1]=links[2].mcm[1]*Ai02[1][1] + links[2].mcm[2]*Ai02[1][2] + links[2].mcm[3]*Ai02[1][3] + links[2].m*Ai02[1][4];
Xmcog[2][2]=links[2].mcm[1]*Ai02[2][1] + links[2].mcm[2]*Ai02[2][2] + links[2].mcm[3]*Ai02[2][3] + links[2].m*Ai02[2][4];
Xmcog[2][3]=links[2].mcm[1]*Ai02[3][1] + links[2].mcm[2]*Ai02[3][2] + links[2].mcm[3]*Ai02[3][3] + links[2].m*Ai02[3][4];

Xaxis[2][1]=Ai02[1][3];
Xaxis[2][2]=Ai02[2][3];
Xaxis[2][3]=Ai02[3][3];

/* link 2: {0, 0, A1A2} */
Xlink[2][1]=Ai02[1][4];
Xlink[2][2]=Ai02[2][4];
Xlink[2][3]=Ai02[3][4];

Ahmat[2][1][1]=Ai02[1][1];
Ahmat[2][1][2]=Ai02[1][2];
Ahmat[2][1][3]=Ai02[1][3];
Ahmat[2][1][4]=Ai02[1][4];

Ahmat[2][2][1]=Ai02[2][1];
Ahmat[2][2][2]=Ai02[2][2];
Ahmat[2][2][3]=Ai02[2][3];
Ahmat[2][2][4]=Ai02[2][4];

Ahmat[2][3][1]=Ai02[3][1];
Ahmat[2][3][2]=Ai02[3][2];
Ahmat[2][3][3]=Ai02[3][3];
Ahmat[2][3][4]=Ai02[3][4];

Ahmat[2][4][1]=0.;
Ahmat[2][4][2]=0.;
Ahmat[2][4][3]=0.;
Ahmat[2][4][4]=1;


/* joint ID: 3 */
Xorigin[3][1]=Ai03[1][4];
Xorigin[3][2]=Ai03[2][4];
Xorigin[3][3]=Ai03[3][4];

Xmcog[3][1]=links[3].mcm[1]*Ai03[1][1] + links[3].mcm[2]*Ai03[1][2] + links[3].mcm[3]*Ai03[1][3] + links[3].m*Ai03[1][4];
Xmcog[3][2]=links[3].mcm[1]*Ai03[2][1] + links[3].mcm[2]*Ai03[2][2] + links[3].mcm[3]*Ai03[2][3] + links[3].m*Ai03[2][4];
Xmcog[3][3]=links[3].mcm[1]*Ai03[3][1] + links[3].mcm[2]*Ai03[3][2] + links[3].mcm[3]*Ai03[3][3] + links[3].m*Ai03[3][4];

Xaxis[3][1]=Ai03[1][3];
Xaxis[3][2]=Ai03[2][3];
Xaxis[3][3]=Ai03[3][3];

/* link 3: {-A2E1, 0, 0} */
Xlink[3][1]=Ai03[1][4];
Xlink[3][2]=Ai03[2][4];
Xlink[3][3]=Ai03[3][4];

Ahmat[3][1][1]=Ai03[1][1];
Ahmat[3][1][2]=Ai03[1][2];
Ahmat[3][1][3]=Ai03[1][3];
Ahmat[3][1][4]=Ai03[1][4];

Ahmat[3][2][1]=Ai03[2][1];
Ahmat[3][2][2]=Ai03[2][2];
Ahmat[3][2][3]=Ai03[2][3];
Ahmat[3][2][4]=Ai03[2][4];

Ahmat[3][3][1]=Ai03[3][1];
Ahmat[3][3][2]=Ai03[3][2];
Ahmat[3][3][3]=Ai03[3][3];
Ahmat[3][3][4]=Ai03[3][4];

Ahmat[3][4][1]=0.;
Ahmat[3][4][2]=0.;
Ahmat[3][4][3]=0.;
Ahmat[3][4][4]=1;


/* joint ID: 4 */
Xorigin[4][1]=Ai04[1][4];
Xorigin[4][2]=Ai04[2][4];
Xorigin[4][3]=Ai04[3][4];

Xmcog[4][1]=links[4].mcm[1]*Ai04[1][1] + links[4].mcm[2]*Ai04[1][2] + links[4].mcm[3]*Ai04[1][3] + links[4].m*Ai04[1][4];
Xmcog[4][2]=links[4].mcm[1]*Ai04[2][1] + links[4].mcm[2]*Ai04[2][2] + links[4].mcm[3]*Ai04[2][3] + links[4].m*Ai04[2][4];
Xmcog[4][3]=links[4].mcm[1]*Ai04[3][1] + links[4].mcm[2]*Ai04[3][2] + links[4].mcm[3]*Ai04[3][3] + links[4].m*Ai04[3][4];

Xaxis[4][1]=Ai04[1][3];
Xaxis[4][2]=Ai04[2][3];
Xaxis[4][3]=Ai04[3][3];

/* link 4: {0, 0, E1A3} */
Xlink[4][1]=Ai04[1][4];
Xlink[4][2]=Ai04[2][4];
Xlink[4][3]=Ai04[3][4];

Ahmat[4][1][1]=Ai04[1][1];
Ahmat[4][1][2]=Ai04[1][2];
Ahmat[4][1][3]=Ai04[1][3];
Ahmat[4][1][4]=Ai04[1][4];

Ahmat[4][2][1]=Ai04[2][1];
Ahmat[4][2][2]=Ai04[2][2];
Ahmat[4][2][3]=Ai04[2][3];
Ahmat[4][2][4]=Ai04[2][4];

Ahmat[4][3][1]=Ai04[3][1];
Ahmat[4][3][2]=Ai04[3][2];
Ahmat[4][3][3]=Ai04[3][3];
Ahmat[4][3][4]=Ai04[3][4];

Ahmat[4][4][1]=0.;
Ahmat[4][4][2]=0.;
Ahmat[4][4][3]=0.;
Ahmat[4][4][4]=1;


/* joint ID: 5 */
Xorigin[5][1]=Ai05[1][4];
Xorigin[5][2]=Ai05[2][4];
Xorigin[5][3]=Ai05[3][4];

Xmcog[5][1]=links[5].mcm[1]*Ai05[1][1] + links[5].mcm[2]*Ai05[1][2] + links[5].mcm[3]*Ai05[1][3] + links[5].m*Ai05[1][4];
Xmcog[5][2]=links[5].mcm[1]*Ai05[2][1] + links[5].mcm[2]*Ai05[2][2] + links[5].mcm[3]*Ai05[2][3] + links[5].m*Ai05[2][4];
Xmcog[5][3]=links[5].mcm[1]*Ai05[3][1] + links[5].mcm[2]*Ai05[3][2] + links[5].mcm[3]*Ai05[3][3] + links[5].m*Ai05[3][4];

Xaxis[5][1]=Ai05[1][3];
Xaxis[5][2]=Ai05[2][3];
Xaxis[5][3]=Ai05[3][3];

/* link 5: {A3A4, 0, 0} */
Xlink[5][1]=Ai05[1][4];
Xlink[5][2]=Ai05[2][4];
Xlink[5][3]=Ai05[3][4];

Ahmat[5][1][1]=Ai05[1][1];
Ahmat[5][1][2]=Ai05[1][2];
Ahmat[5][1][3]=Ai05[1][3];
Ahmat[5][1][4]=Ai05[1][4];

Ahmat[5][2][1]=Ai05[2][1];
Ahmat[5][2][2]=Ai05[2][2];
Ahmat[5][2][3]=Ai05[2][3];
Ahmat[5][2][4]=Ai05[2][4];

Ahmat[5][3][1]=Ai05[3][1];
Ahmat[5][3][2]=Ai05[3][2];
Ahmat[5][3][3]=Ai05[3][3];
Ahmat[5][3][4]=Ai05[3][4];

Ahmat[5][4][1]=0.;
Ahmat[5][4][2]=0.;
Ahmat[5][4][3]=0.;
Ahmat[5][4][4]=1;


/* joint ID: 6 */
Xorigin[6][1]=Ai06[1][4];
Xorigin[6][2]=Ai06[2][4];
Xorigin[6][3]=Ai06[3][4];

Xmcog[6][1]=links[6].mcm[1]*Ai06[1][1] + links[6].mcm[2]*Ai06[1][2] + links[6].mcm[3]*Ai06[1][3] + links[6].m*Ai06[1][4];
Xmcog[6][2]=links[6].mcm[1]*Ai06[2][1] + links[6].mcm[2]*Ai06[2][2] + links[6].mcm[3]*Ai06[2][3] + links[6].m*Ai06[2][4];
Xmcog[6][3]=links[6].mcm[1]*Ai06[3][1] + links[6].mcm[2]*Ai06[3][2] + links[6].mcm[3]*Ai06[3][3] + links[6].m*Ai06[3][4];

Xaxis[6][1]=Ai06[1][3];
Xaxis[6][2]=Ai06[2][3];
Xaxis[6][3]=Ai06[3][3];

/* link 6: {0, 0, A4A5} */
Xlink[6][1]=Ai06[1][4];
Xlink[6][2]=Ai06[2][4];
Xlink[6][3]=Ai06[3][4];

Ahmat[6][1][1]=Ai06[1][1];
Ahmat[6][1][2]=Ai06[1][2];
Ahmat[6][1][3]=Ai06[1][3];
Ahmat[6][1][4]=Ai06[1][4];

Ahmat[6][2][1]=Ai06[2][1];
Ahmat[6][2][2]=Ai06[2][2];
Ahmat[6][2][3]=Ai06[2][3];
Ahmat[6][2][4]=Ai06[2][4];

Ahmat[6][3][1]=Ai06[3][1];
Ahmat[6][3][2]=Ai06[3][2];
Ahmat[6][3][3]=Ai06[3][3];
Ahmat[6][3][4]=Ai06[3][4];

Ahmat[6][4][1]=0.;
Ahmat[6][4][2]=0.;
Ahmat[6][4][3]=0.;
Ahmat[6][4][4]=1;


/* joint ID: 7 */
Xorigin[7][1]=Ai07[1][4];
Xorigin[7][2]=Ai07[2][4];
Xorigin[7][3]=Ai07[3][4];

Xmcog[7][1]=links[7].mcm[1]*Ai07[1][1] + links[7].mcm[2]*Ai07[1][2] + links[7].mcm[3]*Ai07[1][3] + links[7].m*Ai07[1][4];
Xmcog[7][2]=links[7].mcm[1]*Ai07[2][1] + links[7].mcm[2]*Ai07[2][2] + links[7].mcm[3]*Ai07[2][3] + links[7].m*Ai07[2][4];
Xmcog[7][3]=links[7].mcm[1]*Ai07[3][1] + links[7].mcm[2]*Ai07[3][2] + links[7].mcm[3]*Ai07[3][3] + links[7].m*Ai07[3][4];

Xaxis[7][1]=Ai07[1][3];
Xaxis[7][2]=Ai07[2][3];
Xaxis[7][3]=Ai07[3][3];

/* link 7: {-A5A6, 0, 0} */
Xlink[7][1]=Ai07[1][4];
Xlink[7][2]=Ai07[2][4];
Xlink[7][3]=Ai07[3][4];

Ahmat[7][1][1]=Ai07[1][1];
Ahmat[7][1][2]=Ai07[1][2];
Ahmat[7][1][3]=Ai07[1][3];
Ahmat[7][1][4]=Ai07[1][4];

Ahmat[7][2][1]=Ai07[2][1];
Ahmat[7][2][2]=Ai07[2][2];
Ahmat[7][2][3]=Ai07[2][3];
Ahmat[7][2][4]=Ai07[2][4];

Ahmat[7][3][1]=Ai07[3][1];
Ahmat[7][3][2]=Ai07[3][2];
Ahmat[7][3][3]=Ai07[3][3];
Ahmat[7][3][4]=Ai07[3][4];

Ahmat[7][4][1]=0.;
Ahmat[7][4][2]=0.;
Ahmat[7][4][3]=0.;
Ahmat[7][4][4]=1;


/* link 8: {eff$1$$x[[1]], eff$1$$x[[2]], eff$1$$x[[3]]} */
Xlink[8][1]=Ai08[1][4];
Xlink[8][2]=Ai08[2][4];
Xlink[8][3]=Ai08[3][4];

Ahmat[8][1][1]=Ai08[1][1];
Ahmat[8][1][2]=Ai08[1][2];
Ahmat[8][1][3]=Ai08[1][3];
Ahmat[8][1][4]=Ai08[1][4];

Ahmat[8][2][1]=Ai08[2][1];
Ahmat[8][2][2]=Ai08[2][2];
Ahmat[8][2][3]=Ai08[2][3];
Ahmat[8][2][4]=Ai08[2][4];

Ahmat[8][3][1]=Ai08[3][1];
Ahmat[8][3][2]=Ai08[3][2];
Ahmat[8][3][3]=Ai08[3][3];
Ahmat[8][3][4]=Ai08[3][4];

Ahmat[8][4][1]=0.;
Ahmat[8][4][2]=0.;
Ahmat[8][4][3]=0.;
Ahmat[8][4][4]=1;


