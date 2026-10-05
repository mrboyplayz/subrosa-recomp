/* Address: 0x14004d9d0 | Name: sub_14004D9D0 | Size: 666 bytes */
__int64 __fastcall sub_14004D9D0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  float v7; // xmm4_4
  float v8; // xmm10_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm11_4
  float v13; // xmm4_4
  float v14; // xmm10_4
  float v15; // xmm5_4
  float v16; // xmm3_4
  float v17; // xmm6_4
  float v18; // xmm13_4
  float v19; // xmm14_4
  float v20; // xmm12_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v25; // xmm5_4
  float v26; // xmm3_4
  float v27; // xmm6_4

  v7 = a4[1];
  v8 = a4[2];
  v9 = *a5 - *a4;
  v10 = a5[1] - v7;
  v11 = a5[2] - v8;
  v12 = *a4 - *a6;
  v13 = v7 - a6[1];
  v14 = v8 - a6[2];
  v15 = *a7 - *a6;
  v16 = a7[1] - a6[1];
  v17 = a7[2] - a6[2];
  v18 = (float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17);
  v19 = (float)((float)(v13 * v16) + (float)(v12 * v15)) + (float)(v14 * v17);
  v20 = (float)((float)(v16 * v10) + (float)(v15 * v9)) + (float)(v17 * v11);
  v21 = (float)((float)((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11)) * v18) - (float)(v20 * v20);
  if ( v21 == 0.0 )
    return 0;
  v22 = (float)((float)(v20 * v19)
              - (float)((float)((float)((float)(v13 * v10) + (float)(v12 * v9)) + (float)(v14 * v11)) * v18))
      / v21;
  if ( v22 < 0.0 )
    return 0;
  if ( v22 > 1.0 )
    return 0;
  v23 = (float)((float)(v22 * v20) + v19) / v18;
  if ( v23 < 0.0 || v23 > 1.0 )
    return 0;
  *a1 = (float)(v9 * v22) + *a4;
  a1[1] = (float)(v10 * v22) + a4[1];
  a1[2] = (float)(v11 * v22) + a4[2];
  v25 = (float)(v15 * v23) + *a6;
  *a2 = v25;
  v26 = (float)(v16 * v23) + a6[1];
  a2[1] = v26;
  v27 = (float)(v17 * v23) + a6[2];
  a2[2] = v27;
  *a3 = fsqrt(
          (float)((float)((float)(v26 - a1[1]) * (float)(v26 - a1[1])) + (float)((float)(v25 - *a1) * (float)(v25 - *a1)))
        + (float)((float)(v27 - a1[2]) * (float)(v27 - a1[2])));
  return 1;
}

