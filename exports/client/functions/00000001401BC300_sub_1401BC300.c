/* Address: 0x1401bc300 | Name: sub_1401BC300 | Size: 190 bytes */
__int64 __fastcall sub_1401BC300(int a1)
{
  if ( a1 >= 0 )
  {
    if ( a1 < 192 )
      return dword_140281F88[a1 >> 5] + (a1 & 0x1Fu) * word_1402801A8[2 * (a1 >> 5)];
    else
      return 0x7FFF;
  }
  else if ( -a1 < 192 )
  {
    return dword_140282200[-a1 >> 5] - (-(char)a1 & 0x1Fu) * word_1402801A8[2 * (-a1 >> 5)];
  }
  else
  {
    return 0;
  }
}

