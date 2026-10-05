/* Address: 0x140245614 | Name: sub_140245614 | Size: 60 bytes */
__int64 __fastcall sub_140245614(__int64 a1)
{
  __int64 result; // rax

  result = _security_cookie & 0x3F;
  if ( *(_QWORD *)&dword_140404A6C[19064655] != _security_cookie )
    terminate((unsigned int)(64 - result), a1);
  *(_QWORD *)&dword_140404A6C[19064655] = _security_cookie ^ __ROR8__(a1, 64 - (unsigned __int8)result);
  return result;
}

