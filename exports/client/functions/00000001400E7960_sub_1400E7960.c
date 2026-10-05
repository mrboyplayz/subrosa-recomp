/* Address: 0x1400e7960 | Name: sub_1400E7960 | Size: 725 bytes */
__int64 __fastcall sub_1400E7960(int a1, char *a2)
{
  __int64 v2; // rsi
  int v4; // r13d
  int v5; // r12d
  signed __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int *v10; // rbx
  signed int v11; // ebp
  __int64 v12; // rbx
  __int64 v13; // rsi
  signed int v14; // edi
  unsigned int *v15; // r11
  int v16; // r9d
  unsigned int *v17; // r10
  const char *v18; // rbx
  unsigned int *v19; // rax
  int v20; // ecx
  int v21; // edx
  __int64 v23; // [rsp+0h] [rbp-268h] BYREF
  int Buffer; // [rsp+20h] [rbp-248h] BYREF
  int v25; // [rsp+24h] [rbp-244h]
  _BYTE v26[512]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v27; // [rsp+230h] [rbp-38h]

  v2 = a1;
  v25 = sub_14024C22C("data");
  v4 = v25;
  v5 = sub_14024C22C("itemset");
  v6 = v26 - a2;
  do
  {
    v7 = *a2;
    a2[v6] = *a2;
    ++a2;
  }
  while ( v7 );
  v8 = MEMORY[0x14020B8D8](v26, "rb");
  v9 = v8;
  if ( v8 )
  {
    Buffer = 1;
    fread(&Buffer, 4, 1, v8);
    v10 = &dword_140404A6C[948 * v2 + 272299397];
    fread(v10 + 19, 4, 1, v9);
    v11 = 0;
    if ( (int)v10[19] > 0 )
    {
      do
      {
        v12 = 3792 * v2 + 116LL * v11;
        fread((char *)&dword_140404A6C[272299417] + v12, 1, 64, v9);
        fread((char *)&dword_140404A6C[272299434] + v12, 4, 3, v9);
        fread((char *)&dword_140404A6C[272299437] + v12, 4, 3, v9);
        fread((char *)&dword_140404A6C[272299440] + v12, 4, 3, v9);
        fread((char *)&dword_140404A6C[272299443] + v12, 4, 3, v9);
        ++v11;
      }
      while ( v11 < (int)dword_140404A6C[948 * v2 + 272299416] );
      v4 = v25;
    }
    sub_14020B9E8(v9);
  }
  if ( !v5 )
    sub_14024C22C("..");
  if ( !v4 )
    sub_14024C22C("..");
  v13 = 948 * v2;
  v14 = 0;
  if ( (int)dword_140404A6C[v13 + 272299416] > 0 )
  {
    v15 = &dword_140404A6C[v13 + 272299433];
    do
    {
      v16 = 0;
      v17 = &dword_140404A6C[278521297];
      v18 = (const char *)&dword_140404A6C[29 * v14 + 272299417 + v13];
      do
      {
        v19 = &dword_140404A6C[29 * v14 + 272299417 + v13];
        do
        {
          v20 = *((unsigned __int8 *)v19 + (char *)v17 - v18);
          v21 = *(unsigned __int8 *)v19 - v20;
          if ( v21 )
            break;
          v19 = (unsigned int *)((char *)v19 + 1);
        }
        while ( v20 );
        if ( !v21 )
          *v15 = v16;
        if ( !strcmp(v18, (const char *)v17 + 5072) )
          *v15 = v16 + 1;
        v16 += 2;
        v17 += 2536;
      }
      while ( v16 < 46 );
      ++v14;
      v15 += 29;
    }
    while ( v14 < (int)dword_140404A6C[v13 + 272299416] );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v23 ^ v27);
}

