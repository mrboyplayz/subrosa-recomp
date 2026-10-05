/* Address: 0x1401f9b00 | Name: sub_1401F9B00 | Size: 1662 bytes */
// local variable allocation has failed, the output may be wrong!
__m128d __fastcall sub_1401F9B00(double a1)
{
  int v1; // r9d
  _OWORD *v2; // r13
  __m128 v3; // xmm1
  __m128d v4; // xmm6
  __m128 v5; // xmm7
  __m128d v6; // xmm6
  __m128 v7; // xmm2
  __m128 v8; // xmm10
  __m128d v9; // xmm9
  __m128d v10; // xmm3
  __m128d v11; // xmm10
  __m128d v12; // xmm10
  __int64 v14; // rbx
  int v15; // esi
  __m128i v16; // xmm7
  __int64 v17; // r8
  __m128i v18; // xmm6
  __m128i v19; // xmm10
  __m128i v20; // xmm12
  __m128i v21; // xmm3
  __int64 v22; // rcx
  __m128i v23; // xmm4
  __m128i si128; // xmm13
  __m128i v25; // xmm5
  __m128i v26; // xmm3
  __m128i v27; // xmm11
  __m128i v28; // xmm10
  __m128i v29; // xmm8
  __m128i v30; // xmm11
  __m128i v31; // xmm9
  __m128i v32; // xmm14
  __m128d v33; // xmm12
  __m128i v34; // xmm15
  __m128i v35; // xmm0
  __m128i v36; // xmm10
  __m128i v37; // xmm7
  __m128i v38; // xmm14
  __m128d v39; // xmm4
  __m128 v40; // xmm6
  __m128i v41; // xmm0
  __m128d v42; // xmm13
  __m128d v43; // xmm14
  __m128i v44; // xmm5
  __m128d v45; // xmm4
  __m128d v46; // xmm3
  __m128 v47; // xmm0
  __m128d v48; // xmm7
  __m128d v49; // xmm5
  __m128d v50; // xmm0
  __m128d v51; // xmm8
  __m128d v52; // xmm15
  __m128i v53; // xmm6
  __m128d v54; // xmm3
  __m128 v55; // xmm9
  __m128 v56; // xmm4
  __int64 v57; // rdx
  unsigned int v58; // eax
  __m128d v59; // xmm3
  __m128d v60; // xmm7
  __m128d v61; // xmm10
  __m128d v62; // xmm6
  __m128d v63; // xmm11
  __m128d v64; // xmm5
  __m128d v65; // xmm1
  __m128d v66; // xmm13
  __m128d v67; // xmm4
  __m128d v68; // [rsp+20h] [rbp-178h]
  __m128d v69; // [rsp+30h] [rbp-168h]
  __int128 v70; // [rsp+40h] [rbp-158h]
  _BYTE v71[81]; // [rsp+8Fh] [rbp-109h] BYREF
  unsigned __int64 v72; // [rsp+188h] [rbp-10h]

  v1 = 0;
  v2 = (_OWORD *)((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL);
  v3 = _mm_and_ps(*(__m128 *)&a1, (__m128)xmmword_1B477EE80);
  v4 = _mm_add_pd(_mm_mul_pd((__m128d)xmmword_1B477EF00, (__m128d)v3), (__m128d)xmmword_1B477EF40);
  v5 = (__m128)_mm_slli_epi64((__m128i)v4, 0x3Fu);
  v6 = _mm_sub_pd(v4, (__m128d)xmmword_1B477EF40);
  v7 = _mm_andnot_ps((__m128)xmmword_1B477EE80, *(__m128 *)&a1);
  v8 = (__m128)_mm_sub_pd(
                 _mm_sub_pd(
                   _mm_sub_pd(
                     _mm_sub_pd((__m128d)v3, _mm_mul_pd((__m128d)xmmword_1B477F000, v6)),
                     _mm_mul_pd((__m128d)xmmword_1B477F040, v6)),
                   _mm_mul_pd((__m128d)xmmword_1B477F080, v6)),
                 _mm_mul_pd((__m128d)xmmword_1B477F0C0, v6));
  v9 = _mm_mul_pd((__m128d)v8, (__m128d)v8);
  v10 = _mm_cmpnle_pd((__m128d)v3, (__m128d)xmmword_1B477EEC0);
  v11 = (__m128d)_mm_xor_ps(v8, v5);
  v72 = (unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL;
  v12 = (__m128d)_mm_xor_ps(
                   (__m128)_mm_add_pd(
                             v11,
                             _mm_mul_pd(
                               _mm_mul_pd(
                                 v9,
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
                                                       _mm_mul_pd((__m128d)xmmword_1B477F340, v9),
                                                       (__m128d)xmmword_1B477F300),
                                                     v9),
                                                   (__m128d)xmmword_1B477F2C0),
                                                 v9),
                                               (__m128d)xmmword_1B477F280),
                                             v9),
                                           (__m128d)xmmword_1B477F240),
                                         v9),
                                       (__m128d)xmmword_1B477F200),
                                     v9),
                                   (__m128d)xmmword_1B477F1C0)),
                               v11)),
                   v7);
  if ( _mm_movemask_pd(v10) )
  {
    v16 = _mm_srli_epi64(_mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_1B476E200), (__m128i)v3), 0x34u);
    v70 = *(_OWORD *)&a1;
    v68 = v10;
    v17 = (unsigned int)(24 * _mm_cvtsi128_si32(v16));
    v69 = v12;
    v18.m128i_i64[0] = *(_QWORD *)((char *)&unk_1B476E900 + v17);
    v19.m128i_i64[0] = *(_QWORD *)((char *)&unk_1B476E900 + v17 + 8);
    v20.m128i_i64[0] = *(_QWORD *)((char *)&unk_1B476E900 + v17 + 16);
    v21 = _mm_add_epi64(
            _mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_1B476E210), (__m128i)v3),
            (__m128i)xmmword_1B476E220);
    v22 = (unsigned int)(24 * _mm_extract_epi16(v16, 4));
    v20.m128i_i64[1] = *(__int64 *)((char *)&unk_1B476E900 + v22 + 16);
    v23 = _mm_srli_epi64(v21, 0x20u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B476E230);
    v1 = _mm_movemask_pd(_mm_cmpeq_pd((__m128d)_mm_and_ps(v3, (__m128)xmmword_1B477EB80), (__m128d)xmmword_1B477EB80));
    v25 = _mm_srli_epi64(v20, 0x20u);
    v26 = _mm_and_si128(v21, si128);
    v19.m128i_i64[1] = *(__int64 *)((char *)&unk_1B476E900 + v22 + 8);
    v27 = v19;
    v28 = _mm_and_si128(v19, si128);
    v29 = _mm_mul_epu32(v26, v28);
    v30 = _mm_srli_epi64(v27, 0x20u);
    v31 = _mm_mul_epu32(v26, v30);
    v18.m128i_i64[1] = *(__int64 *)((char *)&unk_1B476E900 + v22);
    v32 = _mm_and_si128(si128, v18);
    v33 = (__m128d)_mm_add_epi64(
                     _mm_srli_epi64(_mm_mul_epu32(_mm_and_si128(v20, si128), v23), 0x20u),
                     _mm_add_epi64(
                       _mm_and_si128(si128, v29),
                       _mm_add_epi64(_mm_mul_epu32(v23, v25), _mm_srli_epi64(_mm_mul_epu32(v25, v26), 0x20u))));
    v34 = _mm_mul_epu32(v26, v32);
    v35 = _mm_add_epi64(
            _mm_srli_epi64((__m128i)v33, 0x20u),
            _mm_add_epi64(_mm_and_si128(si128, v31), _mm_add_epi64(_mm_mul_epu32(v28, v23), _mm_srli_epi64(v29, 0x20u))));
    v36 = _mm_add_epi64(
            _mm_srli_epi64(v35, 0x20u),
            _mm_add_epi64(_mm_and_si128(si128, v34), _mm_add_epi64(_mm_mul_epu32(v30, v23), _mm_srli_epi64(v31, 0x20u))));
    v37 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_add_epi64(
                _mm_srli_epi64(v36, 0x20u),
                _mm_add_epi64(
                  _mm_and_si128(_mm_mul_epu32(v26, _mm_srli_epi64(v18, 0x20u)), si128),
                  _mm_add_epi64(_mm_mul_epu32(v23, v32), _mm_srli_epi64(v34, 0x20u)))),
              0x20u),
            _mm_and_si128(v36, si128));
    v38 = _mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_1B476E240), (__m128i)v3);
    v39 = (__m128d)_mm_or_si128(
                     _mm_srli_epi64(v37, 0xCu),
                     _mm_xor_si128(_mm_load_si128((const __m128i *)&xmmword_1B476E250), v38));
    v40 = (__m128)_mm_add_pd((__m128d)xmmword_1B476E260, v39);
    v41 = _mm_add_epi64(_mm_slli_epi64(v35, 0x20u), _mm_and_si128((__m128i)v33, si128));
    v42 = (__m128d)_mm_xor_si128(_mm_load_si128((const __m128i *)&xmmword_1B476E280), v38);
    v43 = (__m128d)_mm_xor_si128(v38, (__m128i)xmmword_1B476E2A0);
    v44 = _mm_slli_epi64(_mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_1B476E290), v41), 0x1Cu);
    v45 = _mm_sub_pd(v39, _mm_sub_pd((__m128d)v40, (__m128d)xmmword_1B476E260));
    v46 = _mm_sub_pd(
            (__m128d)_mm_or_si128(
                       _mm_or_si128(
                         _mm_slli_epi64(_mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_1B476E2B0), v37), 0x28u),
                         _mm_srli_epi64(v41, 0x18u)),
                       (__m128i)v43),
            v43);
    v47 = (__m128)_mm_add_pd(v45, v46);
    v48 = (__m128d)_mm_and_ps((__m128)xmmword_1B476E2F0, v47);
    v49 = _mm_add_pd(
            _mm_sub_pd((__m128d)_mm_or_si128(v44, (__m128i)v42), v42),
            _mm_add_pd(v46, _mm_sub_pd(v45, (__m128d)v47)));
    v50 = _mm_sub_pd((__m128d)v47, v48);
    v51 = _mm_mul_pd((__m128d)xmmword_1B476E2D0, v48);
    v52 = _mm_add_pd(
            _mm_add_pd(_mm_mul_pd((__m128d)xmmword_1B476E2D0, v50), _mm_mul_pd(v48, (__m128d)xmmword_1B476E2E0)),
            _mm_add_pd(_mm_mul_pd(v49, (__m128d)xmmword_1B476E2C0), _mm_mul_pd((__m128d)xmmword_1B476E2E0, v50)));
    v53 = (__m128i)_mm_and_ps(v40, (__m128)xmmword_1B476E270);
    v54 = (__m128d)_mm_and_ps((__m128)xmmword_1B476E300, v3);
    v55 = (__m128)_mm_add_pd(v52, v51);
    v56 = (__m128)_mm_cmplt_pd((__m128d)xmmword_1B476E310, v54);
    v57 = (unsigned int)(32 * _mm_cvtsi128_si32(v53));
    v49.m128d_f64[0] = *(double *)((char *)&unk_1B477AB00 + v57);
    v58 = 32 * _mm_extract_epi16(v53, 4);
    v59 = (__m128d)_mm_or_ps(
                     _mm_and_ps((__m128)_mm_cmple_pd(v54, (__m128d)xmmword_1B476E310), v3),
                     _mm_and_ps(v55, v56));
    v33.m128d_f64[0] = *(double *)((char *)&unk_1B477AB00 + v57 + 8);
    v33.m128d_f64[1] = *(double *)((char *)&unk_1B477AB00 + v58 + 8);
    v60 = _mm_mul_pd(v59, v33);
    v50.m128d_f64[0] = *(double *)((char *)&unk_1B477AB00 + v57 + 16);
    v50.m128d_f64[1] = *(double *)((char *)&unk_1B477AB00 + v58 + 16);
    v61 = _mm_add_pd(v50, v60);
    v62 = _mm_mul_pd(v59, v59);
    v49.m128d_f64[1] = *(double *)((char *)&unk_1B477AB00 + v58);
    v63 = _mm_mul_pd(v59, v49);
    v64 = _mm_add_pd(v49, v33);
    v65 = _mm_add_pd(v61, v63);
    v66 = _mm_mul_pd(
            _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_1B477ED80, v62), (__m128d)xmmword_1B477ED40), v62),
            v59);
    v67 = _mm_mul_pd(
            (__m128d)_mm_and_ps(v56, (__m128)_mm_add_pd(v52, _mm_sub_pd(v51, (__m128d)v55))),
            _mm_sub_pd(v64, _mm_mul_pd(v59, v50)));
    v59.m128d_f64[0] = *(double *)((char *)&unk_1B477AB00 + v57 + 24);
    v59.m128d_f64[1] = *(double *)((char *)&unk_1B477AB00 + v58 + 24);
    v12 = _mm_blendv_pd(
            v69,
            (__m128d)_mm_xor_ps(
                       (__m128)_mm_add_pd(
                                 v65,
                                 _mm_add_pd(
                                   _mm_add_pd(
                                     _mm_add_pd(
                                       _mm_add_pd(
                                         _mm_add_pd(v60, _mm_sub_pd(v50, v61)),
                                         _mm_add_pd(v63, _mm_sub_pd(v61, v65))),
                                       _mm_mul_pd(v66, v64)),
                                     _mm_mul_pd(
                                       _mm_mul_pd(
                                         v62,
                                         _mm_add_pd(
                                           _mm_mul_pd(
                                             _mm_add_pd(
                                               _mm_mul_pd((__m128d)xmmword_1B477EE40, v62),
                                               (__m128d)xmmword_1B477EE00),
                                             v62),
                                           (__m128d)xmmword_1B477EDC0)),
                                       v50)),
                                   _mm_add_pd(v59, v67))),
                       v7),
            v68);
    *(_OWORD *)&a1 = v70;
  }
  if ( v1 )
  {
    *v2 = *(_OWORD *)&a1;
    *(__m128d *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v12;
    v14 = 0;
    v15 = v1;
    do
    {
      if ( _bittest(&v15, v14) )
        sub_1401FC440((char *)v2 + 8 * v14, (char *)v2 + 8 * v14 + 64);
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (int)v14 < 2 );
    return *(__m128d *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return v12;
}

