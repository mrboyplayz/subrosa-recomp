/* Address: 0x14006c980 | Name: sub_14006C980 | Size: 27 bytes */
__int64 __fastcall sub_14006C980(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int8 v3; // al

  v2 = a2 - (_QWORD)a1;
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

