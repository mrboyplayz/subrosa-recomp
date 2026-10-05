/* Address: 0x140002ae0 | Name: sub_140002AE0 | Size: 344 bytes */
__int64 __fastcall sub_140002AE0(__int16 a1, _DWORD *a2, _DWORD *a3, float a4, int a5, float a6, int a7)
{
  __int64 result; // rax
  int v11; // r9d
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx

  result = (__int64)&unk_14B883320;
  v11 = 0;
  while ( *(_DWORD *)result )
  {
    ++v11;
    result += 244;
    if ( result >= (__int64)&unk_14BC53320 )
      return result;
  }
  if ( v11 != -1 )
  {
    v12 = v11;
    v13 = 244LL * v11;
    memset((char *)&unk_14B883324 + v13, 0, 0xF0u);
    *(_DWORD *)((char *)&unk_14B883320 + v13) = 1;
    v14 = 9 * v12;
    *(_DWORD *)((char *)&unk_14B883320 + v13 + 4) = 5;
    *(_QWORD *)((char *)&unk_14B883320 + v13 + 12) = 0;
    *(__int128 *)((char *)&xmmword_14B6432E0[v14] + 2) = 0;
    *(__int128 *)((char *)&xmmword_14B6432E0[v14 + 1] + 2) = 0;
    *(__int128 *)((char *)&xmmword_14B6432E0[v14 + 2] + 2) = 0;
    *(__int128 *)((char *)&xmmword_14B6432E0[v14 + 3] + 2) = 0;
    *(__int128 *)((char *)&xmmword_14B6432E0[v14 + 4] + 2) = 0;
    *(__int128 *)((char *)&xmmword_14B6432E0[v14 + 5] + 2) = 0;
    *(__int128 *)((char *)&xmmword_14B6432E0[v14 + 6] + 2) = 0;
    *(__int128 *)((char *)&xmmword_14B6432E0[v14 + 7] + 2) = 0;
    *(_QWORD *)((char *)&xmmword_14B6432E0[v14 + 8] + 2) = 0;
    *(_DWORD *)((char *)&xmmword_14B6432E0[v14 + 8] + 10) = 0;
    HIWORD(xmmword_14B6432E0[v14 + 8]) = 0;
    LOWORD(xmmword_14B6432E0[v14]) = a1;
    LODWORD(xmmword_14B6432E0[v14 + 2]) = *a2;
    DWORD1(xmmword_14B6432E0[v14 + 2]) = a2[1];
    DWORD2(xmmword_14B6432E0[v14 + 2]) = a2[2];
    LODWORD(xmmword_14B6432E0[v14 + 1]) = *a3;
    DWORD1(xmmword_14B6432E0[v14 + 1]) = a3[1];
    result = (unsigned int)a3[2];
    DWORD2(xmmword_14B6432E0[v14 + 1]) = result;
    DWORD1(xmmword_14B6432E0[v14 + 4]) = a7;
    DWORD2(xmmword_14B6432E0[v14 + 4]) = a5;
    *((float *)&xmmword_14B6432E0[v14 + 1] + 3) = a4 * a6;
  }
  return result;
}

