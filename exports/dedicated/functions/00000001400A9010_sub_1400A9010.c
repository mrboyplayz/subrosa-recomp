/* Address: 0x1400a9010 | Name: sub_1400A9010 | Size: 6140 bytes */
__int64 __fastcall sub_1400A9010(int a1, int a2)
{
  __int64 v2; // rbp
  int v3; // r11d
  __int64 v4; // rdi
  int v5; // eax
  int v6; // edx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // rax
  _BYTE *v25; // rsi
  __int64 v26; // rbx
  unsigned int v27; // ebx
  char v28; // r9
  __int64 v29; // r11
  char *v30; // rsi
  int v31; // r8d
  unsigned int v32; // r10d
  int v33; // ecx
  __int64 v34; // rcx
  int *v35; // rax
  float v36; // xmm0_4
  float v37; // xmm3_4
  float v38; // xmm4_4
  float v39; // xmm2_4
  float v40; // xmm7_4
  float v41; // xmm6_4
  int v42; // eax
  float v43; // xmm0_4
  int v44; // r8d
  unsigned int v45; // ebx
  __int64 i; // r11
  int v47; // r9d
  unsigned int v48; // r10d
  int v49; // ecx
  char *v50; // rdx
  _DWORD *v51; // r14
  char *v52; // rbp
  char *v53; // rbx
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // xmm0_8
  __int64 v57; // xmm0_8
  __int64 v58; // rcx
  int v59; // eax
  int v60; // r9d
  char *v61; // r13
  char *v62; // r12
  int v63; // eax
  char *v64; // r15
  _DWORD *v65; // r9
  char *v66; // r10
  char *v67; // r11
  __int64 j; // r11
  int v69; // r9d
  unsigned int v70; // r10d
  int v71; // ecx
  char *v72; // rbp
  __int64 v73; // r15
  __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // r14
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rbp
  int v80; // r14d
  __int64 v81; // rcx
  char *v82; // r9
  __int64 v83; // rcx
  size_t v84; // rbx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // r13
  int v90; // eax
  int v91; // eax
  __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // xmm0_8
  __int64 v95; // rcx
  __int64 v96; // rcx
  char *v97; // [rsp+20h] [rbp-C8h]
  int v98; // [rsp+28h] [rbp-C0h] BYREF
  char *v99; // [rsp+30h] [rbp-B8h]
  char *v100; // [rsp+38h] [rbp-B0h]
  int v101; // [rsp+40h] [rbp-A8h]
  char *v102; // [rsp+48h] [rbp-A0h]
  char *v103; // [rsp+50h] [rbp-98h]
  char *v104; // [rsp+58h] [rbp-90h]
  char *v105; // [rsp+60h] [rbp-88h]
  __int64 v106; // [rsp+68h] [rbp-80h]
  char *v107; // [rsp+70h] [rbp-78h]
  unsigned __int64 v108; // [rsp+78h] [rbp-70h] BYREF
  float v109; // [rsp+80h] [rbp-68h]

  v2 = a2;
  v3 = a1;
  v98 = a1;
  if ( a2 == 255 )
    goto LABEL_19;
  v4 = (__int64)a1 << 7;
  if ( (unsigned int)(dword_191541414 - *(_DWORD *)((char *)&unk_195999564 + v4)) > 0x258 )
  {
    v5 = *(_DWORD *)((char *)&unk_195999560 + v4);
    if ( v5 == 2 )
    {
      if ( ((*(int *)((char *)dword_195999584 + v4) - 3) & 0xFFFFFFFD) != 0 )
        goto LABEL_70;
    }
    else if ( v5 == 9 || v5 == 19 )
    {
      goto LABEL_70;
    }
  }
  v6 = *(_DWORD *)((char *)&unk_195999560 + v4);
  if ( v6 == 2 )
  {
    v7 = *(int *)((char *)dword_195999584 + v4);
    if ( v7 == 4 )
    {
      if ( *((_DWORD *)&unk_160F29974 + 47224 * v2) )
        goto LABEL_11;
LABEL_70:
      v98 = 23;
      return sub_1400AFDB0(&v98, 6);
    }
    if ( v7 == 6 && *((_DWORD *)&unk_160F29978 + 47224 * v2) != *(int *)((char *)dword_195999588 + v4) )
      goto LABEL_70;
  }
  else if ( v6 == 21 )
  {
    if ( *(int *)((char *)&dword_195999580 + v4) == *((_DWORD *)&unk_160F29978 + 47224 * v2) )
      goto LABEL_19;
    goto LABEL_70;
  }
LABEL_11:
  switch ( v6 )
  {
    case 12:
      v8 = *((int *)&unk_160F29978 + 47224 * v2);
      if ( (_DWORD)v8 == -1 )
        break;
      v9 = 3597 * v8;
      v10 = *(int *)((char *)&dword_195999580 + v4) >> 4;
LABEL_31:
      if ( dword_16D67D624[v9] != (v10 & 0xF) )
        goto LABEL_70;
      break;
    case 22:
      v20 = *((int *)&unk_160F29978 + 47224 * v2);
      if ( (_DWORD)v20 == -1 )
        break;
      v10 = *(int *)((char *)&dword_195999580 + v4);
      v9 = 3597 * v20;
      goto LABEL_31;
    case 2:
      v21 = 188896 * v2;
      v22 = *((int *)&unk_160F29978 + 47224 * v2);
      if ( (_DWORD)v22 == -1 || !*((_DWORD *)&unk_16D67D600 + 3597 * v22) )
      {
        v23 = *(int *)((char *)dword_195999584 + v4);
        if ( (unsigned int)(v23 - 1) <= 1 )
        {
          v24 = *(int *)((char *)dword_195999588 + v4);
          if ( (_DWORD)v24 != -1 )
          {
            if ( v23 == 1 )
            {
              if ( (_DWORD)v22 != -1 )
              {
                v25 = (char *)&unk_16D680D78 + 14388 * v22;
                if ( *v25 )
                {
                  if ( dword_16D67D63C[3597 * v22] == (_DWORD)v24 )
                  {
                    sub_1400AFDB0((char *)&unk_195999560 + v4, 6);
                    sub_1400AFDB0((char *)&unk_195999564 + v4, 28);
                    v26 = -1;
                    do
                      ++v26;
                    while ( v25[v26] );
                    v98 = v26;
                    sub_1400AFDB0(&v98, 6);
                    sub_1400AFDB0((char *)dword_195999584 + v4, 4);
                    sub_1400AFDB0((char *)dword_195999588 + v4, 10);
                    result = sub_1400AFDB0((char *)&unk_19599958C + v4, 4);
                    v27 = v26 & 0x3F;
                    if ( v27 )
                    {
                      v28 = *((_BYTE *)&qword_197BC725C + 4);
                      v29 = 0;
                      result = (unsigned int)qword_197BC725C;
                      v30 = (char *)&unk_16D680D78 + 14388 * *((int *)&unk_160F29978 + 47224 * v2);
                      do
                      {
                        v31 = 7;
                        v32 = v30[v29] & 0x7F;
                        if ( (int)result < 0x10000 )
                        {
                          while ( 1 )
                          {
                            dword_197BC7264[(int)result] &= ~(((1 << v31) - 1) << v28);
                            dword_197BC7264[qword_197BC725C] |= (_BYTE)v32 << *((char *)&qword_197BC725C + 4);
                            v33 = 8 - *(&qword_197BC725C + 1);
                            result = (unsigned int)qword_197BC725C;
                            if ( v31 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
                              break;
                            v28 = 0;
                            *(&qword_197BC725C + 1) = 0;
                            if ( v31 == v33 )
                            {
                              result = (unsigned int)++qword_197BC725C;
                              goto LABEL_53;
                            }
                            result = (unsigned int)(qword_197BC725C + 1);
                            v32 >>= v33;
                            v31 -= v33;
                            ++qword_197BC725C;
                            if ( v31 <= 0 )
                              goto LABEL_53;
                          }
                          v28 = v31 + *((_BYTE *)&qword_197BC725C + 4);
                          *(&qword_197BC725C + 1) += v31;
                        }
LABEL_53:
                        ++v29;
                      }
                      while ( v29 < v27 );
                    }
                    return result;
                  }
                }
              }
              v34 = 7166 * v24;
              v35 = dword_190941F94;
            }
            else
            {
              v34 = 1760 * v24;
              v35 = dword_19025F11C;
            }
            LODWORD(v36) = v35[v34];
            LODWORD(v37) = v35[v34 + 1];
            v38 = *(float *)&v35[v34 + 2];
            v108 = __PAIR64__(LODWORD(v37), LODWORD(v36));
            v109 = v38;
            v39 = (float)((float)((float)(*(float *)((char *)&unk_160F4970C + v21 + 4) - v37)
                                * (float)(*(float *)((char *)&unk_160F4970C + v21 + 4) - v37))
                        + (float)((float)(*(float *)((char *)&unk_160F4970C + v21) - v36)
                                * (float)(*(float *)((char *)&unk_160F4970C + v21) - v36)))
                + (float)((float)(*(float *)((char *)&unk_160F4970C + v21 + 8) - v38)
                        * (float)(*(float *)((char *)&unk_160F4970C + v21 + 8) - v38));
            v40 = fsqrt(v39);
            if ( v39 <= 16384.0 )
            {
              v41 = 1.0;
              if ( (unsigned int)sub_1400828D0((float *)&v108, (float *)((char *)&unk_160F4970C + v21), 0) )
                v41 = 0.5;
              v3 = v98;
            }
            else
            {
              v41 = 0.5;
            }
            v42 = *(_DWORD *)((char *)&unk_19599958C + v4);
            v43 = 64.0;
            if ( v42 )
            {
              if ( v42 == 2 )
                v43 = 128.0;
            }
            else
            {
              v43 = 8.0;
            }
            if ( *(int *)((char *)dword_195999584 + v4) == 2 )
              v43 = 2.0;
            if ( v40 > (float)(v43 * v41) )
              goto LABEL_70;
          }
        }
      }
      break;
  }
LABEL_19:
  v11 = v3;
  v106 = v3;
  v12 = (__int64)v3 << 7;
  sub_1400AFDB0((char *)&unk_195999560 + v12, 6);
  sub_1400AFDB0((char *)&unk_195999564 + v12, 28);
  v13 = *(_DWORD *)((char *)&unk_195999560 + v12);
  v101 = v13;
  if ( !v13 )
  {
    sub_1400AFDB0((char *)&dword_195999580 + v12, 4);
    v14 = 10;
    goto LABEL_21;
  }
  if ( v13 == 1 )
  {
    sub_1400AFDB0((char *)&dword_195999580 + v12, 4);
    v14 = 6;
LABEL_21:
    sub_1400AFDB0((char *)dword_195999584 + v12, v14);
    result = (unsigned int)qword_197BC725C;
    if ( qword_197BC725C < 0x10000 )
    {
      if ( *(&qword_197BC725C + 1) > 0 )
      {
        LODWORD(result) = ++qword_197BC725C;
        *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
      }
      v16 = (int)result;
      v17 = *(int *)((char *)&dword_195999570 + v12);
      *(_QWORD *)&dword_197BC7264[v16] = *(__int64 *)((char *)&qword_195999568 + v12);
      *(int *)((char *)&dword_197BC7269 + v16 + 3) = v17;
      result = (unsigned int)(qword_197BC725C + 12);
      qword_197BC725C = result;
      if ( (int)result < 0x10000 )
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        v18 = (int)result;
        v19 = *(int *)((char *)&dword_19599957C + v12);
        *(_QWORD *)&dword_197BC7264[v18] = *(__int64 *)((char *)&qword_195999574 + v12);
        *(int *)((char *)&dword_197BC7269 + v18 + 3) = v19;
        result = (unsigned int)(qword_197BC725C + 12);
        qword_197BC725C += 12;
      }
    }
LABEL_88:
    v44 = *(&qword_197BC725C + 1);
    goto LABEL_89;
  }
  if ( v13 != 2 )
  {
    if ( v13 == 3 )
    {
      v102 = (char *)&dword_195999580 + v12;
      sub_1400AFDB0((char *)&dword_195999580 + v12, 10);
      v100 = (char *)dword_195999584 + v12;
      sub_1400AFDB0((char *)dword_195999584 + v12, 8);
      sub_1400AFDB0((char *)dword_195999588 + v12, 4);
      v44 = *(&qword_197BC725C + 1);
      v50 = (char *)&dword_195999580 + v12;
      result = (unsigned int)qword_197BC725C;
      v51 = (int *)((char *)dword_195999584 + v12);
      v104 = (char *)dword_195999584 + v12;
      v52 = (char *)&dword_195999580 + v12;
      v99 = (char *)&dword_195999580 + v12;
      v53 = (char *)&dword_195999580 + v12;
      v105 = (char *)&dword_195999580 + v12;
      goto LABEL_106;
    }
    result = (unsigned int)qword_197BC725C;
    goto LABEL_88;
  }
  sub_1400AFDB0((char *)&dword_195999580 + v12, 6);
  sub_1400AFDB0((char *)dword_195999584 + v12, 4);
  sub_1400AFDB0((char *)dword_195999588 + v12, 10);
  sub_1400AFDB0((char *)&unk_19599958C + v12, 4);
  v44 = *(&qword_197BC725C + 1);
  result = (unsigned int)qword_197BC725C;
  v45 = *(int *)((char *)&dword_195999580 + v12) & 0x3F;
  if ( v45 )
  {
    for ( i = 0; i < v45; ++i )
    {
      v47 = 7;
      v48 = byte_1959995A0[v12 + i] & 0x7F;
      if ( (int)result < 0x10000 )
      {
        while ( 1 )
        {
          dword_197BC7264[(int)result] &= ~(((1 << v47) - 1) << v44);
          dword_197BC7264[qword_197BC725C] |= (_BYTE)v48 << *((char *)&qword_197BC725C + 4);
          v49 = 8 - *(&qword_197BC725C + 1);
          result = (unsigned int)qword_197BC725C;
          if ( v47 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
            break;
          v44 = 0;
          *(&qword_197BC725C + 1) = 0;
          if ( v47 == v49 )
          {
            result = (unsigned int)++qword_197BC725C;
            goto LABEL_83;
          }
          result = (unsigned int)(qword_197BC725C + 1);
          v48 >>= v49;
          v47 -= v49;
          ++qword_197BC725C;
          if ( v47 <= 0 )
            goto LABEL_83;
        }
        v44 = v47 + *(&qword_197BC725C + 1);
        *(&qword_197BC725C + 1) += v47;
      }
LABEL_83:
      ;
    }
  }
LABEL_89:
  v50 = (char *)&dword_195999580 + v12;
  v99 = (char *)&dword_195999580 + v12;
  v100 = (char *)dword_195999584 + v12;
  v104 = (char *)dword_195999584 + v12;
  v105 = (char *)&dword_195999580 + v12;
  v51 = (int *)((char *)dword_195999584 + v12);
  v102 = (char *)&dword_195999580 + v12;
  v52 = (char *)&dword_195999580 + v12;
  v53 = (char *)&dword_195999580 + v12;
  if ( v101 == 4 )
  {
    sub_1400AFDB0((char *)&dword_195999580 + v12, 10);
    sub_1400AFDB0((char *)dword_195999584 + v12, 4);
    sub_1400AFDB0((char *)dword_195999588 + v12, 10);
    result = (unsigned int)qword_197BC725C;
    v50 = (char *)&dword_195999580 + v12;
    v102 = (char *)&dword_195999580 + v12;
    if ( qword_197BC725C < 0x10000 )
    {
      if ( *(&qword_197BC725C + 1) > 0 )
      {
        LODWORD(result) = ++qword_197BC725C;
        *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
      }
      v54 = (int)result;
      v55 = *(int *)((char *)&dword_195999570 + v12);
      v56 = *(__int64 *)((char *)&qword_195999568 + v12);
      v102 = (char *)&dword_195999580 + v12;
      *(_QWORD *)&dword_197BC7264[v54] = v56;
      *(int *)((char *)&dword_197BC7269 + v54 + 3) = v55;
      result = (unsigned int)(qword_197BC725C + 12);
      qword_197BC725C = result;
      if ( (int)result < 0x10000 )
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        v57 = *(__int64 *)((char *)&qword_195999574 + v12);
        v58 = (int)result;
        v59 = *(int *)((char *)&dword_19599957C + v12);
        v102 = (char *)&dword_195999580 + v12;
        *(_QWORD *)&dword_197BC7264[v58] = v57;
        *(int *)((char *)&dword_197BC7269 + v58 + 3) = v59;
        result = (unsigned int)(qword_197BC725C + 12);
        qword_197BC725C += 12;
      }
    }
    v44 = *(&qword_197BC725C + 1);
  }
  else
  {
    if ( v101 == 5 )
    {
      sub_1400AFDB0((char *)&dword_195999580 + v12, 20);
      sub_1400AFDB0((char *)dword_195999584 + v12, 10);
      sub_1400AFDB0((char *)dword_195999588 + v12, 10);
      v97 = (char *)&unk_19599958C + v12;
      sub_1400AFDB0((char *)&unk_19599958C + v12, 4);
      v44 = *(&qword_197BC725C + 1);
      v60 = 5;
      v103 = (char *)dword_195999588 + v12;
      result = (unsigned int)qword_197BC725C;
      v50 = (char *)&dword_195999580 + v12;
      v102 = (char *)&dword_195999580 + v12;
      goto LABEL_100;
    }
    v53 = (char *)&dword_195999580 + v12;
  }
LABEL_106:
  v60 = v101;
  v64 = (char *)dword_195999588 + v12;
  v97 = (char *)&unk_19599958C + v12;
  v103 = (char *)dword_195999588 + v12;
  if ( v101 != 6 )
  {
LABEL_100:
    v61 = v50;
    v62 = v104;
    v107 = v97;
    v108 = (unsigned __int64)v100;
    if ( v60 == 7 )
    {
      sub_1400AFDB0(v52, 16);
      sub_1400AFDB0(v51, 10);
      v63 = qword_197BC725C;
      if ( qword_197BC725C >= 0x10000 )
      {
        v64 = v103;
      }
      else
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          v63 = ++qword_197BC725C;
          *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
        }
        v64 = v103;
        *(_DWORD *)&dword_197BC7264[v63] = *(_DWORD *)v103;
        qword_197BC725C += 4;
      }
      sub_1400AFDB0(v97, 24);
      v44 = *(&qword_197BC725C + 1);
      result = (unsigned int)qword_197BC725C;
      for ( j = 0; j < 31; ++j )
      {
        v69 = 7;
        v70 = byte_1959995A0[v12 + j] & 0x7F;
        if ( (int)result < 0x10000 )
        {
          while ( 1 )
          {
            dword_197BC7264[(int)result] &= ~(((1 << v69) - 1) << v44);
            dword_197BC7264[qword_197BC725C] |= (_BYTE)v70 << *((char *)&qword_197BC725C + 4);
            v71 = 8 - *(&qword_197BC725C + 1);
            result = (unsigned int)qword_197BC725C;
            if ( v69 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
              break;
            v44 = 0;
            *(&qword_197BC725C + 1) = 0;
            if ( v69 == v71 )
            {
              result = (unsigned int)++qword_197BC725C;
              goto LABEL_117;
            }
            result = (unsigned int)(qword_197BC725C + 1);
            v70 >>= v71;
            v69 -= v71;
            ++qword_197BC725C;
            if ( v69 <= 0 )
              goto LABEL_117;
          }
          v44 = v69 + *(&qword_197BC725C + 1);
          *(&qword_197BC725C + 1) += v69;
        }
LABEL_117:
        ;
      }
      v65 = v102;
      v66 = v99;
      v67 = v105;
LABEL_156:
      v11 = v106;
      goto LABEL_157;
    }
    v66 = v50;
    v67 = v105;
    v99 = v50;
    switch ( v101 )
    {
      case 17:
        sub_1400AFDB0(v52, 10);
        sub_1400AFDB0(v51, 1);
        sub_1400AFDB0(v103, 8);
        v66 = v61;
        v65 = v102;
        v67 = v105;
        v72 = (char *)v108;
        v44 = *(&qword_197BC725C + 1);
        v11 = v106;
        v64 = v103;
        v97 = v107;
        result = (unsigned int)qword_197BC725C;
        goto LABEL_158;
      case 8:
        v11 = v106;
        v73 = v106 << 7;
        sub_1400AFDB0(v52, 8);
        result = (unsigned int)qword_197BC725C;
        v65 = v53;
        if ( qword_197BC725C >= 0x10000 )
          goto LABEL_133;
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = ++qword_197BC725C;
          *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
        }
        *(_DWORD *)&dword_197BC7264[(int)result] = *v51;
        result = (unsigned int)(qword_197BC725C + 4);
        qword_197BC725C = result;
        if ( (int)result >= 0x10000 )
          goto LABEL_133;
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        *(_DWORD *)&dword_197BC7264[(int)result] = *(_DWORD *)v103;
        result = (unsigned int)(qword_197BC725C + 4);
        qword_197BC725C = result;
        if ( (int)result >= 0x10000 )
          goto LABEL_133;
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        v74 = (int)result;
        v75 = *(_DWORD *)((char *)&unk_19599958C + v73);
        break;
      case 9:
        v11 = v106;
        v76 = v106 << 7;
        sub_1400AFDB0(v52, 8);
        result = (unsigned int)qword_197BC725C;
        v65 = v53;
        if ( qword_197BC725C >= 0x10000 )
          goto LABEL_133;
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = ++qword_197BC725C;
          *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
        }
        v77 = (int)result;
        v78 = *(int *)((char *)&dword_195999570 + v76);
        *(_QWORD *)&dword_197BC7264[v77] = *(__int64 *)((char *)&qword_195999568 + v76);
        *(int *)((char *)&dword_197BC7269 + v77 + 3) = v78;
        result = (unsigned int)(qword_197BC725C + 12);
        qword_197BC725C = result;
        if ( (int)result >= 0x10000 )
          goto LABEL_133;
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        *(_DWORD *)&dword_197BC7264[(int)result] = *(int *)((char *)dword_195999590 + v76);
        result = (unsigned int)(qword_197BC725C + 4);
        qword_197BC725C = result;
        if ( (int)result >= 0x10000 )
          goto LABEL_133;
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        v74 = (int)result;
        v75 = *(int *)((char *)&dword_195999594 + v76);
        break;
      default:
        v65 = v53;
        if ( v101 != 19 )
        {
          if ( v101 == 10 )
          {
            sub_1400AFDB0(v105, 8);
            return sub_1400AFDB0(v51, 1);
          }
          v64 = v103;
          goto LABEL_156;
        }
        v11 = v106;
        v79 = v106 << 7;
        sub_1400AFDB0(v105, 8);
        sub_1400AFDB0(v51, 16);
        result = (unsigned int)qword_197BC725C;
        v65 = v53;
        if ( qword_197BC725C >= 0x10000 )
          goto LABEL_133;
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = ++qword_197BC725C;
          *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
        }
        *(_DWORD *)&dword_197BC7264[(int)result] = dword_195999590[32 * v106];
        result = (unsigned int)(qword_197BC725C + 4);
        qword_197BC725C = result;
        if ( (int)result >= 0x10000 )
        {
LABEL_133:
          v44 = *(&qword_197BC725C + 1);
          v64 = v103;
          v66 = v99;
          v67 = v105;
          goto LABEL_157;
        }
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        v74 = (int)result;
        v75 = *(int *)((char *)&dword_195999594 + v79);
        break;
    }
    *(_DWORD *)&dword_197BC7264[v74] = v75;
    result = (unsigned int)(qword_197BC725C + 4);
    qword_197BC725C += 4;
    goto LABEL_133;
  }
  sub_1400AFDB0(v52, 10);
  sub_1400AFDB0(v51, 3);
  sub_1400AFDB0((char *)dword_195999588 + v12, 16);
  sub_1400AFDB0(v97, 2);
  v44 = *(&qword_197BC725C + 1);
  result = (unsigned int)qword_197BC725C;
  v65 = v102;
  v66 = v99;
  v67 = v105;
  v62 = v104;
