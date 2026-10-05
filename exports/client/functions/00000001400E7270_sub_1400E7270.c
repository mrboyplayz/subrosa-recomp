/* Address: 0x1400e7270 | Name: sub_1400E7270 | Size: 402 bytes */
__int64 __fastcall sub_1400E7270(int a1, char *a2)
{
  __int64 v2; // rsi
  int v4; // r15d
  int v5; // r12d
  signed __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  unsigned int *v11; // rbp
  signed int i; // esi
  __int64 v13; // rbx
  __int64 v15; // [rsp+0h] [rbp-268h] BYREF
  _DWORD Buffer[4]; // [rsp+20h] [rbp-248h] BYREF
  _BYTE v17[512]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v18; // [rsp+230h] [rbp-38h]

  v2 = a1;
  v4 = sub_14024C22C("data");
  v5 = sub_14024C22C("mission");
  v6 = v17 - a2;
  do
  {
    v7 = *a2;
    a2[v6] = *a2;
    ++a2;
  }
  while ( v7 );
  v8 = MEMORY[0x14020B8D8](v17, "rb");
  v9 = v8;
  if ( v8 )
  {
    fread(Buffer, 4, 1, v8);
    if ( Buffer[0] != 1 )
    {
      sub_14020B9E8(v9);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v15 ^ v18);
    }
    v10 = 4100 * v2;
    v11 = &dword_140404A6C[1025 * v2 + 486132853];
    fread(v11, 4, 1, v9);
    for ( i = 0; i < (int)*v11; ++i )
    {
      v13 = v10 + 16LL * i;
      fread((char *)&dword_140404A6C[486132854] + v13, 4, 3, v9);
      fread((char *)&dword_140404A6C[486132857] + v13, 4, 1, v9);
    }
    sub_14020B9E8(v9);
  }
  if ( !v5 )
    sub_14024C22C("..");
  if ( !v4 )
    sub_14024C22C("..");
  return MEMORY[0x1401F8B20]((unsigned __int64)&v15 ^ v18);
}

