/* Address: 0x140078230 | Name: sub_140078230 | Size: 652 bytes */
_BOOL8 __fastcall sub_140078230(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8)
{
  float v10; // xmm12_4
  float v11; // xmm13_4
  float v12; // xmm11_4
  float v13; // xmm10_4
  float v14; // xmm8_4
  float v15; // xmm9_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm14_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  float v21; // xmm15_4
  float v22; // xmm5_4
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm6_4
  float v27; // xmm5_4
  float v28; // xmm0_4
  float v29; // xmm2_4

  if ( !(unsigned int)sub_140077B30(a1, a2, a3, a4, a5, a6) )
    return 0;
  v10 = a6[1];
  v11 = a6[2];
  v12 = *a6;
  v13 = a1[1];
  v14 = a1[2];
  v15 = *a1;
  if ( (float)((float)((float)((float)((float)((float)(v13 - v10) * (float)(a7[2] - v11))
                                     - (float)((float)(v14 - v11) * (float)(a7[1] - v10)))
                             * *a2)
                     + (float)((float)((float)((float)(v14 - v11) * (float)(*a7 - v12))
                                     - (float)((float)(*a1 - v12) * (float)(a7[2] - v11)))
                             * a2[1]))
             + (float)((float)((float)((float)(*a1 - v12) * (float)(a7[1] - v10))
                             - (float)((float)(v13 - v10) * (float)(*a7 - v12)))
                     * a2[2])) < 0.0 )
    return 0;
  v16 = v13 - a7[1];
  v17 = a8[2] - a7[2];
  v19 = v14 - a7[2];
  v20 = *a8 - *a7;
  v22 = a8[1] - a7[1];
  v23 = v19 * v20;
  v24 = (float)(v16 * v17) - (float)(v19 * v22);
  v25 = v15 - *a7;
  v26 = v25 * v22;
  v27 = a2[2];
  v28 = v25 * v17;
  v29 = a2[1];
  if ( (float)((float)((float)(v24 * *a2) + (float)((float)(v23 - v28) * v29))
             + (float)((float)(v26 - (float)(v16 * v20)) * v27)) < 0.0 )
    return 0;
  v21 = a8[1];
  v18 = *a8;
  return (float)((float)((float)((float)((float)((float)(v13 - v21) * (float)(v11 - a8[2]))
                                       - (float)((float)(v14 - a8[2]) * (float)(v10 - v21)))
                               * *a2)
                       + (float)((float)((float)((float)(v14 - a8[2]) * (float)(v12 - v18))
                                       - (float)((float)(v15 - v18) * (float)(v11 - a8[2])))
                               * v29))
               + (float)((float)((float)((float)(v15 - v18) * (float)(v10 - v21))
                               - (float)((float)(v13 - v21) * (float)(v12 - v18)))
                       * v27)) >= 0.0;
}

