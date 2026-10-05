/* Address: 0x140084950 | Name: sub_140084950 | Size: 1369 bytes */
__int64 sub_140084950()
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( !dword_140404A6C[309078286] )
  {
    sub_14006D930(
      "Place Building",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
      1);
    sub_14006D930(
      &dword_140404A6C[22 * dword_140404A6C[309078328] + 225368653],
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43C80000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      0);
    result = (int)dword_140404A6C[309078326];
    if ( dword_140404A6C[309078326] != -1 )
    {
      sub_14006D930(
        &dword_140404A6C[24 * dword_140404A6C[309078326] + 225171851],
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x43DC0000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        0);
      result = sub_14006D930(
                 "/i",
                 (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
                 (unsigned int)_mm_cvtsi128_si32((__m128i)0x43E40000u),
                 (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
                 0);
    }
  }
  if ( dword_140404A6C[309078286] == 1 )
  {
    sub_14006D930(
      "Select Area",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
      1);
    sub_14006D930(
      "sectors:/i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43C80000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      0);
    sub_14006D930(
      "type:/i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43D20000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      0);
    sub_14006D930(
      "x:/i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      0);
    sub_14006D930(
      "y:/i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43880000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      0);
    result = sub_14006D930(
               "z:/i",
               (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
               (unsigned int)_mm_cvtsi128_si32((__m128i)0x43900000u),
               (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
               0);
  }
  if ( dword_140404A6C[309078286] == 2 )
  {
    sub_14006D930(
      "Street",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
      1);
    sub_14006D930(
      "intersectionnum:/i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43C80000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      0);
    result = sub_14006D930(
               "streetnum:/i",
               (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
               (unsigned int)_mm_cvtsi128_si32((__m128i)0x43D20000u),
               (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
               0);
  }
  if ( dword_140404A6C[309078286] == 3 )
  {
    sub_14006D930(
      "Mission",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
      1);
    return sub_14006D930(
             "numofguards:/i",
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x43C80000u),
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
             0);
  }
  return result;
}

