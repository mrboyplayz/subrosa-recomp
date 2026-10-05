/* Address: 0x14023a6e4 | Name: sub_14023A6E4 | Size: 275 bytes */
__int64 __fastcall sub_14023A6E4(unsigned int a1, int a2, struct __crt_locale_pointers *a3)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  int v6; // ecx
  int *v7; // rax
  int v8; // eax
  __int64 v9; // [rsp+50h] [rbp-20h] BYREF
  __int128 v10; // [rsp+58h] [rbp-18h] BYREF
  char v11; // [rsp+68h] [rbp-8h]
  char v12; // [rsp+90h] [rbp+20h] BYREF
  char v13; // [rsp+91h] [rbp+21h]
  char v14; // [rsp+92h] [rbp+22h]
  __int16 v15; // [rsp+A8h] [rbp+38h] BYREF
  char v16; // [rsp+AAh] [rbp+3Ah]

  result = 0xFFFFFFFFLL;
  v4 = a1;
  if ( a1 != -1 )
  {
    sub_140213644((_LocaleUpdate *)&v9, a3);
    if ( v4 >= 0x100 )
    {
      v14 = 0;
      if ( *(int *)(v10 + 8) > 1 && (unsigned int)isleadbyte_l(BYTE1(v4), &v10) )
      {
        v12 = BYTE1(v4);
        v6 = 2;
        v13 = v4;
        v14 = 0;
      }
      else
      {
        v7 = errno();
        v6 = 1;
        *v7 = 42;
        v12 = v4;
        v13 = 0;
      }
      v15 = 0;
      v16 = 0;
      v8 = sub_14025A004(
             (unsigned int)&v10,
             *(_QWORD *)(v10 + 312),
             a2,
             (unsigned int)&v12,
             v6,
             (__int64)&v15,
             3,
             *(_DWORD *)(v10 + 12),
             1);
      if ( v8 )
      {
        v4 = (unsigned __int8)v15;
        if ( v8 != 1 )
          v4 = HIBYTE(v15) | ((unsigned __int8)v15 << 8);
      }
    }
    else
    {
      v4 = *(unsigned __int8 *)(*(_QWORD *)(v10 + 272) + (unsigned __int8)v4);
    }
    if ( v11 )
      *(_DWORD *)(v9 + 936) &= ~2u;
    return v4;
  }
  return result;
}

