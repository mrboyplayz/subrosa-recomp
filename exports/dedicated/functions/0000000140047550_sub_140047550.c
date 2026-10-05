/* Address: 0x140047550 | Name: sub_140047550 | Size: 105 bytes */
_BOOL8 __fastcall sub_140047550(_BYTE *a1)
{
  int v1; // ebx
  int i; // esi
  __int64 v4; // rax

  v1 = dword_195899540;
  for ( i = dword_195899544; v1 < i; dword_195899540 = ++v1 )
  {
    if ( (unsigned int)sub_140047170(a1) )
      break;
  }
  v4 = -1;
  do
    ++v4;
  while ( a1[v4] );
  dword_195899540 = v4 + v1;
  return (int)v4 + v1 < i;
}

