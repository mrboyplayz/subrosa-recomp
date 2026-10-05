/* Address: 0x1400b7830 | Name: sub_1400B7830 | Size: 209 bytes */
void *__fastcall sub_1400B7830(int a1, float *a2, float *a3)
{
  __int64 v3; // rcx
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm5_4

  v3 = 188LL * a1;
  *(float *)((char *)&unk_140249600 + v3 + 36) = *(float *)((char *)&unk_140249600 + v3 + 36) + *a3;
  *(float *)((char *)&unk_140249600 + v3 + 40) = *(float *)((char *)&unk_140249600 + v3 + 40) + a3[1];
  *(float *)((char *)&unk_140249600 + v3 + 44) = *(float *)((char *)&unk_140249600 + v3 + 44) + a3[2];
  v5 = a2[1];
  v6 = a3[1];
  v7 = a3[2];
  v8 = *a3;
  v9 = a2[2] * *a3;
  v10 = *a2;
  v11 = *a2 * v6;
  *(float *)((char *)&unk_140249600 + v3 + 96) = (float)((float)(a2[2] * v6) - (float)(v5 * v7))
                                               + *(float *)((char *)&unk_140249600 + v3 + 96);
  *(float *)((char *)&unk_140249600 + v3 + 100) = (float)((float)(v10 * v7) - v9)
                                                + *(float *)((char *)&unk_140249600 + v3 + 100);
  *(float *)((char *)&unk_140249600 + v3 + 104) = (float)((float)(v5 * v8) - v11)
                                                + *(float *)((char *)&unk_140249600 + v3 + 104);
  return &unk_140249600;
}

