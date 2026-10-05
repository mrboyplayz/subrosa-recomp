/* Address: 0x1401c4fb0 | Name: sub_1401C4FB0 | Size: 283 bytes */
__int64 __fastcall sub_1401C4FB0(__int64 a1)
{
  int i; // [rsp+20h] [rbp-28h]
  int j; // [rsp+20h] [rbp-28h]
  int k; // [rsp+20h] [rbp-28h]

  MEMORY[0x1401FCD30](a1, 0, 112);
  for ( i = 0; i < 4; ++i )
    *(_DWORD *)(a1 + 4LL * i + 92) = sub_1401BE420(50 / (i + 1), 1u);
  for ( j = 0; j < 4; ++j )
  {
    *(_DWORD *)(a1 + 4LL * j + 60) = 100 * *(_DWORD *)(a1 + 4LL * j + 92);
    *(_DWORD *)(a1 + 4LL * j + 76) = 0x7FFFFFFF / *(_DWORD *)(a1 + 4LL * j + 60);
  }
  *(_DWORD *)(a1 + 108) = 15;
  for ( k = 0; k < 4; ++k )
    *(_DWORD *)(a1 + 4LL * k + 40) = 25600;
  return 0;
}

