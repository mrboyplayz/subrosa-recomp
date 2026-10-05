/* Address: 0x14022d774 | Name: sub_14022D774 | Size: 477 bytes */
char __fastcall sub_14022D774(__int64 a1, int a2)
{
  _BYTE *v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 i; // r15
  unsigned __int16 *v14; // rax
  unsigned __int16 v15; // bp
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  _BYTE *v19; // [rsp+88h] [rbp+20h] BYREF

  v2 = nullptr;
  if ( *(_BYTE *)(a1 + 60) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 104) += 8LL;
  v5 = *(_QWORD *)(a1 + 104);
  v2 = *(_BYTE **)(v5 - 8);
  if ( !v2 )
  {
    *errno() = 22;
    sub_14024CF6C(v6);
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    v9 = -1;
  }
  else
  {
    v8 = v5 + 8;
    *(_QWORD *)(a1 + 104) = v8;
    v9 = *(unsigned int *)(v8 - 8);
  }
  if ( !v9 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 24);
      if ( v10 != *(_QWORD *)(a1 + 16) )
        *(_QWORD *)(a1 + 24) = v10 + 2;
LABEL_12:
      *v2 = 0;
    }
LABEL_13:
    *errno() = 12;
    return 0;
  }
  v11 = *(_QWORD *)(a1 + 64);
  v12 = v9;
  v19 = v2;
  v18 = v9;
  if ( a2 && v9 != -1 )
  {
    v12 = v9 - 1;
    v18 = v9 - 1;
  }
  for ( i = 0; !v11 || i != v11; ++i )
  {
    v14 = *(unsigned __int16 **)(a1 + 24);
    if ( v14 == *(unsigned __int16 **)(a1 + 16) )
    {
      v15 = -1;
LABEL_37:
      v17 = *(_QWORD *)(a1 + 24);
      if ( v17 != *(_QWORD *)(a1 + 8) && (v17 != *(_QWORD *)(a1 + 16) || v15 != 0xFFFF) )
        *(_QWORD *)(a1 + 24) = v17 - 2;
      break;
    }
    v15 = *v14;
    *(_QWORD *)(a1 + 24) = v14 + 1;
    if ( v15 == 0xFFFF )
      goto LABEL_37;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned __int16)(v15 - 9) <= 4u )
          goto LABEL_37;
        v16 = v15 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_37;
        v16 = (unsigned __int8)sub_140236014(a1 + 88, v15) == 0;
      }
      if ( v16 )
        goto LABEL_37;
    }
    if ( !*(_BYTE *)(a1 + 60) )
    {
      if ( !v12 )
      {
        if ( v9 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      if ( !(unsigned __int8)unknown_libname_673(a1, (_DWORD)v2, v9, (unsigned int)&v19, (__int64)&v18, v15) )
        break;
      v12 = v18;
    }
  }
  if ( !i || !a2 && i != v11 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 60) && a2 )
    *v19 = 0;
  return 1;
}

