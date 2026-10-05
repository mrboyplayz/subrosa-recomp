/* Address: 0x14025ad34 | Name: sub_14025AD34 | Size: 246 bytes */
__int64 __fastcall sub_14025AD34(_WORD *a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 v4; // r11
  _WORD *v5; // r10
  int *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  signed __int64 v10; // r8
  __int16 v11; // ax
  __int16 v12; // ax

  v4 = a2;
  v5 = a1;
  if ( a4 )
  {
    if ( !a1 )
    {
LABEL_10:
      v7 = errno();
      v8 = 22;
LABEL_11:
      *v7 = v8;
      sub_14024CF6C();
      return v8;
    }
  }
  else if ( !a1 )
  {
    if ( !a2 )
      return 0;
    goto LABEL_10;
  }
  if ( !a2 )
    goto LABEL_10;
  if ( a4 && !a3 )
  {
    *a1 = 0;
    goto LABEL_10;
  }
  v9 = a4;
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
    *v5 = 0;
    goto LABEL_10;
  }
  if ( a4 == -1 )
  {
    v10 = a3 - (char *)a1;
    do
    {
      v11 = *(_WORD *)((char *)a1 + v10);
      *a1++ = v11;
      if ( !v11 )
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
        v12 = *(_WORD *)a3;
        a3 += 2;
        *a1++ = v12;
        if ( !v12 )
          break;
        if ( !--a2 )
          break;
        --v9;
      }
      while ( v9 );
    }
    if ( !v9 )
      *a1 = 0;
  }
  if ( a2 )
    return 0;
  if ( a4 != -1 )
  {
    *v5 = 0;
    v7 = errno();
    v8 = 34;
    goto LABEL_11;
  }
  v5[v4 - 1] = 0;
  return 80;
}

