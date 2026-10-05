/* Address: 0x14004f030 | Name: sub_14004F030 | Size: 105 bytes */
_BOOL8 __fastcall sub_14004F030(_BYTE *a1)
{
  int v1; // ebx
  int i; // esi
  __int64 v4; // rax

  v1 = dword_1406A6780;
  for ( i = dword_1406A6784; v1 < i; dword_1406A6780 = ++v1 )
  {
    if ( (unsigned int)sub_140028EC0(a1) )
      break;
  }
  v4 = -1;
  do
    ++v4;
  while ( a1[v4] );
  dword_1406A6780 = v4 + v1;
  return (int)v4 + v1 < i;
}

