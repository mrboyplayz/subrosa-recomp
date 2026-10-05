/* Address: 0x14005eac0 | Name: sub_14005EAC0 | Size: 70 bytes */
__int64 __fastcall sub_14005EAC0(int a1, int a2, int a3, float *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax

  v4 = a3;
  v5 = a1;
  result = sub_14003C520(a1, a2, a3, a4);
  if ( (_DWORD)result != -1 )
    *((_DWORD *)&unk_190941D08 + 7166 * v5 + 78 * v4) = result;
  return result;
}

