/* Address: 0x1400395a0 | Name: sub_1400395A0 | Size: 465 bytes */
__int64 __fastcall sub_1400395A0(unsigned int a1, unsigned int a2)
{
  __int64 v4; // r8
  __int64 v5; // rbp
  char *v6; // r14
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r11
  _BYTE *v10; // rax
  _BYTE *i; // rdx
  unsigned int v13; // esi
  _DWORD *v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  size_t v17; // rbx

  v4 = -1;
  v5 = ((int)a2 + 110LL * (int)a1) << 6;
  v6 = (char *)&unk_19025F0C0 + v5;
  do
    ++v4;
  while ( v6[v4 + 884] );
  if ( (int)v4 > 63 )
    LODWORD(v4) = 63;
  v7 = *((_DWORD *)&unk_19025F0C0 + 1760 * (int)a1 + ((__int64)(int)a2 >> 5) + 92);
  if ( _bittest(&v7, a2 & 0x1F) )
  {
    v8 = *((int *)&unk_19025F0C0 + 1760 * (int)a1 + (int)a2 + 94);
    v9 = 156 * v8;
    if ( *((_DWORD *)&unk_195629300 + 39 * v8 + 6) == (_DWORD)v4 )
    {
      if ( (int)v4 <= 0 )
        return (unsigned int)v8;
      v10 = (char *)&unk_19562935C + v9;
      for ( i = (char *)&unk_19025FC34 + v5; *(v10 - 64) == *(i - 2048) && *v10 == *i; ++i )
      {
        if ( ++v10 - ((char *)&unk_19562935C + v9) >= (int)v4 )
          return (unsigned int)v8;
      }
    }
    *(_DWORD *)((char *)&unk_195629300 + v9) = 0;
  }
  v13 = 0;
  v14 = &unk_195629300;
  while ( *v14 )
  {
    ++v13;
    v14 += 39;
    if ( (__int64)v14 >= (__int64)&dword_195899300 )
      return 0xFFFFFFFFLL;
  }
  if ( v13 == -1 )
    return 0xFFFFFFFFLL;
  v15 = 156LL * (int)v13;
  v16 = dword_191541414;
  v17 = (int)v4;
  *(_DWORD *)((char *)&unk_195629300 + v15 + 24) = v4;
  *(_QWORD *)((char *)&unk_195629300 + v15) = 1;
  *(_DWORD *)((char *)&unk_195629300 + v15 + 12) = v16;
  *(_DWORD *)((char *)&unk_195629300 + v15 + 8) = 1;
  *(_DWORD *)((char *)&unk_195629300 + v15 + 16) = a1;
  *(_DWORD *)((char *)&unk_195629300 + v15 + 20) = a2;
  memcpy((char *)&unk_19562931C + v15, v6 + 884, (int)v4);
  memcpy((char *)&unk_19562935C + v15, (char *)&unk_19025FC34 + v5, v17);
  sub_14006CEC0(a1, v13, a2);
  return v13;
}

