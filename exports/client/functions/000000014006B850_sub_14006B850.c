/* Address: 0x14006b850 | Name: sub_14006B850 | Size: 700 bytes */
void sub_14006B850()
{
  int v0; // esi
  int v1; // r8d
  int v2; // r14d
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int *v6; // rbx
  int v7; // r12d
  __int64 v8; // r13
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // r15d
  unsigned int *v13; // rbp
  int i; // edi
  int v15; // r9d
  __int64 v16; // r10
  float *v17; // r8
  int v18; // eax
  float v19; // xmm0_4
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rax

  if ( dword_140404A6C[7] && dword_140404A6C[10] != dword_140404A6C[9] )
  {
    v0 = 0;
    v1 = 0;
    v2 = dword_140404A6C[8];
    if ( (int)dword_140404A6C[8] > 0 )
    {
      v3 = 0;
      do
      {
        v4 = 2 * v1++;
        dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v4] = 0;
        v5 = v3 + ((__int64)(int)dword_140404A6C[10] << 15);
        ++v3;
        dword_140404A6C[2 * v5 + 12] = 0;
        v2 = dword_140404A6C[8];
      }
      while ( v1 < (int)dword_140404A6C[8] );
    }
    dword_140404A6C[6] = 0;
    v6 = &dword_140404A6C[327772];
    v7 = 0;
    v8 = 0;
    do
    {
      if ( *(v6 - 75) )
      {
        v9 = *v6;
        if ( v2 > 0 )
        {
          v10 = (unsigned int)v2;
          do
          {
            v11 = v8 + v9;
            v9 = (v9 + 1) & 0x3FFFF;
            dword_140404A6C[v11 + 327773] = 0;
            --v10;
          }
          while ( v10 );
        }
        v12 = 0;
        v13 = v6 - 72;
        for ( i = 0; i < 8; ++i )
        {
          if ( *v13 && (unsigned int)sub_14006B4C0(v7, i, *v6, v2) )
            v12 = 1;
          v13 += 9;
        }
        *v6 = (v2 + *v6) & 0x3FFFF;
        sub_14006A5F0(v7, v2);
        v6[262145] = (v2 + v6[262145]) & 0x3FFFF;
        if ( !v12 && *((float *)v6 - 69) < *((float *)v6 + 278537) )
          *(v6 - 75) = 0;
        if ( *(v6 - 74) == 1 )
          *(v6 - 75) = 0;
        v2 = dword_140404A6C[8];
        v15 = 0;
        v16 = 0;
        if ( (int)dword_140404A6C[8] > 0 )
        {
          v17 = (float *)(v6 + 262147);
          do
          {
            v18 = 2 * v15++;
            *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v18] = *(v17 - 1)
                                                                                               + *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v18];
            v19 = *v17;
            v17 += 2;
            v20 = v16 + ((__int64)(int)dword_140404A6C[10] << 15);
            ++v16;
            *(float *)&dword_140404A6C[2 * v20 + 12] = v19 + *(float *)&dword_140404A6C[2 * v20 + 12];
            v2 = dword_140404A6C[8];
          }
          while ( v15 < (int)dword_140404A6C[8] );
        }
        ++dword_140404A6C[6];
      }
      ++v7;
      v8 += 278720;
      v6 += 278720;
    }
    while ( v7 < 64 );
    if ( v2 > 0 )
    {
      v21 = 0;
      do
      {
        v22 = 2 * v0++;
        *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v22] = *(float *)&dword_140404A6C[18198666]
                                                                                           * *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v22];
        v23 = v21 + ((__int64)(int)dword_140404A6C[10] << 15);
        ++v21;
        *(float *)&dword_140404A6C[2 * v23 + 12] = *(float *)&dword_140404A6C[18198666]
                                                 * *(float *)&dword_140404A6C[2 * v23 + 12];
      }
      while ( v0 < (int)dword_140404A6C[8] );
    }
    dword_140404A6C[10] ^= 1u;
  }
}

