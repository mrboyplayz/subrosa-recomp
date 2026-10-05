/* Address: 0x1400c4280 | Name: sub_1400C4280 | Size: 4319 bytes */
__int64 __fastcall sub_1400C4280(int a1)
{
  __int64 v1; // r12
  __int64 v2; // rsi
  int v3; // r13d
  unsigned int v4; // r11d
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // r10d
  unsigned int *v11; // rdi
  int v12; // edx
  char v13; // r8
  int v14; // ecx
  int v15; // r8d
  char *v16; // r9
  char v17; // dl
  int v18; // edx
  char v19; // dl
  __int64 v20; // rdx
  char v21; // r8
  unsigned int v22; // ebx
  __int64 v23; // r8
  unsigned int v24; // edx
  unsigned int v25; // eax
  int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // r11
  char *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  char v35; // al
  __int64 v36; // rdi
  __int64 v37; // r13
  signed int v38; // ebx
  int v39; // ecx
  __int64 v40; // r11
  __int64 v41; // r14
  __int64 v42; // rbx
  int *v43; // r10
  char *v44; // rdx
  bool v45; // zf
  char *v46; // rcx
  __int64 v47; // rcx
  char v48; // al
  int v49; // eax
  __int64 v50; // r10
  int v51; // edx
  int v52; // r9d
  char v53; // r8
  __int64 v54; // r14
  __int64 v55; // rcx
  char *v56; // r8
  char v57; // cl
  __int64 v58; // rax
  int v59; // r9d
  int v60; // r14d
  unsigned int *v61; // r10
  const char *v62; // r11
  unsigned int v63; // r14d
  int v64; // eax
  __int64 v65; // rdi
  unsigned int v66; // r15d
  __int64 v67; // rcx
  char *v68; // rcx
  char v69; // al
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  char v75; // al
  __int64 v76; // r15
  signed int v77; // r14d
  char *v78; // rdi
  __m128i si128; // xmm0
  unsigned int *v80; // rcx
  __int64 v81; // rsi
  unsigned int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rcx
  char v85; // al
  int v86; // r14d
  int v87; // eax
  int v88; // edx
  int v89; // r9d
  char v90; // r8
  __int64 v91; // rcx
  __int64 v92; // rcx
  char v93; // al
  __int64 v94; // rcx
  char *v95; // r8
  char v96; // cl
  __int64 v97; // r15
  int v98; // r11d
  unsigned int *v99; // r9
  const char *v100; // r10
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v105; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v106; // [rsp+30h] [rbp-D0h] BYREF
  int v107; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v108; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v109; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v110; // [rsp+48h] [rbp-B8h]
  __int64 v111; // [rsp+50h] [rbp-B0h]
  char v112[4]; // [rsp+5Ch] [rbp-A4h] BYREF
  char Str1[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v114; // [rsp+25Fh] [rbp+15Fh] BYREF
  char v115[512]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v116; // [rsp+460h] [rbp+360h]

  v1 = a1;
  v2 = 1760LL * a1;
  v3 = -1;
  v111 = v2 * 4;
  v4 = -1;
  v5 = (int)dword_140404A6C[v2 + 278847170];
  v106 = v5;
  if ( (_DWORD)v5 == 2 )
  {
    v4 = dword_140404A6C[v2 + 278846098];
  }
  else if ( !(_DWORD)v5 && (int)dword_140404A6C[v2 + 278845906] > 0 )
  {
    v4 = dword_140404A6C[1760 * dword_140404A6C[v2 + 278845907] + 278846098];
  }
  v6 = 0;
  v7 = 1760LL * a1;
  v8 = v2 * 4 + 72 * v5;
  v109 = 9 * v5;
  v9 = *(int *)((char *)&dword_140404A6C[278847172] + v8);
  v107 = 0;
  v108 = 18 * v5;
  Str1[0] = 0;
  v10 = 0;
  v11 = &dword_140404A6C[v2 + 278847154];
  v12 = 0;
  LODWORD(v110) = dword_140404A6C[18 * v5 + 278847173 + v7 + v9];
  while ( 1 )
  {
    v13 = *((_BYTE *)v11 + v12);
    if ( (unsigned __int8)(v13 - 97) <= 0x19u
      || (unsigned __int8)(v13 - 65) <= 0x19u
      || (unsigned __int8)(v13 - 48) <= 9u )
    {
      break;
    }
    v14 = v12;
    if ( v13 )
    {
      v107 = ++v12;
      v14 = v12;
      if ( v12 < 62 )
        continue;
    }
    goto LABEL_14;
  }
  v14 = v12;
LABEL_14:
  if ( v14 < 62 )
  {
    v15 = v14;
    v16 = Str1;
    while ( 1 )
    {
      v17 = *((_BYTE *)v11 + v15);
      if ( (unsigned __int8)(v17 - 97) > 0x19u
        && (unsigned __int8)(v17 - 65) > 0x19u
        && (unsigned __int8)(v17 - 48) > 9u )
      {
        break;
      }
      v14 = v15 + 1;
      *v16++ = v17;
      v107 = v14;
      ++v10;
      ++v15;
      if ( v14 >= 62 )
        goto LABEL_22;
    }
    v14 = v15;
LABEL_22:
    LODWORD(v5) = v106;
  }
  Str1[v10] = 0;
  if ( !Str1[1] )
  {
    if ( v14 < 62 )
    {
      v18 = v14;
      do
      {
        v14 = v18;
        if ( *((_BYTE *)v11 + v18) != 32 )
          break;
        v14 = v18 + 1;
        v18 = v14;
      }
      while ( v14 < 62 );
    }
    v19 = *((_BYTE *)v11 + v14);
    if ( (unsigned __int8)(v19 - 97) > 0x19u && (unsigned __int8)(v19 - 65) > 0x19u && (unsigned __int8)(v19 - 48) > 9u )
    {
      if ( v19 && v14 < 62 )
      {
        v20 = 0;
        do
        {
          if ( v20 >= 2 )
            break;
          v21 = *((_BYTE *)v11 + v14);
          if ( !v21 )
            break;
          ++v6;
          v115[v20++] = v21;
          ++v14;
        }
        while ( v14 < 62 );
      }
      v115[v6] = 0;
      if ( v6 > 0 && v115[0] == 58 && !v115[1] )
      {
        if ( (unsigned __int8)(Str1[0] - 65) > 2u
          || (v22 = (unsigned __int8)Str1[0] - 65, (unsigned int)sub_14004C960((unsigned int)v1, v22) == -1) )
        {
          *(_OWORD *)&dword_140404A6C[16 * (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) + 278846114] = xmmword_140275F48;
          goto LABEL_178;
        }
        dword_140404A6C[v2 + 278847170] = v22;
      }
    }
    return MEMORY[0x1401F8B20]((unsigned __int64)&v105 ^ v116);
  }
  if ( v4 == -1 )
  {
    *(_OWORD *)&dword_140404A6C[16 * (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) + 278846114] = xmmword_140275F48;
    goto LABEL_178;
  }
  if ( Str1[0] != 67 || Str1[1] != 68 || Str1[2] )
  {
    v34 = 0;
    while ( 1 )
    {
      v35 = Str1[v34++];
      if ( v35 != byte_140275F6C[v34 - 1] )
        break;
      if ( v34 == 4 )
      {
        v36 = 1;
        dword_140404A6C[v2 + 278847243] = 1;
        dword_140404A6C[v2 + 278847244] = 4;
        dword_140404A6C[v2 + 278847258] = 0;
        *(_QWORD *)&dword_140404A6C[v2 + 278847247] = 1;
        dword_140404A6C[v2 + 278847245] = v5;
        v37 = 110 * v1;
        dword_140404A6C[v2 + 278847246] = dword_140404A6C[v7
                                                        + 278847173
                                                        + v108
                                                        + *(int *)((char *)&dword_140404A6C[278847172] + v8)];
        LOBYTE(dword_140404A6C[16 * (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) + 278846114]) = 0;
        sub_1400C3E00(v1);
        if ( v106 == 2 )
        {
          v38 = dword_140404A6C[v2 + 278846098];
          goto LABEL_74;
        }
        if ( v106 || (int)dword_140404A6C[v2 + 278845906] <= 0 )
          goto LABEL_85;
        v38 = dword_140404A6C[1760 * dword_140404A6C[v2 + 278845907] + 278846098];
LABEL_74:
        if ( v38 == -1 )
        {
LABEL_85:
          v115[0] = 0;
        }
        else
        {
          sub_140158AB0(v115, "%c:\\", v106 + 65);
          v39 = *(unsigned int *)((char *)&dword_140404A6C[278847172] + v8);
          if ( v39 >= 1 )
          {
            v40 = (unsigned int)v39;
            v41 = (int)dword_140404A6C[2 * v109 + 278847172 + v2];
            v42 = 2570LL * v38;
            v43 = (int *)((char *)&dword_140404A6C[278847174] + v8);
            do
            {
              v44 = &v114;
              do
                v45 = *++v44 == 0;
              while ( !v45 );
              strcpy(v44, (const char *)&dword_140404A6C[4 * *v43 + 275753048 + v42]);
              if ( v36 < v41 )
              {
                v46 = &v114;
                do
                  v45 = *++v46 == 0;
                while ( !v45 );
                *(_WORD *)v46 = 92;
              }
              ++v36;
              ++v43;
              --v40;
            }
            while ( v40 );
          }
        }
        sub_140158AB0(
          &dword_140404A6C[16 * (v37 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
          "Directory of %s",
          v115);
        sub_1400C3E00(v1);
        LOBYTE(dword_140404A6C[16 * (v37 + (int)dword_140404A6C[v2 + 278846111]) + 278846114]) = 0;
        return MEMORY[0x1401F8B20]((unsigned __int64)&v105 ^ v116);
      }
    }
    v47 = 0;
    do
    {
      v48 = Str1[v47++];
      if ( v48 != MEMORY[0x140275F80][v47 - 1] )
      {
        v74 = 0;
        while ( 1 )
        {
          v75 = Str1[v74++];
          if ( v75 != MEMORY[0x140276018][v74 - 1] )
            break;
          if ( v74 == 8 )
            goto LABEL_131;
        }
        if ( strcmp(Str1, "MISSION.EXE") )
        {
          v84 = 0;
          while ( 1 )
          {
            v85 = Str1[v84++];
            if ( v85 != MEMORY[0x140276050][v84 - 1] )
              break;
            if ( v84 == 8 )
              goto LABEL_142;
          }
          if ( strcmp(Str1, "DECRYPT.EXE") )
          {
            v92 = 0;
            while ( 1 )
            {
              v93 = Str1[v92++];
              if ( v93 != MEMORY[0x14027609C][v92 - 1] )
                break;
              if ( v92 == 6 )
                goto LABEL_155;
            }
            if ( !strcmp(Str1, "SNAKE.EXE") )
            {
LABEL_155:
              dword_140404A6C[v2 + 278847324] = 3;
              dword_140404A6C[v2 + 278846113] = -1;
              *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
              MEMORY[0x1401FCD30](&dword_140404A6C[v2 + 278847325], 0, 1312);
              sub_1400C92B0((unsigned int)v1);
              return MEMORY[0x1401F8B20]((unsigned __int64)&v105 ^ v116);
            }
            if ( *(_BYTE *)v11 )
            {
              v94 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
              *(_OWORD *)((char *)&dword_140404A6C[278846114] + v94) = xmmword_140276030;
              *(_QWORD *)((char *)&dword_140404A6C[278846118] + v94) = 0x454D414E20454C49LL;
              *((_BYTE *)&dword_140404A6C[278846120] + v94) = 0;
              goto LABEL_178;
            }
            return MEMORY[0x1401F8B20]((unsigned __int64)&v105 ^ v116);
          }
LABEL_142:
          LODWORD(v108) = (_DWORD)v110;
          LODWORD(v109) = v106;
          v86 = -1;
          if ( (unsigned int)sub_14004C9C0(v1, (int *)&v109, (int *)&v108, (__int64)v11, &v107) )
            goto LABEL_150;
          v87 = sub_14004C960((unsigned int)v1, (unsigned int)v109);
          if ( v87 == -1 )
            goto LABEL_150;
          v88 = v107;
          v89 = 0;
          if ( v107 < 62 )
          {
            while ( 1 )
            {
              v90 = *((_BYTE *)v11 + v88);
              if ( (unsigned __int8)(v90 - 97) <= 0x19u
                || (unsigned __int8)(v90 - 65) <= 0x19u
                || (unsigned __int8)(v90 - 48) <= 9u
                || !v90 )
              {
                break;
              }
              if ( ++v88 >= 62 )
                goto LABEL_150;
            }
            if ( v88 < 62 )
            {
              v95 = Str1;
              do
              {
                v96 = *((_BYTE *)v11 + v88);
                if ( (unsigned __int8)(v96 - 97) > 0x19u
                  && (unsigned __int8)(v96 - 65) > 0x19u
                  && (unsigned __int8)(v96 - 48) > 9u
                  && v96 != 46 )
                {
                  break;
                }
                *v95 = v96;
                ++v89;
                ++v95;
                ++v88;
              }
              while ( v88 < 62 );
            }
          }
          Str1[v89] = 0;
          if ( v89 <= 0 )
            goto LABEL_150;
          v97 = 2570LL * v87;
          v98 = dword_140404A6C[v97 + 275754072];
          if ( v98 <= 0 )
            goto LABEL_150;
          v99 = &dword_140404A6C[v97 + 275754078];
          v100 = (const char *)&dword_140404A6C[v97 + 275754074];
          do
          {
            if ( *v99 == (_DWORD)v108 && !strcmp(v100, Str1) )
              v86 = v6;
            ++v6;
            v100 += 24;
            v99 += 6;
          }
          while ( v6 < v98 );
          if ( v86 == -1 )
          {
LABEL_150:
            v91 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
            *(_OWORD *)((char *)&dword_140404A6C[278846114] + v91) = xmmword_140276080;
            *(_QWORD *)((char *)&dword_140404A6C[278846118] + v91) = 0x656D616E656C6966LL;
            *(_WORD *)((char *)&dword_140404A6C[278846120] + v91) = 34;
            goto LABEL_178;
          }
          v101 = (int)dword_140404A6C[6 * v86 + 275754073 + v97];
          if ( dword_140404A6C[290 * v101 + 273377606] )
          {
            dword_140404A6C[v2 + 278846113] = -1;
            dword_140404A6C[v2 + 278847324] = 1;
            dword_140404A6C[v2 + 278847454] = v101;
            sub_1400C5C00((unsigned int)v1, v101, 0x140000000uLL, v99);
            return MEMORY[0x1401F8B20]((unsigned __int64)&v105 ^ v116);
          }
          v102 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
          *(_OWORD *)((char *)&dword_140404A6C[278846114] + v102) = xmmword_140276068;
          *(unsigned int *)((char *)&dword_140404A6C[278846118] + v102) = 4542553;
          goto LABEL_178;
        }
LABEL_131:
        v76 = 110 * v1;
        if ( dword_140404A6C[v2 + 278847323] == -1 )
        {
          v103 = (v76 + (int)dword_140404A6C[v2 + 278846111]) << 6;
          *(_OWORD *)((char *)&dword_140404A6C[278846114] + v103) = xmmword_140276030;
          *(_QWORD *)((char *)&dword_140404A6C[278846118] + v103) = 0x454D414E20454C49LL;
          *((_BYTE *)&dword_140404A6C[278846120] + v103) = 0;
          goto LABEL_178;
        }
        dword_140404A6C[v2 + 278847324] = 2;
        dword_140404A6C[v2 + 278846113] = -1;
        *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
        v110 = &dword_140404A6C[v2 + 278847325];
        MEMORY[0x1401FCD30](&dword_140404A6C[v2 + 278847325], 0, 1056);
        dword_140404A6C[v2 + 278847328] = -1;
        v77 = 0;
        v78 = (char *)&dword_140404A6C[1760 * v1 + 278846114];
        do
        {
          *v78 = 0;
          if ( !v77 )
            strcpy(v78, "CONNECTING...");
          si128 = _mm_load_si128((const __m128i *)&xmmword_140279200);
          v80 = &dword_140404A6C[16 * (v76 + (unsigned int)v77) + 278846626];
          *(__m128i *)v80 = si128;
          *((__m128i *)v80 + 1) = si128;
          *((__m128i *)v80 + 2) = si128;
          *((_QWORD *)v80 + 6) = si128.m128i_i64[0];
          v80[14] = si128.m128i_i32[0];
          *((_WORD *)v80 + 30) = si128.m128i_i16[0];
          *((_BYTE *)v80 + 62) = si128.m128i_i8[0];
          sub_140050F90(v1, v77++);
          v78 += 64;
        }
        while ( v77 < 24 );
        v81 = v111;
        v45 = dword_140404A6C[456202453] == 0;
        *v110 = 0;
        *(unsigned int *)((char *)&dword_140404A6C[278847326] + v81) = 256;
        if ( !v45 )
        {
          v82 = dword_140404A6C[283831474];
          v83 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v83) = 19;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v83) = v82;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v83) = dword_140404A6C[283786017];
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v83) = v1;
          *(unsigned int *)((char *)&dword_140404A6C[297756297] + v83) = 1065353216;
          *(unsigned int *)((char *)&dword_140404A6C[297756298] + v83) = 1065353216;
        }
        return MEMORY[0x1401F8B20]((unsigned __int64)&v105 ^ v116);
      }
    }
    while ( v47 != 5 );
    LODWORD(v108) = (_DWORD)v110;
    LODWORD(v109) = v5;
    if ( (unsigned int)sub_14004C9C0(v1, (int *)&v109, (int *)&v108, (__int64)v11, &v107) )
    {
      v54 = v1;
      v73 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
      *(_OWORD *)((char *)&dword_140404A6C[278846114] + v73) = xmmword_140275FB8;
      *(_OWORD *)((char *)&dword_140404A6C[278846118] + v73) = xmmword_140275FC8;
      *(_QWORD *)((char *)&dword_140404A6C[278846122] + v73) = 0x4549464943455053LL;
      *(_WORD *)((char *)&dword_140404A6C[278846124] + v73) = 68;
      sub_1400C3E00(v1);
    }
    else
    {
      v49 = sub_14004C960((unsigned int)v1, (unsigned int)v109);
      v50 = v49;
      if ( v49 != -1 )
      {
        v51 = v107;
        v52 = 0;
        if ( v107 < 62 )
        {
          while ( 1 )
          {
            v53 = *((_BYTE *)v11 + v51);
            if ( (unsigned __int8)(v53 - 97) <= 0x19u
              || (unsigned __int8)(v53 - 65) <= 0x19u
              || (unsigned __int8)(v53 - 48) <= 9u
              || !v53 )
            {
              break;
            }
            v107 = ++v51;
            if ( v51 >= 62 )
              goto LABEL_98;
          }
          if ( v51 < 62 )
          {
            v56 = Str1;
            do
            {
              v57 = *((_BYTE *)v11 + v51);
              if ( (unsigned __int8)(v57 - 97) > 0x19u
                && (unsigned __int8)(v57 - 65) > 0x19u
                && (unsigned __int8)(v57 - 48) > 9u
                && v57 != 46 )
              {
                break;
              }
              *v56 = v57;
              ++v52;
              ++v56;
              ++v51;
            }
            while ( v51 < 62 );
            v107 = v51;
          }
        }
        Str1[v52] = 0;
        if ( v52 > 0 )
        {
          v58 = 2570LL * v49;
          v59 = 0;
          v109 = 10280 * v50;
          v60 = dword_140404A6C[2570 * v50 + 275754072];
          if ( v60 > 0 )
          {
            v61 = &dword_140404A6C[v58 + 275754078];
            v62 = (const char *)&dword_140404A6C[v58 + 275754074];
            do
            {
              if ( *v61 == (_DWORD)v108 && !strcmp(v62, Str1) )
                v3 = v59;
              ++v59;
              v62 += 24;
              v61 += 6;
            }
            while ( v59 < v60 );
            if ( v3 != -1 )
            {
              LODWORD(v108) = (_DWORD)v110;
              if ( (unsigned int)sub_14004C9C0(v1, (int *)&v106, (int *)&v108, (__int64)v11, &v107) == 1 )
              {
                v63 = v106;
                v64 = sub_14004C960((unsigned int)v1, v106);
                v65 = v64;
                if ( v64 == -1 )
                  return MEMORY[0x1401F8B20]((unsigned __int64)&v105 ^ v116);
                v66 = v108;
                if ( (unsigned int)sub_140080820(v64, v108, (__int64)Str1) == -1 )
                {
                  if ( (int)dword_140404A6C[2570 * v65 + 275753046] < 400
                    && (int)dword_140404A6C[2570 * v65 + 275754072] >= 3 )
                  {
                    v67 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
                    *(_OWORD *)((char *)&dword_140404A6C[278846114] + v67) = xmmword_140275F88;
                    *(_QWORD *)((char *)&dword_140404A6C[278846118] + v67) = 0x4543415053204BLL;
                    goto LABEL_178;
                  }
                  dword_140404A6C[v2 + 278847243] = 0;
                  dword_140404A6C[v2 + 278847244] = 256;
                  dword_140404A6C[v2 + 278847258] = 0;
                  dword_140404A6C[v2 + 278847245] = v63;
                  dword_140404A6C[v2 + 278847246] = v66;
                  v68 = Str1;
                  do
                  {
                    v69 = *v68;
                    v68[(_QWORD)&dword_140404A6C[278847249] + v2 * 4 - (_QWORD)Str1] = *v68;
                    ++v68;
                  }
                  while ( v69 );
                  v70 = (int)dword_140404A6C[v2 + 278846111];
                  dword_140404A6C[v2 + 278847257] = *(unsigned int *)((char *)&dword_140404A6C[6 * v3 + 275754073] + v109);
                  LOBYTE(dword_140404A6C[16 * (110 * v1 + v70) + 278846114]) = 0;
                  sub_140051650(dword_140404A6C[283786018], (unsigned int)v1);
                  return MEMORY[0x1401F8B20]((unsigned __int64)&v105 ^ v116);
                }
                v71 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
                *(_OWORD *)((char *)&dword_140404A6C[278846114] + v71) = xmmword_140275FA0;
                *(unsigned int *)((char *)&dword_140404A6C[278846118] + v71) = 5461075;
              }
              else
              {
                v72 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
                *(_OWORD *)((char *)&dword_140404A6C[278846114] + v72) = xmmword_140275FB8;
                *(_OWORD *)((char *)&dword_140404A6C[278846118] + v72) = xmmword_140275FC8;
                *(_QWORD *)((char *)&dword_140404A6C[278846122] + v72) = 0x4549464943455053LL;
                *(_WORD *)((char *)&dword_140404A6C[278846124] + v72) = 68;
              }
LABEL_178:
              sub_1400C3E00(v1);
              return MEMORY[0x1401F8B20]((unsigned __int64)&v105 ^ v116);
            }
          }
        }
      }
LABEL_98:
      v54 = v1;
    }
    v55 = (110 * v54 + (int)dword_140404A6C[v2 + 278846111]) << 6;
    *(_OWORD *)((char *)&dword_140404A6C[278846114] + v55) = xmmword_140275FE8;
    *(_OWORD *)((char *)&dword_140404A6C[278846118] + v55) = xmmword_140275FF8;
    *(_QWORD *)((char *)&dword_140404A6C[278846122] + v55) = 0x4549464943455053LL;
    *(_WORD *)((char *)&dword_140404A6C[278846124] + v55) = 68;
    goto LABEL_178;
  }
  v106 = v5;
  if ( (unsigned int)sub_14004C9C0(v1, (int *)&v106, (int *)&v108, (__int64)v11, &v107) != 1 )
  {
    v33 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
    *(_OWORD *)((char *)&dword_140404A6C[278846114] + v33) = xmmword_140275F58;
    *(_WORD *)((char *)&dword_140404A6C[278846118] + v33) = 89;
    goto LABEL_178;
  }
  v23 = (int)v106;
  v24 = v108;
  if ( v106 == 2 )
  {
    v25 = dword_140404A6C[v2 + 278846098];
  }
  else
  {
    if ( v106 || (int)dword_140404A6C[v2 + 278845906] <= 0 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v105 ^ v116);
    v25 = dword_140404A6C[1760 * dword_140404A6C[v2 + 278845907] + 278846098];
  }
  if ( v25 != -1 )
  {
    if ( (_DWORD)v108 )
    {
      v26 = 1;
      v27 = 1;
      *(_DWORD *)Str1 = v108;
      do
      {
        v24 = dword_140404A6C[2570 * v25 + 275753051 + 4 * v24];
        if ( !v24 )
          break;
        *(_DWORD *)&Str1[4 * v27] = v24;
        ++v26;
        ++v27;
      }
      while ( v27 < 8 );
      v28 = v26;
      v29 = v2 * 4 + 72 * v23;
      *(_QWORD *)((char *)&dword_140404A6C[278847172] + v29) = 0;
      if ( v26 >= 1LL )
      {
        v30 = 18 * v23;
        v31 = &v112[4 * v26];
        do
        {
          v32 = *(int *)((char *)&dword_140404A6C[278847172] + v29);
          v31 -= 4;
          *(unsigned int *)((char *)&dword_140404A6C[278847172] + v29) = v32 + 1;
          dword_140404A6C[v7 + 278847174 + v30 + v32] = *((_DWORD *)v31 + 1);
          --v28;
        }
        while ( v28 );
      }
    }
    else
    {
      *(_QWORD *)&dword_140404A6C[18 * (int)v106 + 278847172 + v2] = 0;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v105 ^ v116);
}

