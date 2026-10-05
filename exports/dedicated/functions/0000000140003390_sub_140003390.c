/* Address: 0x140003390 | Name: sub_140003390 | Size: 180 bytes */
__int64 __fastcall sub_140003390(unsigned int a1, int a2, int a3, int a4, unsigned int a5, int a6, int a7)
{
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r8

  v10 = (int)a1;
  result = sub_1400505B0(a1);
  if ( (_DWORD)result != -1 )
  {
    v12 = 5LL * (int)result;
    v13 = 188896 * v10 + 8 * v12;
    *(_DWORD *)((char *)&unk_160F29960 + v13 + 124) = a6;
    *(_DWORD *)((char *)&unk_160F29960 + v13 + 128) = a7;
    *(_DWORD *)((char *)&unk_160F29960 + v13 + 92) = 1;
    *(_DWORD *)((char *)&unk_160F29960 + v13 + 96) = a2;
    *(_DWORD *)((char *)&unk_160F29960 + v13 + 100) = a3;
    *(_DWORD *)((char *)&unk_160F29960 + v13 + 104) = a4;
    *(_DWORD *)((char *)&unk_160F29960 + v13 + 108) = a5;
    return a5;
  }
  return result;
}

