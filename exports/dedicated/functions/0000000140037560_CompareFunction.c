/* Address: 0x140037560 | Name: CompareFunction | Size: 27 bytes */
__int64 __fastcall CompareFunction(unsigned __int8 *a1, _BYTE *a2)
{
  signed __int64 v2; // rdx
  unsigned __int8 v3; // al

  v2 = a2 - a1;
  while ( 1 )
  {
    v3 = *a1;
    if ( *a1 != a1[v2] )
      break;
    ++a1;
    if ( !v3 )
      return 0;
  }
  return v3 < a1[v2] ? -1 : 1;
}

