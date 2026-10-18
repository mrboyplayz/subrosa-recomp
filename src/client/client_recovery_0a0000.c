#include "shared_client.h"

// 1400A0ABC: conditional instruction was optimized away because rdx.8 is in (1..FF)

//----- (00000001400A1640) ----------------------------------------------------
void            sub_1400A1640(int a1, unsigned int a2)
{
  __int64 v3;
  int v4;
  unsigned int *v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  char v11;
  unsigned int v12;
  __int64 v13;

  v3 = a1;
  if ( !g_183F7C754 )
  {
    v4 = 0;
    if ( (int)g_18329CC4C > 0 )
    {
      v5 = &g_18329CC54;
      do
      {
        if ( *(v5 - 1) )
          goto LABEL_34;
        v6 = v5[2];
        if ( (unsigned int)(v6 - 97) > 0x19 )
        {
          if ( (unsigned int)(v6 - 33) > 0x3E )
            goto LABEL_16;
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
          v9 = 14388 * v3 + 84LL * (int)dword_140404A6C[3597 * v3 + 71856362];
          if ( (v5[3] & 3) != 0 )
            *(unsigned int *)((char *)&g_151620E30 + v9) = dword_1402B29D0[v6 & 0x7F];
          else
            *(unsigned int *)((char *)&g_151620E30 + v9) = v6;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        else
        {
          v7 = 3597 * v3;
          if ( (v5[3] & 0xC0) != 0 )
            v8 = toupper(v6) | 0x100;
          else
            v8 = toupper(v6);
          dword_140404A6C[21 * (int)dword_140404A6C[v7 + 71856362] + 71856367 + v7] = 2;
          dword_140404A6C[21 * (int)dword_140404A6C[v7 + 71856362] + 71856368 + v7] = a2;
          dword_140404A6C[21 * (int)dword_140404A6C[v7 + 71856362] + 71856369 + v7] = v8;
          v6 = v5[2];
          dword_140404A6C[v7 + 71856362] = ((unsigned __int8)dword_140404A6C[v7 + 71856362] + 1) & 0x3F;
        }
        *v5 = 1;
LABEL_16:
        if ( v6 == 32 )
        {
          *v5 = 1;
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 32;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        if ( v6 == 13 )
        {
          v10 = 3597 * v3;
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 10;
LABEL_22:
          v11 = dword_140404A6C[v10 + 71856362] + 1;
          *v5 = 1;
          dword_140404A6C[v10 + 71856362] = v11 & 0x3F;
          goto LABEL_23;
        }
        if ( v6 == 8 )
        {
          v10 = 3597 * v3;
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 8;
          goto LABEL_22;
        }
LABEL_23:
        v12 = v5[1];
        switch ( v12 )
        {
          case 0xE0u:
            goto LABEL_33;
          case 0x52u:
            v13 = 3597 * v3;
            dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
            dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
            dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 16;
LABEL_32:
            dword_140404A6C[v13 + 71856362] = ((unsigned __int8)dword_140404A6C[v13 + 71856362] + 1) & 0x3F;
LABEL_33:
            *v5 = 1;
            break;
          case 0x51u:
            v13 = 3597 * v3;
            dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
            dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
            dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 17;
            goto LABEL_32;
          case 0x50u:
            v13 = 3597 * v3;
            dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
            dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
            dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 18;
            goto LABEL_32;
          case 0x4Fu:
            v13 = 3597 * v3;
            dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
            dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = a2;
            dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 19;
            goto LABEL_32;
        }
LABEL_34:
        ++v4;
        v5 += 5;
      }
      while ( v4 < (int)g_18329CC4C );
    }
  }
}

//----- (00000001400A1AE0) ----------------------------------------------------
__int64            sub_1400A1AE0(int a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  double v5;
  float v6;
  float v7;
  double v8;
  float v9;
  float v10;
  float v11;
  double v12;
  float v13;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A1AE0[80];
#define v15 (*(__int64 (*))(void *)(sr_frame_1400A1AE0 + 0)) /* [rsp+0h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_1400A1AE0 + 32)) /* [rsp+20h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_1400A1AE0 + 48)) /* [rsp+30h] */
#define v18 (*(float (*))(void *)(sr_frame_1400A1AE0 + 64)) /* [rsp+40h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_1400A1AE0 + 72)) /* [rsp+48h] */

  v1 = 3597LL * a1;
  v2 = (int)dword_140404A6C[v1 + 71856292];
  if ( (_DWORD)v2 != -1 )
  {
    v3 = 7166 * v2;
    if ( (int)dword_140404A6C[7166 * v2 + 280658139] > 0 )
    {
      v4 = (int)dword_140404A6C[v3 + 280658140];
      if ( (_DWORD)v4 != -1 )
      {
        *(_QWORD *)&v5 = dword_140404A6C[v1 + 71856293];
        v16 = xmmword_140278D30;
        v18 = 1.0;
        v17 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v16, (float *)&dword_1402F6188, v5);
        v6 = *(float *)&v16;
        v7 = *((float *)&v16 + 2);
        *(_QWORD *)&v8 = dword_140404A6C[v3 + 280651341];
        v16 = xmmword_140278D30;
        v18 = 1.0;
        v17 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v16, (float *)&dword_1402F6188, v8);
        v9 = (float)(g_183F7C6C8 * 1.25) * 0.0009765625;
        v10 = (float)(g_183F7C6CC * 1.25) * 0.0009765625;
        v11 = sub_14023F704(
                *(float *)&dword_140404A6C[1760 * v4 + 278845936],
                *(float *)&dword_140404A6C[1760 * v4 + 278845934]);
        *(_QWORD *)&v12 = DWORD2(v16);
        *(float *)&v12 = sub_14023F704(
                           (float)((float)(*((float *)&v16 + 2) * v9) + v7) + (float)(v18 * v10),
                           (float)((float)(*(float *)&v16 * v9) + v6) + (float)(*((float *)&v17 + 2) * v10));
        v13 = SR_VEC_READ_LANES(128, sub_14000B5F0(v12, v11), f32)[0];
        if ( v13 >= -1.570796326795 )
        {
          if ( v13 > 1.570796326795 )
            v13 = 1.5707964;
        }
        else
        {
          v13 = -1.5707964;
        }
        *(float *)&dword_140404A6C[v1 + 71856293] = v11 + v13;
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19

//----- (00000001400A1D20) ----------------------------------------------------
__int64            sub_1400A1D20(int a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  bool v4;
  int v5;
  float v6;
  unsigned int v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  unsigned int v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;

  v1 = a1;
  result = 14388LL * a1;
  v3 = a1;
  if ( *(unsigned int *)((char *)&g_151620DBC + result) != 3 )
  {
    *(_QWORD *)((char *)&g_151620D0C + result) = 0;
    *(unsigned int *)((char *)&g_151620D14 + result) = 0;
  }
  v4 = g_18329CC24 == 0;
  *(unsigned int *)((char *)&g_151620D94 + result) = 1;
  *(_QWORD *)((char *)&g_151620D00 + result) = 0;
  *(unsigned int *)((char *)&g_151620D08 + result) = 0;
  *(unsigned int *)((char *)&g_151620D80 + result) = 0;
  if ( v4 )
  {
    v5 = *(unsigned int *)((char *)&g_151620CFC + result);
    if ( v5 != -1 )
    {
      v6 = 0.0;
      v7 = g_183F7C750;
      if ( !g_183F7C754 || g_183F7C750 )
      {
        if ( g_1A4D2DCE8 >= -1.0 )
        {
          if ( g_1A4D2DCE8 <= 1.0 )
            v11 = 0.0;
          else
            v11 = g_1A4D2DCE8 + -1.0;
        }
        else
        {
          v11 = g_1A4D2DCE8 + 1.0;
        }
        if ( g_1A4D2DCEC >= -1.0 )
        {
          if ( g_1A4D2DCEC <= 1.0 )
            v12 = 0.0;
          else
            v12 = g_1A4D2DCEC + -1.0;
        }
        else
        {
          v12 = g_1A4D2DCEC + 1.0;
        }
        g_1A4D2DCE8 = v11
                                              + (float)((float)(g_183F7C6C8 * 0.125) * 0.5);
        *(float *)&v13 = v12 + (float)((float)(g_183F7C6CC * 0.125) * 0.5);
        v14 = *(float *)((char *)&g_151620D00 + result);
        *(float *)((char *)&g_151620D08 + result) = g_1A4D2DCE8
                                                                + *(float *)((char *)&g_151620D08 + result);
        *(unsigned int *)&g_1A4D2DCEC = v13;
        *(float *)((char *)&g_151620D00 + result) = v14 - *(float *)&v13;
        if ( !v7 )
        {
          *(float *)((char *)&g_151620D10 + result) = *(float *)((char *)&g_151620D10
                                                                             + result)
                                                                  * 0.875;
          *(float *)((char *)&g_151620D14 + result) = *(float *)((char *)&g_151620D14
                                                                             + result)
                                                                  * 0.875;
        }
      }
      else
      {
        v8 = 1.0 - *(float *)((char *)&g_151620D9C + result);
        v9 = (float)((float)(g_183F7C6C8 * v8) * 0.0015384615)
           + *(float *)((char *)&g_151620D10 + result);
        v10 = (float)((float)(g_183F7C6CC * v8) * 0.0015384615)
            + *(float *)((char *)&g_151620D14 + result);
        if ( v9 >= -2.74889357189125 )
        {
          *(float *)((char *)&g_151620D10 + result) = v9;
          if ( v9 > 2.74889357189125 )
            *(unsigned int *)((char *)&g_151620D10 + result) = 1076882911;
        }
        else
        {
          *(unsigned int *)((char *)&g_151620D10 + result) = -1070600737;
        }
        if ( v10 >= -1.570796326795 )
        {
          *(float *)((char *)&g_151620D14 + result) = v10;
          if ( v10 > 1.570796326795 )
            *(unsigned int *)((char *)&g_151620D14 + result) = 1070141403;
        }
        else
        {
          *(unsigned int *)((char *)&g_151620D14 + result) = -1077342245;
        }
      }
      v15 = (float)((float)(int)g_160FC481C * 0.125)
          + *(float *)((char *)&g_151620D98 + result);
      if ( v15 >= 0.0 )
      {
        v6 = (float)((float)(int)g_160FC481C * 0.125)
           + *(float *)((char *)&g_151620D98 + result);
        if ( v15 > 0.875 )
          v6 = 0.875;
      }
      v4 = g_18329B180 == 0;
      v16 = *(float *)((char *)&g_151620D9C + result);
      *(float *)((char *)&g_151620D98 + result) = v6;
      *(float *)((char *)&g_151620D9C + result) = (float)((float)(v6 - v16) * 0.0625) + v16;
      if ( v4 )
      {
        if ( BYTE2(g_183F7C978) )
          *(float *)((char *)&g_151620D0C + result) = *(float *)((char *)&g_151620D0C
                                                                             + result)
                                                                  + 0.03125;
        if ( BYTE2(g_183F7C974) )
          *(float *)((char *)&g_151620D0C + result) = *(float *)((char *)&g_151620D0C
                                                                             + result)
                                                                  - 0.03125;
        if ( LOBYTE(g_183F7C964) )
          *(float *)((char *)&g_151620D04 + result) = *(float *)((char *)&g_151620D04
                                                                             + result)
                                                                  - 1.0;
        if ( HIBYTE(g_183F7C964) )
          *(float *)((char *)&g_151620D04 + result) = *(float *)((char *)&g_151620D04
                                                                             + result)
                                                                  + 1.0;
        if ( LOBYTE(g_183F7C98C) )
          *(unsigned int *)((char *)&g_151620D80 + result) |= 4u;
        if ( LOBYTE(g_183F7CA40) )
          *(unsigned int *)((char *)&g_151620D80 + result) |= 8u;
        if ( BYTE1(g_183F7CA40) )
          dword_140404A6C[3597 * v1 + 71856325] |= 0x10u;
        if ( LOBYTE(g_183F7C968) )
          dword_140404A6C[3597 * v1 + 71856325] |= 0x800u;
      }
      sub_14009EA20(v1, v5);
      result = 3597 * v3;
      v17 = *(float *)&dword_140404A6C[3597 * v3 + 71856293];
      if ( v17 >= -1.0 )
      {
        if ( v17 > 1.0 )
          dword_140404A6C[3597 * v3 + 71856293] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * v3 + 71856293] = -1082130432;
      }
      v18 = *(float *)&dword_140404A6C[3597 * v3 + 71856294];
      if ( v18 >= -1.0 )
      {
        if ( v18 > 1.0 )
          dword_140404A6C[3597 * v3 + 71856294] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * v3 + 71856294] = -1082130432;
      }
      v19 = *(float *)&dword_140404A6C[3597 * v3 + 71856295];
      if ( v19 >= -1.0 )
      {
        if ( v19 > 1.0 )
          dword_140404A6C[3597 * v3 + 71856295] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * v3 + 71856295] = -1082130432;
      }
      v20 = *(float *)&dword_140404A6C[3597 * v3 + 71856296];
      if ( v20 >= -1.0 )
      {
        if ( v20 > 1.0 )
          dword_140404A6C[3597 * v3 + 71856296] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * v3 + 71856296] = -1082130432;
      }
    }
  }
  return result;
}

