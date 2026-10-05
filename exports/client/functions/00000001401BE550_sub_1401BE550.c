/* Address: 0x1401be550 | Name: sub_1401BE550 | Size: 702 bytes */
__int64 __fastcall sub_1401BE550(signed int a1, signed int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v6; // [rsp+20h] [rbp-68h]
  int v7; // [rsp+24h] [rbp-64h]
  int v8; // [rsp+24h] [rbp-64h]
  signed int v9; // [rsp+28h] [rbp-60h]
  int v10; // [rsp+38h] [rbp-50h]
  int v11; // [rsp+3Ch] [rbp-4Ch]
  int v12; // [rsp+44h] [rbp-44h]
  int v13; // [rsp+48h] [rbp-40h]
  int v14; // [rsp+4Ch] [rbp-3Ch]
  int v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+54h] [rbp-34h]

  if ( a1 <= 0 )
    v3 = sub_1401BA490(-a1);
  else
    v3 = sub_1401BA490(a1);
  v11 = v3 - 1;
  v9 = a1 << (v3 - 1);
  if ( a2 <= 0 )
    v4 = sub_1401BA490(-a2);
  else
    v4 = sub_1401BA490(a2);
  v10 = 0x1FFFFFFF / (a2 << (v4 - 1) >> 16);
  v7 = ((__int16)v10 * (__int64)v9) >> 16;
  v8 = (((__int16)v10 * (__int64)(int)(v9 - 8 * ((unsigned __int64)(v7 * (__int64)(a2 << (v4 - 1))) >> 32))) >> 16) + v7;
  v6 = v11 + 29 - (v4 - 1) - a3;
  if ( v6 >= 0 )
  {
    if ( v6 >= 32 )
      return 0;
    else
      return (unsigned int)(v8 >> v6);
  }
  else
  {
    if ( (int)0x80000000 >> (a3 - (v11 + 29 - (v4 - 1))) <= 0x7FFFFFFF >> (a3 - (v11 + 29 - (v4 - 1))) )
    {
      if ( v8 <= 0x7FFFFFFF >> (a3 - (v11 + 29 - (v4 - 1))) )
      {
        if ( v8 >= (int)0x80000000 >> (a3 - (v11 + 29 - (v4 - 1))) )
          v14 = v8;
        else
          v14 = (int)0x80000000 >> (a3 - (v11 + 29 - (v4 - 1)));
        v15 = v14;
      }
      else
      {
        v15 = 0x7FFFFFFF >> (a3 - (v11 + 29 - (v4 - 1)));
      }
      v16 = v15;
    }
    else
    {
      if ( v8 <= (int)0x80000000 >> (a3 - (v11 + 29 - (v4 - 1))) )
      {
        if ( v8 >= 0x7FFFFFFF >> (a3 - (v11 + 29 - (v4 - 1))) )
          v12 = v8;
        else
          v12 = 0x7FFFFFFF >> (a3 - (v11 + 29 - (v4 - 1)));
        v13 = v12;
      }
      else
      {
        v13 = (int)0x80000000 >> (a3 - (v11 + 29 - (v4 - 1)));
      }
      v16 = v13;
    }
    return (unsigned int)(v16 << (a3 - (v11 + 29 - (v4 - 1))));
  }
}

