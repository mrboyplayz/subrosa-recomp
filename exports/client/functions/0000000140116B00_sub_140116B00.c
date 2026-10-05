/* Address: 0x140116b00 | Name: sub_140116B00 | Size: 135 bytes */
__int64 __fastcall sub_140116B00(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 result; // rax

  v4 = 3597LL * a1;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856367 + v4] = 3;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856368 + v4] = a2;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856369 + v4] = a3;
  dword_140404A6C[21 * (int)dword_140404A6C[v4 + 71856362] + 71856370 + v4] = a4;
  result = ((unsigned __int8)dword_140404A6C[v4 + 71856362] + 1) & 0x3F;
  dword_140404A6C[v4 + 71856362] = result;
  return result;
}

