/* Address: 0x140224e34 | Name: sub_140224E34 | Size: 308 bytes */
__int64 __fastcall sub_140224E34(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        struct __crt_locale_pointers *a6,
        __int64 a7)
{
  int *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // ebx
  int v15; // r14d
  int v16; // eax
  __int64 v17; // rcx

  if ( !a5 )
  {
    v11 = errno();
LABEL_3:
    *v11 = 22;
    sub_14024CF6C(v12);
    return (unsigned int)-1;
  }
  if ( a4 )
  {
    if ( !a2 )
      goto LABEL_12;
  }
  else if ( !a2 )
  {
    if ( !a3 )
      return 0;
    goto LABEL_12;
  }
  if ( a3 )
  {
    v14 = 1;
    goto LABEL_13;
  }
LABEL_12:
  v14 = 0;
LABEL_13:
  v11 = errno();
  if ( !v14 )
    goto LABEL_3;
  v15 = *v11;
  v13 = -1;
  if ( a3 > a4 )
  {
    v16 = sub_14020DE94(a1, a2, a4 + 1, a5, a6, a7);
    if ( v16 == -2 )
    {
      if ( *errno() == 34 )
        *errno() = v15;
      return (unsigned int)-1;
    }
    goto LABEL_22;
  }
  v16 = sub_14020DE94(a1, a2, a3, a5, a6, a7);
  a2[a3 - 1] = 0;
  if ( v16 != -2 )
  {
LABEL_22:
    if ( v16 >= 0 )
      return (unsigned int)v16;
    goto LABEL_23;
  }
  if ( a4 != -1 )
  {
LABEL_23:
    *a2 = 0;
    if ( v16 == -2 )
    {
      *errno() = 34;
      sub_14024CF6C(v17);
    }
    return v13;
  }
  if ( *errno() == 34 )
    *errno() = v15;
  return v13;
}

