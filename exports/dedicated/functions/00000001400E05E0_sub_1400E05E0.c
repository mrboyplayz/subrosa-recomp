/* Address: 0x1400e05e0 | Name: sub_1400E05E0 | Size: 2151 bytes */
__int64 __fastcall sub_1400E05E0(
        __int64 a1,
        int *a2,
        int *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        _WORD *a9)
{
  unsigned __int16 v10; // cx
  int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // r14
  float *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  float *v18; // r8
  __int64 v19; // rsi
  __int64 v20; // r10
  float v21; // xmm1_4
  float v22; // xmm1_4
  int v23; // ecx
  float v24; // xmm1_4
  float v25; // xmm1_4
  int v26; // ecx
  float v27; // xmm1_4
  float v28; // xmm1_4
  int v29; // ecx
  float v30; // xmm1_4
  float v31; // xmm1_4
  int v32; // ecx
  float v33; // xmm1_4
  float v34; // xmm1_4
  int v35; // ecx
  float v36; // xmm1_4
  float v37; // xmm1_4
  int v38; // ecx
  float v39; // xmm1_4
  float v40; // xmm1_4
  int v41; // ecx
  float v42; // xmm1_4
  float v43; // xmm1_4
  __int64 v44; // rax
  bool v45; // zf
  unsigned int v46; // r13d
  int v47; // ecx
  int *v48; // r12
  int *v49; // r10
  __int16 v50; // r14
  int v51; // eax
  int v52; // eax
  unsigned __int16 i; // cx
  int v54; // ebx
  int v55; // r15d
  int v56; // edi
  unsigned __int64 v57; // r14
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  char *v61; // rax
  __int64 v62; // rcx
  int v63; // r15d
  int v64; // edi
  unsigned __int64 v65; // r14
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v69; // rcx
  int v70; // r13d
  __int64 v71; // r12
  int v72; // eax
  int v73; // r8d
  unsigned int v74; // eax
  int v75; // r8d
  int v76; // r13d
  int *v77; // r12
  __int64 v78; // rdx
  int v79; // r15d
  int v80; // edi
  unsigned __int64 v81; // r14
  __int64 v82; // rcx
  __int64 v83; // rcx
  int v84; // ecx
  int v85; // eax
  __int16 v86; // r14
  int v87; // eax
  unsigned __int16 j; // cx
  int *v89; // rdi
  int v90; // ebx
  int v91; // r15d
  int v92; // edi
  unsigned __int64 v93; // r14
  __int64 v94; // rcx
  __int64 v95; // rcx
  int *v96; // rax
  int v97; // r15d
  int v98; // edi
  unsigned __int64 v99; // r14
  __int64 v100; // rcx
  __int64 v101; // rcx
  char v102[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v103; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v104; // [rsp+4Ah] [rbp-B6h]
  unsigned __int16 v105; // [rsp+4Ch] [rbp-B4h]
  int *v106; // [rsp+50h] [rbp-B0h]
  int *v107; // [rsp+58h] [rbp-A8h]
  unsigned __int16 v108; // [rsp+60h] [rbp-A0h]
  __int64 v109; // [rsp+68h] [rbp-98h]
  __int64 v110; // [rsp+70h] [rbp-90h]
  __int64 v111; // [rsp+78h] [rbp-88h]
  __int64 v112; // [rsp+80h] [rbp-80h]
  __int64 v113; // [rsp+88h] [rbp-78h]
  __int64 v114; // [rsp+90h] [rbp-70h]
  __int64 v115; // [rsp+98h] [rbp-68h]
  _WORD *v116; // [rsp+A0h] [rbp-60h]
  _DWORD v117[61]; // [rsp+B0h] [rbp-50h]
  char v118; // [rsp+1A4h] [rbp+A4h] BYREF

  v115 = a1;
  v109 = a8;
  v116 = a9;
  v110 = a4;
  v107 = a3;
  v105 = *a9;
  v104 = a9[1];
  v10 = a9[480];
  v103 = a9[481];
  v106 = a2;
  v108 = v10;
  if ( 8 * a5 > 0 )
  {
    v11 = 6;
    do
    {
      sub_1400E03E0(
        (float *)(a4 + 4LL * (v11 - 6)),
        (float *)(a4 + 4LL * (v11 - 5)),
        (float *)(a4 + 4LL * (v11 - 4)),
        (float *)(a4 + 4LL * (v11 - 3)),
        (float *)(a4 + 4LL * (v11 - 2)),
        (float *)(a4 + 4LL * (v11 - 1)),
        (float *)(a4 + 4LL * v11),
        (float *)(a4 + 4LL * (v11 + 1)));
      v11 += a5;
    }
    while ( v11 - 6 < 8 * a5 );
  }
  v113 = a5;
  v12 = 8;
  v13 = 6 * a5;
  v111 = 8;
  v14 = (float *)(a4 + 4 * v13);
  v15 = 3 * a5 - v13;
  v16 = 2 * a5 - v13;
  v112 = v15;
  v114 = v16;
  do
  {
    sub_1400E03E0(
      &v14[-6 * a5],
      &v14[a5 - v13],
      &v14[v16],
      &v14[v15],
      &v14[4 * a5 - v13],
      &v14[5 * a5 - v13],
      v14,
      &v14[7 * a5 - v13]);
    v15 = v112;
    ++v14;
    v16 = v114;
    --v12;
  }
  while ( v12 );
  v17 = 0;
  v18 = (float *)(v110 + 8);
  v19 = v115;
  v20 = 4 * v113;
  do
  {
    v21 = *(v18 - 2) * *(float *)(a6 + 4 * v17);
    if ( v21 >= 0.0 )
      v22 = v21 + 0.5;
    else
      v22 = v21 - 0.5;
    v23 = (int)v22;
    v24 = *(v18 - 1) * *(float *)(a6 + 4 * v17 + 4);
    v117[byte_1400F36F0[v17]] = v23;
    if ( v24 >= 0.0 )
      v25 = v24 + 0.5;
    else
      v25 = v24 - 0.5;
    v26 = (int)v25;
    v27 = *(float *)(a6 + 4 * v17 + 8) * *v18;
    v117[byte_1400F36F0[v17 + 1]] = v26;
    if ( v27 >= 0.0 )
      v28 = v27 + 0.5;
    else
      v28 = v27 - 0.5;
    v29 = (int)v28;
    v30 = *(float *)(a6 + 4 * v17 + 12) * v18[1];
    v117[byte_1400F36F0[v17 + 2]] = v29;
    if ( v30 >= 0.0 )
      v31 = v30 + 0.5;
    else
      v31 = v30 - 0.5;
    v32 = (int)v31;
    v33 = *(float *)(a6 + 4 * v17 + 16) * v18[2];
    v117[byte_1400F36F0[v17 + 3]] = v32;
    if ( v33 >= 0.0 )
      v34 = v33 + 0.5;
    else
      v34 = v33 - 0.5;
    v35 = (int)v34;
    v36 = *(float *)(a6 + 4 * v17 + 20) * v18[3];
    v117[byte_1400F36F0[v17 + 4]] = v35;
    if ( v36 >= 0.0 )
      v37 = v36 + 0.5;
    else
      v37 = v36 - 0.5;
    v38 = (int)v37;
    v39 = *(float *)(a6 + 4 * v17 + 24) * v18[4];
    v117[byte_1400F36F0[v17 + 5]] = v38;
    if ( v39 >= 0.0 )
      v40 = v39 + 0.5;
    else
      v40 = v39 - 0.5;
    v41 = (int)v40;
    v42 = *(float *)(a6 + 4 * v17 + 28) * v18[5];
    v117[byte_1400F36F0[v17 + 6]] = v41;
    if ( v42 >= 0.0 )
      v43 = v42 + 0.5;
    else
      v43 = v42 - 0.5;
    v44 = byte_1400F36F0[v17 + 7];
    v18 = (float *)((char *)v18 + v20);
    v17 += 8;
    v45 = v111-- == 1;
    v117[v44] = (int)v43;
  }
  while ( !v45 );
  v46 = v117[0];
  v47 = v117[0] - a7;
  if ( v117[0] == a7 )
  {
    v48 = v107;
    sub_1400E0E50(v19, v106, v107, v109);
    v49 = v106;
  }
  else
  {
    v50 = v47 - 1;
    v51 = abs32(v47);
    if ( v47 >= 0 )
      v50 = LOWORD(v117[0]) - a7;
    v52 = v51 >> 1;
    for ( i = 1; v52; v52 >>= 1 )
      ++i;
    v48 = v107;
    v54 = i;
    sub_1400E0E50(v19, v106, v107, v109 + 4LL * i);
    v49 = v106;
    v55 = v54 + *v107;
    v56 = *v106 | ((unsigned __int16)(v50 & ((1 << v54) - 1)) << (24 - (v54 + *(_BYTE *)v107)));
    if ( v55 >= 8 )
    {
      v57 = (unsigned __int64)(unsigned int)v55 >> 3;
      v55 -= 8 * ((unsigned int)v55 >> 3);
      do
      {
        v58 = *(_QWORD *)(v19 + 8);
        v102[0] = BYTE2(v56);
        (*(void (__fastcall **)(__int64, char *, __int64))v19)(v58, v102, 1);
        if ( BYTE2(v56) == 0xFF )
        {
          v59 = *(_QWORD *)(v19 + 8);
          v102[0] = 0;
          (*(void (__fastcall **)(__int64, char *, __int64))v19)(v59, v102, 1);
        }
        v56 <<= 8;
        --v57;
      }
      while ( v57 );
      v49 = v106;
      v48 = v107;
    }
    *v49 = v56;
    *v48 = v55;
  }
  LODWORD(v60) = 63;
  v61 = &v118;
  v109 = 63;
  v62 = 63;
  while ( !*((_DWORD *)v61 + 2) )
  {
    if ( *((_DWORD *)v61 + 1) )
    {
      v60 = (unsigned int)(v60 - 1);
      goto LABEL_53;
    }
    if ( *(_DWORD *)v61 )
    {
      v60 = (unsigned int)(v60 - 2);
LABEL_53:
      v109 = v60;
      break;
    }
    v60 = (unsigned int)(v60 - 3);
    v62 -= 3;
    v61 -= 12;
    v109 = v60;
    if ( v62 <= 0 )
      break;
  }
  if ( (_DWORD)v60 )
  {
    v69 = (int)v60;
    LODWORD(v110) = 1;
    v70 = 1;
    if ( (int)v60 < 1LL )
    {
      v96 = v107;
    }
    else
    {
      v71 = 1;
      v111 = 1;
      do
      {
        v72 = v70;
        if ( !v117[v71] )
        {
          do
          {
            if ( v71 > v69 )
              break;
            ++v71;
            ++v70;
          }
          while ( !v117[v71] );
          LODWORD(v110) = v70;
          v111 = v71;
        }
        v73 = v70 - v72;
        LODWORD(v114) = v70 - v72;
        if ( v70 - v72 >= 16 )
        {
          v74 = v73 >> 4;
          if ( v73 >> 4 >= 1 )
          {
            v75 = v108;
            v76 = v103;
            v77 = v107;
            v78 = v74;
            LODWORD(v113) = v108;
            v112 = v74;
            do
            {
              v79 = v76 + *v77;
              v80 = *v49 | (v75 << (24 - (v76 + *(_BYTE *)v77)));
              if ( v79 >= 8 )
              {
                v81 = (unsigned __int64)(unsigned int)v79 >> 3;
                v79 -= 8 * ((unsigned int)v79 >> 3);
                do
                {
                  v82 = *(_QWORD *)(v19 + 8);
                  v102[0] = BYTE2(v80);
                  (*(void (__fastcall **)(__int64, char *, __int64))v19)(v82, v102, 1);
                  if ( BYTE2(v80) == 0xFF )
                  {
                    v83 = *(_QWORD *)(v19 + 8);
                    v102[0] = 0;
                    (*(void (__fastcall **)(__int64, char *, __int64))v19)(v83, v102, 1);
                  }
                  v80 <<= 8;
                  --v81;
                }
                while ( v81 );
                v78 = v112;
                v76 = v103;
                v75 = v113;
                v49 = v106;
              }
              --v78;
              *v49 = v80;
              v112 = v78;
              *v77 = v79;
            }
            while ( v78 );
            v71 = v111;
            v70 = v110;
            LOBYTE(v73) = v114;
          }
          v73 &= 0xFu;
        }
        v84 = v117[v71];
        v85 = abs32(v84);
        v86 = v84 - 1;
        if ( v84 >= 0 )
          v86 = v84;
        v87 = v85 >> 1;
        for ( j = 1; v87; v87 >>= 1 )
          ++j;
        v89 = v107;
        v90 = j;
        sub_1400E0E50(v19, v49, v107, &v116[32 * v73 + 2 * j]);
        v49 = v106;
        v91 = v90 + *v89;
        v92 = *v106 | ((unsigned __int16)(v86 & ((1 << v90) - 1)) << (24 - (v90 + *(_BYTE *)v89)));
        if ( v91 >= 8 )
        {
          v93 = (unsigned __int64)(unsigned int)v91 >> 3;
          v91 -= 8 * ((unsigned int)v91 >> 3);
          do
          {
            v94 = *(_QWORD *)(v19 + 8);
            v102[0] = BYTE2(v92);
            (*(void (__fastcall **)(__int64, char *, __int64))v19)(v94, v102, 1);
            if ( BYTE2(v92) == 0xFF )
            {
              v95 = *(_QWORD *)(v19 + 8);
              v102[0] = 0;
              (*(void (__fastcall **)(__int64, char *, __int64))v19)(v95, v102, 1);
            }
            v92 <<= 8;
            --v93;
          }
          while ( v93 );
          v70 = v110;
          v49 = v106;
        }
        v96 = v107;
        ++v70;
        LODWORD(v60) = v109;
        ++v71;
        v69 = (int)v109;
        *v49 = v92;
        *v96 = v91;
        LODWORD(v110) = v70;
        v111 = v71;
      }
      while ( v71 <= v69 );
    }
    if ( (_DWORD)v60 != 63 )
    {
      v97 = *v96 + v104;
      v98 = *v49 | (v105 << (24 - (*(_BYTE *)v96 + v104)));
      if ( v97 >= 8 )
      {
        v99 = (unsigned __int64)(unsigned int)v97 >> 3;
        v97 -= 8 * ((unsigned int)v97 >> 3);
        do
        {
          v100 = *(_QWORD *)(v19 + 8);
          v102[0] = BYTE2(v98);
          (*(void (__fastcall **)(__int64, char *, __int64))v19)(v100, v102, 1);
          if ( BYTE2(v98) == 0xFF )
          {
            v101 = *(_QWORD *)(v19 + 8);
            v102[0] = 0;
            (*(void (__fastcall **)(__int64, char *, __int64))v19)(v101, v102, 1);
          }
          v98 <<= 8;
          --v99;
        }
        while ( v99 );
        v49 = v106;
        v96 = v107;
      }
      *v49 = v98;
      *v96 = v97;
    }
    return v117[0];
  }
  else
  {
    v63 = *v48 + v104;
    v64 = *v49 | (v105 << (24 - (*(_BYTE *)v48 + v104)));
    if ( v63 >= 8 )
    {
      v65 = (unsigned __int64)(unsigned int)v63 >> 3;
      v63 -= 8 * ((unsigned int)v63 >> 3);
      do
      {
        v66 = *(_QWORD *)(v19 + 8);
        v102[0] = BYTE2(v64);
        (*(void (__fastcall **)(__int64, char *, __int64))v19)(v66, v102, 1);
        if ( BYTE2(v64) == 0xFF )
        {
          v67 = *(_QWORD *)(v19 + 8);
          v102[0] = 0;
          (*(void (__fastcall **)(__int64, char *, __int64))v19)(v67, v102, 1);
        }
        v64 <<= 8;
        --v65;
      }
      while ( v65 );
      v49 = v106;
    }
    *v49 = v64;
    *v48 = v63;
    return v46;
  }
}

