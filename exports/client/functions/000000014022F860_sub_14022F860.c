/* Address: 0x14022f860 | Name: sub_14022F860 | Size: 456 bytes */
char __fastcall sub_14022F860(__int64 a1)
{
  _BYTE *v2; // rax
  int v4; // eax
  unsigned __int8 *v5; // rcx
  int v6; // eax
  char v7; // di
  _BYTE *v8; // rax
  _BYTE *v9; // rcx
  _BYTE *v10; // rax

  if ( *(_DWORD *)(a1 + 16) )
    return 0;
  v2 = *(_BYTE **)(a1 + 8);
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 26) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  if ( !*v2 )
  {
    *(_DWORD *)(a1 + 20) = 1;
    return 0;
  }
  v4 = sub_1402577B4((unsigned __int8)*v2);
  v5 = *(unsigned __int8 **)(a1 + 8);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 20) = 2;
    v6 = sub_1402577B4(*v5);
    v7 = 1;
    while ( v6 )
      v6 = sub_1402577B4(*(unsigned __int8 *)++*(_QWORD *)(a1 + 8));
    return v7;
  }
  if ( *v5 != 37 || (v8 = v5 + 1, v5[1] == 37) )
  {
    *(_DWORD *)(a1 + 20) = 3;
    v7 = 1;
    *(_BYTE *)(a1 + 24) = *v5;
    *(_QWORD *)(a1 + 8) = &v5[(*v5 == 37) + 1];
    if ( (sub_140256DC0()[*(unsigned __int8 *)(a1 + 24)] & 0x8000u) != 0 )
    {
      v10 = *(_BYTE **)(a1 + 8);
      if ( *v10 )
      {
        *(_BYTE *)(a1 + 25) = *v10;
        *(_QWORD *)(a1 + 8) = v10 + 1;
      }
      else
      {
        *(_QWORD *)(a1 + 16) = 42;
        v7 = 0;
        *(_WORD *)(a1 + 24) = 0;
        *(_BYTE *)(a1 + 26) = 0;
        *(_QWORD *)(a1 + 32) = 0;
        *(_DWORD *)(a1 + 40) = 0;
        *(_BYTE *)(a1 + 44) = 0;
        *(_DWORD *)(a1 + 48) = 0;
      }
    }
    return v7;
  }
  *(_DWORD *)(a1 + 20) = 4;
  v7 = 1;
  *(_QWORD *)(a1 + 8) = v8;
  if ( *v8 == 42 )
  {
    *(_BYTE *)(a1 + 26) = 1;
    *(_QWORD *)(a1 + 8) = v5 + 2;
  }
  if ( !(unsigned __int8)sub_1402352B4(a1) )
    return 0;
  MEMORY[0x1402355CC](a1);
  v9 = *(_BYTE **)(a1 + 8);
  if ( *v9 == 119 )
  {
    *(_QWORD *)(a1 + 8) = v9 + 1;
LABEL_18:
    *(_BYTE *)(a1 + 44) = 1;
    goto LABEL_19;
  }
  if ( ((*v9 - 67) & 0xEF) == 0 )
    goto LABEL_18;
LABEL_19:
  if ( !(unsigned __int8)MEMORY[0x140234F00](a1) )
    return 0;
  if ( !byte_140285820[12 * *(int *)(a1 + 48) + *(int *)(a1 + 40)] )
  {
    *(_QWORD *)(a1 + 16) = 22;
    *(_WORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 26) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_BYTE *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    return 0;
  }
  return v7;
}

