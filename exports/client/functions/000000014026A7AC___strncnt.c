/* Address: 0x14026a7ac | Name: __strncnt | Size: 21 bytes */
__int64 __fastcall _strncnt(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0;
  if ( *a1 )
  {
    do
    {
      if ( result == a2 )
        break;
      ++result;
    }
    while ( a1[result] );
  }
  return result;
}

