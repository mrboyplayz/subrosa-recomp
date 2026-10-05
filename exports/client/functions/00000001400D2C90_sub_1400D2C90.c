/* Address: 0x1400d2c90 | Name: sub_1400D2C90 | Size: 287 bytes */
__int64 __fastcall sub_1400D2C90(int a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 result; // rax

  v3 = a1;
  if ( a1 != -1 )
  {
    v4 = a2;
    unk_140404170(34963, dword_140404A6C[2 * dword_140404A6C[a2 + 283791480] + 283793814], a3);
    unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v4 + 283791752] + 283793813], v5);
    unk_1404044A8(0, 3, 5126);
    unk_1404044A8(1, 3, 5126);
    unk_1404047F0(4, 3 * dword_140404A6C[24582 * v4 + 271838022], 5125);
    v6 = v3 + 8194 * v4;
    dword_140404A6C[3 * v6 + 271838029] = 4;
    return 3 * v6;
  }
  return result;
}

