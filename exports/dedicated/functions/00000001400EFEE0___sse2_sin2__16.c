/* Address: 0x1400efee0 | Name: __sse2_sin2@@16 | Size: 1659 bytes */
// local variable allocation has failed, the output may be wrong!
__m128 __fastcall _sse2_sin2(double a1)
{
  int v1; // r9d
  __int128 v2; // xmm10
  _OWORD *v3; // r13
  __m128i v4; // xmm2
  __m128 v5; // xmm1
  __m128d v6; // xmm6
  __m128i v7; // xmm7
  __m128d v8; // xmm6
  __m128d v9; // xmm0
  __m128d v10; // xmm9
  __m128d v11; // xmm3
  __m128d v12; // xmm0
  __m128 result; // xmm0
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
  __m128i v24; // xmm13
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
  __m128d v66; // xmm7
  __m128d v67; // xmm4
  __m128 v68; // [rsp+20h] [rbp-178h]
  __m128 v69; // [rsp+30h] [rbp-168h]
  __int128 v70; // [rsp+40h] [rbp-158h]
  _BYTE v71[81]; // [rsp+8Fh] [rbp-109h] BYREF
  unsigned __int64 v72; // [rsp+188h] [rbp-10h]

  v1 = 0;
  v2 = *(_OWORD *)&a1;
  v3 = (_OWORD *)((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (__m128i)_mm_andnot_ps((__m128)xmmword_19AAEFA80, *(__m128 *)&a1);
  v5 = _mm_and_ps((__m128)xmmword_19AAEFA80, *(__m128 *)&a1);
  v6 = _mm_add_pd(_mm_mul_pd((__m128d)xmmword_19AAEFB00, (__m128d)v5), (__m128d)xmmword_19AAEFB40);
  v7 = _mm_slli_epi64((__m128i)v6, 0x3Fu);
  v8 = _mm_sub_pd(v6, (__m128d)xmmword_19AAEFB40);
  v9 = _mm_sub_pd(
         _mm_sub_pd(
           _mm_sub_pd(
             _mm_sub_pd((__m128d)v5, _mm_mul_pd((__m128d)xmmword_19AAEFC00, v8)),
             _mm_mul_pd((__m128d)xmmword_19AAEFC40, v8)),
           _mm_mul_pd((__m128d)xmmword_19AAEFC80, v8)),
         _mm_mul_pd((__m128d)xmmword_19AAEFCC0, v8));
  v10 = _mm_mul_pd(v9, v9);
  v11 = _mm_cmpnle_pd((__m128d)v5, (__m128d)xmmword_19AAEFAC0);
  v12 = (__m128d)_mm_xor_si128((__m128i)v9, v7);
  v72 = (unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL;
  result = (__m128)_mm_xor_si128(
                     (__m128i)_mm_add_pd(
                                v12,
                                _mm_mul_pd(
                                  _mm_mul_pd(
                                    v10,
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
                                                          _mm_mul_pd((__m128d)xmmword_19AAEFF40, v10),
                                                          (__m128d)xmmword_19AAEFF00),
                                                        v10),
                                                      (__m128d)xmmword_19AAEFEC0),
                                                    v10),
                                                  (__m128d)xmmword_19AAEFE80),
                                                v10),
                                              (__m128d)xmmword_19AAEFE40),
                                            v10),
                                          (__m128d)xmmword_19AAEFE00),
                                        v10),
                                      (__m128d)xmmword_19AAEFDC0)),
                                  v12)),
                     v4);
  if ( _mm_movemask_pd(v11) )
  {
    v16 = _mm_srli_epi64(_mm_and_si128(_mm_loadu_si128((const __m128i *)&xmmword_19AADF000), (__m128i)v5), 0x34u);
    v69 = result;
    v68 = (__m128)v11;
    v17 = (unsigned int)(24 * _mm_cvtsi128_si32(v16));
    v70 = v2;
    v18.m128i_i64[0] = *(_QWORD *)((char *)&unk_19AADF500 + v17);
    v19.m128i_i64[0] = *(_QWORD *)((char *)&unk_19AADF500 + v17 + 8);
    v20.m128i_i64[0] = *(_QWORD *)((char *)&unk_19AADF500 + v17 + 16);
    v21 = _mm_add_epi64(
            _mm_and_si128(_mm_loadu_si128((const __m128i *)&xmmword_19AADF010), (__m128i)v5),
            (__m128i)xmmword_19AADF020);
    v22 = (unsigned int)(24 * _mm_extract_epi16(v16, 4));
    v20.m128i_i64[1] = *(__int64 *)((char *)&unk_19AADF500 + v22 + 16);
    v23 = _mm_srli_epi64(v21, 0x20u);
    v24 = _mm_loadu_si128((const __m128i *)&xmmword_19AADF030);
    v1 = _mm_movemask_pd(_mm_cmpeq_pd((__m128d)_mm_and_ps((__m128)xmmword_19AAEF780, v5), (__m128d)xmmword_19AAEF780));
    v25 = _mm_srli_epi64(v20, 0x20u);
    v26 = _mm_and_si128(v21, v24);
    v19.m128i_i64[1] = *(__int64 *)((char *)&unk_19AADF500 + v22 + 8);
    v27 = v19;
    v28 = _mm_and_si128(v19, v24);
    v29 = _mm_mul_epu32(v26, v28);
    v30 = _mm_srli_epi64(v27, 0x20u);
    v31 = _mm_mul_epu32(v26, v30);
    v18.m128i_i64[1] = *(__int64 *)((char *)&unk_19AADF500 + v22);
    v32 = _mm_and_si128(v24, v18);
    v33 = (__m128d)_mm_add_epi64(
                     _mm_srli_epi64(_mm_mul_epu32(_mm_and_si128(v20, v24), v23), 0x20u),
                     _mm_add_epi64(
                       _mm_and_si128(v24, v29),
                       _mm_add_epi64(_mm_mul_epu32(v23, v25), _mm_srli_epi64(_mm_mul_epu32(v25, v26), 0x20u))));
    v34 = _mm_mul_epu32(v26, v32);
    v35 = _mm_add_epi64(
            _mm_srli_epi64((__m128i)v33, 0x20u),
            _mm_add_epi64(_mm_and_si128(v24, v31), _mm_add_epi64(_mm_mul_epu32(v28, v23), _mm_srli_epi64(v29, 0x20u))));
    v36 = _mm_add_epi64(
            _mm_srli_epi64(v35, 0x20u),
            _mm_add_epi64(_mm_and_si128(v24, v34), _mm_add_epi64(_mm_mul_epu32(v30, v23), _mm_srli_epi64(v31, 0x20u))));
    v37 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_add_epi64(
                _mm_srli_epi64(v36, 0x20u),
                _mm_add_epi64(
                  _mm_and_si128(_mm_mul_epu32(v26, _mm_srli_epi64(v18, 0x20u)), v24),
                  _mm_add_epi64(_mm_mul_epu32(v23, v32), _mm_srli_epi64(v34, 0x20u)))),
              0x20u),
            _mm_and_si128(v36, v24));
    v38 = _mm_and_si128(_mm_loadu_si128((const __m128i *)&xmmword_19AADF040), (__m128i)v5);
    v39 = (__m128d)_mm_or_si128(
                     _mm_srli_epi64(v37, 0xCu),
                     _mm_xor_si128(_mm_loadu_si128((const __m128i *)&xmmword_19AADF050), v38));
    v40 = (__m128)_mm_add_pd((__m128d)xmmword_19AADF060, v39);
    v41 = _mm_add_epi64(_mm_slli_epi64(v35, 0x20u), _mm_and_si128((__m128i)v33, v24));
    v42 = (__m128d)_mm_xor_si128(_mm_loadu_si128((const __m128i *)&xmmword_19AADF080), v38);
    v43 = (__m128d)_mm_xor_si128(v38, (__m128i)xmmword_19AADF0A0);
    v44 = _mm_slli_epi64(_mm_and_si128(_mm_loadu_si128((const __m128i *)&xmmword_19AADF090), v41), 0x1Cu);
    v45 = _mm_sub_pd(v39, _mm_sub_pd((__m128d)v40, (__m128d)xmmword_19AADF060));
    v46 = _mm_sub_pd(
            (__m128d)_mm_or_si128(
                       _mm_or_si128(
                         _mm_slli_epi64(_mm_and_si128(_mm_loadu_si128((const __m128i *)&xmmword_19AADF0B0), v37), 0x28u),
                         _mm_srli_epi64(v41, 0x18u)),
                       (__m128i)v43),
            v43);
    v47 = (__m128)_mm_add_pd(v45, v46);
    v48 = (__m128d)_mm_and_ps((__m128)xmmword_19AADF0F0, v47);
    v49 = _mm_add_pd(
            _mm_sub_pd((__m128d)_mm_or_si128(v44, (__m128i)v42), v42),
            _mm_add_pd(v46, _mm_sub_pd(v45, (__m128d)v47)));
    v50 = _mm_sub_pd((__m128d)v47, v48);
    v51 = _mm_mul_pd((__m128d)xmmword_19AADF0D0, v48);
    v52 = _mm_add_pd(
            _mm_add_pd(_mm_mul_pd((__m128d)xmmword_19AADF0D0, v50), _mm_mul_pd(v48, (__m128d)xmmword_19AADF0E0)),
            _mm_add_pd(_mm_mul_pd(v49, (__m128d)xmmword_19AADF0C0), _mm_mul_pd((__m128d)xmmword_19AADF0E0, v50)));
    v53 = (__m128i)_mm_and_ps(v40, (__m128)xmmword_19AADF070);
    v54 = (__m128d)_mm_and_ps((__m128)xmmword_19AADF100, v5);
    v55 = (__m128)_mm_add_pd(v52, v51);
    v56 = (__m128)_mm_cmplt_pd((__m128d)xmmword_19AADF110, v54);
    v57 = (unsigned int)(32 * _mm_cvtsi128_si32(v53));
    v49.m128d_f64[0] = *(double *)((char *)&unk_19AAEB700 + v57);
    v58 = 32 * _mm_extract_epi16(v53, 4);
    v59 = (__m128d)_mm_or_ps(
                     _mm_and_ps((__m128)_mm_cmple_pd(v54, (__m128d)xmmword_19AADF110), v5),
                     _mm_and_ps(v55, v56));
    v33.m128d_f64[0] = *(double *)((char *)&unk_19AAEB700 + v57 + 8);
    v33.m128d_f64[1] = *(double *)((char *)&unk_19AAEB700 + v58 + 8);
    v60 = _mm_mul_pd(v59, v33);
    v50.m128d_f64[0] = *(double *)((char *)&unk_19AAEB700 + v57 + 16);
    v50.m128d_f64[1] = *(double *)((char *)&unk_19AAEB700 + v58 + 16);
    v61 = _mm_add_pd(v50, v60);
    v62 = _mm_mul_pd(v59, v59);
    v49.m128d_f64[1] = *(double *)((char *)&unk_19AAEB700 + v58);
    v63 = _mm_mul_pd(v59, v49);
    v64 = _mm_add_pd(v49, v33);
    v65 = _mm_add_pd(v61, v63);
    v66 = _mm_add_pd(
            _mm_add_pd(_mm_add_pd(v60, _mm_sub_pd(v50, v61)), _mm_add_pd(v63, _mm_sub_pd(v61, v65))),
            _mm_mul_pd(
              _mm_mul_pd(
                _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_19AAEF980, v62), (__m128d)xmmword_19AAEF940), v62),
                v59),
              v64));
    v67 = _mm_mul_pd(
            (__m128d)_mm_and_ps(v56, (__m128)_mm_add_pd(v52, _mm_sub_pd(v51, (__m128d)v55))),
            _mm_sub_pd(v64, _mm_mul_pd(v59, v50)));
    v59.m128d_f64[0] = *(double *)((char *)&unk_19AAEB700 + v57 + 24);
    v2 = v70;
    v59.m128d_f64[1] = *(double *)((char *)&unk_19AAEB700 + v58 + 24);
    result = _mm_or_ps(
               _mm_andnot_ps(v68, v69),
               _mm_and_ps(
                 (__m128)_mm_xor_si128(
                           (__m128i)_mm_add_pd(
                                      v65,
                                      _mm_add_pd(
                                        _mm_add_pd(
                                          v66,
                                          _mm_mul_pd(
                                            _mm_mul_pd(
                                              v62,
                                              _mm_add_pd(
                                                _mm_mul_pd(
                                                  _mm_add_pd(
                                                    _mm_mul_pd((__m128d)xmmword_19AAEFA40, v62),
                                                    (__m128d)xmmword_19AAEFA00),
                                                  v62),
                                                (__m128d)xmmword_19AAEF9C0)),
                                            v50)),
                                        _mm_add_pd(v59, v67))),
                           v4),
                 v68));
  }
  if ( v1 )
  {
    *v3 = v2;
    *(__m128 *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = result;
    v14 = 0;
    v15 = v1;
    do
    {
      if ( _bittest(&v15, v14) )
        sub_1400F2560((char *)v3 + 8 * v14, (char *)v3 + 8 * v14 + 64);
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (int)v14 < 2 );
    return *(__m128 *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return result;
}