LABEL_157:
  v72 = v100;
LABEL_158:
  v80 = v101;
  switch ( v101 )
  {
    case 11:
      if ( (int)result < 0x10000 )
      {
        if ( v44 > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        *(_DWORD *)&dword_197BC7264[(int)result] = *(int *)((char *)&dword_195999580 + v12);
        result = (unsigned int)(qword_197BC725C + 4);
        qword_197BC725C = result;
        if ( (int)result < 0x10000 )
        {
          if ( *(&qword_197BC725C + 1) > 0 )
          {
            LODWORD(result) = result + 1;
            *(&qword_197BC725C + 1) = 0;
            qword_197BC725C = result;
          }
          *(_DWORD *)&dword_197BC7264[(int)result] = *(int *)((char *)dword_195999584 + v12);
          result = (unsigned int)(qword_197BC725C + 4);
          qword_197BC725C = result;
          if ( (int)result < 0x10000 )
          {
            if ( *(&qword_197BC725C + 1) > 0 )
            {
              LODWORD(result) = result + 1;
              *(&qword_197BC725C + 1) = 0;
              qword_197BC725C = result;
            }
            *(_DWORD *)&dword_197BC7264[(int)result] = *(int *)((char *)dword_195999588 + v12);
            result = (unsigned int)(qword_197BC725C + 4);
            qword_197BC725C = result;
            if ( (int)result < 0x10000 )
            {
              if ( *(&qword_197BC725C + 1) > 0 )
              {
                *(&qword_197BC725C + 1) = 0;
                qword_197BC725C = result + 1;
                v81 = (int)result + 1;
                result = *(unsigned int *)((char *)&unk_19599958C + v12);
                *(_DWORD *)&dword_197BC7264[v81] = result;
                qword_197BC725C += 4;
                return result;
              }
              goto LABEL_184;
            }
          }
        }
        v82 = v97;
LABEL_210:
        v44 = *(&qword_197BC725C + 1);
        goto LABEL_228;
      }
      break;
    case 12:
      v82 = v97;
      if ( (int)result >= 0x10000 )
        goto LABEL_228;
      if ( v44 > 0 )
      {
        LODWORD(result) = result + 1;
        *(&qword_197BC725C + 1) = 0;
        qword_197BC725C = result;
      }
      *(_DWORD *)&dword_197BC7264[(int)result] = *(int *)((char *)&dword_195999580 + v12);
      result = (unsigned int)(qword_197BC725C + 4);
      qword_197BC725C = result;
      if ( (int)result < 0x10000 )
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        *(_DWORD *)&dword_197BC7264[(int)result] = *(int *)((char *)dword_195999584 + v12);
        result = (unsigned int)(qword_197BC725C + 4);
        qword_197BC725C = result;
        if ( (int)result < 0x10000 )
        {
          if ( *(&qword_197BC725C + 1) > 0 )
          {
            LODWORD(result) = result + 1;
            *(&qword_197BC725C + 1) = 0;
            qword_197BC725C = result;
          }
          *(_DWORD *)&dword_197BC7264[(int)result] = *(int *)((char *)dword_195999588 + v12);
          result = (unsigned int)(qword_197BC725C + 4);
          qword_197BC725C = result;
          if ( (int)result < 0x10000 )
          {
            if ( *(&qword_197BC725C + 1) > 0 )
            {
              LODWORD(result) = result + 1;
              *(&qword_197BC725C + 1) = 0;
              qword_197BC725C = result;
            }
LABEL_184:
            v83 = (int)result;
            result = *(unsigned int *)((char *)&unk_19599958C + v12);
            *(_DWORD *)&dword_197BC7264[v83] = result;
            qword_197BC725C += 4;
            return result;
          }
        }
      }
      goto LABEL_210;
    case 22:
      sub_1400AFDB0(v67, 16);
      sub_1400AFDB0(v62, 6);
      sub_1400AFDB0(v64, 7);
      result = (unsigned int)qword_197BC725C;
      v84 = *(int *)((char *)dword_195999588 + v12);
      if ( qword_197BC725C < 0x10000 )
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = ++qword_197BC725C;
          *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
        }
        result = (__int64)memcpy(&dword_197BC7264[(int)result], &byte_1959995A0[v12], v84);
        qword_197BC725C += v84;
        return result;
      }
      v82 = v97;
      v44 = *(&qword_197BC725C + 1);
      goto LABEL_228;
    case 21:
      sub_1400AFDB0(v66, 10);
      sub_1400AFDB0(v72, 4);
      sub_1400AFDB0(v64, 4);
      sub_1400AFDB0(v97, 30);
      result = (unsigned int)qword_197BC725C;
      if ( qword_197BC725C < 0x10000 )
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = ++qword_197BC725C;
          *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
        }
        v85 = (int)result;
        result = *(unsigned int *)((char *)&dword_195999570 + v12);
        *(_QWORD *)&dword_197BC7264[v85] = *(__int64 *)((char *)&qword_195999568 + v12);
        *(int *)((char *)&dword_197BC7269 + v85 + 3) = result;
        goto LABEL_263;
      }
      goto LABEL_207;
    case 13:
      if ( (int)result < 0x10000 )
      {
        if ( v44 > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        *(_DWORD *)&dword_197BC7264[(int)result] = *(int *)((char *)&dword_195999580 + v12);
        v44 = *(&qword_197BC725C + 1);
        result = (unsigned int)(qword_197BC725C + 4);
        qword_197BC725C += 4;
      }
      v86 = v98;
      if ( (int)result >= 0x10000 )
      {
        v82 = v97;
        goto LABEL_228;
      }
      if ( v44 > 0 )
      {
        LODWORD(result) = result + 1;
        *(&qword_197BC725C + 1) = 0;
        qword_197BC725C = result;
      }
      *(_DWORD *)&dword_197BC7264[(int)result] = *(int *)((char *)dword_195999584 + v12);
      result = (unsigned int)(qword_197BC725C + 4);
      qword_197BC725C = result;
      if ( (int)result < 0x10000 )
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        v87 = (int)result;
        result = (unsigned int)dword_195999588[32 * v86];
        *(_DWORD *)&dword_197BC7264[v87] = result;
        qword_197BC725C += 4;
        return result;
      }
