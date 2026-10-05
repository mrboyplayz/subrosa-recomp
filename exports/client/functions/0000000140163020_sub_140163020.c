/* Address: 0x140163020 | Name: sub_140163020 | Size: 1555 bytes */
__int64 __fastcall sub_140163020(__int64 a1, int a2, __int64 a3)
{
  int *v3; // rbp
  __int16 *v4; // rax
  int v5; // ebx
  int v6; // ecx
  int v7; // r13d
  int v8; // edx
  int v9; // r11d
  int v10; // r9d
  int v11; // edx
  int v12; // r14d
  int v13; // esi
  int v14; // r13d
  int v15; // r8d
  int v16; // ecx
  int v17; // edx
  int v18; // r9d
  int v19; // r10d
  int v20; // ecx
  int v21; // edx
  int v22; // r8d
  int v23; // r13d
  int v24; // r12d
  int v25; // r13d
  int v26; // r10d
  int v27; // edi
  int v28; // r15d
  int v29; // ebx
  int v30; // ecx
  int v31; // edi
  int v32; // edx
  int v33; // r9d
  int v34; // r11d
  int v35; // r8d
  int v36; // r9d
  int v37; // r10d
  int v38; // edx
  int v39; // ebx
  int v40; // ecx
  int v41; // r13d
  int v42; // edx
  int v43; // r11d
  int v44; // r9d
  int v45; // edx
  int v46; // r14d
  int v47; // esi
  int v48; // r13d
  int v49; // r8d
  int v50; // ecx
  int v51; // edx
  int v52; // r9d
  int v53; // r10d
  int v54; // ecx
  int v55; // edx
  int v56; // r8d
  int v57; // r13d
  int v58; // r12d
  int v59; // r13d
  int v60; // r10d
  int v61; // edi
  int v62; // r15d
  int v63; // ebx
  int v64; // ecx
  int v65; // edi
  int v66; // edx
  int v67; // r9d
  int v68; // r11d
  int v69; // r8d
  int v70; // r9d
  int v71; // r10d
  int v72; // edx
  __int64 *v73; // r11
  _BYTE *v74; // r13
  int v75; // r8d
  int v76; // esi
  int v77; // edi
  int v78; // r10d
  int v79; // r14d
  int v80; // r9d
  int v81; // eax
  int v82; // ecx
  int v83; // r15d
  int v84; // r14d
  int v85; // r12d
  int v86; // r14d
  int v87; // r9d
  int v88; // ebp
  int v89; // r12d
  int v90; // r14d
  int v91; // r15d
  int v92; // r11d
  int v93; // eax
  int v94; // ebx
  int v95; // ecx
  int v96; // r8d
  int v97; // r9d
  int v98; // edx
  int v99; // ecx
  int v100; // edx
  int v101; // eax
  int v102; // ebp
  int v103; // eax
  int v104; // r12d
  int v105; // eax
  int v106; // r14d
  int v107; // eax
  int v108; // r15d
  __int64 v109; // rcx
  bool v110; // zf
  int v112; // [rsp+0h] [rbp-168h] BYREF
  __int64 v113; // [rsp+8h] [rbp-160h]
  __int64 v114; // [rsp+10h] [rbp-158h]
  int v115; // [rsp+18h] [rbp-150h]
  __int64 v116; // [rsp+38h] [rbp-130h] BYREF
  _QWORD v117[29]; // [rsp+40h] [rbp-128h] BYREF

  v115 = a2;
  v3 = (int *)v117;
  v114 = a1;
  v4 = (__int16 *)(a3 + 32);
  v113 = 4;
  do
  {
    v5 = *(v4 - 8);
    if ( __PAIR32__(*(v4 - 8), v5) == (unsigned __int16)*v4
      && v4[8] == (_WORD)v5
      && v4[16] == (_WORD)v5
      && v4[24] == (_WORD)v5
      && v4[32] == (_WORD)v5
      && v4[40] == (_WORD)v5 )
    {
      v6 = 4 * *(v4 - 16);
      v3[48] = v6;
      v7 = v6;
      v3[40] = v6;
      v8 = v6;
      v3[8] = v6;
      *v3 = v6;
      *(v3 - 8) = v6;
    }
    else
    {
      v9 = v4[8];
      v10 = *v4;
      v11 = v4[32];
      v12 = v4[40];
      v13 = v4[24];
      v14 = *(v4 - 16);
      v15 = 2217 * (v11 + v10);
      v16 = 7567 * v11;
      v17 = 3135 * v10;
      v18 = v13 + v5;
      v19 = v15 - v16;
      v20 = v4[16];
      v21 = v15 + v17;
      v22 = (v20 + v14) << 12;
      v23 = (v14 - v20) << 12;
      v24 = v19 + v23;
      v112 = v22 - v21;
      v25 = v23 - v19;
      v26 = v5;
      v27 = 4816 * (v13 + v5 + v12 + v9);
      v28 = v22 + v21 + 512;
      v24 += 512;
      v25 += 512;
      v29 = v27 - 3685 * (v12 + v5);
      v30 = -1597 * v18;
      v31 = v27 - 10497 * (v13 + v9);
      v32 = -8034 * (v12 + v9);
      v33 = v32 + 12586 * v9;
      v34 = v32 + v29 + 1223 * v12;
      v35 = v29 + v30 + 6149 * v26;
      v36 = v31 + v33;
      v37 = v31 + v30 + 8410 * v13;
      v38 = v112 + 512;
      *(v3 - 8) = (v28 + v35) >> 10;
      *v3 = (v24 + v36) >> 10;
      v3[8] = (v37 + v25) >> 10;
      v6 = (v38 + v34) >> 10;
      v7 = (v25 - v37) >> 10;
      v8 = (v38 - v34) >> 10;
      v3[48] = (v28 - v35) >> 10;
      v3[40] = (v24 - v36) >> 10;
    }
    v3[24] = v8;
    v3[32] = v7;
    v3[16] = v6;
    v39 = *(v4 - 7);
    if ( __PAIR32__(*(v4 - 7), v39) == (unsigned __int16)v4[1]
      && v4[9] == (_WORD)v39
      && v4[17] == (_WORD)v39
      && v4[25] == (_WORD)v39
      && v4[33] == (_WORD)v39
      && v4[41] == (_WORD)v39 )
    {
      v40 = 4 * *(v4 - 15);
      v3[49] = v40;
      v41 = v40;
      v3[41] = v40;
      v42 = v40;
      v3[9] = v40;
      v3[1] = v40;
      *(v3 - 7) = v40;
    }
    else
    {
      v43 = v4[9];
      v44 = v4[1];
      v45 = v4[33];
      v46 = v4[41];
      v47 = v4[25];
      v48 = *(v4 - 15);
      v49 = 2217 * (v45 + v44);
      v50 = 7567 * v45;
      v51 = 3135 * v44;
      v52 = v47 + v39;
      v53 = v49 - v50;
      v54 = v4[17];
      v55 = v49 + v51;
      v56 = (v54 + v48) << 12;
      v57 = (v48 - v54) << 12;
      v58 = v53 + v57;
      v112 = v56 - v55;
      v59 = v57 - v53;
      v60 = v39;
      v61 = 4816 * (v47 + v39 + v46 + v43);
      v62 = v56 + v55 + 512;
      v58 += 512;
      v59 += 512;
      v63 = v61 - 3685 * (v46 + v39);
      v64 = -1597 * v52;
      v65 = v61 - 10497 * (v47 + v43);
      v66 = -8034 * (v46 + v43);
      v67 = v66 + 12586 * v43;
      v68 = v66 + v63 + 1223 * v46;
      v69 = v63 + v64 + 6149 * v60;
      v70 = v65 + v67;
      v71 = v65 + v64 + 8410 * v47;
      v72 = v112 + 512;
      *(v3 - 7) = (v62 + v69) >> 10;
      v3[1] = (v58 + v70) >> 10;
      v3[9] = (v71 + v59) >> 10;
      v40 = (v72 + v68) >> 10;
      v41 = (v59 - v71) >> 10;
      v42 = (v72 - v68) >> 10;
      v3[49] = (v62 - v69) >> 10;
      v3[41] = (v58 - v70) >> 10;
    }
    v3[25] = v42;
    v4 += 2;
    v3[33] = v41;
    v3[17] = v40;
    v3 += 2;
    --v113;
  }
  while ( v113 );
  v73 = &v116;
  v113 = (__int64)&v116;
  v74 = (_BYTE *)(v114 + 1);
  v114 = 8;
  do
  {
    v75 = *((_DWORD *)v73 - 4);
    v76 = *((_DWORD *)v73 + 1);
    v77 = *((_DWORD *)v73 - 1);
    v78 = *((_DWORD *)v73 - 3);
    v79 = *((_DWORD *)v73 - 6);
    v80 = 2217 * (*(_DWORD *)v73 + v75) - 7567 * *(_DWORD *)v73;
    v81 = *((_DWORD *)v73 - 2);
    v82 = 2217 * (*(_DWORD *)v73 + v75) + 3135 * v75;
    v83 = v81 + v79;
    v84 = (v79 - v81) << 12;
    v83 <<= 12;
    v85 = v84 + v80;
    v86 = v84 - v80;
    v87 = *((_DWORD *)v73 - 5);
    v88 = v83 + v82 + 16842752;
    v89 = v85 + 16842752;
    v90 = v86 + 16842752;
    v91 = v83 - v82 + 16842752;
    v92 = 4816 * (v77 + v87 + v76 + v78) - 3685 * (v76 + v87);
    v93 = -1597 * (v77 + v87);
    v94 = 4816 * (v77 + v87 + v76 + v78) - 10497 * (v77 + v78);
    v95 = -8034 * (v76 + v78);
    v96 = v94 + v93 + 8410 * v77;
    v112 = v92 + v93 + 6149 * v87;
    v97 = v95 + v92 + 1223 * v76;
    v98 = v95 + 12586 * v78;
    v99 = v112;
    v100 = v94 + v98;
    v101 = (v112 + v88) >> 17;
    if ( (unsigned int)v101 > 0xFF )
    {
      if ( v101 >= 0 )
        LOBYTE(v101) = -1;
      else
        LOBYTE(v101) = 0;
    }
    *(v74 - 1) = v101;
    v102 = (v88 - v99) >> 17;
    if ( (unsigned int)v102 > 0xFF )
    {
      if ( v102 >= 0 )
        LOBYTE(v102) = -1;
      else
        LOBYTE(v102) = 0;
    }
    v74[6] = v102;
    v103 = (v89 + v100) >> 17;
    if ( (unsigned int)v103 > 0xFF )
    {
      if ( v103 >= 0 )
        LOBYTE(v103) = -1;
      else
        LOBYTE(v103) = 0;
    }
    *v74 = v103;
    v104 = (v89 - v100) >> 17;
    if ( (unsigned int)v104 > 0xFF )
    {
      if ( v104 >= 0 )
        LOBYTE(v104) = -1;
      else
        LOBYTE(v104) = 0;
    }
    v74[5] = v104;
    v105 = (v90 + v96) >> 17;
    if ( (unsigned int)v105 > 0xFF )
    {
      if ( v105 >= 0 )
        LOBYTE(v105) = -1;
      else
        LOBYTE(v105) = 0;
    }
    v74[1] = v105;
    v106 = (v90 - v96) >> 17;
    if ( (unsigned int)v106 > 0xFF )
    {
      if ( v106 >= 0 )
        LOBYTE(v106) = -1;
      else
        LOBYTE(v106) = 0;
    }
    v74[4] = v106;
    v107 = (v91 + v97) >> 17;
    if ( (unsigned int)v107 > 0xFF )
    {
      if ( v107 >= 0 )
        LOBYTE(v107) = -1;
      else
        LOBYTE(v107) = 0;
    }
    v74[2] = v107;
    v108 = (v91 - v97) >> 17;
    if ( (unsigned int)v108 > 0xFF )
    {
      if ( v108 >= 0 )
        LOBYTE(v108) = -1;
      else
        LOBYTE(v108) = 0;
    }
    v109 = v115;
    v73 = (__int64 *)(v113 + 32);
    v74[3] = v108;
    v74 += v109;
    v110 = v114-- == 1;
    v113 = (__int64)v73;
  }
  while ( !v110 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v112 ^ v117[28]);
}

