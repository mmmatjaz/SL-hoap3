/* Need [n_joints+1]x[3+1] matrices: Xorigin,Xmcog,Xaxis, and Xlink[nLinks+1][3+1] */

/* sine and cosine precomputation */
sstate1th=Sin(state[1].th);
cstate1th=Cos(state[1].th);

sstate2th=Sin(state[2].th);
cstate2th=Cos(state[2].th);

sstate3th=Sin(state[3].th);
cstate3th=Cos(state[3].th);


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


Hi01[2][1]=sstate1th;
Hi01[2][2]=cstate1th;

Hi01[3][1]=-cstate1th;
Hi01[3][2]=sstate1th;


Hi12[1][1]=cstate2th;
Hi12[1][2]=-sstate2th;
Hi12[1][4]=l1;

Hi12[2][1]=sstate2th;
Hi12[2][2]=cstate2th;


Hi23[1][1]=cstate3th;
Hi23[1][2]=-sstate3th;
Hi23[1][4]=l2;

Hi23[2][1]=sstate3th;
Hi23[2][2]=cstate3th;


Hi34[1][1]=rceff1a2*rceff1a3;
Hi34[1][2]=-(rceff1a2*rseff1a3);
Hi34[1][3]=rseff1a2;
Hi34[1][4]=eff[1].x[1];

