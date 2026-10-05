/* Address: 0x140038a50 | Name: sub_140038A50 | Size: 383 bytes */
__int64 __fastcall sub_140038A50(int a1, int a2, _DWORD *a3, _DWORD *a4, int a5)
{
  _DWORD *v6; // rax
  unsigned int v10; // esi
  __int64 v12; // rdi
  __int128 *v13; // rax

  v6 = &unk_14B883320;
  v10 = 0;
  while ( *v6 )
  {
    ++v10;
    v6 += 61;
    if ( (__int64)v6 >= (__int64)dword_14BC53320 )
      return 0xFFFFFFFFLL;
  }
  if ( v10 == -1 )
    return 0xFFFFFFFFLL;
  v12 = 244LL * (int)v10;
  memset((char *)&unk_14B883324 + v12, 0, 0xF0u);
  *(_DWORD *)((char *)&unk_14B883320 + v12) = 1;
  *(_DWORD *)((char *)&unk_14B883320 + v12 + 4) = 7;
  *(_QWORD *)((char *)&unk_14B883320 + v12 + 12) = 0x10000;
  *(_DWORD *)((char *)&unk_14B883320 + v12 + 156) = a2;
  *(_DWORD *)((char *)&unk_14B883320 + v12 + 152) = a1;
  *(_DWORD *)((char *)&unk_14B883320 + v12 + 160) = -1;
  *(_DWORD *)((char *)&unk_14B883320 + v12 + 112) = 1048576000;
  *(_DWORD *)((char *)&unk_14B883320 + v12 + 116) = 1052770304;
  v13 = &xmmword_14B6432E0[9 * (int)v10];
  *v13 = 0;
  v13[1] = 0;
  v13[2] = 0;
  v13[3] = 0;
  v13[4] = 0;
  v13[5] = 0;
  v13[6] = 0;
  v13[7] = 0;
  v13[8] = 0;
  *(_DWORD *)((char *)&unk_14B883320 + v12 + 100) = a5;
  *(_DWORD *)((char *)&unk_14B883320 + v12 + 56) = *a3;
  *(_DWORD *)((char *)&unk_14B883320 + v12 + 60) = a3[1];
  *(_DWORD *)((char *)&unk_14B883320 + v12 + 64) = a3[2];
  *(_DWORD *)((char *)&unk_14B883320 + v12 + 68) = *a4;
  *(_DWORD *)((char *)&unk_14B883320 + v12 + 72) = a4[1];
  *(_DWORD *)((char *)&unk_14B883320 + v12 + 76) = a4[2];
  return v10;
}

