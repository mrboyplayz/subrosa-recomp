/* Address: 0x1402507bc | Name: sub_1402507BC | Size: 702 bytes */
__int64 __fastcall sub_1402507BC(__int64 a1, char *a2)
{
  char *v2; // r8
  char i; // al
  _BYTE *v5; // r8
  char v6; // r9
  char v7; // di
  char v8; // r10
  char v9; // r11
  char v10; // dl
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  _QWORD *v23; // rdi
  bool v24; // zf
  _BYTE *j; // rdi
  __int64 v26; // rsi
  _BYTE *k; // rcx

  v2 = a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = dword_140404A6C[19065285];
  for ( i = *a2; i == 32; i = *v2 )
    ++v2;
  if ( i == 97 )
  {
    *(_DWORD *)a1 = 265;
LABEL_10:
    *(_DWORD *)(a1 + 4) = 2;
    goto LABEL_11;
  }
  if ( i != 114 )
  {
    if ( i != 119 )
      goto LABEL_81;
    *(_DWORD *)a1 = 769;
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 4) = 1;
LABEL_11:
  v5 = v2 + 1;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 1;
  while ( *v5 )
  {
    v11 = (char)*v5;
    if ( v11 > 83 )
    {
      v18 = v11 - 84;
      if ( !v18 )
      {
        if ( (*(_DWORD *)a1 & 0x1000) == 0 )
        {
          v17 = *(_DWORD *)a1 | 0x1000;
          goto LABEL_53;
        }
        goto LABEL_51;
      }
      v19 = v18 - 14;
      if ( !v19 )
      {
        if ( (*(_DWORD *)a1 & 0xC000) == 0 )
        {
          v17 = *(_DWORD *)a1 | 0x8000;
          goto LABEL_53;
        }
        goto LABEL_51;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 11;
        if ( v21 )
        {
          v22 = v21 - 6;
          if ( v22 )
          {
            if ( v22 != 4 )
              goto LABEL_81;
            if ( (*(_DWORD *)a1 & 0x200) != 0 )
            {
              v17 = *(_DWORD *)a1 | 0x400;
              goto LABEL_53;
            }
          }
          else if ( (*(_DWORD *)a1 & 0xC000) == 0 )
          {
            v17 = *(_DWORD *)a1 | 0x4000;
LABEL_53:
            *(_DWORD *)a1 = v17;
            goto LABEL_54;
          }
          goto LABEL_51;
        }
        if ( v6 )
          goto LABEL_51;
        *(_DWORD *)(a1 + 4) &= ~0x800u;
      }
      else
      {
        if ( v6 )
          goto LABEL_51;
        *(_DWORD *)(a1 + 4) |= 0x800u;
      }
      v6 = 1;
      v10 = 1;
    }
    else
    {
      if ( v11 == 83 )
      {
        if ( v8 )
          goto LABEL_51;
        *(_DWORD *)a1 |= 0x20u;
LABEL_32:
        v8 = 1;
        v10 = 1;
        goto LABEL_55;
      }
      v12 = v11 - 32;
      if ( v12 )
      {
        v13 = v12 - 11;
        if ( !v13 )
        {
          if ( !v7 )
          {
            v7 = 1;
            if ( (*(_DWORD *)a1 & 2) == 0 )
            {
              *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFFFFFC | 2;
              *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) & 0xFFFFFFF8 | 4;
              goto LABEL_54;
            }
          }
          goto LABEL_51;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          v9 = 1;
LABEL_51:
          v10 = 0;
          goto LABEL_55;
        }
        v15 = v14 - 24;
        if ( !v15 )
        {
          if ( (*(_DWORD *)a1 & 0x40) == 0 )
          {
            v17 = *(_DWORD *)a1 | 0x40;
            goto LABEL_53;
          }
          goto LABEL_51;
        }
        v16 = v15 - 10;
        if ( !v16 )
        {
          *(_DWORD *)a1 |= 0x80u;
LABEL_54:
          v10 = 1;
          goto LABEL_55;
        }
        if ( v16 != 4 )
          goto LABEL_81;
        if ( v8 )
          goto LABEL_51;
        *(_DWORD *)a1 |= 0x10u;
        goto LABEL_32;
      }
    }
LABEL_55:
    v5 += v10 != 0;
    if ( !v10 )
      break;
  }
  v23 = v5 + 1;
  if ( !v9 )
    v23 = v5;
  while ( *(_BYTE *)v23 == 32 )
    v23 = (_QWORD *)((char *)v23 + 1);
  if ( !v9 )
  {
    v24 = *(_BYTE *)v23 == 0;
    goto LABEL_63;
  }
  if ( (unsigned int)strncmp(v23, (__int64)"ccs", 3u) )
    goto LABEL_81;
  for ( j = (char *)v23 + 3; *j == 32; ++j )
    ;
  if ( *j != 61 )
    goto LABEL_81;
  do
    ++j;
  while ( *j == 32 );
  v26 = 5;
  if ( !(unsigned int)strnicmp(j, "UTF-8", 5) )
  {
    *(_DWORD *)a1 |= 0x40000u;
    goto LABEL_77;
  }
  v26 = 8;
  if ( !(unsigned int)strnicmp(j, "UTF-16LEUNICODE", 8) )
  {
    *(_DWORD *)a1 |= 0x20000u;
    goto LABEL_77;
  }
  v26 = 7;
  if ( (unsigned int)strnicmp(j, "UNICODE", 7) )
    goto LABEL_81;
  *(_DWORD *)a1 |= 0x10000u;
LABEL_77:
  for ( k = &j[v26]; *k == 32; ++k )
    ;
  v24 = *k == 0;
LABEL_63:
  if ( !v24 )
  {
LABEL_81:
    *errno() = 22;
    sub_14024CF6C();
    return a1;
  }
  *(_BYTE *)(a1 + 8) = 1;
  return a1;
}

