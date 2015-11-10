/*
 * Code for class COLOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F2322_31740(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2322_31741(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F2322_31742(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F2322_31743(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F2322_31744(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F2322_31723(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F2322_31724(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F2322_31725(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F2322_31726(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2322_31727(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2322_31728(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2322_31729(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2322_31730(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2322_31731(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2322_31732(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2322_31733(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2322_31734(EIF_REFERENCE);
extern void F2322_34623(EIF_REFERENCE, int);
extern void EIF_Minit2322(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {COLOR}.precision */
EIF_TYPED_VALUE F2322_31740 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 9.9999999999999995e-07;
	return r;
}

/* {COLOR}.approx_equal */
EIF_TYPED_VALUE F2322_31741 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "approx_equal";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2321, Current, 0, 2, 36833);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2321, Current, 36833);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\01';
	ur8_1 = arg1;
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(24203, dtype))(Current, ur8_1x)).it_b);
	if (!tb2) {
		ur8_1 = arg2;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(24203, dtype))(Current, ur8_1x)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		tb1 = '\0';
		ur8_1 = arg1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(24203, dtype))(Current, ur8_1x)).it_b);
		if (tb2) {
			ur8_1 = arg2;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(24203, dtype))(Current, ur8_1x)).it_b);
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(arg2 == (EIF_REAL_64) 0.0)) {
			RTHOOK(4);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			tr8_1 = eif_abs_real64 (arg1);
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24199, dtype))(Current)).it_r8);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tr8_1 <= tr8_2);
		} else {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(arg1 == (EIF_REAL_64) 0.0)) {
				RTHOOK(6);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				tr8_1 = eif_abs_real64 (arg2);
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24199, dtype))(Current)).it_r8);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tr8_1 <= tr8_2);
			} else {
				RTHOOK(7);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				tr8_1 = eif_abs_real64 ((EIF_REAL_64) ((EIF_REAL_64) 1.0 - (EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (arg2))));
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24199, dtype))(Current)).it_r8);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tr8_1 <= tr8_2);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur8_1
#undef arg2
#undef arg1
}

/* {COLOR}.approx_less */
EIF_TYPED_VALUE F2322_31742 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "approx_less";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2321, Current, 0, 2, 36834);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2321, Current, 36834);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg2 == (EIF_REAL_64) 0.0)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24199, dtype))(Current)).it_r8);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (arg1 < (EIF_REAL_64) -tr8_1);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		tr1 = RTLN(eif_new_type(864, 0x00).id);
		*(EIF_REAL_64 *)tr1 = arg2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14449, "sign", tr1))(tr1)).it_i4);
		tr8_1 = (EIF_REAL_64) (ti4_1);
		tr8_2 = eif_abs_real64 (arg2);
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24199, dtype))(Current)).it_r8);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_REAL_64) (tr8_1 - (EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (tr8_2))) > tr8_3);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {COLOR}.approx_less_equal */
EIF_TYPED_VALUE F2322_31743 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "approx_less_equal";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2321, Current, 0, 2, 36835);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(2321, Current, 36835);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	if (!((EIF_BOOLEAN) (arg1 < arg2))) {
		ur8_1 = arg1;
		ur8_2 = arg2;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(24200, Dtype(Current)))(Current, ur8_1x, ur8_2x)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur8_1
#undef ur8_2
#undef arg2
#undef arg1
}

/* {COLOR}.is_ind */
EIF_TYPED_VALUE F2322_31744 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_ind";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2321, Current, 0, 1, 36818);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(2321, Current, 36818);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr8_1 = eif_abs_real64 (arg1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_REAL_64) -tr8_1 >= (EIF_REAL_64) 1.0);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {COLOR}.make_from_rgb */
void F2322_31723 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_from_rgb";
	RTEX;
