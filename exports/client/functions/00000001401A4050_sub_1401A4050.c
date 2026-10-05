/* Address: 0x1401a4050 | Name: sub_1401A4050 | Size: 5815 bytes */
__int64 __fastcall sub_1401A4050(
        unsigned int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        int a15,
        unsigned int a16,
        void *a17,
        int a18,
        int a19,
        _DWORD *a20,
        int a21,
        int a22,
        int a23)
{
  void *v23; // rsp
  void *v24; // rsp
  void *v25; // rsp
  void *v26; // rsp
  void *v27; // rsp
  void *v28; // rsp
  void *v29; // rsp
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  int i; // [rsp+60h] [rbp+0h] BYREF
  int v36; // [rsp+64h] [rbp+4h]
  unsigned int v37; // [rsp+68h] [rbp+8h]
  int v38; // [rsp+6Ch] [rbp+Ch]
  int v39; // [rsp+70h] [rbp+10h]
  int v40; // [rsp+74h] [rbp+14h]
  __int64 v41; // [rsp+78h] [rbp+18h]
  int v42; // [rsp+80h] [rbp+20h]
  int *v43; // [rsp+88h] [rbp+28h]
  int v44; // [rsp+90h] [rbp+30h]
  BOOL v45; // [rsp+94h] [rbp+34h]
  int v46; // [rsp+98h] [rbp+38h]
  int v47; // [rsp+9Ch] [rbp+3Ch]
  int v48; // [rsp+A0h] [rbp+40h]
  void *v49; // [rsp+A8h] [rbp+48h]
  void *Src; // [rsp+B0h] [rbp+50h]
  int v51; // [rsp+B8h] [rbp+58h]
  int v52; // [rsp+BCh] [rbp+5Ch]
  int v53; // [rsp+C0h] [rbp+60h]
  int j; // [rsp+C4h] [rbp+64h]
  int v55; // [rsp+C8h] [rbp+68h]
  int v56; // [rsp+CCh] [rbp+6Ch]
  BOOL v57; // [rsp+D0h] [rbp+70h]
  int v58; // [rsp+D4h] [rbp+74h]
  int *v59; // [rsp+D8h] [rbp+78h]
  int v60; // [rsp+E0h] [rbp+80h]
  BOOL v61; // [rsp+E4h] [rbp+84h]
  int v62; // [rsp+E8h] [rbp+88h]
  void *v63; // [rsp+F0h] [rbp+90h]
  void *v64; // [rsp+F8h] [rbp+98h]
  BOOL v65; // [rsp+100h] [rbp+A0h]
  unsigned int v66; // [rsp+104h] [rbp+A4h]
  int v67; // [rsp+108h] [rbp+A8h]
  int v68; // [rsp+10Ch] [rbp+ACh]
  int v69; // [rsp+110h] [rbp+B0h]
  int v70; // [rsp+114h] [rbp+B4h]
  int v71; // [rsp+118h] [rbp+B8h]
  int v72; // [rsp+11Ch] [rbp+BCh]
  int v73; // [rsp+120h] [rbp+C0h]
  int v74; // [rsp+124h] [rbp+C4h]
  int v75; // [rsp+128h] [rbp+C8h]
  int v76; // [rsp+12Ch] [rbp+CCh]
  BOOL v77; // [rsp+130h] [rbp+D0h]
  int v78; // [rsp+134h] [rbp+D4h]
  int v79; // [rsp+138h] [rbp+D8h]
  int v80; // [rsp+13Ch] [rbp+DCh]
  BOOL v81; // [rsp+140h] [rbp+E0h]
  BOOL v82; // [rsp+144h] [rbp+E4h]
  int v83; // [rsp+148h] [rbp+E8h]
  BOOL v84; // [rsp+14Ch] [rbp+ECh]
  int *v85; // [rsp+150h] [rbp+F0h]
  float v86; // [rsp+158h] [rbp+F8h] BYREF
  float v87; // [rsp+15Ch] [rbp+FCh]
  void *v88; // [rsp+160h] [rbp+100h]
  void *v89; // [rsp+168h] [rbp+108h]
  void *v90; // [rsp+170h] [rbp+110h]
  void *v91; // [rsp+178h] [rbp+118h]
  float v92; // [rsp+180h] [rbp+120h]
  float v93; // [rsp+184h] [rbp+124h]
  float v94; // [rsp+188h] [rbp+128h]
  int v95; // [rsp+18Ch] [rbp+12Ch]
  int v96; // [rsp+190h] [rbp+130h]
  int v97; // [rsp+194h] [rbp+134h]
  float v98; // [rsp+198h] [rbp+138h]
  float v99; // [rsp+19Ch] [rbp+13Ch]
  float v100; // [rsp+1A0h] [rbp+140h]
  int v101; // [rsp+1A4h] [rbp+144h]
  float v102; // [rsp+1A8h] [rbp+148h]
  float v103; // [rsp+1ACh] [rbp+14Ch]
  int *v104; // [rsp+1B0h] [rbp+150h]
  int *v105; // [rsp+1B8h] [rbp+158h]
  int *v106; // [rsp+1C0h] [rbp+160h]
  int *v107; // [rsp+1C8h] [rbp+168h]
  __int64 v108; // [rsp+1D0h] [rbp+170h]
  int *v109; // [rsp+1D8h] [rbp+178h]
  __int64 v110; // [rsp+1E0h] [rbp+180h]
  int *v111; // [rsp+1E8h] [rbp+188h]
  __int64 v112; // [rsp+1F0h] [rbp+190h]
  int *v113; // [rsp+1F8h] [rbp+198h]
  int *v114; // [rsp+200h] [rbp+1A0h]
  int *v115; // [rsp+208h] [rbp+1A8h]
  _QWORD v116[10]; // [rsp+210h] [rbp+1B0h] BYREF
  int *v117; // [rsp+260h] [rbp+200h]
  int *v118; // [rsp+268h] [rbp+208h]
  _QWORD v119[7]; // [rsp+270h] [rbp+210h] BYREF
  _BYTE v120[56]; // [rsp+2A8h] [rbp+248h] BYREF
  _BYTE v121[80]; // [rsp+2E0h] [rbp+280h] BYREF
  _BYTE v122[80]; // [rsp+330h] [rbp+2D0h] BYREF
  _BYTE v123[1280]; // [rsp+380h] [rbp+320h] BYREF
  __int64 v124; // [rsp+880h] [rbp+820h]

  v41 = *(_QWORD *)(a2 + 32);
  v78 = 1;
  if ( a6 )
    v80 = 2;
  else
    v80 = 1;
  v53 = v80;
  v81 = a1 && a6 && !a12 && a21 >= 8;
  v61 = v81;
  v82 = !a1 || v61;
  v57 = v82;
  v97 = 1;
  v36 = 1 << a18;
  if ( a10 )
    v83 = v36;
  else
    v83 = 1;
  v46 = v83;
  v38 = *(__int16 *)(v41 + 2LL * a3) * v36;
  v23 = alloca(sub_1401F89D0());
  v118 = &i;
  v43 = &i;
  v85 = &i + *(__int16 *)(v41 + 2LL * (*(_DWORD *)(a2 + 8) - 1)) * v36 - v38;
  if ( a1 && v57 )
    v51 = (*(__int16 *)(v41 + 2LL * *(int *)(a2 + 8)) - *(__int16 *)(v41 + 2LL * (*(_DWORD *)(a2 + 8) - 1))) * v36;
  else
    v51 = 0;
  v24 = alloca(sub_1401F89D0());
  v117 = &i;
  if ( a1 && v57 )
    v59 = v117;
  else
    v59 = (int *)(a5 + 4LL * *(__int16 *)(v41 + 2LL * (*(_DWORD *)(a2 + 8) - 1)) * v36);
  v25 = alloca(sub_1401F89D0());
  v63 = &i;
  v26 = alloca(sub_1401F89D0());
  v64 = &i;
  v27 = alloca(sub_1401F89D0());
  v88 = &i;
  v28 = alloca(sub_1401F89D0());
  v89 = &i;
  v29 = alloca(sub_1401F89D0());
  v90 = &i;
  v52 = 0;
  v116[6] = a8;
  v116[4] = a17;
  v116[0] = __PAIR64__(v57, a1);
  HIDWORD(v116[2]) = a13;
  v116[1] = a2;
  LODWORD(v116[7]) = *a20;
  LODWORD(v116[3]) = a11;
  HIDWORD(v116[7]) = a22;
  HIDWORD(v116[8]) = a23;
  LODWORD(v116[8]) = 0;
  v84 = v46 > 1;
  LODWORD(v116[9]) = v84;
  for ( i = a3; i < a4; ++i )
  {
    v40 = -1;
    v60 = 0;
    LODWORD(v116[2]) = i;
    v65 = i == a4 - 1;
    v45 = v65;
    Src = (void *)(a5 + 4LL * *(__int16 *)(v41 + 2LL * i) * v36);
    if ( a6 )
      v49 = (void *)(a6 + 4LL * *(__int16 *)(v41 + 2LL * i) * v36);
    else
      v49 = nullptr;
    v37 = *(__int16 *)(v41 + 2LL * (i + 1)) * v36 - *(__int16 *)(v41 + 2LL * i) * v36;
    v62 = sub_14019A0E0((__int64)a17);
    if ( i != a3 )
      a16 -= v62;
    v44 = a15 - v62 - 1;
    LODWORD(v116[5]) = v44;
    if ( i > a19 - 1 )
    {
      v48 = 0;
    }
    else
    {
      if ( a19 - i <= 3 )
        v66 = a19 - i;
      else
        v66 = 3;
      v47 = sub_14019A1C0(a16, v66);
      if ( v44 + 1 >= v47 + *(_DWORD *)(a9 + 4LL * i) )
        v67 = v47 + *(_DWORD *)(a9 + 4LL * i);
      else
        v67 = v44 + 1;
      if ( v67 <= 0x3FFF )
      {
        if ( v44 + 1 >= v47 + *(_DWORD *)(a9 + 4LL * i) )
          v68 = v47 + *(_DWORD *)(a9 + 4LL * i);
        else
          v68 = v44 + 1;
        v69 = v68;
      }
      else
      {
        v69 = 0x3FFF;
      }
      if ( v69 >= 0 )
      {
        if ( v44 + 1 >= v47 + *(_DWORD *)(a9 + 4LL * i) )
          v79 = v47 + *(_DWORD *)(a9 + 4LL * i);
        else
          v79 = v44 + 1;
        if ( v79 <= 0x3FFF )
        {
          if ( v44 + 1 >= v47 + *(_DWORD *)(a9 + 4LL * i) )
            v70 = v47 + *(_DWORD *)(a9 + 4LL * i);
          else
            v70 = v44 + 1;
          v71 = v70;
        }
        else
        {
          v71 = 0x3FFF;
        }
        v72 = v71;
      }
      else
      {
        v72 = 0;
      }
      v48 = v72;
    }
    if ( v57
      && ((int)(*(__int16 *)(v41 + 2LL * i) * v36 - v37) >= *(__int16 *)(v41 + 2LL * a3) * v36 || i == a3 + 1)
      && (v78 || !v52) )
    {
      v52 = i;
    }
    if ( i == a3 + 1 )
      sub_1401AD210(a2, (_DWORD)v43, (_DWORD)v85, a3, v36, a12);
    v60 = *(_DWORD *)(a14 + 4LL * i);
    HIDWORD(v116[3]) = v60;
    if ( i >= *(_DWORD *)(a2 + 12) )
    {
      Src = v43;
      if ( a6 )
        v49 = v43;
      v59 = nullptr;
    }
    if ( v45 && !v61 )
      v59 = nullptr;
    if ( !v52 || a11 == 3 && v46 <= 1 && v60 >= 0 )
    {
      v96 = 1;
      v42 = (1 << v46) - 1;
      v39 = v42;
    }
    else
    {
      if ( (int)(*(__int16 *)(v41 + 2LL * v52) * v36 - v38 - v37) >= 0 )
        v73 = *(__int16 *)(v41 + 2LL * v52) * v36 - v38 - v37;
      else
        v73 = 0;
      v40 = v73;
      v58 = v52;
      do
        --v58;
      while ( *(__int16 *)(v41 + 2LL * v58) * v36 > v38 + v40 );
      v55 = v52 - 1;
      do
        ++v55;
      while ( v55 < i && *(__int16 *)(v41 + 2LL * v55) * v36 < (int)(v37 + v38 + v40) );
      v42 = 0;
      v39 = 0;
      v56 = v58;
      do
      {
        v39 |= *(unsigned __int8 *)(a7 + v53 * v56);
        v42 |= *(unsigned __int8 *)(a7 + v53 * v56++ + v53 - 1);
      }
      while ( v56 < v55 );
    }
    if ( a12 )
    {
      if ( i == a13 )
      {
        a12 = 0;
        if ( v57 )
        {
          for ( j = 0; j < *(__int16 *)(v41 + 2LL * i) * v36 - v38; ++j )
            *(float *)&v43[j] = 0.5 * (float)(*(float *)&v43[j] + *(float *)&v85[j]);
        }
      }
    }
    if ( a12 )
    {
      if ( v45 )
        v104 = nullptr;
      else
        v104 = &v43[*(__int16 *)(v41 + 2LL * i) * v36 - v38];
      if ( v40 == -1 )
        v105 = nullptr;
      else
        v105 = &v43[v40];
      v39 = sub_1401AC060(
              (unsigned int)v116,
              (_DWORD)Src,
              v37,
              v48 / 2,
              v46,
              (__int64)v105,
              a18,
              (__int64)v104,
              1065353216,
              (__int64)v59,
              v39);
      if ( v45 )
        v106 = nullptr;
      else
        v106 = &v85[*(__int16 *)(v41 + 2LL * i) * v36 - v38];
      if ( v40 == -1 )
        v107 = nullptr;
      else
        v107 = &v85[v40];
      v42 = sub_1401AC060(
              (unsigned int)v116,
              (_DWORD)v49,
              v37,
              v48 / 2,
              v46,
              (__int64)v107,
              a18,
              (__int64)v106,
              1065353216,
              (__int64)v59,
              v42);
    }
    else
    {
      if ( v49 )
      {
        if ( v61 && i < a13 )
        {
          sub_1401A9E10(i, a8, &v86);
          v75 = v42 | v39;
          qmemcpy(v119, a17, sizeof(v119));
          qmemcpy(v121, v116, sizeof(v121));
          MEMORY[0x1401FC920](v63, Src);
          MEMORY[0x1401FC920](v64, v49);
          LODWORD(v116[8]) = -1;
          if ( v45 )
            v108 = 0;
          else
            v108 = (__int64)&v43[*(__int16 *)(v41 + 2LL * i) * v36 - v38];
          if ( v40 == -1 )
            v109 = nullptr;
          else
            v109 = &v43[v40];
          v39 = CGlobalUtils::CheckAlignment(v116, Src, v49, v37, v48, v46, v109, a18, v108, v59, v75);
          v98 = v86;
          v30 = sub_1401A9C00(v63, Src, v37);
          v100 = v98 * v30;
          v99 = v87;
          v31 = sub_1401A9C00(v64, v49, v37);
          v93 = v100 + (float)(v99 * v31);
          v95 = v39;
          qmemcpy(v120, a17, sizeof(v120));
          qmemcpy(v122, v116, sizeof(v122));
          MEMORY[0x1401FC920](v88, Src);
          MEMORY[0x1401FC920](v89, v49);
          if ( !v45 )
            MEMORY[0x1401FC920](v90, &v43[*(__int16 *)(v41 + 2LL * i) * v36 - v38]);
          v74 = HIDWORD(v119[3]);
          v101 = v119[1];
          v91 = (void *)(SHIDWORD(v119[3]) + v119[0]);
          v76 = LODWORD(v119[1]) - HIDWORD(v119[3]);
          MEMORY[0x1401FC920](v123, v91);
          qmemcpy(a17, v119, 0x38u);
          qmemcpy(v116, v121, sizeof(v116));
          MEMORY[0x1401FC920](Src, v63);
          MEMORY[0x1401FC920](v49, v64);
          if ( i == a3 + 1 )
            sub_1401AD210(a2, (_DWORD)v43, (_DWORD)v85, a3, v36, 0);
          LODWORD(v116[8]) = 1;
          if ( v45 )
            v110 = 0;
          else
            v110 = (__int64)&v43[*(__int16 *)(v41 + 2LL * i) * v36 - v38];
          if ( v40 == -1 )
            v111 = nullptr;
          else
            v111 = &v43[v40];
          v39 = CGlobalUtils::CheckAlignment(v116, Src, v49, v37, v48, v46, v111, a18, v110, v59, v75);
          v102 = v86;
          v32 = sub_1401A9C00(v63, Src, v37);
          v92 = v102 * v32;
          v103 = v87;
          v33 = sub_1401A9C00(v64, v49, v37);
          v94 = v92 + (float)(v103 * v33);
          if ( v93 >= v94 )
          {
            v39 = v95;
            qmemcpy(a17, v120, 0x38u);
            qmemcpy(v116, v122, sizeof(v116));
            MEMORY[0x1401FC920](Src, v88);
            MEMORY[0x1401FC920](v49, v89);
            if ( !v45 )
              MEMORY[0x1401FC920](&v43[*(__int16 *)(v41 + 2LL * i) * v36 - v38], v90);
            MEMORY[0x1401FC920](v91, v123);
          }
        }
        else
        {
          LODWORD(v116[8]) = 0;
          if ( v45 )
            v112 = 0;
          else
            v112 = (__int64)&v43[*(__int16 *)(v41 + 2LL * i) * v36 - v38];
          if ( v40 == -1 )
            v113 = nullptr;
          else
            v113 = &v43[v40];
          v39 = CGlobalUtils::CheckAlignment(
                  v116,
                  Src,
                  v49,
                  v37,
                  v48,
                  v46,
                  v113,
                  a18,
                  v112,
                  v59,
                  v42 | (unsigned int)v39);
        }
      }
      else
      {
        if ( v45 )
          v114 = nullptr;
        else
          v114 = &v43[*(__int16 *)(v41 + 2LL * i) * v36 - v38];
        if ( v40 == -1 )
          v115 = nullptr;
        else
          v115 = &v43[v40];
        v39 = sub_1401AC060(
                (unsigned int)v116,
                (_DWORD)Src,
                v37,
                v48,
                v46,
                (__int64)v115,
                a18,
                (__int64)v114,
                1065353216,
                (__int64)v59,
                v42 | (unsigned int)v39);
      }
      v42 = v39;
    }
    *(_BYTE *)(a7 + v53 * i) = v39;
    *(_BYTE *)(a7 + v53 * i + v53 - 1) = v42;
    a16 += v62 + *(_DWORD *)(a9 + 4LL * i);
    v77 = v48 > (int)(8 * v37);
    v78 = v77;
    LODWORD(v116[9]) = 0;
  }
  *a20 = v116[7];
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v124);
}

