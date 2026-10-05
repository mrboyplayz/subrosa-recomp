/* Address: 0x1400779f0 | Name: sub_1400779F0 | Size: 316 bytes */
__int64 __fastcall sub_1400779F0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  float v6; // xmm6_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm2_4
  float v12; // xmm3_4

  v6 = a2[1];
  if ( (float)((float)((float)((float)(a6[1] - a5[1]) * v6) + (float)((float)(*a6 - *a5) * *a2))
             + (float)((float)(a6[2] - a5[2]) * a2[2])) < 0.0 )
    return 0;
  v7 = (float)((float)((float)(*a6 - *a4) * *a2) + (float)((float)(a6[1] - a4[1]) * v6))
     + (float)((float)(a6[2] - a4[2]) * a2[2]);
  if ( v7 > 0.0 )
    return 0;
  *a3 = v7;
  v8 = *a5 - *a4;
  v9 = a5[1] - a4[1];
  v10 = a5[2] - a4[2];
  v11 = (float)((float)(v9 * a2[1]) + (float)(v8 * *a2)) + (float)(v10 * a2[2]);
  if ( v11 == 0.0 )
    return 0;
  v12 = v7 / v11;
  *a3 = v12;
  *a1 = (float)(v12 * v8) + *a4;
  a1[1] = (float)(v12 * v9) + a4[1];
  a1[2] = (float)(v12 * v10) + a4[2];
  return 1;
}

