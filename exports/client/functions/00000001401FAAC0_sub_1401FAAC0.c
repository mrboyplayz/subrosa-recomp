/* Address: 0x1401faac0 | Name: sub_1401FAAC0 | Size: 1905 bytes */
// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_1401FAAC0(double a1, __int64 a2, __int64 a3)
{
  __m128 v3; // xmm2
  void *v4; // r9
  int v5; // r10d
  _OWORD *v6; // r13
  __m128 v7; // xmm9
  __m128 v8; // xmm8
  __m128 v9; // xmm0
  __m128 v10; // xmm7
  __m128 v11; // xmm6
  __m128 v12; // xmm10
  __m128 v13; // xmm4
  __m128 v14; // xmm10
  __m128 v15; // xmm10
  __int64 v17; // rbx
  int v18; // esi
  __m128i v19; // xmm12
  __m128i v20; // xmm9
  unsigned int v21; // r8d
  unsigned int epi32; // edx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  __m128i v25; // xmm10
  __m128i v26; // xmm11
  __m128i v27; // xmm15
  __m128i v28; // xmm7
  __m128i v29; // xmm5
  __m128i v30; // xmm13
  __m128i v31; // xmm14
  __m128i v32; // xmm4
  __m128i v33; // xmm3
  __m128i v34; // xmm14
  __m128i v35; // xmm11
  __m128i v36; // xmm8
  __m128i v37; // xmm9
  __m128i v38; // xmm10
  __m128i v39; // xmm5
  __m128i v40; // xmm6
  __m128i v41; // xmm1
  __m128i v42; // xmm8
  __m128i v43; // xmm15
  __m128i v44; // xmm1
  __m128i v45; // xmm12
  __m128 v46; // xmm13
  __m128 v47; // xmm7
  __m128 v48; // xmm9
  __m128 v49; // xmm14
  __m128 v50; // xmm12
  __m128 v51; // xmm10
  __m128 v52; // xmm8
  __m128 v53; // xmm13
  __m128 v54; // xmm6
  __m128 v55; // xmm5
  __m128 v56; // xmm13
  __m128 v57; // xmm6
  __m128 v58; // xmm11
  __m128 v59; // xmm1
  __m128 v60; // xmm3
  __m128 v61; // xmm9
  __m128 v62; // xmm10
  __m128 v63; // xmm13
  __m128 v64; // xmm15
  __m128 v65; // xmm8
  __m128 v66; // xmm10
  __m128 v67; // xmm15
  __m128 v68; // xmm8
  __m128 v69; // xmm9
  __m128i v70; // xmm14
  unsigned int v71; // edx
  __m128 v72; // xmm7
  unsigned int v73; // ecx
  unsigned int v74; // eax
  __m128 v75; // xmm5
  __m128 v76; // xmm12
  __m128 v77; // xmm3
  __m128 v78; // xmm10
  __m128 v79; // xmm6
  __m128 v80; // xmm11
  __m128 v81; // xmm4
  __m128 v82; // xmm6
  __m128 v83; // [rsp+20h] [rbp-158h]
  _BYTE v84[81]; // [rsp+6Fh] [rbp-109h] BYREF
  unsigned __int64 v85; // [rsp+168h] [rbp-10h]

  v3 = *(__m128 *)&a1;
  v4 = &unk_1B477F500;
  v5 = 0;
  v6 = (_OWORD *)((unsigned __int64)v84 & 0xFFFFFFFFFFFFFFC0uLL);
  v7 = _mm_and_ps(*(__m128 *)&a1, (__m128)xmmword_1B4781100);
  v8 = _mm_andnot_ps((__m128)xmmword_1B4781100, *(__m128 *)&a1);
  v9 = _mm_cmpnle_ps(v7, (__m128)xmmword_1B4781140);
  v10 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_1B4781580, v7), (__m128)xmmword_1B47815C0);
  v11 = _mm_sub_ps(v10, (__m128)xmmword_1B47815C0);
  v12 = _mm_sub_ps(
          _mm_sub_ps(
            _mm_sub_ps(
              _mm_sub_ps(v7, _mm_mul_ps((__m128)xmmword_1B47812C0, v11)),
              _mm_mul_ps((__m128)xmmword_1B4781300, v11)),
            _mm_mul_ps((__m128)xmmword_1B4781340, v11)),
          _mm_mul_ps((__m128)xmmword_1B4781380, v11));
  v13 = _mm_mul_ps(v12, v12);
  v14 = _mm_xor_ps(v12, (__m128)_mm_slli_epi32((__m128i)v10, 0x1Fu));
  v85 = (unsigned __int64)v84 & 0xFFFFFFFFFFFFFFC0uLL;
  v15 = _mm_xor_ps(
          _mm_add_ps(
            v14,
            _mm_mul_ps(
              _mm_mul_ps(
                v13,
                _mm_add_ps(
                  _mm_mul_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_add_ps(_mm_mul_ps((__m128)xmmword_1B4781540, v13), (__m128)xmmword_1B4781500), v13),
                      (__m128)xmmword_1B47814C0),
                    v13),
                  (__m128)xmmword_1B4781480)),
              v14)),
          v8);
  if ( _mm_movemask_ps(v9) )
  {
    v19 = _mm_srli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7F800000u), 0), (__m128i)v3), 0x17u);
    v5 = _mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps(v7, (__m128)xmmword_1B4781180), (__m128)xmmword_1B4781180));
    v20 = _mm_slli_epi32(_mm_add_epi32(_mm_slli_epi32(v19, 1u), v19), 2u);
    v21 = _mm_cvtsi128_si32(v20);
    v83 = v15;
    epi32 = _mm_extract_epi32(v20, 2);
    v23 = _mm_extract_epi32(v20, 1);
    v24 = _mm_extract_epi32(v20, 3);
    v4 = &unk_1B4780100;
    v25 = _mm_unpacklo_epi64(
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v21 + 8)),
              *(_DWORD *)((char *)&unk_1B477F500 + v23 + 8),
              1),
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + epi32 + 8)),
              *(_DWORD *)((char *)&unk_1B477F500 + v24 + 8),
              1));
    v26 = _mm_unpacklo_epi64(
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v21 + 4)),
              *(_DWORD *)((char *)&unk_1B477F500 + v23 + 4),
              1),
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + epi32 + 4)),
              *(_DWORD *)((char *)&unk_1B477F500 + v24 + 4),
              1));
    v27 = _mm_srli_epi32(v25, 0x10u);
    v28 = _mm_srli_epi32(v26, 0x10u);
    v29 = _mm_unpacklo_epi64(
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v21)),
              *(_DWORD *)((char *)&unk_1B477F500 + v23),
              1),
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + epi32)),
              *(_DWORD *)((char *)&unk_1B477F500 + v24),
              1));
    v30 = _mm_srli_epi32(v29, 0x10u);
    v31 = _mm_add_epi32(
            _mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFu), 0), (__m128i)v3),
            _mm_shuffle_epi32(_mm_cvtsi32_si128(0x800000u), 0));
    v32 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFu), 0);
    v33 = _mm_srli_epi32(v31, 0x10u);
    v34 = _mm_and_si128(v31, v32);
    v35 = _mm_and_si128(v26, v32);
    v36 = _mm_mullo_epi32(v34, v35);
    v37 = _mm_mullo_epi32(v34, v28);
    v38 = _mm_add_epi32(
            _mm_srli_epi32(_mm_mullo_epi32(_mm_and_si128(v25, v32), v33), 0x10u),
            _mm_add_epi32(
              _mm_and_si128(v36, v32),
              _mm_add_epi32(_mm_mullo_epi32(v33, v27), _mm_srli_epi32(_mm_mullo_epi32(v27, v34), 0x10u))));
    v39 = _mm_and_si128(v29, v32);
    v40 = _mm_mullo_epi32(v34, v39);
    v41 = _mm_add_epi32(
            _mm_srli_epi32(v38, 0x10u),
            _mm_add_epi32(_mm_and_si128(v37, v32), _mm_add_epi32(_mm_mullo_epi32(v35, v33), _mm_srli_epi32(v36, 0x10u))));
    v42 = _mm_add_epi32(
            _mm_srli_epi32(v41, 0x10u),
            _mm_add_epi32(_mm_and_si128(v40, v32), _mm_add_epi32(_mm_mullo_epi32(v28, v33), _mm_srli_epi32(v37, 0x10u))));
    v43 = _mm_add_epi32(
            _mm_slli_epi32(
              _mm_add_epi32(
                _mm_srli_epi32(v42, 0x10u),
                _mm_add_epi32(
                  _mm_and_si128(_mm_mullo_epi32(v34, v30), v32),
                  _mm_add_epi32(_mm_mullo_epi32(v33, v39), _mm_srli_epi32(v40, 0x10u)))),
              0x10u),
            _mm_and_si128(v42, v32));
    v44 = _mm_add_epi32(_mm_slli_epi32(v41, 0x10u), _mm_and_si128(v38, v32));
    v45 = _mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x80000000), 0), (__m128i)v3);
    v46 = (__m128)_mm_or_si128(
                    _mm_srli_epi32(v43, 9u),
                    _mm_xor_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x3F800000u), 0), v45));
    v47 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x47400000u), 0);
    v48 = (__m128)_mm_xor_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x28800000u), 0), v45);
    v49 = _mm_add_ps(v46, v47);
    v50 = (__m128)_mm_xor_si128(v45, _mm_shuffle_epi32(_mm_cvtsi32_si128(0x34000000u), 0));
    v51 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x40C91000u), 0);
    v52 = _mm_sub_ps(
            (__m128)_mm_or_si128(
                      _mm_or_si128(
                        _mm_slli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x1FFu), 0), v43), 0xEu),
                        _mm_srli_epi32(v44, 0x12u)),
                      (__m128i)v50),
            v50);
    v53 = _mm_sub_ps(v46, _mm_sub_ps(v49, v47));
    v54 = _mm_add_ps(v53, v52);
    v55 = _mm_and_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFF000), 0), v54);
    v56 = _mm_sub_ps(v53, v54);
    v57 = _mm_sub_ps(v54, v55);
    v58 = _mm_add_ps(
            _mm_sub_ps(
              (__m128)_mm_or_si128(
                        _mm_slli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x3FFFFu), 0), v44), 5u),
                        (__m128i)v48),
              v48),
            _mm_add_ps(v52, v56));
    v59 = _mm_mul_ps(v55, v51);
    v60 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0xB795777A), 0);
    v61 = _mm_and_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), 0), v3);
    v62 = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(v51, v57), _mm_mul_ps(v55, v60)),
            _mm_add_ps(
              _mm_mul_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x40C90FDBu), 0), v58),
              _mm_mul_ps(v60, v57)));
    v63 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x35800000u), 0);
    v64 = _mm_add_ps(v62, v59);
    v65 = _mm_cmplt_ps(v63, v61);
    v66 = _mm_add_ps(v62, _mm_sub_ps(v59, v64));
    v67 = _mm_and_ps(v64, v65);
    v68 = _mm_and_ps(v65, v66);
    v69 = _mm_or_ps(_mm_and_ps(_mm_cmple_ps(v61, v63), v3), v67);
    v70 = _mm_slli_epi32(_mm_and_si128((__m128i)v49, _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFu), 0)), 4u);
    v71 = _mm_cvtsi128_si32(v70);
    v72 = _mm_mul_ps(v69, v69);
    v73 = _mm_extract_epi32(v70, 2);
    v74 = _mm_extract_epi32(v70, 1);
    a3 = (unsigned int)_mm_extract_epi32(v70, 3);
    v75 = (__m128)_mm_unpacklo_pd(
                    (__m128d)_mm_insert_epi32(
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v71 + 4)),
                               *(_DWORD *)((char *)&unk_1B4780100 + v74 + 4),
                               1),
                    (__m128d)_mm_insert_epi32(
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v73 + 4)),
                               *(_DWORD *)((char *)&unk_1B4780100 + (unsigned int)a3 + 4),
                               1));
    v76 = (__m128)_mm_unpacklo_epi64(
                    _mm_insert_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v71 + 12)),
                      *(_DWORD *)((char *)&unk_1B4780100 + v74 + 12),
                      1),
                    _mm_insert_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v73 + 12)),
                      *(_DWORD *)((char *)&unk_1B4780100 + (unsigned int)a3 + 12),
                      1));
    v77 = _mm_mul_ps(v69, v76);
    v78 = _mm_add_ps(v75, v77);
    v79 = (__m128)_mm_unpacklo_epi64(
                    _mm_insert_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v71)),
                      *(_DWORD *)((char *)&unk_1B4780100 + v74),
                      1),
                    _mm_insert_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v73)),
                      *(_DWORD *)((char *)&unk_1B4780100 + (unsigned int)a3),
                      1));
    v80 = _mm_mul_ps(v69, v79);
    v81 = _mm_add_ps(v78, v80);
    v82 = _mm_sub_ps(_mm_add_ps(v79, v76), _mm_mul_ps(v69, v75));
    v15 = _mm_blendv_ps(
            v83,
            _mm_add_ps(
              v81,
              _mm_add_ps(
                _mm_add_ps(
                  _mm_add_ps(
                    (__m128)_mm_unpacklo_epi64(
                              _mm_insert_epi32(
                                _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v71 + 8)),
                                *(_DWORD *)((char *)&unk_1B4780100 + v74 + 8),
                                1),
                              _mm_insert_epi32(
                                _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v73 + 8)),
                                *(_DWORD *)((char *)&unk_1B4780100 + (unsigned int)a3 + 8),
                                1)),
                    _mm_mul_ps(v68, v82)),
                  _mm_mul_ps(
                    v75,
                    _mm_mul_ps(v72, _mm_add_ps(_mm_mul_ps((__m128)xmmword_1B4781280, v72), (__m128)xmmword_1B4781240)))),
                _mm_add_ps(
                  _mm_add_ps(_mm_add_ps(v77, _mm_sub_ps(v75, v78)), _mm_add_ps(v80, _mm_sub_ps(v78, v81))),
                  _mm_mul_ps(
                    _mm_mul_ps(
                      _mm_mul_ps(_mm_add_ps(_mm_mul_ps((__m128)xmmword_1B4781200, v72), (__m128)xmmword_1B47811C0), v72),
                      v69),
                    v82)))),
            v9);
  }
  if ( v5 )
  {
    *v6 = v3;
    *(__m128 *)(((unsigned __int64)v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v15;
    v17 = 0;
    v18 = v5;
    do
    {
      if ( _bittest(&v18, v17) )
        sub_1401FC4B0((char *)v6 + 4 * v17, (char *)v6 + 4 * v17 + 64, a3, v4);
      v17 = (unsigned int)(v17 + 1);
    }
    while ( (int)v17 < 4 );
    return *(__m128 *)(((unsigned __int64)v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return v15;
}

