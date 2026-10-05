/* Address: 0x1401a7930 | Name: sub_1401A7930 | Size: 530 bytes */
__int64 __fastcall sub_1401A7930(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9,
        int a10)
{
  __int64 result; // rax
  int j; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+24h] [rbp-24h]
  int i; // [rsp+28h] [rbp-20h]
  BOOL v14; // [rsp+30h] [rbp-18h]
  float v15; // [rsp+34h] [rbp-14h]

  for ( i = 0; i < 2; ++i )
  {
    for ( j = a2; j < a3 && a8 >= a10; ++j )
    {
      if ( *(int *)(a6 + 4LL * j) < 8 && *(_DWORD *)(a7 + 4LL * j) == i )
      {
        v12 = 0;
        do
        {
          v14 = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v12 + j)) >= 0.0;
          sub_14019A6D0(a9, v14, 1);
          v15 = (float)((float)((float)v14 - 0.5) * (float)(1 << (14 - *(_BYTE *)(a6 + 4LL * j) - 1))) * 0.000061035156;
          *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v12 + j)) = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v12 + j))
                                                                 + v15;
          *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v12 + j)) = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v12 + j))
                                                                 - v15;
          --a8;
          ++v12;
        }
        while ( v12 < a10 );
      }
    }
    result = (unsigned int)(i + 1);
  }
  return result;
}

