/* Address: 0x140072ca0 | Name: sub_140072CA0 | Size: 743 bytes */
__int64 __fastcall sub_140072CA0(int a1, double a2, double a3)
{
  __int64 v3; // r8
  int v4; // xmm9_4
  float v5; // xmm11_4
  __int64 v7; // rbx
  void (__fastcall *v8)(_QWORD, _QWORD); // rax
  double v10; // xmm1_8
  double v11; // xmm0_8
  __int64 v12; // r8
  __m128i v13; // xmm8
  __int64 v14; // r8
  __int64 v15; // r8
  __m128i v16; // xmm2

  v3 = 0;
  v4 = 0;
  v5 = *(float *)&a3;
  if ( a1 == dword_140404A6C[70087109] )
  {
    v4 = 1048576000;
    v3 = 1;
  }
  v7 = 122LL * a1;
  if ( dword_140404A6C[v7 + 70087215] )
  {
    if ( a1 == dword_140404A6C[70087109] )
      v4 = 1065353216;
    else
      v4 = 1063256064;
  }
  v8 = *(void (__fastcall **)(_QWORD, _QWORD))&dword_140404A6C[v7 + 70087149];
  if ( v8 )
  {
    v8(dword_140404A6C[v7 + 70087146], dword_140404A6C[v7 + 70087147]);
    return unk_140404050(3553, dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777086]);
  }
  else
  {
    HIDWORD(v10) = HIDWORD(a3);
    HIDWORD(v11) = HIDWORD(a2);
    sub_14006D660(
      a2,
      a3,
      v3,
      *(float *)&dword_140404A6C[v7 + 70087128],
      0,
      1063256064,
      1063256064,
      1063256064,
      1065353216);
    *(float *)&v10 = *(float *)&a3 + 2.0;
    *(float *)&v11 = *(float *)&a2 + 2.0;
    sub_14006D660(v11, v10, v12, *(float *)&dword_140404A6C[v7 + 70087128] - 4.0, 0, 0, 0, 0, 1065353216);
    v13 = (__m128i)dword_140404A6C[v7 + 70087128];
    *(float *)&v10 = *(float *)&a3 + 4.0;
    *(float *)&v11 = *(float *)&a2 + 4.0;
    *(float *)v13.m128i_i32 = fmaxf(*(float *)v13.m128i_i32 - 8.0, 4.0);
    sub_14006D660(v11, v10, v14, *(float *)v13.m128i_i32, 0, 1056964608, 1056964608, 1056964608, 1065353216);
    *(float *)&v10 = *(float *)&a3 + 6.0;
    HIDWORD(v11) = HIDWORD(a2);
    *(float *)&v11 = *(float *)&a2 + 6.0;
    sub_14006D660(v11, v10, v15, *(float *)v13.m128i_i32 - 4.0, 0, v4, v4, v4, 1065353216);
    v16 = (__m128i)dword_140404A6C[v7 + 70087128];
    *(float *)v13.m128i_i32 = (float)((float)(*(float *)v13.m128i_i32 + *(float *)&dword_140404A6C[v7 + 70087127]) * 0.5)
                            + *(float *)&a2;
    *(float *)v16.m128i_i32 = (float)(*(float *)v16.m128i_i32 * 0.5) + v5;
    return sub_14006D930(
             &dword_140404A6C[v7 + 70087151],
             (unsigned int)_mm_cvtsi128_si32(v13),
             (unsigned int)_mm_cvtsi128_si32(v16),
             (unsigned int)_mm_cvtsi128_si32((__m128i)dword_140404A6C[70087071]),
             69);
  }
}

