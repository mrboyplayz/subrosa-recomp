/* Address: 0x14017cdd0 | Name: sub_14017CDD0 | Size: 1723 bytes */
__int64 __fastcall sub_14017CDD0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // ebp
  __int64 v8; // r9
  __int64 v9; // r15
  float v10; // xmm8_4
  __int64 v11; // r11
  float v12; // xmm8_4
  int v13; // edx
  int v14; // ecx
  float v15; // xmm11_4
  float v16; // xmm12_4
  float v17; // xmm10_4
  float v18; // xmm9_4
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r14
  _DWORD *v22; // rbx
  __int64 v23; // r13
  int v24; // edx
  signed int v25; // r9d
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int16 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r9
  __int16 v34; // dx
  float v35; // xmm6_4
  float v36; // xmm7_4
  int v37; // eax
  int v38; // r11d
  int v39; // edx
  int v40; // eax
  int v41; // r12d
  __int64 v42; // r9
  __m128 v43; // xmm0
  __m128d v44; // xmm1
  __m128 v45; // xmm0
  __m128d v46; // xmm1
  unsigned int v47; // edx
  unsigned int v48; // edx
  __int16 v49; // ax
  int v50; // eax
  int v52; // [rsp+50h] [rbp-138h]
  int v53; // [rsp+54h] [rbp-134h]
  int v54; // [rsp+58h] [rbp-130h]
  int v55; // [rsp+5Ch] [rbp-12Ch]
  __int64 v56; // [rsp+60h] [rbp-128h]
  __int64 v57; // [rsp+68h] [rbp-120h]
  __int64 v58; // [rsp+70h] [rbp-118h]
  __int64 v59; // [rsp+78h] [rbp-110h] BYREF
  __int128 v60; // [rsp+80h] [rbp-108h]
  __int128 v61; // [rsp+90h] [rbp-F8h]
  __int64 v62; // [rsp+A0h] [rbp-E8h]
  int v63; // [rsp+A8h] [rbp-E0h]
  int v64; // [rsp+190h] [rbp+8h]
  int v65; // [rsp+1A8h] [rbp+20h]

  v5 = 1;
  v54 = *(_DWORD *)(a1 + 32);
  v55 = *(_DWORD *)(a1 + 36);
  v58 = a4;
  v64 = 1;
  if ( a4 > 0 )
  {
    v8 = 0;
    v9 = a3 + 8;
    v56 = 0;
    while ( 1 )
    {
      v10 = *(float *)(v9 - 8);
      if ( v10 <= 0.0 )
      {
        v12 = -(float)(v10
                     / (float)(*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 19LL)
                             + (*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 18LL) << 8)));
      }
      else
      {
        v11 = *(int *)(a2 + 36);
        v8 = v56;
        v12 = v10
            / (float)((__int16)(*(unsigned __int8 *)(v11 + *(_QWORD *)(a2 + 8) + 5)
                              + (*(unsigned __int8 *)(v11 + *(_QWORD *)(a2 + 8) + 4) << 8))
                    - (__int16)((*(unsigned __int8 *)(v11 + *(_QWORD *)(a2 + 8) + 6) << 8)
                              + *(unsigned __int8 *)(v11 + *(_QWORD *)(a2 + 8) + 7)));
      }
      v13 = *(unsigned __int8 *)(v9 + 24);
      *(_DWORD *)(a1 + 32) = v13;
      v14 = *(unsigned __int8 *)(v9 + 25);
      *(_DWORD *)(a1 + 36) = v14;
      v15 = 1.0 / (float)v13;
      v16 = 1.0 / (float)v14;
      v17 = v13 ? (float)(0.5 / (float)v13) * (float)(1 - v13) : 0.0;
      v18 = v14 ? (float)(0.5 / (float)v14) * (float)(1 - v14) : 0.0;
      v19 = 0;
      v52 = 0;
      if ( *(int *)(v9 + 8) > 0 )
        break;
