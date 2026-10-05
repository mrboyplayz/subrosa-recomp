/* Address: 0x140154200 | Name: sub_140154200 | Size: 442 bytes */
__int64 __fastcall sub_140154200(float *a1, float *a2, float *a3, float *a4, float a5, float *a6, float *a7)
{
  float v7; // xmm3_4
  float v8; // xmm5_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm9_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm9_4
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm0_4
  float v24; // xmm4_4

  v7 = 0.0;
  v8 = *a7 - *a6;
  v9 = a7[1] - a6[1];
  v10 = a7[2] - a6[2];
  v11 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10));
  if ( v11 == 0.0 )
  {
    v12 = 0.0;
    v13 = 0.0;
    v14 = 0.0;
  }
  else
  {
    v12 = v8 * (float)(1.0 / v11);
    v13 = v9 * (float)(1.0 / v11);
    v14 = v10 * (float)(1.0 / v11);
  }
  v15 = (float)((float)((float)(*a4 - *a6) * v12) + (float)((float)(a4[1] - a6[1]) * v13))
      + (float)((float)(a4[2] - a6[2]) * v14);
  if ( v15 <= 0.0 )
    return 0;
  if ( v15 >= v11 )
    return 0;
  v16 = (float)(v12 * v15) + *a6;
  *a1 = v16;
  v17 = (float)(v13 * v15) + a6[1];
  a1[1] = v17;
  v18 = (float)(v14 * v15) + a6[2];
  a1[2] = v18;
  v19 = *a4 - v16;
  v20 = a4[1] - v17;
  v21 = a4[2] - v18;
  v22 = fsqrt((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21));
  if ( v22 >= a5 )
    return 0;
  if ( v22 == 0.0 )
  {
    v23 = 0.0;
    v24 = 0.0;
  }
  else
  {
    v7 = (float)(1.0 / v22) * v21;
    v23 = (float)(1.0 / v22) * v20;
    v24 = (float)(1.0 / v22) * v19;
  }
  *a2 = v24;
  a2[1] = v23;
  a2[2] = v7;
  *a3 = v22;
  return 1;
}

