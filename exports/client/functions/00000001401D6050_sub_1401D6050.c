/* Address: 0x1401d6050 | Name: sub_1401D6050 | Size: 159 bytes */
__int64 __fastcall sub_1401D6050(_WORD *a1, __int64 a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-88h] BYREF
  int i; // [rsp+20h] [rbp-68h]
  _DWORD v6[16]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+70h] [rbp-18h]

  for ( i = 0; i < a3; ++i )
    v6[i] = sub_1401D11F0();
  sub_1401BC940(a1, (__int64)v6, a3);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v7);
}

