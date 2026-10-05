/* Address: 0x14022d3c8 | Name: sub_14022D3C8 | Size: 443 bytes */
char __fastcall sub_14022D3C8(__int64 a1, int a2)
{
  _BYTE *v2; // r11
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // r12
  _BYTE *v10; // r15
  __int64 v11; // rbp
  __int64 i; // rdi
  unsigned __int8 *v13; // rbx
  unsigned __int64 v14; // rsi
  char v15; // al
  bool v16; // zf

  v2 = nullptr;
  if ( *(_BYTE *)(a1 + 58) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 128) += 8LL;
  v3 = *(_QWORD *)(a1 + 128);
  v2 = *(_BYTE **)(v3 - 8);
  if ( !v2 )
  {
    *errno() = 22;
    sub_14024CF6C(v4);
    return 0;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
LABEL_7:
    v7 = -1;
  }
  else
  {
    v6 = v3 + 8;
    *(_QWORD *)(a1 + 128) = v6;
    v7 = *(unsigned int *)(v6 - 8);
  }
  if ( !v7 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      if ( v8 != *(_QWORD *)(a1 + 16) )
        *(_QWORD *)(a1 + 24) = v8 + 1;
LABEL_12:
      *v2 = 0;
    }
LABEL_13:
    *errno() = 12;
    return 0;
  }
  v9 = *(_QWORD *)(a1 + 64);
  v10 = v2;
  v11 = v7;
  if ( a2 && v7 != -1 )
    v11 = v7 - 1;
  for ( i = 0; !v9 || i != v9; ++i )
  {
    v13 = *(unsigned __int8 **)(a1 + 24);
    if ( v13 == *(unsigned __int8 **)(a1 + 16) )
    {
      LODWORD(v14) = -1;
LABEL_38:
      if ( v13 != *(unsigned __int8 **)(a1 + 8) && (v13 != *(unsigned __int8 **)(a1 + 16) || (_DWORD)v14 != -1) )
        *(_QWORD *)(a1 + 24) = v13 - 1;
      break;
    }
    v14 = *v13++;
    *(_QWORD *)(a1 + 24) = v13;
    if ( !a2 )
    {
      v15 = 1;
LABEL_29:
      v16 = v15 == 0;
      goto LABEL_30;
    }
    if ( a2 != 1 )
    {
      if ( a2 == 8 )
      {
        v16 = ((unsigned __int8)(1 << (v14 & 7)) & *(_BYTE *)((v14 >> 3) + a1 + 84)) == 0;
        goto LABEL_30;
      }
      v15 = 0;
      goto LABEL_29;
    }
    if ( (unsigned int)(v14 - 9) <= 4 )
      goto LABEL_38;
    v16 = (_DWORD)v14 == 32;
LABEL_30:
    if ( v16 )
      goto LABEL_38;
    if ( !*(_BYTE *)(a1 + 58) )
    {
      if ( !v11 )
      {
        if ( v7 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      *v10++ = v14;
      --v11;
    }
  }
  if ( !i || !a2 && i != v9 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 58) && a2 )
    *v10 = 0;
  return 1;
}

