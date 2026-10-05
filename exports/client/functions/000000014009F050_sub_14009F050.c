/* Address: 0x14009f050 | Name: sub_14009F050 | Size: 3495 bytes */
__int64 __fastcall sub_14009F050(unsigned int a1)
{
  unsigned int v1; // edi
  __int64 v2; // r14
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned int v8; // r10d
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int *v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // r8
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  unsigned int *v29; // rcx
  int v30; // eax
  unsigned int v31; // r11d
  unsigned int v32; // eax
  unsigned int v33; // eax
  int v34; // esi
  unsigned int v35; // ebx
  char v36; // r12
  float v37; // xmm2_4
  __int64 v38; // rcx
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  __int64 v42; // rcx
  float v43; // xmm1_4
  float v44; // xmm0_4
  char v45; // r13
  unsigned __int8 v46; // al
  unsigned int v47; // ecx
  char v48; // al
  __int64 v49; // r14
  int v50; // r8d
  unsigned int v51; // edx
  char v52; // al
  unsigned int v53; // r10d
  unsigned int v54; // ebx
  unsigned int v55; // eax
  unsigned __int8 v56; // al
  unsigned int v57; // ecx
  __int64 v58; // rdx
  char v59; // al
  unsigned __int8 v60; // al
  unsigned int v61; // ecx
  int v62; // r8d
  __int64 v63; // rdx
  char v64; // al
  unsigned int v65; // edx
  char v66; // r9
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rax
  unsigned int v72; // eax
  __int64 v74; // [rsp+0h] [rbp-60h] BYREF
  unsigned int v75; // [rsp+20h] [rbp-40h]
  int v76; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v77; // [rsp+28h] [rbp-38h] BYREF
  __int128 v78; // [rsp+30h] [rbp-30h] BYREF
  __int128 v79; // [rsp+40h] [rbp-20h]
  float v80; // [rsp+50h] [rbp-10h]
  __int64 v81; // [rsp+58h] [rbp-8h]

  v1 = 0;
  v2 = (int)a1;
  v75 = a1;
  dword_140404A6C[438291413] = 2;
  if ( dword_140404A6C[283831311] == 1 )
  {
    dword_140404A6C[280649838] = 1;
    v3 = 1;
    dword_140404A6C[283831484] = 0;
  }
  else
  {
    dword_140404A6C[283831484] = 1;
    v3 = 0;
    if ( !dword_140404A6C[283831311] && a1 != -1 && dword_140404A6C[280649838] )
      sub_140118B70(a1);
  }
  sub_14003A0F0();
  dword_140404A6C[284024595] = dword_140404A6C[284024635];
  *(_OWORD *)&dword_140404A6C[284024557] = *(_OWORD *)&dword_140404A6C[284024597];
  *(_OWORD *)&dword_140404A6C[284024561] = *(_OWORD *)&dword_140404A6C[284024601];
  *(_OWORD *)&dword_140404A6C[284024565] = *(_OWORD *)&dword_140404A6C[284024605];
  *(_OWORD *)&dword_140404A6C[284024569] = *(_OWORD *)&dword_140404A6C[284024609];
  *(_OWORD *)&dword_140404A6C[284024573] = *(_OWORD *)&dword_140404A6C[284024613];
  *(_OWORD *)&dword_140404A6C[284024577] = *(_OWORD *)&dword_140404A6C[284024617];
  *(_OWORD *)&dword_140404A6C[284024581] = *(_OWORD *)&dword_140404A6C[284024621];
  *(_OWORD *)&dword_140404A6C[284024585] = *(_OWORD *)&dword_140404A6C[284024625];
  *(_OWORD *)&dword_140404A6C[284024589] = *(_OWORD *)&dword_140404A6C[284024629];
  *(_QWORD *)&dword_140404A6C[284024593] = *(_QWORD *)&dword_140404A6C[284024633];
  dword_140404A6C[284024635] = MEMORY[0x140198F05](&v76, &v77);
  dword_140404A6C[284024633] = dword_140404A6C[284024635] & 1;
  dword_140404A6C[284024634] = (LOBYTE(dword_140404A6C[284024635]) >> 2) & 1;
  *(float *)&dword_140404A6C[284024599] = (float)v76;
  *(float *)&dword_140404A6C[284024600] = (float)(int)v77;
  dword_140404A6C[284024597] = 1140850688;
  dword_140404A6C[284024598] = 1134559232;
  sub_140198E40();
  if ( BYTE1(dword_140404A6C[284024775]) )
  {
    BYTE1(dword_140404A6C[284024775]) = 0;
    sub_140095FC0(v5, v4, v6);
  }
  v7 = dword_140404A6C[468760166];
  v8 = dword_140404A6C[468760165];
  v9 = 0;
  dword_140404A6C[280649848] = 0;
  if ( dword_140404A6C[468760166] != dword_140404A6C[468760165] )
  {
    do
    {
      if ( (int)v9 < 32 )
      {
        dword_140404A6C[5 * (int)v9 + 280649849] = dword_140404A6C[5 * (int)v7 + 468760167];
        dword_140404A6C[5 * dword_140404A6C[280649848] + 280649852] = dword_140404A6C[5 * (int)v7 + 468760169];
        dword_140404A6C[5 * dword_140404A6C[280649848] + 280649851] = dword_140404A6C[5 * (int)v7 + 468760168];
        dword_140404A6C[5 * dword_140404A6C[280649848] + 280649853] = dword_140404A6C[5 * (int)v7 + 468760170];
        dword_140404A6C[5 * dword_140404A6C[280649848] + 280649850] = dword_140404A6C[5 * (int)v7 + 468760171];
        v9 = ++dword_140404A6C[280649848];
      }
      v7 = ((_WORD)v7 + 1) & 0x3FF;
      dword_140404A6C[468760166] = v7;
    }
    while ( (_DWORD)v7 != v8 );
  }
  if ( (_DWORD)v2 != -1 )
  {
    v10 = (int)dword_140404A6C[3597 * v2 + 71856292];
    if ( (_DWORD)v10 != -1 )
    {
      v11 = 7166 * v10;
      if ( (int)dword_140404A6C[7166 * v10 + 280651318] > 0 && (int)dword_140404A6C[v11 + 280658139] > 0 )
      {
        v12 = (int)dword_140404A6C[v11 + 280658140];
        if ( (_DWORD)v12 != -1 && dword_140404A6C[1760 * v12 + 278845898] == 39 )
        {
          sub_1400A1640((unsigned int)v2, v12, v7, v9);
          LODWORD(v9) = dword_140404A6C[280649848];
        }
      }
    }
  }
  v13 = 2;
  v14 = (__int64)&dword_140404A6C[284024765];
  v15 = &dword_140404A6C[284024637];
  do
  {
    v15 += 32;
    v16 = *(_OWORD *)v14;
    v17 = *(_OWORD *)(v14 + 16);
    v14 += 128;
    *((_OWORD *)v15 - 8) = v16;
    v18 = *(_OWORD *)(v14 - 96);
    *((_OWORD *)v15 - 7) = v17;
    v19 = *(_OWORD *)(v14 - 80);
    *((_OWORD *)v15 - 6) = v18;
    v20 = *(_OWORD *)(v14 - 64);
    *((_OWORD *)v15 - 5) = v19;
    v21 = *(_OWORD *)(v14 - 48);
    *((_OWORD *)v15 - 4) = v20;
    v22 = *(_OWORD *)(v14 - 32);
    *((_OWORD *)v15 - 3) = v21;
    v23 = *(_OWORD *)(v14 - 16);
    *((_OWORD *)v15 - 2) = v22;
    *((_OWORD *)v15 - 1) = v23;
    --v13;
  }
  while ( v13 );
  v24 = *(unsigned __int16 *)(v14 + 64);
  v25 = 0;
  v26 = *(_OWORD *)(v14 + 16);
  *(_OWORD *)v15 = *(_OWORD *)v14;
  v27 = *(_OWORD *)(v14 + 32);
  *((_OWORD *)v15 + 1) = v26;
  v28 = *(_OWORD *)(v14 + 48);
  *((_OWORD *)v15 + 2) = v27;
  *((_OWORD *)v15 + 3) = v28;
  *((_WORD *)v15 + 32) = v24;
  *((_BYTE *)v15 + 66) = *(_BYTE *)(v14 + 66);
  if ( (int)v9 > 0 )
  {
    v29 = &dword_140404A6C[280649851];
    do
    {
      if ( !*(v29 - 1) )
      {
        v14 = (int)*v29;
        if ( (unsigned int)(v14 - 1) <= 0xFE )
        {
          v30 = *(v29 - 2);
          if ( v30 )
          {
            if ( v30 == 1 )
              *((_BYTE *)&dword_140404A6C[284024765] + v14) = 0;
          }
          else
          {
            *((_BYTE *)&dword_140404A6C[284024765] + v14) = 1;
          }
        }
      }
      v25 = (unsigned int)(v25 + 1);
      v29 += 5;
    }
    while ( (int)v25 < (int)v9 );
  }
  if ( dword_140404A6C[309078285] )
    sub_1400387E0();
  if ( dword_140404A6C[283831311] || !v3 )
  {
    v31 = dword_140404A6C[280649838];
    if ( dword_140404A6C[280649838] )
    {
      dword_140404A6C[280649840] = 1;
      goto LABEL_39;
    }
  }
  else
  {
    v31 = 0;
    dword_140404A6C[280649838] = 0;
  }
  v32 = dword_140404A6C[280649840];
  if ( !dword_140404A6C[284024633] )
    v32 = 0;
  dword_140404A6C[280649840] = v32;
LABEL_39:
  dword_140404A6C[280649839] = v31;
  if ( !dword_140404A6C[283785909] && LOBYTE(dword_140404A6C[284024775]) && !LOBYTE(dword_140404A6C[284024647]) )
  {
    LOBYTE(dword_140404A6C[283785913]) = 0;
    dword_140404A6C[283785909] = 1;
  }
  if ( dword_140404A6C[19065870] )
  {
    if ( HIBYTE(dword_140404A6C[284024769]) && !HIBYTE(dword_140404A6C[284024641]) )
      dword_140404A6C[283831479] ^= 1u;
    if ( BYTE2(dword_140404A6C[284024769]) )
    {
      v33 = dword_140404A6C[283831480];
      if ( !BYTE2(dword_140404A6C[284024641]) )
        v33 = 1;
      dword_140404A6C[283831480] = v33;
    }
    if ( LOBYTE(dword_140404A6C[284024768]) && !LOBYTE(dword_140404A6C[284024640]) )
      dword_140404A6C[283831481] ^= 1u;
    v34 = dword_140404A6C[284021982];
    if ( BYTE1(dword_140404A6C[284024778]) )
      v34 = -1;
    dword_140404A6C[284021982] = v34;
    if ( BYTE2(dword_140404A6C[284024772]) )
    {
      v35 = 1;
      dword_140404A6C[284021982] = -1;
      dword_140404A6C[19065878] = 1;
      v34 = -1;
    }
    else
    {
      v35 = dword_140404A6C[19065878];
    }
    v36 = BYTE1(dword_140404A6C[284024821]);
    if ( HIBYTE(dword_140404A6C[284024772]) )
    {
      v35 = 2;
      dword_140404A6C[19065878] = 2;
      if ( BYTE1(dword_140404A6C[284024821]) )
      {
        dword_140404A6C[284024395] = dword_140404A6C[284024388];
        dword_140404A6C[284024396] = dword_140404A6C[284024389];
        dword_140404A6C[284024397] = dword_140404A6C[284024390];
        v78 = xmmword_140278D30;
        v80 = 1.0;
        v79 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v78, (float *)&v78 + 3);
        sub_14007B2A0((__int64)&v78, (float *)&v78);
        v37 = *(float *)&dword_140404A6C[284024393];
        v35 = dword_140404A6C[19065878];
        v34 = dword_140404A6C[284021982];
        v36 = BYTE1(dword_140404A6C[284024821]);
        v38 = 7LL * (int)dword_140404A6C[19065878];
        v39 = *((float *)&v79 + 3) * *(float *)&dword_140404A6C[284024393];
        *(float *)&dword_140404A6C[v38 + 284024381] = (float)(*((float *)&v79 + 2)
                                                            * *(float *)&dword_140404A6C[284024393])
                                                    + *(float *)&dword_140404A6C[v38 + 284024381];
        v40 = v80 * v37;
        *(float *)&dword_140404A6C[v38 + 284024382] = v39 + *(float *)&dword_140404A6C[v38 + 284024382];
        *(float *)&dword_140404A6C[v38 + 284024383] = v40 + *(float *)&dword_140404A6C[v38 + 284024383];
        dword_140404A6C[v38 + 284024384] = dword_140404A6C[284024391];
        dword_140404A6C[v38 + 284024385] = dword_140404A6C[284024392];
      }
    }
    if ( LOBYTE(dword_140404A6C[284024773]) )
    {
      v35 = 3;
      dword_140404A6C[19065878] = 3;
      if ( v36 )
      {
        dword_140404A6C[284024402] = dword_140404A6C[284024388];
        dword_140404A6C[284024403] = dword_140404A6C[284024389];
        dword_140404A6C[284024404] = dword_140404A6C[284024390];
        v78 = xmmword_140278D30;
        v80 = 1.0;
        v79 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v78, (float *)&v78 + 3);
        sub_14007B2A0((__int64)&v78, (float *)&v78);
        v41 = *(float *)&dword_140404A6C[284024393];
        v35 = dword_140404A6C[19065878];
        v34 = dword_140404A6C[284021982];
        v36 = BYTE1(dword_140404A6C[284024821]);
        v42 = 7LL * (int)dword_140404A6C[19065878];
        v43 = *((float *)&v79 + 3) * *(float *)&dword_140404A6C[284024393];
        *(float *)&dword_140404A6C[v42 + 284024381] = (float)(*((float *)&v79 + 2)
                                                            * *(float *)&dword_140404A6C[284024393])
                                                    + *(float *)&dword_140404A6C[v42 + 284024381];
        v44 = v80 * v41;
        *(float *)&dword_140404A6C[v42 + 284024382] = v43 + *(float *)&dword_140404A6C[v42 + 284024382];
        *(float *)&dword_140404A6C[v42 + 284024383] = v44 + *(float *)&dword_140404A6C[v42 + 284024383];
        dword_140404A6C[v42 + 284024384] = dword_140404A6C[284024391];
        dword_140404A6C[v42 + 284024385] = dword_140404A6C[284024392];
      }
    }
    v45 = dword_140404A6C[284024648];
    if ( LOBYTE(dword_140404A6C[284024776]) && !LOBYTE(dword_140404A6C[284024648]) )
    {
      v46 = v34;
      if ( v34 >= 0 )
      {
        LOBYTE(v47) = v34 + 1;
        if ( v36 )
          LOBYTE(v47) = v34 - 1;
      }
      else
      {
        LOBYTE(v47) = 0;
        v46 = -1;
      }
      v47 = (unsigned __int8)v47;
      v25 = v46;
      while ( 1 )
      {
        v14 = 28664LL * v47;
        if ( *(unsigned int *)((char *)&dword_140404A6C[280651303] + v14) )
        {
          if ( *(int *)((char *)&dword_140404A6C[280651318] + v14) > 0
            && *(unsigned int *)((char *)&dword_140404A6C[280658438] + v14) <= 2 )
          {
            break;
          }
        }
        v48 = 1;
        if ( v36 )
          v48 = -1;
        v47 = (unsigned __int8)(v47 + v48);
        if ( v47 == (_DWORD)v25 )
          goto LABEL_82;
      }
      v34 = v47;
      dword_140404A6C[284021982] = v47;
    }
