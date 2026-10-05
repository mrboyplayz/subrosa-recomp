/* Address: 0x1400f6170 | Name: sub_1400F6170 | Size: 2784 bytes */
__int64 __fastcall sub_1400F6170(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  int v4; // ebp
  unsigned int *v5; // rax
  unsigned int v6; // r14d
  int v7; // r15d
  signed int v8; // edi
  unsigned int v9; // eax
  signed int v10; // edx
  unsigned int *v11; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // ecx
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // ecx
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  int v24; // ecx
  __int64 v25; // rcx
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int v28; // ecx
  __int64 v29; // rcx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  int v32; // ecx
  __int64 v33; // rcx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int v36; // ecx
  __int64 v37; // rcx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  int v40; // ecx
  __int64 v41; // rcx
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  int v44; // ecx
  __int64 v45; // rcx
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  int v48; // ecx
  __int64 v49; // rcx
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  int v52; // eax
  unsigned int *v53; // rdi
  int v54; // ebp
  float v55; // xmm6_4
  unsigned int v56; // eax
  __int64 v57; // rdx
  signed int v58; // r10d
  int v59; // r8d
  int v60; // ebp
  int v61; // r14d
  unsigned int *v62; // rdi
  __int64 v63; // r11
  __int64 v64; // rcx
  __int64 v65; // r9
  __int64 v66; // rcx
  float v67; // xmm0_4
  float v68; // xmm1_4
  __int64 v69; // rax
  __int64 v70; // rcx
  signed int v71; // eax
  int v72; // r8d
  signed int v73; // edi
  unsigned int v74; // eax
  signed int v75; // edx
  unsigned int *v76; // rcx
  int v77; // ecx
  __int64 v78; // rcx
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  int v81; // ecx
  __int64 v82; // rcx
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  int v85; // ecx
  __int64 v86; // rcx
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  int v89; // ecx
  __int64 v90; // rcx
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  int v93; // ecx
  __int64 v94; // rcx
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  int v97; // ecx
  __int64 v98; // rcx
  __int128 v99; // xmm0
  __int128 v100; // xmm1
  int v101; // ecx
  __int64 v102; // rcx
  __int128 v103; // xmm0
  __int128 v104; // xmm1
  int v105; // ecx
  __int64 v106; // rcx
  __int128 v107; // xmm0
  __int128 v108; // xmm1
  int v109; // ecx
  __int64 v110; // rcx
  __int128 v111; // xmm0
  __int128 v112; // xmm1
  int v113; // ecx
  __int64 v114; // rcx
  __int128 v115; // xmm0
  __int128 v116; // xmm1
  __int64 v118; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v119[4]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v120[2]; // [rsp+40h] [rbp-78h] BYREF
  int v121; // [rsp+60h] [rbp-58h]
  __int64 v122; // [rsp+68h] [rbp-50h]

  if ( dword_140404A6C[283831448] == 1 )
  {
    v3 = 1;
    v4 = 0;
    v5 = &dword_140404A6C[71859139];
    do
    {
      if ( *(v5 - 2886) )
      {
        if ( !*v5 )
        {
          ++v4;
          if ( !*(v5 - 2868) )
            v3 = 0;
        }
      }
      v5 += 3597;
    }
    while ( (__int64)v5 < (__int64)&dword_140404A6C[72779971] );
    v6 = dword_140404A6C[283831450];
    v7 = 0;
    if ( v4 )
      v7 = v3;
    if ( dword_140404A6C[283831450] == 1800 )
    {
      v8 = dword_140404A6C[134050358];
      v9 = 0;
      dword_140404A6C[436668493] = 0;
      v10 = 0;
      if ( (int)dword_140404A6C[134050358] > 0 )
      {
        v11 = &dword_140404A6C[134050379];
        do
        {
          if ( (int)*v11 > 0 )
          {
            dword_140404A6C[v9 + 437192782] = *v11;
            dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v10;
            v9 = ++dword_140404A6C[436668493];
          }
          ++v10;
          v11 += 28;
        }
        while ( v10 < v8 );
      }
      sub_14007D710();
      if ( (int)dword_140404A6C[436668493] > 0 )
      {
        v12 = dword_140404A6C[dword_140404A6C[436668494] + 437454926];
        if ( v12 < 0 || v12 >= v8 )
          v12 = 0;
        v13 = 28LL * (unsigned int)v12;
        v14 = *(_OWORD *)&dword_140404A6C[v13 + 134050365];
        v15 = *(_OWORD *)&dword_140404A6C[v13 + 134050369];
        dword_140404A6C[179992589] = dword_140404A6C[v13 + 134050379];
        *(_OWORD *)&dword_140404A6C[179992573] = v14;
        *(_OWORD *)&dword_140404A6C[179992577] = v15;
      }
      if ( (int)dword_140404A6C[436668493] > 1 )
      {
        v16 = dword_140404A6C[dword_140404A6C[436668495] + 437454926];
        if ( v16 < 0 || v16 >= v8 )
          v16 = 0;
        v17 = 28LL * (unsigned int)v16;
        v18 = *(_OWORD *)&dword_140404A6C[v17 + 134050365];
        v19 = *(_OWORD *)&dword_140404A6C[v17 + 134050369];
        dword_140404A6C[179992606] = dword_140404A6C[v17 + 134050379];
        *(_OWORD *)&dword_140404A6C[179992590] = v18;
        *(_OWORD *)&dword_140404A6C[179992594] = v19;
      }
      if ( (int)dword_140404A6C[436668493] > 2 )
      {
        v20 = dword_140404A6C[dword_140404A6C[436668496] + 437454926];
        if ( v20 < 0 || v20 >= v8 )
          v20 = 0;
        v21 = 28LL * (unsigned int)v20;
        v22 = *(_OWORD *)&dword_140404A6C[v21 + 134050365];
        v23 = *(_OWORD *)&dword_140404A6C[v21 + 134050369];
        dword_140404A6C[179992623] = dword_140404A6C[v21 + 134050379];
        *(_OWORD *)&dword_140404A6C[179992607] = v22;
        *(_OWORD *)&dword_140404A6C[179992611] = v23;
      }
      if ( (int)dword_140404A6C[436668493] > 3 )
      {
        v24 = dword_140404A6C[dword_140404A6C[436668497] + 437454926];
        if ( v24 < 0 || v24 >= v8 )
          v24 = 0;
        v25 = 28LL * (unsigned int)v24;
        v26 = *(_OWORD *)&dword_140404A6C[v25 + 134050365];
        v27 = *(_OWORD *)&dword_140404A6C[v25 + 134050369];
        dword_140404A6C[179992640] = dword_140404A6C[v25 + 134050379];
        *(_OWORD *)&dword_140404A6C[179992624] = v26;
        *(_OWORD *)&dword_140404A6C[179992628] = v27;
      }
      if ( (int)dword_140404A6C[436668493] > 4 )
      {
        v28 = dword_140404A6C[dword_140404A6C[436668498] + 437454926];
        if ( v28 < 0 || v28 >= v8 )
          v28 = 0;
        v29 = 28LL * (unsigned int)v28;
        v30 = *(_OWORD *)&dword_140404A6C[v29 + 134050365];
        v31 = *(_OWORD *)&dword_140404A6C[v29 + 134050369];
        dword_140404A6C[179992657] = dword_140404A6C[v29 + 134050379];
        *(_OWORD *)&dword_140404A6C[179992641] = v30;
        *(_OWORD *)&dword_140404A6C[179992645] = v31;
      }
      if ( (int)dword_140404A6C[436668493] > 5 )
      {
        v32 = dword_140404A6C[dword_140404A6C[436668499] + 437454926];
        if ( v32 < 0 || v32 >= v8 )
          v32 = 0;
        v33 = 28LL * (unsigned int)v32;
        v34 = *(_OWORD *)&dword_140404A6C[v33 + 134050365];
        v35 = *(_OWORD *)&dword_140404A6C[v33 + 134050369];
        dword_140404A6C[179992674] = dword_140404A6C[v33 + 134050379];
        *(_OWORD *)&dword_140404A6C[179992658] = v34;
        *(_OWORD *)&dword_140404A6C[179992662] = v35;
      }
      if ( (int)dword_140404A6C[436668493] > 6 )
      {
        v36 = dword_140404A6C[dword_140404A6C[436668500] + 437454926];
        if ( v36 < 0 || v36 >= v8 )
          v36 = 0;
        v37 = 28LL * (unsigned int)v36;
        v38 = *(_OWORD *)&dword_140404A6C[v37 + 134050365];
        v39 = *(_OWORD *)&dword_140404A6C[v37 + 134050369];
        dword_140404A6C[179992691] = dword_140404A6C[v37 + 134050379];
        *(_OWORD *)&dword_140404A6C[179992675] = v38;
        *(_OWORD *)&dword_140404A6C[179992679] = v39;
      }
      if ( (int)dword_140404A6C[436668493] > 7 )
      {
        v40 = dword_140404A6C[dword_140404A6C[436668501] + 437454926];
        if ( v40 < 0 || v40 >= v8 )
          v40 = 0;
        v41 = 28LL * (unsigned int)v40;
        v42 = *(_OWORD *)&dword_140404A6C[v41 + 134050365];
        v43 = *(_OWORD *)&dword_140404A6C[v41 + 134050369];
        dword_140404A6C[179992708] = dword_140404A6C[v41 + 134050379];
        *(_OWORD *)&dword_140404A6C[179992692] = v42;
        *(_OWORD *)&dword_140404A6C[179992696] = v43;
      }
      if ( (int)dword_140404A6C[436668493] > 8 )
      {
        v44 = dword_140404A6C[dword_140404A6C[436668502] + 437454926];
        if ( v44 < 0 || v44 >= v8 )
          v44 = 0;
        v45 = 28LL * (unsigned int)v44;
        v46 = *(_OWORD *)&dword_140404A6C[v45 + 134050365];
        v47 = *(_OWORD *)&dword_140404A6C[v45 + 134050369];
        dword_140404A6C[179992725] = dword_140404A6C[v45 + 134050379];
        *(_OWORD *)&dword_140404A6C[179992709] = v46;
        *(_OWORD *)&dword_140404A6C[179992713] = v47;
      }
      if ( (int)dword_140404A6C[436668493] > 9 )
      {
        v48 = dword_140404A6C[dword_140404A6C[436668503] + 437454926];
        if ( v48 < 0 || v48 >= v8 )
          v48 = 0;
        v49 = 28LL * (unsigned int)v48;
        v50 = *(_OWORD *)&dword_140404A6C[v49 + 134050365];
        v51 = *(_OWORD *)&dword_140404A6C[v49 + 134050369];
        dword_140404A6C[179992742] = dword_140404A6C[v49 + 134050379];
        *(_OWORD *)&dword_140404A6C[179992726] = v50;
        *(_OWORD *)&dword_140404A6C[179992730] = v51;
      }
    }
    if ( !v4 )
      v6 = 1800;
    v52 = v6 - 1;
    dword_140404A6C[283831450] = v6 - 1;
    if ( v7 && v52 > 60 )
    {
      dword_140404A6C[283831450] = 60;
    }
    else if ( v52 <= 0 )
    {
      v53 = &dword_140404A6C[71856292];
      v54 = 0;
      v55 = *(float *)&dword_140404A6C[284021992] + 16.0;
      *(float *)v119 = *(float *)&dword_140404A6C[284021990] + 16.0;
      v119[1] = dword_140404A6C[284021991];
      do
      {
        if ( *(v53 - 39) )
        {
          v55 = v55 + -4.0;
          v121 = 1065353216;
          v120[0] = xmmword_140278D30;
          *(float *)&v119[2] = v55;
          v120[1] = xmmword_140278D30;
          sub_14007B2A0((__int64)v120, (float *)v120 + 3);
          *v53 = sub_140053840((float *)v119, (float *)v120, v54);
          v56 = sub_14005BCA0(0, v119, nullptr, (unsigned int *)v120, 1u);
          v57 = 7166LL * (int)*v53;
          v53[50] = 0;
          dword_140404A6C[v57 + 280651313] = v56;
        }
        ++v54;
        v53 += 3597;
      }
      while ( v54 < 16 );
      sub_14012E960(256);
      dword_140404A6C[283831448] = 2;
      dword_140404A6C[283831450] = 25200;
      dword_140404A6C[284022086] = 0;
    }
    return MEMORY[0x1401F8B20]((unsigned __int64)&v118 ^ v122);
  }
  if ( dword_140404A6C[283831448] != 2 )
  {
    if ( dword_140404A6C[283831448] == 3 && (int)--dword_140404A6C[283831450] <= 0 )
      sub_140127910(a1, a2, a3);
    return MEMORY[0x1401F8B20]((unsigned __int64)&v118 ^ v122);
  }
  v58 = dword_140404A6C[284022086];
  v59 = dword_140404A6C[283831450];
  if ( (int)dword_140404A6C[284022086] <= 0 )
    goto LABEL_102;
  v60 = dword_140404A6C[284021989];
  v61 = 1;
  v62 = &dword_140404A6C[71856292];
  v63 = 256;
  do
  {
    if ( *(v62 - 39) )
    {
      v64 = (int)*v62;
      if ( (_DWORD)v64 != -1 )
      {
        v65 = (int)*(v62 - 10);
        if ( (int)v65 < v60 )
        {
          v66 = 7166 * v64;
          *(v62 - 7) = v58;
          v61 = 0;
          v67 = *(float *)&dword_140404A6C[v66 + 280651440] - *(float *)&dword_140404A6C[3 * v65 + 284021990];
          if ( (_DWORD)v65 )
          {
            if ( (_DWORD)v65 == v60 - 1 )
            {
              if ( v67 <= 0.0 )
                goto LABEL_98;
            }
            else
            {
              if ( fabs(*(float *)&dword_140404A6C[v66 + 280651441] - *(float *)&dword_140404A6C[3 * v65 + 284021991]) >= 2.0 )
                goto LABEL_98;
              v68 = *(float *)&dword_140404A6C[v66 + 280651442] - *(float *)&dword_140404A6C[3 * v65 + 284021992];
              if ( (float)((float)(v68 * v68) + (float)(v67 * v67)) >= 256.0 )
                goto LABEL_98;
            }
          }
          else if ( v67 <= 0.0 )
          {
            goto LABEL_98;
          }
          *(v62 - 10) = v65 + 1;
          if ( (int)v65 + 1 >= v60 )
          {
            v69 = (int)*(v62 - 24);
            if ( v59 > 900 )
              v59 = 900;
            dword_140404A6C[283831450] = v59;
            if ( (_DWORD)v69 != -1 )
            {
              v70 = 28 * v69;
              v71 = dword_140404A6C[28 * v69 + 134050379];
              if ( !v71 || v71 > v58 )
                dword_140404A6C[v70 + 134050379] = v58;
            }
          }
        }
      }
    }
LABEL_98:
    v62 += 3597;
    --v63;
  }
  while ( v63 );
  if ( v61 && v59 > 120 )
    v59 = 120;
LABEL_102:
  v72 = v59 - 1;
  dword_140404A6C[283831450] = v72;
  if ( v58 )
  {
    dword_140404A6C[284022086] = v58 + 1;
  }
  else if ( v72 < 24600 )
  {
    dword_140404A6C[284022086] = 1;
  }
  if ( v72 <= 0 )
  {
    v73 = dword_140404A6C[134050358];
    v74 = 0;
    dword_140404A6C[436668493] = 0;
    v75 = 0;
    dword_140404A6C[283831448] = 3;
    dword_140404A6C[283831450] = 900;
    if ( (int)dword_140404A6C[134050358] > 0 )
    {
      v76 = &dword_140404A6C[134050379];
      do
      {
        if ( (int)*v76 > 0 )
        {
          dword_140404A6C[v74 + 437192782] = *v76;
          dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v75;
          v74 = ++dword_140404A6C[436668493];
        }
        ++v75;
        v76 += 28;
      }
      while ( v75 < v73 );
    }
    sub_14007D710();
    if ( (int)dword_140404A6C[436668493] > 0 )
    {
      v77 = dword_140404A6C[dword_140404A6C[436668494] + 437454926];
      if ( v77 < 0 || v77 >= v73 )
        v77 = 0;
      v78 = 28LL * (unsigned int)v77;
      v79 = *(_OWORD *)&dword_140404A6C[v78 + 134050365];
      v80 = *(_OWORD *)&dword_140404A6C[v78 + 134050369];
      dword_140404A6C[179992589] = dword_140404A6C[v78 + 134050379];
      *(_OWORD *)&dword_140404A6C[179992573] = v79;
      *(_OWORD *)&dword_140404A6C[179992577] = v80;
    }
    if ( (int)dword_140404A6C[436668493] > 1 )
    {
      v81 = dword_140404A6C[dword_140404A6C[436668495] + 437454926];
      if ( v81 < 0 || v81 >= v73 )
        v81 = 0;
      v82 = 28LL * (unsigned int)v81;
      v83 = *(_OWORD *)&dword_140404A6C[v82 + 134050365];
      v84 = *(_OWORD *)&dword_140404A6C[v82 + 134050369];
      dword_140404A6C[179992606] = dword_140404A6C[v82 + 134050379];
      *(_OWORD *)&dword_140404A6C[179992590] = v83;
      *(_OWORD *)&dword_140404A6C[179992594] = v84;
    }
    if ( (int)dword_140404A6C[436668493] > 2 )
    {
      v85 = dword_140404A6C[dword_140404A6C[436668496] + 437454926];
      if ( v85 < 0 || v85 >= v73 )
        v85 = 0;
      v86 = 28LL * (unsigned int)v85;
      v87 = *(_OWORD *)&dword_140404A6C[v86 + 134050365];
      v88 = *(_OWORD *)&dword_140404A6C[v86 + 134050369];
      dword_140404A6C[179992623] = dword_140404A6C[v86 + 134050379];
      *(_OWORD *)&dword_140404A6C[179992607] = v87;
      *(_OWORD *)&dword_140404A6C[179992611] = v88;
    }
    if ( (int)dword_140404A6C[436668493] > 3 )
    {
      v89 = dword_140404A6C[dword_140404A6C[436668497] + 437454926];
      if ( v89 < 0 || v89 >= v73 )
        v89 = 0;
      v90 = 28LL * (unsigned int)v89;
      v91 = *(_OWORD *)&dword_140404A6C[v90 + 134050365];
      v92 = *(_OWORD *)&dword_140404A6C[v90 + 134050369];
      dword_140404A6C[179992640] = dword_140404A6C[v90 + 134050379];
      *(_OWORD *)&dword_140404A6C[179992624] = v91;
      *(_OWORD *)&dword_140404A6C[179992628] = v92;
    }
    if ( (int)dword_140404A6C[436668493] > 4 )
    {
      v93 = dword_140404A6C[dword_140404A6C[436668498] + 437454926];
      if ( v93 < 0 || v93 >= v73 )
        v93 = 0;
      v94 = 28LL * (unsigned int)v93;
      v95 = *(_OWORD *)&dword_140404A6C[v94 + 134050365];
      v96 = *(_OWORD *)&dword_140404A6C[v94 + 134050369];
      dword_140404A6C[179992657] = dword_140404A6C[v94 + 134050379];
      *(_OWORD *)&dword_140404A6C[179992641] = v95;
      *(_OWORD *)&dword_140404A6C[179992645] = v96;
    }
    if ( (int)dword_140404A6C[436668493] > 5 )
    {
      v97 = dword_140404A6C[dword_140404A6C[436668499] + 437454926];
      if ( v97 < 0 || v97 >= v73 )
        v97 = 0;
      v98 = 28LL * (unsigned int)v97;
      v99 = *(_OWORD *)&dword_140404A6C[v98 + 134050365];
      v100 = *(_OWORD *)&dword_140404A6C[v98 + 134050369];
      dword_140404A6C[179992674] = dword_140404A6C[v98 + 134050379];
      *(_OWORD *)&dword_140404A6C[179992658] = v99;
      *(_OWORD *)&dword_140404A6C[179992662] = v100;
    }
    if ( (int)dword_140404A6C[436668493] > 6 )
    {
      v101 = dword_140404A6C[dword_140404A6C[436668500] + 437454926];
      if ( v101 < 0 || v101 >= v73 )
        v101 = 0;
      v102 = 28LL * (unsigned int)v101;
      v103 = *(_OWORD *)&dword_140404A6C[v102 + 134050365];
      v104 = *(_OWORD *)&dword_140404A6C[v102 + 134050369];
      dword_140404A6C[179992691] = dword_140404A6C[v102 + 134050379];
      *(_OWORD *)&dword_140404A6C[179992675] = v103;
      *(_OWORD *)&dword_140404A6C[179992679] = v104;
    }
    if ( (int)dword_140404A6C[436668493] > 7 )
    {
      v105 = dword_140404A6C[dword_140404A6C[436668501] + 437454926];
      if ( v105 < 0 || v105 >= v73 )
        v105 = 0;
      v106 = 28LL * (unsigned int)v105;
      v107 = *(_OWORD *)&dword_140404A6C[v106 + 134050365];
      v108 = *(_OWORD *)&dword_140404A6C[v106 + 134050369];
      dword_140404A6C[179992708] = dword_140404A6C[v106 + 134050379];
      *(_OWORD *)&dword_140404A6C[179992692] = v107;
      *(_OWORD *)&dword_140404A6C[179992696] = v108;
    }
    if ( (int)dword_140404A6C[436668493] > 8 )
    {
      v109 = dword_140404A6C[dword_140404A6C[436668502] + 437454926];
      if ( v109 < 0 || v109 >= v73 )
        v109 = 0;
      v110 = 28LL * (unsigned int)v109;
      v111 = *(_OWORD *)&dword_140404A6C[v110 + 134050365];
      v112 = *(_OWORD *)&dword_140404A6C[v110 + 134050369];
      dword_140404A6C[179992725] = dword_140404A6C[v110 + 134050379];
      *(_OWORD *)&dword_140404A6C[179992709] = v111;
      *(_OWORD *)&dword_140404A6C[179992713] = v112;
    }
    if ( (int)dword_140404A6C[436668493] > 9 )
    {
      v113 = dword_140404A6C[dword_140404A6C[436668503] + 437454926];
      if ( v113 < 0 || v113 >= v73 )
        v113 = 0;
      v114 = 28LL * (unsigned int)v113;
      v115 = *(_OWORD *)&dword_140404A6C[v114 + 134050365];
      v116 = *(_OWORD *)&dword_140404A6C[v114 + 134050369];
      dword_140404A6C[179992742] = dword_140404A6C[v114 + 134050379];
      *(_OWORD *)&dword_140404A6C[179992726] = v115;
      *(_OWORD *)&dword_140404A6C[179992730] = v116;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v118 ^ v122);
}

