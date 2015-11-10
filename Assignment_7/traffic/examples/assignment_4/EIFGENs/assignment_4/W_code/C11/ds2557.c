/*
 * Code for class DS_HASH_TABLE_CURSOR [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F2557_32277(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2557_32278(EIF_REFERENCE);
extern void EIF_Minit2557(void);

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

/* {DS_HASH_TABLE_CURSOR}.container */
EIF_TYPED_VALUE F2557_32277 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(25376,Dtype(Current)));
	return r;
}


/* {DS_HASH_TABLE_CURSOR}.next_cursor */
EIF_TYPED_VALUE F2557_32278 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(25340,Dtype(Current)));
	return r;
}


void EIF_Minit2557 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
