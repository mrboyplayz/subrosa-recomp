/* Address: 0x140091df0 | Name: sub_140091DF0 | Size: 105 bytes */
_BOOL8 __fastcall sub_140091DF0(_BYTE *a1)
{
  signed int v1; // ebx
  signed int i; // esi
  __int64 v4; // rax

  v1 = dword_140404A6C[293250413];
  for ( i = dword_140404A6C[293250414]; v1 < i; dword_140404A6C[293250413] = ++v1 )
  {
    if ( (unsigned int)sub_14003C6F0(a1) )
      break;
  }
  v4 = -1;
  do
    ++v4;
  while ( a1[v4] );
  dword_140404A6C[293250413] = v4 + v1;
  return (int)v4 + v1 < i;
}

