/* Address: 0x1400ea1a0 | Name: sub_1400EA1A0 | Size: 515 bytes */
_UNKNOWN **__fastcall sub_1400EA1A0(float *a1, int *a2, char a3)
{
  __m128d v3; // xmm4
  char v5; // cl
  __int64 v6; // r8
  __m128d v7; // xmm3
  int v8; // eax
  __int64 v9; // rcx
  double v10; // xmm5_8
  double v11; // xmm2_8
  __m128i v12; // xmm2
  __m128i v13; // xmm2
  double v14; // xmm2_8
  float v15; // xmm1_4
  __m128 v16; // xmm2
  double v17; // xmm3_8
  __int64 v18; // rax
  double v19; // xmm3_8
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF

  v3 = (__m128d)0x3FF0000000000000uLL;
  v5 = a3 - 1;
  v6 = 1;
  v7 = (__m128d)0x3FF0000000000000uLL;
  v8 = 1 << v5;
  v9 = *a2;
  v10 = (double)v8 - 1.0;
  if ( dword_140148160 != (_DWORD)v9 )
  {
    v6 = 2;
    v11 = (double)a2[1] / v10;
    v7.m128d_f64[0] = 1.0 - v11 * v11 * 2.0;
    *((float *)&v21 + dword_140148160) = v11 * 1.414213562373095;
  }
  if ( dword_140148164 != (_DWORD)v9 )
  {
    v12 = _mm_cvtsi32_si128(a2[v6++]);
    *(double *)v12.m128i_i64 = _mm_cvtepi32_pd(v12).m128d_f64[0] / v10;
    v7.m128d_f64[0] = v7.m128d_f64[0] + *(double *)v12.m128i_i64 * *(double *)v12.m128i_i64 * -2.0;
    *((float *)&v21 + dword_140148164) = *(double *)v12.m128i_i64 * 1.414213562373095;
  }
  if ( dword_140148168 != (_DWORD)v9 )
  {
    v13 = _mm_cvtsi32_si128(a2[v6++]);
    *(double *)v13.m128i_i64 = _mm_cvtepi32_pd(v13).m128d_f64[0] / v10;
    v7.m128d_f64[0] = v7.m128d_f64[0] + *(double *)v13.m128i_i64 * *(double *)v13.m128i_i64 * -2.0;
    *((float *)&v21 + dword_140148168) = *(double *)v13.m128i_i64 * 1.414213562373095;
  }
  if ( dword_14014816C != (_DWORD)v9 )
  {
    v14 = (double)a2[v6] / v10;
    v7.m128d_f64[0] = v7.m128d_f64[0] + v14 * v14 * -2.0;
    *((float *)&v21 + dword_14014816C) = v14 * 1.414213562373095;
  }
  if ( v7.m128d_f64[0] <= 0.0 )
    v15 = 0.0;
  else
    v15 = _mm_sqrt_pd(v7).m128d_f64[0];
  *((float *)&v21 + v9) = v15;
  v16 = (__m128)HIDWORD(v21);
  v16.m128_f32[0] = (float)((float)(v16.m128_f32[0] * v16.m128_f32[0])
                          + (float)(*((float *)&v21 + 2) * *((float *)&v21 + 2)))
                  + (float)((float)(*(float *)&v21 * *(float *)&v21)
                          + (float)(*((float *)&v21 + 1) * *((float *)&v21 + 1)));
  v17 = _mm_sqrt_pd(_mm_cvtps_pd(v16)).m128d_f64[0];
  if ( v17 == 0.0 )
  {
    v21 = xmmword_1400F7D40;
  }
  else
  {
    v3.m128d_f64[0] = 1.0 / v17;
    v18 = 0;
    v19 = _mm_unpacklo_pd(v3, v3).m128d_f64[0];
    do
    {
      *(double *)((char *)&v21 + 4 * v18) = COERCE_FLOAT(*(_QWORD *)((char *)&v21 + 4 * v18)) * v19;
      v18 += 2;
    }
    while ( v18 < 4 );
  }
  return sub_1400B3D20(a1, (float *)&v21);
}

