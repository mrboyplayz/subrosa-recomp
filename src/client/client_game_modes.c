#include "shared_client.h"


//----- (000000014008C1F0) ----------------------------------------------------
void sub_14008C1F0()
{
  unsigned int *v0; // rsi
  unsigned int *v1; // rbx
  unsigned int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rdi

  v0 = &dword_140404A6C[335047158];
  v1 = &dword_140404A6C[335047158];
  do
  {
    if ( *v1 )
    {
      if ( (rand() & 7) == 0 )
        *v1 = 0;
    }
    v1 += 4;
  }
  while ( (__int64)v1 < (__int64)&dword_140404A6C[335047190] );
  do
  {
    if ( *v0 )
      goto LABEL_21;
    v2 = rand() & 0xF;
    if ( v2 < 2 )
    {
      v3 = 7;
LABEL_19:
      v4 = v3;
      goto LABEL_20;
    }
    if ( v2 >= 6 )
    {
      if ( v2 < 0xA )
      {
        v3 = 15;
        goto LABEL_19;
      }
      if ( v2 < 0xD )
      {
        v3 = 9;
        goto LABEL_19;
      }
      if ( v2 < 0xF )
      {
        v3 = 6;
        goto LABEL_19;
      }
      LODWORD(v3) = 4;
      v4 = 4;
      if ( (rand() & 0xF) == 0 )
      {
        v3 = 5;
        goto LABEL_19;
      }
    }
    else
    {
      LODWORD(v3) = 0;
      v4 = 0;
    }
LABEL_20:
    *v0 = 1;
    v0[1] = v3;
    v0[3] = dword_140404A6C[24944 * v4 + 346707730];
    v0[2] = rand() % 6;
LABEL_21:
    v0 += 4;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[335047190] );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014008C810) ----------------------------------------------------
__int64 sub_14008C810()
{
  float *v0; // r10
  unsigned int *v1; // rdi
  int i; // r9d
  int v3; // r11d
  int *v4; // rcx
  __int64 v5; // rbx
  float v6; // xmm2_4
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  float v11; // xmm2_4
  unsigned int *v12; // rdx
  __int64 result; // rax
  int j; // r10d
  __int64 v15; // r11
  int v16; // r8d
  int *v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rbx
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  __int64 v24; // rbx
  unsigned int *v25; // r9
  unsigned __int64 v26; // rdx
  unsigned int *v27; // rdi
  __int64 v28; // r11
  unsigned int *v29; // r10
  int v30; // r8d
  __int64 v31; // r8

  v0 = (float *)&dword_140404A6C[335047062];
  v1 = &dword_140404A6C[283831508];
  for ( i = 0; i < 3; ++i )
  {
    v3 = *v1;
    v4 = (int *)&dword_140404A6C[71856271];
    v5 = 64;
    v6 = (float)((float)(int)*v1 * 0.009999999776482582) - 0.5;
    do
    {
      if ( *(v4 - 18) && *v4 > 0 && v4[15] == i )
      {
        v7 = v3 / 2;
        if ( v6 >= 1.0 && v4[18] )
          v7 = (int)(float)((float)((float)((float)v4[17] * *v0) * (float)(v6 * 0.0010000000474974513)) + (float)v7);
        v4[1] += 150 + v7;
      }
      if ( v4[3579] && v4[3597] > 0 && v4[3612] == i )
      {
        v8 = v3 / 2;
        if ( v6 >= 1.0 && v4[3615] )
          v8 = (int)(float)((float)((float)((float)v4[3614] * *v0) * (float)(v6 * 0.0010000000474974513)) + (float)v8);
        v4[3598] += 150 + v8;
      }
      if ( v4[7176] && v4[7194] > 0 && v4[7209] == i )
      {
        v9 = v3 / 2;
        if ( v6 >= 1.0 && v4[7212] )
          v9 = (int)(float)((float)((float)((float)v4[7211] * *v0) * (float)(v6 * 0.0010000000474974513)) + (float)v9);
        v4[7195] += 150 + v9;
      }
      if ( v4[10773] && v4[10791] > 0 && v4[10806] == i )
      {
        v10 = v3 / 2;
        if ( v6 >= 1.0 && v4[10809] )
          v10 = (int)(float)((float)((float)((float)v4[10808] * *v0) * (float)(v6 * 0.0010000000474974513)) + (float)v10);
        v4[10792] += 150 + v10;
      }
      v4 += 14388;
      --v5;
    }
    while ( v5 );
    v11 = (float)((float)(v6 * 0.004999999888241291) + 1.0) * *v0;
    if ( v11 >= 10.0 )
    {
      *v0 = v11;
      if ( v11 >= 500.0 )
      {
        v12 = &dword_140404A6C[71856288];
        *v0 = v11 * 0.20000000298023224;
        do
        {
          if ( *(v12 - 35) && *(v12 - 2) == i )
            *v12 *= 5;
          v12 += 3597;
        }
        while ( (__int64)v12 < (__int64)&dword_140404A6C[72777120] );
      }
    }
    else
    {
      *v0 = 10.0;
    }
    v1 += 5873;
    v0 += 6;
  }
  result = (__int64)&dword_140404A6C[71856289];
  do
  {
    if ( *(_DWORD *)(result - 144) )
      *(_DWORD *)result = 0;
    if ( *(_DWORD *)(result + 14244) )
      *(_DWORD *)(result + 14388) = 0;
    result += 28776;
  }
  while ( result < (__int64)&dword_140404A6C[72777121] );
  for ( j = 0; j < 3; ++j )
  {
    v15 = -1;
    v16 = 1000;
    v17 = (int *)&dword_140404A6C[71856271];
    v18 = 2;
    v19 = 64;
    do
    {
      if ( *(v17 - 18) )
      {
        if ( *v17 > 0 )
        {
          result = v17[15];
          if ( (_DWORD)result == j )
          {
            v20 = (float)((float)v17[17] * *(float *)&dword_140404A6C[6 * result + 335047062]) + (float)v17[1];
            if ( (float)v16 < v20 )
            {
              v15 = v18 - 2;
              v16 = (int)v20;
            }
          }
        }
      }
      if ( v17[3579] )
      {
        if ( v17[3597] > 0 )
        {
          result = v17[3612];
          if ( (_DWORD)result == j )
          {
            v21 = (float)((float)v17[3614] * *(float *)&dword_140404A6C[6 * result + 335047062]) + (float)v17[3598];
            if ( (float)v16 < v21 )
            {
              v15 = v18 - 1;
              v16 = (int)v21;
            }
          }
        }
      }
      if ( v17[7176] )
      {
        if ( v17[7194] > 0 )
        {
          result = v17[7209];
          if ( (_DWORD)result == j )
          {
            v22 = (float)((float)v17[7211] * *(float *)&dword_140404A6C[6 * result + 335047062]) + (float)v17[7195];
            if ( (float)v16 < v22 )
            {
              v15 = v18;
              v16 = (int)v22;
            }
          }
        }
      }
      if ( v17[10773] )
      {
        if ( v17[10791] > 0 )
        {
          result = v17[10806];
          if ( (_DWORD)result == j )
          {
            v23 = (float)((float)v17[10808] * *(float *)&dword_140404A6C[6 * result + 335047062]) + (float)v17[10792];
            if ( (float)v16 < v23 )
            {
              v15 = v18 + 1;
              v16 = (int)v23;
            }
          }
        }
      }
      v18 += 4;
      v17 += 14388;
      --v19;
    }
    while ( v19 );
    if ( v15 != -1 )
    {
      result = 14388 * v15;
      dword_140404A6C[3597 * v15 + 71856289] = 1;
    }
  }
  v24 = 0;
  v25 = &dword_140404A6C[71856292];
  do
  {
    if ( *(v25 - 39) )
    {
      result = (int)*v25;
      if ( (_DWORD)result != -1 )
      {
        v26 = 0;
        v27 = &dword_140404A6C[7166 * result + 280658140];
        while ( 1 )
        {
          v28 = (int)*(v27 - 1);
          v25[v26 + 1494] = 0;
          if ( v28 > 0 )
            break;
LABEL_87:
          v26 += 25LL;
          v27 += 10;
          if ( (__int64)v26 >= 175 )
            goto LABEL_88;
        }
        v29 = v27;
        while ( 1 )
        {
          result = (int)*v29;
          v30 = dword_140404A6C[1760 * result + 278845898];
          if ( v30 > 14 )
          {
            if ( v30 != 27 )
              goto LABEL_86;
            result = (int)dword_140404A6C[1760 * result + 278846053];
            if ( (_DWORD)result == -1 )
              goto LABEL_86;
            v31 = 5210 * result;
            if ( (int)dword_140404A6C[5210 * result + 129716712] <= 0 )
              goto LABEL_86;
            dword_140404A6C[3 * v24 + 71857787 + 3 * (int)v25[v26 + 1494] + v26] = 27;
            dword_140404A6C[3 * v24 + 71857788 + 3 * (int)v25[v26 + 1494] + v26] = dword_140404A6C[v31 + 129716710];
            result = dword_140404A6C[v31 + 129716715];
            dword_140404A6C[3 * v24 + 71857789 + 3 * (int)v25[v26 + 1494] + v26] = result;
          }
          else
          {
            result = 3 * (v24 + (int)v25[v26 + 1494]);
            dword_140404A6C[3 * v24 + 71857787 + 3 * (int)v25[v26 + 1494] + v26] = v30;
          }
          ++v25[v26 + 1494];
LABEL_86:
          ++v29;
          if ( !--v28 )
            goto LABEL_87;
        }
      }
    }
LABEL_88:
    v25 += 3597;
    v24 += 1199;
  }
  while ( (__int64)v25 < (__int64)&dword_140404A6C[72777124] );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400F5480) ----------------------------------------------------
