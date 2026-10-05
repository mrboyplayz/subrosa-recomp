/* Address: 0x1402249a0 | Name: sub_1402249A0 | Size: 259 bytes */
int *__fastcall sub_1402249A0(int **a1, unsigned __int16 *a2, int a3, _DWORD *a4, int **a5)
{
  int *result; // rax
  __int64 v7; // r12
  int *v10; // rbx
  int v11; // ebp
  unsigned __int16 *v12; // r12
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
    result = (int *)sub_140256B38(*a2, *a1);
    if ( (_WORD)result != 0xFFFF )
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
      && (result = (int *)sub_140256B38(63, *a1), (_WORD)result == 0xFFFF) )
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

