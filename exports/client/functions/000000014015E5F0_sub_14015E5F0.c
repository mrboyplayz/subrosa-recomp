/* Address: 0x14015e5f0 | Name: sub_14015E5F0 | Size: 4656 bytes */
__int64 __fastcall sub_14015E5F0(
        _QWORD *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  unsigned int v8; // r12d
  unsigned int v10; // r15d
  int v11; // eax
  _QWORD *v12; // r8
  int v13; // ebx
  int v14; // r13d
  int v15; // r14d
  __int64 v17; // rax
  _QWORD *v18; // r11
  int v19; // r8d
  unsigned int v20; // r10d
  int v21; // r9d
  int v22; // ecx
  unsigned int v23; // r9d
  __int64 v24; // rax
  const char *v25; // rdx
  unsigned int v26; // edx
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rbp
  unsigned __int8 *v31; // rdi
  unsigned __int8 *v32; // r11
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // r10
  unsigned __int8 *v36; // rdx
  __int64 v37; // r9
  __int64 v38; // r8
  unsigned __int8 v39; // al
  unsigned __int8 v40; // al
  unsigned __int8 v41; // cl
  unsigned __int8 *v42; // rdi
  unsigned __int8 *v43; // rsi
  unsigned __int64 v44; // rbx
  unsigned __int8 *v45; // r12
  unsigned __int8 *v46; // kr08_8
  unsigned int v47; // edx
  __int64 v48; // r9
  _BYTE *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r10
  _BYTE *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r11
  __int64 v55; // r10
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  unsigned __int8 *v60; // rax
  __m128i v61; // xmm0
  __m128i v62; // xmm1
  __m128i v63; // xmm2
  __m128i v64; // xmm1
  __m128i v65; // xmm0
  __m128i v66; // xmm2
  __m128i v67; // xmm0
  __m128i v68; // xmm1
  __m128i v69; // xmm1
  __m128i v70; // xmm0
  __m128i v71; // xmm2
  unsigned __int8 *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rbp
  unsigned __int8 *v75; // rdx
  __int64 v76; // r9
  int v77; // ecx
  int v78; // eax
  __int64 v79; // rdx
  _BYTE *v80; // rcx
  __int64 v81; // r10
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // r12
  unsigned __int8 *v85; // r9
  unsigned __int8 *v86; // rcx
  unsigned __int8 *v87; // rbx
  unsigned __int8 *v88; // rsi
  unsigned __int8 *v89; // r14
  int v90; // r10d
  int v91; // ebp
  int v92; // r13d
  signed int v93; // r11d
  signed int v94; // ecx
  signed int v95; // eax
  __int64 v96; // r10
  unsigned __int8 *v97; // rcx
  __int64 v98; // rdx
  unsigned __int8 v99; // al
  __int64 v100; // r10
  _BYTE *v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  int v105; // r10d
  __int64 v106; // r9
  unsigned __int8 *v107; // rcx
  unsigned __int64 v108; // rdx
  unsigned __int64 v109; // rbx
  __int64 v110; // rdx
  __int64 v111; // rcx
  unsigned __int64 v112; // r8
  unsigned __int8 *v113; // rcx
  __int64 v114; // r10
  unsigned __int64 v115; // r8
  const __m128i *v116; // rax
  __m128i v117; // xmm0
  __m128i v118; // xmm1
  __m128i v119; // xmm2
  __m128i v120; // xmm1
  __m128i v121; // xmm0
  __m128i v122; // xmm2
  __m128i v123; // xmm0
  __m128i v124; // xmm1
  __m128i v125; // xmm1
  __m128i v126; // xmm0
  __m128i v127; // xmm2
  unsigned __int8 *v128; // rsi
  unsigned __int8 *v129; // rcx
  unsigned __int64 v130; // rbx
  __int64 v131; // r9
  __int64 v132; // r8
  __int64 v133; // rdx
  unsigned __int64 v134; // rbx
  int v135; // ecx
  int v136; // eax
  unsigned __int64 v137; // r10
  unsigned __int8 *v138; // r13
  unsigned __int8 *v139; // r15
  unsigned __int8 *v140; // rbp
  int v141; // r11d
  int v142; // esi
  int v143; // r12d
  signed int v144; // ebx
  signed int v145; // ecx
  signed int v146; // eax
  unsigned __int8 *v147; // rcx
  unsigned __int64 v148; // rdx
  unsigned __int64 v149; // rbx
  unsigned __int8 v150; // al
  unsigned __int8 *v151; // rcx
  unsigned __int64 v152; // rdx
  unsigned __int64 v153; // rbx
  __int64 v154; // rbp
  __int64 v155; // rsi
  __int64 v156; // r14
  __int64 v157; // rax
  __int64 v158; // rdi
  char *v159; // r9
  _BYTE *v160; // r8
  char v161; // r10
  int v162; // ebx
  unsigned __int64 v163; // r11
  char v164; // al
  int v165; // ebx
  unsigned __int64 v166; // r11
  char v167; // al
  char v168; // cl
  int v169; // r11d
  unsigned __int64 v170; // rbx
  char v171; // al
  __int64 v172; // rbx
  __int64 i; // rcx
  __int64 v174; // r8
  _BYTE *v175; // rdx
  _BYTE *v176; // rcx
  char v177; // al
  unsigned __int8 *v179; // r9
  unsigned __int8 *v180; // r8
  unsigned int v181; // r14d
  __int64 v182; // r10
  __int16 v183; // dx
  __int16 v184; // cx
  int v185; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v186; // [rsp+28h] [rbp-C0h]
  int v187; // [rsp+28h] [rbp-C0h]
  unsigned int v188; // [rsp+30h] [rbp-B8h]
  unsigned int v189; // [rsp+34h] [rbp-B4h]
  int v190; // [rsp+38h] [rbp-B0h]
  unsigned int v191; // [rsp+3Ch] [rbp-ACh]
  unsigned int v192; // [rsp+40h] [rbp-A8h]
  unsigned __int8 *v193; // [rsp+48h] [rbp-A0h]
  int v194; // [rsp+50h] [rbp-98h]
  __int64 v195; // [rsp+58h] [rbp-90h]
  __int64 v196; // [rsp+60h] [rbp-88h]
  _BYTE *v197; // [rsp+68h] [rbp-80h]
  __int64 v198; // [rsp+70h] [rbp-78h]
  __int64 v199; // [rsp+78h] [rbp-70h]
  __int64 v200; // [rsp+80h] [rbp-68h]
  __int64 v201; // [rsp+98h] [rbp-50h]
  __int64 v202; // [rsp+A0h] [rbp-48h]

  v8 = 0;
  v10 = a6;
  v11 = *(_DWORD *)(*a1 + 8LL);
  v12 = a1;
  v185 = v11;
  v188 = a5;
  v13 = a4 * ((a7 == 16) + 1);
  v14 = ((a7 == 16) + 1) * v11;
  v15 = a4;
  v190 = v14;
  v192 = a5 * v13;
  if ( a4 != v11 && a4 != v11 + 1 )
  {
    sub_14023E640(L"out_n == s->img_n || out_n == s->img_n+1", L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 4552);
    v12 = a1;
  }
  if ( a5 < 0
    || (a6 & 0x80000000) != 0
    || a6 && a5 > (int)(0x7FFFFFFF / a6)
    || ((a6 * a5) & 0x80000000) != 0
    || v13 < 0
    || v13 && (int)(a6 * a5) > 0x7FFFFFFF / v13 )
  {
    v12[3] = 0;
    goto LABEL_235;
  }
  v17 = j__malloc_base((int)(a6 * a5 * v13));
  v18 = a1;
  a1[3] = v17;
  if ( !v17 )
  {
LABEL_235:
    v24 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v25 = "outofmem";
    goto LABEL_236;
  }
  v19 = v185;
  if ( v185 < 0
    || (v20 = a5) != 0 && v185 > (int)(0x7FFFFFFFu / a5)
    || (v21 = a5 * v185, v194 = a5 * v185, a5 * v185 < 0)
    || (v22 = a7, a7 < 0)
    || a7 && v21 > (int)(0x7FFFFFFFu / a7)
    || a7 * v21 > 2147483640 )
  {
    v24 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v25 = "too large";
    goto LABEL_236;
  }
  v23 = (unsigned int)(a7 * v21 + 7) >> 3;
  v191 = v23;
  if ( a3 >= a6 * (v23 + 1) )
  {
    v26 = 0;
    v189 = 0;
    if ( !a6 )
      goto LABEL_175;
    v27 = v14;
    v28 = v13;
    v195 = v14;
    v200 = v13;
    while ( 1 )
    {
      v29 = v18[3];
      v30 = *a2;
      v31 = a2 + 1;
      v32 = v31;
      v33 = v192 * v26 + v29;
      v202 = v192 * v26;
      if ( (unsigned int)v30 > 4 )
      {
        v24 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
        v25 = "invalid filter";
        goto LABEL_236;
      }
      if ( a7 < 8 )
      {
        if ( v23 > v20 )
        {
          v24 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
          v25 = "invalid width";
          goto LABEL_236;
        }
        v14 = 1;
        v27 = 1;
        v190 = 1;
        v195 = 1;
        v188 = v23;
        v33 += v20 * a4 - v23;
      }
      v34 = v33 - v192;
      if ( !v26 )
        LODWORD(v30) = byte_140301848[v30];
      if ( v27 > 0 )
      {
        v35 = v34 - (_QWORD)v31;
        v36 = v31;
        v37 = v33 - (_QWORD)v31;
        v38 = v27;
        while ( 2 )
        {
          switch ( (int)v30 )
          {
            case 0:
              do
              {
                v36[v37] = *v36;
                ++v36;
                --v38;
              }
              while ( v38 );
              break;
            case 1:
              do
              {
                v36[v37] = *v36;
                ++v36;
                --v38;
              }
              while ( v38 );
              break;
            case 2:
              do
              {
                v36[v37] = *v36 + v36[v35];
                ++v36;
                --v38;
              }
              while ( v38 );
              break;
            case 3:
              do
              {
                v39 = (v36++)[v35];
                v36[v37 - 1] = *(v36 - 1) + (v39 >> 1);
                --v38;
              }
              while ( v38 );
              break;
            case 4:
              do
              {
                v40 = (v36++)[v35];
                v41 = 0;
                if ( v40 )
                  v41 = v40;
                v36[v37 - 1] = *(v36 - 1) + v41;
                --v38;
              }
              while ( v38 );
              break;
            case 5:
              do
              {
                v36[v37] = *v36;
                ++v36;
                --v38;
              }
              while ( v38 );
              break;
            case 6:
              do
              {
                v36[v37] = *v36;
                ++v36;
                --v38;
              }
              while ( v38 );
              v28 = v200;
              break;
            default:
              ++v36;
              if ( --v38 )
                continue;
              break;
          }
          break;
        }
        v19 = v185;
      }
      if ( a7 == 8 )
      {
        if ( v19 != a4 )
          *(_BYTE *)(v19 + v33) = -1;
        v42 = &v31[v19];
        v43 = (unsigned __int8 *)(a4 + v34);
        v44 = a4 + v33;
        v193 = v43;
        v186 = v44;
        v45 = v42;
      }
      else if ( a7 == 16 )
      {
        if ( v19 != a4 )
          *(_WORD *)(v27 + v33) = -1;
        v43 = (unsigned __int8 *)(v28 + v34);
        v42 = &v31[v14];
        v193 = v43;
        v44 = v28 + v33;
        v45 = &v32[v14];
        v186 = v44;
      }
      else
      {
        v42 = v31 + 1;
        v43 = (unsigned __int8 *)(v34 + 1);
        v45 = v42;
        v44 = v33 + 1;
        v193 = v43;
        v186 = v44;
        if ( a7 < 8 )
          break;
      }
      if ( v19 == a4 )
        break;
      if ( v19 + 1 != a4 )
        sub_14023E640(L"img_n+1 == out_n", L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 4636);
      v46 = v42;
      a2 = v45;
      switch ( (int)v30 )
      {
        case 0:
          v47 = a5;
          if ( a5 != 1 )
          {
            v48 = (unsigned int)(a5 - 1);
            do
            {
              if ( v27 > 0 )
              {
                v49 = (_BYTE *)v44;
                v50 = v27;
                do
                {
                  *v49 = a2[(_QWORD)v49 - v44];
                  ++v49;
                  --v50;
                }
                while ( v50 );
              }
              *(_BYTE *)(v27 + v44) = -1;
              a2 += v14;
              v44 += v28;
              --v48;
            }
            while ( v48 );
            break;
          }
          goto LABEL_127;
        case 1:
          v47 = a5;
          if ( a5 != 1 )
          {
            v51 = (unsigned int)(a5 - 1);
            do
            {
              if ( v27 > 0 )
              {
                v52 = a2;
                v53 = v27;
                do
                {
                  v52[v44 - (_QWORD)a2] = *v52 + v52[v44 - v28 - (_QWORD)a2];
                  ++v52;
                  --v53;
                }
                while ( v53 );
              }
              *(_BYTE *)(v27 + v44) = -1;
              a2 += v14;
              v44 += v28;
              --v51;
            }
            while ( v51 );
            break;
          }
          goto LABEL_127;
        case 2:
          v47 = a5;
          if ( a5 != 1 )
          {
            v54 = (unsigned int)(a5 - 1);
            do
            {
              v55 = 0;
              if ( v14 >= 64 )
              {
                v56 = v14 - 1;
                v57 = v56 + v44;
                if ( (v44 > (unsigned __int64)&a2[v56] || v57 < (unsigned __int64)a2)
                  && (v44 > (unsigned __int64)&v43[v56] || v57 < (unsigned __int64)v43) )
                {
                  v58 = v43 - a2;
                  v59 = v44 - (_QWORD)a2;
                  v60 = a2 + 16;
                  do
                  {
                    v61 = _mm_loadu_si128((const __m128i *)v60 - 1);
                    v55 += 64;
                    v62 = _mm_loadu_si128((const __m128i *)&v60[v58 - 16]);
                    v63 = _mm_loadu_si128((const __m128i *)&v60[v58]);
                    v60 += 64;
                    v64 = _mm_add_epi8(v62, v61);
                    v65 = _mm_loadu_si128((const __m128i *)v60 - 4);
                    *(__m128i *)&v60[v59 - 80] = v64;
                    v66 = _mm_add_epi8(v63, v65);
                    v67 = _mm_loadu_si128((const __m128i *)v60 - 3);
                    v68 = _mm_loadu_si128((const __m128i *)&v60[v58 - 48]);
                    *(__m128i *)&v60[v59 - 64] = v66;
                    v69 = _mm_add_epi8(v68, v67);
                    v70 = _mm_loadu_si128((const __m128i *)v60 - 2);
                    v71 = _mm_loadu_si128((const __m128i *)&v60[v58 - 32]);
                    *(__m128i *)&v60[v59 - 48] = v69;
                    *(__m128i *)&v60[v59 - 32] = _mm_add_epi8(v71, v70);
                  }
                  while ( v55 < v14 - (v14 & 0x3F) );
                }
              }
              if ( v55 < v27 )
              {
                v72 = &a2[v55];
                v73 = v27 - v55;
                do
                {
                  v72[v44 - (_QWORD)a2] = *v72 + v72[v43 - a2];
                  ++v72;
                  --v73;
                }
                while ( v73 );
              }
              *(_BYTE *)(v27 + v44) = -1;
              a2 += v14;
              v44 += v28;
              v43 += v28;
              --v54;
            }
            while ( v54 );
            break;
          }
          goto LABEL_127;
        case 3:
          v47 = a5;
          if ( a5 != 1 )
          {
            v74 = (unsigned int)(a5 - 1);
            do
            {
              if ( v27 > 0 )
              {
                v75 = v43;
                v76 = v27;
                do
                {
                  v77 = v75[v44 - v28 - (_QWORD)v43];
                  v78 = *v75++;
                  v75[v44 - (_QWORD)v43 - 1] = v75[a2 - v43 - 1] + ((unsigned int)(v78 + v77) >> 1);
                  --v76;
                }
                while ( v76 );
              }
              *(_BYTE *)(v27 + v44) = -1;
              a2 += v14;
              v44 += v28;
              v43 += v28;
              --v74;
            }
            while ( v74 );
            break;
          }
          goto LABEL_127;
        case 4:
          v79 = (unsigned int)(a5 - 1);
          if ( a5 != 1 )
          {
            v80 = (_BYTE *)(v27 + v44);
            v196 = v14;
            v81 = v28 + v27;
            v82 = v14;
            v83 = v28 - v44;
            v197 = (_BYTE *)(v27 + v44);
            v198 = v28 - v44;
            v201 = v28 + v27;
            v199 = (unsigned int)(a5 - 1);
            do
            {
              if ( v27 > 0 )
              {
                v84 = v27;
                v85 = &v80[-v81];
                v86 = &v43[-v44];
                v87 = &v43[v83];
                v88 = v86;
                v89 = &a2[v83];
                do
                {
                  v90 = *v85;
                  v91 = v85[(_QWORD)v88];
                  v92 = v85[(_QWORD)v87];
                  v93 = abs32(v92 - v91);
                  v94 = abs32(v90 - v91);
                  v95 = abs32(v90 - v91 + v92 - v91);
                  if ( v93 > v94 || v93 > v95 )
                  {
                    LOBYTE(v90) = v85[(_QWORD)v88];
                    if ( v94 <= v95 )
                      LOBYTE(v90) = v85[(_QWORD)v87];
                  }
                  v85[v28] = v90 + v85[(_QWORD)v89];
                  ++v85;
                  --v84;
                }
                while ( v84 );
                v44 = v186;
                v43 = v193;
                v27 = v195;
                v83 = v198;
                v80 = v197;
                v79 = v199;
                v82 = v196;
                v81 = v201;
              }
              v44 += v28;
              *v80 = -1;
              v80 += v28;
              v186 = v44;
              v83 -= v28;
              v197 = v80;
              v43 += v28;
              v198 = v83;
              a2 += v82;
              v193 = v43;
              v199 = --v79;
            }
            while ( v79 );
          }
          break;
        case 5:
          v47 = a5;
          if ( a5 == 1 )
            goto LABEL_127;
          v96 = (unsigned int)(a5 - 1);
          do
          {
            if ( v27 > 0 )
            {
              v97 = a2;
              v98 = v27;
              do
              {
                v99 = (v97++)[v44 - v28 - (_QWORD)a2];
                v97[v44 - (_QWORD)a2 - 1] = *(v97 - 1) + (v99 >> 1);
                --v98;
              }
              while ( v98 );
            }
            *(_BYTE *)(v27 + v44) = -1;
            a2 += v14;
            v44 += v28;
            --v96;
          }
          while ( v96 );
          break;
        case 6:
          v47 = a5;
          if ( a5 == 1 )
            goto LABEL_127;
          v100 = (unsigned int)(a5 - 1);
          do
          {
            if ( v27 > 0 )
            {
              v101 = a2;
              v102 = v27;
              do
              {
                v101[v44 - (_QWORD)a2] = *v101 + v101[v44 - v28 - (_QWORD)a2];
                ++v101;
                --v102;
              }
              while ( v102 );
            }
            *(_BYTE *)(v27 + v44) = -1;
            a2 += v14;
            v44 += v28;
            --v100;
          }
          while ( v100 );
          break;
        default:
          a2 = v46;
          break;
      }
      v47 = a5;
LABEL_127:
      v22 = a7;
      v18 = a1;
      if ( a7 == 16 )
      {
        v103 = a1[3] + v202;
        if ( v47 )
        {
          v104 = v47;
          do
          {
            *(_BYTE *)(v27 + v103 + 1) = -1;
            v103 += v28;
            --v104;
          }
          while ( v104 );
        }
LABEL_169:
        v22 = a7;
      }
      v8 = 0;
      v20 = a5;
      v26 = v189 + 1;
      v23 = v191;
      v189 = v26;
      if ( v26 >= a6 )
      {
        v15 = a4;
        v10 = a6;
LABEL_175:
        if ( v22 >= 8 )
        {
          if ( v22 == 16 )
          {
            v179 = (unsigned __int8 *)v18[3];
            v180 = v179;
            v181 = v10 * v20 * v15;
            if ( v181 )
            {
              v182 = v181;
              do
              {
                v183 = *v179;
                v179 += 2;
                v184 = v180[1];
                v180 += 2;
                *((_WORD *)v180 - 1) = v184 | (v183 << 8);
                --v182;
              }
              while ( v182 );
            }
          }
        }
        else if ( v10 )
        {
          v154 = v20 * v15;
          v155 = (int)v20;
          v156 = v23;
          while ( 1 )
          {
            v157 = v18[3];
            v158 = v192 * v8;
            v159 = (char *)(v158 + v157 + v154 - v156);
            v160 = (_BYTE *)(v157 + v158);
            if ( a8 )
              v161 = 1;
            else
              v161 = byte_14026E768[v22];
            if ( v22 == 4 )
            {
              v162 = a5 * v185;
              if ( v194 >= 2 )
              {
                v163 = (unsigned __int64)(unsigned int)v194 >> 1;
                v162 = v194 - 2 * ((unsigned int)v194 >> 1);
                do
                {
                  *v160 = v161 * ((unsigned __int8)*v159 >> 4);
                  v164 = *v159++;
                  v160[1] = v161 * (v164 & 0xF);
                  v160 += 2;
                  --v163;
                }
                while ( v163 );
              }
              if ( v162 > 0 )
                *v160 = v161 * ((unsigned __int8)*v159 >> 4);
            }
            else
            {
              if ( v22 == 2 )
              {
                v165 = a5 * v185;
                if ( v194 >= 4 )
                {
                  v166 = (unsigned __int64)(unsigned int)v194 >> 2;
                  v165 = v194 - 4 * ((unsigned int)v194 >> 2);
                  do
                  {
                    *v160 = v161 * ((unsigned __int8)*v159 >> 6);
                    v160[1] = v161 * (((unsigned __int8)*v159 >> 4) & 3);
                    v160[2] = v161 * (((unsigned __int8)*v159 >> 2) & 3);
                    v167 = *v159++;
                    v160[3] = v161 * (v167 & 3);
                    v160 += 4;
                    --v166;
                  }
                  while ( v166 );
                }
                if ( v165 > 0 )
                  *v160++ = v161 * ((unsigned __int8)*v159 >> 6);
                if ( v165 > 1 )
                  *v160++ = v161 * (((unsigned __int8)*v159 >> 4) & 3);
                if ( v165 <= 2 )
                  goto LABEL_216;
                v168 = ((unsigned __int8)*v159 >> 2) & 3;
              }
              else
              {
                if ( v22 != 1 )
                  goto LABEL_216;
                v169 = a5 * v185;
                if ( v194 >= 8 )
                {
                  v170 = (unsigned __int64)(unsigned int)v194 >> 3;
                  v169 = v194 - 8 * ((unsigned int)v194 >> 3);
                  do
                  {
                    *v160 = v161 * ((unsigned __int8)*v159 >> 7);
                    v160[1] = v161 * ((*v159 & 0x40) != 0);
                    v160[2] = v161 * ((*v159 & 0x20) != 0);
                    v160[3] = v161 * ((*v159 & 0x10) != 0);
                    v160[4] = v161 * ((*v159 & 8) != 0);
                    v160[5] = v161 * ((*v159 & 4) != 0);
                    v160[6] = v161 * ((*v159 & 2) != 0);
                    v171 = *v159++;
                    v160[7] = v161 * (v171 & 1);
                    v160 += 8;
                    --v170;
                  }
                  while ( v170 );
                }
                if ( v169 > 0 )
                  *v160++ = v161 * ((unsigned __int8)*v159 >> 7);
                if ( v169 > 1 )
                  *v160++ = v161 * ((*v159 & 0x40) != 0);
                if ( v169 > 2 )
                  *v160++ = v161 * ((*v159 & 0x20) != 0);
                if ( v169 > 3 )
                  *v160++ = v161 * ((*v159 & 0x10) != 0);
                if ( v169 > 4 )
                  *v160++ = v161 * ((*v159 & 8) != 0);
                if ( v169 > 5 )
                  *v160++ = v161 * ((*v159 & 4) != 0);
                if ( v169 <= 6 )
                  goto LABEL_216;
                v168 = (*v159 & 2) != 0;
              }
              *v160 = v161 * v168;
            }
LABEL_216:
            if ( v185 != a4 )
            {
              v172 = v158 + a1[3];
              if ( v185 == 1 )
              {
                for ( i = v155 - 1; i >= 0; --i )
                {
                  *(_BYTE *)(v172 + 2 * i + 1) = -1;
                  *(_BYTE *)(v172 + 2 * i) = *(_BYTE *)(i + v172);
                }
              }
              else
              {
                if ( v185 != 3 )
                  sub_14023E640(L"img_n == 3", L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 4725);
                v174 = v155 - 1;
                if ( v155 - 1 >= 0 )
                {
                  v175 = (_BYTE *)(v155 + v172 + 2 * (v155 - 1));
                  v176 = (_BYTE *)(v172 + 4 * v174 + 2);
                  do
                  {
                    --v174;
                    v176[1] = -1;
                    v177 = v175[1];
                    v175 -= 3;
                    *v176 = v177;
                    v176 -= 4;
                    v176[3] = v175[3];
                    v176[2] = v175[2];
                  }
                  while ( v174 >= 0 );
                }
              }
            }
            v22 = a7;
            ++v8;
            v18 = a1;
            if ( v8 >= a6 )
              return 1;
          }
        }
        return 1;
      }
      v14 = v190;
      v19 = v185;
    }
    v105 = v14 * (v188 - 1);
    v187 = v105;
    v106 = v105;
    switch ( (int)v30 )
    {
      case 0:
        MEMORY[0x1401FC920](v44, v42);
        break;
      case 1:
        if ( v105 > 0 )
        {
          v107 = v42;
          v108 = v44 - v27 - (_QWORD)v42;
          v109 = v44 - (_QWORD)v42;
          do
          {
            v107[v109] = *v107 + v107[v108];
            ++v107;
            --v106;
          }
          while ( v106 );
        }
        break;
      case 2:
        v110 = 0;
        if ( v105 >= 64 )
        {
          v111 = v105 - 1;
          v112 = v111 + v44;
          if ( (v44 > (unsigned __int64)&v42[v111] || v112 < (unsigned __int64)v42)
            && (v44 > (unsigned __int64)&v43[v111] || v112 < (unsigned __int64)v43) )
          {
            v113 = (unsigned __int8 *)(v43 - v42);
            v114 = v105 - (v105 & 0x3F);
            v115 = v44 - (_QWORD)v42;
            v116 = (const __m128i *)(v42 + 16);
            do
            {
              v117 = _mm_loadu_si128(v116 - 1);
              v110 += 64;
              v118 = _mm_loadu_si128((const __m128i *)((char *)v116 + (_QWORD)v113 - 16));
              v119 = _mm_loadu_si128((const __m128i *)((char *)v116 + (_QWORD)v113));
              v116 += 4;
              v120 = _mm_add_epi8(v118, v117);
              v121 = _mm_loadu_si128(v116 - 4);
              *(__m128i *)((char *)v116 + v115 - 80) = v120;
              v122 = _mm_add_epi8(v119, v121);
              v123 = _mm_loadu_si128(v116 - 3);
              v124 = _mm_loadu_si128((const __m128i *)((char *)v116 + (_QWORD)v113 - 48));
              *(__m128i *)((char *)v116 + v115 - 64) = v122;
              v125 = _mm_add_epi8(v124, v123);
              v126 = _mm_loadu_si128(v116 - 2);
              v127 = _mm_loadu_si128((const __m128i *)((char *)v116 + (_QWORD)v113 - 32));
              *(__m128i *)((char *)v116 + v115 - 48) = v125;
              *(const __m128i *)((char *)&v116[-2] + v115) = _mm_add_epi8(v127, v126);
            }
            while ( v110 < v114 );
          }
        }
        if ( v110 < v106 )
        {
          v128 = (unsigned __int8 *)(v43 - v42);
          v129 = &v42[v110];
          v130 = v44 - (_QWORD)v42;
          v131 = v106 - v110;
          do
          {
            v129[v130] = *v129 + v128[(_QWORD)v129];
            ++v129;
            --v131;
          }
          while ( v131 );
        }
        break;
      case 3:
        if ( v105 > 0 )
        {
          v132 = v42 - v43;
          v133 = v44 - v27 - (_QWORD)v43;
          v134 = v44 - (_QWORD)v43;
          do
          {
            v135 = v43[v133];
            v136 = *v43++;
            v43[v134 - 1] = v43[v132 - 1] + ((unsigned int)(v136 + v135) >> 1);
            --v106;
          }
          while ( v106 );
        }
        break;
      case 4:
        if ( v105 > 0 )
        {
          v137 = v44 - v27;
          v138 = &v43[-v44];
          v139 = &v43[v27 - v44];
          v140 = &v42[v27 - v44];
          do
          {
            v141 = *(unsigned __int8 *)v137;
            v142 = v138[v137];
            v143 = v139[v137];
            v144 = abs32(v143 - v142);
            v145 = abs32(v141 - v142);
            v146 = abs32(v143 + v141 - v142 - v142);
            if ( v144 > v145 || v144 > v146 )
            {
              LOBYTE(v141) = v138[v137];
              if ( v145 <= v146 )
                LOBYTE(v141) = v139[v137];
            }
            *(_BYTE *)(v27 + v137) = v141 + v140[v137];
            ++v137;
            --v106;
          }
          while ( v106 );
          v28 = v200;
        }
        break;
      case 5:
        if ( v105 > 0 )
        {
          v147 = v42;
          v148 = v44 - v27 - (_QWORD)v42;
          v149 = v44 - (_QWORD)v42;
          do
          {
            v150 = (v147++)[v148];
            v147[v149 - 1] = *(v147 - 1) + (v150 >> 1);
            --v106;
          }
          while ( v106 );
        }
        break;
      case 6:
        if ( v105 > 0 )
        {
          v151 = v42;
          v152 = v44 - v27 - (_QWORD)v42;
          v153 = v44 - (_QWORD)v42;
          do
          {
            v151[v153] = *v151 + v151[v152];
            ++v151;
            --v106;
          }
          while ( v106 );
        }
        break;
      default:
        break;
    }
    v18 = a1;
    a2 = &v42[v187];
    goto LABEL_169;
  }
  v24 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
  v25 = "not enough pixels";
LABEL_236:
  *(_QWORD *)(v24 + 16) = v25;
  return 0;
}

