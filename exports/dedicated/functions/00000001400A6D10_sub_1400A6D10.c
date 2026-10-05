/* Address: 0x1400a6d10 | Name: sub_1400A6D10 | Size: 637 bytes */
__int64 __fastcall sub_1400A6D10(
        int a1,
        int a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        int a7,
        int a8,
        float a9,
        int a10,
        int a11,
        int a12)
{
  __int64 v12; // r11
  __int64 v13; // r8
  float v14; // xmm4_4
  float v15; // xmm2_4
  float *v16; // rdx
  float v17; // xmm5_4
  __int64 v18; // rcx
  float v19; // xmm6_4
  __int64 result; // rax

  v12 = 24944LL * a1;
  dword_14AA152E0[20 * dword_14AA152E0[v12 + 24094] + 24095 + v12] = a2;
  dword_14AA152E0[20 * dword_14AA152E0[v12 + 24094] + 24096 + v12] = a3;
  dword_14AA152E0[20 * dword_14AA152E0[v12 + 24094] + 24097 + v12] = a4;
  dword_14AA152E0[20 * dword_14AA152E0[v12 + 24094] + 24098 + v12] = *a5;
  dword_14AA152E0[20 * dword_14AA152E0[v12 + 24094] + 24099 + v12] = a5[1];
  dword_14AA152E0[20 * dword_14AA152E0[v12 + 24094] + 24101 + v12] = a6;
  dword_14AA152E0[20 * dword_14AA152E0[v12 + 24094] + 24100 + v12] = a7;
  dword_14AA152E0[20 * dword_14AA152E0[v12 + 24094] + 24102 + v12] = a8;
  *(float *)&dword_14AA152E0[20 * dword_14AA152E0[v12 + 24094] + 24106 + v12] = a9;
  dword_14AA152E0[20 * dword_14AA152E0[v12 + 24094] + 24107 + v12] = a10;
  dword_14AA152E0[20 * dword_14AA152E0[v12 + 24094] + 24108 + v12] = a11;
  dword_14AA152E0[20 * dword_14AA152E0[v12 + 24094] + 24109 + v12] = a12;
  v13 = v12 * 4 + 20LL * a3;
  v14 = *((float *)a5 + 1);
  v15 = *(float *)((char *)&dword_14AA152E0[19] + v13);
  v16 = (float *)((char *)&unk_14AA15328 + 20 * a4 + v12 * 4);
  v17 = v16[1];
  v18 = v12 * 4 + 80LL * dword_14AA152E0[v12 + 24094];
  v19 = (float)(v16[2] - *(float *)((char *)&dword_14AA152E0[20] + v13)) * v14;
  *(float *)((char *)&unk_14AA2CB7C + v18) = (float)((float)(*v16 - *(float *)((char *)&dword_14AA152E0[18] + v13)) * v14)
                                           + *(float *)((char *)&dword_14AA152E0[18] + v13);
  *(float *)((char *)&unk_14AA2CB7C + v18 + 4) = (float)((float)(v17 - v15) * v14)
                                               + *(float *)((char *)&dword_14AA152E0[19] + v13);
  *(float *)((char *)&unk_14AA2CB7C + v18 + 8) = v19 + *(float *)((char *)&dword_14AA152E0[20] + v13);
  result = dword_14AA152E0[v12 + 24094];
  *(float *)&dword_14AA152E0[20 * result + 24104 + v12] = a9 + *(float *)&dword_14AA152E0[20 * result + 24104 + v12];
  ++dword_14AA152E0[v12 + 24094];
  return result;
}

