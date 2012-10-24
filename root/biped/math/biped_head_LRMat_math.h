/* this function assumes that the array XRot[n_links+1][3+1][3+1]
 is passed as an argument */

/* sine and cosine precomputation */
sstate15th=Sin(state[15].th);
cstate15th=Cos(state[15].th);

sstate16th=Sin(state[16].th);
cstate16th=Cos(state[16].th);

sstate9th=Sin(state[9].th);
cstate9th=Cos(state[9].th);

sstate8th=Sin(state[8].th);
cstate8th=Cos(state[8].th);

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

sstate2th=Sin(state[2].th);
cstate2th=Cos(state[2].th);

sstate1th=Sin(state[1].th);
cstate1th=Cos(state[1].th);

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













rseff2a1=Sin(eff[2].a[1]);
rceff2a1=Cos(eff[2].a[1]);

rseff2a2=Sin(eff[2].a[2]);
rceff2a2=Cos(eff[2].a[2]);

rseff2a3=Sin(eff[2].a[3]);
rceff2a3=Cos(eff[2].a[3]);



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


Si01[1][1]=cstate15th;
Si01[1][2]=-sstate15th;

Si01[2][1]=-sstate15th;
Si01[2][2]=-cstate15th;


Si12[1][1]=cstate16th;
Si12[1][2]=-sstate16th;

Si12[3][1]=sstate16th;
Si12[3][2]=cstate16th;



Si04[1][1]=cstate9th;
Si04[1][2]=-sstate9th;

Si04[3][1]=-sstate9th;
Si04[3][2]=-cstate9th;


Si45[2][1]=sstate8th;
Si45[2][2]=cstate8th;

Si45[3][1]=-cstate8th;
Si45[3][2]=sstate8th;


Si56[1][1]=0.963630453208623*cstate10th;
Si56[1][2]=-0.963630453208623*sstate10th;

Si56[2][1]=0.26723837607825685*cstate10th;
Si56[2][2]=-0.26723837607825685*sstate10th;

Si56[3][1]=-sstate10th;
Si56[3][2]=-cstate10th;


Si67[1][1]=0.963630453208623*cstate11th - 0.26723837607825685*sstate11th;
Si67[1][2]=-0.26723837607825685*cstate11th - 0.963630453208623*sstate11th;

Si67[3][1]=-0.26723837607825685*cstate11th - 0.963630453208623*sstate11th;
Si67[3][2]=-0.963630453208623*cstate11th + 0.26723837607825685*sstate11th;


Si78[1][1]=cstate12th;
Si78[1][2]=-sstate12th;

Si78[3][1]=sstate12th;
Si78[3][2]=cstate12th;


Si89[1][1]=cstate13th;
Si89[1][2]=-sstate13th;

Si89[3][1]=sstate13th;
Si89[3][2]=cstate13th;


Si910[2][1]=sstate14th;
Si910[2][2]=cstate14th;

Si910[3][1]=cstate14th;
Si910[3][2]=-sstate14th;






Si1015[1][1]=rceff1a2*rceff1a3;
Si1015[1][2]=-(rceff1a2*rseff1a3);
Si1015[1][3]=rseff1a2;

