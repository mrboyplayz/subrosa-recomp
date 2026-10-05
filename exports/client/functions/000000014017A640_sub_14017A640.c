/* Address: 0x14017a640 | Name: sub_14017A640 | Size: 3354 bytes */
__int64 __fastcall sub_14017A640(
        __int64 a1,
        float a2,
        unsigned int a3,
        int a4,
        unsigned __int8 a5,
        float a6,
        void *a7,
        int *a8,
        unsigned int *a9,
        signed int *a10)
{
  float v10; // xmm13_4
  int v14; // ebx
  int v15; // eax
  int v16; // r11d
  int v17; // r8d
  int v18; // edx
  int v19; // eax
  __int64 v20; // r9
  __m128 v21; // xmm0
  __m128d v22; // xmm1
  int v23; // r10d
  __m128 v24; // xmm0
  __m128d v25; // xmm1
  __m128 v26; // xmm0
  int v27; // r9d
  __m128d v28; // xmm1
  int v29; // r8d
  __m128 v30; // xmm0
  __m128d v31; // xmm1
  int v32; // eax
  signed int v33; // r9d
  unsigned int v34; // r10d
  int v35; // ecx
  unsigned int v36; // esi
  int v37; // ebx
  signed int v38; // r12d
  float v39; // xmm6_4
  __int64 v40; // r13
  void *v41; // rbx
  __int64 v42; // r14
  __int64 v43; // rax
  _BYTE *v44; // rdi
  float *v45; // r15
  __int64 v46; // r9
  __int64 v47; // r8
  __int64 v48; // rcx
  char v49; // al
  float v50; // xmm2_4
  float v51; // xmm1_4
  float v52; // xmm3_4
  float v53; // xmm0_4
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm0_4
  float v57; // xmm2_4
  float v58; // xmm0_4
  float v59; // xmm2_4
  __int64 v60; // rcx
  __int64 v61; // rdx
  signed int v62; // r9d
  float v63; // xmm12_4
  int v64; // eax
  __int64 v65; // r8
  int v66; // esi
  __m128i v67; // xmm10
  _BYTE *v68; // r12
  float v69; // xmm10_4
  float v70; // xmm11_4
  float v71; // xmm7_4
  float v72; // xmm6_4
  __int64 v73; // rbx
  __int64 v74; // r8
  int v75; // r13d
  float v76; // xmm14_4
  float v77; // xmm15_4
  float v78; // xmm8_4
  float v79; // xmm11_4
  float v80; // xmm1_4
  char v81; // al
  float v82; // xmm9_4
  float v83; // xmm6_4
  float v84; // xmm10_4
  float v85; // xmm8_4
  float v86; // xmm9_4
  float v87; // xmm6_4
  float v88; // xmm4_4
  float v89; // xmm13_4
  float v90; // xmm13_4
  float v91; // xmm2_4
  float v92; // xmm1_4
  float v93; // xmm3_4
  float v94; // xmm5_4
  float v95; // xmm4_4
  float v96; // xmm3_4
  float v97; // xmm6_4
  float v98; // xmm10_4
  float v99; // xmm9_4
  int v100; // eax
  float v101; // xmm6_4
  float v102; // xmm1_4
  float v103; // xmm12_4
  float v104; // xmm13_4
  float v105; // xmm9_4
  float v106; // xmm11_4
  float v107; // xmm10_4
  float v108; // xmm4_4
  float v109; // xmm3_4
  float v110; // xmm6_4
  float v111; // xmm4_4
  float v112; // xmm3_4
  float v113; // xmm1_4
  float v114; // xmm2_4
  float v115; // xmm4_4
  float v116; // xmm4_4
  float v117; // xmm5_4
  float v118; // xmm3_4
  float v119; // xmm5_4
  float v120; // xmm5_4
  float v121; // xmm4_4
  float v122; // xmm3_4
  float v123; // xmm5_4
  float v124; // xmm7_4
  float v125; // xmm7_4
  __int64 v127; // [rsp+0h] [rbp-100h] BYREF
  float v128; // [rsp+20h] [rbp-E0h]
  float v129; // [rsp+24h] [rbp-DCh]
  float v130; // [rsp+28h] [rbp-D8h]
  float v131; // [rsp+2Ch] [rbp-D4h]
  float v132; // [rsp+30h] [rbp-D0h]
  float v133; // [rsp+34h] [rbp-CCh]
  float v134; // [rsp+38h] [rbp-C8h]
  signed int v135; // [rsp+3Ch] [rbp-C4h]
  signed int v136; // [rsp+40h] [rbp-C0h]
  void *Block; // [rsp+48h] [rbp-B8h] BYREF
  int v138; // [rsp+50h] [rbp-B0h]
  float v139; // [rsp+54h] [rbp-ACh]
  unsigned int v140; // [rsp+5Ch] [rbp-A4h]
  float v141; // [rsp+60h] [rbp-A0h]
  float v142; // [rsp+64h] [rbp-9Ch]
  float v143; // [rsp+68h] [rbp-98h]
  __int64 v144; // [rsp+70h] [rbp-90h]
  __int64 v145; // [rsp+78h] [rbp-88h]
  __int64 v146; // [rsp+80h] [rbp-80h] BYREF
  __int128 v147; // [rsp+88h] [rbp-78h]
  __int128 v148; // [rsp+98h] [rbp-68h]
  __int64 v149; // [rsp+A8h] [rbp-58h]
  int v150; // [rsp+B0h] [rbp-50h]
  float v151; // [rsp+B8h] [rbp-48h] BYREF
  float v152; // [rsp+BCh] [rbp-44h]
  float v153; // [rsp+C0h] [rbp-40h]
  __int64 v154; // [rsp+C8h] [rbp-38h]

  v10 = a2;
  Block = a7;
  v130 = a2;
  if ( a2 != 0.0 )
  {
    v14 = 0;
    if ( *(_DWORD *)(a1 + 76) )
    {
      v146 = 1;
      v149 = 0;
      v150 = 0;
      v147 = 0;
      v148 = 0;
      v15 = sub_140182AD0(a1, a3, (unsigned int)&v146, a4);
      v16 = 0;
      if ( v15 )
      {
        v16 = HIDWORD(v148);
        v14 = v148;
      }
      v17 = 0;
      if ( v15 )
        v17 = DWORD1(v148);
      v18 = 0;
      if ( v15 )
        v18 = DWORD2(v148);
    }
    else
    {
      v19 = sub_14017DA60(a1, a3);
      if ( v19 < 0 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v127 ^ v154);
      v20 = *(_QWORD *)(a1 + 8);
      v16 = (__int16)((*(unsigned __int8 *)(v20 + v19 + 8) << 8) + *(unsigned __int8 *)(v20 + v19 + 9));
      v14 = (__int16)(*(unsigned __int8 *)(v20 + v19 + 3) + (*(unsigned __int8 *)(v20 + v19 + 2) << 8));
      v17 = (__int16)((*(unsigned __int8 *)(v20 + v19 + 6) << 8) + *(unsigned __int8 *)(v20 + v19 + 7));
      v18 = (__int16)(*(unsigned __int8 *)(v20 + v19 + 5) + (*(unsigned __int8 *)(v20 + v19 + 4) << 8));
    }
    v21 = (__m128)COERCE_UNSIGNED_INT((float)v14);
    v21.m128_f32[0] = v21.m128_f32[0] * a2;
    v22 = _mm_cvtps_pd(v21);
    if ( (double)(int)v22.m128d_f64[0] != v22.m128d_f64[0] )
      v22.m128d_f64[0] = (double)((int)v22.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v22, v22)) & 1));
    v23 = (int)v22.m128d_f64[0];
    v24 = (__m128)COERCE_UNSIGNED_INT((float)-v16);
    v24.m128_f32[0] = v24.m128_f32[0] * v10;
    v25 = _mm_cvtps_pd(v24);
    if ( (double)(int)v25.m128d_f64[0] != v25.m128d_f64[0] )
      v25.m128d_f64[0] = (double)((int)v25.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v25, v25)) & 1));
    v26 = (__m128)COERCE_UNSIGNED_INT((float)v17);
    v27 = (int)v25.m128d_f64[0];
    v26.m128_f32[0] = v26.m128_f32[0] * v10;
    v28 = _mm_cvtps_pd(v26);
    if ( (double)(int)v28.m128d_f64[0] != v28.m128d_f64[0] )
      v28.m128d_f64[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v28, v28)) & 1) + (int)v28.m128d_f64[0]);
    v29 = (int)v28.m128d_f64[0];
    v30 = (__m128)COERCE_UNSIGNED_INT((float)-v18);
    v30.m128_f32[0] = v30.m128_f32[0] * v10;
    v31 = _mm_cvtps_pd(v30);
    if ( (double)(int)v31.m128d_f64[0] != v31.m128d_f64[0] )
      v31.m128d_f64[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v31, v31)) & 1) + (int)v31.m128d_f64[0]);
    v32 = (int)v31.m128d_f64[0];
    if ( v23 != v29 && v27 != v32 )
    {
      v33 = v27 - a4;
      v136 = a4 + v32;
      v34 = v23 - a4;
      v35 = a4 + v29;
      v140 = v34;
      v135 = v33;
      v36 = a4 + v29 - v34;
      v138 = v35;
      v37 = v136 - v33;
      if ( Block )
        *(_DWORD *)Block = v36;
      if ( a8 )
        *a8 = v37;
      if ( a9 )
        *a9 = v34;
      v38 = v33;
      if ( a10 )
        *a10 = v33;
      v39 = -v10;
      v139 = -v10;
      v40 = (int)sub_14017B360(a1, a3, &Block);
      v145 = j__malloc_base((int)(v36 * v37));
      v41 = (void *)v145;
      v42 = v40;
      v43 = j__malloc_base(4 * v40);
      v44 = Block;
      v45 = (float *)v43;
      if ( (int)v40 > 0 )
      {
        v46 = 0;
        v47 = 14LL * ((int)v40 - 1);
        v48 = 0;
        do
        {
          v49 = v44[v48 + 12];
          if ( v49 == 2 )
          {
            v50 = (float)((float)*(__int16 *)&v44[v47 + 2] * v39) - (float)((float)*(__int16 *)&v44[v48 + 2] * v39);
            v51 = (float)((float)*(__int16 *)&v44[v47] * v10) - (float)((float)*(__int16 *)&v44[v48] * v10);
            v52 = fsqrt((float)(v50 * v50) + (float)(v51 * v51));
            if ( v52 == 0.0 )
              goto LABEL_38;
            v53 = 1.0 / v52;
          }
          else
          {
            if ( v49 != 3
              || (v54 = (float)*(__int16 *)&v44[v48 + 4] * v10,
                  v55 = (float)((float)((float)*(__int16 *)&v44[v48] * v10) - (float)(v54 + v54))
                      + (float)((float)*(__int16 *)&v44[v47] * v10),
                  v56 = (float)*(__int16 *)&v44[v48 + 6] * v39,
                  v57 = (float)((float)*(__int16 *)&v44[v48 + 2] * v39) - (float)(v56 + v56),
                  v58 = (float)*(__int16 *)&v44[v47 + 2] * v39,
                  v59 = (float)((float)(v57 + v58) * (float)(v57 + v58)) + (float)(v55 * v55),
                  v59 == 0.0) )
            {
LABEL_38:
              v53 = 0.0;
              goto LABEL_39;
            }
            v53 = 1.0 / v59;
          }
LABEL_39:
          v47 = v48;
          v48 += 14;
          v45[v46++] = v53;
        }
        while ( v46 < v40 );
      }
      if ( v38 >= v136 )
        goto LABEL_99;
      v60 = (__int64)v41;
      v61 = v140;
      v62 = v136;
      v63 = v152;
      v144 = (int)v36;
      v64 = v138;
      v65 = (int)v36;
      Block = v41;
LABEL_42:
      v66 = v61;
      if ( (int)v61 >= v64 )
        goto LABEL_98;
      v67 = _mm_cvtsi32_si128(v38);
      v68 = (_BYTE *)v60;
      v69 = _mm_cvtepi32_ps(v67).m128_f32[0] + 0.5;
      v70 = (float)a5;
      v129 = v69;
      v143 = 1.0 / v10;
      v142 = v69 / v39;
      v141 = v70;
LABEL_44:
      v71 = 999999.0;
      v72 = (float)v66 + 0.5;
      v128 = v72;
      v73 = 0;
      v75 = sub_14017FB20(v60, v61, (unsigned int)v40, v44);
      if ( v42 <= 0 )
        goto LABEL_91;
      while ( 1 )
      {
        v61 = 14 * v73;
        v60 = (unsigned int)*(__int16 *)&v44[14 * v73 + 2];
        v76 = (float)*(__int16 *)&v44[14 * v73] * v10;
        v77 = (float)(int)v60 * v139;
        v78 = v76 - v72;
        v79 = v77 - v69;
        v80 = (float)(v78 * v78) + (float)(v79 * v79);
        if ( v80 < (float)(v71 * v71) )
          v71 = fsqrt(v80);
        v81 = v44[v61 + 12];
        if ( v81 == 2 )
        {
          v82 = (float)((float)*(__int16 *)&v44[v61 - 14] * v10) - v76;
          v83 = (float)((float)*(__int16 *)&v44[v61 - 12] * v139) - v77;
          v84 = fabs((float)(v79 * v82) - (float)(v83 * v78)) * v45[v73];
          if ( !v73 )
            sub_14023E640(L"i != 0", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 4446);
          if ( v84 >= v71
            || (v85 = (float)((float)(v78 * v82) + (float)(v79 * v83))
                    / (float)((float)(v83 * v83) + (float)(v82 * v82)),
                v85 > -0.0) )
          {
            v72 = v128;
          }
          else
          {
            v72 = v128;
            if ( v85 >= -1.0 )
              v71 = v84;
          }
          goto LABEL_88;
        }
        if ( v81 != 3 )
          goto LABEL_89;
        v60 = 14 * v73;
        v86 = (float)*(__int16 *)&v44[14 * v73 - 14] * v10;
        v87 = (float)*(__int16 *)&v44[14 * v73 - 12] * v139;
        v88 = (float)*(__int16 *)&v44[v61 + 4] * v10;
        v89 = (float)*(__int16 *)&v44[v61 + 6];
        v132 = v86;
        v90 = v89 * v139;
        v131 = v87;
        v133 = v88;
        v91 = fmaxf(v88, v76);
        v134 = v90;
        v92 = fminf(v90, v77);
        v93 = fmaxf(v90, v77);
        if ( v128 > (float)(fminf(fminf(v88, v76), v86) - v71)
          && v128 < (float)(fmaxf(v91, v86) + v71)
          && v69 > (float)(fminf(v92, v87) - v71)
          && v69 < (float)(fmaxf(v93, v87) + v71) )
        {
          break;
        }
        v72 = v128;
        v10 = v130;
LABEL_89:
        if ( ++v73 >= v42 )
        {
          v70 = v141;
LABEL_91:
          if ( !v75 )
            v71 = -v71;
          v124 = (float)(v71 * a6) + v70;
          if ( v124 >= 0.0 )
            v125 = fminf(v124, 255.0);
          else
            v125 = 0.0;
          ++v66;
          LODWORD(v40) = v42;
          *v68++ = (int)v125;
          v64 = v138;
          if ( v66 >= v138 )
          {
            v39 = v139;
            v38 = v135;
            v60 = (__int64)Block;
            v61 = v140;
            v65 = v144;
            v62 = v136;
LABEL_98:
            ++v38;
            v60 += v65;
            v135 = v38;
            Block = (void *)v60;
            if ( v38 >= v62 )
            {
LABEL_99:
              free(v45);
              free(v44);
              return MEMORY[0x1401F8B20]((unsigned __int64)&v127 ^ v154);
            }
            goto LABEL_42;
          }
          goto LABEL_44;
        }
      }
      v94 = v88 - v76;
      v95 = (float)(v76 - (float)(v88 + v88)) + v86;
      v96 = (float)(v77 - (float)(v90 + v90)) + v87;
      v97 = (float)(v94 * v78) + (float)((float)(v90 - v77) * v79);
      v98 = (float)((float)((float)(v90 - v77) * v96) + (float)(v94 * v95)) * 3.0;
      v99 = (float)((float)((float)(v79 * v96) + (float)(v78 * v95)) + (float)(v94 * v94))
          + (float)((float)((float)(v94 * v94) + (float)((float)(v90 - v77) * (float)(v90 - v77)))
                  + (float)((float)(v90 - v77) * (float)(v90 - v77)));
      if ( v45[v73] == 0.0 )
      {
        if ( v98 == 0.0 )
        {
          if ( v99 != 0.0 )
          {
            v100 = 1;
            v101 = -(float)(v97 / v99);
            v151 = v101;
LABEL_67:
            v104 = v134;
            v105 = v131;
            v106 = v133;
            v107 = v132;
            if ( v101 >= 0.0 && v101 <= 1.0 )
            {
              v108 = v101 + v101;
              v109 = 1.0 - v101;
              v110 = v101 * v101;
              v111 = v108 * v109;
              v112 = v109 * v109;
              v113 = v110 * v131;
              v114 = (float)(v111 * v134) + (float)(v112 * v77);
              v115 = (float)((float)(v111 * v133) + (float)(v112 * v76)) + (float)(v110 * v132);
              v72 = v128;
              v116 = (float)((float)(v115 - v128) * (float)(v115 - v128))
                   + (float)((float)((float)(v114 + v113) - v129) * (float)((float)(v114 + v113) - v129));
              if ( v116 < (float)(v71 * v71) )
                v71 = fsqrt(v116);
LABEL_73:
              if ( v100 >= 2 && v63 >= 0.0 && v63 <= 1.0 )
              {
                v117 = (float)(v63 + v63) * (float)(1.0 - v63);
                v118 = (float)(v117 * v104) + (float)((float)((float)(1.0 - v63) * (float)(1.0 - v63)) * v77);
                v119 = (float)((float)((float)((float)((float)(v117 * v106)
                                                     + (float)((float)((float)(1.0 - v63) * (float)(1.0 - v63)) * v76))
                                             + (float)((float)(v63 * v63) * v107))
                                     - v72)
                             * (float)((float)((float)((float)(v117 * v106)
                                                     + (float)((float)((float)(1.0 - v63) * (float)(1.0 - v63)) * v76))
                                             + (float)((float)(v63 * v63) * v107))
                                     - v72))
                     + (float)((float)((float)(v118 + (float)((float)(v63 * v63) * v105)) - v129)
                             * (float)((float)(v118 + (float)((float)(v63 * v63) * v105)) - v129));
                if ( v119 < (float)(v71 * v71) )
                  v71 = fsqrt(v119);
              }
              if ( v100 >= 3 && v153 >= 0.0 && v153 <= 1.0 )
              {
                v120 = (float)(v153 + v153) * (float)(1.0 - v153);
                v121 = (float)(1.0 - v153) * (float)(1.0 - v153);
                v122 = v120 * v104;
                v10 = v130;
                v123 = (float)((float)((float)((float)((float)(v120 * v106) + (float)(v121 * v76))
                                             + (float)((float)(v153 * v153) * v107))
                                     - v72)
                             * (float)((float)((float)((float)(v120 * v106) + (float)(v121 * v76))
                                             + (float)((float)(v153 * v153) * v107))
                                     - v72))
                     + (float)((float)((float)((float)(v122 + (float)(v121 * v77)) + (float)((float)(v153 * v153) * v105))
                                     - v129)
                             * (float)((float)((float)(v122 + (float)(v121 * v77)) + (float)((float)(v153 * v153) * v105))
                                     - v129));
                if ( v123 < (float)(v71 * v71) )
                  v71 = fsqrt(v123);
                goto LABEL_88;
              }
LABEL_87:
              v10 = v130;
LABEL_88:
              v69 = v129;
              goto LABEL_89;
            }
LABEL_72:
            v72 = v128;
            goto LABEL_73;
          }
        }
        else
        {
          v102 = (float)(v99 * v99) - (float)((float)(v98 * 4.0) * v97);
          if ( v102 >= 0.0 )
          {
            v103 = fsqrt(v102);
            v100 = 2;
            v101 = (float)((float)-v99 - v103) * (float)(0.5 / v98);
            v63 = (float)(v103 - v99) * (float)(0.5 / v98);
            v151 = v101;
            v152 = v63;
            goto LABEL_67;
          }
        }
        v72 = v128;
        goto LABEL_87;
      }
      v100 = sub_140183820(v60, v61, v74, &v151);
      v63 = v152;
      if ( v100 >= 1 )
      {
        v101 = v151;
        goto LABEL_67;
      }
      v105 = v131;
      v107 = v132;
      v106 = v133;
      v104 = v134;
      goto LABEL_72;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v127 ^ v154);
}

