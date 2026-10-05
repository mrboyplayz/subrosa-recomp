/* Address: 0x140179e50 | Name: sub_140179E50 | Size: 997 bytes */
__int64 __fastcall sub_140179E50(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned int a6,
        int *a7,
        int *a8,
        int *a9,
        int *a10)
{
  float v10; // xmm6_4
  float v11; // xmm7_4
  int v13; // r9d
  int v14; // r12d
  __int64 v16; // rbx
  int v17; // eax
  int v18; // edi
  int v19; // r11d
  int v20; // r8d
  int v21; // edx
  int v22; // eax
  __int64 v23; // r9
  __m128 v24; // xmm0
  __m128d v25; // xmm1
  int v26; // ecx
  int v27; // r14d
  __m128 v28; // xmm0
  __m128d v29; // xmm2
  int v30; // ecx
  __m128 v31; // xmm0
  int v32; // ebp
  __m128d v33; // xmm2
  int v34; // ecx
  __m128 v35; // xmm0
  int v36; // ecx
  __m128d v37; // xmm1
  int v38; // edx
  int v39; // edi
  int v40; // eax
  int v41; // edx
  int v42; // edi
  int v43; // ecx
  int v44; // edx
  __int64 v45; // [rsp+58h] [rbp-C0h]
  void *Block; // [rsp+60h] [rbp-B8h] BYREF
  _DWORD v47[4]; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+78h] [rbp-A0h]
  __int64 v49; // [rsp+80h] [rbp-98h] BYREF
  __int128 v50; // [rsp+88h] [rbp-90h]
  __int128 v51; // [rsp+98h] [rbp-80h]
  __int64 v52; // [rsp+A8h] [rbp-70h]
  int v53; // [rsp+B0h] [rbp-68h]

  v10 = a2;
  v11 = a3;
  v14 = sub_14017B360(a1, a6, &Block);
  if ( a2 == 0.0 )
    v10 = a3;
  if ( a3 == 0.0 )
  {
    if ( v10 == 0.0 )
    {
      free(Block);
      return 0;
    }
    v11 = v10;
  }
  v16 = 0;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v49 = 1;
    v52 = 0;
    v51 = 0;
    v53 = 0;
    v50 = 0;
    v17 = sub_140182AD0(a1, a6, (unsigned int)&v49, v13);
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( v17 )
      v18 = HIDWORD(v51);
    v21 = 0;
    if ( v17 )
    {
      v19 = v51;
      v20 = DWORD1(v51);
      v21 = DWORD2(v51);
    }
    goto LABEL_15;
  }
  v22 = sub_14017DA60(a1, a6);
  if ( v22 >= 0 )
  {
    v23 = *(_QWORD *)(a1 + 8);
    v18 = (__int16)(*(unsigned __int8 *)(v23 + v22 + 9) + (*(unsigned __int8 *)(v23 + v22 + 8) << 8));
    v19 = (__int16)(*(unsigned __int8 *)(v23 + v22 + 3) + (*(unsigned __int8 *)(v23 + v22 + 2) << 8));
    v20 = (__int16)((*(unsigned __int8 *)(v23 + v22 + 6) << 8) + *(unsigned __int8 *)(v23 + v22 + 7));
    v21 = (__int16)(*(unsigned __int8 *)(v23 + v22 + 5) + (*(unsigned __int8 *)(v23 + v22 + 4) << 8));
LABEL_15:
    v24 = (__m128)COERCE_UNSIGNED_INT((float)v19);
    v24.m128_f32[0] = (float)(v24.m128_f32[0] * v10) + a4;
    v25 = _mm_cvtps_pd(v24);
    v26 = (int)v25.m128d_f64[0];
    if ( (double)v26 != v25.m128d_f64[0] )
      v25.m128d_f64[0] = (double)(v26 - (_mm_movemask_pd(_mm_unpacklo_pd(v25, v25)) & 1));
    v27 = (int)v25.m128d_f64[0];
    v28 = (__m128)LODWORD(a5);
    v28.m128_f32[0] = a5 - (float)((float)v18 * v11);
    v29 = _mm_cvtps_pd(v28);
    v30 = (int)v29.m128d_f64[0];
    if ( (double)v30 != v29.m128d_f64[0] )
      v29.m128d_f64[0] = (double)(v30 - (_mm_movemask_pd(_mm_unpacklo_pd(v29, v29)) & 1));
    v31 = (__m128)LODWORD(a5);
    v32 = (int)v29.m128d_f64[0];
    v31.m128_f32[0] = a5 - (float)((float)v21 * v11);
    v33 = _mm_cvtps_pd(v31);
    v34 = (int)v33.m128d_f64[0];
    if ( (double)v34 != v33.m128d_f64[0] )
      v33.m128d_f64[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v33, v33)) & 1) + v34);
    v35 = (__m128)COERCE_UNSIGNED_INT((float)v20);
    v36 = (int)v33.m128d_f64[0];
    v35.m128_f32[0] = (float)(v35.m128_f32[0] * v10) + a4;
    v37 = _mm_cvtps_pd(v35);
    v38 = (int)v37.m128d_f64[0];
    if ( (double)v38 != v37.m128d_f64[0] )
      v37.m128d_f64[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v37, v37)) & 1) + v38);
    v39 = (int)v37.m128d_f64[0];
    v40 = v27;
    v41 = v32;
    goto LABEL_29;
  }
  v27 = 0;
  v32 = 0;
  v36 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
LABEL_29:
  v42 = v39 - v40;
  v43 = v36 - v41;
  v47[0] = v42;
  v47[1] = v43;
  if ( a7 )
    *a7 = v42;
  if ( a8 )
    *a8 = v43;
  if ( a9 )
    *a9 = v27;
  if ( a10 )
    *a10 = v32;
  if ( v42 && v43 )
  {
    v48 = j__malloc_base(v43 * v42);
    v16 = v48;
    if ( v48 )
    {
      v45 = *(_QWORD *)a1;
      v47[2] = v42;
      sub_14017D510(
        (unsigned int)v47,
        v44,
        (_DWORD)Block,
        v14,
        LODWORD(v10),
        LODWORD(v11),
        LODWORD(a4),
        LODWORD(a5),
        v27,
        v32,
        1,
        v45);
      v16 = v48;
    }
  }
  free(Block);
  return v16;
}

