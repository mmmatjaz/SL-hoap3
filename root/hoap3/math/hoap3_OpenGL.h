/* this function generates simple OpenGL graphics code to draw each link */

for (i=1;i<14;i++)
{
	//state[i].th=0.0;
}
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

/* JointID = 2102 */

glPushMatrix();
glPushMatrix();
if (0==0 && 0==0)
glRotated((GLdouble)90.*(-1. + BODYLINK1/Sqrt(Power(BODYLINK1,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.,(GLdouble)0.,(GLdouble)0.5*(BODYLINK1 + Sqrt(Power(BODYLINK1,2))));
myDrawGLElement((int)2102,(double)Sqrt(Power(BODYLINK1,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 13 */

glPushMatrix();
glPushMatrix();
if (BODYLINK2==0 && 0==0)
glRotated((GLdouble)-90.,(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.5*BODYLINK2,(GLdouble)0.,(GLdouble)0.5*Sqrt(Power(BODYLINK2,2)));
myDrawGLElement((int)13,(double)Sqrt(Power(BODYLINK2,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)BODYLINK2,(GLdouble)0,(GLdouble)0);
glRotated((GLdouble)90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[13].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 1 */

glPushMatrix();
glPushMatrix();
if (-WAISTLINK2==0 && -WAISTLINK1==0)
glRotated((GLdouble)90.*(-1. + LEGLINK1/Sqrt(Power(LEGLINK1,2) + Power(WAISTLINK1,2) + Power(WAISTLINK2,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*WAISTLINK2,(GLdouble)-0.5*WAISTLINK1,(GLdouble)0.5*(LEGLINK1 + Sqrt(Power(LEGLINK1,2) + Power(WAISTLINK1,2) + Power(WAISTLINK2,2))));
myDrawGLElement((int)1,(double)Sqrt(Power(LEGLINK1,2) + Power(WAISTLINK1,2) + Power(WAISTLINK2,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)-WAISTLINK2,(GLdouble)-WAISTLINK1,(GLdouble)LEGLINK1);
glRotated((GLdouble)-90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)90.,(GLdouble)0.,(GLdouble)0.,(GLdouble)1.);
glRotated((GLdouble)57.29577951308232*state[1].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 2 */

glPushMatrix();
glPushMatrix();
myDrawGLElement((int)2,(double)0,(int)0);
glPopMatrix();
glRotated((GLdouble)90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)90.,(GLdouble)0.,(GLdouble)0.,(GLdouble)1.);
glRotated((GLdouble)57.29577951308232*state[2].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 3 */

glPushMatrix();
glPushMatrix();
myDrawGLElement((int)3,(double)0,(int)0);
glPopMatrix();
glRotated((GLdouble)90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[3].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 4 */

glPushMatrix();
glPushMatrix();
if (-LEGLINK2==0 && 0==0)
glRotated((GLdouble)-90.,(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*LEGLINK2,(GLdouble)0.,(GLdouble)0.5*Sqrt(Power(LEGLINK2,2)));
myDrawGLElement((int)4,(double)Sqrt(Power(LEGLINK2,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)-LEGLINK2,(GLdouble)0,(GLdouble)0);
glRotated((GLdouble)57.29577951308232*state[4].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 5 */

glPushMatrix();
glPushMatrix();
if (-LEGLINK3==0 && 0==0)
glRotated((GLdouble)-90.,(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*LEGLINK3,(GLdouble)0.,(GLdouble)0.5*Sqrt(Power(LEGLINK3,2)));
myDrawGLElement((int)5,(double)Sqrt(Power(LEGLINK3,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)-LEGLINK3,(GLdouble)0,(GLdouble)0);
glRotated((GLdouble)57.29577951308232*state[5].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 6 */

glPushMatrix();
glPushMatrix();
myDrawGLElement((int)6,(double)0,(int)0);
glPopMatrix();
glRotated((GLdouble)-90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[6].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 115 */

glPushMatrix();
glPushMatrix();
if (-LEGLINK4==0 && -FOOTWIDLONG==0)
glRotated((GLdouble)90.*(-1. + FOOTLLENGLONG/Sqrt(Power(FOOTLLENGLONG,2) + Power(FOOTWIDLONG,2) + Power(LEGLINK4,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*LEGLINK4,(GLdouble)-0.5*FOOTWIDLONG,(GLdouble)0.5*(FOOTLLENGLONG + Sqrt(Power(FOOTLLENGLONG,2) + Power(FOOTWIDLONG,2) + Power(LEGLINK4,2))));
myDrawGLElement((int)115,(double)Sqrt(Power(FOOTLLENGLONG,2) + Power(FOOTWIDLONG,2) + Power(LEGLINK4,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 116 */

glPushMatrix();
glPushMatrix();
if (-LEGLINK4==0 && FOOTWIDSHORT==0)
glRotated((GLdouble)90.*(-1. + FOOTLLENGLONG/Sqrt(Power(FOOTLLENGLONG,2) + Power(FOOTWIDSHORT,2) + Power(LEGLINK4,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*LEGLINK4,(GLdouble)0.5*FOOTWIDSHORT,(GLdouble)0.5*(FOOTLLENGLONG + Sqrt(Power(FOOTLLENGLONG,2) + Power(FOOTWIDSHORT,2) + Power(LEGLINK4,2))));
myDrawGLElement((int)116,(double)Sqrt(Power(FOOTLLENGLONG,2) + Power(FOOTWIDSHORT,2) + Power(LEGLINK4,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 117 */

glPushMatrix();
glPushMatrix();
if (-LEGLINK4==0 && FOOTWIDSHORT==0)
glRotated((GLdouble)90.*(-1. - FOOTLENGSHORT/Sqrt(Power(FOOTLENGSHORT,2) + Power(FOOTWIDSHORT,2) + Power(LEGLINK4,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*LEGLINK4,(GLdouble)0.5*FOOTWIDSHORT,(GLdouble)0.5*(-FOOTLENGSHORT + Sqrt(Power(FOOTLENGSHORT,2) + Power(FOOTWIDSHORT,2) + Power(LEGLINK4,2))));
myDrawGLElement((int)117,(double)Sqrt(Power(FOOTLENGSHORT,2) + Power(FOOTWIDSHORT,2) + Power(LEGLINK4,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 118 */

glPushMatrix();
glPushMatrix();
if (-LEGLINK4==0 && -FOOTWIDLONG==0)
glRotated((GLdouble)90.*(-1. - FOOTLENGSHORT/Sqrt(Power(FOOTLENGSHORT,2) + Power(FOOTWIDLONG,2) + Power(LEGLINK4,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*LEGLINK4,(GLdouble)-0.5*FOOTWIDLONG,(GLdouble)0.5*(-FOOTLENGSHORT + Sqrt(Power(FOOTLENGSHORT,2) + Power(FOOTWIDLONG,2) + Power(LEGLINK4,2))));
myDrawGLElement((int)118,(double)Sqrt(Power(FOOTLENGSHORT,2) + Power(FOOTWIDLONG,2) + Power(LEGLINK4,2)),(int)0);
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

/* JointID = 7 */

glPushMatrix();
glPushMatrix();
if (-WAISTLINK2==0 && -WAISTLINK1==0)
glRotated((GLdouble)90.*(-1. - LEGLINK1/Sqrt(Power(LEGLINK1,2) + Power(WAISTLINK1,2) + Power(WAISTLINK2,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*WAISTLINK2,(GLdouble)-0.5*WAISTLINK1,(GLdouble)0.5*(-LEGLINK1 + Sqrt(Power(LEGLINK1,2) + Power(WAISTLINK1,2) + Power(WAISTLINK2,2))));
myDrawGLElement((int)7,(double)Sqrt(Power(LEGLINK1,2) + Power(WAISTLINK1,2) + Power(WAISTLINK2,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)-WAISTLINK2,(GLdouble)-WAISTLINK1,(GLdouble)-LEGLINK1);
glRotated((GLdouble)-90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)90.,(GLdouble)0.,(GLdouble)0.,(GLdouble)1.);
glRotated((GLdouble)57.29577951308232*state[7].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 8 */

glPushMatrix();
glPushMatrix();
myDrawGLElement((int)8,(double)0,(int)0);
glPopMatrix();
glRotated((GLdouble)90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)90.,(GLdouble)0.,(GLdouble)0.,(GLdouble)1.);
glRotated((GLdouble)57.29577951308232*state[8].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 9 */

glPushMatrix();
glPushMatrix();
myDrawGLElement((int)9,(double)0,(int)0);
glPopMatrix();
glRotated((GLdouble)90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[9].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 10 */

glPushMatrix();
glPushMatrix();
if (-LEGLINK2==0 && 0==0)
glRotated((GLdouble)-90.,(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*LEGLINK2,(GLdouble)0.,(GLdouble)0.5*Sqrt(Power(LEGLINK2,2)));
myDrawGLElement((int)10,(double)Sqrt(Power(LEGLINK2,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)-LEGLINK2,(GLdouble)0,(GLdouble)0);
glRotated((GLdouble)57.29577951308232*state[10].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 11 */

glPushMatrix();
glPushMatrix();
if (-LEGLINK3==0 && 0==0)
glRotated((GLdouble)-90.,(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*LEGLINK3,(GLdouble)0.,(GLdouble)0.5*(0. + Sqrt(0. + Power(LEGLINK3,2))));
myDrawGLElement((int)11,(double)Sqrt(0. + Power(LEGLINK3,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)-LEGLINK3,(GLdouble)0,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[11].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 12 */

glPushMatrix();
glPushMatrix();
myDrawGLElement((int)12,(double)0,(int)0);
glPopMatrix();
glRotated((GLdouble)-90.,(GLdouble)1.,(GLdouble)0.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[12].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 108 */

glPushMatrix();
glPushMatrix();
if (-LEGLINK4==0 && FOOTWIDLONG==0)
glRotated((GLdouble)90.*(-1. + FOOTLLENGLONG/Sqrt(Power(FOOTLLENGLONG,2) + Power(FOOTWIDLONG,2) + Power(LEGLINK4,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*LEGLINK4,(GLdouble)0.5*FOOTWIDLONG,(GLdouble)0.5*(FOOTLLENGLONG + Sqrt(Power(FOOTLLENGLONG,2) + Power(FOOTWIDLONG,2) + Power(LEGLINK4,2))));
myDrawGLElement((int)108,(double)Sqrt(Power(FOOTLLENGLONG,2) + Power(FOOTWIDLONG,2) + Power(LEGLINK4,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 109 */

glPushMatrix();
glPushMatrix();
if (-LEGLINK4==0 && -FOOTWIDSHORT==0)
glRotated((GLdouble)90.*(-1. + FOOTLLENGLONG/Sqrt(Power(FOOTLLENGLONG,2) + Power(FOOTWIDSHORT,2) + Power(LEGLINK4,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*LEGLINK4,(GLdouble)-0.5*FOOTWIDSHORT,(GLdouble)0.5*(FOOTLLENGLONG + Sqrt(Power(FOOTLLENGLONG,2) + Power(FOOTWIDSHORT,2) + Power(LEGLINK4,2))));
myDrawGLElement((int)109,(double)Sqrt(Power(FOOTLLENGLONG,2) + Power(FOOTWIDSHORT,2) + Power(LEGLINK4,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 110 */

glPushMatrix();
glPushMatrix();
if (-LEGLINK4==0 && -FOOTWIDSHORT==0)
glRotated((GLdouble)90.*(-1. - FOOTLENGSHORT/Sqrt(Power(FOOTLENGSHORT,2) + Power(FOOTWIDSHORT,2) + Power(LEGLINK4,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*LEGLINK4,(GLdouble)-0.5*FOOTWIDSHORT,(GLdouble)0.5*(-FOOTLENGSHORT + Sqrt(Power(FOOTLENGSHORT,2) + Power(FOOTWIDSHORT,2) + Power(LEGLINK4,2))));
myDrawGLElement((int)110,(double)Sqrt(Power(FOOTLENGSHORT,2) + Power(FOOTWIDSHORT,2) + Power(LEGLINK4,2)),(int)0);
glPopMatrix();
glPopMatrix();

/* JointID = 111 */

glPushMatrix();
glPushMatrix();
if (-LEGLINK4==0 && FOOTWIDLONG==0)
glRotated((GLdouble)90.*(-1. - FOOTLENGSHORT/Sqrt(Power(FOOTLENGSHORT,2) + Power(FOOTWIDLONG,2) + Power(LEGLINK4,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*LEGLINK4,(GLdouble)0.5*FOOTWIDLONG,(GLdouble)0.5*(-FOOTLENGSHORT + Sqrt(Power(FOOTLENGSHORT,2) + Power(FOOTWIDLONG,2) + Power(LEGLINK4,2))));
myDrawGLElement((int)111,(double)Sqrt(Power(FOOTLENGSHORT,2) + Power(FOOTWIDLONG,2) + Power(LEGLINK4,2)),(int)0);
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

