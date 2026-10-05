/* Address: 0x140049e50 | Name: sub_140049E50 | Size: 383 bytes */
void __fastcall sub_140049E50(float *a1, float *a2, __int64 a3)
{
  __m128 v3; // xmm0
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm12_4
  float v8; // xmm11_4
  float v9; // xmm8_4
  float v10; // xmm1_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm4_4
  float v14; // xmm5_4

  v3 = 0;
  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  *(double *)v3.m128_u64 = _libm_sse2_sincosf_(a1, a2, a3);
  v8 = v3.m128_f32[0];
  v9 = _mm_shuffle_ps(v3, v3, 1).m128_f32[0];
  v10 = a1[2];
  v11 = (float)(a1[1] * v7) - (float)(v10 * v6);
  v3.m128_f32[0] = a1[1];
  v13 = (float)(*a1 * v6) - (float)(v3.m128_f32[0] * v5);
  v14 = (float)((float)(*a1 * v5) + (float)(v3.m128_f32[0] * v6)) + (float)(v10 * v7);
  v12 = (float)(v10 * v5) - (float)(*a1 * v7);
  *a1 = (float)((float)((float)((float)(v13 * v6) - (float)(v12 * v7)) * v9) + (float)(v14 * v5)) + (float)(v11 * v8);
  a1[1] = (float)((float)((float)((float)(v11 * v7) - (float)(v13 * v5)) * v9) + (float)(v14 * v6)) + (float)(v12 * v8);
  a1[2] = (float)((float)((float)((float)(v12 * v5) - (float)(v11 * v6)) * v9) + (float)(v14 * v7)) + (float)(v13 * v8);
}

