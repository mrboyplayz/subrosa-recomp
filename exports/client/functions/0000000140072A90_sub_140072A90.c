/* Address: 0x140072a90 | Name: sub_140072A90 | Size: 517 bytes */
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_140072A90(int a1, double a2, __int64 a3)
{
  double v3; // xmm2_8
  __m128i v4; // xmm6
  int v5; // xmm0_4
  float v6; // xmm9_4
  __int64 v7; // rbx
  unsigned int v8; // edi
  void (__fastcall *v9)(_QWORD, _QWORD); // rax
  __m128i v11; // xmm2
  __m128i v12; // xmm1
  __m128i v13; // xmm2

  v4 = *(__m128i *)&a2;
  v5 = 1056964608;
  v6 = *(float *)&v3;
  v7 = 122LL * a1;
  v8 = **(_DWORD **)&dword_140404A6C[v7 + 70087223];
  if ( a1 == dword_140404A6C[70087109] )
    v5 = 1061158912;
  v9 = *(void (__fastcall **)(_QWORD, _QWORD))&dword_140404A6C[v7 + 70087149];
  if ( v9 )
  {
    v9(dword_140404A6C[v7 + 70087146], v8);
    return sub_14007BB00();
  }
  else
  {
    sub_14006D660(a2, v3, a3, *(float *)&dword_140404A6C[v7 + 70087128], 0, v5, v5, v5, 1056964608);
    if ( v8 != -1 )
    {
      v11 = (__m128i)dword_140404A6C[v7 + 70087128];
      v12 = (__m128i)dword_140404A6C[v7 + 70087127];
      *(float *)v11.m128i_i32 = (float)(*(float *)v11.m128i_i32 * 0.5) + v6;
      *(float *)v12.m128i_i32 = (float)(*(float *)v12.m128i_i32 * 0.5) + *(float *)v4.m128i_i32;
      sub_14006D930(
        *(_QWORD *)&dword_140404A6C[v7 + 70087217] + (int)(v8 * dword_140404A6C[v7 + 70087219]),
        (unsigned int)_mm_cvtsi128_si32(v12),
        (unsigned int)_mm_cvtsi128_si32(v11),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41500000u),
        69);
    }
    v13 = (__m128i)dword_140404A6C[v7 + 70087128];
    *(float *)v4.m128i_i32 = (float)(*(float *)v4.m128i_i32 + *(float *)&dword_140404A6C[v7 + 70087127]) + 4.0;
    *(float *)v13.m128i_i32 = (float)(*(float *)v13.m128i_i32 * 0.5) + v6;
    return sub_14006D930(
             &dword_140404A6C[v7 + 70087151],
             (unsigned int)_mm_cvtsi128_si32(v4),
             (unsigned int)_mm_cvtsi128_si32(v13),
             (unsigned int)_mm_cvtsi128_si32((__m128i)dword_140404A6C[v7 + 70087133]),
             4);
  }
}

