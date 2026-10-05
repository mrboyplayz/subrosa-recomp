/* Address: 0x14016cb70 | Name: sub_14016CB70 | Size: 3114 bytes */
char *__fastcall sub_14016CB70(__int64 a1, int *a2, int *a3, _DWORD *a4, int a5, _DWORD *a6, int a7)
{
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v12; // rdx
  char **v13; // r14
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // r15d
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // r12d
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rdx
  int v31; // esi
  int v32; // ecx
  int v33; // ebp
  int v34; // ecx
  __int64 v35; // rax
  _DWORD *v36; // rdx
  char *v37; // r13
  __int64 v38; // rax
  __int64 v39; // rax
  const char *v40; // rdx
  __int64 v41; // rsi
  signed int v42; // ebx
  char *v43; // rdx
  char v44; // cl
  __int64 v45; // rax
  signed int v46; // ecx
  int v47; // r15d
  __int64 v48; // rax
  _BYTE *v49; // r12
  __int16 v50; // dx
  __int16 *v51; // rax
  __int64 v52; // rcx
  char v53; // dl
  char *v54; // rax
  __int64 v55; // rcx
  _WORD *v56; // rbx
  __int64 v57; // rsi
  _BYTE *v58; // rbx
  __int64 v59; // rsi
  __int64 v60; // rsi
  char *v61; // rax
  char v62; // cl
  unsigned __int16 *v63; // rcx
  unsigned __int64 v64; // r8
  int v65; // r9d
  float v66; // xmm2_4
  float v67; // xmm1_4
  int v68; // r9d
  float v69; // xmm2_4
  float v70; // xmm1_4
  int v71; // r9d
  float v72; // xmm2_4
  float v73; // xmm1_4
  int v74; // r9d
  float v75; // xmm2_4
  float v76; // xmm1_4
  char *v77; // rcx
  __int64 v78; // rdx
  int v79; // r8d
  float v80; // xmm2_4
  float v81; // xmm1_4
  unsigned __int8 *v82; // rcx
  unsigned __int64 v83; // r8
  int v84; // r9d
  float v85; // xmm2_4
  float v86; // xmm1_4
  int v87; // r9d
  float v88; // xmm2_4
  float v89; // xmm1_4
  int v90; // r9d
  float v91; // xmm2_4
  float v92; // xmm1_4
  int v93; // r9d
  float v94; // xmm2_4
  float v95; // xmm1_4
  char *v96; // rcx
  __int64 v97; // rdx
  int v98; // r8d
  float v99; // xmm2_4
  float v100; // xmm1_4
  char *v101; // rax
  unsigned int v102; // [rsp+30h] [rbp-58h]
  int v103; // [rsp+34h] [rbp-54h]
  int v104; // [rsp+38h] [rbp-50h]
  __int64 v105; // [rsp+40h] [rbp-48h]
  char *v106; // [rsp+48h] [rbp-40h]

  v8 = sub_1401604F0(a1, (__int64)a2);
  if ( (v8 << 16) + (unsigned int)sub_1401604F0(a1, v9) != 943870035 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "not PSD";
    return nullptr;
  }
  if ( (unsigned int)sub_1401604F0(a1, v10) != 1 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "wrong version";
    return nullptr;
  }
  v13 = (char **)(a1 + 192);
  if ( *(_QWORD *)(a1 + 16) && (v14 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v13, v14 < 6) )
  {
    *v13 = *(char **)(a1 + 200);
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v14));
  }
  else
  {
    *v13 += 6;
  }
  v102 = sub_1401604F0(a1, v12);
  v16 = v102;
  if ( v102 > 0x10 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "wrong channel count";
    return nullptr;
  }
  v103 = sub_140160670(a1, v15);
  v18 = sub_140160670(a1, v17);
  v104 = v18;
  v20 = v18;
  if ( v103 > 0x1000000 || v18 > 0x1000000 )
    goto LABEL_12;
  v21 = sub_1401604F0(a1, v19);
  v23 = v21;
  if ( ((v21 - 8) & 0xFFFFFFF7) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "unsupported bit depth";
    return nullptr;
  }
  if ( (unsigned int)sub_1401604F0(a1, v22) != 3 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "wrong color format";
    return nullptr;
  }
  v25 = sub_140160670(a1, v24);
  sub_14016E0F0(a1, v25);
  v27 = sub_140160670(a1, v26);
  sub_14016E0F0(a1, v27);
  v29 = sub_140160670(a1, v28);
  sub_14016E0F0(a1, v29);
  v31 = sub_1401604F0(a1, v30);
  if ( v31 > 1 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad compression";
    return nullptr;
  }
  if ( v20 < 0 )
    goto LABEL_12;
  if ( v20 )
  {
    if ( 0x7FFFFFFF / v20 < 4 )
      goto LABEL_12;
    v32 = 4 * v20;
    if ( (v20 & 0x20000000) != 0 )
      goto LABEL_12;
  }
  else
  {
    v32 = 0;
  }
  if ( v103 < 0 || v103 && v32 > 0x7FFFFFFF / v103 )
  {
LABEL_12:
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "too large";
    return nullptr;
  }
  v33 = v103 * v20;
  if ( v31 || (_DWORD)v23 != 16 || a7 != 16 )
  {
    v38 = j__malloc_base(4 * v33);
    v36 = a6;
    v37 = (char *)v38;
    v106 = (char *)v38;
    goto LABEL_39;
  }
  if ( v20 )
  {
    if ( 0x7FFFFFFF / v20 < 8 )
      goto LABEL_37;
    v34 = 8 * v20;
    if ( (v20 & 0x10000000) != 0 )
      goto LABEL_37;
  }
  else
  {
    v34 = 0;
  }
  if ( v103 && v34 > 0x7FFFFFFF / v103 )
  {
LABEL_37:
    v36 = a6;
    v37 = nullptr;
    v106 = nullptr;
    *a6 = 16;
    goto LABEL_39;
  }
  v35 = j__malloc_base(8 * v33);
  v36 = a6;
  v37 = (char *)v35;
  v106 = (char *)v35;
  *a6 = 16;
