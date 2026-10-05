/* Address: 0x14010c850 | Name: sub_14010C850 | Size: 169 bytes */
unsigned int *__fastcall sub_14010C850(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rbx
  int v5; // r10d
  __int64 v6; // r11
  unsigned int *result; // rax
  int v8; // ecx

  v4 = 24944LL * a1;
  v5 = 0;
  v6 = (int)dword_140404A6C[v4 + 346708250];
  if ( (int)v6 <= 0 )
  {
LABEL_8:
    dword_140404A6C[3 * v6 + 346708251 + v4] = a2;
    dword_140404A6C[3 * (int)dword_140404A6C[v4 + 346708250] + 346708252 + v4] = a3;
    result = (unsigned int *)(v4 * 4 + 12LL * (int)dword_140404A6C[v4 + 346708250]);
    *(unsigned int *)((char *)&dword_140404A6C[346708253] + (_QWORD)result) = a4;
    ++dword_140404A6C[v4 + 346708250];
  }
  else
  {
    result = &dword_140404A6C[v4 + 346708253];
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

