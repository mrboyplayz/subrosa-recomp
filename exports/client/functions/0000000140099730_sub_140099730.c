/* Address: 0x140099730 | Name: sub_140099730 | Size: 1682 bytes */
double __fastcall sub_140099730(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  __int64 v7; // r13
  int v8; // r12d
  unsigned int v9; // r15d
  int v10; // ebx
  int v11; // ecx
  __int64 v12; // rcx
  unsigned int v13; // r12d
  int i; // esi
  int v15; // edi
  int v16; // r15d
  int v17; // ebp
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  float v21; // xmm10_4
  float v22; // xmm9_4
  float v23; // xmm8_4
  double result; // xmm0_8
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rax
  signed int v32; // r10d
  signed int j; // r9d
  __int64 v34; // r8
  signed int v35; // eax
  signed int v36; // r10d
  signed int v37; // r8d
  __int64 v38; // rdi
  int v39; // ecx
  unsigned int v40; // r9d
  int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  signed int v45; // r10d
  signed int k; // r9d
  __int64 v47; // r8
  signed int v48; // eax
  unsigned int v49; // [rsp+140h] [rbp+8h]

  v7 = 2LL * a1;
  v8 = a2;
  v9 = dword_140404A6C[4 * a1 + 283827814];
  v49 = v9;
  if ( a1 == 1 )
  {
    v12 = 44LL * (int)dword_140404A6C[283827818];
    v10 = dword_140404A6C[v12 + 284024933];
    v11 = dword_140404A6C[v12 + 284024934];
    dword_140404A6C[468765293] = v10;
    dword_140404A6C[468765294] = v11;
    if ( v11 <= 0 )
      goto LABEL_17;
  }
  else
  {
    v10 = 128;
    dword_140404A6C[468765293] = 128;
    v11 = 128;
    dword_140404A6C[468765294] = 128;
  }
  v13 = dword_140404A6C[293250409];
  for ( i = 0; i < v11; ++i )
  {
    v15 = 0;
    if ( v10 > 0 )
    {
      v16 = 16;
      v17 = 16;
      if ( a1 != 2 )
      {
        v16 = 0;
        v17 = 255;
      }
      do
      {
        v18 = v17;
        v19 = v17;
        v20 = v16;
        if ( !a1 )
        {
          v21 = sub_1400384F0((float)v15 * 0.5, (float)i * 0.25, 31).m128_f32[0];
          v22 = sub_1400384F0((float)v15 * 0.25, (float)i * 0.125, 15).m128_f32[0];
          v23 = sub_1400384F0((float)v15, (float)i * 0.5, 63).m128_f32[0];
          *(_QWORD *)&result = sub_1400384F0((float)((float)v15 + (float)v15) + 1235.0, (float)i + 123.0, 127).m128_u64[0];
          v19 = (int)(float)((float)((float)((float)(v21 + v22) + (float)(v23 + *(float *)&result)) * 1.75) + 167.0);
          v18 = (int)(float)((float)((float)((float)(*(float *)&result + *(float *)&result) + v23) + (float)(v22 + v23))
                           + (float)((float)(v21 + v21) + (float)(v22 + 168.0)));
          v20 = v18;
        }
        if ( v13 )
        {
          v27 = (v18 << 24) + 32;
          v25 = v20 << 16;
          v26 = v19 << 8;
        }
        else
        {
          v25 = v20 << 8;
          v26 = v19 << 16;
          v27 = v18 + 0x20000000;
        }
        v28 = v25 + v27 + v26;
        v29 = v15 + i * v10;
        ++v15;
        dword_140404A6C[v29 + 468765295] = v28;
        v10 = dword_140404A6C[468765293];
      }
      while ( v15 < (int)dword_140404A6C[468765293] );
      v11 = dword_140404A6C[468765294];
    }
  }
  v9 = v49;
  v8 = a2;
LABEL_17:
  v30 = 44LL * (int)v9;
  dword_140404A6C[v30 + 284024933] = v10;
  dword_140404A6C[v30 + 284024938] = a3;
  dword_140404A6C[v30 + 284024939] = a4;
  dword_140404A6C[v30 + 284024934] = v11;
  dword_140404A6C[v30 + 284024935] = 1;
  dword_140404A6C[v30 + 284024936] = 6408;
  dword_140404A6C[v30 + 284024937] = 6408;
  dword_140404A6C[v30 + 284024943] = 0;
  dword_140404A6C[v30 + 284024940] = a5;
  dword_140404A6C[v30 + 284024941] = a6;
  free(*(void **)&dword_140404A6C[v30 + 284024945]);
  v31 = j__malloc_base((int)(4 * dword_140404A6C[v30 + 284024933] * dword_140404A6C[v30 + 284024934]));
  v32 = 0;
  for ( *(_QWORD *)&dword_140404A6C[v30 + 284024945] = v31; v32 < (int)dword_140404A6C[v30 + 284024934]; ++v32 )
  {
    for ( j = 0;
          j < (int)dword_140404A6C[v30 + 284024933];
          *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v30 + 284024945] + 4LL * v35) = dword_140404A6C[v34 + 468765295] )
    {
      v34 = j + v32 * dword_140404A6C[468765293];
      v35 = j + dword_140404A6C[v30 + 284024933] * v32;
      ++j;
    }
  }
  if ( v8 )
    sub_14009A370(v9);
  sub_14014D3E0(v9, 1);
  (*(void (__fastcall **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
  if ( a1 == 1 )
  {
    v36 = dword_140404A6C[468765294];
    v37 = 0;
    v38 = (int)dword_140404A6C[2 * v7 + 283827815];
    v39 = dword_140404A6C[468765293];
    if ( (int)dword_140404A6C[468765294] > 0 )
    {
      v40 = dword_140404A6C[293250409];
      do
      {
        v41 = 0;
        if ( v39 > 0 )
        {
          do
          {
            v42 = v41 + v37 * v39;
            if ( v40 )
              dword_140404A6C[v42 + 468765295] = -16711904;
            else
              dword_140404A6C[v42 + 468765295] = 553582847;
            v39 = dword_140404A6C[468765293];
            ++v41;
          }
          while ( v41 < (int)dword_140404A6C[468765293] );
          v36 = dword_140404A6C[468765294];
        }
        ++v37;
      }
      while ( v37 < v36 );
    }
    v43 = 44 * v38;
    dword_140404A6C[v43 + 284024938] = a3;
    dword_140404A6C[v43 + 284024939] = a4;
    dword_140404A6C[v43 + 284024933] = v39;
    dword_140404A6C[v43 + 284024934] = v36;
    dword_140404A6C[v43 + 284024935] = 1;
    dword_140404A6C[v43 + 284024936] = 6408;
    dword_140404A6C[v43 + 284024937] = 6408;
    dword_140404A6C[v43 + 284024943] = 0;
    dword_140404A6C[v43 + 284024940] = a5;
    dword_140404A6C[v43 + 284024941] = a6;
    free(*(void **)&dword_140404A6C[44 * v38 + 284024945]);
    v44 = j__malloc_base((int)(4 * dword_140404A6C[v43 + 284024933] * dword_140404A6C[v43 + 284024934]));
    v45 = 0;
    *(_QWORD *)&dword_140404A6C[v43 + 284024945] = v44;
    if ( (int)dword_140404A6C[44 * v38 + 284024934] > 0 )
    {
      do
      {
        for ( k = 0;
              k < (int)dword_140404A6C[v43 + 284024933];
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v43 + 284024945] + 4LL * v48) = dword_140404A6C[v47 + 468765295] )
        {
          v47 = k + v45 * dword_140404A6C[468765293];
          v48 = k + dword_140404A6C[v43 + 284024933] * v45;
          ++k;
        }
        ++v45;
      }
      while ( v45 < (int)dword_140404A6C[v43 + 284024934] );
    }
    if ( v8 )
      result = sub_14009A370((unsigned int)v38);
    sub_14014D3E0((unsigned int)v38, 1);
    (*(void (__fastcall **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
  }
  else if ( a1 )
  {
    if ( a1 == 2 )
      return sub_140138590(dword_140404A6C[2 * v7 + 283827815], 1, 10497, 10497, 9729, 9987, 224, 32, 0, 0);
  }
  else
  {
    return sub_140138590(dword_140404A6C[2 * v7 + 283827815], 1, 10497, 10497, 9729, 9987, 96, 192, 0, 0);
  }
  return result;
}

