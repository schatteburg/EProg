/*
 * Code for class V_REFERENCE_HASHABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F2313_31620(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2313_31621(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2313_31622(EIF_REFERENCE);
extern void EIF_Minit2313(void);

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

/* {V_REFERENCE_HASHABLE}.hash_code */
EIF_TYPED_VALUE F2313_31620 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hash_code";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2312, Current, 0, 0, 36704);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2312, Current, 36704);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(24875, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 24874, 0x10000000, 1); /* stored_hash */
		ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (Current)));
		*(EIF_INTEGER_32 *)(Current + RTWA(24874, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(3);
		RTDBGAA(Current, dtype, 24875, 0x04000000, 1); /* is_hash_stored */
		*(EIF_BOOLEAN *)(Current + RTWA(24875, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(4);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(24874, dtype));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {V_REFERENCE_HASHABLE}.stored_hash */
EIF_TYPED_VALUE F2313_31621 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(24874,Dtype(Current)));
	return r;
}


/* {V_REFERENCE_HASHABLE}.is_hash_stored */
EIF_TYPED_VALUE F2313_31622 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(24875,Dtype(Current)));
	return r;
}


void EIF_Minit2313 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
