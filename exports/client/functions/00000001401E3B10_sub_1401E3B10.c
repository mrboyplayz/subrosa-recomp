/* Address: 0x1401e3b10 | Name: sub_1401E3B10 | Size: 188 bytes */
__int64 __fastcall sub_1401E3B10(__int64 a1, signed int a2)
{
  __int64 v3; // [rsp+0h] [rbp-258h] BYREF
  int v4; // [rsp+40h] [rbp-218h]
  _BYTE v5[4]; // [rsp+50h] [rbp-208h] BYREF
  int v6; // [rsp+54h] [rbp-204h]
  __int64 v7; // [rsp+240h] [rbp-18h]

  if ( a2 >= 1 )
  {
    sub_1401E37F0(v5);
    v4 = sub_1401E3870((__int64)v5, a1, a2);
    if ( v4 >= 0 )
      v4 = sub_1401EA090((unsigned int)v5, 0, v6, a1, a2, 0, 0);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v3 ^ v7);
}

