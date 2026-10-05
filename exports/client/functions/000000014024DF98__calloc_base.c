/* Address: 0x14024df98 | Name: _calloc_base | Size: 117 bytes */
__int64 __fastcall calloc_base(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  if ( a1 && 0xFFFFFFFFFFFFFFE0uLL / a1 < a2 )
  {
LABEL_10:
    *errno() = 12;
    return 0;
  }
  else
  {
    v2 = a2 * a1;
    if ( !(a2 * a1) )
      v2 = 1;
    while ( 1 )
    {
      result = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))HeapAlloc)(
                 *(_QWORD *)&dword_140404A6C[19065847],
                 8,
                 v2);
      if ( result )
        break;
      if ( !(unsigned int)sub_14024A06C() || !(unsigned int)callnewh(v2) )
        goto LABEL_10;
    }
  }
  return result;
}

