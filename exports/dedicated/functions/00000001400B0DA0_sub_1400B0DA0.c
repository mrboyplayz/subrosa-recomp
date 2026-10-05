/* Address: 0x1400b0da0 | Name: sub_1400B0DA0 | Size: 661 bytes */
void __fastcall sub_1400B0DA0(int a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // esi
  float v8; // xmm6_4
  __int64 v9; // rax
  int v10; // eax
  __m128i v11; // xmm6
  __int64 v12; // rbp
  int *v13; // r14
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
  if ( dword_16D67D63C[v4] == -1 )
    return;
  v5 = 3597LL * a2;
  v6 = dword_16D67D63C[v5];
  if ( (_DWORD)v6 == -1
    || *(_DWORD *)((char *)&unk_16D6802B8 + v4 * 4)
    || *(_DWORD *)((char *)&unk_16D6802B8 + v5 * 4)
    || dword_19154118C != 4 )
  {
    return;
  }
  v7 = dword_16D67D624[v4];
  v8 = (float)SDWORD1(xmmword_1915FBCA0);
  if ( v7 == 17 )
  {
    v9 = dword_1909419F8[7166 * v6];
    if ( (_DWORD)v9 != -1 )
    {
      v10 = *((_DWORD *)&unk_16E6A3C84 + 5210 * v9);
      if ( v10 != -1 && v10 == a1 )
        return;
    }
    if ( dword_16D67D624[v5] == 17 )
      goto LABEL_27;
    v11 = _mm_cvtsi32_si128(DWORD2(xmmword_1915FBCA0));
LABEL_26:
    v8 = _mm_cvtepi32_ps(v11).m128_f32[0];
    goto LABEL_27;
  }
  if ( v7 <= 5 )
  {
    v12 = 7166 * v6;
    v13 = &dword_190941BEC[7166 * v6];
    if ( (unsigned int)sub_1400B3510(v13, v7) )
      return;
    v14 = dword_1909419F8[v12];
    if ( (_DWORD)v14 != -1 )
    {
      v15 = *((int *)&unk_16E6A3C84 + 5210 * v14);
      if ( (_DWORD)v15 != -1 && dword_16D67D5A0[3597 * v15] && dword_16D67D624[3597 * v15] == v7 )
        return;
    }
    v16 = (unsigned int)dword_16D67D624[v5];
    if ( (_DWORD)v16 == 17 )
    {
      v11 = _mm_cvtsi32_si128(HIDWORD(xmmword_1915FBCA0));
    }
    else
    {
      v8 = (float)(int)xmmword_1915FBCB0;
      if ( (unsigned int)v16 > 5 || !(unsigned int)sub_1400B3510(v13, v16) )
        goto LABEL_27;
      v11 = _mm_cvtsi32_si128(DWORD1(xmmword_1915FBCB0));
    }
    goto LABEL_26;
  }
LABEL_27:
  v17 = dword_16D67D5FC[v5];
  v18 = v8 * 0.0099999998;
  if ( v17 > 0 )
    v18 = v18 * (float)(1.0 - fminf(fmaxf(fminf((float)v17 * 0.0099999998, 1.0), 0.0), 1.0));
  v19 = (int)(float)((float)a3 * v18);
  if ( v19 > 0 )
    dword_16D67D5FC[v4] += v19;
  v20 = dword_16D67D5FC[v4];
  if ( v20 > 1023 )
  {
    v20 = 1023;
    dword_16D67D5FC[v4] = 1023;
  }
  if ( v20 >= SDWORD1(xmmword_1915FBCC0) )
    dword_190941A04[7166 * dword_16D67D63C[v4]] = 0;
}

