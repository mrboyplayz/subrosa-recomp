/* Address: 0x14025b8f8 | Name: setvbuf | Size: 156 bytes */
__int64 __fastcall setvbuf(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v8[5]; // [rsp+38h] [rbp-28h] BYREF
  char v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF
  int v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF

  v12 = a4;
  v11 = a3;
  v10 = a2;
  v5 = a1;
  if ( !a1 || (a3 & 0xFFFFFFBB) != 0 || a3 == 68 || (a3 & 0xFFFFFFBF) == 0 && (unsigned __int64)(a4 - 2) > 0x7FFFFFFD )
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  else
  {
    v6 = a1;
    v8[0] = &v12;
    v7 = a1;
    v8[1] = &v5;
    v8[2] = &v11;
    v8[3] = &v10;
    return sub_14025B758((__int64)&v9, &v7, (__int64)v8, &v6);
  }
}

