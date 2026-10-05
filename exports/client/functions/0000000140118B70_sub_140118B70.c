/* Address: 0x140118b70 | Name: sub_140118B70 | Size: 1245 bytes */
void __fastcall sub_140118B70(int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // ecx
  __int64 v3; // rdi
  unsigned int v4; // edx
  bool v5; // cc
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v8; // r8d
  int *v9; // rdx
  const char *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  int *v13; // rdi
  unsigned int v14; // eax
  unsigned int *v15; // rbx
  unsigned int v16; // eax
  unsigned int *v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // eax

  v1 = a1;
  v2 = dword_140404A6C[280649838];
  v3 = 3597 * v1;
  v4 = dword_140404A6C[3597 * v1 + 71856342];
  if ( v4 - 1 <= 1 )
    v2 = 1;
  dword_140404A6C[280649838] = v2;
  if ( !v4 )
  {
    dword_140404A6C[280649838] = 0;
    return;
  }
  if ( v2 )
  {
    if ( v4 == 1 )
    {
      sub_1400755F0(240.0, 32.0);
      v5 = dword_140404A6C[v3 + 71856286] <= 5;
      dword_140404A6C[70087067] = 1136918528;
      dword_140404A6C[70087068] = 1134034944;
      if ( v5 )
      {
        v6 = dword_140404A6C[70087076];
        if ( (int)dword_140404A6C[v3 + 71856291] > 0 )
          v6 = 1;
        dword_140404A6C[70087076] = v6;
        if ( (unsigned int)ui_button_candidate((__int64)"Respawn at Base") )
          dword_140404A6C[v3 + 71856345] = 2;
      }
      v7 = dword_140404A6C[70087076];
      v5 = (int)dword_140404A6C[v3 + 71856291] <= 0;
      dword_140404A6C[70087074] = 30;
      if ( !v5 )
        v7 = 1;
      dword_140404A6C[70087076] = v7;
      if ( (unsigned int)ui_button_candidate((__int64)"Enter City") )
        dword_140404A6C[v3 + 71856345] = 1;
      sub_1400753C0();
      v4 = dword_140404A6C[v3 + 71856342];
    }
    if ( v4 >= 0xE )
    {
      if ( v4 <= 0x1A )
      {
        if ( dword_140404A6C[283831312] == 4 )
          sub_140119F70(v1);
        else
          sub_140119220(v1);
      }
      return;
    }
    switch ( v4 )
    {
      case 2u:
        sub_14011ACC0(v1);
        return;
      case 9u:
        dword_140404A6C[70087067] = 1082130432;
        dword_140404A6C[70087068] = 1124073472;
        if ( (int)dword_140404A6C[70317962] < 16 )
        {
          dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
          dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
        }
        dword_140404A6C[70087069] = 1132199936;
        dword_140404A6C[70087070] = 1107296256;
        ui_select_value_candidate((__int64)"Buy", (int *)&dword_140404A6C[v3 + 71856345], 1);
        ui_select_value_candidate((__int64)"Sell", (int *)&dword_140404A6C[v3 + 71856345], 2);
        v8 = 0;
        v9 = (int *)&dword_140404A6C[280649838];
        v10 = "Done";
LABEL_53:
        *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
LABEL_54:
        ui_select_value_candidate((__int64)v10, v9, v8);
        v18 = dword_140404A6C[70317962];
        if ( (int)dword_140404A6C[70317962] > 0 )
        {
          --dword_140404A6C[70317962];
          v19 = v18 - 1;
          dword_140404A6C[70087069] = dword_140404A6C[2 * v19 + 70317963];
          dword_140404A6C[70087070] = dword_140404A6C[2 * v19 + 70317964];
        }
        return;
      case 0xAu:
        sub_14011A330(v1);
        return;
    }
    if ( v4 != 11 )
    {
      if ( v4 - 12 > 1 )
        return;
      dword_140404A6C[70087067] = 1082130432;
      dword_140404A6C[70087068] = 1124073472;
      if ( (int)dword_140404A6C[70317962] < 16 )
      {
        dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
        dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
      }
      v15 = &dword_140404A6C[v3 + 71856345];
      dword_140404A6C[70087069] = 1132199936;
      dword_140404A6C[70087070] = 1107296256;
      ui_select_value_candidate((__int64)"Deposit", (int *)&dword_140404A6C[v3 + 71856345], 7);
      ui_select_value_candidate((__int64)"Withdrawl $5", (int *)&dword_140404A6C[v3 + 71856345], 1);
      ui_select_value_candidate((__int64)"Withdrawl $10", (int *)&dword_140404A6C[v3 + 71856345], 2);
      ui_select_value_candidate((__int64)"Withdrawl $20", (int *)&dword_140404A6C[v3 + 71856345], 3);
      ui_select_value_candidate((__int64)"Withdrawl $50", (int *)&dword_140404A6C[v3 + 71856345], 4);
      ui_select_value_candidate((__int64)"Withdrawl $100", (int *)&dword_140404A6C[v3 + 71856345], 5);
      ui_select_value_candidate((__int64)"Withdrawl $1000", (int *)&dword_140404A6C[v3 + 71856345], 6);
      v16 = dword_140404A6C[v3 + 71856342];
      v17 = &dword_140404A6C[280649838];
      if ( v16 == 12 )
        v17 = v15;
      v8 = 0;
      if ( v16 == 12 )
        v8 = 16;
      v10 = "Done";
      if ( v16 == 12 )
        v10 = "Back";
      v9 = (int *)v17;
      goto LABEL_53;
    }
    if ( (_DWORD)v1 == -1 )
      return;
    v11 = (int)dword_140404A6C[v3 + 71856343];
    if ( (_DWORD)v11 == -1 )
      return;
    dword_140404A6C[70087067] = 1082130432;
    dword_140404A6C[70087068] = 1124073472;
    sub_1400755F0(252.0, 32.0);
    v12 = 14019 * v11;
    v13 = (int *)(0x140000000LL + v3 * 4 + 291638736);
    v14 = dword_140404A6C[v12 + 225641203];
    if ( v14 == 3 )
    {
      ui_select_value_candidate((__int64)"Sell Car", v13, 1);
      v14 = dword_140404A6C[v12 + 225641203];
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
      if ( v14 == 3 )
        goto LABEL_38;
    }
    else
    {
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
    }
    v13 = (int *)&dword_140404A6C[280649838];
LABEL_38:
    v8 = 0;
    if ( v14 == 3 )
      v8 = 16;
    v10 = "Done";
    if ( v14 == 3 )
      v10 = "Back";
    v9 = v13;
    goto LABEL_54;
  }
}

