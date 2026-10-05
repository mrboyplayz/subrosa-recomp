/* Address: 0x14020ce0c | Name: sub_14020CE0C | Size: 129 bytes */
__int64 __fastcall sub_14020CE0C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = a2;
  v10 = a1;
  if ( !a2 || !a3 )
    return 0;
  if ( !a4 )
  {
    *errno() = 22;
    sub_14024CF6C(v4);
    return 0;
  }
  v7 = a4;
  v9[0] = &v13;
  v8 = a4;
  v9[1] = &v10;
  v9[2] = &v11;
  v9[3] = &v12;
  return sub_14020CB28((__int64)v6, &v8, (__int64)v9, &v7);
}

