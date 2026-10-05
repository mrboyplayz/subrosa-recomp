/* Address: 0x140073860 | Name: sub_140073860 | Size: 987 bytes */
__int64 __fastcall sub_140073860(int a1, double a2, double a3)
{
  float v3; // xmm11_4
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // r8
  int v7; // esi
  signed int v8; // edi
  __m128i v9; // xmm6
  __m128i v10; // xmm7
  void (__fastcall *v11)(_QWORD, _QWORD); // r8
  __m128i v12; // xmm2
  __m128i v13; // xmm1
  float v14; // xmm0_4
  signed int v15; // eax
  __int64 v16; // rax

  v3 = *(float *)&a2;
  v4 = 122LL * a1;
  result = sub_140075460();
  if ( (_DWORD)result )
  {
    sub_14006D660(
      a2,
      a3,
      v6,
      *(float *)&dword_140404A6C[v4 + 70087128],
      0,
      1040187392,
      1040187392,
      1040187392,
      1056964608);
    v7 = 0;
    v10 = (__m128i)dword_140404A6C[v4 + 70087230];
    v8 = 0;
    *(float *)v10.m128i_i32 = *(float *)v10.m128i_i32 * 0.5;
    v9 = v10;
    *(float *)v9.m128i_i32 = *(float *)v10.m128i_i32 + *(float *)&a2;
    for ( *(float *)v10.m128i_i32 = (float)(*(float *)v10.m128i_i32 + *(float *)&a3)
                                  - *(float *)&dword_140404A6C[v4 + 70087232];
          v8 < (int)dword_140404A6C[v4 + 70087220];
          ++v8 )
    {
      v11 = *(void (__fastcall **)(_QWORD, _QWORD))&dword_140404A6C[v4 + 70087149];
      if ( v11 )
      {
        v11(dword_140404A6C[v4 + 70087146], (unsigned int)v8);
      }
      else
      {
        if ( dword_140404A6C[v4 + 70087222] == v8 )
        {
          sub_14006D660(
            *(double *)v9.m128i_i64,
            *(double *)v10.m128i_i64,
            0,
            *(float *)&dword_140404A6C[v4 + 70087229],
            0,
            1061158912,
            1061158912,
            1061158912,
            1056964608);
        }
        else if ( dword_140404A6C[v4 + 70087223] == v8 )
        {
          sub_14006D660(
            *(double *)v9.m128i_i64,
            *(double *)v10.m128i_i64,
            0,
            *(float *)&dword_140404A6C[v4 + 70087229],
            0,
            1059061760,
            1059061760,
            1059061760,
            1056964608);
        }
        v12 = v10;
        *(float *)v12.m128i_i32 = *(float *)v10.m128i_i32 + 3.5;
        v13 = v9;
        *(float *)v13.m128i_i32 = *(float *)v9.m128i_i32 + 4.0;
        sub_14006D930(
          *(_QWORD *)&dword_140404A6C[v4 + 70087217] + (int)(v8 * dword_140404A6C[v4 + 70087219]),
          (unsigned int)_mm_cvtsi128_si32(v13),
          (unsigned int)_mm_cvtsi128_si32(v12),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41500000u),
          0);
      }
      if ( ++v7 < (int)dword_140404A6C[v4 + 70087227] )
      {
        *(float *)v9.m128i_i32 = *(float *)v9.m128i_i32
                               + (float)(*(float *)&dword_140404A6C[v4 + 70087228]
                                       + *(float *)&dword_140404A6C[v4 + 70087230]);
      }
      else
      {
        v7 = 0;
        v9 = (__m128i)dword_140404A6C[v4 + 70087230];
        v14 = *(float *)v9.m128i_i32 + *(float *)&dword_140404A6C[v4 + 70087229];
        *(float *)v9.m128i_i32 = (float)(*(float *)v9.m128i_i32 * 0.5) + v3;
        *(float *)v10.m128i_i32 = *(float *)v10.m128i_i32 + v14;
      }
    }
    if ( (int)dword_140404A6C[70317864] <= 0
      || (v15 = dword_140404A6C[70317864] - 1, dword_140404A6C[70317864] = v15, v15 <= 0) )
    {
      (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(3089);
    }
    else
    {
      v16 = 2LL * v15;
      dword_140404A6C[70318060] = dword_140404A6C[2 * v16 + 70317861];
      dword_140404A6C[70318062] = dword_140404A6C[2 * v16 + 70317863];
      dword_140404A6C[70318061] = dword_140404A6C[2 * v16 + 70317862];
      dword_140404A6C[70318063] = dword_140404A6C[2 * v16 + 70317864];
      sub_14007B7E0();
    }
    return sub_14007BB00();
  }
  return result;
}

