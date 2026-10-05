/* Address: 0x14022ded8 | Name: sub_14022DED8 | Size: 443 bytes */
char __fastcall sub_14022DED8(__int64 a1, int a2)
{
  unsigned __int16 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int16 *v12; // r13
  __int64 v13; // r12
  __int64 i; // r14
  unsigned __int16 *v15; // rax
  unsigned __int16 v16; // bp
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // [rsp+50h] [rbp+8h]

  v4 = nullptr;
  if ( *(_BYTE *)(a1 + 60) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 104) += 8LL;
  v5 = *(_QWORD *)(a1 + 104);
  v4 = *(unsigned __int16 **)(v5 - 8);
  if ( !v4 )
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
      *v4 = 0;
    }
LABEL_13:
    *errno() = 12;
    return 0;
  }
  v11 = *(_QWORD *)(a1 + 64);
  v12 = v4;
  v19 = v11;
  v13 = v9;
  if ( a2 && v9 != -1 )
    v13 = v9 - 1;
  for ( i = 0; !v11 || i != v11; ++i )
  {
    v15 = *(unsigned __int16 **)(a1 + 24);
    if ( v15 == *(unsigned __int16 **)(a1 + 16) )
    {
      v16 = -1;
LABEL_36:
      v18 = *(_QWORD *)(a1 + 24);
      if ( v18 != *(_QWORD *)(a1 + 8) && (v18 != *(_QWORD *)(a1 + 16) || v16 != 0xFFFF) )
        *(_QWORD *)(a1 + 24) = v18 - 2;
      v11 = v19;
      break;
    }
    v16 = *v15;
    *(_QWORD *)(a1 + 24) = v15 + 1;
    if ( v16 == 0xFFFF )
      goto LABEL_36;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned __int16)(v16 - 9) <= 4u )
          goto LABEL_36;
        v17 = v16 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_36;
        v17 = (unsigned __int8)sub_140236014(a1 + 88, v16) == 0;
      }
      if ( v17 )
        goto LABEL_36;
    }
    if ( !*(_BYTE *)(a1 + 60) )
    {
      if ( !v13 )
      {
        if ( v9 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      *v12++ = v16;
      --v13;
    }
    v11 = v19;
  }
  if ( !i || !a2 && i != v11 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 60) && a2 )
    *v12 = 0;
  return 1;
}

