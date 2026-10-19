#include "shared_client.h"
#include "../engine/physics.h"
#include "../engine/physics_kernels.h"

//----- (0000000140020000) ----------------------------------------------------
unsigned int *sub_140020000()
{
  unsigned int *result;
  int v1;
  unsigned int *v2;
  int v3;
  unsigned int *v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  _UNKNOWN *retaddr;

  result = (unsigned int *)&retaddr;
  v1 = 0;
  if ( (int)g_1726DA088 > 0 )
  {
    v2 = &g_1726DA094;
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
    while ( v1 < (int)g_1726DA088 );
  }
  return result;
}

//----- (0000000140020130) ----------------------------------------------------
__int64            sub_140020130(int a1)
{
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  int i;
  unsigned int v9;
  bool v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int j;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
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
        sub_14000F830(0, v14, v15 + 1, v16, g_14500A748 | 0x80000000, &v32);
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
      sub_14000F830(0, v17 - 1, v18 + 1, j, g_14500A748 | 0x80000000, &v32);
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
        sub_14000F830(0, v22++, v21 + 1, v20, g_14500A748 | 0x80000000, &v32);
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
        sub_14000F830(0, v23++, v25 + 1, v24 - 1, g_14500A748 | 0x80000000, &v32);
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

//----- (0000000140023A20) ----------------------------------------------------
void            sub_140023A20(int a1, int a2)
{
  __int64 v3;
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;

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

//----- (0000000140027D00) ----------------------------------------------------
__int64 sub_140027D00()
{
  int v0;
  int v1;
  int v2;
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  unsigned int *v8;
  __int128 v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  unsigned int *v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  unsigned int *v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v38;

  v0 = g_1AE1C9500;
  v1 = 0;
  v2 = g_1AE1C94FC;
  v3 = g_1AE1C94F8;
  if ( (int)g_1AE1C9500 > 0 )
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
              v3 = g_1AE1C94F8;
            }
            while ( v7 <= (int)g_1AE1C94F8 );
            v2 = g_1AE1C94FC;
          }
          ++v5;
          ++v6;
        }
        while ( v5 <= v2 );
        v0 = g_1AE1C9500;
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
      v0 = g_1AE1C9500;
      ++v11;
    }
    while ( v11 < (int)g_1AE1C9500 );
    v2 = g_1AE1C94FC;
    v3 = g_1AE1C94F8;
  }
  v16 = 0;
  g_1AFFC985C = *(_QWORD *)&g_1AF0C9520;
  g_1AFFC9874 = g_1AF0C9538;
  g_1AFFC988C = g_1AF0C9550;
  g_1AFFC98A4 = g_1AF0C9568;
  g_1AFFC98BC = g_1AF0C9580;
  g_1AFFC98D4 = g_1AF0C9598;
  g_1AFFC98EC = g_1AF0C95B0;
  g_1AFFC9904 = g_1AF0C95C8;
  g_1AFFC991C = g_1AF0C95E0;
  g_1AFFC9934 = g_1AF0C95F8;
  g_1AFFC994C = g_1AF0C9610;
  g_1AFFC9964 = g_1AF0C9628;
  g_1AFFC997C = g_1AF0C9640;
  g_1AFFC9994 = g_1AF0C9658;
  g_1AFFC99AC = g_1AF0C9670;
  g_1AFFC99C4 = g_1AF0C9688;
  v38 = 0;
  *(_OWORD *)&g_1AFFC984C = *(_OWORD *)&g_1AF0C9510;
  *(_OWORD *)&g_1AFFC9864 = *(_OWORD *)&g_1AF0C9528;
  *(_OWORD *)&g_1AFFC987C = *(_OWORD *)&g_1AF0C9540;
  *(_OWORD *)&g_1AFFC9894 = *(_OWORD *)&g_1AF0C9558;
  *(_OWORD *)&g_1AFFC98AC = *(_OWORD *)&g_1AF0C9570;
  *(_OWORD *)&g_1AFFC98C4 = *(_OWORD *)&g_1AF0C9588;
  *(_OWORD *)&g_1AFFC98DC = *(_OWORD *)&g_1AF0C95A0;
  *(_OWORD *)&g_1AFFC98F4 = *(_OWORD *)&g_1AF0C95B8;
  *(_OWORD *)&g_1AFFC990C = *(_OWORD *)&g_1AF0C95D0;
  *(_OWORD *)&g_1AFFC9924 = *(_OWORD *)&g_1AF0C95E8;
  *(_OWORD *)&g_1AFFC993C = *(_OWORD *)&g_1AF0C9600;
  *(_OWORD *)&g_1AFFC9954 = *(_OWORD *)&g_1AF0C9618;
  *(_OWORD *)&g_1AFFC996C = *(_OWORD *)&g_1AF0C9630;
  *(_OWORD *)&g_1AFFC9984 = *(_OWORD *)&g_1AF0C9648;
  *(_OWORD *)&g_1AFFC999C = *(_OWORD *)&g_1AF0C9660;
  *(_OWORD *)&g_1AFFC99B4 = *(_OWORD *)&g_1AF0C9678;
  if ( v0 > 0 )
  {
    v17 = g_14500A708;
    v18 = g_14500A704;
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
                  v2 = g_1AE1C94FC;
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
                  v2 = g_1AE1C94FC;
                }
                if ( (v29 & 0xE0000000) == 0x80000000 )
                {
                  v32 = v24 + v2 - v21;
                  if ( !dword_140404A6C[15 * v32 + 460788380] )
                  {
                    dword_140404A6C[15 * v32 + 460788380] = -1073741824;
                    v2 = g_1AE1C94FC;
                  }
                }
                dword_140404A6C[15 * v24 + 460788378 + 15 * (v2 - v21)] = *(v25 - 6);
                dword_140404A6C[15 * v24 + 460788381 + 15 * (g_1AE1C94FC - v21)] = *(v25 - 2);
                dword_140404A6C[15 * v24 + 460788383 + 15 * (g_1AE1C94FC - v21)] = *(v25 - 1);
                v33 = v25[8];
                v34 = 15 * (v24 + g_1AE1C94FC - v21);
                if ( v33 )
                {
                  dword_140404A6C[v34 + 460788392] = v33;
                  dword_140404A6C[15 * v24 + 460788392 + 15 * (g_1AE1C94FC - v21)] &= 0xFCFFFFFF;
                  dword_140404A6C[15 * v24 + 460788392 + 15 * (g_1AE1C94FC - v21)] |= ((v33 & 0xFF000000) + 0x1000000) & 0x3000000;
                }
                else
                {
                  dword_140404A6C[v34 + 460788392] = 0;
                }
                v2 = g_1AE1C94FC;
              }
              ++v23;
              v35 = v24 + v2 - v21;
              v24 += 64;
              v36 = 15 * v35;
              LODWORD(v35) = *(v25 - 3);
              v25 += 15;
              dword_140404A6C[v36 + 460788397] = v35;
              v3 = g_1AE1C94F8;
              v2 = g_1AE1C94FC;
            }
            while ( v23 <= (int)g_1AE1C94F8 );
          }
          ++v21;
          ++v22;
        }
        while ( v21 <= v2 );
        v0 = g_1AE1C9500;
        v16 = v38;
      }
      ++v16;
      v20 += 4096;
      v19 += 64;
      v38 = v16;
    }
    while ( v16 < v0 );
  }
  g_1AF0C951C = g_1AFFC9860;
  g_1AF0C9510 = v2 - g_1AFFC9854 - g_1AFFC9860;
  g_1AF0C9518 = g_1AFFC984C;
  g_1AF0C9524 = g_1AFFC9858;
  g_1AF0C9534 = g_1AFFC9878;
  g_1AF0C9528 = v2 - g_1AFFC986C - g_1AFFC9878;
  g_1AF0C9530 = g_1AFFC9864;
  g_1AF0C953C = g_1AFFC9870;
  g_1AF0C954C = g_1AFFC9890;
  g_1AF0C9540 = v2 - g_1AFFC9890 - g_1AFFC9884;
  g_1AF0C9548 = g_1AFFC987C;
  g_1AF0C9554 = g_1AFFC9888;
  g_1AF0C9564 = g_1AFFC98A8;
  g_1AF0C9558 = v2 - g_1AFFC98A8 - g_1AFFC989C;
  g_1AF0C9560 = g_1AFFC9894;
  g_1AF0C956C = g_1AFFC98A0;
  g_1AF0C957C = g_1AFFC98C0;
  g_1AF0C9570 = v2 - g_1AFFC98C0 - g_1AFFC98B4;
  g_1AF0C9578 = g_1AFFC98AC;
  g_1AF0C9584 = g_1AFFC98B8;
  g_1AF0C9594 = g_1AFFC98D8;
  g_1AF0C9588 = v2 - g_1AFFC98D8 - g_1AFFC98CC;
  g_1AF0C9590 = g_1AFFC98C4;
  g_1AF0C959C = g_1AFFC98D0;
  g_1AF0C95AC = g_1AFFC98F0;
  g_1AF0C95A0 = v2 - g_1AFFC98F0 - g_1AFFC98E4;
  g_1AF0C95A8 = g_1AFFC98DC;
  g_1AF0C95B4 = g_1AFFC98E8;
  g_1AF0C95C4 = g_1AFFC9908;
  g_1AF0C95B8 = v2 - g_1AFFC9908 - g_1AFFC98FC;
  g_1AF0C95C0 = g_1AFFC98F4;
  g_1AF0C95CC = g_1AFFC9900;
  g_1AF0C95DC = g_1AFFC9920;
  g_1AE1C94F8 = v2;
  g_1AF0C95D0 = v2 - g_1AFFC9920 - g_1AFFC9914;
  g_1AF0C95D8 = g_1AFFC990C;
  g_1AF0C95E4 = g_1AFFC9918;
  g_1AF0C95F4 = g_1AFFC9938;
  g_1AF0C95E8 = v2 - g_1AFFC9938 - g_1AFFC992C;
  g_1AF0C95F0 = g_1AFFC9924;
  g_1AF0C95FC = g_1AFFC9930;
  g_1AF0C960C = g_1AFFC9950;
  g_1AF0C9600 = v2 - g_1AFFC9950 - g_1AFFC9944;
  g_1AF0C9608 = g_1AFFC993C;
  g_1AF0C9614 = g_1AFFC9948;
  g_1AF0C9624 = g_1AFFC9968;
  g_1AF0C9618 = v2 - g_1AFFC9968 - g_1AFFC995C;
  g_1AF0C9620 = g_1AFFC9954;
  g_1AF0C962C = g_1AFFC9960;
  g_1AF0C963C = g_1AFFC9980;
  g_1AF0C9630 = v2 - g_1AFFC9980 - g_1AFFC9974;
  g_1AF0C9638 = g_1AFFC996C;
  g_1AF0C9644 = g_1AFFC9978;
  g_1AF0C9654 = g_1AFFC9998;
  g_1AF0C9648 = v2 - g_1AFFC998C - g_1AFFC9998;
  g_1AF0C9650 = g_1AFFC9984;
  g_1AF0C965C = g_1AFFC9990;
  g_1AF0C966C = g_1AFFC99B0;
  g_1AF0C9660 = v2 - g_1AFFC99A4 - g_1AFFC99B0;
  g_1AF0C9668 = g_1AFFC999C;
  g_1AF0C9674 = g_1AFFC99A8;
  g_1AF0C9684 = g_1AFFC99C8;
  g_1AF0C9678 = v2 - g_1AFFC99BC - g_1AFFC99C8;
  g_1AF0C9680 = g_1AFFC99B4;
  g_1AF0C968C = g_1AFFC99C0;
  g_1AE1C94FC = v3;
  return g_1AFFC99C0;
}

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
  int v0;
  __int64 v1;
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  float *v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  int v25;
  int v26;
  float v27;
  float v28;
  float v29;
  bool v30;
  __int64 v31;
  float v32;
  float v33;
  int v34;
  int v35;
  int v36;
  float v37;
  int v38;
  int v39;
  unsigned int *v40;
  __int64 v41;
  unsigned int *v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  float *v47;
  int *v48;
  float *v49;
  __int64 v50;
  unsigned int *v51;
  unsigned int v52;
  int v53;
  unsigned int v54;
  int v55;
  int v56;
  __int64 v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  __int64 v65;
  unsigned int v66;
  unsigned int v67;
  float v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  int v76;
  signed int v77;
  float v78;
  float v79;
  float v80;
  float v81;
  __int64 v82;
  float v83;
  __int64 v84;
  float v85;
  float v86;
  float v87;
  float v88;
  signed int v89;
  __int64 v90;
  float v91;
  float v92;
  float v93;
  int v94;
  int v95;
  __int64 v96;
  __int64 v97;
  float v98;
  unsigned int v99;
  __int64 v100;
  __int64 v101;
  int *v102;
  __int64 v103;
  __int64 v104;
  unsigned int v105;
  unsigned int v106;
  unsigned int v107;
  __int64 v108;
  unsigned int *v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  unsigned int v113;
  __int64 v114;
  __int64 v115;
  int v116;
  float v117;
  int v118;
  float v119;
  float v120;
  int v121;
  int v122;
  unsigned int v123;
  __int64 v124;
  __int64 v126;
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
  if ( (int)world_bullet_count > 0 )
  {
    v1 = 0;
    v2 = game_connected;
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
      *(unsigned int *)((char *)&g_1A8A879E0 + v9) = dword_140404A6C[23 * v1 + 437914586];
      *(unsigned int *)((char *)&g_1A8A879E4 + v9) = dword_140404A6C[23 * v1 + 437914587];
      *(unsigned int *)((char *)&g_1A8A879E8 + v9) = dword_140404A6C[23 * v1 + 437914588];
      *(float *)((char *)&g_1A8A879F0 + v9) = *(float *)&dword_140404A6C[23 * v1 + 437914593]
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
      *(float *)((char *)&g_1A8A879D4 + v9) = v22 + *(float *)((char *)&g_1A8A879D4 + v9);
      *(float *)((char *)&g_1A8A879D8 + v9) = *(float *)((char *)&g_1A8A879F0 + v9)
                                                           + *(float *)((char *)&g_1A8A879D8 + v9);
      *(float *)((char *)&g_1A8A879DC + v9) = *(float *)((char *)&g_1A8A879F4 + v9)
                                                           + *(float *)((char *)&g_1A8A879DC + v9);
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
        v40 = &g_18329E310;
        do
        {
          if ( *(v40 - 2) )
          {
            if ( sub_1400DB060(
                   v0,
                   (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 92LL * v128 + 1755871712),
                   (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 92LL * v128 + 1755871700),
                   0.0)
              && v28 > (world_unknown_151a84898) )
            {
              v41 = (int)*v40;
              if ( ((_DWORD)v41 != *(unsigned int *)((char *)&g_1A8A879C8 + v9)
                 || g_151A848B4 == 7
                 || (int)g_151A848B4 <= 4
                 || (int)g_151A848B4 >= 10)
                && ((_DWORD)v41 == -1 || !dword_140404A6C[3597 * v41 + 71856277]) )
              {
                v3 = g_151A84880;
                v26 = v0;
                v4 = *(unsigned int *)&ragdoll_unknown_height;
                v28 = (world_unknown_151a84898);
                v5 = g_151A84888;
                v6 = *(unsigned int *)&g_151A8488C;
                v7 = *(unsigned int *)&g_151A84890;
                v8 = *(unsigned int *)&g_151A84894;
                v129 = g_151A848B4;
              }
            }
          }
          ++v0;
          v40 += 7166;
        }
        while ( v0 < 256 );
        v10 = v136;
        v42 = &g_15F2D9200;
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
            && v28 > (world_unknown_151a84898) )
          {
            v26 = -1;
            v3 = g_151A84880;
            v28 = (world_unknown_151a84898);
            v4 = *(unsigned int *)&ragdoll_unknown_height;
            v5 = g_151A84888;
            v6 = *(unsigned int *)&g_151A8488C;
            v7 = *(unsigned int *)&g_151A84890;
            v8 = *(unsigned int *)&g_151A84894;
            v134 = g_151A848AC;
            v133 = g_151A848B0;
            v129 = g_151A848B4;
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
        && v28 > (world_unknown_151a84898) )
      {
        break;
      }
      v2 = game_connected;
      v58 = game_tick;
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
                                   * *(float *)((char *)&g_1A8A879CC + v9))
                           - 2.0);
          if ( v70 > 0 )
          {
            v71 = (__int64)(int)world_event_count++ << 7;
            HIWORD(world_event_count) = 0;
            *(unsigned int *)((char *)&g_1873DE460 + v71) = 1;
            *(unsigned int *)((char *)&g_1873DE464 + v71) = v58;
            *(unsigned int *)((char *)&g_1873DE468 + v71) = v3;
            *(unsigned int *)((char *)&g_1873DE46C + v71) = v4;
            *(unsigned int *)((char *)&g_1873DE470 + v71) = v5;
            *(unsigned int *)((char *)&g_1873DE474 + v71) = v6;
            *(unsigned int *)((char *)&g_1873DE478 + v71) = v7;
            *(unsigned int *)((char *)&g_1873DE47C + v71) = v8;
            *(unsigned int *)((char *)&g_1873DE480 + v71) = 0;
            *(unsigned int *)((char *)&g_1873DE484 + v71) = 1;
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
          v72 = *(int *)((char *)&g_1A8A879C8 + v9);
          if ( (_DWORD)v72 != -1 )
          {
            v73 = dword_140404A6C[7166 * v26 + 280651305];
            if ( v73 != -1 )
              sub_140116D80(v72, v73, v70);
          }
          if ( game_type != 5 && (_DWORD)v72 != -1 )
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
          v79 = *(float *)((char *)&g_1A8A879CC + v9);
          v80 = v10[1];
          v81 = v10[2];
          v2 = game_connected;
          v82 = v75 * 4 + 312LL * v129;
          v58 = game_tick;
          v83 = fmaxf(*(float *)((char *)&g_18329E5AC + v82), 6.0);
          v84 = 47LL * *(int *)((char *)&g_18329E528 + v82);
          *(unsigned int *)((char *)&g_1A8A879C4 + v9) = 0;
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
            v116 = *(unsigned int *)((char *)&g_15F2DCB54 + v115);
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
                                        * *(float *)((char *)&g_1A8A879CC + v9))
                                - 2.0);
              if ( v121 > 0 )
                v118 = v121;
              v122 = v116 - v118;
              *(unsigned int *)((char *)&g_15F2DCB54 + v115) = v122;
              if ( v122 <= 0 )
              {
                *(unsigned int *)((char *)&g_15F2DCB4C + v115) = 1;
                *(unsigned int *)((char *)&g_15F2DCB50 + v115) |= 1u;
                *(float *)((char *)&g_15F2DCB78 + v115) = *(float *)((char *)&g_15F2DCB78
                                                                                  + v115)
                                                                       * 0.75;
                if ( v2 )
                {
                  v123 = world_event_count;
                  v124 = (__int64)(int)world_event_count << 7;
                  *(unsigned int *)((char *)&g_1873DE460 + v124) = 4;
                  *(unsigned int *)((char *)&g_1873DE464 + v124) = v58;
                  *(unsigned int *)((char *)&g_1873DE480 + v124) = v89;
                  *(unsigned int *)((char *)&g_1873DE484 + v124) = 1;
                  *(unsigned int *)((char *)&g_1873DE488 + v124) = v77;
                  *(unsigned int *)((char *)&g_1873DE468 + v124) = v3;
                  *(unsigned int *)((char *)&g_1873DE46C + v124) = v4;
                  *(unsigned int *)((char *)&g_1873DE470 + v124) = v5;
                  if ( !v10 )
                  {
                    v120 = 0.0;
                    v117 = 0.0;
                    v119 = 0.0;
                  }
                  *(float *)((char *)&g_1873DE474 + v124) = v119;
                  *(float *)((char *)&g_1873DE478 + v124) = v117;
                  *(float *)((char *)&g_1873DE47C + v124) = v120;
                  world_event_count = v123 + 1;
                  HIWORD(world_event_count) = 0;
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
                                     * *(float *)((char *)&g_1A8A879CC + v9))
                             - 2.0);
            if ( v95 > 0 )
              v94 = v95;
            v96 = (int)dword_140404A6C[5210 * v31 + 129716710];
            if ( !dword_140404A6C[24944 * v96 + 346707717] )
            {
              v97 = 20840 * v31 + ((__int64)v133 << 6);
              if ( *(unsigned int *)((char *)&g_15F2D9A34 + v97) == 1 )
              {
                v98 = *(float *)((char *)&g_15F2D9A30 + v97);
                if ( v98 < 8.0 )
                  *(unsigned int *)((char *)&g_15F2D9A38 + v97) = (int)(float)((float)*(int *)((char *)&g_15F2D9A38 + v97)
                                                                                            - (float)(8.0 - v98));
                if ( *(int *)((char *)&g_15F2D9A38 + v97) <= 0 )
                {
                  if ( v2 )
                  {
                    v99 = world_event_count;
                    v100 = (__int64)(int)world_event_count << 7;
                    *(unsigned int *)((char *)&g_1873DE460 + v100) = 4;
                    *(unsigned int *)((char *)&g_1873DE464 + v100) = v58;
                    *(unsigned int *)((char *)&g_1873DE480 + v100) = v89;
                    *(unsigned int *)((char *)&g_1873DE484 + v100) = 0;
                    *(unsigned int *)((char *)&g_1873DE488 + v100) = v90;
                    *(unsigned int *)((char *)&g_1873DE468 + v100) = v3;
                    *(unsigned int *)((char *)&g_1873DE46C + v100) = v4;
                    *(unsigned int *)((char *)&g_1873DE470 + v100) = v5;
                    if ( !v10 )
                    {
                      v93 = 0.0;
                      v91 = 0.0;
                      v92 = 0.0;
                    }
                    *(float *)((char *)&g_1873DE474 + v100) = v92;
                    *(float *)((char *)&g_1873DE478 + v100) = v91;
                    *(float *)((char *)&g_1873DE47C + v100) = v93;
                    world_event_count = v99 + 1;
                    HIWORD(world_event_count) = 0;
                  }
                  *(unsigned int *)((char *)&g_15F2D9A38 + v97) = 0;
                }
                goto LABEL_111;
              }
              if ( v2 )
              {
                v101 = (__int64)(int)world_event_count++ << 7;
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
                v101 = (__int64)(int)world_event_count++ << 7;
LABEL_109:
                *(unsigned int *)((char *)&g_1873DE460 + v101) = 1;
                *(unsigned int *)((char *)&g_1873DE464 + v101) = v58;
                *(unsigned int *)((char *)&g_1873DE468 + v101) = v3;
                *(unsigned int *)((char *)&g_1873DE46C + v101) = v4;
                *(unsigned int *)((char *)&g_1873DE470 + v101) = v5;
                *(unsigned int *)((char *)&g_1873DE474 + v101) = v6;
                *(unsigned int *)((char *)&g_1873DE478 + v101) = v7;
                *(unsigned int *)((char *)&g_1873DE47C + v101) = v8;
                *(unsigned int *)((char *)&g_1873DE480 + v101) = 0;
                *(unsigned int *)((char *)&g_1873DE484 + v101) = 2;
                HIWORD(world_event_count) = 0;
              }
LABEL_110:
              sub_14000B650(v89, v94);
              v2 = game_connected;
              goto LABEL_111;
            }
            if ( v2 )
            {
              v113 = world_event_count;
              v114 = (__int64)(int)world_event_count << 7;
              *(unsigned int *)((char *)&g_1873DE460 + v114) = 4;
              *(unsigned int *)((char *)&g_1873DE464 + v114) = v58;
              *(unsigned int *)((char *)&g_1873DE480 + v114) = v89;
              *(unsigned int *)((char *)&g_1873DE484 + v114) = 0;
              *(unsigned int *)((char *)&g_1873DE488 + v114) = v90;
              *(unsigned int *)((char *)&g_1873DE468 + v114) = v3;
              *(unsigned int *)((char *)&g_1873DE46C + v114) = v4;
              *(unsigned int *)((char *)&g_1873DE470 + v114) = v5;
              if ( !v10 )
              {
                v93 = 0.0;
                v91 = 0.0;
                v92 = 0.0;
              }
              *(float *)((char *)&g_1873DE474 + v114) = v92;
              *(float *)((char *)&g_1873DE478 + v114) = v91;
              *(float *)((char *)&g_1873DE47C + v114) = v93;
              world_event_count = v113 + 1;
              HIWORD(world_event_count) = 0;
            }
            dword_140404A6C[5210 * v31 + 129719268 + v90] = 1;
          }
