/* Address: 0x1400df8c0 | Name: sub_1400DF8C0 | Size: 678 bytes */
_BOOL8 __fastcall sub_1400DF8C0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        int a9)
{
  float v12; // xmm12_4
  float v13; // xmm13_4
  float v14; // xmm11_4
  float v15; // xmm10_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm14_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm15_4
  float v24; // xmm5_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm5_4
  float v30; // xmm0_4
  float v31; // xmm2_4

  if ( a9 )
  {
    if ( !(unsigned int)sub_140077B30(a1, a2, a3, a4, a5, a6) )
      return 0;
  }
  else if ( !(unsigned int)sub_1400779F0(a1, a2, a3, a4, a5, a6) )
  {
    return 0;
  }
  v12 = a6[1];
  v13 = a6[2];
  v14 = *a6;
  v15 = a1[1];
  v16 = a1[2];
  v17 = *a1;
  if ( (float)((float)((float)((float)((float)((float)(v15 - v12) * (float)(a7[2] - v13))
                                     - (float)((float)(v16 - v13) * (float)(a7[1] - v12)))
                             * *a2)
                     + (float)((float)((float)((float)(v16 - v13) * (float)(*a7 - v14))
                                     - (float)((float)(*a1 - v14) * (float)(a7[2] - v13)))
                             * a2[1]))
             + (float)((float)((float)((float)(*a1 - v14) * (float)(a7[1] - v12))
                             - (float)((float)(v15 - v12) * (float)(*a7 - v14)))
                     * a2[2])) < 0.0 )
    return 0;
  v18 = v15 - a7[1];
  v19 = a8[2] - a7[2];
  v21 = v16 - a7[2];
  v22 = *a8 - *a7;
  v24 = a8[1] - a7[1];
  v25 = v21 * v22;
  v26 = (float)(v18 * v19) - (float)(v21 * v24);
  v27 = v17 - *a7;
  v28 = v27 * v24;
  v29 = a2[2];
  v30 = v27 * v19;
  v31 = a2[1];
  if ( (float)((float)((float)(v26 * *a2) + (float)((float)(v25 - v30) * v31))
             + (float)((float)(v28 - (float)(v18 * v22)) * v29)) < 0.0 )
    return 0;
  v20 = *a8;
  v23 = a8[1];
  return (float)((float)((float)((float)((float)((float)(v15 - v23) * (float)(v13 - a8[2]))
                                       - (float)((float)(v16 - a8[2]) * (float)(v12 - v23)))
                               * *a2)
                       + (float)((float)((float)((float)(v16 - a8[2]) * (float)(v14 - v20))
                                       - (float)((float)(v17 - v20) * (float)(v13 - a8[2])))
                               * v31))
               + (float)((float)((float)((float)(v17 - v20) * (float)(v12 - v23))
                               - (float)((float)(v15 - v23) * (float)(v14 - v20)))
                       * v29)) >= 0.0;
}

