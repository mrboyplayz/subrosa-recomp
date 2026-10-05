/* Address: 0x14004af40 | Name: sub_14004AF40 | Size: 1815 bytes */
void __noreturn sub_14004AF40()
{
  FILE *v0; // rax
  int v1; // eax
  char *v2; // rcx
  int v3; // edx
  int v4; // r8d
  int v5; // edi
  __int64 v6; // rcx
  char v7; // al
  int i; // r8d
  __int64 v9; // rax
  int v10; // edx
  int *v11; // rax
  int v12; // ecx
  int v13; // r12d
  int v14; // ebp
  int v15; // r15d
  int v16; // ecx
  _DWORD *v17; // rax
  int v18; // r14d
  __int64 v19; // rdx
  int *v20; // rcx
  int v21; // eax
  int v22; // r8d
  _DWORD *v23; // rbx
  int *v24; // rcx
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  unsigned int *v28; // r8
  signed int v29; // eax
  unsigned int v30; // esi
  int v31; // ebx
  int v32; // edi
  __int64 v33; // rax
  int v34; // r8d
  int v35; // r9d
  char *v36; // rdx
  int v37; // ecx
  __int64 v38; // rcx
  LARGE_INTEGER argp; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp+10h] BYREF

  v0 = fopen("serverlog.txt", "wb");
  qword_1962BCBC8 = v0;
  if ( v0 )
  {
    sub_14004F330(v0, "Server log\n");
    fclose(qword_1962BCBC8);
  }
  v1 = sub_14004FEB0();
  v2 = "connection successful\n";
  if ( !v1 )
    v2 = "connection failed\n";
  sub_1400B36F0(v2);
  v3 = dword_16E54E450;
  if ( dword_16E54E450 >= 1 )
  {
    if ( dword_16E54E450 > 30 )
      v3 = 30;
  }
  else
  {
    v3 = 1;
  }
  v4 = dword_16E54E448;
  dword_16E54E450 = v3;
  if ( dword_16E54E448 >= 2 )
  {
    if ( dword_16E54E448 > 128 )
      v4 = 128;
    dword_16E54E448 = v4;
  }
  else
  {
    v4 = 2;
    dword_16E54E448 = 2;
  }
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = *((_BYTE *)&xmmword_16E54DDEC + v6);
    *((_BYTE *)&xmmword_163D75B74 + v6++) = v7;
  }
  while ( v7 );
  dword_163D75F94 = v4;
  dword_1915413BC = 3600;
  dword_191541410 = 1260;
  dword_16E54E3EC = 1;
  dword_1915413C0 = 3600 * v3;
  word_197BC7258 = dword_16E54DBE0;
  dword_16E54E3F0 = 1;
  dword_16E54DBE8 = 1;
  dword_197BC7224 = socket(2, 2, 17);
  to.sa_family = 2;
  *(_DWORD *)&to.sa_data[2] = 0;
  *(_WORD *)to.sa_data = htons(word_197BC7258);
  tolen = 16;
  if ( !bind(dword_197BC7224, &to, 16) )
  {
    argp.LowPart = 1;
    ioctlsocket(dword_197BC7224, -2147195266, (u_long *)&argp);
    dword_197BC7204 = 1;
  }
  dword_163D75B60 = 1;
  dword_163D75B68 = 1;
  sub_1400B36F0("port:%d\n");
  sub_1400B36F0("socketenabled:%d\n");
  dword_1403C1600[0] = _time64(nullptr);
  for ( i = 1; i < 624; ++i )
  {
    v9 = i;
    v10 = i + 1812433253 * (dword_1403C1600[i - 1] ^ ((unsigned int)dword_1403C1600[i - 1] >> 30));
    dword_1403C1600[v9] = v10;
  }
  dword_140147C7C = i;
  sub_14008A390();
  sub_1400C6210();
  v11 = dword_16D67D5A0;
  dword_1961996A4[0] = 1120403456;
  dword_1961996BC = 1120403456;
  dword_1961996D4 = 1120403456;
  dword_1961996EC = 1120403456;
  do
  {
    *v11 = 0;
    v11 += 3597;
  }
  while ( (__int64)v11 < (__int64)&dword_16DA009A0 );
  v12 = dword_16E54E44C;
  dword_19154118C = dword_16E54E44C;
  if ( (unsigned int)(dword_16E54E44C - 3) > 2 )
  {
    if ( dword_16E54E44C != 7 )
      v12 = 3;
    dword_19154118C = v12;
  }
  v13 = 0;
  sub_1400B4790();
  dword_1962BCBC0 = 1;
  v14 = 0;
  if ( QueryPerformanceCounter(&argp) )
    v15 = (int)((double)(int)argp.LowPart * *(double *)&qword_196ABD8D0);
  else
    v15 = 0;
  while ( 1 )
  {
    _sleep(1u);
    v16 = v14;
    v17 = &unk_16D6802B8;
    v14 = 0;
    do
    {
      if ( *(v17 - 2886) && !*v17 )
        ++v14;
      if ( v17[711] && !v17[3597] )
        ++v14;
      if ( v17[4308] && !v17[7194] )
        ++v14;
      if ( v17[7905] && !v17[10791] )
        ++v14;
      v17 += 14388;
    }
    while ( (__int64)v17 < (__int64)dword_16DA036B8 );
    if ( v14 > 0 && !v16 )
    {
      dword_1915413A4 = 5;
      sub_1400B4790();
    }
    v18 = 0;
LABEL_47:
    while ( 1 )
    {
      v21 = QueryPerformanceCounter(&argp) ? (int)((double)(int)argp.LowPart * *(double *)&qword_196ABD8D0) : 0;
      if ( (unsigned int)(v21 - v15) < 0x10 || v18 >= 5 )
        break;
      if ( ++v18 >= 4 )
      {
        if ( QueryPerformanceCounter(&PerformanceCount) )
          v15 = (int)((double)(int)PerformanceCount.LowPart * *(double *)&qword_196ABD8D0);
        else
          v15 = 0;
      }
      else
      {
        v15 += 16;
      }
      if ( --v13 <= 0 )
      {
        v22 = dword_16DDCBA24;
        v13 = 3600;
        v19 = 0;
        if ( dword_16DDCBA24 > 0 )
        {
          v20 = (int *)&unk_16DDCBA90;
          do
          {
            if ( *v20 > 0 )
            {
              --*v20;
              v22 = dword_16DDCBA24;
            }
            v19 = (unsigned int)(v19 + 1);
            v20 += 28;
          }
          while ( (int)v19 < v22 );
        }
      }
      if ( dword_1915413AC == 2 )
      {
        v23 = &unk_16D6802B8;
        do
        {
          if ( *(v23 - 2886) && *v23 )
            sub_1400B1910((unsigned int)v5, v19);
          ++v5;
          v23 += 3597;
        }
        while ( v5 < 256 );
      }
      if ( dword_16E54E3EC && dword_16E54E3F0 && (dword_191541414 & 0x3FF) == 0 )
      {
        qmemcpy(dword_197BC7264, "7DFP@", 5);
        *(_QWORD *)&qword_197BC725C = 5;
        sub_1400BC790(dword_1909400C0);
      }
      if ( dword_163D75B40 > 0 )
      {
        v24 = (int *)&unk_160F29980;
        v25 = (unsigned int)dword_163D75B40;
        v26 = dword_16E54DBE4 / dword_163D75B40;
        v27 = (unsigned int)dword_163D75B40;
        do
        {
          *v24 = v26;
          v24 += 47224;
          --v27;
        }
        while ( v27 );
        v28 = (unsigned int *)&unk_160F2997C;
        do
        {
          v20 = (int *)v28[1];
          v28 += 47224;
          *(v28 - 47224) += ((unsigned int)(((unsigned __int64)(2004318071LL * (int)v20) >> 32) - (_DWORD)v20) >> 31)
                          + ((int)(((unsigned __int64)(2004318071LL * (int)v20) >> 32) - (_DWORD)v20) >> 5);
          v19 = ((unsigned int)(((unsigned __int64)(2004318071LL * (int)v20) >> 32) - (_DWORD)v20) >> 31)
              + ((int)(((unsigned __int64)(2004318071LL * (int)v20) >> 32) - (_DWORD)v20) >> 5);
          v29 = *(v28 - 47224);
          if ( v29 < (int)v19 )
            v29 = ((unsigned int)(((unsigned __int64)(2004318071LL * (int)v20) >> 32) - (_DWORD)v20) >> 31)
                + ((int)(((unsigned __int64)(2004318071LL * (int)v20) >> 32) - (_DWORD)v20) >> 5);
          *(v28 - 47224) = v29;
          --v25;
        }
        while ( v25 );
      }
      sub_1400BF550(v20, v19);
      dword_16E567170 = 0;
      dword_16E5F7174 = 0;
      sub_1400B2EB0();
      if ( (unsigned int)dword_1915413AC <= 2 )
        sub_1400B0230();
      sub_140097C40();
      sub_1400C2A20();
      ++dword_191541414;
      v30 = dword_1915413AC;
      if ( (unsigned int)dword_1915413AC <= 2 )
      {
        sub_14001E970();
        v30 = dword_1915413AC;
      }
      v31 = dword_196199560;
      v32 = dword_196199564;
      if ( dword_196199560 != dword_196199564 )
      {
        do
        {
          v33 = (__int64)v31 << 7;
          if ( *(_DWORD *)((char *)&unk_195999560 + v33) == 10 )
            sub_140016C00(*(int *)((char *)&dword_195999580 + v33), *(int *)((char *)&dword_195999584 + v33));
          dword_196199560 = v31 + 1;
          HIWORD(dword_196199560) = 0;
          v31 = dword_196199560;
        }
        while ( dword_196199560 != v32 );
        v30 = dword_1915413AC;
        dword_1915FC5D0 = dword_196199560;
      }
      if ( v30 > 1 )
      {
        v5 = 0;
        if ( v30 != 2 )
          continue;
      }
      v34 = dword_143988FC0;
      v5 = 0;
      v35 = 0;
      if ( dword_143988FC0 > 0 )
      {
        v36 = (char *)&unk_143818FC4;
        while ( 1 )
        {
          v37 = *(_DWORD *)v36;
          if ( *(int *)v36 < 0x10000 )
            *(_DWORD *)v36 = --v37;
          if ( v37 > 0 )
          {
            ++v35;
            v36 += 92;
          }
          else if ( v35 >= 0 )
          {
            if ( v35 >= v34 )
              goto LABEL_47;
            dword_143988FC0 = --v34;
            if ( v35 == v34 )
              goto LABEL_47;
            v38 = 92LL * v34;
            *(_OWORD *)(v36 - 4) = *(_OWORD *)((char *)&unk_143818FC0 + v38);
            *(_OWORD *)(v36 + 12) = *(_OWORD *)((char *)&unk_143818FD0 + v38);
            *(_OWORD *)(v36 + 28) = *(_OWORD *)((char *)&unk_143818FE0 + v38);
            *(_OWORD *)(v36 + 44) = *(_OWORD *)((char *)&unk_143818FF0 + v38);
            *(_OWORD *)(v36 + 60) = *(_OWORD *)((char *)&unk_143819000 + v38);
            *(_QWORD *)(v36 + 76) = *(_QWORD *)((char *)&unk_143819010 + v38);
            *((_DWORD *)v36 + 21) = *(_DWORD *)((char *)&unk_143819018 + v38);
          }
          if ( v35 >= v34 )
            goto LABEL_47;
        }
      }
    }
  }
}

