/* Address: 0x140260c14 | Name: _query_new_handler | Size: 52 bytes */
__int64 query_new_handler()
{
  __int64 v0; // rbx

  sub_140258B64(0);
  v0 = __ROR8__(*(_QWORD *)&dword_140404A6C[19065849] ^ _security_cookie, _security_cookie & 0x3F);
  sub_140258BB8(0);
  return v0;
}

