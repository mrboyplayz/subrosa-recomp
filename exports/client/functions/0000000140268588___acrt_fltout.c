/* Address: 0x140268588 | Name: __acrt_fltout | Size: 4657 bytes */
__int64 __fastcall _acrt_fltout(__int64 a1, int a2, __int64 a3, _BYTE *a4, __int64 SizeInBytes)
{
  __int64 v8; // rax
  bool v9; // sf
  int v10; // ecx
  const char *v11; // r8
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned __int64 v16; // rdi
  unsigned int v17; // r15d
  double v18; // xmm0_8
  double v19; // xmm0_8
  unsigned __int64 v20; // rdi
  unsigned int v21; // r13d
  unsigned int v22; // edx
  int v23; // r8d
  unsigned int v24; // r11d
  unsigned __int64 v25; // r8
  int v26; // edi
  bool v27; // zf
  int v28; // eax
  int v29; // eax
  unsigned int v30; // ebx
  unsigned int v31; // eax
  char v32; // cl
  unsigned int v33; // r14d
  unsigned int v34; // r10d
  __int64 v35; // rax
  __int64 v36; // rcx
  __int32 v37; // r9d
  __int32 v38; // edx
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // r15d
  unsigned int v42; // r11d
  int v43; // edi
  int v44; // eax
  int v45; // eax
  unsigned int v46; // ebx
  unsigned int v47; // eax
  char v48; // cl
  unsigned int v49; // r10d
  __int64 v50; // rax
  __int64 v51; // rcx
  __int32 v52; // r9d
  __int32 v53; // edx
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // r8d
  int v57; // eax
  int v58; // eax
  unsigned int v59; // ebx
  unsigned int v60; // eax
  __int64 v61; // r10
  __int64 v62; // r8
  __int32 v63; // r9d
  unsigned __int32 v64; // ecx
  unsigned int v65; // edi
  int v66; // eax
  int v67; // eax
  int v68; // ebx
  unsigned int v69; // eax
  __int64 v70; // r10
  __int64 v71; // r8
  __int32 v72; // r9d
  unsigned __int32 v73; // ecx
  unsigned int v74; // eax
  unsigned int v75; // r12d
  int v76; // r13d
  __int64 v77; // rax
  __int64 v78; // rsi
  unsigned __int64 v79; // rbx
  unsigned int v80; // r10d
  __int64 v81; // r10
  __int64 v82; // r9
  unsigned __int64 v83; // rcx
  char v84; // al
  __int64 v85; // rbx
  __int64 v86; // r9
  unsigned __int64 v87; // rcx
  unsigned int v88; // r12d
  __m128i *v89; // r13
  __m128i *v90; // rdx
  __int64 v91; // r9
  __int64 v92; // rsi
  unsigned __int64 v93; // r11
  __int64 v94; // rdi
  __int64 v95; // rax
  unsigned __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rax
  int v99; // eax
  unsigned int v100; // eax
  __int64 v101; // r9
  unsigned __int64 v102; // rcx
  _BYTE *v103; // rdi
  _BYTE *v104; // rbx
  unsigned int v105; // r9d
  __int64 v106; // rdx
  unsigned __int64 v107; // r8
  unsigned int v108; // r13d
  unsigned int v109; // eax
  unsigned int v110; // r12d
  int v111; // eax
  __int64 v112; // rax
  __int64 v113; // rdi
  __int64 v114; // rsi
  unsigned __int64 v115; // rbx
  unsigned int v116; // r10d
  __int64 v117; // r10
  __int64 v118; // r9
  unsigned __int64 v119; // rcx
  char v120; // al
  __int64 v121; // rbx
  __int64 v122; // r9
  unsigned __int64 v123; // rcx
  unsigned int v124; // r12d
  __m128i *v125; // rcx
  __m128i *v126; // rdx
  __int64 v127; // r9
  __int64 v128; // rsi
  unsigned __int64 v129; // r11
  __int64 v130; // rdi
  __int64 v131; // rax
  unsigned __int64 v132; // rdx
  __int64 v133; // rdx
  unsigned __int64 v134; // rcx
  unsigned int v135; // r13d
  unsigned int v136; // eax
  __int64 v137; // r9
  unsigned __int64 v138; // rcx
  int v139; // eax
  int v140; // esi
  unsigned __int64 v141; // r8
  unsigned int v142; // r9d
  __int64 v143; // rdx
  unsigned __int64 v144; // r8
  unsigned int v145; // edx
  __int64 v146; // rax
  _BYTE *i; // rdi
  unsigned int v148; // r10d
  const struct __crt_strtox::big_integer *v149; // r8
  unsigned int v150; // r9d
  __int64 v151; // rdx
  unsigned __int64 v152; // rcx
  unsigned int v153; // r8d
  unsigned int j; // r9d
  char v155; // cl
  __int64 v156; // rax
  _QWORD v158[6]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v159; // [rsp+30h] [rbp-D0h]
  __int64 X; // [rsp+38h] [rbp-C8h]
  unsigned int v161; // [rsp+40h] [rbp-C0h]
  unsigned int v162; // [rsp+44h] [rbp-BCh]
  __int64 v163; // [rsp+48h] [rbp-B8h]
  unsigned int v164; // [rsp+50h] [rbp-B0h]
  __int64 Env; // [rsp+58h] [rbp-A8h] BYREF
  char v166; // [rsp+60h] [rbp-A0h]
  _BYTE *v167; // [rsp+68h] [rbp-98h]
  __m128i *v168; // [rsp+70h] [rbp-90h]
  __int64 v169; // [rsp+78h] [rbp-88h]
  unsigned int v170; // [rsp+80h] [rbp-80h] BYREF
  __m128i Destination[28]; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v172; // [rsp+250h] [rbp+150h] BYREF
  __m128i v173; // [rsp+254h] [rbp+154h] BYREF
  unsigned int v174; // [rsp+420h] [rbp+320h]
  __m128i Source[28]; // [rsp+424h] [rbp+324h] BYREF
  unsigned int v176; // [rsp+5F0h] [rbp+4F0h]
  __m128i v177; // [rsp+5F4h] [rbp+4F4h] BYREF
  __int64 v178; // [rsp+7C0h] [rbp+6C0h]

  X = a1;
  v167 = a4;
  v169 = a3;
  fegetenv((fenv_t *)&Env);
  if ( (Env & 0x1F) == 0x1F )
  {
    v166 = 0;
  }
  else
  {
    feholdexcept((#70 *)&Env);
    v166 = 1;
  }
  v8 = X;
  v9 = X < 0;
  *(_QWORD *)(a3 + 8) = a4;
  v10 = 32;
  if ( v9 )
    v10 = 45;
  *(_DWORD *)a3 = v10;
  if ( (((unsigned __int64)v8 >> 52) & 0x7FF) == 0 && (v8 & 0xFFFFFFFFFFFFFLL) == 0 )
  {
    *(_DWORD *)(a3 + 4) = 0;
    v11 = (const char *)&unk_140293798;
    goto LABEL_316;
  }
  if ( (((unsigned __int64)v8 >> 52) & 0x7FF) == 0x7FF )
  {
    if ( (v8 & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      if ( v8 < 0 && (v8 & 0xFFFFFFFFFFFFFLL) == 0x8000000000000LL )
        v12 = 4;
      else
        v12 = ((v8 & 0x8000000000000LL) == 0) | 2;
    }
    else
    {
      v12 = 1;
    }
    *(_DWORD *)(a3 + 4) = 1;
  }
  else
  {
    v12 = 0;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v11 = "1#INF";
LABEL_316:
    if ( (unsigned int)strcpy_s(a4, SizeInBytes, (__int64)v11) )
    {
      v158[4] = 0;
      sub_14024CFBC();
      JUMPOUT(0x1402697B8LL);
    }
    goto LABEL_310;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v11 = "1#QNAN";
    goto LABEL_316;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v11 = "1#SNAN";
    goto LABEL_316;
  }
  if ( v15 == 1 )
  {
    v11 = "1#IND";
    goto LABEL_316;
  }
  X = v8 & 0x7FFFFFFFFFFFFFFFLL;
  v164 = a2 + 1;
  v163 = v8 & 0x7FFFFFFFFFFFFFFFLL;
  v16 = (v8 & 0xFFFFFFFFFFFFFLL)
      + (-(__int64)((((v8 & 0x7FFFFFFFFFFFFFFFuLL) >> 52) & 0x7FF) != 0) & 0x10000000000000LL);
  v17 = (((v8 & 0x7FFFFFFFFFFFFFFFuLL) >> 52) & 0x7FF) + 2 - ((((v8 & 0x7FFFFFFFFFFFFFFFuLL) >> 52) & 0x7FF) != 0);
  v18 = log10(COERCE_DOUBLE(v8 & 0x7FFFFFFFFFFFFFFFLL));
  v19 = ceil(v18);
  Destination[0].m128i_i32[0] = v16;
  v20 = HIDWORD(v16);
  v21 = (((int)v19 - 0x7FFFFFFF) & 0xFFFFFFFE) != 0 ? (int)v19 : 0;
  Destination[0].m128i_i32[1] = v20;
  v161 = v21;
  v22 = ((_DWORD)v20 != 0) + 1;
  v170 = v22;
  if ( v17 < 0x434 )
  {
    if ( v17 != 54 )
    {
      Source[0].m128i_i64[0] = 0x10000000000000LL;
      v174 = 2;
      if ( (_DWORD)v20 )
      {
        v56 = 0;
        while ( Source[0].m128i_i32[v56] == Destination[0].m128i_i32[v56] )
        {
          if ( ++v56 == 2 )
          {
            v27 = !_BitScanReverse((unsigned int *)&v57, v20);
            LODWORD(X) = 0;
            if ( v27 )
              v58 = 0;
            else
              v58 = v57 + 1;
            v59 = 32 - v58;
            v33 = ((_DWORD)v20 != 0) + 1;
            v60 = v33;
            while ( 1 )
            {
              v61 = v60;
              v62 = v60 - 1;
              v63 = v60 >= v22 ? 0 : Destination[0].m128i_i32[v60];
              v64 = (unsigned int)v62 >= v22 ? 0 : Destination[0].m128i_i32[v62];
              --v60;
              Destination[0].m128i_i32[v61] = (4 * v63) | (v64 >> 30);
              if ( (_DWORD)v62 == -1 )
                break;
              v22 = v170;
            }
            if ( v59 < 2 )
              v33 = ((_DWORD)v20 != 0) + 2;
            v170 = v33;
            v65 = (1078 - v17) >> 5;
            MEMORY[0x1401FCD30](Source, 0, 4LL * v65);
            Source[0].m128i_i32[v65] = 1 << ((54 - v17) & 0x1F);
            goto LABEL_101;
          }
        }
      }
    }
    LODWORD(X) = 0;
    v27 = !_BitScanReverse((unsigned int *)&v66, Destination[0].m128i_u32[(_DWORD)v20 != 0]);
    if ( v27 )
      v67 = 0;
    else
      v67 = v66 + 1;
    v68 = 32 - v67;
    v33 = ((_DWORD)v20 != 0) + 1;
    v69 = v33;
    while ( 1 )
    {
      v70 = v69;
      v71 = v69 - 1;
      v72 = v69 >= v22 ? 0 : Destination[0].m128i_i32[v69];
      v73 = (unsigned int)v71 >= v22 ? 0 : Destination[0].m128i_i32[v71];
      --v69;
      Destination[0].m128i_i32[v70] = (2 * v72) | (v73 >> 31);
      if ( (_DWORD)v71 == -1 )
        break;
      v22 = v170;
    }
    if ( !v68 )
      v33 = ((_DWORD)v20 != 0) + 2;
    v170 = v33;
    v65 = (1077 - v17) >> 5;
    MEMORY[0x1401FCD30](Source, 0, 4LL * v65);
    Source[0].m128i_i32[v65] = 1 << ((53 - v17) & 0x1F);
LABEL_101:
    v41 = v65 + 1;
    v25 = 4LL * (v65 + 1);
    v174 = v65 + 1;
    v172 = v65 + 1;
    if ( v25 )
    {
      if ( v25 > 0x1CC )
      {
        MEMORY[0x1401FCD30](&v173, 0, 0x1CCu);
        *errno() = 34;
        sub_14024CF6C();
      }
      else
      {
        MEMORY[0x1401FC920](&v173, Source, v25);
      }
      v41 = v172;
    }
  }
  else
  {
    Source[0].m128i_i64[0] = 0x10000000000000LL;
    v174 = 2;
    if ( (_DWORD)v20 )
    {
      v23 = 0;
      while ( Source[0].m128i_i32[v23] == Destination[0].m128i_i32[v23] )
      {
        if ( ++v23 == 2 )
        {
          LODWORD(X) = 0;
          v24 = (v17 - 1074) & 0x1F;
          v25 = (v17 - 1074) >> 5;
          v26 = (1LL << (32 - ((v17 - 50) & 0x1F))) - 1;
          v27 = !_BitScanReverse((unsigned int *)&v28, Destination[0].m128i_u32[v22 - 1]);
          if ( v27 )
            v29 = 0;
          else
            v29 = v28 + 1;
          v30 = 32 - v29;
          v31 = v22 + v25;
          if ( v22 + (_DWORD)v25 != 115 || (v32 = 1, v24 <= v30) )
            v32 = 0;
          if ( v31 > 0x73 || v32 )
          {
            v33 = 0;
          }
          else
          {
            v33 = 114;
            if ( v31 < 0x72 )
              v33 = v22 + v25;
            v34 = v33;
            while ( v34 >= (unsigned int)v25 )
            {
              v35 = v34 - (unsigned int)v25;
              v36 = (unsigned int)(v35 - 1);
              v37 = (unsigned int)v35 >= v22 ? 0 : Destination[0].m128i_i32[v35];
              v38 = (unsigned int)v36 >= v22 ? 0 : Destination[0].m128i_i32[v36];
              v39 = v34--;
              Destination[0].m128i_i32[v39] = ((v26 & v37) << v24) | ((~v26 & (unsigned int)v38) >> (32 - v24));
              if ( v34 == -1 )
                break;
              v22 = v170;
            }
            v40 = 0;
            if ( (_DWORD)v25 )
            {
              do
              {
                Destination[0].m128i_i32[v40] = 0;
                v40 = (unsigned int)(v40 + 1);
              }
              while ( (_DWORD)v40 != (_DWORD)v25 );
            }
            if ( v24 > v30 )
              ++v33;
          }
          Source[0].m128i_i32[1] = 0;
          v41 = 1;
          v172 = 1;
          v170 = v33;
          v174 = 1;
          v173.m128i_i32[0] = 4;
          goto LABEL_121;
        }
      }
    }
    LODWORD(X) = 0;
    v42 = (v17 - 1075) & 0x1F;
    v25 = (v17 - 1075) >> 5;
    v43 = (1LL << (32 - ((v17 - 51) & 0x1F))) - 1;
    v27 = !_BitScanReverse((unsigned int *)&v44, Destination[0].m128i_u32[v22 - 1]);
    if ( v27 )
      v45 = 0;
    else
      v45 = v44 + 1;
    v46 = 32 - v45;
    v47 = v22 + v25;
    if ( v22 + (_DWORD)v25 != 115 || (v48 = 1, v42 <= v46) )
      v48 = 0;
    if ( v47 > 0x73 || v48 )
    {
      v33 = 0;
    }
    else
    {
      v33 = 114;
      if ( v47 < 0x72 )
        v33 = v22 + v25;
      v49 = v33;
      while ( v49 >= (unsigned int)v25 )
      {
        v50 = v49 - (unsigned int)v25;
        v51 = (unsigned int)(v50 - 1);
        v52 = (unsigned int)v50 >= v22 ? 0 : Destination[0].m128i_i32[v50];
        v53 = (unsigned int)v51 >= v22 ? 0 : Destination[0].m128i_i32[v51];
        v54 = v49--;
        Destination[0].m128i_i32[v54] = ((v43 & v52) << v42) | ((~v43 & (unsigned int)v53) >> (32 - v42));
        if ( v49 == -1 )
          break;
        v22 = v170;
      }
      v55 = 0;
      if ( (_DWORD)v25 )
      {
        do
        {
          Destination[0].m128i_i32[v55] = 0;
          v55 = (unsigned int)(v55 + 1);
        }
        while ( (_DWORD)v55 != (_DWORD)v25 );
      }
      if ( v42 > v46 )
        ++v33;
    }
    Source[0].m128i_i32[1] = 0;
    v41 = 1;
    v172 = 1;
    v170 = v33;
    v174 = 1;
    v173.m128i_i32[0] = 2;
  }
LABEL_121:
  if ( (v21 & 0x80000000) == 0 )
  {
    v74 = v21 / 0xA;
    LODWORD(X) = v21 / 0xA;
    v75 = v21 / 0xA;
    v159 = v21 / 0xA;
    if ( !(v21 / 0xA) )
    {
LABEL_185:
      v99 = 10 * v74;
      if ( v21 != v99 )
      {
        v100 = dword_140285688[v21 - v99 - 1];
        if ( !v100 )
          goto LABEL_201;
        if ( v100 != 1 && v41 )
        {
          LODWORD(v25) = 0;
          v101 = 0;
          do
          {
            v102 = (unsigned int)v25 + v100 * (unsigned __int64)v173.m128i_u32[v101];
            v173.m128i_i32[v101] = v102;
            v25 = HIDWORD(v102);
            v101 = (unsigned int)(v101 + 1);
          }
          while ( (_DWORD)v101 != v41 );
          if ( HIDWORD(v102) )
          {
            if ( v172 >= 0x73 )
              goto LABEL_201;
            v173.m128i_i32[v172] = HIDWORD(v102);
            v41 = v172 + 1;
            goto LABEL_202;
          }
          v41 = v172;
        }
      }
LABEL_195:
      v103 = v167;
      v104 = v167;
      if ( v33 )
      {
        LODWORD(v25) = 0;
        v105 = 0;
        do
        {
          v106 = v105++;
          v107 = (unsigned int)v25 + 10LL * Destination[0].m128i_u32[v106];
          Destination[0].m128i_i32[v106] = v107;
          v25 = HIDWORD(v107);
        }
        while ( v105 != v33 );
        if ( (_DWORD)v25 )
        {
          if ( v170 >= 0x73 )
          {
            v174 = 0;
            v170 = 0;
            sub_1402697BC(Destination, 460, Source, 0);
          }
          else
          {
            Destination[0].m128i_i32[v170++] = v25;
          }
        }
      }
      goto LABEL_278;
    }
    while ( 1 )
    {
      v76 = v75;
      if ( v75 > 0x26 )
        v76 = 38;
      v162 = v76;
      v77 = (unsigned int)(v76 - 1);
      v78 = (unsigned __int8)byte_140293703[4 * v77];
      v79 = 4LL * (unsigned __int8)byte_140293702[4 * v77];
      v174 = v78 + (unsigned __int8)byte_140293702[4 * v77];
      MEMORY[0x1401FCD30](Source, 0, v79);
      MEMORY[0x1401FC920](
        (__m128i *)((char *)Source + v79),
        (const __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_140293700[2 * (v76 - 1)]),
        4 * v78);
      v80 = v174;
      if ( v174 > 1 )
      {
        if ( v41 > 1 )
        {
          v88 = v41;
          v89 = Source;
          if ( v174 >= v41 )
            v89 = &v173;
          v90 = &v173;
          if ( v174 >= v41 )
            v90 = Source;
          else
            v88 = v174;
          v163 = (__int64)v90;
          if ( v174 < v41 )
            v80 = v41;
          v41 = 0;
          v91 = 0;
          v176 = 0;
          while ( 1 )
          {
            v92 = v89->m128i_u32[v91];
            if ( (_DWORD)v92 )
            {
              LODWORD(v93) = 0;
              v25 = (unsigned int)v91;
              if ( v80 )
              {
                while ( (_DWORD)v25 != 115 )
                {
                  v94 = (unsigned int)v25;
                  if ( (_DWORD)v25 == v41 )
                  {
                    v177.m128i_i32[(unsigned int)v25] = 0;
                    v176 = v25 + 1;
                  }
                  v95 = (unsigned int)(v25 - v91);
                  v25 = (unsigned int)(v25 + 1);
                  v96 = (unsigned int)v93 + v177.m128i_u32[v94] + v92 * v90->m128i_u32[v95];
                  v177.m128i_i32[v94] = v96;
                  v41 = v176;
                  v93 = HIDWORD(v96);
                  if ( (_DWORD)v25 - (_DWORD)v91 == v80 )
                    break;
                  v90 = (__m128i *)v163;
                }
                if ( (_DWORD)v93 )
                {
                  while ( (_DWORD)v25 != 115 )
                  {
                    v97 = (unsigned int)v25;
                    if ( (_DWORD)v25 == v41 )
                    {
                      v177.m128i_i32[(unsigned int)v25] = 0;
                      v176 = v25 + 1;
                    }
                    v98 = v177.m128i_u32[(unsigned int)v25];
                    v25 = (unsigned int)(v25 + 1);
                    v177.m128i_i32[v97] = v98 + v93;
                    v41 = v176;
                    LODWORD(v93) = (v98 + (unsigned __int64)(unsigned int)v93) >> 32;
                    if ( !(_DWORD)v93 )
                      goto LABEL_172;
                  }
LABEL_201:
                  v41 = 0;
LABEL_202:
                  v172 = v41;
                  goto LABEL_195;
                }
              }
LABEL_172:
              if ( (_DWORD)v25 == 115 )
                goto LABEL_201;
              v90 = (__m128i *)v163;
            }
            else if ( (_DWORD)v91 == v41 )
            {
              v177.m128i_i32[v91] = 0;
              v41 = v91 + 1;
              v176 = v91 + 1;
            }
            v91 = (unsigned int)(v91 + 1);
            if ( (_DWORD)v91 == v88 )
            {
              v25 = 4LL * v41;
              v172 = v41;
              if ( v25 )
              {
                if ( v25 > 0x1CC )
                {
                  MEMORY[0x1401FCD30](&v173, 0, 0x1CCu);
                  *errno() = 34;
                  sub_14024CF6C();
                }
                else
                {
                  MEMORY[0x1401FC920](&v173, &v177, v25);
                }
                v41 = v172;
              }
              v75 = v159;
              v76 = v162;
              goto LABEL_181;
            }
          }
        }
        v85 = v173.m128i_u32[0];
        v25 = 4LL * v174;
        v41 = v174;
        v172 = v174;
        if ( v25 )
        {
          if ( v25 > 0x1CC )
          {
            MEMORY[0x1401FCD30](&v173, 0, 0x1CCu);
            *errno() = 34;
            sub_14024CF6C();
          }
          else
          {
            MEMORY[0x1401FC920](&v173, Source, v25);
          }
          v41 = v172;
        }
        if ( !(_DWORD)v85 )
        {
LABEL_127:
          v41 = 0;
          goto LABEL_128;
        }
        if ( (_DWORD)v85 == 1 || !v41 )
          goto LABEL_181;
        LODWORD(v25) = 0;
        v86 = 0;
        do
        {
          v87 = (unsigned int)v25 + v85 * v173.m128i_u32[v86];
          v173.m128i_i32[v86] = v87;
          v25 = HIDWORD(v87);
          v86 = (unsigned int)(v86 + 1);
        }
        while ( (_DWORD)v86 != v41 );
      }
      else
      {
        if ( !Source[0].m128i_i32[0] )
          goto LABEL_127;
        if ( Source[0].m128i_i32[0] == 1 || !v41 )
          goto LABEL_181;
        LODWORD(v25) = 0;
        v81 = Source[0].m128i_u32[0];
        v82 = 0;
        do
        {
          v83 = (unsigned int)v25 + v81 * v173.m128i_u32[v82];
          v173.m128i_i32[v82] = v83;
          v25 = HIDWORD(v83);
          v82 = (unsigned int)(v82 + 1);
        }
        while ( (_DWORD)v82 != v41 );
      }
      if ( !(_DWORD)v25 )
        break;
      if ( v172 < 0x73 )
      {
        v173.m128i_i32[v172] = v25;
        v41 = v172 + 1;
LABEL_128:
        v172 = v41;
LABEL_181:
        v84 = 1;
        goto LABEL_182;
      }
      v41 = 0;
      v172 = 0;
      v84 = 0;
LABEL_182:
      if ( !v84 )
        goto LABEL_201;
      v75 -= v76;
      v159 = v75;
      if ( !v75 )
      {
        v74 = X;
        v21 = v161;
        goto LABEL_185;
      }
    }
    v41 = v172;
    goto LABEL_181;
  }
  v108 = -v21;
  v109 = v108 / 0xA;
  v162 = v108 / 0xA;
  v110 = v108 / 0xA;
  v159 = v108 / 0xA;
  if ( !(v108 / 0xA) )
    goto LABEL_266;
  while ( 1 )
  {
    v111 = v110;
    if ( v110 > 0x26 )
      v111 = 38;
    LODWORD(X) = v111;
    v112 = (unsigned int)(v111 - 1);
    v113 = (unsigned int)v112;
    v114 = (unsigned __int8)byte_140293703[4 * v112];
    v115 = 4LL * (unsigned __int8)byte_140293702[4 * v112];
    v174 = v114 + (unsigned __int8)byte_140293702[4 * v112];
    MEMORY[0x1401FCD30](Source, 0, v115);
    MEMORY[0x1401FC920](
      (__m128i *)((char *)Source + v115),
      (const __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_140293700[2 * v113]),
      4 * v114);
    v116 = v174;
    if ( v174 <= 1 )
    {
      if ( !Source[0].m128i_i32[0] )
        goto LABEL_208;
      if ( Source[0].m128i_i32[0] == 1 || !v33 )
        goto LABEL_262;
      LODWORD(v25) = 0;
      v117 = Source[0].m128i_u32[0];
      v118 = 0;
      do
      {
        v119 = (unsigned int)v25 + v117 * Destination[0].m128i_u32[v118];
        Destination[0].m128i_i32[v118] = v119;
        v25 = HIDWORD(v119);
        v118 = (unsigned int)(v118 + 1);
      }
      while ( (_DWORD)v118 != v33 );
      goto LABEL_214;
    }
    if ( v33 > 1 )
      break;
    v121 = Destination[0].m128i_u32[0];
    v25 = 4LL * v174;
    v33 = v174;
    v170 = v174;
    if ( v25 )
    {
      if ( v25 > 0x1CC )
      {
        MEMORY[0x1401FCD30](Destination, 0, 0x1CCu);
        *errno() = 34;
        sub_14024CF6C();
      }
      else
      {
        MEMORY[0x1401FC920](Destination, Source, v25);
      }
      v33 = v170;
    }
    if ( !(_DWORD)v121 )
    {
LABEL_208:
      v33 = 0;
      goto LABEL_209;
    }
    if ( (_DWORD)v121 == 1 || !v33 )
      goto LABEL_262;
    LODWORD(v25) = 0;
    v122 = 0;
    do
    {
      v123 = (unsigned int)v25 + v121 * Destination[0].m128i_u32[v122];
      Destination[0].m128i_i32[v122] = v123;
      v25 = HIDWORD(v123);
      v122 = (unsigned int)(v122 + 1);
    }
    while ( (_DWORD)v122 != v33 );
LABEL_214:
    if ( !(_DWORD)v25 )
    {
      v33 = v170;
      goto LABEL_262;
    }
    if ( v170 < 0x73 )
    {
      Destination[0].m128i_i32[v170] = v25;
      v33 = v170 + 1;
LABEL_209:
      v170 = v33;
LABEL_262:
      v120 = 1;
      goto LABEL_263;
    }
    v33 = 0;
    v170 = 0;
    v120 = 0;
LABEL_263:
    if ( !v120 )
      goto LABEL_276;
    v110 -= X;
    v159 = v110;
    if ( !v110 )
    {
      v109 = v162;
LABEL_266:
      v135 = v108 - 10 * v109;
      if ( !v135 )
        goto LABEL_195;
      v136 = dword_140285688[v135 - 1];
      if ( v136 )
      {
        if ( v136 == 1 || !v33 )
          goto LABEL_195;
        LODWORD(v25) = 0;
        v137 = 0;
        do
        {
          v138 = (unsigned int)v25 + v136 * (unsigned __int64)Destination[0].m128i_u32[v137];
          Destination[0].m128i_i32[v137] = v138;
          v25 = HIDWORD(v138);
          v137 = (unsigned int)(v137 + 1);
        }
        while ( (_DWORD)v137 != v33 );
        if ( !HIDWORD(v138) )
        {
          v33 = v170;
          goto LABEL_195;
        }
        if ( v170 < 0x73 )
        {
          Destination[0].m128i_i32[v170] = HIDWORD(v138);
          v33 = ++v170;
          goto LABEL_195;
        }
      }
      goto LABEL_276;
    }
  }
  v124 = v33;
  v125 = Source;
  if ( v174 < v33 )
    v124 = v174;
  else
    v125 = Destination;
  v168 = v125;
  v126 = Destination;
  if ( v174 >= v33 )
    v126 = Source;
  v163 = (__int64)v126;
  if ( v174 < v33 )
    v116 = v33;
  v33 = 0;
  v127 = 0;
  v176 = 0;
  while ( 1 )
  {
    v128 = v125->m128i_u32[v127];
    if ( (_DWORD)v128 )
      break;
    if ( (_DWORD)v127 == v33 )
    {
      v177.m128i_i32[v127] = 0;
      v33 = v127 + 1;
      v176 = v127 + 1;
    }
LABEL_255:
    v127 = (unsigned int)(v127 + 1);
    if ( (_DWORD)v127 == v124 )
    {
      v25 = 4LL * v33;
      v170 = v33;
      if ( v25 )
      {
        if ( v25 > 0x1CC )
        {
          MEMORY[0x1401FCD30](Destination, 0, 0x1CCu);
          *errno() = 34;
          sub_14024CF6C();
        }
        else
        {
          MEMORY[0x1401FC920](Destination, &v177, v25);
        }
        v33 = v170;
      }
      v110 = v159;
      goto LABEL_262;
    }
  }
  LODWORD(v129) = 0;
  v25 = (unsigned int)v127;
  if ( !v116 )
    goto LABEL_253;
  while ( (_DWORD)v25 != 115 )
  {
    v130 = (unsigned int)v25;
    if ( (_DWORD)v25 == v33 )
    {
      v177.m128i_i32[(unsigned int)v25] = 0;
      v176 = v25 + 1;
    }
    v131 = (unsigned int)(v25 - v127);
    v25 = (unsigned int)(v25 + 1);
    v132 = (unsigned int)v129 + v177.m128i_u32[v130] + v128 * v126->m128i_u32[v131];
    v177.m128i_i32[v130] = v132;
    v33 = v176;
    v129 = HIDWORD(v132);
    if ( (_DWORD)v25 - (_DWORD)v127 == v116 )
      break;
    v126 = (__m128i *)v163;
  }
  if ( !(_DWORD)v129 )
  {
LABEL_253:
    if ( (_DWORD)v25 == 115 )
      goto LABEL_276;
    v125 = v168;
    v126 = (__m128i *)v163;
    goto LABEL_255;
  }
  while ( (_DWORD)v25 != 115 )
  {
    v133 = (unsigned int)v25;
    if ( (_DWORD)v25 == v33 )
    {
      v177.m128i_i32[(unsigned int)v25] = 0;
      v176 = v25 + 1;
    }
    v25 = (unsigned int)(v25 + 1);
    v134 = (unsigned int)v129 + (unsigned __int64)v177.m128i_u32[v133];
    v177.m128i_i32[v133] = v134;
    v33 = v176;
    LODWORD(v129) = HIDWORD(v134);
    if ( !HIDWORD(v134) )
      goto LABEL_253;
  }
LABEL_276:
  v170 = 0;
  v103 = v167;
  v104 = v167;
LABEL_278:
  v139 = sub_1402320F0(
           (__crt_strtox *)&v170,
           (struct __crt_strtox::big_integer *)&v172,
           (const struct __crt_strtox::big_integer *)v25);
  v140 = v161;
  if ( v139 == 10 )
  {
    v140 = v161 + 1;
    *v103 = 49;
    v104 = v103 + 1;
    if ( v41 )
    {
      LODWORD(v141) = 0;
      v142 = 0;
      do
      {
        v143 = v142++;
        v144 = (unsigned int)v141 + 10LL * v173.m128i_u32[v143];
        v173.m128i_i32[v143] = v144;
        v141 = HIDWORD(v144);
      }
      while ( v142 != v41 );
      if ( (_DWORD)v141 )
      {
        if ( v172 >= 0x73 )
        {
          v174 = 0;
          v172 = 0;
          sub_1402697BC(&v173, 460, Source, 0);
        }
        else
        {
          v173.m128i_i32[v172++] = v141;
        }
      }
    }
  }
  else if ( v139 )
  {
    v104 = v103 + 1;
    *v103 = v139 + 48;
  }
  else
  {
    v140 = v161 - 1;
  }
  v145 = v164;
  *(_DWORD *)(v169 + 4) = v140;
  if ( v140 >= 0 && v145 <= 0x7FFFFFFF )
    v145 += v140;
  v146 = v145;
  if ( SizeInBytes - 1 < (unsigned __int64)v145 )
    v146 = SizeInBytes - 1;
  for ( i = &v103[v146]; v104 != i; v104 += v156 )
  {
    v148 = v170;
    if ( !v170 )
      break;
    LODWORD(v149) = 0;
    v150 = 0;
    do
    {
      v151 = v150++;
      v152 = (unsigned int)v149 + 1000000000LL * Destination[0].m128i_u32[v151];
      Destination[0].m128i_i32[v151] = v152;
      v149 = (const struct __crt_strtox::big_integer *)HIDWORD(v152);
    }
    while ( v150 != v148 );
    if ( HIDWORD(v152) )
    {
      if ( v170 >= 0x73 )
      {
        v174 = 0;
        v170 = 0;
        sub_1402697BC(Destination, 460, Source, 0);
      }
      else
      {
        Destination[0].m128i_i32[v170++] = HIDWORD(v152);
      }
    }
    v153 = sub_1402320F0((__crt_strtox *)&v170, (struct __crt_strtox::big_integer *)&v172, v149);
    for ( j = 8; j != -1; --j )
    {
      v155 = v153 % 0xA + 48;
      v153 /= 0xAu;
      if ( (int)i - (int)v104 >= j )
        v104[j] = v155;
    }
    v156 = i - v104;
    if ( i - v104 > 9 )
      v156 = 9;
  }
  *v104 = 0;
LABEL_310:
  if ( v166 )
    fesetenv((const #70 *)&Env);
  return MEMORY[0x1401F8B20]((unsigned __int64)v158 ^ v178);
}

