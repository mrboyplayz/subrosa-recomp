/* Address: 0x14010eff0 | Name: sub_14010EFF0 | Size: 6140 bytes */
__int64 __fastcall sub_14010EFF0(int a1, int a2)
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
  signed int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // rax
  unsigned int *v25; // rsi
  __int64 v26; // rbx
  unsigned int v27; // ebx
  char v28; // r9
  __int64 v29; // r11
  signed int v30; // eax
  unsigned int *v31; // rsi
  signed int v32; // r8d
  unsigned int v33; // r10d
  unsigned int v34; // ecx
  __int64 v35; // rcx
  unsigned int *v36; // rax
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm4_4
  float v40; // xmm2_4
  float v41; // xmm7_4
  float v42; // xmm6_4
  int v43; // eax
  float v44; // xmm0_4
  int v45; // r8d
  unsigned int v46; // ebx
  __int64 i; // r11
  signed int v48; // r9d
  unsigned int v49; // r10d
  unsigned int v50; // ecx
  char *v51; // rdx
  unsigned int *v52; // r14
  char *v53; // rbp
  unsigned int *v54; // rbx
  __int64 v55; // rcx
  unsigned int v56; // eax
  __int64 v57; // xmm0_8
  __int64 v58; // xmm0_8
  __int64 v59; // rcx
  unsigned int v60; // eax
  int v61; // r9d
  char *v62; // r13
  char *v63; // r12
  signed int v64; // eax
  unsigned int *v65; // r15
  unsigned int *v66; // r9
  char *v67; // r10
  char *v68; // r11
  __int64 j; // r11
  signed int v70; // r9d
  unsigned int v71; // r10d
  unsigned int v72; // ecx
  char *v73; // rbp
  __int64 v74; // r15
  __int64 v75; // rcx
  unsigned int v76; // eax
  __int64 v77; // r14
  __int64 v78; // rcx
  unsigned int v79; // eax
  __int64 v80; // rbp
  int v81; // r14d
  char *v82; // rdx
  char *v83; // rbx
  char *v84; // r9
  int v85; // ebx
  __int64 v86; // rcx
  unsigned int v87; // eax
  __int64 v88; // rdx
  signed int v89; // eax
  __int64 v90; // r13
  signed int v91; // eax
  signed int v92; // eax
  signed int v93; // eax
  __int64 v94; // rcx
  unsigned int v95; // eax
  signed int v96; // eax
  __int64 v97; // xmm0_8
  __int64 v98; // rcx
  unsigned int v99; // eax
  signed int v100; // eax
  signed int v101; // eax
  signed int v102; // eax
  __int64 v104; // [rsp+0h] [rbp-E8h] BYREF
  char *v105; // [rsp+20h] [rbp-C8h]
  int v106; // [rsp+28h] [rbp-C0h] BYREF
  char *v107; // [rsp+30h] [rbp-B8h]
  char *v108; // [rsp+38h] [rbp-B0h]
  int v109; // [rsp+40h] [rbp-A8h]
  unsigned int *v110; // [rsp+48h] [rbp-A0h]
  unsigned int *v111; // [rsp+50h] [rbp-98h]
  char *v112; // [rsp+58h] [rbp-90h]
  char *v113; // [rsp+60h] [rbp-88h]
  __int64 v114; // [rsp+68h] [rbp-80h]
  char *v115; // [rsp+70h] [rbp-78h]
  unsigned __int64 v116; // [rsp+78h] [rbp-70h] BYREF
  float v117; // [rsp+80h] [rbp-68h]
  __int64 v118; // [rsp+88h] [rbp-60h]

  v2 = a2;
  v3 = a1;
  v106 = a1;
  if ( a2 == 255 )
    goto LABEL_19;
  v4 = (__int64)a1 << 7;
  if ( dword_140404A6C[283831474] - *(unsigned int *)((char *)&dword_140404A6C[297756286] + v4) > 0x258 )
  {
    v5 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v4);
    if ( v5 == 2 )
    {
      if ( ((*(unsigned int *)((char *)&dword_140404A6C[297756294] + v4) - 3) & 0xFFFFFFFD) != 0 )
        goto LABEL_70;
    }
    else if ( v5 == 9 || v5 == 19 )
    {
      goto LABEL_70;
    }
  }
  v6 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v4);
  if ( v6 == 2 )
  {
    v7 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v4);
    if ( v7 == 4 )
    {
      if ( dword_140404A6C[47224 * v2 + 438887410] )
        goto LABEL_11;
LABEL_70:
      v106 = 23;
      sub_140115D90(&v106, 6);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v104 ^ v118);
    }
    if ( v7 == 6
      && dword_140404A6C[47224 * v2 + 438887411] != *(unsigned int *)((char *)&dword_140404A6C[297756295] + v4) )
    {
      goto LABEL_70;
    }
  }
  else if ( v6 == 21 )
  {
    if ( *(unsigned int *)((char *)&dword_140404A6C[297756293] + v4) == dword_140404A6C[47224 * v2 + 438887411] )
      goto LABEL_19;
    goto LABEL_70;
  }
