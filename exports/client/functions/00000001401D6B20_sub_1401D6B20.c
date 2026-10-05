/* Address: 0x1401d6b20 | Name: sub_1401D6B20 | Size: 129 bytes */
__int64 __fastcall sub_1401D6B20(__int64 a1, __int64 a2, int a3, int a4)
{
  int i; // [rsp+0h] [rbp-18h]
  int v6; // [rsp+4h] [rbp-14h]

  for ( i = 0; i < a4; ++i )
  {
    v6 = *(_DWORD *)(a2 + 4LL * (2 * i + 1)) + *(_DWORD *)(a2 + 8LL * i);
    if ( v6 > a3 )
      return 1;
    *(_DWORD *)(a1 + 4LL * i) = v6;
  }
  return 0;
}

