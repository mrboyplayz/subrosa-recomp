/* Address: 0x140039780 | Name: sub_140039780 | Size: 189 bytes */
__int64 __fastcall sub_140039780(int a1, int a2, int a3)
{
  __int64 v4; // rdx
  _DWORD *v5; // rax
  unsigned int v6; // ebx
  int v8; // ecx
  __int64 v9; // r9
  int v10; // eax

  v4 = a1;
  v5 = &unk_195629300;
  v6 = 0;
  while ( *v5 )
  {
    ++v6;
    v5 += 39;
    if ( (__int64)v5 >= (__int64)&dword_195899300 )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v8 = 64;
  if ( a3 <= 64 )
    v8 = a3;
  v9 = 156LL * (int)v6;
  v10 = dword_191541414;
  *(_DWORD *)((char *)&unk_195629300 + v9 + 16) = v4;
  *(_DWORD *)((char *)&unk_195629300 + v9 + 24) = v8;
  *(_DWORD *)((char *)&unk_195629300 + v9 + 20) = a2;
  *(_DWORD *)((char *)&unk_195629300 + v9 + 12) = v10;
  *(_QWORD *)((char *)&unk_195629300 + v9) = 1;
  *(_DWORD *)((char *)&unk_195629300 + v9 + 8) = 0;
  memcpy((char *)&unk_19562931C + v9, &qword_19025F428[880 * v4 + 8 * a2], v8);
  return v6;
}