LABEL_111:
          *(unsigned int *)((char *)&g_1A8A879C4 + v9) = 0;
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
          *(unsigned int *)((char *)&g_1A8A879C4 + v9) = 0;
        }
        v0 = 0;
      }
      v105 = world_effect_count;
      v106 = dword_140404A6C[6 * *(unsigned int *)((char *)&g_1A8A879C0 + v9) + 437914199];
      if ( (int)world_effect_count < 0x4000 )
      {
        v107 = *(unsigned int *)((char *)&g_1A8A879D4 + v9);
        v108 = 37LL * (int)world_effect_count;
        dword_140404A6C[v108 + 432826949] = 5;
        dword_140404A6C[v108 + 432826952] = v107;
        dword_140404A6C[v108 + 432826953] = *(unsigned int *)((char *)&g_1A8A879D8 + v9);
        dword_140404A6C[v108 + 432826954] = *(unsigned int *)((char *)&g_1A8A879DC + v9);
        v109 = (unsigned int *)((char *)&g_1A8A879E0 + v9);
        if ( (char *)&g_1A8A879E0 + v9 )
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
        world_effect_count = v105 + 1;
      }
      v1 = v137 + 1;
      ++v128;
      ++v137;
      if ( v128 >= (int)world_bullet_count )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    v2 = game_connected;
    v26 = -1;
    v3 = g_151A84880;
    v4 = *(unsigned int *)&ragdoll_unknown_height;
    v5 = g_151A84888;
    v6 = *(unsigned int *)&g_151A8488C;
    v7 = *(unsigned int *)&g_151A84890;
    v8 = *(unsigned int *)&g_151A84894;
    v130 = -1;
    v131 = -1;
    v132 = -1;
    if ( game_connected )
    {
      v52 = g_151A848E0;
      if ( item_hit_block_part == -1 )
      {
        v59 = item_hit_layer;
        v60 = g_151A848F0;
        v61 = g_151A848DC;
        v62 = g_151A848D8;
        if ( item_hit_layer > 3
          || (g_151A848D8 & 0x80000000) != 0
          || (g_151A848F0 & 0xE0000000) != 0x80000000
          || (g_151A848F4 & 0x10000) == 0 )
        {
          v58 = game_tick;
          v0 = 0;
          v69 = (__int64)(int)world_event_count++ << 7;
          HIWORD(world_event_count) = 0;
          *(unsigned int *)((char *)&g_1873DE460 + v69) = 1;
          *(unsigned int *)((char *)&g_1873DE464 + v69) = v58;
          *(unsigned int *)((char *)&g_1873DE468 + v69) = v3;
          *(unsigned int *)((char *)&g_1873DE46C + v69) = v4;
          *(unsigned int *)((char *)&g_1873DE470 + v69) = v5;
          *(unsigned int *)((char *)&g_1873DE474 + v69) = v6;
          *(unsigned int *)((char *)&g_1873DE478 + v69) = v7;
          *(unsigned int *)((char *)&g_1873DE47C + v69) = v8;
          *(_QWORD *)((char *)&g_1873DE480 + v69) = 0;
          goto LABEL_57;
        }
        v63 = world_event_count;
        v58 = game_tick;
        v64 = LOWORD(g_151A848F4);
        v65 = (__int64)(int)world_event_count << 7;
        *(unsigned int *)((char *)&g_1873DE460 + v65) = 16;
        *(unsigned int *)((char *)&g_1873DE464 + v65) = v58;
        *(unsigned int *)((char *)&g_1873DE480 + v65) = v59 + (v62 << 16);
        *(unsigned int *)((char *)&g_1873DE484 + v65) = v61 + (v52 << 16);
        *(unsigned int *)((char *)&g_1873DE488 + v65) = v60;
        *(unsigned int *)((char *)&g_1873DE48C + v65) = v64;
        *(unsigned int *)((char *)&g_1873DE468 + v65) = v3;
        *(unsigned int *)((char *)&g_1873DE46C + v65) = v4;
        *(unsigned int *)((char *)&g_1873DE470 + v65) = v5;
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
        *(float *)((char *)&g_1873DE474 + v65) = v68;
        *(unsigned int *)((char *)&g_1873DE478 + v65) = v67;
        *(unsigned int *)((char *)&g_1873DE47C + v65) = v66;
        world_event_count = v63 + 1;
        HIWORD(world_event_count) = 0;
        sub_140016E30(v59, v62, v61, v52, v60 | (0x10000 << v64));
        v9 = v135;
LABEL_56:
        v0 = 0;
LABEL_57:
        v31 = v132;
        *(unsigned int *)((char *)&g_1A8A879D4 + v9) = v3;
        *(unsigned int *)((char *)&g_1A8A879D8 + v9) = v4;
        *(unsigned int *)((char *)&g_1A8A879DC + v9) = v5;
        *(unsigned int *)((char *)&g_1A8A879C4 + v9) = 0;
        goto LABEL_68;
      }
      v53 = sub_1400169B0(
              item_hit_layer,
              g_151A848D8,
              g_151A848DC,
              g_151A848E0);
      v54 = item_hit_block;
      v55 = v53;
      if ( (int)dword_140404A6C[948 * item_hit_block + 272299416] > 0 )
      {
        do
        {
          if ( !_bittest(&v55, v0) )
          {
            v56 = sub_1400CDBD0(
                    v54 + (item_hit_block_turn << 24),
                    v0,
                    item_hit_layer,
                    g_151A848D8,
                    g_151A848DC,
                    g_151A848E0);
            if ( v56 != -1 && v0 == item_hit_block_part )
            {
              v57 = 1760LL * v56;
              if ( dword_140404A6C[v57 + 278845898] == 45 )
                dword_140404A6C[v57 + 278845971] = 0;
            }
            v54 = item_hit_block;
          }
          ++v0;
        }
        while ( v0 < (int)dword_140404A6C[948 * v54 + 272299416] );
        v2 = game_connected;
      }
    }
    v58 = game_tick;
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

