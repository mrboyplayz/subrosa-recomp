/* Address: 0x140249f5c | Name: sub_140249F5C | Size: 114 bytes */
char __fastcall sub_140249F5C(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int16 v5; // si
  const unsigned __int16 *v6; // rdx

  v2 = 0;
  if ( !a2 )
    return 1;
  while ( 1 )
  {
    v5 = *(_WORD *)(a1 + 2 * v2);
    v6 = sub_140256DC0();
    if ( !(v5 > 0xFFu ? 0 : v6[v5] & 0x103) )
      break;
    if ( ++v2 >= a2 )
      return 1;
  }
  return 0;
}