__int64 sub_1400F5480()
{
  signed int v0; // edi
  int *v1; // r8
  int i; // edx
  int v3; // ecx
  unsigned int *v4; // rax
  int v5; // edx
  int *v6; // r8
  int v7; // ecx
  unsigned int *v8; // rax
  int v9; // ebx
  unsigned int *v10; // r8
  __int64 v11; // rsi
  signed int v12; // r11d
  unsigned int *v13; // rax
  __int64 v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  unsigned int *v26; // r9
  __int64 v27; // r10
  int v28; // eax
  __int64 v29; // rcx
  unsigned int *v30; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F5480[112];
#define v32 (*(__int64 (*))(void *)(sr_frame_1400F5480 + 0)) /* [rsp+0h] */
#define v33 (*(int (*))(void *)(sr_frame_1400F5480 + 32)) /* [rsp+20h] */
#define v34 (*(int (*))(void *)(sr_frame_1400F5480 + 36)) /* [rsp+24h] */
#define v35 (*(int (*))(void *)(sr_frame_1400F5480 + 64)) /* [rsp+40h] */
#define v36 (*(int (*))(void *)(sr_frame_1400F5480 + 68)) /* [rsp+44h] */
#define v37 (*(__int64 (*))(void *)(sr_frame_1400F5480 + 96)) /* [rsp+60h] */

  v0 = 0;
  v1 = &v33;
  for ( i = 0; i < 2; ++i )
  {
    v3 = 0;
    *v1 = 0;
    v4 = &dword_140404A6C[71859139];
    do
    {
      if ( *(v4 - 2886) && !*v4 && *(v4 - 2853) == i )
        *v1 = ++v3;
      v4 += 3597;
    }
    while ( (__int64)v4 < (__int64)&dword_140404A6C[72779971] );
    ++v1;
  }
  if ( !dword_140404A6C[284022503] || !v33 || !v34 )
  {
    v35 = 2;
    goto LABEL_16;
  }
  if ( v33 >= v34 )
  {
    v35 = 2 * v33 / v34;
LABEL_16:
    v36 = 2;
    goto LABEL_17;
  }
  v35 = 2;
  v36 = 2 * v34 / v33;
LABEL_17:
  v5 = 0;
  v6 = &v33;
  do
  {
    v7 = 0;
    *v6 = 0;
    v8 = &dword_140404A6C[71859139];
    do
    {
      if ( *(v8 - 2886) && !*v8 && *(v8 - 2853) == v5 && *(v8 - 2847) != -1 )
        *v6 = ++v7;
      v8 += 3597;
    }
    while ( (__int64)v8 < (__int64)&dword_140404A6C[72779971] );
    ++v5;
    ++v6;
  }
  while ( v5 < 2 );
  v9 = 0;
  v10 = &dword_140404A6C[283831491];
  v11 = 0;
  do
  {
    v12 = 0;
    if ( *(int *)((char *)&v33 + v11 * 4) > 0 )
    {
      v13 = &dword_140404A6C[278845918];
      v14 = (unsigned int)v9 ^ 1LL;
      do
      {
        if ( *(v13 - 25) && *(v13 - 20) == 17 )
        {
          if ( (v15 = *((float *)v13 - 2), v15 >= *(float *)v10)
            && v15 < *((float *)v10 + 3)
            && (v16 = *((float *)v13 - 1), v16 >= *((float *)v10 + 1))
            && v16 < *((float *)v10 + 4)
            && *(float *)v13 >= *((float *)v10 + 2)
            && *(float *)v13 < *((float *)v10 + 5)
            || !*(&v33 + v14) )
          {
            v12 += 250;
          }
        }
        if ( v13[1735] && v13[1740] == 17 )
        {
          if ( (v17 = *((float *)v13 + 1758), v17 >= *(float *)v10)
            && v17 < *((float *)v10 + 3)
            && (v18 = *((float *)v13 + 1759), v18 >= *((float *)v10 + 1))
            && v18 < *((float *)v10 + 4)
            && (v19 = *((float *)v13 + 1760), v19 >= *((float *)v10 + 2))
            && v19 < *((float *)v10 + 5)
            || !*(&v33 + v14) )
          {
            v12 += 250;
          }
        }
        if ( v13[3495] && v13[3500] == 17 )
        {
          if ( (v20 = *((float *)v13 + 3518), v20 >= *(float *)v10)
            && v20 < *((float *)v10 + 3)
            && (v21 = *((float *)v13 + 3519), v21 >= *((float *)v10 + 1))
            && v21 < *((float *)v10 + 4)
            && (v22 = *((float *)v13 + 3520), v22 >= *((float *)v10 + 2))
            && v22 < *((float *)v10 + 5)
            || !*(&v33 + v14) )
          {
            v12 += 250;
          }
        }
        if ( v13[5255] && v13[5260] == 17 )
        {
          if ( (v23 = *((float *)v13 + 5278), v23 >= *(float *)v10)
            && v23 < *((float *)v10 + 3)
            && (v24 = *((float *)v13 + 5279), v24 >= *((float *)v10 + 1))
            && v24 < *((float *)v10 + 4)
            && (v25 = *((float *)v13 + 5280), v25 >= *((float *)v10 + 2))
            && v25 < *((float *)v10 + 5)
            || !*(&v33 + v14) )
          {
            v12 += 250;
          }
        }
        v13 += 7040;
      }
      while ( (__int64)v13 < (__int64)&dword_140404A6C[280648158] );
    }
    v26 = &dword_140404A6C[71856272];
    v27 = 256;
    do
    {
      if ( *(v26 - 19) )
      {
        if ( v26[14] == v9 )
        {
          v28 = v12 / *(int *)((char *)&v35 + v11 * 4);
          *v26 += v28 + 250;
          v29 = (int)*(v26 - 4);
          if ( (_DWORD)v29 != -1 )
            dword_140404A6C[28 * v29 + 134050374] += v28;
        }
      }
      v26 += 3597;
      --v27;
    }
    while ( v27 );
    v10[14] = v12;
    ++v9;
    dword_140404A6C[v11 + 284023018] += v12;
    v10 += 5873;
    ++v11;
  }
  while ( v9 < 2 );
  v30 = &dword_140404A6C[71856253];
  do
  {
    if ( *v30 )
      sub_140051F50(v0);
    ++v0;
    v30 += 3597;
  }
  while ( v0 < 256 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v32
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400F5820) ----------------------------------------------------
unsigned int *           sub_1400F5820(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int *v5; // rdi
  int v6; // ebx
  __int64 v7; // rbp
  unsigned int v8; // ebx
  unsigned int *v9; // rdi
  int i; // esi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int *result; // rax
  unsigned int *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx

  v3 = dword_140404A6C[283831448];
  if ( dword_140404A6C[283831448] == 2 )
  {
    sub_14018A3E0(a1, a2, a3);
    sub_140008020();
    v3 = dword_140404A6C[283831448];
  }
  if ( !dword_140404A6C[283831312] && v3 == 1 )
  {
    if ( (int)dword_140404A6C[283831450] <= 0 )
    {
      v4 = dword_140404A6C[283831453];
      dword_140404A6C[283831448] = 2;
    }
    else
    {
      v4 = dword_140404A6C[283831450] - 1;
    }
    dword_140404A6C[283831450] = v4;
  }
  v5 = &dword_140404A6C[71856253];
  v6 = 0;
  v7 = 256;
  do
  {
    if ( *v5 )
      sub_1400F1950(v6);
    ++v6;
    v5 += 3597;
  }
  while ( v6 < 256 );
  v8 = dword_140404A6C[283831312];
  v9 = &dword_140404A6C[71856342];
  for ( i = 0; i < 256; ++i )
  {
    if ( *(v9 - 89) )
    {
      if ( *(v9 - 50) == -1 )
      {
        if ( v8 - 2 <= 1 || v8 - 5 <= 2 )
        {
          v11 = 0;
          if ( dword_140404A6C[283831448] == 1 )
            v11 = 2;
          *v9 = v11;
        }
      }
      else
      {
        sub_1400F0640(i);
        v8 = dword_140404A6C[283831312];
      }
    }
    v9 += 3597;
  }
  dword_140404A6C[437192782] = dword_140404A6C[335047061];
  dword_140404A6C[437192783] = dword_140404A6C[335047067];
  dword_140404A6C[437192784] = dword_140404A6C[335047073];
  dword_140404A6C[437192785] = dword_140404A6C[335047079];
  dword_140404A6C[437192786] = dword_140404A6C[335047085];
  dword_140404A6C[437192787] = dword_140404A6C[335047091];
  dword_140404A6C[436668493] = 6;
  sub_14007D710();
  dword_140404A6C[283831506] = 0;
  dword_140404A6C[283837379] = 0;
  dword_140404A6C[283843252] = 0;
  dword_140404A6C[335047045] = dword_140404A6C[dword_140404A6C[436668499] + 437192782];
  dword_140404A6C[283849125] = 0;
  dword_140404A6C[283854998] = 0;
  dword_140404A6C[283860871] = 0;
  dword_140404A6C[335047046] = dword_140404A6C[dword_140404A6C[436668498] + 437192782];
  dword_140404A6C[335047047] = dword_140404A6C[dword_140404A6C[436668497] + 437192782];
  dword_140404A6C[335047048] = dword_140404A6C[dword_140404A6C[436668496] + 437192782];
  dword_140404A6C[335047049] = dword_140404A6C[dword_140404A6C[436668495] + 437192782];
  dword_140404A6C[335047050] = dword_140404A6C[dword_140404A6C[436668494] + 437192782];
  result = &dword_140404A6C[71856286];
  v15 = &dword_140404A6C[71856286];
  do
  {
    if ( *(v15 - 33) )
    {
      v16 = (int)*v15;
      if ( (unsigned int)v16 <= 5 && (v15[6] != -1 || v8 == 3) )
      {
        v12 = 23492 * v16;
        ++dword_140404A6C[5873 * v16 + 283831506];
        v8 = dword_140404A6C[283831312];
      }
      v13 = *(v15 - 17);
      if ( (int)v13 > 0 )
      {
        v13 = (unsigned int)(v13 - 1);
        *(v15 - 17) = v13;
      }
    }
    v15 += 3597;
    --v7;
  }
  while ( v7 );
  if ( dword_140404A6C[456202731] )
  {
    v17 = dword_140404A6C[456202732];
    v18 = dword_140404A6C[456202732] - 3;
    if ( (v18 & 0xFFFFFFFD) == 0 && v8 != dword_140404A6C[456202732] )
    {
      v18 = (__int64)&dword_140404A6C[72777118];
      do
      {
        if ( *(result - 33) )
          *result = 17;
        if ( result[3564] )
          result[3597] = 17;
        result += 7194;
      }
      while ( (__int64)result < (__int64)&dword_140404A6C[72777118] );
      dword_140404A6C[283831312] = v17;
    }
    result = (unsigned int *)sr_ResetGame(v18, v17, (__int64)v15);
    v8 = dword_140404A6C[283831312];
    dword_140404A6C[456202731] = 0;
  }
  if ( v8 == 2 )
  {
    result = (unsigned int *)sub_1400F6170(v13, v12, (__int64)v15);
    v8 = dword_140404A6C[283831312];
  }
  if ( v8 == 3 )
  {
    result = (unsigned int *)sub_1400F6C50();
    v8 = dword_140404A6C[283831312];
  }
  if ( v8 == 4 )
  {
    result = (unsigned int *)sub_1400FA3A0();
    v8 = dword_140404A6C[283831312];
  }
  if ( v8 == 5 )
  {
    result = (unsigned int *)sub_1400F80A0(v13, v12, (__int64)v15);
    v8 = dword_140404A6C[283831312];
  }
  if ( v8 == 6 )
  {
    result = (unsigned int *)sub_1400F5B60(v13);
    v8 = dword_140404A6C[283831312];
  }
  if ( v8 == 7 )
    return (unsigned int *)sub_1400F99A0();
  return result;
}

// 1400F5AEC: variable 'v13' is possibly undefined
// 1400F5AEC: variable 'v12' is possibly undefined
// 1400F5AEC: variable 'v15' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFAAC: using guessed type unsigned int;
// 183EBFCCC: using guessed type unsigned int;
// 183EBFCD4: using guessed type unsigned int;
// 183EBFCE0: using guessed type unsigned int;
// 183EBFDB4: using guessed type unsigned int;
// 183EC5978: using guessed type unsigned int;
// 183ECB53C: using guessed type unsigned int;
// 183ED1100: using guessed type unsigned int;
// 183ED6CC4: using guessed type unsigned int;
// 183EDC888: using guessed type unsigned int;
// 19021F080: using guessed type unsigned int;
// 19021F084: using guessed type unsigned int;
// 19021F088: using guessed type unsigned int;
// 19021F08C: using guessed type unsigned int;
// 19021F090: using guessed type unsigned int;
// 19021F094: using guessed type unsigned int;
// 19021F0C0: using guessed type unsigned int;
// 19021F0D8: using guessed type unsigned int;
// 19021F0F0: using guessed type unsigned int;
// 19021F108: using guessed type unsigned int;
// 19021F120: using guessed type unsigned int;
// 19021F138: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;
// 1A87C6BA4: using guessed type unsigned int;
// 1A87C6BA8: using guessed type unsigned int;
// 1A87C6BAC: using guessed type unsigned int;
// 1A87C6BB0: using guessed type unsigned int;
// 1A87C6BB4: using guessed type unsigned int;
// 1A87C6BB8: using guessed type unsigned int;
// 1AD04B218: using guessed type unsigned int;
// 1AD04B21C: using guessed type unsigned int;

//----- (00000001400F6C50) ----------------------------------------------------
__int64 sub_1400F6C50()
{
  unsigned int *v0; // rcx
  __int64 v1; // rdx
  unsigned int *v2; // rbx
  int v3; // r11d
  int v4; // esi
  int v5; // edi
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // eax
  int v9; // r12d
  float v10; // xmm6_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  int v13; // ecx
  __int64 v14; // rax
  double v15; // xmm6_8
  bool v16; // cc
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // r13d
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r11d
  bool v27; // zf
  unsigned int *v28; // rsi
  unsigned int *v29; // rbx
  unsigned int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rbx
  unsigned int *v34; // rax
       char **v35; // r13
  __int64 v36; // rax
  __int64 v37; // r12
  unsigned int v38; // eax
  unsigned int v39; // esi
  __int64 v40; // rdi
  int v41; // esi
  __int64 v42; // rdi
  int v43; // r8d
  int v44; // ecx
  __int64 v45; // rdx
  unsigned int *v46; // rax
  unsigned int v47; // r12d
  signed int v48; // eax
  __int64 v49; // rdx
  int v50; // r8d
  int v51; // ecx
  __int64 v52; // rdx
  unsigned int *v53; // rax
  double v54; // xmm2_8
  float v55; // xmm6_4
  float v56; // xmm7_4
  float v57; // xmm8_4
  float v58; // xmm9_4
  float v59; // xmm6_4
  float v60; // xmm7_4
  signed int v61; // eax
  __int64 v62; // r8
  signed int v63; // eax
  __int64 v64; // rdx
  int v65; // r8d
  int j; // r10d
  unsigned int *v67; // rdx
  __int64 v68; // r9
  __int64 v69; // rax
  int v70; // esi
  unsigned int *v71; // r12
  int v72; // ebx
  _DWORD *v73; // rdi
  __int64 v74; // rax
  int v75; // r11d
  signed int v76; // r8d
  unsigned int *v77; // rcx
  __int64 v78; // rdx
  int v79; // eax
  unsigned int *v80; // rsi
  int v81; // r9d
  __int64 v82; // rdi
  unsigned int *v83; // rbx
  int v84; // ecx
  __int64 v85; // rdx
  unsigned int v86; // eax
  float v87; // xmm0_4
  BOOL v88; // eax
  float v89; // xmm1_4
  float v90; // xmm1_4
  float v91; // xmm0_4
  int v92; // r10d
  float *v93; // rdx
  int v94; // r9d
  unsigned int *v95; // rcx
  __int64 v96; // rax
  float v97; // xmm0_4
  float v98; // xmm0_4
  unsigned int v99; // r8d
  unsigned int v100; // edx
  unsigned int *v101; // rax
  __int64 v102; // rax
  unsigned int *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  int v106; // edx
  float *i; // rcx
  int v108; // eax
  float v109; // xmm1_4
  float *v110; // rax
  float v111; // xmm0_4
  float v112; // xmm0_4
  unsigned int *v113; // rbx
  signed int v114; // eax
  unsigned int *v115; // rax
  int v116; // r15d
  __int64 v117; // rcx
  unsigned int v118; // esi
  unsigned int *v119; // r13
  int v120; // edi
  float *v121; // r12
  __int64 v122; // rbx
  __int64 v123; // r10
  int v124; // r11d
  int v125; // r9d
  __int64 v126; // r8
  unsigned int *v127; // rdx
  __int64 v128; // rax
  int v129; // eax
  float v130; // xmm1_4
  __int64 v131; // rax
  int v132; // eax
  float v133; // xmm1_4
  __int64 v134; // rax
  int v135; // eax
  float v136; // xmm1_4
  __int64 v137; // rax
  int v138; // eax
  float v139; // xmm1_4
  unsigned int *v140; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F6C50[656];
#define v142 (*(__int64 (*))(void *)(sr_frame_1400F6C50 + 0)) /* [rsp+0h] */
#define v143 (*(unsigned int (*))(void *)(sr_frame_1400F6C50 + 32)) /* [rsp+20h] */
#define v144 (*(float (*))(void *)(sr_frame_1400F6C50 + 48)) /* [rsp+30h] */
#define v145 (*(float (*))(void *)(sr_frame_1400F6C50 + 52)) /* [rsp+34h] */
#define v146 (*(float (*))(void *)(sr_frame_1400F6C50 + 56)) /* [rsp+38h] */
#define v147 (*(__int64 (*))(void *)(sr_frame_1400F6C50 + 64)) /* [rsp+40h] */
#define v148 (*(unsigned int * (*))(void *)(sr_frame_1400F6C50 + 72)) /* [rsp+48h] */
#define v149 (*(__int128 (*))(void *)(sr_frame_1400F6C50 + 80)) /* [rsp+50h] */
#define v150 (*(__int128 (*))(void *)(sr_frame_1400F6C50 + 96)) /* [rsp+60h] */
#define v151 (*(float (*))(void *)(sr_frame_1400F6C50 + 112)) /* [rsp+70h] */
#define v152 (*(__m128i (*)[6])(void *)(sr_frame_1400F6C50 + 128)) /* [rsp+80h] */
#define v153 (*(__int64 (*))(void *)(sr_frame_1400F6C50 + 640)) /* [rsp+280h] */

  v0 = &dword_140404A6C[71856287];
  v1 = 256;
  do
  {
    if ( *(v0 - 34) && (int)*v0 > 0 )
      --*v0;
    v0 += 3597;
    --v1;
  }
  while ( v1 );
  if ( dword_140404A6C[283831448] != 1 )
  {
    if ( dword_140404A6C[283831448] == 2 )
    {
      v76 = dword_140404A6C[283831451] + 1;
      v75 = --dword_140404A6C[283831450];
      ++dword_140404A6C[283831451];
      if ( dword_140404A6C[283831450] == 3600 * ((signed int)dword_140404A6C[283831450] / 3600) )
      {
        v77 = &dword_140404A6C[71856280];
        v78 = 256;
        do
        {
          v79 = *v77;
          *(v77 - 1) = 0;
          if ( v79 > 0 )
            *v77 = v79 - 1;
          v77[1] = 0;
          v77 += 3597;
          --v78;
        }
        while ( v78 );
      }
      v80 = &dword_140404A6C[71856286];
      v81 = 1;
      v82 = 1024;
      if ( v76 >= 7200 )
      {
        v83 = &dword_140404A6C[278845893];
        v84 = 1;
        v85 = 1024;
        do
        {
          if ( *v83 )
          {
            v86 = v83[5];
            if ( v86 == 17 || v86 - 19 <= 5 )
            {
              v87 = *((float *)v83 + 23);
              v88 = 0;
              if ( v87 >= *(float *)&dword_140404A6C[283831485] && v87 < *(float *)&dword_140404A6C[283831488] )
              {
                v89 = *((float *)v83 + 25);
                if ( v89 >= *(float *)&dword_140404A6C[283831487] )
                  v88 = *(float *)&dword_140404A6C[283831490] > v89;
              }
              if ( v87 >= *(float *)&dword_140404A6C[283837358] && v87 < *(float *)&dword_140404A6C[283837361] )
              {
                v90 = *((float *)v83 + 25);
                if ( v90 >= *(float *)&dword_140404A6C[283837360] && *(float *)&dword_140404A6C[283837363] > v90 )
                  v88 = 1;
              }
              if ( v87 < *(float *)&dword_140404A6C[283843231]
                || v87 >= *(float *)&dword_140404A6C[283843234]
                || (v91 = *((float *)v83 + 25), v91 < *(float *)&dword_140404A6C[283843233])
                || v91 >= *(float *)&dword_140404A6C[283843236] )
              {
                if ( !v88 )
                  v84 = 0;
              }
            }
          }
          v83 += 1760;
          --v85;
        }
        while ( v85 );
        if ( !v84 )
        {
          v92 = 0;
          v93 = (float *)&dword_140404A6C[283831488];
          do
          {
            v94 = 0;
            v95 = &dword_140404A6C[71856286];
            do
            {
              if ( *(v95 - 33) )
              {
                if ( *v95 == v92 )
                {
                  v96 = (int)v95[6];
                  if ( (_DWORD)v96 != -1 )
                  {
                    v97 = *(float *)&dword_140404A6C[7166 * v96 + 280651335];
                    if ( v97 < *(v93 - 3) )
                      goto LABEL_155;
                    if ( v97 >= *v93 )
                      goto LABEL_155;
                    v98 = *(float *)&dword_140404A6C[7166 * v96 + 280651337];
                    if ( v98 < *(v93 - 1) || v98 >= v93[2] )
                      goto LABEL_155;
                  }
                }
              }
              ++v94;
              v95 += 3597;
            }
            while ( v94 < 256 );
            ++v92;
            v93 += 5873;
          }
          while ( (__int64)v93 < (__int64)&dword_140404A6C[283849107] );
          v75 -= 9;
          dword_140404A6C[283831450] = v75;
LABEL_155:
          v81 = 1;
        }
      }
      v99 = dword_140404A6C[283831474];
      v100 = dword_140404A6C[456202453];
      if ( !dword_140404A6C[283831509] )
      {
        v101 = &dword_140404A6C[71856286];
        do
        {
          if ( *(v101 - 33) && !*v101 && v101[6] != -1 )
            goto LABEL_165;
          v101 += 3597;
        }
        while ( (__int64)v101 < (__int64)&dword_140404A6C[72777118] );
        if ( dword_140404A6C[456202453] )
        {
          v102 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v102) = 10;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v102) = v99;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v102) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v102) = 1;
        }
        dword_140404A6C[283831509] = 1;
      }
