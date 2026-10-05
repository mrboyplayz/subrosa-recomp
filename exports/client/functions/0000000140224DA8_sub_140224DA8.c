/* Address: 0x140224da8 | Name: sub_140224DA8 | Size: 139 bytes */
__int64 __fastcall sub_140224DA8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+70h] [rbp+10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+18h] BYREF
  __int64 v13; // [rsp+80h] [rbp+20h] BYREF
  __int64 v14; // [rsp+88h] [rbp+28h] BYREF

  v7 = a5;
  v12 = a4;
  v14 = a3;
  v11 = a2;
  v13 = a1;
  if ( a2 && a3 )
  {
    v8 = a2;
    v10[0] = &v11;
    v9 = a2;
    v10[1] = &v12;
    v10[2] = &v13;
    v10[3] = &v14;
    v10[4] = &v7;
    return sub_14020D6C8((__int64)&a5, &v9, (__int64)v10, &v8);
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v5);
    return 0xFFFFFFFFLL;
  }
}

