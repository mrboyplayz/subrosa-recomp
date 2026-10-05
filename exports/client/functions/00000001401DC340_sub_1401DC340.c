/* Address: 0x1401dc340 | Name: sub_1401DC340 | Size: 378 bytes */
__int64 __fastcall sub_1401DC340(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int i; // [rsp+20h] [rbp-18h]
  int j; // [rsp+20h] [rbp-18h]

  *(_DWORD *)(a2 + 4LL * a4) = 0x10000;
  *(_DWORD *)(a3 + 4LL * a4) = 0x10000;
  for ( i = 0; i < a4; ++i )
  {
    *(_DWORD *)(a2 + 4LL * i) = -*(_DWORD *)(a1 + 4LL * (a4 - i - 1)) - *(_DWORD *)(a1 + 4LL * (i + a4));
    *(_DWORD *)(a3 + 4LL * i) = *(_DWORD *)(a1 + 4LL * (i + a4)) - *(_DWORD *)(a1 + 4LL * (a4 - i - 1));
  }
  for ( j = a4; j > 0; --j )
  {
    *(_DWORD *)(a2 + 4LL * (j - 1)) -= *(_DWORD *)(a2 + 4LL * j);
    *(_DWORD *)(a3 + 4LL * (j - 1)) += *(_DWORD *)(a3 + 4LL * j);
  }
  sub_1401DC0A0(a2, a4);
  return sub_1401DC0A0(a3, a4);
}

