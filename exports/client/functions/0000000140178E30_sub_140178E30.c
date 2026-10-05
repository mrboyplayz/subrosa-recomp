/* Address: 0x140178e30 | Name: sub_140178E30 | Size: 468 bytes */
__int64 __fastcall sub_140178E30(__int64 a1, int a2, int a3, int a4, float *a5, float *a6, float *a7, int a8)
{
  float v9; // xmm3_4
  __int64 v10; // r9
  float v11; // xmm6_4
  float v12; // xmm4_4
  __m128 v13; // xmm0
  __m128d v14; // xmm1
  int v15; // ecx
  __m128 v16; // xmm0
  int v17; // r11d
  __m128d v18; // xmm1
  int v19; // ecx
  __int64 result; // rax

  if ( a8 )
    v9 = 0.0;
  else
    v9 = -0.5;
  v10 = 5LL * a4;
  v11 = 1.0 / (float)a2;
  v12 = 1.0 / (float)a3;
  v13 = (__m128)*(unsigned int *)(a1 + 4 * v10 + 8);
  v13.m128_f32[0] = (float)(v13.m128_f32[0] + *a5) + 0.5;
  v14 = _mm_cvtps_pd(v13);
  v15 = (int)v14.m128d_f64[0];
  if ( (double)v15 != v14.m128d_f64[0] )
    v14.m128d_f64[0] = (double)(v15 - (_mm_movemask_pd(_mm_unpacklo_pd(v14, v14)) & 1));
  v16 = (__m128)*(unsigned int *)(a1 + 4 * v10 + 12);
  v17 = (int)v14.m128d_f64[0];
  v16.m128_f32[0] = (float)(v16.m128_f32[0] + *a6) + 0.5;
  v18 = _mm_cvtps_pd(v16);
  v19 = (int)v18.m128d_f64[0];
  if ( (double)v19 != v18.m128d_f64[0] )
    v18.m128d_f64[0] = (double)(v19 - (_mm_movemask_pd(_mm_unpacklo_pd(v18, v18)) & 1));
  *a7 = (float)v17 + v9;
  a7[1] = (float)(int)v18.m128d_f64[0] + v9;
  a7[4] = (float)(v17 + *(unsigned __int16 *)(a1 + 4 * v10 + 4) - *(unsigned __int16 *)(a1 + 4 * v10)) + v9;
  a7[5] = (float)((int)v18.m128d_f64[0]
                + *(unsigned __int16 *)(a1 + 4 * v10 + 6)
                - *(unsigned __int16 *)(a1 + 4 * v10 + 2))
        + v9;
  a7[2] = (float)*(unsigned __int16 *)(a1 + 4 * v10) * v11;
  a7[3] = (float)*(unsigned __int16 *)(a1 + 4 * v10 + 2) * v12;
  a7[6] = (float)*(unsigned __int16 *)(a1 + 4 * v10 + 4) * v11;
  result = *(unsigned __int16 *)(a1 + 4 * v10 + 6);
  a7[7] = (float)*(unsigned __int16 *)(a1 + 4 * v10 + 6) * v12;
  *a5 = *(float *)(a1 + 4 * v10 + 16) + *a5;
  return result;
}

