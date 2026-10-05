/* Address: 0x140191f90 | Name: sub_140191F90 | Size: 462 bytes */
__int64 __fastcall sub_140191F90(float *a1, int *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __m128d v5; // xmm4
  __m128d v6; // xmm3
  double v7; // xmm2_8
  __m128i v8; // xmm2
  __m128i v9; // xmm2
  double v10; // xmm2_8
  float v11; // xmm1_4
  __m128 v12; // xmm2
  double v13; // xmm3_8
  __int64 v14; // rax
  double v15; // xmm3_8
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  v2 = *a2;
  v4 = 1;
  v5 = (__m128d)0x3FF0000000000000uLL;
  v6 = (__m128d)0x3FF0000000000000uLL;
  if ( dword_140301DD8 != (_DWORD)v2 )
  {
    v4 = 2;
    v7 = (double)a2[1];
    v6.m128d_f64[0] = 1.0 - v7 * v7 * 0.00000002980959967779399;
    *((float *)&v18 + dword_140301DD8) = v7 * 0.0001726545674976309;
  }
  if ( dword_140301DDC != (_DWORD)v2 )
  {
    v8 = _mm_cvtsi32_si128(a2[v4++]);
    *(double *)v8.m128i_i64 = _mm_cvtepi32_pd(v8).m128d_f64[0];
    v6.m128d_f64[0] = v6.m128d_f64[0] + *(double *)v8.m128i_i64 * *(double *)v8.m128i_i64 * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DDC) = *(double *)v8.m128i_i64 * 0.0001726545674976309;
  }
  if ( dword_140301DE0 != (_DWORD)v2 )
  {
    v9 = _mm_cvtsi32_si128(a2[v4++]);
    *(double *)v9.m128i_i64 = _mm_cvtepi32_pd(v9).m128d_f64[0];
    v6.m128d_f64[0] = v6.m128d_f64[0] + *(double *)v9.m128i_i64 * *(double *)v9.m128i_i64 * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DE0) = *(double *)v9.m128i_i64 * 0.0001726545674976309;
  }
  if ( dword_140301DE4 != (_DWORD)v2 )
  {
    v10 = (double)a2[v4];
    v6.m128d_f64[0] = v6.m128d_f64[0] + v10 * v10 * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DE4) = v10 * 0.0001726545674976309;
  }
  if ( v6.m128d_f64[0] <= 0.0 )
    v11 = 0.0;
  else
    v11 = _mm_sqrt_pd(v6).m128d_f64[0];
  *((float *)&v18 + v2) = v11;
  v12 = (__m128)HIDWORD(v18);
  v12.m128_f32[0] = (float)((float)(v12.m128_f32[0] * v12.m128_f32[0])
                          + (float)(*((float *)&v18 + 2) * *((float *)&v18 + 2)))
                  + (float)((float)(*(float *)&v18 * *(float *)&v18)
                          + (float)(*((float *)&v18 + 1) * *((float *)&v18 + 1)));
  v13 = _mm_sqrt_pd(_mm_cvtps_pd(v12)).m128d_f64[0];
  if ( v13 == 0.0 )
  {
    v18 = xmmword_140279490;
  }
  else
  {
    v5.m128d_f64[0] = 1.0 / v13;
    v14 = 0;
    v15 = _mm_unpacklo_pd(v5, v5).m128d_f64[0];
    do
    {
      *(double *)((char *)&v18 + 4 * v14) = COERCE_FLOAT(*(_QWORD *)((char *)&v18 + 4 * v14)) * v15;
      v14 += 2;
    }
    while ( v14 < 4 );
  }
  sub_14011C340(a1, (float *)&v18);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v19);
}

