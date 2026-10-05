/* Address: 0x1401d7560 | Name: sub_1401D7560 | Size: 936 bytes */
__int64 __fastcall sub_1401D7560(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int16 a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  int v11; // eax
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-28h]
  int j; // [rsp+20h] [rbp-28h]
  int k; // [rsp+20h] [rbp-28h]
  int m; // [rsp+20h] [rbp-28h]
  int n; // [rsp+20h] [rbp-28h]
  int ii; // [rsp+20h] [rbp-28h]
  int v19; // [rsp+24h] [rbp-24h]
  int v20; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+30h] [rbp-18h]

  v21 = *(_DWORD *)(a10 + 4LL * a7);
  if ( *(int *)(a9 + 4LL * a7) <= 1 )
    v11 = sub_1401BE820(1, 47);
  else
    v11 = sub_1401BE820(*(_DWORD *)(a9 + 4LL * a7), 47);
  v20 = v11;
  for ( i = 0; i < *(_DWORD *)(a1 + 4588); ++i )
    *(_DWORD *)(a4 + 4LL * i) = ((((v11 >> 4) + 1) >> 1) * (__int64)*(__int16 *)(a3 + 2LL * i)) >> 16;
  if ( a2[1087] )
  {
    if ( !a7 )
      v20 = 4 * ((a8 * (__int64)v11) >> 16);
    for ( j = a2[1083] - v21 - 2; j < a2[1083]; ++j )
      *(_DWORD *)(a6 + 4LL * j) = (*(__int16 *)(a5 + 2LL * j) * (__int64)v20) >> 16;
  }
  result = a7;
  if ( *(_DWORD *)(a9 + 4LL * a7) != a2[1086] )
  {
    v19 = sub_1401BE550(a2[1086], *(_DWORD *)(a9 + 4LL * a7), 16);
    for ( k = a2[1084] - *(_DWORD *)(a1 + 4592); k < a2[1084]; ++k )
      a2[k + 320] = ((int)a2[k + 320] * (__int64)v19) >> 16;
    if ( a11 == 2 && !a2[1087] )
    {
      for ( m = a2[1083] - v21 - 2; m < a2[1083]; ++m )
        *(_DWORD *)(a6 + 4LL * m) = (*(int *)(a6 + 4LL * m) * (__int64)v19) >> 16;
    }
    a2[1080] = ((int)a2[1080] * (__int64)v19) >> 16;
    a2[1081] = ((int)a2[1081] * (__int64)v19) >> 16;
    for ( n = 0; n < 16; ++n )
      a2[n + 960] = ((int)a2[n + 960] * (__int64)v19) >> 16;
    for ( ii = 0; ii < 24; ++ii )
      a2[ii + 1056] = ((int)a2[ii + 1056] * (__int64)v19) >> 16;
    result = *(unsigned int *)(a9 + 4LL * a7);
    a2[1086] = result;
  }
  return result;
}

