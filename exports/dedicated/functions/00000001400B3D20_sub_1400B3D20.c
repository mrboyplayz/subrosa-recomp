/* Address: 0x1400b3d20 | Name: sub_1400B3D20 | Size: 324 bytes */
_UNKNOWN **__fastcall sub_1400B3D20(float *a1, float *a2)
{
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm5_4
  float v6; // xmm9_4
  float v7; // xmm4_4
  float v8; // xmm11_4
  float v9; // xmm10_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm3_4
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  v3 = a2[1];
  v4 = a2[3];
  v5 = (float)(a2[2] * *a2) + (float)(a2[2] * *a2);
  v6 = (float)(*a2 * *a2) + (float)(*a2 * *a2);
  v7 = (float)(v3 * *a2) + (float)(v3 * *a2);
  v8 = (float)(*a2 * v4) + (float)(*a2 * v4);
  v9 = (float)(v3 * v4) + (float)(v3 * v4);
  v10 = (float)(a2[2] * v4) + (float)(a2[2] * v4);
  v11 = a2[2] * a2[2];
  v12 = (float)(v3 * v3) + (float)(v3 * v3);
  v13 = (float)(a2[2] * v3) + (float)(a2[2] * v3);
  *a1 = 1.0 - (float)((float)(v11 + v11) + v12);
  a1[1] = v7 - v10;
  a1[3] = v7 + v10;
  a1[2] = v5 + v9;
  a1[5] = v13 - v8;
  a1[6] = v5 - v9;
  a1[7] = v13 + v8;
  a1[4] = 1.0 - (float)((float)(v11 + v11) + v6);
  a1[8] = 1.0 - (float)(v12 + v6);
  return &retaddr;
}

