/* Address: 0x140136450 | Name: sub_140136450 | Size: 6714 bytes */
void sub_140136450()
{
  __int64 v0; // r14
  __int64 v1; // rcx
  unsigned int *v2; // rax
  __int64 v3; // rsi
  unsigned int *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned int *v11; // rax
  __int128 v12; // xmm1
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // r13d
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // ebx
  unsigned int v20; // r8d
  signed int v21; // edx
  __int128 v22; // xmm1
  signed int v23; // r9d
  char v24; // r8
  int v25; // eax
  unsigned int v26; // r10d
  unsigned int v27; // ecx
  signed int v28; // r9d
  int v29; // eax
  unsigned int v30; // r10d
  unsigned int v31; // ecx
  __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rcx
  unsigned __int16 v35; // dx
  __int64 v36; // r13
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned int v40; // xmm0_4
  unsigned int *v41; // rcx
  unsigned int *v42; // rbx
  __int64 v43; // rdi
  unsigned int *v44; // rbx
  unsigned int *v45; // rdi
  signed int v46; // eax
  signed int v47; // r9d
  char v48; // r8
  unsigned int v49; // r10d
  unsigned int v50; // ecx
  signed int v51; // r9d
  unsigned int v52; // r10d
  unsigned int v53; // ecx
  signed int v54; // r9d
  unsigned int v55; // r10d
  unsigned int v56; // ecx
  signed int v57; // eax
  signed int v58; // r8d
  char v59; // r9
  unsigned int v60; // r10d
  unsigned int v61; // ecx
  __int64 v62; // r12
  unsigned int *v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // rbx
  signed int v68; // eax
  signed int v69; // eax
  signed int v70; // eax
  signed int v71; // eax
  signed int v72; // eax
  signed int v73; // eax
  signed int v74; // eax
  signed int v75; // eax
  int *v76; // rbx
  __int64 v77; // rdi
  unsigned int *v78; // rbx
  signed int v79; // eax
  signed int v80; // eax
  signed int v81; // eax
  signed int v82; // eax
  signed int v83; // eax
  __int64 v84; // rbp
  int *v85; // r14
  char *v86; // rbx
  __int64 v87; // rdi
  int v88; // eax
  int v89; // r8d
  signed int v90; // edx
  __int64 v91; // rdi
  __int64 v92; // rbp
  __int64 v93; // rsi
  __int64 v94; // rbx
  unsigned int v95; // ebx
  signed int v96; // r9d
  unsigned int v97; // r10d
  unsigned int v98; // ecx
  __int64 v99; // rsi
  unsigned int *v100; // rdi
  unsigned int *v101; // r13
  __int64 v102; // rax
  __int64 v103; // r15
  unsigned int v104; // r14d
  __int64 v105; // rbp
  signed int v106; // ebx
  __int64 v107; // r12
  signed int v108; // r8d
  char v109; // r9
  unsigned int v110; // r10d
  unsigned int v111; // ecx
  unsigned int v112; // edi
  signed int v113; // r10d
  signed int v114; // r8d
  unsigned int v115; // edi
  unsigned int v116; // r9d
  unsigned int v117; // ecx
  int v118; // ebp
  int v119; // r14d
  signed int v120; // r8d
  char v121; // r10
  unsigned int v122; // r9d
  signed int v123; // eax
  unsigned int v124; // ecx
  __int64 v125; // r15
  __int64 v126; // r15
  signed int v127; // r8d
  int v128; // r10d
  signed int v129; // r9d
  unsigned int v130; // ecx
  unsigned __int16 v131; // dx
  __int64 v132; // rcx
  int v133; // ebp
  unsigned int *v134; // r14
  unsigned int *v135; // rdi
  unsigned int *v136; // rbx
  __int64 v137; // rsi
  signed int v138; // eax
  signed int v139; // eax
  __int128 v140; // xmm1
  signed int v141; // eax
  __int64 v142; // [rsp+20h] [rbp-A8h]
  __int64 v143; // [rsp+28h] [rbp-A0h]
  __int64 v144; // [rsp+30h] [rbp-98h]
  __int64 v145; // [rsp+38h] [rbp-90h]
  __int64 v146; // [rsp+40h] [rbp-88h]
  unsigned int v147; // [rsp+48h] [rbp-80h]
  unsigned int v148; // [rsp+D0h] [rbp+8h]
  int v149; // [rsp+D0h] [rbp+8h]
  unsigned int *v150; // [rsp+D8h] [rbp+10h]
  __int64 v151; // [rsp+E0h] [rbp+18h]
  unsigned int *v152; // [rsp+E8h] [rbp+20h]

  v0 = (int)dword_140404A6C[456202445];
  ++dword_140404A6C[456202728];
  sub_1400299C0();
  sub_140127630();
  v1 = 256;
  v2 = &dword_140404A6C[438881245];
  v3 = 0;
  do
  {
    if ( *v2 )
    {
      if ( (--v2[1] & 0x80000000) != 0 )
        *v2 = 0;
    }
    v2 += 20;
    --v1;
  }
  while ( v1 );
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v5 = &dword_140404A6C[438934628];
    v6 = dword_140404A6C[456202445];
    do
    {
      v7 = (int)*(v5 - 47217);
      if ( (_DWORD)v7 != -1 )
      {
        v8 = 3597 * v7;
        v9 = dword_140404A6C[3597 * v7 + 71856268];
        if ( v9 != -1 )
        {
          LODWORD(v10) = *v5;
          if ( *v5 != -1 )
            goto LABEL_17;
          LODWORD(v10) = 0;
          v11 = &dword_140404A6C[438881247];
          while ( !*(v11 - 2) || *v11 != v9 )
          {
            v10 = (unsigned int)(v10 + 1);
            v11 += 20;
            if ( (__int64)v11 >= (__int64)&dword_140404A6C[438886367] )
            {
              LODWORD(v10) = sub_140132E00(v10);
              *v5 = v10;
              goto LABEL_16;
            }
          }
          *v5 = v10;
LABEL_16:
          if ( (_DWORD)v10 != -1 )
          {
LABEL_17:
            v12 = *(_OWORD *)&dword_140404A6C[v8 + 71856258];
            v13 = dword_140404A6C[v8 + 71856265];
            v14 = 10LL * (int)v10;
            *(_OWORD *)&dword_140404A6C[2 * v14 + 438881248] = *(_OWORD *)&dword_140404A6C[v8 + 71856254];
            dword_140404A6C[2 * v14 + 438881245] = 1;
            *(_OWORD *)&dword_140404A6C[2 * v14 + 438881252] = v12;
            dword_140404A6C[2 * v14 + 438881246] = 3600;
            dword_140404A6C[2 * v14 + 438881247] = v9;
            dword_140404A6C[2 * v14 + 438881264] = v13;
          }
        }
      }
      v5 += 47224;
      --v6;
    }
    while ( v6 );
    v3 = 0;
  }
  v148 = 0;
  v15 = 0;
  v151 = v0;
  if ( (int)v0 > 0 )
  {
    v16 = 0;
    v17 = v0;
    v145 = 0;
    while ( 1 )
    {
      v18 = 47224 * v16;
      v143 = 47224 * v16;
      v19 = dword_140404A6C[47224 * v16 + 438887412];
      if ( v19 <= 0 )
        break;
LABEL_239:
      ++v15;
      v16 = v145 + 1;
      v148 = v15;
      v145 = v16;
      if ( v16 >= v17 )
        goto LABEL_240;
    }
    v20 = dword_140404A6C[283831447];
    if ( dword_140404A6C[v18 + 438887409] != dword_140404A6C[283831447] )
    {
      dword_140404A6C[289301094] = dword_1402B2658;
      *(_QWORD *)&dword_140404A6C[289301092] = 9;
      LOBYTE(dword_140404A6C[289301095]) = 6;
      *(unsigned int *)((char *)&dword_140404A6C[289301095] + 1) = dword_140404A6C[283831447];
      sub_140115D90(&dword_140404A6C[283831312], 4);
      sub_140115D90(&dword_140404A6C[283831441], 4);
      sub_140115D90(&dword_140404A6C[283831446], 8);
      v21 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v21 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v22 = *(_OWORD *)&dword_140404A6C[283831317];
        *(_OWORD *)((char *)&dword_140404A6C[289301094] + v21) = *(_OWORD *)&dword_140404A6C[283831313];
        *(_OWORD *)((char *)&dword_140404A6C[289301098] + v21) = v22;
        v21 = dword_140404A6C[289301092] + 32;
        dword_140404A6C[289301092] += 32;
      }
      v23 = 16;
      v24 = dword_140404A6C[289301093];
      v25 = (int)(fabs(*(float *)&dword_140404A6C[283831482]) * 5215.189175234883) & 0x7FFF;
      if ( v21 < 0x10000 )
      {
        v26 = v25 | 0x8000;
        if ( *(float *)&dword_140404A6C[283831482] >= 0.0 )
          v26 = v25;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v21) &= ~(((1 << v23) - 1) << v24);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v26 << SLOBYTE(dword_140404A6C[289301093]);
          v27 = 8 - dword_140404A6C[289301093];
          v21 = dword_140404A6C[289301092];
          if ( v23 < 8 - dword_140404A6C[289301093] )
            break;
          v24 = 0;
          dword_140404A6C[289301093] = 0;
          if ( v23 == v27 )
          {
            v21 = ++dword_140404A6C[289301092];
            goto LABEL_38;
          }
          v21 = dword_140404A6C[289301092] + 1;
          v26 >>= v27;
          v23 -= v27;
          ++dword_140404A6C[289301092];
          if ( v23 <= 0 )
            goto LABEL_38;
        }
        v24 = v23 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v23;
      }