//----- (00000001400A21B0) ----------------------------------------------------
void            sub_1400A21B0(int a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  signed int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  float v11;
  int v12;
  float v13;
  unsigned int v14;
  float v15;
  float v16;
  unsigned int v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  unsigned int v23;
  unsigned int v24;
  float v25;
  float v26;
  unsigned int v27;
  float v28;
  float *v29;
  float v30;
  float v31;
  unsigned int v32;
  unsigned int v33;
  float v34;
  unsigned int v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  unsigned int v41;
  float v42;
  float v43;
  unsigned int v44;
  float v45;
  float v46;
  unsigned int v47;
  float v48;
  double v49;
  float v50;
  float v51;
  float v52;
  float v53;
  unsigned int v54;
  float v55;
  float v56;
  float v57;
  __int64 v58;
  int v59;

  v2 = 3597LL * a1;
  v3 = a1;
  *(_QWORD *)&dword_140404A6C[v2 + 71856294] = 0;
  dword_140404A6C[v2 + 71856296] = 0;
  v4 = (int)dword_140404A6C[v2 + 71856292];
  dword_140404A6C[v2 + 71856325] = 0;
  v59 = v4;
  if ( (_DWORD)v4 != -1 )
  {
    v5 = v4;
    if ( dword_140404A6C[v2 + 71856340] != 1 )
    {
      dword_140404A6C[v2 + 71856293] = 0;
      dword_140404A6C[v2 + 71856298] = dword_140404A6C[7166 * v4 + 280651342];
      v6 = dword_140404A6C[7166 * v4 + 280651357];
      dword_140404A6C[v2 + 71856336] = 0;
      dword_140404A6C[v2 + 71856301] = v6;
    }
    if ( !g_18329CC24 )
    {
      v7 = -1;
      v8 = 28664 * v5 + 40LL * (BYTE1(g_183F7CA40) != 0);
      if ( *(int *)((char *)&g_1832A4DD8 + v8) > 0 )
        v7 = *(unsigned int *)((char *)&g_1832A4DDC + v8);
      if ( dword_140404A6C[v2 + 71856341] != v7 )
      {
        v9 = 1760LL * v7;
        if ( dword_140404A6C[v9 + 278845898] == 28 )
          *(float *)&dword_140404A6C[v2 + 71856293] = sub_14023F704(
                                                        *(float *)&dword_140404A6C[v9 + 278845936],
                                                        *(float *)&dword_140404A6C[v9 + 278845934]);
      }
      dword_140404A6C[v2 + 71856341] = v7;
      if ( v7 == -1 || dword_140404A6C[1760 * v7 + 278845898] != 18 )
      {
        dword_140404A6C[v2 + 71856330] += g_160FC481C;
        g_160FC481C = 0;
      }
      else
      {
        sub_1400A2C00(a1, v7);
      }
      v10 = dword_140404A6C[v2 + 71856330];
      if ( v10 < 0 )
      {
        dword_140404A6C[v2 + 71856330] = 0;
        dword_140404A6C[v2 + 71856331] = 0;
        goto LABEL_23;
      }
      if ( v10 <= 2 )
      {
        if ( !v10 )
        {
          dword_140404A6C[v2 + 71856331] = 0;
          goto LABEL_23;
        }
        if ( v10 == 1 )
        {
          dword_140404A6C[v2 + 71856331] = 1031798784;
          goto LABEL_23;
        }
      }
      else
      {
        dword_140404A6C[v2 + 71856330] = 2;
      }
      dword_140404A6C[v2 + 71856331] = 1056964608;
LABEL_23:
      v11 = *(float *)&dword_140404A6C[v2 + 71856331];
      *(float *)&v12 = -0.25;
      if ( v11 >= -0.25 )
      {
        *(float *)&v12 = 0.75;
        if ( v11 <= 0.75 )
          goto LABEL_28;
        dword_140404A6C[v2 + 71856331] = 1061158912;
      }
      else
      {
        dword_140404A6C[v2 + 71856331] = -1098907648;
      }
      v11 = *(float *)&v12;
LABEL_28:
      v13 = g_183F7C6C8;
      v14 = g_151E46198;
      v15 = g_183F7C6CC;
      v16 = g_183F7C6CC;
      *(float *)&v17 = (float)((float)(v11 - *(float *)&dword_140404A6C[v2 + 71856332]) * 0.0625)
                     + *(float *)&dword_140404A6C[v2 + 71856332];
      dword_140404A6C[v2 + 71856332] = v17;
      v18 = v13 * (float)(1.0 - *(float *)&v17);
      v19 = v16 * (float)(1.0 - *(float *)&v17);
      v20 = v18 * 0.001953125;
      if ( v14 )
        v21 = v19 * -0.0009765625;
      else
        v21 = v19 * 0.0009765625;
      v22 = (float)(v20 * 0.5) + *(float *)&dword_140404A6C[v2 + 71856309];
      *(float *)&dword_140404A6C[v2 + 71856310] = (float)(v21 + *(float *)&dword_140404A6C[v2 + 71856310]) * 0.9375;
      *(float *)&dword_140404A6C[v2 + 71856309] = v22 * 0.9375;
      v23 = g_18329B180;
      if ( !g_18329B180 && g_18329CC40 )
      {
        v24 = dword_140404A6C[7166 * v5 + 280651357];
        v25 = SR_VEC_READ_LANES(128, sub_14000B5F0(COERCE_DOUBLE((unsigned __int64)v24), *(float *)&dword_140404A6C[v2 + 71856301]), f32)[0];
        v26 = SR_VEC_READ_LANES(128, sub_14000B5F0(COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 71856297]), v25), f32)[0];
        *(float *)&v27 = v20 + *(float *)&dword_140404A6C[v2 + 71856299];
        v28 = v19 * 0.001953125;
        v29 = (float *)&dword_140404A6C[v2 + 71856300];
        *(float *)&dword_140404A6C[v2 + 71856297] = v26;
        dword_140404A6C[v2 + 71856301] = v24;
        dword_140404A6C[v2 + 71856299] = v27;
        v30 = *(float *)&dword_140404A6C[v2 + 71856300];
        if ( v14 )
          v31 = v30 - v28;
        else
          v31 = v30 + v28;
        v32 = g_18329CC38;
        *v29 = v31;
        dword_140404A6C[v2 + 71856325] |= 2u;
LABEL_63:
        v44 = dword_140404A6C[v2 + 71856297];
        goto LABEL_64;
      }
      v32 = g_18329CC38;
      if ( v7 == -1 || dword_140404A6C[1760 * v7 + 278845898] != 28 && !g_18329CC38 )
      {
        v48 = *(float *)&dword_140404A6C[v2 + 71856301];
        *(_QWORD *)&v49 = dword_140404A6C[7166 * v5 + 280651357];
        dword_140404A6C[v2 + 71856301] = LODWORD(v49);
        v50 = SR_VEC_READ_LANES(128, sub_14000B5F0(v49, v48), f32)[0];
        v51 = *(float *)&dword_140404A6C[v2 + 71856298];
        v52 = v19 * 0.001953125;
        if ( v14 )
          v53 = v51 - v52;
        else
          v53 = v51 + v52;
        v29 = (float *)&dword_140404A6C[v2 + 71856300];
        *(float *)&v54 = (float)(*(float *)&dword_140404A6C[v2 + 71856299] * 0.125)
                       + (float)((float)(*(float *)&dword_140404A6C[v2 + 71856297] - v50) + v20);
        v55 = *(float *)&dword_140404A6C[v2 + 71856300];
        *(float *)&dword_140404A6C[v2 + 71856299] = *(float *)&dword_140404A6C[v2 + 71856299] * 0.875;
        dword_140404A6C[v2 + 71856297] = v54;
        *(float *)&dword_140404A6C[v2 + 71856300] = v55 * 0.875;
        *(float *)&dword_140404A6C[v2 + 71856298] = (float)(v55 * 0.125) + v53;
        *(_QWORD *)&dword_140404A6C[v2 + 71856364] = 0;
        dword_140404A6C[v2 + 71856366] = 0;
        goto LABEL_63;
      }
      if ( !g_18329CC38 )
      {
        sub_1400A1AE0(a1);
        v32 = g_18329CC38;
        v23 = g_18329B180;
        v29 = (float *)&dword_140404A6C[v2 + 71856300];
        v45 = *(float *)&dword_140404A6C[v2 + 71856299];
        v46 = *(float *)&dword_140404A6C[v2 + 71856300];
        *(float *)&dword_140404A6C[v2 + 71856299] = v45 * 0.875;
        *(float *)&v44 = (float)(v45 * 0.125) + *(float *)&dword_140404A6C[v2 + 71856297];
        *(float *)&v47 = (float)(v46 * 0.125) + *(float *)&dword_140404A6C[v2 + 71856298];
        dword_140404A6C[v2 + 71856297] = v44;
        *(float *)&dword_140404A6C[v2 + 71856300] = v46 * 0.875;
        dword_140404A6C[v2 + 71856298] = v47;
        goto LABEL_64;
      }
      v33 = dword_140404A6C[7166 * v5 + 280651357];
      v34 = *(float *)&dword_140404A6C[v2 + 71856297]
          - SR_VEC_READ_LANES(128, sub_14000B5F0(COERCE_DOUBLE((unsigned __int64)v33), *(float *)&dword_140404A6C[v2 + 71856301]), f32)[0];
      dword_140404A6C[v2 + 71856301] = v33;
      if ( v34 < -3.14159265359 )
        v34 = v34 + 6.28318530718;
      if ( v34 > 3.14159265359 )
        v34 = v34 - 6.28318530718;
      v35 = g_183F7C750;
      v36 = (float)(v18 * 0.00048828125) + v34;
      *(float *)&dword_140404A6C[v2 + 71856297] = v36;
      if ( !v35 )
        *(float *)&dword_140404A6C[v2 + 71856364] = (float)(*(float *)&g_151E461A4 * v15)
                                                  + *(float *)&dword_140404A6C[v2 + 71856364];
      v37 = *(float *)&dword_140404A6C[v2 + 71856364];
      if ( v37 >= -1.570796326795 )
      {
        if ( v37 > 1.570796326795 )
        {
          v37 = 1.5707964;
          dword_140404A6C[v2 + 71856364] = 1070141403;
        }
      }
      else
      {
        v37 = -1.5707964;
        dword_140404A6C[v2 + 71856364] = -1077342245;
      }
      v38 = *(float *)&dword_140404A6C[v2 + 71856365];
      v39 = 0.03125;
      v40 = fmaxf((float)(v37 - v38) * 0.125, -0.03125);
      if ( v40 <= 0.03125 )
        v39 = v40;
      v29 = (float *)&dword_140404A6C[v2 + 71856300];
      *(float *)&v41 = (float)(v39 - (float)(*(float *)&dword_140404A6C[v2 + 71856366] * 0.25))
                     + *(float *)&dword_140404A6C[v2 + 71856366];
      dword_140404A6C[v2 + 71856366] = v41;
      *(float *)&dword_140404A6C[v2 + 71856365] = *(float *)&v41 + v38;
      *(float *)&dword_140404A6C[v2 + 71856300] = v37 * 0.125;
      if ( v35 )
      {
        v42 = *(float *)&dword_140404A6C[v2 + 71856298];
        v43 = v19 * 0.0009765625;
        if ( !v14 )
        {
          *(float *)&v44 = v36;
          *(float *)&dword_140404A6C[v2 + 71856298] = v42 + v43;
LABEL_64:
          if ( *(float *)&v44 >= -2.74889357189125 )
          {
            if ( *(float *)&v44 > 2.74889357189125 )
              dword_140404A6C[v2 + 71856297] = 1076882911;
          }
          else
          {
            dword_140404A6C[v2 + 71856297] = -1070600737;
          }
          v56 = *(float *)&dword_140404A6C[v2 + 71856298];
          if ( v56 >= -1.570796326795 )
          {
            if ( v56 > 1.570796326795 )
              dword_140404A6C[v2 + 71856298] = 1070141403;
          }
          else
          {
            dword_140404A6C[v2 + 71856298] = -1077342245;
          }
          v57 = *(float *)&dword_140404A6C[v2 + 71856299];
          if ( v57 >= -2.74889357189125 )
          {
            if ( v57 > 2.74889357189125 )
              dword_140404A6C[v2 + 71856299] = 1076882911;
          }
          else
          {
            dword_140404A6C[v2 + 71856299] = -1070600737;
          }
          if ( *v29 >= -1.570796326795 )
          {
            if ( *v29 > 1.570796326795 )
              *v29 = 1.5707964;
          }
          else
          {
            *v29 = -1.5707964;
          }
          if ( !v23 )
          {
            if ( BYTE2(g_183F7C978) )
              *(float *)&dword_140404A6C[v2 + 71856296] = *(float *)&dword_140404A6C[v2 + 71856296] + 1.0;
            if ( BYTE2(g_183F7C974) )
              *(float *)&dword_140404A6C[v2 + 71856296] = *(float *)&dword_140404A6C[v2 + 71856296] - 1.0;
            if ( LOBYTE(g_183F7C964) )
              *(float *)&dword_140404A6C[v2 + 71856294] = *(float *)&dword_140404A6C[v2 + 71856294] - 1.0;
            if ( HIBYTE(g_183F7C964) )
              *(float *)&dword_140404A6C[v2 + 71856294] = *(float *)&dword_140404A6C[v2 + 71856294] + 1.0;
            if ( LOBYTE(g_183F7C98C) )
              dword_140404A6C[3597 * v3 + 71856325] |= 4u;
            if ( v32 )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x20u;
            if ( toggle_183f7c2fc && g_184397BA4 )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x20u;
            if ( BYTE1(g_183F7C974) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x1000u;
            if ( LOBYTE(g_183F7C9AC) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x40000u;
            if ( BYTE1(g_183F7CA40) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x10u;
            if ( LOBYTE(g_183F7CA40) )
              dword_140404A6C[3597 * v3 + 71856325] |= 8u;
            if ( BYTE1(g_183F7C97C) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x80000u;
            if ( v7 != -1 )
            {
              v58 = 1760LL * v7;
              if ( ((dword_140404A6C[v58 + 278845898] - 25) & 0xFFFFFFF7) == 0 && dword_140404A6C[v58 + 278846052] == 1 )
                sub_1400A2DC0(a1, v7);
            }
            if ( LOBYTE(g_183F7C968) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x800u;
            if ( BYTE1(g_183F7C968) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x2000u;
          }
          sub_14009EA20(a1, v59);
          return;
        }
        *(float *)&dword_140404A6C[v2 + 71856298] = v42 - v43;
      }
      *(float *)&v44 = v36;
      goto LABEL_64;
    }
  }
}

// 1400A2386: conditional instruction was optimized away because eax.4==2

//----- (00000001400A2DC0) ----------------------------------------------------
__int64            sub_1400A2DC0(int a1, unsigned int a2)
{
  __int64 result;

  if ( !BYTE2(g_183F7C9C0) && BYTE2(g_183F7C7C0) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 0;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(g_183F7C9B8) && BYTE1(g_183F7C7B8) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 1;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(g_183F7C9B8) && BYTE2(g_183F7C7B8) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(g_183F7C9B8) && HIBYTE(g_183F7C7B8) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 3;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(g_183F7C9BC) && LOBYTE(g_183F7C7BC) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 4;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(g_183F7C9BC) && BYTE1(g_183F7C7BC) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 5;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(g_183F7C9BC) && BYTE2(g_183F7C7BC) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 6;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(g_183F7C9BC) && HIBYTE(g_183F7C7BC) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 7;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(g_183F7C9C0) && LOBYTE(g_183F7C7C0) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 8;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(g_183F7C9C0) && BYTE1(g_183F7C7C0) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 9;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(g_183F7C984) && HIBYTE(g_183F7C784) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 0;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(g_183F7C97C) && BYTE2(g_183F7C77C) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 1;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(g_183F7C97C) && HIBYTE(g_183F7C77C) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(g_183F7C980) && LOBYTE(g_183F7C780) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 3;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(g_183F7C980) && BYTE1(g_183F7C780) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 4;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(g_183F7C980) && BYTE2(g_183F7C780) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 5;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(g_183F7C980) && HIBYTE(g_183F7C780) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 6;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(g_183F7C984) && LOBYTE(g_183F7C784) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 7;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(g_183F7C984) && BYTE1(g_183F7C784) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 8;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(g_183F7C984) )
  {
    if ( BYTE2(g_183F7C784) )
    {
      dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
      dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
      dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 9;
      result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
      dword_140404A6C[3597 * a1 + 71856362] = result;
    }
  }
  return result;
}

//----- (00000001400A3770) ----------------------------------------------------
void            sub_1400A3770(int a1)
{
  __int64 v1;
  unsigned int v2;
  int v3;
  unsigned int v4;
  int v5;
  __int64 v6;
  char v7;
  unsigned __int8 v8;
  int v9;
  unsigned __int8 v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  char v14;

  if ( game_type == 4 && (v1 = 3597LL * a1, dword_140404A6C[v1 + 71856266]) )
  {
    if ( dword_140404A6C[v1 + 71856342] == 1
      && HIBYTE(g_183F7C984)
      && !HIBYTE(g_183F7C784) )
    {
      v2 = g_183F79DEC ^ 1;
      g_183F79DEC ^= 1u;
    }
    else
    {
      v2 = g_183F79DEC;
    }
    if ( v2 )
    {
      v3 = g_183F79DE4;
      if ( BYTE2(g_183F7C97C) )
        v3 = -1;
      g_183F79DE4 = v3;
      if ( LOBYTE(g_183F7C98C) )
      {
        if ( !LOBYTE(g_183F7C78C) )
        {
          if ( v3 >= 0 )
          {
            LOBYTE(v4) = v3 + 1;
            if ( BYTE1(g_183F7CA40) )
              LOBYTE(v4) = v3 - 1;
          }
          else
          {
            LOBYTE(v4) = 0;
            LOBYTE(v3) = -1;
          }
          v4 = (unsigned __int8)v4;
          v5 = (unsigned __int8)v3;
          while ( 1 )
          {
            v6 = 7166LL * v4;
            if ( dword_140404A6C[v6 + 280651303] )
            {
              if ( (int)dword_140404A6C[v6 + 280651318] > 0 )
                break;
            }
            v7 = 1;
            if ( BYTE1(g_183F7CA40) )
              v7 = -1;
            v4 = (unsigned __int8)(v4 + v7);
            if ( v4 == v5 )
              return;
          }
          g_183F79DE4 = v4;
        }
      }
    }
  }
  else
  {
    v8 = 0;
    g_183F79DEC = 0;
    if ( (game_type == 3 || game_type - 5 <= 2)
      && !g_183F79DE8
      && !g_18329B180 )
    {
      v9 = g_183F79DE4;
      if ( BYTE2(g_183F7C97C) )
        v9 = -1;
      if ( LOBYTE(g_183F7C98C) && !LOBYTE(g_183F7C78C) )
      {
        v10 = v9;
        if ( v9 >= 0 )
        {
          v8 = v9 + 1;
          if ( BYTE1(g_183F7CA40) )
            v8 = v9 - 1;
        }
        else
        {
          v10 = -1;
        }
        v11 = v8;
        v12 = v10;
        while ( 1 )
        {
          v13 = 7166LL * v11;
          if ( dword_140404A6C[v13 + 280651303] )
          {
            if ( (int)dword_140404A6C[v13 + 280651318] > 0 && dword_140404A6C[v13 + 280658438] <= 2 )
              break;
          }
          v14 = 1;
          if ( BYTE1(g_183F7CA40) )
            v14 = -1;
          v11 = (unsigned __int8)(v11 + v14);
          if ( v11 == v12 )
            goto LABEL_46;
        }
        v9 = v11;
      }
LABEL_46:
      if ( game_state != 2 )
        v9 = -1;
      g_183F79DE4 = v9;
    }
  }
}

//----- (00000001400A3D70) ----------------------------------------------------
__int64 sub_1400A3D70()
{
  int i;
  char v1;
  int v2;
  __int64 v3;
  char v4;
  unsigned int v6;

  for ( i = g_1862AE020; i < (int)g_1862AE024; g_1862AE020 = ++i )
  {
    v1 = *((_BYTE *)&g_1862AE028 + i);
    if ( (unsigned __int8)(v1 - 48) <= 9u )
      break;
    if ( v1 == 45 )
      break;
  }
  v2 = 0;
  if ( i < (int)g_1862AE024 )
  {
    v3 = 0;
    do
    {
      if ( v3 >= 255 )
        break;
      v4 = *((_BYTE *)&g_1862AE028 + i);
      if ( (unsigned __int8)(v4 - 48) > 9u && v4 != 45 )
        break;
      *((_BYTE *)&g_1863AE028 + v3) = v4;
      ++v2;
      ++v3;
      i = ++g_1862AE020;
    }
    while ( (int)g_1862AE020 < (int)g_1862AE024 );
  }
  *((_BYTE *)&g_1863AE028 + v2) = 0;
  crt_sscanf((__int64)&g_1863AE028, "%d", &v6);
  return v6;
}

//----- (00000001400A3E30) ----------------------------------------------------
__int64 sub_1400A3E30()
{
  struct hostent *v0;
  struct hostent *v1;
  _QWORD *v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A3E30[560];
#define v8 (*(__int64 (*))(void *)(sr_frame_1400A3E30 + 0)) /* [rsp+0h] */
#define name (*(char (*)[512])(void *)(sr_frame_1400A3E30 + 32)) /* [rsp+20h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_1400A3E30 + 544)) /* [rsp+220h] */

  if ( sub_140199037(name, 512) != -1 )
  {
    v0 = sub_140199031(name);
    v1 = v0;
    if ( v0 )
    {
      v2 = *((_QWORD **)v0 + 3);
      v3 = g_16B0A7EE4;
      if ( *v2 )
      {
        v4 = 0;
        do
        {
          if ( v4 >= 16 )
            break;
          v5 = ntohl_sr(*(unsigned int *)v2[v4]);
          v6 = (int)g_16B0A7EE4;
          ++v4;
          dword_140404A6C[2 * g_16B0A7EE4 + 179457309] = v5 | 0xFF;
          LOWORD(dword_140404A6C[2 * v6 + 179457310]) = g_18539D3F8;
          v3 = v6 + 1;
          g_16B0A7EE4 = v3;
          v2 = *((_QWORD **)v1 + 3);
        }
        while ( v2[v4] );
      }
      g_16B0A7EE0 = v3;
    }
  }
  return 0; /* the function has no caller */
}
#undef v8
#undef name
#undef v10

//----- (00000001400A4440) ----------------------------------------------------
__int64 sub_1400A4440()
{
  unsigned int v0;
  unsigned int *v1;

  v0 = 0;
  v1 = &g_1B4287C80;
  while ( *v1 )
  {
    ++v0;
    v1 += 61;
    if ( (__int64)v1 >= (__int64)&g_1B4657C80 )
      return 0xFFFFFFFFLL;
  }
  return v0;
}

//----- (00000001400A4560) ----------------------------------------------------
__int64 sub_1400A4560()
{
  unsigned int v0;
  unsigned int *v1;

  v0 = 0;
  v1 = &g_182A7D580;
  while ( *v1 )
  {
    ++v0;
    v1 += 3;
    if ( (__int64)v1 >= (__int64)&g_182A7E180 )
      return 0xFFFFFFFFLL;
  }
  return v0;
}

//----- (00000001400A4620) ----------------------------------------------------
__int64            sub_1400A4620(int a1, float a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  unsigned int *v5;
  unsigned int v6;
  float v7;

  v2 = 47224LL * a1;
  v3 = 0;
  v4 = 0;
  v5 = &dword_140404A6C[v2 + 438887428];
  while ( *v5 )
  {
    ++v3;
    ++v4;
    v5 += 10;
    if ( v4 >= 8 )
    {
      v6 = -1;
      v7 = 65536.0;
      if ( (float)(*(float *)&dword_140404A6C[v2 + 438887426]
                 / (float)(*(float *)&dword_140404A6C[v2 + 438887427] + 0.0099999998)) < 65536.0 )
      {
        v6 = 0;
        v7 = *(float *)&dword_140404A6C[v2 + 438887436]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887437] + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.0099999998)) )
      {
        v6 = 1;
        v7 = *(float *)&dword_140404A6C[v2 + 438887446]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887447] + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.0099999998)) )
      {
        v6 = 2;
        v7 = *(float *)&dword_140404A6C[v2 + 438887456]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887457] + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.0099999998)) )
      {
        v6 = 3;
        v7 = *(float *)&dword_140404A6C[v2 + 438887466]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887467] + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.0099999998)) )
      {
        v6 = 4;
        v7 = *(float *)&dword_140404A6C[v2 + 438887476]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887477] + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.0099999998)) )
      {
        v6 = 5;
        v7 = *(float *)&dword_140404A6C[v2 + 438887486]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887487] + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.0099999998)) )
      {
        v6 = 6;
        v7 = *(float *)&dword_140404A6C[v2 + 438887496]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887497] + 0.0099999998);
      }
      if ( v7 <= (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                       / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.0099999998)) )
      {
        if ( v6 != -1 )
          goto LABEL_21;
      }
      else
      {
        v6 = 7;
        v7 = *(float *)&dword_140404A6C[v2 + 438887506]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887507] + 0.0099999998);
