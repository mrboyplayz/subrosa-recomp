/* Address: 0x140116a40 | Name: sub_140116A40 | Size: 186 bytes */
__int64 __fastcall sub_140116A40(int a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = -1;
  do
    ++v2;
  while ( *(_BYTE *)(a2 + v2) );
  v3 = 3597LL * a1;
  dword_140404A6C[21 * (int)dword_140404A6C[v3 + 71856362] + 71856367 + v3] = 1;
  dword_140404A6C[21 * (int)dword_140404A6C[v3 + 71856362] + 71856368 + v3] = v2 & 0x3F;
  MEMORY[0x1401FC920](&dword_140404A6C[21 * (int)dword_140404A6C[v3 + 71856362] + 71856372 + v3], a2);
  dword_140404A6C[21 * (int)dword_140404A6C[v3 + 71856362] + 71856369 + v3] = dword_140404A6C[283785910];
  result = ((unsigned __int8)dword_140404A6C[v3 + 71856362] + 1) & 0x3F;
  dword_140404A6C[v3 + 71856362] = result;
  return result;
}

