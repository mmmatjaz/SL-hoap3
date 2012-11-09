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




/* inverse spatial rotation matrices */
Xinv[0][1][1]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[2],2);
Xinv[0][1][2]=2*(baseo[0].q[2]*baseo[0].q[3] - baseo[0].q[1]*baseo[0].q[4]);
Xinv[0][1][3]=2*(baseo[0].q[1]*baseo[0].q[3] + baseo[0].q[2]*baseo[0].q[4]);
Xinv[0][1][4]=0;
Xinv[0][1][5]=0;
Xinv[0][1][6]=0;

Xinv[0][2][1]=2*(baseo[0].q[2]*baseo[0].q[3] + baseo[0].q[1]*baseo[0].q[4]);
Xinv[0][2][2]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[3],2);
Xinv[0][2][3]=2*(-(baseo[0].q[1]*baseo[0].q[2]) + baseo[0].q[3]*baseo[0].q[4]);
Xinv[0][2][4]=0;
Xinv[0][2][5]=0;
Xinv[0][2][6]=0;

Xinv[0][3][1]=2*(-(baseo[0].q[1]*baseo[0].q[3]) + baseo[0].q[2]*baseo[0].q[4]);
Xinv[0][3][2]=2*(baseo[0].q[1]*baseo[0].q[2] + baseo[0].q[3]*baseo[0].q[4]);
Xinv[0][3][3]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[4],2);
Xinv[0][3][4]=0;
Xinv[0][3][5]=0;
Xinv[0][3][6]=0;

Xinv[0][4][1]=0;
Xinv[0][4][2]=0;
Xinv[0][4][3]=0;
Xinv[0][4][4]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[2],2);
Xinv[0][4][5]=2*(baseo[0].q[2]*baseo[0].q[3] - baseo[0].q[1]*baseo[0].q[4]);
Xinv[0][4][6]=2*(baseo[0].q[1]*baseo[0].q[3] + baseo[0].q[2]*baseo[0].q[4]);

Xinv[0][5][1]=0;
Xinv[0][5][2]=0;
Xinv[0][5][3]=0;
Xinv[0][5][4]=2*(baseo[0].q[2]*baseo[0].q[3] + baseo[0].q[1]*baseo[0].q[4]);
Xinv[0][5][5]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[3],2);
Xinv[0][5][6]=2*(-(baseo[0].q[1]*baseo[0].q[2]) + baseo[0].q[3]*baseo[0].q[4]);

Xinv[0][6][1]=0;
Xinv[0][6][2]=0;
Xinv[0][6][3]=0;
Xinv[0][6][4]=2*(-(baseo[0].q[1]*baseo[0].q[3]) + baseo[0].q[2]*baseo[0].q[4]);
Xinv[0][6][5]=2*(baseo[0].q[1]*baseo[0].q[2] + baseo[0].q[3]*baseo[0].q[4]);
Xinv[0][6][6]=-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[4],2);


Xinv[1][1][1]=1;
Xinv[1][1][2]=0;
Xinv[1][1][3]=0;
Xinv[1][1][4]=0;
Xinv[1][1][5]=0;
Xinv[1][1][6]=0;

Xinv[1][2][1]=0;
Xinv[1][2][2]=1;
Xinv[1][2][3]=0;
Xinv[1][2][4]=0;
Xinv[1][2][5]=0;
Xinv[1][2][6]=0;

Xinv[1][3][1]=0;
Xinv[1][3][2]=0;
Xinv[1][3][3]=1;
Xinv[1][3][4]=0;
Xinv[1][3][5]=0;
Xinv[1][3][6]=0;

Xinv[1][4][1]=0;
Xinv[1][4][2]=-BODYLINK1;
Xinv[1][4][3]=0;
Xinv[1][4][4]=1;
Xinv[1][4][5]=0;
Xinv[1][4][6]=0;

Xinv[1][5][1]=BODYLINK1;
Xinv[1][5][2]=0;
Xinv[1][5][3]=0;
Xinv[1][5][4]=0;
Xinv[1][5][5]=1;
Xinv[1][5][6]=0;

Xinv[1][6][1]=0;
Xinv[1][6][2]=0;
Xinv[1][6][3]=0;
Xinv[1][6][4]=0;
Xinv[1][6][5]=0;
Xinv[1][6][6]=1;


Xinv[2][1][1]=cstate22th;
Xinv[2][1][2]=-sstate22th;
Xinv[2][1][3]=0;
Xinv[2][1][4]=0;
Xinv[2][1][5]=0;
Xinv[2][1][6]=0;

Xinv[2][2][1]=sstate22th;
Xinv[2][2][2]=cstate22th;
Xinv[2][2][3]=0;
Xinv[2][2][4]=0;
Xinv[2][2][5]=0;
Xinv[2][2][6]=0;

Xinv[2][3][1]=0;
Xinv[2][3][2]=0;
Xinv[2][3][3]=1;
Xinv[2][3][4]=0;
Xinv[2][3][5]=0;
Xinv[2][3][6]=0;

Xinv[2][4][1]=0;
Xinv[2][4][2]=0;
Xinv[2][4][3]=0;
Xinv[2][4][4]=cstate22th;
Xinv[2][4][5]=-sstate22th;
Xinv[2][4][6]=0;

Xinv[2][5][1]=0;
Xinv[2][5][2]=0;
Xinv[2][5][3]=0;
Xinv[2][5][4]=sstate22th;
Xinv[2][5][5]=cstate22th;
Xinv[2][5][6]=0;

Xinv[2][6][1]=0;
Xinv[2][6][2]=0;
Xinv[2][6][3]=0;
Xinv[2][6][4]=0;
Xinv[2][6][5]=0;
Xinv[2][6][6]=1;


Xinv[3][1][1]=cstate23th;
Xinv[3][1][2]=-sstate23th;
Xinv[3][1][3]=0;
Xinv[3][1][4]=0;
Xinv[3][1][5]=0;
Xinv[3][1][6]=0;

Xinv[3][2][1]=0;
Xinv[3][2][2]=0;
Xinv[3][2][3]=1;
Xinv[3][2][4]=0;
Xinv[3][2][5]=0;
Xinv[3][2][6]=0;

Xinv[3][3][1]=-sstate23th;
Xinv[3][3][2]=-cstate23th;
Xinv[3][3][3]=0;
Xinv[3][3][4]=0;
Xinv[3][3][5]=0;
Xinv[3][3][6]=0;

Xinv[3][4][1]=0;
Xinv[3][4][2]=0;
Xinv[3][4][3]=-HEADLINK1;
Xinv[3][4][4]=cstate23th;
Xinv[3][4][5]=-sstate23th;
Xinv[3][4][6]=0;

Xinv[3][5][1]=cstate23th*HEADLINK1 + HEADLINK2*sstate23th;
Xinv[3][5][2]=cstate23th*HEADLINK2 - HEADLINK1*sstate23th;
Xinv[3][5][3]=0;
Xinv[3][5][4]=0;
Xinv[3][5][5]=0;
Xinv[3][5][6]=1;

Xinv[3][6][1]=0;
Xinv[3][6][2]=0;
Xinv[3][6][3]=HEADLINK2;
Xinv[3][6][4]=-sstate23th;
Xinv[3][6][5]=-cstate23th;
Xinv[3][6][6]=0;


Xinv[4][1][1]=1;
Xinv[4][1][2]=0;
Xinv[4][1][3]=0;
Xinv[4][1][4]=0;
Xinv[4][1][5]=0;
Xinv[4][1][6]=0;

Xinv[4][2][1]=0;
Xinv[4][2][2]=-sstate24th;
Xinv[4][2][3]=-cstate24th;
Xinv[4][2][4]=0;
Xinv[4][2][5]=0;
Xinv[4][2][6]=0;

Xinv[4][3][1]=0;
Xinv[4][3][2]=cstate24th;
Xinv[4][3][3]=-sstate24th;
Xinv[4][3][4]=0;
Xinv[4][3][5]=0;
Xinv[4][3][6]=0;

Xinv[4][4][1]=0;
Xinv[4][4][2]=0;
Xinv[4][4][3]=0;
Xinv[4][4][4]=1;
Xinv[4][4][5]=0;
Xinv[4][4][6]=0;

Xinv[4][5][1]=0;
Xinv[4][5][2]=0;
Xinv[4][5][3]=0;
Xinv[4][5][4]=0;
Xinv[4][5][5]=-sstate24th;
Xinv[4][5][6]=-cstate24th;

Xinv[4][6][1]=0;
Xinv[4][6][2]=0;
Xinv[4][6][3]=0;
Xinv[4][6][4]=0;
Xinv[4][6][5]=cstate24th;
Xinv[4][6][6]=-sstate24th;


Xinv[5][1][1]=cstate7th;
Xinv[5][1][2]=-sstate7th;
Xinv[5][1][3]=0;
Xinv[5][1][4]=0;
Xinv[5][1][5]=0;
Xinv[5][1][6]=0;

Xinv[5][2][1]=0;
Xinv[5][2][2]=0;
Xinv[5][2][3]=1;
Xinv[5][2][4]=0;
Xinv[5][2][5]=0;
Xinv[5][2][6]=0;

Xinv[5][3][1]=-sstate7th;
Xinv[5][3][2]=-cstate7th;
Xinv[5][3][3]=0;
Xinv[5][3][4]=0;
Xinv[5][3][5]=0;
Xinv[5][3][6]=0;

Xinv[5][4][1]=ARMLINK1*sstate7th;
Xinv[5][4][2]=ARMLINK1*cstate7th;
Xinv[5][4][3]=0;
Xinv[5][4][4]=cstate7th;
Xinv[5][4][5]=-sstate7th;
Xinv[5][4][6]=0;

Xinv[5][5][1]=0;
Xinv[5][5][2]=0;
Xinv[5][5][3]=0;
Xinv[5][5][4]=0;
Xinv[5][5][5]=0;
Xinv[5][5][6]=1;

Xinv[5][6][1]=ARMLINK1*cstate7th;
Xinv[5][6][2]=-(ARMLINK1*sstate7th);
Xinv[5][6][3]=0;
Xinv[5][6][4]=-sstate7th;
Xinv[5][6][5]=-cstate7th;
Xinv[5][6][6]=0;


Xinv[6][1][1]=-sstate8th;
Xinv[6][1][2]=-cstate8th;
Xinv[6][1][3]=0;
Xinv[6][1][4]=0;
Xinv[6][1][5]=0;
Xinv[6][1][6]=0;

Xinv[6][2][1]=0;
Xinv[6][2][2]=0;
Xinv[6][2][3]=-1;
Xinv[6][2][4]=0;
Xinv[6][2][5]=0;
Xinv[6][2][6]=0;

Xinv[6][3][1]=cstate8th;
Xinv[6][3][2]=-sstate8th;
Xinv[6][3][3]=0;
Xinv[6][3][4]=0;
Xinv[6][3][5]=0;
Xinv[6][3][6]=0;

Xinv[6][4][1]=0;
Xinv[6][4][2]=0;
Xinv[6][4][3]=0;
Xinv[6][4][4]=-sstate8th;
Xinv[6][4][5]=-cstate8th;
Xinv[6][4][6]=0;

Xinv[6][5][1]=0;
Xinv[6][5][2]=0;
Xinv[6][5][3]=0;
Xinv[6][5][4]=0;
Xinv[6][5][5]=0;
Xinv[6][5][6]=-1;

Xinv[6][6][1]=0;
Xinv[6][6][2]=0;
Xinv[6][6][3]=0;
Xinv[6][6][4]=cstate8th;
Xinv[6][6][5]=-sstate8th;
Xinv[6][6][6]=0;


Xinv[7][1][1]=-sstate9th;
Xinv[7][1][2]=-cstate9th;
Xinv[7][1][3]=0;
Xinv[7][1][4]=0;
Xinv[7][1][5]=0;
Xinv[7][1][6]=0;

Xinv[7][2][1]=0;
Xinv[7][2][2]=0;
Xinv[7][2][3]=-1;
Xinv[7][2][4]=0;
Xinv[7][2][5]=0;
Xinv[7][2][6]=0;

Xinv[7][3][1]=cstate9th;
Xinv[7][3][2]=-sstate9th;
Xinv[7][3][3]=0;
Xinv[7][3][4]=0;
Xinv[7][3][5]=0;
Xinv[7][3][6]=0;

Xinv[7][4][1]=-(ARMLINK2*cstate9th);
Xinv[7][4][2]=ARMLINK2*sstate9th;
Xinv[7][4][3]=0;
Xinv[7][4][4]=-sstate9th;
Xinv[7][4][5]=-cstate9th;
Xinv[7][4][6]=0;

Xinv[7][5][1]=0;
Xinv[7][5][2]=0;
Xinv[7][5][3]=0;
Xinv[7][5][4]=0;
Xinv[7][5][5]=0;
Xinv[7][5][6]=-1;

Xinv[7][6][1]=-(ARMLINK2*sstate9th);
Xinv[7][6][2]=-(ARMLINK2*cstate9th);
Xinv[7][6][3]=0;
Xinv[7][6][4]=cstate9th;
Xinv[7][6][5]=-sstate9th;
Xinv[7][6][6]=0;


Xinv[8][1][1]=cstate10th;
Xinv[8][1][2]=sstate10th;
Xinv[8][1][3]=0;
Xinv[8][1][4]=0;
Xinv[8][1][5]=0;
Xinv[8][1][6]=0;

Xinv[8][2][1]=0;
Xinv[8][2][2]=0;
Xinv[8][2][3]=-1;
Xinv[8][2][4]=0;
Xinv[8][2][5]=0;
Xinv[8][2][6]=0;

Xinv[8][3][1]=-sstate10th;
Xinv[8][3][2]=cstate10th;
Xinv[8][3][3]=0;
Xinv[8][3][4]=0;
Xinv[8][3][5]=0;
Xinv[8][3][6]=0;

Xinv[8][4][1]=0;
Xinv[8][4][2]=0;
Xinv[8][4][3]=0;
Xinv[8][4][4]=cstate10th;
Xinv[8][4][5]=sstate10th;
Xinv[8][4][6]=0;

Xinv[8][5][1]=0;
Xinv[8][5][2]=0;
Xinv[8][5][3]=0;
Xinv[8][5][4]=0;
Xinv[8][5][5]=0;
Xinv[8][5][6]=-1;

Xinv[8][6][1]=0;
Xinv[8][6][2]=0;
Xinv[8][6][3]=0;
Xinv[8][6][4]=-sstate10th;
Xinv[8][6][5]=cstate10th;
Xinv[8][6][6]=0;


Xinv[9][1][1]=cstate25th;
Xinv[9][1][2]=-sstate25th;
Xinv[9][1][3]=0;
Xinv[9][1][4]=0;
Xinv[9][1][5]=0;
Xinv[9][1][6]=0;

Xinv[9][2][1]=0;
Xinv[9][2][2]=0;
Xinv[9][2][3]=1;
Xinv[9][2][4]=0;
Xinv[9][2][5]=0;
Xinv[9][2][6]=0;

Xinv[9][3][1]=-sstate25th;
Xinv[9][3][2]=-cstate25th;
Xinv[9][3][3]=0;
Xinv[9][3][4]=0;
Xinv[9][3][5]=0;
Xinv[9][3][6]=0;

Xinv[9][4][1]=-(ARMLINK3*sstate25th);
Xinv[9][4][2]=-(ARMLINK3*cstate25th);
Xinv[9][4][3]=0;
Xinv[9][4][4]=cstate25th;
Xinv[9][4][5]=-sstate25th;
Xinv[9][4][6]=0;

Xinv[9][5][1]=0;
Xinv[9][5][2]=0;
Xinv[9][5][3]=0;
Xinv[9][5][4]=0;
Xinv[9][5][5]=0;
Xinv[9][5][6]=1;

Xinv[9][6][1]=-(ARMLINK3*cstate25th);
Xinv[9][6][2]=ARMLINK3*sstate25th;
Xinv[9][6][3]=0;
Xinv[9][6][4]=-sstate25th;
Xinv[9][6][5]=-cstate25th;
Xinv[9][6][6]=0;


Xinv[10][1][1]=1;
Xinv[10][1][2]=0;
Xinv[10][1][3]=0;
Xinv[10][1][4]=0;
Xinv[10][1][5]=0;
Xinv[10][1][6]=0;

Xinv[10][2][1]=0;
Xinv[10][2][2]=1;
Xinv[10][2][3]=0;
Xinv[10][2][4]=0;
Xinv[10][2][5]=0;
Xinv[10][2][6]=0;

Xinv[10][3][1]=0;
Xinv[10][3][2]=0;
Xinv[10][3][3]=1;
Xinv[10][3][4]=0;
Xinv[10][3][5]=0;
Xinv[10][3][6]=0;

Xinv[10][4][1]=0;
Xinv[10][4][2]=0;
Xinv[10][4][3]=PALMOFF;
Xinv[10][4][4]=1;
Xinv[10][4][5]=0;
Xinv[10][4][6]=0;

Xinv[10][5][1]=0;
Xinv[10][5][2]=0;
Xinv[10][5][3]=0;
Xinv[10][5][4]=0;
Xinv[10][5][5]=1;
Xinv[10][5][6]=0;

Xinv[10][6][1]=-PALMOFF;
Xinv[10][6][2]=0;
Xinv[10][6][3]=0;
Xinv[10][6][4]=0;
Xinv[10][6][5]=0;
Xinv[10][6][6]=1;


Xinv[11][1][1]=1;
Xinv[11][1][2]=0;
Xinv[11][1][3]=0;
Xinv[11][1][4]=0;
Xinv[11][1][5]=0;
Xinv[11][1][6]=0;

Xinv[11][2][1]=0;
Xinv[11][2][2]=1;
Xinv[11][2][3]=0;
Xinv[11][2][4]=0;
Xinv[11][2][5]=0;
Xinv[11][2][6]=0;

Xinv[11][3][1]=0;
Xinv[11][3][2]=0;
Xinv[11][3][3]=1;
Xinv[11][3][4]=0;
Xinv[11][3][5]=0;
Xinv[11][3][6]=0;

Xinv[11][4][1]=0;
Xinv[11][4][2]=-PALMTIP;
Xinv[11][4][3]=0;
Xinv[11][4][4]=1;
Xinv[11][4][5]=0;
Xinv[11][4][6]=0;

Xinv[11][5][1]=PALMTIP;
Xinv[11][5][2]=0;
Xinv[11][5][3]=0;
Xinv[11][5][4]=0;
Xinv[11][5][5]=1;
Xinv[11][5][6]=0;

Xinv[11][6][1]=0;
Xinv[11][6][2]=0;
Xinv[11][6][3]=0;
Xinv[11][6][4]=0;
Xinv[11][6][5]=0;
Xinv[11][6][6]=1;


Xinv[12][1][1]=0;
Xinv[12][1][2]=0;
Xinv[12][1][3]=-1;
Xinv[12][1][4]=0;
Xinv[12][1][5]=0;
Xinv[12][1][6]=0;

Xinv[12][2][1]=sstate26th;
Xinv[12][2][2]=cstate26th;
Xinv[12][2][3]=0;
Xinv[12][2][4]=0;
Xinv[12][2][5]=0;
Xinv[12][2][6]=0;

Xinv[12][3][1]=cstate26th;
Xinv[12][3][2]=-sstate26th;
Xinv[12][3][3]=0;
Xinv[12][3][4]=0;
Xinv[12][3][5]=0;
Xinv[12][3][6]=0;

Xinv[12][4][1]=-(GRIPROOT*sstate26th);
Xinv[12][4][2]=-(cstate26th*GRIPROOT);
Xinv[12][4][3]=0;
Xinv[12][4][4]=0;
Xinv[12][4][5]=0;
Xinv[12][4][6]=-1;

Xinv[12][5][1]=0;
Xinv[12][5][2]=0;
Xinv[12][5][3]=-GRIPROOT;
Xinv[12][5][4]=sstate26th;
Xinv[12][5][5]=cstate26th;
Xinv[12][5][6]=0;

Xinv[12][6][1]=0;
Xinv[12][6][2]=0;
Xinv[12][6][3]=0;
Xinv[12][6][4]=cstate26th;
Xinv[12][6][5]=-sstate26th;
Xinv[12][6][6]=0;


Xinv[13][1][1]=1;
Xinv[13][1][2]=0;
Xinv[13][1][3]=0;
Xinv[13][1][4]=0;
Xinv[13][1][5]=0;
Xinv[13][1][6]=0;

Xinv[13][2][1]=0;
Xinv[13][2][2]=1;
Xinv[13][2][3]=0;
Xinv[13][2][4]=0;
Xinv[13][2][5]=0;
Xinv[13][2][6]=0;

Xinv[13][3][1]=0;
Xinv[13][3][2]=0;
Xinv[13][3][3]=1;
Xinv[13][3][4]=0;
Xinv[13][3][5]=0;
Xinv[13][3][6]=0;

Xinv[13][4][1]=0;
Xinv[13][4][2]=0;
Xinv[13][4][3]=-THUMBOFF;
Xinv[13][4][4]=1;
Xinv[13][4][5]=0;
Xinv[13][4][6]=0;

Xinv[13][5][1]=0;
Xinv[13][5][2]=0;
Xinv[13][5][3]=-THUMBLEN;
Xinv[13][5][4]=0;
Xinv[13][5][5]=1;
Xinv[13][5][6]=0;

Xinv[13][6][1]=THUMBOFF;
Xinv[13][6][2]=THUMBLEN;
Xinv[13][6][3]=0;
Xinv[13][6][4]=0;
Xinv[13][6][5]=0;
Xinv[13][6][6]=1;


Xinv[14][1][1]=cstate17th;
Xinv[14][1][2]=sstate17th;
Xinv[14][1][3]=0;
Xinv[14][1][4]=0;
Xinv[14][1][5]=0;
Xinv[14][1][6]=0;

Xinv[14][2][1]=0;
Xinv[14][2][2]=0;
Xinv[14][2][3]=1;
Xinv[14][2][4]=0;
Xinv[14][2][5]=0;
Xinv[14][2][6]=0;

Xinv[14][3][1]=sstate17th;
Xinv[14][3][2]=-cstate17th;
Xinv[14][3][3]=0;
Xinv[14][3][4]=0;
Xinv[14][3][5]=0;
Xinv[14][3][6]=0;

Xinv[14][4][1]=ARMLINK1*sstate17th;
Xinv[14][4][2]=-(ARMLINK1*cstate17th);
Xinv[14][4][3]=0;
Xinv[14][4][4]=cstate17th;
Xinv[14][4][5]=sstate17th;
Xinv[14][4][6]=0;

Xinv[14][5][1]=0;
Xinv[14][5][2]=0;
Xinv[14][5][3]=0;
Xinv[14][5][4]=0;
Xinv[14][5][5]=0;
Xinv[14][5][6]=1;

Xinv[14][6][1]=-(ARMLINK1*cstate17th);
Xinv[14][6][2]=-(ARMLINK1*sstate17th);
Xinv[14][6][3]=0;
Xinv[14][6][4]=sstate17th;
Xinv[14][6][5]=-cstate17th;
Xinv[14][6][6]=0;


Xinv[15][1][1]=-sstate18th;
Xinv[15][1][2]=-cstate18th;
Xinv[15][1][3]=0;
Xinv[15][1][4]=0;
Xinv[15][1][5]=0;
Xinv[15][1][6]=0;

Xinv[15][2][1]=0;
Xinv[15][2][2]=0;
Xinv[15][2][3]=-1;
Xinv[15][2][4]=0;
Xinv[15][2][5]=0;
Xinv[15][2][6]=0;

Xinv[15][3][1]=cstate18th;
Xinv[15][3][2]=-sstate18th;
Xinv[15][3][3]=0;
Xinv[15][3][4]=0;
Xinv[15][3][5]=0;
Xinv[15][3][6]=0;

Xinv[15][4][1]=0;
Xinv[15][4][2]=0;
Xinv[15][4][3]=0;
Xinv[15][4][4]=-sstate18th;
Xinv[15][4][5]=-cstate18th;
Xinv[15][4][6]=0;

Xinv[15][5][1]=0;
Xinv[15][5][2]=0;
Xinv[15][5][3]=0;
Xinv[15][5][4]=0;
Xinv[15][5][5]=0;
Xinv[15][5][6]=-1;

Xinv[15][6][1]=0;
Xinv[15][6][2]=0;
Xinv[15][6][3]=0;
Xinv[15][6][4]=cstate18th;
Xinv[15][6][5]=-sstate18th;
Xinv[15][6][6]=0;


Xinv[16][1][1]=-sstate19th;
Xinv[16][1][2]=-cstate19th;
Xinv[16][1][3]=0;
Xinv[16][1][4]=0;
Xinv[16][1][5]=0;
Xinv[16][1][6]=0;

Xinv[16][2][1]=0;
Xinv[16][2][2]=0;
Xinv[16][2][3]=-1;
Xinv[16][2][4]=0;
Xinv[16][2][5]=0;
Xinv[16][2][6]=0;

Xinv[16][3][1]=cstate19th;
Xinv[16][3][2]=-sstate19th;
Xinv[16][3][3]=0;
Xinv[16][3][4]=0;
Xinv[16][3][5]=0;
Xinv[16][3][6]=0;

Xinv[16][4][1]=-(ARMLINK2*cstate19th);
Xinv[16][4][2]=ARMLINK2*sstate19th;
Xinv[16][4][3]=0;
Xinv[16][4][4]=-sstate19th;
Xinv[16][4][5]=-cstate19th;
Xinv[16][4][6]=0;

Xinv[16][5][1]=0;
Xinv[16][5][2]=0;
Xinv[16][5][3]=0;
Xinv[16][5][4]=0;
Xinv[16][5][5]=0;
Xinv[16][5][6]=-1;

Xinv[16][6][1]=-(ARMLINK2*sstate19th);
Xinv[16][6][2]=-(ARMLINK2*cstate19th);
Xinv[16][6][3]=0;
Xinv[16][6][4]=cstate19th;
Xinv[16][6][5]=-sstate19th;
Xinv[16][6][6]=0;


Xinv[17][1][1]=cstate20th;
Xinv[17][1][2]=-sstate20th;
Xinv[17][1][3]=0;
Xinv[17][1][4]=0;
Xinv[17][1][5]=0;
Xinv[17][1][6]=0;

Xinv[17][2][1]=0;
Xinv[17][2][2]=0;
Xinv[17][2][3]=-1;
Xinv[17][2][4]=0;
Xinv[17][2][5]=0;
Xinv[17][2][6]=0;

Xinv[17][3][1]=sstate20th;
Xinv[17][3][2]=cstate20th;
Xinv[17][3][3]=0;
Xinv[17][3][4]=0;
Xinv[17][3][5]=0;
Xinv[17][3][6]=0;

Xinv[17][4][1]=0;
Xinv[17][4][2]=0;
Xinv[17][4][3]=0;
Xinv[17][4][4]=cstate20th;
Xinv[17][4][5]=-sstate20th;
Xinv[17][4][6]=0;

Xinv[17][5][1]=0;
Xinv[17][5][2]=0;
Xinv[17][5][3]=0;
Xinv[17][5][4]=0;
Xinv[17][5][5]=0;
Xinv[17][5][6]=-1;

Xinv[17][6][1]=0;
Xinv[17][6][2]=0;
Xinv[17][6][3]=0;
Xinv[17][6][4]=sstate20th;
Xinv[17][6][5]=cstate20th;
Xinv[17][6][6]=0;


Xinv[18][1][1]=cstate27th;
Xinv[18][1][2]=-sstate27th;
Xinv[18][1][3]=0;
Xinv[18][1][4]=0;
Xinv[18][1][5]=0;
Xinv[18][1][6]=0;

Xinv[18][2][1]=0;
Xinv[18][2][2]=0;
Xinv[18][2][3]=1;
Xinv[18][2][4]=0;
Xinv[18][2][5]=0;
Xinv[18][2][6]=0;

Xinv[18][3][1]=-sstate27th;
Xinv[18][3][2]=-cstate27th;
Xinv[18][3][3]=0;
Xinv[18][3][4]=0;
Xinv[18][3][5]=0;
Xinv[18][3][6]=0;

Xinv[18][4][1]=-(ARMLINK3*sstate27th);
Xinv[18][4][2]=-(ARMLINK3*cstate27th);
Xinv[18][4][3]=0;
Xinv[18][4][4]=cstate27th;
Xinv[18][4][5]=-sstate27th;
Xinv[18][4][6]=0;

Xinv[18][5][1]=0;
Xinv[18][5][2]=0;
Xinv[18][5][3]=0;
Xinv[18][5][4]=0;
Xinv[18][5][5]=0;
Xinv[18][5][6]=1;

Xinv[18][6][1]=-(ARMLINK3*cstate27th);
Xinv[18][6][2]=ARMLINK3*sstate27th;
Xinv[18][6][3]=0;
Xinv[18][6][4]=-sstate27th;
Xinv[18][6][5]=-cstate27th;
Xinv[18][6][6]=0;


Xinv[19][1][1]=1;
Xinv[19][1][2]=0;
Xinv[19][1][3]=0;
Xinv[19][1][4]=0;
Xinv[19][1][5]=0;
Xinv[19][1][6]=0;

Xinv[19][2][1]=0;
Xinv[19][2][2]=1;
Xinv[19][2][3]=0;
Xinv[19][2][4]=0;
Xinv[19][2][5]=0;
Xinv[19][2][6]=0;

Xinv[19][3][1]=0;
Xinv[19][3][2]=0;
Xinv[19][3][3]=1;
Xinv[19][3][4]=0;
Xinv[19][3][5]=0;
Xinv[19][3][6]=0;

Xinv[19][4][1]=0;
Xinv[19][4][2]=0;
Xinv[19][4][3]=-PALMOFF;
Xinv[19][4][4]=1;
Xinv[19][4][5]=0;
Xinv[19][4][6]=0;

Xinv[19][5][1]=0;
Xinv[19][5][2]=0;
Xinv[19][5][3]=0;
Xinv[19][5][4]=0;
Xinv[19][5][5]=1;
Xinv[19][5][6]=0;

Xinv[19][6][1]=PALMOFF;
Xinv[19][6][2]=0;
Xinv[19][6][3]=0;
Xinv[19][6][4]=0;
Xinv[19][6][5]=0;
Xinv[19][6][6]=1;


Xinv[20][1][1]=1;
Xinv[20][1][2]=0;
Xinv[20][1][3]=0;
Xinv[20][1][4]=0;
Xinv[20][1][5]=0;
Xinv[20][1][6]=0;

Xinv[20][2][1]=0;
Xinv[20][2][2]=1;
Xinv[20][2][3]=0;
Xinv[20][2][4]=0;
Xinv[20][2][5]=0;
Xinv[20][2][6]=0;

Xinv[20][3][1]=0;
Xinv[20][3][2]=0;
Xinv[20][3][3]=1;
Xinv[20][3][4]=0;
Xinv[20][3][5]=0;
Xinv[20][3][6]=0;

Xinv[20][4][1]=0;
Xinv[20][4][2]=-PALMTIP;
Xinv[20][4][3]=0;
Xinv[20][4][4]=1;
Xinv[20][4][5]=0;
Xinv[20][4][6]=0;

Xinv[20][5][1]=PALMTIP;
Xinv[20][5][2]=0;
Xinv[20][5][3]=0;
Xinv[20][5][4]=0;
Xinv[20][5][5]=1;
Xinv[20][5][6]=0;

Xinv[20][6][1]=0;
Xinv[20][6][2]=0;
Xinv[20][6][3]=0;
Xinv[20][6][4]=0;
Xinv[20][6][5]=0;
Xinv[20][6][6]=1;


Xinv[21][1][1]=0;
Xinv[21][1][2]=0;
Xinv[21][1][3]=-1;
Xinv[21][1][4]=0;
Xinv[21][1][5]=0;
Xinv[21][1][6]=0;

Xinv[21][2][1]=sstate28th;
Xinv[21][2][2]=cstate28th;
Xinv[21][2][3]=0;
Xinv[21][2][4]=0;
Xinv[21][2][5]=0;
Xinv[21][2][6]=0;

Xinv[21][3][1]=cstate28th;
Xinv[21][3][2]=-sstate28th;
Xinv[21][3][3]=0;
Xinv[21][3][4]=0;
Xinv[21][3][5]=0;
Xinv[21][3][6]=0;

Xinv[21][4][1]=-(GRIPROOT*sstate28th);
Xinv[21][4][2]=-(cstate28th*GRIPROOT);
Xinv[21][4][3]=0;
Xinv[21][4][4]=0;
Xinv[21][4][5]=0;
Xinv[21][4][6]=-1;

Xinv[21][5][1]=0;
Xinv[21][5][2]=0;
Xinv[21][5][3]=-GRIPROOT;
Xinv[21][5][4]=sstate28th;
Xinv[21][5][5]=cstate28th;
Xinv[21][5][6]=0;

Xinv[21][6][1]=0;
Xinv[21][6][2]=0;
Xinv[21][6][3]=0;
Xinv[21][6][4]=cstate28th;
Xinv[21][6][5]=-sstate28th;
Xinv[21][6][6]=0;


Xinv[22][1][1]=1;
Xinv[22][1][2]=0;
Xinv[22][1][3]=0;
Xinv[22][1][4]=0;
Xinv[22][1][5]=0;
Xinv[22][1][6]=0;

Xinv[22][2][1]=0;
Xinv[22][2][2]=1;
Xinv[22][2][3]=0;
Xinv[22][2][4]=0;
Xinv[22][2][5]=0;
Xinv[22][2][6]=0;

Xinv[22][3][1]=0;
Xinv[22][3][2]=0;
Xinv[22][3][3]=1;
Xinv[22][3][4]=0;
Xinv[22][3][5]=0;
Xinv[22][3][6]=0;

Xinv[22][4][1]=0;
Xinv[22][4][2]=0;
Xinv[22][4][3]=THUMBOFF;
Xinv[22][4][4]=1;
Xinv[22][4][5]=0;
Xinv[22][4][6]=0;

Xinv[22][5][1]=0;
Xinv[22][5][2]=0;
Xinv[22][5][3]=-THUMBLEN;
Xinv[22][5][4]=0;
Xinv[22][5][5]=1;
Xinv[22][5][6]=0;

Xinv[22][6][1]=-THUMBOFF;
Xinv[22][6][2]=THUMBLEN;
Xinv[22][6][3]=0;
Xinv[22][6][4]=0;
Xinv[22][6][5]=0;
Xinv[22][6][6]=1;


Xinv[23][1][1]=cstate21th;
Xinv[23][1][2]=-sstate21th;
Xinv[23][1][3]=0;
Xinv[23][1][4]=0;
Xinv[23][1][5]=0;
Xinv[23][1][6]=0;

Xinv[23][2][1]=0;
Xinv[23][2][2]=0;
Xinv[23][2][3]=-1;
Xinv[23][2][4]=0;
Xinv[23][2][5]=0;
Xinv[23][2][6]=0;

Xinv[23][3][1]=sstate21th;
Xinv[23][3][2]=cstate21th;
Xinv[23][3][3]=0;
Xinv[23][3][4]=0;
Xinv[23][3][5]=0;
Xinv[23][3][6]=0;

Xinv[23][4][1]=0;
Xinv[23][4][2]=0;
Xinv[23][4][3]=0;
Xinv[23][4][4]=cstate21th;
Xinv[23][4][5]=-sstate21th;
Xinv[23][4][6]=0;

Xinv[23][5][1]=-(BODYLINK2*sstate21th);
Xinv[23][5][2]=-(BODYLINK2*cstate21th);
Xinv[23][5][3]=0;
Xinv[23][5][4]=0;
Xinv[23][5][5]=0;
Xinv[23][5][6]=-1;

Xinv[23][6][1]=0;
Xinv[23][6][2]=0;
Xinv[23][6][3]=-BODYLINK2;
Xinv[23][6][4]=sstate21th;
Xinv[23][6][5]=cstate21th;
Xinv[23][6][6]=0;


Xinv[24][1][1]=-sstate1th;
Xinv[24][1][2]=-cstate1th;
Xinv[24][1][3]=0;
Xinv[24][1][4]=0;
Xinv[24][1][5]=0;
Xinv[24][1][6]=0;

Xinv[24][2][1]=0;
Xinv[24][2][2]=0;
Xinv[24][2][3]=1;
Xinv[24][2][4]=0;
Xinv[24][2][5]=0;
Xinv[24][2][6]=0;

Xinv[24][3][1]=-cstate1th;
Xinv[24][3][2]=sstate1th;
Xinv[24][3][3]=0;
Xinv[24][3][4]=0;
Xinv[24][3][5]=0;
Xinv[24][3][6]=0;

Xinv[24][4][1]=cstate1th*WAISTLINK1;
Xinv[24][4][2]=-(sstate1th*WAISTLINK1);
Xinv[24][4][3]=-LEGLINK1;
Xinv[24][4][4]=-sstate1th;
Xinv[24][4][5]=-cstate1th;
Xinv[24][4][6]=0;

Xinv[24][5][1]=-(LEGLINK1*sstate1th) - cstate1th*WAISTLINK2;
Xinv[24][5][2]=-(cstate1th*LEGLINK1) + sstate1th*WAISTLINK2;
Xinv[24][5][3]=0;
Xinv[24][5][4]=0;
Xinv[24][5][5]=0;
Xinv[24][5][6]=1;

Xinv[24][6][1]=-(sstate1th*WAISTLINK1);
Xinv[24][6][2]=-(cstate1th*WAISTLINK1);
Xinv[24][6][3]=-WAISTLINK2;
Xinv[24][6][4]=-cstate1th;
Xinv[24][6][5]=sstate1th;
Xinv[24][6][6]=0;


Xinv[25][1][1]=-sstate2th;
Xinv[25][1][2]=-cstate2th;
Xinv[25][1][3]=0;
Xinv[25][1][4]=0;
Xinv[25][1][5]=0;
Xinv[25][1][6]=0;

Xinv[25][2][1]=0;
Xinv[25][2][2]=0;
Xinv[25][2][3]=-1;
Xinv[25][2][4]=0;
Xinv[25][2][5]=0;
Xinv[25][2][6]=0;

Xinv[25][3][1]=cstate2th;
Xinv[25][3][2]=-sstate2th;
Xinv[25][3][3]=0;
Xinv[25][3][4]=0;
Xinv[25][3][5]=0;
Xinv[25][3][6]=0;

Xinv[25][4][1]=0;
Xinv[25][4][2]=0;
Xinv[25][4][3]=0;
Xinv[25][4][4]=-sstate2th;
Xinv[25][4][5]=-cstate2th;
Xinv[25][4][6]=0;

Xinv[25][5][1]=0;
Xinv[25][5][2]=0;
Xinv[25][5][3]=0;
Xinv[25][5][4]=0;
Xinv[25][5][5]=0;
Xinv[25][5][6]=-1;

Xinv[25][6][1]=0;
Xinv[25][6][2]=0;
Xinv[25][6][3]=0;
Xinv[25][6][4]=cstate2th;
Xinv[25][6][5]=-sstate2th;
Xinv[25][6][6]=0;


Xinv[26][1][1]=cstate3th;
Xinv[26][1][2]=sstate3th;
Xinv[26][1][3]=0;
Xinv[26][1][4]=0;
Xinv[26][1][5]=0;
Xinv[26][1][6]=0;

Xinv[26][2][1]=0;
Xinv[26][2][2]=0;
Xinv[26][2][3]=-1;
Xinv[26][2][4]=0;
Xinv[26][2][5]=0;
Xinv[26][2][6]=0;

Xinv[26][3][1]=-sstate3th;
Xinv[26][3][2]=cstate3th;
Xinv[26][3][3]=0;
Xinv[26][3][4]=0;
Xinv[26][3][5]=0;
Xinv[26][3][6]=0;

Xinv[26][4][1]=0;
Xinv[26][4][2]=0;
Xinv[26][4][3]=0;
Xinv[26][4][4]=cstate3th;
Xinv[26][4][5]=sstate3th;
Xinv[26][4][6]=0;

Xinv[26][5][1]=0;
Xinv[26][5][2]=0;
Xinv[26][5][3]=0;
Xinv[26][5][4]=0;
Xinv[26][5][5]=0;
Xinv[26][5][6]=-1;

Xinv[26][6][1]=0;
Xinv[26][6][2]=0;
Xinv[26][6][3]=0;
Xinv[26][6][4]=-sstate3th;
Xinv[26][6][5]=cstate3th;
Xinv[26][6][6]=0;


Xinv[27][1][1]=cstate4th;
Xinv[27][1][2]=-sstate4th;
Xinv[27][1][3]=0;
Xinv[27][1][4]=0;
Xinv[27][1][5]=0;
Xinv[27][1][6]=0;

Xinv[27][2][1]=sstate4th;
Xinv[27][2][2]=cstate4th;
Xinv[27][2][3]=0;
Xinv[27][2][4]=0;
Xinv[27][2][5]=0;
Xinv[27][2][6]=0;

Xinv[27][3][1]=0;
Xinv[27][3][2]=0;
Xinv[27][3][3]=1;
Xinv[27][3][4]=0;
Xinv[27][3][5]=0;
Xinv[27][3][6]=0;

Xinv[27][4][1]=0;
Xinv[27][4][2]=0;
Xinv[27][4][3]=0;
Xinv[27][4][4]=cstate4th;
Xinv[27][4][5]=-sstate4th;
Xinv[27][4][6]=0;

Xinv[27][5][1]=0;
Xinv[27][5][2]=0;
Xinv[27][5][3]=LEGLINK2;
Xinv[27][5][4]=sstate4th;
Xinv[27][5][5]=cstate4th;
Xinv[27][5][6]=0;

Xinv[27][6][1]=-(LEGLINK2*sstate4th);
Xinv[27][6][2]=-(cstate4th*LEGLINK2);
Xinv[27][6][3]=0;
Xinv[27][6][4]=0;
Xinv[27][6][5]=0;
Xinv[27][6][6]=1;


Xinv[28][1][1]=cstate5th;
Xinv[28][1][2]=-sstate5th;
Xinv[28][1][3]=0;
Xinv[28][1][4]=0;
Xinv[28][1][5]=0;
Xinv[28][1][6]=0;

Xinv[28][2][1]=sstate5th;
Xinv[28][2][2]=cstate5th;
Xinv[28][2][3]=0;
Xinv[28][2][4]=0;
Xinv[28][2][5]=0;
Xinv[28][2][6]=0;

Xinv[28][3][1]=0;
Xinv[28][3][2]=0;
Xinv[28][3][3]=1;
Xinv[28][3][4]=0;
Xinv[28][3][5]=0;
Xinv[28][3][6]=0;

Xinv[28][4][1]=0;
Xinv[28][4][2]=0;
Xinv[28][4][3]=0;
Xinv[28][4][4]=cstate5th;
Xinv[28][4][5]=-sstate5th;
Xinv[28][4][6]=0;

Xinv[28][5][1]=0;
Xinv[28][5][2]=0;
Xinv[28][5][3]=LEGLINK3;
Xinv[28][5][4]=sstate5th;
Xinv[28][5][5]=cstate5th;
Xinv[28][5][6]=0;

Xinv[28][6][1]=-(LEGLINK3*sstate5th);
Xinv[28][6][2]=-(cstate5th*LEGLINK3);
Xinv[28][6][3]=0;
Xinv[28][6][4]=0;
Xinv[28][6][5]=0;
Xinv[28][6][6]=1;


Xinv[29][1][1]=cstate6th;
Xinv[29][1][2]=sstate6th;
Xinv[29][1][3]=0;
Xinv[29][1][4]=0;
Xinv[29][1][5]=0;
Xinv[29][1][6]=0;

Xinv[29][2][1]=0;
Xinv[29][2][2]=0;
Xinv[29][2][3]=1;
Xinv[29][2][4]=0;
Xinv[29][2][5]=0;
Xinv[29][2][6]=0;

Xinv[29][3][1]=sstate6th;
Xinv[29][3][2]=-cstate6th;
Xinv[29][3][3]=0;
Xinv[29][3][4]=0;
Xinv[29][3][5]=0;
Xinv[29][3][6]=0;

Xinv[29][4][1]=0;
Xinv[29][4][2]=0;
Xinv[29][4][3]=0;
Xinv[29][4][4]=cstate6th;
Xinv[29][4][5]=sstate6th;
Xinv[29][4][6]=0;

Xinv[29][5][1]=0;
Xinv[29][5][2]=0;
Xinv[29][5][3]=0;
Xinv[29][5][4]=0;
Xinv[29][5][5]=0;
Xinv[29][5][6]=1;

Xinv[29][6][1]=0;
Xinv[29][6][2]=0;
Xinv[29][6][3]=0;
Xinv[29][6][4]=sstate6th;
Xinv[29][6][5]=-cstate6th;
Xinv[29][6][6]=0;


Xinv[30][1][1]=1;
Xinv[30][1][2]=0;
Xinv[30][1][3]=0;
Xinv[30][1][4]=0;
Xinv[30][1][5]=0;
Xinv[30][1][6]=0;

Xinv[30][2][1]=0;
Xinv[30][2][2]=1;
Xinv[30][2][3]=0;
Xinv[30][2][4]=0;
Xinv[30][2][5]=0;
Xinv[30][2][6]=0;

Xinv[30][3][1]=0;
Xinv[30][3][2]=0;
Xinv[30][3][3]=1;
Xinv[30][3][4]=0;
Xinv[30][3][5]=0;
Xinv[30][3][6]=0;

Xinv[30][4][1]=0;
Xinv[30][4][2]=-FOOTLLENGLONG;
Xinv[30][4][3]=FOOTWIDLONG;
Xinv[30][4][4]=1;
Xinv[30][4][5]=0;
Xinv[30][4][6]=0;

Xinv[30][5][1]=FOOTLLENGLONG;
Xinv[30][5][2]=0;
Xinv[30][5][3]=LEGLINK4;
Xinv[30][5][4]=0;
Xinv[30][5][5]=1;
Xinv[30][5][6]=0;

Xinv[30][6][1]=-FOOTWIDLONG;
Xinv[30][6][2]=-LEGLINK4;
Xinv[30][6][3]=0;
Xinv[30][6][4]=0;
Xinv[30][6][5]=0;
Xinv[30][6][6]=1;


Xinv[31][1][1]=1;
Xinv[31][1][2]=0;
Xinv[31][1][3]=0;
Xinv[31][1][4]=0;
Xinv[31][1][5]=0;
Xinv[31][1][6]=0;

Xinv[31][2][1]=0;
Xinv[31][2][2]=1;
Xinv[31][2][3]=0;
Xinv[31][2][4]=0;
Xinv[31][2][5]=0;
Xinv[31][2][6]=0;

Xinv[31][3][1]=0;
Xinv[31][3][2]=0;
Xinv[31][3][3]=1;
Xinv[31][3][4]=0;
Xinv[31][3][5]=0;
Xinv[31][3][6]=0;

Xinv[31][4][1]=0;
Xinv[31][4][2]=-FOOTLLENGLONG;
Xinv[31][4][3]=-FOOTWIDSHORT;
Xinv[31][4][4]=1;
Xinv[31][4][5]=0;
Xinv[31][4][6]=0;

Xinv[31][5][1]=FOOTLLENGLONG;
Xinv[31][5][2]=0;
Xinv[31][5][3]=LEGLINK4;
Xinv[31][5][4]=0;
Xinv[31][5][5]=1;
Xinv[31][5][6]=0;

Xinv[31][6][1]=FOOTWIDSHORT;
Xinv[31][6][2]=-LEGLINK4;
Xinv[31][6][3]=0;
Xinv[31][6][4]=0;
Xinv[31][6][5]=0;
Xinv[31][6][6]=1;


Xinv[32][1][1]=1;
Xinv[32][1][2]=0;
Xinv[32][1][3]=0;
Xinv[32][1][4]=0;
Xinv[32][1][5]=0;
Xinv[32][1][6]=0;

Xinv[32][2][1]=0;
Xinv[32][2][2]=1;
Xinv[32][2][3]=0;
Xinv[32][2][4]=0;
Xinv[32][2][5]=0;
Xinv[32][2][6]=0;

Xinv[32][3][1]=0;
Xinv[32][3][2]=0;
Xinv[32][3][3]=1;
Xinv[32][3][4]=0;
Xinv[32][3][5]=0;
Xinv[32][3][6]=0;

Xinv[32][4][1]=0;
Xinv[32][4][2]=FOOTLENGSHORT;
Xinv[32][4][3]=-FOOTWIDSHORT;
Xinv[32][4][4]=1;
Xinv[32][4][5]=0;
Xinv[32][4][6]=0;

Xinv[32][5][1]=-FOOTLENGSHORT;
Xinv[32][5][2]=0;
Xinv[32][5][3]=LEGLINK4;
Xinv[32][5][4]=0;
Xinv[32][5][5]=1;
Xinv[32][5][6]=0;

Xinv[32][6][1]=FOOTWIDSHORT;
Xinv[32][6][2]=-LEGLINK4;
Xinv[32][6][3]=0;
Xinv[32][6][4]=0;
Xinv[32][6][5]=0;
Xinv[32][6][6]=1;


Xinv[33][1][1]=1;
Xinv[33][1][2]=0;
Xinv[33][1][3]=0;
Xinv[33][1][4]=0;
Xinv[33][1][5]=0;
Xinv[33][1][6]=0;

Xinv[33][2][1]=0;
Xinv[33][2][2]=1;
Xinv[33][2][3]=0;
Xinv[33][2][4]=0;
Xinv[33][2][5]=0;
Xinv[33][2][6]=0;

Xinv[33][3][1]=0;
Xinv[33][3][2]=0;
Xinv[33][3][3]=1;
Xinv[33][3][4]=0;
Xinv[33][3][5]=0;
Xinv[33][3][6]=0;

Xinv[33][4][1]=0;
Xinv[33][4][2]=FOOTLENGSHORT;
Xinv[33][4][3]=FOOTWIDLONG;
Xinv[33][4][4]=1;
Xinv[33][4][5]=0;
Xinv[33][4][6]=0;

Xinv[33][5][1]=-FOOTLENGSHORT;
Xinv[33][5][2]=0;
Xinv[33][5][3]=LEGLINK4;
Xinv[33][5][4]=0;
Xinv[33][5][5]=1;
Xinv[33][5][6]=0;

Xinv[33][6][1]=-FOOTWIDLONG;
Xinv[33][6][2]=-LEGLINK4;
Xinv[33][6][3]=0;
Xinv[33][6][4]=0;
Xinv[33][6][5]=0;
Xinv[33][6][6]=1;


Xinv[34][1][1]=rceff1a2*rceff1a3;
Xinv[34][1][2]=-(rceff1a2*rseff1a3);
Xinv[34][1][3]=rseff1a2;
Xinv[34][1][4]=0;
Xinv[34][1][5]=0;
Xinv[34][1][6]=0;

Xinv[34][2][1]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
Xinv[34][2][2]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
Xinv[34][2][3]=-(rceff1a2*rseff1a1);
Xinv[34][2][4]=0;
Xinv[34][2][5]=0;
Xinv[34][2][6]=0;

Xinv[34][3][1]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;
Xinv[34][3][2]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;
Xinv[34][3][3]=rceff1a1*rceff1a2;
Xinv[34][3][4]=0;
Xinv[34][3][5]=0;
Xinv[34][3][6]=0;

Xinv[34][4][1]=(-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3)*eff[1].x[2] - (rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3)*eff[1].x[3];
Xinv[34][4][2]=(rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3)*eff[1].x[2] - (rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3)*eff[1].x[3];
Xinv[34][4][3]=rceff1a1*rceff1a2*eff[1].x[2] + rceff1a2*rseff1a1*eff[1].x[3];
Xinv[34][4][4]=rceff1a2*rceff1a3;
Xinv[34][4][5]=-(rceff1a2*rseff1a3);
Xinv[34][4][6]=rseff1a2;

Xinv[34][5][1]=-((-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3)*eff[1].x[1]) + rceff1a2*rceff1a3*eff[1].x[3];
Xinv[34][5][2]=-((rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3)*eff[1].x[1]) - rceff1a2*rseff1a3*eff[1].x[3];
Xinv[34][5][3]=-(rceff1a1*rceff1a2*eff[1].x[1]) + rseff1a2*eff[1].x[3];
Xinv[34][5][4]=rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3;
Xinv[34][5][5]=rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3;
Xinv[34][5][6]=-(rceff1a2*rseff1a1);

Xinv[34][6][1]=(rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3)*eff[1].x[1] - rceff1a2*rceff1a3*eff[1].x[2];
Xinv[34][6][2]=(rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3)*eff[1].x[1] + rceff1a2*rseff1a3*eff[1].x[2];
Xinv[34][6][3]=-(rceff1a2*rseff1a1*eff[1].x[1]) - rseff1a2*eff[1].x[2];
Xinv[34][6][4]=-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3;
Xinv[34][6][5]=rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3;
Xinv[34][6][6]=rceff1a1*rceff1a2;


Xinv[35][1][1]=1;
Xinv[35][1][2]=0;
Xinv[35][1][3]=0;
Xinv[35][1][4]=0;
Xinv[35][1][5]=0;
Xinv[35][1][6]=0;

Xinv[35][2][1]=0;
Xinv[35][2][2]=1;
Xinv[35][2][3]=0;
Xinv[35][2][4]=0;
Xinv[35][2][5]=0;
Xinv[35][2][6]=0;

Xinv[35][3][1]=0;
Xinv[35][3][2]=0;
Xinv[35][3][3]=1;
Xinv[35][3][4]=0;
Xinv[35][3][5]=0;
Xinv[35][3][6]=0;

Xinv[35][4][1]=0;
Xinv[35][4][2]=0;
Xinv[35][4][3]=0;
Xinv[35][4][4]=1;
Xinv[35][4][5]=0;
Xinv[35][4][6]=0;

Xinv[35][5][1]=0;
Xinv[35][5][2]=0;
Xinv[35][5][3]=LEGLINK4;
Xinv[35][5][4]=0;
Xinv[35][5][5]=1;
Xinv[35][5][6]=0;

Xinv[35][6][1]=0;
Xinv[35][6][2]=-LEGLINK4;
Xinv[35][6][3]=0;
Xinv[35][6][4]=0;
Xinv[35][6][5]=0;
Xinv[35][6][6]=1;


Xinv[36][1][1]=-sstate11th;
Xinv[36][1][2]=-cstate11th;
Xinv[36][1][3]=0;
Xinv[36][1][4]=0;
Xinv[36][1][5]=0;
Xinv[36][1][6]=0;

Xinv[36][2][1]=0;
Xinv[36][2][2]=0;
Xinv[36][2][3]=1;
Xinv[36][2][4]=0;
Xinv[36][2][5]=0;
Xinv[36][2][6]=0;

Xinv[36][3][1]=-cstate11th;
Xinv[36][3][2]=sstate11th;
Xinv[36][3][3]=0;
Xinv[36][3][4]=0;
Xinv[36][3][5]=0;
Xinv[36][3][6]=0;

Xinv[36][4][1]=cstate11th*WAISTLINK1;
Xinv[36][4][2]=-(sstate11th*WAISTLINK1);
Xinv[36][4][3]=LEGLINK1;
Xinv[36][4][4]=-sstate11th;
Xinv[36][4][5]=-cstate11th;
Xinv[36][4][6]=0;

Xinv[36][5][1]=LEGLINK1*sstate11th - cstate11th*WAISTLINK2;
Xinv[36][5][2]=cstate11th*LEGLINK1 + sstate11th*WAISTLINK2;
Xinv[36][5][3]=0;
Xinv[36][5][4]=0;
Xinv[36][5][5]=0;
Xinv[36][5][6]=1;

Xinv[36][6][1]=-(sstate11th*WAISTLINK1);
Xinv[36][6][2]=-(cstate11th*WAISTLINK1);
Xinv[36][6][3]=-WAISTLINK2;
Xinv[36][6][4]=-cstate11th;
Xinv[36][6][5]=sstate11th;
Xinv[36][6][6]=0;


Xinv[37][1][1]=-sstate12th;
Xinv[37][1][2]=-cstate12th;
Xinv[37][1][3]=0;
Xinv[37][1][4]=0;
Xinv[37][1][5]=0;
Xinv[37][1][6]=0;

Xinv[37][2][1]=0;
Xinv[37][2][2]=0;
Xinv[37][2][3]=-1;
Xinv[37][2][4]=0;
Xinv[37][2][5]=0;
Xinv[37][2][6]=0;

Xinv[37][3][1]=cstate12th;
Xinv[37][3][2]=-sstate12th;
Xinv[37][3][3]=0;
Xinv[37][3][4]=0;
Xinv[37][3][5]=0;
Xinv[37][3][6]=0;

Xinv[37][4][1]=0;
Xinv[37][4][2]=0;
Xinv[37][4][3]=0;
Xinv[37][4][4]=-sstate12th;
Xinv[37][4][5]=-cstate12th;
Xinv[37][4][6]=0;

Xinv[37][5][1]=0;
Xinv[37][5][2]=0;
Xinv[37][5][3]=0;
Xinv[37][5][4]=0;
Xinv[37][5][5]=0;
Xinv[37][5][6]=-1;

Xinv[37][6][1]=0;
Xinv[37][6][2]=0;
Xinv[37][6][3]=0;
Xinv[37][6][4]=cstate12th;
Xinv[37][6][5]=-sstate12th;
Xinv[37][6][6]=0;


Xinv[38][1][1]=cstate13th;
Xinv[38][1][2]=-sstate13th;
Xinv[38][1][3]=0;
Xinv[38][1][4]=0;
Xinv[38][1][5]=0;
Xinv[38][1][6]=0;

Xinv[38][2][1]=0;
Xinv[38][2][2]=0;
Xinv[38][2][3]=-1;
Xinv[38][2][4]=0;
Xinv[38][2][5]=0;
Xinv[38][2][6]=0;

Xinv[38][3][1]=sstate13th;
Xinv[38][3][2]=cstate13th;
Xinv[38][3][3]=0;
Xinv[38][3][4]=0;
Xinv[38][3][5]=0;
Xinv[38][3][6]=0;

Xinv[38][4][1]=0;
Xinv[38][4][2]=0;
Xinv[38][4][3]=0;
Xinv[38][4][4]=cstate13th;
Xinv[38][4][5]=-sstate13th;
Xinv[38][4][6]=0;

Xinv[38][5][1]=0;
Xinv[38][5][2]=0;
Xinv[38][5][3]=0;
Xinv[38][5][4]=0;
Xinv[38][5][5]=0;
Xinv[38][5][6]=-1;

Xinv[38][6][1]=0;
Xinv[38][6][2]=0;
Xinv[38][6][3]=0;
Xinv[38][6][4]=sstate13th;
Xinv[38][6][5]=cstate13th;
Xinv[38][6][6]=0;


Xinv[39][1][1]=cstate14th;
Xinv[39][1][2]=sstate14th;
Xinv[39][1][3]=0;
Xinv[39][1][4]=0;
Xinv[39][1][5]=0;
Xinv[39][1][6]=0;

Xinv[39][2][1]=-sstate14th;
Xinv[39][2][2]=cstate14th;
Xinv[39][2][3]=0;
Xinv[39][2][4]=0;
Xinv[39][2][5]=0;
Xinv[39][2][6]=0;

Xinv[39][3][1]=0;
Xinv[39][3][2]=0;
Xinv[39][3][3]=1;
Xinv[39][3][4]=0;
Xinv[39][3][5]=0;
Xinv[39][3][6]=0;

Xinv[39][4][1]=0;
Xinv[39][4][2]=0;
Xinv[39][4][3]=0;
Xinv[39][4][4]=cstate14th;
Xinv[39][4][5]=sstate14th;
Xinv[39][4][6]=0;

Xinv[39][5][1]=0;
Xinv[39][5][2]=0;
Xinv[39][5][3]=LEGLINK2;
Xinv[39][5][4]=-sstate14th;
Xinv[39][5][5]=cstate14th;
Xinv[39][5][6]=0;

Xinv[39][6][1]=LEGLINK2*sstate14th;
Xinv[39][6][2]=-(cstate14th*LEGLINK2);
Xinv[39][6][3]=0;
Xinv[39][6][4]=0;
Xinv[39][6][5]=0;
Xinv[39][6][6]=1;


Xinv[40][1][1]=cstate15th;
Xinv[40][1][2]=sstate15th;
Xinv[40][1][3]=0;
Xinv[40][1][4]=0;
Xinv[40][1][5]=0;
Xinv[40][1][6]=0;

Xinv[40][2][1]=-sstate15th;
Xinv[40][2][2]=cstate15th;
Xinv[40][2][3]=0;
Xinv[40][2][4]=0;
Xinv[40][2][5]=0;
Xinv[40][2][6]=0;

Xinv[40][3][1]=0;
Xinv[40][3][2]=0;
Xinv[40][3][3]=1;
Xinv[40][3][4]=0;
Xinv[40][3][5]=0;
Xinv[40][3][6]=0;

Xinv[40][4][1]=0;
Xinv[40][4][2]=0;
Xinv[40][4][3]=0;
Xinv[40][4][4]=cstate15th;
Xinv[40][4][5]=sstate15th;
Xinv[40][4][6]=0;

Xinv[40][5][1]=0;
Xinv[40][5][2]=0;
Xinv[40][5][3]=LEGLINK3;
Xinv[40][5][4]=-sstate15th;
Xinv[40][5][5]=cstate15th;
Xinv[40][5][6]=0;

Xinv[40][6][1]=LEGLINK3*sstate15th;
Xinv[40][6][2]=-(cstate15th*LEGLINK3);
Xinv[40][6][3]=0;
Xinv[40][6][4]=0;
Xinv[40][6][5]=0;
Xinv[40][6][6]=1;


Xinv[41][1][1]=cstate16th;
Xinv[41][1][2]=sstate16th;
Xinv[41][1][3]=0;
Xinv[41][1][4]=0;
Xinv[41][1][5]=0;
Xinv[41][1][6]=0;

Xinv[41][2][1]=0;
Xinv[41][2][2]=0;
Xinv[41][2][3]=1;
Xinv[41][2][4]=0;
Xinv[41][2][5]=0;
Xinv[41][2][6]=0;

Xinv[41][3][1]=sstate16th;
Xinv[41][3][2]=-cstate16th;
Xinv[41][3][3]=0;
Xinv[41][3][4]=0;
Xinv[41][3][5]=0;
Xinv[41][3][6]=0;

Xinv[41][4][1]=0;
Xinv[41][4][2]=0;
Xinv[41][4][3]=0;
Xinv[41][4][4]=cstate16th;
Xinv[41][4][5]=sstate16th;
Xinv[41][4][6]=0;

Xinv[41][5][1]=0;
Xinv[41][5][2]=0;
Xinv[41][5][3]=0;
Xinv[41][5][4]=0;
Xinv[41][5][5]=0;
Xinv[41][5][6]=1;

Xinv[41][6][1]=0;
Xinv[41][6][2]=0;
Xinv[41][6][3]=0;
Xinv[41][6][4]=sstate16th;
Xinv[41][6][5]=-cstate16th;
Xinv[41][6][6]=0;


Xinv[42][1][1]=1;
Xinv[42][1][2]=0;
Xinv[42][1][3]=0;
Xinv[42][1][4]=0;
Xinv[42][1][5]=0;
Xinv[42][1][6]=0;

Xinv[42][2][1]=0;
Xinv[42][2][2]=1;
Xinv[42][2][3]=0;
Xinv[42][2][4]=0;
Xinv[42][2][5]=0;
Xinv[42][2][6]=0;

Xinv[42][3][1]=0;
Xinv[42][3][2]=0;
Xinv[42][3][3]=1;
Xinv[42][3][4]=0;
Xinv[42][3][5]=0;
Xinv[42][3][6]=0;

Xinv[42][4][1]=0;
Xinv[42][4][2]=-FOOTLLENGLONG;
Xinv[42][4][3]=-FOOTWIDLONG;
Xinv[42][4][4]=1;
Xinv[42][4][5]=0;
Xinv[42][4][6]=0;

Xinv[42][5][1]=FOOTLLENGLONG;
Xinv[42][5][2]=0;
Xinv[42][5][3]=LEGLINK4;
Xinv[42][5][4]=0;
Xinv[42][5][5]=1;
Xinv[42][5][6]=0;

Xinv[42][6][1]=FOOTWIDLONG;
Xinv[42][6][2]=-LEGLINK4;
Xinv[42][6][3]=0;
Xinv[42][6][4]=0;
Xinv[42][6][5]=0;
Xinv[42][6][6]=1;


Xinv[43][1][1]=1;
Xinv[43][1][2]=0;
Xinv[43][1][3]=0;
Xinv[43][1][4]=0;
Xinv[43][1][5]=0;
Xinv[43][1][6]=0;

Xinv[43][2][1]=0;
Xinv[43][2][2]=1;
Xinv[43][2][3]=0;
Xinv[43][2][4]=0;
Xinv[43][2][5]=0;
Xinv[43][2][6]=0;

Xinv[43][3][1]=0;
Xinv[43][3][2]=0;
Xinv[43][3][3]=1;
Xinv[43][3][4]=0;
Xinv[43][3][5]=0;
Xinv[43][3][6]=0;

Xinv[43][4][1]=0;
Xinv[43][4][2]=-FOOTLLENGLONG;
Xinv[43][4][3]=FOOTWIDSHORT;
Xinv[43][4][4]=1;
Xinv[43][4][5]=0;
Xinv[43][4][6]=0;

Xinv[43][5][1]=FOOTLLENGLONG;
Xinv[43][5][2]=0;
Xinv[43][5][3]=LEGLINK4;
Xinv[43][5][4]=0;
Xinv[43][5][5]=1;
Xinv[43][5][6]=0;

Xinv[43][6][1]=-FOOTWIDSHORT;
Xinv[43][6][2]=-LEGLINK4;
Xinv[43][6][3]=0;
Xinv[43][6][4]=0;
Xinv[43][6][5]=0;
Xinv[43][6][6]=1;


Xinv[44][1][1]=1;
Xinv[44][1][2]=0;
Xinv[44][1][3]=0;
Xinv[44][1][4]=0;
Xinv[44][1][5]=0;
Xinv[44][1][6]=0;

Xinv[44][2][1]=0;
Xinv[44][2][2]=1;
Xinv[44][2][3]=0;
Xinv[44][2][4]=0;
Xinv[44][2][5]=0;
Xinv[44][2][6]=0;

Xinv[44][3][1]=0;
Xinv[44][3][2]=0;
Xinv[44][3][3]=1;
Xinv[44][3][4]=0;
Xinv[44][3][5]=0;
Xinv[44][3][6]=0;

Xinv[44][4][1]=0;
Xinv[44][4][2]=FOOTLENGSHORT;
Xinv[44][4][3]=FOOTWIDSHORT;
Xinv[44][4][4]=1;
Xinv[44][4][5]=0;
Xinv[44][4][6]=0;

Xinv[44][5][1]=-FOOTLENGSHORT;
Xinv[44][5][2]=0;
Xinv[44][5][3]=LEGLINK4;
Xinv[44][5][4]=0;
Xinv[44][5][5]=1;
Xinv[44][5][6]=0;

Xinv[44][6][1]=-FOOTWIDSHORT;
Xinv[44][6][2]=-LEGLINK4;
Xinv[44][6][3]=0;
Xinv[44][6][4]=0;
Xinv[44][6][5]=0;
Xinv[44][6][6]=1;


Xinv[45][1][1]=1;
Xinv[45][1][2]=0;
Xinv[45][1][3]=0;
Xinv[45][1][4]=0;
Xinv[45][1][5]=0;
Xinv[45][1][6]=0;

Xinv[45][2][1]=0;
Xinv[45][2][2]=1;
Xinv[45][2][3]=0;
Xinv[45][2][4]=0;
Xinv[45][2][5]=0;
Xinv[45][2][6]=0;

Xinv[45][3][1]=0;
Xinv[45][3][2]=0;
Xinv[45][3][3]=1;
Xinv[45][3][4]=0;
Xinv[45][3][5]=0;
Xinv[45][3][6]=0;

Xinv[45][4][1]=0;
Xinv[45][4][2]=FOOTLENGSHORT;
Xinv[45][4][3]=-FOOTWIDLONG;
Xinv[45][4][4]=1;
Xinv[45][4][5]=0;
Xinv[45][4][6]=0;

Xinv[45][5][1]=-FOOTLENGSHORT;
Xinv[45][5][2]=0;
Xinv[45][5][3]=LEGLINK4;
Xinv[45][5][4]=0;
Xinv[45][5][5]=1;
Xinv[45][5][6]=0;

Xinv[45][6][1]=FOOTWIDLONG;
Xinv[45][6][2]=-LEGLINK4;
Xinv[45][6][3]=0;
Xinv[45][6][4]=0;
Xinv[45][6][5]=0;
Xinv[45][6][6]=1;


Xinv[46][1][1]=rceff2a2*rceff2a3;
Xinv[46][1][2]=-(rceff2a2*rseff2a3);
Xinv[46][1][3]=rseff2a2;
Xinv[46][1][4]=0;
Xinv[46][1][5]=0;
Xinv[46][1][6]=0;

Xinv[46][2][1]=rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3;
Xinv[46][2][2]=rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3;
Xinv[46][2][3]=-(rceff2a2*rseff2a1);
Xinv[46][2][4]=0;
Xinv[46][2][5]=0;
Xinv[46][2][6]=0;

Xinv[46][3][1]=-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3;
Xinv[46][3][2]=rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3;
Xinv[46][3][3]=rceff2a1*rceff2a2;
Xinv[46][3][4]=0;
Xinv[46][3][5]=0;
Xinv[46][3][6]=0;

Xinv[46][4][1]=(-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3)*eff[2].x[2] - (rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3)*eff[2].x[3];
Xinv[46][4][2]=(rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3)*eff[2].x[2] - (rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3)*eff[2].x[3];
Xinv[46][4][3]=rceff2a1*rceff2a2*eff[2].x[2] + rceff2a2*rseff2a1*eff[2].x[3];
Xinv[46][4][4]=rceff2a2*rceff2a3;
Xinv[46][4][5]=-(rceff2a2*rseff2a3);
Xinv[46][4][6]=rseff2a2;

Xinv[46][5][1]=-((-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3)*eff[2].x[1]) + rceff2a2*rceff2a3*eff[2].x[3];
Xinv[46][5][2]=-((rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3)*eff[2].x[1]) - rceff2a2*rseff2a3*eff[2].x[3];
Xinv[46][5][3]=-(rceff2a1*rceff2a2*eff[2].x[1]) + rseff2a2*eff[2].x[3];
Xinv[46][5][4]=rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3;
Xinv[46][5][5]=rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3;
Xinv[46][5][6]=-(rceff2a2*rseff2a1);

Xinv[46][6][1]=(rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3)*eff[2].x[1] - rceff2a2*rceff2a3*eff[2].x[2];
Xinv[46][6][2]=(rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3)*eff[2].x[1] + rceff2a2*rseff2a3*eff[2].x[2];
Xinv[46][6][3]=-(rceff2a2*rseff2a1*eff[2].x[1]) - rseff2a2*eff[2].x[2];
Xinv[46][6][4]=-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3;
Xinv[46][6][5]=rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3;
Xinv[46][6][6]=rceff2a1*rceff2a2;


Xinv[47][1][1]=1;
Xinv[47][1][2]=0;
Xinv[47][1][3]=0;
Xinv[47][1][4]=0;
Xinv[47][1][5]=0;
Xinv[47][1][6]=0;

Xinv[47][2][1]=0;
Xinv[47][2][2]=1;
Xinv[47][2][3]=0;
Xinv[47][2][4]=0;
Xinv[47][2][5]=0;
Xinv[47][2][6]=0;

Xinv[47][3][1]=0;
Xinv[47][3][2]=0;
Xinv[47][3][3]=1;
Xinv[47][3][4]=0;
Xinv[47][3][5]=0;
Xinv[47][3][6]=0;

Xinv[47][4][1]=0;
Xinv[47][4][2]=0;
Xinv[47][4][3]=0;
Xinv[47][4][4]=1;
Xinv[47][4][5]=0;
Xinv[47][4][6]=0;

Xinv[47][5][1]=0;
Xinv[47][5][2]=0;
Xinv[47][5][3]=LEGLINK4;
Xinv[47][5][4]=0;
Xinv[47][5][5]=1;
Xinv[47][5][6]=0;

Xinv[47][6][1]=0;
Xinv[47][6][2]=-LEGLINK4;
Xinv[47][6][3]=0;
Xinv[47][6][4]=0;
Xinv[47][6][5]=0;
Xinv[47][6][6]=1;



/* spatial transpose of axis of the DOFs */
st[1][1]=0;
st[1][2]=0;
st[1][3]=0;
st[1][4]=0;
st[1][5]=0;
st[1][6]=0;

st[2][1]=0;
st[2][2]=0;
st[2][3]=0;
st[2][4]=0;
st[2][5]=0;
st[2][6]=1;

st[3][1]=0;
st[3][2]=0;
st[3][3]=0;
st[3][4]=0;
st[3][5]=0;
st[3][6]=1;

st[4][1]=0;
st[4][2]=0;
st[4][3]=0;
st[4][4]=1;
st[4][5]=0;
st[4][6]=0;

st[5][1]=0;
st[5][2]=0;
st[5][3]=0;
st[5][4]=0;
st[5][5]=0;
st[5][6]=1;

st[6][1]=0;
st[6][2]=0;
st[6][3]=0;
st[6][4]=0;
st[6][5]=0;
st[6][6]=1;

st[7][1]=0;
st[7][2]=0;
st[7][3]=0;
st[7][4]=0;
st[7][5]=0;
st[7][6]=1;

st[8][1]=0;
st[8][2]=0;
st[8][3]=0;
st[8][4]=0;
st[8][5]=0;
st[8][6]=-1;

st[9][1]=0;
st[9][2]=0;
st[9][3]=0;
st[9][4]=0;
st[9][5]=0;
st[9][6]=1;

st[10][1]=0;
st[10][2]=0;
st[10][3]=0;
st[10][4]=0;
st[10][5]=0;
st[10][6]=0;

st[11][1]=0;
st[11][2]=0;
st[11][3]=0;
st[11][4]=0;
st[11][5]=0;
st[11][6]=0;

st[12][1]=0;
st[12][2]=0;
st[12][3]=0;
st[12][4]=0;
st[12][5]=0;
st[12][6]=1;

st[13][1]=0;
st[13][2]=0;
st[13][3]=0;
st[13][4]=0;
st[13][5]=0;
st[13][6]=0;

st[14][1]=0;
st[14][2]=0;
st[14][3]=0;
st[14][4]=0;
st[14][5]=0;
st[14][6]=-1;

st[15][1]=0;
st[15][2]=0;
st[15][3]=0;
st[15][4]=0;
st[15][5]=0;
st[15][6]=1;

st[16][1]=0;
st[16][2]=0;
st[16][3]=0;
st[16][4]=0;
st[16][5]=0;
st[16][6]=1;

st[17][1]=0;
st[17][2]=0;
st[17][3]=0;
st[17][4]=0;
st[17][5]=0;
st[17][6]=1;

st[18][1]=0;
st[18][2]=0;
st[18][3]=0;
st[18][4]=0;
st[18][5]=0;
st[18][6]=1;

st[19][1]=0;
st[19][2]=0;
st[19][3]=0;
st[19][4]=0;
st[19][5]=0;
st[19][6]=0;

st[20][1]=0;
st[20][2]=0;
st[20][3]=0;
st[20][4]=0;
st[20][5]=0;
st[20][6]=0;

st[21][1]=0;
st[21][2]=0;
st[21][3]=0;
st[21][4]=0;
st[21][5]=0;
st[21][6]=1;

st[22][1]=0;
st[22][2]=0;
st[22][3]=0;
st[22][4]=0;
st[22][5]=0;
st[22][6]=0;

st[23][1]=0;
st[23][2]=0;
st[23][3]=0;
st[23][4]=0;
st[23][5]=0;
st[23][6]=1;

st[24][1]=0;
st[24][2]=0;
st[24][3]=0;
st[24][4]=0;
st[24][5]=0;
st[24][6]=1;

st[25][1]=0;
st[25][2]=0;
st[25][3]=0;
st[25][4]=0;
st[25][5]=0;
st[25][6]=1;

st[26][1]=0;
st[26][2]=0;
st[26][3]=0;
st[26][4]=0;
st[26][5]=0;
st[26][6]=-1;

st[27][1]=0;
st[27][2]=0;
st[27][3]=0;
st[27][4]=0;
st[27][5]=0;
st[27][6]=1;

st[28][1]=0;
st[28][2]=0;
st[28][3]=0;
st[28][4]=0;
st[28][5]=0;
st[28][6]=1;

st[29][1]=0;
st[29][2]=0;
st[29][3]=0;
st[29][4]=0;
st[29][5]=0;
st[29][6]=-1;

st[30][1]=0;
st[30][2]=0;
st[30][3]=0;
st[30][4]=0;
st[30][5]=0;
st[30][6]=0;

st[31][1]=0;
st[31][2]=0;
st[31][3]=0;
st[31][4]=0;
st[31][5]=0;
st[31][6]=0;

st[32][1]=0;
st[32][2]=0;
st[32][3]=0;
st[32][4]=0;
st[32][5]=0;
st[32][6]=0;

st[33][1]=0;
st[33][2]=0;
st[33][3]=0;
st[33][4]=0;
st[33][5]=0;
st[33][6]=0;

st[34][1]=0;
st[34][2]=0;
st[34][3]=0;
st[34][4]=0;
st[34][5]=0;
st[34][6]=0;

st[35][1]=0;
st[35][2]=0;
st[35][3]=0;
st[35][4]=0;
st[35][5]=0;
st[35][6]=0;

st[36][1]=0;
st[36][2]=0;
st[36][3]=0;
st[36][4]=0;
st[36][5]=0;
st[36][6]=1;

st[37][1]=0;
st[37][2]=0;
st[37][3]=0;
st[37][4]=0;
st[37][5]=0;
st[37][6]=1;

st[38][1]=0;
st[38][2]=0;
st[38][3]=0;
st[38][4]=0;
st[38][5]=0;
st[38][6]=1;

st[39][1]=0;
st[39][2]=0;
st[39][3]=0;
st[39][4]=0;
st[39][5]=0;
st[39][6]=-1;

st[40][1]=0;
st[40][2]=0;
st[40][3]=0;
st[40][4]=0;
st[40][5]=0;
st[40][6]=-1;

st[41][1]=0;
st[41][2]=0;
st[41][3]=0;
st[41][4]=0;
st[41][5]=0;
st[41][6]=-1;

st[42][1]=0;
st[42][2]=0;
st[42][3]=0;
st[42][4]=0;
st[42][5]=0;
st[42][6]=0;

st[43][1]=0;
st[43][2]=0;
st[43][3]=0;
st[43][4]=0;
st[43][5]=0;
st[43][6]=0;

st[44][1]=0;
st[44][2]=0;
st[44][3]=0;
st[44][4]=0;
st[44][5]=0;
st[44][6]=0;

st[45][1]=0;
st[45][2]=0;
st[45][3]=0;
st[45][4]=0;
st[45][5]=0;
st[45][6]=0;

st[46][1]=0;
st[46][2]=0;
st[46][3]=0;
st[46][4]=0;
st[46][5]=0;
st[46][6]=0;

st[47][1]=0;
st[47][2]=0;
st[47][3]=0;
st[47][4]=0;
st[47][5]=0;
st[47][6]=0;


/* velocity vectors */
v0[1]=baseo[0].ad[1]*(-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[2],2)) + 2*baseo[0].ad[2]*(baseo[0].q[2]*baseo[0].q[3] + baseo[0].q[1]*baseo[0].q[4]) + 2*baseo[0].ad[3]*(-(baseo[0].q[1]*baseo[0].q[3]) + baseo[0].q[2]*baseo[0].q[4]);
v0[2]=baseo[0].ad[2]*(-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[3],2)) + 2*baseo[0].ad[1]*(baseo[0].q[2]*baseo[0].q[3] - baseo[0].q[1]*baseo[0].q[4]) + 2*baseo[0].ad[3]*(baseo[0].q[1]*baseo[0].q[2] + baseo[0].q[3]*baseo[0].q[4]);
v0[3]=2*baseo[0].ad[1]*(baseo[0].q[1]*baseo[0].q[3] + baseo[0].q[2]*baseo[0].q[4]) + 2*baseo[0].ad[2]*(-(baseo[0].q[1]*baseo[0].q[2]) + baseo[0].q[3]*baseo[0].q[4]) + baseo[0].ad[3]*(-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[4],2));
v0[4]=basec[0].xd[1]*(-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[2],2)) + 2*basec[0].xd[2]*(baseo[0].q[2]*baseo[0].q[3] + baseo[0].q[1]*baseo[0].q[4]) + 2*basec[0].xd[3]*(-(baseo[0].q[1]*baseo[0].q[3]) + baseo[0].q[2]*baseo[0].q[4]);
v0[5]=basec[0].xd[2]*(-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[3],2)) + 2*basec[0].xd[1]*(baseo[0].q[2]*baseo[0].q[3] - baseo[0].q[1]*baseo[0].q[4]) + 2*basec[0].xd[3]*(baseo[0].q[1]*baseo[0].q[2] + baseo[0].q[3]*baseo[0].q[4]);
v0[6]=2*basec[0].xd[1]*(baseo[0].q[1]*baseo[0].q[3] + baseo[0].q[2]*baseo[0].q[4]) + 2*basec[0].xd[2]*(-(baseo[0].q[1]*baseo[0].q[2]) + baseo[0].q[3]*baseo[0].q[4]) + basec[0].xd[3]*(-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[4],2));

v1[1]=v0[1];
v1[2]=v0[2];
v1[3]=v0[3];
v1[4]=BODYLINK1*v0[2] + v0[4];
v1[5]=-(BODYLINK1*v0[1]) + v0[5];
v1[6]=v0[6];

v2[1]=cstate22th*v1[1] + sstate22th*v1[2];
v2[2]=-(sstate22th*v1[1]) + cstate22th*v1[2];
v2[3]=state[22].thd + v1[3];
v2[4]=cstate22th*v1[4] + sstate22th*v1[5];
v2[5]=-(sstate22th*v1[4]) + cstate22th*v1[5];
v2[6]=v1[6];

v3[1]=cstate23th*v2[1] - sstate23th*v2[3];
v3[2]=-(sstate23th*v2[1]) - cstate23th*v2[3];
v3[3]=state[23].thd + v2[2];
v3[4]=(cstate23th*HEADLINK1 + HEADLINK2*sstate23th)*v2[2] + cstate23th*v2[4] - sstate23th*v2[6];
v3[5]=(cstate23th*HEADLINK2 - HEADLINK1*sstate23th)*v2[2] - sstate23th*v2[4] - cstate23th*v2[6];
v3[6]=-(HEADLINK1*v2[1]) + HEADLINK2*v2[3] + v2[5];

v4[1]=state[24].thd + v3[1];
v4[2]=-(sstate24th*v3[2]) + cstate24th*v3[3];
v4[3]=-(cstate24th*v3[2]) - sstate24th*v3[3];
v4[4]=v3[4];
v4[5]=-(sstate24th*v3[5]) + cstate24th*v3[6];
v4[6]=-(cstate24th*v3[5]) - sstate24th*v3[6];

v5[1]=cstate7th*v1[1] - sstate7th*v1[3];
v5[2]=-(sstate7th*v1[1]) - cstate7th*v1[3];
v5[3]=state[7].thd + v1[2];
v5[4]=ARMLINK1*sstate7th*v1[1] + ARMLINK1*cstate7th*v1[3] + cstate7th*v1[4] - sstate7th*v1[6];
v5[5]=ARMLINK1*cstate7th*v1[1] - ARMLINK1*sstate7th*v1[3] - sstate7th*v1[4] - cstate7th*v1[6];
v5[6]=v1[5];

v6[1]=-(sstate8th*v5[1]) + cstate8th*v5[3];
v6[2]=-(cstate8th*v5[1]) - sstate8th*v5[3];
v6[3]=state[8].thd - v5[2];
v6[4]=-(sstate8th*v5[4]) + cstate8th*v5[6];
v6[5]=-(cstate8th*v5[4]) - sstate8th*v5[6];
v6[6]=-v5[5];

v7[1]=-(sstate9th*v6[1]) + cstate9th*v6[3];
v7[2]=-(cstate9th*v6[1]) - sstate9th*v6[3];
v7[3]=state[9].thd - v6[2];
v7[4]=-(ARMLINK2*cstate9th*v6[1]) - ARMLINK2*sstate9th*v6[3] - sstate9th*v6[4] + cstate9th*v6[6];
v7[5]=ARMLINK2*sstate9th*v6[1] - ARMLINK2*cstate9th*v6[3] - cstate9th*v6[4] - sstate9th*v6[6];
v7[6]=-v6[5];

v8[1]=cstate10th*v7[1] - sstate10th*v7[3];
v8[2]=sstate10th*v7[1] + cstate10th*v7[3];
v8[3]=-state[10].thd - v7[2];
v8[4]=cstate10th*v7[4] - sstate10th*v7[6];
v8[5]=sstate10th*v7[4] + cstate10th*v7[6];
v8[6]=-v7[5];

v9[1]=cstate25th*v8[1] - sstate25th*v8[3];
v9[2]=-(sstate25th*v8[1]) - cstate25th*v8[3];
v9[3]=state[25].thd + v8[2];
v9[4]=-(ARMLINK3*sstate25th*v8[1]) - ARMLINK3*cstate25th*v8[3] + cstate25th*v8[4] - sstate25th*v8[6];
v9[5]=-(ARMLINK3*cstate25th*v8[1]) + ARMLINK3*sstate25th*v8[3] - sstate25th*v8[4] - cstate25th*v8[6];
v9[6]=v8[5];

v10[1]=v9[1];
v10[2]=v9[2];
v10[3]=v9[3];
v10[4]=-(PALMOFF*v9[3]) + v9[4];
v10[5]=v9[5];
v10[6]=PALMOFF*v9[1] + v9[6];

v11[1]=v10[1];
v11[2]=v10[2];
v11[3]=v10[3];
v11[4]=PALMTIP*v10[2] + v10[4];
v11[5]=-(PALMTIP*v10[1]) + v10[5];
v11[6]=v10[6];

v12[1]=sstate26th*v9[2] + cstate26th*v9[3];
v12[2]=cstate26th*v9[2] - sstate26th*v9[3];
v12[3]=state[26].thd - v9[1];
v12[4]=-(GRIPROOT*sstate26th*v9[1]) + sstate26th*v9[5] + cstate26th*v9[6];
v12[5]=-(cstate26th*GRIPROOT*v9[1]) + cstate26th*v9[5] - sstate26th*v9[6];
v12[6]=-(GRIPROOT*v9[2]) - v9[4];

v13[1]=v12[1];
v13[2]=v12[2];
v13[3]=v12[3];
v13[4]=THUMBOFF*v12[3] + v12[4];
v13[5]=THUMBLEN*v12[3] + v12[5];
v13[6]=-(THUMBOFF*v12[1]) - THUMBLEN*v12[2] + v12[6];

v14[1]=cstate17th*v1[1] + sstate17th*v1[3];
v14[2]=sstate17th*v1[1] - cstate17th*v1[3];
v14[3]=-state[17].thd + v1[2];
v14[4]=ARMLINK1*sstate17th*v1[1] - ARMLINK1*cstate17th*v1[3] + cstate17th*v1[4] + sstate17th*v1[6];
v14[5]=-(ARMLINK1*cstate17th*v1[1]) - ARMLINK1*sstate17th*v1[3] + sstate17th*v1[4] - cstate17th*v1[6];
v14[6]=v1[5];

v15[1]=-(sstate18th*v14[1]) + cstate18th*v14[3];
v15[2]=-(cstate18th*v14[1]) - sstate18th*v14[3];
v15[3]=state[18].thd - v14[2];
v15[4]=-(sstate18th*v14[4]) + cstate18th*v14[6];
v15[5]=-(cstate18th*v14[4]) - sstate18th*v14[6];
v15[6]=-v14[5];

v16[1]=-(sstate19th*v15[1]) + cstate19th*v15[3];
v16[2]=-(cstate19th*v15[1]) - sstate19th*v15[3];
v16[3]=state[19].thd - v15[2];
v16[4]=-(ARMLINK2*cstate19th*v15[1]) - ARMLINK2*sstate19th*v15[3] - sstate19th*v15[4] + cstate19th*v15[6];
v16[5]=ARMLINK2*sstate19th*v15[1] - ARMLINK2*cstate19th*v15[3] - cstate19th*v15[4] - sstate19th*v15[6];
v16[6]=-v15[5];

v17[1]=cstate20th*v16[1] + sstate20th*v16[3];
v17[2]=-(sstate20th*v16[1]) + cstate20th*v16[3];
v17[3]=state[20].thd - v16[2];
v17[4]=cstate20th*v16[4] + sstate20th*v16[6];
v17[5]=-(sstate20th*v16[4]) + cstate20th*v16[6];
v17[6]=-v16[5];

v18[1]=cstate27th*v17[1] - sstate27th*v17[3];
v18[2]=-(sstate27th*v17[1]) - cstate27th*v17[3];
v18[3]=state[27].thd + v17[2];
v18[4]=-(ARMLINK3*sstate27th*v17[1]) - ARMLINK3*cstate27th*v17[3] + cstate27th*v17[4] - sstate27th*v17[6];
v18[5]=-(ARMLINK3*cstate27th*v17[1]) + ARMLINK3*sstate27th*v17[3] - sstate27th*v17[4] - cstate27th*v17[6];
v18[6]=v17[5];

v19[1]=v18[1];
v19[2]=v18[2];
v19[3]=v18[3];
v19[4]=PALMOFF*v18[3] + v18[4];
v19[5]=v18[5];
v19[6]=-(PALMOFF*v18[1]) + v18[6];

v20[1]=v19[1];
v20[2]=v19[2];
v20[3]=v19[3];
v20[4]=PALMTIP*v19[2] + v19[4];
v20[5]=-(PALMTIP*v19[1]) + v19[5];
v20[6]=v19[6];

v21[1]=sstate28th*v18[2] + cstate28th*v18[3];
v21[2]=cstate28th*v18[2] - sstate28th*v18[3];
v21[3]=state[28].thd - v18[1];
v21[4]=-(GRIPROOT*sstate28th*v18[1]) + sstate28th*v18[5] + cstate28th*v18[6];
v21[5]=-(cstate28th*GRIPROOT*v18[1]) + cstate28th*v18[5] - sstate28th*v18[6];
v21[6]=-(GRIPROOT*v18[2]) - v18[4];

v22[1]=v21[1];
v22[2]=v21[2];
v22[3]=v21[3];
v22[4]=-(THUMBOFF*v21[3]) + v21[4];
v22[5]=THUMBLEN*v21[3] + v21[5];
v22[6]=THUMBOFF*v21[1] - THUMBLEN*v21[2] + v21[6];

v23[1]=cstate21th*v0[1] + sstate21th*v0[3];
v23[2]=-(sstate21th*v0[1]) + cstate21th*v0[3];
v23[3]=state[21].thd - v0[2];
v23[4]=-(BODYLINK2*sstate21th*v0[2]) + cstate21th*v0[4] + sstate21th*v0[6];
v23[5]=-(BODYLINK2*cstate21th*v0[2]) - sstate21th*v0[4] + cstate21th*v0[6];
v23[6]=-(BODYLINK2*v0[3]) - v0[5];

v24[1]=-(sstate1th*v23[1]) - cstate1th*v23[3];
v24[2]=-(cstate1th*v23[1]) + sstate1th*v23[3];
v24[3]=state[1].thd + v23[2];
v24[4]=cstate1th*WAISTLINK1*v23[1] + (-(LEGLINK1*sstate1th) - cstate1th*WAISTLINK2)*v23[2] - sstate1th*WAISTLINK1*v23[3] - sstate1th*v23[4] - cstate1th*v23[6];
v24[5]=-(sstate1th*WAISTLINK1*v23[1]) + (-(cstate1th*LEGLINK1) + sstate1th*WAISTLINK2)*v23[2] - cstate1th*WAISTLINK1*v23[3] - cstate1th*v23[4] + sstate1th*v23[6];
v24[6]=-(LEGLINK1*v23[1]) - WAISTLINK2*v23[3] + v23[5];

v25[1]=-(sstate2th*v24[1]) + cstate2th*v24[3];
v25[2]=-(cstate2th*v24[1]) - sstate2th*v24[3];
v25[3]=state[2].thd - v24[2];
v25[4]=-(sstate2th*v24[4]) + cstate2th*v24[6];
v25[5]=-(cstate2th*v24[4]) - sstate2th*v24[6];
v25[6]=-v24[5];

v26[1]=cstate3th*v25[1] - sstate3th*v25[3];
v26[2]=sstate3th*v25[1] + cstate3th*v25[3];
v26[3]=-state[3].thd - v25[2];
v26[4]=cstate3th*v25[4] - sstate3th*v25[6];
v26[5]=sstate3th*v25[4] + cstate3th*v25[6];
v26[6]=-v25[5];

v27[1]=cstate4th*v26[1] + sstate4th*v26[2];
v27[2]=-(sstate4th*v26[1]) + cstate4th*v26[2];
v27[3]=state[4].thd + v26[3];
v27[4]=-(LEGLINK2*sstate4th*v26[3]) + cstate4th*v26[4] + sstate4th*v26[5];
v27[5]=-(cstate4th*LEGLINK2*v26[3]) - sstate4th*v26[4] + cstate4th*v26[5];
v27[6]=LEGLINK2*v26[2] + v26[6];

v28[1]=cstate5th*v27[1] + sstate5th*v27[2];
v28[2]=-(sstate5th*v27[1]) + cstate5th*v27[2];
v28[3]=state[5].thd + v27[3];
v28[4]=-(LEGLINK3*sstate5th*v27[3]) + cstate5th*v27[4] + sstate5th*v27[5];
v28[5]=-(cstate5th*LEGLINK3*v27[3]) - sstate5th*v27[4] + cstate5th*v27[5];
v28[6]=LEGLINK3*v27[2] + v27[6];

v29[1]=cstate6th*v28[1] + sstate6th*v28[3];
v29[2]=sstate6th*v28[1] - cstate6th*v28[3];
v29[3]=-state[6].thd + v28[2];
v29[4]=cstate6th*v28[4] + sstate6th*v28[6];
v29[5]=sstate6th*v28[4] - cstate6th*v28[6];
v29[6]=v28[5];

v30[1]=v29[1];
v30[2]=v29[2];
v30[3]=v29[3];
v30[4]=FOOTLLENGLONG*v29[2] - FOOTWIDLONG*v29[3] + v29[4];
v30[5]=-(FOOTLLENGLONG*v29[1]) - LEGLINK4*v29[3] + v29[5];
v30[6]=FOOTWIDLONG*v29[1] + LEGLINK4*v29[2] + v29[6];

v31[1]=v29[1];
v31[2]=v29[2];
v31[3]=v29[3];
v31[4]=FOOTLLENGLONG*v29[2] + FOOTWIDSHORT*v29[3] + v29[4];
v31[5]=-(FOOTLLENGLONG*v29[1]) - LEGLINK4*v29[3] + v29[5];
v31[6]=-(FOOTWIDSHORT*v29[1]) + LEGLINK4*v29[2] + v29[6];

v32[1]=v29[1];
v32[2]=v29[2];
v32[3]=v29[3];
v32[4]=-(FOOTLENGSHORT*v29[2]) + FOOTWIDSHORT*v29[3] + v29[4];
v32[5]=FOOTLENGSHORT*v29[1] - LEGLINK4*v29[3] + v29[5];
v32[6]=-(FOOTWIDSHORT*v29[1]) + LEGLINK4*v29[2] + v29[6];

v33[1]=v29[1];
v33[2]=v29[2];
v33[3]=v29[3];
v33[4]=-(FOOTLENGSHORT*v29[2]) - FOOTWIDLONG*v29[3] + v29[4];
v33[5]=FOOTLENGSHORT*v29[1] - LEGLINK4*v29[3] + v29[5];
v33[6]=FOOTWIDLONG*v29[1] + LEGLINK4*v29[2] + v29[6];

v34[1]=rceff1a2*rceff1a3*v29[1] + (rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3)*v29[2] + (-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3)*v29[3];
v34[2]=-(rceff1a2*rseff1a3*v29[1]) + (rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3)*v29[2] + (rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3)*v29[3];
v34[3]=rseff1a2*v29[1] - rceff1a2*rseff1a1*v29[2] + rceff1a1*rceff1a2*v29[3];
v34[4]=((-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3)*eff[1].x[2] - (rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3)*eff[1].x[3])*v29[1] + (-((-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3)*eff[1].x[1]) + rceff1a2*rceff1a3*eff[1].x[3])*v29[2] + ((rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3)*eff[1].x[1] - rceff1a2*rceff1a3*eff[1].x[2])*v29[3] + rceff1a2*rceff1a3*v29[4] + (rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3)*v29[5] + (-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3)*v29[6];
v34[5]=((rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3)*eff[1].x[2] - (rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3)*eff[1].x[3])*v29[1] + (-((rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3)*eff[1].x[1]) - rceff1a2*rseff1a3*eff[1].x[3])*v29[2] + ((rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3)*eff[1].x[1] + rceff1a2*rseff1a3*eff[1].x[2])*v29[3] - rceff1a2*rseff1a3*v29[4] + (rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3)*v29[5] + (rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3)*v29[6];
v34[6]=(rceff1a1*rceff1a2*eff[1].x[2] + rceff1a2*rseff1a1*eff[1].x[3])*v29[1] + (-(rceff1a1*rceff1a2*eff[1].x[1]) + rseff1a2*eff[1].x[3])*v29[2] + (-(rceff1a2*rseff1a1*eff[1].x[1]) - rseff1a2*eff[1].x[2])*v29[3] + rseff1a2*v29[4] - rceff1a2*rseff1a1*v29[5] + rceff1a1*rceff1a2*v29[6];

v35[1]=v29[1];
v35[2]=v29[2];
v35[3]=v29[3];
v35[4]=v29[4];
v35[5]=-(LEGLINK4*v29[3]) + v29[5];
v35[6]=LEGLINK4*v29[2] + v29[6];

v36[1]=-(sstate11th*v23[1]) - cstate11th*v23[3];
v36[2]=-(cstate11th*v23[1]) + sstate11th*v23[3];
v36[3]=state[11].thd + v23[2];
v36[4]=cstate11th*WAISTLINK1*v23[1] + (LEGLINK1*sstate11th - cstate11th*WAISTLINK2)*v23[2] - sstate11th*WAISTLINK1*v23[3] - sstate11th*v23[4] - cstate11th*v23[6];
v36[5]=-(sstate11th*WAISTLINK1*v23[1]) + (cstate11th*LEGLINK1 + sstate11th*WAISTLINK2)*v23[2] - cstate11th*WAISTLINK1*v23[3] - cstate11th*v23[4] + sstate11th*v23[6];
v36[6]=LEGLINK1*v23[1] - WAISTLINK2*v23[3] + v23[5];

v37[1]=-(sstate12th*v36[1]) + cstate12th*v36[3];
v37[2]=-(cstate12th*v36[1]) - sstate12th*v36[3];
v37[3]=state[12].thd - v36[2];
v37[4]=-(sstate12th*v36[4]) + cstate12th*v36[6];
v37[5]=-(cstate12th*v36[4]) - sstate12th*v36[6];
v37[6]=-v36[5];

v38[1]=cstate13th*v37[1] + sstate13th*v37[3];
v38[2]=-(sstate13th*v37[1]) + cstate13th*v37[3];
v38[3]=state[13].thd - v37[2];
v38[4]=cstate13th*v37[4] + sstate13th*v37[6];
v38[5]=-(sstate13th*v37[4]) + cstate13th*v37[6];
v38[6]=-v37[5];

v39[1]=cstate14th*v38[1] - sstate14th*v38[2];
v39[2]=sstate14th*v38[1] + cstate14th*v38[2];
v39[3]=-state[14].thd + v38[3];
v39[4]=LEGLINK2*sstate14th*v38[3] + cstate14th*v38[4] - sstate14th*v38[5];
v39[5]=-(cstate14th*LEGLINK2*v38[3]) + sstate14th*v38[4] + cstate14th*v38[5];
v39[6]=LEGLINK2*v38[2] + v38[6];

v40[1]=cstate15th*v39[1] - sstate15th*v39[2];
v40[2]=sstate15th*v39[1] + cstate15th*v39[2];
v40[3]=-state[15].thd + v39[3];
v40[4]=LEGLINK3*sstate15th*v39[3] + cstate15th*v39[4] - sstate15th*v39[5];
v40[5]=-(cstate15th*LEGLINK3*v39[3]) + sstate15th*v39[4] + cstate15th*v39[5];
v40[6]=LEGLINK3*v39[2] + v39[6];

v41[1]=cstate16th*v40[1] + sstate16th*v40[3];
v41[2]=sstate16th*v40[1] - cstate16th*v40[3];
v41[3]=-state[16].thd + v40[2];
v41[4]=cstate16th*v40[4] + sstate16th*v40[6];
v41[5]=sstate16th*v40[4] - cstate16th*v40[6];
v41[6]=v40[5];

v42[1]=v41[1];
v42[2]=v41[2];
v42[3]=v41[3];
v42[4]=FOOTLLENGLONG*v41[2] + FOOTWIDLONG*v41[3] + v41[4];
v42[5]=-(FOOTLLENGLONG*v41[1]) - LEGLINK4*v41[3] + v41[5];
v42[6]=-(FOOTWIDLONG*v41[1]) + LEGLINK4*v41[2] + v41[6];

v43[1]=v41[1];
v43[2]=v41[2];
v43[3]=v41[3];
v43[4]=FOOTLLENGLONG*v41[2] - FOOTWIDSHORT*v41[3] + v41[4];
v43[5]=-(FOOTLLENGLONG*v41[1]) - LEGLINK4*v41[3] + v41[5];
v43[6]=FOOTWIDSHORT*v41[1] + LEGLINK4*v41[2] + v41[6];

v44[1]=v41[1];
v44[2]=v41[2];
v44[3]=v41[3];
v44[4]=-(FOOTLENGSHORT*v41[2]) - FOOTWIDSHORT*v41[3] + v41[4];
v44[5]=FOOTLENGSHORT*v41[1] - LEGLINK4*v41[3] + v41[5];
v44[6]=FOOTWIDSHORT*v41[1] + LEGLINK4*v41[2] + v41[6];

v45[1]=v41[1];
v45[2]=v41[2];
v45[3]=v41[3];
v45[4]=-(FOOTLENGSHORT*v41[2]) + FOOTWIDLONG*v41[3] + v41[4];
v45[5]=FOOTLENGSHORT*v41[1] - LEGLINK4*v41[3] + v41[5];
v45[6]=-(FOOTWIDLONG*v41[1]) + LEGLINK4*v41[2] + v41[6];

v46[1]=rceff2a2*rceff2a3*v41[1] + (rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3)*v41[2] + (-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3)*v41[3];
v46[2]=-(rceff2a2*rseff2a3*v41[1]) + (rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3)*v41[2] + (rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3)*v41[3];
v46[3]=rseff2a2*v41[1] - rceff2a2*rseff2a1*v41[2] + rceff2a1*rceff2a2*v41[3];
v46[4]=((-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3)*eff[2].x[2] - (rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3)*eff[2].x[3])*v41[1] + (-((-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3)*eff[2].x[1]) + rceff2a2*rceff2a3*eff[2].x[3])*v41[2] + ((rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3)*eff[2].x[1] - rceff2a2*rceff2a3*eff[2].x[2])*v41[3] + rceff2a2*rceff2a3*v41[4] + (rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3)*v41[5] + (-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3)*v41[6];
v46[5]=((rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3)*eff[2].x[2] - (rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3)*eff[2].x[3])*v41[1] + (-((rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3)*eff[2].x[1]) - rceff2a2*rseff2a3*eff[2].x[3])*v41[2] + ((rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3)*eff[2].x[1] + rceff2a2*rseff2a3*eff[2].x[2])*v41[3] - rceff2a2*rseff2a3*v41[4] + (rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3)*v41[5] + (rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3)*v41[6];
v46[6]=(rceff2a1*rceff2a2*eff[2].x[2] + rceff2a2*rseff2a1*eff[2].x[3])*v41[1] + (-(rceff2a1*rceff2a2*eff[2].x[1]) + rseff2a2*eff[2].x[3])*v41[2] + (-(rceff2a2*rseff2a1*eff[2].x[1]) - rseff2a2*eff[2].x[2])*v41[3] + rseff2a2*v41[4] - rceff2a2*rseff2a1*v41[5] + rceff2a1*rceff2a2*v41[6];

v47[1]=v41[1];
v47[2]=v41[2];
v47[3]=v41[3];
v47[4]=v41[4];
v47[5]=-(LEGLINK4*v41[3]) + v41[5];
v47[6]=LEGLINK4*v41[2] + v41[6];


/* acceleration vectors */
a0[1]=baseo[0].add[1]*(-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[2],2)) + 2*baseo[0].add[2]*(baseo[0].q[2]*baseo[0].q[3] + baseo[0].q[1]*baseo[0].q[4]) + 2*baseo[0].add[3]*(-(baseo[0].q[1]*baseo[0].q[3]) + baseo[0].q[2]*baseo[0].q[4]);
a0[2]=baseo[0].add[2]*(-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[3],2)) + 2*baseo[0].add[1]*(baseo[0].q[2]*baseo[0].q[3] - baseo[0].q[1]*baseo[0].q[4]) + 2*baseo[0].add[3]*(baseo[0].q[1]*baseo[0].q[2] + baseo[0].q[3]*baseo[0].q[4]);
a0[3]=2*baseo[0].add[1]*(baseo[0].q[1]*baseo[0].q[3] + baseo[0].q[2]*baseo[0].q[4]) + 2*baseo[0].add[2]*(-(baseo[0].q[1]*baseo[0].q[2]) + baseo[0].q[3]*baseo[0].q[4]) + baseo[0].add[3]*(-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[4],2));
a0[4]=basec[0].xdd[1]*(-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[2],2)) + 2*basec[0].xdd[2]*(baseo[0].q[2]*baseo[0].q[3] + baseo[0].q[1]*baseo[0].q[4]) + 2*(gravity + basec[0].xdd[3])*(-(baseo[0].q[1]*baseo[0].q[3]) + baseo[0].q[2]*baseo[0].q[4]);
a0[5]=basec[0].xdd[2]*(-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[3],2)) + 2*basec[0].xdd[1]*(baseo[0].q[2]*baseo[0].q[3] - baseo[0].q[1]*baseo[0].q[4]) + 2*(gravity + basec[0].xdd[3])*(baseo[0].q[1]*baseo[0].q[2] + baseo[0].q[3]*baseo[0].q[4]);
a0[6]=2*basec[0].xdd[1]*(baseo[0].q[1]*baseo[0].q[3] + baseo[0].q[2]*baseo[0].q[4]) + 2*basec[0].xdd[2]*(-(baseo[0].q[1]*baseo[0].q[2]) + baseo[0].q[3]*baseo[0].q[4]) + (gravity + basec[0].xdd[3])*(-1 + 2*Power(baseo[0].q[1],2) + 2*Power(baseo[0].q[4],2));

a1[1]=a0[1];
a1[2]=a0[2];
a1[3]=a0[3];
a1[4]=BODYLINK1*a0[2] + a0[4];
a1[5]=-(BODYLINK1*a0[1]) + a0[5];
a1[6]=a0[6];

a2[1]=cstate22th*a1[1] + sstate22th*a1[2] + state[22].thd*v2[2];
a2[2]=-(sstate22th*a1[1]) + cstate22th*a1[2] - state[22].thd*v2[1];
a2[3]=state[22].thdd + a1[3];
a2[4]=cstate22th*a1[4] + sstate22th*a1[5] + state[22].thd*v2[5];
a2[5]=-(sstate22th*a1[4]) + cstate22th*a1[5] - state[22].thd*v2[4];
a2[6]=a1[6];

a3[1]=cstate23th*a2[1] - sstate23th*a2[3] + state[23].thd*v3[2];
a3[2]=-(sstate23th*a2[1]) - cstate23th*a2[3] - state[23].thd*v3[1];
a3[3]=state[23].thdd + a2[2];
a3[4]=(cstate23th*HEADLINK1 + HEADLINK2*sstate23th)*a2[2] + cstate23th*a2[4] - sstate23th*a2[6] + state[23].thd*v3[5];
a3[5]=(cstate23th*HEADLINK2 - HEADLINK1*sstate23th)*a2[2] - sstate23th*a2[4] - cstate23th*a2[6] - state[23].thd*v3[4];
a3[6]=-(HEADLINK1*a2[1]) + HEADLINK2*a2[3] + a2[5];

a4[1]=state[24].thdd + a3[1];
a4[2]=-(sstate24th*a3[2]) + cstate24th*a3[3] + state[24].thd*v4[3];
a4[3]=-(cstate24th*a3[2]) - sstate24th*a3[3] - state[24].thd*v4[2];
a4[4]=a3[4];
a4[5]=-(sstate24th*a3[5]) + cstate24th*a3[6] + state[24].thd*v4[6];
a4[6]=-(cstate24th*a3[5]) - sstate24th*a3[6] - state[24].thd*v4[5];

a5[1]=cstate7th*a1[1] - sstate7th*a1[3] + state[7].thd*v5[2];
a5[2]=-(sstate7th*a1[1]) - cstate7th*a1[3] - state[7].thd*v5[1];
a5[3]=state[7].thdd + a1[2];
a5[4]=ARMLINK1*sstate7th*a1[1] + ARMLINK1*cstate7th*a1[3] + cstate7th*a1[4] - sstate7th*a1[6] + state[7].thd*v5[5];
a5[5]=ARMLINK1*cstate7th*a1[1] - ARMLINK1*sstate7th*a1[3] - sstate7th*a1[4] - cstate7th*a1[6] - state[7].thd*v5[4];
a5[6]=a1[5];

a6[1]=-(sstate8th*a5[1]) + cstate8th*a5[3] + state[8].thd*v6[2];
a6[2]=-(cstate8th*a5[1]) - sstate8th*a5[3] - state[8].thd*v6[1];
a6[3]=state[8].thdd - a5[2];
a6[4]=-(sstate8th*a5[4]) + cstate8th*a5[6] + state[8].thd*v6[5];
a6[5]=-(cstate8th*a5[4]) - sstate8th*a5[6] - state[8].thd*v6[4];
a6[6]=-a5[5];

a7[1]=-(sstate9th*a6[1]) + cstate9th*a6[3] + state[9].thd*v7[2];
a7[2]=-(cstate9th*a6[1]) - sstate9th*a6[3] - state[9].thd*v7[1];
a7[3]=state[9].thdd - a6[2];
a7[4]=-(ARMLINK2*cstate9th*a6[1]) - ARMLINK2*sstate9th*a6[3] - sstate9th*a6[4] + cstate9th*a6[6] + state[9].thd*v7[5];
a7[5]=ARMLINK2*sstate9th*a6[1] - ARMLINK2*cstate9th*a6[3] - cstate9th*a6[4] - sstate9th*a6[6] - state[9].thd*v7[4];
a7[6]=-a6[5];

a8[1]=cstate10th*a7[1] - sstate10th*a7[3] - state[10].thd*v8[2];
a8[2]=sstate10th*a7[1] + cstate10th*a7[3] + state[10].thd*v8[1];
a8[3]=-state[10].thdd - a7[2];
a8[4]=cstate10th*a7[4] - sstate10th*a7[6] - state[10].thd*v8[5];
a8[5]=sstate10th*a7[4] + cstate10th*a7[6] + state[10].thd*v8[4];
a8[6]=-a7[5];

a9[1]=cstate25th*a8[1] - sstate25th*a8[3] + state[25].thd*v9[2];
a9[2]=-(sstate25th*a8[1]) - cstate25th*a8[3] - state[25].thd*v9[1];
a9[3]=state[25].thdd + a8[2];
a9[4]=-(ARMLINK3*sstate25th*a8[1]) - ARMLINK3*cstate25th*a8[3] + cstate25th*a8[4] - sstate25th*a8[6] + state[25].thd*v9[5];
a9[5]=-(ARMLINK3*cstate25th*a8[1]) + ARMLINK3*sstate25th*a8[3] - sstate25th*a8[4] - cstate25th*a8[6] - state[25].thd*v9[4];
a9[6]=a8[5];

a10[1]=a9[1];
a10[2]=a9[2];
a10[3]=a9[3];
a10[4]=-(PALMOFF*a9[3]) + a9[4];
a10[5]=a9[5];
a10[6]=PALMOFF*a9[1] + a9[6];

a11[1]=a10[1];
a11[2]=a10[2];
a11[3]=a10[3];
a11[4]=PALMTIP*a10[2] + a10[4];
a11[5]=-(PALMTIP*a10[1]) + a10[5];
a11[6]=a10[6];

a12[1]=sstate26th*a9[2] + cstate26th*a9[3] + state[26].thd*v12[2];
a12[2]=cstate26th*a9[2] - sstate26th*a9[3] - state[26].thd*v12[1];
a12[3]=state[26].thdd - a9[1];
a12[4]=-(GRIPROOT*sstate26th*a9[1]) + sstate26th*a9[5] + cstate26th*a9[6] + state[26].thd*v12[5];
a12[5]=-(cstate26th*GRIPROOT*a9[1]) + cstate26th*a9[5] - sstate26th*a9[6] - state[26].thd*v12[4];
a12[6]=-(GRIPROOT*a9[2]) - a9[4];

a13[1]=a12[1];
a13[2]=a12[2];
a13[3]=a12[3];
a13[4]=THUMBOFF*a12[3] + a12[4];
a13[5]=THUMBLEN*a12[3] + a12[5];
a13[6]=-(THUMBOFF*a12[1]) - THUMBLEN*a12[2] + a12[6];

a14[1]=cstate17th*a1[1] + sstate17th*a1[3] - state[17].thd*v14[2];
a14[2]=sstate17th*a1[1] - cstate17th*a1[3] + state[17].thd*v14[1];
a14[3]=-state[17].thdd + a1[2];
a14[4]=ARMLINK1*sstate17th*a1[1] - ARMLINK1*cstate17th*a1[3] + cstate17th*a1[4] + sstate17th*a1[6] - state[17].thd*v14[5];
a14[5]=-(ARMLINK1*cstate17th*a1[1]) - ARMLINK1*sstate17th*a1[3] + sstate17th*a1[4] - cstate17th*a1[6] + state[17].thd*v14[4];
a14[6]=a1[5];

a15[1]=-(sstate18th*a14[1]) + cstate18th*a14[3] + state[18].thd*v15[2];
a15[2]=-(cstate18th*a14[1]) - sstate18th*a14[3] - state[18].thd*v15[1];
a15[3]=state[18].thdd - a14[2];
a15[4]=-(sstate18th*a14[4]) + cstate18th*a14[6] + state[18].thd*v15[5];
a15[5]=-(cstate18th*a14[4]) - sstate18th*a14[6] - state[18].thd*v15[4];
a15[6]=-a14[5];

a16[1]=-(sstate19th*a15[1]) + cstate19th*a15[3] + state[19].thd*v16[2];
a16[2]=-(cstate19th*a15[1]) - sstate19th*a15[3] - state[19].thd*v16[1];
a16[3]=state[19].thdd - a15[2];
a16[4]=-(ARMLINK2*cstate19th*a15[1]) - ARMLINK2*sstate19th*a15[3] - sstate19th*a15[4] + cstate19th*a15[6] + state[19].thd*v16[5];
a16[5]=ARMLINK2*sstate19th*a15[1] - ARMLINK2*cstate19th*a15[3] - cstate19th*a15[4] - sstate19th*a15[6] - state[19].thd*v16[4];
a16[6]=-a15[5];

a17[1]=cstate20th*a16[1] + sstate20th*a16[3] + state[20].thd*v17[2];
a17[2]=-(sstate20th*a16[1]) + cstate20th*a16[3] - state[20].thd*v17[1];
a17[3]=state[20].thdd - a16[2];
a17[4]=cstate20th*a16[4] + sstate20th*a16[6] + state[20].thd*v17[5];
a17[5]=-(sstate20th*a16[4]) + cstate20th*a16[6] - state[20].thd*v17[4];
a17[6]=-a16[5];

a18[1]=cstate27th*a17[1] - sstate27th*a17[3] + state[27].thd*v18[2];
a18[2]=-(sstate27th*a17[1]) - cstate27th*a17[3] - state[27].thd*v18[1];
a18[3]=state[27].thdd + a17[2];
a18[4]=-(ARMLINK3*sstate27th*a17[1]) - ARMLINK3*cstate27th*a17[3] + cstate27th*a17[4] - sstate27th*a17[6] + state[27].thd*v18[5];
a18[5]=-(ARMLINK3*cstate27th*a17[1]) + ARMLINK3*sstate27th*a17[3] - sstate27th*a17[4] - cstate27th*a17[6] - state[27].thd*v18[4];
a18[6]=a17[5];

a19[1]=a18[1];
a19[2]=a18[2];
a19[3]=a18[3];
a19[4]=PALMOFF*a18[3] + a18[4];
a19[5]=a18[5];
a19[6]=-(PALMOFF*a18[1]) + a18[6];

a20[1]=a19[1];
a20[2]=a19[2];
a20[3]=a19[3];
a20[4]=PALMTIP*a19[2] + a19[4];
a20[5]=-(PALMTIP*a19[1]) + a19[5];
a20[6]=a19[6];

a21[1]=sstate28th*a18[2] + cstate28th*a18[3] + state[28].thd*v21[2];
a21[2]=cstate28th*a18[2] - sstate28th*a18[3] - state[28].thd*v21[1];
a21[3]=state[28].thdd - a18[1];
a21[4]=-(GRIPROOT*sstate28th*a18[1]) + sstate28th*a18[5] + cstate28th*a18[6] + state[28].thd*v21[5];
a21[5]=-(cstate28th*GRIPROOT*a18[1]) + cstate28th*a18[5] - sstate28th*a18[6] - state[28].thd*v21[4];
a21[6]=-(GRIPROOT*a18[2]) - a18[4];

a22[1]=a21[1];
a22[2]=a21[2];
a22[3]=a21[3];
a22[4]=-(THUMBOFF*a21[3]) + a21[4];
a22[5]=THUMBLEN*a21[3] + a21[5];
a22[6]=THUMBOFF*a21[1] - THUMBLEN*a21[2] + a21[6];

a23[1]=cstate21th*a0[1] + sstate21th*a0[3] + state[21].thd*v23[2];
a23[2]=-(sstate21th*a0[1]) + cstate21th*a0[3] - state[21].thd*v23[1];
a23[3]=state[21].thdd - a0[2];
a23[4]=-(BODYLINK2*sstate21th*a0[2]) + cstate21th*a0[4] + sstate21th*a0[6] + state[21].thd*v23[5];
a23[5]=-(BODYLINK2*cstate21th*a0[2]) - sstate21th*a0[4] + cstate21th*a0[6] - state[21].thd*v23[4];
a23[6]=-(BODYLINK2*a0[3]) - a0[5];

a24[1]=-(sstate1th*a23[1]) - cstate1th*a23[3] + state[1].thd*v24[2];
a24[2]=-(cstate1th*a23[1]) + sstate1th*a23[3] - state[1].thd*v24[1];
a24[3]=state[1].thdd + a23[2];
a24[4]=cstate1th*WAISTLINK1*a23[1] + (-(LEGLINK1*sstate1th) - cstate1th*WAISTLINK2)*a23[2] - sstate1th*WAISTLINK1*a23[3] - sstate1th*a23[4] - cstate1th*a23[6] + state[1].thd*v24[5];
a24[5]=-(sstate1th*WAISTLINK1*a23[1]) + (-(cstate1th*LEGLINK1) + sstate1th*WAISTLINK2)*a23[2] - cstate1th*WAISTLINK1*a23[3] - cstate1th*a23[4] + sstate1th*a23[6] - state[1].thd*v24[4];
a24[6]=-(LEGLINK1*a23[1]) - WAISTLINK2*a23[3] + a23[5];

a25[1]=-(sstate2th*a24[1]) + cstate2th*a24[3] + state[2].thd*v25[2];
a25[2]=-(cstate2th*a24[1]) - sstate2th*a24[3] - state[2].thd*v25[1];
a25[3]=state[2].thdd - a24[2];
a25[4]=-(sstate2th*a24[4]) + cstate2th*a24[6] + state[2].thd*v25[5];
a25[5]=-(cstate2th*a24[4]) - sstate2th*a24[6] - state[2].thd*v25[4];
a25[6]=-a24[5];

a26[1]=cstate3th*a25[1] - sstate3th*a25[3] - state[3].thd*v26[2];
a26[2]=sstate3th*a25[1] + cstate3th*a25[3] + state[3].thd*v26[1];
a26[3]=-state[3].thdd - a25[2];
a26[4]=cstate3th*a25[4] - sstate3th*a25[6] - state[3].thd*v26[5];
a26[5]=sstate3th*a25[4] + cstate3th*a25[6] + state[3].thd*v26[4];
a26[6]=-a25[5];

a27[1]=cstate4th*a26[1] + sstate4th*a26[2] + state[4].thd*v27[2];
a27[2]=-(sstate4th*a26[1]) + cstate4th*a26[2] - state[4].thd*v27[1];
a27[3]=state[4].thdd + a26[3];
a27[4]=-(LEGLINK2*sstate4th*a26[3]) + cstate4th*a26[4] + sstate4th*a26[5] + state[4].thd*v27[5];
a27[5]=-(cstate4th*LEGLINK2*a26[3]) - sstate4th*a26[4] + cstate4th*a26[5] - state[4].thd*v27[4];
a27[6]=LEGLINK2*a26[2] + a26[6];

a28[1]=cstate5th*a27[1] + sstate5th*a27[2] + state[5].thd*v28[2];
a28[2]=-(sstate5th*a27[1]) + cstate5th*a27[2] - state[5].thd*v28[1];
a28[3]=state[5].thdd + a27[3];
a28[4]=-(LEGLINK3*sstate5th*a27[3]) + cstate5th*a27[4] + sstate5th*a27[5] + state[5].thd*v28[5];
a28[5]=-(cstate5th*LEGLINK3*a27[3]) - sstate5th*a27[4] + cstate5th*a27[5] - state[5].thd*v28[4];
a28[6]=LEGLINK3*a27[2] + a27[6];

a29[1]=cstate6th*a28[1] + sstate6th*a28[3] - state[6].thd*v29[2];
a29[2]=sstate6th*a28[1] - cstate6th*a28[3] + state[6].thd*v29[1];
a29[3]=-state[6].thdd + a28[2];
a29[4]=cstate6th*a28[4] + sstate6th*a28[6] - state[6].thd*v29[5];
a29[5]=sstate6th*a28[4] - cstate6th*a28[6] + state[6].thd*v29[4];
a29[6]=a28[5];

a30[1]=a29[1];
a30[2]=a29[2];
a30[3]=a29[3];
a30[4]=FOOTLLENGLONG*a29[2] - FOOTWIDLONG*a29[3] + a29[4];
a30[5]=-(FOOTLLENGLONG*a29[1]) - LEGLINK4*a29[3] + a29[5];
a30[6]=FOOTWIDLONG*a29[1] + LEGLINK4*a29[2] + a29[6];

a31[1]=a29[1];
a31[2]=a29[2];
a31[3]=a29[3];
a31[4]=FOOTLLENGLONG*a29[2] + FOOTWIDSHORT*a29[3] + a29[4];
a31[5]=-(FOOTLLENGLONG*a29[1]) - LEGLINK4*a29[3] + a29[5];
a31[6]=-(FOOTWIDSHORT*a29[1]) + LEGLINK4*a29[2] + a29[6];

a32[1]=a29[1];
a32[2]=a29[2];
a32[3]=a29[3];
a32[4]=-(FOOTLENGSHORT*a29[2]) + FOOTWIDSHORT*a29[3] + a29[4];
a32[5]=FOOTLENGSHORT*a29[1] - LEGLINK4*a29[3] + a29[5];
a32[6]=-(FOOTWIDSHORT*a29[1]) + LEGLINK4*a29[2] + a29[6];

a33[1]=a29[1];
a33[2]=a29[2];
a33[3]=a29[3];
a33[4]=-(FOOTLENGSHORT*a29[2]) - FOOTWIDLONG*a29[3] + a29[4];
a33[5]=FOOTLENGSHORT*a29[1] - LEGLINK4*a29[3] + a29[5];
a33[6]=FOOTWIDLONG*a29[1] + LEGLINK4*a29[2] + a29[6];

a34[1]=rceff1a2*rceff1a3*a29[1] + (rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3)*a29[2] + (-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3)*a29[3];
a34[2]=-(rceff1a2*rseff1a3*a29[1]) + (rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3)*a29[2] + (rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3)*a29[3];
a34[3]=rseff1a2*a29[1] - rceff1a2*rseff1a1*a29[2] + rceff1a1*rceff1a2*a29[3];
a34[4]=rceff1a2*rceff1a3*a29[4] + (rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3)*a29[5] + (-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3)*a29[6] + a29[3]*((rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3)*eff[1].x[1] - rceff1a2*rceff1a3*eff[1].x[2]) + a29[2]*(-((-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3)*eff[1].x[1]) + rceff1a2*rceff1a3*eff[1].x[3]) + a29[1]*((-(rceff1a1*rceff1a3*rseff1a2) + rseff1a1*rseff1a3)*eff[1].x[2] - (rceff1a3*rseff1a1*rseff1a2 + rceff1a1*rseff1a3)*eff[1].x[3]);
a34[5]=-(rceff1a2*rseff1a3*a29[4]) + (rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3)*a29[5] + (rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3)*a29[6] + a29[3]*((rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3)*eff[1].x[1] + rceff1a2*rseff1a3*eff[1].x[2]) + a29[2]*(-((rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3)*eff[1].x[1]) - rceff1a2*rseff1a3*eff[1].x[3]) + a29[1]*((rceff1a3*rseff1a1 + rceff1a1*rseff1a2*rseff1a3)*eff[1].x[2] - (rceff1a1*rceff1a3 - rseff1a1*rseff1a2*rseff1a3)*eff[1].x[3]);
a34[6]=rseff1a2*a29[4] - rceff1a2*rseff1a1*a29[5] + rceff1a1*rceff1a2*a29[6] + a29[3]*(-(rceff1a2*rseff1a1*eff[1].x[1]) - rseff1a2*eff[1].x[2]) + a29[1]*(rceff1a1*rceff1a2*eff[1].x[2] + rceff1a2*rseff1a1*eff[1].x[3]) + a29[2]*(-(rceff1a1*rceff1a2*eff[1].x[1]) + rseff1a2*eff[1].x[3]);

a35[1]=a29[1];
a35[2]=a29[2];
a35[3]=a29[3];
a35[4]=a29[4];
a35[5]=-(LEGLINK4*a29[3]) + a29[5];
a35[6]=LEGLINK4*a29[2] + a29[6];

a36[1]=-(sstate11th*a23[1]) - cstate11th*a23[3] + state[11].thd*v36[2];
a36[2]=-(cstate11th*a23[1]) + sstate11th*a23[3] - state[11].thd*v36[1];
a36[3]=state[11].thdd + a23[2];
a36[4]=cstate11th*WAISTLINK1*a23[1] + (LEGLINK1*sstate11th - cstate11th*WAISTLINK2)*a23[2] - sstate11th*WAISTLINK1*a23[3] - sstate11th*a23[4] - cstate11th*a23[6] + state[11].thd*v36[5];
a36[5]=-(sstate11th*WAISTLINK1*a23[1]) + (cstate11th*LEGLINK1 + sstate11th*WAISTLINK2)*a23[2] - cstate11th*WAISTLINK1*a23[3] - cstate11th*a23[4] + sstate11th*a23[6] - state[11].thd*v36[4];
a36[6]=LEGLINK1*a23[1] - WAISTLINK2*a23[3] + a23[5];

a37[1]=-(sstate12th*a36[1]) + cstate12th*a36[3] + state[12].thd*v37[2];
a37[2]=-(cstate12th*a36[1]) - sstate12th*a36[3] - state[12].thd*v37[1];
a37[3]=state[12].thdd - a36[2];
a37[4]=-(sstate12th*a36[4]) + cstate12th*a36[6] + state[12].thd*v37[5];
a37[5]=-(cstate12th*a36[4]) - sstate12th*a36[6] - state[12].thd*v37[4];
a37[6]=-a36[5];

a38[1]=cstate13th*a37[1] + sstate13th*a37[3] + state[13].thd*v38[2];
a38[2]=-(sstate13th*a37[1]) + cstate13th*a37[3] - state[13].thd*v38[1];
a38[3]=state[13].thdd - a37[2];
a38[4]=cstate13th*a37[4] + sstate13th*a37[6] + state[13].thd*v38[5];
a38[5]=-(sstate13th*a37[4]) + cstate13th*a37[6] - state[13].thd*v38[4];
a38[6]=-a37[5];

a39[1]=cstate14th*a38[1] - sstate14th*a38[2] - state[14].thd*v39[2];
a39[2]=sstate14th*a38[1] + cstate14th*a38[2] + state[14].thd*v39[1];
a39[3]=-state[14].thdd + a38[3];
a39[4]=LEGLINK2*sstate14th*a38[3] + cstate14th*a38[4] - sstate14th*a38[5] - state[14].thd*v39[5];
a39[5]=-(cstate14th*LEGLINK2*a38[3]) + sstate14th*a38[4] + cstate14th*a38[5] + state[14].thd*v39[4];
a39[6]=LEGLINK2*a38[2] + a38[6];

a40[1]=cstate15th*a39[1] - sstate15th*a39[2] - state[15].thd*v40[2];
a40[2]=sstate15th*a39[1] + cstate15th*a39[2] + state[15].thd*v40[1];
a40[3]=-state[15].thdd + a39[3];
a40[4]=LEGLINK3*sstate15th*a39[3] + cstate15th*a39[4] - sstate15th*a39[5] - state[15].thd*v40[5];
a40[5]=-(cstate15th*LEGLINK3*a39[3]) + sstate15th*a39[4] + cstate15th*a39[5] + state[15].thd*v40[4];
a40[6]=LEGLINK3*a39[2] + a39[6];

a41[1]=cstate16th*a40[1] + sstate16th*a40[3] - state[16].thd*v41[2];
a41[2]=sstate16th*a40[1] - cstate16th*a40[3] + state[16].thd*v41[1];
a41[3]=-state[16].thdd + a40[2];
a41[4]=cstate16th*a40[4] + sstate16th*a40[6] - state[16].thd*v41[5];
a41[5]=sstate16th*a40[4] - cstate16th*a40[6] + state[16].thd*v41[4];
a41[6]=a40[5];

a42[1]=a41[1];
a42[2]=a41[2];
a42[3]=a41[3];
a42[4]=FOOTLLENGLONG*a41[2] + FOOTWIDLONG*a41[3] + a41[4];
a42[5]=-(FOOTLLENGLONG*a41[1]) - LEGLINK4*a41[3] + a41[5];
a42[6]=-(FOOTWIDLONG*a41[1]) + LEGLINK4*a41[2] + a41[6];

a43[1]=a41[1];
a43[2]=a41[2];
a43[3]=a41[3];
a43[4]=FOOTLLENGLONG*a41[2] - FOOTWIDSHORT*a41[3] + a41[4];
a43[5]=-(FOOTLLENGLONG*a41[1]) - LEGLINK4*a41[3] + a41[5];
a43[6]=FOOTWIDSHORT*a41[1] + LEGLINK4*a41[2] + a41[6];

a44[1]=a41[1];
a44[2]=a41[2];
a44[3]=a41[3];
a44[4]=-(FOOTLENGSHORT*a41[2]) - FOOTWIDSHORT*a41[3] + a41[4];
a44[5]=FOOTLENGSHORT*a41[1] - LEGLINK4*a41[3] + a41[5];
a44[6]=FOOTWIDSHORT*a41[1] + LEGLINK4*a41[2] + a41[6];

a45[1]=a41[1];
a45[2]=a41[2];
a45[3]=a41[3];
a45[4]=-(FOOTLENGSHORT*a41[2]) + FOOTWIDLONG*a41[3] + a41[4];
a45[5]=FOOTLENGSHORT*a41[1] - LEGLINK4*a41[3] + a41[5];
a45[6]=-(FOOTWIDLONG*a41[1]) + LEGLINK4*a41[2] + a41[6];

a46[1]=rceff2a2*rceff2a3*a41[1] + (rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3)*a41[2] + (-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3)*a41[3];
a46[2]=-(rceff2a2*rseff2a3*a41[1]) + (rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3)*a41[2] + (rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3)*a41[3];
a46[3]=rseff2a2*a41[1] - rceff2a2*rseff2a1*a41[2] + rceff2a1*rceff2a2*a41[3];
a46[4]=rceff2a2*rceff2a3*a41[4] + (rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3)*a41[5] + (-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3)*a41[6] + a41[3]*((rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3)*eff[2].x[1] - rceff2a2*rceff2a3*eff[2].x[2]) + a41[2]*(-((-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3)*eff[2].x[1]) + rceff2a2*rceff2a3*eff[2].x[3]) + a41[1]*((-(rceff2a1*rceff2a3*rseff2a2) + rseff2a1*rseff2a3)*eff[2].x[2] - (rceff2a3*rseff2a1*rseff2a2 + rceff2a1*rseff2a3)*eff[2].x[3]);
a46[5]=-(rceff2a2*rseff2a3*a41[4]) + (rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3)*a41[5] + (rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3)*a41[6] + a41[3]*((rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3)*eff[2].x[1] + rceff2a2*rseff2a3*eff[2].x[2]) + a41[2]*(-((rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3)*eff[2].x[1]) - rceff2a2*rseff2a3*eff[2].x[3]) + a41[1]*((rceff2a3*rseff2a1 + rceff2a1*rseff2a2*rseff2a3)*eff[2].x[2] - (rceff2a1*rceff2a3 - rseff2a1*rseff2a2*rseff2a3)*eff[2].x[3]);
a46[6]=rseff2a2*a41[4] - rceff2a2*rseff2a1*a41[5] + rceff2a1*rceff2a2*a41[6] + a41[3]*(-(rceff2a2*rseff2a1*eff[2].x[1]) - rseff2a2*eff[2].x[2]) + a41[1]*(rceff2a1*rceff2a2*eff[2].x[2] + rceff2a2*rseff2a1*eff[2].x[3]) + a41[2]*(-(rceff2a1*rceff2a2*eff[2].x[1]) + rseff2a2*eff[2].x[3]);

a47[1]=a41[1];
a47[2]=a41[2];
a47[3]=a41[3];
a47[4]=a41[4];
a47[5]=-(LEGLINK4*a41[3]) + a41[5];
a47[6]=LEGLINK4*a41[2] + a41[6];


/* kinematic matrices */
bzero((void *)A,sizeof(double)*(47+1)*(6+1)*(N_RBD_PARMS+1));
A[0][1][1]=a0[4] - v0[3]*v0[5] + v0[2]*v0[6];
A[0][1][2]=-Power(v0[2],2) - Power(v0[3],2);
A[0][1][3]=-a0[3] + v0[1]*v0[2];
A[0][1][4]=a0[2] + v0[1]*v0[3];
A[0][1][5]=0;
A[0][1][6]=0;
A[0][1][7]=0;
A[0][1][8]=0;
A[0][1][9]=0;
A[0][1][10]=0;
A[0][1][11]=0;
A[0][1][12]=0;
A[0][1][13]=0;
A[0][1][14]=0;

A[0][2][1]=a0[5] + v0[3]*v0[4] - v0[1]*v0[6];
A[0][2][2]=a0[3] + v0[1]*v0[2];
A[0][2][3]=-Power(v0[1],2) - Power(v0[3],2);
A[0][2][4]=-a0[1] + v0[2]*v0[3];
A[0][2][5]=0;
A[0][2][6]=0;
A[0][2][7]=0;
A[0][2][8]=0;
A[0][2][9]=0;
A[0][2][10]=0;
A[0][2][11]=0;
A[0][2][12]=0;
A[0][2][13]=0;
A[0][2][14]=0;

A[0][3][1]=a0[6] - v0[2]*v0[4] + v0[1]*v0[5];
A[0][3][2]=-a0[2] + v0[1]*v0[3];
A[0][3][3]=a0[1] + v0[2]*v0[3];
A[0][3][4]=-Power(v0[1],2) - Power(v0[2],2);
A[0][3][5]=0;
A[0][3][6]=0;
A[0][3][7]=0;
A[0][3][8]=0;
A[0][3][9]=0;
A[0][3][10]=0;
A[0][3][11]=0;
A[0][3][12]=0;
A[0][3][13]=0;
A[0][3][14]=0;

A[0][4][1]=0;
A[0][4][2]=0;
A[0][4][3]=a0[6] - v0[2]*v0[4] + v0[1]*v0[5];
A[0][4][4]=-a0[5] - v0[3]*v0[4] + v0[1]*v0[6];
A[0][4][5]=a0[1];
A[0][4][6]=a0[2] - v0[1]*v0[3];
A[0][4][7]=a0[3] + v0[1]*v0[2];
A[0][4][8]=-(v0[2]*v0[3]);
A[0][4][9]=Power(v0[2],2) - Power(v0[3],2);
A[0][4][10]=v0[2]*v0[3];
A[0][4][11]=0;
A[0][4][12]=0;
A[0][4][13]=0;
A[0][4][14]=0;

A[0][5][1]=0;
A[0][5][2]=-a0[6] + v0[2]*v0[4] - v0[1]*v0[5];
A[0][5][3]=0;
A[0][5][4]=a0[4] - v0[3]*v0[5] + v0[2]*v0[6];
A[0][5][5]=v0[1]*v0[3];
A[0][5][6]=a0[1] + v0[2]*v0[3];
A[0][5][7]=-Power(v0[1],2) + Power(v0[3],2);
A[0][5][8]=a0[2];
A[0][5][9]=a0[3] - v0[1]*v0[2];
A[0][5][10]=-(v0[1]*v0[3]);
A[0][5][11]=0;
A[0][5][12]=0;
A[0][5][13]=0;
A[0][5][14]=0;

A[0][6][1]=0;
A[0][6][2]=a0[5] + v0[3]*v0[4] - v0[1]*v0[6];
A[0][6][3]=-a0[4] + v0[3]*v0[5] - v0[2]*v0[6];
A[0][6][4]=0;
A[0][6][5]=-(v0[1]*v0[2]);
A[0][6][6]=Power(v0[1],2) - Power(v0[2],2);
A[0][6][7]=a0[1] - v0[2]*v0[3];
A[0][6][8]=v0[1]*v0[2];
A[0][6][9]=a0[2] + v0[1]*v0[3];
A[0][6][10]=a0[3];
A[0][6][11]=0;
A[0][6][12]=0;
A[0][6][13]=0;
A[0][6][14]=0;


A[1][1][1]=a1[4] - v1[3]*v1[5] + v1[2]*v1[6];
A[1][1][2]=-Power(v1[2],2) - Power(v1[3],2);
A[1][1][3]=-a1[3] + v1[1]*v1[2];
A[1][1][4]=a1[2] + v1[1]*v1[3];
A[1][1][5]=0;
A[1][1][6]=0;
A[1][1][7]=0;
A[1][1][8]=0;
A[1][1][9]=0;
A[1][1][10]=0;
A[1][1][11]=0;
A[1][1][12]=0;
A[1][1][13]=0;
A[1][1][14]=0;

A[1][2][1]=a1[5] + v1[3]*v1[4] - v1[1]*v1[6];
A[1][2][2]=a1[3] + v1[1]*v1[2];
A[1][2][3]=-Power(v1[1],2) - Power(v1[3],2);
A[1][2][4]=-a1[1] + v1[2]*v1[3];
A[1][2][5]=0;
A[1][2][6]=0;
A[1][2][7]=0;
A[1][2][8]=0;
A[1][2][9]=0;
A[1][2][10]=0;
A[1][2][11]=0;
A[1][2][12]=0;
A[1][2][13]=0;
A[1][2][14]=0;

A[1][3][1]=a1[6] - v1[2]*v1[4] + v1[1]*v1[5];
A[1][3][2]=-a1[2] + v1[1]*v1[3];
A[1][3][3]=a1[1] + v1[2]*v1[3];
A[1][3][4]=-Power(v1[1],2) - Power(v1[2],2);
A[1][3][5]=0;
A[1][3][6]=0;
A[1][3][7]=0;
A[1][3][8]=0;
A[1][3][9]=0;
A[1][3][10]=0;
A[1][3][11]=0;
A[1][3][12]=0;
A[1][3][13]=0;
A[1][3][14]=0;

A[1][4][1]=0;
A[1][4][2]=0;
A[1][4][3]=a1[6] - v1[2]*v1[4] + v1[1]*v1[5];
A[1][4][4]=-a1[5] - v1[3]*v1[4] + v1[1]*v1[6];
A[1][4][5]=a1[1];
A[1][4][6]=a1[2] - v1[1]*v1[3];
A[1][4][7]=a1[3] + v1[1]*v1[2];
A[1][4][8]=-(v1[2]*v1[3]);
A[1][4][9]=Power(v1[2],2) - Power(v1[3],2);
A[1][4][10]=v1[2]*v1[3];
A[1][4][11]=0;
A[1][4][12]=0;
A[1][4][13]=0;
A[1][4][14]=0;

A[1][5][1]=0;
A[1][5][2]=-a1[6] + v1[2]*v1[4] - v1[1]*v1[5];
A[1][5][3]=0;
A[1][5][4]=a1[4] - v1[3]*v1[5] + v1[2]*v1[6];
A[1][5][5]=v1[1]*v1[3];
A[1][5][6]=a1[1] + v1[2]*v1[3];
A[1][5][7]=-Power(v1[1],2) + Power(v1[3],2);
A[1][5][8]=a1[2];
A[1][5][9]=a1[3] - v1[1]*v1[2];
A[1][5][10]=-(v1[1]*v1[3]);
A[1][5][11]=0;
A[1][5][12]=0;
A[1][5][13]=0;
A[1][5][14]=0;

A[1][6][1]=0;
A[1][6][2]=a1[5] + v1[3]*v1[4] - v1[1]*v1[6];
A[1][6][3]=-a1[4] + v1[3]*v1[5] - v1[2]*v1[6];
A[1][6][4]=0;
A[1][6][5]=-(v1[1]*v1[2]);
A[1][6][6]=Power(v1[1],2) - Power(v1[2],2);
A[1][6][7]=a1[1] - v1[2]*v1[3];
A[1][6][8]=v1[1]*v1[2];
A[1][6][9]=a1[2] + v1[1]*v1[3];
A[1][6][10]=a1[3];
A[1][6][11]=0;
A[1][6][12]=0;
A[1][6][13]=0;
A[1][6][14]=0;


A[2][1][1]=a2[4] - v2[3]*v2[5] + v2[2]*v2[6];
A[2][1][2]=-Power(v2[2],2) - Power(v2[3],2);
A[2][1][3]=-a2[3] + v2[1]*v2[2];
A[2][1][4]=a2[2] + v2[1]*v2[3];
A[2][1][5]=0;
A[2][1][6]=0;
A[2][1][7]=0;
A[2][1][8]=0;
A[2][1][9]=0;
A[2][1][10]=0;
A[2][1][11]=0;
A[2][1][12]=0;
A[2][1][13]=0;
A[2][1][14]=0;

A[2][2][1]=a2[5] + v2[3]*v2[4] - v2[1]*v2[6];
A[2][2][2]=a2[3] + v2[1]*v2[2];
A[2][2][3]=-Power(v2[1],2) - Power(v2[3],2);
A[2][2][4]=-a2[1] + v2[2]*v2[3];
A[2][2][5]=0;
A[2][2][6]=0;
A[2][2][7]=0;
A[2][2][8]=0;
A[2][2][9]=0;
A[2][2][10]=0;
A[2][2][11]=0;
A[2][2][12]=0;
A[2][2][13]=0;
A[2][2][14]=0;

A[2][3][1]=a2[6] - v2[2]*v2[4] + v2[1]*v2[5];
A[2][3][2]=-a2[2] + v2[1]*v2[3];
A[2][3][3]=a2[1] + v2[2]*v2[3];
A[2][3][4]=-Power(v2[1],2) - Power(v2[2],2);
A[2][3][5]=0;
A[2][3][6]=0;
A[2][3][7]=0;
A[2][3][8]=0;
A[2][3][9]=0;
A[2][3][10]=0;
A[2][3][11]=0;
A[2][3][12]=0;
A[2][3][13]=0;
A[2][3][14]=0;

A[2][4][1]=0;
A[2][4][2]=0;
A[2][4][3]=a2[6] - v2[2]*v2[4] + v2[1]*v2[5];
A[2][4][4]=-a2[5] - v2[3]*v2[4] + v2[1]*v2[6];
A[2][4][5]=a2[1];
A[2][4][6]=a2[2] - v2[1]*v2[3];
A[2][4][7]=a2[3] + v2[1]*v2[2];
A[2][4][8]=-(v2[2]*v2[3]);
A[2][4][9]=Power(v2[2],2) - Power(v2[3],2);
A[2][4][10]=v2[2]*v2[3];
A[2][4][11]=0;
A[2][4][12]=0;
A[2][4][13]=0;
A[2][4][14]=0;

A[2][5][1]=0;
A[2][5][2]=-a2[6] + v2[2]*v2[4] - v2[1]*v2[5];
A[2][5][3]=0;
A[2][5][4]=a2[4] - v2[3]*v2[5] + v2[2]*v2[6];
A[2][5][5]=v2[1]*v2[3];
A[2][5][6]=a2[1] + v2[2]*v2[3];
A[2][5][7]=-Power(v2[1],2) + Power(v2[3],2);
A[2][5][8]=a2[2];
A[2][5][9]=a2[3] - v2[1]*v2[2];
A[2][5][10]=-(v2[1]*v2[3]);
A[2][5][11]=0;
A[2][5][12]=0;
A[2][5][13]=0;
A[2][5][14]=0;

A[2][6][1]=0;
A[2][6][2]=a2[5] + v2[3]*v2[4] - v2[1]*v2[6];
A[2][6][3]=-a2[4] + v2[3]*v2[5] - v2[2]*v2[6];
A[2][6][4]=0;
A[2][6][5]=-(v2[1]*v2[2]);
A[2][6][6]=Power(v2[1],2) - Power(v2[2],2);
A[2][6][7]=a2[1] - v2[2]*v2[3];
A[2][6][8]=v2[1]*v2[2];
A[2][6][9]=a2[2] + v2[1]*v2[3];
A[2][6][10]=a2[3];
A[2][6][11]=0;
A[2][6][12]=0;
A[2][6][13]=0;
A[2][6][14]=0;


A[3][1][1]=a3[4] - v3[3]*v3[5] + v3[2]*v3[6];
A[3][1][2]=-Power(v3[2],2) - Power(v3[3],2);
A[3][1][3]=-a3[3] + v3[1]*v3[2];
A[3][1][4]=a3[2] + v3[1]*v3[3];
A[3][1][5]=0;
A[3][1][6]=0;
A[3][1][7]=0;
A[3][1][8]=0;
A[3][1][9]=0;
A[3][1][10]=0;
A[3][1][11]=0;
A[3][1][12]=0;
A[3][1][13]=0;
A[3][1][14]=0;

A[3][2][1]=a3[5] + v3[3]*v3[4] - v3[1]*v3[6];
A[3][2][2]=a3[3] + v3[1]*v3[2];
A[3][2][3]=-Power(v3[1],2) - Power(v3[3],2);
A[3][2][4]=-a3[1] + v3[2]*v3[3];
A[3][2][5]=0;
A[3][2][6]=0;
A[3][2][7]=0;
A[3][2][8]=0;
A[3][2][9]=0;
A[3][2][10]=0;
A[3][2][11]=0;
A[3][2][12]=0;
A[3][2][13]=0;
A[3][2][14]=0;

A[3][3][1]=a3[6] - v3[2]*v3[4] + v3[1]*v3[5];
A[3][3][2]=-a3[2] + v3[1]*v3[3];
A[3][3][3]=a3[1] + v3[2]*v3[3];
A[3][3][4]=-Power(v3[1],2) - Power(v3[2],2);
A[3][3][5]=0;
A[3][3][6]=0;
A[3][3][7]=0;
A[3][3][8]=0;
A[3][3][9]=0;
A[3][3][10]=0;
A[3][3][11]=0;
A[3][3][12]=0;
A[3][3][13]=0;
A[3][3][14]=0;

A[3][4][1]=0;
A[3][4][2]=0;
A[3][4][3]=a3[6] - v3[2]*v3[4] + v3[1]*v3[5];
A[3][4][4]=-a3[5] - v3[3]*v3[4] + v3[1]*v3[6];
A[3][4][5]=a3[1];
A[3][4][6]=a3[2] - v3[1]*v3[3];
A[3][4][7]=a3[3] + v3[1]*v3[2];
A[3][4][8]=-(v3[2]*v3[3]);
A[3][4][9]=Power(v3[2],2) - Power(v3[3],2);
A[3][4][10]=v3[2]*v3[3];
A[3][4][11]=0;
A[3][4][12]=0;
A[3][4][13]=0;
A[3][4][14]=0;

A[3][5][1]=0;
A[3][5][2]=-a3[6] + v3[2]*v3[4] - v3[1]*v3[5];
A[3][5][3]=0;
A[3][5][4]=a3[4] - v3[3]*v3[5] + v3[2]*v3[6];
A[3][5][5]=v3[1]*v3[3];
A[3][5][6]=a3[1] + v3[2]*v3[3];
A[3][5][7]=-Power(v3[1],2) + Power(v3[3],2);
A[3][5][8]=a3[2];
A[3][5][9]=a3[3] - v3[1]*v3[2];
A[3][5][10]=-(v3[1]*v3[3]);
A[3][5][11]=0;
A[3][5][12]=0;
A[3][5][13]=0;
A[3][5][14]=0;

A[3][6][1]=0;
A[3][6][2]=a3[5] + v3[3]*v3[4] - v3[1]*v3[6];
A[3][6][3]=-a3[4] + v3[3]*v3[5] - v3[2]*v3[6];
A[3][6][4]=0;
A[3][6][5]=-(v3[1]*v3[2]);
A[3][6][6]=Power(v3[1],2) - Power(v3[2],2);
A[3][6][7]=a3[1] - v3[2]*v3[3];
A[3][6][8]=v3[1]*v3[2];
A[3][6][9]=a3[2] + v3[1]*v3[3];
A[3][6][10]=a3[3];
A[3][6][11]=0;
A[3][6][12]=0;
A[3][6][13]=0;
A[3][6][14]=0;


A[4][1][1]=a4[4] - v4[3]*v4[5] + v4[2]*v4[6];
A[4][1][2]=-Power(v4[2],2) - Power(v4[3],2);
A[4][1][3]=-a4[3] + v4[1]*v4[2];
A[4][1][4]=a4[2] + v4[1]*v4[3];
A[4][1][5]=0;
A[4][1][6]=0;
A[4][1][7]=0;
A[4][1][8]=0;
A[4][1][9]=0;
A[4][1][10]=0;
A[4][1][11]=0;
A[4][1][12]=0;
A[4][1][13]=0;
A[4][1][14]=0;

A[4][2][1]=a4[5] + v4[3]*v4[4] - v4[1]*v4[6];
A[4][2][2]=a4[3] + v4[1]*v4[2];
A[4][2][3]=-Power(v4[1],2) - Power(v4[3],2);
A[4][2][4]=-a4[1] + v4[2]*v4[3];
A[4][2][5]=0;
A[4][2][6]=0;
A[4][2][7]=0;
A[4][2][8]=0;
A[4][2][9]=0;
A[4][2][10]=0;
A[4][2][11]=0;
A[4][2][12]=0;
A[4][2][13]=0;
A[4][2][14]=0;

A[4][3][1]=a4[6] - v4[2]*v4[4] + v4[1]*v4[5];
A[4][3][2]=-a4[2] + v4[1]*v4[3];
A[4][3][3]=a4[1] + v4[2]*v4[3];
A[4][3][4]=-Power(v4[1],2) - Power(v4[2],2);
A[4][3][5]=0;
A[4][3][6]=0;
A[4][3][7]=0;
A[4][3][8]=0;
A[4][3][9]=0;
A[4][3][10]=0;
A[4][3][11]=0;
A[4][3][12]=0;
A[4][3][13]=0;
A[4][3][14]=0;

A[4][4][1]=0;
A[4][4][2]=0;
A[4][4][3]=a4[6] - v4[2]*v4[4] + v4[1]*v4[5];
A[4][4][4]=-a4[5] - v4[3]*v4[4] + v4[1]*v4[6];
A[4][4][5]=a4[1];
A[4][4][6]=a4[2] - v4[1]*v4[3];
A[4][4][7]=a4[3] + v4[1]*v4[2];
A[4][4][8]=-(v4[2]*v4[3]);
A[4][4][9]=Power(v4[2],2) - Power(v4[3],2);
A[4][4][10]=v4[2]*v4[3];
A[4][4][11]=0;
A[4][4][12]=0;
A[4][4][13]=0;
A[4][4][14]=0;

A[4][5][1]=0;
A[4][5][2]=-a4[6] + v4[2]*v4[4] - v4[1]*v4[5];
A[4][5][3]=0;
A[4][5][4]=a4[4] - v4[3]*v4[5] + v4[2]*v4[6];
A[4][5][5]=v4[1]*v4[3];
A[4][5][6]=a4[1] + v4[2]*v4[3];
A[4][5][7]=-Power(v4[1],2) + Power(v4[3],2);
A[4][5][8]=a4[2];
A[4][5][9]=a4[3] - v4[1]*v4[2];
A[4][5][10]=-(v4[1]*v4[3]);
A[4][5][11]=0;
A[4][5][12]=0;
A[4][5][13]=0;
A[4][5][14]=0;

A[4][6][1]=0;
A[4][6][2]=a4[5] + v4[3]*v4[4] - v4[1]*v4[6];
A[4][6][3]=-a4[4] + v4[3]*v4[5] - v4[2]*v4[6];
A[4][6][4]=0;
A[4][6][5]=-(v4[1]*v4[2]);
A[4][6][6]=Power(v4[1],2) - Power(v4[2],2);
A[4][6][7]=a4[1] - v4[2]*v4[3];
A[4][6][8]=v4[1]*v4[2];
A[4][6][9]=a4[2] + v4[1]*v4[3];
A[4][6][10]=a4[3];
A[4][6][11]=0;
A[4][6][12]=0;
A[4][6][13]=0;
A[4][6][14]=0;


A[5][1][1]=a5[4] - v5[3]*v5[5] + v5[2]*v5[6];
A[5][1][2]=-Power(v5[2],2) - Power(v5[3],2);
A[5][1][3]=-a5[3] + v5[1]*v5[2];
A[5][1][4]=a5[2] + v5[1]*v5[3];
A[5][1][5]=0;
A[5][1][6]=0;
A[5][1][7]=0;
A[5][1][8]=0;
A[5][1][9]=0;
A[5][1][10]=0;
A[5][1][11]=0;
A[5][1][12]=0;
A[5][1][13]=0;
A[5][1][14]=0;

A[5][2][1]=a5[5] + v5[3]*v5[4] - v5[1]*v5[6];
A[5][2][2]=a5[3] + v5[1]*v5[2];
A[5][2][3]=-Power(v5[1],2) - Power(v5[3],2);
A[5][2][4]=-a5[1] + v5[2]*v5[3];
A[5][2][5]=0;
A[5][2][6]=0;
A[5][2][7]=0;
A[5][2][8]=0;
A[5][2][9]=0;
A[5][2][10]=0;
A[5][2][11]=0;
A[5][2][12]=0;
A[5][2][13]=0;
A[5][2][14]=0;

A[5][3][1]=a5[6] - v5[2]*v5[4] + v5[1]*v5[5];
A[5][3][2]=-a5[2] + v5[1]*v5[3];
A[5][3][3]=a5[1] + v5[2]*v5[3];
A[5][3][4]=-Power(v5[1],2) - Power(v5[2],2);
A[5][3][5]=0;
A[5][3][6]=0;
A[5][3][7]=0;
A[5][3][8]=0;
A[5][3][9]=0;
A[5][3][10]=0;
A[5][3][11]=0;
A[5][3][12]=0;
A[5][3][13]=0;
A[5][3][14]=0;

A[5][4][1]=0;
A[5][4][2]=0;
A[5][4][3]=a5[6] - v5[2]*v5[4] + v5[1]*v5[5];
A[5][4][4]=-a5[5] - v5[3]*v5[4] + v5[1]*v5[6];
A[5][4][5]=a5[1];
A[5][4][6]=a5[2] - v5[1]*v5[3];
A[5][4][7]=a5[3] + v5[1]*v5[2];
A[5][4][8]=-(v5[2]*v5[3]);
A[5][4][9]=Power(v5[2],2) - Power(v5[3],2);
A[5][4][10]=v5[2]*v5[3];
A[5][4][11]=0;
A[5][4][12]=0;
A[5][4][13]=0;
A[5][4][14]=0;

A[5][5][1]=0;
A[5][5][2]=-a5[6] + v5[2]*v5[4] - v5[1]*v5[5];
A[5][5][3]=0;
A[5][5][4]=a5[4] - v5[3]*v5[5] + v5[2]*v5[6];
A[5][5][5]=v5[1]*v5[3];
A[5][5][6]=a5[1] + v5[2]*v5[3];
A[5][5][7]=-Power(v5[1],2) + Power(v5[3],2);
A[5][5][8]=a5[2];
A[5][5][9]=a5[3] - v5[1]*v5[2];
A[5][5][10]=-(v5[1]*v5[3]);
A[5][5][11]=0;
A[5][5][12]=0;
A[5][5][13]=0;
A[5][5][14]=0;

A[5][6][1]=0;
A[5][6][2]=a5[5] + v5[3]*v5[4] - v5[1]*v5[6];
A[5][6][3]=-a5[4] + v5[3]*v5[5] - v5[2]*v5[6];
A[5][6][4]=0;
A[5][6][5]=-(v5[1]*v5[2]);
A[5][6][6]=Power(v5[1],2) - Power(v5[2],2);
A[5][6][7]=a5[1] - v5[2]*v5[3];
A[5][6][8]=v5[1]*v5[2];
A[5][6][9]=a5[2] + v5[1]*v5[3];
A[5][6][10]=a5[3];
A[5][6][11]=0;
A[5][6][12]=0;
A[5][6][13]=0;
A[5][6][14]=0;


A[6][1][1]=a6[4] - v6[3]*v6[5] + v6[2]*v6[6];
A[6][1][2]=-Power(v6[2],2) - Power(v6[3],2);
A[6][1][3]=-a6[3] + v6[1]*v6[2];
A[6][1][4]=a6[2] + v6[1]*v6[3];
A[6][1][5]=0;
A[6][1][6]=0;
A[6][1][7]=0;
A[6][1][8]=0;
A[6][1][9]=0;
A[6][1][10]=0;
A[6][1][11]=0;
A[6][1][12]=0;
A[6][1][13]=0;
A[6][1][14]=0;

A[6][2][1]=a6[5] + v6[3]*v6[4] - v6[1]*v6[6];
A[6][2][2]=a6[3] + v6[1]*v6[2];
A[6][2][3]=-Power(v6[1],2) - Power(v6[3],2);
A[6][2][4]=-a6[1] + v6[2]*v6[3];
A[6][2][5]=0;
A[6][2][6]=0;
A[6][2][7]=0;
A[6][2][8]=0;
A[6][2][9]=0;
A[6][2][10]=0;
A[6][2][11]=0;
A[6][2][12]=0;
A[6][2][13]=0;
A[6][2][14]=0;

A[6][3][1]=a6[6] - v6[2]*v6[4] + v6[1]*v6[5];
A[6][3][2]=-a6[2] + v6[1]*v6[3];
A[6][3][3]=a6[1] + v6[2]*v6[3];
A[6][3][4]=-Power(v6[1],2) - Power(v6[2],2);
A[6][3][5]=0;
A[6][3][6]=0;
A[6][3][7]=0;
A[6][3][8]=0;
A[6][3][9]=0;
A[6][3][10]=0;
A[6][3][11]=0;
A[6][3][12]=0;
A[6][3][13]=0;
A[6][3][14]=0;

A[6][4][1]=0;
A[6][4][2]=0;
A[6][4][3]=a6[6] - v6[2]*v6[4] + v6[1]*v6[5];
A[6][4][4]=-a6[5] - v6[3]*v6[4] + v6[1]*v6[6];
A[6][4][5]=a6[1];
A[6][4][6]=a6[2] - v6[1]*v6[3];
A[6][4][7]=a6[3] + v6[1]*v6[2];
A[6][4][8]=-(v6[2]*v6[3]);
A[6][4][9]=Power(v6[2],2) - Power(v6[3],2);
A[6][4][10]=v6[2]*v6[3];
A[6][4][11]=0;
A[6][4][12]=0;
A[6][4][13]=0;
A[6][4][14]=0;

A[6][5][1]=0;
A[6][5][2]=-a6[6] + v6[2]*v6[4] - v6[1]*v6[5];
A[6][5][3]=0;
A[6][5][4]=a6[4] - v6[3]*v6[5] + v6[2]*v6[6];
A[6][5][5]=v6[1]*v6[3];
A[6][5][6]=a6[1] + v6[2]*v6[3];
A[6][5][7]=-Power(v6[1],2) + Power(v6[3],2);
A[6][5][8]=a6[2];
A[6][5][9]=a6[3] - v6[1]*v6[2];
A[6][5][10]=-(v6[1]*v6[3]);
A[6][5][11]=0;
A[6][5][12]=0;
A[6][5][13]=0;
A[6][5][14]=0;

A[6][6][1]=0;
A[6][6][2]=a6[5] + v6[3]*v6[4] - v6[1]*v6[6];
A[6][6][3]=-a6[4] + v6[3]*v6[5] - v6[2]*v6[6];
A[6][6][4]=0;
A[6][6][5]=-(v6[1]*v6[2]);
A[6][6][6]=Power(v6[1],2) - Power(v6[2],2);
A[6][6][7]=a6[1] - v6[2]*v6[3];
A[6][6][8]=v6[1]*v6[2];
A[6][6][9]=a6[2] + v6[1]*v6[3];
A[6][6][10]=a6[3];
A[6][6][11]=0;
A[6][6][12]=0;
A[6][6][13]=0;
A[6][6][14]=0;


A[7][1][1]=a7[4] - v7[3]*v7[5] + v7[2]*v7[6];
A[7][1][2]=-Power(v7[2],2) - Power(v7[3],2);
A[7][1][3]=-a7[3] + v7[1]*v7[2];
A[7][1][4]=a7[2] + v7[1]*v7[3];
A[7][1][5]=0;
A[7][1][6]=0;
A[7][1][7]=0;
A[7][1][8]=0;
A[7][1][9]=0;
A[7][1][10]=0;
A[7][1][11]=0;
A[7][1][12]=0;
A[7][1][13]=0;
A[7][1][14]=0;

A[7][2][1]=a7[5] + v7[3]*v7[4] - v7[1]*v7[6];
A[7][2][2]=a7[3] + v7[1]*v7[2];
A[7][2][3]=-Power(v7[1],2) - Power(v7[3],2);
A[7][2][4]=-a7[1] + v7[2]*v7[3];
A[7][2][5]=0;
A[7][2][6]=0;
A[7][2][7]=0;
A[7][2][8]=0;
A[7][2][9]=0;
A[7][2][10]=0;
A[7][2][11]=0;
A[7][2][12]=0;
A[7][2][13]=0;
A[7][2][14]=0;

A[7][3][1]=a7[6] - v7[2]*v7[4] + v7[1]*v7[5];
A[7][3][2]=-a7[2] + v7[1]*v7[3];
A[7][3][3]=a7[1] + v7[2]*v7[3];
A[7][3][4]=-Power(v7[1],2) - Power(v7[2],2);
A[7][3][5]=0;
A[7][3][6]=0;
A[7][3][7]=0;
A[7][3][8]=0;
A[7][3][9]=0;
A[7][3][10]=0;
A[7][3][11]=0;
A[7][3][12]=0;
A[7][3][13]=0;
A[7][3][14]=0;

A[7][4][1]=0;
A[7][4][2]=0;
A[7][4][3]=a7[6] - v7[2]*v7[4] + v7[1]*v7[5];
A[7][4][4]=-a7[5] - v7[3]*v7[4] + v7[1]*v7[6];
A[7][4][5]=a7[1];
A[7][4][6]=a7[2] - v7[1]*v7[3];
A[7][4][7]=a7[3] + v7[1]*v7[2];
A[7][4][8]=-(v7[2]*v7[3]);
A[7][4][9]=Power(v7[2],2) - Power(v7[3],2);
A[7][4][10]=v7[2]*v7[3];
A[7][4][11]=0;
A[7][4][12]=0;
A[7][4][13]=0;
A[7][4][14]=0;

A[7][5][1]=0;
A[7][5][2]=-a7[6] + v7[2]*v7[4] - v7[1]*v7[5];
A[7][5][3]=0;
A[7][5][4]=a7[4] - v7[3]*v7[5] + v7[2]*v7[6];
A[7][5][5]=v7[1]*v7[3];
A[7][5][6]=a7[1] + v7[2]*v7[3];
A[7][5][7]=-Power(v7[1],2) + Power(v7[3],2);
A[7][5][8]=a7[2];
A[7][5][9]=a7[3] - v7[1]*v7[2];
A[7][5][10]=-(v7[1]*v7[3]);
A[7][5][11]=0;
A[7][5][12]=0;
A[7][5][13]=0;
A[7][5][14]=0;

A[7][6][1]=0;
A[7][6][2]=a7[5] + v7[3]*v7[4] - v7[1]*v7[6];
A[7][6][3]=-a7[4] + v7[3]*v7[5] - v7[2]*v7[6];
A[7][6][4]=0;
A[7][6][5]=-(v7[1]*v7[2]);
A[7][6][6]=Power(v7[1],2) - Power(v7[2],2);
A[7][6][7]=a7[1] - v7[2]*v7[3];
A[7][6][8]=v7[1]*v7[2];
A[7][6][9]=a7[2] + v7[1]*v7[3];
A[7][6][10]=a7[3];
A[7][6][11]=0;
A[7][6][12]=0;
A[7][6][13]=0;
A[7][6][14]=0;


A[8][1][1]=a8[4] - v8[3]*v8[5] + v8[2]*v8[6];
A[8][1][2]=-Power(v8[2],2) - Power(v8[3],2);
A[8][1][3]=-a8[3] + v8[1]*v8[2];
A[8][1][4]=a8[2] + v8[1]*v8[3];
A[8][1][5]=0;
A[8][1][6]=0;
A[8][1][7]=0;
A[8][1][8]=0;
A[8][1][9]=0;
A[8][1][10]=0;
A[8][1][11]=0;
A[8][1][12]=0;
A[8][1][13]=0;
A[8][1][14]=0;

A[8][2][1]=a8[5] + v8[3]*v8[4] - v8[1]*v8[6];
A[8][2][2]=a8[3] + v8[1]*v8[2];
A[8][2][3]=-Power(v8[1],2) - Power(v8[3],2);
A[8][2][4]=-a8[1] + v8[2]*v8[3];
A[8][2][5]=0;
A[8][2][6]=0;
A[8][2][7]=0;
A[8][2][8]=0;
A[8][2][9]=0;
A[8][2][10]=0;
A[8][2][11]=0;
A[8][2][12]=0;
A[8][2][13]=0;
A[8][2][14]=0;

A[8][3][1]=a8[6] - v8[2]*v8[4] + v8[1]*v8[5];
A[8][3][2]=-a8[2] + v8[1]*v8[3];
A[8][3][3]=a8[1] + v8[2]*v8[3];
A[8][3][4]=-Power(v8[1],2) - Power(v8[2],2);
A[8][3][5]=0;
A[8][3][6]=0;
A[8][3][7]=0;
A[8][3][8]=0;
A[8][3][9]=0;
A[8][3][10]=0;
A[8][3][11]=0;
A[8][3][12]=0;
A[8][3][13]=0;
A[8][3][14]=0;

A[8][4][1]=0;
A[8][4][2]=0;
A[8][4][3]=a8[6] - v8[2]*v8[4] + v8[1]*v8[5];
A[8][4][4]=-a8[5] - v8[3]*v8[4] + v8[1]*v8[6];
A[8][4][5]=a8[1];
A[8][4][6]=a8[2] - v8[1]*v8[3];
A[8][4][7]=a8[3] + v8[1]*v8[2];
A[8][4][8]=-(v8[2]*v8[3]);
A[8][4][9]=Power(v8[2],2) - Power(v8[3],2);
A[8][4][10]=v8[2]*v8[3];
A[8][4][11]=0;
A[8][4][12]=0;
A[8][4][13]=0;
A[8][4][14]=0;

A[8][5][1]=0;
A[8][5][2]=-a8[6] + v8[2]*v8[4] - v8[1]*v8[5];
A[8][5][3]=0;
A[8][5][4]=a8[4] - v8[3]*v8[5] + v8[2]*v8[6];
A[8][5][5]=v8[1]*v8[3];
A[8][5][6]=a8[1] + v8[2]*v8[3];
A[8][5][7]=-Power(v8[1],2) + Power(v8[3],2);
A[8][5][8]=a8[2];
A[8][5][9]=a8[3] - v8[1]*v8[2];
A[8][5][10]=-(v8[1]*v8[3]);
A[8][5][11]=0;
A[8][5][12]=0;
A[8][5][13]=0;
A[8][5][14]=0;

A[8][6][1]=0;
A[8][6][2]=a8[5] + v8[3]*v8[4] - v8[1]*v8[6];
A[8][6][3]=-a8[4] + v8[3]*v8[5] - v8[2]*v8[6];
A[8][6][4]=0;
A[8][6][5]=-(v8[1]*v8[2]);
A[8][6][6]=Power(v8[1],2) - Power(v8[2],2);
A[8][6][7]=a8[1] - v8[2]*v8[3];
A[8][6][8]=v8[1]*v8[2];
A[8][6][9]=a8[2] + v8[1]*v8[3];
A[8][6][10]=a8[3];
A[8][6][11]=0;
A[8][6][12]=0;
A[8][6][13]=0;
A[8][6][14]=0;


A[9][1][1]=a9[4] - v9[3]*v9[5] + v9[2]*v9[6];
A[9][1][2]=-Power(v9[2],2) - Power(v9[3],2);
A[9][1][3]=-a9[3] + v9[1]*v9[2];
A[9][1][4]=a9[2] + v9[1]*v9[3];
A[9][1][5]=0;
A[9][1][6]=0;
A[9][1][7]=0;
A[9][1][8]=0;
A[9][1][9]=0;
A[9][1][10]=0;
A[9][1][11]=0;
A[9][1][12]=0;
A[9][1][13]=0;
A[9][1][14]=0;

A[9][2][1]=a9[5] + v9[3]*v9[4] - v9[1]*v9[6];
A[9][2][2]=a9[3] + v9[1]*v9[2];
A[9][2][3]=-Power(v9[1],2) - Power(v9[3],2);
A[9][2][4]=-a9[1] + v9[2]*v9[3];
A[9][2][5]=0;
A[9][2][6]=0;
A[9][2][7]=0;
A[9][2][8]=0;
A[9][2][9]=0;
A[9][2][10]=0;
A[9][2][11]=0;
A[9][2][12]=0;
A[9][2][13]=0;
A[9][2][14]=0;

A[9][3][1]=a9[6] - v9[2]*v9[4] + v9[1]*v9[5];
A[9][3][2]=-a9[2] + v9[1]*v9[3];
A[9][3][3]=a9[1] + v9[2]*v9[3];
A[9][3][4]=-Power(v9[1],2) - Power(v9[2],2);
A[9][3][5]=0;
A[9][3][6]=0;
A[9][3][7]=0;
A[9][3][8]=0;
A[9][3][9]=0;
A[9][3][10]=0;
A[9][3][11]=0;
A[9][3][12]=0;
A[9][3][13]=0;
A[9][3][14]=0;

A[9][4][1]=0;
A[9][4][2]=0;
A[9][4][3]=a9[6] - v9[2]*v9[4] + v9[1]*v9[5];
A[9][4][4]=-a9[5] - v9[3]*v9[4] + v9[1]*v9[6];
A[9][4][5]=a9[1];
A[9][4][6]=a9[2] - v9[1]*v9[3];
A[9][4][7]=a9[3] + v9[1]*v9[2];
A[9][4][8]=-(v9[2]*v9[3]);
A[9][4][9]=Power(v9[2],2) - Power(v9[3],2);
A[9][4][10]=v9[2]*v9[3];
A[9][4][11]=0;
A[9][4][12]=0;
A[9][4][13]=0;
A[9][4][14]=0;

A[9][5][1]=0;
A[9][5][2]=-a9[6] + v9[2]*v9[4] - v9[1]*v9[5];
A[9][5][3]=0;
A[9][5][4]=a9[4] - v9[3]*v9[5] + v9[2]*v9[6];
A[9][5][5]=v9[1]*v9[3];
A[9][5][6]=a9[1] + v9[2]*v9[3];
A[9][5][7]=-Power(v9[1],2) + Power(v9[3],2);
A[9][5][8]=a9[2];
A[9][5][9]=a9[3] - v9[1]*v9[2];
A[9][5][10]=-(v9[1]*v9[3]);
A[9][5][11]=0;
A[9][5][12]=0;
A[9][5][13]=0;
A[9][5][14]=0;

A[9][6][1]=0;
A[9][6][2]=a9[5] + v9[3]*v9[4] - v9[1]*v9[6];
A[9][6][3]=-a9[4] + v9[3]*v9[5] - v9[2]*v9[6];
A[9][6][4]=0;
A[9][6][5]=-(v9[1]*v9[2]);
A[9][6][6]=Power(v9[1],2) - Power(v9[2],2);
A[9][6][7]=a9[1] - v9[2]*v9[3];
A[9][6][8]=v9[1]*v9[2];
A[9][6][9]=a9[2] + v9[1]*v9[3];
A[9][6][10]=a9[3];
A[9][6][11]=0;
A[9][6][12]=0;
A[9][6][13]=0;
A[9][6][14]=0;


A[10][1][1]=a10[4] - v10[3]*v10[5] + v10[2]*v10[6];
A[10][1][2]=-Power(v10[2],2) - Power(v10[3],2);
A[10][1][3]=-a10[3] + v10[1]*v10[2];
A[10][1][4]=a10[2] + v10[1]*v10[3];
A[10][1][5]=0;
A[10][1][6]=0;
A[10][1][7]=0;
A[10][1][8]=0;
A[10][1][9]=0;
A[10][1][10]=0;
A[10][1][11]=0;
A[10][1][12]=0;
A[10][1][13]=0;
A[10][1][14]=0;

A[10][2][1]=a10[5] + v10[3]*v10[4] - v10[1]*v10[6];
A[10][2][2]=a10[3] + v10[1]*v10[2];
A[10][2][3]=-Power(v10[1],2) - Power(v10[3],2);
A[10][2][4]=-a10[1] + v10[2]*v10[3];
A[10][2][5]=0;
A[10][2][6]=0;
A[10][2][7]=0;
A[10][2][8]=0;
A[10][2][9]=0;
A[10][2][10]=0;
A[10][2][11]=0;
A[10][2][12]=0;
A[10][2][13]=0;
A[10][2][14]=0;

A[10][3][1]=a10[6] - v10[2]*v10[4] + v10[1]*v10[5];
A[10][3][2]=-a10[2] + v10[1]*v10[3];
A[10][3][3]=a10[1] + v10[2]*v10[3];
A[10][3][4]=-Power(v10[1],2) - Power(v10[2],2);
A[10][3][5]=0;
A[10][3][6]=0;
A[10][3][7]=0;
A[10][3][8]=0;
A[10][3][9]=0;
A[10][3][10]=0;
A[10][3][11]=0;
A[10][3][12]=0;
A[10][3][13]=0;
A[10][3][14]=0;

A[10][4][1]=0;
A[10][4][2]=0;
A[10][4][3]=a10[6] - v10[2]*v10[4] + v10[1]*v10[5];
A[10][4][4]=-a10[5] - v10[3]*v10[4] + v10[1]*v10[6];
A[10][4][5]=a10[1];
A[10][4][6]=a10[2] - v10[1]*v10[3];
A[10][4][7]=a10[3] + v10[1]*v10[2];
A[10][4][8]=-(v10[2]*v10[3]);
A[10][4][9]=Power(v10[2],2) - Power(v10[3],2);
A[10][4][10]=v10[2]*v10[3];
A[10][4][11]=0;
A[10][4][12]=0;
A[10][4][13]=0;
A[10][4][14]=0;

A[10][5][1]=0;
A[10][5][2]=-a10[6] + v10[2]*v10[4] - v10[1]*v10[5];
A[10][5][3]=0;
A[10][5][4]=a10[4] - v10[3]*v10[5] + v10[2]*v10[6];
A[10][5][5]=v10[1]*v10[3];
A[10][5][6]=a10[1] + v10[2]*v10[3];
A[10][5][7]=-Power(v10[1],2) + Power(v10[3],2);
A[10][5][8]=a10[2];
A[10][5][9]=a10[3] - v10[1]*v10[2];
A[10][5][10]=-(v10[1]*v10[3]);
A[10][5][11]=0;
A[10][5][12]=0;
A[10][5][13]=0;
A[10][5][14]=0;

A[10][6][1]=0;
A[10][6][2]=a10[5] + v10[3]*v10[4] - v10[1]*v10[6];
A[10][6][3]=-a10[4] + v10[3]*v10[5] - v10[2]*v10[6];
A[10][6][4]=0;
A[10][6][5]=-(v10[1]*v10[2]);
A[10][6][6]=Power(v10[1],2) - Power(v10[2],2);
A[10][6][7]=a10[1] - v10[2]*v10[3];
A[10][6][8]=v10[1]*v10[2];
A[10][6][9]=a10[2] + v10[1]*v10[3];
A[10][6][10]=a10[3];
A[10][6][11]=0;
A[10][6][12]=0;
A[10][6][13]=0;
A[10][6][14]=0;


A[11][1][1]=a11[4] - v11[3]*v11[5] + v11[2]*v11[6];
A[11][1][2]=-Power(v11[2],2) - Power(v11[3],2);
A[11][1][3]=-a11[3] + v11[1]*v11[2];
A[11][1][4]=a11[2] + v11[1]*v11[3];
A[11][1][5]=0;
A[11][1][6]=0;
A[11][1][7]=0;
A[11][1][8]=0;
A[11][1][9]=0;
A[11][1][10]=0;
A[11][1][11]=0;
A[11][1][12]=0;
A[11][1][13]=0;
A[11][1][14]=0;

A[11][2][1]=a11[5] + v11[3]*v11[4] - v11[1]*v11[6];
A[11][2][2]=a11[3] + v11[1]*v11[2];
A[11][2][3]=-Power(v11[1],2) - Power(v11[3],2);
A[11][2][4]=-a11[1] + v11[2]*v11[3];
A[11][2][5]=0;
A[11][2][6]=0;
A[11][2][7]=0;
A[11][2][8]=0;
A[11][2][9]=0;
A[11][2][10]=0;
A[11][2][11]=0;
A[11][2][12]=0;
A[11][2][13]=0;
A[11][2][14]=0;

A[11][3][1]=a11[6] - v11[2]*v11[4] + v11[1]*v11[5];
A[11][3][2]=-a11[2] + v11[1]*v11[3];
A[11][3][3]=a11[1] + v11[2]*v11[3];
A[11][3][4]=-Power(v11[1],2) - Power(v11[2],2);
A[11][3][5]=0;
A[11][3][6]=0;
A[11][3][7]=0;
A[11][3][8]=0;
A[11][3][9]=0;
A[11][3][10]=0;
A[11][3][11]=0;
A[11][3][12]=0;
A[11][3][13]=0;
A[11][3][14]=0;

A[11][4][1]=0;
A[11][4][2]=0;
A[11][4][3]=a11[6] - v11[2]*v11[4] + v11[1]*v11[5];
A[11][4][4]=-a11[5] - v11[3]*v11[4] + v11[1]*v11[6];
A[11][4][5]=a11[1];
A[11][4][6]=a11[2] - v11[1]*v11[3];
A[11][4][7]=a11[3] + v11[1]*v11[2];
A[11][4][8]=-(v11[2]*v11[3]);
A[11][4][9]=Power(v11[2],2) - Power(v11[3],2);
A[11][4][10]=v11[2]*v11[3];
A[11][4][11]=0;
A[11][4][12]=0;
A[11][4][13]=0;
A[11][4][14]=0;

A[11][5][1]=0;
A[11][5][2]=-a11[6] + v11[2]*v11[4] - v11[1]*v11[5];
A[11][5][3]=0;
A[11][5][4]=a11[4] - v11[3]*v11[5] + v11[2]*v11[6];
A[11][5][5]=v11[1]*v11[3];
A[11][5][6]=a11[1] + v11[2]*v11[3];
A[11][5][7]=-Power(v11[1],2) + Power(v11[3],2);
A[11][5][8]=a11[2];
A[11][5][9]=a11[3] - v11[1]*v11[2];
A[11][5][10]=-(v11[1]*v11[3]);
A[11][5][11]=0;
A[11][5][12]=0;
A[11][5][13]=0;
A[11][5][14]=0;

A[11][6][1]=0;
A[11][6][2]=a11[5] + v11[3]*v11[4] - v11[1]*v11[6];
A[11][6][3]=-a11[4] + v11[3]*v11[5] - v11[2]*v11[6];
A[11][6][4]=0;
A[11][6][5]=-(v11[1]*v11[2]);
A[11][6][6]=Power(v11[1],2) - Power(v11[2],2);
A[11][6][7]=a11[1] - v11[2]*v11[3];
A[11][6][8]=v11[1]*v11[2];
A[11][6][9]=a11[2] + v11[1]*v11[3];
A[11][6][10]=a11[3];
A[11][6][11]=0;
A[11][6][12]=0;
A[11][6][13]=0;
A[11][6][14]=0;


A[12][1][1]=a12[4] - v12[3]*v12[5] + v12[2]*v12[6];
A[12][1][2]=-Power(v12[2],2) - Power(v12[3],2);
A[12][1][3]=-a12[3] + v12[1]*v12[2];
A[12][1][4]=a12[2] + v12[1]*v12[3];
A[12][1][5]=0;
A[12][1][6]=0;
A[12][1][7]=0;
A[12][1][8]=0;
A[12][1][9]=0;
A[12][1][10]=0;
A[12][1][11]=0;
A[12][1][12]=0;
A[12][1][13]=0;
A[12][1][14]=0;

A[12][2][1]=a12[5] + v12[3]*v12[4] - v12[1]*v12[6];
A[12][2][2]=a12[3] + v12[1]*v12[2];
A[12][2][3]=-Power(v12[1],2) - Power(v12[3],2);
A[12][2][4]=-a12[1] + v12[2]*v12[3];
A[12][2][5]=0;
A[12][2][6]=0;
A[12][2][7]=0;
A[12][2][8]=0;
A[12][2][9]=0;
A[12][2][10]=0;
A[12][2][11]=0;
A[12][2][12]=0;
A[12][2][13]=0;
A[12][2][14]=0;

A[12][3][1]=a12[6] - v12[2]*v12[4] + v12[1]*v12[5];
A[12][3][2]=-a12[2] + v12[1]*v12[3];
A[12][3][3]=a12[1] + v12[2]*v12[3];
A[12][3][4]=-Power(v12[1],2) - Power(v12[2],2);
A[12][3][5]=0;
A[12][3][6]=0;
A[12][3][7]=0;
A[12][3][8]=0;
A[12][3][9]=0;
A[12][3][10]=0;
A[12][3][11]=0;
A[12][3][12]=0;
A[12][3][13]=0;
A[12][3][14]=0;

A[12][4][1]=0;
A[12][4][2]=0;
A[12][4][3]=a12[6] - v12[2]*v12[4] + v12[1]*v12[5];
A[12][4][4]=-a12[5] - v12[3]*v12[4] + v12[1]*v12[6];
A[12][4][5]=a12[1];
A[12][4][6]=a12[2] - v12[1]*v12[3];
A[12][4][7]=a12[3] + v12[1]*v12[2];
A[12][4][8]=-(v12[2]*v12[3]);
A[12][4][9]=Power(v12[2],2) - Power(v12[3],2);
A[12][4][10]=v12[2]*v12[3];
A[12][4][11]=0;
A[12][4][12]=0;
A[12][4][13]=0;
A[12][4][14]=0;

A[12][5][1]=0;
A[12][5][2]=-a12[6] + v12[2]*v12[4] - v12[1]*v12[5];
A[12][5][3]=0;
A[12][5][4]=a12[4] - v12[3]*v12[5] + v12[2]*v12[6];
A[12][5][5]=v12[1]*v12[3];
A[12][5][6]=a12[1] + v12[2]*v12[3];
A[12][5][7]=-Power(v12[1],2) + Power(v12[3],2);
A[12][5][8]=a12[2];
A[12][5][9]=a12[3] - v12[1]*v12[2];
A[12][5][10]=-(v12[1]*v12[3]);
A[12][5][11]=0;
A[12][5][12]=0;
A[12][5][13]=0;
A[12][5][14]=0;

A[12][6][1]=0;
A[12][6][2]=a12[5] + v12[3]*v12[4] - v12[1]*v12[6];
A[12][6][3]=-a12[4] + v12[3]*v12[5] - v12[2]*v12[6];
A[12][6][4]=0;
A[12][6][5]=-(v12[1]*v12[2]);
A[12][6][6]=Power(v12[1],2) - Power(v12[2],2);
A[12][6][7]=a12[1] - v12[2]*v12[3];
A[12][6][8]=v12[1]*v12[2];
A[12][6][9]=a12[2] + v12[1]*v12[3];
A[12][6][10]=a12[3];
A[12][6][11]=0;
A[12][6][12]=0;
A[12][6][13]=0;
A[12][6][14]=0;


A[13][1][1]=a13[4] - v13[3]*v13[5] + v13[2]*v13[6];
A[13][1][2]=-Power(v13[2],2) - Power(v13[3],2);
A[13][1][3]=-a13[3] + v13[1]*v13[2];
A[13][1][4]=a13[2] + v13[1]*v13[3];
A[13][1][5]=0;
A[13][1][6]=0;
A[13][1][7]=0;
A[13][1][8]=0;
A[13][1][9]=0;
A[13][1][10]=0;
A[13][1][11]=0;
A[13][1][12]=0;
A[13][1][13]=0;
A[13][1][14]=0;

A[13][2][1]=a13[5] + v13[3]*v13[4] - v13[1]*v13[6];
A[13][2][2]=a13[3] + v13[1]*v13[2];
A[13][2][3]=-Power(v13[1],2) - Power(v13[3],2);
A[13][2][4]=-a13[1] + v13[2]*v13[3];
A[13][2][5]=0;
A[13][2][6]=0;
A[13][2][7]=0;
A[13][2][8]=0;
A[13][2][9]=0;
A[13][2][10]=0;
A[13][2][11]=0;
A[13][2][12]=0;
A[13][2][13]=0;
A[13][2][14]=0;

A[13][3][1]=a13[6] - v13[2]*v13[4] + v13[1]*v13[5];
A[13][3][2]=-a13[2] + v13[1]*v13[3];
A[13][3][3]=a13[1] + v13[2]*v13[3];
A[13][3][4]=-Power(v13[1],2) - Power(v13[2],2);
A[13][3][5]=0;
A[13][3][6]=0;
A[13][3][7]=0;
A[13][3][8]=0;
A[13][3][9]=0;
A[13][3][10]=0;
A[13][3][11]=0;
A[13][3][12]=0;
A[13][3][13]=0;
A[13][3][14]=0;

A[13][4][1]=0;
A[13][4][2]=0;
A[13][4][3]=a13[6] - v13[2]*v13[4] + v13[1]*v13[5];
A[13][4][4]=-a13[5] - v13[3]*v13[4] + v13[1]*v13[6];
A[13][4][5]=a13[1];
A[13][4][6]=a13[2] - v13[1]*v13[3];
A[13][4][7]=a13[3] + v13[1]*v13[2];
A[13][4][8]=-(v13[2]*v13[3]);
A[13][4][9]=Power(v13[2],2) - Power(v13[3],2);
A[13][4][10]=v13[2]*v13[3];
A[13][4][11]=0;
A[13][4][12]=0;
A[13][4][13]=0;
A[13][4][14]=0;

A[13][5][1]=0;
A[13][5][2]=-a13[6] + v13[2]*v13[4] - v13[1]*v13[5];
A[13][5][3]=0;
A[13][5][4]=a13[4] - v13[3]*v13[5] + v13[2]*v13[6];
A[13][5][5]=v13[1]*v13[3];
A[13][5][6]=a13[1] + v13[2]*v13[3];
A[13][5][7]=-Power(v13[1],2) + Power(v13[3],2);
A[13][5][8]=a13[2];
A[13][5][9]=a13[3] - v13[1]*v13[2];
A[13][5][10]=-(v13[1]*v13[3]);
A[13][5][11]=0;
A[13][5][12]=0;
A[13][5][13]=0;
A[13][5][14]=0;

A[13][6][1]=0;
A[13][6][2]=a13[5] + v13[3]*v13[4] - v13[1]*v13[6];
A[13][6][3]=-a13[4] + v13[3]*v13[5] - v13[2]*v13[6];
A[13][6][4]=0;
A[13][6][5]=-(v13[1]*v13[2]);
A[13][6][6]=Power(v13[1],2) - Power(v13[2],2);
A[13][6][7]=a13[1] - v13[2]*v13[3];
A[13][6][8]=v13[1]*v13[2];
A[13][6][9]=a13[2] + v13[1]*v13[3];
A[13][6][10]=a13[3];
A[13][6][11]=0;
A[13][6][12]=0;
A[13][6][13]=0;
A[13][6][14]=0;


A[14][1][1]=a14[4] - v14[3]*v14[5] + v14[2]*v14[6];
A[14][1][2]=-Power(v14[2],2) - Power(v14[3],2);
A[14][1][3]=-a14[3] + v14[1]*v14[2];
A[14][1][4]=a14[2] + v14[1]*v14[3];
A[14][1][5]=0;
A[14][1][6]=0;
A[14][1][7]=0;
A[14][1][8]=0;
A[14][1][9]=0;
A[14][1][10]=0;
A[14][1][11]=0;
A[14][1][12]=0;
A[14][1][13]=0;
A[14][1][14]=0;

A[14][2][1]=a14[5] + v14[3]*v14[4] - v14[1]*v14[6];
A[14][2][2]=a14[3] + v14[1]*v14[2];
A[14][2][3]=-Power(v14[1],2) - Power(v14[3],2);
A[14][2][4]=-a14[1] + v14[2]*v14[3];
A[14][2][5]=0;
A[14][2][6]=0;
A[14][2][7]=0;
A[14][2][8]=0;
A[14][2][9]=0;
A[14][2][10]=0;
A[14][2][11]=0;
A[14][2][12]=0;
A[14][2][13]=0;
A[14][2][14]=0;

A[14][3][1]=a14[6] - v14[2]*v14[4] + v14[1]*v14[5];
A[14][3][2]=-a14[2] + v14[1]*v14[3];
A[14][3][3]=a14[1] + v14[2]*v14[3];
A[14][3][4]=-Power(v14[1],2) - Power(v14[2],2);
A[14][3][5]=0;
A[14][3][6]=0;
A[14][3][7]=0;
A[14][3][8]=0;
A[14][3][9]=0;
A[14][3][10]=0;
A[14][3][11]=0;
A[14][3][12]=0;
A[14][3][13]=0;
A[14][3][14]=0;

A[14][4][1]=0;
A[14][4][2]=0;
A[14][4][3]=a14[6] - v14[2]*v14[4] + v14[1]*v14[5];
A[14][4][4]=-a14[5] - v14[3]*v14[4] + v14[1]*v14[6];
A[14][4][5]=a14[1];
A[14][4][6]=a14[2] - v14[1]*v14[3];
A[14][4][7]=a14[3] + v14[1]*v14[2];
A[14][4][8]=-(v14[2]*v14[3]);
A[14][4][9]=Power(v14[2],2) - Power(v14[3],2);
A[14][4][10]=v14[2]*v14[3];
A[14][4][11]=0;
A[14][4][12]=0;
A[14][4][13]=0;
A[14][4][14]=0;

A[14][5][1]=0;
A[14][5][2]=-a14[6] + v14[2]*v14[4] - v14[1]*v14[5];
A[14][5][3]=0;
A[14][5][4]=a14[4] - v14[3]*v14[5] + v14[2]*v14[6];
A[14][5][5]=v14[1]*v14[3];
A[14][5][6]=a14[1] + v14[2]*v14[3];
A[14][5][7]=-Power(v14[1],2) + Power(v14[3],2);
A[14][5][8]=a14[2];
A[14][5][9]=a14[3] - v14[1]*v14[2];
A[14][5][10]=-(v14[1]*v14[3]);
A[14][5][11]=0;
A[14][5][12]=0;
A[14][5][13]=0;
A[14][5][14]=0;

A[14][6][1]=0;
A[14][6][2]=a14[5] + v14[3]*v14[4] - v14[1]*v14[6];
A[14][6][3]=-a14[4] + v14[3]*v14[5] - v14[2]*v14[6];
A[14][6][4]=0;
A[14][6][5]=-(v14[1]*v14[2]);
A[14][6][6]=Power(v14[1],2) - Power(v14[2],2);
A[14][6][7]=a14[1] - v14[2]*v14[3];
A[14][6][8]=v14[1]*v14[2];
A[14][6][9]=a14[2] + v14[1]*v14[3];
A[14][6][10]=a14[3];
A[14][6][11]=0;
A[14][6][12]=0;
A[14][6][13]=0;
A[14][6][14]=0;


A[15][1][1]=a15[4] - v15[3]*v15[5] + v15[2]*v15[6];
A[15][1][2]=-Power(v15[2],2) - Power(v15[3],2);
A[15][1][3]=-a15[3] + v15[1]*v15[2];
A[15][1][4]=a15[2] + v15[1]*v15[3];
A[15][1][5]=0;
A[15][1][6]=0;
A[15][1][7]=0;
A[15][1][8]=0;
A[15][1][9]=0;
A[15][1][10]=0;
A[15][1][11]=0;
A[15][1][12]=0;
A[15][1][13]=0;
A[15][1][14]=0;

A[15][2][1]=a15[5] + v15[3]*v15[4] - v15[1]*v15[6];
A[15][2][2]=a15[3] + v15[1]*v15[2];
A[15][2][3]=-Power(v15[1],2) - Power(v15[3],2);
A[15][2][4]=-a15[1] + v15[2]*v15[3];
A[15][2][5]=0;
A[15][2][6]=0;
A[15][2][7]=0;
A[15][2][8]=0;
A[15][2][9]=0;
A[15][2][10]=0;
A[15][2][11]=0;
A[15][2][12]=0;
A[15][2][13]=0;
A[15][2][14]=0;

A[15][3][1]=a15[6] - v15[2]*v15[4] + v15[1]*v15[5];
A[15][3][2]=-a15[2] + v15[1]*v15[3];
A[15][3][3]=a15[1] + v15[2]*v15[3];
A[15][3][4]=-Power(v15[1],2) - Power(v15[2],2);
A[15][3][5]=0;
A[15][3][6]=0;
A[15][3][7]=0;
A[15][3][8]=0;
A[15][3][9]=0;
A[15][3][10]=0;
A[15][3][11]=0;
A[15][3][12]=0;
A[15][3][13]=0;
A[15][3][14]=0;

A[15][4][1]=0;
A[15][4][2]=0;
A[15][4][3]=a15[6] - v15[2]*v15[4] + v15[1]*v15[5];
A[15][4][4]=-a15[5] - v15[3]*v15[4] + v15[1]*v15[6];
A[15][4][5]=a15[1];
A[15][4][6]=a15[2] - v15[1]*v15[3];
A[15][4][7]=a15[3] + v15[1]*v15[2];
A[15][4][8]=-(v15[2]*v15[3]);
A[15][4][9]=Power(v15[2],2) - Power(v15[3],2);
A[15][4][10]=v15[2]*v15[3];
A[15][4][11]=0;
A[15][4][12]=0;
A[15][4][13]=0;
A[15][4][14]=0;

A[15][5][1]=0;
A[15][5][2]=-a15[6] + v15[2]*v15[4] - v15[1]*v15[5];
A[15][5][3]=0;
A[15][5][4]=a15[4] - v15[3]*v15[5] + v15[2]*v15[6];
A[15][5][5]=v15[1]*v15[3];
A[15][5][6]=a15[1] + v15[2]*v15[3];
A[15][5][7]=-Power(v15[1],2) + Power(v15[3],2);
A[15][5][8]=a15[2];
A[15][5][9]=a15[3] - v15[1]*v15[2];
A[15][5][10]=-(v15[1]*v15[3]);
A[15][5][11]=0;
A[15][5][12]=0;
A[15][5][13]=0;
A[15][5][14]=0;

A[15][6][1]=0;
A[15][6][2]=a15[5] + v15[3]*v15[4] - v15[1]*v15[6];
A[15][6][3]=-a15[4] + v15[3]*v15[5] - v15[2]*v15[6];
A[15][6][4]=0;
A[15][6][5]=-(v15[1]*v15[2]);
A[15][6][6]=Power(v15[1],2) - Power(v15[2],2);
A[15][6][7]=a15[1] - v15[2]*v15[3];
A[15][6][8]=v15[1]*v15[2];
A[15][6][9]=a15[2] + v15[1]*v15[3];
A[15][6][10]=a15[3];
A[15][6][11]=0;
A[15][6][12]=0;
A[15][6][13]=0;
A[15][6][14]=0;


A[16][1][1]=a16[4] - v16[3]*v16[5] + v16[2]*v16[6];
A[16][1][2]=-Power(v16[2],2) - Power(v16[3],2);
A[16][1][3]=-a16[3] + v16[1]*v16[2];
A[16][1][4]=a16[2] + v16[1]*v16[3];
A[16][1][5]=0;
A[16][1][6]=0;
A[16][1][7]=0;
A[16][1][8]=0;
A[16][1][9]=0;
A[16][1][10]=0;
A[16][1][11]=0;
A[16][1][12]=0;
A[16][1][13]=0;
A[16][1][14]=0;

A[16][2][1]=a16[5] + v16[3]*v16[4] - v16[1]*v16[6];
A[16][2][2]=a16[3] + v16[1]*v16[2];
A[16][2][3]=-Power(v16[1],2) - Power(v16[3],2);
A[16][2][4]=-a16[1] + v16[2]*v16[3];
A[16][2][5]=0;
A[16][2][6]=0;
A[16][2][7]=0;
A[16][2][8]=0;
A[16][2][9]=0;
A[16][2][10]=0;
A[16][2][11]=0;
A[16][2][12]=0;
A[16][2][13]=0;
A[16][2][14]=0;

A[16][3][1]=a16[6] - v16[2]*v16[4] + v16[1]*v16[5];
A[16][3][2]=-a16[2] + v16[1]*v16[3];
A[16][3][3]=a16[1] + v16[2]*v16[3];
A[16][3][4]=-Power(v16[1],2) - Power(v16[2],2);
A[16][3][5]=0;
A[16][3][6]=0;
A[16][3][7]=0;
A[16][3][8]=0;
A[16][3][9]=0;
A[16][3][10]=0;
A[16][3][11]=0;
A[16][3][12]=0;
A[16][3][13]=0;
A[16][3][14]=0;

A[16][4][1]=0;
A[16][4][2]=0;
A[16][4][3]=a16[6] - v16[2]*v16[4] + v16[1]*v16[5];
A[16][4][4]=-a16[5] - v16[3]*v16[4] + v16[1]*v16[6];
A[16][4][5]=a16[1];
A[16][4][6]=a16[2] - v16[1]*v16[3];
A[16][4][7]=a16[3] + v16[1]*v16[2];
A[16][4][8]=-(v16[2]*v16[3]);
A[16][4][9]=Power(v16[2],2) - Power(v16[3],2);
A[16][4][10]=v16[2]*v16[3];
A[16][4][11]=0;
A[16][4][12]=0;
A[16][4][13]=0;
A[16][4][14]=0;

A[16][5][1]=0;
A[16][5][2]=-a16[6] + v16[2]*v16[4] - v16[1]*v16[5];
A[16][5][3]=0;
A[16][5][4]=a16[4] - v16[3]*v16[5] + v16[2]*v16[6];
A[16][5][5]=v16[1]*v16[3];
A[16][5][6]=a16[1] + v16[2]*v16[3];
A[16][5][7]=-Power(v16[1],2) + Power(v16[3],2);
A[16][5][8]=a16[2];
A[16][5][9]=a16[3] - v16[1]*v16[2];
A[16][5][10]=-(v16[1]*v16[3]);
A[16][5][11]=0;
A[16][5][12]=0;
A[16][5][13]=0;
A[16][5][14]=0;

A[16][6][1]=0;
A[16][6][2]=a16[5] + v16[3]*v16[4] - v16[1]*v16[6];
A[16][6][3]=-a16[4] + v16[3]*v16[5] - v16[2]*v16[6];
A[16][6][4]=0;
A[16][6][5]=-(v16[1]*v16[2]);
A[16][6][6]=Power(v16[1],2) - Power(v16[2],2);
A[16][6][7]=a16[1] - v16[2]*v16[3];
A[16][6][8]=v16[1]*v16[2];
A[16][6][9]=a16[2] + v16[1]*v16[3];
A[16][6][10]=a16[3];
A[16][6][11]=0;
A[16][6][12]=0;
A[16][6][13]=0;
A[16][6][14]=0;


A[17][1][1]=a17[4] - v17[3]*v17[5] + v17[2]*v17[6];
A[17][1][2]=-Power(v17[2],2) - Power(v17[3],2);
A[17][1][3]=-a17[3] + v17[1]*v17[2];
A[17][1][4]=a17[2] + v17[1]*v17[3];
A[17][1][5]=0;
A[17][1][6]=0;
A[17][1][7]=0;
A[17][1][8]=0;
A[17][1][9]=0;
A[17][1][10]=0;
A[17][1][11]=0;
A[17][1][12]=0;
A[17][1][13]=0;
A[17][1][14]=0;

A[17][2][1]=a17[5] + v17[3]*v17[4] - v17[1]*v17[6];
A[17][2][2]=a17[3] + v17[1]*v17[2];
A[17][2][3]=-Power(v17[1],2) - Power(v17[3],2);
A[17][2][4]=-a17[1] + v17[2]*v17[3];
A[17][2][5]=0;
A[17][2][6]=0;
A[17][2][7]=0;
A[17][2][8]=0;
A[17][2][9]=0;
A[17][2][10]=0;
A[17][2][11]=0;
A[17][2][12]=0;
A[17][2][13]=0;
A[17][2][14]=0;

A[17][3][1]=a17[6] - v17[2]*v17[4] + v17[1]*v17[5];
A[17][3][2]=-a17[2] + v17[1]*v17[3];
A[17][3][3]=a17[1] + v17[2]*v17[3];
A[17][3][4]=-Power(v17[1],2) - Power(v17[2],2);
A[17][3][5]=0;
A[17][3][6]=0;
A[17][3][7]=0;
A[17][3][8]=0;
A[17][3][9]=0;
A[17][3][10]=0;
A[17][3][11]=0;
A[17][3][12]=0;
A[17][3][13]=0;
A[17][3][14]=0;

A[17][4][1]=0;
A[17][4][2]=0;
A[17][4][3]=a17[6] - v17[2]*v17[4] + v17[1]*v17[5];
A[17][4][4]=-a17[5] - v17[3]*v17[4] + v17[1]*v17[6];
A[17][4][5]=a17[1];
A[17][4][6]=a17[2] - v17[1]*v17[3];
A[17][4][7]=a17[3] + v17[1]*v17[2];
A[17][4][8]=-(v17[2]*v17[3]);
A[17][4][9]=Power(v17[2],2) - Power(v17[3],2);
A[17][4][10]=v17[2]*v17[3];
A[17][4][11]=0;
A[17][4][12]=0;
A[17][4][13]=0;
A[17][4][14]=0;

A[17][5][1]=0;
A[17][5][2]=-a17[6] + v17[2]*v17[4] - v17[1]*v17[5];
A[17][5][3]=0;
A[17][5][4]=a17[4] - v17[3]*v17[5] + v17[2]*v17[6];
A[17][5][5]=v17[1]*v17[3];
A[17][5][6]=a17[1] + v17[2]*v17[3];
A[17][5][7]=-Power(v17[1],2) + Power(v17[3],2);
A[17][5][8]=a17[2];
A[17][5][9]=a17[3] - v17[1]*v17[2];
A[17][5][10]=-(v17[1]*v17[3]);
A[17][5][11]=0;
A[17][5][12]=0;
A[17][5][13]=0;
A[17][5][14]=0;

A[17][6][1]=0;
A[17][6][2]=a17[5] + v17[3]*v17[4] - v17[1]*v17[6];
A[17][6][3]=-a17[4] + v17[3]*v17[5] - v17[2]*v17[6];
A[17][6][4]=0;
A[17][6][5]=-(v17[1]*v17[2]);
A[17][6][6]=Power(v17[1],2) - Power(v17[2],2);
A[17][6][7]=a17[1] - v17[2]*v17[3];
A[17][6][8]=v17[1]*v17[2];
A[17][6][9]=a17[2] + v17[1]*v17[3];
A[17][6][10]=a17[3];
A[17][6][11]=0;
A[17][6][12]=0;
A[17][6][13]=0;
A[17][6][14]=0;


A[18][1][1]=a18[4] - v18[3]*v18[5] + v18[2]*v18[6];
A[18][1][2]=-Power(v18[2],2) - Power(v18[3],2);
A[18][1][3]=-a18[3] + v18[1]*v18[2];
A[18][1][4]=a18[2] + v18[1]*v18[3];
A[18][1][5]=0;
A[18][1][6]=0;
A[18][1][7]=0;
A[18][1][8]=0;
A[18][1][9]=0;
A[18][1][10]=0;
A[18][1][11]=0;
A[18][1][12]=0;
A[18][1][13]=0;
A[18][1][14]=0;

A[18][2][1]=a18[5] + v18[3]*v18[4] - v18[1]*v18[6];
A[18][2][2]=a18[3] + v18[1]*v18[2];
A[18][2][3]=-Power(v18[1],2) - Power(v18[3],2);
A[18][2][4]=-a18[1] + v18[2]*v18[3];
A[18][2][5]=0;
A[18][2][6]=0;
A[18][2][7]=0;
A[18][2][8]=0;
A[18][2][9]=0;
A[18][2][10]=0;
A[18][2][11]=0;
A[18][2][12]=0;
A[18][2][13]=0;
A[18][2][14]=0;

A[18][3][1]=a18[6] - v18[2]*v18[4] + v18[1]*v18[5];
A[18][3][2]=-a18[2] + v18[1]*v18[3];
A[18][3][3]=a18[1] + v18[2]*v18[3];
A[18][3][4]=-Power(v18[1],2) - Power(v18[2],2);
A[18][3][5]=0;
A[18][3][6]=0;
A[18][3][7]=0;
A[18][3][8]=0;
A[18][3][9]=0;
A[18][3][10]=0;
A[18][3][11]=0;
A[18][3][12]=0;
A[18][3][13]=0;
A[18][3][14]=0;

A[18][4][1]=0;
A[18][4][2]=0;
A[18][4][3]=a18[6] - v18[2]*v18[4] + v18[1]*v18[5];
A[18][4][4]=-a18[5] - v18[3]*v18[4] + v18[1]*v18[6];
A[18][4][5]=a18[1];
A[18][4][6]=a18[2] - v18[1]*v18[3];
A[18][4][7]=a18[3] + v18[1]*v18[2];
A[18][4][8]=-(v18[2]*v18[3]);
A[18][4][9]=Power(v18[2],2) - Power(v18[3],2);
A[18][4][10]=v18[2]*v18[3];
A[18][4][11]=0;
A[18][4][12]=0;
A[18][4][13]=0;
A[18][4][14]=0;

A[18][5][1]=0;
A[18][5][2]=-a18[6] + v18[2]*v18[4] - v18[1]*v18[5];
A[18][5][3]=0;
A[18][5][4]=a18[4] - v18[3]*v18[5] + v18[2]*v18[6];
A[18][5][5]=v18[1]*v18[3];
A[18][5][6]=a18[1] + v18[2]*v18[3];
A[18][5][7]=-Power(v18[1],2) + Power(v18[3],2);
A[18][5][8]=a18[2];
A[18][5][9]=a18[3] - v18[1]*v18[2];
A[18][5][10]=-(v18[1]*v18[3]);
A[18][5][11]=0;
A[18][5][12]=0;
A[18][5][13]=0;
A[18][5][14]=0;

A[18][6][1]=0;
A[18][6][2]=a18[5] + v18[3]*v18[4] - v18[1]*v18[6];
A[18][6][3]=-a18[4] + v18[3]*v18[5] - v18[2]*v18[6];
A[18][6][4]=0;
A[18][6][5]=-(v18[1]*v18[2]);
A[18][6][6]=Power(v18[1],2) - Power(v18[2],2);
A[18][6][7]=a18[1] - v18[2]*v18[3];
A[18][6][8]=v18[1]*v18[2];
A[18][6][9]=a18[2] + v18[1]*v18[3];
A[18][6][10]=a18[3];
A[18][6][11]=0;
A[18][6][12]=0;
A[18][6][13]=0;
A[18][6][14]=0;


A[19][1][1]=a19[4] - v19[3]*v19[5] + v19[2]*v19[6];
A[19][1][2]=-Power(v19[2],2) - Power(v19[3],2);
A[19][1][3]=-a19[3] + v19[1]*v19[2];
A[19][1][4]=a19[2] + v19[1]*v19[3];
A[19][1][5]=0;
A[19][1][6]=0;
A[19][1][7]=0;
A[19][1][8]=0;
A[19][1][9]=0;
A[19][1][10]=0;
A[19][1][11]=0;
A[19][1][12]=0;
A[19][1][13]=0;
A[19][1][14]=0;

A[19][2][1]=a19[5] + v19[3]*v19[4] - v19[1]*v19[6];
A[19][2][2]=a19[3] + v19[1]*v19[2];
A[19][2][3]=-Power(v19[1],2) - Power(v19[3],2);
A[19][2][4]=-a19[1] + v19[2]*v19[3];
A[19][2][5]=0;
A[19][2][6]=0;
A[19][2][7]=0;
A[19][2][8]=0;
A[19][2][9]=0;
A[19][2][10]=0;
A[19][2][11]=0;
A[19][2][12]=0;
A[19][2][13]=0;
A[19][2][14]=0;

A[19][3][1]=a19[6] - v19[2]*v19[4] + v19[1]*v19[5];
A[19][3][2]=-a19[2] + v19[1]*v19[3];
A[19][3][3]=a19[1] + v19[2]*v19[3];
A[19][3][4]=-Power(v19[1],2) - Power(v19[2],2);
A[19][3][5]=0;
A[19][3][6]=0;
A[19][3][7]=0;
A[19][3][8]=0;
A[19][3][9]=0;
A[19][3][10]=0;
A[19][3][11]=0;
A[19][3][12]=0;
A[19][3][13]=0;
A[19][3][14]=0;

A[19][4][1]=0;
A[19][4][2]=0;
A[19][4][3]=a19[6] - v19[2]*v19[4] + v19[1]*v19[5];
A[19][4][4]=-a19[5] - v19[3]*v19[4] + v19[1]*v19[6];
A[19][4][5]=a19[1];
A[19][4][6]=a19[2] - v19[1]*v19[3];
A[19][4][7]=a19[3] + v19[1]*v19[2];
A[19][4][8]=-(v19[2]*v19[3]);
A[19][4][9]=Power(v19[2],2) - Power(v19[3],2);
A[19][4][10]=v19[2]*v19[3];
A[19][4][11]=0;
A[19][4][12]=0;
A[19][4][13]=0;
A[19][4][14]=0;

A[19][5][1]=0;
A[19][5][2]=-a19[6] + v19[2]*v19[4] - v19[1]*v19[5];
A[19][5][3]=0;
A[19][5][4]=a19[4] - v19[3]*v19[5] + v19[2]*v19[6];
A[19][5][5]=v19[1]*v19[3];
A[19][5][6]=a19[1] + v19[2]*v19[3];
A[19][5][7]=-Power(v19[1],2) + Power(v19[3],2);
A[19][5][8]=a19[2];
A[19][5][9]=a19[3] - v19[1]*v19[2];
A[19][5][10]=-(v19[1]*v19[3]);
A[19][5][11]=0;
A[19][5][12]=0;
A[19][5][13]=0;
A[19][5][14]=0;

A[19][6][1]=0;
A[19][6][2]=a19[5] + v19[3]*v19[4] - v19[1]*v19[6];
A[19][6][3]=-a19[4] + v19[3]*v19[5] - v19[2]*v19[6];
A[19][6][4]=0;
A[19][6][5]=-(v19[1]*v19[2]);
A[19][6][6]=Power(v19[1],2) - Power(v19[2],2);
A[19][6][7]=a19[1] - v19[2]*v19[3];
A[19][6][8]=v19[1]*v19[2];
A[19][6][9]=a19[2] + v19[1]*v19[3];
A[19][6][10]=a19[3];
A[19][6][11]=0;
A[19][6][12]=0;
A[19][6][13]=0;
A[19][6][14]=0;


A[20][1][1]=a20[4] - v20[3]*v20[5] + v20[2]*v20[6];
A[20][1][2]=-Power(v20[2],2) - Power(v20[3],2);
A[20][1][3]=-a20[3] + v20[1]*v20[2];
A[20][1][4]=a20[2] + v20[1]*v20[3];
A[20][1][5]=0;
A[20][1][6]=0;
A[20][1][7]=0;
A[20][1][8]=0;
A[20][1][9]=0;
A[20][1][10]=0;
A[20][1][11]=0;
A[20][1][12]=0;
A[20][1][13]=0;
A[20][1][14]=0;

A[20][2][1]=a20[5] + v20[3]*v20[4] - v20[1]*v20[6];
A[20][2][2]=a20[3] + v20[1]*v20[2];
A[20][2][3]=-Power(v20[1],2) - Power(v20[3],2);
A[20][2][4]=-a20[1] + v20[2]*v20[3];
A[20][2][5]=0;
A[20][2][6]=0;
A[20][2][7]=0;
A[20][2][8]=0;
A[20][2][9]=0;
A[20][2][10]=0;
A[20][2][11]=0;
A[20][2][12]=0;
A[20][2][13]=0;
A[20][2][14]=0;

A[20][3][1]=a20[6] - v20[2]*v20[4] + v20[1]*v20[5];
A[20][3][2]=-a20[2] + v20[1]*v20[3];
A[20][3][3]=a20[1] + v20[2]*v20[3];
A[20][3][4]=-Power(v20[1],2) - Power(v20[2],2);
A[20][3][5]=0;
A[20][3][6]=0;
A[20][3][7]=0;
A[20][3][8]=0;
A[20][3][9]=0;
A[20][3][10]=0;
A[20][3][11]=0;
A[20][3][12]=0;
A[20][3][13]=0;
A[20][3][14]=0;

A[20][4][1]=0;
A[20][4][2]=0;
A[20][4][3]=a20[6] - v20[2]*v20[4] + v20[1]*v20[5];
A[20][4][4]=-a20[5] - v20[3]*v20[4] + v20[1]*v20[6];
A[20][4][5]=a20[1];
A[20][4][6]=a20[2] - v20[1]*v20[3];
A[20][4][7]=a20[3] + v20[1]*v20[2];
A[20][4][8]=-(v20[2]*v20[3]);
A[20][4][9]=Power(v20[2],2) - Power(v20[3],2);
A[20][4][10]=v20[2]*v20[3];
A[20][4][11]=0;
A[20][4][12]=0;
A[20][4][13]=0;
A[20][4][14]=0;

A[20][5][1]=0;
A[20][5][2]=-a20[6] + v20[2]*v20[4] - v20[1]*v20[5];
A[20][5][3]=0;
A[20][5][4]=a20[4] - v20[3]*v20[5] + v20[2]*v20[6];
A[20][5][5]=v20[1]*v20[3];
A[20][5][6]=a20[1] + v20[2]*v20[3];
A[20][5][7]=-Power(v20[1],2) + Power(v20[3],2);
A[20][5][8]=a20[2];
A[20][5][9]=a20[3] - v20[1]*v20[2];
A[20][5][10]=-(v20[1]*v20[3]);
A[20][5][11]=0;
A[20][5][12]=0;
A[20][5][13]=0;
A[20][5][14]=0;

A[20][6][1]=0;
A[20][6][2]=a20[5] + v20[3]*v20[4] - v20[1]*v20[6];
A[20][6][3]=-a20[4] + v20[3]*v20[5] - v20[2]*v20[6];
A[20][6][4]=0;
A[20][6][5]=-(v20[1]*v20[2]);
A[20][6][6]=Power(v20[1],2) - Power(v20[2],2);
A[20][6][7]=a20[1] - v20[2]*v20[3];
A[20][6][8]=v20[1]*v20[2];
A[20][6][9]=a20[2] + v20[1]*v20[3];
A[20][6][10]=a20[3];
A[20][6][11]=0;
A[20][6][12]=0;
A[20][6][13]=0;
A[20][6][14]=0;


A[21][1][1]=a21[4] - v21[3]*v21[5] + v21[2]*v21[6];
A[21][1][2]=-Power(v21[2],2) - Power(v21[3],2);
A[21][1][3]=-a21[3] + v21[1]*v21[2];
A[21][1][4]=a21[2] + v21[1]*v21[3];
A[21][1][5]=0;
A[21][1][6]=0;
A[21][1][7]=0;
A[21][1][8]=0;
A[21][1][9]=0;
A[21][1][10]=0;
A[21][1][11]=0;
A[21][1][12]=0;
A[21][1][13]=0;
A[21][1][14]=0;

A[21][2][1]=a21[5] + v21[3]*v21[4] - v21[1]*v21[6];
A[21][2][2]=a21[3] + v21[1]*v21[2];
A[21][2][3]=-Power(v21[1],2) - Power(v21[3],2);
A[21][2][4]=-a21[1] + v21[2]*v21[3];
A[21][2][5]=0;
A[21][2][6]=0;
A[21][2][7]=0;
A[21][2][8]=0;
A[21][2][9]=0;
A[21][2][10]=0;
A[21][2][11]=0;
A[21][2][12]=0;
A[21][2][13]=0;
A[21][2][14]=0;

A[21][3][1]=a21[6] - v21[2]*v21[4] + v21[1]*v21[5];
A[21][3][2]=-a21[2] + v21[1]*v21[3];
A[21][3][3]=a21[1] + v21[2]*v21[3];
A[21][3][4]=-Power(v21[1],2) - Power(v21[2],2);
A[21][3][5]=0;
A[21][3][6]=0;
A[21][3][7]=0;
A[21][3][8]=0;
A[21][3][9]=0;
A[21][3][10]=0;
A[21][3][11]=0;
A[21][3][12]=0;
A[21][3][13]=0;
A[21][3][14]=0;

A[21][4][1]=0;
A[21][4][2]=0;
A[21][4][3]=a21[6] - v21[2]*v21[4] + v21[1]*v21[5];
A[21][4][4]=-a21[5] - v21[3]*v21[4] + v21[1]*v21[6];
A[21][4][5]=a21[1];
A[21][4][6]=a21[2] - v21[1]*v21[3];
A[21][4][7]=a21[3] + v21[1]*v21[2];
A[21][4][8]=-(v21[2]*v21[3]);
A[21][4][9]=Power(v21[2],2) - Power(v21[3],2);
A[21][4][10]=v21[2]*v21[3];
A[21][4][11]=0;
A[21][4][12]=0;
A[21][4][13]=0;
A[21][4][14]=0;

A[21][5][1]=0;
A[21][5][2]=-a21[6] + v21[2]*v21[4] - v21[1]*v21[5];
A[21][5][3]=0;
A[21][5][4]=a21[4] - v21[3]*v21[5] + v21[2]*v21[6];
A[21][5][5]=v21[1]*v21[3];
A[21][5][6]=a21[1] + v21[2]*v21[3];
A[21][5][7]=-Power(v21[1],2) + Power(v21[3],2);
A[21][5][8]=a21[2];
A[21][5][9]=a21[3] - v21[1]*v21[2];
A[21][5][10]=-(v21[1]*v21[3]);
A[21][5][11]=0;
A[21][5][12]=0;
A[21][5][13]=0;
A[21][5][14]=0;

A[21][6][1]=0;
A[21][6][2]=a21[5] + v21[3]*v21[4] - v21[1]*v21[6];
A[21][6][3]=-a21[4] + v21[3]*v21[5] - v21[2]*v21[6];
A[21][6][4]=0;
A[21][6][5]=-(v21[1]*v21[2]);
A[21][6][6]=Power(v21[1],2) - Power(v21[2],2);
A[21][6][7]=a21[1] - v21[2]*v21[3];
A[21][6][8]=v21[1]*v21[2];
A[21][6][9]=a21[2] + v21[1]*v21[3];
A[21][6][10]=a21[3];
A[21][6][11]=0;
A[21][6][12]=0;
A[21][6][13]=0;
A[21][6][14]=0;


A[22][1][1]=a22[4] - v22[3]*v22[5] + v22[2]*v22[6];
A[22][1][2]=-Power(v22[2],2) - Power(v22[3],2);
A[22][1][3]=-a22[3] + v22[1]*v22[2];
A[22][1][4]=a22[2] + v22[1]*v22[3];
A[22][1][5]=0;
A[22][1][6]=0;
A[22][1][7]=0;
A[22][1][8]=0;
A[22][1][9]=0;
A[22][1][10]=0;
A[22][1][11]=0;
A[22][1][12]=0;
A[22][1][13]=0;
A[22][1][14]=0;

A[22][2][1]=a22[5] + v22[3]*v22[4] - v22[1]*v22[6];
A[22][2][2]=a22[3] + v22[1]*v22[2];
A[22][2][3]=-Power(v22[1],2) - Power(v22[3],2);
A[22][2][4]=-a22[1] + v22[2]*v22[3];
A[22][2][5]=0;
A[22][2][6]=0;
A[22][2][7]=0;
A[22][2][8]=0;
A[22][2][9]=0;
A[22][2][10]=0;
A[22][2][11]=0;
A[22][2][12]=0;
A[22][2][13]=0;
A[22][2][14]=0;

A[22][3][1]=a22[6] - v22[2]*v22[4] + v22[1]*v22[5];
A[22][3][2]=-a22[2] + v22[1]*v22[3];
A[22][3][3]=a22[1] + v22[2]*v22[3];
A[22][3][4]=-Power(v22[1],2) - Power(v22[2],2);
A[22][3][5]=0;
A[22][3][6]=0;
A[22][3][7]=0;
A[22][3][8]=0;
A[22][3][9]=0;
A[22][3][10]=0;
A[22][3][11]=0;
A[22][3][12]=0;
A[22][3][13]=0;
A[22][3][14]=0;

A[22][4][1]=0;
A[22][4][2]=0;
A[22][4][3]=a22[6] - v22[2]*v22[4] + v22[1]*v22[5];
A[22][4][4]=-a22[5] - v22[3]*v22[4] + v22[1]*v22[6];
A[22][4][5]=a22[1];
A[22][4][6]=a22[2] - v22[1]*v22[3];
A[22][4][7]=a22[3] + v22[1]*v22[2];
A[22][4][8]=-(v22[2]*v22[3]);
A[22][4][9]=Power(v22[2],2) - Power(v22[3],2);
A[22][4][10]=v22[2]*v22[3];
A[22][4][11]=0;
A[22][4][12]=0;
A[22][4][13]=0;
A[22][4][14]=0;

A[22][5][1]=0;
A[22][5][2]=-a22[6] + v22[2]*v22[4] - v22[1]*v22[5];
A[22][5][3]=0;
A[22][5][4]=a22[4] - v22[3]*v22[5] + v22[2]*v22[6];
A[22][5][5]=v22[1]*v22[3];
A[22][5][6]=a22[1] + v22[2]*v22[3];
A[22][5][7]=-Power(v22[1],2) + Power(v22[3],2);
A[22][5][8]=a22[2];
A[22][5][9]=a22[3] - v22[1]*v22[2];
A[22][5][10]=-(v22[1]*v22[3]);
A[22][5][11]=0;
A[22][5][12]=0;
A[22][5][13]=0;
A[22][5][14]=0;

A[22][6][1]=0;
A[22][6][2]=a22[5] + v22[3]*v22[4] - v22[1]*v22[6];
A[22][6][3]=-a22[4] + v22[3]*v22[5] - v22[2]*v22[6];
A[22][6][4]=0;
A[22][6][5]=-(v22[1]*v22[2]);
A[22][6][6]=Power(v22[1],2) - Power(v22[2],2);
A[22][6][7]=a22[1] - v22[2]*v22[3];
A[22][6][8]=v22[1]*v22[2];
A[22][6][9]=a22[2] + v22[1]*v22[3];
A[22][6][10]=a22[3];
A[22][6][11]=0;
A[22][6][12]=0;
A[22][6][13]=0;
A[22][6][14]=0;


A[23][1][1]=a23[4] - v23[3]*v23[5] + v23[2]*v23[6];
A[23][1][2]=-Power(v23[2],2) - Power(v23[3],2);
A[23][1][3]=-a23[3] + v23[1]*v23[2];
A[23][1][4]=a23[2] + v23[1]*v23[3];
A[23][1][5]=0;
A[23][1][6]=0;
A[23][1][7]=0;
A[23][1][8]=0;
A[23][1][9]=0;
A[23][1][10]=0;
A[23][1][11]=0;
A[23][1][12]=0;
A[23][1][13]=0;
A[23][1][14]=0;

A[23][2][1]=a23[5] + v23[3]*v23[4] - v23[1]*v23[6];
A[23][2][2]=a23[3] + v23[1]*v23[2];
A[23][2][3]=-Power(v23[1],2) - Power(v23[3],2);
A[23][2][4]=-a23[1] + v23[2]*v23[3];
A[23][2][5]=0;
A[23][2][6]=0;
A[23][2][7]=0;
A[23][2][8]=0;
A[23][2][9]=0;
A[23][2][10]=0;
A[23][2][11]=0;
A[23][2][12]=0;
A[23][2][13]=0;
A[23][2][14]=0;

A[23][3][1]=a23[6] - v23[2]*v23[4] + v23[1]*v23[5];
A[23][3][2]=-a23[2] + v23[1]*v23[3];
A[23][3][3]=a23[1] + v23[2]*v23[3];
A[23][3][4]=-Power(v23[1],2) - Power(v23[2],2);
A[23][3][5]=0;
A[23][3][6]=0;
A[23][3][7]=0;
A[23][3][8]=0;
A[23][3][9]=0;
A[23][3][10]=0;
A[23][3][11]=0;
A[23][3][12]=0;
A[23][3][13]=0;
A[23][3][14]=0;

A[23][4][1]=0;
A[23][4][2]=0;
A[23][4][3]=a23[6] - v23[2]*v23[4] + v23[1]*v23[5];
A[23][4][4]=-a23[5] - v23[3]*v23[4] + v23[1]*v23[6];
A[23][4][5]=a23[1];
A[23][4][6]=a23[2] - v23[1]*v23[3];
A[23][4][7]=a23[3] + v23[1]*v23[2];
A[23][4][8]=-(v23[2]*v23[3]);
A[23][4][9]=Power(v23[2],2) - Power(v23[3],2);
A[23][4][10]=v23[2]*v23[3];
A[23][4][11]=0;
A[23][4][12]=0;
A[23][4][13]=0;
A[23][4][14]=0;

A[23][5][1]=0;
A[23][5][2]=-a23[6] + v23[2]*v23[4] - v23[1]*v23[5];
A[23][5][3]=0;
A[23][5][4]=a23[4] - v23[3]*v23[5] + v23[2]*v23[6];
A[23][5][5]=v23[1]*v23[3];
A[23][5][6]=a23[1] + v23[2]*v23[3];
A[23][5][7]=-Power(v23[1],2) + Power(v23[3],2);
A[23][5][8]=a23[2];
A[23][5][9]=a23[3] - v23[1]*v23[2];
A[23][5][10]=-(v23[1]*v23[3]);
A[23][5][11]=0;
A[23][5][12]=0;
A[23][5][13]=0;
A[23][5][14]=0;

A[23][6][1]=0;
A[23][6][2]=a23[5] + v23[3]*v23[4] - v23[1]*v23[6];
A[23][6][3]=-a23[4] + v23[3]*v23[5] - v23[2]*v23[6];
A[23][6][4]=0;
A[23][6][5]=-(v23[1]*v23[2]);
A[23][6][6]=Power(v23[1],2) - Power(v23[2],2);
A[23][6][7]=a23[1] - v23[2]*v23[3];
A[23][6][8]=v23[1]*v23[2];
A[23][6][9]=a23[2] + v23[1]*v23[3];
A[23][6][10]=a23[3];
A[23][6][11]=0;
A[23][6][12]=0;
A[23][6][13]=0;
A[23][6][14]=0;


A[24][1][1]=a24[4] - v24[3]*v24[5] + v24[2]*v24[6];
A[24][1][2]=-Power(v24[2],2) - Power(v24[3],2);
A[24][1][3]=-a24[3] + v24[1]*v24[2];
A[24][1][4]=a24[2] + v24[1]*v24[3];
A[24][1][5]=0;
A[24][1][6]=0;
A[24][1][7]=0;
A[24][1][8]=0;
A[24][1][9]=0;
A[24][1][10]=0;
A[24][1][11]=0;
A[24][1][12]=0;
A[24][1][13]=0;
A[24][1][14]=0;

A[24][2][1]=a24[5] + v24[3]*v24[4] - v24[1]*v24[6];
A[24][2][2]=a24[3] + v24[1]*v24[2];
A[24][2][3]=-Power(v24[1],2) - Power(v24[3],2);
A[24][2][4]=-a24[1] + v24[2]*v24[3];
A[24][2][5]=0;
A[24][2][6]=0;
A[24][2][7]=0;
A[24][2][8]=0;
A[24][2][9]=0;
A[24][2][10]=0;
A[24][2][11]=0;
A[24][2][12]=0;
A[24][2][13]=0;
A[24][2][14]=0;

A[24][3][1]=a24[6] - v24[2]*v24[4] + v24[1]*v24[5];
A[24][3][2]=-a24[2] + v24[1]*v24[3];
A[24][3][3]=a24[1] + v24[2]*v24[3];
A[24][3][4]=-Power(v24[1],2) - Power(v24[2],2);
A[24][3][5]=0;
A[24][3][6]=0;
A[24][3][7]=0;
A[24][3][8]=0;
A[24][3][9]=0;
A[24][3][10]=0;
A[24][3][11]=0;
A[24][3][12]=0;
A[24][3][13]=0;
A[24][3][14]=0;

A[24][4][1]=0;
A[24][4][2]=0;
A[24][4][3]=a24[6] - v24[2]*v24[4] + v24[1]*v24[5];
A[24][4][4]=-a24[5] - v24[3]*v24[4] + v24[1]*v24[6];
A[24][4][5]=a24[1];
A[24][4][6]=a24[2] - v24[1]*v24[3];
A[24][4][7]=a24[3] + v24[1]*v24[2];
A[24][4][8]=-(v24[2]*v24[3]);
A[24][4][9]=Power(v24[2],2) - Power(v24[3],2);
A[24][4][10]=v24[2]*v24[3];
A[24][4][11]=0;
A[24][4][12]=0;
A[24][4][13]=0;
A[24][4][14]=0;

A[24][5][1]=0;
A[24][5][2]=-a24[6] + v24[2]*v24[4] - v24[1]*v24[5];
A[24][5][3]=0;
A[24][5][4]=a24[4] - v24[3]*v24[5] + v24[2]*v24[6];
A[24][5][5]=v24[1]*v24[3];
A[24][5][6]=a24[1] + v24[2]*v24[3];
A[24][5][7]=-Power(v24[1],2) + Power(v24[3],2);
A[24][5][8]=a24[2];
A[24][5][9]=a24[3] - v24[1]*v24[2];
A[24][5][10]=-(v24[1]*v24[3]);
A[24][5][11]=0;
A[24][5][12]=0;
A[24][5][13]=0;
A[24][5][14]=0;

A[24][6][1]=0;
A[24][6][2]=a24[5] + v24[3]*v24[4] - v24[1]*v24[6];
A[24][6][3]=-a24[4] + v24[3]*v24[5] - v24[2]*v24[6];
A[24][6][4]=0;
A[24][6][5]=-(v24[1]*v24[2]);
A[24][6][6]=Power(v24[1],2) - Power(v24[2],2);
A[24][6][7]=a24[1] - v24[2]*v24[3];
A[24][6][8]=v24[1]*v24[2];
A[24][6][9]=a24[2] + v24[1]*v24[3];
A[24][6][10]=a24[3];
A[24][6][11]=0;
A[24][6][12]=0;
A[24][6][13]=0;
A[24][6][14]=0;


A[25][1][1]=a25[4] - v25[3]*v25[5] + v25[2]*v25[6];
A[25][1][2]=-Power(v25[2],2) - Power(v25[3],2);
A[25][1][3]=-a25[3] + v25[1]*v25[2];
A[25][1][4]=a25[2] + v25[1]*v25[3];
A[25][1][5]=0;
A[25][1][6]=0;
A[25][1][7]=0;
A[25][1][8]=0;
A[25][1][9]=0;
A[25][1][10]=0;
A[25][1][11]=0;
A[25][1][12]=0;
A[25][1][13]=0;
A[25][1][14]=0;

A[25][2][1]=a25[5] + v25[3]*v25[4] - v25[1]*v25[6];
A[25][2][2]=a25[3] + v25[1]*v25[2];
A[25][2][3]=-Power(v25[1],2) - Power(v25[3],2);
A[25][2][4]=-a25[1] + v25[2]*v25[3];
A[25][2][5]=0;
A[25][2][6]=0;
A[25][2][7]=0;
A[25][2][8]=0;
A[25][2][9]=0;
A[25][2][10]=0;
A[25][2][11]=0;
A[25][2][12]=0;
A[25][2][13]=0;
A[25][2][14]=0;

A[25][3][1]=a25[6] - v25[2]*v25[4] + v25[1]*v25[5];
A[25][3][2]=-a25[2] + v25[1]*v25[3];
A[25][3][3]=a25[1] + v25[2]*v25[3];
A[25][3][4]=-Power(v25[1],2) - Power(v25[2],2);
A[25][3][5]=0;
A[25][3][6]=0;
A[25][3][7]=0;
A[25][3][8]=0;
A[25][3][9]=0;
A[25][3][10]=0;
A[25][3][11]=0;
A[25][3][12]=0;
A[25][3][13]=0;
A[25][3][14]=0;

A[25][4][1]=0;
A[25][4][2]=0;
A[25][4][3]=a25[6] - v25[2]*v25[4] + v25[1]*v25[5];
A[25][4][4]=-a25[5] - v25[3]*v25[4] + v25[1]*v25[6];
A[25][4][5]=a25[1];
A[25][4][6]=a25[2] - v25[1]*v25[3];
A[25][4][7]=a25[3] + v25[1]*v25[2];
A[25][4][8]=-(v25[2]*v25[3]);
A[25][4][9]=Power(v25[2],2) - Power(v25[3],2);
A[25][4][10]=v25[2]*v25[3];
A[25][4][11]=0;
A[25][4][12]=0;
A[25][4][13]=0;
A[25][4][14]=0;

A[25][5][1]=0;
A[25][5][2]=-a25[6] + v25[2]*v25[4] - v25[1]*v25[5];
A[25][5][3]=0;
A[25][5][4]=a25[4] - v25[3]*v25[5] + v25[2]*v25[6];
A[25][5][5]=v25[1]*v25[3];
A[25][5][6]=a25[1] + v25[2]*v25[3];
A[25][5][7]=-Power(v25[1],2) + Power(v25[3],2);
A[25][5][8]=a25[2];
A[25][5][9]=a25[3] - v25[1]*v25[2];
A[25][5][10]=-(v25[1]*v25[3]);
A[25][5][11]=0;
A[25][5][12]=0;
A[25][5][13]=0;
A[25][5][14]=0;

A[25][6][1]=0;
A[25][6][2]=a25[5] + v25[3]*v25[4] - v25[1]*v25[6];
A[25][6][3]=-a25[4] + v25[3]*v25[5] - v25[2]*v25[6];
A[25][6][4]=0;
A[25][6][5]=-(v25[1]*v25[2]);
A[25][6][6]=Power(v25[1],2) - Power(v25[2],2);
A[25][6][7]=a25[1] - v25[2]*v25[3];
A[25][6][8]=v25[1]*v25[2];
A[25][6][9]=a25[2] + v25[1]*v25[3];
A[25][6][10]=a25[3];
A[25][6][11]=0;
A[25][6][12]=0;
A[25][6][13]=0;
A[25][6][14]=0;


A[26][1][1]=a26[4] - v26[3]*v26[5] + v26[2]*v26[6];
A[26][1][2]=-Power(v26[2],2) - Power(v26[3],2);
A[26][1][3]=-a26[3] + v26[1]*v26[2];
A[26][1][4]=a26[2] + v26[1]*v26[3];
A[26][1][5]=0;
A[26][1][6]=0;
A[26][1][7]=0;
A[26][1][8]=0;
A[26][1][9]=0;
A[26][1][10]=0;
A[26][1][11]=0;
A[26][1][12]=0;
A[26][1][13]=0;
A[26][1][14]=0;

A[26][2][1]=a26[5] + v26[3]*v26[4] - v26[1]*v26[6];
A[26][2][2]=a26[3] + v26[1]*v26[2];
A[26][2][3]=-Power(v26[1],2) - Power(v26[3],2);
A[26][2][4]=-a26[1] + v26[2]*v26[3];
A[26][2][5]=0;
A[26][2][6]=0;
A[26][2][7]=0;
A[26][2][8]=0;
A[26][2][9]=0;
A[26][2][10]=0;
A[26][2][11]=0;
A[26][2][12]=0;
A[26][2][13]=0;
A[26][2][14]=0;

A[26][3][1]=a26[6] - v26[2]*v26[4] + v26[1]*v26[5];
A[26][3][2]=-a26[2] + v26[1]*v26[3];
A[26][3][3]=a26[1] + v26[2]*v26[3];
A[26][3][4]=-Power(v26[1],2) - Power(v26[2],2);
A[26][3][5]=0;
A[26][3][6]=0;
A[26][3][7]=0;
A[26][3][8]=0;
A[26][3][9]=0;
A[26][3][10]=0;
A[26][3][11]=0;
A[26][3][12]=0;
A[26][3][13]=0;
A[26][3][14]=0;

A[26][4][1]=0;
A[26][4][2]=0;
A[26][4][3]=a26[6] - v26[2]*v26[4] + v26[1]*v26[5];
A[26][4][4]=-a26[5] - v26[3]*v26[4] + v26[1]*v26[6];
A[26][4][5]=a26[1];
A[26][4][6]=a26[2] - v26[1]*v26[3];
A[26][4][7]=a26[3] + v26[1]*v26[2];
A[26][4][8]=-(v26[2]*v26[3]);
A[26][4][9]=Power(v26[2],2) - Power(v26[3],2);
A[26][4][10]=v26[2]*v26[3];
A[26][4][11]=0;
A[26][4][12]=0;
A[26][4][13]=0;
A[26][4][14]=0;

A[26][5][1]=0;
A[26][5][2]=-a26[6] + v26[2]*v26[4] - v26[1]*v26[5];
A[26][5][3]=0;
A[26][5][4]=a26[4] - v26[3]*v26[5] + v26[2]*v26[6];
A[26][5][5]=v26[1]*v26[3];
A[26][5][6]=a26[1] + v26[2]*v26[3];
A[26][5][7]=-Power(v26[1],2) + Power(v26[3],2);
A[26][5][8]=a26[2];
A[26][5][9]=a26[3] - v26[1]*v26[2];
A[26][5][10]=-(v26[1]*v26[3]);
A[26][5][11]=0;
A[26][5][12]=0;
A[26][5][13]=0;
A[26][5][14]=0;

A[26][6][1]=0;
A[26][6][2]=a26[5] + v26[3]*v26[4] - v26[1]*v26[6];
A[26][6][3]=-a26[4] + v26[3]*v26[5] - v26[2]*v26[6];
A[26][6][4]=0;
A[26][6][5]=-(v26[1]*v26[2]);
A[26][6][6]=Power(v26[1],2) - Power(v26[2],2);
A[26][6][7]=a26[1] - v26[2]*v26[3];
A[26][6][8]=v26[1]*v26[2];
A[26][6][9]=a26[2] + v26[1]*v26[3];
A[26][6][10]=a26[3];
A[26][6][11]=0;
A[26][6][12]=0;
A[26][6][13]=0;
A[26][6][14]=0;


A[27][1][1]=a27[4] - v27[3]*v27[5] + v27[2]*v27[6];
A[27][1][2]=-Power(v27[2],2) - Power(v27[3],2);
A[27][1][3]=-a27[3] + v27[1]*v27[2];
A[27][1][4]=a27[2] + v27[1]*v27[3];
A[27][1][5]=0;
A[27][1][6]=0;
A[27][1][7]=0;
A[27][1][8]=0;
A[27][1][9]=0;
A[27][1][10]=0;
A[27][1][11]=0;
A[27][1][12]=0;
A[27][1][13]=0;
A[27][1][14]=0;

A[27][2][1]=a27[5] + v27[3]*v27[4] - v27[1]*v27[6];
A[27][2][2]=a27[3] + v27[1]*v27[2];
A[27][2][3]=-Power(v27[1],2) - Power(v27[3],2);
A[27][2][4]=-a27[1] + v27[2]*v27[3];
A[27][2][5]=0;
A[27][2][6]=0;
A[27][2][7]=0;
A[27][2][8]=0;
A[27][2][9]=0;
A[27][2][10]=0;
A[27][2][11]=0;
A[27][2][12]=0;
A[27][2][13]=0;
A[27][2][14]=0;

A[27][3][1]=a27[6] - v27[2]*v27[4] + v27[1]*v27[5];
A[27][3][2]=-a27[2] + v27[1]*v27[3];
A[27][3][3]=a27[1] + v27[2]*v27[3];
A[27][3][4]=-Power(v27[1],2) - Power(v27[2],2);
A[27][3][5]=0;
A[27][3][6]=0;
A[27][3][7]=0;
A[27][3][8]=0;
A[27][3][9]=0;
A[27][3][10]=0;
A[27][3][11]=0;
A[27][3][12]=0;
A[27][3][13]=0;
A[27][3][14]=0;

A[27][4][1]=0;
A[27][4][2]=0;
A[27][4][3]=a27[6] - v27[2]*v27[4] + v27[1]*v27[5];
A[27][4][4]=-a27[5] - v27[3]*v27[4] + v27[1]*v27[6];
A[27][4][5]=a27[1];
A[27][4][6]=a27[2] - v27[1]*v27[3];
A[27][4][7]=a27[3] + v27[1]*v27[2];
A[27][4][8]=-(v27[2]*v27[3]);
A[27][4][9]=Power(v27[2],2) - Power(v27[3],2);
A[27][4][10]=v27[2]*v27[3];
A[27][4][11]=0;
A[27][4][12]=0;
A[27][4][13]=0;
A[27][4][14]=0;

A[27][5][1]=0;
A[27][5][2]=-a27[6] + v27[2]*v27[4] - v27[1]*v27[5];
A[27][5][3]=0;
A[27][5][4]=a27[4] - v27[3]*v27[5] + v27[2]*v27[6];
A[27][5][5]=v27[1]*v27[3];
A[27][5][6]=a27[1] + v27[2]*v27[3];
A[27][5][7]=-Power(v27[1],2) + Power(v27[3],2);
A[27][5][8]=a27[2];
A[27][5][9]=a27[3] - v27[1]*v27[2];
A[27][5][10]=-(v27[1]*v27[3]);
A[27][5][11]=0;
A[27][5][12]=0;
A[27][5][13]=0;
A[27][5][14]=0;

A[27][6][1]=0;
A[27][6][2]=a27[5] + v27[3]*v27[4] - v27[1]*v27[6];
A[27][6][3]=-a27[4] + v27[3]*v27[5] - v27[2]*v27[6];
A[27][6][4]=0;
A[27][6][5]=-(v27[1]*v27[2]);
A[27][6][6]=Power(v27[1],2) - Power(v27[2],2);
A[27][6][7]=a27[1] - v27[2]*v27[3];
A[27][6][8]=v27[1]*v27[2];
A[27][6][9]=a27[2] + v27[1]*v27[3];
A[27][6][10]=a27[3];
A[27][6][11]=0;
A[27][6][12]=0;
A[27][6][13]=0;
A[27][6][14]=0;


A[28][1][1]=a28[4] - v28[3]*v28[5] + v28[2]*v28[6];
A[28][1][2]=-Power(v28[2],2) - Power(v28[3],2);
A[28][1][3]=-a28[3] + v28[1]*v28[2];
A[28][1][4]=a28[2] + v28[1]*v28[3];
A[28][1][5]=0;
A[28][1][6]=0;
A[28][1][7]=0;
A[28][1][8]=0;
A[28][1][9]=0;
A[28][1][10]=0;
A[28][1][11]=0;
A[28][1][12]=0;
A[28][1][13]=0;
A[28][1][14]=0;

A[28][2][1]=a28[5] + v28[3]*v28[4] - v28[1]*v28[6];
A[28][2][2]=a28[3] + v28[1]*v28[2];
A[28][2][3]=-Power(v28[1],2) - Power(v28[3],2);
A[28][2][4]=-a28[1] + v28[2]*v28[3];
A[28][2][5]=0;
A[28][2][6]=0;
A[28][2][7]=0;
A[28][2][8]=0;
A[28][2][9]=0;
A[28][2][10]=0;
A[28][2][11]=0;
A[28][2][12]=0;
A[28][2][13]=0;
A[28][2][14]=0;

A[28][3][1]=a28[6] - v28[2]*v28[4] + v28[1]*v28[5];
A[28][3][2]=-a28[2] + v28[1]*v28[3];
A[28][3][3]=a28[1] + v28[2]*v28[3];
A[28][3][4]=-Power(v28[1],2) - Power(v28[2],2);
A[28][3][5]=0;
A[28][3][6]=0;
A[28][3][7]=0;
A[28][3][8]=0;
A[28][3][9]=0;
A[28][3][10]=0;
A[28][3][11]=0;
A[28][3][12]=0;
A[28][3][13]=0;
A[28][3][14]=0;

A[28][4][1]=0;
A[28][4][2]=0;
A[28][4][3]=a28[6] - v28[2]*v28[4] + v28[1]*v28[5];
A[28][4][4]=-a28[5] - v28[3]*v28[4] + v28[1]*v28[6];
A[28][4][5]=a28[1];
A[28][4][6]=a28[2] - v28[1]*v28[3];
A[28][4][7]=a28[3] + v28[1]*v28[2];
A[28][4][8]=-(v28[2]*v28[3]);
A[28][4][9]=Power(v28[2],2) - Power(v28[3],2);
A[28][4][10]=v28[2]*v28[3];
A[28][4][11]=0;
A[28][4][12]=0;
A[28][4][13]=0;
A[28][4][14]=0;

A[28][5][1]=0;
A[28][5][2]=-a28[6] + v28[2]*v28[4] - v28[1]*v28[5];
A[28][5][3]=0;
A[28][5][4]=a28[4] - v28[3]*v28[5] + v28[2]*v28[6];
A[28][5][5]=v28[1]*v28[3];
A[28][5][6]=a28[1] + v28[2]*v28[3];
A[28][5][7]=-Power(v28[1],2) + Power(v28[3],2);
A[28][5][8]=a28[2];
A[28][5][9]=a28[3] - v28[1]*v28[2];
A[28][5][10]=-(v28[1]*v28[3]);
A[28][5][11]=0;
A[28][5][12]=0;
A[28][5][13]=0;
A[28][5][14]=0;

A[28][6][1]=0;
A[28][6][2]=a28[5] + v28[3]*v28[4] - v28[1]*v28[6];
A[28][6][3]=-a28[4] + v28[3]*v28[5] - v28[2]*v28[6];
A[28][6][4]=0;
A[28][6][5]=-(v28[1]*v28[2]);
A[28][6][6]=Power(v28[1],2) - Power(v28[2],2);
A[28][6][7]=a28[1] - v28[2]*v28[3];
A[28][6][8]=v28[1]*v28[2];
A[28][6][9]=a28[2] + v28[1]*v28[3];
A[28][6][10]=a28[3];
A[28][6][11]=0;
A[28][6][12]=0;
A[28][6][13]=0;
A[28][6][14]=0;


A[29][1][1]=a29[4] - v29[3]*v29[5] + v29[2]*v29[6];
A[29][1][2]=-Power(v29[2],2) - Power(v29[3],2);
A[29][1][3]=-a29[3] + v29[1]*v29[2];
A[29][1][4]=a29[2] + v29[1]*v29[3];
A[29][1][5]=0;
A[29][1][6]=0;
A[29][1][7]=0;
A[29][1][8]=0;
A[29][1][9]=0;
A[29][1][10]=0;
A[29][1][11]=0;
A[29][1][12]=0;
A[29][1][13]=0;
A[29][1][14]=0;

A[29][2][1]=a29[5] + v29[3]*v29[4] - v29[1]*v29[6];
A[29][2][2]=a29[3] + v29[1]*v29[2];
A[29][2][3]=-Power(v29[1],2) - Power(v29[3],2);
A[29][2][4]=-a29[1] + v29[2]*v29[3];
A[29][2][5]=0;
A[29][2][6]=0;
A[29][2][7]=0;
A[29][2][8]=0;
A[29][2][9]=0;
A[29][2][10]=0;
A[29][2][11]=0;
A[29][2][12]=0;
A[29][2][13]=0;
A[29][2][14]=0;

A[29][3][1]=a29[6] - v29[2]*v29[4] + v29[1]*v29[5];
A[29][3][2]=-a29[2] + v29[1]*v29[3];
A[29][3][3]=a29[1] + v29[2]*v29[3];
A[29][3][4]=-Power(v29[1],2) - Power(v29[2],2);
A[29][3][5]=0;
A[29][3][6]=0;
A[29][3][7]=0;
A[29][3][8]=0;
A[29][3][9]=0;
A[29][3][10]=0;
A[29][3][11]=0;
A[29][3][12]=0;
A[29][3][13]=0;
A[29][3][14]=0;

A[29][4][1]=0;
A[29][4][2]=0;
A[29][4][3]=a29[6] - v29[2]*v29[4] + v29[1]*v29[5];
A[29][4][4]=-a29[5] - v29[3]*v29[4] + v29[1]*v29[6];
A[29][4][5]=a29[1];
A[29][4][6]=a29[2] - v29[1]*v29[3];
A[29][4][7]=a29[3] + v29[1]*v29[2];
A[29][4][8]=-(v29[2]*v29[3]);
A[29][4][9]=Power(v29[2],2) - Power(v29[3],2);
A[29][4][10]=v29[2]*v29[3];
A[29][4][11]=0;
A[29][4][12]=0;
A[29][4][13]=0;
A[29][4][14]=0;

A[29][5][1]=0;
A[29][5][2]=-a29[6] + v29[2]*v29[4] - v29[1]*v29[5];
A[29][5][3]=0;
A[29][5][4]=a29[4] - v29[3]*v29[5] + v29[2]*v29[6];
A[29][5][5]=v29[1]*v29[3];
A[29][5][6]=a29[1] + v29[2]*v29[3];
A[29][5][7]=-Power(v29[1],2) + Power(v29[3],2);
A[29][5][8]=a29[2];
A[29][5][9]=a29[3] - v29[1]*v29[2];
A[29][5][10]=-(v29[1]*v29[3]);
A[29][5][11]=0;
A[29][5][12]=0;
A[29][5][13]=0;
A[29][5][14]=0;

A[29][6][1]=0;
A[29][6][2]=a29[5] + v29[3]*v29[4] - v29[1]*v29[6];
A[29][6][3]=-a29[4] + v29[3]*v29[5] - v29[2]*v29[6];
A[29][6][4]=0;
A[29][6][5]=-(v29[1]*v29[2]);
A[29][6][6]=Power(v29[1],2) - Power(v29[2],2);
A[29][6][7]=a29[1] - v29[2]*v29[3];
A[29][6][8]=v29[1]*v29[2];
A[29][6][9]=a29[2] + v29[1]*v29[3];
A[29][6][10]=a29[3];
A[29][6][11]=0;
A[29][6][12]=0;
A[29][6][13]=0;
A[29][6][14]=0;


A[30][1][1]=a30[4] - v30[3]*v30[5] + v30[2]*v30[6];
A[30][1][2]=-Power(v30[2],2) - Power(v30[3],2);
A[30][1][3]=-a30[3] + v30[1]*v30[2];
A[30][1][4]=a30[2] + v30[1]*v30[3];
A[30][1][5]=0;
A[30][1][6]=0;
A[30][1][7]=0;
A[30][1][8]=0;
A[30][1][9]=0;
A[30][1][10]=0;
A[30][1][11]=0;
A[30][1][12]=0;
A[30][1][13]=0;
A[30][1][14]=0;

A[30][2][1]=a30[5] + v30[3]*v30[4] - v30[1]*v30[6];
A[30][2][2]=a30[3] + v30[1]*v30[2];
A[30][2][3]=-Power(v30[1],2) - Power(v30[3],2);
A[30][2][4]=-a30[1] + v30[2]*v30[3];
A[30][2][5]=0;
A[30][2][6]=0;
A[30][2][7]=0;
A[30][2][8]=0;
A[30][2][9]=0;
A[30][2][10]=0;
A[30][2][11]=0;
A[30][2][12]=0;
A[30][2][13]=0;
A[30][2][14]=0;

A[30][3][1]=a30[6] - v30[2]*v30[4] + v30[1]*v30[5];
A[30][3][2]=-a30[2] + v30[1]*v30[3];
A[30][3][3]=a30[1] + v30[2]*v30[3];
A[30][3][4]=-Power(v30[1],2) - Power(v30[2],2);
A[30][3][5]=0;
A[30][3][6]=0;
A[30][3][7]=0;
A[30][3][8]=0;
A[30][3][9]=0;
A[30][3][10]=0;
A[30][3][11]=0;
A[30][3][12]=0;
A[30][3][13]=0;
A[30][3][14]=0;

A[30][4][1]=0;
A[30][4][2]=0;
A[30][4][3]=a30[6] - v30[2]*v30[4] + v30[1]*v30[5];
A[30][4][4]=-a30[5] - v30[3]*v30[4] + v30[1]*v30[6];
A[30][4][5]=a30[1];
A[30][4][6]=a30[2] - v30[1]*v30[3];
A[30][4][7]=a30[3] + v30[1]*v30[2];
A[30][4][8]=-(v30[2]*v30[3]);
A[30][4][9]=Power(v30[2],2) - Power(v30[3],2);
A[30][4][10]=v30[2]*v30[3];
A[30][4][11]=0;
A[30][4][12]=0;
A[30][4][13]=0;
A[30][4][14]=0;

A[30][5][1]=0;
A[30][5][2]=-a30[6] + v30[2]*v30[4] - v30[1]*v30[5];
A[30][5][3]=0;
A[30][5][4]=a30[4] - v30[3]*v30[5] + v30[2]*v30[6];
A[30][5][5]=v30[1]*v30[3];
A[30][5][6]=a30[1] + v30[2]*v30[3];
A[30][5][7]=-Power(v30[1],2) + Power(v30[3],2);
A[30][5][8]=a30[2];
A[30][5][9]=a30[3] - v30[1]*v30[2];
A[30][5][10]=-(v30[1]*v30[3]);
A[30][5][11]=0;
A[30][5][12]=0;
A[30][5][13]=0;
A[30][5][14]=0;

A[30][6][1]=0;
A[30][6][2]=a30[5] + v30[3]*v30[4] - v30[1]*v30[6];
A[30][6][3]=-a30[4] + v30[3]*v30[5] - v30[2]*v30[6];
A[30][6][4]=0;
A[30][6][5]=-(v30[1]*v30[2]);
A[30][6][6]=Power(v30[1],2) - Power(v30[2],2);
A[30][6][7]=a30[1] - v30[2]*v30[3];
A[30][6][8]=v30[1]*v30[2];
A[30][6][9]=a30[2] + v30[1]*v30[3];
A[30][6][10]=a30[3];
A[30][6][11]=0;
A[30][6][12]=0;
A[30][6][13]=0;
A[30][6][14]=0;


A[31][1][1]=a31[4] - v31[3]*v31[5] + v31[2]*v31[6];
A[31][1][2]=-Power(v31[2],2) - Power(v31[3],2);
A[31][1][3]=-a31[3] + v31[1]*v31[2];
A[31][1][4]=a31[2] + v31[1]*v31[3];
A[31][1][5]=0;
A[31][1][6]=0;
A[31][1][7]=0;
A[31][1][8]=0;
A[31][1][9]=0;
A[31][1][10]=0;
A[31][1][11]=0;
A[31][1][12]=0;
A[31][1][13]=0;
A[31][1][14]=0;

A[31][2][1]=a31[5] + v31[3]*v31[4] - v31[1]*v31[6];
A[31][2][2]=a31[3] + v31[1]*v31[2];
A[31][2][3]=-Power(v31[1],2) - Power(v31[3],2);
A[31][2][4]=-a31[1] + v31[2]*v31[3];
A[31][2][5]=0;
A[31][2][6]=0;
A[31][2][7]=0;
A[31][2][8]=0;
A[31][2][9]=0;
A[31][2][10]=0;
A[31][2][11]=0;
A[31][2][12]=0;
A[31][2][13]=0;
A[31][2][14]=0;

A[31][3][1]=a31[6] - v31[2]*v31[4] + v31[1]*v31[5];
A[31][3][2]=-a31[2] + v31[1]*v31[3];
A[31][3][3]=a31[1] + v31[2]*v31[3];
A[31][3][4]=-Power(v31[1],2) - Power(v31[2],2);
A[31][3][5]=0;
A[31][3][6]=0;
A[31][3][7]=0;
A[31][3][8]=0;
A[31][3][9]=0;
A[31][3][10]=0;
A[31][3][11]=0;
A[31][3][12]=0;
A[31][3][13]=0;
A[31][3][14]=0;

A[31][4][1]=0;
A[31][4][2]=0;
A[31][4][3]=a31[6] - v31[2]*v31[4] + v31[1]*v31[5];
A[31][4][4]=-a31[5] - v31[3]*v31[4] + v31[1]*v31[6];
A[31][4][5]=a31[1];
A[31][4][6]=a31[2] - v31[1]*v31[3];
A[31][4][7]=a31[3] + v31[1]*v31[2];
A[31][4][8]=-(v31[2]*v31[3]);
A[31][4][9]=Power(v31[2],2) - Power(v31[3],2);
A[31][4][10]=v31[2]*v31[3];
A[31][4][11]=0;
A[31][4][12]=0;
A[31][4][13]=0;
A[31][4][14]=0;

A[31][5][1]=0;
A[31][5][2]=-a31[6] + v31[2]*v31[4] - v31[1]*v31[5];
A[31][5][3]=0;
A[31][5][4]=a31[4] - v31[3]*v31[5] + v31[2]*v31[6];
A[31][5][5]=v31[1]*v31[3];
A[31][5][6]=a31[1] + v31[2]*v31[3];
A[31][5][7]=-Power(v31[1],2) + Power(v31[3],2);
A[31][5][8]=a31[2];
A[31][5][9]=a31[3] - v31[1]*v31[2];
A[31][5][10]=-(v31[1]*v31[3]);
A[31][5][11]=0;
A[31][5][12]=0;
A[31][5][13]=0;
A[31][5][14]=0;

A[31][6][1]=0;
A[31][6][2]=a31[5] + v31[3]*v31[4] - v31[1]*v31[6];
A[31][6][3]=-a31[4] + v31[3]*v31[5] - v31[2]*v31[6];
A[31][6][4]=0;
A[31][6][5]=-(v31[1]*v31[2]);
A[31][6][6]=Power(v31[1],2) - Power(v31[2],2);
A[31][6][7]=a31[1] - v31[2]*v31[3];
A[31][6][8]=v31[1]*v31[2];
A[31][6][9]=a31[2] + v31[1]*v31[3];
A[31][6][10]=a31[3];
A[31][6][11]=0;
A[31][6][12]=0;
A[31][6][13]=0;
A[31][6][14]=0;


A[32][1][1]=a32[4] - v32[3]*v32[5] + v32[2]*v32[6];
A[32][1][2]=-Power(v32[2],2) - Power(v32[3],2);
A[32][1][3]=-a32[3] + v32[1]*v32[2];
A[32][1][4]=a32[2] + v32[1]*v32[3];
A[32][1][5]=0;
A[32][1][6]=0;
A[32][1][7]=0;
A[32][1][8]=0;
A[32][1][9]=0;
A[32][1][10]=0;
A[32][1][11]=0;
A[32][1][12]=0;
A[32][1][13]=0;
A[32][1][14]=0;

A[32][2][1]=a32[5] + v32[3]*v32[4] - v32[1]*v32[6];
A[32][2][2]=a32[3] + v32[1]*v32[2];
A[32][2][3]=-Power(v32[1],2) - Power(v32[3],2);
A[32][2][4]=-a32[1] + v32[2]*v32[3];
A[32][2][5]=0;
A[32][2][6]=0;
A[32][2][7]=0;
A[32][2][8]=0;
A[32][2][9]=0;
A[32][2][10]=0;
A[32][2][11]=0;
A[32][2][12]=0;
A[32][2][13]=0;
A[32][2][14]=0;

A[32][3][1]=a32[6] - v32[2]*v32[4] + v32[1]*v32[5];
A[32][3][2]=-a32[2] + v32[1]*v32[3];
A[32][3][3]=a32[1] + v32[2]*v32[3];
A[32][3][4]=-Power(v32[1],2) - Power(v32[2],2);
A[32][3][5]=0;
A[32][3][6]=0;
A[32][3][7]=0;
A[32][3][8]=0;
A[32][3][9]=0;
A[32][3][10]=0;
A[32][3][11]=0;
A[32][3][12]=0;
A[32][3][13]=0;
A[32][3][14]=0;

A[32][4][1]=0;
A[32][4][2]=0;
A[32][4][3]=a32[6] - v32[2]*v32[4] + v32[1]*v32[5];
A[32][4][4]=-a32[5] - v32[3]*v32[4] + v32[1]*v32[6];
A[32][4][5]=a32[1];
A[32][4][6]=a32[2] - v32[1]*v32[3];
A[32][4][7]=a32[3] + v32[1]*v32[2];
A[32][4][8]=-(v32[2]*v32[3]);
A[32][4][9]=Power(v32[2],2) - Power(v32[3],2);
A[32][4][10]=v32[2]*v32[3];
A[32][4][11]=0;
A[32][4][12]=0;
A[32][4][13]=0;
A[32][4][14]=0;

A[32][5][1]=0;
A[32][5][2]=-a32[6] + v32[2]*v32[4] - v32[1]*v32[5];
A[32][5][3]=0;
A[32][5][4]=a32[4] - v32[3]*v32[5] + v32[2]*v32[6];
A[32][5][5]=v32[1]*v32[3];
A[32][5][6]=a32[1] + v32[2]*v32[3];
A[32][5][7]=-Power(v32[1],2) + Power(v32[3],2);
A[32][5][8]=a32[2];
A[32][5][9]=a32[3] - v32[1]*v32[2];
A[32][5][10]=-(v32[1]*v32[3]);
A[32][5][11]=0;
A[32][5][12]=0;
A[32][5][13]=0;
A[32][5][14]=0;

A[32][6][1]=0;
A[32][6][2]=a32[5] + v32[3]*v32[4] - v32[1]*v32[6];
A[32][6][3]=-a32[4] + v32[3]*v32[5] - v32[2]*v32[6];
A[32][6][4]=0;
A[32][6][5]=-(v32[1]*v32[2]);
A[32][6][6]=Power(v32[1],2) - Power(v32[2],2);
A[32][6][7]=a32[1] - v32[2]*v32[3];
A[32][6][8]=v32[1]*v32[2];
A[32][6][9]=a32[2] + v32[1]*v32[3];
A[32][6][10]=a32[3];
A[32][6][11]=0;
A[32][6][12]=0;
A[32][6][13]=0;
A[32][6][14]=0;


A[33][1][1]=a33[4] - v33[3]*v33[5] + v33[2]*v33[6];
A[33][1][2]=-Power(v33[2],2) - Power(v33[3],2);
A[33][1][3]=-a33[3] + v33[1]*v33[2];
A[33][1][4]=a33[2] + v33[1]*v33[3];
A[33][1][5]=0;
A[33][1][6]=0;
A[33][1][7]=0;
A[33][1][8]=0;
A[33][1][9]=0;
A[33][1][10]=0;
A[33][1][11]=0;
A[33][1][12]=0;
A[33][1][13]=0;
A[33][1][14]=0;

A[33][2][1]=a33[5] + v33[3]*v33[4] - v33[1]*v33[6];
A[33][2][2]=a33[3] + v33[1]*v33[2];
A[33][2][3]=-Power(v33[1],2) - Power(v33[3],2);
A[33][2][4]=-a33[1] + v33[2]*v33[3];
A[33][2][5]=0;
A[33][2][6]=0;
A[33][2][7]=0;
A[33][2][8]=0;
A[33][2][9]=0;
A[33][2][10]=0;
A[33][2][11]=0;
A[33][2][12]=0;
A[33][2][13]=0;
A[33][2][14]=0;

A[33][3][1]=a33[6] - v33[2]*v33[4] + v33[1]*v33[5];
A[33][3][2]=-a33[2] + v33[1]*v33[3];
A[33][3][3]=a33[1] + v33[2]*v33[3];
A[33][3][4]=-Power(v33[1],2) - Power(v33[2],2);
A[33][3][5]=0;
A[33][3][6]=0;
A[33][3][7]=0;
A[33][3][8]=0;
A[33][3][9]=0;
A[33][3][10]=0;
A[33][3][11]=0;
A[33][3][12]=0;
A[33][3][13]=0;
A[33][3][14]=0;

A[33][4][1]=0;
A[33][4][2]=0;
A[33][4][3]=a33[6] - v33[2]*v33[4] + v33[1]*v33[5];
A[33][4][4]=-a33[5] - v33[3]*v33[4] + v33[1]*v33[6];
A[33][4][5]=a33[1];
A[33][4][6]=a33[2] - v33[1]*v33[3];
A[33][4][7]=a33[3] + v33[1]*v33[2];
A[33][4][8]=-(v33[2]*v33[3]);
A[33][4][9]=Power(v33[2],2) - Power(v33[3],2);
A[33][4][10]=v33[2]*v33[3];
A[33][4][11]=0;
A[33][4][12]=0;
A[33][4][13]=0;
A[33][4][14]=0;

A[33][5][1]=0;
A[33][5][2]=-a33[6] + v33[2]*v33[4] - v33[1]*v33[5];
A[33][5][3]=0;
A[33][5][4]=a33[4] - v33[3]*v33[5] + v33[2]*v33[6];
A[33][5][5]=v33[1]*v33[3];
A[33][5][6]=a33[1] + v33[2]*v33[3];
A[33][5][7]=-Power(v33[1],2) + Power(v33[3],2);
A[33][5][8]=a33[2];
A[33][5][9]=a33[3] - v33[1]*v33[2];
A[33][5][10]=-(v33[1]*v33[3]);
A[33][5][11]=0;
A[33][5][12]=0;
A[33][5][13]=0;
A[33][5][14]=0;

A[33][6][1]=0;
A[33][6][2]=a33[5] + v33[3]*v33[4] - v33[1]*v33[6];
A[33][6][3]=-a33[4] + v33[3]*v33[5] - v33[2]*v33[6];
A[33][6][4]=0;
A[33][6][5]=-(v33[1]*v33[2]);
A[33][6][6]=Power(v33[1],2) - Power(v33[2],2);
A[33][6][7]=a33[1] - v33[2]*v33[3];
A[33][6][8]=v33[1]*v33[2];
A[33][6][9]=a33[2] + v33[1]*v33[3];
A[33][6][10]=a33[3];
A[33][6][11]=0;
A[33][6][12]=0;
A[33][6][13]=0;
A[33][6][14]=0;


A[34][1][1]=a34[4] - v34[3]*v34[5] + v34[2]*v34[6];
A[34][1][2]=-Power(v34[2],2) - Power(v34[3],2);
A[34][1][3]=-a34[3] + v34[1]*v34[2];
A[34][1][4]=a34[2] + v34[1]*v34[3];
A[34][1][5]=0;
A[34][1][6]=0;
A[34][1][7]=0;
A[34][1][8]=0;
A[34][1][9]=0;
A[34][1][10]=0;
A[34][1][11]=0;
A[34][1][12]=0;
A[34][1][13]=0;
A[34][1][14]=0;

A[34][2][1]=a34[5] + v34[3]*v34[4] - v34[1]*v34[6];
A[34][2][2]=a34[3] + v34[1]*v34[2];
A[34][2][3]=-Power(v34[1],2) - Power(v34[3],2);
A[34][2][4]=-a34[1] + v34[2]*v34[3];
A[34][2][5]=0;
A[34][2][6]=0;
A[34][2][7]=0;
A[34][2][8]=0;
A[34][2][9]=0;
A[34][2][10]=0;
A[34][2][11]=0;
A[34][2][12]=0;
A[34][2][13]=0;
A[34][2][14]=0;

A[34][3][1]=a34[6] - v34[2]*v34[4] + v34[1]*v34[5];
A[34][3][2]=-a34[2] + v34[1]*v34[3];
A[34][3][3]=a34[1] + v34[2]*v34[3];
A[34][3][4]=-Power(v34[1],2) - Power(v34[2],2);
A[34][3][5]=0;
A[34][3][6]=0;
A[34][3][7]=0;
A[34][3][8]=0;
A[34][3][9]=0;
A[34][3][10]=0;
A[34][3][11]=0;
A[34][3][12]=0;
A[34][3][13]=0;
A[34][3][14]=0;

A[34][4][1]=0;
A[34][4][2]=0;
A[34][4][3]=a34[6] - v34[2]*v34[4] + v34[1]*v34[5];
A[34][4][4]=-a34[5] - v34[3]*v34[4] + v34[1]*v34[6];
A[34][4][5]=a34[1];
A[34][4][6]=a34[2] - v34[1]*v34[3];
A[34][4][7]=a34[3] + v34[1]*v34[2];
A[34][4][8]=-(v34[2]*v34[3]);
A[34][4][9]=Power(v34[2],2) - Power(v34[3],2);
A[34][4][10]=v34[2]*v34[3];
A[34][4][11]=0;
A[34][4][12]=0;
A[34][4][13]=0;
A[34][4][14]=0;

A[34][5][1]=0;
A[34][5][2]=-a34[6] + v34[2]*v34[4] - v34[1]*v34[5];
A[34][5][3]=0;
A[34][5][4]=a34[4] - v34[3]*v34[5] + v34[2]*v34[6];
A[34][5][5]=v34[1]*v34[3];
A[34][5][6]=a34[1] + v34[2]*v34[3];
A[34][5][7]=-Power(v34[1],2) + Power(v34[3],2);
A[34][5][8]=a34[2];
A[34][5][9]=a34[3] - v34[1]*v34[2];
A[34][5][10]=-(v34[1]*v34[3]);
A[34][5][11]=0;
A[34][5][12]=0;
A[34][5][13]=0;
A[34][5][14]=0;

A[34][6][1]=0;
A[34][6][2]=a34[5] + v34[3]*v34[4] - v34[1]*v34[6];
A[34][6][3]=-a34[4] + v34[3]*v34[5] - v34[2]*v34[6];
A[34][6][4]=0;
A[34][6][5]=-(v34[1]*v34[2]);
A[34][6][6]=Power(v34[1],2) - Power(v34[2],2);
A[34][6][7]=a34[1] - v34[2]*v34[3];
A[34][6][8]=v34[1]*v34[2];
A[34][6][9]=a34[2] + v34[1]*v34[3];
A[34][6][10]=a34[3];
A[34][6][11]=0;
A[34][6][12]=0;
A[34][6][13]=0;
A[34][6][14]=0;


A[35][1][1]=a35[4] - v35[3]*v35[5] + v35[2]*v35[6];
A[35][1][2]=-Power(v35[2],2) - Power(v35[3],2);
A[35][1][3]=-a35[3] + v35[1]*v35[2];
A[35][1][4]=a35[2] + v35[1]*v35[3];
A[35][1][5]=0;
A[35][1][6]=0;
A[35][1][7]=0;
A[35][1][8]=0;
A[35][1][9]=0;
A[35][1][10]=0;
A[35][1][11]=0;
A[35][1][12]=0;
A[35][1][13]=0;
A[35][1][14]=0;

A[35][2][1]=a35[5] + v35[3]*v35[4] - v35[1]*v35[6];
A[35][2][2]=a35[3] + v35[1]*v35[2];
A[35][2][3]=-Power(v35[1],2) - Power(v35[3],2);
A[35][2][4]=-a35[1] + v35[2]*v35[3];
A[35][2][5]=0;
A[35][2][6]=0;
A[35][2][7]=0;
A[35][2][8]=0;
A[35][2][9]=0;
A[35][2][10]=0;
A[35][2][11]=0;
A[35][2][12]=0;
A[35][2][13]=0;
A[35][2][14]=0;

A[35][3][1]=a35[6] - v35[2]*v35[4] + v35[1]*v35[5];
A[35][3][2]=-a35[2] + v35[1]*v35[3];
A[35][3][3]=a35[1] + v35[2]*v35[3];
A[35][3][4]=-Power(v35[1],2) - Power(v35[2],2);
A[35][3][5]=0;
A[35][3][6]=0;
A[35][3][7]=0;
A[35][3][8]=0;
A[35][3][9]=0;
A[35][3][10]=0;
A[35][3][11]=0;
A[35][3][12]=0;
A[35][3][13]=0;
A[35][3][14]=0;

A[35][4][1]=0;
A[35][4][2]=0;
A[35][4][3]=a35[6] - v35[2]*v35[4] + v35[1]*v35[5];
A[35][4][4]=-a35[5] - v35[3]*v35[4] + v35[1]*v35[6];
A[35][4][5]=a35[1];
A[35][4][6]=a35[2] - v35[1]*v35[3];
A[35][4][7]=a35[3] + v35[1]*v35[2];
A[35][4][8]=-(v35[2]*v35[3]);
A[35][4][9]=Power(v35[2],2) - Power(v35[3],2);
A[35][4][10]=v35[2]*v35[3];
A[35][4][11]=0;
A[35][4][12]=0;
A[35][4][13]=0;
A[35][4][14]=0;

A[35][5][1]=0;
A[35][5][2]=-a35[6] + v35[2]*v35[4] - v35[1]*v35[5];
A[35][5][3]=0;
A[35][5][4]=a35[4] - v35[3]*v35[5] + v35[2]*v35[6];
A[35][5][5]=v35[1]*v35[3];
A[35][5][6]=a35[1] + v35[2]*v35[3];
A[35][5][7]=-Power(v35[1],2) + Power(v35[3],2);
A[35][5][8]=a35[2];
A[35][5][9]=a35[3] - v35[1]*v35[2];
A[35][5][10]=-(v35[1]*v35[3]);
A[35][5][11]=0;
A[35][5][12]=0;
A[35][5][13]=0;
A[35][5][14]=0;

A[35][6][1]=0;
A[35][6][2]=a35[5] + v35[3]*v35[4] - v35[1]*v35[6];
A[35][6][3]=-a35[4] + v35[3]*v35[5] - v35[2]*v35[6];
A[35][6][4]=0;
A[35][6][5]=-(v35[1]*v35[2]);
A[35][6][6]=Power(v35[1],2) - Power(v35[2],2);
A[35][6][7]=a35[1] - v35[2]*v35[3];
A[35][6][8]=v35[1]*v35[2];
A[35][6][9]=a35[2] + v35[1]*v35[3];
A[35][6][10]=a35[3];
A[35][6][11]=0;
A[35][6][12]=0;
A[35][6][13]=0;
A[35][6][14]=0;


A[36][1][1]=a36[4] - v36[3]*v36[5] + v36[2]*v36[6];
A[36][1][2]=-Power(v36[2],2) - Power(v36[3],2);
A[36][1][3]=-a36[3] + v36[1]*v36[2];
A[36][1][4]=a36[2] + v36[1]*v36[3];
A[36][1][5]=0;
A[36][1][6]=0;
A[36][1][7]=0;
A[36][1][8]=0;
A[36][1][9]=0;
A[36][1][10]=0;
A[36][1][11]=0;
A[36][1][12]=0;
A[36][1][13]=0;
A[36][1][14]=0;

A[36][2][1]=a36[5] + v36[3]*v36[4] - v36[1]*v36[6];
A[36][2][2]=a36[3] + v36[1]*v36[2];
A[36][2][3]=-Power(v36[1],2) - Power(v36[3],2);
A[36][2][4]=-a36[1] + v36[2]*v36[3];
A[36][2][5]=0;
A[36][2][6]=0;
A[36][2][7]=0;
A[36][2][8]=0;
A[36][2][9]=0;
A[36][2][10]=0;
A[36][2][11]=0;
A[36][2][12]=0;
A[36][2][13]=0;
A[36][2][14]=0;

A[36][3][1]=a36[6] - v36[2]*v36[4] + v36[1]*v36[5];
A[36][3][2]=-a36[2] + v36[1]*v36[3];
A[36][3][3]=a36[1] + v36[2]*v36[3];
A[36][3][4]=-Power(v36[1],2) - Power(v36[2],2);
A[36][3][5]=0;
A[36][3][6]=0;
A[36][3][7]=0;
A[36][3][8]=0;
A[36][3][9]=0;
A[36][3][10]=0;
A[36][3][11]=0;
A[36][3][12]=0;
A[36][3][13]=0;
A[36][3][14]=0;

A[36][4][1]=0;
A[36][4][2]=0;
A[36][4][3]=a36[6] - v36[2]*v36[4] + v36[1]*v36[5];
A[36][4][4]=-a36[5] - v36[3]*v36[4] + v36[1]*v36[6];
A[36][4][5]=a36[1];
A[36][4][6]=a36[2] - v36[1]*v36[3];
A[36][4][7]=a36[3] + v36[1]*v36[2];
A[36][4][8]=-(v36[2]*v36[3]);
A[36][4][9]=Power(v36[2],2) - Power(v36[3],2);
A[36][4][10]=v36[2]*v36[3];
A[36][4][11]=0;
A[36][4][12]=0;
A[36][4][13]=0;
A[36][4][14]=0;

A[36][5][1]=0;
A[36][5][2]=-a36[6] + v36[2]*v36[4] - v36[1]*v36[5];
A[36][5][3]=0;
A[36][5][4]=a36[4] - v36[3]*v36[5] + v36[2]*v36[6];
A[36][5][5]=v36[1]*v36[3];
A[36][5][6]=a36[1] + v36[2]*v36[3];
A[36][5][7]=-Power(v36[1],2) + Power(v36[3],2);
A[36][5][8]=a36[2];
A[36][5][9]=a36[3] - v36[1]*v36[2];
A[36][5][10]=-(v36[1]*v36[3]);
A[36][5][11]=0;
A[36][5][12]=0;
A[36][5][13]=0;
A[36][5][14]=0;

A[36][6][1]=0;
A[36][6][2]=a36[5] + v36[3]*v36[4] - v36[1]*v36[6];
A[36][6][3]=-a36[4] + v36[3]*v36[5] - v36[2]*v36[6];
A[36][6][4]=0;
A[36][6][5]=-(v36[1]*v36[2]);
A[36][6][6]=Power(v36[1],2) - Power(v36[2],2);
A[36][6][7]=a36[1] - v36[2]*v36[3];
A[36][6][8]=v36[1]*v36[2];
A[36][6][9]=a36[2] + v36[1]*v36[3];
A[36][6][10]=a36[3];
A[36][6][11]=0;
A[36][6][12]=0;
A[36][6][13]=0;
A[36][6][14]=0;


A[37][1][1]=a37[4] - v37[3]*v37[5] + v37[2]*v37[6];
A[37][1][2]=-Power(v37[2],2) - Power(v37[3],2);
A[37][1][3]=-a37[3] + v37[1]*v37[2];
A[37][1][4]=a37[2] + v37[1]*v37[3];
A[37][1][5]=0;
A[37][1][6]=0;
A[37][1][7]=0;
A[37][1][8]=0;
A[37][1][9]=0;
A[37][1][10]=0;
A[37][1][11]=0;
A[37][1][12]=0;
A[37][1][13]=0;
A[37][1][14]=0;

A[37][2][1]=a37[5] + v37[3]*v37[4] - v37[1]*v37[6];
A[37][2][2]=a37[3] + v37[1]*v37[2];
A[37][2][3]=-Power(v37[1],2) - Power(v37[3],2);
A[37][2][4]=-a37[1] + v37[2]*v37[3];
A[37][2][5]=0;
A[37][2][6]=0;
A[37][2][7]=0;
A[37][2][8]=0;
A[37][2][9]=0;
A[37][2][10]=0;
A[37][2][11]=0;
A[37][2][12]=0;
A[37][2][13]=0;
A[37][2][14]=0;

A[37][3][1]=a37[6] - v37[2]*v37[4] + v37[1]*v37[5];
A[37][3][2]=-a37[2] + v37[1]*v37[3];
A[37][3][3]=a37[1] + v37[2]*v37[3];
A[37][3][4]=-Power(v37[1],2) - Power(v37[2],2);
A[37][3][5]=0;
A[37][3][6]=0;
A[37][3][7]=0;
A[37][3][8]=0;
A[37][3][9]=0;
A[37][3][10]=0;
A[37][3][11]=0;
A[37][3][12]=0;
A[37][3][13]=0;
A[37][3][14]=0;

A[37][4][1]=0;
A[37][4][2]=0;
A[37][4][3]=a37[6] - v37[2]*v37[4] + v37[1]*v37[5];
A[37][4][4]=-a37[5] - v37[3]*v37[4] + v37[1]*v37[6];
A[37][4][5]=a37[1];
A[37][4][6]=a37[2] - v37[1]*v37[3];
A[37][4][7]=a37[3] + v37[1]*v37[2];
A[37][4][8]=-(v37[2]*v37[3]);
A[37][4][9]=Power(v37[2],2) - Power(v37[3],2);
A[37][4][10]=v37[2]*v37[3];
A[37][4][11]=0;
A[37][4][12]=0;
A[37][4][13]=0;
A[37][4][14]=0;

A[37][5][1]=0;
A[37][5][2]=-a37[6] + v37[2]*v37[4] - v37[1]*v37[5];
A[37][5][3]=0;
A[37][5][4]=a37[4] - v37[3]*v37[5] + v37[2]*v37[6];
A[37][5][5]=v37[1]*v37[3];
A[37][5][6]=a37[1] + v37[2]*v37[3];
A[37][5][7]=-Power(v37[1],2) + Power(v37[3],2);
A[37][5][8]=a37[2];
A[37][5][9]=a37[3] - v37[1]*v37[2];
A[37][5][10]=-(v37[1]*v37[3]);
A[37][5][11]=0;
A[37][5][12]=0;
A[37][5][13]=0;
A[37][5][14]=0;

A[37][6][1]=0;
A[37][6][2]=a37[5] + v37[3]*v37[4] - v37[1]*v37[6];
A[37][6][3]=-a37[4] + v37[3]*v37[5] - v37[2]*v37[6];
A[37][6][4]=0;
A[37][6][5]=-(v37[1]*v37[2]);
A[37][6][6]=Power(v37[1],2) - Power(v37[2],2);
A[37][6][7]=a37[1] - v37[2]*v37[3];
A[37][6][8]=v37[1]*v37[2];
A[37][6][9]=a37[2] + v37[1]*v37[3];
A[37][6][10]=a37[3];
A[37][6][11]=0;
A[37][6][12]=0;
A[37][6][13]=0;
A[37][6][14]=0;


A[38][1][1]=a38[4] - v38[3]*v38[5] + v38[2]*v38[6];
A[38][1][2]=-Power(v38[2],2) - Power(v38[3],2);
A[38][1][3]=-a38[3] + v38[1]*v38[2];
A[38][1][4]=a38[2] + v38[1]*v38[3];
A[38][1][5]=0;
A[38][1][6]=0;
A[38][1][7]=0;
A[38][1][8]=0;
A[38][1][9]=0;
A[38][1][10]=0;
A[38][1][11]=0;
A[38][1][12]=0;
A[38][1][13]=0;
A[38][1][14]=0;

A[38][2][1]=a38[5] + v38[3]*v38[4] - v38[1]*v38[6];
A[38][2][2]=a38[3] + v38[1]*v38[2];
A[38][2][3]=-Power(v38[1],2) - Power(v38[3],2);
A[38][2][4]=-a38[1] + v38[2]*v38[3];
A[38][2][5]=0;
A[38][2][6]=0;
A[38][2][7]=0;
A[38][2][8]=0;
A[38][2][9]=0;
A[38][2][10]=0;
A[38][2][11]=0;
A[38][2][12]=0;
A[38][2][13]=0;
A[38][2][14]=0;

A[38][3][1]=a38[6] - v38[2]*v38[4] + v38[1]*v38[5];
A[38][3][2]=-a38[2] + v38[1]*v38[3];
A[38][3][3]=a38[1] + v38[2]*v38[3];
A[38][3][4]=-Power(v38[1],2) - Power(v38[2],2);
A[38][3][5]=0;
A[38][3][6]=0;
A[38][3][7]=0;
A[38][3][8]=0;
A[38][3][9]=0;
A[38][3][10]=0;
A[38][3][11]=0;
A[38][3][12]=0;
A[38][3][13]=0;
A[38][3][14]=0;

A[38][4][1]=0;
A[38][4][2]=0;
A[38][4][3]=a38[6] - v38[2]*v38[4] + v38[1]*v38[5];
A[38][4][4]=-a38[5] - v38[3]*v38[4] + v38[1]*v38[6];
A[38][4][5]=a38[1];
A[38][4][6]=a38[2] - v38[1]*v38[3];
A[38][4][7]=a38[3] + v38[1]*v38[2];
A[38][4][8]=-(v38[2]*v38[3]);
A[38][4][9]=Power(v38[2],2) - Power(v38[3],2);
A[38][4][10]=v38[2]*v38[3];
A[38][4][11]=0;
A[38][4][12]=0;
A[38][4][13]=0;
A[38][4][14]=0;

A[38][5][1]=0;
A[38][5][2]=-a38[6] + v38[2]*v38[4] - v38[1]*v38[5];
A[38][5][3]=0;
A[38][5][4]=a38[4] - v38[3]*v38[5] + v38[2]*v38[6];
A[38][5][5]=v38[1]*v38[3];
A[38][5][6]=a38[1] + v38[2]*v38[3];
A[38][5][7]=-Power(v38[1],2) + Power(v38[3],2);
A[38][5][8]=a38[2];
A[38][5][9]=a38[3] - v38[1]*v38[2];
A[38][5][10]=-(v38[1]*v38[3]);
A[38][5][11]=0;
A[38][5][12]=0;
A[38][5][13]=0;
A[38][5][14]=0;

A[38][6][1]=0;
A[38][6][2]=a38[5] + v38[3]*v38[4] - v38[1]*v38[6];
A[38][6][3]=-a38[4] + v38[3]*v38[5] - v38[2]*v38[6];
A[38][6][4]=0;
A[38][6][5]=-(v38[1]*v38[2]);
A[38][6][6]=Power(v38[1],2) - Power(v38[2],2);
A[38][6][7]=a38[1] - v38[2]*v38[3];
A[38][6][8]=v38[1]*v38[2];
A[38][6][9]=a38[2] + v38[1]*v38[3];
A[38][6][10]=a38[3];
A[38][6][11]=0;
A[38][6][12]=0;
A[38][6][13]=0;
A[38][6][14]=0;


A[39][1][1]=a39[4] - v39[3]*v39[5] + v39[2]*v39[6];
A[39][1][2]=-Power(v39[2],2) - Power(v39[3],2);
A[39][1][3]=-a39[3] + v39[1]*v39[2];
A[39][1][4]=a39[2] + v39[1]*v39[3];
A[39][1][5]=0;
A[39][1][6]=0;
A[39][1][7]=0;
A[39][1][8]=0;
A[39][1][9]=0;
A[39][1][10]=0;
A[39][1][11]=0;
A[39][1][12]=0;
A[39][1][13]=0;
A[39][1][14]=0;

A[39][2][1]=a39[5] + v39[3]*v39[4] - v39[1]*v39[6];
A[39][2][2]=a39[3] + v39[1]*v39[2];
A[39][2][3]=-Power(v39[1],2) - Power(v39[3],2);
A[39][2][4]=-a39[1] + v39[2]*v39[3];
A[39][2][5]=0;
A[39][2][6]=0;
A[39][2][7]=0;
A[39][2][8]=0;
A[39][2][9]=0;
A[39][2][10]=0;
A[39][2][11]=0;
A[39][2][12]=0;
A[39][2][13]=0;
A[39][2][14]=0;

A[39][3][1]=a39[6] - v39[2]*v39[4] + v39[1]*v39[5];
A[39][3][2]=-a39[2] + v39[1]*v39[3];
A[39][3][3]=a39[1] + v39[2]*v39[3];
A[39][3][4]=-Power(v39[1],2) - Power(v39[2],2);
A[39][3][5]=0;
A[39][3][6]=0;
A[39][3][7]=0;
A[39][3][8]=0;
A[39][3][9]=0;
A[39][3][10]=0;
A[39][3][11]=0;
A[39][3][12]=0;
A[39][3][13]=0;
A[39][3][14]=0;

A[39][4][1]=0;
A[39][4][2]=0;
A[39][4][3]=a39[6] - v39[2]*v39[4] + v39[1]*v39[5];
A[39][4][4]=-a39[5] - v39[3]*v39[4] + v39[1]*v39[6];
A[39][4][5]=a39[1];
A[39][4][6]=a39[2] - v39[1]*v39[3];
A[39][4][7]=a39[3] + v39[1]*v39[2];
A[39][4][8]=-(v39[2]*v39[3]);
A[39][4][9]=Power(v39[2],2) - Power(v39[3],2);
A[39][4][10]=v39[2]*v39[3];
A[39][4][11]=0;
A[39][4][12]=0;
A[39][4][13]=0;
A[39][4][14]=0;

A[39][5][1]=0;
A[39][5][2]=-a39[6] + v39[2]*v39[4] - v39[1]*v39[5];
A[39][5][3]=0;
A[39][5][4]=a39[4] - v39[3]*v39[5] + v39[2]*v39[6];
A[39][5][5]=v39[1]*v39[3];
A[39][5][6]=a39[1] + v39[2]*v39[3];
A[39][5][7]=-Power(v39[1],2) + Power(v39[3],2);
A[39][5][8]=a39[2];
A[39][5][9]=a39[3] - v39[1]*v39[2];
A[39][5][10]=-(v39[1]*v39[3]);
A[39][5][11]=0;
A[39][5][12]=0;
A[39][5][13]=0;
A[39][5][14]=0;

A[39][6][1]=0;
A[39][6][2]=a39[5] + v39[3]*v39[4] - v39[1]*v39[6];
A[39][6][3]=-a39[4] + v39[3]*v39[5] - v39[2]*v39[6];
A[39][6][4]=0;
A[39][6][5]=-(v39[1]*v39[2]);
A[39][6][6]=Power(v39[1],2) - Power(v39[2],2);
A[39][6][7]=a39[1] - v39[2]*v39[3];
A[39][6][8]=v39[1]*v39[2];
A[39][6][9]=a39[2] + v39[1]*v39[3];
A[39][6][10]=a39[3];
A[39][6][11]=0;
A[39][6][12]=0;
A[39][6][13]=0;
A[39][6][14]=0;


A[40][1][1]=a40[4] - v40[3]*v40[5] + v40[2]*v40[6];
A[40][1][2]=-Power(v40[2],2) - Power(v40[3],2);
A[40][1][3]=-a40[3] + v40[1]*v40[2];
A[40][1][4]=a40[2] + v40[1]*v40[3];
A[40][1][5]=0;
A[40][1][6]=0;
A[40][1][7]=0;
A[40][1][8]=0;
A[40][1][9]=0;
A[40][1][10]=0;
A[40][1][11]=0;
A[40][1][12]=0;
A[40][1][13]=0;
A[40][1][14]=0;

A[40][2][1]=a40[5] + v40[3]*v40[4] - v40[1]*v40[6];
A[40][2][2]=a40[3] + v40[1]*v40[2];
A[40][2][3]=-Power(v40[1],2) - Power(v40[3],2);
A[40][2][4]=-a40[1] + v40[2]*v40[3];
A[40][2][5]=0;
A[40][2][6]=0;
A[40][2][7]=0;
A[40][2][8]=0;
A[40][2][9]=0;
A[40][2][10]=0;
A[40][2][11]=0;
A[40][2][12]=0;
A[40][2][13]=0;
A[40][2][14]=0;

A[40][3][1]=a40[6] - v40[2]*v40[4] + v40[1]*v40[5];
A[40][3][2]=-a40[2] + v40[1]*v40[3];
A[40][3][3]=a40[1] + v40[2]*v40[3];
A[40][3][4]=-Power(v40[1],2) - Power(v40[2],2);
A[40][3][5]=0;
A[40][3][6]=0;
A[40][3][7]=0;
A[40][3][8]=0;
A[40][3][9]=0;
A[40][3][10]=0;
A[40][3][11]=0;
A[40][3][12]=0;
A[40][3][13]=0;
A[40][3][14]=0;

A[40][4][1]=0;
A[40][4][2]=0;
A[40][4][3]=a40[6] - v40[2]*v40[4] + v40[1]*v40[5];
A[40][4][4]=-a40[5] - v40[3]*v40[4] + v40[1]*v40[6];
A[40][4][5]=a40[1];
A[40][4][6]=a40[2] - v40[1]*v40[3];
A[40][4][7]=a40[3] + v40[1]*v40[2];
A[40][4][8]=-(v40[2]*v40[3]);
A[40][4][9]=Power(v40[2],2) - Power(v40[3],2);
A[40][4][10]=v40[2]*v40[3];
A[40][4][11]=0;
A[40][4][12]=0;
A[40][4][13]=0;
A[40][4][14]=0;

A[40][5][1]=0;
A[40][5][2]=-a40[6] + v40[2]*v40[4] - v40[1]*v40[5];
A[40][5][3]=0;
A[40][5][4]=a40[4] - v40[3]*v40[5] + v40[2]*v40[6];
A[40][5][5]=v40[1]*v40[3];
A[40][5][6]=a40[1] + v40[2]*v40[3];
A[40][5][7]=-Power(v40[1],2) + Power(v40[3],2);
A[40][5][8]=a40[2];
A[40][5][9]=a40[3] - v40[1]*v40[2];
A[40][5][10]=-(v40[1]*v40[3]);
A[40][5][11]=0;
A[40][5][12]=0;
A[40][5][13]=0;
A[40][5][14]=0;

A[40][6][1]=0;
A[40][6][2]=a40[5] + v40[3]*v40[4] - v40[1]*v40[6];
A[40][6][3]=-a40[4] + v40[3]*v40[5] - v40[2]*v40[6];
A[40][6][4]=0;
A[40][6][5]=-(v40[1]*v40[2]);
A[40][6][6]=Power(v40[1],2) - Power(v40[2],2);
A[40][6][7]=a40[1] - v40[2]*v40[3];
A[40][6][8]=v40[1]*v40[2];
A[40][6][9]=a40[2] + v40[1]*v40[3];
A[40][6][10]=a40[3];
A[40][6][11]=0;
A[40][6][12]=0;
A[40][6][13]=0;
A[40][6][14]=0;


A[41][1][1]=a41[4] - v41[3]*v41[5] + v41[2]*v41[6];
A[41][1][2]=-Power(v41[2],2) - Power(v41[3],2);
A[41][1][3]=-a41[3] + v41[1]*v41[2];
A[41][1][4]=a41[2] + v41[1]*v41[3];
A[41][1][5]=0;
A[41][1][6]=0;
A[41][1][7]=0;
A[41][1][8]=0;
A[41][1][9]=0;
A[41][1][10]=0;
A[41][1][11]=0;
A[41][1][12]=0;
A[41][1][13]=0;
A[41][1][14]=0;

A[41][2][1]=a41[5] + v41[3]*v41[4] - v41[1]*v41[6];
A[41][2][2]=a41[3] + v41[1]*v41[2];
A[41][2][3]=-Power(v41[1],2) - Power(v41[3],2);
A[41][2][4]=-a41[1] + v41[2]*v41[3];
A[41][2][5]=0;
A[41][2][6]=0;
A[41][2][7]=0;
A[41][2][8]=0;
A[41][2][9]=0;
A[41][2][10]=0;
A[41][2][11]=0;
A[41][2][12]=0;
A[41][2][13]=0;
A[41][2][14]=0;

A[41][3][1]=a41[6] - v41[2]*v41[4] + v41[1]*v41[5];
A[41][3][2]=-a41[2] + v41[1]*v41[3];
A[41][3][3]=a41[1] + v41[2]*v41[3];
A[41][3][4]=-Power(v41[1],2) - Power(v41[2],2);
A[41][3][5]=0;
A[41][3][6]=0;
A[41][3][7]=0;
A[41][3][8]=0;
A[41][3][9]=0;
A[41][3][10]=0;
A[41][3][11]=0;
A[41][3][12]=0;
A[41][3][13]=0;
A[41][3][14]=0;

A[41][4][1]=0;
A[41][4][2]=0;
A[41][4][3]=a41[6] - v41[2]*v41[4] + v41[1]*v41[5];
A[41][4][4]=-a41[5] - v41[3]*v41[4] + v41[1]*v41[6];
A[41][4][5]=a41[1];
A[41][4][6]=a41[2] - v41[1]*v41[3];
A[41][4][7]=a41[3] + v41[1]*v41[2];
A[41][4][8]=-(v41[2]*v41[3]);
A[41][4][9]=Power(v41[2],2) - Power(v41[3],2);
A[41][4][10]=v41[2]*v41[3];
A[41][4][11]=0;
A[41][4][12]=0;
A[41][4][13]=0;
A[41][4][14]=0;

A[41][5][1]=0;
A[41][5][2]=-a41[6] + v41[2]*v41[4] - v41[1]*v41[5];
A[41][5][3]=0;
A[41][5][4]=a41[4] - v41[3]*v41[5] + v41[2]*v41[6];
A[41][5][5]=v41[1]*v41[3];
A[41][5][6]=a41[1] + v41[2]*v41[3];
A[41][5][7]=-Power(v41[1],2) + Power(v41[3],2);
A[41][5][8]=a41[2];
A[41][5][9]=a41[3] - v41[1]*v41[2];
A[41][5][10]=-(v41[1]*v41[3]);
A[41][5][11]=0;
A[41][5][12]=0;
A[41][5][13]=0;
A[41][5][14]=0;

A[41][6][1]=0;
A[41][6][2]=a41[5] + v41[3]*v41[4] - v41[1]*v41[6];
A[41][6][3]=-a41[4] + v41[3]*v41[5] - v41[2]*v41[6];
A[41][6][4]=0;
A[41][6][5]=-(v41[1]*v41[2]);
A[41][6][6]=Power(v41[1],2) - Power(v41[2],2);
A[41][6][7]=a41[1] - v41[2]*v41[3];
A[41][6][8]=v41[1]*v41[2];
A[41][6][9]=a41[2] + v41[1]*v41[3];
A[41][6][10]=a41[3];
A[41][6][11]=0;
A[41][6][12]=0;
A[41][6][13]=0;
A[41][6][14]=0;


A[42][1][1]=a42[4] - v42[3]*v42[5] + v42[2]*v42[6];
A[42][1][2]=-Power(v42[2],2) - Power(v42[3],2);
A[42][1][3]=-a42[3] + v42[1]*v42[2];
A[42][1][4]=a42[2] + v42[1]*v42[3];
A[42][1][5]=0;
A[42][1][6]=0;
A[42][1][7]=0;
A[42][1][8]=0;
A[42][1][9]=0;
A[42][1][10]=0;
A[42][1][11]=0;
A[42][1][12]=0;
A[42][1][13]=0;
A[42][1][14]=0;

A[42][2][1]=a42[5] + v42[3]*v42[4] - v42[1]*v42[6];
A[42][2][2]=a42[3] + v42[1]*v42[2];
A[42][2][3]=-Power(v42[1],2) - Power(v42[3],2);
A[42][2][4]=-a42[1] + v42[2]*v42[3];
A[42][2][5]=0;
A[42][2][6]=0;
A[42][2][7]=0;
A[42][2][8]=0;
A[42][2][9]=0;
A[42][2][10]=0;
A[42][2][11]=0;
A[42][2][12]=0;
A[42][2][13]=0;
A[42][2][14]=0;

A[42][3][1]=a42[6] - v42[2]*v42[4] + v42[1]*v42[5];
A[42][3][2]=-a42[2] + v42[1]*v42[3];
A[42][3][3]=a42[1] + v42[2]*v42[3];
A[42][3][4]=-Power(v42[1],2) - Power(v42[2],2);
A[42][3][5]=0;
A[42][3][6]=0;
A[42][3][7]=0;
A[42][3][8]=0;
A[42][3][9]=0;
A[42][3][10]=0;
A[42][3][11]=0;
A[42][3][12]=0;
A[42][3][13]=0;
A[42][3][14]=0;

A[42][4][1]=0;
A[42][4][2]=0;
A[42][4][3]=a42[6] - v42[2]*v42[4] + v42[1]*v42[5];
A[42][4][4]=-a42[5] - v42[3]*v42[4] + v42[1]*v42[6];
A[42][4][5]=a42[1];
A[42][4][6]=a42[2] - v42[1]*v42[3];
A[42][4][7]=a42[3] + v42[1]*v42[2];
A[42][4][8]=-(v42[2]*v42[3]);
A[42][4][9]=Power(v42[2],2) - Power(v42[3],2);
A[42][4][10]=v42[2]*v42[3];
A[42][4][11]=0;
A[42][4][12]=0;
A[42][4][13]=0;
A[42][4][14]=0;

A[42][5][1]=0;
A[42][5][2]=-a42[6] + v42[2]*v42[4] - v42[1]*v42[5];
A[42][5][3]=0;
A[42][5][4]=a42[4] - v42[3]*v42[5] + v42[2]*v42[6];
A[42][5][5]=v42[1]*v42[3];
A[42][5][6]=a42[1] + v42[2]*v42[3];
A[42][5][7]=-Power(v42[1],2) + Power(v42[3],2);
A[42][5][8]=a42[2];
A[42][5][9]=a42[3] - v42[1]*v42[2];
A[42][5][10]=-(v42[1]*v42[3]);
A[42][5][11]=0;
A[42][5][12]=0;
A[42][5][13]=0;
A[42][5][14]=0;

A[42][6][1]=0;
A[42][6][2]=a42[5] + v42[3]*v42[4] - v42[1]*v42[6];
A[42][6][3]=-a42[4] + v42[3]*v42[5] - v42[2]*v42[6];
A[42][6][4]=0;
A[42][6][5]=-(v42[1]*v42[2]);
A[42][6][6]=Power(v42[1],2) - Power(v42[2],2);
A[42][6][7]=a42[1] - v42[2]*v42[3];
A[42][6][8]=v42[1]*v42[2];
A[42][6][9]=a42[2] + v42[1]*v42[3];
A[42][6][10]=a42[3];
A[42][6][11]=0;
A[42][6][12]=0;
A[42][6][13]=0;
A[42][6][14]=0;


A[43][1][1]=a43[4] - v43[3]*v43[5] + v43[2]*v43[6];
A[43][1][2]=-Power(v43[2],2) - Power(v43[3],2);
A[43][1][3]=-a43[3] + v43[1]*v43[2];
A[43][1][4]=a43[2] + v43[1]*v43[3];
A[43][1][5]=0;
A[43][1][6]=0;
A[43][1][7]=0;
A[43][1][8]=0;
A[43][1][9]=0;
A[43][1][10]=0;
A[43][1][11]=0;
A[43][1][12]=0;
A[43][1][13]=0;
A[43][1][14]=0;

A[43][2][1]=a43[5] + v43[3]*v43[4] - v43[1]*v43[6];
A[43][2][2]=a43[3] + v43[1]*v43[2];
A[43][2][3]=-Power(v43[1],2) - Power(v43[3],2);
A[43][2][4]=-a43[1] + v43[2]*v43[3];
A[43][2][5]=0;
A[43][2][6]=0;
A[43][2][7]=0;
A[43][2][8]=0;
A[43][2][9]=0;
A[43][2][10]=0;
A[43][2][11]=0;
A[43][2][12]=0;
A[43][2][13]=0;
A[43][2][14]=0;

A[43][3][1]=a43[6] - v43[2]*v43[4] + v43[1]*v43[5];
A[43][3][2]=-a43[2] + v43[1]*v43[3];
A[43][3][3]=a43[1] + v43[2]*v43[3];
A[43][3][4]=-Power(v43[1],2) - Power(v43[2],2);
A[43][3][5]=0;
A[43][3][6]=0;
A[43][3][7]=0;
A[43][3][8]=0;
A[43][3][9]=0;
A[43][3][10]=0;
A[43][3][11]=0;
A[43][3][12]=0;
A[43][3][13]=0;
A[43][3][14]=0;

A[43][4][1]=0;
A[43][4][2]=0;
A[43][4][3]=a43[6] - v43[2]*v43[4] + v43[1]*v43[5];
A[43][4][4]=-a43[5] - v43[3]*v43[4] + v43[1]*v43[6];
A[43][4][5]=a43[1];
A[43][4][6]=a43[2] - v43[1]*v43[3];
A[43][4][7]=a43[3] + v43[1]*v43[2];
A[43][4][8]=-(v43[2]*v43[3]);
A[43][4][9]=Power(v43[2],2) - Power(v43[3],2);
A[43][4][10]=v43[2]*v43[3];
A[43][4][11]=0;
A[43][4][12]=0;
A[43][4][13]=0;
A[43][4][14]=0;

A[43][5][1]=0;
A[43][5][2]=-a43[6] + v43[2]*v43[4] - v43[1]*v43[5];
A[43][5][3]=0;
A[43][5][4]=a43[4] - v43[3]*v43[5] + v43[2]*v43[6];
A[43][5][5]=v43[1]*v43[3];
A[43][5][6]=a43[1] + v43[2]*v43[3];
A[43][5][7]=-Power(v43[1],2) + Power(v43[3],2);
A[43][5][8]=a43[2];
A[43][5][9]=a43[3] - v43[1]*v43[2];
A[43][5][10]=-(v43[1]*v43[3]);
A[43][5][11]=0;
A[43][5][12]=0;
A[43][5][13]=0;
A[43][5][14]=0;

A[43][6][1]=0;
A[43][6][2]=a43[5] + v43[3]*v43[4] - v43[1]*v43[6];
A[43][6][3]=-a43[4] + v43[3]*v43[5] - v43[2]*v43[6];
A[43][6][4]=0;
A[43][6][5]=-(v43[1]*v43[2]);
A[43][6][6]=Power(v43[1],2) - Power(v43[2],2);
A[43][6][7]=a43[1] - v43[2]*v43[3];
A[43][6][8]=v43[1]*v43[2];
A[43][6][9]=a43[2] + v43[1]*v43[3];
A[43][6][10]=a43[3];
A[43][6][11]=0;
A[43][6][12]=0;
A[43][6][13]=0;
A[43][6][14]=0;


A[44][1][1]=a44[4] - v44[3]*v44[5] + v44[2]*v44[6];
A[44][1][2]=-Power(v44[2],2) - Power(v44[3],2);
A[44][1][3]=-a44[3] + v44[1]*v44[2];
A[44][1][4]=a44[2] + v44[1]*v44[3];
A[44][1][5]=0;
A[44][1][6]=0;
A[44][1][7]=0;
A[44][1][8]=0;
A[44][1][9]=0;
A[44][1][10]=0;
A[44][1][11]=0;
A[44][1][12]=0;
A[44][1][13]=0;
A[44][1][14]=0;

A[44][2][1]=a44[5] + v44[3]*v44[4] - v44[1]*v44[6];
A[44][2][2]=a44[3] + v44[1]*v44[2];
A[44][2][3]=-Power(v44[1],2) - Power(v44[3],2);
A[44][2][4]=-a44[1] + v44[2]*v44[3];
A[44][2][5]=0;
A[44][2][6]=0;
A[44][2][7]=0;
A[44][2][8]=0;
A[44][2][9]=0;
A[44][2][10]=0;
A[44][2][11]=0;
A[44][2][12]=0;
A[44][2][13]=0;
A[44][2][14]=0;

A[44][3][1]=a44[6] - v44[2]*v44[4] + v44[1]*v44[5];
A[44][3][2]=-a44[2] + v44[1]*v44[3];
A[44][3][3]=a44[1] + v44[2]*v44[3];
A[44][3][4]=-Power(v44[1],2) - Power(v44[2],2);
A[44][3][5]=0;
A[44][3][6]=0;
A[44][3][7]=0;
A[44][3][8]=0;
A[44][3][9]=0;
A[44][3][10]=0;
A[44][3][11]=0;
A[44][3][12]=0;
A[44][3][13]=0;
A[44][3][14]=0;

A[44][4][1]=0;
A[44][4][2]=0;
A[44][4][3]=a44[6] - v44[2]*v44[4] + v44[1]*v44[5];
A[44][4][4]=-a44[5] - v44[3]*v44[4] + v44[1]*v44[6];
A[44][4][5]=a44[1];
A[44][4][6]=a44[2] - v44[1]*v44[3];
A[44][4][7]=a44[3] + v44[1]*v44[2];
A[44][4][8]=-(v44[2]*v44[3]);
A[44][4][9]=Power(v44[2],2) - Power(v44[3],2);
A[44][4][10]=v44[2]*v44[3];
A[44][4][11]=0;
A[44][4][12]=0;
A[44][4][13]=0;
A[44][4][14]=0;

A[44][5][1]=0;
A[44][5][2]=-a44[6] + v44[2]*v44[4] - v44[1]*v44[5];
A[44][5][3]=0;
A[44][5][4]=a44[4] - v44[3]*v44[5] + v44[2]*v44[6];
A[44][5][5]=v44[1]*v44[3];
A[44][5][6]=a44[1] + v44[2]*v44[3];
A[44][5][7]=-Power(v44[1],2) + Power(v44[3],2);
A[44][5][8]=a44[2];
A[44][5][9]=a44[3] - v44[1]*v44[2];
A[44][5][10]=-(v44[1]*v44[3]);
A[44][5][11]=0;
A[44][5][12]=0;
A[44][5][13]=0;
A[44][5][14]=0;

A[44][6][1]=0;
A[44][6][2]=a44[5] + v44[3]*v44[4] - v44[1]*v44[6];
A[44][6][3]=-a44[4] + v44[3]*v44[5] - v44[2]*v44[6];
A[44][6][4]=0;
A[44][6][5]=-(v44[1]*v44[2]);
A[44][6][6]=Power(v44[1],2) - Power(v44[2],2);
A[44][6][7]=a44[1] - v44[2]*v44[3];
A[44][6][8]=v44[1]*v44[2];
A[44][6][9]=a44[2] + v44[1]*v44[3];
A[44][6][10]=a44[3];
A[44][6][11]=0;
A[44][6][12]=0;
A[44][6][13]=0;
A[44][6][14]=0;


A[45][1][1]=a45[4] - v45[3]*v45[5] + v45[2]*v45[6];
A[45][1][2]=-Power(v45[2],2) - Power(v45[3],2);
A[45][1][3]=-a45[3] + v45[1]*v45[2];
A[45][1][4]=a45[2] + v45[1]*v45[3];
A[45][1][5]=0;
A[45][1][6]=0;
A[45][1][7]=0;
A[45][1][8]=0;
A[45][1][9]=0;
A[45][1][10]=0;
A[45][1][11]=0;
A[45][1][12]=0;
A[45][1][13]=0;
A[45][1][14]=0;

A[45][2][1]=a45[5] + v45[3]*v45[4] - v45[1]*v45[6];
A[45][2][2]=a45[3] + v45[1]*v45[2];
A[45][2][3]=-Power(v45[1],2) - Power(v45[3],2);
A[45][2][4]=-a45[1] + v45[2]*v45[3];
A[45][2][5]=0;
A[45][2][6]=0;
A[45][2][7]=0;
A[45][2][8]=0;
A[45][2][9]=0;
A[45][2][10]=0;
A[45][2][11]=0;
A[45][2][12]=0;
A[45][2][13]=0;
A[45][2][14]=0;

A[45][3][1]=a45[6] - v45[2]*v45[4] + v45[1]*v45[5];
A[45][3][2]=-a45[2] + v45[1]*v45[3];
A[45][3][3]=a45[1] + v45[2]*v45[3];
A[45][3][4]=-Power(v45[1],2) - Power(v45[2],2);
A[45][3][5]=0;
A[45][3][6]=0;
A[45][3][7]=0;
A[45][3][8]=0;
A[45][3][9]=0;
A[45][3][10]=0;
A[45][3][11]=0;
A[45][3][12]=0;
A[45][3][13]=0;
A[45][3][14]=0;

A[45][4][1]=0;
A[45][4][2]=0;
A[45][4][3]=a45[6] - v45[2]*v45[4] + v45[1]*v45[5];
A[45][4][4]=-a45[5] - v45[3]*v45[4] + v45[1]*v45[6];
A[45][4][5]=a45[1];
A[45][4][6]=a45[2] - v45[1]*v45[3];
A[45][4][7]=a45[3] + v45[1]*v45[2];
A[45][4][8]=-(v45[2]*v45[3]);
A[45][4][9]=Power(v45[2],2) - Power(v45[3],2);
A[45][4][10]=v45[2]*v45[3];
A[45][4][11]=0;
A[45][4][12]=0;
A[45][4][13]=0;
A[45][4][14]=0;

A[45][5][1]=0;
A[45][5][2]=-a45[6] + v45[2]*v45[4] - v45[1]*v45[5];
A[45][5][3]=0;
A[45][5][4]=a45[4] - v45[3]*v45[5] + v45[2]*v45[6];
A[45][5][5]=v45[1]*v45[3];
A[45][5][6]=a45[1] + v45[2]*v45[3];
A[45][5][7]=-Power(v45[1],2) + Power(v45[3],2);
A[45][5][8]=a45[2];
A[45][5][9]=a45[3] - v45[1]*v45[2];
A[45][5][10]=-(v45[1]*v45[3]);
A[45][5][11]=0;
A[45][5][12]=0;
A[45][5][13]=0;
A[45][5][14]=0;

A[45][6][1]=0;
A[45][6][2]=a45[5] + v45[3]*v45[4] - v45[1]*v45[6];
A[45][6][3]=-a45[4] + v45[3]*v45[5] - v45[2]*v45[6];
A[45][6][4]=0;
A[45][6][5]=-(v45[1]*v45[2]);
A[45][6][6]=Power(v45[1],2) - Power(v45[2],2);
A[45][6][7]=a45[1] - v45[2]*v45[3];
A[45][6][8]=v45[1]*v45[2];
A[45][6][9]=a45[2] + v45[1]*v45[3];
A[45][6][10]=a45[3];
A[45][6][11]=0;
A[45][6][12]=0;
A[45][6][13]=0;
A[45][6][14]=0;


A[46][1][1]=a46[4] - v46[3]*v46[5] + v46[2]*v46[6];
A[46][1][2]=-Power(v46[2],2) - Power(v46[3],2);
A[46][1][3]=-a46[3] + v46[1]*v46[2];
A[46][1][4]=a46[2] + v46[1]*v46[3];
A[46][1][5]=0;
A[46][1][6]=0;
A[46][1][7]=0;
A[46][1][8]=0;
A[46][1][9]=0;
A[46][1][10]=0;
A[46][1][11]=0;
A[46][1][12]=0;
A[46][1][13]=0;
A[46][1][14]=0;

A[46][2][1]=a46[5] + v46[3]*v46[4] - v46[1]*v46[6];
A[46][2][2]=a46[3] + v46[1]*v46[2];
A[46][2][3]=-Power(v46[1],2) - Power(v46[3],2);
A[46][2][4]=-a46[1] + v46[2]*v46[3];
A[46][2][5]=0;
A[46][2][6]=0;
A[46][2][7]=0;
A[46][2][8]=0;
A[46][2][9]=0;
A[46][2][10]=0;
A[46][2][11]=0;
A[46][2][12]=0;
A[46][2][13]=0;
A[46][2][14]=0;

A[46][3][1]=a46[6] - v46[2]*v46[4] + v46[1]*v46[5];
A[46][3][2]=-a46[2] + v46[1]*v46[3];
A[46][3][3]=a46[1] + v46[2]*v46[3];
A[46][3][4]=-Power(v46[1],2) - Power(v46[2],2);
A[46][3][5]=0;
A[46][3][6]=0;
A[46][3][7]=0;
A[46][3][8]=0;
A[46][3][9]=0;
A[46][3][10]=0;
A[46][3][11]=0;
A[46][3][12]=0;
A[46][3][13]=0;
A[46][3][14]=0;

A[46][4][1]=0;
A[46][4][2]=0;
A[46][4][3]=a46[6] - v46[2]*v46[4] + v46[1]*v46[5];
A[46][4][4]=-a46[5] - v46[3]*v46[4] + v46[1]*v46[6];
A[46][4][5]=a46[1];
A[46][4][6]=a46[2] - v46[1]*v46[3];
A[46][4][7]=a46[3] + v46[1]*v46[2];
A[46][4][8]=-(v46[2]*v46[3]);
A[46][4][9]=Power(v46[2],2) - Power(v46[3],2);
A[46][4][10]=v46[2]*v46[3];
A[46][4][11]=0;
A[46][4][12]=0;
A[46][4][13]=0;
A[46][4][14]=0;

A[46][5][1]=0;
A[46][5][2]=-a46[6] + v46[2]*v46[4] - v46[1]*v46[5];
A[46][5][3]=0;
A[46][5][4]=a46[4] - v46[3]*v46[5] + v46[2]*v46[6];
A[46][5][5]=v46[1]*v46[3];
A[46][5][6]=a46[1] + v46[2]*v46[3];
A[46][5][7]=-Power(v46[1],2) + Power(v46[3],2);
A[46][5][8]=a46[2];
A[46][5][9]=a46[3] - v46[1]*v46[2];
A[46][5][10]=-(v46[1]*v46[3]);
A[46][5][11]=0;
A[46][5][12]=0;
A[46][5][13]=0;
A[46][5][14]=0;

A[46][6][1]=0;
A[46][6][2]=a46[5] + v46[3]*v46[4] - v46[1]*v46[6];
A[46][6][3]=-a46[4] + v46[3]*v46[5] - v46[2]*v46[6];
A[46][6][4]=0;
A[46][6][5]=-(v46[1]*v46[2]);
A[46][6][6]=Power(v46[1],2) - Power(v46[2],2);
A[46][6][7]=a46[1] - v46[2]*v46[3];
A[46][6][8]=v46[1]*v46[2];
A[46][6][9]=a46[2] + v46[1]*v46[3];
A[46][6][10]=a46[3];
A[46][6][11]=0;
A[46][6][12]=0;
A[46][6][13]=0;
A[46][6][14]=0;


A[47][1][1]=a47[4] - v47[3]*v47[5] + v47[2]*v47[6];
A[47][1][2]=-Power(v47[2],2) - Power(v47[3],2);
A[47][1][3]=-a47[3] + v47[1]*v47[2];
A[47][1][4]=a47[2] + v47[1]*v47[3];
A[47][1][5]=0;
A[47][1][6]=0;
A[47][1][7]=0;
A[47][1][8]=0;
A[47][1][9]=0;
A[47][1][10]=0;
A[47][1][11]=0;
A[47][1][12]=0;
A[47][1][13]=0;
A[47][1][14]=0;

A[47][2][1]=a47[5] + v47[3]*v47[4] - v47[1]*v47[6];
A[47][2][2]=a47[3] + v47[1]*v47[2];
A[47][2][3]=-Power(v47[1],2) - Power(v47[3],2);
A[47][2][4]=-a47[1] + v47[2]*v47[3];
A[47][2][5]=0;
A[47][2][6]=0;
A[47][2][7]=0;
A[47][2][8]=0;
A[47][2][9]=0;
A[47][2][10]=0;
A[47][2][11]=0;
A[47][2][12]=0;
A[47][2][13]=0;
A[47][2][14]=0;

A[47][3][1]=a47[6] - v47[2]*v47[4] + v47[1]*v47[5];
A[47][3][2]=-a47[2] + v47[1]*v47[3];
A[47][3][3]=a47[1] + v47[2]*v47[3];
A[47][3][4]=-Power(v47[1],2) - Power(v47[2],2);
A[47][3][5]=0;
A[47][3][6]=0;
A[47][3][7]=0;
A[47][3][8]=0;
A[47][3][9]=0;
A[47][3][10]=0;
A[47][3][11]=0;
A[47][3][12]=0;
A[47][3][13]=0;
A[47][3][14]=0;

A[47][4][1]=0;
A[47][4][2]=0;
A[47][4][3]=a47[6] - v47[2]*v47[4] + v47[1]*v47[5];
A[47][4][4]=-a47[5] - v47[3]*v47[4] + v47[1]*v47[6];
A[47][4][5]=a47[1];
A[47][4][6]=a47[2] - v47[1]*v47[3];
A[47][4][7]=a47[3] + v47[1]*v47[2];
A[47][4][8]=-(v47[2]*v47[3]);
A[47][4][9]=Power(v47[2],2) - Power(v47[3],2);
A[47][4][10]=v47[2]*v47[3];
A[47][4][11]=0;
A[47][4][12]=0;
A[47][4][13]=0;
A[47][4][14]=0;

A[47][5][1]=0;
A[47][5][2]=-a47[6] + v47[2]*v47[4] - v47[1]*v47[5];
A[47][5][3]=0;
A[47][5][4]=a47[4] - v47[3]*v47[5] + v47[2]*v47[6];
A[47][5][5]=v47[1]*v47[3];
A[47][5][6]=a47[1] + v47[2]*v47[3];
A[47][5][7]=-Power(v47[1],2) + Power(v47[3],2);
A[47][5][8]=a47[2];
A[47][5][9]=a47[3] - v47[1]*v47[2];
A[47][5][10]=-(v47[1]*v47[3]);
A[47][5][11]=0;
A[47][5][12]=0;
A[47][5][13]=0;
A[47][5][14]=0;

A[47][6][1]=0;
A[47][6][2]=a47[5] + v47[3]*v47[4] - v47[1]*v47[6];
A[47][6][3]=-a47[4] + v47[3]*v47[5] - v47[2]*v47[6];
A[47][6][4]=0;
A[47][6][5]=-(v47[1]*v47[2]);
A[47][6][6]=Power(v47[1],2) - Power(v47[2],2);
A[47][6][7]=a47[1] - v47[2]*v47[3];
A[47][6][8]=v47[1]*v47[2];
A[47][6][9]=a47[2] + v47[1]*v47[3];
A[47][6][10]=a47[3];
A[47][6][11]=0;
A[47][6][12]=0;
A[47][6][13]=0;
A[47][6][14]=0;



/* predecessor vectors */
pred[1]=0;
pred[2]=1;
pred[3]=2;
pred[4]=3;
pred[5]=1;
pred[6]=5;
pred[7]=6;
pred[8]=7;
pred[9]=8;
pred[10]=9;
pred[11]=10;
pred[12]=9;
pred[13]=12;
pred[14]=1;
pred[15]=14;
pred[16]=15;
pred[17]=16;
pred[18]=17;
pred[19]=18;
pred[20]=19;
pred[21]=18;
pred[22]=21;
pred[23]=0;
pred[24]=23;
pred[25]=24;
pred[26]=25;
pred[27]=26;
pred[28]=27;
pred[29]=28;
pred[30]=29;
pred[31]=29;
pred[32]=29;
pred[33]=29;
pred[34]=29;
pred[35]=29;
pred[36]=23;
pred[37]=36;
pred[38]=37;
pred[39]=38;
pred[40]=39;
pred[41]=40;
pred[42]=41;
pred[43]=41;
pred[44]=41;
pred[45]=41;
pred[46]=41;
pred[47]=41;

/* output mapping, i.e, which joint is where */
map[0]=0;
map[2102]=1;
map[22]=2;
map[23]=3;
map[24]=4;
map[7]=5;
map[8]=6;
map[9]=7;
map[10]=8;
map[25]=9;
map[2501]=10;
map[2502]=11;
map[26]=12;
map[2601]=13;
map[17]=14;
map[18]=15;
map[19]=16;
map[20]=17;
map[27]=18;
map[2701]=19;
map[2702]=20;
map[28]=21;
map[2801]=22;
map[21]=23;
map[1]=24;
map[2]=25;
map[3]=26;
map[4]=27;
map[5]=28;
map[6]=29;
map[115]=30;
map[116]=31;
map[117]=32;
map[118]=33;
map[1000]=34;
map[1001]=35;
map[11]=36;
map[12]=37;
map[13]=38;
map[14]=39;
map[15]=40;
map[16]=41;
map[108]=42;
map[109]=43;
map[110]=44;
map[111]=45;
map[2000]=46;
map[2001]=47;

{                                                           
  int ii;                                                   
  int jj;                                                   
  int nn;                                                   
  int mm;                                                   
  int level;                                                
  int xnj=47;                           
  int fbflag=1;                        
                                                            
  for ( ii=xnj; ii>=0; --ii) {                              
    level = ii;                                             
    while (1) {                                             
                                                            
      if (level==ii)                                        
        for (nn=1;nn<=6;++nn)                               
          for (mm=1;mm<=N_RBD_PARMS;++mm)                   
            U[nn][mm]=A[ii][nn][mm];                        
      else                                                  
        for (nn=1;nn<=6;++nn)                               
          for (mm=1;mm<=N_RBD_PARMS;++mm)                   
            U[nn][mm]=Unew[nn][mm];                         
                                                            
      if (level == 0) {                                     
        for (nn=1;nn<=6;++nn)                               
          for (mm=1;mm<=N_RBD_PARMS;++mm) {                 
            Unew[nn][mm]=0;                                 
            for (jj=1;jj<=6;++jj)                           
              Unew[nn][mm]+=Xinv[level][nn][jj]*U[jj][mm];  
          }                                                 
        for (nn=1;nn<=6;++nn)                               
          for (mm=1;mm<=N_RBD_PARMS;++mm)                   
            K[xnj+nn][ii*N_RBD_PARMS+mm]=Unew[nn][mm]*fbflag;
        break;                                              
      } else {                                              
        for (mm=1;mm<=N_RBD_PARMS;++mm) {                   
          K[level][ii*N_RBD_PARMS+mm]=0;                    
          for (nn=1;nn<=6;++nn)                             
            K[level][ii*N_RBD_PARMS+mm]+=st[level][nn]*U[nn][mm];
        }                                                   
      }                                                     
                                                            
      for (nn=1;nn<=6;++nn)                                 
        for (mm=1;mm<=N_RBD_PARMS;++mm) {                   
          Unew[nn][mm]=0;                                   
          for (jj=1;jj<=6;++jj)                             
            Unew[nn][mm]+=Xinv[level][nn][jj]*U[jj][mm];    
        }                                                   
      level=pred[level];                                    
    }                                                       
  }                                                         
}                                                           
                                                            
/* The outputs that are associate with each row of K */
Y[2]=state[22].u;
Y[3]=state[23].u;
Y[4]=state[24].u;
Y[5]=state[7].u;
Y[6]=state[8].u;
Y[7]=state[9].u;
Y[8]=state[10].u;
Y[9]=state[25].u;
Y[12]=state[26].u;
Y[14]=state[17].u;
Y[15]=state[18].u;
Y[16]=state[19].u;
Y[17]=state[20].u;
Y[18]=state[27].u;
Y[21]=state[28].u;
Y[23]=state[21].u;
Y[24]=state[1].u;
Y[25]=state[2].u;
Y[26]=state[3].u;
Y[27]=state[4].u;
Y[28]=state[5].u;
Y[29]=state[6].u;
Y[36]=state[11].u;
Y[37]=state[12].u;
Y[38]=state[13].u;
Y[39]=state[14].u;
Y[40]=state[15].u;
Y[41]=state[16].u;