LABEL_21:
        if ( v7 > a2 )
          return v6;
      }
      return 0xFFFFFFFFLL;
    }
  }
  return v3;
}

//----- (00000001400A4DD0) ----------------------------------------------------
__int64            sub_1400A4DD0(__int64 a1, int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int64 v17;
  float v18;
  float v19;
  __int64 v20;
  float v21;
  float *v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
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
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A4DD0[112];
#define v56 (*(float (*))(void *)(sr_frame_1400A4DD0 + 0)) /* [rsp+0h] */
#define v57 (*(__int64 (*))(void *)(sr_frame_1400A4DD0 + 8)) /* [rsp+8h] */
#define v58 (*(float (*))(void *)(sr_frame_1400A4DD0 + 16)) /* [rsp+10h] */
#define v59 (*(_OWORD (*)[4])(void *)(sr_frame_1400A4DD0 + 32)) /* [rsp+20h] */
#define v60 (*(__int64 (*))(void *)(sr_frame_1400A4DD0 + 96)) /* [rsp+60h] */

  memcpy(&v59[0], &xmmword_140278F80, 16);
  memcpy(&v59[1], &xmmword_140279020, 16);
  v3 = a2;
  v4 = 5210LL * a2;
  v5 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716771];
  v6 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716772];
  v7 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716774];
  v8 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716773];
  v9 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716779];
  v10 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716780];
  v11 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716782];
  v12 = 60LL * (int)dword_140404A6C[v4 + 129716781];
  v13 = (float)((float)(*(float *)&dword_140404A6C[v5 + 73007026] + *(float *)&dword_140404A6C[v6 + 73007026])
              + (float)(*(float *)&dword_140404A6C[v7 + 73007026] + *(float *)&dword_140404A6C[v8 + 73007026]))
      + (float)((float)(*(float *)&dword_140404A6C[v11 + 73007026] + *(float *)&dword_140404A6C[v12 + 73007026])
              + (float)(*(float *)&dword_140404A6C[v9 + 73007026] + *(float *)&dword_140404A6C[v10 + 73007026]));
  v14 = (float)((float)(*(float *)&dword_140404A6C[v12 + 73007027] + *(float *)&dword_140404A6C[v11 + 73007027])
              + (float)(*(float *)&dword_140404A6C[v9 + 73007027] + *(float *)&dword_140404A6C[v10 + 73007027]))
      + (float)((float)(*(float *)&dword_140404A6C[v5 + 73007027] + *(float *)&dword_140404A6C[v6 + 73007027])
              + (float)(*(float *)&dword_140404A6C[v8 + 73007027] + *(float *)&dword_140404A6C[v7 + 73007027]));
  v15 = (float)(*(float *)&dword_140404A6C[v12 + 73007028] + *(float *)&dword_140404A6C[v11 + 73007028])
      + (float)(*(float *)&dword_140404A6C[v10 + 73007028] + *(float *)&dword_140404A6C[v9 + 73007028]);
  v16 = (float)(*(float *)&dword_140404A6C[v8 + 73007028] + *(float *)&dword_140404A6C[v7 + 73007028])
      + (float)(*(float *)&dword_140404A6C[v6 + 73007028] + *(float *)&dword_140404A6C[v5 + 73007028]);
  v17 = 5210 * v3;
  v18 = v13 * 0.125;
  v19 = v14 * 0.125;
  *(_QWORD *)a1 = 0;
  v20 = 0;
  v21 = (float)(v15 + v16) * 0.125;
  *(_DWORD *)(a1 + 8) = 0;
  v57 = 0;
  v58 = 0.0;
  v56 = v21;
  do
  {
    v22 = (float *)&v57;
    v23 = 5210 * v3 + *((int *)v59 + v20);
    v24 = 0;
    do
    {
      v25 = 60LL * (int)dword_140404A6C[v23 + 129716769];
      v26 = *(float *)&dword_140404A6C[v24 + 129716727 + v17];
      v27 = *(float *)&dword_140404A6C[v24 + 129716726 + v17];
      v28 = *(float *)&dword_140404A6C[v24 + 129716728 + v17];
      v29 = *(float *)&dword_140404A6C[v25 + 73007028] - v21;
      v30 = *(float *)&dword_140404A6C[v25 + 73007026] - v18;
      v31 = *(float *)&dword_140404A6C[v25 + 73007027] - v19;
      v32 = -(float)((float)((float)(v30 * v27) + (float)(v31 * v26)) + (float)(v29 * v28));
      v33 = (float)(v27 * v32) + v30;
      v34 = (float)(v28 * v32) + v29;
      v35 = (float)(v26 * v32) + v31;
      v36 = fsqrt((float)((float)(v35 * v35) + (float)(v33 * v33)) + (float)(v34 * v34));
      if ( v36 == 0.0 )
      {
        v37 = 0.0;
        v38 = 0.0;
        v39 = 0.0;
      }
      else
      {
        v37 = v33 * (float)(1.0 / v36);
        v38 = v35 * (float)(1.0 / v36);
        v39 = v34 * (float)(1.0 / v36);
      }
      v40 = *(float *)&dword_140404A6C[v25 + 73007032];
      v41 = *(float *)&dword_140404A6C[v25 + 73007034];
      v42 = *(float *)&dword_140404A6C[v25 + 73007033];
      v24 += 3;
      v43 = (float)(v37 * v41) - (float)(v39 * v40);
      v44 = v38;
      *v22 = v36 + *v22;
      v45 = v38 * v40;
      v21 = v56;
      *(float *)((char *)v22 + a1 - (_QWORD)&v57) = (float)((float)(v43 * v26)
                                                          + (float)((float)((float)(v39 * v42) - (float)(v44 * v41))
                                                                  * v27))
                                                  + (float)((float)((float)(v45 - (float)(v37 * v42)) * v28)
                                                          + *(float *)((char *)v22 + a1 - (_QWORD)&v57));
      ++v22;
    }
    while ( v24 < 9 );
    ++v20;
  }
  while ( v20 < 8 );
  v46 = *(float *)(a1 + 4) / *((float *)&v57 + 1);
  v47 = *(float *)(a1 + 8) / v58;
  v48 = *(float *)a1 / *(float *)&v57;
  *(float *)(a1 + 4) = v46;
  *(float *)(a1 + 8) = v47;
  *(float *)a1 = v48;
  v49 = v48 * *(float *)&dword_140404A6C[5210 * v3 + 129716726];
  *(float *)a1 = v49;
  v50 = v48 * *(float *)&dword_140404A6C[5210 * v3 + 129716727];
  *(float *)(a1 + 4) = v50;
  v51 = v48 * *(float *)&dword_140404A6C[5210 * v3 + 129716728];
  *(float *)(a1 + 8) = v51;
  v52 = (float)(v46 * *(float *)&dword_140404A6C[5210 * v3 + 129716729]) + v49;
  *(float *)a1 = v52;
  v53 = (float)(v46 * *(float *)&dword_140404A6C[5210 * v3 + 129716730]) + v50;
  *(float *)(a1 + 4) = v53;
  v54 = (float)(v46 * *(float *)&dword_140404A6C[5210 * v3 + 129716731]) + v51;
  *(float *)(a1 + 8) = v54;
  *(float *)a1 = (float)(v47 * *(float *)&dword_140404A6C[5210 * v3 + 129716732]) + v52;
  *(float *)(a1 + 4) = (float)(v47 * *(float *)&dword_140404A6C[5210 * v3 + 129716733]) + v53;
  *(float *)(a1 + 8) = (float)(v47 * *(float *)&dword_140404A6C[5210 * v3 + 129716734]) + v54;
  return 0; /* the function has no caller */
}
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60