LABEL_39:
  if ( !v37 )
  {
    v39 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v40 = "outofmem";
    goto LABEL_41;
  }
  if ( v31 )
  {
    sub_14016E0F0(a1, 2 * v102 * v103);
    v41 = 0;
    v42 = 0;
    while ( 1 )
    {
      v43 = &v37[v42];
      if ( v42 < (int)v102 )
      {
        if ( !(unsigned int)sub_14016C720(a1, v43, v33) )
        {
          free(v37);
          v39 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
          v40 = "corrupt";
LABEL_41:
          *(_QWORD *)(v39 + 16) = v40;
          return nullptr;
        }
      }
      else if ( v33 > 0 )
      {
        v44 = 0;
        v45 = (unsigned int)v33;
        if ( v42 == 3 )
          v44 = -1;
        do
        {
          *v43 = v44;
          v43 += 4;
          --v45;
        }
        while ( v45 );
      }
      if ( ++v42 >= 4 )
        goto LABEL_94;
    }
  }
  v46 = v102;
  v41 = 0;
  v47 = 0;
  v105 = v23;
  v48 = v23;
  v49 = v37;
  do
  {
    if ( v47 < v46 )
    {
      if ( *v36 == 16 )
      {
        v56 = v37;
        if ( v33 <= 0 )
          goto LABEL_92;
        v57 = (unsigned int)v33;
        do
        {
          *v56 = sub_1401604F0(a1, (__int64)v36);
          v56 += 4;
          --v57;
        }
        while ( v57 );
      }
      else
      {
        v58 = v49;
        if ( v48 == 16 )
        {
          if ( v33 <= 0 )
            goto LABEL_92;
          v59 = (unsigned int)v33;
          do
          {
            *v58 = (unsigned __int16)sub_1401604F0(a1, (__int64)v36) >> 8;
            v58 += 4;
            --v59;
          }
          while ( v59 );
        }
        else
        {
          if ( v33 <= 0 )
            goto LABEL_92;
          v60 = (unsigned int)v33;
          do
          {
            v61 = *v13;
            if ( (unsigned __int64)*v13 >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                sub_14016D910(a1, v36);
                v62 = *(*v13)++;
              }
              else
              {
                v62 = 0;
              }
            }
            else
            {
              v62 = *v61;
              *v13 = v61 + 1;
            }
            *v58 = v62;
            v58 += 4;
            --v60;
          }
          while ( v60 );
        }
      }
      v41 = 0;
    }
    else if ( v48 == 16 && a7 == 16 )
    {
      v50 = 0;
      v51 = (__int16 *)v37;
      if ( v47 == 3 )
        v50 = -1;
      if ( v33 <= 0 )
        goto LABEL_91;
      v52 = (unsigned int)v33;
      do
      {
        *v51 = v50;
        v51 += 4;
        --v52;
      }
      while ( v52 );
    }
    else
    {
      v53 = 0;
      v54 = v49;
      if ( v47 == 3 )
        v53 = -1;
      if ( v33 <= 0 )
        goto LABEL_91;
      v55 = (unsigned int)v33;
      do
      {
        *v54 = v53;
        v54 += 4;
        --v55;
      }
      while ( v55 );
    }
    v46 = v102;
