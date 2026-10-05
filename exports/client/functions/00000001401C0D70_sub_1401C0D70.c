/* Address: 0x1401c0d70 | Name: sub_1401C0D70 | Size: 365 bytes */
__int64 __fastcall sub_1401C0D70(__int64 a1, __int64 a2, int a3, __int16 a4, __int16 a5, __int64 a6)
{
  __int64 result; // rax
  _BYTE v7[4]; // [rsp+20h] [rbp-38h] BYREF
  int i; // [rsp+24h] [rbp-34h]
  int j; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]
  int v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]
  char *v14; // [rsp+48h] [rbp-10h]
  int v16; // [rsp+70h] [rbp+18h]

  v13 = 1;
  v7[1] = 0;
  v12 = a2;
  v14 = (char *)&unk_140282738 + 7 * (__int16)(a5 + 2 * a4);
  v16 = (a3 + 8) >> 4;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)v16;
    if ( i >= v16 )
      break;
    v10 = *(_DWORD *)(a6 + 4LL * i);
    if ( v10 > 0 )
    {
      if ( (v10 & 0x1Fu) >= 6 )
        v11 = 6;
      else
        v11 = v10 & 0x1F;
      v7[0] = v14[v11];
      for ( j = 0; j < 16; ++j )
      {
        if ( *(_BYTE *)(v12 + j) )
          sub_14019A4F0(a1, (*(char *)(v12 + j) >> 15) + 1, (__int64)v7, 8);
      }
    }
    v12 += 16;
  }
  return result;
}

