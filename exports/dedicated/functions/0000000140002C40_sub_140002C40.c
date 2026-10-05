/* Address: 0x140002c40 | Name: sub_140002C40 | Size: 556 bytes */
__int64 __fastcall sub_140002C40(
        int a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        float a6,
        int a7,
        float a8,
        int a9)
{
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rbp
  int v14; // r10d
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  float v18; // xmm3_4
  float v19; // xmm0_4

  v9 = a1;
  result = (__int64)&unk_14B883320;
  v11 = a2;
  v14 = 0;
  while ( *(_DWORD *)result )
  {
    ++v14;
    result += 244;
    if ( result >= (__int64)&unk_14BC53320 )
      return result;
  }
  if ( v14 != -1 )
  {
    v15 = v14;
    v16 = 244LL * v14;
    memset((char *)&unk_14B883324 + v16, 0, 0xF0u);
    v17 = 9 * v15;
    *(_DWORD *)((char *)&unk_14B883320 + v16) = 1;
    *(_DWORD *)((char *)&unk_14B883320 + v16 + 4) = 6;
    *(_QWORD *)((char *)&unk_14B883320 + v16 + 12) = 0;
    *(__int128 *)((char *)&xmmword_14B6432E0[v17] + 2) = 0;
    *(__int128 *)((char *)&xmmword_14B6432F0[v17] + 2) = 0;
    *(__int128 *)((char *)&xmmword_14B643300[v17] + 2) = 0;
    *(__int128 *)((char *)&xmmword_14B643310[v17] + 2) = 0;
    *(__int128 *)((char *)&xmmword_14B643320[v17] + 2) = 0;
    *(__int128 *)((char *)&xmmword_14B643330[v17] + 2) = 0;
    *(__int128 *)((char *)&xmmword_14B643340[v17] + 2) = 0;
    *(__int128 *)((char *)&xmmword_14B643350[v17] + 2) = 0;
    qword_14B643362[v17 * 2] = 0;
    dword_14B64336A[1 * v17] = 0;
    word_14B64336E[2 * v17] = 0;
    LOWORD(xmmword_14B6432E0[v17]) = v9;
    WORD1(xmmword_14B6432E0[v17]) = v11;
    LODWORD(xmmword_14B643300[v17]) = *a3;
    DWORD1(xmmword_14B643300[v17]) = a3[1];
    DWORD2(xmmword_14B643300[v17]) = a3[2];
    HIDWORD(xmmword_14B643300[v17]) = *a4;
    LODWORD(xmmword_14B643310[v17]) = a4[1];
    DWORD1(xmmword_14B643310[v17]) = a4[2];
    LODWORD(xmmword_14B6432F0[v17]) = *a5;
    DWORD1(xmmword_14B6432F0[v17]) = a5[1];
    result = (unsigned int)a5[2];
    DWORD2(xmmword_14B6432F0[v17]) = result;
    *((float *)&xmmword_14B6432F0[v17] + 3) = a6 * a8;
    DWORD1(xmmword_14B643320[v17]) = a9;
    DWORD2(xmmword_14B643320[v17]) = a7;
    v18 = *(float *)&dword_140249614[47 * v9];
    v19 = *(float *)&dword_140249614[47 * v11] + v18;
    *((float *)&xmmword_14B643310[v17] + 3) = *(float *)&dword_140249614[47 * v11] * (float)(1.0 / v19);
    *(float *)&xmmword_14B643320[v17] = v18 * (float)(1.0 / v19);
  }
  return result;
}

