/* Address: 0x14010cac0 | Name: sub_14010CAC0 | Size: 637 bytes */
__int64 __fastcall sub_14010CAC0(
        int a1,
        unsigned int a2,
        signed int a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        float a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12)
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
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731812 + v12] = a2;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731813 + v12] = a3;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731814 + v12] = a4;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731815 + v12] = *a5;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731816 + v12] = a5[1];
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731818 + v12] = a6;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731817 + v12] = a7;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731819 + v12] = a8;
  *(float *)&dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731823 + v12] = a9;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731824 + v12] = a10;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731825 + v12] = a11;
  dword_140404A6C[20 * (int)dword_140404A6C[v12 + 346731811] + 346731826 + v12] = a12;
  v13 = v12 * 4 + 20LL * a3;
  v14 = *((float *)a5 + 1);
  v15 = *(float *)((char *)&dword_140404A6C[346707736] + v13);
  v16 = (float *)&dword_140404A6C[5 * (int)a4 + 346707735 + v12];
  v17 = v16[1];
  v18 = v12 * 4 + 80LL * (int)dword_140404A6C[v12 + 346731811];
  v19 = (float)(v16[2] - *(float *)((char *)&dword_140404A6C[346707737] + v13)) * v14;
  *(float *)((char *)&dword_140404A6C[346731820] + v18) = (float)((float)(*v16
                                                                        - *(float *)((char *)&dword_140404A6C[346707735]
                                                                                   + v13))
                                                                * v14)
                                                        + *(float *)((char *)&dword_140404A6C[346707735] + v13);
  *(float *)((char *)&dword_140404A6C[346731821] + v18) = (float)((float)(v17 - v15) * v14)
                                                        + *(float *)((char *)&dword_140404A6C[346707736] + v13);
  *(float *)((char *)&dword_140404A6C[346731822] + v18) = v19 + *(float *)((char *)&dword_140404A6C[346707737] + v13);
  result = (int)dword_140404A6C[v12 + 346731811];
  *(float *)&dword_140404A6C[20 * result + 346731821 + v12] = a9
                                                            + *(float *)&dword_140404A6C[20 * result + 346731821 + v12];
  ++dword_140404A6C[v12 + 346731811];
  return result;
}

