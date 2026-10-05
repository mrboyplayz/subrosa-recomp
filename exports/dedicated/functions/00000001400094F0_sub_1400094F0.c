/* Address: 0x1400094f0 | Name: sub_1400094F0 | Size: 226 bytes */
__int64 __fastcall sub_1400094F0(unsigned int a1, int a2, int a3, int a4)
{
  __int64 v6; // r8
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  _DWORD *i; // rax
  __int64 v12; // rcx

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( a2 < 0 )
    return 0xFFFFFFFFLL;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a4 < 0 )
    return 0xFFFFFFFFLL;
  v6 = 1052016LL * (int)a1;
  if ( a2 >= *(_DWORD *)((char *)&unk_16CDE9EA0 + v6 + 52) )
    return 0xFFFFFFFFLL;
  if ( a3 >= *(_DWORD *)((char *)&unk_16CDE9EA0 + v6 + 56) )
    return 0xFFFFFFFFLL;
  v7 = *(_DWORD *)((char *)&unk_16CDE9EA0 + v6 + 60);
  if ( a4 >= v7 )
    return 0xFFFFFFFFLL;
  v8 = 0;
  v9 = 0;
  for ( i = (_DWORD *)((char *)&unk_16CDEA40C + v6); *i; i += 513 )
  {
    ++v8;
    if ( ++v9 >= 512 )
      return 0xFFFFFFFFLL;
  }
  *(_DWORD *)(*(_QWORD *)((char *)&unk_16CDE9EA0 + v6 + 72)
            + 4LL * (a2 + *(_DWORD *)((char *)&unk_16CDE9EA0 + v6 + 52) * (a4 + a3 * v7))) = v8;
  v12 = v6 + 2052LL * v8;
  *(_DWORD *)((char *)&unk_16CDE9EA0 + v12 + 1388) = 1;
  memset((char *)&unk_16CDE9EA0 + v12 + 1392, -1, 0x800u);
  return v8;
}

