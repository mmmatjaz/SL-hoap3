#ifndef UTILITY_MACROS_H
#define UTILITY_MACROS_H
#include "utility.h"
#ifndef VX
#include "strings.h"
#endif

/** 
 * Macros which declare a Matrix or a Vector on the stack. When thread-safety
 * is required, these should be used to replace static matrix and vector
 * initializations (usually identified by an "if (firsttime)" block)
 *
 * All uppercase macros are analogous to their lowercase function calls in
 * utility.c.
 *
 * - Mrinal Kalakrishnan, Nov 2007
 */

#define MY_VECTOR_GENERAL(name,nl,nh,type) \
  int priv_info_##name=0;		   \
  if ((nl)==1) priv_info_##name=1;	   \
  type priv_##name[(nh)-(nl)+1+priv_info_##name];   \
  type *name=priv_##name;			    \
  bzero((void *)priv_##name, sizeof(type)*((nh)-(nl)+1+priv_info_##name));  \
  if ((nl)==1)					    \
    name[0]=(nh)-(nl)+1;			    \
  if ((nl)!=1)					    \
    name -= (nl);

#define MY_VECTOR(name,nl,nh)			\
  MY_VECTOR_GENERAL(name,nl,nh,double)

#define MY_IVECTOR(name,nl,nh)			\
  MY_VECTOR_GENERAL(name,nl,nh,int)

#define MY_FVECTOR(name,nl,nh)			\
  MY_VECTOR_GENERAL(name,nl,nh,float)


#define MY_MATRIX_GENERAL(name,nrl,nrh,ncl,nch,type)	\
  int priv_info_##name=0;				\
  if ((nrl)==1 && (ncl)==1) priv_info_##name=1;		\
  type *priv_##name[(nrh)-(nrl)+1+priv_info_##name];	\
  type **name=priv_##name;				\
  type priv_info_mem_##name[N_MAT_INFO];		\
  if (priv_info_##name)					\
    {							\
      name[0] = priv_info_mem_##name;			\
      name[0][MAT_TYPE] = IS_FULL;			\
      name[0][NR] = (nrh)-(nrl)+1;			\
      name[0][NC] = (nch)-(ncl)+1;			\
    } else	         		                \
    name -= (nrl);					\
  int priv_i_##name;							\
  int priv_size_##name=((nrh)-(nrl)+1)*((nch)-(ncl)+1);			\
  type priv_mem_##name[priv_size_##name];				\
  bzero((void *)priv_mem_##name, sizeof(type)*(priv_size_##name));	\
  for (priv_i_##name=(nrl); priv_i_##name<=(nrh); ++priv_i_##name)	\
    {									\
      name[priv_i_##name]=&(priv_mem_##name[(priv_i_##name-(nrl))*((nch)-(ncl)+1)]); \
      name[priv_i_##name]-=(ncl);					\
    }									

#define MY_MATRIX(name,nrl,nrh,ncl,nch)			\
  MY_MATRIX_GENERAL(name,nrl,nrh,ncl,nch,double)

#define MY_IMATRIX(name,nrl,nrh,ncl,nch)		\
  MY_MATRIX_GENERAL(name,nrl,nrh,ncl,nch,int)

#define MY_FMATRIX(name,nrl,nrh,ncl,nch)		\
  MY_MATRIX_GENERAL(name,nrl,nrh,ncl,nch,float)


/* MY_MATRIX_ARRAY declares an array of matrices on the stack */

#define MY_MATRIX_ARRAY_GENERAL(name,nrl,nrh,ncl,nch,arraySize,type) \
  int priv_info_##name=0;				\
  if ((nrl)==1 && (ncl)==1) priv_info_##name=1;		     \
  type **name[(arraySize)+1];				     \
  type *priv_array_mem_##name[((arraySize)+1)*((nrh)-(nrl)+1+priv_info_##name)]; \
  type priv_info_mem_##name[((arraySize)+1)*N_MAT_INFO];   \
  int priv_i_##name;					     \
  int priv_j_##name;					     \
  for (priv_i_##name=0; priv_i_##name<=(arraySize); ++priv_i_##name) \
    name[priv_i_##name] = &(priv_array_mem_##name[priv_i_##name*((nrh)-(nrl)+1+priv_info_##name)]); \
  if (priv_info_##name)	{						\
    for (priv_i_##name=0; priv_i_##name<=(arraySize); ++priv_i_##name) { \
      name[priv_i_##name][0] = &(priv_info_mem_##name[N_MAT_INFO*(priv_i_##name)]); \
      name[priv_i_##name][0][MAT_TYPE] = IS_FULL;			\
      name[priv_i_##name][0][NR] = (nrh)-(nrl)+1;			\
      name[priv_i_##name][0][NC] = (nch)-(ncl)+1;			\
    }									\
  } else {								\
    for (priv_i_##name=0; priv_i_##name<=(arraySize); ++priv_i_##name)  \
      name[priv_i_##name] -= (nrl);					\
  }									\
  type priv_mem_##name[(arraySize)+1][((nrh)-(nrl)+1)*((nch)-(ncl)+1)]; \
  bzero((void *)priv_mem_##name, sizeof(type)*(((arraySize)+1)*((nrh)-(nrl)+1)*((nch)-(ncl)+1)));\
  for (priv_j_##name=0; priv_j_##name<=(arraySize); ++priv_j_##name) {	\
    for (priv_i_##name=(nrl); priv_i_##name<=(nrh); ++priv_i_##name) {	\
      name[priv_j_##name][priv_i_##name]=&(priv_mem_##name[priv_j_##name][(priv_i_##name-(nrl))*((nch)-(ncl)+1)]); \
      name[priv_j_##name][priv_i_##name]-=(ncl);			\
    }									\
  }

#define MY_MATRIX_ARRAY(name,nrl,nrh,ncl,nch,arraySize) \
  MY_MATRIX_ARRAY_GENERAL(name,nrl,nrh,ncl,nch,arraySize,double)

#define MY_IMATRIX_ARRAY(name,nrl,nrh,ncl,nch,arraySize) \
  MY_MATRIX_ARRAY_GENERAL(name,nrl,nrh,ncl,nch,arraySize,int)

#define MY_FMATRIX_ARRAY(name,nrl,nrh,ncl,nch,arraySize) \
  MY_MATRIX_ARRAY_GENERAL(name,nrl,nrh,ncl,nch,arraySize,float)

#endif /* UTILITY_MACROS_H */
