/* Address: 0x14009fef0 | Name: sub_14009FEF0 | Size: 287 bytes */
int *__fastcall sub_14009FEF0(int a1, int a2, int a3, int a4)
{
  __int64 v4; // r11
  unsigned __int64 v5; // r10
  int *result; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx

  v4 = a1;
  v5 = 188896LL * a1;
  result = (int *)(((unsigned __int16)*(_DWORD *)((char *)&unk_160F29960 + v5 + 146872) + 1) & 0x7FF);
  if ( (_DWORD)result != *(_DWORD *)((char *)&unk_160F29960 + v5 + 146880) )
  {
    v8 = 0;
    v9 = 0;
    result = &dword_160F49718[v5 / 4];
    while ( *result )
    {
      ++v8;
      ++v9;
      result += 4;
      if ( v9 >= 1024 )
        return result;
    }
    *((_DWORD *)&unk_160F29960 + 47224 * v4 + 4 * v8 + 32622) = 1;
    *(_DWORD *)((char *)&unk_160F29960 + 20 * *(int *)((char *)&unk_160F29960 + v5 + 146872) + v5 + 146884) = 0;
    *(_DWORD *)((char *)&unk_160F29960 + 20 * *(int *)((char *)&unk_160F29960 + v5 + 146872) + v5 + 146888) = v8;
    *(_DWORD *)((char *)&unk_160F29960 + 20 * *(int *)((char *)&unk_160F29960 + v5 + 146872) + v5 + 146892) = a2;
    *(_DWORD *)((char *)&unk_160F29960 + 20 * *(int *)((char *)&unk_160F29960 + v5 + 146872) + v5 + 146896) = a3;
    *(_DWORD *)((char *)&unk_160F29960 + 20 * *(int *)((char *)&unk_160F29960 + v5 + 146872) + v5 + 146900) = a4;
    result = (int *)(((unsigned __int16)*(_DWORD *)((char *)&unk_160F29960 + v5 + 146872) + 1) & 0x7FF);
    *(_DWORD *)((char *)&unk_160F29960 + v5 + 146872) = (_DWORD)result;
  }
  return result;
}

