/* Address: 0x140077c80 | Name: sub_140077C80 | Size: 790 bytes */
_BOOL8 __fastcall sub_140077C80(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float *a9)
{
  float v11; // xmm12_4
  float v12; // xmm13_4
  float v13; // xmm11_4
  float v14; // xmm10_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  float v17; // xmm14_4
  float v18; // xmm15_4
  float v19; // xmm5_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  float v23; // xmm2_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  float v27; // xmm2_4

  if ( !(unsigned int)sub_1400779F0(a1, a2, a3, a4, a5, a6) )
    return 0;
  v11 = a6[1];
  v12 = a6[2];
  v13 = *a6;
  v14 = a1[1];
  v15 = a1[2];
  v16 = *a1;
  v17 = a2[1];
  v18 = *a2;
  if ( (float)((float)((float)((float)((float)((float)(v14 - v11) * (float)(a7[2] - v12))
                                     - (float)((float)(v15 - v12) * (float)(a7[1] - v11)))
                             * *a2)
                     + (float)((float)((float)((float)(v15 - v12) * (float)(*a7 - v13))
                                     - (float)((float)(*a1 - v13) * (float)(a7[2] - v12)))
                             * v17))
             + (float)((float)((float)((float)(*a1 - v13) * (float)(a7[1] - v11))
                             - (float)((float)(v14 - v11) * (float)(*a7 - v13)))
                     * a2[2])) < 0.0 )
    return 0;
  v19 = a8[1] - a7[1];
  v20 = a8[2] - a7[2];
  if ( (float)((float)((float)((float)((float)((float)(v14 - a7[1]) * v20) - (float)((float)(v15 - a7[2]) * v19)) * v18)
                     + (float)((float)((float)((float)(v15 - a7[2]) * (float)(*a8 - *a7))
                                     - (float)((float)(v16 - *a7) * v20))
                             * v17))
             + (float)((float)((float)((float)(v16 - *a7) * v19) - (float)((float)(v14 - a7[1]) * (float)(*a8 - *a7)))
                     * a2[2])) < 0.0 )
    return 0;
  v21 = v14 - a8[1];
  v22 = v16 - *a8;
  v23 = a9[2] - a8[2];
  v24 = a9[1] - a8[1];
  v25 = (float)(v21 * v23) - (float)((float)(v15 - a8[2]) * v24);
  v26 = v22 * v23;
  v27 = a2[2];
  return (float)((float)((float)(v25 * v18)
                       + (float)((float)((float)((float)(v15 - a8[2]) * (float)(*a9 - *a8)) - v26) * v17))
               + (float)((float)((float)(v22 * v24) - (float)(v21 * (float)(*a9 - *a8))) * v27)) >= 0.0
      && (float)((float)((float)((float)((float)((float)(v14 - a9[1]) * (float)(v12 - a9[2]))
                                       - (float)((float)(v15 - a9[2]) * (float)(v11 - a9[1])))
                               * v18)
                       + (float)((float)((float)((float)(v15 - a9[2]) * (float)(v13 - *a9))
                                       - (float)((float)(v16 - *a9) * (float)(v12 - a9[2])))
                               * v17))
               + (float)((float)((float)((float)(v16 - *a9) * (float)(v11 - a9[1]))
                               - (float)((float)(v14 - a9[1]) * (float)(v13 - *a9)))
                       * v27)) >= 0.0;
}

