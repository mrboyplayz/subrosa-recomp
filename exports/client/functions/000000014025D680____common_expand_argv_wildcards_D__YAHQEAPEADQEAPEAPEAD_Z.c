/* Address: 0x14025d680 | Name: ??$common_expand_argv_wildcards@D@@YAHQEAPEADQEAPEAPEAD@Z | Size: 521 bytes */
__int64 __fastcall common_expand_argv_wildcards<char>(const char **a1, __int64 *a2)
{
  __int64 v2; // rdi
  unsigned __int8 **v3; // rbx
  const char *v5; // rax
  char *v6; // rax
  unsigned __int8 *v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // esi
  __int64 *v10; // r12
  __int64 *v11; // r15
  unsigned __int64 v12; // r9
  _QWORD *v13; // rdx
  __int64 v14; // r8
  signed __int64 v15; // r14
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  _BYTE *v20; // rdx
  __int64 *v21; // r14
  _BYTE *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r13
  __int64 v25; // r13
  _BYTE *v26; // rax
  void **v27; // r14
  unsigned __int64 v28; // rbx
  _BYTE *v29; // [rsp+38h] [rbp-28h]
  void *Block[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]
  unsigned __int64 Control; // [rsp+B0h] [rbp+50h] BYREF
  _BYTE *i; // [rsp+B8h] [rbp+58h]

  v2 = 0;
  v3 = (unsigned __int8 **)a1;
  if ( a2 )
  {
    *a2 = 0;
    v5 = *a1;
    *(_OWORD *)Block = 0;
    v31 = 0;
    while ( v5 )
    {
      strcpy((char *)&Control, "*?");
      v6 = strpbrk(v5, (const char *)&Control);
      v7 = *v3;
      if ( v6 )
        v8 = sub_14025DF6C(v7);
      else
        v8 = sub_14025DC58(v7, 0, 0, Block);
      v9 = v8;
      if ( v8 )
      {
        v10 = (__int64 *)Block[1];
        v11 = (__int64 *)Block[0];
        goto LABEL_26;
      }
      v5 = (const char *)*++v3;
    }
    v11 = (__int64 *)Block[0];
    v12 = 0;
    v10 = (__int64 *)Block[1];
    v13 = Block[0];
    Control = 0;
    v14 = 0;
    v15 = (((char *)Block[1] - (char *)Block[0]) >> 3) + 1;
    v16 = (unsigned __int64)((char *)Block[1] - (char *)Block[0] + 7) >> 3;
    if ( Block[0] > Block[1] )
      v16 = 0;
    v9 = -1;
    if ( v16 )
    {
      do
      {
        v17 = -1;
        do
          ++v17;
        while ( *(_BYTE *)(*v13 + v17) );
        ++v13;
        v12 += v17 + 1;
        ++v14;
      }
      while ( v14 != v16 );
      Control = v12;
    }
    v18 = sub_140245E48((((char *)Block[1] - (char *)Block[0]) >> 3) + 1, v12, 1u);
    v19 = v18;
    if ( v18 )
    {
      v20 = (_BYTE *)(v18 + 8 * v15);
      v21 = v11;
      v29 = v20;
      v22 = v20;
      for ( i = v20; v21 != v10; i = v22 )
      {
        v23 = *v21;
        v24 = -1;
        do
          ++v24;
        while ( *(_BYTE *)(v23 + v24) );
        v25 = v24 + 1;
        if ( (unsigned int)strncpy_s(v22, Control + v20 - v22, v23, v25) )
        {
          sub_14024CFBC();
          JUMPOUT(0x14025D888LL);
        }
        v26 = i;
        v20 = v29;
        *(__int64 *)((char *)v21 + v19 - (_QWORD)v11) = (__int64)i;
        v22 = &v26[v25];
        ++v21;
      }
      v9 = 0;
      *a2 = v19;
    }
    free_base(nullptr);
LABEL_26:
    v27 = (void **)v11;
    v28 = (unsigned __int64)((char *)v10 - (char *)v11 + 7) >> 3;
    if ( v11 > v10 )
      v28 = 0;
    if ( v28 )
    {
      do
      {
        free_base(*v27);
        ++v2;
        ++v27;
      }
      while ( v2 != v28 );
    }
    free_base(v11);
    return v9;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return 22;
  }
}

