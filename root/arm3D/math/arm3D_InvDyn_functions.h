
static void
arm3D_InvDynfunc1(void)
     {
/* rotation matrices */

S10[1][2]=sstate1th;
S10[1][3]=-cstate1th;

S10[2][2]=cstate1th;
S10[2][3]=sstate1th;


S21[1][1]=cstate2th;
S21[1][2]=sstate2th;

S21[2][1]=-sstate2th;
S21[2][2]=cstate2th;


S32[1][1]=cstate3th;
S32[1][2]=sstate3th;

S32[2][1]=-sstate3th;
S32[2][2]=cstate3th;


S43[1][1]=rceff1a2*rceff1a3;
S43[1][2]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
S43[1][3]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;

S43[2][1]=-(rceff1a2*rseff1a3);
S43[2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
S43[2][3]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;

S43[3][1]=rseff1a2;
S43[3][2]=-(rceff1a2*rseff1a1);
S43[3][3]=rceff1a1*rceff1a2;




}


static void
arm3D_InvDynfunc2(void)
     {
/* inverse rotation matrices */

Si01[2][1]=sstate1th;
Si01[2][2]=cstate1th;

Si01[3][1]=-cstate1th;
Si01[3][2]=sstate1th;


Si12[1][1]=cstate2th;
Si12[1][2]=-sstate2th;

Si12[2][1]=sstate2th;
Si12[2][2]=cstate2th;


Si23[1][1]=cstate3th;
Si23[1][2]=-sstate3th;

Si23[2][1]=sstate3th;
Si23[2][2]=cstate3th;


Si34[1][1]=rceff1a2*rceff1a3;
Si34[1][2]=-(rceff1a2*rseff1a3);
Si34[1][3]=rseff1a2;

Si34[2][1]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
Si34[2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
Si34[2][3]=-(rceff1a2*rseff1a1);

Si34[3][1]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;
Si34[3][2]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;
Si34[3][3]=rceff1a1*rceff1a2;




}


static void
arm3D_InvDynfunc3(void)
     {
/* rotation matrices from global to link coordinates */
SG10[1][2]=S10[1][2];
SG10[1][3]=S10[1][3];

SG10[2][2]=S10[2][2];
SG10[2][3]=S10[2][3];


SG20[1][2]=S21[1][1]*SG10[1][2] + S21[1][2]*SG10[2][2];
SG20[1][3]=S21[1][1]*SG10[1][3] + S21[1][2]*SG10[2][3];

SG20[2][2]=S21[2][1]*SG10[1][2] + S21[2][2]*SG10[2][2];
SG20[2][3]=S21[2][1]*SG10[1][3] + S21[2][2]*SG10[2][3];


SG30[1][2]=S32[1][1]*SG20[1][2] + S32[1][2]*SG20[2][2];
SG30[1][3]=S32[1][1]*SG20[1][3] + S32[1][2]*SG20[2][3];

SG30[2][2]=S32[2][1]*SG20[1][2] + S32[2][2]*SG20[2][2];
SG30[2][3]=S32[2][1]*SG20[1][3] + S32[2][2]*SG20[2][3];


SG40[1][1]=S43[1][3];
SG40[1][2]=S43[1][1]*SG30[1][2] + S43[1][2]*SG30[2][2];
SG40[1][3]=S43[1][1]*SG30[1][3] + S43[1][2]*SG30[2][3];

SG40[2][1]=S43[2][3];
SG40[2][2]=S43[2][1]*SG30[1][2] + S43[2][2]*SG30[2][2];
SG40[2][3]=S43[2][1]*SG30[1][3] + S43[2][2]*SG30[2][3];

SG40[3][1]=S43[3][3];
SG40[3][2]=S43[3][1]*SG30[1][2] + S43[3][2]*SG30[2][2];
SG40[3][3]=S43[3][1]*SG30[1][3] + S43[3][2]*SG30[2][3];




}


static void
arm3D_InvDynfunc4(void)
     {
/* velocity vectors */
v1[3]=state[1].thd;

v2[3]=state[2].thd + v1[3];
v2[4]=l1*v1[3]*S21[1][2];
v2[5]=l1*v1[3]*S21[2][2];

v3[3]=state[3].thd + v2[3];
v3[4]=v2[4]*S32[1][1] + l2*v2[3]*S32[1][2] + v2[5]*S32[1][2];
v3[5]=v2[4]*S32[2][1] + l2*v2[3]*S32[2][2] + v2[5]*S32[2][2];

v4[1]=v3[3]*S43[1][3];
v4[2]=v3[3]*S43[2][3];
v4[3]=v3[3]*S43[3][3];
v4[4]=v3[4]*S43[1][1] + v3[5]*S43[1][2] + v3[3]*(-(eff[1].x[2]*S43[1][1]) + eff[1].x[1]*S43[1][2]);
v4[5]=v3[4]*S43[2][1] + v3[5]*S43[2][2] + v3[3]*(-(eff[1].x[2]*S43[2][1]) + eff[1].x[1]*S43[2][2]);
v4[6]=v3[4]*S43[3][1] + v3[5]*S43[3][2] + v3[3]*(-(eff[1].x[2]*S43[3][1]) + eff[1].x[1]*S43[3][2]);



}


static void
arm3D_InvDynfunc5(void)
     {
/* acceleration vectors */
a0[4]=0;
a0[5]=0;
a0[6]=gravity;

a1[3]=state[1].thdd;
a1[4]=a0[5]*S10[1][2] + a0[6]*S10[1][3];
a1[5]=a0[5]*S10[2][2] + a0[6]*S10[2][3];
a1[6]=a0[4];

a2[3]=state[2].thdd + a1[3];
a2[4]=state[2].thd*v2[5] + a1[4]*S21[1][1] + l1*a1[3]*S21[1][2] + a1[5]*S21[1][2];
a2[5]=-(state[2].thd*v2[4]) + a1[4]*S21[2][1] + l1*a1[3]*S21[2][2] + a1[5]*S21[2][2];
a2[6]=a1[6];

a3[3]=state[3].thdd + a2[3];
a3[4]=state[3].thd*v3[5] + a2[4]*S32[1][1] + l2*a2[3]*S32[1][2] + a2[5]*S32[1][2];
a3[5]=-(state[3].thd*v3[4]) + a2[4]*S32[2][1] + l2*a2[3]*S32[2][2] + a2[5]*S32[2][2];
a3[6]=a2[6];

a4[1]=a3[3]*S43[1][3];
a4[2]=a3[3]*S43[2][3];
a4[3]=a3[3]*S43[3][3];
a4[4]=a3[4]*S43[1][1] + a3[5]*S43[1][2] + a3[3]*(-(eff[1].x[2]*S43[1][1]) + eff[1].x[1]*S43[1][2]) + a3[6]*S43[1][3];
a4[5]=a3[4]*S43[2][1] + a3[5]*S43[2][2] + a3[3]*(-(eff[1].x[2]*S43[2][1]) + eff[1].x[1]*S43[2][2]) + a3[6]*S43[2][3];
a4[6]=a3[4]*S43[3][1] + a3[5]*S43[3][2] + a3[3]*(-(eff[1].x[2]*S43[3][1]) + eff[1].x[1]*S43[3][2]) + a3[6]*S43[3][3];



}


static void
arm3D_InvDynfunc6(void)
     {
/* net forces and external forces for each joint */
fnet1[1]=links[1].m*a1[4] - a1[3]*links[1].mcm[2] - links[1].mcm[1]*Power(v1[3],2);
fnet1[2]=links[1].m*a1[5] + a1[3]*links[1].mcm[1] - links[1].mcm[2]*Power(v1[3],2);
fnet1[3]=links[1].m*a1[6];
fnet1[4]=a1[6]*links[1].mcm[2] - a1[5]*links[1].mcm[3] + a1[3]*links[1].inertia[1][3] - Power(v1[3],2)*links[1].inertia[2][3];
fnet1[5]=-(a1[6]*links[1].mcm[1]) + a1[4]*links[1].mcm[3] + Power(v1[3],2)*links[1].inertia[1][3] + a1[3]*links[1].inertia[2][3];
fnet1[6]=a1[5]*links[1].mcm[1] - a1[4]*links[1].mcm[2] + a1[3]*links[1].inertia[3][3];

fnet2[1]=links[2].m*a2[4] - a2[3]*links[2].mcm[2] - links[2].mcm[1]*Power(v2[3],2) - links[2].m*v2[3]*v2[5];
fnet2[2]=links[2].m*a2[5] + a2[3]*links[2].mcm[1] - links[2].mcm[2]*Power(v2[3],2) + links[2].m*v2[3]*v2[4];
fnet2[3]=links[2].m*a2[6];
fnet2[4]=a2[6]*links[2].mcm[2] - a2[5]*links[2].mcm[3] - links[2].mcm[3]*v2[3]*v2[4] + a2[3]*links[2].inertia[1][3] - Power(v2[3],2)*links[2].inertia[2][3];
fnet2[5]=-(a2[6]*links[2].mcm[1]) + a2[4]*links[2].mcm[3] - links[2].mcm[3]*v2[3]*v2[5] + Power(v2[3],2)*links[2].inertia[1][3] + a2[3]*links[2].inertia[2][3];
fnet2[6]=a2[5]*links[2].mcm[1] - a2[4]*links[2].mcm[2] + v2[3]*(links[2].mcm[1]*v2[4] + links[2].mcm[2]*v2[5]) + a2[3]*links[2].inertia[3][3];

fnet3[1]=links[3].m*a3[4] - a3[3]*links[3].mcm[2] - links[3].mcm[1]*Power(v3[3],2) - links[3].m*v3[3]*v3[5];
fnet3[2]=links[3].m*a3[5] + a3[3]*links[3].mcm[1] - links[3].mcm[2]*Power(v3[3],2) + links[3].m*v3[3]*v3[4];
fnet3[3]=links[3].m*a3[6];
fnet3[4]=a3[6]*links[3].mcm[2] - a3[5]*links[3].mcm[3] - links[3].mcm[3]*v3[3]*v3[4] + a3[3]*links[3].inertia[1][3] - Power(v3[3],2)*links[3].inertia[2][3];
fnet3[5]=-(a3[6]*links[3].mcm[1]) + a3[4]*links[3].mcm[3] - links[3].mcm[3]*v3[3]*v3[5] + Power(v3[3],2)*links[3].inertia[1][3] + a3[3]*links[3].inertia[2][3];
fnet3[6]=a3[5]*links[3].mcm[1] - a3[4]*links[3].mcm[2] + v3[3]*(links[3].mcm[1]*v3[4] + links[3].mcm[2]*v3[5]) + a3[3]*links[3].inertia[3][3];

fnet4[1]=eff[1].m*a4[4] - a4[3]*eff[1].mcm[2] + a4[2]*eff[1].mcm[3] - eff[1].mcm[1]*Power(v4[2],2) - eff[1].mcm[1]*Power(v4[3],2) + v4[1]*(eff[1].mcm[2]*v4[2] + eff[1].mcm[3]*v4[3]) - eff[1].m*v4[3]*v4[5] + eff[1].m*v4[2]*v4[6];
fnet4[2]=eff[1].m*a4[5] + a4[3]*eff[1].mcm[1] - a4[1]*eff[1].mcm[3] - eff[1].mcm[2]*Power(v4[1],2) - eff[1].mcm[2]*Power(v4[3],2) + v4[2]*(eff[1].mcm[1]*v4[1] + eff[1].mcm[3]*v4[3]) + eff[1].m*v4[3]*v4[4] - eff[1].m*v4[1]*v4[6];
fnet4[3]=eff[1].m*a4[6] - a4[2]*eff[1].mcm[1] + a4[1]*eff[1].mcm[2] - eff[1].mcm[3]*Power(v4[1],2) - eff[1].mcm[3]*Power(v4[2],2) + (eff[1].mcm[1]*v4[1] + eff[1].mcm[2]*v4[2])*v4[3] - eff[1].m*v4[2]*v4[4] + eff[1].m*v4[1]*v4[5];
fnet4[4]=a4[6]*eff[1].mcm[2] - a4[5]*eff[1].mcm[3] + (-(eff[1].mcm[2]*v4[2]) - eff[1].mcm[3]*v4[3])*v4[4] - eff[1].mcm[1]*v4[2]*v4[5] - eff[1].mcm[1]*v4[3]*v4[6] + (eff[1].mcm[1]*v4[3] + eff[1].m*v4[5])*v4[6] + v4[5]*(eff[1].mcm[1]*v4[2] - eff[1].m*v4[6]) + v4[1]*(eff[1].mcm[2]*v4[5] + eff[1].mcm[3]*v4[6]);
fnet4[5]=-(a4[6]*eff[1].mcm[1]) + a4[4]*eff[1].mcm[3] - eff[1].mcm[2]*v4[1]*v4[4] + (-(eff[1].mcm[1]*v4[1]) - eff[1].mcm[3]*v4[3])*v4[5] - eff[1].mcm[2]*v4[3]*v4[6] + (eff[1].mcm[2]*v4[3] - eff[1].m*v4[4])*v4[6] + v4[4]*(eff[1].mcm[2]*v4[1] + eff[1].m*v4[6]) + v4[2]*(eff[1].mcm[1]*v4[4] + eff[1].mcm[3]*v4[6]);
fnet4[6]=a4[5]*eff[1].mcm[1] - a4[4]*eff[1].mcm[2] - eff[1].mcm[3]*v4[1]*v4[4] - eff[1].mcm[3]*v4[2]*v4[5] + (eff[1].mcm[3]*v4[2] + eff[1].m*v4[4])*v4[5] + v4[4]*(eff[1].mcm[3]*v4[1] - eff[1].m*v4[5]) + v4[3]*(eff[1].mcm[1]*v4[4] + eff[1].mcm[2]*v4[5]) + (-(eff[1].mcm[1]*v4[1]) - eff[1].mcm[2]*v4[2])*v4[6];




}


static void
arm3D_InvDynfunc7(void)
     {
/* total forces and external forces for each joint */
f4[1]=fnet4[1];
f4[2]=fnet4[2];
f4[3]=fnet4[3];
f4[4]=fnet4[4];
f4[5]=fnet4[5];
f4[6]=fnet4[6];

f3[1]=fnet3[1] + f4[1]*Si34[1][1] + f4[2]*Si34[1][2] + f4[3]*Si34[1][3];
f3[2]=fnet3[2] + f4[1]*Si34[2][1] + f4[2]*Si34[2][2] + f4[3]*Si34[2][3];
f3[3]=fnet3[3] + f4[1]*Si34[3][1] + f4[2]*Si34[3][2] + f4[3]*Si34[3][3];
f3[4]=fnet3[4] + f4[4]*Si34[1][1] + f4[5]*Si34[1][2] + f4[6]*Si34[1][3] + f4[1]*(-(eff[1].x[3]*Si34[2][1]) + eff[1].x[2]*Si34[3][1]) + f4[2]*(-(eff[1].x[3]*Si34[2][2]) + eff[1].x[2]*Si34[3][2]) + f4[3]*(-(eff[1].x[3]*Si34[2][3]) + eff[1].x[2]*Si34[3][3]);
f3[5]=fnet3[5] + f4[4]*Si34[2][1] + f4[5]*Si34[2][2] + f4[6]*Si34[2][3] + f4[1]*(eff[1].x[3]*Si34[1][1] - eff[1].x[1]*Si34[3][1]) + f4[2]*(eff[1].x[3]*Si34[1][2] - eff[1].x[1]*Si34[3][2]) + f4[3]*(eff[1].x[3]*Si34[1][3] - eff[1].x[1]*Si34[3][3]);
f3[6]=fnet3[6] + f4[1]*(-(eff[1].x[2]*Si34[1][1]) + eff[1].x[1]*Si34[2][1]) + f4[2]*(-(eff[1].x[2]*Si34[1][2]) + eff[1].x[1]*Si34[2][2]) + f4[3]*(-(eff[1].x[2]*Si34[1][3]) + eff[1].x[1]*Si34[2][3]) + f4[4]*Si34[3][1] + f4[5]*Si34[3][2] + f4[6]*Si34[3][3];

f2[1]=fnet2[1] + f3[1]*Si23[1][1] + f3[2]*Si23[1][2];
f2[2]=fnet2[2] + f3[1]*Si23[2][1] + f3[2]*Si23[2][2];
f2[3]=f3[3] + fnet2[3];
f2[4]=fnet2[4] + f3[4]*Si23[1][1] + f3[5]*Si23[1][2];
f2[5]=-(l2*f3[3]) + fnet2[5] + f3[4]*Si23[2][1] + f3[5]*Si23[2][2];
f2[6]=f3[6] + fnet2[6] + l2*f3[1]*Si23[2][1] + l2*f3[2]*Si23[2][2];

f1[1]=fnet1[1] + f2[1]*Si12[1][1] + f2[2]*Si12[1][2];
f1[2]=fnet1[2] + f2[1]*Si12[2][1] + f2[2]*Si12[2][2];
f1[3]=f2[3] + fnet1[3];
f1[4]=fnet1[4] + f2[4]*Si12[1][1] + f2[5]*Si12[1][2];
f1[5]=-(l1*f2[3]) + fnet1[5] + f2[4]*Si12[2][1] + f2[5]*Si12[2][2];
f1[6]=f2[6] + fnet1[6] + l1*f2[1]*Si12[2][1] + l1*f2[2]*Si12[2][2];

f0[1]=f1[3];
f0[2]=f1[1]*Si01[2][1] + f1[2]*Si01[2][2];
f0[3]=f1[1]*Si01[3][1] + f1[2]*Si01[3][2];
f0[4]=f1[6];
f0[5]=f1[4]*Si01[2][1] + f1[5]*Si01[2][2];
f0[6]=f1[4]*Si01[3][1] + f1[5]*Si01[3][2];




}

