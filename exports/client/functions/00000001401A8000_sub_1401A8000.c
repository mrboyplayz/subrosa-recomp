/* Address: 0x1401a8000 | Name: sub_1401A8000 | Size: 385 bytes */
void __fastcall sub_1401A8000(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8,
        int a9)
{
  int j; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+24h] [rbp-24h]
  int i; // [rsp+28h] [rbp-20h]

  for ( i = 0; i < 2; ++i )
  {
    for ( j = a2; j < a3 && a7 >= a9; ++j )
    {
      if ( *(int *)(a5 + 4LL * j) < 8 && *(_DWORD *)(a6 + 4LL * j) == i )
      {
        v10 = 0;
        do
        {
          *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + j)) = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + j))
                                                                 + (float)((float)((float)((float)(int)sub_14019B1C0(a8, 1u)
                                                                                         - 0.5)
                                                                                 * (float)(1 << (14
                                                                                               - *(_BYTE *)(a5 + 4LL * j)
                                                                                               - 1)))
                                                                         * 0.000061035156);
          --a7;
          ++v10;
        }
        while ( v10 < a9 );
      }
    }
  }
}