//----- (00000001400A5340) ----------------------------------------------------
__int64 sub_1400A5340()
{
  _WORD *v0;
  bool v1;
  char *v2;

  sub_14024B8D4(&g_182A7D140, 512);
  ((void (           *)(_QWORD, unsigned int *, __int64))SHGetSpecialFolderPathA)(0, &g_182A7D340, 5);
  crt_chdir(&g_182A7D340);
  if ( (unsigned int)crt_chdir(Path) == -1 )
  {
    mkdir(Path);
    crt_chdir(Path);
  }
  v0 = (_WORD *)((char *)&g_182A7D33C + 3);
  do
  {
    v1 = *((_BYTE *)v0 + 1) == 0;
    v0 = (_WORD *)((char *)v0 + 1);
  }
  while ( !v1 );
  v2 = (char *)&g_182A7D33C + 3;
  *v0 = 47;
  do
    v1 = *++v2 == 0;
  while ( !v1 );
  strcpy(v2, Path);
  return crt_chdir(&g_182A7D140);
}

// 14026E550: invalid function type 'BOOL (__stdcall *SHGetSpecialFolderPathA)(HWND hwnd, LPSTR pszPath, int csidl, BOOL fCreate)' has been ignored

//----- (00000001400A5400) ----------------------------------------------------
__int64            sub_1400A5400(__int64 a1)
{
  int v1;
  _BYTE *v2;
  __int64 i;
  char v4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A5400[576];
#define v6 (*(__int64 (*))(void *)(sr_frame_1400A5400 + 0)) /* [rsp+0h] */
#define v7 (*(int (*))(void *)(sr_frame_1400A5400 + 32)) /* [rsp+20h] */
#define v8 (*(_BYTE (*)[512])(void *)(sr_frame_1400A5400 + 48)) /* [rsp+30h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_1400A5400 + 560)) /* [rsp+230h] */

  v1 = 0;
  v2 = v8;
  for ( i = 0; i < 16; ++i )
  {
    v4 = *(_BYTE *)(i + a1);
    if ( !v4 )
      break;
    if ( (unsigned __int8)(v4 - 48) <= 9u )
    {
      ++v1;
      *v2++ = v4;
    }
  }
  if ( (unsigned __int64)v1 >= 0x200 )
    sub_1401F8694();
  v8[v1] = 0;
  crt_sscanf((__int64)v8, "%u", &v7);
  return (unsigned int)v7; /* 0x1400A546E: mov eax, dword ptr [rsp + 0x20] */
}
#undef v6
#undef v7
#undef v8
#undef v9

