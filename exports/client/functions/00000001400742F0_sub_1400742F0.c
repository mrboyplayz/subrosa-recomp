/* Address: 0x1400742f0 | Name: sub_1400742F0 | Size: 760 bytes */
__int64 __fastcall sub_1400742F0(int a1, double a2, double a3)
{
  int v3; // xmm9_4
  float v4; // xmm11_4
  __int64 v6; // rbx
  void (__fastcall *v7)(_QWORD, _QWORD); // rax
  double v9; // xmm1_8
  double v10; // xmm0_8
  __int64 v11; // r8
  __m128i v12; // xmm8
  __int64 v13; // r8
  __int64 v14; // r8
  __m128i v15; // xmm2

  v3 = 0;
  v4 = *(float *)&a3;
  if ( a1 == dword_140404A6C[70087109] )
    v3 = 1048576000;
  v6 = 122LL * a1;
  if ( (dword_140404A6C[v6 + 70087217] & **(_DWORD **)&dword_140404A6C[v6 + 70087215]) == dword_140404A6C[v6 + 70087217] )
  {
    if ( a1 == dword_140404A6C[70087109] )
      v3 = 1065353216;
    else
      v3 = 1063256064;
  }
  v7 = *(void (__fastcall **)(_QWORD, _QWORD))&dword_140404A6C[v6 + 70087149];
  if ( v7 )
  {
    v7(dword_140404A6C[v6 + 70087146], dword_140404A6C[v6 + 70087147]);
    return unk_140404050(3553, dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777086]);
  }
  else
  {
    HIDWORD(v9) = HIDWORD(a3);
    HIDWORD(v10) = HIDWORD(a2);
    sub_14006D660(
      a2,
      a3,
      a1,
      *(float *)&dword_140404A6C[v6 + 70087128],
      0,
      1063256064,
      1063256064,
      1063256064,
      1065353216);
    *(float *)&v9 = *(float *)&a3 + 2.0;
    *(float *)&v10 = *(float *)&a2 + 2.0;
    sub_14006D660(v10, v9, v11, *(float *)&dword_140404A6C[v6 + 70087128] - 4.0, 0, 0, 0, 0, 1065353216);
    v12 = (__m128i)dword_140404A6C[v6 + 70087128];
    *(float *)&v9 = *(float *)&a3 + 4.0;
    *(float *)&v10 = *(float *)&a2 + 4.0;
    *(float *)v12.m128i_i32 = fmaxf(*(float *)v12.m128i_i32 - 8.0, 4.0);
    sub_14006D660(v10, v9, v13, *(float *)v12.m128i_i32, 0, 1056964608, 1056964608, 1056964608, 1065353216);
    *(float *)&v9 = *(float *)&a3 + 6.0;
    HIDWORD(v10) = HIDWORD(a2);
    *(float *)&v10 = *(float *)&a2 + 6.0;
    sub_14006D660(v10, v9, v14, *(float *)v12.m128i_i32 - 4.0, 0, v3, v3, v3, 1065353216);
    v15 = (__m128i)dword_140404A6C[v6 + 70087128];
    *(float *)v12.m128i_i32 = (float)((float)(*(float *)v12.m128i_i32 + *(float *)&dword_140404A6C[v6 + 70087127]) * 0.5)
                            + *(float *)&a2;
    *(float *)v15.m128i_i32 = (float)(*(float *)v15.m128i_i32 * 0.5) + v4;
    return sub_14006D930(
             &dword_140404A6C[v6 + 70087151],
             (unsigned int)_mm_cvtsi128_si32(v12),
             (unsigned int)_mm_cvtsi128_si32(v15),
             (unsigned int)_mm_cvtsi128_si32((__m128i)dword_140404A6C[70087071]),
             69);
  }
}

