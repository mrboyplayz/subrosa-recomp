/* Address: 0x140069400 | Name: sub_140069400 | Size: 62 bytes */
void __fastcall sub_140069400(__int64 a1, __int64 a2)
{
  MEMORY[0x1401FC920](a2, &dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[9] + 11]);
  dword_140404A6C[9] ^= 1u;
  JUMPOUT(0x140198E69LL);
}

