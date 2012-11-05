/* this function generates simple OpenGL graphics code to draw each link */


glPushMatrix();
myDrawGLElement((int)999,(double)0.0,(int)1);
glPopMatrix();

/* JointID = 0 */

glPushMatrix();
glPushMatrix();
if (basec[0].x[1]==0 && basec[0].x[2]==0)
glRotated((GLdouble)90.*(-1. + basec[0].x[3]/Sqrt(Power(basec[0].x[1],2) + Power(basec[0].x[2],2) + Power(basec[0].x[3],2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.5*basec[0].x[1],(GLdouble)0.5*basec[0].x[2],(GLdouble)0.5*(basec[0].x[3] + Sqrt(Power(basec[0].x[1],2) + Power(basec[0].x[2],2) + Power(basec[0].x[3],2))));
myDrawGLElement((int)0,(double)Sqrt(Power(basec[0].x[1],2) + Power(basec[0].x[2],2) + Power(basec[0].x[3],2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)basec[0].x[1],(GLdouble)basec[0].x[2],(GLdouble)basec[0].x[3]);
glRotated((GLdouble)114.59155902616465*ArcCos(baseo[0].q[1]),(GLdouble)baseo[0].q[2],(GLdouble)baseo[0].q[3],(GLdouble)baseo[0].q[4]);

/* JointID = 15 */

glPushMatrix();
glPushMatrix();
if (0==0 && -PELVISOFFSET==0)
glRotated((GLdouble)-90.,(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.,(GLdouble)-0.5*PELVISOFFSET,(GLdouble)0.5*Sqrt(Power(PELVISOFFSET,2)));
myDrawGLElement((int)15,(double)Sqrt(Power(PELVISOFFSET,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)0,(GLdouble)-PELVISOFFSET,(GLdouble)0);
glRotated((GLdouble)180.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[15].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 16 */

glPushMatrix();
glPushMatrix();
if (0==0 && 0==0)
glRotated((GLdouble)90.*(-1. - PELVIS2THORAX/Sqrt(Power(PELVIS2THORAX,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.,(GLdouble)0.,(GLdouble)0.5*(-PELVIS2THORAX + Sqrt(Power(PELVIS2THORAX,2))));
myDrawGLElement((int)16,(double)Sqrt(Power(PELVIS2THORAX,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)0,(GLdouble)0,(GLdouble)-PELVIS2THORAX);
glRotated((GLdouble)90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[16].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 120 */

glPushMatrix();
glPushMatrix();
if (0==0 && -THORAX2HEAD==0)
glRotated((GLdouble)-90.,(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.,(GLdouble)-0.5*THORAX2HEAD,(GLdouble)0.5*Sqrt(Power(THORAX2HEAD,2)));
myDrawGLElement((int)120,(double)Sqrt(Power(THORAX2HEAD,2)),(int)0);
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();

/* JointID = 9 */

glPushMatrix();
glPushMatrix();
if (XHIP==0 && 0==0)
glRotated((GLdouble)-90.,(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.5*XHIP,(GLdouble)0.,(GLdouble)0.5*Sqrt(Power(XHIP,2)));
myDrawGLElement((int)9,(double)Sqrt(Power(XHIP,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)XHIP,(GLdouble)0,(GLdouble)0);
glRotated((GLdouble)-90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[9].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 8 */

glPushMatrix();
glPushMatrix();
myDrawGLElement((int)8,(double)0,(int)0);
glPopMatrix();
glRotated((GLdouble)90.,(GLdouble)0.,(GLdouble)1.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[8].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 10 */

glPushMatrix();
glPushMatrix();
if (YHIP==0 && 0==0)
glRotated((GLdouble)-90.,(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.5*YHIP,(GLdouble)0.,(GLdouble)0.5*Sqrt(Power(YHIP,2)));
myDrawGLElement((int)10,(double)Sqrt(Power(YHIP,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)YHIP,(GLdouble)0,(GLdouble)0);
glRotated((GLdouble)-90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)-15.5,(GLdouble)0.,(GLdouble)1.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[10].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 11 */

glPushMatrix();
glPushMatrix();
if (0.963630453208623*YKNEE==0 && 0==0)
glRotated((GLdouble)90.*(-1. + (UPPERLEG - 0.26723837607825685*YKNEE)/Sqrt(Power(UPPERLEG - 0.26723837607825685*YKNEE,2) + 0.9285836503510561*Power(YKNEE,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.4818152266043115*YKNEE,(GLdouble)0.,(GLdouble)0.5*(UPPERLEG - 0.26723837607825685*YKNEE + Sqrt(Power(UPPERLEG - 0.26723837607825685*YKNEE,2) + 0.9285836503510561*Power(YKNEE,2))));
myDrawGLElement((int)11,(double)Sqrt(Power(UPPERLEG - 0.26723837607825685*YKNEE,2) + 0.9285836503510561*Power(YKNEE,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)0.963630453208623*YKNEE,(GLdouble)0,(GLdouble)UPPERLEG - 0.26723837607825685*YKNEE);
glRotated((GLdouble)-90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)15.5,(GLdouble)0.,(GLdouble)0.,(GLdouble)1.);
glRotated((GLdouble)57.29577951308232*state[11].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 12 */

glPushMatrix();
glPushMatrix();
myDrawGLElement((int)12,(double)0,(int)0);
glPopMatrix();
glRotated((GLdouble)90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[12].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 13 */

glPushMatrix();
glPushMatrix();
if (0==0 && 0==0)
glRotated((GLdouble)90.*(-1. + LOWERLEG/Sqrt(Power(LOWERLEG,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.,(GLdouble)0.,(GLdouble)0.5*(LOWERLEG + Sqrt(Power(LOWERLEG,2))));
myDrawGLElement((int)13,(double)Sqrt(Power(LOWERLEG,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)0,(GLdouble)0,(GLdouble)LOWERLEG);
glRotated((GLdouble)90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[13].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 14 */

glPushMatrix();
glPushMatrix();
myDrawGLElement((int)14,(double)0,(int)0);
glPopMatrix();
glRotated((GLdouble)-90.,(GLdouble)0.,(GLdouble)1.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[14].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 115 */

glPushMatrix();
glPushMatrix();
if (XTOE==0 && ZTOE==0)
glRotated((GLdouble)90.*(-1. + YTOE/Sqrt(Power(XTOE,2) + Power(YTOE,2) + Power(ZTOE,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.5*XTOE,(GLdouble)0.5*ZTOE,(GLdouble)0.5*(YTOE + Sqrt(Power(XTOE,2) + Power(YTOE,2) + Power(ZTOE,2))));
myDrawGLElement((int)115,(double)Sqrt(Power(XTOE,2) + Power(YTOE,2) + Power(ZTOE,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 116 */

glPushMatrix();
glPushMatrix();
if (-XTOE==0 && ZTOE==0)
glRotated((GLdouble)90.*(-1. + YTOE/Sqrt(Power(XTOE,2) + Power(YTOE,2) + Power(ZTOE,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*XTOE,(GLdouble)0.5*ZTOE,(GLdouble)0.5*(YTOE + Sqrt(Power(XTOE,2) + Power(YTOE,2) + Power(ZTOE,2))));
myDrawGLElement((int)116,(double)Sqrt(Power(XTOE,2) + Power(YTOE,2) + Power(ZTOE,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 117 */

glPushMatrix();
glPushMatrix();
if (XHEEL==0 && ZHEEL==0)
glRotated((GLdouble)90.*(-1. - YHEEL/Sqrt(Power(XHEEL,2) + Power(YHEEL,2) + Power(ZHEEL,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.5*XHEEL,(GLdouble)0.5*ZHEEL,(GLdouble)0.5*(-YHEEL + Sqrt(Power(XHEEL,2) + Power(YHEEL,2) + Power(ZHEEL,2))));
myDrawGLElement((int)117,(double)Sqrt(Power(XHEEL,2) + Power(YHEEL,2) + Power(ZHEEL,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 118 */

glPushMatrix();
glPushMatrix();
if (-XHEEL==0 && ZHEEL==0)
glRotated((GLdouble)90.*(-1. - YHEEL/Sqrt(Power(XHEEL,2) + Power(YHEEL,2) + Power(ZHEEL,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*XHEEL,(GLdouble)0.5*ZHEEL,(GLdouble)0.5*(-YHEEL + Sqrt(Power(XHEEL,2) + Power(YHEEL,2) + Power(ZHEEL,2))));
myDrawGLElement((int)118,(double)Sqrt(Power(XHEEL,2) + Power(YHEEL,2) + Power(ZHEEL,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 119 */

glPushMatrix();
glPushMatrix();
if (eff[1].x[1]==0 && eff[1].x[2]==0)
glRotated((GLdouble)90.*(-1. + eff[1].x[3]/Sqrt(Power(eff[1].x[1],2) + Power(eff[1].x[2],2) + Power(eff[1].x[3],2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.5*eff[1].x[1],(GLdouble)0.5*eff[1].x[2],(GLdouble)0.5*(eff[1].x[3] + Sqrt(Power(eff[1].x[1],2) + Power(eff[1].x[2],2) + Power(eff[1].x[3],2))));
myDrawGLElement((int)119,(double)Sqrt(Power(eff[1].x[1],2) + Power(eff[1].x[2],2) + Power(eff[1].x[3],2)),(int)0);
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();

/* JointID = 2 */

glPushMatrix();
glPushMatrix();
if (-XHIP==0 && 0==0)
glRotated((GLdouble)-90.,(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*XHIP,(GLdouble)0.,(GLdouble)0.5*Sqrt(Power(XHIP,2)));
myDrawGLElement((int)2,(double)Sqrt(Power(XHIP,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)-XHIP,(GLdouble)0,(GLdouble)0);
glRotated((GLdouble)90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[2].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 1 */

glPushMatrix();
glPushMatrix();
myDrawGLElement((int)1,(double)0,(int)0);
glPopMatrix();
glRotated((GLdouble)90.,(GLdouble)0.,(GLdouble)1.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[1].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 3 */

glPushMatrix();
glPushMatrix();
if (-YHIP==0 && 0==0)
glRotated((GLdouble)-90.,(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*YHIP,(GLdouble)0.,(GLdouble)0.5*Sqrt(Power(YHIP,2)));
myDrawGLElement((int)3,(double)Sqrt(Power(YHIP,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)-YHIP,(GLdouble)0,(GLdouble)0);
glRotated((GLdouble)-90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)-15.5,(GLdouble)0.,(GLdouble)1.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[3].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 4 */

glPushMatrix();
glPushMatrix();
if (-0.963630453208623*YKNEE==0 && 0==0)
glRotated((GLdouble)90.*(-1. + (-UPPERLEG + 0.26723837607825685*YKNEE)/Sqrt(Power(-UPPERLEG + 0.26723837607825685*YKNEE,2) + 0.9285836503510561*Power(YKNEE,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.4818152266043115*YKNEE,(GLdouble)0.,(GLdouble)0.5*(-UPPERLEG + 0.26723837607825685*YKNEE + Sqrt(Power(-UPPERLEG + 0.26723837607825685*YKNEE,2) + 0.9285836503510561*Power(YKNEE,2))));
myDrawGLElement((int)4,(double)Sqrt(Power(-UPPERLEG + 0.26723837607825685*YKNEE,2) + 0.9285836503510561*Power(YKNEE,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)-0.963630453208623*YKNEE,(GLdouble)0,(GLdouble)-UPPERLEG + 0.26723837607825685*YKNEE);
glRotated((GLdouble)-90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)195.5,(GLdouble)0.,(GLdouble)0.,(GLdouble)1.);
glRotated((GLdouble)57.29577951308232*state[4].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 5 */

glPushMatrix();
glPushMatrix();
myDrawGLElement((int)5,(double)0,(int)0);
glPopMatrix();
glRotated((GLdouble)-90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[5].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 6 */

glPushMatrix();
glPushMatrix();
if (0==0 && 0==0)
glRotated((GLdouble)90.*(-1. - LOWERLEG/Sqrt(Power(LOWERLEG,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.,(GLdouble)0.,(GLdouble)0.5*(-LOWERLEG + Sqrt(Power(LOWERLEG,2))));
myDrawGLElement((int)6,(double)Sqrt(Power(LOWERLEG,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)0,(GLdouble)0,(GLdouble)-LOWERLEG);
glRotated((GLdouble)-90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[6].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 7 */

glPushMatrix();
glPushMatrix();
myDrawGLElement((int)7,(double)0,(int)0);
glPopMatrix();
glRotated((GLdouble)90.,(GLdouble)0.,(GLdouble)1.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[7].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 108 */

glPushMatrix();
glPushMatrix();
if (-XTOE==0 && ZTOE==0)
glRotated((GLdouble)90.*(-1. - YTOE/Sqrt(Power(XTOE,2) + Power(YTOE,2) + Power(ZTOE,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*XTOE,(GLdouble)0.5*ZTOE,(GLdouble)0.5*(-YTOE + Sqrt(Power(XTOE,2) + Power(YTOE,2) + Power(ZTOE,2))));
myDrawGLElement((int)108,(double)Sqrt(Power(XTOE,2) + Power(YTOE,2) + Power(ZTOE,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 109 */

glPushMatrix();
glPushMatrix();
if (XTOE==0 && ZTOE==0)
glRotated((GLdouble)90.*(-1. - YTOE/Sqrt(Power(XTOE,2) + Power(YTOE,2) + Power(ZTOE,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.5*XTOE,(GLdouble)0.5*ZTOE,(GLdouble)0.5*(-YTOE + Sqrt(Power(XTOE,2) + Power(YTOE,2) + Power(ZTOE,2))));
myDrawGLElement((int)109,(double)Sqrt(Power(XTOE,2) + Power(YTOE,2) + Power(ZTOE,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 110 */

glPushMatrix();
glPushMatrix();
if (-XHEEL==0 && ZHEEL==0)
glRotated((GLdouble)90.*(-1. + YHEEL/Sqrt(Power(XHEEL,2) + Power(YHEEL,2) + Power(ZHEEL,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*XHEEL,(GLdouble)0.5*ZHEEL,(GLdouble)0.5*(YHEEL + Sqrt(Power(XHEEL,2) + Power(YHEEL,2) + Power(ZHEEL,2))));
myDrawGLElement((int)110,(double)Sqrt(Power(XHEEL,2) + Power(YHEEL,2) + Power(ZHEEL,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 111 */

glPushMatrix();
glPushMatrix();
if (XHEEL==0 && ZHEEL==0)
glRotated((GLdouble)90.*(-1. + YHEEL/Sqrt(Power(XHEEL,2) + Power(YHEEL,2) + Power(ZHEEL,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.5*XHEEL,(GLdouble)0.5*ZHEEL,(GLdouble)0.5*(YHEEL + Sqrt(Power(XHEEL,2) + Power(YHEEL,2) + Power(ZHEEL,2))));
myDrawGLElement((int)111,(double)Sqrt(Power(XHEEL,2) + Power(YHEEL,2) + Power(ZHEEL,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 112 */

glPushMatrix();
glPushMatrix();
if (eff[2].x[1]==0 && eff[2].x[2]==0)
glRotated((GLdouble)90.*(-1. + eff[2].x[3]/Sqrt(Power(eff[2].x[1],2) + Power(eff[2].x[2],2) + Power(eff[2].x[3],2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.5*eff[2].x[1],(GLdouble)0.5*eff[2].x[2],(GLdouble)0.5*(eff[2].x[3] + Sqrt(Power(eff[2].x[1],2) + Power(eff[2].x[2],2) + Power(eff[2].x[3],2))));
myDrawGLElement((int)112,(double)Sqrt(Power(eff[2].x[1],2) + Power(eff[2].x[2],2) + Power(eff[2].x[3],2)),(int)0);
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();
/*glutSwapBuffers();*/

