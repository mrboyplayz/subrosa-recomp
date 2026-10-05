/* Address: 0x14012c890 | Name: sub_14012C890 | Size: 559 bytes */
__int64 __fastcall sub_14012C890(int a1, char *a2, int a3)
{
  __int64 v3; // rsi
  int v6; // r14d
  int v7; // r15d
  signed __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  unsigned int *v14; // rsi
  signed int i; // ebp
  __int64 v16; // rbx
  __int64 v18; // [rsp+0h] [rbp-268h] BYREF
  int v19[4]; // [rsp+20h] [rbp-248h] BYREF
  _BYTE v20[512]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v21; // [rsp+230h] [rbp-38h]

  v3 = a1;
  v6 = sub_14024C22C("data");
  v7 = sub_14024C22C("itemset");
  v8 = v20 - a2;
  do
  {
    v9 = *a2;
    a2[v8] = *a2;
    ++a2;
  }
  while ( v9 );
  if ( a3 || (v10 = MEMORY[0x14020B8D8](v20, "rb")) == 0 )
  {
    v11 = MEMORY[0x14020B8D8](v20, "wb");
    v12 = v11;
    if ( v11 )
    {
      v19[0] = 1;
      sub_14020CE0C(v19, 4, 1, v11);
      v13 = 3792 * v3;
      v14 = &dword_140404A6C[948 * v3 + 272299397];
      sub_14020CE0C(v14 + 19, 4, 1, v12);
      for ( i = 0; i < (int)v14[19]; ++i )
      {
        v16 = v13 + 116LL * i;
        sub_14020CE0C((char *)&dword_140404A6C[272299417] + v16, 1, 64, v12);
        sub_14020CE0C((char *)&dword_140404A6C[272299434] + v16, 4, 3, v12);
        sub_14020CE0C((char *)&dword_140404A6C[272299437] + v16, 4, 3, v12);
        sub_14020CE0C((char *)&dword_140404A6C[272299440] + v16, 4, 3, v12);
        sub_14020CE0C((char *)&dword_140404A6C[272299443] + v16, 4, 3, v12);
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
  return MEMORY[0x1401F8B20]((unsigned __int64)&v18 ^ v21);
}

