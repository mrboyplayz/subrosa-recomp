/* Address: 0x1401f8490 | Name: sub_1401F8490 | Size: 191 bytes */
__int64 __fastcall sub_1401F8490(unsigned __int8 *a1, int a2, _WORD *a3)
{
  if ( a2 >= 1 )
  {
    if ( *a1 >= 0xFCu )
    {
      if ( a2 >= 2 )
      {
        *a3 = *a1 + 4 * a1[1];
        return 2;
      }
      else
      {
        *a3 = -1;
        return 0xFFFFFFFFLL;
      }
    }
    else
    {
      *a3 = *a1;
      return 1;
    }
  }
  else
  {
    *a3 = -1;
    return 0xFFFFFFFFLL;
  }
}