LABEL_11:
  switch ( v6 )
  {
    case 12:
      v8 = (int)dword_140404A6C[47224 * v2 + 438887411];
      if ( (_DWORD)v8 == -1 )
        break;
      v9 = 3597 * v8;
      v10 = *(int *)((char *)&dword_140404A6C[297756293] + v4) >> 4;
LABEL_31:
      if ( dword_140404A6C[v9 + 71856286] != (v10 & 0xF) )
        goto LABEL_70;
      break;
    case 22:
      v20 = (int)dword_140404A6C[47224 * v2 + 438887411];
      if ( (_DWORD)v20 == -1 )
        break;
      v10 = *(unsigned int *)((char *)&dword_140404A6C[297756293] + v4);
      v9 = 3597 * v20;
      goto LABEL_31;
    case 2:
      v21 = 47224 * v2;
      v22 = (int)dword_140404A6C[47224 * v2 + 438887411];
      if ( (_DWORD)v22 == -1 || !dword_140404A6C[3597 * v22 + 71856277] )
      {
        v23 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v4);
        if ( (unsigned int)(v23 - 1) <= 1 )
        {
          v24 = *(int *)((char *)&dword_140404A6C[297756295] + v4);
          if ( (_DWORD)v24 != -1 )
          {
            if ( v23 == 1 )
            {
              if ( (_DWORD)v22 != -1 )
              {
                v25 = &dword_140404A6C[3597 * v22 + 71859827];
                if ( *(_BYTE *)v25 )
                {
                  if ( dword_140404A6C[3597 * v22 + 71856292] == (_DWORD)v24 )
                  {
                    sub_140115D90((char *)&dword_140404A6C[297756285] + v4, 6);
                    sub_140115D90((char *)&dword_140404A6C[297756286] + v4, 28);
                    v26 = -1;
                    do
                      ++v26;
                    while ( *((_BYTE *)v25 + v26) );
                    v106 = v26;
                    sub_140115D90(&v106, 6);
                    sub_140115D90((char *)&dword_140404A6C[297756294] + v4, 4);
                    sub_140115D90((char *)&dword_140404A6C[297756295] + v4, 10);
                    sub_140115D90((char *)&dword_140404A6C[297756296] + v4, 4);
                    v27 = v26 & 0x3F;
                    if ( v27 )
                    {
                      v28 = dword_140404A6C[289301093];
                      v29 = 0;
                      v30 = dword_140404A6C[289301092];
                      v31 = &dword_140404A6C[3597 * dword_140404A6C[47224 * v2 + 438887411] + 71859827];
                      do
                      {
                        v32 = 7;
                        v33 = *((_BYTE *)v31 + v29) & 0x7F;
                        if ( v30 < 0x10000 )
                        {
                          while ( 1 )
                          {
                            *((_BYTE *)&dword_140404A6C[289301094] + v30) &= ~(((1 << v32) - 1) << v28);
                            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v33 << SLOBYTE(dword_140404A6C[289301093]);
                            v34 = 8 - dword_140404A6C[289301093];
                            v30 = dword_140404A6C[289301092];
                            if ( v32 < 8 - dword_140404A6C[289301093] )
                              break;
                            v28 = 0;
                            dword_140404A6C[289301093] = 0;
                            if ( v32 == v34 )
                            {
                              v30 = ++dword_140404A6C[289301092];
                              goto LABEL_53;
                            }
                            v30 = dword_140404A6C[289301092] + 1;
                            v33 >>= v34;
                            v32 -= v34;
                            ++dword_140404A6C[289301092];
                            if ( v32 <= 0 )
                              goto LABEL_53;
                          }
                          v28 = v32 + LOBYTE(dword_140404A6C[289301093]);
                          dword_140404A6C[289301093] += v32;
                        }
LABEL_53:
                        ++v29;
                      }
                      while ( v29 < v27 );
                    }
                    return MEMORY[0x1401F8B20]((unsigned __int64)&v104 ^ v118);
                  }
                }
              }
              v35 = 7166 * v24;
              v36 = &dword_140404A6C[280651674];
            }
            else
            {
              v35 = 1760 * v24;
              v36 = &dword_140404A6C[278845916];
            }
            LODWORD(v37) = v36[v35];
            LODWORD(v38) = v36[v35 + 1];
            v39 = *(float *)&v36[v35 + 2];
            v116 = __PAIR64__(LODWORD(v38), LODWORD(v37));
            v117 = v39;
            v40 = (float)((float)((float)(*(float *)&dword_140404A6C[v21 + 438920025] - v38)
                                * (float)(*(float *)&dword_140404A6C[v21 + 438920025] - v38))
                        + (float)((float)(*(float *)&dword_140404A6C[v21 + 438920024] - v37)
                                * (float)(*(float *)&dword_140404A6C[v21 + 438920024] - v37)))
                + (float)((float)(*(float *)&dword_140404A6C[v21 + 438920026] - v39)
                        * (float)(*(float *)&dword_140404A6C[v21 + 438920026] - v39));
            v41 = fsqrt(v40);
            if ( v40 <= 16384.0 )
            {
              v42 = 1.0;
              if ( (unsigned int)sub_1400DC050(&v116, &dword_140404A6C[v21 + 438920024], 0) )
                v42 = 0.5;
              v3 = v106;
            }
            else
            {
              v42 = 0.5;
            }
            v43 = *(unsigned int *)((char *)&dword_140404A6C[297756296] + v4);
            v44 = 64.0;
            if ( v43 )
            {
              if ( v43 == 2 )
                v44 = 128.0;
            }
            else
            {
              v44 = 8.0;
            }
            if ( *(unsigned int *)((char *)&dword_140404A6C[297756294] + v4) == 2 )
              v44 = 2.0;
            if ( v41 > (float)(v44 * v42) )
              goto LABEL_70;
          }
        }
      }
      break;
  }
