/* Address: 0x14020c398 | Name: sub_14020C398 | Size: 183 bytes */
__int64 __fastcall sub_14020C398(__int64 a1, signed __int64 a2, int a3)
{
  unsigned int v3; // edi
  signed __int64 v4; // rsi
  __int64 v7; // rax

  v3 = a3;
  v4 = a2;
  if ( (*(_DWORD *)(a1 + 20) & 0x2000) == 0 )
  {
    *errno() = 22;
    return 0xFFFFFFFFLL;
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFFF7);
  if ( !sub_14020C2B4(a1, a2, a3) )
  {
    if ( v3 == 1 )
    {
      v4 += ftelli64_nolock((FILE *)a1);
      v3 = 0;
    }
    sub_1402501C4((FILE *)a1);
    v7 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)a1 = v7;
    if ( (*(_DWORD *)(a1 + 20) & 4) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFFFC);
    }
    else if ( (*(_BYTE *)(a1 + 20) & 0x41) == 0x41 && (*(_DWORD *)(a1 + 20) & 0x100) == 0 )
    {
      *(_DWORD *)(a1 + 32) = 512;
    }
    if ( lseeki64_nolock(*(unsigned int *)(a1 + 24), v4, v3) == -1 )
      return 0xFFFFFFFFLL;
  }
  return 0;
}

