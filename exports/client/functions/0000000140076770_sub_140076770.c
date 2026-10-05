/* Address: 0x140076770 | Name: sub_140076770 | Size: 2682 bytes */
__int64 __fastcall sub_140076770(char a1)
{
  unsigned int *v1; // rdx
  unsigned int *v2; // r8
  __int64 v3; // rax
  __int64 v5; // r14
  __int128 v6; // xmm1
  unsigned int v7; // r10d
  int j; // edx
  unsigned int v9; // r9d
  __int64 v10; // rcx
  int i; // ecx
  __int64 v12; // rdx
  unsigned int v13; // eax
  int v14; // ebp
  int v15; // esi
  unsigned int v16; // xmm3_4
  unsigned int v17; // xmm2_4
  signed int v18; // ebx
  __int64 v19; // rcx
  unsigned int v20; // edi
  int v21; // r9d
  __int64 v22; // r10
  int v23; // edx
  unsigned int *v24; // rcx
  __int64 v25; // r11
  unsigned __int64 v26; // r10
  unsigned int *v27; // r8
  __int64 v28; // rcx
  float v29; // xmm0_4
  float v30; // xmm0_4
  __int64 v31; // rcx
  float v32; // xmm0_4
  float v33; // xmm0_4
  __int64 v34; // rcx
  float v35; // xmm0_4
  float v36; // xmm0_4
  __int64 v37; // rcx
  float v38; // xmm0_4
  float v39; // xmm0_4
  __int64 v40; // rcx
  float v41; // xmm0_4
  float v42; // xmm0_4
  unsigned int v43; // edx
  unsigned int *v44; // rax
  int v45; // ecx
  signed int v46; // r8d
  int v47; // edx
  __int64 v48; // r11
  unsigned int *v49; // rcx
  signed int v50; // r9d
  unsigned int v51; // r10d
  __int64 v52; // rcx
  unsigned int *v53; // rcx
  int v54; // edx
  __int64 v55; // rbx
  __int64 v56; // rax
  float *v57; // rax
  int v58; // edx
  unsigned int v59; // r10d
  signed int v60; // ecx
  float v61; // xmm0_4
  __int64 v62; // rcx
  unsigned int v63; // r8d
  __int64 v64; // r9
  int v65; // edx
  __int64 v66; // r10
  unsigned int *v67; // rcx
  int v68; // eax
  unsigned int *v69; // rcx
  int v70; // eax
  __int64 result; // rax
  int v72; // [rsp+60h] [rbp+8h] BYREF
  int v73; // [rsp+68h] [rbp+10h] BYREF

  v1 = &dword_140404A6C[70317141];
  dword_140404A6C[70087108] = dword_140404A6C[70087106];
  v2 = &dword_140404A6C[70317013];
  v3 = 2;
  v5 = 128;
  do
  {
    *(_OWORD *)v1 = *(_OWORD *)v2;
    *((_OWORD *)v1 + 1) = *((_OWORD *)v2 + 1);
    *((_OWORD *)v1 + 2) = *((_OWORD *)v2 + 2);
    *((_OWORD *)v1 + 3) = *((_OWORD *)v2 + 3);
    *((_OWORD *)v1 + 4) = *((_OWORD *)v2 + 4);
    *((_OWORD *)v1 + 5) = *((_OWORD *)v2 + 5);
    *((_OWORD *)v1 + 6) = *((_OWORD *)v2 + 6);
    v1 += 32;
    v6 = *((_OWORD *)v2 + 7);
    v2 += 32;
    *((_OWORD *)v1 - 1) = v6;
    --v3;
  }
  while ( v3 );
  v7 = dword_140404A6C[468760165];
  *(_OWORD *)v1 = *(_OWORD *)v2;
  *((_OWORD *)v1 + 1) = *((_OWORD *)v2 + 1);
  *((_OWORD *)v1 + 2) = *((_OWORD *)v2 + 2);
  *((_OWORD *)v1 + 3) = *((_OWORD *)v2 + 3);
  *((_WORD *)v1 + 32) = *((_WORD *)v2 + 32);
  *((_BYTE *)v1 + 66) = *((_BYTE *)v2 + 66);
  if ( (a1 & 2) != 0 )
  {
    if ( !dword_140404A6C[70318064] )
    {
      for ( i = dword_140404A6C[70087110]; i != v7; dword_140404A6C[70087110] = i )
      {
        if ( !dword_140404A6C[5 * i + 468760167] )
        {
          v12 = (int)dword_140404A6C[dword_140404A6C[5 * i + 468760168] + 70317269];
          if ( (_DWORD)v12 != -1 )
          {
            dword_140404A6C[122 * v12 + 70087121] = 1;
            LOWORD(i) = dword_140404A6C[70087110];
          }
        }
        i = ((_WORD)i + 1) & 0x3FF;
      }
    }
  }
  else if ( !dword_140404A6C[70318064] )
  {
    for ( j = dword_140404A6C[468760166]; j != v7; dword_140404A6C[468760166] = j )
    {
      v9 = dword_140404A6C[5 * j + 468760167];
      if ( v9 == 1 )
      {
        v10 = (int)dword_140404A6C[dword_140404A6C[5 * j + 468760168] + 70317269];
        if ( (_DWORD)v10 != -1 )
          dword_140404A6C[122 * v10 + 70087121] = 1;
        *((_BYTE *)&dword_140404A6C[70317013] + (int)dword_140404A6C[5 * j + 468760168]) = 0;
      }
      if ( !v9 )
        *((_BYTE *)&dword_140404A6C[70317013] + (int)dword_140404A6C[5 * j + 468760168]) = 1;
      j = ((_WORD)j + 1) & 0x3FF;
    }
  }
  dword_140404A6C[70087110] = v7;
  dword_140404A6C[70317858] = dword_140404A6C[70317819];
  *(_OWORD *)&dword_140404A6C[70317820] = *(_OWORD *)&dword_140404A6C[70317781];
  *(_OWORD *)&dword_140404A6C[70317824] = *(_OWORD *)&dword_140404A6C[70317785];
  *(_OWORD *)&dword_140404A6C[70317828] = *(_OWORD *)&dword_140404A6C[70317789];
  *(_OWORD *)&dword_140404A6C[70317832] = *(_OWORD *)&dword_140404A6C[70317793];
  *(_OWORD *)&dword_140404A6C[70317836] = *(_OWORD *)&dword_140404A6C[70317797];
  *(_OWORD *)&dword_140404A6C[70317840] = *(_OWORD *)&dword_140404A6C[70317801];
  *(_OWORD *)&dword_140404A6C[70317844] = *(_OWORD *)&dword_140404A6C[70317805];
  *(_OWORD *)&dword_140404A6C[70317848] = *(_OWORD *)&dword_140404A6C[70317809];
  *(_QWORD *)&dword_140404A6C[70317856] = *(_QWORD *)&dword_140404A6C[70317817];
  *(_OWORD *)&dword_140404A6C[70317852] = *(_OWORD *)&dword_140404A6C[70317813];
  if ( (a1 & 1) != 0 )
  {
    v13 = dword_140404A6C[468760163];
    v15 = dword_140404A6C[468760162];
    v14 = dword_140404A6C[468760161];
    v17 = dword_140404A6C[468760126];
    v16 = dword_140404A6C[468760125];
  }
  else
  {
    v13 = MEMORY[0x140198EFF](&v72, &v73);
    v14 = v13 & 1;
    v15 = ((unsigned __int8)v13 >> 2) & 1;
    dword_140404A6C[468760163] = v13;
    dword_140404A6C[468760161] = v14;
    dword_140404A6C[468760162] = v15;
    *(float *)&v16 = (float)((float)v72 * *(float *)&dword_140404A6C[438291414])
                   / (float)(int)dword_140404A6C[137297755];
    dword_140404A6C[468760125] = v16;
    *(float *)&v17 = (float)((float)v73 * *(float *)&dword_140404A6C[438291415])
                   / (float)(int)dword_140404A6C[137297756];
    dword_140404A6C[468760126] = v17;
  }
  v18 = dword_140404A6C[70087103];
  dword_140404A6C[70317819] = v13;
  dword_140404A6C[70087046] = -1;
  dword_140404A6C[70087029] = 0;
  dword_140404A6C[70087064] = -1;
  dword_140404A6C[70087047] = 0;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1082130432;
  dword_140404A6C[70087083] = 1;
  *(_OWORD *)&dword_140404A6C[70317781] = *(_OWORD *)&dword_140404A6C[468760125];
  *(_OWORD *)&dword_140404A6C[70317785] = *(_OWORD *)&dword_140404A6C[468760129];
  *(_OWORD *)&dword_140404A6C[70317789] = *(_OWORD *)&dword_140404A6C[468760133];
  *(_OWORD *)&dword_140404A6C[70317793] = *(_OWORD *)&dword_140404A6C[468760137];
  *(_OWORD *)&dword_140404A6C[70317797] = *(_OWORD *)&dword_140404A6C[468760141];
  *(_OWORD *)&dword_140404A6C[70317801] = *(_OWORD *)&dword_140404A6C[468760145];
  *(_OWORD *)&dword_140404A6C[70317805] = *(_OWORD *)&dword_140404A6C[468760149];
  *(_OWORD *)&dword_140404A6C[70317809] = *(_OWORD *)&dword_140404A6C[468760153];
  *(_QWORD *)&dword_140404A6C[70317817] = *(_QWORD *)&dword_140404A6C[468760161];
  *(_OWORD *)&dword_140404A6C[70317813] = *(_OWORD *)&dword_140404A6C[468760157];
  if ( dword_140404A6C[70087103] != -1 )
  {
    v19 = 98LL * (int)dword_140404A6C[70087103];
    if ( (int)dword_140404A6C[v19 + 70290891] < 3 )
    {
      v18 = dword_140404A6C[v19 + 70290894];
      dword_140404A6C[70087103] = v18;
    }
  }
  v20 = -1;
  do
  {
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = &dword_140404A6C[70290893];
    do
    {
      if ( *(v24 - 2) == 3 && *v24 == v20 )
      {
        ++v22;
        dword_140404A6C[v24[2] + 18215381] = v23;
      }
      ++v23;
      v24 += 98;
    }
    while ( v23 < 256 );
    v25 = v22 - 1;
    if ( v22 - 1 < 0 )
      break;
    if ( v22 < 4 )
      goto LABEL_163;
    v26 = (unsigned __int64)v22 >> 2;
    v27 = &dword_140404A6C[v25 + 18215379];
    v25 -= 4 * v26;
    do
    {
      v28 = 98LL * (int)v27[2];
      if ( dword_140404A6C[v28 + 70290891] == 3 )
      {
        v29 = *(float *)&dword_140404A6C[v28 + 70290973];
        if ( *(float *)&v16 >= v29 && *(float *)&v16 < (float)(v29 + *(float *)&dword_140404A6C[v28 + 70290975]) )
        {
          v30 = *(float *)&dword_140404A6C[v28 + 70290974];
          if ( *(float *)&v17 >= v30 && *(float *)&v17 < (float)(v30 + *(float *)&dword_140404A6C[v28 + 70290976]) )
          {
            v20 = v27[2];
            v21 = 1;
          }
        }
      }
      v31 = 98LL * (int)v27[1];
      if ( dword_140404A6C[v31 + 70290891] == 3 )
      {
        v32 = *(float *)&dword_140404A6C[v31 + 70290973];
        if ( *(float *)&v16 >= v32 && *(float *)&v16 < (float)(v32 + *(float *)&dword_140404A6C[v31 + 70290975]) )
        {
          v33 = *(float *)&dword_140404A6C[v31 + 70290974];
          if ( *(float *)&v17 >= v33 && *(float *)&v17 < (float)(v33 + *(float *)&dword_140404A6C[v31 + 70290976]) )
          {
            v20 = v27[1];
            v21 = 1;
          }
        }
      }
      v34 = 98LL * (int)*v27;
      if ( dword_140404A6C[v34 + 70290891] == 3 )
      {
        v35 = *(float *)&dword_140404A6C[v34 + 70290973];
        if ( *(float *)&v16 >= v35 && *(float *)&v16 < (float)(v35 + *(float *)&dword_140404A6C[v34 + 70290975]) )
        {
          v36 = *(float *)&dword_140404A6C[v34 + 70290974];
          if ( *(float *)&v17 >= v36 && *(float *)&v17 < (float)(v36 + *(float *)&dword_140404A6C[v34 + 70290976]) )
          {
            v20 = *v27;
            v21 = 1;
          }
        }
      }
      v37 = 98LL * (int)*(v27 - 1);
      if ( dword_140404A6C[v37 + 70290891] == 3 )
      {
        v38 = *(float *)&dword_140404A6C[v37 + 70290973];
        if ( *(float *)&v16 >= v38 && *(float *)&v16 < (float)(v38 + *(float *)&dword_140404A6C[v37 + 70290975]) )
        {
          v39 = *(float *)&dword_140404A6C[v37 + 70290974];
          if ( *(float *)&v17 >= v39 && *(float *)&v17 < (float)(v39 + *(float *)&dword_140404A6C[v37 + 70290976]) )
          {
            v20 = *(v27 - 1);
            v21 = 1;
          }
        }
      }
      v27 -= 4;
      --v26;
    }
    while ( v26 );
    if ( v25 >= 0 )
    {
LABEL_163:
      do
      {
        v40 = 98LL * (int)dword_140404A6C[v25 + 18215381];
        if ( dword_140404A6C[v40 + 70290891] == 3 )
        {
          v41 = *(float *)&dword_140404A6C[v40 + 70290973];
          if ( *(float *)&v16 >= v41 && *(float *)&v16 < (float)(v41 + *(float *)&dword_140404A6C[v40 + 70290975]) )
          {
            v42 = *(float *)&dword_140404A6C[v40 + 70290974];
            if ( *(float *)&v17 >= v42 && *(float *)&v17 < (float)(v42 + *(float *)&dword_140404A6C[v40 + 70290976]) )
            {
              v20 = dword_140404A6C[v25 + 18215381];
              v21 = 1;
            }
          }
        }
        --v25;
      }
      while ( v25 >= 0 );
    }
  }
  while ( v21 );
  v43 = dword_140404A6C[70087107];
  if ( dword_140404A6C[70315979] == 3 )
    v20 = dword_140404A6C[70315981];
  dword_140404A6C[70087105] = v20;
  if ( dword_140404A6C[70087107] != -1 )
  {
    if ( dword_140404A6C[122 * dword_140404A6C[70087107] + 70087113] != 3 )
      v43 = -1;
    dword_140404A6C[70087107] = v43;
  }
  if ( v14 && !dword_140404A6C[70317856] || v15 && !dword_140404A6C[70317857] )
  {
    v18 = v20;
    v44 = &dword_140404A6C[70087115];
    dword_140404A6C[70087103] = v20;
    v45 = 0;
    v46 = v20;
    do
    {
      if ( *(v44 - 2) == 3 && *v44 == 6 )
      {
        if ( v44[7] == v20 )
          v43 = v45;
        dword_140404A6C[70087107] = v43;
      }
      ++v45;
      v44 += 122;
    }
    while ( v45 < 1024 );
    if ( v20 != -1 )
    {
      do
      {
        v47 = 0;
        v48 = 98LL * v46;
        v49 = &dword_140404A6C[70290895];
        v50 = dword_140404A6C[v48 + 70290895];
        v51 = dword_140404A6C[v48 + 70290893];
        do
        {
          if ( (int)*(v49 - 4) >= 2 && v47 != v46 && *(v49 - 2) == v51 && (int)*v49 < v50 )
            ++*v49;
          ++v47;
          v49 += 98;
        }
        while ( v47 < 256 );
        v46 = dword_140404A6C[v48 + 70290893];
        dword_140404A6C[v48 + 70290895] = 0;
      }
      while ( v46 != -1 );
      v18 = dword_140404A6C[70087103];
    }
  }
  dword_140404A6C[70087104] = v18;
  if ( v18 != -1 )
  {
    v52 = 98LL * v18;
    if ( dword_140404A6C[v52 + 70290972] )
      dword_140404A6C[70087104] = dword_140404A6C[v52 + 70290894];
  }
  dword_140404A6C[70087109] = -1;
  v53 = &dword_140404A6C[70317269];
  v54 = 0;
  v55 = 512;
  do
  {
    v56 = (int)*v53;
    if ( (_DWORD)v56 != -1
      && ((int)dword_140404A6C[122 * v56 + 70087113] < 3 || dword_140404A6C[122 * v56 + 70087120] != v54) )
    {
      *v53 = -1;
    }
    ++v54;
    ++v53;
  }
  while ( v54 < 512 );
  v57 = (float *)&dword_140404A6C[70087135];
  v58 = 0;
  v59 = dword_140404A6C[70087109];
  v60 = dword_140404A6C[70087106];
  do
  {
    if ( *((_DWORD *)v57 - 22) == 3 && *((_DWORD *)v57 - 13) == v20 )
    {
      if ( *((_DWORD *)v57 - 17) )
      {
        v61 = *(v57 - 1);
        if ( *(float *)&dword_140404A6C[70317781] >= v61
          && *(float *)&dword_140404A6C[70317781] < (float)(v61 + v57[1])
          && *(float *)&dword_140404A6C[70317782] >= *v57
          && *(float *)&dword_140404A6C[70317782] < (float)(*v57 + v57[2])
          && (!dword_140404A6C[70317817] || !dword_140404A6C[70317856] || v60 == v58) )
        {
          dword_140404A6C[70087109] = v58;
          v59 = v58;
          if ( dword_140404A6C[70317817] )
          {
            if ( !dword_140404A6C[70317856] )
              v60 = v58;
            dword_140404A6C[70087106] = v60;
          }
        }
      }
    }
    ++v58;
    v57 += 122;
  }
  while ( v58 < 1024 );
  if ( v59 != -1 )
  {
LABEL_126:
    if ( dword_140404A6C[70317817] )
      goto LABEL_132;
    goto LABEL_127;
  }
  if ( dword_140404A6C[70317817] )
  {
    if ( !dword_140404A6C[70317856] )
      v60 = -1;
    dword_140404A6C[70087106] = v60;
    goto LABEL_126;
  }
LABEL_127:
  *(_QWORD *)&dword_140404A6C[70317860] = -1;
  if ( v60 != -1 && !dword_140404A6C[70317856] )
  {
    v62 = 122LL * v60;
    if ( (int)dword_140404A6C[v62 + 70087113] < 3 || dword_140404A6C[v62 + 70087115] - 3 > 2 )
      dword_140404A6C[70087106] = -1;
  }
LABEL_132:
  v63 = dword_140404A6C[70087111];
  if ( dword_140404A6C[70087111] != -1 )
  {
    v64 = 0;
    v65 = 1;
    v66 = 4;
    do
    {
      if ( (dword_140404A6C[70326261] & v65) == v65 && (dword_140404A6C[70326262] & v65) != v65 )
      {
        if ( dword_140404A6C[122 * (int)v63 + 70087138 + v64] != -1 )
          v63 = dword_140404A6C[122 * (int)v63 + 70087138 + v64];
        dword_140404A6C[70087111] = v63;
      }
      v65 = __ROL4__(v65, 1);
      ++v64;
      --v66;
    }
    while ( v66 );
    if ( (int)dword_140404A6C[122 * v63 + 70087113] < 3 )
      v63 = -1;
    dword_140404A6C[70087111] = v63;
  }
  dword_140404A6C[70087112] = 0;
  if ( (dword_140404A6C[70326261] & 0x10) != 0 )
    dword_140404A6C[70087112] = (dword_140404A6C[70326262] & 0x10) == 0;
  dword_140404A6C[70326262] = dword_140404A6C[70326261];
  v67 = &dword_140404A6C[70290989];
  do
  {
    v68 = *(v67 - 98);
    if ( v68 > 1 )
      *(v67 - 98) = v68 - 1;
    if ( (int)*v67 > 1 )
      --*v67;
    v67 += 196;
    --v5;
  }
  while ( v5 );
  v69 = &dword_140404A6C[70087235];
  do
  {
    v70 = *(v69 - 122);
    if ( v70 > 1 )
      *(v69 - 122) = v70 - 1;
    if ( (int)*v69 > 1 )
      --*v69;
    v69 += 244;
    --v55;
  }
  while ( v55 );
  if ( (int)dword_140404A6C[70315979] > 0 )
    --dword_140404A6C[70315979];
  result = dword_140404A6C[70316496];
  dword_140404A6C[70318064] = 0;
  if ( (int)dword_140404A6C[70316496] > 0 )
    return --dword_140404A6C[70316496];
  return result;
}

