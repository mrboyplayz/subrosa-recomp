/* Address: 0x14014c390 | Name: sub_14014C390 | Size: 1752 bytes */
__int64 sub_14014C390()
{
  unsigned int v0; // ebx
  signed int v1; // eax
  signed int v2; // r8d
  unsigned int *v3; // rdx
  int v4; // edx
  unsigned int *v5; // r15
  int v6; // eax
  __int64 v7; // rax
  signed int v8; // r14d
  __int64 v9; // r12
  bool v10; // cc
  signed int v11; // ebp
  __int64 v12; // r13
  signed int *v13; // rdi
  signed int v14; // r11d
  __int64 v15; // r9
  __int64 v16; // rcx
  const char *v17; // r8
  unsigned int *v18; // rdx
  char v19; // al
  __int64 v20; // r9
  const char *v21; // r8
  unsigned int *v22; // rdx
  char v23; // al
  signed int v24; // ebp
  unsigned int *v25; // r14
  unsigned int v26; // ebx
  __int64 v27; // rdi
  unsigned int *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v33; // [rsp+50h] [rbp+8h]

  v0 = 0;
  dword_140404A6C[487149972] = 0;
  if ( dword_140404A6C[283831312] != 8 )
  {
    if ( dword_140404A6C[283831312] != 4 )
      goto LABEL_37;
    v4 = 0;
    v33 = 0;
    if ( (int)dword_140404A6C[225641186] <= 0 )
      goto LABEL_37;
    v5 = &dword_140404A6C[225654181];
    while ( 1 )
    {
      v6 = *(v5 - 12978);
      if ( v6 != 1 )
        goto LABEL_24;
      v7 = (int)*(v5 - 12856);
      v8 = 0;
      v9 = 5873 * v7;
      v10 = (int)*v5 <= 0;
      v11 = 0;
      dword_140404A6C[5873 * v7 + 283831511] = 0;
      if ( !v10 )
        break;
LABEL_36:
      ++v4;
      v5 += 14019;
      v33 = v4;
      if ( v4 >= (int)dword_140404A6C[225641186] )
        goto LABEL_37;
    }
    v12 = 5873 * v7;
    v13 = (signed int *)(v5 + 4);
    do
    {
      v14 = sub_140050EF0(0x2710u);
      v15 = 2570LL * v14;
      *v13 = v14;
      v16 = (int)dword_140404A6C[v15 + 275754072];
      if ( (int)v16 < 256 )
      {
        dword_140404A6C[6 * v16 + 275754073 + v15] = 0;
        v17 = "MISSION.EXE";
        v18 = &dword_140404A6C[6 * (int)dword_140404A6C[v15 + 275754072] + 275754074 + v15];
        do
        {
          v19 = *v17++;
          *(_BYTE *)v18 = v19;
          v18 = (unsigned int *)((char *)v18 + 1);
        }
        while ( v19 );
        dword_140404A6C[6 * (int)dword_140404A6C[v15 + 275754072]++ + 275754078 + v15] = 0;
        LODWORD(v16) = dword_140404A6C[v15 + 275754072];
      }
      v20 = 2570LL * v14;
      if ( (int)v16 < 256 )
      {
        v21 = "DECRYPT.EXE";
        dword_140404A6C[6 * (int)v16 + 275754073 + v20] = 0;
        v22 = &dword_140404A6C[6 * (int)dword_140404A6C[v20 + 275754072] + 275754074 + v20];
        do
        {
          v23 = *v21++;
          *(_BYTE *)v22 = v23;
          v22 = (unsigned int *)((char *)v22 + 1);
        }
        while ( v23 );
        dword_140404A6C[6 * (int)dword_140404A6C[v20 + 275754072]++ + 275754078 + v20] = 0;
      }
      ++v11;
      v13 += 4;
      dword_140404A6C[v12 + 283831512 + v8] = v14;
      v8 = dword_140404A6C[v9 + 283831511] + 1;
      dword_140404A6C[v9 + 283831511] = v8;
    }
    while ( v11 < (int)*v5 );
    v6 = *(v5 - 12978);
    v0 = dword_140404A6C[487149972];
    v4 = v33;
LABEL_24:
    if ( v6 == 4 )
    {
      v24 = 0;
      *(v5 - 12855) = v0;
      dword_140404A6C[259 * v0 + 487149973] = v4;
      dword_140404A6C[259 * dword_140404A6C[487149972] + 487149974] = 0;
      v10 = (int)*v5 <= 0;
      dword_140404A6C[259 * dword_140404A6C[487149972] + 487149975] = 0;
      if ( !v10 )
      {
        v25 = v5 + 4;
        do
        {
          v26 = 0;
          v27 = 0;
          v28 = &dword_140404A6C[275753045];
          while ( *v28 )
          {
            ++v26;
            ++v27;
            v28 += 2570;
            if ( (__int64)v28 >= (__int64)&dword_140404A6C[278384725] )
            {
              v26 = -1;
              goto LABEL_33;
            }
          }
          if ( v26 != -1 )
          {
            MEMORY[0x1401FCD30](&dword_140404A6C[2570 * v26 + 275753045], 0, 10280);
            v29 = 2570 * v27;
            dword_140404A6C[v29 + 275753045] = 1;
            dword_140404A6C[v29 + 275753046] = 10000;
          }
LABEL_33:
          v30 = (int)dword_140404A6C[487149972];
          v31 = 259LL * (int)dword_140404A6C[487149972];
          *v25 = v26;
          ++v24;
          v25 += 4;
          dword_140404A6C[259 * v30 + 487149976 + (int)dword_140404A6C[v31 + 487149975]] = v26;
          ++dword_140404A6C[259 * dword_140404A6C[487149972] + 487149975];
        }
        while ( v24 < (int)*v5 );
        v4 = v33;
      }
      v0 = ++dword_140404A6C[487149972];
    }
    goto LABEL_36;
  }
  v1 = dword_140404A6C[225641186];
  v2 = 0;
  if ( (int)dword_140404A6C[225641186] > 0 )
  {
    v3 = &dword_140404A6C[225641326];
    do
    {
      if ( *(v3 - 123) == 4 )
      {
        *v3 = v0;
        dword_140404A6C[259 * v0 + 487149973] = v2;
        dword_140404A6C[259 * dword_140404A6C[487149972] + 487149974] = 0;
        v1 = dword_140404A6C[225641186];
        dword_140404A6C[259 * dword_140404A6C[487149972] + 487149975] = 0;
        v0 = ++dword_140404A6C[487149972];
      }
      ++v2;
      v3 += 14019;
    }
    while ( v2 < v1 );
  }
LABEL_37:
  dword_140404A6C[487148756] = 1154924544;
  dword_140404A6C[487148758] = 1151188992;
  dword_140404A6C[487148775] = 1155416064;
  dword_140404A6C[487148757] = 1110966272;
  dword_140404A6C[487148777] = 1148944384;
  strcpy((char *)&dword_140404A6C[487148759], "Hondo Park");
  dword_140404A6C[487148794] = 1152892928;
  dword_140404A6C[487148776] = 1106247680;
  dword_140404A6C[487148796] = 1153089536;
  strcpy((char *)&dword_140404A6C[487148778], "Rio Granary");
  dword_140404A6C[487148813] = 1151352832;
  dword_140404A6C[487148795] = 1112014848;
  dword_140404A6C[487148815] = 1153417216;
  *(_OWORD *)&dword_140404A6C[487148797] = xmmword_1402772B8;
  dword_140404A6C[487148814] = 1115160576;
  dword_140404A6C[487148832] = 1154564096;
  strcpy((char *)&dword_140404A6C[487148816], "Park above the Kamel Building");
  dword_140404A6C[487148834] = 1153220608;
  dword_140404A6C[487148833] = 1115947008;
  dword_140404A6C[487148851] = 1151877120;
  strcpy((char *)&dword_140404A6C[487148835], "Bobson Dugnutt Museum");
  strcpy((char *)&dword_140404A6C[487148854], "The Mall");
  dword_140404A6C[487148853] = 1151483904;
  dword_140404A6C[487148870] = 1154007040;
  dword_140404A6C[487148871] = 1104150528;
  dword_140404A6C[487148872] = 1150402560;
  strcpy((char *)&dword_140404A6C[487148873], "Gas Station");
  dword_140404A6C[487148889] = 1153515520;
  dword_140404A6C[487148891] = 1151320064;
  dword_140404A6C[487148852] = 1108869120;
  dword_140404A6C[487148890] = 1108869120;
  strcpy((char *)&dword_140404A6C[487148892], "Red Cube Park");
  dword_140404A6C[487148755] = 8;
  return 107;
}