//----- (00000001400A54F0) ----------------------------------------------------
__int64 sub_1400A54F0()
{
  return (unsigned __int16)sub_14009DE80();
}

//----- (00000001400A56B0) ----------------------------------------------------
__int64            sub_1400A56B0(float *a1, float a2, float a3)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_random_direction(float *, float, float);
  human_random_direction(a1, a2, a3);
  return 0;
}

//----- (00000001400A5C50) ----------------------------------------------------
void            sub_1400A5C50(float *a1, float *a2, float *a3)
{
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;

  v4 = a3[2] - a2[2];
  v5 = fsqrt(
         (float)((float)((float)(a3[1] - a2[1]) * (float)(a3[1] - a2[1]))
               + (float)((float)(*a3 - *a2) * (float)(*a3 - *a2)))
       + (float)(v4 * v4))
     * 0.029296875;
  v6 = expf(-(float)(*(float *)&dword_1402B23D0 * v5));
  v7 = expf(-(float)(*(float *)&dword_1402B23D4 * v5));
  v8 = expf(-(float)(*(float *)&dword_1402B23D8 * v5));
  *a1 = v6;
  a1[1] = v7;
  a1[2] = v8;
}

//----- (00000001400A65B0) ----------------------------------------------------
__int64            sub_1400A65B0(_DWORD *a1, int *a2)
{
  unsigned __int64 v4;
  __int64 SystemTimeAsFileTime;

  if ( a1 )
  {
    ((void (           *)(__int64 *))GetSystemTimeAsFileTime)(&SystemTimeAsFileTime);
    v4 = (SystemTimeAsFileTime - 11644473600000000LL) / 0xAuLL;
    *a1 = v4 / 0xF4240;
    a1[1] = v4 % 0xF4240;
  }
  if ( a2 )
  {
    if ( !g_1449815C8 )
    {
      sub_140238064();
      ++g_1449815C8;
    }
    *a2 = (int)*sub_140237128() / 60;
    a2[1] = *sub_140237118();
  }
  return 0;
}

