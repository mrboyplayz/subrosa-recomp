/* Address: 0x14005cbb0 | Name: sub_14005CBB0 | Size: 310 bytes */
__int64 __fastcall sub_14005CBB0(unsigned int a1, unsigned int *a2, unsigned int *a3, float a4, unsigned int a5)
{
  __int64 v5; // rdi
  __int64 v10; // rbx

  v5 = (int)dword_140404A6C[73990061];
  if ( (int)dword_140404A6C[73990061] >= 0x4000 )
    return 0xFFFFFFFFLL;
  v10 = 60LL * (int)dword_140404A6C[73990061];
  MEMORY[0x1401FCD30](&dword_140404A6C[v10 + 73007022], 0, 236);
  dword_140404A6C[v10 + 73007021] = a1;
  dword_140404A6C[v10 + 73007022] = 0x10000;
  dword_140404A6C[v10 + 73007026] = *a2;
  dword_140404A6C[v10 + 73007027] = a2[1];
  dword_140404A6C[v10 + 73007028] = a2[2];
  dword_140404A6C[v10 + 73007029] = *a2;
  dword_140404A6C[v10 + 73007030] = a2[1];
  dword_140404A6C[v10 + 73007031] = a2[2];
  if ( a3 )
  {
    dword_140404A6C[v10 + 73007032] = *a3;
    dword_140404A6C[v10 + 73007033] = a3[1];
    dword_140404A6C[v10 + 73007034] = a3[2];
  }
  *(float *)&dword_140404A6C[v10 + 73007023] = a4;
  dword_140404A6C[v10 + 73007024] = 993158992;
  dword_140404A6C[v10 + 73007025] = 1065353216;
  if ( a5 != -1 )
    dword_140404A6C[60 * v5 + 73007075 + (int)dword_140404A6C[v10 + 73007074]++] = a5;
  dword_140404A6C[73990061] = v5 + 1;
  return (unsigned int)v5;
}

