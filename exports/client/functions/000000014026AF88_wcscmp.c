/* Address: 0x14026af88 | Name: wcscmp | Size: 53 bytes */
int __cdecl wcscmp(const #49 *String1, const #49 *String2)
{
  int v2; // eax
  unsigned int v3; // r8d
  signed __int64 v4; // rcx

  v2 = *(unsigned __int16 *)String2;
  v3 = *(unsigned __int16 *)String1 - v2;
  if ( !v3 )
  {
    v4 = String1 - String2;
    do
    {
      if ( !(_WORD)v2 )
        break;
      String2 = (const #49 *)((char *)String2 + 2);
      v2 = *(unsigned __int16 *)String2;
      v3 = *(unsigned __int16 *)((char *)String2 + v4) - v2;
    }
    while ( !v3 );
  }
  return ((int)v3 > 0) - (v3 >> 31);
}

