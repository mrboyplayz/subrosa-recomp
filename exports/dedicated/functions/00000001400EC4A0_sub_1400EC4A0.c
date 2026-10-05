/* Address: 0x1400ec4a0 | Name: sub_1400EC4A0 | Size: 1869 bytes */
int sub_1400EC4A0()
{
  int v0; // edi
  int *v1; // rax
  unsigned __int64 v2; // rbp
  int v3; // edx
  int v4; // r8d
  int v5; // ebx
  __m128i si128; // xmm4
  __m128i v7; // xmm5
  __int64 v8; // rcx
  unsigned int *v9; // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  __m128i v12; // xmm2
  __m128i v13; // xmm3
  __m128i v14; // xmm4
  __m128i v15; // xmm4
  int *v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  int v19; // esi
  int v20; // edx
  __int64 v21; // r14
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // esi
  __int64 v26; // r12
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // r14
  __int64 v30; // rax
  int i; // ebx
  const char *v32; // r8
  const char **v33; // rbx
  const char *v34; // rcx
  char v35; // al
  unsigned __int64 v36; // r9
  __int64 v37; // rax
  char *v38; // r8
  char *v39; // rdx
  char v40; // al
  int v41; // eax
  BOOL v42; // r14d
  int v43; // eax
  __int64 v44; // rsi
  int v45; // ebx
  __int64 v46; // r9
  __int64 v47; // rcx
  int v48; // ebx
  __int64 v49; // rdi
  __int64 v50; // rsi
  char *v51; // rcx
  char v52; // al
  char *v53; // rcx
  char v54; // al
  char *v55; // rcx
  char v56; // al
  char *v57; // rcx
  char v58; // al
  char *v59; // rbx
  __int64 v60; // rdi
  int v62; // [rsp+30h] [rbp-348h]
  __int64 v63; // [rsp+38h] [rbp-340h]
  char Buffer[256]; // [rsp+40h] [rbp-338h] BYREF
  _BYTE v65[512]; // [rsp+140h] [rbp-238h] BYREF

  v0 = 0;
  v1 = (int *)&unk_178C856B4;
  while ( *(v1 - 34653) )
  {
    if ( !*v1 )
    {
      ++v0;
      break;
    }
    if ( !v1[34653] )
    {
      v0 += 2;
      break;
    }
    if ( !v1[69306] )
    {
      v0 += 3;
      break;
    }
    v1 += 138612;
    v0 += 4;
    if ( (__int64)v1 >= (__int64)dword_17AE5CAB4 )
      break;
  }
  if ( v0 != -1 )
  {
    v2 = 138612LL * v0;
    v63 = v0;
    LODWORD(v1) = (unsigned int)memset((char *)&unk_178C63944 + v2, 0, 0x21D70u);
    v3 = dword_163D95E7C;
    dword_178C63940[v2 / 4] = 1;
    if ( v3 )
    {
      v4 = 0;
      v5 = 0x10000;
      if ( v3 >= 8 && dword_140148180 >= 2 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7BA0);
        v7 = si128;
        v8 = 0;
        v9 = (unsigned int *)&unk_163D9669C;
        do
        {
          v10 = _mm_cvtsi32_si128(v9[259]);
          v4 += 8;
          v11 = _mm_cvtsi32_si128(*(v9 - 259));
          v8 += 8;
          v12 = _mm_cvtsi32_si128(*v9);
          v13 = _mm_cvtsi32_si128(*(v9 - 518));
          v9 += 2072;
          si128 = _mm_min_epi32(si128, _mm_unpacklo_epi64(_mm_unpacklo_epi32(v13, v11), _mm_unpacklo_epi32(v12, v10)));
          v7 = _mm_min_epi32(
                 v7,
                 _mm_unpacklo_epi64(
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v9 - 1554)), _mm_cvtsi32_si128(*(v9 - 1295))),
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v9 - 1036)), _mm_cvtsi32_si128(*(v9 - 777)))));
        }
        while ( v8 < (int)(v3 - (v3 & 0x80000007)) );
        v14 = _mm_min_epi32(si128, v7);
        v15 = _mm_min_epi32(v14, _mm_srli_si128(v14, 8));
        v5 = _mm_cvtsi128_si32(_mm_min_epi32(v15, _mm_srli_si128(v15, 4)));
      }
      if ( v4 < v3 )
      {
        v16 = (int *)((char *)&unk_163D95E84 + 1036 * v4);
        v17 = (unsigned int)(v3 - v4);
        do
        {
          v18 = *v16;
          v16 += 259;
          if ( v5 <= v18 )
            v18 = v5;
          v5 = v18;
          --v17;
        }
        while ( v17 );
      }
      v19 = 0;
      v20 = rand() % dword_163D95E7C;
      do
      {
        if ( *((_DWORD *)&unk_163D95E84 + 259 * v20) <= v5 )
          break;
        ++v19;
        v20 = rand() % dword_163D95E7C;
      }
      while ( v19 < 1024 );
      v21 = v20;
      v22 = 1036LL * v20;
      v23 = *(int *)((char *)&unk_163D95E80 + v22);
      ++*(_DWORD *)((char *)&unk_163D95E84 + v22);
      v24 = 56076 * v23;
      v25 = 0;
      v1 = dword_18EE07480;
      v26 = *(int *)((char *)&unk_183A7E294 + v24);
      v62 = *(_DWORD *)((char *)&unk_183A7E290 + v24);
      while ( *v1 )
      {
        ++v25;
        v1 += 290;
        if ( (__int64)v1 >= (__int64)dword_18F717480 )
          return (int)v1;
      }
      if ( v25 != -1 )
      {
        v27 = 290LL * v25;
        dword_178C85450[34653 * v0] = v25;
        dword_18EE07480[v27] = 1;
        dword_18EE07480[v27 + 257] = 0;
        v28 = 0;
        if ( &dword_163D95E8C[v22 / 4] )
          v28 = rand() % *(_DWORD *)((char *)&unk_163D95E88 + v22);
        v29 = dword_163D95E8C[259 * v21 + v28];
        v30 = rand() & 0x1F;
        for ( i = 0; i < 1024; ++i )
        {
          if ( !dword_163D841E0[v30] )
            break;
          v30 = rand() & 0x1F;
        }
        dword_163D841E0[v30] = 1;
        v32 = off_140147A40[v30];
        v33 = (const char **)&off_140147A40[v30];
        v34 = v32;
        do
        {
          v35 = *v34;
          v34[v65 - v32] = *v34;
          ++v34;
        }
        while ( v35 );
        sub_1400DBB30(Buffer, "%s.DOC", v32);
        v36 = 10280 * v29;
        v37 = *((int *)&unk_18F7184CC + 2570 * v29);
        if ( (int)v37 < 256 )
        {
          *(_DWORD *)((char *)&unk_18F7184D0 + 24 * v37 + v36) = v25;
          v38 = Buffer;
          v39 = (char *)&unk_18F7184D4 + 24 * *(int *)((char *)&unk_18F7184CC + v36) + v36;
          do
          {
            v40 = *v38++;
            *v39++ = v40;
          }
          while ( v40 );
          dword_18F7184E4[6 * (*(_DWORD *)((char *)&unk_18F7184CC + v36))++ + v36 / 4] = 0;
        }
        sub_1400DBB30(Buffer, "%s", *v33);
        v41 = rand();
        v42 = v41 == 5 * (v41 / 5);
        v43 = 2500 * (rand() % 5 + 2);
        dword_178C6394C[34653 * v0] = v43;
        if ( v0 == dword_178C63938 )
          dword_178C6394C[34653 * v0] = 5 * v43;
        v44 = 3;
        do
        {
          v45 = 0;
          v46 = rand() % 6;
          v47 = dword_1915414A4[5873 * v46];
          if ( (_DWORD)v47 != -1 )
          {
            if ( (dword_16D67D5F8[3597 * v47] - 1000) / 100 >= 0 )
              v45 = (dword_16D67D5F8[3597 * v47] - 1000) / 100;
            if ( v45 > 1000 )
              v45 = 1000;
          }
          *((_DWORD *)&unk_178C63954 + 34653 * v0 + 539 * v46) = dword_178C6394C[34653 * v0]
                                                               + v45 * dword_178C6394C[34653 * v0] / 100;
          --v44;
        }
        while ( v44 );
        v48 = v0 + 200;
        dword_178C854A0[34653 * v0] = v0 + 200;
        sub_1400DBB30(&byte_178C854A4[v2], "INTEL%02d.CDE", v0);
        v49 = (__int64)&unk_1839ABEE8 + 1584 * v26;
        v50 = (__int64)&unk_1839ABEE8 + 1584 * v62;
        sub_1400BBCC0((_BYTE *)&unk_18EE07484 + 1160 * v48, (__int64)Buffer, v50, v49, (__int64)off_140147B40[v63], v42);
        sub_1400B0010(v48);
        v51 = Buffer;
        do
        {
          v52 = *v51;
          byte_178C855B0[v2 - (_QWORD)Buffer + (_QWORD)v51] = *v51;
          ++v51;
        }
        while ( v52 );
        v53 = (char *)&unk_178C855F0 + v2 - v50;
        do
        {
          v54 = *(_BYTE *)v50;
          v53[v50] = *(_BYTE *)v50;
          ++v50;
        }
        while ( v54 );
        v55 = (char *)&unk_178C85630 + v2 - v49;
        do
        {
          v56 = *(_BYTE *)v49;
          v55[v49] = *(_BYTE *)v49;
          ++v49;
        }
        while ( v56 );
        v57 = v65;
        do
        {
          v58 = *v57;
          byte_178C85670[v2 - (_QWORD)v65 + (_QWORD)v57] = *v57;
          ++v57;
        }
        while ( v58 );
        dword_178C856B0[v2 / 4] = v42;
        v59 = &byte_178C6417C[v2];
        v60 = 6;
        do
        {
          LODWORD(v1) = sub_1400DBB30(v59, "Open");
          v59 += 2156;
          --v60;
        }
        while ( v60 );
      }
    }
  }
  return (int)v1;
}

