/* Address: 0x140176410 | Name: ?OnDrawTab@CMFCVisualManager@@UEAAXPEAVCDC@@VCRect@@HHPEBVCMFCBaseTabCtrl@@@Z | Size: 2151 bytes */
__int64 __fastcall CMFCVisualManager::OnDrawTab(
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
  int v46; // ecx
  int *v47; // r12
  int *v48; // r10
  __int16 v49; // r14
  int v50; // eax
  int v51; // eax
  unsigned __int16 i; // cx
  int v53; // ebx
  int v54; // r15d
  int v55; // edi
  unsigned __int64 v56; // r14
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdx
  char *v60; // rax
  __int64 v61; // rcx
  int v62; // r15d
  int v63; // edi
  unsigned __int64 v64; // r14
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  int v68; // r13d
  __int64 v69; // r12
  int v70; // eax
  int v71; // r8d
  unsigned int v72; // eax
  int v73; // r8d
  int v74; // r13d
  int *v75; // r12
  __int64 v76; // rdx
  int v77; // r15d
  int v78; // edi
  unsigned __int64 v79; // r14
  __int64 v80; // rcx
  __int64 v81; // rcx
  int v82; // ecx
  int v83; // eax
  __int16 v84; // r14
  int v85; // eax
  unsigned __int16 j; // cx
  int *v87; // rdi
  int v88; // ebx
  int v89; // r15d
  int v90; // edi
  unsigned __int64 v91; // r14
  __int64 v92; // rcx
  __int64 v93; // rcx
  int *v94; // rax
  int v95; // r15d
  int v96; // edi
  unsigned __int64 v97; // r14
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v101; // [rsp+0h] [rbp-100h] BYREF
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
  __int64 v119; // [rsp+1B0h] [rbp+B0h]

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
      sub_140176210(
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
    sub_140176210(
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
    v117[byte_14026E780[v17]] = v23;
    if ( v24 >= 0.0 )
      v25 = v24 + 0.5;
    else
      v25 = v24 - 0.5;
    v26 = (int)v25;
    v27 = *(float *)(a6 + 4 * v17 + 8) * *v18;
    v117[byte_14026E780[v17 + 1]] = v26;
    if ( v27 >= 0.0 )
      v28 = v27 + 0.5;
    else
      v28 = v27 - 0.5;
    v29 = (int)v28;
    v30 = *(float *)(a6 + 4 * v17 + 12) * v18[1];
    v117[byte_14026E780[v17 + 2]] = v29;
    if ( v30 >= 0.0 )
      v31 = v30 + 0.5;
    else
      v31 = v30 - 0.5;
    v32 = (int)v31;
    v33 = *(float *)(a6 + 4 * v17 + 16) * v18[2];
    v117[byte_14026E780[v17 + 3]] = v32;
    if ( v33 >= 0.0 )
      v34 = v33 + 0.5;
    else
      v34 = v33 - 0.5;
    v35 = (int)v34;
    v36 = *(float *)(a6 + 4 * v17 + 20) * v18[3];
    v117[byte_14026E780[v17 + 4]] = v35;
    if ( v36 >= 0.0 )
      v37 = v36 + 0.5;
    else
      v37 = v36 - 0.5;
    v38 = (int)v37;
    v39 = *(float *)(a6 + 4 * v17 + 24) * v18[4];
    v117[byte_14026E780[v17 + 5]] = v38;
    if ( v39 >= 0.0 )
      v40 = v39 + 0.5;
    else
      v40 = v39 - 0.5;
    v41 = (int)v40;
    v42 = *(float *)(a6 + 4 * v17 + 28) * v18[5];
    v117[byte_14026E780[v17 + 6]] = v41;
    if ( v42 >= 0.0 )
      v43 = v42 + 0.5;
    else
      v43 = v42 - 0.5;
    v44 = byte_14026E780[v17 + 7];
    v18 = (float *)((char *)v18 + v20);
    v17 += 8;
    v45 = v111-- == 1;
    v117[v44] = (int)v43;
  }
  while ( !v45 );
  v46 = v117[0] - a7;
  if ( v117[0] == a7 )
  {
    v47 = v107;
    sub_140176C80(v19, v106, v107, v109);
    v48 = v106;
  }
  else
  {
    v49 = v46 - 1;
    v50 = abs32(v46);
    if ( v46 >= 0 )
      v49 = LOWORD(v117[0]) - a7;
    v51 = v50 >> 1;
    for ( i = 1; v51; v51 >>= 1 )
      ++i;
    v47 = v107;
    v53 = i;
    sub_140176C80(v19, v106, v107, v109 + 4LL * i);
    v48 = v106;
    v54 = v53 + *v107;
    v55 = *v106 | ((unsigned __int16)(v49 & ((1 << v53) - 1)) << (24 - (v53 + *(_BYTE *)v107)));
    if ( v54 >= 8 )
    {
      v56 = (unsigned __int64)(unsigned int)v54 >> 3;
      v54 -= 8 * ((unsigned int)v54 >> 3);
      do
      {
        v57 = *(_QWORD *)(v19 + 8);
        v102[0] = BYTE2(v55);
        (*(void (__fastcall **)(__int64, char *, __int64))v19)(v57, v102, 1);
        if ( BYTE2(v55) == 0xFF )
        {
          v58 = *(_QWORD *)(v19 + 8);
          v102[0] = 0;
          (*(void (__fastcall **)(__int64, char *, __int64))v19)(v58, v102, 1);
        }
        v55 <<= 8;
        --v56;
      }
      while ( v56 );
      v48 = v106;
      v47 = v107;
    }
    *v48 = v55;
    *v47 = v54;
  }
  LODWORD(v59) = 63;
  v60 = &v118;
  v109 = 63;
  v61 = 63;
  while ( !*((_DWORD *)v60 + 2) )
  {
    if ( *((_DWORD *)v60 + 1) )
    {
      v59 = (unsigned int)(v59 - 1);
      goto LABEL_53;
    }
    if ( *(_DWORD *)v60 )
    {
      v59 = (unsigned int)(v59 - 2);
LABEL_53:
      v109 = v59;
      break;
    }
    v59 = (unsigned int)(v59 - 3);
    v61 -= 3;
    v60 -= 12;
    v109 = v59;
    if ( v61 <= 0 )
      break;
  }
  if ( (_DWORD)v59 )
  {
    v67 = (int)v59;
    LODWORD(v110) = 1;
    v68 = 1;
    if ( (int)v59 < 1LL )
    {
      v94 = v107;
    }
    else
    {
      v69 = 1;
      v111 = 1;
      do
      {
        v70 = v68;
        if ( !v117[v69] )
        {
          do
          {
            if ( v69 > v67 )
              break;
            ++v69;
            ++v68;
          }
          while ( !v117[v69] );
          LODWORD(v110) = v68;
          v111 = v69;
        }
        v71 = v68 - v70;
        LODWORD(v114) = v68 - v70;
        if ( v68 - v70 >= 16 )
        {
          v72 = v71 >> 4;
          if ( v71 >> 4 >= 1 )
          {
            v73 = v108;
            v74 = v103;
            v75 = v107;
            v76 = v72;
            LODWORD(v113) = v108;
            v112 = v72;
            do
            {
              v77 = v74 + *v75;
              v78 = *v48 | (v73 << (24 - (v74 + *(_BYTE *)v75)));
              if ( v77 >= 8 )
              {
                v79 = (unsigned __int64)(unsigned int)v77 >> 3;
                v77 -= 8 * ((unsigned int)v77 >> 3);
                do
                {
                  v80 = *(_QWORD *)(v19 + 8);
                  v102[0] = BYTE2(v78);
                  (*(void (__fastcall **)(__int64, char *, __int64))v19)(v80, v102, 1);
                  if ( BYTE2(v78) == 0xFF )
                  {
                    v81 = *(_QWORD *)(v19 + 8);
                    v102[0] = 0;
                    (*(void (__fastcall **)(__int64, char *, __int64))v19)(v81, v102, 1);
                  }
                  v78 <<= 8;
                  --v79;
                }
                while ( v79 );
                v76 = v112;
                v74 = v103;
                v73 = v113;
                v48 = v106;
              }
              --v76;
              *v48 = v78;
              v112 = v76;
              *v75 = v77;
            }
            while ( v76 );
            v69 = v111;
            v68 = v110;
            LOBYTE(v71) = v114;
          }
          v71 &= 0xFu;
        }
        v82 = v117[v69];
        v83 = abs32(v82);
        v84 = v82 - 1;
        if ( v82 >= 0 )
          v84 = v82;
        v85 = v83 >> 1;
        for ( j = 1; v85; v85 >>= 1 )
          ++j;
        v87 = v107;
        v88 = j;
        sub_140176C80(v19, v48, v107, &v116[32 * v71 + 2 * j]);
        v48 = v106;
        v89 = v88 + *v87;
        v90 = *v106 | ((unsigned __int16)(v84 & ((1 << v88) - 1)) << (24 - (v88 + *(_BYTE *)v87)));
        if ( v89 >= 8 )
        {
          v91 = (unsigned __int64)(unsigned int)v89 >> 3;
          v89 -= 8 * ((unsigned int)v89 >> 3);
          do
          {
            v92 = *(_QWORD *)(v19 + 8);
            v102[0] = BYTE2(v90);
            (*(void (__fastcall **)(__int64, char *, __int64))v19)(v92, v102, 1);
            if ( BYTE2(v90) == 0xFF )
            {
              v93 = *(_QWORD *)(v19 + 8);
              v102[0] = 0;
              (*(void (__fastcall **)(__int64, char *, __int64))v19)(v93, v102, 1);
            }
            v90 <<= 8;
            --v91;
          }
          while ( v91 );
          v68 = v110;
          v48 = v106;
        }
        v94 = v107;
        ++v68;
        LODWORD(v59) = v109;
        ++v69;
        v67 = (int)v109;
        *v48 = v90;
        *v94 = v89;
        LODWORD(v110) = v68;
        v111 = v69;
      }
      while ( v69 <= v67 );
    }
    if ( (_DWORD)v59 != 63 )
    {
      v95 = *v94 + v104;
      v96 = *v48 | (v105 << (24 - (*(_BYTE *)v94 + v104)));
      if ( v95 >= 8 )
      {
        v97 = (unsigned __int64)(unsigned int)v95 >> 3;
        v95 -= 8 * ((unsigned int)v95 >> 3);
        do
        {
          v98 = *(_QWORD *)(v19 + 8);
          v102[0] = BYTE2(v96);
          (*(void (__fastcall **)(__int64, char *, __int64))v19)(v98, v102, 1);
          if ( BYTE2(v96) == 0xFF )
          {
            v99 = *(_QWORD *)(v19 + 8);
            v102[0] = 0;
            (*(void (__fastcall **)(__int64, char *, __int64))v19)(v99, v102, 1);
          }
          v96 <<= 8;
          --v97;
        }
        while ( v97 );
        v48 = v106;
        v94 = v107;
      }
      *v48 = v96;
      *v94 = v95;
    }
  }
  else
  {
    v62 = *v47 + v104;
    v63 = *v48 | (v105 << (24 - (*(_BYTE *)v47 + v104)));
    if ( v62 >= 8 )
    {
      v64 = (unsigned __int64)(unsigned int)v62 >> 3;
      v62 -= 8 * ((unsigned int)v62 >> 3);
      do
      {
        v65 = *(_QWORD *)(v19 + 8);
        v102[0] = BYTE2(v63);
        (*(void (__fastcall **)(__int64, char *, __int64))v19)(v65, v102, 1);
        if ( BYTE2(v63) == 0xFF )
        {
          v66 = *(_QWORD *)(v19 + 8);
          v102[0] = 0;
          (*(void (__fastcall **)(__int64, char *, __int64))v19)(v66, v102, 1);
        }
        v63 <<= 8;
        --v64;
      }
      while ( v64 );
      v48 = v106;
    }
    *v48 = v63;
    *v47 = v62;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v101 ^ v119);
}

