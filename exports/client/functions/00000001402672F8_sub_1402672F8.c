/* Address: 0x1402672f8 | Name: sub_1402672F8 | Size: 4429 bytes */
__int64 __fastcall sub_1402672F8(double a1, unsigned int a2, int *a3, _BYTE *a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // edi
  double v7; // xmm0_8
  double v8; // xmm0_8
  unsigned __int64 v9; // rbx
  unsigned int v10; // edx
  int v11; // r8d
  unsigned int v12; // ebx
  unsigned int v13; // r9d
  int v14; // edi
  bool v15; // zf
  int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // r8
  unsigned int v19; // eax
  char v20; // cl
  unsigned int v21; // r15d
  unsigned int v22; // r11d
  __int64 v23; // rax
  __int64 v24; // rcx
  __int32 v25; // r10d
  __int32 v26; // edx
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned int v30; // r12d
  unsigned int v31; // ebx
  unsigned int v32; // r9d
  int v33; // edi
  int v34; // eax
  int v35; // eax
  unsigned int v36; // eax
  char v37; // cl
  unsigned int v38; // r11d
  __int64 v39; // rax
  __int64 v40; // rcx
  __int32 v41; // r10d
  __int32 v42; // edx
  __int64 v43; // rax
  unsigned int v44; // ecx
  __int64 v45; // rax
  int v46; // r8d
  int v47; // eax
  int v48; // eax
  unsigned int v49; // r8d
  unsigned int v50; // eax
  __int64 v51; // r11
  __int64 v52; // r9
  __int32 v53; // r10d
  unsigned __int32 v54; // ecx
  unsigned int v55; // esi
  unsigned int v56; // edi
  int v57; // eax
  int v58; // eax
  int v59; // r8d
  unsigned int v60; // eax
  __int64 v61; // r11
  __int64 v62; // r9
  __int32 v63; // r10d
  unsigned __int32 v64; // ecx
  unsigned int v65; // esi
  unsigned int v66; // ecx
  unsigned int v67; // eax
  unsigned int v68; // r13d
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rsi
  unsigned __int64 v73; // rbx
  unsigned int v74; // r10d
  unsigned int v75; // r9d
  __int64 v76; // r10
  __int64 v77; // rdx
  unsigned __int64 v78; // rcx
  char v79; // al
  __int64 v80; // rbx
  unsigned int v81; // r9d
  __int64 v82; // rdx
  unsigned __int64 v83; // rcx
  unsigned int v84; // r13d
  __m128i *v85; // rcx
  __m128i *v86; // rdx
  unsigned int v87; // r9d
  __int64 v88; // rsi
  unsigned __int64 v89; // r11
  __int64 v90; // rdi
  __int64 v91; // rax
  unsigned __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rax
  unsigned int v95; // ecx
  unsigned int v96; // eax
  unsigned int v97; // r9d
  __int64 v98; // rdx
  unsigned __int64 v99; // rcx
  _BYTE *v100; // rsi
  _BYTE *v101; // rbx
  unsigned int v102; // r9d
  __int64 v103; // rdx
  unsigned __int64 v104; // r8
  int v105; // ecx
  unsigned int v106; // eax
  unsigned int v107; // r13d
  int v108; // eax
  __int64 v109; // rax
  __int64 v110; // rdi
  __int64 v111; // rsi
  unsigned __int64 v112; // rbx
  unsigned int v113; // r10d
  unsigned int v114; // r9d
  __int64 v115; // r10
  __int64 v116; // rdx
  unsigned __int64 v117; // rcx
  char v118; // al
  __int64 v119; // rbx
  unsigned int v120; // r9d
  __int64 v121; // rdx
  unsigned __int64 v122; // rcx
  unsigned int v123; // r13d
  __m128i *v124; // rcx
  __m128i *v125; // rdx
  unsigned int v126; // r9d
  __int64 v127; // rsi
  unsigned __int64 v128; // r11
  __int64 v129; // rdi
  __int64 v130; // rax
  unsigned __int64 v131; // rdx
  __int64 v132; // rdx
  __int64 v133; // rax
  unsigned int v134; // ecx
  unsigned int v135; // eax
  unsigned int v136; // r9d
  __int64 v137; // rdx
  unsigned __int64 v138; // rcx
  int v139; // eax
  int v140; // edi
  unsigned __int64 v141; // r8
  unsigned int v142; // r9d
  __int64 v143; // rdx
  unsigned __int64 v144; // r8
  unsigned __int64 v145; // rax
  _BYTE *i; // rdi
  unsigned int v147; // r10d
  const struct __crt_strtox::big_integer *v148; // r8
  unsigned int v149; // r9d
  __int64 v150; // rdx
  unsigned __int64 v151; // rcx
  unsigned int v152; // r8d
  unsigned int j; // r9d
  char v154; // cl
  __int64 v155; // rax
  __int64 v157; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v158; // [rsp+20h] [rbp-E0h]
  unsigned int v159; // [rsp+24h] [rbp-DCh]
  __m128i *v160; // [rsp+28h] [rbp-D8h]
  int v161; // [rsp+30h] [rbp-D0h]
  unsigned int v162; // [rsp+34h] [rbp-CCh]
  double v163; // [rsp+38h] [rbp-C8h]
  unsigned int v164; // [rsp+40h] [rbp-C0h]
  _BYTE *v165; // [rsp+48h] [rbp-B8h]
  __m128i *v166; // [rsp+50h] [rbp-B0h]
  int *v167; // [rsp+58h] [rbp-A8h]
  __int64 v168; // [rsp+60h] [rbp-A0h]
  unsigned int v169; // [rsp+70h] [rbp-90h] BYREF
  __m128i Destination[28]; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v171; // [rsp+240h] [rbp+140h] BYREF
  __m128i v172; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v173; // [rsp+410h] [rbp+310h]
  __m128i Source[28]; // [rsp+414h] [rbp+314h] BYREF
  unsigned int v175; // [rsp+5E0h] [rbp+4E0h]
  __m128i v176; // [rsp+5E4h] [rbp+4E4h] BYREF
  __int64 v177; // [rsp+7B0h] [rbp+6B0h]

  v168 = a5;
  v167 = a3;
  v164 = a2;
  v163 = a1;
  v165 = a4;
  v5 = (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL) + (-(__int64)(((*(_QWORD *)&a1 >> 52) & 0x7FFLL) != 0) & 0x10000000000000LL);
  v6 = ((*(_QWORD *)&a1 >> 52) & 0x7FF) + 2 - (((*(_QWORD *)&a1 >> 52) & 0x7FFLL) != 0);
  v7 = log10(a1);
  v8 = ceil(v7);
  Destination[0].m128i_i32[0] = v5;
  v9 = HIDWORD(v5);
  Destination[0].m128i_i32[1] = v9;
  v158 = (((int)v8 - 0x7FFFFFFF) & 0xFFFFFFFE) != 0 ? (int)v8 : 0;
  v10 = ((_DWORD)v9 != 0) + 1;
  v169 = v10;
  if ( v6 < 0x434 )
  {
    if ( v6 != 54 )
    {
      Source[0].m128i_i64[0] = 0x10000000000000LL;
      v173 = 2;
      if ( (_DWORD)v9 )
      {
        v46 = 0;
        while ( Source[0].m128i_i32[v46] == Destination[0].m128i_i32[v46] )
        {
          if ( ++v46 == 2 )
          {
            v15 = !_BitScanReverse((unsigned int *)&v47, v9);
            LODWORD(v160) = 0;
            if ( v15 )
              v48 = 0;
            else
              v48 = v47 + 1;
            v21 = ((_DWORD)v9 != 0) + 1;
            v49 = 32 - v48;
            v50 = v21;
            while ( 1 )
            {
              v51 = v50;
              v52 = v50 - 1;
              v53 = v50 >= v10 ? 0 : Destination[0].m128i_i32[v50];
              v54 = (unsigned int)v52 >= v10 ? 0 : Destination[0].m128i_i32[v52];
              --v50;
              Destination[0].m128i_i32[v51] = (4 * v53) | (v54 >> 30);
              if ( (_DWORD)v52 == -1 )
                break;
              v10 = v169;
            }
            if ( v49 < 2 )
              v21 = ((_DWORD)v9 != 0) + 2;
            v55 = 1078 - v6;
            v169 = v21;
            v56 = v55 >> 5;
            MEMORY[0x1401FCD30](Source, 0, 4LL * (v55 >> 5));
            Source[0].m128i_i32[v55 >> 5] = 1 << (v55 & 0x1F);
            goto LABEL_80;
          }
        }
      }
    }
    LODWORD(v160) = 0;
    v15 = !_BitScanReverse((unsigned int *)&v57, Destination[0].m128i_u32[(_DWORD)v9 != 0]);
    if ( v15 )
      v58 = 0;
    else
      v58 = v57 + 1;
    v21 = ((_DWORD)v9 != 0) + 1;
    v59 = 32 - v58;
    v60 = v21;
    while ( 1 )
    {
      v61 = v60;
      v62 = v60 - 1;
      v63 = v60 >= v10 ? 0 : Destination[0].m128i_i32[v60];
      v64 = (unsigned int)v62 >= v10 ? 0 : Destination[0].m128i_i32[v62];
      --v60;
      Destination[0].m128i_i32[v61] = (2 * v63) | (v64 >> 31);
      if ( (_DWORD)v62 == -1 )
        break;
      v10 = v169;
    }
    if ( !v59 )
      v21 = ((_DWORD)v9 != 0) + 2;
    v65 = 1077 - v6;
    v169 = v21;
    v56 = v65 >> 5;
    MEMORY[0x1401FCD30](Source, 0, 4LL * (v65 >> 5));
    Source[0].m128i_i32[v65 >> 5] = 1 << (v65 & 0x1F);
LABEL_80:
    v30 = v56 + 1;
    v18 = 4LL * (v56 + 1);
    v173 = v56 + 1;
    v171 = v56 + 1;
    if ( v18 )
    {
      if ( v18 > 0x1CC )
      {
        MEMORY[0x1401FCD30](&v172, 0, 0x1CCu);
        *errno() = 34;
        sub_14024CF6C();
      }
      else
      {
        MEMORY[0x1401FC920](&v172, Source, v18);
      }
      v30 = v171;
    }
  }
  else
  {
    Source[0].m128i_i64[0] = 0x10000000000000LL;
    v173 = 2;
    if ( (_DWORD)v9 )
    {
      v11 = 0;
      while ( Source[0].m128i_i32[v11] == Destination[0].m128i_i32[v11] )
      {
        if ( ++v11 == 2 )
        {
          LODWORD(v160) = 0;
          v12 = (v6 - 1074) & 0x1F;
          v13 = (v6 - 1074) >> 5;
          v14 = (1LL << (32 - ((v6 - 50) & 0x1F))) - 1;
          v15 = !_BitScanReverse((unsigned int *)&v16, Destination[0].m128i_u32[v10 - 1]);
          if ( v15 )
            v17 = 0;
          else
            v17 = v16 + 1;
          v18 = (unsigned int)(32 - v17);
          v19 = v10 + v13;
          if ( v10 + v13 != 115 || (v20 = 1, v12 <= (unsigned int)v18) )
            v20 = 0;
          if ( v19 > 0x73 || v20 )
          {
            v21 = 0;
            v169 = 0;
          }
          else
          {
            v21 = 114;
            if ( v19 < 0x72 )
              v21 = v10 + v13;
            v22 = v21;
            while ( v22 >= v13 )
            {
              v23 = v22 - v13;
              v24 = (unsigned int)(v23 - 1);
              v25 = (unsigned int)v23 >= v10 ? 0 : Destination[0].m128i_i32[v23];
              v26 = (unsigned int)v24 >= v10 ? 0 : Destination[0].m128i_i32[v24];
              v27 = v22--;
              Destination[0].m128i_i32[v27] = ((v14 & v25) << v12) | ((~v14 & (unsigned int)v26) >> (32 - v12));
              if ( v22 == -1 )
                break;
              v10 = v169;
            }
            v28 = 0;
            if ( v13 )
            {
              do
              {
                v29 = v28++;
                Destination[0].m128i_i32[v29] = 0;
              }
              while ( v28 != v13 );
            }
            if ( v12 > (unsigned int)v18 )
              ++v21;
            v169 = v21;
          }
          v30 = 1;
          Source[0].m128i_i32[1] = 0;
          v171 = 1;
          v173 = 1;
          v172.m128i_i32[0] = 4;
          goto LABEL_100;
        }
      }
    }
    LODWORD(v160) = 0;
    v31 = (v6 - 1075) & 0x1F;
    v32 = (v6 - 1075) >> 5;
    v33 = (1LL << (32 - ((v6 - 51) & 0x1F))) - 1;
    v15 = !_BitScanReverse((unsigned int *)&v34, Destination[0].m128i_u32[v10 - 1]);
    if ( v15 )
      v35 = 0;
    else
      v35 = v34 + 1;
    v18 = (unsigned int)(32 - v35);
    v36 = v10 + v32;
    if ( v10 + v32 != 115 || (v37 = 1, v31 <= (unsigned int)v18) )
      v37 = 0;
    if ( v36 > 0x73 || v37 )
    {
      v21 = 0;
      v169 = 0;
    }
    else
    {
      v21 = 114;
      if ( v36 < 0x72 )
        v21 = v10 + v32;
      v38 = v21;
      while ( v38 >= v32 )
      {
        v39 = v38 - v32;
        v40 = (unsigned int)(v39 - 1);
        v41 = (unsigned int)v39 >= v10 ? 0 : Destination[0].m128i_i32[v39];
        v42 = (unsigned int)v40 >= v10 ? 0 : Destination[0].m128i_i32[v40];
        v43 = v38--;
        Destination[0].m128i_i32[v43] = ((v33 & v41) << v31) | ((~v33 & (unsigned int)v42) >> (32 - v31));
        if ( v38 == -1 )
          break;
        v10 = v169;
      }
      v44 = 0;
      if ( v32 )
      {
        do
        {
          v45 = v44++;
          Destination[0].m128i_i32[v45] = 0;
        }
        while ( v44 != v32 );
      }
      if ( v31 > (unsigned int)v18 )
        ++v21;
      v169 = v21;
    }
    v30 = 1;
    Source[0].m128i_i32[1] = 0;
    v171 = 1;
    v173 = 1;
    v172.m128i_i32[0] = 2;
  }
LABEL_100:
  v66 = v158;
  if ( (v158 & 0x80000000) == 0 )
  {
    v67 = v158 / 0xA;
    v162 = v158 / 0xA;
    v68 = v158 / 0xA;
    v159 = v158 / 0xA;
    if ( !(v158 / 0xA) )
    {
LABEL_164:
      v95 = v66 - 10 * v67;
      if ( v95 )
      {
        v96 = dword_140285688[v95 - 1];
        if ( !v96 )
          goto LABEL_180;
        if ( v96 != 1 && v30 )
        {
          LODWORD(v18) = 0;
          v97 = 0;
          do
          {
            v98 = v97++;
            v99 = (unsigned int)v18 + v96 * (unsigned __int64)v172.m128i_u32[v98];
            v172.m128i_i32[v98] = v99;
            v18 = HIDWORD(v99);
          }
          while ( v97 != v30 );
          if ( HIDWORD(v99) )
          {
            if ( v171 >= 0x73 )
              goto LABEL_180;
            v172.m128i_i32[v171] = HIDWORD(v99);
            v30 = ++v171;
          }
          else
          {
            v30 = v171;
          }
        }
      }
LABEL_173:
      v100 = v165;
      v101 = v165;
      if ( v21 )
      {
        LODWORD(v18) = 0;
        v102 = 0;
        do
        {
          v103 = v102++;
          v104 = (unsigned int)v18 + 10LL * Destination[0].m128i_u32[v103];
          Destination[0].m128i_i32[v103] = v104;
          v18 = HIDWORD(v104);
        }
        while ( v102 != v21 );
        if ( (_DWORD)v18 )
        {
          if ( v169 >= 0x73 )
          {
            v173 = 0;
            v169 = 0;
            sub_1402697BC(Destination, 460, Source, 0);
          }
          else
          {
            Destination[0].m128i_i32[v169++] = v18;
          }
        }
      }
      goto LABEL_256;
    }
    while ( 1 )
    {
      v69 = v68;
      if ( v68 > 0x26 )
        v69 = 38;
      v161 = v69;
      v70 = (unsigned int)(v69 - 1);
      v71 = (unsigned int)v70;
      v72 = (unsigned __int8)byte_140293703[4 * v70];
      v73 = 4LL * (unsigned __int8)byte_140293702[4 * v70];
      v173 = v72 + (unsigned __int8)byte_140293702[4 * v70];
      MEMORY[0x1401FCD30](Source, 0, v73);
      MEMORY[0x1401FC920](
        (__m128i *)((char *)Source + v73),
        (const __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_140293700[2 * v71]),
        4 * v72);
      v74 = v173;
      if ( v173 > 1 )
      {
        if ( v30 > 1 )
        {
          v175 = 0;
          v84 = v30;
          if ( v173 < v30 )
            v84 = v173;
          v85 = Source;
          if ( v173 >= v30 )
            v85 = &v172;
          v163 = *(double *)&v85;
          v86 = &v172;
          v87 = 0;
          if ( v173 >= v30 )
            v86 = Source;
          v160 = v86;
          if ( v173 < v30 )
            v74 = v30;
          v30 = 0;
          while ( 1 )
          {
            v88 = v85->m128i_u32[v87];
            if ( (_DWORD)v88 )
            {
              LODWORD(v89) = 0;
              v18 = v87;
              if ( v74 )
              {
                while ( (_DWORD)v18 != 115 )
                {
                  v90 = (unsigned int)v18;
                  if ( (_DWORD)v18 == v30 )
                  {
                    v176.m128i_i32[(unsigned int)v18] = 0;
                    v175 = v18 + 1;
                  }
                  v91 = (unsigned int)v18 - v87;
                  v18 = (unsigned int)(v18 + 1);
                  v92 = v176.m128i_u32[v90] + (unsigned int)v89 + v88 * v86->m128i_u32[v91];
                  v176.m128i_i32[v90] = v92;
                  v30 = v175;
                  v89 = HIDWORD(v92);
                  if ( (_DWORD)v18 - v87 == v74 )
                    break;
                  v86 = v160;
                }
                if ( (_DWORD)v89 )
                {
                  while ( (_DWORD)v18 != 115 )
                  {
                    v93 = (unsigned int)v18;
                    if ( (_DWORD)v18 == v30 )
                    {
                      v176.m128i_i32[(unsigned int)v18] = 0;
                      v175 = v18 + 1;
                    }
                    v94 = v176.m128i_u32[(unsigned int)v18];
                    v18 = (unsigned int)(v18 + 1);
                    v176.m128i_i32[v93] = v94 + v89;
                    v30 = v175;
                    LODWORD(v89) = (v94 + (unsigned __int64)(unsigned int)v89) >> 32;
                    if ( !(_DWORD)v89 )
                      goto LABEL_151;
                  }
LABEL_180:
                  v30 = 0;
                  v171 = 0;
                  goto LABEL_173;
                }
              }
LABEL_151:
              if ( (_DWORD)v18 == 115 )
                goto LABEL_180;
              v85 = *(__m128i **)&v163;
              v86 = v160;
            }
            else if ( v87 == v30 )
            {
              v30 = v87 + 1;
              v176.m128i_i32[v87] = 0;
              v175 = v87 + 1;
            }
            if ( ++v87 == v84 )
            {
              v18 = 4LL * v30;
              v171 = v30;
              if ( v18 )
              {
                if ( v18 > 0x1CC )
                {
                  MEMORY[0x1401FCD30](&v172, 0, 0x1CCu);
                  *errno() = 34;
                  sub_14024CF6C();
                }
                else
                {
                  MEMORY[0x1401FC920](&v172, &v176, v18);
                }
                v30 = v171;
              }
              v68 = v159;
              goto LABEL_160;
            }
          }
        }
        v80 = v172.m128i_u32[0];
        v18 = 4LL * v173;
        v30 = v173;
        v171 = v173;
        if ( v18 )
        {
          if ( v18 > 0x1CC )
          {
            MEMORY[0x1401FCD30](&v172, 0, 0x1CCu);
            *errno() = 34;
            sub_14024CF6C();
          }
          else
          {
            MEMORY[0x1401FC920](&v172, Source, v18);
          }
          v30 = v171;
        }
        if ( !(_DWORD)v80 )
        {
LABEL_106:
          v30 = 0;
          v171 = 0;
LABEL_160:
          v79 = 1;
          goto LABEL_161;
        }
        if ( (_DWORD)v80 == 1 || !v30 )
          goto LABEL_160;
        LODWORD(v18) = 0;
        v81 = 0;
        do
        {
          v82 = v81++;
          v83 = (unsigned int)v18 + v80 * v172.m128i_u32[v82];
          v172.m128i_i32[v82] = v83;
          v18 = HIDWORD(v83);
        }
        while ( v81 != v30 );
      }
      else
      {
        if ( !Source[0].m128i_i32[0] )
          goto LABEL_106;
        if ( Source[0].m128i_i32[0] == 1 || !v30 )
          goto LABEL_160;
        LODWORD(v18) = 0;
        v75 = 0;
        v76 = Source[0].m128i_u32[0];
        do
        {
          v77 = v75++;
          v78 = (unsigned int)v18 + v76 * v172.m128i_u32[v77];
          v172.m128i_i32[v77] = v78;
          v18 = HIDWORD(v78);
        }
        while ( v75 != v30 );
      }
      if ( !(_DWORD)v18 )
      {
        v30 = v171;
        goto LABEL_160;
      }
      if ( v171 < 0x73 )
      {
        v172.m128i_i32[v171] = v18;
        v30 = ++v171;
        goto LABEL_160;
      }
      v30 = 0;
      v171 = 0;
      v79 = 0;
LABEL_161:
      if ( !v79 )
        goto LABEL_180;
      v68 -= v161;
      v159 = v68;
      if ( !v68 )
      {
        v67 = v162;
        v66 = v158;
        goto LABEL_164;
      }
    }
  }
  v105 = -v158;
  v161 = -v158;
  v106 = -v158 / 0xA;
  LODWORD(v160) = v106;
  v107 = v106;
  v159 = v106;
  if ( !v106 )
    goto LABEL_244;
  while ( 1 )
  {
    v108 = v107;
    if ( v107 > 0x26 )
      v108 = 38;
    v162 = v108;
    v109 = (unsigned int)(v108 - 1);
    v110 = (unsigned int)v109;
    v111 = (unsigned __int8)byte_140293703[4 * v109];
    v112 = 4LL * (unsigned __int8)byte_140293702[4 * v109];
    v173 = v111 + (unsigned __int8)byte_140293702[4 * v109];
    MEMORY[0x1401FCD30](Source, 0, v112);
    MEMORY[0x1401FC920](
      (__m128i *)((char *)Source + v112),
      (const __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_140293700[2 * v110]),
      4 * v111);
    v113 = v173;
    if ( v173 <= 1 )
    {
      if ( !Source[0].m128i_i32[0] )
        goto LABEL_186;
      if ( Source[0].m128i_i32[0] == 1 || !v21 )
        goto LABEL_240;
      LODWORD(v18) = 0;
      v114 = 0;
      v115 = Source[0].m128i_u32[0];
      do
      {
        v116 = v114++;
        v117 = (unsigned int)v18 + v115 * Destination[0].m128i_u32[v116];
        Destination[0].m128i_i32[v116] = v117;
        v18 = HIDWORD(v117);
      }
      while ( v114 != v21 );
      goto LABEL_191;
    }
    if ( v21 > 1 )
      break;
    v119 = Destination[0].m128i_u32[0];
    v18 = 4LL * v173;
    v21 = v173;
    v169 = v173;
    if ( v18 )
    {
      if ( v18 > 0x1CC )
      {
        MEMORY[0x1401FCD30](Destination, 0, 0x1CCu);
        *errno() = 34;
        sub_14024CF6C();
      }
      else
      {
        MEMORY[0x1401FC920](Destination, Source, v18);
      }
      v21 = v169;
    }
    if ( !(_DWORD)v119 )
    {
LABEL_186:
      v21 = 0;
      v169 = 0;
LABEL_240:
      v118 = 1;
      goto LABEL_241;
    }
    if ( (_DWORD)v119 == 1 || !v21 )
      goto LABEL_240;
    LODWORD(v18) = 0;
    v120 = 0;
    do
    {
      v121 = v120++;
      v122 = (unsigned int)v18 + v119 * Destination[0].m128i_u32[v121];
      Destination[0].m128i_i32[v121] = v122;
      v18 = HIDWORD(v122);
    }
    while ( v120 != v21 );
LABEL_191:
    if ( !(_DWORD)v18 )
    {
      v21 = v169;
      goto LABEL_240;
    }
    if ( v169 < 0x73 )
    {
      Destination[0].m128i_i32[v169] = v18;
      v21 = ++v169;
      goto LABEL_240;
    }
    v21 = 0;
    v169 = 0;
    v118 = 0;
LABEL_241:
    if ( !v118 )
      goto LABEL_254;
    v107 -= v162;
    v159 = v107;
    if ( !v107 )
    {
      v105 = v161;
      v106 = (unsigned int)v160;
LABEL_244:
      v134 = v105 - 10 * v106;
      if ( !v134 )
        goto LABEL_173;
      v135 = dword_140285688[v134 - 1];
      if ( v135 )
      {
        if ( v135 == 1 || !v21 )
          goto LABEL_173;
        LODWORD(v18) = 0;
        v136 = 0;
        do
        {
          v137 = v136++;
          v138 = (unsigned int)v18 + v135 * (unsigned __int64)Destination[0].m128i_u32[v137];
          Destination[0].m128i_i32[v137] = v138;
          v18 = HIDWORD(v138);
        }
        while ( v136 != v21 );
        if ( !HIDWORD(v138) )
        {
          v21 = v169;
          goto LABEL_173;
        }
        if ( v169 < 0x73 )
        {
          Destination[0].m128i_i32[v169] = HIDWORD(v138);
          v21 = ++v169;
          goto LABEL_173;
        }
      }
      goto LABEL_254;
    }
  }
  v175 = 0;
  v123 = v21;
  if ( v173 < v21 )
    v123 = v173;
  v124 = Source;
  if ( v173 >= v21 )
    v124 = Destination;
  v166 = v124;
  v125 = Destination;
  v126 = 0;
  if ( v173 >= v21 )
    v125 = Source;
  v163 = *(double *)&v125;
  if ( v173 < v21 )
    v113 = v21;
  v21 = 0;
  while ( 1 )
  {
    v127 = v124->m128i_u32[v126];
    if ( (_DWORD)v127 )
      break;
    if ( v126 == v21 )
    {
      v21 = v126 + 1;
      v176.m128i_i32[v126] = 0;
      v175 = v126 + 1;
    }
LABEL_233:
    if ( ++v126 == v123 )
    {
      v18 = 4LL * v21;
      v169 = v21;
      if ( v18 )
      {
        if ( v18 > 0x1CC )
        {
          MEMORY[0x1401FCD30](Destination, 0, 0x1CCu);
          *errno() = 34;
          sub_14024CF6C();
        }
        else
        {
          MEMORY[0x1401FC920](Destination, &v176, v18);
        }
        v21 = v169;
      }
      v107 = v159;
      goto LABEL_240;
    }
  }
  LODWORD(v128) = 0;
  v18 = v126;
  if ( !v113 )
    goto LABEL_231;
  while ( (_DWORD)v18 != 115 )
  {
    v129 = (unsigned int)v18;
    if ( (_DWORD)v18 == v21 )
    {
      v176.m128i_i32[(unsigned int)v18] = 0;
      v175 = v18 + 1;
    }
    v130 = (unsigned int)v18 - v126;
    v18 = (unsigned int)(v18 + 1);
    v131 = v176.m128i_u32[v129] + (unsigned int)v128 + v127 * v125->m128i_u32[v130];
    v176.m128i_i32[v129] = v131;
    v21 = v175;
    v128 = HIDWORD(v131);
    if ( (_DWORD)v18 - v126 == v113 )
      break;
    v125 = *(__m128i **)&v163;
  }
  if ( !(_DWORD)v128 )
  {
LABEL_231:
    if ( (_DWORD)v18 == 115 )
      goto LABEL_254;
    v124 = v166;
    v125 = *(__m128i **)&v163;
    goto LABEL_233;
  }
  while ( (_DWORD)v18 != 115 )
  {
    v132 = (unsigned int)v18;
    if ( (_DWORD)v18 == v21 )
    {
      v176.m128i_i32[(unsigned int)v18] = 0;
      v175 = v18 + 1;
    }
    v133 = v176.m128i_u32[(unsigned int)v18];
    v18 = (unsigned int)(v18 + 1);
    v176.m128i_i32[v132] = v133 + v128;
    v21 = v175;
    LODWORD(v128) = (v133 + (unsigned __int64)(unsigned int)v128) >> 32;
    if ( !(_DWORD)v128 )
      goto LABEL_231;
  }
LABEL_254:
  v100 = v165;
  v101 = v165;
  v169 = 0;
LABEL_256:
  v139 = sub_1402320F0(
           (__crt_strtox *)&v169,
           (struct __crt_strtox::big_integer *)&v171,
           (const struct __crt_strtox::big_integer *)v18);
  v140 = v158;
  if ( v139 == 10 )
  {
    v140 = v158 + 1;
    *v100 = 49;
    v101 = v100 + 1;
    if ( v30 )
    {
      LODWORD(v141) = 0;
      v142 = 0;
      do
      {
        v143 = v142++;
        v144 = (unsigned int)v141 + 10LL * v172.m128i_u32[v143];
        v172.m128i_i32[v143] = v144;
        v141 = HIDWORD(v144);
      }
      while ( v142 != v30 );
      if ( (_DWORD)v141 )
      {
        if ( v171 >= 0x73 )
        {
          v173 = 0;
          v171 = 0;
          sub_1402697BC(&v172, 460, Source, 0);
        }
        else
        {
          v172.m128i_i32[v171++] = v141;
        }
      }
    }
  }
  else if ( v139 )
  {
    v101 = v100 + 1;
    *v100 = v139 + 48;
  }
  else
  {
    v140 = v158 - 1;
  }
  *v167 = v140;
  v145 = v164;
  if ( v140 >= 0 && v164 <= 0x7FFFFFFF )
    v145 = v140 + v164;
  if ( v168 - 1 < v145 )
    v145 = v168 - 1;
  for ( i = &v100[v145]; v101 != i; v101 += v155 )
  {
    v147 = v169;
    if ( !v169 )
      break;
    LODWORD(v148) = 0;
    v149 = 0;
    do
    {
      v150 = v149++;
      v151 = (unsigned int)v148 + 1000000000LL * Destination[0].m128i_u32[v150];
      Destination[0].m128i_i32[v150] = v151;
      v148 = (const struct __crt_strtox::big_integer *)HIDWORD(v151);
    }
    while ( v149 != v147 );
    if ( HIDWORD(v151) )
    {
      if ( v169 >= 0x73 )
      {
        v173 = 0;
        v169 = 0;
        sub_1402697BC(Destination, 460, Source, 0);
      }
      else
      {
        Destination[0].m128i_i32[v169++] = HIDWORD(v151);
      }
    }
    v152 = sub_1402320F0((__crt_strtox *)&v169, (struct __crt_strtox::big_integer *)&v171, v148);
    for ( j = 8; j != -1; --j )
    {
      v154 = v152 % 0xA + 48;
      v152 /= 0xAu;
      if ( (int)i - (int)v101 >= j )
        v101[j] = v154;
    }
    v155 = i - v101;
    if ( i - v101 > 9 )
      v155 = 9;
  }
  *v101 = 0;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v157 ^ v177);
}

