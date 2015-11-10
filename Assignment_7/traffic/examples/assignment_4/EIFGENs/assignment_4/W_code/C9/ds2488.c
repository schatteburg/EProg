/*
 * Code for class DS_BILINKED_LIST_CURSOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F2488_32331(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2488_32332(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2488_32333(EIF_REFERENCE);
extern void EIF_Minit2488(void);

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

/* {DS_BILINKED_LIST_CURSOR}.container */
EIF_TYPED_VALUE F2488_32331 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(25408,Dtype(Current)));
	return r;
}


/* {DS_BILINKED_LIST_CURSOR}.current_cell */
EIF_TYPED_VALUE F2488_32332 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(25401,Dtype(Current)));
	return r;
}


/* {DS_BILINKED_LIST_CURSOR}.next_cursor */
EIF_TYPED_VALUE F2488_32333 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(25340,Dtype(Current)));
	return r;
}


void EIF_Minit2488 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
