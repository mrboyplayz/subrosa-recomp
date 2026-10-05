/* Address: 0x1401bd610 | Name: sub_1401BD610 | Size: 499 bytes */
__int64 __fastcall sub_1401BD610(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  int k; // [rsp+0h] [rbp-18h]
  int n; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]
  int j; // [rsp+4h] [rbp-14h]
  int m; // [rsp+4h] [rbp-14h]
  int v10; // [rsp+8h] [rbp-10h]
  int v11; // [rsp+8h] [rbp-10h]

  for ( i = 0; i < a4; ++i )
    *(_DWORD *)(a2 + 4LL * i) = i;
  for ( j = 1; j < a4; ++j )
  {
    v10 = *(_DWORD *)(a1 + 4LL * j);
    for ( k = j - 1; k >= 0 && v10 < *(_DWORD *)(a1 + 4LL * k); --k )
    {
      *(_DWORD *)(a1 + 4LL * (k + 1)) = *(_DWORD *)(a1 + 4LL * k);
      *(_DWORD *)(a2 + 4LL * (k + 1)) = *(_DWORD *)(a2 + 4LL * k);
    }
    *(_DWORD *)(a1 + 4LL * (k + 1)) = v10;
    *(_DWORD *)(a2 + 4LL * (k + 1)) = j;
  }
  for ( m = a4; ; ++m )
  {
    result = (unsigned int)a3;
    if ( m >= a3 )
      break;
    v11 = *(_DWORD *)(a1 + 4LL * m);
    if ( v11 < *(_DWORD *)(a1 + 4LL * (a4 - 1)) )
    {
      for ( n = a4 - 2; n >= 0 && v11 < *(_DWORD *)(a1 + 4LL * n); --n )
      {
        *(_DWORD *)(a1 + 4LL * (n + 1)) = *(_DWORD *)(a1 + 4LL * n);
        *(_DWORD *)(a2 + 4LL * (n + 1)) = *(_DWORD *)(a2 + 4LL * n);
      }
      *(_DWORD *)(a1 + 4LL * (n + 1)) = v11;
      *(_DWORD *)(a2 + 4LL * (n + 1)) = m;
    }
  }
  return result;
}

