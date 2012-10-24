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



arm3D_ForDynArtfunc1();

arm3D_ForDynArtfunc2();

arm3D_ForDynArtfunc3();

arm3D_ForDynArtfunc4();

arm3D_ForDynArtfunc5();

arm3D_ForDynArtfunc6();

arm3D_ForDynArtfunc7();

arm3D_ForDynArtfunc8();

arm3D_ForDynArtfunc9();

arm3D_ForDynArtfunc10();

arm3D_ForDynArtfunc11();

arm3D_ForDynArtfunc12();

/* acceleration vectors and joint accelerations */
state[1].thdd=u[1]/d[1];

a1[1]=c1[1];
a1[2]=c1[2];
a1[3]=state[1].thdd;
a1[4]=c1[4];
a1[5]=c1[5];

state[2].thdd=(u[2] - a1[4]*(h2[1]*S21[1][1] + h2[2]*S21[2][1]) - a1[1]*(h2[4]*S21[1][1] + h2[5]*S21[2][1]) - a1[5]*(h2[1]*S21[1][2] + h2[2]*S21[2][2]) - a1[3]*(h2[6] + l1*h2[1]*S21[1][2] + l1*h2[2]*S21[2][2]) - a1[2]*(-(l1*h2[3]) + h2[4]*S21[1][2] + h2[5]*S21[2][2]))/d[2];

a2[1]=c2[1] + a1[1]*S21[1][1] + a1[2]*S21[1][2];
a2[2]=c2[2] + a1[1]*S21[2][1] + a1[2]*S21[2][2];
a2[3]=state[2].thdd + a1[3];
a2[4]=c2[4] + a1[4]*S21[1][1] + l1*a1[3]*S21[1][2] + a1[5]*S21[1][2];
a2[5]=c2[5] + a1[4]*S21[2][1] + l1*a1[3]*S21[2][2] + a1[5]*S21[2][2];
a2[6]=-(l1*a1[2]);

state[3].thdd=(-(a2[6]*h3[3]) + u[3] - a2[4]*(h3[1]*S32[1][1] + h3[2]*S32[2][1]) - a2[1]*(h3[4]*S32[1][1] + h3[5]*S32[2][1]) - a2[5]*(h3[1]*S32[1][2] + h3[2]*S32[2][2]) - a2[3]*(h3[6] + l2*h3[1]*S32[1][2] + l2*h3[2]*S32[2][2]) - a2[2]*(-(l2*h3[3]) + h3[4]*S32[1][2] + h3[5]*S32[2][2]))/d[3];

a3[1]=c3[1] + a2[1]*S32[1][1] + a2[2]*S32[1][2];
a3[2]=c3[2] + a2[1]*S32[2][1] + a2[2]*S32[2][2];
a3[3]=state[3].thdd + a2[3];
a3[4]=c3[4] + a2[4]*S32[1][1] + l2*a2[3]*S32[1][2] + a2[5]*S32[1][2];
a3[5]=c3[5] + a2[4]*S32[2][1] + l2*a2[3]*S32[2][2] + a2[5]*S32[2][2];
a3[6]=-(l2*a2[2]) + a2[6];

a4[1]=a3[1]*S43[1][1] + a3[2]*S43[1][2] + a3[3]*S43[1][3];
a4[2]=a3[1]*S43[2][1] + a3[2]*S43[2][2] + a3[3]*S43[2][3];
a4[3]=a3[1]*S43[3][1] + a3[2]*S43[3][2] + a3[3]*S43[3][3];
a4[4]=a3[4]*S43[1][1] + a3[5]*S43[1][2] + a3[3]*(-(eff[1].x[2]*S43[1][1]) + eff[1].x[1]*S43[1][2]) + a3[6]*S43[1][3] + a3[2]*(eff[1].x[3]*S43[1][1] - eff[1].x[1]*S43[1][3]) + a3[1]*(-(eff[1].x[3]*S43[1][2]) + eff[1].x[2]*S43[1][3]);
a4[5]=a3[4]*S43[2][1] + a3[5]*S43[2][2] + a3[3]*(-(eff[1].x[2]*S43[2][1]) + eff[1].x[1]*S43[2][2]) + a3[6]*S43[2][3] + a3[2]*(eff[1].x[3]*S43[2][1] - eff[1].x[1]*S43[2][3]) + a3[1]*(-(eff[1].x[3]*S43[2][2]) + eff[1].x[2]*S43[2][3]);
a4[6]=a3[4]*S43[3][1] + a3[5]*S43[3][2] + a3[3]*(-(eff[1].x[2]*S43[3][1]) + eff[1].x[1]*S43[3][2]) + a3[6]*S43[3][3] + a3[2]*(eff[1].x[3]*S43[3][1] - eff[1].x[1]*S43[3][3]) + a3[1]*(-(eff[1].x[3]*S43[3][2]) + eff[1].x[2]*S43[3][3]);

