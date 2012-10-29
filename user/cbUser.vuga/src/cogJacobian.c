
#include "SL.h"
#include "SL_user.h"
#include "SL_objects.h"
#include "SL_common.h"

// To change the sign for the DOFs of the supporting leg
static double minus = -1.0;

static void crossProd(double a[], double b[], double result[])
{
//cross product of 3d vectors, indices start at 1.
	result[1] = a[2] * b[3] - a[3] * b[2];
	result[2] = a[3] * b[1] - a[1] * b[3];
	result[3] = a[1] * b[2] - a[2] * b[1];
}

void cogJacobian(void)
{
int i;
double x_com_i[N_CART+1], sumTmp[N_CART+1], vecTmp[N_CART+1];
double sumMassNum, sumMassDenum;

  //precalculate total mass:
  sumMassDenum = 0.0;
  for (i = BASE; i <= N_DOFS; ++i)
    sumMassDenum += links[i].m;

  // Right arm!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = R_WAA; i >= R_SFE; i--)
  {
    // moving mass
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcog[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcog[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcog[4][i] = joint_axis_pos[i][_X_];
    Jcog[5][i] = joint_axis_pos[i][_Y_];
    Jcog[6][i] = joint_axis_pos[i][_Z_];
  }

  // Left arm!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = L_WAA; i >= L_SFE; i--)
  {
    // moving mass
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcog[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcog[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcog[4][i] = joint_axis_pos[i][_X_];
    Jcog[5][i] = joint_axis_pos[i][_Y_];
    Jcog[6][i] = joint_axis_pos[i][_Z_];
  }

  // Torso!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  // arms mass:
  for (i = L_SFE; i <= R_WAA; ++i)
  {
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;
  }
  // head + eyes mass:
  for (i = B_HN; i <= L_ET; ++i)
  {
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;
  }
  for (i = B_TFE; i >= B_TR; i--)
  {
    // moving mass
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcog[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcog[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcog[4][i] = joint_axis_pos[i][_X_];
    Jcog[5][i] = joint_axis_pos[i][_Y_];
    Jcog[6][i] = joint_axis_pos[i][_Z_];
  }

  // Right leg!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = R_AAA; i >= R_HFE; i--)
  {
    // moving mass:
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcog[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcog[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcog[4][i] = joint_axis_pos[i][_X_];
    Jcog[5][i] = joint_axis_pos[i][_Y_];
    Jcog[6][i] = joint_axis_pos[i][_Z_];
  }

  // Left leg!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = L_AAA; i >= L_HFE; i--)
  {
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i]= sumMassNum/sumMassDenum * vecTmp[1];
    Jcog[2][i]= sumMassNum/sumMassDenum * vecTmp[2];
    Jcog[3][i]= sumMassNum/sumMassDenum * vecTmp[3];

    Jcog[4][i]= joint_axis_pos[i][_X_];
    Jcog[5][i]= joint_axis_pos[i][_Y_];
    Jcog[6][i]= joint_axis_pos[i][_Z_];
  }

  // Head!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  // eye mass
  for (i = R_EP; i <= L_ET; ++i)
  {
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;
  }
  for (i = B_HR; i >= B_HN; i--)
  {
    // moving mass:
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i] = sumMassNum/sumMassDenum * vecTmp[1];
    Jcog[2][i] = sumMassNum/sumMassDenum * vecTmp[2];
    Jcog[3][i] = sumMassNum/sumMassDenum * vecTmp[3];

    Jcog[4][i] = joint_axis_pos[i][_X_];
    Jcog[5][i] = joint_axis_pos[i][_Y_];
    Jcog[6][i] = joint_axis_pos[i][_Z_];
  }

  // Right eye
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = R_ET; i >= R_EP; i--)
  {
    // moving mass:
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcog[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcog[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcog[4][i] = joint_axis_pos[i][_X_];
    Jcog[5][i] = joint_axis_pos[i][_Y_];
    Jcog[6][i] = joint_axis_pos[i][_Z_];
  }

  // Left eye
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = L_ET; i >= L_EP; i--)
  {
    // moving mass:
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i] = sumMassNum/sumMassDenum * vecTmp[1];
    Jcog[2][i] = sumMassNum/sumMassDenum * vecTmp[2];
    Jcog[3][i] = sumMassNum/sumMassDenum * vecTmp[3];

    Jcog[4][i] = joint_axis_pos[i][_X_];
    Jcog[5][i] = joint_axis_pos[i][_Y_];
    Jcog[6][i] = joint_axis_pos[i][_Z_];
  }
}

void cogJacobianDes(void)
{
int i, j;
double x_com_i[N_CART+1], sumTmp[N_CART+1], vecTmp[N_CART+1];
double sumMassNum, sumMassDenum;

  // precalculate total mass:
  sumMassDenum = 0.0;
  for (i = BASE; i <= N_DOFS; ++i)
    sumMassDenum += links[i].m;

  // Right arm!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = R_WAA; i >= R_SFE; i--)
  {
    // moving mass
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];

    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    Jcogdes[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcogdes[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcogdes[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
    Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
  }

  // Left arm!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = L_WAA; i >= L_SFE; i--)
  {
    // moving mass
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    Jcogdes[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcogdes[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcogdes[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
    Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
  }

  // Torso!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  // arms mass:
  for (i = L_SFE; i <= R_WAA; ++i)
  {
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;
  }
  // head + eyes mass:
  for (i = B_HN; i <= L_ET; ++i)
  {
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;
  }
  for (i = B_TFE; i >= B_TR; i--)
  {
    // moving mass
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    Jcogdes[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcogdes[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcogdes[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
    Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
  }

  // Right leg!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = R_AAA; i >= R_HFE; i--)
  {
    // moving mass:
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    Jcogdes[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcogdes[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcogdes[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
    Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
  }
  
  // Left leg!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = L_AAA; i >= L_HFE; i--)
  {
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    Jcogdes[1][i]= sumMassNum/sumMassDenum * vecTmp[1];
    Jcogdes[2][i]= sumMassNum/sumMassDenum * vecTmp[2];
    Jcogdes[3][i]= sumMassNum/sumMassDenum * vecTmp[3];

    Jcogdes[4][i]= joint_axis_pos_des[i][_X_];
    Jcogdes[5][i]= joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i]= joint_axis_pos_des[i][_Z_];
  }

  // Head!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  // eye mass
  for (i = R_EP; i <= L_ET; ++i)
  {
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;
  }
  for (i = B_HR; i >= B_HN; i--)
  {
    // moving mass:
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;
    
    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];
    
    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);
    
    Jcogdes[1][i] = sumMassNum/sumMassDenum * vecTmp[1];
    Jcogdes[2][i] = sumMassNum/sumMassDenum * vecTmp[2];
    Jcogdes[3][i] = sumMassNum/sumMassDenum * vecTmp[3];
    
    Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
    Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
  }

  // Right eye
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = R_ET; i >= R_EP; i--)
  {
    // moving mass:
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    Jcogdes[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcogdes[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcogdes[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
    Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
  }

  // Left eye
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = L_ET; i >= L_EP; i--)
  {
    // moving mass:
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    Jcogdes[1][i] = sumMassNum/sumMassDenum * vecTmp[1];
    Jcogdes[2][i] = sumMassNum/sumMassDenum * vecTmp[2];
    Jcogdes[3][i] = sumMassNum/sumMassDenum * vecTmp[3];

    Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
    Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
  }
}

void cogJacobianRightFoot(int left_leg)
{
int i;
double x_com_i[N_CART+1], sumTmp[N_CART+1], vecTmp[N_CART+1];
double sumMassNum, sumMassDenum;

  // precalculate total mass:
  sumMassDenum = 0.0;
  if (left_leg)
  {
    for (i = BASE; i <= N_DOFS; ++i)
      sumMassDenum += links[i].m;
  }
  else
  {
    for (i = BASE; i < L_HFE; ++i)
      sumMassDenum += links[i].m;
    for (i = L_AAA+1; i <= N_DOFS; ++i)
      sumMassDenum += links[i].m;
  }

  // Right arm!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = R_WAA; i >= R_SFE; i--)
  {
    // moving mass
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcog[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcog[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcog[4][i] = joint_axis_pos[i][_X_];
    Jcog[5][i] = joint_axis_pos[i][_Y_];
    Jcog[6][i] = joint_axis_pos[i][_Z_];
  }

  // Left arm!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = L_WAA; i >= L_SFE; i--)
  {
    // moving mass
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcog[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcog[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcog[4][i] = joint_axis_pos[i][_X_];
    Jcog[5][i] = joint_axis_pos[i][_Y_];
    Jcog[6][i] = joint_axis_pos[i][_Z_];
  }

  // Torso!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  // arms mass:
  for (i = L_SFE; i <= R_WAA; ++i)
  {
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;
  }
  // head + eyes mass:
  for (i = B_HN; i <= L_ET; ++i)
  {
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;
  }
  for (i = B_TFE; i >= B_TR; i--)
  {
    // moving mass
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcog[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcog[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcog[4][i] = joint_axis_pos[i][_X_];
    Jcog[5][i] = joint_axis_pos[i][_Y_];
    Jcog[6][i] = joint_axis_pos[i][_Z_];
  }

  // Head!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  // eye mass
  for (i = R_EP; i <= L_ET; ++i)
  {
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;
  }
  for (i = B_HR; i >= B_HN; i--)
  {
    // moving mass:
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcog[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcog[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcog[4][i] = joint_axis_pos[i][_X_];
    Jcog[5][i] = joint_axis_pos[i][_Y_];
    Jcog[6][i] = joint_axis_pos[i][_Z_];
  }

  // Right eye
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = R_ET; i >= R_EP; i--)
  {
    // moving mass:
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcog[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcog[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcog[4][i] = joint_axis_pos[i][_X_];
    Jcog[5][i] = joint_axis_pos[i][_Y_];
    Jcog[6][i] = joint_axis_pos[i][_Z_];
  }

  // Left eye
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = L_ET; i >= L_EP; i--)
  {
    // moving mass:
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcog[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcog[3][i] = sumMassNum / sumMassDenum * vecTmp[3];
    
    Jcog[4][i] = joint_axis_pos[i][_X_];
    Jcog[5][i] = joint_axis_pos[i][_Y_];
    Jcog[6][i] = joint_axis_pos[i][_Z_];
  }

  // Right leg!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  // arms mass:
  for (i = L_SFE; i <= R_WAA; ++i)
  {
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;
  }
  // torso + head + eyes mass:
  for (i = B_TR; i <= L_ET; ++i)
  {
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;
  }
  if (left_leg)
  {
  // left leg mass:
    for (i = L_HFE; i <= L_AAA; ++i)
    {
      sumTmp[1] += joint_cog_mpos[i][_X_];
      sumTmp[2] += joint_cog_mpos[i][_Y_];
      sumTmp[3] += joint_cog_mpos[i][_Z_];
      sumMassNum += links[i].m;
    }
  }
  for (i = R_HFE; i <= R_AAA; i++)
  {
    // moving mass:
    if (i != R_HFE)
    {
      sumTmp[1] += joint_cog_mpos[i-1][_X_];
      sumTmp[2] += joint_cog_mpos[i-1][_Y_];
      sumTmp[3] += joint_cog_mpos[i-1][_Z_];
      sumMassNum += links[i-1].m;
    }
    else
    {
      // Base mass
      sumTmp[1] += joint_cog_mpos[BASE][_X_];
      sumTmp[2] += joint_cog_mpos[BASE][_Y_];
      sumTmp[3] += joint_cog_mpos[BASE][_Z_];
      sumMassNum += links[BASE].m;
    }

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    Jcog[1][i] = minus * sumMassNum / sumMassDenum * vecTmp[1];
    Jcog[2][i] = minus * sumMassNum / sumMassDenum * vecTmp[2];
    Jcog[3][i] = minus * sumMassNum / sumMassDenum * vecTmp[3];

    Jcog[4][i] = joint_axis_pos[i][_X_];
    Jcog[5][i] = joint_axis_pos[i][_Y_];
    Jcog[6][i] = joint_axis_pos[i][_Z_];
  }

  // Left leg!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = L_AAA; i >= L_HFE; i--)
  {
    sumTmp[1] += joint_cog_mpos[i][_X_];
    sumTmp[2] += joint_cog_mpos[i][_Y_];
    sumTmp[3] += joint_cog_mpos[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos[i][_Z_];

    crossProd(joint_axis_pos[i], x_com_i, vecTmp);

    if (left_leg)
    {
      Jcog[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
      Jcog[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
      Jcog[3][i] = sumMassNum / sumMassDenum * vecTmp[3];
    
      Jcog[4][i] = joint_axis_pos[i][_X_];
      Jcog[5][i] = joint_axis_pos[i][_Y_];
      Jcog[6][i] = joint_axis_pos[i][_Z_];
    }
    else
    {
      Jcog[1][i] = 0.0;
      Jcog[2][i] = 0.0;
      Jcog[3][i] = 0.0;
      
      Jcog[4][i] = 0.0;
      Jcog[5][i] = 0.0;
      Jcog[6][i] = 0.0; 
    }
  }
}

void cogJacobianRightFootDes(int left_leg)
{
int i;
double x_com_i[N_CART+1], sumTmp[N_CART+1], vecTmp[N_CART+1];
double sumMassNum, sumMassDenum;

  // precalculate total mass:
  sumMassDenum = 0.0;
  if (left_leg)
  {
    for (i = BASE; i <= N_DOFS; ++i)
      sumMassDenum += links[i].m;
  }
  else
  {
    for (i = BASE; i < L_HFE; ++i)
      sumMassDenum += links[i].m;
    for (i = L_AAA+1; i <= N_DOFS; ++i)
      sumMassDenum += links[i].m;
  }

  // Right arm!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = R_WAA; i >= R_SFE; i--)
  {
    // moving mass
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    Jcogdes[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcogdes[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcogdes[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
    Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
  }

  // Left arm!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = L_WAA; i >= L_SFE; i--)
  {
    // moving mass
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    Jcogdes[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcogdes[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcogdes[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
    Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
  }

  // Torso!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  // arms mass:
  for (i = L_SFE; i <= R_WAA; ++i)
  {
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;
  }
  // head + eyes mass:
  for (i = B_HN; i <= L_ET; ++i)
  {
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;
  }
  for (i = B_TFE; i >= B_TR; i--)
  {
    // moving mass
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    Jcogdes[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcogdes[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcogdes[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
    Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
  }

  // Head!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  // eye mass
  for (i = R_EP; i <= L_ET; ++i)
  {
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;
  }
  for (i = B_HR; i >= B_HN; i--)
  {
    // moving mass:
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    Jcogdes[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcogdes[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcogdes[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
    Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
  }

  // Right eye
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = R_ET; i >= R_EP; i--)
  {
    // moving mass:
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    Jcogdes[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcogdes[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcogdes[3][i] = sumMassNum / sumMassDenum * vecTmp[3];

    Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
    Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
  }

  // Left eye
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = L_ET; i >= L_EP; i--)
  {
    // moving mass:
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    Jcogdes[1][i] = sumMassNum / sumMassDenum * vecTmp[1];
    Jcogdes[2][i] = sumMassNum / sumMassDenum * vecTmp[2];
    Jcogdes[3][i] = sumMassNum / sumMassDenum * vecTmp[3];
    
    Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
    Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
  }

  // Right leg!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  // arms mass:
  for (i = L_SFE; i <= R_WAA; ++i)
  {
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;
  }
  // torso + head + eyes mass:
  for (i = B_TR; i <= L_ET; ++i)
  {
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;
  }
  if (left_leg)
  {
  // left leg mass:
    for (i = L_HFE; i <= L_AAA; ++i)
    {
      sumTmp[1] += joint_cog_mpos_des[i][_X_];
      sumTmp[2] += joint_cog_mpos_des[i][_Y_];
      sumTmp[3] += joint_cog_mpos_des[i][_Z_];
      sumMassNum += links[i].m;
    }
  }
  for (i = R_HFE; i <= R_AAA; i++)
  {
    // moving mass:
    if (i != R_HFE)
    {
      sumTmp[1] += joint_cog_mpos_des[i-1][_X_];
      sumTmp[2] += joint_cog_mpos_des[i-1][_Y_];
      sumTmp[3] += joint_cog_mpos_des[i-1][_Z_];
      sumMassNum += links[i-1].m;
    }
    else
    {
      // Base mass
      sumTmp[1] += joint_cog_mpos_des[BASE][_X_];
      sumTmp[2] += joint_cog_mpos_des[BASE][_Y_];
      sumTmp[3] += joint_cog_mpos_des[BASE][_Z_];
      sumMassNum += links[BASE].m;
    }

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    Jcogdes[1][i] = minus * sumMassNum / sumMassDenum * vecTmp[1];
    Jcogdes[2][i] = minus * sumMassNum / sumMassDenum * vecTmp[2];
    Jcogdes[3][i] = minus * sumMassNum / sumMassDenum * vecTmp[3];

    Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
    Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
    Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
  }

  // Left leg!
  sumTmp[1] = sumTmp[2] = sumTmp[3] = sumMassNum = 0;
  for (i = L_AAA; i >= L_HFE; i--)
  {
    sumTmp[1] += joint_cog_mpos_des[i][_X_];
    sumTmp[2] += joint_cog_mpos_des[i][_Y_];
    sumTmp[3] += joint_cog_mpos_des[i][_Z_];
    sumMassNum += links[i].m;

    x_com_i[1] = sumTmp[1] / sumMassNum - joint_origin_pos_des[i][_X_];
    x_com_i[2] = sumTmp[2] / sumMassNum - joint_origin_pos_des[i][_Y_];
    x_com_i[3] = sumTmp[3] / sumMassNum - joint_origin_pos_des[i][_Z_];

    crossProd(joint_axis_pos_des[i], x_com_i, vecTmp);

    if (left_leg)
    {
      Jcogdes[1][i] = sumMassNum/sumMassDenum * vecTmp[1];
      Jcogdes[2][i] = sumMassNum/sumMassDenum * vecTmp[2];
      Jcogdes[3][i] = sumMassNum/sumMassDenum * vecTmp[3];
    
      Jcogdes[4][i] = joint_axis_pos_des[i][_X_];
      Jcogdes[5][i] = joint_axis_pos_des[i][_Y_];
      Jcogdes[6][i] = joint_axis_pos_des[i][_Z_];
    }
    else
    {
      Jcogdes[1][i] = 0.0;
      Jcogdes[2][i] = 0.0;
      Jcogdes[3][i] = 0.0;
      
      Jcogdes[4][i] = 0.0;
      Jcogdes[5][i] = 0.0;
      Jcogdes[6][i] = 0.0; 
    }
  }
}

void cogJacobianStandard(double cog[])
{
  int i, j, k;
  double mass;
  Vector cog_pos, Jcolumn;
  
  cog_pos = my_vector(1, 3);
  Jcolumn = my_vector(1, 6);

  mass = 0;
  for (i = BASE; i <= N_DOFS; i++)
    mass += links[i].m;

  cog[1] = joint_cog_mpos[BASE][1]; cog[2] = joint_cog_mpos[BASE][2]; cog[3] = joint_cog_mpos[BASE][3];
  for (i = 1; i <= N_DOFS; i++)
  {
    cog[1] += joint_cog_mpos[i][1];
    cog[2] += joint_cog_mpos[i][2];
    cog[3] += joint_cog_mpos[i][3];
  }
  cog[1] /= mass; cog[2] /= mass; cog[3] /= mass;
  
  for (k = 1; k <= 3; k++)
    for (j = 1; j <= N_DOFS; j++)
      Jcog[k][j] = 0.0;
  
  for (i = L_SFE; i <= L_WAA; i++)
  {
    for (k = 1; k <= 3; k++)
      cog_pos[k] = joint_cog_mpos[i][k] / links[i].m;
    for (j = B_TR; j <= B_TFE; j++)
    {
      revoluteGJacColumn(cog_pos, joint_origin_pos[j], joint_axis_pos[j], Jcolumn);
      for (k = 1; k <= 3; k++)
        Jcog[k][j] += links[i].m * Jcolumn[k];
    }
    for (j = L_SFE; j <= i; j++)
    {
      revoluteGJacColumn(cog_pos, joint_origin_pos[j], joint_axis_pos[j], Jcolumn);
      for (k = 1; k <= 3; k++)
        Jcog[k][j] += links[i].m * Jcolumn[k];
    }
    for (k = 1; k <= 3; k++)
      Jcog[k+3][i] = joint_axis_pos[i][k];
  }
  
  for (i = L_HFE; i <= L_AAA; i++)
  {
    for (k = 1; k <= 3; k++)
      cog_pos[k] = joint_cog_mpos[i][k] / links[i].m;
    for (j = L_HFE; j <= i; j++)
    {
      revoluteGJacColumn(cog_pos, joint_origin_pos[j], joint_axis_pos[j], Jcolumn);
      for (k = 1; k <= 3; k++)
        Jcog[k][j] += links[i].m * Jcolumn[k];
    }
    for (k = 1; k <= 3; k++)
      Jcog[k+3][i] = joint_axis_pos[i][k];
  }
  
  for (i = R_SFE; i <= R_WAA; i++)
  {
    for (k = 1; k <= 3; k++)
      cog_pos[k] = joint_cog_mpos[i][k] / links[i].m;
    for (j = B_TR; j <= B_TFE; j++)
    {
      revoluteGJacColumn(cog_pos, joint_origin_pos[j], joint_axis_pos[j], Jcolumn);
      for (k = 1; k <= 3; k++)
        Jcog[k][j] += links[i].m * Jcolumn[k];
    }
    for (j = R_SFE; j <= i; j++)
    {
      revoluteGJacColumn(cog_pos, joint_origin_pos[j], joint_axis_pos[j], Jcolumn);
      for (k = 1; k <= 3; k++)
        Jcog[k][j] += links[i].m * Jcolumn[k];
    }
    for (k = 1; k <= 3; k++)
      Jcog[k+3][i] = joint_axis_pos[i][k];
  }
  
  for (i = R_HFE; i <= R_AAA; i++)
  {
    for (k = 1; k <= 3; k++)
      cog_pos[k] = joint_cog_mpos[i][k] / links[i].m;
    
    for (j = R_HFE; j <= i; j++)
    {
      revoluteGJacColumn(cog_pos, joint_origin_pos[j], joint_axis_pos[j], Jcolumn);
      for (k = 1; k <= 3; k++)
        Jcog[k][j] += links[i].m * Jcolumn[k];
    }
    for (k = 1; k <= 3; k++)
      Jcog[k+3][i] = joint_axis_pos[i][k];
  }
  
  for (i = B_TR; i <= B_TFE; i++)
  {
    for (k = 1; k <= 3; k++)
      cog_pos[k] = joint_cog_mpos[i][k] / links[i].m;
    for (j = B_TR; j <= i; j++)
    {
      revoluteGJacColumn(cog_pos, joint_origin_pos[j], joint_axis_pos[j], Jcolumn);
      for (k = 1; k <= 3; k++)
        Jcog[k][j] += links[i].m * Jcolumn[k];
    }
    for (k = 1; k <= 3; k++)
      Jcog[k+3][i] = joint_axis_pos[i][k];
  }
  
  for (i = B_HN; i <= R_ET; i++)
  {
    for (k = 1; k <= 3; k++)
      cog_pos[k] = joint_cog_mpos[i][k] / links[i].m;
    for (j = B_TR; j <= B_TFE; j++)
    {
      revoluteGJacColumn(cog_pos, joint_origin_pos[j], joint_axis_pos[j], Jcolumn);
      for (k = 1; k <= 3; k++)
        Jcog[k][j] += links[i].m * Jcolumn[k];
    }
    for (j = B_HN; j <= i; j++)
    {
      revoluteGJacColumn(cog_pos, joint_origin_pos[j], joint_axis_pos[j], Jcolumn);
      for (k = 1; k <= 3; k++)
        Jcog[k][j] += links[i].m * Jcolumn[k];
    }
    for (k = 1; k <= 3; k++)
      Jcog[k+3][i] = joint_axis_pos[i][k];
  }
  
  for (i = L_EP; i <= L_ET; i++)
  {
    for (k = 1; k <= 3; k++)
      cog_pos[k] = joint_cog_mpos[i][k] / links[i].m;
    for (j = B_TR; j <= B_TFE; j++)
    {
      revoluteGJacColumn(cog_pos, joint_origin_pos[j], joint_axis_pos[j], Jcolumn);
      for (k = 1; k <= 3; k++)
        Jcog[k][j] += links[i].m * Jcolumn[k];
    }
    for (j = B_HN; j <= B_HR; j++)
    {
      revoluteGJacColumn(cog_pos, joint_origin_pos[j], joint_axis_pos[j], Jcolumn);
      for (k = 1; k <= 3; k++)
        Jcog[k][j] += links[i].m * Jcolumn[k];
    }
    for (j = L_EP; j <= i; j++)
    {
      revoluteGJacColumn(cog_pos, joint_origin_pos[j], joint_axis_pos[j], Jcolumn);
      for (k = 1; k <= 3; k++)
        Jcog[k][j] += links[i].m * Jcolumn[k];
    }
    for (k = 1; k <= 3; k++)
      Jcog[k+3][i] = joint_axis_pos[i][k];
  }
  
  for (k = 1; k <= 3; k++)
    for (j = 1; j <= N_DOFS; j++)
      Jcog[k][j] /= mass;
  
  my_free_vector(cog_pos, 1, 3);
  my_free_vector(Jcolumn, 1, 6);
}

void ComputeCenterOfPressure(double xcop[])
{
int      i, j, n;
double   sum;
int      inds[8+1];

  /* inds ontains the indices of the foot contact points */
  n = 0;
  inds[++n] = 25;
  inds[++n] = 26;
  inds[++n] = 27;
  inds[++n] = 28;
  inds[++n] = 34;
  inds[++n] = 35;
  inds[++n] = 36;
  inds[++n] = 37;

  for (j = 1; j <= N_CART; ++j)
    xcop[j] = 0;
  sum = 1.e-10;

  for (i = 1; i <= n; ++i)
  { /* loop over all foot contact points */

    // check whether there is an active contact
    if (!contacts[inds[i]].active || !contacts[inds[i]].status)
      continue;

    // accumulate the cop position as a weighted sum, where the weight is the
    // z component of the force at each contact point
    for (j = 1; j <= N_CART; ++j)
      xcop[j] += link_pos[inds[i]][j] * contacts[inds[i]].f[_Z_];

    sum += contacts[inds[i]].f[_Z_];

  }

  for (j = 1; j <= N_CART; ++j)
    xcop[j] /= sum;
}

