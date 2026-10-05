/* Address: 0x1400c2a20 | Name: sub_1400C2A20 | Size: 6714 bytes */
void sub_1400C2A20()
{
  __int64 v0; // r14
  __int64 v1; // rcx
  _DWORD *v2; // rax
  __int64 v3; // rsi
  int *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  int v9; // ebx
  int v10; // ecx
  _DWORD *v11; // rax
  __int128 v12; // xmm1
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // r13d
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // ebx
  int v20; // r8d
  int v21; // edx
  __int128 v22; // xmm1
  int v23; // r9d
  char v24; // r8
  int v25; // eax
  unsigned int v26; // r10d
  int v27; // ecx
  int v28; // r9d
  int v29; // eax
  unsigned int v30; // r10d
  int v31; // ecx
  int v32; // eax
  u_long v33; // ecx
  u_short v34; // dx
  __int64 v35; // r13
  int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // xmm0_4
  _DWORD *v40; // rcx
  _DWORD *v41; // rbx
  __int64 v42; // rdi
  __int64 *v43; // rbx
  int *v44; // rdi
  int v45; // eax
  int v46; // r9d
  char v47; // r8
  unsigned int v48; // r10d
  int v49; // ecx
  int v50; // r9d
  unsigned int v51; // r10d
  int v52; // ecx
  int v53; // r9d
  unsigned int v54; // r10d
  int v55; // ecx
  int v56; // eax
  int v57; // r8d
  char v58; // r9
  unsigned int v59; // r10d
  int v60; // ecx
  __int64 v61; // r12
  int *v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int64 v66; // rbx
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int *v75; // rbx
  __int64 v76; // rdi
  _DWORD *v77; // rbx
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  __int64 v83; // rbp
  int *v84; // r14
  _DWORD *v85; // rbx
  __int64 v86; // rdi
  int v87; // eax
  int v88; // r8d
  int v89; // edx
  __int64 v90; // rdi
  __int64 v91; // rbp
  __int64 v92; // rsi
  __int64 v93; // rbx
  unsigned int v94; // ebx
  int v95; // r9d
  unsigned int v96; // r10d
  int v97; // ecx
  __int64 v98; // rsi
  char *v99; // rdi
  char *v100; // r13
  __int64 v101; // rax
  __int64 v102; // r15
  int v103; // r14d
  __int64 v104; // rbp
  int v105; // ebx
  __int64 v106; // r12
  int v107; // r8d
  char v108; // r9
  unsigned int v109; // r10d
  int v110; // ecx
  size_t v111; // rdi
  int v112; // r10d
  int v113; // r8d
  int v114; // edi
  unsigned int v115; // r9d
  int v116; // ecx
  int v117; // ebp
  int v118; // r14d
  int v119; // r8d
  char v120; // r10
  unsigned int v121; // r9d
  int v122; // eax
  int v123; // ecx
  __int64 v124; // r15
  __int64 v125; // r15
  int v126; // r8d
  int v127; // r10d
  int v128; // r9d
  int v129; // ecx
  u_short v130; // dx
  u_long v131; // ecx
  int v132; // ebp
  _DWORD *v133; // r14
  _DWORD *v134; // rdi
  char *v135; // rbx
  __int64 v136; // rsi
  int v137; // eax
  int v138; // eax
  __int128 v139; // xmm1
  int v140; // eax
  __int64 v141; // [rsp+20h] [rbp-A8h]
  __int64 v142; // [rsp+28h] [rbp-A0h]
  __int64 v143; // [rsp+30h] [rbp-98h]
  __int64 v144; // [rsp+38h] [rbp-90h]
  __int64 v145; // [rsp+40h] [rbp-88h]
  int v146; // [rsp+48h] [rbp-80h]
  unsigned int v147; // [rsp+D0h] [rbp+8h]
  int v148; // [rsp+D0h] [rbp+8h]
  char *v149; // [rsp+D8h] [rbp+10h]
  __int64 v150; // [rsp+E0h] [rbp+18h]
  char *v151; // [rsp+E8h] [rbp+20h]

  v0 = dword_163D75B40;
  ++dword_163D75FAC;
  sub_14001C980();
  sub_1400B44C0();
  v1 = 256;
  v2 = &unk_160F23920;
  v3 = 0;
  do
  {
    if ( *v2 )
    {
      if ( --v2[1] < 0 )
        *v2 = 0;
    }
    v2 += 20;
    --v1;
  }
  while ( v1 );
  if ( dword_163D75B40 > 0 )
  {
    v5 = (int *)&unk_160F57B3C;
    v6 = (unsigned int)dword_163D75B40;
    do
    {
      v7 = *(v5 - 47217);
      if ( (_DWORD)v7 != -1 )
      {
        v8 = 14388 * v7;
        v9 = dword_16D67D5DC[3597 * v7];
        if ( v9 != -1 )
        {
          v10 = *v5;
          if ( *v5 != -1 )
            goto LABEL_17;
          v10 = 0;
          v11 = &unk_160F23928;
          while ( !*(v11 - 2) || *v11 != v9 )
          {
            ++v10;
            v11 += 20;
            if ( (__int64)v11 >= (__int64)dword_160F28928 )
            {
              v10 = sub_1400BF2C0();
              *v5 = v10;
              goto LABEL_16;
            }
          }
          *v5 = v10;
LABEL_16:
          if ( v10 != -1 )
          {
LABEL_17:
            v12 = *(_OWORD *)&byte_16D67D5A4[v8 + 16];
            v13 = dword_16D67D5D0[v8 / 4];
            v14 = 10LL * v10;
            *(_OWORD *)((char *)&unk_160F23920 + 8 * v14 + 12) = *(_OWORD *)&byte_16D67D5A4[v8];
            *((_DWORD *)&unk_160F23920 + 2 * v14) = 1;
            *(_OWORD *)((char *)&unk_160F23920 + 8 * v14 + 28) = v12;
            *((_DWORD *)&unk_160F23920 + 2 * v14 + 1) = 3600;
            *((_DWORD *)&unk_160F23920 + 2 * v14 + 2) = v9;
            *((_DWORD *)&unk_160F23920 + 2 * v14 + 19) = v13;
          }
        }
      }
      v5 += 47224;
      --v6;
    }
    while ( v6 );
    v3 = 0;
  }
  v147 = 0;
  v15 = 0;
  v150 = v0;
  if ( (int)v0 > 0 )
  {
    v16 = 0;
    v17 = v0;
    v144 = 0;
    while ( 1 )
    {
      v18 = 188896 * v16;
      v142 = 188896 * v16;
      v19 = *((_DWORD *)&unk_160F2997C + 47224 * v16);
      if ( v19 <= 0 )
        break;
LABEL_239:
      ++v15;
      v16 = v144 + 1;
      v147 = v15;
      v144 = v16;
      if ( v16 >= v17 )
        goto LABEL_240;
    }
    v20 = dword_1915413A8;
    if ( *(_DWORD *)((char *)&unk_160F29970 + v18) != dword_1915413A8 )
    {
      *(_DWORD *)dword_197BC7264 = dword_140104000;
      *(_QWORD *)&qword_197BC725C = 9;
      byte_197BC7268 = 6;
      dword_197BC7269 = dword_1915413A8;
      sub_1400AFDB0(&dword_19154118C, 4);
      sub_1400AFDB0(dword_191541390, 4);
      sub_1400AFDB0(&dword_1915413A4, 8);
      v21 = qword_197BC725C;
      if ( qword_197BC725C < 0x10000 )
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          v21 = ++qword_197BC725C;
          *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
        }
        v22 = xmmword_1915411A0;
        *(_OWORD *)&dword_197BC7264[v21] = *(_OWORD *)xmmword_191541190;
        *(_OWORD *)((char *)&unk_197BC7274 + v21) = v22;
        v21 = qword_197BC725C + 32;
        qword_197BC725C += 32;
      }
      v23 = 16;
      v24 = *((_BYTE *)&qword_197BC725C + 4);
      v25 = (int)(fabs(*(float *)&dword_191541434) * 5215.189175234883) & 0x7FFF;
      if ( v21 < 0x10000 )
      {
        v26 = v25 | 0x8000;
        if ( *(float *)&dword_191541434 >= 0.0 )
          v26 = v25;
        while ( 1 )
        {
          dword_197BC7264[v21] &= ~(((1 << v23) - 1) << v24);
          dword_197BC7264[qword_197BC725C] |= (_BYTE)v26 << *((char *)&qword_197BC725C + 4);
          v27 = 8 - *(&qword_197BC725C + 1);
          v21 = qword_197BC725C;
          if ( v23 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
            break;
          v24 = 0;
          *(&qword_197BC725C + 1) = 0;
          if ( v23 == v27 )
          {
            v21 = ++qword_197BC725C;
            goto LABEL_38;
          }
          v21 = qword_197BC725C + 1;
          v26 >>= v27;
          v23 -= v27;
          ++qword_197BC725C;
          if ( v23 <= 0 )
            goto LABEL_38;
        }
        v24 = v23 + *((_BYTE *)&qword_197BC725C + 4);
        *(&qword_197BC725C + 1) += v23;
      }
LABEL_38:
      v28 = 16;
      v29 = (int)(fabs(*(float *)&dword_191541438) * 5215.189175234883) & 0x7FFF;
      if ( v21 < 0x10000 )
      {
        v30 = v29 | 0x8000;
        if ( *(float *)&dword_191541438 >= 0.0 )
          v30 = v29;
        while ( 1 )
        {
          dword_197BC7264[v21] &= ~(((1 << v28) - 1) << v24);
          dword_197BC7264[qword_197BC725C] |= (_BYTE)v30 << *((char *)&qword_197BC725C + 4);
          v31 = 8 - *(&qword_197BC725C + 1);
          v21 = qword_197BC725C;
          if ( v28 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
            break;
          *(&qword_197BC725C + 1) = 0;
          if ( v28 == v31 )
          {
            v21 = ++qword_197BC725C;
            goto LABEL_47;
          }
          v21 = qword_197BC725C + 1;
          v30 >>= v31;
          v28 -= v31;
          ++qword_197BC725C;
          v24 = 0;
          if ( v28 <= 0 )
            goto LABEL_47;
        }
        *(&qword_197BC725C + 1) += v28;
      }
LABEL_47:
      if ( dword_19154118C == 7 )
      {
        sub_1400AFDB0((_DWORD *)&xmmword_1915FBCD8 + 3, 8);
        v21 = qword_197BC725C;
      }
      v32 = v19 + v21;
      v33 = *(_DWORD *)((char *)&unk_160F29960 + v18);
      dword_163D75B6C = v21;
      v34 = *(_WORD *)((char *)&unk_160F29964 + v18);
      *(_DWORD *)((char *)&unk_160F2997C + v18) = v32;
      sub_1400BC790(v33, v34);
LABEL_238:
      v17 = v150;
      goto LABEL_239;
    }
    v35 = *(int *)((char *)&unk_160F29978 + v18);
    v36 = dword_1915413AC;
    if ( (_DWORD)v35 == -1
      || (v37 = dword_16D67D63C[3597 * v35], (_DWORD)v37 == -1)
      || (v38 = 7166 * v37, dword_190941A04[7166 * v37] <= 0) )
    {
      v40 = (_DWORD *)((char *)&unk_160F4970C + v18);
      if ( dword_1915413AC == 2 )
      {
        *v40 = *(_DWORD *)((char *)&unk_160F49700 + v18);
        v40[1] = *(_DWORD *)((char *)&unk_160F49704 + v18);
        v39 = *(_DWORD *)((char *)&unk_160F49708 + v18);
      }
      else
      {
        *(_QWORD *)v40 = 0;
        v39 = 0;
      }
    }
    else
    {
      v39 = dword_190941A50[v38];
      v40 = (_DWORD *)((char *)&unk_160F4970C + v18);
      *v40 = dword_190941A48[v38];
      v40[1] = dword_190941A4C[v38];
    }
    v40[2] = v39;
    *(_DWORD *)dword_197BC7264 = dword_140104000;
    dword_197BC726D = dword_191541414;
    *(_QWORD *)&qword_197BC725C = 13;
    byte_197BC7268 = 5;
    dword_197BC7269 = v20;
    sub_1400AFDB0(&dword_1915413AC, 4);
    if ( v36 == 1 )
    {
      v41 = &unk_16D67D5E8;
      v42 = 32;
      do
      {
        sub_1400AFDB0(v41, 1);
        v41 += 3597;
        --v42;
      }
      while ( v42 );
    }
    else if ( v36 != 3 )
    {
LABEL_64:
      v45 = qword_197BC725C;
      v46 = 24;
      v47 = *((_BYTE *)&qword_197BC725C + 4);
      if ( qword_197BC725C < 0x10000 )
      {
        v48 = qword_1915413B4 & 0xFFFFFF;
        while ( 1 )
        {
          dword_197BC7264[v45] &= ~(((1 << v46) - 1) << v47);
          dword_197BC7264[qword_197BC725C] |= (_BYTE)v48 << *((char *)&qword_197BC725C + 4);
          v49 = 8 - *(&qword_197BC725C + 1);
          v45 = qword_197BC725C;
          if ( v46 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
            break;
          v47 = v3;
          *(&qword_197BC725C + 1) = v3;
          if ( v46 == v49 )
          {
            v45 = ++qword_197BC725C;
            goto LABEL_72;
          }
          v45 = qword_197BC725C + 1;
          v48 >>= v49;
          v46 -= v49;
          ++qword_197BC725C;
          if ( v46 <= 0 )
            goto LABEL_72;
        }
        v47 = v46 + *((_BYTE *)&qword_197BC725C + 4);
        *(&qword_197BC725C + 1) += v46;
      }
LABEL_72:
      v50 = 16;
      if ( v45 < 0x10000 )
      {
        v51 = (unsigned __int16)qword_1915FB664;
        while ( 1 )
        {
          dword_197BC7264[v45] &= ~(((1 << v50) - 1) << v47);
          dword_197BC7264[qword_197BC725C] |= (_BYTE)v51 << *((char *)&qword_197BC725C + 4);
          v52 = 8 - *(&qword_197BC725C + 1);
          v45 = qword_197BC725C;
          if ( v50 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
            break;
          v47 = v3;
          *(&qword_197BC725C + 1) = v3;
          if ( v50 == v52 )
          {
            v45 = ++qword_197BC725C;
            goto LABEL_80;
          }
          v45 = qword_197BC725C + 1;
          v51 >>= v52;
          v50 -= v52;
          ++qword_197BC725C;
          if ( v50 <= 0 )
            goto LABEL_80;
        }
        v47 = v50 + *((_BYTE *)&qword_197BC725C + 4);
        *(&qword_197BC725C + 1) += v50;
      }
LABEL_80:
      v53 = 30;
      if ( v45 < 0x10000 )
      {
        v54 = dword_178C5B8E0 & 0x3FFFFFFF;
        while ( 1 )
        {
          dword_197BC7264[v45] &= ~(((1 << v53) - 1) << v47);
          dword_197BC7264[qword_197BC725C] |= (_BYTE)v54 << *((char *)&qword_197BC725C + 4);
          v55 = 8 - *(&qword_197BC725C + 1);
          if ( v53 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
            break;
          *(&qword_197BC725C + 1) = v3;
          if ( v53 == v55 )
          {
            ++qword_197BC725C;
            goto LABEL_88;
          }
          v53 -= v55;
          v45 = qword_197BC725C + 1;
          v54 >>= v55;
          ++qword_197BC725C;
          v47 = v3;
          if ( v53 <= 0 )
            goto LABEL_88;
        }
        *(&qword_197BC725C + 1) += v53;
      }
LABEL_88:
      sub_1400AFDB0(dword_191541494, 6);
      sub_1400AFDB0(dword_191547058, 6);
      sub_1400AFDB0(dword_19154CC1C, 6);
      sub_1400AFDB0(dword_1915527E0, 6);
      sub_1400AFDB0(&dword_1915583A4, 6);
      v56 = qword_197BC725C;
      v57 = 8;
      if ( qword_197BC725C < 0x10000 )
      {
        v58 = *((_BYTE *)&qword_197BC725C + 4);
        v59 = (unsigned __int8)v35;
        while ( 1 )
        {
          dword_197BC7264[v56] &= ~(((1 << v57) - 1) << v58);
          dword_197BC7264[qword_197BC725C] |= (_BYTE)v59 << *((char *)&qword_197BC725C + 4);
          v60 = 8 - *(&qword_197BC725C + 1);
          if ( v57 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
            break;
          *(&qword_197BC725C + 1) = v3;
          if ( v57 == v60 )
          {
            ++qword_197BC725C;
            goto LABEL_96;
          }
          v57 -= v60;
          v56 = qword_197BC725C + 1;
          v59 >>= v60;
          ++qword_197BC725C;
          v58 = v3;
          if ( v57 <= 0 )
            goto LABEL_96;
        }
        *(&qword_197BC725C + 1) += v57;
      }
LABEL_96:
      v61 = 3597 * v35;
      v62 = &dword_16D67D63C[3597 * v35];
      sub_1400AFDB0(v62, 10);
      v145 = 0;
      v146 = 0;
      if ( (_DWORD)v35 != -1 )
      {
        v63 = *v62;
        if ( (_DWORD)v63 != -1 )
        {
          *(_DWORD *)((char *)&unk_16D67D6C8 + v61 * 4) = *((_DWORD *)&unk_190941A60 + 7166 * v63);
          *(_DWORD *)((char *)&unk_16D67D6CC + v61 * 4) = dword_190941A64[7166 * *v62];
          v64 = 28664LL * *v62;
          v145 = *(_QWORD *)((char *)&unk_190941FAC + v64);
          v146 = *(_DWORD *)((char *)&unk_190941FAC + v64 + 8);
        }
      }
      v65 = *v62;
      if ( (_DWORD)v65 != -1 )
      {
        v66 = 28664 * v65;
        v67 = qword_197BC725C;
        if ( qword_197BC725C < 0x10000 )
        {
          if ( *(&qword_197BC725C + 1) > 0 )
          {
            v67 = qword_197BC725C + 1;
            *(&qword_197BC725C + 1) = v3;
            ++qword_197BC725C;
          }
          *(_DWORD *)&dword_197BC7264[v67] = *(_DWORD *)((char *)&unk_190941A60 + v66);
          v68 = qword_197BC725C + 4;
          qword_197BC725C = v68;
          if ( v68 < 0x10000 )
          {
            if ( *(&qword_197BC725C + 1) > 0 )
            {
              ++v68;
              *(&qword_197BC725C + 1) = v3;
              qword_197BC725C = v68;
            }
            *(_DWORD *)&dword_197BC7264[v68] = dword_190941A64[v66 / 4];
            v69 = qword_197BC725C + 4;
            qword_197BC725C = v69;
            if ( v69 < 0x10000 )
            {
              if ( *(&qword_197BC725C + 1) > 0 )
              {
                ++v69;
                *(&qword_197BC725C + 1) = v3;
                qword_197BC725C = v69;
              }
              *(_DWORD *)&dword_197BC7264[v69] = dword_190941AC0[v66 / 4];
              v70 = qword_197BC725C + 4;
              qword_197BC725C = v70;
              if ( v70 < 0x10000 )
              {
                if ( *(&qword_197BC725C + 1) > 0 )
                {
                  ++v70;
                  *(&qword_197BC725C + 1) = v3;
                  qword_197BC725C = v70;
                }
                *(_DWORD *)&dword_197BC7264[v70] = *(_DWORD *)&algn_190941AC4[v66];
                v71 = qword_197BC725C + 4;
                qword_197BC725C = v71;
                if ( v71 < 0x10000 )
                {
                  if ( *(&qword_197BC725C + 1) > 0 )
                  {
                    ++v71;
                    *(&qword_197BC725C + 1) = v3;
                    qword_197BC725C = v71;
                  }
                  *(_DWORD *)&dword_197BC7264[v71] = *(_DWORD *)((char *)&unk_190941AA0 + v66);
                  qword_197BC725C += 4;
                }
              }
            }
          }
        }
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351883332), 1);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351883328), 8);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351911336), 8);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351911344), 7);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351911348), 4);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351911352), 4);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351911332), 8);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351911192), 7);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351911204), 7);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351911212), 7);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351911220), 7);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351911228), 7);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351911236), 7);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351911244), 7);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351883236), 8);
        sub_1400AFDB0((_DWORD *)(0x140000000LL + v66 + 1351883240), 8);
      }
      v72 = qword_197BC725C;
      if ( qword_197BC725C < 0x10000 )
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          v72 = qword_197BC725C + 1;
          *(&qword_197BC725C + 1) = v3;
          ++qword_197BC725C;
        }
        *(_DWORD *)&dword_197BC7264[v72] = v145;
        v73 = qword_197BC725C + 4;
        qword_197BC725C = v73;
        if ( v73 < 0x10000 )
        {
          if ( *(&qword_197BC725C + 1) > 0 )
          {
            ++v73;
            *(&qword_197BC725C + 1) = v3;
            qword_197BC725C = v73;
          }
          *(_DWORD *)&dword_197BC7264[v73] = HIDWORD(v145);
          v74 = qword_197BC725C + 4;
          qword_197BC725C = v74;
          if ( v74 < 0x10000 )
          {
            if ( *(&qword_197BC725C + 1) > 0 )
            {
              ++v74;
              *(&qword_197BC725C + 1) = v3;
              qword_197BC725C = v74;
            }
            *(_DWORD *)&dword_197BC7264[v74] = v146;
            qword_197BC725C += 4;
          }
        }
      }
      sub_1400AFDB0((char *)&unk_16D67D630 + v61 * 4, 1);
      sub_1400AFDB0(&dword_16D67D704[v61], 8);
      sub_1400AFDB0(&dword_16D67D708[v61], 16);
      if ( dword_16D67D704[v61] == 10 )
      {
        v75 = (int *)(0x140000000LL + 56076LL * dword_16D67D708[v61] + 1135127212);
        sub_1400AFDB0(v75, 8);
        if ( *v75 > 0 )
        {
          v76 = (unsigned int)*v75;
          v77 = (_DWORD *)&qword_183A8AAB0 + 14019 * dword_16D67D708[v61] + 1;
          do
          {
            sub_1400AFDB0(v77 - 1, 8);
            sub_1400AFDB0(v77, 24);
            sub_1400AFDB0(v77 + 1, 4);
            v77 += 3;
            --v76;
          }
          while ( v76 );
        }
      }
      v78 = qword_197BC725C;
      if ( qword_197BC725C < 0x10000 )
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          v78 = qword_197BC725C + 1;
          *(&qword_197BC725C + 1) = v3;
          ++qword_197BC725C;
        }
        *(_DWORD *)&dword_197BC7264[v78] = dword_16D67D5EC[v61];
        v79 = qword_197BC725C + 4;
        qword_197BC725C = v79;
        if ( v79 < 0x10000 )
        {
          if ( *(&qword_197BC725C + 1) > 0 )
          {
            ++v79;
            *(&qword_197BC725C + 1) = v3;
            qword_197BC725C = v79;
          }
          *(_DWORD *)&dword_197BC7264[v79] = dword_16D67D5F0[v61];
          v80 = qword_197BC725C + 4;
          qword_197BC725C = v80;
          if ( v80 < 0x10000 )
          {
            if ( *(&qword_197BC725C + 1) > 0 )
            {
              ++v80;
              *(&qword_197BC725C + 1) = v3;
              qword_197BC725C = v80;
            }
            *(_DWORD *)&dword_197BC7264[v80] = dword_16D67D5F4[v61];
            v81 = qword_197BC725C + 4;
            qword_197BC725C = v81;
            if ( v81 < 0x10000 )
            {
              if ( *(&qword_197BC725C + 1) > 0 )
              {
                ++v81;
                *(&qword_197BC725C + 1) = v3;
                qword_197BC725C = v81;
              }
              *(_DWORD *)&dword_197BC7264[v81] = dword_16D67D5F8[v61];
              v82 = qword_197BC725C + 4;
              qword_197BC725C = v82;
              if ( v82 < 0x10000 )
              {
                if ( *(&qword_197BC725C + 1) > 0 )
                {
                  ++v82;
                  *(&qword_197BC725C + 1) = v3;
                  qword_197BC725C = v82;
                }
                *(_DWORD *)&dword_197BC7264[v82] = dword_16D67D5FC[v61];
                qword_197BC725C += 4;
              }
            }
          }
        }
      }
      sub_1400AFDB0(&dword_16D67D638[v61], 16);
      sub_1400AFDB0((char *)&unk_16D67D754 + v61 * 4, 8);
      sub_1400AFDB0(&dword_16D67EC68[v61], 10);
      sub_1400AFDB0((char *)&unk_16D67EC6C + v61 * 4, 6);
      sub_1400AFDB0((char *)&unk_16D67EC70 + v61 * 4, 8);
      v83 = 7;
      v84 = (int *)((char *)&unk_16D67EC74 + v61 * 4);
      do
      {
        sub_1400AFDB0((char *)&unk_16D67EC74 + v3 + v61 * 4, 4);
        if ( *v84 > 0 )
        {
          v85 = (_DWORD *)((char *)&unk_16D67EC78 + v61 * 4 + v3);
          v86 = (unsigned int)*v84;
          do
          {
            sub_1400AFDB0(v85++, 16);
            --v86;
          }
          while ( v86 );
        }
        v3 += 36;
        v84 += 9;
        --v83;
      }
      while ( v83 );
      sub_1400AFDB0(&dword_16D67F0B4[v61], 8);
      v87 = dword_16D67F0B4[v61];
      if ( v87 > 0 )
      {
        v88 = *(&qword_197BC725C + 1);
        v89 = qword_197BC725C;
        v90 = 0;
        v91 = (unsigned int)v87;
        do
        {
          v92 = v61 * 4 + 72 * v90;
          if ( v89 < 0x10000 )
          {
            if ( v88 > 0 )
            {
              ++v89;
              *(&qword_197BC725C + 1) = 0;
              qword_197BC725C = v89;
            }
            *(_DWORD *)&dword_197BC7264[v89] = *(_DWORD *)((char *)&unk_16D67F0B8 + v92);
            v88 = *(&qword_197BC725C + 1);
            v89 = qword_197BC725C + 4;
            qword_197BC725C += 4;
          }
          v93 = -1;
          do
            ++v93;
          while ( byte_16D67F0BC[v92 + v93] );
          v94 = v93 & 0x3F;
          v95 = 6;
          if ( v89 < 0x10000 )
          {
            v96 = v94;
            while ( 1 )
            {
              dword_197BC7264[v89] &= ~(((1 << v95) - 1) << v88);
              dword_197BC7264[qword_197BC725C] |= (_BYTE)v96 << *((char *)&qword_197BC725C + 4);
              v97 = 8 - *(&qword_197BC725C + 1);
              v89 = qword_197BC725C;
              if ( v95 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
                break;
              v88 = 0;
              *(&qword_197BC725C + 1) = 0;
              if ( v95 == v97 )
              {
                v89 = ++qword_197BC725C;
                goto LABEL_168;
              }
              v89 = qword_197BC725C + 1;
              v96 >>= v97;
              v95 -= v97;
              ++qword_197BC725C;
              if ( v95 <= 0 )
                goto LABEL_168;
            }
            v88 = v95 + *(&qword_197BC725C + 1);
            *(&qword_197BC725C + 1) += v95;
LABEL_168:
            if ( v89 < 0x10000 )
            {
              if ( v88 > 0 )
              {
                ++v89;
                *(&qword_197BC725C + 1) = 0;
                qword_197BC725C = v89;
              }
              memcpy(&dword_197BC7264[v89], &byte_16D67F0BC[v92], v94);
              v88 = *(&qword_197BC725C + 1);
              v89 = v94 + qword_197BC725C;
              qword_197BC725C = v89;
              if ( v89 < 0x10000 )
              {
                if ( *(&qword_197BC725C + 1) > 0 )
                {
                  ++v89;
                  *(&qword_197BC725C + 1) = 0;
                  qword_197BC725C = v89;
                }
                *(_DWORD *)&dword_197BC7264[v89] = *(_DWORD *)&byte_16D67F0BC[v92 + 64];
                v88 = *(&qword_197BC725C + 1);
                v89 = qword_197BC725C + 4;
                qword_197BC725C += 4;
              }
            }
          }
          ++v90;
          --v91;
        }
        while ( v91 );
      }
      sub_1400AFDB0((char *)&unk_16D67D614 + v61 * 4, 8);
      sub_1400AAD20(v147, v35);
      sub_140020930(v147, *(_DWORD *)((char *)&unk_160F29978 + v142));
      v98 = 8;
      v99 = (char *)&unk_160F299C0 + v142;
      v143 = 188896LL * v147;
      v151 = (char *)&unk_160F299C0 + v142;
      v100 = (char *)&unk_160F299C0 + v143;
      v141 = 8;
      v149 = (char *)&unk_160F299C0 + v143;
      do
      {
        sub_1400AFDB0((_DWORD *)v100 - 1, 1);
        if ( !*((_DWORD *)v99 - 1) )
          goto LABEL_194;
        sub_1400AFDB0(v100, 8);
        sub_1400AFDB0((_DWORD *)v100 + 1, 8);
        sub_1400AFDB0((_DWORD *)v100 + 2, 8);
        v101 = *(int *)v99;
        v102 = 131604 * v101;
        v103 = *((_DWORD *)&unk_1417D9BCC + 32901 * v101) & 0x3F;
        *((_DWORD *)&unk_1417D9BCC + 32901 * v101) = v103;
        v104 = ((_BYTE)v103 - 4) & 0x3F;
        if ( (_DWORD)v104 == v103 )
        {
LABEL_194:
          v105 = qword_197BC725C;
        }
        else
        {
          v105 = qword_197BC725C;
          v106 = 32901 * v101;
          do
          {
            v107 = 6;
            if ( v105 < 0x10000 )
            {
              v108 = *((_BYTE *)&qword_197BC725C + 4);
              v109 = v104;
              while ( 1 )
              {
                dword_197BC7264[v105] &= ~(((1 << v107) - 1) << v108);
                dword_197BC7264[qword_197BC725C] |= (_BYTE)v109 << *((char *)&qword_197BC725C + 4);
                v110 = 8 - *(&qword_197BC725C + 1);
                if ( v107 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
                  break;
                *(&qword_197BC725C + 1) = 0;
                if ( v107 == v110 )
                {
                  ++qword_197BC725C;
                  goto LABEL_188;
                }
                v107 -= v110;
                v105 = qword_197BC725C + 1;
                v109 >>= v110;
                ++qword_197BC725C;
                v108 = 0;
                if ( v107 <= 0 )
                  goto LABEL_188;
              }
              *(&qword_197BC725C + 1) += v107;
            }
LABEL_188:
            sub_1400AFDB0(&dword_1417D9CD4[v106 + v104], 11);
            sub_1400AFDB0(&dword_1417D9BD4[v106 + v104], 2);
            v111 = dword_1417D9CD4[v106 + v104];
            v105 = qword_197BC725C;
            if ( qword_197BC725C < 0x10000 )
            {
              if ( *(&qword_197BC725C + 1) > 0 )
              {
                v105 = ++qword_197BC725C;
                *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
              }
              memcpy(
                &dword_197BC7264[v105],
                (char *)&unk_1417D9DD4 + 2048 * (unsigned __int64)(unsigned int)v104 + v102,
                v111);
              v105 = v111 + qword_197BC725C;
              qword_197BC725C += v111;
            }
            v104 = ((_BYTE)v104 + 1) & 0x3F;
          }
          while ( (_DWORD)v104 != v103 );
          v100 = v149;
          v99 = v151;
          v98 = v141;
        }
        v100 += 40;
        v99 += 40;
        --v98;
        v149 = v100;
        v141 = v98;
        v151 = v99;
      }
      while ( v98 );
      v112 = dword_196199564;
      v113 = 16;
      v114 = *(&qword_197BC725C + 1);
      if ( v105 < 0x10000 )
      {
        v115 = (unsigned __int16)dword_196199564;
        while ( 1 )
        {
          dword_197BC7264[v105] &= ~(((1 << v113) - 1) << v114);
          dword_197BC7264[qword_197BC725C] |= (_BYTE)v115 << *((char *)&qword_197BC725C + 4);
          v116 = 8 - *(&qword_197BC725C + 1);
          v105 = qword_197BC725C;
          if ( v113 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
            break;
          v114 = 0;
          *(&qword_197BC725C + 1) = 0;
          if ( v113 == v116 )
          {
            v105 = ++qword_197BC725C;
            goto LABEL_204;
          }
          v105 = qword_197BC725C + 1;
          v115 >>= v116;
          v113 -= v116;
          ++qword_197BC725C;
          if ( v113 <= 0 )
            goto LABEL_204;
        }
        v114 = v113 + *(&qword_197BC725C + 1);
        *(&qword_197BC725C + 1) += v113;
      }
LABEL_204:
      LOBYTE(v98) = 0;
      v117 = *(_DWORD *)((char *)&unk_160F299AC + v142);
      v118 = v112 - v117 + 0x10000;
      if ( v112 >= v117 )
        v118 = v112 - v117;
      if ( v118 > 63 )
        v118 = 63;
      v119 = 6;
      if ( !dword_163D75B40 )
        v118 = 0;
      if ( v105 < 0x10000 )
      {
        v120 = v114;
        v121 = v118 & 0x3F;
        v122 = v105;
        while ( 1 )
        {
          dword_197BC7264[v122] &= ~(((1 << v119) - 1) << v120);
          dword_197BC7264[qword_197BC725C] |= (_BYTE)v121 << *((char *)&qword_197BC725C + 4);
          v123 = 8 - *(&qword_197BC725C + 1);
          if ( v119 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
            break;
          *(&qword_197BC725C + 1) = 0;
          if ( v119 == v123 )
          {
            ++qword_197BC725C;
            goto LABEL_218;
          }
          v119 -= v123;
          v122 = qword_197BC725C + 1;
          v121 >>= v123;
          ++qword_197BC725C;
          v120 = 0;
          if ( v119 <= 0 )
            goto LABEL_218;
        }
        *(&qword_197BC725C + 1) += v119;
      }
LABEL_218:
      v124 = 188896LL * v147;
      sub_1400AFDB0((_DWORD *)(0x140000000LL + v143 + 552769964), 16);
      v15 = v147;
      if ( v118 > 0 )
      {
        v125 = (unsigned int)v118;
        LOBYTE(v98) = v118;
        do
        {
          sub_1400A9010(v117, v147);
          v117 = (unsigned __int16)(v117 + 1);
          --v125;
        }
        while ( v125 );
        v124 = 188896LL * v147;
      }
      v126 = qword_197BC725C;
      v127 = *(&qword_197BC725C + 1);
      v128 = 6;
      *(_DWORD *)((char *)&unk_160F299AC + v142) = v117;
      qword_197BC725C = v105;
      *(&qword_197BC725C + 1) = v114;
      if ( v105 < 0x10000 )
      {
        do
        {
          dword_197BC7264[v105] &= ~(((1 << v128) - 1) << v114);
          dword_197BC7264[qword_197BC725C] |= (_BYTE)v98 << *((char *)&qword_197BC725C + 4);
          v129 = 8 - *(&qword_197BC725C + 1);
          if ( v128 <= (unsigned int)(8 - *(&qword_197BC725C + 1)) )
            break;
          v128 -= v129;
          v105 = qword_197BC725C + 1;
          LODWORD(v98) = (unsigned int)v98 >> v129;
          ++qword_197BC725C;
          LOBYTE(v114) = 0;
          *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
        }
        while ( v128 > 0 );
        v15 = v147;
      }
      qword_197BC725C = v126;
      *(&qword_197BC725C + 1) = v127;
      if ( v126 < 0x10000 )
      {
        if ( v127 > 0 )
          *(_QWORD *)&qword_197BC725C = (unsigned int)++v126;
        *(_DWORD *)&dword_197BC7264[v126] = *(_DWORD *)((char *)&unk_160F57B38 + v124);
        v127 = *(&qword_197BC725C + 1);
        v126 = qword_197BC725C + 4;
        qword_197BC725C += 4;
      }
      ++*(_DWORD *)((char *)&unk_160F57B38 + v142);
      if ( v126 < 0x10000 )
      {
        if ( v127 > 0 )
          *(_QWORD *)&qword_197BC725C = (unsigned int)++v126;
        *(_DWORD *)&dword_197BC7264[v126] = *(_DWORD *)((char *)&unk_160F57B30 + v124);
        v126 = qword_197BC725C + 4;
        qword_197BC725C = v126;
        if ( v126 < 0x10000 )
        {
          if ( *(&qword_197BC725C + 1) > 0 )
          {
            ++v126;
            *(&qword_197BC725C + 1) = 0;
            qword_197BC725C = v126;
          }
          *(_DWORD *)&dword_197BC7264[v126] = *(_DWORD *)((char *)&unk_160F57B34 + v124);
          v126 = qword_197BC725C + 4;
          qword_197BC725C += 4;
        }
      }
      *(_DWORD *)((char *)&unk_160F2997C + v142) += v126;
      v130 = *(_WORD *)((char *)&unk_160F29964 + v142);
      v131 = *(_DWORD *)((char *)&unk_160F29960 + v142);
      dword_163D75B6C = v126;
      sub_1400BC790(v131, v130);
      v3 = 0;
      goto LABEL_238;
    }
    v43 = &qword_1915FC4F4;
    v3 = 3;
    v44 = dword_191541490;
    do
    {
      sub_1400AFDB0(v44, 16);
      sub_1400AFDB0(v43, 16);
      v44 += 5873;
      v43 = (__int64 *)((char *)v43 + 4);
      --v3;
    }
    while ( v3 );
    goto LABEL_64;
  }
LABEL_240:
  v132 = 0;
  v148 = 0;
  if ( dword_163D75B40 > 0 )
  {
    v133 = &unk_160F29968;
    do
    {
      if ( v133[3] && (((unsigned __int8)v132 ^ (unsigned __int8)dword_191541414) & 0x7F) == 0 )
      {
        v134 = &unk_160F23920;
        qmemcpy(dword_197BC7264, "7DFP\t", 5);
        v135 = (char *)&unk_160F23928;
        *(_QWORD *)&qword_197BC725C = 5;
        v136 = 256;
        do
        {
          sub_1400AFDB0((_DWORD *)v135 - 2, 1);
          if ( *v134 )
          {
            v137 = qword_197BC725C;
            if ( qword_197BC725C < 0x10000 )
            {
              if ( *(&qword_197BC725C + 1) > 0 )
              {
                v137 = ++qword_197BC725C;
                *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
              }
              *(_DWORD *)&dword_197BC7264[v137] = *(_DWORD *)v135;
              v138 = qword_197BC725C + 4;
              qword_197BC725C = v138;
              if ( v138 < 0x10000 )
              {
                if ( *(&qword_197BC725C + 1) > 0 )
                {
                  ++v138;
                  *(&qword_197BC725C + 1) = 0;
                  qword_197BC725C = v138;
                }
                v139 = *(_OWORD *)(v135 + 20);
                *(_OWORD *)&dword_197BC7264[v138] = *(_OWORD *)(v135 + 4);
                *(_OWORD *)((char *)&unk_197BC7274 + v138) = v139;
                v140 = qword_197BC725C + 32;
                qword_197BC725C = v140;
                if ( v140 < 0x10000 )
                {
                  if ( *(&qword_197BC725C + 1) > 0 )
                  {
                    ++v140;
                    *(&qword_197BC725C + 1) = 0;
                    qword_197BC725C = v140;
                  }
                  *(_DWORD *)&dword_197BC7264[v140] = *((_DWORD *)v135 + 17);
                  qword_197BC725C += 4;
                }
              }
            }
          }
          v135 += 80;
          v134 += 20;
          --v136;
        }
        while ( v136 );
        sub_1400BC790(*(v133 - 2), *((_WORD *)v133 - 2));
        v132 = v148;
      }
      ++v132;
      v133 += 47224;
      v148 = v132;
    }
    while ( v132 < dword_163D75B40 );
  }
}

