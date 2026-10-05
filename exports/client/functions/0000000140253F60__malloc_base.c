/* Address: 0x140253f60 | Name: _malloc_base | Size: 94 bytes */
__int64 __fastcall malloc_base(unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = a1;
  if ( a1 > 0xFFFFFFFFFFFFFFE0uLL )
  {
LABEL_9:
    *errno() = 12;
    return 0;
  }
  else
  {
    if ( !a1 )
      v1 = 1;
    while ( 1 )
    {
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))HeapAlloc)(
                 *(_QWORD *)&dword_140404A6C[19065847],
                 0,
                 v1);
      if ( result )
        break;
      if ( !(unsigned int)sub_14024A06C() || !(unsigned int)callnewh(v1) )
        goto LABEL_9;
    }
  }
  return result;
}

