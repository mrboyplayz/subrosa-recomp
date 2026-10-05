/* Address: 0x14020c0e8 | Name: sub_14020C0E8 | Size: 165 bytes */
unsigned __int64 __fastcall sub_14020C0E8(
        __m128i *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        FILE *a5)
{
  __int64 v9; // rcx
  unsigned __int64 v11; // rdi

  if ( !a3 || !a4 )
    return 0;
  if ( !a5 )
  {
    if ( a2 != -1 )
      MEMORY[0x1401FCD30](a1, 0, a2);
    *errno() = 22;
    sub_14024CF6C(v9);
    return 0;
  }
  sub_14020B5E0(a5);
  v11 = sub_14020BE38(a1, a2, a3, a4, a5);
  sub_14020B5EC(a5);
  return v11;
}

