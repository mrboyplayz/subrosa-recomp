/* Address: 0x1400d2b90 | Name: sub_1400D2B90 | Size: 243 bytes */
__int64 __fastcall sub_1400D2B90(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // r8
  _DWORD v5[10]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v1 = a1;
  v7 = xmmword_140279700;
  unk_140404470(2, &v7);
  unk_140404170(34963, dword_140404A6C[2 * dword_140404A6C[283791483] + 283793814], v2);
  unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v1 + 283791496] + 283793813], v3);
  unk_1404044A8(0, 3, 5126);
  v6 = 12;
  v5[8] = 24;
  unk_1404044A8(1, 3, 5126);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))&flt_140384000[131076])(4, 3 * dword_140404A6C[271911768], 5125);
  return MEMORY[0x1401F8B20]((unsigned __int64)v5 ^ v8);
}

