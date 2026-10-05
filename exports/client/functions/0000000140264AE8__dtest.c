/* Address: 0x140264ae8 | Name: _dtest | Size: 97 bytes */
__int16 __cdecl dtest(double *Px)
{
  __int16 v1; // dx
  __int16 result; // ax

  v1 = *((_WORD *)Px + 3) & 0x7FF0;
  if ( v1 == 32752 )
  {
    if ( (*((_BYTE *)Px + 6) & 0xF) != 0 )
      return 2;
    if ( *((_WORD *)Px + 2) )
      return 2;
    if ( *((_WORD *)Px + 1) )
      return 2;
    result = 1;
    if ( *(_WORD *)Px )
      return 2;
  }
  else
  {
    if ( (*((_WORD *)Px + 3) & 0x7FFF) != 0 )
      return (v1 != 0) - 2;
    result = 0;
    if ( *((_WORD *)Px + 2) || *((_WORD *)Px + 1) || *(_WORD *)Px )
      return (v1 != 0) - 2;
  }
  return result;
}

