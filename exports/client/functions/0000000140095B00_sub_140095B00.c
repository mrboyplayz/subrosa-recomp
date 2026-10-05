/* Address: 0x140095b00 | Name: sub_140095B00 | Size: 1203 bytes */
__int64 sub_140095B00()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int *v2; // rax
  __int64 v3; // r8
  int v4; // edi
  __int64 v5; // rbx
  unsigned int *v6; // rdx
  char v7; // al
  unsigned int v8; // eax
  __int64 v9; // r8
  int v10; // ecx
  char v11; // al
  int v12; // eax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int v15; // eax
  bool v16; // cc
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 result; // rax

  *(_QWORD *)&dword_140404A6C[284024381] = 0x4280000044BC8000LL;
  dword_140404A6C[284024383] = 1153368064;
  dword_140404A6C[284024534] = 1065353216;
  *(_OWORD *)&dword_140404A6C[284024526] = xmmword_140278D30;
  dword_140404A6C[283831478] = 1;
  *(_OWORD *)&dword_140404A6C[284024530] = xmmword_140278D30;
  dword_140404A6C[284021982] = -1;
  dword_140404A6C[283785910] = 1;
  dword_140404A6C[346706173] = 0;
  MEMORY[0x1401FCD30](&dword_140404A6C[346696445], 0, 38912);
  MEMORY[0x1401FCD30](&dword_140404A6C[282487105], 0, 16772);
  v0 = (__int64)&dword_140404A6C[421781437];
  v1 = (__int64)&dword_140404A6C[71856362];
  v2 = &dword_140404A6C[421783997];
  v3 = 16;
  do
  {
    *(_QWORD *)v2 = 0xFFFFFFFEFFFFFFFEuLL;
    *((_QWORD *)v2 + 1) = 0xFFFFFFFEFFFFFFFEuLL;
    *((_QWORD *)v2 + 2) = 0xFFFFFFFEFFFFFFFEuLL;
    v2 += 16;
    *((_QWORD *)v2 - 5) = 0xFFFFFFFEFFFFFFFEuLL;
    *((_QWORD *)v2 - 4) = 0xFFFFFFFEFFFFFFFEuLL;
    *((_QWORD *)v2 - 3) = 0xFFFFFFFEFFFFFFFEuLL;
    *((_QWORD *)v2 - 2) = 0xFFFFFFFEFFFFFFFEuLL;
    *((_QWORD *)v2 - 1) = 0xFFFFFFFEFFFFFFFEuLL;
    --v3;
  }
  while ( v3 );
  do
  {
    *(_DWORD *)(v1 - 436) = 0;
    *(_QWORD *)v1 = 0;
    v1 += 14388;
    *(_DWORD *)v0 = -2;
    v0 += 20;
  }
  while ( v1 < (__int64)&dword_140404A6C[72777194] );
  if ( dword_140404A6C[456202453] )
  {
    if ( dword_140404A6C[283831312] == 3 )
      dword_140404A6C[283831441] = dword_140404A6C[284022482] != 0;
    sub_140050C80(&dword_140404A6C[284024493], &dword_140404A6C[284024494], dword_140404A6C[284023066]);
    v4 = sub_14005CCF0();
    v5 = 3597LL * v4;
    v6 = &dword_140404A6C[73991096];
    do
    {
      v7 = *(_BYTE *)v6;
      *((_BYTE *)v6 + (_QWORD)&dword_140404A6C[71856254] + 14388LL * v4 - (_QWORD)&dword_140404A6C[73991096]) = *(_BYTE *)v6;
      v6 = (unsigned int *)((char *)v6 + 1);
    }
    while ( v7 );
    dword_140404A6C[v5 + 71859816] = dword_140404A6C[73991647];
    dword_140404A6C[v5 + 71859825] = dword_140404A6C[73991648];
    dword_140404A6C[v5 + 71859817] = dword_140404A6C[73991649];
    dword_140404A6C[v5 + 71859818] = dword_140404A6C[73991650];
    dword_140404A6C[v5 + 71859819] = dword_140404A6C[73991651];
    dword_140404A6C[v5 + 71859820] = dword_140404A6C[73991652];
    sub_140091E60(v4);
    v8 = dword_140404A6C[283831312] - 2;
    dword_140404A6C[v5 + 71856266] = 1;
    if ( v8 <= 5 )
    {
      v9 = 0;
      v10 = dword_140404A6C[134050334];
      *(_QWORD *)&dword_140404A6C[456202737] = *(_QWORD *)&dword_140404A6C[278384727];
      dword_140404A6C[456202736] = dword_140404A6C[134050337];
      dword_140404A6C[456202733] = 1;
      dword_140404A6C[456202735] = dword_140404A6C[134050334];
      dword_140404A6C[456202739] = 1234;
      do
      {
        v11 = *((_BYTE *)&dword_140404A6C[73991096] + v9);
        *((_BYTE *)&dword_140404A6C[456202740] + v9++) = v11;
      }
      while ( v11 );
      dword_140404A6C[v5 + 71856262] = dword_140404A6C[284024493];
      dword_140404A6C[v5 + 71856263] = dword_140404A6C[284024494];
      v12 = sub_14004D750(v10, 1234);
      dword_140404A6C[v5 + 71856268] = v12;
      if ( v12 < 0 )
      {
        v12 = 0;
        dword_140404A6C[v5 + 71856268] = 0;
      }
      v0 = dword_140404A6C[283831312];
      v1 = 112LL * (unsigned int)v12;
      v13 = *(_OWORD *)((char *)&dword_140404A6C[134050365] + v1);
      dword_140404A6C[v5 + 71856264] = *(unsigned int *)((char *)&dword_140404A6C[134050361] + v1);
      v14 = *(_OWORD *)((char *)&dword_140404A6C[134050369] + v1);
      dword_140404A6C[v5 + 71856265] = *(unsigned int *)((char *)&dword_140404A6C[134050362] + v1);
      v15 = dword_140404A6C[134050358];
      v16 = (signed int)dword_140404A6C[134050358] < 1;
      *(_OWORD *)&dword_140404A6C[v5 + 71856254] = v13;
      if ( v16 )
        v15 = 1;
      dword_140404A6C[134050358] = v15;
      *(_OWORD *)&dword_140404A6C[v5 + 71856258] = v14;
      if ( v4 != -1 && (unsigned int)(v0 - 3) <= 1 )
      {
        dword_140404A6C[v5 + 71856272] = *(unsigned int *)((char *)&dword_140404A6C[134050374] + v1);
        v17 = *(unsigned int *)((char *)&dword_140404A6C[134050375] + v1);
        if ( v17 < 0 )
        {
          v17 = 0;
          *(unsigned int *)((char *)&dword_140404A6C[134050375] + v1) = 0;
        }
        dword_140404A6C[v5 + 71856275] = v17;
        dword_140404A6C[v5 + 71856276] = *(unsigned int *)((char *)&dword_140404A6C[134050376] + v1);
        dword_140404A6C[v5 + 71856291] = *(unsigned int *)((char *)&dword_140404A6C[134050377] + v1);
      }
      if ( (int)dword_140404A6C[v5 + 71856272] < 1000 )
        dword_140404A6C[v5 + 71856272] = 1000;
      if ( (_DWORD)v0 == 7 )
      {
        v18 = dword_140404A6C[284022500];
      }
      else
      {
        if ( (_DWORD)v0 != 3 || dword_140404A6C[283831441] != 1 )
          goto LABEL_29;
        v18 = dword_140404A6C[284022481];
      }
      dword_140404A6C[v5 + 71856272] = v18;
LABEL_29:
      dword_140404A6C[v5 + 71856286] = 17;
    }
  }
  if ( dword_140404A6C[19065870] )
  {
    dword_140404A6C[19065873] = 0;
    sub_140127300();
  }
  dword_140404A6C[19065878] = 1;
  sub_140127910(v1, v0, v3);
  dword_140404A6C[283831444] = 0;
  *(float *)&dword_140404A6C[284024388] = *(float *)&dword_140404A6C[179992855] + 32.0;
  dword_140404A6C[284024390] = dword_140404A6C[179992857];
  *(float *)&dword_140404A6C[284024389] = *(float *)&dword_140404A6C[179992856] + 16.0;
  dword_140404A6C[283831311] = 0;
  dword_140404A6C[280649838] = 0;
  dword_140404A6C[284024392] = 0;
  dword_140404A6C[284024391] = -1077342245;
  dword_140404A6C[280649842] = -1;
  if ( dword_140404A6C[284024501] != -1
    && dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292] == -1
    && (dword_140404A6C[283831448] == 1 || dword_140404A6C[283831312] == 4) )
  {
    dword_140404A6C[280649838] = 1;
  }
  result = MEMORY[0x140198F0B](1, v19, v20);
  dword_140404A6C[283831484] = 1;
  dword_140404A6C[283831309] = 1;
  return result;
}