//----- (000000014002CE50) ----------------------------------------------------
__int64 sub_14002CE50()
{
  /* Clean implementation: src/engine/world_bullets.c, checked against the original executable
     (tools/native-compare suite bulletexpire). This wrapper keeps the entry point the recompiled callers use. */
  extern void world_expire_bullets(void);
  world_expire_bullets();
  return world_bullet_count; /* value the original leaves in EAX */
}

//----- (000000014002CF10) ----------------------------------------------------
float *           sub_14002CF10(__int64 a1, float *a2, __int64 a3, float *a4, float *a5)
{
  return (float *)(void *)physics_apply_inverse_inertia((float *)a1, a2, a4, a5);
}

//----- (000000014002D050) ----------------------------------------------------
float            sub_14002D050(float *a1, float *a2, float *a3)
{
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  double v20;
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

//----- (000000014002D2D0) ----------------------------------------------------
__m128 *           sub_14002D2D0(__m128 *a1, __m128 *a2, __int64 a3, __int64 a4, __m128 *a5)
{
  return (__m128 *)(void *)physics_apply_inverse_inertia4((float *)a1, (const float *)a2, (const float *)a4, (const float *)a5);
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
  float work = physics_limit_slide(a1, a2, a3);
  /* The client carries the native float result in the low word of a double. */
  return COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(work));
}

