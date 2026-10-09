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

//----- (000000014002A680) ----------------------------------------------------
__int64            sub_14002A680()
{
  extern void world_build_race_track(void);
  /* src/engine/world_streets.c; the original's return value is the street adder's, no caller reads it. */
  world_build_race_track();
  return 0;
}

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
  extern void collision_triangle_weights(float *weights, const float *point, const float *a, const float *b,
                                         const float *c);
  /* src/engine/collision.c; the original returns a5 (a leftover register). */
  collision_triangle_weights(a1, a2, a3, a4, a5);
  return a5;
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
  extern int collision_sphere_triangle_face(float *point, float *normal, float *distance, const float *from,
                                            const float *to, float radius, const float *a, const float *b,
                                            const float *c);
  /* src/engine/collision.c */
  return collision_sphere_triangle_face(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

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
