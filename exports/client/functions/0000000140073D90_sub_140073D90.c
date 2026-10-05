/* Address: 0x140073d90 | Name: sub_140073D90 | Size: 688 bytes */
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_140073D90(int a1, double a2, __int64 a3)
{
  double v3; // xmm2_8
  __m128i v4; // xmm10
  float v5; // xmm11_4
  __int64 v6; // rbx
  __int64 v7; // r8
  double v8; // xmm5_8
  __int64 v9; // rbx
  double v10; // xmm4_8
  __m128i v11; // xmm2
  __m128i v12; // xmm1
  __m128i v13; // xmm2

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
  HIDWORD(v8) = HIDWORD(v3);
  *(float *)&v8 = *(float *)&v3 + 4.0;
  v9 = 122 * v6;
  *(_QWORD *)&v10 = **(unsigned int **)&dword_140404A6C[v9 + 70087215];
  *(float *)&v10 = (float)((float)((float)(fminf(
                                             fmaxf(*(float *)&v10, *(float *)&dword_140404A6C[v9 + 70087217]),
                                             *(float *)&dword_140404A6C[v9 + 70087218])
                                         - *(float *)&dword_140404A6C[v9 + 70087217])
                                 * (float)(*(float *)&dword_140404A6C[v9 + 70087127]
                                         - *(float *)&dword_140404A6C[v9 + 70087220]))
                         / (float)(*(float *)&dword_140404A6C[v9 + 70087218] - *(float *)&dword_140404A6C[v9 + 70087217]))
                 + *(float *)&a2;
  sub_14006D660(
    v10,
    v8,
    v7,
    *(float *)&dword_140404A6C[v9 + 70087128] - 8.0,
    0,
    1056964608,
    1056964608,
    1056964608,
    1065353216);
  v11 = (__m128i)dword_140404A6C[v9 + 70087128];
  v12 = (__m128i)dword_140404A6C[v9 + 70087127];
  *(float *)v11.m128i_i32 = (float)(*(float *)v11.m128i_i32 * 0.5) + v5;
  *(float *)v12.m128i_i32 = (float)(*(float *)v12.m128i_i32 * 0.5) + *(float *)v4.m128i_i32;
  sub_14006D930(
    "/f",
    (unsigned int)_mm_cvtsi128_si32(v12),
    (unsigned int)_mm_cvtsi128_si32(v11),
    (unsigned int)_mm_cvtsi128_si32((__m128i)dword_140404A6C[v9 + 70087133]),
    5);
  v13 = (__m128i)dword_140404A6C[v9 + 70087128];
  *(float *)v4.m128i_i32 = (float)(*(float *)v4.m128i_i32 + *(float *)&dword_140404A6C[v9 + 70087127]) + 4.0;
  *(float *)v13.m128i_i32 = (float)(*(float *)v13.m128i_i32 * 0.5) + v5;
  return sub_14006D930(
           &dword_140404A6C[v9 + 70087151],
           (unsigned int)_mm_cvtsi128_si32(v4),
           (unsigned int)_mm_cvtsi128_si32(v13),
           (unsigned int)_mm_cvtsi128_si32((__m128i)dword_140404A6C[v9 + 70087133]),
           4);
}

