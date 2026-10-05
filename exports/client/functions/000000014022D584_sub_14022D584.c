/* Address: 0x14022d584 | Name: sub_14022D584 | Size: 496 bytes */
char __fastcall sub_14022D584(__int64 a1, int a2)
{
  _BYTE *v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 i; // r15
  unsigned __int16 v13; // ax
  __int64 v14; // r8
  unsigned __int16 v15; // r14
  bool v16; // zf
  _BYTE *v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+80h] [rbp+8h]
  __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  v2 = nullptr;
  if ( *(_BYTE *)(a1 + 52) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 96) += 8LL;
  v5 = *(_QWORD *)(a1 + 96);
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
    *(_QWORD *)(a1 + 96) = v8;
    v9 = *(unsigned int *)(v8 - 8);
  }
  if ( !v9 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      if ( (unsigned __int16)j__fgetwc_nolock(*(_QWORD *)(a1 + 8)) != 0xFFFF )
        ++*(_QWORD *)(a1 + 16);
LABEL_12:
      *v2 = 0;
    }
LABEL_13:
    *errno() = 12;
    return 0;
  }
  v10 = *(_QWORD *)(a1 + 56);
  v11 = v9;
  v18 = v10;
  v17 = v2;
  v19 = v9;
  if ( a2 && v9 != -1 )
  {
    v11 = v9 - 1;
    v19 = v9 - 1;
  }
  for ( i = 0; !v10 || i != v10; ++i )
  {
    v13 = j__fgetwc_nolock(*(_QWORD *)(a1 + 8));
    v15 = v13;
    if ( v13 == 0xFFFF )
      goto LABEL_35;
    ++*(_QWORD *)(a1 + 16);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned __int16)(v13 - 9) <= 4u )
          goto LABEL_35;
        v16 = v13 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_35;
        v16 = (unsigned __int8)sub_140236014(a1 + 80, v13) == 0;
      }
      if ( v16 )
      {
LABEL_35:
        if ( v15 != 0xFFFF )
        {
          --*(_QWORD *)(a1 + 16);
          ungetwc_nolock(v15, *(_QWORD *)(a1 + 8), v14);
        }
LABEL_37:
        v10 = v18;
        break;
      }
    }
    if ( !*(_BYTE *)(a1 + 52) )
    {
      if ( !v11 )
      {
        if ( v9 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      if ( !(unsigned __int8)unknown_libname_671(a1, (_DWORD)v2, v9, (unsigned int)&v17, (__int64)&v19, v15) )
        goto LABEL_37;
      v11 = v19;
    }
    v10 = v18;
  }
  if ( !i || !a2 && i != v10 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 52) && a2 )
    *v17 = 0;
  return 1;
}

