
// #include "Utility.h"
#include "SL.h"
#include "SL_user.h"
#include "SL_common.h"

#include <string.h>

float EndianSwap( const float inFloat )
{
float  retVal;
char  *floatToConvert = ( char* ) &inFloat;
char  *returnFloat = ( char* ) &retVal;

  // swap the bytes into a temporary buffer
  returnFloat[0] = floatToConvert[3];
  returnFloat[1] = floatToConvert[2];
  returnFloat[2] = floatToConvert[1];
  returnFloat[3] = floatToConvert[0];

  return retVal;
}


/*!*****************************************************************************
 *******************************************************************************
  \note  mrdplot_read
  \date  June 1999

  \remarks 
	
  reads an CLMCPLOT file and returns the relevant variables. All relevant
  memory is allocated if D, vnames, units are initialized with the NULL
  pointer. Otherwise we assume enough memory is available.

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 \param[in]     fname     : filename of file to be read
 \param[out]    D         : data matrix
 \param[out]    vnames    : names of data columns
 \param[out]    units     : units of data columns
 \param[out]    freq      : sampling frequency of data
 \param[out]    n_cols    : number of columns
 \param[out]    n_rows    : number of rows

  returns TRUE if successful, otherwise FALSE

 ******************************************************************************/
int
mrdplot_read(char *fname, Matrix *D, char ***vnames, char ***units, 
             double *freq, int *n_cols, int *n_rows)
{
  int     j, i, r;
  FILE   *fp;
  int     buffer_size;
  float  *buff;
  int     aux;
  int     rc;

  /* open the file, and parse the parameters */
  fp = fopen(fname,"r");
  if (fp == NULL)
    return FALSE;
  
  /* get the number of rows, columns, sampling frequency
     and calc the buffer_size */
  rc = fscanf(fp,"%d %d %d %lf",&buffer_size,n_cols,n_rows,freq);
  if (n_rows <= 0)
  {
    fclose(fp);
    return FALSE;
  }

  /* alocate memory for the array variables if needed */
  if (*vnames == NULL) 
    *vnames = (char **)my_calloc(*n_cols+1, sizeof(char *), MY_STOP);
  if (*units == NULL)
    *units = (char **)my_calloc(*n_cols+1, sizeof(char *), MY_STOP);

  for (i=1;i<= *n_cols;++i){
    (*vnames)[i] = (char *) my_calloc(40, sizeof(char), MY_STOP);
    (*units)[i]  = (char *) my_calloc(40, sizeof(char), MY_STOP);
    rc= fscanf(fp, "%s %s", (*vnames)[i], (*units)[i]);
  }

  /* there are two extra blank chrs at the end of the block
     and a line return which we must account for */
  fgetc(fp);
  fgetc(fp);
  fgetc(fp);
  
  /* read file into a buffer and check if the matrix size is correct */
  buff = (float *) calloc(buffer_size, sizeof(float));
  if (*D == NULL)
    *D = my_matrix(1,*n_rows,1,*n_cols);
  
  if (fread((void *) buff,sizeof(float),buffer_size,fp)!= (unsigned int) buffer_size)
  {
    printf("cannot fread matrix. \n");
    return MY_ERROR;
  }

#ifdef BYTESWAP
  // convert little-endian to big-endian
  for (i = 0; i < buffer_size; i++)
    buff[i] = EndianSwap(buff[i]);
  /* r = 0;
  for (j=1; j<=*n_cols; ++j) {
    for (i=1; i<=*n_rows; ++i) {
      aux = LONGSWAP(*((int *)&(buff[r])));
      buff[r++] = *((float *)&aux);
    }
  } */
#endif

  fclose(fp);

  /* copy data into D matrix */
  r = 0;
  for (i=1; i<=*n_rows; ++i) {
    for (j=1; j<=*n_cols; ++j) 
    {
      (*D)[i][j] = (double) buff[r++];
    }
  }

  /* free up memory by deallocating resources */
  free((void *) buff);

  return TRUE;
  
}