LABEL_38:
      v28 = 16;
      v29 = (int)(fabs(*(float *)&dword_140404A6C[283831483]) * 5215.189175234883) & 0x7FFF;
      if ( v21 < 0x10000 )
      {
        v30 = v29 | 0x8000;
        if ( *(float *)&dword_140404A6C[283831483] >= 0.0 )
          v30 = v29;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v21) &= ~(((1 << v28) - 1) << v24);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v30 << SLOBYTE(dword_140404A6C[289301093]);
          v31 = 8 - dword_140404A6C[289301093];
          v21 = dword_140404A6C[289301092];
          if ( v28 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = 0;
          if ( v28 == v31 )
          {
            v21 = ++dword_140404A6C[289301092];
            goto LABEL_47;
          }
          v21 = dword_140404A6C[289301092] + 1;
          v30 >>= v31;
          v28 -= v31;
          ++dword_140404A6C[289301092];
          v24 = 0;
          if ( v28 <= 0 )
            goto LABEL_47;
        }
        dword_140404A6C[289301093] += v28;
      }
LABEL_47:
      if ( dword_140404A6C[283831312] == 7 )
      {
        sub_140115D90(&dword_140404A6C[284022502], 8);
        v21 = dword_140404A6C[289301092];
      }
      v32 = *(_QWORD *)&dword_140404A6C[v18 + 438887407];
      v33 = v19 + v21;
      v34 = dword_140404A6C[v18 + 438887405];
      dword_140404A6C[456202456] = v21;
      v35 = dword_140404A6C[v18 + 438887406];
      dword_140404A6C[v18 + 438887412] = v33;
      sub_140130350(v34, v35, v32);
