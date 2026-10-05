/* Address: 0x140245b44 | Name: sub_140245B44 | Size: 418 bytes */
__int64 __fastcall sub_140245B44(__int16 *a1, __int16 **a2, __int16 *a3, _QWORD *a4, _QWORD *a5)
{
  bool v6; // r9
  __int16 v7; // ax
  bool v8; // di
  __int64 result; // rax
  int v10; // r11d
  unsigned int v11; // eax
  __int16 v12; // ax

  *a5 = 0;
  *a4 = 1;
  if ( a2 )
    *a2++ = a3;
  v6 = 0;
  do
  {
    if ( *a1 == 34 )
    {
      v7 = 34;
      v6 = !v6;
      ++a1;
    }
    else
    {
      ++*a5;
      if ( a3 )
        *a3++ = *a1;
      v7 = *a1++;
      if ( !v7 )
      {
        --a1;
        goto LABEL_15;
      }
    }
  }
  while ( v6 || v7 != 32 && v7 != 9 );
  if ( a3 )
    *(a3 - 1) = 0;
LABEL_15:
  v8 = 0;
  while ( 1 )
  {
    result = (unsigned __int16)*a1;
    if ( !(_WORD)result )
      break;
    while ( (_WORD)result == 32 || (_WORD)result == 9 )
      result = (unsigned __int16)*++a1;
    if ( !(_WORD)result )
      break;
    if ( a2 )
      *a2++ = a3;
    ++*a4;
    while ( 1 )
    {
      v10 = 1;
      v11 = 0;
      while ( *a1 == 92 )
      {
        ++a1;
        ++v11;
      }
      if ( *a1 == 34 )
      {
        if ( (v11 & 1) == 0 )
        {
          if ( v8 && a1[1] == 34 )
          {
            ++a1;
          }
          else
          {
            v10 = 0;
            v8 = !v8;
          }
        }
        v11 >>= 1;
      }
      while ( v11 )
      {
        --v11;
        if ( a3 )
          *a3++ = 92;
        ++*a5;
      }
      v12 = *a1;
      if ( !*a1 || !v8 && (v12 == 32 || v12 == 9) )
        break;
      if ( v10 )
      {
        if ( a3 )
          *a3++ = v12;
        ++*a5;
      }
      ++a1;
    }
    if ( a3 )
      *a3++ = 0;
    ++*a5;
  }
  if ( a2 )
    *a2 = nullptr;
  ++*a4;
  return result;
}

