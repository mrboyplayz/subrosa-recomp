/* Address: 0x140038bd0 | Name: sub_140038BD0 | Size: 325 bytes */
__int64 __fastcall sub_140038BD0(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // rax
  unsigned int v7; // esi
  __int64 v9; // rdi
  __int128 *v10; // rax

  v4 = &unk_14B883320;
  v7 = 0;
  while ( *v4 )
  {
    ++v7;
    v4 += 61;
    if ( (__int64)v4 >= (__int64)dword_14BC53320 )
      return 0xFFFFFFFFLL;
  }
  if ( v7 == -1 )
    return 0xFFFFFFFFLL;
  v9 = 244LL * (int)v7;
  memset((char *)&unk_14B883324 + v9, 0, 0xF0u);
  *(_DWORD *)((char *)&unk_14B883320 + v9) = 1;
  *(_DWORD *)((char *)&unk_14B883320 + v9 + 4) = 4;
  *(_QWORD *)((char *)&unk_14B883320 + v9 + 12) = 0x10000;
  *(_DWORD *)((char *)&unk_14B883320 + v9 + 152) = a1;
  *(_DWORD *)((char *)&unk_14B883320 + v9 + 112) = 1031798784;
  *(_DWORD *)((char *)&unk_14B883320 + v9 + 116) = 1040187392;
  v10 = &xmmword_14B6432E0[9 * (int)v7];
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  v10[8] = 0;
  *(_DWORD *)((char *)&unk_14B883320 + v9 + 56) = *a2;
  *(_DWORD *)((char *)&unk_14B883320 + v9 + 60) = a2[1];
  *(_DWORD *)((char *)&unk_14B883320 + v9 + 64) = a2[2];
  *(_DWORD *)((char *)&unk_14B883320 + v9 + 44) = *a3;
  *(_DWORD *)((char *)&unk_14B883320 + v9 + 48) = a3[1];
  *(_DWORD *)((char *)&unk_14B883320 + v9 + 52) = a3[2];
  return v7;
}

