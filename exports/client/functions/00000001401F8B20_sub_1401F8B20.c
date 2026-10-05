/* Address: 0x1401f8b20 | Name: sub_1401F8B20 | Size: 33 bytes */
__int64 __fastcall MEMORY[0x1401F8B20](__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( a1 == _security_cookie )
  {
    v1 = __ROL8__(a1, 16);
    if ( !(_WORD)v1 )
      return result;
    a1 = __ROR8__(v1, 16);
  }
  return sub_1401F85C0(a1);
}

