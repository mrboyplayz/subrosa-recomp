/* Address: 0x140167d10 | Name: sub_140167D10 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_140167D10(__int64 a1, int a2, int a3)
{
  _DWORD *v4; // rbx
  unsigned int v5; // r14d
  int v6; // r13d
  unsigned int v8; // r15d
  int v9; // esi
  unsigned int v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int v14; // edx
  __int64 v15; // rax
  char *v16; // rdx
  unsigned int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rax
  int v20; // edi
  int v21; // edi
  unsigned int v22; // ecx
  unsigned __int8 *v23; // rax
  unsigned __int8 v24; // cl
  unsigned __int8 *v25; // rax
  unsigned int v26; // eax
  int v27; // ecx
  char *v28; // rax
  unsigned __int8 v29; // cl
  unsigned __int8 *v30; // rax
  unsigned int v31; // edi
  char v32; // si
  char v33; // cl
  char v34; // cl
  unsigned __int8 v35; // cl
  unsigned __int8 *v36; // rax
  unsigned int v37; // r9d
  unsigned int v38; // eax
  unsigned int v39; // r8d
  int v40; // ecx
  unsigned int v41; // esi
  __int64 v42; // rcx
  unsigned int v43; // edi
  char *v44; // rax
  char v45; // dl
  char *v46; // rax
  __int64 v47; // rax
  int v48; // ecx
  int v49; // esi
  _WORD *v50; // rdi
  __int16 *v51; // rdi
  unsigned int v52; // esi
  char *v53; // r8
  unsigned __int64 v54; // rdx
  char v55; // cl
  char *v56; // rax
  int v57; // edi
  int v58; // r9d
  char v59; // r9
  char *v60; // rax
  char v61; // dl
  char *v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rsi
  char *v65; // rax
  void *v66; // rax
  unsigned int v67; // edi
  int v68; // ecx
  unsigned __int8 v69; // r14
  int v70; // r9d
  char v71; // r15
  int v72; // eax
  int v73; // eax
  _WORD *v74; // rdi
  unsigned int v75; // esi
  __int16 v76; // dx
  _WORD *v77; // rax
  __int16 v78; // r8
  __int16 v79; // r9
  __int64 v80; // rcx
  unsigned __int16 v81; // dx
  __int64 v82; // rcx
  bool v83; // zf
  __int16 v84; // ax
  char v85; // dl
  _BYTE *v86; // rax
  char v87; // r8
  char v88; // r9
  __int64 v89; // rcx
  unsigned __int8 v90; // dl
  __int64 v91; // rcx
  char v92; // al
  _BYTE *v93; // rdi
  __int64 v94; // rsi
  int v95; // ecx
  __int64 v96; // rdx
  char v97; // cl
  unsigned __int8 *v98; // rdi
  unsigned int v99; // eax
  int v100; // ecx
  int v101; // r11d
  unsigned int v102; // r10d
  unsigned int v103; // eax
  __int64 v104; // rdx
  char v105; // cl
  int v106; // eax
  int v107; // esi
  unsigned __int8 *v108; // rdi
  int v109; // r14d
  __int64 v110; // rax
  __int64 v111; // r15
  __int64 v112; // r9
  __int64 v113; // r8
  __int64 v114; // rdx
  __int64 v115; // rdx
  unsigned __int64 v116; // rax
  __int64 v118; // [rsp-20h] [rbp-1590h] BYREF
  unsigned __int8 i; // [rsp+20h] [rbp-1550h]
  char v120; // [rsp+21h] [rbp-154Fh]
  __int16 v121; // [rsp+24h] [rbp-154Ch] BYREF
  char v122; // [rsp+26h] [rbp-154Ah]
  int v123; // [rsp+28h] [rbp-1548h]
  int v124; // [rsp+2Ch] [rbp-1544h]
  signed int v125; // [rsp+30h] [rbp-1540h]
  int v126; // [rsp+34h] [rbp-153Ch]
  int v127; // [rsp+38h] [rbp-1538h]
  int v128; // [rsp+3Ch] [rbp-1534h]
  int v129; // [rsp+40h] [rbp-1530h]
  unsigned int v130; // [rsp+48h] [rbp-1528h]
  int v131; // [rsp+4Ch] [rbp-1524h]
  _QWORD v132[644]; // [rsp+50h] [rbp-1520h] BYREF
  char *v133; // [rsp+14F8h] [rbp-78h]
  void *v134; // [rsp+1500h] [rbp-70h]
  char *v135; // [rsp+1508h] [rbp-68h]
  int v136; // [rsp+1510h] [rbp-60h]
  _WORD v137[520]; // [rsp+24E0h] [rbp+F70h] BYREF
  __int64 v138; // [rsp+28F0h] [rbp+1380h]

  v129 = a3;
  v124 = a2;
  v125 = 0;
  v127 = 0;
  v4 = *(_DWORD **)a1;
  v5 = 0;
  v6 = 0;
  v128 = 0;
  v126 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v120 = 0;
  v8 = 0;
  i = 0;
  v121 = 0;
  v122 = 0;
  v123 = 1;
  if ( !(unsigned int)sub_14015CE80((__int64)v4) || a2 == 1 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v118 ^ v138);
  while ( 1 )
  {
    v9 = sub_1401604F0((__int64)v4);
    v10 = sub_1401604F0((__int64)v4) + (v9 << 16);
    v130 = v10;
    v11 = sub_1401604F0((__int64)v4);
    v12 = sub_1401604F0((__int64)v4);
    v13 = v11 << 16;
    v14 = v13 + v12;
    v131 = v13 + v12;
    if ( (unsigned int)(v13 + v12) <= 0x49484452 )
      break;
    if ( v131 == 1347179589 )
    {
      if ( v123 )
        goto LABEL_9;
      if ( v10 > 0x300 || (v8 = v10 / 3, 3 * (v10 / 3) != v10) )
      {
        v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
        v16 = "invalid PLTE";
        goto LABEL_234;
      }
      v52 = 0;
      if ( !v8 )
        goto LABEL_128;
      v53 = *((char **)v4 + 24);
      while ( 2 )
      {
        v54 = *((_QWORD *)v4 + 25);
        if ( (unsigned __int64)v53 < v54 )
        {
          v55 = *v53++;
          goto LABEL_116;
        }
        if ( v4[12] )
        {
          sub_14016D910((__int64)v4);
          v56 = *((char **)v4 + 24);
          v54 = *((_QWORD *)v4 + 25);
          v55 = *v56;
          v53 = v56 + 1;
LABEL_116:
          *((_QWORD *)v4 + 24) = v53;
          v57 = 4 * v52;
          LOBYTE(v137[2 * v52 + 8]) = v55;
          v58 = 4 * v52;
          if ( (unsigned __int64)v53 < v54 )
          {
            v59 = *v53++;
            goto LABEL_121;
          }
        }
        else
        {
          v57 = 4 * v52;
          LOBYTE(v137[2 * v52 + 8]) = 0;
          v58 = 4 * v52;
        }
        if ( v4[12] )
        {
          sub_14016D910((__int64)v4);
          v60 = *((char **)v4 + 24);
          v54 = *((_QWORD *)v4 + 25);
          v59 = *v60;
          v53 = v60 + 1;
LABEL_121:
          *((_QWORD *)v4 + 24) = v53;
          *((_BYTE *)&v137[8] + (unsigned int)(v57 + 1)) = v59;
          if ( (unsigned __int64)v53 < v54 )
          {
            v61 = *v53++;
            *((_QWORD *)v4 + 24) = v53;
            goto LABEL_127;
          }
        }
        else
        {
          *((_BYTE *)&v137[8] + (unsigned int)(v58 + 1)) = 0;
        }
        if ( v4[12] )
        {
          sub_14016D910((__int64)v4);
          v62 = *((char **)v4 + 24);
          v61 = *v62;
          v53 = v62 + 1;
          *((_QWORD *)v4 + 24) = v62 + 1;
        }
        else
        {
          v61 = 0;
        }
LABEL_127:
        ++v52;
        *((_BYTE *)&v137[8] + (unsigned int)(v57 + 2)) = v61;
        *((_BYTE *)&v137[8] + (unsigned int)(v57 + 3)) = -1;
        if ( v52 >= v8 )
          goto LABEL_128;
        continue;
      }
    }
    if ( v131 != 1951551059 )
      goto LABEL_73;
    if ( v123 )
      goto LABEL_9;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v16 = "tRNS after IDAT";
      goto LABEL_234;
    }
    if ( i )
    {
      if ( v124 == 2 )
      {
        v4[2] = 4;
        return MEMORY[0x1401F8B20]((unsigned __int64)&v118 ^ v138);
      }
      if ( !v8 )
      {
        v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
        v16 = "tRNS before PLTE";
        goto LABEL_234;
      }
      if ( v10 > v8 )
        goto LABEL_227;
      v43 = 0;
      for ( i = 4; v43 < v10; *((_BYTE *)&v137[8] + v47) = v45 )
      {
        v44 = *((char **)v4 + 24);
        if ( (unsigned __int64)v44 >= *((_QWORD *)v4 + 25) )
        {
          if ( v4[12] )
          {
            sub_14016D910((__int64)v4);
            v46 = *((char **)v4 + 24);
            v45 = *v46;
            *((_QWORD *)v4 + 24) = v46 + 1;
          }
          else
          {
            v45 = 0;
          }
        }
        else
        {
          v45 = *v44;
          *((_QWORD *)v4 + 24) = v44 + 1;
        }
        v47 = 4 * v43++ + 3;
      }
    }
    else
    {
      v48 = v4[2];
      if ( (v48 & 1) == 0 )
      {
        v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
        v16 = "tRNS with alpha";
LABEL_234:
        *(_QWORD *)(v15 + 16) = v16;
        return MEMORY[0x1401F8B20]((unsigned __int64)&v118 ^ v138);
      }
      if ( v10 != 2 * v48 )
      {
LABEL_227:
        v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
        v16 = "bad tRNS len";
        goto LABEL_234;
      }
      v49 = 0;
      v120 = 1;
      if ( *(_DWORD *)(a1 + 32) == 16 )
      {
        if ( v48 > 0 )
        {
          v50 = v137;
          do
          {
            ++v49;
            *v50++ = sub_1401604F0((__int64)v4);
          }
          while ( v49 < v4[2] );
        }
      }
      else if ( v48 > 0 )
      {
        v51 = &v121;
        do
        {
          v51 = (__int16 *)((char *)v51 + 1);
          ++v49;
          *((_BYTE *)v51 - 1) = byte_14026E768[*(int *)(a1 + 32)] * sub_1401604F0((__int64)v4);
        }
        while ( v49 < v4[2] );
        v6 = v127;
      }
    }
LABEL_128:
    sub_1401604F0((__int64)v4);
    sub_1401604F0((__int64)v4);
  }
  if ( v13 + v12 == 1229472850 )
  {
    if ( !v123 )
    {
      v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v16 = "multiple IHDR";
      goto LABEL_234;
    }
    v123 = 0;
    if ( v10 != 13 )
    {
      v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v16 = "bad IHDR len";
      goto LABEL_234;
    }
    v20 = sub_1401604F0((__int64)v4);
    *v4 = (v20 << 16) + sub_1401604F0((__int64)v4);
    v21 = sub_1401604F0((__int64)v4);
    v22 = sub_1401604F0((__int64)v4) + (v21 << 16);
    v4[1] = v22;
    if ( v22 > 0x1000000 || *v4 > 0x1000000u )
    {
LABEL_70:
      v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v16 = "too large";
      goto LABEL_234;
    }
    v23 = *((unsigned __int8 **)v4 + 24);
    if ( (unsigned __int64)v23 >= *((_QWORD *)v4 + 25) )
    {
      if ( v4[12] )
      {
        sub_14016D910((__int64)v4);
        v25 = *((unsigned __int8 **)v4 + 24);
        v24 = *v25;
        *((_QWORD *)v4 + 24) = v25 + 1;
      }
      else
      {
        v24 = 0;
      }
    }
    else
    {
      v24 = *v23;
      *((_QWORD *)v4 + 24) = v23 + 1;
    }
    v26 = v24;
    *(_DWORD *)(a1 + 32) = v24;
    if ( v24 != 1 )
    {
      if ( v24 > 0x10u || (v27 = 65812, !_bittest(&v27, v26)) )
      {
        v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
        v16 = "1/2/4/8/16-bit only";
        goto LABEL_234;
      }
    }
    v28 = *((char **)v4 + 24);
    if ( (unsigned __int64)v28 >= *((_QWORD *)v4 + 25) )
    {
      if ( v4[12] )
      {
        sub_14016D910((__int64)v4);
        v30 = *((unsigned __int8 **)v4 + 24);
        v29 = *v30;
        v28 = (char *)(v30 + 1);
        *((_QWORD *)v4 + 24) = v28;
      }
      else
      {
        v29 = 0;
      }
    }
    else
    {
      v29 = *v28++;
      *((_QWORD *)v4 + 24) = v28;
    }
    v31 = v29;
    v128 = v29;
    if ( v29 > 6u )
    {
LABEL_219:
      v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v16 = "bad ctype";
      goto LABEL_234;
    }
    if ( v29 == 3 )
    {
      if ( *(_DWORD *)(a1 + 32) == 16 )
        goto LABEL_219;
      v32 = 3;
      i = 3;
    }
    else
    {
      if ( (v29 & 1) != 0 )
        goto LABEL_219;
      v32 = i;
    }
    if ( (unsigned __int64)v28 >= *((_QWORD *)v4 + 25) )
    {
      if ( !v4[12] )
        goto LABEL_53;
      sub_14016D910((__int64)v4);
      v28 = *((char **)v4 + 24);
    }
    v33 = *v28++;
    *((_QWORD *)v4 + 24) = v28;
    if ( v33 )
    {
      v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v16 = "bad comp method";
      goto LABEL_234;
    }
LABEL_53:
    if ( (unsigned __int64)v28 >= *((_QWORD *)v4 + 25) )
    {
      if ( !v4[12] )
      {
LABEL_57:
        if ( (unsigned __int64)v28 >= *((_QWORD *)v4 + 25) )
        {
          if ( v4[12] )
          {
            sub_14016D910((__int64)v4);
            v36 = *((unsigned __int8 **)v4 + 24);
            v35 = *v36;
            *((_QWORD *)v4 + 24) = v36 + 1;
          }
          else
          {
            v35 = 0;
          }
        }
        else
        {
          v35 = *v28;
          *((_QWORD *)v4 + 24) = v28 + 1;
        }
        v6 = v35;
        v127 = v35;
        if ( v35 > 1u )
        {
          v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
          v16 = "bad interlace method";
          goto LABEL_234;
        }
        if ( !*v4 || (v37 = v4[1]) == 0 )
        {
          v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
          v16 = "0-pixel image";
          goto LABEL_234;
        }
        v38 = 0x40000000u / *v4;
        if ( v32 )
        {
          v4[2] = 1;
          if ( v38 >> 2 < v37 )
            goto LABEL_70;
        }
        else
        {
          v39 = (v31 & 2 | 1) + ((v31 >> 2) & 1);
          v4[2] = v39;
          if ( v38 / v39 < v37 )
            goto LABEL_70;
          if ( v124 == 2 )
            return MEMORY[0x1401F8B20]((unsigned __int64)&v118 ^ v138);
        }
        goto LABEL_128;
      }
      sub_14016D910((__int64)v4);
      v28 = *((char **)v4 + 24);
    }
    v34 = *v28++;
    *((_QWORD *)v4 + 24) = v28;
    if ( v34 )
    {
      v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v16 = "bad filter method";
      goto LABEL_234;
    }
    goto LABEL_57;
  }
  if ( v131 == 1130840649 )
  {
    v126 = 1;
LABEL_75:
    if ( v10 )
    {
      if ( (v10 & 0x80000000) == 0 )
      {
        if ( *((_QWORD *)v4 + 2) && (v40 = v4[50] - v4[48], v40 < (int)v10) )
        {
          v41 = v10 - v40;
          v42 = *((_QWORD *)v4 + 5);
          *((_QWORD *)v4 + 24) = *((_QWORD *)v4 + 25);
          (*((void (__fastcall **)(__int64, _QWORD))v4 + 3))(v42, v41);
        }
        else
        {
          *((_QWORD *)v4 + 24) += (int)v10;
        }
      }
      else
      {
        *((_QWORD *)v4 + 24) = *((_QWORD *)v4 + 25);
      }
    }
    goto LABEL_128;
  }
  if ( v131 == 1229209940 )
  {
    if ( v123 )
      goto LABEL_9;
    if ( i && !v8 )
    {
      v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v16 = "no PLTE";
      goto LABEL_234;
    }
    if ( v124 == 2 )
    {
      v4[2] = i;
      return MEMORY[0x1401F8B20]((unsigned __int64)&v118 ^ v138);
    }
    v17 = v125;
    v18 = v10 + v125;
    if ( (int)(v10 + v125) < v125 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v118 ^ v138);
    if ( v18 > v5 )
    {
      if ( !v5 )
      {
        v5 = 4096;
        if ( v10 > 0x1000 )
          v5 = v10;
      }
      for ( ; v18 > v5; v5 *= 2 )
        ;
      v19 = j__realloc_base(*(_QWORD *)(a1 + 8), v5);
      if ( !v19 )
        goto LABEL_210;
      *(_QWORD *)(a1 + 8) = v19;
      v17 = v125;
    }
    if ( !sub_140160860((__int64)v4, (__m128i *)(*(_QWORD *)(a1 + 8) + v17), v10) )
    {
      v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v16 = "outofdata";
      goto LABEL_234;
    }
    v125 = v18;
    goto LABEL_128;
  }
  if ( v131 != 1229278788 )
  {
LABEL_73:
    if ( v123 )
      goto LABEL_9;
    if ( (v14 & 0x20000000) == 0 )
    {
      byte_140301850 = (unsigned int)(v13 + v12) >> 24;
      byte_140301851 = (unsigned int)(v13 + v12) >> 16;
      byte_140301853 = v131;
      v116 = __readgsqword(0x58u);
      byte_140301852 = BYTE1(v14);
      v15 = *(_QWORD *)(v116 + 8LL * dword_140404A6C[19064470]);
      v16 = &byte_140301850;
      goto LABEL_234;
    }
    goto LABEL_75;
  }
  if ( v123 )
  {
LABEL_9:
    v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v16 = "first not IHDR";
    goto LABEL_234;
  }
  if ( !v124 )
  {
    v63 = *(_QWORD *)(a1 + 8);
    if ( !v63 )
    {
      v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v16 = "no IDAT";
      goto LABEL_234;
    }
    v64 = (int)(v4[1] * (v4[2] * ((unsigned int)(*(_DWORD *)(a1 + 32) * *v4 + 7) >> 3) + 1));
    v65 = (char *)j__malloc_base(v64);
    if ( v65 )
    {
      v134 = v65;
      v132[1] = v63 + v125;
      v133 = v65;
      v132[0] = v63;
      v135 = &v65[v64];
      v136 = 1;
      if ( (unsigned int)sub_140168E00((__int64)v132, v126 == 0) )
      {
        v66 = v134;
        v67 = (_DWORD)v133 - (_DWORD)v134;
        *(_QWORD *)(a1 + 16) = v134;
        if ( v66 )
        {
          free(*(void **)(a1 + 8));
          v68 = v129;
          v69 = i;
          *(_QWORD *)(a1 + 8) = 0;
          v70 = v4[2] + 1;
          if ( v68 != v70 || v68 == 3 || v69 )
          {
            v71 = v120;
            if ( !v120 )
              v70 = v4[2];
          }
          else
          {
            v71 = v120;
          }
          v72 = v128;
          v4[3] = v70;
          if ( (unsigned int)sub_14015E260(a1, *(unsigned __int8 **)(a1 + 16), v67, v70, *(_DWORD *)(a1 + 32), v72, v6) )
          {
            if ( v71 )
            {
              v73 = v4[3];
              v74 = *(_WORD **)(a1 + 24);
              v75 = **(_DWORD **)a1 * *(_DWORD *)(*(_QWORD *)a1 + 4LL);
              if ( *(_DWORD *)(a1 + 32) == 16 )
              {
                if ( v73 == 2 )
                {
                  if ( v75 )
                  {
                    v81 = v137[0];
                    v82 = v75;
                    do
                    {
                      v83 = *v74 == v81;
                      v74 += 2;
                      v84 = -1;
                      if ( v83 )
                        v84 = 0;
                      *(v74 - 1) = v84;
                      --v82;
                    }
                    while ( v82 );
                  }
                }
                else
                {
                  if ( v73 != 4 )
                    sub_14023E640(
                      (char *)L"out_n == 2 || out_n == 4",
                      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                      4828);
                  if ( v75 )
                  {
                    v76 = v137[2];
                    v77 = v74 + 2;
                    v78 = v137[1];
                    v79 = v137[0];
                    v80 = v75;
                    do
                    {
                      if ( *(v77 - 2) == v79 && *(v77 - 1) == v78 && *v77 == v76 )
                        v77[1] = 0;
                      v77 += 4;
                      --v80;
                    }
                    while ( v80 );
                    v69 = i;
                  }
                }
              }
              else if ( v73 == 2 )
              {
                if ( v75 )
                {
                  v90 = v121;
                  v91 = v75;
                  do
                  {
                    v83 = *(_BYTE *)v74++ == v90;
                    v92 = -1;
                    if ( v83 )
                      v92 = 0;
                    *((_BYTE *)v74 - 1) = v92;
                    --v91;
                  }
                  while ( v91 );
                }
              }
              else
              {
                if ( v73 != 4 )
                  sub_14023E640(
                    (char *)L"out_n == 2 || out_n == 4",
                    (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                    4803);
                if ( v75 )
                {
                  v85 = v122;
                  v86 = v74 + 1;
                  v87 = HIBYTE(v121);
                  v88 = v121;
                  v89 = v75;
                  do
                  {
                    if ( *(v86 - 2) == v88 && *(v86 - 1) == v87 && *v86 == v85 )
                      v86[1] = 0;
                    v86 += 4;
                    --v89;
                  }
                  while ( v89 );
                }
              }
            }
            if ( v126 && dword_140404A6C[18215124] && (int)v4[3] > 2 )
            {
              v93 = *(_BYTE **)(a1 + 24);
              v94 = (unsigned int)(**(_DWORD **)a1 * *(_DWORD *)(*(_QWORD *)a1 + 4LL));
              v95 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
              if ( v95 == 3 )
              {
                if ( (_DWORD)v94 )
                {
                  v96 = (unsigned int)v94;
                  do
                  {
                    v97 = *v93;
                    *v93 = v93[2];
                    v93[2] = v97;
                    v93 += 3;
                    --v96;
                  }
                  while ( v96 );
                }
              }
              else
              {
                if ( v95 != 4 )
                  sub_14023E640(
                    (char *)L"s->img_out_n == 4",
                    (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                    4909);
                if ( (_DWORD)v94 )
                {
                  if ( dword_140404A6C[18215123] )
                  {
                    v98 = v93 + 1;
                    do
                    {
                      v99 = v98[2];
                      v100 = *(v98 - 1);
                      v101 = v98[1];
                      if ( (_BYTE)v99 )
                      {
                        *v98 = ((v99 >> 1) + 255 * *v98) / v99;
                        v102 = ((v99 >> 1) + 255 * v100) / v99;
                        v103 = ((v99 >> 1) + 255 * v101) / v99;
                      }
                      else
                      {
                        LOBYTE(v102) = *(v98 - 1);
                        LOBYTE(v103) = v98[1];
                      }
                      *(v98 - 1) = v103;
                      v98[1] = v102;
                      v98 += 4;
                      --v94;
                    }
                    while ( v94 );
                  }
                  else
                  {
                    v104 = (unsigned int)v94;
                    do
                    {
                      v105 = *v93;
                      *v93 = v93[2];
                      v93[2] = v105;
                      v93 += 4;
                      --v104;
                    }
                    while ( v104 );
                  }
                }
              }
            }
            if ( v69 )
            {
              v106 = v129;
              v107 = v69;
              v4[2] = v69;
              v4[3] = v69;
              if ( v106 >= 3 )
              {
                v4[3] = v106;
                v107 = v106;
              }
              v108 = *(unsigned __int8 **)(a1 + 24);
              v109 = **(_DWORD **)a1 * *(_DWORD *)(*(_QWORD *)a1 + 4LL);
              if ( v109 < 0 || v109 > 0x7FFFFFFF / v107 || (v110 = j__malloc_base(v109 * v107), (v111 = v110) == 0) )
              {
LABEL_210:
                v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
                v16 = "outofmem";
                goto LABEL_234;
              }
              if ( v109 )
              {
                v112 = (unsigned int)v109;
                v113 = v110 + 2;
                if ( v107 == 3 )
                {
                  do
                  {
                    v114 = *v108;
                    v113 += 3;
                    ++v108;
                    *(_BYTE *)(v113 - 5) = v137[2 * v114 + 8];
                    *(_BYTE *)(v113 - 4) = HIBYTE(v137[2 * v114 + 8]);
                    *(_BYTE *)(v113 - 3) = v137[2 * v114 + 9];
                    --v112;
                  }
                  while ( v112 );
                }
                else
                {
                  do
                  {
                    v115 = *v108;
                    v113 += 4;
                    ++v108;
                    *(_BYTE *)(v113 - 6) = v137[2 * v115 + 8];
                    *(_BYTE *)(v113 - 5) = HIBYTE(v137[2 * v115 + 8]);
                    *(_BYTE *)(v113 - 4) = v137[2 * v115 + 9];
                    *(_BYTE *)(v113 - 3) = HIBYTE(v137[2 * v115 + 9]);
                    --v112;
                  }
                  while ( v112 );
                }
              }
              free(*(void **)(a1 + 24));
              *(_QWORD *)(a1 + 24) = v111;
            }
            else if ( v71 )
            {
              ++v4[2];
            }
            free(*(void **)(a1 + 16));
            *(_QWORD *)(a1 + 16) = 0;
            sub_140160670((__int64)v4);
          }
        }
      }
      else
      {
        free(v134);
        *(_QWORD *)(a1 + 16) = 0;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v118 ^ v138);
}