//----- (000000014002D9B0) ----------------------------------------------------
double            sub_14002D9B0(float *a1, float *a2, float a3, float a4)
{
  float work = physics_limit_slide_capped(a1, a2, a3, a4);
  return COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(work));
}

//----- (000000014002E730) ----------------------------------------------------
__int64            sub_14002E730(__int64 a1, int a2, __int64 a3, float *a4)
{
  __int64 v4;
  __int64 result;
  signed __int64 v7;
  signed int v8;
  __int64 v9;
  __int64 v10;
  float *v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float *v15;
  __int64 v16;
  __int64 v17;
  float *v18;
  float v19;
  float *v20;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  int v39;
  __int64 v40;
  __int64 v41;
  float *v42;
  float v43;
  __int64 v44;
  float *v45;
  __int64 v46;
  __int64 v47;
  float *v48;
  __int64 v49;
  __int64 v50;
  float *v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  __int64 v71;
  __m128 v72;
  __m128 v73;
  __m128 v74;
  __m128 v75;
  __m128 v76;
  unsigned __int64 v77;
  __m128 v78;
  __m128 v79;
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

//----- (000000014002EDF0) ----------------------------------------------------
void            sub_14002EDF0(int a1, __int64 a2)
{
  __m128 v2;
  __int64 v4;
  float v5;
  float v6;
  double v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  unsigned int v14;
  float v15;
  float v16;
  unsigned int v17;

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

//----- (0000000140030590) ----------------------------------------------------
__int64            sub_140030590(int a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int *v5;
  float *v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  float *v12;
  float v13;
  float v14;
  __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  float v39;
  __int64 v40;
  float v41;
  double v42;
  double v43;
  double v44;
  double v45;
  __int128 v46;
  float v47;
  float v48;
  float v49;
  float *v50;
  __int64 v51;
  double v52;
  double v53;
  double v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  double v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  double v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  double v89;
  __int64 v90;
  double v91;
  double v92;
  __int64 v93;
  double v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  double v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
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
  if ( local_player == -1 )
    goto LABEL_40;
  v1 = (int)dword_140404A6C[3597 * local_player + 71856292];
  v122 = v1;
  if ( (_DWORD)v1 == -1 )
    goto LABEL_40;
  v6 = (float *)(unsigned int *)&g_18399DF58;
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
    v19 = (float)(v13 * *(float *)((char *)&g_1A4D3BD64 + v18))
        + *(float *)((char *)&g_1A4D3BD58 + v18);
    *(v12 - 1) = v19;
    v20 = (float)(v13 * *(float *)((char *)&g_1A4D3BD68 + v18))
        + *(float *)((char *)&g_1A4D3BD5C + v18);
    *v12 = v20;
    v21 = (float)(v13 * *(float *)((char *)&g_1A4D3BD6C + v18))
        + *(float *)((char *)&g_1A4D3BD60 + v18);
    v12[1] = v21;
    v22 = (float)(v16 * *(float *)((char *)&g_1A4D3BD70 + v18)) + v19;
    v23 = v6[1];
    *(v12 - 1) = v22;
    v24 = (float)(v17 * *(float *)((char *)&g_1A4D3BD74 + v18)) + v20;
    *v12 = v24;
    v25 = (float)(v14 * *(float *)((char *)&g_1A4D3BD78 + v18)) + v21;
    v12[1] = v25;
    *(v12 - 1) = (float)(v23 * *(float *)((char *)&g_1A4D3BD7C + v18)) + v22;
    *v12 = (float)(v23 * *(float *)((char *)&g_1A4D3BD80 + v18)) + v24;
    v12[1] = (float)(v23 * *(float *)((char *)&g_1A4D3BD84 + v18)) + v25;
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
  if ( v122 != g_183F7C588 )
  {
    v37 = v3 * 4 + 1376LL * v122;
    dword_140404A6C[v3 + 421986996] = *(unsigned int *)((char *)&g_1A4D3BE54 + v37);
    dword_140404A6C[v3 + 421986997] = *(unsigned int *)((char *)&g_1A4D3BE58 + v37);
    dword_140404A6C[v3 + 421986998] = *(unsigned int *)((char *)&g_1A4D3BE5C + v37);
    *(_QWORD *)&dword_140404A6C[v3 + 421987011] = 0;
    dword_140404A6C[v3 + 421987013] = 0;
    *(_QWORD *)&dword_140404A6C[v3 + 421986999] = 0;
    dword_140404A6C[v3 + 421987001] = 0;
    *(_DWORD *)v36 = *(unsigned int *)((char *)&g_1A4D3BE60 + v37);
    *(_DWORD *)(v36 + 4) = *(unsigned int *)((char *)&g_1A4D3BE64 + v37);
    *(_DWORD *)(v36 + 8) = *(unsigned int *)((char *)&g_1A4D3BE68 + v37);
    dword_140404A6C[v3 + 421987005] = *(unsigned int *)((char *)&g_1A4D3BE6C + v37);
    dword_140404A6C[v3 + 421987006] = *(unsigned int *)((char *)&g_1A4D3BE70 + v37);
    dword_140404A6C[v3 + 421987007] = *(unsigned int *)((char *)&g_1A4D3BE74 + v37);
    dword_140404A6C[v3 + 421987008] = *(unsigned int *)((char *)&g_1A4D3BE78 + v37);
    dword_140404A6C[v3 + 421987009] = *(unsigned int *)((char *)&g_1A4D3BE7C + v37);
    dword_140404A6C[v3 + 421987010] = *(unsigned int *)((char *)&g_1A4D3BE80 + v37);
  }
  v38 = 3597LL * (int)local_player;
  v39 = *(float *)&dword_140404A6C[v38 + 71856301];
  v40 = v3 * 4 + 1376 * v35;
  v41 = *(float *)((char *)&g_1A4D3BD44 + v40);
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
  v46 = *(_OWORD *)((char *)&g_1A4D3BE70 + v40);
  v47 = *(float *)v36;
  (*(__int128 *)(void *)sr_snapshot_rotation) = *(_OWORD *)((char *)&g_1A4D3BE60 + v40);
  sr_snapshot_rotation[8] = *(unsigned int *)((char *)&g_1A4D3BE80 + v40);
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
  v49 = *(float *)((char *)&g_1A4D3BD4C + v40);
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
    *(_QWORD *)&v53 = dword_140404A6C[3597 * local_player + 71856298];
    *(float *)&v53 = (float)(*(float *)&v53 - *(float *)((char *)&g_1A4D3BD50 + v40)) * 0.5;
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation), v53);
    *(_QWORD *)&v54 = dword_140404A6C[3597 * local_player + 71856297];
    *(float *)&v54 = (float)(*(float *)&v54 - *(float *)((char *)&g_1A4D3BD4C + v40)) * 0.5;
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, v54);
    v50 = (float *)&(*(__int128 *)(void *)sr_snapshot_rotation);
    *(_QWORD *)&v52 = dword_140404A6C[3597 * local_player + 71856298];
    *(float *)&v52 = (float)(*(float *)&v52 - *(float *)((char *)&g_1A4D3BD50 + v40)) * 0.5;
  }
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), v50, v52);
  v55 = *(float *)((char *)&g_1A4D3BE58 + v40);
  v56 = *(float *)((char *)&g_1A4D3BE5C + v40);
  *(float *)&dword_140404A6C[v3 + 421986996] = (float)((float)(*(float *)((char *)&g_1A4D3BE54 + v40)
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
    *(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] = _mm_xor_ps(*(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v59 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2];
    v61 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1);
    v60 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1];
    v58 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(*(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], *(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], 255), f32)[0];
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
    v84 = *(float *)((char *)&g_1A4D3BD54 + v40);
    if ( v84 > 0.0 )
    {
      v85 = *(float *)&dword_140404A6C[v3 + 421987006];
      if ( v85 <= 0.0 )
        v86 = 0.0;
      else
        v86 = fabs((float)(v85 * v85) * v85);
      v87 = *(float *)&v43 + *(float *)((char *)&g_1A4D3BD3C + v40);
      v88 = v86 * v84;
      (*(__int128 *)(void *)sr_snapshot_rotation) = xmmword_140278D30;
      (*(__int128 *)(void *)(sr_snapshot_rotation+4)) = xmmword_140278D30;
      sr_snapshot_rotation[8] = 1065353216;
      *(_QWORD *)&v89 = dword_140404A6C[3597 * local_player + 71856299];
      *(float *)&v89 = (float)(*(float *)&v89 * 0.5) + v87;
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, v89);
      v90 = 3597LL * (int)local_player;
      *(_QWORD *)&v91 = dword_140404A6C[v90 + 71856300];
      *(float *)&v91 = (float)(*(float *)&v91 * 0.75) + (float)(*(float *)&dword_140404A6C[v90 + 71856298] * 0.5);
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation), v91);
      *(_QWORD *)&v92 = dword_140404A6C[3597 * local_player + 71856299];
      *(float *)&v92 = *(float *)&v92 * 0.5;
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, v92);
      v93 = 3597LL * (int)local_player;
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
        *(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] = _mm_xor_ps(*(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
        v96 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2];
        v98 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1);
        v97 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1];
        v95 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(*(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], *(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], 255), f32)[0];
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
  g_183F7C588 = v1;
  dword_140404A6C[v3 + 421986995] = v1;
  return 0; /* both native callers discard EAX */
}
#undef v116
#undef v122
#undef v126