LABEL_91:
    v48 = v105;
    v36 = a6;
LABEL_92:
    ++v47;
    v37 += 2;
    ++v49;
  }
  while ( v47 < 4 );
  v16 = v102;
  v37 = v106;
  v20 = v104;
LABEL_94:
  if ( v16 >= 4 )
  {
    if ( *a6 == 16 )
    {
      if ( v33 >= 4LL )
      {
        v63 = (unsigned __int16 *)(v37 + 10);
        v64 = ((unsigned __int64)(v33 - 4LL) >> 2) + 1;
        v41 = 4 * v64;
        do
        {
          v65 = *(v63 - 2);
          if ( (unsigned __int16)(v65 - 1) <= 0xFFFDu )
          {
            v66 = 65535.0 / (float)v65;
            v67 = (float)(1.0 - v66) * 65535.0;
            *(v63 - 5) = (int)(float)((float)((float)*(v63 - 5) * v66) + v67);
            *(v63 - 4) = (int)(float)((float)((float)*(v63 - 4) * v66) + v67);
            *(v63 - 3) = (int)(float)((float)((float)*(v63 - 3) * v66) + v67);
          }
          v68 = v63[2];
          if ( (unsigned __int16)(v68 - 1) <= 0xFFFDu )
          {
            v69 = 65535.0 / (float)v68;
            v70 = (float)(1.0 - v69) * 65535.0;
            *(v63 - 1) = (int)(float)((float)((float)*(v63 - 1) * v69) + v70);
            *v63 = (int)(float)((float)((float)*v63 * v69) + v70);
            v63[1] = (int)(float)((float)((float)v63[1] * v69) + v70);
          }
          v71 = v63[6];
          if ( (unsigned __int16)(v71 - 1) <= 0xFFFDu )
          {
            v72 = 65535.0 / (float)v71;
            v73 = (float)(1.0 - v72) * 65535.0;
            v63[3] = (int)(float)((float)((float)v63[3] * v72) + v73);
            v63[4] = (int)(float)((float)((float)v63[4] * v72) + v73);
            v63[5] = (int)(float)((float)((float)v63[5] * v72) + v73);
          }
          v74 = v63[10];
          if ( (unsigned __int16)(v74 - 1) <= 0xFFFDu )
          {
            v75 = 65535.0 / (float)v74;
            v76 = (float)(1.0 - v75) * 65535.0;
            v63[7] = (int)(float)((float)((float)v63[7] * v75) + v76);
            v63[8] = (int)(float)((float)((float)v63[8] * v75) + v76);
            v63[9] = (int)(float)((float)((float)v63[9] * v75) + v76);
          }
          v63 += 16;
          --v64;
        }
        while ( v64 );
      }
      if ( v41 < v33 )
      {
        v77 = &v37[8 * v41 + 2];
        v78 = v33 - v41;
        do
        {
          v79 = *((unsigned __int16 *)v77 + 2);
          if ( (unsigned __int16)(v79 - 1) <= 0xFFFDu )
          {
            v80 = 65535.0 / (float)v79;
            v81 = (float)(1.0 - v80) * 65535.0;
            *((_WORD *)v77 - 1) = (int)(float)((float)((float)*((unsigned __int16 *)v77 - 1) * v80) + v81);
            *(_WORD *)v77 = (int)(float)((float)((float)*(unsigned __int16 *)v77 * v80) + v81);
            *((_WORD *)v77 + 1) = (int)(float)((float)((float)*((unsigned __int16 *)v77 + 1) * v80) + v81);
          }
          v77 += 8;
          --v78;
        }
        while ( v78 );
      }
    }
    else
    {
      if ( v33 >= 4LL )
      {
        v82 = (unsigned __int8 *)(v37 + 5);
        v83 = ((unsigned __int64)(v33 - 4LL) >> 2) + 1;
        v41 = 4 * v83;
        do
        {
          v84 = *(v82 - 2);
          if ( (unsigned __int8)(v84 - 1) <= 0xFDu )
          {
            v85 = 254.99998 / (float)v84;
            v86 = (float)(1.0 - v85) * 255.0;
            *(v82 - 5) = (int)(float)((float)((float)*(v82 - 5) * v85) + v86);
            *(v82 - 4) = (int)(float)((float)((float)*(v82 - 4) * v85) + v86);
            *(v82 - 3) = (int)(float)((float)((float)*(v82 - 3) * v85) + v86);
          }
          v87 = v82[2];
          if ( (unsigned __int8)(v87 - 1) <= 0xFDu )
          {
            v88 = 254.99998 / (float)v87;
            v89 = (float)(1.0 - v88) * 255.0;
            *(v82 - 1) = (int)(float)((float)((float)*(v82 - 1) * v88) + v89);
            *v82 = (int)(float)((float)((float)*v82 * v88) + v89);
            v82[1] = (int)(float)((float)((float)v82[1] * v88) + v89);
          }
          v90 = v82[6];
          if ( (unsigned __int8)(v90 - 1) <= 0xFDu )
          {
            v91 = 254.99998 / (float)v90;
            v92 = (float)(1.0 - v91) * 255.0;
            v82[3] = (int)(float)((float)((float)v82[3] * v91) + v92);
            v82[4] = (int)(float)((float)((float)v82[4] * v91) + v92);
            v82[5] = (int)(float)((float)((float)v82[5] * v91) + v92);
          }
          v93 = v82[10];
          if ( (unsigned __int8)(v93 - 1) <= 0xFDu )
          {
            v94 = 254.99998 / (float)v93;
            v95 = (float)(1.0 - v94) * 255.0;
            v82[7] = (int)(float)((float)((float)v82[7] * v94) + v95);
            v82[8] = (int)(float)((float)((float)v82[8] * v94) + v95);
            v82[9] = (int)(float)((float)((float)v82[9] * v94) + v95);
          }
          v82 += 16;
          --v83;
        }
        while ( v83 );
      }
      if ( v41 < v33 )
      {
        v96 = &v37[4 * v41 + 1];
        v97 = v33 - v41;
        do
        {
          v98 = (unsigned __int8)v96[2];
          if ( (unsigned __int8)(v98 - 1) <= 0xFDu )
          {
            v99 = 254.99998 / (float)v98;
            v100 = (float)(1.0 - v99) * 255.0;
            *(v96 - 1) = (int)(float)((float)((float)(unsigned __int8)*(v96 - 1) * v99) + v100);
            *v96 = (int)(float)((float)((float)(unsigned __int8)*v96 * v99) + v100);
            v96[1] = (int)(float)((float)((float)(unsigned __int8)v96[1] * v99) + v100);
          }
          v96 += 4;
          --v97;
        }
        while ( v97 );
      }
    }
  }
  if ( (a5 & 0xFFFFFFFB) != 0 )
  {
    v101 = *a6 == 16 ? sub_14015DD00(v37, 4, a5, v20, v103) : sub_14015D7E0(v37, 4, a5, v20, v103);
    v37 = v101;
    if ( !v101 )
      return nullptr;
  }
  if ( a4 )
    *a4 = 4;
  *a3 = v103;
  *a2 = v20;
  return v37;
}

