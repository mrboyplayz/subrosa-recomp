/* Address: 0x1401f5f20 | Name: sub_1401F5F20 | Size: 370 bytes */
__int64 __fastcall sub_1401F5F20(char *a1, int a2, int a3, int a4)
{
  __int64 v5; // [rsp+0h] [rbp-D8h] BYREF
  int i; // [rsp+40h] [rbp-98h]
  _BYTE v7[4]; // [rsp+44h] [rbp-94h] BYREF
  int v8; // [rsp+48h] [rbp-90h] BYREF
  int v9; // [rsp+4Ch] [rbp-8Ch]
  BOOL v10; // [rsp+50h] [rbp-88h]
  int v11; // [rsp+54h] [rbp-84h]
  int v12; // [rsp+58h] [rbp-80h]
  __int16 v13[48]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v14; // [rsp+C0h] [rbp-18h]

  v9 = 0;
  for ( i = 0; i < a3; ++i )
  {
    if ( a2 <= 0 )
      break;
    v10 = i != a3 - 1;
    v11 = sub_1401E99E0(a1, a2, v10, v7, 0, v13, nullptr, &v8);
    if ( v11 < 0 )
      break;
    v12 = sub_1401E2F80(a1, v8, a4);
    if ( i )
    {
      if ( v9 != v12 )
        break;
    }
    v9 = v12;
    a1 += v8;
    a2 -= v8;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v5 ^ v14);
}

