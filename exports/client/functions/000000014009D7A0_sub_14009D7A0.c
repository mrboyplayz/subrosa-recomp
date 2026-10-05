/* Address: 0x14009d7a0 | Name: sub_14009D7A0 | Size: 610 bytes */
double __fastcall sub_14009D7A0(int a1)
{
  int v1; // edx
  signed int v2; // r8d
  signed int v3; // edi
  __int64 v4; // rsi
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  signed int v13; // r11d
  signed int i; // r10d
  __int64 v15; // r9
  signed int v16; // eax
  float v18[4]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 64;
  v2 = 8;
  v3 = 0;
  v4 = a1;
  dword_140404A6C[468765293] = 64;
  dword_140404A6C[468765294] = 8;
  do
  {
    v5 = 0;
    if ( v1 > 0 )
    {
      do
      {
        sub_1400A56B0(v18);
        v6 = (int)(float)((float)(v18[0] * 127.0) + 128.0);
        v7 = (int)(float)((float)(v18[1] * 127.0) + 128.0);
        v8 = (int)(float)((float)(v18[2] * 127.0) + 128.0);
        if ( dword_140404A6C[293250409] )
          v9 = (v7 << 16) + (v8 << 8) + (v6 << 24) + 255;
        else
          v9 = (v7 << 8) - 0x1000000 + (v8 << 16) + v6;
        v10 = v5 + v3 * dword_140404A6C[468765293];
        ++v5;
        dword_140404A6C[v10 + 468765295] = v9;
        v1 = dword_140404A6C[468765293];
      }
      while ( v5 < (int)dword_140404A6C[468765293] );
      v2 = dword_140404A6C[468765294];
    }
    ++v3;
  }
  while ( v3 < v2 );
  v11 = 44 * v4;
  dword_140404A6C[v11 + 284024933] = v1;
  dword_140404A6C[v11 + 284024934] = v2;
  dword_140404A6C[v11 + 284024935] = 1;
  dword_140404A6C[v11 + 284024936] = 6408;
  dword_140404A6C[v11 + 284024937] = 6408;
  dword_140404A6C[v11 + 284024943] = 0;
  dword_140404A6C[v11 + 284024938] = 10497;
  dword_140404A6C[v11 + 284024939] = 10497;
  dword_140404A6C[v11 + 284024940] = 9728;
  dword_140404A6C[v11 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[44 * v4 + 284024945]);
  v12 = j__malloc_base((int)(4 * dword_140404A6C[v11 + 284024933] * dword_140404A6C[v11 + 284024934]));
  v13 = 0;
  *(_QWORD *)&dword_140404A6C[v11 + 284024945] = v12;
  if ( (int)dword_140404A6C[44 * v4 + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[v11 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v11 + 284024945] + 4LL * v16) = dword_140404A6C[v15 + 468765295] )
      {
        v15 = i + v13 * dword_140404A6C[468765293];
        v16 = i + dword_140404A6C[v11 + 284024933] * v13;
        ++i;
      }
      ++v13;
    }
    while ( v13 < (int)dword_140404A6C[v11 + 284024934] );
  }
  return sub_14014D3E0((unsigned int)v4, 1);
}