// 14026E310: invalid function type 'void (__stdcall *GetSystemTimeAsFileTime)(LPFILETIME lpSystemTimeAsFileTime)' has been ignored

//----- (00000001400A6670) ----------------------------------------------------
__int64 sub_1400A6670()
{
  __int64 v0;
  __int64 result;
  unsigned int v2;

  v0 = ((__int64 (           *)(     __int16 *))LoadLibraryW)(L"opengl32.dll");
  g_144980D88 = v0;
  if ( !v0 )
    return 0;
  g_144980D90 = ((__int64 (           *)(__int64,      char *))GetProcAddress)(
                                            v0,
                                            "wglGetProcAddress");
  if ( !g_144980D90 )
    return 0;
  result = sub_1400A6700((__int64 (           *)(     char *))sub_14009E190);
  v2 = result;
  if ( g_144980D88 )
  {
    ((void (*)(void))FreeLibrary)();
    result = v2;
    g_144980D88 = 0;
  }
  return result;
}

// 14026E2F8: invalid function type 'HMODULE (__stdcall *LoadLibraryW)(LPCWSTR lpLibFileName)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (00000001400A74D0) ----------------------------------------------------
__int64            sub_1400A74D0(int a1, float a2, float a3)
{
  float v3;
  int v4;
  __int64 v6;
  float v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  int v11;
  signed int v12;
  signed int *v14;

  v3 = (float)(int)g_160FC481C;
  v4 = 0;
  g_160FC481C = 0;
  v6 = 122LL * a1;
  v7 = *(float *)&dword_140404A6C[v6 + 70087232] - (float)(v3 * 16.0);
  if ( v7 < 0.0 )
    v7 = 0.0;
  v8 = dword_140404A6C[v6 + 70087234];
  *(float *)&dword_140404A6C[v6 + 70087232] = v7;
  if ( v7 > *(float *)&v8 )
  {
    dword_140404A6C[v6 + 70087232] = v8;
    v7 = *(float *)&v8;
  }
  v9 = 0;
  if ( (int)(float)(a2 / (float)(*(float *)&dword_140404A6C[v6 + 70087230] + *(float *)&dword_140404A6C[v6 + 70087228])) >= 0 )
    v9 = (int)(float)(a2 / (float)(*(float *)&dword_140404A6C[v6 + 70087230] + *(float *)&dword_140404A6C[v6 + 70087228]));
  v10 = dword_140404A6C[v6 + 70087227];
  v11 = v10 - 1;
  if ( v9 <= (int)(v10 - 1) )
    v11 = v9;
  if ( (int)(float)((float)(v7 + a3)
                  / (float)(*(float *)&dword_140404A6C[v6 + 70087230] + *(float *)&dword_140404A6C[v6 + 70087229])) >= 0 )
    v4 = (int)(float)((float)(v7 + a3)
                    / (float)(*(float *)&dword_140404A6C[v6 + 70087230] + *(float *)&dword_140404A6C[v6 + 70087229]));
  v12 = v10 * v4 + v11;
  if ( v12 > (int)(dword_140404A6C[v6 + 70087220] - 1) )
  {
    dword_140404A6C[v6 + 70087223] = -1;
    return 0;
  }
  dword_140404A6C[v6 + 70087223] = v12;
  if ( v12 == -1 || g_151042650 || !g_1510426EC || a1 != g_150F61174 )
    return 0;
  v14 = *(signed int **)&dword_140404A6C[v6 + 70087225];
  dword_140404A6C[v6 + 70087222] = v12;
  if ( v14 )
    *v14 = v12;
  return 1;
}

