/* Address: 0x140223ac0 | Name: sub_140223AC0 | Size: 64 bytes */
bool __fastcall sub_140223AC0(_QWORD *a1, char a2)
{
  bool result; // al

  result = 1;
  if ( (*(_DWORD *)(*a1 + 20LL) & 0x1000) == 0 || *(_QWORD *)(*a1 + 8LL) )
    return (unsigned int)unknown_libname_207((unsigned int)a2, *a1) != -1;
  return result;
}