LABEL_19:
  v11 = v3;
  v114 = v3;
  v12 = (__int64)v3 << 7;
  sub_140115D90((char *)&dword_140404A6C[297756285] + v12, 6);
  sub_140115D90((char *)&dword_140404A6C[297756286] + v12, 28);
  v13 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v12);
  v109 = v13;
  if ( !v13 )
  {
    sub_140115D90((char *)&dword_140404A6C[297756293] + v12, 4);
    v14 = 10;
    goto LABEL_21;
  }
  if ( v13 == 1 )
  {
    sub_140115D90((char *)&dword_140404A6C[297756293] + v12, 4);
    v14 = 6;
LABEL_21:
    sub_140115D90((char *)&dword_140404A6C[297756294] + v12, v14);
    v15 = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v15 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      v16 = v15;
      v17 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v12);
      *(_QWORD *)((char *)&dword_140404A6C[289301094] + v16) = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v12);
      *(unsigned int *)((char *)&dword_140404A6C[289301096] + v16) = v17;
      v15 = dword_140404A6C[289301092] + 12;
      dword_140404A6C[289301092] = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v18 = v15;
        v19 = *(unsigned int *)((char *)&dword_140404A6C[297756292] + v12);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v18) = *(_QWORD *)((char *)&dword_140404A6C[297756290] + v12);
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v18) = v19;
        v15 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] += 12;
      }
    }
