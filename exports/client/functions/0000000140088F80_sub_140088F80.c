/* Address: 0x140088f80 | Name: sub_140088F80 | Size: 545 bytes */
__int64 sub_140088F80()
{
  __m128i si128; // xmm5
  const __m128i *v1; // rax
  __m128i v2; // xmm6
  __m128i v3; // xmm3
  __m128i v4; // xmm2
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __m128i v7; // xmm1

  sub_14006D930(
    "Ping:",
    (unsigned int)_mm_cvtsi128_si32((__m128i)0LL),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x43960000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
    0);
  sub_14006D930(
    "/i",
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x42E00000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x43960000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
    2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_140279150);
  v1 = (const __m128i *)&dword_140404A6C[430859706];
  v2 = _mm_load_si128((const __m128i *)&xmmword_1402799B0);
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = _mm_andnot_si128(_mm_cmpeq_epi32(_mm_loadu_si128(v1 - 1), (__m128i)0LL), v2);
    v3 = _mm_or_si128(_mm_and_si128(_mm_add_epi32(si128, v3), v5), _mm_andnot_si128(v5, v3));
    v6 = _mm_loadu_si128(v1);
    v1 += 2;
    v7 = _mm_andnot_si128(_mm_cmpeq_epi32(v6, (__m128i)0LL), v2);
    v4 = _mm_or_si128(_mm_and_si128(_mm_add_epi32(si128, v4), v7), _mm_andnot_si128(v7, v4));
  }
  while ( (__int64)v1 < (__int64)&dword_140404A6C[430859962] );
  sub_14006D930(
    "Packetloss:",
    (unsigned int)_mm_cvtsi128_si32((__m128i)0LL),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x439E0000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
    0);
  return sub_14006D930(
           "/i%",
           (unsigned int)_mm_cvtsi128_si32((__m128i)0x42E00000u),
           (unsigned int)_mm_cvtsi128_si32((__m128i)0x439E0000u),
           (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
           2);
}

