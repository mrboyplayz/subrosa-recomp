/* Address: 0x140247200 | Name: sub_140247200 | Size: 72 bytes */
__int64 __fastcall sub_140247200(__int64 a1, __int64 a2)
{
  unsigned int v3; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v4[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v5; // [rsp+50h] [rbp+10h] BYREF
  __int64 v6; // [rsp+58h] [rbp+18h] BYREF
  char v7; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+28h] BYREF

  v6 = a2;
  v5 = a1;
  v4[0] = &v5;
  v4[1] = &v6;
  v8 = 2;
  v3 = 2;
  return sub_140246CC0((__int64)&v7, &v3, (__int64)v4, &v8);
}

