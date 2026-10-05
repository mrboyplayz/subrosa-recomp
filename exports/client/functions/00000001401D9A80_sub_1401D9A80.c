/* Address: 0x1401d9a80 | Name: sub_1401D9A80 | Size: 908 bytes */
__int64 __fastcall sub_1401D9A80(__int64 a1, __int64 a2)
{
  int j; // [rsp+20h] [rbp-48h]
  int m; // [rsp+20h] [rbp-48h]
  int k; // [rsp+20h] [rbp-48h]
  int v6; // [rsp+24h] [rbp-44h]
  int i; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+30h] [rbp-38h]
  int v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+3Ch] [rbp-2Ch]

  v8 = a1 + 4196;
  *(_DWORD *)(a1 + 4188) = *(char *)(a1 + 2789);
  v6 = 0;
  if ( *(_BYTE *)(a1 + 2789) == 2 )
  {
    for ( i = 0;
          *(_DWORD *)(a1 + 2332) * i < *(_DWORD *)(a2 + 4LL * (*(_DWORD *)(a1 + 2324) - 1))
       && i != *(_DWORD *)(a1 + 2324);
          ++i )
    {
      v9 = 0;
      for ( j = 0; j < 5; ++j )
        v9 += *(__int16 *)(a2 + 2LL * (j + 5 * (*(_DWORD *)(a1 + 2324) - 1 - i)) + 96);
      if ( v9 > v6 )
      {
        v6 = v9;
        MEMORY[0x1401FC920](v8 + 4, a2 + 10LL * (__int16)(*(_DWORD *)(a1 + 2324) - 1 - i) + 96);
        *(_DWORD *)v8 = *(_DWORD *)(a2 + 4LL * (*(_DWORD *)(a1 + 2324) - 1 - i)) << 8;
      }
    }
    MEMORY[0x1401FCD30](v8 + 4, 0, 10);
    *(_WORD *)(v8 + 8) = v6;
    if ( v6 >= 11469 )
    {
      if ( v6 > 15565 )
      {
        for ( k = 0; k < 5; ++k )
          *(_WORD *)(v8 + 2LL * k + 4) = ((__int16)(255016960 / v6) * *(__int16 *)(v8 + 2LL * k + 4)) >> 14;
      }
    }
    else
    {
      if ( v6 <= 1 )
        v10 = 1;
      else
        v10 = v6;
      for ( m = 0; m < 5; ++m )
        *(_WORD *)(v8 + 2LL * m + 4) = ((__int16)(11744256 / v10) * *(__int16 *)(v8 + 2LL * m + 4)) >> 10;
    }
  }
  else
  {
    *(_DWORD *)v8 = 4608 * *(__int16 *)(a1 + 2316);
    MEMORY[0x1401FCD30](a1 + 4200, 0, 10);
  }
  MEMORY[0x1401FC920](v8 + 14, a2 + 64);
  *(_WORD *)(v8 + 68) = *(_WORD *)(a2 + 136);
  MEMORY[0x1401FC920](v8 + 72, a2 + 4LL * (*(_DWORD *)(a1 + 2324) - 2) + 16);
  *(_DWORD *)(v8 + 88) = *(_DWORD *)(a1 + 2332);
  *(_DWORD *)(v8 + 84) = *(_DWORD *)(a1 + 2324);
  return v8;
}

