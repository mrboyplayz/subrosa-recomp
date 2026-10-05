/* Address: 0x14010c900 | Name: sub_14010C900 | Size: 327 bytes */
__int64 __fastcall sub_14010C900(
        int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 result; // rax

  v8 = 24944LL * a1;
  v9 = 1559LL * a1;
  dword_140404A6C[16 * v9 + 346709020 + 16 * (int)dword_140404A6C[v8 + 346709019]] = a2;
  dword_140404A6C[16 * v9 + 346709021 + 16 * (int)dword_140404A6C[v8 + 346709019]] = a3;
  dword_140404A6C[16 * v9 + 346709022 + 16 * (int)dword_140404A6C[v8 + 346709019]] = a4;
  dword_140404A6C[16 * v9 + 346709023 + 16 * (int)dword_140404A6C[v8 + 346709019]] = a5;
  dword_140404A6C[16 * v9 + 346709024 + 16 * (int)dword_140404A6C[v8 + 346709019]] = a6;
  dword_140404A6C[16 * v9 + 346709025 + 16 * (int)dword_140404A6C[v8 + 346709019]] = -1;
  dword_140404A6C[16 * v9 + 346709026 + 16 * (int)dword_140404A6C[v8 + 346709019]] = -1;
  dword_140404A6C[16 * v9 + 346709027 + 16 * (int)dword_140404A6C[v8 + 346709019]] = -1;
  dword_140404A6C[16 * v9 + 346709028 + 16 * (int)dword_140404A6C[v8 + 346709019]] = -1;
  dword_140404A6C[16 * v9 + 346709033 + 16 * (int)dword_140404A6C[v8 + 346709019]] = a7;
  result = (v9 + (int)dword_140404A6C[v8 + 346709019]) << 6;
  *(unsigned int *)((char *)&dword_140404A6C[346709034] + result) = a8;
  ++dword_140404A6C[v8 + 346709019];
  return result;
}

