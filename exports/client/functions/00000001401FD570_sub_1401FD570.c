/* Address: 0x1401fd570 | Name: sub_1401FD570 | Size: 39 bytes */
__int64 __fastcall MEMORY[0x1401FD570](__int64 a1, __int64 a2)
{
  char *v2; // rax
  __int64 v3; // rdx
  char v4; // cl

  if ( a1 == a2 )
    return 0;
  v2 = (char *)(a1 + 9);
  v3 = a2 - a1;
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 != v2[v3] )
      break;
    ++v2;
    if ( !v4 )
      return 0;
  }
  return (unsigned __int8)*v2 < (unsigned __int8)v2[v3] ? -1 : 1;
}

