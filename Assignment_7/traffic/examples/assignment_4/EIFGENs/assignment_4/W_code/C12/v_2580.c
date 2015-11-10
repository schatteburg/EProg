/*
 * Code for class V_HASH_TABLE [INTEGER_32, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F2580_31135(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F2580_31136(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F2580_31137(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F2580_31127(EIF_REFERENCE);
extern void F2580_31128(EIF_REFERENCE);
extern EIF_TYPED_VALUE F2580_31129(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F2580_31130(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F2580_31131(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit2580(void);
extern EIF_REFERENCE _A2580_63_2_3();
extern EIF_REFERENCE _A2580_59_2();
extern EIF_REFERENCE _A2580_57_2_3();
extern EIF_REFERENCE _A2580_64_2();
extern EIF_REFERENCE _A2580_62_2_3();
extern EIF_REFERENCE _A2580_58_2_3();

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

/* {V_HASH_TABLE}.reference_equal */
EIF_TYPED_VALUE F2580_31135 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "reference_equal";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2579, Current, 0, 2, 36245);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2579, Current, 36245);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == arg2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(arg1 == arg2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {V_HASH_TABLE}.object_equal */
EIF_TYPED_VALUE F2580_31136 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "object_equal";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2579, Current, 0, 2, 36246);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2579, Current, 36246);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (arg1 == arg2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (arg1 == arg2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {V_HASH_TABLE}.hash_code */
EIF_TYPED_VALUE F2580_31137 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hash_code";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2579, Current, 0, 1, 36247);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2579, Current, 36247);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (EIF_TRUE) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (arg1)));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition_non_void", EX_POST);
		tb1 = '\01';
		if (EIF_TRUE) {
			ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (arg1)));
			tb1 = (EIF_BOOLEAN)(Result == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("definition_void", EX_POST);
		if ((!(EIF_FALSE) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {V_HASH_TABLE}.default_create */
void F2580_31127 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,ur1);
	RTLR(7,tr6);
	RTLR(8,tr7);
	RTLR(9,tr8);
	RTLR(10,tr9);
	RTLR(11,ur2);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2579, Current, 0, 0, 36240);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2579, Current, 36240);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 24541, 0xF8000633, 0); /* key_equivalence */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {1606,870,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 2L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr3+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(10747, Dtype(tr3)))(tr3).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {1587,0,0xFFF9,2,841,870,870,0xFFFF};
		EIF_TYPE typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A2580_57_2_3, (EIF_POINTER)(0),24196, tr2, 0, 1, -1, tr1, 2);
	}
	RTAR(Current, tr4);
	*(EIF_REFERENCE *)(Current + RTWA(24541, dtype)) = (EIF_REFERENCE) RTCCL(tr4);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 24539, 0xF8000982, 0); /* key_hash */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {1606,870,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(10747, Dtype(tr3)))(tr3).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {2434,0,0xFFF9,1,841,870,870,0xFFFF};
		EIF_TYPE typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A2580_59_2, (EIF_POINTER)(0),23925, tr2, 0, 1, -1, tr1, 1);
	}
	RTAR(Current, tr4);
	*(EIF_REFERENCE *)(Current + RTWA(24539, dtype)) = (EIF_REFERENCE) RTCCL(tr4);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 24540, 0xF80009CA, 0); /* set */
	tr1 = RTLNSMART(RTWCT(24540, dtype, dftype).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {1606,870,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr4) = 2L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr4+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(10747, Dtype(tr4)))(tr4).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {1587,0,0xFFF9,2,841,0xFFF9,2,841,870,0,0,0xFFF9,2,841,870,0,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[1] = dftype;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(9706, dtype, dftype);
			typarr0[9] = l_type.annotations | 0xFF00;
			typarr0[10] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(9706, dtype, dftype);
			typarr0[15] = l_type.annotations | 0xFF00;
			typarr0[16] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A2580_62_2_3, (EIF_POINTER)(0),24543, tr3, 0, 1, -1, tr2, 2);
	}
	ur1 = RTCCL(tr5);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr6 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr6+1)->it_r = Current;
	RTAR(tr6,Current);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {1606,870,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr8 = RTLNSP2(typres0.id,0,ui4_2,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr8) = 1L;
		memset(tr8, 0, RT_SPECIAL_VISIBLE_SIZE(tr8));
	}
	*((EIF_INTEGER_32 *)tr8+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr7 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(10747, Dtype(tr8)))(tr8).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {2434,0,0xFFF9,1,841,0xFFF9,2,841,870,0,0,870,0xFFFF};
		EIF_TYPE typres0;
		typarr0[1] = dftype;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(9706, dtype, dftype);
			typarr0[9] = l_type.annotations | 0xFF00;
			typarr0[10] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr9 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A2580_64_2, (EIF_POINTER)(0),24545, tr7, 0, 1, -1, tr6, 1);
	}
	ur2 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(24446, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(24540, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
}

/* {V_HASH_TABLE}.with_object_equality */
void F2580_31128 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "with_object_equality";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,ur1);
	RTLR(7,tr6);
	RTLR(8,tr7);
	RTLR(9,tr8);
	RTLR(10,tr9);
	RTLR(11,ur2);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2579, Current, 0, 0, 36241);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(2579, Current, 36241);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 24541, 0xF8000633, 0); /* key_equivalence */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {1606,870,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 2L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr3+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(10747, Dtype(tr3)))(tr3).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {1587,0,0xFFF9,2,841,870,870,0xFFFF};
		EIF_TYPE typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A2580_58_2_3, (EIF_POINTER)(0),24197, tr2, 0, 1, -1, tr1, 2);
	}
	RTAR(Current, tr4);
	*(EIF_REFERENCE *)(Current + RTWA(24541, dtype)) = (EIF_REFERENCE) RTCCL(tr4);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 24539, 0xF8000982, 0); /* key_hash */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {1606,870,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(10747, Dtype(tr3)))(tr3).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {2434,0,0xFFF9,1,841,870,870,0xFFFF};
		EIF_TYPE typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A2580_59_2, (EIF_POINTER)(0),23925, tr2, 0, 1, -1, tr1, 1);
	}
	RTAR(Current, tr4);
	*(EIF_REFERENCE *)(Current + RTWA(24539, dtype)) = (EIF_REFERENCE) RTCCL(tr4);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 24540, 0xF80009CA, 0); /* set */
	tr1 = RTLNSMART(RTWCT(24540, dtype, dftype).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {1606,870,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr4) = 2L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr4+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(10747, Dtype(tr4)))(tr4).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {1587,0,0xFFF9,2,841,0xFFF9,2,841,870,0,0,0xFFF9,2,841,870,0,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[1] = dftype;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(9706, dtype, dftype);
			typarr0[9] = l_type.annotations | 0xFF00;
			typarr0[10] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(9706, dtype, dftype);
			typarr0[15] = l_type.annotations | 0xFF00;
			typarr0[16] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A2580_63_2_3, (EIF_POINTER)(0),24544, tr3, 0, 1, -1, tr2, 2);
	}
	ur1 = RTCCL(tr5);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr6 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr6+1)->it_r = Current;
	RTAR(tr6,Current);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {1606,870,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr8 = RTLNSP2(typres0.id,0,ui4_2,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr8) = 1L;
		memset(tr8, 0, RT_SPECIAL_VISIBLE_SIZE(tr8));
	}
	*((EIF_INTEGER_32 *)tr8+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr7 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(10747, Dtype(tr8)))(tr8).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {2434,0,0xFFF9,1,841,0xFFF9,2,841,870,0,0,870,0xFFFF};
		EIF_TYPE typres0;
		typarr0[1] = dftype;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(9706, dtype, dftype);
			typarr0[9] = l_type.annotations | 0xFF00;
			typarr0[10] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr9 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A2580_64_2, (EIF_POINTER)(0),24545, tr7, 0, 1, -1, tr6, 1);
	}
	ur2 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(24446, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(24540, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
}

/* {V_HASH_TABLE}.keys_reference_equal */
EIF_TYPED_VALUE F2580_31129 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "keys_reference_equal";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2579, Current, 0, 2, 36242);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(2579, Current, 36242);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,0,0,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(24471, Dtype(Current), Dftype(Current));
				typarr0[3] = l_type.annotations | 0xFF00;
				typarr0[4] = l_type.id;
			}
			{
				EIF_TYPE l_type;
				l_type = RTWCT(9706, Dtype(Current), Dftype(Current));
				typarr0[5] = l_type.annotations | 0xFF00;
				typarr0[6] = l_type.id;
			}
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			RTCC(arg1, 2579, l_feature_name, 1, typres0, 0x00);
		}
	}
	if (arg2) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,0,0,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(24471, Dtype(Current), Dftype(Current));
				typarr0[3] = l_type.annotations | 0xFF00;
				typarr0[4] = l_type.id;
			}
			{
				EIF_TYPE l_type;
				l_type = RTWCT(9706, Dtype(Current), Dftype(Current));
				typarr0[5] = l_type.annotations | 0xFF00;
				typarr0[6] = l_type.id;
			}
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			RTCC(arg2, 2579, l_feature_name, 2, typres0, 0x00);
		}
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = eif_integer_32_item(RTCV(arg1),1);
	ti4_2 = eif_integer_32_item(RTCV(arg2),1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {V_HASH_TABLE}.keys_object_equal */
EIF_TYPED_VALUE F2580_31130 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "keys_object_equal";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2579, Current, 0, 2, 36243);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(2579, Current, 36243);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,0,0,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(24471, Dtype(Current), Dftype(Current));
				typarr0[3] = l_type.annotations | 0xFF00;
				typarr0[4] = l_type.id;
			}
			{
				EIF_TYPE l_type;
				l_type = RTWCT(9706, Dtype(Current), Dftype(Current));
				typarr0[5] = l_type.annotations | 0xFF00;
				typarr0[6] = l_type.id;
			}
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			RTCC(arg1, 2579, l_feature_name, 1, typres0, 0x00);
		}
	}
	if (arg2) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,0,0,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(24471, Dtype(Current), Dftype(Current));
				typarr0[3] = l_type.annotations | 0xFF00;
				typarr0[4] = l_type.id;
			}
			{
				EIF_TYPE l_type;
				l_type = RTWCT(9706, Dtype(Current), Dftype(Current));
				typarr0[5] = l_type.annotations | 0xFF00;
				typarr0[6] = l_type.id;
			}
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			RTCC(arg2, 2579, l_feature_name, 2, typres0, 0x00);
		}
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = eif_integer_32_item(RTCV(arg1),1);
	ti4_2 = eif_integer_32_item(RTCV(arg2),1);
	Result = (EIF_BOOLEAN) (ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {V_HASH_TABLE}.key_hash_code */
EIF_TYPED_VALUE F2580_31131 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "key_hash_code";
	RTEX;
#define arg1 arg1x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 2579, Current, 0, 1, 36244);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(2579, Current, 36244);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,0,0,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(24471, Dtype(Current), Dftype(Current));
				typarr0[3] = l_type.annotations | 0xFF00;
				typarr0[4] = l_type.id;
			}
			{
				EIF_TYPE l_type;
				l_type = RTWCT(9706, Dtype(Current), Dftype(Current));
				typarr0[5] = l_type.annotations | 0xFF00;
				typarr0[6] = l_type.id;
			}
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			RTCC(arg1, 2579, l_feature_name, 1, typres0, 0x00);
		}
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	ti4_1 = eif_integer_32_item(RTCV(arg1),1);
	RTNHOOK(1,1);
	ti4_2 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
	Result = (EIF_INTEGER_32) ti4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

void EIF_Minit2580 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