LABEL_238:
      v17 = v151;
      goto LABEL_239;
    }
    v36 = (int)dword_140404A6C[v18 + 438887411];
    v37 = dword_140404A6C[283831448];
    if ( (_DWORD)v36 == -1
      || (v38 = (int)dword_140404A6C[3597 * v36 + 71856292], (_DWORD)v38 == -1)
      || (v39 = 7166 * v38, (int)dword_140404A6C[7166 * v38 + 280651318] <= 0) )
    {
      v41 = &dword_140404A6C[v18 + 438920024];
      if ( dword_140404A6C[283831448] == 2 )
      {
        *v41 = dword_140404A6C[v18 + 438920021];
        v41[1] = dword_140404A6C[v18 + 438920022];
        v40 = dword_140404A6C[v18 + 438920023];
      }
      else
      {
        *(_QWORD *)v41 = 0;
        v40 = 0;
      }
    }
    else
    {
      v40 = dword_140404A6C[v39 + 280651337];
      v41 = &dword_140404A6C[v18 + 438920024];
      *v41 = dword_140404A6C[v39 + 280651335];
      v41[1] = dword_140404A6C[v39 + 280651336];
    }
    v41[2] = v40;
    dword_140404A6C[289301094] = dword_1402B2658;
    *(unsigned int *)((char *)&dword_140404A6C[289301096] + 1) = dword_140404A6C[283831474];
    *(_QWORD *)&dword_140404A6C[289301092] = 13;
    LOBYTE(dword_140404A6C[289301095]) = 5;
    *(unsigned int *)((char *)&dword_140404A6C[289301095] + 1) = v20;
    sub_140115D90(&dword_140404A6C[283831448], 4);
    if ( v37 == 1 )
    {
      v42 = &dword_140404A6C[71856271];
      v43 = 32;
      do
      {
        sub_140115D90(v42, 1);
        v42 += 3597;
        --v43;
      }
      while ( v43 );
    }
    else if ( v37 != 3 )
    {
LABEL_64:
      v46 = dword_140404A6C[289301092];
      v47 = 24;
      v48 = dword_140404A6C[289301093];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        v49 = dword_140404A6C[283831450] & 0xFFFFFF;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v46) &= ~(((1 << v47) - 1) << v48);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v49 << SLOBYTE(dword_140404A6C[289301093]);
          v50 = 8 - dword_140404A6C[289301093];
          v46 = dword_140404A6C[289301092];
          if ( v47 < 8 - dword_140404A6C[289301093] )
            break;
          v48 = v3;
          dword_140404A6C[289301093] = v3;
          if ( v47 == v50 )
          {
            v46 = ++dword_140404A6C[289301092];
            goto LABEL_72;
          }
          v46 = dword_140404A6C[289301092] + 1;
          v49 >>= v50;
          v47 -= v50;
          ++dword_140404A6C[289301092];
          if ( v47 <= 0 )
            goto LABEL_72;
        }
        v48 = v47 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v47;
      }
