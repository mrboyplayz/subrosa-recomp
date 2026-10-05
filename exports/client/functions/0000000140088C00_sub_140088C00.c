/* Address: 0x140088c00 | Name: sub_140088C00 | Size: 883 bytes */
__int64 sub_140088C00()
{
  __int64 v0; // rax
  __int64 result; // rax
  __m128i v2; // xmm8
  unsigned int *v3; // rdi
  unsigned int *v4; // rbx
  unsigned int *v5; // rsi
  __int64 v6; // rbp
  int v7; // edx

  sub_14006D930(
    "Spectating",
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
    33);
  if ( dword_140404A6C[284021982] != -1 )
  {
    v0 = (int)dword_140404A6C[7166 * dword_140404A6C[284021982] + 280651305];
    if ( (_DWORD)v0 != -1 )
      sub_14006D930(
        0x140000000LL + 14388 * v0 + 291638372,
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44040000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
        33);
  }
  sub_14006D930(
    "Press Space to switch player",
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x44090000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
    33);
  result = sub_14006D930(
             "Press 1 for freecam",
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x440D0000u),
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
             33);
  v2 = (__m128i)0x42800000u;
  v3 = &dword_140404A6C[284023074];
  v4 = &dword_140404A6C[71859139];
  v5 = &dword_140404A6C[71856254];
  v6 = 256;
  do
  {
    if ( *(v4 - 2886) && !*v4 && *(v4 - 2847) == -1 )
    {
      sub_14006D930(
        v5,
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44410000u),
        (unsigned int)_mm_cvtsi128_si32(v2),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
        96);
      if ( *v3 )
      {
        v7 = dword_140404A6C[346696312];
      }
      else if ( *(v4 - 2869) )
      {
        v7 = dword_140404A6C[346696311];
      }
      else
      {
        v7 = dword_140404A6C[346696310];
      }
      result = sub_14006D300(
                 0,
                 v7,
                 752.0,
                 *(float *)v2.m128i_i32,
                 20.0,
                 20.0,
                 0,
                 1065353216,
                 1065353216,
                 1065353216,
                 1065353216);
      *(float *)v2.m128i_i32 = *(float *)v2.m128i_i32 + 20.0;
    }
    v5 += 3597;
    ++v3;
    v4 += 3597;
    --v6;
  }
  while ( v6 );
  return result;
}

