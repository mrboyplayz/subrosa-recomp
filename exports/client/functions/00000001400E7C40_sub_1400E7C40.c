/* Address: 0x1400e7c40 | Name: sub_1400E7C40 | Size: 830 bytes */
__int64 __fastcall sub_1400E7C40(int a1, char *a2)
{
  __int64 v2; // rdi
  int v4; // r12d
  int v5; // r15d
  char *v6; // rdx
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r13
  unsigned int *v11; // r14
  __int64 v12; // rax
  void *v13; // rcx
  signed int v14; // ebp
  int v15; // edi
  int v16; // esi
  signed int v17; // esi
  int v18; // edi
  __int64 v20; // [rsp+0h] [rbp-288h] BYREF
  int Buffer; // [rsp+40h] [rbp-248h] BYREF
  int v22; // [rsp+44h] [rbp-244h]
  int v23; // [rsp+48h] [rbp-240h]
  char FileName[512]; // [rsp+50h] [rbp-238h] BYREF
  __int64 v25; // [rsp+250h] [rbp-38h]

  v2 = a1;
  v23 = a1;
  v22 = sub_14024C22C("data");
  v4 = v22;
  v5 = sub_14024C22C("item");
  v6 = (char *)(FileName - a2);
  do
  {
    v7 = *a2;
    a2[(_QWORD)v6] = *a2;
    ++a2;
  }
  while ( v7 );
  v8 = MEMORY[0x14020B8D8](FileName, "rb");
  v9 = v8;
  if ( v8 )
  {
    fread(&Buffer, 4, 1, v8);
    if ( Buffer != 2 )
    {
      if ( !v5 )
        sub_14024C22C("..");
      if ( !v4 )
        sub_14024C22C("..");
      sub_14020B9E8(v9);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v20 ^ v25);
    }
    v10 = 50 * v2;
    fread(&dword_140404A6C[50 * v2 + 272248205], 1, 64, v9);
    v11 = &dword_140404A6C[50 * v2 + 272248222];
    fread(v11, 4, 1, v9);
    free(*(void **)&dword_140404A6C[50 * v2 + 272248223]);
    v12 = j__malloc_base((int)(12 * *v11));
    v13 = *(void **)&dword_140404A6C[50 * v2 + 272248225];
    *(_QWORD *)&dword_140404A6C[50 * v2 + 272248223] = v12;
    free(v13);
    *(_QWORD *)&dword_140404A6C[50 * v2 + 272248225] = j__malloc_base((int)(8 * *v11));
    v14 = 0;
    if ( (int)*v11 > 0 )
    {
      v15 = 0;
      v16 = 0;
      do
      {
        fread(*(_QWORD *)&dword_140404A6C[v10 + 272248223] + 4LL * v16, 4, 3, v9);
        fread(*(_QWORD *)&dword_140404A6C[v10 + 272248225] + 4LL * v15, 4, 2, v9);
        ++v14;
        v16 += 3;
        v15 += 2;
      }
      while ( v14 < (int)*v11 );
      v4 = v22;
    }
    fread(&dword_140404A6C[v10 + 272248227], 4, 1, v9);
    free(*(void **)&dword_140404A6C[v10 + 272248229]);
    v17 = 0;
    *(_QWORD *)&dword_140404A6C[v10 + 272248229] = j__malloc_base((int)(12 * dword_140404A6C[v10 + 272248227]));
    if ( (int)dword_140404A6C[v10 + 272248227] > 0 )
    {
      v18 = 0;
      do
      {
        fread(*(_QWORD *)&dword_140404A6C[v10 + 272248229] + 4LL * v18, 4, 3, v9);
        ++v17;
        v18 += 3;
      }
      while ( v17 < (int)dword_140404A6C[v10 + 272248227] );
    }
    sub_14020B9E8(v9);
    LODWORD(v2) = v23;
  }
  if ( !v5 )
    sub_14024C22C("..");
  if ( !v4 )
    sub_14024C22C("..");
  sub_140158AB0(FileName, "data/item/%s", (const char *)&dword_140404A6C[50 * (int)v2 + 272248205]);
  sub_1400EDED0(dword_140404A6C[(int)v2 + 283830981], (unsigned int)FileName, 0, 33071, 33071, 9729, 9729, 0);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v20 ^ v25);
}

