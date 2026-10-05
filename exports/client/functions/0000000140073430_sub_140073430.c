/* Address: 0x140073430 | Name: sub_140073430 | Size: 1069 bytes */
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_140073430(signed int a1, double a2, double a3)
{
  __m128i v3; // xmm7
  __int64 v4; // rbx
  float v5; // xmm8_4
  unsigned int v6; // edx
  __int64 result; // rax
  void (__fastcall *v8)(_QWORD, _QWORD); // rax
  int v9; // xmm0_4
  __int64 v10; // rbx
  float v11; // xmm3_4
  double v12; // xmm4_8
  __int64 v13; // r8
  __int64 v14; // rbx
  int v15; // xmm0_4
  unsigned int v16; // esi
  void (__fastcall *v17)(_QWORD, _QWORD); // rax
  __m128i v18; // xmm2
  __m128i v19; // xmm1
  __m128i v20; // xmm2

  v3 = *(__m128i *)&a2;
  v4 = 122LL * a1;
  v5 = *(float *)&a3;
  v6 = dword_140404A6C[v4 + 70087115];
  if ( (v6 & 0xFFFFFFFD) == 0 )
    return sub_140072760(a1, a2, a3);
  if ( v6 == 1 )
    return sub_1400742F0();
  result = v6 - 3;
  if ( (unsigned int)result <= 2 )
    return sub_140072F90(a1, a2, a1);
  switch ( v6 )
  {
    case 6u:
      result = sub_140075460();
      if ( (_DWORD)result )
      {
        v8 = *(void (__fastcall **)(_QWORD, _QWORD))&dword_140404A6C[v4 + 70087149];
        if ( v8 )
          v8(dword_140404A6C[v4 + 70087146], dword_140404A6C[v4 + 70087147]);
        sub_140075340();
        return sub_14007BB00();
      }
      break;
    case 7u:
      v9 = 1048576000;
      if ( a1 == dword_140404A6C[70087109] || dword_140404A6C[v4 + 70087116] )
        v9 = 1052770304;
      v10 = 122LL * a1;
      sub_14006D660(a2, a3, a1, *(float *)&dword_140404A6C[v10 + 70087128], 0, v9, v9, v9, 1065353216);
      v11 = *(float *)&dword_140404A6C[v10 + 70087219];
      *(_QWORD *)&v12 = **(unsigned int **)&dword_140404A6C[v10 + 70087217];
      *(float *)&v12 = (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[v10 + 70087220])
                                     * (float)(*(float *)&dword_140404A6C[v10 + 70087128] - v11))
                             / (float)(*(float *)&dword_140404A6C[v10 + 70087221]
                                     - *(float *)&dword_140404A6C[v10 + 70087220]))
                     + *(float *)&a3;
      return sub_14006D660(a2, v12, v13, v11, 0, 1056964608, 1056964608, 1056964608, 1065353216);
    case 8u:
      return sub_140073860();
    case 0xAu:
      v14 = 122LL * a1;
      v15 = 1056964608;
      v16 = **(_DWORD **)&dword_140404A6C[v14 + 70087223];
      if ( a1 == dword_140404A6C[70087109] )
        v15 = 1061158912;
      v17 = *(void (__fastcall **)(_QWORD, _QWORD))&dword_140404A6C[v14 + 70087149];
      if ( v17 )
      {
        v17(dword_140404A6C[v14 + 70087146], v16);
        return sub_14007BB00();
      }
      else
      {
        sub_14006D660(a2, a3, a1, *(float *)&dword_140404A6C[v14 + 70087128], 0, v15, v15, v15, 1056964608);
        if ( v16 != -1 )
        {
          v18 = (__m128i)dword_140404A6C[v14 + 70087128];
          v19 = (__m128i)dword_140404A6C[v14 + 70087127];
          *(float *)v18.m128i_i32 = (float)(*(float *)v18.m128i_i32 * 0.5) + v5;
          *(float *)v19.m128i_i32 = (float)(*(float *)v19.m128i_i32 * 0.5) + *(float *)v3.m128i_i32;
          sub_14006D930(
            *(_QWORD *)&dword_140404A6C[v14 + 70087217] + (int)(v16 * dword_140404A6C[v14 + 70087219]),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32(v18),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41500000u),
            69);
        }
        v20 = (__m128i)dword_140404A6C[v14 + 70087128];
        *(float *)v3.m128i_i32 = (float)(*(float *)v3.m128i_i32 + *(float *)&dword_140404A6C[v14 + 70087127]) + 4.0;
        *(float *)v20.m128i_i32 = (float)(*(float *)v20.m128i_i32 * 0.5) + v5;
        return sub_14006D930(
                 &dword_140404A6C[v14 + 70087151],
                 (unsigned int)_mm_cvtsi128_si32(v3),
                 (unsigned int)_mm_cvtsi128_si32(v20),
                 (unsigned int)_mm_cvtsi128_si32((__m128i)dword_140404A6C[v14 + 70087133]),
                 4);
      }
    case 0xBu:
      return sub_140074040();
    case 0xCu:
      return sub_140073D90();
    case 0xDu:
      return sub_140072CA0(a1, a2, a3);
  }
  return result;
}

