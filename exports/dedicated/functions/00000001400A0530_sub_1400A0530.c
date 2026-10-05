/* Address: 0x1400a0530 | Name: sub_1400A0530 | Size: 111 bytes */
__int64 __fastcall sub_1400A0530(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = 188896LL * a1;
  v3 = *(int *)((char *)&unk_160F29960 + v2 + 146872);
  result = ((_WORD)v3 + 1) & 0x7FF;
  if ( (_DWORD)result != *(_DWORD *)((char *)&unk_160F29960 + v2 + 146880) )
  {
    *(_DWORD *)((char *)&unk_160F29960 + 20 * v3 + v2 + 146884) = 1;
    *(_DWORD *)((char *)&unk_160F29960 + 20 * *(int *)((char *)&unk_160F29960 + v2 + 146872) + v2 + 146888) = a2;
    result = ((unsigned __int16)*(_DWORD *)((char *)&unk_160F29960 + v2 + 146872) + 1) & 0x7FF;
    *(_DWORD *)((char *)&unk_160F29960 + v2 + 146872) = result;
  }
  return result;
}

