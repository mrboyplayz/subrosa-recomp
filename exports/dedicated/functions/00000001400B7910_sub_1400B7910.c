/* Address: 0x1400b7910 | Name: sub_1400B7910 | Size: 176 bytes */
void *__fastcall sub_1400B7910(float *a1, int a2, float *a3)
{
  float v3; // xmm3_4
  float v4; // xmm1_4
  __int64 v5; // rdx
  float v7; // xmm4_4
  float v8; // xmm2_4
  float v9; // xmm5_4
  float v10; // xmm0_4
  float v11; // xmm8_4

  v3 = a3[2];
  v4 = a3[1];
  v5 = 188LL * a2;
  v7 = *(float *)((char *)&unk_140249600 + v5 + 116);
  v8 = *(float *)((char *)&unk_140249600 + v5 + 108);
  v9 = *(float *)((char *)&unk_140249600 + v5 + 112);
  v10 = *a3 * v7;
  v11 = (float)(*a3 * v9) - (float)(v8 * v4);
  *a1 = (float)((float)(v4 * v7) - (float)(v3 * v9)) + *(float *)((char *)&unk_140249600 + v5 + 36);
  a1[1] = (float)((float)(v8 * v3) - v10) + *(float *)((char *)&unk_140249600 + v5 + 40);
  a1[2] = v11 + *(float *)((char *)&unk_140249600 + v5 + 44);
  return &unk_140249600;
}

