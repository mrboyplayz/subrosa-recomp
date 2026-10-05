/* Address: 0x140038d20 | Name: sub_140038D20 | Size: 370 bytes */
__int64 __fastcall sub_140038D20(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v5; // rax
  unsigned int v9; // esi
  __int64 v11; // rdi
  __int128 *v12; // rax

  v5 = &unk_14B883320;
  v9 = 0;
  while ( *v5 )
  {
    ++v9;
    v5 += 61;
    if ( (__int64)v5 >= (__int64)dword_14BC53320 )
      return 0xFFFFFFFFLL;
  }
  if ( v9 == -1 )
    return 0xFFFFFFFFLL;
  v11 = 244LL * (int)v9;
  memset((char *)&unk_14B883324 + v11, 0, 0xF0u);
  *(_DWORD *)((char *)&unk_14B883320 + v11) = 1;
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 4) = 7;
  *(_QWORD *)((char *)&unk_14B883320 + v11 + 12) = 0x10000;
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 156) = a2;
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 152) = a1;
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 160) = -1;
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 112) = 1048576000;
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 116) = 1052770304;
  v12 = &xmmword_14B6432E0[9 * (int)v9];
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  v12[4] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v12[7] = 0;
  v12[8] = 0;
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 56) = *a3;
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 60) = a3[1];
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 64) = a3[2];
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 68) = *a4;
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 72) = a4[1];
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 76) = a4[2];
  return v9;
}

