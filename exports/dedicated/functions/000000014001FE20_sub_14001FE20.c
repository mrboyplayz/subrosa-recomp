/* Address: 0x14001fe20 | Name: sub_14001FE20 | Size: 625 bytes */
float __fastcall sub_14001FE20(float *a1, __int64 a2, __int64 a3)
{
  float v5; // xmm11_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  float v9; // xmm10_4
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  double v20; // xmm0_8
  float v22; // [rsp+20h] [rbp-C8h] BYREF
  float v23; // [rsp+24h] [rbp-C4h]
  float v24; // [rsp+28h] [rbp-C0h]
  float v25; // [rsp+2Ch] [rbp-BCh]
  __m128 v26; // [rsp+30h] [rbp-B8h] BYREF

  sub_1400A8390(&v22, a2);
  sub_1400A8390(&v26, a3);
  v5 = v26.m128_f32[3];
  v6 = v26.m128_f32[2];
  v7 = v26.m128_f32[0];
  v8 = v26.m128_f32[1];
  if ( (float)((float)((float)(v25 * v26.m128_f32[3]) + (float)(v24 * v26.m128_f32[2]))
             + (float)((float)(v22 * v26.m128_f32[0]) + (float)(v23 * v26.m128_f32[1]))) < 0.0 )
  {
    v26 = _mm_xor_ps(v26, (__m128)xmmword_1400F7F50);
    v6 = v26.m128_f32[2];
    v8 = v26.m128_f32[1];
    v7 = v26.m128_f32[0];
    v5 = _mm_shuffle_ps(v26, v26, 255).m128_f32[0];
  }
  v9 = -v8;
  v10 = -v7;
  v11 = -v6;
  v12 = (float)((float)((float)(v10 * v25) + (float)(v5 * v22)) + (float)(v9 * v24)) - (float)(v11 * v23);
  v13 = (float)((float)((float)(v5 * v23) - (float)(v10 * v24)) + (float)(v9 * v25)) + (float)(v11 * v22);
  v14 = (float)((float)((float)(v10 * v23) + (float)(v5 * v24)) - (float)(v9 * v22)) + (float)(v11 * v25);
  v15 = (float)((float)((float)(v25 * v5) - (float)(v10 * v22)) - (float)(v9 * v23)) - (float)(v11 * v24);
  v16 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
  if ( v16 == 0.0 )
  {
    v17 = 0.0;
    v18 = 0.0;
    v19 = 0.0;
  }
  else
  {
    v17 = v14 * (float)(1.0 / v16);
    v18 = v13 * (float)(1.0 / v16);
    v19 = v12 * (float)(1.0 / v16);
  }
  *a1 = v19;
  a1[1] = v18;
  a1[2] = v17;
  v20 = acos(fminf(fmaxf(v15, -1.0), 1.0));
  return v20 + v20;
}

