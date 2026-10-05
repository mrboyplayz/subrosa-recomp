/* Address: 0x14013cdf0 | Name: sub_14013CDF0 | Size: 960 bytes */
__int64 sub_14013CDF0()
{
  __int64 v0; // rax
  int v1; // ecx
  __int64 v2; // rbx
  char *v3; // rdx
  unsigned int *v4; // rcx
  char v5; // al
  int v6; // eax
  int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // rax
  char *v10; // rcx
  char v11; // dl
  char v12; // dl
  char v13; // dl
  __int64 v14; // rax
  int v15; // ebp
  int v16; // eax
  int v17; // esi
  int v18; // r15d
  unsigned int *v19; // r14
  const char *v20; // rdi
  unsigned int *v21; // rbx
  signed __int64 v22; // rcx
  char v23; // al
  signed int v24; // r9d
  signed int v25; // r11d
  unsigned int *v26; // r10
  unsigned int *v27; // rcx
  signed __int64 v28; // r8
  int v29; // eax
  int v30; // edx
  __int64 v32; // [rsp+0h] [rbp-598h] BYREF
  int v33; // [rsp+20h] [rbp-578h]
  _BYTE v34[36]; // [rsp+30h] [rbp-568h] BYREF
  char v35; // [rsp+54h] [rbp-544h] BYREF
  _BYTE v36[1024]; // [rsp+160h] [rbp-438h] BYREF
  __int64 v37; // [rsp+560h] [rbp-38h]

  dword_140404A6C[284024395] = 1140850688;
  dword_140404A6C[284024397] = 1145044992;
  dword_140404A6C[284024396] = 1115684864;
  *(_QWORD *)&dword_140404A6C[309078331] = -1;
  dword_140404A6C[309078330] = -1;
  dword_140404A6C[309078326] = -1;
  sub_140158AB0(v36, "data/%s/building/*.sbb", (const char *)&dword_140404A6C[283831313]);
  v0 = sub_14023A198(v36, v34);
  v1 = 0;
  dword_140404A6C[293119325] = 0;
  v2 = v0;
  if ( (_DWORD)v0 != -1 )
  {
    do
    {
      if ( v1 >= 1024 )
        break;
      if ( (v34[0] & 0x10) == 0 )
      {
        v3 = &v35;
        v4 = &dword_140404A6C[16 * (__int64)v1 + 293119326];
        do
        {
          v5 = *v3++;
          *(_BYTE *)v4 = v5;
          v4 = (unsigned int *)((char *)v4 + 1);
        }
        while ( v5 );
        ++dword_140404A6C[293119325];
      }
      v6 = sub_14023A5C4(v2, v34);
      v1 = dword_140404A6C[293119325];
    }
    while ( v6 != -1 );
  }
  LOBYTE(dword_140404A6C[16 * (__int64)v1 + 293119326]) = 0;
  sub_140239CCC(v2);
  sub_14023AE00(&dword_140404A6C[293119326], (int)dword_140404A6C[293119325], 64, sub_14004C4C0);
  v7 = 0;
  if ( (int)dword_140404A6C[293119325] > 0 )
  {
    v8 = 0;
    do
    {
      v9 = 0;
      v10 = (char *)&dword_140404A6C[v8 + 293119326] + 1;
      do
      {
        v11 = *(v10 - 1);
        if ( !v11 || v11 == 46 )
          break;
        if ( !*v10 || *v10 == 46 )
        {
          ++v9;
          break;
        }
        v12 = v10[1];
        if ( !v12 || v12 == 46 )
        {
          v9 += 2;
          break;
        }
        v13 = v10[2];
        if ( !v13 || v13 == 46 )
        {
          v9 += 3;
          break;
        }
        v9 += 4;
        v10 += 4;
      }
      while ( v9 < 64 );
      v14 = v8 * 4 + v9;
      ++v7;
      v8 += 16;
      *((_BYTE *)&dword_140404A6C[293119326] + v14) = 0;
    }
    while ( v7 < (int)dword_140404A6C[293119325] );
  }
  v33 = sub_14024C22C("data");
  v15 = v33;
  v16 = sub_14024C22C(&dword_140404A6C[283831313]);
  v17 = 0;
  dword_140404A6C[309078327] = dword_140404A6C[293119325];
  v18 = v16;
  if ( (int)dword_140404A6C[293119325] > 0 )
  {
    v19 = &dword_140404A6C[225368670];
    do
    {
      v20 = (const char *)&dword_140404A6C[16 * (__int64)v17 + 293119326];
      asset_load_building_sbb_candidate((char *)&dword_140404A6C[456856205], v20, 1);
      v21 = &dword_140404A6C[22 * v17 + 225368653];
      v22 = (char *)v21 - v20;
      do
      {
        v23 = *v20;
        v20[v22] = *v20;
        ++v20;
      }
      while ( v23 );
      v24 = 0;
      *(v19 - 1) = dword_140404A6C[456856221];
      *v19 = dword_140404A6C[456856222];
      v19[1] = dword_140404A6C[456856223];
      v19[2] = dword_140404A6C[456856224];
      v19[3] = dword_140404A6C[456856225];
      v19[4] = dword_140404A6C[456856226];
      v25 = dword_140404A6C[225171849];
      if ( (int)dword_140404A6C[225171849] > 0 )
      {
        v26 = &dword_140404A6C[225171850];
        do
        {
          v27 = &dword_140404A6C[24 * v24 + 225171851];
          v28 = (char *)v21 - (char *)v27;
          do
          {
            v29 = *((unsigned __int8 *)v27 + v28);
            v30 = *(unsigned __int8 *)v27 - v29;
            if ( v30 )
              break;
            v27 = (unsigned int *)((char *)v27 + 1);
          }
          while ( v29 );
          if ( !v30 )
          {
            *v26 = v17;
            v25 = dword_140404A6C[225171849];
          }
          ++v24;
          v26 += 24;
        }
        while ( v24 < v25 );
      }
      ++v17;
      v19 += 22;
    }
    while ( v17 < (int)dword_140404A6C[293119325] );
    v15 = v33;
  }
  if ( !v18 )
    sub_14024C22C("..");
  if ( !v15 )
    sub_14024C22C("..");
  return MEMORY[0x1401F8B20]((unsigned __int64)&v32 ^ v37);
}

