/* Address: 0x14017c590 | Name: sub_14017C590 | Size: 770 bytes */
__int64 __fastcall sub_14017C590(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v9; // r10
  __int64 v10; // r11
  int v11; // edx
  __int64 v12; // rax
  int v13; // r10d
  int v14; // ecx
  unsigned int *v15; // rax
  __m128i v16; // xmm5
  __m128i v17; // xmm4
  signed __int64 v18; // r8
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  __m128i v25; // xmm4
  __int64 v26; // r9
  int v27; // edx
  int v28; // r8d
  _DWORD *v29; // rcx
  unsigned __int64 v30; // rax
  __int64 result; // rax
  int *v32; // rsi
  unsigned int v33; // eax
  int v34; // eax
  _DWORD *v35; // rdx
  int v36; // edi
  int v37; // r11d
  int *v38; // r8
  int v39; // r9d
  __int64 i; // rbx
  int v41; // r11d
  int v42; // ecx
  int *v43; // rcx
  __int64 v44; // r10
  unsigned int v45; // ebx
  _QWORD v46[20]; // [rsp+30h] [rbp-C8h] BYREF

  if ( a5 > 0 )
  {
    v9 = a4 + 16;
    v10 = a5;
    do
    {
      v11 = 0;
      if ( *(int *)v9 > 0 )
      {
        v12 = 0;
        do
        {
          v12 += 28;
          ++v11;
          *(_WORD *)(v12 + *(_QWORD *)(v9 + 8) - 22) = 0;
          *(_WORD *)(v12 + *(_QWORD *)(v9 + 8) - 24) = 0;
          *(_WORD *)(v12 + *(_QWORD *)(v9 + 8) - 26) = 0;
          *(_WORD *)(v12 + *(_QWORD *)(v9 + 8) - 28) = 0;
        }
        while ( v11 < *(_DWORD *)v9 );
      }
      v9 += 40;
      --v10;
    }
    while ( v10 );
  }
  v13 = 0;
  v14 = 0;
  if ( a5 >= 8 )
  {
    v15 = (unsigned int *)(a4 + 96);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    do
    {
      v19 = _mm_cvtsi32_si128(v15[10]);
      v14 += 8;
      v20 = _mm_cvtsi32_si128(*(v15 - 10));
      v18 += 8LL;
      v21 = _mm_cvtsi32_si128(*v15);
      v22 = _mm_cvtsi32_si128(*(v15 - 20));
      v15 += 80;
      v16 = _mm_add_epi32(_mm_unpacklo_epi64(_mm_unpacklo_epi32(v22, v20), _mm_unpacklo_epi32(v21, v19)), v16);
      v23 = _mm_add_epi32(
              _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v15 - 60)), _mm_cvtsi32_si128(*(v15 - 50))),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v15 - 40)), _mm_cvtsi32_si128(*(v15 - 30)))),
              v17);
      v17 = v23;
    }
    while ( v18 < (__int64)(a5 & 0xFFFFFFFFFFFFFFF8uLL) );
    v24 = _mm_add_epi32(v23, v16);
    v25 = _mm_add_epi32(v24, _mm_srli_si128(v24, 8));
    v13 = _mm_cvtsi128_si32(_mm_add_epi32(v25, _mm_srli_si128(v25, 4)));
  }
  v26 = v14;
  v27 = 0;
  v28 = 0;
  if ( v14 < (__int64)a5 )
  {
    if ( a5 - (__int64)v14 < 2 )
      goto LABEL_16;
    v29 = (_DWORD *)(a4 + 8 * (v14 + 4LL * v14 + 7));
    v30 = ((unsigned __int64)(a5 - v26 - 2) >> 1) + 1;
    v26 += 2 * v30;
    do
    {
      v27 += *(v29 - 10);
      v28 += *v29;
      v29 += 20;
      --v30;
    }
    while ( v30 );
    if ( v26 < a5 )
LABEL_16:
      v13 += *(_DWORD *)(a4 + 40 * v26 + 16);
    v13 += v28 + v27;
  }
  result = j__malloc_base(24LL * v13);
  v32 = (int *)result;
  if ( result )
  {
    v46[0] = *a1;
    v33 = sub_140179790(a2, a3);
    sub_14017B740((__int64)v46, a2, v33);
    v34 = sub_14017C8A0((_DWORD)a1, (unsigned int)v46, a4, a5, (__int64)v32);
    v35 = (_DWORD *)a1[1];
    v36 = 0;
    if ( v34 > 0 )
    {
      v37 = v35[2];
      v38 = v32 + 3;
      v39 = v35[3];
      for ( i = 0; i < v34; ++i )
      {
        if ( v37 + *v38 > *v35 )
        {
          v39 = v35[4];
          v37 = 0;
          v35[3] = v39;
          v35[2] = 0;
        }
        if ( v39 + v38[1] > v35[1] )
          break;
        *(v38 - 3) = v37;
        v41 = *v38;
        *(v38 - 2) = v35[3];
        v38[2] = 1;
        v37 = v35[2] + v41;
        v39 = v35[3];
        v35[2] = v37;
        v42 = v39 + v38[1];
        if ( v42 > v35[4] )
          v35[4] = v42;
        ++v36;
        v38 += 6;
      }
    }
    if ( v36 < (__int64)v34 )
    {
      v43 = &v32[6 * v36 + 5];
      v44 = v34 - (__int64)v36;
      do
      {
        *v43 = 0;
        v43 += 6;
        --v44;
      }
      while ( v44 );
    }
    v45 = sub_14017CDD0((_DWORD)a1, (unsigned int)v46, a4, a5, (__int64)v32);
    free(v32);
    return v45;
  }
  return result;
}

