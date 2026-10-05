/* Address: 0x140245e48 | Name: sub_140245E48 | Size: 93 bytes */
__int64 __fastcall sub_140245E48(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbx

  if ( a1 >= 0x1FFFFFFFFFFFFFFFLL )
    return 0;
  if ( a2 >= 0xFFFFFFFFFFFFFFFFuLL / a3 )
    return 0;
  v3 = 8 * a1;
  if ( ~v3 <= a3 * a2 )
    return 0;
  v4 = calloc_base(a3 * a2 + v3, 1);
  free_base(nullptr);
  return v4;
}

