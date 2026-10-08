#include "shared_client.h"

// 1402B27D0: using guessed type __int64 qword_1402B27D0;
// 1402B27D8: using guessed type int dword_1402B27D8;
// 1402B27DC: using guessed type __int64 qword_1402B27DC;
// 1402B27E4: using guessed type int dword_1402B27E4;
// 1402B27E8: using guessed type int dword_1402B27E8;
// 1402B27EC: using guessed type int dword_1402B27EC;
// 1402B27F0: using guessed type int dword_1402B27F0;
// 1402B27F4: using guessed type int dword_1402B27F4;
// 1402B27F8: using guessed type int dword_1402B27F8;
// 1402B27FC: using guessed type int dword_1402B27FC;
// 1402B2800: using guessed type int dword_1402B2800;
// 1402B2804: using guessed type int dword_1402B2804;
// 1402B2808: using guessed type int dword_1402B2808;
// 1402B2810: using guessed type char (*off_1402B2810)[7];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140020000) ----------------------------------------------------
unsigned int *sub_140020000()
{
  unsigned int *result; // rax
  int v1; // r13d
  unsigned int *v2; // r14
  int v3; // r12d
  unsigned int *v4; // rbx
  int v5; // r15d
  __int64 v6; // rbp
  int v7; // edi
  __int64 v8; // rsi
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (unsigned int *)&retaddr;
  v1 = 0;
  if ( (int)dword_140404A6C[210457991] > 0 )
  {
    v2 = &dword_140404A6C[210457994];
    do
    {
      v3 = 0;
      v4 = v2 + 2562;
      do
      {
        v5 = 0;
        v6 = 8;
        do
        {
          v7 = 0;
          v8 = 8;
          do
          {
            if ( *v4 )
            {
              sub_1400D4FC0(0, v7 + 8 * *(v2 - 1), v3 + 8 * *v2, v5 + 8 * v2[1], *v4);
              result = sub_14003FA40(v7 + 8 * *(v2 - 1), v5 + 8 * v2[1], (float)(int)(v3 + 8 * *v2) * 4.0);
            }
            ++v7;
            ++v4;
            --v8;
          }
          while ( v8 );
          ++v5;
          --v6;
        }
        while ( v6 );
        ++v3;
      }
      while ( v3 < 8 );
      ++v1;
      v2 += 3588;
    }
    while ( v1 < (int)dword_140404A6C[210457991] );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140020130) ----------------------------------------------------
__int64            sub_140020130(int a1)
{
  __int64 v2; // rsi
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  int v5; // edi
  unsigned int v6; // ecx
  int v7; // edx
  int i; // ebx
  unsigned int v9; // r10d
  bool v10; // zf
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // r14d
  int v14; // ebp
  unsigned int v15; // edi
  int v16; // ebx
  unsigned int v17; // edi
  unsigned int v18; // ebp
  int j; // ebx
  int v20; // ebp
  unsigned int v21; // edi
  int v22; // ebx
  int v23; // ebx
  unsigned int v24; // edi
  unsigned int v25; // ebp
  unsigned int v26; // r14d
  unsigned int v27; // ebx
  int v28; // r15d
  unsigned int v29; // edi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140020130[80];
#define v31 (*(__int64 (*))(void *)(sr_frame_140020130 + 0)) /* [rsp+0h] */
#define v32 (*(__int64 (*))(void *)(sr_frame_140020130 + 48)) /* [rsp+30h] */
#define v33 (*(__int64 (*))(void *)(sr_frame_140020130 + 56)) /* [rsp+38h] */
#define v34 (*(__int64 (*))(void *)(sr_frame_140020130 + 64)) /* [rsp+40h] */

  v2 = 34LL * a1;
  v32 = 0x1000100010001LL;
  v33 = 0x1000100010001LL;
  v3 = dword_140404A6C[v2 + 225391232];
  v4 = dword_140404A6C[v2 + 225391241];
  v5 = v3 - dword_140404A6C[v2 + 225391243];
  if ( v5 < (int)(v4 + v3) )
  {
    v6 = dword_140404A6C[v2 + 225391230];
    v7 = v6 + dword_140404A6C[v2 + 225391240];
    do
    {
      for ( i = v6 - dword_140404A6C[v2 + 225391242]; i < v7; v7 = v6 + dword_140404A6C[v2 + 225391240] )
      {
        sub_14000F830(0, i++, dword_140404A6C[v2 + 225391231], v5, 0x40000000u, &v32);
        v6 = dword_140404A6C[v2 + 225391230];
      }
      v4 = dword_140404A6C[v2 + 225391241];
      ++v5;
      v3 = dword_140404A6C[v2 + 225391232];
    }
    while ( v5 < (int)(v4 + v3) );
  }
  v9 = dword_140404A6C[v2 + 225391238];
  v10 = dword_140404A6C[v2 + 225391236] == -1;
  v32 = 0;
  v33 = 0;
  v11 = !v10 + 1;
  if ( dword_140404A6C[v2 + 225391237] == -1 )
    v11 = !v10;
  v12 = v11 + 1;
  if ( v9 == -1 )
    v12 = v11;
  v13 = v12 + 1;
  if ( dword_140404A6C[v2 + 225391239] == -1 )
    v13 = v12;
  if ( dword_140404A6C[v2 + 225391236] == -1 )
  {
    v14 = dword_140404A6C[v2 + 225391230] + dword_140404A6C[v2 + 225391240];
    v15 = dword_140404A6C[v2 + 225391231];
    v16 = v3 - dword_140404A6C[v2 + 225391243] - 1;
    if ( v16 < (int)(v4 + v3 + 1) )
    {
      do
      {
        sub_14000F830(0, v14, v15 + 1, v16, dword_140404A6C[19928887] | 0x80000000, &v32);
        v3 = dword_140404A6C[v2 + 225391232];
        ++v16;
        v4 = dword_140404A6C[v2 + 225391241];
      }
      while ( v16 < (int)(v4 + v3 + 1) );
      v9 = dword_140404A6C[v2 + 225391238];
    }
  }
  if ( v9 == -1 )
  {
    v17 = dword_140404A6C[v2 + 225391230] - dword_140404A6C[v2 + 225391240];
    v18 = dword_140404A6C[v2 + 225391231];
    for ( j = v3 - dword_140404A6C[v2 + 225391243] - 1; j < (int)(v4 + v3 + 1); v4 = dword_140404A6C[v2 + 225391241] )
    {
      sub_14000F830(0, v17 - 1, v18 + 1, j, dword_140404A6C[19928887] | 0x80000000, &v32);
      v3 = dword_140404A6C[v2 + 225391232];
      ++j;
    }
  }
  if ( dword_140404A6C[v2 + 225391237] == -1 )
  {
    v20 = v4 + v3;
    v21 = dword_140404A6C[v2 + 225391231];
    v22 = dword_140404A6C[v2 + 225391230] - dword_140404A6C[v2 + 225391242] - 1;
    if ( v22 < (int)(dword_140404A6C[v2 + 225391240] + dword_140404A6C[v2 + 225391230] + 1) )
    {
      do
        sub_14000F830(0, v22++, v21 + 1, v20, dword_140404A6C[19928887] | 0x80000000, &v32);
      while ( v22 < (int)(dword_140404A6C[v2 + 225391230] + dword_140404A6C[v2 + 225391240] + 1) );
    }
  }
  if ( dword_140404A6C[v2 + 225391239] == -1 )
  {
    v23 = dword_140404A6C[v2 + 225391230] - dword_140404A6C[v2 + 225391242] - 1;
    v24 = dword_140404A6C[v2 + 225391232] - dword_140404A6C[v2 + 225391243];
    v25 = dword_140404A6C[v2 + 225391231];
    if ( v23 < (int)(dword_140404A6C[v2 + 225391240] + dword_140404A6C[v2 + 225391230] + 1) )
    {
      do
        sub_14000F830(0, v23++, v25 + 1, v24 - 1, dword_140404A6C[19928887] | 0x80000000, &v32);
      while ( v23 < (int)(dword_140404A6C[v2 + 225391230] + dword_140404A6C[v2 + 225391240] + 1) );
    }
  }
  if ( v13 > 2 )
  {
    v26 = dword_140404A6C[v2 + 225391230];
    v27 = dword_140404A6C[v2 + 225391232];
    v28 = a1 << 12;
    v29 = dword_140404A6C[v2 + 225391231] + 1;
    if ( dword_140404A6C[v2 + 225391238] != -1 )
      sub_140017260(0, v26 + dword_140404A6C[v2 + 225391240], v29, v27 + dword_140404A6C[v2 + 225391241], v28 | 1);
    if ( dword_140404A6C[v2 + 225391236] != -1 )
      sub_140017260(
        0,
        v26 - dword_140404A6C[v2 + 225391240] - 1,
        v29,
        v27 - dword_140404A6C[v2 + 225391241] - 1,
        v28 | 0x801);
    if ( dword_140404A6C[v2 + 225391239] != -1 )
      sub_140017260(
        0,
        v26 - dword_140404A6C[v2 + 225391240] - 1,
        v29,
        v27 + dword_140404A6C[v2 + 225391241],
        v28 | 0x1000401);
    if ( dword_140404A6C[v2 + 225391237] != -1 )
      sub_140017260(
        0,
        v26 + dword_140404A6C[v2 + 225391240],
        v29,
        v27 - dword_140404A6C[v2 + 225391241] - 1,
        v28 | 0x1000C01);
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v31
#undef v32
#undef v33
#undef v34

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140020580) ----------------------------------------------------
__int64            sub_140020580(int a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  __int64 v3; // r9
  __int64 v4; // r8
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  signed int v7; // r13d
  int v8; // r12d
  unsigned int v9; // r15d
  int v10; // r14d
  int v11; // r8d
  int v12; // ecx
  int v13; // eax
  int v14; // r10d
  int v15; // r11d
  int v16; // eax
  int v17; // edx
  int v18; // esi
  int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // r12d
  bool v22; // zf
  __int64 v23; // rcx
  int v24; // r14d
  int v25; // r9d
  __int64 v26; // rbx
  unsigned int v27; // r8d
  unsigned int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rbx
  int v31; // r9d
  int v32; // edx
  unsigned int v33; // r9d
  signed int v34; // eax
  signed int v35; // ebx
  __int16 v36; // ax
  __int64 v37; // rax
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  signed int v40; // ebx
  __int64 v41; // r9
  int i; // ebx
  int v43; // ecx
  unsigned int v44; // r8d
  int v45; // edx
  __int64 v46; // rcx
  int v47; // eax
  int v48; // ebx
  __int64 v49; // r10
  __int64 v50; // r8
  unsigned int v51; // r12d
  unsigned int v52; // r14d
  signed int v53; // r13d
  int v54; // r12d
  unsigned int v55; // r15d
  int v56; // r14d
  int v57; // r9d
  int v58; // r8d
  int v59; // ecx
  int v60; // r11d
  int v61; // ecx
  int v62; // eax
  int v63; // r9d
  int v64; // esi
  int v65; // edx
  __int64 v66; // r8
  unsigned int v67; // r12d
  __int64 v68; // rcx
  int v69; // r14d
  int v70; // edx
  __int64 v71; // rbx
  unsigned int v72; // r8d
  unsigned int v73; // eax
  unsigned int v74; // ecx
  __int64 v75; // rbx
  int v76; // edx
  int v77; // r9d
  unsigned int v78; // edx
  signed int v79; // eax
  signed int v80; // ebx
  __int64 v81; // r14
  __int16 v82; // ax
  bool v83; // cc
  __int64 v84; // rax
  unsigned int v85; // ecx
  unsigned int v86; // ecx
  signed int v87; // ebx
  __int64 v88; // rdx
  int j; // ebx
  int v90; // ecx
  int v91; // r9d
  __int64 v92; // rcx
  int v93; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140020580[128];
#define v95 (*(__int64 (*))(void *)(sr_frame_140020580 + 0)) /* [rsp+8h] */
#define v96 (*(__int64 (*))(void *)(sr_frame_140020580 + 32)) /* [rsp+28h] */
#define v97 (*(__int64 * (*))(void *)(sr_frame_140020580 + 40)) /* [rsp+30h] */
#define v98 (*(int (*))(void *)(sr_frame_140020580 + 48)) /* [rsp+38h] */
#define v99 (*(int (*))(void *)(sr_frame_140020580 + 52)) /* [rsp+3Ch] */
#define v100 (*(int (*))(void *)(sr_frame_140020580 + 56)) /* [rsp+40h] */
#define v101 (*(int (*))(void *)(sr_frame_140020580 + 60)) /* [rsp+44h] */
#define v102 (*(int (*))(void *)(sr_frame_140020580 + 64)) /* [rsp+48h] */
#define v103 (*(signed int (*))(void *)(sr_frame_140020580 + 68)) /* [rsp+4Ch] */
#define v104 (*(signed int (*))(void *)(sr_frame_140020580 + 72)) /* [rsp+50h] */
#define v105 (*(int (*))(void *)(sr_frame_140020580 + 76)) /* [rsp+54h] */
#define v106 (*(__int64 (*))(void *)(sr_frame_140020580 + 80)) /* [rsp+58h] */
#define v107 (*(int (*))(void *)(sr_frame_140020580 + 88)) /* [rsp+60h] */
#define v108 (*(__int64 (*))(void *)(sr_frame_140020580 + 96)) /* [rsp+68h] */
#define v109 (*(__int64 (*))(void *)(sr_frame_140020580 + 104)) /* [rsp+70h] */
#define v110 (*(__int64 (*))(void *)(sr_frame_140020580 + 112)) /* [rsp+78h] */

  v1 = 396LL * a1;
  if ( !dword_140404A6C[v1 + 225426058] )
  {
    v2 = 6;
    v3 = (int)dword_140404A6C[v1 + 225426056];
    v4 = 34LL * (int)dword_140404A6C[v1 + 225426057];
    v5 = dword_140404A6C[v4 + 225391230] - dword_140404A6C[v4 + 225391242];
    v6 = dword_140404A6C[v4 + 225391231];
    v99 = 6;
    v7 = dword_140404A6C[34 * v3 + 225391231];
    v8 = v5 - (dword_140404A6C[34 * v3 + 225391240] + dword_140404A6C[34 * v3 + 225391230]);
    v9 = dword_140404A6C[34 * v3 + 225391232];
    v10 = v6 - v7;
    v100 = dword_140404A6C[34 * v3 + 225391240] + dword_140404A6C[34 * v3 + 225391230];
    v102 = v10;
    v107 = v8;
    v11 = abs32(v10);
    if ( v11 > 0 )
    {
      v2 = v8 / v11;
      v99 = v8 / v11;
    }
    v12 = v8 >> 1;
    v13 = (v2 * v11) >> 1;
    v14 = (v8 >> 1) - v13;
    v101 = v14;
    v15 = (v8 >> 1) + v13;
    v104 = v15;
    if ( dword_140404A6C[284024893] )
    {
      v2 = 6;
      v99 = 6;
      if ( v11 > 0 )
      {
        if ( v8 / 10 >= v11 )
          v2 = 10;
        v99 = v2;
      }
      v16 = v11 * ((unsigned int)v2 >> 1);
      v14 = v12 - v16;
      v101 = v12 - v16;
      v15 = v12 + v16;
      v104 = v12 + v16;
    }
    v17 = 0;
    v18 = 0;
    v98 = 0;
    if ( v8 > 0 )
    {
      v19 = v8 - 1;
      v20 = v2;
      v21 = v7 + 1;
      v106 = v2;
      v103 = v7 + 1;
      v105 = v19;
      while ( 1 )
      {
        if ( v18 >= v14 && v18 < v15 && v10 > 0 )
        {
          v19 = v105;
          v22 = v17 % v2 == 0;
          v17 = v98;
          if ( v22 )
          {
            ++v7;
            v103 = ++v21;
          }
        }
        v108 = 0;
        v109 = 0;
        if ( v18 )
        {
          if ( v18 < v19 )
          {
            if ( v18 < v14 || v18 >= v15 )
            {
              v24 = v18 + v100;
              sub_14000F830(
                0,
                v18 + v100,
                v21,
                v9 - dword_140404A6C[v1 + 225426059] - 1,
                dword_140404A6C[19928887] | 0x80000000,
                &v108);
              v28 = dword_140404A6C[19928887];
              v27 = v21;
              v29 = dword_140404A6C[v1 + 225426060];
            }
            else
            {
              v23 = v20 << 6;
              v24 = v18 + v100;
              v25 = v9 - dword_140404A6C[v1 + 225426059] - 1;
              if ( v102 <= 0 )
              {
                v30 = v23 + v2 - v17;
                sub_14000F830(0, v24, v7, v25, dword_140404A6C[v30 + 19930121] | 0x80000000, &v108);
                v27 = v7;
                v28 = dword_140404A6C[v30 + 19930121];
              }
              else
              {
                v26 = v23 + v17;
                sub_14000F830(0, v24, v7, v25, dword_140404A6C[v26 + 19930090] | 0x80000000, &v108);
                v27 = v7;
                v28 = dword_140404A6C[v26 + 19930090];
              }
              v29 = dword_140404A6C[v1 + 225426060];
            }
            v31 = v29 + v9;
            v32 = v24;
            v97 = &v108;
            LODWORD(v96) = v28 | 0x80000000;
            goto LABEL_31;
          }
          if ( v18 != v19 )
            goto LABEL_32;
          sub_14000F830(
            0,
            v18 + v100,
            v21,
            v9 - dword_140404A6C[v1 + 225426059] - 1,
            dword_140404A6C[19928887] | 0x80000000,
            &v108);
          v32 = v18 + v100;
        }
        else
        {
          sub_14000F830(
            0,
            v100,
            v21,
            v9 - dword_140404A6C[v1 + 225426059] - 1,
            dword_140404A6C[19928887] | 0x80000000,
            &v108);
          v32 = v100;
        }
        v33 = dword_140404A6C[v1 + 225426060];
        v97 = &v108;
        v31 = v9 + v33;
        LODWORD(v96) = dword_140404A6C[19928887] | 0x80000000;
        v27 = v21;
LABEL_31:
        sub_14000F830(0, v32, v27, v31, v96, v97);
        v14 = v101;
        v20 = v106;
LABEL_32:
        v108 = 0x1000100010001LL;
        v34 = dword_140404A6C[v1 + 225426060];
        v35 = -dword_140404A6C[v1 + 225426059];
        v109 = 0x1000100010001LL;
        if ( v35 >= v34 )
          goto LABEL_52;
        do
        {
          if ( v35 == -1 )
          {
            v36 = 16897;
          }
          else if ( v35 )
          {
            if ( v35 > -2 )
            {
              if ( v35 >= v34 - 1 )
              {
LABEL_42:
                v36 = 1;
                goto LABEL_43;
              }
              v36 = 17409;
            }
            else
            {
              if ( -v35 > (int)(dword_140404A6C[v1 + 225426059] - 1) )
                goto LABEL_42;
              v36 = 17665;
            }
          }
          else
          {
            v36 = 16641;
          }
LABEL_43:
          WORD1(v109) = v36;
          if ( v18 < v14 || v18 >= v104 )
          {
            v39 = 0x40000000;
          }
          else
          {
            LOWORD(v108) = v36;
            v37 = v20 << 6;
            if ( v102 <= 0 )
              v38 = dword_140404A6C[v20 + 19929097 + v37 - v98];
            else
              v38 = dword_140404A6C[v98 + 19929066 + v37];
            v39 = v38 | 0x80000000;
          }
          sub_14000F830(0, v18 + v100, v7, v9 + v35, v39, &v108);
          v14 = v101;
          v34 = dword_140404A6C[v1 + 225426060];
          ++v35;
          v20 = v106;
        }
        while ( v35 < v34 );
        v21 = v103;
LABEL_52:
        v40 = ~dword_140404A6C[v1 + 225426059];
        if ( v40 <= v34 )
        {
          do
          {
            sub_14003FA40(v18 + v100, v40 + v9, (float)v7 * 4.0);
            ++v40;
          }
          while ( v40 <= (int)dword_140404A6C[v1 + 225426060] );
          v21 = v103;
        }
        v14 = v101;
        v15 = v104;
        v10 = v102;
        if ( v18 < v101 || v18 >= v104 )
        {
          v17 = v98;
          v2 = v99;
        }
        else
        {
          v2 = v99;
          if ( v102 < 0 && v98 % v99 == v99 - 1 )
          {
            --v7;
            v103 = --v21;
          }
          v17 = (v98 + 1) % v99;
          v98 = v17;
        }
        v20 = v106;
        ++v18;
        v19 = v105;
        if ( v18 >= v107 )
        {
          LODWORD(v3) = dword_140404A6C[v1 + 225426056];
          break;
        }
      }
    }
    v41 = 34LL * (int)v3;
    for ( i = dword_140404A6C[v41 + 225391232] - dword_140404A6C[v1 + 225426059];
          i < (int)(dword_140404A6C[v1 + 225426060] + dword_140404A6C[v41 + 225391232]);
          v41 = 34LL * (int)dword_140404A6C[v1 + 225426056] )
    {
      v43 = dword_140404A6C[v41 + 225391240];
      v44 = dword_140404A6C[v41 + 225391231];
      v45 = v43 + dword_140404A6C[v41 + 225391230];
      WORD1(v109) = 18433;
      if ( v43 > 0 && ((int)dword_140404A6C[v41 + 225391241] > 0 || (int)dword_140404A6C[v41 + 225391243] > 0) )
        sub_14000F830(0, v45, v44, i, 0x40000000u, &v108);
      v46 = 34LL * (int)dword_140404A6C[v1 + 225426057];
      v47 = dword_140404A6C[v46 + 225391242];
      if ( v47 > 0 && ((int)dword_140404A6C[v46 + 225391241] > 0 || (int)dword_140404A6C[v46 + 225391243] > 0) )
        sub_14000F830(
          0,
          dword_140404A6C[v46 + 225391230] - v47 - 1,
          dword_140404A6C[v46 + 225391231],
          i,
          0x40000000u,
          &v108);
      ++i;
    }
  }
  if ( dword_140404A6C[v1 + 225426058] == 1 )
  {
    v48 = 6;
    v49 = (int)dword_140404A6C[v1 + 225426056];
    v50 = 34LL * (int)dword_140404A6C[v1 + 225426057];
    v51 = dword_140404A6C[v50 + 225391232] - dword_140404A6C[v50 + 225391243];
    v52 = dword_140404A6C[v50 + 225391231];
    v99 = 6;
    v53 = dword_140404A6C[34 * v49 + 225391231];
    v54 = v51 - (dword_140404A6C[34 * v49 + 225391241] + dword_140404A6C[34 * v49 + 225391232]);
    v55 = dword_140404A6C[34 * v49 + 225391230];
    v56 = v52 - v53;
    v101 = dword_140404A6C[34 * v49 + 225391241] + dword_140404A6C[34 * v49 + 225391232];
    v102 = v56;
    v107 = v54;
    v57 = abs32(v56);
    if ( v57 > 0 )
    {
      v48 = v54 / v57;
      v99 = v54 / v57;
    }
    v58 = v54 >> 1;
    v59 = (v48 * v57) >> 1;
    v60 = (v54 >> 1) - v59;
    v61 = (v54 >> 1) + v59;
    v100 = v60;
    v103 = v61;
    if ( dword_140404A6C[284024893] )
    {
      v48 = 6;
      v99 = 6;
      if ( v57 > 0 )
      {
        if ( v54 / 10 >= v57 )
          v48 = 10;
        v99 = v48;
      }
      v62 = v57 * ((unsigned int)v48 >> 1);
      v60 = v58 - v62;
      v100 = v58 - v62;
      v61 = v58 + v62;
      v103 = v58 + v62;
    }
    v98 = 0;
    v63 = 0;
    v64 = 0;
    if ( v54 > 0 )
    {
      v65 = v54 - 1;
      v66 = v48;
      v67 = v53 + 1;
      v106 = v48;
      v104 = v53 + 1;
      v105 = v65;
      while ( 1 )
      {
        if ( v64 >= v60 && v64 < v61 && v56 > 0 )
        {
          v65 = v105;
          if ( !(v63 % v48) )
          {
            ++v53;
            v104 = ++v67;
          }
        }
        v108 = 0;
        v109 = 0;
        if ( !v64 )
        {
          sub_14000F830(
            0,
            v55 - dword_140404A6C[v1 + 225426059] - 1,
            v67,
            v101,
            dword_140404A6C[19928887] | 0x80000000,
            &v108);
          v77 = v101;
          goto LABEL_103;
        }
        if ( v64 < v65 )
          break;
        if ( v64 == v65 )
        {
          sub_14000F830(
            0,
            v55 - dword_140404A6C[v1 + 225426059] - 1,
            v67,
            v64 + v101,
            dword_140404A6C[19928887] | 0x80000000,
            &v108);
          v77 = v64 + v101;
LABEL_103:
          v78 = dword_140404A6C[v1 + 225426060];
          v97 = &v108;
          v76 = v55 + v78;
          LODWORD(v96) = dword_140404A6C[19928887] | 0x80000000;
          v72 = v67;
LABEL_104:
          sub_14000F830(0, v76, v72, v77, v96, v97);
          v60 = v100;
          v66 = v106;
          v63 = v98;
        }
        v108 = 0x1000100010001LL;
        v79 = dword_140404A6C[v1 + 225426060];
        v80 = -dword_140404A6C[v1 + 225426059];
        v109 = 0x1000100010001LL;
        if ( v80 >= v79 )
          goto LABEL_125;
        v81 = v63;
        do
        {
          if ( v80 == -1 )
          {
            v82 = 18177;
          }
          else if ( v80 )
          {
            if ( v80 > -2 )
            {
              v83 = v80 < v79 - 1;
              v82 = 18689;
              if ( !v83 )
LABEL_115:
                v82 = 1;
            }
            else
            {
              if ( -v80 > (int)(dword_140404A6C[v1 + 225426059] - 1) )
                goto LABEL_115;
              v82 = 18945;
            }
          }
          else
          {
            v82 = 17921;
          }
          WORD1(v109) = v82;
          if ( v64 < v60 || v64 >= v103 )
          {
            v86 = 0x40000000;
          }
          else
          {
            LOWORD(v108) = v82;
            v84 = v66 << 6;
            if ( v102 <= 0 )
              v85 = dword_140404A6C[v66 + 19929113 + v84 - v81];
            else
              v85 = dword_140404A6C[v81 + 19929082 + v84];
            v86 = v85 | 0x80000000;
          }
          sub_14000F830(0, v55 + v80, v53, v64 + v101, v86, &v108);
          v60 = v100;
          v79 = dword_140404A6C[v1 + 225426060];
          ++v80;
          v66 = v106;
        }
        while ( v80 < v79 );
        v67 = v104;
LABEL_125:
        v87 = ~dword_140404A6C[v1 + 225426059];
        if ( v87 <= v79 )
        {
          do
          {
            sub_14003FA40(v87 + v55, v64 + v101, (float)v53 * 4.0);
            ++v87;
          }
          while ( v87 <= (int)dword_140404A6C[v1 + 225426060] );
          v67 = v104;
        }
        v60 = v100;
        v61 = v103;
        v56 = v102;
        v48 = v99;
        if ( v64 < v100 || v64 >= v103 )
        {
          v63 = v98;
        }
        else
        {
          if ( v102 < 0 && v98 % v99 == v99 - 1 )
          {
            --v53;
            v104 = --v67;
          }
          v63 = (v98 + 1) % v99;
          v98 = v63;
        }
        v66 = v106;
        ++v64;
        v65 = v105;
        if ( v64 >= v107 )
        {
          LODWORD(v49) = dword_140404A6C[v1 + 225426056];
          goto LABEL_137;
        }
      }
      if ( v64 < v60 || v64 >= v61 )
      {
        v69 = v64 + v101;
        sub_14000F830(
          0,
          v55 - dword_140404A6C[v1 + 225426059] - 1,
          v67,
          v64 + v101,
          dword_140404A6C[19928887] | 0x80000000,
          &v108);
        v73 = dword_140404A6C[19928887];
        v72 = v67;
        v74 = dword_140404A6C[v1 + 225426060];
      }
      else
      {
        v68 = v66 << 6;
        v69 = v64 + v101;
        v70 = v55 - dword_140404A6C[v1 + 225426059] - 1;
        if ( v102 <= 0 )
        {
          v75 = v68 + v48 - v63;
          sub_14000F830(0, v70, v53, v69, dword_140404A6C[v75 + 19930137] | 0x80000000, &v108);
          v72 = v53;
          v73 = dword_140404A6C[v75 + 19930137];
        }
        else
        {
          v71 = v68 + v63;
          sub_14000F830(0, v70, v53, v69, dword_140404A6C[v71 + 19930106] | 0x80000000, &v108);
          v72 = v53;
          v73 = dword_140404A6C[v71 + 19930106];
        }
        v74 = dword_140404A6C[v1 + 225426060];
      }
      v76 = v74 + v55;
      v77 = v69;
      v97 = &v108;
      LODWORD(v96) = v73 | 0x80000000;
      goto LABEL_104;
    }
LABEL_137:
    v88 = 34LL * (int)v49;
    for ( j = dword_140404A6C[v88 + 225391230] - dword_140404A6C[v1 + 225426059];
          j < (int)(dword_140404A6C[v1 + 225426060] + dword_140404A6C[v88 + 225391230]);
          v88 = 34LL * (int)dword_140404A6C[v1 + 225426056] )
    {
      v90 = dword_140404A6C[v88 + 225391241];
      v91 = v90 + dword_140404A6C[v88 + 225391232];
      WORD1(v109) = 17153;
      if ( v90 > 0 && ((int)dword_140404A6C[v88 + 225391240] > 0 || (int)dword_140404A6C[v88 + 225391242] > 0) )
        sub_14000F830(0, j, dword_140404A6C[v88 + 225391231], v91, 0x40000000u, &v108);
      v92 = 34LL * (int)dword_140404A6C[v1 + 225426057];
      v93 = dword_140404A6C[v92 + 225391243];
      if ( v93 > 0 && ((int)dword_140404A6C[v92 + 225391240] > 0 || (int)dword_140404A6C[v92 + 225391242] > 0) )
        sub_14000F830(
          0,
          j,
          dword_140404A6C[v92 + 225391231],
          dword_140404A6C[v92 + 225391232] - v93 - 1,
          0x40000000u,
          &v108);
      ++j;
    }
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v95
#undef v96
#undef v97
#undef v98
#undef v99
#undef v100
#undef v101
#undef v102
#undef v103
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110

// 1400209C7: conditional instruction was optimized away because ebx.4>=1
// 14002102A: conditional instruction was optimized away because ebx.4>=1
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A748: using guessed type unsigned int;

//----- (00000001400212E0) ----------------------------------------------------
__int64 sub_1400212E0()
{
  int v0; // r13d
  unsigned int *v1; // r14
  unsigned int *v2; // rdi
  int v3; // ebx
  int *v4; // rsi
  unsigned int *v5; // rsi
  unsigned int *v6; // rbx
  float *v7; // r12
  int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // xmm0_4
  int v11; // eax
  unsigned int v12; // r15d
  unsigned int v13; // eax
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  int v17; // ecx
  unsigned int v18; // eax
  float v19; // xmm6_4
  unsigned int v20; // ecx
  float v21; // xmm7_4
  float v22; // xmm8_4
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  int v25; // ecx
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm0_4
  int v30; // r14d
  unsigned int *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  unsigned int v34; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm7_4
  float v37; // xmm8_4
  float v38; // xmm9_4
  unsigned int v39; // ecx
  float v40; // xmm0_4
  float v41; // xmm7_4
  float v42; // xmm8_4
  float v43; // xmm9_4
  signed int v44; // esi
  unsigned int *v45; // rbx
  float v46; // xmm4_4
  float v47; // xmm5_4
  float v48; // xmm6_4
  __int64 v49; // rax
  unsigned int v50; // ecx
  unsigned int *v51; // r12
  float v52; // xmm14_4
  unsigned int *v53; // rcx
  float v54; // xmm15_4
  unsigned int *v55; // rbx
  float v56; // xmm8_4
  __int64 v57; // rax
  float v58; // xmm1_4
  float v59; // xmm12_4
  float v60; // xmm0_4
  __int64 v61; // rdi
  float v62; // xmm12_4
  bool v63; // cc
  __int64 v64; // rcx
  unsigned int v65; // xmm1_4
  __int128 v66; // xmm0
  __int64 v67; // rsi
  signed int v68; // r15d
  int *v69; // r14
  float *v70; // rsi
  __int64 v71; // r12
  float *v72; // rdi
  float v73; // xmm2_4
  float v74; // xmm6_4
  float v75; // xmm3_4
  float v76; // xmm5_4
  float v77; // xmm9_4
  float v78; // xmm11_4
  float v79; // xmm0_4
  float v80; // xmm8_4
  float v81; // xmm1_4
  float v82; // xmm10_4
  float v83; // xmm4_4
  float v84; // xmm7_4
  double v85; // xmm2_8
  float v86; // xmm7_4
  float v87; // xmm10_4
  float v88; // xmm3_4
  float v89; // xmm4_4
  unsigned int v90; // xmm0_4
  unsigned int v91; // xmm1_4
  int v92; // xmm0_4
  unsigned int v93; // xmm2_4
  unsigned int v94; // xmm3_4
  float v95; // xmm4_4
  float v96; // xmm0_4
  double v97; // xmm2_8
  __int64 v98; // r15
  __int64 v99; // r14
  _DWORD *v100; // rdi
  __int64 v101; // rsi
  int v102; // eax
  __int64 v103; // r8
  float v104; // xmm10_4
  float *v105; // rdx
  float v106; // xmm11_4
  float v107; // xmm12_4
  float v108; // xmm6_4
  float v109; // xmm8_4
  __int64 v110; // rcx
  float v111; // xmm7_4
  float v112; // xmm9_4
  float v113; // xmm1_4
  float v114; // xmm2_4
  float v115; // xmm3_4
  float v116; // xmm7_4
  float v117; // xmm9_4
  float v118; // xmm3_4
  float v119; // xmm5_4
  float v120; // xmm4_4
  __int64 v121; // rcx
  float v122; // xmm6_4
  __int64 v123; // rcx
  float *v124; // rdx
  float v125; // xmm2_4
  float v126; // xmm1_4
  float v127; // xmm0_4
  float v128; // xmm5_4
  float v129; // xmm4_4
  float v130; // xmm7_4
  float v131; // xmm6_4
  float v132; // xmm3_4
  float v133; // xmm0_4
  __int64 v134; // rcx
  int v135; // ebx
  unsigned int *v136; // rdi
  unsigned int *v137; // rbx
  unsigned int *v138; // r14
  unsigned int *v139; // rsi
  unsigned int v140; // edx
  __int64 v141; // r15
  __int64 v142; // r8
  __int64 v143; // rax
  unsigned __int64 v144; // rcx
  unsigned int v145; // eax
  signed int v146; // edi
  int v147; // eax
  float v148; // xmm6_4
  float v149; // xmm8_4
  float v150; // xmm9_4
  unsigned int v151; // xmm1_4
  float v152; // xmm0_4
  float v153; // xmm6_4
  float v154; // xmm8_4
  float v155; // xmm9_4
  unsigned __int64 v156; // rax
  bool v157; // zf
  float v158; // xmm14_4
  float v159; // xmm15_4
  unsigned int v160; // eax
  float v161; // xmm10_4
  double v162; // xmm11_8
  __int64 v163; // r8
  unsigned int v164; // eax
  __int64 v165; // rdx
  unsigned int *v166; // rdi
  __int64 v167; // r15
  __int64 v168; // rax
  __int64 v169; // r12
  signed int v170; // ecx
  float *v171; // rsi
  signed int v172; // r14d
  __int64 v173; // r15
  int v174; // edi
  unsigned int *v175; // rbx
  __int64 v176; // rcx
  float v177; // xmm4_4
  float v178; // xmm5_4
  float v179; // xmm1_4
  float v180; // xmm3_4
  float v181; // xmm6_4
  float v182; // xmm3_4
  float v183; // xmm1_4
  float v184; // xmm2_4
  signed int v185; // edi
  unsigned int *v186; // rbx
  __int64 v187; // rdx
  unsigned int v188; // eax
  unsigned int v189; // eax
  __int64 v190; // rax
  unsigned int *v191; // r14
  unsigned int *v192; // rsi
  __int64 v193; // r8
  unsigned int v194; // ecx
  unsigned int v195; // eax
  __int64 v196; // rax
  int v197; // ebx
  unsigned int *v198; // rcx
  __int64 v199; // r8
  unsigned int *v200; // rdx
  unsigned int v201; // eax
  __int64 v202; // rcx
  unsigned sr_scene_draw_textures[4];
  _Alignas(8) unsigned sr_scene_draw_position[3];
  _Alignas(16) unsigned sr_scene_draw_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400212E0[176];
#define v204 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 0)) /* [rsp+8h] */
#define v205 (*(unsigned int * (*))(void *)(sr_frame_1400212E0 + 32)) /* [rsp+28h] */
#define v210 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 80)) /* [rsp+58h] */
#define v211 (*(unsigned int * (*))(void *)(sr_frame_1400212E0 + 88)) /* [rsp+60h] */
#define v212 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 96)) /* [rsp+68h] */
#define v213 (*(unsigned int * (*))(void *)(sr_frame_1400212E0 + 104)) /* [rsp+70h] */
#define v214 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 112)) /* [rsp+78h] */
#define v215 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 120)) /* [rsp+80h] */
#define v219 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 168)) /* [rsp+B0h] */

  v0 = 0;
  v1 = &dword_140404A6C[283827286];
  dword_140404A6C[284550610] = 0;
  v2 = &dword_140404A6C[280651303];
  dword_140404A6C[284677614] = 0;
  v3 = 0;
  v4 = (int *)&dword_140404A6C[283827286];
  do
  {
    if ( *v2 )
      sub_140022DF0(v3, *v4);
    ++v3;
    v2 += 7166;
    ++v4;
  }
  while ( v3 < 256 );
  v5 = &dword_140404A6C[284956410];
  v6 = &dword_140404A6C[280651748];
  v7 = (float *)&dword_140404A6C[284956415];
  v8 = 0;
  do
  {
    if ( *(v6 - 445) )
    {
      v9 = *v1;
      sr_scene_draw_textures[0] = dword_140404A6C[283830722];
      sr_scene_draw_textures[1] = dword_140404A6C[283830722];
      (*(uint64_t *)(void *)sr_scene_draw_position) = 0;
      (*(float *)&sr_scene_draw_position[2]) = 0.0;
      (*(__int128 *)(void *)sr_scene_draw_rotation) = xmmword_140278D30;
      (*(float *)&sr_scene_draw_rotation[8]) = 1.0;
      (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = xmmword_140278D30;
      sub_140092140(v9, &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
      *(float *)&dword_140404A6C[30 * dword_140404A6C[284550610] + 284554703] = (float)((float)(int)v6[6693] * 0.0625)
                                                                              + 0.03125;
      *(float *)&v10 = (float)((float)(int)v6[6698] * 0.0625) + 0.03125;
      dword_140404A6C[30 * dword_140404A6C[284550610] + 284554678] = dword_140404A6C[908 * *v1 + 178527484];
      dword_140404A6C[30 * dword_140404A6C[284550610] + 284554704] = v10;
      v11 = v6[6699];
      if ( v11 > 0 )
        *(float *)&dword_140404A6C[30 * dword_140404A6C[284550610] + 284554705] = (float)((float)(v11 - 1) * 0.0625)
                                                                                + 0.03125;
      v12 = 1;
      if ( !dword_140404A6C[284024355] && dword_140404A6C[284024501] != -1 )
      {
        v13 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292];
        if ( v13 != -1
          && !dword_140404A6C[179668288]
          && v13 == v8
          && ((int)*(v6 - 430) > 0 || (int)dword_140404A6C[284021983] > 0) )
        {
          v12 = 3;
        }
      }
      v14 = *(v7 - 2);
      v15 = *(v7 - 1);
      v16 = *v7;
      v17 = 16 * v6[6691];
      sr_scene_draw_textures[0] = dword_140404A6C[283830724];
      sr_scene_draw_textures[1] = dword_140404A6C[283830724];
      v18 = v17 + v6[6692];
      v205 = v5;
      v19 = (float)(v14 * 0.125) + *((float *)v6 - 2);
      v20 = dword_140404A6C[v18 + 283827702];
      v21 = (float)(v15 * 0.125) + *((float *)v6 - 1);
      (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(LODWORD(v21), LODWORD(v19));
      v22 = (float)(v16 * 0.125) + *(float *)v6;
      (*(float *)&sr_scene_draw_position[2]) = v22;
      sub_140092140(v20, &sr_scene_draw_textures[0], v12, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), v5);
      v23 = _mm_cvtsi32_si128(v6[6693]);
      v24 = _mm_cvtsi32_si128(v6[6694]);
      v205 = v5;
      *(float *)&dword_140404A6C[30 * dword_140404A6C[284550610] + 284554703] = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v23), f32)[0]
                                                                                      * 0.0625)
                                                                              + 0.03125;
      *(float *)SR_VEC_LANES(128, v23, i32) = (float)(int)v6[6696];
      *(float *)&dword_140404A6C[30 * dword_140404A6C[284550610] + 284554704] = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v24), f32)[0]
                                                                                      * 0.0625)
                                                                              + 0.03125;
      v25 = 16 * v6[6691];
      *(float *)&dword_140404A6C[30 * dword_140404A6C[284550610] + 284554705] = (float)(*(float *)SR_VEC_LANES(128, v23, i32) * 0.0625)
                                                                              + 0.03125;
      sub_140092140(dword_140404A6C[v25 + v6[6695] + 283827734], &sr_scene_draw_textures[0], v12, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), v205);
      *(float *)SR_VEC_LANES(128, v24, i32) = (float)((float)(int)v6[6694] * 0.0625) + 0.03125;
      *(float *)&dword_140404A6C[30 * dword_140404A6C[284550610] + 284554703] = (float)((float)(int)v6[6693] * 0.0625)
                                                                              + 0.03125;
      *(float *)SR_VEC_LANES(128, v23, i32) = (float)(int)v6[6696];
      dword_140404A6C[30 * dword_140404A6C[284550610] + 284554704] = SR_VEC_LANES(128, v24, i32)[0];
      *(float *)&dword_140404A6C[30 * dword_140404A6C[284550610] + 284554705] = (float)(*(float *)SR_VEC_LANES(128, v23, i32) * 0.0625)
                                                                              + 0.03125;
      if ( v6[6700] )
      {
        v26 = *((float *)v6 - 58);
        v27 = *((float *)v6 - 59) * 0.046875;
        sr_scene_draw_textures[0] = dword_140404A6C[283830690];
        sr_scene_draw_textures[1] = dword_140404A6C[283830690];
        v28 = v19 - v27;
        v205 = v5;
        v29 = *((float *)v6 - 57) * 0.046875;
        *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = v28;
        *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = v21 - (float)(v26 * 0.046875);
        (*(float *)&sr_scene_draw_position[2]) = v22 - v29;
        sub_140092140(dword_140404A6C[283827800], &sr_scene_draw_textures[0], v12, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), v5);
      }
    }
    ++v8;
    v5 += 344;
    ++v1;
    v7 += 344;
    v6 += 7166;
  }
  while ( v8 < 256 );
  v30 = 0;
  if ( (int)dword_140404A6C[132792829] > 0 )
  {
    v31 = &dword_140404A6C[132400650];
    do
    {
      v32 = (int)*(v31 - 11);
      if ( (_DWORD)v32 == -1
        || !dword_140404A6C[77 * v32 + 285044400]
        || dword_140404A6C[5210 * *(v31 - 11) + 129720183] != v30 )
      {
        v33 = (int)*(v31 - 13);
        v34 = v31[3];
        v35 = *((float *)v31 + 6);
        v36 = *((float *)v31 - 9);
        v37 = *((float *)v31 - 8);
        v38 = *((float *)v31 - 7);
        v39 = dword_140404A6C[v33 + 283826646];
        (*(__int128 *)(void *)sr_scene_draw_rotation) = *(_OWORD *)(v31 - 2);
        sr_scene_draw_textures[0] = dword_140404A6C[283830649];
        LODWORD((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = v31[2];
        LODWORD(v40) = v31[4];
        *(_QWORD *)((char *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 4) = __PAIR64__(LODWORD(v40), v34);
        HIDWORD((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = v31[5];
        (*(float *)&sr_scene_draw_rotation[8]) = v35;
        sr_scene_draw_textures[1] = dword_140404A6C[283830649];
        v41 = v36 - (float)(v40 * 1.5);
        v42 = v37 - (float)(*((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 3) * 1.5);
        v43 = v38 - (float)(v35 * 1.5);
        (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(LODWORD(v42), LODWORD(v41));
        (*(float *)&sr_scene_draw_position[2]) = v43;
        sub_140092140(v39, &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
        v44 = 0;
        *(float *)&dword_140404A6C[30 * dword_140404A6C[284550610] + 284554703] = (float)((float)(int)v31[361] * 0.0625)
                                                                                + 0.03125;
        sr_scene_draw_textures[0] = dword_140404A6C[283830689];
        sr_scene_draw_textures[1] = dword_140404A6C[283830689];
        if ( (int)dword_140404A6C[24944 * *(v31 - 13) + 346731811] > 0 )
        {
          v45 = &dword_140404A6C[24944 * v33 + 346731821];
          do
          {
            v46 = *((float *)v45 - 1);
            v47 = *(float *)v45;
            v48 = *((float *)v45 + 1);
            v49 = (int)v45[7];
            v205 = (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation);
            v50 = dword_140404A6C[v49 + 283827222];
            *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = (float)((float)((float)(*(float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) * v46) + v41)
                                    + (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) * v47))
                            + (float)(v48 * *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 2));
            *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = (float)((float)((float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) * v46) + v42)
                                          + (float)(*(float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) * v47))
                                  + (float)(v48 * *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 3));
            (*(float *)&sr_scene_draw_position[2]) = (float)((float)((float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 2) * v46) + v43) + (float)(*((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 1) * v47))
                 + (float)(v48 * (*(float *)&sr_scene_draw_rotation[8]));
            sub_140092140(v50, &sr_scene_draw_textures[0], 0, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
            ++v44;
            v45 += 20;
          }
          while ( v44 < (int)dword_140404A6C[24944 * *(v31 - 13) + 346731811] );
        }
      }
      ++v30;
      v31 += 383;
    }
    while ( v30 < (int)dword_140404A6C[132792829] );
  }
  v51 = &dword_140404A6C[129716711];
  v52 = *(float *)&dword_140404A6C[284024504];
  v53 = &dword_140404A6C[285044401];
  v54 = *(float *)&dword_140404A6C[284024503];
  v55 = &dword_140404A6C[285044409];
  v56 = *(float *)&dword_140404A6C[284024502];
  v57 = 512;
  v211 = &dword_140404A6C[129716711];
  v213 = &dword_140404A6C[285044401];
  v212 = 512;
  do
  {
    if ( *(v51 - 2) && *(v55 - 9) && *v51 != 3 )
    {
      v58 = *((float *)v55 - 8);
      v59 = *((float *)v55 - 7);
      v60 = *((float *)v55 - 6);
      sr_scene_draw_textures[0] = dword_140404A6C[283830649];
      sr_scene_draw_textures[1] = dword_140404A6C[283830649];
      LODWORD(v210) = *(v51 - 1);
      v61 = (int)v210;
      v215 = (int)v210;
      v62 = (float)((float)((float)(v59 - v54) * (float)(v59 - v54)) + (float)((float)(v58 - v56) * (float)(v58 - v56)))
          + (float)((float)(v60 - v52) * (float)(v60 - v52));
      sub_140092140(dword_140404A6C[(int)v210 + 283826582], &sr_scene_draw_textures[0], 1u, v53, v53 + 3);
      v63 = (int)v51[1] <= 0;
      *(float *)&dword_140404A6C[30 * dword_140404A6C[284550610] + 284554703] = (float)((float)(int)v51[4] * 0.0625)
                                                                              + 0.03125;
      if ( v63 )
        dword_140404A6C[30 * dword_140404A6C[284550610] + 284554703] = 1053818880;
      if ( *(v51 - 1) == 17 && (int)v51[5039] > 0 )
      {
        v64 = 47LL * (int)v51[5040];
        v65 = dword_140404A6C[v64 + 18215716];
        LODWORD((*(uint64_t *)(void *)sr_scene_draw_position)) = dword_140404A6C[v64 + 18215715];
        (*(float *)&sr_scene_draw_position[2]) = *(float *)&dword_140404A6C[v64 + 18215717];
        v66 = *(_OWORD *)&dword_140404A6C[v64 + 18215724];
        HIDWORD((*(uint64_t *)(void *)sr_scene_draw_position)) = v65;
        (*(__int128 *)(void *)sr_scene_draw_rotation) = v66;
        (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = *(_OWORD *)&dword_140404A6C[v64 + 18215728];
        (*(float *)&sr_scene_draw_rotation[8]) = *(float *)&dword_140404A6C[v64 + 18215732];
        sub_140092140(dword_140404A6C[283826778], &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
      }
      v67 = 99776 * v61;
      sr_scene_draw_textures[0] = dword_140404A6C[283830689];
      v68 = 0;
      sr_scene_draw_textures[1] = dword_140404A6C[283830689];
      v214 = 99776 * v61;
      if ( (int)dword_140404A6C[24944 * v61 + 346731811] > 0 )
      {
        v69 = (int *)(v51 + 3666);
        v70 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1391140640);
        v71 = v214;
        v72 = (float *)(v55 + 5);
        do
        {
          v73 = *((float *)v55 + 2);
          v74 = *(v70 - 1);
          v75 = v70[1];
          LODWORD(v76) = *(v55 - 5);
          LODWORD(v77) = *(v55 - 4);
          LODWORD(v78) = *(v55 - 3);
          LODWORD(v79) = *(v55 - 2);
          LODWORD(v80) = *v55;
          LODWORD(v81) = v55[1];
          v82 = *((float *)v55 + 3);
          v83 = v72[1] + *v70;
          LODWORD((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = *(v55 - 1);
          (*(float *)&sr_scene_draw_rotation[8]) = v82;
          *(_QWORD *)&(*(__int128 *)(void *)sr_scene_draw_rotation) = __PAIR64__(LODWORD(v77), LODWORD(v76));
          *((_QWORD *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) = __PAIR64__(LODWORD(v79), LODWORD(v78));
          *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 3) = v73;
          v84 = (float)(*(float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) * v83) + (float)(v73 * v75);
          *(_QWORD *)&v85 = *(unsigned int *)v72;
          *(_QWORD *)((char *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 4) = __PAIR64__(LODWORD(v81), LODWORD(v80));
          v86 = v84 + (float)((float)(v77 * v74) + *((float *)v55 - 7));
          v87 = (float)((float)(v82 * v75) + (float)(v80 * v83)) + (float)((float)(v78 * v74) + *((float *)v55 - 6));
          *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = (float)((float)(v81 * v75) + (float)(v79 * v83))
                          + (float)((float)(v76 * v74) + *((float *)v55 - 8));
          *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = v86;
          (*(float *)&sr_scene_draw_position[2]) = v87;
          sub_14012BD30((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, v85);
          sub_14012BD30((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation), sr_export_float_lane_container((unsigned __int64)*((_DWORD *)v72 - 1)));
          sub_140092140(
            dword_140404A6C[*v69 + 283827222],
            &sr_scene_draw_textures[0],
            v62 < 16384.0,
            (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position),
            (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
          ++v68;
          v70 += 20;
          v72 += 4;
          v69 += 43;
        }
        while ( v68 < *(int *)((char *)&dword_140404A6C[346731811] + v71) );
        v51 = v211;
        v67 = v214;
        v61 = v215;
      }
      if ( (_DWORD)v210 == 12 )
      {
        LODWORD(v88) = *(v55 - 1);
        LODWORD(v89) = *v55;
        v90 = *(v55 - 5);
        v91 = *(v55 - 4);
        HIDWORD((*(__int128 *)(void *)sr_scene_draw_rotation)) = *(v55 - 2);
        *(_QWORD *)&(*(__int128 *)(void *)sr_scene_draw_rotation) = __PAIR64__(v91, v90);
        v92 = *(v55 - 3);
        *(_QWORD *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = __PAIR64__(LODWORD(v89), LODWORD(v88));
        *(float *)&v93 = (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) * 1.5) + *((float *)v55 - 8);
        DWORD2((*(__int128 *)(void *)sr_scene_draw_rotation)) = v92;
        *(float *)&v94 = (float)(v88 * 1.5) + *((float *)v55 - 7);
        v95 = (float)(v89 * 1.5) + *((float *)v55 - 6);
        *((_QWORD *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 1) = *(_QWORD *)(v55 + 1);
        v96 = *((float *)v55 + 3);
        (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(v94, v93);
        *(_QWORD *)&v97 = v51[3680];
        (*(float *)&sr_scene_draw_rotation[8]) = v96;
        (*(float *)&sr_scene_draw_position[2]) = v95;
        sub_14012BD30((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, v97);
        sub_140092140(dword_140404A6C[283827804], &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
        sub_14012BD30((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, sr_export_float_lane_container(1078530011));
        sub_140092140(dword_140404A6C[283827804], &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
      }
      if ( *(unsigned int *)((char *)&dword_140404A6C[346707717] + v67)
        && (v98 = 45072 * v61, v99 = (int)dword_140404A6C[45072 * v61 + 335200382], v99 > 0) )
      {
        v56 = *(float *)&dword_140404A6C[284024502];
        v100 = v51 + 2557;
        v52 = *(float *)&dword_140404A6C[284024504];
        v101 = 0;
        v54 = *(float *)&dword_140404A6C[284024503];
        v102 = dword_140404A6C[284677614];
        LODWORD(v210) = dword_140404A6C[284024502];
        do
        {
          if ( !*v100 && v102 < 0x4000 )
          {
            v103 = 0;
            v104 = 0.0;
            v105 = (float *)&dword_140404A6C[v98 + 335200386 + v101];
            v106 = 0.0;
            v107 = 0.0;
            while ( 1 )
            {
              v108 = v105[3];
              v109 = (float)((float)(*v105 * *((float *)v55 + 1)) + (float)(*(v105 - 2) * *((float *)v55 - 5)))
                   + (float)((float)(*(v105 - 1) * *((float *)v55 - 2)) + *((float *)v55 - 8));
              v110 = v103 + 68LL * v102;
              v111 = (float)(*(v105 - 2) * *((float *)v55 - 4)) + (float)(*v105 * *((float *)v55 + 2));
              v112 = (float)(*v105 * *((float *)v55 + 3)) + (float)(*(v105 - 2) * *((float *)v55 - 3));
              v113 = (float)(*(v105 - 1) * *((float *)v55 - 1)) + *((float *)v55 - 7);
              v114 = v105[1];
              v115 = (float)(*(v105 - 1) * *(float *)v55) + *((float *)v55 - 6);
              *(float *)((char *)&dword_140404A6C[284677615] + v110) = v109;
              v116 = v111 + v113;
              v117 = v112 + v115;
              v118 = v105[2];
              v105 += 6;
              *(float *)((char *)&dword_140404A6C[284677616] + v110) = v116;
              *(float *)((char *)&dword_140404A6C[284677617] + v110) = v117;
              v119 = (float)((float)(v114 * *((float *)v55 - 5)) + (float)(v108 * *((float *)v55 + 1)))
                   + (float)((float)(v118 * *((float *)v55 - 2)) + *((float *)v55 - 8));
              v120 = (float)((float)(v114 * *((float *)v55 - 4)) + (float)(v108 * *((float *)v55 + 2)))
                   + (float)((float)(v118 * *((float *)v55 - 1)) + *((float *)v55 - 7));
              v104 = (float)(v109 + v104) + v119;
              v121 = v103 + 68LL * (int)dword_140404A6C[284677614];
              v122 = (float)((float)(v108 * *((float *)v55 + 3)) + (float)(v114 * *((float *)v55 - 3)))
                   + (float)((float)(v118 * *(float *)v55) + *((float *)v55 - 6));
              v103 += 24;
              v106 = (float)(v116 + v106) + v120;
              *(float *)((char *)&dword_140404A6C[284677618] + v121) = v119;
              *(float *)((char *)&dword_140404A6C[284677619] + v121) = v120;
              v107 = (float)(v117 + v107) + v122;
              *(float *)((char *)&dword_140404A6C[284677620] + v121) = v122;
              if ( v103 >= 48 )
                break;
              v102 = dword_140404A6C[284677614];
            }
            v56 = *(float *)&v210;
            *(float *)&dword_140404A6C[17 * dword_140404A6C[284677614] + 284677630] = fsqrt(
                                                                                        (float)((float)((float)(v54 - (float)(v106 * 0.25)) * (float)(v54 - (float)(v106 * 0.25)))
                                                                                              + (float)((float)(*(float *)&v210 - (float)(v104 * 0.25)) * (float)(*(float *)&v210 - (float)(v104 * 0.25))))
                                                                                      + (float)((float)(v52 - (float)(v107 * 0.25))
                                                                                              * (float)(v52 - (float)(v107 * 0.25))));
            v123 = 17LL * (int)dword_140404A6C[284677614];
            v125 = *(float *)&dword_140404A6C[v123 + 284677615];
            v126 = *(float *)&dword_140404A6C[v123 + 284677616];
            v127 = *(float *)&dword_140404A6C[v123 + 284677617];
            v128 = *(float *)&dword_140404A6C[v123 + 284677621] - v125;
            v129 = *(float *)&dword_140404A6C[v123 + 284677622] - v126;
            v130 = *(float *)&dword_140404A6C[v123 + 284677618] - v125;
            v131 = *(float *)&dword_140404A6C[v123 + 284677619] - v126;
            v132 = *(float *)&dword_140404A6C[v123 + 284677620] - v127;
            v124 = (float *)&dword_140404A6C[v123 + 284677627];
            v133 = *(float *)&dword_140404A6C[v123 + 284677623] - v127;
            *v124 = (float)(v129 * v132) - (float)(v133 * v131);
            v124[1] = (float)(v133 * v130) - (float)(v128 * v132);
            v124[2] = (float)(v128 * v131) - (float)(v129 * v130);
            sub_14007A240((__int64)v124, v124);
            v0 = 0;
            v134 = 17LL * (int)dword_140404A6C[284677614];
            dword_140404A6C[v134 + 284677631] = (float)((float)((float)((float)(v54
                                                                              - *(float *)&dword_140404A6C[v134 + 284677616])
                                                                      * *(float *)&dword_140404A6C[v134 + 284677628])
                                                              + (float)((float)(v56
                                                                              - *(float *)&dword_140404A6C[v134 + 284677615])
                                                                      * *(float *)&dword_140404A6C[v134 + 284677627]))
                                                      + (float)((float)(v52
                                                                      - *(float *)&dword_140404A6C[v134 + 284677617])
                                                              * *(float *)&dword_140404A6C[v134 + 284677629])) >= 0.0;
            v102 = ++dword_140404A6C[284677614];
          }
          ++v100;
          v101 += 13;
          --v99;
        }
        while ( v99 );
        v51 = v211;
      }
      else
      {
        v52 = *(float *)&dword_140404A6C[284024504];
        v54 = *(float *)&dword_140404A6C[284024503];
        v56 = *(float *)&dword_140404A6C[284024502];
      }
      v57 = v212;
      v53 = v213;
    }
    v53 += 77;
    v51 += 5210;
    v55 += 77;
    --v57;
    v213 = v53;
    v212 = v57;
    v211 = v51;
  }
  while ( v57 );
  v135 = 0;
  sr_scene_draw_textures[0] = dword_140404A6C[283830699];
  sr_scene_draw_textures[1] = dword_140404A6C[283830699];
  if ( (int)dword_140404A6C[438881242] > 0 )
  {
    v136 = &dword_140404A6C[437914581];
    do
    {
      sub_140092140(
        dword_140404A6C[*v136 + 283827542],
        &sr_scene_draw_textures[0],
        0,
        &dword_140404A6C[23 * v135 + 437914586],
        &dword_140404A6C[23 * v135 + 437914595]);
      ++v135;
      v136 += 23;
    }
    while ( v135 < (int)dword_140404A6C[438881242] );
  }
  v137 = &dword_140404A6C[278845903];
  v138 = &dword_140404A6C[285083825];
  v139 = &dword_140404A6C[285083827];
  v140 = dword_140404A6C[283830723];
  v141 = 1024;
  v142 = 0x200800002000LL;
  do
  {
    if ( *(v137 - 10) )
    {
      v143 = (int)*v137;
      if ( ((_DWORD)v143 == -1
         || dword_140404A6C[1760 * v143 + 278845902] == -1
         || (int)dword_140404A6C[1760 * v143 + 278845904] < 3)
        && (*(v137 - 1) == -1 || (int)v137[1] < 3) )
      {
        v144 = (int)*(v137 - 5);
        sr_scene_draw_textures[0] = dword_140404A6C[283830690];
        sr_scene_draw_textures[1] = dword_140404A6C[283830690];
        if ( (unsigned int)(v144 - 1) <= 0xB )
        {
          sr_scene_draw_textures[0] = v140;
          sr_scene_draw_textures[1] = v140;
        }
        if ( !(_DWORD)v144 )
        {
          sr_scene_draw_textures[0] = v140;
          sr_scene_draw_textures[1] = v140;
          goto LABEL_121;
        }
        if ( (_DWORD)v144 == 6 )
        {
          v145 = dword_140404A6C[283830699];
        }
        else
        {
          if ( (unsigned int)v144 <= 0x2D && _bittest64(&v142, v144) )
          {
            sr_scene_draw_textures[0] = dword_140404A6C[v144 + 283830981];
            sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
          }
          if ( (_DWORD)v144 == 18 )
          {
            v146 = 0;
            v147 = v137[159];
            v148 = *((float *)v139 + 4);
            LODWORD(v149) = v139[5];
            LODWORD(v150) = v139[6];
            v151 = v139[2];
            LODWORD((*(__int128 *)(void *)sr_scene_draw_rotation)) = v139[1];
            DWORD2((*(__int128 *)(void *)sr_scene_draw_rotation)) = v139[3];
            DWORD2((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = v139[7];
            v152 = *((float *)v139 + 9);
            *((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) = v148;
            *(_QWORD *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = __PAIR64__(LODWORD(v150), LODWORD(v149));
            (*(float *)&sr_scene_draw_rotation[8]) = v152;
            DWORD1((*(__int128 *)(void *)sr_scene_draw_rotation)) = v151;
            HIDWORD((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = v139[8];
            v153 = (float)((float)(v148 * (float)v147) * 0.0068359375) + *((float *)v139 - 2);
            v154 = (float)((float)(v149 * (float)v147) * 0.0068359375) + *((float *)v139 - 1);
            v155 = (float)((float)(v150 * (float)v147) * 0.0068359375) + *(float *)v139;
            (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(LODWORD(v154), LODWORD(v153));
            (*(float *)&sr_scene_draw_position[2]) = v155;
            if ( v147 < 0 )
              goto LABEL_125;
            do
            {
              v156 = ((unsigned __int64)v137[160] >> (3 * (unsigned __int8)v146)) & 7;
              v205 = (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation);
              sr_scene_draw_textures[0] = dword_140404A6C[v156 + 283830706];
              sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
              sub_140092140(
                dword_140404A6C[*(v137 - 5) + 283826966],
                &sr_scene_draw_textures[0],
                1u,
                (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position),
                (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
              v157 = *(v137 - 1) == -1;
              v153 = v153 - (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) * 0.013671875);
              v154 = v154 - (float)(*(float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) * 0.013671875);
              (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(LODWORD(v154), LODWORD(v153));
              v158 = v153;
              v159 = v154;
              v155 = v155 - (float)(*((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 1) * 0.013671875);
              *(float *)&v210 = v155;
              (*(float *)&sr_scene_draw_position[2]) = v155;
              if ( !v157 )
              {
                v160 = v137[1];
                if ( v160 )
                  v161 = v160 == 1 ? 0.03125 : 0.0;
                else
                  v161 = -0.03125;
                v162 = v161 * 1.570796326795;
                sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, v162);
                if ( v146 == v137[158] - 1 )
                {
                  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, v162);
                  v153 = (float)(*(float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) * v161) + v153;
                  v154 = (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) * v161) + v154;
                  v155 = (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 2) * v161) + *(float *)&v210;
                  *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = (float)(*(float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) * v161) + v158;
                  *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) * v161) + v159;
                  (*(float *)&sr_scene_draw_position[2]) = v155;
                }
              }
              ++v146;
            }
            while ( v146 <= (int)v137[159] );
            goto LABEL_124;
          }
          if ( (unsigned int)(v144 - 37) <= 1 || (_DWORD)v144 == 44 )
          {
            sr_scene_draw_textures[0] = dword_140404A6C[283830696];
            sr_scene_draw_textures[1] = dword_140404A6C[283830696];
          }
          if ( (_DWORD)v144 == 43 )
          {
            sr_scene_draw_textures[0] = dword_140404A6C[283830696];
            sr_scene_draw_textures[1] = dword_140404A6C[283830696];
            goto LABEL_121;
          }
          if ( (unsigned int)(v144 - 39) <= 1 )
          {
            v163 = (int)v137[197];
            if ( dword_140404A6C[3 * v163 + 278520517] )
              v164 = dword_140404A6C[v163 + 283830725];
            else
              v164 = dword_140404A6C[283830980];
            sr_scene_draw_textures[1] = v164;
            sr_scene_draw_textures[0] = v164;
          }
          if ( (_DWORD)v144 == 17 )
          {
            v145 = dword_140404A6C[283830711];
          }
          else
          {
            if ( (unsigned int)(v144 - 19) <= 5 )
            {
              sr_scene_draw_textures[0] = v144 + dword_140404A6C[283830690] - 19;
              sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
            }
            if ( (_DWORD)v144 == 14 )
            {
              v145 = dword_140404A6C[283827814];
            }
            else if ( (_DWORD)v144 == 30 )
            {
              v145 = dword_140404A6C[283830720];
            }
            else
            {
              if ( (((_DWORD)v144 - 25) & 0xFFFFFFF7) == 0 )
              {
                sr_scene_draw_textures[0] = dword_140404A6C[283830696];
                sr_scene_draw_textures[1] = dword_140404A6C[283830696];
              }
              switch ( (_DWORD)v144 )
              {
                case 0x1A:
                  v145 = dword_140404A6C[283830697];
                  break;
                case 0x1C:
                  sr_scene_draw_textures[0] = dword_140404A6C[283830690];
                  sr_scene_draw_textures[1] = dword_140404A6C[283830690];
                  goto LABEL_121;
                case 0x1B:
                  sr_scene_draw_textures[0] = dword_140404A6C[283830690];
                  sr_scene_draw_textures[1] = dword_140404A6C[283830690];
                  goto LABEL_121;
                case 0x22:
                case 0x1D:
                  v165 = (int)v137[197];
                  if ( dword_140404A6C[3 * v165 + 278520517] )
                    v145 = dword_140404A6C[v165 + 283830725];
                  else
                    v145 = dword_140404A6C[283830719];
                  break;
                default:
LABEL_121:
                  sub_140092140(dword_140404A6C[v144 + 283826966], &sr_scene_draw_textures[0], 1u, v138, v138 + 3);
                  if ( *(v137 - 5) == 25 && v137[148] == 1 )
                    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554703] = 1046478848;
LABEL_124:
                  v140 = dword_140404A6C[283830723];
                  v142 = 0x200800002000LL;
                  goto LABEL_125;
              }
            }
          }
        }
        sr_scene_draw_textures[0] = v145;
        sr_scene_draw_textures[1] = v145;
        goto LABEL_121;
      }
    }
LABEL_125:
    v138 += 13;
    v139 += 13;
    v137 += 1760;
    --v141;
  }
  while ( v141 );
  (*(uint64_t *)(void *)sr_scene_draw_position) = 0x41C0000044890000LL;
  (*(float *)&sr_scene_draw_position[2]) = 1056.0;
  (*(__int128 *)(void *)sr_scene_draw_rotation) = xmmword_140278D30;
  (*(float *)&sr_scene_draw_rotation[8]) = 1.0;
  (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = xmmword_140278D30;
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, sr_export_float_lane_container(1070141403));
  sr_scene_draw_textures[0] = dword_140404A6C[283830723];
  sr_scene_draw_textures[1] = dword_140404A6C[283830723];
  LODWORD(v210) = 0;
  if ( (int)dword_140404A6C[70074733] > 0 )
  {
    v166 = &dword_140404A6C[70074734];
    v211 = &dword_140404A6C[70074734];
    do
    {
      v167 = 0;
      v212 = 0;
      do
      {
        v168 = (int)dword_140404A6C[6930 * (int)*v166 + 83200503 + v167];
        if ( (int)v168 >= 0 )
        {
          v169 = 8969 * v168;
          v170 = 0;
          LODWORD(v213) = 0;
          if ( (int)dword_140404A6C[8969 * v168 + 73993587] > 0 )
          {
            v171 = (float *)&dword_140404A6C[v169 + 73993594];
            do
            {
              v172 = 0;
              v173 = 948LL * *((int *)v171 - 6);
              if ( (int)dword_140404A6C[v173 + 272299416] > 0 )
              {
                v174 = 1;
                v175 = &dword_140404A6C[v173 + 272299439];
                do
                {
                  if ( (v174 & *(_DWORD *)(v171 - 4)) == 0 )
                  {
                    v176 = (int)*(v175 - 6);
                    sr_scene_draw_textures[0] = dword_140404A6C[v176 + 283830981];
                    sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
                    if ( (unsigned int)(v176 - 37) <= 1 || (_DWORD)v176 == 44 )
                    {
                      sr_scene_draw_textures[0] = dword_140404A6C[283830696];
                      sr_scene_draw_textures[1] = dword_140404A6C[283830696];
                    }
                    if ( (_DWORD)v176 == 43 )
                    {
                      sr_scene_draw_textures[0] = dword_140404A6C[283830696];
                      sr_scene_draw_textures[1] = dword_140404A6C[283830696];
                    }
                    else if ( (unsigned int)(v176 - 39) <= 1 )
                    {
                      sr_scene_draw_textures[0] = dword_140404A6C[283830980];
                      sr_scene_draw_textures[1] = dword_140404A6C[283830980];
                    }
                    (*(float *)&sr_scene_draw_rotation[8]) = 1.0;
                    (*(__int128 *)(void *)sr_scene_draw_rotation) = xmmword_140278D30;
                    (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = xmmword_140278D30;
                    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&dword_1402F6188, (float)*((int *)v171 - 3) * 1.570796326795);
                    v177 = *((float *)v175 - 5);
                    v178 = *((float *)v175 - 4);
                    v179 = *((float *)v175 - 3) * *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 3);
                    v180 = (float)((float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) * v177) + *(v171 - 1))
                         + (float)(*(float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) * v178);
                    v181 = *((float *)v175 - 3) * (*(float *)&sr_scene_draw_rotation[8]);
                    *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = (float)((float)((float)(*(float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) * v177) + *(v171 - 2))
                                            + (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) * v178))
                                    + (float)(*((float *)v175 - 3) * *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 2));
                    v182 = v180 + v179;
                    v183 = (float)*((int *)v171 - 3);
                    v184 = (float)((float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 2) * v177) + *v171)
                         + (float)(*((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 1) * v178);
                    *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = v182;
                    (*(__int128 *)(void *)sr_scene_draw_rotation) = *(_OWORD *)(v175 - 2);
                    (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = *(_OWORD *)(v175 + 2);
                    (*(float *)&sr_scene_draw_rotation[8]) = *((float *)v175 + 6);
                    (*(float *)&sr_scene_draw_position[2]) = v184 + v181;
                    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&dword_1402F6188, v183 * 1.570796326795);
                    sub_140092140(
                      dword_140404A6C[*(v175 - 6) + 283826966],
                      &sr_scene_draw_textures[0],
                      1u,
                      (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position),
                      (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
                  }
                  ++v172;
                  v174 = __ROL4__(v174, 1);
                  v175 += 29;
                }
                while ( v172 < (int)dword_140404A6C[v173 + 272299416] );
                v170 = (int)v213;
              }
              ++v170;
              v171 += 7;
              LODWORD(v213) = v170;
            }
            while ( v170 < (int)dword_140404A6C[v169 + 73993587] );
            v167 = v212;
          }
          v185 = 0;
          if ( (int)dword_140404A6C[v169 + 73991666] > 0 )
          {
            v186 = &dword_140404A6C[v169 + 73991669];
            while ( 1 )
            {
              v187 = (int)*(v186 - 2);
              sr_scene_draw_textures[0] = dword_140404A6C[283830690];
              sr_scene_draw_textures[1] = dword_140404A6C[283830690];
              if ( (_DWORD)v187 == 1 )
              {
                sr_scene_draw_textures[0] = dword_140404A6C[283830658];
                sr_scene_draw_textures[1] = dword_140404A6C[283830658];
                v188 = dword_140404A6C[34 * *(v186 - 1) + 225391250 + *v186];
                if ( v188 == 1 )
                {
                  v189 = dword_140404A6C[283830659];
LABEL_154:
                  sr_scene_draw_textures[1] = v189;
                  sr_scene_draw_textures[0] = v189;
                  goto LABEL_155;
                }
                if ( v188 == 2 )
                {
                  v189 = dword_140404A6C[283830660];
                  goto LABEL_154;
                }
              }
LABEL_155:
              v190 = v169 * 4 + 60LL * v185;
              v191 = (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v190 + 300180036);
              v192 = (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v190 + 300180048);
              sub_140092140(dword_140404A6C[v187 + 283827606], &sr_scene_draw_textures[0], 1u, v191, v192);
              if ( *(v186 - 2) == 1 )
              {
                v193 = 34LL * (int)*(v186 - 1);
                v194 = dword_140404A6C[v193 + 225391236 + (((unsigned __int8)*v186 + 1) & 3)];
                if ( v194 == -1 )
                  v194 = dword_140404A6C[v193 + 225391236 + (((unsigned __int8)*v186 - 1) & 3)];
                v205 = v192;
                v195 = 0;
                if ( v194 != -1 )
                  v195 = v194;
                v196 = dword_140404A6C[396 * v195 + 225426055];
                if ( (unsigned int)v196 > 0x10 )
                  v196 = 0;
                sr_scene_draw_textures[0] = dword_140404A6C[v196 + 283831239];
                sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
                sub_140092140(dword_140404A6C[283827610], &sr_scene_draw_textures[0], 1u, v191, v205);
              }
              ++v185;
              v186 += 15;
              if ( v185 >= (int)dword_140404A6C[v169 + 73991666] )
              {
                v167 = v212;
                break;
              }
            }
          }
          v166 = v211;
        }
        v212 = ++v167;
      }
      while ( v167 < 4 );
      v211 = ++v166;
      LODWORD(v210) = v210 + 1;
    }
    while ( (int)v210 < (int)dword_140404A6C[70074733] );
  }
  v197 = dword_140404A6C[284550610];
  if ( (int)dword_140404A6C[284550610] > 0 )
  {
    v198 = &dword_140404A6C[437192782];
    v199 = dword_140404A6C[284550610];
    v200 = &dword_140404A6C[284554711];
    do
    {
      v201 = *v200;
      v200 += 30;
      *v198++ = v201;
      --v199;
    }
    while ( v199 );
  }
  dword_140404A6C[436668493] = v197;
  sub_14007D710();
  if ( v197 > 0 )
  {
    v202 = 0;
    do
    {
      ++v0;
      dword_140404A6C[v202 + 284550611] = dword_140404A6C[v202 + 436668494];
      ++v202;
    }
    while ( v0 < (int)dword_140404A6C[284550610] );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v204
#undef v205
#undef v210
#undef v211
#undef v212
#undef v213
#undef v214
#undef v215
#undef v219

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBC404: using guessed type unsigned int;
// 183EBF050: using guessed type unsigned int;
// 183EBF074: using guessed type unsigned int;
// 183EBF078: using guessed type unsigned int;
// 183EBF07C: using guessed type unsigned int;
// 183EBF0F0: using guessed type unsigned int;
// 183EBF0F4: using guessed type unsigned int;
// 183EBF10C: using guessed type unsigned int;
// 183EBF110: using guessed type unsigned int;
// 183EBF118: using guessed type unsigned int;
// 183EBF148: using guessed type unsigned int;
// 183EBF168: using guessed type unsigned int;
// 183EBF16C: using guessed type unsigned int;
// 183EBF174: using guessed type unsigned int;
// 183EBF178: using guessed type unsigned int;
// 183EBF17C: using guessed type unsigned int;
// 183EBF57C: using guessed type unsigned int;
// 183F7C544: using guessed type unsigned int;
// 183F7C548: using guessed type unsigned int;
// 183F7C54C: using guessed type unsigned int;
// 18417E1B4: using guessed type unsigned int;
// 1841FA224: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;

//----- (0000000140022DF0) ----------------------------------------------------
double            sub_140022DF0(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r9
  unsigned int v12; // edx
  int v13; // eax
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rdi
  unsigned int v17; // xmm0_4
  float v18; // xmm1_4
  unsigned int v19; // xmm0_4
  float v20; // xmm1_4
  __int64 v21; // rbx
  __int64 v22; // r9
  __int64 v23; // rcx
  float v24; // xmm13_4
  float v25; // xmm14_4
  float v26; // xmm15_4
  unsigned int v27; // eax
  __int64 v28; // rdx
  float v29; // xmm10_4
  float v30; // xmm11_4
  float v31; // xmm12_4
  float v32; // xmm4_4
  float v33; // xmm10_4
  float v34; // xmm11_4
  float v35; // xmm12_4
  __int64 v36; // r11
  __int64 v37; // rdx
  __int64 v38; // rcx
  float v39; // xmm6_4
  float v40; // xmm2_4
  float v41; // xmm9_4
  float v42; // xmm7_4
  float v43; // xmm3_4
  float v44; // xmm0_4
  float v45; // xmm12_4
  unsigned int v46; // xmm14_4
  unsigned int v47; // xmm15_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm7_4
  float v51; // xmm10_4
  float v52; // xmm9_4
  float v53; // xmm5_4
  float v54; // xmm6_4
  __int64 v55; // rax
  float v56; // xmm0_4
  float v57; // xmm11_4
  float v58; // xmm8_4
  float v59; // xmm4_4
  float v60; // xmm0_4
  float v61; // xmm11_4
  float v62; // xmm7_4
  float v63; // xmm10_4
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rcx
  double result; // xmm0_8
  unsigned int v81; // ebp
  int v82; // ebx
  int v83; // ecx
  unsigned int v84; // ebx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140022DF0[16];
#define v86 (*(__int64 (*))(void *)(sr_frame_140022DF0 + 0)) /* [rsp+120h] */
#define v87 (*(__int64 (*))(void *)(sr_frame_140022DF0 + 8)) /* [rsp+128h] */

  v2 = 0;
  v3 = 7166LL * a1;
  v4 = a1;
  v5 = a2;
  v6 = dword_140404A6C[v3 + 280658445];
  v7 = v6 == 1;
  if ( v6 == 2 )
  {
    v7 = 2;
  }
  else if ( v6 == 3 )
  {
    v7 = 3;
  }
  v8 = dword_140404A6C[v3 + 280658439];
  v9 = v7 + 8;
  if ( v8 != 1 )
    v9 = v7;
  v10 = (unsigned int)v9;
  v11 = (int)dword_140404A6C[v9 + 283827638];
  v12 = dword_140404A6C[908 * v11 + 178527465];
  if ( (int)dword_140404A6C[v3 + 280658447] > 0 )
    v12 += dword_140404A6C[908 * dword_140404A6C[2 * v8 + 16 + 283827638] + 178527465];
  v13 = dword_140404A6C[v3 + 280658449];
  if ( v13 > 0 )
    v12 += dword_140404A6C[908 * dword_140404A6C[v13 + 2 * v8 + 283827657] + 178527465];
  v14 = 908 * v5;
  v86 = v5;
  v87 = 908 * v5;
  if ( dword_140404A6C[908 * v5 + 178527465] != v12 )
  {
    dword_140404A6C[v14 + 178527465] = v12;
    dword_140404A6C[v14 + 178527462] = 8;
    dword_140404A6C[v14 + 178527475] = dword_140404A6C[908 * v11 + 178527465];
    dword_140404A6C[v14 + 178527484] = v11;
  }
  v15 = 344LL * a1;
  v16 = 240LL * a1;
  *(float *)&v17 = *(float *)&dword_140404A6C[v15 + 284956344]
                 - (float)(*(float *)&dword_140404A6C[v15 + 284956350] * 0.125);
  v18 = *(float *)&dword_140404A6C[v15 + 284956351] * 0.125;
  dword_140404A6C[v16 + 23875734] = dword_140404A6C[v15 + 284956345];
  dword_140404A6C[v16 + 23875735] = dword_140404A6C[v15 + 284956346];
  dword_140404A6C[v16 + 23875733] = v17;
  *(float *)&v19 = *(float *)&dword_140404A6C[v16 + 23875734] - v18;
  v20 = *(float *)&dword_140404A6C[v15 + 284956352] * 0.125;
  dword_140404A6C[v16 + 23875734] = v19;
  *(float *)&dword_140404A6C[v16 + 23875735] = *(float *)&dword_140404A6C[v16 + 23875735] - v20;
  do
  {
    v21 = 25 * v2;
    v22 = v15 * 4 + 84 * v2;
    v23 = v16 * 4 + 36 * v2;
    v24 = *(float *)((char *)&dword_140404A6C[284956350] + v22);
    v25 = *(float *)((char *)&dword_140404A6C[284956351] + v22);
    v26 = *(float *)((char *)&dword_140404A6C[284956352] + v22);
    *(unsigned int *)((char *)&dword_140404A6C[23875781] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956347]
                                                                                  + v22);
    *(unsigned int *)((char *)&dword_140404A6C[23875782] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956348]
                                                                                  + v22);
    *(unsigned int *)((char *)&dword_140404A6C[23875783] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956349]
                                                                                  + v22);
    v27 = *(unsigned int *)((char *)&dword_140404A6C[284956353] + v22);
    *(float *)((char *)&dword_140404A6C[23875784] + v23) = v24;
    *(float *)((char *)&dword_140404A6C[23875785] + v23) = v25;
    *(float *)((char *)&dword_140404A6C[23875786] + v23) = v26;
    *(unsigned int *)((char *)&dword_140404A6C[23875787] + v23) = v27;
    *(unsigned int *)((char *)&dword_140404A6C[23875788] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956354]
                                                                                  + v22);
    *(unsigned int *)((char *)&dword_140404A6C[23875789] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956355]
                                                                                  + v22);
    if ( !v2 )
      goto LABEL_38;
    v28 = 786828 * v10 + 24 * v2;
    v29 = *(float *)((char *)&dword_140404A6C[161054683] + v28);
    v30 = *(float *)((char *)&dword_140404A6C[161054684] + v28);
    v31 = *(float *)((char *)&dword_140404A6C[161054685] + v28);
    if ( (unsigned __int64)(v2 - 1) <= 1 )
      v30 = 0.25;
    if ( v2 == 10 || v2 == 13 )
      v30 = 0.125;
    if ( (unsigned __int64)(v2 - 5) <= 1 || (unsigned __int64)(v2 - 8) <= 1 )
    {
      v32 = fsqrt((float)((float)(v30 * v30) + (float)(v29 * v29)) + (float)(v31 * v31));
      if ( v32 == 0.0 )
      {
        v33 = 0.0;
        v34 = 0.0;
        v35 = 0.0;
      }
      else
      {
        v33 = v29 * (float)(1.0 / v32);
        v34 = v30 * (float)(1.0 / v32);
        v35 = v31 * (float)(1.0 / v32);
      }
      v29 = v33 * 0.328125;
      v30 = v34 * 0.328125;
      v31 = v35 * 0.328125;
    }
    if ( v2 == 4 )
    {
      v29 = -0.1875;
    }
    else
    {
      if ( v2 != 7 )
        goto LABEL_31;
      v29 = 0.1875;
    }
    v30 = 0.125;
LABEL_31:
    v36 = (int)dword_140404A6C[v21 + 282486045];
    v37 = v16 * 4 + 36 * v36;
    v38 = 3 * (v2 + 80 * v4);
    v39 = *(float *)((char *)&dword_140404A6C[23875785] + v37);
    v40 = (float)(v31 * *(float *)((char *)&dword_140404A6C[23875787] + v37))
        + (float)(v29 * *(float *)((char *)&dword_140404A6C[23875781] + v37));
    v41 = *(float *)((char *)&dword_140404A6C[23875786] + v37);
    v42 = *(float *)((char *)&dword_140404A6C[23875783] + v37);
    v43 = v31 * *(float *)((char *)&dword_140404A6C[23875788] + v37);
    v44 = v29 * *(float *)((char *)&dword_140404A6C[23875782] + v37);
    v45 = v31 * *(float *)((char *)&dword_140404A6C[23875789] + v37);
    *(float *)&dword_140404A6C[v38 + 23875733] = v40
                                               + (float)((float)(v30
                                                               * *(float *)((char *)&dword_140404A6C[23875784] + v37))
                                                       + *(float *)&dword_140404A6C[240 * v4 + 23875733 + 3 * v36]);
    *(float *)&dword_140404A6C[v38 + 23875734] = (float)(v43 + v44)
                                               + (float)((float)(v30 * v39)
                                                       + *(float *)&dword_140404A6C[240 * v4 + 23875734 + 3 * v36]);
    *(float *)&dword_140404A6C[v38 + 23875735] = (float)((float)(v29 * v42) + v45)
                                               + (float)((float)(v30 * v41)
                                                       + *(float *)&dword_140404A6C[240 * v4 + 23875735 + 3 * v36]);
    if ( v2 == 4 || v2 == 7 )
    {
      *(float *)&v46 = (float)(v25 * 0.1640625) + *(float *)((char *)&dword_140404A6C[284956345] + v22);
      *(float *)&v47 = (float)(v26 * 0.1640625) + *(float *)((char *)&dword_140404A6C[284956346] + v22);
      *(float *)&dword_140404A6C[240 * v4 + 23875733 + 3 * v2] = (float)(v24 * 0.1640625)
                                                               + *(float *)((char *)&dword_140404A6C[284956344] + v22);
      dword_140404A6C[240 * v4 + 23875734 + 3 * v2] = v46;
      dword_140404A6C[240 * v4 + 23875735 + 3 * v2] = v47;
    }
    v48 = *(float *)&dword_140404A6C[25 * v36 + 282486050] - *(float *)&dword_140404A6C[25 * v36 + 282486047];
    v49 = *(float *)&dword_140404A6C[25 * v36 + 282486051] - *(float *)&dword_140404A6C[25 * v36 + 282486048];
    if ( v2 == 12 || v2 == 15 )
    {
      v49 = v49 - 0.0625;
      v48 = v48 - 0.09375;
    }
    v50 = *(float *)((char *)&dword_140404A6C[23875786] + v37);
    v51 = *(float *)((char *)&dword_140404A6C[23875789] + v37);
    v52 = *(float *)&dword_140404A6C[v21 + 282486050] - v48;
    v53 = *(float *)&dword_140404A6C[v21 + 282486049]
        - (float)(*(float *)&dword_140404A6C[25 * v36 + 282486049] - *(float *)&dword_140404A6C[25 * v36 + 282486046]);
    v54 = *(float *)&dword_140404A6C[v21 + 282486051] - v49;
    v55 = v3 * 4 + 312 * v2;
    v56 = v52 * *(float *)((char *)&dword_140404A6C[23875785] + v37);
    v57 = (float)(*(float *)((char *)&dword_140404A6C[23875788] + v37) * v54)
        + (float)(*(float *)((char *)&dword_140404A6C[23875782] + v37) * v53);
    v58 = (float)((float)(v54 * *(float *)((char *)&dword_140404A6C[23875787] + v37))
                + (float)(v53 * *(float *)((char *)&dword_140404A6C[23875781] + v37)))
        + (float)((float)(v52 * *(float *)((char *)&dword_140404A6C[23875784] + v37))
                + *(float *)&dword_140404A6C[240 * v4 + 23875733 + 3 * v36]);
    v59 = *(float *)((char *)&dword_140404A6C[23875783] + v37) * v53;
    *(float *)&dword_140404A6C[240 * v4 + 23875733 + 3 * v2] = v58;
    v60 = v56 + *(float *)&dword_140404A6C[240 * v4 + 23875734 + 3 * v36];
    *(float *)((char *)&dword_140404A6C[280651512] + v55) = v58;
    v61 = v57 + v60;
    *(float *)&dword_140404A6C[240 * v4 + 23875734 + 3 * v2] = v61;
    v62 = (float)(v50 * v52) + *(float *)&dword_140404A6C[240 * v4 + 23875735 + 3 * v36];
    *(float *)((char *)&dword_140404A6C[280651513] + v55) = v61;
    v63 = (float)((float)(v51 * v54) + v59) + v62;
    *(float *)&dword_140404A6C[240 * v4 + 23875735 + 3 * v2] = v63;
    *(float *)((char *)&dword_140404A6C[280651514] + v55) = v63;
LABEL_38:
    ++v2;
  }
  while ( v2 < 16 );
  v64 = 240 * v4;
  dword_140404A6C[v64 + 23875685] = dword_140404A6C[196707 * v10 + 161054680];
  dword_140404A6C[v64 + 23875686] = dword_140404A6C[196707 * v10 + 161054681];
  dword_140404A6C[v64 + 23875687] = dword_140404A6C[196707 * v10 + 161054682];
  v65 = 240 * v4;
  dword_140404A6C[v65 + 23875688] = dword_140404A6C[196707 * v10 + 161054686];
  dword_140404A6C[v65 + 23875689] = dword_140404A6C[196707 * v10 + 161054687];
  dword_140404A6C[v65 + 23875690] = dword_140404A6C[196707 * v10 + 161054688];
  v66 = 240 * v4;
  dword_140404A6C[v66 + 23875691] = dword_140404A6C[196707 * v10 + 161054692];
  dword_140404A6C[v66 + 23875692] = dword_140404A6C[196707 * v10 + 161054693];
  dword_140404A6C[v66 + 23875693] = dword_140404A6C[196707 * v10 + 161054694];
  v67 = 240 * v4;
  dword_140404A6C[v67 + 23875694] = dword_140404A6C[196707 * v10 + 161054698];
  dword_140404A6C[v67 + 23875695] = dword_140404A6C[196707 * v10 + 161054699];
  dword_140404A6C[v67 + 23875696] = dword_140404A6C[196707 * v10 + 161054700];
  v68 = 240 * v4;
  dword_140404A6C[v68 + 23875697] = dword_140404A6C[196707 * v10 + 161054704];
  dword_140404A6C[v68 + 23875698] = dword_140404A6C[196707 * v10 + 161054705];
  dword_140404A6C[v68 + 23875699] = dword_140404A6C[196707 * v10 + 161054706];
  v69 = 240 * v4;
  dword_140404A6C[v69 + 23875700] = dword_140404A6C[196707 * v10 + 161054710];
  dword_140404A6C[v69 + 23875701] = dword_140404A6C[196707 * v10 + 161054711];
  dword_140404A6C[v69 + 23875702] = dword_140404A6C[196707 * v10 + 161054712];
  v70 = 240 * v4;
  dword_140404A6C[v70 + 23875703] = dword_140404A6C[196707 * v10 + 161054716];
  dword_140404A6C[v70 + 23875704] = dword_140404A6C[196707 * v10 + 161054717];
  dword_140404A6C[v70 + 23875705] = dword_140404A6C[196707 * v10 + 161054718];
  v71 = 240 * v4;
  dword_140404A6C[v71 + 23875706] = dword_140404A6C[196707 * v10 + 161054722];
  dword_140404A6C[v71 + 23875707] = dword_140404A6C[196707 * v10 + 161054723];
  dword_140404A6C[v71 + 23875708] = dword_140404A6C[196707 * v10 + 161054724];
  v72 = 240 * v4;
  dword_140404A6C[v72 + 23875709] = dword_140404A6C[196707 * v10 + 161054728];
  dword_140404A6C[v72 + 23875710] = dword_140404A6C[196707 * v10 + 161054729];
  dword_140404A6C[v72 + 23875711] = dword_140404A6C[196707 * v10 + 161054730];
  v73 = 240 * v4;
  dword_140404A6C[v73 + 23875712] = dword_140404A6C[196707 * v10 + 161054734];
  dword_140404A6C[v73 + 23875713] = dword_140404A6C[196707 * v10 + 161054735];
  dword_140404A6C[v73 + 23875714] = dword_140404A6C[196707 * v10 + 161054736];
  v74 = 240 * v4;
  dword_140404A6C[v74 + 23875715] = dword_140404A6C[196707 * v10 + 161054740];
  dword_140404A6C[v74 + 23875716] = dword_140404A6C[196707 * v10 + 161054741];
  dword_140404A6C[v74 + 23875717] = dword_140404A6C[196707 * v10 + 161054742];
  v75 = 240 * v4;
  dword_140404A6C[v75 + 23875718] = dword_140404A6C[196707 * v10 + 161054746];
  dword_140404A6C[v75 + 23875719] = dword_140404A6C[196707 * v10 + 161054747];
  dword_140404A6C[v75 + 23875720] = dword_140404A6C[196707 * v10 + 161054748];
  v76 = 240 * v4;
  dword_140404A6C[v76 + 23875721] = dword_140404A6C[196707 * v10 + 161054752];
  dword_140404A6C[v76 + 23875722] = dword_140404A6C[196707 * v10 + 161054753];
  dword_140404A6C[v76 + 23875723] = dword_140404A6C[196707 * v10 + 161054754];
  v77 = 240 * v4;
  dword_140404A6C[v77 + 23875724] = dword_140404A6C[196707 * v10 + 161054758];
  dword_140404A6C[v77 + 23875725] = dword_140404A6C[196707 * v10 + 161054759];
  dword_140404A6C[v77 + 23875726] = dword_140404A6C[196707 * v10 + 161054760];
  v78 = 240 * v4;
  dword_140404A6C[v78 + 23875727] = dword_140404A6C[196707 * v10 + 161054764];
  dword_140404A6C[v78 + 23875728] = dword_140404A6C[196707 * v10 + 161054765];
  dword_140404A6C[v78 + 23875729] = dword_140404A6C[196707 * v10 + 161054766];
  v79 = 240 * v4;
  dword_140404A6C[v79 + 23875730] = dword_140404A6C[196707 * v10 + 161054770];
  dword_140404A6C[v79 + 23875731] = dword_140404A6C[196707 * v10 + 161054771];
  dword_140404A6C[v79 + 23875732] = dword_140404A6C[196707 * v10 + 161054772];
  unk_140404530(35982, 0, dword_140404A6C[2 * dword_140404A6C[v86 + 283790166] + 283793813]);
  result = sub_14011E730(a1, v10);
  v81 = dword_140404A6C[908 * dword_140404A6C[v10 + 283827638] + 178527465];
  if ( (int)dword_140404A6C[v3 + 280658447] > 0 )
  {
    v82 = 2 * dword_140404A6C[v3 + 280658439] + 16;
    unk_140404528(
      35982,
      0,
      dword_140404A6C[2 * dword_140404A6C[v86 + 283790166] + 283793813],
      (int)(12 * v81 * dword_140404A6C[v87 + 178527462]),
      (int)(12 * dword_140404A6C[v87 + 178527462] * dword_140404A6C[908 * dword_140404A6C[v82 + 283827638] + 178527465]));
    result = sub_14011E730(a1, v82);
    v81 += dword_140404A6C[908 * dword_140404A6C[v82 + 283827638] + 178527465];
  }
  v83 = dword_140404A6C[v3 + 280658449];
  if ( v83 > 0 )
  {
    v84 = v83 + 2 * dword_140404A6C[v3 + 280658439];
    unk_140404528(
      35982,
      0,
      dword_140404A6C[2 * dword_140404A6C[v86 + 283790166] + 283793813],
      (int)(12 * v81 * dword_140404A6C[v87 + 178527462]),
      (int)(12 * dword_140404A6C[v87 + 178527462] * dword_140404A6C[908 * dword_140404A6C[v84 + 283827657] + 178527465]));
    return sub_14011E730(a1, v84 + 19);
  }
  return result;
}
#undef v86
#undef v87

// 140404528: using guessed type __int64 (__fastcall *unk_140404528)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140404530: using guessed type __int64 (__fastcall *unk_140404530)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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

//----- (0000000140023AC0) ----------------------------------------------------
__int64            sub_140023AC0(
        int a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9)
{
  unsigned int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // r10d
  unsigned int v12; // r15d
  int i; // esi
  int j; // edi
  int k; // ebx
  int v16; // ebx
  int v17; // edi
  int v18; // r9d
  signed int v19; // r11d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // r12d
  __int64 v24; // rax
  __int64 v25; // r13
  unsigned int v26; // edi
  unsigned int *v27; // rbx
  __int64 v28; // rsi
  int v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // r12
  unsigned int *v35; // rbx
  int v36; // ecx
  signed int v37; // esi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  signed int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // r8
  signed int v44; // r13d
  __int64 v45; // r11
  __int64 v46; // rcx
  unsigned int *v47; // r12
  int v48; // edi
  int v49; // eax
  int v50; // r10d
  unsigned int v51; // edi
  unsigned int v52; // r9d
  int v53; // edx
  int v54; // ecx
  unsigned int v55; // r11d
  unsigned int v56; // r11d
  __int64 v57; // r9
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  __int64 v60; // r9
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  int v63; // edi
  __int64 v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // rcx
  unsigned int *v67; // r15
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // r14
  unsigned int v72; // esi
  unsigned int v73; // edi
  unsigned int v74; // ebx
  __int64 v75; // r8
  __int64 v76; // rdx
  unsigned int v77; // r12d
  __int64 v78; // rcx
  __int64 v79; // rax
  unsigned int v80; // esi
  __int64 v81; // rcx
  unsigned int v82; // ebx
  __int64 v83; // r13
  unsigned int *v84; // rdi
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rbx
  int v88; // r12d
  unsigned int v89; // r9d
  __int64 v90; // rdi
  unsigned int v91; // edx
  unsigned int v92; // ecx
  unsigned int v93; // xmm0_4
  int v94; // eax
  float v95; // xmm8_4
  __m128i v96; // xmm10
  int v97; // ecx
  unsigned int v98; // xmm8_4
  float v99; // xmm7_4
  double v100; // xmm2_8
  float v101; // xmm11_4
  float v102; // xmm6_4
  float v103; // xmm12_4
  float v104; // xmm11_4
  float v105; // xmm3_4
  unsigned int v106; // xmm8_4
  float v107; // xmm4_4
  unsigned int v108; // xmm6_4
  float v109; // xmm5_4
  float v110; // xmm12_4
  float v111; // xmm10_4
  float v112; // xmm11_4
  unsigned int v113; // xmm7_4
  int v114; // esi
  __int64 v115; // rbx
  float v116; // xmm12_4
  unsigned int v117; // xmm0_4
  unsigned int v118; // xmm1_4
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rcx
  __int64 v122; // rcx
  float v123; // xmm1_4
  float v124; // xmm0_4
  double v125; // xmm2_8
  float v126; // xmm10_4
  float v127; // xmm6_4
  float v128; // xmm11_4
  float v129; // xmm7_4
  float v130; // xmm12_4
  float v131; // xmm8_4
  float v132; // xmm10_4
  float v133; // xmm11_4
  float v134; // xmm3_4
  float v135; // xmm12_4
  float v136; // xmm6_4
  float v137; // xmm4_4
  float v138; // xmm7_4
  float v139; // xmm5_4
  float v140; // xmm8_4
  float v141; // xmm10_4
  float v142; // xmm11_4
  float v143; // xmm12_4
  double v144; // xmm2_8
  unsigned int v145; // xmm0_4
  int v146; // ecx
  unsigned int v147; // xmm10_4
  int v148; // edx
  unsigned int v149; // xmm12_4
  unsigned int v150; // xmm15_4
  unsigned int v151; // xmm11_4
  unsigned int v152; // xmm14_4
  unsigned int v153; // xmm7_4
  float v154; // xmm3_4
  int *v155; // rax
  int v156; // r8d
  float v157; // xmm2_4
  float v158; // xmm7_4
  float v159; // xmm0_4
  float v160; // xmm1_4
  __int64 v161; // rdx
  unsigned int v162; // ecx
  __int64 v163; // r8
  unsigned int v164; // ecx
  __int64 v165; // r8
  unsigned int v166; // r13d
  unsigned int v167; // edi
  unsigned int v168; // esi
  unsigned int v169; // r15d
  unsigned int v170; // xmm6_4
  __int128 v171; // xmm0
  int v172; // r9d
  int v173; // r10d
  unsigned int v174; // r8d
  __int64 v175; // rcx
  unsigned int *v176; // rcx
  __int64 v177; // rcx
  float v178; // xmm2_4
  unsigned int v179; // xmm4_4
  float v180; // xmm1_4
  unsigned int v181; // edx
  int v182; // eax
  unsigned int v183; // r11d
  __int128 v184; // xmm0
  unsigned int v185; // xmm8_4
  __int64 v186; // rcx
  unsigned int *v187; // rcx
  int v188; // eax
  int v189; // r8d
  __int64 v190; // r11
  __int64 v191; // r12
  float v192; // xmm6_4
  float *v193; // rbx
  __int64 v194; // rdx
  __int64 v195; // r9
  __int64 v196; // rcx
  float v197; // xmm5_4
  float v198; // xmm2_4
  float v199; // xmm1_4
  float v200; // xmm6_4
  float v201; // xmm3_4
  __int64 v202; // r8
  __int64 v203; // r10
  __int64 v204; // r8
  float v205; // xmm2_4
  __int64 v206; // rcx
  float v207; // xmm5_4
  float v208; // xmm6_4
  float v209; // xmm4_4
  float v210; // xmm2_4
  float v211; // xmm6_4
  float v212; // xmm3_4
  __int64 v213; // rax
  __int64 v214; // rcx
  float v215; // xmm2_4
  float v216; // xmm5_4
  float v217; // xmm6_4
  float v218; // xmm1_4
  float v219; // xmm2_4
  float v220; // xmm4_4
  float v221; // xmm6_4
  float v222; // xmm3_4
  __int64 v223; // rax
  float v224; // xmm6_4
  __int64 v225; // rcx
  float v226; // xmm0_4
  float v227; // xmm5_4
  float v228; // xmm6_4
  float v229; // xmm4_4
  float v230; // xmm2_4
  float v231; // xmm6_4
  float v232; // xmm3_4
  __int64 v233; // rax
  float v234; // xmm6_4
  __int64 v235; // rcx
  __int64 v236; // rax
  float v237; // xmm5_4
  float v238; // xmm1_4
  float v239; // xmm2_4
  float v240; // xmm3_4
  float v241; // xmm6_4
  __int64 v242; // rax
  float *v243; // r8
  float v244; // xmm6_4
  float v245; // xmm4_4
  float v246; // xmm3_4
  __int64 v247; // rcx
  float v248; // xmm0_4
  __int64 v249; // rax
  float v250; // xmm5_4
  float v251; // xmm1_4
  float v252; // xmm2_4
  float v253; // xmm3_4
  float v254; // xmm6_4
  __int64 v255; // rax
  __int64 v256; // rcx
  float v257; // xmm2_4
  float v258; // xmm0_4
  unsigned int v259; // xmm5_4
  float v260; // xmm1_4
  float v261; // xmm2_4
  unsigned int v262; // xmm0_4
  float v263; // xmm2_4
  float v264; // xmm3_4
  float v265; // xmm4_4
  __int128 v266; // xmm0
  __int64 v267; // rcx
  unsigned int *v268; // rcx
  __int64 v269; // rcx
  __int64 v270; // rcx
  __int64 v271; // rcx
  __int64 v272; // rcx
  bool v273; // zf
  float v274; // xmm3_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140023AC0[528];
#define v276 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 0)) /* [rsp+0h] */
#define v277 (*(unsigned int (*))(void *)(sr_frame_140023AC0 + 48)) /* [rsp+30h] */
#define v278 (*(int (*))(void *)(sr_frame_140023AC0 + 52)) /* [rsp+34h] */
#define v279 (*(unsigned int (*))(void *)(sr_frame_140023AC0 + 56)) /* [rsp+38h] */
#define v280 (*(signed int (*))(void *)(sr_frame_140023AC0 + 60)) /* [rsp+3Ch] */
#define v281 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 64)) /* [rsp+40h] */
#define v282 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 72)) /* [rsp+48h] */
#define v283 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 80)) /* [rsp+50h] */
#define v284 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 88)) /* [rsp+58h] */
#define v285 (*(float (*))(void *)(sr_frame_140023AC0 + 96)) /* [rsp+60h] */
#define v286 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 104)) /* [rsp+68h] */
#define v287 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 112)) /* [rsp+70h] */
#define v288 (*(signed int (*))(void *)(sr_frame_140023AC0 + 120)) /* [rsp+78h] */
#define v289 (*(signed int (*))(void *)(sr_frame_140023AC0 + 124)) /* [rsp+7Ch] */
#define v290 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 128)) /* [rsp+80h] */
#define v291 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 136)) /* [rsp+88h] */
#define v292 (*(__int128 (*))(void *)(sr_frame_140023AC0 + 144)) /* [rsp+90h] */
#define v293 (*(__int128 (*))(void *)(sr_frame_140023AC0 + 160)) /* [rsp+A0h] */
#define v294 (*(float (*))(void *)(sr_frame_140023AC0 + 176)) /* [rsp+B0h] */
#define v295 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 184)) /* [rsp+B8h] */
#define v296 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 186)) /* [rsp+BAh] */
#define v297 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 188)) /* [rsp+BCh] */
#define v298 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 190)) /* [rsp+BEh] */
#define v299 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 192)) /* [rsp+C0h] */
#define v300 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 194)) /* [rsp+C2h] */
#define v301 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 196)) /* [rsp+C4h] */
#define v302 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 198)) /* [rsp+C6h] */
#define v303 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 200)) /* [rsp+C8h] */
#define v304 (*(int (*))(void *)(sr_frame_140023AC0 + 512)) /* [rsp+200h] */

  v9 = a3;
  v10 = a4;
  v278 = a3;
  v11 = a2;
  v279 = a4;
  v12 = a1;
  v277 = a2;
  v285 = *(float *)&a1;
  if ( dword_140404A6C[283831312] == 1 )
  {
    for ( i = 0; i < 64; ++i )
    {
      for ( j = 0; j < 64; ++j )
      {
        for ( k = 0; k < 64; ++k )
        {
          sub_140012670(v12, v11 + k, v9 + i, v10 + j);
          v9 = v278;
          v11 = v277;
        }
      }
    }
  }
  v16 = a7;
  v17 = a6;
  v18 = a5;
  v19 = a8;
  v282 = a7;
  if ( a8 > 5 )
    v19 = -1;
  v20 = a6;
  v280 = v19;
  v21 = a5;
  v287 = a5;
  v22 = a7;
  v286 = a6;
  if ( a7 > 0 )
  {
    v23 = v9;
    v24 = 0;
    v281 = 0;
    do
    {
      v25 = 0;
      if ( v20 > 0 )
      {
        do
        {
          if ( v21 > 0 )
          {
            v26 = v11;
            v27 = &dword_140404A6C[1216 * v25 + 451221709 + 1216 * v24];
            v28 = v21;
            do
            {
              if ( *v27 )
                sub_140012670(v12, v26, v23, v10);
              ++v26;
              v27 += 19;
              --v28;
            }
            while ( v28 );
            v21 = v287;
            v24 = v281;
            v20 = v286;
          }
          v11 = v277;
          ++v10;
          ++v25;
        }
        while ( v25 < v20 );
        v22 = v282;
        v10 = v279;
      }
      v11 = v277;
      v24 += 64;
      ++v23;
      v281 = v24;
      v282 = --v22;
    }
    while ( v22 );
    v19 = v280;
    v18 = a5;
    v16 = a7;
    v17 = a6;
  }
  v29 = 0;
  if ( v16 <= 0 )
  {
    v87 = v19;
    dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641327] = 0;
    dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654181] = 0;
    goto LABEL_121;
  }
  v30 = 0;
  v283 = 0;
  do
  {
    v31 = 0;
    v281 = 0;
    if ( v17 > 0 )
    {
      v32 = (unsigned int)v17;
      v282 = (unsigned int)v17;
      do
      {
        if ( v18 > 0 )
        {
          v33 = v277;
          v34 = (unsigned int)v18;
          v35 = &dword_140404A6C[1216 * v30 + 451221716 + 1216 * v31];
          do
          {
            v36 = *(v35 - 7);
            if ( v36 )
            {
              v295 = *(_WORD *)v35;
              v296 = *((_WORD *)v35 + 1);
              v297 = *((_WORD *)v35 + 2);
              v298 = *((_WORD *)v35 + 3);
              v299 = *((_WORD *)v35 + 4);
              v300 = *((_WORD *)v35 + 5);
              v301 = *((_WORD *)v35 + 6);
              v302 = *((_WORD *)v35 + 7);
              sub_14000F830(v12, v33, v29 + v278, v10, v36 | (a9 << 24), &v295);
              if ( v29 == dword_140404A6C[460788391] )
                sub_14003FA40(v33, v10, (float)(v29 + v278) * 4.0);
            }
            ++v33;
            v35 += 19;
            --v34;
          }
          while ( v34 );
          v31 = v281;
          v32 = v282;
          v30 = v283;
          v18 = a5;
        }
        ++v31;
        ++v10;
        --v32;
        v281 = v31;
        v282 = v32;
      }
      while ( v32 );
      v16 = a7;
      v17 = a6;
    }
    v10 = v279;
    v30 += 64;
    ++v29;
    v283 = v30;
  }
  while ( v29 < v16 );
  v37 = v278;
  v282 = v280;
  v38 = 0;
  v39 = (unsigned int)v16;
  v286 = 0;
  v289 = v278;
  v287 = (unsigned int)v16;
  do
  {
    v40 = 0;
    v290 = 0;
    if ( v17 <= 0 )
      goto LABEL_102;
    v41 = v279;
    v42 = (unsigned int)v17;
    v291 = (unsigned int)v17;
    v288 = v279;
    do
    {
      v43 = 0;
      v284 = 0;
      if ( v18 <= 0 )
        goto LABEL_100;
      v44 = v277;
      v45 = v38 + v40;
      v46 = (unsigned int)v18;
      v47 = &dword_140404A6C[1216 * v38 + 451221731 + 1216 * v40];
      v281 = v38 + v40;
      v283 = (unsigned int)v18;
      do
      {
        v48 = *(v47 - 21);
        if ( !v48 )
          goto LABEL_98;
        v295 = *((_WORD *)v47 - 22);
        v296 = *((_WORD *)v47 - 21);
        v297 = *((_WORD *)v47 - 20);
        v298 = *((_WORD *)v47 - 19);
        v299 = *((_WORD *)v47 - 18);
        v300 = *((_WORD *)v47 - 17);
        v301 = *((_WORD *)v47 - 16);
        v302 = *((_WORD *)v47 - 15);
        if ( v48 == 0xFFFF )
        {
          v49 = *(v47 - 19);
          v50 = *(v47 - 18);
          v51 = v47[1197];
          v52 = v47[1];
          v53 = v49
              | (16
               * (v52 | (16 * (v51 | (16 * (v50 | (16 * (*(v47 - 17) | (2 * (*(v47 - 16) | (2 * *(v47 - 20))))))))))));
          if ( !v49 )
          {
            if ( !v50 )
            {
              v54 = *(v47 - 38);
              if ( (unsigned int)(v54 - 3) <= 0xC
                || v54 == 1
                || (v55 = dword_140404A6C[1216 * v45 + 451220497 + 19 * v43], v55 - 3 <= 0xC)
                || v55 == 1 )
              {
                v53 |= 2u;
              }
            }
            if ( !v52 )
            {
              if ( *v47 - 3 <= 0xC
                || *v47 == 1
                || (v56 = dword_140404A6C[1216 * v281 + 451220516 + 19 * v43], v56 - 3 <= 0xC)
                || v56 == 1 )
              {
                v53 |= 0x20u;
              }
            }
            v45 = v281;
          }
          if ( !v51 )
          {
            if ( !v52 )
            {
              v57 = 19 * (v43 + (v45 << 6) + 65);
              v58 = dword_140404A6C[v57 + 451221712];
              if ( v58 - 3 <= 0xC || v58 == 1 || (v59 = dword_140404A6C[v57 + 451221713], v59 - 3 <= 0xC) || v59 == 1 )
                v53 |= 0x200u;
            }
            if ( !v50 )
            {
              v60 = v43 + ((v45 + 1) << 6);
              v61 = dword_140404A6C[19 * v60 + 451221693];
              if ( v61 - 3 <= 0xC
                || v61 == 1
                || (v62 = dword_140404A6C[19 * v60 + 451221713], v62 - 3 <= 0xC)
                || v62 == 1 )
              {
                v53 |= 0x2000u;
              }
            }
          }
          v63 = sub_14001A990(0, v53);
          if ( !(unsigned int)sub_140016450(v12, v44, v37, v41) )
            sub_140016130(v12, v44, v37, v41, v63 | (a9 << 24) | 0x80000000, &v295);
          v43 = v284;
          v46 = v283;
LABEL_74:
          if ( v280 == -1 )
            goto LABEL_98;
          goto LABEL_75;
        }
        if ( v48 >= 0 )
          goto LABEL_74;
        sub_140016130(v12, v44, v37, v41, v48 | (a9 << 24) | 0x80000000, &v295);
        if ( v280 != -1 )
        {
          if ( (unsigned __int16)v48 >= (int)dword_140404A6C[70087027]
            && (unsigned __int16)v48 < (signed int)(dword_140404A6C[70087027] + 4) )
          {
            v69 = 5873 * v282;
            *(float *)&dword_140404A6C[v69 + 283831491] = (float)((float)v44 * 4.0) + 0.25;
            *(float *)&dword_140404A6C[v69 + 283831492] = (float)((float)v37 * 4.0) + 0.125;
            *(float *)&dword_140404A6C[v69 + 283831493] = (float)((float)v41 * 4.0) + 0.25;
            *(float *)&dword_140404A6C[v69 + 283831494] = (float)((float)(v44 + 1) * 4.0) - 0.25;
            *(float *)&dword_140404A6C[v69 + 283831495] = (float)((float)(v37 + 1) * 4.0) - 0.125;
            *(float *)&dword_140404A6C[v69 + 283831496] = (float)((float)(v41 + 1) * 4.0) - 0.25;
          }
          if ( (unsigned __int16)v48 >= (int)dword_140404A6C[40714341]
            && (unsigned __int16)v48 < (signed int)(dword_140404A6C[40714341] + 4) )
          {
            v64 = v282;
            v70 = 5873 * v282;
            *(float *)&dword_140404A6C[v70 + 283831498] = (float)((float)v44 * 4.0) + 2.0;
            *(float *)&dword_140404A6C[v70 + 283831499] = (float)((float)v37 * 4.0) + 2.0;
            *(float *)&dword_140404A6C[v70 + 283831500] = (float)((float)v41 * 4.0) + 2.0;
            goto LABEL_76;
          }
LABEL_75:
          v64 = v282;
LABEL_76:
          if ( dword_140404A6C[283831312] == 7 )
            goto LABEL_97;
          v65 = (unsigned __int16)*(v47 - 21);
          if ( v65 < dword_140404A6C[19931114] || v65 > dword_140404A6C[19931117] )
            goto LABEL_97;
          v66 = 5873 * v64;
          v67 = &dword_140404A6C[v66 + 283831581];
          v68 = ((unsigned __int8)*(v47 - 21) - LOBYTE(dword_140404A6C[19931114]) - 2) & 3;
          dword_140404A6C[v66 + 283831580] = v44;
          dword_140404A6C[v66 + 283831581] = v37;
          dword_140404A6C[v66 + 283831582] = v41;
          dword_140404A6C[v66 + 283831583] = v68;
          dword_140404A6C[v66 + 283831584] = v44;
          dword_140404A6C[v66 + 283831585] = v37;
          dword_140404A6C[v66 + 283831586] = v41;
          dword_140404A6C[v66 + 283831587] = v68;
          switch ( v68 )
          {
            case 0:
              dword_140404A6C[v66 + 283831584] = v44 + 1;
              break;
            case 1:
              goto LABEL_93;
            case 2:
              dword_140404A6C[v66 + 283831584] = v44 + 1;
              break;
            case 3:
LABEL_93:
              dword_140404A6C[v66 + 283831586] = v41 + 1;
              break;
          }
          v71 = 2;
          do
          {
            v72 = *(v67 - 1);
            v73 = *v67;
            v74 = v67[1];
            sub_140017260(0, v72, *v67, v74, (v67[2] << 10) | 6);
            sub_1400173C0(0, v72, v73, v74);
            v67 += 4;
            --v71;
          }
          while ( v71 );
          v41 = v288;
          v37 = v289;
          v12 = LODWORD(v285);
        }
LABEL_97:
        v43 = v284;
        v46 = v283;
LABEL_98:
        v45 = v281;
        ++v43;
        ++v44;
        v284 = v43;
        v47 += 19;
        v283 = --v46;
      }
      while ( v46 );
      v18 = a5;
      v40 = v290;
      v42 = v291;
      v38 = v286;
LABEL_100:
      ++v41;
      ++v40;
      --v42;
      v288 = v41;
      v291 = v42;
      v290 = v40;
    }
    while ( v42 );
    v39 = v287;
    v17 = a6;
LABEL_102:
    ++v37;
    v38 += 64;
    --v39;
    v289 = v37;
    v287 = v39;
    v286 = v38;
  }
  while ( v39 );
  v75 = (unsigned int)a7;
  v76 = 0;
  v77 = v278;
  v290 = 0;
  v281 = (unsigned int)a7;
  dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641327] = 0;
  dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654181] = 0;
  v78 = 0;
  v291 = 0;
  do
  {
    v79 = 0;
    v287 = 0;
    if ( v17 > 0 )
    {
      v80 = v279;
      v81 = (unsigned int)v17;
      v286 = (unsigned int)v17;
      do
      {
        if ( v18 > 0 )
        {
          v82 = v277;
          v83 = (unsigned int)v18;
          v84 = &dword_140404A6C[1216 * v76 + 451221727 + 1216 * v79];
          do
          {
            if ( *v84 )
            {
              sub_140016F60(v12, v82, v77, v80, *v84);
              v85 = (int)dword_140404A6C[948 * (*v84 & 0x3FF) + 272299416];
              if ( v85 > 0 )
              {
                v86 = 948LL * (*v84 & 0x3FF);
                do
                {
                  if ( dword_140404A6C[v86 + 272299433] == 39 )
                  {
                    dword_140404A6C[14019 * dword_140404A6C[225641186]
                                  + 225654182
                                  + 4 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654181]] = v82;
                    dword_140404A6C[14019 * dword_140404A6C[225641186]
                                  + 225654183
                                  + 4 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654181]] = v77;
                    dword_140404A6C[14019 * dword_140404A6C[225641186]
                                  + 225654184
                                  + 4 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654181]++] = v80;
                  }
                  v86 += 29;
                  --v85;
                }
                while ( v85 );
              }
            }
            ++v82;
            v84 += 19;
            --v83;
          }
          while ( v83 );
          v79 = v287;
          v81 = v286;
          v76 = v290;
          v18 = a5;
        }
        ++v79;
        ++v80;
        --v81;
        v287 = v79;
        v286 = v81;
      }
      while ( v81 );
      v78 = v291;
      v75 = v281;
      v17 = a6;
    }
    v78 += 311296;
    v76 += 64;
    ++v77;
    v291 = v78;
    --v75;
    v290 = v76;
    v281 = v75;
  }
  while ( v75 );
  v87 = v282;
  v19 = v280;
LABEL_121:
  v88 = v278;
  if ( v19 != -1 )
  {
    v89 = v279;
    v90 = 5873 * v87;
    v91 = dword_140404A6C[464720555];
    v92 = v277 + dword_140404A6C[464720556] + dword_140404A6C[464720553];
    *(float *)&v93 = (float)v278 * 4.0;
    v94 = dword_140404A6C[464720555] + v279;
    v294 = 1.0;
    v95 = (float)(int)(dword_140404A6C[464720553] + v277);
    dword_140404A6C[v90 + 283831486] = v93;
    v285 = *(float *)&v93;
    v96 = _mm_cvtsi32_si128(v92);
    v97 = v89 + v91 + dword_140404A6C[464720558];
    *(float *)&v98 = v95 * 4.0;
    dword_140404A6C[v90 + 283831485] = v98;
    *(float *)&dword_140404A6C[v90 + 283831487] = (float)v94 * 4.0;
    *(float *)SR_VEC_LANES(128, v96, i32) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v96), f32)[0] * 4.0;
    dword_140404A6C[v90 + 283831488] = SR_VEC_LANES(128, v96, i32)[0];
    *(float *)&dword_140404A6C[v90 + 283831489] = (float)(v88 + 1) * 4.0;
    *(float *)&dword_140404A6C[v90 + 283831490] = (float)v97 * 4.0;
    v99 = (float)v97 * 4.0;
    *(_QWORD *)&v100 = dword_140404A6C[5873 * v87 + 283831497];
    v101 = *(float *)&dword_140404A6C[5873 * v87 + 283831486];
    v102 = *(float *)&dword_140404A6C[5873 * v87 + 283831489];
    v103 = *(float *)&dword_140404A6C[5873 * v87 + 283831487];
    v292 = xmmword_140278D30;
    v293 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v292, (float *)&v292 + 3, v100);
    sub_14007B2A0((__int64)&v292, (float *)&v292 + 3, sr_export_float_lane_container(1078530011));
    *(float *)SR_VEC_LANES(128, v96, i32) = *(float *)SR_VEC_LANES(128, v96, i32) + *(float *)&v98;
    v104 = v101 + v102;
    v105 = *(float *)&v292;
    v106 = DWORD2(v293);
    v107 = *((float *)&v292 + 1);
    v108 = HIDWORD(v293);
    v109 = *((float *)&v292 + 2);
    v110 = (float)(v103 + v99) * 0.5;
    v111 = (float)((float)(*(float *)SR_VEC_LANES(128, v96, i32) * 0.5) - (float)(*(float *)&v292 * 16.0))
         + (float)(*((float *)&v293 + 2) * 16.0);
    v112 = (float)((float)(v104 * 0.5) - (float)(*((float *)&v292 + 1) * 16.0)) + (float)(*((float *)&v293 + 3) * 16.0);
    v113 = LODWORD(v294);
    v114 = 0;
    v115 = 5873 * v87;
    v116 = (float)(v110 - (float)(*((float *)&v292 + 2) * 16.0)) + (float)(v294 * 16.0);
    do
    {
      v117 = HIDWORD(v292);
      v118 = v293;
      dword_140404A6C[13 * (int)dword_140404A6C[v115 + 283836331] + 283836332 + v115] = 0;
      v119 = v115 * 4 + 52LL * (int)dword_140404A6C[v115 + 283836331];
      *(float *)((char *)&dword_140404A6C[283836333] + v119) = v111;
      *(float *)((char *)&dword_140404A6C[283836334] + v119) = v112;
      *(float *)((char *)&dword_140404A6C[283836335] + v119) = v116;
      v120 = v115 * 4 + 52LL * (int)dword_140404A6C[v115 + 283836331];
      *(float *)((char *)&dword_140404A6C[283836336] + v120) = v105;
      *(float *)((char *)&dword_140404A6C[283836337] + v120) = v107;
      *(float *)((char *)&dword_140404A6C[283836338] + v120) = v109;
      v121 = v115 * 4 + 52LL * (int)dword_140404A6C[v115 + 283836331];
      *(unsigned int *)((char *)&dword_140404A6C[283836339] + v121) = v117;
      *(_QWORD *)((char *)&dword_140404A6C[283836340] + v121) = __PAIR64__(DWORD1(v293), v118);
      v122 = v115 * 4 + 52LL * (int)dword_140404A6C[v115 + 283836331];
      *(unsigned int *)((char *)&dword_140404A6C[283836342] + v122) = v106;
      *(unsigned int *)((char *)&dword_140404A6C[283836343] + v122) = v108;
      *(unsigned int *)((char *)&dword_140404A6C[283836344] + v122) = v113;
      ++dword_140404A6C[v115 + 283836331];
      if ( v114 == 3 )
      {
        sub_14007B2A0((__int64)&v292, (float *)&v292 + 3, sr_export_float_lane_container(1078530011));
        v106 = DWORD2(v293);
        v108 = HIDWORD(v293);
        v113 = LODWORD(v294);
        v109 = *((float *)&v292 + 2);
        v107 = *((float *)&v292 + 1);
        v105 = *(float *)&v292;
        v123 = *((float *)&v293 + 3) * 24.0;
        v111 = v111 + (float)(*((float *)&v293 + 2) * 24.0);
        v124 = v294 * 24.0;
      }
      else
      {
        v123 = v107 * 4.0;
        v111 = v111 + (float)(v105 * 4.0);
        v124 = v109 * 4.0;
      }
      ++v114;
      v116 = v116 + v124;
      v112 = v112 + v123;
    }
    while ( v114 < 8 );
    *(_QWORD *)&v125 = dword_140404A6C[v90 + 283831497];
    v126 = *(float *)&dword_140404A6C[v90 + 283831485];
    v127 = *(float *)&dword_140404A6C[v90 + 283831488];
    v128 = *(float *)&dword_140404A6C[v90 + 283831486];
    v129 = *(float *)&dword_140404A6C[v90 + 283831489];
    v130 = *(float *)&dword_140404A6C[v90 + 283831487];
    v131 = *(float *)&dword_140404A6C[v90 + 283831490];
    v292 = xmmword_140278D30;
    v294 = 1.0;
    v293 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v292, (float *)&v292 + 3, v125);
    sub_14007B2A0((__int64)&v292, (float *)&v292 + 3, sr_export_float_lane_container(1078530011));
    v132 = v126 + v127;
    v133 = v128 + v129;
    v134 = *(float *)&v292;
    v135 = v130 + v131;
    v136 = *((float *)&v293 + 2);
    v137 = *((float *)&v292 + 1);
    v138 = *((float *)&v293 + 3);
    v139 = *((float *)&v292 + 2);
    v140 = v294;
    v141 = (float)((float)(v132 * 0.5) + (float)(*(float *)&v292 * 4.0)) + (float)(*((float *)&v293 + 2) * 17.5);
    v142 = (float)((float)(v133 * 0.5) + (float)(*((float *)&v292 + 1) * 4.0)) + (float)(*((float *)&v293 + 3) * 17.5);
    v143 = (float)((float)(v135 * 0.5) + (float)(*((float *)&v292 + 2) * 4.0)) + (float)(v294 * 17.5);
    if ( dword_140404A6C[284024893] )
    {
      *(float *)&dword_140404A6C[v90 + 283831498] = v141;
      *(float *)&dword_140404A6C[v90 + 283831499] = v142;
      *(float *)&dword_140404A6C[v90 + 283831500] = v143;
    }
    *(float *)&dword_140404A6C[v90 + 283831501] = (float)((float)(v134 * 12.0) + v141) + (float)(v136 * 6.0);
    *(float *)&dword_140404A6C[v90 + 283831502] = (float)((float)(v137 * 12.0) + v142) + (float)(v138 * 6.0);
    *(float *)&dword_140404A6C[v90 + 283831503] = (float)((float)(v139 * 12.0) + v143) + (float)(v140 * 6.0);
    if ( dword_140404A6C[283831312] == 7 )
    {
      *(_QWORD *)&v144 = dword_140404A6C[v90 + 283831497];
      v294 = 1.0;
      v292 = xmmword_140278D30;
      v293 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v292, (float *)&v292 + 3, v144);
      *(float *)&v144 = v285 + 13.5;
      *(float *)&v145 = (float)(*(float *)&dword_140404A6C[v90 + 283831487] + *(float *)&dword_140404A6C[v90 + 283831490])
                      * 0.5;
      *(float *)&dword_140404A6C[v90 + 283831501] = (float)(*(float *)&dword_140404A6C[v90 + 283831485]
                                                          + *(float *)&dword_140404A6C[v90 + 283831488])
                                                  * 0.5;
      dword_140404A6C[v90 + 283831502] = LODWORD(v144);
      dword_140404A6C[v90 + 283831503] = v145;
    }
    v19 = v280;
  }
  v146 = 0;
  v147 = dword_140404A6C[464720754];
  v148 = 0;
  v149 = dword_140404A6C[464720755];
  v150 = dword_140404A6C[464720756];
  v151 = dword_140404A6C[464720745];
  v152 = dword_140404A6C[464720746];
  v153 = dword_140404A6C[464720747];
  v154 = 65536.0;
  if ( (int)dword_140404A6C[225391228] > 0 )
  {
    v155 = (int *)&dword_140404A6C[225391231];
    do
    {
      v156 = v146;
      v157 = (float)((float)*(v155 - 1) * 4.0)
           - (float)((float)(*(float *)&dword_140404A6C[464720754] * 32.0) + *(float *)&dword_140404A6C[464720745]);
      v158 = v154;
      v159 = (float)((float)v155[1] * 4.0)
           - (float)((float)(*(float *)&dword_140404A6C[464720756] * 32.0) + *(float *)&dword_140404A6C[464720747]);
      v160 = fsqrt(
               (float)((float)(v157 * v157)
                     + (float)((float)((float)((float)*v155 * 4.0)
                                     - (float)((float)(*(float *)&dword_140404A6C[464720755] * 32.0)
                                             + *(float *)&dword_140404A6C[464720746]))
                             * (float)((float)((float)*v155 * 4.0)
                                     - (float)((float)(*(float *)&dword_140404A6C[464720755] * 32.0)
                                             + *(float *)&dword_140404A6C[464720746]))))
             + (float)(v159 * v159));
      if ( v154 > v160 )
        v154 = v160;
      v146 = v148;
      if ( v158 <= v160 )
        v146 = v156;
      ++v148;
      v155 += 34;
    }
    while ( v148 < (int)dword_140404A6C[225391228] );
    v153 = dword_140404A6C[464720747];
  }
  v161 = 34LL * v146;
  dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641321] = dword_140404A6C[v161 + 225391236];
  v162 = dword_140404A6C[225641186];
  v163 = 14019LL * (int)dword_140404A6C[225641186];
  if ( dword_140404A6C[v163 + 225641321] == -1 )
  {
    dword_140404A6C[v163 + 225641321] = dword_140404A6C[v161 + 225391238];
    v162 = dword_140404A6C[225641186];
  }
  dword_140404A6C[14019 * v162 + 225641322] = dword_140404A6C[v161 + 225391237];
  v164 = dword_140404A6C[225641186];
  v165 = 14019LL * (int)dword_140404A6C[225641186];
  if ( dword_140404A6C[v165 + 225641322] == -1 )
  {
    dword_140404A6C[v165 + 225641322] = dword_140404A6C[v161 + 225391239];
    v164 = dword_140404A6C[225641186];
  }
  v166 = dword_140404A6C[464720558];
  v167 = dword_140404A6C[464720555];
  v168 = dword_140404A6C[464720554];
  v169 = dword_140404A6C[464720553];
  v170 = dword_140404A6C[464720753];
  if ( v19 == -1 )
  {
    v181 = dword_140404A6C[464720557];
    v174 = dword_140404A6C[464720556];
    v172 = v277;
    v173 = v279;
  }
  else
  {
    v171 = *(_OWORD *)&dword_140404A6C[464720748];
    v172 = v277;
    v173 = v279;
    v174 = dword_140404A6C[464720556];
    dword_140404A6C[14019 * v164 + 225641203] = 1;
    dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641325] = v19;
    v175 = 14019LL * (int)dword_140404A6C[225641186];
    dword_140404A6C[v175 + 225641207] = v151;
    dword_140404A6C[v175 + 225641208] = v152;
    dword_140404A6C[v175 + 225641209] = v153;
    v176 = &dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641210];
    *(_OWORD *)v176 = v171;
    v176[4] = dword_140404A6C[464720752];
    v176[5] = v170;
    v176[6] = v147;
    v176[7] = v149;
    v176[8] = v150;
    v177 = 14019LL * (int)dword_140404A6C[225641186];
    v178 = *(float *)&dword_140404A6C[v177 + 225641215] + *(float *)&dword_140404A6C[v177 + 225641215];
    *(float *)&v171 = *(float *)&dword_140404A6C[v177 + 225641218] * 18.0;
    *(float *)&v179 = (float)((float)((float)(*(float *)&dword_140404A6C[v177 + 225641211] * 32.0)
                                    + *(float *)&dword_140404A6C[v177 + 225641208])
                            + (float)(*(float *)&dword_140404A6C[v177 + 225641217] * 18.0))
                    + (float)(*(float *)&dword_140404A6C[v177 + 225641214] + *(float *)&dword_140404A6C[v177 + 225641214]);
    v180 = (float)(*(float *)&dword_140404A6C[v177 + 225641212] * 32.0) + *(float *)&dword_140404A6C[v177 + 225641209];
    *(float *)&dword_140404A6C[v177 + 225653936] = (float)((float)((float)(*(float *)&dword_140404A6C[v177 + 225641210]
                                                                         * 32.0)
                                                                 + *(float *)&dword_140404A6C[v177 + 225641207])
                                                         + (float)(*(float *)&dword_140404A6C[v177 + 225641216] * 18.0))
                                                 + (float)(*(float *)&dword_140404A6C[v177 + 225641213]
                                                         + *(float *)&dword_140404A6C[v177 + 225641213]);
    dword_140404A6C[v177 + 225653937] = v179;
    *(float *)&dword_140404A6C[v177 + 225653938] = (float)(v180 + *(float *)&v171) + v178;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641219] = (float)(int)(v169 + v172) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641220] = (float)(int)(v168 + v88) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641221] = (float)(int)(v167 + v173) * 4.0;
    v181 = dword_140404A6C[464720557];
    v182 = v88 + dword_140404A6C[464720557] + v168;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641223] = (float)v182 * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
    v164 = ++dword_140404A6C[225641186];
  }
  v183 = a8;
  if ( a8 != 10 )
  {
    v261 = (float)v172;
    if ( a8 == 12 )
    {
      dword_140404A6C[14019 * v164 + 225641203] = 6;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641207] = v261 * 4.0;
      *(float *)&v262 = (float)v173 * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641208] = (float)v88 * 4.0;
      dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641209] = v262;
      dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641209] = v262;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641219] = (float)(int)(v169 + v172) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641220] = (float)(int)(v168 + v88) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641221] = (float)(int)(v167 + v173) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641222] = (float)(int)(v172 + v174 + v169)
                                                                                 * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641224] = (float)(int)(v173 + v167 + v166)
                                                                                 * 4.0;
      dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128] = 0;
      v164 = ++dword_140404A6C[225641186];
    }
    else if ( a8 == 13 )
    {
      v263 = v261 * 4.0;
      v264 = (float)v88;
      dword_140404A6C[14019 * v164 + 225641203] = 5;
      v265 = (float)v173;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641207] = v263;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641208] = (float)v88 * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641209] = (float)v173 * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641219] = (float)(int)(v169 + v172) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641220] = (float)(int)(v168 + v88) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641221] = (float)(int)(v167 + v173) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641222] = (float)(int)(v172 + v174 + v169)
                                                                                 * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641224] = (float)(int)(v173 + v167 + v166)
                                                                                 * 4.0;
      v273 = dword_140404A6C[456202453] == 0;
      dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128] = 0;
      if ( !v273 )
      {
        dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128] = 0;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654129
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]] = 0;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654130
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]++] = 1000;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654129
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]] = 1;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654130
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]++] = 5000;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654129
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]] = 2;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654130
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]++] = 10000;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654129
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]] = 3;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654130
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]++] = 10000;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654129
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]] = 4;
        v181 = dword_140404A6C[464720557];
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654130
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]++] = 100000;
      }
      v164 = ++dword_140404A6C[225641186];
      goto LABEL_171;
    }
    v185 = dword_140404A6C[464720752];
    goto LABEL_162;
  }
  v184 = *(_OWORD *)&dword_140404A6C[464720748];
  v185 = dword_140404A6C[464720752];
  dword_140404A6C[14019 * v164 + 225641203] = 4;
  v186 = 14019LL * (int)dword_140404A6C[225641186];
  dword_140404A6C[v186 + 225641207] = v151;
  dword_140404A6C[v186 + 225641208] = v152;
  dword_140404A6C[v186 + 225641209] = v153;
  v187 = &dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641210];
  v187[4] = v185;
  v187[5] = v170;
  v187[6] = v147;
  v187[7] = v149;
  v187[8] = v150;
  *(_OWORD *)v187 = v184;
  v188 = dword_140404A6C[468694332];
  dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641327] = 0;
  if ( v188 > 0 )
  {
    v189 = a9 & 3;
    v304 = v189;
    v190 = 0;
    v191 = (unsigned int)v188;
    do
    {
      v192 = *(float *)&dword_140404A6C[v190 + 468694334];
      v193 = (float *)&dword_140404A6C[v190 + 468694335];
      v194 = 14019LL * (int)dword_140404A6C[225641186];
      v195 = 0;
      v196 = v194 * 4 + 788LL * (int)dword_140404A6C[v194 + 225641327];
      v197 = (float)((float)((float)(v192 * *(float *)&dword_140404A6C[v194 + 225641210])
                           + *(float *)&dword_140404A6C[v194 + 225641207])
                   + (float)(*(float *)&dword_140404A6C[v190 + 468694335] * *(float *)&dword_140404A6C[v194 + 225641213]))
           + (float)(*(float *)&dword_140404A6C[v190 + 468694336] * *(float *)&dword_140404A6C[v194 + 225641216]);
      v198 = (float)((float)(v192 * *(float *)&dword_140404A6C[v194 + 225641211])
                   + *(float *)&dword_140404A6C[v194 + 225641208])
           + (float)(*(float *)&dword_140404A6C[v190 + 468694335] * *(float *)&dword_140404A6C[v194 + 225641214]);
      v199 = *(float *)&dword_140404A6C[v190 + 468694336] * *(float *)&dword_140404A6C[v194 + 225641217];
      v200 = (float)((float)(v192 * *(float *)&dword_140404A6C[v194 + 225641212])
                   + *(float *)&dword_140404A6C[v194 + 225641209])
           + (float)(*(float *)&dword_140404A6C[v190 + 468694335] * *(float *)&dword_140404A6C[v194 + 225641215]);
      v201 = *(float *)&dword_140404A6C[v190 + 468694336] * *(float *)&dword_140404A6C[v194 + 225641218];
      *(float *)((char *)&dword_140404A6C[225641328] + v196) = v197;
      *(float *)((char *)&dword_140404A6C[225641329] + v196) = v198 + v199;
      *(float *)((char *)&dword_140404A6C[225641330] + v196) = v200 + v201;
      dword_140404A6C[14019 * dword_140404A6C[225641186]
                    + 225641331
                    + 197 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641327]] = v189;
      v202 = (int)dword_140404A6C[v190 + 468694333];
      v203 = v202;
      dword_140404A6C[14019 * dword_140404A6C[225641186]
                    + 225641332
                    + 197 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641327]] = v202;
      if ( v202 >= 4 )
      {
        v204 = v202 - 3;
        do
        {
          v205 = *(v193 - 1);
          v206 = 14019LL * (int)dword_140404A6C[225641186];
          v207 = v205 * *(float *)&dword_140404A6C[v206 + 225641210];
          v208 = (float)((float)(v205 * *(float *)&dword_140404A6C[v206 + 225641212])
                       + *(float *)&dword_140404A6C[v206 + 225641209])
               + (float)(*v193 * *(float *)&dword_140404A6C[v206 + 225641215]);
          v209 = v193[4];
          v210 = (float)((float)((float)(v205 * *(float *)&dword_140404A6C[v206 + 225641211])
                               + *(float *)&dword_140404A6C[v206 + 225641208])
                       + (float)(*v193 * *(float *)&dword_140404A6C[v206 + 225641214]))
               + (float)(v193[1] * *(float *)&dword_140404A6C[v206 + 225641217]);
          v211 = v208 + (float)(v193[1] * *(float *)&dword_140404A6C[v206 + 225641218]);
          v212 = v193[5];
          v213 = 788LL * (int)dword_140404A6C[v206 + 225641327] + 12 * (v195 + 4673LL * (int)dword_140404A6C[225641186]);
          *(float *)((char *)&dword_140404A6C[225641333] + v213) = (float)((float)(v207
                                                                                 + *(float *)&dword_140404A6C[v206 + 225641207])
                                                                         + (float)(*v193
                                                                                 * *(float *)&dword_140404A6C[v206 + 225641213]))
                                                                 + (float)(v193[1]
                                                                         * *(float *)&dword_140404A6C[v206 + 225641216]);
          *(float *)((char *)&dword_140404A6C[225641334] + v213) = v210;
          *(float *)((char *)&dword_140404A6C[225641335] + v213) = v211;
          v214 = 14019LL * (int)dword_140404A6C[225641186];
          v215 = v193[3];
          v216 = (float)((float)((float)(v215 * *(float *)&dword_140404A6C[v214 + 225641210])
                               + *(float *)&dword_140404A6C[v214 + 225641207])
                       + (float)(v209 * *(float *)&dword_140404A6C[v214 + 225641213]))
               + (float)(v212 * *(float *)&dword_140404A6C[v214 + 225641216]);
          v217 = (float)((float)(v215 * *(float *)&dword_140404A6C[v214 + 225641212])
                       + *(float *)&dword_140404A6C[v214 + 225641209])
               + (float)(v209 * *(float *)&dword_140404A6C[v214 + 225641215]);
          v218 = v212 * *(float *)&dword_140404A6C[v214 + 225641217];
          v219 = (float)((float)(v215 * *(float *)&dword_140404A6C[v214 + 225641211])
                       + *(float *)&dword_140404A6C[v214 + 225641208])
               + (float)(v209 * *(float *)&dword_140404A6C[v214 + 225641214]);
          v220 = v193[8];
          v221 = v217 + (float)(v212 * *(float *)&dword_140404A6C[v214 + 225641218]);
          v222 = v193[9];
          v223 = 788LL * (int)dword_140404A6C[v214 + 225641327] + 12 * (v195 + 4673LL * (int)dword_140404A6C[225641186]);
          *(float *)((char *)&dword_140404A6C[225641336] + v223) = v216;
          *(float *)((char *)&dword_140404A6C[225641337] + v223) = v219 + v218;
          *(float *)((char *)&dword_140404A6C[225641338] + v223) = v221;
          v224 = v193[7];
          v225 = 14019LL * (int)dword_140404A6C[225641186];
          v226 = v220 * *(float *)&dword_140404A6C[v225 + 225641214];
          v227 = (float)((float)((float)(v224 * *(float *)&dword_140404A6C[v225 + 225641210])
                               + *(float *)&dword_140404A6C[v225 + 225641207])
                       + (float)(v220 * *(float *)&dword_140404A6C[v225 + 225641213]))
               + (float)(v222 * *(float *)&dword_140404A6C[v225 + 225641216]);
          v228 = (float)((float)(v224 * *(float *)&dword_140404A6C[v225 + 225641212])
                       + *(float *)&dword_140404A6C[v225 + 225641209])
               + (float)(v220 * *(float *)&dword_140404A6C[v225 + 225641215]);
          v229 = v193[12];
          v230 = (float)((float)((float)(v193[7] * *(float *)&dword_140404A6C[v225 + 225641211])
                               + *(float *)&dword_140404A6C[v225 + 225641208])
                       + v226)
               + (float)(v222 * *(float *)&dword_140404A6C[v225 + 225641217]);
          v231 = v228 + (float)(v222 * *(float *)&dword_140404A6C[v225 + 225641218]);
          v232 = v193[13];
          v233 = 788LL * (int)dword_140404A6C[v225 + 225641327] + 12 * (v195 + 4673LL * (int)dword_140404A6C[225641186]);
          *(float *)((char *)&dword_140404A6C[225641339] + v233) = v227;
          *(float *)((char *)&dword_140404A6C[225641340] + v233) = v230;
          *(float *)((char *)&dword_140404A6C[225641341] + v233) = v231;
          v234 = v193[11];
          v193 += 16;
          v235 = 14019LL * (int)dword_140404A6C[225641186];
          v236 = v195 + 4673LL * (int)dword_140404A6C[225641186];
          v195 += 4;
          v237 = (float)((float)((float)(v234 * *(float *)&dword_140404A6C[v235 + 225641210])
                               + *(float *)&dword_140404A6C[v235 + 225641207])
                       + (float)(v229 * *(float *)&dword_140404A6C[v235 + 225641213]))
               + (float)(v232 * *(float *)&dword_140404A6C[v235 + 225641216]);
          v238 = v232 * *(float *)&dword_140404A6C[v235 + 225641217];
          v239 = (float)((float)(v234 * *(float *)&dword_140404A6C[v235 + 225641211])
                       + *(float *)&dword_140404A6C[v235 + 225641208])
               + (float)(v229 * *(float *)&dword_140404A6C[v235 + 225641214]);
          v240 = v232 * *(float *)&dword_140404A6C[v235 + 225641218];
          v241 = (float)((float)(v234 * *(float *)&dword_140404A6C[v235 + 225641212])
                       + *(float *)&dword_140404A6C[v235 + 225641209])
               + (float)(v229 * *(float *)&dword_140404A6C[v235 + 225641215]);
          v242 = 788LL * (int)dword_140404A6C[v235 + 225641327] + 12 * v236;
          *(float *)((char *)&dword_140404A6C[225641342] + v242) = v237;
          *(float *)((char *)&dword_140404A6C[225641343] + v242) = v239 + v238;
          *(float *)((char *)&dword_140404A6C[225641344] + v242) = v241 + v240;
        }
        while ( v195 < v204 );
      }
      if ( v195 < v203 )
      {
        v243 = (float *)&dword_140404A6C[4 * v195 + 468694335 + v190];
        do
        {
          v244 = *(v243 - 1);
          v245 = *v243;
          v246 = v243[1];
          v247 = 14019LL * (int)dword_140404A6C[225641186];
          v248 = *v243 * *(float *)&dword_140404A6C[v247 + 225641213];
          v243 += 4;
          v249 = v195 + 4673LL * (int)dword_140404A6C[225641186];
          ++v195;
          v250 = (float)((float)((float)(v244 * *(float *)&dword_140404A6C[v247 + 225641210])
                               + *(float *)&dword_140404A6C[v247 + 225641207])
                       + v248)
               + (float)(v246 * *(float *)&dword_140404A6C[v247 + 225641216]);
          v251 = v246 * *(float *)&dword_140404A6C[v247 + 225641217];
          v252 = (float)((float)(v244 * *(float *)&dword_140404A6C[v247 + 225641211])
                       + *(float *)&dword_140404A6C[v247 + 225641208])
               + (float)(v245 * *(float *)&dword_140404A6C[v247 + 225641214]);
          v253 = v246 * *(float *)&dword_140404A6C[v247 + 225641218];
          v254 = (float)((float)(v244 * *(float *)&dword_140404A6C[v247 + 225641212])
                       + *(float *)&dword_140404A6C[v247 + 225641209])
               + (float)(v245 * *(float *)&dword_140404A6C[v247 + 225641215]);
          v255 = 788LL * (int)dword_140404A6C[v247 + 225641327] + 12 * v249;
          *(float *)((char *)&dword_140404A6C[225641333] + v255) = v250;
          *(float *)((char *)&dword_140404A6C[225641334] + v255) = v252 + v251;
          *(float *)((char *)&dword_140404A6C[225641335] + v255) = v254 + v253;
        }
        while ( v195 < v203 );
      }
      v190 += 257;
      v189 = v304;
      ++dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641327];
      --v191;
    }
    while ( v191 );
    v167 = dword_140404A6C[464720555];
    v168 = dword_140404A6C[464720554];
    v169 = dword_140404A6C[464720553];
    v166 = dword_140404A6C[464720558];
    v181 = dword_140404A6C[464720557];
    v174 = dword_140404A6C[464720556];
    v88 = v278;
    v172 = v277;
    v173 = v279;
    v183 = 10;
  }
  v256 = 14019LL * (int)dword_140404A6C[225641186];
  v257 = *(float *)&dword_140404A6C[v256 + 225641215] + *(float *)&dword_140404A6C[v256 + 225641215];
  v258 = *(float *)&dword_140404A6C[v256 + 225641218] * 26.0;
  *(float *)&v259 = (float)((float)((float)(*(float *)&dword_140404A6C[v256 + 225641211] * 50.0)
                                  + *(float *)&dword_140404A6C[v256 + 225641208])
                          + (float)(*(float *)&dword_140404A6C[v256 + 225641217] * 26.0))
                  + (float)(*(float *)&dword_140404A6C[v256 + 225641214] + *(float *)&dword_140404A6C[v256 + 225641214]);
  v260 = (float)(*(float *)&dword_140404A6C[v256 + 225641212] * 50.0) + *(float *)&dword_140404A6C[v256 + 225641209];
  *(float *)&dword_140404A6C[v256 + 225653936] = (float)((float)((float)(*(float *)&dword_140404A6C[v256 + 225641210]
                                                                       * 50.0)
                                                               + *(float *)&dword_140404A6C[v256 + 225641207])
                                                       + (float)(*(float *)&dword_140404A6C[v256 + 225641216] * 26.0))
                                               + (float)(*(float *)&dword_140404A6C[v256 + 225641213]
                                                       + *(float *)&dword_140404A6C[v256 + 225641213]);
  dword_140404A6C[v256 + 225653937] = v259;
  *(float *)&dword_140404A6C[v256 + 225653938] = (float)(v260 + v258) + v257;
  *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641219] = (float)(int)(v169 + v172) * 4.0;
  *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641220] = (float)(int)(v168 + v88) * 4.0;
  *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641221] = (float)(int)(v167 + v173) * 4.0;
  *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
  *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
  *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
  v164 = dword_140404A6C[225641186] + 1;
  v261 = (float)v172;
  ++dword_140404A6C[225641186];
LABEL_162:
  v263 = v261 * 4.0;
  v264 = (float)v88;
  v265 = (float)v173;
  if ( v183 == 11 )
  {
    v266 = *(_OWORD *)&dword_140404A6C[464720748];
    dword_140404A6C[14019 * v164 + 225641203] = 3;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641207] = v263;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641208] = v264 * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641209] = v265 * 4.0;
    v267 = 14019LL * (int)dword_140404A6C[225641186];
    dword_140404A6C[v267 + 225641207] = v151;
    dword_140404A6C[v267 + 225641208] = v152;
    dword_140404A6C[v267 + 225641209] = v153;
    v268 = &dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641210];
    *(_OWORD *)v268 = v266;
    v268[5] = dword_140404A6C[464720753];
    v268[4] = v185;
    v268[6] = v147;
    v268[7] = v149;
    v268[8] = v150;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641219] = (float)(int)(v169 + v172) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641220] = (float)(int)(v168 + v88) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641221] = (float)(int)(v167 + v173) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
    v269 = 14019LL * (int)dword_140404A6C[225641186];
    dword_140404A6C[v269 + 225654178] = dword_140404A6C[v269 + 225641207];
    dword_140404A6C[v269 + 225654179] = dword_140404A6C[v269 + 225641208];
    dword_140404A6C[v269 + 225654180] = dword_140404A6C[v269 + 225641209];
    v270 = 14019LL * (int)dword_140404A6C[225641186];
    *(float *)&dword_140404A6C[v270 + 225654178] = (float)(*(float *)&dword_140404A6C[v270 + 225641210] * 24.0)
                                                 + *(float *)&dword_140404A6C[v270 + 225654178];
    *(float *)&dword_140404A6C[v270 + 225654179] = (float)(*(float *)&dword_140404A6C[v270 + 225641211] * 24.0)
                                                 + *(float *)&dword_140404A6C[v270 + 225654179];
    *(float *)&dword_140404A6C[v270 + 225654180] = (float)(*(float *)&dword_140404A6C[v270 + 225641212] * 24.0)
                                                 + *(float *)&dword_140404A6C[v270 + 225654180];
    v271 = 14019LL * (int)dword_140404A6C[225641186];
    *(float *)&dword_140404A6C[v271 + 225654178] = (float)(*(float *)&dword_140404A6C[v271 + 225641216] * 80.0)
                                                 + *(float *)&dword_140404A6C[v271 + 225654178];
    *(float *)&dword_140404A6C[v271 + 225654179] = (float)(*(float *)&dword_140404A6C[v271 + 225641217] * 80.0)
                                                 + *(float *)&dword_140404A6C[v271 + 225654179];
    *(float *)&dword_140404A6C[v271 + 225654180] = (float)(*(float *)&dword_140404A6C[v271 + 225641218] * 80.0)
                                                 + *(float *)&dword_140404A6C[v271 + 225654180];
    v272 = 14019LL * (int)dword_140404A6C[225641186];
    *(float *)&dword_140404A6C[v272 + 225654178] = (float)(*(float *)&dword_140404A6C[v272 + 225641213]
                                                         + *(float *)&dword_140404A6C[v272 + 225641213])
                                                 + *(float *)&dword_140404A6C[v272 + 225654178];
    *(float *)&dword_140404A6C[v272 + 225654179] = (float)(*(float *)&dword_140404A6C[v272 + 225641214]
                                                         + *(float *)&dword_140404A6C[v272 + 225641214])
                                                 + *(float *)&dword_140404A6C[v272 + 225654179];
    *(float *)&dword_140404A6C[v272 + 225654180] = (float)(*(float *)&dword_140404A6C[v272 + 225641215]
                                                         + *(float *)&dword_140404A6C[v272 + 225641215])
                                                 + *(float *)&dword_140404A6C[v272 + 225654180];
    goto LABEL_164;
  }
  if ( v183 == 14 )
  {
    dword_140404A6C[14019 * v164 + 225641203] = 8;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641207] = v263;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641208] = v264 * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641209] = v265 * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641219] = (float)(int)(v169 + v172) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641220] = (float)(int)(v168 + v88) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641221] = (float)(int)(v167 + v173) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
LABEL_164:
    dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128] = 0;
LABEL_173:
    ++dword_140404A6C[225641186];
    return 0; /* native result ignored by both callers */
  }
LABEL_171:
  v274 = v264 * 4.0;
  if ( v183 == 16 )
  {
    dword_140404A6C[14019 * v164 + 225641203] = 9;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641207] = v263;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641208] = v274;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641209] = v265 * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641219] = (float)(int)(v169 + v172) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641220] = (float)(int)(v168 + v88) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641221] = (float)(int)(v167 + v173) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
    dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128] = 0;
    dword_140404A6C[14019 * dword_140404A6C[225641186]
                  + 225654129
                  + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]] = 0;
    dword_140404A6C[14019 * dword_140404A6C[225641186]
                  + 225654130
                  + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]++] = 20;
    goto LABEL_173;
  }
  return 0; /* native result ignored by both callers */
}
#undef v276
#undef v277
#undef v278
#undef v279
#undef v280
#undef v281
#undef v282
#undef v283
#undef v284
#undef v285
#undef v286
#undef v287
#undef v288
#undef v289
#undef v290
#undef v291
#undef v292
#undef v293
#undef v294
#undef v295
#undef v296
#undef v297
#undef v298
#undef v299
#undef v300
#undef v301
#undef v302
#undef v303
#undef v304

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);

//----- (0000000140026E70) ----------------------------------------------------
__int64 sub_140026E70()
{
  int v0; // esi
  __int64 v1; // rax
  int v2; // ebx
  __int64 v3; // rdi
  int v4; // ecx
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
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140026E70[352];
#define v18 (*(__int64 (*))(void *)(sr_frame_140026E70 + 0)) /* [rsp+0h] */
#define FindData (*(_BYTE (*)[304])(void *)(sr_frame_140026E70 + 32)) /* [rsp+20h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_140026E70 + 336)) /* [rsp+150h] */

  LOBYTE(dword_140404A6C[451023973]) = 0;
  LOBYTE(dword_140404A6C[451027061]) = 0;
  LOBYTE(dword_140404A6C[451030149]) = 0;
  LOBYTE(dword_140404A6C[451033237]) = 0;
  LOBYTE(dword_140404A6C[451036325]) = 0;
  LOBYTE(dword_140404A6C[451039413]) = 0;
  LOBYTE(dword_140404A6C[451042501]) = 0;
  LOBYTE(dword_140404A6C[451045589]) = 0;
  LOBYTE(dword_140404A6C[451048677]) = 0;
  LOBYTE(dword_140404A6C[451051765]) = 0;
  LOBYTE(dword_140404A6C[451054853]) = 0;
  LOBYTE(dword_140404A6C[451057941]) = 0;
  LOBYTE(dword_140404A6C[451061029]) = 0;
  LOBYTE(dword_140404A6C[451064117]) = 0;
  LOBYTE(dword_140404A6C[451067205]) = 0;
  LOBYTE(dword_140404A6C[451070293]) = 0;
  LOBYTE(dword_140404A6C[451073381]) = 0;
  LOBYTE(dword_140404A6C[451076469]) = 0;
  LOBYTE(dword_140404A6C[451079557]) = 0;
  LOBYTE(dword_140404A6C[451082645]) = 0;
  LOBYTE(dword_140404A6C[451085733]) = 0;
  LOBYTE(dword_140404A6C[451088821]) = 0;
  LOBYTE(dword_140404A6C[451091909]) = 0;
  LOBYTE(dword_140404A6C[451094997]) = 0;
  LOBYTE(dword_140404A6C[451098085]) = 0;
  LOBYTE(dword_140404A6C[451101173]) = 0;
  LOBYTE(dword_140404A6C[451104261]) = 0;
  LOBYTE(dword_140404A6C[451107349]) = 0;
  LOBYTE(dword_140404A6C[451110437]) = 0;
  LOBYTE(dword_140404A6C[451113525]) = 0;
  LOBYTE(dword_140404A6C[451116613]) = 0;
  LOBYTE(dword_140404A6C[451119701]) = 0;
  LOBYTE(dword_140404A6C[451122789]) = 0;
  LOBYTE(dword_140404A6C[451125877]) = 0;
  LOBYTE(dword_140404A6C[451128965]) = 0;
  LOBYTE(dword_140404A6C[451132053]) = 0;
  LOBYTE(dword_140404A6C[451135141]) = 0;
  LOBYTE(dword_140404A6C[451138229]) = 0;
  LOBYTE(dword_140404A6C[451141317]) = 0;
  LOBYTE(dword_140404A6C[451144405]) = 0;
  LOBYTE(dword_140404A6C[451147493]) = 0;
  LOBYTE(dword_140404A6C[451150581]) = 0;
  LOBYTE(dword_140404A6C[451153669]) = 0;
  LOBYTE(dword_140404A6C[451156757]) = 0;
  LOBYTE(dword_140404A6C[451159845]) = 0;
  LOBYTE(dword_140404A6C[451162933]) = 0;
  LOBYTE(dword_140404A6C[451166021]) = 0;
  LOBYTE(dword_140404A6C[451169109]) = 0;
  LOBYTE(dword_140404A6C[451172197]) = 0;
  LOBYTE(dword_140404A6C[451175285]) = 0;
  LOBYTE(dword_140404A6C[451178373]) = 0;
  LOBYTE(dword_140404A6C[451181461]) = 0;
  LOBYTE(dword_140404A6C[451184549]) = 0;
  LOBYTE(dword_140404A6C[451187637]) = 0;
  LOBYTE(dword_140404A6C[451190725]) = 0;
  LOBYTE(dword_140404A6C[451193813]) = 0;
  LOBYTE(dword_140404A6C[451196901]) = 0;
  LOBYTE(dword_140404A6C[451199989]) = 0;
  LOBYTE(dword_140404A6C[451203077]) = 0;
  LOBYTE(dword_140404A6C[451206165]) = 0;
  LOBYTE(dword_140404A6C[451209253]) = 0;
  LOBYTE(dword_140404A6C[451212341]) = 0;
  LOBYTE(dword_140404A6C[451215429]) = 0;
  LOBYTE(dword_140404A6C[451218517]) = 0;
  v0 = sub_14024C22C("buildblock");
  v1 = sub_14023A198("*.sbl", (__int64)FindData);
  v2 = 0;
  dword_140404A6C[293119325] = 0;
  v3 = v1;
  v4 = 0;
  if ( (_DWORD)v1 != -1 )
  {
    do
    {
      if ( v4 >= 1024 )
        break;
      if ( (FindData[0] & 0x10) == 0 )
      {
        v5 = &FindData[36];
        v6 = &dword_140404A6C[16 * (__int64)v4 + 293119326];
        do
        {
          v7 = *v5++;
          *(_BYTE *)v6 = v7;
          v6 = (unsigned int *)((char *)v6 + 1);
        }
        while ( v7 );
        ++dword_140404A6C[293119325];
      }
      v8 = sub_14023A5C4(v3, (__int64)FindData);
      v4 = dword_140404A6C[293119325];
    }
    while ( v8 != -1 );
  }
  LOBYTE(dword_140404A6C[16 * (__int64)v4 + 293119326]) = 0;
  sub_140239CCC(v3);
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
  if ( v9 > 64 )
    v9 = 64;
  dword_140404A6C[293119325] = v9;
  if ( v9 > 0 )
  {
    do
    {
      sub_140027230((     char *)&dword_140404A6C[16 * (__int64)v2 + 293119326], v2);
      ++v2;
    }
    while ( v2 < (int)dword_140404A6C[293119325] );
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v18
#undef FindData
#undef v20

// 140239CCC: using guessed type __int64 __fastcall sub_140239CCC(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18622DFE0: using guessed type unsigned int;
// 1ABC89C00: using guessed type unsigned int;
// 1ABC8CC40: using guessed type unsigned int;
// 1ABC8FC80: using guessed type unsigned int;
// 1ABC92CC0: using guessed type unsigned int;
// 1ABC95D00: using guessed type unsigned int;
// 1ABC98D40: using guessed type unsigned int;
// 1ABC9BD80: using guessed type unsigned int;
// 1ABC9EDC0: using guessed type unsigned int;
// 1ABCA1E00: using guessed type unsigned int;
// 1ABCA4E40: using guessed type unsigned int;
// 1ABCA7E80: using guessed type unsigned int;
// 1ABCAAEC0: using guessed type unsigned int;
// 1ABCADF00: using guessed type unsigned int;
// 1ABCB0F40: using guessed type unsigned int;
// 1ABCB3F80: using guessed type unsigned int;
// 1ABCB6FC0: using guessed type unsigned int;
// 1ABCBA000: using guessed type unsigned int;
// 1ABCBD040: using guessed type unsigned int;
// 1ABCC0080: using guessed type unsigned int;
// 1ABCC30C0: using guessed type unsigned int;
// 1ABCC6100: using guessed type unsigned int;
// 1ABCC9140: using guessed type unsigned int;
// 1ABCCC180: using guessed type unsigned int;
// 1ABCCF1C0: using guessed type unsigned int;
// 1ABCD2200: using guessed type unsigned int;
// 1ABCD5240: using guessed type unsigned int;
// 1ABCD8280: using guessed type unsigned int;
// 1ABCDB2C0: using guessed type unsigned int;
// 1ABCDE300: using guessed type unsigned int;
// 1ABCE1340: using guessed type unsigned int;
// 1ABCE4380: using guessed type unsigned int;
// 1ABCE73C0: using guessed type unsigned int;
// 1ABCEA400: using guessed type unsigned int;
// 1ABCED440: using guessed type unsigned int;
// 1ABCF0480: using guessed type unsigned int;
// 1ABCF34C0: using guessed type unsigned int;
// 1ABCF6500: using guessed type unsigned int;
// 1ABCF9540: using guessed type unsigned int;
// 1ABCFC580: using guessed type unsigned int;
// 1ABCFF5C0: using guessed type unsigned int;
// 1ABD02600: using guessed type unsigned int;
// 1ABD05640: using guessed type unsigned int;
// 1ABD08680: using guessed type unsigned int;
// 1ABD0B6C0: using guessed type unsigned int;
// 1ABD0E700: using guessed type unsigned int;
// 1ABD11740: using guessed type unsigned int;
// 1ABD14780: using guessed type unsigned int;
// 1ABD177C0: using guessed type unsigned int;
// 1ABD1A800: using guessed type unsigned int;
// 1ABD1D840: using guessed type unsigned int;
// 1ABD20880: using guessed type unsigned int;
// 1ABD238C0: using guessed type unsigned int;
// 1ABD26900: using guessed type unsigned int;
// 1ABD29940: using guessed type unsigned int;
// 1ABD2C980: using guessed type unsigned int;
// 1ABD2F9C0: using guessed type unsigned int;
// 1ABD32A00: using guessed type unsigned int;
// 1ABD35A40: using guessed type unsigned int;
// 1ABD38A80: using guessed type unsigned int;
// 1ABD3BAC0: using guessed type unsigned int;
// 1ABD3EB00: using guessed type unsigned int;
// 1ABD41B40: using guessed type unsigned int;
// 1ABD44B80: using guessed type unsigned int;
// 1ABD47BC0: using guessed type unsigned int;

//----- (0000000140027230) ----------------------------------------------------
__int64            sub_140027230(     char *a1, int a2)
{
  __int64 v2; // rsi
       char *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  char *v7; // rcx
  char v8; // al
  __int64 v9; // r13
  __int64 v10; // r15
  unsigned int *v11; // rbp
  unsigned int *v12; // r14
  signed int v13; // esi
  __int64 v14; // rdi
  signed int v15; // esi
  char *v16; // rdi
  signed int v17; // esi
  __int64 v18; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140027230[144];
#define v20 (*(__int64 (*))(void *)(sr_frame_140027230 + 0)) /* [rsp+0h] */
#define v21 (*(int (*))(void *)(sr_frame_140027230 + 32)) /* [rsp+20h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_140027230 + 40)) /* [rsp+28h] */
#define v23 (*(__int64 (*))(void *)(sr_frame_140027230 + 48)) /* [rsp+30h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_140027230 + 56)) /* [rsp+38h] */
#define v25 (*(char (*)[64])(void *)(sr_frame_140027230 + 64)) /* [rsp+40h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_140027230 + 128)) /* [rsp+80h] */

  v2 = a2;
  v3 = a1;
  sub_140158AB0(v25, "buildblock/%s.sbl", a1);
  v4 = sub_14020B8D8(v25, "rb");
  v5 = v4;
  if ( v4 )
  {
    (*(void (           **)(int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(&v21, 4, 1, v4);
    if ( v21 == 1 )
    {
      v6 = 3088 * v2;
      v7 = (char *)&dword_140404A6C[451023973] + 12352 * v2 - (_QWORD)v3;
      do
      {
        v8 = *v3;
        v3[(_QWORD)v7] = *v3;
        ++v3;
      }
      while ( v8 );
      v9 = 0;
      v24 = 16;
      v10 = 0;
      v23 = 0;
      v22 = 0;
      v11 = &dword_140404A6C[v6 + 451024002];
      v12 = &dword_140404A6C[v6 + 451024083];
      do
      {
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 94,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 93,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 92,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 91,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 90,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 88,
          4,
          1,
          v5);
        v13 = 0;
        if ( (int)*(v11 - 7) > 0 )
        {
          do
          {
            v14 = v6 * 4 + 12 * (v10 + v13);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451023996] + v14,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451023997] + v14,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451023998] + v14,
              4,
              1,
              v5);
            ++v13;
          }
          while ( v13 < (int)*(v11 - 7) );
          v9 = v23;
        }
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 81,
          4,
          1,
          v5);
        v15 = 0;
        if ( (int)*v11 > 0 )
        {
          do
          {
            v16 = (char *)v12 + 20LL * v15 - (_QWORD)&dword_140404A6C[451024083];
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024003] + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024004] + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024005] + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024006] + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024007] + (_QWORD)v16,
              4,
              1,
              v5);
            ++v15;
          }
          while ( v15 < (int)*v11 );
          v10 = v22;
          v9 = v23;
        }
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(v12, 4, 1, v5);
        v17 = 0;
        if ( (int)v11[81] > 0 )
        {
          do
          {
            v18 = v6 * 4 + 24 * (v9 + v17);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024084] + v18,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024086] + v18,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024087] + v18,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024088] + v18,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024089] + v18,
              4,
              1,
              v5);
            ++v17;
          }
          while ( v17 < (int)v11[81] );
          v10 = v22;
        }
        v10 += 64;
        v9 += 32;
        v12 += 192;
        v22 = v10;
        v11 += 192;
        v23 = v9;
        --v24;
      }
      while ( v24 );
    }
    sub_14020B9E8(v5);
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE008: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);

//----- (0000000140027690) ----------------------------------------------------
__int64 sub_140027690()
{
  unsigned int *v0; // rbx
  __int64 result; // rax
  int i; // edi
  int v3; // r10d
       char *v4; // r11

  v0 = &dword_140404A6C[468675899];
  result = (__int64)sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[468675899]), 0, 0x100u);
  for ( i = 0; i < (int)dword_140404A6C[468675642]; ++v0 )
  {
    v3 = 2;
    v4 = (     char *)&dword_140404A6C[16 * (__int64)i + 468675643];
    do
    {
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451017797]) )
        *v0 = v3 - 2;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451020885]) )
        *v0 = v3 - 1;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451023973]) )
        *v0 = v3;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451027061]) )
        *v0 = v3 + 1;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451030149]) )
        *v0 = v3 + 2;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451033237]) )
        *v0 = v3 + 3;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451036325]) )
        *v0 = v3 + 4;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451039413]) )
        *v0 = v3 + 5;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451042501]) )
        *v0 = v3 + 6;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451045589]) )
        *v0 = v3 + 7;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451048677]) )
        *v0 = v3 + 8;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451051765]) )
        *v0 = v3 + 9;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451054853]) )
        *v0 = v3 + 10;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451057941]) )
        *v0 = v3 + 11;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451061029]) )
        *v0 = v3 + 12;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451064117]) )
        *v0 = v3 + 13;
      v3 += 16;
      result = (unsigned int)(v3 - 2);
    }
    while ( (int)result < 64 );
    ++i;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140027A60) ----------------------------------------------------
__int64 sub_140027A60()
{
  unsigned int *v0; // rbx
  __int64 result; // rax
  int v2; // edi
  int v3; // r11d
  signed int v4; // r9d
  unsigned int *v5; // r10
  unsigned int *v6; // rax
  int v7; // ecx
  int v8; // edx

  v0 = &dword_140404A6C[468693308];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[468693308]), 0, 0x1000u);
  result = dword_140404A6C[468676923];
  v2 = 0;
  if ( (int)dword_140404A6C[468676923] > 0 )
  {
    v3 = dword_140404A6C[273270149];
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &dword_140404A6C[272299397];
        do
        {
          v6 = &dword_140404A6C[16 * (__int64)v2 + 468676924];
          do
          {
            v7 = *((unsigned __int8 *)v6 + ((char *)v5 - (char *)&dword_140404A6C[16 * (__int64)v2 + 468676924]));
            v8 = *(unsigned __int8 *)v6 - v7;
            if ( v8 )
              break;
            v6 = (unsigned int *)((char *)v6 + 1);
          }
          while ( v7 );
          if ( !v8 )
            *v0 = v4;
          ++v4;
          v5 += 948;
        }
        while ( v4 < v3 );
        result = dword_140404A6C[468676923];
      }
      ++v2;
      ++v0;
    }
    while ( v2 < (int)result );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 181676080: using guessed type unsigned int;

//----- (0000000140027B40) ----------------------------------------------------
__int64 sub_140027B40()
{
  unsigned int *v0; // rbx
  __int64 result; // rax
  int v2; // edi
  int v3; // r11d
  signed int v4; // r9d
  unsigned int *v5; // r10
  unsigned int *v6; // rax
  int v7; // ecx
  int v8; // edx

  v0 = &dword_140404A6C[468674618];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[468674618]), 0, 0x1000u);
  result = dword_140404A6C[468658233];
  v2 = 0;
  if ( (int)dword_140404A6C[468658233] > 0 )
  {
    v3 = dword_140404A6C[19928869];
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &dword_140404A6C[20074597];
        do
        {
          v6 = &dword_140404A6C[16 * (__int64)v2 + 468658234];
          do
          {
            v7 = *((unsigned __int8 *)v6 + ((char *)v5 - (char *)&dword_140404A6C[16 * (__int64)v2 + 468658234]));
            v8 = *(unsigned __int8 *)v6 - v7;
            if ( v8 )
              break;
            v6 = (unsigned int *)((char *)v6 + 1);
          }
          while ( v7 );
          if ( !v8 )
            *v0 = v4;
          ++v4;
          v5 += 58;
        }
        while ( v4 < v3 );
        result = dword_140404A6C[468658233];
      }
      ++v2;
      ++v0;
    }
    while ( v2 < (int)result );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A700: using guessed type unsigned int;

//----- (0000000140027C20) ----------------------------------------------------
__int64 sub_140027C20()
{
  unsigned int *v0; // rbx
  __int64 result; // rax
  int v2; // edi
  int v3; // r11d
  signed int v4; // r9d
  unsigned int *v5; // r10
  unsigned int *v6; // rax
  int v7; // ecx
  int v8; // edx

  v0 = &dword_140404A6C[468657209];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[468657209]), 0, 0x400u);
  result = dword_140404A6C[468653112];
  v2 = 0;
  if ( (int)dword_140404A6C[468653112] > 0 )
  {
    v3 = dword_140404A6C[421784253];
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &dword_140404A6C[421784739];
        do
        {
          v6 = &dword_140404A6C[16 * (__int64)v2 + 468653113];
          do
          {
            v7 = *((unsigned __int8 *)v6 + ((char *)v5 - (char *)&dword_140404A6C[16 * (__int64)v2 + 468653113]));
            v8 = *(unsigned __int8 *)v6 - v7;
            if ( v8 )
              break;
            v6 = (unsigned int *)((char *)v6 + 1);
          }
          while ( v7 );
          if ( !v8 )
            *v0 = v4;
          ++v4;
          v5 += 46;
        }
        while ( v4 < v3 );
        result = dword_140404A6C[468653112];
      }
      ++v2;
      ++v0;
    }
    while ( v2 < (int)result );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A4CFF560: using guessed type unsigned int;

//----- (0000000140027D00) ----------------------------------------------------
__int64 sub_140027D00()
{
  int v0; // eax
  int v1; // edi
  int v2; // r9d
  int v3; // edx
  __int64 v4; // rbx
  int v5; // r10d
  __int64 v6; // r11
  int v7; // r8d
  unsigned int *v8; // rcx
  __int128 v9; // xmm0
  unsigned int v10; // r10d
  int v11; // ebx
  unsigned int v12; // r9d
  unsigned int v13; // edx
  __int64 v14; // rax
  unsigned int *v15; // rcx
  int v16; // r13d
  unsigned int v17; // esi
  unsigned int v18; // ebp
  __int64 v19; // r15
  __int64 v20; // r12
  int v21; // r11d
  __int64 v22; // r14
  int v23; // edi
  __int64 v24; // r10
  unsigned int *v25; // r8
  int v26; // edx
  int v27; // ebx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  int v38; // [rsp+30h] [rbp+8h]

  v0 = dword_140404A6C[460788389];
  v1 = 0;
  v2 = dword_140404A6C[460788388];
  v3 = dword_140404A6C[460788387];
  if ( (int)dword_140404A6C[460788389] > 0 )
  {
    v4 = 0;
    do
    {
      v5 = 0;
      v6 = 0;
      if ( v2 >= 0 )
      {
        do
        {
          v7 = 0;
          if ( v3 >= 0 )
          {
            v8 = &dword_140404A6C[960 * v4 + 464720760 + 960 * v6];
            do
            {
              v9 = *(_OWORD *)(v8 - 3932367);
              ++v7;
              v8 += 15;
              *(_OWORD *)(v8 - 15) = v9;
              *(_OWORD *)(v8 - 11) = *(_OWORD *)(v8 - 3932378);
              *(_OWORD *)(v8 - 7) = *(_OWORD *)(v8 - 3932374);
              *(_QWORD *)(v8 - 3) = *((_QWORD *)v8 - 1966185);
              *(v8 - 1) = *(v8 - 3932368);
              v3 = dword_140404A6C[460788387];
            }
            while ( v7 <= (int)dword_140404A6C[460788387] );
            v2 = dword_140404A6C[460788388];
          }
          ++v5;
          ++v6;
        }
        while ( v5 <= v2 );
        v0 = dword_140404A6C[460788389];
      }
      ++v1;
      v4 += 64;
    }
    while ( v1 < v0 );
  }
  v10 = v3;
  if ( v3 < (unsigned int)v2 )
    v10 = v2;
  v11 = 0;
  if ( v0 > 0 )
  {
    do
    {
      v12 = 0;
      do
      {
        v13 = 0;
        do
        {
          v14 = ((((__int64)v11 << 6) + (int)v12) << 6) + (int)v13++;
          v15 = &dword_140404A6C[15 * v14 + 460788393];
          *(_OWORD *)v15 = 0;
          *((_OWORD *)v15 + 1) = 0;
          *((_OWORD *)v15 + 2) = 0;
          *((_QWORD *)v15 + 6) = 0;
          v15[14] = 0;
        }
        while ( v13 <= v10 );
        ++v12;
      }
      while ( v12 <= v10 );
      v0 = dword_140404A6C[460788389];
      ++v11;
    }
    while ( v11 < (int)dword_140404A6C[460788389] );
    v2 = dword_140404A6C[460788388];
    v3 = dword_140404A6C[460788387];
  }
  v16 = 0;
  *(_QWORD *)&dword_140404A6C[468652924] = *(_QWORD *)&dword_140404A6C[464720557];
  *(_QWORD *)&dword_140404A6C[468652930] = *(_QWORD *)&dword_140404A6C[464720563];
  *(_QWORD *)&dword_140404A6C[468652936] = *(_QWORD *)&dword_140404A6C[464720569];
  *(_QWORD *)&dword_140404A6C[468652942] = *(_QWORD *)&dword_140404A6C[464720575];
  *(_QWORD *)&dword_140404A6C[468652948] = *(_QWORD *)&dword_140404A6C[464720581];
  *(_QWORD *)&dword_140404A6C[468652954] = *(_QWORD *)&dword_140404A6C[464720587];
  *(_QWORD *)&dword_140404A6C[468652960] = *(_QWORD *)&dword_140404A6C[464720593];
  *(_QWORD *)&dword_140404A6C[468652966] = *(_QWORD *)&dword_140404A6C[464720599];
  *(_QWORD *)&dword_140404A6C[468652972] = *(_QWORD *)&dword_140404A6C[464720605];
  *(_QWORD *)&dword_140404A6C[468652978] = *(_QWORD *)&dword_140404A6C[464720611];
  *(_QWORD *)&dword_140404A6C[468652984] = *(_QWORD *)&dword_140404A6C[464720617];
  *(_QWORD *)&dword_140404A6C[468652990] = *(_QWORD *)&dword_140404A6C[464720623];
  *(_QWORD *)&dword_140404A6C[468652996] = *(_QWORD *)&dword_140404A6C[464720629];
  *(_QWORD *)&dword_140404A6C[468653002] = *(_QWORD *)&dword_140404A6C[464720635];
  *(_QWORD *)&dword_140404A6C[468653008] = *(_QWORD *)&dword_140404A6C[464720641];
  *(_QWORD *)&dword_140404A6C[468653014] = *(_QWORD *)&dword_140404A6C[464720647];
  v38 = 0;
  *(_OWORD *)&dword_140404A6C[468652920] = *(_OWORD *)&dword_140404A6C[464720553];
  *(_OWORD *)&dword_140404A6C[468652926] = *(_OWORD *)&dword_140404A6C[464720559];
  *(_OWORD *)&dword_140404A6C[468652932] = *(_OWORD *)&dword_140404A6C[464720565];
  *(_OWORD *)&dword_140404A6C[468652938] = *(_OWORD *)&dword_140404A6C[464720571];
  *(_OWORD *)&dword_140404A6C[468652944] = *(_OWORD *)&dword_140404A6C[464720577];
  *(_OWORD *)&dword_140404A6C[468652950] = *(_OWORD *)&dword_140404A6C[464720583];
  *(_OWORD *)&dword_140404A6C[468652956] = *(_OWORD *)&dword_140404A6C[464720589];
  *(_OWORD *)&dword_140404A6C[468652962] = *(_OWORD *)&dword_140404A6C[464720595];
  *(_OWORD *)&dword_140404A6C[468652968] = *(_OWORD *)&dword_140404A6C[464720601];
  *(_OWORD *)&dword_140404A6C[468652974] = *(_OWORD *)&dword_140404A6C[464720607];
  *(_OWORD *)&dword_140404A6C[468652980] = *(_OWORD *)&dword_140404A6C[464720613];
  *(_OWORD *)&dword_140404A6C[468652986] = *(_OWORD *)&dword_140404A6C[464720619];
  *(_OWORD *)&dword_140404A6C[468652992] = *(_OWORD *)&dword_140404A6C[464720625];
  *(_OWORD *)&dword_140404A6C[468652998] = *(_OWORD *)&dword_140404A6C[464720631];
  *(_OWORD *)&dword_140404A6C[468653004] = *(_OWORD *)&dword_140404A6C[464720637];
  *(_OWORD *)&dword_140404A6C[468653010] = *(_OWORD *)&dword_140404A6C[464720643];
  if ( v0 > 0 )
  {
    v17 = dword_140404A6C[19928871];
    v18 = dword_140404A6C[19928870];
    v19 = 0;
    v20 = 0;
    do
    {
      v21 = 0;
      v22 = 0;
      if ( v2 >= 0 )
      {
        do
        {
          v23 = 0;
          if ( v3 >= 0 )
          {
            v24 = v20;
            v25 = &dword_140404A6C[960 * v19 + 464720766 + 960 * v22];
            do
            {
              if ( v21 < v2 )
              {
                v26 = *(v25 - 5);
                v27 = v2 - v21 - 1;
                if ( (v26 & 0xE0000000) == 0x80000000 )
                {
                  v26 = (unsigned __int16)v26;
                  v27 = v2 - v21 - dword_140404A6C[58 * (unsigned __int16)v26 + 20074647];
                  if ( (unsigned __int16)v26 >= v18 && (unsigned __int16)v26 < v17 )
                  {
                    v26 = (unsigned __int16)v26 + 1;
                    if ( (v26 & 3) == 0 )
                      v26 -= 4;
                  }
                  v26 |= 0x80000000;
                }
                v28 = 15 * (v24 + v27);
                if ( !dword_140404A6C[v28 + 460788394] )
                {
                  dword_140404A6C[v28 + 460788394] = v26;
                  LOWORD(dword_140404A6C[v28 + 460788399]) = *(_WORD *)v25;
                  HIWORD(dword_140404A6C[v28 + 460788400]) = *((_WORD *)v25 + 2);
                  LOWORD(dword_140404A6C[v28 + 460788401]) = *((_WORD *)v25 + 3);
                  HIWORD(dword_140404A6C[v28 + 460788399]) = *((_WORD *)v25 + 4);
                  LOWORD(dword_140404A6C[v28 + 460788400]) = *((_WORD *)v25 + 1);
                  HIWORD(dword_140404A6C[v28 + 460788401]) = *((_WORD *)v25 + 5);
                  LOWORD(dword_140404A6C[v28 + 460788402]) = *((_WORD *)v25 + 6);
                  HIWORD(dword_140404A6C[v28 + 460788402]) = *((_WORD *)v25 + 7);
                  v2 = dword_140404A6C[460788388];
                }
                v29 = *(v25 - 4);
                v30 = v2 - v21 - 1;
                if ( (v29 & 0xE0000000) == 0x80000000 )
                {
                  v29 = (unsigned __int16)v29;
                  v30 = v2 - v21 - dword_140404A6C[58 * (unsigned __int16)v29 + 20074647];
                  if ( (unsigned __int16)v29 >= v18 && (unsigned __int16)v29 < v17 )
                  {
                    v29 = (unsigned __int16)v29 + 1;
                    if ( (v29 & 3) == 0 )
                      v29 -= 4;
                  }
                  v29 |= 0x80000000;
                }
                v31 = 15 * (v24 + v30);
                if ( !dword_140404A6C[v31 + 460788395] )
                {
                  dword_140404A6C[v31 + 460788395] = v29;
                  LOWORD(dword_140404A6C[v31 + 460788403]) = *((_WORD *)v25 + 8);
                  HIWORD(dword_140404A6C[v31 + 460788404]) = *((_WORD *)v25 + 10);
                  LOWORD(dword_140404A6C[v31 + 460788405]) = *((_WORD *)v25 + 11);
                  HIWORD(dword_140404A6C[v31 + 460788403]) = *((_WORD *)v25 + 12);
                  LOWORD(dword_140404A6C[v31 + 460788404]) = *((_WORD *)v25 + 9);
                  HIWORD(dword_140404A6C[v31 + 460788405]) = *((_WORD *)v25 + 13);
                  LOWORD(dword_140404A6C[v31 + 460788406]) = *((_WORD *)v25 + 14);
                  HIWORD(dword_140404A6C[v31 + 460788406]) = *((_WORD *)v25 + 15);
                  v2 = dword_140404A6C[460788388];
                }
                if ( (v29 & 0xE0000000) == 0x80000000 )
                {
                  v32 = v24 + v2 - v21;
                  if ( !dword_140404A6C[15 * v32 + 460788380] )
                  {
                    dword_140404A6C[15 * v32 + 460788380] = -1073741824;
                    v2 = dword_140404A6C[460788388];
                  }
                }
                dword_140404A6C[15 * v24 + 460788378 + 15 * (v2 - v21)] = *(v25 - 6);
                dword_140404A6C[15 * v24 + 460788381 + 15 * (dword_140404A6C[460788388] - v21)] = *(v25 - 2);
                dword_140404A6C[15 * v24 + 460788383 + 15 * (dword_140404A6C[460788388] - v21)] = *(v25 - 1);
                v33 = v25[8];
                v34 = 15 * (v24 + dword_140404A6C[460788388] - v21);
                if ( v33 )
                {
                  dword_140404A6C[v34 + 460788392] = v33;
                  dword_140404A6C[15 * v24 + 460788392 + 15 * (dword_140404A6C[460788388] - v21)] &= 0xFCFFFFFF;
                  dword_140404A6C[15 * v24 + 460788392 + 15 * (dword_140404A6C[460788388] - v21)] |= ((v33 & 0xFF000000) + 0x1000000) & 0x3000000;
                }
                else
                {
                  dword_140404A6C[v34 + 460788392] = 0;
                }
                v2 = dword_140404A6C[460788388];
              }
              ++v23;
              v35 = v24 + v2 - v21;
              v24 += 64;
              v36 = 15 * v35;
              LODWORD(v35) = *(v25 - 3);
              v25 += 15;
              dword_140404A6C[v36 + 460788397] = v35;
              v3 = dword_140404A6C[460788387];
              v2 = dword_140404A6C[460788388];
            }
            while ( v23 <= (int)dword_140404A6C[460788387] );
          }
          ++v21;
          ++v22;
        }
        while ( v21 <= v2 );
        v0 = dword_140404A6C[460788389];
        v16 = v38;
      }
      ++v16;
      v20 += 4096;
      v19 += 64;
      v38 = v16;
    }
    while ( v16 < v0 );
  }
  dword_140404A6C[464720556] = dword_140404A6C[468652925];
  dword_140404A6C[464720553] = v2 - dword_140404A6C[468652922] - dword_140404A6C[468652925];
  dword_140404A6C[464720555] = dword_140404A6C[468652920];
  dword_140404A6C[464720558] = dword_140404A6C[468652923];
  dword_140404A6C[464720562] = dword_140404A6C[468652931];
  dword_140404A6C[464720559] = v2 - dword_140404A6C[468652928] - dword_140404A6C[468652931];
  dword_140404A6C[464720561] = dword_140404A6C[468652926];
  dword_140404A6C[464720564] = dword_140404A6C[468652929];
  dword_140404A6C[464720568] = dword_140404A6C[468652937];
  dword_140404A6C[464720565] = v2 - dword_140404A6C[468652937] - dword_140404A6C[468652934];
  dword_140404A6C[464720567] = dword_140404A6C[468652932];
  dword_140404A6C[464720570] = dword_140404A6C[468652935];
  dword_140404A6C[464720574] = dword_140404A6C[468652943];
  dword_140404A6C[464720571] = v2 - dword_140404A6C[468652943] - dword_140404A6C[468652940];
  dword_140404A6C[464720573] = dword_140404A6C[468652938];
  dword_140404A6C[464720576] = dword_140404A6C[468652941];
  dword_140404A6C[464720580] = dword_140404A6C[468652949];
  dword_140404A6C[464720577] = v2 - dword_140404A6C[468652949] - dword_140404A6C[468652946];
  dword_140404A6C[464720579] = dword_140404A6C[468652944];
  dword_140404A6C[464720582] = dword_140404A6C[468652947];
  dword_140404A6C[464720586] = dword_140404A6C[468652955];
  dword_140404A6C[464720583] = v2 - dword_140404A6C[468652955] - dword_140404A6C[468652952];
  dword_140404A6C[464720585] = dword_140404A6C[468652950];
  dword_140404A6C[464720588] = dword_140404A6C[468652953];
  dword_140404A6C[464720592] = dword_140404A6C[468652961];
  dword_140404A6C[464720589] = v2 - dword_140404A6C[468652961] - dword_140404A6C[468652958];
  dword_140404A6C[464720591] = dword_140404A6C[468652956];
  dword_140404A6C[464720594] = dword_140404A6C[468652959];
  dword_140404A6C[464720598] = dword_140404A6C[468652967];
  dword_140404A6C[464720595] = v2 - dword_140404A6C[468652967] - dword_140404A6C[468652964];
  dword_140404A6C[464720597] = dword_140404A6C[468652962];
  dword_140404A6C[464720600] = dword_140404A6C[468652965];
  dword_140404A6C[464720604] = dword_140404A6C[468652973];
  dword_140404A6C[460788387] = v2;
  dword_140404A6C[464720601] = v2 - dword_140404A6C[468652973] - dword_140404A6C[468652970];
  dword_140404A6C[464720603] = dword_140404A6C[468652968];
  dword_140404A6C[464720606] = dword_140404A6C[468652971];
  dword_140404A6C[464720610] = dword_140404A6C[468652979];
  dword_140404A6C[464720607] = v2 - dword_140404A6C[468652979] - dword_140404A6C[468652976];
  dword_140404A6C[464720609] = dword_140404A6C[468652974];
  dword_140404A6C[464720612] = dword_140404A6C[468652977];
  dword_140404A6C[464720616] = dword_140404A6C[468652985];
  dword_140404A6C[464720613] = v2 - dword_140404A6C[468652985] - dword_140404A6C[468652982];
  dword_140404A6C[464720615] = dword_140404A6C[468652980];
  dword_140404A6C[464720618] = dword_140404A6C[468652983];
  dword_140404A6C[464720622] = dword_140404A6C[468652991];
  dword_140404A6C[464720619] = v2 - dword_140404A6C[468652991] - dword_140404A6C[468652988];
  dword_140404A6C[464720621] = dword_140404A6C[468652986];
  dword_140404A6C[464720624] = dword_140404A6C[468652989];
  dword_140404A6C[464720628] = dword_140404A6C[468652997];
  dword_140404A6C[464720625] = v2 - dword_140404A6C[468652997] - dword_140404A6C[468652994];
  dword_140404A6C[464720627] = dword_140404A6C[468652992];
  dword_140404A6C[464720630] = dword_140404A6C[468652995];
  dword_140404A6C[464720634] = dword_140404A6C[468653003];
  dword_140404A6C[464720631] = v2 - dword_140404A6C[468653000] - dword_140404A6C[468653003];
  dword_140404A6C[464720633] = dword_140404A6C[468652998];
  dword_140404A6C[464720636] = dword_140404A6C[468653001];
  dword_140404A6C[464720640] = dword_140404A6C[468653009];
  dword_140404A6C[464720637] = v2 - dword_140404A6C[468653006] - dword_140404A6C[468653009];
  dword_140404A6C[464720639] = dword_140404A6C[468653004];
  dword_140404A6C[464720642] = dword_140404A6C[468653007];
  dword_140404A6C[464720646] = dword_140404A6C[468653015];
  dword_140404A6C[464720643] = v2 - dword_140404A6C[468653012] - dword_140404A6C[468653015];
  dword_140404A6C[464720645] = dword_140404A6C[468653010];
  dword_140404A6C[464720648] = dword_140404A6C[468653013];
  dword_140404A6C[460788388] = v3;
  return dword_140404A6C[468653013];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A704: using guessed type unsigned int;
// 14500A708: using guessed type unsigned int;
// 1AE1C94F8: using guessed type unsigned int;
// 1AE1C94FC: using guessed type unsigned int;
// 1AE1C9500: using guessed type unsigned int;
// 1AF0C9510: using guessed type unsigned int;
// 1AF0C9518: using guessed type unsigned int;
// 1AF0C951C: using guessed type unsigned int;
// 1AF0C9520: using guessed type unsigned int;
// 1AF0C9524: using guessed type unsigned int;
// 1AF0C9528: using guessed type unsigned int;
// 1AF0C9530: using guessed type unsigned int;
// 1AF0C9534: using guessed type unsigned int;
// 1AF0C9538: using guessed type unsigned int;
// 1AF0C953C: using guessed type unsigned int;
// 1AF0C9540: using guessed type unsigned int;
// 1AF0C9548: using guessed type unsigned int;
// 1AF0C954C: using guessed type unsigned int;
// 1AF0C9550: using guessed type unsigned int;
// 1AF0C9554: using guessed type unsigned int;
// 1AF0C9558: using guessed type unsigned int;
// 1AF0C9560: using guessed type unsigned int;
// 1AF0C9564: using guessed type unsigned int;
// 1AF0C9568: using guessed type unsigned int;
// 1AF0C956C: using guessed type unsigned int;
// 1AF0C9570: using guessed type unsigned int;
// 1AF0C9578: using guessed type unsigned int;
// 1AF0C957C: using guessed type unsigned int;
// 1AF0C9580: using guessed type unsigned int;
// 1AF0C9584: using guessed type unsigned int;
// 1AF0C9588: using guessed type unsigned int;
// 1AF0C9590: using guessed type unsigned int;
// 1AF0C9594: using guessed type unsigned int;
// 1AF0C9598: using guessed type unsigned int;
// 1AF0C959C: using guessed type unsigned int;
// 1AF0C95A0: using guessed type unsigned int;
// 1AF0C95A8: using guessed type unsigned int;
// 1AF0C95AC: using guessed type unsigned int;
// 1AF0C95B0: using guessed type unsigned int;
// 1AF0C95B4: using guessed type unsigned int;
// 1AF0C95B8: using guessed type unsigned int;
// 1AF0C95C0: using guessed type unsigned int;
// 1AF0C95C4: using guessed type unsigned int;
// 1AF0C95C8: using guessed type unsigned int;
// 1AF0C95CC: using guessed type unsigned int;
// 1AF0C95D0: using guessed type unsigned int;
// 1AF0C95D8: using guessed type unsigned int;
// 1AF0C95DC: using guessed type unsigned int;
// 1AF0C95E0: using guessed type unsigned int;
// 1AF0C95E4: using guessed type unsigned int;
// 1AF0C95E8: using guessed type unsigned int;
// 1AF0C95F0: using guessed type unsigned int;
// 1AF0C95F4: using guessed type unsigned int;
// 1AF0C95F8: using guessed type unsigned int;
// 1AF0C95FC: using guessed type unsigned int;
// 1AF0C9600: using guessed type unsigned int;
// 1AF0C9608: using guessed type unsigned int;
// 1AF0C960C: using guessed type unsigned int;
// 1AF0C9610: using guessed type unsigned int;
// 1AF0C9614: using guessed type unsigned int;
// 1AF0C9618: using guessed type unsigned int;
// 1AF0C9620: using guessed type unsigned int;
// 1AF0C9624: using guessed type unsigned int;
// 1AF0C9628: using guessed type unsigned int;
// 1AF0C962C: using guessed type unsigned int;
// 1AF0C9630: using guessed type unsigned int;
// 1AF0C9638: using guessed type unsigned int;
// 1AF0C963C: using guessed type unsigned int;
// 1AF0C9640: using guessed type unsigned int;
// 1AF0C9644: using guessed type unsigned int;
// 1AF0C9648: using guessed type unsigned int;
// 1AF0C9650: using guessed type unsigned int;
// 1AF0C9654: using guessed type unsigned int;
// 1AF0C9658: using guessed type unsigned int;
// 1AF0C965C: using guessed type unsigned int;
// 1AF0C9660: using guessed type unsigned int;
// 1AF0C9668: using guessed type unsigned int;
// 1AF0C966C: using guessed type unsigned int;
// 1AF0C9670: using guessed type unsigned int;
// 1AF0C9674: using guessed type unsigned int;
// 1AF0C9678: using guessed type unsigned int;
// 1AF0C9680: using guessed type unsigned int;
// 1AF0C9684: using guessed type unsigned int;
// 1AF0C9688: using guessed type unsigned int;
// 1AF0C968C: using guessed type unsigned int;
// 1AFFC984C: using guessed type unsigned int;
// 1AFFC9858: using guessed type unsigned int;
// 1AFFC985C: using guessed type unsigned int;
// 1AFFC9860: using guessed type unsigned int;
// 1AFFC9864: using guessed type unsigned int;
// 1AFFC9870: using guessed type unsigned int;
// 1AFFC9874: using guessed type unsigned int;
// 1AFFC9878: using guessed type unsigned int;
// 1AFFC987C: using guessed type unsigned int;
// 1AFFC9888: using guessed type unsigned int;
// 1AFFC988C: using guessed type unsigned int;
// 1AFFC9890: using guessed type unsigned int;
// 1AFFC9894: using guessed type unsigned int;
// 1AFFC98A0: using guessed type unsigned int;
// 1AFFC98A4: using guessed type unsigned int;
// 1AFFC98A8: using guessed type unsigned int;
// 1AFFC98AC: using guessed type unsigned int;
// 1AFFC98B8: using guessed type unsigned int;
// 1AFFC98BC: using guessed type unsigned int;
// 1AFFC98C0: using guessed type unsigned int;
// 1AFFC98C4: using guessed type unsigned int;
// 1AFFC98D0: using guessed type unsigned int;
// 1AFFC98D4: using guessed type unsigned int;
// 1AFFC98D8: using guessed type unsigned int;
// 1AFFC98DC: using guessed type unsigned int;
// 1AFFC98E8: using guessed type unsigned int;
// 1AFFC98EC: using guessed type unsigned int;
// 1AFFC98F0: using guessed type unsigned int;
// 1AFFC98F4: using guessed type unsigned int;
// 1AFFC9900: using guessed type unsigned int;
// 1AFFC9904: using guessed type unsigned int;
// 1AFFC9908: using guessed type unsigned int;
// 1AFFC990C: using guessed type unsigned int;
// 1AFFC9918: using guessed type unsigned int;
// 1AFFC991C: using guessed type unsigned int;
// 1AFFC9920: using guessed type unsigned int;
// 1AFFC9924: using guessed type unsigned int;
// 1AFFC9930: using guessed type unsigned int;
// 1AFFC9934: using guessed type unsigned int;
// 1AFFC9938: using guessed type unsigned int;
// 1AFFC993C: using guessed type unsigned int;
// 1AFFC9948: using guessed type unsigned int;
// 1AFFC994C: using guessed type unsigned int;
// 1AFFC9950: using guessed type unsigned int;
// 1AFFC9954: using guessed type unsigned int;
// 1AFFC9960: using guessed type unsigned int;
// 1AFFC9964: using guessed type unsigned int;
// 1AFFC9968: using guessed type unsigned int;
// 1AFFC996C: using guessed type unsigned int;
// 1AFFC9978: using guessed type unsigned int;
// 1AFFC997C: using guessed type unsigned int;
// 1AFFC9980: using guessed type unsigned int;
// 1AFFC9984: using guessed type unsigned int;
// 1AFFC9990: using guessed type unsigned int;
// 1AFFC9994: using guessed type unsigned int;
// 1AFFC9998: using guessed type unsigned int;
// 1AFFC999C: using guessed type unsigned int;
// 1AFFC99A8: using guessed type unsigned int;
// 1AFFC99AC: using guessed type unsigned int;
// 1AFFC99B0: using guessed type unsigned int;
// 1AFFC99B4: using guessed type unsigned int;
// 1AFFC99C0: using guessed type unsigned int;
// 1AFFC99C4: using guessed type unsigned int;
// 1AFFC99C8: using guessed type unsigned int;

//----- (0000000140028790) ----------------------------------------------------
__int64            sub_140028790(     char *a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r15
  unsigned int *v7; // rsi
  __int64 v8; // r12
  unsigned int *v9; // r14
  signed int v10; // ebp
  __int64 v11; // rdi
  signed int v12; // ebp
  __int64 v13; // rdi
  signed int v14; // ebp
  __int64 v15; // r14
  __int64 v16; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140028790[160];
#define v18 (*(__int64 (*))(void *)(sr_frame_140028790 + 0)) /* [rsp+0h] */
#define v19 (*(int (*))(void *)(sr_frame_140028790 + 32)) /* [rsp+20h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_140028790 + 40)) /* [rsp+28h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_140028790 + 48)) /* [rsp+30h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_140028790 + 56)) /* [rsp+38h] */
#define v23 (*(unsigned int * (*))(void *)(sr_frame_140028790 + 64)) /* [rsp+40h] */
#define v24 (*(char (*)[64])(void *)(sr_frame_140028790 + 80)) /* [rsp+50h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_140028790 + 144)) /* [rsp+90h] */

  v2 = a2;
  sub_140158AB0(v24, "buildblock/%s.sbl", a1);
  v3 = sub_14020B8D8(v24, "wb");
  v4 = v3;
  if ( v3 )
  {
    v19 = 1;
    (*(void (           **)(int *, __int64, __int64, __int64))&dword_140404A6C[293250405])(&v19, 4, 1, v3);
    v5 = 12352 * v2;
    v6 = 0;
    v21 = 0;
    v20 = 0;
    v22 = 16;
    v7 = &dword_140404A6C[3088 * v2 + 451024002];
    v8 = 3088 * v2;
    do
    {
      v9 = &dword_140404A6C[v8 + 451024083];
      v23 = v9;
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 94,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 93,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 92,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 91,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 90,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 88,
        4,
        1,
        v4,
        v19);
      v10 = 0;
      if ( (int)*(v7 - 7) > 0 )
      {
        do
        {
          v11 = v5 + 12 * (v6 + v10);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451023996] + v11,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451023997] + v11,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451023998] + v11,
            4,
            1,
            v4,
            v19);
          ++v10;
        }
        while ( v10 < (int)*(v7 - 7) );
        v9 = v23;
      }
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 81,
        4,
        1,
        v4,
        v19);
      v12 = 0;
      if ( (int)*v7 > 0 )
      {
        do
        {
          v13 = v8 * 4 + 20LL * v12;
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024003] + v13,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024004] + v13,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024005] + v13,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024006] + v13,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024007] + v13,
            4,
            1,
            v4,
            v19);
          ++v12;
        }
        while ( v12 < (int)*v7 );
        v6 = v20;
      }
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9,
        4,
        1,
        v4,
        v19);
      v14 = 0;
      if ( (int)v7[81] > 0 )
      {
        v15 = v21;
        do
        {
          v16 = v5 + 24 * (v15 + v14);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024084] + v16,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024086] + v16,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024087] + v16,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024088] + v16,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024089] + v16,
            4,
            1,
            v4,
            v19);
          ++v14;
        }
        while ( v14 < (int)v7[81] );
        v6 = v20;
      }
      v21 += 32;
      v6 += 64;
      v8 += 192;
      v7 += 192;
      v20 = v6;
      --v22;
    }
    while ( v22 );
    sub_14020B9E8(v4);
  }
  return 0; /* the function has no caller */
}
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE000: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);

//----- (0000000140028BD0) ----------------------------------------------------
__int64 sub_140028BD0()
{
  unsigned int *v0; // rbx
  signed int v1; // eax
  signed int v2; // esi
  int v3; // r11d
  signed int v4; // r9d
  unsigned int *v5; // r10
  unsigned int *v6; // rax
  int v7; // ecx
  int v8; // edx
  unsigned int *v9; // rbx
  signed int v10; // eax
  signed int v11; // esi
  int v12; // r11d
  signed int v13; // r9d
       char *v14; // r10
  unsigned int *v15; // rbx
  signed int v16; // eax
  signed int v17; // esi
  int v18; // r11d
  signed int v19; // r9d
  unsigned int *v20; // r10
  unsigned int *v21; // rax
  int v22; // ecx
  int v23; // edx
  signed int v24; // edx
  signed int v25; // esi
  __int64 result; // rax
  int v27; // ecx
  __int64 v28; // rdi
  int v29; // r11d
  __int64 v30; // rbx
  int v31; // r10d
  __int64 v32; // rcx
  unsigned int *v33; // rdx
  _WORD *v34; // r9
  unsigned int v35; // r8d
  unsigned int v36; // r8d
  __int16 v37; // cx
  __int16 v38; // ax
  __int16 v39; // cx
  __int16 v40; // ax
  __int16 v41; // cx
  __int16 v42; // ax
  __int16 v43; // cx
  __int16 v44; // ax
  __int16 v45; // cx
  __int16 v46; // ax
  __int16 v47; // cx
  __int16 v48; // ax
  __int16 v49; // cx
  int v50; // ecx
  unsigned int v51; // eax

  v0 = &dword_140404A6C[468657209];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[468657209]), 0, 0x400u);
  v1 = dword_140404A6C[468653112];
  v2 = 0;
  if ( (int)dword_140404A6C[468653112] > 0 )
  {
    v3 = dword_140404A6C[421784253];
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &dword_140404A6C[421784739];
        do
        {
          v6 = &dword_140404A6C[16 * (__int64)v2 + 468653113];
          do
          {
            v7 = *((unsigned __int8 *)v6 + ((char *)v5 - (char *)&dword_140404A6C[16 * (__int64)v2 + 468653113]));
            v8 = *(unsigned __int8 *)v6 - v7;
            if ( v8 )
              break;
            v6 = (unsigned int *)((char *)v6 + 1);
          }
          while ( v7 );
          if ( !v8 )
            *v0 = v4;
          ++v4;
          v5 += 46;
        }
        while ( v4 < v3 );
        v1 = dword_140404A6C[468653112];
      }
      ++v2;
      ++v0;
    }
    while ( v2 < v1 );
  }
  v9 = &dword_140404A6C[468674618];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[468674618]), 0, 0x1000u);
  v10 = dword_140404A6C[468658233];
  v11 = 0;
  if ( (int)dword_140404A6C[468658233] > 0 )
  {
    v12 = dword_140404A6C[19928869];
    do
    {
      v13 = 0;
      if ( v12 > 0 )
      {
        v14 = (     char *)&dword_140404A6C[20074597];
        do
        {
          if ( !strcmp_sr((     char *)&dword_140404A6C[16 * (__int64)v11 + 468658234], v14) )
            *v9 = v13;
          ++v13;
          v14 += 232;
        }
        while ( v13 < v12 );
        v10 = dword_140404A6C[468658233];
      }
      ++v11;
      ++v9;
    }
    while ( v11 < v10 );
  }
  sub_140027690();
  v15 = &dword_140404A6C[468693308];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[468693308]), 0, 0x1000u);
  v16 = dword_140404A6C[468676923];
  v17 = 0;
  if ( (int)dword_140404A6C[468676923] > 0 )
  {
    v18 = dword_140404A6C[273270149];
    do
    {
      v19 = 0;
      if ( v18 > 0 )
      {
        v20 = &dword_140404A6C[272299397];
        do
        {
          v21 = &dword_140404A6C[16 * (__int64)v17 + 468676924];
          do
          {
            v22 = *((unsigned __int8 *)v21 + ((char *)v20 - (char *)&dword_140404A6C[16 * (__int64)v17 + 468676924]));
            v23 = *(unsigned __int8 *)v21 - v22;
            if ( v23 )
              break;
            v21 = (unsigned int *)((char *)v21 + 1);
          }
          while ( v22 );
          if ( !v23 )
            *v15 = v19;
          ++v19;
          v20 += 948;
        }
        while ( v19 < v18 );
        v16 = dword_140404A6C[468676923];
      }
      ++v17;
      ++v15;
    }
    while ( v17 < v16 );
  }
  v24 = dword_140404A6C[456856223];
  v25 = 0;
  result = dword_140404A6C[456856221];
  v27 = dword_140404A6C[456856222];
  dword_140404A6C[460788387] = dword_140404A6C[456856221];
  dword_140404A6C[460788388] = dword_140404A6C[456856222];
  dword_140404A6C[460788389] = dword_140404A6C[456856223];
  if ( (int)dword_140404A6C[456856223] > 0 )
  {
    v28 = 0;
    do
    {
      v29 = 0;
      v30 = 0;
      if ( v27 >= 0 )
      {
        do
        {
          v31 = 0;
          if ( (int)result >= 0 )
          {
            v32 = 960 * (v28 + v30);
            v33 = &dword_140404A6C[v32 + 460788394];
            v34 = (_WORD *)&dword_140404A6C[v32 + 460788399] + 1;
            do
            {
              v35 = *(v33 - 3932166);
              *v33 = v35;
              if ( (v35 & 0xE0000000) == 0x80000000 )
                *v33 = (HIBYTE(v35) & 3) + (dword_140404A6C[(v35 & 0x3FF) + 468674618] | 0x80000000);
              v36 = *(v33 - 3932165);
              v33[1] = v36;
              if ( (v36 & 0xE0000000) == 0x80000000 )
                v33[1] = (HIBYTE(v36) & 3) + (dword_140404A6C[(v36 & 0x3FF) + 468674618] | 0x80000000);
              *(v33 - 1) = dword_140404A6C[*(v33 - 3932167) + 468675899];
              v33[2] = *(v33 - 3932164);
              v33[3] = *(v33 - 3932163);
              v33[4] = *(v33 - 3932162);
              v37 = *(v34 - 7864332);
              *(v34 - 1) = *(v34 - 7864333) & 0xFF00
                         | LOWORD(dword_140404A6C[(unsigned __int8)*(v34 - 7864333) + 468657209]);
              v38 = v37 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v37 + 468657209]);
              v39 = *(v34 - 7864331);
              *v34 = v38;
              v40 = v39 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v39 + 468657209]);
              v41 = *(v34 - 7864330);
              v34[1] = v40;
              v42 = v41 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v41 + 468657209]);
              v43 = *(v34 - 7864329);
              v34[2] = v42;
              v44 = v43 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v43 + 468657209]);
              v45 = *(v34 - 7864328);
              v34[3] = v44;
              v46 = v45 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v45 + 468657209]);
              v47 = *(v34 - 7864327);
              v34[4] = v46;
              v48 = v47 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v47 + 468657209]);
              v49 = *(v34 - 7864326);
              v34[5] = v48;
              v34[6] = v49 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v49 + 468657209]);
              v34[7] = dword_140404A6C[(unsigned __int8)*(v34 - 7864325) + 468657209];
              v34[8] = dword_140404A6C[(unsigned __int8)*(v34 - 7864324) + 468657209];
              v34[9] = dword_140404A6C[(unsigned __int8)*(v34 - 7864323) + 468657209];
              v34[10] = dword_140404A6C[(unsigned __int8)*(v34 - 7864322) + 468657209];
              v34[11] = dword_140404A6C[(unsigned __int8)*(v34 - 7864321) + 468657209];
              v34[12] = dword_140404A6C[(unsigned __int8)*(v34 - 7864320) + 468657209];
              v34[13] = dword_140404A6C[(unsigned __int8)*(v34 - 7864319) + 468657209];
              v34[14] = dword_140404A6C[(unsigned __int8)*(v34 - 7864318) + 468657209];
              v50 = *(v33 - 3932153);
              if ( v50 )
                v51 = dword_140404A6C[(v50 & 0x3FF) + 468693308] | v50 & 0x3000000 | 0x40000000;
              else
                v51 = 0;
              v33[13] = v51;
              ++v31;
              result = dword_140404A6C[460788387];
              v33 += 15;
              v34 += 30;
            }
            while ( v31 <= (int)dword_140404A6C[460788387] );
            v27 = dword_140404A6C[460788388];
          }
          ++v29;
          ++v30;
        }
        while ( v29 <= v27 );
        v24 = dword_140404A6C[460788389];
      }
      ++v25;
      v28 += 64;
    }
    while ( v25 < v24 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A700: using guessed type unsigned int;
// 181676080: using guessed type unsigned int;
// 1A4CFF560: using guessed type unsigned int;
// 1AD2C94E0: using guessed type unsigned int;
// 1AD2C94E4: using guessed type unsigned int;
// 1AD2C94E8: using guessed type unsigned int;
// 1AE1C94F8: using guessed type unsigned int;
// 1AE1C94FC: using guessed type unsigned int;
// 1AE1C9500: using guessed type unsigned int;
// 1AFFC9B4C: using guessed type unsigned int;
// 1AFFCEB50: using guessed type unsigned int;
// 1AFFE0F58: using guessed type unsigned int;

//----- (0000000140029120) ----------------------------------------------------
__int64 sub_140029120()
{
  int v0; // ecx
  int v1; // r12d
  int v2; // ebp
  int v3; // r13d
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r11
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int *v11; // r8
  __int64 v12; // rbx
  _WORD *v13; // rcx
  unsigned int *v14; // r9
  unsigned int *v15; // rdx
  __int64 v16; // r10
  unsigned int v17; // eax
  __int64 result; // rax
  signed int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 v28; // rbp
  unsigned int v29; // edx
  int v30; // edi
  __int64 i; // rsi
  unsigned int v32; // eax
  unsigned int v33; // r8d
  unsigned int v34; // r10d
  __int64 v35; // r11
  int v36; // ecx
  unsigned int v37; // r9d
  unsigned int *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned int v41; // eax
  unsigned int v42; // r8d
  unsigned int v43; // r10d
  __int64 v44; // r11
  int v45; // ecx
  unsigned int v46; // r9d
  unsigned int *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // eax
  unsigned int v51; // r8d
  unsigned int v52; // r10d
  __int64 v53; // r11
  int v54; // ecx
  unsigned int v55; // r9d
  unsigned int *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned int v59; // eax
  unsigned int v60; // r8d
  unsigned int v61; // r10d
  __int64 v62; // r11
  int v63; // ecx
  unsigned int v64; // r9d
  unsigned int *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140029120[128];
#define v68 (*(__int64 (*))(void *)(sr_frame_140029120 + 0)) /* [rsp+0h] */
#define v69 (*(__int64 (*))(void *)(sr_frame_140029120 + 8)) /* [rsp+8h] */
#define v70 (*(int (*))(void *)(sr_frame_140029120 + 96)) /* [rsp+60h] */
#define v71 (*(__int64 (*))(void *)(sr_frame_140029120 + 112)) /* [rsp+70h] */
#define v72 (*(__int64 (*))(void *)(sr_frame_140029120 + 120)) /* [rsp+78h] */

  v0 = dword_140404A6C[460788389];
  v1 = dword_140404A6C[460788388];
  v2 = 0;
  if ( (int)dword_140404A6C[460788389] > 0 )
  {
    v3 = dword_140404A6C[460788387];
    v4 = 0;
    do
    {
      v5 = 0;
      if ( v1 >= 0 )
      {
        v6 = (unsigned int)(v1 + 1);
        do
        {
          v7 = 0;
          if ( v3 >= 0 )
          {
            v8 = v0 - 1;
            v9 = v5 + (v4 << 6);
            v10 = 960 * v9;
            v11 = &dword_140404A6C[1216 * v9 + 451221710];
            v12 = (unsigned int)(v3 + 1);
            v13 = (_WORD *)&dword_140404A6C[451221717 + 1216 * v9];
            v14 = &dword_140404A6C[v10 + 460788395];
            v15 = &dword_140404A6C[v10 + 460788400];
            do
            {
              *(v11 - 1) = *(v14 - 1);
              *v11 = *v14;
              *(v13 - 2) = *((_WORD *)v15 - 2);
              *(v13 - 1) = *((_WORD *)v15 - 1);
              *v13 = *(_WORD *)v15;
              v13[1] = *((_WORD *)v15 + 1);
              v13[2] = *((_WORD *)v15 + 2);
              v13[3] = *((_WORD *)v15 + 3);
              v13[4] = *((_WORD *)v15 + 4);
              v13[5] = *((_WORD *)v15 + 5);
              v13[6] = *((_WORD *)v15 + 6);
              v13[7] = *((_WORD *)v15 + 7);
              v13[8] = *((_WORD *)v15 + 8);
              v13[9] = *((_WORD *)v15 + 9);
              v13[10] = *((_WORD *)v15 + 10);
              v13[11] = *((_WORD *)v15 + 11);
              v13[12] = *((_WORD *)v15 + 12);
              v13[13] = *((_WORD *)v15 + 13);
              *((_QWORD *)v11 + 2) = v14[3];
              if ( v2 >= v8
                || (v16 = 15 * (v7 + ((v5 + ((v4 + 1) << 6)) << 6)), !dword_140404A6C[v16 + 460788394])
                || !dword_140404A6C[v16 + 460788395]
                || dword_140404A6C[v16 + 460788398] )
              {
                v11[5] = 1;
              }
              ++v7;
              v11[1] = *(v14 - 2);
              v15 += 15;
              v13 += 38;
              v11[2] = v14[1];
              v11[3] = v14[2];
              v17 = v14[12];
              v14 += 15;
              v11[17] = v17;
              v11 += 19;
              --v12;
            }
            while ( v12 );
            v0 = dword_140404A6C[460788389];
          }
          ++v5;
          --v6;
        }
        while ( v6 );
        v1 = dword_140404A6C[460788388];
      }
      ++v2;
      ++v4;
    }
    while ( v2 < v0 );
  }
  result = 0;
  v70 = 0;
  if ( v0 > 0 )
  {
    v19 = dword_140404A6C[421769141];
    v20 = 0;
    v69 = 0;
    do
    {
      v21 = 0;
      v72 = 0;
      if ( v1 >= 0 )
      {
        v22 = dword_140404A6C[460788387];
        v23 = (unsigned int)(v1 + 1);
        v68 = v23;
        do
        {
          v24 = 0;
          if ( v22 >= 0 )
          {
            v25 = (unsigned int)(v22 + 1);
            v26 = v21 + (v20 << 6);
            v71 = v25;
            v27 = 2432 * v26;
            v28 = 1216 * v26;
            do
            {
              if ( dword_140404A6C[v28 + 451221709] == 0x40000000 )
              {
                v29 = dword_140404A6C[v28 + 451221710];
                if ( v29 == 0xFFFF
                  || !v29
                  || dword_140404A6C[58 * (unsigned __int16)v29 + 20074650]
                  || (v29 & 0xC0000000) == 0xC0000000 )
                {
                  v30 = 1;
                  for ( i = 1; i < 5; i += 4 )
                  {
                    switch ( i )
                    {
                      case 1LL:
                        v32 = dword_140404A6C[1216 * v26 + 451222928 + 19 * v24];
                        break;
                      case 2LL:
                        v32 = dword_140404A6C[v28 + 451221713];
                        break;
                      case 3LL:
                        v32 = dword_140404A6C[v28 + 451221712];
                        break;
                      default:
                        v32 = dword_140404A6C[v28 + 451221732];
                        break;
                    }
                    v33 = v32 - 3;
                    if ( v32 - 3 <= 0xC )
                    {
                      v34 = dword_140404A6C[v28 + 451221711];
                      v35 = 2 * (v27 + i) + 1809100220;
                      v36 = 0;
                      v37 = *(unsigned __int16 *)((char *)&dword_140404A6C[451221716] + 2 * (v27 + i));
                      v38 = &dword_140404A6C[421769143];
                      v39 = 0;
                      do
                      {
                        if ( v36 >= v19 )
                          break;
                        if ( *(v38 - 1) == v37 && *v38 == v34 && v38[1] == v33 )
                          goto LABEL_46;
                        ++v36;
                        ++v39;
                        v38 += 3;
                      }
                      while ( (__int64)v38 < (__int64)&dword_140404A6C[421781431] );
                      if ( v36 < 4096 )
                      {
                        v40 = 3 * v39;
                        v19 = v36 + 1;
                        dword_140404A6C[v40 + 421769142] = v37;
                        dword_140404A6C[v40 + 421769143] = v34;
                        dword_140404A6C[v40 + 421769144] = v33;
                        dword_140404A6C[421769141] = v36 + 1;
                      }
                      else
                      {
                        LOWORD(v36) = 0;
                      }
LABEL_46:
                      *(_WORD *)((char *)&dword_140404A6C[451221716] + 2 * (v27 + i)) = v36 + 0x8000;
                    }
                    if ( v30 )
                    {
                      if ( v30 == 1 )
                      {
                        v41 = dword_140404A6C[v28 + 451221713];
                      }
                      else if ( v30 == 2 )
                      {
                        v41 = dword_140404A6C[v28 + 451221712];
                      }
                      else
                      {
                        v41 = dword_140404A6C[v28 + 451221732];
                      }
                    }
                    else
                    {
                      v41 = dword_140404A6C[1216 * v26 + 451222928 + 19 * v24];
                    }
                    v42 = v41 - 3;
                    if ( v41 - 3 <= 0xC )
                    {
                      v43 = dword_140404A6C[v28 + 451221711];
                      v44 = 2 * (v27 + i) + 1809100222;
                      v45 = 0;
                      v46 = *(unsigned __int16 *)((char *)&dword_140404A6C[451221717] + 2 * (v27 + i));
                      v47 = &dword_140404A6C[421769143];
                      v48 = 0;
                      do
                      {
                        if ( v45 >= v19 )
                          break;
                        if ( *(v47 - 1) == v46 && *v47 == v43 && v47[1] == v42 )
                          goto LABEL_64;
                        ++v45;
                        ++v48;
                        v47 += 3;
                      }
                      while ( (__int64)v47 < (__int64)&dword_140404A6C[421781431] );
                      if ( v45 < 4096 )
                      {
                        v49 = 3 * v48;
                        dword_140404A6C[v49 + 421769142] = v46;
                        v19 = v45 + 1;
                        dword_140404A6C[v49 + 421769143] = v43;
                        dword_140404A6C[v49 + 421769144] = v42;
                        dword_140404A6C[421769141] = v45 + 1;
                      }
                      else
                      {
                        LOWORD(v45) = 0;
                      }
LABEL_64:
                      *(_WORD *)((char *)&dword_140404A6C[451221717] + 2 * (v27 + i)) = v45 + 0x8000;
                    }
                    if ( v30 == -1 )
                    {
                      v50 = dword_140404A6C[1216 * v26 + 451222928 + 19 * v24];
                    }
                    else if ( v30 )
                    {
                      if ( v30 == 1 )
                        v50 = dword_140404A6C[v28 + 451221712];
                      else
                        v50 = dword_140404A6C[v28 + 451221732];
                    }
                    else
                    {
                      v50 = dword_140404A6C[v28 + 451221713];
                    }
                    v51 = v50 - 3;
                    if ( v50 - 3 <= 0xC )
                    {
                      v52 = dword_140404A6C[v28 + 451221711];
                      v53 = 2 * (v27 + i) + 1809100224;
                      v54 = 0;
                      v55 = *(unsigned __int16 *)((char *)&dword_140404A6C[451221718] + 2 * (v27 + i));
                      v56 = &dword_140404A6C[421769143];
                      v57 = 0;
                      do
                      {
                        if ( v54 >= v19 )
                          break;
                        if ( *(v56 - 1) == v55 && *v56 == v52 && v56[1] == v51 )
                          goto LABEL_82;
                        ++v54;
                        ++v57;
                        v56 += 3;
                      }
                      while ( (__int64)v56 < (__int64)&dword_140404A6C[421781431] );
                      if ( v54 < 4096 )
                      {
                        v58 = 3 * v57;
                        dword_140404A6C[v58 + 421769142] = v55;
                        v19 = v54 + 1;
                        dword_140404A6C[v58 + 421769143] = v52;
                        dword_140404A6C[v58 + 421769144] = v51;
                        dword_140404A6C[421769141] = v54 + 1;
                      }
                      else
                      {
                        LOWORD(v54) = 0;
                      }
LABEL_82:
                      *(_WORD *)((char *)&dword_140404A6C[451221718] + 2 * (v27 + i)) = v54 + 0x8000;
                    }
                    if ( v30 == -2 )
                    {
                      v59 = dword_140404A6C[1216 * v26 + 451222928 + 19 * v24];
                    }
                    else if ( v30 == -1 )
                    {
                      v59 = dword_140404A6C[v28 + 451221713];
                    }
                    else if ( v30 )
                    {
                      v59 = dword_140404A6C[v28 + 451221732];
                    }
                    else
                    {
                      v59 = dword_140404A6C[v28 + 451221712];
                    }
                    v60 = v59 - 3;
                    if ( v59 - 3 <= 0xC )
                    {
                      v61 = dword_140404A6C[v28 + 451221711];
                      v62 = 2 * (v27 + i) + 1809100226;
                      v63 = 0;
                      v64 = *(unsigned __int16 *)((char *)&dword_140404A6C[451221719] + 2 * (v27 + i));
                      v65 = &dword_140404A6C[421769143];
                      v66 = 0;
                      do
                      {
                        if ( v63 >= v19 )
                          break;
                        if ( *(v65 - 1) == v64 && *v65 == v61 && v65[1] == v60 )
                          goto LABEL_100;
                        ++v63;
                        ++v66;
                        v65 += 3;
                      }
                      while ( (__int64)v65 < (__int64)&dword_140404A6C[421781431] );
                      if ( v63 < 4096 )
                      {
                        v67 = 3 * v66;
                        dword_140404A6C[v67 + 421769142] = v64;
                        v19 = v63 + 1;
                        dword_140404A6C[v67 + 421769143] = v61;
                        dword_140404A6C[v67 + 421769144] = v60;
                        dword_140404A6C[421769141] = v63 + 1;
                      }
                      else
                      {
                        LOWORD(v63) = 0;
                      }
LABEL_100:
                      *(_WORD *)((char *)&dword_140404A6C[451221719] + 2 * (v27 + i)) = v63 + 0x8000;
                    }
                    v30 += 4;
                  }
                  v25 = v71;
                }
              }
              ++v24;
              v28 += 19;
              v27 += 38;
              v71 = --v25;
            }
            while ( v25 );
            v21 = v72;
            v23 = v68;
            v20 = v69;
            v22 = dword_140404A6C[460788387];
          }
          ++v21;
          --v23;
          v72 = v21;
          v68 = v23;
        }
        while ( v23 );
        LODWORD(result) = v70;
        v1 = dword_140404A6C[460788388];
      }
      result = (unsigned int)(result + 1);
      ++v20;
      v70 = result;
      v69 = v20;
    }
    while ( (int)result < (int)dword_140404A6C[460788389] );
  }
  return result;
}
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A4CF0940: using guessed type unsigned int;
// 1AE1C94F8: using guessed type unsigned int;
// 1AE1C94FC: using guessed type unsigned int;
// 1AE1C9500: using guessed type unsigned int;

//----- (0000000140029800) ----------------------------------------------------
__int64            sub_140029800(__int64 a1, __int64 a2, int a3)
{
  int v4; // ebx
  int *v6; // rdi
  int v8; // r12d
  int *v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140029800[112];
#define v16 (*(int (*))(void *)(sr_frame_140029800 + 0)) /* [rsp+20h] */
#define v18 (*(int (*))(void *)(sr_frame_140029800 + 104)) /* [rsp+88h] */

  v18 = 1;
  v4 = a3;
  if ( a3 )
  {
    sub_14020CE0C((__int64)&v18, 4, 1, a2);
    v6 = (int *)(a1 + 47352508);
    sub_14020CE0C(a1 + 47352508, 4, 1, a2);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&v18), 4, 1, (FILE *)(uintptr_t)(a2));
    if ( v18 != 1 )
      return 0;
    v6 = (int *)(a1 + 47352508);
    fread_sr((void *)(uintptr_t)(a1 + 47352508), 4, 1, (FILE *)(uintptr_t)(a2));
  }
  v8 = 0;
  v16 = 0;
  if ( *v6 > 0 )
  {
    v9 = (int *)(a1 + 47352512);
    do
    {
      v10 = 1028LL * v8;
      v11 = v10 + a1 + 47352512;
      if ( v4 )
        sub_14020CE0C(v11, 4, 1, a2);
      else
        fread_sr((void *)(uintptr_t)(v11), 4, 1, (FILE *)(uintptr_t)(a2));
      v12 = 0;
      if ( *v9 > 0 )
      {
        do
        {
          v13 = v10 + 16LL * v12;
          v14 = v13 + a1 + 47352516;
          v15 = v13 + a1;
          if ( a3 )
          {
            sub_14020CE0C(v14, 4, 3, a2);
            sub_14020CE0C(v15 + 47352528, 4, 1, a2);
          }
          else
          {
            fread_sr((void *)(uintptr_t)(v14), 4, 3, (FILE *)(uintptr_t)(a2));
            fread_sr((void *)(uintptr_t)(v15 + 47352528), 4, 1, (FILE *)(uintptr_t)(a2));
          }
          ++v12;
        }
        while ( v12 < *v9 );
        v8 = v16;
      }
      v4 = a3;
      ++v8;
      v9 += 257;
      v16 = v8;
    }
    while ( v8 < *v6 );
  }
  return 1;
}
#undef v16
#undef v18

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);

//----- (00000001400299C0) ----------------------------------------------------
__int64 sub_1400299C0()
{
  unsigned int *v0; // rdx
  __int64 v1; // r12
  float *v2; // rsi
  __int64 v3; // r13
  float *v4; // rbp
  __int64 v5; // r9
  int v6; // r15d
  unsigned int *v7; // rbx
  unsigned int *v8; // r8
  unsigned int v9; // eax
  float v10; // xmm1_4
  float v11; // xmm0_4
  float *v12; // rsi
  int *v13; // rdi
  int *v14; // rbx
  __int64 v15; // r14
  double v16; // xmm0_8
  int v17; // eax
  double v18; // xmm0_8
  double v19; // xmm2_8
  double v20; // xmm1_8
  double v21; // xmm4_8
  double v22; // xmm3_8
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 v27; // r13
  float *v28; // rdi
  float *v29; // rbp
  __int64 v30; // r12
  unsigned int *v31; // rsi
  unsigned int *v32; // rbx
  unsigned int *v33; // r14
  unsigned int v34; // eax
  float v35; // xmm1_4
  float v36; // xmm0_4
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // ecx
  int v59; // eax
  int v60; // ecx
  int v61; // eax
  __int64 v62; // r12
  _DWORD *v63; // rbx
  _DWORD *v64; // r14
  unsigned int *v65; // rsi
  float *v66; // rdi
  float *v67; // rbp
  int v68; // eax
  float v69; // xmm1_4
  float v70; // xmm0_4
  signed int v71; // r9d
  _DWORD *v72; // r10
  int *v73; // rdx
  unsigned int *v74; // r11
  float *v75; // r8
  float v76; // xmm1_4
  float v77; // xmm0_4
  int v78; // eax
  float v79; // xmm0_4
  int v80; // eax
  float v81; // xmm1_4
  float v82; // xmm0_4
  int v83; // eax
  float v84; // xmm0_4
  int v85; // eax
  float v86; // xmm1_4
  float v87; // xmm0_4
  int v88; // eax
  float v89; // xmm0_4
  int v90; // eax
  float v91; // xmm1_4
  float v92; // xmm0_4
  int v93; // eax
  float v94; // xmm0_4
  int v95; // eax
  float v96; // xmm1_4
  float v97; // xmm0_4
  int v98; // eax
  float v99; // xmm0_4
  int v100; // eax
  float v101; // xmm1_4
  float v102; // xmm0_4
  int v103; // eax
  float v104; // xmm0_4
  int v105; // eax
  float v106; // xmm1_4
  float v107; // xmm0_4
  int v108; // eax
  float v109; // xmm0_4
  int v110; // eax
  float v111; // xmm1_4
  float v112; // xmm0_4
  int v113; // eax
  float v114; // xmm0_4
  int v115; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400299C0[128];
#define v117 (*(__int64 (*))(void *)(sr_frame_1400299C0 + 8)) /* [rsp+0h] */
#define v118 (*(unsigned int * (*))(void *)(sr_frame_1400299C0 + 40)) /* [rsp+20h] */
#define v119 (*(unsigned int * (*))(void *)(sr_frame_1400299C0 + 48)) /* [rsp+28h] */
#define v120 (*(unsigned int * (*))(void *)(sr_frame_1400299C0 + 56)) /* [rsp+30h] */
#define v121 (*(unsigned int * (*))(void *)(sr_frame_1400299C0 + 64)) /* [rsp+38h] */
#define v122 (*(unsigned int * (*))(void *)(sr_frame_1400299C0 + 72)) /* [rsp+40h] */
#define v123 (*(__int64 (*))(void *)(sr_frame_1400299C0 + 80)) /* [rsp+48h] */
#define v124 (*(unsigned __int64 (*))(void *)(sr_frame_1400299C0 + 88)) /* [rsp+50h] */
#define v125 (*(__m128 (*))(void *)(sr_frame_1400299C0 + 96)) /* [rsp+58h] */
#define v126 (*(__int64 (*))(void *)(sr_frame_1400299C0 + 112)) /* [rsp+68h] */

  v0 = &dword_140404A6C[282485789];
  v1 = dword_140301DF4;
  v2 = (float *)&dword_140404A6C[280651440];
  v3 = dword_140301DF0;
  v4 = (float *)&dword_140404A6C[280651493];
  v5 = 256;
  v6 = 2;
  v121 = &dword_140404A6C[282485789];
  v124 = 318464LL * LOBYTE(dword_140404A6C[456202728]);
  v7 = &dword_140404A6C[v124 / 4 + 137297855];
  v120 = &dword_140404A6C[280651440];
  v119 = &dword_140404A6C[280651493];
  v8 = &dword_140404A6C[v124 / 4 + 137297858];
  v122 = v7;
  v118 = v8;
  v123 = 256;
  do
  {
    v9 = *((_DWORD *)v2 - 137);
    *(v7 - 2) = v9;
    if ( v9 )
    {
      v10 = (float)(v2[2] * 4096.0) + 16777216.0;
      v11 = v2[1];
      *v7 = (int)(float)((float)(*v2 * 4096.0) + 16777216.0);
      v7[1] = (int)(float)(v11 * 4096.0);
      v7[2] = (int)v10;
      sub_140114D40(v8, v4 - 41);
      v12 = v2 + 51;
      v13 = (int *)(v7 + 8);
      v14 = (int *)(v7 + 55);
      v15 = 16;
      do
      {
        v16 = *v12;
        *(v13 - 1) = (int)(*(v12 - 1) * 2607.594587617441 + 8192.0) & 0x3FFF;
        v17 = (int)(v16 * 2607.594587617441 + 8192.0);
        v18 = v12[1];
        *v13 = v17 & 0x3FFF;
        v13[1] = (int)(v18 * 2607.594587617441 + 8192.0) & 0x3FFF;
        sub_14010E370(SR_VEC_LANES(128, v125, f32), v4);
        v19 = fabs(SR_VEC_LANES(128, v125, f32)[1]);
        v20 = fabs(SR_VEC_LANES(128, v125, f32)[0]);
        v21 = v20;
        if ( v20 < v19 )
          v20 = v19;
        v22 = fabs(SR_VEC_LANES(128, v125, f32)[2]);
        v23 = v19 > v21;
        v24 = v19 > v21;
        if ( v20 < v22 )
        {
          v23 = 2;
          v24 = 2;
          v20 = v22;
        }
        if ( v20 < fabs(SR_VEC_LANES(128, v125, f32)[3]) )
        {
          v23 = 3;
          v24 = 3;
        }
        if ( SR_VEC_LANES(128, v125, f32)[v24] < 0.0 )
          v125 = _mm_xor_ps(v125, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
        v25 = dword_140301DE8;
        v26 = 1;
        *v14 = v23;
        if ( (_DWORD)v25 != v23 )
        {
          v26 = 2;
          v14[1] = (int)(SR_VEC_LANES(128, v125, f32)[v25] * 1447.447581088863);
        }
        if ( dword_140301DEC != v23 )
          v14[v26++] = (int)(SR_VEC_LANES(128, v125, f32)[dword_140301DEC] * 1447.447581088863);
        if ( (_DWORD)v3 != v23 )
          v14[v26++] = (int)(SR_VEC_LANES(128, v125, f32)[v3] * 1447.447581088863);
        if ( (_DWORD)v1 != v23 )
          v14[v26] = (int)(SR_VEC_LANES(128, v125, f32)[v1] * 1447.447581088863);
        v4 += 78;
        v14 += 4;
        v12 += 78;
        v13 += 3;
        --v15;
      }
      while ( v15 );
      v0 = v121;
      v7 = v122;
      v2 = (float *)v120;
      v4 = (float *)v119;
      v8 = v118;
      v5 = v123;
      *(v122 - 1) = *v121;
    }
    v8 += 121;
    v4 += 7166;
    v2 += 7166;
    v118 = v8;
    ++v0;
    v119 = (unsigned int *)v4;
    v7 += 121;
    v120 = (unsigned int *)v2;
    --v5;
    v121 = v0;
    v123 = v5;
    v122 = v7;
  }
  while ( v5 );
  v27 = v124;
  v28 = (float *)&dword_140404A6C[129716720];
  v29 = (float *)&dword_140404A6C[129716726];
  v30 = 512;
  v31 = &dword_140404A6C[v124 / 4 + 137328837];
  v32 = &dword_140404A6C[v124 / 4 + 137328839];
  v33 = &dword_140404A6C[v124 / 4 + 137328833];
  do
  {
    v34 = *((_DWORD *)v28 - 11);
    *(v31 - 8) = v34;
    if ( v34 )
    {
      v35 = (float)(v28[2] * 4096.0) + 16777216.0;
      v36 = v28[1];
      *(v31 - 7) = (int)(float)((float)(*v28 * 4096.0) + 16777216.0);
      *(v31 - 6) = (int)(float)(v36 * 4096.0);
      *(v31 - 5) = (int)v35;
      sub_140114D40(v33, v29);
      v37 = (int)(v28[3652] * 81.16902097686128);
      *v31 = v37;
      if ( v37 >= -255 )
      {
        if ( v37 > 255 )
          *v31 = 255;
      }
      else
      {
        *v31 = -255;
      }
      v38 = (int)(float)(v28[3682] * 255.0);
      *(v32 - 1) = v38;
      if ( v38 >= 0 )
      {
        v39 = v38;
        if ( v38 > 255 )
          v39 = 255;
        *(v32 - 1) = v39;
      }
      else
      {
        *(v32 - 1) = 0;
      }
      v40 = (int)(float)(v28[3670] * 255.0);
      *v32 = v40;
      if ( v40 >= -255 )
      {
        v41 = v40;
        if ( v40 > 255 )
          v41 = 255;
        *v32 = v41;
      }
      else
      {
        *v32 = -255;
      }
      v42 = (int)(float)(v28[3687] * 255.0);
      v32[1] = v42;
      if ( v42 >= 0 )
      {
        v43 = v42;
        if ( v42 > 255 )
          v43 = 255;
        v32[1] = v43;
      }
      else
      {
        v32[1] = 0;
      }
      v44 = (int)(float)(v28[3725] * 255.0);
      v32[2] = v44;
      if ( v44 >= 0 )
      {
        v45 = v44;
        if ( v44 > 255 )
          v45 = 255;
        v32[2] = v45;
      }
      else
      {
        v32[2] = 0;
      }
      v46 = (int)(float)(v28[3713] * 255.0);
      v32[3] = v46;
      if ( v46 >= -255 )
      {
        v47 = v46;
        if ( v46 > 255 )
          v47 = 255;
        v32[3] = v47;
      }
      else
      {
        v32[3] = -255;
      }
      v48 = (int)(float)(v28[3730] * 255.0);
      v32[4] = v48;
      if ( v48 >= 0 )
      {
        v49 = v48;
        if ( v48 > 255 )
          v49 = 255;
        v32[4] = v49;
      }
      else
      {
        v32[4] = 0;
      }
      v50 = (int)(float)(v28[3768] * 255.0);
      v32[5] = v50;
      if ( v50 >= 0 )
      {
        v51 = v50;
        if ( v50 > 255 )
          v51 = 255;
        v32[5] = v51;
      }
      else
      {
        v32[5] = 0;
      }
      v52 = (int)(float)(v28[3756] * 255.0);
      v32[6] = v52;
      if ( v52 >= -255 )
      {
        v53 = v52;
        if ( v52 > 255 )
          v53 = 255;
        v32[6] = v53;
      }
      else
      {
        v32[6] = -255;
      }
      v54 = (int)(float)(v28[3773] * 255.0);
      v32[7] = v54;
      if ( v54 >= 0 )
      {
        v55 = v54;
        if ( v54 > 255 )
          v55 = 255;
        v32[7] = v55;
      }
      else
      {
        v32[7] = 0;
      }
      v56 = (int)(float)(v28[3811] * 255.0);
      v32[8] = v56;
      if ( v56 >= 0 )
      {
        v57 = v56;
        if ( v56 > 255 )
          v57 = 255;
        v32[8] = v57;
      }
      else
      {
        v32[8] = 0;
      }
      v58 = (int)(float)(v28[3799] * 255.0);
      v32[9] = v58;
      if ( v58 >= -255 )
      {
        v59 = v58;
        if ( v58 > 255 )
          v59 = 255;
        v32[9] = v59;
      }
      else
      {
        v32[9] = -255;
      }
      v60 = (int)(float)(v28[3816] * 255.0);
      v32[10] = v60;
      if ( v60 >= 0 )
      {
        v61 = v60;
        if ( v60 > 255 )
          v61 = 255;
        v32[10] = v61;
      }
      else
      {
        v32[10] = 0;
      }
    }
    v29 += 5210;
    v33 += 57;
    v31 += 57;
    v28 += 5210;
    v32 += 57;
    --v30;
  }
  while ( v30 );
  v62 = 1024;
  v63 = (unsigned int *)((char *)&dword_140404A6C[137358015] + v27);
  v64 = (unsigned int *)((char *)&dword_140404A6C[137358018] + v27);
  v65 = &dword_140404A6C[280648157];
  v66 = (float *)&dword_140404A6C[278845916];
  v67 = (float *)&dword_140404A6C[278845934];
  do
  {
    v68 = *((_DWORD *)v66 - 23);
    *(v63 - 2) = v68;
    if ( v68 )
    {
      v69 = (float)(v66[2] * 4096.0) + 16777216.0;
      v70 = v66[1];
      *v63 = (int)(float)((float)(*v66 * 4096.0) + 16777216.0);
      v63[1] = (int)(float)(v70 * 4096.0);
      v63[2] = (int)v69;
      sub_140114D40(v64, v67);
      *(v63 - 1) = *v65;
    }
    v67 += 1760;
    v64 += 9;
    v66 += 1760;
    ++v65;
    v63 += 9;
    --v62;
  }
  while ( v62 );
  v71 = dword_140404A6C[132792829];
  v72 = (unsigned int *)((char *)&dword_140404A6C[137367239] + v27);
  v73 = (int *)((char *)&dword_140404A6C[137367232] + v27);
  v74 = &dword_140404A6C[132792838];
  v75 = (float *)&dword_140404A6C[132400642];
  do
  {
    *(v72 - 10) = v6 - 2 < v71;
    if ( v6 - 2 < v71 )
    {
      v76 = (float)(v75[1] * 4096.0) + 16777216.0;
      v77 = *v75 * 4096.0;
      *(v73 - 1) = (int)(float)((float)(*(v75 - 1) * 4096.0) + 16777216.0);
      v78 = (int)v77;
      v79 = v75[5];
      *v73 = v78;
      v73[1] = (int)v76;
      v80 = (int)(v79 * 81.16902097686128);
      if ( v80 < -255 )
      {
        v80 = -255;
      }
      else if ( v80 > 255 )
      {
        v80 = 255;
      }
      v73[6] = v80;
    }
    *(v73 - 2) = *(v74 - 1);
    *v72 = v6 - 1 < v71;
    if ( v6 - 1 < v71 )
    {
      v81 = (float)(v75[384] * 4096.0) + 16777216.0;
      v82 = v75[383] * 4096.0;
      v73[9] = (int)(float)((float)(v75[382] * 4096.0) + 16777216.0);
      v83 = (int)v82;
      v84 = v75[388];
      v73[10] = v83;
      v73[11] = (int)v81;
      v85 = (int)(v84 * 81.16902097686128);
      if ( v85 < -255 )
      {
        v85 = -255;
      }
      else if ( v85 > 255 )
      {
        v85 = 255;
      }
      v73[16] = v85;
    }
    v73[8] = *v74;
    v72[10] = v6 < v71;
    if ( v6 < v71 )
    {
      v86 = (float)(v75[767] * 4096.0) + 16777216.0;
      v87 = v75[766] * 4096.0;
      v73[19] = (int)(float)((float)(v75[765] * 4096.0) + 16777216.0);
      v88 = (int)v87;
      v89 = v75[771];
      v73[20] = v88;
      v73[21] = (int)v86;
      v90 = (int)(v89 * 81.16902097686128);
      if ( v90 < -255 )
      {
        v90 = -255;
      }
      else if ( v90 > 255 )
      {
        v90 = 255;
      }
      v73[26] = v90;
    }
    v73[18] = v74[1];
    v72[20] = v6 + 1 < v71;
    if ( v6 + 1 < v71 )
    {
      v91 = (float)(v75[1150] * 4096.0) + 16777216.0;
      v92 = v75[1149] * 4096.0;
      v73[29] = (int)(float)((float)(v75[1148] * 4096.0) + 16777216.0);
      v93 = (int)v92;
      v94 = v75[1154];
      v73[30] = v93;
      v73[31] = (int)v91;
      v95 = (int)(v94 * 81.16902097686128);
      if ( v95 < -255 )
      {
        v95 = -255;
      }
      else if ( v95 > 255 )
      {
        v95 = 255;
      }
      v73[36] = v95;
    }
    v73[28] = v74[2];
    v72[30] = v6 + 2 < v71;
    if ( v6 + 2 < v71 )
    {
      v96 = (float)(v75[1533] * 4096.0) + 16777216.0;
      v97 = v75[1532] * 4096.0;
      v73[39] = (int)(float)((float)(v75[1531] * 4096.0) + 16777216.0);
      v98 = (int)v97;
      v99 = v75[1537];
      v73[40] = v98;
      v73[41] = (int)v96;
      v100 = (int)(v99 * 81.16902097686128);
      if ( v100 < -255 )
      {
        v100 = -255;
      }
      else if ( v100 > 255 )
      {
        v100 = 255;
      }
      v73[46] = v100;
    }
    v73[38] = v74[3];
    v72[40] = v6 + 3 < v71;
    if ( v6 + 3 < v71 )
    {
      v101 = (float)(v75[1916] * 4096.0) + 16777216.0;
      v102 = v75[1915] * 4096.0;
      v73[49] = (int)(float)((float)(v75[1914] * 4096.0) + 16777216.0);
      v103 = (int)v102;
      v104 = v75[1920];
      v73[50] = v103;
      v73[51] = (int)v101;
      v105 = (int)(v104 * 81.16902097686128);
      if ( v105 < -255 )
      {
        v105 = -255;
      }
      else if ( v105 > 255 )
      {
        v105 = 255;
      }
      v73[56] = v105;
    }
    v73[48] = v74[4];
    v72[50] = v6 + 4 < v71;
    if ( v6 + 4 < v71 )
    {
      v106 = (float)(v75[2299] * 4096.0) + 16777216.0;
      v107 = v75[2298] * 4096.0;
      v73[59] = (int)(float)((float)(v75[2297] * 4096.0) + 16777216.0);
      v108 = (int)v107;
      v109 = v75[2303];
      v73[60] = v108;
      v73[61] = (int)v106;
      v110 = (int)(v109 * 81.16902097686128);
      if ( v110 < -255 )
      {
        v110 = -255;
      }
      else if ( v110 > 255 )
      {
        v110 = 255;
      }
      v73[66] = v110;
    }
    v73[58] = v74[5];
    v72[60] = v6 + 5 < v71;
    if ( v6 + 5 < v71 )
    {
      v111 = (float)(v75[2682] * 4096.0) + 16777216.0;
      v112 = v75[2681] * 4096.0;
      v73[69] = (int)(float)((float)(v75[2680] * 4096.0) + 16777216.0);
      v113 = (int)v112;
      v114 = v75[2686];
      v73[70] = v113;
      v73[71] = (int)v111;
      v115 = (int)(v114 * 81.16902097686128);
      if ( v115 < -255 )
      {
        v115 = -255;
      }
      else if ( v115 > 255 )
      {
        v115 = 255;
      }
      v73[76] = v115;
    }
    v75 += 3064;
    v73[68] = v74[6];
    v74 += 8;
    v73 += 80;
    v72 += 80;
    v6 += 8;
  }
  while ( (__int64)v75 < (__int64)&dword_140404A6C[132792834] );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v117
#undef v118
#undef v119
#undef v120
#undef v121
#undef v122
#undef v123
#undef v124
#undef v125
#undef v126

// 140279850: using guessed type __int128 xmmword_140279850;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140301DE8: using guessed type int dword_140301DE8;
// 140301DEC: using guessed type int dword_140301DEC;
// 140301DF0: using guessed type int dword_140301DF0;
// 140301DF4: using guessed type int dword_140301DF4;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15FE95260: using guessed type unsigned int;

//----- (000000014002A680) ----------------------------------------------------
__int64            sub_14002A680()
{
  __int64 v0; // rdx
  float v1; // xmm7_4
  int v2; // xmm0_4
  unsigned int v3; // ebx
  float v4; // xmm3_4
  int v5; // xmm5_4
  double v6; // xmm2_8
  int v7; // xmm4_4
  float v8; // xmm6_4
  float v9; // xmm13_4
  float v10; // xmm10_4
  float v11; // xmm14_4
  float v12; // xmm1_4
  __m128 v13; // xmm0
  float v14; // xmm6_4
  float v15; // xmm8_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  __int64 result; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002A680[64];
#define v21 (*(int (*))(void *)(sr_frame_14002A680 + 8)) /* [rsp+28h] */
#define v22 (*(int (*))(void *)(sr_frame_14002A680 + 12)) /* [rsp+2Ch] */
#define v23 (*(int (*))(void *)(sr_frame_14002A680 + 16)) /* [rsp+30h] */
#define v24 (*(int (*))(void *)(sr_frame_14002A680 + 20)) /* [rsp+34h] */
#define v25 (*(unsigned __int64 (*))(void *)(sr_frame_14002A680 + 24)) /* [rsp+38h] */
#define v26 (*(float (*))(void *)(sr_frame_14002A680 + 32)) /* [rsp+40h] */
#define v27 (*(float (*))(void *)(sr_frame_14002A680 + 36)) /* [rsp+44h] */
#define v28 (*(float (*))(void *)(sr_frame_14002A680 + 40)) /* [rsp+48h] */
#define v29 (*(float (*))(void *)(sr_frame_14002A680 + 44)) /* [rsp+4Ch] */
#define v30 (*(__int128 (*))(void *)(sr_frame_14002A680 + 48)) /* [rsp+50h] */

  v22 = 1103134720;
  v23 = 1150550016;
  v25 = 0x4494000041C08000LL;
  v27 = 24.0625;
  *(_QWORD *)&v30 = 0x449C000041C08000LL;
  v21 = 1161756672;
  v24 = 1161887744;
  v26 = 3088.0;
  v28 = 1248.0;
  v29 = 3056.0;
  sub_14005F6E0(1u, (float *)&v21, 0.0, 0.0);
  v1 = 0.0;
  v2 = LODWORD(v29);
  v3 = 0;
  v4 = v27;
  v5 = DWORD1(v30);
  *(_QWORD *)&v6 = LODWORD(v26);
  v7 = v30;
  v8 = v28;
  v9 = (float)(v29 + v26) * 0.5;
  v10 = (float)(v27 + *(float *)&v30) * 0.5;
  v11 = (float)(*((float *)&v30 + 1) + v28) * 0.5;
  while ( 1 )
  {
    v12 = v1;
    if ( v3 <= 4 )
      goto LABEL_7;
    if ( v3 <= 6 )
    {
      v1 = v1 + -0.78539819;
      goto LABEL_8;
    }
    if ( v3 - 10 <= 3 || v3 == 17 )
LABEL_7:
      v1 = v1 + 0.78539819;
LABEL_8:
    v21 = v2;
    v22 = v7;
    v23 = v5;
    v24 = LODWORD(v6);
    v25 = __PAIR64__(LODWORD(v8), LODWORD(v4));
    v13 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)(v12 + v1) * 0.5)), v0, v6);
    v11 = v11 + (float)(SR_VEC_READ_LANES(128, _mm_shuffle_ps(v13, v13, 1), f32)[0] * 64.0);
    v9 = v9 + (float)(SR_VEC_LANES(128, v13, f32)[0] * 64.0);
    SR_VEC_LANES(128, v13, f32)[0] = cosf(v1);
    v27 = v10;
    v14 = SR_VEC_LANES(128, v13, f32)[0] * 16.0;
    v15 = v10;
    v26 = (float)(SR_VEC_LANES(128, v13, f32)[0] * 16.0) + v9;
    *(double *)SR_VEC_LANES(128, v13, u64) = sin(v1);
    v16 = v10;
    *(float *)&v30 = v10;
    v17 = -*(double *)SR_VEC_LANES(128, v13, u64);
    v29 = v9 - v14;
    v18 = v10;
    v19 = v17 * 16.0;
    v28 = v19 + v11;
    *((float *)&v30 + 1) = v11 - v19;
    if ( v3 < 4 )
    {
      v16 = v10 + 16.0;
      *(float *)&v30 = v10 + 16.0;
      v18 = v10 + 16.0;
    }
    if ( v3 == 5 )
    {
      v27 = v10 + 16.0;
      v15 = v10 + 16.0;
    }
    if ( v3 - 10 <= 2 )
    {
      v16 = v18 + 16.0;
      *(float *)&v30 = v18 + 16.0;
    }
    if ( v3 == 17 )
    {
      v16 = v16 + 8.0;
      *(float *)&v30 = v16;
    }
    if ( v3 == 19 )
    {
      v27 = v15 + 4.0;
      *(float *)&v30 = v16 + 4.0;
    }
    result = sub_14005F6E0(1u, (float *)&v21, 0.0, 0.0);
    if ( (int)++v3 >= 21 )
      return result;
    v5 = DWORD1(v30);
    v7 = v30;
    v2 = LODWORD(v29);
    v8 = v28;
    v4 = v27;
    *(_QWORD *)&v6 = LODWORD(v26);
  }
}
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29
#undef v30

// 14002A801: variable 'v0' is possibly undefined

//----- (000000014002A9A0) ----------------------------------------------------
__int64 sub_14002A9A0()
{
  __int64 v0; // rbx
  unsigned int *v1; // rax
  float v2; // xmm8_4
  float v3; // xmm6_4
  double v4; // xmm9_8
  float v5; // xmm10_4
  unsigned int v6; // xmm11_4
  unsigned int v7; // xmm13_4
  unsigned int v8; // xmm12_4
  signed int v9; // r14d
  unsigned int v10; // edi
  __int64 v11; // rcx
  signed int i; // esi
  float v13; // xmm15_4
  float v14; // xmm14_4
  float v15; // xmm8_4
  float v16; // xmm7_4
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  float v21; // xmm11_4
  float v22; // xmm13_4
  float v23; // xmm12_4
  float v24; // xmm1_4
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // r9d
  int v28; // r8d
  unsigned int *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // r10
  __int64 v32; // r11
  __int64 v33; // rcx
  __int64 v34; // rax
  float v35; // xmm1_4
  float v36; // xmm0_4
  __int64 v37; // rcx
  __int64 v38; // rax
  float v39; // xmm1_4
  float v40; // xmm0_4
  __int64 v41; // rcx
  __int64 v42; // rax
  float *v43; // rdx
  __int64 v44; // r9
  int v45; // r9d
  unsigned int *v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // r11
  __int64 v49; // r10
  __int64 v50; // rcx
  __int64 v51; // rax
  float v52; // xmm1_4
  float v53; // xmm0_4
  __int64 v54; // rcx
  __int64 v55; // rax
  float v56; // xmm1_4
  float v57; // xmm0_4
  __int64 v58; // rcx
  __int64 v59; // rax
  float *v60; // rdx
  __int64 v61; // r9
  __int64 result; // rax
  float sr_train_route_direction[3];
  float sr_train_route_previous_direction[3];
  int sr_train_route_segment_start[3];
  unsigned sr_train_route_segment_end[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002A9A0[352];
#define v63 (*(float (*))(void *)(sr_frame_14002A9A0 + 0)) /* [rsp+38h] */
#define v64 (*(float (*))(void *)(sr_frame_14002A9A0 + 0)) /* [rsp+38h] */
#define v68 (*(float (*))(void *)(sr_frame_14002A9A0 + 24)) /* [rsp+50h] */
#define v78 (*(float (*))(void *)(sr_frame_14002A9A0 + 96)) /* [rsp+98h] */
#define v79 (*(unsigned int (*))(void *)(sr_frame_14002A9A0 + 100)) /* [rsp+9Ch] */
#define v80 (*(float (*))(void *)(sr_frame_14002A9A0 + 328)) /* [rsp+180h] */
#define v81 (*(int (*))(void *)(sr_frame_14002A9A0 + 328)) /* [rsp+180h] */
#define v82 (*(float (*))(void *)(sr_frame_14002A9A0 + 336)) /* [rsp+188h] */
#define v83 (*(float (*))(void *)(sr_frame_14002A9A0 + 344)) /* [rsp+190h] */

  v0 = 0;
  v1 = &dword_140404A6C[254352108];
  do
  {
    *(v1 - 9) = 0;
    *v1 = 0;
    v1[9] = 0;
    v1[18] = 0;
    v1[27] = 0;
    v1[36] = 0;
    v1[45] = 0;
    v1[54] = 0;
    v1[63] = 0;
    v1[72] = 0;
    v1[81] = 0;
    v1[90] = 0;
    v1[99] = 0;
    v1[108] = 0;
    v1[117] = 0;
    v1[126] = 0;
    v1[135] = 0;
    v1[144] = 0;
    v1[153] = 0;
    v1[162] = 0;
    v1[171] = 0;
    v1[180] = 0;
    v1[189] = 0;
    v1[198] = 0;
    v1[207] = 0;
    v1[216] = 0;
    v1[225] = 0;
    v1[234] = 0;
    v1[243] = 0;
    v1[252] = 0;
    v1[261] = 0;
    v1[270] = 0;
    v1[279] = 0;
    v1[288] = 0;
    v1[297] = 0;
    v1[306] = 0;
    v1[315] = 0;
    v1[324] = 0;
    v1[333] = 0;
    v1[342] = 0;
    v1[351] = 0;
    v1[360] = 0;
    v1[369] = 0;
    v1[378] = 0;
    v1[387] = 0;
    v1[396] = 0;
    v1[405] = 0;
    v1[414] = 0;
    v1[423] = 0;
    v1[432] = 0;
    v1[441] = 0;
    v1[450] = 0;
    v1[459] = 0;
    v1[468] = 0;
    v1[477] = 0;
    v1[486] = 0;
    v1[495] = 0;
    v1[504] = 0;
    v1[513] = 0;
    v1[522] = 0;
    v1[531] = 0;
    v1[540] = 0;
    v1[549] = 0;
    v1[558] = 0;
    v1 += 576;
  }
  while ( (__int64)v1 < (__int64)&dword_140404A6C[254388972] );
  dword_140404A6C[421506973] = 0;
  v2 = -*(float *)&dword_1402F6178;
  v80 = -*(float *)&dword_1402F6180;
  v3 = -*(float *)&dword_1402F617C;
  sr_train_route_previous_direction[0] = -*(float *)&dword_1402F6178;
  dword_140404A6C[112631653] = 0;
  sr_train_route_segment_start[0] = 1159397376;
  v4 = 0.0;
  sr_train_route_segment_start[2] = 1149194240;
  v5 = 0.0;
  *(float *)&v6 = (float)((float)-*(float *)&dword_1402F6178 * 56.0) + 2480.0;
  *(float *)&v7 = (float)((float)-*(float *)&dword_1402F617C * 56.0) + 36.0625;
  *(float *)&v8 = (float)((float)-*(float *)&dword_1402F6180 * 56.0) + 1021.25;
  sr_train_route_previous_direction[1] = -*(float *)&dword_1402F617C;
  sr_train_route_segment_end[0] = v6;
  sr_train_route_segment_end[1] = v7;
  sr_train_route_segment_end[2] = v8;
  sr_train_route_previous_direction[2] = -*(float *)&dword_1402F6180;
  sr_train_route_direction[0] = -*(float *)&dword_1402F6178;
  sr_train_route_direction[1] = -*(float *)&dword_1402F617C;
  sr_train_route_direction[2] = -*(float *)&dword_1402F6180;
  sr_train_route_segment_start[1] = 1108361216;
  sub_1400603A0(0, (float *)&sr_train_route_segment_start[0], (float *)&sr_train_route_segment_end[0], &sr_train_route_previous_direction[0], &sr_train_route_direction[0], 1.4349999);
  v9 = 0;
  v10 = 0;
  v11 = 5LL * (int)dword_140404A6C[112631653];
  *(float *)&dword_140404A6C[5 * dword_140404A6C[112631653] + 112631655] = (float)(*(float *)&v6 * 0.5) + 1240.0;
  *(float *)&dword_140404A6C[v11 + 112631656] = (float)(*(float *)&v7 * 0.5) + 18.03125;
  *(float *)&dword_140404A6C[v11 + 112631657] = (float)(*(float *)&v8 * 0.5) + 510.625;
  dword_140404A6C[5 * dword_140404A6C[112631653] + 112631658] = 1083624420;
  for ( i = ++dword_140404A6C[112631653]; ; i = dword_140404A6C[112631653] )
  {
    v13 = v2;
    v14 = v3;
    sr_train_route_previous_direction[0] = v2;
    v15 = v3;
    v79 = LODWORD(v4);
    v78 = v5;
    sr_train_route_previous_direction[1] = v3;
    if ( v10 < 0x17 )
    {
      v63 = v3;
      v82 = *(float *)&v6;
      v16 = 28.0;
      sr_train_route_segment_start[0] = v6;
      v83 = *(float *)&v7;
      sr_train_route_segment_start[1] = v7;
      v68 = *(float *)&v8;
      sr_train_route_segment_start[2] = v8;
      sr_train_route_previous_direction[2] = v80;
      *(float *)&v81 = 28.0;
      goto LABEL_6;
    }
    if ( v10 < 0x29 )
    {
      v82 = *(float *)&v6;
      v16 = 28.571428;
      sr_train_route_segment_start[0] = v6;
      v83 = *(float *)&v7;
      sr_train_route_segment_start[1] = v7;
      v68 = *(float *)&v8;
      sr_train_route_segment_start[2] = v8;
      v64 = v3;
      sr_train_route_previous_direction[2] = v80;
      if ( v10 == 23 )
        goto LABEL_27;
      v15 = v3;
      if ( v10 == 27 )
      {
        v4 = 0.0;
        sub_14007B4D0(&sr_train_route_direction[0], (float *)&dword_1402F6188, 0.0);
        v16 = 28.571428;
        v3 = v5;
        v15 = v64;
        sr_train_route_direction[1] = v5;
        goto LABEL_42;
      }
LABEL_14:
      if ( v10 == 41 )
        goto LABEL_27;
      if ( v10 == 45 )
        goto LABEL_29;
      goto LABEL_19;
    }
    if ( v10 < 0x4B )
    {
      v16 = 28.0;
      sr_train_route_previous_direction[2] = v80;
      v82 = *(float *)&v6;
      sr_train_route_segment_start[0] = v6;
      v83 = *(float *)&v7;
      sr_train_route_segment_start[1] = v7;
      v68 = *(float *)&v8;
      sr_train_route_segment_start[2] = v8;
      goto LABEL_14;
    }
    if ( v10 >= 0x5D )
    {
      v16 = 28.0;
      v82 = *(float *)&v6;
      sr_train_route_segment_start[0] = v6;
      v83 = *(float *)&v7;
      sr_train_route_segment_start[1] = v7;
      v68 = *(float *)&v8;
      sr_train_route_segment_start[2] = v8;
      sr_train_route_previous_direction[2] = v80;
      goto LABEL_26;
    }
    v82 = *(float *)&v6;
    v16 = 28.571428;
    sr_train_route_segment_start[0] = v6;
    v83 = *(float *)&v7;
    sr_train_route_segment_start[1] = v7;
    v68 = *(float *)&v8;
    sr_train_route_segment_start[2] = v8;
    sr_train_route_previous_direction[2] = v80;
LABEL_19:
    switch ( v10 )
    {
      case 'K':
        goto LABEL_27;
      case 'O':
        goto LABEL_29;
      case 'F':
        v5 = -0.0546875;
        sub_14007B4D0(&sr_train_route_direction[0], (float *)&dword_1402F6188, v4);
        v3 = -0.0546875;
        sr_train_route_direction[1] = -0.0546875;
        goto LABEL_42;
      case 'J':
LABEL_24:
        v5 = 0.0;
        sub_14007B4D0(&sr_train_route_direction[0], (float *)&dword_1402F6188, v4);
        v3 = 0.0;
        sr_train_route_direction[1] = 0.0;
        goto LABEL_42;
    }
LABEL_26:
    if ( v10 == 93 )
    {
LABEL_27:
      *(_QWORD *)&v4 = 3200847835LL;
      sub_14007B4D0(&sr_train_route_direction[0], (float *)&dword_1402F6188, sr_export_float_lane_container(3200847835LL));
      v3 = v5;
      sr_train_route_direction[1] = v5;
      goto LABEL_42;
    }
    if ( v10 == 97 )
    {
LABEL_29:
      v4 = 0.0;
      sub_14007B4D0(&sr_train_route_direction[0], (float *)&dword_1402F6188, 0.0);
      v3 = v5;
      sr_train_route_direction[1] = v5;
      goto LABEL_42;
    }
    v63 = v15;
    *(float *)&v81 = v16;
    if ( v10 == 98 )
    {
      v5 = 0.0546875;
      sub_14007B4D0(&sr_train_route_direction[0], (float *)&dword_1402F6188, v4);
      v3 = 0.0546875;
      sr_train_route_direction[1] = 0.0546875;
      goto LABEL_42;
    }
    if ( v10 == 102 )
      goto LABEL_24;
LABEL_6:
    sub_14007B4D0(&sr_train_route_direction[0], (float *)&dword_1402F6188, v4);
    v3 = v78;
    sr_train_route_direction[1] = v78;
    *(_QWORD *)&v4 = v79;
    v5 = v78;
    if ( v10 != 19 )
    {
      v16 = *(float *)&v81;
      v15 = v63;
      switch ( v10 )
      {
        case '1':
          v18 = 5LL * i;
          dword_140404A6C[v18 + 112631655] = v6;
          dword_140404A6C[v18 + 112631656] = v7;
          dword_140404A6C[v18 + 112631657] = v8;
          dword_140404A6C[5 * dword_140404A6C[112631653] + 112631658] = 1070141403;
          break;
        case 'E':
          v19 = 5LL * i;
          dword_140404A6C[v19 + 112631655] = v6;
          dword_140404A6C[v19 + 112631656] = v7;
          dword_140404A6C[v19 + 112631657] = v8;
          dword_140404A6C[5 * dword_140404A6C[112631653] + 112631658] = 1070141403;
          goto LABEL_41;
        case 'V':
          v20 = 5LL * i;
          dword_140404A6C[v20 + 112631655] = v6;
          dword_140404A6C[v20 + 112631656] = v7;
          dword_140404A6C[v20 + 112631657] = v8;
          dword_140404A6C[5 * dword_140404A6C[112631653] + 112631658] = 0;
          break;
        default:
          goto LABEL_42;
      }
      v15 = v63;
      v16 = *(float *)&v81;
      goto LABEL_41;
    }
    v17 = 5LL * i;
    dword_140404A6C[v17 + 112631655] = v6;
    dword_140404A6C[v17 + 112631656] = v7;
    dword_140404A6C[v17 + 112631657] = v8;
    dword_140404A6C[5 * dword_140404A6C[112631653] + 112631658] = 1083624420;
LABEL_41:
    ++dword_140404A6C[112631653];
LABEL_42:
    v80 = sr_train_route_direction[2];
    *(float *)&v7 = *(float *)&v7 + (float)((float)(v15 + v5) * v16);
    v2 = sr_train_route_direction[0];
    *(float *)&v6 = (float)((float)(v13 * v16) + *(float *)&v6) + (float)(sr_train_route_direction[0] * v16);
    sr_train_route_segment_end[1] = v7;
    sr_train_route_segment_end[0] = v6;
    *(float *)&v8 = (float)((float)(sr_train_route_previous_direction[2] * v16) + *(float *)&v8) + (float)(sr_train_route_direction[2] * v16);
    sr_train_route_segment_end[2] = v8;
    if ( *(float *)&v4 != 0.0 )
    {
      v21 = (float)((float)(v14 * *(float *)&dword_1402F6190) - (float)(sr_train_route_previous_direction[2] * *(float *)&dword_1402F618C)) * 114.75;
      v22 = (float)((float)(sr_train_route_previous_direction[2] * *(float *)&dword_1402F6188) - (float)(v13 * *(float *)&dword_1402F6190)) * 114.75;
      v23 = (float)((float)(v13 * *(float *)&dword_1402F618C) - (float)(v14 * *(float *)&dword_1402F6188)) * 114.75;
      v24 = (float)((float)(*(float *)&dword_1402F6190 * v5) - (float)(sr_train_route_direction[2] * *(float *)&dword_1402F618C)) * 114.75;
      if ( *(float *)&v4 <= 0.0 )
      {
        *(float *)&v6 = v24 + (float)(v82 - v21);
        *(float *)&v7 = (float)((float)((float)(sr_train_route_direction[2] * *(float *)&dword_1402F6188)
                                      - (float)(sr_train_route_direction[0] * *(float *)&dword_1402F6190))
                              * 114.75)
                      + (float)(v83 - v22);
        *(float *)&v8 = (float)((float)((float)(sr_train_route_direction[0] * *(float *)&dword_1402F618C)
                                      - (float)(*(float *)&dword_1402F6188 * v5))
                              * 114.75)
                      + (float)(v68 - v23);
      }
      else
      {
        *(float *)&v6 = (float)(v21 + v82) - v24;
        *(float *)&v7 = (float)(v22 + v83)
                      - (float)((float)((float)(sr_train_route_direction[2] * *(float *)&dword_1402F6188)
                                      - (float)(sr_train_route_direction[0] * *(float *)&dword_1402F6190))
                              * 114.75);
        *(float *)&v8 = (float)(v23 + v68)
                      - (float)((float)((float)(sr_train_route_direction[0] * *(float *)&dword_1402F618C)
                                      - (float)(*(float *)&dword_1402F6188 * v5))
                              * 114.75);
      }
      sr_train_route_segment_end[2] = v8;
      sr_train_route_segment_end[1] = v7;
      sr_train_route_segment_end[0] = v6;
    }
    v25 = sub_1400603A0(0, (float *)&sr_train_route_segment_start[0], (float *)&sr_train_route_segment_end[0], &sr_train_route_previous_direction[0], &sr_train_route_direction[0], 1.4349999);
    ++v10;
    dword_140404A6C[15432 * v25 + 358312924] = v9;
    v26 = v9;
    v9 = v25;
    dword_140404A6C[15432 * v26 + 358312925] = v25;
    if ( (int)v10 >= 103 )
      break;
  }
  v27 = 0;
  dword_140404A6C[358312924] = v25;
  v28 = dword_140404A6C[421506973];
  dword_140404A6C[15432 * v25 + 358312925] = 0;
  if ( v28 < 4 )
  {
    if ( v28 <= 0 )
      goto LABEL_58;
    v32 = 0;
    goto LABEL_56;
  }
  v29 = &dword_140404A6C[358312932];
  v30 = ((unsigned int)(v28 - 4) >> 2) + 1;
  v31 = v30;
  v27 = 4 * v30;
  v32 = 4LL * v30;
  do
  {
    v33 = 15432LL * (int)v29[15424];
    v34 = (int)v29[15425];
    *(float *)v29 = fminf(
                      fminf(
                        (float)(*(float *)&dword_140404A6C[15432 * *(v29 - 8) + 358312932] + 1.0) * 0.5,
                        *(float *)v29),
                      (float)(*(float *)&dword_140404A6C[15432 * *(v29 - 7) + 358312932] + 1.0) * 0.5);
    v35 = fminf((float)(*(float *)&dword_140404A6C[v33 + 358312932] + 1.0) * 0.5, *((float *)v29 + 15432));
    v36 = *(float *)&dword_140404A6C[15432 * v34 + 358312932] + 1.0;
    v37 = 15432LL * (int)v29[30856];
    v38 = (int)v29[30857];
    *((float *)v29 + 15432) = fminf(v35, v36 * 0.5);
    v39 = fminf((float)(*(float *)&dword_140404A6C[v37 + 358312932] + 1.0) * 0.5, *((float *)v29 + 30864));
    v40 = *(float *)&dword_140404A6C[15432 * v38 + 358312932] + 1.0;
    v41 = 15432LL * (int)v29[46288];
    v42 = (int)v29[46289];
    *((float *)v29 + 30864) = fminf(v39, v40 * 0.5);
    *((float *)v29 + 46296) = fminf(
                                fminf(
                                  (float)(*(float *)&dword_140404A6C[v41 + 358312932] + 1.0) * 0.5,
                                  *((float *)v29 + 46296)),
                                (float)(*(float *)&dword_140404A6C[15432 * v42 + 358312932] + 1.0) * 0.5);
    v29 += 61728;
    --v31;
  }
  while ( v31 );
  if ( v27 < v28 )
  {
LABEL_56:
    v43 = (float *)&dword_140404A6C[15432 * v32 + 358312932];
    v44 = (unsigned int)(v28 - v27);
    do
    {
      *v43 = fminf(
               fminf((float)(*(float *)&dword_140404A6C[15432 * *((int *)v43 - 8) + 358312932] + 1.0) * 0.5, *v43),
               (float)(*(float *)&dword_140404A6C[15432 * *((int *)v43 - 7) + 358312932] + 1.0) * 0.5);
      v43 += 15432;
      --v44;
    }
    while ( v44 );
  }
LABEL_58:
  v45 = 0;
  if ( v28 < 4 )
  {
    if ( v28 <= 0 )
      goto LABEL_67;
    v49 = 0;
    goto LABEL_65;
  }
  v46 = &dword_140404A6C[358312932];
  v47 = ((unsigned int)(v28 - 4) >> 2) + 1;
  v48 = v47;
  v45 = 4 * v47;
  v49 = 4LL * v47;
  do
  {
    v50 = 15432LL * (int)v46[15424];
    v51 = (int)v46[15425];
    *(float *)v46 = fminf(
                      fminf(
                        (float)(*(float *)&dword_140404A6C[15432 * *(v46 - 8) + 358312932] + 1.0) * 0.5,
                        *(float *)v46),
                      (float)(*(float *)&dword_140404A6C[15432 * *(v46 - 7) + 358312932] + 1.0) * 0.5);
    v52 = fminf((float)(*(float *)&dword_140404A6C[v50 + 358312932] + 1.0) * 0.5, *((float *)v46 + 15432));
    v53 = *(float *)&dword_140404A6C[15432 * v51 + 358312932] + 1.0;
    v54 = 15432LL * (int)v46[30856];
    v55 = (int)v46[30857];
    *((float *)v46 + 15432) = fminf(v52, v53 * 0.5);
    v56 = fminf((float)(*(float *)&dword_140404A6C[v54 + 358312932] + 1.0) * 0.5, *((float *)v46 + 30864));
    v57 = *(float *)&dword_140404A6C[15432 * v55 + 358312932] + 1.0;
    v58 = 15432LL * (int)v46[46288];
    v59 = (int)v46[46289];
    *((float *)v46 + 30864) = fminf(v56, v57 * 0.5);
    *((float *)v46 + 46296) = fminf(
                                fminf(
                                  (float)(*(float *)&dword_140404A6C[v58 + 358312932] + 1.0) * 0.5,
                                  *((float *)v46 + 46296)),
                                (float)(*(float *)&dword_140404A6C[15432 * v59 + 358312932] + 1.0) * 0.5);
    v46 += 61728;
    --v48;
  }
  while ( v48 );
  if ( v45 < v28 )
  {
LABEL_65:
    v60 = (float *)&dword_140404A6C[15432 * v49 + 358312932];
    v61 = (unsigned int)(v28 - v45);
    do
    {
      *v60 = fminf(
               fminf((float)(*(float *)&dword_140404A6C[15432 * *((int *)v60 - 8) + 358312932] + 1.0) * 0.5, *v60),
               (float)(*(float *)&dword_140404A6C[15432 * *((int *)v60 - 7) + 358312932] + 1.0) * 0.5);
      v60 += 15432;
      --v61;
    }
    while ( v61 );
  }
LABEL_67:
  while ( 1 )
  {
    result = *((unsigned __int8 *)&dword_140404A6C[283831313] + v0++);
    if ( (_BYTE)result != sr_mem_140274da0[v0 - 1] )
      break;
    if ( v0 == 6 )
      return sub_14002A680();
  }
  return result;
}
#undef v63
#undef v64
#undef v68
#undef v78
#undef v79
#undef v80
#undef v81
#undef v82
#undef v83

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15B1AC800: using guessed type unsigned int;
// 195ADF9DC: using guessed type unsigned int;
// 1A4BF08E0: using guessed type unsigned int;

//----- (000000014002B9C0) ----------------------------------------------------
__int64 sub_14002B9C0()
{
  int v0; // ebx
  __int64 v1; // r8
  unsigned int v2; // esi
  unsigned int v3; // xmm10_4
  unsigned int v4; // xmm11_4
  unsigned int v5; // xmm12_4
  unsigned int v6; // xmm13_4
  unsigned int v7; // xmm14_4
  unsigned int v8; // xmm15_4
  __int64 v9; // r15
  float *v10; // r13
  __int64 v11; // rcx
  float v12; // xmm4_4
  float v13; // xmm5_4
  float v14; // xmm6_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  __int64 v23; // r8
  float v24; // xmm3_4
  int v25; // eax
  int v26; // r12d
  float v27; // xmm1_4
  float v28; // xmm6_4
  float v29; // xmm0_4
  bool v30; // cc
  __int64 v31; // r14
  float v32; // xmm3_4
  float v33; // xmm2_4
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  float v37; // xmm1_4
  int v38; // eax
  int v39; // edx
  unsigned int *v40; // rdi
  __int64 v41; // rax
  unsigned int *v42; // rdi
  int v43; // ebx
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // r14
  float *v47; // r13
  int *v48; // rdi
  float *v49; // r15
  __int64 v50; // rsi
  unsigned int *v51; // rbx
  unsigned int v52; // r9d
  int v53; // eax
  unsigned int v54; // r8d
  int v55; // edi
  int v56; // eax
  __int64 v57; // rcx
  unsigned int v58; // edi
  unsigned int v59; // r11d
  unsigned int v60; // r8d
  unsigned int v61; // ebx
  unsigned int v62; // r10d
  unsigned int v63; // edx
  unsigned int v64; // r14d
  __int64 v65; // rcx
  unsigned int v66; // xmm0_4
  unsigned int v67; // xmm1_4
  float v68; // xmm2_4
  __int64 v69; // rax
  int v70; // ebx
  __int64 v71; // rax
  __int64 v72; // rdi
  int v73; // edx
  __int64 v74; // rax
  __int64 v75; // rdi
  int v76; // r9d
  signed int v77; // ebx
  float v78; // xmm7_4
  float v79; // xmm8_4
  float v80; // xmm6_4
  float v81; // xmm3_4
  __int64 v82; // rax
  float v83; // xmm0_4
  __int64 v84; // rcx
  float v85; // xmm8_4
  float v86; // xmm2_4
  float v87; // xmm4_4
  float v88; // xmm0_4
  signed int v89; // r10d
  __int64 v90; // r11
  float v91; // xmm4_4
  float v92; // xmm5_4
  float v93; // xmm3_4
  int v94; // edx
  int v95; // eax
  __int64 v96; // r8
  __int64 v97; // rcx
  float v98; // xmm2_4
  unsigned int v99; // edx
  __int64 v100; // rax
  __int64 v101; // rax
  int *v102; // rdx
  __int64 v103; // r8
  __int64 v104; // rax
  unsigned int v105; // edx
  unsigned int v106; // xmm3_4
  unsigned int v107; // eax
  __int64 v108; // rcx
  unsigned int *v109; // rax
  unsigned int v110; // xmm0_4
  unsigned int v111; // xmm1_4
  unsigned int v112; // xmm2_4
  unsigned int v113; // ecx
  __int64 v114; // rax
  __int64 v115; // rdx
  int v116; // r8d
  float v117; // xmm4_4
  int v118; // ecx
  float v119; // xmm5_4
  float v120; // xmm3_4
  int v121; // eax
  int v122; // r8d
  unsigned int v123; // ecx
  __int64 v124; // rax
  __int64 v126; // [rsp-20h] [rbp-2298h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002B9C0[16960];
#define v127 (*(int (*))(void *)(sr_frame_14002B9C0 + 0)) /* [rsp+10h] */
#define v128 (*(int (*))(void *)(sr_frame_14002B9C0 + 4)) /* [rsp+14h] */
#define v129 (*(signed int (*))(void *)(sr_frame_14002B9C0 + 8)) /* [rsp+18h] */
#define v130 (*(int (*))(void *)(sr_frame_14002B9C0 + 12)) /* [rsp+1Ch] */
#define v131 (*(int (*))(void *)(sr_frame_14002B9C0 + 16)) /* [rsp+20h] */
#define v132 (*(__int64 (*))(void *)(sr_frame_14002B9C0 + 24)) /* [rsp+28h] */
#define v133 (*(signed int (*))(void *)(sr_frame_14002B9C0 + 32)) /* [rsp+30h] */
#define v134 (*(unsigned int (*))(void *)(sr_frame_14002B9C0 + 36)) /* [rsp+34h] */
#define v135 (*(__int64 (*))(void *)(sr_frame_14002B9C0 + 40)) /* [rsp+38h] */
#define v136 (*(float * (*))(void *)(sr_frame_14002B9C0 + 48)) /* [rsp+40h] */
#define v137 (*(__int64 (*))(void *)(sr_frame_14002B9C0 + 56)) /* [rsp+48h] */
#define v138 (*(_DWORD (*)[2156])(void *)(sr_frame_14002B9C0 + 72)) /* [rsp+58h] */
#define v139 (*(float (*))(void *)(sr_frame_14002B9C0 + 8696)) /* [rsp+2208h] */
#define v140 (*(unsigned int (*))(void *)(sr_frame_14002B9C0 + 8712)) /* [rsp+2218h] */
#define v141 (*(_BYTE (*)[2056])(void *)(sr_frame_14002B9C0 + 8720)) /* [rsp+2220h] */
#define v142 (*(int (*)[4])(void *)(sr_frame_14002B9C0 + 10776)) /* [rsp+2A28h] */
#define v143 (*(int (*)[4])(void *)(sr_frame_14002B9C0 + 10792)) /* [rsp+2A38h] */
#define v144 (*(_BYTE (*)[6144])(void *)(sr_frame_14002B9C0 + 10808)) /* [rsp+2A48h] */
#define v145 (*(__int64 (*))(void *)(sr_frame_14002B9C0 + 16952)) /* [rsp+4248h] */

  v0 = 0;
  v128 = 0;
  if ( (int)dword_140404A6C[438881242] > 0 )
  {
    v1 = 0;
    v2 = dword_140404A6C[456202453];
    v134 = v127;
    v133 = v127;
    v127 = v140;
    v3 = v140;
    v4 = v140;
    v5 = v140;
    v6 = v140;
    v7 = v140;
    v8 = v140;
    v137 = 0;
    v129 = v140;
    while ( 1 )
    {
      v9 = 92 * v1;
      v10 = (float *)&dword_140404A6C[23 * v1 + 437914592];
      v135 = v9;
      v136 = v10;
      v11 = (int)dword_140404A6C[23 * v1 + 437914581];
      *(unsigned int *)((char *)&dword_140404A6C[437914589] + v9) = dword_140404A6C[23 * v1 + 437914586];
      *(unsigned int *)((char *)&dword_140404A6C[437914590] + v9) = dword_140404A6C[23 * v1 + 437914587];
      *(unsigned int *)((char *)&dword_140404A6C[437914591] + v9) = dword_140404A6C[23 * v1 + 437914588];
      *(float *)((char *)&dword_140404A6C[437914593] + v9) = *(float *)&dword_140404A6C[23 * v1 + 437914593]
                                                           - *(float *)&dword_140404A6C[23 * v1 + 437914585];
      v12 = v10[1];
      v13 = *v10;
      v14 = v10[2];
      v15 = (float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14);
      v16 = fsqrt(v15);
      v17 = -(float)(v15 * *(float *)&dword_140404A6C[6 * v11 + 437914198]);
      if ( v16 == 0.0 )
      {
        v19 = 0.0;
        v20 = 0.0;
        v21 = 0.0;
      }
      else
      {
        v18 = 1.0 / v16;
        v19 = (float)(1.0 / v16) * v13;
        v20 = v18 * v12;
        v21 = v18 * v14;
      }
      v22 = (float)(v19 * v17) + v13;
      v23 = 23 * v1;
      v10[2] = (float)(v21 * v17) + v14;
      *v10 = v22;
      v10[1] = (float)(v20 * v17) + v12;
      *(float *)((char *)&dword_140404A6C[437914586] + v9) = v22 + *(float *)((char *)&dword_140404A6C[437914586] + v9);
      *(float *)((char *)&dword_140404A6C[437914587] + v9) = *(float *)((char *)&dword_140404A6C[437914593] + v9)
                                                           + *(float *)((char *)&dword_140404A6C[437914587] + v9);
      *(float *)((char *)&dword_140404A6C[437914588] + v9) = *(float *)((char *)&dword_140404A6C[437914594] + v9)
                                                           + *(float *)((char *)&dword_140404A6C[437914588] + v9);
      v24 = *(float *)&dword_140404A6C[v23 + 437914586];
      v25 = (int)(float)(*(float *)&dword_140404A6C[v23 + 437914589] * 0.25);
      if ( v24 >= *(float *)&dword_140404A6C[v23 + 437914589] )
      {
        v142[0] = (int)(float)(*(float *)&dword_140404A6C[v23 + 437914589] * 0.25);
        v25 = (int)(float)(v24 * 0.25);
      }
      else
      {
        v142[0] = (int)(float)(v24 * 0.25);
      }
      v26 = -1;
      v27 = *(float *)&dword_140404A6C[v23 + 437914587];
      v28 = 1.0;
      v29 = *(float *)&dword_140404A6C[v23 + 437914590];
      v30 = v29 <= v27;
      v31 = -1;
      v143[0] = v25;
      v130 = -1;
      v132 = -1;
      v131 = -1;
      v32 = *(float *)&dword_140404A6C[v23 + 437914588];
      v33 = *(float *)&dword_140404A6C[v23 + 437914591];
      v34 = (int)(float)(v27 * 0.25);
      v35 = (int)(float)(v29 * 0.25);
      v36 = v34;
      if ( v29 <= v27 )
        v36 = (int)(float)(v29 * 0.25);
      v37 = *(float *)&dword_140404A6C[v23 + 437914588] * 0.25;
      if ( v30 )
        v35 = v34;
      v142[1] = v36;
      v143[1] = v35;
      v38 = (int)v37;
      v39 = (int)(float)(v33 * 0.25);
      if ( v33 <= v32 )
      {
        v38 = (int)(float)(v33 * 0.25);
        v39 = (int)v37;
      }
      v143[2] = v39;
      v142[2] = v38;
      if ( v2 )
      {
        v40 = &dword_140404A6C[280651305];
        do
        {
          if ( *(v40 - 2) )
          {
            if ( sub_1400DB060(
                   v0,
                   (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 92LL * v128 + 1755871712),
                   (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 92LL * v128 + 1755871700),
                   0.0)
              && v28 > *(float *)&dword_140404A6C[73006987] )
            {
              v41 = (int)*v40;
              if ( ((_DWORD)v41 != *(unsigned int *)((char *)&dword_140404A6C[437914583] + v9)
                 || dword_140404A6C[73006994] == 7
                 || (int)dword_140404A6C[73006994] <= 4
                 || (int)dword_140404A6C[73006994] >= 10)
                && ((_DWORD)v41 == -1 || !dword_140404A6C[3597 * v41 + 71856277]) )
              {
                v3 = dword_140404A6C[73006981];
                v26 = v0;
                v4 = dword_140404A6C[73006982];
                v28 = *(float *)&dword_140404A6C[73006987];
                v5 = dword_140404A6C[73006983];
                v6 = dword_140404A6C[73006984];
                v7 = dword_140404A6C[73006985];
                v8 = dword_140404A6C[73006986];
                v129 = dword_140404A6C[73006994];
              }
            }
          }
          ++v0;
          v40 += 7166;
        }
        while ( v0 < 256 );
        v10 = v136;
        v42 = &dword_140404A6C[129716709];
        v43 = 0;
        v44 = 0;
        do
        {
          if ( *v42
            && (unsigned int)sub_1400DC940(
                               v43,
                               (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 92LL * v128 + 1755871712),
                               (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 92LL * v128 + 1755871700),
                               1)
            && v28 > *(float *)&dword_140404A6C[73006987] )
          {
            v26 = -1;
            v3 = dword_140404A6C[73006981];
            v28 = *(float *)&dword_140404A6C[73006987];
            v4 = dword_140404A6C[73006982];
            v5 = dword_140404A6C[73006983];
            v6 = dword_140404A6C[73006984];
            v7 = dword_140404A6C[73006985];
            v8 = dword_140404A6C[73006986];
            v134 = dword_140404A6C[73006992];
            v133 = dword_140404A6C[73006993];
            v129 = dword_140404A6C[73006994];
            v130 = v43;
            v132 = v44;
          }
          ++v43;
          ++v44;
          v42 += 5210;
        }
        while ( v43 < 512 );
        sub_140038230((int *)&v140, v142, v143);
        v9 = v135;
        v127 = v140;
        if ( (int)v140 > 0 )
        {
          v45 = 23LL * v128;
          v46 = v140;
          v47 = (float *)&dword_140404A6C[v45 + 437914586];
          v48 = (int *)v141;
          v49 = (float *)&dword_140404A6C[v45 + 437914589];
          do
          {
            v50 = *v48;
            v51 = &dword_140404A6C[1268 * dword_140404A6C[1760 * v50 + 278845898] + 278522247];
            sub_14011BF40(
              (__int64)v144,
              (__int64)v51,
              (float *)&dword_140404A6C[1760 * v50 + 278845916],
              (float *)&dword_140404A6C[1760 * v50 + 278845934]);
            if ( sub_1400DA960((__int64)v138, (__int64)v51, (__int64)v144, v49, v47) && v28 > v139 )
            {
              v3 = v138[0];
              v26 = -1;
              v4 = v138[1];
              v28 = v139;
              v5 = v138[2152];
              v6 = v138[2153];
              v7 = v138[2154];
              v8 = v138[2155];
              v130 = -1;
              v132 = -1;
              v131 = v50;
            }
            v48 += 2;
            --v46;
          }
          while ( v46 );
          v9 = v135;
          v10 = v136;
        }
        v31 = v132;
        v0 = 0;
      }
      if ( (unsigned int)sub_1400DC050(
                           (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 92LL * v128 + 1755871712),
                           (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 92LL * v128 + 1755871700),
                           1)
        && v28 > *(float *)&dword_140404A6C[73006987] )
      {
        break;
      }
      v2 = dword_140404A6C[456202453];
      v58 = dword_140404A6C[283831474];
LABEL_68:
      if ( v2 )
      {
        if ( v26 == -1 )
        {
          v77 = v129;
        }
        else
        {
          v70 = (int)(float)((float)((float)(fsqrt(
                                               (float)((float)(*v10 * *v10) + (float)(v10[1] * v10[1]))
                                             + (float)(v10[2] * v10[2]))
                                           * 330.0)
                                   * *(float *)((char *)&dword_140404A6C[437914584] + v9))
                           - 2.0);
          if ( v70 > 0 )
          {
            v71 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
            HIWORD(dword_140404A6C[308307070]) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v71) = 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v71) = v58;
            *(unsigned int *)((char *)&dword_140404A6C[297756287] + v71) = v3;
            *(unsigned int *)((char *)&dword_140404A6C[297756288] + v71) = v4;
            *(unsigned int *)((char *)&dword_140404A6C[297756289] + v71) = v5;
            *(unsigned int *)((char *)&dword_140404A6C[297756290] + v71) = v6;
            *(unsigned int *)((char *)&dword_140404A6C[297756291] + v71) = v7;
            *(unsigned int *)((char *)&dword_140404A6C[297756292] + v71) = v8;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v71) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v71) = 1;
          }
          else
          {
            v70 = 0;
          }
          if ( v129 == 3 )
          {
            if ( v70 < 25 )
            {
              if ( v70 < 10 )
                v70 *= 2;
              else
                v70 *= 3;
            }
            else
            {
              v70 *= 4;
            }
          }
          v72 = *(int *)((char *)&dword_140404A6C[437914583] + v9);
          if ( (_DWORD)v72 != -1 )
          {
            v73 = dword_140404A6C[7166 * v26 + 280651305];
            if ( v73 != -1 )
              sub_140116D80(v72, v73, v70);
          }
          if ( dword_140404A6C[283831312] != 5 && (_DWORD)v72 != -1 )
          {
            v74 = (int)dword_140404A6C[7166 * v26 + 280651305];
            if ( (_DWORD)v74 != -1
              && (_DWORD)v72 != (_DWORD)v74
              && dword_140404A6C[3597 * v72 + 71856286] == dword_140404A6C[3597 * v74 + 71856286] )
            {
              sub_14011B7F0(v72, v70);
            }
          }
          v75 = 7166LL * v26;
          if ( dword_140404A6C[v75 + 280651319] && (int)dword_140404A6C[v75 + 280651320] > 0 )
            v70 = 0;
          v76 = v70;
          v77 = v129;
          sub_1400A9760(v26, v129, 0, v76);
          v78 = *v10;
          v79 = *(float *)((char *)&dword_140404A6C[437914584] + v9);
          v80 = v10[1];
          v81 = v10[2];
          v2 = dword_140404A6C[456202453];
          v82 = v75 * 4 + 312LL * v129;
          v58 = dword_140404A6C[283831474];
          v83 = fmaxf(*(float *)((char *)&dword_140404A6C[280651472] + v82), 6.0);
          v84 = 47LL * *(int *)((char *)&dword_140404A6C[280651439] + v82);
          *(unsigned int *)((char *)&dword_140404A6C[437914582] + v9) = 0;
          v85 = (float)(v79 / (float)((float)(v83 * 0.5) + v79)) * 3.0;
          *(float *)&dword_140404A6C[v84 + 18215718] = (float)(v85 * v78) + *(float *)&dword_140404A6C[v84 + 18215718];
          *(float *)&dword_140404A6C[v84 + 18215719] = (float)(v85 * v80) + *(float *)&dword_140404A6C[v84 + 18215719];
          *(float *)&dword_140404A6C[v84 + 18215720] = (float)(v85 * v81) + *(float *)&dword_140404A6C[v84 + 18215720];
          v86 = *(float *)&v5 - *(float *)&dword_140404A6C[v84 + 18215717];
          v87 = *(float *)&v3 - *(float *)&dword_140404A6C[v84 + 18215715];
          v88 = *(float *)&v4 - *(float *)&dword_140404A6C[v84 + 18215716];
          *(float *)&dword_140404A6C[v84 + 18215733] = (float)((float)((float)(v86 * v80) - (float)(v88 * v81)) * v85)
                                                     + *(float *)&dword_140404A6C[v84 + 18215733];
          *(float *)&dword_140404A6C[v84 + 18215734] = (float)((float)((float)(v87 * v81) - (float)(v86 * v78)) * v85)
                                                     + *(float *)&dword_140404A6C[v84 + 18215734];
          *(float *)&dword_140404A6C[v84 + 18215735] = (float)((float)((float)(v88 * v78) - (float)(v87 * v80)) * v85)
                                                     + *(float *)&dword_140404A6C[v84 + 18215735];
        }
        v89 = v130;
        if ( v130 != -1 )
        {
          v90 = v133;
          if ( v133 == -1 )
          {
            v115 = 20840 * v31 + 172LL * v77;
            v116 = *(unsigned int *)((char *)&dword_140404A6C[129720378] + v115);
            if ( v116 > 0 )
            {
              v117 = v10[1];
              v118 = 0;
              v119 = *v10;
              v120 = v10[2];
              v121 = (int)(float)((float)((float)(fsqrt(
                                                    (float)((float)(v119 * v119) + (float)(v117 * v117))
                                                  + (float)(v120 * v120))
                                                * 90.0)
                                        * *(float *)((char *)&dword_140404A6C[437914584] + v9))
                                - 2.0);
              if ( v121 > 0 )
                v118 = v121;
              v122 = v116 - v118;
              *(unsigned int *)((char *)&dword_140404A6C[129720378] + v115) = v122;
              if ( v122 <= 0 )
              {
                *(unsigned int *)((char *)&dword_140404A6C[129720376] + v115) = 1;
                *(unsigned int *)((char *)&dword_140404A6C[129720377] + v115) |= 1u;
                *(float *)((char *)&dword_140404A6C[129720387] + v115) = *(float *)((char *)&dword_140404A6C[129720387]
                                                                                  + v115)
                                                                       * 0.75;
                if ( v2 )
                {
                  v123 = dword_140404A6C[308307070];
                  v124 = (__int64)(int)dword_140404A6C[308307070] << 7;
                  *(unsigned int *)((char *)&dword_140404A6C[297756285] + v124) = 4;
                  *(unsigned int *)((char *)&dword_140404A6C[297756286] + v124) = v58;
                  *(unsigned int *)((char *)&dword_140404A6C[297756293] + v124) = v89;
                  *(unsigned int *)((char *)&dword_140404A6C[297756294] + v124) = 1;
                  *(unsigned int *)((char *)&dword_140404A6C[297756295] + v124) = v77;
                  *(unsigned int *)((char *)&dword_140404A6C[297756287] + v124) = v3;
                  *(unsigned int *)((char *)&dword_140404A6C[297756288] + v124) = v4;
                  *(unsigned int *)((char *)&dword_140404A6C[297756289] + v124) = v5;
                  if ( !v10 )
                  {
                    v120 = 0.0;
                    v117 = 0.0;
                    v119 = 0.0;
                  }
                  *(float *)((char *)&dword_140404A6C[297756290] + v124) = v119;
                  *(float *)((char *)&dword_140404A6C[297756291] + v124) = v117;
                  *(float *)((char *)&dword_140404A6C[297756292] + v124) = v120;
                  dword_140404A6C[308307070] = v123 + 1;
                  HIWORD(dword_140404A6C[308307070]) = 0;
                }
              }
            }
          }
          else
          {
            v91 = v10[1];
            v92 = *v10;
            v93 = v10[2];
            v94 = 0;
            v95 = (int)(float)((float)((float)(fsqrt((float)((float)(v92 * v92) + (float)(v91 * v91)) + (float)(v93 * v93))
                                             * 90.0)
                                     * *(float *)((char *)&dword_140404A6C[437914584] + v9))
                             - 2.0);
            if ( v95 > 0 )
              v94 = v95;
            v96 = (int)dword_140404A6C[5210 * v31 + 129716710];
            if ( !dword_140404A6C[24944 * v96 + 346707717] )
            {
              v97 = 20840 * v31 + ((__int64)v133 << 6);
              if ( *(unsigned int *)((char *)&dword_140404A6C[129717234] + v97) == 1 )
              {
                v98 = *(float *)((char *)&dword_140404A6C[129717233] + v97);
                if ( v98 < 8.0 )
                  *(unsigned int *)((char *)&dword_140404A6C[129717235] + v97) = (int)(float)((float)*(int *)((char *)&dword_140404A6C[129717235] + v97)
                                                                                            - (float)(8.0 - v98));
                if ( *(int *)((char *)&dword_140404A6C[129717235] + v97) <= 0 )
                {
                  if ( v2 )
                  {
                    v99 = dword_140404A6C[308307070];
                    v100 = (__int64)(int)dword_140404A6C[308307070] << 7;
                    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v100) = 4;
                    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v100) = v58;
                    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v100) = v89;
                    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v100) = 0;
                    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v100) = v90;
                    *(unsigned int *)((char *)&dword_140404A6C[297756287] + v100) = v3;
                    *(unsigned int *)((char *)&dword_140404A6C[297756288] + v100) = v4;
                    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v100) = v5;
                    if ( !v10 )
                    {
                      v93 = 0.0;
                      v91 = 0.0;
                      v92 = 0.0;
                    }
                    *(float *)((char *)&dword_140404A6C[297756290] + v100) = v92;
                    *(float *)((char *)&dword_140404A6C[297756291] + v100) = v91;
                    *(float *)((char *)&dword_140404A6C[297756292] + v100) = v93;
                    dword_140404A6C[308307070] = v99 + 1;
                    HIWORD(dword_140404A6C[308307070]) = 0;
                  }
                  *(unsigned int *)((char *)&dword_140404A6C[129717235] + v97) = 0;
                }
                goto LABEL_111;
              }
              if ( v2 )
              {
                v101 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
                goto LABEL_109;
              }
              goto LABEL_110;
            }
            if ( (_DWORD)v96 == 13 )
              goto LABEL_111;
            if ( v134 != 1 )
            {
              if ( v2 )
              {
                v101 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
LABEL_109:
                *(unsigned int *)((char *)&dword_140404A6C[297756285] + v101) = 1;
                *(unsigned int *)((char *)&dword_140404A6C[297756286] + v101) = v58;
                *(unsigned int *)((char *)&dword_140404A6C[297756287] + v101) = v3;
                *(unsigned int *)((char *)&dword_140404A6C[297756288] + v101) = v4;
                *(unsigned int *)((char *)&dword_140404A6C[297756289] + v101) = v5;
                *(unsigned int *)((char *)&dword_140404A6C[297756290] + v101) = v6;
                *(unsigned int *)((char *)&dword_140404A6C[297756291] + v101) = v7;
                *(unsigned int *)((char *)&dword_140404A6C[297756292] + v101) = v8;
                *(unsigned int *)((char *)&dword_140404A6C[297756293] + v101) = 0;
                *(unsigned int *)((char *)&dword_140404A6C[297756294] + v101) = 2;
                HIWORD(dword_140404A6C[308307070]) = 0;
              }
LABEL_110:
              sub_14000B650(v89, v94);
              v2 = dword_140404A6C[456202453];
              goto LABEL_111;
            }
            if ( v2 )
            {
              v113 = dword_140404A6C[308307070];
              v114 = (__int64)(int)dword_140404A6C[308307070] << 7;
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v114) = 4;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v114) = v58;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v114) = v89;
              *(unsigned int *)((char *)&dword_140404A6C[297756294] + v114) = 0;
              *(unsigned int *)((char *)&dword_140404A6C[297756295] + v114) = v90;
              *(unsigned int *)((char *)&dword_140404A6C[297756287] + v114) = v3;
              *(unsigned int *)((char *)&dword_140404A6C[297756288] + v114) = v4;
              *(unsigned int *)((char *)&dword_140404A6C[297756289] + v114) = v5;
              if ( !v10 )
              {
                v93 = 0.0;
                v91 = 0.0;
                v92 = 0.0;
              }
              *(float *)((char *)&dword_140404A6C[297756290] + v114) = v92;
              *(float *)((char *)&dword_140404A6C[297756291] + v114) = v91;
              *(float *)((char *)&dword_140404A6C[297756292] + v114) = v93;
              dword_140404A6C[308307070] = v113 + 1;
              HIWORD(dword_140404A6C[308307070]) = 0;
            }
            dword_140404A6C[5210 * v31 + 129719268 + v90] = 1;
          }
LABEL_111:
          *(unsigned int *)((char *)&dword_140404A6C[437914582] + v9) = 0;
        }
        if ( v131 != -1 )
        {
          if ( dword_140404A6C[1760 * v131 + 278845898] == 45 )
            dword_140404A6C[1760 * v131 + 278845971] = 0;
          if ( v127 > 0 )
          {
            v102 = (int *)v141;
            v103 = (unsigned int)v127;
            do
            {
              v104 = *v102;
              v102 += 2;
              *(_QWORD *)&dword_140404A6C[1760 * v104 + 278845895] = 0;
              --v103;
            }
            while ( v103 );
          }
          *(unsigned int *)((char *)&dword_140404A6C[437914582] + v9) = 0;
        }
        v0 = 0;
      }
      v105 = dword_140404A6C[433435845];
      v106 = dword_140404A6C[6 * *(unsigned int *)((char *)&dword_140404A6C[437914581] + v9) + 437914199];
      if ( (int)dword_140404A6C[433435845] < 0x4000 )
      {
        v107 = *(unsigned int *)((char *)&dword_140404A6C[437914586] + v9);
        v108 = 37LL * (int)dword_140404A6C[433435845];
        dword_140404A6C[v108 + 432826949] = 5;
        dword_140404A6C[v108 + 432826952] = v107;
        dword_140404A6C[v108 + 432826953] = *(unsigned int *)((char *)&dword_140404A6C[437914587] + v9);
        dword_140404A6C[v108 + 432826954] = *(unsigned int *)((char *)&dword_140404A6C[437914588] + v9);
        v109 = (unsigned int *)((char *)&dword_140404A6C[437914589] + v9);
        if ( (char *)&dword_140404A6C[437914589] + v9 )
        {
          v110 = v109[2];
          v111 = v109[1];
          v112 = *v109;
        }
        else
        {
          v110 = 0;
          v111 = 0;
          v112 = 0;
        }
        dword_140404A6C[v108 + 432826955] = v112;
        dword_140404A6C[v108 + 432826956] = v111;
        dword_140404A6C[v108 + 432826957] = v110;
        *(_QWORD *)&dword_140404A6C[v108 + 432826950] = 3;
        dword_140404A6C[v108 + 432826984] = v106;
        dword_140404A6C[v108 + 432826985] = v106;
        dword_140404A6C[v108 + 432826983] = 1063256064;
        dword_140404A6C[433435845] = v105 + 1;
      }
      v1 = v137 + 1;
      ++v128;
      ++v137;
      if ( v128 >= (int)dword_140404A6C[438881242] )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    v2 = dword_140404A6C[456202453];
    v26 = -1;
    v3 = dword_140404A6C[73006981];
    v4 = dword_140404A6C[73006982];
    v5 = dword_140404A6C[73006983];
    v6 = dword_140404A6C[73006984];
    v7 = dword_140404A6C[73006985];
    v8 = dword_140404A6C[73006986];
    v130 = -1;
    v131 = -1;
    v132 = -1;
    if ( dword_140404A6C[456202453] )
    {
      v52 = dword_140404A6C[73007005];
      if ( dword_140404A6C[73007015] == -1 )
      {
        v59 = dword_140404A6C[73007002];
        v60 = dword_140404A6C[73007009];
        v61 = dword_140404A6C[73007004];
        v62 = dword_140404A6C[73007003];
        if ( dword_140404A6C[73007002] > 3
          || (dword_140404A6C[73007003] & 0x80000000) != 0
          || (dword_140404A6C[73007009] & 0xE0000000) != 0x80000000
          || (dword_140404A6C[73007010] & 0x10000) == 0 )
        {
          v58 = dword_140404A6C[283831474];
          v0 = 0;
          v69 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v69) = 1;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v69) = v58;
          *(unsigned int *)((char *)&dword_140404A6C[297756287] + v69) = v3;
          *(unsigned int *)((char *)&dword_140404A6C[297756288] + v69) = v4;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v69) = v5;
          *(unsigned int *)((char *)&dword_140404A6C[297756290] + v69) = v6;
          *(unsigned int *)((char *)&dword_140404A6C[297756291] + v69) = v7;
          *(unsigned int *)((char *)&dword_140404A6C[297756292] + v69) = v8;
          *(_QWORD *)((char *)&dword_140404A6C[297756293] + v69) = 0;
          goto LABEL_57;
        }
        v63 = dword_140404A6C[308307070];
        v58 = dword_140404A6C[283831474];
        v64 = LOWORD(dword_140404A6C[73007010]);
        v65 = (__int64)(int)dword_140404A6C[308307070] << 7;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v65) = 16;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v65) = v58;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v65) = v59 + (v62 << 16);
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v65) = v61 + (v52 << 16);
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v65) = v60;
        *(unsigned int *)((char *)&dword_140404A6C[297756296] + v65) = v64;
        *(unsigned int *)((char *)&dword_140404A6C[297756287] + v65) = v3;
        *(unsigned int *)((char *)&dword_140404A6C[297756288] + v65) = v4;
        *(unsigned int *)((char *)&dword_140404A6C[297756289] + v65) = v5;
        if ( v10 )
        {
          v66 = *((_DWORD *)v10 + 2);
          v67 = *((_DWORD *)v10 + 1);
          v68 = *v10;
        }
        else
        {
          v66 = 0;
          v67 = 0;
          v68 = 0.0;
        }
        *(float *)((char *)&dword_140404A6C[297756290] + v65) = v68;
        *(unsigned int *)((char *)&dword_140404A6C[297756291] + v65) = v67;
        *(unsigned int *)((char *)&dword_140404A6C[297756292] + v65) = v66;
        dword_140404A6C[308307070] = v63 + 1;
        HIWORD(dword_140404A6C[308307070]) = 0;
        sub_140016E30(v59, v62, v61, v52, v60 | (0x10000 << v64));
        v9 = v135;
LABEL_56:
        v0 = 0;
LABEL_57:
        v31 = v132;
        *(unsigned int *)((char *)&dword_140404A6C[437914586] + v9) = v3;
        *(unsigned int *)((char *)&dword_140404A6C[437914587] + v9) = v4;
        *(unsigned int *)((char *)&dword_140404A6C[437914588] + v9) = v5;
        *(unsigned int *)((char *)&dword_140404A6C[437914582] + v9) = 0;
        goto LABEL_68;
      }
      v53 = sub_1400169B0(
              dword_140404A6C[73007002],
              dword_140404A6C[73007003],
              dword_140404A6C[73007004],
              dword_140404A6C[73007005]);
      v54 = dword_140404A6C[73007013];
      v55 = v53;
      if ( (int)dword_140404A6C[948 * dword_140404A6C[73007013] + 272299416] > 0 )
      {
        do
        {
          if ( !_bittest(&v55, v0) )
          {
            v56 = sub_1400CDBD0(
                    v54 + (dword_140404A6C[73007014] << 24),
                    v0,
                    dword_140404A6C[73007002],
                    dword_140404A6C[73007003],
                    dword_140404A6C[73007004],
                    dword_140404A6C[73007005]);
            if ( v56 != -1 && v0 == dword_140404A6C[73007015] )
            {
              v57 = 1760LL * v56;
              if ( dword_140404A6C[v57 + 278845898] == 45 )
                dword_140404A6C[v57 + 278845971] = 0;
            }
            v54 = dword_140404A6C[73007013];
          }
          ++v0;
        }
        while ( v0 < (int)dword_140404A6C[948 * v54 + 272299416] );
        v2 = dword_140404A6C[456202453];
      }
    }
    v58 = dword_140404A6C[283831474];
    goto LABEL_56;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v127
#undef v128
#undef v129
#undef v130
#undef v131
#undef v132
#undef v133
#undef v134
#undef v135
#undef v136
#undef v137
#undef v138
#undef v139
#undef v140
#undef v141
#undef v142
#undef v143
#undef v144
#undef v145

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A84898: using guessed type unsigned int;
// 151A848AC: using guessed type unsigned int;
// 151A848B0: using guessed type unsigned int;
// 151A848B4: using guessed type unsigned int;
// 151A848D4: using guessed type unsigned int;
// 151A848D8: using guessed type unsigned int;
// 151A848DC: using guessed type unsigned int;
// 151A848E0: using guessed type unsigned int;
// 151A848F0: using guessed type unsigned int;
// 151A848F4: using guessed type unsigned int;
// 151A84900: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 1A7971D80: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;

//----- (000000014002CE50) ----------------------------------------------------
__int64 sub_14002CE50()
{
  __int64 result; // rax
  int v1; // r8d
  unsigned int *v2; // r9
  int v3; // edx
  __int64 v4; // rdx

  result = dword_140404A6C[438881242];
  v1 = 0;
  if ( (int)dword_140404A6C[438881242] > 0 )
  {
    v2 = &dword_140404A6C[437914582];
    while ( 1 )
    {
      v3 = *v2;
      if ( (int)*v2 < 0x10000 )
        *v2 = --v3;
      if ( v3 > 0 )
      {
        ++v1;
        v2 += 23;
      }
      else if ( v1 >= 0 )
      {
        if ( v1 >= (int)result || (result = (unsigned int)(result - 1), v1 == (_DWORD)result) )
        {
LABEL_12:
          dword_140404A6C[438881242] = result;
          return result;
        }
        v4 = 23LL * (int)result;
        *(_OWORD *)(v2 - 1) = *(_OWORD *)&dword_140404A6C[v4 + 437914581];
        *(_OWORD *)(v2 + 3) = *(_OWORD *)&dword_140404A6C[v4 + 437914585];
        *(_OWORD *)(v2 + 7) = *(_OWORD *)&dword_140404A6C[v4 + 437914589];
        *(_OWORD *)(v2 + 11) = *(_OWORD *)&dword_140404A6C[v4 + 437914593];
        *(_OWORD *)(v2 + 15) = *(_OWORD *)&dword_140404A6C[v4 + 437914597];
        *(_QWORD *)(v2 + 19) = *(_QWORD *)&dword_140404A6C[v4 + 437914601];
        v2[21] = dword_140404A6C[v4 + 437914603];
      }
      if ( v1 >= (int)result )
        goto LABEL_12;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A8E379D4: using guessed type unsigned int;

//----- (000000014002CF10) ----------------------------------------------------
float *           sub_14002CF10(__int64 a1, float *a2, __int64 a3, float *a4, float *a5)
{
  float v6; // xmm6_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm7_4
  float v14; // xmm3_4

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v6 = (float)((float)((float)(a4[1] * a2[1]) + (float)(*a4 * *a2)) + (float)(a2[2] * a4[2])) * *a5;
  v7 = *a4 * v6;
  *(float *)a1 = v7;
  v8 = v6 * a4[1];
  *(float *)(a1 + 4) = v8;
  v9 = v6 * a4[2];
  *(float *)(a1 + 8) = v9;
  v10 = (float)((float)((float)(a4[4] * a2[1]) + (float)(a4[3] * *a2)) + (float)(a4[5] * a2[2])) * a5[1];
  v11 = (float)(a4[3] * v10) + v7;
  *(float *)a1 = v11;
  v12 = (float)(v10 * a4[4]) + v8;
  *(float *)(a1 + 4) = v12;
  v13 = (float)(v10 * a4[5]) + v9;
  *(float *)(a1 + 8) = v13;
  v14 = (float)((float)((float)(a4[7] * a2[1]) + (float)(a4[6] * *a2)) + (float)(a4[8] * a2[2])) * a5[2];
  *(float *)a1 = (float)(a4[6] * v14) + v11;
  *(float *)(a1 + 4) = (float)(v14 * a4[7]) + v12;
  *(float *)(a1 + 8) = (float)(v14 * a4[8]) + v13;
  return a5;
}


//----- (000000014002D050) ----------------------------------------------------
float            sub_14002D050(float *a1, float *a2, float *a3)
{
  float v5; // xmm11_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  float v9; // xmm10_4
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  double v20; // xmm0_8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002D050[32];
#define v22 (*(float (*))(void *)(sr_frame_14002D050 + 0)) /* [rsp+20h] */
#define v23 (*(float (*))(void *)(sr_frame_14002D050 + 4)) /* [rsp+24h] */
#define v24 (*(float (*))(void *)(sr_frame_14002D050 + 8)) /* [rsp+28h] */
#define v25 (*(float (*))(void *)(sr_frame_14002D050 + 12)) /* [rsp+2Ch] */
#define v26 (*(__m128 (*))(void *)(sr_frame_14002D050 + 16)) /* [rsp+30h] */

  sub_14010E370(&v22, a2);
  sub_14010E370(SR_VEC_LANES(128, v26, f32), a3);
  v5 = SR_VEC_LANES(128, v26, f32)[3];
  v6 = SR_VEC_LANES(128, v26, f32)[2];
  v7 = SR_VEC_LANES(128, v26, f32)[0];
  v8 = SR_VEC_LANES(128, v26, f32)[1];
  if ( (float)((float)((float)(v25 * SR_VEC_LANES(128, v26, f32)[3]) + (float)(v24 * SR_VEC_LANES(128, v26, f32)[2]))
             + (float)((float)(v22 * SR_VEC_LANES(128, v26, f32)[0]) + (float)(v23 * SR_VEC_LANES(128, v26, f32)[1]))) < 0.0 )
  {
    v26 = _mm_xor_ps(v26, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v6 = SR_VEC_LANES(128, v26, f32)[2];
    v8 = SR_VEC_LANES(128, v26, f32)[1];
    v7 = SR_VEC_LANES(128, v26, f32)[0];
    v5 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v26, v26, 255), f32)[0];
  }
  v9 = -v8;
  v10 = -v7;
  v11 = -v6;
  v12 = (float)((float)((float)(v10 * v25) + (float)(v5 * v22)) + (float)(v9 * v24)) - (float)(v11 * v23);
  v13 = (float)((float)((float)(v5 * v23) - (float)(v10 * v24)) + (float)(v9 * v25)) + (float)(v11 * v22);
  v14 = (float)((float)((float)(v10 * v23) + (float)(v5 * v24)) - (float)(v9 * v22)) + (float)(v11 * v25);
  v15 = (float)((float)((float)(v25 * v5) - (float)(v10 * v22)) - (float)(v9 * v23)) - (float)(v11 * v24);
  v16 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
  if ( v16 == 0.0 )
  {
    v17 = 0.0;
    v18 = 0.0;
    v19 = 0.0;
  }
  else
  {
    v17 = v14 * (float)(1.0 / v16);
    v18 = v13 * (float)(1.0 / v16);
    v19 = v12 * (float)(1.0 / v16);
  }
  *a1 = v19;
  a1[1] = v18;
  a1[2] = v17;
  v20 = acos(fminf(fmaxf(v15, -1.0), 1.0));
  return v20 + v20;
}
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014002D2D0) ----------------------------------------------------
__m128 *           sub_14002D2D0(__m128 *a1, __m128 *a2, __int64 a3, __int64 a4, __m128 *a5)
{
  __m128 v6; // xmm5
  __m128 v7; // xmm7
  __m128 v8; // xmm1
  __m128 v9; // xmm4

  v6 = *(__m128 *)(a4 + 12);
  v7 = *(__m128 *)(a4 + 24);
  v8 = _mm_unpacklo_ps(*(__m128 *)a4, v6);
  v9 = _mm_mul_ps(
         _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), _mm_shuffle_ps(v8, v7, 30)),
             _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), _mm_movelh_ps(v8, v7))),
           _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 170), _mm_shuffle_ps(_mm_unpackhi_ps(*(__m128 *)a4, v6), v7, 36))),
         *a5);
  *a1 = _mm_add_ps(
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v6), _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *(__m128 *)a4)),
          _mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), v7));
  return a5;
}


//----- (000000014002D370) ----------------------------------------------------
float *           sub_14002D370(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float *result; // rax
  float v6; // xmm12_4
  float v7; // xmm13_4
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm7_4
  float v11; // xmm14_4
  float v12; // xmm8_4
  float v13; // xmm15_4
  float v14; // xmm10_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm10_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm3_4
  float v21; // xmm10_4
  float v22; // xmm7_4
  float v23; // xmm8_4
  float v24; // xmm6_4
  float v25; // xmm11_4
  float v26; // xmm3_4
  float v27; // xmm5_4
  float v28; // xmm6_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm5_4
  float v32; // xmm6_4
  float v33; // xmm13_4
  float v34; // xmm14_4
  float v35; // xmm1_4
  float v36; // xmm5_4
  float v37; // xmm6_4
  float v38; // xmm11_4
  float v39; // xmm5_4
  float v40; // xmm6_4
  float v41; // xmm3_4
  float v42; // xmm11_4
  float v43; // xmm5_4
  float v44; // xmm6_4
  float v45; // xmm13_4
  float v46; // xmm14_4
  float v47; // xmm1_4
  float v48; // xmm5_4
  float v49; // xmm6_4
  float v50; // xmm11_4
  float v51; // xmm5_4
  float v52; // xmm6_4
  float v53; // xmm0_4
  float v54; // xmm11_4
  float v55; // xmm5_4
  float v56; // xmm6_4

  result = a5;
  v6 = a3[1];
  v7 = *a4;
  v8 = *a4 - *a3;
  v9 = a5[2];
  v10 = v9 - a3[2];
  v11 = a4[1];
  v12 = *a5 - *a3;
  v13 = a4[2];
  v14 = a5[1] - v6;
  v15 = v14 * v8;
  v16 = v13 - a3[2];
  v17 = (float)(v14 * v16) - (float)(v10 * (float)(v11 - v6));
  v18 = (float)(v10 * v8) - (float)(v12 * v16);
  v19 = (float)(v12 * (float)(v11 - v6)) - v15;
  v20 = fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19));
  if ( v20 == 0.0 )
  {
    v21 = 0.0;
    v22 = 0.0;
    v23 = 0.0;
  }
  else
  {
    v21 = v17 * (float)(1.0 / v20);
    v22 = v18 * (float)(1.0 / v20);
    v23 = v19 * (float)(1.0 / v20);
  }
  v24 = *a5 - v7;
  v25 = a5[1] - v11;
  v26 = (float)(v25 * v23) - (float)((float)(v9 - v13) * v22);
  v27 = (float)((float)(v9 - v13) * v21) - (float)(v24 * v23);
  v28 = (float)(v24 * v22) - (float)(v25 * v21);
  v29 = fsqrt((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v28 * v28));
  if ( v29 == 0.0 )
  {
    v30 = 0.0;
    v31 = 0.0;
    v32 = 0.0;
  }
  else
  {
    v30 = v26 * (float)(1.0 / v29);
    v31 = v27 * (float)(1.0 / v29);
    v32 = v28 * (float)(1.0 / v29);
  }
  *a1 = (float)((float)((float)((float)(a2[1] - v11) * v31) + (float)((float)(*a2 - v7) * v30))
              + (float)((float)(a2[2] - v13) * v32))
      / (float)((float)((float)((float)(v6 - v11) * v31) + (float)((float)(*a3 - v7) * v30))
              + (float)((float)(a3[2] - v13) * v32));
  v33 = a5[1];
  v34 = a5[2];
  v35 = a3[1] - v33;
  v36 = a3[2] - v34;
  v37 = *a3 - *a5;
  v38 = (float)(v35 * v23) - (float)(v36 * v22);
  v39 = (float)(v36 * v21) - (float)(v37 * v23);
  v40 = (float)(v37 * v22) - (float)(v35 * v21);
  v41 = fsqrt((float)((float)(v39 * v39) + (float)(v38 * v38)) + (float)(v40 * v40));
  if ( v41 == 0.0 )
  {
    v42 = 0.0;
    v43 = 0.0;
    v44 = 0.0;
  }
  else
  {
    v42 = v38 * (float)(1.0 / v41);
    v43 = v39 * (float)(1.0 / v41);
    v44 = v40 * (float)(1.0 / v41);
  }
  a1[1] = (float)((float)((float)((float)(*a2 - *a5) * v42) + (float)((float)(a2[1] - v33) * v43))
                + (float)((float)(a2[2] - v34) * v44))
        / (float)((float)((float)((float)(a4[1] - v33) * v43) + (float)((float)(*a4 - *a5) * v42))
                + (float)((float)(a4[2] - v34) * v44));
  v45 = a3[1];
  v46 = a3[2];
  v47 = a4[1] - v45;
  v48 = a4[2] - v46;
  v49 = *a4 - *a3;
  v50 = (float)(v47 * v23) - (float)(v48 * v22);
  v51 = (float)(v48 * v21) - (float)(v49 * v23);
  v52 = (float)(v49 * v22) - (float)(v47 * v21);
  v53 = fsqrt((float)((float)(v51 * v51) + (float)(v50 * v50)) + (float)(v52 * v52));
  if ( v53 == 0.0 )
  {
    v54 = 0.0;
    v55 = 0.0;
    v56 = 0.0;
  }
  else
  {
    v54 = v50 * (float)(1.0 / v53);
    v55 = v51 * (float)(1.0 / v53);
    v56 = v52 * (float)(1.0 / v53);
  }
  a1[2] = (float)((float)((float)((float)(a2[1] - v45) * v55) + (float)((float)(*a2 - *a3) * v54))
                + (float)((float)(a2[2] - v46) * v56))
        / (float)((float)((float)((float)(*a5 - *a3) * v54) + (float)((float)(a5[1] - v45) * v55))
                + (float)((float)(a5[2] - v46) * v56));
  return result;
}


//----- (000000014002D820) ----------------------------------------------------
double            sub_14002D820(float *a1, float *a2, float a3)
{
  float v3; // xmm5_4
  double v4; // xmm3_8
  float v5; // xmm4_4
  float v6; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  float v9; // xmm4_4
  float v10; // xmm10_4
  float v11; // xmm5_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  double v14; // xmm7_8
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm1_4

  v3 = a1[1];
  v4 = 0.0;
  v5 = *a1;
  v6 = a1[2];
  HIDWORD(v14) = 0;
  v7 = (float)((float)(v3 * a2[1]) + (float)(*a2 * *a1)) + (float)(v6 * a2[2]);
  v8 = *a2 * v7;
  *a1 = v8;
  v9 = v5 - v8;
  v10 = v7 * a2[1];
  v11 = v3 - v10;
  a1[1] = v10;
  v12 = v7 * a2[2];
  v13 = v6 - v12;
  a1[2] = v12;
  *(float *)&v14 = fsqrt((float)((float)(v11 * v11) + (float)(v9 * v9)) + (float)(v13 * v13));
  if ( *(float *)&v14 <= 0.0 )
    return 0.0;
  v15 = v9 * (float)(1.0 / *(float *)&v14);
  v16 = v11 * (float)(1.0 / *(float *)&v14);
  v17 = v13 * (float)(1.0 / *(float *)&v14);
  v18 = fsqrt((float)((float)(v8 * v8) + (float)(v10 * v10)) + (float)(v12 * v12));
  if ( *(float *)&v14 > (float)(v18 * a3) )
  {
    v4 = v14;
    *(float *)&v14 = v18 * a3;
    *(float *)&v4 = (float)((float)(*(float *)&v4 - (float)(v18 * a3)) * v18) * 480.0;
  }
  *a1 = (float)(v15 * *(float *)&v14) + v8;
  a1[1] = (float)(v16 * *(float *)&v14) + v10;
  a1[2] = (float)(v17 * *(float *)&v14) + v12;
  return v4;
}


//----- (000000014002D9B0) ----------------------------------------------------
double            sub_14002D9B0(float *a1, float *a2, float a3, float a4)
{
  float v4; // xmm5_4
  double v5; // xmm4_8
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm10_4
  float v11; // xmm5_4
  float v12; // xmm11_4
  float v13; // xmm6_4
  float v14; // xmm8_4
  float v15; // xmm7_4
  double v16; // xmm3_8
  float v17; // xmm5_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm1_4

  v4 = *a1;
  v5 = 0.0;
  v6 = a1[1];
  v7 = a1[2];
  HIDWORD(v16) = 0;
  v9 = (float)((float)(v6 * a2[1]) + (float)(*a2 * *a1)) + (float)(v7 * a2[2]);
  v10 = *a2 * v9;
  *a1 = v10;
  v11 = v4 - v10;
  v12 = v9 * a2[1];
  v13 = v6 - v12;
  a1[1] = v12;
  v14 = v9 * a2[2];
  v15 = v7 - v14;
  a1[2] = v14;
  *(float *)&v16 = fsqrt((float)((float)(v13 * v13) + (float)(v11 * v11)) + (float)(v15 * v15));
  if ( *(float *)&v16 <= 0.0 )
    return 0.0;
  v17 = v11 * (float)(1.0 / *(float *)&v16);
  v18 = v13 * (float)(1.0 / *(float *)&v16);
  v19 = v15 * (float)(1.0 / *(float *)&v16);
  v20 = fsqrt((float)((float)(v10 * v10) + (float)(v12 * v12)) + (float)(v14 * v14));
  if ( *(float *)&v16 > (float)(v20 * a3) )
  {
    v5 = v16;
    *(float *)&v16 = v20 * a3;
    *(float *)&v5 = (float)((float)(*(float *)&v5 - (float)(v20 * a3)) * v20) * 480.0;
  }
  if ( *(float *)&v16 > a4 )
  {
    *(float *)&v5 = *(float *)&v5 + (float)((float)((float)(*(float *)&v16 - a4) * v20) * 480.0);
    *(float *)&v16 = a4;
  }
  *a1 = (float)(v17 * *(float *)&v16) + v10;
  a1[1] = (float)(v18 * *(float *)&v16) + v12;
  a1[2] = (float)(v19 * *(float *)&v16) + v14;
  return v5;
}


//----- (000000014002DB60) ----------------------------------------------------
__int64            sub_14002DB60(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // xmm11_4
  unsigned int v7; // xmm12_4
  unsigned int v8; // xmm13_4
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rsi
  float v13; // xmm7_4
  unsigned int *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rax
  float *v21; // rcx
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm6_4
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  float *v31; // rcx
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm8_4
  float v35; // xmm0_4
  float v36; // xmm6_4
  float v37; // xmm6_4
  unsigned int *v38; // rdi
  signed int v39; // esi
  unsigned int *v40; // r15
  __int64 v41; // rdx
  unsigned int *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  float *v45; // rcx
  float v46; // xmm8_4
  float v47; // xmm6_4
  unsigned int v48; // eax
  unsigned int *v49; // rdi
  signed int i; // r13d
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  _DWORD *v55; // rax
  __int64 v56; // r15
  float *v57; // rcx
  float v58; // xmm7_4
  float v59; // xmm6_4
  __int64 v60; // rax
  __int64 v61; // rax
  signed int v62; // r12d
  __int64 v63; // r9
  int *v64; // r15
  __int64 v65; // rsi
  __int64 v66; // r8
  unsigned int *v67; // rdx
  float *v68; // rcx
  float v69; // xmm7_4
  float v70; // xmm6_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002DB60[112];
#define v72 (*(__int64 (*))(void *)(sr_frame_14002DB60 + 0)) /* [rsp+0h] */
#define v73 (*(float (*))(void *)(sr_frame_14002DB60 + 64)) /* [rsp+40h] */
#define v74 (*(unsigned __int64 (*))(void *)(sr_frame_14002DB60 + 72)) /* [rsp+48h] */
#define v75 (*(__int64 (*))(void *)(sr_frame_14002DB60 + 80)) /* [rsp+50h] */
#define v76 (*(unsigned int (*))(void *)(sr_frame_14002DB60 + 88)) /* [rsp+58h] */
#define v77 (*(unsigned int (*))(void *)(sr_frame_14002DB60 + 92)) /* [rsp+5Ch] */
#define v78 (*(unsigned int (*))(void *)(sr_frame_14002DB60 + 96)) /* [rsp+60h] */
#define v79 (*(__int64 (*))(void *)(sr_frame_14002DB60 + 104)) /* [rsp+68h] */

  v73 = *(float *)&a1;
  v2 = a1;
  v3 = a2;
  if ( !dword_140404A6C[73991637] )
  {
    v4 = 47224LL * a1;
    dword_140404A6C[v4 + 438887428] = 0;
    dword_140404A6C[v4 + 438887438] = 0;
    dword_140404A6C[v4 + 438887448] = 0;
    dword_140404A6C[v4 + 438887458] = 0;
    dword_140404A6C[v4 + 438887468] = 0;
    dword_140404A6C[v4 + 438887478] = 0;
    dword_140404A6C[v4 + 438887488] = 0;
    dword_140404A6C[v4 + 438887498] = 0;
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  v5 = (int)dword_140404A6C[3597 * a2 + 71856292];
  if ( (_DWORD)v5 == -1 )
  {
    v9 = (int)dword_140404A6C[47224 * a1 + 438887508];
    if ( (_DWORD)v9 == -1 )
    {
      v6 = dword_140404A6C[280651674];
      v7 = dword_140404A6C[280651675];
      v8 = dword_140404A6C[280651676];
    }
    else
    {
      v10 = 7166 * v9;
      v6 = dword_140404A6C[v10 + 280651674];
      v7 = dword_140404A6C[v10 + 280651675];
      v8 = dword_140404A6C[v10 + 280651676];
    }
  }
  else
  {
    v6 = dword_140404A6C[7166 * v5 + 280651674];
    v7 = dword_140404A6C[7166 * v5 + 280651675];
    v8 = dword_140404A6C[7166 * v5 + 280651676];
  }
  v11 = (int)dword_140404A6C[3597 * v3 + 71856292];
  v12 = 8;
  v13 = v73;
  v76 = v6;
  v77 = v7;
  v78 = v8;
  v14 = &dword_140404A6C[47224 * v2 + 438887428];
  v74 = 188896 * v2;
  do
  {
    if ( !*v14 )
      goto LABEL_64;
    v15 = (int)v14[1];
    v13 = 128.0;
    v16 = 3597 * v15;
    if ( !dword_140404A6C[3597 * v15 + 71856253] )
      *v14 = 0;
    v17 = (int)v14[3];
    v18 = 32901 * v15;
    if ( (_DWORD)v17 != -1 )
    {
      v13 = 1.0;
      if ( dword_140404A6C[v18 + 299853693] )
        *v14 = 0;
      v26 = 1760 * v17;
      v27 = dword_140404A6C[v26 + 278845898];
      if ( v27 == 25 )
      {
        v28 = (int)dword_140404A6C[v26 + 278845980];
        if ( (_DWORD)v28 == -1 )
          goto LABEL_56;
        v29 = 1760 * v28;
        if ( dword_140404A6C[1760 * v28 + 278845902] == -1 )
          *v14 = 0;
        if ( dword_140404A6C[v29 + 278845904] )
          *v14 = 0;
        if ( dword_140404A6C[v29 + 278845980] == -1 )
          *v14 = 0;
        if ( dword_140404A6C[v29 + 278846052] != 3 )
LABEL_56:
          *v14 = 0;
      }
      else if ( v27 == 26 )
      {
        v30 = 1760LL * (int)v14[4];
        if ( !dword_140404A6C[v30 + 278845893] )
          *v14 = 0;
        if ( dword_140404A6C[v30 + 278845902] == -1 )
          *v14 = 0;
        if ( (int)dword_140404A6C[v30 + 278845904] >= 2 )
          *v14 = 0;
        if ( !dword_140404A6C[v30 + 278846112] )
          goto LABEL_56;
      }
      v31 = (float *)&dword_140404A6C[v26 + 278845916];
      v32 = *(float *)&dword_140404A6C[v26 + 278845917];
      v33 = (float)(*(float *)&v6 - *(float *)&dword_140404A6C[v26 + 278845916])
          * (float)(*(float *)&v6 - *(float *)&dword_140404A6C[v26 + 278845916]);
      v34 = fsqrt(
              (float)((float)((float)(v31[1] - *(float *)&v7) * (float)(v31[1] - *(float *)&v7))
                    + (float)((float)(*v31 - *(float *)&v6) * (float)(*v31 - *(float *)&v6)))
            + (float)((float)(v31[2] - *(float *)&v8) * (float)(v31[2] - *(float *)&v8)));
      v35 = (float)(*(float *)&v8 - *(float *)&dword_140404A6C[v26 + 278845918])
          * (float)(*(float *)&v8 - *(float *)&dword_140404A6C[v26 + 278845918]);
      *((float *)v14 + 8) = v34;
      if ( (float)((float)((float)((float)(*(float *)&v7 - v32) * (float)(*(float *)&v7 - v32)) + v33) + v35) <= 16384.0 )
      {
        v36 = 1.0;
        if ( (unsigned int)sub_1400DC050(v31, (float *)&v76, 0) )
          v36 = 0.5;
        v34 = *((float *)v14 + 8);
        v8 = v78;
        v7 = v77;
        v6 = v76;
      }
      else
      {
        v36 = 0.5;
      }
      v37 = (float)((float)(v36 - *((float *)v14 + 9)) * 0.125) + *((float *)v14 + 9);
      *((float *)v14 + 9) = v37;
      if ( v34 > v37 )
        goto LABEL_63;
      goto LABEL_64;
    }
    v19 = dword_140404A6C[v18 + 299853695];
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        v13 = 64.0;
      }
      else if ( v19 == 2 )
      {
        v13 = 128.0;
      }
    }
    else
    {
      v13 = 8.0;
    }
    v20 = (int)dword_140404A6C[v16 + 71856292];
    v14[2] = v20;
    if ( dword_140404A6C[v18 + 299853693] )
      *v14 = 0;
    if ( dword_140404A6C[283831448] != 3 )
    {
      if ( v11 == -1 )
      {
        if ( (_DWORD)v20 != -1 )
          goto LABEL_26;
      }
      else
      {
        if ( (_DWORD)v20 == -1 )
        {
          *v14 = 0;
          goto LABEL_34;
        }
LABEL_26:
        if ( (int)dword_140404A6C[280651318] <= 0 )
          *v14 = 0;
        v21 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 28664 * v20 + 1126820052);
        v22 = *v21;
        v23 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 28664 * v20 + 1126820052);
        v24 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 28664 * v20 + 1126820052);
        *((float *)v14 + 8) = fsqrt(
                                (float)((float)((float)(v23 - *(float *)&v7) * (float)(v23 - *(float *)&v7))
                                      + (float)((float)(*v21 - *(float *)&v6) * (float)(*v21 - *(float *)&v6)))
                              + (float)((float)(v24 - *(float *)&v8) * (float)(v24 - *(float *)&v8)));
        if ( (float)((float)((float)((float)(*(float *)&v6 - v22) * (float)(*(float *)&v6 - v22))
                           + (float)((float)(*(float *)&v7 - v23) * (float)(*(float *)&v7 - v23)))
                   + (float)((float)(*(float *)&v8 - v24) * (float)(*(float *)&v8 - v24))) <= 16384.0 )
        {
          v25 = 1.0;
          if ( (unsigned int)sub_1400DC050(v21, (float *)&v76, 0) )
            v25 = 0.5;
          v8 = v78;
          v7 = v77;
          v6 = v76;
        }
        else
        {
          v25 = 0.5;
        }
        *((float *)v14 + 9) = (float)((float)(v25 - *((float *)v14 + 9)) * 0.125) + *((float *)v14 + 9);
      }
LABEL_34:
      if ( (float)(v13 * *((float *)v14 + 9)) >= *((float *)v14 + 8) )
        goto LABEL_64;
LABEL_63:
      *v14 = 0;
    }
LABEL_64:
    v14 += 10;
    --v12;
  }
  while ( v12 );
  v38 = &dword_140404A6C[71856292];
  v39 = 0;
  v40 = &dword_140404A6C[299853695];
  while ( 2 )
  {
    if ( v39 != (_DWORD)v3 && *(v38 - 39) && !*(v40 - 2) )
    {
      v41 = 0;
      v42 = &dword_140404A6C[v74 / 4 + 438887429];
      do
      {
        if ( *(v42 - 1) && *v42 == v39 && v42[1] == *v38 )
          goto LABEL_96;
        ++v41;
        v42 += 10;
      }
      while ( v41 < 8 );
      if ( dword_140404A6C[283831448] == 3 )
      {
LABEL_80:
        v44 = (int)*v38;
        if ( (_DWORD)v44 == -1 || dword_140404A6C[283831448] == 3 )
          goto LABEL_87;
        v45 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 28664 * v44 + 1126820052);
        v46 = fsqrt(
                (float)((float)((float)(v45[1] - *(float *)&v7) * (float)(v45[1] - *(float *)&v7))
                      + (float)((float)(*v45 - *(float *)&v6) * (float)(*v45 - *(float *)&v6)))
              + (float)((float)(v45[2] - *(float *)&v8) * (float)(v45[2] - *(float *)&v8)));
        if ( (float)((float)((float)((float)(*(float *)&v7 - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 28664 * v44 + 1126820052))
                                   * (float)(*(float *)&v7 - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 28664 * v44 + 1126820052)))
                           + (float)((float)(*(float *)&v6 - *v45) * (float)(*(float *)&v6 - *v45)))
                   + (float)((float)(*(float *)&v8 - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 28664 * v44 + 1126820052))
                           * (float)(*(float *)&v8 - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 28664 * v44 + 1126820052)))) <= 16384.0 )
        {
          v47 = 1.0;
          if ( (unsigned int)sub_1400DC050(v45, (float *)&v76, 0) )
            v47 = 0.5;
          v8 = v78;
          v7 = v77;
          v6 = v76;
        }
        else
        {
          v47 = 0.5;
        }
      }
      else
      {
        v43 = (int)*v38;
        if ( v11 != -1 )
        {
          if ( (_DWORD)v43 == -1 )
            goto LABEL_96;
          goto LABEL_79;
        }
        if ( (_DWORD)v43 != -1 )
        {
LABEL_79:
          if ( (int)dword_140404A6C[7166 * v43 + 280651318] <= 0 )
            goto LABEL_96;
          goto LABEL_80;
        }
LABEL_87:
        v46 = 4.0;
        v47 = 1.0;
      }
      v48 = *v40;
      if ( *v40 )
      {
        if ( v48 == 1 )
        {
          v13 = 64.0;
        }
        else if ( v48 == 2 )
        {
          v13 = 128.0;
        }
      }
      else
      {
        v13 = 8.0;
      }
      if ( v46 < (float)(v47 * v13) )
        sub_140007490(SLODWORD(v73), v39, *v38, 0xFFFFFFFF, 0xFFFFFFFF, v46, v47);
    }
LABEL_96:
    ++v39;
    v40 += 32901;
    v38 += 3597;
    if ( v39 < 256 )
      continue;
    break;
  }
  v49 = &dword_140404A6C[278845980];
  for ( i = 0; i < 1024; ++i )
  {
    if ( *(v49 - 87) )
    {
      if ( *(v49 - 82) != 25
        || (v51 = (int)*v49, (_DWORD)v51 == -1)
        || (v52 = (int)*(v49 - 78), (_DWORD)v52 == -1)
        || *(v49 - 76)
        || v49[72] != 3
        || (v53 = (int)dword_140404A6C[7166 * v52 + 280651305], (_DWORD)v53 == -1)
        || dword_140404A6C[32901 * v53 + 299853693] )
      {
LABEL_119:
        if ( *(v49 - 82) == 26 )
        {
          if ( v49[132] )
          {
            v60 = (int)*(v49 - 78);
            if ( (_DWORD)v60 != -1 && (int)*(v49 - 76) < 2 )
            {
              v61 = (int)dword_140404A6C[7166 * v60 + 280651305];
              if ( (_DWORD)v61 != -1 && !dword_140404A6C[32901 * v61 + 299853693] )
              {
                v62 = 0;
                v63 = 1028LL * (int)v49[131];
                v75 = v63;
                if ( *(int *)((char *)&dword_140404A6C[273270157] + v63) > 0 )
                {
                  v64 = (int *)((char *)&dword_140404A6C[273270158] + v63);
                  do
                  {
                    v65 = *v64;
                    if ( i != (_DWORD)v65 )
                    {
                      v66 = 0;
                      v67 = &dword_140404A6C[v74 / 4 + 438887429];
                      while ( !*(v67 - 1)
                           || *v67 != dword_140404A6C[7166 * *(v49 - 78) + 280651305]
                           || v67[2] != (_DWORD)v65 )
                      {
                        ++v66;
                        v67 += 10;
                        if ( v66 >= 8 )
                        {
                          v68 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 7040 * v65 + 1119597020);
                          v69 = fsqrt(
                                  (float)((float)((float)(v68[1] - *(float *)&v7) * (float)(v68[1] - *(float *)&v7))
                                        + (float)((float)(*v68 - *(float *)&v6) * (float)(*v68 - *(float *)&v6)))
                                + (float)((float)(v68[2] - *(float *)&v8) * (float)(v68[2] - *(float *)&v8)));
                          if ( (float)((float)((float)((float)(*(float *)&v7
                                                             - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 7040 * v65 + 1119597020))
                                                     * (float)(*(float *)&v7
                                                             - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 7040 * v65 + 1119597020)))
                                             + (float)((float)(*(float *)&v6 - *v68) * (float)(*(float *)&v6 - *v68)))
                                     + (float)((float)(*(float *)&v8
                                                     - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 7040 * v65 + 1119597020))
                                             * (float)(*(float *)&v8
                                                     - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 7040 * v65 + 1119597020)))) <= 16384.0 )
                          {
                            v70 = 1.0;
                            if ( (unsigned int)sub_1400DC050(v68, (float *)&v76, 0) )
                              v70 = 0.5;
                            v8 = v78;
                            v7 = v77;
                            v6 = v76;
                            v63 = v75;
                          }
                          else
                          {
                            v70 = 0.5;
                          }
                          if ( v69 < v70 )
                          {
                            sub_140007490(
                              SLODWORD(v73),
                              dword_140404A6C[7166 * *(v49 - 78) + 280651305],
                              0xFFFFFFFF,
                              v65,
                              i,
                              v69,
                              v70);
                            v63 = v75;
                          }
                          break;
                        }
                      }
                    }
                    ++v62;
                    ++v64;
                  }
                  while ( v62 < *(int *)((char *)&dword_140404A6C[273270157] + v63) );
                }
              }
            }
          }
        }
      }
      else
      {
        v54 = 0;
        v55 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v74 + 1759763072);
        while ( !*(v55 - 1) || *v55 != (_DWORD)v53 || v55[2] != (_DWORD)v51 )
        {
          ++v54;
          v55 += 10;
          if ( v54 >= 8 )
          {
            v56 = 1760 * v51;
            if ( dword_140404A6C[1760 * v51 + 278845980] == i )
            {
              v57 = (float *)&dword_140404A6C[v56 + 278845916];
              v58 = fsqrt(
                      (float)((float)((float)(v57[1] - *(float *)&v7) * (float)(v57[1] - *(float *)&v7))
                            + (float)((float)(*v57 - *(float *)&v6) * (float)(*v57 - *(float *)&v6)))
                    + (float)((float)(v57[2] - *(float *)&v8) * (float)(v57[2] - *(float *)&v8)));
              if ( (float)((float)((float)((float)(*(float *)&v7 - *(float *)&dword_140404A6C[v56 + 278845917])
                                         * (float)(*(float *)&v7 - *(float *)&dword_140404A6C[v56 + 278845917]))
                                 + (float)((float)(*(float *)&v6 - *(float *)&dword_140404A6C[v56 + 278845916])
                                         * (float)(*(float *)&v6 - *(float *)&dword_140404A6C[v56 + 278845916])))
                         + (float)((float)(*(float *)&v8 - *(float *)&dword_140404A6C[v56 + 278845918])
                                 * (float)(*(float *)&v8 - *(float *)&dword_140404A6C[v56 + 278845918]))) <= 16384.0 )
              {
                v59 = 1.0;
                if ( (unsigned int)sub_1400DC050(v57, (float *)&v76, 0) )
                  v59 = 0.5;
                v8 = v78;
                v7 = v77;
                v6 = v76;
              }
              else
              {
                v59 = 0.5;
              }
              if ( v58 < v59 )
                sub_140007490(
                  SLODWORD(v73),
                  dword_140404A6C[7166 * *(v49 - 78) + 280651305],
                  0xFFFFFFFF,
                  v51,
                  dword_140404A6C[v56 + 278845980],
                  v58,
                  v59);
            }
            goto LABEL_119;
          }
        }
      }
    }
    v49 += 1760;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18329E8D4: using guessed type unsigned int;
// 18329E8D8: using guessed type unsigned int;
// 18329E8DC: using guessed type unsigned int;

//----- (000000014002E730) ----------------------------------------------------
__int64            sub_14002E730(__int64 a1, int a2, __int64 a3, float *a4)
{
  __int64 v4; // r13
  __int64 result; // rax
  signed __int64 v7; // r8
  signed int v8; // esi
  __int64 v9; // r10
  __int64 v10; // r13
  float *v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // r15
  float *v15; // r11
  __int64 v16; // r9
  __int64 v17; // rbx
  float *v18; // r8
  float v19; // xmm0_4
  float *v20; // rcx
  float v21; // xmm10_4
  float v22; // xmm13_4
  __int64 v23; // rdx
  float v24; // xmm12_4
  float v25; // xmm14_4
  float v26; // xmm15_4
  float v27; // xmm9_4
  float v28; // xmm4_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm5_4
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm3_4
  float v35; // xmm5_4
  float v36; // xmm4_4
  float v37; // xmm6_4
  float v38; // xmm7_4
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r12
  float *v42; // r9
  float v43; // xmm15_4
  __int64 v44; // rbx
  float *v45; // rbp
  __int64 v46; // r15
  __int64 v47; // r8
  float *v48; // r11
  __int64 v49; // rdi
  __int64 v50; // rax
  float *v51; // rdx
  float v52; // xmm14_4
  float v53; // xmm13_4
  float v54; // xmm1_4
  float v55; // xmm5_4
  float v56; // xmm3_4
  float v57; // xmm12_4
  float v58; // xmm2_4
  float v59; // xmm4_4
  float v60; // xmm7_4
  float v61; // xmm0_4
  float v62; // xmm6_4
  float v63; // xmm5_4
  float v64; // xmm3_4
  float v65; // xmm7_4
  float v66; // xmm5_4
  float v67; // xmm6_4
  float v68; // xmm4_4
  float v69; // xmm9_4
  float v70; // xmm10_4
  __int64 v71; // rcx
  __m128 v72; // xmm0
  __m128 v73; // xmm2
  __m128 v74; // xmm2
  __m128 v75; // xmm0
  __m128 v76; // xmm2
  unsigned __int64 v77; // rdx
  __m128 v78; // xmm2
  __m128 v79; // xmm0
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002E730[256];
#define v80 (*(__m128i (*))(void *)(sr_frame_14002E730 + 0)) /* [rsp+10h] */
#define v82 (*(signed int (*))(void *)(sr_frame_14002E730 + 248)) /* [rsp+108h] */

  v82 = a2;
  v4 = a1;
  result = a3;
  v7 = 0;
  v8 = 0;
  v9 = a2;
  if ( a2 > 0 )
  {
    v10 = 1;
    v11 = (float *)(result + 4);
    v12 = a2;
    do
    {
      if ( v10 < v9 )
      {
        v13 = v10 + 1;
        v14 = v9 - v10;
        v15 = v11 + 3;
        do
        {
          if ( v13 < v9 )
          {
            v16 = v13 + 1;
            v17 = v9 - v13;
            v18 = v15 + 3;
            do
            {
              if ( v16 < v9 )
              {
                v19 = *(v15 - 1);
                v20 = v18 + 4;
                v21 = *v15;
                v22 = *(v18 - 1) - v19;
                v23 = v9 - v16;
                v24 = v15[1];
                v25 = *v18 - *v15;
                v26 = v18[1] - v24;
                v27 = *(v11 - 1) - v19;
                do
                {
                  v28 = *(v20 - 2) - v19;
                  v29 = *(v20 - 1) - v21;
                  v30 = (float)(v26 * v29) - (float)((float)(*v20 - v24) * v25);
                  v31 = (float)((float)(*v20 - v24) * v22) - (float)(v28 * v26);
                  v32 = (float)(v28 * v25) - (float)(v22 * v29);
                  v33 = fsqrt((float)((float)(v31 * v31) + (float)(v30 * v30)) + (float)(v32 * v32));
                  if ( v33 == 0.0 )
                  {
                    v34 = 0.0;
                    v35 = 0.0;
                    v36 = 0.0;
                  }
                  else
                  {
                    v34 = v30 * (float)(1.0 / v33);
                    v35 = v31 * (float)(1.0 / v33);
                    v36 = v32 * (float)(1.0 / v33);
                  }
                  v37 = *v11 - v21;
                  v38 = v11[1] - v24;
                  if ( (float)((float)((float)(v34 * v27) + (float)(v37 * v35)) + (float)(v36 * v38)) < 0.0 )
                  {
                    v34 = -v34;
                    v35 = -v35;
                    v36 = -v36;
                  }
                  v19 = *(v15 - 1);
                  v39 = v8 + 1;
                  if ( fabs((float)((float)(v34 * v27) + (float)(v37 * v35)) + (float)(v36 * v38)) < 0.000015258789 )
                    v39 = v8;
                  v20 += 3;
                  v8 = v39;
                  --v23;
                }
                while ( v23 );
              }
              v18 += 3;
              ++v16;
              --v17;
            }
            while ( v17 );
          }
          ++v13;
          v15 += 3;
          --v14;
        }
        while ( v14 );
      }
      ++v10;
      v11 += 3;
      --v12;
    }
    while ( v12 );
    v4 = a1;
    v7 = 0;
    result = a3;
    a2 = v82;
  }
  v80 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v8), 0);
  if ( a2 <= 0 )
  {
    LODWORD(v71) = 0;
  }
  else
  {
    v40 = 0;
    v41 = (unsigned int)a2;
    v42 = (float *)(result + 8);
    do
    {
      *(_DWORD *)(v4 + 4 * v40) = 0;
      v43 = 0.0;
      v44 = 0;
      if ( v9 > 0 )
      {
        v45 = (float *)(result + 4);
        do
        {
          v46 = v44 + 1;
          v47 = v44 + 1;
          if ( v44 + 1 < v9 )
          {
            v48 = v45 + 3;
            do
            {
              v49 = v47 + 1;
              v50 = v47 + 1;
              if ( v47 + 1 < v9 )
              {
                v51 = v48 + 4;
                do
                {
                  if ( v44 != v40 && v47 != v40 && v50 != v40 )
                  {
                    v52 = v45[1];
                    v53 = *v45;
                    v54 = v48[1] - v52;
                    v55 = *v51 - v52;
                    v56 = *v48 - *v45;
                    v57 = *(v45 - 1);
                    v58 = *(v51 - 1) - *v45;
                    v59 = *(v48 - 1) - v57;
                    v60 = (float)(v54 * v58) - (float)(v55 * v56);
                    v61 = *(v51 - 2) - v57;
                    v62 = (float)(v61 * v56) - (float)(v59 * v58);
                    v63 = (float)(v55 * v59) - (float)(v61 * v54);
                    v64 = fsqrt((float)((float)(v63 * v63) + (float)(v60 * v60)) + (float)(v62 * v62));
                    if ( v64 == 0.0 )
                    {
                      v65 = 0.0;
                      v66 = 0.0;
                      v67 = 0.0;
                    }
                    else
                    {
                      v65 = v60 * (float)(1.0 / v64);
                      v66 = v63 * (float)(1.0 / v64);
                      v67 = v62 * (float)(1.0 / v64);
                    }
                    v68 = *(v42 - 2) - v57;
                    v69 = *(v42 - 1) - v53;
                    v70 = *v42 - v52;
                    if ( (float)((float)((float)(v66 * v69) + (float)(v65 * v68)) + (float)(v67 * v70)) < 0.0 )
                    {
                      v65 = -v65;
                      v66 = -v66;
                      v67 = -v67;
                    }
                    if ( fabs((float)((float)(v66 * v69) + (float)(v65 * v68)) + (float)(v67 * v70)) >= 0.000015258789 )
                    {
                      v43 = v43
                          + (float)((float)((float)((float)((float)(a4[1] - v53) * v66)
                                                  + (float)((float)(*a4 - v57) * v65))
                                          + (float)((float)(a4[2] - v52) * v67))
                                  / (float)((float)((float)(v66 * v69) + (float)(v65 * v68)) + (float)(v67 * v70)));
                      *(float *)(v4 + 4 * v40) = v43;
                    }
                  }
                  ++v50;
                  v51 += 3;
                }
                while ( v50 < v9 );
              }
              v48 += 3;
              ++v47;
            }
            while ( v49 < v9 );
          }
          v45 += 3;
          ++v44;
        }
        while ( v46 < v9 );
        result = a3;
        v7 = 0;
      }
      ++v40;
      v42 += 3;
      --v41;
    }
    while ( v41 );
    result = v82;
    LODWORD(v71) = 0;
    if ( (unsigned int)v82 >= 0x10 )
    {
      v72 = _mm_cvtepi32_ps(v80);
      result = v4 + 32;
      v73 = _mm_rcp_ps(v72);
      v74 = _mm_sub_ps(_mm_add_ps(v73, v73), _mm_mul_ps(_mm_mul_ps(v73, v73), v72));
      do
      {
        v75 = _mm_loadu_ps((const float *)(const void *)((result - 32)));
        result += 64;
        LODWORD(v71) = v71 + 16;
        v7 += 16LL;
        _mm_storeu_ps((float *)(void *)((result - 96)), _mm_mul_ps(v74, v75));
        _mm_storeu_ps((float *)(void *)((result - 80)), _mm_mul_ps(v74, _mm_loadu_ps((const float *)(const void *)((result - 80)))));
        _mm_storeu_ps((float *)(void *)((result - 64)), _mm_mul_ps(v74, _mm_loadu_ps((const float *)(const void *)((result - 64)))));
        _mm_storeu_ps((float *)(void *)((result - 48)), _mm_mul_ps(_mm_loadu_ps((const float *)(const void *)((result - 48))), v74));
      }
      while ( v7 < (__int64)(v82 & 0xFFFFFFFFFFFFFFF0uLL) );
    }
  }
  v71 = (int)v71;
  if ( (int)v71 < v9 )
  {
    result = v9 - (int)v71;
    if ( result < 4 )
      goto LABEL_57;
    v76 = ((__m128)_mm_cvtsi32_si128((int)(0x3F800000u)));
    result = v4 + 4LL * (int)v71 + 8;
    v77 = ((unsigned __int64)(v9 - (int)v71 - 4) >> 2) + 1;
    SR_VEC_LANES(128, v76, f32)[0] = 1.0 / (float)v8;
    v71 = (int)v71 + 4 * v77;
    v78 = _mm_shuffle_ps(v76, v76, 0);
    do
    {
      v79 = _mm_loadu_ps((const float *)(const void *)((result - 8)));
      result += 16;
      _mm_storeu_ps((float *)(void *)((result - 24)), _mm_mul_ps(v79, v78));
      --v77;
    }
    while ( v77 );
    if ( v71 < v9 )
    {
LABEL_57:
      do
      {
        *(float *)(v4 + 4 * v71) = (float)(1.0 / (float)v8) * *(float *)(v4 + 4 * v71);
        ++v71;
      }
      while ( v71 < v9 );
    }
  }
  return result;
}
#undef v80
#undef v82

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014002EDF0) ----------------------------------------------------
void            sub_14002EDF0(int a1, __int64 a2)
{
  __m128 v2; // xmm6
  __int64 v4; // rdi
  float v5; // xmm7_4
  float v6; // xmm8_4
  double v7; // xmm0_8
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm8_4
  float v12; // xmm8_4
  float v13; // xmm1_4
  unsigned int v14; // xmm8_4
  float v15; // xmm2_4
  float v16; // xmm2_4
  unsigned int v17; // xmm0_4

  v2 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)(a2 + 8))));
  v4 = 7LL * a1;
  SR_VEC_LANES(128, v2, f32)[0] = SR_VEC_LANES(128, v2, f32)[0] - *(float *)&dword_140404A6C[v4 + 284024383];
  v5 = *(float *)a2 - *(float *)&dword_140404A6C[v4 + 284024381];
  v6 = sub_14023F704(v5, -SR_VEC_LANES(128, v2, f32)[0]);
  SR_VEC_LANES(128, v2, f32)[0] = (float)(SR_VEC_LANES(128, v2, f32)[0] * SR_VEC_LANES(128, v2, f32)[0]) + (float)(v5 * v5);
  v7 = sub_14023EDE4(
         (float)(*(float *)&dword_140404A6C[v4 + 284024382] - *(float *)(a2 + 4)),
         SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v2)), f64)[0]);
  v8 = *(float *)&dword_140404A6C[v4 + 284024384];
  v9 = v7;
  v10 = (float)(1.0 - *(float *)&dword_140404A6C[v4 + 284024386]) * 0.04908738521234375;
  if ( (float)(v8 - v6) >= 3.14159265359 )
    v6 = v6 + 6.2831855;
  if ( (float)(v6 - v8) >= 3.14159265359 )
    v8 = v8 + 6.2831855;
  v11 = v6 - v8;
  if ( v11 >= (float)-v10 )
  {
    if ( v11 <= v10 )
      v12 = 0.0;
    else
      v12 = v11 - v10;
  }
  else
  {
    v12 = v11 + v10;
  }
  v13 = *(float *)&dword_140404A6C[v4 + 284024385];
  *(float *)&v14 = (float)(v12 * 0.125) + *(float *)&dword_140404A6C[v4 + 284024384];
  dword_140404A6C[v4 + 284024384] = v14;
  if ( (float)(v13 - v9) >= 3.14159265359 )
    v9 = v9 + 6.2831855;
  if ( (float)(v9 - v13) >= 3.14159265359 )
    v13 = v13 + 6.2831855;
  v15 = v9 - v13;
  if ( v15 >= (float)-v10 )
  {
    if ( v15 <= v10 )
      v16 = 0.0;
    else
      v16 = v15 - v10;
  }
  else
  {
    v16 = v15 + v10;
  }
  *(float *)&dword_140404A6C[v4 + 284024385] = (float)(v16 * 0.125) + *(float *)&dword_140404A6C[v4 + 284024385];
  if ( *(float *)&v14 < -3.14159265359 )
  {
    *(float *)&v17 = *(float *)&v14 + 6.28318530718;
    dword_140404A6C[v4 + 284024384] = v17;
    v14 = v17;
  }
  if ( *(float *)&v14 > 3.14159265359 )
    *(float *)&dword_140404A6C[v4 + 284024384] = *(float *)&v14 - 6.28318530718;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014002EFF0) ----------------------------------------------------
__int64            sub_14002EFF0(int a1)
{
  signed int v1; // r8d
  signed int v2; // edi
  unsigned int v3; // eax
  double v4; // xmm7_8
  __int64 v5; // rsi
  unsigned int v6; // xmm1_4
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rbx
  unsigned int v10; // edx
  float v11; // xmm1_4
  __int64 v12; // rcx
  float v13; // xmm2_4
  float v14; // xmm1_4
  __int128 v15; // xmm1
  double v16; // xmm2_8
  float v17; // xmm2_4
  float v18; // xmm3_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm0_4
  float v23; // xmm10_4
  __int64 v24; // xmm6_8
  float v25; // xmm8_4
  double v26; // xmm0_8
  float v27; // xmm4_4
  float v28; // xmm1_4
  float v29; // xmm3_4
  float v30; // xmm5_4
  double v31; // xmm2_8
  float v32; // xmm8_4
  float v33; // xmm7_4
  double v34; // xmm2_8
  double v35; // xmm2_8
  double v36; // xmm2_8
  double v37; // xmm2_8
  float v38; // xmm3_4
  float v39; // xmm4_4
  float v40; // xmm5_4
  float v41; // xmm0_4
  float v42; // xmm7_4
  float v43; // xmm10_4
  float v44; // xmm6_4
  double v45; // xmm0_8
  float v46; // xmm1_4
  float v47; // xmm7_4
  float v48; // xmm4_4
  float v49; // xmm3_4
  float v50; // xmm2_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002EFF0[176];
#define v52 (*(__int64 (*))(void *)(sr_frame_14002EFF0 + 0)) /* [rsp+0h] */
#define v53 (*(float (*))(void *)(sr_frame_14002EFF0 + 32)) /* [rsp+20h] */
#define v54 (*(float (*))(void *)(sr_frame_14002EFF0 + 36)) /* [rsp+24h] */
#define v55 (*(float (*))(void *)(sr_frame_14002EFF0 + 40)) /* [rsp+28h] */
#define v56 (*(float (*))(void *)(sr_frame_14002EFF0 + 44)) /* [rsp+2Ch] */
#define v57 (*(float (*))(void *)(sr_frame_14002EFF0 + 48)) /* [rsp+30h] */
#define v58 (*(float (*))(void *)(sr_frame_14002EFF0 + 52)) /* [rsp+34h] */
#define v59 (*(float (*))(void *)(sr_frame_14002EFF0 + 56)) /* [rsp+38h] */
#define v60 (*(float (*))(void *)(sr_frame_14002EFF0 + 64)) /* [rsp+40h] */
#define v61 (*(float (*))(void *)(sr_frame_14002EFF0 + 68)) /* [rsp+44h] */
#define v62 (*(float (*))(void *)(sr_frame_14002EFF0 + 72)) /* [rsp+48h] */
#define v63 (*(unsigned int (*))(void *)(sr_frame_14002EFF0 + 80)) /* [rsp+50h] */
#define v64 (*(float (*)[10])(void *)(sr_frame_14002EFF0 + 88)) /* [rsp+58h] */
#define v65 (*(__int128 (*))(void *)(sr_frame_14002EFF0 + 128)) /* [rsp+80h] */
#define v66 (*(__int128 (*))(void *)(sr_frame_14002EFF0 + 144)) /* [rsp+90h] */
#define v67 (*(unsigned int (*))(void *)(sr_frame_14002EFF0 + 160)) /* [rsp+A0h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_14002EFF0 + 168)) /* [rsp+A8h] */

  v1 = dword_140404A6C[284024501];
  v2 = -1;
  if ( dword_140404A6C[284024501] != -1 )
    v2 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292];
  if ( a1 > 0 )
  {
    v3 = dword_140404A6C[284024519];
    *(_QWORD *)&v4 = v63;
    v5 = (unsigned int)a1;
    do
    {
      if ( v2 != -1 )
      {
        if ( v2 != v3 )
        {
          *(_QWORD *)&dword_140404A6C[284024535] = 0;
          dword_140404A6C[284024537] = 0;
          *(_QWORD *)&dword_140404A6C[284024523] = 0;
          dword_140404A6C[284024525] = 0;
          v6 = dword_140404A6C[7166 * v2 + 280651675];
          dword_140404A6C[284024520] = dword_140404A6C[7166 * v2 + 280651674];
          dword_140404A6C[284024522] = dword_140404A6C[7166 * v2 + 280651676];
          v7 = *(_OWORD *)&dword_140404A6C[7166 * v2 + 280651686];
          dword_140404A6C[284024521] = v6;
          v8 = *(_OWORD *)&dword_140404A6C[7166 * v2 + 280651690];
          *(_OWORD *)&dword_140404A6C[284024526] = v7;
          dword_140404A6C[284024534] = dword_140404A6C[7166 * v2 + 280651694];
          *(_OWORD *)&dword_140404A6C[284024530] = v8;
        }
        v9 = 7166LL * v2;
        v10 = dword_140404A6C[v9 + 280651313];
        if ( v10 == -1 )
        {
          v11 = *(float *)&dword_140404A6C[v9 + 280651357];
          v12 = 3597LL * v1;
          v13 = *(float *)&dword_140404A6C[v12 + 71856301];
          if ( (float)(v13 - v11) >= 3.14159265359 )
            v11 = v11 + 6.2831855;
          if ( (float)(v11 - v13) >= 3.14159265359 )
            v13 = v13 + 6.2831855;
          *(_QWORD *)&v4 = dword_140404A6C[v12 + 71856297];
          v14 = v11 - v13;
          if ( (float)(v14 - *(float *)&v4) >= 3.14159265359 )
            *(float *)&v4 = *(float *)&v4 + 6.2831855;
          if ( (float)(*(float *)&v4 - v14) >= 3.14159265359 )
            v14 = v14 + 6.2831855;
          *(float *)&v4 = *(float *)&v4 - v14;
        }
        v15 = *(_OWORD *)&dword_140404A6C[v9 + 280651690];
        v65 = *(_OWORD *)&dword_140404A6C[v9 + 280651686];
        v67 = dword_140404A6C[v9 + 280651694];
        v66 = v15;
        if ( fsqrt(
               (float)((float)(*(float *)&dword_140404A6C[284024527] * *(float *)&dword_140404A6C[284024527])
                     + (float)(*(float *)&dword_140404A6C[284024526] * *(float *)&dword_140404A6C[284024526]))
             + (float)(*(float *)&dword_140404A6C[284024528] * *(float *)&dword_140404A6C[284024528])) < 0.5 )
        {
          v65 = xmmword_140278D30;
          v67 = 1065353216;
          dword_140404A6C[284024534] = 1065353216;
          v66 = xmmword_140278D30;
          *(_OWORD *)&dword_140404A6C[284024526] = xmmword_140278D30;
          *(_OWORD *)&dword_140404A6C[284024530] = xmmword_140278D30;
        }
        if ( v10 == -1 )
        {
          HIDWORD(v16) = HIDWORD(v4);
          *(float *)&v16 = *(float *)&v4 - *(float *)&dword_140404A6C[v9 + 280651365];
        }
        else
        {
          *(_QWORD *)&v16 = dword_140404A6C[3597 * v1 + 71856299];
        }
        sub_14007B2A0((__int64)&v65, (float *)&v65 + 3, v16);
        v17 = *(float *)&dword_140404A6C[v9 + 280651675];
        v18 = *(float *)&dword_140404A6C[v9 + 280651676];
        *(float *)&dword_140404A6C[284024520] = *(float *)&dword_140404A6C[284024520]
                                              + (float)((float)(*(float *)&dword_140404A6C[v9 + 280651674]
                                                              - *(float *)&dword_140404A6C[284024520])
                                                      * 0.5);
        *(float *)&dword_140404A6C[284024521] = *(float *)&dword_140404A6C[284024521]
                                              + (float)((float)(v17 - *(float *)&dword_140404A6C[284024521]) * 0.5);
        *(float *)&dword_140404A6C[284024522] = *(float *)&dword_140404A6C[284024522]
                                              + (float)((float)(v18 - *(float *)&dword_140404A6C[284024522]) * 0.5);
        sub_14011C080(v64, (float *)&v65, (float *)&dword_140404A6C[284024526]);
        sub_14010E370(&v53, v64);
        v19 = -v53;
        v20 = -v54;
        v21 = -v55;
        v53 = v19;
        v54 = v20;
        v55 = v21;
        v22 = fsqrt((float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v21 * v21));
        if ( v22 == 0.0 )
        {
          v23 = 0.0;
          v24 = 0;
          v25 = 0.0;
        }
        else
        {
          HIDWORD(v24) = 0;
          v23 = (float)(1.0 / v22) * v19;
          *(float *)&v24 = (float)(1.0 / v22) * v20;
          v25 = (float)(1.0 / v22) * v21;
        }
        v26 = acos(fminf(fmaxf(v56, -1.0), 1.0));
        v27 = *(float *)&dword_140404A6C[284024530];
        v28 = v26 + v26;
        v58 = *(float *)&v24 * v28;
        v57 = v23 * v28;
        v59 = v25 * v28;
        v60 = (float)((float)((float)(*(float *)&v24 * v28) * *(float *)&dword_140404A6C[284024529])
                    + (float)((float)(v23 * v28) * *(float *)&dword_140404A6C[284024526]))
            + (float)((float)(v25 * v28) * *(float *)&dword_140404A6C[284024532]);
        v61 = (float)((float)((float)(*(float *)&v24 * v28) * *(float *)&dword_140404A6C[284024530])
                    + (float)((float)(v23 * v28) * *(float *)&dword_140404A6C[284024527]))
            + (float)((float)(v25 * v28) * *(float *)&dword_140404A6C[284024533]);
        v29 = (float)(v60 * 0.125) + *(float *)&dword_140404A6C[284024535];
        v62 = (float)((float)((float)(*(float *)&v24 * v28) * *(float *)&dword_140404A6C[284024531])
                    + (float)((float)(v23 * v28) * *(float *)&dword_140404A6C[284024528]))
            + (float)((float)(v25 * v28) * *(float *)&dword_140404A6C[284024534]);
        v30 = (float)(v61 * 0.125) + *(float *)&dword_140404A6C[284024536];
        *(float *)&v24 = (float)(v62 * 0.125) + *(float *)&dword_140404A6C[284024537];
        HIDWORD(v31) = HIDWORD(v24);
        *(float *)&dword_140404A6C[284024535] = v29 * 0.5;
        *(float *)&dword_140404A6C[284024536] = v30 * 0.5;
        *(float *)&dword_140404A6C[284024537] = *(float *)&v24 * 0.5;
        *(float *)&v31 = fsqrt(
                           (float)((float)((float)(v30 * v30) + (float)(v29 * v29))
                                 + (float)(*(float *)&v24 * *(float *)&v24))
                         * 0.25);
        if ( *(float *)&v31 > 0.000015258789 )
        {
          v58 = (float)((float)(1.0 / *(float *)&v31) * v30) * 0.5;
          v57 = (float)(v29 * (float)(1.0 / *(float *)&v31)) * 0.5;
          v59 = (float)(*(float *)&v24 * (float)(1.0 / *(float *)&v31)) * 0.5;
          sub_14007B2A0((__int64)&dword_140404A6C[284024526], &v57, v31);
          v27 = *(float *)&dword_140404A6C[284024530];
        }
        if ( dword_140404A6C[v9 + 280651313] == -1 && dword_140404A6C[v9 + 280651334] )
        {
          if ( v27 <= 0.0 )
            v32 = 0.0;
          else
            v32 = fabs((float)(v27 * v27) * v27);
          v33 = *(float *)&v4 + *(float *)&dword_140404A6C[v9 + 280651341];
          v65 = xmmword_140278D30;
          v66 = xmmword_140278D30;
          v67 = 1065353216;
          *(_QWORD *)&v34 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856299];
          *(float *)&v34 = (float)(*(float *)&v34 * 0.5) + v33;
          sub_14007B2A0((__int64)&v65, (float *)&v65 + 3, v34);
          *(_QWORD *)&v35 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856300];
          *(float *)&v35 = (float)(*(float *)&v35 * 0.75) + (float)(*(float *)&dword_140404A6C[v9 + 280651342] * 0.5);
          sub_14007B2A0((__int64)&v65, (float *)&v65, v35);
          *(_QWORD *)&v36 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856299];
          *(float *)&v36 = *(float *)&v36 * 0.5;
          sub_14007B2A0((__int64)&v65, (float *)&v65 + 3, v36);
          *(_QWORD *)&v37 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856300];
          *(float *)&v37 = (float)(*(float *)&v37 * 0.25) + (float)(*(float *)&dword_140404A6C[v9 + 280651342] * 0.5);
          sub_14007B2A0((__int64)&v65, (float *)&v65, v37);
          sub_14011C080(v64, (float *)&v65, (float *)&dword_140404A6C[284024526]);
          sub_14010E370(&v53, v64);
          v38 = -v53;
          v39 = -v54;
          v40 = -v55;
          v53 = v38;
          v54 = v39;
          v55 = v40;
          v41 = fsqrt((float)((float)(v38 * v38) + (float)(v39 * v39)) + (float)(v40 * v40));
          if ( v41 == 0.0 )
          {
            v42 = 0.0;
            v43 = 0.0;
            v44 = 0.0;
          }
          else
          {
            v42 = (float)(1.0 / v41) * v38;
            v43 = (float)(1.0 / v41) * v39;
            v44 = (float)(1.0 / v41) * v40;
          }
          v45 = acos(fminf(fmaxf(v56, -1.0), 1.0));
          v46 = v45 + v45;
          v47 = v42 * v46;
          v59 = v44 * v46;
          v58 = v43 * v46;
          v48 = (float)((float)(*(float *)&dword_140404A6C[284024529] * (float)(v43 * v46))
                      + (float)(*(float *)&dword_140404A6C[284024526] * v47))
              + (float)(*(float *)&dword_140404A6C[284024532] * (float)(v44 * v46));
          v57 = v47;
          v49 = (float)((float)(*(float *)&dword_140404A6C[284024530] * (float)(v43 * v46))
                      + (float)(*(float *)&dword_140404A6C[284024527] * v47))
              + (float)(*(float *)&dword_140404A6C[284024533] * (float)(v44 * v46));
          HIDWORD(v4) = 0;
          v50 = (float)((float)(*(float *)&dword_140404A6C[284024531] * (float)(v43 * v46))
                      + (float)(*(float *)&dword_140404A6C[284024528] * v47))
              + (float)(*(float *)&dword_140404A6C[284024534] * (float)(v44 * v46));
          v60 = v48 * 0.5;
          v61 = v49 * 0.5;
          v62 = v50 * 0.5;
          *(float *)&v4 = fsqrt((float)((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50)) * 0.25);
          if ( *(float *)&v4 > 0.000015258789 )
          {
            v62 = (float)(1.0 / *(float *)&v4) * (float)(v50 * 0.5);
            v61 = (float)(1.0 / *(float *)&v4) * (float)(v49 * 0.5);
            v60 = (float)(1.0 / *(float *)&v4) * (float)(v48 * 0.5);
            v4 = fmin(fmax(v32 * -0.39269908169875, *(float *)&v4), v32 * 0.39269908169875);
            sub_14007B2A0((__int64)&dword_140404A6C[284024526], &v60, v4);
          }
        }
        v1 = dword_140404A6C[284024501];
      }
      ++dword_140404A6C[283831476];
      v3 = v2;
      dword_140404A6C[284024519] = v2;
      --v5;
    }
    while ( v5 );
  }
  return 0; /* the function has no caller */
}
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD3C: using guessed type unsigned int;
// 183F7C540: using guessed type unsigned int;
// 183F7C588: using guessed type unsigned int;
// 183F7C58C: using guessed type unsigned int;
// 183F7C590: using guessed type unsigned int;
// 183F7C594: using guessed type unsigned int;
// 183F7C598: using guessed type unsigned int;
// 183F7C5A0: using guessed type unsigned int;
// 183F7C5A4: using guessed type unsigned int;
// 183F7C5B4: using guessed type unsigned int;
// 183F7C5C4: using guessed type unsigned int;
// 183F7C5C8: using guessed type unsigned int;
// 183F7C5D0: using guessed type unsigned int;

//----- (000000014002FA00) ----------------------------------------------------
__int64 sub_14002FA00()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  unsigned int v2; // xmm1_4
  unsigned int v3; // xmm2_4
  unsigned int v4; // xmm5_4
  unsigned int v5; // xmm6_4
  __int128 v6; // xmm0
  unsigned int v7; // xmm1_4
  float v8; // xmm4_4
  __int64 v9; // rbx
  float v10; // xmm3_4
  double v11; // xmm8_8
  double v12; // xmm13_8
  double v13; // xmm0_8
  double v14; // xmm0_8
  __int128 v15; // xmm1
  float v16; // xmm0_4
  float *v17; // rdx
  double v18; // xmm2_8
  double v19; // xmm2_8
  double v20; // xmm2_8
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm15_4
  float v24; // xmm4_4
  float v25; // xmm5_4
  float v26; // xmm10_4
  float v27; // xmm7_4
  float v28; // xmm0_4
  float v29; // xmm8_4
  float v30; // xmm5_4
  float v31; // xmm8_4
  float v32; // xmm6_4
  float v33; // xmm1_4
  float v34; // xmm10_4
  float v35; // xmm6_4
  float v36; // xmm0_4
  float v37; // xmm4_4
  float v38; // xmm8_4
  float v39; // xmm3_4
  float v40; // xmm4_4
  float v41; // xmm7_4
  float v42; // xmm6_4
  float v43; // xmm8_4
  double v44; // xmm0_8
  float v45; // xmm1_4
  float v46; // xmm6_4
  float v47; // xmm7_4
  float v48; // xmm8_4
  double v49; // xmm2_8
  float v50; // xmm1_4
  float v51; // xmm10_4
  float v52; // xmm13_4
  float v53; // xmm10_4
  double v54; // xmm2_8
  __int64 v55; // rcx
  double v56; // xmm2_8
  double v57; // xmm2_8
  __int64 v58; // rcx
  double v59; // xmm2_8
  float v60; // xmm15_4
  float v61; // xmm4_4
  float v62; // xmm5_4
  float v63; // xmm13_4
  float v64; // xmm4_4
  float v65; // xmm13_4
  float v66; // xmm5_4
  float v67; // xmm6_4
  float v68; // xmm8_4
  float v69; // xmm7_4
  float v70; // xmm3_4
  float v71; // xmm4_4
  float v72; // xmm6_4
  float v73; // xmm8_4
  float v74; // xmm7_4
  double v75; // xmm0_8
  float v76; // xmm1_4
  float v77; // xmm6_4
  float v78; // xmm8_4
  float v79; // xmm7_4
  float v80; // xmm3_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002FA00[144];
#define v82 (*(__int64 (*))(void *)(sr_frame_14002FA00 + 8)) /* [rsp+8h] */
#define v83 (*(float (*))(void *)(sr_frame_14002FA00 + 40)) /* [rsp+28h] */
#define v84 (*(float (*))(void *)(sr_frame_14002FA00 + 44)) /* [rsp+2Ch] */
#define v85 (*(_QWORD (*)[3])(void *)(sr_frame_14002FA00 + 48)) /* [rsp+30h] */
#define v86 (*(float (*))(void *)(sr_frame_14002FA00 + 80)) /* [rsp+50h] */
#define v87 (*(float (*))(void *)(sr_frame_14002FA00 + 84)) /* [rsp+54h] */
#define v88 (*(float (*))(void *)(sr_frame_14002FA00 + 88)) /* [rsp+58h] */
#define v89 (*(__int128 (*))(void *)(sr_frame_14002FA00 + 96)) /* [rsp+60h] */
#define v90 (*(__int128 (*))(void *)(sr_frame_14002FA00 + 112)) /* [rsp+70h] */
#define v91 (*(unsigned int (*))(void *)(sr_frame_14002FA00 + 128)) /* [rsp+80h] */
#define v92 (*(__int64 (*))(void *)(sr_frame_14002FA00 + 136)) /* [rsp+88h] */

  if ( dword_140404A6C[284024501] == -1 )
  {
    dword_140404A6C[284024519] = -1;
    return 0; /* the function has no caller */
  }
  v0 = 3597LL * (int)dword_140404A6C[284024501];
  v1 = (int)dword_140404A6C[v0 + 71856292];
  if ( (_DWORD)v1 == -1 )
  {
    dword_140404A6C[284024519] = -1;
    return 0; /* the function has no caller */
  }
  if ( (_DWORD)v1 == dword_140404A6C[284024519] )
  {
    v5 = dword_140404A6C[284024528];
    v4 = dword_140404A6C[284024527];
    v3 = dword_140404A6C[284024526];
  }
  else
  {
    *(_QWORD *)&dword_140404A6C[284024535] = 0;
    dword_140404A6C[284024537] = 0;
    *(_QWORD *)&dword_140404A6C[284024523] = 0;
    dword_140404A6C[284024525] = 0;
    v2 = dword_140404A6C[344 * v1 + 284956408];
    v3 = dword_140404A6C[344 * v1 + 284956410];
    v4 = dword_140404A6C[344 * v1 + 284956411];
    v5 = dword_140404A6C[344 * v1 + 284956412];
    dword_140404A6C[284024520] = dword_140404A6C[344 * v1 + 284956407];
    dword_140404A6C[284024522] = dword_140404A6C[344 * v1 + 284956409];
    v6 = *(_OWORD *)&dword_140404A6C[344 * v1 + 284956413];
    dword_140404A6C[284024521] = v2;
    v7 = dword_140404A6C[344 * v1 + 284956417];
    *(_OWORD *)&dword_140404A6C[284024529] = v6;
    dword_140404A6C[284024534] = dword_140404A6C[344 * v1 + 284956418];
    dword_140404A6C[284024526] = v3;
    dword_140404A6C[284024527] = v4;
    dword_140404A6C[284024528] = v5;
    dword_140404A6C[284024533] = v7;
  }
  v8 = *(float *)&dword_140404A6C[v0 + 71856301];
  v9 = 344 * v1;
  v10 = *(float *)&dword_140404A6C[344 * v1 + 284956339];
  if ( (float)(v8 - v10) >= 3.14159265359 )
    v10 = v10 + 6.28318530718;
  if ( (float)(v10 - v8) >= 3.14159265359 )
    v8 = v8 + 6.28318530718;
  *(_QWORD *)&v11 = dword_140404A6C[v0 + 71856297];
  HIDWORD(v12) = HIDWORD(v11);
  *(float *)&v12 = *(float *)&v11 - (float)(v10 - v8);
  v13 = *(float *)&v12;
  if ( *(float *)&v12 < -3.14159265359 )
  {
    v14 = v13 + 6.28318530718;
LABEL_14:
    v12 = v14;
    goto LABEL_15;
  }
  if ( v13 > 3.14159265359 )
  {
    v14 = v13 - 6.28318530718;
    goto LABEL_14;
  }
LABEL_15:
  v15 = *(_OWORD *)&dword_140404A6C[v9 + 284956414];
  v89 = *(_OWORD *)&dword_140404A6C[v9 + 284956410];
  v91 = dword_140404A6C[v9 + 284956418];
  v90 = v15;
  if ( fsqrt(
         (float)((float)(*(float *)&v3 * *(float *)&v3) + (float)(*(float *)&v4 * *(float *)&v4))
       + (float)(*(float *)&v5 * *(float *)&v5)) < 0.5 )
  {
    v89 = xmmword_140278D30;
    v91 = 1065353216;
    dword_140404A6C[284024534] = 1065353216;
    v90 = xmmword_140278D30;
    *(_OWORD *)&dword_140404A6C[284024526] = xmmword_140278D30;
    *(_OWORD *)&dword_140404A6C[284024530] = xmmword_140278D30;
  }
  v16 = *(float *)&dword_140404A6C[v9 + 284956341];
  v17 = (float *)&v89 + 3;
  if ( dword_140404A6C[7166 * v1 + 280651313] == -1 )
  {
    HIDWORD(v18) = HIDWORD(v12);
    *(float *)&v18 = *(float *)&v12 - v16;
  }
  else
  {
    *(float *)&v11 = (float)(*(float *)&v11 - v16) * 0.5;
    sub_14007B2A0((__int64)&v89, (float *)&v89 + 3, v11);
    *(_QWORD *)&v19 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856298];
    *(float *)&v19 = (float)(*(float *)&v19 - *(float *)&dword_140404A6C[v9 + 284956342]) * 0.5;
    sub_14007B2A0((__int64)&v89, (float *)&v89, v19);
    *(_QWORD *)&v20 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856297];
    *(float *)&v20 = (float)(*(float *)&v20 - *(float *)&dword_140404A6C[v9 + 284956341]) * 0.5;
    sub_14007B2A0((__int64)&v89, (float *)&v89 + 3, v20);
    v17 = (float *)&v89;
    *(_QWORD *)&v18 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856298];
    *(float *)&v18 = (float)(*(float *)&v18 - *(float *)&dword_140404A6C[v9 + 284956342]) * 0.5;
  }
  sub_14007B2A0((__int64)&v89, v17, v18);
  v21 = *(float *)&dword_140404A6C[v9 + 284956408];
  v22 = *(float *)&dword_140404A6C[v9 + 284956409];
  *(float *)&dword_140404A6C[284024520] = *(float *)&dword_140404A6C[284024520]
                                        + (float)((float)(*(float *)&dword_140404A6C[v9 + 284956407]
                                                        - *(float *)&dword_140404A6C[284024520])
                                                * 0.5);
  *(float *)&dword_140404A6C[284024521] = *(float *)&dword_140404A6C[284024521]
                                        + (float)((float)(v21 - *(float *)&dword_140404A6C[284024521]) * 0.5);
  *(float *)&dword_140404A6C[284024522] = *(float *)&dword_140404A6C[284024522]
                                        + (float)((float)(v22 - *(float *)&dword_140404A6C[284024522]) * 0.5);
  sub_14010E370(&v83, (float *)&v89);
  sub_14010E370((float *)&v85[1], (float *)&dword_140404A6C[284024526]);
  v23 = *((float *)&v85[2] + 1);
  v24 = *(float *)&v85[2];
  v25 = *(float *)&v85[1];
  v26 = *((float *)&v85[1] + 1);
  if ( (float)((float)((float)(*((float *)v85 + 1) * *((float *)&v85[2] + 1))
                     + (float)(*(float *)v85 * *(float *)&v85[2]))
             + (float)((float)(v83 * *(float *)&v85[1]) + (float)(v84 * *((float *)&v85[1] + 1)))) < 0.0 )
  {
    *(__m128 *)&v85[1] = _mm_xor_ps(*(__m128 *)&v85[1], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v24 = *(float *)&v85[2];
    v26 = *((float *)&v85[1] + 1);
    v25 = *(float *)&v85[1];
    v23 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(*(__m128 *)&v85[1], *(__m128 *)&v85[1], 255), f32)[0];
  }
  *(float *)&v85[2] = -v24;
  *(float *)&v85[1] = -v25;
  *((float *)&v85[1] + 1) = -v26;
  v27 = (float)((float)((float)(*((float *)v85 + 1) * (float)-v25) + (float)(v23 * v83))
              + (float)(*(float *)v85 * (float)-v26))
      - (float)(v84 * (float)-v24);
  v28 = (float)-v25 * *(float *)v85;
  v29 = -v25;
  v30 = (float)-v25 * v83;
  v31 = v29 * v84;
  v32 = (float)((float)(v23 * v84) - v28) + (float)((float)-v26 * *((float *)v85 + 1));
  v33 = (float)-v26 * v83;
  v34 = (float)-v26 * v84;
  v35 = v32 + (float)((float)-v24 * v83);
  v83 = v27;
  v84 = v35;
  v36 = -v24;
  v37 = (float)-v24 * *(float *)v85;
  v38 = (float)((float)(v31 + (float)(v23 * *(float *)v85)) - v33) + (float)(v36 * *((float *)v85 + 1));
  *(float *)v85 = v38;
  v39 = (float)((float)((float)(*((float *)v85 + 1) * v23) - v30) - v34) - v37;
  *((float *)v85 + 1) = v39;
  v40 = fsqrt((float)((float)(v27 * v27) + (float)(v35 * v35)) + (float)(v38 * v38));
  if ( v40 == 0.0 )
  {
    v41 = 0.0;
    v42 = 0.0;
    v43 = 0.0;
  }
  else
  {
    v41 = v27 * (float)(1.0 / v40);
    v42 = v35 * (float)(1.0 / v40);
    v43 = v38 * (float)(1.0 / v40);
  }
  v44 = acos(fminf(fmaxf(v39, -1.0), 1.0));
  HIDWORD(v49) = 0;
  v45 = v44 + v44;
  v46 = (float)((float)(v42 * v45) * 0.125) + *(float *)&dword_140404A6C[284024536];
  v47 = (float)((float)(v41 * v45) * 0.125) + *(float *)&dword_140404A6C[284024535];
  v48 = (float)((float)(v43 * v45) * 0.125) + *(float *)&dword_140404A6C[284024537];
  *(float *)&dword_140404A6C[284024535] = v47 * 0.5;
  *(float *)&dword_140404A6C[284024536] = v46 * 0.5;
  *(float *)&dword_140404A6C[284024537] = v48 * 0.5;
  *(float *)&v49 = fsqrt((float)((float)((float)(v46 * v46) + (float)(v47 * v47)) + (float)(v48 * v48)) * 0.25);
  if ( *(float *)&v49 > 0.000015258789 )
  {
    v86 = (float)(v47 * 0.5) * (float)(1.0 / *(float *)&v49);
    v87 = (float)(v46 * 0.5) * (float)(1.0 / *(float *)&v49);
    v88 = (float)(v48 * 0.5) * (float)(1.0 / *(float *)&v49);
    sub_14007B2A0((__int64)&dword_140404A6C[284024526], &v86, v49);
  }
  if ( dword_140404A6C[7166 * v1 + 280651313] == -1 )
  {
    v50 = *(float *)&dword_140404A6C[v9 + 284956343];
    if ( v50 > 0.0 )
    {
      if ( *(float *)&dword_140404A6C[284024530] <= 0.0 )
        v51 = 0.0;
      else
        v51 = fabs(
                (float)(*(float *)&dword_140404A6C[284024530] * *(float *)&dword_140404A6C[284024530])
              * *(float *)&dword_140404A6C[284024530]);
      v52 = *(float *)&v12 + *(float *)&dword_140404A6C[v9 + 284956337];
      v53 = v51 * v50;
      v89 = xmmword_140278D30;
      v90 = xmmword_140278D30;
      v91 = 1065353216;
      *(_QWORD *)&v54 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856299];
      *(float *)&v54 = (float)(*(float *)&v54 * 0.5) + v52;
      sub_14007B2A0((__int64)&v89, (float *)&v89 + 3, v54);
      v55 = 3597LL * (int)dword_140404A6C[284024501];
      *(_QWORD *)&v56 = dword_140404A6C[v55 + 71856300];
      *(float *)&v56 = (float)(*(float *)&v56 * 0.75) + (float)(*(float *)&dword_140404A6C[v55 + 71856298] * 0.5);
      sub_14007B2A0((__int64)&v89, (float *)&v89, v56);
      *(_QWORD *)&v57 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856299];
      *(float *)&v57 = *(float *)&v57 * 0.5;
      sub_14007B2A0((__int64)&v89, (float *)&v89 + 3, v57);
      v58 = 3597LL * (int)dword_140404A6C[284024501];
      *(_QWORD *)&v59 = dword_140404A6C[v58 + 71856300];
      *(float *)&v59 = (float)(*(float *)&v59 * 0.25) + (float)(*(float *)&dword_140404A6C[v58 + 71856298] * 0.5);
      sub_14007B2A0((__int64)&v89, (float *)&v89, v59);
      sub_14010E370(&v83, (float *)&v89);
      sub_14010E370((float *)&v85[1], (float *)&dword_140404A6C[284024526]);
      v60 = *((float *)&v85[2] + 1);
      v61 = *(float *)&v85[2];
      v62 = *(float *)&v85[1];
      v63 = *((float *)&v85[1] + 1);
      if ( (float)((float)((float)(*((float *)v85 + 1) * *((float *)&v85[2] + 1))
                         + (float)(*(float *)v85 * *(float *)&v85[2]))
                 + (float)((float)(v83 * *(float *)&v85[1]) + (float)(v84 * *((float *)&v85[1] + 1)))) < 0.0 )
      {
        *(__m128 *)&v85[1] = _mm_xor_ps(*(__m128 *)&v85[1], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
        v61 = *(float *)&v85[2];
        v63 = *((float *)&v85[1] + 1);
        v62 = *(float *)&v85[1];
        v60 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(*(__m128 *)&v85[1], *(__m128 *)&v85[1], 255), f32)[0];
      }
      v64 = -v61;
      v65 = -v63;
      v66 = -v62;
      v67 = (float)((float)((float)(*((float *)v85 + 1) * v66) + (float)(v60 * v83)) + (float)(*(float *)v85 * v65))
          - (float)(v84 * v64);
      v68 = (float)((float)((float)(v60 * v84) - (float)(*(float *)v85 * v66)) + (float)(*((float *)v85 + 1) * v65))
          + (float)(v83 * v64);
      v69 = (float)((float)((float)(v84 * v66) + (float)(v60 * *(float *)v85)) - (float)(v83 * v65))
          + (float)(*((float *)v85 + 1) * v64);
      v70 = (float)((float)((float)(*((float *)v85 + 1) * v60) - (float)(v83 * v66)) - (float)(v84 * v65))
          - (float)(*(float *)v85 * v64);
      v71 = fsqrt((float)((float)(v68 * v68) + (float)(v67 * v67)) + (float)(v69 * v69));
      if ( v71 == 0.0 )
      {
        v72 = 0.0;
        v73 = 0.0;
        v74 = 0.0;
      }
      else
      {
        v72 = v67 * (float)(1.0 / v71);
        v73 = v68 * (float)(1.0 / v71);
        v74 = v69 * (float)(1.0 / v71);
      }
      v75 = acos(fminf(fmaxf(v70, -1.0), 1.0));
      v76 = v75 + v75;
      v77 = (float)(v72 * v76) * (float)(v53 * 0.5);
      v78 = (float)(v73 * v76) * (float)(v53 * 0.5);
      v79 = (float)(v74 * v76) * (float)(v53 * 0.5);
      v80 = fsqrt((float)((float)(v78 * v78) + (float)(v77 * v77)) + (float)(v79 * v79));
      if ( v80 > 0.000015258789 )
      {
        v87 = (float)(1.0 / v80) * v78;
        v86 = v77 * (float)(1.0 / v80);
        v88 = v79 * (float)(1.0 / v80);
        sub_14007B2A0(
          (__int64)&dword_140404A6C[284024526],
          &v86,
          fmin(fmax(v53 * -0.39269908169875, v80), v53 * 0.39269908169875));
      }
    }
  }
  dword_140404A6C[284024519] = v1;
  return 0; /* the function has no caller */
}
#undef v82
#undef v83
#undef v84
#undef v85
#undef v86
#undef v87
#undef v88
#undef v89
#undef v90
#undef v91
#undef v92

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183F7C588: using guessed type unsigned int;
// 183F7C58C: using guessed type unsigned int;
// 183F7C590: using guessed type unsigned int;
// 183F7C594: using guessed type unsigned int;
// 183F7C598: using guessed type unsigned int;
// 183F7C5A0: using guessed type unsigned int;
// 183F7C5A4: using guessed type unsigned int;
// 183F7C5A8: using guessed type unsigned int;
// 183F7C5AC: using guessed type unsigned int;
// 183F7C5B0: using guessed type unsigned int;
// 183F7C5B4: using guessed type unsigned int;
// 183F7C5C0: using guessed type unsigned int;
// 183F7C5C4: using guessed type unsigned int;
// 183F7C5C8: using guessed type unsigned int;
// 183F7C5D0: using guessed type unsigned int;

//----- (0000000140030590) ----------------------------------------------------
__int64            sub_140030590(int a1)
{
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int *v5; // rdi
  float *v6; // r12
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r13
  float *v12; // rsi
  float v13; // xmm5_4
  float v14; // xmm4_4
  __int64 v15; // rdx
  float v16; // xmm1_4
  float v17; // xmm3_4
  __int64 v18; // rcx
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm5_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm5_4
  float v28; // xmm4_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm5_4
  __int64 v35; // r15
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rcx
  float v39; // xmm3_4
  __int64 v40; // rsi
  float v41; // xmm2_4
  double v42; // xmm4_8
  double v43; // xmm12_8
  double v44; // xmm0_8
  double v45; // xmm0_8
  __int128 v46; // xmm1
  float v47; // xmm2_4
  float v48; // xmm0_4
  float v49; // xmm0_4
  float *v50; // rdx
  __int64 v51; // r15
  double v52; // xmm2_8
  double v53; // xmm2_8
  double v54; // xmm2_8
  float v55; // xmm4_4
  float v56; // xmm5_4
  float v57; // xmm6_4
  float v58; // xmm15_4
  float v59; // xmm9_4
  float v60; // xmm11_4
  float v61; // xmm7_4
  float v62; // xmm4_4
  float v63; // xmm5_4
  float v64; // xmm2_4
  float v65; // xmm1_4
  float v66; // xmm7_4
  float v67; // xmm5_4
  float v68; // xmm13_4
  float v69; // xmm13_4
  float v70; // xmm0_4
  float v71; // xmm3_4
  float v72; // xmm0_4
  float v73; // xmm9_4
  float v74; // xmm11_4
  float v75; // xmm7_4
  double v76; // xmm0_8
  float v77; // xmm1_4
  float v78; // xmm9_4
  float v79; // xmm5_4
  float v80; // xmm1_4
  float v81; // xmm7_4
  float v82; // xmm7_4
  double v83; // xmm2_8
  float v84; // xmm1_4
  float v85; // xmm0_4
  float v86; // xmm7_4
  float v87; // xmm12_4
  float v88; // xmm7_4
  double v89; // xmm2_8
  __int64 v90; // rcx
  double v91; // xmm2_8
  double v92; // xmm2_8
  __int64 v93; // rcx
  double v94; // xmm2_8
  float v95; // xmm15_4
  float v96; // xmm9_4
  float v97; // xmm12_4
  float v98; // xmm13_4
  float v99; // xmm12_4
  float v100; // xmm13_4
  float v101; // xmm9_4
  float v102; // xmm4_4
  float v103; // xmm5_4
  float v104; // xmm11_4
  float v105; // xmm3_4
  float v106; // xmm0_4
  float v107; // xmm12_4
  float v108; // xmm9_4
  double v109; // xmm0_8
  float v110; // xmm3_4
  float v111; // xmm4_4
  float v112; // xmm5_4
  float v113; // xmm3_4
  float v114; // xmm6_4
  _Alignas(16) unsigned sr_snapshot_quaternions[8];
  _Alignas(8) unsigned sr_snapshot_axis[3];
  _Alignas(16) unsigned sr_snapshot_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140030590[160];
#define v116 (*(__int64 (*))(void *)(sr_frame_140030590 + 8)) /* [rsp+8h] */
#define v122 (*(int (*))(void *)(sr_frame_140030590 + 96)) /* [rsp+60h] */
#define v126 (*(__int128 (*))(void *)(sr_frame_140030590 + 144)) /* [rsp+90h] */

  LODWORD(v1) = -1;
  v2 = 140832LL * (((_BYTE)a1 - 1) & 0x3F);
  v3 = 140832LL * a1;
  v4 = dword_140404A6C[v2 + 421986995];
  v5 = &dword_140404A6C[v3 + 421987002];
  (*(unsigned **)(void *)sr_snapshot_axis) = &dword_140404A6C[v3 + 421987002];
  dword_140404A6C[v3 + 421986995] = v4;
  dword_140404A6C[v3 + 421986996] = dword_140404A6C[v2 + 421986996];
  dword_140404A6C[v3 + 421986997] = dword_140404A6C[v2 + 421986997];
  dword_140404A6C[v3 + 421986998] = dword_140404A6C[v2 + 421986998];
  dword_140404A6C[v3 + 421986999] = dword_140404A6C[v2 + 421986999];
  dword_140404A6C[v3 + 421987000] = dword_140404A6C[v2 + 421987000];
  dword_140404A6C[v3 + 421987001] = dword_140404A6C[v2 + 421987001];
  *v5 = dword_140404A6C[v2 + 421987002];
  v5[1] = dword_140404A6C[v2 + 421987003];
  v5[2] = dword_140404A6C[v2 + 421987004];
  dword_140404A6C[v3 + 421987005] = dword_140404A6C[v2 + 421987005];
  dword_140404A6C[v3 + 421987006] = dword_140404A6C[v2 + 421987006];
  dword_140404A6C[v3 + 421987007] = dword_140404A6C[v2 + 421987007];
  dword_140404A6C[v3 + 421987008] = dword_140404A6C[v2 + 421987008];
  dword_140404A6C[v3 + 421987009] = dword_140404A6C[v2 + 421987009];
  dword_140404A6C[v3 + 421987010] = dword_140404A6C[v2 + 421987010];
  dword_140404A6C[v3 + 421987011] = dword_140404A6C[v2 + 421987011];
  dword_140404A6C[v3 + 421987012] = dword_140404A6C[v2 + 421987012];
  dword_140404A6C[v3 + 421987013] = dword_140404A6C[v2 + 421987013];
  if ( dword_140404A6C[284024501] == -1 )
    goto LABEL_40;
  v1 = (int)dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292];
  v122 = v1;
  if ( (_DWORD)v1 == -1 )
    goto LABEL_40;
  v6 = (float *)&dword_140404A6C[282486075];
  v7 = 21;
  v8 = 1376 * v1;
  v9 = 15;
  v10 = v8;
  v11 = v8 + v3 * 4;
  v12 = (float *)&dword_140404A6C[v8 / 4 + 421846225 + v3];
  do
  {
    v13 = *(v6 - 1);
    v14 = *v6;
    v15 = 21LL * *((int *)v6 - 5);
    v16 = *v6;
    v17 = *v6;
    v18 = v3 * 4 + v15 * 4 + v10;
    v19 = (float)(v13 * *(float *)((char *)&dword_140404A6C[421846206] + v18))
        + *(float *)((char *)&dword_140404A6C[421846203] + v18);
    *(v12 - 1) = v19;
    v20 = (float)(v13 * *(float *)((char *)&dword_140404A6C[421846207] + v18))
        + *(float *)((char *)&dword_140404A6C[421846204] + v18);
    *v12 = v20;
    v21 = (float)(v13 * *(float *)((char *)&dword_140404A6C[421846208] + v18))
        + *(float *)((char *)&dword_140404A6C[421846205] + v18);
    v12[1] = v21;
    v22 = (float)(v16 * *(float *)((char *)&dword_140404A6C[421846209] + v18)) + v19;
    v23 = v6[1];
    *(v12 - 1) = v22;
    v24 = (float)(v17 * *(float *)((char *)&dword_140404A6C[421846210] + v18)) + v20;
    *v12 = v24;
    v25 = (float)(v14 * *(float *)((char *)&dword_140404A6C[421846211] + v18)) + v21;
    v12[1] = v25;
    *(v12 - 1) = (float)(v23 * *(float *)((char *)&dword_140404A6C[421846212] + v18)) + v22;
    *v12 = (float)(v23 * *(float *)((char *)&dword_140404A6C[421846213] + v18)) + v24;
    v12[1] = (float)(v23 * *(float *)((char *)&dword_140404A6C[421846214] + v18)) + v25;
    sub_14007A010(
      (__int64)&dword_140404A6C[v7 + 421846206] + v11,
      (__int64)&dword_140404A6C[v7 + 421846215] + v11,
      (__int64)&dword_140404A6C[v15 + 421846206] + v11);
    v26 = *(v6 - 4) - *(v6 - 1);
    v27 = *(v6 - 3) - *v6;
    v28 = *(v6 - 2) - v6[1];
    v29 = (float)(v26 * v12[2]) + *(v12 - 1);
    *(v12 - 1) = v29;
    v30 = (float)(v26 * v12[3]) + *v12;
    *v12 = v30;
    v31 = (float)(v26 * v12[4]) + v12[1];
    v12[1] = v31;
    v32 = (float)(v27 * v12[5]) + v29;
    *(v12 - 1) = v32;
    v33 = (float)(v27 * v12[6]) + v30;
    *v12 = v33;
    v34 = (float)(v27 * v12[7]) + v31;
    v12[1] = v34;
    *(v12 - 1) = (float)(v28 * v12[8]) + v32;
    v7 += 21;
    v6 += 25;
    *v12 = (float)(v28 * v12[9]) + v33;
    v12[1] = (float)(v28 * v12[10]) + v34;
    v12 += 21;
    --v9;
  }
  while ( v9 );
  LODWORD(v1) = v122;
  v35 = v122;
  v36 = (__int64)(*(unsigned **)(void *)sr_snapshot_axis);
  if ( v122 != dword_140404A6C[284024519] )
  {
    v37 = v3 * 4 + 1376LL * v122;
    dword_140404A6C[v3 + 421986996] = *(unsigned int *)((char *)&dword_140404A6C[421846266] + v37);
    dword_140404A6C[v3 + 421986997] = *(unsigned int *)((char *)&dword_140404A6C[421846267] + v37);
    dword_140404A6C[v3 + 421986998] = *(unsigned int *)((char *)&dword_140404A6C[421846268] + v37);
    *(_QWORD *)&dword_140404A6C[v3 + 421987011] = 0;
    dword_140404A6C[v3 + 421987013] = 0;
    *(_QWORD *)&dword_140404A6C[v3 + 421986999] = 0;
    dword_140404A6C[v3 + 421987001] = 0;
    *(_DWORD *)v36 = *(unsigned int *)((char *)&dword_140404A6C[421846269] + v37);
    *(_DWORD *)(v36 + 4) = *(unsigned int *)((char *)&dword_140404A6C[421846270] + v37);
    *(_DWORD *)(v36 + 8) = *(unsigned int *)((char *)&dword_140404A6C[421846271] + v37);
    dword_140404A6C[v3 + 421987005] = *(unsigned int *)((char *)&dword_140404A6C[421846272] + v37);
    dword_140404A6C[v3 + 421987006] = *(unsigned int *)((char *)&dword_140404A6C[421846273] + v37);
    dword_140404A6C[v3 + 421987007] = *(unsigned int *)((char *)&dword_140404A6C[421846274] + v37);
    dword_140404A6C[v3 + 421987008] = *(unsigned int *)((char *)&dword_140404A6C[421846275] + v37);
    dword_140404A6C[v3 + 421987009] = *(unsigned int *)((char *)&dword_140404A6C[421846276] + v37);
    dword_140404A6C[v3 + 421987010] = *(unsigned int *)((char *)&dword_140404A6C[421846277] + v37);
  }
  v38 = 3597LL * (int)dword_140404A6C[284024501];
  v39 = *(float *)&dword_140404A6C[v38 + 71856301];
  v40 = v3 * 4 + 1376 * v35;
  v41 = *(float *)((char *)&dword_140404A6C[421846198] + v40);
  if ( (float)(v39 - v41) >= 3.14159265359 )
    v41 = v41 + 6.28318530718;
  if ( (float)(v41 - v39) >= 3.14159265359 )
    v39 = v39 + 6.28318530718;
  *(_QWORD *)&v42 = dword_140404A6C[v38 + 71856297];
  HIDWORD(v43) = HIDWORD(v42);
  *(float *)&v43 = *(float *)&v42 - (float)(v41 - v39);
  v44 = *(float *)&v43;
  if ( *(float *)&v43 < -3.14159265359 )
  {
    v45 = v44 + 6.28318530718;
LABEL_15:
    v43 = v45;
    goto LABEL_16;
  }
  if ( v44 > 3.14159265359 )
  {
    v45 = v44 - 6.28318530718;
    goto LABEL_15;
  }
LABEL_16:
  v46 = *(_OWORD *)((char *)&dword_140404A6C[421846273] + v40);
  v47 = *(float *)v36;
  (*(__int128 *)(void *)sr_snapshot_rotation) = *(_OWORD *)((char *)&dword_140404A6C[421846269] + v40);
  sr_snapshot_rotation[8] = *(unsigned int *)((char *)&dword_140404A6C[421846277] + v40);
  v48 = *(float *)(v36 + 8) * *(float *)(v36 + 8);
  (*(__int128 *)(void *)(sr_snapshot_rotation+4)) = v46;
  if ( fsqrt((float)((float)(v47 * v47) + (float)(*(float *)(v36 + 4) * *(float *)(v36 + 4))) + v48) < 0.5 )
  {
    (*(__int128 *)(void *)sr_snapshot_rotation) = xmmword_140278D30;
    sr_snapshot_rotation[8] = 1065353216;
    *(_QWORD *)v36 = 1065353216;
    (*(__int128 *)(void *)(sr_snapshot_rotation+4)) = xmmword_140278D30;
    *(_QWORD *)(v36 + 8) = 0;
    *(_QWORD *)(v36 + 16) = 1065353216;
    *(_QWORD *)(v36 + 24) = 0;
    *(_DWORD *)(v36 + 32) = 1065353216;
  }
  v49 = *(float *)((char *)&dword_140404A6C[421846200] + v40);
  v50 = (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3;
  v51 = 7166 * v35;
  if ( dword_140404A6C[v51 + 280651313] == -1 )
  {
    HIDWORD(v52) = HIDWORD(v43);
    *(float *)&v52 = *(float *)&v43 - v49;
  }
  else
  {
    *(float *)&v42 = (float)(*(float *)&v42 - v49) * 0.5;
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, v42);
    *(_QWORD *)&v53 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856298];
    *(float *)&v53 = (float)(*(float *)&v53 - *(float *)((char *)&dword_140404A6C[421846201] + v40)) * 0.5;
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation), v53);
    *(_QWORD *)&v54 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856297];
    *(float *)&v54 = (float)(*(float *)&v54 - *(float *)((char *)&dword_140404A6C[421846200] + v40)) * 0.5;
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, v54);
    v50 = (float *)&(*(__int128 *)(void *)sr_snapshot_rotation);
    *(_QWORD *)&v52 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856298];
    *(float *)&v52 = (float)(*(float *)&v52 - *(float *)((char *)&dword_140404A6C[421846201] + v40)) * 0.5;
  }
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), v50, v52);
  v55 = *(float *)((char *)&dword_140404A6C[421846267] + v40);
  v56 = *(float *)((char *)&dword_140404A6C[421846268] + v40);
  *(float *)&dword_140404A6C[v3 + 421986996] = (float)((float)(*(float *)((char *)&dword_140404A6C[421846266] + v40)
                                                             - *(float *)&dword_140404A6C[v3 + 421986996])
                                                     * 0.5)
                                             + *(float *)&dword_140404A6C[v3 + 421986996];
  *(float *)&dword_140404A6C[v3 + 421986997] = (float)((float)(v55 - *(float *)&dword_140404A6C[v3 + 421986997]) * 0.5)
                                             + *(float *)&dword_140404A6C[v3 + 421986997];
  *(float *)&dword_140404A6C[v3 + 421986998] = (float)((float)(v56 - *(float *)&dword_140404A6C[v3 + 421986998]) * 0.5)
                                             + *(float *)&dword_140404A6C[v3 + 421986998];
  sub_14010E370(&(*(float *)(void *)(sr_snapshot_quaternions+0)), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation));
  sub_14010E370((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], (float *)v36);
  v57 = 0.0;
  v58 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] + 1);
  v59 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2];
  v60 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1];
  v61 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1);
  if ( (float)((float)((float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] + 1))
                     + (float)(*(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) * *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2]))
             + (float)((float)((*(float *)(void *)(sr_snapshot_quaternions+0)) * *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1]) + (float)((*(float *)(void *)(sr_snapshot_quaternions+1)) * *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1)))) < 0.0 )
  {
    *(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] = _mm_xor_ps(*(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v59 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2];
    v61 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1);
    v60 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1];
    v58 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(*(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], *(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], 255), f32)[0];
  }
  *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] = -v60;
  *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1) = -v61;
  *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] = -v59;
  v62 = (float)((float)((float)(v58 * (*(float *)(void *)(sr_snapshot_quaternions+0))) + (float)((float)-v60 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1)))
              + (float)((float)-v61 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2))))
      - (float)((float)-v59 * (*(float *)(void *)(sr_snapshot_quaternions+1)));
  v63 = (float)((float)(v58 * (*(float *)(void *)(sr_snapshot_quaternions+1))) - (float)(*(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) * (float)-v60))
      + (float)((float)-v61 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1));
  v64 = *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) * (float)-v59;
  v65 = -v61;
  v66 = (float)-v61 * (*(float *)(void *)(sr_snapshot_quaternions+1));
  v67 = v63 + (float)((*(float *)(void *)(sr_snapshot_quaternions+0)) * (float)-v59);
  v68 = (float)(v58 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2))) + (float)((*(float *)(void *)(sr_snapshot_quaternions+1)) * (float)-v60);
  (*(float *)(void *)(sr_snapshot_quaternions+1)) = v67;
  v69 = (float)(v68 - (float)(v65 * (*(float *)(void *)(sr_snapshot_quaternions+0)))) + (float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * (float)-v59);
  v70 = (*(float *)(void *)(sr_snapshot_quaternions+0)) * (float)-v60;
  (*(float *)(void *)(sr_snapshot_quaternions+0)) = v62;
  *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) = v69;
  v71 = (float)((float)((float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * v58) - v70) - v66) - v64;
  *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) = v71;
  v72 = fsqrt((float)((float)(v67 * v67) + (float)(v62 * v62)) + (float)(v69 * v69));
  if ( v72 == 0.0 )
  {
    v73 = 0.0;
    v74 = 0.0;
    v75 = 0.0;
  }
  else
  {
    v73 = (float)(1.0 / v72) * v62;
    v74 = (float)(1.0 / v72) * v67;
    v75 = (float)(1.0 / v72) * v69;
  }
  v76 = acos(fminf(fmaxf(v71, -1.0), 1.0));
  HIDWORD(v83) = 0;
  v77 = v76 + v76;
  v78 = (float)((float)(v73 * v77) * 0.125) + *(float *)&dword_140404A6C[v3 + 421987011];
  *(float *)&dword_140404A6C[v3 + 421987012] = (float)((float)(v74 * v77) * 0.125)
                                             + *(float *)&dword_140404A6C[v3 + 421987012];
  *(float *)&dword_140404A6C[v3 + 421987013] = (float)((float)(v75 * v77) * 0.125)
                                             + *(float *)&dword_140404A6C[v3 + 421987013];
  *(float *)&dword_140404A6C[v3 + 421987011] = v78 * 0.5;
  v79 = *(float *)&dword_140404A6C[v3 + 421987012] * 0.5;
  v80 = (float)(*(float *)&dword_140404A6C[v3 + 421987012] * *(float *)&dword_140404A6C[v3 + 421987012])
      + (float)(v78 * v78);
  *(float *)&dword_140404A6C[v3 + 421987012] = v79;
  v81 = *(float *)&dword_140404A6C[v3 + 421987013];
  *(float *)&v76 = v81 * v81;
  v82 = v81 * 0.5;
  *(float *)&dword_140404A6C[v3 + 421987013] = v82;
  *(float *)&v83 = fsqrt((float)(v80 + *(float *)&v76) * 0.25);
  if ( *(float *)&v83 > 0.000015258789 )
  {
    *(float *)&(*(unsigned **)(void *)sr_snapshot_axis) = (float)(1.0 / *(float *)&v83) * (float)(v78 * 0.5);
    *((float *)&(*(unsigned **)(void *)sr_snapshot_axis) + 1) = (float)(1.0 / *(float *)&v83) * v79;
    (*(float *)(void *)(sr_snapshot_axis+2)) = (float)(1.0 / *(float *)&v83) * v82;
    sub_14007B2A0(v36, (float *)&(*(unsigned **)(void *)sr_snapshot_axis), v83);
  }
  if ( dword_140404A6C[v51 + 280651313] == -1 )
  {
    v84 = *(float *)((char *)&dword_140404A6C[421846202] + v40);
    if ( v84 > 0.0 )
    {
      v85 = *(float *)&dword_140404A6C[v3 + 421987006];
      if ( v85 <= 0.0 )
        v86 = 0.0;
      else
        v86 = fabs((float)(v85 * v85) * v85);
      v87 = *(float *)&v43 + *(float *)((char *)&dword_140404A6C[421846196] + v40);
      v88 = v86 * v84;
      (*(__int128 *)(void *)sr_snapshot_rotation) = xmmword_140278D30;
      (*(__int128 *)(void *)(sr_snapshot_rotation+4)) = xmmword_140278D30;
      sr_snapshot_rotation[8] = 1065353216;
      *(_QWORD *)&v89 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856299];
      *(float *)&v89 = (float)(*(float *)&v89 * 0.5) + v87;
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, v89);
      v90 = 3597LL * (int)dword_140404A6C[284024501];
      *(_QWORD *)&v91 = dword_140404A6C[v90 + 71856300];
      *(float *)&v91 = (float)(*(float *)&v91 * 0.75) + (float)(*(float *)&dword_140404A6C[v90 + 71856298] * 0.5);
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation), v91);
      *(_QWORD *)&v92 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856299];
      *(float *)&v92 = *(float *)&v92 * 0.5;
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, v92);
      v93 = 3597LL * (int)dword_140404A6C[284024501];
      *(_QWORD *)&v94 = dword_140404A6C[v93 + 71856300];
      *(float *)&v94 = (float)(*(float *)&v94 * 0.25) + (float)(*(float *)&dword_140404A6C[v93 + 71856298] * 0.5);
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation), v94);
      sub_14010E370(&(*(float *)(void *)(sr_snapshot_quaternions+0)), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation));
      sub_14010E370((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], (float *)v36);
      v95 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] + 1);
      v96 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2];
      v97 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1];
      v98 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1);
      if ( (float)((float)((float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] + 1))
                         + (float)(*(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) * *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2]))
                 + (float)((float)((*(float *)(void *)(sr_snapshot_quaternions+0)) * *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1]) + (float)((*(float *)(void *)(sr_snapshot_quaternions+1)) * *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1)))) < 0.0 )
      {
        *(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] = _mm_xor_ps(*(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
        v96 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2];
        v98 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1);
        v97 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1];
        v95 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(*(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], *(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], 255), f32)[0];
      }
      v99 = -v97;
      v100 = -v98;
      v101 = -v96;
      v102 = (float)((float)((float)(v95 * (*(float *)(void *)(sr_snapshot_quaternions+0))) + (float)(v99 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1))) + (float)(v100 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2))))
           - (float)(v101 * (*(float *)(void *)(sr_snapshot_quaternions+1)));
      v103 = (float)((float)((float)(v95 * (*(float *)(void *)(sr_snapshot_quaternions+1))) - (float)(v99 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)))) + (float)(v100 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1)))
           + (float)(v101 * (*(float *)(void *)(sr_snapshot_quaternions+0)));
      v104 = (float)((float)((float)(v95 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2))) + (float)(v99 * (*(float *)(void *)(sr_snapshot_quaternions+1)))) - (float)(v100 * (*(float *)(void *)(sr_snapshot_quaternions+0))))
           + (float)(v101 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1));
      v105 = (float)((float)((float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * v95) - (float)(v99 * (*(float *)(void *)(sr_snapshot_quaternions+0)))) - (float)(v100 * (*(float *)(void *)(sr_snapshot_quaternions+1))))
           - (float)(v101 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)));
      v106 = fsqrt((float)((float)(v103 * v103) + (float)(v102 * v102)) + (float)(v104 * v104));
      if ( v106 == 0.0 )
      {
        v107 = 0.0;
        v108 = 0.0;
      }
      else
      {
        v57 = (float)(1.0 / v106) * v102;
        v107 = (float)(1.0 / v106) * v103;
        v108 = (float)(1.0 / v106) * v104;
      }
      v109 = acos(fminf(fmaxf(v105, -1.0), 1.0));
      v110 = v109 + v109;
      v111 = (float)(v110 * v57) * (float)(v88 * 0.5);
      v112 = (float)(v110 * v107) * (float)(v88 * 0.5);
      v113 = (float)(v110 * v108) * (float)(v88 * 0.5);
      v114 = fsqrt((float)((float)(v112 * v112) + (float)(v111 * v111)) + (float)(v113 * v113));
      if ( v114 > 0.000015258789 )
      {
        *((float *)&(*(unsigned **)(void *)sr_snapshot_axis) + 1) = (float)(1.0 / v114) * v112;
        *(float *)&(*(unsigned **)(void *)sr_snapshot_axis) = (float)(1.0 / v114) * v111;
        (*(float *)(void *)(sr_snapshot_axis+2)) = (float)(1.0 / v114) * v113;
        sub_14007B2A0(v36, (float *)&(*(unsigned **)(void *)sr_snapshot_axis), sr_export_float_lane_container(COERCE_UNSIGNED_INT(_mm_cvtss_f32(_mm_cvtpd_ps(
        _mm_min_sd(_mm_max_sd(_mm_set_sd(v88 * -0.39269908169875), _mm_set_sd(v114)),
                   _mm_set_sd(v88 * 0.39269908169875)))))));
      }
    }
  }
LABEL_40:
  dword_140404A6C[284024519] = v1;
  dword_140404A6C[v3 + 421986995] = v1;
  return 0; /* both native callers discard EAX */
}
#undef v116
#undef v122
#undef v126

// 14003344E: variable 'v68' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140033610) ----------------------------------------------------
_BOOL8            sub_140033610(float *a1, int *a2, float *a3, float *a4, int a5)
{
  int v5; // esi
  int *v10; // rdi
  int v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  int v20; // xmm1_4
  int v21; // xmm0_4
  int v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  int v26; // xmm1_4
  int v27; // xmm0_4
  int v28; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140033610[192];
#define v30 (*(__int64 (*))(void *)(sr_frame_140033610 + 0)) /* [rsp+30h] */
#define v31 (*(int (*))(void *)(sr_frame_140033610 + 40)) /* [rsp+58h] */
#define v32 (*(int (*))(void *)(sr_frame_140033610 + 44)) /* [rsp+5Ch] */
#define v33 (*(int (*))(void *)(sr_frame_140033610 + 48)) /* [rsp+60h] */
#define v34 (*(float (*)[4])(void *)(sr_frame_140033610 + 56)) /* [rsp+68h] */
#define v35 (*(float (*)[4])(void *)(sr_frame_140033610 + 72)) /* [rsp+78h] */
#define v36 (*(float (*)[4])(void *)(sr_frame_140033610 + 88)) /* [rsp+88h] */
#define v37 (*(float (*)[16])(void *)(sr_frame_140033610 + 104)) /* [rsp+98h] */
#define v38 (*(float (*))(void *)(sr_frame_140033610 + 184)) /* [rsp+E8h] */

  v5 = 0;
  a1[7] = 65536.0;
  if ( *a2 <= 0 )
    return 0;
  v10 = a2 + 3;
  v11 = a5;
  do
  {
    v12 = *((float *)v10 - 1);
    LODWORD(v36[0]) = *(v10 - 2);
    v13 = *(float *)v10;
    v36[1] = v12;
    v14 = *((float *)v10 + 1);
    v36[2] = v13;
    v15 = *((float *)v10 + 2);
    v35[0] = v14;
    v16 = *((float *)v10 + 3);
    v35[1] = v15;
    v17 = *((float *)v10 + 4);
    v35[2] = v16;
    v18 = *((float *)v10 + 5);
    v34[0] = v17;
    v19 = *((float *)v10 + 6);
    v34[1] = v18;
    v20 = v10[7];
    v34[2] = v19;
    v21 = v10[8];
    v31 = v20;
    v22 = v10[9];
    LODWORD(v30) = v11;
    v32 = v21;
    v33 = v22;
    if ( (unsigned int)sub_140035690(v37, (float *)&v31, &v38, a3, a4, v30, v36, v35, v34) )
    {
      v23 = v38;
      if ( v38 < a1[7] )
      {
        v24 = v37[1];
        *a1 = v37[0];
        v25 = v37[2];
        a1[1] = v24;
        v26 = v31;
        a1[2] = v25;
        v27 = v32;
        *((_DWORD *)a1 + 3) = v26;
        v28 = v33;
        *((_DWORD *)a1 + 4) = v27;
        *((_DWORD *)a1 + 5) = v28;
        a1[7] = v23;
      }
    }
    ++v5;
    v10 += 12;
  }
  while ( v5 < *a2 );
  return a1[7] < 65536.0;
}
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38

// 14003399E: variable 'v46' is possibly undefined

//----- (0000000140033B50) ----------------------------------------------------
__int64            sub_140033B50(float *a1, __int64 a2, float *a3, float *a4)
{
  float *v4; // rdi
  float *v6; // rbx
  __int64 v9; // [rsp-20h] [rbp-30B0h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140033B50[6272];
#define v10 (*(_BYTE (*)[6144])(void *)(sr_frame_140033B50 + 0)) /* [rsp+10h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_140033B50 + 6144)) /* [rsp+1810h] */
#define v12 (*(float * (*))(void *)(sr_frame_140033B50 + 6240)) /* [rsp+1870h] */
#define v13 (*(float * (*))(void *)(sr_frame_140033B50 + 6248)) /* [rsp+1878h] */
#define v14 (*(int (*))(void *)(sr_frame_140033B50 + 6256)) /* [rsp+1880h] */

  v4 = v12;
  v6 = v13;
  sub_14011BF40((__int64)v10, a2, a3, a4);
  return sub_140033BE0(a1, a2, (__int64)v10, v4, v6, v14); /* 0x140033BB6: the result of this call is still in rax at the exit */
}
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14


//----- (0000000140033BE0) ----------------------------------------------------
_BOOL8            sub_140033BE0(float *a1, __int64 a2, __int64 a3, float *a4, float *a5, int a6)
{
  int v6; // eax
  float *v10; // r12
  __int64 v11; // r15
  int v12; // xmm10_4
  int v13; // r14d
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  __int64 v20; // rax
  float v21; // xmm3_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm3_4
  float v25; // xmm5_4
  float v26; // xmm6_4
  __int64 v27; // rax
  float v28; // xmm8_4
  float v29; // xmm4_4
  float v30; // xmm8_4
  float v31; // xmm4_4
  float v32; // xmm9_4
  float v33; // xmm7_4
  float v34; // xmm8_4
  float v35; // xmm3_4
  __int64 v36; // rax
  float v37; // xmm1_4
  float v38; // xmm2_4
  int v39; // xmm1_4
  int v40; // xmm0_4
  int v41; // xmm1_4
  int v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  int v45; // xmm1_4
  int v46; // xmm0_4
  int v47; // xmm1_4
  int v48; // xmm0_4
  float v49; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140033BE0[352];
#define v51 (*(__int64 (*))(void *)(sr_frame_140033BE0 + 0)) /* [rsp+30h] */
#define v52 (*(int (*))(void *)(sr_frame_140033BE0 + 40)) /* [rsp+58h] */
#define v53 (*(__int64 (*))(void *)(sr_frame_140033BE0 + 48)) /* [rsp+60h] */
#define v54 (*(float (*))(void *)(sr_frame_140033BE0 + 56)) /* [rsp+68h] */
#define v55 (*(int (*))(void *)(sr_frame_140033BE0 + 64)) /* [rsp+70h] */
#define v56 (*(int (*))(void *)(sr_frame_140033BE0 + 68)) /* [rsp+74h] */
#define v57 (*(int (*))(void *)(sr_frame_140033BE0 + 72)) /* [rsp+78h] */
#define v58 (*(float (*)[2])(void *)(sr_frame_140033BE0 + 80)) /* [rsp+80h] */
#define v59 (*(float (*))(void *)(sr_frame_140033BE0 + 88)) /* [rsp+88h] */
#define v60 (*(float (*)[4])(void *)(sr_frame_140033BE0 + 96)) /* [rsp+90h] */
#define v61 (*(float (*)[4])(void *)(sr_frame_140033BE0 + 112)) /* [rsp+A0h] */
#define v62 (*(float (*)[4])(void *)(sr_frame_140033BE0 + 128)) /* [rsp+B0h] */
#define v63 (*(float (*))(void *)(sr_frame_140033BE0 + 328)) /* [rsp+178h] */
#define v64 (*(__int64 (*))(void *)(sr_frame_140033BE0 + 336)) /* [rsp+180h] */

  v64 = a2;
  v6 = 0;
  a1[7] = 0.0;
  v52 = 0;
  if ( *(int *)(a2 + 16) <= 0 )
    return 0;
  v10 = a5;
  v11 = a2 + 48;
  v12 = a6;
  do
  {
    v13 = 0;
    if ( *(int *)v11 > 0 )
    {
      v14 = 0;
      do
      {
        v15 = *(_QWORD *)(v11 + 8);
        v16 = 3 * *(_DWORD *)(v15 + v14 + 8);
        v17 = *(float *)(a3 + 4 * v16);
        v18 = *(float *)(a3 + 4 * v16 + 4);
        v19 = *(float *)(a3 + 4 * v16 + 8);
        LODWORD(v16) = *(_DWORD *)(v15 + v14 + 12);
        v60[0] = v17;
        v60[2] = v19;
        v60[1] = v18;
        v20 = 3 * (int)v16;
        v21 = *(float *)(a3 + 4 * v20 + 8);
        v22 = *(float *)(a3 + 4 * v20);
        v23 = *(float *)(a3 + 4 * v20 + 4);
        LODWORD(v20) = *(_DWORD *)(v15 + v14 + 16);
        v61[2] = v21;
        v24 = v21 - v19;
        v61[1] = v23;
        v25 = v23 - v18;
        v61[0] = v22;
        v26 = v22 - v17;
        v27 = 3 * (int)v20;
        v28 = *(float *)(a3 + 4 * v27);
        v29 = *(float *)(a3 + 4 * v27 + 4);
        v59 = *(float *)(a3 + 4 * v27 + 8);
        v58[0] = v28;
        v30 = v28 - v17;
        v58[1] = v29;
        v31 = v29 - v18;
        v32 = (float)(v31 * v24) - (float)((float)(v59 - v19) * v25);
        v33 = (float)((float)(v59 - v19) * v26) - (float)(v30 * v24);
        v34 = (float)(v30 * v25) - (float)(v31 * v26);
        v35 = fsqrt((float)((float)(v33 * v33) + (float)(v32 * v32)) + (float)(v34 * v34));
        if ( v35 == 0.0 )
        {
          v53 = 0;
          v54 = 0.0;
        }
        else
        {
          *(float *)&v53 = v32 * (float)(1.0 / v35);
          *((float *)&v53 + 1) = v33 * (float)(1.0 / v35);
          v54 = v34 * (float)(1.0 / v35);
        }
        if ( *(_DWORD *)(v15 + v14 + 4) == 4 )
        {
          v36 = 3 * *(_DWORD *)(v15 + v14 + 20);
          v37 = *(float *)(a3 + 4 * v36 + 4);
          v62[0] = *(float *)(a3 + 4 * v36);
          v62[2] = *(float *)(a3 + 4 * v36 + 8);
          v62[1] = v37;
        }
        LODWORD(v51) = v12;
        if ( (unsigned int)sub_140035690((float *)&v55, (float *)&v53, &v63, a4, v10, v51, v60, v61, v58) )
        {
          v38 = v63;
          if ( v63 > a1[7] )
          {
            v39 = v56;
            *(_DWORD *)a1 = v55;
            v40 = v57;
            *((_DWORD *)a1 + 1) = v39;
            v41 = v53;
            *((_DWORD *)a1 + 2) = v40;
            v42 = HIDWORD(v53);
            *((_DWORD *)a1 + 3) = v41;
            v43 = v54;
            *((_DWORD *)a1 + 4) = v42;
            a1[5] = v43;
            a1[7] = v38;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(v11 + 8) + v14 + 4) == 4 )
        {
          LODWORD(v51) = v12;
          if ( (unsigned int)sub_140035690((float *)&v55, (float *)&v53, &v63, a4, v10, v51, v60, v58, v62) )
          {
            v44 = v63;
            if ( v63 > a1[7] )
            {
              v45 = v56;
              *(_DWORD *)a1 = v55;
              v46 = v57;
              *((_DWORD *)a1 + 1) = v45;
              v47 = v53;
              *((_DWORD *)a1 + 2) = v46;
              v48 = HIDWORD(v53);
              *((_DWORD *)a1 + 3) = v47;
              v49 = v54;
              *((_DWORD *)a1 + 4) = v48;
              a1[5] = v49;
              a1[7] = v44;
            }
          }
        }
        ++v13;
        v14 += 36;
      }
      while ( v13 < *(_DWORD *)v11 );
      v6 = v52;
      a2 = v64;
    }
    ++v6;
    v11 += 56;
    v52 = v6;
  }
  while ( v6 < *(_DWORD *)(a2 + 16) );
  return a1[7] > 0.0;
}
#undef v51
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A84898: using guessed type unsigned int;
// 151A8489C: using guessed type unsigned int;
// 151A848D4: using guessed type unsigned int;
// 151A848FC: using guessed type unsigned int;
// 151A84908: using guessed type unsigned int;

//----- (0000000140034370) ----------------------------------------------------
_BOOL8            sub_140034370(
        _DWORD *a1,
        _DWORD *a2,
        float *a3,
        float *a4,
        float *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // r13d
  int *v10; // r15
  int *v11; // r12
  float v13; // xmm7_4
  signed int v16; // esi
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  __int64 v20; // rcx
  __int64 v21; // rax
  float v22; // xmm1_4
  float v23; // xmm0_4
  __int64 v24; // rcx
  __int64 v25; // rax
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  __int64 v29; // rcx
  __int64 v30; // rax
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  int v35; // xmm1_4
  float v36; // xmm0_4
  int v37; // xmm2_4
  int v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // eax
  int v43; // xmm2_4
  int v44; // xmm1_4
  int v45; // xmm0_4
  int v46; // xmm1_4
  int v47; // xmm0_4
  unsigned sr_swept_cell_hit_normal[3];
  unsigned sr_swept_cell_hit_point[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140034370[304];
#define v49 (*(__int64 (*))(void *)(sr_frame_140034370 + 0)) /* [rsp+30h] */
#define v50 (*(__int64 (*))(void *)(sr_frame_140034370 + 0)) /* [rsp+30h] */
#define v57 (*(float (*)[4])(void *)(sr_frame_140034370 + 72)) /* [rsp+78h] */
#define v58 (*(float (*)[4])(void *)(sr_frame_140034370 + 88)) /* [rsp+88h] */
#define v59 (*(float (*)[4])(void *)(sr_frame_140034370 + 104)) /* [rsp+98h] */
#define v60 (*(float (*)[24])(void *)(sr_frame_140034370 + 120)) /* [rsp+A8h] */
#define v61 (*(float * (*))(void *)(sr_frame_140034370 + 288)) /* [rsp+150h] */

  v61 = a4;
  v9 = a8;
  v10 = dword_1402B3664;
  v11 = dword_1402B3558;
  v13 = *(float *)&a9;
  v16 = 0;
  *a3 = 65536.0;
  v17 = (float)*a7;
  v18 = (float)a7[1];
  v19 = (float)a7[2];
  do
  {
    if ( ((((64 << v16) & v9) != 0) & _bittest(&v9, v16)) != 0 )
    {
      v20 = 3LL * *(v10 - 1);
      v21 = *v10;
      v22 = (float)(v18 + *(float *)&dword_1402B34F0[3 * *(v10 - 1) + 1]) * v13;
      v58[0] = (float)(v17 + *(float *)&dword_1402B34F0[3 * *(v10 - 1)]) * v13;
      v23 = v19 + *(float *)&dword_1402B34F0[v20 + 2];
      v24 = 3 * v21;
      v58[1] = v22;
      v25 = v10[1];
      v26 = (float)(v18 + *(float *)&dword_1402B34F0[v24 + 1]) * v13;
      v58[2] = v23 * v13;
      v27 = v17 + *(float *)&dword_1402B34F0[v24];
      v59[1] = v26;
      v59[0] = v27 * v13;
      v28 = v19 + *(float *)&dword_1402B34F0[v24 + 2];
      v29 = 3 * v25;
      v30 = v10[2];
      v31 = (float)(v18 + *(float *)&dword_1402B34F0[v29 + 1]) * v13;
      v59[2] = v28 * v13;
      v32 = v17 + *(float *)&dword_1402B34F0[v29];
      v57[1] = v31;
      v57[0] = v32 * v13;
      v33 = v18 + *(float *)&dword_1402B34F0[3 * v30 + 1];
      v57[2] = (float)(v19 + *(float *)&dword_1402B34F0[v29 + 2]) * v13;
      v34 = v17 + *(float *)&dword_1402B34F0[3 * v30];
      LODWORD(v49) = a6;
      v60[1] = v33 * v13;
      v35 = *(v11 - 1);
      v60[0] = v34 * v13;
      v36 = v19 + *(float *)&dword_1402B34F0[3 * v30 + 2];
      sr_swept_cell_hit_normal[1] = v35;
      v60[2] = v36 * v13;
      sr_swept_cell_hit_normal[0] = *(v11 - 2);
      sr_swept_cell_hit_normal[2] = *v11;
      if ( (unsigned int)sub_140035690((float *)&sr_swept_cell_hit_point[0], (float *)&sr_swept_cell_hit_normal[0], (float *)&a9, a4, a5, v49, v58, v59, v57) )
      {
        v37 = a9;
        if ( *(float *)&a9 < *a3 )
        {
          v38 = sr_swept_cell_hit_point[1];
          *a1 = sr_swept_cell_hit_point[0];
          v39 = sr_swept_cell_hit_point[2];
          a1[1] = v38;
          v40 = sr_swept_cell_hit_normal[0];
          a1[2] = v39;
          v41 = sr_swept_cell_hit_normal[1];
          *a2 = v40;
          a2[2] = sr_swept_cell_hit_normal[2];
          a2[1] = v41;
          *(_DWORD *)a3 = v37;
        }
      }
      LODWORD(v50) = a6;
      v42 = sub_140035690((float *)&sr_swept_cell_hit_point[0], (float *)&sr_swept_cell_hit_normal[0], (float *)&a9, v61, a5, v50, v58, v57, v60);
      a4 = v61;
      if ( v42 )
      {
        v43 = a9;
        if ( *(float *)&a9 < *a3 )
        {
          v44 = sr_swept_cell_hit_point[1];
          *a1 = sr_swept_cell_hit_point[0];
          v45 = sr_swept_cell_hit_point[2];
          a1[1] = v44;
          v46 = sr_swept_cell_hit_normal[0];
          a1[2] = v45;
          v47 = sr_swept_cell_hit_normal[1];
          *a2 = v46;
          a2[2] = sr_swept_cell_hit_normal[2];
          a2[1] = v47;
          *(_DWORD *)a3 = v43;
        }
      }
    }
    ++v16;
    v10 += 4;
    v11 += 3;
  }
  while ( v16 < 6 );
  return *a3 < 65536.0;
}
#undef v49
#undef v50
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61

// 14003458D: variable 'v49' is possibly undefined
// 140034623: variable 'v50' is possibly undefined
// 1402B34F0: using guessed type int dword_1402B34F0[];
// 1402B3558: using guessed type int dword_1402B3558[18];
// 1402B3664: using guessed type int dword_1402B3664[];

//----- (00000001400346F0) ----------------------------------------------------
__int64            sub_1400346F0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        float *a7,
        float *a8,
        float *a9,
        float *a10)
{
  float *v10; // r15
  float *v12; // r13
  float *v14; // r14
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  float v22; // xmm5_4
  float v23; // xmm6_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400346F0[16];
#define v31 (*(float (*))(void *)(sr_frame_1400346F0 + 0)) /* [rsp+40h] */
#define v32 (*(float (*))(void *)(sr_frame_1400346F0 + 4)) /* [rsp+44h] */
#define v33 (*(float (*))(void *)(sr_frame_1400346F0 + 8)) /* [rsp+48h] */

  v10 = a9;
  v12 = a8;
  v14 = a7;
  sub_14006EC40(a2, a7, a8, a9);
  v17 = a2[1];
  v18 = a2[2];
  v19 = (float)((float)((float)(a4[1] - v14[1]) * v17) + (float)((float)(*a4 - *v14) * *a2))
      + (float)((float)(a4[2] - v14[2]) * v18);
  v20 = (float)((float)((float)(a5[1] - v14[1]) * v17) + (float)((float)(*a5 - *v14) * *a2))
      + (float)((float)(a5[2] - v14[2]) * v18);
  if ( v19 >= a6 && v20 >= a6 )
    return 0;
  if ( v19 >= 0.0 )
  {
    if ( v19 > 0.0 && v20 > 0.0 )
    {
      v22 = *a2 * (float)(a6 * -1.125);
      v23 = v17 * (float)(a6 * -1.125);
      v24 = v18 * (float)(a6 * -1.125);
      if ( v19 >= v20 )
      {
        v28 = v23 + a5[1];
        v29 = v24 + a5[2];
        v31 = v22 + *a5;
        v32 = v28;
        v33 = v29;
        if ( !sub_140077FA0(a1, a2, &a6, a5, &v31, v14, v12, v10)
          && !sub_140077FA0(a1, a2, &a6, a5, &v31, v14, v10, a10) )
        {
          return 0;
        }
        v30 = a1[2] - a5[2];
        *a3 = fsqrt(
                (float)((float)((float)(a1[1] - a5[1]) * (float)(a1[1] - a5[1]))
                      + (float)((float)(*a1 - *a5) * (float)(*a1 - *a5)))
              + (float)(v30 * v30));
      }
      else
      {
        v25 = v23 + a4[1];
        v26 = v24 + a4[2];
        v31 = v22 + *a4;
        v32 = v25;
        v33 = v26;
        if ( !sub_140077FA0(a1, a2, &a6, a4, &v31, v14, v12, v10)
          && !sub_140077FA0(a1, a2, &a6, a4, &v31, v14, v10, a10) )
        {
          return 0;
        }
        v27 = a1[2] - a4[2];
        *a3 = fsqrt(
                (float)((float)((float)(a1[1] - a4[1]) * (float)(a1[1] - a4[1]))
                      + (float)((float)(*a1 - *a4) * (float)(*a1 - *a4)))
              + (float)(v27 * v27));
      }
      return 1;
    }
  }
  else if ( v20 < 0.0 )
  {
    return 0;
  }
  if ( !sub_140077FA0(a1, a2, &a6, a4, a5, v14, v12, v10)
    && !sub_140077FA0(a1, a2, &a6, a4, a5, v14, v10, a10)
    && !sub_140077FA0(a1, a2, &a6, a5, a4, v14, v12, v10)
    && !sub_140077FA0(a1, a2, &a6, a5, a4, v14, v10, a10) )
  {
    return 0;
  }
  *a3 = 0.0;
  return 1;
}
#undef v31
#undef v32
#undef v33


//----- (0000000140034AE0) ----------------------------------------------------
_BOOL8            sub_140034AE0(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        float a9)
{
  float v10; // xmm0_4
  float v14; // xmm9_4
  signed int v15; // r14d
  unsigned int v16; // r8d
  __m128i v17; // xmm15
  __int64 v18; // r12
  float v19; // xmm1_4
  float v20; // xmm14_4
  float v21; // xmm15_4
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  float v26; // xmm4_4
  float v27; // xmm7_4
  float v28; // xmm6_4
  __int64 v29; // rax
  float v30; // xmm8_4
  float v31; // xmm5_4
  float v32; // xmm3_4
  __int64 v33; // rax
  float v34; // xmm8_4
  float v35; // xmm10_4
  float v36; // xmm11_4
  float v37; // xmm2_4
  float v38; // xmm5_4
  __int64 v39; // rax
  float v40; // xmm10_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm2_4
  float v44; // xmm11_4
  float v45; // xmm3_4
  float v46; // xmm0_4
  float v47; // xmm4_4
  float v48; // xmm10_4
  float v49; // xmm11_4
  float v50; // xmm0_4
  float v51; // xmm2_4
  int v52; // xmm1_4
  int v53; // xmm0_4
  int v54; // xmm1_4
  int v55; // xmm0_4
  float v56; // xmm2_4
  int v57; // xmm1_4
  int v58; // xmm0_4
  int v59; // xmm1_4
  int v60; // xmm0_4
  signed int v61; // r15d
  int v62; // r12d
  __int64 v63; // r14
  float v64; // xmm4_4
  float v65; // xmm3_4
  __int64 v66; // rax
  float v67; // xmm10_4
  float v68; // xmm11_4
  float v69; // xmm5_4
  float v70; // xmm1_4
  float v71; // xmm6_4
  float v72; // xmm3_4
  float v73; // xmm8_4
  float v74; // xmm4_4
  float v75; // xmm7_4
  float v76; // xmm2_4
  float v77; // xmm5_4
  float v78; // xmm0_4
  float v79; // xmm2_4
  float v80; // xmm4_4
  float v81; // xmm10_4
  float v82; // xmm7_4
  float v83; // xmm6_4
  float v84; // xmm3_4
  float v85; // xmm8_4
  float v86; // xmm5_4
  float v87; // xmm0_4
  float v88; // xmm11_4
  float v89; // xmm10_4
  float v90; // xmm0_4
  float v91; // xmm2_4
  int v92; // xmm1_4
  int v93; // xmm0_4
  int v94; // xmm1_4
  int v95; // xmm0_4
  float v96; // xmm2_4
  int v97; // xmm1_4
  int v98; // xmm0_4
  int v99; // xmm1_4
  int v100; // xmm0_4
  __int64 v101; // rax
  float v102; // xmm10_4
  float v103; // xmm11_4
  float v104; // xmm5_4
  float v105; // xmm1_4
  float v106; // xmm6_4
  float v107; // xmm3_4
  float v108; // xmm8_4
  float v109; // xmm4_4
  float v110; // xmm7_4
  float v111; // xmm2_4
  float v112; // xmm5_4
  float v113; // xmm0_4
  float v114; // xmm2_4
  float v115; // xmm4_4
  float v116; // xmm10_4
  float v117; // xmm7_4
  float v118; // xmm6_4
  float v119; // xmm3_4
  float v120; // xmm8_4
  float v121; // xmm5_4
  float v122; // xmm0_4
  float v123; // xmm11_4
  float v124; // xmm10_4
  float v125; // xmm0_4
  float v126; // xmm2_4
  int v127; // xmm1_4
  int v128; // xmm0_4
  int v129; // xmm1_4
  int v130; // xmm0_4
  int v131; // eax
  float v132; // xmm2_4
  int v133; // xmm1_4
  int v134; // xmm0_4
  int v135; // xmm1_4
  int v136; // xmm0_4
  _Alignas(8) unsigned sr_swept_mesh_hit_normal[3];
  unsigned sr_swept_mesh_hit_point[3];
  float sr_swept_mesh_vertex_c[3];
  float sr_swept_mesh_vertex_a[3];
  float sr_swept_mesh_vertex_b[3];
  float sr_swept_mesh_vertex_d[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140034AE0[432];
#define v138 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define v139 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define v140 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define v141 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define v142 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define v143 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 40)) /* [rsp+50h] */
#define v161 (*(unsigned int (*))(void *)(sr_frame_140034AE0 + 376)) /* [rsp+1A0h] */
#define v162 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 408)) /* [rsp+1C0h] */
#define v163 (*(float (*))(void *)(sr_frame_140034AE0 + 416)) /* [rsp+1C8h] */

  v10 = 65536.0;
  v14 = a9;
  v15 = 0;
  *a3 = 65536.0;
  v16 = HIWORD(a8);
  v17 = _mm_cvtsi32_si128(*(_DWORD *)(a7 + 4));
  v18 = 58LL * (unsigned __int16)a8;
  v19 = (float)*(int *)(a7 + 8);
  v161 = HIWORD(a8);
  v20 = (float)*(int *)a7;
  v162 = v18 * 4;
  v163 = v19;
  v21 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v17), f32)[0];
  if ( (int)dword_140404A6C[v18 + 20074623] > 0 )
  {
    v22 = 0;
    v143 = 0;
    do
    {
      v23 = *(_QWORD *)&dword_140404A6C[v18 + 20074615];
      v24 = *(_QWORD *)&dword_140404A6C[v18 + 20074631];
      v25 = 3 * *(_DWORD *)(v22 + v24);
      v26 = v19 + *(float *)(v23 + 4 * v25 + 8);
      v27 = v20 + *(float *)(v23 + 4 * v25);
      v28 = (float)(v21 + *(float *)(v23 + 4 * v25 + 4)) * v14;
      v29 = 3 * *(_DWORD *)(v22 + v24 + 4);
      sr_swept_mesh_vertex_a[2] = v26 * v14;
      v30 = v20 + *(float *)(v23 + 4 * v29);
      v31 = v21 + *(float *)(v23 + 4 * v29 + 4);
      v32 = v19 + *(float *)(v23 + 4 * v29 + 8);
      LODWORD(v29) = *(_DWORD *)(v22 + v24 + 8);
      sr_swept_mesh_vertex_a[0] = v27 * v14;
      v33 = 3 * (int)v29;
      sr_swept_mesh_vertex_b[0] = v30 * v14;
      v34 = (float)(v30 * v14) - (float)(v27 * v14);
      v35 = v19 + *(float *)(v23 + 4 * v33 + 8);
      v36 = v20 + *(float *)(v23 + 4 * v33);
      v37 = v21 + *(float *)(v23 + 4 * v33 + 4);
      LODWORD(v33) = *(_DWORD *)(v22 + v24 + 12);
      sr_swept_mesh_vertex_b[1] = v31 * v14;
      v38 = (float)(v31 * v14) - v28;
      v39 = 3 * (int)v33;
      sr_swept_mesh_vertex_c[2] = v35 * v14;
      v40 = (float)(v35 * v14) - (float)(v26 * v14);
      v41 = v20 + *(float *)(v23 + 4 * v39);
      v42 = v21 + *(float *)(v23 + 4 * v39 + 4);
      sr_swept_mesh_vertex_c[1] = v37 * v14;
      v43 = (float)(v37 * v14) - v28;
      sr_swept_mesh_vertex_c[0] = v36 * v14;
      v44 = (float)(v36 * v14) - (float)(v27 * v14);
      sr_swept_mesh_vertex_b[2] = v32 * v14;
      v45 = (float)(v32 * v14) - (float)(v26 * v14);
      sr_swept_mesh_vertex_d[0] = v41 * v14;
      v46 = (float)(v163 + *(float *)(v23 + 4 * v39 + 8)) * v14;
      sr_swept_mesh_vertex_a[1] = v28;
      sr_swept_mesh_vertex_d[1] = v42 * v14;
      sr_swept_mesh_vertex_d[2] = v46;
      v47 = (float)(v43 * v45) - (float)(v40 * v38);
      v48 = (float)(v40 * v34) - (float)(v44 * v45);
      v49 = (float)(v44 * v38) - (float)(v43 * v34);
      v50 = fsqrt((float)((float)(v48 * v48) + (float)(v47 * v47)) + (float)(v49 * v49));
      if ( v50 == 0.0 )
      {
        (*(int64_t *)(void *)sr_swept_mesh_hit_normal) = 0;
        (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = 0.0;
      }
      else
      {
        *(float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) = (float)(1.0 / v50) * v47;
        *((float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) + 1) = (float)(1.0 / v50) * v48;
        (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = (float)(1.0 / v50) * v49;
      }
      LODWORD(v138) = a6;
      if ( (unsigned int)sub_140035690((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, v138, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_b[0], &sr_swept_mesh_vertex_c[0]) )
      {
        v51 = a9;
        if ( a9 < *a3 )
        {
          v52 = sr_swept_mesh_hit_point[1];
          *a1 = sr_swept_mesh_hit_point[0];
          v53 = sr_swept_mesh_hit_point[2];
          a1[1] = v52;
          v54 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
          a1[2] = v53;
          v55 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
          *(_DWORD *)a2 = v54;
          *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
          *(_DWORD *)(a2 + 4) = v55;
          *a3 = v51;
          dword_140404A6C[73007010] = v15;
        }
      }
      LODWORD(v139) = a6;
      if ( (unsigned int)sub_140035690((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, v139, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_c[0], &sr_swept_mesh_vertex_d[0]) )
      {
        v56 = a9;
        if ( a9 < *a3 )
        {
          v57 = sr_swept_mesh_hit_point[1];
          *a1 = sr_swept_mesh_hit_point[0];
          v58 = sr_swept_mesh_hit_point[2];
          a1[1] = v57;
          v59 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
          a1[2] = v58;
          v60 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
          *(_DWORD *)a2 = v59;
          *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
          *(_DWORD *)(a2 + 4) = v60;
          *a3 = v56;
          dword_140404A6C[73007010] = v15;
        }
      }
      v19 = v163;
      v22 = v143 + 16;
      ++v15;
      v143 += 16;
    }
    while ( v15 < (int)dword_140404A6C[v18 + 20074623] );
    v10 = *a3;
    LOWORD(v16) = v161;
  }
  v61 = 0;
  if ( (int)dword_140404A6C[v18 + 20074651] > 0 )
  {
    v62 = 1;
    v63 = 0;
    do
    {
      if ( ((unsigned __int16)v16 & (unsigned __int16)v62 & 0x3FF) == 0 )
      {
        v64 = v19;
        v65 = v19;
        v66 = *(_QWORD *)((char *)&dword_140404A6C[20074653] + v162);
        v67 = v19 + *(float *)(v63 + v66 + 32);
        v68 = v20 + *(float *)(v63 + v66 + 24);
        v69 = v21 + *(float *)(v63 + v66 + 4);
        v70 = v21 + *(float *)(v63 + v66 + 40);
        v71 = v21 + *(float *)(v63 + v66 + 16);
        v72 = v65 + *(float *)(v63 + v66 + 20);
        v73 = v20 + *(float *)(v63 + v66 + 12);
        v74 = v64 + *(float *)(v63 + v66 + 8);
        v75 = v20 + *(float *)(v63 + v66);
        v76 = (float)(v21 + *(float *)(v63 + v66 + 28)) * v14;
        sr_swept_mesh_vertex_d[0] = (float)(v20 + *(float *)(v63 + v66 + 36)) * v14;
        v77 = v69 * v14;
        v78 = (float)(v163 + *(float *)(v63 + v66 + 44)) * v14;
        sr_swept_mesh_vertex_c[1] = v76;
        v79 = v76 - v77;
        sr_swept_mesh_vertex_d[2] = v78;
        v80 = v74 * v14;
        sr_swept_mesh_vertex_c[2] = v67 * v14;
        v81 = (float)(v67 * v14) - v80;
        v82 = v75 * v14;
        sr_swept_mesh_vertex_a[1] = v77;
        sr_swept_mesh_vertex_c[0] = v68 * v14;
        sr_swept_mesh_vertex_d[1] = v70 * v14;
        sr_swept_mesh_vertex_b[1] = v71 * v14;
        v83 = (float)(v71 * v14) - v77;
        sr_swept_mesh_vertex_b[2] = v72 * v14;
        v84 = (float)(v72 * v14) - v80;
        sr_swept_mesh_vertex_b[0] = v73 * v14;
        v85 = (float)(v73 * v14) - v82;
        sr_swept_mesh_vertex_a[0] = v82;
        sr_swept_mesh_vertex_a[2] = v80;
        v86 = (float)(v79 * v84) - (float)(v81 * v83);
        v87 = (float)(v68 * v14) - v82;
        v88 = (float)(v87 * v83) - (float)(v79 * v85);
        v89 = (float)(v81 * v85) - (float)(v87 * v84);
        v90 = fsqrt((float)((float)(v89 * v89) + (float)(v86 * v86)) + (float)(v88 * v88));
        if ( v90 == 0.0 )
        {
          (*(int64_t *)(void *)sr_swept_mesh_hit_normal) = 0;
          (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = 0.0;
        }
        else
        {
          *(float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) = (float)(1.0 / v90) * v86;
          *((float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) + 1) = (float)(1.0 / v90) * v89;
          (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = (float)(1.0 / v90) * v88;
        }
        LODWORD(v138) = a6;
        if ( (unsigned int)sub_140035690((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, v138, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_b[0], &sr_swept_mesh_vertex_c[0]) )
        {
          v91 = a9;
          if ( a9 < *a3 )
          {
            v92 = sr_swept_mesh_hit_point[1];
            *a1 = sr_swept_mesh_hit_point[0];
            v93 = sr_swept_mesh_hit_point[2];
            a1[1] = v92;
            v94 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
            a1[2] = v93;
            v95 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
            *(_DWORD *)a2 = v94;
            *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
            *(_DWORD *)(a2 + 4) = v95;
            *a3 = v91;
            dword_140404A6C[73007010] = v61 | 0x10000;
          }
        }
        LODWORD(v140) = a6;
        if ( (unsigned int)sub_140035690((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, v140, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_c[0], &sr_swept_mesh_vertex_d[0]) )
        {
          v96 = a9;
          if ( a9 < *a3 )
          {
            v97 = sr_swept_mesh_hit_point[1];
            *a1 = sr_swept_mesh_hit_point[0];
            v98 = sr_swept_mesh_hit_point[2];
            a1[1] = v97;
            v99 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
            a1[2] = v98;
            v100 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
            *(_DWORD *)a2 = v99;
            *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
            *(_DWORD *)(a2 + 4) = v100;
            *a3 = v96;
            dword_140404A6C[73007010] = v61 | 0x10000;
          }
        }
        v101 = *(_QWORD *)((char *)&dword_140404A6C[20074653] + v162);
        v102 = v163 + *(float *)(v63 + v101 + 20);
        v103 = v20 + *(float *)(v63 + v101 + 12);
        v104 = v21 + *(float *)(v63 + v101 + 40);
        v105 = v21 + *(float *)(v63 + v101 + 4);
        v106 = v21 + *(float *)(v63 + v101 + 28);
        v107 = v163 + *(float *)(v63 + v101 + 32);
        v108 = v20 + *(float *)(v63 + v101 + 24);
        v109 = v163 + *(float *)(v63 + v101 + 44);
        v110 = v20 + *(float *)(v63 + v101 + 36);
        v111 = (float)(v21 + *(float *)(v63 + v101 + 16)) * v14;
        sr_swept_mesh_vertex_d[0] = (float)(v20 + *(float *)(v63 + v101)) * v14;
        v112 = v104 * v14;
        v113 = (float)(v163 + *(float *)(v63 + v101 + 8)) * v14;
        sr_swept_mesh_vertex_c[1] = v111;
        v114 = v111 - v112;
        sr_swept_mesh_vertex_d[2] = v113;
        v115 = v109 * v14;
        sr_swept_mesh_vertex_c[2] = v102 * v14;
        v116 = (float)(v102 * v14) - v115;
        v117 = v110 * v14;
        sr_swept_mesh_vertex_a[1] = v112;
        sr_swept_mesh_vertex_c[0] = v103 * v14;
        sr_swept_mesh_vertex_d[1] = v105 * v14;
        sr_swept_mesh_vertex_b[1] = v106 * v14;
        v118 = (float)(v106 * v14) - v112;
        sr_swept_mesh_vertex_b[2] = v107 * v14;
        v119 = (float)(v107 * v14) - v115;
        sr_swept_mesh_vertex_b[0] = v108 * v14;
        v120 = (float)(v108 * v14) - v117;
        sr_swept_mesh_vertex_a[0] = v117;
        sr_swept_mesh_vertex_a[2] = v115;
        v121 = (float)(v114 * v119) - (float)(v116 * v118);
        v122 = (float)(v103 * v14) - v117;
        v123 = (float)(v122 * v118) - (float)(v114 * v120);
        v124 = (float)(v116 * v120) - (float)(v122 * v119);
        v125 = fsqrt((float)((float)(v124 * v124) + (float)(v121 * v121)) + (float)(v123 * v123));
        if ( v125 == 0.0 )
        {
          (*(int64_t *)(void *)sr_swept_mesh_hit_normal) = 0;
          (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = 0.0;
        }
        else
        {
          *(float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) = (float)(1.0 / v125) * v121;
          *((float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) + 1) = (float)(1.0 / v125) * v124;
          (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = (float)(1.0 / v125) * v123;
        }
        LODWORD(v141) = a6;
        if ( (unsigned int)sub_140035690((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, v141, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_b[0], &sr_swept_mesh_vertex_c[0]) )
        {
          v126 = a9;
          if ( a9 < *a3 )
          {
            v127 = sr_swept_mesh_hit_point[1];
            *a1 = sr_swept_mesh_hit_point[0];
            v128 = sr_swept_mesh_hit_point[2];
            a1[1] = v127;
            v129 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
            a1[2] = v128;
            v130 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
            *(_DWORD *)a2 = v129;
            *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
            *(_DWORD *)(a2 + 4) = v130;
            *a3 = v126;
            dword_140404A6C[73007010] = v61 | 0x10000;
          }
        }
        LODWORD(v142) = a6;
        v131 = sub_140035690((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, v142, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_c[0], &sr_swept_mesh_vertex_d[0]);
        LOWORD(v16) = v161;
        if ( v131 )
        {
          v132 = a9;
          if ( a9 < *a3 )
          {
            v133 = sr_swept_mesh_hit_point[1];
            *a1 = sr_swept_mesh_hit_point[0];
            v134 = sr_swept_mesh_hit_point[2];
            a1[1] = v133;
            v135 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
            a1[2] = v134;
            v136 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
            *(_DWORD *)a2 = v135;
            *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
            *(_DWORD *)(a2 + 4) = v136;
            *a3 = v132;
            dword_140404A6C[73007010] = v61 | 0x10000;
          }
        }
      }
      ++v61;
      v19 = v163;
      v63 += 48;
      v62 = __ROL4__(v62, 1);
    }
    while ( v61 < *(int *)((char *)&dword_140404A6C[20074651] + v162) );
    v10 = *a3;
  }
  return v10 < 65536.0;
}
#undef v138
#undef v139
#undef v140
#undef v141
#undef v142
#undef v143
#undef v161
#undef v162
#undef v163


//----- (0000000140035B70) ----------------------------------------------------
__int64            sub_140035B70(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        float *a7,
        float *a8,
        float *a9)
{
  float *v9; // r15
  float *v11; // r12
  float *v13; // r14
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm9_4
  float v19; // xmm8_4
  float v21; // xmm5_4
  float v22; // xmm6_4
  float v23; // xmm7_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  float v26; // xmm0_4
  float v27; // xmm6_4
  float v28; // xmm7_4
  float v29; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140035B70[16];
#define v30 (*(float (*))(void *)(sr_frame_140035B70 + 0)) /* [rsp+40h] */
#define v31 (*(float (*))(void *)(sr_frame_140035B70 + 4)) /* [rsp+44h] */
#define v32 (*(float (*))(void *)(sr_frame_140035B70 + 8)) /* [rsp+48h] */

  v9 = a9;
  v11 = a8;
  v13 = a7;
  sub_14006EC40(a2, a7, a8, a9);
  v16 = a2[1];
  v17 = a2[2];
  v18 = (float)((float)((float)(a4[1] - v13[1]) * v16) + (float)((float)(*a4 - *v13) * *a2))
      + (float)((float)(a4[2] - v13[2]) * v17);
  v19 = (float)((float)((float)(a5[1] - v13[1]) * v16) + (float)((float)(*a5 - *v13) * *a2))
      + (float)((float)(a5[2] - v13[2]) * v17);
  if ( v18 >= a6 && v19 >= a6 )
    return 0;
  if ( v18 >= 0.0 )
  {
    if ( v18 <= 0.0 || v19 <= 0.0 )
      goto LABEL_5;
    v21 = *a2 * (float)(a6 * -1.125);
    v22 = v16 * (float)(a6 * -1.125);
    v23 = v17 * (float)(a6 * -1.125);
    if ( v18 >= v19 )
    {
      v27 = v22 + a5[1];
      v28 = v23 + a5[2];
      v30 = v21 + *a5;
      v31 = v27;
      v32 = v28;
      if ( sub_140077FA0(a1, a2, &a6, a5, &v30, v13, v11, v9) )
      {
        v29 = a1[2] - a5[2];
        *a3 = fsqrt(
                (float)((float)((float)(a1[1] - a5[1]) * (float)(a1[1] - a5[1]))
                      + (float)((float)(*a1 - *a5) * (float)(*a1 - *a5)))
              + (float)(v29 * v29));
        return 1;
      }
    }
    else
    {
      v24 = v22 + a4[1];
      v25 = v23 + a4[2];
      v30 = v21 + *a4;
      v31 = v24;
      v32 = v25;
      if ( sub_140077FA0(a1, a2, &a6, a4, &v30, v13, v11, v9) )
      {
        v26 = a1[2] - a4[2];
        *a3 = fsqrt(
                (float)((float)((float)(a1[1] - a4[1]) * (float)(a1[1] - a4[1]))
                      + (float)((float)(*a1 - *a4) * (float)(*a1 - *a4)))
              + (float)(v26 * v26));
        return 1;
      }
    }
    return 0;
  }
  if ( v19 < 0.0 )
    return 0;
LABEL_5:
  if ( !sub_140077FA0(a1, a2, &a6, a4, a5, v13, v11, v9) && !sub_140077FA0(a1, a2, &a6, a5, a4, v13, v11, v9) )
    return 0;
  *a3 = 0.0;
  return 1;
}
#undef v30
#undef v31
#undef v32


//----- (0000000140035E50) ----------------------------------------------------
__int64            sub_140035E50(int a1, float *a2, float *a3, float a4)
{
  float v5; // xmm3_4
  __int64 v6; // r14
  float v7; // xmm0_4
  float *v8; // rbx
  float *v9; // rdi
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm1_4
  __int64 v16; // rax
  signed int v17; // r12d
  __int64 v18; // r10
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  __int64 v22; // r15
  __int64 v23; // rdx
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v26; // xmm10_4
  float v27; // xmm11_4
  float v28; // xmm12_4
  float v29; // xmm13_4
  float v30; // xmm14_4
  float v31; // xmm15_4
  signed __int64 v32; // rdi
  float *v33; // rax
  signed __int64 v34; // r8
  signed __int64 v35; // r9
  signed __int64 v36; // r12
  signed __int64 v37; // r10
  signed __int64 v38; // r11
  signed __int64 v39; // rsi
  signed __int64 v40; // r13
  _BYTE *v41; // rcx
  signed __int64 v42; // r15
  unsigned __int64 v43; // rcx
  signed __int64 v44; // rdx
  float v45; // xmm4_4
  float v46; // xmm6_4
  float v47; // xmm0_4
  float v48; // xmm5_4
  float v49; // xmm3_4
  float v50; // xmm1_4
  float v51; // xmm2_4
  float v52; // xmm4_4
  float v53; // xmm1_4
  float v54; // xmm6_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  float v57; // xmm2_4
  float v58; // xmm3_4
  float v59; // xmm0_4
  float v60; // xmm5_4
  float v61; // xmm3_4
  float v62; // xmm1_4
  float v63; // xmm2_4
  float v64; // xmm4_4
  float v65; // xmm1_4
  float v66; // xmm6_4
  float v67; // xmm2_4
  float v68; // xmm1_4
  float v69; // xmm0_4
  float v70; // xmm1_4
  float v71; // xmm2_4
  float v72; // xmm1_4
  float v73; // xmm3_4
  float v74; // xmm2_4
  float v75; // xmm0_4
  float v76; // xmm4_4
  float v77; // xmm0_4
  signed __int64 v78; // rbx
  float v79; // xmm0_4
  float v80; // xmm6_4
  float v81; // xmm8_4
  float v82; // xmm9_4
  float v83; // xmm10_4
  float v84; // xmm11_4
  float v85; // xmm12_4
  float v86; // xmm13_4
  float v87; // xmm14_4
  float v88; // xmm15_4
  float *v89; // rax
  __int64 v90; // rdx
  float v91; // xmm1_4
  float v92; // xmm2_4
  float v93; // xmm4_4
  float v94; // xmm3_4
  float v95; // xmm5_4
  float v96; // xmm1_4
  unsigned int v97; // xmm5_4
  unsigned int v98; // xmm4_4
  float v99; // xmm0_4
  float v100; // xmm2_4
  float v101; // xmm3_4
  float v102; // xmm0_4
  signed int v103; // r13d
  int *v104; // rsi
  float v105; // xmm15_4
  float v106; // xmm11_4
  float v107; // xmm12_4
  float v108; // xmm13_4
  __int64 v109; // rcx
  float v110; // xmm3_4
  float v111; // xmm1_4
  __int64 v112; // rax
  float v113; // xmm1_4
  float v114; // xmm3_4
  float v115; // xmm10_4
  float v116; // xmm8_4
  float v117; // xmm9_4
  float v118; // xmm10_4
  float v119; // xmm8_4
  float v120; // xmm4_4
  float v121; // xmm5_4
  float v122; // xmm6_4
  float v123; // xmm3_4
  __int64 v124; // rax
  float v125; // xmm3_4
  float v126; // xmm4_4
  float v127; // xmm3_4
  float v128; // xmm4_4
  float v129; // xmm5_4
  float v130; // xmm3_4
  float v131; // xmm4_4
  float v132; // xmm1_4
  __int64 v133; // r13
  _DWORD *v134; // rsi
  float v135; // xmm5_4
  float v136; // xmm7_4
  float v137; // xmm12_4
  float v138; // xmm11_4
  float v139; // xmm6_4
  float v140; // xmm4_4
  float v141; // xmm14_4
  float v142; // xmm13_4
  __int64 v143; // rcx
  float v144; // xmm15_4
  float v145; // xmm10_4
  float v146; // xmm9_4
  float v147; // xmm3_4
  float v148; // xmm2_4
  unsigned int v149; // xmm15_4
  float v150; // xmm9_4
  float v151; // xmm3_4
  float v152; // xmm8_4
  float v153; // xmm0_4
  float v154; // xmm9_4
  float v155; // xmm10_4
  float v156; // xmm2_4
  float v157; // xmm8_4
  float v158; // xmm10_4
  float v159; // xmm3_4
  float v160; // xmm1_4
  float v161; // xmm5_4
  float v162; // xmm7_4
  float v163; // xmm8_4
  float v164; // xmm0_4
  float v165; // xmm2_4
  float v166; // xmm1_4
  float v167; // xmm6_4
  float v168; // xmm3_4
  float v169; // xmm4_4
  float v170; // xmm5_4
  float v171; // xmm3_4
  float v172; // xmm7_4
  float v173; // xmm2_4
  float v174; // xmm5_4
  float v175; // xmm6_4
  float v176; // xmm5_4
  float v177; // xmm1_4
  float v178; // xmm4_4
  float v179; // xmm6_4
  float v180; // xmm9_4
  float v181; // xmm10_4
  float v182; // xmm5_4
  float v183; // xmm3_4
  float v184; // xmm4_4
  float v185; // xmm1_4
  float v186; // xmm7_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140035E50[3344];
#define v188 (*(__int64 (*))(void *)(sr_frame_140035E50 + 0)) /* [rsp+0h] */
#define v189 (*(__int64 (*))(void *)(sr_frame_140035E50 + 40)) /* [rsp+28h] */
#define v190 (*(float (*))(void *)(sr_frame_140035E50 + 80)) /* [rsp+50h] */
#define v191 (*(__int64 (*))(void *)(sr_frame_140035E50 + 88)) /* [rsp+58h] */
#define v192 (*(float (*))(void *)(sr_frame_140035E50 + 96)) /* [rsp+60h] */
#define v193 (*(float (*))(void *)(sr_frame_140035E50 + 104)) /* [rsp+68h] */
#define v194 (*(_QWORD (*)[2])(void *)(sr_frame_140035E50 + 112)) /* [rsp+70h] */
#define v195 (*(float (*))(void *)(sr_frame_140035E50 + 128)) /* [rsp+80h] */
#define v196 (*(signed __int64 (*))(void *)(sr_frame_140035E50 + 136)) /* [rsp+88h] */
#define v197 (*(float (*))(void *)(sr_frame_140035E50 + 144)) /* [rsp+90h] */
#define v198 (*(float * (*))(void *)(sr_frame_140035E50 + 152)) /* [rsp+98h] */
#define v199 (*(float (*))(void *)(sr_frame_140035E50 + 160)) /* [rsp+A0h] */
#define v200 (*(__int64 (*))(void *)(sr_frame_140035E50 + 168)) /* [rsp+A8h] */
#define v201 (*(float (*))(void *)(sr_frame_140035E50 + 176)) /* [rsp+B0h] */
#define v202 (*(__int64 (*))(void *)(sr_frame_140035E50 + 184)) /* [rsp+B8h] */
#define v203 (*(float (*))(void *)(sr_frame_140035E50 + 192)) /* [rsp+C0h] */
#define v204 (*(signed __int64 (*))(void *)(sr_frame_140035E50 + 200)) /* [rsp+C8h] */
#define v205 (*(signed __int64 (*))(void *)(sr_frame_140035E50 + 208)) /* [rsp+D0h] */
#define v206 (*(float (*))(void *)(sr_frame_140035E50 + 216)) /* [rsp+D8h] */
#define v207 (*(__int64 (*))(void *)(sr_frame_140035E50 + 224)) /* [rsp+E0h] */
#define v208 (*(signed __int64 (*))(void *)(sr_frame_140035E50 + 232)) /* [rsp+E8h] */
#define v209 (*(__int64 (*))(void *)(sr_frame_140035E50 + 240)) /* [rsp+F0h] */
#define v210 (*(signed __int64 (*))(void *)(sr_frame_140035E50 + 248)) /* [rsp+F8h] */
#define v211 (*(int (*))(void *)(sr_frame_140035E50 + 256)) /* [rsp+100h] */
#define v212 (*(int (*))(void *)(sr_frame_140035E50 + 260)) /* [rsp+104h] */
#define v213 (*(int (*))(void *)(sr_frame_140035E50 + 264)) /* [rsp+108h] */
#define v214 (*(char (*))(void *)(sr_frame_140035E50 + 268)) /* [rsp+10Ch] */
#define v215 (*(_BYTE (*)[4])(void *)(sr_frame_140035E50 + 272)) /* [rsp+110h] */
#define v216 (*(_BYTE (*)[4])(void *)(sr_frame_140035E50 + 276)) /* [rsp+114h] */
#define v217 (*(char (*))(void *)(sr_frame_140035E50 + 280)) /* [rsp+118h] */
#define v218 (*(_BYTE (*)[4])(void *)(sr_frame_140035E50 + 284)) /* [rsp+11Ch] */
#define v219 (*(_BYTE (*)[4])(void *)(sr_frame_140035E50 + 288)) /* [rsp+120h] */
#define v221 (*(_BYTE (*)[4])(void *)(sr_frame_140035E50 + 296)) /* [rsp+128h] */
#define v222 (*(_BYTE (*)[3028])(void *)(sr_frame_140035E50 + 300)) /* [rsp+12Ch] */
#define v223 (*(__int64 (*))(void *)(sr_frame_140035E50 + 3328)) /* [rsp+D00h] */

  v5 = *a2;
  v6 = 5210LL * a1;
  v7 = *a2;
  v206 = a4;
  v8 = a3;
  v194[0] = (uint64)(uintptr_t)(a2);
  v198 = a3;
  v9 = a2;
  v10 = *(float *)&dword_140404A6C[v6 + 129716753];
  if ( (float)(v7 + a4) < v10 && (float)(a4 + *a3) < v10 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v11 = *(float *)&dword_140404A6C[v6 + 129716754];
  if ( (float)(a2[1] + a4) < v11 && (float)(a4 + a3[1]) < v11 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v12 = *(float *)&dword_140404A6C[v6 + 129716755];
  if ( (float)(a2[2] + a4) < v12 && (float)(a4 + a3[2]) < v12 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v13 = *(float *)&dword_140404A6C[v6 + 129716756];
  if ( (float)(v5 - a4) > v13 && (float)(*a3 - a4) > v13 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v14 = *(float *)&dword_140404A6C[v6 + 129716757];
  if ( (float)(a2[1] - a4) > v14 && (float)(a3[1] - a4) > v14 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v15 = *(float *)&dword_140404A6C[v6 + 129716758];
  if ( (float)(a2[2] - a4) > v15 && (float)(a3[2] - a4) > v15 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v16 = (int)dword_140404A6C[v6 + 129716710];
  v17 = 0;
  v18 = 0;
  dword_140404A6C[73006988] = 1199570944;
  v19 = *a3 + *a2;
  v20 = a3[1] + a2[1];
  v21 = a3[2] + a2[2];
  v22 = 180288 * v16;
  v190 = v19;
  v195 = v20;
  v193 = v21;
  v207 = v16;
  v23 = (int)dword_140404A6C[45072 * v16 + 335170684];
  v191 = 180288 * v16;
  v202 = v23;
  if ( v23 < 4 )
  {
    if ( v23 <= 0 )
      goto LABEL_21;
  }
  else
  {
    v24 = *(float *)&dword_140404A6C[v6 + 129716726];
    v25 = *(float *)&dword_140404A6C[v6 + 129716720];
    v26 = *(float *)&dword_140404A6C[v6 + 129716727];
    v27 = *(float *)&dword_140404A6C[v6 + 129716721];
    v28 = *(float *)&dword_140404A6C[v6 + 129716728];
    v29 = *(float *)&dword_140404A6C[v6 + 129716722];
    v30 = *(float *)&dword_140404A6C[v6 + 129716729];
    v31 = *(float *)&dword_140404A6C[v6 + 129716730];
    v205 = &v221[-v22] - (_BYTE *)&dword_140404A6C[335170686];
    v32 = v205;
    v210 = &v222[-v22] - (_BYTE *)&dword_140404A6C[335170686];
    v33 = (float *)((char *)&dword_140404A6C[335170686] + v22);
    v34 = (char *)&v212 - v22 - (char *)&dword_140404A6C[335170686];
    v204 = (char *)&v211 - v22 - (char *)&dword_140404A6C[335170686];
    v35 = (char *)&v213 - v22 - (char *)&dword_140404A6C[335170686];
    v36 = v204;
    v37 = &v215[-v22] - (_BYTE *)&dword_140404A6C[335170686];
    v38 = &v216[-v22] - (_BYTE *)&dword_140404A6C[335170686];
    v208 = &v214 - v22 - (char *)&dword_140404A6C[335170686];
    v39 = &v218[-v22] - (_BYTE *)&dword_140404A6C[335170686];
    v40 = &v219[-v22] - (_BYTE *)&dword_140404A6C[335170686];
    v196 = &v217 - v22 - (char *)&dword_140404A6C[335170686];
    v41 = v221 - v22 + 2;
    v42 = v208;
    v209 = v41 - (_BYTE *)&dword_140404A6C[335170686];
    v43 = ((unsigned __int64)(v23 - 4) >> 2) + 1;
    v200 = 4 * v43;
    v44 = v196;
    do
    {
      v45 = *(v33 - 1);
      v46 = v33[1];
      v47 = *(float *)&dword_140404A6C[v6 + 129716731] * *v33;
      v48 = v33[3];
      v49 = (float)((float)((float)(v26 * v45) + v27) + (float)(v31 * *v33))
          + (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v46);
      v50 = *(float *)&dword_140404A6C[v6 + 129716734];
      *(float *)((char *)v33 + v36) = (float)((float)((float)(v24 * v45) + v25) + (float)(v30 * *v33))
                                    + (float)(*(float *)&dword_140404A6C[v6 + 129716732] * v46);
      v51 = v28 * v45;
      v52 = v33[2];
      v53 = v50 * v46;
      v54 = v33[4];
      *(float *)((char *)v33 + v34) = v49;
      v55 = (float)((float)(v51 + v29) + v47) + v53;
      v56 = *(float *)&dword_140404A6C[v6 + 129716732] * v54;
      *(float *)((char *)v33 + v35) = v55;
      v57 = (float)((float)((float)(v24 * v52) + v25) + (float)(v30 * v48)) + v56;
      v58 = (float)((float)(v26 * v52) + v27) + (float)(v31 * v48);
      v59 = *(float *)&dword_140404A6C[v6 + 129716731] * v48;
      v60 = v33[6];
      v61 = v58 + (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v54);
      v62 = *(float *)&dword_140404A6C[v6 + 129716734];
      *(float *)((char *)v33 + v42) = v57;
      v63 = v28 * v52;
      v64 = v33[5];
      v65 = v62 * v54;
      v66 = v33[7];
      *(float *)((char *)v33 + v37) = v61;
      v67 = (float)((float)(v63 + v29) + v59) + v65;
      v68 = *(float *)&dword_140404A6C[v6 + 129716732] * v66;
      *(float *)((char *)v33 + v38) = v67;
      *(float *)((char *)v33 + v44) = (float)((float)((float)(v24 * v64) + v25) + (float)(v30 * v60)) + v68;
      v69 = *(float *)&dword_140404A6C[v6 + 129716731] * v60;
      v70 = *(float *)&dword_140404A6C[v6 + 129716734] * v66;
      *(float *)((char *)v33 + v39) = (float)((float)((float)(v26 * v64) + v27) + (float)(v31 * v60))
                                    + (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v66);
      v71 = (float)((float)((float)(v28 * v64) + v29) + v69) + v70;
      v72 = v33[9];
      v73 = v33[8];
      *(float *)((char *)v33 + v40) = v71;
      v74 = v33[10];
      *(float *)&v196 = (float)((float)(v24 * v73) + v25) + (float)(v30 * v72);
      v75 = *(float *)&dword_140404A6C[v6 + 129716731] * v72;
      *((float *)&v196 + 1) = (float)((float)(v26 * v73) + v27) + (float)(v31 * v72);
      v76 = (float)((float)(v28 * v73) + v29) + v75;
      v77 = *(float *)&dword_140404A6C[v6 + 129716732] * v74;
      v197 = v76;
      *(float *)((char *)v33 + v209) = v77 + *(float *)&v196;
      v78 = v210;
      v79 = (float)(*(float *)&dword_140404A6C[v6 + 129716734] * v74) + v76;
      *(float *)((char *)v33 + v32) = (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v74)
                                    + (float)((float)((float)(v26 * v73) + v27) + (float)(v31 * v72));
      *(float *)((char *)v33 + v78) = v79;
      v33 += 12;
      --v43;
    }
    while ( v43 );
    v23 = v202;
    v18 = v200;
    v17 = 0;
    v8 = v198;
    v9 = (float *)v194[0];
    v22 = v191;
    if ( v200 >= v202 )
      goto LABEL_20;
    v16 = v207;
  }
  v80 = *(float *)&dword_140404A6C[v6 + 129716726];
  v81 = *(float *)&dword_140404A6C[v6 + 129716720];
  v82 = *(float *)&dword_140404A6C[v6 + 129716727];
  v83 = *(float *)&dword_140404A6C[v6 + 129716721];
  v84 = *(float *)&dword_140404A6C[v6 + 129716728];
  v85 = *(float *)&dword_140404A6C[v6 + 129716722];
  v86 = *(float *)&dword_140404A6C[v6 + 129716729];
  v87 = *(float *)&dword_140404A6C[v6 + 129716730];
  v88 = *(float *)&dword_140404A6C[v6 + 129716731];
  v89 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (v18 + 15024 * v16) + 1344896100);
  v90 = v23 - v18;
  do
  {
    v91 = *(v89 - 1);
    v92 = *v89;
    v93 = v82 * v91;
    v94 = v84 * v91;
    v95 = (float)(v80 * v91) + v81;
    v96 = *(float *)&dword_140404A6C[v6 + 129716733];
    *(float *)&v97 = v95 + (float)(v86 * *v89);
    *(float *)&v98 = (float)(v93 + v83) + (float)(v87 * *v89);
    v196 = __PAIR64__(v98, v97);
    v99 = v88 * v92;
    v100 = v89[1];
    v101 = (float)(v94 + v85) + v99;
    v102 = *(float *)&dword_140404A6C[v6 + 129716732] * v100;
    v197 = v101;
    *(float *)((uintptr_t)v89 + (uintptr_t)&v212 - v22 - (uintptr_t)&dword_140404A6C[335170686]) = (float)(v96 * v100)
                                                                                        + *(float *)&v98;
    *(float *)((uintptr_t)v89 + (uintptr_t)&v211 - v22 - (uintptr_t)&dword_140404A6C[335170686]) = v102 + *(float *)&v97;
    *(float *)((uintptr_t)v89 + (uintptr_t)&v213 - v22 - (uintptr_t)&dword_140404A6C[335170686]) = (float)(*(float *)&dword_140404A6C[v6 + 129716734]
                                                                                                * v100)
                                                                                        + v101;
    v89 += 3;
    --v90;
  }
  while ( v90 );
LABEL_20:
  v21 = v193;
  v20 = v195;
  v19 = v190;
LABEL_21:
  v103 = 0;
  if ( *(int *)((char *)&dword_140404A6C[335173757] + v22) > 0 )
  {
    v104 = (int *)((char *)&dword_140404A6C[335173761] + v22);
    v105 = v19 * 0.5;
    v195 = v20 * 0.5;
    v193 = v21 * 0.5;
    do
    {
      LODWORD(v106) = *(&v211 + 3 * *(v104 - 1));
      LODWORD(v107) = *(&v212 + 3 * *(v104 - 1));
      v108 = *((float *)&v213 + 3 * *(v104 - 1));
      v109 = 3LL * *v104;
      v196 = __PAIR64__(LODWORD(v107), LODWORD(v106));
      v110 = *((float *)&v211 + v109);
      v111 = *((float *)&v213 + v109);
      v112 = v104[1];
      HIDWORD(v200) = *(&v212 + v109);
      v201 = v111;
      v113 = v111 - v108;
      *(float *)&v200 = v110;
      v114 = v110 - v106;
      v115 = *((float *)&v213 + 3 * v112);
      v116 = *((float *)&v211 + 3 * v112);
      HIDWORD(v198) = *(&v212 + 3 * v112);
      v117 = *((float *)&v198 + 1) - v107;
      v199 = v115;
      v118 = v115 - v108;
      *(float *)&v198 = v116;
      v119 = v116 - v106;
      v197 = v108;
      v120 = (float)((float)(*((float *)&v198 + 1) - v107) * v113)
           - (float)(v118 * (float)(*((float *)&v200 + 1) - v107));
      v121 = (float)(v118 * v114) - (float)(v119 * v113);
      v122 = (float)(v119 * (float)(*((float *)&v200 + 1) - v107))
           - (float)((float)(*((float *)&v198 + 1) - v107) * v114);
      v123 = fsqrt((float)((float)(v121 * v121) + (float)(v120 * v120)) + (float)(v122 * v122));
      if ( v123 == 0.0 )
      {
        v191 = 0;
        v192 = 0.0;
      }
      else
      {
        *(float *)&v191 = v120 * (float)(1.0 / v123);
        *((float *)&v191 + 1) = v121 * (float)(1.0 / v123);
        v192 = v122 * (float)(1.0 / v123);
      }
      *(float *)&v189 = a4;
      *((float *)&v202 + 1) = v195 - v107;
      *(float *)&v202 = v105 - v106;
      v203 = v193 - v108;
      if ( (unsigned int)sub_140035690(
                           (float *)v194,
                           (float *)&v191,
                           &v190,
                           v9,
                           v8,
                           v189,
                           (float *)&v196,
                           (float *)&v200,
                           (float *)&v198)
        && *(float *)&dword_140404A6C[73006988] > v190 )
      {
        *(_QWORD *)&dword_140404A6C[73006981] = v194[0];
        dword_140404A6C[73006983] = v194[1];
        *(_QWORD *)&dword_140404A6C[73006984] = v191;
        *(float *)&dword_140404A6C[73006986] = v192;
        *(float *)&dword_140404A6C[73006988] = v190;
      }
      if ( *(v104 - 2) == 4 )
      {
        v200 = (__int64)v198;
        v201 = v199;
        v124 = v104[2];
        v125 = *((float *)&v213 + 3 * v124);
        v126 = *((float *)&v211 + 3 * v124);
        HIDWORD(v198) = *(&v212 + 3 * v124);
        v199 = v125;
        v127 = v125 - v108;
        *(float *)&v198 = v126;
        v128 = v126 - v106;
        v129 = (float)((float)(*((float *)&v198 + 1) - v107) * v118) - (float)(v127 * v117);
        v130 = (float)(v127 * v119) - (float)(v128 * v118);
        v131 = (float)(v128 * v117) - (float)((float)(*((float *)&v198 + 1) - v107) * v119);
        v132 = fsqrt((float)((float)(v130 * v130) + (float)(v129 * v129)) + (float)(v131 * v131));
        if ( v132 == 0.0 )
        {
          v191 = 0;
          v192 = 0.0;
        }
        else
        {
          *(float *)&v191 = v129 * (float)(1.0 / v132);
          *((float *)&v191 + 1) = v130 * (float)(1.0 / v132);
          v192 = v131 * (float)(1.0 / v132);
        }
        *(float *)&v189 = a4;
        if ( (unsigned int)sub_140035690(
                             (float *)v194,
                             (float *)&v191,
                             &v190,
                             v9,
                             v8,
                             v189,
                             (float *)&v196,
                             (float *)&v200,
                             (float *)&v198) )
        {
          if ( *(float *)&dword_140404A6C[73006988] > v190 )
          {
            *(_QWORD *)&dword_140404A6C[73006981] = v194[0];
            dword_140404A6C[73006983] = v194[1];
            *(_QWORD *)&dword_140404A6C[73006984] = v191;
            *(float *)&dword_140404A6C[73006986] = v192;
            *(float *)&dword_140404A6C[73006988] = v190;
          }
        }
      }
      ++v103;
      v104 += 26;
    }
    while ( v103 < *(int *)((char *)&dword_140404A6C[335173757] + v22) );
  }
  if ( *(int *)((char *)&dword_140404A6C[335200382] + v22) > 0 )
  {
    v133 = 0;
    v134 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v6 * 4 + 523090428);
    do
    {
      if ( !*v134 )
      {
        v135 = *(float *)&dword_140404A6C[v6 + 129716720];
        v136 = *(float *)&dword_140404A6C[v6 + 129716726];
        v137 = *(float *)&dword_140404A6C[v6 + 129716729];
        v138 = *(float *)&dword_140404A6C[v6 + 129716732];
        v139 = *(float *)&dword_140404A6C[v6 + 129716731];
        v140 = *(float *)&dword_140404A6C[v6 + 129716734];
        v141 = *(float *)&dword_140404A6C[v6 + 129716730];
        v142 = *(float *)&dword_140404A6C[v6 + 129716733];
        v143 = v133 + 180288 * v207;
        v144 = *(float *)((char *)&dword_140404A6C[335200384] + v143);
        v145 = *(float *)((char *)&dword_140404A6C[335200387] + v143);
        v146 = (float)((float)(v144 * *(float *)&dword_140404A6C[v6 + 129716728])
                     + *(float *)&dword_140404A6C[v6 + 129716722])
             + (float)(*(float *)((char *)&dword_140404A6C[335200385] + v143) * v139);
        v147 = *(float *)((char *)&dword_140404A6C[335200386] + v143) * v140;
        v148 = *(float *)((char *)&dword_140404A6C[335200388] + v143);
        *(float *)&v149 = (float)((float)((float)(v144 * *(float *)&dword_140404A6C[v6 + 129716727])
                                        + *(float *)&dword_140404A6C[v6 + 129716721])
                                + (float)(*(float *)((char *)&dword_140404A6C[335200385] + v143) * v141))
                        + (float)(*(float *)((char *)&dword_140404A6C[335200386] + v143) * v142);
        v195 = (float)((float)((float)(*(float *)((char *)&dword_140404A6C[335200384] + v143) * v136) + v135)
                     + (float)(*(float *)((char *)&dword_140404A6C[335200385] + v143) * v137))
             + (float)(*(float *)((char *)&dword_140404A6C[335200386] + v143) * v138);
        v150 = v146 + v147;
        v151 = *(float *)((char *)&dword_140404A6C[335200389] + v143);
        v152 = (float)(v145 * *(float *)&dword_140404A6C[v6 + 129716727]) + *(float *)&dword_140404A6C[v6 + 129716721];
        *(float *)&v204 = v150;
        v153 = v148 * v141;
        v154 = (float)((float)((float)(v145 * v136) + v135) + (float)(v148 * v137)) + (float)(v151 * v138);
        v155 = (float)((float)(v145 * *(float *)&dword_140404A6C[v6 + 129716728])
                     + *(float *)&dword_140404A6C[v6 + 129716722])
             + (float)(v148 * v139);
        v156 = *(float *)((char *)&dword_140404A6C[335200391] + v143);
        v157 = (float)(v152 + v153) + (float)(v151 * v142);
        v158 = v155 + (float)(v151 * v140);
        v159 = *(float *)((char *)&dword_140404A6C[335200392] + v143);
        v160 = (float)(*(float *)((char *)&dword_140404A6C[335200390] + v143) * v136) + v135;
        v161 = *(float *)((char *)&dword_140404A6C[335200390] + v143);
        v193 = v160 + (float)(v156 * v137);
        v193 = v193 + (float)(v159 * v138);
        v162 = v161;
        *((float *)&v200 + 1) = v157;
        v163 = v157 - *(float *)&v149;
        v164 = v156;
        v165 = v156 * v139;
        v166 = v159;
        v167 = *(float *)((char *)&dword_140404A6C[335200393] + v143);
        v168 = v159 * v140;
        v169 = *(float *)((char *)&dword_140404A6C[335200395] + v143);
        v170 = (float)((float)((float)(v161 * *(float *)&dword_140404A6C[v6 + 129716728])
                             + *(float *)&dword_140404A6C[v6 + 129716722])
                     + v165)
             + v168;
        v171 = *(float *)((char *)&dword_140404A6C[335200394] + v143);
        v172 = (float)((float)(v162 * *(float *)&dword_140404A6C[v6 + 129716727])
                     + *(float *)&dword_140404A6C[v6 + 129716721])
             + (float)(v164 * v141);
        v173 = (float)(v167 * *(float *)&dword_140404A6C[v6 + 129716727]) + *(float *)&dword_140404A6C[v6 + 129716721];
        v201 = v158;
        *(float *)&v205 = v170;
        *(float *)&v200 = v154;
        v174 = (float)(v167 * *(float *)&dword_140404A6C[v6 + 129716726]) + *(float *)&dword_140404A6C[v6 + 129716720];
        v175 = (float)(v167 * *(float *)&dword_140404A6C[v6 + 129716728]) + *(float *)&dword_140404A6C[v6 + 129716722];
        *((float *)&v198 + 1) = v172 + (float)(v166 * v142);
        v176 = (float)(v174 + (float)(v171 * v137)) + (float)(v169 * v138);
        v177 = v169;
        v178 = v169 * *(float *)&dword_140404A6C[v6 + 129716734];
        v179 = v175 + (float)(v171 * *(float *)&dword_140404A6C[v6 + 129716731]);
        v180 = v154 - v195;
        v196 = __PAIR64__(v149, LODWORD(v195));
        v199 = *(float *)&v205;
        *(float *)&v198 = v193;
        *(float *)&v202 = v176;
        v203 = v179 + v178;
        v197 = *(float *)&v204;
        v181 = v158 - *(float *)&v204;
        *((float *)&v202 + 1) = (float)(v173 + (float)(v171 * v141)) + (float)(v177 * v142);
        v182 = (float)((float)(*((float *)&v198 + 1) - *(float *)&v149) * v181)
             - (float)((float)(*(float *)&v205 - *(float *)&v204) * v163);
        v183 = (float)((float)(*(float *)&v205 - *(float *)&v204) * v180) - (float)((float)(v193 - v195) * v181);
        v184 = (float)((float)(v193 - v195) * v163) - (float)((float)(*((float *)&v198 + 1) - *(float *)&v149) * v180);
        v185 = fsqrt((float)((float)(v183 * v183) + (float)(v182 * v182)) + (float)(v184 * v184));
        if ( v185 == 0.0 )
        {
          v191 = 0;
          v192 = 0.0;
        }
        else
        {
          *(float *)&v191 = v182 * (float)(1.0 / v185);
          *((float *)&v191 + 1) = v183 * (float)(1.0 / v185);
          v192 = v184 * (float)(1.0 / v185);
        }
        v186 = v206;
        *(float *)&v189 = v206;
        if ( (unsigned int)sub_140035690(
                             (float *)v194,
                             (float *)&v191,
                             &v190,
                             v9,
                             v8,
                             v189,
                             (float *)&v196,
                             (float *)&v200,
                             (float *)&v198)
          && *(float *)&dword_140404A6C[73006988] > v190 )
        {
          *(_QWORD *)&dword_140404A6C[73006981] = v194[0];
          dword_140404A6C[73006983] = v194[1];
          *(_QWORD *)&dword_140404A6C[73006984] = v191;
          *(float *)&dword_140404A6C[73006986] = v192;
          *(float *)&dword_140404A6C[73006988] = v190;
        }
        *(float *)&v189 = v186;
        if ( (unsigned int)sub_140035690(
                             (float *)v194,
                             (float *)&v191,
                             &v190,
                             v9,
                             v8,
                             v189,
                             (float *)&v196,
                             (float *)&v198,
                             (float *)&v202)
          && *(float *)&dword_140404A6C[73006988] > v190 )
        {
          dword_140404A6C[73006981] = v194[0];
          *(_QWORD *)&dword_140404A6C[73006982] = *(_QWORD *)((char *)v194 + 4);
          *(_QWORD *)&dword_140404A6C[73006984] = v191;
          *(float *)&dword_140404A6C[73006986] = v192;
          *(float *)&dword_140404A6C[73006988] = v190;
        }
        *(float *)&v191 = -*(float *)&v191;
        *(float *)&v189 = v186;
        *((float *)&v191 + 1) = -*((float *)&v191 + 1);
        v192 = -v192;
        if ( (unsigned int)sub_140035690(
                             (float *)v194,
                             (float *)&v191,
                             &v190,
                             v9,
                             v8,
                             v189,
                             (float *)&v196,
                             (float *)&v198,
                             (float *)&v200)
          && *(float *)&dword_140404A6C[73006988] > v190 )
        {
          *(_QWORD *)&dword_140404A6C[73006981] = v194[0];
          dword_140404A6C[73006983] = v194[1];
          *(_QWORD *)&dword_140404A6C[73006984] = v191;
          *(float *)&dword_140404A6C[73006986] = v192;
          *(float *)&dword_140404A6C[73006988] = v190;
        }
        *(float *)&v189 = v186;
        if ( (unsigned int)sub_140035690(
                             (float *)v194,
                             (float *)&v191,
                             &v190,
                             v9,
                             v8,
                             v189,
                             (float *)&v196,
                             (float *)&v202,
                             (float *)&v198)
          && *(float *)&dword_140404A6C[73006988] > v190 )
        {
          *(_QWORD *)&dword_140404A6C[73006981] = v194[0];
          dword_140404A6C[73006983] = v194[1];
          *(_QWORD *)&dword_140404A6C[73006984] = v191;
          *(float *)&dword_140404A6C[73006986] = v192;
          *(float *)&dword_140404A6C[73006988] = v190;
        }
      }
      ++v17;
      ++v134;
      v133 += 52;
    }
    while ( v17 < *(int *)((char *)&dword_140404A6C[335200382] + v22) );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v188
#undef v189
#undef v190
#undef v191
#undef v192
#undef v193
#undef v194
#undef v195
#undef v196
#undef v197
#undef v198
#undef v199
#undef v200
#undef v201
#undef v202
#undef v203
#undef v204
#undef v205
#undef v206
#undef v207
#undef v208
#undef v209
#undef v210
#undef v211
#undef v212
#undef v213
#undef v214
#undef v215
#undef v216
#undef v217
#undef v218
#undef v219
#undef v221
#undef v222
#undef v223

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A8489C: using guessed type unsigned int;

//----- (0000000140037220) ----------------------------------------------------
__int64            sub_140037220(int a1, float *a2, float *a3, float a4)
{
  float *v4; // rdi
  __int64 v5; // r8
  float *v7; // r14
  __int64 v8; // rax
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  __int64 v16; // r15
  signed int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // r11
  __int64 v20; // rdx
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm11_4
  float v25; // xmm12_4
  float v26; // xmm13_4
  float v27; // xmm14_4
  float v28; // xmm15_4
  signed __int64 v29; // rsi
  signed __int64 v30; // r14
  signed __int64 v31; // rdi
  unsigned __int64 v32; // r9
  signed __int64 v33; // rdx
  signed __int64 v34; // r10
  signed __int64 v35; // rbx
  signed __int64 v36; // r12
  signed __int64 v37; // r13
  float *v38; // rax
  signed __int64 v39; // r15
  __int64 v40; // r9
  signed __int64 v41; // r11
  float v42; // xmm4_4
  float v43; // xmm6_4
  float v44; // xmm0_4
  float v45; // xmm5_4
  float v46; // xmm3_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm4_4
  float v50; // xmm1_4
  float v51; // xmm6_4
  float v52; // xmm2_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm3_4
  float v56; // xmm0_4
  float v57; // xmm5_4
  float v58; // xmm3_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm4_4
  float v62; // xmm1_4
  float v63; // xmm6_4
  float v64; // xmm2_4
  float v65; // xmm1_4
  float v66; // xmm2_4
  float v67; // xmm3_4
  float v68; // xmm4_4
  float v69; // xmm3_4
  float v70; // xmm0_4
  float v71; // xmm5_4
  float v72; // xmm3_4
  float v73; // xmm1_4
  float v74; // xmm6_4
  float v75; // xmm2_4
  signed __int64 v76; // rcx
  float v77; // xmm1_4
  float v78; // xmm0_4
  signed __int64 v79; // rcx
  float v80; // xmm1_4
  float v81; // xmm7_4
  float v82; // xmm8_4
  float v83; // xmm9_4
  float v84; // xmm11_4
  float v85; // xmm12_4
  float v86; // xmm13_4
  float v87; // xmm14_4
  float v88; // xmm15_4
  float *v89; // rax
  __int64 v90; // rdx
  float v91; // xmm4_4
  float v92; // xmm5_4
  float v93; // xmm6_4
  float v94; // xmm1_4
  float v95; // xmm0_4
  float v96; // xmm3_4
  float v97; // xmm1_4
  int *v98; // rbx
  float v99; // xmm11_4
  float v100; // xmm12_4
  float v101; // xmm13_4
  __int64 v102; // rcx
  float v103; // xmm1_4
  float v104; // xmm3_4
  __int64 v105; // rax
  float v106; // xmm1_4
  float v107; // xmm3_4
  float v108; // xmm9_4
  float v109; // xmm7_4
  float v110; // xmm8_4
  float v111; // xmm9_4
  float v112; // xmm7_4
  float v113; // xmm4_4
  float v114; // xmm5_4
  float v115; // xmm6_4
  float v116; // xmm0_4
  __int64 v117; // rax
  float v118; // xmm3_4
  float v119; // xmm4_4
  float v120; // xmm3_4
  float v121; // xmm4_4
  float v122; // xmm5_4
  float v123; // xmm3_4
  float v124; // xmm4_4
  float v125; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140037220[3328];
#define v126 (*(__int64 (*))(void *)(sr_frame_140037220 + 0)) /* [rsp+8h] */
#define v127 (*(__int64 (*))(void *)(sr_frame_140037220 + 40)) /* [rsp+30h] */
#define v128 (*(__int64 (*))(void *)(sr_frame_140037220 + 80)) /* [rsp+58h] */
#define v129 (*(__int64 (*))(void *)(sr_frame_140037220 + 88)) /* [rsp+60h] */
#define v130 (*(__int64 (*))(void *)(sr_frame_140037220 + 96)) /* [rsp+68h] */
#define v131 (*(__int64 (*))(void *)(sr_frame_140037220 + 104)) /* [rsp+70h] */
#define v132 (*(float * (*))(void *)(sr_frame_140037220 + 112)) /* [rsp+78h] */
#define v133 (*(unsigned int (*))(void *)(sr_frame_140037220 + 120)) /* [rsp+80h] */
#define v134 (*(signed __int64 (*))(void *)(sr_frame_140037220 + 128)) /* [rsp+88h] */
#define v135 (*(float * (*))(void *)(sr_frame_140037220 + 136)) /* [rsp+90h] */
#define v136 (*(float (*))(void *)(sr_frame_140037220 + 144)) /* [rsp+98h] */
#define v137 (*(__int64 (*))(void *)(sr_frame_140037220 + 152)) /* [rsp+A0h] */
#define v138 (*(float (*))(void *)(sr_frame_140037220 + 160)) /* [rsp+A8h] */
#define v139 (*(signed __int64 (*))(void *)(sr_frame_140037220 + 168)) /* [rsp+B0h] */
#define v140 (*(signed __int64 (*))(void *)(sr_frame_140037220 + 176)) /* [rsp+B8h] */
#define v141 (*(signed __int64 (*))(void *)(sr_frame_140037220 + 184)) /* [rsp+C0h] */
#define v142 (*(signed __int64 (*))(void *)(sr_frame_140037220 + 192)) /* [rsp+C8h] */
#define v143 (*(signed __int64 (*))(void *)(sr_frame_140037220 + 200)) /* [rsp+D0h] */
#define v144 (*(signed __int64 (*))(void *)(sr_frame_140037220 + 208)) /* [rsp+D8h] */
#define v145 (*(signed __int64 (*))(void *)(sr_frame_140037220 + 216)) /* [rsp+E0h] */
#define v146 (*(__int64 (*))(void *)(sr_frame_140037220 + 224)) /* [rsp+E8h] */
#define v147 (*(int (*))(void *)(sr_frame_140037220 + 240)) /* [rsp+F8h] */
#define v148 (*(int (*))(void *)(sr_frame_140037220 + 244)) /* [rsp+FCh] */
#define v150 (*(_BYTE (*)[4])(void *)(sr_frame_140037220 + 252)) /* [rsp+104h] */
#define v151 (*(_BYTE (*)[4])(void *)(sr_frame_140037220 + 256)) /* [rsp+108h] */
#define v152 (*(_BYTE (*)[4])(void *)(sr_frame_140037220 + 260)) /* [rsp+10Ch] */
#define v153 (*(char (*))(void *)(sr_frame_140037220 + 264)) /* [rsp+110h] */
#define v154 (*(_BYTE (*)[4])(void *)(sr_frame_140037220 + 268)) /* [rsp+114h] */
#define v155 (*(_BYTE (*)[4])(void *)(sr_frame_140037220 + 272)) /* [rsp+118h] */
#define v156 (*(char (*))(void *)(sr_frame_140037220 + 276)) /* [rsp+11Ch] */
#define v157 (*(_BYTE (*)[4])(void *)(sr_frame_140037220 + 280)) /* [rsp+120h] */
#define v158 (*(_BYTE (*)[3028])(void *)(sr_frame_140037220 + 284)) /* [rsp+124h] */
#define v159 (*(__int64 (*))(void *)(sr_frame_140037220 + 3312)) /* [rsp+CF8h] */

  v4 = a3;
  v135 = a3;
  v5 = 5210LL * a1;
  v7 = a2;
  v132 = a2;
  v8 = (int)dword_140404A6C[v5 + 129716710];
  if ( (_DWORD)v8 == 13 )
  {
    return (unsigned int)sub_140035E50(a1, a2, v4, a4) != 0; /* 0x1400372C7: test eax, eax; jne -> mov eax, 1 */
  }
  v10 = *(float *)&dword_140404A6C[v5 + 129716753];
  if ( (float)(*a2 + a4) >= v10 || (float)(a4 + *v4) >= v10 )
  {
    v11 = *(float *)&dword_140404A6C[v5 + 129716754];
    if ( (float)(a2[1] + a4) >= v11 || (float)(a4 + v4[1]) >= v11 )
    {
      v12 = *(float *)&dword_140404A6C[v5 + 129716755];
      if ( (float)(a2[2] + a4) >= v12 || (float)(a4 + v4[2]) >= v12 )
      {
        v13 = *(float *)&dword_140404A6C[v5 + 129716756];
        if ( (float)(*a2 - a4) <= v13 || (float)(*v4 - a4) <= v13 )
        {
          v14 = *(float *)&dword_140404A6C[v5 + 129716757];
          if ( (float)(a2[1] - a4) <= v14 || (float)(v4[1] - a4) <= v14 )
          {
            v15 = *(float *)&dword_140404A6C[v5 + 129716758];
            if ( (float)(a2[2] - a4) <= v15 || (float)(v4[2] - a4) <= v15 )
            {
              v16 = 180288 * v8;
              v17 = 0;
              dword_140404A6C[73006988] = 1199570944;
              v18 = v8;
              v128 = v8;
              v130 = 180288 * v8;
              v19 = 0;
              v20 = (int)dword_140404A6C[45072 * v8 + 335161466];
              v146 = v20;
              if ( v20 < 4 )
              {
                if ( v20 <= 0 )
                  goto LABEL_22;
              }
              else
              {
                v21 = *(float *)&dword_140404A6C[v5 + 129716726];
                v22 = *(float *)&dword_140404A6C[v5 + 129716720];
                v23 = *(float *)&dword_140404A6C[v5 + 129716727];
                v24 = *(float *)&dword_140404A6C[v5 + 129716721];
                v25 = *(float *)&dword_140404A6C[v5 + 129716728];
                v26 = *(float *)&dword_140404A6C[v5 + 129716722];
                v27 = *(float *)&dword_140404A6C[v5 + 129716729];
                v28 = *(float *)&dword_140404A6C[v5 + 129716730];
                v134 = &v154[-v16] - (_BYTE *)&dword_140404A6C[335161468];
                v29 = v134;
                v141 = (char *)&v147 - v16 - (char *)&dword_140404A6C[335161468];
                v139 = &v155[-v16] - (_BYTE *)&dword_140404A6C[335161468];
                v30 = v139;
                v142 = &v150[-v16] - (_BYTE *)&dword_140404A6C[335161468];
                v140 = &v157[-v16] - (_BYTE *)&dword_140404A6C[335161468];
                v31 = v140;
                v143 = &v153 - v16 - (char *)&dword_140404A6C[335161468];
                v145 = &v158[-v16] - (_BYTE *)&dword_140404A6C[335161468];
                v32 = v20 - 4;
                v33 = v142;
                v34 = (char *)&v148 - v16 - (char *)&dword_140404A6C[335161468];
                v35 = &v150[-v16 - 4] - (_BYTE *)&dword_140404A6C[335161468];
                v36 = &v151[-v16] - (_BYTE *)&dword_140404A6C[335161468];
                v144 = &v156 - v16 - (char *)&dword_140404A6C[335161468];
                v37 = &v152[-v16] - (_BYTE *)&dword_140404A6C[335161468];
                v38 = (float *)((char *)&dword_140404A6C[335161468] + v16);
                v39 = v141;
                v40 = (v32 >> 2) + 1;
                v137 = 4 * v40;
                v41 = v143;
                do
                {
                  v42 = *(v38 - 1);
                  v43 = v38[1];
                  v44 = *(float *)&dword_140404A6C[v5 + 129716731] * *v38;
                  v45 = v38[3];
                  v46 = (float)((float)((float)(v23 * v42) + v24) + (float)(v28 * *v38))
                      + (float)(*(float *)&dword_140404A6C[v5 + 129716733] * v43);
                  v47 = *(float *)&dword_140404A6C[v5 + 129716734];
                  *(float *)((char *)v38 + v39) = (float)((float)((float)(v21 * v42) + v22) + (float)(v27 * *v38))
                                                + (float)(*(float *)&dword_140404A6C[v5 + 129716732] * v43);
                  v48 = v25 * v42;
                  v49 = v38[2];
                  v50 = v47 * v43;
                  v51 = v38[4];
                  *(float *)((char *)v38 + v34) = v46;
                  v52 = (float)((float)(v48 + v26) + v44) + v50;
                  v53 = *(float *)&dword_140404A6C[v5 + 129716732] * v51;
                  *(float *)((char *)v38 + v35) = v52;
                  v54 = (float)((float)((float)(v21 * v49) + v22) + (float)(v27 * v45)) + v53;
                  v55 = (float)((float)(v23 * v49) + v24) + (float)(v28 * v45);
                  v56 = *(float *)&dword_140404A6C[v5 + 129716731] * v45;
                  v57 = v38[6];
                  v58 = v55 + (float)(*(float *)&dword_140404A6C[v5 + 129716733] * v51);
                  v59 = *(float *)&dword_140404A6C[v5 + 129716734];
                  *(float *)((char *)v38 + v33) = v54;
                  v60 = v25 * v49;
                  v61 = v38[5];
                  v62 = v59 * v51;
                  v63 = v38[7];
                  *(float *)((char *)v38 + v36) = v58;
                  v64 = (float)((float)(v60 + v26) + v56) + v62;
                  v65 = *(float *)&dword_140404A6C[v5 + 129716732] * v63;
                  *(float *)((char *)v38 + v37) = v64;
                  *(float *)((char *)v38 + v41) = (float)((float)((float)(v21 * v61) + v22) + (float)(v27 * v57)) + v65;
                  v66 = (float)(v25 * v61) + v26;
                  v67 = v23 * v61;
                  v68 = v38[8];
                  v69 = (float)(v67 + v24) + (float)(v28 * v57);
                  v70 = *(float *)&dword_140404A6C[v5 + 129716731] * v57;
                  v71 = v38[9];
                  v72 = v69 + (float)(*(float *)&dword_140404A6C[v5 + 129716733] * v63);
                  v73 = *(float *)&dword_140404A6C[v5 + 129716734] * v63;
                  v74 = v38[10];
                  *(float *)((char *)v38 + v29) = v72;
                  v75 = (float)(v66 + v70) + v73;
                  v76 = v144;
                  v77 = *(float *)&dword_140404A6C[v5 + 129716732] * v74;
                  *(float *)((char *)v38 + v30) = v75;
                  *(float *)((char *)v38 + v76) = (float)((float)((float)(v21 * v68) + v22) + (float)(v27 * v71)) + v77;
                  v78 = *(float *)&dword_140404A6C[v5 + 129716731] * v71;
                  v79 = v145;
                  v80 = *(float *)&dword_140404A6C[v5 + 129716734] * v74;
                  *(float *)((char *)v38 + v31) = (float)((float)((float)(v23 * v68) + v24) + (float)(v28 * v71))
                                                + (float)(*(float *)&dword_140404A6C[v5 + 129716733] * v74);
                  *(float *)((char *)v38 + v79) = (float)((float)((float)(v25 * v68) + v26) + v78) + v80;
                  v38 += 12;
                  --v40;
                }
                while ( v40 );
                v20 = v146;
                v19 = v137;
                v17 = 0;
                v4 = v135;
                v7 = v132;
                v16 = v130;
                v18 = v128;
                if ( v137 >= v146 )
                {
LABEL_22:
                  if ( *(int *)((char *)&dword_140404A6C[335164539] + v16) > 0 )
                  {
                    v98 = (int *)((char *)&dword_140404A6C[335164543] + v16);
                    do
                    {
                      LODWORD(v99) = *(&v147 + 3 * *(v98 - 1));
                      LODWORD(v100) = *(&v148 + 3 * *(v98 - 1));
                      v101 = *(float *)&v150[12 * *(v98 - 1) - 4];
                      v102 = 3LL * *v98;
                      v137 = __PAIR64__(LODWORD(v100), LODWORD(v99));
                      v103 = *(float *)&v150[4 * v102 - 4];
                      v104 = *((float *)&v147 + v102);
                      v105 = v98[1];
                      HIDWORD(v135) = *(&v148 + v102);
                      v136 = v103;
                      v106 = v103 - v101;
                      *(float *)&v135 = v104;
                      v107 = v104 - v99;
                      v108 = *(float *)&v150[12 * v105 - 4];
                      v109 = *((float *)&v147 + 3 * v105);
                      HIDWORD(v130) = *(&v148 + 3 * v105);
                      v110 = *((float *)&v130 + 1) - v100;
                      *(float *)&v131 = v108;
                      v111 = v108 - v101;
                      *(float *)&v130 = v109;
                      v112 = v109 - v99;
                      v138 = v101;
                      v113 = (float)((float)(*((float *)&v130 + 1) - v100) * v106)
                           - (float)(v111 * (float)(*((float *)&v135 + 1) - v100));
                      v114 = (float)(v111 * v107) - (float)(v112 * v106);
                      v115 = (float)(v112 * (float)(*((float *)&v135 + 1) - v100))
                           - (float)((float)(*((float *)&v130 + 1) - v100) * v107);
                      v116 = fsqrt((float)((float)(v114 * v114) + (float)(v113 * v113)) + (float)(v115 * v115));
                      if ( v116 == 0.0 )
                      {
                        v128 = 0;
                        LODWORD(v129) = 0;
                      }
                      else
                      {
                        *(float *)&v128 = (float)(1.0 / v116) * v113;
                        *((float *)&v128 + 1) = (float)(1.0 / v116) * v114;
                        *(float *)&v129 = (float)(1.0 / v116) * v115;
                      }
                      *(float *)&v127 = a4;
                      if ( (unsigned int)sub_140035690(
                                           (float *)&v132,
                                           (float *)&v128,
                                           (float *)&v134,
                                           v7,
                                           v4,
                                           v127,
                                           (float *)&v137,
                                           (float *)&v135,
                                           (float *)&v130)
                        && *(float *)&dword_140404A6C[73006988] > *(float *)&v134 )
                      {
                        *(_QWORD *)&dword_140404A6C[73006981] = (uint64)(uintptr_t)(v132);
                        dword_140404A6C[73006983] = v133;
                        *(_QWORD *)&dword_140404A6C[73006984] = v128;
                        dword_140404A6C[73006986] = v129;
                        dword_140404A6C[73006988] = v134;
                      }
                      if ( *(v98 - 2) == 4 )
                      {
                        v135 = (float *)v130;
                        v136 = *(float *)&v131;
                        v117 = v98[2];
                        v118 = *(float *)&v150[12 * v117 - 4];
                        v119 = *((float *)&v147 + 3 * v117);
                        HIDWORD(v130) = *(&v148 + 3 * v117);
                        *(float *)&v131 = v118;
                        v120 = v118 - v101;
                        *(float *)&v130 = v119;
                        v121 = v119 - v99;
                        v122 = (float)((float)(*((float *)&v130 + 1) - v100) * v111) - (float)(v120 * v110);
                        v123 = (float)(v120 * v112) - (float)(v121 * v111);
                        v124 = (float)(v121 * v110) - (float)((float)(*((float *)&v130 + 1) - v100) * v112);
                        v125 = fsqrt((float)((float)(v123 * v123) + (float)(v122 * v122)) + (float)(v124 * v124));
                        if ( v125 == 0.0 )
                        {
                          v128 = 0;
                          LODWORD(v129) = 0;
                        }
                        else
                        {
                          *(float *)&v128 = v122 * (float)(1.0 / v125);
                          *((float *)&v128 + 1) = v123 * (float)(1.0 / v125);
                          *(float *)&v129 = v124 * (float)(1.0 / v125);
                        }
                        *(float *)&v127 = a4;
                        if ( (unsigned int)sub_140035690(
                                             (float *)&v132,
                                             (float *)&v128,
                                             (float *)&v134,
                                             v7,
                                             v4,
                                             v127,
                                             (float *)&v137,
                                             (float *)&v135,
                                             (float *)&v130)
                          && *(float *)&dword_140404A6C[73006988] > *(float *)&v134 )
                        {
                          *(_QWORD *)&dword_140404A6C[73006981] = (uint64)(uintptr_t)(v132);
                          dword_140404A6C[73006983] = v133;
                          *(_QWORD *)&dword_140404A6C[73006984] = v128;
                          dword_140404A6C[73006986] = v129;
                          dword_140404A6C[73006988] = v134;
                        }
                      }
                      ++v17;
                      v98 += 6;
                    }
                    while ( v17 < *(int *)((char *)&dword_140404A6C[335164539] + v16) );
                  }
                  return !(*(float *)&dword_140404A6C[73006988] >= 65536.0f); /* 0x140037DBD: comiss; jae -> xor eax, eax, else mov eax, 1 */
                }
              }
              v81 = *(float *)&dword_140404A6C[v5 + 129716726];
              v82 = *(float *)&dword_140404A6C[v5 + 129716720];
              v83 = *(float *)&dword_140404A6C[v5 + 129716727];
              v84 = *(float *)&dword_140404A6C[v5 + 129716721];
              v85 = *(float *)&dword_140404A6C[v5 + 129716728];
              v86 = *(float *)&dword_140404A6C[v5 + 129716722];
              v87 = *(float *)&dword_140404A6C[v5 + 129716729];
              v88 = *(float *)&dword_140404A6C[v5 + 129716730];
              v89 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (v19 + 15024 * v18) + 1344859228);
              v90 = v20 - v19;
              do
              {
                v91 = *(v89 - 1);
                v92 = *v89;
                v93 = v89[1];
                v94 = *(float *)&dword_140404A6C[v5 + 129716733] * v93;
                v95 = *(float *)&dword_140404A6C[v5 + 129716731] * *v89;
                *(float *)((uintptr_t)v89 + (uintptr_t)&v147 - v16 - (uintptr_t)&dword_140404A6C[335161468]) = (float)((float)((float)(v81 * v91) + v82) + (float)(v87 * *v89)) + (float)(*(float *)&dword_140404A6C[v5 + 129716732] * v93);
                v96 = (float)((float)((float)(v83 * v91) + v84) + (float)(v88 * v92)) + v94;
                v97 = *(float *)&dword_140404A6C[v5 + 129716734] * v93;
                *(float *)((uintptr_t)v89 + (uintptr_t)&v148 - v16 - (uintptr_t)&dword_140404A6C[335161468]) = v96;
                *(float *)((uintptr_t)v89 + ((uintptr_t)v150 + (-v16 - 4)) - (uintptr_t)&dword_140404A6C[335161468]) = (float)((float)((float)(v85 * v91) + v86) + v95)
                                                                                                 + v97;
                v89 += 3;
                --v90;
              }
              while ( v90 );
              goto LABEL_22;
            }
          }
        }
      }
    }
  }
  return 0; /* 0x1400372CF: xor eax, eax */
}
#undef v126
#undef v127
#undef v128
#undef v129
#undef v130
#undef v131
#undef v132
#undef v133
#undef v134
#undef v135
#undef v136
#undef v137
#undef v138
#undef v139
#undef v140
#undef v141
#undef v142
#undef v143
#undef v144
#undef v145
#undef v146
#undef v147
#undef v148
#undef v150
#undef v151
#undef v152
#undef v153
#undef v154
#undef v155
#undef v156
#undef v157
#undef v158
#undef v159

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A8489C: using guessed type unsigned int;

//----- (0000000140037DE0) ----------------------------------------------------
void            sub_140037DE0(signed int a1, int a2, unsigned int a3, unsigned int a4, unsigned __int16 a5)
{
  __int64 v8; // r9
  __int64 v9; // rax
  signed int v10; // edx
  signed int v11; // r10d
  signed int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax

  if ( (unsigned int)a1 <= 3 && a2 >= 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v8 = a1;
    v9 = 263004LL * a1;
    v10 = (unsigned int)a2 >> 6;
    v11 = dword_140404A6C[v9 + 111579650];
    if ( v10 < v11 && (int)(a3 >> 6) < (int)dword_140404A6C[v9 + 111579651] )
    {
      v12 = dword_140404A6C[v9 + 111579652];
      if ( (int)(a4 >> 6) < v12 )
      {
        v13 = 4LL * (int)(v10 + v11 * ((a4 >> 6) + (a3 >> 6) * v12));
        LODWORD(v14) = *(_DWORD *)(v13 + *(_QWORD *)&dword_140404A6C[2 * v8 + 421506981]);
        if ( (_DWORD)v14 != -1
          || (v14 = (int)dword_140404A6C[421506989],
              ++dword_140404A6C[421506989],
              *(_DWORD *)(v13 + *(_QWORD *)&dword_140404A6C[2 * v8 + 421506981]) = v14,
              sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[512 * v14 + 421506990]), 0xFFu, 0x800u),
              (_DWORD)v14 != -1) )
        {
          v15 = ((__int64)(int)v14 << 9) + (((unsigned int)a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7));
          LODWORD(v16) = dword_140404A6C[v15 + 421506990];
          if ( (_DWORD)v16 != -1 )
            goto LABEL_15;
          v16 = (int)dword_140404A6C[421769134];
          if ( (int)dword_140404A6C[421769134] < 2048 )
          {
            v17 = 512;
            ++dword_140404A6C[421769134];
            dword_140404A6C[v15 + 421506990] = v16;
            v18 = 67584 * v16;
            do
            {
              v18 += 132;
              *(_DWORD *)(v18 + *(_QWORD *)&dword_140404A6C[421769135] - 132) = 0;
              --v17;
            }
            while ( v17 );
            if ( (_DWORD)v16 != -1 )
            {
LABEL_15:
              v19 = (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7)) + ((__int64)(int)v16 << 9);
              v20 = *(int *)(132 * v19 + *(_QWORD *)&dword_140404A6C[421769135]);
              if ( (int)v20 < 32 )
              {
                *(_DWORD *)(*(_QWORD *)&dword_140404A6C[421769135] + 4 * (v20 + 33 * v19) + 4) = a5;
                ++*(_DWORD *)(132 * v19 + *(_QWORD *)&dword_140404A6C[421769135]);
              }
            }
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A4BF0920: using guessed type unsigned int;
// 1A4CF0924: using guessed type unsigned int;
// 1A4CF0928: using guessed type unsigned int;

//----- (0000000140037FE0) ----------------------------------------------------
void sub_140037FE0()
{
  signed int v0; // edx
  int v1; // r15d
  signed int v2; // r9d
  int v3; // eax
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // eax
  unsigned int *v8; // rdi
  signed int i; // r14d
  signed int v10; // esi
  signed int v11; // eax
  int v12; // ebx

  v0 = dword_140404A6C[111579651];
  v1 = 0;
  dword_140404A6C[421506989] = 0;
  v2 = 0;
  if ( (int)dword_140404A6C[111579651] > 0 )
  {
    v3 = dword_140404A6C[111579652];
    v4 = dword_140404A6C[111579650];
    do
    {
      v5 = 0;
      if ( v3 > 0 )
      {
        do
        {
          v6 = 0;
          if ( v4 > 0 )
          {
            do
            {
              v7 = v6 + v4 * (v5 + v2 * v3);
              ++v6;
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[421506981] + 4LL * v7) = -1;
              v4 = dword_140404A6C[111579650];
              v3 = dword_140404A6C[111579652];
            }
            while ( v6 < (int)dword_140404A6C[111579650] );
          }
          ++v5;
        }
        while ( v5 < v3 );
        v0 = dword_140404A6C[111579651];
      }
      ++v2;
    }
    while ( v2 < v0 );
  }
  dword_140404A6C[421769134] = 0;
  v8 = &dword_140404A6C[278845967];
  do
  {
    if ( *(v8 - 74) )
    {
      if ( dword_140404A6C[1268 * *(v8 - 69) + 278521288] )
      {
        for ( i = *(v8 - 2); i <= (int)v8[1]; ++i )
        {
          v10 = *(v8 - 1);
          if ( v10 <= (int)v8[2] )
          {
            v11 = *v8;
            do
            {
              v12 = *(v8 - 3);
              if ( v12 <= v11 )
              {
                do
                {
                  sub_140037DE0(0, v12, i, v10, v1 | 0x8000);
                  v11 = *v8;
                  ++v12;
                }
                while ( v12 <= (int)*v8 );
              }
              ++v10;
            }
            while ( v10 <= (int)v8[2] );
          }
        }
      }
    }
    ++v1;
    v8 += 1760;
  }
  while ( v1 < 1024 );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15ADA9274: using guessed type unsigned int;
// 15ADA9278: using guessed type unsigned int;
// 15ADA927C: using guessed type unsigned int;
// 1A4BF0900: using guessed type unsigned int;
// 1A4BF0920: using guessed type unsigned int;
// 1A4CF0924: using guessed type unsigned int;

//----- (0000000140038130) ----------------------------------------------------
__int64            sub_140038130(int a1, int a2, int a3, int a4)
{
  __int64 v4; // rbx

  v4 = (int)dword_140404A6C[421506989]++;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[2 * a1 + 421506981]
            + 4LL
            * (int)(a2 + dword_140404A6C[263004 * a1 + 111579650] * (a4 + a3 * dword_140404A6C[263004 * a1 + 111579652]))) = v4;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[512 * v4 + 421506990]), 0xFFu, 0x800u);
  return (unsigned int)v4;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A4BF0920: using guessed type unsigned int;

//----- (0000000140038230) ----------------------------------------------------
void            sub_140038230(int *a1, int *a2, int *a3)
{
  int v4; // r12d
  unsigned int v6; // r8d
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int i; // r15d
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // r11d
  __int64 v14; // r10
  __int64 v15; // rsi
  __int64 v16; // rdx
  int v17; // ecx
  int *v18; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140038230[16];
#define v19 (*(int * (*))(void *)(sr_frame_140038230 + 0)) /* [rsp+38h] */

  v19 = a2;
  *a1 = 0;
  v4 = a2[1];
  if ( v4 <= a3[1] )
  {
    v6 = dword_140404A6C[111579650];
    v7 = dword_140404A6C[111579652];
    v8 = *(_QWORD *)&dword_140404A6C[421769135];
    do
    {
      if ( v4 >= 0 && v4 < (signed int)(dword_140404A6C[111579651] << 6) )
      {
        for ( i = a2[2]; i <= a3[2]; ++i )
        {
          if ( i >= 0 && i < (int)(v7 << 6) )
          {
            v10 = *a2;
            if ( *a2 <= *a3 )
            {
              do
              {
                if ( v10 >= 0 && v10 < (int)(v6 << 6) )
                {
                  v11 = *(int *)(*(_QWORD *)&dword_140404A6C[421506981]
                               + 4LL * (int)((v10 >> 6) + v6 * ((i >> 6) + v7 * (v4 >> 6))));
                  if ( (_DWORD)v11 != -1 )
                  {
                    v12 = (int)dword_140404A6C[512 * v11
                                             + 421506990
                                             + 64 * ((v4 >> 3) & 7u)
                                             + 8 * ((i >> 3) & 7)
                                             + ((v10 >> 3) & 7)];
                    if ( (_DWORD)v12 != -1 )
                    {
                      v13 = 0;
                      v14 = 0;
                      v15 = (v12 << 9) + (v10 & 7) + 8 * ((i & 7) + 8 * (v4 & 7u));
                      if ( *(int *)(132 * v15 + v8) > 0 )
                      {
                        do
                        {
                          v16 = *a1;
                          if ( (int)v16 < 256 )
                          {
                            v17 = 0;
                            if ( (int)v16 <= 0 )
                            {
LABEL_19:
                              a1[2 * v16 + 1] = 0;
                              a1[2 * (*a1)++ + 2] = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[421769135]
                                                              + 4 * (v14 + 33 * v15)
                                                              + 4)
                                                  & 0x3FFF;
                              v8 = *(_QWORD *)&dword_140404A6C[421769135];
                            }
                            else
                            {
                              v18 = a1 + 2;
                              while ( *v18 != (*(_DWORD *)(v8 + 4 * (v14 + 33 * v15) + 4) & 0x3FFF) )
                              {
                                ++v17;
                                v18 += 2;
                                if ( v17 >= (int)v16 )
                                  goto LABEL_19;
                              }
                            }
                          }
                          ++v13;
                          ++v14;
                        }
                        while ( v13 < *(_DWORD *)(132 * v15 + v8) );
                        v7 = dword_140404A6C[111579652];
                        v6 = dword_140404A6C[111579650];
                      }
                    }
                  }
                }
                ++v10;
              }
              while ( v10 <= *a3 );
              a2 = v19;
            }
          }
        }
      }
      ++v4;
    }
    while ( v4 <= a3[1] );
  }
}
#undef v19

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15ADA9274: using guessed type unsigned int;
// 15ADA927C: using guessed type unsigned int;
// 1A4CF0928: using guessed type unsigned int;

//----- (0000000140038480) ----------------------------------------------------
float            sub_140038480(float a1, float a2, float a3)
{
  float v4; // xmm3_4

  v4 = (1.0 - cos(a3 * 3.14159265359)) * 0.5;
  return (float)((float)(1.0 - v4) * a1) + (float)(a2 * v4);
}


//----- (00000001400384F0) ----------------------------------------------------
__m128            sub_1400384F0(float a1, float a2, int a3)
{
  int v4; // r10d
  int v5; // ebx
  int v6; // r8d
  int v7; // ecx
  int v8; // r14d
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  int v12; // esi
  int v13; // ebp
  float v14; // xmm10_4
  double v15; // xmm0_8
  __int128 v16; // xmm5
  float v17; // xmm7_4

  v4 = (int)a1;
  v5 = (int)a2;
  v6 = a3 & ((int)a1 + 1);
  v7 = ((57 * v5 + v4) << 13) ^ (57 * v5 + v4);
  v8 = 15731 * v7 * v7;
  v9 = ((v6 + 57 * v5) << 13) ^ (v6 + 57 * v5);
  v10 = 57 * (a3 & ((int)a2 + 1));
  v11 = 15731 * v9 * v9 + 789221;
  v12 = 15731 * (((v10 + v4) << 13) ^ (v10 + v4)) * (((v10 + v4) << 13) ^ (v10 + v4)) + 789221;
  v13 = 15731 * (((v10 + v6) << 13) ^ (v10 + v6)) * (((v10 + v6) << 13) ^ (v10 + v6)) + 789221;
  v14 = (1.0 - cos((float)(a1 - (float)(int)a1) * 3.14159265359)) * 0.5;
  v15 = cos((float)(a2 - (float)(int)a2) * 3.14159265359);
  v16 = 0x3F800000u;
  v17 = (1.0 - v15) * 0.5;
  *(float *)&v16 = (float)((float)((float)((float)(1.0
                                                 - (float)((float)((v11 * v11 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                         * v14)
                                 + (float)((float)(1.0
                                                 - (float)((float)(((v8 + 789221) * (v8 + 789221) - 771171059)
                                                                 & 0x7FFFFFFF)
                                                         * 9.3132257e-10))
                                         * (float)(1.0 - v14)))
                         * (float)(1.0 - v17))
                 + (float)((float)((float)((float)(1.0
                                                 - (float)((float)((v12 * v12 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                         * (float)(1.0 - v14))
                                 + (float)((float)(1.0
                                                 - (float)((float)((v13 * v13 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                         * v14))
                         * v17);
  return (__m128)v16;
}


//----- (00000001400387E0) ----------------------------------------------------
__int64 sub_1400387E0()
{
  int v0; // xmm10_4
  int v1; // xmm11_4
  int v2; // xmm9_4
  float v3; // xmm5_4
  float v4; // xmm4_4
  unsigned int v5; // r8d
  signed int v6; // r13d
  __int64 v7; // rdx
  float v8; // xmm5_4
  double v9; // xmm3_8
  float v10; // xmm6_4
  float v11; // xmm7_4
  double v12; // xmm4_8
  bool v13; // cc
  int v14; // ebx
  int v15; // edx
  signed int v16; // eax
  float v17; // xmm6_4
  int v18; // esi
  unsigned int *v19; // rdi
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // r9d
  int v24; // r10d
  int v25; // r8d
  __int64 v26; // r8
  int v27; // eax
  __m128i v28; // xmm0
  int v29; // eax
  __m128i v30; // xmm0
  __int64 v31; // rcx
  unsigned int v32; // r9d
  unsigned int v33; // eax
  signed int v34; // r9d
  int v35; // esi
  int v36; // r12d
  signed int v37; // r10d
  signed int v38; // ecx
  int v39; // r9d
  int v40; // r14d
  int v41; // edi
  int v42; // r15d
  unsigned int v43; // r8d
  int v44; // ecx
  unsigned int *v45; // rax
  signed int v46; // eax
  signed int v47; // r13d
  int v48; // r8d
  int v49; // r15d
  unsigned int v50; // r12d
  unsigned int v51; // r13d
  int v52; // r14d
  signed int v53; // eax
  int v54; // edi
  unsigned int v55; // eax
  int v56; // r11d
  int v57; // r12d
  int v58; // esi
  int v59; // r14d
  int v60; // edi
  __int64 v61; // r10
  int v62; // ecx
  __int64 v63; // rdx
  unsigned int *v64; // rax
  int v65; // ecx
  __int64 v66; // r11
  unsigned int *v67; // r9
  __int64 v68; // r8
  unsigned int *v69; // rdx
  __int64 v70; // rcx
  unsigned int *v71; // rax
  float v72; // xmm3_4
  float v73; // xmm9_4
  float v74; // xmm3_4
  float v75; // xmm1_4
  float v76; // xmm2_4
  float v77; // xmm3_4
  int v78; // edi
  int v79; // eax
  int v80; // esi
  int v81; // r14d
  int v82; // r11d
  unsigned int *v83; // rcx
  unsigned int *v84; // r15
  int v85; // ecx
  __int64 v86; // rcx
  __int64 v87; // r8
  signed int v88; // ecx
  signed int v89; // r9d
  __int64 v90; // r10
  unsigned int *v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rcx
  int v94; // edx
  unsigned int *v95; // rcx
  unsigned int *v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  __m128i v100; // xmm0
  unsigned int v101; // edx
  unsigned int v102; // eax
  unsigned int v103; // edx
  unsigned int v104; // eax
  unsigned int v105; // edx
  unsigned int v106; // eax
  int v107; // r9d
  int v108; // r8d
  int v109; // r10d
  __int64 v110; // rbx
  char *v111; // rdx
  unsigned int *v112; // rcx
  char v113; // al
  unsigned int *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400387E0[160];
#define v118 (*(__int64 (*))(void *)(sr_frame_1400387E0 + 0)) /* [rsp+8h] */
#define v119 (*(float * (*))(void *)(sr_frame_1400387E0 + 32)) /* [rsp+28h] */
#define v120 (*(float * (*))(void *)(sr_frame_1400387E0 + 40)) /* [rsp+30h] */
#define v121 (*(float * (*))(void *)(sr_frame_1400387E0 + 48)) /* [rsp+38h] */
#define v122 (*(int (*))(void *)(sr_frame_1400387E0 + 56)) /* [rsp+40h] */
#define v123 (*(signed int (*))(void *)(sr_frame_1400387E0 + 64)) /* [rsp+48h] */
#define v124 (*(unsigned int (*))(void *)(sr_frame_1400387E0 + 68)) /* [rsp+4Ch] */
#define v125 (*(float (*))(void *)(sr_frame_1400387E0 + 72)) /* [rsp+50h] */
#define v126 (*(float (*))(void *)(sr_frame_1400387E0 + 76)) /* [rsp+54h] */
#define v127 (*(float (*))(void *)(sr_frame_1400387E0 + 80)) /* [rsp+58h] */
#define v128 (*(float (*))(void *)(sr_frame_1400387E0 + 88)) /* [rsp+60h] */
#define v129 (*(float (*))(void *)(sr_frame_1400387E0 + 92)) /* [rsp+64h] */
#define v130 (*(float (*))(void *)(sr_frame_1400387E0 + 96)) /* [rsp+68h] */
#define v131 (*(float (*)[4])(void *)(sr_frame_1400387E0 + 104)) /* [rsp+70h] */
#define v132 (*(float (*)[4])(void *)(sr_frame_1400387E0 + 120)) /* [rsp+80h] */
#define v133 (*(float (*))(void *)(sr_frame_1400387E0 + 136)) /* [rsp+90h] */
#define v134 (*(float (*))(void *)(sr_frame_1400387E0 + 140)) /* [rsp+94h] */
#define v135 (*(float (*))(void *)(sr_frame_1400387E0 + 144)) /* [rsp+98h] */
#define v136 (*(__int64 (*))(void *)(sr_frame_1400387E0 + 152)) /* [rsp+A0h] */

  v0 = dword_140404A6C[309078305];
  v1 = dword_140404A6C[309078304];
  v2 = dword_140404A6C[309078303];
  v3 = (float)(*(float *)&dword_140404A6C[284024597] - 512.0) + (float)(*(float *)&dword_140404A6C[284024597] - 512.0);
  v4 = (float)(288.0 - *(float *)&dword_140404A6C[284024598]) + (float)(288.0 - *(float *)&dword_140404A6C[284024598]);
  v133 = (float)((float)(*(float *)&dword_140404A6C[284024502] - (float)(*(float *)&dword_140404A6C[284024511] * 1024.0))
               + (float)(*(float *)&dword_140404A6C[284024505] * v3))
       + (float)(*(float *)&dword_140404A6C[284024508] * v4);
  v134 = (float)((float)(*(float *)&dword_140404A6C[284024503] - (float)(*(float *)&dword_140404A6C[284024512] * 1024.0))
               + (float)(*(float *)&dword_140404A6C[284024506] * v3))
       + (float)(*(float *)&dword_140404A6C[284024509] * v4);
  v135 = (float)((float)(*(float *)&dword_140404A6C[284024504] - (float)(*(float *)&dword_140404A6C[284024513] * 1024.0))
               + (float)(*(float *)&dword_140404A6C[284024507] * v3))
       + (float)(*(float *)&dword_140404A6C[284024510] * v4);
  if ( BYTE1(dword_140404A6C[284024770]) )
  {
    if ( !BYTE1(dword_140404A6C[284024642]) )
    {
      *(float *)&dword_140404A6C[309078300] = *(float *)&dword_140404A6C[309078300]
                                            + (float)(*(float *)&dword_140404A6C[309078303] * -4.0);
      *(float *)&dword_140404A6C[309078301] = *(float *)&dword_140404A6C[309078301]
                                            + (float)(*(float *)&dword_140404A6C[309078304] * -4.0);
      *(float *)&dword_140404A6C[309078302] = *(float *)&dword_140404A6C[309078302]
                                            + (float)(*(float *)&dword_140404A6C[309078305] * -4.0);
      if ( BYTE1(dword_140404A6C[284024821]) )
      {
        dword_140404A6C[309078313] = (int)(float)((float)(int)dword_140404A6C[309078313]
                                                - *(float *)&dword_140404A6C[309078303]);
        dword_140404A6C[309078314] = (int)(float)((float)(int)dword_140404A6C[309078314]
                                                - *(float *)&dword_140404A6C[309078304]);
        dword_140404A6C[309078315] = (int)(float)((float)(int)dword_140404A6C[309078315]
                                                - *(float *)&dword_140404A6C[309078305]);
      }
    }
  }
  if ( BYTE1(dword_140404A6C[284024767]) )
  {
    if ( !BYTE1(dword_140404A6C[284024639]) )
    {
      *(float *)&dword_140404A6C[309078300] = *(float *)&dword_140404A6C[309078300]
                                            + (float)(*(float *)&dword_140404A6C[309078303] * 4.0);
      *(float *)&dword_140404A6C[309078301] = *(float *)&dword_140404A6C[309078301]
                                            + (float)(*(float *)&dword_140404A6C[309078304] * 4.0);
      *(float *)&dword_140404A6C[309078302] = *(float *)&dword_140404A6C[309078302]
                                            + (float)(*(float *)&dword_140404A6C[309078305] * 4.0);
      if ( BYTE1(dword_140404A6C[284024821]) )
      {
        dword_140404A6C[309078313] = (int)(float)((float)(int)dword_140404A6C[309078313]
                                                + *(float *)&dword_140404A6C[309078303]);
        dword_140404A6C[309078314] = (int)(float)((float)(int)dword_140404A6C[309078314]
                                                + *(float *)&dword_140404A6C[309078304]);
        dword_140404A6C[309078315] = (int)(float)((float)(int)dword_140404A6C[309078315]
                                                + *(float *)&dword_140404A6C[309078305]);
      }
    }
  }
  v5 = dword_140404A6C[309078286];
  v6 = -1;
  if ( dword_140404A6C[309078286] == 2 )
  {
    if ( LOBYTE(dword_140404A6C[284024776]) )
    {
      dword_140404A6C[309078330] = -1;
      dword_140404A6C[309078332] = -1;
    }
    else
    {
      v7 = (int)dword_140404A6C[309078332];
      if ( dword_140404A6C[309078332] != -1 )
      {
        if ( BYTE2(dword_140404A6C[284024772]) && !BYTE2(dword_140404A6C[284024644]) )
          ++dword_140404A6C[13 * dword_140404A6C[309078332] + 193074056];
        if ( HIBYTE(dword_140404A6C[284024772]) && !HIBYTE(dword_140404A6C[284024644]) )
          --dword_140404A6C[13 * v7 + 193074056];
        if ( LOBYTE(dword_140404A6C[284024773]) && !LOBYTE(dword_140404A6C[284024645]) )
          ++dword_140404A6C[13 * v7 + 193074057];
        if ( BYTE1(dword_140404A6C[284024773]) && !BYTE1(dword_140404A6C[284024645]) )
          --dword_140404A6C[13 * v7 + 193074057];
      }
    }
  }
  else if ( dword_140404A6C[309078286] == 3 )
  {
    if ( LOBYTE(dword_140404A6C[284024767]) && !LOBYTE(dword_140404A6C[284024639]) )
      dword_140404A6C[309078329] = (dword_140404A6C[309078329] + 1) & 3;
    if ( LOBYTE(dword_140404A6C[284024784])
      && !LOBYTE(dword_140404A6C[284024656])
      && (int)dword_140404A6C[486132853] > 0 )
    {
      --dword_140404A6C[486132853];
    }
  }
  if ( BYTE2(dword_140404A6C[284024781]) && !BYTE2(dword_140404A6C[284024653]) )
  {
    asset_save_city_sbc_candidate();
    v5 = dword_140404A6C[309078286];
    v0 = dword_140404A6C[309078305];
    v1 = dword_140404A6C[309078304];
    v2 = dword_140404A6C[309078303];
  }
  if ( HIBYTE(dword_140404A6C[284024770]) && !HIBYTE(dword_140404A6C[284024642]) )
  {
    if ( (unsigned int)sub_1400DC050((float *)&dword_140404A6C[284024502], &v133, 0) )
    {
      v8 = (float)(int)(float)(*(float *)&dword_140404A6C[73006981] * 0.25) * 4.0;
      v9 = fabs(*(float *)&dword_140404A6C[284024511]);
      v10 = (float)(int)(float)(*(float *)&dword_140404A6C[73006982] * 0.25) * 4.0;
      v11 = (float)(int)(float)(*(float *)&dword_140404A6C[73006983] * 0.25) * 4.0;
      *(float *)&dword_140404A6C[309078300] = v8 + 2.0;
      v12 = fabs(*(float *)&dword_140404A6C[284024512]);
      *(float *)&dword_140404A6C[309078301] = v10 + 2.0;
      *(float *)&dword_140404A6C[309078302] = v11 + 2.0;
      if ( v9 <= v12 || v9 <= fabs(*(float *)&dword_140404A6C[284024513]) )
      {
        if ( v12 <= fabs(*(float *)&dword_140404A6C[284024513]) )
        {
          v2 = dword_1402F6198;
          v1 = dword_1402F619C;
          v0 = dword_1402F61A0;
          v13 = *(float *)&dword_140404A6C[284024513] <= 0.0;
        }
        else
        {
          v1 = dword_1402F618C;
          v0 = dword_1402F6190;
          v13 = *(float *)&dword_140404A6C[284024512] <= 0.0;
          v2 = dword_1402F6188;
        }
      }
      else
      {
        v2 = dword_1402F6178;
        v1 = dword_1402F617C;
        v0 = dword_1402F6180;
        v13 = *(float *)&dword_140404A6C[284024511] <= 0.0;
      }
      if ( v13 )
      {
        *(float *)&v2 = -*(float *)&v2;
        *(float *)&v1 = -*(float *)&v1;
        *(float *)&v0 = -*(float *)&v0;
      }
      v5 = dword_140404A6C[309078286];
      dword_140404A6C[309078305] = v0;
      dword_140404A6C[309078304] = v1;
      dword_140404A6C[309078303] = v2;
      if ( dword_140404A6C[309078286] == 2 )
      {
        *(float *)&dword_140404A6C[309078300] = (float)((float)(*(float *)&v2 * 2.25) + v8) + 2.0;
        *(float *)&dword_140404A6C[309078302] = (float)((float)(*(float *)&v0 * 2.25) + v11) + 2.0;
        *(float *)&dword_140404A6C[309078301] = (float)((float)(*(float *)&v1 * 2.25) + v10) + 2.0;
      }
    }
    else
    {
      v0 = dword_140404A6C[309078305];
      v1 = dword_140404A6C[309078304];
      v2 = dword_140404A6C[309078303];
      v5 = dword_140404A6C[309078286];
    }
  }
  v14 = 0;
  dword_140404A6C[309078287] = 0;
  if ( v5 )
  {
    v15 = dword_140404A6C[225171849];
    v123 = dword_140404A6C[309078328];
    v33 = dword_140404A6C[137297772];
    goto LABEL_83;
  }
  if ( !BYTE2(dword_140404A6C[284024767]) || BYTE2(dword_140404A6C[284024639]) )
  {
    v15 = dword_140404A6C[225171849];
  }
  else
  {
    v15 = dword_140404A6C[225171849];
    v16 = -1;
    v17 = 1.0;
    v18 = 0;
    dword_140404A6C[309078326] = -1;
    if ( (int)dword_140404A6C[225171849] > 0 )
    {
      v19 = &dword_140404A6C[225171872];
      while ( 1 )
      {
        v20 = *(v19 - 1);
        v21 = *v19;
        v22 = *(v19 - 2);
        v23 = v20 - 1;
        v24 = *v19 - 1;
        if ( v22 == 1 )
          break;
        v25 = 0;
        if ( v22 != 2 )
          goto LABEL_58;
LABEL_61:
        v26 = *(v19 - 2);
        do
        {
          v27 = v20;
          v20 = v21;
          v21 = v27;
          --v26;
        }
        while ( v26 );
LABEL_63:
        v28 = _mm_cvtsi32_si128(*(v19 - 5) - v23);
        v29 = *(v19 - 3) - v24;
        v129 = (float)(int)*(v19 - 4) * 4.0;
        v128 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v28), f32)[0] * 4.0;
        v121 = &v125;
        v120 = &v128;
        v119 = &v133;
        v130 = (float)v29 * 4.0;
        v30 = _mm_cvtsi32_si128(v19[1]);
        v125 = (float)v20 * 4.0;
        v126 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v30), f32)[0] * 4.0;
        v127 = (float)v21 * 4.0;
        if ( sub_1400D8790(
               v131,
               (__int64)v132,
               (float *)&v123,
               (float *)&dword_140404A6C[284024502],
               &v133,
               &v128,
               &v125)
          && v17 > *(float *)&v123 )
        {
          v16 = v18;
          v17 = *(float *)&v123;
          dword_140404A6C[309078326] = v18;
        }
        else
        {
          v16 = dword_140404A6C[309078326];
        }
        v15 = dword_140404A6C[225171849];
        ++v18;
        v19 += 24;
        if ( v18 >= (int)dword_140404A6C[225171849] )
        {
          v0 = dword_140404A6C[309078305];
          v1 = dword_140404A6C[309078304];
          v2 = dword_140404A6C[309078303];
          v5 = dword_140404A6C[309078286];
          goto LABEL_69;
        }
      }
      v25 = *v19 - 1;
LABEL_58:
      v24 = v20 - 1;
      v23 = 0;
      if ( v22 != 3 )
      {
        v24 = 0;
        v23 = v25;
      }
      if ( v22 <= 0 )
        goto LABEL_63;
      goto LABEL_61;
    }
LABEL_69:
    if ( BYTE1(dword_140404A6C[284024821]) && v16 != -1 )
    {
      v31 = 24LL * v16;
      v32 = dword_140404A6C[v31 + 225171850];
      dword_140404A6C[309078329] = dword_140404A6C[v31 + 225171870];
      goto LABEL_74;
    }
  }
  v32 = dword_140404A6C[309078328];
LABEL_74:
  if ( LOBYTE(dword_140404A6C[284024767]) && !LOBYTE(dword_140404A6C[284024639]) )
    dword_140404A6C[309078329] = (LOBYTE(dword_140404A6C[309078329]) + 1) & 3;
  v33 = dword_140404A6C[137297772];
  v34 = v32 - dword_140404A6C[137297772];
  if ( v34 < 0 )
    v34 = dword_140404A6C[309078327] - 1;
  if ( v34 >= (int)dword_140404A6C[309078327] )
    v34 = 0;
  v123 = v34;
  dword_140404A6C[309078328] = v34;
LABEL_83:
  if ( v5 != 1 )
    goto LABEL_157;
  v35 = dword_140404A6C[309078333] - v33;
  if ( (int)(dword_140404A6C[309078333] - v33) >= 0 )
  {
    if ( v35 >= 3 )
      v35 = 0;
  }
  else
  {
    v35 = 2;
  }
  v36 = dword_140404A6C[309078317];
  v37 = dword_140404A6C[309078318];
  v38 = dword_140404A6C[309078316];
  v124 = dword_140404A6C[309078317];
  dword_140404A6C[309078333] = v35;
  if ( BYTE1(dword_140404A6C[284024768]) && !BYTE1(dword_140404A6C[284024640]) )
  {
    v39 = dword_140404A6C[210457991];
    dword_140404A6C[225154440] = 1;
    v40 = (int)dword_140404A6C[309078317] >> 3;
    v41 = (int)dword_140404A6C[309078316] >> 3;
    v42 = (int)dword_140404A6C[309078318] >> 3;
    v43 = -1;
    *(_QWORD *)&dword_140404A6C[225154441] = 0x61666F73676962LL;
    v44 = 0;
    if ( (int)dword_140404A6C[210457991] <= 0 )
      goto LABEL_99;
    v45 = &dword_140404A6C[210457993];
    do
    {
      if ( !*(v45 - 1) && *v45 == v41 && v45[1] == v40 && v45[2] == v42 )
        v43 = v44;
      ++v44;
      v45 += 3588;
    }
    while ( v44 < (int)dword_140404A6C[210457991] );
    if ( v43 == -1 )
    {
LABEL_99:
      if ( (int)dword_140404A6C[210457991] >= 4096 )
      {
LABEL_102:
        v38 = dword_140404A6C[309078316];
        goto LABEL_103;
      }
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992]), 0, 0x3810u);
      v37 = dword_140404A6C[309078318];
      dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992] = 0;
      dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457993] = v41;
      dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457994] = v40;
      dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457995] = v42;
      v43 = dword_140404A6C[210457991];
      v39 = ++dword_140404A6C[210457991];
      if ( v43 == -1 )
      {
        v15 = dword_140404A6C[225171849];
        goto LABEL_102;
      }
    }
    dword_140404A6C[3588 * v43 + 210461068 + 64 * (v36 & 7) + 8 * (v37 & 7) + (dword_140404A6C[309078316] & 7)] = 0x40000000;
    v15 = dword_140404A6C[225171849];
    v39 = dword_140404A6C[210457991];
    goto LABEL_102;
  }
  v39 = dword_140404A6C[210457991];
LABEL_103:
  v46 = dword_140404A6C[309078321];
  v47 = dword_140404A6C[309078319];
  v48 = dword_140404A6C[309078320];
  if ( LOBYTE(dword_140404A6C[284024767]) )
  {
    if ( !LOBYTE(dword_140404A6C[284024639]) )
    {
      v49 = v36;
      if ( v36 <= (int)dword_140404A6C[309078320] )
      {
        v50 = dword_140404A6C[19928892];
        v51 = dword_140404A6C[19928872];
        while ( 1 )
        {
          v52 = v37;
          if ( v37 > v46 )
            goto LABEL_124;
          v53 = dword_140404A6C[309078319];
          do
          {
            v54 = v38;
            if ( v38 > v53 )
              goto LABEL_122;
            do
            {
              if ( v35 )
              {
                if ( v35 == 1 )
                {
                  dword_140404A6C[309078334] = 65537;
                  v55 = v51;
                  dword_140404A6C[309078335] = 65537;
                  dword_140404A6C[309078336] = 65537;
                }
                else
                {
                  if ( v35 != 2 )
                    goto LABEL_120;
                  dword_140404A6C[309078334] = 2;
                  v55 = v50;
                  dword_140404A6C[309078335] = 131074;
                  dword_140404A6C[309078336] = 131074;
                }
                v120 = (float *)&dword_140404A6C[309078334];
                LODWORD(v119) = v55 | 0x80000000;
              }
              else
              {
                v120 = (float *)&dword_140404A6C[309078334];
                LODWORD(v119) = 0x40000000;
                *(_QWORD *)&dword_140404A6C[309078334] = 0;
                dword_140404A6C[309078336] = 0;
              }
              sub_1400D4C40(0, v54, v49, v52, (unsigned int)v119, v120);
              v53 = dword_140404A6C[309078319];
LABEL_120:
              ++v54;
            }
            while ( v54 <= v53 );
            v38 = dword_140404A6C[309078316];
LABEL_122:
            ++v52;
          }
          while ( v52 <= (int)dword_140404A6C[309078321] );
          v46 = dword_140404A6C[309078321];
          v48 = dword_140404A6C[309078320];
          v37 = dword_140404A6C[309078318];
LABEL_124:
          if ( ++v49 > v48 )
          {
            v15 = dword_140404A6C[225171849];
            v39 = dword_140404A6C[210457991];
            v47 = dword_140404A6C[309078319];
            break;
          }
        }
      }
    }
  }
  if ( LOBYTE(dword_140404A6C[284024784]) )
  {
    if ( !LOBYTE(dword_140404A6C[284024656]) )
    {
      v56 = dword_140404A6C[309078317];
      if ( (int)dword_140404A6C[309078317] <= v48 )
      {
        do
        {
          v57 = v37;
          if ( v37 <= v46 )
          {
            do
            {
              v58 = v38;
              if ( v38 <= v47 )
              {
                v59 = v56 >> 3;
                do
                {
                  v60 = -1;
                  v61 = -1;
                  v62 = 0;
                  v63 = 0;
                  if ( v39 > 0 )
                  {
                    v64 = &dword_140404A6C[210457993];
                    do
                    {
                      if ( !*(v64 - 1) && *v64 == v58 >> 3 && v64[1] == v59 && v64[2] == v57 >> 3 )
                      {
                        v60 = v62;
                        v61 = v63;
                      }
                      ++v62;
                      ++v63;
                      v64 += 3588;
                    }
                    while ( v62 < v39 );
                    if ( v60 != -1 )
                    {
                      v65 = (v57 & 7) + 8 * (v56 & 7);
                      v66 = 0;
                      dword_140404A6C[3588 * v61 + 210457996 + 8 * v65 + (v58 & 7)] = 0;
                      v67 = &dword_140404A6C[3588 * v61 + 210457996];
LABEL_142:
                      v68 = 0;
                      v69 = v67;
LABEL_143:
                      v70 = 0;
                      v71 = v69;
                      while ( !*v71 )
                      {
                        ++v70;
                        ++v71;
                        if ( v70 >= 8 )
                        {
                          ++v68;
                          v69 += 8;
                          if ( v68 < 8 )
                            goto LABEL_143;
                          ++v66;
                          v67 += 64;
                          if ( v66 >= 8 )
                          {
                            --dword_140404A6C[210457991];
                            sub_1401FC920(
                              (__m128i *)&dword_140404A6C[3588 * v60 + 210457992],
                              (     __m128i *)&dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992],
                              0x3810u);
                            break;
                          }
                          goto LABEL_142;
                        }
                      }
                      v56 = v124;
                      v39 = dword_140404A6C[210457991];
                    }
                  }
                  ++v58;
                }
                while ( v58 <= v47 );
                v46 = dword_140404A6C[309078321];
                v38 = dword_140404A6C[309078316];
              }
              ++v57;
            }
            while ( v57 <= v46 );
            v48 = dword_140404A6C[309078320];
            v37 = dword_140404A6C[309078318];
          }
          v124 = ++v56;
        }
        while ( v56 <= v48 );
        v15 = dword_140404A6C[225171849];
      }
    }
  }
  v6 = -1;
LABEL_157:
  if ( (float)((float)((float)((float)(*(float *)&dword_140404A6C[309078301] - v134) * *(float *)&v1)
                     + (float)((float)(*(float *)&dword_140404A6C[309078300] - v133) * *(float *)&v2))
             + (float)((float)(*(float *)&dword_140404A6C[309078302] - v135) * *(float *)&v0)) >= 0.0 )
  {
    v72 = (float)((float)((float)(*(float *)&dword_140404A6C[309078301] - *(float *)&dword_140404A6C[284024503])
                        * *(float *)&v1)
                + (float)((float)(*(float *)&dword_140404A6C[309078300] - *(float *)&dword_140404A6C[284024502])
                        * *(float *)&v2))
        + (float)((float)(*(float *)&dword_140404A6C[309078302] - *(float *)&dword_140404A6C[284024504]) * *(float *)&v0);
    if ( v72 <= 0.0 )
    {
      v73 = (float)((float)(*(float *)&v2 * (float)(v133 - *(float *)&dword_140404A6C[284024502]))
                  + (float)(*(float *)&v1 * (float)(v134 - *(float *)&dword_140404A6C[284024503])))
          + (float)(*(float *)&v0 * (float)(v135 - *(float *)&dword_140404A6C[284024504]));
      if ( v73 != 0.0 )
      {
        v74 = v72 / v73;
        v75 = (float)(v74 * (float)(v133 - *(float *)&dword_140404A6C[284024502]))
            + *(float *)&dword_140404A6C[284024502];
        v131[0] = v75;
        v76 = (float)(v74 * (float)(v134 - *(float *)&dword_140404A6C[284024503]))
            + *(float *)&dword_140404A6C[284024503];
        v77 = (float)(v74 * (float)(v135 - *(float *)&dword_140404A6C[284024504]))
            + *(float *)&dword_140404A6C[284024504];
        v131[1] = v76;
        v131[2] = v77;
        switch ( dword_140404A6C[309078286] )
        {
          case 2u:
            v78 = 0;
            v79 = dword_140404A6C[193070979];
            v80 = (int)(float)((float)(v75 * 0.25) + 0.5);
            v81 = (int)(float)((float)(v76 * 0.25) + 0.5);
            dword_140404A6C[309078306] = v80;
            v82 = (int)(float)((float)(v77 * 0.25) + 0.5);
            dword_140404A6C[309078307] = v81;
            dword_140404A6C[309078308] = v82;
            if ( (int)dword_140404A6C[193070979] <= 0 )
            {
LABEL_167:
              v78 = -1;
            }
            else
            {
              v83 = &dword_140404A6C[193070981];
              while ( *(v83 - 1) != v80 || *v83 != v81 || v83[1] != v82 )
              {
                ++v78;
                v83 += 3;
                if ( v78 >= (int)dword_140404A6C[193070979] )
                  goto LABEL_167;
              }
            }
            v84 = &dword_140404A6C[193074054];
            dword_140404A6C[309078331] = v78;
            if ( dword_140404A6C[309078330] == -1 )
            {
              if ( !LOBYTE(dword_140404A6C[284024772]) || LOBYTE(dword_140404A6C[284024644]) )
              {
                v85 = dword_140404A6C[225368458];
              }
              else
              {
                *(float *)&dword_140404A6C[3 * dword_140404A6C[225368458] + 225368459] = (float)v80 * 4.0;
                *(float *)&dword_140404A6C[3 * dword_140404A6C[225368458] + 225368460] = (float)((float)v81 * 4.0) + 2.0;
                *(float *)&dword_140404A6C[3 * dword_140404A6C[225368458] + 225368461] = (float)v82 * 4.0;
                v79 = dword_140404A6C[193070979];
                v85 = ++dword_140404A6C[225368458];
              }
              if ( LOBYTE(dword_140404A6C[284024784]) && !LOBYTE(dword_140404A6C[284024656]) && v85 > 0 )
                dword_140404A6C[225368458] = v85 - 1;
            }
            else
            {
              if ( LOBYTE(dword_140404A6C[284024767]) )
              {
                v86 = 3LL * (int)dword_140404A6C[309078330];
                dword_140404A6C[v86 + 193070980] = v80;
                dword_140404A6C[v86 + 193070981] = v81;
                dword_140404A6C[v86 + 193070982] = v82;
                v79 = dword_140404A6C[193070979];
              }
              if ( LOBYTE(dword_140404A6C[284024784]) && !LOBYTE(dword_140404A6C[284024656]) )
              {
                v87 = (int)dword_140404A6C[309078330];
                if ( (dword_140404A6C[309078330] & 0x80000000) == 0 && (int)dword_140404A6C[309078330] < v79 )
                {
                  v88 = dword_140404A6C[193074052];
                  v89 = 0;
                  if ( (int)dword_140404A6C[193074052] > 0 )
                  {
                    v90 = 0;
                    v91 = &dword_140404A6C[193074053];
                    do
                    {
                      if ( *v91 == (_DWORD)v87 || v91[1] == (_DWORD)v87 )
                      {
                        if ( v90 >= 0 )
                        {
                          if ( v89 >= v88 )
                            break;
                          dword_140404A6C[193074052] = v88 - 1;
                          v92 = 13LL * (v88 - 1);
                          *(_OWORD *)v91 = *(_OWORD *)&dword_140404A6C[v92 + 193074053];
                          *((_OWORD *)v91 + 1) = *(_OWORD *)&dword_140404A6C[v92 + 193074057];
                          *((_OWORD *)v91 + 2) = *(_OWORD *)&dword_140404A6C[v92 + 193074061];
                          v91[12] = dword_140404A6C[v92 + 193074065];
                          v88 = dword_140404A6C[193074052];
                        }
                      }
                      else
                      {
                        ++v89;
                        ++v90;
                        v91 += 13;
                      }
                    }
                    while ( v89 < v88 );
                    v79 = dword_140404A6C[193070979];
                  }
                  v93 = 3 * v87;
                  dword_140404A6C[193070979] = v79 - 1;
                  *(_QWORD *)&dword_140404A6C[v93 + 193070980] = *(_QWORD *)&dword_140404A6C[3 * v79 + 193070977];
                  v94 = 0;
                  dword_140404A6C[v93 + 193070982] = dword_140404A6C[3 * v79 + 193070979];
                  v79 = dword_140404A6C[193070979];
                  if ( (int)dword_140404A6C[193074052] > 0 )
                  {
                    v95 = &dword_140404A6C[193074054];
                    do
                    {
                      if ( *(v95 - 1) == v79 )
                      {
                        *(v95 - 1) = v87;
                        v79 = dword_140404A6C[193070979];
                      }
                      if ( *v95 == v79 )
                      {
                        *v95 = v87;
                        v79 = dword_140404A6C[193070979];
                      }
                      ++v94;
                      v95 += 13;
                    }
                    while ( v94 < (int)dword_140404A6C[193074052] );
                  }
                }
                dword_140404A6C[309078330] = -1;
              }
            }
            if ( dword_140404A6C[284024633] && !dword_140404A6C[284024593] )
            {
              dword_140404A6C[309078332] = -1;
              if ( v78 == -1 && (dword_140404A6C[309078330] != -1 || HIBYTE(dword_140404A6C[284024778])) )
              {
                v78 = 0;
                if ( v79 <= 0 )
                {
LABEL_211:
                  dword_140404A6C[3 * v79 + 193070980] = v80;
                  dword_140404A6C[3 * dword_140404A6C[193070979] + 193070981] = v81;
                  dword_140404A6C[3 * dword_140404A6C[193070979] + 193070982] = v82;
                  v78 = dword_140404A6C[193070979]++;
                }
                else
                {
                  v96 = &dword_140404A6C[193070982];
                  while ( *(v96 - 2) != v80 || *v96 != v82 )
                  {
                    ++v78;
                    v96 += 3;
                    if ( v78 >= v79 )
                      goto LABEL_211;
                  }
                }
                dword_140404A6C[309078331] = v78;
              }
              if ( dword_140404A6C[309078330] != -1 && v78 != -1 )
                sub_1400D4A90(dword_140404A6C[309078330], v78);
              dword_140404A6C[309078330] = v78;
              if ( v78 == -1 && (int)dword_140404A6C[193074052] > 0 )
              {
                do
                {
                  v97 = (int)*(v84 - 1);
                  v122 = 1082130432;
                  v98 = 3 * v97;
                  v99 = (int)*v84;
                  v128 = (float)(int)dword_140404A6C[v98 + 193070980] * 4.0;
                  v129 = (float)(int)dword_140404A6C[v98 + 193070981] * 4.0;
                  v100 = _mm_cvtsi32_si128(dword_140404A6C[v98 + 193070982]);
                  v121 = &v125;
                  v120 = &v128;
                  v119 = &v133;
                  v130 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v100), f32)[0] * 4.0;
                  v125 = (float)(int)dword_140404A6C[3 * v99 + 193070980] * 4.0;
                  v126 = (float)(int)dword_140404A6C[3 * v99 + 193070981] * 4.0;
                  v127 = (float)(int)dword_140404A6C[3 * v99 + 193070982] * 4.0;
                  v84 += 13;
                  if ( sub_1400D6890(
                         v131,
                         v132,
                         (float *)&v123,
                         (float *)&dword_140404A6C[284024502],
                         &v133,
                         &v128,
                         &v125,
                         4.0) )
                  {
                    v6 = v14;
                  }
                  ++v14;
                  dword_140404A6C[309078332] = v6;
                }
                while ( v14 < (int)dword_140404A6C[193074052] );
              }
            }
            break;
          case 3u:
            dword_140404A6C[309078306] = (int)(float)(v75 * 0.25);
            dword_140404A6C[309078307] = (int)(float)(v76 * 0.25);
            dword_140404A6C[309078308] = (int)(float)(v77 * 0.25);
            if ( dword_140404A6C[284024633] && !dword_140404A6C[284024593] )
            {
              *(float *)&dword_140404A6C[4 * dword_140404A6C[486132853] + 486132854] = (float)((float)(int)(float)(v75 * 0.25)
                                                                                             * 4.0)
                                                                                     + 2.0;
              *(float *)&dword_140404A6C[4 * dword_140404A6C[486132853] + 486132855] = (float)((float)(int)(float)(v76 * 0.25)
                                                                                             * 4.0)
                                                                                     + 2.0;
              *(float *)&dword_140404A6C[4 * dword_140404A6C[486132853] + 486132856] = (float)((float)(int)(float)(v77 * 0.25)
                                                                                             * 4.0)
                                                                                     + 2.0;
              *(float *)&dword_140404A6C[4 * dword_140404A6C[486132853]++ + 486132857] = (float)(int)dword_140404A6C[309078329]
                                                                                       * 1.570796326795;
            }
            break;
          case 1u:
            dword_140404A6C[309078306] = (int)(float)(v75 * 0.25);
            dword_140404A6C[309078307] = (int)(float)(v76 * 0.25);
            dword_140404A6C[309078308] = (int)(float)(v77 * 0.25);
            if ( dword_140404A6C[284024633] )
            {
              if ( !dword_140404A6C[284024593] )
              {
                dword_140404A6C[309078310] = (int)(float)(v75 * 0.25);
                dword_140404A6C[309078311] = (int)(float)(v76 * 0.25);
                dword_140404A6C[309078312] = (int)(float)(v77 * 0.25);
              }
              dword_140404A6C[309078313] = (int)(float)(v75 * 0.25);
              dword_140404A6C[309078314] = (int)(float)(v76 * 0.25);
              dword_140404A6C[309078315] = (int)(float)(v77 * 0.25);
              dword_140404A6C[309078309] = 1;
            }
            v101 = dword_140404A6C[309078313];
            v102 = dword_140404A6C[309078313];
            if ( (int)dword_140404A6C[309078310] <= (int)dword_140404A6C[309078313] )
              v102 = dword_140404A6C[309078310];
            else
              v101 = dword_140404A6C[309078310];
            dword_140404A6C[309078319] = v101;
            v103 = dword_140404A6C[309078314];
            dword_140404A6C[309078316] = v102;
            v104 = dword_140404A6C[309078314];
            if ( (int)dword_140404A6C[309078311] <= (int)dword_140404A6C[309078314] )
              v104 = dword_140404A6C[309078311];
            else
              v103 = dword_140404A6C[309078311];
            dword_140404A6C[309078320] = v103;
            v105 = dword_140404A6C[309078315];
            dword_140404A6C[309078317] = v104;
            v106 = dword_140404A6C[309078315];
            if ( (int)dword_140404A6C[309078312] > (int)dword_140404A6C[309078315] )
              v105 = dword_140404A6C[309078312];
            else
              v106 = dword_140404A6C[309078312];
            dword_140404A6C[309078318] = v106;
            dword_140404A6C[309078321] = v105;
            break;
          case 0u:
            v107 = (int)(float)(v75 * 0.25);
            v108 = (int)(float)(v76 * 0.25);
            dword_140404A6C[309078306] = v107;
            v109 = (int)(float)(v77 * 0.25);
            dword_140404A6C[309078307] = v108;
            dword_140404A6C[309078308] = v109;
            if ( dword_140404A6C[284024633] )
            {
              if ( !dword_140404A6C[284024593]
                && v107 >= 0
                && v107 < (signed int)(dword_140404A6C[111579650] << 6)
                && v108 >= 0
                && v108 < (signed int)(dword_140404A6C[111579651] << 6)
                && v109 >= 0
                && v109 < (signed int)(dword_140404A6C[111579652] << 6) )
              {
                if ( LOBYTE(dword_140404A6C[284024821]) )
                {
                  if ( v15 > 0 )
                  {
                    v114 = &dword_140404A6C[225171868];
                    do
                    {
                      if ( *(v114 - 1) == v107 && *v114 == v108 && v114[1] == v109 )
                        v6 = v14;
                      ++v14;
                      v114 += 24;
                    }
                    while ( v14 < v15 );
                    if ( v6 != -1 )
                    {
                      dword_140404A6C[225171849] = v15 - 1;
                      v115 = 24LL * (v15 - 1);
                      v116 = 24LL * v6;
                      *(_OWORD *)&dword_140404A6C[v116 + 225171850] = *(_OWORD *)&dword_140404A6C[v115 + 225171850];
                      *(_OWORD *)&dword_140404A6C[v116 + 225171854] = *(_OWORD *)&dword_140404A6C[v115 + 225171854];
                      *(_OWORD *)&dword_140404A6C[v116 + 225171858] = *(_OWORD *)&dword_140404A6C[v115 + 225171858];
                      *(_OWORD *)&dword_140404A6C[v116 + 225171862] = *(_OWORD *)&dword_140404A6C[v115 + 225171862];
                      *(_OWORD *)&dword_140404A6C[v116 + 225171866] = *(_OWORD *)&dword_140404A6C[v115 + 225171866];
                      *(_OWORD *)&dword_140404A6C[v116 + 225171870] = *(_OWORD *)&dword_140404A6C[v115 + 225171870];
                    }
                  }
                }
                else
                {
                  v110 = 22LL * v123;
                  dword_140404A6C[24 * v15 + 225171850] = v123;
                  v111 = (char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v110 * 4 + 905687968);
                  v112 = &dword_140404A6C[24 * dword_140404A6C[225171849] + 225171851];
                  do
                  {
                    v113 = *v111++;
                    *(_BYTE *)v112 = v113;
                    v112 = (unsigned int *)((char *)v112 + 1);
                  }
                  while ( v113 );
                  dword_140404A6C[24 * dword_140404A6C[225171849] + 225171867] = v107;
                  dword_140404A6C[24 * dword_140404A6C[225171849] + 225171868] = v108;
                  dword_140404A6C[24 * dword_140404A6C[225171849] + 225171869] = v109;
                  dword_140404A6C[24 * dword_140404A6C[225171849] + 225171870] = dword_140404A6C[309078329];
                  asset_load_building_sbb_candidate(
                    (char *)&dword_140404A6C[456856205],
                    (     char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v110 * 4 + 905687968),
                    1);
                  dword_140404A6C[24 * dword_140404A6C[225171849] + 225171871] = dword_140404A6C[v110 + 225368669]
                                                                               - dword_140404A6C[456856224];
                  dword_140404A6C[24 * dword_140404A6C[225171849] + 225171873] = dword_140404A6C[v110 + 225368671]
                                                                               - dword_140404A6C[456856225];
                  dword_140404A6C[24 * dword_140404A6C[225171849]++ + 225171872] = dword_140404A6C[v110 + 225368670]
                                                                                 - dword_140404A6C[456856226];
                }
              }
            }
            break;
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v118
#undef v119
#undef v120
#undef v121
#undef v122
#undef v123
#undef v124
#undef v125
#undef v126
#undef v127
#undef v128
#undef v129
#undef v130
#undef v131
#undef v132
#undef v133
#undef v134
#undef v135
#undef v136

// 140279850: using guessed type __int128 xmmword_140279850;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 1402F6198: using guessed type int dword_1402F6198;
// 1402F619C: using guessed type int dword_1402F619C;
// 1402F61A0: using guessed type int dword_1402F61A0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A70C: using guessed type unsigned int;
// 14500A75C: using guessed type unsigned int;
// 160FC481C: using guessed type unsigned int;
// 16E486878: using guessed type unsigned int;
// 16E48987C: using guessed type unsigned int;
// 1726DA088: using guessed type unsigned int;
// 175EEA08C: using guessed type unsigned int;
// 175EEA090: using guessed type __int64[8192];
// 175EFB090: using guessed type unsigned int;
// 175FBB094: using guessed type unsigned int;
// 189F0EEA4: using guessed type unsigned int;
// 189F0EEA8: using guessed type unsigned int;
// 189F0EEE8: using guessed type unsigned int;
// 189F0EEEC: using guessed type unsigned int;
// 189F0EEF0: using guessed type unsigned int;
// 189F0EEF4: using guessed type unsigned int;
// 189F0EEF8: using guessed type unsigned int;
// 189F0EEFC: using guessed type unsigned int;
// 189F0EF00: using guessed type unsigned int;
// 189F0EF04: using guessed type unsigned int;
// 189F0EF08: using guessed type unsigned int;
// 189F0EF0C: using guessed type unsigned int;
// 189F0EF10: using guessed type unsigned int;
// 189F0EF14: using guessed type unsigned int;
// 189F0EF18: using guessed type unsigned int;
// 189F0EF1C: using guessed type unsigned int;
// 189F0EF20: using guessed type unsigned int;
// 189F0EF24: using guessed type unsigned int;
// 189F0EF28: using guessed type unsigned int;
// 189F0EF2C: using guessed type unsigned int;
// 189F0EF30: using guessed type unsigned int;
// 189F0EF44: using guessed type unsigned int;
// 189F0EF48: using guessed type unsigned int;
// 189F0EF4C: using guessed type unsigned int;
// 189F0EF50: using guessed type unsigned int;
// 189F0EF54: using guessed type unsigned int;
// 189F0EF58: using guessed type unsigned int;
// 189F0EF5C: using guessed type unsigned int;
// 189F0EF60: using guessed type unsigned int;
// 189F0EF64: using guessed type unsigned int;
// 189F0EF68: using guessed type unsigned int;
// 189F0EF6C: using guessed type unsigned int;
// 1B4277C40: using guessed type unsigned int;

//----- (000000014003A0F0) ----------------------------------------------------
void sub_14003A0F0()
{
  unsigned int *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  unsigned int *v3; // rcx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // r8
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  unsigned int *v19; // rcx
  unsigned int *v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // r8
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  unsigned int *v36; // rcx
  unsigned int *v37; // rax
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // r8
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  unsigned int *v53; // rcx
  unsigned int *v54; // rax
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int64 v63; // r8
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  unsigned int *v70; // rcx
  unsigned int *v71; // rax
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int64 v80; // r8
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  unsigned int *v87; // rcx
  unsigned int *v88; // rax
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  __int64 v97; // r8
  __int128 v98; // xmm1
  __int128 v99; // xmm0
  __int128 v100; // xmm1
  __int128 v101; // xmm0
  __int128 v102; // xmm1
  __int128 v103; // xmm0
  unsigned int *v104; // rcx
  unsigned int *v105; // rax
  __int128 v106; // xmm0
  __int128 v107; // xmm1
  __int128 v108; // xmm0
  __int128 v109; // xmm1
  __int128 v110; // xmm0
  __int128 v111; // xmm1
  __int128 v112; // xmm0
  __int128 v113; // xmm1
  __int64 v114; // r8
  __int128 v115; // xmm1
  __int128 v116; // xmm0
  __int128 v117; // xmm1
  __int128 v118; // xmm0
  __int128 v119; // xmm1
  __int128 v120; // xmm0
  unsigned int *v121; // rcx
  unsigned int *v122; // rax
  __int128 v123; // xmm0
  __int128 v124; // xmm1
  __int128 v125; // xmm0
  __int128 v126; // xmm1
  __int128 v127; // xmm0
  __int128 v128; // xmm1
  __int128 v129; // xmm0
  __int128 v130; // xmm1
  __int64 v131; // r8
  __int128 v132; // xmm1
  __int128 v133; // xmm0
  __int128 v134; // xmm1
  __int128 v135; // xmm0
  __int128 v136; // xmm1
  __int128 v137; // xmm0
  unsigned int *v138; // rcx
  unsigned int *v139; // rax
  __int128 v140; // xmm0
  __int128 v141; // xmm1
  __int128 v142; // xmm0
  __int128 v143; // xmm1
  __int128 v144; // xmm0
  __int128 v145; // xmm1
  __int128 v146; // xmm0
  __int128 v147; // xmm1
  __int64 v148; // r8
  __int128 v149; // xmm1
  __int128 v150; // xmm0
  __int128 v151; // xmm1
  __int128 v152; // xmm0
  __int128 v153; // xmm1
  __int128 v154; // xmm0
  unsigned int *v155; // rcx
  unsigned int *v156; // rax
  __int128 v157; // xmm0
  __int128 v158; // xmm1
  __int128 v159; // xmm0
  __int128 v160; // xmm1
  __int128 v161; // xmm0
  __int128 v162; // xmm1
  __int128 v163; // xmm0
  __int128 v164; // xmm1
  __int64 v165; // r8
  __int128 v166; // xmm1
  __int128 v167; // xmm0
  __int128 v168; // xmm1
  __int128 v169; // xmm0
  __int128 v170; // xmm1
  __int128 v171; // xmm0
  unsigned int *v172; // rcx
  unsigned int *v173; // rax
  __int128 v174; // xmm0
  __int128 v175; // xmm1
  __int128 v176; // xmm0
  __int128 v177; // xmm1
  __int128 v178; // xmm0
  __int128 v179; // xmm1
  __int128 v180; // xmm0
  __int128 v181; // xmm1
  __int64 v182; // r8
  __int128 v183; // xmm1
  __int128 v184; // xmm0
  __int128 v185; // xmm1
  __int128 v186; // xmm0
  __int128 v187; // xmm1
  __int128 v188; // xmm0
  unsigned int *v189; // rcx
  unsigned int *v190; // rax
  __int128 v191; // xmm0
  __int128 v192; // xmm1
  __int128 v193; // xmm0
  __int128 v194; // xmm1
  __int128 v195; // xmm0
  __int128 v196; // xmm1
  __int128 v197; // xmm0
  __int128 v198; // xmm1
  __int64 v199; // r8
  __int128 v200; // xmm1
  __int128 v201; // xmm0
  __int128 v202; // xmm1
  __int128 v203; // xmm0
  __int128 v204; // xmm1
  __int128 v205; // xmm0
  unsigned int *v206; // rcx
  unsigned int *v207; // rax
  __int128 v208; // xmm0
  __int128 v209; // xmm1
  __int128 v210; // xmm0
  __int128 v211; // xmm1
  __int128 v212; // xmm0
  __int128 v213; // xmm1
  __int128 v214; // xmm0
  __int128 v215; // xmm1
  __int64 v216; // r8
  __int128 v217; // xmm1
  __int128 v218; // xmm0
  __int128 v219; // xmm1
  __int128 v220; // xmm0
  __int128 v221; // xmm1
  __int128 v222; // xmm0
  unsigned int *v223; // rcx
  unsigned int *v224; // rax
  __int128 v225; // xmm0
  __int128 v226; // xmm1
  __int128 v227; // xmm0
  __int128 v228; // xmm1
  __int128 v229; // xmm0
  __int128 v230; // xmm1
  __int128 v231; // xmm0
  __int128 v232; // xmm1
  __int64 v233; // r8
  __int128 v234; // xmm1
  __int128 v235; // xmm0
  __int128 v236; // xmm1
  __int128 v237; // xmm0
  __int128 v238; // xmm1
  __int128 v239; // xmm0
  unsigned int *v240; // rcx
  unsigned int *v241; // rax
  __int128 v242; // xmm0
  __int128 v243; // xmm1
  __int128 v244; // xmm0
  __int128 v245; // xmm1
  __int128 v246; // xmm0
  __int128 v247; // xmm1
  __int128 v248; // xmm0
  __int128 v249; // xmm1
  __int64 v250; // r8
  __int128 v251; // xmm1
  __int128 v252; // xmm0
  __int128 v253; // xmm1
  __int128 v254; // xmm0
  __int128 v255; // xmm1
  __int128 v256; // xmm0
  unsigned int *v257; // rcx
  unsigned int *v258; // rax
  __int128 v259; // xmm0
  __int128 v260; // xmm1
  __int128 v261; // xmm0
  __int128 v262; // xmm1
  __int128 v263; // xmm0
  __int128 v264; // xmm1
  __int128 v265; // xmm0
  __int128 v266; // xmm1
  __int64 v267; // r8
  __int128 v268; // xmm1
  __int128 v269; // xmm0
  __int128 v270; // xmm1
  __int128 v271; // xmm0
  __int128 v272; // xmm1
  __int128 v273; // xmm0
  unsigned int *v274; // rcx
  unsigned int *v275; // rax
  __int128 v276; // xmm0
  __int128 v277; // xmm1
  __int128 v278; // xmm0
  __int128 v279; // xmm1
  __int128 v280; // xmm0
  __int128 v281; // xmm1
  __int128 v282; // xmm0
  __int128 v283; // xmm1
  __int64 v284; // r8
  __int128 v285; // xmm1
  __int128 v286; // xmm0
  __int128 v287; // xmm1
  __int128 v288; // xmm0
  __int128 v289; // xmm1
  __int128 v290; // xmm0
  unsigned int *v291; // rcx
  unsigned int *v292; // rax
  __int128 v293; // xmm0
  __int128 v294; // xmm1
  __int128 v295; // xmm0
  __int128 v296; // xmm1
  __int128 v297; // xmm0
  __int128 v298; // xmm1
  __int128 v299; // xmm0
  __int128 v300; // xmm1
  __int64 v301; // r8
  __int128 v302; // xmm1
  __int128 v303; // xmm0
  __int128 v304; // xmm1
  __int128 v305; // xmm0
  __int128 v306; // xmm1
  __int128 v307; // xmm0
  unsigned int *v308; // rcx
  unsigned int *v309; // rax
  __int128 v310; // xmm0
  __int128 v311; // xmm1
  __int128 v312; // xmm0
  __int128 v313; // xmm1
  __int128 v314; // xmm0
  __int128 v315; // xmm1
  __int128 v316; // xmm0
  __int128 v317; // xmm1
  __int64 v318; // r8
  __int128 v319; // xmm1
  __int128 v320; // xmm0
  __int128 v321; // xmm1
  __int128 v322; // xmm0
  __int128 v323; // xmm1
  __int128 v324; // xmm0
  unsigned int *v325; // rcx
  unsigned int *v326; // rax
  __int128 v327; // xmm0
  __int128 v328; // xmm1
  __int128 v329; // xmm0
  __int128 v330; // xmm1
  __int128 v331; // xmm0
  __int128 v332; // xmm1
  __int128 v333; // xmm0
  __int128 v334; // xmm1
  __int64 v335; // r8
  __int128 v336; // xmm1
  __int128 v337; // xmm0
  __int128 v338; // xmm1
  __int128 v339; // xmm0
  __int128 v340; // xmm1
  __int128 v341; // xmm0
  unsigned int *v342; // rcx
  unsigned int *v343; // rax
  __int128 v344; // xmm0
  __int128 v345; // xmm1
  __int128 v346; // xmm0
  __int128 v347; // xmm1
  __int128 v348; // xmm0
  __int128 v349; // xmm1
  __int128 v350; // xmm0
  __int128 v351; // xmm1
  __int64 v352; // r8
  __int128 v353; // xmm1
  __int128 v354; // xmm0
  __int128 v355; // xmm1
  __int128 v356; // xmm0
  __int128 v357; // xmm1
  __int128 v358; // xmm0
  unsigned int *v359; // rcx
  unsigned int *v360; // rax
  __int128 v361; // xmm0
  __int128 v362; // xmm1
  __int128 v363; // xmm0
  __int128 v364; // xmm1
  __int128 v365; // xmm0
  __int128 v366; // xmm1
  __int128 v367; // xmm0
  __int128 v368; // xmm1
  __int64 v369; // r8
  __int128 v370; // xmm1
  __int128 v371; // xmm0
  __int128 v372; // xmm1
  __int128 v373; // xmm0
  __int128 v374; // xmm1
  __int128 v375; // xmm0
  unsigned int *v376; // rcx
  unsigned int *v377; // rax
  __int128 v378; // xmm0
  __int128 v379; // xmm1
  __int128 v380; // xmm0
  __int128 v381; // xmm1
  __int128 v382; // xmm0
  __int128 v383; // xmm1
  __int128 v384; // xmm0
  __int128 v385; // xmm1
  __int64 v386; // r8
  __int128 v387; // xmm1
  __int128 v388; // xmm0
  __int128 v389; // xmm1
  __int128 v390; // xmm0
  __int128 v391; // xmm1
  __int128 v392; // xmm0
  unsigned int *v393; // rcx
  unsigned int *v394; // rax
  __int128 v395; // xmm0
  __int128 v396; // xmm1
  __int128 v397; // xmm0
  __int128 v398; // xmm1
  __int128 v399; // xmm0
  __int128 v400; // xmm1
  __int128 v401; // xmm0
  __int128 v402; // xmm1
  __int64 v403; // r8
  __int128 v404; // xmm1
  __int128 v405; // xmm0
  __int128 v406; // xmm1
  __int128 v407; // xmm0
  __int128 v408; // xmm1
  __int128 v409; // xmm0
  unsigned int *v410; // rcx
  unsigned int *v411; // rax
  __int128 v412; // xmm0
  __int128 v413; // xmm1
  __int128 v414; // xmm0
  __int128 v415; // xmm1
  __int128 v416; // xmm0
  __int128 v417; // xmm1
  __int128 v418; // xmm0
  __int128 v419; // xmm1
  __int64 v420; // r8
  __int128 v421; // xmm1
  __int128 v422; // xmm0
  __int128 v423; // xmm1
  __int128 v424; // xmm0
  __int128 v425; // xmm1
  __int128 v426; // xmm0
  unsigned int *v427; // rcx
  unsigned int *v428; // rax
  __int128 v429; // xmm0
  __int128 v430; // xmm1
  __int128 v431; // xmm0
  __int128 v432; // xmm1
  __int128 v433; // xmm0
  __int128 v434; // xmm1
  __int128 v435; // xmm0
  __int128 v436; // xmm1
  __int64 v437; // r8
  __int128 v438; // xmm1
  __int128 v439; // xmm0
  __int128 v440; // xmm1
  __int128 v441; // xmm0
  __int128 v442; // xmm1
  __int128 v443; // xmm0
  unsigned int *v444; // rcx
  unsigned int *v445; // rax
  __int128 v446; // xmm0
  __int128 v447; // xmm1
  __int128 v448; // xmm0
  __int128 v449; // xmm1
  __int128 v450; // xmm0
  __int128 v451; // xmm1
  __int128 v452; // xmm0
  __int128 v453; // xmm1
  __int64 v454; // r8
  __int128 v455; // xmm1
  __int128 v456; // xmm0
  __int128 v457; // xmm1
  __int128 v458; // xmm0
  __int128 v459; // xmm1
  __int128 v460; // xmm0
  unsigned int *v461; // rcx
  unsigned int *v462; // rax
  __int128 v463; // xmm0
  __int128 v464; // xmm1
  __int128 v465; // xmm0
  __int128 v466; // xmm1
  __int128 v467; // xmm0
  __int128 v468; // xmm1
  __int128 v469; // xmm0
  __int128 v470; // xmm1
  __int64 v471; // r8
  __int128 v472; // xmm1
  __int128 v473; // xmm0
  __int128 v474; // xmm1
  __int128 v475; // xmm0
  __int128 v476; // xmm1
  __int128 v477; // xmm0
  unsigned int *v478; // rcx
  unsigned int *v479; // rax
  __int128 v480; // xmm0
  __int128 v481; // xmm1
  __int128 v482; // xmm0
  __int128 v483; // xmm1
  __int128 v484; // xmm0
  __int128 v485; // xmm1
  __int128 v486; // xmm0
  __int128 v487; // xmm1
  __int64 v488; // r8
  __int128 v489; // xmm1
  __int128 v490; // xmm0
  __int128 v491; // xmm1
  __int128 v492; // xmm0
  __int128 v493; // xmm1
  __int128 v494; // xmm0
  unsigned int *v495; // rcx
  unsigned int *v496; // rax
  __int128 v497; // xmm0
  __int128 v498; // xmm1
  __int128 v499; // xmm0
  __int128 v500; // xmm1
  __int128 v501; // xmm0
  __int128 v502; // xmm1
  __int128 v503; // xmm0
  __int128 v504; // xmm1
  __int64 v505; // r8
  __int128 v506; // xmm1
  __int128 v507; // xmm0
  __int128 v508; // xmm1
  __int128 v509; // xmm0
  __int128 v510; // xmm1
  __int128 v511; // xmm0
  unsigned int *v512; // rcx
  unsigned int *v513; // rax
  __int128 v514; // xmm0
  __int128 v515; // xmm1
  __int128 v516; // xmm0
  __int128 v517; // xmm1
  __int128 v518; // xmm0
  __int128 v519; // xmm1
  __int128 v520; // xmm0
  __int128 v521; // xmm1
  __int128 v522; // xmm1
  __int128 v523; // xmm0
  __int128 v524; // xmm1
  __int128 v525; // xmm0
  __int128 v526; // xmm1
  __int128 v527; // xmm0
  unsigned int *v528; // rcx
  unsigned int *v529; // rax
  __int128 v530; // xmm0
  __int128 v531; // xmm1
  __int128 v532; // xmm0
  __int128 v533; // xmm1
  __int128 v534; // xmm0
  __int128 v535; // xmm1
  __int128 v536; // xmm0
  __int128 v537; // xmm1
  __int128 v538; // xmm1
  __int128 v539; // xmm0
  __int128 v540; // xmm1
  __int128 v541; // xmm0
  __int128 v542; // xmm1
  __int128 v543; // xmm0
  int v544; // r12d
  __int64 v545; // rsi
  unsigned int *v546; // r15
  int v547; // ebx
  int v548; // eax
  signed int v549; // edi
  __int64 v550; // rbx
  int v551; // ecx
  unsigned int *v552; // rbp
  signed int v553; // edi
  unsigned int *v554; // r14
  unsigned int *v555; // rbp
  signed int v556; // edi
  unsigned int *v557; // r14
  signed int v558; // ebp
  _DWORD *v559; // rbx
  _QWORD *v560; // rdi
  int v561; // ecx
  __int64 v562; // rax
  int v563; // ebx
  char *v564; // rax
  __int64 v565; // r8
  char *v566; // rdx
  char v567; // cl
  __int64 v568; // rax
  int v569; // ebx
  char *v570; // rax
  __int64 v571; // rbx
  char *v572; // rdx
  char v573; // cl

  if ( dword_140404A6C[278520173] )
  {
    v0 = &dword_140404A6C[285097141];
    v1 = 3;
    v2 = 3;
    v3 = &dword_140404A6C[285101109];
    do
    {
      v0 += 32;
      v4 = *(_OWORD *)v3;
      v5 = *((_OWORD *)v3 + 1);
      v3 += 32;
      *((_OWORD *)v0 - 8) = v4;
      v6 = *((_OWORD *)v3 - 6);
      *((_OWORD *)v0 - 7) = v5;
      v7 = *((_OWORD *)v3 - 5);
      *((_OWORD *)v0 - 6) = v6;
      v8 = *((_OWORD *)v3 - 4);
      *((_OWORD *)v0 - 5) = v7;
      v9 = *((_OWORD *)v3 - 3);
      *((_OWORD *)v0 - 4) = v8;
      v10 = *((_OWORD *)v3 - 2);
      *((_OWORD *)v0 - 3) = v9;
      v11 = *((_OWORD *)v3 - 1);
      *((_OWORD *)v0 - 2) = v10;
      *((_OWORD *)v0 - 1) = v11;
      --v2;
    }
    while ( v2 );
    v12 = 3;
    v13 = *((_OWORD *)v3 + 1);
    *(_OWORD *)v0 = *(_OWORD *)v3;
    v14 = *((_OWORD *)v3 + 2);
    *((_OWORD *)v0 + 1) = v13;
    v15 = *((_OWORD *)v3 + 3);
    *((_OWORD *)v0 + 2) = v14;
    v16 = *((_OWORD *)v3 + 4);
    *((_OWORD *)v0 + 3) = v15;
    v17 = *((_OWORD *)v3 + 5);
    *((_OWORD *)v0 + 4) = v16;
    v18 = *((_OWORD *)v3 + 6);
    v19 = &dword_140404A6C[285101233];
    *((_OWORD *)v0 + 5) = v17;
    *((_OWORD *)v0 + 6) = v18;
    v20 = &dword_140404A6C[285097265];
    do
    {
      v20 += 32;
      v21 = *(_OWORD *)v19;
      v22 = *((_OWORD *)v19 + 1);
      v19 += 32;
      *((_OWORD *)v20 - 8) = v21;
      v23 = *((_OWORD *)v19 - 6);
      *((_OWORD *)v20 - 7) = v22;
      v24 = *((_OWORD *)v19 - 5);
      *((_OWORD *)v20 - 6) = v23;
      v25 = *((_OWORD *)v19 - 4);
      *((_OWORD *)v20 - 5) = v24;
      v26 = *((_OWORD *)v19 - 3);
      *((_OWORD *)v20 - 4) = v25;
      v27 = *((_OWORD *)v19 - 2);
      *((_OWORD *)v20 - 3) = v26;
      v28 = *((_OWORD *)v19 - 1);
      *((_OWORD *)v20 - 2) = v27;
      *((_OWORD *)v20 - 1) = v28;
      --v12;
    }
    while ( v12 );
    v29 = 3;
    v30 = *((_OWORD *)v19 + 1);
    *(_OWORD *)v20 = *(_OWORD *)v19;
    v31 = *((_OWORD *)v19 + 2);
    *((_OWORD *)v20 + 1) = v30;
    v32 = *((_OWORD *)v19 + 3);
    *((_OWORD *)v20 + 2) = v31;
    v33 = *((_OWORD *)v19 + 4);
    *((_OWORD *)v20 + 3) = v32;
    v34 = *((_OWORD *)v19 + 5);
    *((_OWORD *)v20 + 4) = v33;
    v35 = *((_OWORD *)v19 + 6);
    v36 = &dword_140404A6C[285101357];
    *((_OWORD *)v20 + 5) = v34;
    *((_OWORD *)v20 + 6) = v35;
    v37 = &dword_140404A6C[285097389];
    do
    {
      v37 += 32;
      v38 = *(_OWORD *)v36;
      v39 = *((_OWORD *)v36 + 1);
      v36 += 32;
      *((_OWORD *)v37 - 8) = v38;
      v40 = *((_OWORD *)v36 - 6);
      *((_OWORD *)v37 - 7) = v39;
      v41 = *((_OWORD *)v36 - 5);
      *((_OWORD *)v37 - 6) = v40;
      v42 = *((_OWORD *)v36 - 4);
      *((_OWORD *)v37 - 5) = v41;
      v43 = *((_OWORD *)v36 - 3);
      *((_OWORD *)v37 - 4) = v42;
      v44 = *((_OWORD *)v36 - 2);
      *((_OWORD *)v37 - 3) = v43;
      v45 = *((_OWORD *)v36 - 1);
      *((_OWORD *)v37 - 2) = v44;
      *((_OWORD *)v37 - 1) = v45;
      --v29;
    }
    while ( v29 );
    v46 = 3;
    v47 = *((_OWORD *)v36 + 1);
    *(_OWORD *)v37 = *(_OWORD *)v36;
    v48 = *((_OWORD *)v36 + 2);
    *((_OWORD *)v37 + 1) = v47;
    v49 = *((_OWORD *)v36 + 3);
    *((_OWORD *)v37 + 2) = v48;
    v50 = *((_OWORD *)v36 + 4);
    *((_OWORD *)v37 + 3) = v49;
    v51 = *((_OWORD *)v36 + 5);
    *((_OWORD *)v37 + 4) = v50;
    v52 = *((_OWORD *)v36 + 6);
    v53 = &dword_140404A6C[285101481];
    *((_OWORD *)v37 + 5) = v51;
    *((_OWORD *)v37 + 6) = v52;
    v54 = &dword_140404A6C[285097513];
    do
    {
      v54 += 32;
      v55 = *(_OWORD *)v53;
      v56 = *((_OWORD *)v53 + 1);
      v53 += 32;
      *((_OWORD *)v54 - 8) = v55;
      v57 = *((_OWORD *)v53 - 6);
      *((_OWORD *)v54 - 7) = v56;
      v58 = *((_OWORD *)v53 - 5);
      *((_OWORD *)v54 - 6) = v57;
      v59 = *((_OWORD *)v53 - 4);
      *((_OWORD *)v54 - 5) = v58;
      v60 = *((_OWORD *)v53 - 3);
      *((_OWORD *)v54 - 4) = v59;
      v61 = *((_OWORD *)v53 - 2);
      *((_OWORD *)v54 - 3) = v60;
      v62 = *((_OWORD *)v53 - 1);
      *((_OWORD *)v54 - 2) = v61;
      *((_OWORD *)v54 - 1) = v62;
      --v46;
    }
    while ( v46 );
    v63 = 3;
    v64 = *((_OWORD *)v53 + 1);
    *(_OWORD *)v54 = *(_OWORD *)v53;
    v65 = *((_OWORD *)v53 + 2);
    *((_OWORD *)v54 + 1) = v64;
    v66 = *((_OWORD *)v53 + 3);
    *((_OWORD *)v54 + 2) = v65;
    v67 = *((_OWORD *)v53 + 4);
    *((_OWORD *)v54 + 3) = v66;
    v68 = *((_OWORD *)v53 + 5);
    *((_OWORD *)v54 + 4) = v67;
    v69 = *((_OWORD *)v53 + 6);
    v70 = &dword_140404A6C[285101605];
    *((_OWORD *)v54 + 5) = v68;
    *((_OWORD *)v54 + 6) = v69;
    v71 = &dword_140404A6C[285097637];
    do
    {
      v71 += 32;
      v72 = *(_OWORD *)v70;
      v73 = *((_OWORD *)v70 + 1);
      v70 += 32;
      *((_OWORD *)v71 - 8) = v72;
      v74 = *((_OWORD *)v70 - 6);
      *((_OWORD *)v71 - 7) = v73;
      v75 = *((_OWORD *)v70 - 5);
      *((_OWORD *)v71 - 6) = v74;
      v76 = *((_OWORD *)v70 - 4);
      *((_OWORD *)v71 - 5) = v75;
      v77 = *((_OWORD *)v70 - 3);
      *((_OWORD *)v71 - 4) = v76;
      v78 = *((_OWORD *)v70 - 2);
      *((_OWORD *)v71 - 3) = v77;
      v79 = *((_OWORD *)v70 - 1);
      *((_OWORD *)v71 - 2) = v78;
      *((_OWORD *)v71 - 1) = v79;
      --v63;
    }
    while ( v63 );
    v80 = 3;
    v81 = *((_OWORD *)v70 + 1);
    *(_OWORD *)v71 = *(_OWORD *)v70;
    v82 = *((_OWORD *)v70 + 2);
    *((_OWORD *)v71 + 1) = v81;
    v83 = *((_OWORD *)v70 + 3);
    *((_OWORD *)v71 + 2) = v82;
    v84 = *((_OWORD *)v70 + 4);
    *((_OWORD *)v71 + 3) = v83;
    v85 = *((_OWORD *)v70 + 5);
    *((_OWORD *)v71 + 4) = v84;
    v86 = *((_OWORD *)v70 + 6);
    v87 = &dword_140404A6C[285101729];
    *((_OWORD *)v71 + 5) = v85;
    *((_OWORD *)v71 + 6) = v86;
    v88 = &dword_140404A6C[285097761];
    do
    {
      v88 += 32;
      v89 = *(_OWORD *)v87;
      v90 = *((_OWORD *)v87 + 1);
      v87 += 32;
      *((_OWORD *)v88 - 8) = v89;
      v91 = *((_OWORD *)v87 - 6);
      *((_OWORD *)v88 - 7) = v90;
      v92 = *((_OWORD *)v87 - 5);
      *((_OWORD *)v88 - 6) = v91;
      v93 = *((_OWORD *)v87 - 4);
      *((_OWORD *)v88 - 5) = v92;
      v94 = *((_OWORD *)v87 - 3);
      *((_OWORD *)v88 - 4) = v93;
      v95 = *((_OWORD *)v87 - 2);
      *((_OWORD *)v88 - 3) = v94;
      v96 = *((_OWORD *)v87 - 1);
      *((_OWORD *)v88 - 2) = v95;
      *((_OWORD *)v88 - 1) = v96;
      --v80;
    }
    while ( v80 );
    v97 = 3;
    v98 = *((_OWORD *)v87 + 1);
    *(_OWORD *)v88 = *(_OWORD *)v87;
    v99 = *((_OWORD *)v87 + 2);
    *((_OWORD *)v88 + 1) = v98;
    v100 = *((_OWORD *)v87 + 3);
    *((_OWORD *)v88 + 2) = v99;
    v101 = *((_OWORD *)v87 + 4);
    *((_OWORD *)v88 + 3) = v100;
    v102 = *((_OWORD *)v87 + 5);
    *((_OWORD *)v88 + 4) = v101;
    v103 = *((_OWORD *)v87 + 6);
    v104 = &dword_140404A6C[285101853];
    *((_OWORD *)v88 + 5) = v102;
    *((_OWORD *)v88 + 6) = v103;
    v105 = &dword_140404A6C[285097885];
    do
    {
      v105 += 32;
      v106 = *(_OWORD *)v104;
      v107 = *((_OWORD *)v104 + 1);
      v104 += 32;
      *((_OWORD *)v105 - 8) = v106;
      v108 = *((_OWORD *)v104 - 6);
      *((_OWORD *)v105 - 7) = v107;
      v109 = *((_OWORD *)v104 - 5);
      *((_OWORD *)v105 - 6) = v108;
      v110 = *((_OWORD *)v104 - 4);
      *((_OWORD *)v105 - 5) = v109;
      v111 = *((_OWORD *)v104 - 3);
      *((_OWORD *)v105 - 4) = v110;
      v112 = *((_OWORD *)v104 - 2);
      *((_OWORD *)v105 - 3) = v111;
      v113 = *((_OWORD *)v104 - 1);
      *((_OWORD *)v105 - 2) = v112;
      *((_OWORD *)v105 - 1) = v113;
      --v97;
    }
    while ( v97 );
    v114 = 3;
    v115 = *((_OWORD *)v104 + 1);
    *(_OWORD *)v105 = *(_OWORD *)v104;
    v116 = *((_OWORD *)v104 + 2);
    *((_OWORD *)v105 + 1) = v115;
    v117 = *((_OWORD *)v104 + 3);
    *((_OWORD *)v105 + 2) = v116;
    v118 = *((_OWORD *)v104 + 4);
    *((_OWORD *)v105 + 3) = v117;
    v119 = *((_OWORD *)v104 + 5);
    *((_OWORD *)v105 + 4) = v118;
    v120 = *((_OWORD *)v104 + 6);
    v121 = &dword_140404A6C[285101977];
    *((_OWORD *)v105 + 5) = v119;
    *((_OWORD *)v105 + 6) = v120;
    v122 = &dword_140404A6C[285098009];
    do
    {
      v122 += 32;
      v123 = *(_OWORD *)v121;
      v124 = *((_OWORD *)v121 + 1);
      v121 += 32;
      *((_OWORD *)v122 - 8) = v123;
      v125 = *((_OWORD *)v121 - 6);
      *((_OWORD *)v122 - 7) = v124;
      v126 = *((_OWORD *)v121 - 5);
      *((_OWORD *)v122 - 6) = v125;
      v127 = *((_OWORD *)v121 - 4);
      *((_OWORD *)v122 - 5) = v126;
      v128 = *((_OWORD *)v121 - 3);
      *((_OWORD *)v122 - 4) = v127;
      v129 = *((_OWORD *)v121 - 2);
      *((_OWORD *)v122 - 3) = v128;
      v130 = *((_OWORD *)v121 - 1);
      *((_OWORD *)v122 - 2) = v129;
      *((_OWORD *)v122 - 1) = v130;
      --v114;
    }
    while ( v114 );
    v131 = 3;
    v132 = *((_OWORD *)v121 + 1);
    *(_OWORD *)v122 = *(_OWORD *)v121;
    v133 = *((_OWORD *)v121 + 2);
    *((_OWORD *)v122 + 1) = v132;
    v134 = *((_OWORD *)v121 + 3);
    *((_OWORD *)v122 + 2) = v133;
    v135 = *((_OWORD *)v121 + 4);
    *((_OWORD *)v122 + 3) = v134;
    v136 = *((_OWORD *)v121 + 5);
    *((_OWORD *)v122 + 4) = v135;
    v137 = *((_OWORD *)v121 + 6);
    v138 = &dword_140404A6C[285102101];
    *((_OWORD *)v122 + 5) = v136;
    *((_OWORD *)v122 + 6) = v137;
    v139 = &dword_140404A6C[285098133];
    do
    {
      v139 += 32;
      v140 = *(_OWORD *)v138;
      v141 = *((_OWORD *)v138 + 1);
      v138 += 32;
      *((_OWORD *)v139 - 8) = v140;
      v142 = *((_OWORD *)v138 - 6);
      *((_OWORD *)v139 - 7) = v141;
      v143 = *((_OWORD *)v138 - 5);
      *((_OWORD *)v139 - 6) = v142;
      v144 = *((_OWORD *)v138 - 4);
      *((_OWORD *)v139 - 5) = v143;
      v145 = *((_OWORD *)v138 - 3);
      *((_OWORD *)v139 - 4) = v144;
      v146 = *((_OWORD *)v138 - 2);
      *((_OWORD *)v139 - 3) = v145;
      v147 = *((_OWORD *)v138 - 1);
      *((_OWORD *)v139 - 2) = v146;
      *((_OWORD *)v139 - 1) = v147;
      --v131;
    }
    while ( v131 );
    v148 = 3;
    v149 = *((_OWORD *)v138 + 1);
    *(_OWORD *)v139 = *(_OWORD *)v138;
    v150 = *((_OWORD *)v138 + 2);
    *((_OWORD *)v139 + 1) = v149;
    v151 = *((_OWORD *)v138 + 3);
    *((_OWORD *)v139 + 2) = v150;
    v152 = *((_OWORD *)v138 + 4);
    *((_OWORD *)v139 + 3) = v151;
    v153 = *((_OWORD *)v138 + 5);
    *((_OWORD *)v139 + 4) = v152;
    v154 = *((_OWORD *)v138 + 6);
    v155 = &dword_140404A6C[285102225];
    *((_OWORD *)v139 + 5) = v153;
    *((_OWORD *)v139 + 6) = v154;
    v156 = &dword_140404A6C[285098257];
    do
    {
      v156 += 32;
      v157 = *(_OWORD *)v155;
      v158 = *((_OWORD *)v155 + 1);
      v155 += 32;
      *((_OWORD *)v156 - 8) = v157;
      v159 = *((_OWORD *)v155 - 6);
      *((_OWORD *)v156 - 7) = v158;
      v160 = *((_OWORD *)v155 - 5);
      *((_OWORD *)v156 - 6) = v159;
      v161 = *((_OWORD *)v155 - 4);
      *((_OWORD *)v156 - 5) = v160;
      v162 = *((_OWORD *)v155 - 3);
      *((_OWORD *)v156 - 4) = v161;
      v163 = *((_OWORD *)v155 - 2);
      *((_OWORD *)v156 - 3) = v162;
      v164 = *((_OWORD *)v155 - 1);
      *((_OWORD *)v156 - 2) = v163;
      *((_OWORD *)v156 - 1) = v164;
      --v148;
    }
    while ( v148 );
    v165 = 3;
    v166 = *((_OWORD *)v155 + 1);
    *(_OWORD *)v156 = *(_OWORD *)v155;
    v167 = *((_OWORD *)v155 + 2);
    *((_OWORD *)v156 + 1) = v166;
    v168 = *((_OWORD *)v155 + 3);
    *((_OWORD *)v156 + 2) = v167;
    v169 = *((_OWORD *)v155 + 4);
    *((_OWORD *)v156 + 3) = v168;
    v170 = *((_OWORD *)v155 + 5);
    *((_OWORD *)v156 + 4) = v169;
    v171 = *((_OWORD *)v155 + 6);
    v172 = &dword_140404A6C[285102349];
    *((_OWORD *)v156 + 5) = v170;
    *((_OWORD *)v156 + 6) = v171;
    v173 = &dword_140404A6C[285098381];
    do
    {
      v173 += 32;
      v174 = *(_OWORD *)v172;
      v175 = *((_OWORD *)v172 + 1);
      v172 += 32;
      *((_OWORD *)v173 - 8) = v174;
      v176 = *((_OWORD *)v172 - 6);
      *((_OWORD *)v173 - 7) = v175;
      v177 = *((_OWORD *)v172 - 5);
      *((_OWORD *)v173 - 6) = v176;
      v178 = *((_OWORD *)v172 - 4);
      *((_OWORD *)v173 - 5) = v177;
      v179 = *((_OWORD *)v172 - 3);
      *((_OWORD *)v173 - 4) = v178;
      v180 = *((_OWORD *)v172 - 2);
      *((_OWORD *)v173 - 3) = v179;
      v181 = *((_OWORD *)v172 - 1);
      *((_OWORD *)v173 - 2) = v180;
      *((_OWORD *)v173 - 1) = v181;
      --v165;
    }
    while ( v165 );
    v182 = 3;
    v183 = *((_OWORD *)v172 + 1);
    *(_OWORD *)v173 = *(_OWORD *)v172;
    v184 = *((_OWORD *)v172 + 2);
    *((_OWORD *)v173 + 1) = v183;
    v185 = *((_OWORD *)v172 + 3);
    *((_OWORD *)v173 + 2) = v184;
    v186 = *((_OWORD *)v172 + 4);
    *((_OWORD *)v173 + 3) = v185;
    v187 = *((_OWORD *)v172 + 5);
    *((_OWORD *)v173 + 4) = v186;
    v188 = *((_OWORD *)v172 + 6);
    v189 = &dword_140404A6C[285102473];
    *((_OWORD *)v173 + 5) = v187;
    *((_OWORD *)v173 + 6) = v188;
    v190 = &dword_140404A6C[285098505];
    do
    {
      v190 += 32;
      v191 = *(_OWORD *)v189;
      v192 = *((_OWORD *)v189 + 1);
      v189 += 32;
      *((_OWORD *)v190 - 8) = v191;
      v193 = *((_OWORD *)v189 - 6);
      *((_OWORD *)v190 - 7) = v192;
      v194 = *((_OWORD *)v189 - 5);
      *((_OWORD *)v190 - 6) = v193;
      v195 = *((_OWORD *)v189 - 4);
      *((_OWORD *)v190 - 5) = v194;
      v196 = *((_OWORD *)v189 - 3);
      *((_OWORD *)v190 - 4) = v195;
      v197 = *((_OWORD *)v189 - 2);
      *((_OWORD *)v190 - 3) = v196;
      v198 = *((_OWORD *)v189 - 1);
      *((_OWORD *)v190 - 2) = v197;
      *((_OWORD *)v190 - 1) = v198;
      --v182;
    }
    while ( v182 );
    v199 = 3;
    v200 = *((_OWORD *)v189 + 1);
    *(_OWORD *)v190 = *(_OWORD *)v189;
    v201 = *((_OWORD *)v189 + 2);
    *((_OWORD *)v190 + 1) = v200;
    v202 = *((_OWORD *)v189 + 3);
    *((_OWORD *)v190 + 2) = v201;
    v203 = *((_OWORD *)v189 + 4);
    *((_OWORD *)v190 + 3) = v202;
    v204 = *((_OWORD *)v189 + 5);
    *((_OWORD *)v190 + 4) = v203;
    v205 = *((_OWORD *)v189 + 6);
    v206 = &dword_140404A6C[285102597];
    *((_OWORD *)v190 + 5) = v204;
    *((_OWORD *)v190 + 6) = v205;
    v207 = &dword_140404A6C[285098629];
    do
    {
      v207 += 32;
      v208 = *(_OWORD *)v206;
      v209 = *((_OWORD *)v206 + 1);
      v206 += 32;
      *((_OWORD *)v207 - 8) = v208;
      v210 = *((_OWORD *)v206 - 6);
      *((_OWORD *)v207 - 7) = v209;
      v211 = *((_OWORD *)v206 - 5);
      *((_OWORD *)v207 - 6) = v210;
      v212 = *((_OWORD *)v206 - 4);
      *((_OWORD *)v207 - 5) = v211;
      v213 = *((_OWORD *)v206 - 3);
      *((_OWORD *)v207 - 4) = v212;
      v214 = *((_OWORD *)v206 - 2);
      *((_OWORD *)v207 - 3) = v213;
      v215 = *((_OWORD *)v206 - 1);
      *((_OWORD *)v207 - 2) = v214;
      *((_OWORD *)v207 - 1) = v215;
      --v199;
    }
    while ( v199 );
    v216 = 3;
    v217 = *((_OWORD *)v206 + 1);
    *(_OWORD *)v207 = *(_OWORD *)v206;
    v218 = *((_OWORD *)v206 + 2);
    *((_OWORD *)v207 + 1) = v217;
    v219 = *((_OWORD *)v206 + 3);
    *((_OWORD *)v207 + 2) = v218;
    v220 = *((_OWORD *)v206 + 4);
    *((_OWORD *)v207 + 3) = v219;
    v221 = *((_OWORD *)v206 + 5);
    *((_OWORD *)v207 + 4) = v220;
    v222 = *((_OWORD *)v206 + 6);
    v223 = &dword_140404A6C[285102721];
    *((_OWORD *)v207 + 5) = v221;
    *((_OWORD *)v207 + 6) = v222;
    v224 = &dword_140404A6C[285098753];
    do
    {
      v224 += 32;
      v225 = *(_OWORD *)v223;
      v226 = *((_OWORD *)v223 + 1);
      v223 += 32;
      *((_OWORD *)v224 - 8) = v225;
      v227 = *((_OWORD *)v223 - 6);
      *((_OWORD *)v224 - 7) = v226;
      v228 = *((_OWORD *)v223 - 5);
      *((_OWORD *)v224 - 6) = v227;
      v229 = *((_OWORD *)v223 - 4);
      *((_OWORD *)v224 - 5) = v228;
      v230 = *((_OWORD *)v223 - 3);
      *((_OWORD *)v224 - 4) = v229;
      v231 = *((_OWORD *)v223 - 2);
      *((_OWORD *)v224 - 3) = v230;
      v232 = *((_OWORD *)v223 - 1);
      *((_OWORD *)v224 - 2) = v231;
      *((_OWORD *)v224 - 1) = v232;
      --v216;
    }
    while ( v216 );
    v233 = 3;
    v234 = *((_OWORD *)v223 + 1);
    *(_OWORD *)v224 = *(_OWORD *)v223;
    v235 = *((_OWORD *)v223 + 2);
    *((_OWORD *)v224 + 1) = v234;
    v236 = *((_OWORD *)v223 + 3);
    *((_OWORD *)v224 + 2) = v235;
    v237 = *((_OWORD *)v223 + 4);
    *((_OWORD *)v224 + 3) = v236;
    v238 = *((_OWORD *)v223 + 5);
    *((_OWORD *)v224 + 4) = v237;
    v239 = *((_OWORD *)v223 + 6);
    v240 = &dword_140404A6C[285102845];
    *((_OWORD *)v224 + 5) = v238;
    *((_OWORD *)v224 + 6) = v239;
    v241 = &dword_140404A6C[285098877];
    do
    {
      v241 += 32;
      v242 = *(_OWORD *)v240;
      v243 = *((_OWORD *)v240 + 1);
      v240 += 32;
      *((_OWORD *)v241 - 8) = v242;
      v244 = *((_OWORD *)v240 - 6);
      *((_OWORD *)v241 - 7) = v243;
      v245 = *((_OWORD *)v240 - 5);
      *((_OWORD *)v241 - 6) = v244;
      v246 = *((_OWORD *)v240 - 4);
      *((_OWORD *)v241 - 5) = v245;
      v247 = *((_OWORD *)v240 - 3);
      *((_OWORD *)v241 - 4) = v246;
      v248 = *((_OWORD *)v240 - 2);
      *((_OWORD *)v241 - 3) = v247;
      v249 = *((_OWORD *)v240 - 1);
      *((_OWORD *)v241 - 2) = v248;
      *((_OWORD *)v241 - 1) = v249;
      --v233;
    }
    while ( v233 );
    v250 = 3;
    v251 = *((_OWORD *)v240 + 1);
    *(_OWORD *)v241 = *(_OWORD *)v240;
    v252 = *((_OWORD *)v240 + 2);
    *((_OWORD *)v241 + 1) = v251;
    v253 = *((_OWORD *)v240 + 3);
    *((_OWORD *)v241 + 2) = v252;
    v254 = *((_OWORD *)v240 + 4);
    *((_OWORD *)v241 + 3) = v253;
    v255 = *((_OWORD *)v240 + 5);
    *((_OWORD *)v241 + 4) = v254;
    v256 = *((_OWORD *)v240 + 6);
    v257 = &dword_140404A6C[285102969];
    *((_OWORD *)v241 + 5) = v255;
    *((_OWORD *)v241 + 6) = v256;
    v258 = &dword_140404A6C[285099001];
    do
    {
      v258 += 32;
      v259 = *(_OWORD *)v257;
      v260 = *((_OWORD *)v257 + 1);
      v257 += 32;
      *((_OWORD *)v258 - 8) = v259;
      v261 = *((_OWORD *)v257 - 6);
      *((_OWORD *)v258 - 7) = v260;
      v262 = *((_OWORD *)v257 - 5);
      *((_OWORD *)v258 - 6) = v261;
      v263 = *((_OWORD *)v257 - 4);
      *((_OWORD *)v258 - 5) = v262;
      v264 = *((_OWORD *)v257 - 3);
      *((_OWORD *)v258 - 4) = v263;
      v265 = *((_OWORD *)v257 - 2);
      *((_OWORD *)v258 - 3) = v264;
      v266 = *((_OWORD *)v257 - 1);
      *((_OWORD *)v258 - 2) = v265;
      *((_OWORD *)v258 - 1) = v266;
      --v250;
    }
    while ( v250 );
    v267 = 3;
    v268 = *((_OWORD *)v257 + 1);
    *(_OWORD *)v258 = *(_OWORD *)v257;
    v269 = *((_OWORD *)v257 + 2);
    *((_OWORD *)v258 + 1) = v268;
    v270 = *((_OWORD *)v257 + 3);
    *((_OWORD *)v258 + 2) = v269;
    v271 = *((_OWORD *)v257 + 4);
    *((_OWORD *)v258 + 3) = v270;
    v272 = *((_OWORD *)v257 + 5);
    *((_OWORD *)v258 + 4) = v271;
    v273 = *((_OWORD *)v257 + 6);
    v274 = &dword_140404A6C[285103093];
    *((_OWORD *)v258 + 5) = v272;
    *((_OWORD *)v258 + 6) = v273;
    v275 = &dword_140404A6C[285099125];
    do
    {
      v275 += 32;
      v276 = *(_OWORD *)v274;
      v277 = *((_OWORD *)v274 + 1);
      v274 += 32;
      *((_OWORD *)v275 - 8) = v276;
      v278 = *((_OWORD *)v274 - 6);
      *((_OWORD *)v275 - 7) = v277;
      v279 = *((_OWORD *)v274 - 5);
      *((_OWORD *)v275 - 6) = v278;
      v280 = *((_OWORD *)v274 - 4);
      *((_OWORD *)v275 - 5) = v279;
      v281 = *((_OWORD *)v274 - 3);
      *((_OWORD *)v275 - 4) = v280;
      v282 = *((_OWORD *)v274 - 2);
      *((_OWORD *)v275 - 3) = v281;
      v283 = *((_OWORD *)v274 - 1);
      *((_OWORD *)v275 - 2) = v282;
      *((_OWORD *)v275 - 1) = v283;
      --v267;
    }
    while ( v267 );
    v284 = 3;
    v285 = *((_OWORD *)v274 + 1);
    *(_OWORD *)v275 = *(_OWORD *)v274;
    v286 = *((_OWORD *)v274 + 2);
    *((_OWORD *)v275 + 1) = v285;
    v287 = *((_OWORD *)v274 + 3);
    *((_OWORD *)v275 + 2) = v286;
    v288 = *((_OWORD *)v274 + 4);
    *((_OWORD *)v275 + 3) = v287;
    v289 = *((_OWORD *)v274 + 5);
    *((_OWORD *)v275 + 4) = v288;
    v290 = *((_OWORD *)v274 + 6);
    v291 = &dword_140404A6C[285103217];
    *((_OWORD *)v275 + 5) = v289;
    *((_OWORD *)v275 + 6) = v290;
    v292 = &dword_140404A6C[285099249];
    do
    {
      v292 += 32;
      v293 = *(_OWORD *)v291;
      v294 = *((_OWORD *)v291 + 1);
      v291 += 32;
      *((_OWORD *)v292 - 8) = v293;
      v295 = *((_OWORD *)v291 - 6);
      *((_OWORD *)v292 - 7) = v294;
      v296 = *((_OWORD *)v291 - 5);
      *((_OWORD *)v292 - 6) = v295;
      v297 = *((_OWORD *)v291 - 4);
      *((_OWORD *)v292 - 5) = v296;
      v298 = *((_OWORD *)v291 - 3);
      *((_OWORD *)v292 - 4) = v297;
      v299 = *((_OWORD *)v291 - 2);
      *((_OWORD *)v292 - 3) = v298;
      v300 = *((_OWORD *)v291 - 1);
      *((_OWORD *)v292 - 2) = v299;
      *((_OWORD *)v292 - 1) = v300;
      --v284;
    }
    while ( v284 );
    v301 = 3;
    v302 = *((_OWORD *)v291 + 1);
    *(_OWORD *)v292 = *(_OWORD *)v291;
    v303 = *((_OWORD *)v291 + 2);
    *((_OWORD *)v292 + 1) = v302;
    v304 = *((_OWORD *)v291 + 3);
    *((_OWORD *)v292 + 2) = v303;
    v305 = *((_OWORD *)v291 + 4);
    *((_OWORD *)v292 + 3) = v304;
    v306 = *((_OWORD *)v291 + 5);
    *((_OWORD *)v292 + 4) = v305;
    v307 = *((_OWORD *)v291 + 6);
    v308 = &dword_140404A6C[285103341];
    *((_OWORD *)v292 + 5) = v306;
    *((_OWORD *)v292 + 6) = v307;
    v309 = &dword_140404A6C[285099373];
    do
    {
      v309 += 32;
      v310 = *(_OWORD *)v308;
      v311 = *((_OWORD *)v308 + 1);
      v308 += 32;
      *((_OWORD *)v309 - 8) = v310;
      v312 = *((_OWORD *)v308 - 6);
      *((_OWORD *)v309 - 7) = v311;
      v313 = *((_OWORD *)v308 - 5);
      *((_OWORD *)v309 - 6) = v312;
      v314 = *((_OWORD *)v308 - 4);
      *((_OWORD *)v309 - 5) = v313;
      v315 = *((_OWORD *)v308 - 3);
      *((_OWORD *)v309 - 4) = v314;
      v316 = *((_OWORD *)v308 - 2);
      *((_OWORD *)v309 - 3) = v315;
      v317 = *((_OWORD *)v308 - 1);
      *((_OWORD *)v309 - 2) = v316;
      *((_OWORD *)v309 - 1) = v317;
      --v301;
    }
    while ( v301 );
    v318 = 3;
    v319 = *((_OWORD *)v308 + 1);
    *(_OWORD *)v309 = *(_OWORD *)v308;
    v320 = *((_OWORD *)v308 + 2);
    *((_OWORD *)v309 + 1) = v319;
    v321 = *((_OWORD *)v308 + 3);
    *((_OWORD *)v309 + 2) = v320;
    v322 = *((_OWORD *)v308 + 4);
    *((_OWORD *)v309 + 3) = v321;
    v323 = *((_OWORD *)v308 + 5);
    *((_OWORD *)v309 + 4) = v322;
    v324 = *((_OWORD *)v308 + 6);
    v325 = &dword_140404A6C[285103465];
    *((_OWORD *)v309 + 5) = v323;
    *((_OWORD *)v309 + 6) = v324;
    v326 = &dword_140404A6C[285099497];
    do
    {
      v326 += 32;
      v327 = *(_OWORD *)v325;
      v328 = *((_OWORD *)v325 + 1);
      v325 += 32;
      *((_OWORD *)v326 - 8) = v327;
      v329 = *((_OWORD *)v325 - 6);
      *((_OWORD *)v326 - 7) = v328;
      v330 = *((_OWORD *)v325 - 5);
      *((_OWORD *)v326 - 6) = v329;
      v331 = *((_OWORD *)v325 - 4);
      *((_OWORD *)v326 - 5) = v330;
      v332 = *((_OWORD *)v325 - 3);
      *((_OWORD *)v326 - 4) = v331;
      v333 = *((_OWORD *)v325 - 2);
      *((_OWORD *)v326 - 3) = v332;
      v334 = *((_OWORD *)v325 - 1);
      *((_OWORD *)v326 - 2) = v333;
      *((_OWORD *)v326 - 1) = v334;
      --v318;
    }
    while ( v318 );
    v335 = 3;
    v336 = *((_OWORD *)v325 + 1);
    *(_OWORD *)v326 = *(_OWORD *)v325;
    v337 = *((_OWORD *)v325 + 2);
    *((_OWORD *)v326 + 1) = v336;
    v338 = *((_OWORD *)v325 + 3);
    *((_OWORD *)v326 + 2) = v337;
    v339 = *((_OWORD *)v325 + 4);
    *((_OWORD *)v326 + 3) = v338;
    v340 = *((_OWORD *)v325 + 5);
    *((_OWORD *)v326 + 4) = v339;
    v341 = *((_OWORD *)v325 + 6);
    v342 = &dword_140404A6C[285103589];
    *((_OWORD *)v326 + 5) = v340;
    *((_OWORD *)v326 + 6) = v341;
    v343 = &dword_140404A6C[285099621];
    do
    {
      v343 += 32;
      v344 = *(_OWORD *)v342;
      v345 = *((_OWORD *)v342 + 1);
      v342 += 32;
      *((_OWORD *)v343 - 8) = v344;
      v346 = *((_OWORD *)v342 - 6);
      *((_OWORD *)v343 - 7) = v345;
      v347 = *((_OWORD *)v342 - 5);
      *((_OWORD *)v343 - 6) = v346;
      v348 = *((_OWORD *)v342 - 4);
      *((_OWORD *)v343 - 5) = v347;
      v349 = *((_OWORD *)v342 - 3);
      *((_OWORD *)v343 - 4) = v348;
      v350 = *((_OWORD *)v342 - 2);
      *((_OWORD *)v343 - 3) = v349;
      v351 = *((_OWORD *)v342 - 1);
      *((_OWORD *)v343 - 2) = v350;
      *((_OWORD *)v343 - 1) = v351;
      --v335;
    }
    while ( v335 );
    v352 = 3;
    v353 = *((_OWORD *)v342 + 1);
    *(_OWORD *)v343 = *(_OWORD *)v342;
    v354 = *((_OWORD *)v342 + 2);
    *((_OWORD *)v343 + 1) = v353;
    v355 = *((_OWORD *)v342 + 3);
    *((_OWORD *)v343 + 2) = v354;
    v356 = *((_OWORD *)v342 + 4);
    *((_OWORD *)v343 + 3) = v355;
    v357 = *((_OWORD *)v342 + 5);
    *((_OWORD *)v343 + 4) = v356;
    v358 = *((_OWORD *)v342 + 6);
    v359 = &dword_140404A6C[285103713];
    *((_OWORD *)v343 + 5) = v357;
    *((_OWORD *)v343 + 6) = v358;
    v360 = &dword_140404A6C[285099745];
    do
    {
      v360 += 32;
      v361 = *(_OWORD *)v359;
      v362 = *((_OWORD *)v359 + 1);
      v359 += 32;
      *((_OWORD *)v360 - 8) = v361;
      v363 = *((_OWORD *)v359 - 6);
      *((_OWORD *)v360 - 7) = v362;
      v364 = *((_OWORD *)v359 - 5);
      *((_OWORD *)v360 - 6) = v363;
      v365 = *((_OWORD *)v359 - 4);
      *((_OWORD *)v360 - 5) = v364;
      v366 = *((_OWORD *)v359 - 3);
      *((_OWORD *)v360 - 4) = v365;
      v367 = *((_OWORD *)v359 - 2);
      *((_OWORD *)v360 - 3) = v366;
      v368 = *((_OWORD *)v359 - 1);
      *((_OWORD *)v360 - 2) = v367;
      *((_OWORD *)v360 - 1) = v368;
      --v352;
    }
    while ( v352 );
    v369 = 3;
    v370 = *((_OWORD *)v359 + 1);
    *(_OWORD *)v360 = *(_OWORD *)v359;
    v371 = *((_OWORD *)v359 + 2);
    *((_OWORD *)v360 + 1) = v370;
    v372 = *((_OWORD *)v359 + 3);
    *((_OWORD *)v360 + 2) = v371;
    v373 = *((_OWORD *)v359 + 4);
    *((_OWORD *)v360 + 3) = v372;
    v374 = *((_OWORD *)v359 + 5);
    *((_OWORD *)v360 + 4) = v373;
    v375 = *((_OWORD *)v359 + 6);
    v376 = &dword_140404A6C[285103837];
    *((_OWORD *)v360 + 5) = v374;
    *((_OWORD *)v360 + 6) = v375;
    v377 = &dword_140404A6C[285099869];
    do
    {
      v377 += 32;
      v378 = *(_OWORD *)v376;
      v379 = *((_OWORD *)v376 + 1);
      v376 += 32;
      *((_OWORD *)v377 - 8) = v378;
      v380 = *((_OWORD *)v376 - 6);
      *((_OWORD *)v377 - 7) = v379;
      v381 = *((_OWORD *)v376 - 5);
      *((_OWORD *)v377 - 6) = v380;
      v382 = *((_OWORD *)v376 - 4);
      *((_OWORD *)v377 - 5) = v381;
      v383 = *((_OWORD *)v376 - 3);
      *((_OWORD *)v377 - 4) = v382;
      v384 = *((_OWORD *)v376 - 2);
      *((_OWORD *)v377 - 3) = v383;
      v385 = *((_OWORD *)v376 - 1);
      *((_OWORD *)v377 - 2) = v384;
      *((_OWORD *)v377 - 1) = v385;
      --v369;
    }
    while ( v369 );
    v386 = 3;
    v387 = *((_OWORD *)v376 + 1);
    *(_OWORD *)v377 = *(_OWORD *)v376;
    v388 = *((_OWORD *)v376 + 2);
    *((_OWORD *)v377 + 1) = v387;
    v389 = *((_OWORD *)v376 + 3);
    *((_OWORD *)v377 + 2) = v388;
    v390 = *((_OWORD *)v376 + 4);
    *((_OWORD *)v377 + 3) = v389;
    v391 = *((_OWORD *)v376 + 5);
    *((_OWORD *)v377 + 4) = v390;
    v392 = *((_OWORD *)v376 + 6);
    v393 = &dword_140404A6C[285103961];
    *((_OWORD *)v377 + 5) = v391;
    *((_OWORD *)v377 + 6) = v392;
    v394 = &dword_140404A6C[285099993];
    do
    {
      v394 += 32;
      v395 = *(_OWORD *)v393;
      v396 = *((_OWORD *)v393 + 1);
      v393 += 32;
      *((_OWORD *)v394 - 8) = v395;
      v397 = *((_OWORD *)v393 - 6);
      *((_OWORD *)v394 - 7) = v396;
      v398 = *((_OWORD *)v393 - 5);
      *((_OWORD *)v394 - 6) = v397;
      v399 = *((_OWORD *)v393 - 4);
      *((_OWORD *)v394 - 5) = v398;
      v400 = *((_OWORD *)v393 - 3);
      *((_OWORD *)v394 - 4) = v399;
      v401 = *((_OWORD *)v393 - 2);
      *((_OWORD *)v394 - 3) = v400;
      v402 = *((_OWORD *)v393 - 1);
      *((_OWORD *)v394 - 2) = v401;
      *((_OWORD *)v394 - 1) = v402;
      --v386;
    }
    while ( v386 );
    v403 = 3;
    v404 = *((_OWORD *)v393 + 1);
    *(_OWORD *)v394 = *(_OWORD *)v393;
    v405 = *((_OWORD *)v393 + 2);
    *((_OWORD *)v394 + 1) = v404;
    v406 = *((_OWORD *)v393 + 3);
    *((_OWORD *)v394 + 2) = v405;
    v407 = *((_OWORD *)v393 + 4);
    *((_OWORD *)v394 + 3) = v406;
    v408 = *((_OWORD *)v393 + 5);
    *((_OWORD *)v394 + 4) = v407;
    v409 = *((_OWORD *)v393 + 6);
    v410 = &dword_140404A6C[285104085];
    *((_OWORD *)v394 + 5) = v408;
    *((_OWORD *)v394 + 6) = v409;
    v411 = &dword_140404A6C[285100117];
    do
    {
      v411 += 32;
      v412 = *(_OWORD *)v410;
      v413 = *((_OWORD *)v410 + 1);
      v410 += 32;
      *((_OWORD *)v411 - 8) = v412;
      v414 = *((_OWORD *)v410 - 6);
      *((_OWORD *)v411 - 7) = v413;
      v415 = *((_OWORD *)v410 - 5);
      *((_OWORD *)v411 - 6) = v414;
      v416 = *((_OWORD *)v410 - 4);
      *((_OWORD *)v411 - 5) = v415;
      v417 = *((_OWORD *)v410 - 3);
      *((_OWORD *)v411 - 4) = v416;
      v418 = *((_OWORD *)v410 - 2);
      *((_OWORD *)v411 - 3) = v417;
      v419 = *((_OWORD *)v410 - 1);
      *((_OWORD *)v411 - 2) = v418;
      *((_OWORD *)v411 - 1) = v419;
      --v403;
    }
    while ( v403 );
    v420 = 3;
    v421 = *((_OWORD *)v410 + 1);
    *(_OWORD *)v411 = *(_OWORD *)v410;
    v422 = *((_OWORD *)v410 + 2);
    *((_OWORD *)v411 + 1) = v421;
    v423 = *((_OWORD *)v410 + 3);
    *((_OWORD *)v411 + 2) = v422;
    v424 = *((_OWORD *)v410 + 4);
    *((_OWORD *)v411 + 3) = v423;
    v425 = *((_OWORD *)v410 + 5);
    *((_OWORD *)v411 + 4) = v424;
    v426 = *((_OWORD *)v410 + 6);
    v427 = &dword_140404A6C[285104209];
    *((_OWORD *)v411 + 5) = v425;
    *((_OWORD *)v411 + 6) = v426;
    v428 = &dword_140404A6C[285100241];
    do
    {
      v428 += 32;
      v429 = *(_OWORD *)v427;
      v430 = *((_OWORD *)v427 + 1);
      v427 += 32;
      *((_OWORD *)v428 - 8) = v429;
      v431 = *((_OWORD *)v427 - 6);
      *((_OWORD *)v428 - 7) = v430;
      v432 = *((_OWORD *)v427 - 5);
      *((_OWORD *)v428 - 6) = v431;
      v433 = *((_OWORD *)v427 - 4);
      *((_OWORD *)v428 - 5) = v432;
      v434 = *((_OWORD *)v427 - 3);
      *((_OWORD *)v428 - 4) = v433;
      v435 = *((_OWORD *)v427 - 2);
      *((_OWORD *)v428 - 3) = v434;
      v436 = *((_OWORD *)v427 - 1);
      *((_OWORD *)v428 - 2) = v435;
      *((_OWORD *)v428 - 1) = v436;
      --v420;
    }
    while ( v420 );
    v437 = 3;
    v438 = *((_OWORD *)v427 + 1);
    *(_OWORD *)v428 = *(_OWORD *)v427;
    v439 = *((_OWORD *)v427 + 2);
    *((_OWORD *)v428 + 1) = v438;
    v440 = *((_OWORD *)v427 + 3);
    *((_OWORD *)v428 + 2) = v439;
    v441 = *((_OWORD *)v427 + 4);
    *((_OWORD *)v428 + 3) = v440;
    v442 = *((_OWORD *)v427 + 5);
    *((_OWORD *)v428 + 4) = v441;
    v443 = *((_OWORD *)v427 + 6);
    v444 = &dword_140404A6C[285104333];
    *((_OWORD *)v428 + 5) = v442;
    *((_OWORD *)v428 + 6) = v443;
    v445 = &dword_140404A6C[285100365];
    do
    {
      v445 += 32;
      v446 = *(_OWORD *)v444;
      v447 = *((_OWORD *)v444 + 1);
      v444 += 32;
      *((_OWORD *)v445 - 8) = v446;
      v448 = *((_OWORD *)v444 - 6);
      *((_OWORD *)v445 - 7) = v447;
      v449 = *((_OWORD *)v444 - 5);
      *((_OWORD *)v445 - 6) = v448;
      v450 = *((_OWORD *)v444 - 4);
      *((_OWORD *)v445 - 5) = v449;
      v451 = *((_OWORD *)v444 - 3);
      *((_OWORD *)v445 - 4) = v450;
      v452 = *((_OWORD *)v444 - 2);
      *((_OWORD *)v445 - 3) = v451;
      v453 = *((_OWORD *)v444 - 1);
      *((_OWORD *)v445 - 2) = v452;
      *((_OWORD *)v445 - 1) = v453;
      --v437;
    }
    while ( v437 );
    v454 = 3;
    v455 = *((_OWORD *)v444 + 1);
    *(_OWORD *)v445 = *(_OWORD *)v444;
    v456 = *((_OWORD *)v444 + 2);
    *((_OWORD *)v445 + 1) = v455;
    v457 = *((_OWORD *)v444 + 3);
    *((_OWORD *)v445 + 2) = v456;
    v458 = *((_OWORD *)v444 + 4);
    *((_OWORD *)v445 + 3) = v457;
    v459 = *((_OWORD *)v444 + 5);
    *((_OWORD *)v445 + 4) = v458;
    v460 = *((_OWORD *)v444 + 6);
    v461 = &dword_140404A6C[285104457];
    *((_OWORD *)v445 + 5) = v459;
    *((_OWORD *)v445 + 6) = v460;
    v462 = &dword_140404A6C[285100489];
    do
    {
      v462 += 32;
      v463 = *(_OWORD *)v461;
      v464 = *((_OWORD *)v461 + 1);
      v461 += 32;
      *((_OWORD *)v462 - 8) = v463;
      v465 = *((_OWORD *)v461 - 6);
      *((_OWORD *)v462 - 7) = v464;
      v466 = *((_OWORD *)v461 - 5);
      *((_OWORD *)v462 - 6) = v465;
      v467 = *((_OWORD *)v461 - 4);
      *((_OWORD *)v462 - 5) = v466;
      v468 = *((_OWORD *)v461 - 3);
      *((_OWORD *)v462 - 4) = v467;
      v469 = *((_OWORD *)v461 - 2);
      *((_OWORD *)v462 - 3) = v468;
      v470 = *((_OWORD *)v461 - 1);
      *((_OWORD *)v462 - 2) = v469;
      *((_OWORD *)v462 - 1) = v470;
      --v454;
    }
    while ( v454 );
    v471 = 3;
    v472 = *((_OWORD *)v461 + 1);
    *(_OWORD *)v462 = *(_OWORD *)v461;
    v473 = *((_OWORD *)v461 + 2);
    *((_OWORD *)v462 + 1) = v472;
    v474 = *((_OWORD *)v461 + 3);
    *((_OWORD *)v462 + 2) = v473;
    v475 = *((_OWORD *)v461 + 4);
    *((_OWORD *)v462 + 3) = v474;
    v476 = *((_OWORD *)v461 + 5);
    *((_OWORD *)v462 + 4) = v475;
    v477 = *((_OWORD *)v461 + 6);
    v478 = &dword_140404A6C[285104581];
    *((_OWORD *)v462 + 5) = v476;
    *((_OWORD *)v462 + 6) = v477;
    v479 = &dword_140404A6C[285100613];
    do
    {
      v479 += 32;
      v480 = *(_OWORD *)v478;
      v481 = *((_OWORD *)v478 + 1);
      v478 += 32;
      *((_OWORD *)v479 - 8) = v480;
      v482 = *((_OWORD *)v478 - 6);
      *((_OWORD *)v479 - 7) = v481;
      v483 = *((_OWORD *)v478 - 5);
      *((_OWORD *)v479 - 6) = v482;
      v484 = *((_OWORD *)v478 - 4);
      *((_OWORD *)v479 - 5) = v483;
      v485 = *((_OWORD *)v478 - 3);
      *((_OWORD *)v479 - 4) = v484;
      v486 = *((_OWORD *)v478 - 2);
      *((_OWORD *)v479 - 3) = v485;
      v487 = *((_OWORD *)v478 - 1);
      *((_OWORD *)v479 - 2) = v486;
      *((_OWORD *)v479 - 1) = v487;
      --v471;
    }
    while ( v471 );
    v488 = 3;
    v489 = *((_OWORD *)v478 + 1);
    *(_OWORD *)v479 = *(_OWORD *)v478;
    v490 = *((_OWORD *)v478 + 2);
    *((_OWORD *)v479 + 1) = v489;
    v491 = *((_OWORD *)v478 + 3);
    *((_OWORD *)v479 + 2) = v490;
    v492 = *((_OWORD *)v478 + 4);
    *((_OWORD *)v479 + 3) = v491;
    v493 = *((_OWORD *)v478 + 5);
    *((_OWORD *)v479 + 4) = v492;
    v494 = *((_OWORD *)v478 + 6);
    v495 = &dword_140404A6C[285104705];
    *((_OWORD *)v479 + 5) = v493;
    *((_OWORD *)v479 + 6) = v494;
    v496 = &dword_140404A6C[285100737];
    do
    {
      v496 += 32;
      v497 = *(_OWORD *)v495;
      v498 = *((_OWORD *)v495 + 1);
      v495 += 32;
      *((_OWORD *)v496 - 8) = v497;
      v499 = *((_OWORD *)v495 - 6);
      *((_OWORD *)v496 - 7) = v498;
      v500 = *((_OWORD *)v495 - 5);
      *((_OWORD *)v496 - 6) = v499;
      v501 = *((_OWORD *)v495 - 4);
      *((_OWORD *)v496 - 5) = v500;
      v502 = *((_OWORD *)v495 - 3);
      *((_OWORD *)v496 - 4) = v501;
      v503 = *((_OWORD *)v495 - 2);
      *((_OWORD *)v496 - 3) = v502;
      v504 = *((_OWORD *)v495 - 1);
      *((_OWORD *)v496 - 2) = v503;
      *((_OWORD *)v496 - 1) = v504;
      --v488;
    }
    while ( v488 );
    v505 = 3;
    v506 = *((_OWORD *)v495 + 1);
    *(_OWORD *)v496 = *(_OWORD *)v495;
    v507 = *((_OWORD *)v495 + 2);
    *((_OWORD *)v496 + 1) = v506;
    v508 = *((_OWORD *)v495 + 3);
    *((_OWORD *)v496 + 2) = v507;
    v509 = *((_OWORD *)v495 + 4);
    *((_OWORD *)v496 + 3) = v508;
    v510 = *((_OWORD *)v495 + 5);
    *((_OWORD *)v496 + 4) = v509;
    v511 = *((_OWORD *)v495 + 6);
    v512 = &dword_140404A6C[285104829];
    *((_OWORD *)v496 + 5) = v510;
    *((_OWORD *)v496 + 6) = v511;
    v513 = &dword_140404A6C[285100861];
    do
    {
      v513 += 32;
      v514 = *(_OWORD *)v512;
      v515 = *((_OWORD *)v512 + 1);
      v512 += 32;
      *((_OWORD *)v513 - 8) = v514;
      v516 = *((_OWORD *)v512 - 6);
      *((_OWORD *)v513 - 7) = v515;
      v517 = *((_OWORD *)v512 - 5);
      *((_OWORD *)v513 - 6) = v516;
      v518 = *((_OWORD *)v512 - 4);
      *((_OWORD *)v513 - 5) = v517;
      v519 = *((_OWORD *)v512 - 3);
      *((_OWORD *)v513 - 4) = v518;
      v520 = *((_OWORD *)v512 - 2);
      *((_OWORD *)v513 - 3) = v519;
      v521 = *((_OWORD *)v512 - 1);
      *((_OWORD *)v513 - 2) = v520;
      *((_OWORD *)v513 - 1) = v521;
      --v505;
    }
    while ( v505 );
    v522 = *((_OWORD *)v512 + 1);
    *(_OWORD *)v513 = *(_OWORD *)v512;
    v523 = *((_OWORD *)v512 + 2);
    *((_OWORD *)v513 + 1) = v522;
    v524 = *((_OWORD *)v512 + 3);
    *((_OWORD *)v513 + 2) = v523;
    v525 = *((_OWORD *)v512 + 4);
    *((_OWORD *)v513 + 3) = v524;
    v526 = *((_OWORD *)v512 + 5);
    *((_OWORD *)v513 + 4) = v525;
    v527 = *((_OWORD *)v512 + 6);
    v528 = &dword_140404A6C[285104953];
    *((_OWORD *)v513 + 5) = v526;
    *((_OWORD *)v513 + 6) = v527;
    v529 = &dword_140404A6C[285100985];
    do
    {
      v529 += 32;
      v530 = *(_OWORD *)v528;
      v531 = *((_OWORD *)v528 + 1);
      v528 += 32;
      *((_OWORD *)v529 - 8) = v530;
      v532 = *((_OWORD *)v528 - 6);
      *((_OWORD *)v529 - 7) = v531;
      v533 = *((_OWORD *)v528 - 5);
      *((_OWORD *)v529 - 6) = v532;
      v534 = *((_OWORD *)v528 - 4);
      *((_OWORD *)v529 - 5) = v533;
      v535 = *((_OWORD *)v528 - 3);
      *((_OWORD *)v529 - 4) = v534;
      v536 = *((_OWORD *)v528 - 2);
      *((_OWORD *)v529 - 3) = v535;
      v537 = *((_OWORD *)v528 - 1);
      *((_OWORD *)v529 - 2) = v536;
      *((_OWORD *)v529 - 1) = v537;
      --v1;
    }
    while ( v1 );
    v538 = *((_OWORD *)v528 + 1);
    *(_OWORD *)v529 = *(_OWORD *)v528;
    v539 = *((_OWORD *)v528 + 2);
    *((_OWORD *)v529 + 1) = v538;
    v540 = *((_OWORD *)v528 + 3);
    *((_OWORD *)v529 + 2) = v539;
    v541 = *((_OWORD *)v528 + 4);
    *((_OWORD *)v529 + 3) = v540;
    v542 = *((_OWORD *)v528 + 5);
    *((_OWORD *)v529 + 4) = v541;
    v543 = *((_OWORD *)v528 + 6);
    *((_OWORD *)v529 + 5) = v542;
    *((_OWORD *)v529 + 6) = v543;
    sr_pad_update();
    v544 = 0;
    dword_140404A6C[285105213] = sr_pad_count();
    if ( (int)dword_140404A6C[285105213] > 0 )
    {
      v545 = 0;
      v546 = &dword_140404A6C[285101165];
      do
      {
        if ( v544 < 32 )
        {
          if ( (unsigned int)sr_pad_attached(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149])) )
          {
            v547 = sr_pad_instance(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]));
            if ( v547 > 31 )
              v547 = 31;
            v548 = sr_pad_controller_attached(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105085]));
            v549 = 0;
            v550 = 124LL * v547;
            v551 = dword_140404A6C[v550 + 285101115];
            if ( v548 )
            {
              if ( v551 > 0 )
              {
                v552 = &dword_140404A6C[v550 + 285101116];
                do
                {
                  ++v552;
                  ++v549;
                  *((float *)v552 - 1) = (float)(__int16)sr_pad_controller_axis(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105085]),v549-1) * 0.000030517578;
                }
                while ( v549 < (int)dword_140404A6C[v550 + 285101115] );
              }
              v553 = 0;
              if ( (int)dword_140404A6C[v550 + 285101132] > 0 )
              {
                v554 = &dword_140404A6C[v550 + 285101133];
                do
                {
                  ++v553;
                  *v554++ = (unsigned __int8)sr_pad_controller_button(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105085]),v553-1);
                }
                while ( v553 < (int)dword_140404A6C[v550 + 285101132] );
              }
            }
            else
            {
              if ( v551 > 0 )
              {
                v555 = &dword_140404A6C[v550 + 285101116];
                do
                {
                  ++v555;
                  ++v549;
                  *((float *)v555 - 1) = (float)(__int16)sr_pad_axis(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]),v549-1) * 0.000030517578;
                }
                while ( v549 < (int)dword_140404A6C[v550 + 285101115] );
              }
              v556 = 0;
              if ( (int)dword_140404A6C[v550 + 285101132] > 0 )
              {
                v557 = &dword_140404A6C[v550 + 285101133];
                do
                {
                  ++v556;
                  *v557++ = (unsigned __int8)sr_pad_button(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]),v556-1);
                }
                while ( v556 < (int)dword_140404A6C[v550 + 285101132] );
              }
              v558 = 0;
              if ( (int)*v546 > 0 )
              {
                v559 = v546 + 2;
                v560 = v546 + 3;
                do
                {
                  v561 = (unsigned __int8)sr_pad_hat(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]),v558);
                  memset(v559 - 1,0,4 * sizeof(*v559)); /* native two qword clears */
                  if ( ((v561 - 1) & 0xFFFFFFF5) == 0 && v561 != 11 )
                    *(v559 - 1) = 1;
                  if ( ((v561 - 4) & 0xFFFFFFF5) == 0 && v561 != 14 )
                    *v559 = 1;
                  if ( ((v561 - 8) & 0xFFFFFFFA) == 0 && v561 != 13 )
                    v559[1] = 1;
                  if ( ((v561 - 2) & 0xFFFFFFFA) == 0 && v561 != 7 )
                    v559[2] = 1;
                  ++v558;
                  v560 += 2;
                  v559 += 4;
                }
                while ( v558 < (int)*v546 );
              }
            }
          }
          else if ( (unsigned int)sr_pad_is_controller(v544) )
          {
            v562 = (__int64)(uintptr_t)sr_pad_controller_open(v544);
            *(_QWORD *)&dword_140404A6C[v545 + 285105085] = v562;
            if ( v562 )
            {
              *(_QWORD *)&dword_140404A6C[v545 + 285105149] = (__int64)(uintptr_t)sr_pad_controller_joystick(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105085]));
              v563 = sr_pad_instance(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]));
              if ( v563 > 31 )
                v563 = 31;
              v564 = (char *)sr_pad_name(v544);
              v565 = 124LL * v563;
              v566 = (char *)&dword_140404A6C[285101109] + v565 * 4 - (_QWORD)v564;
              do
              {
                v567 = *v564;
                v564[(_QWORD)v566 + 356] = *v564;
                ++v564;
              }
              while ( v567 );
              dword_140404A6C[v565 + 285101115] = 6;
              dword_140404A6C[v565 + 285101132] = 16;
              dword_140404A6C[v565 + 285101165] = 0;
              dword_140404A6C[v565 + 285101109] = 1;
            }
          }
          else
          {
            v568 = (__int64)(uintptr_t)sr_pad_open(v544);
            *(_QWORD *)&dword_140404A6C[v545 + 285105149] = v568;
            if ( v568 )
            {
              v569 = sr_pad_instance(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]));
              if ( v569 > 31 )
                v569 = 31;
              v570 = (char *)sr_pad_name(v544);
              v571 = 124LL * v569;
              v572 = (char *)&dword_140404A6C[285101109] + v571 * 4 - (_QWORD)v570;
              do
              {
                v573 = *v570;
                v570[(_QWORD)v572 + 356] = *v570;
                ++v570;
              }
              while ( v573 );
              dword_140404A6C[v571 + 285101115] = sr_pad_axes(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]));
              dword_140404A6C[v571 + 285101132] = sr_pad_buttons(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]));
              dword_140404A6C[v571 + 285101165] = sr_pad_hats(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149]));
              dword_140404A6C[v571 + 285101109] = 1;
            }
          }
        }
        ++v544;
        v546 += 124;
        v545 += 2;
      }
      while ( v544 < (int)dword_140404A6C[285105213] );
    }
  }
}

//----- (000000014003B920) ----------------------------------------------------
int sub_14003B920(int process_input)
{
  extern int game_frame(int process_input);
  /* src/engine/frame.c, which also covers the patch block at 0x1400403F0 */
  return game_frame(process_input);
}

//----- (000000014003C6F0) ----------------------------------------------------
__int64            sub_14003C6F0(_BYTE *a1)
{
  int v1; // edx
  unsigned int v2; // r11d
  int v3; // r9d
  _BYTE *v4; // r8

  v1 = dword_140404A6C[293250413];
  v2 = 0;
  v3 = 0;
  if ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] )
  {
    v4 = a1;
    do
    {
      if ( !*v4 )
        break;
      if ( *v4 != *((_BYTE *)&dword_140404A6C[293250415] + v1) )
        break;
      ++v3;
      ++v1;
      ++v4;
    }
    while ( v1 < (int)dword_140404A6C[293250414] );
  }
  LOBYTE(v2) = a1[v3] == 0;
  return v2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848D4: using guessed type unsigned int;
// 151A848D8: using guessed type unsigned int;
// 151A848DC: using guessed type unsigned int;
// 151A848E0: using guessed type unsigned int;
// 151A848E8: using guessed type unsigned int;
// 151A848F0: using guessed type unsigned int;
// 151A848FC: using guessed type unsigned int;
// 151A84908: using guessed type unsigned int;

//----- (000000014003D830) ----------------------------------------------------
_BOOL8            sub_14003D830(float *a1, int *a2, float *a3, float *a4, float a5)
{
  int v5; // edi
  float *v10; // rsi
  float v11; // xmm10_4
  float v12; // xmm7_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm8_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm3_4
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm6_4
  float v25; // xmm9_4
  float v26; // xmm0_4
  float v27; // xmm8_4
  float v28; // xmm7_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  int v33; // xmm1_4
  int v34; // xmm0_4
  float v35; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003D830[256];
#define v37 (*(__int64 (*))(void *)(sr_frame_14003D830 + 0)) /* [rsp+58h] */
#define v38 (*(float (*))(void *)(sr_frame_14003D830 + 8)) /* [rsp+60h] */
#define v39 (*(float (*)[3])(void *)(sr_frame_14003D830 + 16)) /* [rsp+68h] */
#define v40 (*(float (*)[4])(void *)(sr_frame_14003D830 + 32)) /* [rsp+78h] */
#define v41 (*(float (*)[4])(void *)(sr_frame_14003D830 + 48)) /* [rsp+88h] */
#define v42 (*(float (*)[6])(void *)(sr_frame_14003D830 + 64)) /* [rsp+98h] */
#define v43 (*(float (*))(void *)(sr_frame_14003D830 + 240)) /* [rsp+148h] */

  v5 = 0;
  a1[7] = 65536.0;
  if ( *a2 <= 0 )
    return 0;
  v10 = (float *)(a2 + 3);
  v11 = a5;
  do
  {
    v12 = v10[6];
    v13 = *(v10 - 1);
    v14 = *v10;
    v15 = v10[4];
    v16 = v10[5];
    v17 = v10[3];
    v18 = v10[2];
    v19 = v10[1];
    v41[0] = *(v10 - 2);
    v41[2] = v14;
    v39[2] = v12;
    v20 = v12 - v14;
    v40[2] = v17;
    v21 = v17 - v14;
    v39[0] = v15;
    v39[1] = v16;
    v22 = v16 - v13;
    v41[1] = v13;
    v40[1] = v18;
    v23 = v18 - v13;
    v40[0] = v19;
    v24 = v19 - v41[0];
    v25 = (float)(v22 * v21) - (float)(v20 * v23);
    v26 = (float)(v15 - v41[0]) * v21;
    v27 = (float)((float)(v15 - v41[0]) * v23) - (float)(v22 * v24);
    v28 = (float)(v20 * v24) - v26;
    v29 = fsqrt((float)((float)(v28 * v28) + (float)(v25 * v25)) + (float)(v27 * v27));
    if ( v29 == 0.0 )
    {
      v37 = 0;
      v38 = 0.0;
    }
    else
    {
      *(float *)&v37 = v25 * (float)(1.0 / v29);
      *((float *)&v37 + 1) = v28 * (float)(1.0 / v29);
      v38 = v27 * (float)(1.0 / v29);
    }
    if ( sub_14003F0B0(v42, (float *)&v37, &v43, a3, a4, v11, v41, v40, v39) )
    {
      v30 = v43;
      if ( v43 < a1[7] )
      {
        v31 = v42[1];
        *a1 = v42[0];
        v32 = v42[2];
        a1[1] = v31;
        v33 = v37;
        a1[2] = v32;
        v34 = HIDWORD(v37);
        *((_DWORD *)a1 + 3) = v33;
        v35 = v38;
        *((_DWORD *)a1 + 4) = v34;
        a1[5] = v35;
        a1[7] = v30;
      }
    }
    ++v5;
    v10 += 12;
  }
  while ( v5 < *a2 );
  return a1[7] < 65536.0;
}
#undef v37
#undef v38
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43


//----- (000000014003DAE0) ----------------------------------------------------
_BOOL8            sub_14003DAE0(float *a1, __int64 a2, float *a3, float *a4, float a5)
{
  int v5; // r14d
  int *v10; // rsi
  float v11; // xmm10_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  __int64 v14; // rax
  float v15; // xmm3_4
  float v16; // xmm6_4
  float v17; // xmm5_4
  __int64 v18; // rax
  float v19; // xmm3_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float v22; // xmm8_4
  float v23; // xmm4_4
  float v24; // xmm8_4
  float v25; // xmm4_4
  float v26; // xmm9_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  int v31; // xmm1_4
  int v32; // xmm0_4
  int v33; // xmm1_4
  int v34; // xmm0_4
  float v35; // xmm1_4
  __int64 v36; // rax
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm2_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // xmm1_4
  int v43; // xmm0_4
  float v44; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003DAE0[272];
#define v46 (*(__int64 (*))(void *)(sr_frame_14003DAE0 + 0)) /* [rsp+58h] */
#define v47 (*(float (*))(void *)(sr_frame_14003DAE0 + 8)) /* [rsp+60h] */
#define v48 (*(int (*))(void *)(sr_frame_14003DAE0 + 16)) /* [rsp+68h] */
#define v49 (*(int (*))(void *)(sr_frame_14003DAE0 + 20)) /* [rsp+6Ch] */
#define v50 (*(int (*))(void *)(sr_frame_14003DAE0 + 24)) /* [rsp+70h] */
#define v51 (*(float (*)[2])(void *)(sr_frame_14003DAE0 + 32)) /* [rsp+78h] */
#define v52 (*(float (*))(void *)(sr_frame_14003DAE0 + 40)) /* [rsp+80h] */
#define v53 (*(float (*)[4])(void *)(sr_frame_14003DAE0 + 48)) /* [rsp+88h] */
#define v54 (*(float (*)[4])(void *)(sr_frame_14003DAE0 + 64)) /* [rsp+98h] */
#define v55 (*(float (*)[6])(void *)(sr_frame_14003DAE0 + 80)) /* [rsp+A8h] */
#define v56 (*(float (*))(void *)(sr_frame_14003DAE0 + 256)) /* [rsp+158h] */

  v5 = 0;
  a1[7] = 65536.0;
  if ( *(int *)(a2 + 32772) <= 0 )
    return 0;
  v10 = (int *)(a2 + 32784);
  v11 = a5;
  do
  {
    v12 = *(float *)(a2 + 16LL * *(v10 - 1) + 12);
    v13 = *(float *)(a2 + 16LL * *(v10 - 1) + 16);
    v14 = 2LL * *v10;
    v53[0] = *(float *)(a2 + 16LL * *(v10 - 1) + 8);
    v53[2] = v13;
    v53[1] = v12;
    v15 = *(float *)(a2 + 8 * v14 + 16);
    v16 = *(float *)(a2 + 8 * v14 + 8);
    v17 = *(float *)(a2 + 8 * v14 + 12);
    v18 = 2LL * v10[1];
    v54[2] = v15;
    v19 = v15 - v13;
    v54[1] = v17;
    v20 = v17 - v12;
    v54[0] = v16;
    v21 = v16 - v53[0];
    v22 = *(float *)(a2 + 8 * v18 + 8);
    v23 = *(float *)(a2 + 8 * v18 + 12);
    v52 = *(float *)(a2 + 8 * v18 + 16);
    v51[0] = v22;
    v24 = v22 - v53[0];
    v51[1] = v23;
    v25 = v23 - v12;
    v26 = (float)(v25 * v19) - (float)((float)(v52 - v13) * v20);
    v27 = (float)((float)(v52 - v13) * v21) - (float)(v24 * v19);
    v28 = (float)(v24 * v20) - (float)(v25 * v21);
    v29 = fsqrt((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v28 * v28));
    if ( v29 == 0.0 )
    {
      v46 = 0;
      v47 = 0.0;
    }
    else
    {
      *(float *)&v46 = v26 * (float)(1.0 / v29);
      *((float *)&v46 + 1) = v27 * (float)(1.0 / v29);
      v47 = v28 * (float)(1.0 / v29);
    }
    if ( sub_14003F0B0((float *)&v48, (float *)&v46, &v56, a3, a4, v11, v53, v54, v51) )
    {
      v30 = v56;
      if ( v56 < a1[7] )
      {
        v31 = v49;
        *(_DWORD *)a1 = v48;
        v32 = v50;
        *((_DWORD *)a1 + 1) = v31;
        v33 = v46;
        *((_DWORD *)a1 + 2) = v32;
        v34 = HIDWORD(v46);
        *((_DWORD *)a1 + 3) = v33;
        v35 = v47;
        *((_DWORD *)a1 + 4) = v34;
        a1[5] = v35;
        a1[7] = v30;
      }
    }
    if ( *(v10 - 2) == 4 )
    {
      v36 = 2LL * v10[2];
      v37 = *(float *)(a2 + 16LL * v10[2] + 12);
      v55[0] = *(float *)(a2 + 16LL * v10[2] + 8);
      v38 = *(float *)(a2 + 8 * v36 + 16);
      v55[1] = v37;
      v55[2] = v38;
      if ( sub_14003F0B0((float *)&v48, (float *)&v46, &v56, a3, a4, v11, v53, v51, v55) )
      {
        v39 = v56;
        if ( v56 < a1[7] )
        {
          v40 = v49;
          *(_DWORD *)a1 = v48;
          v41 = v50;
          *((_DWORD *)a1 + 1) = v40;
          v42 = v46;
          *((_DWORD *)a1 + 2) = v41;
          v43 = HIDWORD(v46);
          *((_DWORD *)a1 + 3) = v42;
          v44 = v47;
          *((_DWORD *)a1 + 4) = v43;
          a1[5] = v44;
          a1[7] = v39;
        }
      }
    }
    ++v5;
    v10 += 8;
  }
  while ( v5 < *(_DWORD *)(a2 + 32772) );
  return a1[7] < 65536.0;
}
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A84898: using guessed type unsigned int;
// 151A8489C: using guessed type unsigned int;
// 151A848D4: using guessed type unsigned int;
// 151A848E4: using guessed type unsigned int;
// 151A848E8: using guessed type unsigned int;
// 151A848FC: using guessed type unsigned int;
// 151A84908: using guessed type unsigned int;

//----- (000000014003E100) ----------------------------------------------------
_BOOL8            sub_14003E100(
        _DWORD *a1,
        _DWORD *a2,
        float *a3,
        float *a4,
        float *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // r13d
  int *v10; // r12
  int *v11; // r14
  float v13; // xmm7_4
  signed int v16; // ebx
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  __int64 v20; // rcx
  __int64 v21; // rax
  float v22; // xmm1_4
  float v23; // xmm0_4
  __int64 v24; // rcx
  __int64 v25; // rax
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  __int64 v29; // rcx
  __int64 v30; // rax
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  int v35; // xmm1_4
  float v36; // xmm0_4
  int v37; // xmm2_4
  int v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // xmm1_4
  int v43; // xmm0_4
  BOOL v44; // eax
  int v45; // xmm2_4
  int v46; // xmm1_4
  int v47; // xmm0_4
  int v48; // xmm1_4
  int v49; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003E100[256];
#define v51 (*(int (*))(void *)(sr_frame_14003E100 + 0)) /* [rsp+58h] */
#define v52 (*(int (*))(void *)(sr_frame_14003E100 + 4)) /* [rsp+5Ch] */
#define v53 (*(int (*))(void *)(sr_frame_14003E100 + 8)) /* [rsp+60h] */
#define v54 (*(int (*))(void *)(sr_frame_14003E100 + 16)) /* [rsp+68h] */
#define v55 (*(int (*))(void *)(sr_frame_14003E100 + 20)) /* [rsp+6Ch] */
#define v56 (*(int (*))(void *)(sr_frame_14003E100 + 24)) /* [rsp+70h] */
#define v57 (*(float (*)[4])(void *)(sr_frame_14003E100 + 32)) /* [rsp+78h] */
#define v58 (*(float (*)[4])(void *)(sr_frame_14003E100 + 48)) /* [rsp+88h] */
#define v59 (*(float (*)[4])(void *)(sr_frame_14003E100 + 64)) /* [rsp+98h] */
#define v60 (*(float (*)[24])(void *)(sr_frame_14003E100 + 80)) /* [rsp+A8h] */
#define v61 (*(float * (*))(void *)(sr_frame_14003E100 + 248)) /* [rsp+150h] */

  v61 = a4;
  v9 = a8;
  v10 = dword_1402B3664;
  v11 = dword_1402B3558;
  v13 = *(float *)&a9;
  v16 = 0;
  *a3 = 65536.0;
  v17 = (float)*a7;
  v18 = (float)a7[1];
  v19 = (float)a7[2];
  do
  {
    if ( ((((64 << v16) & v9) != 0) & _bittest(&v9, v16)) != 0 )
    {
      v20 = 3LL * *(v10 - 1);
      v21 = *v10;
      v22 = (float)(v18 + *(float *)&dword_1402B34F0[3 * *(v10 - 1) + 1]) * v13;
      v58[0] = (float)(v17 + *(float *)&dword_1402B34F0[3 * *(v10 - 1)]) * v13;
      v23 = v19 + *(float *)&dword_1402B34F0[v20 + 2];
      v24 = 3 * v21;
      v58[1] = v22;
      v25 = v10[1];
      v26 = (float)(v18 + *(float *)&dword_1402B34F0[v24 + 1]) * v13;
      v58[2] = v23 * v13;
      v27 = v17 + *(float *)&dword_1402B34F0[v24];
      v59[1] = v26;
      v59[0] = v27 * v13;
      v28 = v19 + *(float *)&dword_1402B34F0[v24 + 2];
      v29 = 3 * v25;
      v30 = v10[2];
      v31 = (float)(v18 + *(float *)&dword_1402B34F0[v29 + 1]) * v13;
      v59[2] = v28 * v13;
      v32 = v17 + *(float *)&dword_1402B34F0[v29];
      v57[1] = v31;
      v57[0] = v32 * v13;
      v33 = v18 + *(float *)&dword_1402B34F0[3 * v30 + 1];
      v57[2] = (float)(v19 + *(float *)&dword_1402B34F0[v29 + 2]) * v13;
      v34 = v17 + *(float *)&dword_1402B34F0[3 * v30];
      v60[1] = v33 * v13;
      v35 = *(v11 - 1);
      v60[0] = v34 * v13;
      v36 = v19 + *(float *)&dword_1402B34F0[3 * v30 + 2];
      v52 = v35;
      v60[2] = v36 * v13;
      v51 = *(v11 - 2);
      v53 = *v11;
      if ( sub_14003F0B0((float *)&v54, (float *)&v51, (float *)&a9, a4, a5, *(float *)&a6, v58, v59, v57) )
      {
        v37 = a9;
        if ( *(float *)&a9 < *a3 )
        {
          v38 = v55;
          *a1 = v54;
          v39 = v56;
          a1[1] = v38;
          v40 = v51;
          a1[2] = v39;
          v41 = v52;
          *a2 = v40;
          a2[2] = v53;
          a2[1] = v41;
          *(_DWORD *)a3 = v37;
          dword_140404A6C[73007008] = v16;
        }
      }
      v42 = *(v11 - 1);
      v51 = *(v11 - 2);
      v43 = *v11;
      v52 = v42;
      v53 = v43;
      v44 = sub_14003F0B0((float *)&v54, (float *)&v51, (float *)&a9, v61, a5, *(float *)&a6, v58, v57, v60);
      a4 = v61;
      if ( v44 )
      {
        v45 = a9;
        if ( *(float *)&a9 < *a3 )
        {
          v46 = v55;
          *a1 = v54;
          v47 = v56;
          a1[1] = v46;
          v48 = v51;
          a1[2] = v47;
          v49 = v52;
          *a2 = v48;
          a2[2] = v53;
          a2[1] = v49;
          *(_DWORD *)a3 = v45;
          dword_140404A6C[73007008] = v16;
        }
      }
    }
    ++v16;
    v10 += 4;
    v11 += 3;
  }
  while ( v16 < 6 );
  return *a3 < 65536.0;
}
#undef v51
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61

// 1402B34F0: using guessed type int dword_1402B34F0[];
// 1402B3558: using guessed type int dword_1402B3558[18];
// 1402B3664: using guessed type int dword_1402B3664[];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848EC: using guessed type unsigned int;

//----- (000000014003E4B0) ----------------------------------------------------
_BOOL8            sub_14003E4B0(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        int *a7,
        unsigned __int16 a8,
        float a9)
{
  float v9; // xmm0_4
  signed int v13; // r15d
  float v14; // xmm14_4
  __int64 v15; // r14
  float v16; // xmm8_4
  float v17; // xmm15_4
  float v18; // xmm13_4
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  float v24; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  __int64 v27; // rax
  float v28; // xmm5_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  float v31; // xmm6_4
  __int64 v32; // rax
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm7_4
  float v37; // xmm8_4
  float v38; // xmm6_4
  float v39; // xmm1_4
  float v40; // xmm7_4
  float v41; // xmm8_4
  float v42; // xmm4_4
  float v43; // xmm7_4
  float v44; // xmm8_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  int v47; // xmm1_4
  int v48; // xmm0_4
  int v49; // xmm1_4
  int v50; // xmm0_4
  signed int v51; // r12d
  __int64 v52; // r15
  __int64 v53; // r13
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rax
  float v57; // xmm0_4
  float v58; // xmm4_4
  float v59; // xmm5_4
  __int64 v60; // rax
  float v61; // xmm3_4
  float v62; // xmm2_4
  float v63; // xmm1_4
  __int64 v64; // rax
  float v65; // xmm13_4
  float v66; // xmm7_4
  float v67; // xmm12_4
  __int64 v68; // rax
  float v69; // xmm6_4
  float v70; // xmm8_4
  float v71; // xmm9_4
  float v72; // xmm12_4
  float v73; // xmm13_4
  float v74; // xmm2_4
  float v75; // xmm1_4
  float v76; // xmm3_4
  float v77; // xmm7_4
  float v78; // xmm6_4
  float v79; // xmm8_4
  float v80; // xmm9_4
  float v81; // xmm4_4
  float v82; // xmm5_4
  float v83; // xmm15_4
  float v84; // xmm0_4
  float v85; // xmm2_4
  int v86; // xmm1_4
  int v87; // xmm0_4
  int v88; // xmm1_4
  int v89; // xmm0_4
  float v90; // xmm6_4
  float v91; // xmm8_4
  float v92; // xmm9_4
  float v93; // xmm3_4
  float v94; // xmm4_4
  float v95; // xmm6_4
  float v96; // xmm0_4
  float v97; // xmm2_4
  int v98; // xmm1_4
  int v99; // xmm0_4
  int v100; // xmm1_4
  int v101; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003E4B0[400];
#define v103 (*(__int64 (*))(void *)(sr_frame_14003E4B0 + 0)) /* [rsp+50h] */
#define v104 (*(float (*))(void *)(sr_frame_14003E4B0 + 8)) /* [rsp+58h] */
#define v105 (*(int (*))(void *)(sr_frame_14003E4B0 + 16)) /* [rsp+60h] */
#define v106 (*(int (*))(void *)(sr_frame_14003E4B0 + 20)) /* [rsp+64h] */
#define v107 (*(int (*))(void *)(sr_frame_14003E4B0 + 24)) /* [rsp+68h] */
#define v108 (*(float (*))(void *)(sr_frame_14003E4B0 + 32)) /* [rsp+70h] */
#define v109 (*(float (*))(void *)(sr_frame_14003E4B0 + 36)) /* [rsp+74h] */
#define v110 (*(float (*))(void *)(sr_frame_14003E4B0 + 40)) /* [rsp+78h] */
#define v111 (*(float (*))(void *)(sr_frame_14003E4B0 + 48)) /* [rsp+80h] */
#define v112 (*(float (*))(void *)(sr_frame_14003E4B0 + 52)) /* [rsp+84h] */
#define v113 (*(float (*))(void *)(sr_frame_14003E4B0 + 56)) /* [rsp+88h] */
#define v114 (*(float (*))(void *)(sr_frame_14003E4B0 + 64)) /* [rsp+90h] */
#define v115 (*(float (*))(void *)(sr_frame_14003E4B0 + 68)) /* [rsp+94h] */
#define v116 (*(float (*))(void *)(sr_frame_14003E4B0 + 72)) /* [rsp+98h] */
#define v117 (*(float (*))(void *)(sr_frame_14003E4B0 + 80)) /* [rsp+A0h] */
#define v118 (*(float (*))(void *)(sr_frame_14003E4B0 + 84)) /* [rsp+A4h] */
#define v119 (*(float (*))(void *)(sr_frame_14003E4B0 + 88)) /* [rsp+A8h] */
#define v120 (*(float (*)[4])(void *)(sr_frame_14003E4B0 + 96)) /* [rsp+B0h] */
#define v121 (*(float (*))(void *)(sr_frame_14003E4B0 + 352)) /* [rsp+1B0h] */
#define v122 (*(float * (*))(void *)(sr_frame_14003E4B0 + 360)) /* [rsp+1B8h] */
#define v123 (*(float (*))(void *)(sr_frame_14003E4B0 + 384)) /* [rsp+1D0h] */
#define v124 (*(float (*))(void *)(sr_frame_14003E4B0 + 392)) /* [rsp+1D8h] */

  v122 = a4;
  v9 = 65536.0;
  v13 = 0;
  v14 = a9;
  *a3 = 65536.0;
  v15 = 58LL * a8;
  v16 = (float)*a7;
  v17 = (float)a7[1];
  v18 = (float)a7[2];
  v123 = v16;
  v119 = v17;
  v121 = v18;
  if ( (int)dword_140404A6C[v15 + 20074639] > 0 )
  {
    v19 = 0;
    v20 = 0;
    do
    {
      v21 = *(_QWORD *)&dword_140404A6C[v15 + 20074615];
      v22 = *(_QWORD *)&dword_140404A6C[v15 + 20074641];
      v23 = 3 * *(_DWORD *)(v22 + v20);
      v24 = v18 + *(float *)(v21 + 4 * v23 + 8);
      v25 = v17 + *(float *)(v21 + 4 * v23 + 4);
      v26 = v16 + *(float *)(v21 + 4 * v23);
      v27 = 3 * *(_DWORD *)(v22 + v20 + 4);
      v113 = v24 * v14;
      v28 = v26 * v14;
      v29 = v18 + *(float *)(v21 + 4 * v27 + 8);
      v30 = v17 + *(float *)(v21 + 4 * v27 + 4);
      v31 = v16 + *(float *)(v21 + 4 * v27);
      LODWORD(v27) = *(_DWORD *)(v22 + v20 + 8);
      v112 = v25 * v14;
      v32 = 3 * (int)v27;
      v116 = v29 * v14;
      v33 = (float)(v29 * v14) - (float)(v24 * v14);
      v115 = v30 * v14;
      v34 = (float)(v30 * v14) - (float)(v25 * v14);
      v35 = v17 + *(float *)(v21 + 4 * v32 + 4);
      v36 = v18 + *(float *)(v21 + 4 * v32 + 8);
      v37 = v16 + *(float *)(v21 + 4 * v32);
      v114 = v31 * v14;
      v38 = (float)(v31 * v14) - v28;
      v111 = v28;
      v109 = v35 * v14;
      v39 = (float)(v35 * v14) - (float)(v25 * v14);
      v110 = v36 * v14;
      v40 = (float)(v36 * v14) - (float)(v24 * v14);
      v108 = v37 * v14;
      v41 = (float)(v37 * v14) - v28;
      v42 = (float)(v39 * v33) - (float)(v40 * v34);
      v43 = (float)(v40 * v38) - (float)(v41 * v33);
      v44 = (float)(v41 * v34) - (float)(v39 * v38);
      v45 = fsqrt((float)((float)(v43 * v43) + (float)(v42 * v42)) + (float)(v44 * v44));
      if ( v45 == 0.0 )
      {
        v103 = 0;
        v104 = 0.0;
      }
      else
      {
        *(float *)&v103 = v42 * (float)(1.0 / v45);
        *((float *)&v103 + 1) = v43 * (float)(1.0 / v45);
        v104 = v44 * (float)(1.0 / v45);
      }
      if ( sub_14003F0B0((float *)&v105, (float *)&v103, &a9, a4, a5, a6, &v111, &v114, &v108) )
      {
        v46 = a9;
        if ( a9 < *a3 )
        {
          v47 = v106;
          *a1 = v105;
          v48 = v107;
          a1[1] = v47;
          v49 = v103;
          a1[2] = v48;
          v50 = HIDWORD(v103);
          *(_DWORD *)a2 = v49;
          *(float *)(a2 + 8) = v104;
          *(_DWORD *)(a2 + 4) = v50;
          *a3 = v46;
          dword_140404A6C[73007008] = *(_DWORD *)(v19 + *(_QWORD *)&dword_140404A6C[v15 + 20074643]);
        }
      }
      v16 = v123;
      a4 = v122;
      ++v13;
      v20 += 12;
      v19 += 4;
    }
    while ( v13 < (int)dword_140404A6C[v15 + 20074639] );
    v9 = *a3;
  }
  v51 = 0;
  if ( (int)dword_140404A6C[v15 + 20074623] > 0 )
  {
    v52 = 0;
    v53 = 0;
    do
    {
      v54 = *(_QWORD *)&dword_140404A6C[v15 + 20074615];
      v55 = *(_QWORD *)&dword_140404A6C[v15 + 20074631];
      v56 = 3 * *(_DWORD *)(v55 + v53);
      v57 = v16 + *(float *)(v54 + 4 * v56);
      v58 = v17 + *(float *)(v54 + 4 * v56 + 4);
      v59 = v18 + *(float *)(v54 + 4 * v56 + 8);
      v60 = 3 * *(_DWORD *)(v55 + v53 + 4);
      v124 = v57 * v14;
      v61 = v16 + *(float *)(v54 + 4 * v60);
      v62 = v17 + *(float *)(v54 + 4 * v60 + 4);
      v63 = v18 + *(float *)(v54 + 4 * v60 + 8);
      LODWORD(v60) = *(_DWORD *)(v55 + v53 + 8);
      v111 = v57 * v14;
      v117 = v58 * v14;
      v112 = v58 * v14;
      v118 = v59 * v14;
      v64 = 3 * (int)v60;
      v113 = v59 * v14;
      v65 = v18 + *(float *)(v54 + 4 * v64 + 8);
      v66 = v16 + *(float *)(v54 + 4 * v64);
      v67 = v17 + *(float *)(v54 + 4 * v64 + 4);
      v68 = 3 * *(_DWORD *)(v55 + v53 + 12);
      v69 = v16 + *(float *)(v54 + 4 * v68);
      v70 = v17 + *(float *)(v54 + 4 * v68 + 4);
      v71 = v121 + *(float *)(v54 + 4 * v68 + 8);
      v109 = v67 * v14;
      v72 = (float)(v67 * v14) - (float)(v58 * v14);
      v110 = v65 * v14;
      v73 = (float)(v65 * v14) - (float)(v59 * v14);
      v115 = v62 * v14;
      v74 = (float)(v62 * v14) - (float)(v58 * v14);
      v116 = v63 * v14;
      v75 = (float)(v63 * v14) - (float)(v59 * v14);
      v114 = v61 * v14;
      v76 = (float)(v61 * v14) - (float)(v57 * v14);
      v108 = v66 * v14;
      v77 = (float)(v66 * v14) - (float)(v57 * v14);
      v78 = v69 * v14;
      v79 = v70 * v14;
      v80 = v71 * v14;
      v81 = (float)(v72 * v75) - (float)(v73 * v74);
      v120[0] = v78;
      v120[1] = v79;
      v120[2] = v80;
      v82 = (float)(v73 * v76) - (float)(v77 * v75);
      v83 = (float)(v77 * v74) - (float)(v72 * v76);
      v84 = fsqrt((float)((float)(v82 * v82) + (float)(v81 * v81)) + (float)(v83 * v83));
      if ( v84 == 0.0 )
      {
        v103 = 0;
        v104 = 0.0;
      }
      else
      {
        *(float *)&v103 = (float)(1.0 / v84) * v81;
        *((float *)&v103 + 1) = (float)(1.0 / v84) * v82;
        v104 = (float)(1.0 / v84) * v83;
      }
      if ( sub_14003F0B0((float *)&v105, (float *)&v103, &a9, a4, a5, a6, &v111, &v114, &v108) )
      {
        v85 = a9;
        if ( a9 < *a3 )
        {
          v86 = v106;
          *a1 = v105;
          v87 = v107;
          a1[1] = v86;
          v88 = v103;
          a1[2] = v87;
          v89 = HIDWORD(v103);
          *(_DWORD *)a2 = v88;
          *(float *)(a2 + 8) = v104;
          *(_DWORD *)(a2 + 4) = v89;
          *a3 = v85;
          dword_140404A6C[73007008] = *(_DWORD *)(v52 + *(_QWORD *)&dword_140404A6C[v15 + 20074633]);
        }
      }
      v90 = v78 - v124;
      v91 = v79 - v117;
      v92 = v80 - v118;
      v93 = (float)(v91 * v73) - (float)(v92 * v72);
      v94 = (float)(v77 * v92) - (float)(v90 * v73);
      v95 = (float)(v90 * v72) - (float)(v77 * v91);
      v96 = fsqrt((float)((float)(v94 * v94) + (float)(v93 * v93)) + (float)(v95 * v95));
      if ( v96 == 0.0 )
      {
        v103 = 0;
        v104 = 0.0;
      }
      else
      {
        *(float *)&v103 = (float)(1.0 / v96) * v93;
        *((float *)&v103 + 1) = (float)(1.0 / v96) * v94;
        v104 = (float)(1.0 / v96) * v95;
      }
      if ( sub_14003F0B0((float *)&v105, (float *)&v103, &a9, v122, a5, a6, &v111, &v108, v120) )
      {
        v97 = a9;
        if ( a9 < *a3 )
        {
          v98 = v106;
          *a1 = v105;
          v99 = v107;
          a1[1] = v98;
          v100 = v103;
          a1[2] = v99;
          v101 = HIDWORD(v103);
          *(_DWORD *)a2 = v100;
          *(float *)(a2 + 8) = v104;
          *(_DWORD *)(a2 + 4) = v101;
          *a3 = v97;
          dword_140404A6C[73007008] = *(_DWORD *)(v52 + *(_QWORD *)&dword_140404A6C[v15 + 20074633]);
        }
      }
      v16 = v123;
      v17 = v119;
      ++v51;
      v18 = v121;
      v53 += 16;
      a4 = v122;
      v52 += 4;
    }
    while ( v51 < (int)dword_140404A6C[v15 + 20074623] );
    v9 = *a3;
  }
  return v9 < 65536.0;
}
#undef v103
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118
#undef v119
#undef v120
#undef v121
#undef v122
#undef v123
#undef v124

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848EC: using guessed type unsigned int;

//----- (000000014003ED30) ----------------------------------------------------
_BOOL8            sub_14003ED30(
        float *a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rcx
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned int *v18; // r15
  __int64 v19; // rax
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  __int64 v25; // rax
  __int64 v26; // rax
  float v27; // xmm3_4
  float v28; // xmm5_4
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm8_4
  float v32; // xmm7_4
  float v33; // xmm8_4
  float v34; // xmm4_4
  float v35; // xmm7_4
  float v36; // xmm8_4
  float v37; // xmm3_4
  int v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  int v41; // xmm1_4
  int v42; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003ED30[256];
#define v44 (*(__int64 (*))(void *)(sr_frame_14003ED30 + 0)) /* [rsp+58h] */
#define v45 (*(float (*))(void *)(sr_frame_14003ED30 + 8)) /* [rsp+60h] */
#define v46 (*(float (*))(void *)(sr_frame_14003ED30 + 16)) /* [rsp+68h] */
#define v47 (*(float (*))(void *)(sr_frame_14003ED30 + 20)) /* [rsp+6Ch] */
#define v48 (*(float (*))(void *)(sr_frame_14003ED30 + 24)) /* [rsp+70h] */
#define v49 (*(float (*)[4])(void *)(sr_frame_14003ED30 + 32)) /* [rsp+78h] */
#define v50 (*(float (*)[4])(void *)(sr_frame_14003ED30 + 48)) /* [rsp+88h] */
#define v51 (*(float (*)[6])(void *)(sr_frame_14003ED30 + 64)) /* [rsp+98h] */
#define v52 (*(__int64 (*))(void *)(sr_frame_14003ED30 + 248)) /* [rsp+150h] */

  v9 = (int)a7;
  v12 = 15432LL * (int)a7;
  if ( fabs(*a4 - *(float *)&dword_140404A6C[v12 + 358297503]) > 64.0 )
    return 0;
  if ( fabs(a4[2] - *(float *)&dword_140404A6C[v12 + 358297505]) > 64.0 )
    return 0;
  if ( fabs(a4[1] - *(float *)&dword_140404A6C[v12 + 358297504]) > 64.0 )
    return 0;
  v14 = (int)a8;
  *a3 = 65536.0;
  v15 = v14 + 15432 * v9;
  v16 = (int)dword_140404A6C[v15 + 358300580];
  if ( (int)v16 >= (int)dword_140404A6C[v15 + 358300584] )
    return 0;
  v17 = 5144 * v9;
  v52 = 5144 * v9;
  v18 = &dword_140404A6C[10288 * v9 + 358300589 + 5144 * v9 + 2 * v16 + v16];
  do
  {
    v19 = v17 + (int)*v18;
    v20 = *(float *)&dword_140404A6C[3 * v17 + 358297508 + 3 * (int)*(v18 - 1)];
    v21 = *(float *)&dword_140404A6C[3 * v17 + 358297509 + 3 * (int)*(v18 - 1)];
    LODWORD(v50[0]) = dword_140404A6C[3 * v17 + 358297507 + 3 * (int)*(v18 - 1)];
    v50[1] = v20;
    v22 = *(float *)&dword_140404A6C[3 * v19 + 358297509];
    v23 = *(float *)&dword_140404A6C[3 * v19 + 358297507];
    v24 = *(float *)&dword_140404A6C[3 * v19 + 358297508];
    v25 = (int)v18[1];
    v49[2] = v22;
    v26 = v17 + v25;
    v27 = v22 - v21;
    v50[2] = v21;
    v49[1] = v24;
    v28 = v24 - v20;
    v49[0] = v23;
    v29 = v23 - v50[0];
    v30 = *(float *)&dword_140404A6C[3 * v26 + 358297509];
    v31 = *(float *)&dword_140404A6C[3 * v26 + 358297507];
    v47 = *(float *)&dword_140404A6C[3 * v26 + 358297508];
    v48 = v30;
    v32 = v30 - v21;
    v46 = v31;
    v33 = v31 - v50[0];
    v34 = (float)((float)(v47 - v20) * v27) - (float)(v32 * v28);
    v35 = (float)(v32 * v29) - (float)(v33 * v27);
    v36 = (float)(v33 * v28) - (float)((float)(v47 - v20) * v29);
    v37 = fsqrt((float)((float)(v35 * v35) + (float)(v34 * v34)) + (float)(v36 * v36));
    if ( v37 == 0.0 )
    {
      v44 = 0;
      v45 = 0.0;
    }
    else
    {
      *(float *)&v44 = v34 * (float)(1.0 / v37);
      *((float *)&v44 + 1) = v35 * (float)(1.0 / v37);
      v45 = v36 * (float)(1.0 / v37);
    }
    if ( sub_14003F0B0(v51, (float *)&v44, (float *)&a7, a4, a5, *(float *)&a6, v50, v49, &v46) )
    {
      v38 = a7;
      if ( *(float *)&a7 < *a3 )
      {
        v39 = v51[1];
        *a1 = v51[0];
        v40 = v51[2];
        a1[1] = v39;
        v41 = v44;
        a1[2] = v40;
        v42 = HIDWORD(v44);
        *(_DWORD *)a2 = v41;
        *(float *)(a2 + 8) = v45;
        *(_DWORD *)(a2 + 4) = v42;
        *(_DWORD *)a3 = v38;
      }
    }
    v17 = v52;
    LODWORD(v16) = v16 + 1;
    v18 += 3;
  }
  while ( (int)v16 < (int)dword_140404A6C[v15 + 358300584] );
  return *a3 < 65536.0;
}
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51
#undef v52

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014003F0B0) ----------------------------------------------------
_BOOL8            sub_14003F0B0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        float *a7,
        float *a8,
        float *a9)
{
  float v13; // xmm7_4
  float *v14; // r12
  float *v15; // r13
  float *v16; // r15
  float v17; // xmm3_4
  float v18; // xmm11_4
  float v19; // xmm12_4
  float v20; // xmm13_4
  float v21; // xmm8_4
  float v22; // xmm14_4
  float v23; // xmm10_4
  float v24; // xmm9_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm2_4
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm5_4
  float v31; // xmm7_4
  float v32; // xmm12_4
  float v33; // xmm15_4
  float v34; // xmm0_4
  float v35; // xmm5_4
  float v36; // xmm3_4
  float v37; // xmm1_4
  float v38; // xmm8_4
  float v39; // xmm10_4
  float v40; // xmm9_4
  float v41; // xmm2_4
  float v42; // xmm8_4
  float v43; // xmm7_4
  float v44; // xmm10_4
  float v45; // xmm9_4
  float v46; // xmm15_4
  float v47; // xmm13_4
  float v48; // xmm14_4
  float v49; // xmm12_4
  float v50; // xmm6_4
  float v51; // xmm2_4
  float v52; // xmm3_4
  float v53; // xmm3_4
  float v54; // xmm5_4
  float v55; // xmm7_4
  float v56; // xmm6_4
  float v57; // xmm0_4
  float v58; // xmm2_4
  float v59; // xmm1_4
  float v60; // xmm4_4
  float v61; // xmm3_4
  float v62; // xmm4_4
  float v63; // xmm0_4
  float v64; // xmm4_4
  float v65; // xmm5_4
  float v66; // xmm3_4
  float v67; // xmm9_4
  float v68; // xmm8_4
  float v69; // xmm13_4
  float v70; // xmm14_4
  float v71; // xmm10_4
  float v72; // xmm3_4
  float v73; // xmm4_4
  float v74; // xmm5_4
  float v75; // xmm6_4
  bool v76; // cf
  float v77; // xmm3_4
  float v78; // xmm4_4
  float v79; // xmm5_4
  float v80; // xmm6_4
  float v81; // xmm3_4
  float v82; // xmm4_4
  float v83; // xmm5_4
  float v84; // xmm6_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003F0B0[32];
#define v86 (*(float (*))(void *)(sr_frame_14003F0B0 + 8)) /* [rsp+38h] */
#define v87 (*(float (*))(void *)(sr_frame_14003F0B0 + 12)) /* [rsp+3Ch] */
#define v88 (*(__int128 (*))(void *)(sr_frame_14003F0B0 + 16)) /* [rsp+40h] */

  *a3 = a6;
  v13 = a2[1];
  v14 = a7;
  v15 = a8;
  v16 = a5;
  v17 = *a5;
  v18 = a5[2];
  v19 = a2[2];
  v20 = a5[1];
  v21 = (float)(v18 * v13) - (float)(v20 * v19);
  v22 = *a2;
  v23 = (float)(*a5 * v19) - (float)(*a2 * v18);
  v24 = (float)(*a2 * v20) - (float)(*a5 * v13);
  v25 = (float)((float)(v23 * v23) + (float)(v21 * v21)) + (float)(v24 * v24);
  if ( v25 < 0.000015258789 )
  {
    v43 = a6;
  }
  else
  {
    v26 = (float)((float)(a4[1] * v20) + (float)(*a4 * v17)) + (float)(a4[2] * v18);
    v27 = (float)((float)(v13 * a7[1]) + (float)(v22 * *a7)) + (float)(v19 * a7[2]);
    v28 = (float)(v26 * v22) - (float)(v27 * v17);
    v29 = (float)(v26 * v13) - (float)(v27 * v20);
    v30 = (float)(v26 * v19) - (float)(v27 * v18);
    v31 = (float)((float)(v23 * v30) - (float)(v24 * v29)) * (float)(1.0 / v25);
    v32 = (float)((float)(v24 * v28) - (float)(v21 * v30)) * (float)(1.0 / v25);
    v33 = *a4 - v31;
    v34 = fsqrt(v25);
    v35 = (float)((float)(v21 * v29) - (float)(v23 * v28)) * (float)(1.0 / v25);
    v36 = a4[2] - v35;
    v37 = a4[1] - v32;
    v86 = v33;
    *(float *)&v88 = v36;
    v87 = v37;
    if ( v34 == 0.0 )
    {
      v38 = 0.0;
      v39 = 0.0;
      v40 = 0.0;
    }
    else
    {
      v38 = v21 * (float)(1.0 / v34);
      v39 = v23 * (float)(1.0 / v34);
      v40 = v24 * (float)(1.0 / v34);
    }
    v41 = (float)((float)(v39 * v37) + (float)(v38 * v33)) + (float)(v40 * v36);
    v42 = (float)(v38 * v41) + v31;
    v43 = a6;
    v44 = (float)(v39 * v41) + v32;
    v45 = (float)(v40 * v41) + v35;
    *a1 = v42;
    a1[1] = v44;
    a1[2] = v45;
    v46 = fsqrt(
            (float)((float)((float)(*a4 - v42) * (float)(*a4 - v42))
                  + (float)((float)(a4[1] - v44) * (float)(a4[1] - v44)))
          + (float)((float)(a4[2] - v45) * (float)(a4[2] - v45)));
    *(float *)&a5 = v46;
    if ( v46 < v43 )
    {
      v47 = v14[1];
      v48 = v14[2];
      v49 = *v14;
      v50 = v15[1] - v47;
      v51 = v15[2] - v48;
      v86 = *v15 - *v14;
      v52 = (float)((float)((float)(v44 - v47) * v51) - (float)((float)(v45 - v48) * v50)) * *a2;
      v87 = v50;
      *(float *)&v88 = v51;
      if ( (float)((float)(v52
                         + (float)((float)((float)((float)(v45 - v48) * v86) - (float)((float)(v42 - v49) * v51)) * a2[1]))
                 + (float)((float)((float)((float)(v42 - v49) * v50) - (float)((float)(v44 - v47) * v86)) * a2[2])) < 0.0 )
      {
        v43 = a6;
      }
      else
      {
        v53 = v44 - v15[1];
        v54 = v42 - *v15;
        v55 = *a9 - *v15;
        v56 = a9[1] - v15[1];
        v57 = v45 - v15[2];
        v58 = a9[2] - v15[2];
        v59 = v57 * v55;
        v60 = v53 * v58;
        v61 = v53 * v55;
        v62 = v60 - (float)(v57 * v56);
        v86 = v55;
        v43 = a6;
        v63 = v54 * v58;
        v64 = v62 * *a2;
        v65 = (float)(v54 * v56) - v61;
        v66 = a2[2];
        v87 = v56;
        *(float *)&v88 = v58;
        if ( (float)((float)(v64 + (float)((float)(v59 - v63) * a2[1])) + (float)(v65 * v66)) >= 0.0 )
        {
          v67 = v45 - a9[2];
          v68 = v42 - *a9;
          v69 = v47 - a9[1];
          v70 = v48 - a9[2];
          v71 = v44 - a9[1];
          v86 = v49 - *a9;
          v87 = v69;
          *(float *)&v88 = v70;
          if ( (float)((float)((float)((float)((float)(v71 * v70) - (float)(v67 * v69)) * *a2)
                             + (float)((float)((float)(v67 * v86) - (float)(v68 * v70)) * a2[1]))
                     + (float)((float)((float)(v68 * v69) - (float)(v71 * v86)) * v66)) >= 0.0 )
            *a3 = v46;
        }
      }
    }
  }
  if ( (unsigned int)sub_140077B30(&v86, v16, (float *)&a5, v14, v15, a4) )
  {
    v72 = v86;
    v73 = v87;
    v74 = *(float *)&v88;
    v75 = fsqrt(
            (float)((float)((float)(a4[1] - v87) * (float)(a4[1] - v87))
                  + (float)((float)(*a4 - v86) * (float)(*a4 - v86)))
          + (float)((float)(a4[2] - *(float *)&v88) * (float)(a4[2] - *(float *)&v88)));
    v76 = v75 < *a3;
    *(float *)&a5 = v75;
    if ( v76 )
    {
      *a1 = v86;
      a1[1] = v73;
      a1[2] = v74;
      *a2 = *a4 - v72;
      a2[1] = a4[1] - v73;
      a2[2] = a4[2] - v74;
      sub_14007A240((__int64)a2, a2);
      *a3 = v75;
    }
  }
  if ( (unsigned int)sub_140077B30(&v86, v16, (float *)&a5, v15, a9, a4) )
  {
    v77 = v86;
    v78 = v87;
    v79 = *(float *)&v88;
    v80 = fsqrt(
            (float)((float)((float)(a4[1] - v87) * (float)(a4[1] - v87))
                  + (float)((float)(*a4 - v86) * (float)(*a4 - v86)))
          + (float)((float)(a4[2] - *(float *)&v88) * (float)(a4[2] - *(float *)&v88)));
    v76 = v80 < *a3;
    *(float *)&a5 = v80;
    if ( v76 )
    {
      *a1 = v86;
      a1[1] = v78;
      a1[2] = v79;
      *a2 = *a4 - v77;
      a2[1] = a4[1] - v78;
      a2[2] = a4[2] - v79;
      sub_14007A240((__int64)a2, a2);
      *a3 = v80;
    }
  }
  if ( (unsigned int)sub_140077B30(&v86, v16, (float *)&a5, a9, v14, a4) )
  {
    v81 = v86;
    v82 = v87;
    v83 = *(float *)&v88;
    v84 = fsqrt(
            (float)((float)((float)(a4[1] - v87) * (float)(a4[1] - v87))
                  + (float)((float)(*a4 - v86) * (float)(*a4 - v86)))
          + (float)((float)(a4[2] - *(float *)&v88) * (float)(a4[2] - *(float *)&v88)));
    if ( v84 < *a3 )
    {
      *a1 = v86;
      a1[1] = v82;
      a1[2] = v83;
      *a2 = *a4 - v81;
      a2[1] = a4[1] - v82;
      a2[2] = a4[2] - v83;
      sub_14007A240((__int64)a2, a2);
      *a3 = v84;
    }
  }
  return v43 > *a3;
}
#undef v86
#undef v87
#undef v88


//----- (000000014003FA40) ----------------------------------------------------
unsigned int *           sub_14003FA40(int a1, int a2, float a3)
{
  __int64 v4; // rcx
  unsigned int *result; // rax
  int v6; // r9d
  int v7; // r10d
  __int64 v8; // r8

  if ( (unsigned int)a1 <= 0xFFE && (unsigned int)a2 <= 0xFFE && !dword_140404A6C[284024893] )
  {
    v4 = a1 + (a2 << 12);
    result = &dword_140404A6C[225391205];
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254388963] )
      *(float *)&dword_140404A6C[v4 + 254388963] = a3;
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254388964] )
      *(float *)&dword_140404A6C[v4 + 254388964] = a3;
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254393059] )
      *(float *)&dword_140404A6C[v4 + 254393059] = a3;
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254393060] )
      *(float *)&dword_140404A6C[v4 + 254393060] = a3;
    if ( a1 >= (int)dword_140404A6C[225391222]
      && a1 <= (int)dword_140404A6C[225391225]
      && a2 >= (int)dword_140404A6C[225391224]
      && a2 <= (int)dword_140404A6C[225391227] )
    {
      v6 = a1 + 1024;
      v7 = a2 + 1024;
      if ( (unsigned int)v6 <= 0xFFF && (unsigned int)v7 <= 0xFFF )
      {
        v8 = (v6 >> 2) + (v7 >> 2 << 10);
        *(_WORD *)(*(_QWORD *)&dword_140404A6C[272248185] + 2 * v8) &= ~(1 << ((v6 & 3) + 4 * (a2 & 3)));
        return (unsigned int *)((v6 & 3) + 4 * (a2 & 3u));
      }
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 181290050: using guessed type unsigned int;

//----- (000000014003FB90) ----------------------------------------------------
__int64            sub_14003FB90(int a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // xmm1_4
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 v18; // rcx
  float v19; // xmm0_4
  unsigned int v20; // xmm1_4
  __int64 v21; // rcx
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  __int64 v25; // rcx
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  __int64 v29; // rcx
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  __int64 v33; // rcx
  float v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  __int64 v37; // rcx
  float v38; // xmm0_4
  float v39; // xmm0_4
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 result; // rax

  v8 = a1;
  v9 = 2310LL * a1;
  v10 = 770LL * a1;
  v11 = (int)dword_140404A6C[v9 + 432531270];
  *(float *)&v12 = (float)((float)(*(float *)dword_1402B34F8 - 0.5) * a7) + a4;
  *(float *)&dword_140404A6C[3 * v10 + 432531271 + 3 * v11] = (float)((float)(*(float *)dword_1402B34F0 - 0.5) * a5)
                                                            + a2;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)((float)(*(float *)dword_1402B34F4 - 0.5) * a6)
                                                                                             + a3;
  v13 = *(float *)&dword_1402B34FC - 0.5;
  dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v12;
  v14 = (int)dword_140404A6C[v9 + 432531270];
  v15 = *(float *)&dword_1402B3500 - 0.5;
  dword_140404A6C[v9 + 432531270] = v14 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v14] = (float)(v13 * a5) + a2;
  v16 = *(float *)&dword_1402B3504 - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v15 * a6) + a3;
  v17 = (float)(*(float *)&dword_1402B350C - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v16 * a7) + a4;
  v18 = (int)dword_140404A6C[v9 + 432531270];
  v19 = *(float *)&dword_1402B3508 - 0.5;
  dword_140404A6C[v9 + 432531270] = v18 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v18] = (float)(v19 * a5) + a2;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v17 + a3;
  *(float *)&v20 = (float)((float)(*(float *)&dword_1402B3518 - 0.5) * a6) + a3;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)((float)(*(float *)&dword_1402B3510 - 0.5) * a7)
                                                                                             + a4;
  v21 = (int)dword_140404A6C[v9 + 432531270];
  v22 = *(float *)&dword_1402B3514 - 0.5;
  dword_140404A6C[v9 + 432531270] = v21 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v21] = (float)(v22 * a5) + a2;
  v23 = *(float *)&dword_1402B351C - 0.5;
  dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v20;
  v24 = (float)(*(float *)&dword_1402B3524 - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v23 * a7) + a4;
  v25 = (int)dword_140404A6C[v9 + 432531270];
  v26 = *(float *)&dword_1402B3520 - 0.5;
  dword_140404A6C[v9 + 432531270] = v25 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v25] = (float)(v26 * a5) + a2;
  v27 = *(float *)&dword_1402B3528 - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v24 + a3;
  v28 = (float)(*(float *)&dword_1402B3530 - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v27 * a7) + a4;
  v29 = (int)dword_140404A6C[v9 + 432531270];
  v30 = *(float *)&dword_1402B352C - 0.5;
  dword_140404A6C[v9 + 432531270] = v29 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v29] = (float)(v30 * a5) + a2;
  v31 = *(float *)&dword_1402B3534 - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v28 + a3;
  v8 *= 385;
  v32 = (float)(*(float *)&dword_1402B353C - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v31 * a7) + a4;
  v33 = (int)dword_140404A6C[v9 + 432531270];
  v34 = *(float *)&dword_1402B3538 - 0.5;
  dword_140404A6C[v9 + 432531270] = v33 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v33] = (float)(v34 * a5) + a2;
  v35 = *(float *)&dword_1402B3540 - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v32 + a3;
  v36 = (float)(*(float *)&dword_1402B3548 - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v35 * a7) + a4;
  v37 = (int)dword_140404A6C[v9 + 432531270];
  v38 = *(float *)&dword_1402B3544 - 0.5;
  dword_140404A6C[v9 + 432531270] = v37 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v37] = (float)(v38 * a5) + a2;
  v39 = *(float *)&dword_1402B354C - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v36 + a3;
  v40 = v10 + (int)dword_140404A6C[v9 + 432531270];
  LODWORD(v10) = v11 + dword_1402B3660[0];
  *(float *)&dword_140404A6C[3 * v40 + 432531273] = (float)(v39 * a7) + a4;
  v41 = (int)dword_140404A6C[v9 + 432532039];
  ++dword_140404A6C[v9 + 432531270];
  dword_140404A6C[6 * v8 + 432532041 + 6 * v41] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3664[0];
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3668[0];
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B366C[0];
  LODWORD(v10) = v11 + dword_1402B3670;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v42 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v42 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v42] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3674;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3678;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B367C;
  LODWORD(v10) = v11 + dword_1402B3680;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v43 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v43 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v43] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3684;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3688;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B368C;
  LODWORD(v10) = v11 + dword_1402B3690;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v44 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v44 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v44] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3694;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3698;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B369C;
  LODWORD(v10) = v11 + dword_1402B36A0;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v45 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v45 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v45] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36A4;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36A8;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36AC;
  LODWORD(v10) = v11 + dword_1402B36B0;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v46 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v46 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v46] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36B4;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36B8;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36BC;
  result = v8 + (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[6 * result + 432532040] = 4;
  ++dword_140404A6C[v9 + 432532039];
  return result;
}
