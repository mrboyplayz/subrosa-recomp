#include "shared_client.h"


//----- (0000000140023A20) ----------------------------------------------------
void            sub_140023A20(int a1, int a2)
{
  __int64 v3; // r15
  unsigned int *v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // eax

  v3 = 2;
  v4 = &dword_140404A6C[5873 * a1 + 283831581];
  do
  {
    v5 = *(v4 - 1);
    v6 = *v4;
    v7 = v4[1];
    if ( a2 )
      v8 = 0;
    else
      v8 = (v4[2] << 10) | 6;
    sub_140017260(0, v5, v6, v7, v8);
    sub_1400173C0(0, v5, v6, v7);
    v4 += 4;
    --v3;
  }
  while ( v3 );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400518B0) ----------------------------------------------------
__int64            sub_1400518B0(unsigned int a1, unsigned int a2)
{
  /* Clean implementation: src/engine/corporation.c, checked against the original executable
     (tools/native-compare suite smalls). The original returns 0 when connected, a leftover register
     otherwise; its callers ignore it. */
  extern void corporation_door_event(int corporation, int open);
  corporation_door_event((int)a1, (int)a2);
  return 0;
}

//----- (00000001400EE5F0) ----------------------------------------------------
__int64            sub_1400EE5F0(int a1, int a2)
{
  int v3; // r12d
  __int64 v4; // r15
  int v5; // esi
  int v6; // ecx
  unsigned int *v7; // rbx
  signed int v8; // edi
  signed int i; // ebp
  float v10; // xmm0_4
  unsigned int *v11; // rbx
  int v12; // eax

  v3 = a2;
  v4 = 3LL * a1;
  v5 = dword_140404A6C[6 * a1 + 335047061];
  if ( v5 > 0 )
    *(float *)&dword_140404A6C[6 * a1 + 335047062] = (float)((float)a2 / (float)v5)
                                                   + *(float *)&dword_140404A6C[6 * a1 + 335047062];
  v6 = dword_140404A6C[5873 * a1 + 283831506];
  if ( v6 > 0 )
    v3 = a2 / v6;
  v7 = &dword_140404A6C[71856286];
  v8 = 0;
  for ( i = 0; i < 256; ++i )
  {
    if ( *(v7 - 33) && *v7 == a1 )
    {
      *(v7 - 14) += (int)(float)(fminf(fmaxf(1.0 - (float)((float)(int)v7[2] / (float)v5), 0.0), 1.0) * (float)v3);
      sub_140051F50(i);
    }
    v7 += 3597;
  }
  v10 = *(float *)&dword_140404A6C[2 * v4 + 335047062];
  if ( v10 > 500.0 )
  {
    v11 = &dword_140404A6C[71856288];
    *(float *)&dword_140404A6C[2 * v4 + 335047062] = v10 * 0.20000000298023224;
    do
    {
      if ( *(v11 - 35) && *(v11 - 2) == a1 )
      {
        v5 += 4 * *v11;
        v12 = 5 * *v11;
        dword_140404A6C[2 * v4 + 335047061] = v5;
        *v11 = v12;
        sub_140051F50(v8);
      }
      ++v8;
      v11 += 3597;
    }
    while ( v8 < 256 );
  }
  return sub_140052090();
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400F00D0) ----------------------------------------------------
__int64            sub_1400F00D0(int a1, int a2, unsigned int a3)
{
  /* Clean implementation: src/engine/player_inventory.c (corporation_spawn_car); callers use the low
     32 bits. */
  extern int corporation_spawn_car(int corporation, int type, unsigned int color);
  return (unsigned int)corporation_spawn_car(a2, a1, a3);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400F3B30) ----------------------------------------------------
