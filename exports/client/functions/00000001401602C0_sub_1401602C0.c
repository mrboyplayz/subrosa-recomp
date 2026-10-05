/* Address: 0x1401602c0 | Name: sub_1401602C0 | Size: 129 bytes */
__int64 __fastcall sub_1401602C0(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v4; // r8d
  int v5; // r9d
  int v6; // r8d
  int v7; // edx

  v2 = a2;
  if ( *(_DWORD *)(a1 + 18468) < a2 )
    sub_140161D20();
  v4 = *(_DWORD *)(a1 + 18464);
  v5 = __ROL4__(v4, v2);
  if ( (unsigned int)v2 > 0x10 )
    return 0;
  *(_DWORD *)(a1 + 18468) -= v2;
  v6 = dword_14026FC40[v2] & ~(v4 >> 31);
  v7 = v5 & dword_14026FBF0[v2];
  *(_DWORD *)(a1 + 18464) = v5 & ~dword_14026FBF0[v2];
  return (unsigned int)(v7 + v6);
}

