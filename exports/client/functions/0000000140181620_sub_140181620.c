/* Address: 0x140181620 | Name: sub_140181620 | Size: 175 bytes */
_QWORD *__fastcall sub_140181620(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  unsigned int v5; // ebx

  result = *(_QWORD **)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = *result;
    return result;
  }
  v5 = *(_DWORD *)(a1 + 16);
  if ( v5 )
    goto LABEL_10;
  if ( a2 >= 0x20 )
  {
    v5 = 100;
    if ( a2 < 0x80 )
      v5 = 800;
  }
  else
  {
    v5 = 2000;
  }
  result = (_QWORD *)j__malloc_base(a2 * v5 + 8);
  if ( result )
  {
    *result = *(_QWORD *)a1;
    *(_QWORD *)a1 = result;
LABEL_10:
    *(_DWORD *)(a1 + 16) = v5 - 1;
    return (_QWORD *)(a2 * (int)(v5 - 1) + *(_QWORD *)a1 + 8LL);
  }
  return result;
}

