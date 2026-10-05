/* Address: 0x140074040 | Name: sub_140074040 | Size: 675 bytes */
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_140074040(int a1, double a2, __int64 a3)
{
  double v3; // xmm2_8
  __m128i v4; // xmm9
  float v5; // xmm10_4
  __int64 v6; // rbx
  double v7; // xmm1_8
  __int64 v8; // rbx
  __int64 v9; // r8
  signed int v10; // edx
  signed int *v11; // rax
  signed int v12; // ecx
  unsigned int v13; // eax
  double v14; // xmm4_8
  __m128i v15; // xmm2
  __m128i v16; // xmm1
  __m128i v17; // xmm2

  v4 = *(__m128i *)&a2;
  v5 = *(float *)&v3;
  v6 = a1;
  if ( a1 == dword_140404A6C[70087109] || dword_140404A6C[122 * a1 + 70087116] )
    sub_14006D660(
      a2,
      v3,
      a3,
      *(float *)&dword_140404A6C[122 * a1 + 70087128],
      0,
      dword_140404A6C[70087099],
      dword_140404A6C[70087100],
      dword_140404A6C[70087101],
      dword_140404A6C[70087102]);
  else
    sub_14006D660(
      a2,
      v3,
      a3,
      *(float *)&dword_140404A6C[122 * a1 + 70087128],
      0,
      dword_140404A6C[70087095],
      dword_140404A6C[70087096],
      dword_140404A6C[70087097],
      dword_140404A6C[70087098]);
  HIDWORD(v7) = HIDWORD(v3);
  v8 = 122 * v6;
  v9 = dword_140404A6C[v8 + 70087217];
  v10 = v9;
  v11 = *(signed int **)&dword_140404A6C[v8 + 70087215];
  v12 = dword_140404A6C[v8 + 70087218];
  if ( *v11 >= (int)v9 )
    v10 = *v11;
  v13 = dword_140404A6C[v8 + 70087218];
  if ( v10 <= v12 )
    v13 = v10;
  *(_QWORD *)&v14 = COERCE_UNSIGNED_INT((float)(int)(v13 - v9));
  *(float *)&v14 = (float)((float)(*(float *)&v14
                                 * (float)(*(float *)&dword_140404A6C[v8 + 70087127]
                                         - *(float *)&dword_140404A6C[v8 + 70087220]))
                         / (float)(v12 - v9))
                 + *(float *)v4.m128i_i32;
  *(float *)&v7 = *(float *)&v3 + 4.0;
  sub_14006D660(
    v14,
    v7,
    v9,
    *(float *)&dword_140404A6C[v8 + 70087128] - 8.0,
    0,
    1056964608,
    1056964608,
    1056964608,
    1065353216);
  v15 = (__m128i)dword_140404A6C[v8 + 70087128];
  v16 = (__m128i)dword_140404A6C[v8 + 70087127];
  *(float *)v15.m128i_i32 = (float)(*(float *)v15.m128i_i32 * 0.5) + v5;
  *(float *)v16.m128i_i32 = (float)(*(float *)v16.m128i_i32 * 0.5) + *(float *)v4.m128i_i32;
  sub_14006D930(
    "/i",
    (unsigned int)_mm_cvtsi128_si32(v16),
    (unsigned int)_mm_cvtsi128_si32(v15),
    (unsigned int)_mm_cvtsi128_si32((__m128i)dword_140404A6C[v8 + 70087133]),
    5);
  v17 = (__m128i)dword_140404A6C[v8 + 70087128];
  *(float *)v4.m128i_i32 = (float)(*(float *)v4.m128i_i32 + *(float *)&dword_140404A6C[v8 + 70087127]) + 4.0;
  *(float *)v17.m128i_i32 = (float)(*(float *)v17.m128i_i32 * 0.5) + v5;
  return sub_14006D930(
           &dword_140404A6C[v8 + 70087151],
           (unsigned int)_mm_cvtsi128_si32(v4),
           (unsigned int)_mm_cvtsi128_si32(v17),
           (unsigned int)_mm_cvtsi128_si32((__m128i)dword_140404A6C[v8 + 70087133]),
           4);
}

