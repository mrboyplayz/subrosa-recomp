/* Address: 0x14007b4d0 | Name: sub_14007B4D0 | Size: 383 bytes */
void __fastcall sub_14007B4D0(float *a1, float *a2)
{
  __m128 v2; // xmm0
  float v4; // xmm9_4
  float v5; // xmm10_4
  float v6; // xmm12_4
  float v7; // xmm11_4
  float v8; // xmm8_4
  float v9; // xmm1_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm4_4
  float v13; // xmm5_4

  v2 = 0;
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  *(double *)v2.m128_u64 = MEMORY[0x1401F8AC0]();
  v7 = v2.m128_f32[0];
  v8 = _mm_shuffle_ps(v2, v2, 1).m128_f32[0];
  v9 = a1[2];
  v10 = (float)(a1[1] * v6) - (float)(v9 * v5);
  v2.m128_f32[0] = a1[1];
  v12 = (float)(*a1 * v5) - (float)(v2.m128_f32[0] * v4);
  v13 = (float)((float)(*a1 * v4) + (float)(v2.m128_f32[0] * v5)) + (float)(v9 * v6);
  v11 = (float)(v9 * v4) - (float)(*a1 * v6);
  *a1 = (float)((float)((float)((float)(v12 * v5) - (float)(v11 * v6)) * v8) + (float)(v13 * v4)) + (float)(v10 * v7);
  a1[1] = (float)((float)((float)((float)(v10 * v6) - (float)(v12 * v4)) * v8) + (float)(v13 * v5)) + (float)(v11 * v7);
  a1[2] = (float)((float)((float)((float)(v11 * v4) - (float)(v10 * v5)) * v8) + (float)(v13 * v6)) + (float)(v12 * v7);
}

