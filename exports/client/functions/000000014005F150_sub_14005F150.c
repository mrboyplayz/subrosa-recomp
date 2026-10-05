/* Address: 0x14005f150 | Name: sub_14005F150 | Size: 529 bytes */
__int64 __fastcall sub_14005F150(unsigned int a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // r11d
  __int64 v7; // r8
  unsigned int v8; // xmm0_4
  unsigned int v9; // ecx
  unsigned int v10; // edx
  int v11; // eax
  float v12; // xmm1_4
  int v13; // ecx
  unsigned int v14; // xmm2_4
  unsigned int v15; // r11d
  unsigned int v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4

  v4 = dword_140404A6C[431564581];
  if ( (int)dword_140404A6C[431564581] >= 0x4000 )
    return 0xFFFFFFFFLL;
  v7 = 26LL * (int)dword_140404A6C[431564581];
  dword_140404A6C[v7 + 431138501] = a1;
  dword_140404A6C[v7 + 431138504] = *a2;
  dword_140404A6C[v7 + 431138505] = a2[1];
  dword_140404A6C[v7 + 431138506] = a2[2];
  if ( a3 )
  {
    dword_140404A6C[v7 + 431138507] = *a3;
    dword_140404A6C[v7 + 431138508] = a3[1];
    v8 = a3[2];
  }
  else
  {
    v8 = 0;
    *(_QWORD *)&dword_140404A6C[v7 + 431138507] = 0;
  }
  dword_140404A6C[v7 + 431138509] = v8;
  dword_140404A6C[v7 + 431138510] = *a4;
  dword_140404A6C[v7 + 431138511] = a4[1];
  dword_140404A6C[v7 + 431138512] = a4[2];
  dword_140404A6C[v7 + 431138513] = a4[3];
  dword_140404A6C[v7 + 431138514] = a4[4];
  dword_140404A6C[v7 + 431138515] = a4[5];
  v9 = dword_140404A6C[133919253];
  dword_140404A6C[v7 + 431138516] = a4[6];
  dword_140404A6C[v7 + 431138517] = a4[7];
  v10 = v9 + 1;
  dword_140404A6C[v7 + 431138518] = a4[8];
  dword_140404A6C[v7 + 431138523] = 993158992;
  dword_140404A6C[v7 + 431138524] = 1065311273;
  dword_140404A6C[133919253] = v10;
  v11 = 15731 * ((v9 << 13) ^ v9) * ((v9 << 13) ^ v9) + 789221;
  v13 = 15731 * (v10 ^ ((v9 + 1) << 13)) * (v10 ^ ((v9 + 1) << 13)) + 789221;
  v12 = (float)(0.06666667 - (float)((float)((v11 * v11 - 771171059) & 0x7FFFFFFF) * 6.2088175e-11)) + 0.20000002;
  *(float *)&v14 = v12 * *((float *)a4 + 3);
  v15 = v4 + 1;
  dword_140404A6C[v7 + 431138519] = v14;
  *(float *)&dword_140404A6C[v7 + 431138520] = v12 * *((float *)a4 + 4);
  *(float *)&v16 = v12 * *((float *)a4 + 5);
  dword_140404A6C[133919253] = v10 + 1;
  dword_140404A6C[v7 + 431138521] = v16;
  v17 = -0.20000002 - (float)((float)((float)((v13 * v13 - 771171059) & 0x7FFFFFFF) * -6.2088175e-11) + 0.06666667);
  *(float *)&dword_140404A6C[v7 + 431138519] = (float)(v17 * *(float *)a4) + *(float *)&v14;
  *(float *)&dword_140404A6C[v7 + 431138520] = (float)(v17 * *((float *)a4 + 1))
                                             + *(float *)&dword_140404A6C[v7 + 431138520];
  v18 = v17 * *((float *)a4 + 2);
  dword_140404A6C[431564581] = v15;
  *(float *)&dword_140404A6C[v7 + 431138521] = v18 + *(float *)&dword_140404A6C[v7 + 431138521];
  dword_140404A6C[v7 + 431138524] = 1065311273;
  dword_140404A6C[v7 + 431138503] = 1;
  return v15 - 1;
}

