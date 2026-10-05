/* Address: 0x140047cd0 | Name: sub_140047CD0 | Size: 157 bytes */
__int64 __fastcall sub_140047CD0(float *a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm4_4
  float v5; // xmm2_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  float v8; // xmm6_4
  float v9; // xmm7_4

  v4 = a4[1] - a2[1];
  v5 = a4[2] - a2[2];
  v6 = *a4 - *a2;
  v7 = a3[2] - a2[2];
  v8 = a3[1] - a2[1];
  v9 = *a3 - *a2;
  *a1 = (float)(v4 * v7) - (float)(v5 * v8);
  a1[2] = (float)(v6 * v8) - (float)(v4 * v9);
  a1[1] = (float)(v5 * v9) - (float)(v6 * v7);
  return sub_140049260(a1, a1);
}

