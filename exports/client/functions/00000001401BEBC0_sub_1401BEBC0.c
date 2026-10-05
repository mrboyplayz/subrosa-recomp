/* Address: 0x1401bebc0 | Name: sub_1401BEBC0 | Size: 578 bytes */
_DWORD *__fastcall sub_1401BEBC0(_DWORD *a1, __int64 a2, signed int a3)
{
  _DWORD *result; // rax
  char v4; // al
  int v5; // eax
  int v6; // [rsp+20h] [rbp-48h] BYREF
  _DWORD *v7; // [rsp+28h] [rbp-40h]
  signed int i; // [rsp+30h] [rbp-38h]
  int v9; // [rsp+34h] [rbp-34h]
  int v10; // [rsp+38h] [rbp-30h] BYREF
  int v11; // [rsp+3Ch] [rbp-2Ch]
  int v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+44h] [rbp-24h]
  signed int v14; // [rsp+48h] [rbp-20h]
  _DWORD *v15; // [rsp+50h] [rbp-18h]
  _DWORD *v16; // [rsp+58h] [rbp-10h]

  v7 = a1 + 1049;
  if ( a1[1046] )
  {
    sub_1401BC4C0(v7 + 15, v7 + 16, a2, a3);
    result = v7;
    v7[12] = 1;
  }
  else
  {
    if ( a1[1061] )
    {
      sub_1401BC4C0(&v6, &v10, a2, a3);
      if ( v10 <= v7[16] )
      {
        if ( v10 < v7[16] )
          v6 >>= v7[16] - v10;
      }
      else
      {
        v4 = v10 - v7[16];
        v15 = v7;
        v7[15] = (int)v7[15] >> v4;
      }
      if ( v6 > v7[15] )
      {
        v5 = sub_1401BA490(v7[15]);
        v11 = v5 - 1;
        v16 = v7;
        v7[15] <<= v5 - 1;
        v6 >>= sub_1401BE420(24 - v11, 0);
        if ( v6 <= 1 )
          v13 = 1;
        else
          v13 = v6;
        v14 = v7[15] / v13;
        v9 = 16 * sub_1401BE4C0(v14);
        v12 = 4 * ((0x10000 - v9) / a3);
        for ( i = 0; i < a3; ++i )
        {
          *(_WORD *)(a2 + 2LL * i) = (unsigned int)(*(__int16 *)(a2 + 2LL * i) * v9) >> 16;
          v9 += v12;
          if ( v9 > 0x10000 )
            break;
        }
      }
    }
    result = v7;
    v7[12] = 0;
  }
  return result;
}

