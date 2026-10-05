/* Address: 0x1400df380 | Name: sub_1400DF380 | Size: 559 bytes */
__int64 __fastcall sub_1400DF380(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float a7)
{
  float v7; // xmm8_4
  float v8; // xmm7_4
  float v9; // xmm4_4
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm2_4
  float v14; // xmm8_4
  float v15; // xmm9_4
  float v16; // xmm10_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm6_4
  float v22; // xmm4_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm5_4

  v7 = *a5 - *a4;
  v8 = *a6 - *a4;
  v9 = a6[2] - a4[2];
  v10 = a5[1] - a4[1];
  v11 = a5[2] - a4[2];
  v12 = fsqrt((float)((float)(v10 * v10) + (float)(v7 * v7)) + (float)(v11 * v11));
  v13 = a6[1] - a4[1];
  if ( v12 == 0.0 )
  {
    v14 = 0.0;
    v15 = 0.0;
    v16 = 0.0;
  }
  else
  {
    v14 = v7 * (float)(1.0 / v12);
    v15 = v10 * (float)(1.0 / v12);
    v16 = v11 * (float)(1.0 / v12);
  }
  v17 = (float)((float)(v13 * v15) + (float)(v8 * v14)) + (float)(v9 * v16);
  *a3 = v17;
  if ( v17 < 0.0 )
    return 0;
  v18 = a7 * a7;
  v19 = (float)((float)(v13 * v13) + (float)(v8 * v8)) + (float)(v9 * v9);
  v20 = v19 - (float)(v17 * v17);
  if ( v20 > (float)(a7 * a7) )
    return 0;
  if ( v19 < v18 )
    return 0;
  v21 = (float)(v17 - fsqrt(v18 - v20)) / v12;
  *a3 = v21;
  if ( v21 > 1.0 )
    return 0;
  v22 = a5[2];
  v23 = a4[2];
  v24 = (float)(a5[1] - a4[1]) * v21;
  v25 = (float)((float)(*a5 - *a4) * v21) + *a4;
  *a1 = v25;
  a1[1] = v24 + a4[1];
  a1[2] = (float)((float)(v22 - v23) * v21) + a4[2];
  *a2 = v25 - *a6;
  a2[1] = a1[1] - a6[1];
  a2[2] = a1[2] - a6[2];
  sub_14007A240((__int64)a2, a2);
  return 1;
}

