/* Address: 0x1400f0be0 | Name: __sse2_sinf4@@16 | Size: 2360 bytes */
// local variable allocation has failed, the output may be wrong!
__m128 __fastcall _sse2_sinf4(double a1, __int64 a2, __int64 a3)
{
  void *v3; // r9
  int v4; // r10d
  _OWORD *v5; // r13
  __m128 v6; // xmm8
  __m128 v7; // xmm6
  __m128 v8; // xmm5
  __m128 v9; // xmm10
  __m128 v10; // xmm3
  __m128 v11; // xmm10
  __m128 v12; // xmm1
  __m128 v13; // xmm10
  __int64 v15; // rbx
  int v16; // esi
  __m128i v17; // xmm12
  __m128i v18; // xmm7
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  __m128i v23; // xmm1
  __m128i v24; // xmm3
  __m128i v25; // xmm8
  __m128i v26; // xmm4
  __m128i v27; // xmm11
  __m128i v28; // xmm7
  __m128i v29; // xmm12
  __m128i v30; // xmm8
  __m128i v31; // xmm12
  __m128i v32; // xmm14
  __m128i v33; // xmm13
  __m128i v34; // xmm10
  __m128i v35; // xmm12
  __m128i v36; // xmm15
  __m128i v37; // xmm0
  __m128i v38; // xmm9
  __m128i v39; // xmm8
  __m128i v40; // xmm5
  __m128i v41; // xmm2
  __m128i v42; // xmm4
  __m128i v43; // xmm1
  __m128i v44; // xmm11
  __m128i v45; // xmm2
  __m128i v46; // xmm3
  __m128i v47; // xmm6
  __m128i v48; // xmm0
  __m128i v49; // xmm2
  __m128i v50; // xmm9
  __m128i v51; // xmm11
  __m128i v52; // xmm15
  __m128i v53; // xmm13
  __m128i v54; // xmm6
  __m128i v55; // xmm5
  __m128i v56; // xmm1
  __m128i v57; // xmm3
  __m128i v58; // xmm13
  __m128i v59; // xmm9
  __m128 v60; // xmm5
  __m128 v61; // xmm7
  __m128 v62; // xmm1
  __m128 v63; // xmm9
  __m128 v64; // xmm2
  __m128 v65; // xmm10
  __m128 v66; // xmm6
  __m128 v67; // xmm11
  __m128 v68; // xmm1
  __m128 v69; // xmm5
  __m128 v70; // xmm12
  __m128 v71; // xmm8
  __m128 v72; // xmm6
  __m128 v73; // xmm13
  __m128 v74; // xmm7
  __m128 v75; // xmm12
  __m128 v76; // xmm8
  __m128i v77; // xmm2
  __m128 v78; // xmm12
  __m128 v79; // xmm4
  __m128 v80; // xmm11
  unsigned int v81; // edx
  unsigned int v82; // ecx
  __m128 v83; // xmm12
  __m128 v84; // xmm11
  unsigned int v85; // eax
  __m128 v86; // xmm7
  __m128 v87; // xmm1
  __m128 v88; // xmm15
  __m128 v89; // xmm10
  __m128 v90; // xmm4
  __m128 v91; // xmm14
  __m128 v92; // xmm9
  __m128 v93; // xmm13
  __m128 v94; // xmm7
  __m128 v95; // [rsp+20h] [rbp-1D8h]
  __m128 v96; // [rsp+30h] [rbp-1C8h]
  __m128 v97; // [rsp+40h] [rbp-1B8h]
  __m128i v98; // [rsp+50h] [rbp-1A8h] BYREF
  __m128i v99; // [rsp+60h] [rbp-198h]
  __m128i v100[2]; // [rsp+70h] [rbp-188h] BYREF
  __m128i v101; // [rsp+90h] [rbp-168h] BYREF
  __m128i v102[4]; // [rsp+A0h] [rbp-158h] BYREF
  _BYTE v103[81]; // [rsp+EFh] [rbp-109h] BYREF
  unsigned __int64 v104; // [rsp+1E8h] [rbp-10h]

  v3 = &unk_19AAF0100;
  v4 = 0;
  v5 = (_OWORD *)((unsigned __int64)v103 & 0xFFFFFFFFFFFFFFC0uLL);
  v6 = _mm_and_ps(*(__m128 *)&a1, (__m128)xmmword_19AAF1D00);
  v7 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_19AAF2180, v6), (__m128)xmmword_19AAF21C0);
  v8 = _mm_sub_ps(v7, (__m128)xmmword_19AAF21C0);
  v9 = _mm_sub_ps(
         _mm_sub_ps(
           _mm_sub_ps(
             _mm_sub_ps(v6, _mm_mul_ps((__m128)xmmword_19AAF1EC0, v8)),
             _mm_mul_ps((__m128)xmmword_19AAF1F00, v8)),
           _mm_mul_ps((__m128)xmmword_19AAF1F40, v8)),
         _mm_mul_ps((__m128)xmmword_19AAF1F80, v8));
  v10 = _mm_mul_ps(v9, v9);
  v11 = (__m128)_mm_xor_si128((__m128i)v9, _mm_slli_epi32((__m128i)v7, 0x1Fu));
  v12 = _mm_cmpnle_ps(v6, (__m128)xmmword_19AAF1D40);
  v104 = (unsigned __int64)v103 & 0xFFFFFFFFFFFFFFC0uLL;
  v13 = (__m128)_mm_xor_si128(
                  (__m128i)_mm_add_ps(
                             v11,
                             _mm_mul_ps(
                               _mm_mul_ps(
                                 v10,
                                 _mm_add_ps(
                                   _mm_mul_ps(
                                     _mm_add_ps(
                                       _mm_mul_ps(
                                         _mm_add_ps(
                                           _mm_mul_ps((__m128)xmmword_19AAF2140, v10),
                                           (__m128)xmmword_19AAF2100),
                                         v10),
                                       (__m128)xmmword_19AAF20C0),
                                     v10),
                                   (__m128)xmmword_19AAF2080)),
                               v11)),
                  (__m128i)_mm_andnot_ps((__m128)xmmword_19AAF1D00, *(__m128 *)&a1));
  if ( _mm_movemask_ps(v12) )
  {
    v97 = v13;
    v17 = _mm_srli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7F800000u), 0), *(__m128i *)&a1), 0x17u);
    v18 = _mm_slli_epi32(_mm_add_epi32(_mm_slli_epi32(v17, 1u), v17), 2u);
    v19 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v18, 2));
    v20 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v18, 3));
    v21 = _mm_cvtsi128_si32(v18);
    v22 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v18, 1));
    v96 = v12;
    v23 = _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0100 + v19 + 4));
    v24 = _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0100 + v20 + 4));
    v4 = _mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps(v6, (__m128)xmmword_19AAF1D80), (__m128)xmmword_19AAF1D80));
    v95 = *(__m128 *)&a1;
    v25 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0100 + v21)),
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0100 + v22))),
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0100 + v19)),
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0100 + v20))));
    v26 = _mm_unpacklo_epi32(
            _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0100 + v21 + 8)),
            _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0100 + v22 + 8)));
    v27 = _mm_unpacklo_epi32(
            _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0100 + v19 + 8)),
            _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0100 + v20 + 8)));
    v28 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFu), 0);
    v29 = _mm_srli_epi32(v25, 0x10u);
    v30 = _mm_and_si128(v25, v28);
    v98 = v29;
    v31 = _mm_add_epi32(
            _mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFu), 0), *(__m128i *)&a1),
            _mm_shuffle_epi32(_mm_cvtsi32_si128(0x800000u), 0));
    v32 = _mm_and_si128(v31, v28);
    v33 = _mm_srli_epi64(v30, 0x20u);
    v34 = _mm_srli_epi64(v32, 0x20u);
    v35 = _mm_srli_epi32(v31, 0x10u);
    v3 = &unk_19AAF0D00;
    v36 = _mm_mul_epu32(v32, v30);
    v37 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0100 + v21 + 4)),
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0100 + v22 + 4))),
            _mm_unpacklo_epi32(v23, v24));
    v38 = _mm_and_si128(v37, v28);
    v99 = v30;
    v39 = _mm_loadu_si128((const __m128i *)&xmmword_19AADF400);
    v102[0] = _mm_or_si128(_mm_and_si128(v36, v39), _mm_slli_epi64(_mm_mul_epu32(v34, v33), 0x20u));
    v40 = _mm_srli_epi64(v38, 0x20u);
    v100[0] = _mm_srli_epi32(v37, 0x10u);
    v101 = _mm_srli_epi64(v100[0], 0x20u);
    v41 = _mm_unpacklo_epi64(v26, v27);
    v42 = _mm_and_si128(v41, v28);
    v43 = _mm_or_si128(_mm_and_si128(_mm_mul_epu32(v32, v38), v39), _mm_slli_epi64(_mm_mul_epu32(v34, v40), 0x20u));
    v44 = _mm_srli_epi64(v35, 0x20u);
    v45 = _mm_srli_epi32(v41, 0x10u);
    v100[1] = v33;
    v46 = _mm_srli_epi64(v45, 0x20u);
    v47 = _mm_or_si128(_mm_and_si128(_mm_mul_epu32(v32, v100[0]), v39), _mm_slli_epi64(_mm_mul_epu32(v34, v101), 0x20u));
    v48 = _mm_add_epi32(
            _mm_srli_epi32(
              _mm_or_si128(
                _mm_and_si128(_mm_mul_epu32(v35, v42), v39),
                _mm_slli_epi64(_mm_mul_epu32(_mm_srli_epi64(v42, 0x20u), v44), 0x20u)),
              0x10u),
            _mm_add_epi32(
              _mm_and_si128(v43, v28),
              _mm_add_epi32(
                _mm_or_si128(
                  _mm_and_si128(_mm_mul_epu32(v35, v45), v39),
                  _mm_slli_epi64(_mm_mul_epu32(v44, v46), 0x20u)),
                _mm_srli_epi32(
                  _mm_or_si128(
                    _mm_and_si128(_mm_mul_epu32(v45, v32), v39),
                    _mm_slli_epi64(_mm_mul_epu32(v46, v34), 0x20u)),
                  0x10u))));
    v49 = _mm_add_epi32(
            _mm_and_si128(v47, v28),
            _mm_add_epi32(
              _mm_or_si128(_mm_and_si128(_mm_mul_epu32(v38, v35), v39), _mm_slli_epi64(_mm_mul_epu32(v40, v44), 0x20u)),
              _mm_srli_epi32(v43, 0x10u)));
    v50 = _mm_mul_epu32(_mm_loadu_si128(&v101), v44);
    v51 = _mm_mul_epu32(v44, v33);
    v52 = _mm_add_epi32(
            _mm_or_si128(_mm_and_si128(_mm_mul_epu32(_mm_loadu_si128(v100), v35), v39), _mm_slli_epi64(v50, 0x20u)),
            _mm_srli_epi32(v47, 0x10u));
    v53 = _mm_add_epi32(_mm_srli_epi32(v48, 0x10u), v49);
    v54 = _mm_loadu_si128(&v98);
    v55 = _mm_loadu_si128(v102);
    v56 = _mm_add_epi32(_mm_srli_epi32(v53, 0x10u), _mm_add_epi32(_mm_and_si128(v55, v28), v52));
    v57 = _mm_add_epi32(
            _mm_slli_epi32(
              _mm_add_epi32(
                _mm_srli_epi32(v56, 0x10u),
                _mm_add_epi32(
                  _mm_and_si128(
                    _mm_or_si128(
                      _mm_and_si128(_mm_mul_epu32(v32, v54), v39),
                      _mm_slli_epi64(_mm_mul_epu32(v34, _mm_srli_epi64(v54, 0x20u)), 0x20u)),
                    v28),
                  _mm_add_epi32(
                    _mm_or_si128(_mm_and_si128(_mm_mul_epu32(v35, v99), v39), _mm_slli_epi64(v51, 0x20u)),
                    _mm_srli_epi32(v55, 0x10u)))),
              0x10u),
            _mm_and_si128(v56, v28));
    v58 = _mm_add_epi32(_mm_slli_epi32(v53, 0x10u), _mm_and_si128(v48, v28));
    *(__m128 *)&a1 = v95;
    v59 = _mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x80000000), 0), (__m128i)v95);
    v60 = (__m128)_mm_or_si128(
                    _mm_srli_epi32(v57, 9u),
                    _mm_xor_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x3F800000u), 0), v59));
    v61 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x47400000u), 0);
    v62 = (__m128)_mm_xor_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x28800000u), 0), v59);
    v63 = (__m128)_mm_xor_si128(v59, _mm_shuffle_epi32(_mm_cvtsi32_si128(0x34000000u), 0));
    v64 = _mm_add_ps(v60, v61);
    v65 = _mm_sub_ps(
            (__m128)_mm_or_si128(
                      _mm_or_si128(
                        _mm_slli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x1FFu), 0), v57), 0xEu),
                        _mm_srli_epi32(v58, 0x12u)),
                      (__m128i)v63),
            v63);
    v66 = _mm_sub_ps(
            (__m128)_mm_or_si128(
                      _mm_slli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x3FFFFu), 0), v58), 5u),
                      (__m128i)v62),
            v62);
    v67 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0xB795777A), 0);
    v68 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x35800000u), 0);
    v69 = _mm_sub_ps(v60, _mm_sub_ps(v64, v61));
    v70 = _mm_add_ps(v69, v65);
    v71 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x40C91000u), 0);
    v72 = _mm_add_ps(v66, _mm_add_ps(v65, _mm_sub_ps(v69, v70)));
    v73 = _mm_and_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFF000), 0), v70);
    v74 = _mm_mul_ps(v71, v73);
    v75 = _mm_sub_ps(v70, v73);
    v76 = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(v71, v75), _mm_mul_ps(v73, v67)),
            _mm_add_ps(
              _mm_mul_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x40C90FDBu), 0), v72),
              _mm_mul_ps(v67, v75)));
    v77 = _mm_slli_epi32(_mm_and_si128((__m128i)v64, _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFu), 0)), 4u);
    v78 = _mm_and_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), 0), v95);
    v79 = _mm_add_ps(v76, v74);
    v80 = _mm_cmplt_ps(v68, v78);
    v81 = _mm_cvtsi128_si32(v77);
    v82 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v77, 2));
    v83 = _mm_or_ps(_mm_and_ps(_mm_cmple_ps(v78, v68), v95), _mm_and_ps(v79, v80));
    v84 = _mm_and_ps(v80, _mm_add_ps(v76, _mm_sub_ps(v74, v79)));
    a3 = (unsigned int)_mm_cvtsi128_si32(_mm_shuffle_epi32(v77, 3));
    v85 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v77, 1));
    v86 = (__m128)_mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + v81)),
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + v85))),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + v82)),
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + (unsigned int)a3))));
    v87 = (__m128)_mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + v81 + 12)),
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + v85 + 12))),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + v82 + 12)),
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + (unsigned int)a3 + 12))));
    v88 = _mm_mul_ps(v83, v87);
    v89 = _mm_mul_ps(v83, v83);
    v90 = _mm_mul_ps(v83, v86);
    v91 = (__m128)_mm_unpacklo_pd(
                    (__m128d)_mm_unpacklo_epi32(
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + v81 + 4)),
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + v85 + 4))),
                    (__m128d)_mm_unpacklo_epi32(
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + v82 + 4)),
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + (unsigned int)a3 + 4))));
    v92 = _mm_add_ps(v91, v88);
    v93 = _mm_add_ps(v92, v90);
    v94 = _mm_sub_ps(_mm_add_ps(v86, v87), _mm_mul_ps(v83, v91));
    v13 = _mm_or_ps(
            _mm_andnot_ps(v96, v97),
            _mm_and_ps(
              _mm_add_ps(
                v93,
                _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      (__m128)_mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(
                                  _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + v81 + 8)),
                                  _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + v85 + 8))),
                                _mm_unpacklo_epi32(
                                  _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + v82 + 8)),
                                  _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_19AAF0D00 + (unsigned int)a3 + 8)))),
                      _mm_mul_ps(v84, v94)),
                    _mm_mul_ps(
                      v91,
                      _mm_mul_ps(v89, _mm_add_ps(_mm_mul_ps((__m128)xmmword_19AAF1E80, v89), (__m128)xmmword_19AAF1E40)))),
                  _mm_add_ps(
                    _mm_add_ps(_mm_add_ps(v88, _mm_sub_ps(v91, v92)), _mm_add_ps(v90, _mm_sub_ps(v92, v93))),
                    _mm_mul_ps(
                      _mm_mul_ps(
                        _mm_mul_ps(
                          _mm_add_ps(_mm_mul_ps((__m128)xmmword_19AAF1E00, v89), (__m128)xmmword_19AAF1DC0),
                          v89),
                        v83),
                      v94)))),
              v96));
  }
  if ( v4 )
  {
    *v5 = *(_OWORD *)&a1;
    *(__m128 *)(((unsigned __int64)v103 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v13;
    v15 = 0;
    v16 = v4;
    do
    {
      if ( _bittest(&v16, v15) )
        _common_ssin_cout_rare((char *)v5 + 4 * v15, (char *)v5 + 4 * v15 + 64, a3, v3);
      v15 = (unsigned int)(v15 + 1);
    }
    while ( (int)v15 < 4 );
    return *(__m128 *)(((unsigned __int64)v103 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return v13;
}

