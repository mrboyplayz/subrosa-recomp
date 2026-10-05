/* Address: 0x1401a7ec0 | Name: sub_1401A7EC0 | Size: 305 bytes */
__int64 __fastcall sub_1401A7EC0(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 a5, _DWORD *a6, int a7)
{
  __int64 result; // rax
  int v9; // [rsp+24h] [rbp-24h]

  while ( 1 )
  {
    result = a3;
    if ( a2 >= (int)a3 )
      break;
    if ( *(int *)(a5 + 4LL * a2) > 0 )
    {
      v9 = 0;
      do
      {
        *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v9 + a2)) = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v9 + a2))
                                                               + (float)((float)((float)((float)((float)(int)sub_14019B1C0(a6, *(_DWORD *)(a5 + 4LL * a2))
                                                                                               + 0.5)
                                                                                       * (float)(1 << (14 - *(_BYTE *)(a5 + 4LL * a2))))
                                                                               * 0.000061035156)
                                                                       - 0.5);
        ++v9;
      }
      while ( v9 < a7 );
    }
    ++a2;
  }
  return result;
}

