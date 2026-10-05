/* Address: 0x140223b00 | Name: sub_140223B00 | Size: 67 bytes */
bool __fastcall sub_140223B00(_QWORD *a1, unsigned __int16 a2)
{
  bool result; // al

  result = 1;
  if ( (*(_DWORD *)(*a1 + 20LL) & 0x1000) == 0 || *(_QWORD *)(*a1 + 8LL) )
    return (unsigned __int16)sub_140256B38(a2, *a1) != 0xFFFF;
  return result;
}

