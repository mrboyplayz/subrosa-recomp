/* Address: 0x1400d4360 | Name: sub_1400D4360 | Size: 889 bytes */
double __fastcall sub_1400D4360(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // eax
  int v7; // esi
  int v8; // ebx
  int v9; // r12d
  int v10; // r13d
  int v11; // r15d
  int v12; // r8d
  int v13; // ebp
  __int64 v14; // r14
  signed int v15; // ecx
  int v16; // edi
  int v17; // ecx
  float v18; // xmm0_4
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  unsigned int v22; // edx
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rax
  signed int v26; // r10d
  signed int i; // r9d
  __int64 v28; // r8
  signed int v29; // eax
  int v31; // [rsp+C0h] [rbp+8h]

  v6 = dword_140404A6C[283830717];
  v7 = a3;
  v8 = 1024;
  v9 = a3;
  v10 = 0;
  v11 = a3;
  v12 = 0;
  v13 = a3;
  v14 = a1;
  v15 = 1024;
  dword_140404A6C[468765293] = 1024;
  dword_140404A6C[468765294] = 1024;
  v31 = 0;
  do
  {
    v16 = 0;
    if ( v8 > 0 )
    {
      do
      {
        if ( (_DWORD)v14 == dword_140404A6C[283830716] || (_DWORD)v14 == v6 )
        {
          v7 = 151;
          v11 = 84;
          if ( (_DWORD)v14 == v6 && (unsigned int)(v10 - 576) <= 0xBF && (unsigned int)(v16 - 256) <= 0xBF )
          {
            v7 = 123;
            v11 = 123;
          }
          v13 = 255;
          v9 = 123;
        }
        if ( (_DWORD)v14 == dword_140404A6C[283830715] )
        {
          v13 = 0;
          v17 = (((v12 + v16) << 13) ^ (v12 + v16)) * (((v12 + v16) << 13) ^ (v12 + v16));
          v7 = (int)(float)((float)(16.0
                                  - (float)((float)(((15731 * v17 + 789221) * (15731 * v17 + 789221) - 771171059)
                                                  & 0x7FFFFFFF)
                                          * 0.000000014901161))
                          + 192.0);
          v11 = v7;
          v9 = v7;
          v18 = sub_1400384F0((float)v16, (float)v10, 1023).m128_f32[0];
          v12 = v31;
          if ( v18 > 0.25 )
            v13 = (int)(float)((float)(v18 - 0.25) * 128.0);
        }
        if ( dword_140404A6C[293250409] )
        {
          v19 = v13 + (v9 << 16);
          v20 = v11 << 8;
          v21 = v7 << 24;
        }
        else
        {
          v19 = v7 + (v11 << 16);
          v20 = v13 << 24;
          v21 = v9 << 8;
        }
        v22 = v20 + v19 + v21;
        v23 = v16 + v10 * v8;
        ++v16;
        dword_140404A6C[v23 + 468765295] = v22;
        v8 = dword_140404A6C[468765293];
        v6 = dword_140404A6C[283830717];
      }
      while ( v16 < (int)dword_140404A6C[468765293] );
      v15 = dword_140404A6C[468765294];
    }
    v12 += 57;
    ++v10;
    v31 = v12;
  }
  while ( v10 < v15 );
  v24 = 44 * v14;
  dword_140404A6C[v24 + 284024938] = a3;
  dword_140404A6C[v24 + 284024939] = a4;
  dword_140404A6C[v24 + 284024940] = a5;
  dword_140404A6C[v24 + 284024941] = a6;
  dword_140404A6C[v24 + 284024933] = v8;
  dword_140404A6C[v24 + 284024934] = v15;
  dword_140404A6C[v24 + 284024935] = 1;
  dword_140404A6C[v24 + 284024936] = 6408;
  dword_140404A6C[v24 + 284024937] = 6408;
  dword_140404A6C[v24 + 284024943] = 0;
  free(*(void **)&dword_140404A6C[44 * v14 + 284024945]);
  v25 = j__malloc_base((int)(4 * dword_140404A6C[v24 + 284024933] * dword_140404A6C[v24 + 284024934]));
  v26 = 0;
  *(_QWORD *)&dword_140404A6C[v24 + 284024945] = v25;
  if ( (int)dword_140404A6C[44 * v14 + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[v24 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v24 + 284024945] + 4LL * v29) = dword_140404A6C[v28 + 468765295] )
      {
        v28 = i + v26 * dword_140404A6C[468765293];
        v29 = i + v26 * dword_140404A6C[v24 + 284024933];
        ++i;
      }
      ++v26;
    }
    while ( v26 < (int)dword_140404A6C[v24 + 284024934] );
  }
  if ( a2 )
    sub_14009A370(v14);
  return sub_14014D3E0((unsigned int)v14, 1);
}

