/* Address: 0x14012b090 | Name: sub_14012B090 | Size: 209 bytes */
unsigned int *__fastcall sub_14012B090(int a1, float *a2, float *a3)
{
  __int64 v3; // rcx
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm5_4

  v3 = 47LL * a1;
  *(float *)&dword_140404A6C[v3 + 18215718] = *(float *)&dword_140404A6C[v3 + 18215718] + *a3;
  *(float *)&dword_140404A6C[v3 + 18215719] = *(float *)&dword_140404A6C[v3 + 18215719] + a3[1];
  *(float *)&dword_140404A6C[v3 + 18215720] = *(float *)&dword_140404A6C[v3 + 18215720] + a3[2];
  v5 = a2[1];
  v6 = a3[1];
  v7 = a3[2];
  v8 = *a3;
  v9 = a2[2] * *a3;
  v10 = *a2;
  v11 = *a2 * v6;
  *(float *)&dword_140404A6C[v3 + 18215733] = (float)((float)(a2[2] * v6) - (float)(v5 * v7))
                                            + *(float *)&dword_140404A6C[v3 + 18215733];
  *(float *)&dword_140404A6C[v3 + 18215734] = (float)((float)(v10 * v7) - v9)
                                            + *(float *)&dword_140404A6C[v3 + 18215734];
  *(float *)&dword_140404A6C[v3 + 18215735] = (float)((float)(v5 * v8) - v11)
                                            + *(float *)&dword_140404A6C[v3 + 18215735];
  return &dword_140404A6C[18215709];
}

