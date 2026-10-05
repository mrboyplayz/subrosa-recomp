/* Address: 0x14012cac0 | Name: sub_14012CAC0 | Size: 659 bytes */
__int64 __fastcall sub_14012CAC0(int a1, char *a2, int a3)
{
  __int64 v3; // rbp
  int v6; // r12d
  int v7; // r13d
  char *v8; // rdx
  char v9; // cl
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r15
  signed int v14; // ebx
  signed int v15; // r14d
  int v16; // edi
  int v17; // ebp
  int v18; // edi
  __int64 v20; // [rsp+0h] [rbp-268h] BYREF
  int v21; // [rsp+20h] [rbp-248h] BYREF
  int v22; // [rsp+24h] [rbp-244h]
  char FileName[512]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v24; // [rsp+230h] [rbp-38h]

  v3 = a1;
  v22 = sub_14024C22C("data");
  v6 = v22;
  v7 = sub_14024C22C("item");
  v8 = (char *)(FileName - a2);
  do
  {
    v9 = *a2;
    a2[(_QWORD)v8] = *a2;
    ++a2;
  }
  while ( v9 );
  if ( a3 || (v10 = MEMORY[0x14020B8D8](FileName, "rb")) == 0 )
  {
    v11 = MEMORY[0x14020B8D8](FileName, "wb");
    v12 = v11;
    if ( v11 )
    {
      v21 = 2;
      sub_14020CE0C(&v21, 4, 1, v11);
      v13 = 50 * v3;
      sub_14020CE0C(&dword_140404A6C[50 * v3 + 272248205], 1, 64, v12);
      sub_14020CE0C(&dword_140404A6C[50 * v3 + 272248222], 4, 1, v12);
      v14 = 0;
      v15 = 0;
      if ( (int)dword_140404A6C[50 * v3 + 272248222] > 0 )
      {
        v16 = 0;
        v17 = 0;
        do
        {
          sub_14020CE0C(*(_QWORD *)&dword_140404A6C[v13 + 272248223] + 4LL * v17, 4, 3, v12);
          sub_14020CE0C(*(_QWORD *)&dword_140404A6C[v13 + 272248225] + 4LL * v16, 4, 2, v12);
          ++v15;
          v17 += 3;
          v16 += 2;
        }
        while ( v15 < (int)dword_140404A6C[v13 + 272248222] );
        v6 = v22;
      }
      sub_14020CE0C(&dword_140404A6C[v13 + 272248227], 4, 1, v12);
      if ( (int)dword_140404A6C[v13 + 272248227] > 0 )
      {
        v18 = 0;
        do
        {
          sub_14020CE0C(*(_QWORD *)&dword_140404A6C[v13 + 272248229] + 4LL * v18, 4, 3, v12);
          ++v14;
          v18 += 3;
        }
        while ( v14 < (int)dword_140404A6C[v13 + 272248227] );
      }
      sub_14020B9E8(v12);
    }
    if ( !v7 )
      sub_14024C22C("..");
    if ( !v6 )
      sub_14024C22C("..");
  }
  else
  {
    sub_14020B9E8(v10);
    if ( !v7 )
      sub_14024C22C("..");
    if ( !v6 )
      sub_14024C22C("..");
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v20 ^ v24);
}

