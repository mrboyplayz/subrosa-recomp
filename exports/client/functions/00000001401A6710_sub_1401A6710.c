/* Address: 0x1401a6710 | Name: sub_1401A6710 | Size: 231 bytes */
__int64 __fastcall sub_1401A6710(
        int a1,
        unsigned int a2,
        signed int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        int a7)
{
  int v7; // xmm0_4
  void *v8; // rsp
  int v9; // r9d
  _DWORD v11[2]; // [rsp+30h] [rbp+0h] BYREF
  _DWORD *v12; // [rsp+38h] [rbp+8h]
  __int64 v13; // [rsp+40h] [rbp+10h]

  v8 = alloca(sub_1401F89D0());
  v12 = v11;
  sub_1401A2700((__int64)v11, a2, a3, a6);
  v11[0] = v7;
  sub_1401BA2F0((_DWORD)v12, a1, a2, v9, a7);
  sub_1401A5D70(a1, a2, -1, a5, a3, a4);
  v11[1] = sub_1401BA3A0(v12, a2, a5);
  return MEMORY[0x1401F8B20]((unsigned __int64)v11 ^ v13);
}

