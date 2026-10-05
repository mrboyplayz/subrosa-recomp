/* Address: 0x140205440 | Name: sub_140205440 | Size: 308 bytes */
__int64 __fastcall sub_140205440(__int64 a1)
{
  _BYTE *v2; // rcx
  char i; // al
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-60h] BYREF
  int v9; // [rsp+28h] [rbp-58h]
  _BYTE v10[16]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v12[16]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v13[16]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v14[16]; // [rsp+70h] [rbp-10h] BYREF

  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    sub_140204CC0((DName *)&v8);
    sub_1401FE9BC((__int64)&v8, 123);
    v2 = *(_BYTE **)&dword_140404A6C[19064555];
    for ( i = 0; ; i = 1 )
    {
      if ( i )
      {
        sub_1401FE9BC((__int64)&v8, 44);
        v2 = *(_BYTE **)&dword_140404A6C[19064555];
      }
      switch ( *v2 )
      {
        case '2':
          *(_QWORD *)&dword_140404A6C[19064555] = v2 + 1;
          v6 = sub_140205440(v14);
          break;
        case '3':
          *(_QWORD *)&dword_140404A6C[19064555] = v2 + 1;
          v6 = sub_1401FFF34((__int64)v13);
          break;
        case '4':
          *(_QWORD *)&dword_140404A6C[19064555] = v2 + 1;
          v6 = sub_1402042B4((__int64)v12);
          break;
        default:
          v4 = sub_140204CC0((DName *)v10);
          sub_1401FE908((__int64)&v8, v4);
          sub_1401FE9BC((__int64)&v8, 58);
          v6 = sub_140204850((DName *)v11, v5);
          break;
      }
      sub_1401FE908((__int64)&v8, v6);
      v2 = *(_BYTE **)&dword_140404A6C[19064555];
      if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
        break;
    }
    ++*(_QWORD *)&dword_140404A6C[19064555];
    sub_1401FE9BC((__int64)&v8, 125);
    *(_QWORD *)a1 = v8;
    *(_DWORD *)(a1 + 8) = v9;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = &off_1402848D0;
  }
  return a1;
}

