/* Address: 0x1401f7f70 | Name: sub_1401F7F70 | Size: 155 bytes */
_DWORD *__fastcall sub_1401F7F70(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5, unsigned int a6, _DWORD *a7)
{
  _DWORD *result; // rax

  result = a7;
  if ( !a3 )
    result = (_DWORD *)MEMORY[0x1401FCD30](a1, 0, 2LL * (int)(a2 * a6));
  if ( a4 )
    return (_DWORD *)sub_1401F2590(a7, a4, a3, a5, a1, a2, a6);
  return result;
}

