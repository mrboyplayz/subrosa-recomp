/* Address: 0x140077b30 | Name: sub_140077B30 | Size: 336 bytes */
__int64 __fastcall sub_140077B30(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  float v6; // xmm1_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm2_4
  float v14; // xmm7_4

  v6 = a6[2];
  v7 = (float)((float)((float)(*a6 - *a4) * *a2) + (float)((float)(a6[1] - a4[1]) * a2[1]))
     + (float)((float)(v6 - a4[2]) * a2[2]);
  v8 = (float)((float)((float)(a6[1] - a5[1]) * a2[1]) + (float)((float)(*a6 - *a5) * *a2))
     + (float)((float)(v6 - a5[2]) * a2[2]);
  if ( v7 <= 0.0 )
  {
    if ( v7 < 0.0 && v8 < 0.0 )
      return 0;
  }
  else if ( v8 > 0.0 )
  {
    return 0;
  }
  *a3 = v7;
  v10 = *a5 - *a4;
  v11 = a5[1] - a4[1];
  v12 = a5[2] - a4[2];
  v13 = (float)((float)(v11 * a2[1]) + (float)(v10 * *a2)) + (float)(v12 * a2[2]);
  if ( v13 == 0.0 )
    return 0;
  v14 = v7 / v13;
  *a3 = v14;
  *a1 = (float)(v14 * v10) + *a4;
  a1[1] = (float)(v14 * v11) + a4[1];
  a1[2] = (float)(v14 * v12) + a4[2];
  return 1;
}

