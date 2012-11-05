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

/* JointID = 1 */

glPushMatrix();
glPushMatrix();
if (0==0 && 0==0)
glRotated((GLdouble)90.*(-1. + BA1/Sqrt(Power(BA1,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.,(GLdouble)0.,(GLdouble)0.5*(BA1 + Sqrt(Power(BA1,2))));
myDrawGLElement((int)1,(double)Sqrt(Power(BA1,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)0,(GLdouble)0,(GLdouble)BA1);
glRotated((GLdouble)57.29577951308232*state[1].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 2 */

glPushMatrix();
glPushMatrix();
if (0==0 && 0==0)
glRotated((GLdouble)90.*(-1. + A1A2/Sqrt(Power(A1A2,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.,(GLdouble)0.,(GLdouble)0.5*(A1A2 + Sqrt(Power(A1A2,2))));
myDrawGLElement((int)2,(double)Sqrt(Power(A1A2,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)0,(GLdouble)0,(GLdouble)A1A2);
glRotated((GLdouble)90.,(GLdouble)0.,(GLdouble)1.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[2].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 3 */

glPushMatrix();
glPushMatrix();
if (-A2E1==0 && 0==0)
glRotated((GLdouble)-90.,(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*A2E1,(GLdouble)0.,(GLdouble)0.5*Sqrt(Power(A2E1,2)));
myDrawGLElement((int)3,(double)Sqrt(Power(A2E1,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)-A2E1,(GLdouble)0,(GLdouble)0);
glRotated((GLdouble)-90.,(GLdouble)0.,(GLdouble)1.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[3].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 4 */

glPushMatrix();
glPushMatrix();
if (0==0 && 0==0)
glRotated((GLdouble)90.*(-1. + E1A3/Sqrt(Power(E1A3,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.,(GLdouble)0.,(GLdouble)0.5*(E1A3 + Sqrt(Power(E1A3,2))));
myDrawGLElement((int)4,(double)Sqrt(Power(E1A3,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)0,(GLdouble)0,(GLdouble)E1A3);
glRotated((GLdouble)-90.,(GLdouble)0.,(GLdouble)1.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[4].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 5 */

glPushMatrix();
glPushMatrix();
if (A3A4==0 && 0==0)
glRotated((GLdouble)-90.,(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.5*A3A4,(GLdouble)0.,(GLdouble)0.5*Sqrt(Power(A3A4,2)));
myDrawGLElement((int)5,(double)Sqrt(Power(A3A4,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)A3A4,(GLdouble)0,(GLdouble)0);
glRotated((GLdouble)90.,(GLdouble)0.,(GLdouble)1.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[5].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 6 */

glPushMatrix();
glPushMatrix();
if (0==0 && 0==0)
glRotated((GLdouble)90.*(-1. + A4A5/Sqrt(Power(A4A5,2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.,(GLdouble)0.,(GLdouble)0.5*(A4A5 + Sqrt(Power(A4A5,2))));
myDrawGLElement((int)6,(double)Sqrt(Power(A4A5,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)0,(GLdouble)0,(GLdouble)A4A5);
glRotated((GLdouble)90.,(GLdouble)0.,(GLdouble)1.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[6].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 7 */

glPushMatrix();
glPushMatrix();
if (-A5A6==0 && 0==0)
glRotated((GLdouble)-90.,(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)-0.5*A5A6,(GLdouble)0.,(GLdouble)0.5*Sqrt(Power(A5A6,2)));
myDrawGLElement((int)7,(double)Sqrt(Power(A5A6,2)),(int)1);
glPopMatrix();
glTranslated((GLdouble)-A5A6,(GLdouble)0,(GLdouble)0);
glRotated((GLdouble)-90.,(GLdouble)0.,(GLdouble)1.,(GLdouble)0.);
glRotated((GLdouble)57.29577951308232*state[7].th,(GLdouble)0,(GLdouble)0,(GLdouble)1);

/* JointID = 108 */

glPushMatrix();
glPushMatrix();
if (eff[1].x[1]==0 && eff[1].x[2]==0)
glRotated((GLdouble)90.*(-1. + eff[1].x[3]/Sqrt(Power(eff[1].x[1],2) + Power(eff[1].x[2],2) + Power(eff[1].x[3],2))),(GLdouble)1.0,(GLdouble)0.0,(GLdouble)0.0);
else
glRotated((GLdouble)180.0,(GLdouble)0.5*eff[1].x[1],(GLdouble)0.5*eff[1].x[2],(GLdouble)0.5*(eff[1].x[3] + Sqrt(Power(eff[1].x[1],2) + Power(eff[1].x[2],2) + Power(eff[1].x[3],2))));
myDrawGLElement((int)108,(double)Sqrt(Power(eff[1].x[1],2) + Power(eff[1].x[2],2) + Power(eff[1].x[3],2)),(int)0);
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

