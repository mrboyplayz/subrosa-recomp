/* Address: 0x1402207ac | Name: sub_1402207AC | Size: 459 bytes */
char __fastcall sub_1402207AC(__int64 a1, unsigned int a2, char a3)
{
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rsi
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  int v23; // ecx
  unsigned __int64 v24; // rdx

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
      goto LABEL_14;
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
LABEL_14:
    v10 = 4;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    goto LABEL_8;
  v10 = 0;
LABEL_9:
  switch ( v10 )
  {
    case 1LL:
      v21 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v17 = (v21 & 0x10) == 0;
      v22 = *(_QWORD *)(a1 + 32);
      if ( v17 )
        v15 = *(unsigned __int8 *)(v22 - 8);
      else
        v15 = *(char *)(v22 - 8);
      break;
    case 2LL:
      v19 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v17 = (v19 & 0x10) == 0;
      v20 = *(_QWORD *)(a1 + 32);
      if ( v17 )
        v15 = *(unsigned __int16 *)(v20 - 8);
      else
        v15 = *(__int16 *)(v20 - 8);
      break;
    case 4LL:
      v16 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v17 = (v16 & 0x10) == 0;
      v18 = *(_QWORD *)(a1 + 32);
      if ( v17 )
        v15 = *(unsigned int *)(v18 - 8);
      else
        v15 = *(int *)(v18 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno() = 22;
      sub_14024CF6C(v11);
      return 0;
  }
  v23 = *(_DWORD *)(a1 + 48);
  if ( (v23 & 0x10) != 0 && v15 < 0 )
  {
    v15 = -v15;
    v23 |= 0x40u;
    *(_DWORD *)(a1 + 48) = v23;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v24 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = v23 & 0xFFFFFFF7;
    sub_14020EB80(a1 + 88, v24);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !v15 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 1;
  if ( v10 == 8 )
    unknown_libname_370(a1, v15, a2, a3);
  else
    unknown_libname_358(a1, v15, a2, a3);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_WORD **)(a1 + 72) != 48) )
  {
    *(_QWORD *)(a1 + 72) -= 2LL;
    **(_WORD **)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}

