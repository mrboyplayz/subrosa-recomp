/* Address: 0x140181710 | Name: sub_140181710 | Size: 119 bytes */
__int64 __fastcall sub_140181710(char *a1)
{
  char v1; // al

  v1 = *a1;
  if ( *a1 == 49 )
  {
    if ( a1[1] || a1[2] )
      return 0;
    return a1[3] == 0;
  }
  else
  {
    if ( v1 == 116 && a1[1] == 121 && a1[2] == 112 && a1[3] == 49 )
      return 1;
    if ( v1 == 79 )
    {
      if ( a1[1] != 84 || a1[2] != 84 )
        return 0;
      return a1[3] == 79;
    }
    else if ( v1 )
    {
      if ( v1 != 116 || a1[1] != 114 || a1[2] != 117 )
        return 0;
      return a1[3] == 101;
    }
    else
    {
      if ( a1[1] != 1 || a1[2] )
        return 0;
      return a1[3] == 0;
    }
  }
}

