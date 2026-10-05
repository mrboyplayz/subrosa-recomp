/* Address: 0x14017d900 | Name: sub_14017D900 | Size: 342 bytes */
__int64 __fastcall sub_14017D900(unsigned __int8 *a1, int a2)
{
  int v4; // edx
  int v5; // r10d
  int v6; // r8d
  unsigned __int8 *v7; // r9
  int v8; // ebx
  int v9; // edx
  int v10; // r10d
  unsigned int v11; // r8d
  int v12; // r9d

  if ( a1[1] + (*a1 << 8) != 1 )
  {
    if ( a1[1] + (*a1 << 8) == 2 )
    {
      v4 = 0;
      v5 = a1[3] - 1 + (a1[2] << 8);
      if ( v5 >= 0 )
      {
        while ( 1 )
        {
          v6 = (v5 + v4) >> 1;
          v7 = &a1[6 * v6 + 4];
          v8 = v7[1] + (*v7 << 8);
          if ( a2 >= v8 )
          {
            if ( a2 <= v7[3] + (v7[2] << 8) )
              return a2 + v7[5] + (v7[4] << 8) - v8;
            v4 = v6 + 1;
          }
          else
          {
            v5 = v6 - 1;
          }
          if ( v4 > v5 )
            return 0xFFFFFFFFLL;
        }
      }
    }
    else
    {
      sub_14023E640(L"0", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 2351);
    }
    return 0xFFFFFFFFLL;
  }
  v9 = 0;
  v10 = (a1[2] << 8) + a1[3] - 1;
  if ( v10 < 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v11 = (v10 + v9) >> 1;
    v12 = a1[2 * v11 + 5] + (a1[2 * v11 + 4] << 8);
    if ( a2 >= v12 )
      break;
    v10 = v11 - 1;
LABEL_18:
    if ( v9 > v10 )
      return 0xFFFFFFFFLL;
  }
  if ( a2 > v12 )
  {
    v9 = v11 + 1;
    goto LABEL_18;
  }
  return v11;
}

