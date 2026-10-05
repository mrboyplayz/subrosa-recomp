/* Address: 0x14015b780 | Name: sub_14015B780 | Size: 3676 bytes */
__int64 __fastcall sub_14015B780(unsigned int *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v6; // r12d
  unsigned int v7; // eax
  int v8; // r13d
  __int64 v9; // rdi
  int v10; // esi
  int v11; // r15d
  signed int v12; // ecx
  __int64 v13; // rax
  const char *v14; // rdx
  int v15; // r14d
  int v16; // eax
  int v17; // r11d
  int v18; // r9d
  int v19; // ecx
  int v20; // ecx
  char *v21; // rax
  __int64 v22; // rdx
  char *v23; // rsi
  signed int v24; // edi
  int v25; // r13d
  char *v26; // rax
  __int64 v27; // r15
  int v28; // esi
  unsigned __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // r8
  char v32; // cl
  char *v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // r12d
  int v36; // eax
  int v37; // r12d
  __int64 v38; // rdi
  unsigned __int8 *v39; // rax
  int v40; // r14d
  unsigned __int8 v41; // cl
  unsigned __int8 *v42; // rax
  int v43; // r15d
  __int64 i; // r8
  unsigned __int8 *v45; // rax
  unsigned __int8 v46; // cl
  unsigned __int8 *v47; // rax
  int v48; // ecx
  int v49; // ecx
  int v50; // r14d
  unsigned __int8 *v51; // r8
  unsigned __int8 v52; // cl
  unsigned __int8 *v53; // rax
  __int64 v54; // r10
  __int64 v55; // rax
  __int64 v56; // rcx
  int v57; // edi
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // r9d
  unsigned __int8 v62; // cl
  unsigned __int8 *v63; // rax
  __int64 v64; // rcx
  int v65; // edi
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rax
  int v69; // ecx
  int v70; // r12d
  int v71; // r8d
  int v72; // r8d
  __int64 v73; // r15
  unsigned int v74; // r10d
  unsigned int v75; // r10d
  unsigned int v76; // r11d
  unsigned int v77; // edi
  unsigned int v78; // r11d
  unsigned int v79; // r9d
  unsigned int v80; // r9d
  unsigned int v81; // r10d
  unsigned int v82; // ecx
  int v83; // edi
  int v84; // eax
  __int64 v85; // rdx
  int v86; // r14d
  unsigned __int8 *v87; // rcx
  char *v88; // rdi
  unsigned __int64 v89; // rax
  unsigned __int8 *v90; // rax
  unsigned __int8 *v91; // rax
  unsigned __int8 *v92; // rax
  unsigned __int8 *v93; // rax
  signed int v94; // edi
  char *v95; // r15
  int v96; // esi
  unsigned int v97; // eax
  __int64 v98; // rdx
  unsigned int v99; // r14d
  char v100; // al
  __int64 v101; // r8
  __int64 v102; // rcx
  __int64 v103; // rdx
  char v104; // al
  __int64 v105; // r8
  __int64 v106; // rcx
  __int64 v107; // rdx
  char v108; // al
  int v109; // r9d
  int v110; // eax
  int v111; // ecx
  int v112; // eax
  __int64 k; // rcx
  int v114; // edx
  int v115; // r10d
  int v116; // r8d
  __int64 v117; // rdx
  __int64 v118; // rax
  char *v119; // rdx
  __int64 v120; // r9
  char v121; // cl
  __int64 v123; // [rsp+0h] [rbp-100h] BYREF
  unsigned int j; // [rsp+30h] [rbp-D0h]
  int v125; // [rsp+34h] [rbp-CCh]
  int v126; // [rsp+38h] [rbp-C8h]
  __int64 v127; // [rsp+3Ch] [rbp-C4h]
  int v128; // [rsp+44h] [rbp-BCh]
  unsigned int v129; // [rsp+48h] [rbp-B8h]
  signed int v130; // [rsp+4Ch] [rbp-B4h]
  int v131; // [rsp+50h] [rbp-B0h]
  int v132; // [rsp+54h] [rbp-ACh]
  unsigned int v133; // [rsp+58h] [rbp-A8h]
  unsigned int v134; // [rsp+5Ch] [rbp-A4h]
  unsigned int v135; // [rsp+60h] [rbp-A0h]
  unsigned int v136; // [rsp+64h] [rbp-9Ch]
  unsigned int v137; // [rsp+68h] [rbp-98h]
  unsigned int v138; // [rsp+6Ch] [rbp-94h]
  unsigned int v139; // [rsp+70h] [rbp-90h]
  int v140; // [rsp+74h] [rbp-8Ch]
  int v141; // [rsp+78h] [rbp-88h]
  __int64 v142; // [rsp+80h] [rbp-80h]
  char *v143; // [rsp+88h] [rbp-78h]
  int v144; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v145; // [rsp+94h] [rbp-6Ch]
  int v146; // [rsp+98h] [rbp-68h]
  unsigned int v147; // [rsp+9Ch] [rbp-64h]
  int v148; // [rsp+A0h] [rbp-60h]
  int v149; // [rsp+A4h] [rbp-5Ch]
  __int64 v150; // [rsp+A8h] [rbp-58h]
  int v151; // [rsp+B0h] [rbp-50h]
  _DWORD *v152; // [rsp+B8h] [rbp-48h]
  _DWORD *v153; // [rsp+C0h] [rbp-40h]
  _DWORD *v154; // [rsp+C8h] [rbp-38h]
  _BYTE v155[1024]; // [rsp+D0h] [rbp-30h]
  __int64 v156; // [rsp+4D0h] [rbp+3D0h]

  v152 = a2;
  v6 = 0;
  v154 = a4;
  v153 = a3;
  v140 = a5;
  HIDWORD(v150) = 255;
  if ( !sub_14015C5E0(a1, &v144) )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v123 ^ v156);
  v141 = a1[1];
  v7 = abs32(v141);
  a1[1] = v7;
  if ( v7 > 0x1000000 || *a1 > 0x1000000 )
    goto LABEL_213;
  v8 = v146;
  v9 = (int)v145;
  v10 = v150;
  v11 = v144;
  j = v147;
  v128 = v148;
  v132 = v149;
  v125 = v151;
  v127 = v150;
  v129 = v145;
  v126 = v146;
  v131 = v144;
  if ( v146 == 12 )
  {
    if ( v144 < 24 )
    {
      v6 = (int)(v145 - v151 - 24) / 3;
      goto LABEL_9;
    }
  }
  else if ( v144 < 16 )
  {
    v6 = (int)(v145 - v151 - v146) >> 2;
LABEL_9:
    if ( v6 )
      goto LABEL_14;
  }
  v12 = a1[46];
  if ( v145 != v12 + a1[48] - a1[52] )
  {
    sub_14023E640(
      L"info.offset == s->callback_already_read + (int) (s->img_buffer - s->img_buffer_original)",
      L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      5397);
    v12 = a1[46];
  }
  if ( v9 != *((_QWORD *)a1 + 24) - 56LL + v12 - (_QWORD)a1 )
  {
    v13 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v14 = "bad offset";
LABEL_214:
    *(_QWORD *)(v13 + 16) = v14;
    return MEMORY[0x1401F8B20]((unsigned __int64)&v123 ^ v156);
  }
