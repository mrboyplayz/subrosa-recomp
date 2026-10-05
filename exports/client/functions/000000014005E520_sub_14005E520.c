/* Address: 0x14005e520 | Name: sub_14005E520 | Size: 825 bytes */
__int64 sub_14005E520()
{
  signed int v0; // r8d
  unsigned int *v1; // r10
  int v2; // r9d
  signed int v3; // edi
  int v4; // r11d
  int v5; // ebx
  int v6; // ecx
  unsigned int *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rbx
  int v14; // eax
  unsigned int *v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // r9d
  int v18; // ebx
  int v19; // esi
  unsigned int v20; // edi
  signed int v21; // edx
  unsigned int *v22; // rcx
  __int64 v24; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v25[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-28h]

  v0 = dword_140404A6C[179992853];
  v1 = &dword_140404A6C[283831589];
  v2 = 0;
  v3 = 0;
  dword_140404A6C[487148754] = 0;
  dword_140404A6C[283831504] = 0;
  v4 = 0;
  dword_140404A6C[283837377] = 0;
  dword_140404A6C[283843250] = 0;
  dword_140404A6C[487148679] = 0;
  do
  {
    v5 = *(v1 - 83);
    if ( v5 > 0 )
    {
      v6 = 0;
      v7 = v1;
      v8 = 16;
      do
      {
        if ( *(v7 - 1) )
        {
          if ( !*v7 && v0 < (int)v7[16] )
          {
            ++v6;
            if ( (int)v7[2] >= 2 )
              ++v6;
          }
        }
        v7 += 279;
        --v8;
      }
      while ( v8 );
      if ( v6 < 1 )
        goto LABEL_20;
      if ( v0 == 216000 * (v0 / 216000) )
      {
        v9 = 0;
        v10 = v1;
        v11 = 16;
        do
        {
          if ( *(v10 - 1) )
          {
            if ( !*v10 && v0 < (int)v10[16] )
            {
              ++v9;
              if ( (int)v10[2] >= 2 )
                ++v9;
            }
          }
          v10 += 279;
          --v11;
        }
        while ( v11 );
        if ( v9 < 2 )
        {
LABEL_20:
          dword_140404A6C[v3 + 487148680] = v4;
          v3 = dword_140404A6C[487148679] + 1;
          v2 = v5 + dword_140404A6C[487148754];
          ++dword_140404A6C[487148679];
          dword_140404A6C[487148754] += v5;
        }
      }
    }
    ++v4;
    v1 += 5873;
  }
  while ( v4 < 3 );
  if ( v3 > 0 )
    v2 /= v3;
  if ( v2 < 1 )
    v2 = 1;
  dword_140404A6C[487148754] = v2;
  if ( v3 )
  {
    if ( v3 > 1 )
    {
      v12 = 1024;
      do
      {
        v13 = rand() % (signed int)dword_140404A6C[487148679];
        v14 = rand();
        v15 = &dword_140404A6C[v13 + 487148677];
        v16 = v14 % (signed int)dword_140404A6C[487148679];
        v17 = dword_140404A6C[v16 + 487148680];
        dword_140404A6C[v16 + 487148680] = v15[3];
        v15[3] = v17;
        --v12;
      }
      while ( v12 );
      v3 = dword_140404A6C[487148679];
    }
    while ( 1 )
    {
      v18 = v3;
      if ( v3 > 0 )
        MEMORY[0x1401FC920](v25, &dword_140404A6C[487148680]);
      v19 = 1;
      if ( v3 >= 2 && (rand() & 7u) < 6 )
      {
        v19 = 0;
        if ( (rand() & 1) == 0 && v3 > 3 )
          v18 = 3;
        if ( (rand() & 0xF) == 0 && v18 > 2 )
          break;
      }
      if ( v18 != 3 || (rand() & 3) != 0 )
      {
        if ( v19 == 1 )
        {
          if ( (rand() & 3u) < 2 && v18 > 3 )
            v18 = 3;
          if ( (rand() & 3) == 0 && v18 > 2 )
            v18 = 2;
          if ( (rand() & 3) == 0 && v18 > 1 )
            v18 = 1;
          sub_140059640(1, (unsigned int)v18, v25);
          goto LABEL_56;
        }
        goto LABEL_55;
      }
      sub_140059920(3, 3, v25);
LABEL_56:
      v20 = dword_140404A6C[487148679];
      ++dword_140404A6C[283785906];
      v21 = 0;
      if ( (signed int)(dword_140404A6C[487148679] - v18) > 0 )
      {
        v22 = &dword_140404A6C[487148680];
        do
        {
          ++v21;
          *v22 = v22[v18];
          ++v22;
          v20 = dword_140404A6C[487148679];
        }
        while ( v21 < (signed int)(dword_140404A6C[487148679] - v18) );
      }
      v3 = v20 - v18;
      dword_140404A6C[487148679] = v3;
      if ( v3 <= 0 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v24 ^ v26);
    }
    v18 = 2;
LABEL_55:
    sub_14005A0E0(0, v18, v25);
    goto LABEL_56;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v24 ^ v26);
}

