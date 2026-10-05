/* Address: 0x1400fcb50 | Name: sub_1400FCB50 | Size: 216 bytes */
double sub_1400FCB50()
{
  unsigned int v0; // ecx
  double result; // xmm0_8

  v0 = dword_140404A6C[179662132];
  if ( dword_140404A6C[179662132] - 1 <= 1 )
  {
    result = sub_14006D930(
               "Connecting",
               (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
               (unsigned int)_mm_cvtsi128_si32((__m128i)0x43200000u),
               (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
               1);
    v0 = dword_140404A6C[179662132];
  }
  if ( v0 == 4 )
    return sub_14006D930(
             &dword_140404A6C[179662389],
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x43200000u),
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
             1);
  return result;
}