//----- (00000001400A7620) ----------------------------------------------------
__int64            sub_1400A7620(     __m128i *a1)
{
       __m128i *v2;
       __m128i *v3;
  __int64 v4;
       __m128i *v5;
  char **v7;
  int v8;
  char *v9;
  char *v10;
  int v11;
  int v12;

  if ( (int)g_144980D98 >= 3 )
  {
    v7 = *(char ***)&g_144980DB0;
    if ( g_144980DB0 )
    {
      v8 = 0;
      if ( (int)g_144980DA8 > 0 )
      {
        while ( 1 )
        {
          v9 = *v7;
          if ( *v7 )
          {
            v10 = (char *)((char *)a1 - v9);
            do
            {
              v11 = (unsigned __int8)v10[(_QWORD)v9];
              v12 = (unsigned __int8)*v9 - v11;
              if ( v12 )
                break;
              ++v9;
            }
            while ( v11 );
            if ( !v12 )
              break;
          }
          ++v8;
          ++v7;
          if ( v8 >= (int)g_144980DA8 )
            return 0;
        }
        return 1;
      }
    }
    return 0;
  }
  v2 = *(     __m128i **)(unsigned int *)&g_144980DA0;
  if ( !g_144980DA0 )
    return 0;
  if ( !a1 )
    return 0;
  v3 = sub_1401FC614(*(     __m128i **)(unsigned int *)&g_144980DA0, a1);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v4 = -1;
    do
      ++v4;
    while ( SR_VEC_PTR_LANES(128, a1, i8)[v4] );
    v5 = (     __m128i *)((char *)v3 + v4);
    if ( (v3 == v2 || SR_VEC_LANES(128, v3[-1], i8)[15] == 32) && (SR_VEC_PTR_LANES(128, v5, i8)[0] & 0xDF) == 0 )
      break;
    v2 = v5;
    v3 = sub_1401FC614(v5, a1);
    if ( !v3 )
      return 0;
  }
  return 1;
}

//----- (00000001400A7A40) ----------------------------------------------------
void            sub_1400A7A40(float a1, float a2, float a3, float a4, float a5)
{
  float v5 = a2; // xmm1_4: y0 (0x1400A7A7C); Hex-Rays had lost it
  float v6 = a3; // xmm2_4: x1 (0x1400A7A62)
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  char v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  __int64 v33;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A7A40[16];
#define v34 (*(float (*))(void *)(sr_frame_1400A7A40 + 0)) /* [rsp+20h] */
#define v35 (*(float (*))(void *)(sr_frame_1400A7A40 + 4)) /* [rsp+24h] */
#define v36 (*(int (*))(void *)(sr_frame_1400A7A40 + 8)) /* [rsp+28h] */

  v8 = v6;
  v9 = v5;
  v10 = a4 - v5;
  v11 = v6 - a1;
  v12 = fsqrt((float)(v10 * v10) + (float)(v11 * v11));
  if ( v12 == 0.0 )
  {
    v13 = 0.0;
    v14 = 0.0;
  }
  else
  {
    v13 = v11 * (float)(1.0 / v12);
    v14 = v10 * (float)(1.0 / v12);
  }
  v15 = 0;
  g_1AD059440 = 2;
  v16 = 0;
  g_1AD059448 = 0;
  v36 = 0;
  v17 = -v13;
  g_1AD05944C = 9;
  do
  {
    v18 = a5 * *(float *)&dword_140404A6C[2 * v16 + 346696314];
    v19 = a5 * *(float *)&dword_140404A6C[2 * v16 + 346696315];
    v20 = (float)(v13 * v19) + (float)(v14 * v18);
    v21 = (float)(v17 * v18) + (float)(v14 * v19);
    if ( (unsigned __int64)v16 >= 0x20 )
    {
      v22 = v20 + a1;
      v23 = v21 + v9;
    }
    else
    {
      v22 = v20 + v8;
      v23 = v21 + a4;
    }
    v35 = v23;
    v34 = v22;
    sub_14007D520((unsigned int *)&v34, a2, a3);
    v26 = ++v15 & 0x3F;
    v27 = a5 * *(float *)&dword_140404A6C[2 * v26 + 346696314];
    v28 = a5 * *(float *)&dword_140404A6C[2 * v26 + 346696315];
    v29 = (float)(v13 * v28) + (float)(v14 * v27);
    v30 = (float)(v17 * v27) + (float)(v14 * v28);
    if ( (v15 & 0x3Fu) >= 0x20 )
    {
      v31 = v29 + a1;
      v32 = v30 + v9;
    }
    else
    {
      v31 = v29 + v8;
      v32 = v30 + a4;
    }
    v35 = v32;
    v34 = v31;
    sub_14007D520((unsigned int *)&v34, v24, v25);
    ++v16;
  }
  while ( v16 < 64 );
  sub_14006E0D0(v33, a2, a3);
}
#undef v34
#undef v35
#undef v36

