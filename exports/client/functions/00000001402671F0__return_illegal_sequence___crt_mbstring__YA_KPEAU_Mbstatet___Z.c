/* Address: 0x1402671f0 | Name: ?return_illegal_sequence@__crt_mbstring@@YA_KPEAU_Mbstatet@@@Z | Size: 28 bytes */
unsigned __int64 __fastcall __crt_mbstring::return_illegal_sequence(#115 *this, struct _Mbstatet *a2)
{
  *(_QWORD *)this = 0;
  *errno() = 42;
  return -1;
}