/*!*****************************************************************************
 *******************************************************************************
\note  mrdplot_write
\date  March 2006
   
\remarks 

        writes clmcplot data file 

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

 \param[in]     fname     : filename of file to be read
 \param[in]     D         : data matrix
 \param[in]     vnames    : names of data columns
 \param[in]     units     : units of data columns
 \param[in]     freq      : sampling frequency of data
 \param[in]     n_cols    : number of columns
 \param[in]     n_rows    : number of rows


 ******************************************************************************/
int
mrdplot_write(char *fname, Matrix D, char **vnames, char **units,
              double freq, int n_cols, int n_rows)
{
int            j,i,r;
FILE          *fp;
unsigned int   buffer_size;
float         *buffer;
int32_t        aux;
float          tmp1, tmp2;

  // open the file, and write all data
  if ( (fp = fopen( fname, "w" )) == NULL )  {
    printf( "cannot fopen file %s for write.\n", fname );
    return FALSE;
  }

  // create a floating point buffer and copy all data over
  buffer = (float *) calloc(n_rows*n_cols, sizeof(float));
  r = 0;
  for (i=1; i<=n_rows; ++i)
    for (j=1; j<=n_cols; ++j)
      buffer[r++] = (float) D[i][j];
  
  // write the the buffer size, the number of columns, the sampling time, 
  // the column names and units
  buffer_size = n_rows*n_cols;
  fprintf(fp,"%d  %d  %d  %f\n",buffer_size, n_cols, n_rows, freq);

  for (i=1; i<=n_cols; ++i) {

    if (strcmp(vnames[i],"")==0)
      sprintf(vnames[i],"C%d",i);
    fprintf(fp,"%s  ",vnames[i]);

    if (strcmp(units[i],"")==0)
      sprintf(vnames[i],"-");
    fprintf(fp,"%s  ",units[i]);

  }
  fprintf(fp,"\n");

#ifdef BYTESWAP
  // convert little-endian to big-endian
  for (i = 0; i < buffer_size; i++)
    buffer[i] = EndianSwap(buffer[i]);
  /* r = 0;
  for (j=1; j<=n_cols; ++j) {
    for (i=1; i<=n_rows; ++i) {
      aux = LONGSWAP(*((int *)&(buffer[r])));
      buffer[r++] = *((float *)&aux);
    }
  } */
#endif

  if (fwrite((void *) buffer,sizeof(float),buffer_size,fp)!= buffer_size) {
    printf( "cannot fwrite matrix.\n" );
    return FALSE;
  }

  fclose( fp );

  free((void *) buffer);

  return TRUE;

}

