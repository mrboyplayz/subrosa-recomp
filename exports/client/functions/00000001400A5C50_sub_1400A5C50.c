/* Address: 0x1400a5c50 | Name: sub_1400A5C50 | Size: 215 bytes */
void __fastcall sub_1400A5C50(float *a1, float *a2, float *a3)
{
  float v4; // xmm0_4
  float v5; // xmm9_4
  float v6; // xmm8_4
  float v7; // xmm6_4
  float v8; // xmm0_4

  v4 = a3[2] - a2[2];
  v5 = fsqrt(
         (float)((float)((float)(a3[1] - a2[1]) * (float)(a3[1] - a2[1]))
               + (float)((float)(*a3 - *a2) * (float)(*a3 - *a2)))
       + (float)(v4 * v4))
     * 0.029296875;
  v6 = expf(-(float)(*(float *)&dword_1402B23D0 * v5));
  v7 = expf(-(float)(*(float *)&dword_1402B23D4 * v5));
  v8 = expf(-(float)(*(float *)&dword_1402B23D8 * v5));
  *a1 = v6;
  a1[1] = v7;
  a1[2] = v8;
}

