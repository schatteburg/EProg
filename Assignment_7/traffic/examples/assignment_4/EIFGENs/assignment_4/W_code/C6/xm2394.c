/*
 * Code for class XM_EIFFEL_PE_ENTITY_DEF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F2394_34147(EIF_REFERENCE);
extern void F2394_34148(EIF_REFERENCE);
extern void F2394_34149(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2394_34150(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2394_34151(EIF_REFERENCE);
extern void EIF_Minit2394(void);

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

/* {XM_EIFFEL_PE_ENTITY_DEF}.read_token */
void F2394_34147 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_token";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2393, Current, 0, 0, 39224);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2393, Current, 39224);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(26375, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 26375, 0x04000000, 1); /* pre_sent */
		*(EIF_BOOLEAN *)(Current + RTWA(26375, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(3);
		RTDBGAA(Current, dtype, 24984, 0x10000000, 1); /* last_token */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(26209, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(24984, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 26314, 0xF8000393, 0); /* last_value */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(26323, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(26314, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(5);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(26376, dtype));
		if (tb1) {
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(25002, dtype))(Current);
		} else {
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(24999, 2392))(Current);
			RTHOOK(8);
			tb1 = '\0';
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24993, dtype))(Current)).it_b);
			if (tb2) {
				tb2 = *(EIF_BOOLEAN *)(Current + RTWA(26376, dtype));
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				RTHOOK(9);
				RTDBGAA(Current, dtype, 26376, 0x04000000, 1); /* post_sent */
				*(EIF_BOOLEAN *)(Current + RTWA(26376, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(10);
				RTDBGAA(Current, dtype, 24984, 0x10000000, 1); /* last_token */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(26209, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(24984, dtype)) = (EIF_INTEGER_32) ti4_1;
				RTHOOK(11);
				RTDBGAA(Current, dtype, 26314, 0xF8000393, 0); /* last_value */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(26323, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(26314, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {XM_EIFFEL_PE_ENTITY_DEF}.reset */
void F2394_34148 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2393, Current, 0, 0, 39225);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2393, Current, 39225);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(24983, 2392))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(26374, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {XM_EIFFEL_PE_ENTITY_DEF}.reset_sent */
void F2394_34149 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset_sent";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2393, Current, 0, 0, 39226);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2393, Current, 39226);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 26375, 0x04000000, 1); /* pre_sent */
	*(EIF_BOOLEAN *)(Current + RTWA(26375, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 26376, 0x04000000, 1); /* post_sent */
	*(EIF_BOOLEAN *)(Current + RTWA(26376, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {XM_EIFFEL_PE_ENTITY_DEF}.pre_sent */
EIF_TYPED_VALUE F2394_34150 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(26375,Dtype(Current)));
	return r;
}


/* {XM_EIFFEL_PE_ENTITY_DEF}.post_sent */
EIF_TYPED_VALUE F2394_34151 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(26376,Dtype(Current)));
	return r;
}


void EIF_Minit2394 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
