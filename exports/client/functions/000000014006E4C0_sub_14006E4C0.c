/* Address: 0x14006e4c0 | Name: sub_14006E4C0 | Size: 105 bytes */
_BOOL8 __fastcall sub_14006E4C0(_BYTE *a1)
{
  signed int v1; // ebx
  signed int i; // esi
  __int64 v4; // rax

  v1 = dword_140404A6C[129454557];
  for ( i = dword_140404A6C[129454558]; v1 < i; dword_140404A6C[129454557] = ++v1 )
  {
    if ( (unsigned int)sub_14006C870(a1) )
      break;
  }
  v4 = -1;
  do
    ++v4;
  while ( a1[v4] );
  dword_140404A6C[129454557] = v4 + v1;
  return (int)v4 + v1 < i;
}

