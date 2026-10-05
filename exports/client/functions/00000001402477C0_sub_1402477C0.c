/* Address: 0x1402477c0 | Name: sub_1402477C0 | Size: 29 bytes */
bool MEMORY[0x1402477C0]()
{
  return __ROR8__(*(_QWORD *)&dword_140404A6C[19065279] ^ _security_cookie, _security_cookie & 0x3F) != 0;
}

