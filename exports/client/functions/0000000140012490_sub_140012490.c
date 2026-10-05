/* Address: 0x140012490 | Name: sub_140012490 | Size: 469 bytes */
__int64 __fastcall sub_140012490(unsigned int a1, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v5; // rbp
  unsigned int v6; // esi
  unsigned int *v7; // rax
  __int64 v9; // rbx

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( a2 > 0x1FF )
    return 0xFFFFFFFFLL;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a4 < 0 )
    return 0xFFFFFFFFLL;
  if ( a5 < 0 )
    return 0xFFFFFFFFLL;
  v5 = 263004LL * (int)a1;
  if ( (int)((unsigned int)a3 >> 3) >= (int)dword_140404A6C[v5 + 111579650]
    || (int)((unsigned int)a4 >> 3) >= (int)dword_140404A6C[v5 + 111579651]
    || (int)((unsigned int)a5 >> 3) >= (int)dword_140404A6C[v5 + 111579652] )
  {
    return 0xFFFFFFFFLL;
  }
  v6 = 0;
  v7 = &dword_140404A6C[83194357];
  while ( *v7 )
  {
    ++v6;
    v7 += 6930;
    if ( (__int64)v7 >= (__int64)&dword_140404A6C[111579637] )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v9 = 6930LL * (int)v6;
  dword_140404A6C[v9 + 83194357] = 1;
  dword_140404A6C[v9 + 83194358] = a1;
  dword_140404A6C[v9 + 83200507] = a3;
  dword_140404A6C[263004 * a1 + 111579985 + 513 * a2 + 64 * (a4 & 7) + 8 * (a5 & 7) + (a3 & 7)] = v6;
  dword_140404A6C[v9 + 83200508] = a4;
  dword_140404A6C[v9 + 83200509] = a5;
  MEMORY[0x1401FCD30](&dword_140404A6C[v9 + 83194359], 0, 2048);
  MEMORY[0x1401FCD30](&dword_140404A6C[v9 + 83194871], 0, 2048);
  MEMORY[0x1401FCD30](&dword_140404A6C[v9 + 83197431], 0, 2048);
  MEMORY[0x1401FCD30](&dword_140404A6C[v9 + 83198967], 0, 2048);
  MEMORY[0x1401FCD30](&dword_140404A6C[v9 + 83199479], 0, 2048);
  ++dword_140404A6C[v5 + 111842640];
  dword_140404A6C[v9 + 83200513] = 0;
  *(_QWORD *)&dword_140404A6C[v9 + 83200503] = -1;
  *(_QWORD *)&dword_140404A6C[v9 + 83200505] = -1;
  return v6;
}

