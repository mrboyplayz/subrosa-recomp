/* Address: 0x14020da48 | Name: sub_14020DA48 | Size: 133 bytes */
__int64 __fastcall sub_14020DA48(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+70h] [rbp+10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+18h] BYREF
  __int64 v13; // [rsp+80h] [rbp+20h] BYREF
  __int64 v14; // [rsp+88h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v12 = a2;
  v11 = a1;
  if ( a2 && a3 )
  {
    v8 = a2;
    v10[0] = &v12;
    v9 = a2;
    v10[1] = &v14;
    v10[2] = &v11;
    v10[3] = &v13;
    v10[4] = &a5;
    return sub_14020D7C8((__int64)v7, &v9, (__int64)v10, &v8);
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v5);
    return 0xFFFFFFFFLL;
  }
}

