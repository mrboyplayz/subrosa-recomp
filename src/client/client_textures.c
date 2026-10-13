#include "shared_client.h"


//----- (000000014009A370) ----------------------------------------------------
__int64            sub_14009A370(int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // r8d
  int *v4; // rbx
  int v5; // ebp
  int v6; // ecx
  int *v7; // rdi
  void **v8; // rsi
  int v9; // r13d
  int v10; // r9d
  int v11; // r15d
  int v12; // r12d
  int v13; // r14d
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  unsigned int v16; // ebx
  unsigned int v17; // eax
  int v18; // edi
  __int64 v19; // rsi
  int v20; // edx
  __int64 v21; // r8
  unsigned int v22; // edx
  unsigned int v23; // r10d
  unsigned int v24; // eax
  unsigned int v25; // edx
  int v26; // eax
  __int64 v27; // rdx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009A370[128];
#define v28 (*(int * (*))(void *)(sr_frame_14009A370 + 0)) /* [rsp+20h] */
#define v29 (*(int (*))(void *)(sr_frame_14009A370 + 96)) /* [rsp+80h] */
#define v30 (*(void ** (*))(void *)(sr_frame_14009A370 + 104)) /* [rsp+88h] */
#define v31 (*(unsigned int * (*))(void *)(sr_frame_14009A370 + 120)) /* [rsp+98h] */

  v1 = 44LL * a1;
  result = dword_140404A6C[v1 + 284024936] - 6407;
  if ( (unsigned int)result <= 1 )
  {
    v3 = dword_140404A6C[v1 + 284024933];
    v4 = (int *)&dword_140404A6C[v1 + 284024933];
    v5 = 1;
    v31 = &dword_140404A6C[v1 + 284024933];
    v6 = 1;
    v29 = 1;
    if ( (v3 & 0xFFFFFFFE) != 0 )
    {
      do
        result = (unsigned int)(v3 >> ++v6);
      while ( (_DWORD)result );
      v29 = v6;
    }
    dword_140404A6C[v1 + 284024935] = v6;
    if ( v6 > 1 )
    {
      v7 = (int *)&dword_140404A6C[v1 + 284024934];
      v8 = (void **)&dword_140404A6C[v1 + 284024947];
      v28 = v7;
      v30 = v8;
      do
      {
        free(*v8);
        *v8 = (void *)sr_path_malloc(4 * (*v4 >> v5) * (*v7 >> v5));
        v9 = 0;
        result = (unsigned int)(*v7 >> v5);
        if ( (int)result > 0 )
        {
          v10 = *v4;
          v11 = 0;
          do
          {
            v12 = 0;
            if ( v10 >> v5 > 0 )
            {
              v13 = 0;
              do
              {
                v14 = 0;
                v15 = 0;
                v16 = 0;
                v17 = 0;
                v18 = 0;
                v19 = *(__int64 *)((uintptr_t)v8
                                 + (uintptr_t)&dword_140404A6C[284024933]
                                 - (uintptr_t)&dword_140404A6C[284024947]
                                 + 48);
                do
                {
                  v20 = (v11 + v18++) * (v10 >> (v5 - 1));
                  v21 = v13 + v20;
                  v22 = *(_DWORD *)(v19 + 4 * v21);
                  v23 = (unsigned __int8)v22 + v14;
                  v24 = HIBYTE(v22) + v17;
                  v25 = *(_DWORD *)(v19 + 4 * v21 + 4);
                  v14 = (unsigned __int8)v25 + v23;
                  v15 += BYTE1(v25) + (unsigned __int8)BYTE1(*(_DWORD *)(v19 + 4 * v21));
                  v17 = HIBYTE(v25) + v24;
                  v16 += BYTE2(v25) + (unsigned __int8)BYTE2(*(_DWORD *)(v19 + 4 * v21));
                }
                while ( v18 < 2 );
                v8 = v30;
                v13 += 2;
                v26 = (v16 >> 2) + (v17 >> 2 << 8);
                v4 = (int *)v31;
                v27 = v12 + v9 * (v10 >> v5);
                ++v12;
                *((_DWORD *)*v30 + v27) = (v14 >> 2) + (((v15 >> 2) + (v26 << 8)) << 8);
                v10 = *v31;
              }
              while ( v12 < (int)*v31 >> v5 );
              v7 = v28;
            }
            result = (unsigned int)(*v7 >> v5);
            ++v9;
            v11 += 2;
          }
          while ( v9 < (int)result );
        }
        ++v8;
        ++v5;
        v30 = v8;
      }
      while ( v5 < v29 );
    }
  }
  return result;
}
#undef v28
#undef v29
#undef v30
#undef v31

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014009B1A0) ----------------------------------------------------
void               sub_14009B1A0(int a1)
{
  BOOL *v1; // rdi
  int v2; // ebp
  __int64 v3; // r14
  int v4; // esi
  float v5; // xmm6_4
  BOOL v6; // ebx
  double v7; // xmm1_8
  __int64 v8; // rdi
  char *v9; // r11
  unsigned int i; // r9d
  char *v11; // r10
  __int64 v12; // rsi
  int v13; // edx
  int v14; // r8d
  int v15; // ebx
  bool v16; // zf
  signed int j; // r10d
  signed int k; // r9d
  __int64 v19; // rcx
  signed int v20; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009B1A0[1072];
#define v22 (*(__int64 (*))(void *)(sr_frame_14009B1A0 + 0)) /* [rsp+0h] */
#define v23 (*(_DWORD (*)[256])(void *)(sr_frame_14009B1A0 + 32)) /* [rsp+20h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_14009B1A0 + 1056)) /* [rsp+420h] */

  v1 = v23;
  v2 = 0;
  v3 = a1;
  do
  {
    v4 = 0;
    v5 = (float)v2 - 7.5;
    do
    {
      v6 = (float)((float)((float)((float)v4 - 7.5) * (float)((float)v4 - 7.5)) + (float)(v5 * v5)) <= 36.0;
      *v1 = v6;
      v7 = sub_14023F704(v5, (float)v4 - 5.0);
      if ( v7 > -0.5890486225480862 )
      {
        if ( v7 < 0.5890486225480862 )
          v6 = 0;
        *v1 = v6;
      }
      ++v4;
      ++v1;
    }
    while ( v4 < 16 );
    ++v2;
  }
  while ( v2 < 16 );
  v8 = 44 * v3;
  dword_140404A6C[468765293] = 128;
  dword_140404A6C[468765294] = 128;
  dword_140404A6C[v8 + 284024933] = 128;
  dword_140404A6C[v8 + 284024934] = 128;
  dword_140404A6C[v8 + 284024935] = 1;
  dword_140404A6C[v8 + 284024936] = 6408;
  dword_140404A6C[v8 + 284024937] = 6408;
  dword_140404A6C[v8 + 284024943] = 0;
  dword_140404A6C[v8 + 284024938] = 10497;
  dword_140404A6C[v8 + 284024939] = 10497;
  dword_140404A6C[v8 + 284024940] = 9728;
  dword_140404A6C[v8 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[44 * v3 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v8 + 284024945] = sr_path_malloc((int)(4
                                                                   * dword_140404A6C[v8 + 284024933]
                                                                   * dword_140404A6C[v8 + 284024934]));
  v9 = (char *)&unk_1402B2410;
  for ( i = 0; (int)i < 256; ++i )
  {
    v11 = v9;
    v12 = 8;
    v13 = 8 * (i >> 4);
    v14 = 8 * (i & 0xF);
    v15 = -8 * (i >> 4);
    do
    {
      dword_140404A6C[v14 + 468765295 + dword_140404A6C[468765293] * v13] = 0;
      if ( (__int64)v9 < (__int64)((char *)&unk_1402B2410 + 0x140) /* 0x1402B2550, the end of the 8x8 font */ )
      {
        if ( *v11 < 0 )
          dword_140404A6C[v14 + 468765295 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 0x40) == 0;
        dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 0x20) == 0;
        dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 0x10) == 0;
        dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 8) == 0;
        dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 4) == 0;
        dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 2) == 0;
        dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 1) == 0;
        dword_140404A6C[v14 + 468765302 + dword_140404A6C[468765293] * v13] = 0;
        goto LABEL_50;
      }
      if ( (__int64)v9 < (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ && v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 8 * (i & 1)] )
      {
        dword_140404A6C[v14 + 468765295 + dword_140404A6C[468765293] * v13] = -1;
        dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = 0;
      }
      else
      {
        dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = 0;
        if ( (__int64)v9 >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
          goto LABEL_33;
      }
      if ( v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 1 + 8 * (i & 1)] )
      {
        dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = -1;
        dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = 0;
        goto LABEL_34;
      }
