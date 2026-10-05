/* Address: 0x1400f00d0 | Name: sub_1400F00D0 | Size: 140 bytes */
__int64 __fastcall sub_1400F00D0(int a1, int a2, unsigned int a3)
{
  __int64 v4; // r9
  unsigned int v5; // eax
  int v6; // edx
  unsigned int *i; // rcx
  __int64 v9; // rcx

  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  v4 = 5873LL * a2;
  v5 = 0;
  v6 = dword_140404A6C[v4 + 283836331];
  if ( v6 <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = &dword_140404A6C[v4 + 283836332]; *i; i += 13 )
  {
    if ( (int)++v5 >= v6 )
      return 0xFFFFFFFFLL;
  }
  v9 = v4 * 4 + 52LL * v5;
  *(unsigned int *)((char *)&dword_140404A6C[283836332] + v9) = 1;
  return sub_14005BCA0(
           a1,
           (unsigned int *)((char *)&dword_140404A6C[283836333] + v9),
           nullptr,
           (unsigned int *)((char *)&dword_140404A6C[283836336] + v9),
           a3);
}

