/* Address: 0x14000b980 | Name: sub_14000B980 | Size: 469 bytes */
__int64 __fastcall sub_14000B980(unsigned int a1, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v5; // rbp
  unsigned int v6; // esi
  _DWORD *v7; // rax
  unsigned __int64 v9; // rbx

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
  v5 = 1052016LL * (int)a1;
  if ( (signed int)((unsigned int)a3 >> 3) >= *(_DWORD *)((char *)&unk_16CDE9EA0 + v5 + 52)
    || (signed int)((unsigned int)a4 >> 3) >= *(_DWORD *)((char *)&unk_16CDE9EA0 + v5 + 56)
    || (signed int)((unsigned int)a5 >> 3) >= *(_DWORD *)((char *)&unk_16CDE9EA0 + v5 + 60) )
  {
    return 0xFFFFFFFFLL;
  }
  v6 = 0;
  v7 = &unk_1661A1EA0;
  while ( *v7 )
  {
    ++v6;
    v7 += 6930;
    if ( (__int64)v7 >= (__int64)&unk_16CDE9EA0 )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v9 = 27720LL * (int)v6;
  *(_DWORD *)((char *)&unk_1661A1EA0 + v9) = 1;
  *(_DWORD *)((char *)&unk_1661A1EA0 + v9 + 4) = a1;
  *(_DWORD *)((char *)&unk_1661A1EA0 + v9 + 24600) = a3;
  *((_DWORD *)&unk_16CDE9EA0 + 263004 * (int)a1 + 513 * (int)a2 + 64 * (a4 & 7) + 8 * (a5 & 7) + (a3 & 7) + 348) = v6;
  *(_DWORD *)((char *)&unk_1661A1EA0 + v9 + 24604) = a4;
  *(_DWORD *)((char *)&unk_1661A1EA0 + v9 + 24608) = a5;
  memset(&dword_1661A1EA8[v9 / 4], 0, 0x800u);
  memset(&dword_1661A26A8[v9 / 4], 0, 0x800u);
  memset(&dword_1661A4EA8[v9 / 4], 0, 0x800u);
  memset(&dword_1661A66A8[v9 / 4], 0, 0x800u);
  memset(&dword_1661A6EA8[v9 / 4], 0, 0x800u);
  ++*(_DWORD *)((char *)&unk_16CDE9EA0 + v5 + 1052012);
  *(_DWORD *)((char *)&unk_1661A1EA0 + v9 + 24624) = 0;
  *(_QWORD *)((char *)&unk_1661A1EA0 + v9 + 24584) = -1;
  *(_QWORD *)((char *)&unk_1661A1EA0 + v9 + 24592) = -1;
  return v6;
}

