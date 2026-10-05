/* Address: 0x140178a70 | Name: sub_140178A70 | Size: 907 bytes */
__int64 __fastcall sub_140178A70(__int64 a1, int a2, float a3, void **a4, _DWORD *a5)
{
  float v5; // xmm10_4
  __int64 v7; // r15
  __int64 v9; // rbx
  int v10; // r8d
  __int64 v11; // rdi
  _BYTE *v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // eax
  _DWORD *v16; // r12
  __int64 v17; // rax
  int v18; // r8d
  int i; // ebp
  __int64 v21; // r10
  __int16 *v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rcx
  float v25; // xmm8_4
  __m128i v26; // xmm9
  float v27; // xmm9_4
  float v28; // xmm8_4
  __m128i v29; // xmm9
  float v30; // xmm9_4
  int v31; // [rsp+E8h] [rbp+10h] BYREF

  v31 = 0;
  v5 = a3 * a3;
  v7 = a2;
  v9 = 0;
  v10 = 0;
  LODWORD(v11) = 0;
  if ( a2 > 0 )
  {
    v12 = (_BYTE *)(a1 + 12);
    v13 = v7;
    do
    {
      v14 = *v12 == 1;
      v15 = v10 + 1;
      v12 += 14;
      if ( !v14 )
        v15 = v10;
      v10 = v15;
      --v13;
    }
    while ( v13 );
  }
  v16 = a5;
  *a5 = v10;
  if ( !v10 )
    return 0;
  v17 = j__malloc_base(4LL * v10);
  *a4 = (void *)v17;
  if ( !v17 )
  {
    *v16 = 0;
    return 0;
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( i == 1 )
    {
      v9 = j__malloc_base(8LL * v31);
      if ( !v9 )
      {
        free(nullptr);
        free(*a4);
        *a4 = nullptr;
        *v16 = 0;
        return 0;
      }
    }
    v31 = 0;
    v21 = -1;
    if ( v7 > 0 )
    {
      v22 = (__int16 *)(a1 + 10);
      v23 = v7;
      while ( 1 )
      {
        if ( *((_BYTE *)v22 + 2) == 1 )
        {
          if ( v21 >= 0 )
            *((_DWORD *)*a4 + v21) = v31 - v11;
          ++v21;
          v11 = v31;
          v28 = (float)*(v22 - 5);
          v29 = _mm_cvtsi32_si128(*(v22 - 4));
          ++v31;
          v30 = _mm_cvtepi32_ps(v29).m128_f32[0];
          if ( v9 )
          {
            *(float *)(v9 + 8 * v11) = v28;
            *(float *)(v9 + 8 * v11 + 4) = v30;
          }
          goto LABEL_28;
        }
        if ( *((_BYTE *)v22 + 2) == 2 )
        {
          v24 = v31;
          v25 = (float)*(v22 - 5);
          v26 = _mm_cvtsi32_si128(*(v22 - 4));
          ++v31;
          v27 = _mm_cvtepi32_ps(v26).m128_f32[0];
          if ( v9 )
          {
            *(float *)(v9 + 8 * v24) = v25;
            *(float *)(v9 + 8 * v24 + 4) = v27;
          }
          goto LABEL_28;
        }
        if ( *((_BYTE *)v22 + 2) == 3 )
          break;
        if ( *((_BYTE *)v22 + 2) == 4 )
        {
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_140183DC0)(
            v9,
            (unsigned int)&v31,
            v18,
            (_DWORD)v22,
            (float)*(v22 - 3),
            (float)*(v22 - 2),
            (float)*(v22 - 1),
            (float)*v22,
            (float)*(v22 - 5),
            (float)*(v22 - 4),
            LODWORD(v5),
            0);
LABEL_20:
          v18 = *(v22 - 5);
        }
LABEL_28:
        v22 += 7;
        if ( !--v23 )
          goto LABEL_29;
      }
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_140184190)(
        v9,
        (unsigned int)&v31,
        v18,
        (_DWORD)v22,
        (float)*(v22 - 3),
        (float)*(v22 - 2),
        (float)*(v22 - 5),
        (float)*(v22 - 4),
        LODWORD(v5),
        0);
      goto LABEL_20;
    }
LABEL_29:
    *((_DWORD *)*a4 + v21) = v31 - v11;
  }
  return v9;
}

