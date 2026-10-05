/* Address: 0x14013c6e0 | Name: sub_14013C6E0 | Size: 576 bytes */
__int64 sub_14013C6E0()
{
  int v0; // esi
  __int64 v1; // rax
  int v2; // ecx
  unsigned int *v3; // rdi
  __int64 v4; // rbx
  char *v5; // rdx
  unsigned int *v6; // rcx
  char v7; // al
  int v8; // eax
  int v9; // eax
  int v10; // r9d
  __int64 v11; // r8
  __int64 v12; // rax
  char *v13; // rcx
  char v14; // dl
  char v15; // dl
  char v16; // dl
  signed int v17; // r8d
  unsigned int *v18; // r10
  __int64 v19; // r11
  unsigned int *v20; // rdx
  char v21; // al
  __int64 v23; // [rsp+0h] [rbp-168h] BYREF
  _BYTE v24[36]; // [rsp+20h] [rbp-148h] BYREF
  char v25; // [rsp+44h] [rbp-124h] BYREF
  __int64 v26; // [rsp+150h] [rbp-18h]

  v0 = sub_14024C22C("texture");
  v1 = sub_14023A198("*.png", v24);
  v2 = 0;
  v3 = &dword_140404A6C[293119326];
  dword_140404A6C[293119325] = 0;
  v4 = v1;
  if ( (_DWORD)v1 != -1 )
  {
    do
    {
      if ( v2 >= 1024 )
        break;
      if ( (v24[0] & 0x10) == 0 )
      {
        v5 = &v25;
        v6 = &dword_140404A6C[16 * (__int64)v2 + 293119326];
        do
        {
          v7 = *v5++;
          *(_BYTE *)v6 = v7;
          v6 = (unsigned int *)((char *)v6 + 1);
        }
        while ( v7 );
        ++dword_140404A6C[293119325];
      }
      v8 = sub_14023A5C4(v4, v24);
      v2 = dword_140404A6C[293119325];
    }
    while ( v8 != -1 );
  }
  LOBYTE(dword_140404A6C[16 * (__int64)v2 + 293119326]) = 0;
  sub_140239CCC(v4);
  sub_14023AE00(&dword_140404A6C[293119326], (int)dword_140404A6C[293119325], 64, sub_14004C4C0);
  v9 = dword_140404A6C[293119325];
  v10 = 0;
  if ( (int)dword_140404A6C[293119325] > 0 )
  {
    v11 = 0;
    do
    {
      v12 = 0;
      v13 = (char *)&dword_140404A6C[v11 + 293119326] + 1;
      do
      {
        v14 = *(v13 - 1);
        if ( !v14 || v14 == 46 )
          break;
        if ( !*v13 || *v13 == 46 )
        {
          ++v12;
          break;
        }
        v15 = v13[1];
        if ( !v15 || v15 == 46 )
        {
          v12 += 2;
          break;
        }
        v16 = v13[2];
        if ( !v16 || v16 == 46 )
        {
          v12 += 3;
          break;
        }
        v12 += 4;
        v13 += 4;
      }
      while ( v12 < 64 );
      ++v10;
      *((_BYTE *)&dword_140404A6C[v11 + 293119326] + v12) = 0;
      v11 += 16;
      v9 = dword_140404A6C[293119325];
    }
    while ( v10 < (int)dword_140404A6C[293119325] );
  }
  if ( !v0 )
  {
    sub_14024C22C("..");
    v9 = dword_140404A6C[293119325];
  }
  v17 = dword_140404A6C[421784473];
  dword_140404A6C[421784253] = dword_140404A6C[421784473];
  dword_140404A6C[421784474] = 0;
  if ( v9 > 0 )
  {
    v18 = &dword_140404A6C[421784475];
    v19 = (unsigned int)v9;
    do
    {
      v20 = v3;
      do
      {
        v21 = *(_BYTE *)v20;
        *((_BYTE *)v20 + (_QWORD)&dword_140404A6C[421784739] + 184LL * v17 - (_QWORD)v3) = *(_BYTE *)v20;
        v20 = (unsigned int *)((char *)v20 + 1);
      }
      while ( v21 );
      *v18 = v17;
      v3 += 16;
      ++v18;
      ++dword_140404A6C[421784474];
      v17 = ++dword_140404A6C[421784253];
      --v19;
    }
    while ( v19 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v23 ^ v26);
}

