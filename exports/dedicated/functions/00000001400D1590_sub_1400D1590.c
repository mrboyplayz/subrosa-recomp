/* Address: 0x1400d1590 | Name: sub_1400D1590 | Size: 1752 bytes */
__int64 sub_1400D1590()
{
  int v0; // ebx
  int v1; // eax
  int v2; // r8d
  int *v3; // rdx
  int v4; // edx
  int *v5; // r15
  int v6; // eax
  __int64 v7; // rax
  int v8; // r14d
  __int64 v9; // r12
  bool v10; // cc
  int v11; // ebp
  __int64 v12; // r13
  int *v13; // rdi
  int v14; // r11d
  __int64 v15; // r9
  __int64 v16; // rcx
  const char *v17; // r8
  char *v18; // rdx
  char v19; // al
  __int64 v20; // r9
  const char *v21; // r8
  char *v22; // rdx
  char v23; // al
  int v24; // ebp
  int *v25; // r14
  int v26; // ebx
  __int64 v27; // rdi
  int *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v33; // [rsp+50h] [rbp+8h]

  v0 = 0;
  dword_163D95E7C = 0;
  if ( dword_19154118C != 8 )
  {
    if ( dword_19154118C != 4 )
      goto LABEL_37;
    v4 = 0;
    v33 = 0;
    if ( dword_183A7E074 <= 0 )
      goto LABEL_37;
    v5 = dword_183A8AB80;
    while ( 1 )
    {
      v6 = *(v5 - 12978);
      if ( v6 != 1 )
        goto LABEL_24;
      v7 = *(v5 - 12856);
      v8 = 0;
      v9 = 23492 * v7;
      v10 = *v5 <= 0;
      v11 = 0;
      *((_DWORD *)&unk_1915414A8 + 5873 * v7) = 0;
      if ( !v10 )
        break;
LABEL_36:
      ++v4;
      v5 += 14019;
      v33 = v4;
      if ( v4 >= dword_183A7E074 )
        goto LABEL_37;
    }
    v12 = 5873 * v7;
    v13 = v5 + 4;
    do
    {
      v14 = sub_140039500(10000);
      v15 = 10280LL * v14;
      *v13 = v14;
      v16 = *(int *)((char *)&unk_18F7174C0 + v15 + 4108);
      if ( (int)v16 < 256 )
      {
        *(_DWORD *)((char *)&unk_18F7174C0 + 24 * v16 + v15 + 4112) = 0;
        v17 = "MISSION.EXE";
        v18 = (char *)&unk_18F7184D4 + 24 * *(int *)((char *)&unk_18F7174C0 + v15 + 4108) + v15;
        do
        {
          v19 = *v17++;
          *v18++ = v19;
        }
        while ( v19 );
        *(_DWORD *)((char *)&unk_18F7174C0 + 24 * (*(_DWORD *)((char *)&unk_18F7174C0 + v15 + 4108))++ + v15 + 4132) = 0;
        LODWORD(v16) = *(_DWORD *)((char *)&unk_18F7174C0 + v15 + 4108);
      }
      v20 = 10280LL * v14;
      if ( (int)v16 < 256 )
      {
        v21 = "DECRYPT.EXE";
        *(_DWORD *)((char *)&unk_18F7174C0 + 24 * (int)v16 + v20 + 4112) = 0;
        v22 = (char *)&unk_18F7184D4 + 24 * *(int *)((char *)&unk_18F7174C0 + v20 + 4108) + v20;
        do
        {
          v23 = *v21++;
          *v22++ = v23;
        }
        while ( v23 );
        *(_DWORD *)((char *)&unk_18F7174C0 + 24 * (*(_DWORD *)((char *)&unk_18F7174C0 + v20 + 4108))++ + v20 + 4132) = 0;
      }
      ++v11;
      v13 += 4;
      dword_1915414AC[v12 + v8] = v14;
      v8 = *(_DWORD *)((char *)&unk_1915414A8 + v9) + 1;
      *(_DWORD *)((char *)&unk_1915414A8 + v9) = v8;
    }
    while ( v11 < *v5 );
    v6 = *(v5 - 12978);
    v0 = dword_163D95E7C;
    v4 = v33;
LABEL_24:
    if ( v6 == 4 )
    {
      v24 = 0;
      *(v5 - 12855) = v0;
      *((_DWORD *)&unk_163D95E80 + 259 * v0) = v4;
      *((_DWORD *)&unk_163D95E84 + 259 * dword_163D95E7C) = 0;
      v10 = *v5 <= 0;
      *((_DWORD *)&unk_163D95E88 + 259 * dword_163D95E7C) = 0;
      if ( !v10 )
      {
        v25 = v5 + 4;
        do
        {
          v26 = 0;
          v27 = 0;
          v28 = (int *)&unk_18F7174C0;
          while ( *v28 )
          {
            ++v26;
            ++v27;
            v28 += 2570;
            if ( (__int64)v28 >= (__int64)&dword_1901214C0 )
            {
              v26 = -1;
              goto LABEL_33;
            }
          }
          if ( v26 != -1 )
          {
            memset((char *)&unk_18F7174C0 + 10280 * v26, 0, 0x2828u);
            v29 = 10280 * v27;
            *(_DWORD *)((char *)&unk_18F7174C0 + v29) = 1;
            *(_DWORD *)((char *)&unk_18F7174C0 + v29 + 4) = 10000;
          }
LABEL_33:
          v30 = dword_163D95E7C;
          v31 = 1036LL * dword_163D95E7C;
          *v25 = v26;
          ++v24;
          v25 += 4;
          dword_163D95E8C[259 * v30 + *(int *)((char *)&unk_163D95E88 + v31)] = v26;
          ++*((_DWORD *)&unk_163D95E88 + 259 * dword_163D95E7C);
        }
        while ( v24 < *v5 );
        v4 = v33;
      }
      v0 = ++dword_163D95E7C;
    }
    goto LABEL_36;
  }
  v1 = dword_183A7E074;
  v2 = 0;
  if ( dword_183A7E074 > 0 )
  {
    v3 = (int *)&unk_183A7E2A4;
    do
    {
      if ( *(v3 - 123) == 4 )
      {
        *v3 = v0;
        *((_DWORD *)&unk_163D95E80 + 259 * v0) = v2;
        *((_DWORD *)&unk_163D95E84 + 259 * dword_163D95E7C) = 0;
        v1 = dword_183A7E074;
        *((_DWORD *)&unk_163D95E88 + 259 * dword_163D95E7C) = 0;
        v0 = ++dword_163D95E7C;
      }
      ++v2;
      v3 += 14019;
    }
    while ( v2 < v1 );
  }
LABEL_37:
  dword_163D94B7C[0] = 1154924544;
  dword_163D94B84 = 1151188992;
  dword_163D94BC8 = 1155416064;
  dword_163D94B80 = 1110966272;
  dword_163D94BD0 = 1148944384;
  strcpy((char *)&qword_163D94B88, "Hondo Park");
  dword_163D94C14 = 1152892928;
  dword_163D94BCC = 1106247680;
  dword_163D94C1C = 1153089536;
  strcpy((char *)&qword_163D94BD4, "Rio Granary");
  dword_163D94C60 = 1151352832;
  dword_163D94C18 = 1112014848;
  dword_163D94C68 = 1153417216;
  xmmword_163D94C20 = xmmword_1400F63B0;
  dword_163D94C64 = 1115160576;
  dword_163D94CAC = 1154564096;
  strcpy((char *)&xmmword_163D94C6C, "Park above the Kamel Building");
  dword_163D94CB4 = 1153220608;
  dword_163D94CB0 = 1115947008;
  dword_163D94CF8 = 1151877120;
  strcpy((char *)&xmmword_163D94CB8, "Bobson Dugnutt Museum");
  strcpy((char *)&qword_163D94D04, "The Mall");
  dword_163D94D00 = 1151483904;
  dword_163D94D44 = 1154007040;
  dword_163D94D48 = 1104150528;
  dword_163D94D4C = 1150402560;
  strcpy((char *)&qword_163D94D50, "Gas Station");
  dword_163D94D90 = 1153515520;
  dword_163D94D98 = 1151320064;
  dword_163D94CFC = 1108869120;
  dword_163D94D94 = 1108869120;
  strcpy((char *)&qword_163D94D9C, "Red Cube Park");
  dword_163D94B78 = 8;
  return 107;
}