LABEL_72:
      v51 = 16;
      if ( v46 < 0x10000 )
      {
        v52 = LOWORD(dword_140404A6C[284022086]);
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v46) &= ~(((1 << v51) - 1) << v48);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v52 << SLOBYTE(dword_140404A6C[289301093]);
          v53 = 8 - dword_140404A6C[289301093];
          v46 = dword_140404A6C[289301092];
          if ( v51 < 8 - dword_140404A6C[289301093] )
            break;
          v48 = v3;
          dword_140404A6C[289301093] = v3;
          if ( v51 == v53 )
          {
            v46 = ++dword_140404A6C[289301092];
            goto LABEL_80;
          }
          v46 = dword_140404A6C[289301092] + 1;
          v52 >>= v53;
          v51 -= v53;
          ++dword_140404A6C[289301092];
          if ( v51 <= 0 )
            goto LABEL_80;
        }
        v48 = v51 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v51;
      }
LABEL_80:
      v54 = 30;
      if ( v46 < 0x10000 )
      {
        v55 = dword_140404A6C[179992853] & 0x3FFFFFFF;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v46) &= ~(((1 << v54) - 1) << v48);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v55 << SLOBYTE(dword_140404A6C[289301093]);
          v56 = 8 - dword_140404A6C[289301093];
          if ( v54 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = v3;
          if ( v54 == v56 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_88;
          }
          v54 -= v56;
          v46 = dword_140404A6C[289301092] + 1;
          v55 >>= v56;
          ++dword_140404A6C[289301092];
          v48 = v3;
          if ( v54 <= 0 )
            goto LABEL_88;
        }
        dword_140404A6C[289301093] += v54;
      }
LABEL_88:
      sub_140115D90(&dword_140404A6C[283831506], 6);
      sub_140115D90(&dword_140404A6C[283837379], 6);
      sub_140115D90(&dword_140404A6C[283843252], 6);
      sub_140115D90(&dword_140404A6C[283849125], 6);
      sub_140115D90(&dword_140404A6C[283854998], 6);
      v57 = dword_140404A6C[289301092];
      v58 = 8;
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        v59 = dword_140404A6C[289301093];
        v60 = (unsigned __int8)v36;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v57) &= ~(((1 << v58) - 1) << v59);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v60 << SLOBYTE(dword_140404A6C[289301093]);
          v61 = 8 - dword_140404A6C[289301093];
          if ( v58 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = v3;
          if ( v58 == v61 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_96;
          }
          v58 -= v61;
          v57 = dword_140404A6C[289301092] + 1;
          v60 >>= v61;
          ++dword_140404A6C[289301092];
          v59 = v3;
          if ( v58 <= 0 )
            goto LABEL_96;
        }
        dword_140404A6C[289301093] += v58;
      }
