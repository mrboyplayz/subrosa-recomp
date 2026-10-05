/* Address: 0x140020130 | Name: sub_140020130 | Size: 1095 bytes */
__int64 __fastcall sub_140020130(int a1)
{
  __int64 v2; // rsi
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  int v5; // edi
  unsigned int v6; // ecx
  int v7; // edx
  int i; // ebx
  unsigned int v9; // r10d
  bool v10; // zf
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // r14d
  int v14; // ebp
  unsigned int v15; // edi
  int v16; // ebx
  unsigned int v17; // edi
  unsigned int v18; // ebp
  int j; // ebx
  int v20; // ebp
  unsigned int v21; // edi
  int v22; // ebx
  int v23; // ebx
  unsigned int v24; // edi
  unsigned int v25; // ebp
  unsigned int v26; // r14d
  unsigned int v27; // ebx
  int v28; // r15d
  unsigned int v29; // edi
  __int64 v31; // [rsp+0h] [rbp-78h] BYREF
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+38h] [rbp-40h]
  __int64 v34; // [rsp+40h] [rbp-38h]

  v2 = 34LL * a1;
  v32 = 0x1000100010001LL;
  v33 = 0x1000100010001LL;
  v3 = dword_140404A6C[v2 + 225391232];
  v4 = dword_140404A6C[v2 + 225391241];
  v5 = v3 - dword_140404A6C[v2 + 225391243];
  if ( v5 < (int)(v4 + v3) )
  {
    v6 = dword_140404A6C[v2 + 225391230];
    v7 = v6 + dword_140404A6C[v2 + 225391240];
    do
    {
      for ( i = v6 - dword_140404A6C[v2 + 225391242]; i < v7; v7 = v6 + dword_140404A6C[v2 + 225391240] )
      {
        sub_14000F830(0, i++, dword_140404A6C[v2 + 225391231], v5, 0x40000000u, &v32);
        v6 = dword_140404A6C[v2 + 225391230];
      }
      v4 = dword_140404A6C[v2 + 225391241];
      ++v5;
      v3 = dword_140404A6C[v2 + 225391232];
    }
    while ( v5 < (int)(v4 + v3) );
  }
  v9 = dword_140404A6C[v2 + 225391238];
  v10 = dword_140404A6C[v2 + 225391236] == -1;
  v32 = 0;
  v33 = 0;
  v11 = !v10 + 1;
  if ( dword_140404A6C[v2 + 225391237] == -1 )
    v11 = !v10;
  v12 = v11 + 1;
  if ( v9 == -1 )
    v12 = v11;
  v13 = v12 + 1;
  if ( dword_140404A6C[v2 + 225391239] == -1 )
    v13 = v12;
  if ( dword_140404A6C[v2 + 225391236] == -1 )
  {
    v14 = dword_140404A6C[v2 + 225391230] + dword_140404A6C[v2 + 225391240];
    v15 = dword_140404A6C[v2 + 225391231];
    v16 = v3 - dword_140404A6C[v2 + 225391243] - 1;
    if ( v16 < (int)(v4 + v3 + 1) )
    {
      do
      {
        sub_14000F830(0, v14, v15 + 1, v16, dword_140404A6C[19928887] | 0x80000000, &v32);
        v3 = dword_140404A6C[v2 + 225391232];
        ++v16;
        v4 = dword_140404A6C[v2 + 225391241];
      }
      while ( v16 < (int)(v4 + v3 + 1) );
      v9 = dword_140404A6C[v2 + 225391238];
    }
  }
  if ( v9 == -1 )
  {
    v17 = dword_140404A6C[v2 + 225391230] - dword_140404A6C[v2 + 225391240];
    v18 = dword_140404A6C[v2 + 225391231];
    for ( j = v3 - dword_140404A6C[v2 + 225391243] - 1; j < (int)(v4 + v3 + 1); v4 = dword_140404A6C[v2 + 225391241] )
    {
      sub_14000F830(0, v17 - 1, v18 + 1, j, dword_140404A6C[19928887] | 0x80000000, &v32);
      v3 = dword_140404A6C[v2 + 225391232];
      ++j;
    }
  }
  if ( dword_140404A6C[v2 + 225391237] == -1 )
  {
    v20 = v4 + v3;
    v21 = dword_140404A6C[v2 + 225391231];
    v22 = dword_140404A6C[v2 + 225391230] - dword_140404A6C[v2 + 225391242] - 1;
    if ( v22 < (int)(dword_140404A6C[v2 + 225391240] + dword_140404A6C[v2 + 225391230] + 1) )
    {
      do
        sub_14000F830(0, v22++, v21 + 1, v20, dword_140404A6C[19928887] | 0x80000000, &v32);
      while ( v22 < (int)(dword_140404A6C[v2 + 225391230] + dword_140404A6C[v2 + 225391240] + 1) );
    }
  }
  if ( dword_140404A6C[v2 + 225391239] == -1 )
  {
    v23 = dword_140404A6C[v2 + 225391230] - dword_140404A6C[v2 + 225391242] - 1;
    v24 = dword_140404A6C[v2 + 225391232] - dword_140404A6C[v2 + 225391243];
    v25 = dword_140404A6C[v2 + 225391231];
    if ( v23 < (int)(dword_140404A6C[v2 + 225391240] + dword_140404A6C[v2 + 225391230] + 1) )
    {
      do
        sub_14000F830(0, v23++, v25 + 1, v24 - 1, dword_140404A6C[19928887] | 0x80000000, &v32);
      while ( v23 < (int)(dword_140404A6C[v2 + 225391230] + dword_140404A6C[v2 + 225391240] + 1) );
    }
  }
  if ( v13 > 2 )
  {
    v26 = dword_140404A6C[v2 + 225391230];
    v27 = dword_140404A6C[v2 + 225391232];
    v28 = a1 << 12;
    v29 = dword_140404A6C[v2 + 225391231] + 1;
    if ( dword_140404A6C[v2 + 225391238] != -1 )
      sub_140017260(0, v26 + dword_140404A6C[v2 + 225391240], v29, v27 + dword_140404A6C[v2 + 225391241], v28 | 1);
    if ( dword_140404A6C[v2 + 225391236] != -1 )
      sub_140017260(
        0,
        v26 - dword_140404A6C[v2 + 225391240] - 1,
        v29,
        v27 - dword_140404A6C[v2 + 225391241] - 1,
        v28 | 0x801);
    if ( dword_140404A6C[v2 + 225391239] != -1 )
      sub_140017260(
        0,
        v26 - dword_140404A6C[v2 + 225391240] - 1,
        v29,
        v27 + dword_140404A6C[v2 + 225391241],
        v28 | 0x1000401);
    if ( dword_140404A6C[v2 + 225391237] != -1 )
      sub_140017260(
        0,
        v26 + dword_140404A6C[v2 + 225391240],
        v29,
        v27 - dword_140404A6C[v2 + 225391241] - 1,
        v28 | 0x1000C01);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v31 ^ v34);
}

