/* Address: 0x14009e070 | Name: sub_14009E070 | Size: 284 bytes */
__int64 sub_14009E070()
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi

  if ( (int)dword_140404A6C[18215115] < 3 )
  {
    *(_QWORD *)&dword_140404A6C[18215117] = qword_140302FA8(7939);
    return 1;
  }
  v1 = 0;
  dword_140404A6C[18215119] = 0;
  qword_140302FA0(33309, &dword_140404A6C[18215119]);
  v2 = dword_140404A6C[18215119];
  v3 = *(_QWORD *)&dword_140404A6C[18215121];
  if ( (int)dword_140404A6C[18215119] > 0 )
  {
    v4 = j__realloc_base(*(_QWORD *)&dword_140404A6C[18215121], 8LL * (int)dword_140404A6C[18215119]);
    v3 = v4;
    if ( !v4 )
      return 0;
    *(_QWORD *)&dword_140404A6C[18215121] = v4;
    v2 = dword_140404A6C[18215119];
  }
  if ( !v3 )
    return 0;
  if ( v2 )
  {
    do
    {
      v5 = unk_1404046B0(7939, (unsigned int)v1);
      v6 = v5;
      v7 = -1;
      while ( *(_BYTE *)(v5 + v7++ + 1) != 0 )
        ;
      v9 = j__malloc_base(v7 + 1);
      v10 = v9;
      if ( v9 )
        MEMORY[0x1401FC920](v9, v6);
      *(_QWORD *)(*(_QWORD *)&dword_140404A6C[18215121] + 8 * v1) = v10;
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < dword_140404A6C[18215119] );
  }
  return 1;
}

