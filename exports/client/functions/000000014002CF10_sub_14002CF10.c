/* Address: 0x14002cf10 | Name: sub_14002CF10 | Size: 305 bytes */
float *__fastcall sub_14002CF10(__int64 a1, float *a2, __int64 a3, float *a4, float *a5)
{
  float v6; // xmm6_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm7_4
  float v14; // xmm3_4

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v6 = (float)((float)((float)(a4[1] * a2[1]) + (float)(*a4 * *a2)) + (float)(a2[2] * a4[2])) * *a5;
  v7 = *a4 * v6;
  *(float *)a1 = v7;
  v8 = v6 * a4[1];
  *(float *)(a1 + 4) = v8;
  v9 = v6 * a4[2];
  *(float *)(a1 + 8) = v9;
  v10 = (float)((float)((float)(a4[4] * a2[1]) + (float)(a4[3] * *a2)) + (float)(a4[5] * a2[2])) * a5[1];
  v11 = (float)(a4[3] * v10) + v7;
  *(float *)a1 = v11;
  v12 = (float)(v10 * a4[4]) + v8;
  *(float *)(a1 + 4) = v12;
  v13 = (float)(v10 * a4[5]) + v9;
  *(float *)(a1 + 8) = v13;
  v14 = (float)((float)((float)(a4[7] * a2[1]) + (float)(a4[6] * *a2)) + (float)(a4[8] * a2[2])) * a5[2];
  *(float *)a1 = (float)(a4[6] * v14) + v11;
  *(float *)(a1 + 4) = (float)(v14 * a4[7]) + v12;
  *(float *)(a1 + 8) = (float)(v14 * a4[8]) + v13;
  return a5;
}

