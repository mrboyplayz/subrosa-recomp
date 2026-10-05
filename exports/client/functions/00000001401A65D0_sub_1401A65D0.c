/* Address: 0x1401a65d0 | Name: sub_1401A65D0 | Size: 305 bytes */
__int64 __fastcall sub_1401A65D0(
        float *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8)
{
  int v8; // xmm0_4
  void *v9; // rsp
  int v10; // r9d
  _DWORD *v12; // [rsp+30h] [rbp+0h] BYREF
  int v13; // [rsp+38h] [rbp+8h]
  int v14; // [rsp+3Ch] [rbp+Ch]
  __int64 v15; // [rsp+40h] [rbp+10h]

  v9 = alloca(sub_1401F89D0());
  v12 = &v12;
  sub_1401A5D70((int)a1, a2, 1, a5, a3, a4);
  sub_1401A6000(a1, v12, a3, a2);
  v13 = v8;
  sub_1401A2610((__int64)v12, a2, a3, a6);
  if ( a8 )
  {
    sub_1401BA2F0((_DWORD)v12, (_DWORD)a1, a2, v10, a7);
    sub_1401A5D70((int)a1, a2, -1, a5, a3, a4);
  }
  v14 = sub_1401BA3A0(v12, a2, a5);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v15);
}

