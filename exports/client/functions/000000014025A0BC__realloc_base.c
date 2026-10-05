/* Address: 0x14025a0bc | Name: _realloc_base | Size: 122 bytes */
__int64 __fastcall realloc_base(void *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  if ( !a1 )
    return malloc_base(a2);
  if ( !a2 )
  {
    free_base(a1);
    return 0;
  }
  if ( a2 > 0xFFFFFFFFFFFFFFE0uLL )
  {
LABEL_6:
    *errno() = 12;
    return 0;
  }
  while ( 1 )
  {
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, unsigned __int64))HeapReAlloc)(
               *(_QWORD *)&dword_140404A6C[19065847],
               0,
               a1,
               a2);
    if ( result )
      return result;
    if ( !(unsigned int)sub_14024A06C() || !(unsigned int)callnewh(a2) )
      goto LABEL_6;
  }
}

