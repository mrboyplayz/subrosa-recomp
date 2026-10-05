/* Address: 0x14022d22c | Name: sub_14022D22C | Size: 411 bytes */
char __fastcall sub_14022D22C(__int64 a1, int a2)
{
  _BYTE *v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r13
  _BYTE *v11; // r12
  __int64 v12; // r15
  __int64 i; // rbp
  int v14; // r9d
  bool v15; // zf

  v2 = nullptr;
  if ( *(_BYTE *)(a1 + 50) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 120) += 8LL;
  v5 = *(_QWORD *)(a1 + 120);
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
    *(_QWORD *)(a1 + 120) = v8;
    v9 = *(unsigned int *)(v8 - 8);
  }
  if ( !v9 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      if ( getc_nolock(*(FILE **)(a1 + 8)) != -1 )
        ++*(_QWORD *)(a1 + 16);
LABEL_12:
      *v2 = 0;
    }
LABEL_13:
    *errno() = 12;
    return 0;
  }
  v10 = *(_QWORD *)(a1 + 56);
  v11 = v2;
  v12 = v9;
  if ( a2 && v9 != -1 )
    v12 = v9 - 1;
  for ( i = 0; !v10 || i != v10; ++i )
  {
    v14 = getc_nolock(*(FILE **)(a1 + 8));
    if ( v14 == -1 )
      goto LABEL_34;
    ++*(_QWORD *)(a1 + 16);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned int)(v14 - 9) <= 4 )
          goto LABEL_34;
        v15 = v14 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_34;
        v15 = ((unsigned __int8)(1 << (v14 & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)v14 >> 3) + a1 + 76)) == 0;
      }
      if ( v15 )
      {
LABEL_34:
        if ( v14 != -1 )
        {
          --*(_QWORD *)(a1 + 16);
          sub_14020CE90(v14, *(_QWORD *)(a1 + 8));
        }
        break;
      }
    }
    if ( !*(_BYTE *)(a1 + 50) )
    {
      if ( !v12 )
      {
        if ( v9 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      *v11++ = v14;
      --v12;
    }
  }
  if ( !i || !a2 && i != v10 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 50) && a2 )
    *v11 = 0;
  return 1;
}