__int64            sub_1400F3B30(int a1)
{
  signed int v1; // eax
  int v2; // r10d
  signed int v4; // r8d
  unsigned int v5; // r9d
  unsigned int *v6; // rcx
  signed int v7; // eax
  signed int v8; // r8d
  unsigned int v9; // r9d
  unsigned int *v10; // rcx
  signed int v11; // eax
  signed int v12; // r8d
  unsigned int v13; // r9d
  unsigned int *v14; // rcx
  signed int v15; // eax
  signed int v16; // r8d
  unsigned int v17; // r9d
  unsigned int *v18; // rcx
  signed int v19; // eax
  signed int v20; // r8d
  unsigned int v21; // r9d
  unsigned int *v22; // rcx
  __int64 result; // rax
  unsigned int v24; // r8d
  unsigned int *v25; // rcx

  v1 = dword_140404A6C[283837293];
  v2 = 0;
  v4 = 0;
  if ( (int)dword_140404A6C[283837293] > 0 )
  {
    v5 = dword_140404A6C[283837293];
    v6 = &dword_140404A6C[283837294];
    do
    {
      if ( *v6 == a1 )
      {
        dword_140404A6C[283837293] = v5 - 1;
        *v6 = dword_140404A6C[v5 + 283837293];
        v1 = dword_140404A6C[283837293];
      }
      else
      {
        ++v4;
        ++v6;
      }
      v5 = v1;
    }
    while ( v4 < v1 );
  }
  v7 = dword_140404A6C[283843166];
  v8 = 0;
  if ( (int)dword_140404A6C[283843166] > 0 )
  {
    v9 = dword_140404A6C[283843166];
    v10 = &dword_140404A6C[283843167];
    do
    {
      if ( *v10 == a1 )
      {
        dword_140404A6C[283843166] = v9 - 1;
        *v10 = dword_140404A6C[v9 + 283843166];
        v7 = dword_140404A6C[283843166];
      }
      else
      {
        ++v8;
        ++v10;
      }
      v9 = v7;
    }
    while ( v8 < v7 );
  }
  v11 = dword_140404A6C[283849039];
  v12 = 0;
  if ( (int)dword_140404A6C[283849039] > 0 )
  {
    v13 = dword_140404A6C[283849039];
    v14 = &dword_140404A6C[283849040];
    do
    {
      if ( *v14 == a1 )
      {
        dword_140404A6C[283849039] = v13 - 1;
        *v14 = dword_140404A6C[v13 + 283849039];
        v11 = dword_140404A6C[283849039];
      }
      else
      {
        ++v12;
        ++v14;
      }
      v13 = v11;
    }
    while ( v12 < v11 );
  }
  v15 = dword_140404A6C[283854912];
  v16 = 0;
  if ( (int)dword_140404A6C[283854912] > 0 )
  {
    v17 = dword_140404A6C[283854912];
    v18 = &dword_140404A6C[283854913];
    do
    {
      if ( *v18 == a1 )
      {
        dword_140404A6C[283854912] = v17 - 1;
        *v18 = dword_140404A6C[v17 + 283854912];
        v15 = dword_140404A6C[283854912];
      }
      else
      {
        ++v16;
        ++v18;
      }
      v17 = v15;
    }
    while ( v16 < v15 );
  }
  v19 = dword_140404A6C[283860785];
  v20 = 0;
  if ( (int)dword_140404A6C[283860785] > 0 )
  {
    v21 = dword_140404A6C[283860785];
    v22 = &dword_140404A6C[283860786];
    do
    {
      if ( *v22 == a1 )
      {
        dword_140404A6C[283860785] = v21 - 1;
        *v22 = dword_140404A6C[v21 + 283860785];
        v19 = dword_140404A6C[283860785];
      }
      else
      {
        ++v20;
        ++v22;
      }
      v21 = v19;
    }
    while ( v20 < v19 );
  }
  result = dword_140404A6C[283866658];
  if ( (int)dword_140404A6C[283866658] > 0 )
  {
    v24 = dword_140404A6C[283866658];
    v25 = &dword_140404A6C[283866659];
    do
    {
      if ( *v25 == a1 )
      {
        dword_140404A6C[283866658] = v24 - 1;
        *v25 = dword_140404A6C[v24 + 283866658];
        result = dword_140404A6C[283866658];
      }
      else
      {
        ++v2;
        ++v25;
      }
      v24 = result;
    }
    while ( v2 < (int)result );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EC5820: using guessed type unsigned int;
// 183ECB3E4: using guessed type unsigned int;
// 183ED0FA8: using guessed type unsigned int;
// 183ED6B6C: using guessed type unsigned int;
// 183EDC730: using guessed type unsigned int;
// 183EE22F4: using guessed type unsigned int;

//----- (00000001400F3E60) ----------------------------------------------------
__int64 sub_1400F3E60()
{
  signed int v0; // edi
  int v1; // r10d
  int *v2; // r8
  int v3; // r9d
  int i; // edx
  int v5; // ecx
  unsigned int *v6; // rax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rsi
  unsigned int v12; // ebp
  __int64 v13; // r8
  unsigned int *v14; // rax
  int v15; // r11d
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  __int64 v23; // r9
  int *v24; // rcx
  __int64 v25; // rax
  float v26; // xmm4_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  __int64 v32; // rax
  float v33; // xmm0_4
  float v34; // xmm0_4
  __int64 v35; // rax
  float v36; // xmm4_4
  float v37; // xmm0_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm3_4
  float v41; // xmm1_4
  __int64 v42; // rax
  float v43; // xmm0_4
  float v44; // xmm0_4
  __int64 v45; // rax
  float v46; // xmm4_4
  float v47; // xmm0_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  float v50; // xmm3_4
  float v51; // xmm1_4
  __int64 v52; // rax
  float v53; // xmm0_4
  float v54; // xmm0_4
  __int64 v55; // rax
  float v56; // xmm4_4
  float v57; // xmm0_4
  float v58; // xmm2_4
  float v59; // xmm0_4
  float v60; // xmm3_4
  float v61; // xmm1_4
  __int64 v62; // rax
  float v63; // xmm0_4
  float v64; // xmm0_4
  unsigned int *v65; // r9
  __int64 v66; // r10
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // r8
  float v70; // xmm0_4
  unsigned int *v71; // rdx
  unsigned int *v72; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F3E60[112];
#define v74 (*(__int64 (*))(void *)(sr_frame_1400F3E60 + 0)) /* [rsp+0h] */
#define v75 (*(int (*))(void *)(sr_frame_1400F3E60 + 32)) /* [rsp+20h] */
#define v76 (*(int (*))(void *)(sr_frame_1400F3E60 + 36)) /* [rsp+24h] */
#define v77 (*(int (*))(void *)(sr_frame_1400F3E60 + 40)) /* [rsp+28h] */
#define v78 (*(int (*))(void *)(sr_frame_1400F3E60 + 64)) /* [rsp+40h] */
#define v79 (*(int (*))(void *)(sr_frame_1400F3E60 + 68)) /* [rsp+44h] */
#define v80 (*(int (*))(void *)(sr_frame_1400F3E60 + 72)) /* [rsp+48h] */
#define v81 (*(__int64 (*))(void *)(sr_frame_1400F3E60 + 96)) /* [rsp+60h] */

  v0 = 0;
  if ( dword_140404A6C[284022483] )
  {
    v1 = 256;
    v2 = &v78;
    v3 = 0;
    for ( i = 0; i < 3; ++i )
    {
      v5 = 0;
      *v2 = 0;
      v6 = &dword_140404A6C[71859139];
      do
      {
        if ( *(v6 - 2886) && !*v6 && *(v6 - 2853) == i )
          *v2 = ++v5;
        v6 += 3597;
      }
      while ( (__int64)v6 < (__int64)&dword_140404A6C[72779971] );
      if ( v5 > 0 )
      {
        v7 = v5;
        if ( v3 >= v5 )
          v7 = v3;
        v3 = v7;
        if ( v1 > v5 )
          v1 = v5;
      }
      ++v2;
    }
    v8 = 1;
    if ( v78 <= 0 )
      v75 = 1;
    else
      v75 = v78 / v1;
    if ( v79 <= 0 )
      v9 = 1;
    else
      v9 = v79 / v1;
    v76 = v9;
    if ( v80 > 0 )
      v8 = v80 / v1;
  }
  else
  {
    v8 = 1;
    v75 = 1;
    v76 = 1;
  }
  v10 = 0;
  v11 = 0;
  v12 = dword_140404A6C[283831441];
  v77 = v8;
  do
  {
    v13 = 5873 * v11;
    v14 = &dword_140404A6C[278847678];
    v15 = dword_140404A6C[5873 * v11 + 283831504];
    do
    {
      if ( *(v14 - 1785) )
      {
        if ( *(v14 - 1780) == 17 )
        {
          v16 = *((float *)v14 - 1762);
          if ( v16 >= *(float *)&dword_140404A6C[v13 + 283831485] && v16 < *(float *)&dword_140404A6C[v13 + 283831488] )
          {
            v17 = *((float *)v14 - 1760);
            if ( v17 >= *(float *)&dword_140404A6C[v13 + 283831487] && v17 < *(float *)&dword_140404A6C[v13 + 283831490] )
              v15 += 250;
          }
        }
      }
      if ( *(v14 - 25) )
      {
        if ( *(v14 - 20) == 17 )
        {
          v18 = *((float *)v14 - 2);
          if ( v18 >= *(float *)&dword_140404A6C[v13 + 283831485]
            && v18 < *(float *)&dword_140404A6C[v13 + 283831488]
            && *(float *)v14 >= *(float *)&dword_140404A6C[v13 + 283831487]
            && *(float *)v14 < *(float *)&dword_140404A6C[v13 + 283831490] )
          {
            v15 += 250;
          }
        }
      }
      if ( v14[1735] )
      {
        if ( v14[1740] == 17 )
        {
          v19 = *((float *)v14 + 1758);
          if ( v19 >= *(float *)&dword_140404A6C[v13 + 283831485] && v19 < *(float *)&dword_140404A6C[v13 + 283831488] )
          {
            v20 = *((float *)v14 + 1760);
            if ( v20 >= *(float *)&dword_140404A6C[v13 + 283831487] && v20 < *(float *)&dword_140404A6C[v13 + 283831490] )
              v15 += 250;
          }
        }
      }
      if ( v14[3495] )
      {
        if ( v14[3500] == 17 )
        {
          v21 = *((float *)v14 + 3518);
          if ( v21 >= *(float *)&dword_140404A6C[v13 + 283831485] && v21 < *(float *)&dword_140404A6C[v13 + 283831488] )
          {
            v22 = *((float *)v14 + 3520);
            if ( v22 >= *(float *)&dword_140404A6C[v13 + 283831487] && v22 < *(float *)&dword_140404A6C[v13 + 283831490] )
              v15 += 250;
          }
        }
      }
      v14 += 7040;
    }
    while ( (__int64)v14 < (__int64)&dword_140404A6C[280649918] );
    v23 = 4;
    v24 = (int *)&dword_140404A6C[v13 + 283831592];
    do
    {
      if ( *(v24 - 4) )
      {
        v25 = *v24;
        if ( (_DWORD)v25 != -1 )
        {
          v26 = *(float *)&dword_140404A6C[v13 + 283831485];
          v27 = *(float *)&dword_140404A6C[1760 * v25 + 278845916];
          if ( v27 >= v26 )
          {
            v28 = *(float *)&dword_140404A6C[v13 + 283831488];
            if ( v27 < v28 )
            {
              v29 = *(float *)&dword_140404A6C[1760 * v25 + 278845918];
              v30 = *(float *)&dword_140404A6C[v13 + 283831487];
              if ( v29 >= v30 )
              {
                v31 = *(float *)&dword_140404A6C[v13 + 283831490];
                if ( v29 < v31 )
                {
                  if ( (unsigned int)(*(v24 - 1) - 7) > 2
                    || (v32 = v24[1], (_DWORD)v32 == -1)
                    || (v33 = *(float *)&dword_140404A6C[1760 * v32 + 278845916], v33 >= v26)
                    && v33 < v28
                    && (v34 = *(float *)&dword_140404A6C[1760 * v32 + 278845918], v34 >= v30)
                    && v34 < v31 )
                  {
                    v15 += v24[12];
                  }
                }
              }
            }
          }
        }
      }
      if ( v24[275] )
      {
        v35 = v24[279];
        if ( (_DWORD)v35 != -1 )
        {
          v36 = *(float *)&dword_140404A6C[v13 + 283831485];
          v37 = *(float *)&dword_140404A6C[1760 * v35 + 278845916];
          if ( v37 >= v36 )
          {
            v38 = *(float *)&dword_140404A6C[v13 + 283831488];
            if ( v37 < v38 )
            {
              v39 = *(float *)&dword_140404A6C[1760 * v35 + 278845918];
              v40 = *(float *)&dword_140404A6C[v13 + 283831487];
              if ( v39 >= v40 )
              {
                v41 = *(float *)&dword_140404A6C[v13 + 283831490];
                if ( v39 < v41 )
                {
                  if ( (unsigned int)(v24[278] - 7) > 2
                    || (v42 = v24[280], (_DWORD)v42 == -1)
                    || (v43 = *(float *)&dword_140404A6C[1760 * v42 + 278845916], v43 >= v36)
                    && v43 < v38
                    && (v44 = *(float *)&dword_140404A6C[1760 * v42 + 278845918], v44 >= v40)
                    && v44 < v41 )
                  {
                    v15 += v24[291];
                  }
                }
              }
            }
          }
        }
      }
      if ( v24[554] )
      {
        v45 = v24[558];
        if ( (_DWORD)v45 != -1 )
        {
          v46 = *(float *)&dword_140404A6C[v13 + 283831485];
          v47 = *(float *)&dword_140404A6C[1760 * v45 + 278845916];
          if ( v47 >= v46 )
          {
            v48 = *(float *)&dword_140404A6C[v13 + 283831488];
            if ( v47 < v48 )
            {
              v49 = *(float *)&dword_140404A6C[1760 * v45 + 278845918];
              v50 = *(float *)&dword_140404A6C[v13 + 283831487];
              if ( v49 >= v50 )
              {
                v51 = *(float *)&dword_140404A6C[v13 + 283831490];
                if ( v49 < v51 )
                {
                  if ( (unsigned int)(v24[557] - 7) > 2
                    || (v52 = v24[559], (_DWORD)v52 == -1)
                    || (v53 = *(float *)&dword_140404A6C[1760 * v52 + 278845916], v53 >= v46)
                    && v53 < v48
                    && (v54 = *(float *)&dword_140404A6C[1760 * v52 + 278845918], v54 >= v50)
                    && v54 < v51 )
                  {
                    v15 += v24[570];
                  }
                }
              }
            }
          }
        }
      }
      if ( v24[833] )
      {
        v55 = v24[837];
        if ( (_DWORD)v55 != -1 )
        {
          v56 = *(float *)&dword_140404A6C[v13 + 283831485];
          v57 = *(float *)&dword_140404A6C[1760 * v55 + 278845916];
          if ( v57 >= v56 )
          {
            v58 = *(float *)&dword_140404A6C[v13 + 283831488];
            if ( v57 < v58 )
            {
              v59 = *(float *)&dword_140404A6C[1760 * v55 + 278845918];
              v60 = *(float *)&dword_140404A6C[v13 + 283831487];
              if ( v59 >= v60 )
              {
                v61 = *(float *)&dword_140404A6C[v13 + 283831490];
                if ( v59 < v61 )
                {
                  if ( (unsigned int)(v24[836] - 7) > 2
                    || (v62 = v24[838], (_DWORD)v62 == -1)
                    || (v63 = *(float *)&dword_140404A6C[1760 * v62 + 278845916], v63 >= v56)
                    && v63 < v58
                    && (v64 = *(float *)&dword_140404A6C[1760 * v62 + 278845918], v64 >= v60)
                    && v64 < v61 )
                  {
                    v15 += v24[849];
                  }
                }
              }
            }
          }
        }
      }
      v24 += 1116;
      --v23;
    }
    while ( v23 );
    v65 = &dword_140404A6C[71856272];
    v66 = 256;
    do
    {
      if ( *(v65 - 19) )
      {
        if ( v65[14] == v10 )
        {
          v67 = v15 / *(&v75 + v11);
          *v65 += v67 + 250;
          if ( v12 == 1 )
          {
            v68 = (int)*(v65 - 4);
            if ( (_DWORD)v68 != -1 )
              dword_140404A6C[28 * v68 + 134050374] += v67;
          }
        }
      }
      v65 += 3597;
      --v66;
    }
    while ( v66 );
    dword_140404A6C[v13 + 283831505] = v15;
    v69 = 3 * v11;
    v70 = (float)((float)((float)v15 * 2.0000001313746907e-05) + 1.0) * *(float *)&dword_140404A6C[6 * v11 + 335047062];
    if ( v70 < 50.0 )
      v70 = 50.0;
    v12 = dword_140404A6C[283831441];
    *(float *)&dword_140404A6C[6 * v11 + 335047062] = v70;
    if ( v12 != 1 && v70 >= 500.0 )
    {
      v70 = v70 * 0.20000000298023224;
      v71 = &dword_140404A6C[71856288];
      *(float *)&dword_140404A6C[6 * v11 + 335047062] = v70;
      do
      {
        if ( *(v71 - 35) && *(v71 - 2) == v10 )
          *v71 *= 5;
        v71 += 3597;
      }
      while ( (__int64)v71 < (__int64)&dword_140404A6C[72777120] );
    }
    ++v10;
    ++v11;
    dword_140404A6C[2 * v69 + 335047064] = (int)(float)(v70 * 10.0);
  }
  while ( v10 < 3 );
  sub_140052090();
  v72 = &dword_140404A6C[71856253];
  do
  {
    if ( *v72 )
      sub_140051F50(v0);
    ++v0;
    v72 += 3597;
  }
  while ( v0 < 256 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79
#undef v80
#undef v81

// 1400F3F3B: conditional instruction was optimized away because r10d.4>=1
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCB0: using guessed type unsigned int;

//----- (00000001400F45A0) ----------------------------------------------------
__int64            sub_1400F45A0(signed int a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r11
  int v6; // ecx
  int v7; // eax
  unsigned int *v8; // r9
  int v9; // eax
  unsigned int *v10; // r9
  int v11; // eax
  unsigned int *v12; // r9
  int v13; // eax
  unsigned int *v14; // r9
  int v15; // eax
  unsigned int *v16; // r9
  int v17; // eax
  unsigned int *v18; // r10
  int v19; // r8d
  float v20; // xmm1_4
  double v21; // xmm0_8
  signed int v22; // eax
  __int64 v23; // r8
       char *v24; // r9
  __int64 v25; // rbp
  unsigned int v26; // esi
  unsigned int v27; // eax
  __int64 v28; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F45A0[1136];
#define v30 (*(__int64 (*))(void *)(sr_frame_1400F45A0 + 0)) /* [rsp+0h] */
#define v31 (*(float (*)[4])(void *)(sr_frame_1400F45A0 + 32)) /* [rsp+20h] */
#define v32 (*(_OWORD (*)[2])(void *)(sr_frame_1400F45A0 + 48)) /* [rsp+30h] */
#define v33 (*(int (*))(void *)(sr_frame_1400F45A0 + 80)) /* [rsp+50h] */
#define Src (*(__m128i (*)[64])(void *)(sr_frame_1400F45A0 + 96)) /* [rsp+60h] */
#define v35 (*(__int64 (*))(void *)(sr_frame_1400F45A0 + 1120)) /* [rsp+460h] */

  v2 = a1;
  v3 = a2;
  if ( (unsigned int)a1 <= 5 )
  {
    v4 = 5873LL * a1;
    if ( dword_140404A6C[v4 + 283831510] == -1 )
    {
      if ( dword_140404A6C[283831312] == 4 )
      {
        v5 = 3597LL * a2;
        v6 = dword_140404A6C[v5 + 71856275];
        if ( v6 <= 0 )
          v6 = 0;
        dword_140404A6C[5 * v2 + 188872238] = v6;
        if ( !dword_140404A6C[180001071] && (int)dword_140404A6C[539 * v2 + 180001074] > 0 )
        {
          v7 = 0;
          if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
            v7 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
          if ( v7 > 1000 )
            v7 = 1000;
          dword_140404A6C[539 * v2 + 180001074] = dword_140404A6C[180001072]
                                                + (signed int)(v7 * dword_140404A6C[180001072]) / 100;
        }
        if ( !dword_140404A6C[180035724] )
        {
          v8 = &dword_140404A6C[539 * v2 + 180035727];
          if ( (int)*v8 > 0 )
          {
            v9 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v9 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v9 > 1000 )
              v9 = 1000;
            *v8 = dword_140404A6C[180035725] + (signed int)(v9 * dword_140404A6C[180035725]) / 100;
          }
        }
        if ( !dword_140404A6C[180070377] )
        {
          v10 = &dword_140404A6C[539 * v2 + 180070380];
          if ( (int)*v10 > 0 )
          {
            v11 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v11 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v11 > 1000 )
              v11 = 1000;
            *v10 = dword_140404A6C[180070378] + (signed int)(v11 * dword_140404A6C[180070378]) / 100;
          }
        }
        if ( !dword_140404A6C[180105030] )
        {
          v12 = &dword_140404A6C[539 * v2 + 180105033];
          if ( (int)*v12 > 0 )
          {
            v13 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v13 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v13 > 1000 )
              v13 = 1000;
            *v12 = dword_140404A6C[180105031] + (signed int)(v13 * dword_140404A6C[180105031]) / 100;
          }
        }
        if ( !dword_140404A6C[180139683] )
        {
          v14 = &dword_140404A6C[539 * v2 + 180139686];
          if ( (int)*v14 > 0 )
          {
            v15 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v15 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v15 > 1000 )
              v15 = 1000;
            *v14 = dword_140404A6C[180139684] + (signed int)(v15 * dword_140404A6C[180139684]) / 100;
          }
        }
        if ( !dword_140404A6C[180174336] )
        {
          v16 = &dword_140404A6C[539 * v2 + 180174339];
          if ( (int)*v16 > 0 )
          {
            v17 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v17 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v17 > 1000 )
              v17 = 1000;
            *v16 = dword_140404A6C[180174337] + (signed int)(v17 * dword_140404A6C[180174337]) / 100;
          }
        }
        if ( !dword_140404A6C[180208989] )
        {
          v18 = &dword_140404A6C[539 * v2 + 180208992];
          if ( (int)*v18 > 0 )
          {
            v19 = 0;
            if ( (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100 >= 0 )
              v19 = (int)(dword_140404A6C[v5 + 71856275] - 1000) / 100;
            if ( v19 > 1000 )
              v19 = 1000;
            *v18 = dword_140404A6C[180208990] + (signed int)(v19 * dword_140404A6C[180208990]) / 100;
          }
        }
      }
      sub_1400F3D10(v2);
      v20 = *(float *)&dword_140404A6C[v4 + 283831499];
      LODWORD(v31[0]) = dword_140404A6C[v4 + 283831498];
      LODWORD(v31[2]) = dword_140404A6C[v4 + 283831500];
      v31[1] = v20;
      v33 = 1065353216;
      v21 = *(float *)&dword_140404A6C[v4 + 283831497];
      v32[0] = xmmword_140278D30;
      v32[1] = xmmword_140278D30;
      sub_14007B2A0((__int64)v32, (float *)v32 + 3, sr_export_float_lane_container(sr_text_float_bits((float)(v21 - 1.570796326795))) /* the original converts to float (cvtsd2ss) before this call */);
      v22 = sr_CreateItem(25, v31, nullptr, (float *)v32);
      if ( v22 != -1 )
      {
        v23 = 1760LL * v22;
        dword_140404A6C[v23 + 278846051] = 0;
        dword_140404A6C[v23 + 278845981] = 1111 * (v2 + 1);
        sub_140051940(v22);
      }
      v24 = off_1402B2890[v2];
      dword_140404A6C[v4 + 283831510] = v3;
      sub_140158AB0(Src, "%s is now manager of %s", (     char *)&dword_140404A6C[3597 * v3 + 71856254], v24);
      if ( dword_140404A6C[456202453] )
      {
        v25 = -1;
        do
          ++v25;
        while ( SR_VEC_LANES(128, Src[0], i8)[v25] );
        v26 = dword_140404A6C[308307070];
        if ( (int)v25 > 63 )
          LODWORD(v25) = 63;
        v27 = dword_140404A6C[283831474];
        v28 = (__int64)(int)dword_140404A6C[308307070] << 7;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v28) = 2;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v28) = v27;
        sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v28), Src, (int)v25);
        *((_BYTE *)&dword_140404A6C[297756301] + v28 + (int)v25) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v28) = v25;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v28) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v28) = -1;
        dword_140404A6C[308307070] = v26 + 1;
        *(unsigned int *)((char *)&dword_140404A6C[297756296] + v28) = 0;
        HIWORD(dword_140404A6C[308307070]) = 0;
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v30
#undef v31
#undef v32
#undef v33
#undef Src
#undef v35

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (000000014011B8F0) ----------------------------------------------------
_BOOL8            sub_14011B8F0(float *a1, int a2, float a3)
{
  /* Clean implementation: src/engine/corporation.c, checked against the original executable
     (tools/native-compare suite smalls). */
  extern int corporation_contains(const float *position, int corporation, float margin);
  return corporation_contains(a1, a2, a3);
}

