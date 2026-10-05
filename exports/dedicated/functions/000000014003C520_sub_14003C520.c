/* Address: 0x14003c520 | Name: sub_14003C520 | Size: 541 bytes */
__int64 __fastcall sub_14003C520(int a1, int a2, int a3, float *a4)
{
  __int64 v4; // r15
  __int64 v6; // r13
  _DWORD *v7; // rax
  __int64 v8; // r12
  unsigned int v9; // ebp
  __int64 v11; // rsi
  __int128 *v12; // rax

  v4 = a3;
  v6 = a1;
  v7 = &unk_14B883320;
  v8 = a2;
  v9 = 0;
  while ( *v7 )
  {
    ++v9;
    v7 += 61;
    if ( (__int64)v7 >= (__int64)dword_14BC53320 )
      return 0xFFFFFFFFLL;
  }
  if ( v9 == -1 )
    return 0xFFFFFFFFLL;
  v11 = 244LL * (int)v9;
  *((_DWORD *)&unk_1909419A0 + 7166 * a1 + 3 * *((int *)&unk_1909419A0 + 7166 * a1 + 2931) + 2932) = v9;
  *((_DWORD *)&unk_1909419A0 + 7166 * a1 + 3 * *((int *)&unk_1909419A0 + 7166 * a1 + 2931) + 2933) = a2;
  *((_DWORD *)&unk_1909419A0 + 7166 * a1 + 3 * (*((_DWORD *)&unk_1909419A0 + 7166 * a1 + 2931))++ + 2934) = a3;
  memset((char *)&unk_14B883324 + v11, 0, 0xF0u);
  *(_DWORD *)((char *)&unk_14B883320 + v11) = 1;
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 4) = 10;
  *(_QWORD *)((char *)&unk_14B883320 + v11 + 12) = 0x10000;
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 160) = v6;
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
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 152) = *((_DWORD *)&unk_1909419A0 + 7166 * v6 + 78 * v8 + 146);
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 156) = *((_DWORD *)&unk_1909419A0 + 7166 * v6 + 78 * v4 + 146);
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 112) = 1048576000;
  *(_DWORD *)((char *)&unk_14B883320 + v11 + 116) = 1052770304;
  *(float *)((char *)&unk_14B883320 + v11 + 56) = *a4;
  *(float *)((char *)&unk_14B883320 + v11 + 60) = a4[1];
  *(float *)((char *)&unk_14B883320 + v11 + 64) = a4[2];
  *(float *)((char *)&unk_14B883320 + v11 + 68) = *a4 - *((float *)&xmmword_1910415A4 + 25 * v4);
  *(float *)((char *)&unk_14B883320 + v11 + 72) = a4[1] - *((float *)&xmmword_1910415A4 + 25 * v4 + 1);
  *(float *)((char *)&unk_14B883320 + v11 + 76) = a4[2] - *((float *)&xmmword_1910415A4 + 25 * v4 + 2);
  return v9;
}

