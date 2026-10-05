/* Address: 0x140163640 | Name: sub_140163640 | Size: 2084 bytes */
__int64 __fastcall sub_140163640(_QWORD *a1, int a2, const __m128i *a3)
{
  __m128i v3; // xmm3
  __m128i v4; // xmm5
  __m128i v5; // xmm4
  __m128i v6; // xmm2
  __m128i v7; // xmm6
  __m128i v8; // xmm7
  __m128i v9; // xmm6
  __m128i v10; // xmm10
  __m128i v11; // xmm11
  __m128i v12; // xmm8
  __m128i v13; // xmm0
  __m128i v14; // xmm10
  __m128i v15; // xmm2
  __m128i v16; // xmm14
  __m128i v17; // xmm13
  __m128i v18; // xmm1
  __m128i v19; // xmm15
  __m128i v20; // xmm6
  __m128i v21; // xmm7
  __m128i v22; // xmm5
  __m128i v23; // xmm0
  __m128i v24; // xmm11
  __m128i v25; // xmm8
  __m128i v26; // xmm2
  __m128i v27; // xmm8
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm12
  __m128i v32; // xmm3
  __m128i v33; // xmm15
  __m128i v34; // xmm9
  __m128i v35; // xmm10
  __m128i v36; // xmm13
  __m128i v37; // xmm11
  __m128i si128; // xmm4
  __m128i v39; // xmm6
  __m128i v40; // xmm8
  __m128i v41; // xmm7
  __m128i v42; // xmm0
  __m128i v43; // xmm2
  __m128i v44; // xmm8
  __m128i v45; // xmm5
  __m128i v46; // xmm6
  __m128i v47; // xmm5
  __m128i v48; // xmm6
  __m128i v49; // xmm2
  __m128i v50; // xmm8
  __m128i v51; // xmm1
  __m128i v52; // xmm15
  __m128i v53; // xmm14
  __m128i v54; // xmm5
  __m128i v55; // xmm0
  __m128i v56; // xmm15
  __m128i v57; // xmm1
  __m128i v58; // xmm4
  __m128i v59; // xmm3
  __m128i v60; // xmm0
  __m128i v61; // xmm2
  __m128i v62; // xmm7
  __m128i v63; // xmm6
  __m128i v64; // xmm1
  __m128i v65; // xmm0
  __m128i v66; // xmm2
  __m128i v67; // xmm3
  __m128i v68; // xmm14
  __m128i v69; // xmm6
  __m128i v70; // xmm7
  __m128i v71; // xmm0
  __m128i v72; // xmm2
  __m128i v73; // xmm1
  __m128i v74; // xmm14
  __m128i v75; // xmm3
  __m128i v76; // xmm6
  __m128i v77; // xmm15
  __m128i v78; // xmm7
  __m128i v79; // xmm4
  __m128i v80; // xmm5
  __m128i v81; // xmm8
  __m128i v82; // xmm5
  __m128i v83; // xmm0
  __m128i v84; // xmm2
  __m128i v85; // xmm13
  __m128i v86; // xmm15
  __m128i v87; // xmm9
  __m128i v88; // xmm13
  __m128i v89; // xmm0
  __m128i v90; // xmm3
  __m128i v91; // xmm4
  __m128i v92; // xmm14
  __m128i v93; // xmm12
  __m128i v94; // xmm8
  __m128i v95; // xmm5
  __m128i v96; // xmm0
  __m128i v97; // xmm10
  __m128i v98; // xmm1
  __m128i v99; // xmm15
  __m128i v100; // xmm0
  __m128i v101; // xmm8
  __m128i v102; // xmm14
  __m128i v103; // xmm2
  __m128i v104; // xmm3
  __m128i v105; // xmm11
  __m128i v106; // xmm5
  __m128i v107; // xmm4
  __m128i v108; // xmm7
  __m128i v109; // xmm5
  __m128i v110; // xmm6
  __m128i v111; // xmm7
  __m128i v112; // xmm8
  __m128i v113; // xmm12
  __m128i v114; // xmm2
  __m128i v115; // xmm12
  __m128i v116; // xmm9
  __m128i v117; // xmm3
  __m128i v118; // xmm11
  __m128i v119; // xmm1
  __m128i v120; // xmm8
  __m128i v121; // xmm0
  __m128i v122; // xmm12
  __m128i v123; // xmm11
  __m128i v124; // xmm4
  __m128i v125; // xmm3
  __m128i v126; // xmm14
  __m128i v127; // xmm9
  __m128i v128; // xmm2
  __m128i v130; // xmm12
  __m128i v131; // xmm1
  __m128i v132; // xmm0
  __m128i v133; // xmm4
  __m128i v134; // xmm9
  __m128i v135; // xmm3
  __m128i v136; // xmm4
  __m128i v137; // xmm2
  __m128i v138; // xmm0
  __m128i v139; // xmm1
  _QWORD *v140; // rcx
  __m128i v141; // xmm3
  __m128i v142; // xmm9
  __m128i v143; // xmm2
  __m128i v144; // xmm4
  _QWORD *v145; // rcx
  _QWORD *v146; // rcx
  _QWORD *v147; // rcx
  _QWORD *v148; // rcx
  _QWORD *v149; // rcx
  __m128i v150; // [rsp+0h] [rbp-128h] BYREF
  __m128i v151; // [rsp+10h] [rbp-118h] BYREF
  __m128i v152; // [rsp+20h] [rbp-108h] BYREF
  __m128i v153; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v154; // [rsp+40h] [rbp-E8h]
  __m128i v155; // [rsp+50h] [rbp-D8h] BYREF
  __m128i v156; // [rsp+60h] [rbp-C8h]
  __m128i v157; // [rsp+70h] [rbp-B8h]

  v3 = _mm_loadu_si128(a3 + 1);
  v4 = _mm_loadu_si128(a3 + 5);
  v5 = _mm_loadu_si128(a3 + 3);
  v6 = _mm_loadu_si128(a3);
  v7 = _mm_loadu_si128(a3 + 2);
  v8 = _mm_unpackhi_epi16(v7, a3[6]);
  v9 = _mm_unpacklo_epi16(v7, a3[6]);
  v10 = _mm_loadu_si128(a3 + 7);
  v156 = _mm_madd_epi16(v8, (__m128i)xmmword_140279960);
  v11 = v10;
  v12 = _mm_add_epi16(v10, v3);
  v13 = _mm_add_epi16(_mm_loadu_si128(a3 + 4), v6);
  v14 = _mm_unpacklo_epi16(v10, v5);
  v15 = _mm_sub_epi16(v6, a3[4]);
  v16 = v9;
  v17 = _mm_madd_epi16(v14, (__m128i)xmmword_140279940);
  v153 = _mm_srai_epi32(_mm_unpacklo_epi16((__m128i)0LL, v13), 4u);
  v155 = _mm_srai_epi32(_mm_unpacklo_epi16((__m128i)0LL, v15), 4u);
  v18 = _mm_srai_epi32(_mm_unpackhi_epi16((__m128i)0LL, v13), 4u);
  v19 = _mm_unpackhi_epi16((__m128i)0LL, v15);
  v152 = _mm_madd_epi16(v9, (__m128i)xmmword_1402791F0);
  v20 = _mm_unpacklo_epi16(v4, v3);
  v154 = _mm_madd_epi16(v8, (__m128i)xmmword_1402791F0);
  v21 = _mm_unpackhi_epi16(v4, v3);
  v22 = _mm_add_epi16(v4, v5);
  v23 = _mm_unpacklo_epi16(v12, v22);
  v24 = _mm_unpackhi_epi16(v11, v5);
  v25 = _mm_unpackhi_epi16(v12, v22);
  v26 = _mm_madd_epi16(v25, (__m128i)xmmword_140279230);
  v27 = _mm_madd_epi16(v25, (__m128i)xmmword_140279950);
  v151 = v18;
  v28 = v23;
  v29 = _mm_madd_epi16(v23, (__m128i)xmmword_140279950);
  v30 = _mm_madd_epi16(v28, (__m128i)xmmword_140279230);
  v31 = _mm_add_epi32(_mm_madd_epi16(v24, (__m128i)xmmword_140279940), v26);
  v157 = _mm_madd_epi16(v16, (__m128i)xmmword_140279960);
  v32 = _mm_add_epi32(_mm_madd_epi16(v21, (__m128i)xmmword_140279980), v27);
  v33 = _mm_srai_epi32(v19, 4u);
  v34 = _mm_add_epi32(_mm_madd_epi16(v20, (__m128i)xmmword_140279980), v29);
  v35 = _mm_add_epi32(_mm_madd_epi16(v14, (__m128i)xmmword_140279210), v29);
  v36 = _mm_add_epi32(v17, v30);
  v37 = _mm_add_epi32(_mm_madd_epi16(v24, (__m128i)xmmword_140279210), v27);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1402791A0);
  v39 = _mm_add_epi32(_mm_madd_epi16(v20, (__m128i)xmmword_140279220), v30);
  v40 = _mm_add_epi32(_mm_add_epi32(_mm_load_si128(&v153), v152), si128);
  v41 = _mm_add_epi32(_mm_madd_epi16(v21, (__m128i)xmmword_140279220), v26);
  v42 = _mm_add_epi32(_mm_add_epi32(_mm_load_si128(&v151), v154), si128);
  v43 = _mm_srai_epi32(_mm_add_epi32(v40, v39), 0xAu);
  v44 = _mm_sub_epi32(v40, v39);
  v45 = _mm_load_si128(&v155);
  v46 = _mm_sub_epi32(v45, v157);
  v47 = _mm_add_epi32(_mm_add_epi32(v45, v157), si128);
  v150 = _mm_packs_epi32(v43, _mm_srai_epi32(_mm_add_epi32(v42, v41), 0xAu));
  v48 = _mm_add_epi32(v46, si128);
  v49 = _mm_add_epi32(_mm_sub_epi32(_mm_load_si128(&v153), v152), (__m128i)xmmword_1402791A0);
  v50 = _mm_packs_epi32(_mm_srai_epi32(v44, 0xAu), _mm_srai_epi32(_mm_sub_epi32(v42, v41), 0xAu));
  v51 = _mm_add_epi32(_mm_add_epi32(v33, v156), si128);
  v52 = _mm_add_epi32(_mm_sub_epi32(v33, v156), si128);
  v53 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(v47, v35), 0xAu), _mm_srai_epi32(_mm_add_epi32(v51, v37), 0xAu));
  v54 = _mm_packs_epi32(_mm_srai_epi32(_mm_sub_epi32(v47, v35), 0xAu), _mm_srai_epi32(_mm_sub_epi32(v51, v37), 0xAu));
  v55 = _mm_add_epi32(v52, v32);
  v56 = _mm_sub_epi32(v52, v32);
  v57 = _mm_add_epi32(_mm_sub_epi32(_mm_load_si128(&v151), v154), (__m128i)xmmword_1402791A0);
  v58 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(v48, v34), 0xAu), _mm_srai_epi32(v55, 0xAu));
  v59 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(v49, v36), 0xAu), _mm_srai_epi32(_mm_add_epi32(v57, v31), 0xAu));
  v60 = _mm_load_si128(&v150);
  v61 = _mm_packs_epi32(_mm_srai_epi32(_mm_sub_epi32(v49, v36), 0xAu), _mm_srai_epi32(_mm_sub_epi32(v57, v31), 0xAu));
  v62 = _mm_unpacklo_epi16(v60, v61);
  v63 = _mm_packs_epi32(_mm_srai_epi32(_mm_sub_epi32(v48, v34), 0xAu), _mm_srai_epi32(v56, 0xAu));
  v150 = _mm_unpackhi_epi16(v60, v61);
  v64 = _mm_unpacklo_epi16(v59, v50);
  v65 = _mm_unpacklo_epi16(v58, v54);
  v66 = _mm_unpacklo_epi16(v53, v63);
  v67 = _mm_unpackhi_epi16(v59, v50);
  v68 = _mm_unpackhi_epi16(v53, v63);
  v69 = _mm_unpacklo_epi16(v62, v65);
  v70 = _mm_unpackhi_epi16(v62, v65);
  v71 = _mm_unpacklo_epi16(v66, v64);
  v72 = _mm_unpackhi_epi16(v66, v64);
  v73 = _mm_unpacklo_epi16(v68, v67);
  v74 = _mm_unpackhi_epi16(v68, v67);
  v75 = _mm_unpacklo_epi16(v69, v71);
  v76 = _mm_unpackhi_epi16(v69, v71);
  v77 = _mm_unpacklo_epi16(v70, v72);
  v78 = _mm_unpackhi_epi16(v70, v72);
  v79 = _mm_unpackhi_epi16(v58, v54);
  v80 = _mm_load_si128(&v150);
  v81 = _mm_unpackhi_epi16(v80, v79);
  v82 = _mm_unpacklo_epi16(v80, v79);
  v83 = _mm_unpacklo_epi16(v81, v74);
  v84 = _mm_unpacklo_epi16(v82, v73);
  v85 = _mm_unpacklo_epi16(v77, v83);
  v86 = _mm_unpackhi_epi16(v77, v83);
  v87 = _mm_madd_epi16(v85, (__m128i)xmmword_140279960);
  v88 = _mm_madd_epi16(v85, (__m128i)xmmword_1402791F0);
  v89 = _mm_add_epi16(v84, v75);
  v90 = _mm_sub_epi16(v75, v84);
  v91 = _mm_unpackhi_epi16(v81, v74);
  v92 = _mm_unpackhi_epi16((__m128i)0LL, v89);
  v93 = _mm_unpackhi_epi16(v82, v73);
  v153 = _mm_srai_epi32(_mm_unpacklo_epi16((__m128i)0LL, v90), 4u);
  v94 = _mm_add_epi16(v91, v76);
  v152 = _mm_srai_epi32(_mm_unpacklo_epi16((__m128i)0LL, v89), 4u);
  v95 = _mm_add_epi16(v93, v78);
  v151 = _mm_srai_epi32(_mm_unpackhi_epi16((__m128i)0LL, v90), 4u);
  v96 = _mm_unpacklo_epi16(v94, v95);
  v97 = _mm_madd_epi16(v86, (__m128i)xmmword_140279960);
  v98 = _mm_madd_epi16(v96, (__m128i)xmmword_140279230);
  v99 = _mm_madd_epi16(v86, (__m128i)xmmword_1402791F0);
  v100 = _mm_madd_epi16(v96, (__m128i)xmmword_140279950);
  v101 = _mm_unpackhi_epi16(v94, v95);
  v102 = _mm_srai_epi32(v92, 4u);
  v103 = _mm_madd_epi16(v101, (__m128i)xmmword_140279230);
  v104 = _mm_unpacklo_epi16(v91, v78);
  v105 = _mm_unpacklo_epi16(v93, v76);
  v106 = _mm_unpackhi_epi16(v91, v78);
  v107 = _mm_madd_epi16(v106, (__m128i)xmmword_140279210);
  v108 = _mm_unpackhi_epi16(v93, v76);
  v150 = _mm_madd_epi16(v101, (__m128i)xmmword_140279950);
  v109 = _mm_add_epi32(_mm_madd_epi16(v106, (__m128i)xmmword_140279940), v103);
  v154 = _mm_add_epi32(_mm_madd_epi16(v108, (__m128i)xmmword_140279220), v103);
  v110 = _mm_add_epi32(_mm_madd_epi16(v104, (__m128i)xmmword_140279940), v98);
  v111 = _mm_add_epi32(_mm_madd_epi16(v108, (__m128i)xmmword_140279980), v150);
  v112 = v105;
  v113 = _mm_load_si128(&v153);
  v114 = _mm_sub_epi32(v113, v87);
  v115 = _mm_add_epi32(v113, v87);
  v155 = _mm_add_epi32(v107, v150);
  v116 = _mm_sub_epi32(_mm_load_si128(&v151), v97);
  v156 = _mm_add_epi32(_mm_madd_epi16(v104, (__m128i)xmmword_140279210), v100);
  v117 = _mm_load_si128(&v151);
  v118 = _mm_add_epi32(_mm_madd_epi16(v105, (__m128i)xmmword_140279220), v98);
  v119 = _mm_load_si128((const __m128i *)&xmmword_1402791E0);
  v120 = _mm_add_epi32(_mm_madd_epi16(v112, (__m128i)xmmword_140279980), v100);
  v121 = _mm_load_si128(&v152);
  v151 = _mm_add_epi32(v116, v119);
  v122 = _mm_add_epi32(v115, v119);
  v157 = v118;
  v153 = _mm_add_epi32(v114, v119);
  v152 = _mm_add_epi32(_mm_sub_epi32(v121, v88), v119);
  v123 = _mm_add_epi32(_mm_add_epi32(v121, v88), v119);
  v124 = _mm_add_epi32(_mm_add_epi32(v102, v99), v119);
  v125 = _mm_add_epi32(_mm_add_epi32(v117, v97), v119);
  v126 = _mm_add_epi32(_mm_sub_epi32(v102, v99), v119);
  v127 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(v123, v157), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(v124, v154), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(v122, v156), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(v125, v155), 0x11u)));
  v128 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(v153, v120), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(_mm_load_si128(&v151), v111), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(_mm_load_si128(&v152), v110), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(v126, v109), 0x11u)));
  v130 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(v122, v156), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(v125, v155), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(v123, v157), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(v124, v154), 0x11u)));
  v131 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(_mm_load_si128(&v152), v110), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(v126, v109), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(_mm_load_si128(&v153), v120), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(_mm_load_si128(&v151), v111), 0x11u)));
  v132 = _mm_unpacklo_epi8(v128, v130);
  v133 = _mm_unpacklo_epi8(v127, v131);
  v134 = _mm_unpackhi_epi8(v127, v131);
  v135 = _mm_unpacklo_epi8(v133, v132);
  v136 = _mm_unpackhi_epi8(v133, v132);
  v137 = _mm_unpackhi_epi8(v128, v130);
  v138 = _mm_unpacklo_epi8(v134, v137);
  v139 = _mm_unpacklo_epi8(v135, v138);
  *a1 = v139.m128i_i64[0];
  v140 = (_QWORD *)((char *)a1 + a2);
  v141 = _mm_unpackhi_epi8(v135, v138);
  v142 = _mm_unpackhi_epi8(v134, v137);
  v143 = _mm_unpacklo_epi8(v136, v142);
  v144 = _mm_unpackhi_epi8(v136, v142);
  *v140 = _mm_shuffle_epi32(v139, 78).m128i_u64[0];
  v145 = (_QWORD *)((char *)v140 + a2);
  *v145 = v141.m128i_i64[0];
  v146 = (_QWORD *)((char *)v145 + a2);
  *v146 = _mm_shuffle_epi32(v141, 78).m128i_u64[0];
  v147 = (_QWORD *)((char *)v146 + a2);
  *v147 = v143.m128i_i64[0];
  v148 = (_QWORD *)((char *)v147 + a2);
  *v148 = _mm_shuffle_epi32(v143, 78).m128i_u64[0];
  v149 = (_QWORD *)((char *)v148 + a2);
  *v149 = v144.m128i_i64[0];
  *(_QWORD *)((char *)v149 + a2) = _mm_shuffle_epi32(v144, 78).m128i_u64[0];
  return a2;
}

