/* Address: 0x14023a9fc | Name: sub_14023A9FC | Size: 314 bytes */
__int64 __fastcall sub_14023A9FC(unsigned int a1, struct __crt_locale_pointers *a2)
{
  unsigned int v2; // r8d
  int v4; // ecx
  int *v5; // rax
  int v6; // eax
  __int64 v8; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v9[2]; // [rsp+58h] [rbp-18h] BYREF
  char v10; // [rsp+68h] [rbp-8h]
  char v11; // [rsp+80h] [rbp+10h] BYREF
  char v12; // [rsp+81h] [rbp+11h]
  char v13; // [rsp+82h] [rbp+12h]
  __int16 v14; // [rsp+90h] [rbp+20h] BYREF
  char v15; // [rsp+92h] [rbp+22h]

  v2 = -1;
  if ( a1 != -1 )
  {
    sub_140213644((_LocaleUpdate *)&v8, a2);
    if ( a1 >= 0x100 )
    {
      v13 = 0;
      if ( *(int *)(v9[0] + 8LL) > 1 && (unsigned int)isleadbyte_l(BYTE1(a1), v9) )
      {
        v11 = BYTE1(a1);
        v4 = 2;
        v12 = a1;
        v13 = 0;
      }
      else
      {
        v5 = errno();
        v4 = 1;
        *v5 = 42;
        v11 = a1;
        v12 = 0;
      }
      v14 = 0;
      v15 = 0;
      v6 = sub_14025A004(
             (unsigned int)v9,
             *(_QWORD *)(v9[0] + 312LL),
             256,
             (unsigned int)&v11,
             v4,
             (__int64)&v14,
             3,
             *(_DWORD *)(v9[0] + 12LL),
             1);
      if ( v6 )
      {
        v2 = (unsigned __int8)v14;
        if ( v6 != 1 )
          v2 = HIBYTE(v14) | ((unsigned __int8)v14 << 8);
      }
      else
      {
        v2 = a1;
      }
      if ( v10 )
        *(_DWORD *)(v8 + 936) &= ~2u;
    }
    else
    {
      v2 = *(unsigned __int8 *)(*(_QWORD *)(v9[0] + 272LL) + (unsigned __int8)a1);
      if ( v10 )
        *(_DWORD *)(v8 + 936) &= ~2u;
    }
  }
  return v2;
}

