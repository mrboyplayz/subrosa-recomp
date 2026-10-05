/* Address: 0x140192160 | Name: sub_140192160 | Size: 515 bytes */
__int64 __fastcall sub_140192160(float *a1, int *a2, char a3)
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
  __int64 v21; // [rsp+0h] [rbp-58h] BYREF
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+30h] [rbp-28h]

  v3 = (__m128d)0x3FF0000000000000uLL;
  v5 = a3 - 1;
  v6 = 1;
  v7 = (__m128d)0x3FF0000000000000uLL;
  v8 = 1 << v5;
  v9 = *a2;
  v10 = (double)v8 - 1.0;
  if ( dword_140301DF8 != (_DWORD)v9 )
  {
    v6 = 2;
    v11 = (double)a2[1] / v10;
    v7.m128d_f64[0] = 1.0 - v11 * v11 * 2.0;
    *((float *)&v22 + dword_140301DF8) = v11 * 1.414213562373095;
  }
  if ( dword_140301DFC != (_DWORD)v9 )
  {
    v12 = _mm_cvtsi32_si128(a2[v6++]);
    *(double *)v12.m128i_i64 = _mm_cvtepi32_pd(v12).m128d_f64[0] / v10;
    v7.m128d_f64[0] = v7.m128d_f64[0] + *(double *)v12.m128i_i64 * *(double *)v12.m128i_i64 * -2.0;
    *((float *)&v22 + dword_140301DFC) = *(double *)v12.m128i_i64 * 1.414213562373095;
  }
  if ( dword_140301E00 != (_DWORD)v9 )
  {
    v13 = _mm_cvtsi32_si128(a2[v6++]);
    *(double *)v13.m128i_i64 = _mm_cvtepi32_pd(v13).m128d_f64[0] / v10;
    v7.m128d_f64[0] = v7.m128d_f64[0] + *(double *)v13.m128i_i64 * *(double *)v13.m128i_i64 * -2.0;
    *((float *)&v22 + dword_140301E00) = *(double *)v13.m128i_i64 * 1.414213562373095;
  }
  if ( dword_140301E04 != (_DWORD)v9 )
  {
    v14 = (double)a2[v6] / v10;
    v7.m128d_f64[0] = v7.m128d_f64[0] + v14 * v14 * -2.0;
    *((float *)&v22 + dword_140301E04) = v14 * 1.414213562373095;
  }
  if ( v7.m128d_f64[0] <= 0.0 )
    v15 = 0.0;
  else
    v15 = _mm_sqrt_pd(v7).m128d_f64[0];
  *((float *)&v22 + v9) = v15;
  v16 = (__m128)HIDWORD(v22);
  v16.m128_f32[0] = (float)((float)(v16.m128_f32[0] * v16.m128_f32[0])
                          + (float)(*((float *)&v22 + 2) * *((float *)&v22 + 2)))
                  + (float)((float)(*(float *)&v22 * *(float *)&v22)
                          + (float)(*((float *)&v22 + 1) * *((float *)&v22 + 1)));
  v17 = _mm_sqrt_pd(_mm_cvtps_pd(v16)).m128d_f64[0];
  if ( v17 == 0.0 )
  {
    v22 = xmmword_140279490;
  }
  else
  {
    v3.m128d_f64[0] = 1.0 / v17;
    v18 = 0;
    v19 = _mm_unpacklo_pd(v3, v3).m128d_f64[0];
    do
    {
      *(double *)((char *)&v22 + 4 * v18) = COERCE_FLOAT(*(_QWORD *)((char *)&v22 + 4 * v18)) * v19;
      v18 += 2;
    }
    while ( v18 < 4 );
  }
  sub_14011C340(a1, (float *)&v22);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v21 ^ v23);
}

