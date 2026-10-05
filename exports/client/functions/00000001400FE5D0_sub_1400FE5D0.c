/* Address: 0x1400fe5d0 | Name: sub_1400FE5D0 | Size: 388 bytes */
double sub_1400FE5D0()
{
  double result; // xmm0_8

  sub_14006D930(
    "Sub Rosa",
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x43200000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
    1);
  sub_14006D930(
    "ALPHA /i/c",
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x43300000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
    1);
  result = sub_14006D930(
             (char *)off_1402B2810,
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x43400000u),
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x41600000u),
             65);
  if ( dword_140404A6C[278384725] )
    return sub_14006D930(
             "Steam",
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x44090000u),
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x41400000u),
             0);
  return result;
}

