/* Address: 0x1400e54d0 | Name: sub_1400E54D0 | Size: 2523 bytes */
__int64 __fastcall sub_1400E54D0(_QWORD *a1, int *a2, _DWORD *a3, int *a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rsi
  int v8; // eax
  int *v9; // rcx
  __int64 v10; // rbx
  void **v11; // rsi
  void *v12; // rcx
  void *v13; // rcx
  int v14; // eax
  int v15; // r13d
  int v16; // edx
  __int64 v17; // r15
  __int64 v18; // rbp
  unsigned int *v19; // rbx
  int *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // kr00_8
  unsigned int v23; // r9d
  int v24; // eax
  int v25; // r8d
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 (__fastcall *v28)(); // rax
  int v29; // r8d
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rax
  int *v33; // rcx
  __int64 v34; // r12
  unsigned int v35; // edx
  __int64 v36; // r13
  __int64 v37; // rbp
  __int64 v38; // r15
  __int64 v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // r14
  _BYTE *v42; // rbx
  _QWORD *v43; // rbp
  __int64 v44; // rsi
  int *v45; // rdi
  int v46; // r15d
  int v47; // r13d
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rbx
  void **v51; // rsi
  void *v52; // rcx
  void *v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rdx
  char v58; // al
  int v59; // eax
  __int64 v60; // r9
  int v61; // r8d
  int v62; // ecx
  int v63; // edx
  void (__fastcall *v64)(_BYTE *, __int64, __int64, __int64, int, int); // r10
  __int64 v65; // r8
  int v66; // edx
  __int64 v67; // rdx
  char v68; // cl
  int v69; // eax
  __int64 v70; // r9
  __int16 v71; // r8
  __int16 v72; // cx
  __int16 v73; // ax
  __int16 v74; // r8
  __int16 v75; // cx
  __int16 v76; // ax
  int v77; // eax
  __int64 v78; // r10
  int v79; // ecx
  int v80; // edx
  int v81; // r8d
  int v82; // r9d
  __int64 v83; // r8
  int v84; // edx
  int v85; // eax
  int v86; // eax
  __int64 v87; // rdx
  char v88; // cl
  __int64 v89; // rdi
  void **v90; // rbx
  void *v91; // rcx
  void *v92; // rcx
  __int64 v94; // rbx
  void **v95; // rsi
  void *v96; // rcx
  void *v97; // rcx
  __int64 v98; // [rsp+0h] [rbp-1A8h] BYREF
  int v99; // [rsp+20h] [rbp-188h]
  int v100; // [rsp+28h] [rbp-180h]
  int v101; // [rsp+30h] [rbp-178h]
  unsigned int v102; // [rsp+34h] [rbp-174h]
  __int64 v103; // [rsp+38h] [rbp-170h]
  __int64 v104; // [rsp+40h] [rbp-168h]
  _QWORD *v105; // [rsp+48h] [rbp-160h]
  int *v106; // [rsp+50h] [rbp-158h]
  _DWORD *v107; // [rsp+58h] [rbp-150h]
  int *v108; // [rsp+60h] [rbp-148h]
  __int128 v109; // [rsp+68h] [rbp-140h]
  __int128 v110; // [rsp+78h] [rbp-130h]
  char v111; // [rsp+A8h] [rbp-100h] BYREF
  char v112; // [rsp+B4h] [rbp-F4h] BYREF
  __int64 v113; // [rsp+150h] [rbp-58h]

  LODWORD(v5) = a5;
  v6 = *a1;
  v7 = a1;
  v108 = a4;
  v107 = a3;
  v106 = a2;
  *(_DWORD *)(v6 + 8) = 0;
  v105 = a1;
  v101 = a5;
  if ( a5 > 4 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad req_comp";
    return MEMORY[0x1401F8B20]((unsigned __int64)&v98 ^ v113);
  }
  v8 = sub_14015FAD0();
  v9 = (int *)*v7;
  if ( !v8 )
  {
    v10 = v9[2];
    if ( v10 > 0 )
    {
      v11 = (void **)(v7 + 2267);
      do
      {
        if ( *v11 )
        {
          free(*v11);
          *v11 = nullptr;
          *(v11 - 1) = nullptr;
        }
        v12 = v11[1];
        if ( v12 )
        {
          free(v12);
          v11[1] = nullptr;
          v11[3] = nullptr;
        }
        v13 = v11[2];
        if ( v13 )
        {
          free(v13);
          v11[2] = nullptr;
        }
        v11 += 12;
        --v10;
      }
      while ( v10 );
    }
    return MEMORY[0x1401F8B20]((unsigned __int64)&v98 ^ v113);
  }
  v14 = v9[2];
  v15 = 1;
  if ( !a5 )
  {
    LODWORD(v5) = 1;
    if ( v14 >= 3 )
      LODWORD(v5) = 3;
    v101 = v5;
  }
  if ( v14 == 3 && (*((_DWORD *)v7 + 4628) == 3 || !*((_DWORD *)v7 + 4627) && !*((_DWORD *)v7 + 4626)) )
  {
    v16 = 1;
    v103 = 1;
LABEL_23:
    if ( (int)v5 < 3 && !v16 )
      v14 = 1;
    goto LABEL_26;
  }
  v103 = 0;
  v16 = 0;
  if ( v14 == 3 )
    goto LABEL_23;
LABEL_26:
  v17 = v14;
  v104 = v14;
  v109 = 0;
  v110 = 0;
  if ( v14 <= 0 )
    goto LABEL_42;
  v18 = 0;
  v19 = (unsigned int *)&v111;
  v20 = (int *)v7 + 4521;
  do
  {
    v21 = j__malloc_base((unsigned int)(*(_DWORD *)*v7 + 3));
    *(_QWORD *)(v20 + 17) = v21;
    if ( !v21 )
    {
      v50 = *(int *)(*v7 + 8LL);
      if ( v50 > 0 )
      {
        v51 = (void **)(v7 + 2267);
        do
        {
          if ( *v51 )
          {
            free(*v51);
            *v51 = nullptr;
            *(v51 - 1) = nullptr;
          }
          v52 = v51[1];
          if ( v52 )
          {
            free(v52);
            v51[1] = nullptr;
            v51[3] = nullptr;
          }
          v53 = v51[2];
          if ( v53 )
          {
            free(v53);
            v51[2] = nullptr;
          }
          v51 += 12;
          --v50;
        }
        while ( v50 );
      }
      goto LABEL_144;
    }
    v22 = *((int *)v7 + 4514);
    v19[4] = 0;
    v23 = v22 / *v20;
    *v19 = v23;
    v24 = *((_DWORD *)v7 + 4515) / v20[1];
    v19[1] = v24;
    v25 = v24;
    v19[3] = v24 >> 1;
    v26 = *(_QWORD *)(v20 + 11);
    v27 = v23 + *(_DWORD *)*v7 - 1;
    *((_QWORD *)v19 - 1) = v26;
    *((_QWORD *)v19 - 2) = v26;
    v19[2] = v27 / v23;
    if ( v23 == 1 )
    {
      if ( v25 == 1 )
      {
        v28 = sub_140127900;
        goto LABEL_40;
      }
      if ( v25 == 2 )
      {
        v28 = sub_14016DD80;
        goto LABEL_40;
      }
    }
    else if ( v23 == 2 )
    {
      if ( v25 == 1 )
      {
        v28 = sub_14016D9D0;
        goto LABEL_40;
      }
      if ( v25 == 2 )
      {
        v28 = (__int64 (__fastcall *)())v7[2320];
        goto LABEL_40;
      }
    }
    v28 = (__int64 (__fastcall *)())sub_14016D990;
LABEL_40:
    *((_QWORD *)v19 - 3) = v28;
    ++v18;
    v19 += 12;
    v20 += 24;
  }
  while ( v18 < v17 );
  v9 = (int *)*v7;
LABEL_42:
  v29 = v9[1];
  v30 = *v9;
  if ( (int)v5 < 0
    || v30 < 0
    || v30 && (int)v5 > 0x7FFFFFFF / v30
    || (int)v5 * v30 < 0
    || v29 < 0
    || v29 && (int)v5 * v30 > 0x7FFFFFFF / v29
    || (v31 = v5 * v29 * v30, v31 == 0x7FFFFFFF) )
  {
    v33 = (int *)*v7;
LABEL_135:
    v94 = v33[2];
    if ( v94 > 0 )
    {
      v95 = (void **)(v7 + 2267);
      do
      {
        if ( *v95 )
        {
          free(*v95);
          *v95 = nullptr;
          *(v95 - 1) = nullptr;
        }
        v96 = v95[1];
        if ( v96 )
        {
          free(v96);
          v95[1] = nullptr;
          v95[3] = nullptr;
        }
        v97 = v95[2];
        if ( v97 )
        {
          free(v97);
          v95[2] = nullptr;
        }
        v95 += 12;
        --v94;
      }
      while ( v94 );
    }
LABEL_144:
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "outofmem";
    return MEMORY[0x1401F8B20]((unsigned __int64)&v98 ^ v113);
  }
  v32 = j__malloc_base(v31 + 1);
  v33 = (int *)*v7;
  v34 = v32;
  if ( !v32 )
    goto LABEL_135;
  v35 = 0;
  v102 = 0;
  if ( !v33[1] )
    goto LABEL_119;
  v36 = *((_QWORD *)&v110 + 1);
  v37 = v110;
  v38 = *((_QWORD *)&v109 + 1);
  v39 = v109;
  while ( 2 )
  {
    v40 = (unsigned int)v5 * v35 * *v33;
    v41 = 0;
    v42 = (_BYTE *)(v34 + v40);
    if ( v104 > 0 )
    {
      v43 = v7 + 2264;
      v44 = v104;
      v45 = (int *)&v112;
      do
      {
        v46 = *(v45 - 2);
        v47 = *v45;
        if ( *v45 < v46 >> 1 )
        {
          v48 = *(_QWORD *)(v45 - 7);
          v49 = *(_QWORD *)(v45 - 5);
        }
        else
        {
          v48 = *(_QWORD *)(v45 - 5);
          v49 = *(_QWORD *)(v45 - 7);
        }
        *((_QWORD *)&v109 + v41) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _DWORD))(v45 - 9))(
                                     v43[5],
                                     v48,
                                     v49,
                                     (unsigned int)*(v45 - 1),
                                     *(v45 - 3));
        *v45 = v47 + 1;
        if ( v47 + 1 >= v46 )
        {
          v54 = ++v45[1];
          v55 = *(_QWORD *)(v45 - 5);
          *v45 = 0;
          *(_QWORD *)(v45 - 7) = v55;
          if ( v54 < *(_DWORD *)v43 )
            *(_QWORD *)(v45 - 5) = v55 + *((int *)v43 + 1);
        }
        ++v41;
        v45 += 12;
        v43 += 12;
      }
      while ( v41 < v44 );
      v7 = v105;
      v36 = *((_QWORD *)&v110 + 1);
      v37 = v110;
      v38 = *((_QWORD *)&v109 + 1);
      v33 = (int *)*v105;
      v39 = v109;
    }
    v5 = v101;
    if ( v101 < 3 )
    {
      if ( v103 )
      {
        v69 = *v33;
        v70 = 0;
        if ( v101 == 1 )
        {
          if ( v69 )
          {
            do
            {
              ++v42;
              v71 = 150 * *(unsigned __int8 *)(v70 + v38);
              v72 = 29 * *(unsigned __int8 *)(v70 + v37);
              v73 = *(unsigned __int8 *)(v70 + v39);
              v70 = (unsigned int)(v70 + 1);
              *(v42 - 1) = (unsigned __int16)(77 * v73 + v72 + v71) >> 8;
              v33 = (int *)*v7;
            }
            while ( (unsigned int)v70 < *(_DWORD *)*v7 );
          }
        }
        else if ( v69 )
        {
          do
          {
            v42 += 2;
            v74 = 150 * *(unsigned __int8 *)(v70 + v38);
            v75 = 29 * *(unsigned __int8 *)(v70 + v37);
            v76 = *(unsigned __int8 *)(v70 + v39);
            v70 = (unsigned int)(v70 + 1);
            *(v42 - 1) = -1;
            *(v42 - 2) = (unsigned __int16)(77 * v76 + v75 + v74) >> 8;
            v33 = (int *)*v7;
          }
          while ( (unsigned int)v70 < *(_DWORD *)*v7 );
        }
        goto LABEL_117;
      }
      if ( v33[2] != 4 )
        goto LABEL_111;
      v77 = *((_DWORD *)v7 + 4627);
      if ( !v77 )
      {
        v78 = 0;
        if ( *v33 )
        {
          do
          {
            v79 = *(unsigned __int8 *)(v78 + v36);
            v80 = *(unsigned __int8 *)(v78 + v38);
            v81 = *(unsigned __int8 *)(v78 + v37);
            v82 = *(unsigned __int8 *)(v78 + v39);
            v78 = (unsigned int)(v78 + 1);
            v42[1] = -1;
            *v42 = (unsigned __int16)(77
                                    * (unsigned __int8)((unsigned __int16)(v79 * v82
                                                                         + 128
                                                                         + ((unsigned int)(v79 * v82 + 128) >> 8)) >> 8)
                                    + 29
                                    * (unsigned __int8)((unsigned __int16)(v79 * v81
                                                                         + 128
                                                                         + ((unsigned int)(v79 * v81 + 128) >> 8)) >> 8)
                                    + 150
                                    * (unsigned __int8)((unsigned __int16)(v79 * v80
                                                                         + 128
                                                                         + ((unsigned int)(v79 * v80 + 128) >> 8)) >> 8)) >> 8;
            v42 += v5;
            v33 = (int *)*v7;
          }
          while ( (unsigned int)v78 < *(_DWORD *)*v7 );
        }
        goto LABEL_117;
      }
      if ( v77 == 2 )
      {
        v83 = 0;
        if ( *v33 )
        {
          do
          {
            v84 = (unsigned __int8)~*(_BYTE *)(v83 + v39);
            v85 = *(unsigned __int8 *)(v83 + v36);
            v83 = (unsigned int)(v83 + 1);
            v42[1] = -1;
            *v42 = (unsigned __int16)(v85 * v84 + 128 + ((unsigned int)(v85 * v84 + 128) >> 8)) >> 8;
            v42 += v5;
            v33 = (int *)*v7;
          }
          while ( (unsigned int)v83 < *(_DWORD *)*v7 );
        }
      }
      else
      {
LABEL_111:
        v86 = *v33;
        v87 = 0;
        if ( v101 == 1 )
        {
          if ( v86 )
          {
            do
            {
              v42[v87] = *(_BYTE *)(v87 + v39);
              v87 = (unsigned int)(v87 + 1);
              v33 = (int *)*v7;
            }
            while ( (unsigned int)v87 < *(_DWORD *)*v7 );
          }
        }
        else if ( v86 )
        {
          do
          {
            v88 = *(_BYTE *)(v87 + v39);
            v87 = (unsigned int)(v87 + 1);
            *v42 = v88;
            v42[1] = -1;
            v42 += 2;
            v33 = (int *)*v7;
          }
          while ( (unsigned int)v87 < *(_DWORD *)*v7 );
        }
      }
    }
    else
    {
      v56 = v33[2];
      if ( v56 == 3 )
      {
        if ( !v103 )
        {
          ((void (__fastcall *)(_BYTE *, __int64, __int64, __int64, int, int))v7[2319])(v42, v39, v38, v37, *v33, v101);
          v33 = (int *)*v7;
          goto LABEL_117;
        }
        v57 = 0;
        if ( *v33 )
        {
          do
          {
            *v42 = *(_BYTE *)(v57 + v39);
            v42[1] = *(_BYTE *)(v57 + v38);
            v58 = *(_BYTE *)(v57 + v37);
            v57 = (unsigned int)(v57 + 1);
            v42[2] = v58;
            v42[3] = -1;
            v42 += v5;
          }
          while ( (unsigned int)v57 < *(_DWORD *)*v7 );
          v33 = (int *)*v7;
          goto LABEL_117;
        }
LABEL_93:
        v33 = (int *)*v7;
        goto LABEL_117;
      }
      if ( v56 != 4 )
      {
        v67 = 0;
        if ( *v33 )
        {
          do
          {
            v68 = *(_BYTE *)(v67 + v39);
            v67 = (unsigned int)(v67 + 1);
            v42[2] = v68;
            v42[1] = v68;
            *v42 = v68;
            v42[3] = -1;
            v42 += v5;
          }
          while ( (unsigned int)v67 < *(_DWORD *)*v7 );
        }
        goto LABEL_93;
      }
      v59 = *((_DWORD *)v7 + 4627);
      if ( v59 )
      {
        v63 = *v33;
        v64 = (void (__fastcall *)(_BYTE *, __int64, __int64, __int64, int, int))v7[2319];
        v100 = v101;
        v99 = v63;
        if ( v59 != 2 )
        {
          v64(v42, v39, v38, v37, v99, v100);
          v33 = (int *)*v7;
          goto LABEL_117;
        }
        v64(v42, v39, v38, v37, v99, v100);
        v65 = 0;
        if ( !*(_DWORD *)*v7 )
          goto LABEL_93;
        do
        {
          v66 = *(unsigned __int8 *)(v65 + v36);
          v65 = (unsigned int)(v65 + 1);
          *v42 = (unsigned __int16)(v66 * (unsigned __int8)~*v42
                                  + 128
                                  + ((v66 * (unsigned int)(unsigned __int8)~*v42 + 128) >> 8)) >> 8;
          v42[1] = (unsigned __int16)(v66 * (unsigned __int8)~v42[1]
                                    + 128
                                    + ((v66 * (unsigned int)(unsigned __int8)~v42[1] + 128) >> 8)) >> 8;
          v42[2] = (unsigned __int16)(v66 * (unsigned __int8)~v42[2]
                                    + 128
                                    + ((v66 * (unsigned int)(unsigned __int8)~v42[2] + 128) >> 8)) >> 8;
          v42 += v5;
        }
        while ( (unsigned int)v65 < *(_DWORD *)*v7 );
        v33 = (int *)*v7;
      }
      else
      {
        v60 = 0;
        if ( !*v33 )
          goto LABEL_93;
        do
        {
          v61 = *(unsigned __int8 *)(v60 + v36);
          *v42 = (unsigned __int16)(v61 * *(unsigned __int8 *)(v60 + v39)
                                  + 128
                                  + ((v61 * (unsigned int)*(unsigned __int8 *)(v60 + v39) + 128) >> 8)) >> 8;
          v42[1] = (unsigned __int16)(v61 * *(unsigned __int8 *)(v60 + v38)
                                    + 128
                                    + ((v61 * (unsigned int)*(unsigned __int8 *)(v60 + v38) + 128) >> 8)) >> 8;
          v62 = *(unsigned __int8 *)(v60 + v37);
          v60 = (unsigned int)(v60 + 1);
          v42[3] = -1;
          v42[2] = (unsigned __int16)(v61 * v62 + 128 + ((unsigned int)(v61 * v62 + 128) >> 8)) >> 8;
          v42 += v5;
        }
        while ( (unsigned int)v60 < *(_DWORD *)*v7 );
        v33 = (int *)*v7;
      }
    }
LABEL_117:
    v35 = v102 + 1;
    v102 = v35;
    if ( v35 < v33[1] )
      continue;
    break;
  }
  v15 = 1;
LABEL_119:
  v89 = v33[2];
  if ( v89 > 0 )
  {
    v90 = (void **)(v7 + 2267);
    do
    {
      if ( *v90 )
      {
        free(*v90);
        *v90 = nullptr;
        *(v90 - 1) = nullptr;
      }
      v91 = v90[1];
      if ( v91 )
      {
        free(v91);
        v90[1] = nullptr;
        v90[3] = nullptr;
      }
      v92 = v90[2];
      if ( v92 )
      {
        free(v92);
        v90[2] = nullptr;
      }
      v90 += 12;
      --v89;
    }
    while ( v89 );
    v33 = (int *)*v7;
  }
  *v106 = *v33;
  *v107 = *(_DWORD *)(*v7 + 4LL);
  if ( v108 )
  {
    if ( *(int *)(*v7 + 8LL) >= 3 )
      v15 = 3;
    *v108 = v15;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v98 ^ v113);
}