Hi34[2][1]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
Hi34[2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
Hi34[2][3]=-(rceff1a2*rseff1a1);
Hi34[2][4]=eff[1].x[2];

Hi34[3][1]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;
Hi34[3][2]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;
Hi34[3][3]=rceff1a1*rceff1a2;
Hi34[3][4]=eff[1].x[3];



/* per link inverse homogeneous rotation matrices */
Ai01[1][1]=Hi00[1][2]*Hi01[2][1] + Hi00[1][3]*Hi01[3][1];
Ai01[1][2]=Hi00[1][2]*Hi01[2][2] + Hi00[1][3]*Hi01[3][2];
Ai01[1][3]=Hi00[1][1];
Ai01[1][4]=Hi00[1][4];

Ai01[2][1]=Hi00[2][2]*Hi01[2][1] + Hi00[2][3]*Hi01[3][1];
Ai01[2][2]=Hi00[2][2]*Hi01[2][2] + Hi00[2][3]*Hi01[3][2];
Ai01[2][3]=Hi00[2][1];
Ai01[2][4]=Hi00[2][4];

Ai01[3][1]=Hi00[3][2]*Hi01[2][1] + Hi00[3][3]*Hi01[3][1];
Ai01[3][2]=Hi00[3][2]*Hi01[2][2] + Hi00[3][3]*Hi01[3][2];
Ai01[3][3]=Hi00[3][1];
Ai01[3][4]=Hi00[3][4];


Ai02[1][1]=Ai01[1][1]*Hi12[1][1] + Ai01[1][2]*Hi12[2][1];
Ai02[1][2]=Ai01[1][1]*Hi12[1][2] + Ai01[1][2]*Hi12[2][2];
Ai02[1][3]=Ai01[1][3];
Ai02[1][4]=Ai01[1][4] + Ai01[1][1]*Hi12[1][4];

Ai02[2][1]=Ai01[2][1]*Hi12[1][1] + Ai01[2][2]*Hi12[2][1];
Ai02[2][2]=Ai01[2][1]*Hi12[1][2] + Ai01[2][2]*Hi12[2][2];
Ai02[2][3]=Ai01[2][3];
Ai02[2][4]=Ai01[2][4] + Ai01[2][1]*Hi12[1][4];

Ai02[3][1]=Ai01[3][1]*Hi12[1][1] + Ai01[3][2]*Hi12[2][1];
Ai02[3][2]=Ai01[3][1]*Hi12[1][2] + Ai01[3][2]*Hi12[2][2];
Ai02[3][3]=Ai01[3][3];
Ai02[3][4]=Ai01[3][4] + Ai01[3][1]*Hi12[1][4];


Ai03[1][1]=Ai02[1][1]*Hi23[1][1] + Ai02[1][2]*Hi23[2][1];
Ai03[1][2]=Ai02[1][1]*Hi23[1][2] + Ai02[1][2]*Hi23[2][2];
Ai03[1][3]=Ai02[1][3];
Ai03[1][4]=Ai02[1][4] + Ai02[1][1]*Hi23[1][4];

Ai03[2][1]=Ai02[2][1]*Hi23[1][1] + Ai02[2][2]*Hi23[2][1];
Ai03[2][2]=Ai02[2][1]*Hi23[1][2] + Ai02[2][2]*Hi23[2][2];
Ai03[2][3]=Ai02[2][3];
Ai03[2][4]=Ai02[2][4] + Ai02[2][1]*Hi23[1][4];

Ai03[3][1]=Ai02[3][1]*Hi23[1][1] + Ai02[3][2]*Hi23[2][1];
Ai03[3][2]=Ai02[3][1]*Hi23[1][2] + Ai02[3][2]*Hi23[2][2];
Ai03[3][3]=Ai02[3][3];
Ai03[3][4]=Ai02[3][4] + Ai02[3][1]*Hi23[1][4];


Ai04[1][1]=Ai03[1][1]*Hi34[1][1] + Ai03[1][2]*Hi34[2][1] + Ai03[1][3]*Hi34[3][1];
Ai04[1][2]=Ai03[1][1]*Hi34[1][2] + Ai03[1][2]*Hi34[2][2] + Ai03[1][3]*Hi34[3][2];
Ai04[1][3]=Ai03[1][1]*Hi34[1][3] + Ai03[1][2]*Hi34[2][3] + Ai03[1][3]*Hi34[3][3];
Ai04[1][4]=Ai03[1][4] + Ai03[1][1]*Hi34[1][4] + Ai03[1][2]*Hi34[2][4] + Ai03[1][3]*Hi34[3][4];

Ai04[2][1]=Ai03[2][1]*Hi34[1][1] + Ai03[2][2]*Hi34[2][1] + Ai03[2][3]*Hi34[3][1];
Ai04[2][2]=Ai03[2][1]*Hi34[1][2] + Ai03[2][2]*Hi34[2][2] + Ai03[2][3]*Hi34[3][2];
Ai04[2][3]=Ai03[2][1]*Hi34[1][3] + Ai03[2][2]*Hi34[2][3] + Ai03[2][3]*Hi34[3][3];
Ai04[2][4]=Ai03[2][4] + Ai03[2][1]*Hi34[1][4] + Ai03[2][2]*Hi34[2][4] + Ai03[2][3]*Hi34[3][4];

Ai04[3][1]=Ai03[3][1]*Hi34[1][1] + Ai03[3][2]*Hi34[2][1] + Ai03[3][3]*Hi34[3][1];
Ai04[3][2]=Ai03[3][1]*Hi34[1][2] + Ai03[3][2]*Hi34[2][2] + Ai03[3][3]*Hi34[3][2];
Ai04[3][3]=Ai03[3][1]*Hi34[1][3] + Ai03[3][2]*Hi34[2][3] + Ai03[3][3]*Hi34[3][3];
Ai04[3][4]=Ai03[3][4] + Ai03[3][1]*Hi34[1][4] + Ai03[3][2]*Hi34[2][4] + Ai03[3][3]*Hi34[3][4];



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

Ahmat[0][1][1]=Ai01[1][1];
Ahmat[0][1][2]=Ai01[1][2];
Ahmat[0][1][3]=Ai01[1][3];
Ahmat[0][1][4]=Ai01[1][4];

Ahmat[0][2][1]=Ai01[2][1];
Ahmat[0][2][2]=Ai01[2][2];
Ahmat[0][2][3]=Ai01[2][3];
Ahmat[0][2][4]=Ai01[2][4];

Ahmat[0][3][1]=Ai01[3][1];
Ahmat[0][3][2]=Ai01[3][2];
Ahmat[0][3][3]=Ai01[3][3];
Ahmat[0][3][4]=Ai01[3][4];

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

/* link 1: {l1, 0, 0} */
Xlink[1][1]=Ai02[1][4];
Xlink[1][2]=Ai02[2][4];
Xlink[1][3]=Ai02[3][4];

Ahmat[1][1][1]=Ai02[1][1];
Ahmat[1][1][2]=Ai02[1][2];
Ahmat[1][1][3]=Ai02[1][3];
Ahmat[1][1][4]=Ai02[1][4];

Ahmat[1][2][1]=Ai02[2][1];
Ahmat[1][2][2]=Ai02[2][2];
Ahmat[1][2][3]=Ai02[2][3];
Ahmat[1][2][4]=Ai02[2][4];

Ahmat[1][3][1]=Ai02[3][1];
Ahmat[1][3][2]=Ai02[3][2];
Ahmat[1][3][3]=Ai02[3][3];
Ahmat[1][3][4]=Ai02[3][4];

Ahmat[1][4][1]=0.;
Ahmat[1][4][2]=0.;
Ahmat[1][4][3]=0.;
Ahmat[1][4][4]=1;


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

/* link 2: {l2, 0, 0} */
Xlink[2][1]=Ai03[1][4];
Xlink[2][2]=Ai03[2][4];
Xlink[2][3]=Ai03[3][4];

Ahmat[2][1][1]=Ai03[1][1];
Ahmat[2][1][2]=Ai03[1][2];
Ahmat[2][1][3]=Ai03[1][3];
Ahmat[2][1][4]=Ai03[1][4];

Ahmat[2][2][1]=Ai03[2][1];
Ahmat[2][2][2]=Ai03[2][2];
Ahmat[2][2][3]=Ai03[2][3];
Ahmat[2][2][4]=Ai03[2][4];

Ahmat[2][3][1]=Ai03[3][1];
Ahmat[2][3][2]=Ai03[3][2];
Ahmat[2][3][3]=Ai03[3][3];
Ahmat[2][3][4]=Ai03[3][4];

Ahmat[2][4][1]=0.;
Ahmat[2][4][2]=0.;
Ahmat[2][4][3]=0.;
Ahmat[2][4][4]=1;


/* link 3: {eff$1$$x[[1]], eff$1$$x[[2]], eff$1$$x[[3]]} */
Xlink[3][1]=Ai04[1][4];
Xlink[3][2]=Ai04[2][4];
Xlink[3][3]=Ai04[3][4];

Ahmat[3][1][1]=Ai04[1][1];
Ahmat[3][1][2]=Ai04[1][2];
Ahmat[3][1][3]=Ai04[1][3];
Ahmat[3][1][4]=Ai04[1][4];

Ahmat[3][2][1]=Ai04[2][1];
Ahmat[3][2][2]=Ai04[2][2];
Ahmat[3][2][3]=Ai04[2][3];
Ahmat[3][2][4]=Ai04[2][4];

Ahmat[3][3][1]=Ai04[3][1];
Ahmat[3][3][2]=Ai04[3][2];
Ahmat[3][3][3]=Ai04[3][3];
Ahmat[3][3][4]=Ai04[3][4];

Ahmat[3][4][1]=0.;
Ahmat[3][4][2]=0.;
Ahmat[3][4][3]=0.;
Ahmat[3][4][4]=1;


