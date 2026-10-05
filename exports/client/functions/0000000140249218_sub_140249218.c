/* Address: 0x140249218 | Name: sub_140249218 | Size: 161 bytes */
__int64 __fastcall sub_140249218(unsigned int a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+20h] [rbp-40h] BYREF
  __int64 v5; // [rsp+28h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v7[5]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+70h] [rbp+10h] BYREF
  __int64 v9; // [rsp+78h] [rbp+18h] BYREF
  char v10; // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+88h] [rbp+28h] BYREF

  v9 = a2;
  v8 = a1;
  v4 = 0;
  v5 = 0;
  if ( a1 <= 5 )
  {
    v11 = sub_140255A70();
    sub_14024F91C();
    sub_140262ADC();
    *(_DWORD *)(v11 + 936) |= 0x10u;
    v6 = &v11;
    v7[0] = &v5;
    v7[1] = &v11;
    v7[2] = &v4;
    v7[3] = &v8;
    v7[4] = &v9;
    sub_140247F04((__int64)&v10, (__int64)&v10, (__int64)v7, (__int64 *)&v6);
    return v4;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v2);
    return 0;
  }
}

