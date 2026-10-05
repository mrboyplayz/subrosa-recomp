/* Address: 0x140245980 | Name: sub_140245980 | Size: 451 bytes */
char __fastcall sub_140245980(char *a1, _QWORD *a2, _BYTE *a3, _QWORD *a4, _QWORD *a5)
{
  _BYTE *v6; // rbx
  _QWORD *v7; // r14
  bool v9; // bp
  unsigned int v10; // esi
  bool v11; // si
  char result; // al
  int v13; // edx
  unsigned int v14; // eax
  char v15; // al

  v6 = a3;
  v7 = a2;
  *a5 = 0;
  *a4 = 1;
  if ( a2 )
  {
    *a2 = a3;
    v7 = a2 + 1;
  }
  v9 = 0;
  do
  {
    if ( *a1 == 34 )
    {
      LOBYTE(v10) = 34;
      v9 = !v9;
      ++a1;
    }
    else
    {
      ++*a5;
      if ( v6 )
        *v6++ = *a1;
      v10 = *a1++;
      if ( ismbblead(v10) )
      {
        ++*a5;
        if ( v6 )
          *v6++ = *a1;
        ++a1;
      }
      if ( !(_BYTE)v10 )
      {
        --a1;
        goto LABEL_19;
      }
    }
  }
  while ( v9 || (_BYTE)v10 != 32 && (_BYTE)v10 != 9 );
  if ( v6 )
    *(v6 - 1) = 0;
LABEL_19:
  v11 = 0;
  while ( 1 )
  {
    result = *a1;
    if ( !*a1 )
      break;
    while ( result == 32 || result == 9 )
      result = *++a1;
    if ( !result )
      break;
    if ( v7 )
      *v7++ = v6;
    ++*a4;
    while ( 1 )
    {
      v13 = 1;
      v14 = 0;
      while ( *a1 == 92 )
      {
        ++a1;
        ++v14;
      }
      if ( *a1 == 34 )
      {
        if ( (v14 & 1) == 0 )
        {
          if ( v11 && a1[1] == 34 )
          {
            ++a1;
          }
          else
          {
            v13 = 0;
            v11 = !v11;
          }
        }
        v14 >>= 1;
      }
      while ( v14 )
      {
        --v14;
        if ( v6 )
          *v6++ = 92;
        ++*a5;
      }
      v15 = *a1;
      if ( !*a1 || !v11 && (v15 == 32 || v15 == 9) )
        break;
      if ( v13 )
      {
        if ( v6 )
        {
          *v6++ = v15;
          v15 = *a1;
        }
        if ( ismbblead(v15) )
        {
          ++*a5;
          ++a1;
          if ( v6 )
            *v6++ = *a1;
        }
        ++*a5;
      }
      ++a1;
    }
    if ( v6 )
      *v6++ = 0;
    ++*a5;
  }
  if ( v7 )
    *v7 = 0;
  ++*a4;
  return result;
}

