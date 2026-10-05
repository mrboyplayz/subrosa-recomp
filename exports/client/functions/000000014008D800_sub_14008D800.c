/* Address: 0x14008d800 | Name: sub_14008D800 | Size: 4803 bytes */
__int64 sub_14008D800()
{
  int v0; // r14d
  int v1; // ebx
  float v2; // xmm7_4
  float v3; // xmm8_4
  float v4; // xmm9_4
  float v5; // xmm10_4
  int v6; // esi
  int v7; // r13d
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int n; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  int ii; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  int i; // ebx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  int j; // ebx
  __int64 v39; // rdx
  __int64 v40; // r8
  int k; // ebx
  __int64 v42; // rdx
  __int64 v43; // r8
  int m; // ebx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r11
  unsigned int v53; // r10d
  __int64 v54; // rdx
  unsigned int v55; // ecx
  unsigned int v56; // eax
  signed int v57; // eax
  __int64 v58; // r9
  int v59; // edi
  unsigned int *v60; // rbx
  float v61; // xmm1_4
  float v62; // xmm0_4
  __int64 v63; // r8
  __int64 v64; // rdx
  int v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // r10d
  __int64 v68; // r9
  unsigned int v69; // eax
  float v70; // xmm0_4
  int v71; // eax
  int v72; // esi
  int v73; // eax
  int v74; // edi
  int v75; // ebx
  int v76; // edi
  float *v77; // rbx
  __int64 v78; // rdx
  float v79; // xmm1_4
  float v80; // xmm0_4
  __int64 v81; // rdx
  int v82; // esi
  unsigned int *v83; // rdi
  __int128 v84; // xmm0
  __int64 v85; // rax
  __int64 v86; // r8
  int v87; // r10d
  __int64 v88; // rdx
  int v89; // r9d
  int v90; // r11d
  float v91; // xmm2_4
  float v92; // xmm3_4
  float v93; // xmm4_4
  float v94; // xmm8_4
  float v95; // xmm13_4
  float v96; // xmm10_4
  float v97; // xmm11_4
  unsigned int v98; // xmm10_4
  float v99; // xmm12_4
  __int64 v100; // rdx
  __int64 v101; // r8
  float v102; // xmm9_4
  float v103; // xmm10_4
  signed int v104; // ebx
  float v105; // xmm14_4
  float v106; // xmm1_4
  float v107; // xmm15_4
  float v108; // xmm6_4
  float v109; // xmm8_4
  float v110; // xmm13_4
  float v111; // xmm7_4
  __int64 v112; // rdx
  __int64 v113; // r8
  float v114; // xmm11_4
  float v115; // xmm9_4
  float v116; // xmm12_4
  float v117; // xmm10_4
  signed int v118; // ebx
  float v119; // xmm13_4
  float v120; // xmm8_4
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // rdx
  __int64 v124; // rdx
  int *v125; // rbx
  float v126; // xmm1_4
  float v127; // xmm0_4
  _DWORD v129[10]; // [rsp+0h] [rbp-100h] BYREF
  float v130; // [rsp+40h] [rbp-C0h] BYREF
  float v131; // [rsp+44h] [rbp-BCh]
  float v132; // [rsp+48h] [rbp-B8h]
  float v133; // [rsp+50h] [rbp-B0h]
  float v134; // [rsp+58h] [rbp-A8h] BYREF
  float v135; // [rsp+5Ch] [rbp-A4h]
  float v136; // [rsp+60h] [rbp-A0h]
  float v137; // [rsp+68h] [rbp-98h]
  float v138; // [rsp+6Ch] [rbp-94h]
  float v139; // [rsp+70h] [rbp-90h]
  float v140; // [rsp+74h] [rbp-8Ch]
  float v141; // [rsp+78h] [rbp-88h]
  float v142; // [rsp+7Ch] [rbp-84h]
  float v143; // [rsp+80h] [rbp-80h]
  unsigned int v144; // [rsp+84h] [rbp-7Ch]
  unsigned int v145[4]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v146[4]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v147; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v148; // [rsp+B8h] [rbp-48h]
  float v149; // [rsp+C8h] [rbp-38h]
  __int64 v150; // [rsp+D0h] [rbp-30h]

  v0 = 0;
  if ( *(float *)&dword_140404A6C[309078303] == 0.0 )
  {
    v3 = 0.0;
    v2 = 256.0;
    if ( *(float *)&dword_140404A6C[309078305] == 0.0 )
    {
      v1 = 1;
      v4 = 0.0;
      v5 = 256.0;
    }
    else
    {
      v1 = 2;
      v4 = 256.0;
      v5 = 0.0;
    }
  }
  else
  {
    v1 = 0;
    v2 = 0.0;
    v3 = 256.0;
    v4 = 256.0;
    v5 = 0.0;
  }
  v6 = (int)(float)(*(float *)&dword_140404A6C[309078300] * 0.25);
  v7 = (int)(float)(*(float *)&dword_140404A6C[309078302] * 0.25);
  v8 = (int)(float)(*(float *)&dword_140404A6C[309078301] * 0.25);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2884);
  (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215099])(0);
  unk_140404050(3553, dword_140404A6C[451221642]);
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279420;
  dword_140404A6C[456217205] = 1;
  dword_140404A6C[456217207] = 0;
  v130 = *(float *)&dword_140404A6C[309078300] - v2;
  dword_140404A6C[456217208] = 9;
  v131 = *(float *)&dword_140404A6C[309078301] + v4;
  v132 = (float)(*(float *)&dword_140404A6C[309078302] - v3) + v5;
  sub_14007D520((unsigned int *)&v130, v9, v10);
  v130 = *(float *)&dword_140404A6C[309078300] + v2;
  v131 = *(float *)&dword_140404A6C[309078301] + v4;
  v132 = (float)(*(float *)&dword_140404A6C[309078302] + v3) + v5;
  sub_14007D520((unsigned int *)&v130, v11, v12);
  v130 = *(float *)&dword_140404A6C[309078300] + v2;
  v131 = *(float *)&dword_140404A6C[309078301] - v4;
  v132 = (float)(*(float *)&dword_140404A6C[309078302] + v3) - v5;
  sub_14007D520((unsigned int *)&v130, v13, v14);
  v130 = *(float *)&dword_140404A6C[309078300] - v2;
  v131 = *(float *)&dword_140404A6C[309078301] - v4;
  v132 = (float)(*(float *)&dword_140404A6C[309078302] - v3) - v5;
  sub_14007D520((unsigned int *)&v130, v15, v16);
  sub_14006E0D0(v18, v17, v19);
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      v130 = 0.0;
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
      v131 = *(float *)&dword_140404A6C[309078301];
      v132 = *(float *)&dword_140404A6C[309078302] - 256.0;
      sub_14007D520((unsigned int *)&v130, v20, v22);
      v131 = *(float *)&dword_140404A6C[309078301];
      v132 = *(float *)&dword_140404A6C[309078302] + 256.0;
      sub_14007D520((unsigned int *)&v130, v29, v30);
      for ( i = v6 - 64; i < v6 + 64; ++i )
      {
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279320;
        if ( (i & 3) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279340;
        if ( (i & 7) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
        if ( !(_BYTE)i )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
        v132 = *(float *)&dword_140404A6C[309078302] - 256.0;
        v130 = (float)i * 4.0;
        v131 = *(float *)&dword_140404A6C[309078301];
        sub_14007D520((unsigned int *)&v130, v31, v32);
        v131 = *(float *)&dword_140404A6C[309078301];
        v132 = *(float *)&dword_140404A6C[309078302] + 256.0;
        sub_14007D520((unsigned int *)&v130, v34, v35);
      }
      v132 = 0.0;
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
      v131 = *(float *)&dword_140404A6C[309078301];
      v130 = *(float *)&dword_140404A6C[309078300] - 256.0;
      sub_14007D520((unsigned int *)&v130, v31, v32);
      v130 = *(float *)&dword_140404A6C[309078300] + 256.0;
      v131 = *(float *)&dword_140404A6C[309078301];
      sub_14007D520((unsigned int *)&v130, v36, v37);
      for ( j = v7 - 64; j < v7 + 64; ++j )
      {
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279320;
        if ( (j & 3) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279340;
        if ( (j & 7) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
        if ( !(_BYTE)j )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
        v130 = *(float *)&dword_140404A6C[309078300] - 256.0;
        v131 = *(float *)&dword_140404A6C[309078301];
        v132 = (float)j * 4.0;
        sub_14007D520((unsigned int *)&v130, v20, v22);
        v130 = *(float *)&dword_140404A6C[309078300] + 256.0;
        v131 = *(float *)&dword_140404A6C[309078301];
        sub_14007D520((unsigned int *)&v130, v39, v40);
      }
    }
    else
    {
      for ( k = v6 - 64; k < v6 + 64; ++k )
      {
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279320;
        if ( (k & 3) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279340;
        if ( (k & 7) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
        if ( !(_BYTE)k )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
        v131 = *(float *)&dword_140404A6C[309078301] - 256.0;
        v130 = (float)k * 4.0;
        v132 = *(float *)&dword_140404A6C[309078302];
        sub_14007D520((unsigned int *)&v130, v20, v22);
        v131 = *(float *)&dword_140404A6C[309078301] + 256.0;
        v132 = *(float *)&dword_140404A6C[309078302];
        sub_14007D520((unsigned int *)&v130, v42, v43);
      }
      for ( m = v8 - 64; m < v8 + 64; ++m )
      {
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279320;
        if ( (m & 3) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279340;
        if ( (m & 7) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
        if ( !(_BYTE)m )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
        v130 = *(float *)&dword_140404A6C[309078300] - 256.0;
        v132 = *(float *)&dword_140404A6C[309078302];
        v131 = (float)m * 4.0;
        sub_14007D520((unsigned int *)&v130, v20, v22);
        v130 = *(float *)&dword_140404A6C[309078300] + 256.0;
        v132 = *(float *)&dword_140404A6C[309078302];
        sub_14007D520((unsigned int *)&v130, v45, v46);
      }
    }
  }
  else
  {
    for ( n = v8 - 64; n < v8 + 64; ++n )
    {
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279320;
      if ( (n & 3) == 0 )
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279340;
      if ( (n & 7) == 0 )
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
      if ( !(_BYTE)n )
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
      v130 = *(float *)&dword_140404A6C[309078300];
      v132 = *(float *)&dword_140404A6C[309078302] - 256.0;
      v131 = (float)n * 4.0;
      sub_14007D520((unsigned int *)&v130, v20, v22);
      v130 = *(float *)&dword_140404A6C[309078300];
      v132 = *(float *)&dword_140404A6C[309078302] + 256.0;
      sub_14007D520((unsigned int *)&v130, v24, v25);
    }
    for ( ii = v7 - 64; ii < v7 + 64; ++ii )
    {
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279320;
      if ( (ii & 3) == 0 )
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279340;
      if ( (ii & 7) == 0 )
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
      if ( !(_BYTE)ii )
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
      v130 = *(float *)&dword_140404A6C[309078300];
      v131 = *(float *)&dword_140404A6C[309078301] - 256.0;
      v132 = (float)ii * 4.0;
      sub_14007D520((unsigned int *)&v130, v20, v22);
      v130 = *(float *)&dword_140404A6C[309078300];
      v131 = *(float *)&dword_140404A6C[309078301] + 256.0;
      sub_14007D520((unsigned int *)&v130, v27, v28);
    }
  }
  sub_14006E0D0(v21, v20, v22);
  if ( dword_140404A6C[309078286] )
    goto LABEL_81;
  v130 = (float)(int)dword_140404A6C[309078306] * 4.0;
  v131 = (float)(int)dword_140404A6C[309078307] * 4.0;
  v132 = (float)(int)dword_140404A6C[309078308] * 4.0;
  sub_14008D560((__int64)&v130, v47, v49, 1.0, 0x3F800000u);
  v51 = 0;
  v52 = 22LL * (int)dword_140404A6C[309078328];
  v53 = 0;
  v54 = dword_140404A6C[v52 + 225368670] - dword_140404A6C[v52 + 225368674];
  v55 = dword_140404A6C[v52 + 225368669] - dword_140404A6C[v52 + 225368672];
  if ( dword_140404A6C[309078329] == 1 )
    v51 = (unsigned int)(v54 - 1);
  if ( dword_140404A6C[309078329] == 2 )
  {
    v51 = v55 - 1;
    v53 = v54 - 1;
  }
  else if ( dword_140404A6C[309078329] == 3 )
  {
    v51 = 0;
    v53 = v55 - 1;
  }
  else if ( (int)dword_140404A6C[309078329] <= 0 )
  {
    goto LABEL_68;
  }
  v50 = dword_140404A6C[309078329];
  do
  {
    v56 = v55;
    v55 = v54;
    v54 = v56;
    --v50;
  }
  while ( v50 );
LABEL_68:
  v57 = dword_140404A6C[309078307] - dword_140404A6C[v52 + 225368673];
  v130 = (float)(dword_140404A6C[309078306] - (unsigned int)v51) * 4.0;
  v131 = (float)v57 * 4.0;
  v132 = (float)(int)(dword_140404A6C[309078308] - v53) * 4.0;
  sub_14008D280((__int64)&v130, v54, v50, v51, 0x3F800000u, 0x3F800000u, 0);
  if ( !dword_140404A6C[309078286] )
  {
    v59 = 0;
    if ( (int)dword_140404A6C[225171849] > 0 )
    {
      v60 = &dword_140404A6C[225171872];
      while ( 1 )
      {
        v61 = (float)(int)*(v60 - 4);
        v130 = (float)(int)*(v60 - 5) * 4.0;
        v62 = (float)(int)*(v60 - 3);
        v131 = v61 * 4.0;
        v132 = v62 * 4.0;
        sub_14008D280((__int64)&v130, v47, v49, v58, 0x3F800000u, 0, 0x3F800000u);
        v64 = *v60;
        v65 = *(v60 - 2);
        v66 = *(v60 - 1);
        v67 = v64 - 1;
        if ( v65 == 2 )
          break;
        v68 = v67;
        if ( v65 != 1 )
          v68 = 0;
        if ( v65 == 3 )
        {
          v68 = 0;
          v67 = v66 - 1;
LABEL_78:
          v63 = *(v60 - 2);
          do
          {
            v69 = v66;
            v66 = v64;
            v64 = v69;
            --v63;
          }
          while ( v63 );
          goto LABEL_80;
        }
        v67 = 0;
        if ( v65 > 0 )
          goto LABEL_78;
LABEL_80:
        v70 = (float)(int)(*(v60 - 5) - v68);
        v71 = *(v60 - 3) - v67;
        v131 = (float)(int)*(v60 - 4) * 4.0;
        v130 = v70 * 4.0;
        v132 = (float)v71 * 4.0;
        sub_14008D280((__int64)&v130, v64, v63, v68, 0x3F800000u, 0x3F800000u, 0x3F800000u);
        ++v59;
        v60 += 24;
        if ( v59 >= (int)dword_140404A6C[225171849] )
          goto LABEL_81;
      }
      v68 = v66 - 1;
      goto LABEL_78;
    }
    goto LABEL_120;
  }
LABEL_81:
  if ( dword_140404A6C[309078286] == 1 )
  {
    v72 = dword_140404A6C[309078317];
    v47 = dword_140404A6C[309078320];
    if ( (int)dword_140404A6C[309078317] > (int)dword_140404A6C[309078320] )
      goto LABEL_120;
    v48 = dword_140404A6C[309078321];
    v73 = dword_140404A6C[309078319];
    do
    {
      v74 = dword_140404A6C[309078318];
      if ( (int)dword_140404A6C[309078318] <= (int)v48 )
      {
        do
        {
          v75 = dword_140404A6C[309078316];
          if ( (int)dword_140404A6C[309078316] <= v73 )
          {
            v131 = (float)((float)v72 * 4.0) - 0.125;
            v132 = (float)((float)v74 * 4.0) - 0.125;
            do
            {
              v130 = (float)((float)v75 * 4.0) - 0.125;
              sub_14008D560((__int64)&v130, v47, v49, 1.0, 0x3F800000u);
              v73 = dword_140404A6C[309078319];
              ++v75;
            }
            while ( v75 <= (int)dword_140404A6C[309078319] );
            v48 = dword_140404A6C[309078321];
          }
          ++v74;
        }
        while ( v74 <= (int)v48 );
        v47 = dword_140404A6C[309078320];
      }
      ++v72;
    }
    while ( v72 <= (int)v47 );
  }
  if ( dword_140404A6C[309078286] == 3 )
  {
    v130 = (float)((float)(int)dword_140404A6C[309078306] * 4.0) - 0.125;
    v131 = (float)((float)(int)dword_140404A6C[309078307] * 4.0) - 0.125;
    v132 = (float)((float)(int)dword_140404A6C[309078308] * 4.0) - 0.125;
    sub_14008D560((__int64)&v130, v47, v49, 1.0, 0x3F800000u);
    v76 = 0;
    if ( (int)dword_140404A6C[486132853] > 0 )
    {
      v77 = (float *)&dword_140404A6C[486132856];
      do
      {
        v129[8] = 1065353216;
        unk_140404468(2);
        sub_140125670(&dword_140404A6C[4 * v76 + 486132854], v78, 2);
        v149 = 1.0;
        v147 = xmmword_140278D30;
        v148 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v147, (float *)&v147 + 3);
        v79 = *(v77 - 1) - *((float *)&v148 + 3);
        v130 = *(v77 - 2) - *((float *)&v148 + 2);
        v80 = *v77 - v149;
        v131 = v79;
        v132 = v80;
        sub_140125670(&v130, v81, 2);
        ++v76;
        v77 += 4;
      }
      while ( v76 < (int)dword_140404A6C[486132853] );
    }
  }
  if ( dword_140404A6C[309078286] == 2 )
  {
    v82 = 0;
    *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796D0;
    dword_140404A6C[456217205] = 2;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
    if ( (int)dword_140404A6C[193074052] > 0 )
    {
      v83 = &dword_140404A6C[193074056];
      do
      {
        if ( v82 == dword_140404A6C[309078332] )
          v84 = xmmword_140279700;
        else
          v84 = xmmword_1402796D0;
        v85 = (int)*(v83 - 2);
        *(_OWORD *)&dword_140404A6C[456807033] = v84;
        v86 = dword_140404A6C[3 * v85 + 193070982];
        v87 = dword_140404A6C[3 * v85 + 193070980];
        v88 = 3LL * (int)*(v83 - 3);
        v89 = dword_140404A6C[3 * *(v83 - 3) + 193070982];
        v90 = dword_140404A6C[3 * *(v83 - 3) + 193070980];
        v91 = (float)(v89 - v86);
        v92 = (float)(v87 - v90);
        v93 = fsqrt((float)(v92 * v92) + (float)(v91 * v91));
        if ( v93 == 0.0 )
        {
          v138 = 0.0;
          v95 = 0.0;
          v94 = 0.0;
        }
        else
        {
          v94 = (float)(1.0 / v93) * v92;
          v95 = (float)(1.0 / v93) * v91;
          v138 = v95;
        }
        v96 = (float)(int)dword_140404A6C[v88 + 193070981];
        v139 = (float)v87 * 4.0;
        *(float *)v146 = v139;
        v97 = (float)v90 * 4.0;
        *(float *)&v98 = (float)(v96 * 4.0) + 0.25;
        v99 = (float)v89 * 4.0;
        v140 = (float)((float)(int)dword_140404A6C[3 * v85 + 193070981] * 4.0) + 0.25;
        *(float *)&v146[1] = v140;
        v137 = v94;
        *(float *)v145 = v97;
        v144 = v98;
        v141 = (float)(int)v86 * 4.0;
        *(float *)&v146[2] = v141;
        v145[1] = v98;
        *(float *)&v145[2] = v99;
        sub_14007D520(v145, v88, v86);
        sub_14007D520(v146, v100, v101);
        v102 = v95 + v95;
        v131 = *(float *)&v98;
        v135 = v140;
        v103 = v94 + v94;
        v104 = 0;
        v105 = v97 - (float)(v95 + v95);
        v106 = v141 - (float)(v94 + v94);
        v107 = v99 - (float)(v94 + v94);
        v142 = v139 - (float)(v95 + v95);
        v130 = v105;
        v134 = v142;
        v143 = v106;
        v132 = v107;
        v136 = v106;
        if ( (int)*v83 > 0 )
        {
          v108 = v139 - (float)(v95 + v95);
          v133 = v94;
          v109 = v94 * 4.0;
          v110 = v95 * 4.0;
          v111 = v106;
          do
          {
            sub_14007D520((unsigned int *)&v130, v47, v49);
            sub_14007D520((unsigned int *)&v134, v112, v113);
            v105 = v105 - v110;
            ++v104;
            v107 = v107 - v109;
            v108 = v108 - v110;
            v111 = v111 - v109;
            v130 = v105;
            v132 = v107;
            v134 = v108;
            v136 = v111;
          }
          while ( v104 < (int)*v83 );
          v94 = v137;
          v95 = v138;
        }
        v114 = v97 + v102;
        v115 = v102 + v139;
        v116 = v99 + v103;
        v131 = *(float *)&v144;
        v117 = v103 + v141;
        v118 = 0;
        v130 = v114;
        v134 = v115;
        v132 = v116;
        v136 = v117;
        v135 = v140;
        if ( (int)v83[1] > 0 )
        {
          v119 = v95 * 4.0;
          v120 = v94 * 4.0;
          do
          {
            sub_14007D520((unsigned int *)&v130, v47, v49);
            sub_14007D520((unsigned int *)&v134, v121, v122);
            v114 = v114 + v119;
            ++v118;
            v116 = v116 + v120;
            v115 = v115 + v119;
            v117 = v117 + v120;
            v130 = v114;
            v132 = v116;
            v134 = v115;
            v136 = v117;
          }
          while ( v118 < (int)v83[1] );
        }
        ++v82;
        v83 += 13;
      }
      while ( v82 < (int)dword_140404A6C[193074052] );
    }
    sub_14006E0D0(v48, v47, v49);
    *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279550;
    v130 = (float)(int)dword_140404A6C[309078306] * 4.0;
    v131 = (float)(int)dword_140404A6C[309078307] * 4.0;
    v132 = (float)(int)dword_140404A6C[309078308] * 4.0;
    sub_140125670(&v130, v123, 2);
    if ( (int)dword_140404A6C[193070979] > 0 )
    {
      v125 = (int *)&dword_140404A6C[193070981];
      do
      {
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279690;
        if ( v0 == dword_140404A6C[309078330] )
        {
          dword_140404A6C[456807033] = 1065353216;
          dword_140404A6C[456807034] = 1065353216;
          dword_140404A6C[456807035] = 1065353216;
        }
        if ( v0 == dword_140404A6C[309078331] )
        {
          dword_140404A6C[456807033] = 1065353216;
          dword_140404A6C[456807034] = 1061158912;
          dword_140404A6C[456807035] = 1061158912;
        }
        v126 = (float)*v125;
        v130 = (float)*(v125 - 1) * 4.0;
        v127 = (float)v125[1];
        v131 = v126 * 4.0;
        v132 = v127 * 4.0;
        sub_140125670(&v130, v124, 2);
        ++v0;
        v125 += 3;
      }
      while ( v0 < (int)dword_140404A6C[193070979] );
    }
  }
LABEL_120:
  LOBYTE(v48) = 1;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215099])(v48);
  return MEMORY[0x1401F8B20]((unsigned __int64)v129 ^ v150);
}