LABEL_88:
    v45 = dword_140404A6C[289301093];
    goto LABEL_89;
  }
  if ( v13 != 2 )
  {
    if ( v13 == 3 )
    {
      v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      sub_140115D90((char *)&dword_140404A6C[297756293] + v12, 10);
      v108 = (char *)&dword_140404A6C[297756294] + v12;
      sub_140115D90((char *)&dword_140404A6C[297756294] + v12, 8);
      sub_140115D90((char *)&dword_140404A6C[297756295] + v12, 4);
      v45 = dword_140404A6C[289301093];
      v51 = (char *)&dword_140404A6C[297756293] + v12;
      v15 = dword_140404A6C[289301092];
      v52 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v12);
      v112 = (char *)&dword_140404A6C[297756294] + v12;
      v53 = (char *)&dword_140404A6C[297756293] + v12;
      v107 = (char *)&dword_140404A6C[297756293] + v12;
      v54 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      v113 = (char *)&dword_140404A6C[297756293] + v12;
      goto LABEL_106;
    }
    v15 = dword_140404A6C[289301092];
    goto LABEL_88;
  }
  sub_140115D90((char *)&dword_140404A6C[297756293] + v12, 6);
  sub_140115D90((char *)&dword_140404A6C[297756294] + v12, 4);
  sub_140115D90((char *)&dword_140404A6C[297756295] + v12, 10);
  sub_140115D90((char *)&dword_140404A6C[297756296] + v12, 4);
  v45 = dword_140404A6C[289301093];
  v15 = dword_140404A6C[289301092];
  v46 = *(unsigned int *)((char *)&dword_140404A6C[297756293] + v12) & 0x3F;
  if ( v46 )
  {
    for ( i = 0; i < v46; ++i )
    {
      v48 = 7;
      v49 = *((_BYTE *)&dword_140404A6C[297756301] + v12 + i) & 0x7F;
      if ( v15 < 0x10000 )
      {
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v15) &= ~(((1 << v48) - 1) << v45);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v49 << SLOBYTE(dword_140404A6C[289301093]);
          v50 = 8 - dword_140404A6C[289301093];
          v15 = dword_140404A6C[289301092];
          if ( v48 < 8 - dword_140404A6C[289301093] )
            break;
          v45 = 0;
          dword_140404A6C[289301093] = 0;
          if ( v48 == v50 )
          {
            v15 = ++dword_140404A6C[289301092];
            goto LABEL_83;
          }
          v15 = dword_140404A6C[289301092] + 1;
          v49 >>= v50;
          v48 -= v50;
          ++dword_140404A6C[289301092];
          if ( v48 <= 0 )
            goto LABEL_83;
        }
        v45 = v48 + dword_140404A6C[289301093];
        dword_140404A6C[289301093] += v48;
      }
LABEL_83:
      ;
    }
  }
LABEL_89:
  v51 = (char *)&dword_140404A6C[297756293] + v12;
  v107 = (char *)&dword_140404A6C[297756293] + v12;
  v108 = (char *)&dword_140404A6C[297756294] + v12;
  v112 = (char *)&dword_140404A6C[297756294] + v12;
  v113 = (char *)&dword_140404A6C[297756293] + v12;
  v52 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v12);
  v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
  v53 = (char *)&dword_140404A6C[297756293] + v12;
  v54 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
  if ( v109 == 4 )
  {
    sub_140115D90((char *)&dword_140404A6C[297756293] + v12, 10);
    sub_140115D90((char *)&dword_140404A6C[297756294] + v12, 4);
    sub_140115D90((char *)&dword_140404A6C[297756295] + v12, 10);
    v15 = dword_140404A6C[289301092];
    v51 = (char *)&dword_140404A6C[297756293] + v12;
    v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v15 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      v55 = v15;
      v56 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v12);
      v57 = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v12);
      v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      *(_QWORD *)((char *)&dword_140404A6C[289301094] + v55) = v57;
      *(unsigned int *)((char *)&dword_140404A6C[289301096] + v55) = v56;
      v15 = dword_140404A6C[289301092] + 12;
      dword_140404A6C[289301092] = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v58 = *(_QWORD *)((char *)&dword_140404A6C[297756290] + v12);
        v59 = v15;
        v60 = *(unsigned int *)((char *)&dword_140404A6C[297756292] + v12);
        v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v59) = v58;
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v59) = v60;
        v15 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] += 12;
      }
    }
    v45 = dword_140404A6C[289301093];
  }
  else
  {
    if ( v109 == 5 )
    {
      sub_140115D90((char *)&dword_140404A6C[297756293] + v12, 20);
      sub_140115D90((char *)&dword_140404A6C[297756294] + v12, 10);
      sub_140115D90((char *)&dword_140404A6C[297756295] + v12, 10);
      v105 = (char *)&dword_140404A6C[297756296] + v12;
      sub_140115D90((char *)&dword_140404A6C[297756296] + v12, 4);
      v45 = dword_140404A6C[289301093];
      v61 = 5;
      v111 = (unsigned int *)((char *)&dword_140404A6C[297756295] + v12);
      v15 = dword_140404A6C[289301092];
      v51 = (char *)&dword_140404A6C[297756293] + v12;
      v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      goto LABEL_100;
    }
    v54 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
  }
