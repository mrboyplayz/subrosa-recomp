/* Address: 0x140176210 | Name: sub_140176210 | Size: 407 bytes */
float *__fastcall sub_140176210(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8)
{
  float v9; // xmm3_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm11_4
  float v14; // xmm10_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm9_4
  float v18; // xmm5_4
  float v19; // xmm11_4
  float v20; // xmm7_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm8_4
  float v26; // xmm10_4
  float v27; // xmm9_4
  float v28; // xmm2_4

  v9 = *a6 + *a3;
  v10 = *a3 - *a6;
  v11 = *a7 + *a2;
  v12 = *a2 - *a7;
  v13 = *a8 + *a1;
  v14 = *a1 - *a8;
  v15 = *a5 + *a4;
  v16 = v12 + v14;
  v17 = (float)(*a4 - *a5) + v10;
  v18 = v15 + v13;
  v19 = v13 - v15;
  v20 = (float)(v10 + v12) * 0.70710677;
  v21 = (float)(v9 + v11) + v18;
  v22 = v18 - (float)(v9 + v11);
  v23 = (float)(v17 - (float)(v12 + v14)) * 0.38268343;
  v24 = v20 + v14;
  v25 = (float)((float)(v11 - v9) + v19) * 0.70710677;
  v26 = v14 - v20;
  v27 = (float)(v17 * 0.54119611) + v23;
  v28 = (float)(v16 * 1.306563) + v23;
  *a6 = v26 + v27;
  *a4 = v26 - v27;
  *a2 = v24 + v28;
  *a8 = v24 - v28;
  *a1 = v21;
  *a3 = v25 + v19;
  *a5 = v22;
  *a7 = v19 - v25;
  return a6;
}

