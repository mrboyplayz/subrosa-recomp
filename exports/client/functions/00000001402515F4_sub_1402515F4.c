/* Address: 0x1402515f4 | Name: sub_1402515F4 | Size: 417 bytes */
__int64 __fastcall sub_1402515F4(FILE *Stream)
{
  int v2; // esi
  unsigned __int8 v3; // bp
  void *v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdi
  _BYTE *v8; // rdx
  unsigned __int8 *v9; // rax
  __int16 v10; // cx
  unsigned __int16 v11; // cx

  if ( !Stream )
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0xFFFF;
  }
  if ( (*((_DWORD *)Stream + 5) & 0x2000) == 0 || (*((_DWORD *)Stream + 5) & 0x1000) != 0 )
    return 0xFFFF;
  if ( (*((_DWORD *)Stream + 5) & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x10u);
    return 0xFFFF;
  }
  _InterlockedOr((volatile signed __int32 *)Stream + 5, 1u);
  if ( (*((_DWORD *)Stream + 5) & 0x4C0) == 0 )
    sub_140253EF8(Stream);
  v2 = *((_DWORD *)Stream + 4);
  if ( v2 == 1 )
    v3 = **(_BYTE **)Stream;
  else
    v3 = 0;
  v4 = *((void **)Stream + 1);
  *(_QWORD *)Stream = v4;
  v5 = fileno(Stream);
  v6 = read(v5, v4, *((_DWORD *)Stream + 8));
  *((_DWORD *)Stream + 4) = v6;
  if ( (unsigned int)(v6 + 1) <= 2 )
  {
    _InterlockedOr((volatile signed __int32 *)Stream + 5, v6 != 0 ? 16 : 8);
    *((_DWORD *)Stream + 4) = 0;
    return 0xFFFF;
  }
  if ( (*((_DWORD *)Stream + 5) & 6) == 0 )
  {
    if ( fileno(Stream) == -1 || fileno(Stream) == -2 )
    {
      v8 = &unk_1403022C0;
    }
    else
    {
      v7 = (__int64)fileno(Stream) >> 6;
      v8 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v7 + 19065401] + 72LL * (fileno(Stream) & 0x3F));
    }
    if ( (v8[56] & 0x82) == 0x82 )
      _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x20u);
  }
  if ( *((_DWORD *)Stream + 8) == 512 && (*((_DWORD *)Stream + 5) & 0x40) != 0 && (*((_DWORD *)Stream + 5) & 0x100) == 0 )
    *((_DWORD *)Stream + 8) = 4096;
  v9 = *(unsigned __int8 **)Stream;
  if ( v2 == 1 )
  {
    v10 = *v9;
    --*((_DWORD *)Stream + 4);
    v11 = v3 | (unsigned __int16)(v10 << 8);
    ++*(_QWORD *)Stream;
  }
  else
  {
    v11 = *(_WORD *)v9;
    *((_DWORD *)Stream + 4) -= 2;
    *(_QWORD *)Stream += 2LL;
  }
  return v11;
}