LABEL_165:
      if ( !dword_140404A6C[283837382] )
      {
        v103 = &dword_140404A6C[71856286];
        do
        {
          if ( *(v103 - 33) && *v103 == 1 && v103[6] != -1 )
            goto LABEL_174;
          v103 += 3597;
        }
        while ( (__int64)v103 < (__int64)&dword_140404A6C[72777118] );
        if ( v100 )
        {
          v104 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v104) = 10;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v104) = v99;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v104) = 1;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v104) = 1;
        }
        dword_140404A6C[283837382] = 1;
      }
LABEL_174:
      if ( !dword_140404A6C[283843255] )
      {
        do
        {
          if ( *(v80 - 33) && *v80 == 2 && v80[6] != -1 )
            goto LABEL_182;
          v80 += 3597;
        }
        while ( (__int64)v80 < (__int64)&dword_140404A6C[72777118] );
        if ( v100 )
        {
          v105 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v105) = 10;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v105) = v99;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v105) = 2;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v105) = 1;
        }
        dword_140404A6C[283843255] = 1;
      }
LABEL_182:
      v106 = 1;
      for ( i = (float *)&dword_140404A6C[278845916]; ; i += 1760 )
      {
        if ( *((_DWORD *)i - 23) )
        {
          v108 = *((_DWORD *)i - 18);
          if ( v108 == 17 || (unsigned int)(v108 - 19) <= 5 )
          {
            v109 = *i;
            v110 = (float *)&dword_140404A6C[283831494];
            do
            {
              if ( v109 >= *(v110 - 3) && v109 < *v110 )
              {
                v111 = i[1];
                if ( v111 >= *(v110 - 2) && v111 < v110[1] )
                {
                  v112 = i[2];
                  if ( v112 >= *(v110 - 1) && v112 < v110[2] )
                    goto LABEL_195;
                }
              }
              v110 += 5873;
            }
            while ( (__int64)v110 < (__int64)&dword_140404A6C[283849113] );
            v106 = 0;
          }
        }
LABEL_195:
        if ( !--v82 )
        {
          if ( v106 )
          {
            if ( v75 > 60 )
              v75 = 60;
            dword_140404A6C[283831450] = v75;
          }
          v113 = &dword_140404A6C[71859139];
          do
          {
            if ( *(v113 - 2886) && !*v113 && *(v113 - 2847) != -1 )
              v81 = 0;
            v113 += 3597;
          }
          while ( (__int64)v113 < (__int64)&dword_140404A6C[72779971] );
          if ( v81 && v75 > 60 )
          {
            dword_140404A6C[283831450] = 60;
          }
          else if ( v75 <= 0 )
          {
            sub_1400F3E60();
            dword_140404A6C[283831448] = 3;
            dword_140404A6C[283831450] = dword_140404A6C[283831473];
          }
          return 0; /* no result: rax is residue at the exit */
        }
      }
    }
    if ( dword_140404A6C[283831448] != 3 )
      return 0; /* no result: rax is residue at the exit */
    v114 = dword_140404A6C[283831450] - 1;
    dword_140404A6C[283831450] = v114;
    if ( v114 == 1250 )
    {
      sub_1400F0160(-1);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 1200 )
    {
      sub_1400F0160(0);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 1080 )
    {
      sub_1400F0160(1);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 960 )
    {
      sub_1400F0160(2);
      v114 = dword_140404A6C[283831450];
    }
    v147 = 3;
    if ( v114 == 840 )
    {
      sub_1400F0160(3);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 720 )
    {
      sub_1400F0160(4);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 600 )
    {
      sub_1400F0160(5);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 480 )
    {
      sub_1400F0160(6);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 360 )
    {
      sub_1400F0160(7);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 240 )
    {
      sub_1400F0160(8);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 120 )
    {
      sub_1400F0160(9);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 > 0 )
      return 0; /* no result: rax is residue at the exit */
    v115 = &dword_140404A6C[71856289];
    v116 = 0;
    v117 = (__int64)&dword_140404A6C[72777121];
    do
    {
      if ( *(v115 - 36) )
        *v115 = 0;
      if ( v115[3561] )
        v115[3597] = 0;
      v115 += 7194;
    }
    while ( (__int64)v115 < (__int64)&dword_140404A6C[72777121] );
    v118 = dword_140404A6C[283831441];
    v119 = &dword_140404A6C[283831510];
    v120 = 0;
    v121 = (float *)&dword_140404A6C[335047062];