#define arg1 arg1x.it_n1
#define arg2 arg2x.it_n1
#define arg3 arg3x.it_n1
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n1 = * (EIF_NATURAL_8 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n1 = * (EIF_NATURAL_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU(SK_UINT8,&arg2);
	RTLU(SK_UINT8,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2321, Current, 0, 3, 36820);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2321, Current, 36820);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 24957, 0x30000000, 1); /* red */
	*(EIF_NATURAL_8 *)(Current + RTWA(24957, dtype)) = (EIF_NATURAL_8) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 24958, 0x30000000, 1); /* green */
	*(EIF_NATURAL_8 *)(Current + RTWA(24958, dtype)) = (EIF_NATURAL_8) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 24959, 0x30000000, 1); /* blue */
	*(EIF_NATURAL_8 *)(Current + RTWA(24959, dtype)) = (EIF_NATURAL_8) arg3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("red_set", EX_POST);
		tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(24957, dtype));
		if ((EIF_BOOLEAN)(tu1_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("green_set", EX_POST);
		tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(24958, dtype));
		if ((EIF_BOOLEAN)(tu1_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("blue_set", EX_POST);
		tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(24959, dtype));
		if ((EIF_BOOLEAN)(tu1_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {COLOR}.make_from_real_rgb */
void F2322_31724 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_from_real_rgb";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2321, Current, 0, 3, 36821);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2321, Current, 36821);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("r_in_range", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_REAL_64) 0.0 <= arg1) && (EIF_BOOLEAN) (arg1 <= (EIF_REAL_64) 1.0)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("g_in_range", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_REAL_64) 0.0 <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_REAL_64) 1.0)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("b_in_range", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_REAL_64) 0.0 <= arg3) && (EIF_BOOLEAN) (arg3 <= (EIF_REAL_64) 1.0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 24957, 0x30000000, 1); /* red */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14584, 876))(Current)).it_n1);
	tr8_1 = (EIF_REAL_64) (tu1_1);
	tr1 = RTLN(eif_new_type(864, 0x00).id);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) (tr8_1 * arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14468, "rounded", tr1))(tr1)).it_i4);
	RTNHOOK(4,1);
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	*(EIF_NATURAL_8 *)(Current + RTWA(24957, dtype)) = (EIF_NATURAL_8) tu1_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 24958, 0x30000000, 1); /* green */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14584, 876))(Current)).it_n1);
	tr8_1 = (EIF_REAL_64) (tu1_1);
	tr1 = RTLN(eif_new_type(864, 0x00).id);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) (tr8_1 * arg2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14468, "rounded", tr1))(tr1)).it_i4);
	RTNHOOK(5,1);
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	*(EIF_NATURAL_8 *)(Current + RTWA(24958, dtype)) = (EIF_NATURAL_8) tu1_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 24959, 0x30000000, 1); /* blue */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14584, 876))(Current)).it_n1);
	tr8_1 = (EIF_REAL_64) (tu1_1);
	tr1 = RTLN(eif_new_type(864, 0x00).id);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) (tr8_1 * arg3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14468, "rounded", tr1))(tr1)).it_i4);
	RTNHOOK(6,1);
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	*(EIF_NATURAL_8 *)(Current + RTWA(24959, dtype)) = (EIF_NATURAL_8) tu1_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("red_set", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24960, dtype))(Current)).it_r8);
		tr8_2 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - arg1));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14584, 876))(Current)).it_n1);
		ti4_1 = (EIF_INTEGER_32) tu1_1;
		if ((EIF_BOOLEAN) (tr8_2 <= (EIF_REAL_64) ((EIF_REAL_64) (((EIF_INTEGER_32) 1L)) /  (EIF_REAL_64) (ti4_1)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("green_set", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24961, dtype))(Current)).it_r8);
		tr8_2 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - arg2));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14584, 876))(Current)).it_n1);
		ti4_1 = (EIF_INTEGER_32) tu1_1;
		if ((EIF_BOOLEAN) (tr8_2 <= (EIF_REAL_64) ((EIF_REAL_64) (((EIF_INTEGER_32) 1L)) /  (EIF_REAL_64) (ti4_1)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("blue_set", EX_POST);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24962, dtype))(Current)).it_r8);
		tr8_2 = eif_abs_real64 ((EIF_REAL_64) (tr8_1 - arg3));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14584, 876))(Current)).it_n1);
		ti4_1 = (EIF_INTEGER_32) tu1_1;
		if ((EIF_BOOLEAN) (tr8_2 <= (EIF_REAL_64) ((EIF_REAL_64) (((EIF_INTEGER_32) 1L)) /  (EIF_REAL_64) (ti4_1)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {COLOR}.make_from_hex */
void F2322_31725 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_hex";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 2321, Current, 2, 1, 36822);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2321, Current, 36822);
	if (arg1) {
		RTCC(arg1, 2321, l_feature_name, 1, eif_new_type(915, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(15188, "count", arg1));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24964, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_characters", EX_PRE);
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF8000710, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9705, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8417, "after", loc2))(loc2)).it_b);
			if (tb2) break;
			RTHOOK(4);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8416, "item", loc2))(loc2)).it_c1);
			tr1 = RTLN(eif_new_type(873, 0x00).id);
			*(EIF_CHARACTER_8 *)tr1 = tc1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14563, "is_hexa_digit", tr1))(tr1)).it_b);
			tb1 = tb3;
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8418, "forth", loc2))(loc2);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	RTDBGAL(Current, 1, 0xF80001C6, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(454, 0x00).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7611, Dtype(tr1)))(tr1);
	RTNHOOK(6,1);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 2L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15143, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7541, "type_natural_8", loc1))(loc1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7575, "parse_string_with_type", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 24957, 0x30000000, 1); /* red */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7619, "parsed_natural_8", loc1))(loc1)).it_n1);
	*(EIF_NATURAL_8 *)(Current + RTWA(24957, dtype)) = (EIF_NATURAL_8) tu1_1;
	RTHOOK(9);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	ui4_2 = ((EIF_INTEGER_32) 4L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15143, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7541, "type_natural_8", loc1))(loc1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7575, "parse_string_with_type", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 24958, 0x30000000, 1); /* green */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7619, "parsed_natural_8", loc1))(loc1)).it_n1);
	*(EIF_NATURAL_8 *)(Current + RTWA(24958, dtype)) = (EIF_NATURAL_8) tu1_1;
	RTHOOK(11);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	ui4_2 = ((EIF_INTEGER_32) 6L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15143, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7541, "type_natural_8", loc1))(loc1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7575, "parse_string_with_type", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(12);
	RTDBGAA(Current, dtype, 24959, 0x30000000, 1); /* blue */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7619, "parsed_natural_8", loc1))(loc1)).it_n1);
	*(EIF_NATURAL_8 *)(Current + RTWA(24959, dtype)) = (EIF_NATURAL_8) tu1_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("valid_hex_format", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(28, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15172, "is_case_insensitive_equal", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {COLOR}.red */
EIF_TYPED_VALUE F2322_31726 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(24957,Dtype(Current)));
	return r;
}


