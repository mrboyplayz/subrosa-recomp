/* Address: 0x140116210 | Name: sub_140116210 | Size: 665 bytes */
void sub_140116210()
{
  unsigned int *v0; // rax
  signed int v1; // r12d
  float *v2; // rdi
  float *v3; // rbx
  __int64 v4; // rsi
  float v5; // xmm1_4
  signed int v6; // edx
  signed int v7; // r9d
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // eax
  unsigned int *v13; // rdi
  int i; // r15d
  signed int j; // r14d
  signed int k; // esi
  int m; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int *v21; // rbx
  int v22; // ecx

  v0 = &dword_140404A6C[280658334];
  v1 = 0;
  do
  {
    *v0 = 0;
    v0 += 7166;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[282492830] );
  v2 = (float *)&dword_140404A6C[18215736];
  v3 = (float *)&dword_140404A6C[18215716];
  v4 = 0x2000;
  do
  {
    if ( *((_DWORD *)v3 - 7) && !*((_DWORD *)v3 - 5) )
    {
      v5 = v3[3] - 0.0027222224;
      v3[3] = v5;
      *(v3 - 1) = v3[2] + *(v3 - 1);
      *v3 = v5 + *v3;
      v3[1] = v3[4] + v3[1];
      sub_14012B2D0((__int64)(v2 - 12), v2 - 3, v2, v2 + 9);
    }
    v2 += 47;
    v3 += 47;
    --v4;
  }
  while ( v4 );
  sub_1401069C0();
  sub_1400B95E0();
  sub_1400C9D20();
  v6 = dword_140404A6C[111579651];
  v7 = 0;
  dword_140404A6C[421506989] = 0;
  if ( (int)dword_140404A6C[111579651] > 0 )
  {
    v8 = dword_140404A6C[111579652];
    v9 = dword_140404A6C[111579650];
    do
    {
      v10 = 0;
      if ( v8 > 0 )
      {
        do
        {
          v11 = 0;
          if ( v9 > 0 )
          {
            do
            {
              v12 = v11 + v9 * (v10 + v7 * v8);
              ++v11;
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[421506981] + 4LL * v12) = -1;
              v9 = dword_140404A6C[111579650];
              v8 = dword_140404A6C[111579652];
            }
            while ( v11 < (int)dword_140404A6C[111579650] );
          }
          ++v10;
        }
        while ( v10 < v8 );
        v6 = dword_140404A6C[111579651];
      }
      ++v7;
    }
    while ( v7 < v6 );
  }
  dword_140404A6C[421769134] = 0;
  v13 = &dword_140404A6C[278845967];
  for ( i = 0; i < 1024; ++i )
  {
    if ( *(v13 - 74) )
    {
      if ( dword_140404A6C[1268 * *(v13 - 69) + 278521288] )
      {
        for ( j = *(v13 - 2); j <= (int)v13[1]; ++j )
        {
          for ( k = *(v13 - 1); k <= (int)v13[2]; ++k )
          {
            for ( m = *(v13 - 3); m <= (int)*v13; ++m )
              sub_140037DE0(0, m, j, k, i | 0x8000);
          }
        }
      }
    }
    v13 += 1760;
  }
  sub_1401154D0();
  sub_140108930();
  sub_1400BE010();
  sub_1400CE370();
  sub_1400CC610();
  sub_14001D080();
  v21 = &dword_140404A6C[278845900];
  do
  {
    if ( *(v21 - 7) )
    {
      v22 = *v21;
      if ( (int)*v21 < 0xFFFF )
        *v21 = --v22;
      if ( v22 <= 0 )
        sub_14007F970(v1, v18, v19, v20);
    }
    ++v1;
    v21 += 1760;
  }
  while ( v1 < 1024 );
  sub_14010BE50();
  sub_140115830();
  sub_14001FB90();
}