//----- (0000000140033610) ----------------------------------------------------
_BOOL8            sub_140033610(float *a1, int *a2, float *a3, float *a4, int a5)
{
  int v5;
  int *v10;
  int v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  int v20;
  int v21;
  int v22;
  float v23;
  float v24;
  float v25;
  int v26;
  int v27;
  int v28;
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

//----- (0000000140033B50) ----------------------------------------------------
__int64            sub_140033B50(float *a1, __int64 a2, float *a3, float *a4)
{
  float *v4;
  float *v6;
  __int64 v9;
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
_BOOL8 sub_140033BE0(float *hit, __int64 mesh, __int64 placed, float *from, float *to, int radius_bits)
{
  extern int collision_capsule_placed_mesh(void *, const void *, const float (*)[3], const float *, const float *, float);
  float radius;
  __builtin_memcpy(&radius, &radius_bits, 4);
  return collision_capsule_placed_mesh(hit, (const void *)(uintptr_t)mesh,
                                       (const float (*)[3])(uintptr_t)placed, from, to, radius);
}

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
  int v9;
  int *v10;
  int *v11;
  float v13;
  signed int v16;
  float v17;
  float v18;
  float v19;
  __int64 v20;
  __int64 v21;
  float v22;
  float v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  float v34;
  int v35;
  float v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
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
  float *v10;
  float *v12;
  float *v14;
  float v17;
  float v18;
  float v19;
  float v20;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
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
  float v10;
  float v14;
  signed int v15;
  unsigned int v16;
  __m128i v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  __int64 v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  int v52;
  int v53;
  int v54;
  int v55;
  float v56;
  int v57;
  int v58;
  int v59;
  int v60;
  signed int v61;
  int v62;
  __int64 v63;
  float v64;
  float v65;
  __int64 v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  int v92;
  int v93;
  int v94;
  int v95;
  float v96;
  int v97;
  int v98;
  int v99;
  int v100;
  __int64 v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  float v132;
  int v133;
  int v134;
  int v135;
  int v136;
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
          g_151A848F4 = v15;
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
          g_151A848F4 = v15;
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
        v66 = *(_QWORD *)((char *)&g_145098CE0 + v162);
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
            g_151A848F4 = v61 | 0x10000;
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
            g_151A848F4 = v61 | 0x10000;
          }
        }
        v101 = *(_QWORD *)((char *)&g_145098CE0 + v162);
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
            g_151A848F4 = v61 | 0x10000;
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
            g_151A848F4 = v61 | 0x10000;
          }
        }
      }
      ++v61;
      v19 = v163;
      v63 += 48;
      v62 = __ROL4__(v62, 1);
    }
    while ( v61 < *(int *)((char *)&g_145098CD8 + v162) );
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
  __int64 v4;

  v4 = (int)world_grid_block_count++;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[2 * a1 + 421506981]
            + 4LL
            * (int)(a2 + dword_140404A6C[263004 * a1 + 111579650] * (a4 + a3 * dword_140404A6C[263004 * a1 + 111579652]))) = v4;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[512 * v4 + 421506990]), 0xFFu, 0x800u);
  return (unsigned int)v4;
}

//----- (0000000140038480) ----------------------------------------------------
float            sub_140038480(float a1, float a2, float a3)
{
  float v4;

  v4 = (1.0 - cos(a3 * 3.14159265359)) * 0.5;
  return (float)((float)(1.0 - v4) * a1) + (float)(a2 * v4);
}