LABEL_242:
    v122 = -1;
    v123 = 2;
    v124 = -1;
    v125 = 2;
    v126 = 0;
    v127 = &dword_140404A6C[71856286];
    while ( 1 )
    {
      if ( *(v127 - 33) && *v127 == v120 )
      {
        if ( v118 == 1 )
        {
          v128 = (int)*(v127 - 18);
          if ( (_DWORD)v128 != -1 )
          {
            v117 = 112 * v128;
            v129 = dword_140404A6C[28 * v128 + 134050374];
            if ( (int)v126 < v129 )
            {
              v126 = (unsigned int)v129;
LABEL_251:
              v122 = v123 - 2;
              v124 = v125 - 2;
            }
          }
        }
        else
        {
          v130 = (float)((float)(int)v127[2] * *v121) + (float)(int)*(v127 - 14);
          if ( (float)(int)v126 < v130 )
          {
            v126 = (unsigned int)(int)v130;
            goto LABEL_251;
          }
        }
      }
      if ( v127[3564] && v127[3597] == v120 )
      {
        if ( v118 == 1 )
        {
          v131 = (int)v127[3579];
          if ( (_DWORD)v131 != -1 )
          {
            v117 = 112 * v131;
            v132 = dword_140404A6C[28 * v131 + 134050374];
            if ( (int)v126 < v132 )
            {
              v126 = (unsigned int)v132;
LABEL_260:
              v122 = v123 - 1;
              v124 = v125 - 1;
            }
          }
        }
        else
        {
          v133 = (float)((float)(int)v127[3599] * *v121) + (float)(int)v127[3583];
          if ( (float)(int)v126 < v133 )
          {
            v126 = (unsigned int)(int)v133;
            goto LABEL_260;
          }
        }
      }
      if ( v127[7161] && v127[7194] == v120 )
      {
        if ( v118 == 1 )
        {
          v134 = (int)v127[7176];
          if ( (_DWORD)v134 != -1 )
          {
            v117 = 112 * v134;
            v135 = dword_140404A6C[28 * v134 + 134050374];
            if ( (int)v126 < v135 )
            {
              v126 = (unsigned int)v135;
LABEL_269:
              v122 = v123;
              v124 = v125;
            }
          }
        }
        else
        {
          v136 = (float)((float)(int)v127[7196] * *v121) + (float)(int)v127[7180];
          if ( (float)(int)v126 < v136 )
          {
            v126 = (unsigned int)(int)v136;
            goto LABEL_269;
          }
        }
      }
      if ( !v127[10758] || v127[10791] != v120 )
        goto LABEL_279;
      if ( v118 == 1 )
      {
        v137 = (int)v127[10773];
        if ( (_DWORD)v137 == -1 )
          goto LABEL_279;
        v117 = 112 * v137;
        v138 = dword_140404A6C[28 * v137 + 134050374];
        if ( (int)v126 >= v138 )
          goto LABEL_279;
        v126 = (unsigned int)v138;
        goto LABEL_278;
      }
      v139 = (float)((float)(int)v127[10793] * *v121) + (float)(int)v127[10777];
      if ( (float)(int)v126 < v139 )
      {
        v126 = (unsigned int)(int)v139;
LABEL_278:
        v122 = v123 + 1;
        v124 = v125 + 1;
      }
LABEL_279:
      v125 += 4;
      v123 += 4;
      v127 += 14388;
      if ( v125 - 2 >= 256 )
      {
        if ( v124 != -1 )
        {
          v117 = (__int64)&dword_140404A6C[71856289];
          dword_140404A6C[3597 * v122 + 71856289] = 1;
        }
        if ( *v119 != v124 )
        {
          *v119 = v124;
          v119[5654] = 0;
          v118 = dword_140404A6C[283831441];
        }
        ++v120;
        v121 += 6;
        v119 += 5873;
        if ( !--v147 )
        {
          v140 = &dword_140404A6C[71859139];
          do
          {
            if ( *(v140 - 2886) && !*v140 )
              sub_140117340(v116);
            ++v116;
            v140 += 3597;
          }
          while ( v116 < 256 );
          sr_ResetGame(v117, (__int64)v127, v126);
          return 0; /* no result: rax is residue at the exit */
        }
        goto LABEL_242;
      }
    }
  }
  v2 = &dword_140404A6C[71859139];
  v3 = dword_140404A6C[283831450];
  v4 = 0;
  v5 = 0;
  v6 = 1;
  do
  {
    if ( *(v2 - 2886) && !*v2 )
    {
      v7 = (int)*(v2 - 2853);
      if ( (unsigned int)v7 <= 2 )
        ++v4;
      v8 = 0;
      if ( *(v2 - 2868) )
        v8 = v6;
      v6 = v8;
      v9 = v8;
      if ( v3 < 5400 && *(v2 - 2847) == -1 && (_DWORD)v7 != -1 && (int)v7 < 3 )
      {
        v10 = *(float *)&dword_140404A6C[5873 * v7 + 283831501];
        v11 = *(float *)&dword_140404A6C[5873 * v7 + 283831502];
        v12 = *(float *)&dword_140404A6C[5873 * v7 + 283831503];
        v144 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + v10;
        v13 = (unsigned __int8)rand();
        v14 = (int)*(v2 - 2853);
        v151 = 1.0;
        v145 = v11 - 0.25;
        *(_QWORD *)&v15 = dword_140404A6C[5873 * v14 + 283831497];
        v146 = (float)((float)(v13 - 127) * 0.0234375) + v12;
        *(float *)&v15 = *(float *)&v15 + 1.5707963705062866;
        v149 = xmmword_140278D30;
        v150 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v149, (float *)&v149 + 3, v15);
        v16 = (int)v2[683] <= 2;
        v17 = *(v2 - 2853);
        v2[682] = 1;
        if ( v16 )
          v2[683] = v17;
        if ( v17 )
        {
          if ( v17 == 1 )
          {
            v2[684] = 9;
          }
          else if ( v17 == 2 )
          {
            v2[684] = 8;
          }
        }
        else
        {
          v2[684] = 2;
        }
        v18 = sub_140053840(&v144, (float *)&v149, v5);
        *(v2 - 2847) = v18;
        *(v2 - 2797) = 0;
        dword_140404A6C[7166 * v18 + 280651341] = LODWORD(v15);
        sub_140051DC0(v5);
        sub_140117020(v5);
        v3 = dword_140404A6C[283831450];
        v6 = v9;
      }
    }
    ++v5;
    v2 += 3597;
  }
  while ( v5 < 256 );
  v19 = dword_140404A6C[283831474];
  v20 = 0;
  if ( v4 )
    v20 = v6;
  if ( v3 == dword_140404A6C[283831452] && dword_140404A6C[456202453] )
  {
    v21 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    HIWORD(dword_140404A6C[308307070]) = 0;
    v22 = (int)dword_140404A6C[308307070];
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v21) = 10;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v21) = v19;
    *(_QWORD *)((char *)&dword_140404A6C[297756293] + v21) = 0;
    v23 = v22 << 7;
    dword_140404A6C[308307070] = v22 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
    v24 = (int)dword_140404A6C[308307070];
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v23) = 10;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v23) = v19;
    *(_QWORD *)((char *)&dword_140404A6C[297756293] + v23) = 1;
    v25 = v24 << 7;
    dword_140404A6C[308307070] = v24 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v25) = 10;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v25) = v19;
    *(_QWORD *)((char *)&dword_140404A6C[297756293] + v25) = 2;
  }
  v26 = v3 - 1;
  dword_140404A6C[283831450] = v26;
  if ( !v4 )
  {
    if ( (unsigned int)(v26 - 5401) <= 0x5DA )
      v26 = 6900;
    dword_140404A6C[283831450] = v26;
  }
  if ( !v20 )
  {
    v27 = v26 == 5400;
LABEL_41:
    if ( !v27 )
      goto LABEL_92;
    goto LABEL_42;
  }
  v27 = v26 == 5400;
  if ( v26 <= 5400 )
    goto LABEL_41;
  dword_140404A6C[283831450] = 5400;
