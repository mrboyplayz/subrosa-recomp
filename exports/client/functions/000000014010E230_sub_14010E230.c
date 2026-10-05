/* Address: 0x14010e230 | Name: sub_14010E230 | Size: 114 bytes */
__int64 __fastcall sub_14010E230(int a1, int a2, int a3, int a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 result; // rax

  v4 = a4;
  v5 = a3;
  result = sub_1401E0CC0(
             *(_QWORD *)&dword_140404A6C[2 * a1 + 299853437],
             a2,
             960,
             (unsigned int)&dword_140404A6C[32901 * a3 + 299853826 + 512 * (__int64)a4],
             2048);
  dword_140404A6C[32901 * v5 + 299853762 + v4] = result;
  return result;
}

