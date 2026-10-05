/* Address: 0x140072760 | Name: sub_140072760 | Size: 615 bytes */
__int64 __fastcall sub_140072760(int a1, double a2, double a3)
{
  int v3; // xmm0_4
  int v4; // r8d
  int v5; // xmm7_4
  float v6; // xmm9_4
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // r8
  void (__fastcall *v12)(_QWORD, _QWORD); // rax
  double v14; // xmm1_8
  double v15; // xmm0_8
  __int64 v16; // r8
  __m128i v17; // xmm2
  __m128i v18; // xmm1

  v3 = 1059061760;
  v4 = 0;
  v5 = 0;
  v6 = *(float *)&a3;
  if ( a1 == dword_140404A6C[70087109] )
  {
    v4 = 1;
    v5 = 1056964608;
  }
  if ( a1 == dword_140404A6C[70087111] )
  {
    v3 = 1063256064;
    v5 = 1056964608;
  }
  v8 = 122LL * a1;
  v9 = dword_140404A6C[v8 + 70087119];
  if ( v9 )
  {
    v3 = 1048576000;
    v5 = 0;
  }
  v10 = v4 | 8;
  if ( !v9 )
    v10 = v4;
  v11 = v10;
  if ( dword_140404A6C[v8 + 70087115] == 2
    && **(_DWORD **)&dword_140404A6C[v8 + 70087215] == dword_140404A6C[v8 + 70087217] )
  {
    v5 = 1052770304;
    v11 = v10 | 4;
  }
  v12 = *(void (__fastcall **)(_QWORD, _QWORD))&dword_140404A6C[v8 + 70087149];
  if ( v12 )
  {
    v12(dword_140404A6C[v8 + 70087146], dword_140404A6C[v8 + 70087147]);
    return unk_140404050(3553, dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777086]);
  }
  else
  {
    sub_14006D660(a2, a3, v11, *(float *)&dword_140404A6C[v8 + 70087128], 0, v3, v3, v3, 1065353216);
    HIDWORD(v14) = HIDWORD(a3);
    HIDWORD(v15) = HIDWORD(a2);
    *(float *)&v14 = *(float *)&a3 + 2.0;
    *(float *)&v15 = *(float *)&a2 + 2.0;
    sub_14006D660(v15, v14, v16, *(float *)&dword_140404A6C[v8 + 70087128] - 4.0, 0, v5, v5, v5, 1065353216);
    v17 = (__m128i)dword_140404A6C[v8 + 70087128];
    v18 = (__m128i)dword_140404A6C[v8 + 70087127];
    *(float *)v17.m128i_i32 = (float)(*(float *)v17.m128i_i32 * 0.5) + v6;
    *(float *)v18.m128i_i32 = (float)(*(float *)v18.m128i_i32 * 0.5) + *(float *)&a2;
    return sub_14006D930(
             &dword_140404A6C[v8 + 70087151],
             (unsigned int)_mm_cvtsi128_si32(v18),
             (unsigned int)_mm_cvtsi128_si32(v17),
             (unsigned int)_mm_cvtsi128_si32((__m128i)dword_140404A6C[70087071]),
             69);
  }
}

