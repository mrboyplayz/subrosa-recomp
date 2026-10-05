/* Address: 0x1401c0ef0 | Name: sub_1401C0EF0 | Size: 403 bytes */
__int64 __fastcall sub_1401C0EF0(__int64 a1, __int64 a2, int a3, __int16 a4, __int16 a5, __int64 a6)
{
  __int64 result; // rax
  __int16 v7; // ax
  int i; // [rsp+20h] [rbp-48h]
  int j; // [rsp+24h] [rbp-44h]
  _BYTE v10[4]; // [rsp+28h] [rbp-40h] BYREF
  int v11; // [rsp+2Ch] [rbp-3Ch]
  int v12; // [rsp+30h] [rbp-38h]
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  char *v15; // [rsp+48h] [rbp-20h]
  __int64 v16; // [rsp+50h] [rbp-18h]
  int v18; // [rsp+80h] [rbp+18h]

  v14 = 1;
  v10[1] = 0;
  v13 = a2;
  v15 = (char *)&unk_140282738 + 7 * (__int16)(a5 + 2 * a4);
  v18 = (a3 + 8) >> 4;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)v18;
    if ( i >= v18 )
      break;
    v11 = *(_DWORD *)(a6 + 4LL * i);
    if ( v11 > 0 )
    {
      if ( (v11 & 0x1Fu) >= 6 )
        v12 = 6;
      else
        v12 = v11 & 0x1F;
      v10[0] = v15[v12];
      for ( j = 0; j < 16; ++j )
      {
        if ( *(__int16 *)(v13 + 2LL * j) > 0 )
        {
          v16 = j;
          v7 = sub_14019AFE0(a1, (__int64)v10, 8);
          *(_WORD *)(v13 + 2LL * j) = (2 * v7 - 1) * *(_WORD *)(v13 + 2 * v16);
        }
      }
    }
    v13 += 32;
  }
  return result;
}

