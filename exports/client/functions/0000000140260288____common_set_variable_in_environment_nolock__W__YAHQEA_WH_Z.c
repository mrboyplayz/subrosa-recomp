/* Address: 0x140260288 | Name: ??$common_set_variable_in_environment_nolock@_W@@YAHQEA_WH@Z | Size: 802 bytes */
__int64 __fastcall common_set_variable_in_environment_nolock<wchar_t>(_WORD *Block, int a2)
{
  unsigned int v2; // esi
  void *v6; // rdi
  _WORD *v7; // rax
  _WORD *v8; // r13
  _QWORD *v9; // r14
  __int16 v10; // r12
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // r13
  _QWORD *v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  int v19; // ebp
  __int64 v20; // r14
  __int64 v21; // r14
  unsigned __int64 v22; // r14
  char *v23; // rax
  char *v24; // rbx
  unsigned __int64 v25; // rax

  v2 = 0;
  if ( !Block )
  {
    *errno() = 22;
    return -1;
  }
  v6 = Block;
  v7 = (_WORD *)MEMORY[0x14026CEFC](Block, 61);
  v8 = v7;
  if ( !v7 || v7 == Block )
  {
LABEL_51:
    v2 = -1;
    *errno() = 22;
    goto LABEL_52;
  }
  v9 = *(_QWORD **)&dword_140404A6C[19064863];
  v10 = v7[1];
  if ( *(_QWORD *)&dword_140404A6C[19064863] == *(_QWORD *)&dword_140404A6C[19064865] )
  {
    v9 = (_QWORD *)copy_environment<wchar_t>(*(_QWORD *)&dword_140404A6C[19064863]);
    *(_QWORD *)&dword_140404A6C[19064863] = v9;
  }
  if ( v9 )
    goto LABEL_20;
  if ( a2 && *(_QWORD *)&dword_140404A6C[19064861] )
  {
    if ( unknown_libname_765() )
    {
      v9 = *(_QWORD **)&dword_140404A6C[19064863];
      if ( *(_QWORD *)&dword_140404A6C[19064863] == *(_QWORD *)&dword_140404A6C[19064865] )
      {
        v9 = (_QWORD *)copy_environment<wchar_t>(*(_QWORD *)&dword_140404A6C[19064863]);
        *(_QWORD *)&dword_140404A6C[19064863] = v9;
      }
LABEL_19:
      if ( v9 )
        goto LABEL_20;
      goto LABEL_16;
    }
    goto LABEL_51;
  }
  if ( !v10 )
  {
LABEL_52:
    v11 = v2;
    goto LABEL_53;
  }
  if ( *(_QWORD *)&dword_140404A6C[19064861] )
    goto LABEL_18;
  *(_QWORD *)&dword_140404A6C[19064861] = calloc_base(1u, 8u);
  free_base(nullptr);
  if ( !*(_QWORD *)&dword_140404A6C[19064861] )
  {
LABEL_16:
    v11 = -1;
LABEL_53:
    v2 = v11;
LABEL_54:
    v19 = v2;
    goto LABEL_55;
  }
  v9 = *(_QWORD **)&dword_140404A6C[19064863];
  if ( !*(_QWORD *)&dword_140404A6C[19064863] )
  {
LABEL_18:
    *(_QWORD *)&dword_140404A6C[19064863] = calloc_base(1u, 8u);
    free_base(nullptr);
    v9 = *(_QWORD **)&dword_140404A6C[19064863];
    goto LABEL_19;
  }
LABEL_20:
  v12 = *v9;
  v13 = v8 - Block;
  v14 = v9;
  while ( v12 )
  {
    if ( !(unsigned int)wcsnicoll(Block, v12, v13) && (*(_WORD *)(*v14 + 2 * v13) == 61 || !*(_WORD *)(*v14 + 2 * v13)) )
    {
      v15 = v14 - v9;
      goto LABEL_28;
    }
    v12 = *++v14;
  }
  v15 = -(v14 - v9);
LABEL_28:
  if ( v15 >= 0 && *v9 )
  {
    free_base((void *)v9[v15]);
    if ( !v10 )
    {
      while ( v9[v15] )
      {
        v9[v15] = v9[v15 + 1];
        ++v15;
      }
      v16 = recalloc_base(v9, v15, 8);
      free_base(nullptr);
      if ( v16 )
        *(_QWORD *)&dword_140404A6C[19064863] = v16;
      goto LABEL_43;
    }
    v9[v15] = Block;
LABEL_42:
    v6 = nullptr;
LABEL_43:
    if ( a2 )
    {
      v21 = -1;
      do
        ++v21;
      while ( Block[v21] );
      v22 = v21 + 2;
      v23 = (char *)calloc_base(v22, 2u);
      v24 = v23;
      if ( v23 )
      {
        if ( (unsigned int)sub_140259444(v23, v22, (__int64)Block) )
        {
          sub_14024CFBC();
          JUMPOUT(0x1402605A9LL);
        }
        v25 = (unsigned __int64)&v24[2 * v13 + 2];
        *(_WORD *)(v25 - 2) = 0;
        if ( !(unsigned int)((__int64 (__fastcall *)(char *, unsigned __int64))SetEnvironmentVariableW)(
                              v24,
                              v25 & -(__int64)(v10 != 0)) )
        {
          v2 = -1;
          *errno() = 42;
        }
      }
      free_base(v24);
    }
    goto LABEL_56;
  }
  if ( !v10 )
    goto LABEL_54;
  v17 = -v15;
  v18 = v17 + 2;
  if ( v17 + 2 >= v17 && v18 < 0x1FFFFFFFFFFFFFFFLL )
  {
    v20 = recalloc_base(v9, v18, 8);
    free_base(nullptr);
    if ( v20 )
    {
      *(_QWORD *)(v20 + 8 * v17) = Block;
      *(_QWORD *)(v20 + 8 * v17 + 8) = 0;
      *(_QWORD *)&dword_140404A6C[19064863] = v20;
      goto LABEL_42;
    }
  }
  v19 = -1;
LABEL_55:
  v2 = v19;
LABEL_56:
  free_base(v6);
  return v2;
}

