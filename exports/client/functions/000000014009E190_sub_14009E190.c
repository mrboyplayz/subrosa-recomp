/* Address: 0x14009e190 | Name: sub_14009E190 | Size: 79 bytes */
__int64 __fastcall sub_14009E190(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)&dword_140404A6C[18215111];
  if ( !*(_QWORD *)&dword_140404A6C[18215111] )
    return 0;
  if ( *(_QWORD *)&dword_140404A6C[18215113] )
  {
    result = (*(__int64 (__fastcall **)(__int64))&dword_140404A6C[18215113])(a1);
    if ( result )
      return result;
    v2 = *(_QWORD *)&dword_140404A6C[18215111];
  }
  return ((__int64 (__fastcall *)(__int64, __int64))GetProcAddress)(v2, a1);
}

