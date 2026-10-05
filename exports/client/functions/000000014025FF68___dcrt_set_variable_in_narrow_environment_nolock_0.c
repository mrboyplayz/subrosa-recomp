/* Address: 0x14025ff68 | Name: __dcrt_set_variable_in_narrow_environment_nolock_0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall _dcrt_set_variable_in_narrow_environment_nolock_0(_BYTE *Block, int a2)
{
  unsigned int v2; // esi
  _BYTE *v6; // rdi
  _BYTE *v7; // rax
  _BYTE *v8; // r13
  _QWORD *v9; // r14
  char v10; // bp
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // r12
  _QWORD *v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  int v19; // ebp
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // rax
  _BYTE *v23; // rbx
  __int64 v24; // rcx

  v2 = 0;
  if ( !Block )
  {
    *errno() = 22;
    return -1;
  }
  v6 = Block;
  v7 = (_BYTE *)MEMORY[0x14026CE7C](Block, 61);
  v8 = v7;
  if ( !v7 || v7 == Block )
  {
LABEL_51:
    v2 = -1;
    *errno() = 22;
    goto LABEL_52;
  }
  v9 = *(_QWORD **)&dword_140404A6C[19064861];
  v10 = v7[1];
  if ( *(_QWORD *)&dword_140404A6C[19064861] == *(_QWORD *)&dword_140404A6C[19064867] )
  {
    v9 = (_QWORD *)copy_environment<char>(*(__int64 **)&dword_140404A6C[19064861]);
    *(_QWORD *)&dword_140404A6C[19064861] = v9;
  }
  if ( v9 )
    goto LABEL_20;
  if ( a2 && *(_QWORD *)&dword_140404A6C[19064863] )
  {
    if ( unknown_libname_764() )
    {
      v9 = *(_QWORD **)&dword_140404A6C[19064861];
      if ( *(_QWORD *)&dword_140404A6C[19064861] == *(_QWORD *)&dword_140404A6C[19064867] )
      {
        v9 = (_QWORD *)copy_environment<char>(*(__int64 **)&dword_140404A6C[19064861]);
        *(_QWORD *)&dword_140404A6C[19064861] = v9;
      }
      goto LABEL_19;
    }
    goto LABEL_51;
  }
  if ( !v10 )
  {
LABEL_52:
    v11 = v2;
    goto LABEL_53;
  }
  *(_QWORD *)&dword_140404A6C[19064861] = calloc_base(1, 8);
  free_base(nullptr);
  v9 = *(_QWORD **)&dword_140404A6C[19064861];
  if ( !*(_QWORD *)&dword_140404A6C[19064861] )
    goto LABEL_15;
  if ( *(_QWORD *)&dword_140404A6C[19064863] )
    goto LABEL_19;
  *(_QWORD *)&dword_140404A6C[19064863] = calloc_base(1, 8);
  free_base(nullptr);
  if ( !*(_QWORD *)&dword_140404A6C[19064863] )
  {
LABEL_15:
    v11 = -1;
LABEL_53:
    v2 = v11;
LABEL_54:
    v19 = v2;
    goto LABEL_55;
  }
  v9 = *(_QWORD **)&dword_140404A6C[19064861];
LABEL_19:
  if ( !v9 )
    goto LABEL_15;
LABEL_20:
  v12 = *v9;
  v13 = v8 - Block;
  v14 = v9;
  while ( v12 )
  {
    if ( !(unsigned int)strnicoll(Block, v12, v8 - Block) && (*(_BYTE *)(v13 + *v14) == 61 || !*(_BYTE *)(v13 + *v14)) )
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
        *(_QWORD *)&dword_140404A6C[19064861] = v16;
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
      v22 = calloc_base(v21 + 2, 1);
      v23 = (_BYTE *)v22;
      if ( v22 )
      {
        if ( (unsigned int)strcpy_s(v22, v21 + 2, Block) )
        {
          sub_14024CFBC();
          __debugbreak();
        }
        v24 = (__int64)&v8[v23 - Block + 1];
        *(_BYTE *)(v24 - 1) = 0;
        if ( !(unsigned int)_acrt_SetEnvironmentVariableA(v23, (_BYTE *)(v24 & -(__int64)(v10 != 0))) )
        {
          v2 = -1;
          *errno() = 42;
        }
      }
      free_base(v23);
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
      *(_QWORD *)&dword_140404A6C[19064861] = v20;
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

