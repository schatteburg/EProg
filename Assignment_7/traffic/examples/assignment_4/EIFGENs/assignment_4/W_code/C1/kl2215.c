/*
 * Code for class KL_SYSTEM_CLOCK
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F2215_30047(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2215_30048(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2215_30049(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2215_30050(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2215_30051(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2215_30052(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2215_30053(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2215_30054(EIF_REFERENCE);
extern void F2215_30055(EIF_REFERENCE);
extern void F2215_30056(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2215_30057(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2215_30058(EIF_REFERENCE);
extern void EIF_Minit2215(void);

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

/* {KL_SYSTEM_CLOCK}.make */
void F2215_30047 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2214, Current, 0, 0, 34846);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(2214, Current, 34846);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {KL_SYSTEM_CLOCK}.year */
EIF_TYPED_VALUE F2215_30048 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(23745,Dtype(Current)));
	return r;
}


/* {KL_SYSTEM_CLOCK}.month */
EIF_TYPED_VALUE F2215_30049 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(23744,Dtype(Current)));
	return r;
}


/* {KL_SYSTEM_CLOCK}.day */
EIF_TYPED_VALUE F2215_30050 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(23743,Dtype(Current)));
	return r;
}


/* {KL_SYSTEM_CLOCK}.hour */
EIF_TYPED_VALUE F2215_30051 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(23742,Dtype(Current)));
	return r;
}


/* {KL_SYSTEM_CLOCK}.minute */
EIF_TYPED_VALUE F2215_30052 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(23741,Dtype(Current)));
	return r;
}


/* {KL_SYSTEM_CLOCK}.second */
EIF_TYPED_VALUE F2215_30053 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(23740,Dtype(Current)));
	return r;
}


/* {KL_SYSTEM_CLOCK}.millisecond */
EIF_TYPED_VALUE F2215_30054 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(23739,Dtype(Current)));
	return r;
}


/* {KL_SYSTEM_CLOCK}.set_local_time */
void F2215_30055 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_local_time";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 2214, Current, 1, 0, 34854);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2214, Current, 34854);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800089D, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(23738, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF800089D, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(2205, 0x00).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 23738, 0xF800089D, 0); /* local_clock */
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(23738, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
	} else {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(23556, "update", loc1))(loc1);
	}
	RTHOOK(6);
	RTDBGAA(Current, dtype, 23745, 0x10000000, 1); /* year */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23557, "year_now", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(23745, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 23744, 0x10000000, 1); /* month */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23558, "month_now", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(23744, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 23743, 0x10000000, 1); /* day */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23559, "day_now", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(23743, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 23742, 0x10000000, 1); /* hour */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23560, "hour_now", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(23742, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 23741, 0x10000000, 1); /* minute */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23561, "minute_now", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(23741, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	RTDBGAA(Current, dtype, 23740, 0x10000000, 1); /* second */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23562, "second_now", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(23740, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	RTDBGAA(Current, dtype, 23739, 0x10000000, 1); /* millisecond */
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(23563, "millisecond_now", loc1));
	*(EIF_INTEGER_32 *)(Current + RTWA(23739, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
}

/* {KL_SYSTEM_CLOCK}.set_utc_time */
void F2215_30056 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_utc_time";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 2214, Current, 1, 0, 34855);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2214, Current, 34855);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800089D, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(23737, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF800089D, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(2205, 0x00).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(23554, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 23737, 0xF800089D, 0); /* utc_clock */
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(23737, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
	} else {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(23556, "update", loc1))(loc1);
	}
	RTHOOK(6);
	RTDBGAA(Current, dtype, 23745, 0x10000000, 1); /* year */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23557, "year_now", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(23745, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 23744, 0x10000000, 1); /* month */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23558, "month_now", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(23744, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 23743, 0x10000000, 1); /* day */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23559, "day_now", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(23743, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 23742, 0x10000000, 1); /* hour */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23560, "hour_now", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(23742, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 23741, 0x10000000, 1); /* minute */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23561, "minute_now", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(23741, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	RTDBGAA(Current, dtype, 23740, 0x10000000, 1); /* second */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23562, "second_now", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(23740, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	RTDBGAA(Current, dtype, 23739, 0x10000000, 1); /* millisecond */
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(23563, "millisecond_now", loc1));
	*(EIF_INTEGER_32 *)(Current + RTWA(23739, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
}

/* {KL_SYSTEM_CLOCK}.utc_clock */
EIF_TYPED_VALUE F2215_30057 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(23737,Dtype(Current)));
	return r;
}


/* {KL_SYSTEM_CLOCK}.local_clock */
EIF_TYPED_VALUE F2215_30058 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(23738,Dtype(Current)));
	return r;
}


void EIF_Minit2215 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
