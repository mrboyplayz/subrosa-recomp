/* Address: 0x14006bb10 | Name: sub_14006BB10 | Size: 678 bytes */
void __noreturn sub_14006BB10()
{
  int v0; // r14d
  int v1; // r8d
  __int64 i; // r9
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int *v5; // rbx
  int v6; // r15d
  __int64 v7; // r12
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ebp
  unsigned int *v12; // rsi
  int j; // edi
  int v14; // r9d
  __int64 v15; // r10
  float *v16; // r8
  int v17; // eax
  float v18; // xmm0_4
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rax

  while ( 1 )
  {
    do
    {
      do
        MEMORY[0x140198E63](*(_QWORD *)&dword_140404A6C[1]);
      while ( !dword_140404A6C[7] );
    }
    while ( dword_140404A6C[10] == dword_140404A6C[9] );
    v0 = dword_140404A6C[8];
    v1 = 0;
    for ( i = 0; v1 < (int)dword_140404A6C[8]; v0 = dword_140404A6C[8] )
    {
      v3 = 2 * v1++;
      dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v3] = 0;
      v4 = i + ((__int64)(int)dword_140404A6C[10] << 15);
      ++i;
      dword_140404A6C[2 * v4 + 12] = 0;
    }
    dword_140404A6C[6] = 0;
    v5 = &dword_140404A6C[327772];
    v6 = 0;
    v7 = 0;
    do
    {
      if ( *(v5 - 75) )
      {
        v8 = *v5;
        if ( v0 > 0 )
        {
          v9 = (unsigned int)v0;
          do
          {
            v10 = v7 + v8;
            v8 = (v8 + 1) & 0x3FFFF;
            dword_140404A6C[v10 + 327773] = 0;
            --v9;
          }
          while ( v9 );
        }
        v11 = 0;
        v12 = v5 - 72;
        for ( j = 0; j < 8; ++j )
        {
          if ( *v12 && (unsigned int)sub_14006B4C0(v6, j, *v5, v0) )
            v11 = 1;
          v12 += 9;
        }
        *v5 = (v0 + *v5) & 0x3FFFF;
        sub_14006A5F0(v6, v0);
        v5[262145] = (v0 + v5[262145]) & 0x3FFFF;
        if ( !v11 && *((float *)v5 - 69) < *((float *)v5 + 278537) )
          *(v5 - 75) = 0;
        if ( *(v5 - 74) == 1 )
          *(v5 - 75) = 0;
        v0 = dword_140404A6C[8];
        v14 = 0;
        v15 = 0;
        if ( (int)dword_140404A6C[8] > 0 )
        {
          v16 = (float *)(v5 + 262147);
          do
          {
            v17 = 2 * v14++;
            *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v17] = *(v16 - 1)
                                                                                               + *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v17];
            v18 = *v16;
            v16 += 2;
            v19 = v15 + ((__int64)(int)dword_140404A6C[10] << 15);
            ++v15;
            *(float *)&dword_140404A6C[2 * v19 + 12] = v18 + *(float *)&dword_140404A6C[2 * v19 + 12];
            v0 = dword_140404A6C[8];
          }
          while ( v14 < (int)dword_140404A6C[8] );
        }
        ++dword_140404A6C[6];
      }
      ++v6;
      v7 += 278720;
      v5 += 278720;
    }
    while ( v6 < 64 );
    v20 = 0;
    v21 = 0;
    if ( v0 > 0 )
    {
      do
      {
        v22 = 2 * v20++;
        *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v22] = *(float *)&dword_140404A6C[18198666]
                                                                                           * *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v22];
        v23 = v21 + ((__int64)(int)dword_140404A6C[10] << 15);
        ++v21;
        *(float *)&dword_140404A6C[2 * v23 + 12] = *(float *)&dword_140404A6C[18198666]
                                                 * *(float *)&dword_140404A6C[2 * v23 + 12];
      }
      while ( v20 < (int)dword_140404A6C[8] );
    }
    dword_140404A6C[10] ^= 1u;
  }
}

