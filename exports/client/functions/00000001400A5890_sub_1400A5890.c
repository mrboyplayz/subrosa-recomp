/* Address: 0x1400a5890 | Name: sub_1400A5890 | Size: 855 bytes */
void __fastcall sub_1400A5890(float *a1)
{
  float v2; // xmm10_4
  float v3; // xmm15_4
  float v4; // xmm2_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm3_4
  float v8; // xmm12_4
  float v9; // xmm4_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  float v12; // xmm13_4
  float v13; // xmm0_4
  float v14; // xmm14_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm0_4
  float v20; // xmm9_4
  float v21; // xmm12_4
  float v22; // xmm10_4
  float v23; // xmm15_4
  float v24; // xmm10_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // [rsp+D0h] [rbp+8h]
  float v29; // [rsp+D8h] [rbp+10h]
  float v30; // [rsp+E0h] [rbp+18h]

  v2 = *(float *)&dword_140404A6C[284550403];
  v3 = *(float *)&dword_140404A6C[284550404];
  v4 = fsqrt(262144.0 - (float)(246016.0 - (float)((float)(v3 * v3) * 246016.0)))
     - (float)(*(float *)&dword_140404A6C[284550404] * 496.0);
  v5 = *(float *)&dword_140404A6C[284550403] * v4;
  v6 = *(float *)&dword_140404A6C[284550405] * v4;
  v28 = *(float *)&dword_140404A6C[284550404] * v4;
  v7 = (float)((float)(*(float *)&dword_140404A6C[284550404] * v4) * 0.375) + 496.0;
  v8 = fsqrt(
         (float)((float)((float)(v4 * *(float *)&dword_140404A6C[284550404])
                       * (float)(v4 * *(float *)&dword_140404A6C[284550404]))
               + (float)(v5 * v5))
       + (float)(v6 * v6));
  v9 = (float)((float)((float)((float)(*(float *)&dword_140404A6C[284550403] * v4) * 0.375)
                     * *(float *)&dword_140404A6C[284550403])
             + (float)(v7 * *(float *)&dword_140404A6C[284550404]))
     + (float)((float)((float)(*(float *)&dword_140404A6C[284550405] * v4) * 0.375)
             * *(float *)&dword_140404A6C[284550405]);
  v10 = (float)(fsqrt(
                  262144.0
                - (float)((float)((float)((float)((float)(v6 * v6) + (float)(v5 * v5)) * 0.140625) + (float)(v7 * v7))
                        - (float)(v9 * v9)))
              - v9)
      * 0.0390625;
  v11 = expf(-(float)(*(float *)&dword_1402B23D0 * v10));
  v12 = *(float *)&dword_1402B23D4;
  v29 = v11;
  v13 = expf(-(float)(*(float *)&dword_1402B23D4 * v10));
  v14 = *(float *)&dword_1402B23D8;
  v30 = v13;
  v15 = 0.0;
  v16 = expf(-(float)(*(float *)&dword_1402B23D8 * v10));
  if ( v8 == 0.0 )
  {
    v17 = 0.0;
    v18 = 0.0;
  }
  else
  {
    v17 = v5 * (float)(1.0 / v8);
    v15 = (float)(1.0 / v8) * v28;
    v18 = v6 * (float)(1.0 / v8);
  }
  v19 = *(float *)&dword_140404A6C[284550405] * v18;
  v20 = v8 * 0.0390625;
  v21 = v8 * 0.014648438;
  v22 = (float)(v2 * v17) + (float)(v3 * v15);
  v23 = *(float *)&dword_1402B23D0;
  v24 = (float)((float)(v22 + v19) * (float)(v22 + v19)) + 1.0;
  v25 = expf(-(float)(*(float *)&dword_1402B23D0 * v21)) * (float)((float)((float)(v20 * v29) * v24) * v23);
  *a1 = v25;
  v26 = expf(-(float)(v12 * v21)) * (float)((float)((float)(v20 * v30) * v24) * v12);
  a1[1] = v26;
  v27 = expf(-(float)(v14 * v21)) * (float)((float)((float)(v20 * v16) * v24) * v14);
  a1[2] = v27;
  if ( v25 > 1.0 )
    *a1 = 1.0;
  if ( v26 > 1.0 )
    a1[1] = 1.0;
  if ( v27 > 1.0 )
    a1[2] = 1.0;
}

