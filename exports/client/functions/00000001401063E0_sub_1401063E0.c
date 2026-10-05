/* Address: 0x1401063e0 | Name: sub_1401063E0 | Size: 1086 bytes */
__int64 sub_1401063E0()
{
  signed int v0; // r9d
  signed int v1; // ecx
  signed int v2; // eax
  unsigned int *v3; // r10
  __int64 v4; // rdx
  char v5; // r8
  char v6; // dl
  int v7; // esi
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // edi
  __m128i si128; // xmm4
  __int64 v12; // rcx
  unsigned int *v13; // rax
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  __m128i v18; // xmm2
  __m128i v19; // xmm1
  __m128i v20; // xmm3
  __m128i v21; // xmm2
  __m128i v22; // xmm0
  __m128i v23; // xmm3
  unsigned int *v24; // rdx
  unsigned int *v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  int v28; // r14d
  __int64 result; // rax
  unsigned int *v30; // rbp
  char *v31; // rcx
  bool v32; // zf
  unsigned int *v33; // rdx
  unsigned int *v34; // rcx
  char v35; // al
  int v36; // ebx
  int v37; // r10d
  __int64 v38; // rdx
  const char *v39; // r9
  char *v40; // rdx

  sub_1400ED940((__int64)"readme.txt");
  v0 = dword_140404A6C[293250414];
  v1 = dword_140404A6C[293250413];
  v2 = 0;
  dword_140404A6C[283720109] = 0;
  do
  {
    if ( v1 >= v0 )
      break;
    v3 = &dword_140404A6C[64 * (__int64)v2 + 283720110];
    v4 = 0;
    do
    {
      if ( v4 >= 123 )
        break;
      v5 = *((_BYTE *)&dword_140404A6C[293250415] + v1);
      if ( v5 == 13 )
        break;
      if ( v5 == 10 )
        break;
      ++v1;
      *((_BYTE *)v3 + v4++) = v5;
      dword_140404A6C[293250413] = v1;
    }
    while ( v1 < v0 );
    for ( *((_BYTE *)v3 + v4) = 0; v1 < v0; dword_140404A6C[293250413] = ++v1 )
    {
      v6 = *((_BYTE *)&dword_140404A6C[293250415] + v1);
      if ( v6 != 13 && v6 != 10 )
        break;
    }
    v2 = dword_140404A6C[283720109] + 1;
    dword_140404A6C[283720109] = v2;
  }
  while ( v2 < 1022 );
  v7 = dword_140404A6C[134050358];
  v8 = 0;
  dword_140404A6C[436668493] = dword_140404A6C[134050358];
  LOBYTE(dword_140404A6C[64 * (__int64)v2 + 283720110]) = 0;
  v9 = (__int64)(int)++dword_140404A6C[283720109] << 8;
  *(_QWORD *)((char *)&dword_140404A6C[283720110] + v9) = 0x6C20303120706F54LL;
  *(unsigned int *)((char *)&dword_140404A6C[283720112] + v9) = 7631721;
  v10 = ++dword_140404A6C[283720109];
  if ( v7 >= 8 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_140279890);
    v12 = 0;
    v13 = &dword_140404A6C[134050430];
    do
    {
      v14 = _mm_cvtsi32_si128(v13[28]);
      v8 += 8;
      v15 = _mm_cvtsi32_si128(*(v13 - 28));
      v16 = _mm_cvtsi32_si128(*v13);
      v17 = _mm_cvtsi32_si128(*(v13 - 56));
      v13 += 224;
      v18 = _mm_unpacklo_epi32(v16, v14);
      v19 = _mm_cvtsi32_si128(*(v13 - 84));
      v20 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v17, v15), v18);
      v21 = _mm_cvtsi32_si128(*(v13 - 112));
      v22 = _mm_sub_epi32(si128, v20);
      v23 = _mm_cvtsi32_si128(*(v13 - 168));
      *(__m128i *)&dword_140404A6C[v12 + 437192782] = v22;
      *(__m128i *)&dword_140404A6C[v12 + 437192786] = _mm_sub_epi32(
                                                        si128,
                                                        _mm_unpacklo_epi64(
                                                          _mm_unpacklo_epi32(v23, _mm_cvtsi32_si128(*(v13 - 140))),
                                                          _mm_unpacklo_epi32(v21, v19)));
      v12 += 8;
    }
    while ( v12 < v7 - (v7 & 7) );
  }
  if ( v8 < v7 )
  {
    v24 = &dword_140404A6C[v8 + 437192782];
    v25 = &dword_140404A6C[28 * v8 + 134050374];
    v26 = (unsigned int)(v7 - v8);
    do
    {
      ++v24;
      v27 = -1879048193 - *v25;
      v25 += 28;
      *(v24 - 1) = v27;
      --v26;
    }
    while ( v26 );
  }
  sub_14007D710();
  v28 = 0;
  result = (__int64)&dword_140404A6C[436668504];
  v30 = &dword_140404A6C[436668494];
  do
  {
    if ( v28 < v7 )
    {
      sub_140158AB0(
        &dword_140404A6C[18601677],
        "%d. %s   $",
        v28 + 1,
        (const char *)&dword_140404A6C[28 * *v30 + 134050365]);
      sub_140158B10(&dword_140404A6C[18601805], dword_140404A6C[28 * *v30 + 134050374]);
      v31 = (char *)&dword_140404A6C[18601676] + 3;
      do
        v32 = *++v31 == 0;
      while ( !v32 );
      strcpy(v31, (const char *)&dword_140404A6C[18601805]);
      v33 = &dword_140404A6C[18601677];
      v34 = &dword_140404A6C[64 * (__int64)(int)dword_140404A6C[283720109] + 283720110];
      do
      {
        v35 = *(_BYTE *)v33;
        v33 = (unsigned int *)((char *)v33 + 1);
        *(_BYTE *)v34 = v35;
        v34 = (unsigned int *)((char *)v34 + 1);
      }
      while ( v35 );
      result = (__int64)&dword_140404A6C[436668504];
      v7 = dword_140404A6C[134050358];
      v10 = ++dword_140404A6C[283720109];
    }
    ++v28;
    ++v30;
  }
  while ( (__int64)v30 < (__int64)&dword_140404A6C[436668504] );
  v36 = 0;
  LOBYTE(dword_140404A6C[283785646]) = 0;
  v37 = 0;
  if ( v10 > 0 )
  {
    result = 0;
    do
    {
      v38 = -1;
      v39 = (const char *)&dword_140404A6C[64 * (__int64)v37 + 283720110];
      do
        ++v38;
      while ( v39[v38] );
      if ( (unsigned __int64)(v36 + v38) < 0x3FE )
      {
        v40 = (char *)&dword_140404A6C[283785645] + 3;
        do
          v32 = *++v40 == 0;
        while ( !v32 );
        strcpy(v40, v39);
        for ( ; result < 1022; ++result )
        {
          if ( !*((_BYTE *)&dword_140404A6C[283785646] + result) )
            break;
          ++v36;
        }
        *((_BYTE *)&dword_140404A6C[283785646] + result) = 10;
        ++v36;
        *((_BYTE *)&dword_140404A6C[283785646] + ++result) = 0;
        v10 = dword_140404A6C[283720109];
      }
      ++v37;
    }
    while ( v37 < v10 );
  }
  return result;
}

