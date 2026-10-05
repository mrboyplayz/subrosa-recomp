/* Address: 0x1400a6aa0 | Name: sub_1400A6AA0 | Size: 169 bytes */
_DWORD *__fastcall sub_1400A6AA0(int a1, int a2, int a3, int a4)
{
  __int64 v4; // rbx
  int v5; // r10d
  __int64 v6; // r11
  _DWORD *result; // rax
  int v8; // ecx

  v4 = 24944LL * a1;
  v5 = 0;
  v6 = dword_14AA152E0[v4 + 533];
  if ( (int)v6 <= 0 )
  {
LABEL_8:
    dword_14AA152E0[3 * v6 + 534 + v4] = a2;
    dword_14AA152E0[3 * dword_14AA152E0[v4 + 533] + 535 + v4] = a3;
    result = (_DWORD *)(v4 * 4 + 12LL * dword_14AA152E0[v4 + 533]);
    *(int *)((char *)&dword_14AA152E0[536] + (_QWORD)result) = a4;
    ++dword_14AA152E0[v4 + 533];
  }
  else
  {
    result = (_DWORD *)((char *)&unk_14AA15B40 + v4 * 4);
    while ( 1 )
    {
      v8 = *(result - 1);
      if ( a3 == v8 && a4 == *result )
        break;
      if ( a3 == *result && a4 == v8 )
        break;
      ++v5;
      result += 3;
      if ( v5 >= (int)v6 )
        goto LABEL_8;
    }
  }
  return result;
}

