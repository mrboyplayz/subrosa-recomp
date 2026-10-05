/* Address: 0x14007ae70 | Name: sub_14007AE70 | Size: 640 bytes */
_UNKNOWN **__fastcall sub_14007AE70(float *a1, float *a2, float *a3)
{
  float v4; // xmm4_4
  float v5; // xmm5_4
  float v6; // xmm3_4
  float v7; // xmm7_4
  float v8; // xmm9_4
  float v9; // xmm8_4
  float v10; // xmm11_4
  float v11; // xmm14_4
  float v12; // xmm12_4
  float v13; // xmm13_4
  float v14; // xmm10_4
  float v15; // xmm15_4
  float v16; // xmm6_4
  float v17; // [rsp+0h] [rbp-B8h]
  float v18; // [rsp+4h] [rbp-B4h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF
  float v20; // [rsp+C0h] [rbp+8h]
  float v21; // [rsp+C8h] [rbp+10h]
  float v22; // [rsp+D0h] [rbp+18h]
  float v23; // [rsp+D8h] [rbp+20h]

  v4 = a3[1];
  v5 = a3[2];
  v21 = a2[5];
  v20 = a2[7];
  v22 = a2[6];
  v23 = a2[8];
  v6 = *a3;
  v7 = a3[4];
  v8 = a3[3];
  v9 = a3[5];
  v10 = a2[1];
  v11 = *a2;
  v12 = a2[2];
  v13 = a2[4];
  v14 = a2[3];
  v15 = a3[7];
  v17 = a3[6];
  v18 = a3[8];
  v16 = (float)(*a3 * v22) + (float)(v4 * v20);
  *a1 = (float)((float)(v4 * v10) + (float)(*a3 * *a2)) + (float)(v5 * v12);
  a1[2] = v16 + (float)(v5 * v23);
  a1[1] = (float)((float)(v6 * v14) + (float)(v4 * v13)) + (float)(v5 * v21);
  a1[3] = (float)((float)(v11 * v8) + (float)(v10 * v7)) + (float)(v12 * v9);
  a1[4] = (float)((float)(v8 * v14) + (float)(v7 * v13)) + (float)(v9 * v21);
  a1[5] = (float)((float)(v8 * v22) + (float)(v7 * v20)) + (float)(v9 * v23);
  a1[6] = (float)((float)(v11 * v17) + (float)(v10 * v15)) + (float)(v12 * v18);
  a1[8] = (float)((float)(v17 * v22) + (float)(v15 * v20)) + (float)(v18 * v23);
  a1[7] = (float)((float)(v17 * v14) + (float)(v15 * v13)) + (float)(v18 * v21);
  return &retaddr;
}