//----- (00000001400A9940) ----------------------------------------------------
__int64            sub_1400A9940(int a1, int a2, int a3, float *a4)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_limit_joint_turn(int, int, int, float *);
  human_limit_joint_turn(a1, a2, a3, a4);
  return 0;
}

//----- (00000001400A9EF0) ----------------------------------------------------
__int64            sub_1400A9EF0(int a1, int a2, int a3, float *a4)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_limit_joint_angles(int, int, int, float *);
  human_limit_joint_angles(a1, a2, a3, a4);
  return 0;
}

//----- (00000001400AA510) ----------------------------------------------------
__int64            sub_1400AA510(int a1, int a2)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_keep_arms_off_item(int, int);
  human_keep_arms_off_item(a1, a2);
  return 0;
}

//----- (00000001400AC530) ----------------------------------------------------
__int64            sub_1400AC530(float *a1, int a2, int a3)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_item_28_hand_target(float *, int, int);
  human_item_28_hand_target(a1, a2, a3);
  return 0;
}

//----- (00000001400ACD90) ----------------------------------------------------
void            sub_1400ACD90(float *a1, float *a2, float *a3)
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
  float v21;
  float v22;
  float v23;
  float sr_relative_quaternion[4];
  __m128 v28;

  sub_14010E370(&sr_relative_quaternion[0], a3);
  sub_14010E370(SR_VEC_LANES(128, v28, f32), a2);
  v5 = SR_VEC_LANES(128, v28, f32)[3];
  v6 = SR_VEC_LANES(128, v28, f32)[2];
  v7 = SR_VEC_LANES(128, v28, f32)[0];
  v8 = SR_VEC_LANES(128, v28, f32)[1];
  if ( (float)((float)((float)(sr_relative_quaternion[3] * SR_VEC_LANES(128, v28, f32)[3]) + (float)(sr_relative_quaternion[2] * SR_VEC_LANES(128, v28, f32)[2]))
             + (float)((float)(sr_relative_quaternion[0] * SR_VEC_LANES(128, v28, f32)[0]) + (float)(sr_relative_quaternion[1] * SR_VEC_LANES(128, v28, f32)[1]))) < 0.0 )
  {
    v28 = _mm_xor_ps(v28, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v6 = SR_VEC_LANES(128, v28, f32)[2];
    v8 = SR_VEC_LANES(128, v28, f32)[1];
    v7 = SR_VEC_LANES(128, v28, f32)[0];
    v5 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v28, v28, 255), f32)[0];
  }
  v9 = -v8;
  v10 = -v7;
  v11 = -v6;
  v12 = (float)((float)((float)(v10 * sr_relative_quaternion[3]) + (float)(v5 * sr_relative_quaternion[0])) + (float)(v9 * sr_relative_quaternion[2])) - (float)(v11 * sr_relative_quaternion[1]);
  v13 = (float)((float)((float)(v5 * sr_relative_quaternion[1]) - (float)(v10 * sr_relative_quaternion[2])) + (float)(v9 * sr_relative_quaternion[3])) + (float)(v11 * sr_relative_quaternion[0]);
  v14 = (float)((float)((float)(v10 * sr_relative_quaternion[1]) + (float)(v5 * sr_relative_quaternion[2])) - (float)(v9 * sr_relative_quaternion[0])) + (float)(v11 * sr_relative_quaternion[3]);
  v15 = (float)((float)((float)(sr_relative_quaternion[3] * v5) - (float)(v10 * sr_relative_quaternion[0])) - (float)(v9 * sr_relative_quaternion[1])) - (float)(v11 * sr_relative_quaternion[2]);
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
  v21 = v20 + v20;
  *(float *)&v20 = v21 * *a1;
  v22 = v21 * a1[1];
  v23 = v21 * a1[2];
  *a1 = *(float *)&v20;
  a1[1] = v22;
  a1[2] = v23;
}

//----- (00000001400B29B0) ----------------------------------------------------
__int64            sub_1400B29B0(__int64 a1, int a2, int a3, int a4, int a5, float *a6)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_aim_hand_target(float *, int, int, int, const float *);
  (void)a5;
  human_aim_hand_target((float *)a1, a2, a3, a4, a6);
  return 0;
}

//----- (00000001400B2BF0) ----------------------------------------------------
__int64            sub_1400B2BF0(int a1, int a2, int a3, float *a4, float a5, float a6)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_limit_joint_change(int, int, int, float *, float, float);
  human_limit_joint_change(a1, a2, a3, a4, a5, a6);
  return a2;
}

//----- (00000001400B3A80) ----------------------------------------------------
__int64            sub_1400B3A80(unsigned int a1, int a2)
{
  /* Clean implementation: src/engine/human_hits.c, checked against the original executable
     (tools/native-compare suite hits). */
  extern void human_collide_vehicle(int human, int vehicle);
  human_collide_vehicle((int)a1, a2);
  return a1; /* as the original leaves it; discarded by its caller */
}

//----- (00000001400B4DA0) ----------------------------------------------------
__int64            sub_1400B4DA0(int a1, int a2, int a3, unsigned int *a4, unsigned int *a5, float *a6)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_hold_item(int, int, int, const float *, const float *, const float *);
  human_hold_item(a1, a2, a3, (const float *)a4, (const float *)a5, a6);
  return 0;
}

//----- (00000001400B5410) ----------------------------------------------------
__int64            sub_1400B5410(int a1, signed int a2, signed int a3, float *a4)
{
  __int64 v4;
  __int64 v5;
  __int64 result;

  v4 = a3;
  v5 = a1;
  result = sub_140055FA0(a1, a2, a3, a4);
  if ( (_DWORD)result != -1 )
    dword_140404A6C[7166 * v5 + 280651511 + 78 * v4] = result;
  return result;
}

//----- (00000001400B94B0) ----------------------------------------------------
__int64            sub_1400B94B0(int a1, int a2)
{
  unsigned int *v2;
  float *v3;
  float v4;
  unsigned int v6;
  int v7;
  float *v8;
  float v9;
  float v10;
  float v11;
  float v13[4];

  v2 = &g_182BBB194;
  v3 = (float *)&g_182BBB1DC;
  v4 = 0.5;
  v6 = -1;
  v7 = 0;
  v8 = (float *)&dword_140404A6C[7166 * a1 + 280651293];
  v9 = v8[401] * 1.5;
  v10 = v8[400] * 1.5;
  v13[0] = v8[381] - (float)(v8[399] * 1.5);
  v13[1] = v8[382] - v10;
  v13[2] = v8[383] - v9;
  do
  {
    if ( *(v2 - 5) && (a2 == -1 || *v2 == a2) && v2[4] == -1 )
    {
      v11 = sub_14007ABA0(v8 + 381, v13, v3);
      if ( v11 < v4 )
      {
        v6 = v7;
        v4 = v11;
      }
    }
    ++v7;
    v3 += 1760;
    v2 += 1760;
  }
  while ( v7 < 1024 );
  return v6;
}

//----- (00000001400B95E0) ----------------------------------------------------
void sub_1400B95E0()
{
  extern void world_update_human_bounds(void);
  /* src/engine/world_blocks.c */
  world_update_human_bounds();
}
