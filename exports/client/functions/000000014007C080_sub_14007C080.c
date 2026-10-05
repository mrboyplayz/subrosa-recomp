/* Address: 0x14007c080 | Name: sub_14007C080 | Size: 55 bytes */
__int64 __fastcall sub_14007C080(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = 1048782LL * a1;
  result = closesocket((int)dword_140404A6C[v1 + 112673944]);
  dword_140404A6C[v1 + 112673941] = 0;
  return result;
}

