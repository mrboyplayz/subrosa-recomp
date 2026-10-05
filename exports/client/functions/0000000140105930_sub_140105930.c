/* Address: 0x140105930 | Name: sub_140105930 | Size: 314 bytes */
_UNKNOWN **__fastcall sub_140105930(float *a1, float *a2, float *a3)
{
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  float v10; // xmm11_4
  float v11; // xmm12_4
  float v12; // xmm3_4
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  v4 = *a2;
  v5 = a3[3];
  v6 = *a3;
  v7 = a3[1];
  v8 = a2[1];
  v9 = a3[2];
  v10 = a2[2];
  v11 = a2[3];
  v12 = (float)(v7 * v11) - (float)(v9 * *a2);
  *a1 = (float)((float)((float)(*a3 * v11) + (float)(*a2 * v5)) + (float)(v9 * v8)) - (float)(v7 * v10);
  a1[1] = (float)(v12 + (float)(v8 * v5)) + (float)(v10 * v6);
  a1[2] = (float)((float)((float)(v9 * v11) + (float)(v7 * v4)) - (float)(v8 * v6)) + (float)(v10 * v5);
  a1[3] = (float)((float)((float)(v11 * v5) - (float)(v6 * v4)) - (float)(v7 * v8)) - (float)(v10 * v9);
  return &retaddr;
}

