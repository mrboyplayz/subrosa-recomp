/* Address: 0x140092a60 | Name: sub_140092A60 | Size: 4867 bytes */
void __fastcall sub_140092A60(unsigned int a1)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  int v3; // edi
  __int64 v4; // r12
  int v5; // r12d
  int v6; // r13d
  __int64 v7; // rcx
  _DWORD *v8; // r15
  unsigned int v9; // esi
  int *v10; // r14
  int v11; // eax
  int v12; // esi
  int v13; // esi
  __int64 v14; // rdx
  float *v15; // rax
  float v16; // xmm1_4
  float v17; // xmm0_4
  __int64 v18; // r14
  _DWORD *v19; // r13
  char *v20; // r8
  __int64 v21; // rax
  _BYTE *v22; // rdx
  char v23; // al
  __int64 v24; // r13
  int v25; // ecx
  int v26; // r10d
  char *v27; // r8
  _BYTE *v28; // rdx
  char v29; // al
  __int64 v30; // rcx
  char *v31; // r8
  _BYTE *v32; // rdx
  char v33; // al
  char *v34; // r8
  _BYTE *v35; // rdx
  char v36; // al
  int v37; // ecx
  int v38; // r9d
  int v39; // eax
  int v40; // esi
  _DWORD *v41; // r15
  char *v42; // r8
  _BYTE *v43; // rdx
  char v44; // al
  _DWORD *v45; // rsi
  int v46; // r15d
  int v47; // r14d
  char *v48; // r12
  char *v49; // r8
  _BYTE *v50; // rdx
  char v51; // al
  char *v52; // r8
  _BYTE *v53; // rdx
  char v54; // al
  char *v55; // r8
  _BYTE *v56; // rdx
  char v57; // al
  char *v58; // r8
  _BYTE *v59; // rdx
  char v60; // al
  char *v61; // r8
  _BYTE *v62; // rdx
  char v63; // al
  char *v64; // r8
  _BYTE *v65; // rdx
  char v66; // al
  char *v67; // r8
  _BYTE *v68; // rdx
  char v69; // al
  char *v70; // r8
  _BYTE *v71; // rdx
  char v72; // al
  char *v73; // r8
  _BYTE *v74; // rdx
  char v75; // al
  char *v76; // r8
  _BYTE *v77; // rdx
  char v78; // al
  unsigned int v79; // r15d
  char *v80; // r8
  _BYTE *v81; // rdx
  char v82; // al
  char *v83; // r8
  _BYTE *v84; // rdx
  char v85; // al
  char *v86; // r8
  _BYTE *v87; // rdx
  char v88; // al
  char *v89; // r8
  _BYTE *v90; // rdx
  char v91; // al
  int v92; // ecx
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // rcx
  int *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  float *v99; // rdx
  __int64 v100; // rcx
  float v101; // xmm0_4
  __int64 v102; // rdx
  int v103; // eax
  int *v104; // r10
  int v105; // r11d
  __int64 v106; // rcx
  char *v107; // rdx
  char *v108; // r8
  char v109; // cl
  _WORD *v110; // rcx
  bool v111; // zf
  char *v112; // rdx
  char *v113; // r9
  _BYTE *v114; // r8
  char v115; // cl
  __int64 v116; // rcx
  int v117; // eax
  char *v118; // rcx
  char *v119; // r8
  _BYTE *v120; // rdx
  char v121; // al
  int v123; // [rsp+2Ch] [rbp-DCh]
  int v124; // [rsp+2Ch] [rbp-DCh]
  int v125; // [rsp+30h] [rbp-D8h]
  char *v126; // [rsp+38h] [rbp-D0h]
  __int64 v127; // [rsp+40h] [rbp-C8h] BYREF
  char Buffer[512]; // [rsp+48h] [rbp-C0h] BYREF

  v1 = a1;
  v2 = 3597LL * (int)a1;
  v3 = 0;
  v4 = dword_16D67D63C[v2];
  dword_16D67F0B4[v2] = 0;
  if ( (unsigned int)v4 > 0xFF )
    return;
  if ( dword_1915413AC == 3 )
  {
    v5 = 0;
    dword_16D67D704[v2] = 0;
    goto LABEL_34;
  }
  v6 = dword_183A7E074;
  v123 = dword_16D67D704[v2];
  if ( (unsigned int)(v123 - 9) <= 2 )
  {
    v7 = (unsigned int)dword_16D67D708[v2];
    if ( (int)v7 < 0 || (int)v7 >= dword_183A7E074 )
    {
      dword_16D67D704[v2] = 0;
    }
    else
    {
      if ( (unsigned int)sub_1400B3610(v7, &dword_190941A48[7166 * v4]) )
        goto LABEL_11;
      dword_16D67D704[v2] = 0;
    }
    v123 = 0;
  }
