/* Address: 0x140253ef8 | Name: sub_140253EF8 | Size: 102 bytes */
__int64 __fastcall sub_140253EF8(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax

  ++dword_140404A6C[19064595];
  v2 = 4096;
  *(_QWORD *)(a1 + 8) = malloc_base(4096);
  free_base(nullptr);
  if ( *(_QWORD *)(a1 + 8) )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x40u);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x400u);
    v2 = 2;
    *(_QWORD *)(a1 + 8) = a1 + 28;
  }
  *(_DWORD *)(a1 + 32) = v2;
  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = result;
  return result;
}

