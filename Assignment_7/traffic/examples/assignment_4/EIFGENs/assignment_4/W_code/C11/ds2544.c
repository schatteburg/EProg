/*
 * Code for class DS_ARRAYED_SPARSE_TABLE_CURSOR [BOOLEAN, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F2544_32275(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2544_32276(EIF_REFERENCE);
extern void EIF_Minit2544(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DS_ARRAYED_SPARSE_TABLE_CURSOR}.container */
EIF_TYPED_VALUE F2544_32275 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(25376,Dtype(Current)));
	return r;
}


/* {DS_ARRAYED_SPARSE_TABLE_CURSOR}.next_cursor */
EIF_TYPED_VALUE F2544_32276 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(25340,Dtype(Current)));
	return r;
}


void EIF_Minit2544 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
