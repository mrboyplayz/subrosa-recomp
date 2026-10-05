/* Address: 0x140251498 | Name: sub_140251498 | Size: 348 bytes */
__int64 __fastcall sub_140251498(FILE *Stream)
{
  void *v2; // rdi
  int v3; // eax
  int v4; // eax
  __int64 v5; // rdi
  _BYTE *v6; // rdx

  if ( !Stream )
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  if ( (*((_DWORD *)Stream + 5) & 0x2000) == 0 || (*((_DWORD *)Stream + 5) & 0x1000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (*((_DWORD *)Stream + 5) & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x10u);
    return 0xFFFFFFFFLL;
  }
  _InterlockedOr((volatile signed __int32 *)Stream + 5, 1u);
  if ( (*((_DWORD *)Stream + 5) & 0x4C0) == 0 )
    sub_140253EF8(Stream);
  v2 = *((void **)Stream + 1);
  *(_QWORD *)Stream = v2;
  v3 = fileno(Stream);
  v4 = read(v3, v2, *((_DWORD *)Stream + 8));
  *((_DWORD *)Stream + 4) = v4;
  if ( (unsigned int)(v4 + 1) <= 1 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, v4 != 0 ? 16 : 8);
    *((_DWORD *)Stream + 4) = 0;
    return 0xFFFFFFFFLL;
  }
  if ( (*((_DWORD *)Stream + 5) & 6) == 0 )
  {
    if ( fileno(Stream) == -1 || fileno(Stream) == -2 )
    {
      v6 = &unk_1403022C0;
    }
    else
    {
      v5 = (__int64)fileno(Stream) >> 6;
      v6 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v5 + 19065401] + 72LL * (fileno(Stream) & 0x3F));
    }
    if ( (v6[56] & 0x82) == 0x82 )
      _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x20u);
  }
  if ( *((_DWORD *)Stream + 8) == 512 && (*((_DWORD *)Stream + 5) & 0x40) != 0 && (*((_DWORD *)Stream + 5) & 0x100) == 0 )
    *((_DWORD *)Stream + 8) = 4096;
  --*((_DWORD *)Stream + 4);
  return *(unsigned __int8 *)(*(_QWORD *)Stream)++;
}

