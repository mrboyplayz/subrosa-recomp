/* Address: 0x1401603c0 | Name: sub_1401603C0 | Size: 97 bytes */
__int64 __fastcall sub_1401603C0(__int64 a1, unsigned int *a2, unsigned int *a3, int *a4, int a5)
{
  __int64 v6; // r11
  __int64 result; // rax
  int v8; // r9d

  v6 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
  if ( *(_DWORD *)(v6 + 8) )
    result = *(unsigned int *)(v6 + 12);
  else
    result = dword_140404A6C[18215120];
  if ( (_DWORD)result && a1 )
  {
    v8 = a5;
    if ( !a5 )
      v8 = *a4;
    return sub_14016F470(a1, *a2, *a3, (unsigned int)(4 * v8));
  }
  return result;
}

