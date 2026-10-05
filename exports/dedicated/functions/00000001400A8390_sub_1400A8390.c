/* Address: 0x1400a8390 | Name: sub_1400A8390 | Size: 668 bytes */
void __fastcall sub_1400A8390(float *a1, float *a2)
{
  __m128 v2; // xmm1
  __m128 v3; // xmm2
  __m128 v4; // xmm3
  __m128 v5; // xmm4
  double v6; // xmm1_8
  float v7; // xmm0_4
  double v8; // xmm3_8
  float v9; // xmm0_4
  float v10; // xmm0_4
  double v11; // xmm1_8
  float v12; // xmm4_4
  double v13; // xmm3_8
  double v14; // xmm1_8
  float v15; // xmm0_4
  float v16; // xmm0_4
  double v17; // xmm1_8
  float v18; // xmm5_4
  double v19; // xmm4_8
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  double v23; // xmm1_8
  float v24; // xmm4_4
  double v25; // xmm3_8
  float v26; // xmm0_4
  float v27; // xmm0_4

  v2 = (__m128)*(unsigned int *)a2;
  v3 = (__m128)*((unsigned int *)a2 + 4);
  v5 = v2;
  v4 = (__m128)*((unsigned int *)a2 + 8);
  v5.m128_f32[0] = (float)(v2.m128_f32[0] + v3.m128_f32[0]) + v4.m128_f32[0];
  if ( v5.m128_f32[0] < 0.0 )
  {
    if ( v2.m128_f32[0] <= v3.m128_f32[0] || v2.m128_f32[0] <= v4.m128_f32[0] )
    {
      if ( v3.m128_f32[0] <= v4.m128_f32[0] )
      {
        v4.m128_f32[0] = fmaxf((float)(v4.m128_f32[0] - v2.m128_f32[0]) - v3.m128_f32[0], -1.0) + 1.0;
        v23 = _mm_sqrt_pd(_mm_cvtps_pd(v4)).m128d_f64[0];
        v24 = v23 + v23;
        if ( v24 <= 0.000015258789 )
          v25 = 0.0;
        else
          v25 = (float)(1.0 / v24);
        v26 = (float)(a2[3] - a2[1]) * v25;
        a1[3] = v26;
        v27 = (float)(a2[6] + a2[2]) * v25;
        *a1 = v27;
        a1[1] = (float)(a2[7] + a2[5]) * v25;
        a1[2] = v24 * 0.25;
      }
      else
      {
        v3.m128_f32[0] = fmaxf((float)(v3.m128_f32[0] - v2.m128_f32[0]) - v4.m128_f32[0], -1.0) + 1.0;
        v17 = _mm_sqrt_pd(_mm_cvtps_pd(v3)).m128d_f64[0];
        v18 = v17 + v17;
        if ( v18 <= 0.000015258789 )
          v19 = 0.0;
        else
          v19 = (float)(1.0 / v18);
        v20 = (float)(a2[2] - a2[6]) * v19;
        a1[3] = v20;
        v21 = a2[3] + a2[1];
        a1[1] = v18 * 0.25;
        v22 = v21 * v19;
        *a1 = v22;
        a1[2] = (float)(a2[7] + a2[5]) * v19;
      }
    }
    else
    {
      v2.m128_f32[0] = fmaxf((float)(v2.m128_f32[0] - v3.m128_f32[0]) - v4.m128_f32[0], -1.0) + 1.0;
      v11 = _mm_sqrt_pd(_mm_cvtps_pd(v2)).m128d_f64[0];
      v12 = v11 + v11;
      if ( v12 <= 0.000015258789 )
        v13 = 0.0;
      else
        v13 = (float)(1.0 / v12);
      v14 = (float)(a2[7] - a2[5]);
      *a1 = v12 * 0.25;
      v15 = v14 * v13;
      a1[3] = v15;
      v16 = (float)(a2[3] + a2[1]) * v13;
      a1[1] = v16;
      a1[2] = (float)(a2[6] + a2[2]) * v13;
    }
  }
  else
  {
    v5.m128_f32[0] = v5.m128_f32[0] + 1.0;
    v6 = _mm_sqrt_pd(_mm_cvtps_pd(v5)).m128d_f64[0];
    v7 = v6 + v6;
    if ( v7 <= 0.000015258789 )
      v8 = 0.0;
    else
      v8 = (float)(1.0 / v7);
    a1[3] = v7 * 0.25;
    v9 = (float)(a2[7] - a2[5]) * v8;
    *a1 = v9;
    v10 = (float)(a2[2] - a2[6]) * v8;
    a1[1] = v10;
    a1[2] = (float)(a2[3] - a2[1]) * v8;
  }
}

