/* Address: 0x1401fff34 | Name: sub_1401FFF34 | Size: 198 bytes */
__int64 __fastcall sub_1401FFF34(__int64 a1)
{
  __int64 v2; // rax
  char i; // al
  __int64 v4; // rax
  _BYTE *v5; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    v2 = sub_140204CC0(v9);
    sub_1401FE7EC(v2, (__int64)&v7, 123);
    for ( i = 0; ; i = 1 )
    {
      if ( i )
        sub_1401FE9BC((__int64)&v7, 44);
      v4 = sub_140204850(v9);
      sub_1401FE908((__int64)&v7, v4);
      if ( **(_BYTE **)&dword_140404A6C[19064555] != 64 )
        break;
      v5 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL);
      *(_QWORD *)&dword_140404A6C[19064555] = v5;
      if ( *v5 == 64 )
      {
        *(_QWORD *)&dword_140404A6C[19064555] = v5 + 1;
        sub_1401FE9BC((__int64)&v7, 125);
        *(_QWORD *)a1 = v7;
        *(_DWORD *)(a1 + 8) = v8;
        return a1;
      }
    }
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = &off_1402848D0;
  }
  return a1;
}

