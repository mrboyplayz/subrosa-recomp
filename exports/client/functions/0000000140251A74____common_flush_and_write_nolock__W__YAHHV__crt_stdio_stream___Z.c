/* Address: 0x140251a74 | Name: ??$common_flush_and_write_nolock@_W@@YAHHV__crt_stdio_stream@@@Z | Size: 233 bytes */
__int64 __fastcall common_flush_and_write_nolock<wchar_t>(unsigned __int16 a1, __int64 a2)
{
  int v4; // esi
  char v6; // al

  v4 = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 6) == 0 )
  {
    *errno() = 9;
LABEL_3:
    _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
    return 0xFFFF;
  }
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
  {
    *errno() = 34;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a2 + 20) & 1) != 0 )
  {
    v6 = stream_is_at_end_of_file_nolock(a2);
    *(_DWORD *)(a2 + 16) = 0;
    if ( !v6 )
      goto LABEL_3;
    *(_QWORD *)a2 = *(_QWORD *)(a2 + 8);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFFE);
  }
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 2u);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  *(_DWORD *)(a2 + 16) = 0;
  if ( (*(_DWORD *)(a2 + 20) & 0x4C0) == 0
    && ((char *)a2 != MEMORY[0x14020B528](1u) && (char *)a2 != MEMORY[0x14020B528](2u) || !isatty(v4)) )
  {
    sub_140253EF8(a2);
  }
  if ( !(unsigned __int8)sub_140251C44(a1, a2) )
    goto LABEL_3;
  return a1;
}