LABEL_42:
  sub_14012E960(128);
  v28 = &dword_140404A6C[335047158];
  v29 = &dword_140404A6C[335047158];
  do
  {
    if ( *v29 && (rand() & 7) == 0 )
      *v29 = 0;
    v29 += 4;
  }
  while ( (__int64)v29 < (__int64)&dword_140404A6C[335047190] );
  do
  {
    if ( *v28 )
      goto LABEL_62;
    v30 = rand() & 0xF;
    if ( v30 < 2 )
    {
      v31 = 7;
LABEL_60:
      v32 = v31;
      goto LABEL_61;
    }
    if ( v30 >= 6 )
    {
      if ( v30 < 0xA )
      {
        v31 = 15;
        goto LABEL_60;
      }
      if ( v30 < 0xD )
      {
        v31 = 9;
        goto LABEL_60;
      }
      if ( v30 < 0xF )
      {
        v31 = 6;
        goto LABEL_60;
      }
      LODWORD(v31) = 4;
      v32 = 4;
      if ( (rand() & 0xF) == 0 )
      {
        v31 = 5;
        goto LABEL_60;
      }
    }
    else
    {
      LODWORD(v31) = 0;
      v32 = 0;
    }
LABEL_61:
    *v28 = 1;
    v28[1] = v31;
    v28[3] = dword_140404A6C[24944 * v32 + 346707730];
    v28[2] = rand() % 6;
LABEL_62:
    v28 += 4;
  }
  while ( (__int64)v28 < (__int64)&dword_140404A6C[335047190] );
  sub_14005E520();
  v33 = 3;
  v34 = &dword_140404A6C[283831510];
  v35 = (     char **)off_1402B2890;
  v148 = &dword_140404A6C[283831510];
  v147 = 3;
  do
  {
    v36 = (int)*v34;
    if ( (_DWORD)v36 != -1 )
    {
      sub_140158AB0(v152, "%s Manager: %s", *v35, (     char *)&dword_140404A6C[3597 * v36 + 71856254]);
      if ( dword_140404A6C[456202453] )
      {
        v37 = -1;
        do
          ++v37;
        while ( SR_VEC_LANES(128, v152[0], i8)[v37] );
        v38 = dword_140404A6C[283831474];
        v39 = dword_140404A6C[308307070];
        if ( (int)v37 > 63 )
          LODWORD(v37) = 63;
        v40 = (__int64)(int)dword_140404A6C[308307070] << 7;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v40) = 2;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v40) = v38;
        sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v40), v152, (int)v37);
        v33 = v147;
        *((_BYTE *)&dword_140404A6C[297756301] + v40 + (int)v37) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v40) = v37;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v40) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v40) = -1;
        *(unsigned int *)((char *)&dword_140404A6C[297756296] + v40) = 0;
        dword_140404A6C[308307070] = v39 + 1;
        HIWORD(dword_140404A6C[308307070]) = 0;
      }
    }
    ++v35;
    v34 = v148 + 5873;
    --v33;
    v148 += 5873;
    v147 = v33;
  }
  while ( v33 );
  v41 = 0;
  v42 = 0;
  do
  {
    v43 = dword_140404A6C[v42 + 283836331];
    v44 = 0;
    v45 = 0;
    if ( v43 <= 0 )
    {
LABEL_77:
      v47 = -1;
    }
    else
    {
      v46 = &dword_140404A6C[v42 + 283836332];
      while ( *v46 )
      {
        ++v44;
        ++v45;
        v46 += 13;
        if ( v44 >= v43 )
          goto LABEL_77;
      }
      v143 = 0;
      dword_140404A6C[13 * v45 + 283836332 + v42] = 1;
      v47 = sr_CreateVehicle(
              0,
              (float *)&dword_140404A6C[5873 * v41 + 283836333 + 13 * v44],
              nullptr,
              &dword_140404A6C[5873 * v41 + 283836336 + 13 * v44],
              v143);
    }
    v48 = sub_14012CEB0(0, 0, 0, 0, 0, 0.0);
    v49 = 383LL * v48;
    dword_140404A6C[v49 + 132400668] = 0;
    dword_140404A6C[v49 + 132400639] = v47;
    v16 = (int)dword_140404A6C[v42 + 283831506] <= 4;
    dword_140404A6C[5210 * v47 + 129720183] = v48;
    if ( !v16 )
    {
      v50 = dword_140404A6C[v42 + 283836331];
      v51 = 0;
      v52 = 0;
      if ( v50 > 0 )
      {
        v53 = &dword_140404A6C[v42 + 283836332];
        while ( *v53 )
        {
          ++v51;
          ++v52;
          v53 += 13;
          if ( v51 >= v50 )
            goto LABEL_86;
        }
        v143 = 0;
        dword_140404A6C[13 * v52 + 283836332 + v42] = 1;
        sr_CreateVehicle(
          9,
          (float *)&dword_140404A6C[5873 * v41 + 283836333 + 13 * v51],
          nullptr,
          &dword_140404A6C[5873 * v41 + 283836336 + 13 * v51],
          v143);
      }
    }
LABEL_86:
    *(_QWORD *)&v54 = dword_140404A6C[v42 + 283831497];
    v55 = *(float *)&dword_140404A6C[v42 + 283831498];
    *(float *)&v54 = *(float *)&v54 - 1.5707963705062866;
    v56 = *(float *)&dword_140404A6C[v42 + 283831499];
    v57 = *(float *)&dword_140404A6C[v42 + 283831500];
    v149 = xmmword_140278D30;
    v151 = 1.0;
    v150 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v149, (float *)&v149 + 3, v54);
    sub_14007B2A0((__int64)&v149, (float *)&v149 + 3, sr_export_float_lane_container(1078530011));
    v58 = (float)(*((float *)&v150 + 2) * 7.75) + v55;
    v59 = (float)(*((float *)&v150 + 3) * 7.75) + v56;
    v144 = v58;
    v145 = v59;
    v60 = (float)(v151 * 7.75) + v57;
    v146 = v60;
    v61 = sr_CreateItem(25, &v144, nullptr, (float *)&v149);
    if ( v61 != -1 )
    {
      v62 = 1760LL * v61;
      dword_140404A6C[v62 + 278846051] = 0;
      dword_140404A6C[v62 + 278845981] = 1111 * (v41 + 1);
      sub_140051940(v61);
    }
    v144 = (float)(*(float *)&v149 * 0.5) + v58;
    v145 = (float)(*((float *)&v149 + 1) * 0.5) + v59;
    v146 = (float)(*((float *)&v149 + 2) * 0.5) + v60;
    v63 = sr_CreateItem(25, &v144, nullptr, (float *)&v149);
    if ( v63 != -1 )
    {
      v64 = 1760LL * v63;
      dword_140404A6C[v64 + 278846051] = 1;
      dword_140404A6C[v64 + 278845981] = 1111 * v41 + 1112;
      sub_140051940(v63);
    }
    ++v41;
    v42 += 5873;
  }
  while ( v41 < 3 );
  v19 = dword_140404A6C[283831474];
  v26 = dword_140404A6C[283831450];
LABEL_92:
  if ( v26 < 5400 )
  {
    v65 = 1;
    for ( j = 0; j < 3; ++j )
    {
      v67 = &dword_140404A6C[71856286];
      v68 = 256;
      do
      {
        if ( *(v67 - 33) )
        {
          if ( *v67 == j )
          {
            v69 = (int)v67[6];
            if ( (_DWORD)v69 != -1 && dword_140404A6C[7166 * v69 + 280651313] == -1 )
              v65 = 0;
          }
        }
        v67 += 3597;
        --v68;
      }
      while ( v68 );
    }
    if ( v65 )
    {
      v26 -= 7;
      dword_140404A6C[283831450] = v26;
    }
  }
  if ( v26 <= 0 )
  {
    v70 = 0;
    v71 = &dword_140404A6C[283831509];
    while ( 1 )
    {
      v72 = 0;
      v73 = v71 + 79;
      do
      {
        if ( *v73 )
          sub_1400519F0(v70, v72);
        ++v72;
        v73 += 279;
      }
      while ( v72 < 16 );
      if ( dword_140404A6C[456202453] )
      {
        v74 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v74) = 10;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v74) = v19;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v74) = v70;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v74) = 1;
      }
      *v71 = 1;
      ++v70;
      v71 += 5873;
      if ( v70 >= 3 )
        break;
      v19 = dword_140404A6C[283831474];
    }
    dword_140404A6C[283831448] = 2;
    dword_140404A6C[283831450] = 3600 * dword_140404A6C[284022480];
  }
  return 0; /* no result: rax is residue at the exit */
}
#undef v142
#undef v143
#undef v144
#undef v145
#undef v146
#undef v147
#undef v148
#undef v149
#undef v150
#undef v151
#undef v152
#undef v153

// 1400F7FF9: variable 'v117' is possibly undefined
// 1400F7FF9: variable 'v127' is possibly undefined
// 1400F7FF9: variable 'v126' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCB0: using guessed type unsigned int;
// 183EBFCCC: using guessed type unsigned int;
// 183EBFCD4: using guessed type unsigned int;
// 183EBFCD8: using guessed type unsigned int;
// 183EBFD30: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 183EBFDC0: using guessed type unsigned int;
// 183EC5984: using guessed type unsigned int;
// 183ECB548: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;

