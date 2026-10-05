/* Address: 0x14025b100 | Name: strncat_s | Size: 237 bytes */
__int64 __fastcall strncat_s(_BYTE *a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rbx
  _BYTE *v6; // r11
  int *v7; // rax
  unsigned int v8; // ebx
  __int64 v10; // rdi
  __int64 v11; // r8
  char v12; // al
  char v13; // al

  v4 = 0;
  v5 = a2;
  v6 = a1;
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
    if ( a4 && !a3 )
    {
      *a1 = 0;
      goto LABEL_4;
    }
    v10 = a4;
    do
    {
      if ( !*a1 )
        break;
      ++a1;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
      *v6 = 0;
      goto LABEL_4;
    }
    if ( a4 == -1 )
    {
      v11 = a3 - a1;
      do
      {
        v12 = a1[v11];
        *a1++ = v12;
        if ( !v12 )
          break;
        --a2;
      }
      while ( a2 );
    }
    else
    {
      if ( a4 )
      {
        do
        {
          v13 = *a3++;
          *a1++ = v13;
          if ( !v13 )
            break;
          if ( !--a2 )
            break;
          --v10;
        }
        while ( v10 );
      }
      if ( !v10 )
        *a1 = 0;
    }
    if ( !a2 )
    {
      if ( a4 == -1 )
      {
        v6[v5 - 1] = 0;
        return 80;
      }
      *v6 = 0;
      v7 = errno();
      v8 = 34;
      goto LABEL_5;
    }
    return v4;
  }
  if ( a2 )
  {
LABEL_4:
    v7 = errno();
    v8 = 22;
LABEL_5:
    *v7 = v8;
    sub_14024CF6C();
    return v8;
  }
  return v4;
}

