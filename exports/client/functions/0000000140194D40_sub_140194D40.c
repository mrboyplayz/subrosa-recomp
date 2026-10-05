/* Address: 0x140194d40 | Name: sub_140194D40 | Size: 1853 bytes */
__int64 sub_140194D40()
{
  int v0; // edi
  unsigned int *v1; // rax
  __int64 v2; // rbp
  int v3; // edx
  int v4; // r8d
  signed int v5; // ebx
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
  unsigned int *v16; // rcx
  __int64 v17; // r8
  signed int v18; // eax
  int v19; // esi
  int v20; // edx
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  signed int v25; // esi
  unsigned int *v26; // rax
  __int64 v27; // r12
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // r14
  __int64 v31; // rax
  int i; // ebx
  const char *v33; // r8
  const char **v34; // rbx
  const char *v35; // rcx
  char v36; // al
  __int64 v37; // r9
  __int64 v38; // rax
  char *v39; // r8
  unsigned int *v40; // rdx
  char v41; // al
  int v42; // eax
  BOOL v43; // r14d
  int v44; // eax
  __int64 v45; // rsi
  int v46; // ebx
  __int64 v47; // r9
  __int64 v48; // rcx
  int v49; // ebx
  unsigned int *v50; // rdi
  unsigned int *v51; // rsi
  char *v52; // rcx
  char v53; // al
  char *v54; // rcx
  char v55; // al
  char *v56; // rcx
  char v57; // al
  char *v58; // rcx
  char v59; // al
  unsigned int *v60; // rbx
  __int64 v61; // rdi
  __int64 v63; // [rsp+0h] [rbp-378h] BYREF
  unsigned int v64; // [rsp+30h] [rbp-348h]
  __int64 v65; // [rsp+38h] [rbp-340h]
  char v66[256]; // [rsp+40h] [rbp-338h] BYREF
  _BYTE v67[512]; // [rsp+140h] [rbp-238h] BYREF
  __int64 v68; // [rsp+340h] [rbp-38h]

  v0 = 0;
  v1 = &dword_140404A6C[180035722];
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
    if ( (__int64)v1 >= (__int64)&dword_140404A6C[188906890] )
      break;
  }
  if ( v0 != -1 )
  {
    v2 = 34653LL * v0;
    v65 = v0;
    MEMORY[0x1401FCD30](&dword_140404A6C[v2 + 180001070], 0, 138608);
    v3 = dword_140404A6C[487149972];
    dword_140404A6C[v2 + 180001069] = 1;
    if ( v3 )
    {
      v4 = 0;
      v5 = 0x10000;
      if ( v3 >= 8 && dword_140302080 >= 2 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_1402791B0);
        v7 = si128;
        v8 = 0;
        v9 = &dword_140404A6C[487150492];
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
        v16 = &dword_140404A6C[259 * v4 + 487149974];
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
      v20 = rand() % (signed int)dword_140404A6C[487149972];
      do
      {
        if ( (int)dword_140404A6C[259 * v20 + 487149974] <= v5 )
          break;
        ++v19;
        v20 = rand() % (signed int)dword_140404A6C[487149972];
      }
      while ( v19 < 1024 );
      v21 = v20;
      v22 = 259LL * v20;
      v23 = (int)dword_140404A6C[v22 + 487149973];
      ++dword_140404A6C[v22 + 487149974];
      v24 = 14019 * v23;
      v25 = 0;
      v26 = &dword_140404A6C[273377349];
      v27 = (int)dword_140404A6C[v24 + 225641322];
      v64 = dword_140404A6C[v24 + 225641321];
      while ( *v26 )
      {
        ++v25;
        v26 += 290;
        if ( (__int64)v26 >= (__int64)&dword_140404A6C[275753029] )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v63 ^ v68);
      }
      if ( v25 != -1 )
      {
        v28 = 290LL * v25;
        dword_140404A6C[34653 * v0 + 180035569] = v25;
        dword_140404A6C[v28 + 273377349] = 1;
        dword_140404A6C[v28 + 273377606] = 0;
        v29 = 0;
        if ( &dword_140404A6C[v22 + 487149976] )
          v29 = rand() % (int)dword_140404A6C[v22 + 487149975];
        v30 = (int)dword_140404A6C[259 * v21 + 487149976 + v29];
        v31 = rand() & 0x1F;
        for ( i = 0; i < 1024; ++i )
        {
          if ( !dword_140404A6C[v31 + 485542517] )
            break;
          v31 = rand() & 0x1F;
        }
        dword_140404A6C[v31 + 485542517] = 1;
        v33 = (const char *)*(&off_1402B2000 + v31);
        v34 = (const char **)(&off_1402B2000 + v31);
        v35 = v33;
        do
        {
          v36 = *v35;
          v35[v67 - v33] = *v35;
          ++v35;
        }
        while ( v36 );
        sub_140158AB0((__int64)v66, "%s.DOC", v33);
        v37 = 2570 * v30;
        v38 = (int)dword_140404A6C[2570 * v30 + 275754072];
        if ( (int)v38 < 256 )
        {
          dword_140404A6C[6 * v38 + 275754073 + v37] = v25;
          v39 = v66;
          v40 = &dword_140404A6C[6 * (int)dword_140404A6C[v37 + 275754072] + 275754074 + v37];
          do
          {
            v41 = *v39++;
            *(_BYTE *)v40 = v41;
            v40 = (unsigned int *)((char *)v40 + 1);
          }
          while ( v41 );
          dword_140404A6C[6 * (int)dword_140404A6C[v37 + 275754072]++ + 275754078 + v37] = 0;
        }
        sub_140158AB0((__int64)v66, "%s", *v34);
        v42 = rand();
        v43 = v42 == 5 * (v42 / 5);
        v44 = 2500 * (rand() % 5 + 2);
        dword_140404A6C[34653 * v0 + 180001072] = v44;
        if ( v0 == dword_140404A6C[180001067] )
          dword_140404A6C[34653 * v0 + 180001072] = 5 * v44;
        v45 = 3;
        do
        {
          v46 = 0;
          v47 = rand() % 6;
          v48 = (int)dword_140404A6C[5873 * v47 + 283831510];
          if ( (_DWORD)v48 != -1 )
          {
            if ( (int)(dword_140404A6C[3597 * v48 + 71856275] - 1000) / 100 >= 0 )
              v46 = (int)(dword_140404A6C[3597 * v48 + 71856275] - 1000) / 100;
            if ( v46 > 1000 )
              v46 = 1000;
          }
          dword_140404A6C[34653 * v0 + 180001074 + 539 * v47] = dword_140404A6C[34653 * v0 + 180001072]
                                                              + (int)(v46 * dword_140404A6C[34653 * v0 + 180001072])
                                                              / 100;
          --v45;
        }
        while ( v45 );
        v49 = v0 + 200;
        dword_140404A6C[34653 * v0 + 180035589] = v0 + 200;
        sub_140158AB0((__int64)&dword_140404A6C[v2 + 180035590], "INTEL%02d.CDE", v0);
        v50 = &dword_140404A6C[396 * v27 + 225426047];
        v51 = &dword_140404A6C[396 * v64 + 225426047];
        sub_14012F890(
          &dword_140404A6C[290 * v49 + 273377350],
          v66,
          (__int64)v51,
          (__int64)v50,
          (__int64)off_1402B2100[v65],
          v43);
        sub_140115FF0(v49);
        v52 = v66;
        do
        {
          v53 = *v52;
          *((_BYTE *)&dword_140404A6C[180035657] + v2 * 4 - (_QWORD)v66 + (_QWORD)v52) = *v52;
          ++v52;
        }
        while ( v53 );
        v54 = (char *)&dword_140404A6C[180035673] + v2 * 4 - (_QWORD)v51;
        do
        {
          v55 = *(_BYTE *)v51;
          v54[(_QWORD)v51] = *(_BYTE *)v51;
          v51 = (unsigned int *)((char *)v51 + 1);
        }
        while ( v55 );
        v56 = (char *)&dword_140404A6C[180035689] + v2 * 4 - (_QWORD)v50;
        do
        {
          v57 = *(_BYTE *)v50;
          v56[(_QWORD)v50] = *(_BYTE *)v50;
          v50 = (unsigned int *)((char *)v50 + 1);
        }
        while ( v57 );
        v58 = v67;
        do
        {
          v59 = *v58;
          *((_BYTE *)&dword_140404A6C[180035705] + v2 * 4 - (_QWORD)v67 + (_QWORD)v58) = *v58;
          ++v58;
        }
        while ( v59 );
        dword_140404A6C[v2 + 180035721] = v43;
        v60 = &dword_140404A6C[v2 + 180001596];
        v61 = 6;
        do
        {
          sub_140158AB0((__int64)v60, (const char *)&dword_140273614);
          v60 += 539;
          --v61;
        }
        while ( v61 );
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v63 ^ v68);
}

