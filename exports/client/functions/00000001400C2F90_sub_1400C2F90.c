/* Address: 0x1400c2f90 | Name: sub_1400C2F90 | Size: 332 bytes */
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_1400C2F90(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __m128 v5; // xmm6
  __m128 v7; // xmm1
  __m128 v8; // xmm2
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  __m128d v14; // xmm0
  double v15; // xmm2_8
  __m128d v16; // xmm3
  __int64 v17; // rax
  double v18; // xmm3_8
  __m128 v20; // [rsp+20h] [rbp-48h] BYREF
  __int128 v21; // [rsp+38h] [rbp-30h] BYREF

  v5 = _mm_shuffle_ps(*(__m128 *)&a4, *(__m128 *)&a4, 0);
  sub_14010E370(&v21, a2);
  sub_14010E370(&v20, a3);
  v7 = v20;
  if ( (float)((float)((float)(*((float *)&v21 + 3) * v20.m128_f32[3]) + (float)(*((float *)&v21 + 2) * v20.m128_f32[2]))
             + (float)((float)(*(float *)&v21 * v20.m128_f32[0]) + (float)(*((float *)&v21 + 1) * v20.m128_f32[1]))) < 0.0 )
    v7 = _mm_xor_ps(v20, (__m128)xmmword_140279870);
  v8 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_140279700, v5), (__m128)v21), _mm_mul_ps(v5, v7));
  v9 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
  v10 = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
  v21 = (__int128)v8;
  v11 = (float)(v10 * v10) + (float)(v9 * v9);
  v12 = v8.m128_f32[0] * v8.m128_f32[0];
  v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
  v13 = v11 + (float)(v12 + (float)(v8.m128_f32[0] * v8.m128_f32[0]));
  v14 = 0;
  v14.m128d_f64[0] = v13;
  v15 = _mm_sqrt_pd(v14).m128d_f64[0];
  if ( v15 == 0.0 )
  {
    v21 = xmmword_140279490;
  }
  else
  {
    v16 = (__m128d)0x3FF0000000000000uLL;
    v17 = 0;
    v16.m128d_f64[0] = 1.0 / v15;
    v18 = _mm_unpacklo_pd(v16, v16).m128d_f64[0];
    do
    {
      *(double *)((char *)&v21 + 4 * v17) = COERCE_FLOAT(*(_QWORD *)((char *)&v21 + 4 * v17)) * v18;
      v17 += 2;
    }
    while ( v17 < 4 );
  }
  return sub_14011C340(a1, &v21);
}

