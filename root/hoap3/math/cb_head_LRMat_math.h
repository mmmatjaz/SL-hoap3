/* this function assumes that the array XRot[n_links+1][3+1][3+1]
 is passed as an argument */

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


Si01[1][1]=cstate29th;
Si01[1][2]=-sstate29th;

Si01[2][1]=-sstate29th;
Si01[2][2]=-cstate29th;


Si12[1][1]=-sstate30th;
Si12[1][2]=-cstate30th;

Si12[3][1]=cstate30th;
Si12[3][2]=-sstate30th;


Si23[1][1]=cstate31th;
Si23[1][2]=-sstate31th;

Si23[3][1]=-sstate31th;
Si23[3][2]=-cstate31th;


Si34[1][1]=0.7071067811865475*cstate1th;
Si34[1][2]=-0.7071067811865475*sstate1th;

Si34[2][1]=-sstate1th;
Si34[2][2]=-cstate1th;

Si34[3][1]=0.7071067811865475*cstate1th;
Si34[3][2]=-0.7071067811865475*sstate1th;


Si45[1][1]=-0.7071067811865475*cstate2th - 0.7071067811865475*sstate2th;
Si45[1][2]=-0.7071067811865475*cstate2th + 0.7071067811865475*sstate2th;

Si45[3][1]=0.7071067811865475*cstate2th - 0.7071067811865475*sstate2th;
Si45[3][2]=-0.7071067811865475*cstate2th - 0.7071067811865475*sstate2th;


Si56[1][1]=cstate3th;
Si56[1][2]=-sstate3th;

Si56[3][1]=-sstate3th;
Si56[3][2]=-cstate3th;


Si67[2][1]=cstate4th;
Si67[2][2]=-sstate4th;

Si67[3][1]=sstate4th;
Si67[3][2]=cstate4th;


Si78[1][1]=cstate5th;
Si78[1][2]=-sstate5th;

Si78[3][1]=-sstate5th;
Si78[3][2]=-cstate5th;


Si89[2][1]=sstate6th;
Si89[2][2]=cstate6th;

Si89[3][1]=-cstate6th;
Si89[3][2]=sstate6th;


Si910[1][1]=cstate7th;
Si910[1][2]=-sstate7th;

Si910[3][1]=sstate7th;
Si910[3][2]=cstate7th;


Si1011[1][1]=rceff2a2*rceff2a3;
Si1011[1][2]=-(rceff2a2*rseff2a3);
Si1011[1][3]=rseff2a2;

Si1011[2][1]=rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3;
Si1011[2][2]=rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3;
Si1011[2][3]=-(rceff2a2*rseff2a1);

Si1011[3][1]=-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3;
Si1011[3][2]=rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3;
Si1011[3][3]=rceff2a1*rceff2a2;


Si312[1][1]=0.7071067811865475*cstate8th;
Si312[1][2]=-0.7071067811865475*sstate8th;

Si312[2][1]=-sstate8th;
Si312[2][2]=-cstate8th;

Si312[3][1]=-0.7071067811865475*cstate8th;
Si312[3][2]=0.7071067811865475*sstate8th;


Si1213[1][1]=-0.7071067811865475*cstate9th - 0.7071067811865475*sstate9th;
Si1213[1][2]=-0.7071067811865475*cstate9th + 0.7071067811865475*sstate9th;

Si1213[3][1]=-0.7071067811865475*cstate9th + 0.7071067811865475*sstate9th;
Si1213[3][2]=0.7071067811865475*cstate9th + 0.7071067811865475*sstate9th;


Si1314[1][1]=cstate10th;
Si1314[1][2]=-sstate10th;

Si1314[3][1]=sstate10th;
Si1314[3][2]=cstate10th;


Si1415[2][1]=cstate11th;
Si1415[2][2]=-sstate11th;

Si1415[3][1]=-sstate11th;
Si1415[3][2]=-cstate11th;


Si1516[1][1]=cstate12th;
Si1516[1][2]=-sstate12th;

Si1516[3][1]=sstate12th;
Si1516[3][2]=cstate12th;


