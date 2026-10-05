/* Address: 0x14016f590 | Name: sub_14016F590 | Size: 408 bytes */
void __fastcall sub_14016F590(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v5; // r10d
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r9
  int v9; // edx
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rbp
  unsigned __int64 v15; // r14
  __int64 v16; // rdi
  __int64 v17; // [rsp+0h] [rbp-888h] BYREF
  int v18; // [rsp+20h] [rbp-868h]
  int v19; // [rsp+24h] [rbp-864h]
  __int64 v20; // [rsp+28h] [rbp-860h]
  __int64 v21; // [rsp+30h] [rbp-858h]
  __int64 v22; // [rsp+38h] [rbp-850h]
  _BYTE v23[2048]; // [rsp+40h] [rbp-848h] BYREF
  __int64 v24; // [rsp+840h] [rbp-48h]

  if ( a4 > 0 )
  {
    v5 = a5 * a2 * a3;
    v6 = a5 * (__int64)a2;
    v20 = v5;
    v7 = (unsigned int)a4;
    v8 = v5;
    v9 = a3 >> 1;
    v22 = v7;
    v19 = a3;
    v21 = a1;
    v18 = a3 >> 1;
    do
    {
      if ( v9 > 0 )
      {
        v10 = (unsigned int)v9;
        v11 = a1;
        v12 = a1 + v6 * (a3 - 1);
        do
        {
          v13 = v11;
          v14 = v12;
          v15 = v6;
          if ( v6 )
          {
            do
            {
              v16 = 2048;
              if ( v15 < 0x800 )
                v16 = v15;
              MEMORY[0x1401FC920](v23, v13);
              MEMORY[0x1401FC920](v13, v14);
              MEMORY[0x1401FC920](v14, v23);
              v13 += v16;
              v14 += v16;
              v15 -= v16;
            }
            while ( v15 );
          }
          v11 += v6;
          v12 -= v6;
          --v10;
        }
        while ( v10 );
        a1 = v21;
        v9 = v18;
        v7 = v22;
        a3 = v19;
        v8 = v20;
      }
      a1 += v8;
      --v7;
      v21 = a1;
      v22 = v7;
    }
    while ( v7 );
    MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v24);
  }
}

