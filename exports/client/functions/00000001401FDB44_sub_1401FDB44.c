/* Address: 0x1401fdb44 | Name: sub_1401FDB44 | Size: 91 bytes */
void *__fastcall sub_1401FDB44(_QWORD *a1, __int64 (__fastcall *a2)(_QWORD *))
{
  void *result; // rax
  unsigned __int64 v4; // rdi

  result = _guard_check_icall_fptr;
  if ( _guard_check_icall_fptr != (_UNKNOWN *)guard_check_icall_nop )
  {
    v4 = __readgsqword(0x30u);
    result = (void *)a2(a1);
    if ( (unsigned __int64)result < *(_QWORD *)(v4 + 16) || (unsigned __int64)result > *(_QWORD *)(v4 + 8) )
      __fastfail(0xDu);
    if ( !*a1 )
      __fastfail(0xDu);
  }
  return result;
}