LABEL_207:
      v44 = *(&qword_197BC725C + 1);
      v82 = v97;
      goto LABEL_228;
    case 14:
      sub_1400AFDB0((char *)&dword_195999580 + v12, 8);
      sub_1400AFDB0((char *)dword_195999584 + v12, 8);
      sub_1400AFDB0(v64, 8);
      return sub_1400AFDB0((char *)&unk_19599958C + v12, 20);
    case 15:
      if ( (int)result < 0x10000 )
      {
        if ( v44 > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        *(_DWORD *)&dword_197BC7264[(int)result] = *v65;
        v44 = *(&qword_197BC725C + 1);
        LODWORD(result) = qword_197BC725C + 4;
        qword_197BC725C += 4;
      }
      if ( (int)result < 0x10000 )
      {
        if ( v44 > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        *(_DWORD *)&dword_197BC7264[(int)result] = dword_195999584[32 * v11];
        v88 = qword_197BC725C + 4;
        qword_197BC725C = v88;
        if ( v88 < 0x10000 )
        {
          if ( *(&qword_197BC725C + 1) > 0 )
          {
            ++v88;
            *(&qword_197BC725C + 1) = 0;
            qword_197BC725C = v88;
          }
          *(_DWORD *)&dword_197BC7264[v88] = *(int *)((char *)dword_195999588 + v12);
          qword_197BC725C += 4;
        }
      }
      return sub_1400AFDB0(v97, 2);
  }
  v82 = v97;
LABEL_228:
  v89 = v11 << 7;
  switch ( v80 )
  {
    case 16:
      if ( (int)result < 0x10000 )
      {
        if ( v44 > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        *(_DWORD *)&dword_197BC7264[(int)result] = *(int *)((char *)&dword_195999580 + v89);
        v90 = qword_197BC725C + 4;
        qword_197BC725C = v90;
        if ( v90 < 0x10000 )
        {
          if ( *(&qword_197BC725C + 1) > 0 )
          {
            ++v90;
            *(&qword_197BC725C + 1) = 0;
            qword_197BC725C = v90;
          }
          *(_DWORD *)&dword_197BC7264[v90] = *(int *)((char *)dword_195999584 + v89);
          v91 = qword_197BC725C + 4;
          qword_197BC725C = v91;
          if ( v91 < 0x10000 )
          {
            if ( *(&qword_197BC725C + 1) > 0 )
            {
              ++v91;
              *(&qword_197BC725C + 1) = 0;
              qword_197BC725C = v91;
            }
            *(_DWORD *)&dword_197BC7264[v91] = *(int *)((char *)dword_195999588 + v89);
            qword_197BC725C += 4;
          }
        }
      }
      sub_1400AFDB0(v82, 10);
      result = (unsigned int)qword_197BC725C;
      if ( qword_197BC725C < 0x10000 )
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = ++qword_197BC725C;
          *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
        }
        v92 = (int)result;
        v93 = *(int *)((char *)&dword_195999570 + v89);
        *(_QWORD *)&dword_197BC7264[v92] = *(__int64 *)((char *)&qword_195999568 + v89);
        *(int *)((char *)&dword_197BC7269 + v92 + 3) = v93;
        result = (unsigned int)(qword_197BC725C + 12);
        qword_197BC725C = result;
        if ( (int)result < 0x10000 )
        {
          if ( *(&qword_197BC725C + 1) > 0 )
          {
            LODWORD(result) = result + 1;
            *(&qword_197BC725C + 1) = 0;
            qword_197BC725C = result;
          }
          v94 = *(__int64 *)((char *)&qword_195999574 + v89);
          v95 = (int)result;
          result = *(unsigned int *)((char *)&dword_19599957C + v89);
LABEL_262:
          *(_QWORD *)&dword_197BC7264[v95] = v94;
          *(int *)((char *)&dword_197BC7269 + v95 + 3) = result;
LABEL_263:
          qword_197BC725C += 12;
        }
      }
      break;
    case 18:
      if ( (int)result < 0x10000 )
      {
        if ( v44 > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        *(_DWORD *)&dword_197BC7264[(int)result] = *(int *)((char *)&dword_195999580 + v89);
        result = (unsigned int)(qword_197BC725C + 4);
        qword_197BC725C = result;
        if ( (int)result < 0x10000 )
        {
          if ( *(&qword_197BC725C + 1) > 0 )
          {
            LODWORD(result) = result + 1;
            *(&qword_197BC725C + 1) = 0;
            qword_197BC725C = result;
          }
          *(_DWORD *)&dword_197BC7264[(int)result] = *(int *)((char *)dword_195999584 + v89);
          result = (unsigned int)(qword_197BC725C + 4);
          qword_197BC725C = result;
          if ( (int)result < 0x10000 )
          {
            if ( *(&qword_197BC725C + 1) > 0 )
            {
              LODWORD(result) = result + 1;
              *(&qword_197BC725C + 1) = 0;
              qword_197BC725C = result;
            }
            v96 = (int)result;
            result = *(unsigned int *)((char *)dword_195999588 + v89);
            *(_DWORD *)&dword_197BC7264[v96] = result;
            qword_197BC725C += 4;
          }
        }
      }
      break;
    case 20:
      sub_1400AFDB0((char *)&dword_195999580 + v89, 8);
      result = (unsigned int)qword_197BC725C;
      if ( qword_197BC725C < 0x10000 )
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = ++qword_197BC725C;
          *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
        }
        v94 = *(__int64 *)((char *)&qword_195999568 + v89);
        v95 = (int)result;
        result = *(unsigned int *)((char *)&dword_195999570 + v89);
        goto LABEL_262;
      }
      break;
  }
  return result;
}