LABEL_96:
      v62 = 3597 * v36;
      v63 = &dword_140404A6C[3597 * v36 + 71856292];
      sub_140115D90(v63, 10);
      v146 = 0;
      v147 = 0;
      if ( (_DWORD)v36 != -1 )
      {
        v64 = (int)*v63;
        if ( (_DWORD)v64 != -1 )
        {
          dword_140404A6C[v62 + 71856327] = dword_140404A6C[7166 * v64 + 280651341];
          dword_140404A6C[v62 + 71856328] = dword_140404A6C[7166 * *v63 + 280651342];
          v65 = 7166LL * (int)*v63;
          v146 = *(_QWORD *)&dword_140404A6C[v65 + 280651680];
          v147 = dword_140404A6C[v65 + 280651682];
        }
      }
      v66 = (int)*v63;
      if ( (_DWORD)v66 != -1 )
      {
        v67 = 28664 * v66;
        v68 = dword_140404A6C[289301092];
        if ( (int)dword_140404A6C[289301092] < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            v68 = dword_140404A6C[289301092] + 1;
            dword_140404A6C[289301093] = v3;
            ++dword_140404A6C[289301092];
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v68) = dword_140404A6C[v67 / 4 + 280651341];
          v69 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v69;
          if ( v69 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v69;
              dword_140404A6C[289301093] = v3;
              dword_140404A6C[289301092] = v69;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v69) = dword_140404A6C[v67 / 4 + 280651342];
            v70 = dword_140404A6C[289301092] + 4;
            dword_140404A6C[289301092] = v70;
            if ( v70 < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                ++v70;
                dword_140404A6C[289301093] = v3;
                dword_140404A6C[289301092] = v70;
              }
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v70) = dword_140404A6C[v67 / 4 + 280651365];
              v71 = dword_140404A6C[289301092] + 4;
              dword_140404A6C[289301092] = v71;
              if ( v71 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v71;
                  dword_140404A6C[289301093] = v3;
                  dword_140404A6C[289301092] = v71;
                }
                *(unsigned int *)((char *)&dword_140404A6C[289301094] + v71) = dword_140404A6C[v67 / 4 + 280651366];
                v72 = dword_140404A6C[289301092] + 4;
                dword_140404A6C[289301092] = v72;
                if ( v72 < 0x10000 )
                {
                  if ( (int)dword_140404A6C[289301093] > 0 )
                  {
                    ++v72;
                    dword_140404A6C[289301093] = v3;
                    dword_140404A6C[289301092] = v72;
                  }
                  *(unsigned int *)((char *)&dword_140404A6C[289301094] + v72) = dword_140404A6C[v67 / 4 + 280651357];
                  dword_140404A6C[289301092] += 4;
                }
              }
            }
          }
        }
        sub_140115D90(0x140000000LL + v67 + 1126818692, 1);
        sub_140115D90(0x140000000LL + v67 + 1126818688, 8);
        sub_140115D90(0x140000000LL + v67 + 1126846696, 8);
        sub_140115D90(0x140000000LL + v67 + 1126846704, 7);
        sub_140115D90(0x140000000LL + v67 + 1126846708, 4);
        sub_140115D90(0x140000000LL + v67 + 1126846712, 4);
        sub_140115D90(0x140000000LL + v67 + 1126846692, 8);
        sub_140115D90(0x140000000LL + v67 + 1126846552, 7);
        sub_140115D90(0x140000000LL + v67 + 1126846564, 7);
        sub_140115D90(0x140000000LL + v67 + 1126846572, 7);
        sub_140115D90(0x140000000LL + v67 + 1126846580, 7);
        sub_140115D90(0x140000000LL + v67 + 1126846588, 7);
        sub_140115D90(0x140000000LL + v67 + 1126846596, 7);
        sub_140115D90(0x140000000LL + v67 + 1126846604, 7);
        sub_140115D90(0x140000000LL + v67 + 1126818596, 8);
        sub_140115D90(0x140000000LL + v67 + 1126818600, 8);
      }
      v73 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v73 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = v3;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v73) = v146;
        v74 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v74;
        if ( v74 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v74;
            dword_140404A6C[289301093] = v3;
            dword_140404A6C[289301092] = v74;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v74) = HIDWORD(v146);
          v75 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v75;
          if ( v75 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v75;
              dword_140404A6C[289301093] = v3;
              dword_140404A6C[289301092] = v75;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v75) = v147;
            dword_140404A6C[289301092] += 4;
          }
        }
      }
      sub_140115D90(&dword_140404A6C[v62 + 71856289], 1);
      sub_140115D90(&dword_140404A6C[v62 + 71856342], 8);
      sub_140115D90(&dword_140404A6C[v62 + 71856343], 16);
      if ( dword_140404A6C[v62 + 71856342] == 10 )
      {
        v76 = (int *)(0x140000000LL + 56076LL * (int)dword_140404A6C[v62 + 71856343] + 906829868);
        sub_140115D90(v76, 8);
        if ( *v76 > 0 )
        {
          v77 = (unsigned int)*v76;
          v78 = &dword_140404A6C[14019 * dword_140404A6C[v62 + 71856343] + 225654130];
          do
          {
            sub_140115D90(v78 - 1, 8);
            sub_140115D90(v78, 24);
            sub_140115D90(v78 + 1, 4);
            v78 += 3;
            --v77;
          }
          while ( v77 );
        }
      }
      v79 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v79 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = v3;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v79) = dword_140404A6C[v62 + 71856272];
        v80 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v80;
        if ( v80 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v80;
            dword_140404A6C[289301093] = v3;
            dword_140404A6C[289301092] = v80;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v80) = dword_140404A6C[v62 + 71856273];
          v81 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v81;
          if ( v81 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v81;
              dword_140404A6C[289301093] = v3;
              dword_140404A6C[289301092] = v81;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v81) = dword_140404A6C[v62 + 71856274];
            v82 = dword_140404A6C[289301092] + 4;
            dword_140404A6C[289301092] = v82;
            if ( v82 < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                ++v82;
                dword_140404A6C[289301093] = v3;
                dword_140404A6C[289301092] = v82;
              }
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v82) = dword_140404A6C[v62 + 71856275];
              v83 = dword_140404A6C[289301092] + 4;
              dword_140404A6C[289301092] = v83;
              if ( v83 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v83;
                  dword_140404A6C[289301093] = v3;
                  dword_140404A6C[289301092] = v83;
                }
                *(unsigned int *)((char *)&dword_140404A6C[289301094] + v83) = dword_140404A6C[v62 + 71856276];
                dword_140404A6C[289301092] += 4;
              }
            }
          }
        }
      }
      sub_140115D90(&dword_140404A6C[v62 + 71856291], 16);
      sub_140115D90(&dword_140404A6C[v62 + 71856362], 8);
      sub_140115D90(&dword_140404A6C[v62 + 71857711], 10);
      sub_140115D90(&dword_140404A6C[v62 + 71857712], 6);
      sub_140115D90(&dword_140404A6C[v62 + 71857713], 8);
      v84 = 7;
      v85 = (int *)&dword_140404A6C[v62 + 71857714];
      do
      {
        sub_140115D90((char *)&dword_140404A6C[71857714] + v3 + v62 * 4, 4);
        if ( *v85 > 0 )
        {
          v86 = (char *)&dword_140404A6C[v62 + 71857715] + v3;
          v87 = (unsigned int)*v85;
          do
          {
            sub_140115D90(v86, 16);
            v86 += 4;
            --v87;
          }
          while ( v87 );
        }
        v3 += 36;
        v85 += 9;
        --v84;
      }
      while ( v84 );
      sub_140115D90(&dword_140404A6C[v62 + 71857986], 8);
      v88 = dword_140404A6C[v62 + 71857986];
      if ( v88 > 0 )
      {
        v89 = dword_140404A6C[289301093];
        v90 = dword_140404A6C[289301092];
        v91 = 0;
        v92 = (unsigned int)v88;
        do
        {
          v93 = v62 * 4 + 72 * v91;
          if ( v90 < 0x10000 )
          {
            if ( v89 > 0 )
            {
              ++v90;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v90;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v90) = *(unsigned int *)((char *)&dword_140404A6C[71857987]
                                                                                           + v93);
            v89 = dword_140404A6C[289301093];
            v90 = dword_140404A6C[289301092] + 4;
            dword_140404A6C[289301092] += 4;
          }
          v94 = -1;
          do
            ++v94;
          while ( *((_BYTE *)&dword_140404A6C[71857988] + v93 + v94) );
          v95 = v94 & 0x3F;
          v96 = 6;
          if ( v90 < 0x10000 )
          {
            v97 = v95;
            while ( 1 )
            {
              *((_BYTE *)&dword_140404A6C[289301094] + v90) &= ~(((1 << v96) - 1) << v89);
              *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v97 << SLOBYTE(dword_140404A6C[289301093]);
              v98 = 8 - dword_140404A6C[289301093];
              v90 = dword_140404A6C[289301092];
              if ( v96 < 8 - dword_140404A6C[289301093] )
                break;
              v89 = 0;
              dword_140404A6C[289301093] = 0;
              if ( v96 == v98 )
              {
                v90 = ++dword_140404A6C[289301092];
                goto LABEL_168;
              }
              v90 = dword_140404A6C[289301092] + 1;
              v97 >>= v98;
              v96 -= v98;
              ++dword_140404A6C[289301092];
              if ( v96 <= 0 )
                goto LABEL_168;
            }
            v89 = v96 + dword_140404A6C[289301093];
            dword_140404A6C[289301093] += v96;
LABEL_168:
            if ( v90 < 0x10000 )
            {
              if ( v89 > 0 )
              {
                ++v90;
                dword_140404A6C[289301093] = 0;
                dword_140404A6C[289301092] = v90;
              }
              MEMORY[0x1401FC920]((char *)&dword_140404A6C[289301094] + v90, (char *)&dword_140404A6C[71857988] + v93);
              v89 = dword_140404A6C[289301093];
              v90 = v95 + dword_140404A6C[289301092];
              dword_140404A6C[289301092] = v90;
              if ( v90 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v90;
                  dword_140404A6C[289301093] = 0;
                  dword_140404A6C[289301092] = v90;
                }
                *(unsigned int *)((char *)&dword_140404A6C[289301094] + v90) = *(unsigned int *)((char *)&dword_140404A6C[71858004]
                                                                                               + v93);
                v89 = dword_140404A6C[289301093];
                v90 = dword_140404A6C[289301092] + 4;
                dword_140404A6C[289301092] += 4;
              }
            }
          }
          ++v91;
          --v92;
        }
        while ( v92 );
      }
      sub_140115D90(&dword_140404A6C[v62 + 71856282], 8);
      sub_140110D00(v148, v36);
      sub_14002DB60(v148, dword_140404A6C[v143 + 438887411]);
      v99 = 8;
      v100 = &dword_140404A6C[v143 + 438887429];
      v144 = 47224LL * v148;
      v152 = &dword_140404A6C[v143 + 438887429];
      v101 = &dword_140404A6C[v144 + 438887429];
      v142 = 8;
      v150 = &dword_140404A6C[v144 + 438887429];
      do
      {
        sub_140115D90(v101 - 1, 1);
        if ( !*(v100 - 1) )
          goto LABEL_194;
        sub_140115D90(v101, 8);
        sub_140115D90(v101 + 1, 8);
        sub_140115D90(v101 + 2, 8);
        v102 = (int)*v100;
        v103 = 32901 * v102;
        v104 = dword_140404A6C[32901 * v102 + 299853696] & 0x3F;
        dword_140404A6C[32901 * v102 + 299853696] = v104;
        v105 = ((_BYTE)v104 - 4) & 0x3F;
        if ( (_DWORD)v105 == v104 )
        {
LABEL_194:
          v106 = dword_140404A6C[289301092];
        }
        else
        {
          v106 = dword_140404A6C[289301092];
          v107 = 32901 * v102;
          do
          {
            v108 = 6;
            if ( v106 < 0x10000 )
            {
              v109 = dword_140404A6C[289301093];
              v110 = v105;
              while ( 1 )
              {
                *((_BYTE *)&dword_140404A6C[289301094] + v106) &= ~(((1 << v108) - 1) << v109);
                *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v110 << SLOBYTE(dword_140404A6C[289301093]);
                v111 = 8 - dword_140404A6C[289301093];
                if ( v108 < 8 - dword_140404A6C[289301093] )
                  break;
                dword_140404A6C[289301093] = 0;
                if ( v108 == v111 )
                {
                  ++dword_140404A6C[289301092];
                  goto LABEL_188;
                }
                v108 -= v111;
                v106 = dword_140404A6C[289301092] + 1;
                v110 >>= v111;
                ++dword_140404A6C[289301092];
                v109 = 0;
                if ( v108 <= 0 )
                  goto LABEL_188;
              }
              dword_140404A6C[289301093] += v108;
            }
LABEL_188:
            sub_140115D90(&dword_140404A6C[v107 + 299853762 + v105], 11);
            sub_140115D90(&dword_140404A6C[v107 + 299853698 + v105], 2);
            v112 = dword_140404A6C[v107 + 299853762 + v105];
            v106 = dword_140404A6C[289301092];
            if ( (int)dword_140404A6C[289301092] < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                v106 = dword_140404A6C[289301092] + 1;
                dword_140404A6C[289301093] = 0;
                ++dword_140404A6C[289301092];
              }
              MEMORY[0x1401FC920](
                (char *)&dword_140404A6C[289301094] + v106,
                &dword_140404A6C[512 * (unsigned __int64)(unsigned int)v105 + 299853826 + v103]);
              v106 = v112 + dword_140404A6C[289301092];
              dword_140404A6C[289301092] += v112;
            }
            v105 = ((_BYTE)v105 + 1) & 0x3F;
          }
          while ( (_DWORD)v105 != v104 );
          v101 = v150;
          v100 = v152;
          v99 = v142;
        }
        v101 += 10;
        v100 += 10;
        --v99;
        v150 = v101;
        v142 = v99;
        v152 = v100;
      }
      while ( v99 );
      v113 = dword_140404A6C[308307070];
      v114 = 16;
      v115 = dword_140404A6C[289301093];
      if ( v106 < 0x10000 )
      {
        v116 = LOWORD(dword_140404A6C[308307070]);
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v106) &= ~(((1 << v114) - 1) << v115);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v116 << SLOBYTE(dword_140404A6C[289301093]);
          v117 = 8 - dword_140404A6C[289301093];
          v106 = dword_140404A6C[289301092];
          if ( v114 < 8 - dword_140404A6C[289301093] )
            break;
          v115 = 0;
          dword_140404A6C[289301093] = 0;
          if ( v114 == v117 )
          {
            v106 = ++dword_140404A6C[289301092];
            goto LABEL_204;
          }
          v106 = dword_140404A6C[289301092] + 1;
          v116 >>= v117;
          v114 -= v117;
          ++dword_140404A6C[289301092];
          if ( v114 <= 0 )
            goto LABEL_204;
        }
        v115 = v114 + dword_140404A6C[289301093];
        dword_140404A6C[289301093] += v114;
      }
