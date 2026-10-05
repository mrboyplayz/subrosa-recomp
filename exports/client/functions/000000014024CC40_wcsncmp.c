/* Address: 0x14024cc40 | Name: wcsncmp | Size: 44 bytes */
__int64 __fastcall wcsncmp(_WORD *a1, _WORD *a2, __int64 a3)
{
  if ( !a3 )
    return 0;
  while ( --a3 && *a1 && *a1 == *a2 )
  {
    ++a1;
    ++a2;
  }
  return (unsigned __int16)*a1 - (unsigned int)(unsigned __int16)*a2;
}

