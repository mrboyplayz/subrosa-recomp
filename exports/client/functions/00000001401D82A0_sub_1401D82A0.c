/* Address: 0x1401d82a0 | Name: sub_1401D82A0 | Size: 1147 bytes */
__int64 __fastcall sub_1401D82A0(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        __int16 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        int a14)
{
  int v14; // eax
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-38h]
  int j; // [rsp+20h] [rbp-38h]
  int k; // [rsp+20h] [rbp-38h]
  int m; // [rsp+20h] [rbp-38h]
  int ii; // [rsp+20h] [rbp-38h]
  int jj; // [rsp+20h] [rbp-38h]
  int kk; // [rsp+20h] [rbp-38h]
  int v23; // [rsp+24h] [rbp-34h]
  int v24; // [rsp+28h] [rbp-30h]
  int n; // [rsp+2Ch] [rbp-2Ch]
  int v26; // [rsp+34h] [rbp-24h]
  __int64 v27; // [rsp+40h] [rbp-18h]

  v26 = *(_DWORD *)(a12 + 4LL * a8);
  if ( *(int *)(a11 + 4LL * a8) <= 1 )
    v14 = sub_1401BE820(1, 47);
  else
    v14 = sub_1401BE820(*(_DWORD *)(a11 + 4LL * a8), 47);
  v24 = v14;
  for ( i = 0; i < *(_DWORD *)(a1 + 4588); ++i )
    *(_DWORD *)(a5 + 4LL * i) = ((((v14 >> 4) + 1) >> 1) * (__int64)*(__int16 *)(a4 + 2LL * i)) >> 16;
  if ( a2[1087] )
  {
    if ( !a8 )
      v24 = 4 * ((a10 * (__int64)v14) >> 16);
    for ( j = a2[1083] - v26 - 2; j < a2[1083]; ++j )
      *(_DWORD *)(a7 + 4LL * j) = (*(__int16 *)(a6 + 2LL * j) * (__int64)v24) >> 16;
  }
  result = a8;
  if ( *(_DWORD *)(a11 + 4LL * a8) != a2[1086] )
  {
    v23 = sub_1401BE550(a2[1086], *(_DWORD *)(a11 + 4LL * a8), 16);
    for ( k = a2[1084] - *(_DWORD *)(a1 + 4592); k < a2[1084]; ++k )
      a2[k + 320] = ((int)a2[k + 320] * (__int64)v23) >> 16;
    if ( a13 == 2 && !a2[1087] )
    {
      for ( m = a2[1083] - v26 - 2; m < a2[1083] - a14; ++m )
        *(_DWORD *)(a7 + 4LL * m) = (*(int *)(a7 + 4LL * m) * (__int64)v23) >> 16;
    }
    for ( n = 0; n < a9; ++n )
    {
      v27 = 1300LL * n + a3;
      *(_DWORD *)(v27 + 1280) = (*(int *)(v27 + 1280) * (__int64)v23) >> 16;
      *(_DWORD *)(v27 + 1284) = (*(int *)(v27 + 1284) * (__int64)v23) >> 16;
      for ( ii = 0; ii < 16; ++ii )
        *(_DWORD *)(v27 + 4LL * ii) = (*(int *)(v27 + 4LL * ii) * (__int64)v23) >> 16;
      for ( jj = 0; jj < 24; ++jj )
        *(_DWORD *)(v27 + 4LL * jj + 1184) = (*(int *)(v27 + 4LL * jj + 1184) * (__int64)v23) >> 16;
      for ( kk = 0; kk < 40; ++kk )
      {
        *(_DWORD *)(v27 + 4LL * kk + 864) = (*(int *)(v27 + 4LL * kk + 864) * (__int64)v23) >> 16;
        *(_DWORD *)(v27 + 4LL * kk + 1024) = (*(int *)(v27 + 4LL * kk + 1024) * (__int64)v23) >> 16;
      }
    }
    result = *(unsigned int *)(a11 + 4LL * a8);
    a2[1086] = result;
  }
  return result;
}