LABEL_11:
  v8 = &unk_183A7E0B8;
  v9 = 0;
  if ( v6 > 0 )
  {
    v10 = (int *)&unk_183A7E0B8;
    do
    {
      v11 = *v10;
      if ( *v10 == 3 )
      {
        if ( (unsigned int)sub_1400B3610(v9, &dword_190941A48[7166 * v4]) )
        {
          if ( v123 )
            goto LABEL_107;
          v5 = 0;
          dword_16D67D704[v2] = 9;
          dword_16D67D708[v2] = v9;
          goto LABEL_33;
        }
      }
      else if ( (v11 == 5 || (unsigned int)(v11 - 8) <= 1)
             && (unsigned int)sub_1400B3610(v9, &dword_190941A48[7166 * v4]) )
      {
        if ( v123 )
          goto LABEL_107;
        v5 = 0;
        dword_16D67D704[v2] = 10;
        dword_16D67D708[v2] = v9;
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
    if ( dword_19154118C != 4 )
    {
      if ( ((dword_19154118C - 3) & 0xFFFFFFFB) != 0
        || (v98 = dword_16D67D624[v2], (unsigned int)v98 > 5)
        || (v99 = (float *)&dword_190941A48[7166 * v4], v100 = 5873 * v98, *v99 < *(float *)&dword_191541440[5873 * v98])
        || *v99 >= *(float *)&dword_19154144C[v100]
        || (v101 = v99[2], v101 < *(float *)&dword_191541448[v100])
        || v101 >= *(float *)&dword_191541454[v100] )
      {
LABEL_32:
        v5 = 0;
        dword_16D67D704[v2] = 0;
        goto LABEL_33;
      }
      v1 = a1;
      v5 = 0;
      if ( !v123 )
        dword_16D67D704[v2] = 14;
      goto LABEL_34;
    }
    v13 = 0;
    v14 = 0;
    v15 = (float *)dword_19154144C;
    v16 = *(float *)&dword_190941A48[7166 * v4];
    while ( 1 )
    {
      if ( v16 >= *(v15 - 3) && v16 < *v15 )
      {
        v17 = *(float *)&dword_190941A48[7166 * v4 + 2];
        if ( v17 >= *(v15 - 1) && v17 < v15[2] )
          break;
      }
      ++v13;
      ++v14;
      v15 += 5873;
      if ( (__int64)v15 >= (__int64)flt_191563AE4 )
        goto LABEL_32;
    }
    v92 = dword_16D67D624[v2];
    if ( v92 != 17 )
    {
      if ( dword_1915414A4[5873 * v13] != -1 )
      {
        if ( v92 == v13 && v123 == 20 )
          dword_16D67D704[v2] = 25;
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
    dword_16D67D704[v2] = 20;
    if ( dword_1915414A4[5873 * v13] == -1 )
    {
      *(_DWORD *)((char *)&unk_16D67F0B8 + v2 * 4) = 0;
      v93 = v2 * 4 + 72LL * dword_16D67F0B4[v2];
      *(_QWORD *)&byte_16D67F0BC[v93] = 0x614D20796C707041LL;
      *(_DWORD *)&byte_16D67F0BC[v93 + 8] = 1701273966;
      *(_WORD *)&byte_16D67F0BC[v93 + 12] = 114;
    }
    else
    {
      v94 = dword_191546F00[5873 * v13];
      if ( v94 > 0 )
      {
        v95 = 0;
        v96 = &dword_191546F04[5873 * v14];
        while ( *v96 != a1 )
        {
          ++v95;
          ++v96;
          if ( v95 >= v94 )
            goto LABEL_125;
        }
        goto LABEL_112;
      }
LABEL_125:
      sub_140095F50(a1);
      *(_DWORD *)((char *)&unk_16D67F0B8 + v2 * 4) = 1;
      v97 = v2 * 4 + 72LL * dword_16D67F0B4[v2];
      *(_DWORD *)&byte_16D67F0BC[v97] = 1819308097;
      *(_WORD *)&byte_16D67F0BC[v97 + 4] = 121;
    }
    v3 = dword_16D67F0B4[v2] + 1;
    dword_16D67F0B4[v2] = v3;
LABEL_112:
    if ( dword_16D67D624[v2] == v13 && !dword_16D67D704[v2] )
      dword_16D67D704[v2] = 25;
    goto LABEL_33;
  }
  while ( *v8 != 6 || !(unsigned int)sub_1400B3610((unsigned int)v12, &dword_190941A48[7166 * v4]) )
  {
    ++v12;
    v8 += 14019;
    if ( v12 >= v6 )
      goto LABEL_25;
  }
  if ( v123 )
  {
LABEL_107:
    v5 = 0;
  }
  else
  {
    v5 = 0;
    dword_16D67D704[v2] = 13;
    dword_16D67D708[v2] = v12;
  }
LABEL_33:
  v1 = a1;
LABEL_34:
  v18 = dword_16D67D624[v2];
  v19 = &unk_16D6802B8;
  v125 = dword_16D67D624[v2];
  v126 = byte_16D67D5A4;
  v124 = 6;
  if ( dword_19154118C != 4 )
  {
    v79 = a1;
LABEL_140:
    if ( (_DWORD)v18 != -1 )
    {
      v103 = dword_16D67D704[v2];
      if ( v103 == 17 )
      {
        v104 = dword_19619982C;
        v105 = 0;
        do
        {
          if ( *(v104 - 2) )
          {
            v106 = *v104;
            if ( (int)v106 >= 6 )
            {
              Buffer[0] = 0;
            }
            else
            {
              v107 = off_140147BA0[v106];
              v108 = (char *)(Buffer - v107);
              do
              {
                v109 = *v107;
                v108[(_QWORD)v107] = *v107;
                ++v107;
              }
              while ( v109 );
            }
            v110 = (_WORD *)((char *)&v127 + 7);
            do
            {
              v111 = *((_BYTE *)v110 + 1) == 0;
              v110 = (_WORD *)((char *)v110 + 1);
            }
            while ( !v111 );
            *v110 = 32;
            v112 = (char *)&v127 + 7;
            do
              v111 = *++v112 == 0;
            while ( !v111 );
            strcpy(v112, (const char *)&qword_14AA152F4[12472 * *(v104 - 1)]);
            v113 = Buffer;
            *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * v3 + v2 * 4) = v105;
            v114 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
            do
            {
              v115 = *v113++;
              *v114++ = v115;
            }
            while ( v115 );
            *(_DWORD *)&byte_16D67F0BC[72 * dword_16D67F0B4[v2] + 64 + v2 * 4] = v104[1];
          }
          else
          {
            *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * v3 + v2 * 4) = 8;
            v116 = v2 * 4 + 72LL * dword_16D67F0B4[v2];
            *(_DWORD *)&byte_16D67F0BC[v116] = 1145851731;
            byte_16D67F0BC[v116 + 4] = 0;
            *(_DWORD *)&byte_16D67F0BC[72 * dword_16D67F0B4[v2] + 64 + v2 * 4] = 0;
          }
          ++v105;
          v3 = dword_16D67F0B4[v2] + 1;
          v104 += 4;
          dword_16D67F0B4[v2] = v3;
        }
        while ( v105 < 8 );
        v103 = dword_16D67D704[v2];
        v79 = a1;
      }
      if ( v103 == 19 && *(_DWORD *)((char *)&unk_16D67D630 + v2 * 4) )
      {
        v117 = 6;
        v118 = byte_16D67D5A4;
        do
        {
          if ( *(v19 - 2886) && !*v19 && v5 != v79 )
          {
            if ( *(v19 - 2853) == dword_16D67D624[v2] )
            {
              sub_1400DBB30(Buffer, "Fire %s");
              v119 = Buffer;
              *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = v124;
              v120 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
              do
              {
                v121 = *v119++;
                *v120++ = v121;
              }
              while ( v121 );
              ++dword_16D67F0B4[v2];
              v118 = v126;
            }
            v117 = v124;
          }
          v118 += 14388;
          v117 += 0x10000;
          ++v5;
          v126 = v118;
          v19 += 3597;
          v124 = v117;
        }
        while ( v117 < 16777222 );
      }
    }
    return;
  }
  if ( (unsigned int)v18 <= 5 && (unsigned int)(dword_16D67D704[v2] - 21) <= 5 )
  {
    dword_16D67F0B4[v2] = 0;
    *(_DWORD *)((char *)&unk_16D67F0B8 + v2 * 4) = 16777220;
    if ( dword_16D67D704[v2] == 25 )
      *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = -1;
    v20 = Buffer;
    v21 = dword_16D67F0B4[v2];
    strcpy(Buffer, "Requisition");
    v22 = &byte_16D67F0BC[72 * v21 + v2 * 4];
    do
    {
      v23 = *v20++;
      *v22++ = v23;
    }
    while ( v23 );
    v24 = 23492 * v18;
    v25 = dword_16D67F0B4[v2] + 1;
    dword_16D67F0B4[v2] = v25;
    v127 = 23492 * v18;
    v26 = dword_1915414A4[5873 * v18];
    if ( v26 == v1 )
    {
      *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * v25 + v2 * 4) = 16777217;
      if ( dword_16D67D704[v2] == 22 )
        *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = -1;
      v27 = Buffer;
      strcpy(Buffer, "Hiring");
      v28 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
      do
      {
        v29 = *v27++;
        *v28++ = v29;
      }
      while ( v29 );
      v30 = dword_16D67F0B4[v2];
      dword_16D67F0B4[v2] = v30 + 1;
      *(_DWORD *)&byte_16D67F0BC[72 * v30 + 68 + v2 * 4] = 16777218;
      if ( dword_16D67D704[v2] == 23 )
        *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = -1;
      v31 = Buffer;
      strcpy(Buffer, "Firing");
      v32 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
      do
      {
        v33 = *v31++;
        *v32++ = v33;
      }
      while ( v33 );
      v25 = dword_16D67F0B4[v2] + 1;
      dword_16D67F0B4[v2] = v25;
    }
    *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * v25 + v2 * 4) = 16777219;
    if ( dword_16D67D704[v2] == 24 )
      *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = -1;
    v34 = Buffer;
    strcpy(Buffer, "Team");
    v35 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
    do
    {
      v36 = *v34++;
      *v35++ = v36;
    }
    while ( v36 );
    v3 = dword_16D67F0B4[v2] + 1;
    dword_16D67F0B4[v2] = v3;
    v37 = v3;
    v38 = v3;
    if ( v26 == v1 )
    {
      v39 = dword_16D67D704[v2];
      if ( v39 == 22 )
      {
        v40 = 0;
        if ( dword_191546F00[5873 * v18] > 0 )
        {
          v41 = (int *)((char *)dword_191546F04 + v24);
          do
          {
            *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * v38 + v2 * 4) = (*v41 << 16) + 3;
            sub_1400DBB30(Buffer, "Hire %s");
            v42 = Buffer;
            v43 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
            do
            {
              v44 = *v42++;
              *v43++ = v44;
            }
            while ( v44 );
            ++v40;
            v3 = dword_16D67F0B4[v2] + 1;
            ++v41;
            v37 = v3;
            v38 = v3;
            dword_16D67F0B4[v2] = v3;
          }
          while ( v40 < dword_191546F00[5873 * v18] );
          v39 = dword_16D67D704[v2];
          LODWORD(v18) = v125;
          v5 = 0;
        }
      }
      if ( v39 == 23 )
      {
        v45 = &unk_16D6802B8;
        v46 = 0;
        v47 = 6;
        v48 = byte_16D67D5A4;
        do
        {
          if ( *(v45 - 2886) && !*v45 && v46 != a1 && *(v45 - 2853) == dword_16D67D624[v2] )
          {
            sub_1400DBB30(Buffer, "Fire %s");
            v49 = Buffer;
            *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = v47;
            v50 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
            do
            {
              v51 = *v49++;
              *v50++ = v51;
            }
            while ( v51 );
            v3 = dword_16D67F0B4[v2] + 1;
            v37 = v3;
            dword_16D67F0B4[v2] = v3;
          }
          ++v46;
          v48 += 14388;
          v47 += 0x10000;
          v45 += 3597;
        }
        while ( v47 < 16777222 );
        v24 = v127;
        v5 = 0;
        LODWORD(v18) = v125;
      }
    }
    if ( dword_16D67D704[v2] == 25 )
    {
      sub_1400DBB30(Buffer, "Buy Disk");
      v52 = Buffer;
      *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = 0;
      v53 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
      do
      {
        v54 = *v52++;
        *v53++ = v54;
      }
      while ( v54 );
      ++dword_16D67F0B4[v2];
      sub_1400DBB30(Buffer, "Buy Briefcase");
      v55 = Buffer;
      *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = 1;
      v56 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
      do
      {
        v57 = *v55++;
        *v56++ = v57;
      }
      while ( v57 );
      ++dword_16D67F0B4[v2];
      sub_1400DBB30(Buffer, "Buy Walkie-Talkie");
      v58 = Buffer;
      *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = 6;
      v59 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
      do
      {
        v60 = *v58++;
        *v59++ = v60;
      }
      while ( v60 );
      ++dword_16D67F0B4[v2];
      sub_1400DBB30(Buffer, "Buy 9mm");
      v61 = Buffer;
      *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = 7;
      v62 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
      do
      {
        v63 = *v61++;
        *v62++ = v63;
      }
      while ( v63 );
      ++dword_16D67F0B4[v2];
      sub_1400DBB30(Buffer, "Buy 9mm Magazine");
      v64 = Buffer;
      *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = 8;
      v65 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
      do
      {
        v66 = *v64++;
        *v65++ = v66;
      }
      while ( v66 );
      ++dword_16D67F0B4[v2];
      sub_1400DBB30(Buffer, "Buy MP5");
      v67 = Buffer;
      *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = 9;
      v68 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
      do
      {
        v69 = *v67++;
        *v68++ = v69;
      }
      while ( v69 );
      ++dword_16D67F0B4[v2];
      sub_1400DBB30(Buffer, "Buy MP5 Magazine");
      v70 = Buffer;
      *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = 10;
      v71 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
      do
      {
        v72 = *v70++;
        *v71++ = v72;
      }
      while ( v72 );
      ++dword_16D67F0B4[v2];
      sub_1400DBB30(Buffer, "Buy Bandage");
      v73 = Buffer;
      *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = 11;
      v74 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
      do
      {
        v75 = *v73++;
        *v74++ = v75;
      }
      while ( v75 );
      ++dword_16D67F0B4[v2];
      sub_1400DBB30(Buffer, "Deposit");
      v76 = Buffer;
      *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = 2;
      v77 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
      do
      {
        v78 = *v76++;
        *v77++ = v78;
      }
      while ( v78 );
      v79 = a1;
      v3 = dword_16D67F0B4[v2] + 1;
      v37 = v3;
      dword_16D67F0B4[v2] = v3;
      if ( *(int *)((char *)dword_1915414A4 + v24) == a1 )
      {
        sub_1400DBB30(Buffer, "Withdrawl $20");
        v80 = Buffer;
        *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = 3;
        v81 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
        do
        {
          v82 = *v80++;
          *v81++ = v82;
        }
        while ( v82 );
        ++dword_16D67F0B4[v2];
        sub_1400DBB30(Buffer, "Withdrawl $100");
        v83 = Buffer;
        *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = 4;
        v84 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
        do
        {
          v85 = *v83++;
          *v84++ = v85;
        }
        while ( v85 );
        ++dword_16D67F0B4[v2];
        sub_1400DBB30(Buffer, "Withdrawl $1000");
        v86 = Buffer;
        *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = 5;
        v87 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
        do
        {
          v88 = *v86++;
          *v87++ = v88;
        }
        while ( v88 );
        ++dword_16D67F0B4[v2];
        sub_1400DBB30(Buffer, "Replace Phone");
        v89 = Buffer;
        *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * dword_16D67F0B4[v2] + v2 * 4) = 12;
        v90 = &byte_16D67F0BC[72 * dword_16D67F0B4[v2] + v2 * 4];
        do
        {
          v91 = *v89++;
          *v90++ = v91;
        }
        while ( v91 );
        v3 = dword_16D67F0B4[v2] + 1;
        v37 = v3;
        dword_16D67F0B4[v2] = v3;
      }
    }
    else
    {
      v79 = a1;
    }
    if ( dword_16D67D704[v2] == 24 )
    {
      *(_DWORD *)((char *)&unk_16D67F0B8 + 72 * v37 + v2 * 4) = 0;
      v102 = v2 * 4 + 72LL * dword_16D67F0B4[v2];
      *(_QWORD *)&byte_16D67F0BC[v102] = 0x6165542074697551LL;
      *(_WORD *)&byte_16D67F0BC[v102 + 8] = 109;
      v3 = dword_16D67F0B4[v2] + 1;
      dword_16D67F0B4[v2] = v3;
    }
    if ( dword_19154118C != 4 )
    {
      v19 = &unk_16D6802B8;
      goto LABEL_140;
    }
  }
}

