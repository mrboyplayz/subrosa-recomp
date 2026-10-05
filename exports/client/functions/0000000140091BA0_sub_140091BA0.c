/* Address: 0x140091ba0 | Name: sub_140091BA0 | Size: 589 bytes */
__int64 sub_140091BA0()
{
  __int64 v0; // rax
  int v1; // edi
  __int64 v2; // rsi
  char *v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  _BYTE *v14; // rcx
  int v15; // eax
  int v16; // esi
  const char **v17; // r14
  int v18; // esi
  __int64 v19; // rdi

  if ( (int)dword_140404A6C[18215115] < 3 )
  {
    v0 = qword_140302FA8(7939);
    v1 = dword_140404A6C[18215119];
    v2 = v0;
    v3 = *(char **)&dword_140404A6C[18215121];
    *(_QWORD *)&dword_140404A6C[18215117] = v0;
    goto LABEL_16;
  }
  dword_140404A6C[18215119] = 0;
  qword_140302FA0(33309, &dword_140404A6C[18215119]);
  v1 = dword_140404A6C[18215119];
  if ( (int)dword_140404A6C[18215119] <= 0 )
  {
    v3 = *(char **)&dword_140404A6C[18215121];
  }
  else
  {
    v4 = j__realloc_base(*(_QWORD *)&dword_140404A6C[18215121], 8LL * (int)dword_140404A6C[18215119]);
    v3 = (char *)v4;
    if ( !v4 )
      return 0;
    v1 = dword_140404A6C[18215119];
    *(_QWORD *)&dword_140404A6C[18215121] = v4;
  }
  if ( !v3 )
    return 0;
  v6 = 0;
  if ( v1 )
  {
    do
    {
      v7 = unk_1404046B0(7939, (unsigned int)v6);
      v8 = v7;
      v9 = -1;
      while ( *(_BYTE *)(v7 + v9++ + 1) != 0 )
        ;
      v11 = j__malloc_base(v9 + 1);
      v12 = v11;
      if ( v11 )
        MEMORY[0x1401FC920](v11, v8);
      v3 = *(char **)&dword_140404A6C[18215121];
      *(_QWORD *)(*(_QWORD *)&dword_140404A6C[18215121] + 8 * v6) = v12;
      v6 = (unsigned int)(v6 + 1);
      v1 = dword_140404A6C[18215119];
    }
    while ( (unsigned int)v6 < dword_140404A6C[18215119] );
  }
  v2 = *(_QWORD *)&dword_140404A6C[18215117];
LABEL_16:
  if ( (int)dword_140404A6C[18215115] < 3 )
  {
    if ( v2 )
    {
      v13 = sub_1401FC614(v2, "GL_ARB_clip_control");
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = (_BYTE *)(v13 + 19);
          if ( (v13 == v2 || *(_BYTE *)(v13 - 1) == 32) && (*v14 & 0xDF) == 0 )
            break;
          v2 = v13 + 19;
          v13 = sub_1401FC614(v14, "GL_ARB_clip_control");
          if ( !v13 )
            goto LABEL_23;
        }
        v1 = dword_140404A6C[18215119];
        v15 = 1;
        v3 = *(char **)&dword_140404A6C[18215121];
      }
      else
      {
LABEL_23:
        v1 = dword_140404A6C[18215119];
        v15 = 0;
        v3 = *(char **)&dword_140404A6C[18215121];
      }
    }
    else
    {
      v15 = 0;
    }
LABEL_34:
    unk_14040488C = v15;
    if ( v3 )
    {
      v18 = 0;
      if ( v1 > 0 )
      {
        v19 = 0;
        do
        {
          free(*(void **)&v3[v19]);
          v3 = *(char **)&dword_140404A6C[18215121];
          v19 += 8;
          ++v18;
        }
        while ( v18 < (int)dword_140404A6C[18215119] );
      }
      free(v3);
      *(_QWORD *)&dword_140404A6C[18215121] = 0;
    }
    return 1;
  }
  if ( v3 )
  {
    v16 = 0;
    if ( v1 <= 0 )
    {
LABEL_33:
      v15 = 0;
    }
    else
    {
      v17 = (const char **)v3;
      while ( !*v17 || strcmp(*v17, "GL_ARB_clip_control") )
      {
        ++v16;
        ++v17;
        if ( v16 >= v1 )
          goto LABEL_33;
      }
      v15 = 1;
    }
    goto LABEL_34;
  }
  unk_14040488C = 0;
  return 1;
}

