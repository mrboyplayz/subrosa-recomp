/* Address: 0x140158610 | Name: sub_140158610 | Size: 328 bytes */
__int64 __fastcall sub_140158610(float *a1, float *a2, float *a3, float *a4, float a5, float *a6, float *a7, float *a8)
{
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm2_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v17; // xmm0_4
  float v18[4]; // [rsp+40h] [rbp-28h] BYREF

  v11 = a2[1];
  v12 = a2[2];
  v13 = (float)((float)((float)(a4[1] - a6[1]) * v11) + (float)((float)(*a4 - *a6) * *a2))
      + (float)((float)(a4[2] - a6[2]) * v12);
  if ( v13 > a5 )
    return 0;
  if ( v13 < 0.0 )
    return 0;
  v14 = (float)(v11 * (float)-a5) + a4[1];
  v15 = (float)(v12 * (float)-a5) + a4[2];
  v18[0] = (float)(*a2 * (float)-a5) + *a4;
  v18[1] = v14;
  v18[2] = v15;
  if ( !sub_140077FA0(a1, a2, &a5, a4, v18, a6, a7, a8) )
    return 0;
  v17 = a1[2] - a4[2];
  *a3 = fsqrt(
          (float)((float)((float)(a1[1] - a4[1]) * (float)(a1[1] - a4[1]))
                + (float)((float)(*a1 - *a4) * (float)(*a1 - *a4)))
        + (float)(v17 * v17));
  return 1;
}

