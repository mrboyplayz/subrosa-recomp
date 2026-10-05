/* Address: 0x14007d360 | Name: sub_14007D360 | Size: 707 bytes */
_BOOL8 __fastcall sub_14007D360(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float a8)
{
  float v8; // xmm4_4
  float v9; // xmm12_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm12_4
  float v13; // xmm10_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  float v16; // xmm7_4
  float v17; // xmm14_4
  float v18; // xmm13_4
  float v19; // xmm1_4
  float v20; // xmm11_4
  float v21; // xmm12_4
  float v22; // xmm4_4
  float v23; // xmm15_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm6_4
  float v28; // xmm5_4
  float v29; // xmm7_4
  float v30; // xmm1_4

  v8 = a4[2];
  v9 = a4[1];
  v10 = *a5 - *a4;
  v11 = a5[1] - v9;
  v12 = v9 - a6[1];
  v13 = a5[2] - v8;
  v14 = *a7 - *a6;
  v15 = a7[1] - a6[1];
  v16 = a7[2] - a6[2];
  v17 = (float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v13 * v13);
  v18 = (float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16);
  v19 = v8 - a6[2];
  v20 = (float)((float)(v12 * v11) + (float)((float)(*a4 - *a6) * v10)) + (float)(v19 * v13);
  v21 = (float)((float)(v12 * v15) + (float)((float)(*a4 - *a6) * v14)) + (float)(v19 * v16);
  v22 = (float)((float)(v15 * v11) + (float)(v14 * v10)) + (float)(v16 * v13);
  v23 = (float)(v18 * v17) - (float)(v22 * v22);
  if ( v23 == 0.0 )
    v24 = 0.0;
  else
    v24 = fminf(fmaxf((float)((float)(v22 * v21) - (float)(v20 * v18)) / v23, 0.0), 1.0);
  v25 = (float)((float)(v24 * v22) + v21) / v18;
  if ( v25 < 0.0 )
  {
    v25 = 0.0;
    v26 = -(float)(v20 / v17);
LABEL_8:
    v24 = fminf(fmaxf(v26, 0.0), 1.0);
    goto LABEL_9;
  }
  if ( v25 > 1.0 )
  {
    v25 = 1.0;
    v26 = (float)(v22 - v20) / v17;
    goto LABEL_8;
  }
LABEL_9:
  *a1 = (float)(v10 * v24) + *a4;
  a1[1] = (float)(v11 * v24) + a4[1];
  a1[2] = (float)(v13 * v24) + a4[2];
  v27 = (float)(v14 * v25) + *a6;
  *a2 = v27;
  v28 = (float)(v15 * v25) + a6[1];
  a2[1] = v28;
  v29 = (float)(v16 * v25) + a6[2];
  a2[2] = v29;
  v30 = fsqrt(
          (float)((float)((float)(v28 - a1[1]) * (float)(v28 - a1[1])) + (float)((float)(v27 - *a1) * (float)(v27 - *a1)))
        + (float)((float)(v29 - a1[2]) * (float)(v29 - a1[2])));
  *a3 = v30;
  return a8 > v30;
}

