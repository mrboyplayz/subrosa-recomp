/* Address: 0x14025896c | Name: strncpy_s | Size: 211 bytes */
__int64 __fastcall strncpy_s(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  int *v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // rbx
  _BYTE *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdi
  char v13; // al
  char v14; // al

  v4 = 0;
  if ( a4 )
  {
    if ( !a1 )
      goto LABEL_4;
    goto LABEL_8;
  }
  if ( a1 )
  {
LABEL_8:
    if ( !a2 )
      goto LABEL_4;
    if ( !a4 )
    {
      *a1 = 0;
      return v4;
    }
    if ( !a3 )
    {
      *a1 = 0;
      goto LABEL_4;
    }
    v9 = a3 - (_QWORD)a1;
    v10 = a1;
    v11 = a2;
    v12 = a4;
    if ( a4 == -1 )
    {
      do
      {
        v13 = v10[v9];
        *v10++ = v13;
        if ( !v13 )
          break;
        --v11;
      }
      while ( v11 );
    }
    else
    {
      do
      {
        v14 = v10[v9];
        *v10++ = v14;
        if ( !v14 )
          break;
        if ( !--v11 )
          break;
        --v12;
      }
      while ( v12 );
      if ( !v12 )
        *v10 = 0;
    }
    if ( !v11 )
    {
      if ( a4 == -1 )
      {
        a1[a2 - 1] = 0;
        return 80;
      }
      *a1 = 0;
      v6 = errno();
      v7 = 34;
      goto LABEL_5;
    }
    return v4;
  }
  if ( a2 )
  {
LABEL_4:
    v6 = errno();
    v7 = 22;
LABEL_5:
    *v6 = v7;
    sub_14024CF6C();
    return v7;
  }
  return v4;
}

