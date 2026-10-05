/* Address: 0x1400a0780 | Name: sub_1400A0780 | Size: 1086 bytes */
__int64 sub_1400A0780()
{
  int v0; // r9d
  int v1; // ecx
  int v2; // eax
  char *v3; // r10
  __int64 v4; // rdx
  char v5; // r8
  char v6; // dl
  int v7; // esi
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // edi
  __m128i si128; // xmm4
  unsigned __int64 v12; // rcx
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
  __int128 *v24; // rdx
  _DWORD *v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  int v28; // r14d
  __int64 result; // rax
  int *v30; // rbp
  char *v31; // rcx
  bool v32; // zf
  char *v33; // rdx
  char *v34; // rcx
  char v35; // al
  int v36; // ebx
  int v37; // r10d
  __int64 v38; // rdx
  const char *v39; // r9
  char *v40; // rdx

  sub_140090980("readme.txt");
  v0 = dword_1406A6784;
  v1 = dword_1406A6780;
  v2 = 0;
  dword_1914F6800 = 0;
  do
  {
    if ( v1 >= v0 )
      break;
    v3 = &byte_1914F6804[256 * (__int64)v2];
    v4 = 0;
    do
    {
      if ( v4 >= 123 )
        break;
      v5 = byte_1406A6788[v1];
      if ( v5 == 13 )
        break;
      if ( v5 == 10 )
        break;
      ++v1;
      v3[v4++] = v5;
      dword_1406A6780 = v1;
    }
    while ( v1 < v0 );
    for ( v3[v4] = 0; v1 < v0; dword_1406A6780 = ++v1 )
    {
      v6 = byte_1406A6788[v1];
      if ( v6 != 13 && v6 != 10 )
        break;
    }
    v2 = dword_1914F6800 + 1;
    dword_1914F6800 = v2;
  }
  while ( v2 < 1022 );
  v7 = dword_16DDCBA24;
  v8 = 0;
  dword_160A63100[0] = dword_16DDCBA24;
  byte_1914F6804[256 * (__int64)v2] = 0;
  v9 = (__int64)++dword_1914F6800 << 8;
  *(_QWORD *)&byte_1914F6804[v9] = 0x6C20303120706F54LL;
  *(_DWORD *)&byte_1914F6804[v9 + 8] = 7631721;
  v10 = ++dword_1914F6800;
  if ( v7 >= 8 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7F60);
    v12 = 0;
    v13 = (unsigned int *)&unk_16DDCBB44;
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
      xmmword_160C63104[v12 / 4] = (__int128)v22;
      xmmword_160C63114[v12 / 4] = (__int128)_mm_sub_epi32(
                                               si128,
                                               _mm_unpacklo_epi64(
                                                 _mm_unpacklo_epi32(v23, _mm_cvtsi32_si128(*(v13 - 140))),
                                                 _mm_unpacklo_epi32(v21, v19)));
      v12 += 8LL;
    }
    while ( (__int64)v12 < v7 - (v7 & 7) );
  }
  if ( v8 < v7 )
  {
    v24 = &xmmword_160C63104[v8 / 4u];
    v25 = (_DWORD *)((char *)&unk_16DDCBA64 + 112 * v8);
    v26 = (unsigned int)(v7 - v8);
    do
    {
      v24 = (__int128 *)((char *)v24 + 4);
      v27 = -1879048193 - *v25;
      v25 += 28;
      *((_DWORD *)v24 - 1) = v27;
      --v26;
    }
    while ( v26 );
  }
  sub_14004ACC0();
  v28 = 0;
  result = (__int64)dword_160A6312C;
  v30 = &dword_160A63104;
  do
  {
    if ( v28 < v7 )
    {
      sub_1400DBB30(byte_1403C1FC0, "%d. %s   $");
      sub_1400DBB90(byte_1403C21C0);
      v31 = &byte_1403C1FC0[-1];
      do
        v32 = *++v31 == 0;
      while ( !v32 );
      strcpy(v31, byte_1403C21C0);
      v33 = byte_1403C1FC0;
      v34 = &byte_1914F6804[256 * (__int64)dword_1914F6800];
      do
      {
        v35 = *v33++;
        *v34++ = v35;
      }
      while ( v35 );
      result = (__int64)dword_160A6312C;
      v7 = dword_16DDCBA24;
      v10 = ++dword_1914F6800;
    }
    ++v28;
    ++v30;
  }
  while ( (__int64)v30 < (__int64)dword_160A6312C );
  v36 = 0;
  byte_191536804[0] = 0;
  v37 = 0;
  if ( v10 > 0 )
  {
    result = 0;
    do
    {
      v38 = -1;
      v39 = &byte_1914F6804[256 * (__int64)v37];
      do
        ++v38;
      while ( v39[v38] );
      if ( (unsigned __int64)(v36 + v38) < 0x3FE )
      {
        v40 = &byte_191536804[-1];
        do
          v32 = *++v40 == 0;
        while ( !v32 );
        strcpy(v40, v39);
        for ( ; result < 1022; ++result )
        {
          if ( !byte_191536804[result] )
            break;
          ++v36;
        }
        byte_191536804[result] = 10;
        ++v36;
        byte_191536804[++result] = 0;
        v10 = dword_1914F6800;
      }
      ++v37;
    }
    while ( v37 < v10 );
  }
  return result;
}

