/* Address: 0x140098590 | Name: sub_140098590 | Size: 2784 bytes */
__int64 __fastcall sub_140098590(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // ebp
  _DWORD *v7; // rax
  int v8; // r14d
  int v9; // r15d
  int v10; // edi
  int v11; // eax
  int v12; // edx
  _DWORD *v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int v18; // ecx
  __int64 v19; // rcx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // ecx
  __int64 v23; // rcx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int v26; // ecx
  __int64 v27; // rcx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  int v30; // ecx
  __int64 v31; // rcx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  int v34; // ecx
  __int64 v35; // rcx
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  int v38; // ecx
  __int64 v39; // rcx
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  int v42; // ecx
  __int64 v43; // rcx
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  int v46; // ecx
  __int64 v47; // rcx
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  int v50; // ecx
  __int64 v51; // rcx
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  int *v54; // rdi
  int v55; // ebp
  float v56; // xmm6_4
  int v57; // eax
  __int64 v58; // rdx
  int v59; // r10d
  int v60; // r8d
  int v61; // r11d
  int v62; // r14d
  int *v63; // rdi
  __int64 v64; // rbp
  __int64 v65; // rcx
  __int64 v66; // r9
  __int64 v67; // rcx
  float v68; // xmm0_4
  float v69; // xmm1_4
  __int64 v70; // rcx
  int v71; // r8d
  int v72; // edi
  int v73; // eax
  int v74; // edx
  _DWORD *v75; // rcx
  int v76; // ecx
  __int64 v77; // rcx
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  int v80; // ecx
  __int64 v81; // rcx
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  int v84; // ecx
  __int64 v85; // rcx
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  int v88; // ecx
  __int64 v89; // rcx
  __int128 v90; // xmm0
  __int128 v91; // xmm1
  int v92; // ecx
  __int64 v93; // rcx
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  int v96; // ecx
  __int64 v97; // rcx
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  int v100; // ecx
  __int64 v101; // rcx
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  int v104; // ecx
  __int64 v105; // rcx
  __int128 v106; // xmm0
  __int128 v107; // xmm1
  int v108; // ecx
  __int64 v109; // rcx
  __int128 v110; // xmm0
  __int128 v111; // xmm1
  int v112; // ecx
  __int64 v113; // rcx
  __int128 v114; // xmm0
  __int128 v115; // xmm1
  int v116[4]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v117[2]; // [rsp+40h] [rbp-78h] BYREF
  int v118; // [rsp+60h] [rbp-58h]

  result = (unsigned int)dword_1915413AC;
  if ( dword_1915413AC == 1 )
  {
    v5 = 1;
    v6 = 0;
    v7 = &unk_16D6802B8;
    do
    {
      if ( *(v7 - 2886) )
      {
        if ( !*v7 )
        {
          ++v6;
          if ( !*(v7 - 2868) )
            v5 = 0;
        }
      }
      v7 += 3597;
    }
    while ( (__int64)v7 < (__int64)dword_16DA036B8 );
    v8 = qword_1915413B4;
    v9 = 0;
    if ( v6 )
      v9 = v5;
    if ( (_DWORD)qword_1915413B4 == 1800 )
    {
      v10 = dword_16DDCBA24;
      v11 = 0;
      dword_160A63100[0] = 0;
      v12 = 0;
      if ( dword_16DDCBA24 > 0 )
      {
        v13 = &unk_16DDCBA78;
        do
        {
          if ( (int)*v13 > 0 )
          {
            *((_DWORD *)xmmword_160C63104 + v11) = *v13;
            dword_160D63104[dword_160A63100[0]] = v12;
            v11 = ++dword_160A63100[0];
          }
          ++v12;
          v13 += 28;
        }
        while ( v12 < v10 );
      }
      sub_14004ACC0();
      if ( dword_160A63100[0] > 0 )
      {
        v14 = dword_160D63104[dword_160A63104];
        if ( v14 < 0 || v14 >= v10 )
          v14 = 0;
        v15 = 112LL * (unsigned int)v14;
        v16 = *(_OWORD *)((char *)&unk_16DDCBA40 + v15);
        v17 = *(_OWORD *)((char *)&unk_16DDCBA50 + v15);
        dword_178C5B4E0 = *(_DWORD *)((char *)&unk_16DDCBA78 + v15);
        xmmword_178C5B4A0 = v16;
        xmmword_178C5B4B0 = v17;
      }
      if ( dword_160A63100[0] > 1 )
      {
        v18 = dword_160D63104[dword_160A63108];
        if ( v18 < 0 || v18 >= v10 )
          v18 = 0;
        v19 = 112LL * (unsigned int)v18;
        v20 = *(_OWORD *)((char *)&unk_16DDCBA40 + v19);
        v21 = *(_OWORD *)((char *)&unk_16DDCBA50 + v19);
        dword_178C5B524 = *(_DWORD *)((char *)&unk_16DDCBA78 + v19);
        xmmword_178C5B4E4 = v20;
        xmmword_178C5B4F4 = v21;
      }
      if ( dword_160A63100[0] > 2 )
      {
        v22 = dword_160D63104[dword_160A6310C];
        if ( v22 < 0 || v22 >= v10 )
          v22 = 0;
        v23 = 112LL * (unsigned int)v22;
        v24 = *(_OWORD *)((char *)&unk_16DDCBA40 + v23);
        v25 = *(_OWORD *)((char *)&unk_16DDCBA50 + v23);
        dword_178C5B568 = *(_DWORD *)((char *)&unk_16DDCBA78 + v23);
        xmmword_178C5B528 = v24;
        xmmword_178C5B538 = v25;
      }
      if ( dword_160A63100[0] > 3 )
      {
        v26 = dword_160D63104[dword_160A63110];
        if ( v26 < 0 || v26 >= v10 )
          v26 = 0;
        v27 = 112LL * (unsigned int)v26;
        v28 = *(_OWORD *)((char *)&unk_16DDCBA40 + v27);
        v29 = *(_OWORD *)((char *)&unk_16DDCBA50 + v27);
        dword_178C5B5AC = *(_DWORD *)((char *)&unk_16DDCBA78 + v27);
        xmmword_178C5B56C = v28;
        xmmword_178C5B57C = v29;
      }
      if ( dword_160A63100[0] > 4 )
      {
        v30 = dword_160D63104[dword_160A63114];
        if ( v30 < 0 || v30 >= v10 )
          v30 = 0;
        v31 = 112LL * (unsigned int)v30;
        v32 = *(_OWORD *)((char *)&unk_16DDCBA40 + v31);
        v33 = *(_OWORD *)((char *)&unk_16DDCBA50 + v31);
        dword_178C5B5F0 = *(_DWORD *)((char *)&unk_16DDCBA78 + v31);
        xmmword_178C5B5B0 = v32;
        xmmword_178C5B5C0 = v33;
      }
      if ( dword_160A63100[0] > 5 )
      {
        v34 = dword_160D63104[dword_160A63118];
        if ( v34 < 0 || v34 >= v10 )
          v34 = 0;
        v35 = 112LL * (unsigned int)v34;
        v36 = *(_OWORD *)((char *)&unk_16DDCBA40 + v35);
        v37 = *(_OWORD *)((char *)&unk_16DDCBA50 + v35);
        dword_178C5B634 = *(_DWORD *)((char *)&unk_16DDCBA78 + v35);
        xmmword_178C5B5F4 = v36;
        xmmword_178C5B604 = v37;
      }
      if ( dword_160A63100[0] > 6 )
      {
        v38 = dword_160D63104[dword_160A6311C];
        if ( v38 < 0 || v38 >= v10 )
          v38 = 0;
        v39 = 112LL * (unsigned int)v38;
        v40 = *(_OWORD *)((char *)&unk_16DDCBA40 + v39);
        v41 = *(_OWORD *)((char *)&unk_16DDCBA50 + v39);
        dword_178C5B678 = *(_DWORD *)((char *)&unk_16DDCBA78 + v39);
        xmmword_178C5B638 = v40;
        xmmword_178C5B648 = v41;
      }
      if ( dword_160A63100[0] > 7 )
      {
        v42 = dword_160D63104[dword_160A63120];
        if ( v42 < 0 || v42 >= v10 )
          v42 = 0;
        v43 = 112LL * (unsigned int)v42;
        v44 = *(_OWORD *)((char *)&unk_16DDCBA40 + v43);
        v45 = *(_OWORD *)((char *)&unk_16DDCBA50 + v43);
        dword_178C5B6BC = *(_DWORD *)((char *)&unk_16DDCBA78 + v43);
        xmmword_178C5B67C = v44;
        xmmword_178C5B68C = v45;
      }
      if ( dword_160A63100[0] > 8 )
      {
        v46 = dword_160D63104[dword_160A63124];
        if ( v46 < 0 || v46 >= v10 )
          v46 = 0;
        v47 = 112LL * (unsigned int)v46;
        v48 = *(_OWORD *)((char *)&unk_16DDCBA40 + v47);
        v49 = *(_OWORD *)((char *)&unk_16DDCBA50 + v47);
        dword_178C5B700 = *(_DWORD *)((char *)&unk_16DDCBA78 + v47);
        xmmword_178C5B6C0 = v48;
        xmmword_178C5B6D0 = v49;
      }
      if ( dword_160A63100[0] > 9 )
      {
        v50 = dword_160D63104[dword_160A63128];
        if ( v50 < 0 || v50 >= v10 )
          v50 = 0;
        v51 = 112LL * (unsigned int)v50;
        v52 = *(_OWORD *)((char *)&unk_16DDCBA40 + v51);
        v53 = *(_OWORD *)((char *)&unk_16DDCBA50 + v51);
        dword_178C5B744 = *(_DWORD *)((char *)&unk_16DDCBA78 + v51);
        xmmword_178C5B704 = v52;
        xmmword_178C5B714 = v53;
      }
    }
    if ( !v6 )
      v8 = 1800;
    result = (unsigned int)(v8 - 1);
    LODWORD(qword_1915413B4) = v8 - 1;
    if ( v9 && (int)result > 60 )
    {
      LODWORD(qword_1915413B4) = 60;
    }
    else if ( (int)result <= 0 )
    {
      v54 = dword_16D67D63C;
      v55 = 0;
      v56 = dword_1915FB4EC[0] + 16.0;
      *(float *)v116 = *(float *)dword_1915FB4E4 + 16.0;
      v116[1] = dword_1915FB4E8[0];
      do
      {
        if ( *(v54 - 39) )
        {
          v56 = v56 + -4.0;
          v118 = 1065353216;
          v117[0] = xmmword_1400F78B0;
          *(float *)&v116[2] = v56;
          v117[1] = xmmword_1400F78B0;
          sub_140049C20((__int64)v117, (float *)v117 + 3, a3);
          *v54 = sub_14003A7B0((float *)v116, (float *)v117, v55);
          v57 = sub_1400414B0(0, v116, nullptr, (int *)v117, 1);
          v58 = 7166LL * *v54;
          v54[50] = 0;
          dword_1909419F0[v58] = v57;
        }
        ++v55;
        v54 += 3597;
      }
      while ( v55 < 16 );
      result = sub_1400BAD70(384);
      dword_1915413AC = 2;
      LODWORD(qword_1915413B4) = 25200;
      LODWORD(qword_1915FB664) = 0;
    }
    return result;
  }
  if ( dword_1915413AC != 2 )
  {
    if ( dword_1915413AC == 3 )
    {
      result = (unsigned int)(qword_1915413B4 - 1);
      LODWORD(qword_1915413B4) = result;
      if ( (int)result <= 0 )
        return sub_1400B4790(a1, a2, a3, a4);
    }
    return result;
  }
  v59 = qword_1915FB664;
  v60 = qword_1915413B4;
  if ( (int)qword_1915FB664 <= 0 )
    goto LABEL_102;
  v61 = dword_1915FB4E0;
  v62 = 1;
  v63 = dword_16D67D63C;
  v64 = 256;
  do
  {
    if ( *(v63 - 39) )
    {
      v65 = *v63;
      if ( (_DWORD)v65 != -1 )
      {
        v66 = *(v63 - 10);
        if ( (int)v66 < v61 )
        {
          v67 = 7166 * v65;
          *(v63 - 7) = v59;
          v62 = 0;
          v68 = *(float *)&dword_190941BEC[v67] - *(float *)&dword_1915FB4E4[3 * v66];
          if ( (_DWORD)v66 )
          {
            result = (unsigned int)(v61 - 1);
            if ( (_DWORD)v66 == (_DWORD)result )
            {
              if ( v68 <= 0.0 )
                goto LABEL_98;
            }
            else
            {
              if ( fabs(*(float *)&dword_190941BEC[v67 + 1] - *(float *)&dword_1915FB4E8[3 * v66]) >= 2.0 )
                goto LABEL_98;
              v69 = *(float *)&dword_190941BEC[v67 + 2] - dword_1915FB4EC[3 * v66];
              if ( (float)((float)(v69 * v69) + (float)(v68 * v68)) >= 256.0 )
                goto LABEL_98;
            }
          }
          else if ( v68 <= 0.0 )
          {
            goto LABEL_98;
          }
          result = (unsigned int)(v66 + 1);
          *(v63 - 10) = result;
          if ( (int)result >= v61 )
          {
            result = *(v63 - 24);
            if ( v60 > 900 )
              v60 = 900;
            LODWORD(qword_1915413B4) = v60;
            if ( (_DWORD)result != -1 )
            {
              v70 = 112 * result;
              result = *((unsigned int *)&unk_16DDCBA78 + 28 * result);
              if ( !(_DWORD)result || (int)result > v59 )
                *(_DWORD *)((char *)&unk_16DDCBA78 + v70) = v59;
            }
          }
        }
      }
    }
LABEL_98:
    v63 += 3597;
    --v64;
  }
  while ( v64 );
  if ( v62 )
  {
    result = 120;
    if ( v60 > 120 )
      v60 = 120;
  }
LABEL_102:
  v71 = v60 - 1;
  LODWORD(qword_1915413B4) = v71;
  if ( v59 )
  {
    LODWORD(qword_1915FB664) = v59 + 1;
  }
  else if ( v71 < 24600 )
  {
    LODWORD(qword_1915FB664) = 1;
  }
  if ( v71 <= 0 )
  {
    v72 = dword_16DDCBA24;
    v73 = 0;
    dword_160A63100[0] = 0;
    v74 = 0;
    dword_1915413AC = 3;
    LODWORD(qword_1915413B4) = 900;
    if ( dword_16DDCBA24 > 0 )
    {
      v75 = &unk_16DDCBA78;
      do
      {
        if ( (int)*v75 > 0 )
        {
          *((_DWORD *)xmmword_160C63104 + v73) = *v75;
          dword_160D63104[dword_160A63100[0]] = v74;
          v73 = ++dword_160A63100[0];
        }
        ++v74;
        v75 += 28;
      }
      while ( v74 < v72 );
    }
    result = sub_14004ACC0();
    if ( dword_160A63100[0] > 0 )
    {
      v76 = dword_160D63104[dword_160A63104];
      if ( v76 < 0 || v76 >= v72 )
        v76 = 0;
      v77 = 112LL * (unsigned int)v76;
      v78 = *(_OWORD *)((char *)&unk_16DDCBA40 + v77);
      result = *(unsigned int *)((char *)&unk_16DDCBA78 + v77);
      v79 = *(_OWORD *)((char *)&unk_16DDCBA50 + v77);
      dword_178C5B4E0 = *(_DWORD *)((char *)&unk_16DDCBA78 + v77);
      xmmword_178C5B4A0 = v78;
      xmmword_178C5B4B0 = v79;
    }
    if ( dword_160A63100[0] > 1 )
    {
      v80 = dword_160D63104[dword_160A63108];
      if ( v80 < 0 || v80 >= v72 )
        v80 = 0;
      v81 = 112LL * (unsigned int)v80;
      v82 = *(_OWORD *)((char *)&unk_16DDCBA40 + v81);
      result = *(unsigned int *)((char *)&unk_16DDCBA78 + v81);
      v83 = *(_OWORD *)((char *)&unk_16DDCBA50 + v81);
      dword_178C5B524 = *(_DWORD *)((char *)&unk_16DDCBA78 + v81);
      xmmword_178C5B4E4 = v82;
      xmmword_178C5B4F4 = v83;
    }
    if ( dword_160A63100[0] > 2 )
    {
      v84 = dword_160D63104[dword_160A6310C];
      if ( v84 < 0 || v84 >= v72 )
        v84 = 0;
      v85 = 112LL * (unsigned int)v84;
      v86 = *(_OWORD *)((char *)&unk_16DDCBA40 + v85);
      result = *(unsigned int *)((char *)&unk_16DDCBA78 + v85);
      v87 = *(_OWORD *)((char *)&unk_16DDCBA50 + v85);
      dword_178C5B568 = *(_DWORD *)((char *)&unk_16DDCBA78 + v85);
      xmmword_178C5B528 = v86;
      xmmword_178C5B538 = v87;
    }
    if ( dword_160A63100[0] > 3 )
    {
      v88 = dword_160D63104[dword_160A63110];
      if ( v88 < 0 || v88 >= v72 )
        v88 = 0;
      v89 = 112LL * (unsigned int)v88;
      v90 = *(_OWORD *)((char *)&unk_16DDCBA40 + v89);
      result = *(unsigned int *)((char *)&unk_16DDCBA78 + v89);
      v91 = *(_OWORD *)((char *)&unk_16DDCBA50 + v89);
      dword_178C5B5AC = *(_DWORD *)((char *)&unk_16DDCBA78 + v89);
      xmmword_178C5B56C = v90;
      xmmword_178C5B57C = v91;
    }
    if ( dword_160A63100[0] > 4 )
    {
      v92 = dword_160D63104[dword_160A63114];
      if ( v92 < 0 || v92 >= v72 )
        v92 = 0;
      v93 = 112LL * (unsigned int)v92;
      v94 = *(_OWORD *)((char *)&unk_16DDCBA40 + v93);
      result = *(unsigned int *)((char *)&unk_16DDCBA78 + v93);
      v95 = *(_OWORD *)((char *)&unk_16DDCBA50 + v93);
      dword_178C5B5F0 = *(_DWORD *)((char *)&unk_16DDCBA78 + v93);
      xmmword_178C5B5B0 = v94;
      xmmword_178C5B5C0 = v95;
    }
    if ( dword_160A63100[0] > 5 )
    {
      v96 = dword_160D63104[dword_160A63118];
      if ( v96 < 0 || v96 >= v72 )
        v96 = 0;
      v97 = 112LL * (unsigned int)v96;
      v98 = *(_OWORD *)((char *)&unk_16DDCBA40 + v97);
      result = *(unsigned int *)((char *)&unk_16DDCBA78 + v97);
      v99 = *(_OWORD *)((char *)&unk_16DDCBA50 + v97);
      dword_178C5B634 = *(_DWORD *)((char *)&unk_16DDCBA78 + v97);
      xmmword_178C5B5F4 = v98;
      xmmword_178C5B604 = v99;
    }
    if ( dword_160A63100[0] > 6 )
    {
      v100 = dword_160D63104[dword_160A6311C];
      if ( v100 < 0 || v100 >= v72 )
        v100 = 0;
      v101 = 112LL * (unsigned int)v100;
      v102 = *(_OWORD *)((char *)&unk_16DDCBA40 + v101);
      result = *(unsigned int *)((char *)&unk_16DDCBA78 + v101);
      v103 = *(_OWORD *)((char *)&unk_16DDCBA50 + v101);
      dword_178C5B678 = *(_DWORD *)((char *)&unk_16DDCBA78 + v101);
      xmmword_178C5B638 = v102;
      xmmword_178C5B648 = v103;
    }
    if ( dword_160A63100[0] > 7 )
    {
      v104 = dword_160D63104[dword_160A63120];
      if ( v104 < 0 || v104 >= v72 )
        v104 = 0;
      v105 = 112LL * (unsigned int)v104;
      v106 = *(_OWORD *)((char *)&unk_16DDCBA40 + v105);
      result = *(unsigned int *)((char *)&unk_16DDCBA78 + v105);
      v107 = *(_OWORD *)((char *)&unk_16DDCBA50 + v105);
      dword_178C5B6BC = *(_DWORD *)((char *)&unk_16DDCBA78 + v105);
      xmmword_178C5B67C = v106;
      xmmword_178C5B68C = v107;
    }
    if ( dword_160A63100[0] > 8 )
    {
      v108 = dword_160D63104[dword_160A63124];
      if ( v108 < 0 || v108 >= v72 )
        v108 = 0;
      v109 = 112LL * (unsigned int)v108;
      v110 = *(_OWORD *)((char *)&unk_16DDCBA40 + v109);
      result = *(unsigned int *)((char *)&unk_16DDCBA78 + v109);
      v111 = *(_OWORD *)((char *)&unk_16DDCBA50 + v109);
      dword_178C5B700 = *(_DWORD *)((char *)&unk_16DDCBA78 + v109);
      xmmword_178C5B6C0 = v110;
      xmmword_178C5B6D0 = v111;
    }
    if ( dword_160A63100[0] > 9 )
    {
      v112 = dword_160D63104[dword_160A63128];
      if ( v112 < 0 || v112 >= v72 )
        v112 = 0;
      v113 = 112LL * (unsigned int)v112;
      v114 = *(_OWORD *)((char *)&unk_16DDCBA40 + v113);
      result = *(unsigned int *)((char *)&unk_16DDCBA78 + v113);
      v115 = *(_OWORD *)((char *)&unk_16DDCBA50 + v113);
      dword_178C5B744 = *(_DWORD *)((char *)&unk_16DDCBA78 + v113);
      xmmword_178C5B704 = v114;
      xmmword_178C5B714 = v115;
    }
  }
  return result;
}

