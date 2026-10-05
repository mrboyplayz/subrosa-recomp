/* Address: 0x14012bd30 | Name: sub_14012BD30 | Size: 971 bytes */
void __fastcall sub_14012BD30(__int64 a1, float *a2)
{
  __m128 v2; // xmm0
  float v5; // xmm8_4
  float v6; // xmm12_4
  float v7; // xmm10_4
  float v8; // xmm9_4
  float v9; // xmm2_4
  float v10; // xmm11_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm6_4
  float v18; // xmm2_4
  float v19; // xmm6_4
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm3_4
  float v24; // xmm6_4
  float v25; // xmm5_4
  float v26; // xmm4_4
  float v27; // xmm3_4

  v2 = 0;
  *(double *)v2.m128_u64 = MEMORY[0x1401F8AC0](a1);
  v5 = a2[2];
  v6 = v2.m128_f32[0];
  v7 = a2[1];
  v8 = *a2;
  v9 = *(float *)(a1 + 8);
  v10 = _mm_shuffle_ps(v2, v2, 1).m128_f32[0];
  v11 = (float)(v9 * *a2) - (float)(*(float *)a1 * v5);
  v12 = (float)((float)(*(float *)(a1 + 4) * v7) + (float)(*(float *)a1 * *a2)) + (float)(v9 * v5);
  v13 = (float)((float)(*(float *)a1 * v7) - (float)(*(float *)(a1 + 4) * *a2)) * v2.m128_f32[0];
  v14 = (float)((float)((float)((float)((float)((float)(*(float *)a1 * v7) - (float)(*(float *)(a1 + 4) * *a2)) * v7)
                              - (float)(v11 * v5))
                      * v10)
              + (float)(*a2 * v12))
      + (float)((float)((float)(*(float *)(a1 + 4) * v5) - (float)(v9 * v7)) * v2.m128_f32[0]);
  v15 = v11;
  v16 = (float)((float)((float)((float)(*(float *)(a1 + 4) * v5) - (float)(*(float *)(a1 + 8) * v7)) * v5)
              - (float)((float)((float)(*(float *)a1 * v7) - (float)(*(float *)(a1 + 4) * *a2)) * *a2))
      * v10;
  v17 = (float)(v11 * *a2) - (float)((float)((float)(*(float *)(a1 + 4) * v5) - (float)(*(float *)(a1 + 8) * v7)) * v7);
  *(float *)a1 = v14;
  *(float *)(a1 + 4) = (float)(v16 + (float)(v7 * v12)) + (float)(v15 * v2.m128_f32[0]);
  *(float *)(a1 + 8) = (float)((float)(v17 * v10) + (float)(v5 * v12)) + v13;
  v18 = *(float *)(a1 + 20);
  v19 = (float)(*(float *)(a1 + 16) * v5) - (float)(v18 * v7);
  v2.m128_i32[0] = *(_DWORD *)(a1 + 12);
  v20 = (float)(v18 * v8) - (float)(v2.m128_f32[0] * v5);
  v21 = (float)(v2.m128_f32[0] * v7) - (float)(*(float *)(a1 + 16) * v8);
  v22 = (float)((float)(v2.m128_f32[0] * v8) + (float)(*(float *)(a1 + 16) * v7)) + (float)(v18 * v5);
  *(float *)(a1 + 12) = v8 * v22;
  *(float *)(a1 + 16) = v7 * v22;
  *(float *)(a1 + 20) = v5 * v22;
  *(float *)(a1 + 12) = (float)((float)((float)(v21 * v7) - (float)(v20 * v5)) * v10) + *(float *)(a1 + 12);
  *(float *)(a1 + 16) = (float)((float)((float)(v19 * v5) - (float)(v21 * v8)) * v10) + *(float *)(a1 + 16);
  *(float *)(a1 + 20) = (float)((float)((float)(v20 * v8) - (float)(v19 * v7)) * v10) + *(float *)(a1 + 20);
  *(float *)(a1 + 12) = (float)(v19 * v6) + *(float *)(a1 + 12);
  *(float *)(a1 + 16) = (float)(v20 * v6) + *(float *)(a1 + 16);
  *(float *)(a1 + 20) = (float)(v21 * v6) + *(float *)(a1 + 20);
  v23 = *(float *)(a1 + 24);
  v24 = (float)(*(float *)(a1 + 28) * v5) - (float)(*(float *)(a1 + 32) * v7);
  v25 = (float)(*(float *)(a1 + 32) * v8) - (float)(v23 * v5);
  v26 = (float)(v23 * v7) - (float)(*(float *)(a1 + 28) * v8);
  v27 = (float)((float)(v23 * v8) + (float)(*(float *)(a1 + 28) * v7)) + (float)(*(float *)(a1 + 32) * v5);
  *(float *)(a1 + 24) = v8 * v27;
  *(float *)(a1 + 28) = v7 * v27;
  *(float *)(a1 + 32) = v5 * v27;
  *(float *)(a1 + 24) = (float)((float)((float)(v26 * v7) - (float)(v25 * v5)) * v10) + *(float *)(a1 + 24);
  *(float *)(a1 + 28) = (float)((float)((float)(v24 * v5) - (float)(v26 * v8)) * v10) + *(float *)(a1 + 28);
  *(float *)(a1 + 32) = (float)((float)((float)(v25 * v8) - (float)(v24 * v7)) * v10) + *(float *)(a1 + 32);
  *(float *)(a1 + 24) = (float)(v24 * v6) + *(float *)(a1 + 24);
  *(float *)(a1 + 28) = (float)(v25 * v6) + *(float *)(a1 + 28);
  *(float *)(a1 + 32) = (float)(v26 * v6) + *(float *)(a1 + 32);
}

