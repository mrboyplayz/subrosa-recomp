/* Address: 0x140255d2c | Name: sub_140255D2C | Size: 49 bytes */
__int64 __fastcall sub_140255D2C(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19065667];
  if ( *a2 != *(_QWORD *)&dword_140404A6C[19065667] )
  {
    result = *(unsigned int *)(a1 + 936);
    if ( ((unsigned int)result & dword_140302B88) == 0 )
    {
      result = sub_140262ADC();
      *a2 = result;
    }
  }
  return result;
}

