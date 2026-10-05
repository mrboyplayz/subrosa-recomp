/* Address: 0x14010be50 | Name: sub_14010BE50 | Size: 694 bytes */
void sub_14010BE50()
{
  __int64 v0; // r11
  unsigned int *v1; // r10
  unsigned int v2; // ebx
  unsigned int v3; // edi
  int i; // edx
  int v5; // ecx
  int v6; // eax
  int *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  int *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int *v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // xmm0_4
  unsigned int v22; // xmm1_4
  unsigned int v23; // xmm2_4

  v0 = dword_140404A6C[132792829];
  v1 = &dword_140404A6C[129716716];
  v2 = dword_140404A6C[456202453];
  v3 = dword_140404A6C[283831474];
  for ( i = 0; i < 512; ++i )
  {
    if ( *(v1 - 7) )
    {
      v5 = *v1;
      if ( (int)*v1 < 0xFFFF )
        *v1 = --v5;
      if ( v5 <= 0 && (unsigned int)i <= 0x1FF )
      {
        v6 = v1[52];
        if ( v6 > 0 )
        {
          v7 = (int *)(v1 + 53);
          v8 = (unsigned int)v6;
          do
          {
            v9 = *v7++;
            dword_140404A6C[60 * v9 + 73007022] = 0;
            --v8;
          }
          while ( v8 );
        }
        v10 = &dword_140404A6C[280651313];
        do
        {
          if ( *(v10 - 10) && *v10 == i )
            *v10 = -1;
          if ( v10[7156] && v10[7166] == i )
            v10[7166] = -1;
          if ( v10[14322] && v10[14332] == i )
            v10[14332] = -1;
          if ( v10[21488] && v10[21498] == i )
            v10[21498] = -1;
          v10 += 28664;
        }
        while ( (__int64)v10 < (__int64)&dword_140404A6C[282485809] );
        if ( (int)v0 > 0 )
        {
          v11 = &dword_140404A6C[132400639];
          v12 = v0;
          do
          {
            if ( *v11 == i )
              *v11 = -1;
            v11 += 383;
            --v12;
          }
          while ( v12 );
        }
        v13 = v1[3657];
        *(v1 - 7) = 0;
        if ( v13 > 0 )
        {
          v14 = (int *)(v1 + 3658);
          v15 = (unsigned int)v13;
          do
          {
            v16 = *v14;
            if ( (unsigned int)v16 < 0x2000 )
              dword_140404A6C[47 * v16 + 18215709] = 0;
            v14 += 43;
            --v15;
          }
          while ( v15 );
        }
        v17 = (int)v1[3];
        if ( (unsigned int)v17 < 0x2000 )
          dword_140404A6C[47 * v17 + 18215709] = 0;
        v18 = &dword_140404A6C[278845898];
        do
        {
          if ( *(v18 - 5) && *v18 == 27 && v18[155] == i )
          {
            v18[2] = 0;
            v18[155] = -1;
          }
          v18 += 1760;
        }
        while ( (__int64)v18 < (__int64)&dword_140404A6C[280648138] );
        if ( v2 )
        {
          v19 = dword_140404A6C[308307070];
          v20 = (__int64)(int)dword_140404A6C[308307070] << 7;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v20) = 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v20) = v3;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v20) = i;
          *(_QWORD *)((char *)&dword_140404A6C[297756294] + v20) = 3;
          if ( v1 == (unsigned int *)-16LL )
          {
            v21 = 0;
            v22 = 0;
            v23 = 0;
          }
          else
          {
            v21 = v1[6];
            v22 = v1[5];
            v23 = v1[4];
          }
          *(unsigned int *)((char *)&dword_140404A6C[297756287] + v20) = v23;
          *(unsigned int *)((char *)&dword_140404A6C[297756288] + v20) = v22;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v20) = v21;
          dword_140404A6C[308307070] = v19 + 1;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(_QWORD *)((char *)&dword_140404A6C[297756290] + v20) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756292] + v20) = 0;
        }
      }
    }
    v1 += 5210;
  }
}

