/* Address: 0x1401db1d0 | Name: sub_1401DB1D0 | Size: 502 bytes */
__int64 __fastcall sub_1401DB1D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v3; // ax
  int i; // [rsp+20h] [rbp-38h]
  int v5; // [rsp+24h] [rbp-34h]
  int v6; // [rsp+30h] [rbp-28h]
  unsigned int v7; // [rsp+34h] [rbp-24h]
  int v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]

  result = a2;
  if ( *(int *)(a2 + 108) >= 1000 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 0x7FFF / ((*(int *)(a2 + 108) >> 4) + 1);
    result = (unsigned int)(*(_DWORD *)(a2 + 108) + 1);
    *(_DWORD *)(a2 + 108) = result;
  }
  for ( i = 0; i < 4; ++i )
  {
    v5 = *(_DWORD *)(a2 + 4LL * i + 60);
    if ( *(_DWORD *)(a2 + 4LL * i + 92) + *(_DWORD *)(a1 + 4LL * i) >= 0 )
      v6 = *(_DWORD *)(a2 + 4LL * i + 92) + *(_DWORD *)(a1 + 4LL * i);
    else
      v6 = 0x7FFFFFFF;
    v8 = 0x7FFFFFFF / v6;
    if ( v6 <= 8 * v5 )
    {
      if ( v6 >= v5 )
        v3 = sub_1401BE3A0((__int16)((__int64)(int)((v5 * (__int64)v8) >> 16) >> 5), v7);
      else
        v3 = sub_1401BE3A0(0x400u, v7);
    }
    else
    {
      v3 = sub_1401BE3A0(0x80u, v7);
    }
    *(_DWORD *)(a2 + 4LL * i + 76) += (v3 * (__int64)(v8 - *(_DWORD *)(a2 + 4LL * i + 76))) >> 16;
    if ( 0x7FFFFFFF / *(_DWORD *)(a2 + 4LL * i + 76) >= 0xFFFFFF )
      v9 = 0xFFFFFF;
    else
      v9 = 0x7FFFFFFF / *(_DWORD *)(a2 + 4LL * i + 76);
    *(_DWORD *)(a2 + 4LL * i + 60) = v9;
    result = (unsigned int)(i + 1);
  }
  return result;
}

