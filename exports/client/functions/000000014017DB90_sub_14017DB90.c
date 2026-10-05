/* Address: 0x14017db90 | Name: sub_14017DB90 | Size: 302 bytes */
__int64 __fastcall sub_14017DB90(unsigned __int8 *a1, int a2)
{
  int v5; // r10d
  int v6; // r9d
  int v7; // edx
  unsigned __int8 *v8; // r8
  int v9; // ecx
  int v10; // r9d
  int v11; // edx

  if ( a1[1] + (*a1 << 8) != 1 )
  {
    if ( a1[1] + (*a1 << 8) == 2 )
    {
      v5 = 0;
      v6 = (a1[2] << 8) + a1[3] - 1;
      if ( v6 >= 0 )
      {
        while ( 1 )
        {
          v7 = (v6 + v5) >> 1;
          v8 = &a1[6 * v7 + 4];
          if ( a2 >= v8[1] + (*v8 << 8) )
          {
            if ( a2 <= v8[3] + (v8[2] << 8) )
              return v8[5] + (v8[4] << 8);
            v5 = v7 + 1;
          }
          else
          {
            v6 = v7 - 1;
          }
          if ( v5 > v6 )
            return 0xFFFFFFFFLL;
        }
      }
    }
    else
    {
      sub_14023E640(L"0", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 2400);
    }
    return 0xFFFFFFFFLL;
  }
  v9 = a1[2];
  v10 = a1[3];
  v11 = v10 + (v9 << 8);
  if ( a2 < v11 || a2 >= v10 + ((v9 + a1[4]) << 8) + a1[5] )
    return 0xFFFFFFFFLL;
  return (a1[2 * (a2 - v11) + 6] << 8) + (unsigned int)a1[2 * (a2 - v11) + 7];
}

