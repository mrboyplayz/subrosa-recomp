/* Address: 0x14011a330 | Name: sub_14011A330 | Size: 1761 bytes */
void __fastcall sub_14011A330(int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  int v3; // r8d
  __int64 v4; // r13
  __int64 v5; // r15
  signed int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rax
  char *v9; // rcx
  char *v10; // rdx
  char v11; // al
  _WORD *v12; // rcx
  char *v13; // rcx
  unsigned int v14; // ecx
  int *v15; // r14
  unsigned int v16; // eax
  __int64 v17; // xmm0_8
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned int v20; // ecx
  bool v21; // zf
  unsigned int *v22; // rbx
  char *v23; // rcx
  unsigned int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned int v27; // ecx
  int *v28; // rdx
  const char *v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // [rsp+8h] [rbp-100h] BYREF
  __int64 v32; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  char v34[504]; // [rsp+40h] [rbp-C8h] BYREF
  char v35[512]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v36; // [rsp+438h] [rbp+330h]

  if ( a1 != -1 )
  {
    v1 = 3597LL * a1;
    v2 = (int)dword_140404A6C[v1 + 71856343];
    if ( (_DWORD)v2 != -1 )
    {
      dword_140404A6C[70087067] = 1082130432;
      dword_140404A6C[70087068] = 1115684864;
      sub_1400755F0();
      v3 = 0;
      v4 = v2;
      v5 = 14019 * v2;
      v6 = 0;
      if ( (int)dword_140404A6C[14019 * v2 + 225654128] > 0 )
      {
        v7 = 0;
        while ( 1 )
        {
          if ( dword_140404A6C[v5 + 225641203] == 3 )
          {
            LOBYTE(v33) = 0;
            v8 = (int)dword_140404A6C[14019 * v4 + 225654131 + 3 * v7];
            if ( (int)v8 < 6 )
            {
              v9 = off_1402B23E0[v8];
              v10 = (char *)((char *)&v33 - v9);
              do
              {
                v11 = *v9;
                v10[(_QWORD)v9] = *v9;
                ++v9;
              }
              while ( v11 );
            }
            v12 = (_WORD *)((char *)&v32 + 7);
            do
            {
              v21 = *((_BYTE *)v12 + 1) == 0;
              v12 = (_WORD *)((char *)v12 + 1);
            }
            while ( !v21 );
            *v12 = 32;
            v13 = (char *)&v32 + 7;
            do
              v21 = *++v13 == 0;
            while ( !v21 );
            strcpy(
              v13,
              (const char *)&dword_140404A6C[24944 * dword_140404A6C[14019 * v4 + 225654129 + 3 * v7] + 346707722]);
            sub_140158AB0(v35, "$%d", dword_140404A6C[14019 * v4 + 225654130 + 3 * v7]);
            sub_1400764B0(
              v35,
              (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
              (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
              12.0,
              10);
            v14 = dword_140404A6C[70087076];
            if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[14019 * v4 + 225654130 + 3 * v7] )
              v14 = 1;
            v15 = (int *)&dword_140404A6C[v1 + 71856345];
            dword_140404A6C[70087076] = v14;
            ui_select_value_candidate((__int64)&v33, (int *)&dword_140404A6C[v1 + 71856345], v6 + 1);
          }
          else
          {
            v15 = (int *)&dword_140404A6C[v1 + 71856345];
          }
          v16 = dword_140404A6C[v5 + 225641203];
          if ( v16 != 5 )
            goto LABEL_44;
          if ( v6 )
          {
            switch ( v6 )
            {
              case 1:
                v17 = 0x7469755320646552LL;
                v34[0] = 0;
                break;
              case 2:
                v17 = 0x7553206574696857LL;
                strcpy(v34, "it");
                break;
              case 3:
                v17 = 0x6563616C6B63654ELL;
                v34[0] = 0;
                break;
              case 4:
                v17 = 0x63654E2068736143LL;
                strcpy(v34, "klace");
                break;
              default:
                goto LABEL_29;
            }
          }
          else
          {
            v17 = 0x6975532065756C42LL;
            strcpy(v34, "t");
          }
          v33 = v17;
LABEL_29:
          v18 = v7 + 4673 * v4;
          v19 = 3 * v18;
          sub_140158AB0(v35, "$%d", dword_140404A6C[3 * v18 + 225654130]);
          sub_1400764B0(
            v35,
            (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
            (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
            12.0,
            10);
          v20 = dword_140404A6C[70087076];
          if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[v19 + 225654130] )
            v20 = 1;
          dword_140404A6C[70087076] = v20;
          switch ( v6 )
          {
            case 0:
              v21 = dword_140404A6C[v1 + 71859822] == 3;
              goto LABEL_41;
            case 1:
              v21 = dword_140404A6C[v1 + 71859822] == 8;
              goto LABEL_41;
            case 2:
              v21 = dword_140404A6C[v1 + 71859822] == 7;
              goto LABEL_41;
            case 3:
              v21 = dword_140404A6C[v1 + 71859826] == 1;
              goto LABEL_41;
            case 4:
              v21 = dword_140404A6C[v1 + 71859826] == 2;
LABEL_41:
              if ( v21 )
                dword_140404A6C[70087076] = 1;
              break;
          }
          v15 = (int *)&dword_140404A6C[v1 + 71856345];
          ui_select_value_candidate((__int64)&v33, (int *)&dword_140404A6C[v1 + 71856345], v6 + 1);
          v16 = dword_140404A6C[v5 + 225641203];
LABEL_44:
          v22 = (unsigned int *)v15;
          if ( v16 == 8 )
          {
            LOBYTE(v33) = 0;
            v23 = (char *)&v32 + 7;
            do
              v21 = *++v23 == 0;
            while ( !v21 );
            strcpy(
              v23,
              (const char *)&dword_140404A6C[1268 * dword_140404A6C[14019 * v4 + 225654129 + 3 * v7] + 278521297]);
            sub_140158AB0(v35, "$%d", dword_140404A6C[14019 * v4 + 225654130 + 3 * v7]);
            sub_1400764B0(
              v35,
              (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
              (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
              12.0,
              10);
            v24 = dword_140404A6C[70087076];
            if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[14019 * v4 + 225654130 + 3 * v7] )
              v24 = 1;
            v22 = &dword_140404A6C[v1 + 71856345];
            dword_140404A6C[70087076] = v24;
            ui_select_value_candidate((__int64)&v33, (int *)&dword_140404A6C[v1 + 71856345], v6 + 1);
            v16 = dword_140404A6C[v5 + 225641203];
          }
          if ( v16 == 9 )
          {
            v25 = v7 + 4673 * v4;
            v26 = 3 * v25;
            sub_140158AB0(v35, "$%d", dword_140404A6C[3 * v25 + 225654130]);
            sub_1400764B0(
              v35,
              (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
              (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
              12.0,
              10);
            v27 = dword_140404A6C[70087076];
            if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[v26 + 225654130] )
              v27 = 1;
            dword_140404A6C[70087076] = v27;
            ui_select_value_candidate((__int64)"Burger", v15, v6 + 1);
            v22 = (unsigned int *)v15;
          }
          ++v6;
          ++v7;
          if ( v6 >= (int)dword_140404A6C[v5 + 225654128] )
          {
            v3 = 0;
            goto LABEL_57;
          }
        }
      }
      v22 = &dword_140404A6C[v1 + 71856345];
LABEL_57:
      v28 = (int *)&dword_140404A6C[280649838];
      if ( dword_140404A6C[v5 + 225641203] == 3 )
      {
        v28 = (int *)v22;
        v3 = 16;
      }
      v29 = "Done";
      if ( dword_140404A6C[v5 + 225641203] == 3 )
        v29 = "Back";
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 28.0;
      ui_select_value_candidate((__int64)v29, v28, v3);
      v30 = dword_140404A6C[70317962];
      if ( (int)dword_140404A6C[70317962] > 0 )
      {
        --dword_140404A6C[70317962];
        dword_140404A6C[70087069] = dword_140404A6C[2 * (v30 - 1) + 70317963];
        dword_140404A6C[70087070] = dword_140404A6C[2 * (v30 - 1) + 70317964];
      }
    }
    MEMORY[0x1401F8B20]((unsigned __int64)&v31 ^ v36);
  }
}

