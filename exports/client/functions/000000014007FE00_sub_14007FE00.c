/* Address: 0x14007fe00 | Name: sub_14007FE00 | Size: 616 bytes */
void __fastcall sub_14007FE00(unsigned int a1)
{
  __int64 v2; // r10
  int v3; // eax
  __int64 v4; // r9
  unsigned int *v5; // r8
  __int64 v6; // rax
  unsigned int *v7; // rax
  __int64 v8; // rcx
  unsigned int *v9; // rax
  int v10; // eax
  __int64 v11; // r9
  unsigned int *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int *v15; // rax
  unsigned int *v16; // r8
  unsigned int v17; // r9d
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // xmm0_4
  unsigned int v21; // xmm1_4
  unsigned int v22; // xmm2_4

  if ( a1 <= 0x1FF )
  {
    v2 = 5210LL * (int)a1;
    v3 = dword_140404A6C[v2 + 129716768];
    if ( v3 > 0 )
    {
      v4 = (unsigned int)v3;
      v5 = &dword_140404A6C[v2 + 129716769];
      do
      {
        v6 = (int)*v5++;
        dword_140404A6C[60 * v6 + 73007022] = 0;
        --v4;
      }
      while ( v4 );
    }
    v7 = &dword_140404A6C[280651313];
    do
    {
      if ( *(v7 - 10) && *v7 == a1 )
        *v7 = -1;
      if ( v7[7156] && v7[7166] == a1 )
        v7[7166] = -1;
      if ( v7[14322] && v7[14332] == a1 )
        v7[14332] = -1;
      if ( v7[21488] && v7[21498] == a1 )
        v7[21498] = -1;
      v7 += 28664;
    }
    while ( (__int64)v7 < (__int64)&dword_140404A6C[282485809] );
    v8 = dword_140404A6C[132792829];
    if ( (int)dword_140404A6C[132792829] > 0 )
    {
      v9 = &dword_140404A6C[132400639];
      do
      {
        if ( *v9 == a1 )
          *v9 = -1;
        v9 += 383;
        --v8;
      }
      while ( v8 );
    }
    v10 = dword_140404A6C[v2 + 129720373];
    dword_140404A6C[v2 + 129716709] = 0;
    if ( v10 > 0 )
    {
      v11 = (unsigned int)v10;
      v12 = &dword_140404A6C[v2 + 129720374];
      do
      {
        v13 = (int)*v12;
        if ( (unsigned int)v13 < 0x2000 )
          dword_140404A6C[47 * v13 + 18215709] = 0;
        v12 += 43;
        --v11;
      }
      while ( v11 );
    }
    v14 = (int)dword_140404A6C[v2 + 129716719];
    if ( (unsigned int)v14 < 0x2000 )
      dword_140404A6C[47 * v14 + 18215709] = 0;
    v15 = &dword_140404A6C[278845898];
    do
    {
      if ( *(v15 - 5) && *v15 == 27 && v15[155] == a1 )
      {
        v15[2] = 0;
        v15[155] = -1;
      }
      v15 += 1760;
    }
    while ( (__int64)v15 < (__int64)&dword_140404A6C[280648138] );
    v16 = &dword_140404A6C[v2 + 129716720];
    if ( dword_140404A6C[456202453] )
    {
      v17 = dword_140404A6C[308307070];
      v18 = dword_140404A6C[283831474];
      v19 = (__int64)(int)dword_140404A6C[308307070] << 7;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v19) = 4;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v19) = v18;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v19) = a1;
      *(_QWORD *)((char *)&dword_140404A6C[297756294] + v19) = 3;
      if ( v16 )
      {
        v20 = v16[2];
        v21 = v16[1];
        v22 = *v16;
      }
      else
      {
        v20 = 0;
        v21 = 0;
        v22 = 0;
      }
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v19) = v22;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v19) = v21;
      *(unsigned int *)((char *)&dword_140404A6C[297756289] + v19) = v20;
      dword_140404A6C[308307070] = v17 + 1;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v19) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756292] + v19) = 0;
    }
  }
}

