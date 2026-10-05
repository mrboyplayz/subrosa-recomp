/* Address: 0x140187410 | Name: sub_140187410 | Size: 1079 bytes */
_BOOL8 __fastcall sub_140187410(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v8; // xmm4_4
  float v9; // xmm15_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm7_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm0_4
  float v16; // xmm12_4
  float v17; // xmm13_4
  float v18; // xmm9_4
  float v19; // xmm4_4
  float v20; // xmm7_4
  float v21; // xmm14_4
  float v22; // xmm11_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm8_4
  float v27; // xmm7_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm2_4
  float v31; // xmm8_4
  float v32; // xmm11_4
  float v33; // xmm14_4
  float v34; // xmm8_4
  float v35; // xmm5_4
  float v36; // xmm2_4
  float v37; // [rsp+B0h] [rbp+8h]
  float v38; // [rsp+B8h] [rbp+10h]
  float v39; // [rsp+C0h] [rbp+18h]
  float v40; // [rsp+C8h] [rbp+20h]
  float v41; // [rsp+D0h] [rbp+28h]

  v5 = a3[1];
  v6 = a3[2];
  v8 = *a5;
  v9 = *a3;
  v10 = a5[1] - v5;
  v41 = a5[1];
  v11 = v8 - *a3;
  v40 = a5[2];
  v38 = a4[1] - v5;
  v37 = a4[2] - v6;
  v39 = *a4 - *a3;
  v12 = (float)(v10 * v37) - (float)((float)(v40 - v6) * v38);
  v13 = (float)((float)(v40 - v6) * v39) - (float)(v11 * v37);
  v14 = (float)(v11 * v38) - (float)(v10 * v39);
  v15 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
  if ( v15 == 0.0 )
  {
    v16 = 0.0;
    v17 = 0.0;
    v18 = 0.0;
  }
  else
  {
    v16 = (float)(1.0 / v15) * v12;
    v17 = (float)(1.0 / v15) * v13;
    v18 = (float)(1.0 / v15) * v14;
  }
  v19 = a2[1];
  v20 = a2[2];
  v21 = *a1;
  v22 = a1[1];
  v23 = (float)((float)((float)(v9 - *a2) * v16) + (float)((float)(v5 - v19) * v17)) + (float)((float)(v6 - v20) * v18);
  v24 = a1[2];
  v25 = (float)((float)((float)(v9 - *a1) * v16) + (float)((float)(v5 - v22) * v17)) + (float)((float)(v6 - v24) * v18);
  if ( v25 <= 0.0 )
  {
    if ( v25 < 0.0 && v23 < 0.0 )
      return 0;
  }
  else if ( v23 > 0.0 )
  {
    return 0;
  }
  v27 = v20 - v24;
  v28 = *a2 - v21;
  v29 = v19 - v22;
  v30 = (float)((float)(v28 * v16) + (float)(v29 * v17)) + (float)(v27 * v18);
  if ( v30 == 0.0 )
    return 0;
  v31 = v25 / v30;
  v32 = (float)(v31 * v28) + v21;
  v33 = (float)(v31 * v29) + a1[1];
  v34 = (float)(v31 * v27) + a1[2];
  if ( (float)((float)((float)((float)((float)((float)(v33 - v5) * v37) - (float)((float)(v34 - v6) * v38)) * v16)
                     + (float)((float)((float)((float)(v34 - v6) * v39) - (float)((float)(v32 - v9) * v37)) * v17))
             + (float)((float)((float)((float)(v32 - v9) * v38) - (float)((float)(v33 - v5) * v39)) * v18)) < 0.0 )
    return 0;
  v35 = a5[1] - a4[1];
  v36 = a5[2] - a4[2];
  return (float)((float)((float)((float)((float)((float)(v33 - a4[1]) * v36) - (float)((float)(v34 - a4[2]) * v35)) * v16)
                       + (float)((float)((float)((float)(v34 - a4[2]) * (float)(*a5 - *a4))
                                       - (float)((float)(v32 - *a4) * v36))
                               * v17))
               + (float)((float)((float)((float)(v32 - *a4) * v35) - (float)((float)(v33 - a4[1]) * (float)(*a5 - *a4)))
                       * v18)) >= 0.0
      && (float)((float)((float)((float)((float)((float)(v33 - v41) * (float)(a3[2] - v40))
                                       - (float)((float)(v34 - v40) * (float)(a3[1] - v41)))
                               * v16)
                       + (float)((float)((float)((float)(v34 - v40) * (float)(v9 - *a5))
                                       - (float)((float)(v32 - *a5) * (float)(a3[2] - v40)))
                               * v17))
               + (float)((float)((float)((float)(v32 - *a5) * (float)(a3[1] - v41))
                               - (float)((float)(v33 - v41) * (float)(v9 - *a5)))
                       * v18)) >= 0.0;
}

