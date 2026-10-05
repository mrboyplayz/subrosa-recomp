/* Address: 0x140038ea0 | Name: sub_140038EA0 | Size: 296 bytes */
__int64 __fastcall sub_140038EA0(int a1, int a2)
{
  _DWORD *v3; // rax
  unsigned int v5; // esi
  __int64 v7; // rdi
  __int128 *v8; // rax

  v3 = &unk_14B883320;
  v5 = 0;
  while ( *v3 )
  {
    ++v5;
    v3 += 61;
    if ( (__int64)v3 >= (__int64)dword_14BC53320 )
      return 0xFFFFFFFFLL;
  }
  if ( v5 == -1 )
    return 0xFFFFFFFFLL;
  v7 = 244LL * (int)v5;
  memset((char *)&unk_14B883324 + v7, 0, 0xF0u);
  *(_DWORD *)((char *)&unk_14B883320 + v7) = 1;
  *(_DWORD *)((char *)&unk_14B883320 + v7 + 4) = 8;
  *(_QWORD *)((char *)&unk_14B883320 + v7 + 12) = 0x10000;
  *(_DWORD *)((char *)&unk_14B883320 + v7 + 156) = a2;
  *(_DWORD *)((char *)&unk_14B883320 + v7 + 152) = a1;
  *(_DWORD *)((char *)&unk_14B883320 + v7 + 160) = -1;
  v8 = &xmmword_14B6432E0[9 * (int)v5];
  *(_DWORD *)((char *)&unk_14B883320 + v7 + 112) = 1031798784;
  *(_DWORD *)((char *)&unk_14B883320 + v7 + 116) = 1040187392;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v8[8] = 0;
  return v5;
}

