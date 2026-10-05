/* Address: 0x1400f0640 | Name: sub_1400F0640 | Size: 4867 bytes */
__int64 __fastcall sub_1400F0640(unsigned int a1)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // r12
  int v5; // r12d
  int v6; // r13d
  __int64 v7; // rcx
  unsigned int *v8; // r15
  unsigned int v9; // esi
  unsigned int *v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // esi
  int v13; // esi
  __int64 v14; // rdx
  float *v15; // rax
  float v16; // xmm1_4
  float v17; // xmm0_4
  __int64 v18; // r14
  unsigned int *v19; // r13
  char *v20; // r8
  __int64 v21; // rax
  unsigned int *v22; // rdx
  char v23; // al
  __int64 v24; // r13
  unsigned int v25; // ecx
  unsigned int v26; // r10d
  char *v27; // r8
  unsigned int *v28; // rdx
  char v29; // al
  __int64 v30; // rcx
  char *v31; // r8
  unsigned int *v32; // rdx
  char v33; // al
  char *v34; // r8
  unsigned int *v35; // rdx
  char v36; // al
  unsigned int v37; // ecx
  unsigned int v38; // r9d
  unsigned int v39; // eax
  signed int v40; // esi
  int *v41; // r15
  const char *v42; // r8
  unsigned int *v43; // rdx
  char v44; // al
  unsigned int v45; // r13d
  unsigned int *v46; // rsi
  int v47; // r15d
  int v48; // r14d
  const char *v49; // r12
  unsigned int *v50; // rdx
  char v51; // al
  char *v52; // r8
  unsigned int *v53; // rdx
  char v54; // al
  char *v55; // r8
  unsigned int *v56; // rdx
  char v57; // al
  char *v58; // r8
  unsigned int *v59; // rdx
  char v60; // al
  char *v61; // r8
  unsigned int *v62; // rdx
  char v63; // al
  char *v64; // r8
  unsigned int *v65; // rdx
  char v66; // al
  char *v67; // r8
  unsigned int *v68; // rdx
  char v69; // al
  char *v70; // r8
  unsigned int *v71; // rdx
  char v72; // al
  char *v73; // r8
  unsigned int *v74; // rdx
  char v75; // al
  char *v76; // r8
  unsigned int *v77; // rdx
  char v78; // al
  unsigned int v79; // r15d
  char *v80; // r8
  unsigned int *v81; // rdx
  char v82; // al
  char *v83; // r8
  unsigned int *v84; // rdx
  char v85; // al
  char *v86; // r8
  unsigned int *v87; // rdx
  char v88; // al
  char *v89; // r8
  unsigned int *v90; // rdx
  char v91; // al
  unsigned int v92; // ecx
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // rcx
  unsigned int *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  float *v99; // rdx
  __int64 v100; // rcx
  float v101; // xmm0_4
  __int64 v102; // rdx
  unsigned int v103; // eax
  unsigned int *v104; // r10
  int v105; // r11d
  __int64 v106; // rcx
  char *v107; // rdx
  char *v108; // r8
  char v109; // cl
  _WORD *v110; // rcx
  bool v111; // zf
  char *v112; // rdx
  char *v113; // r9
  unsigned int *v114; // r8
  char v115; // cl
  __int64 v116; // rcx
  int v117; // eax
  const char *v118; // rcx
  char *v119; // r8
  unsigned int *v120; // rdx
  char v121; // al
  __int64 v123; // [rsp+8h] [rbp-100h] BYREF
  unsigned int v124; // [rsp+28h] [rbp-E0h]
  unsigned int v125; // [rsp+2Ch] [rbp-DCh]
  __int64 v126; // [rsp+30h] [rbp-D8h]
  unsigned int *v127; // [rsp+38h] [rbp-D0h]
  __int64 v128; // [rsp+40h] [rbp-C8h] BYREF
  char v129[512]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v130; // [rsp+248h] [rbp+140h]

  v1 = a1;
  v2 = 3597LL * (int)a1;
  v124 = a1;
  v3 = 0;
  v4 = (int)dword_140404A6C[v2 + 71856292];
  dword_140404A6C[v2 + 71857986] = 0;
  if ( (unsigned int)v4 > 0xFF )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v123 ^ v130);
  if ( dword_140404A6C[283831448] == 3 )
  {
    v5 = 0;
    dword_140404A6C[v2 + 71856342] = 0;
    goto LABEL_34;
  }
  v6 = dword_140404A6C[225641186];
  v125 = dword_140404A6C[v2 + 71856342];
  if ( v125 - 9 <= 2 )
  {
    v7 = dword_140404A6C[v2 + 71856343];
    if ( (int)v7 < 0 || (int)v7 >= (int)dword_140404A6C[225641186] )
    {
      dword_140404A6C[v2 + 71856342] = 0;
    }
    else
    {
      if ( (unsigned int)sub_14011B9F0(v7, &dword_140404A6C[7166 * v4 + 280651335]) )
        goto LABEL_11;
      dword_140404A6C[v2 + 71856342] = 0;
    }
    v125 = 0;
  }