LABEL_106:
  v61 = v109;
  v65 = (unsigned int *)((char *)&dword_140404A6C[297756295] + v12);
  v105 = (char *)&dword_140404A6C[297756296] + v12;
  v111 = (unsigned int *)((char *)&dword_140404A6C[297756295] + v12);
  if ( v109 != 6 )
  {
LABEL_100:
    v62 = v51;
    v63 = v112;
    v115 = v105;
    v116 = (unsigned __int64)v108;
    if ( v61 == 7 )
    {
      sub_140115D90(v53, 16);
      sub_140115D90(v52, 10);
      v64 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] >= 0x10000 )
      {
        v65 = v111;
      }
      else
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v64 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v65 = v111;
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v64) = *v111;
        dword_140404A6C[289301092] += 4;
      }
      sub_140115D90(v105, 24);
      v45 = dword_140404A6C[289301093];
      v15 = dword_140404A6C[289301092];
      for ( j = 0; j < 31; ++j )
      {
        v70 = 7;
        v71 = *((_BYTE *)&dword_140404A6C[297756301] + v12 + j) & 0x7F;
        if ( v15 < 0x10000 )
        {
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v15) &= ~(((1 << v70) - 1) << v45);
            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v71 << SLOBYTE(dword_140404A6C[289301093]);
            v72 = 8 - dword_140404A6C[289301093];
            v15 = dword_140404A6C[289301092];
            if ( v70 < 8 - dword_140404A6C[289301093] )
              break;
            v45 = 0;
            dword_140404A6C[289301093] = 0;
            if ( v70 == v72 )
            {
              v15 = ++dword_140404A6C[289301092];
              goto LABEL_117;
            }
            v15 = dword_140404A6C[289301092] + 1;
            v71 >>= v72;
            v70 -= v72;
            ++dword_140404A6C[289301092];
            if ( v70 <= 0 )
              goto LABEL_117;
          }
          v45 = v70 + dword_140404A6C[289301093];
          dword_140404A6C[289301093] += v70;
        }
LABEL_117:
        ;
      }
      v66 = v110;
      v67 = v107;
      v68 = v113;
