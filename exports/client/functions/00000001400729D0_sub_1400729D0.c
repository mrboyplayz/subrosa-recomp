/* Address: 0x1400729d0 | Name: sub_1400729D0 | Size: 180 bytes */
__int64 __fastcall sub_1400729D0(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD, _QWORD); // rax

  v1 = 122LL * a1;
  result = sub_140075460();
  if ( (_DWORD)result )
  {
    v3 = *(void (__fastcall **)(_QWORD, _QWORD))&dword_140404A6C[v1 + 70087149];
    if ( v3 )
      v3(dword_140404A6C[v1 + 70087146], dword_140404A6C[v1 + 70087147]);
    sub_140075340();
    return sub_14007BB00();
  }
  return result;
}