//----- (00000001400384F0) ----------------------------------------------------
__m128            sub_1400384F0(float a1, float a2, int a3)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  float v14;
  double v15;
  __int128 v16;
  float v17;

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
  int v0;
  int v1;
  int v2;
  float v3;
  float v4;
  unsigned int v5;
  signed int v6;
  __int64 v7;
  float v8;
  double v9;
  float v10;
  float v11;
  double v12;
  bool v13;
  int v14;
  int v15;
  signed int v16;
  float v17;
  int v18;
  unsigned int *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  __m128i v28;
  int v29;
  __m128i v30;
  __int64 v31;
  unsigned int v32;
  unsigned int v33;
  signed int v34;
  int v35;
  int v36;
  signed int v37;
  signed int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  unsigned int v43;
  int v44;
  unsigned int *v45;
  signed int v46;
  signed int v47;
  int v48;
  int v49;
  unsigned int v50;
  unsigned int v51;
  int v52;
  signed int v53;
  int v54;
  unsigned int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  __int64 v61;
  int v62;
  __int64 v63;
  unsigned int *v64;
  int v65;
  __int64 v66;
  unsigned int *v67;
  __int64 v68;
  unsigned int *v69;
  __int64 v70;
  unsigned int *v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  unsigned int *v83;
  unsigned int *v84;
  int v85;
  __int64 v86;
  __int64 v87;
  signed int v88;
  signed int v89;
  __int64 v90;
  unsigned int *v91;
  __int64 v92;
  __int64 v93;
  int v94;
  unsigned int *v95;
  unsigned int *v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __m128i v100;
  unsigned int v101;
  unsigned int v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  unsigned int v106;
  int v107;
  int v108;
  int v109;
  __int64 v110;
  char *v111;
  unsigned int *v112;
  char v113;
  unsigned int *v114;
  __int64 v115;
  __int64 v116;
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

  v0 = g_189F0EEF0;
  v1 = g_189F0EEEC;
  v2 = g_189F0EEE8;
  v3 = (float)(g_183F7C6C0 - 512.0) + (float)(g_183F7C6C0 - 512.0);
  v4 = (float)(288.0 - g_183F7C6C4) + (float)(288.0 - g_183F7C6C4);
  v133 = (float)((float)(g_183F7C544 - (float)(g_183F7C568 * 1024.0))
               + (float)(g_183F7C550 * v3))
       + (float)(g_183F7C55C * v4);
  v134 = (float)((float)(g_183F7C548 - (float)(g_183F7C56C * 1024.0))
               + (float)(g_183F7C554 * v3))
       + (float)(g_183F7C560 * v4);
  v135 = (float)((float)(g_183F7C54C - (float)(g_183F7C570 * 1024.0))
               + (float)(g_183F7C558 * v3))
       + (float)(g_183F7C564 * v4);
  if ( BYTE1(g_183F7C974) )
  {
    if ( !BYTE1(g_183F7C774) )
    {
      g_189F0EEDC = g_189F0EEDC
                                            + (float)(*(float *)&g_189F0EEE8 * -4.0);
      g_189F0EEE0 = g_189F0EEE0
                                            + (float)(*(float *)&g_189F0EEEC * -4.0);
      g_189F0EEE4 = g_189F0EEE4
                                            + (float)(*(float *)&g_189F0EEF0 * -4.0);
      if ( BYTE1(g_183F7CA40) )
      {
        g_189F0EF10 = (int)(float)((float)(int)g_189F0EF10
                                                - *(float *)&g_189F0EEE8);
        g_189F0EF14 = (int)(float)((float)(int)g_189F0EF14
                                                - *(float *)&g_189F0EEEC);
        g_189F0EF18 = (int)(float)((float)(int)g_189F0EF18
                                                - *(float *)&g_189F0EEF0);
      }
    }
  }
  if ( BYTE1(g_183F7C968) )
  {
    if ( !BYTE1(g_183F7C768) )
    {
      g_189F0EEDC = g_189F0EEDC
                                            + (float)(*(float *)&g_189F0EEE8 * 4.0);
      g_189F0EEE0 = g_189F0EEE0
                                            + (float)(*(float *)&g_189F0EEEC * 4.0);
      g_189F0EEE4 = g_189F0EEE4
                                            + (float)(*(float *)&g_189F0EEF0 * 4.0);
      if ( BYTE1(g_183F7CA40) )
      {
        g_189F0EF10 = (int)(float)((float)(int)g_189F0EF10
                                                + *(float *)&g_189F0EEE8);
        g_189F0EF14 = (int)(float)((float)(int)g_189F0EF14
                                                + *(float *)&g_189F0EEEC);
        g_189F0EF18 = (int)(float)((float)(int)g_189F0EF18
                                                + *(float *)&g_189F0EEF0);
      }
    }
  }
  v5 = g_189F0EEA4;
  v6 = -1;
  if ( g_189F0EEA4 == 2 )
  {
    if ( LOBYTE(g_183F7C98C) )
    {
      g_189F0EF54 = -1;
      g_189F0EF5C = -1;
    }
    else
    {
      v7 = (int)g_189F0EF5C;
      if ( g_189F0EF5C != -1 )
      {
        if ( BYTE2(g_183F7C97C) && !BYTE2(g_183F7C77C) )
          ++dword_140404A6C[13 * g_189F0EF5C + 193074056];
        if ( HIBYTE(g_183F7C97C) && !HIBYTE(g_183F7C77C) )
          --dword_140404A6C[13 * v7 + 193074056];
        if ( LOBYTE(g_183F7C980) && !LOBYTE(g_183F7C780) )
          ++dword_140404A6C[13 * v7 + 193074057];
        if ( BYTE1(g_183F7C980) && !BYTE1(g_183F7C780) )
          --dword_140404A6C[13 * v7 + 193074057];
      }
    }
  }
  else if ( g_189F0EEA4 == 3 )
  {
    if ( LOBYTE(g_183F7C968) && !LOBYTE(g_183F7C768) )
      g_189F0EF50 = (g_189F0EF50 + 1) & 3;
    if ( LOBYTE(g_183F7C9AC)
      && !LOBYTE(g_183F7C7AC)
      && (int)g_1B4277C40 > 0 )
    {
      --g_1B4277C40;
    }
  }
  if ( BYTE2(g_183F7C9A0) && !BYTE2(g_183F7C7A0) )
  {
    asset_save_city_sbc_candidate();
    v5 = g_189F0EEA4;
    v0 = g_189F0EEF0;
    v1 = g_189F0EEEC;
    v2 = g_189F0EEE8;
  }
  if ( HIBYTE(g_183F7C974) && !HIBYTE(g_183F7C774) )
  {
    if ( (unsigned int)sub_1400DC050((float *)(unsigned int *)&g_183F7C544, &v133, 0) )
    {
      v8 = (float)(int)(float)(*(float *)&g_151A84880 * 0.25) * 4.0;
      v9 = fabs(g_183F7C568);
      v10 = (float)(int)(float)((ragdoll_unknown_height) * 0.25) * 4.0;
      v11 = (float)(int)(float)(*(float *)&g_151A84888 * 0.25) * 4.0;
      g_189F0EEDC = v8 + 2.0;
      v12 = fabs(g_183F7C56C);
      g_189F0EEE0 = v10 + 2.0;
      g_189F0EEE4 = v11 + 2.0;
      if ( v9 <= v12 || v9 <= fabs(g_183F7C570) )
      {
        if ( v12 <= fabs(g_183F7C570) )
        {
          v2 = dword_1402F6198;
          v1 = dword_1402F619C;
          v0 = dword_1402F61A0;
          v13 = g_183F7C570 <= 0.0;
        }
        else
        {
          v1 = dword_1402F618C;
          v0 = dword_1402F6190;
          v13 = g_183F7C56C <= 0.0;
          v2 = dword_1402F6188;
        }
      }
      else
      {
        v2 = dword_1402F6178;
        v1 = dword_1402F617C;
        v0 = dword_1402F6180;
        v13 = g_183F7C568 <= 0.0;
      }
      if ( v13 )
      {
        *(float *)&v2 = -*(float *)&v2;
        *(float *)&v1 = -*(float *)&v1;
        *(float *)&v0 = -*(float *)&v0;
      }
      v5 = g_189F0EEA4;
      g_189F0EEF0 = v0;
      g_189F0EEEC = v1;
      g_189F0EEE8 = v2;
      if ( g_189F0EEA4 == 2 )
      {
        g_189F0EEDC = (float)((float)(*(float *)&v2 * 2.25) + v8) + 2.0;
        g_189F0EEE4 = (float)((float)(*(float *)&v0 * 2.25) + v11) + 2.0;
        g_189F0EEE0 = (float)((float)(*(float *)&v1 * 2.25) + v10) + 2.0;
      }
    }
    else
    {
      v0 = g_189F0EEF0;
      v1 = g_189F0EEEC;
      v2 = g_189F0EEE8;
      v5 = g_189F0EEA4;
    }
  }
  v14 = 0;
  g_189F0EEA8 = 0;
  if ( v5 )
  {
    v15 = g_175EFB090;
    v123 = g_189F0EF4C;
    v33 = g_160FC481C;
    goto LABEL_83;
  }
  if ( !BYTE2(g_183F7C968) || BYTE2(g_183F7C768) )
  {
    v15 = g_175EFB090;
  }
  else
  {
    v15 = g_175EFB090;
    v16 = -1;
    v17 = 1.0;
    v18 = 0;
    g_189F0EF44 = -1;
    if ( (int)g_175EFB090 > 0 )
    {
      v19 = &g_175EFB0EC;
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
               (float *)(unsigned int *)&g_183F7C544,
               &v133,
               &v128,
               &v125)
          && v17 > *(float *)&v123 )
        {
          v16 = v18;
          v17 = *(float *)&v123;
          g_189F0EF44 = v18;
        }
        else
        {
          v16 = g_189F0EF44;
        }
        v15 = g_175EFB090;
        ++v18;
        v19 += 24;
        if ( v18 >= (int)g_175EFB090 )
        {
          v0 = g_189F0EEF0;
          v1 = g_189F0EEEC;
          v2 = g_189F0EEE8;
          v5 = g_189F0EEA4;
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
    if ( BYTE1(g_183F7CA40) && v16 != -1 )
    {
      v31 = 24LL * v16;
      v32 = dword_140404A6C[v31 + 225171850];
      g_189F0EF50 = dword_140404A6C[v31 + 225171870];
      goto LABEL_74;
    }
  }
  v32 = g_189F0EF4C;
LABEL_74:
  if ( LOBYTE(g_183F7C968) && !LOBYTE(g_183F7C768) )
    g_189F0EF50 = (LOBYTE(g_189F0EF50) + 1) & 3;
  v33 = g_160FC481C;
  v34 = v32 - g_160FC481C;
  if ( v34 < 0 )
    v34 = g_189F0EF48 - 1;
  if ( v34 >= (int)g_189F0EF48 )
    v34 = 0;
  v123 = v34;
  g_189F0EF4C = v34;
LABEL_83:
  if ( v5 != 1 )
    goto LABEL_157;
  v35 = g_189F0EF60 - v33;
  if ( (int)(g_189F0EF60 - v33) >= 0 )
  {
    if ( v35 >= 3 )
      v35 = 0;
  }
  else
  {
    v35 = 2;
  }
  v36 = g_189F0EF20;
  v37 = g_189F0EF24;
  v38 = g_189F0EF1C;
  v124 = g_189F0EF20;
  g_189F0EF60 = v35;
  if ( BYTE1(g_183F7C96C) && !BYTE1(g_183F7C76C) )
  {
    v39 = g_1726DA088;
    g_175EEA08C = 1;
    v40 = (int)g_189F0EF20 >> 3;
    v41 = (int)g_189F0EF1C >> 3;
    v42 = (int)g_189F0EF24 >> 3;
    v43 = -1;
    g_175EEA090 = 0x61666F73676962LL;
    v44 = 0;
    if ( (int)g_1726DA088 <= 0 )
      goto LABEL_99;
    v45 = &g_1726DA090;
    do
    {
      if ( !*(v45 - 1) && *v45 == v41 && v45[1] == v40 && v45[2] == v42 )
        v43 = v44;
      ++v44;
      v45 += 3588;
    }
    while ( v44 < (int)g_1726DA088 );
    if ( v43 == -1 )
    {
LABEL_99:
      if ( (int)g_1726DA088 >= 4096 )
      {
LABEL_102:
        v38 = g_189F0EF1C;
        goto LABEL_103;
      }
      crt_memset((void *)(uintptr_t)(&dword_140404A6C[3588 * g_1726DA088 + 210457992]), 0, 0x3810u);
      v37 = g_189F0EF24;
      dword_140404A6C[3588 * g_1726DA088 + 210457992] = 0;
      dword_140404A6C[3588 * g_1726DA088 + 210457993] = v41;
      dword_140404A6C[3588 * g_1726DA088 + 210457994] = v40;
      dword_140404A6C[3588 * g_1726DA088 + 210457995] = v42;
      v43 = g_1726DA088;
      v39 = ++g_1726DA088;
      if ( v43 == -1 )
      {
        v15 = g_175EFB090;
        goto LABEL_102;
      }
    }
    dword_140404A6C[3588 * v43 + 210461068 + 64 * (v36 & 7) + 8 * (v37 & 7) + (g_189F0EF1C & 7)] = 0x40000000;
    v15 = g_175EFB090;
    v39 = g_1726DA088;
    goto LABEL_102;
  }
  v39 = g_1726DA088;
