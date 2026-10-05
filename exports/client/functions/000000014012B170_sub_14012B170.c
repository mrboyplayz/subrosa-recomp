/* Address: 0x14012b170 | Name: sub_14012B170 | Size: 176 bytes */
unsigned int *__fastcall sub_14012B170(float *a1, int a2, float *a3)
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
  v5 = 47LL * a2;
  v7 = *(float *)&dword_140404A6C[v5 + 18215738];
  v8 = *(float *)&dword_140404A6C[v5 + 18215736];
  v9 = *(float *)&dword_140404A6C[v5 + 18215737];
  v10 = *a3 * v7;
  v11 = (float)(*a3 * v9) - (float)(v8 * v4);
  *a1 = (float)((float)(v4 * v7) - (float)(v3 * v9)) + *(float *)&dword_140404A6C[v5 + 18215718];
  a1[1] = (float)((float)(v8 * v3) - v10) + *(float *)&dword_140404A6C[v5 + 18215719];
  a1[2] = v11 + *(float *)&dword_140404A6C[v5 + 18215720];
  return &dword_140404A6C[18215709];
}

