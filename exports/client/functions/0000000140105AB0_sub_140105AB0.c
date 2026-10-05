/* Address: 0x140105ab0 | Name: sub_140105AB0 | Size: 287 bytes */
unsigned int *__fastcall sub_140105AB0(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  unsigned int *result; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx

  v4 = a1;
  v5 = 47224LL * a1;
  result = (unsigned int *)(((unsigned __int16)dword_140404A6C[v5 + 438924123] + 1) & 0x7FF);
  if ( (_DWORD)result != dword_140404A6C[v5 + 438924125] )
  {
    v8 = 0;
    v9 = 0;
    result = &dword_140404A6C[v5 + 438920027];
    while ( *result )
    {
      ++v8;
      ++v9;
      result += 4;
      if ( v9 >= 1024 )
        return result;
    }
    dword_140404A6C[47224 * v4 + 438920027 + 4 * v8] = 1;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924126 + v5] = 0;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924127 + v5] = v8;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924128 + v5] = a2;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924129 + v5] = a3;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924130 + v5] = a4;
    result = (unsigned int *)(((unsigned __int16)dword_140404A6C[v5 + 438924123] + 1) & 0x7FF);
    dword_140404A6C[v5 + 438924123] = (unsigned int)result;
  }
  return result;
}