LABEL_103:
  v46 = g_189F0EF30;
  v47 = g_189F0EF28;
  v48 = g_189F0EF2C;
  if ( LOBYTE(g_183F7C968) )
  {
    if ( !LOBYTE(g_183F7C768) )
    {
      v49 = v36;
      if ( v36 <= (int)g_189F0EF2C )
      {
        v50 = g_14500A75C;
        v51 = g_14500A70C;
        while ( 1 )
        {
          v52 = v37;
          if ( v37 > v46 )
            goto LABEL_124;
          v53 = g_189F0EF28;
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
                  g_189F0EF64 = 65537;
                  v55 = v51;
                  g_189F0EF68 = 65537;
                  g_189F0EF6C = 65537;
                }
                else
                {
                  if ( v35 != 2 )
                    goto LABEL_120;
                  g_189F0EF64 = 2;
                  v55 = v50;
                  g_189F0EF68 = 131074;
                  g_189F0EF6C = 131074;
                }
                v120 = (float *)&g_189F0EF64;
                LODWORD(v119) = v55 | 0x80000000;
              }
              else
              {
                v120 = (float *)&g_189F0EF64;
                LODWORD(v119) = 0x40000000;
                *(_QWORD *)&g_189F0EF64 = 0;
                g_189F0EF6C = 0;
              }
              sub_1400D4C40(0, v54, v49, v52, (unsigned int)v119, v120);
              v53 = g_189F0EF28;
LABEL_120:
              ++v54;
            }
            while ( v54 <= v53 );
            v38 = g_189F0EF1C;
LABEL_122:
            ++v52;
          }
          while ( v52 <= (int)g_189F0EF30 );
          v46 = g_189F0EF30;
          v48 = g_189F0EF2C;
          v37 = g_189F0EF24;
LABEL_124:
          if ( ++v49 > v48 )
          {
            v15 = g_175EFB090;
            v39 = g_1726DA088;
            v47 = g_189F0EF28;
            break;
          }
        }
      }
    }
  }
  if ( LOBYTE(g_183F7C9AC) )
  {
    if ( !LOBYTE(g_183F7C7AC) )
    {
      v56 = g_189F0EF20;
      if ( (int)g_189F0EF20 <= v48 )
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
                    v64 = &g_1726DA090;
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
                            --g_1726DA088;
                            crt_memcpy(
                              (__m128i *)&dword_140404A6C[3588 * v60 + 210457992],
                              (     __m128i *)&dword_140404A6C[3588 * g_1726DA088 + 210457992],
                              0x3810u);
                            break;
                          }
                          goto LABEL_142;
                        }
                      }
                      v56 = v124;
                      v39 = g_1726DA088;
                    }
                  }
                  ++v58;
                }
                while ( v58 <= v47 );
                v46 = g_189F0EF30;
                v38 = g_189F0EF1C;
              }
              ++v57;
            }
            while ( v57 <= v46 );
            v48 = g_189F0EF2C;
            v37 = g_189F0EF24;
          }
          v124 = ++v56;
        }
        while ( v56 <= v48 );
        v15 = g_175EFB090;
      }
    }
  }
  v6 = -1;
