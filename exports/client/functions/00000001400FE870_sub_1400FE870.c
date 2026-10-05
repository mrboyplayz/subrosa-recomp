/* Address: 0x1400fe870 | Name: sub_1400FE870 | Size: 721 bytes */
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_1400FE870(__int64 a1, int a2, __int64 a3, double a4, float a5, float a6, char a7)
{
  double v7; // xmm2_8
  __m128i v8; // xmm7
  __m128i v9; // xmm9
  __int64 v10; // rbx
  __int64 v11; // r8
  __m128i v12; // xmm10
  int v13; // xmm0_4
  __int64 v14; // rax
  __m128i v15; // xmm3
  unsigned int v16; // r9d
  __m128i v17; // xmm2
  __int64 v19; // [rsp+0h] [rbp-2C8h] BYREF
  int v20; // [rsp+28h] [rbp-2A0h]
  int v21; // [rsp+30h] [rbp-298h]
  int v22; // [rsp+38h] [rbp-290h]
  int v23; // [rsp+40h] [rbp-288h]
  _BYTE v24[512]; // [rsp+50h] [rbp-278h] BYREF
  __int64 v25; // [rsp+250h] [rbp-78h]

  v8 = *(__m128i *)&a4;
  v9 = (__m128i)LODWORD(a5);
  v10 = a2;
  sub_14006D660(v7, a4, a3, a6, 0, 1061158912, 1061158912, 1061158912, 1065353216);
  v12 = *(__m128i *)&a4;
  *(float *)v12.m128i_i32 = *(float *)&a4 + 2.0;
  if ( (a7 & 1) != 0 )
    v13 = 1056964608;
  else
    v13 = 1048576000;
  sub_14006D660(v7, *(double *)v12.m128i_i64, v11, a6 - 4.0, 0, v13, v13, v13, 1065353216);
  v14 = (int)dword_140404A6C[v10 + 280649319];
  v15 = (__m128i)0x41800000u;
  if ( !dword_140404A6C[3597 * v14 + 71856270] || dword_140404A6C[v14 + 284023074] )
    v15 = (__m128i)0x41400000u;
  v23 = 1065353216;
  v22 = 1065353216;
  v21 = 1065353216;
  *(float *)v9.m128i_i32 = (float)(a5 * 0.5) + *(float *)&v7;
  v20 = 1065353216;
  sub_14006D930(
    0x140000000LL + 14388 * v14 + 291638372,
    (unsigned int)_mm_cvtsi128_si32(v9),
    (unsigned int)_mm_cvtsi128_si32(v12),
    (unsigned int)_mm_cvtsi128_si32(v15),
    1);
  v16 = dword_140404A6C[3597 * dword_140404A6C[v10 + 280649319] + 71856265];
  sub_140158AB0(v24, "%03d-%04d", v16 / 0x2710, v16 % 0x2710);
  v23 = 1065353216;
  v17 = v8;
  *(float *)v17.m128i_i32 = *(float *)v8.m128i_i32 + 18.0;
  v22 = 1065353216;
  v21 = 1065353216;
  v20 = 1065353216;
  sub_14006D930(
    v24,
    (unsigned int)_mm_cvtsi128_si32(v9),
    (unsigned int)_mm_cvtsi128_si32(v17),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41400000u),
    1);
  if ( dword_140404A6C[dword_140404A6C[v10 + 280649319] + 284023074] )
  {
    *(float *)v8.m128i_i32 = *(float *)v8.m128i_i32 + 30.0;
    v23 = 1065353216;
    v22 = 1065353216;
    v21 = 1065353216;
    v20 = 1065353216;
    sub_14006D930(
      "MUTED",
      (unsigned int)_mm_cvtsi128_si32(v9),
      (unsigned int)_mm_cvtsi128_si32(v8),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      1);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v19 ^ v25);
}