LABEL_82:
    if ( v35 == 1 )
    {
      sub_140105180(1);
    }
    else
    {
      sub_140105470(v35, v14, v25);
      if ( v34 != -1 )
        sub_14002EDF0(v35);
    }
    v31 = dword_140404A6C[280649838];
  }
  else
  {
    v34 = dword_140404A6C[284021982];
    v36 = BYTE1(dword_140404A6C[284024821]);
    v45 = dword_140404A6C[284024648];
  }
  if ( (_DWORD)v2 != -1 && !dword_140404A6C[309078285] )
  {
    v77 = v2;
    v49 = 3597 * v2;
    v50 = dword_140404A6C[v49 + 71856345];
    if ( v50 >= 0 )
    {
      v51 = dword_140404A6C[v49 + 71856342];
      dword_140404A6C[21 * (int)dword_140404A6C[v49 + 71856362] + 71856367 + v49] = 0;
      dword_140404A6C[21 * (int)dword_140404A6C[v49 + 71856362] + 71856368 + v49] = v51;
      dword_140404A6C[21 * (int)dword_140404A6C[v49 + 71856362] + 71856369 + v49] = v50;
      *(_OWORD *)&dword_140404A6C[21 * (int)dword_140404A6C[v49 + 71856362] + 71856372 + v49] = *(_OWORD *)&dword_140404A6C[v49 + 71856346];
      v52 = dword_140404A6C[v49 + 71856362] + 1;
      dword_140404A6C[v49 + 71856345] = -1;
      dword_140404A6C[v49 + 71856362] = v52 & 0x3F;
      LOBYTE(dword_140404A6C[v49 + 71856346]) = 0;
      if ( dword_140404A6C[v49 + 71856342] - 14 <= 5 )
        dword_140404A6C[v49 + 71857986] = 0;
      dword_140404A6C[v49 + 71857986] = 0;
    }
    v53 = dword_140404A6C[283831312];
    v54 = dword_140404A6C[280648133];
    if ( dword_140404A6C[283831312] == 4 && dword_140404A6C[v49 + 71856266] )
    {
      if ( dword_140404A6C[v49 + 71856342] == 1
        && HIBYTE(dword_140404A6C[284024774])
        && !HIBYTE(dword_140404A6C[284024646]) )
      {
        v55 = dword_140404A6C[284021984] ^ 1;
        dword_140404A6C[284021984] ^= 1u;
      }
      else
      {
        v55 = dword_140404A6C[284021984];
      }
      if ( v55 )
      {
        if ( BYTE2(dword_140404A6C[284024772]) )
          v34 = -1;
        dword_140404A6C[284021982] = v34;
        if ( LOBYTE(dword_140404A6C[284024776]) )
        {
          if ( !v45 )
          {
            if ( v34 >= 0 )
            {
              v56 = v34 + 1;
              if ( v36 )
                v56 = v34 - 1;
            }
            else
            {
              v56 = 0;
              LOBYTE(v34) = -1;
            }
            v57 = v56;
            while ( 1 )
            {
              v58 = 7166LL * v57;
              if ( dword_140404A6C[v58 + 280651303] )
              {
                if ( (int)dword_140404A6C[v58 + 280651318] > 0 )
                  break;
              }
              v59 = 1;
              if ( v36 )
                v59 = -1;
              v57 = (unsigned __int8)(v57 + v59);
              if ( v57 == (unsigned __int8)v34 )
                goto LABEL_140;
            }
            dword_140404A6C[284021982] = v57;
          }
        }
      }
    }
    else
    {
      dword_140404A6C[284021984] = 0;
      if ( (dword_140404A6C[283831312] == 3 || dword_140404A6C[283831312] - 5 <= 2)
        && !dword_140404A6C[284021983]
        && !dword_140404A6C[280648133] )
      {
        if ( BYTE2(dword_140404A6C[284024772]) )
          v34 = -1;
        if ( LOBYTE(dword_140404A6C[284024776]) && !v45 )
        {
          v60 = v34;
          if ( v34 >= 0 )
          {
            LOBYTE(v61) = v34 + 1;
            if ( v36 )
              LOBYTE(v61) = v34 - 1;
          }
          else
          {
            LOBYTE(v61) = 0;
            v60 = -1;
          }
          v61 = (unsigned __int8)v61;
          v62 = v60;
          while ( 1 )
          {
            v63 = 7166LL * v61;
            if ( dword_140404A6C[v63 + 280651303] )
            {
              if ( (int)dword_140404A6C[v63 + 280651318] > 0 && dword_140404A6C[v63 + 280658438] <= 2 )
                break;
            }
            v64 = 1;
            if ( v36 )
              v64 = -1;
            v61 = (unsigned __int8)(v61 + v64);
            if ( v61 == v62 )
              goto LABEL_137;
          }
          v34 = v61;
        }
LABEL_137:
        if ( dword_140404A6C[283831448] != 2 )
          v34 = -1;
        dword_140404A6C[284021982] = v34;
      }
    }
LABEL_140:
    v65 = dword_140404A6C[280649843];
    dword_140404A6C[280649844] = dword_140404A6C[280649843];
    *(_QWORD *)&dword_140404A6C[280649845] = 0;
    v66 = *((_BYTE *)&dword_140404A6C[284024765] + (int)dword_140404A6C[280651037]);
    if ( !v66 )
      v65 = 0;
    dword_140404A6C[280649843] = v65;
    if ( !dword_140404A6C[280648133] )
    {
      dword_140404A6C[280649846] = *((_BYTE *)&dword_140404A6C[284024765] + (int)dword_140404A6C[280651039]) != 0;
      if ( !v66 || *((_BYTE *)&dword_140404A6C[284024637] + (int)dword_140404A6C[280651037]) )
      {
        if ( !v65 )
          dword_140404A6C[280649845] = dword_140404A6C[284024634] != 0;
      }
      else
      {
        dword_140404A6C[280649843] = 1;
      }
    }
    v67 = (int)dword_140404A6C[v49 + 71856292];
    dword_140404A6C[v49 + 71856339] = 0;
    if ( (_DWORD)v67 != -1 )
    {
      v68 = 7166 * v67;
      if ( (int)dword_140404A6C[7166 * v67 + 280651318] > 0 )
      {
        v69 = (int)dword_140404A6C[v68 + 280651313];
        dword_140404A6C[v49 + 71856339] = 1;
        if ( (_DWORD)v69 != -1 )
        {
          if ( dword_140404A6C[24944 * dword_140404A6C[5210 * v69 + 129716710] + 346707719] == 1
            || dword_140404A6C[v68 + 280651314] )
          {
            dword_140404A6C[v49 + 71856339] = 2;
          }
          else
          {
            dword_140404A6C[v49 + 71856339] = 3;
          }
        }
        goto LABEL_175;
      }
    }
    v70 = v77;
    v71 = 3597 * v77;
    *(_QWORD *)&dword_140404A6C[v71 + 71856293] = 0;
    *(_QWORD *)&dword_140404A6C[v71 + 71856295] = 0;
    dword_140404A6C[v49 + 71856325] = 0;
    *(_QWORD *)&dword_140404A6C[v49 + 71856331] = 0;
    if ( v53 == 3 || v53 - 5 <= 2 || v53 == 4 && dword_140404A6C[v49 + 71856266] )
    {
      if ( !v31 )
      {
        sub_140105180(1);
        goto LABEL_164;
      }
    }
    else if ( !v31 )
    {
LABEL_164:
      if ( !v54 )
      {
        if ( BYTE2(dword_140404A6C[284024772]) )
        {
          v1 = 64;
          dword_140404A6C[v49 + 71856325] = 64;
        }
        if ( HIBYTE(dword_140404A6C[284024772]) )
        {
          v1 |= 0x80u;
          dword_140404A6C[v49 + 71856325] = v1;
        }
        if ( LOBYTE(dword_140404A6C[284024773]) )
        {
          v1 |= 0x100u;
          dword_140404A6C[v49 + 71856325] = v1;
        }
        if ( BYTE1(dword_140404A6C[284024773]) )
        {
          v1 |= 0x200u;
          dword_140404A6C[v49 + 71856325] = v1;
        }
        if ( BYTE1(dword_140404A6C[284024770]) )
          dword_140404A6C[3597 * v70 + 71856325] = v1 | 0x1000;
      }
    }
LABEL_175:
    v72 = dword_140404A6C[v49 + 71856339];
    switch ( v72 )
    {
      case 1u:
        sub_1400A21B0(v75);
        break;
      case 2u:
        sub_1400A0EB0(v75);
        break;
      case 3u:
        sub_1400A1D20(v75);
        break;
    }
    dword_140404A6C[v49 + 71856340] = dword_140404A6C[v49 + 71856339];
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v74 ^ v81);
}

