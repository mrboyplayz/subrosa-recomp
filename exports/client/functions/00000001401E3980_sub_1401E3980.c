/* Address: 0x1401e3980 | Name: sub_1401E3980 | Size: 393 bytes */
__int64 __fastcall sub_1401E3980(__int64 a1, signed int a2, signed int a3)
{
  __int64 v4; // [rsp+0h] [rbp-258h] BYREF
  int v5; // [rsp+40h] [rbp-218h]
  _BYTE v6[4]; // [rsp+50h] [rbp-208h] BYREF
  int v7; // [rsp+54h] [rbp-204h]
  __int64 v8; // [rsp+240h] [rbp-18h]

  if ( a2 >= 1 && a2 != a3 && a2 <= a3 )
  {
    sub_1401E37F0(v6);
    MEMORY[0x1401FC920](a3 + a1 - a2, a1);
    v5 = sub_1401E3870((__int64)v6, a3 + a1 - a2, a2);
    if ( !v5 )
      v5 = sub_1401EA090((unsigned int)v6, 0, v7, a1, a3, 0, 1);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v8);
}

