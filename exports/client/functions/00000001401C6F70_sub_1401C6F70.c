/* Address: 0x1401c6f70 | Name: sub_1401C6F70 | Size: 522 bytes */
__int64 __fastcall sub_1401C6F70(__int16 *a1, char *a2, __int64 a3)
{
  __int64 v4; // [rsp+0h] [rbp-B8h] BYREF
  int i; // [rsp+30h] [rbp-88h]
  int v6; // [rsp+34h] [rbp-84h]
  int v7; // [rsp+38h] [rbp-80h]
  int v8; // [rsp+3Ch] [rbp-7Ch]
  __int64 v9; // [rsp+40h] [rbp-78h]
  __int64 v10; // [rsp+48h] [rbp-70h]
  _BYTE v11[16]; // [rsp+50h] [rbp-68h] BYREF
  _WORD v12[16]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v13[32]; // [rsp+80h] [rbp-38h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-18h]

  sub_1401C6E20((__int64)v13, (__int64)v11, a3, *a2);
  sub_1401D6F30((unsigned int)v12, (_DWORD)a2 + 1, (unsigned int)v11, *(__int16 *)(a3 + 4), *(_WORD *)(a3 + 2));
  v10 = *(__int16 *)(a3 + 2) * *a2 + *(_QWORD *)(a3 + 8);
  v9 = *(_QWORD *)(a3 + 16) + 2LL * *(__int16 *)(a3 + 2) * *a2;
  for ( i = 0; i < *(__int16 *)(a3 + 2); ++i )
  {
    v6 = (*(unsigned __int8 *)(v10 + i) << 7) + ((__int16)v12[i] << 14) / *(__int16 *)(v9 + 2LL * i);
    if ( v6 <= 0x7FFF )
    {
      if ( v6 >= 0 )
        v7 = v6;
      else
        v7 = 0;
      v8 = v7;
    }
    else
    {
      v8 = 0x7FFF;
    }
    a1[i] = v8;
  }
  sub_1401BD8C0(a1, *(__int16 **)(a3 + 64), *(__int16 *)(a3 + 2));
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v14);
}