LABEL_156:
      v11 = v114;
      goto LABEL_157;
    }
    v67 = v51;
    v68 = v113;
    v107 = v51;
    switch ( v109 )
    {
      case 17:
        sub_140115D90(v53, 10);
        sub_140115D90(v52, 1);
        sub_140115D90(v111, 8);
        v67 = v62;
        v66 = v110;
        v68 = v113;
        v73 = (char *)v116;
        v45 = dword_140404A6C[289301093];
        v11 = v114;
        v65 = v111;
        v105 = v115;
        v15 = dword_140404A6C[289301092];
        goto LABEL_158;
      case 8:
        v11 = v114;
        v74 = v114 << 7;
        sub_140115D90(v53, 8);
        v15 = dword_140404A6C[289301092];
        v66 = v54;
        if ( (int)dword_140404A6C[289301092] >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *v52;
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *v111;
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v75 = v15;
        v76 = *(unsigned int *)((char *)&dword_140404A6C[297756296] + v74);
        break;
      case 9:
        v11 = v114;
        v77 = v114 << 7;
        sub_140115D90(v53, 8);
        v15 = dword_140404A6C[289301092];
        v66 = v54;
        if ( (int)dword_140404A6C[289301092] >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v78 = v15;
        v79 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v77);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v78) = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v77);
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v78) = v79;
        v15 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756297]
                                                                                       + v77);
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v75 = v15;
        v76 = *(unsigned int *)((char *)&dword_140404A6C[297756298] + v77);
        break;
      default:
        v66 = v54;
        if ( v109 != 19 )
        {
          if ( v109 == 10 )
          {
            sub_140115D90(v113, 8);
            sub_140115D90(v52, 1);
            return MEMORY[0x1401F8B20]((unsigned __int64)&v104 ^ v118);
          }
          v65 = v111;
          goto LABEL_156;
        }
        v11 = v114;
        v80 = v114 << 7;
        sub_140115D90(v113, 8);
        sub_140115D90(v52, 16);
        v15 = dword_140404A6C[289301092];
        v66 = v54;
        if ( (int)dword_140404A6C[289301092] >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = dword_140404A6C[32 * v114 + 297756297];
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
        {
LABEL_133:
          v45 = dword_140404A6C[289301093];
          v65 = v111;
          v67 = v107;
          v68 = v113;
          goto LABEL_157;
        }
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v75 = v15;
        v76 = *(unsigned int *)((char *)&dword_140404A6C[297756298] + v80);
        break;
    }
    *(unsigned int *)((char *)&dword_140404A6C[289301094] + v75) = v76;
    v15 = dword_140404A6C[289301092] + 4;
    dword_140404A6C[289301092] += 4;
    goto LABEL_133;
  }
  sub_140115D90(v53, 10);
  sub_140115D90(v52, 3);
  sub_140115D90((char *)&dword_140404A6C[297756295] + v12, 16);
  sub_140115D90(v105, 2);
  v45 = dword_140404A6C[289301093];
  v15 = dword_140404A6C[289301092];
  v66 = v110;
  v67 = v107;
  v68 = v113;
  v63 = v112;
LABEL_157:
  v73 = v108;
LABEL_158:
  v81 = v109;
  v82 = v105;
  if ( v109 == 11 )
  {
    if ( v15 < 0x10000 )
    {
      if ( v45 > 0 )
      {
        ++v15;
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v15;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                     + v12);
      v15 = dword_140404A6C[289301092] + 4;
      dword_140404A6C[289301092] = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                       + v12);
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v15;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v15;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                         + v12);
          v15 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v15;
          if ( v15 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v15 + 1;
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15 + 1) = *(unsigned int *)((char *)&dword_140404A6C[297756296]
                                                                                                 + v12);
              dword_140404A6C[289301092] += 4;
              return MEMORY[0x1401F8B20]((unsigned __int64)&v104 ^ v118);
            }
LABEL_184:
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756296]
                                                                                           + v12);
            dword_140404A6C[289301092] += 4;
            return MEMORY[0x1401F8B20]((unsigned __int64)&v104 ^ v118);
          }
        }
      }
      v84 = v82;
