/* Address: 0x1400e38a0 | Name: sub_1400E38A0 | Size: 190 bytes */
__int64 __fastcall sub_1400E38A0(signed int a1, signed int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rsi
  __int64 v5; // rbx

  v2 = 1760LL * a1;
  v3 = (int)dword_140404A6C[v2 + 278845906];
  if ( (int)v3 >= 8 )
    return 0;
  v4 = 1760LL * a2;
  v5 = (int)dword_140404A6C[v4 + 278845898];
  if ( !dword_140404A6C[1268 * v5 + 278521356 + (int)dword_140404A6C[v2 + 278845898]] )
    return 0;
  if ( (unsigned int)(v5 - 17) <= 1 )
  {
    if ( (int)v3 >= 5 )
      return 0;
  }
  else if ( (int)v3 > 0 )
  {
    return 0;
  }
  dword_140404A6C[1760 * a1 + 278845907 + v3] = a2;
  ++dword_140404A6C[v2 + 278845906];
  dword_140404A6C[v4 + 278845903] = a1;
  dword_140404A6C[v4 + 278845904] = v3;
  return 1;
}