LABEL_14:
  if ( v11 == 24 && v10 == -16777216 )
    v15 = 3;
  else
    v15 = (v10 != 0) + 3;
  v16 = v140;
  a1[2] = v15;
  v17 = *a1;
  v18 = a1[1];
  v19 = *a1;
  if ( v16 >= 3 )
    v15 = v16;
  if ( v19 < 0
    || v19 && v15 > 0x7FFFFFFF / v19
    || (v20 = v15 * v19, v20 < 0)
    || v18 < 0
    || v18 && v20 > 0x7FFFFFFF / v18 )
  {
LABEL_213:
    v13 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v14 = "too large";
    goto LABEL_214;
  }
  if ( v17 && v15 > 0x7FFFFFFF / v17
    || v18 && v20 > 0x7FFFFFFF / v18
    || (v21 = (char *)j__malloc_base((int)(v18 * v15 * *a1)), v143 = v21, (v23 = v21) == nullptr) )
  {
    v13 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v14 = "outofmem";
    goto LABEL_214;
  }
  if ( v11 >= 16 )
  {
    v134 = 0;
    v136 = 0;
    v138 = 0;
    v129 = 0;
    v70 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    sub_14016E0F0(a1, (unsigned int)(v9 - v125 - v8));
    if ( v11 == 24 )
    {
      v71 = 3 * *a1;
    }
    else if ( v11 == 16 )
    {
      v71 = 2 * *a1;
    }
    else
    {
      v71 = 0;
    }
    v72 = -v71 & 3;
    v125 = v72;
    if ( v11 == 24 )
    {
      v73 = 1;
      v142 = 1;
      goto LABEL_145;
    }
    if ( v11 == 32 && v132 == 255 && v128 == 65280 && j == 16711680 )
    {
      if ( (_DWORD)v127 == -16777216 )
      {
        v73 = 2;
        v142 = 2;
        goto LABEL_145;
      }
    }
    else if ( !j || !v128 || !v132 )
    {
      goto LABEL_211;
    }
    v134 = ((__int64 (*)(void))sub_140162FB0)() - 7;
    v133 = (unsigned __int8)(((unsigned __int16)(((((j & 0x5555) + ((j >> 1) & 0x5555)) & 0x3333)
                                                + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x3333)
                                                + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                                  + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                               & 0xF0F) >> 8)
                           + (((((j & 0x55) + ((j >> 1) & 0x55)) & 0x33)
                             + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33)
                             + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                               + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                            & 0xF)
                           + ((((((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)
                                + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                  + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                               & 0xF0F0F0F) >> 8)
                             + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                               + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)
                               + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F)) >> 16));
    v136 = sub_140162FB0(v74) - 7;
    v77 = (unsigned __int8)(((unsigned __int16)(((((v75 & 0x5555) + ((v75 >> 1) & 0x5555)) & 0x3333)
                                               + ((((v75 & 0x55555555) + ((v75 >> 1) & 0x55555555)) >> 2) & 0x3333)
                                               + (((((v75 & 0x55555555) + ((v75 >> 1) & 0x55555555)) & 0x33333333)
                                                 + ((((v75 & 0x55555555) + ((v75 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                              & 0xF0F) >> 8)
                          + (((((v75 & 0x55) + ((v75 >> 1) & 0x55)) & 0x33)
                            + ((((v75 & 0x55555555) + ((v75 >> 1) & 0x55555555)) >> 2) & 0x33)
                            + (((((v75 & 0x55555555) + ((v75 >> 1) & 0x55555555)) & 0x33333333)
                              + ((((v75 & 0x55555555) + ((v75 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                           & 0xF)
                          + ((((((((v75 & 0x55555555) + ((v75 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((v75 & 0x55555555) + ((v75 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                               + (((((v75 & 0x55555555) + ((v75 >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((v75 & 0x55555555) + ((v75 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F) >> 8)
                            + (((((v75 & 0x55555555) + ((v75 >> 1) & 0x55555555)) & 0x33333333)
                              + ((((v75 & 0x55555555) + ((v75 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                              + (((((v75 & 0x55555555) + ((v75 >> 1) & 0x55555555)) & 0x33333333)
                                + ((((v75 & 0x55555555) + ((v75 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                             & 0xF0F0F0F)) >> 16));
    v135 = v77;
    v138 = sub_140162FB0(v76) - 7;
    v137 = (unsigned __int8)(((unsigned __int16)(((((v78 & 0x5555) + ((v78 >> 1) & 0x5555)) & 0x3333)
                                                + ((((v78 & 0x55555555) + ((v78 >> 1) & 0x55555555)) >> 2) & 0x3333)
                                                + (((((v78 & 0x55555555) + ((v78 >> 1) & 0x55555555)) & 0x33333333)
                                                  + ((((v78 & 0x55555555) + ((v78 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                               & 0xF0F) >> 8)
                           + (((((v78 & 0x55) + ((v78 >> 1) & 0x55)) & 0x33)
                             + ((((v78 & 0x55555555) + ((v78 >> 1) & 0x55555555)) >> 2) & 0x33)
                             + (((((v78 & 0x55555555) + ((v78 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((v78 & 0x55555555) + ((v78 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                            & 0xF)
                           + ((((((((v78 & 0x55555555) + ((v78 >> 1) & 0x55555555)) & 0x33333333)
                                + ((((v78 & 0x55555555) + ((v78 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                                + (((((v78 & 0x55555555) + ((v78 >> 1) & 0x55555555)) & 0x33333333)
                                  + ((((v78 & 0x55555555) + ((v78 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                               & 0xF0F0F0F) >> 8)
                             + (((((v78 & 0x55555555) + ((v78 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((v78 & 0x55555555) + ((v78 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                               + (((((v78 & 0x55555555) + ((v78 >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((v78 & 0x55555555) + ((v78 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F)) >> 16));
    v129 = sub_140162FB0(v79) - 7;
    v82 = (((v80 & 0x55555555) + ((v80 >> 1) & 0x55555555)) & 0x33333333)
        + ((((v80 & 0x55555555) + ((v80 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v139 = (unsigned __int8)(((unsigned __int16)((v82 + (v82 >> 4)) & 0xF0F) >> 8)
                           + ((v82 + (v82 >> 4)) & 0xF)
                           + (((((v82 + (v82 >> 4)) & 0xF0F0F0F) >> 8) + ((v82 + (v82 >> 4)) & 0xF0F0F0F)) >> 16));
    if ( v133 <= 8 && v77 <= 8 && v81 <= 8 )
    {
      v73 = 0;
      v142 = 0;
      if ( (unsigned __int8)(((unsigned __int16)((v82
                                                + (((((v80 & 0x55555555) + ((v80 >> 1) & 0x55555555)) & 0x33333333)
                                                  + ((((v80 & 0x55555555) + ((v80 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                               & 0xF0F) >> 8)
                           + ((v82
                             + (((((v80 & 0x55555555) + ((v80 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((v80 & 0x55555555) + ((v80 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                            & 0xF)
                           + (((((v82
                                + (((((v80 & 0x55555555) + ((v80 >> 1) & 0x55555555)) & 0x33333333)
                                  + ((((v80 & 0x55555555) + ((v80 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                               & 0xF0F0F0F) >> 8)
                             + ((v82
                               + (((((v80 & 0x55555555) + ((v80 >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((v80 & 0x55555555) + ((v80 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F)) >> 16)) <= 8u )
      {
        v72 = v125;
LABEL_145:
        v36 = a1[1];
        v83 = 0;
        v126 = 0;
        v25 = v15;
        if ( v36 <= 0 )
          goto LABEL_195;
        while ( 1 )
        {
          v84 = *a1;
          v85 = v70;
          if ( v73 )
          {
            v86 = 0;
            if ( v84 > 0 )
            {
              v87 = *((unsigned __int8 **)a1 + 24);
              v88 = &v23[v70];
              while ( 1 )
              {
                v89 = *((_QWORD *)a1 + 25);
                if ( (unsigned __int64)v87 >= v89 )
                {
                  if ( !a1[12] )
                  {
                    v88[2] = 0;
                    goto LABEL_156;
                  }
                  sub_14016D910(a1, v85);
                  v90 = *((unsigned __int8 **)a1 + 24);
                  v85 = *v90;
                  v87 = v90 + 1;
                  v89 = *((_QWORD *)a1 + 25);
                }
                else
                {
                  v85 = *v87++;
                }
                *((_QWORD *)a1 + 24) = v87;
                v88[2] = v85;
                if ( (unsigned __int64)v87 < v89 )
                {
                  v85 = *v87++;
                  goto LABEL_158;
                }
LABEL_156:
                if ( !a1[12] )
                {
                  v88[1] = 0;
                  goto LABEL_161;
                }
                sub_14016D910(a1, v85);
                v91 = *((unsigned __int8 **)a1 + 24);
                v85 = *v91;
                v87 = v91 + 1;
                v89 = *((_QWORD *)a1 + 25);
LABEL_158:
                *((_QWORD *)a1 + 24) = v87;
                v88[1] = v85;
                if ( (unsigned __int64)v87 < v89 )
                {
                  v85 = *v87++;
                  *((_QWORD *)a1 + 24) = v87;
                  goto LABEL_164;
                }
LABEL_161:
                if ( a1[12] )
                {
                  sub_14016D910(a1, v85);
                  v92 = *((unsigned __int8 **)a1 + 24);
                  v85 = *v92;
                  v87 = v92 + 1;
                  *((_QWORD *)a1 + 24) = v92 + 1;
                }
                else
                {
                  LOBYTE(v85) = 0;
                }
LABEL_164:
                *v88 = v85;
                v70 += 3;
                v88 += 3;
                if ( v73 == 2 )
                {
                  if ( (unsigned __int64)v87 >= *((_QWORD *)a1 + 25) )
                  {
                    if ( a1[12] )
                    {
                      sub_14016D910(a1, v85);
                      v93 = *((unsigned __int8 **)a1 + 24);
                      v85 = *v93;
                      v87 = v93 + 1;
                      *((_QWORD *)a1 + 24) = v93 + 1;
                    }
                    else
                    {
                      LOBYTE(v85) = 0;
                    }
                  }
                  else
                  {
                    v85 = *v87++;
                    *((_QWORD *)a1 + 24) = v87;
                  }
                }
                else
                {
                  LOBYTE(v85) = -1;
                }
                HIDWORD(v127) |= (unsigned __int8)v85;
                if ( v25 == 4 )
                {
                  ++v70;
                  *v88++ = v85;
                }
                if ( ++v86 >= (int)*a1 )
                  goto LABEL_187;
              }
            }
          }
          else
          {
            v94 = 0;
            v130 = 0;
            if ( v84 > 0 )
            {
              v95 = &v23[v70];
              v96 = v131;
              do
              {
                v97 = sub_1401605B0(a1, v85);
                if ( v96 == 16 )
                {
                  v99 = v97;
                }
                else
                {
                  v99 = v97 + ((unsigned int)sub_1401605B0(a1, v98) << 16);
                  v94 = v130;
                }
                v100 = sub_14016E050(j & v99, v134, v133);
                v101 = v135;
                v102 = v128 & v99;
                v103 = v136;
                *v95 = v100;
                v104 = sub_14016E050(v102, v103, v101);
                v105 = v137;
                v106 = v132 & v99;
                v107 = v138;
                v95[1] = v104;
                v108 = sub_14016E050(v106, v107, v105);
                v109 = v127;
                v70 += 3;
                v95[2] = v108;
                v95 += 3;
                if ( v109 )
                  v110 = sub_14016E050(v109 & v99, v129, v139);
                else
                  v110 = 255;
                HIDWORD(v127) |= v110;
                if ( v25 == 4 )
                {
                  ++v70;
                  *v95++ = v110;
                }
                v130 = ++v94;
              }
              while ( v94 < (int)*a1 );
              v23 = v143;
              v73 = v142;
LABEL_187:
              v72 = v125;
            }
            v83 = v126;
          }
          if ( v72 )
          {
            if ( *((_QWORD *)a1 + 2) && (v111 = a1[50] - a1[48], v111 < v72) )
            {
              *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 25);
              (*((void (__fastcall **)(_QWORD, _QWORD))a1 + 3))(*((_QWORD *)a1 + 5), (unsigned int)(v72 - v111));
              v72 = v125;
            }
            else
            {
              *((_QWORD *)a1 + 24) += (unsigned int)v72;
            }
          }
          v36 = a1[1];
          v126 = ++v83;
          if ( v83 >= v36 )
            goto LABEL_195;
        }
      }
    }
LABEL_211:
    free(v23);
    v13 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v14 = "bad masks";
    goto LABEL_214;
  }
  v24 = 0;
  v130 = 0;
  if ( !v6 || v6 > 256 )
  {
    free(v21);
    v13 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v14 = "invalid";
    goto LABEL_214;
  }
  v25 = v15;
  if ( v6 <= 0 )
    goto LABEL_58;
  v26 = *((char **)a1 + 24);
  v27 = 0;
  v28 = v126;
  do
  {
    v29 = *((_QWORD *)a1 + 25);
    if ( (unsigned __int64)v26 < v29 )
      goto LABEL_40;
    if ( a1[12] )
    {
      sub_14016D910(a1, v22);
      v26 = *((char **)a1 + 24);
      v29 = *((_QWORD *)a1 + 25);
LABEL_40:
      v22 = (unsigned __int8)*v26;
      v30 = 4 * v27;
      ++v26;
      v155[4 * v27 + 2] = v22;
      *((_QWORD *)a1 + 24) = v26;
      v31 = 4 * v27;
      if ( (unsigned __int64)v26 < v29 )
        goto LABEL_45;
      goto LABEL_43;
    }
    v30 = 4 * v27;
    v155[4 * v27 + 2] = 0;
    v31 = 4 * v27;
LABEL_43:
    if ( !a1[12] )
    {
      v155[v31 + 1] = 0;
      goto LABEL_48;
    }
    sub_14016D910(a1, v22);
    v26 = *((char **)a1 + 24);
    v29 = *((_QWORD *)a1 + 25);
LABEL_45:
    v22 = (unsigned __int8)*v26++;
    *((_QWORD *)a1 + 24) = v26;
    v155[v30 + 1] = v22;
    if ( (unsigned __int64)v26 < v29 )
    {
      v32 = *v26++;
      *((_QWORD *)a1 + 24) = v26;
      goto LABEL_51;
    }
LABEL_48:
    if ( a1[12] )
    {
      sub_14016D910(a1, v22);
      v33 = *((char **)a1 + 24);
      v32 = *v33;
      v26 = v33 + 1;
      *((_QWORD *)a1 + 24) = v26;
    }
    else
    {
      v32 = 0;
    }
LABEL_51:
    v155[v30] = v32;
    if ( v28 != 12 )
    {
      if ( (unsigned __int64)v26 >= *((_QWORD *)a1 + 25) )
      {
        if ( a1[12] )
        {
          sub_14016D910(a1, v22);
          v26 = (char *)++*((_QWORD *)a1 + 24);
        }
      }
      else
      {
        *((_QWORD *)a1 + 24) = ++v26;
      }
    }
    ++v27;
    v155[v30 + 3] = -1;
  }
  while ( v27 < v6 );
  v24 = v130;
  v23 = v143;
  v11 = v131;
LABEL_58:
  sub_14016E0F0(a1, v129 - v6 * ((v126 != 12) + 3) - v125 - v126);
  if ( v11 != 1 )
  {
    if ( v11 == 4 )
    {
      v35 = (*a1 + 1) >> 1;
      goto LABEL_64;
    }
    if ( v11 == 8 )
    {
      v35 = *a1;
      goto LABEL_64;
    }
    free(v23);
    v13 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v14 = "bad bpp";
    goto LABEL_214;
  }
  v35 = (*a1 + 7) >> 3;
LABEL_64:
  v36 = a1[1];
  v37 = -v35 & 3;
  if ( v11 == 1 )
  {
    LODWORD(v127) = 0;
    if ( v36 > 0 )
    {
      v38 = 0;
      do
      {
        v39 = *((unsigned __int8 **)a1 + 24);
        v40 = 7;
        if ( (unsigned __int64)v39 >= *((_QWORD *)a1 + 25) )
        {
          if ( a1[12] )
          {
            sub_14016D910(a1, v34);
            v42 = *((unsigned __int8 **)a1 + 24);
            v41 = *v42;
            *((_QWORD *)a1 + 24) = v42 + 1;
          }
          else
          {
            v41 = 0;
          }
        }
        else
        {
          v41 = *v39;
          *((_QWORD *)a1 + 24) = v39 + 1;
        }
        v34 = *a1;
        v43 = 0;
        for ( i = v41; v43 < (int)v34; v34 = *a1 )
        {
          v23[v38] = v155[4 * (((int)i >> v40) & 1)];
          v23[v38 + 1] = v155[4 * (((int)i >> v40) & 1) + 1];
          v23[v38 + 2] = v155[4 * (((int)i >> v40) & 1) + 2];
          v38 += 3;
          if ( v25 == 4 )
            v23[v38++] = -1;
          if ( ++v43 == (_DWORD)v34 )
            break;
          if ( --v40 < 0 )
          {
            v45 = *((unsigned __int8 **)a1 + 24);
            v40 = 7;
            if ( (unsigned __int64)v45 >= *((_QWORD *)a1 + 25) )
            {
              if ( a1[12] )
              {
                sub_14016D910(a1, v34);
                v47 = *((unsigned __int8 **)a1 + 24);
                v46 = *v47;
                *((_QWORD *)a1 + 24) = v47 + 1;
              }
              else
              {
                v46 = 0;
              }
            }
            else
            {
              v46 = *v45;
              *((_QWORD *)a1 + 24) = v45 + 1;
            }
            i = v46;
          }
        }
        if ( v37 )
        {
          if ( *((_QWORD *)a1 + 2) && (v48 = a1[50] - a1[48], v48 < v37) )
          {
            *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 25);
            (*((void (__fastcall **)(_QWORD, _QWORD, __int64))a1 + 3))(
              *((_QWORD *)a1 + 5),
              (unsigned int)(v37 - v48),
              i);
          }
          else
          {
            *((_QWORD *)a1 + 24) += (unsigned int)v37;
          }
        }
        v36 = a1[1];
        LODWORD(v127) = v127 + 1;
      }
      while ( (int)v127 < v36 );
    }
  }
  else
  {
    v49 = 0;
    for ( j = 0; v49 < v36; j = v49 )
    {
      v50 = 0;
      if ( (int)*a1 > 0 )
      {
        do
        {
          v51 = *((unsigned __int8 **)a1 + 24);
          if ( (unsigned __int64)v51 >= *((_QWORD *)a1 + 25) )
          {
            if ( a1[12] )
            {
              sub_14016D910(a1, v34);
              v53 = *((unsigned __int8 **)a1 + 24);
              v52 = *v53;
              v51 = v53 + 1;
              *((_QWORD *)a1 + 24) = v53 + 1;
            }
            else
            {
              v52 = 0;
            }
          }
          else
          {
            v52 = *v51++;
            *((_QWORD *)a1 + 24) = v51;
          }
          v54 = 0;
          v55 = v52;
          if ( v11 == 4 )
          {
            v54 = v52 & 0xF;
            v55 = v52 >> 4;
          }
          v56 = v24;
          v34 = 4 * v55;
          v57 = v24 + 1;
          v23[v56] = v155[4 * v55];
          v58 = v57++;
          v23[v58] = v155[4 * v55 + 1];
          v59 = v57;
          v24 = v57 + 1;
          v23[v59] = v155[4 * v55 + 2];
          if ( v25 == 4 )
          {
            v60 = v24++;
            v23[v60] = -1;
          }
          v61 = *a1;
          if ( v50 + 1 == *a1 )
            break;
          if ( v11 == 8 )
          {
            if ( (unsigned __int64)v51 >= *((_QWORD *)a1 + 25) )
            {
              if ( a1[12] )
              {
                sub_14016D910(a1, v34);
                v63 = *((unsigned __int8 **)a1 + 24);
                v62 = *v63;
                *((_QWORD *)a1 + 24) = v63 + 1;
                v61 = *a1;
              }
              else
              {
                v62 = 0;
              }
            }
            else
            {
              v62 = *v51;
              *((_QWORD *)a1 + 24) = v51 + 1;
            }
            v54 = v62;
          }
          v64 = v24;
          v34 = 4 * v54;
          v65 = v24 + 1;
          v23[v64] = v155[4 * v54];
          v66 = v65++;
          v23[v66] = v155[4 * v54 + 1];
          v67 = v65;
          v24 = v65 + 1;
          v23[v67] = v155[4 * v54 + 2];
          if ( v25 == 4 )
          {
            v68 = v24++;
            v23[v68] = -1;
          }
          v50 += 2;
        }
        while ( v50 < v61 );
        v49 = j;
      }
      if ( v37 )
      {
        if ( *((_QWORD *)a1 + 2) && (v69 = a1[50] - a1[48], v69 < v37) )
        {
          *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 25);
          (*((void (__fastcall **)(_QWORD, _QWORD))a1 + 3))(*((_QWORD *)a1 + 5), (unsigned int)(v37 - v69));
        }
        else
        {
          *((_QWORD *)a1 + 24) += (unsigned int)v37;
        }
        v49 = j;
      }
      v36 = a1[1];
      ++v49;
    }
  }
LABEL_195:
  if ( v25 == 4 && !HIDWORD(v127) )
  {
    v112 = 4 * *a1 * v36 - 1;
    for ( k = v112; k >= 0; k -= 4 )
      v23[k] = -1;
  }
  if ( v141 > 0 )
  {
    v114 = a1[1];
    v115 = 0;
    if ( v114 >= 0 && (v114 & 0xFFFFFFFE) != 0 )
    {
      do
      {
        v116 = 0;
        v117 = v25 * *a1 * (v114 - v115 - 1);
        v118 = (unsigned int)v117;
        v119 = &v23[v117];
        if ( (int)(v25 * *a1) > 0 )
        {
          v120 = v25 * v115 * *a1 - v118;
          do
          {
            ++v116;
            v121 = v119[v120];
            v119[v120] = *v119;
            *v119++ = v121;
          }
          while ( v116 < (int)(v25 * *a1) );
        }
        v114 = a1[1];
        ++v115;
      }
      while ( v115 < v114 >> 1 );
    }
  }
  if ( !v140 || v140 == v25 || sub_14015D7E0(v23, a1[1]) )
  {
    *v152 = *a1;
    *v153 = a1[1];
    if ( v154 )
      *v154 = a1[2];
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v123 ^ v156);
}

