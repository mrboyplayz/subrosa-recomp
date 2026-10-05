/* Address: 0x1400805e0 | Name: sub_1400805E0 | Size: 57 bytes */
__int64 __fastcall sub_1400805E0(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = a1;
  result = closesocket((int)dword_140404A6C[v1 + 289301078]);
  dword_140404A6C[v1 + 289301070] = 0;
  return result;
}

