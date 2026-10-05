/* Address: 0x140250a7c | Name: ??$__acrt_stdio_parse_mode@_W@@YA?AU__acrt_stdio_stream_mode@@QEB_W@Z | Size: 767 bytes */
__int64 __fastcall __acrt_stdio_parse_mode<wchar_t>(__int64 a1, __int16 *a2)
{
  __int16 *v2; // r8
  __int16 i; // ax
  _WORD *v5; // r8
  char v6; // dl
  char v7; // r9
  char v8; // di
  char v9; // r10
  char v10; // r11
  __int64 v11; // rsi
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  _WORD *v24; // rdi
  bool v25; // zf
  _WORD *j; // rdi
  _WORD *k; // rcx

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
  v6 = 1;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 5;
  while ( *v5 )
  {
    v12 = (unsigned __int16)*v5;
    if ( v12 > 0x53 )
    {
      v19 = v12 - 84;
      if ( !v19 )
      {
        if ( (*(_DWORD *)a1 & 0x1000) == 0 )
        {
          v18 = *(_DWORD *)a1 | 0x1000;
          goto LABEL_53;
        }
        goto LABEL_51;
      }
      v20 = v19 - 14;
      if ( !v20 )
      {
        if ( (*(_DWORD *)a1 & 0xC000) == 0 )
        {
          v18 = *(_DWORD *)a1 | 0x8000;
          goto LABEL_53;
        }
        goto LABEL_51;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 11;
        if ( v22 )
        {
          v23 = v22 - 6;
          if ( v23 )
          {
            if ( v23 != 4 )
              goto LABEL_81;
            if ( (*(_DWORD *)a1 & 0x200) != 0 )
            {
              v18 = *(_DWORD *)a1 | 0x400;
              goto LABEL_53;
            }
          }
          else if ( (*(_DWORD *)a1 & 0xC000) == 0 )
          {
            v18 = *(_DWORD *)a1 | 0x4000;
LABEL_53:
            *(_DWORD *)a1 = v18;
            goto LABEL_54;
          }
          goto LABEL_51;
        }
        if ( v7 )
          goto LABEL_51;
        *(_DWORD *)(a1 + 4) &= ~0x800u;
      }
      else
      {
        if ( v7 )
          goto LABEL_51;
        *(_DWORD *)(a1 + 4) |= 0x800u;
      }
      v7 = 1;
      v6 = 1;
    }
    else
    {
      if ( v12 == 83 )
      {
        if ( v9 )
          goto LABEL_51;
        *(_DWORD *)a1 |= 0x20u;
LABEL_32:
        v9 = 1;
        v6 = 1;
        goto LABEL_55;
      }
      v13 = v12 - 32;
      if ( v13 )
      {
        v14 = v13 - 11;
        if ( !v14 )
        {
          if ( !v8 )
          {
            v8 = 1;
            if ( (*(_DWORD *)a1 & 2) == 0 )
            {
              *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFFFFFC | 2;
              *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) & 0xFFFFFFF8 | 4;
              goto LABEL_54;
            }
          }
          goto LABEL_51;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          v10 = 1;
LABEL_51:
          v6 = 0;
          goto LABEL_55;
        }
        v16 = v15 - 24;
        if ( !v16 )
        {
          if ( (*(_DWORD *)a1 & 0x40) == 0 )
          {
            v18 = *(_DWORD *)a1 | 0x40;
            goto LABEL_53;
          }
          goto LABEL_51;
        }
        v17 = v16 - 10;
        if ( !v17 )
        {
          *(_DWORD *)a1 |= 0x80u;
LABEL_54:
          v6 = 1;
          goto LABEL_55;
        }
        if ( v17 != 4 )
          goto LABEL_81;
        if ( v9 )
          goto LABEL_51;
        *(_DWORD *)a1 |= 0x10u;
        goto LABEL_32;
      }
    }
LABEL_55:
    v5 = (_WORD *)((char *)v5 + (v6 != 0 ? 2 : 0));
    if ( !v6 )
      break;
  }
  v24 = v5 + 1;
  if ( !v10 )
    v24 = v5;
  while ( *v24 == 32 )
    ++v24;
  if ( !v10 )
  {
    v25 = *v24 == 0;
    goto LABEL_63;
  }
  if ( (unsigned int)wcsncmp(v24, L"ccs", 3) )
    goto LABEL_81;
  for ( j = v24 + 3; *j == 32; ++j )
    ;
  if ( *j != 61 )
    goto LABEL_81;
  do
    ++j;
  while ( *j == 32 );
  if ( !(unsigned int)wcsnicmp(j, L"UTF-8", 5) )
  {
    *(_DWORD *)a1 |= 0x40000u;
    goto LABEL_77;
  }
  if ( !(unsigned int)wcsnicmp(j, L"UTF-16LEUNICODE", 8) )
  {
    *(_DWORD *)a1 |= 0x20000u;
    v11 = 8;
    goto LABEL_77;
  }
  if ( (unsigned int)wcsnicmp(j, L"UNICODE", 7) )
    goto LABEL_81;
  *(_DWORD *)a1 |= 0x10000u;
  v11 = 7;
LABEL_77:
  for ( k = &j[v11]; *k == 32; ++k )
    ;
  v25 = *k == 0;
LABEL_63:
  if ( !v25 )
  {
LABEL_81:
    *errno() = 22;
    sub_14024CF6C();
    return a1;
  }
  *(_BYTE *)(a1 + 8) = 1;
  return a1;
}