LABEL_204:
      LOBYTE(v99) = 0;
      v118 = dword_140404A6C[v143 + 438887424];
      v119 = v113 - v118 + 0x10000;
      if ( v113 >= v118 )
        v119 = v113 - v118;
      if ( v119 > 63 )
        v119 = 63;
      v120 = 6;
      if ( !dword_140404A6C[456202445] )
        v119 = 0;
      if ( v106 < 0x10000 )
      {
        v121 = v115;
        v122 = v119 & 0x3F;
        v123 = v106;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v123) &= ~(((1 << v120) - 1) << v121);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v122 << SLOBYTE(dword_140404A6C[289301093]);
          v124 = 8 - dword_140404A6C[289301093];
          if ( v120 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = 0;
          if ( v120 == v124 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_218;
          }
          v120 -= v124;
          v123 = dword_140404A6C[289301092] + 1;
          v122 >>= v124;
          ++dword_140404A6C[289301092];
          v121 = 0;
          if ( v120 <= 0 )
            goto LABEL_218;
        }
        dword_140404A6C[289301093] += v120;
      }
LABEL_218:
      v125 = 47224LL * v148;
      sub_140115D90(0x140000000LL + v144 * 4 + 1759763052, 16);
      v15 = v148;
      if ( v119 > 0 )
      {
        v126 = (unsigned int)v119;
        LOBYTE(v99) = v119;
        do
        {
          sub_14010EFF0(v118, v148);
          v118 = (unsigned __int16)(v118 + 1);
          --v126;
        }
        while ( v126 );
        v125 = 47224LL * v148;
      }
      v127 = dword_140404A6C[289301092];
      v128 = dword_140404A6C[289301093];
      v129 = 6;
      dword_140404A6C[v143 + 438887424] = v118;
      dword_140404A6C[289301092] = v106;
      dword_140404A6C[289301093] = v115;
      if ( v106 < 0x10000 )
      {
        do
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v106) &= ~(((1 << v129) - 1) << v115);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v99 << SLOBYTE(dword_140404A6C[289301093]);
          v130 = 8 - dword_140404A6C[289301093];
          if ( v129 <= 8 - dword_140404A6C[289301093] )
            break;
          v129 -= v130;
          v106 = dword_140404A6C[289301092] + 1;
          LODWORD(v99) = (unsigned int)v99 >> v130;
          ++dword_140404A6C[289301092];
          LOBYTE(v115) = 0;
          dword_140404A6C[289301093] = 0;
        }
        while ( v129 > 0 );
        v15 = v148;
      }
      dword_140404A6C[289301092] = v127;
      dword_140404A6C[289301093] = v128;
      if ( v127 < 0x10000 )
      {
        if ( v128 > 0 )
        {
          dword_140404A6C[289301092] = ++v127;
          dword_140404A6C[289301093] = 0;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v127) = dword_140404A6C[v125 + 438934627];
        v128 = dword_140404A6C[289301093];
        v127 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] += 4;
      }
      ++dword_140404A6C[v143 + 438934627];
      if ( v127 < 0x10000 )
      {
        if ( v128 > 0 )
        {
          dword_140404A6C[289301092] = ++v127;
          dword_140404A6C[289301093] = 0;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v127) = dword_140404A6C[v125 + 438934625];
        v127 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v127;
        if ( v127 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v127;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v127;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v127) = dword_140404A6C[v125 + 438934626];
          v127 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] += 4;
        }
      }
      dword_140404A6C[v143 + 438887412] += v127;
      v131 = dword_140404A6C[v143 + 438887406];
      v132 = dword_140404A6C[v143 + 438887405];
      dword_140404A6C[456202456] = v127;
      sub_140130350(v132, v131, *(_QWORD *)&dword_140404A6C[v143 + 438887407]);
      v3 = 0;
      goto LABEL_238;
    }
    v44 = &dword_140404A6C[284023018];
    v3 = 3;
    v45 = &dword_140404A6C[283831505];
    do
    {
      sub_140115D90(v45, 16);
      sub_140115D90(v44, 16);
      v45 += 5873;
      ++v44;
      --v3;
    }
    while ( v3 );
    goto LABEL_64;
  }
