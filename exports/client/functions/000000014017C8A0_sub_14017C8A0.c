/* Address: 0x14017c8a0 | Name: sub_14017C8A0 | Size: 1096 bytes */
__int64 __fastcall sub_14017C8A0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // ebp
  __int64 result; // rax
  float *v9; // rdi
  __int64 v10; // r13
  float v11; // xmm8_4
  __int64 v12; // r10
  float v13; // xmm8_4
  bool v14; // cc
  int v15; // r14d
  __int64 v16; // r12
  _DWORD *v17; // r15
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rdx
  int v21; // r9d
  float v22; // xmm7_4
  float v23; // xmm6_4
  int v24; // eax
  int v25; // r10d
  int v26; // r11d
  int v27; // ecx
  int v28; // eax
  int v29; // edx
  int v30; // r11d
  int v31; // r9d
  int v32; // r8d
  __int64 v33; // r8
  __m128 v34; // xmm0
  __m128d v35; // xmm1
  __m128 v36; // xmm0
  __m128d v37; // xmm1
  __m128 v38; // xmm0
  __m128d v39; // xmm1
  __m128 v40; // xmm0
  __m128d v41; // xmm1
  __int64 v42; // [rsp+20h] [rbp-B8h]
  __int64 v43; // [rsp+28h] [rbp-B0h] BYREF
  __int128 v44; // [rsp+30h] [rbp-A8h]
  __int128 v45; // [rsp+40h] [rbp-98h]
  __int64 v46; // [rsp+50h] [rbp-88h]
  int v47; // [rsp+58h] [rbp-80h]
  unsigned int v48; // [rsp+F8h] [rbp+20h]

  v5 = 0;
  result = 0;
  v48 = 0;
  v42 = a4;
  if ( a4 > 0 )
  {
    v9 = (float *)(a3 + 32);
    v10 = 0;
    while ( 1 )
    {
      v11 = *(v9 - 8);
      if ( v11 <= 0.0 )
      {
        v13 = -(float)(v11
                     / (float)(*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 19LL)
                             + (*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 18LL) << 8)));
      }
      else
      {
        v12 = *(int *)(a2 + 36);
        v13 = v11
            / (float)((__int16)((*(unsigned __int8 *)(v12 + *(_QWORD *)(a2 + 8) + 4) << 8)
                              + *(unsigned __int8 *)(v12 + *(_QWORD *)(a2 + 8) + 5))
                    - (__int16)(*(unsigned __int8 *)(v12 + *(_QWORD *)(a2 + 8) + 7)
                              + (*(unsigned __int8 *)(v12 + *(_QWORD *)(a2 + 8) + 6) << 8)));
      }
      v14 = *((_DWORD *)v9 - 4) <= 0;
      v15 = 0;
      *(_BYTE *)v9 = *(_BYTE *)(a1 + 32);
      *((_BYTE *)v9 + 1) = *(_BYTE *)(a1 + 36);
      if ( !v14 )
        break;
      result = v48;
LABEL_32:
      v9 += 10;
      if ( !--v42 )
        return result;
    }
    v16 = 0;
    v17 = (_DWORD *)(a5 + 8 * (v10 + 2 * v10 + 2));
    while ( 1 )
    {
      v18 = *((_QWORD *)v9 - 3);
      v19 = v18 ? *(_DWORD *)(v18 + v16) : v15 + *((_DWORD *)v9 - 7);
      v20 = (unsigned int)sub_140178410(a2, v19);
      v22 = (float)*(int *)(a1 + 36) * v13;
      v23 = (float)*(int *)(a1 + 32) * v13;
      if ( *(_DWORD *)(a2 + 76) )
        break;
      v28 = sub_14017DA60(a2, v20);
      if ( v28 >= 0 )
      {
        v33 = *(_QWORD *)(a2 + 8);
        v25 = (__int16)(*(unsigned __int8 *)(v33 + v28 + 9) + (*(unsigned __int8 *)(v33 + v28 + 8) << 8));
        v26 = (__int16)(*(unsigned __int8 *)(v33 + v28 + 3) + (*(unsigned __int8 *)(v33 + v28 + 2) << 8));
        v5 = (__int16)(*(unsigned __int8 *)(v33 + v28 + 7) + (*(unsigned __int8 *)(v33 + v28 + 6) << 8));
        v27 = (__int16)(*(unsigned __int8 *)(v33 + v28 + 5) + (*(unsigned __int8 *)(v33 + v28 + 4) << 8));
LABEL_20:
        v34 = (__m128)COERCE_UNSIGNED_INT((float)-v27);
        v34.m128_f32[0] = v34.m128_f32[0] * v22;
        v35 = _mm_cvtps_pd(v34);
        if ( (double)(int)v35.m128d_f64[0] != v35.m128d_f64[0] )
          v35.m128d_f64[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v35, v35)) & 1) + (int)v35.m128d_f64[0]);
        v36 = (__m128)COERCE_UNSIGNED_INT((float)v26);
        v29 = (int)v35.m128d_f64[0];
        v36.m128_f32[0] = v36.m128_f32[0] * v23;
        v37 = _mm_cvtps_pd(v36);
        if ( (double)(int)v37.m128d_f64[0] != v37.m128d_f64[0] )
          v37.m128d_f64[0] = (double)((int)v37.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v37, v37)) & 1));
        v38 = (__m128)COERCE_UNSIGNED_INT((float)v5);
        v30 = (int)v37.m128d_f64[0];
        v38.m128_f32[0] = v38.m128_f32[0] * v23;
        v39 = _mm_cvtps_pd(v38);
        if ( (double)(int)v39.m128d_f64[0] != v39.m128d_f64[0] )
          v39.m128d_f64[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v39, v39)) & 1) + (int)v39.m128d_f64[0]);
        v31 = (int)v39.m128d_f64[0];
        v40 = (__m128)COERCE_UNSIGNED_INT((float)-v25);
        v40.m128_f32[0] = v40.m128_f32[0] * v22;
        v41 = _mm_cvtps_pd(v40);
        if ( (double)(int)v41.m128d_f64[0] != v41.m128d_f64[0] )
          v41.m128d_f64[0] = (double)((int)v41.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v41, v41)) & 1));
        v32 = (int)v41.m128d_f64[0];
        v5 = 0;
        goto LABEL_29;
      }
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
LABEL_29:
      ++v10;
      ++v15;
      *(v17 - 1) = *(_DWORD *)(a1 + 28) - 1 + v31 + *(_DWORD *)(a1 + 32) - v30;
      result = v48 + 1;
      v16 += 4;
      ++v48;
      *v17 = *(_DWORD *)(a1 + 36) + v29 - v32 + *(_DWORD *)(a1 + 28) - 1;
      v17 += 6;
      if ( v15 >= *((_DWORD *)v9 - 4) )
        goto LABEL_32;
    }
    v43 = 1;
    v46 = 0;
    v47 = 0;
    v44 = 0;
    v45 = 0;
    v24 = sub_140182AD0(a2, v20, (unsigned int)&v43, v21);
    v25 = 0;
    v26 = 0;
    if ( v24 )
    {
      v25 = HIDWORD(v45);
      v26 = v45;
      v5 = DWORD1(v45);
    }
    v27 = 0;
    if ( v24 )
      v27 = DWORD2(v45);
    goto LABEL_20;
  }
  return result;
}