/* {COLOR}.green */
EIF_TYPED_VALUE F2322_31727 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(24958,Dtype(Current)));
	return r;
}


/* {COLOR}.blue */
EIF_TYPED_VALUE F2322_31728 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(24959,Dtype(Current)));
	return r;
}


/* {COLOR}.real_red */
EIF_TYPED_VALUE F2322_31729 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "real_red";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2321, Current, 0, 0, 36826);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(2321, Current, 36826);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(24957, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14584, 876))(Current)).it_n1);
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tu1_1) /  (EIF_REAL_64) (tu1_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

/* {COLOR}.real_green */
EIF_TYPED_VALUE F2322_31730 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "real_green";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2321, Current, 0, 0, 36827);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(2321, Current, 36827);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(24958, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14584, 876))(Current)).it_n1);
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tu1_1) /  (EIF_REAL_64) (tu1_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

/* {COLOR}.real_blue */
EIF_TYPED_VALUE F2322_31731 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "real_blue";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2321, Current, 0, 0, 36828);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(2321, Current, 36828);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(24959, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14584, 876))(Current)).it_n1);
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tu1_1) /  (EIF_REAL_64) (tu1_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

/* {COLOR}.brightness */
EIF_TYPED_VALUE F2322_31732 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "brightness";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2321, Current, 0, 0, 36829);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2321, Current, 36829);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24960, dtype))(Current)).it_r8);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24961, dtype))(Current)).it_r8);
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24962, dtype))(Current)).it_r8);
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 3L));
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (Result + tr8_1) + tr8_2)) /  (EIF_REAL_64) (tr8_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

/* {COLOR}.hex_format_length */
EIF_TYPED_VALUE F2322_31733 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {COLOR}.out */
EIF_TYPED_VALUE F2322_31734 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2321, Current, 0, 0, 36831);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2321, Current, 36831);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000393, 0,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(24957, dtype));
	tr1 = RTLN(eif_new_type(876, 0x00).id);
	*(EIF_NATURAL_8 *)tr1 = tu1_1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14614, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(24958, dtype));
	tr1 = RTLN(eif_new_type(876, 0x00).id);
	*(EIF_NATURAL_8 *)tr1 = tu1_1;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14614, "to_hex_string", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15142, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(24959, dtype));
	tr2 = RTLN(eif_new_type(876, 0x00).id);
	*(EIF_NATURAL_8 *)tr2 = tu1_1;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14614, "to_hex_string", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15142, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("valid_length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(15188, "count", Result));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24964, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {COLOR}._invariant */
void F2322_34623 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 2321, Current, 0, 34622);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("real_red_in_bounds", Current);
	tb1 = '\0';
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24960, dtype))(Current)).it_r8);
	if ((EIF_BOOLEAN) ((EIF_REAL_64) 0.0 <= tr8_1)) {
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24960, dtype))(Current)).it_r8);
		tb1 = (EIF_BOOLEAN) (tr8_1 <= (EIF_REAL_64) 1.0);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("real_green_in_bounds", Current);
	tb1 = '\0';
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24961, dtype))(Current)).it_r8);
	if ((EIF_BOOLEAN) ((EIF_REAL_64) 0.0 <= tr8_1)) {
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24961, dtype))(Current)).it_r8);
		tb1 = (EIF_BOOLEAN) (tr8_1 <= (EIF_REAL_64) 1.0);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("real_blue_in_bounds", Current);
	tb1 = '\0';
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24962, dtype))(Current)).it_r8);
	if ((EIF_BOOLEAN) ((EIF_REAL_64) 0.0 <= tr8_1)) {
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24962, dtype))(Current)).it_r8);
		tb1 = (EIF_BOOLEAN) (tr8_1 <= (EIF_REAL_64) 1.0);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("brightness_in_bounds", Current);
	tb1 = '\0';
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24963, dtype))(Current)).it_r8);
	if ((EIF_BOOLEAN) ((EIF_REAL_64) 0.0 <= tr8_1)) {
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(24963, dtype))(Current)).it_r8);
		tb1 = (EIF_BOOLEAN) (tr8_1 <= (EIF_REAL_64) 1.0);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit2322 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
