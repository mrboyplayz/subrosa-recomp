/* Address: 0x1402477e8 | Name: sub_1402477E8 | Size: 46 bytes */
__int64 __fastcall MEMORY[0x1402477E8](__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // rdx

  v1 = (__int64 (__fastcall *)(__int64))__ROR8__(
                                          *(_QWORD *)&dword_140404A6C[19065279] ^ _security_cookie,
                                          _security_cookie & 0x3F);
  if ( v1 )
    return v1(a1);
  else
    return 0;
}