LABEL_33:
      dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = 0;
      if ( (__int64)v9 >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
        goto LABEL_36;
LABEL_34:
      if ( !v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 2 + 8 * (i & 1)] )
      {
LABEL_36:
        dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = 0;
        if ( (__int64)v9 >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
          goto LABEL_39;
        goto LABEL_37;
      }
      dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = -1;
      dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = 0;
LABEL_37:
      if ( v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 3 + 8 * (i & 1)] )
      {
        dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = -1;
        dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = 0;
        goto LABEL_40;
      }
LABEL_39:
      dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = 0;
      if ( (__int64)v9 >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
        goto LABEL_42;
LABEL_40:
      if ( !v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 4 + 8 * (i & 1)] )
      {
LABEL_42:
        dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = 0;
        if ( (__int64)v9 >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
          goto LABEL_45;
        goto LABEL_43;
      }
      dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = -1;
      dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = 0;
LABEL_43:
      if ( v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 5 + 8 * (i & 1)] )
      {
        dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = -1;
        dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = 0;
        goto LABEL_46;
      }
LABEL_45:
      dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = 0;
      if ( (__int64)v9 >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
        goto LABEL_48;
LABEL_46:
      if ( !v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 6 + 8 * (i & 1)] )
      {
LABEL_48:
        dword_140404A6C[v14 + 468765302 + dword_140404A6C[468765293] * v13] = 0;
        if ( (__int64)v9 >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
          goto LABEL_52;
        goto LABEL_49;
      }
      dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = -1;
      dword_140404A6C[v14 + 468765302 + dword_140404A6C[468765293] * v13] = 0;
LABEL_49:
      v16 = v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 7 + 8 * (i & 1)] == 0;
LABEL_50:
      if ( !v16 )
        dword_140404A6C[v14 + 468765302 + dword_140404A6C[468765293] * v13] = -1;
