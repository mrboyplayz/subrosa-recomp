/* Address: 0x140010020 | Name: sub_140010020 | Size: 226 bytes */
__int64 __fastcall sub_140010020(unsigned int a1, int a2, int a3, int a4)
{
  __int64 v6; // r8
  signed int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned int *i; // rax
  __int64 v12; // rcx

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( a2 < 0 )
    return 0xFFFFFFFFLL;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a4 < 0 )
    return 0xFFFFFFFFLL;
  v6 = 263004LL * (int)a1;
  if ( a2 >= (int)dword_140404A6C[v6 + 111579650] )
    return 0xFFFFFFFFLL;
  if ( a3 >= (int)dword_140404A6C[v6 + 111579651] )
    return 0xFFFFFFFFLL;
  v7 = dword_140404A6C[v6 + 111579652];
  if ( a4 >= v7 )
    return 0xFFFFFFFFLL;
  v8 = 0;
  v9 = 0;
  for ( i = &dword_140404A6C[v6 + 111579984]; *i; i += 513 )
  {
    ++v8;
    if ( ++v9 >= 512 )
      return 0xFFFFFFFFLL;
  }
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
            + 4LL * (int)(a2 + dword_140404A6C[v6 + 111579650] * (a4 + a3 * v7))) = v8;
  v12 = v6 * 4 + 2052LL * v8;
  *(unsigned int *)((char *)&dword_140404A6C[111579984] + v12) = 1;
  MEMORY[0x1401FCD30]((char *)&dword_140404A6C[111579985] + v12, 0xFFFFFFFFLL, 2048);
  return v8;
}

