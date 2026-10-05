/* Address: 0x14024de20 | Name: _sptype | Size: 116 bytes */
__int64 __fastcall sptype(double a1)
{
  if ( HIDWORD(a1) == 2146435072 && !LODWORD(a1) )
    return 1;
  if ( HIDWORD(a1) == -1048576 && !LODWORD(a1) )
    return 2;
  if ( (HIWORD(a1) & 0x7FF8) == 0x7FF8 )
    return 3;
  if ( (HIWORD(a1) & 0x7FF8) == 0x7FF0 && ((HIDWORD(a1) & 0x7FFFF) != 0 || LODWORD(a1)) )
    return 4;
  return 0;
}

