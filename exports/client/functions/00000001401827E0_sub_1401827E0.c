/* Address: 0x1401827e0 | Name: sub_1401827E0 | Size: 743 bytes */
__int64 __fastcall sub_1401827E0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  float v6; // xmm2_4
  float v7; // xmm9_4
  float v8; // xmm4_4
  float v9; // xmm10_4
  unsigned int v10; // edx
  float v11; // xmm14_4
  float v12; // xmm4_4
  float v13; // xmm5_4
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v16; // xmm7_4
  float v17; // xmm4_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v22; // xmm4_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm8_4
  float v26; // xmm12_4
  float v27; // xmm11_4
  float v28; // xmm8_4

  v6 = 0.0;
  v7 = *a2;
  v8 = *a2;
  v9 = a2[1];
  v10 = 0;
  v11 = a3[1];
  v12 = (float)(v8 * v11) - (float)(*a3 * v9);
  v13 = (float)(a4[1] * v7) - (float)(*a4 * v9);
  v14 = v13 + v13;
  v15 = v13 - v12;
  v16 = (float)((float)(a5[1] * v7) - (float)(*a5 * v9)) + (float)(v12 - v14);
  v17 = v12 - (float)((float)(a1[1] * v7) - (float)(*a1 * v9));
  if ( v16 == 0.0 )
  {
    v20 = (float)(-0.5 / v15) * v17;
    if ( v20 < 0.0 || v20 > 1.0 )
      return 0;
    v10 = 1;
  }
  else
  {
    v18 = (float)(v15 * v15) - (float)(v17 * v16);
    if ( v18 <= 0.0 )
      return 0;
    v19 = fsqrt(v18);
    v6 = (float)(v15 - v19) * (float)(-1.0 / v16);
    v20 = (float)(v19 + v15) * (float)(-1.0 / v16);
    if ( v20 >= 0.0 )
      v10 = v20 <= 1.0;
    if ( v19 > 0.0 && v6 >= 0.0 && v6 <= 1.0 )
    {
      if ( !v10 )
        v20 = (float)(v15 - v19) * (float)(-1.0 / v16);
      ++v10;
    }
    if ( !v10 )
      return 0;
  }
  v22 = 1.0 / (float)((float)(v9 * v9) + (float)(v7 * v7));
  v23 = v7 * v22;
  v24 = v9 * v22;
  v25 = (float)(*a3 * v23) + (float)(v11 * v24);
  v26 = (float)((float)(*a5 * v23) + (float)(a5[1] * v24)) - v25;
  v27 = (float)((float)(*a4 * v23) + (float)(a4[1] * v24)) - v25;
  v28 = v25 - (float)((float)(*a1 * v23) + (float)(a1[1] * v24));
  a6[1] = (float)(v20 * v16) + v15;
  *a6 = (float)((float)((float)((float)(2.0 - (float)(v20 + v20)) * v20) * v27) + v28)
      + (float)((float)(v20 * v20) * v26);
  if ( v10 <= 1 )
    return 1;
  a6[3] = (float)(v6 * v16) + v15;
  a6[2] = (float)((float)((float)((float)(2.0 - (float)(v6 + v6)) * v6) * v27) + v28) + (float)((float)(v6 * v6) * v26);
  return 2;
}