LABEL_11:
  v8 = &dword_140404A6C[225641203];
  v9 = 0;
  if ( v6 > 0 )
  {
    v10 = &dword_140404A6C[225641203];
    do
    {
      v11 = *v10;
      if ( *v10 == 3 )
      {
        if ( (unsigned int)sub_14011B9F0(v9, &dword_140404A6C[7166 * v4 + 280651335]) )
        {
          if ( v125 )
            goto LABEL_107;
          v5 = 0;
          dword_140404A6C[v2 + 71856342] = 9;
          dword_140404A6C[v2 + 71856343] = v9;
          goto LABEL_33;
        }
      }
      else if ( (v11 == 5 || v11 - 8 <= 1) && (unsigned int)sub_14011B9F0(v9, &dword_140404A6C[7166 * v4 + 280651335]) )
      {
        if ( v125 )
          goto LABEL_107;
        v5 = 0;
        dword_140404A6C[v2 + 71856342] = 10;
        dword_140404A6C[v2 + 71856343] = v9;
        goto LABEL_33;
      }
      ++v9;
      v10 += 14019;
    }
    while ( (int)v9 < v6 );
  }
  v12 = 0;
  if ( v6 <= 0 )
  {
LABEL_25:
    if ( dword_140404A6C[283831312] != 4 )
    {
      if ( ((dword_140404A6C[283831312] - 3) & 0xFFFFFFFB) != 0
        || (v98 = (int)dword_140404A6C[v2 + 71856286], (unsigned int)v98 > 5)
        || (v99 = (float *)&dword_140404A6C[7166 * v4 + 280651335],
            v100 = 5873 * v98,
            *v99 < *(float *)&dword_140404A6C[5873 * v98 + 283831485])
        || *v99 >= *(float *)&dword_140404A6C[v100 + 283831488]
        || (v101 = v99[2], v101 < *(float *)&dword_140404A6C[v100 + 283831487])
        || v101 >= *(float *)&dword_140404A6C[v100 + 283831490] )
      {
LABEL_32:
        v5 = 0;
        dword_140404A6C[v2 + 71856342] = 0;
        goto LABEL_33;
      }
      v1 = v124;
      v5 = 0;
      if ( !v125 )
        dword_140404A6C[v2 + 71856342] = 14;
      goto LABEL_34;
    }
    v13 = 0;
    v14 = 0;
    v15 = (float *)&dword_140404A6C[283831488];
    v16 = *(float *)&dword_140404A6C[7166 * v4 + 280651335];
    while ( 1 )
    {
      if ( v16 >= *(v15 - 3) && v16 < *v15 )
      {
        v17 = *(float *)&dword_140404A6C[7166 * v4 + 280651337];
        if ( v17 >= *(v15 - 1) && v17 < v15[2] )
          break;
      }
      ++v13;
      ++v14;
      v15 += 5873;
      if ( (__int64)v15 >= (__int64)&dword_140404A6C[283866726] )
        goto LABEL_32;
    }
    v92 = dword_140404A6C[v2 + 71856286];
    if ( v92 != 17 )
    {
      if ( dword_140404A6C[5873 * v13 + 283831510] != -1 )
      {
        if ( v92 == v13 && v125 == 20 )
          dword_140404A6C[v2 + 71856342] = 25;
        goto LABEL_111;
      }
      if ( v92 != v13 )
      {
LABEL_111:
        v5 = 0;
        goto LABEL_112;
      }
    }
    v5 = 0;
    dword_140404A6C[v2 + 71856342] = 20;
    if ( dword_140404A6C[5873 * v13 + 283831510] == -1 )
    {
      dword_140404A6C[v2 + 71857987] = 0;
      v93 = v2 * 4 + 72LL * (int)dword_140404A6C[v2 + 71857986];
      *(_QWORD *)((char *)&dword_140404A6C[71857988] + v93) = 0x614D20796C707041LL;
      *(unsigned int *)((char *)&dword_140404A6C[71857990] + v93) = 1701273966;
      *(_WORD *)((char *)&dword_140404A6C[71857991] + v93) = 114;
    }
    else
    {
      v94 = (int)dword_140404A6C[5873 * v13 + 283837293];
      if ( v94 > 0 )
      {
        v95 = 0;
        v96 = &dword_140404A6C[5873 * v14 + 283837294];
        while ( *v96 != v124 )
        {
          ++v95;
          ++v96;
          if ( v95 >= v94 )
            goto LABEL_125;
        }
        goto LABEL_112;
      }
LABEL_125:
      sub_1400F3B30(v124);
      dword_140404A6C[v2 + 71857987] = 1;
      v97 = v2 * 4 + 72LL * (int)dword_140404A6C[v2 + 71857986];
      *(unsigned int *)((char *)&dword_140404A6C[71857988] + v97) = 1819308097;
      *(_WORD *)((char *)&dword_140404A6C[71857989] + v97) = 121;
    }
    v3 = dword_140404A6C[v2 + 71857986] + 1;
    dword_140404A6C[v2 + 71857986] = v3;
LABEL_112:
    if ( dword_140404A6C[v2 + 71856286] == v13 && !dword_140404A6C[v2 + 71856342] )
      dword_140404A6C[v2 + 71856342] = 25;
    goto LABEL_33;
  }
  while ( *v8 != 6 || !(unsigned int)sub_14011B9F0(v12, &dword_140404A6C[7166 * v4 + 280651335]) )
  {
    ++v12;
    v8 += 14019;
    if ( (int)v12 >= v6 )
      goto LABEL_25;
  }
  if ( v125 )
  {
LABEL_107:
    v5 = 0;
  }
  else
  {
    v5 = 0;
    dword_140404A6C[v2 + 71856342] = 13;
    dword_140404A6C[v2 + 71856343] = v12;
  }
