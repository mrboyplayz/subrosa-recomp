/* Address: 0x140266f4c | Name: mbsrtowcs_s | Size: 209 bytes */
__int64 __fastcall mbsrtowcs_s(
        unsigned __int64 *a1,
        #49 *a2,
        const char **a3,
        #49 **a4,
        const char **N,
        struct #130 *State)
{
  const char **v9; // r8
  __int64 v10; // rax
  int *v12; // rax
  unsigned int v13; // ebx
  unsigned __int64 v14; // rax

  if ( a1 )
    *a1 = -1;
  if ( !a2 )
  {
    if ( !a3 )
      goto LABEL_5;
LABEL_15:
    v12 = errno();
    v13 = 22;
LABEL_16:
    *v12 = v13;
    sub_14024CF6C();
    return v13;
  }
  if ( !a3 )
    goto LABEL_15;
LABEL_5:
  if ( a2 )
    *(_WORD *)a2 = 0;
  if ( !a4 )
    goto LABEL_15;
  v9 = N;
  if ( N > a3 )
    v9 = a3;
  v10 = _mbsrtowcs_helper(a2, a4, v9, State);
  if ( v10 == -1 )
  {
    if ( a2 )
      *(_WORD *)a2 = 0;
    return (unsigned int)*errno();
  }
  v14 = v10 + 1;
  if ( a2 )
  {
    if ( v14 <= (unsigned __int64)a3 )
    {
      *((_WORD *)a2 + v14 - 1) = 0;
    }
    else
    {
      *(_WORD *)a2 = 0;
      if ( v14 < (unsigned __int64)a3 )
      {
        v12 = errno();
        v13 = 34;
        goto LABEL_16;
      }
    }
  }
  if ( a1 )
    *a1 = v14;
  return 0;
}

