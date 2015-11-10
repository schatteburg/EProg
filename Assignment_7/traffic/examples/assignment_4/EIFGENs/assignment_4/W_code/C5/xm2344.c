/*
 * Code for class XM_DEFAULT_POSITION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F2344_32206(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F2344_32207(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2344_32208(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2344_32209(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2344_32210(EIF_REFERENCE);
extern void EIF_Minit2344(void);

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

/* {XM_DEFAULT_POSITION}.make */
void F2344_32206 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2343, Current, 0, 4, 37214);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2343, Current, 37214);
	RTCC(arg1, 2343, l_feature_name, 1, RTWCT(25333, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_source_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_byte_index_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_column_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_row_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 25333, 0xF8000393, 0); /* source_name */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(25333, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 25332, 0x10000000, 1); /* byte_index */
	*(EIF_INTEGER_32 *)(Current + RTWA(25332, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 25331, 0x10000000, 1); /* column */
	*(EIF_INTEGER_32 *)(Current + RTWA(25331, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 25330, 0x10000000, 1); /* row */
	*(EIF_INTEGER_32 *)(Current + RTWA(25330, dtype)) = (EIF_INTEGER_32) arg4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("source_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(25333, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("byte_index_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(25332, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("column_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(25331, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("row_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(25330, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {XM_DEFAULT_POSITION}.source_name */
EIF_TYPED_VALUE F2344_32207 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(25333,Dtype(Current)));
	return r;
}


/* {XM_DEFAULT_POSITION}.byte_index */
EIF_TYPED_VALUE F2344_32208 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(25332,Dtype(Current)));
	return r;
}


/* {XM_DEFAULT_POSITION}.column */
EIF_TYPED_VALUE F2344_32209 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(25331,Dtype(Current)));
	return r;
}


/* {XM_DEFAULT_POSITION}.row */
EIF_TYPED_VALUE F2344_32210 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(25330,Dtype(Current)));
	return r;
}


void EIF_Minit2344 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