LABEL_157:
  if ( (float)((float)((float)((float)(g_189F0EEE0 - v134) * *(float *)&v1)
                     + (float)((float)(g_189F0EEDC - v133) * *(float *)&v2))
             + (float)((float)(g_189F0EEE4 - v135) * *(float *)&v0)) >= 0.0 )
  {
    v72 = (float)((float)((float)(g_189F0EEE0 - g_183F7C548)
                        * *(float *)&v1)
                + (float)((float)(g_189F0EEDC - g_183F7C544)
                        * *(float *)&v2))
        + (float)((float)(g_189F0EEE4 - g_183F7C54C) * *(float *)&v0);
    if ( v72 <= 0.0 )
    {
      v73 = (float)((float)(*(float *)&v2 * (float)(v133 - g_183F7C544))
                  + (float)(*(float *)&v1 * (float)(v134 - g_183F7C548)))
          + (float)(*(float *)&v0 * (float)(v135 - g_183F7C54C));
      if ( v73 != 0.0 )
      {
        v74 = v72 / v73;
        v75 = (float)(v74 * (float)(v133 - g_183F7C544))
            + g_183F7C544;
        v131[0] = v75;
        v76 = (float)(v74 * (float)(v134 - g_183F7C548))
            + g_183F7C548;
        v77 = (float)(v74 * (float)(v135 - g_183F7C54C))
            + g_183F7C54C;
        v131[1] = v76;
        v131[2] = v77;
        switch ( g_189F0EEA4 )
        {
          case 2u:
            v78 = 0;
            v79 = g_16E486878;
            v80 = (int)(float)((float)(v75 * 0.25) + 0.5);
            v81 = (int)(float)((float)(v76 * 0.25) + 0.5);
            g_189F0EEF4 = v80;
            v82 = (int)(float)((float)(v77 * 0.25) + 0.5);
            g_189F0EEF8 = v81;
            g_189F0EEFC = v82;
            if ( (int)g_16E486878 <= 0 )
            {
LABEL_167:
              v78 = -1;
            }
            else
            {
              v83 = &g_16E486880;
              while ( *(v83 - 1) != v80 || *v83 != v81 || v83[1] != v82 )
              {
                ++v78;
                v83 += 3;
                if ( v78 >= (int)g_16E486878 )
                  goto LABEL_167;
              }
            }
            v84 = &g_16E489884;
            g_189F0EF58 = v78;
            if ( g_189F0EF54 == -1 )
            {
              if ( !LOBYTE(g_183F7C97C) || LOBYTE(g_183F7C77C) )
              {
                v85 = g_175FBB094;
              }
              else
              {
                *(float *)&dword_140404A6C[3 * g_175FBB094 + 225368459] = (float)v80 * 4.0;
                *(float *)&dword_140404A6C[3 * g_175FBB094 + 225368460] = (float)((float)v81 * 4.0) + 2.0;
                *(float *)&dword_140404A6C[3 * g_175FBB094 + 225368461] = (float)v82 * 4.0;
                v79 = g_16E486878;
                v85 = ++g_175FBB094;
              }
              if ( LOBYTE(g_183F7C9AC) && !LOBYTE(g_183F7C7AC) && v85 > 0 )
                g_175FBB094 = v85 - 1;
            }
            else
            {
              if ( LOBYTE(g_183F7C968) )
              {
                v86 = 3LL * (int)g_189F0EF54;
                dword_140404A6C[v86 + 193070980] = v80;
                dword_140404A6C[v86 + 193070981] = v81;
                dword_140404A6C[v86 + 193070982] = v82;
                v79 = g_16E486878;
              }
              if ( LOBYTE(g_183F7C9AC) && !LOBYTE(g_183F7C7AC) )
              {
                v87 = (int)g_189F0EF54;
                if ( (g_189F0EF54 & 0x80000000) == 0 && (int)g_189F0EF54 < v79 )
                {
                  v88 = g_16E48987C;
                  v89 = 0;
                  if ( (int)g_16E48987C > 0 )
                  {
                    v90 = 0;
                    v91 = &g_16E489880;
                    do
                    {
                      if ( *v91 == (_DWORD)v87 || v91[1] == (_DWORD)v87 )
                      {
                        if ( v90 >= 0 )
                        {
                          if ( v89 >= v88 )
                            break;
                          g_16E48987C = v88 - 1;
                          v92 = 13LL * (v88 - 1);
                          *(_OWORD *)v91 = *(_OWORD *)&dword_140404A6C[v92 + 193074053];
                          *((_OWORD *)v91 + 1) = *(_OWORD *)&dword_140404A6C[v92 + 193074057];
                          *((_OWORD *)v91 + 2) = *(_OWORD *)&dword_140404A6C[v92 + 193074061];
                          v91[12] = dword_140404A6C[v92 + 193074065];
                          v88 = g_16E48987C;
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
                    v79 = g_16E486878;
                  }
                  v93 = 3 * v87;
                  g_16E486878 = v79 - 1;
                  *(_QWORD *)&dword_140404A6C[v93 + 193070980] = *(_QWORD *)&dword_140404A6C[3 * v79 + 193070977];
                  v94 = 0;
                  dword_140404A6C[v93 + 193070982] = dword_140404A6C[3 * v79 + 193070979];
                  v79 = g_16E486878;
                  if ( (int)g_16E48987C > 0 )
                  {
                    v95 = &g_16E489884;
                    do
                    {
                      if ( *(v95 - 1) == v79 )
                      {
                        *(v95 - 1) = v87;
                        v79 = g_16E486878;
                      }
                      if ( *v95 == v79 )
                      {
                        *v95 = v87;
                        v79 = g_16E486878;
                      }
                      ++v94;
                      v95 += 13;
                    }
                    while ( v94 < (int)g_16E48987C );
                  }
                }
                g_189F0EF54 = -1;
              }
            }
            if ( g_183F7C750 && !g_183F7C6B0 )
            {
              g_189F0EF5C = -1;
              if ( v78 == -1 && (g_189F0EF54 != -1 || HIBYTE(g_183F7C994)) )
              {
                v78 = 0;
                if ( v79 <= 0 )
                {
LABEL_211:
                  dword_140404A6C[3 * v79 + 193070980] = v80;
                  dword_140404A6C[3 * g_16E486878 + 193070981] = v81;
                  dword_140404A6C[3 * g_16E486878 + 193070982] = v82;
                  v78 = g_16E486878++;
                }
                else
                {
                  v96 = &g_16E486884;
                  while ( *(v96 - 2) != v80 || *v96 != v82 )
                  {
                    ++v78;
                    v96 += 3;
                    if ( v78 >= v79 )
                      goto LABEL_211;
                  }
                }
                g_189F0EF58 = v78;
              }
              if ( g_189F0EF54 != -1 && v78 != -1 )
                sub_1400D4A90(g_189F0EF54, v78);
              g_189F0EF54 = v78;
              if ( v78 == -1 && (int)g_16E48987C > 0 )
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
                         (float *)(unsigned int *)&g_183F7C544,
                         &v133,
                         &v128,
                         &v125,
                         4.0) )
                  {
                    v6 = v14;
                  }
                  ++v14;
                  g_189F0EF5C = v6;
                }
                while ( v14 < (int)g_16E48987C );
              }
            }
            break;
          case 3u:
            g_189F0EEF4 = (int)(float)(v75 * 0.25);
            g_189F0EEF8 = (int)(float)(v76 * 0.25);
            g_189F0EEFC = (int)(float)(v77 * 0.25);
            if ( g_183F7C750 && !g_183F7C6B0 )
            {
              *(float *)&dword_140404A6C[4 * g_1B4277C40 + 486132854] = (float)((float)(int)(float)(v75 * 0.25)
                                                                                             * 4.0)
                                                                                     + 2.0;
              *(float *)&dword_140404A6C[4 * g_1B4277C40 + 486132855] = (float)((float)(int)(float)(v76 * 0.25)
                                                                                             * 4.0)
                                                                                     + 2.0;
              *(float *)&dword_140404A6C[4 * g_1B4277C40 + 486132856] = (float)((float)(int)(float)(v77 * 0.25)
                                                                                             * 4.0)
                                                                                     + 2.0;
              *(float *)&dword_140404A6C[4 * g_1B4277C40++ + 486132857] = (float)(int)g_189F0EF50
                                                                                       * 1.570796326795;
            }
            break;
          case 1u:
            g_189F0EEF4 = (int)(float)(v75 * 0.25);
            g_189F0EEF8 = (int)(float)(v76 * 0.25);
            g_189F0EEFC = (int)(float)(v77 * 0.25);
            if ( g_183F7C750 )
            {
              if ( !g_183F7C6B0 )
              {
                g_189F0EF04 = (int)(float)(v75 * 0.25);
                g_189F0EF08 = (int)(float)(v76 * 0.25);
                g_189F0EF0C = (int)(float)(v77 * 0.25);
              }
              g_189F0EF10 = (int)(float)(v75 * 0.25);
              g_189F0EF14 = (int)(float)(v76 * 0.25);
              g_189F0EF18 = (int)(float)(v77 * 0.25);
              g_189F0EF00 = 1;
            }
            v101 = g_189F0EF10;
            v102 = g_189F0EF10;
            if ( (int)g_189F0EF04 <= (int)g_189F0EF10 )
              v102 = g_189F0EF04;
            else
              v101 = g_189F0EF04;
            g_189F0EF28 = v101;
            v103 = g_189F0EF14;
            g_189F0EF1C = v102;
            v104 = g_189F0EF14;
            if ( (int)g_189F0EF08 <= (int)g_189F0EF14 )
              v104 = g_189F0EF08;
            else
              v103 = g_189F0EF08;
            g_189F0EF2C = v103;
            v105 = g_189F0EF18;
            g_189F0EF20 = v104;
            v106 = g_189F0EF18;
            if ( (int)g_189F0EF0C > (int)g_189F0EF18 )
              v105 = g_189F0EF0C;
            else
              v106 = g_189F0EF0C;
            g_189F0EF24 = v106;
            g_189F0EF30 = v105;
            break;
          case 0u:
            v107 = (int)(float)(v75 * 0.25);
            v108 = (int)(float)(v76 * 0.25);
            g_189F0EEF4 = v107;
            v109 = (int)(float)(v77 * 0.25);
            g_189F0EEF8 = v108;
            g_189F0EEFC = v109;
            if ( g_183F7C750 )
            {
              if ( !g_183F7C6B0
                && v107 >= 0
                && v107 < (signed int)(g_15ADA9274 << 6)
                && v108 >= 0
                && v108 < (signed int)(g_15ADA9278 << 6)
                && v109 >= 0
                && v109 < (signed int)(g_15ADA927C << 6) )
              {
                if ( LOBYTE(g_183F7CA40) )
                {
                  if ( v15 > 0 )
                  {
                    v114 = &g_175EFB0DC;
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
                      g_175EFB090 = v15 - 1;
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
                  v112 = &dword_140404A6C[24 * g_175EFB090 + 225171851];
                  do
                  {
                    v113 = *v111++;
                    *(_BYTE *)v112 = v113;
                    v112 = (unsigned int *)((char *)v112 + 1);
                  }
                  while ( v113 );
                  dword_140404A6C[24 * g_175EFB090 + 225171867] = v107;
                  dword_140404A6C[24 * g_175EFB090 + 225171868] = v108;
                  dword_140404A6C[24 * g_175EFB090 + 225171869] = v109;
                  dword_140404A6C[24 * g_175EFB090 + 225171870] = g_189F0EF50;
                  asset_load_building_sbb_candidate(
                    (char *)&g_1AD2C94A0,
                    (     char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v110 * 4 + 905687968),
                    1);
                  dword_140404A6C[24 * g_175EFB090 + 225171871] = dword_140404A6C[v110 + 225368669]
                                                                               - g_1AD2C94EC;
                  dword_140404A6C[24 * g_175EFB090 + 225171873] = dword_140404A6C[v110 + 225368671]
                                                                               - g_1AD2C94F0;
                  dword_140404A6C[24 * g_175EFB090++ + 225171872] = dword_140404A6C[v110 + 225368670]
                                                                                 - g_1AD2C94F4;
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
  int v1;
  unsigned int v2;
  int v3;
  _BYTE *v4;

  v1 = g_1862AE020;
  v2 = 0;
  v3 = 0;
  if ( (int)g_1862AE020 < (int)g_1862AE024 )
  {
    v4 = a1;
    do
    {
      if ( !*v4 )
        break;
      if ( *v4 != *((_BYTE *)&g_1862AE028 + v1) )
        break;
      ++v3;
      ++v1;
      ++v4;
    }
    while ( v1 < (int)g_1862AE024 );
  }
  LOBYTE(v2) = a1[v3] == 0;
  return v2;
}

//----- (000000014003D830) ----------------------------------------------------
_BOOL8            sub_14003D830(float *a1, int *a2, float *a3, float *a4, float a5)
{
  int v5;
  float *v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  int v33;
  int v34;
  float v35;
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
  int v5;
  int *v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  int v31;
  int v32;
  int v33;
  int v34;
  float v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  int v40;
  int v41;
  int v42;
  int v43;
  float v44;
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
  int v9;
  int *v10;
  int *v11;
  float v13;
  signed int v16;
  float v17;
  float v18;
  float v19;
  __int64 v20;
  __int64 v21;
  float v22;
  float v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  float v34;
  int v35;
  float v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  BOOL v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
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
          g_151A848EC = v16;
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
          g_151A848EC = v16;
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
  float v13;
  float *v14;
  float *v15;
  float *v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  bool v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
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
  __int64 v4;
  unsigned int *result;
  int v6;
  int v7;
  __int64 v8;

  if ( (unsigned int)a1 <= 0xFFE && (unsigned int)a2 <= 0xFFE && !g_183F7CB60 )
  {
    v4 = a1 + (a2 << 12);
    result = &g_175FD1400;
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254388963] )
      *(float *)&dword_140404A6C[v4 + 254388963] = a3;
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254388964] )
      *(float *)&dword_140404A6C[v4 + 254388964] = a3;
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254393059] )
      *(float *)&dword_140404A6C[v4 + 254393059] = a3;
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254393060] )
      *(float *)&dword_140404A6C[v4 + 254393060] = a3;
    if ( a1 >= (int)g_175FD1444
      && a1 <= (int)g_175FD1450
      && a2 >= (int)g_175FD144C
      && a2 <= (int)g_175FD1458 )
    {
      v6 = a1 + 1024;
      v7 = a2 + 1024;
      if ( (unsigned int)v6 <= 0xFFF && (unsigned int)v7 <= 0xFFF )
      {
        v8 = (v6 >> 2) + (v7 >> 2 << 10);
        *(_WORD *)(g_181290050 + 2 * v8) &= ~(1 << ((v6 & 3) + 4 * (a2 & 3)));
        return (unsigned int *)((v6 & 3) + 4 * (a2 & 3u));
      }
    }
  }
  return result;
}

//----- (000000014003FB90) ----------------------------------------------------
__int64            sub_14003FB90(int a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  unsigned int v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  __int64 v37;
  float v38;
  float v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 result;

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
