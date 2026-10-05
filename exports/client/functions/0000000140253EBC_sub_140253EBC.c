/* Address: 0x140253ebc | Name: sub_140253EBC | Size: 57 bytes */
__int64 __fastcall sub_140253EBC(char a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = *(_DWORD *)(a2 + 20) >> 9;
    if ( (*(_DWORD *)(a2 + 20) & 0x200) != 0 )
    {
      result = sub_1402501C4((FILE *)a2);
      _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFD7F);
      *(_DWORD *)(a2 + 32) = 0;
      *(_QWORD *)(a2 + 8) = 0;
      *(_QWORD *)a2 = 0;
    }
  }
  return result;
}

