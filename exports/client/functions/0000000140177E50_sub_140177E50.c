/* Address: 0x140177e50 | Name: sub_140177E50 | Size: 1398 bytes */
__int64 __fastcall sub_140177E50(
        __int64 a1,
        unsigned int a2,
        float a3,
        __int64 a4,
        signed int a5,
        signed int a6,
        int a7,
        int a8,
        __int64 a9)
{
  unsigned int v9; // r12d
  unsigned int v12; // ebx
  int v13; // r15d
  int v14; // r14d
  int v15; // edx
  float v16; // xmm6_4
  signed int v17; // eax
  __int64 v18; // r9
  signed int v19; // r13d
  __int64 v20; // r10
  __int16 v21; // r8
  int v22; // eax
  int v23; // r10d
  int v24; // esi
  int v25; // r11d
  int v26; // ecx
  int v27; // eax
  int v28; // edi
  int v29; // ebx
  int v30; // esi
  __m128 v31; // xmm0
  __m128d v32; // xmm1
  int v33; // ecx
  __m128 v34; // xmm0
  __m128d v35; // xmm1
  int v36; // ecx
  __m128 v37; // xmm0
  __m128d v38; // xmm1
  int v39; // ecx
  __m128 v40; // xmm0
  __m128d v41; // xmm1
  int v42; // ecx
  unsigned int v43; // ebx
  int v44; // edi
  signed int v45; // ecx
  int v46; // eax
  signed int v47; // r15d
  __int16 v48; // ax
  __int64 v49; // rdi
  __m128i v50; // xmm0
  int v51; // [rsp+20h] [rbp-E0h]
  int v52; // [rsp+28h] [rbp-D8h]
  int v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+38h] [rbp-C8h]
  int v55; // [rsp+40h] [rbp-C0h]
  int v56; // [rsp+48h] [rbp-B8h]
  int v57; // [rsp+50h] [rbp-B0h]
  int v58; // [rsp+54h] [rbp-ACh]
  int v59; // [rsp+58h] [rbp-A8h]
  int v60; // [rsp+5Ch] [rbp-A4h]
  unsigned int v61; // [rsp+60h] [rbp-A0h]
  __int64 v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+78h] [rbp-88h] BYREF
  __int128 v65; // [rsp+80h] [rbp-80h]
  __int128 v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+A0h] [rbp-60h]
  int v68; // [rsp+A8h] [rbp-58h]
  __int64 v69; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-48h]
  int v71; // [rsp+D4h] [rbp-2Ch]
  int v72; // [rsp+D8h] [rbp-28h]
  int v73; // [rsp+FCh] [rbp-4h]
  int v74; // [rsp+1B8h] [rbp+B8h]

  v74 = a4;
  v9 = 0;
  v69 = 0;
  if ( !(unsigned int)sub_14017B740(&v69, a1, a2) )
    return 0xFFFFFFFFLL;
  MEMORY[0x1401FCD30](a4, 0, a6 * a5);
  v12 = 1;
  v13 = 1;
  v14 = 1;
  v58 = 1;
  v15 = 0;
  v59 = 0;
  v16 = a3
      / (float)((__int16)(*(unsigned __int8 *)(v71 + v70 + 5) + (*(unsigned __int8 *)(v71 + v70 + 4) << 8))
              - (__int16)(*(unsigned __int8 *)(v71 + v70 + 7) + (*(unsigned __int8 *)(v71 + v70 + 6) << 8)));
  if ( a8 > 0 )
  {
    v62 = 0;
    v63 = a9 + 4;
    do
    {
      v17 = sub_140178410(&v69, (unsigned int)(a7 + v15));
      v19 = v17;
      v20 = *(unsigned __int8 *)(v71 + v70 + 35);
      if ( v17 >= (int)(v20 + (*(unsigned __int8 *)(v71 + v70 + 34) << 8)) )
      {
        v18 = v20 + ((unsigned __int64)*(unsigned __int8 *)(v71 + v70 + 34) << 8);
        v21 = (*(unsigned __int8 *)(v72 + v70 + 4 * v18 - 4) << 8) + *(unsigned __int8 *)(v72 + v70 + 4 * v18 - 3);
      }
      else
      {
        v21 = *(unsigned __int8 *)(v72 + v70 + 4 * v17 + 1) + (*(unsigned __int8 *)(v72 + v70 + 4 * v17) << 8);
      }
      v60 = v21;
      if ( v73 )
      {
        v67 = 0;
        v68 = 0;
        v65 = 0;
        v66 = 0;
        v22 = sub_140182AD0(
                (unsigned int)&v69,
                v17,
                (unsigned int)&v64,
                v18,
                v51,
                v52,
                v53,
                v54,
                v55,
                v56,
                v57,
                v59,
                v61,
                v62,
                v63,
                1,
                0);
        v23 = 0;
        v24 = 0;
        v25 = 0;
        if ( v22 )
          v23 = HIDWORD(v66);
        v26 = 0;
        if ( v22 )
        {
          v24 = v66;
          v25 = DWORD1(v66);
          v26 = DWORD2(v66);
        }
      }
      else
      {
        v27 = sub_14017DA60(&v69, (unsigned int)v17);
        if ( v27 < 0 )
        {
          v28 = 0;
          v29 = 0;
          v30 = 0;
          goto LABEL_30;
        }
        v23 = (__int16)(*(unsigned __int8 *)(v27 + v70 + 9) + (*(unsigned __int8 *)(v27 + v70 + 8) << 8));
        v24 = (__int16)(*(unsigned __int8 *)(v27 + v70 + 3) + (*(unsigned __int8 *)(v27 + v70 + 2) << 8));
        v25 = (__int16)(*(unsigned __int8 *)(v27 + v70 + 7) + (*(unsigned __int8 *)(v27 + v70 + 6) << 8));
        v26 = (__int16)(*(unsigned __int8 *)(v27 + v70 + 5) + (*(unsigned __int8 *)(v27 + v70 + 4) << 8));
      }
      v31 = (__m128)COERCE_UNSIGNED_INT((float)-v26);
      v31.m128_f32[0] = v31.m128_f32[0] * v16;
      v32 = _mm_cvtps_pd(v31);
      v33 = (int)v32.m128d_f64[0];
      if ( (double)v33 != v32.m128d_f64[0] )
        v32.m128d_f64[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v32, v32)) & 1) + v33);
      v34 = (__m128)COERCE_UNSIGNED_INT((float)v25);
      v28 = (int)v32.m128d_f64[0];
      v34.m128_f32[0] = v34.m128_f32[0] * v16;
      v35 = _mm_cvtps_pd(v34);
      v36 = (int)v35.m128d_f64[0];
      if ( (double)v36 != v35.m128d_f64[0] )
        v35.m128d_f64[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v35, v35)) & 1) + v36);
      v37 = (__m128)COERCE_UNSIGNED_INT((float)v24);
      v29 = (int)v35.m128d_f64[0];
      v37.m128_f32[0] = v37.m128_f32[0] * v16;
      v38 = _mm_cvtps_pd(v37);
      v39 = (int)v38.m128d_f64[0];
      if ( (double)v39 != v38.m128d_f64[0] )
        v38.m128d_f64[0] = (double)(v39 - (_mm_movemask_pd(_mm_unpacklo_pd(v38, v38)) & 1));
      v9 = (int)v38.m128d_f64[0];
      v40 = (__m128)COERCE_UNSIGNED_INT((float)-v23);
      v40.m128_f32[0] = v40.m128_f32[0] * v16;
      v41 = _mm_cvtps_pd(v40);
      v42 = (int)v41.m128d_f64[0];
      if ( (double)v42 != v41.m128d_f64[0] )
        v41.m128d_f64[0] = (double)(v42 - (_mm_movemask_pd(_mm_unpacklo_pd(v41, v41)) & 1));
      v30 = (int)v41.m128d_f64[0];
