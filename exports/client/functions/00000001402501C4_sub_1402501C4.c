/* Address: 0x1402501c4 | Name: sub_1402501C4 | Size: 122 bytes */
__int64 __fastcall sub_1402501C4(FILE *Stream)
{
  int v2; // ecx
  signed int v3; // edi
  const void *v4; // rsi
  int v5; // eax

  v2 = *((_DWORD *)Stream + 5);
  if ( (v2 & 3) == 2 && (v2 & 0xC0) != 0 )
  {
    v3 = *(_DWORD *)Stream - *((_DWORD *)Stream + 2);
    *((_DWORD *)Stream + 4) = 0;
    v4 = *((const void **)Stream + 1);
    *(_QWORD *)Stream = v4;
    if ( v3 > 0 )
    {
      v5 = fileno(Stream);
      if ( v3 != write(v5, v4, v3) )
      {
        _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x10u);
        return 0xFFFFFFFFLL;
      }
      if ( (*((_DWORD *)Stream + 5) & 4) != 0 )
        _InterlockedAnd((volatile signed __int32 *)Stream + 5, 0xFFFFFFFD);
    }
  }
  return 0;
}

