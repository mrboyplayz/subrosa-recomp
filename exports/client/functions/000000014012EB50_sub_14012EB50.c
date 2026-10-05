/* Address: 0x14012eb50 | Name: sub_14012EB50 | Size: 3391 bytes */
__int64 __fastcall sub_14012EB50(unsigned int a1)
{
  unsigned int v1; // r14d
  unsigned int v2; // r12d
  __int64 v3; // r8
  signed int v4; // edx
  int v5; // eax
  int v6; // r9d
  signed int v7; // r11d
  signed int v8; // esi
  signed int v9; // r15d
  signed int v10; // r13d
  signed int v11; // ecx
  int v12; // edx
  signed int v13; // eax
  int v14; // ecx
  signed int v15; // edx
  int v16; // eax
  signed int v17; // ecx
  int v18; // edx
  signed int v19; // eax
  int v20; // ecx
  signed int v21; // edx
  bool v22; // cc
  signed int v23; // r8d
  int v24; // edx
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // edi
  int v35; // eax
  BOOL v36; // ecx
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rdi
  int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 v43; // rcx
  int *v44; // rsi
  int v45; // eax
  int v46; // r10d
  char *v47; // rcx
  char *v48; // rcx
  int v49; // r9d
  char *v50; // rcx
  char *v51; // rcx
  int v52; // ebx
  char *v53; // rcx
  int v54; // ebx
  char *v55; // rcx
  __int64 v56; // rdx
  char v57; // al
  char *v58; // rcx
  __int64 v59; // rdx
  char v60; // al
  unsigned int v61; // r13d
  unsigned int *v62; // rax
  signed int v63; // edi
  signed int v64; // esi
  __int64 v65; // rcx
  char *v66; // rdx
  char v67; // al
  signed int v68; // r14d
  __int64 v69; // r8
  unsigned int v70; // r15d
  __int64 v71; // rsi
  char *v72; // rcx
  __int64 v73; // rcx
  unsigned int v74; // r8d
  unsigned int v75; // edx
  char *v76; // rcx
  char *v77; // rcx
  __int64 v78; // rdx
  char v79; // al
  __int64 v80; // rcx
  unsigned int v81; // r8d
  unsigned int v82; // edx
  char *v83; // rcx
  char *v84; // rcx
  __int64 v85; // rdx
  char v86; // al
  const char *v87; // rdx
  char *v88; // rdx
  char *v89; // r8
  char v90; // al
  __int64 v91; // r14
  unsigned int v92; // xmm1_4
  int v93; // eax
  __int64 v94; // r15
  signed int v95; // edx
  unsigned int *v96; // rcx
  __int64 v97; // rbx
  __int64 v98; // r9
  __int64 v99; // rax
  char *v100; // r8
  unsigned int *v101; // rdx
  char v102; // al
  char *v103; // rcx
  __int64 v104; // rdx
  char v105; // al
  __int64 v107; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v108; // [rsp+30h] [rbp-D0h]
  signed int v109; // [rsp+34h] [rbp-CCh]
  signed int v110; // [rsp+38h] [rbp-C8h]
  unsigned int v111[4]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v112[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v113; // [rsp+70h] [rbp-90h]
  _DWORD v114[255]; // [rsp+90h] [rbp-70h] BYREF
  char v115; // [rsp+48Fh] [rbp+38Fh] BYREF
  char v116[511]; // [rsp+490h] [rbp+390h] BYREF
  char v117; // [rsp+68Fh] [rbp+58Fh] BYREF
  _BYTE v118[512]; // [rsp+690h] [rbp+590h] BYREF
  char v119[512]; // [rsp+890h] [rbp+790h] BYREF
  __int64 v120; // [rsp+A90h] [rbp+990h]

  v1 = dword_140404A6C[180070377];
  v2 = dword_140404A6C[180105030];
  v3 = 539LL * (int)a1;
  v4 = 256;
  v108 = a1;
  v5 = dword_140404A6C[180001071];
  v6 = dword_140404A6C[v3 + 180001075];
  v7 = dword_140404A6C[v3 + 180035728];
  v8 = dword_140404A6C[v3 + 180070381];
  if ( v6 < 256 )
    v4 = dword_140404A6C[v3 + 180001075];
  v9 = dword_140404A6C[v3 + 180105034];
  v10 = dword_140404A6C[v3 + 180139687];
  if ( (int)dword_140404A6C[180001071] >= 256 )
    v5 = 256;
  v11 = dword_140404A6C[v3 + 180035728];
  if ( v4 <= v7 )
    v11 = v4;
  v12 = dword_140404A6C[180035724];
  if ( v5 <= (int)dword_140404A6C[180035724] )
    v12 = v5;
  v13 = dword_140404A6C[v3 + 180070381];
  if ( v11 <= v8 )
    v13 = v11;
  v14 = dword_140404A6C[180070377];
  if ( v12 <= (int)dword_140404A6C[180070377] )
    v14 = v12;
  v15 = dword_140404A6C[v3 + 180105034];
  if ( v13 <= v9 )
    v15 = v13;
  v16 = dword_140404A6C[180105030];
  if ( v14 <= (int)dword_140404A6C[180105030] )
    v16 = v14;
  v17 = dword_140404A6C[v3 + 180139687];
  if ( v15 <= v10 )
    v17 = v15;
  v18 = dword_140404A6C[180139683];
  if ( v16 <= (int)dword_140404A6C[180139683] )
    v18 = v16;
  v19 = dword_140404A6C[v3 + 180174340];
  v109 = v19;
  if ( v17 <= v19 )
    v19 = v17;
  v20 = dword_140404A6C[180174336];
  if ( v18 <= (int)dword_140404A6C[180174336] )
    v20 = v18;
  v21 = dword_140404A6C[v3 + 180208993];
  v22 = v19 <= v21;
  v23 = v21;
  v110 = v21;
  v24 = dword_140404A6C[180208989];
  if ( v22 )
    v23 = v19;
  if ( v20 <= (int)dword_140404A6C[180208989] )
    v24 = v20;
  if ( v24 <= 0 )
  {
    v25 = 0;
    if ( v6 == v23 && dword_140404A6C[180001071] == v24 )
    {
      v114[0] = 0;
      v25 = 1;
    }
    if ( v7 == v23 && dword_140404A6C[180035724] == v24 )
    {
      v26 = v25++;
      v114[v26] = 1;
    }
    if ( v8 == v23 && v1 == v24 )
    {
      v27 = v25++;
      v114[v27] = 2;
    }
    if ( v9 == v23 )
    {
      v28 = v2 == v24;
      v29 = 3;
      if ( v28 )
      {
        v30 = v25++;
        v114[v30] = 3;
      }
    }
    else
    {
      v29 = 3;
    }
    if ( v10 == v23 && dword_140404A6C[180139683] == v24 )
    {
      v31 = v25++;
      v114[v31] = 4;
    }
    if ( v109 == v23 && dword_140404A6C[180174336] == v24 )
    {
      v32 = v25++;
      v114[v32] = 5;
    }
    if ( v110 == v23 && dword_140404A6C[180208989] == v24 )
    {
      v33 = v25++;
      v114[v33] = 6;
    }
    if ( v25 )
    {
      v34 = 0;
      do
      {
        v35 = rand();
        v36 = 1;
        v37 = (int)v114[v35 % (int)v25];
        if ( (int)dword_140404A6C[283831506] > 0 )
          v36 = (int)dword_140404A6C[34653 * v37 + 180001074] <= 0;
        if ( (int)dword_140404A6C[283837379] > 0 && (int)dword_140404A6C[34653 * v37 + 180001613] > 0 )
          v36 = 0;
        if ( (int)dword_140404A6C[283843252] > 0 && (int)dword_140404A6C[34653 * v37 + 180002152] > 0 )
          v36 = 0;
        if ( (int)dword_140404A6C[283849125] > 0 && (int)dword_140404A6C[34653 * v37 + 180002691] > 0 )
          v36 = 0;
        if ( (int)dword_140404A6C[283854998] > 0 && (int)dword_140404A6C[34653 * v37 + 180003230] > 0 )
          v36 = 0;
        if ( (int)dword_140404A6C[283860871] > 0 && (int)dword_140404A6C[34653 * v37 + 180003769] > 0 )
          v36 = 0;
        ++v34;
      }
      while ( v34 < 100 && v36 );
      LODWORD(v112[0]) = 0;
      v38 = 64;
      *(_QWORD *)((char *)v112 + 4) = 0x200000001LL;
      do
      {
        v39 = rand() % 3;
        v40 = *((_DWORD *)v112 + v39);
        v41 = rand() % 3;
        *((_DWORD *)v112 + v39) = *((_DWORD *)v112 + v41);
        *((_DWORD *)v112 + v41) = v40;
        --v38;
      }
      while ( v38 );
      v42 = 34653 * v37;
      v43 = (int)v108;
      v118[0] = 0;
      v44 = (int *)v112;
      ++dword_140404A6C[34653 * v37 + 180001075 + 539 * (int)v108];
      dword_140404A6C[5 * v43 + 188872240] = 11;
      do
      {
        v45 = *v44;
        if ( *v44 )
        {
          if ( v45 == 1 )
          {
            v116[0] = 0;
            v49 = rand() % 3;
            if ( v49 )
            {
              if ( v49 == 1 )
              {
                sub_140158AB0(v114, "there are new developments in the %s project. ", &dword_140404A6C[v42 + 180035705]);
              }
              else if ( v49 == 2 )
              {
                sub_140158AB0(
                  v114,
                  "the %s project will revolutionize the industry. ",
                  &dword_140404A6C[v42 + 180035705]);
              }
            }
            else
            {
              sub_140158AB0(v114, "project %s has made progress in many areas. ", &dword_140404A6C[v42 + 180035705]);
            }
            v50 = &v115;
            do
              v28 = *++v50 == 0;
            while ( !v28 );
            strcpy(v50, (const char *)v114);
            v51 = &v117;
            do
              v28 = *++v51 == 0;
            while ( !v28 );
            strcpy(v51, v116);
          }
          else if ( v45 == 2 )
          {
            v116[0] = 0;
            if ( (_DWORD)v37 == dword_140404A6C[180001067] )
            {
              v54 = rand() % 2;
              sub_140158AB0(v114, "this project is extremely high value. ");
              if ( v54 == 1 )
                sub_140158AB0(v114, "this is a high priority project. ");
              v55 = &v115;
              do
                v28 = *++v55 == 0;
              while ( !v28 );
              v56 = 0;
              do
              {
                v57 = *((_BYTE *)v114 + v56);
                v55[v56++] = v57;
              }
              while ( v57 );
            }
            else
            {
              v52 = rand() % 4;
              sub_140158AB0(v114, "we are now adding coversheets to tps reports. ");
              switch ( v52 )
              {
                case 1:
                  sub_140158AB0(v114, "the company picnic is next saturday. ");
                  break;
                case 2:
                  sub_140158AB0(v114, "next friday is hawaiian shirt day. ");
                  break;
                case 3:
                  sub_140158AB0(v114, "we need to create more synergy. ");
                  break;
              }
              v53 = &v115;
              do
                v28 = *++v53 == 0;
              while ( !v28 );
              strcpy(v53, (const char *)v114);
            }
            v58 = &v117;
            do
              v28 = *++v58 == 0;
            while ( !v28 );
            v59 = 0;
            do
            {
              v60 = v116[v59];
              v58[v59++] = v60;
            }
            while ( v60 );
          }
        }
        else
        {
          v116[0] = 0;
          v46 = rand() % 3;
          if ( v46 )
          {
            if ( v46 == 1 )
            {
              sub_140158AB0(
                v114,
                "the lab at %s and %s has made great strides. ",
                &dword_140404A6C[v42 + 180035673],
                &dword_140404A6C[v42 + 180035689]);
            }
            else if ( v46 == 2 )
            {
              sub_140158AB0(
                v114,
                "we are increasing development at the %s and %s laboratory. ",
                &dword_140404A6C[v42 + 180035673],
                &dword_140404A6C[v42 + 180035689]);
            }
          }
          else
          {
            sub_140158AB0(
              v114,
              "the laboratory at %s and %s has the data. ",
              &dword_140404A6C[v42 + 180035673],
              &dword_140404A6C[v42 + 180035689]);
          }
          v47 = &v115;
          do
            v28 = *++v47 == 0;
          while ( !v28 );
          strcpy(v47, (const char *)v114);
          v48 = &v117;
          do
            v28 = *++v48 == 0;
          while ( !v28 );
          strcpy(v48, v116);
        }
        ++v44;
        --v29;
      }
      while ( v29 );
      v61 = v108;
      v62 = &dword_140404A6C[273377349];
      v63 = 0;
      while ( 1 )
      {
        v64 = -1;
        if ( !*v62 )
          break;
        ++v63;
        v62 += 290;
        if ( (__int64)v62 >= (__int64)&dword_140404A6C[275753029] )
        {
          v63 = -1;
          goto LABEL_128;
        }
      }
      if ( v63 != -1 )
      {
        v65 = 290LL * v63;
        dword_140404A6C[v65 + 273377349] = 1;
        dword_140404A6C[v65 + 273377606] = 0;
      }
LABEL_128:
      v66 = v118;
      do
      {
        v67 = *v66;
        v66[(_QWORD)&dword_140404A6C[273377349] + 1160LL * v63 - (_QWORD)v118 + 4] = *v66;
        ++v66;
      }
      while ( v67 );
      sub_140115FF0(v63);
      v118[0] = 0;
      sub_140158AB0(v119, "INTEL%02d.CDE", ++dword_140404A6C[180001068]);
      if ( (rand() & 1) != 0 )
      {
        v91 = 14019LL * (int)dword_140404A6C[259 * (rand() % (signed int)dword_140404A6C[487149972]) + 487149973];
        v92 = dword_140404A6C[v91 + 225653937];
        v111[0] = dword_140404A6C[v91 + 225653936];
        v111[2] = dword_140404A6C[v91 + 225653938];
        v111[1] = v92;
        v113 = 1065353216;
        v112[0] = xmmword_140278D30;
        v112[1] = xmmword_140278D30;
        v93 = sub_140054130(21, v111, nullptr, (unsigned int *)v112);
        v94 = v93;
        if ( v93 != -1 )
        {
          v95 = 0;
          v96 = &dword_140404A6C[275753045];
          while ( *v96 )
          {
            ++v95;
            v96 += 2570;
            if ( (__int64)v96 >= (__int64)&dword_140404A6C[278384725] )
              goto LABEL_175;
          }
          v64 = v95;
          if ( v95 != -1 )
          {
            v97 = 2570LL * v95;
            MEMORY[0x1401FCD30](&dword_140404A6C[v97 + 275753046], 0, 10276);
            dword_140404A6C[v97 + 275753045] = 1;
            dword_140404A6C[v97 + 275753046] = 360;
          }
LABEL_175:
          v98 = 2570LL * v64;
          v99 = (int)dword_140404A6C[v98 + 275754072];
          dword_140404A6C[1760 * v94 + 278846098] = v64;
          if ( (int)v99 < 256 )
          {
            dword_140404A6C[6 * v99 + 275754073 + v98] = v63;
            v100 = v119;
            v101 = &dword_140404A6C[6 * (int)dword_140404A6C[v98 + 275754072] + 275754074 + v98];
            do
            {
              v102 = *v100++;
              *(_BYTE *)v101 = v102;
              v101 = (unsigned int *)((char *)v101 + 1);
            }
            while ( v102 );
            dword_140404A6C[6 * (int)dword_140404A6C[v98 + 275754072]++ + 275754078 + v98] = 0;
          }
        }
        sub_140158AB0(
          v116,
          "We have intercepted communications\n"
          "The disk with the info in the lobby of the lab at\n"
          "%s and %s\n"
          "Filename: %s",
          (const char *)&dword_140404A6C[396 * dword_140404A6C[v91 + 225641321] + 225426047],
          (const char *)&dword_140404A6C[396 * dword_140404A6C[v91 + 225641322] + 225426047],
          v119);
        v103 = &v117;
        do
          v28 = *++v103 == 0;
        while ( !v28 );
        v89 = v116;
        v104 = 0;
        do
        {
          v105 = v116[v104];
          v103[v104++] = v105;
        }
        while ( v105 );
        goto LABEL_183;
      }
      v68 = dword_140404A6C[179992853] + 216000;
      v69 = (int)sub_14012DC20((__int64)v119, v63, dword_140404A6C[179992853] + 216000);
      v70 = v68 / 3600 / 60 % -12;
      if ( !v70 )
        v70 = 12;
      if ( (_DWORD)v69 != -1 )
      {
        v71 = 383 * v69;
        if ( (int)dword_140404A6C[383 * v69 + 132400671] > 0 )
        {
          sub_140158AB0(v116, "There is in a town car driving around the city with\nvaluable information.\n");
          v72 = &v117;
          do
            v28 = *++v72 == 0;
          while ( !v28 );
          strcpy(v72, v116);
          v73 = 34LL * (int)dword_140404A6C[396 * dword_140404A6C[v71 + 132400672] + 225426056];
          v74 = dword_140404A6C[v73 + 225391236];
          if ( v74 == -1 )
            v74 = dword_140404A6C[v73 + 225391238];
          v75 = dword_140404A6C[v73 + 225391237];
          if ( v75 == -1 )
            v75 = dword_140404A6C[v73 + 225391239];
          if ( v74 != -1 && v75 != -1 )
          {
            v76 = &v117;
            do
              v28 = *++v76 == 0;
            while ( !v28 );
            strcpy(v76, "The car will be driving from ");
            sub_140158AB0(
              v116,
              "%s and %s\n",
              (const char *)&dword_140404A6C[396 * v74 + 225426047],
              (const char *)&dword_140404A6C[396 * v75 + 225426047]);
            v77 = &v117;
            do
              v28 = *++v77 == 0;
            while ( !v28 );
            v78 = 0;
            do
            {
              v79 = v116[v78];
              v77[v78++] = v79;
            }
            while ( v79 );
          }
          v80 = 34LL
              * (int)dword_140404A6C[396 * dword_140404A6C[5 * (int)dword_140404A6C[v71 + 132400671] + 132400667 + v71]
                                   + 225426056];
          v81 = dword_140404A6C[v80 + 225391236];
          if ( v81 == -1 )
            v81 = dword_140404A6C[v80 + 225391238];
          v82 = dword_140404A6C[v80 + 225391237];
          if ( v82 == -1 )
            v82 = dword_140404A6C[v80 + 225391239];
          if ( v81 != -1 && v82 != -1 )
          {
            v83 = &v117;
            do
              v28 = *++v83 == 0;
            while ( !v28 );
            *(_DWORD *)v83 = 2125684;
            sub_140158AB0(
              v116,
              "%s and %s.\n",
              (const char *)&dword_140404A6C[396 * v81 + 225426047],
              (const char *)&dword_140404A6C[396 * v82 + 225426047]);
            v84 = &v117;
            do
              v28 = *++v84 == 0;
            while ( !v28 );
            v85 = 0;
            do
            {
              v86 = v116[v85];
              v84[v85++] = v86;
            }
            while ( v86 );
          }
          v87 = "This mission expires at %d:%02d AM.\n";
          if ( v68 >= 2592000 )
            v87 = "This mission expires at %d:%02d PM.\n";
          sub_140158AB0(v116, v87, v70, (unsigned int)(v68 / 3600 % 60));
          v88 = &v117;
          do
            v28 = *++v88 == 0;
          while ( !v28 );
          v89 = nullptr;
          do
          {
            v90 = v116[(_QWORD)v89];
            (v89++)[(_QWORD)v88] = v90;
          }
          while ( v90 );
LABEL_183:
          sub_140195D20(v61, v118, v89);
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v107 ^ v120);
}