LABEL_33:
  v1 = v124;
LABEL_34:
  v18 = (int)dword_140404A6C[v2 + 71856286];
  v19 = &dword_140404A6C[71859139];
  LODWORD(v126) = dword_140404A6C[v2 + 71856286];
  v127 = &dword_140404A6C[71856254];
  v125 = 6;
  if ( dword_140404A6C[283831312] != 4 )
  {
    v79 = v124;
LABEL_140:
    if ( (_DWORD)v18 != -1 )
    {
      v103 = dword_140404A6C[v2 + 71856342];
      if ( v103 == 17 )
      {
        v104 = &dword_140404A6C[335047160];
        v105 = 0;
        do
        {
          if ( *(v104 - 2) )
          {
            v106 = (int)*v104;
            if ( (int)v106 >= 6 )
            {
              v129[0] = 0;
            }
            else
            {
              v107 = off_1402B23E0[v106];
              v108 = (char *)(v129 - v107);
              do
              {
                v109 = *v107;
                v108[(_QWORD)v107] = *v107;
                ++v107;
              }
              while ( v109 );
            }
            v110 = (_WORD *)((char *)&v128 + 7);
            do
            {
              v111 = *((_BYTE *)v110 + 1) == 0;
              v110 = (_WORD *)((char *)v110 + 1);
            }
            while ( !v111 );
            *v110 = 32;
            v112 = (char *)&v128 + 7;
            do
              v111 = *++v112 == 0;
            while ( !v111 );
            strcpy(v112, (const char *)&dword_140404A6C[24944 * *(v104 - 1) + 346707722]);
            v113 = v129;
            dword_140404A6C[18 * (int)v3 + 71857987 + v2] = v105;
            v114 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
            do
            {
              v115 = *v113++;
              *(_BYTE *)v114 = v115;
              v114 = (unsigned int *)((char *)v114 + 1);
            }
            while ( v115 );
            dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71858004 + v2] = v104[1];
          }
          else
          {
            dword_140404A6C[18 * (int)v3 + 71857987 + v2] = 8;
            v116 = v2 * 4 + 72LL * (int)dword_140404A6C[v2 + 71857986];
            *(unsigned int *)((char *)&dword_140404A6C[71857988] + v116) = 1145851731;
            *((_BYTE *)&dword_140404A6C[71857989] + v116) = 0;
            dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71858004 + v2] = 0;
          }
          ++v105;
          v3 = dword_140404A6C[v2 + 71857986] + 1;
          v104 += 4;
          dword_140404A6C[v2 + 71857986] = v3;
        }
        while ( v105 < 8 );
        v103 = dword_140404A6C[v2 + 71856342];
        v79 = v124;
      }
      if ( v103 == 19 && dword_140404A6C[v2 + 71856289] )
      {
        v117 = 6;
        v118 = (const char *)&dword_140404A6C[71856254];
        do
        {
          if ( *(v19 - 2886) && !*v19 && v5 != v79 )
          {
            if ( *(v19 - 2853) == dword_140404A6C[v2 + 71856286] )
            {
              sub_140158AB0(v129, "Fire %s", v118);
              v119 = v129;
              dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = v125;
              v120 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
              do
              {
                v121 = *v119++;
                *(_BYTE *)v120 = v121;
                v120 = (unsigned int *)((char *)v120 + 1);
              }
              while ( v121 );
              ++dword_140404A6C[v2 + 71857986];
              v118 = (const char *)v127;
            }
            v117 = v125;
          }
          v118 += 14388;
          v117 += 0x10000;
          ++v5;
          v127 = (unsigned int *)v118;
          v19 += 3597;
          v125 = v117;
        }
        while ( v117 < 16777222 );
      }
    }
    return MEMORY[0x1401F8B20]((unsigned __int64)&v123 ^ v130);
  }
  if ( (unsigned int)v18 <= 5 && dword_140404A6C[v2 + 71856342] - 21 <= 5 )
  {
    dword_140404A6C[v2 + 71857986] = 0;
    dword_140404A6C[v2 + 71857987] = 16777220;
    if ( dword_140404A6C[v2 + 71856342] == 25 )
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = -1;
    v20 = v129;
    v21 = (int)dword_140404A6C[v2 + 71857986];
    strcpy(v129, "Requisition");
    v22 = &dword_140404A6C[18 * v21 + 71857988 + v2];
    do
    {
      v23 = *v20++;
      *(_BYTE *)v22 = v23;
      v22 = (unsigned int *)((char *)v22 + 1);
    }
    while ( v23 );
    v24 = 23492 * v18;
    v25 = dword_140404A6C[v2 + 71857986] + 1;
    dword_140404A6C[v2 + 71857986] = v25;
    v128 = 23492 * v18;
    v26 = dword_140404A6C[5873 * v18 + 283831510];
    if ( v26 == v1 )
    {
      dword_140404A6C[18 * (int)v25 + 71857987 + v2] = 16777217;
      if ( dword_140404A6C[v2 + 71856342] == 22 )
        dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = -1;
      v27 = v129;
      strcpy(v129, "Hiring");
      v28 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v29 = *v27++;
        *(_BYTE *)v28 = v29;
        v28 = (unsigned int *)((char *)v28 + 1);
      }
      while ( v29 );
      v30 = (int)dword_140404A6C[v2 + 71857986];
      dword_140404A6C[v2 + 71857986] = v30 + 1;
      dword_140404A6C[18 * v30 + 71858005 + v2] = 16777218;
      if ( dword_140404A6C[v2 + 71856342] == 23 )
        dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = -1;
      v31 = v129;
      strcpy(v129, "Firing");
      v32 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v33 = *v31++;
        *(_BYTE *)v32 = v33;
        v32 = (unsigned int *)((char *)v32 + 1);
      }
      while ( v33 );
      v25 = dword_140404A6C[v2 + 71857986] + 1;
      dword_140404A6C[v2 + 71857986] = v25;
    }
    dword_140404A6C[18 * (int)v25 + 71857987 + v2] = 16777219;
    if ( dword_140404A6C[v2 + 71856342] == 24 )
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = -1;
    v34 = v129;
    strcpy(v129, "Team");
    v35 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
    do
    {
      v36 = *v34++;
      *(_BYTE *)v35 = v36;
      v35 = (unsigned int *)((char *)v35 + 1);
    }
    while ( v36 );
    v3 = dword_140404A6C[v2 + 71857986] + 1;
    dword_140404A6C[v2 + 71857986] = v3;
    v37 = v3;
    v38 = v3;
    if ( v26 == v1 )
    {
      v39 = dword_140404A6C[v2 + 71856342];
      if ( v39 == 22 )
      {
        v40 = 0;
        if ( (int)dword_140404A6C[5873 * v18 + 283837293] > 0 )
        {
          v41 = (int *)((char *)&dword_140404A6C[283837294] + v24);
          do
          {
            v42 = (const char *)&dword_140404A6C[3597 * *v41 + 71856254];
            dword_140404A6C[18 * (int)v38 + 71857987 + v2] = (*v41 << 16) + 3;
            sub_140158AB0(v129, "Hire %s", v42);
            v34 = v129;
            v43 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
            do
            {
              v44 = *v34++;
              *(_BYTE *)v43 = v44;
              v43 = (unsigned int *)((char *)v43 + 1);
            }
            while ( v44 );
            ++v40;
            v3 = dword_140404A6C[v2 + 71857986] + 1;
            ++v41;
            v37 = v3;
            v38 = v3;
            dword_140404A6C[v2 + 71857986] = v3;
          }
          while ( v40 < (int)dword_140404A6C[5873 * v18 + 283837293] );
          v39 = dword_140404A6C[v2 + 71856342];
          LODWORD(v18) = v126;
          v5 = 0;
        }
      }
      if ( v39 == 23 )
      {
        v45 = v124;
        v46 = &dword_140404A6C[71859139];
        v47 = 0;
        v48 = 6;
        v49 = (const char *)&dword_140404A6C[71856254];
        do
        {
          if ( *(v46 - 2886) && !*v46 && v47 != v45 && *(v46 - 2853) == dword_140404A6C[v2 + 71856286] )
          {
            sub_140158AB0(v129, "Fire %s", v49);
            v34 = v129;
            dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = v48;
            v50 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
            do
            {
              v51 = *v34++;
              *(_BYTE *)v50 = v51;
              v50 = (unsigned int *)((char *)v50 + 1);
            }
            while ( v51 );
            v3 = dword_140404A6C[v2 + 71857986] + 1;
            v37 = v3;
            dword_140404A6C[v2 + 71857986] = v3;
          }
          ++v47;
          v49 += 14388;
          v48 += 0x10000;
          v46 += 3597;
        }
        while ( v48 < 16777222 );
        v24 = v128;
        v5 = 0;
        LODWORD(v18) = v126;
      }
    }
    if ( dword_140404A6C[v2 + 71856342] == 25 )
    {
      sub_140158AB0(v129, "Buy Disk", v34);
      v52 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 0;
      v53 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v54 = *v52++;
        *(_BYTE *)v53 = v54;
        v53 = (unsigned int *)((char *)v53 + 1);
      }
      while ( v54 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Buy Briefcase", v52);
      v55 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 1;
      v56 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v57 = *v55++;
        *(_BYTE *)v56 = v57;
        v56 = (unsigned int *)((char *)v56 + 1);
      }
      while ( v57 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Buy Walkie-Talkie", v55);
      v58 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 6;
      v59 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v60 = *v58++;
        *(_BYTE *)v59 = v60;
        v59 = (unsigned int *)((char *)v59 + 1);
      }
      while ( v60 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Buy 9mm", v58);
      v61 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 7;
      v62 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v63 = *v61++;
        *(_BYTE *)v62 = v63;
        v62 = (unsigned int *)((char *)v62 + 1);
      }
      while ( v63 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Buy 9mm Magazine", v61);
      v64 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 8;
      v65 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v66 = *v64++;
        *(_BYTE *)v65 = v66;
        v65 = (unsigned int *)((char *)v65 + 1);
      }
      while ( v66 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Buy MP5", v64);
      v67 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 9;
      v68 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v69 = *v67++;
        *(_BYTE *)v68 = v69;
        v68 = (unsigned int *)((char *)v68 + 1);
      }
      while ( v69 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Buy MP5 Magazine", v67);
      v70 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 10;
      v71 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v72 = *v70++;
        *(_BYTE *)v71 = v72;
        v71 = (unsigned int *)((char *)v71 + 1);
      }
      while ( v72 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Buy Bandage", v70);
      v73 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 11;
      v74 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v75 = *v73++;
        *(_BYTE *)v74 = v75;
        v74 = (unsigned int *)((char *)v74 + 1);
      }
      while ( v75 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Deposit", v73);
      v76 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 2;
      v77 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v78 = *v76++;
        *(_BYTE *)v77 = v78;
        v77 = (unsigned int *)((char *)v77 + 1);
      }
      while ( v78 );
      v79 = v124;
      v3 = dword_140404A6C[v2 + 71857986] + 1;
      v37 = v3;
      dword_140404A6C[v2 + 71857986] = v3;
      if ( *(unsigned int *)((char *)&dword_140404A6C[283831510] + v24) == v79 )
      {
        sub_140158AB0(v129, "Withdrawl $20", v76);
        v80 = v129;
        dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 3;
        v81 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
        do
        {
          v82 = *v80++;
          *(_BYTE *)v81 = v82;
          v81 = (unsigned int *)((char *)v81 + 1);
        }
        while ( v82 );
        ++dword_140404A6C[v2 + 71857986];
        sub_140158AB0(v129, "Withdrawl $100", v80);
        v83 = v129;
        dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 4;
        v84 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
        do
        {
          v85 = *v83++;
          *(_BYTE *)v84 = v85;
          v84 = (unsigned int *)((char *)v84 + 1);
        }
        while ( v85 );
        ++dword_140404A6C[v2 + 71857986];
        sub_140158AB0(v129, "Withdrawl $1000", v83);
        v86 = v129;
        dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 5;
        v87 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
        do
        {
          v88 = *v86++;
          *(_BYTE *)v87 = v88;
          v87 = (unsigned int *)((char *)v87 + 1);
        }
        while ( v88 );
        ++dword_140404A6C[v2 + 71857986];
        sub_140158AB0(v129, "Replace Phone", v86);
        v89 = v129;
        dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 12;
        v90 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
        do
        {
          v91 = *v89++;
          *(_BYTE *)v90 = v91;
          v90 = (unsigned int *)((char *)v90 + 1);
        }
        while ( v91 );
        v3 = dword_140404A6C[v2 + 71857986] + 1;
        v37 = v3;
        dword_140404A6C[v2 + 71857986] = v3;
      }
    }
    else
    {
      v79 = v124;
    }
    if ( dword_140404A6C[v2 + 71856342] == 24 )
    {
      dword_140404A6C[18 * (int)v37 + 71857987 + v2] = 0;
      v102 = v2 * 4 + 72LL * (int)dword_140404A6C[v2 + 71857986];
      *(_QWORD *)((char *)&dword_140404A6C[71857988] + v102) = 0x6165542074697551LL;
      *(_WORD *)((char *)&dword_140404A6C[71857990] + v102) = 109;
      v3 = dword_140404A6C[v2 + 71857986] + 1;
      dword_140404A6C[v2 + 71857986] = v3;
    }
    if ( dword_140404A6C[283831312] != 4 )
    {
      v19 = &dword_140404A6C[71859139];
      goto LABEL_140;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v123 ^ v130);
}

