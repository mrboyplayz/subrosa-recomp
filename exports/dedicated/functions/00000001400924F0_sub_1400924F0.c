/* Address: 0x1400924f0 | Name: sub_1400924F0 | Size: 140 bytes */
__int64 __fastcall sub_1400924F0(int a1, int a2, int a3)
{
  __int64 v4; // r9
  unsigned int v5; // eax
  int v6; // edx
  _DWORD *i; // rcx
  __int64 v9; // rcx

  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  v4 = 23492LL * a2;
  v5 = 0;
  v6 = *(_DWORD *)((char *)&unk_191541180 + v4 + 20088);
  if ( v6 <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = (_DWORD *)((char *)&unk_191545FFC + v4); *i; i += 13 )
  {
    if ( (int)++v5 >= v6 )
      return 0xFFFFFFFFLL;
  }
  v9 = v4 + 52LL * v5;
  *(_DWORD *)((char *)&unk_191541180 + v9 + 20092) = 1;
  return sub_1400414B0(a1, (int *)((char *)&unk_191546000 + v9), nullptr, (int *)((char *)&unk_19154600C + v9), a3);
}