LABEL_52:
      ++v13;
      ++v11;
      --v12;
    }
    while ( v12 );
    v9 += 8;
  }
  for ( j = 0; j < (int)dword_140404A6C[v8 + 284024934]; ++j )
  {
    for ( k = 0;
          k < (int)dword_140404A6C[v8 + 284024933];
          *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v8 + 284024945] + 4LL * v20) = dword_140404A6C[v19 + 468765295] )
    {
      v19 = k + j * dword_140404A6C[468765293];
      v20 = k + j * dword_140404A6C[v8 + 284024933];
      ++k;
    }
  }
  sub_14014D3E0(v3, 0);
  return; /* native cookie verifies compiler stack layout, not atlas data */
}
#undef v22
#undef v23
#undef v24

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 1402B2550: using guessed type int dword_1402B2550[];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (000000014009B9F0) ----------------------------------------------------
double            sub_14009B9F0(int a1)
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
        v12 = fabs(SR_VEC_READ_LANES(128, sub_1400384F0(v11 * 0.5, v10, 15), f32)[0]) * 0.5;
        v13 = v12 + fabs(SR_VEC_READ_LANES(128, sub_1400384F0(v11, v8, 31), f32)[0]);
        v14 = v13 + (float)(fabs(SR_VEC_READ_LANES(128, sub_1400384F0((float)v7 * 0.0625, v8 * 0.25, 7), f32)[0]) * 0.25);
        v15 = v14 + (float)(fabs(SR_VEC_READ_LANES(128, sub_1400384F0((float)v7 * 0.03125, v8 * 0.125, 3), f32)[0]) * 0.125);
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
  v28 = sr_path_malloc((int)(4 * dword_140404A6C[v27 + 284024933] * dword_140404A6C[v27 + 284024934]));
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
  sub_14014D3E0(v6, 1);
  return (*(double (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);
// 1862AE010: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (000000014009BE40) ----------------------------------------------------
void            sub_14009BE40(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  int v6; // r10d
  __int64 v7; // rbp
  unsigned int v9; // r9d
  signed int v10; // edi
  signed int i; // r11d
  int v13; // eax
  int v14; // r10d
  __int64 v15; // rcx
  unsigned int *v16; // rsi
  unsigned int *v17; // rbx
  void **v18; // rdi
  __int64 v19; // rax
  signed int v20; // r10d
  signed int j; // r9d
  __int64 v22; // r8
  signed int v23; // eax

  v6 = 128;
  v7 = a1;
  dword_140404A6C[468765293] = 128;
  v9 = dword_140404A6C[293250409];
  v10 = 128;
  dword_140404A6C[468765294] = 128;
  for ( i = 0; i < v10; ++i )
  {
    v13 = 0;
    if ( v6 > 0 )
    {
      do
      {
        v14 = v13 + i * v6;
        if ( v9 )
          dword_140404A6C[v14 + 468765295] = -16711904;
        else
          dword_140404A6C[v14 + 468765295] = 553582847;
        v6 = dword_140404A6C[468765293];
        ++v13;
      }
      while ( v13 < (int)dword_140404A6C[468765293] );
      v10 = dword_140404A6C[468765294];
    }
  }
  if ( v9 )
  {
    dword_140404A6C[468765295] = 1612720160;
    dword_140404A6C[468765296] = -425767648;
  }
  else
  {
    dword_140404A6C[468765295] = 539500640;
    dword_140404A6C[468765296] = 541958118;
  }
  v15 = 44LL * a1;
  v16 = &dword_140404A6C[44 * v7 + 284024934];
  v17 = &dword_140404A6C[44 * v7 + 284024933];
  dword_140404A6C[v15 + 284024940] = a5;
  *v16 = v10;
  v18 = (void **)&dword_140404A6C[44 * v7 + 284024945];
  *v17 = v6;
  dword_140404A6C[v15 + 284024935] = 1;
  dword_140404A6C[v15 + 284024936] = 6408;
  dword_140404A6C[v15 + 284024937] = 6408;
  dword_140404A6C[v15 + 284024943] = 0;
  dword_140404A6C[v15 + 284024938] = a3;
  dword_140404A6C[v15 + 284024939] = a4;
  dword_140404A6C[v15 + 284024941] = a6;
  free(*v18);
  v19 = sr_path_malloc((int)(4 * *v17 * *v16));
  v20 = 0;
  for ( *v18 = (void *)v19; v20 < (int)*v16; ++v20 )
  {
    for ( j = 0; j < (int)*v17; *((_DWORD *)*v18 + v23) = dword_140404A6C[v22 + 468765295] )
    {
      v22 = j + v20 * dword_140404A6C[468765293];
      v23 = j + *v17 * v20;
      ++j;
    }
  }
  if ( a2 )
    sub_14009A370(v7);
  sub_14014D3E0(v7, 1);
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE010: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;
// 1B0037428: using guessed type int[];
// 1B003742C: using guessed type unsigned int;

//----- (000000014009D7A0) ----------------------------------------------------
double            sub_14009D7A0(int a1)
{
  int v1; // edx
  signed int v2; // r8d
  signed int v3; // edi
  __int64 v4; // rsi
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  double result; // xmm0_8
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  signed int v14; // r11d
  signed int i; // r10d
  __int64 v16; // r9
  signed int v17; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009D7A0[16];
#define v18 (*(float (*)[2])(void *)(sr_frame_14009D7A0 + 0)) /* [rsp+20h] */
#define v19 (*(float (*))(void *)(sr_frame_14009D7A0 + 8)) /* [rsp+28h] */

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
        sub_1400A56B0(v18, 0.0, 1.0);
        v6 = (int)(float)((float)(v18[0] * 127.0) + 128.0);
        *(_QWORD *)&result = LODWORD(v19);
        v7 = (int)(float)((float)(v18[1] * 127.0) + 128.0);
        *(float *)&result = (float)(v19 * 127.0) + 128.0;
        v9 = (int)*(float *)&result;
        if ( dword_140404A6C[293250409] )
          v10 = (v7 << 16) + (v9 << 8) + (v6 << 24) + 255;
        else
          v10 = (v7 << 8) - 0x1000000 + (v9 << 16) + v6;
        v11 = v5 + v3 * dword_140404A6C[468765293];
        ++v5;
        dword_140404A6C[v11 + 468765295] = v10;
        v1 = dword_140404A6C[468765293];
      }
      while ( v5 < (int)dword_140404A6C[468765293] );
      v2 = dword_140404A6C[468765294];
    }
    ++v3;
  }
  while ( v3 < v2 );
  v12 = 44 * v4;
  dword_140404A6C[v12 + 284024933] = v1;
  dword_140404A6C[v12 + 284024934] = v2;
  dword_140404A6C[v12 + 284024935] = 1;
  dword_140404A6C[v12 + 284024936] = 6408;
  dword_140404A6C[v12 + 284024937] = 6408;
  dword_140404A6C[v12 + 284024943] = 0;
  dword_140404A6C[v12 + 284024938] = 10497;
  dword_140404A6C[v12 + 284024939] = 10497;
  dword_140404A6C[v12 + 284024940] = 9728;
  dword_140404A6C[v12 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[44 * v4 + 284024945]);
  v13 = sr_path_malloc((int)(4 * dword_140404A6C[v12 + 284024933] * dword_140404A6C[v12 + 284024934]));
  v14 = 0;
  *(_QWORD *)&dword_140404A6C[v12 + 284024945] = v13;
  if ( (int)dword_140404A6C[44 * v4 + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[v12 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v12 + 284024945] + 4LL * v17) = dword_140404A6C[v16 + 468765295] )
      {
        v16 = i + v14 * dword_140404A6C[468765293];
        v17 = i + dword_140404A6C[v12 + 284024933] * v14;
        ++i;
      }
      ++v14;
    }
    while ( v14 < (int)dword_140404A6C[v12 + 284024934] );
  }
  sub_14014D3E0(v4, 1);
  return result;
}
#undef v18
#undef v19

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (00000001400D40C0) ----------------------------------------------------
double            sub_1400D40C0(double result)
{
  int v1; // esi
  __int64 v2; // rbx
  __int64 v3; // rax
  signed int v4; // edi
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  signed int v7; // r11d
  __int64 i; // r8
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  signed int v15; // eax

  v1 = dword_140404A6C[283830714];
  v2 = 44LL * (int)dword_140404A6C[283830714];
  dword_140404A6C[v2 + 284024933] = 2048;
  dword_140404A6C[v2 + 284024934] = 2048;
  dword_140404A6C[v2 + 284024935] = 1;
  dword_140404A6C[v2 + 284024936] = 6408;
  dword_140404A6C[v2 + 284024937] = 6408;
  dword_140404A6C[v2 + 284024943] = 0;
  dword_140404A6C[v2 + 284024938] = 33071;
  dword_140404A6C[v2 + 284024939] = 33071;
  dword_140404A6C[v2 + 284024940] = 9729;
  dword_140404A6C[v2 + 284024941] = 9987;
  if ( *(_QWORD *)&dword_140404A6C[v2 + 284024945]
    || (v3 = sr_path_malloc(0x1000000), (*(_QWORD *)&dword_140404A6C[v2 + 284024945] = v3) != 0) )
  {
    v4 = 0;
    if ( (int)dword_140404A6C[v2 + 284024934] > 0 )
    {
      v5 = -1;
      v6 = 0;
      do
      {
        v7 = 0;
        for ( i = 0;
              v7 < (int)dword_140404A6C[v2 + 284024933];
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v2 + 284024945] + 4LL * v15) = ((int)(float)((float)(v12 * 127.0)
                                                                                                 + 128.0) << 8)
                                                                                   - ((int)(float)((float)(v14 * 127.0)
                                                                                                 + -128.0) << 16)
                                                                                   - 0x1000000
                                                                                   + (int)(float)((float)(v13 * 127.0)
                                                                                                + 128.0) )
        {
          v9 = 0.0;
          v10 = 0.0;
          if ( (unsigned __int64)(i - 1) <= 0x7FE )
            v9 = (float)(*(float *)&dword_140404A6C[v6 + 188872559 + i] - *(float *)&dword_140404A6C[v6 + 188872561 + i])
               * 0.5;
          if ( v5 <= 0x7FE )
            v10 = (float)(*(float *)&dword_140404A6C[v6 + 188874609 + i] - *(float *)&dword_140404A6C[v6 + 188870511 + i])
                * 0.5;
          v11 = fsqrt((float)((float)(v9 * v9) + 1.0) + (float)(v10 * v10));
          if ( v11 == 0.0 )
          {
            v13 = 0.0;
            v12 = 0.0;
            v14 = 0.0;
          }
          else
          {
            v12 = 1.0 / v11;
            v13 = v9 * (float)(1.0 / v11);
            v14 = v10 * (float)(1.0 / v11);
          }
          ++i;
          v15 = v7 + dword_140404A6C[v2 + 284024933] * (dword_140404A6C[v2 + 284024934] - v4 - 1);
          ++v7;
        }
        ++v4;
        ++v5;
        v6 += 2049;
      }
      while ( v4 < (int)dword_140404A6C[v2 + 284024934] );
    }
    sub_14014D3E0(v1, 0);
    return unk_140404738(3553);
  }
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404738: using guessed type double (__fastcall *unk_140404738)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBF154: using guessed type unsigned int;

