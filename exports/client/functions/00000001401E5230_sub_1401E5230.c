/* Address: 0x1401e5230 | Name: sub_1401E5230 | Size: 131 bytes */
__int64 __fastcall sub_1401E5230(int a1, unsigned __int8 *a2)
{
  if ( a1 >= 252 )
  {
    *a2 = (a1 & 3) - 4;
    a2[1] = (a1 - *a2) >> 2;
    return 2;
  }
  else
  {
    *a2 = a1;
    return 1;
  }
}

