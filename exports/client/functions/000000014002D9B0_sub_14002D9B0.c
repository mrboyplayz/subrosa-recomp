/* Address: 0x14002d9b0 | Name: sub_14002D9B0 | Size: 432 bytes */
double __fastcall sub_14002D9B0(float *a1, float *a2, float a3, float a4)
{
  float v4; // xmm5_4
  double v5; // xmm4_8
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm10_4
  float v11; // xmm5_4
  float v12; // xmm11_4
  float v13; // xmm6_4
  float v14; // xmm8_4
  float v15; // xmm7_4
  double v16; // xmm3_8
  float v17; // xmm5_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm1_4

  v4 = *a1;
  v5 = 0.0;
  v6 = a1[1];
  v7 = a1[2];
  HIDWORD(v16) = 0;
  v9 = (float)((float)(v6 * a2[1]) + (float)(*a2 * *a1)) + (float)(v7 * a2[2]);
  v10 = *a2 * v9;
  *a1 = v10;
  v11 = v4 - v10;
  v12 = v9 * a2[1];
  v13 = v6 - v12;
  a1[1] = v12;
  v14 = v9 * a2[2];
  v15 = v7 - v14;
  a1[2] = v14;
  *(float *)&v16 = fsqrt((float)((float)(v13 * v13) + (float)(v11 * v11)) + (float)(v15 * v15));
  if ( *(float *)&v16 <= 0.0 )
    return 0.0;
  v17 = v11 * (float)(1.0 / *(float *)&v16);
  v18 = v13 * (float)(1.0 / *(float *)&v16);
  v19 = v15 * (float)(1.0 / *(float *)&v16);
  v20 = fsqrt((float)((float)(v10 * v10) + (float)(v12 * v12)) + (float)(v14 * v14));
  if ( *(float *)&v16 > (float)(v20 * a3) )
  {
    v5 = v16;
    *(float *)&v16 = v20 * a3;
    *(float *)&v5 = (float)((float)(*(float *)&v5 - (float)(v20 * a3)) * v20) * 480.0;
  }
  if ( *(float *)&v16 > a4 )
  {
    *(float *)&v5 = *(float *)&v5 + (float)((float)((float)(*(float *)&v16 - a4) * v20) * 480.0);
    *(float *)&v16 = a4;
  }
  *a1 = (float)(v17 * *(float *)&v16) + v10;
  a1[1] = (float)(v18 * *(float *)&v16) + v12;
  a1[2] = (float)(v19 * *(float *)&v16) + v14;
  return v5;
}

