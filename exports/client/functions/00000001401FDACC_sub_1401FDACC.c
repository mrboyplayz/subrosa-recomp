/* Address: 0x1401fdacc | Name: sub_1401FDACC | Size: 55 bytes */
__int64 (__fastcall *__fastcall MEMORY[0x1401FDACC](__int64 a1))()
{
  __int64 (__fastcall *result)(); // rax
  unsigned __int64 v2; // rcx

  result = _guard_check_icall_fptr[0];
  if ( (void (*)())_guard_check_icall_fptr[0] != guard_check_icall_nop )
  {
    result = (__int64 (__fastcall *)())__readgsqword(0x30u);
    v2 = *(_QWORD *)(a1 + 152);
    if ( v2 < *((_QWORD *)result + 2) || v2 > *((_QWORD *)result + 1) )
      __fastfail(0xDu);
  }
  return result;
}

