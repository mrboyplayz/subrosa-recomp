/* Address: 0x140251c44 | Name: sub_140251C44 | Size: 232 bytes */
bool __fastcall sub_140251C44(__int16 a1, __int64 a2)
{
  int v3; // eax
  int v4; // esi
  char *v5; // rdx
  signed int v6; // edi
  bool v7; // zf
  _BYTE *v8; // rdx
  __int16 Buf; // [rsp+30h] [rbp+8h] BYREF

  Buf = a1;
  v3 = fileno((FILE *)a2);
  if ( (*(_DWORD *)(a2 + 20) & 0xC0) == 0 )
    return write(v3, &Buf, 2u) == 2;
  v4 = 0;
  v5 = *(char **)(a2 + 8);
  v6 = *(_DWORD *)a2 - *(_DWORD *)(a2 + 8);
  *(_QWORD *)a2 = v5 + 2;
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a2 + 32) - 2;
  if ( v6 <= 0 )
  {
    if ( (unsigned int)(v3 + 2) <= 1 )
      v8 = &unk_1403022C0;
    else
      v8 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v3 >> 6) + 19065401] + 72LL * (v3 & 0x3F));
    if ( (v8[56] & 0x20) != 0 && lseeki64(v3, 0, 2) == -1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 20), 0x10u);
      return 1;
    }
  }
  else
  {
    v4 = write(v3, v5, v6);
  }
  v7 = v4 == v6;
  **(_WORD **)(a2 + 8) = Buf;
  return v7;
}

