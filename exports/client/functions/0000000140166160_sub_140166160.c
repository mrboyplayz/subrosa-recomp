/* Address: 0x140166160 | Name: sub_140166160 | Size: 629 bytes */
__int64 __fastcall sub_140166160(int a1, _DWORD *a2, _DWORD *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v5; // r14d
  __int64 result; // rax
  char *v10; // rbx
  unsigned int v11; // eax
  int v12; // edi
  __int64 v13; // rbp
  unsigned __int64 v14; // rsi
  unsigned int v15; // r8d
  int v16; // edx
  __int64 v17; // rcx
  int v18; // edi
  unsigned __int64 v19; // rcx
  const __m128i *v20; // r9
  __m128i v21; // xmm2
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __int64 i; // rax
  __int64 v29; // rdx
  unsigned int v30; // eax
  int v31[14]; // [rsp+40h] [rbp-38h] BYREF

  v5 = a5;
  result = sub_1401666B0(a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, a5, (__int64)v31, 8);
  v10 = (char *)result;
  if ( !result )
    return result;
  if ( v31[0] == 8 )
    goto LABEL_18;
  if ( v31[0] != 16 )
    sub_14023E640(
      L"ri.bits_per_channel == 8 || ri.bits_per_channel == 16",
      L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      1209);
  if ( a5 )
    v11 = a5;
  else
    v11 = *a4;
  v12 = v11 * *a3 * *a2;
  v13 = v12;
  v14 = j__malloc_base(v12);
  if ( v14 )
  {
    v16 = 0;
    if ( v12 >= 32 )
    {
      v17 = v12 - 1;
      if ( v14 > (unsigned __int64)&v10[2 * v17] || v17 + v14 < (unsigned __int64)v10 )
      {
        v18 = v12 - (v12 & 0x1F);
        v19 = v14 + 16;
        v20 = (const __m128i *)(v10 + 32);
        v21 = _mm_cvtsi32_si128(8u);
        do
        {
          v22 = _mm_loadu_si128(v20 - 2);
          v19 += 32LL;
          v16 += 32;
          v23 = _mm_loadu_si128(v20 - 1);
          v20 += 4;
          v24 = _mm_and_si128(_mm_srl_epi16(v22, v21), (__m128i)xmmword_1402791D0);
          v25 = _mm_and_si128(_mm_srl_epi16(v23, v21), (__m128i)xmmword_1402791D0);
          *(_QWORD *)(v19 - 48) = _mm_packus_epi16(v24, v24).m128i_u64[0];
          *(_QWORD *)(v19 - 40) = _mm_packus_epi16(v25, v25).m128i_u64[0];
          v26 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128(v20 - 4), v21), (__m128i)xmmword_1402791D0);
          v27 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128(v20 - 3), v21), (__m128i)xmmword_1402791D0);
          *(_QWORD *)(v19 - 32) = _mm_packus_epi16(v26, v26).m128i_u64[0];
          *(_QWORD *)(v19 - 24) = _mm_packus_epi16(v27, v27).m128i_u64[0];
        }
        while ( (__int64)(-16LL - v14 + v19) < v18 );
      }
    }
    for ( i = v16; i < v13; ++i )
      *(_BYTE *)(i + v14) = v10[2 * i + 1];
    free(v10);
    v10 = (char *)v14;
LABEL_18:
    v15 = dword_140404A6C[19064470];
    goto LABEL_19;
  }
  v15 = dword_140404A6C[19064470];
  *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "outofmem";
  v10 = nullptr;
LABEL_19:
  v29 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * v15);
  if ( *(_DWORD *)(v29 + 8) )
    v30 = *(_DWORD *)(v29 + 12);
  else
    v30 = dword_140404A6C[18215120];
  if ( v30 )
  {
    if ( !a5 )
      v5 = *a4;
    sub_14016F470(v10, (unsigned int)*a2, (unsigned int)*a3, v5);
  }
  return (__int64)v10;
}