LABEL_41:
      v9 += 40;
      if ( !--v58 )
        goto LABEL_42;
    }
    v5 = 0;
    v20 = 0;
    v57 = 0;
    v21 = 0;
    v22 = (_DWORD *)(a5 + 4 + 24 * v8);
    while ( 1 )
    {
      if ( !v22[4] )
      {
        v64 = 0;
        goto LABEL_40;
      }
      v23 = *(_QWORD *)(v9 + 16);
      v24 = *(_QWORD *)v9 ? *(_DWORD *)(v20 + *(_QWORD *)v9) : v19 + *(_DWORD *)(v9 - 4);
      v25 = sub_140178410(a2, v24);
      v65 = v25;
      v26 = *(_DWORD *)(a1 + 28);
      *(v22 - 1) += v26;
      *v22 += v26;
      v22[2] -= v26;
      v22[3] -= v26;
      v27 = *(int *)(a2 + 36);
      v28 = *(_QWORD *)(a2 + 8);
      v29 = *(unsigned __int8 *)(v27 + v28 + 34);
      v30 = *(unsigned __int8 *)(v27 + v28 + 35);
      if ( v25 >= (int)(v30 + (*(unsigned __int8 *)(v27 + v28 + 34) << 8)) )
      {
        v32 = *(int *)(a2 + 40) + v28;
        v33 = v30 + (v29 << 8);
        v34 = *(unsigned __int8 *)(v32 + 4 * v33 - 4);
        LOWORD(v32) = *(unsigned __int8 *)(v32 + 4 * v33 - 3);
        v25 = v65;
        v31 = (v34 << 8) + v32;
      }
      else
      {
        v31 = *(unsigned __int8 *)(*(int *)(a2 + 40) + v28 + 4 * v25 + 1)
            + (*(unsigned __int8 *)(*(int *)(a2 + 40) + v28 + 4 * v25) << 8);
      }
      v53 = v31;
      v35 = (float)*(int *)(a1 + 36) * v12;
      v36 = (float)*(int *)(a1 + 32) * v12;
      if ( *(_DWORD *)(a2 + 76) )
        break;
      v40 = sub_14017DA60(a2, (unsigned int)v25);
      if ( v40 >= 0 )
      {
        v42 = *(_QWORD *)(a2 + 8);
        v38 = (__int16)(*(unsigned __int8 *)(v40 + v42 + 9) + (*(unsigned __int8 *)(v40 + v42 + 8) << 8));
        v39 = (__int16)((*(unsigned __int8 *)(v40 + v42 + 2) << 8) + *(unsigned __int8 *)(v40 + v42 + 3));
LABEL_29:
        v43 = (__m128)COERCE_UNSIGNED_INT((float)-v38);
        v43.m128_f32[0] = v43.m128_f32[0] * v35;
        v44 = _mm_cvtps_pd(v43);
        if ( (double)(int)v44.m128d_f64[0] != v44.m128d_f64[0] )
          v44.m128d_f64[0] = (double)((int)v44.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v44, v44)) & 1));
        v45 = (__m128)COERCE_UNSIGNED_INT((float)v39);
        v41 = (int)v44.m128d_f64[0];
        v45.m128_f32[0] = v45.m128_f32[0] * v36;
        v46 = _mm_cvtps_pd(v45);
        if ( (double)(int)v46.m128d_f64[0] != v46.m128d_f64[0] )
          v46.m128d_f64[0] = (double)((int)v46.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v46, v46)) & 1));
        v5 = (int)v46.m128d_f64[0];
        goto LABEL_34;
      }
      v41 = 0;
LABEL_34:
      sub_14017C040(
        a2,
        *(_QWORD *)(a1 + 40) + (int)*(v22 - 1) + (__int64)(*v22 * *(_DWORD *)(a1 + 24)),
        v22[2] - *(_DWORD *)(a1 + 32) + 1,
        v22[3] - *(_DWORD *)(a1 + 36) + 1,
        *(_DWORD *)(a1 + 24),
        (float)*(int *)(a1 + 32) * v12,
        (float)*(int *)(a1 + 36) * v12,
        0.0,
        0,
        v65);
      v47 = *(_DWORD *)(a1 + 32);
      if ( v47 > 1 )
        sub_140181080(
          *(_DWORD *)(a1 + 40) + *(v22 - 1) + *v22 * *(_DWORD *)(a1 + 24),
          v22[2],
          v22[3],
          *(_DWORD *)(a1 + 24),
          v47);
      v48 = *(_DWORD *)(a1 + 36);
      if ( v48 > 1 )
        sub_1401843E0(
          *(_DWORD *)(a1 + 40) + *(v22 - 1) + *v22 * *(_DWORD *)(a1 + 24),
          v22[2],
          v22[3],
          *(_DWORD *)(a1 + 24),
          v48);
      v19 = v52;
      v20 = v57;
      v8 = v56;
      *(_WORD *)(v21 + v23) = *((_WORD *)v22 - 2);
      *(_WORD *)(v21 + v23 + 2) = *(_WORD *)v22;
      *(_WORD *)(v21 + v23 + 4) = *((_WORD *)v22 - 2) + *((_WORD *)v22 + 4);
      v49 = *(_WORD *)v22 + *((_WORD *)v22 + 6);
      *(float *)(v21 + v23 + 16) = (float)v53 * v12;
      *(_WORD *)(v21 + v23 + 6) = v49;
      *(float *)(v21 + v23 + 12) = (float)((float)v41 * v16) + v18;
      *(float *)(v21 + v23 + 8) = (float)((float)v5 * v15) + v17;
      v50 = v5 + v22[2];
      v5 = v64;
      *(float *)(v21 + v23 + 20) = (float)((float)v50 * v15) + v17;
      *(float *)(v21 + v23 + 24) = (float)((float)(v41 + v22[3]) * v16) + v18;
LABEL_40:
      ++v8;
      ++v19;
      v20 += 4;
      v56 = v8;
      v22 += 6;
      v52 = v19;
      v21 += 28;
      v57 = v20;
      if ( v19 >= *(_DWORD *)(v9 + 8) )
        goto LABEL_41;
      v5 = 0;
    }
    v59 = 1;
    v62 = 0;
    v63 = 0;
    v60 = 0;
    v61 = 0;
    v37 = sub_140182AD0(a2, v25, (unsigned int)&v59, v25);
    v38 = 0;
    v39 = 0;
    if ( v37 )
    {
      v38 = HIDWORD(v61);
      v39 = v61;
    }
    goto LABEL_29;
  }
LABEL_42:
  *(_DWORD *)(a1 + 32) = v54;
  *(_DWORD *)(a1 + 36) = v55;
  return (unsigned int)v5;
}

