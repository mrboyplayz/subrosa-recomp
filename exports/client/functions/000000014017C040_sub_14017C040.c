/* Address: 0x14017c040 | Name: sub_14017C040 | Size: 627 bytes */
void __fastcall sub_14017C040(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9,
        int a10)
{
  unsigned int v10; // esi
  int v15; // r9d
  int v16; // r12d
  __m128 v17; // xmm6
  float v18; // xmm8_4
  float v19; // xmm7_4
  float v20; // xmm9_4
  int v21; // ebx
  int v22; // eax
  int v23; // r10d
  int v24; // eax
  int v25; // edx
  __int64 v26; // r8
  __m128 v27; // xmm0
  __m128d v28; // xmm1
  int v29; // ecx
  int v30; // ebx
  __m128 v31; // xmm0
  __m128d v32; // xmm2
  int v33; // ecx
  int v34; // ecx
  void *v35; // rsi
  _DWORD v36[4]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+70h] [rbp-A8h]
  __int64 v38; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+80h] [rbp-98h]
  __int128 v40; // [rsp+90h] [rbp-88h]
  __int64 v41; // [rsp+A0h] [rbp-78h]
  int v42; // [rsp+A8h] [rbp-70h]
  void *Block; // [rsp+120h] [rbp+8h] BYREF

  v10 = a10;
  v16 = sub_14017B360(a1, a10, (__int64 *)&Block, a4);
  v17 = (__m128)a9;
  v18 = a8;
  v19 = a7;
  v20 = a6;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v21 = 0;
    v38 = 1;
    v41 = 0;
    v42 = 0;
    v39 = 0;
    v40 = 0;
    v22 = sub_140182AD0(a1, v10, (unsigned int)&v38, v15);
    v23 = 0;
    if ( v22 )
    {
      v23 = HIDWORD(v40);
      v21 = v40;
    }
  }
  else
  {
    v24 = sub_14017DA60(a1, v10);
    if ( v24 < 0 )
    {
      v30 = 0;
      v34 = 0;
      goto LABEL_15;
    }
    v26 = *(_QWORD *)(a1 + 8);
    v23 = (__int16)(*(unsigned __int8 *)(v26 + v24 + 9) + (*(unsigned __int8 *)(v26 + v24 + 8) << 8));
    v21 = (__int16)(*(unsigned __int8 *)(v26 + v24 + 3) + (*(unsigned __int8 *)(v26 + v24 + 2) << 8));
  }
  v25 = 0;
  v27 = (__m128)COERCE_UNSIGNED_INT((float)v21);
  v27.m128_f32[0] = (float)(v27.m128_f32[0] * v20) + v18;
  v28 = _mm_cvtps_pd(v27);
  v29 = (int)v28.m128d_f64[0];
  if ( (double)v29 != v28.m128d_f64[0] )
    v28.m128d_f64[0] = (double)(v29 - (_mm_movemask_pd(_mm_unpacklo_pd(v28, v28)) & 1));
  v30 = (int)v28.m128d_f64[0];
  v31 = v17;
  v31.m128_f32[0] = v17.m128_f32[0] - (float)((float)v23 * v19);
  v32 = _mm_cvtps_pd(v31);
  v33 = (int)v32.m128d_f64[0];
  if ( (double)v33 != v32.m128d_f64[0] )
    v32.m128d_f64[0] = (double)(v33 - (_mm_movemask_pd(_mm_unpacklo_pd(v32, v32)) & 1));
  v34 = (int)v32.m128d_f64[0];
LABEL_15:
  v35 = Block;
  v37 = a2;
  v36[0] = a3;
  v36[2] = a5;
  v36[1] = a4;
  if ( a3 && a4 )
    sub_14017D510(
      (unsigned int)v36,
      v25,
      (_DWORD)Block,
      v16,
      LODWORD(v20),
      LODWORD(v19),
      LODWORD(v18),
      v17.m128_i32[0],
      v30,
      v34,
      1,
      *(_QWORD *)a1);
  free(v35);
}

