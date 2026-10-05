/* Address: 0x1400a5d30 | Name: sub_1400A5D30 | Size: 1705 bytes */
void sub_1400A5D30()
{
  float v0; // xmm2_4
  float v1; // xmm3_4
  float v2; // xmm3_4
  float v3; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm5_4
  float v6; // xmm15_4
  float v7; // xmm1_4
  float v8; // xmm12_4
  float v9; // xmm13_4
  float v10; // xmm14_4
  float v11; // xmm7_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm7_4
  float v16; // xmm11_4
  float v17; // xmm7_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  float v22; // xmm8_4
  float v23; // xmm7_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // [rsp+D0h] [rbp+8h]
  float v28; // [rsp+D8h] [rbp+10h]
  float v29; // [rsp+E0h] [rbp+18h]
  float v30; // [rsp+E8h] [rbp+20h]

  v0 = fsqrt(
         262144.0
       - (float)(246016.0
               - (float)((float)(*(float *)&dword_140404A6C[284550404] * *(float *)&dword_140404A6C[284550404])
                       * 246016.0)))
     - (float)(*(float *)&dword_140404A6C[284550404] * 496.0);
  v30 = fsqrt(
          (float)((float)((float)(*(float *)&dword_140404A6C[284550404] * v0)
                        * (float)(*(float *)&dword_140404A6C[284550404] * v0))
                + (float)((float)(*(float *)&dword_140404A6C[284550403] * v0)
                        * (float)(*(float *)&dword_140404A6C[284550403] * v0)))
        + (float)((float)(*(float *)&dword_140404A6C[284550405] * v0)
                * (float)(*(float *)&dword_140404A6C[284550405] * v0)))
      * 0.029296875;
  v1 = fsqrt(
         262144.0
       - (float)(246016.0 - (float)((float)(*(float *)&dword_1402F618C * *(float *)&dword_1402F618C) * 246016.0)))
     - (float)(*(float *)&dword_1402F618C * 496.0);
  v27 = fsqrt(
          (float)((float)((float)((float)((float)(v1 * v1) * *(float *)&dword_1402F618C) * *(float *)&dword_1402F618C)
                        + (float)((float)(v1 * *(float *)&dword_1402F6190) * (float)(v1 * *(float *)&dword_1402F6190)))
                * 0.09765625)
        + (float)((float)((float)(v1 * 0.09765625) * v1)
                * (float)(*(float *)&dword_1402F6188 * *(float *)&dword_1402F6188)))
      * 0.029296875;
  v2 = fsqrt(
         262144.0
       - (float)(246016.0 - (float)((float)(*(float *)&dword_1402F617C * *(float *)&dword_1402F617C) * 246016.0)))
     - (float)(*(float *)&dword_1402F617C * 496.0);
  v28 = fsqrt(
          (float)((float)((float)((float)((float)(v2 * v2) * *(float *)&dword_1402F617C) * *(float *)&dword_1402F617C)
                        + (float)((float)(v2 * *(float *)&dword_1402F6180) * (float)(v2 * *(float *)&dword_1402F6180)))
                * 0.09765625)
        + (float)((float)((float)(v2 * 0.09765625) * v2)
                * (float)(*(float *)&dword_1402F6178 * *(float *)&dword_1402F6178)))
      * 0.029296875;
  v3 = fsqrt(
         262144.0
       - (float)(246016.0
               - (float)((float)((float)-*(float *)&dword_1402F617C * (float)-*(float *)&dword_1402F617C) * 246016.0)))
     - (float)((float)-*(float *)&dword_1402F617C * 496.0);
  v29 = fsqrt(
          (float)((float)((float)((float)(v3 * 0.09765625) * (float)-*(float *)&dword_1402F617C)
                        * (float)(v3 * (float)-*(float *)&dword_1402F617C))
                + (float)((float)((float)(v3 * 0.09765625) * v3)
                        * (float)((float)-*(float *)&dword_1402F6178 * (float)-*(float *)&dword_1402F6178)))
        + (float)((float)((float)(v3 * 0.09765625) * v3)
                * (float)((float)-*(float *)&dword_1402F6180 * (float)-*(float *)&dword_1402F6180)))
      * 0.029296875;
  v4 = fsqrt(
         262144.0
       - (float)(246016.0 - (float)((float)(*(float *)&dword_1402F619C * *(float *)&dword_1402F619C) * 246016.0)))
     - (float)(*(float *)&dword_1402F619C * 496.0);
  v5 = -*(float *)&dword_1402F619C;
  v6 = fsqrt(
         (float)((float)((float)((float)((float)(v4 * v4) * *(float *)&dword_1402F619C) * *(float *)&dword_1402F619C)
                       + (float)((float)(v4 * *(float *)&dword_1402F61A0) * (float)(v4 * *(float *)&dword_1402F61A0)))
               * 0.09765625)
       + (float)((float)((float)(v4 * 0.09765625) * v4)
               * (float)(*(float *)&dword_1402F6198 * *(float *)&dword_1402F6198)))
     * 0.029296875;
  v7 = fsqrt(262144.0 - (float)(246016.0 - (float)((float)(v5 * v5) * 246016.0))) - (float)(v5 * 496.0);
  v8 = fsqrt(
         (float)((float)((float)((float)(v7 * 0.09765625) * v7)
                       * (float)((float)-*(float *)&dword_1402F6198 * (float)-*(float *)&dword_1402F6198))
               + (float)((float)((float)(v5 * v5) * 0.09765625) * (float)(v7 * v7)))
       + (float)((float)((float)(v7 * 0.09765625) * v7)
               * (float)((float)-*(float *)&dword_1402F61A0 * (float)-*(float *)&dword_1402F61A0)))
     * 0.029296875;
  v9 = *(float *)&dword_1402B23D0;
  v10 = 1.0
      - (float)((float)((float)(1.0 - *(float *)&dword_140404A6C[284550404])
                      * (float)(1.0 - *(float *)&dword_140404A6C[284550404]))
              * (float)((float)(1.0 - *(float *)&dword_140404A6C[284550404])
                      * (float)(1.0 - *(float *)&dword_140404A6C[284550404])));
  v11 = expf(-(float)(v28 * *(float *)&dword_1402B23D0));
  v12 = v11 + expf(-(float)(v29 * v9));
  v13 = expf(-(float)(v6 * v9));
  v14 = (float)(v12 + (float)(v13 + expf(-(float)(v8 * v9)))) * 0.5;
  v15 = v14 + (float)(expf(-(float)(v9 * v27)) * 0.75);
  v16 = *(float *)&dword_1402B23D4;
  *(float *)&dword_140404A6C[284545205] = (float)(v15 * v10) * 0.75;
  v17 = expf(-(float)(v28 * *(float *)&dword_1402B23D4));
  v18 = v17 + expf(-(float)(v29 * v16));
  v19 = expf(-(float)(v6 * v16));
  v20 = (float)(v18 + (float)(v19 + expf(-(float)(v8 * v16)))) * 0.5;
  v21 = expf(-(float)(v16 * v27));
  v22 = *(float *)&dword_1402B23D8;
  *(float *)&dword_140404A6C[284545206] = (float)((float)(v20 + (float)(v21 * 0.75)) * v10) * 0.75;
  v23 = expf(-(float)(v28 * *(float *)&dword_1402B23D8));
  v24 = v23 + expf(-(float)(v29 * v22));
  v25 = expf(-(float)(v6 * v22));
  v26 = (float)(v24 + (float)(v25 + expf(-(float)(v8 * v22)))) * 0.5;
  *(float *)&dword_140404A6C[284545207] = (float)((float)(v26 + (float)(expf(-(float)(v22 * v27)) * 0.75)) * v10) * 0.75;
  *(float *)&dword_140404A6C[284545209] = expf(-(float)(v9 * v30)) * 1.125;
  *(float *)&dword_140404A6C[284545210] = expf(-(float)(v16 * v30)) * 1.125;
  *(float *)&dword_140404A6C[284545211] = expf(-(float)(v22 * v30)) * 1.125;
}

