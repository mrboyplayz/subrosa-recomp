/* Address: 0x14021fa6c | Name: sub_14021FA6C | Size: 514 bytes */
char __fastcall sub_14021FA6C(__int64 a1, unsigned int a2, char a3)
{
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v13; // ecx
  int v14; // ecx
  char v15; // al
  int v16; // ecx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 5 )
  {
    v13 = v5 - 6;
    if ( !v13 )
      goto LABEL_8;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_8;
    v8 = v14 - 2;
    if ( !v8 )
      goto LABEL_8;
  }
  else
  {
    if ( v5 == 5 )
    {
LABEL_8:
      v10 = 8;
      goto LABEL_9;
    }
    if ( !v5 )
      goto LABEL_15;
    v7 = v5 - 1;
    if ( !v7 )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = 2;
      goto LABEL_9;
    }
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_15:
    v10 = 4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  v10 = 0;
LABEL_9:
  v19 = 0;
  switch ( v10 )
  {
    case 1LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v15 = sub_14020ECE8(a1, &v19);
      else
        v15 = sub_14020F030(a1, &v19);
      break;
    case 2LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v15 = sub_14020F378(a1, &v19);
      else
        v15 = sub_14020F858(a1, &v19);
      break;
    case 4LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v15 = sub_14020FBA0(a1, &v19);
      else
        v15 = sub_14020FEE0(a1, &v19);
      break;
    case 8LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        v15 = unknown_libname_289(a1, &v19);
      else
        v15 = unknown_libname_297(a1, &v19);
      break;
    default:
      *errno() = 22;
      sub_14024CF6C(v11);
      return 0;
  }
  if ( !v15 )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
  {
    v16 = *(_DWORD *)(a1 + 48);
    v17 = v19;
    if ( (v16 & 0x10) != 0 && v19 < 0 )
    {
      v17 = -v19;
      v16 |= 0x40u;
      *(_DWORD *)(a1 + 48) = v16;
    }
    if ( *(int *)(a1 + 56) >= 0 )
    {
      v18 = *(int *)(a1 + 56);
      *(_DWORD *)(a1 + 48) = v16 & 0xFFFFFFF7;
      sub_14020EAD8(a1 + 88, v18);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = 1;
    }
    if ( !v17 )
      *(_DWORD *)(a1 + 48) &= ~0x20u;
    *(_BYTE *)(a1 + 84) = 0;
    if ( v10 == 8 )
      unknown_libname_363(a1, v17, a2, a3);
    else
      unknown_libname_351(a1, v17, a2, a3);
    if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_BYTE **)(a1 + 72) != 48) )
    {
      *(_BYTE *)--*(_QWORD *)(a1 + 72) = 48;
      ++*(_DWORD *)(a1 + 80);
    }
  }
  return 1;
}

