/* Address: 0x14022d954 | Name: sub_14022D954 | Size: 466 bytes */
char __fastcall sub_14022D954(__int64 a1, int a2)
{
  _WORD *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 i; // r14
  int v13; // r9d
  bool v14; // zf
  __int16 v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  _WORD *v17; // [rsp+88h] [rbp+20h] BYREF

  v4 = nullptr;
  if ( *(_BYTE *)(a1 + 50) )
    goto LABEL_7;
  *(_QWORD *)(a1 + 120) += 8LL;
  v5 = *(_QWORD *)(a1 + 120);
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
      *v4 = 0;
    }
LABEL_13:
    *errno() = 12;
    return 0;
  }
  v10 = *(_QWORD *)(a1 + 56);
  v11 = v9;
  v17 = v4;
  v16 = v9;
  if ( a2 && v9 != -1 )
  {
    v11 = v9 - 1;
    v16 = v9 - 1;
  }
  for ( i = 0; !v10 || i != v10; ++i )
  {
    v13 = getc_nolock(*(FILE **)(a1 + 8));
    if ( v13 == -1 )
      goto LABEL_35;
    ++*(_QWORD *)(a1 + 16);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (unsigned int)(v13 - 9) <= 4 )
          goto LABEL_35;
        v14 = v13 == 32;
      }
      else
      {
        if ( a2 != 8 )
          goto LABEL_35;
        v14 = ((unsigned __int8)(1 << (v13 & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)v13 >> 3) + a1 + 76)) == 0;
      }
      if ( v14 )
      {
LABEL_35:
        if ( v13 != -1 )
        {
          --*(_QWORD *)(a1 + 16);
          sub_14020CE90(v13, *(_QWORD *)(a1 + 8));
        }
        break;
      }
    }
    if ( !*(_BYTE *)(a1 + 50) )
    {
      if ( !v11 )
      {
        if ( v9 == -1 )
          goto LABEL_13;
        goto LABEL_12;
      }
      LOBYTE(v15) = v13;
      if ( !(unsigned __int8)__crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>>::write_character(
                               a1,
                               (_DWORD)v4,
                               v9,
                               (unsigned int)&v17,
                               (__int64)&v16,
                               v15) )
        break;
      v11 = v16;
    }
  }
  if ( !i || !a2 && i != v10 && (*(_BYTE *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 50) && a2 )
    *v17 = 0;
  return 1;
}

