/* Address: 0x1402502fc | Name: sub_1402502FC | Size: 64 bytes */
__int64 __fastcall sub_1402502FC(__int64 a1)
{
  __int64 result; // rax

  result = *(_DWORD *)(a1 + 20) >> 13;
  if ( (*(_DWORD *)(a1 + 20) & 0x2000) != 0 )
  {
    result = *(_DWORD *)(a1 + 20) >> 6;
    if ( (*(_DWORD *)(a1 + 20) & 0x40) != 0 )
    {
      free_base(*(void **)(a1 + 8));
      _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFEBF);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 16) = 0;
      return 0;
    }
  }
  return result;
}

