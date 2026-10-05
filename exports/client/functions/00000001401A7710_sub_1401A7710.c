/* Address: 0x1401a7710 | Name: sub_1401A7710 | Size: 533 bytes */
__int64 __fastcall sub_1401A7710(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        int a8)
{
  __int64 result; // rax
  __int16 v9; // [rsp+20h] [rbp-28h]
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+2Ch] [rbp-1Ch]
  float v13; // [rsp+30h] [rbp-18h]

  while ( 1 )
  {
    result = a3;
    if ( a2 >= (int)a3 )
      break;
    v9 = 1 << *(_DWORD *)(a6 + 4LL * a2);
    if ( *(int *)(a6 + 4LL * a2) > 0 )
    {
      v11 = 0;
      do
      {
        v12 = (int)floor((float)((float)(*(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v11 + a2)) + 0.5) * (float)v9));
        if ( v12 > v9 - 1 )
          v12 = v9 - 1;
        if ( v12 < 0 )
          v12 = 0;
        sub_14019A6D0(a7, v12, *(_DWORD *)(a6 + 4LL * a2));
        v13 = (float)((float)((float)((float)v12 + 0.5) * (float)(1 << (14 - *(_BYTE *)(a6 + 4LL * a2))))
                    * 0.000061035156)
            - 0.5;
        *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v11 + a2)) = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v11 + a2))
                                                                + v13;
        *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v11 + a2)) = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v11 + a2))
                                                                - v13;
        ++v11;
      }
      while ( v11 < a8 );
    }
    ++a2;
  }
  return result;
}

