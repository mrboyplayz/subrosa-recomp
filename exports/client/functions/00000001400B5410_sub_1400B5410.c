/* Address: 0x1400b5410 | Name: sub_1400B5410 | Size: 70 bytes */
__int64 __fastcall sub_1400B5410(int a1, signed int a2, signed int a3, unsigned int *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax

  v4 = a3;
  v5 = a1;
  result = sub_140055FA0(a1, a2, a3, a4);
  if ( (_DWORD)result != -1 )
    dword_140404A6C[7166 * v5 + 280651511 + 78 * v4] = result;
  return result;
}