//----- (00000001400F99A0) ----------------------------------------------------
__int64 sub_1400F99A0()
{
  unsigned int *v0; // rcx
  __int64 v1; // rdx
  unsigned int *v2; // rbx
  int v3; // ecx
  int v4; // esi
  unsigned int *v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  int i; // r15d
  __int64 v9; // rax
  float v10; // xmm6_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  int v13; // ecx
  __int64 v14; // rax
  double v15; // xmm6_8
  bool v16; // cc
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // esi
  float v20; // xmm6_4
  float v21; // xmm6_4
  __int64 v22; // rdi
  __int64 v23; // r15
  __int64 v24; // rbx
  signed int v25; // eax
  signed int v26; // eax
  signed int v27; // eax
  signed int v28; // eax
  bool v29; // zf
  int v30; // r13d
  unsigned int v31; // r11d
  int v32; // r10d
  int v33; // r15d
  unsigned int *v34; // rsi
  __int64 v35; // rax
  float v36; // xmm6_4
  float v37; // xmm8_4
  float v38; // xmm7_4
  int v39; // ecx
  __int64 v40; // rax
  double v41; // xmm6_8
  unsigned int v42; // eax
  unsigned int v43; // eax
  int v44; // edx
  float *v45; // rcx
  float v46; // xmm1_4
  float *v47; // rax
  float v48; // xmm0_4
  float v49; // xmm0_4
  int v50; // ecx
  __int128 *v51; // r9
  int j; // r8d
  int v53; // edx
  unsigned int *v54; // rax
  int v55; // edi
  unsigned int *v56; // rax
  __int64 v57; // rcx
  int v58; // esi
  unsigned int *v59; // rbx
  int v60; // r11d
  unsigned int *v61; // rdx
  __int64 v62; // r15
  signed int v63; // r10d
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  signed int v67; // eax
  unsigned int *v68; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F99A0[96];
#define v70 (*(__int64 (*))(void *)(sr_frame_1400F99A0 + 0)) /* [rsp+0h] */
#define v71 (*(float (*))(void *)(sr_frame_1400F99A0 + 32)) /* [rsp+20h] */
#define v72 (*(float (*))(void *)(sr_frame_1400F99A0 + 36)) /* [rsp+24h] */
#define v73 (*(float (*))(void *)(sr_frame_1400F99A0 + 40)) /* [rsp+28h] */
#define v74 (*(__int128 (*))(void *)(sr_frame_1400F99A0 + 48)) /* [rsp+30h] */
#define v75 (*(__int128 (*))(void *)(sr_frame_1400F99A0 + 64)) /* [rsp+40h] */
#define v76 (*(int (*))(void *)(sr_frame_1400F99A0 + 80)) /* [rsp+50h] */
#define v77 (*(__int64 (*))(void *)(sr_frame_1400F99A0 + 88)) /* [rsp+58h] */

  v0 = &dword_140404A6C[71856287];
  v1 = 256;
  do
  {
    if ( *(v0 - 34) && (int)*v0 > 0 )
      --*v0;
    v0 += 3597;
    --v1;
  }
  while ( v1 );
  switch ( dword_140404A6C[283831448] )
  {
    case 1u:
      v2 = &dword_140404A6C[71859139];
      v3 = 1;
      v4 = 0;
      v5 = &dword_140404A6C[71859139];
      v6 = 256;
      do
      {
        if ( *(v5 - 2886) && !*v5 )
        {
          if ( *(v5 - 2853) <= 1 )
            ++v4;
          if ( !*(v5 - 2868) )
            v3 = 0;
        }
        v5 += 3597;
        --v6;
      }
      while ( v6 );
      v7 = --dword_140404A6C[283831450];
      if ( v3 )
      {
        if ( v7 > 60 )
          v7 = 60;
        dword_140404A6C[283831450] = v7;
      }
      if ( !v4 )
      {
        dword_140404A6C[283831450] = 1800;
        return 0; /* no result: rax is residue at the exit */
      }
      if ( v7 > 0 )
        return 0; /* no result: rax is residue at the exit */
      for ( i = 0; i < 256; ++i )
      {
        if ( *(v2 - 2886) )
        {
          if ( !*v2 && *(v2 - 2847) == -1 )
          {
            v9 = (int)*(v2 - 2853);
            if ( (_DWORD)v9 != -1 && (int)v9 < 2 )
            {
              v10 = *(float *)&dword_140404A6C[5873 * v9 + 283831501];
              v11 = *(float *)&dword_140404A6C[5873 * v9 + 283831502];
              v12 = *(float *)&dword_140404A6C[5873 * v9 + 283831503];
              v71 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + v10;
              v13 = (unsigned __int8)rand();
              v14 = (int)*(v2 - 2853);
              v76 = 1065353216;
              v72 = v11 - 0.25;
              *(_QWORD *)&v15 = dword_140404A6C[5873 * v14 + 283831497];
              v73 = (float)((float)(v13 - 127) * 0.0234375) + v12;
              *(float *)&v15 = *(float *)&v15 + 1.5707963705062866;
              v74 = xmmword_140278D30;
              v75 = xmmword_140278D30;
              sub_14007B2A0((__int64)&v74, (float *)&v74 + 3, v15);
              v16 = (int)v2[683] <= 2;
              v17 = *(v2 - 2853);
              v2[682] = 1;
              if ( v16 )
                v2[683] = v17;
              if ( v17 )
              {
                if ( v17 == 1 )
                {
                  v2[684] = 9;
                }
                else if ( v17 == 2 )
                {
                  v2[684] = 8;
                }
              }
              else
              {
                v2[684] = 2;
              }
              v18 = sub_140053840(&v71, (float *)&v74, i);
              *(v2 - 2847) = v18;
              *(v2 - 2797) = 0;
              dword_140404A6C[7166 * v18 + 280651341] = LODWORD(v15);
              sub_140051DC0(i);
              sub_140117020(i);
            }
          }
        }
        v2 += 3597;
      }
      v19 = (v4 >> 2) + 2;
      v76 = 1065353216;
      if ( v19 > 12 )
        v19 = 12;
      v20 = (float)(*(float *)&dword_140404A6C[283837376] + *(float *)&dword_140404A6C[283831503]) * 0.5;
      v71 = (float)(*(float *)&dword_140404A6C[283837374] + *(float *)&dword_140404A6C[283831501]) * 0.5;
      v72 = (float)(*(float *)&dword_140404A6C[283837375] + *(float *)&dword_140404A6C[283831502]) * 0.5;
      v74 = xmmword_140278D30;
      v75 = xmmword_140278D30;
      if ( dword_140404A6C[283831446] == 5 )
        v19 *= 2;
      if ( v19 <= 18 )
      {
        v21 = v20 - (float)((float)v19 * 0.3125);
        v73 = v21;
        if ( v19 < 0 )
        {
LABEL_50:
          dword_140404A6C[283831448] = 2;
          dword_140404A6C[283831450] = 3600 * dword_140404A6C[284022501];
          return 0; /* no result: rax is residue at the exit */
        }
      }
      else
      {
        v21 = v20 - 5.625;
        v19 = 18;
        v73 = v21;
      }
      v22 = (unsigned int)(v19 + 1);
      do
      {
        v23 = (int)sr_CreateItem(15, &v71, nullptr, (float *)&v74);
        v24 = 1760 * v23;
        dword_140404A6C[v24 + 278845898] = 16;
        v25 = sr_CreateItem(17, &v71, nullptr, (float *)&v74);
        sub_1400E35D0(v23, v25, -1, 0);
        v26 = sr_CreateItem(17, &v71, nullptr, (float *)&v74);
        sub_1400E35D0(v23, v26, -1, 0);
        v27 = sr_CreateItem(17, &v71, nullptr, (float *)&v74);
        sub_1400E35D0(v23, v27, -1, 0);
        v28 = sr_CreateItem(17, &v71, nullptr, (float *)&v74);
        sub_1400E35D0(v23, v28, -1, 0);
        v29 = dword_140404A6C[456202453] == 0;
        dword_140404A6C[v24 + 278845898] = 15;
        if ( !v29 && (unsigned int)v23 <= 0x3FF )
          ++dword_140404A6C[v23 + 280648157];
        v21 = v21 + 0.625;
        v73 = v21;
        --v22;
      }
      while ( v22 );
      goto LABEL_50;
    case 2u:
      v30 = 1;
      ++dword_140404A6C[283831451];
      v31 = dword_140404A6C[284022499];
      v32 = --dword_140404A6C[283831450];
      if ( dword_140404A6C[284022499] )
      {
        v33 = 0;
        v34 = &dword_140404A6C[71859139];
        do
        {
          if ( *(v34 - 2886) )
          {
            if ( !*v34 && *(v34 - 2847) == -1 )
            {
              v35 = (int)*(v34 - 2853);
              if ( (_DWORD)v35 != -1 && (int)v35 < 2 )
              {
                v36 = *(float *)&dword_140404A6C[5873 * v35 + 283831501];
                v37 = *(float *)&dword_140404A6C[5873 * v35 + 283831502];
                v38 = *(float *)&dword_140404A6C[5873 * v35 + 283831503];
                v71 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + v36;
                v39 = (unsigned __int8)rand();
                v40 = (int)*(v34 - 2853);
                v76 = 1065353216;
                v72 = v37 - 0.25;
                *(_QWORD *)&v41 = dword_140404A6C[5873 * v40 + 283831497];
                v73 = (float)((float)(v39 - 127) * 0.0234375) + v38;
                *(float *)&v41 = *(float *)&v41 + 1.5707963705062866;
                v74 = xmmword_140278D30;
                v75 = xmmword_140278D30;
                sub_14007B2A0((__int64)&v74, (float *)&v74 + 3, v41);
                v16 = (int)v34[683] <= 2;
                v42 = *(v34 - 2853);
                v34[682] = 1;
                if ( v16 )
                  v34[683] = v42;
                if ( v42 )
                {
                  if ( v42 == 1 )
                  {
                    v34[684] = 9;
                  }
                  else if ( v42 == 2 )
                  {
                    v34[684] = 8;
                  }
                }
                else
                {
                  v34[684] = 2;
                }
                v43 = sub_140053840(&v71, (float *)&v74, v33);
                *(v34 - 2847) = v43;
                *(v34 - 2797) = 0;
                *(v34 - 2860) = 0;
                dword_140404A6C[7166 * v43 + 280651341] = LODWORD(v41);
                sub_140051DC0(v33);
              }
            }
          }
          ++v33;
          v34 += 3597;
        }
        while ( v33 < 256 );
        v31 = dword_140404A6C[284022499];
        v32 = dword_140404A6C[283831450];
      }
      v44 = 1;
      v45 = (float *)&dword_140404A6C[278845916];
      do
      {
        if ( *((_DWORD *)v45 - 23) && *((_DWORD *)v45 - 18) == 17 )
        {
          v46 = *v45;
          v47 = (float *)&dword_140404A6C[283831494];
          while ( 1 )
          {
            if ( v46 >= *(v47 - 3) && v46 < *v47 )
            {
              v48 = v45[1];
              if ( v48 >= *(v47 - 2) && v48 < v47[1] )
              {
                v49 = v45[2];
                if ( v49 >= *(v47 - 1) && v49 < v47[2] )
                  break;
              }
            }
            v47 += 5873;
            if ( (__int64)v47 >= (__int64)&dword_140404A6C[283843240] )
            {
              v44 = 0;
              break;
            }
          }
        }
        v45 += 1760;
      }
      while ( (__int64)v45 < (__int64)&dword_140404A6C[280648156] );
      if ( v44 )
      {
        v32 -= 5;
        dword_140404A6C[283831450] = v32;
      }
      v50 = 0;
      v51 = &v74;
      for ( j = 0; j < 2; ++j )
      {
        v53 = 0;
        *(_DWORD *)v51 = 0;
        v54 = &dword_140404A6C[71859139];
        do
        {
          if ( *(v54 - 2886) )
          {
            if ( !*v54 && *(v54 - 2853) == j )
            {
              v50 |= 1 << j;
              if ( *(v54 - 2847) != -1 )
                *(_DWORD *)v51 = ++v53;
            }
          }
          v54 += 3597;
        }
        while ( (__int64)v54 < (__int64)&dword_140404A6C[72779971] );
        v51 = (__int128 *)((char *)v51 + 4);
      }
      if ( v31 )
        goto LABEL_105;
      if ( (unsigned int)(v50 - 1) <= 1 && ((int)v74 > 0 || SDWORD1(v74) > 0) )
        v30 = 0;
      if ( v50 == 3 && (int)v74 > 0 && SDWORD1(v74) > 0 || !v30 || v32 <= 60 )
      {
LABEL_105:
        if ( v32 <= 0 )
        {
          sub_1400F5480();
          dword_140404A6C[283831448] = 3;
          dword_140404A6C[283831450] = 720;
        }
      }
      else
      {
        dword_140404A6C[283831450] = 60;
      }
      break;
    case 3u:
      if ( (int)--dword_140404A6C[283831450] <= 0 )
      {
        v55 = 0;
        v56 = &dword_140404A6C[71856289];
        v57 = (__int64)&dword_140404A6C[72777121];
        do
        {
          if ( *(v56 - 36) )
            *v56 = 0;
          if ( v56[3561] )
            v56[3597] = 0;
          v56 += 7194;
        }
        while ( (__int64)v56 < (__int64)&dword_140404A6C[72777121] );
        v58 = 0;
        v59 = &dword_140404A6C[283831510];
        do
        {
          v60 = -1;
          v61 = &dword_140404A6C[71856286];
          v62 = -1;
          v63 = 0;
          LODWORD(v64) = 0;
          v65 = 0;
          do
          {
            if ( *(v61 - 33) )
            {
              if ( *v61 == v58 )
              {
                v66 = (int)*(v61 - 18);
                if ( (_DWORD)v66 != -1 )
                {
                  v57 = 112 * v66;
                  v67 = dword_140404A6C[28 * v66 + 134050374];
                  if ( v63 < v67 )
                  {
                    v60 = v64;
                    v62 = v65;
                    v63 = v67;
                  }
                }
              }
            }
            v64 = (unsigned int)(v64 + 1);
            ++v65;
            v61 += 3597;
          }
          while ( (int)v64 < 256 );
          if ( v60 != -1 )
            dword_140404A6C[3597 * v62 + 71856289] = 1;
          if ( *v59 != v60 )
          {
            *v59 = v60;
            v59[5654] = 0;
          }
          ++v58;
          v59 += 5873;
        }
        while ( (__int64)v59 < (__int64)&dword_140404A6C[283843256] );
        v68 = &dword_140404A6C[71859139];
        do
        {
          if ( *(v68 - 2886) && !*v68 )
            sub_140117340(v55);
          ++v55;
          v68 += 3597;
        }
        while ( v55 < 256 );
        sr_ResetGame(v57, (__int64)v61, v64);
      }
      break;
  }
  return 0; /* no result: rax is residue at the exit */
}
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77

