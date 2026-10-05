/* Address: 0x14017c540 | Name: sub_14017C540 | Size: 77 bytes */
__int64 __fastcall sub_14017C540(int a1, int a2, int a3, float a4, int a5, int a6, __int64 a7)
{
  _DWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]

  v8[1] = a5;
  v10 = a6;
  v11 = a7;
  *(float *)v8 = a4;
  v9 = 0;
  return sub_14017C590(a1, a2, a3, (unsigned int)v8, 1);
}

