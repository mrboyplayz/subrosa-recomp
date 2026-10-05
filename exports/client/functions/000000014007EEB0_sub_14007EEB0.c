/* Address: 0x14007eeb0 | Name: sub_14007EEB0 | Size: 1203 bytes */
void __noreturn sub_14007EEB0()
{
  int v0; // eax
  const char *v1; // rcx
  unsigned int v2; // edx
  unsigned int v3; // r8d
  __int64 v4; // rcx
  char v5; // al
  int i; // r8d
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int *v11; // rax
  __int64 v12; // rcx
  int v13; // r15d
  int v14; // esi
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int *v19; // rax
  int v20; // ebp
  int v21; // eax
  signed int v22; // r8d
  signed int v23; // edx
  unsigned int *v24; // rcx
  int v25; // edi
  unsigned int *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 argp; // [rsp+60h] [rbp+8h] BYREF
  __int64 PerformanceCount; // [rsp+68h] [rbp+10h] BYREF

  v0 = sub_1400A3F30();
  v1 = "connection successful\n";
  if ( !v0 )
    v1 = "connection failed\n";
  sub_14011BD10(v1);
  v2 = dword_140404A6C[73991633];
  if ( (int)dword_140404A6C[73991633] >= 1 )
  {
    if ( (int)dword_140404A6C[73991633] > 30 )
      v2 = 30;
  }
  else
  {
    v2 = 1;
  }
  v3 = dword_140404A6C[73991631];
  dword_140404A6C[73991633] = v2;
  if ( (int)dword_140404A6C[73991631] >= 2 )
  {
    if ( (int)dword_140404A6C[73991631] > 128 )
      v3 = 128;
    dword_140404A6C[73991631] = v3;
  }
  else
  {
    v3 = 2;
    dword_140404A6C[73991631] = 2;
  }
  v4 = 0;
  do
  {
    v5 = *((_BYTE *)&dword_140404A6C[73991224] + v4);
    *((_BYTE *)&dword_140404A6C[456202458] + v4++) = v5;
  }
  while ( v5 );
  dword_140404A6C[456202722] = v3;
  dword_140404A6C[283831452] = 3600;
  dword_140404A6C[283831473] = 1260;
  dword_140404A6C[73991608] = 1;
  dword_140404A6C[283831453] = 3600 * v2;
  LOWORD(dword_140404A6C[289301091]) = dword_140404A6C[73991093];
  dword_140404A6C[73991609] = 1;
  dword_140404A6C[73991095] = 1;
  dword_140404A6C[289301078] = socket(2, 2, 17);
  LOWORD(dword_140404A6C[289301086]) = 2;
  dword_140404A6C[289301087] = 0;
  HIWORD(dword_140404A6C[289301086]) = htons(LOWORD(dword_140404A6C[289301091]));
  dword_140404A6C[289301090] = 16;
  if ( !(unsigned int)bind((int)dword_140404A6C[289301078], &dword_140404A6C[289301086], 16) )
  {
    LODWORD(argp) = 1;
    ioctlsocket((int)dword_140404A6C[289301078], 2147772030LL, &argp);
    dword_140404A6C[289301070] = 1;
  }
  dword_140404A6C[456202453] = 1;
  dword_140404A6C[456202455] = 1;
  sub_14011BD10("port:%d\n", LOWORD(dword_140404A6C[289301091]));
  sub_14011BD10("socketenabled:%d\n", dword_140404A6C[289301070]);
  dword_140404A6C[18600733] = sub_140237448(0);
  for ( i = 1; i < 624; ++i )
  {
    v7 = i;
    v8 = i + 1812433253 * (dword_140404A6C[i + 18600732] ^ (dword_140404A6C[i + 18600732] >> 30));
    dword_140404A6C[v7 + 18600733] = v8;
  }
  dword_14030186C = i;
  sub_1400E5F10();
  sub_14013DCD0();
  v11 = &dword_140404A6C[71856253];
  dword_140404A6C[335047062] = 1120403456;
  dword_140404A6C[335047068] = 1120403456;
  dword_140404A6C[335047074] = 1120403456;
  dword_140404A6C[335047080] = 1120403456;
  do
  {
    *v11 = 0;
    v11 += 3597;
  }
  while ( (__int64)v11 < (__int64)&dword_140404A6C[72777085] );
  v12 = dword_140404A6C[73991632];
  dword_140404A6C[283831312] = dword_140404A6C[73991632];
  if ( dword_140404A6C[73991632] - 3 > 2 )
  {
    if ( dword_140404A6C[73991632] != 7 )
      v12 = 3;
    dword_140404A6C[283831312] = v12;
  }
  v13 = 0;
  sub_140127910(v12, v9, v10);
  dword_140404A6C[349900549] = 1;
  v14 = 0;
  if ( QueryPerformanceCounter((LARGE_INTEGER *)&argp) )
    v15 = (int)((double)(int)argp * *(double *)&dword_140404A6C[278520505]);
  else
    v15 = 0;
  while ( 1 )
  {
    MEMORY[0x140198FA1](1);
    v18 = (unsigned int)v14;
    v19 = &dword_140404A6C[71859139];
    v14 = 0;
    do
    {
      if ( *(v19 - 2886) && !*v19 )
        ++v14;
      if ( v19[711] && !v19[3597] )
        ++v14;
      if ( v19[4308] && !v19[7194] )
        ++v14;
      if ( v19[7905] && !v19[10791] )
        ++v14;
      v19 += 14388;
    }
    while ( (__int64)v19 < (__int64)&dword_140404A6C[72779971] );
    if ( v14 > 0 && !(_DWORD)v18 )
    {
      dword_140404A6C[283831446] = 5;
      sub_140127910(v18, v16, v17);
    }
    v20 = 0;
    while ( 1 )
    {
      v21 = QueryPerformanceCounter((LARGE_INTEGER *)&argp)
          ? (int)((double)(int)argp * *(double *)&dword_140404A6C[278520505])
          : 0;
      if ( (unsigned int)(v21 - v15) < 0x10 || v20 >= 5 )
        break;
      if ( ++v20 >= 4 )
      {
        if ( QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount) )
          v15 = (int)((double)(int)PerformanceCount * *(double *)&dword_140404A6C[278520505]);
        else
          v15 = 0;
      }
      else
      {
        v15 += 16;
      }
      if ( --v13 <= 0 )
      {
        v22 = dword_140404A6C[134050358];
        v13 = 3600;
        v23 = 0;
        if ( (int)dword_140404A6C[134050358] > 0 )
        {
          v24 = &dword_140404A6C[134050385];
          do
          {
            if ( (int)*v24 > 0 )
            {
              --*v24;
              v22 = dword_140404A6C[134050358];
            }
            ++v23;
            v24 += 28;
          }
          while ( v23 < v22 );
        }
      }
      if ( dword_140404A6C[283831448] == 2 )
      {
        v25 = 0;
        v26 = &dword_140404A6C[71859139];
        do
        {
          if ( *(v26 - 2886) && *v26 )
            sub_1401178F0(v25);
          ++v25;
          v26 += 3597;
        }
        while ( v25 < 256 );
      }
      sub_140132F90();
      sub_140133090();
      dword_140404A6C[179668289] = 0;
      dword_140404A6C[179815746] = 0;
      sub_14011B2A0();
      if ( dword_140404A6C[283831448] <= 2 )
        sub_140116210();
      sub_1400F5820();
      sub_140136450();
      ++dword_140404A6C[283831474];
      if ( dword_140404A6C[283831448] <= 2 )
        sub_14002B9C0();
      sub_14008F1B0(v28, v27, v29, v30);
      if ( dword_140404A6C[283831448] <= 2 )
        sub_14002CE50();
    }
  }
}

