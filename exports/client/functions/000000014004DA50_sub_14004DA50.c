/* Address: 0x14004da50 | Name: sub_14004DA50 | Size: 208 bytes */
__int64 __fastcall sub_14004DA50(unsigned int a1, unsigned int *a2, float a3)
{
  unsigned int *v4; // rax
  unsigned int v6; // edi
  __int64 v8; // rbx

  v4 = &dword_140404A6C[133450253];
  v6 = 0;
  while ( *v4 )
  {
    ++v6;
    v4 += 202;
    if ( (__int64)v4 >= (__int64)&dword_140404A6C[133657101] )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v8 = 202LL * (int)v6;
  MEMORY[0x1401FCD30](&dword_140404A6C[v8 + 133450254], 0, 804);
  dword_140404A6C[v8 + 133450253] = 1;
  dword_140404A6C[v8 + 133450254] = a1;
  dword_140404A6C[v8 + 133450258] = *a2;
  dword_140404A6C[v8 + 133450259] = a2[1];
  dword_140404A6C[v8 + 133450260] = a2[2];
  *(float *)&dword_140404A6C[v8 + 133450261] = a3;
  *(_QWORD *)&dword_140404A6C[v8 + 133450255] = -1;
  return v6;
}

