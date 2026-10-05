/* Address: 0x14020ad00 | Name: sub_14020AD00 | Size: 199 bytes */
__int64 __fastcall sub_14020AD00(
        const struct FH4::UWMap4::iterator *a1,
        unsigned int a2,
        const struct FH4::UWMap4::iterator *a3,
        unsigned int a4,
        const struct FH4::UWMap4::iterator *a5)
{
  unsigned __int64 v7; // r10
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  v7 = *((_QWORD *)a5 + 1);
  if ( v7 > *((_QWORD *)a3 + 1) || *((_QWORD *)a1 + 1) > v7 )
    return 0xFFFFFFFFLL;
  if ( (__int64)(v7 - *((_QWORD *)a1 + 1)) >= (__int64)(*((_QWORD *)a3 + 1) - v7) )
  {
    a2 = a4;
    v9 = *(__m128i *)a5;
    if ( *((_QWORD *)a3 + 1) > _mm_srli_si128(v9, 8).m128i_u64[0] )
    {
      do
      {
        MEMORY[0x14020A9E4]((FH4::UWMap4 *)v9.m128i_i64[0], (unsigned __int8 **)&v9.m128i_i64[1]);
        --a2;
      }
      while ( *((_QWORD *)a3 + 1) > v9.m128i_i64[1] );
    }
  }
  else
  {
    v9 = *(__m128i *)a1;
    if ( v7 > _mm_srli_si128(v9, 8).m128i_u64[0] )
    {
      do
      {
        MEMORY[0x14020A9E4]((FH4::UWMap4 *)v9.m128i_i64[0], (unsigned __int8 **)&v9.m128i_i64[1]);
        ++a2;
      }
      while ( *((_QWORD *)a5 + 1) > v9.m128i_i64[1] );
    }
  }
  return a2;
}

