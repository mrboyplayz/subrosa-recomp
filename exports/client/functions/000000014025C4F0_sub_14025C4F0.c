/* Address: 0x14025c4f0 | Name: sub_14025C4F0 | Size: 519 bytes */
__int64 __fastcall sub_14025C4F0(double a1)
{
  unsigned __int64 v1; // r11
  __int64 v2; // r10
  __int64 v3; // rcx
  __m128i v4; // xmm0
  unsigned __int128 v5; // kr00_16

  v1 = (*(_QWORD *)&a1 >> 52) - 1023LL;
  v2 = 134 - (v1 >> 3);
  v3 = *(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
  v4 = _mm_loadu_si128((const __m128i *)((char *)&unk_14028C170 + v2 + 8));
  v5 = __PAIR128__(
         v3 * _mm_srli_si128(v4, 8).m128i_u64[0],
         ((unsigned __int64)v3 * (unsigned __int128)*(unsigned __int64 *)((char *)&unk_14028C170 + v2)) >> 64)
     + (unsigned __int64)v3 * (unsigned __int128)v4.m128i_u64[0];
  return (__CFSHR__(*((_QWORD *)&v5 + 1), 54 - (v1 & 7))
        + (unsigned __int8)(*((_QWORD *)&v5 + 1) >> (54 - ((unsigned __int8)v1 & 7u))))
       & 3;
}