LABEL_240:
  v133 = 0;
  v149 = 0;
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v134 = &dword_140404A6C[438887407];
    do
    {
      if ( v134[3] && (((unsigned __int8)v133 ^ LOBYTE(dword_140404A6C[283831474])) & 0x7F) == 0 )
      {
        v135 = &dword_140404A6C[438881245];
        dword_140404A6C[289301094] = dword_1402B2658;
        v136 = &dword_140404A6C[438881247];
        *(_QWORD *)&dword_140404A6C[289301092] = 5;
        v137 = 256;
        LOBYTE(dword_140404A6C[289301095]) = 9;
        do
        {
          sub_140115D90(v136 - 2, 1);
          if ( *v135 )
          {
            v138 = dword_140404A6C[289301092];
            if ( (int)dword_140404A6C[289301092] < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                v138 = dword_140404A6C[289301092] + 1;
                dword_140404A6C[289301093] = 0;
                ++dword_140404A6C[289301092];
              }
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v138) = *v136;
              v139 = dword_140404A6C[289301092] + 4;
              dword_140404A6C[289301092] = v139;
              if ( v139 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v139;
                  dword_140404A6C[289301093] = 0;
                  dword_140404A6C[289301092] = v139;
                }
                v140 = *(_OWORD *)(v136 + 5);
                *(_OWORD *)((char *)&dword_140404A6C[289301094] + v139) = *(_OWORD *)(v136 + 1);
                *(_OWORD *)((char *)&dword_140404A6C[289301098] + v139) = v140;
                v141 = dword_140404A6C[289301092] + 32;
                dword_140404A6C[289301092] = v141;
                if ( v141 < 0x10000 )
                {
                  if ( (int)dword_140404A6C[289301093] > 0 )
                  {
                    ++v141;
                    dword_140404A6C[289301093] = 0;
                    dword_140404A6C[289301092] = v141;
                  }
                  *(unsigned int *)((char *)&dword_140404A6C[289301094] + v141) = v136[17];
                  dword_140404A6C[289301092] += 4;
                }
              }
            }
          }
          v136 += 20;
          v135 += 20;
          --v137;
        }
        while ( v137 );
        sub_140130350(*(v134 - 2), *((_WORD *)v134 - 2), *(_QWORD *)v134);
        v133 = v149;
      }
      ++v133;
      v134 += 47224;
      v149 = v133;
    }
    while ( v133 < (int)dword_140404A6C[456202445] );
  }
}

