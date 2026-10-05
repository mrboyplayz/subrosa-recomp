/* Address: 0x14022fa28 | Name: sub_14022FA28 | Size: 408 bytes */
char __fastcall sub_14022FA28(__int64 a1)
{
  unsigned __int16 *v2; // rax
  __int64 v3; // rcx
  int v5; // eax
  unsigned __int16 *v6; // rcx
  __int64 i; // rcx
  _WORD *v8; // rdx
  _WORD *v9; // rcx
  bool v10; // al
  __int64 v11; // rax

  if ( *(_DWORD *)(a1 + 16) )
    return 0;
  v2 = *(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  v3 = *v2;
  if ( !(_WORD)v3 )
  {
    *(_DWORD *)(a1 + 20) = 1;
    return 0;
  }
  v5 = sub_140256E00(v3, 8);
  v6 = *(unsigned __int16 **)(a1 + 8);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 20) = 2;
    for ( i = *v6; (unsigned int)sub_140256E00(i, 8); i = **(unsigned __int16 **)(a1 + 8) )
      *(_QWORD *)(a1 + 8) += 2LL;
    return 1;
  }
  if ( *v6 != 37 || (v8 = v6 + 1, v6[1] == 37) )
  {
    *(_DWORD *)(a1 + 20) = 3;
    *(_WORD *)(a1 + 24) = *v6;
    v11 = 2;
    if ( *v6 != 37 )
      v11 = 1;
    *(_QWORD *)(a1 + 8) = &v6[v11];
    return 1;
  }
  *(_QWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 20) = 4;
  if ( *v8 == 42 )
  {
    *(_BYTE *)(a1 + 28) = 1;
    *(_QWORD *)(a1 + 8) = v6 + 2;
  }
  if ( !(unsigned __int8)sub_14023535C(a1) )
    return 0;
  MEMORY[0x140235704](a1);
  v9 = *(_WORD **)(a1 + 8);
  if ( *v9 == 119 )
  {
    *(_QWORD *)(a1 + 8) = v9 + 1;
LABEL_22:
    *(_BYTE *)(a1 + 44) = 1;
    goto LABEL_23;
  }
  if ( ((*v9 - 67) & 0xFFEF) != 0 )
  {
    if ( *(_DWORD *)(a1 + 40) == 11 )
      goto LABEL_22;
    v10 = (*(_BYTE *)a1 & 2) != 0;
  }
  else
  {
    v10 = 0;
  }
  if ( v10 )
    goto LABEL_22;
LABEL_23:
  if ( !(unsigned __int8)MEMORY[0x1402350A4](a1) )
    return 0;
  if ( !byte_140285820[12 * *(int *)(a1 + 48) + *(int *)(a1 + 40)] )
  {
    *(_QWORD *)(a1 + 16) = 22;
    *(_DWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 28) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_BYTE *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    return 0;
  }
  return 1;
}

