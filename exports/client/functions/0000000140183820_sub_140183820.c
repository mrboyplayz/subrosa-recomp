/* Address: 0x140183820 | Name: sub_140183820 | Size: 585 bytes */
__int64 __fastcall sub_140183820(float a1, float a2, float a3, float *a4)
{
  float v5; // xmm4_4
  float v6; // xmm11_4
  float v7; // xmm3_4
  float v8; // xmm6_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  __m128 v18; // xmm0
  float v19; // xmm8_4
  float v20; // xmm6_4
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm2_4
  float v24; // xmm2_4

  v5 = a2 - (float)((float)(a1 * a1) * 0.33333334);
  v6 = a1 * -0.33333334;
  v7 = (float)(v5 * v5) * v5;
  v8 = (float)((float)((float)((float)((float)(a1 + a1) * a1) - (float)(a2 * 9.0)) * a1) * 0.037037037) + a3;
  v9 = (float)(v8 * v8) + (float)(v7 * 0.14814815);
  if ( v9 < 0.0 )
  {
    v18 = (__m128)0xC1D80000;
    v18.m128_f32[0] = -27.0 / v7;
    v19 = fsqrt(v5 * -0.33333334);
    v20 = acos(_mm_sqrt_pd(_mm_cvtps_pd(v18)).m128d_f64[0] * v8 * -0.5);
    v21 = v20 * 0.33333334;
    v22 = cosf(v21);
    *(double *)v18.m128_u64 = cos(v21 - 1.570796);
    v23 = *(double *)v18.m128_u64;
    v24 = v23 * 1.7320508;
    *a4 = (float)((float)(v19 + v19) * v22) + v6;
    a4[1] = v6 - (float)((float)(v24 + v22) * v19);
    a4[2] = v6 - (float)((float)(v22 - v24) * v19);
    return 3;
  }
  else
  {
    v10 = fsqrt(v9);
    v11 = (float)(v10 - v8) * 0.5;
    v12 = (float)((float)-v8 - v10) * 0.5;
    if ( v11 >= 0.0 )
    {
      v14 = pow(v11, 0.3333333432674408);
    }
    else
    {
      v13 = pow((float)-v11, 0.3333333432674408);
      v14 = -v13;
    }
    if ( v12 >= 0.0 )
    {
      v16 = pow(v12, 0.3333333432674408);
    }
    else
    {
      v15 = pow((float)-v12, 0.3333333432674408);
      v16 = -v15;
    }
    *a4 = (float)(v14 + v6) + v16;
    return 1;
  }
}

