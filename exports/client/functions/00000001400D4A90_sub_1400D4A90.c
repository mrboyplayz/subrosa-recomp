/* Address: 0x1400d4a90 | Name: sub_1400D4A90 | Size: 421 bytes */
__int64 __fastcall sub_1400D4A90(int a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned int v4; // r10d
  int v5; // ecx
  unsigned int *v6; // rax
  int v7; // edx
  __int64 v8; // rdx
  unsigned int *v9; // r11
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r11
  int v14; // eax

  v2 = a2;
  v3 = a1;
  if ( a1 == a2 )
    return 0xFFFFFFFFLL;
  v4 = dword_140404A6C[193074052];
  v5 = 0;
  if ( (int)dword_140404A6C[193074052] <= 0 )
  {
LABEL_9:
    v8 = 3 * v3;
    v9 = &dword_140404A6C[3 * v2 + 193070965];
    if ( dword_140404A6C[3 * v3 + 193070980] == v9[15] )
    {
      dword_140404A6C[13 * dword_140404A6C[193074052] + 193074055] = 1;
      v4 = dword_140404A6C[193074052];
      if ( (int)dword_140404A6C[v8 + 193070982] > (int)v9[17] )
      {
        v11 = v3;
        LODWORD(v3) = v2;
        LODWORD(v2) = v11;
      }
    }
    else if ( dword_140404A6C[v8 + 193070982] != v9[17] )
    {
      return 0xFFFFFFFFLL;
    }
    v12 = 3LL * (int)v3;
    v13 = 3LL * (int)v2;
    if ( dword_140404A6C[v12 + 193070982] == dword_140404A6C[v13 + 193070982] )
    {
      dword_140404A6C[13 * v4 + 193074055] = 0;
      v4 = dword_140404A6C[193074052];
      if ( (int)dword_140404A6C[v12 + 193070980] > (int)dword_140404A6C[v13 + 193070980] )
      {
        v14 = v3;
        LODWORD(v3) = v2;
        LODWORD(v2) = v14;
      }
    }
    dword_140404A6C[13 * v4 + 193074053] = v3;
    dword_140404A6C[13 * dword_140404A6C[193074052] + 193074054] = v2;
    dword_140404A6C[13 * dword_140404A6C[193074052] + 193074056] = dword_140404A6C[193070975];
    dword_140404A6C[13 * dword_140404A6C[193074052] + 193074057] = dword_140404A6C[193070976];
    strcpy((char *)&dword_140404A6C[13 * dword_140404A6C[193074052] + 193074058], "Street");
    return dword_140404A6C[193074052]++;
  }
  v6 = &dword_140404A6C[193074054];
  while ( 1 )
  {
    v7 = *(v6 - 1);
    if ( v7 == (_DWORD)v3 && *v6 == (_DWORD)v2 )
      break;
    if ( v7 == (_DWORD)v2 && *v6 == (_DWORD)v3 )
      break;
    ++v5;
    v6 += 13;
    if ( v5 >= (int)dword_140404A6C[193074052] )
      goto LABEL_9;
  }
  return (unsigned int)v5;
}

