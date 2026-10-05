/* Address: 0x14002d820 | Name: sub_14002D820 | Size: 385 bytes */
double __fastcall sub_14002D820(float *a1, float *a2, float a3)
{
  float v3; // xmm5_4
  double v4; // xmm3_8
  float v5; // xmm4_4
  float v6; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  float v9; // xmm4_4
  float v10; // xmm10_4
  float v11; // xmm5_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  double v14; // xmm7_8
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm1_4

  v3 = a1[1];
  v4 = 0.0;
  v5 = *a1;
  v6 = a1[2];
  HIDWORD(v14) = 0;
  v7 = (float)((float)(v3 * a2[1]) + (float)(*a2 * *a1)) + (float)(v6 * a2[2]);
  v8 = *a2 * v7;
  *a1 = v8;
  v9 = v5 - v8;
  v10 = v7 * a2[1];
  v11 = v3 - v10;
  a1[1] = v10;
  v12 = v7 * a2[2];
  v13 = v6 - v12;
  a1[2] = v12;
  *(float *)&v14 = fsqrt((float)((float)(v11 * v11) + (float)(v9 * v9)) + (float)(v13 * v13));
  if ( *(float *)&v14 <= 0.0 )
    return 0.0;
  v15 = v9 * (float)(1.0 / *(float *)&v14);
  v16 = v11 * (float)(1.0 / *(float *)&v14);
  v17 = v13 * (float)(1.0 / *(float *)&v14);
  v18 = fsqrt((float)((float)(v8 * v8) + (float)(v10 * v10)) + (float)(v12 * v12));
  if ( *(float *)&v14 > (float)(v18 * a3) )
  {
    v4 = v14;
    *(float *)&v14 = v18 * a3;
    *(float *)&v4 = (float)((float)(*(float *)&v4 - (float)(v18 * a3)) * v18) * 480.0;
  }
  *a1 = (float)(v15 * *(float *)&v14) + v8;
  a1[1] = (float)(v16 * *(float *)&v14) + v10;
  a1[2] = (float)(v17 * *(float *)&v14) + v12;
  return v4;
}

