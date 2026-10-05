/* Address: 0x1400d12e0 | Name: sub_1400D12E0 | Size: 1168 bytes */
unsigned int *sub_1400D12E0()
{
  unsigned int *v0; // r12
  int v1; // r15d
  int i; // r14d
  int v3; // esi
  unsigned int *v4; // rbp
  int j; // edi
  int k; // ebx
  int m; // ebx
  unsigned int *v8; // r8
  unsigned int *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int *v13; // rcx
  int v14; // eax
  unsigned int *v15; // rcx
  int v16; // eax
  unsigned int *v17; // rcx
  int v18; // eax
  unsigned int *v19; // rcx
  int v20; // eax
  unsigned int *v21; // rcx
  unsigned int *result; // rax
  unsigned int *v23; // rcx

  v0 = &dword_140404A6C[188872561];
  v1 = 0;
  for ( i = 0; i < 0x4000; i += 8 )
  {
    v3 = 0;
    v4 = v0;
    do
    {
      for ( j = 0; j < 8; ++j )
      {
        for ( k = 0; k < 8; ++k )
          sub_1400D2DB0((unsigned int)(v3 + k), (unsigned int)(i + j));
      }
      v3 += 8;
      ++v4;
    }
    while ( v3 < 0x4000 );
    v0 += 2049;
  }
  if ( !dword_140404A6C[284024893] )
  {
    sub_1400D3340(2);
    sub_1400D3340(40);
    sub_1400D3340(32);
    sub_1400D3340(46);
    sub_1400D3340(45);
    sub_1400D3340(47);
    sub_1400D3340(28);
    sub_1400D3340(10);
    sub_1400D3340(33);
    sub_1400D3340(42);
    sub_1400D3340(35);
    sub_1400D3340(13);
    sub_1400D3340(59);
    sub_1400D3340(31);
    sub_1400D3340(52);
    sub_1400D3340(48);
    sub_1400D3340(50);
    sub_1400D3340(19);
    sub_1400D3340(22);
    sub_1400D3340(58);
    sub_1400D3340(62);
    sub_1400D3340(61);
    sub_1400D3340(41);
    sub_1400D3340(36);
    sub_1400D3340(43);
    sub_1400D3340(44);
    sub_1400D3340(38);
    sub_1400D3340(39);
  }
  for ( m = 0; m < 64; ++m )
    sub_1400D00F0(m);
  v8 = &dword_140404A6C[272034691];
  do
  {
    v9 = v8;
    v10 = 16;
    do
    {
      v11 = 16;
      do
      {
        *(_QWORD *)(v9 - 1) = -1;
        *(_QWORD *)(v9 + 1) = -1;
        *(_QWORD *)(v9 + 3) = -1;
        v9[5] = -1;
        v9 += 13;
        --v11;
      }
      while ( v11 );
      --v10;
    }
    while ( v10 );
    v8 += 3336;
  }
  while ( (__int64)v8 < (__int64)&dword_140404A6C[272248195] );
  v12 = 0;
  dword_140404A6C[271838026] = 0;
  if ( (int)dword_140404A6C[271838023] > 0 )
  {
    v13 = &dword_140404A6C[271838027];
    do
    {
      *v13 = -1;
      v13 += 3;
      ++v12;
    }
    while ( v12 < (int)dword_140404A6C[271838023] );
  }
  v14 = 0;
  dword_140404A6C[271862608] = 0;
  if ( (int)dword_140404A6C[271862605] > 0 )
  {
    v15 = &dword_140404A6C[271862609];
    do
    {
      *v15 = -1;
      v15 += 3;
      ++v14;
    }
    while ( v14 < (int)dword_140404A6C[271862605] );
  }
  v16 = 0;
  dword_140404A6C[271887190] = 0;
  if ( (int)dword_140404A6C[271887187] > 0 )
  {
    v17 = &dword_140404A6C[271887191];
    do
    {
      *v17 = -1;
      v17 += 3;
      ++v16;
    }
    while ( v16 < (int)dword_140404A6C[271887187] );
  }
  v18 = 0;
  dword_140404A6C[271911772] = 0;
  if ( (int)dword_140404A6C[271911769] > 0 )
  {
    v19 = &dword_140404A6C[271911773];
    do
    {
      *v19 = -1;
      v19 += 3;
      ++v18;
    }
    while ( v18 < (int)dword_140404A6C[271911769] );
  }
  v20 = 0;
  dword_140404A6C[271936354] = 0;
  if ( (int)dword_140404A6C[271936351] > 0 )
  {
    v21 = &dword_140404A6C[271936355];
    do
    {
      *v21 = -1;
      v21 += 3;
      ++v20;
    }
    while ( v20 < (int)dword_140404A6C[271936351] );
  }
  result = nullptr;
  dword_140404A6C[271960936] = 0;
  if ( (int)dword_140404A6C[271960933] > 0 )
  {
    v23 = &dword_140404A6C[271960937];
    do
    {
      *v23 = -1;
      v23 += 3;
      result = (unsigned int *)(unsigned int)((_DWORD)result + 1);
    }
    while ( (int)result < (int)dword_140404A6C[271960933] );
  }
  dword_140404A6C[271985518] = 0;
  if ( (int)dword_140404A6C[271985515] > 0 )
  {
    result = &dword_140404A6C[271985519];
    do
    {
      *result = -1;
      result += 3;
      ++v1;
    }
    while ( v1 < (int)dword_140404A6C[271985515] );
  }
  return result;
}