int set_active_dofs(char **vnames, int dof_CBi, int active_dofs[])
{
int i;

  if ((dof_CBi % 2) == 0)
  {
    printf("Number of columns must be an odd number, not %d!\n", dof_CBi);
    return FALSE;
  }

  active_dofs[0] = (dof_CBi - 1) / 2;

  if (strcmp(vnames[1], "time"))
  {
    printf("Data %s not copmpatible with SL!", vnames[1]);
    return FALSE;
  }
  for (i = 1; i <= active_dofs[0]; i++)
  {
    if (!strcmp(vnames[i+1], "L_SFE_th"))
      active_dofs[i] = L_SFE;
    else if (!strcmp(vnames[i+1], "L_SAA_th"))
      active_dofs[i] = L_SAA;
    else if (!strcmp(vnames[i+1], "L_HR_th"))
      active_dofs[i] = L_HR;
    else if (!strcmp(vnames[i+1], "L_EB_th"))
      active_dofs[i] = L_EB;
    else if (!strcmp(vnames[i+1], "L_WR_th"))
      active_dofs[i] = L_WR;
    else if (!strcmp(vnames[i+1], "L_WFE_th"))
      active_dofs[i] = L_WFE;
    else if (!strcmp(vnames[i+1], "L_WAA_th"))
      active_dofs[i] = L_WAA;
    else if (!strcmp(vnames[i+1], "R_SFE_th"))
      active_dofs[i] = R_SFE;
    else if (!strcmp(vnames[i+1], "R_SAA_th"))
      active_dofs[i] = R_SAA;
    else if (!strcmp(vnames[i+1], "R_HR_th"))
      active_dofs[i] = R_HR;
    else if (!strcmp(vnames[i+1], "R_EB_th"))
      active_dofs[i] = R_EB;
    else if (!strcmp(vnames[i+1], "R_WR_th"))
      active_dofs[i] = R_WR;
    else if (!strcmp(vnames[i+1], "R_WFE_th"))
      active_dofs[i] = R_WFE;
    else if (!strcmp(vnames[i+1], "R_WAA_th"))
      active_dofs[i] = R_WAA;
    else if (!strcmp(vnames[i+1], "L_HFE_th"))
      active_dofs[i] = L_HFE;
    else if (!strcmp(vnames[i+1], "L_HAA_th"))
      active_dofs[i] = L_HAA;
    else if (!strcmp(vnames[i+1], "L_HFR_th"))
      active_dofs[i] = L_HFR;
    else if (!strcmp(vnames[i+1], "L_KFE_th"))
      active_dofs[i] = L_KFE;
    else if (!strcmp(vnames[i+1], "L_AR_th"))
      active_dofs[i] = L_AR;
    else if (!strcmp(vnames[i+1], "L_AFE_th"))
      active_dofs[i] = L_AFE;
    else if (!strcmp(vnames[i+1], "L_AAA_th"))
      active_dofs[i] = L_AAA;
    else if (!strcmp(vnames[i+1], "R_HFE_th"))
      active_dofs[i] = R_HFE;
    else if (!strcmp(vnames[i+1], "R_HAA_th"))
      active_dofs[i] = R_HAA;
    else if (!strcmp(vnames[i+1], "R_HFR_th"))
      active_dofs[i] = R_HFR;
    else if (!strcmp(vnames[i+1], "R_KFE_th"))
      active_dofs[i] = R_KFE;
    else if (!strcmp(vnames[i+1], "R_AR_th"))
      active_dofs[i] = R_AR;
    else if (!strcmp(vnames[i+1], "R_AFE_th"))
      active_dofs[i] = R_AFE;
    else if (!strcmp(vnames[i+1], "R_AAA_th"))
      active_dofs[i] = R_AAA;
    else if (!strcmp(vnames[i+1], "B_TR_th"))
      active_dofs[i] = B_TR;
    else if (!strcmp(vnames[i+1], "B_TAA_th"))
      active_dofs[i] = B_TAA;
    else if (!strcmp(vnames[i+1], "B_TFE_th"))
      active_dofs[i] = B_TFE;
    else if (!strcmp(vnames[i+1], "B_HN_th"))
      active_dofs[i] = B_HN;
    else if (!strcmp(vnames[i+1], "B_HT_th"))
      active_dofs[i] = B_HT;
    else if (!strcmp(vnames[i+1], "B_HR_th"))
      active_dofs[i] = B_HR;
    else if (!strcmp(vnames[i+1], "R_EP_th"))
      active_dofs[i] = R_EP;
    else if (!strcmp(vnames[i+1], "R_ET_th"))
      active_dofs[i] = R_ET;
    else if (!strcmp(vnames[i+1], "L_EP_th"))
      active_dofs[i] = L_EP;
    else if (!strcmp(vnames[i+1], "L_ET_th"))
      active_dofs[i] = L_ET;
    else
    {
      printf("Degree of freedom %s, %d, not copmpatible with SL!", vnames[i+1], i);
      return FALSE;
    }
  }
  return TRUE;
}

