/* Address: 0x140092580 | Name: sub_140092580 | Size: 901 bytes */
void __fastcall sub_140092580(int a1)
{
  int v1; // r8d
  int v2; // r9d
  __m128i si128; // xmm4
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int *v6; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __m128i v11; // xmm2
  __m128i v12; // xmm1
  __m128i v13; // xmm3
  __m128i v14; // xmm2
  __m128i v15; // xmm0
  __m128i v16; // xmm3
  char *v17; // rdx
  _DWORD *v18; // rcx
  __int64 v19; // r9
  int v20; // eax
  char *v21; // rax
  __int64 v23; // rbp
  int v24; // esi
  int v25; // eax
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // [rsp+0h] [rbp-148h] BYREF
  char Src[128]; // [rsp+20h] [rbp-128h] BYREF
  char Buffer[128]; // [rsp+A0h] [rbp-A8h] BYREF

  if ( a1 < 0 )
  {
    if ( dword_163D75B60 )
    {
      v27 = dword_191541414;
      v28 = (__int64)dword_196199564++ << 7;
      HIWORD(dword_196199564) = 0;
      *(_DWORD *)((char *)&unk_195999560 + v28) = 2;
      *(_DWORD *)((char *)&unk_195999564 + v28) = v27;
      *(_QWORD *)&byte_1959995A0[v28] = 0x6C20303120706F54LL;
      *(_WORD *)&byte_1959995A0[v28 + 8] = 29545;
      *(_WORD *)&byte_1959995A0[v28 + 10] = 116;
      *(_QWORD *)((char *)&dword_195999580 + v28) = 11;
      *(int *)((char *)&dword_195999588 + v28) = -1;
      *(_DWORD *)((char *)&unk_19599958C + v28) = 0;
    }
  }
  else
  {
    v1 = dword_16DDCBA24;
    if ( a1 < dword_16DDCBA24 )
    {
      v2 = 0;
      dword_160A63100[0] = dword_16DDCBA24;
      if ( dword_16DDCBA24 >= 8 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7F60);
        v4 = 0;
        v5 = dword_16DDCBA24 - (dword_16DDCBA24 & 7);
        v6 = (unsigned int *)&unk_16DDCBB44;
        do
        {
          v7 = _mm_cvtsi32_si128(v6[28]);
          v2 += 8;
          v8 = _mm_cvtsi32_si128(*(v6 - 28));
          v9 = _mm_cvtsi32_si128(*v6);
          v10 = _mm_cvtsi32_si128(*(v6 - 56));
          v6 += 224;
          v11 = _mm_unpacklo_epi32(v9, v7);
          v12 = _mm_cvtsi32_si128(*(v6 - 84));
          v13 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v10, v8), v11);
          v14 = _mm_cvtsi32_si128(*(v6 - 112));
          v15 = _mm_sub_epi32(si128, v13);
          v16 = _mm_cvtsi32_si128(*(v6 - 168));
          xmmword_160C63104[v4 / 4] = (__int128)v15;
          xmmword_160C63114[v4 / 4] = (__int128)_mm_sub_epi32(
                                                  si128,
                                                  _mm_unpacklo_epi64(
                                                    _mm_unpacklo_epi32(v16, _mm_cvtsi32_si128(*(v6 - 140))),
                                                    _mm_unpacklo_epi32(v14, v12)));
          v4 += 8LL;
        }
        while ( (__int64)v4 < v5 );
      }
      if ( v2 < v1 )
      {
        v17 = (char *)&xmmword_160C63104[v2 / 4u];
        v18 = (_DWORD *)((char *)&unk_16DDCBA64 + 112 * v2);
        v19 = (unsigned int)(v1 - v2);
        do
        {
          v17 += 4;
          v20 = -1879048193 - *v18;
          v18 += 28;
          *((_DWORD *)v17 - 1) = v20;
          --v19;
        }
        while ( v19 );
      }
      sub_14004ACC0();
      sub_1400DBB30(Src, "%d. %s   $");
      sub_1400DBB90(Buffer);
      v21 = (char *)&v29 + 31;
      while ( *++v21 != 0 )
        ;
      strcpy(v21, Buffer);
      if ( dword_163D75B60 )
      {
        v23 = -1;
        do
          ++v23;
        while ( Src[v23] );
        v24 = dword_196199564;
        if ( (int)v23 > 63 )
          LODWORD(v23) = 63;
        v25 = dword_191541414;
        v26 = (__int64)dword_196199564 << 7;
        *(_DWORD *)((char *)&unk_195999560 + v26) = 2;
        *(_DWORD *)((char *)&unk_195999564 + v26) = v25;
        memcpy(&byte_1959995A0[v26], Src, (int)v23);
        byte_1959995A0[v26 + (int)v23] = 0;
        *(int *)((char *)&dword_195999580 + v26) = v23;
        *(int *)((char *)&dword_195999584 + v26) = 0;
        *(int *)((char *)&dword_195999588 + v26) = -1;
        dword_196199564 = v24 + 1;
        *(_DWORD *)((char *)&unk_19599958C + v26) = 0;
        HIWORD(dword_196199564) = 0;
      }
    }
  }
}

