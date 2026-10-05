/* Address: 0x1401e3be0 | Name: sub_1401E3BE0 | Size: 398 bytes */
__int64 __fastcall sub_1401E3BE0(__int64 a1, int a2, int a3, int a4)
{
  __int64 v5; // [rsp+0h] [rbp-D8h] BYREF
  char v6; // [rsp+40h] [rbp-98h] BYREF
  int i; // [rsp+44h] [rbp-94h]
  int v8; // [rsp+48h] [rbp-90h]
  int v9; // [rsp+4Ch] [rbp-8Ch] BYREF
  int v10; // [rsp+50h] [rbp-88h]
  char v11[96]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v12; // [rsp+C0h] [rbp-18h]
  signed int v14; // [rsp+E8h] [rbp+10h]

  v14 = a2;
  if ( a2 >= 1 && a2 != a3 && a2 <= a3 )
  {
    v10 = a3 - a2;
    for ( i = 0; i < a4 - 1; ++i )
    {
      if ( v14 <= 0 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v5 ^ v12);
      v8 = sub_1401E99E0(a1, v14, 1, (unsigned int)&v6, 0, (__int64)v11, 0, (__int64)&v9);
      if ( v8 < 0 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v5 ^ v12);
      a1 += v9;
      v14 -= v9;
    }
    sub_1401E3980(a1, v14, v10 + v14);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v5 ^ v12);
}