LABEL_210:
      v45 = dword_140404A6C[289301093];
      goto LABEL_228;
    }
    goto LABEL_227;
  }
  v83 = v105;
  switch ( v109 )
  {
    case 12:
      v84 = v105;
      if ( v15 >= 0x10000 )
        goto LABEL_228;
      if ( v45 > 0 )
      {
        ++v15;
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v15;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                     + v12);
      v15 = dword_140404A6C[289301092] + 4;
      dword_140404A6C[289301092] = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                       + v12);
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v15;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v15;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                         + v12);
          v15 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v15;
          if ( v15 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v15;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v15;
            }
            goto LABEL_184;
          }
        }
      }
      goto LABEL_210;
    case 22:
      sub_140115D90(v68, 16);
      sub_140115D90(v63, 6);
      sub_140115D90(v65, 7);
      v15 = dword_140404A6C[289301092];
      v85 = *(unsigned int *)((char *)&dword_140404A6C[297756295] + v12);
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        MEMORY[0x1401FC920]((char *)&dword_140404A6C[289301094] + v15, (char *)&dword_140404A6C[297756301] + v12);
        dword_140404A6C[289301092] += v85;
        return MEMORY[0x1401F8B20]((unsigned __int64)&v104 ^ v118);
      }
      v84 = v105;
      v45 = dword_140404A6C[289301093];
      goto LABEL_228;
    case 21:
      sub_140115D90(v67, 10);
      sub_140115D90(v73, 4);
      sub_140115D90(v65, 4);
      sub_140115D90(v105, 30);
      v15 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v86 = v15;
        v87 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v12);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v86) = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v12);
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v86) = v87;
        goto LABEL_263;
      }
      goto LABEL_207;
    case 13:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                       + v12);
        v45 = dword_140404A6C[289301093];
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] += 4;
      }
      v88 = v106;
      if ( v15 >= 0x10000 )
      {
        v84 = v83;
        goto LABEL_228;
      }
      if ( v45 > 0 )
      {
        ++v15;
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v15;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                     + v12);
      v15 = dword_140404A6C[289301092] + 4;
      dword_140404A6C[289301092] = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = dword_140404A6C[32 * v88 + 297756295];
        dword_140404A6C[289301092] += 4;
        return MEMORY[0x1401F8B20]((unsigned __int64)&v104 ^ v118);
      }
LABEL_207:
      v45 = dword_140404A6C[289301093];
      v84 = v83;
      goto LABEL_228;
    case 14:
      sub_140115D90((char *)&dword_140404A6C[297756293] + v12, 8);
      sub_140115D90((char *)&dword_140404A6C[297756294] + v12, 8);
      sub_140115D90(v65, 8);
      sub_140115D90((char *)&dword_140404A6C[297756296] + v12, 20);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v104 ^ v118);
    case 15:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *v66;
        v45 = dword_140404A6C[289301093];
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] += 4;
      }
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = dword_140404A6C[32 * v11 + 297756294];
        v89 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v89;
        if ( v89 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v89;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v89;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v89) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                         + v12);
          dword_140404A6C[289301092] += 4;
        }
      }
      sub_140115D90(v83, 2);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v104 ^ v118);
  }
LABEL_227:
  v84 = v105;
LABEL_228:
  v90 = v11 << 7;
  switch ( v81 )
  {
    case 16:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                       + v90);
        v91 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v91;
        if ( v91 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v91;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v91;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v91) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                         + v90);
          v92 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v92;
          if ( v92 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v92;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v92;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v92) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                           + v90);
            dword_140404A6C[289301092] += 4;
          }
        }
      }
      sub_140115D90(v84, 10);
      v93 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v93 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v94 = v93;
        v95 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v90);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v94) = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v90);
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v94) = v95;
        v96 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] = v96;
        if ( v96 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v96;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v96;
          }
          v97 = *(_QWORD *)((char *)&dword_140404A6C[297756290] + v90);
          v98 = v96;
          v99 = *(unsigned int *)((char *)&dword_140404A6C[297756292] + v90);
LABEL_262:
          *(_QWORD *)((char *)&dword_140404A6C[289301094] + v98) = v97;
          *(unsigned int *)((char *)&dword_140404A6C[289301096] + v98) = v99;
LABEL_263:
          dword_140404A6C[289301092] += 12;
        }
      }
      break;
    case 18:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                       + v90);
        v100 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v100;
        if ( v100 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v100;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v100;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v100) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                          + v90);
          v101 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v101;
          if ( v101 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v101;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v101;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v101) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                            + v90);
            dword_140404A6C[289301092] += 4;
          }
        }
      }
      break;
    case 20:
      sub_140115D90((char *)&dword_140404A6C[297756293] + v90, 8);
      v102 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v102 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v97 = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v90);
        v98 = v102;
        v99 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v90);
        goto LABEL_262;
      }
      break;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v104 ^ v118);
}

