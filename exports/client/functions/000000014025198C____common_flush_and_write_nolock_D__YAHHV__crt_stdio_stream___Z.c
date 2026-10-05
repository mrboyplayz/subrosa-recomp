/* Address: 0x14025198c | Name: ??$common_flush_and_write_nolock@D@@YAHHV__crt_stdio_stream@@@Z | Size: 232 bytes */
__int64 __fastcall common_flush_and_write_nolock<char>(unsigned __int8 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // esi
  char v7; // al

  v5 = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 6) == 0 )
  {
    *errno() = 9;
LABEL_3:
    _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
    return 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
  {
    *errno() = 34;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a2 + 20) & 1) != 0 )
  {
    v7 = stream_is_at_end_of_file_nolock(a2);
    *(_DWORD *)(a2 + 16) = 0;
    if ( !v7 )
      goto LABEL_3;
    *(_QWORD *)a2 = *(_QWORD *)(a2 + 8);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFFE);
  }
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 2u);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  *(_DWORD *)(a2 + 16) = 0;
  if ( (*(_DWORD *)(a2 + 20) & 0x4C0) == 0
    && ((char *)a2 != MEMORY[0x14020B528](1u) && (char *)a2 != MEMORY[0x14020B528](2u) || !isatty(v5)) )
  {
    sub_140253EF8(a2);
  }
  LOBYTE(v4) = a1;
  if ( !(unsigned __int8)sub_140251B60(v4, a2) )
    goto LABEL_3;
  return a1;
}

