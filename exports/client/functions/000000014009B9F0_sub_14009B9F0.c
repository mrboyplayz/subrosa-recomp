/* Address: 0x14009b9f0 | Name: sub_14009B9F0 | Size: 1094 bytes */
__int64 __fastcall sub_14009B9F0(int a1)
{
  unsigned int v1; // r14d
  int v2; // ebx
  __int64 v3; // rax
  signed int v4; // ecx
  int v5; // esi
  __int64 v6; // r15
  int v7; // edi
  float v8; // xmm10_4
  unsigned int v9; // ebp
  float v10; // xmm1_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm7_4
  float v14; // xmm7_4
  float v15; // xmm7_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rax
  signed int v29; // r10d
  signed int i; // r9d
  __int64 v31; // r8
  signed int v32; // eax

  v1 = dword_140404A6C[293250409];
  v2 = 128;
  v3 = a1;
  v4 = 128;
  v5 = 0;
  v6 = (int)dword_140404A6C[4 * v3 + 283827814];
  dword_140404A6C[468765293] = 128;
  dword_140404A6C[468765294] = 128;
  do
  {
    v7 = 0;
    if ( v2 > 0 )
    {
      v8 = (float)v5 * 0.25;
      v9 = abs32(32 - (v5 & 0x3F));
      v10 = v8 * 0.5;
      do
      {
        v11 = (float)v7 * 0.25;
        v12 = fabs(sub_1400384F0(v11 * 0.5, v10, 15).m128_f32[0]) * 0.5;
        v13 = v12 + fabs(sub_1400384F0(v11, v8, 31).m128_f32[0]);
        v14 = v13 + (float)(fabs(sub_1400384F0((float)v7 * 0.0625, v8 * 0.25, 7).m128_f32[0]) * 0.25);
        v15 = v14 + (float)(fabs(sub_1400384F0((float)v7 * 0.03125, v8 * 0.125, 3).m128_f32[0]) * 0.125);
        v16 = sin((float)((float)(0.015625 / v15) + (float)(0.015625 / v15)) * 3.14159265359) * 32.0;
        if ( (int)(v9 + abs32(32 - (v7 & 0x3F))) >= 32 )
        {
          v20 = v16 * 0.25;
          v17 = (float)(v16 * 0.125) + 56.0;
          v21 = v20;
          v19 = v20 + 48.0;
          v18 = v21 + 64.0;
        }
        else
        {
          v17 = v16 + 112.0;
          v18 = v17;
          v19 = v17;
        }
        v22 = (int)v19;
        v23 = (int)v17;
        v24 = (int)v18;
        if ( v1 )
          v25 = (v23 << 16) + (v24 << 24) + (v22 << 8) + 32;
        else
          v25 = v24 + (v23 << 8) + 0x20000000 + (v22 << 16);
        v10 = v8 * 0.5;
        v26 = v7 + v5 * v2;
        ++v7;
        dword_140404A6C[v26 + 468765295] = v25;
        v2 = dword_140404A6C[468765293];
      }
      while ( v7 < (int)dword_140404A6C[468765293] );
      v4 = dword_140404A6C[468765294];
    }
    ++v5;
  }
  while ( v5 < v4 );
  v27 = 44 * v6;
  dword_140404A6C[v27 + 284024933] = v2;
  dword_140404A6C[v27 + 284024934] = v4;
  dword_140404A6C[v27 + 284024935] = 1;
  dword_140404A6C[v27 + 284024936] = 6408;
  dword_140404A6C[v27 + 284024937] = 6408;
  dword_140404A6C[v27 + 284024943] = 0;
  dword_140404A6C[v27 + 284024938] = 10497;
  dword_140404A6C[v27 + 284024939] = 10497;
  dword_140404A6C[v27 + 284024940] = 9729;
  dword_140404A6C[v27 + 284024941] = 9987;
  free(*(void **)&dword_140404A6C[44 * v6 + 284024945]);
  v28 = j__malloc_base((int)(4 * dword_140404A6C[v27 + 284024933] * dword_140404A6C[v27 + 284024934]));
  v29 = 0;
  *(_QWORD *)&dword_140404A6C[v27 + 284024945] = v28;
  if ( (int)dword_140404A6C[44 * v6 + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[v27 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v27 + 284024945] + 4LL * v32) = dword_140404A6C[v31 + 468765295] )
      {
        v31 = i + v29 * dword_140404A6C[468765293];
        v32 = i + v29 * dword_140404A6C[v27 + 284024933];
        ++i;
      }
      ++v29;
    }
    while ( v29 < (int)dword_140404A6C[v27 + 284024934] );
  }
  sub_14009A370(v6);
  sub_14014D3E0((unsigned int)v6, 1);
  return (*(__int64 (__fastcall **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
}