//----- (000000014011B960) ----------------------------------------------------
_BOOL8            sub_14011B960(float *a1, int a2, float a3)
{
  __int64 v3; // rdx
  float v4; // xmm1_4
  float v5; // xmm1_4
  _BOOL8 result; // rax

  v3 = 5873LL * a2;
  result = false;
  if ( *a1 >= (float)(*(float *)&dword_140404A6C[v3 + 283831491] - a3)
    && *a1 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 283831494]) )
  {
    v4 = a1[1];
    if ( v4 >= (float)(*(float *)&dword_140404A6C[v3 + 283831492] - a3)
      && v4 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 283831495]) )
    {
      v5 = a1[2];
      if ( v5 >= (float)(*(float *)&dword_140404A6C[v3 + 283831493] - a3)
        && v5 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 283831496]) )
      {
        return true;
      }
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401300C0) ----------------------------------------------------
unsigned int *           sub_1401300C0(int a1)
{
  unsigned int *v2; // r10
  unsigned int *result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v2 = &dword_140404A6C[283831868];
  do
  {
    result = v2;
    v4 = 2;
    do
    {
      if ( *(result - 280) && !*(result - 279) && *(result - 278) == a1 )
      {
        v5 = (int)*(result - 276);
        if ( (unsigned int)v5 < 0x400 )
          dword_140404A6C[1760 * v5 + 278845900] = 0;
        *(result - 276) = -1;
      }
      if ( *(result - 1) && !*result && result[1] == a1 )
      {
        v6 = (int)result[3];
        if ( (unsigned int)v6 < 0x400 )
          dword_140404A6C[1760 * v6 + 278845900] = 0;
        result[3] = -1;
      }
      if ( result[278] && !result[279] && result[280] == a1 )
      {
        v7 = (int)result[282];
        if ( (unsigned int)v7 < 0x400 )
          dword_140404A6C[1760 * v7 + 278845900] = 0;
        result[282] = -1;
      }
      if ( result[557] && !result[558] && result[559] == a1 )
      {
        v8 = (int)result[561];
        if ( (unsigned int)v8 < 0x400 )
          dword_140404A6C[1760 * v8 + 278845900] = 0;
        result[561] = -1;
      }
      if ( result[836] && !result[837] && result[838] == a1 )
      {
        v9 = (int)result[840];
        if ( (unsigned int)v9 < 0x400 )
          dword_140404A6C[1760 * v9 + 278845900] = 0;
        result[840] = -1;
      }
      if ( result[1115] && !result[1116] && result[1117] == a1 )
      {
        v10 = (int)result[1119];
        if ( (unsigned int)v10 < 0x400 )
          dword_140404A6C[1760 * v10 + 278845900] = 0;
        result[1119] = -1;
      }
      if ( result[1394] && !result[1395] && result[1396] == a1 )
      {
        v11 = (int)result[1398];
        if ( (unsigned int)v11 < 0x400 )
          dword_140404A6C[1760 * v11 + 278845900] = 0;
        result[1398] = -1;
      }
      if ( result[1673] && !result[1674] && result[1675] == a1 )
      {
        v12 = (int)result[1677];
        if ( (unsigned int)v12 < 0x400 )
          dword_140404A6C[1760 * v12 + 278845900] = 0;
        result[1677] = -1;
      }
      result += 2232;
      --v4;
    }
    while ( v4 );
    v2 += 5873;
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[283867106] );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

