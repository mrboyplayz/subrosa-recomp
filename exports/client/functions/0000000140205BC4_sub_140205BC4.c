/* Address: 0x140205bc4 | Name: sub_140205BC4 | Size: 40 bytes */
__int64 __fastcall sub_140205BC4(#84 *this)
{
  __int64 (__fastcall ****v1)(_QWORD); // rcx
  __int64 result; // rax
  __int64 (__fastcall ***v3)(_QWORD); // rcx

  v1 = *((__int64 (__fastcall *****)(_QWORD))this + 1);
  result = 0;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return (**v3)(v3);
  }
  return result;
}