LABEL_30:
      v43 = v29 - v9;
      v44 = v28 - v30;
      v45 = v43 + v14 + 1;
      if ( v45 >= a5 )
        v14 = 1;
      v46 = v58;
      if ( v45 < a5 )
        v46 = v13;
      v57 = v46;
      v47 = v44 + v46 + 1;
      if ( v47 >= a6 )
        return (unsigned int)-v59;
      v61 = v43 + v14;
      if ( (int)(v43 + v14) >= a5 )
        sub_14023E640(L"x+gw < pw", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 3655);
      if ( v44 + v57 >= a6 )
        sub_14023E640(L"y+gh < ph", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 3656);
      sub_14017C040((unsigned int)&v69, a5 * v57 + v74 + v14, v43, v44, a5, LODWORD(v16), LODWORD(v16), 0, 0, v19);
      *(_WORD *)(v63 - 4) = v14;
      *(_WORD *)(v63 - 2) = v57;
      v48 = v44 + v57;
      v49 = v62;
      *(_WORD *)v63 = v43 + v14;
      v14 = v61 + 1;
      *(_WORD *)(v63 + 2) = v48;
      if ( v47 <= v58 )
        v47 = v58;
      v15 = v59 + 1;
      v12 = v47;
      v13 = v57;
      ++v62;
      v58 = v12;
      ++v59;
      *(float *)(v63 + 12) = (float)v60 * v16;
      v50 = _mm_cvtsi32_si128(v9);
      v9 = 0;
      *(float *)(v63 + 8) = (float)v30;
      *(_DWORD *)(v63 + 4) = _mm_cvtepi32_ps(v50).m128_u32[0];
      v63 += 20;
    }
    while ( v49 + 1 < a8 );
  }
  return v12;
}