// 1400FA31A: variable 'v57' is possibly undefined
// 1400FA31A: variable 'v61' is possibly undefined
// 1400FA31A: variable 'v64' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCCC: using guessed type unsigned int;
// 183EBFCD4: using guessed type unsigned int;
// 183EBFCD8: using guessed type unsigned int;
// 183F7A5F8: using guessed type unsigned int;

//----- (00000001400FA3A0) ----------------------------------------------------
__int64 sub_1400FA3A0()
{
  signed int v0; // r15d
  unsigned int *v1; // r12
  __int64 v2; // rdx
  __int64 v3; // rax
  signed int v4; // ecx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned int *v9; // rbp
  int v10; // eax
  unsigned int *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 result; // rax
  int v16; // ebx
  unsigned int *v17; // rdi
  int v18; // r15d
  __int64 v19; // rbx
  int i; // ebx
  int v21; // ebx
  unsigned int *v22; // rdi
  int *v23; // rsi
  int j; // ebx
  unsigned int *v25; // rbx
  int k; // edi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // r8d
  __int64 v32; // rdx
  unsigned int *v33; // rcx
  unsigned int *v34; // rbp
  int v35; // esi
  unsigned int *v36; // r14
  int v37; // edi
  unsigned int *v38; // rbx
  unsigned int *v39; // rbx
  __int64 v40; // rdi
  unsigned int *v41; // rcx
  __int64 v42; // rdx
  int v43; // eax
  int v44; // eax
  unsigned int *v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rax
  signed int v48; // r8d
  signed int v49; // edx
  unsigned int *v50; // rcx
  signed int v51; // r8d
  signed int v52; // edx
  unsigned int *v53; // rcx
  int v54; // eax
  signed int v55; // r8d
  int v56; // edx
  __int64 v57; // rax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  unsigned int *v61; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FA3A0[176];
#define v62 (*(float (*)[2])(void *)(sr_frame_1400FA3A0 + 0)) /* [rsp+20h] */
#define v63 (*(float (*))(void *)(sr_frame_1400FA3A0 + 8)) /* [rsp+28h] */
#define v64 (*(_OWORD (*)[2])(void *)(sr_frame_1400FA3A0 + 16)) /* [rsp+30h] */
#define v65 (*(int (*))(void *)(sr_frame_1400FA3A0 + 48)) /* [rsp+50h] */
#define v66 (*(unsigned int (*))(void *)(sr_frame_1400FA3A0 + 160)) /* [rsp+C0h] */
#define v67 (*(__int64 (*))(void *)(sr_frame_1400FA3A0 + 168)) /* [rsp+C8h] */

  v0 = dword_140404A6C[179992853];
  v1 = &dword_140404A6C[71856253];
  v2 = 256;
  v66 = dword_140404A6C[179992853];
  v67 = 256;
  do
  {
    if ( *v1 && v1[2886] )
    {
      v3 = (int)v1[39];
      if ( (_DWORD)v3 == -1 )
        *v1 = 0;
      v4 = v1[3513];
      if ( v4 && v0 > v4 )
      {
        if ( (_DWORD)v3 != -1 )
        {
          v5 = 7166 * v3;
          v6 = (int)dword_140404A6C[7166 * v3 + 280651313];
          if ( (_DWORD)v6 != -1 )
          {
            v7 = (int)dword_140404A6C[5210 * v6 + 129720183];
            if ( (_DWORD)v7 != -1 )
              *(_QWORD *)&dword_140404A6C[383 * v7 + 132400668] = 1;
          }
          v8 = 8;
          v9 = &dword_140404A6C[v5 + 280658140];
          do
          {
            v10 = *(v9 - 1);
            if ( v10 > 0 )
            {
              v11 = v9;
              v12 = (unsigned int)v10;
              do
              {
                v13 = (int)*v11;
                v14 = 1760 * v13;
                if ( (int)dword_140404A6C[1760 * v13 + 278845906] > 0 )
                {
                  dword_140404A6C[1760 * dword_140404A6C[v14 + 278845907] + 278845900] = 0;
                  sub_1400CA9B0(dword_140404A6C[v14 + 278845907], v13);
                }
                ++v11;
                dword_140404A6C[v14 + 278845900] = 0;
                --v12;
              }
              while ( v12 );
            }
            v9 += 10;
            --v8;
          }
          while ( v8 );
          v2 = v67;
          dword_140404A6C[v5 + 280651317] = 0;
          dword_140404A6C[v5 + 280651305] = -1;
          v0 = v66;
        }
        *v1 = 0;
      }
    }
    v1 += 3597;
    v67 = --v2;
  }
  while ( v2 );
  result = dword_140404A6C[283831448];
  if ( dword_140404A6C[283831448] == 1 )
  {
    dword_140404A6C[283831450] = dword_140404A6C[283831453];
    dword_140404A6C[283831448] = 2;
    dword_140404A6C[179992853] = 1728000;
    dword_140404A6C[179992854] = 10;
    sub_140061950();
    sub_14012E960(dword_140404A6C[284022485]);
    v16 = 0;
    if ( (int)dword_140404A6C[225641186] > 0 )
    {
      v17 = &dword_140404A6C[225641203];
      do
      {
        if ( *v17 == 4 )
          sub_140195480(v16, 0);
        ++v16;
        v17 += 14019;
      }
      while ( v16 < (int)dword_140404A6C[225641186] );
    }
    v0 = dword_140404A6C[179992853];
    result = dword_140404A6C[283831448];
    v62[0] = *(float *)&dword_140404A6C[179992855];
    v63 = *(float *)&dword_140404A6C[179992857];
    *(_QWORD *)&dword_140404A6C[188872237] = 0;
    dword_140404A6C[188872240] = 0;
    *(_QWORD *)&dword_140404A6C[188872242] = 0;
    dword_140404A6C[188872245] = 0;
    *(_QWORD *)&dword_140404A6C[188872247] = 0;
    dword_140404A6C[188872250] = 0;
    *(_QWORD *)&dword_140404A6C[188872252] = 0;
    dword_140404A6C[188872255] = 0;
    *(_QWORD *)&dword_140404A6C[188872257] = 0;
    dword_140404A6C[188872260] = 0;
    *(_QWORD *)&dword_140404A6C[188872262] = 0;
    dword_140404A6C[188872265] = 0;
  }
  if ( (_DWORD)result == 2 )
  {
    v18 = dword_140404A6C[179992854] + v0;
    dword_140404A6C[179992853] = v18;
    if ( v18 == 1728060 )
    {
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[485542517]), 0, 0x800u);
      v19 = 7;
      dword_140404A6C[180001067] = rand() % 7;
      do
      {
        sub_140194D40();
        --v19;
      }
      while ( v19 );
      sub_140195970();
      v18 = dword_140404A6C[179992853];
    }
    if ( v18 == 54000 * (v18 / 54000) && v18 < 3672000 )
    {
      for ( i = 0; i < 6; ++i )
        sub_1401949C0(i);
      v21 = 0;
      v22 = &dword_140404A6C[188872240];
      v23 = (int *)&dword_140404A6C[283831506];
      do
      {
        if ( *v23 > 0 )
        {
          if ( (int)*v22 <= 0 )
            sub_14012EB50(v21);
          else
            --*v22;
        }
        ++v21;
        v23 += 5873;
        v22 += 5;
      }
      while ( v21 < 6 );
      v18 = dword_140404A6C[179992853];
    }
    if ( v18 < 4104000 )
    {
      v31 = 0;
      if ( (int)dword_140404A6C[225641186] > 0 )
      {
        v32 = 0;
        v33 = &dword_140404A6C[225654128];
        do
        {
          if ( *(v33 - 12925) == 9 )
          {
            *(_QWORD *)v33 = 0;
            dword_140404A6C[3 * v32 + 225654130] = 20;
            ++*v33;
          }
          ++v31;
          v32 += 4673;
          v33 += 14019;
        }
        while ( v31 < (int)dword_140404A6C[225641186] );
      }
      v34 = &dword_140404A6C[283831605];
      v35 = 0;
      v36 = &dword_140404A6C[335047064];
      do
      {
        v37 = 0;
        v38 = v34;
        *v36 = (int)(float)(*((float *)v36 - 2) * 10.0);
        do
        {
          if ( *(v38 - 17) )
          {
            if ( !*(v38 - 16) && v18 == *v38 )
            {
              sub_1401300C0(*(v38 - 15));
              if ( !*(v38 - 16) )
              {
                sub_1400F50D0(v35, v37, 0, 0);
                v18 = dword_140404A6C[179992853];
              }
            }
          }
          ++v37;
          v38 += 279;
        }
        while ( v37 < 16 );
        ++v35;
        v36 += 6;
        v34 += 5873;
      }
      while ( v35 < 6 );
      v39 = &dword_140404A6C[71856268];
      v40 = 256;
      if ( v18 == 18000 * (v18 / 18000) )
      {
        v41 = &dword_140404A6C[280651311];
        v42 = 256;
        do
        {
          if ( *(v41 - 8) )
          {
            v43 = *(v41 - 3);
            if ( v43 > 0 )
              *(v41 - 3) = v43 - 1;
            if ( (int)*v41 > 7 )
            {
              v44 = *v41 - 1;
              *v41 = v44;
              if ( v44 > 7 )
                *v41 = v44 - 1;
            }
          }
          v41 += 7166;
          --v42;
        }
        while ( v42 );
        sub_14008C030();
        sub_14008C310();
        sub_14012C480();
        v45 = &dword_140404A6C[71856268];
        v46 = 256;
        do
        {
          if ( *(v45 - 15) )
          {
            v47 = (int)*v45;
            if ( (_DWORD)v47 != -1 )
              dword_140404A6C[28 * v47 + 134050378] += 5;
          }
          v45 += 3597;
          --v46;
        }
        while ( v46 );
        v48 = dword_140404A6C[134050358];
        v49 = 0;
        if ( (int)dword_140404A6C[134050358] > 0 )
        {
          v50 = &dword_140404A6C[134050373];
          do
          {
            if ( (int)*v50 > 0 )
            {
              --*v50;
              v48 = dword_140404A6C[134050358];
            }
            ++v49;
            v50 += 28;
          }
          while ( v49 < v48 );
        }
        sub_140132B00();
        sub_140052090();
        v18 = dword_140404A6C[179992853];
      }
      if ( v18 == 54000 * (v18 / 54000) )
      {
        v51 = dword_140404A6C[134050358];
        v52 = 0;
        if ( (int)dword_140404A6C[134050358] > 0 )
        {
          v53 = &dword_140404A6C[134050376];
          do
          {
            if ( (int)*v53 > 0 )
            {
              v54 = *v53 - 16;
              if ( v54 < 0 )
                v54 = 0;
              *v53 = v54;
              v51 = dword_140404A6C[134050358];
            }
            ++v52;
            v53 += 28;
          }
          while ( v52 < v51 );
        }
        v55 = dword_140404A6C[284022492];
        dword_140404A6C[188872241] = 0;
        dword_140404A6C[188872246] = 0;
        dword_140404A6C[188872251] = 0;
        dword_140404A6C[188872256] = 0;
        dword_140404A6C[188872261] = 0;
        dword_140404A6C[188872266] = 0;
        dword_140404A6C[188872271] = 0;
        dword_140404A6C[188872276] = 0;
        dword_140404A6C[188872281] = 0;
        dword_140404A6C[188872286] = 0;
        dword_140404A6C[188872291] = 0;
        dword_140404A6C[188872296] = 0;
        dword_140404A6C[188872301] = 0;
        dword_140404A6C[188872306] = 0;
        dword_140404A6C[188872311] = 0;
        dword_140404A6C[188872316] = 0;
        dword_140404A6C[188872321] = 0;
        dword_140404A6C[188872326] = 0;
        dword_140404A6C[188872331] = 0;
        dword_140404A6C[188872336] = 0;
        dword_140404A6C[188872341] = 0;
        dword_140404A6C[188872346] = 0;
        dword_140404A6C[188872351] = 0;
        dword_140404A6C[188872356] = 0;
        dword_140404A6C[188872361] = 0;
        dword_140404A6C[188872366] = 0;
        dword_140404A6C[188872371] = 0;
        dword_140404A6C[188872376] = 0;
        dword_140404A6C[188872381] = 0;
        dword_140404A6C[188872386] = 0;
        dword_140404A6C[188872391] = 0;
        dword_140404A6C[188872396] = 0;
        dword_140404A6C[188872401] = 0;
        dword_140404A6C[188872406] = 0;
        dword_140404A6C[188872411] = 0;
        dword_140404A6C[188872416] = 0;
        dword_140404A6C[188872421] = 0;
        dword_140404A6C[188872426] = 0;
        dword_140404A6C[188872431] = 0;
        dword_140404A6C[188872436] = 0;
        dword_140404A6C[188872441] = 0;
        dword_140404A6C[188872446] = 0;
        dword_140404A6C[188872451] = 0;
        dword_140404A6C[188872456] = 0;
        dword_140404A6C[188872461] = 0;
        dword_140404A6C[188872466] = 0;
        dword_140404A6C[188872471] = 0;
        dword_140404A6C[188872476] = 0;
        dword_140404A6C[188872481] = 0;
        dword_140404A6C[188872486] = 0;
        dword_140404A6C[188872491] = 0;
        dword_140404A6C[188872496] = 0;
        dword_140404A6C[188872501] = 0;
        dword_140404A6C[188872506] = 0;
        dword_140404A6C[188872511] = 0;
        dword_140404A6C[188872516] = 0;
        dword_140404A6C[188872521] = 0;
        dword_140404A6C[188872526] = 0;
        dword_140404A6C[188872531] = 0;
        dword_140404A6C[188872536] = 0;
        dword_140404A6C[188872541] = 0;
        dword_140404A6C[188872546] = 0;
        dword_140404A6C[188872551] = 0;
        dword_140404A6C[188872556] = 0;
        do
        {
          v56 = v39[8];
          if ( v56 > 0 && v39[24] != -1 )
          {
            v57 = (int)*v39;
            if ( (_DWORD)v57 != -1 )
              dword_140404A6C[28 * v57 + 134050376] += 8;
          }
          v58 = v39[12];
          v39[11] = 0;
          if ( v58 > 0 )
            v39[12] = v58 - 1;
          v39[13] = 0;
          if ( v56 > 0 )
            v39[8] = --v56;
          if ( v56 >= v55 )
          {
            v39[11] = 100;
            v39[12] = 4;
          }
          v39 += 3597;
          --v40;
        }
        while ( v40 );
      }
      if ( (int)dword_140404A6C[284023071] < 8 )
      {
        do
        {
          v62[1] = *(float *)&dword_140404A6C[179992856];
          v64[0] = xmmword_140278D30;
          v65 = 1065353216;
          v63 = *(float *)&dword_140404A6C[179992857] + 1.0;
          v62[0] = *(float *)&dword_140404A6C[179992855] + -4.0;
          v64[1] = xmmword_140278D30;
          v59 = sr_CreateItem(29, v62, nullptr, (float *)v64);
          if ( v59 == -1 )
          {
            v60 = dword_140404A6C[284023071];
          }
          else
          {
            sub_1400584B0(v59, (     __m128i *)&dword_140404A6C[283785646]);
            v60 = ++dword_140404A6C[284023071];
          }
        }
        while ( v60 < 8 );
      }
      result = (__int64)&dword_140404A6C[71859139];
      do
      {
        if ( *(_DWORD *)(result - 11544) && !*(_DWORD *)result && *(_DWORD *)(result - 11388) == -1 )
          *(_DWORD *)(result - 11188) = 1;
        result += 14388;
      }
      while ( result < (__int64)&dword_140404A6C[72779971] );
      v61 = &dword_140404A6C[283831592];
      do
      {
        if ( *(v61 - 4) )
        {
          result = (int)*v61;
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[275] )
        {
          result = (int)v61[279];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[554] )
        {
          result = (int)v61[558];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[833] )
        {
          result = (int)v61[837];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[1112] )
        {
          result = (int)v61[1116];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[1391] )
        {
          result = (int)v61[1395];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[1670] )
        {
          result = (int)v61[1674];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[1949] )
        {
          result = (int)v61[1953];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[2228] )
        {
          result = (int)v61[2232];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[2507] )
        {
          result = (int)v61[2511];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[2786] )
        {
          result = (int)v61[2790];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[3065] )
        {
          result = (int)v61[3069];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[3344] )
        {
          result = (int)v61[3348];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[3623] )
        {
          result = (int)v61[3627];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[3902] )
        {
          result = (int)v61[3906];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        if ( v61[4181] )
        {
          result = (int)v61[4185];
          if ( (int)dword_140404A6C[1760 * result + 278845900] > 0 )
            dword_140404A6C[1760 * result + 278845900] = 0xFFFF;
        }
        v61 += 5873;
      }
      while ( (__int64)v61 < (__int64)&dword_140404A6C[283866830] );
    }
    else
    {
      for ( j = 0; j < 6; ++j )
        sub_140194C10(j);
      dword_140404A6C[179992861] = 0;
      v25 = &dword_140404A6C[71859846];
      for ( k = 0; k < 256; ++k )
      {
        if ( *(v25 - 3593) )
        {
          sub_140117340(k);
          v27 = (int)*(v25 - 3554);
          if ( (_DWORD)v27 == -1 )
          {
            *(v25 - 3) = 0;
          }
          else
          {
            *(v25 - 3) = 1;
            *(v25 - 2) = dword_140404A6C[7166 * v27 + 280651440];
            *(v25 - 1) = dword_140404A6C[7166 * v27 + 280651441];
            *v25 = dword_140404A6C[7166 * v27 + 280651442];
            v25[1] = dword_140404A6C[7166 * v27 + 280651490];
            v25[2] = dword_140404A6C[7166 * v27 + 280651313];
            v25[3] = dword_140404A6C[7166 * v27 + 280651314];
          }
        }
        v25 += 3597;
      }
      sub_14012C480();
      return sr_ResetGame(v29, v28, v30);
    }
  }
  return result;
}
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67

