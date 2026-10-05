/* Address: 0x14020dd7c | Name: sub_14020DD7C | Size: 279 bytes */
__int64 __fastcall sub_14020DD7C(
        int a1,
        _WORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int *v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  int v14; // ebp
  int v15; // ebp

  if ( !a5 )
  {
    v11 = errno();
LABEL_3:
    *v11 = 22;
    goto LABEL_4;
  }
  if ( !a4 )
  {
    if ( !a2 )
    {
      if ( !a3 )
        return 0;
      goto LABEL_13;
    }
LABEL_12:
    v14 = 1;
    if ( a3 )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( a2 )
    goto LABEL_12;
LABEL_13:
  v14 = 0;
LABEL_14:
  v11 = errno();
  if ( !v14 )
    goto LABEL_3;
  v15 = *v11;
  if ( a3 > a4 )
  {
    result = sub_14020E060(a1, (_DWORD)a2, (int)a4 + 1, a5, a6, a7);
    if ( (_DWORD)result != -2 )
      goto LABEL_17;
LABEL_22:
    if ( *errno() == 34 )
      *errno() = v15;
    return 0xFFFFFFFFLL;
  }
  result = sub_14020E060(a1, (_DWORD)a2, a3, a5, a6, a7);
  a2[a3 - 1] = 0;
  if ( (_DWORD)result == -2 )
  {
    if ( a4 != -1 )
      goto LABEL_18;
    goto LABEL_22;
  }
LABEL_17:
  if ( (int)result < 0 )
  {
LABEL_18:
    *a2 = 0;
    if ( (_DWORD)result != -2 )
      return 0xFFFFFFFFLL;
    *errno() = 34;
LABEL_4:
    sub_14024CF6C(v12);
    return 0xFFFFFFFFLL;
  }
  return result;
}

