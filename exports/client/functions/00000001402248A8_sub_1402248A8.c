/* Address: 0x1402248a8 | Name: sub_1402248A8 | Size: 245 bytes */
int *__fastcall sub_1402248A8(int **a1, char *a2, int a3, _DWORD *a4, int **a5)
{
  int *result; // rax
  __int64 v7; // rbp
  int *v10; // rbx
  int v11; // r12d
  char *v12; // rbp
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (int *)&retaddr;
  v7 = a3;
  v10 = *a5;
  if ( !*a5 )
  {
    result = errno();
    v10 = result;
    *a5 = result;
  }
  v11 = *v10;
  *v10 = 0;
  v12 = &a2[v7];
  while ( a2 != v12 )
  {
    if ( ((*a1)[5] & 0x1000) != 0 )
    {
      result = *a1;
      if ( !*((_QWORD *)*a1 + 1) )
        goto LABEL_13;
    }
    result = (int *)unknown_libname_207((unsigned int)*a2, *a1);
    if ( (_DWORD)result != -1 )
      goto LABEL_13;
    result = *a5;
    if ( !*a5 )
    {
      result = errno();
      *a5 = result;
    }
    if ( *result != 42 )
    {
      *a4 = -1;
      break;
    }
    if ( (((*a1)[5] & 0x1000) == 0 || (result = *a1, *((_QWORD *)*a1 + 1)))
      && (result = (int *)unknown_libname_207(63, *a1), (_DWORD)result == -1) )
    {
      *a4 = -1;
    }
    else
    {
LABEL_13:
      ++*a4;
    }
    ++a2;
  }
  if ( !*v10 )
  {
    if ( v11 )
      *v10 = v11;
  }
  return result;
}

