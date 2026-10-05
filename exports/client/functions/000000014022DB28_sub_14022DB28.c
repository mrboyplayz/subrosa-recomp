/* Address: 0x14022db28 | Name: sub_14022DB28 | Size: 490 bytes */
char __fastcall sub_14022DB28(__int64 a1, int a2)
{
  _WORD *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r10
  __int64 i; // rbp
  unsigned __int8 *v14; // r9
  unsigned __int64 v15; // r11
  char v16; // al
  bool v17; // zf
  __int16 v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  _WORD *v20; // [rsp+78h] [rbp+20h] BYREF

  v4 = nullptr;
  if ( *(_BYTE *)(a1 + 58) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 128) += 8LL;
  v5 = *(_QWORD *)(a1 + 128);
  v4 = *(_WORD **)(v5 - 8);
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
    *(_QWORD *)(a1 + 128) = v8;
    v9 = *(unsigned int *)(v8 - 8);
  }
  if ( !v9 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 24);
      if ( v10 != *(_QWORD *)(a1 + 16) )
        *(_QWORD *)(a1 + 24) = v10 + 1;
LABEL_12:
      *v4 = 0;
    }
LABEL_13:
    *errno() = 12;
    return 0;
  }
  v11 = *(_QWORD *)(a1 + 64);
  v12 = v9;
  v20 = v4;
  v19 = v9;
  if ( a2 && v9 != -1 )
  {
    v12 = v9 - 1;
    v19 = v9 - 1;
  }
  for ( i = 0; !v11 || i != v11; ++i )
  {
    v14 = *(unsigned __int8 **)(a1 + 24);
    if ( v14 == *(unsigned __int8 **)(a1 + 16) )
    {
      LODWORD(v15) = -1;
LABEL_39:
      if ( v14 != *(unsigned __int8 **)(a1 + 8) && (v14 != *(unsigned __int8 **)(a1 + 16) || (_DWORD)v15 != -1) )
        *(_QWORD *)(a1 + 24) = v14 - 1;
      break;
    }
    v15 = *v14++;
    *(_QWORD *)(a1 + 24) = v14;
    if ( !a2 )
    {
      v16 = 1;
LABEL_29:
      v17 = v16 == 0;
      goto LABEL_30;
    }
    if ( a2 != 1 )
    {
      if ( a2 == 8 )
      {
        v17 = ((unsigned __int8)(1 << (v15 & 7)) & *(_BYTE *)((v15 >> 3) + a1 + 84)) == 0;
        goto LABEL_30;
      }
      v16 = 0;
      goto LABEL_29;
    }
    if ( (unsigned int)(v15 - 9) <= 4 )
      goto LABEL_39;
    v17 = (_DWORD)v15 == 32;
LABEL_30:
    if ( v17 )
      goto LABEL_39;
    if ( !*(_BYTE *)(a1 + 58) )
    {
      if ( !v12 )
      {
        if ( v9 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      LOBYTE(v18) = v15;
      if ( !(unsigned __int8)sub_1402366A0(a1, (_DWORD)v4, v9, (unsigned int)&v20, (__int64)&v19, v18) )
        break;
      v12 = v19;
    }
  }
  if ( !i || !a2 && i != v11 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 58) && a2 )
    *v20 = 0;
  return 1;
}