// 1400FA7F0: variable 'v29' is possibly undefined
// 1400FA7F0: variable 'v28' is possibly undefined
// 1400FA7F0: variable 'v30' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160361344: using guessed type unsigned int;
// 16B2A2EC0: using guessed type unsigned int;
// 16B2A2EC4: using guessed type unsigned int;
// 16B2A2EC8: using guessed type unsigned int;
// 16B2A2ECC: using guessed type unsigned int;
// 16B2A2ED0: using guessed type unsigned int;
// 16B2A2EE0: using guessed type unsigned int;
// 16D482320: using guessed type unsigned int;
// 16D48232C: using guessed type unsigned int;
// 16D482330: using guessed type unsigned int;
// 16D482334: using guessed type unsigned int;
// 16D482340: using guessed type unsigned int;
// 16D482344: using guessed type unsigned int;
// 16D482348: using guessed type unsigned int;
// 16D482354: using guessed type unsigned int;
// 16D482358: using guessed type unsigned int;
// 16D48235C: using guessed type unsigned int;
// 16D482368: using guessed type unsigned int;
// 16D48236C: using guessed type unsigned int;
// 16D482370: using guessed type unsigned int;
// 16D48237C: using guessed type unsigned int;
// 16D482380: using guessed type unsigned int;
// 16D482384: using guessed type unsigned int;
// 16D482390: using guessed type unsigned int;
// 16D482394: using guessed type unsigned int;
// 16D4823A8: using guessed type unsigned int;
// 16D4823BC: using guessed type unsigned int;
// 16D4823D0: using guessed type unsigned int;
// 16D4823E4: using guessed type unsigned int;
// 16D4823F8: using guessed type unsigned int;
// 16D48240C: using guessed type unsigned int;
// 16D482420: using guessed type unsigned int;
// 16D482434: using guessed type unsigned int;
// 16D482448: using guessed type unsigned int;
// 16D48245C: using guessed type unsigned int;
// 16D482470: using guessed type unsigned int;
// 16D482484: using guessed type unsigned int;
// 16D482498: using guessed type unsigned int;
// 16D4824AC: using guessed type unsigned int;
// 16D4824C0: using guessed type unsigned int;
// 16D4824D4: using guessed type unsigned int;
// 16D4824E8: using guessed type unsigned int;
// 16D4824FC: using guessed type unsigned int;
// 16D482510: using guessed type unsigned int;
// 16D482524: using guessed type unsigned int;
// 16D482538: using guessed type unsigned int;
// 16D48254C: using guessed type unsigned int;
// 16D482560: using guessed type unsigned int;
// 16D482574: using guessed type unsigned int;
// 16D482588: using guessed type unsigned int;
// 16D48259C: using guessed type unsigned int;
// 16D4825B0: using guessed type unsigned int;
// 16D4825C4: using guessed type unsigned int;
// 16D4825D8: using guessed type unsigned int;
// 16D4825EC: using guessed type unsigned int;
// 16D482600: using guessed type unsigned int;
// 16D482614: using guessed type unsigned int;
// 16D482628: using guessed type unsigned int;
// 16D48263C: using guessed type unsigned int;
// 16D482650: using guessed type unsigned int;
// 16D482664: using guessed type unsigned int;
// 16D482678: using guessed type unsigned int;
// 16D48268C: using guessed type unsigned int;
// 16D4826A0: using guessed type unsigned int;
// 16D4826B4: using guessed type unsigned int;
// 16D4826C8: using guessed type unsigned int;
// 16D4826DC: using guessed type unsigned int;
// 16D4826F0: using guessed type unsigned int;
// 16D482704: using guessed type unsigned int;
// 16D482718: using guessed type unsigned int;
// 16D48272C: using guessed type unsigned int;
// 16D482740: using guessed type unsigned int;
// 16D482754: using guessed type unsigned int;
// 16D482768: using guessed type unsigned int;
// 16D48277C: using guessed type unsigned int;
// 16D482790: using guessed type unsigned int;
// 16D4827A4: using guessed type unsigned int;
// 16D4827B8: using guessed type unsigned int;
// 16D4827CC: using guessed type unsigned int;
// 16D4827E0: using guessed type unsigned int;
// 16D4827F4: using guessed type unsigned int;
// 16D482808: using guessed type unsigned int;
// 16D48281C: using guessed type unsigned int;
// 183EBFCCC: using guessed type unsigned int;
// 183EBFCD4: using guessed type unsigned int;
// 183EBFCE0: using guessed type unsigned int;
// 183F7A5DC: using guessed type unsigned int;
// 183F7AEE8: using guessed type unsigned int;

