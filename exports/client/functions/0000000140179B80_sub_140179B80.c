/* Address: 0x140179b80 | Name: sub_140179B80 | Size: 719 bytes */
__int64 __fastcall sub_140179B80(
        __int64 a1,
        __int64 a2,
        float a3,
        int a4,
        float a5,
        float a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  float v10; // xmm3_4
  float v13; // xmm7_4
  int v14; // ebx
  __int64 result; // rax
  int v16; // edi
  int v17; // r11d
  int v18; // r8d
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // r10
  __int16 v22; // r8
  __int16 v23; // dx
  __m128 v24; // xmm0
  __m128d v25; // xmm1
  int v26; // ecx
  __m128 v27; // xmm3
  __m128 v28; // xmm0
  __m128d v29; // xmm2
  int v30; // ecx
  __m128 v31; // xmm0
  __m128d v32; // xmm1
  int v33; // ecx
  __m128d v34; // xmm1
  int v35; // ecx
  _DWORD v36[24]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v37; // [rsp+80h] [rbp-8h]

  v13 = v10;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v14 = 0;
    result = sub_140182AD0(
               a1,
               a2,
               (unsigned int)v36,
               a4,
               1,
               0,
               0,
               0,
               0,
               0,
               0,
               v36[14],
               v36[16],
               v36[18],
               v36[20],
               v36[22],
               v37);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    if ( (_DWORD)result )
    {
      v16 = v36[9];
      v17 = v36[6];
      v18 = v36[7];
      v14 = v36[8];
    }
    goto LABEL_7;
  }
  v19 = sub_14017DA60(a1, a2);
  if ( v19 >= 0 )
  {
    v20 = *(_QWORD *)(a1 + 8);
    v21 = v19;
    v22 = *(unsigned __int8 *)(v20 + v19 + 7);
    v16 = (__int16)(*(unsigned __int8 *)(v20 + v19 + 9) + (*(unsigned __int8 *)(v20 + v19 + 8) << 8));
    v23 = *(unsigned __int8 *)(v20 + v19 + 3) + (*(unsigned __int8 *)(v20 + v19 + 2) << 8);
    result = *(unsigned __int8 *)(v20 + v19 + 5);
    v17 = v23;
    v18 = (__int16)((*(unsigned __int8 *)(v20 + v21 + 6) << 8) + v22);
    v14 = (__int16)(result + (*(unsigned __int8 *)(v20 + v21 + 4) << 8));
LABEL_7:
    if ( a7 )
    {
      v24 = (__m128)COERCE_UNSIGNED_INT((float)v17);
      v24.m128_f32[0] = (float)(v24.m128_f32[0] * a3) + a5;
      v25 = _mm_cvtps_pd(v24);
      v26 = (int)v25.m128d_f64[0];
      if ( (double)v26 != v25.m128d_f64[0] )
        v25.m128d_f64[0] = (double)(v26 - (_mm_movemask_pd(_mm_unpacklo_pd(v25, v25)) & 1));
      result = (unsigned int)(int)v25.m128d_f64[0];
      *a7 = result;
    }
    v27 = (__m128)LODWORD(a6);
    if ( a8 )
    {
      v28 = (__m128)LODWORD(a6);
      v28.m128_f32[0] = a6 - (float)((float)v16 * v13);
      v29 = _mm_cvtps_pd(v28);
      v30 = (int)v29.m128d_f64[0];
      if ( (double)v30 != v29.m128d_f64[0] )
        v29.m128d_f64[0] = (double)(v30 - (_mm_movemask_pd(_mm_unpacklo_pd(v29, v29)) & 1));
      result = (unsigned int)(int)v29.m128d_f64[0];
      *a8 = result;
    }
    if ( a9 )
    {
      v31 = (__m128)COERCE_UNSIGNED_INT((float)v18);
      v31.m128_f32[0] = (float)(v31.m128_f32[0] * a3) + a5;
      v32 = _mm_cvtps_pd(v31);
      v33 = (int)v32.m128d_f64[0];
      if ( (double)v33 != v32.m128d_f64[0] )
        v32.m128d_f64[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v32, v32)) & 1) + v33);
      result = (unsigned int)(int)v32.m128d_f64[0];
      *a9 = result;
    }
    if ( a10 )
    {
      v27.m128_f32[0] = a6 - (float)((float)v14 * v13);
      v34 = _mm_cvtps_pd(v27);
      v35 = (int)v34.m128d_f64[0];
      if ( (double)v35 != v34.m128d_f64[0] )
        v34.m128d_f64[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v34, v34)) & 1) + v35);
      result = (unsigned int)(int)v34.m128d_f64[0];
      *a10 = result;
    }
    return result;
  }
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a9 )
    *a9 = 0;
  result = (__int64)a10;
  if ( a10 )
    *a10 = 0;
  return result;
}

