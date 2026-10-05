/* Address: 0x14016f470 | Name: sub_14016F470 | Size: 285 bytes */
__int64 __fastcall sub_14016F470(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v13; // [rsp+0h] [rbp-878h] BYREF
  _BYTE v14[2048]; // [rsp+20h] [rbp-858h] BYREF
  __int64 v15; // [rsp+820h] [rbp-58h]

  v4 = a1;
  v5 = a2 * (__int64)a4;
  if ( a3 >> 1 > 0 )
  {
    v6 = a1 + v5 * (a3 - 1);
    v7 = (unsigned int)(a3 >> 1);
    do
    {
      v8 = v4;
      v9 = v6;
      v10 = v5;
      if ( v5 )
      {
        do
        {
          v11 = 2048;
          if ( v10 < 0x800 )
            v11 = v10;
          MEMORY[0x1401FC920](v14, v8);
          MEMORY[0x1401FC920](v8, v9);
          MEMORY[0x1401FC920](v9, v14);
          v8 += v11;
          v9 += v11;
          v10 -= v11;
        }
        while ( v10 );
      }
      v4 += v5;
      v6 -= v5;
      --v7;
    }
    while ( v7 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v13 ^ v15);
}