Si1015[2][1]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
Si1015[2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
Si1015[2][3]=-(rceff1a2*rseff1a1);

Si1015[3][1]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;
Si1015[3][2]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;
Si1015[3][3]=rceff1a1*rceff1a2;


Si016[1][1]=cstate2th;
Si016[1][2]=-sstate2th;

Si016[3][1]=sstate2th;
Si016[3][2]=cstate2th;


Si1617[2][1]=sstate1th;
Si1617[2][2]=cstate1th;

Si1617[3][1]=-cstate1th;
Si1617[3][2]=sstate1th;


Si1718[1][1]=0.963630453208623*cstate3th;
Si1718[1][2]=-0.963630453208623*sstate3th;

Si1718[2][1]=0.26723837607825685*cstate3th;
Si1718[2][2]=-0.26723837607825685*sstate3th;

Si1718[3][1]=-sstate3th;
Si1718[3][2]=-cstate3th;


Si1819[1][1]=-0.9636304532086231*cstate4th + 0.2672383760782568*sstate4th;
Si1819[1][2]=0.2672383760782568*cstate4th + 0.9636304532086231*sstate4th;

Si1819[3][1]=0.2672383760782568*cstate4th + 0.9636304532086231*sstate4th;
Si1819[3][2]=0.9636304532086231*cstate4th - 0.2672383760782568*sstate4th;


Si1920[1][1]=cstate5th;
Si1920[1][2]=-sstate5th;

Si1920[3][1]=-sstate5th;
Si1920[3][2]=-cstate5th;


Si2021[1][1]=cstate6th;
Si2021[1][2]=-sstate6th;

Si2021[3][1]=-sstate6th;
Si2021[3][2]=-cstate6th;


Si2122[2][1]=sstate7th;
Si2122[2][2]=cstate7th;

Si2122[3][1]=-cstate7th;
Si2122[3][2]=sstate7th;






Si2227[1][1]=rceff2a2*rceff2a3;
Si2227[1][2]=-(rceff2a2*rseff2a3);
Si2227[1][3]=rseff2a2;

Si2227[2][1]=rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3;
Si2227[2][2]=rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3;
Si2227[2][3]=-(rceff2a2*rseff2a1);

Si2227[3][1]=-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3;
Si2227[3][2]=rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3;
Si2227[3][3]=rceff2a1*rceff2a2;



/* calculation of rotation matrices */
v[1][1]=Si12[1][1];
v[1][3]=-Si12[1][2];

v[3][1]=Si12[3][1];
v[3][3]=-Si12[3][2];


vv[1][1]=Si01[1][1]*v[1][1];
vv[1][2]=-Si01[1][2];
vv[1][3]=Si01[1][1]*v[1][3];

vv[2][1]=Si01[2][1]*v[1][1];
vv[2][2]=-Si01[2][2];
vv[2][3]=Si01[2][1]*v[1][3];

vv[3][1]=-v[3][1];
vv[3][3]=-v[3][3];


v[1][1]=Si00[1][1]*vv[1][1] + Si00[1][2]*vv[2][1] + Si00[1][3]*vv[3][1];
v[1][2]=Si00[1][1]*vv[1][2] + Si00[1][2]*vv[2][2];
v[1][3]=Si00[1][1]*vv[1][3] + Si00[1][2]*vv[2][3] + Si00[1][3]*vv[3][3];

v[2][1]=Si00[2][1]*vv[1][1] + Si00[2][2]*vv[2][1] + Si00[2][3]*vv[3][1];
v[2][2]=Si00[2][1]*vv[1][2] + Si00[2][2]*vv[2][2];
v[2][3]=Si00[2][1]*vv[1][3] + Si00[2][2]*vv[2][3] + Si00[2][3]*vv[3][3];

v[3][1]=Si00[3][1]*vv[1][1] + Si00[3][2]*vv[2][1] + Si00[3][3]*vv[3][1];
v[3][2]=Si00[3][1]*vv[1][2] + Si00[3][2]*vv[2][2];
v[3][3]=Si00[3][1]*vv[1][3] + Si00[3][2]*vv[2][3] + Si00[3][3]*vv[3][3];


/* Rotation Matrix: 120 */
XRot[1][1][1]=v[1][1];
XRot[1][1][2]=v[1][2];
XRot[1][1][3]=v[1][3];

XRot[1][2][1]=v[2][1];
XRot[1][2][2]=v[2][2];
XRot[1][2][3]=v[2][3];

XRot[1][3][1]=v[3][1];
XRot[1][3][2]=v[3][2];
XRot[1][3][3]=v[3][3];


