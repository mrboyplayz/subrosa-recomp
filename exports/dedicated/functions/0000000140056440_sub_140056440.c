/* Address: 0x140056440 | Name: sub_140056440 | Size: 665 bytes */
void __fastcall sub_140056440(float *a1, __int64 a2, __int64 a3)
{
  float v5; // xmm11_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  float v9; // xmm10_4
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm5_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  double v20; // xmm0_8
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // [rsp+20h] [rbp-C8h] BYREF
  float v25; // [rsp+24h] [rbp-C4h]
  float v26; // [rsp+28h] [rbp-C0h]
  float v27; // [rsp+2Ch] [rbp-BCh]
  __m128 v28; // [rsp+30h] [rbp-B8h] BYREF

  sub_1400A8390(&v24, a3);
  sub_1400A8390(&v28, a2);
  v5 = v28.m128_f32[3];
  v6 = v28.m128_f32[2];
  v7 = v28.m128_f32[0];
  v8 = v28.m128_f32[1];
  if ( (float)((float)((float)(v27 * v28.m128_f32[3]) + (float)(v26 * v28.m128_f32[2]))
             + (float)((float)(v24 * v28.m128_f32[0]) + (float)(v25 * v28.m128_f32[1]))) < 0.0 )
  {
    v28 = _mm_xor_ps(v28, (__m128)xmmword_1400F7F50);
    v6 = v28.m128_f32[2];
    v8 = v28.m128_f32[1];
    v7 = v28.m128_f32[0];
    v5 = _mm_shuffle_ps(v28, v28, 255).m128_f32[0];
  }
  v9 = -v8;
  v10 = -v7;
  v11 = -v6;
  v12 = (float)((float)((float)(v10 * v27) + (float)(v5 * v24)) + (float)(v9 * v26)) - (float)(v11 * v25);
  v13 = (float)((float)((float)(v5 * v25) - (float)(v10 * v26)) + (float)(v9 * v27)) + (float)(v11 * v24);
  v14 = (float)((float)((float)(v10 * v25) + (float)(v5 * v26)) - (float)(v9 * v24)) + (float)(v11 * v27);
  v15 = (float)((float)((float)(v27 * v5) - (float)(v10 * v24)) - (float)(v9 * v25)) - (float)(v11 * v26);
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
  v21 = v20 + v20;
  *(float *)&v20 = v21 * *a1;
  v22 = v21 * a1[1];
  v23 = v21 * a1[2];
  *a1 = *(float *)&v20;
  a1[1] = v22;
  a1[2] = v23;
}

