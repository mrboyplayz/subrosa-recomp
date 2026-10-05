/* Address: 0x1401fb8f0 | Name: sub_1401FB8F0 | Size: 1700 bytes */
// local variable allocation has failed, the output may be wrong!
__m128d __fastcall sub_1401FB8F0(double a1)
{
  __m128 v1; // xmm3
  int v2; // r9d
  _OWORD *v3; // r13
  __m128d v4; // xmm6
  __m128 v5; // xmm4
  __m128 v6; // xmm1
  __m128d v7; // xmm0
  __m128d v8; // xmm2
  __m128d v9; // xmm4
  __m128 v10; // xmm11
  __m128d v11; // xmm9
  __m128 v12; // xmm4
  __m128d v13; // xmm12
  __m128d v14; // xmm4
  __m128d v15; // xmm4
  __int64 v17; // rbx
  int v18; // esi
  __m128i v19; // xmm1
  __m128i v20; // xmm9
  __m128i v21; // xmm7
  __int64 v22; // r8
  __m128i v23; // xmm8
  __m128i v24; // xmm13
  __m128i v25; // xmm15
  __int64 v26; // rcx
  __m128i si128; // xmm6
  __m128i v28; // xmm9
  __m128i v29; // xmm1
  __m128i v30; // xmm14
  __m128i v31; // xmm13
  __m128i v32; // xmm11
  __m128i v33; // xmm14
  __m128i v34; // xmm12
  __m128i v35; // xmm4
  __m128i v36; // xmm15
  __m128i v37; // xmm5
  __m128i v38; // xmm1
  __m128i v39; // xmm13
  __m128i v40; // xmm10
  __m128i v41; // xmm5
  __m128d v42; // xmm7
  __m128 v43; // xmm9
  __m128i v44; // xmm1
  __m128d v45; // xmm4
  __m128d v46; // xmm5
  __m128i v47; // xmm8
  __m128d v48; // xmm7
  __m128d v49; // xmm11
  __m128 v50; // xmm1
  __m128d v51; // xmm10
  __m128d v52; // xmm8
  __m128d v53; // xmm1
  __m128d v54; // xmm12
  __m128d v55; // xmm15
  __m128i v56; // xmm9
  __m128d v57; // xmm7
  __m128 v58; // xmm8
  __m128 v59; // xmm6
  __m128d v60; // xmm12
  __int64 v61; // rdx
  unsigned int v62; // eax
  __m128d v63; // xmm7
  __m128d v64; // xmm11
  __m128d v65; // xmm1
  __m128d v66; // xmm4
  __m128d v67; // xmm13
  __m128d v68; // xmm5
  __m128d v69; // xmm9
  __m128d v70; // xmm11
  __m128d v71; // [rsp+20h] [rbp-158h]
  _BYTE v72[81]; // [rsp+6Fh] [rbp-109h] BYREF
  unsigned __int64 v73; // [rsp+168h] [rbp-10h]

  v1 = *(__m128 *)&a1;
  v2 = 0;
  v3 = (_OWORD *)((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (__m128d)_mm_and_ps(*(__m128 *)&a1, (__m128)xmmword_1B4791C80);
  v5 = (__m128)_mm_sub_pd((__m128d)xmmword_1B4791D00, v4);
  v6 = _mm_and_ps((__m128)xmmword_1B4791C80, v5);
  v7 = _mm_cmpeq_pd((__m128d)xmmword_1B4791D00, (__m128d)v5);
  v8 = _mm_cmpnle_pd((__m128d)v6, (__m128d)xmmword_1B4791CC0);
  v9 = _mm_add_pd(_mm_mul_pd((__m128d)xmmword_1B4791D40, (__m128d)v5), (__m128d)xmmword_1B4791D80);
  v10 = (__m128)_mm_slli_epi64((__m128i)v9, 0x3Fu);
  v11 = _mm_sub_pd((__m128d)xmmword_1B4791DC0, _mm_sub_pd(v9, (__m128d)xmmword_1B4791D80));
  v12 = (__m128)_mm_add_pd(
                  _mm_add_pd(
                    _mm_add_pd(
                      _mm_sub_pd(_mm_mul_pd((__m128d)xmmword_1B4791E00, v11), v4),
                      _mm_mul_pd((__m128d)xmmword_1B4791E40, v11)),
                    _mm_mul_pd((__m128d)xmmword_1B4791E80, v11)),
                  _mm_mul_pd((__m128d)xmmword_1B4791EC0, v11));
  v13 = _mm_mul_pd((__m128d)v12, (__m128d)v12);
  v14 = (__m128d)_mm_xor_ps(v12, v10);
  v73 = (unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL;
  v15 = _mm_blendv_pd(
          _mm_add_pd(
            v14,
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
                                  _mm_add_pd(_mm_mul_pd((__m128d)xmmword_1B4792180, v13), (__m128d)xmmword_1B4792140),
                                  v13),
                                (__m128d)xmmword_1B4792100),
                              v13),
                            (__m128d)xmmword_1B47920C0),
                          v13),
                        (__m128d)xmmword_1B4792080),
                      v13),
                    (__m128d)xmmword_1B4792040),
                  v13),
                (__m128d)xmmword_1B4791FC0),
              _mm_mul_pd(v13, v14))),
          (__m128d)xmmword_1B47921C0,
          v7);
  if ( _mm_movemask_pd(v8) )
  {
    v2 = _mm_movemask_pd(_mm_cmpeq_pd((__m128d)_mm_and_ps(v6, (__m128)xmmword_1B4791980), (__m128d)xmmword_1B4791980));
    v19 = _mm_srli_epi64(_mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_1B476E700), (__m128i)v1), 0x34u);
    v20 = _mm_add_epi64(
            _mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_1B476E710), (__m128i)v1),
            (__m128i)xmmword_1B476E720);
    v21 = _mm_srli_epi64(v20, 0x20u);
    v22 = (unsigned int)(24 * _mm_cvtsi128_si32(v19));
    v23.m128i_i64[0] = *(_QWORD *)((char *)&unk_1B4781700 + v22);
    v24.m128i_i64[0] = *(_QWORD *)((char *)&unk_1B4781700 + v22 + 8);
    v25.m128i_i64[0] = *(_QWORD *)((char *)&unk_1B4781700 + v22 + 16);
    v26 = (unsigned int)(24 * _mm_extract_epi16(v19, 4));
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B476E730);
    v28 = _mm_and_si128(v20, si128);
    v25.m128i_i64[1] = *(__int64 *)((char *)&unk_1B4781700 + v26 + 16);
    v29 = _mm_srli_epi64(v25, 0x20u);
    v24.m128i_i64[1] = *(__int64 *)((char *)&unk_1B4781700 + v26 + 8);
    v30 = v24;
    v31 = _mm_and_si128(v24, si128);
    v32 = _mm_mul_epu32(v28, v31);
    v33 = _mm_srli_epi64(v30, 0x20u);
    v34 = _mm_mul_epu32(v28, v33);
    v71 = v15;
    v23.m128i_i64[1] = *(__int64 *)((char *)&unk_1B4781700 + v26);
    v35 = _mm_and_si128(si128, v23);
    v36 = _mm_add_epi64(
            _mm_srli_epi64(_mm_mul_epu32(_mm_and_si128(v25, si128), v21), 0x20u),
            _mm_add_epi64(
              _mm_and_si128(si128, v32),
              _mm_add_epi64(_mm_mul_epu32(v21, v29), _mm_srli_epi64(_mm_mul_epu32(v29, v28), 0x20u))));
    v37 = _mm_mul_epu32(v28, v35);
    v38 = _mm_add_epi64(
            _mm_srli_epi64(v36, 0x20u),
            _mm_add_epi64(_mm_and_si128(si128, v34), _mm_add_epi64(_mm_mul_epu32(v31, v21), _mm_srli_epi64(v32, 0x20u))));
    v39 = _mm_add_epi64(
            _mm_srli_epi64(v38, 0x20u),
            _mm_add_epi64(_mm_and_si128(si128, v37), _mm_add_epi64(_mm_mul_epu32(v33, v21), _mm_srli_epi64(v34, 0x20u))));
    v40 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_add_epi64(
                _mm_srli_epi64(v39, 0x20u),
                _mm_add_epi64(
                  _mm_and_si128(_mm_mul_epu32(v28, _mm_srli_epi64(v23, 0x20u)), si128),
                  _mm_add_epi64(_mm_mul_epu32(v21, v35), _mm_srli_epi64(v37, 0x20u)))),
              0x20u),
            _mm_and_si128(v39, si128));
    v41 = _mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_1B476E740), (__m128i)v1);
    v42 = (__m128d)_mm_or_si128(
                     _mm_srli_epi64(v40, 0xCu),
                     _mm_xor_si128(_mm_load_si128((const __m128i *)&xmmword_1B476E750), v41));
    v43 = (__m128)_mm_add_pd((__m128d)xmmword_1B476E760, v42);
    v44 = _mm_add_epi64(_mm_slli_epi64(v38, 0x20u), _mm_and_si128(v36, si128));
    v45 = (__m128d)_mm_xor_si128(_mm_load_si128((const __m128i *)&xmmword_1B476E780), v41);
    v46 = (__m128d)_mm_xor_si128(v41, (__m128i)xmmword_1B476E7A0);
    v47 = _mm_slli_epi64(_mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_1B476E790), v44), 0x1Cu);
    v48 = _mm_sub_pd(v42, _mm_sub_pd((__m128d)v43, (__m128d)xmmword_1B476E760));
    v49 = _mm_sub_pd(
            (__m128d)_mm_or_si128(
                       _mm_or_si128(
                         _mm_slli_epi64(_mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_1B476E7B0), v40), 0x28u),
                         _mm_srli_epi64(v44, 0x18u)),
                       (__m128i)v46),
            v46);
    v50 = (__m128)_mm_add_pd(v48, v49);
    v51 = (__m128d)_mm_and_ps((__m128)xmmword_1B476E7F0, v50);
    v52 = _mm_add_pd(
            _mm_sub_pd((__m128d)_mm_or_si128(v47, (__m128i)v45), v45),
            _mm_add_pd(v49, _mm_sub_pd(v48, (__m128d)v50)));
    v53 = _mm_sub_pd((__m128d)v50, v51);
    v54 = _mm_mul_pd((__m128d)xmmword_1B476E7D0, v51);
    v55 = _mm_add_pd(
            _mm_add_pd(_mm_mul_pd((__m128d)xmmword_1B476E7D0, v53), _mm_mul_pd(v51, (__m128d)xmmword_1B476E7E0)),
            _mm_add_pd(_mm_mul_pd(v52, (__m128d)xmmword_1B476E7C0), _mm_mul_pd((__m128d)xmmword_1B476E7E0, v53)));
    v56 = (__m128i)_mm_and_ps(v43, (__m128)xmmword_1B476E770);
    v57 = (__m128d)_mm_and_ps((__m128)xmmword_1B476E800, v1);
    v58 = (__m128)_mm_add_pd(v55, v54);
    v59 = (__m128)_mm_cmplt_pd((__m128d)xmmword_1B476E810, v57);
    v60 = _mm_sub_pd(v54, (__m128d)v58);
    v61 = (unsigned int)(32 * _mm_cvtsi128_si32(v56));
    v45.m128d_f64[0] = *(double *)((char *)&unk_1B478D900 + v61);
    v62 = 32 * _mm_extract_epi16(v56, 4);
    v63 = (__m128d)_mm_or_ps(
                     _mm_and_ps((__m128)_mm_cmple_pd(v57, (__m128d)xmmword_1B476E810), v1),
                     _mm_and_ps(v58, v59));
    v58.m128_u64[0] = *(_QWORD *)((char *)&unk_1B478D900 + v61 + 8);
    v58.m128_u64[1] = *(unsigned __int64 *)((char *)&unk_1B478D900 + v62 + 8);
    v64 = _mm_mul_pd(v63, (__m128d)v58);
    v51.m128d_f64[0] = *(double *)((char *)&unk_1B478D900 + v61 + 16);
    v45.m128d_f64[1] = *(double *)((char *)&unk_1B478D900 + v62);
    v51.m128d_f64[1] = *(double *)((char *)&unk_1B478D900 + v62 + 16);
    v65 = _mm_mul_pd(v63, v45);
    v66 = _mm_add_pd(v45, (__m128d)v58);
    v67 = _mm_add_pd(v51, v64);
    v68 = _mm_add_pd(v67, v65);
    v69 = _mm_mul_pd(v63, v63);
    v70 = _mm_add_pd(
            _mm_add_pd(_mm_add_pd(v64, _mm_sub_pd(v51, v67)), _mm_add_pd(v65, _mm_sub_pd(v67, v68))),
            _mm_mul_pd(
              _mm_mul_pd(
                _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_1B4791B80, v69), (__m128d)xmmword_1B4791B40), v69),
                v63),
              v66));
    v65.m128d_f64[0] = *(double *)((char *)&unk_1B478D900 + v61 + 24);
    v65.m128d_f64[1] = *(double *)((char *)&unk_1B478D900 + v62 + 24);
    v15 = _mm_blendv_pd(
            v71,
            _mm_add_pd(
              v68,
              _mm_add_pd(
                _mm_add_pd(
                  v70,
                  _mm_mul_pd(
                    _mm_mul_pd(
                      v69,
                      _mm_add_pd(
                        _mm_mul_pd(
                          _mm_add_pd(_mm_mul_pd((__m128d)xmmword_1B4791C40, v69), (__m128d)xmmword_1B4791C00),
                          v69),
                        (__m128d)xmmword_1B4791BC0)),
                    v51)),
                _mm_add_pd(
                  v65,
                  _mm_mul_pd(
                    (__m128d)_mm_and_ps(v59, (__m128)_mm_add_pd(v55, v60)),
                    _mm_sub_pd(v66, _mm_mul_pd(v63, v51)))))),
            v8);
  }
  if ( v2 )
  {
    *v3 = v1;
    *(__m128d *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v15;
    v17 = 0;
    v18 = v2;
    do
    {
      if ( _bittest(&v18, v17) )
        sub_1401FC520((char *)v3 + 8 * v17, (char *)v3 + 8 * v17 + 64);
      v17 = (unsigned int)(v17 + 1);
    }
    while ( (int)v17 < 2 );
    return *(__m128d *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return v15;
}

