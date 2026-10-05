/* Address: 0x14006d5a0 | Name: sub_14006D5A0 | Size: 4334 bytes */
int __fastcall sub_14006D5A0(int a1)
{
  __int64 v1; // r13
  unsigned __int64 v2; // r14
  int v3; // r15d
  int v4; // r11d
  __int64 v5; // r9
  int v6; // edi
  __int64 v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  int v10; // r10d
  _BYTE *v11; // rbx
  int v12; // edx
  char v13; // r8
  int v14; // ecx
  int v15; // r8d
  char *v16; // r9
  char v17; // dl
  int v18; // edx
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // r8
  int v23; // ebx
  __int64 v24; // r8
  int v25; // edx
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned __int64 v29; // r10
  __int64 v30; // r11
  char *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  char v35; // al
  __int64 v36; // rbx
  __int64 v37; // r15
  int v38; // edi
  int v39; // ecx
  __int64 v40; // r11
  __int64 v41; // rsi
  __int64 v42; // rdi
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
  __int64 v54; // rsi
  __int64 v55; // rcx
  char *v56; // r8
  char v57; // cl
  __int64 v58; // rax
  int v59; // r9d
  int v60; // esi
  _DWORD *v61; // r10
  const char *v62; // r11
  int v63; // esi
  __int64 v64; // rbx
  int v65; // r12d
  __int64 v66; // rcx
  char *v67; // rcx
  char v68; // al
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  char v74; // al
  __int64 v75; // r12
  signed int v76; // r15d
  char *v77; // rsi
  __m128i si128; // xmm0
  __m128i *v79; // rcx
  unsigned __int64 v80; // r14
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rcx
  char v84; // al
  int v85; // esi
  int v86; // eax
  int v87; // edx
  int v88; // r9d
  char v89; // r8
  __int64 v90; // rcx
  __int64 v91; // rcx
  char v92; // al
  __int64 v93; // rcx
  char *v94; // r8
  char v95; // cl
  unsigned __int64 v96; // r12
  int v97; // r11d
  _DWORD *v98; // r9
  const char *v99; // r10
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rcx
  int v104; // [rsp+30h] [rbp-D0h] BYREF
  int v105; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v106; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v107; // [rsp+40h] [rbp-C0h] BYREF
  int *v108; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v109; // [rsp+50h] [rbp-B0h]
  char v110[4]; // [rsp+5Ch] [rbp-A4h] BYREF
  char Str1[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v112; // [rsp+25Fh] [rbp+15Fh] BYREF
  char Buffer[512]; // [rsp+260h] [rbp+160h] BYREF

  v1 = a1;
  v2 = 7040LL * a1;
  v3 = -1;
  v109 = v2;
  v4 = -1;
  v5 = *(int *)&byte_190260474[v2 + 64];
  v104 = v5;
  if ( (_DWORD)v5 == 2 )
  {
    v4 = *(_DWORD *)((char *)&unk_19025F3F4 + v2);
  }
  else if ( !(_DWORD)v5 && dword_19025F0F4[v2 / 4] > 0 )
  {
    v4 = *((_DWORD *)&unk_19025F3F4 + 1760 * dword_19025F0F8[v2 / 4]);
  }
  v6 = 0;
  v7 = 1760LL * a1;
  v8 = v2 + 72 * v5;
  v107 = 9 * v5;
  v9 = *(int *)((char *)&unk_1902604BC + v8);
  v105 = 0;
  v106 = 18 * v5;
  Str1[0] = 0;
  v10 = 0;
  v11 = &byte_190260474[v2];
  v12 = 0;
  LODWORD(v108) = dword_1902604C0[18 * v5 + v7 + v9];
  while ( 1 )
  {
    v13 = v11[v12];
    if ( (unsigned __int8)(v13 - 97) <= 0x19u
      || (unsigned __int8)(v13 - 65) <= 0x19u
      || (unsigned __int8)(v13 - 48) <= 9u )
    {
      break;
    }
    v14 = v12;
    if ( v13 )
    {
      v105 = ++v12;
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
      v17 = v11[v15];
      if ( (unsigned __int8)(v17 - 97) > 0x19u
        && (unsigned __int8)(v17 - 65) > 0x19u
        && (unsigned __int8)(v17 - 48) > 9u )
      {
        break;
      }
      v14 = v15 + 1;
      *v16++ = v17;
      v105 = v14;
      ++v10;
      ++v15;
      if ( v14 >= 62 )
        goto LABEL_22;
    }
    v14 = v15;
LABEL_22:
    LODWORD(v5) = v104;
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
        if ( v11[v18] != 32 )
          break;
        v14 = v18 + 1;
        v18 = v14;
      }
      while ( v14 < 62 );
    }
    v19 = (unsigned __int8)v11[v14];
    LODWORD(v20) = v19 - 97;
    if ( (unsigned __int8)(v19 - 97) > 0x19u )
    {
      LODWORD(v20) = v19 - 65;
      if ( (unsigned __int8)(v19 - 65) > 0x19u )
      {
        LODWORD(v20) = v19 - 48;
        if ( (unsigned __int8)(v19 - 48) > 9u )
        {
          if ( (_BYTE)v19 && v14 < 62 )
          {
            v21 = 0;
            do
            {
              if ( v21 >= 2 )
                break;
              v22 = v11[v14];
              if ( !v22 )
                break;
              ++v6;
              Buffer[v21++] = v22;
              ++v14;
            }
            while ( v14 < 62 );
          }
          LODWORD(v20) = v6;
          Buffer[v6] = 0;
          if ( v6 > 0 && Buffer[0] == 58 && !Buffer[1] )
          {
            if ( (unsigned __int8)(Str1[0] - 65) > 2u
              || (v23 = (unsigned __int8)Str1[0] - 65, LODWORD(v20) = sub_140037580(v1, v23), (_DWORD)v20 == -1) )
            {
              *(_OWORD *)&byte_19025F434[64 * (110 * v1 + SLODWORD(qword_19025F428[v2 / 8]))] = xmmword_1400F57C0;
              goto LABEL_178;
            }
            *(_DWORD *)&byte_190260474[v2 + 64] = v23;
          }
        }
      }
    }
    return v20;
  }
  if ( v4 == -1 )
  {
    *(_OWORD *)&byte_19025F434[64 * (110 * v1 + SLODWORD(qword_19025F428[v2 / 8]))] = xmmword_1400F57C0;
    goto LABEL_178;
  }
  if ( Str1[0] != 67 || Str1[1] != 68 || Str1[2] )
  {
    v34 = 0;
    while ( 1 )
    {
      v35 = Str1[v34++];
      if ( v35 != byte_1400F57E4[v34 - 1] )
        break;
      if ( v34 == 4 )
      {
        v36 = 1;
        *(_DWORD *)((char *)&unk_1902605D8 + v2) = 1;
        *(_DWORD *)((char *)&unk_1902605DC + v2) = 4;
        *(_DWORD *)((char *)&unk_190260614 + v2) = 0;
        *(_QWORD *)((char *)&unk_1902605E8 + v2) = 1;
        *(_DWORD *)((char *)&unk_1902605E0 + v2) = v5;
        v37 = 110 * v1;
        *(_DWORD *)((char *)&unk_1902605E4 + v2) = dword_1902604C0[v7 + v106 + *(int *)((char *)&unk_1902604BC + v8)];
        byte_19025F434[64 * (110 * v1 + SLODWORD(qword_19025F428[v2 / 8]))] = 0;
        sub_14006D120(v1);
        if ( v104 == 2 )
        {
          v38 = *(_DWORD *)((char *)&unk_19025F3F4 + v2);
          goto LABEL_74;
        }
        if ( v104 || dword_19025F0F4[v2 / 4] <= 0 )
          goto LABEL_85;
        v38 = *((_DWORD *)&unk_19025F3F4 + 1760 * dword_19025F0F8[v2 / 4]);
LABEL_74:
        if ( v38 == -1 )
        {
LABEL_85:
          Buffer[0] = 0;
        }
        else
        {
          sub_1400DBB30(Buffer, "%c:\\");
          v39 = *(_DWORD *)((char *)&unk_1902604BC + v8);
          if ( v39 >= 1 )
          {
            v40 = (unsigned int)v39;
            v41 = *(int *)((char *)&unk_1902604BC + 8 * v107 + v2);
            v42 = 10280LL * v38;
            v43 = (int *)((char *)dword_1902604C4 + v8);
            do
            {
              v44 = &v112;
              do
                v45 = *++v44 == 0;
              while ( !v45 );
              strcpy(v44, (const char *)&unk_18F7174CC + 16 * *v43 + v42);
              if ( v36 < v41 )
              {
                v46 = &v112;
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
        sub_1400DBB30(&byte_19025F434[64 * (v37 + SLODWORD(qword_19025F428[v2 / 8]))], "Directory of %s");
        sub_14006D120(v1);
        v20 = (v37 + SLODWORD(qword_19025F428[v2 / 8])) << 6;
        byte_19025F434[v20] = 0;
        return v20;
      }
    }
    v47 = 0;
    do
    {
      v48 = Str1[v47++];
      if ( v48 != aCopy[v47 - 1] )
      {
        v73 = 0;
        while ( 1 )
        {
          v74 = Str1[v73++];
          if ( v74 != aMission_0[v73 - 1] )
            break;
          if ( v73 == 8 )
            goto LABEL_131;
        }
        if ( strcmp(Str1, "MISSION.EXE") )
        {
          v83 = 0;
          while ( 1 )
          {
            v84 = Str1[v83++];
            if ( v84 != aDecrypt[v83 - 1] )
              break;
            if ( v83 == 8 )
              goto LABEL_142;
          }
          if ( strcmp(Str1, "DECRYPT.EXE") )
          {
            v91 = 0;
            while ( 1 )
            {
              v92 = Str1[v91++];
              if ( v92 != aSnake[v91 - 1] )
                break;
              if ( v91 == 6 )
                goto LABEL_155;
            }
            LODWORD(v20) = strcmp(Str1, "SNAKE.EXE");
            if ( !(_DWORD)v20 )
            {
LABEL_155:
              *(_DWORD *)&algn_19026071C[v2] = 3;
              dword_19025F430[v2 / 4] = -1;
              qword_19025F428[v2 / 8] = 0;
              memset(&dword_190260720[v2 / 4], 0, 0x520u);
              LODWORD(v20) = sub_140072680((unsigned int)v1);
              return v20;
            }
            if ( *v11 )
            {
              v93 = (110 * v1 + SLODWORD(qword_19025F428[v2 / 8])) << 6;
              *(_OWORD *)&byte_19025F434[v93] = xmmword_1400F58A8;
              *(_QWORD *)&byte_19025F434[v93 + 16] = 0x454D414E20454C49LL;
              byte_19025F434[v93 + 24] = 0;
              goto LABEL_178;
            }
            return v20;
          }
LABEL_142:
          LODWORD(v106) = (_DWORD)v108;
          LODWORD(v107) = v104;
          v85 = -1;
          if ( (unsigned int)sub_1400375E0(v1, (int *)&v107, (int *)&v106, (__int64)v11, &v105) )
            goto LABEL_150;
          v86 = sub_140037580(v1, v107);
          if ( v86 == -1 )
            goto LABEL_150;
          v87 = v105;
          v88 = 0;
          if ( v105 < 62 )
          {
            while ( 1 )
            {
              v89 = v11[v87];
              if ( (unsigned __int8)(v89 - 97) <= 0x19u
                || (unsigned __int8)(v89 - 65) <= 0x19u
                || (unsigned __int8)(v89 - 48) <= 9u
                || !v89 )
              {
                break;
              }
              if ( ++v87 >= 62 )
                goto LABEL_150;
            }
            if ( v87 < 62 )
            {
              v94 = Str1;
              do
              {
                v95 = v11[v87];
                if ( (unsigned __int8)(v95 - 97) > 0x19u
                  && (unsigned __int8)(v95 - 65) > 0x19u
                  && (unsigned __int8)(v95 - 48) > 9u
                  && v95 != 46 )
                {
                  break;
                }
                *v94 = v95;
                ++v88;
                ++v94;
                ++v87;
              }
              while ( v87 < 62 );
            }
          }
          Str1[v88] = 0;
          if ( v88 <= 0 )
            goto LABEL_150;
          v96 = 10280LL * v86;
          v97 = *(_DWORD *)((char *)&unk_18F7184CC + v96);
          if ( v97 <= 0 )
            goto LABEL_150;
          v98 = &dword_18F7184E4[v96 / 4];
          v99 = (char *)&unk_18F7184D4 + v96;
          do
          {
            if ( *v98 == (_DWORD)v106 && !strcmp(v99, Str1) )
              v85 = v6;
            ++v6;
            v99 += 24;
            v98 += 6;
          }
          while ( v6 < v97 );
          if ( v85 == -1 )
          {
LABEL_150:
            v90 = (110 * v1 + SLODWORD(qword_19025F428[v2 / 8])) << 6;
            *(_OWORD *)&byte_19025F434[v90] = xmmword_1400F58F8;
            *(_QWORD *)&byte_19025F434[v90 + 16] = 0x656D616E656C6966LL;
            *(_WORD *)&byte_19025F434[v90 + 24] = 34;
            goto LABEL_178;
          }
          v100 = *(int *)((char *)&unk_18F7184D0 + 24 * v85 + v96);
          if ( dword_18EE07884[290 * v100] )
          {
            dword_19025F430[v2 / 4] = -1;
            *(_DWORD *)&algn_19026071C[v2] = 1;
            dword_190260924[v2 / 4] = v100;
            LODWORD(v20) = sub_14006EF30((unsigned int)v1, v100, 0x140000000uLL, v98);
            return v20;
          }
          v101 = (110 * v1 + SLODWORD(qword_19025F428[v2 / 8])) << 6;
          *(_OWORD *)&byte_19025F434[v101] = xmmword_1400F58E0;
          *(_DWORD *)&byte_19025F434[v101 + 16] = 4542553;
          goto LABEL_178;
        }
LABEL_131:
        v75 = 110 * v1;
        if ( dword_190260718[v2 / 4] == -1 )
        {
          v102 = (v75 + SLODWORD(qword_19025F428[v2 / 8])) << 6;
          *(_OWORD *)&byte_19025F434[v102] = xmmword_1400F58A8;
          *(_QWORD *)&byte_19025F434[v102 + 16] = 0x454D414E20454C49LL;
          byte_19025F434[v102 + 24] = 0;
          goto LABEL_178;
        }
        *(_DWORD *)&algn_19026071C[v2] = 2;
        dword_19025F430[v2 / 4] = -1;
        qword_19025F428[v2 / 8] = 0;
        v108 = &dword_190260720[v2 / 4];
        memset(&dword_190260720[v2 / 4], 0, 0x420u);
        dword_19026072C[v2 / 4] = -1;
        v76 = 0;
        v77 = &byte_19025F434[7040 * v1];
        do
        {
          *v77 = 0;
          if ( !v76 )
            strcpy(v77, "CONNECTING...");
          si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7BB0);
          v79 = (__m128i *)((char *)&unk_19025FC34 + 64 * (v75 + (unsigned int)v76));
          *v79 = si128;
          v79[1] = si128;
          v79[2] = si128;
          v79[3].m128i_i64[0] = si128.m128i_i64[0];
          v79[3].m128i_i32[2] = si128.m128i_i32[0];
          v79[3].m128i_i16[6] = si128.m128i_i16[0];
          v79[3].m128i_i8[14] = si128.m128i_i8[0];
          sub_1400395A0(v1, v76++);
          v77 += 64;
        }
        while ( v76 < 24 );
        LODWORD(v20) = (_DWORD)v108;
        v80 = v109;
        v45 = dword_163D75B60 == 0;
        *v108 = 0;
        *(int *)((char *)&dword_190260724 + v80) = 256;
        if ( !v45 )
        {
          v81 = dword_191541414;
          v82 = (__int64)dword_196199564++ << 7;
          HIWORD(dword_196199564) = 0;
          *(_DWORD *)((char *)&unk_195999560 + v82) = 19;
          *(_DWORD *)((char *)&unk_195999564 + v82) = v81;
          LODWORD(v20) = dword_191536DD0;
          *(int *)((char *)&dword_195999580 + v82) = dword_191536DD0;
          *(int *)((char *)&dword_195999584 + v82) = v1;
          *(int *)((char *)&dword_195999590 + v82) = 1065353216;
          *(int *)((char *)&dword_195999594 + v82) = 1065353216;
        }
        return v20;
      }
    }
    while ( v47 != 5 );
    LODWORD(v106) = (_DWORD)v108;
    LODWORD(v107) = v5;
    if ( (unsigned int)sub_1400375E0(v1, (int *)&v107, (int *)&v106, (__int64)v11, &v105) )
    {
      v54 = v1;
      v72 = (110 * v1 + SLODWORD(qword_19025F428[v2 / 8])) << 6;
      *(_OWORD *)&byte_19025F434[v72] = xmmword_1400F5830;
      *(_OWORD *)&byte_19025F434[v72 + 16] = xmmword_1400F5840;
      *(_QWORD *)&byte_19025F434[v72 + 32] = 0x4549464943455053LL;
      *(_WORD *)&byte_19025F434[v72 + 40] = 68;
      sub_14006D120(v1);
    }
    else
    {
      v49 = sub_140037580(v1, v107);
      v50 = v49;
      if ( v49 != -1 )
      {
        v51 = v105;
        v52 = 0;
        if ( v105 < 62 )
        {
          while ( 1 )
          {
            v53 = v11[v51];
            if ( (unsigned __int8)(v53 - 97) <= 0x19u
              || (unsigned __int8)(v53 - 65) <= 0x19u
              || (unsigned __int8)(v53 - 48) <= 9u
              || !v53 )
            {
              break;
            }
            v105 = ++v51;
            if ( v51 >= 62 )
              goto LABEL_98;
          }
          if ( v51 < 62 )
          {
            v56 = Str1;
            do
            {
              v57 = v11[v51];
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
            v105 = v51;
          }
        }
        Str1[v52] = 0;
        if ( v52 > 0 )
        {
          v58 = 2570LL * v49;
          v59 = 0;
          v107 = 10280 * v50;
          v60 = *((_DWORD *)&unk_18F7184CC + 2570 * v50);
          if ( v60 > 0 )
          {
            v61 = &dword_18F7184E4[v58];
            v62 = (char *)&unk_18F7184D4 + v58 * 4;
            do
            {
              if ( *v61 == (_DWORD)v106 && !strcmp(v62, Str1) )
                v3 = v59;
              ++v59;
              v62 += 24;
              v61 += 6;
            }
            while ( v59 < v60 );
            if ( v3 != -1 )
            {
              LODWORD(v106) = (_DWORD)v108;
              if ( (unsigned int)sub_1400375E0(v1, &v104, (int *)&v106, (__int64)v11, &v105) == 1 )
              {
                v63 = v104;
                LODWORD(v20) = sub_140037580(v1, v104);
                v64 = (int)v20;
                if ( (_DWORD)v20 == -1 )
                  return v20;
                v65 = v106;
                if ( (unsigned int)sub_14004C9B0(v20, v106, (__int64)Str1) == -1 )
                {
                  if ( *((int *)&unk_18F7174C4 + 2570 * v64) < 400 && *((int *)&unk_18F7184CC + 2570 * v64) >= 3 )
                  {
                    v66 = (110 * v1 + SLODWORD(qword_19025F428[v2 / 8])) << 6;
                    *(_OWORD *)&byte_19025F434[v66] = xmmword_1400F5800;
                    *(_QWORD *)&byte_19025F434[v66 + 16] = 0x4543415053204BLL;
                    goto LABEL_178;
                  }
                  *(_DWORD *)((char *)&unk_1902605D8 + v2) = 0;
                  *(_DWORD *)((char *)&unk_1902605DC + v2) = 256;
                  *(_DWORD *)((char *)&unk_190260614 + v2) = 0;
                  *(_DWORD *)((char *)&unk_1902605E0 + v2) = v63;
                  *(_DWORD *)((char *)&unk_1902605E4 + v2) = v65;
                  v67 = Str1;
                  do
                  {
                    v68 = *v67;
                    byte_1902605F0[v2 - (_QWORD)Str1 + (_QWORD)v67] = *v67;
                    ++v67;
                  }
                  while ( v68 );
                  v69 = SLODWORD(qword_19025F428[v2 / 8]);
                  *(_DWORD *)&byte_1902605F0[v2 + 32] = *(_DWORD *)((char *)&unk_18F7184D0 + 24 * v3 + v107);
                  byte_19025F434[64 * (110 * v1 + v69)] = 0;
                  LODWORD(v20) = sub_140039C60(dword_191536DD4, v1, 1.0, 1.0);
                  return v20;
                }
                v70 = (110 * v1 + SLODWORD(qword_19025F428[v2 / 8])) << 6;
                *(_OWORD *)&byte_19025F434[v70] = xmmword_1400F5818;
                *(_DWORD *)&byte_19025F434[v70 + 16] = 5461075;
              }
              else
              {
                v71 = (110 * v1 + SLODWORD(qword_19025F428[v2 / 8])) << 6;
                *(_OWORD *)&byte_19025F434[v71] = xmmword_1400F5830;
                *(_OWORD *)&byte_19025F434[v71 + 16] = xmmword_1400F5840;
                *(_QWORD *)&byte_19025F434[v71 + 32] = 0x4549464943455053LL;
                *(_WORD *)&byte_19025F434[v71 + 40] = 68;
              }
LABEL_178:
              LODWORD(v20) = sub_14006D120(v1);
              return v20;
            }
          }
        }
      }
LABEL_98:
      v54 = v1;
    }
    v55 = (110 * v54 + SLODWORD(qword_19025F428[v2 / 8])) << 6;
    *(_OWORD *)&byte_19025F434[v55] = xmmword_1400F5860;
    *(_OWORD *)&byte_19025F434[v55 + 16] = xmmword_1400F5870;
    *(_QWORD *)&byte_19025F434[v55 + 32] = 0x4549464943455053LL;
    *(_WORD *)&byte_19025F434[v55 + 40] = 68;
    goto LABEL_178;
  }
  v104 = v5;
  LODWORD(v20) = sub_1400375E0(v1, &v104, (int *)&v106, (__int64)v11, &v105);
  if ( (_DWORD)v20 != 1 )
  {
    v33 = (110 * v1 + SLODWORD(qword_19025F428[v2 / 8])) << 6;
    *(_OWORD *)&byte_19025F434[v33] = xmmword_1400F57D0;
    *(_WORD *)&byte_19025F434[v33 + 16] = 89;
    goto LABEL_178;
  }
  v24 = v104;
  v25 = v106;
  if ( v104 == 2 )
  {
    LODWORD(v20) = *(_DWORD *)((char *)&unk_19025F3F4 + v2);
  }
  else
  {
    if ( v104 || dword_19025F0F4[v2 / 4] <= 0 )
      return v20;
    LODWORD(v20) = *((_DWORD *)&unk_19025F3F4 + 1760 * dword_19025F0F8[v2 / 4]);
  }
  if ( (_DWORD)v20 != -1 )
  {
    if ( (_DWORD)v106 )
    {
      v26 = 1;
      v27 = 1;
      *(_DWORD *)Str1 = v106;
      do
      {
        v25 = dword_18F7174D8[2570 * (int)v20 + 4 * v25];
        if ( !v25 )
          break;
        *(_DWORD *)&Str1[4 * v27] = v25;
        ++v26;
        ++v27;
      }
      while ( v27 < 8 );
      LODWORD(v20) = 9 * v24;
      v28 = v26;
      v29 = v2 + 72 * v24;
      *(_QWORD *)((char *)&unk_1902604BC + v29) = 0;
      if ( v26 >= 1LL )
      {
        v30 = 18 * v24;
        v31 = &v110[4 * v26];
        do
        {
          v32 = *(int *)((char *)&unk_1902604BC + v29);
          v31 -= 4;
          *(_DWORD *)((char *)&unk_1902604BC + v29) = v32 + 1;
          LODWORD(v20) = *((_DWORD *)v31 + 1);
          dword_1902604C4[v7 + v30 + v32] = v20;
          --v28;
        }
        while ( v28 );
      }
    }
    else
    {
      v20 = v2 + 72LL * v104;
      *(_QWORD *)((char *)&unk_1902604BC + v20) = 0;
    }
  }
  return v20;
}

