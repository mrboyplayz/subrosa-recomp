/* Address: 0x1400b84d0 | Name: sub_1400B84D0 | Size: 229 bytes */
void __fastcall sub_1400B84D0(float *a1, float *a2, __int64 a3)
{
  double v5; // xmm0_8
  float v6; // xmm5_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm5_4

  v5 = _libm_sse2_sincosf_(a1, a2, a3);
  v6 = *(float *)&v5;
  v7 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v5, (__m128)*(unsigned __int64 *)&v5, 1).m128_f32[0];
  v8 = 0.0;
  a1[3] = v7;
  v9 = *a2;
  v10 = fsqrt((float)((float)(v9 * v9) + (float)(a2[1] * a2[1])) + (float)(a2[2] * a2[2]));
  if ( v10 == 0.0 )
  {
    v11 = 0.0;
    v12 = 0.0;
  }
  else
  {
    v11 = v9 * (float)(1.0 / v10);
    *a1 = v11;
    v12 = (float)(1.0 / v10) * a2[1];
    a1[1] = v12;
    v8 = (float)(1.0 / v10) * a2[2];
  }
  a1[2] = v8;
  v13 = v11 * v6;
  v14 = v12 * v6;
  v15 = v6 * a1[2];
  *a1 = v13;
  a1[1] = v14;
  a1[2] = v15;
}

