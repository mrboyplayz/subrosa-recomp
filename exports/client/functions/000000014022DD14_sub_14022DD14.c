/* Address: 0x14022dd14 | Name: sub_14022DD14 | Size: 450 bytes */
char __fastcall sub_14022DD14(__int64 a1, int a2)
{
  unsigned __int16 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int16 *v11; // rax
  __int64 v12; // r12
  __int64 i; // r14
  unsigned __int16 v14; // ax
  __int64 v15; // r8
  unsigned __int16 v16; // bp
  bool v17; // zf
  __int64 v18; // rdx
  unsigned __int16 *v19; // [rsp+60h] [rbp+8h]
  __int64 v20; // [rsp+78h] [rbp+20h]

  v4 = nullptr;
  if ( *(_BYTE *)(a1 + 52) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 96) += 8LL;
  v5 = *(_QWORD *)(a1 + 96);
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
    *(_QWORD *)(a1 + 96) = v8;
    v9 = *(unsigned int *)(v8 - 8);
  }
  if ( !v9 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      if ( (unsigned __int16)j__fgetwc_nolock(*(_QWORD *)(a1 + 8)) != 0xFFFF )
        ++*(_QWORD *)(a1 + 16);
      *v4 = 0;
    }
LABEL_13:
    *errno() = 12;
    return 0;
  }
  v10 = *(_QWORD *)(a1 + 56);
  v11 = v4;
  v20 = v10;
  v12 = v9;
  v19 = v4;
  if ( a2 && v9 != -1 )
    v12 = v9 - 1;
  for ( i = 0; !v10 || i != v10; ++i )
  {
    v14 = j__fgetwc_nolock(*(_QWORD *)(a1 + 8));
    v16 = v14;
    if ( v14 == 0xFFFF )
      goto LABEL_35;
    ++*(_QWORD *)(a1 + 16);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned __int16)(v14 - 9) <= 4u )
          goto LABEL_35;
        v17 = v14 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_35;
        v17 = (unsigned __int8)sub_140236014(a1 + 80, v14) == 0;
      }
      if ( v17 )
      {
LABEL_35:
        if ( v16 != 0xFFFF )
        {
          v18 = *(_QWORD *)(a1 + 8);
          --*(_QWORD *)(a1 + 16);
          ungetwc_nolock(v16, v18, v15);
        }
        v10 = v20;
        v11 = v19;
        break;
      }
    }
    if ( *(_BYTE *)(a1 + 52) )
    {
      v11 = v19;
    }
    else
    {
      if ( !v12 )
      {
        if ( v9 != -1 )
          *v4 = 0;
        goto LABEL_13;
      }
      *v19 = v16;
      v11 = ++v19;
      --v12;
    }
    v10 = v20;
  }
  if ( !i || !a2 && i != v10 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 52) && a2 )
    *v11 = 0;
  return 1;
}

