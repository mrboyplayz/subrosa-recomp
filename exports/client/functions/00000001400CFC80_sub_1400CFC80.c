/* Address: 0x1400cfc80 | Name: sub_1400CFC80 | Size: 1122 bytes */
double __fastcall sub_1400CFC80(int a1, __int64 a2, __int64 a3, double a4, int a5, float a6, char a7)
{
  __m128i v7; // xmm2
  int v8; // xmm0_4
  int v9; // xmm10_4
  __m128i v10; // xmm12
  __int64 v11; // rbx
  double v12; // xmm1_8
  double v13; // xmm0_8
  __int64 v14; // r8
  __m128i v15; // xmm9
  __int64 v16; // rbx
  unsigned int v17; // eax
  double result; // xmm0_8

  v8 = 1059061760;
  v9 = 0;
  v10 = v7;
  v11 = a1;
  if ( (a7 & 1) != 0 )
    v9 = 1056964608;
  if ( (a7 & 8) != 0 )
  {
    v8 = 1048576000;
    v9 = 0;
  }
  v15 = (__m128i)LODWORD(a6);
  sub_14006D660(*(double *)v7.m128i_i64, a4, a3, a6, 0, v8, v8, v8, 1065353216);
  HIDWORD(v12) = HIDWORD(a4);
  *(float *)&v12 = *(float *)&a4 + 2.0;
  HIDWORD(v13) = v7.m128i_i32[1];
  *(float *)&v13 = *(float *)v7.m128i_i32 + 2.0;
  sub_14006D660(v13, v12, v14, a6 - 4.0, 0, v9, v9, v9, 1065353216);
  *(float *)v10.m128i_i32 = *(float *)v7.m128i_i32 + 4.0;
  *(float *)v15.m128i_i32 = (float)(a6 * 0.5) + *(float *)&a4;
  v16 = 23 * v11;
  sub_14006D930(
    &dword_140404A6C[v16 + 179473704],
    (unsigned int)_mm_cvtsi128_si32(v10),
    (unsigned int)_mm_cvtsi128_si32(v15),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
    68);
  sub_14006D930(
    "/i",
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x43F00000u),
    (unsigned int)_mm_cvtsi128_si32(v15),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
    6);
  sub_14006D930(
    "/i///i",
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x440C0000u),
    (unsigned int)_mm_cvtsi128_si32(v15),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
    6);
  v17 = dword_140404A6C[v16 + 179473721];
  if ( v17 == 5 )
  {
    sub_14006D930(
      "Eliminator",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44280000u),
      (unsigned int)_mm_cvtsi128_si32(v15),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      6);
    v17 = dword_140404A6C[v16 + 179473721];
  }
  if ( v17 == 3 )
  {
    sub_14006D930(
      "Round",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44280000u),
      (unsigned int)_mm_cvtsi128_si32(v15),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      6);
    v17 = dword_140404A6C[v16 + 179473721];
  }
  if ( v17 == 4 )
  {
    sub_14006D930(
      "World",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44280000u),
      (unsigned int)_mm_cvtsi128_si32(v15),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      6);
    v17 = dword_140404A6C[v16 + 179473721];
  }
  if ( v17 == 7 )
    sub_14006D930(
      "Versus",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44280000u),
      (unsigned int)_mm_cvtsi128_si32(v15),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      6);
  result = sub_14006D930(
             "Alpha /i/c",
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x44440000u),
             (unsigned int)_mm_cvtsi128_si32(v15),
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
             6);
  if ( dword_140404A6C[v16 + 179473723] )
    return sub_14006D930(
             "Yes",
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x445B8000u),
             (unsigned int)_mm_cvtsi128_si32(v15),
             (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
             6);
  return result;
}

