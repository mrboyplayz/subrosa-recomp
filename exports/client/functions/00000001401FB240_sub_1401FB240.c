/* Address: 0x1401fb240 | Name: sub_1401FB240 | Size: 1701 bytes */
// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_1401FB240(double a1)
{
  __m128 v1; // xmm2
  int v2; // r9d
  _OWORD *v3; // r13
  __m128d v4; // xmm7
  __m128 v5; // xmm5
  __m128 v6; // xmm4
  __m128 v7; // xmm3
  __m128d v8; // xmm1
  __m128d v9; // xmm6
  __m128d v10; // xmm10
  __m128d v11; // xmm15
  __m128d v12; // xmm13
  __m128d v13; // xmm15
  __m128 result; // xmm0
  __int64 v15; // rbx
  int v16; // esi
  __m128i v17; // xmm0
  __int64 v18; // r8
  __m128i v19; // xmm8
  __m128i v20; // xmm12
  __m128i v21; // xmm14
  __m128i v22; // xmm6
  __m128i v23; // xmm15
  __m128i v24; // xmm4
  __int64 v25; // rcx
  __m128i v26; // xmm6
  __m128i v27; // xmm9
  __m128i v28; // xmm13
  __m128i v29; // xmm12
  __m128i v30; // xmm10
  __m128d v31; // xmm13
  __m128i v32; // xmm11
  __m128i v33; // xmm3
  __m128i v34; // xmm14
  __m128i v35; // xmm5
  __m128i v36; // xmm0
  __m128i v37; // xmm9
  __m128i v38; // xmm9
  __m128i v39; // xmm0
  __m128i v40; // xmm5
  __m128d v41; // xmm4
  __m128i v42; // xmm7
  __m128 v43; // xmm8
  __m128d v44; // xmm3
  __m128d v45; // xmm5
  __m128d v46; // xmm4
  __m128d v47; // xmm6
  __m128 v48; // xmm0
  __m128d v49; // xmm9
  __m128d v50; // xmm7
  __m128d v51; // xmm0
  __m128d v52; // xmm10
  __m128d v53; // xmm15
  __m128i v54; // xmm8
  __m128d v55; // xmm6
  __m128 v56; // xmm7
  __m128 v57; // xmm5
  __int64 v58; // rdx
  __m128 v59; // xmm15
  unsigned int v60; // eax
  __m128d v61; // xmm6
  __m128d v62; // xmm7
  __m128d v63; // xmm12
  __m128d v64; // xmm4
  __m128d v65; // xmm11
  __m128d v66; // xmm3
  __m128d v67; // xmm7
  __m128d v68; // xmm12
  __m128d v69; // xmm8
  __m128d v70; // xmm5
  __m128 v71; // [rsp+20h] [rbp-158h]
  _BYTE v72[81]; // [rsp+6Fh] [rbp-109h] BYREF
  unsigned __int64 v73; // [rsp+168h] [rbp-10h]

  v1 = *(__m128 *)&a1;
  v2 = 0;
  v3 = (_OWORD *)((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (__m128d)_mm_and_ps((__m128)xmmword_1B4791C80, *(__m128 *)&a1);
  v5 = (__m128)_mm_sub_pd((__m128d)xmmword_1B4791D00, v4);
  v6 = _mm_and_ps((__m128)xmmword_1B4791C80, v5);
  v7 = (__m128)_mm_cmpeq_pd((__m128d)xmmword_1B4791D00, (__m128d)v5);
  v8 = _mm_cmpnle_pd((__m128d)v6, (__m128d)xmmword_1B4791CC0);
  v9 = _mm_add_pd(_mm_mul_pd((__m128d)xmmword_1B4791D40, (__m128d)v5), (__m128d)xmmword_1B4791D80);
  v10 = _mm_sub_pd((__m128d)xmmword_1B4791DC0, _mm_sub_pd(v9, (__m128d)xmmword_1B4791D80));
  v11 = _mm_add_pd(
          _mm_add_pd(
            _mm_add_pd(
              _mm_sub_pd(_mm_mul_pd((__m128d)xmmword_1B4791E00, v10), v4),
              _mm_mul_pd((__m128d)xmmword_1B4791E40, v10)),
            _mm_mul_pd((__m128d)xmmword_1B4791E80, v10)),
          _mm_mul_pd((__m128d)xmmword_1B4791EC0, v10));
  v12 = _mm_mul_pd(v11, v11);
  v13 = (__m128d)_mm_xor_si128((__m128i)v11, _mm_slli_epi64((__m128i)v9, 0x3Fu));
  v73 = (unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL;
  result = _mm_or_ps(
             _mm_andnot_ps(
               v7,
               (__m128)_mm_add_pd(
                         v13,
                         _mm_mul_pd(
                           _mm_add_pd(
                             _mm_mul_pd(
                               _mm_add_pd(
                                 _mm_mul_pd(
                                   _mm_add_pd(
                                     _mm_mul_pd(
                                       _mm_add_pd(
                                         _mm_mul_pd(
                                           _mm_add_pd(
                                             _mm_mul_pd(
                                               _mm_add_pd(
                                                 _mm_mul_pd((__m128d)xmmword_1B4792180, v12),
                                                 (__m128d)xmmword_1B4792140),
                                               v12),
                                             (__m128d)xmmword_1B4792100),
                                           v12),
                                         (__m128d)xmmword_1B47920C0),
                                       v12),
                                     (__m128d)xmmword_1B4792080),
                                   v12),
                                 (__m128d)xmmword_1B4792040),
                               v12),
                             (__m128d)xmmword_1B4791FC0),
                           _mm_mul_pd(v12, v13)))),
             _mm_and_ps((__m128)xmmword_1B47921C0, v7));
  if ( _mm_movemask_pd(v8) )
  {
    v71 = result;
    v17 = _mm_srli_epi64(_mm_and_si128(_mm_loadu_si128((const __m128i *)&xmmword_1B476E500), (__m128i)v1), 0x34u);
    v18 = (unsigned int)(24 * _mm_cvtsi128_si32(v17));
    v19.m128i_i64[0] = *(_QWORD *)((char *)&unk_1B4781700 + v18);
    v20.m128i_i64[0] = *(_QWORD *)((char *)&unk_1B4781700 + v18 + 8);
    v21.m128i_i64[0] = *(_QWORD *)((char *)&unk_1B4781700 + v18 + 16);
    v22 = _mm_add_epi64(
            _mm_and_si128(_mm_loadu_si128((const __m128i *)&xmmword_1B476E510), (__m128i)v1),
            (__m128i)xmmword_1B476E520);
    v2 = _mm_movemask_pd(_mm_cmpeq_pd((__m128d)_mm_and_ps(v6, (__m128)xmmword_1B4791980), (__m128d)xmmword_1B4791980));
    v23 = _mm_loadu_si128((const __m128i *)&xmmword_1B476E530);
    v24 = _mm_srli_epi64(v22, 0x20u);
    v25 = (unsigned int)(24 * _mm_extract_epi16(v17, 4));
    v26 = _mm_and_si128(v22, v23);
    v21.m128i_i64[1] = *(__int64 *)((char *)&unk_1B4781700 + v25 + 16);
    v27 = _mm_srli_epi64(v21, 0x20u);
    v20.m128i_i64[1] = *(__int64 *)((char *)&unk_1B4781700 + v25 + 8);
    v28 = v20;
    v29 = _mm_and_si128(v20, v23);
    v30 = _mm_mul_epu32(v26, v29);
    v31 = (__m128d)_mm_srli_epi64(v28, 0x20u);
    v32 = _mm_mul_epu32(v26, (__m128i)v31);
    v19.m128i_i64[1] = *(__int64 *)((char *)&unk_1B4781700 + v25);
    v33 = _mm_and_si128(v23, v19);
    v34 = _mm_add_epi64(
            _mm_srli_epi64(_mm_mul_epu32(_mm_and_si128(v21, v23), v24), 0x20u),
            _mm_add_epi64(
              _mm_and_si128(v23, v30),
              _mm_add_epi64(_mm_mul_epu32(v24, v27), _mm_srli_epi64(_mm_mul_epu32(v27, v26), 0x20u))));
    v35 = _mm_mul_epu32(v26, v33);
    v36 = _mm_add_epi64(
            _mm_srli_epi64(v34, 0x20u),
            _mm_add_epi64(_mm_and_si128(v23, v32), _mm_add_epi64(_mm_mul_epu32(v29, v24), _mm_srli_epi64(v30, 0x20u))));
    v37 = _mm_add_epi64(
            _mm_srli_epi64(v36, 0x20u),
            _mm_add_epi64(
              _mm_and_si128(v23, v35),
              _mm_add_epi64(_mm_mul_epu32((__m128i)v31, v24), _mm_srli_epi64(v32, 0x20u))));
    v38 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_add_epi64(
                _mm_srli_epi64(v37, 0x20u),
                _mm_add_epi64(
                  _mm_and_si128(_mm_mul_epu32(v26, _mm_srli_epi64(v19, 0x20u)), v23),
                  _mm_add_epi64(_mm_mul_epu32(v24, v33), _mm_srli_epi64(v35, 0x20u)))),
              0x20u),
            _mm_and_si128(v37, v23));
    v39 = _mm_add_epi64(_mm_slli_epi64(v36, 0x20u), _mm_and_si128(v34, v23));
    v40 = _mm_and_si128(_mm_loadu_si128((const __m128i *)&xmmword_1B476E540), (__m128i)v1);
    v41 = (__m128d)_mm_or_si128(
                     _mm_srli_epi64(v38, 0xCu),
                     _mm_xor_si128(_mm_loadu_si128((const __m128i *)&xmmword_1B476E550), v40));
    v42 = _mm_and_si128(_mm_loadu_si128((const __m128i *)&xmmword_1B476E590), v39);
    v43 = (__m128)_mm_add_pd((__m128d)xmmword_1B476E560, v41);
    v44 = (__m128d)_mm_xor_si128(_mm_loadu_si128((const __m128i *)&xmmword_1B476E580), v40);
    v45 = (__m128d)_mm_xor_si128(v40, (__m128i)xmmword_1B476E5A0);
    v46 = _mm_sub_pd(v41, _mm_sub_pd((__m128d)v43, (__m128d)xmmword_1B476E560));
    v47 = _mm_sub_pd(
            (__m128d)_mm_or_si128(
                       _mm_or_si128(
                         _mm_slli_epi64(_mm_and_si128(_mm_loadu_si128((const __m128i *)&xmmword_1B476E5B0), v38), 0x28u),
                         _mm_srli_epi64(v39, 0x18u)),
                       (__m128i)v45),
            v45);
    v48 = (__m128)_mm_add_pd(v46, v47);
    v49 = (__m128d)_mm_and_ps((__m128)xmmword_1B476E5F0, v48);
    v50 = _mm_add_pd(
            _mm_sub_pd((__m128d)_mm_or_si128(_mm_slli_epi64(v42, 0x1Cu), (__m128i)v44), v44),
            _mm_add_pd(v47, _mm_sub_pd(v46, (__m128d)v48)));
    v51 = _mm_sub_pd((__m128d)v48, v49);
    v52 = _mm_mul_pd((__m128d)xmmword_1B476E5D0, v49);
    v53 = _mm_add_pd(
            _mm_add_pd(_mm_mul_pd((__m128d)xmmword_1B476E5D0, v51), _mm_mul_pd(v49, (__m128d)xmmword_1B476E5E0)),
            _mm_add_pd(_mm_mul_pd(v50, (__m128d)xmmword_1B476E5C0), _mm_mul_pd((__m128d)xmmword_1B476E5E0, v51)));
    v54 = (__m128i)_mm_and_ps(v43, (__m128)xmmword_1B476E570);
    v55 = (__m128d)_mm_and_ps((__m128)xmmword_1B476E600, v1);
    v56 = (__m128)_mm_add_pd(v53, v52);
    v57 = (__m128)_mm_cmplt_pd((__m128d)xmmword_1B476E610, v55);
    v58 = (unsigned int)(32 * _mm_cvtsi128_si32(v54));
    v46.m128d_f64[0] = *(double *)((char *)&unk_1B478D900 + v58);
    v59 = (__m128)_mm_add_pd(v53, _mm_sub_pd(v52, (__m128d)v56));
    v60 = 32 * _mm_extract_epi16(v54, 4);
    v61 = (__m128d)_mm_or_ps(
                     _mm_and_ps((__m128)_mm_cmple_pd(v55, (__m128d)xmmword_1B476E610), v1),
                     _mm_and_ps(v56, v57));
    v31.m128d_f64[0] = *(double *)((char *)&unk_1B478D900 + v58 + 8);
    v31.m128d_f64[1] = *(double *)((char *)&unk_1B478D900 + v60 + 8);
    v62 = _mm_mul_pd(v61, v31);
    v51.m128d_f64[0] = *(double *)((char *)&unk_1B478D900 + v58 + 16);
    v46.m128d_f64[1] = *(double *)((char *)&unk_1B478D900 + v60);
    v51.m128d_f64[1] = *(double *)((char *)&unk_1B478D900 + v60 + 16);
    v63 = _mm_mul_pd(v61, v46);
    v64 = _mm_add_pd(v46, v31);
    v65 = _mm_add_pd(v51, v62);
    v66 = _mm_add_pd(v65, v63);
    v67 = _mm_add_pd(_mm_add_pd(v62, _mm_sub_pd(v51, v65)), _mm_add_pd(v63, _mm_sub_pd(v65, v66)));
    v68 = _mm_mul_pd(v61, v61);
    v69 = _mm_mul_pd(
            _mm_mul_pd(
              _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_1B4791B80, v68), (__m128d)xmmword_1B4791B40), v68),
              v61),
            v64);
    v70 = _mm_mul_pd((__m128d)_mm_and_ps(v57, v59), _mm_sub_pd(v64, _mm_mul_pd(v61, v51)));
    v61.m128d_f64[0] = *(double *)((char *)&unk_1B478D900 + v58 + 24);
    v61.m128d_f64[1] = *(double *)((char *)&unk_1B478D900 + v60 + 24);
    result = _mm_or_ps(
               _mm_andnot_ps((__m128)v8, v71),
               _mm_and_ps(
                 (__m128)_mm_add_pd(
                           v66,
                           _mm_add_pd(
                             _mm_add_pd(
                               _mm_add_pd(v67, v69),
                               _mm_mul_pd(
                                 _mm_mul_pd(
                                   v68,
                                   _mm_add_pd(
                                     _mm_mul_pd(
                                       _mm_add_pd(
                                         _mm_mul_pd((__m128d)xmmword_1B4791C40, v68),
                                         (__m128d)xmmword_1B4791C00),
                                       v68),
                                     (__m128d)xmmword_1B4791BC0)),
                                 v51)),
                             _mm_add_pd(v61, v70))),
                 (__m128)v8));
  }
  if ( v2 )
  {
    *v3 = v1;
    *(__m128 *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = result;
    v15 = 0;
    v16 = v2;
    do
    {
      if ( _bittest(&v16, v15) )
        sub_1401FC520((char *)v3 + 8 * v15, (char *)v3 + 8 * v15 + 64);
      v15 = (unsigned int)(v15 + 1);
    }
    while ( (int)v15 < 2 );
    return *(__m128 *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return result;
}

