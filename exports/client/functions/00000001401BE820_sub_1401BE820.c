/* Address: 0x1401be820 | Name: sub_1401BE820 | Size: 613 bytes */
__int64 __fastcall sub_1401BE820(signed int a1, int a2)
{
  int v2; // eax
  int v4; // [rsp+20h] [rbp-68h]
  int v5; // [rsp+24h] [rbp-64h]
  int v6; // [rsp+38h] [rbp-50h]
  int v7; // [rsp+3Ch] [rbp-4Ch]
  int v8; // [rsp+40h] [rbp-48h]
  int v9; // [rsp+44h] [rbp-44h]
  int v10; // [rsp+48h] [rbp-40h]

  if ( a1 <= 0 )
    v2 = sub_1401BA490(-a1);
  else
    v2 = sub_1401BA490(a1);
  v5 = ((0x1FFFFFFF
       / (a1 << (v2 - 1) >> 16)
       * (__int64)(int)(8 * (0x20000000 - ((0x1FFFFFFF / (a1 << (v2 - 1) >> 16) * (__int64)(a1 << (v2 - 1))) >> 16)))) >> 16)
     + ((0x1FFFFFFF / (a1 << (v2 - 1) >> 16)) << 16);
  v4 = 61 - (v2 - 1) - a2;
  if ( v4 > 0 )
  {
    if ( v4 >= 32 )
      return 0;
    else
      return (unsigned int)(v5 >> v4);
  }
  else
  {
    if ( (int)0x80000000 >> (a2 - (61 - (v2 - 1))) <= 0x7FFFFFFF >> (a2 - (61 - (v2 - 1))) )
    {
      if ( v5 <= 0x7FFFFFFF >> (a2 - (61 - (v2 - 1))) )
      {
        if ( v5 >= (int)0x80000000 >> (a2 - (61 - (v2 - 1))) )
          v8 = ((0x1FFFFFFF
               / (a1 << (v2 - 1) >> 16)
               * (__int64)(int)(8
                              * (0x20000000 - ((0x1FFFFFFF / (a1 << (v2 - 1) >> 16) * (__int64)(a1 << (v2 - 1))) >> 16)))) >> 16)
             + ((0x1FFFFFFF / (a1 << (v2 - 1) >> 16)) << 16);
        else
          v8 = (int)0x80000000 >> (a2 - (61 - (v2 - 1)));
        v9 = v8;
      }
      else
      {
        v9 = 0x7FFFFFFF >> (a2 - (61 - (v2 - 1)));
      }
      v10 = v9;
    }
    else
    {
      if ( v5 <= (int)0x80000000 >> (a2 - (61 - (v2 - 1))) )
      {
        if ( v5 >= 0x7FFFFFFF >> (a2 - (61 - (v2 - 1))) )
          v6 = ((0x1FFFFFFF
               / (a1 << (v2 - 1) >> 16)
               * (__int64)(int)(8
                              * (0x20000000 - ((0x1FFFFFFF / (a1 << (v2 - 1) >> 16) * (__int64)(a1 << (v2 - 1))) >> 16)))) >> 16)
             + ((0x1FFFFFFF / (a1 << (v2 - 1) >> 16)) << 16);
        else
          v6 = 0x7FFFFFFF >> (a2 - (61 - (v2 - 1)));
        v7 = v6;
      }
      else
      {
        v7 = (int)0x80000000 >> (a2 - (61 - (v2 - 1)));
      }
      v10 = v7;
    }
    return (unsigned int)(v10 << (a2 - (61 - (v2 - 1))));
  }
}

