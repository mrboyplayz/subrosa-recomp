/* Address: 0x140247818 | Name: sub_140247818 | Size: 37 bytes */
void __fastcall MEMORY[0x140247818](__int64 a1)
{
  *(_QWORD *)&dword_140404A6C[19065279] = _security_cookie ^ __ROR8__(a1, 64 - (_security_cookie & 0x3Fu));
}

