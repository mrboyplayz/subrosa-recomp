/* Address: 0x14024d2cc | Name: _errcode | Size: 67 bytes */
__int64 __fastcall errcode(char a1)
{
  if ( (a1 & 0x20) != 0 )
  {
    return 5;
  }
  else if ( (a1 & 8) != 0 )
  {
    return 1;
  }
  else if ( (a1 & 4) != 0 )
  {
    return 2;
  }
  else if ( (a1 & 1) != 0 )
  {
    return 3;
  }
  else
  {
    return (unsigned int)(2 * (a1 & 2));
  }
}

