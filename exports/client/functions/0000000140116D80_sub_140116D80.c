/* Address: 0x140116d80 | Name: sub_140116D80 | Size: 661 bytes */
void __fastcall sub_140116D80(int a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // esi
  float v8; // xmm6_4
  __int64 v9; // rax
  unsigned int v10; // eax
  __m128i v11; // xmm6
  __int64 v12; // rbp
  unsigned int *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  float v18; // xmm6_4
  int v19; // eax
  int v20; // eax

  if ( a1 == -1 )
    return;
  if ( a2 == -1 )
    return;
  if ( a1 == a2 )
    return;
  v4 = 3597LL * a1;
  if ( dword_140404A6C[v4 + 71856292] == -1 )
    return;
  v5 = 3597LL * a2;
  v6 = (int)dword_140404A6C[v5 + 71856292];
  if ( (_DWORD)v6 == -1
    || dword_140404A6C[v4 + 71859139]
    || dword_140404A6C[v5 + 71859139]
    || dword_140404A6C[283831312] != 4 )
  {
    return;
  }
  v7 = dword_140404A6C[v4 + 71856286];
  v8 = (float)(int)dword_140404A6C[284022486];
  if ( v7 == 17 )
  {
    v9 = (int)dword_140404A6C[7166 * v6 + 280651315];
    if ( (_DWORD)v9 != -1 )
    {
      v10 = dword_140404A6C[5210 * v9 + 129716718];
      if ( v10 != -1 && v10 == a1 )
        return;
    }
    if ( dword_140404A6C[v5 + 71856286] == 17 )
      goto LABEL_27;
    v11 = _mm_cvtsi32_si128(dword_140404A6C[284022487]);
LABEL_26:
    v8 = _mm_cvtepi32_ps(v11).m128_f32[0];
    goto LABEL_27;
  }
  if ( v7 <= 5 )
  {
    v12 = 7166 * v6;
    v13 = &dword_140404A6C[7166 * v6 + 280651440];
    if ( (unsigned int)sub_14011B8F0(v13, v7) )
      return;
    v14 = (int)dword_140404A6C[v12 + 280651315];
    if ( (_DWORD)v14 != -1 )
    {
      v15 = (int)dword_140404A6C[5210 * v14 + 129716718];
      if ( (_DWORD)v15 != -1 && dword_140404A6C[3597 * v15 + 71856253] && dword_140404A6C[3597 * v15 + 71856286] == v7 )
        return;
    }
    v16 = dword_140404A6C[v5 + 71856286];
    if ( (_DWORD)v16 == 17 )
    {
      v11 = _mm_cvtsi32_si128(dword_140404A6C[284022488]);
    }
    else
    {
      v8 = (float)(int)dword_140404A6C[284022489];
      if ( (unsigned int)v16 > 5 || !(unsigned int)sub_14011B8F0(v13, v16) )
        goto LABEL_27;
      v11 = _mm_cvtsi32_si128(dword_140404A6C[284022490]);
    }
    goto LABEL_26;
  }
LABEL_27:
  v17 = dword_140404A6C[v5 + 71856276];
  v18 = v8 * 0.0099999998;
  if ( v17 > 0 )
    v18 = v18 * (float)(1.0 - fminf(fmaxf(fminf((float)v17 * 0.0099999998, 1.0), 0.0), 1.0));
  v19 = (int)(float)((float)a3 * v18);
  if ( v19 > 0 )
    dword_140404A6C[v4 + 71856276] += v19;
  v20 = dword_140404A6C[v4 + 71856276];
  if ( v20 > 1023 )
  {
    v20 = 1023;
    dword_140404A6C[v4 + 71856276] = 1023;
  }
  if ( v20 >= (int)dword_140404A6C[284022494] )
    dword_140404A6C[7166 * dword_140404A6C[v4 + 71856292] + 280651318] = 0;
}