//----- (00000001400E65F0) ----------------------------------------------------
__int64 sub_1400E65F0()
{
  int v0; // esi
  unsigned int *i; // r15
  __int64 v2; // rdi
  __int64 v3; // rbx
       char *v4; // r12
  __int64 v5; // rax
  __int64 v6; // r14
  FILE *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rdi
  int v12; // ecx
  __int64 v13; // rax
  FILE *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // edx
  int v18; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E65F0[608];
#define v20 (*(__int64 (*))(void *)(sr_frame_1400E65F0 + 0)) /* [rsp+0h] */
#define v21 (*(char (*)[512])(void *)(sr_frame_1400E65F0 + 80)) /* [rsp+50h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_1400E65F0 + 592)) /* [rsp+250h] */

  v0 = 0;
  if ( (int)dword_140404A6C[421784474] > 0 )
  {
    for ( i = &dword_140404A6C[421784475]; ; ++i )
    {
      v2 = (int)*i;
      v3 = 46 * v2;
      v4 = (     char *)&dword_140404A6C[46 * v2 + 421784739];
      sub_140158AB0(v21, "texture/%s.png", v4);
      v5 = sub_14020B8D8(v21, "rb");
      v6 = 46 * v2;
      v7 = (FILE *)v5;
      if ( v5 )
      {
        sub_14020C4A8(v5, 0, 2u);
        dword_140404A6C[v6 + 421784755] = ftell_sr(v7);
        sub_14020C4A8((__int64)v7, 0, 0);
        v8 = sr_path_malloc((int)dword_140404A6C[v3 + 421784755]);
        v9 = (int)dword_140404A6C[v3 + 421784755];
        *(_QWORD *)&dword_140404A6C[v3 + 421784757] = v8;
        fread_sr((void *)(uintptr_t)(v8), 1, v9, (FILE *)(uintptr_t)(v7));
        sub_14020B9E8((__int64)v7);
      }
      else
      {
        dword_140404A6C[v6 + 421784755] = 0;
      }
      v10 = dword_140404A6C[v3 + 421784755];
      v11 = 2 * v2;
      v12 = dword_140404A6C[2 * v11 + 283827814];
      if ( v10 <= 0 )
        sub_140138590(v12, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 255, 64, 128, 0);
      else
        sub_1400EE0A0(v12, v10, *(_QWORD *)&dword_140404A6C[v3 + 421784757], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
      (*(void (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
      sub_140158AB0(v21, "texturematerial/%s.png", v4);
      v13 = sub_14020B8D8(v21, "rb");
      v14 = (FILE *)v13;
      if ( !v13 )
        break;
      sub_14020C4A8(v13, 0, 2u);
      dword_140404A6C[v3 + 421784759] = ftell_sr(v14);
      sub_14020C4A8((__int64)v14, 0, 0);
      v15 = sr_path_malloc((int)dword_140404A6C[v3 + 421784759]);
      v16 = (int)dword_140404A6C[v3 + 421784759];
      *(_QWORD *)&dword_140404A6C[v3 + 421784761] = v15;
      fread_sr((void *)(uintptr_t)(v15), 1, v16, (FILE *)(uintptr_t)(v14));
      sub_14020B9E8((__int64)v14);
      v17 = dword_140404A6C[v3 + 421784759];
      v18 = dword_140404A6C[2 * v11 + 283827815];
      if ( v17 <= 0 )
        goto LABEL_13;
      sub_1400EE0A0(v18, v17, *(_QWORD *)&dword_140404A6C[v3 + 421784761], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
LABEL_14:
      (*(void (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
      if ( ++v0 >= (int)dword_140404A6C[421784474] )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    v18 = dword_140404A6C[2 * v11 + 283827815];
    dword_140404A6C[v3 + 421784759] = 0;
LABEL_13:
    sub_140138590(v18, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 32, 192, 0, 0);
    goto LABEL_14;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v20
#undef v21
#undef v22

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);

//----- (00000001400E7410) ----------------------------------------------------
double            sub_1400E7410(int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx

  v1 = 46LL * a1;
  v2 = 2LL * a1;
  v3 = dword_140404A6C[v1 + 421784755];
  v4 = dword_140404A6C[4 * a1 + 283827814];
  if ( v3 <= 0 )
    sub_140138590(v4, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 255, 64, 128, 0);
  else
    sub_1400EE0A0(v4, v3, *(_QWORD *)&dword_140404A6C[v1 + 421784757], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  (*(void (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
  v5 = dword_140404A6C[v1 + 421784759];
  v6 = dword_140404A6C[2 * v2 + 283827815];
  if ( v5 <= 0 )
    sub_140138590(v6, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 32, 192, 0, 0);
  else
    sub_1400EE0A0(v6, v5, *(_QWORD *)&dword_140404A6C[v1 + 421784761], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  return (*(double (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);

//----- (00000001400E7590) ----------------------------------------------------
__int64            sub_1400E7590(char *a1)
{
  __int64 result; // rax
  unsigned __int8 *v2; // r9
  signed int v3; // edx
  unsigned int v4; // ebp
  int v5; // edi
  unsigned int v6; // r13d
  signed int v7; // r14d
  unsigned int v8; // r12d
  int v9; // r15d
  int v10; // eax
  int v11; // ebx
  int v12; // r11d
  int v13; // esi
  int v14; // r8d
  int v15; // r10d
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF

  result = sub_140170C30(a1, (int *)&dword_140404A6C[468765293], (int *)&dword_140404A6C[468765294], &v18, 0);
  v2 = (unsigned __int8 *)result;
  if ( result )
  {
    v3 = dword_140404A6C[468765294];
    v4 = v18;
    v5 = dword_140404A6C[468765293];
    v6 = v18 * dword_140404A6C[468765293];
    v7 = 0;
    v18 *= dword_140404A6C[468765293];
    if ( (int)dword_140404A6C[468765294] > 0 )
    {
      v8 = dword_140404A6C[293250409];
      v9 = 0;
      do
      {
        v10 = 0;
        if ( v5 > 0 )
        {
          v11 = v9;
          v12 = v9;
          do
          {
            v13 = v2[v12];
            v14 = v2[v12 + 1];
            v15 = v2[v12 + 2];
            if ( v4 == 4 )
              v16 = v2[v11 + 3];
            else
              v16 = 255;
            v17 = v5 * (v3 - v7 - 1);
            if ( v8 )
              dword_140404A6C[v10 + 468765295 + v17] = (v15 << 8) + v16 + (v14 << 16) + (v13 << 24);
            else
              dword_140404A6C[v10 + 468765295 + v17] = (v16 << 24) + v13 + (v15 << 16) + (v14 << 8);
            v5 = dword_140404A6C[468765293];
            ++v10;
            v3 = dword_140404A6C[468765294];
            v12 += v4;
            v11 += 4;
          }
          while ( v10 < (int)dword_140404A6C[468765293] );
          v6 = v18;
        }
        ++v7;
        v9 += v6;
      }
      while ( v7 < v3 );
    }
    free(v2);
    return 1;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE010: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (00000001400E7720) ----------------------------------------------------
__int64            sub_1400E7720(int a1, __int64 a2)
{
  __m128i *v2; // r9
  signed int v3; // edx
  unsigned int v4; // ebp
  int v5; // edi
  unsigned int v6; // r13d
  signed int v7; // r14d
  unsigned int v8; // r12d
  int v9; // r15d
  int v10; // eax
  int v11; // ebx
  int v12; // r11d
  int v13; // esi
  int v14; // r8d
  int v15; // r10d
  int v16; // ecx
  int v17; // edx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E7720[304];
#define v19 (*(_BYTE (*)[32])(void *)(sr_frame_1400E7720 + 0)) /* [rsp+0h] */
#define v20 (*(unsigned int (*)[4])(void *)(sr_frame_1400E7720 + 48)) /* [rsp+30h] */
#define v21 (*(_BYTE (*)[16])(void *)(sr_frame_1400E7720 + 64)) /* [rsp+40h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 80)) /* [rsp+50h] */
#define v23 (*(int (*))(void *)(sr_frame_1400E7720 + 112)) /* [rsp+70h] */
#define v24 (*(int (*))(void *)(sr_frame_1400E7720 + 248)) /* [rsp+F8h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 256)) /* [rsp+100h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 264)) /* [rsp+108h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 272)) /* [rsp+110h] */
#define v28 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 280)) /* [rsp+118h] */
#define v29 (*(__int64 (*))(void *)(sr_frame_1400E7720 + 288)) /* [rsp+120h] */

  if ( !a1 )
    return 0; /* the function has no caller */
  v22 = 0;
  v23 = 0;
  v27 = a2;
  v28 = a2 + a1;
  v26 = v28;
  v25 = a2;
  v24 = 0;
  v2 = sub_140166160((__int64)v21, (int *)&dword_140404A6C[468765293], (int *)&dword_140404A6C[468765294], v20, 0);
  if ( !v2 )
    return 0; /* the function has no caller */
  v3 = dword_140404A6C[468765294];
  v4 = v20[0];
  v5 = dword_140404A6C[468765293];
  v6 = v20[0] * dword_140404A6C[468765293];
  v7 = 0;
  v20[0] *= dword_140404A6C[468765293];
  if ( (int)dword_140404A6C[468765294] > 0 )
  {
    v8 = dword_140404A6C[293250409];
    v9 = 0;
    do
    {
      v10 = 0;
      if ( v5 > 0 )
      {
        v11 = v9;
        v12 = v9;
        do
        {
          v13 = SR_VEC_PTR_LANES(128, v2, u8)[v12];
          v14 = SR_VEC_PTR_LANES(128, v2, u8)[v12 + 1];
          v15 = SR_VEC_PTR_LANES(128, v2, u8)[v12 + 2];
          if ( v4 == 4 )
            v16 = SR_VEC_PTR_LANES(128, v2, u8)[v11 + 3];
          else
            v16 = 255;
          v17 = v5 * (v3 - v7 - 1);
          if ( v8 )
            dword_140404A6C[v10 + 468765295 + v17] = (v15 << 8) + v16 + (v14 << 16) + (v13 << 24);
          else
            dword_140404A6C[v10 + 468765295 + v17] = (v16 << 24) + v13 + (v15 << 16) + (v14 << 8);
          v5 = dword_140404A6C[468765293];
          ++v10;
          v3 = dword_140404A6C[468765294];
          v12 += v4;
          v11 += 4;
        }
        while ( v10 < (int)dword_140404A6C[468765293] );
        v6 = v20[0];
      }
      ++v7;
      v9 += v6;
    }
    while ( v7 < v3 );
  }
  free(v2);
  return 0; /* the function has no caller */
}
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE010: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (00000001400ED9D0) ----------------------------------------------------
__int64            sub_1400ED9D0(
        int a1,
        char *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // rbp
  char *v10; // rbx
  __int64 result; // rax
  signed __int64 v12; // rcx
  char v13; // al
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int *v16; // rbx
  unsigned int *v17; // rsi
  void **v18; // rdi
  __int64 v19; // rax
  signed int v20; // r9d
  signed int i; // eax
  signed int v22; // ecx

  v7 = a1;
  v10 = a2;
  result = sub_1400E7590(a2);
  if ( (_DWORD)result )
  {
    v12 = (char *)&dword_140404A6C[284205165] - v10;
    do
    {
      v13 = *v10;
      v10[v12] = *v10;
      ++v10;
    }
    while ( v13 );
    v14 = dword_140404A6C[468765293];
    v15 = 44 * v7;
    v16 = &dword_140404A6C[44 * v7 + 284024933];
    v17 = &dword_140404A6C[44 * v7 + 284024934];
    dword_140404A6C[v15 + 284024938] = a4;
    *v16 = v14;
    v18 = (void **)&dword_140404A6C[44 * v7 + 284024945];
    *v17 = dword_140404A6C[468765294];
    dword_140404A6C[v15 + 284024939] = a5;
    dword_140404A6C[v15 + 284024940] = a6;
    dword_140404A6C[v15 + 284024941] = a7;
    dword_140404A6C[v15 + 284024935] = 1;
    dword_140404A6C[v15 + 284024936] = 6408;
    dword_140404A6C[v15 + 284024937] = 6408;
    dword_140404A6C[v15 + 284024943] = 0;
    free(*v18);
    v19 = sr_path_malloc((int)(4 * *v16 * *v17));
    v20 = 0;
    for ( *v18 = (void *)v19; v20 < (int)*v17; ++v20 )
    {
      for ( i = 0; i < (int)*v16; *((_DWORD *)*v18 + v22) = dword_140404A6C[v22 + 468765295] )
      {
        v22 = i + *v16 * v20;
        ++i;
      }
    }
    if ( a3 )
      sub_14009A370(v7);
    sub_14014D3E0(v7, 1);
    return 1;
  }
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (00000001400EDB70) ----------------------------------------------------
__int64            sub_1400EDB70(
        int a1,
        char *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // rbp
  char *v10; // rbx
  __int64 result; // rax
  signed __int64 v12; // rcx
  char v13; // al
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int *v16; // rbx
  unsigned int *v17; // rsi
  void **v18; // rdi
  __int64 v19; // rax
  signed int v20; // r9d
  signed int i; // eax
  signed int v22; // ecx

  v7 = a1;
  v10 = a2;
  result = sub_1400E7590(a2);
  if ( (_DWORD)result )
  {
    v12 = (char *)&dword_140404A6C[284205165] - v10;
    do
    {
      v13 = *v10;
      v10[v12] = *v10;
      ++v10;
    }
    while ( v13 );
    v14 = dword_140404A6C[468765293];
    v15 = 44 * v7;
    v16 = &dword_140404A6C[44 * v7 + 284024933];
    v17 = &dword_140404A6C[44 * v7 + 284024934];
    dword_140404A6C[v15 + 284024938] = a4;
    *v16 = v14;
    v18 = (void **)&dword_140404A6C[44 * v7 + 284024945];
    *v17 = dword_140404A6C[468765294];
    dword_140404A6C[v15 + 284024939] = a5;
    dword_140404A6C[v15 + 284024940] = a6;
    dword_140404A6C[v15 + 284024941] = a7;
    dword_140404A6C[v15 + 284024935] = 1;
    dword_140404A6C[v15 + 284024936] = 6408;
    dword_140404A6C[v15 + 284024937] = 6408;
    dword_140404A6C[v15 + 284024943] = 0;
    free(*v18);
    v19 = sr_path_malloc((int)(4 * *v16 * *v17));
    v20 = 0;
    for ( *v18 = (void *)v19; v20 < (int)*v17; ++v20 )
    {
      for ( i = 0; i < (int)*v16; *((_DWORD *)*v18 + v22) = dword_140404A6C[v22 + 468765295] )
      {
        v22 = i + *v16 * v20;
        ++i;
      }
    }
    if ( a3 )
      sub_14009A370(v7);
    sub_14014D3E0(v7, 1);
    return 1;
  }
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (00000001400EDD10) ----------------------------------------------------
void            sub_1400EDD10(int a1, char *a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  __int64 v7; // rbp
  char *v9; // rbx
  signed __int64 v10; // r14
  char v11; // al
  __int64 v12; // rcx
  unsigned int *v13; // rbx
  unsigned int *v14; // r15
  void **v15; // r14
  __int64 v16; // rax
  int v17; // r10d
  signed int v18; // edx
  unsigned int v19; // eax
  signed int i; // r9d

  v7 = a1;
  v9 = a2;
  if ( strcmp_sr((     char *)&dword_140404A6C[284205165], a2) )
  {
    if ( !(unsigned int)sub_1400E7590(v9) )
      return;
    v10 = (char *)&dword_140404A6C[284205165] - v9;
    do
    {
      v11 = *v9;
      v9[v10] = *v9;
      ++v9;
    }
    while ( v11 );
  }
  v12 = 44 * v7;
  v13 = &dword_140404A6C[44 * v7 + 284024933];
  v14 = &dword_140404A6C[44 * v7 + 284024934];
  v15 = (void **)&dword_140404A6C[44 * v7 + 284024945];
  dword_140404A6C[v12 + 284024935] = 1;
  dword_140404A6C[v12 + 284024936] = 6408;
  dword_140404A6C[v12 + 284024933] = a5;
  dword_140404A6C[v12 + 284024934] = a6;
  dword_140404A6C[v12 + 284024937] = 6408;
  dword_140404A6C[v12 + 284024943] = 0;
  dword_140404A6C[v12 + 284024938] = 33071;
  dword_140404A6C[v12 + 284024939] = 33071;
  dword_140404A6C[v12 + 284024940] = 9729;
  dword_140404A6C[v12 + 284024941] = 9729;
  free(*v15);
  v16 = sr_path_malloc((int)(4 * *v13 * *v14));
  v17 = 0;
  *v15 = (void *)v16;
  if ( (int)*v14 > 0 )
  {
    v18 = dword_140404A6C[468765293];
    do
    {
      if ( v17 < (int)dword_140404A6C[468765294] )
      {
        v19 = *v13;
        for ( i = 0; i < (int)*v13; ++i )
        {
          if ( i < v18 )
          {
            *((_DWORD *)*v15 + (int)(i + v17 * v19)) = dword_140404A6C[a3 + 468765295 + i + v18 * (v17 + a4)];
            v18 = dword_140404A6C[468765293];
          }
          v19 = *v13;
        }
      }
      ++v17;
    }
    while ( v17 < (int)*v14 );
  }
  sub_14014D3E0(v7, 0);
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B0037420: using guessed type unsigned int;

//----- (00000001400EDED0) ----------------------------------------------------
__int64            sub_1400EDED0(
        int a1,
        char *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 v8; // rbp
  char *v11; // rbx
  unsigned int v12; // edx
  unsigned int v13; // r8d
  signed __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rcx
  unsigned int *v17; // rbx
  unsigned int *v18; // rsi
  void **v19; // rdi
  __int64 v20; // rax
  signed int v21; // r10d
  unsigned int v22; // ecx
  signed int i; // edx
  signed int v24; // eax

  v8 = a1;
  v11 = a2;
  if ( !(unsigned int)sub_1400E7590(a2) )
    return 0;
  v12 = dword_140404A6C[468765293];
  if ( (v12 & (v12 - 1)) != 0 )
    return 0;
  v13 = dword_140404A6C[468765294];
  if ( (v13 & (v13 - 1)) != 0 )
    return 0;
  v14 = (char *)&dword_140404A6C[284205165] - v11;
  do
  {
    v15 = *v11;
    v11[v14] = *v11;
    ++v11;
  }
  while ( v15 );
  v16 = 44 * v8;
  v17 = &dword_140404A6C[44 * v8 + 284024933];
  v18 = &dword_140404A6C[44 * v8 + 284024934];
  dword_140404A6C[v16 + 284024938] = a4;
  dword_140404A6C[v16 + 284024939] = a5;
  v19 = (void **)&dword_140404A6C[44 * v8 + 284024945];
  dword_140404A6C[v16 + 284024940] = a6;
  *v17 = v12;
  *v18 = v13;
  dword_140404A6C[v16 + 284024935] = 1;
  dword_140404A6C[v16 + 284024936] = 6408;
  dword_140404A6C[v16 + 284024937] = 6408;
  dword_140404A6C[v16 + 284024943] = 0;
  dword_140404A6C[v16 + 284024941] = a7;
  free(*v19);
  v20 = sr_path_malloc((int)(4 * *v17 * *v18));
  v21 = 0;
  for ( *v19 = (void *)v20; v21 < (int)*v18; ++v21 )
  {
    v22 = *v17;
    for ( i = 0; i < (int)*v17; v22 = *v17 )
    {
      v24 = i + v22 * v21;
      if ( dword_140404A6C[293250409] )
      {
        LOBYTE(dword_140404A6C[v24 + 468765295]) = 0;
        dword_140404A6C[v24 + 468765295] |= a8;
      }
      else
      {
        HIBYTE(dword_140404A6C[v24 + 468765295]) = 0;
        dword_140404A6C[v24 + 468765295] |= a8 << 24;
      }
      ++i;
      *((_DWORD *)*v19 + v24) = dword_140404A6C[v24 + 468765295];
    }
  }
  if ( a3 )
    sub_14009A370(v8);
  sub_14014D3E0(v8, 0);
  return 1;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (00000001400EE0A0) ----------------------------------------------------
__int64            sub_1400EE0A0(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  int v9; // r12d
  int v10; // r15d
  __m128i *v11; // r11
  int v12; // ebx
  signed int v13; // ecx
  unsigned int v14; // ebp
  unsigned int v15; // r13d
  signed int v16; // r14d
  unsigned int v17; // r12d
  int v18; // r15d
  int v19; // r9d
  int v20; // esi
  int v21; // edi
  int v22; // r10d
  int v23; // edx
  int v24; // r8d
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // edx
  unsigned int *v28; // rbx
  __int64 v29; // rax
  signed int v30; // r10d
  unsigned int v31; // ecx
  signed int i; // edx
  signed int v33; // eax
  _Alignas(8) unsigned char v39[224];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EE0A0[304];
#define v35 (*(__int64 (*))(void *)(sr_frame_1400EE0A0 + 0)) /* [rsp+0h] */
#define v36 (*(unsigned int (*))(void *)(sr_frame_1400EE0A0 + 48)) /* [rsp+30h] */
#define v37 (*(int (*))(void *)(sr_frame_1400EE0A0 + 52)) /* [rsp+34h] */
#define v38 (*(int (*))(void *)(sr_frame_1400EE0A0 + 56)) /* [rsp+38h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_1400EE0A0 + 288)) /* [rsp+120h] */

  v37 = a4;
  v9 = a4;
  v38 = a1;
  v10 = a1;
  if ( a2 )
  {
    (*(_QWORD *)(void *)(v39+16)) = 0;
    (*(_DWORD *)(void *)(v39+48)) = 0;
    (*(_QWORD *)(void *)(v39+208)) = a3;
    (*(_QWORD *)(void *)(v39+216)) = a3 + a2;
    (*(_QWORD *)(void *)(v39+200)) = (*(_QWORD *)(void *)(v39+216));
    (*(_QWORD *)(void *)(v39+192)) = a3;
    (*(_DWORD *)(void *)(v39+184)) = 0;
    v11 = sub_140166160((__int64)v39, (int *)&dword_140404A6C[468765293], (int *)&dword_140404A6C[468765294], &v36, 0);
    if ( v11 )
    {
      v12 = dword_140404A6C[468765293];
      v13 = dword_140404A6C[468765294];
      v14 = v36;
      v15 = v36 * dword_140404A6C[468765293];
      v16 = 0;
      v36 *= dword_140404A6C[468765293];
      if ( (int)dword_140404A6C[468765294] > 0 )
      {
        v17 = dword_140404A6C[293250409];
        v18 = 0;
        do
        {
          v19 = 0;
          if ( v12 > 0 )
          {
            v20 = v18;
            v21 = v18;
            do
            {
              v22 = SR_VEC_PTR_LANES(128, v11, u8)[v21];
              v23 = SR_VEC_PTR_LANES(128, v11, u8)[v21 + 1];
              v24 = SR_VEC_PTR_LANES(128, v11, u8)[v21 + 2];
              if ( v14 == 4 )
                v25 = SR_VEC_PTR_LANES(128, v11, u8)[v20 + 3];
              else
                v25 = 255;
              v26 = v13 - v16;
              if ( v17 )
                dword_140404A6C[v19 + 468765295 + v12 * (v26 - 1)] = (v24 << 8) + v25 + (v23 << 16) + (v22 << 24);
              else
                dword_140404A6C[v19 + 468765295 + v12 * (v26 - 1)] = (v25 << 24) + v22 + (v24 << 16) + (v23 << 8);
              v12 = dword_140404A6C[468765293];
              ++v19;
              v13 = dword_140404A6C[468765294];
              v21 += v14;
              v20 += 4;
            }
            while ( v19 < (int)dword_140404A6C[468765293] );
            v15 = v36;
          }
          ++v16;
          v18 += v15;
        }
        while ( v16 < v13 );
        v10 = v38;
        v9 = v37;
      }
      free(v11);
      if ( ((dword_140404A6C[468765293] - 1) & dword_140404A6C[468765293]) == 0 )
      {
        v27 = dword_140404A6C[468765294];
        if ( ((dword_140404A6C[468765294] - 1) & dword_140404A6C[468765294]) == 0 )
        {
          v28 = &dword_140404A6C[44 * v10 + 284024933];
          *v28 = dword_140404A6C[468765293];
          v28[1] = v27;
          LOBYTE(dword_140404A6C[284205165]) = 0;
          v28[5] = a5;
          v28[6] = a6;
          v28[7] = a7;
          v28[8] = a8;
          v28[2] = 1;
          v28[3] = 6408;
          v28[4] = 6408;
          v28[10] = 0;
          free(*((void **)v28 + 6));
          v29 = sr_path_malloc((int)(4 * *v28 * v28[1]));
          v30 = 0;
          *((_QWORD *)v28 + 6) = v29;
          if ( (int)v28[1] > 0 )
          {
            do
            {
              v31 = *v28;
              for ( i = 0; i < (int)*v28; v31 = *v28 )
              {
                v33 = i + v31 * v30;
                if ( dword_140404A6C[293250409] )
                {
                  LOBYTE(dword_140404A6C[v33 + 468765295]) = 0;
                  dword_140404A6C[v33 + 468765295] |= a9;
                }
                else
                {
                  HIBYTE(dword_140404A6C[v33 + 468765295]) = 0;
                  dword_140404A6C[v33 + 468765295] |= a9 << 24;
                }
                ++i;
                *(_DWORD *)(*((_QWORD *)v28 + 6) + 4LL * v33) = dword_140404A6C[v33 + 468765295];
              }
              ++v30;
            }
            while ( v30 < (int)v28[1] );
            v9 = v37;
          }
          if ( v9 )
            sub_14009A370(v10);
          sub_14014D3E0(v10, 0);
        }
      }
    }
  }
  return 0; /* native EAX=0 on the shared epilogue */
}
#undef v35
#undef v36
#undef v37
#undef v38
#undef v47

// 1400EE49E: variable 'sr_spec.channels' is possibly undefined
// 1400EE4A4: variable 'sr_spec.freq' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140138590) ----------------------------------------------------
__int64            sub_140138590(
        int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  unsigned int *v11; // rbx
  __int64 v12; // rax
  signed int v13; // r9d
  signed int i; // ecx
  signed int v15; // eax

  v11 = &dword_140404A6C[44 * a1 + 284024933];
  v11[1] = 1;
  *v11 = 1;
  v11[7] = a5;
  v11[8] = a6;
  v11[2] = 1;
  v11[3] = 6408;
  v11[4] = 6408;
  v11[10] = 0;
  v11[5] = a3;
  v11[6] = a4;
  free(*((void **)v11 + 6));
  v12 = sr_path_malloc((int)(4 * *v11 * v11[1]));
  v13 = 0;
  for ( *((_QWORD *)v11 + 6) = v12; v13 < (int)v11[1]; ++v13 )
  {
    for ( i = 0; i < (int)*v11; *(_DWORD *)(*((_QWORD *)v11 + 6) + 4LL * v15) = (a10 << 24)
                                                                              + a7
                                                                              + (a9 << 16)
                                                                              + (a8 << 8) )
    {
      v15 = i + v13 * *v11;
      ++i;
    }
  }
  sub_14014D3E0(a1, 0);
  return 1;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014013C6E0) ----------------------------------------------------
__int64 sub_14013C6E0()
{
  int v0; // esi
  __int64 v1; // rax
  int v2; // ecx
  unsigned int *v3; // rdi
  __int64 v4; // rbx
  char *v5; // rdx
  unsigned int *v6; // rcx
  char v7; // al
  int v8; // eax
  int v9; // eax
  int v10; // r9d
  __int64 v11; // r8
  __int64 v12; // rax
  char *v13; // rcx
  char v14; // dl
  char v15; // dl
  char v16; // dl
  signed int v17; // r8d
  unsigned int *v18; // r10
  __int64 v19; // r11
  unsigned int *v20; // rdx
  char v21; // al
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14013C6E0[352];
#define v23 (*(__int64 (*))(void *)(sr_frame_14013C6E0 + 0)) /* [rsp+0h] */
#define v24 (*(_BYTE (*)[36])(void *)(sr_frame_14013C6E0 + 32)) /* [rsp+20h] */
#define v25 (*(char (*))(void *)(sr_frame_14013C6E0 + 68)) /* [rsp+44h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_14013C6E0 + 336)) /* [rsp+150h] */

  v0 = sub_14024C22C("texture");
  v1 = sub_14023A198("*.png", (__int64)v24);
  v2 = 0;
  v3 = &dword_140404A6C[293119326];
  dword_140404A6C[293119325] = 0;
  v4 = v1;
  if ( (_DWORD)v1 != -1 )
  {
    do
    {
      if ( v2 >= 1024 )
        break;
      if ( (v24[0] & 0x10) == 0 )
      {
        v5 = &v25;
        v6 = &dword_140404A6C[16 * (__int64)v2 + 293119326];
        do
        {
          v7 = *v5++;
          *(_BYTE *)v6 = v7;
          v6 = (unsigned int *)((char *)v6 + 1);
        }
        while ( v7 );
        ++dword_140404A6C[293119325];
      }
      v8 = sub_14023A5C4(v4, (__int64)v24);
      v2 = dword_140404A6C[293119325];
    }
    while ( v8 != -1 );
  }
  LOBYTE(dword_140404A6C[16 * (__int64)v2 + 293119326]) = 0;
  sub_140239CCC(v4);
  sub_14023AE00(
    (unsigned __int64)&dword_140404A6C[293119326],
    (int)dword_140404A6C[293119325],
    0x40u,
    (int (           *)(unsigned __int64, _BYTE *))sub_14004C4C0);
  v9 = dword_140404A6C[293119325];
  v10 = 0;
  if ( (int)dword_140404A6C[293119325] > 0 )
  {
    v11 = 0;
    do
    {
      v12 = 0;
      v13 = (char *)&dword_140404A6C[v11 + 293119326] + 1;
      do
      {
        v14 = *(v13 - 1);
        if ( !v14 || v14 == 46 )
          break;
        if ( !*v13 || *v13 == 46 )
        {
          ++v12;
          break;
        }
        v15 = v13[1];
        if ( !v15 || v15 == 46 )
        {
          v12 += 2;
          break;
        }
        v16 = v13[2];
        if ( !v16 || v16 == 46 )
        {
          v12 += 3;
          break;
        }
        v12 += 4;
        v13 += 4;
      }
      while ( v12 < 64 );
      ++v10;
      *((_BYTE *)&dword_140404A6C[v11 + 293119326] + v12) = 0;
      v11 += 16;
      v9 = dword_140404A6C[293119325];
    }
    while ( v10 < (int)dword_140404A6C[293119325] );
  }
  if ( !v0 )
  {
    sub_14024C22C("..");
    v9 = dword_140404A6C[293119325];
  }
  v17 = dword_140404A6C[421784473];
  dword_140404A6C[421784253] = dword_140404A6C[421784473];
  dword_140404A6C[421784474] = 0;
  if ( v9 > 0 )
  {
    v18 = &dword_140404A6C[421784475];
    v19 = (unsigned int)v9;
    do
    {
      v20 = v3;
      do
      {
        v21 = *(_BYTE *)v20;
        *((_BYTE *)v20 + (_QWORD)&dword_140404A6C[421784739] + 184LL * v17 - (_QWORD)v3) = *(_BYTE *)v20;
        v20 = (unsigned int *)((char *)v20 + 1);
      }
      while ( v21 );
      *v18 = v17;
      v3 += 16;
      ++v18;
      ++dword_140404A6C[421784474];
      v17 = ++dword_140404A6C[421784253];
      --v19;
    }
    while ( v19 );
  }
  return 0; /* the function has no caller */
}
#undef v23
#undef v24
#undef v25
#undef v26

// 140239CCC: using guessed type __int64 __fastcall sub_140239CCC(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18622DFE0: using guessed type unsigned int;
// 1A4CFF560: using guessed type unsigned int;
// 1A4CFF8D0: using guessed type unsigned int;
// 1A4CFF8D4: using guessed type unsigned int;