Si1617[2][1]=sstate13th;
Si1617[2][2]=cstate13th;

Si1617[3][1]=cstate13th;
Si1617[3][2]=-sstate13th;


Si1718[1][1]=cstate14th;
Si1718[1][2]=-sstate14th;

Si1718[3][1]=-sstate14th;
Si1718[3][2]=-cstate14th;


Si1819[1][1]=rceff1a2*rceff1a3;
Si1819[1][2]=-(rceff1a2*rseff1a3);
Si1819[1][3]=rseff1a2;

Si1819[2][1]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
Si1819[2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
Si1819[2][3]=-(rceff1a2*rseff1a1);

Si1819[3][1]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;
Si1819[3][2]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;
Si1819[3][3]=rceff1a1*rceff1a2;


Si320[1][1]=sstate32th;
Si320[1][2]=cstate32th;

Si320[2][1]=-cstate32th;
Si320[2][2]=sstate32th;


Si2021[2][1]=sstate33th;
Si2021[2][2]=cstate33th;

Si2021[3][1]=-cstate33th;
Si2021[3][2]=sstate33th;


Si2122[1][1]=cstate34th;
Si2122[1][2]=-sstate34th;

Si2122[3][1]=-sstate34th;
Si2122[3][2]=-cstate34th;


Si2223[1][1]=cstate35th;
Si2223[1][2]=-sstate35th;

Si2223[2][1]=sstate35th;
Si2223[2][2]=cstate35th;


Si2324[2][1]=sstate36th;
Si2324[2][2]=cstate36th;

Si2324[3][1]=cstate36th;
Si2324[3][2]=-sstate36th;



Si2226[1][1]=cstate37th;
Si2226[1][2]=-sstate37th;

Si2226[2][1]=sstate37th;
Si2226[2][2]=cstate37th;


Si2627[2][1]=sstate38th;
Si2627[2][2]=cstate38th;

Si2627[3][1]=cstate38th;
Si2627[3][2]=-sstate38th;




Si030[1][1]=-sstate23th;
Si030[1][2]=-cstate23th;

Si030[3][1]=-cstate23th;
Si030[3][2]=sstate23th;


Si3031[1][1]=0.26720974913585105*cstate22th + 0.9636383917044585*sstate22th;
Si3031[1][2]=0.9636383917044585*cstate22th - 0.26720974913585105*sstate22th;

Si3031[3][1]=-0.9636383917044585*cstate22th + 0.26720974913585105*sstate22th;
Si3031[3][2]=0.26720974913585105*cstate22th + 0.9636383917044585*sstate22th;


Si3132[1][1]=cstate24th;
Si3132[1][2]=-sstate24th;

Si3132[3][1]=-sstate24th;
Si3132[3][2]=-cstate24th;


Si3233[1][1]=0.9636374101817434*cstate25th - 0.26721328877550665*sstate25th;
Si3233[1][2]=-0.26721328877550665*cstate25th - 0.9636374101817434*sstate25th;

Si3233[3][1]=-0.26721328877550665*cstate25th - 0.9636374101817434*sstate25th;
Si3233[3][2]=-0.9636374101817434*cstate25th + 0.26721328877550665*sstate25th;


Si3334[1][1]=cstate26th;
Si3334[1][2]=-sstate26th;

Si3334[3][1]=sstate26th;
Si3334[3][2]=cstate26th;


Si3435[1][1]=-sstate27th;
Si3435[1][2]=-cstate27th;

Si3435[3][1]=cstate27th;
Si3435[3][2]=-sstate27th;


Si3536[1][1]=cstate28th;
Si3536[1][2]=-sstate28th;

Si3536[3][1]=-sstate28th;
Si3536[3][2]=-cstate28th;






Si3641[1][1]=rceff3a2*rceff3a3;
Si3641[1][2]=-(rceff3a2*rseff3a3);
Si3641[1][3]=rseff3a2;

Si3641[2][1]=rceff3a3*rseff3a1*rseff3a2 + rceff3a1*rseff3a3;
Si3641[2][2]=rceff3a1*rceff3a3 - rseff3a1*rseff3a2*rseff3a3;
Si3641[2][3]=-(rceff3a2*rseff3a1);

Si3641[3][1]=-(rceff3a1*rceff3a3*rseff3a2) + rseff3a1*rseff3a3;
Si3641[3][2]=rceff3a3*rseff3a1 + rceff3a1*rseff3a2*rseff3a3;
Si3641[3][3]=rceff3a1*rceff3a2;


Si042[1][1]=sstate16th;
Si042[1][2]=cstate16th;

Si042[3][1]=-cstate16th;
Si042[3][2]=sstate16th;


Si4243[1][1]=0.26720974913585105*cstate15th + 0.9636383917044585*sstate15th;
Si4243[1][2]=0.9636383917044585*cstate15th - 0.26720974913585105*sstate15th;

Si4243[3][1]=0.9636383917044585*cstate15th - 0.26720974913585105*sstate15th;
Si4243[3][2]=-0.26720974913585105*cstate15th - 0.9636383917044585*sstate15th;


Si4344[1][1]=cstate17th;
Si4344[1][2]=-sstate17th;

Si4344[3][1]=sstate17th;
Si4344[3][2]=cstate17th;


Si4445[1][1]=0.9636374101817434*cstate18th - 0.26721328877550665*sstate18th;
Si4445[1][2]=-0.26721328877550665*cstate18th - 0.9636374101817434*sstate18th;

Si4445[3][1]=0.26721328877550665*cstate18th + 0.9636374101817434*sstate18th;
Si4445[3][2]=0.9636374101817434*cstate18th - 0.26721328877550665*sstate18th;


Si4546[1][1]=cstate19th;
Si4546[1][2]=-sstate19th;

Si4546[3][1]=-sstate19th;
Si4546[3][2]=-cstate19th;


Si4647[1][1]=-sstate20th;
Si4647[1][2]=-cstate20th;

Si4647[3][1]=-cstate20th;
Si4647[3][2]=sstate20th;


Si4748[1][1]=cstate21th;
Si4748[1][2]=-sstate21th;

Si4748[3][1]=sstate21th;
Si4748[3][2]=cstate21th;






Si4853[1][1]=rceff4a2*rceff4a3;
Si4853[1][2]=-(rceff4a2*rseff4a3);
Si4853[1][3]=rseff4a2;

Si4853[2][1]=rceff4a3*rseff4a1*rseff4a2 + rceff4a1*rseff4a3;
Si4853[2][2]=rceff4a1*rceff4a3 - rseff4a1*rseff4a2*rseff4a3;
Si4853[2][3]=-(rceff4a2*rseff4a1);

Si4853[3][1]=-(rceff4a1*rceff4a3*rseff4a2) + rseff4a1*rseff4a3;
Si4853[3][2]=rceff4a3*rseff4a1 + rceff4a1*rseff4a2*rseff4a3;
Si4853[3][3]=rceff4a1*rceff4a2;



/* calculation of rotation matrices */
v[1][1]=Si2122[1][1];
v[1][2]=-Si2122[1][2];

v[3][1]=Si2122[3][1];
v[3][2]=-Si2122[3][2];


vv[1][1]=v[3][1];
vv[1][2]=v[3][2];

vv[2][1]=Si2021[2][1]*v[1][1];
vv[2][2]=Si2021[2][1]*v[1][2];
vv[2][3]=-Si2021[2][2];

vv[3][1]=Si2021[3][1]*v[1][1];
vv[3][2]=Si2021[3][1]*v[1][2];
vv[3][3]=-Si2021[3][2];


v[1][1]=Si320[1][1]*vv[1][1] + Si320[1][2]*vv[2][1];
v[1][2]=Si320[1][1]*vv[1][2] + Si320[1][2]*vv[2][2];
v[1][3]=Si320[1][2]*vv[2][3];

v[2][1]=Si320[2][1]*vv[1][1] + Si320[2][2]*vv[2][1];
v[2][2]=Si320[2][1]*vv[1][2] + Si320[2][2]*vv[2][2];
v[2][3]=Si320[2][2]*vv[2][3];

v[3][1]=vv[3][1];
v[3][2]=vv[3][2];
v[3][3]=vv[3][3];


vv[1][1]=Si23[1][1]*v[1][1] + Si23[1][2]*v[2][1];
vv[1][2]=Si23[1][1]*v[1][2] + Si23[1][2]*v[2][2];
vv[1][3]=Si23[1][1]*v[1][3] + Si23[1][2]*v[2][3];

vv[2][1]=v[3][1];
vv[2][2]=v[3][2];
vv[2][3]=v[3][3];

vv[3][1]=Si23[3][1]*v[1][1] + Si23[3][2]*v[2][1];
vv[3][2]=Si23[3][1]*v[1][2] + Si23[3][2]*v[2][2];
vv[3][3]=Si23[3][1]*v[1][3] + Si23[3][2]*v[2][3];


v[1][1]=Si12[1][1]*vv[1][1] + Si12[1][2]*vv[2][1];
v[1][2]=Si12[1][1]*vv[1][2] + Si12[1][2]*vv[2][2];
v[1][3]=Si12[1][1]*vv[1][3] + Si12[1][2]*vv[2][3];

v[2][1]=-vv[3][1];
v[2][2]=-vv[3][2];
v[2][3]=-vv[3][3];

v[3][1]=Si12[3][1]*vv[1][1] + Si12[3][2]*vv[2][1];
v[3][2]=Si12[3][1]*vv[1][2] + Si12[3][2]*vv[2][2];
v[3][3]=Si12[3][1]*vv[1][3] + Si12[3][2]*vv[2][3];


vv[1][1]=Si01[1][1]*v[1][1] + Si01[1][2]*v[2][1];
vv[1][2]=Si01[1][1]*v[1][2] + Si01[1][2]*v[2][2];
vv[1][3]=Si01[1][1]*v[1][3] + Si01[1][2]*v[2][3];

vv[2][1]=Si01[2][1]*v[1][1] + Si01[2][2]*v[2][1];
vv[2][2]=Si01[2][1]*v[1][2] + Si01[2][2]*v[2][2];
vv[2][3]=Si01[2][1]*v[1][3] + Si01[2][2]*v[2][3];

vv[3][1]=-v[3][1];
vv[3][2]=-v[3][2];
vv[3][3]=-v[3][3];


v[1][1]=Si00[1][1]*vv[1][1] + Si00[1][2]*vv[2][1] + Si00[1][3]*vv[3][1];
v[1][2]=Si00[1][1]*vv[1][2] + Si00[1][2]*vv[2][2] + Si00[1][3]*vv[3][2];
v[1][3]=Si00[1][1]*vv[1][3] + Si00[1][2]*vv[2][3] + Si00[1][3]*vv[3][3];

v[2][1]=Si00[2][1]*vv[1][1] + Si00[2][2]*vv[2][1] + Si00[2][3]*vv[3][1];
v[2][2]=Si00[2][1]*vv[1][2] + Si00[2][2]*vv[2][2] + Si00[2][3]*vv[3][2];
v[2][3]=Si00[2][1]*vv[1][3] + Si00[2][2]*vv[2][3] + Si00[2][3]*vv[3][3];

v[3][1]=Si00[3][1]*vv[1][1] + Si00[3][2]*vv[2][1] + Si00[3][3]*vv[3][1];
v[3][2]=Si00[3][1]*vv[1][2] + Si00[3][2]*vv[2][2] + Si00[3][3]*vv[3][2];
v[3][3]=Si00[3][1]*vv[1][3] + Si00[3][2]*vv[2][3] + Si00[3][3]*vv[3][3];


/* Rotation Matrix: 138 */
XRot[1][1][1]=v[1][1];
XRot[1][1][2]=v[1][2];
XRot[1][1][3]=v[1][3];

XRot[1][2][1]=v[2][1];
XRot[1][2][2]=v[2][2];
XRot[1][2][3]=v[2][3];

XRot[1][3][1]=v[3][1];
XRot[1][3][2]=v[3][2];
XRot[1][3][3]=v[3][3];


