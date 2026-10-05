/* Address: 0x1400f0160 | Name: sub_1400F0160 | Size: 901 bytes */
__int64 __fastcall sub_1400F0160(int a1)
{
  __int64 v1; // rdi
  signed int v2; // r8d
  signed int v3; // r9d
  __m128i si128; // xmm4
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int *v7; // rax
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  __m128i v10; // xmm2
  __m128i v11; // xmm3
  __m128i v12; // xmm2
  __m128i v13; // xmm1
  __m128i v14; // xmm3
  __m128i v15; // xmm2
  __m128i v16; // xmm0
  __m128i v17; // xmm3
  unsigned int *v18; // rdx
  unsigned int *v19; // rcx
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rbx
  char *v23; // rax
  __int64 v25; // rbp
  unsigned int v26; // esi
  unsigned int v27; // eax
  __int64 v28; // rdi
  unsigned int v30; // eax
  __int64 v31; // rcx
  _BYTE v32[32]; // [rsp+0h] [rbp-148h] BYREF
  _BYTE Src[128]; // [rsp+20h] [rbp-128h] BYREF
  char v34[128]; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+120h] [rbp-28h]

  v1 = a1;
  if ( a1 < 0 )
  {
    if ( dword_140404A6C[456202453] )
    {
      v30 = dword_140404A6C[283831474];
      v31 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v31) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v31) = v30;
      *(_QWORD *)((char *)&dword_140404A6C[297756301] + v31) = 0x6C20303120706F54LL;
      *(_WORD *)((char *)&dword_140404A6C[297756303] + v31) = 29545;
      *(_WORD *)((char *)&dword_140404A6C[297756303] + v31 + 2) = 116;
      *(_QWORD *)((char *)&dword_140404A6C[297756293] + v31) = 11;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v31) = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v31) = 0;
    }
  }
  else
  {
    v2 = dword_140404A6C[134050358];
    if ( a1 < (int)dword_140404A6C[134050358] )
    {
      v3 = 0;
      dword_140404A6C[436668493] = dword_140404A6C[134050358];
      if ( (int)dword_140404A6C[134050358] >= 8 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_140279890);
        v5 = 0;
        v6 = (int)(dword_140404A6C[134050358] - (dword_140404A6C[134050358] & 7));
        v7 = &dword_140404A6C[134050430];
        do
        {
          v8 = _mm_cvtsi32_si128(v7[28]);
          v3 += 8;
          v9 = _mm_cvtsi32_si128(*(v7 - 28));
          v10 = _mm_cvtsi32_si128(*v7);
          v11 = _mm_cvtsi32_si128(*(v7 - 56));
          v7 += 224;
          v12 = _mm_unpacklo_epi32(v10, v8);
          v13 = _mm_cvtsi32_si128(*(v7 - 84));
          v14 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v11, v9), v12);
          v15 = _mm_cvtsi32_si128(*(v7 - 112));
          v16 = _mm_sub_epi32(si128, v14);
          v17 = _mm_cvtsi32_si128(*(v7 - 168));
          *(__m128i *)&dword_140404A6C[v5 + 437192782] = v16;
          *(__m128i *)&dword_140404A6C[v5 + 437192786] = _mm_sub_epi32(
                                                           si128,
                                                           _mm_unpacklo_epi64(
                                                             _mm_unpacklo_epi32(v17, _mm_cvtsi32_si128(*(v7 - 140))),
                                                             _mm_unpacklo_epi32(v15, v13)));
          v5 += 8;
        }
        while ( v5 < v6 );
      }
      if ( v3 < v2 )
      {
        v18 = &dword_140404A6C[v3 + 437192782];
        v19 = &dword_140404A6C[28 * v3 + 134050374];
        v20 = (unsigned int)(v2 - v3);
        do
        {
          ++v18;
          v21 = -1879048193 - *v19;
          v19 += 28;
          *(v18 - 1) = v21;
          --v20;
        }
        while ( v20 );
      }
      sub_14007D710();
      v22 = 4 * v1 + 1750887332;
      sub_140158AB0(
        Src,
        "%d. %s   $",
        v1 + 1,
        (const char *)&dword_140404A6C[28 * *(int *)(v22 + 0x140000000LL) + 134050365]);
      sub_140158B10(v34, dword_140404A6C[28 * *(int *)(v22 + 0x140000000LL) + 134050374]);
      v23 = &v32[31];
      while ( *++v23 != 0 )
        ;
      strcpy(v23, v34);
      if ( dword_140404A6C[456202453] )
      {
        v25 = -1;
        do
          ++v25;
        while ( Src[v25] );
        v26 = dword_140404A6C[308307070];
        if ( (int)v25 > 63 )
          LODWORD(v25) = 63;
        v27 = dword_140404A6C[283831474];
        v28 = (__int64)(int)dword_140404A6C[308307070] << 7;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v28) = 2;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v28) = v27;
        MEMORY[0x1401FC920]((char *)&dword_140404A6C[297756301] + v28, Src);
        *((_BYTE *)&dword_140404A6C[297756301] + v28 + (int)v25) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v28) = v25;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v28) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v28) = -1;
        dword_140404A6C[308307070] = v26 + 1;
        *(unsigned int *)((char *)&dword_140404A6C[297756296] + v28) = 0;
        HIWORD(dword_140404A6C[308307070]) = 0;
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v32 ^ v35);
}

