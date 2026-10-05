/* Address: 0x140255d60 | Name: sub_140255D60 | Size: 49 bytes */
__int64 __fastcall sub_140255D60(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19065829];
  if ( *a2 != *(_QWORD *)&dword_140404A6C[19065829] )
  {
    result = *(unsigned int *)(a1 + 936);
    if ( ((unsigned int)result & dword_140302B88) == 0 )
    {
      result = sub_14025F580();
      *a2 = result;
    }
  }
  return result;
}

