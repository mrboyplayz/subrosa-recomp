#include "shared_client.h"

// 1400A0ABC: conditional instruction was optimized away because rdx.8 is in (1..FF)
// 14009FEF6: variable 'v5' is possibly undefined
// 14009FEF6: variable 'v6' is possibly undefined
// 1400A00F8: variable 'v17' is possibly undefined
// 1400A00F8: variable 'v16' is possibly undefined
// 1400A00F8: variable 'v18' is possibly undefined
// 1400A0B05: variable 'v44' is possibly undefined
// 1400A0B05: variable 'v45' is possibly undefined
// 1402797E0: using guessed type __int128 xmmword_1402797E0;
// 1402797F0: using guessed type __int128 xmmword_1402797F0;
// 140279800: using guessed type __int128 xmmword_140279800;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 150F610FC: using guessed type unsigned int;
// 150F61108: using guessed type unsigned int;
// 150F61110: using guessed type unsigned int;
// 1829F8FDC: using guessed type unsigned int;
// 18329C404: using guessed type unsigned int;
// 18329CC24: using guessed type unsigned int;
// 18329CC28: using guessed type unsigned int;
// 18329CC34: using guessed type unsigned int;
// 18329CC38: using guessed type unsigned int;
// 18329CC3C: using guessed type unsigned int;
// 18329CC40: using guessed type unsigned int;
// 18329CC4C: using guessed type unsigned int;
// 183E93540: using guessed type unsigned int;
// 183E93544: using guessed type unsigned int;
// 183EBFAA4: using guessed type unsigned int;
// 183EBFAA8: using guessed type unsigned int;
// 183EBFCBC: using guessed type unsigned int;
// 183EBFD5C: using guessed type unsigned int;
// 183F7C620: using guessed type unsigned int;
// 183F7C630: using guessed type unsigned int;
// 183F7C640: using guessed type unsigned int;
// 183F7C650: using guessed type unsigned int;
// 183F7C660: using guessed type unsigned int;
// 183F7C670: using guessed type unsigned int;
// 183F7C680: using guessed type unsigned int;
// 183F7C690: using guessed type unsigned int;
// 183F7C6A0: using guessed type unsigned int;
// 183F7C6B0: using guessed type unsigned int;
// 183F7C6B8: using guessed type unsigned int;
// 183F7C6C0: using guessed type unsigned int;
// 183F7C6C4: using guessed type unsigned int;
// 183F7C6D0: using guessed type unsigned int;
// 183F7C6E0: using guessed type unsigned int;
// 183F7C6F0: using guessed type unsigned int;
// 183F7C700: using guessed type unsigned int;
// 183F7C710: using guessed type unsigned int;
// 183F7C720: using guessed type unsigned int;
// 183F7C730: using guessed type unsigned int;
// 183F7C740: using guessed type unsigned int;
// 183F7C750: using guessed type unsigned int;
// 183F7C758: using guessed type unsigned int;
// 1A8E3C9E0: using guessed type unsigned int;
// 1A8E3C9E4: using guessed type unsigned int;
// 1A8E3C9E8: using guessed type unsigned int;
// 1B0032400: using guessed type int[];
// 1B0032404: using guessed type unsigned int;

//----- (00000001400A1640) ----------------------------------------------------
void            sub_1400A1640(int a1, unsigned int a2)
{
  __int64 v3; // r14
  int v4; // ebp
  unsigned int *v5; // rbx
  int v6; // r8d
  __int64 v7; // rdi
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  unsigned int v12; // eax
  __int64 v13; // rdx

  v3 = a1;
  if ( !dword_140404A6C[284024634] )
  {
    v4 = 0;
    if ( (int)dword_140404A6C[280649848] > 0 )
    {
      v5 = &dword_140404A6C[280649850];
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
            *(unsigned int *)((char *)&dword_140404A6C[71856369] + v9) = dword_1402B29D0[v6 & 0x7F];
          else
            *(unsigned int *)((char *)&dword_140404A6C[71856369] + v9) = v6;
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
      while ( v4 < (int)dword_140404A6C[280649848] );
    }
  }
}

// 1402B29D0: using guessed type int dword_1402B29D0[128];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A1AE0) ----------------------------------------------------
__int64            sub_1400A1AE0(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  double v5; // xmm2_8
  float v6; // xmm9_4
  float v7; // xmm8_4
  double v8; // xmm2_8
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm10_4
  double v12; // xmm0_8
  float v13; // xmm2_4
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
        v9 = (float)(*(float *)&dword_140404A6C[284024599] * 1.25) * 0.0009765625;
        v10 = (float)(*(float *)&dword_140404A6C[284024600] * 1.25) * 0.0009765625;
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

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A1D20) ----------------------------------------------------
__int64            sub_1400A1D20(int a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // rbx
  bool v4; // zf
  int v5; // edx
  float v6; // xmm2_4
  unsigned int v7; // ecx
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  unsigned int v13; // xmm4_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4

  v1 = a1;
  result = 14388LL * a1;
  v3 = a1;
  if ( *(unsigned int *)((char *)&dword_140404A6C[71856340] + result) != 3 )
  {
    *(_QWORD *)((char *)&dword_140404A6C[71856296] + result) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[71856298] + result) = 0;
  }
  v4 = dword_140404A6C[280649838] == 0;
  *(unsigned int *)((char *)&dword_140404A6C[71856330] + result) = 1;
  *(_QWORD *)((char *)&dword_140404A6C[71856293] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71856295] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71856325] + result) = 0;
  if ( v4 )
  {
    v5 = *(unsigned int *)((char *)&dword_140404A6C[71856292] + result);
    if ( v5 != -1 )
    {
      v6 = 0.0;
      v7 = dword_140404A6C[284024633];
      if ( !dword_140404A6C[284024634] || dword_140404A6C[284024633] )
      {
        if ( *(float *)&dword_140404A6C[421831839] >= -1.0 )
        {
          if ( *(float *)&dword_140404A6C[421831839] <= 1.0 )
            v11 = 0.0;
          else
            v11 = *(float *)&dword_140404A6C[421831839] + -1.0;
        }
        else
        {
          v11 = *(float *)&dword_140404A6C[421831839] + 1.0;
        }
        if ( *(float *)&dword_140404A6C[421831840] >= -1.0 )
        {
          if ( *(float *)&dword_140404A6C[421831840] <= 1.0 )
            v12 = 0.0;
          else
            v12 = *(float *)&dword_140404A6C[421831840] + -1.0;
        }
        else
        {
          v12 = *(float *)&dword_140404A6C[421831840] + 1.0;
        }
        *(float *)&dword_140404A6C[421831839] = v11
                                              + (float)((float)(*(float *)&dword_140404A6C[284024599] * 0.125) * 0.5);
        *(float *)&v13 = v12 + (float)((float)(*(float *)&dword_140404A6C[284024600] * 0.125) * 0.5);
        v14 = *(float *)((char *)&dword_140404A6C[71856293] + result);
        *(float *)((char *)&dword_140404A6C[71856295] + result) = *(float *)&dword_140404A6C[421831839]
                                                                + *(float *)((char *)&dword_140404A6C[71856295] + result);
        dword_140404A6C[421831840] = v13;
        *(float *)((char *)&dword_140404A6C[71856293] + result) = v14 - *(float *)&v13;
        if ( !v7 )
        {
          *(float *)((char *)&dword_140404A6C[71856297] + result) = *(float *)((char *)&dword_140404A6C[71856297]
                                                                             + result)
                                                                  * 0.875;
          *(float *)((char *)&dword_140404A6C[71856298] + result) = *(float *)((char *)&dword_140404A6C[71856298]
                                                                             + result)
                                                                  * 0.875;
        }
      }
      else
      {
        v8 = 1.0 - *(float *)((char *)&dword_140404A6C[71856332] + result);
        v9 = (float)((float)(*(float *)&dword_140404A6C[284024599] * v8) * 0.0015384615)
           + *(float *)((char *)&dword_140404A6C[71856297] + result);
        v10 = (float)((float)(*(float *)&dword_140404A6C[284024600] * v8) * 0.0015384615)
            + *(float *)((char *)&dword_140404A6C[71856298] + result);
        if ( v9 >= -2.74889357189125 )
        {
          *(float *)((char *)&dword_140404A6C[71856297] + result) = v9;
          if ( v9 > 2.74889357189125 )
            *(unsigned int *)((char *)&dword_140404A6C[71856297] + result) = 1076882911;
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[71856297] + result) = -1070600737;
        }
        if ( v10 >= -1.570796326795 )
        {
          *(float *)((char *)&dword_140404A6C[71856298] + result) = v10;
          if ( v10 > 1.570796326795 )
            *(unsigned int *)((char *)&dword_140404A6C[71856298] + result) = 1070141403;
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[71856298] + result) = -1077342245;
        }
      }
      v15 = (float)((float)(int)dword_140404A6C[137297772] * 0.125)
          + *(float *)((char *)&dword_140404A6C[71856331] + result);
      if ( v15 >= 0.0 )
      {
        v6 = (float)((float)(int)dword_140404A6C[137297772] * 0.125)
           + *(float *)((char *)&dword_140404A6C[71856331] + result);
        if ( v15 > 0.875 )
          v6 = 0.875;
      }
      v4 = dword_140404A6C[280648133] == 0;
      v16 = *(float *)((char *)&dword_140404A6C[71856332] + result);
      *(float *)((char *)&dword_140404A6C[71856331] + result) = v6;
      *(float *)((char *)&dword_140404A6C[71856332] + result) = (float)((float)(v6 - v16) * 0.0625) + v16;
      if ( v4 )
      {
        if ( BYTE2(dword_140404A6C[284024771]) )
          *(float *)((char *)&dword_140404A6C[71856296] + result) = *(float *)((char *)&dword_140404A6C[71856296]
                                                                             + result)
                                                                  + 0.03125;
        if ( BYTE2(dword_140404A6C[284024770]) )
          *(float *)((char *)&dword_140404A6C[71856296] + result) = *(float *)((char *)&dword_140404A6C[71856296]
                                                                             + result)
                                                                  - 0.03125;
        if ( LOBYTE(dword_140404A6C[284024766]) )
          *(float *)((char *)&dword_140404A6C[71856294] + result) = *(float *)((char *)&dword_140404A6C[71856294]
                                                                             + result)
                                                                  - 1.0;
        if ( HIBYTE(dword_140404A6C[284024766]) )
          *(float *)((char *)&dword_140404A6C[71856294] + result) = *(float *)((char *)&dword_140404A6C[71856294]
                                                                             + result)
                                                                  + 1.0;
        if ( LOBYTE(dword_140404A6C[284024776]) )
          *(unsigned int *)((char *)&dword_140404A6C[71856325] + result) |= 4u;
        if ( LOBYTE(dword_140404A6C[284024821]) )
          *(unsigned int *)((char *)&dword_140404A6C[71856325] + result) |= 8u;
        if ( BYTE1(dword_140404A6C[284024821]) )
          dword_140404A6C[3597 * v1 + 71856325] |= 0x10u;
        if ( LOBYTE(dword_140404A6C[284024767]) )
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183F7C750: using guessed type unsigned int;
// 1A4D2DCEC: using guessed type unsigned int;

//----- (00000001400A21B0) ----------------------------------------------------
void            sub_1400A21B0(int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned int v6; // eax
  signed int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  float v11; // xmm1_4
  int v12; // xmm0_4
  float v13; // xmm8_4
  unsigned int v14; // r12d
  float v15; // xmm9_4
  float v16; // xmm7_4
  unsigned int v17; // xmm1_4
  float v18; // xmm8_4
  float v19; // xmm7_4
  float v20; // xmm10_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  unsigned int v23; // ebx
  unsigned int v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  unsigned int v27; // xmm10_4
  float v28; // xmm7_4
  float *v29; // rax
  float v30; // xmm0_4
  float v31; // xmm0_4
  unsigned int v32; // r15d
  unsigned int v33; // xmm6_4
  float v34; // xmm1_4
  unsigned int v35; // ecx
  float v36; // xmm8_4
  float v37; // xmm2_4
  float v38; // xmm4_4
  float v39; // xmm3_4
  float v40; // xmm0_4
  unsigned int v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm7_4
  unsigned int v44; // xmm4_4
  float v45; // xmm4_4
  float v46; // xmm2_4
  unsigned int v47; // xmm0_4
  float v48; // xmm1_4
  double v49; // xmm0_8
  float v50; // xmm0_4
  float v51; // xmm4_4
  float v52; // xmm7_4
  float v53; // xmm4_4
  unsigned int v54; // xmm0_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  float v57; // xmm1_4
  __int64 v58; // rcx
  int v59; // [rsp+B0h] [rbp+8h]

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
    if ( !dword_140404A6C[280649838] )
    {
      v7 = -1;
      v8 = 28664 * v5 + 40LL * (BYTE1(dword_140404A6C[284024821]) != 0);
      if ( *(int *)((char *)&dword_140404A6C[280658139] + v8) > 0 )
        v7 = *(unsigned int *)((char *)&dword_140404A6C[280658140] + v8);
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
        dword_140404A6C[v2 + 71856330] += dword_140404A6C[137297772];
        dword_140404A6C[137297772] = 0;
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
      v13 = *(float *)&dword_140404A6C[284024599];
      v14 = dword_140404A6C[73991627];
      v15 = *(float *)&dword_140404A6C[284024600];
      v16 = *(float *)&dword_140404A6C[284024600];
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
      v23 = dword_140404A6C[280648133];
      if ( !dword_140404A6C[280648133] && dword_140404A6C[280649845] )
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
        v32 = dword_140404A6C[280649843];
        *v29 = v31;
        dword_140404A6C[v2 + 71856325] |= 2u;
LABEL_63:
        v44 = dword_140404A6C[v2 + 71856297];
        goto LABEL_64;
      }
      v32 = dword_140404A6C[280649843];
      if ( v7 == -1 || dword_140404A6C[1760 * v7 + 278845898] != 28 && !dword_140404A6C[280649843] )
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
      if ( !dword_140404A6C[280649843] )
      {
        sub_1400A1AE0(a1);
        v32 = dword_140404A6C[280649843];
        v23 = dword_140404A6C[280648133];
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
      v35 = dword_140404A6C[284024633];
      v36 = (float)(v18 * 0.00048828125) + v34;
      *(float *)&dword_140404A6C[v2 + 71856297] = v36;
      if ( !v35 )
        *(float *)&dword_140404A6C[v2 + 71856364] = (float)(*(float *)&dword_140404A6C[73991630] * v15)
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
            if ( BYTE2(dword_140404A6C[284024771]) )
              *(float *)&dword_140404A6C[v2 + 71856296] = *(float *)&dword_140404A6C[v2 + 71856296] + 1.0;
            if ( BYTE2(dword_140404A6C[284024770]) )
              *(float *)&dword_140404A6C[v2 + 71856296] = *(float *)&dword_140404A6C[v2 + 71856296] - 1.0;
            if ( LOBYTE(dword_140404A6C[284024766]) )
              *(float *)&dword_140404A6C[v2 + 71856294] = *(float *)&dword_140404A6C[v2 + 71856294] - 1.0;
            if ( HIBYTE(dword_140404A6C[284024766]) )
              *(float *)&dword_140404A6C[v2 + 71856294] = *(float *)&dword_140404A6C[v2 + 71856294] + 1.0;
            if ( LOBYTE(dword_140404A6C[284024776]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 4u;
            if ( v32 )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x20u;
            if ( dword_140404A6C[284024356] && dword_140404A6C[285101134] )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x20u;
            if ( BYTE1(dword_140404A6C[284024770]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x1000u;
            if ( LOBYTE(dword_140404A6C[284024784]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x40000u;
            if ( BYTE1(dword_140404A6C[284024821]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x10u;
            if ( LOBYTE(dword_140404A6C[284024821]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 8u;
            if ( BYTE1(dword_140404A6C[284024772]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x80000u;
            if ( v7 != -1 )
            {
              v58 = 1760LL * v7;
              if ( ((dword_140404A6C[v58 + 278845898] - 25) & 0xFFFFFFF7) == 0 && dword_140404A6C[v58 + 278846052] == 1 )
                sub_1400A2DC0(a1, v7);
            }
            if ( LOBYTE(dword_140404A6C[284024767]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x800u;
            if ( BYTE1(dword_140404A6C[284024767]) )
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
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E46198: using guessed type unsigned int;
// 160FC481C: using guessed type unsigned int;
// 18329B180: using guessed type unsigned int;
// 18329CC38: using guessed type unsigned int;
// 183F7C6C8: using guessed type unsigned int;
// 183F7C6CC: using guessed type unsigned int;
// 183F7C750: using guessed type unsigned int;

//----- (00000001400A2DC0) ----------------------------------------------------
__int64            sub_1400A2DC0(int a1, unsigned int a2)
{
  __int64 result; // rax

  if ( !BYTE2(dword_140404A6C[284024789]) && BYTE2(dword_140404A6C[284024661]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 0;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(dword_140404A6C[284024787]) && BYTE1(dword_140404A6C[284024659]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 1;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(dword_140404A6C[284024787]) && BYTE2(dword_140404A6C[284024659]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(dword_140404A6C[284024787]) && HIBYTE(dword_140404A6C[284024659]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 3;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(dword_140404A6C[284024788]) && LOBYTE(dword_140404A6C[284024660]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 4;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(dword_140404A6C[284024788]) && BYTE1(dword_140404A6C[284024660]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 5;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(dword_140404A6C[284024788]) && BYTE2(dword_140404A6C[284024660]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 6;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(dword_140404A6C[284024788]) && HIBYTE(dword_140404A6C[284024660]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 7;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(dword_140404A6C[284024789]) && LOBYTE(dword_140404A6C[284024661]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 8;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(dword_140404A6C[284024789]) && BYTE1(dword_140404A6C[284024661]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 9;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(dword_140404A6C[284024774]) && HIBYTE(dword_140404A6C[284024646]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 0;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(dword_140404A6C[284024772]) && BYTE2(dword_140404A6C[284024644]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 1;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(dword_140404A6C[284024772]) && HIBYTE(dword_140404A6C[284024644]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(dword_140404A6C[284024773]) && LOBYTE(dword_140404A6C[284024645]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 3;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(dword_140404A6C[284024773]) && BYTE1(dword_140404A6C[284024645]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 4;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(dword_140404A6C[284024773]) && BYTE2(dword_140404A6C[284024645]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 5;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(dword_140404A6C[284024773]) && HIBYTE(dword_140404A6C[284024645]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 6;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(dword_140404A6C[284024774]) && LOBYTE(dword_140404A6C[284024646]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 7;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(dword_140404A6C[284024774]) && BYTE1(dword_140404A6C[284024646]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 8;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(dword_140404A6C[284024774]) )
  {
    if ( BYTE2(dword_140404A6C[284024646]) )
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A3770) ----------------------------------------------------
void            sub_1400A3770(int a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // r10d
  __int64 v6; // rdx
  char v7; // al
  unsigned __int8 v8; // cl
  int v9; // r8d
  unsigned __int8 v10; // al
  unsigned int v11; // edx
  int v12; // r11d
  __int64 v13; // rcx
  char v14; // al

  if ( dword_140404A6C[283831312] == 4 && (v1 = 3597LL * a1, dword_140404A6C[v1 + 71856266]) )
  {
    if ( dword_140404A6C[v1 + 71856342] == 1
      && HIBYTE(dword_140404A6C[284024774])
      && !HIBYTE(dword_140404A6C[284024646]) )
    {
      v2 = dword_140404A6C[284021984] ^ 1;
      dword_140404A6C[284021984] ^= 1u;
    }
    else
    {
      v2 = dword_140404A6C[284021984];
    }
    if ( v2 )
    {
      v3 = dword_140404A6C[284021982];
      if ( BYTE2(dword_140404A6C[284024772]) )
        v3 = -1;
      dword_140404A6C[284021982] = v3;
      if ( LOBYTE(dword_140404A6C[284024776]) )
      {
        if ( !LOBYTE(dword_140404A6C[284024648]) )
        {
          if ( v3 >= 0 )
          {
            LOBYTE(v4) = v3 + 1;
            if ( BYTE1(dword_140404A6C[284024821]) )
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
            if ( BYTE1(dword_140404A6C[284024821]) )
              v7 = -1;
            v4 = (unsigned __int8)(v4 + v7);
            if ( v4 == v5 )
              return;
          }
          dword_140404A6C[284021982] = v4;
        }
      }
    }
  }
  else
  {
    v8 = 0;
    dword_140404A6C[284021984] = 0;
    if ( (dword_140404A6C[283831312] == 3 || dword_140404A6C[283831312] - 5 <= 2)
      && !dword_140404A6C[284021983]
      && !dword_140404A6C[280648133] )
    {
      v9 = dword_140404A6C[284021982];
      if ( BYTE2(dword_140404A6C[284024772]) )
        v9 = -1;
      if ( LOBYTE(dword_140404A6C[284024776]) && !LOBYTE(dword_140404A6C[284024648]) )
      {
        v10 = v9;
        if ( v9 >= 0 )
        {
          v8 = v9 + 1;
          if ( BYTE1(dword_140404A6C[284024821]) )
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
          if ( BYTE1(dword_140404A6C[284024821]) )
            v14 = -1;
          v11 = (unsigned __int8)(v11 + v14);
          if ( v11 == v12 )
            goto LABEL_46;
        }
        v9 = v11;
      }
LABEL_46:
      if ( dword_140404A6C[283831448] != 2 )
        v9 = -1;
      dword_140404A6C[284021982] = v9;
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFAAC: using guessed type unsigned int;
// 183F79DE4: using guessed type unsigned int;
// 183F79DEC: using guessed type unsigned int;

//----- (00000001400A3D70) ----------------------------------------------------
__int64 sub_1400A3D70()
{
  int i; // ecx
  char v1; // dl
  int v2; // r9d
  __int64 v3; // rdx
  char v4; // cl
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  for ( i = dword_140404A6C[293250413]; i < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++i )
  {
    v1 = *((_BYTE *)&dword_140404A6C[293250415] + i);
    if ( (unsigned __int8)(v1 - 48) <= 9u )
      break;
    if ( v1 == 45 )
      break;
  }
  v2 = 0;
  if ( i < (int)dword_140404A6C[293250414] )
  {
    v3 = 0;
    do
    {
      if ( v3 >= 255 )
        break;
      v4 = *((_BYTE *)&dword_140404A6C[293250415] + i);
      if ( (unsigned __int8)(v4 - 48) > 9u && v4 != 45 )
        break;
      *((_BYTE *)&dword_140404A6C[293512559] + v3) = v4;
      ++v2;
      ++v3;
      i = ++dword_140404A6C[293250413];
    }
    while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
  }
  *((_BYTE *)&dword_140404A6C[293512559] + v2) = 0;
  sub_14015B070((__int64)&dword_140404A6C[293512559], "%d", &v6);
  return v6;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE020: using guessed type unsigned int;

//----- (00000001400A3E30) ----------------------------------------------------
__int64 sub_1400A3E30()
{
  struct hostent *v0; // rax
  struct hostent *v1; // rdi
  _QWORD *v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
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
      v3 = dword_140404A6C[179473694];
      if ( *v2 )
      {
        v4 = 0;
        do
        {
          if ( v4 >= 16 )
            break;
          v5 = ntohl_sr(*(unsigned int *)v2[v4]);
          v6 = (int)dword_140404A6C[179473694];
          ++v4;
          dword_140404A6C[2 * dword_140404A6C[179473694] + 179457309] = v5 | 0xFF;
          LOWORD(dword_140404A6C[2 * v6 + 179457310]) = dword_140404A6C[289301091];
          v3 = v6 + 1;
          dword_140404A6C[179473694] = v3;
          v2 = *((_QWORD **)v1 + 3);
        }
        while ( v2[v4] );
      }
      dword_140404A6C[179473693] = v3;
    }
  }
  return 0; /* the function has no caller */
}
#undef v8
#undef name
#undef v10

// 140198FCB: using guessed type __int64 __fastcall _WSAFDIsSet(_QWORD, _QWORD);
// 140198FD7: using guessed type __int64 __fastcall closesocket(_QWORD);
// 140198FDD: using guessed type __int64 __fastcall connect(_QWORD, _QWORD, _QWORD);
// 140198FE3: using guessed type __int64 __fastcall ioctlsocket(_QWORD, _QWORD, _QWORD);
// 140198FE9: using guessed type __int64 __fastcall getsockopt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140198FF5: using guessed type __int64 __fastcall htons(_QWORD);
// 140199001: using guessed type __int64 __fastcall ntohl(_QWORD);
// 14019900D: using guessed type __int64 __fastcall recv(_QWORD, _QWORD, _QWORD, _QWORD);
// 14019901F: using guessed type __int64 __fastcall send(_QWORD, _QWORD, _QWORD, _QWORD);
// 14019902B: using guessed type __int64 __fastcall socket(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18329C1E0: using guessed type unsigned int;
// 18329C1E4: using guessed type unsigned int;

//----- (00000001400A4440) ----------------------------------------------------
__int64 sub_1400A4440()
{
  unsigned int v0; // ecx
  unsigned int *v1; // rax

  v0 = 0;
  v1 = &dword_140404A6C[486149253];
  while ( *v1 )
  {
    ++v0;
    v1 += 61;
    if ( (__int64)v1 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A4560) ----------------------------------------------------
__int64 sub_1400A4560()
{
  unsigned int v0; // ecx
  unsigned int *v1; // rax

  v0 = 0;
  v1 = &dword_140404A6C[278520517];
  while ( *v1 )
  {
    ++v0;
    v1 += 3;
    if ( (__int64)v1 >= (__int64)&dword_140404A6C[278521285] )
      return 0xFFFFFFFFLL;
  }
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A4620) ----------------------------------------------------
__int64            sub_1400A4620(int a1, float a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // rdx
  unsigned int *v5; // rax
  unsigned int v6; // edx
  float v7; // xmm2_4

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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A4DD0) ----------------------------------------------------
__int64            sub_1400A4DD0(__int64 a1, int a2)
{
  __int64 v3; // rbp
  __int64 v4; // r10
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  float v13; // xmm14_4
  float v14; // xmm15_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  __int64 v17; // rbx
  float v18; // xmm14_4
  float v19; // xmm15_4
  __int64 v20; // r10
  float v21; // xmm2_4
  float *v22; // rdx
  __int64 v23; // r11
  __int64 v24; // r8
  __int64 v25; // rcx
  float v26; // xmm10_4
  float v27; // xmm11_4
  float v28; // xmm12_4
  float v29; // xmm5_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm2_4
  float v33; // xmm8_4
  float v34; // xmm7_4
  float v35; // xmm6_4
  float v36; // xmm5_4
  float v37; // xmm8_4
  float v38; // xmm6_4
  float v39; // xmm7_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm3_4
  float v43; // xmm4_4
  float v44; // xmm0_4
  float v45; // xmm6_4
  float v46; // xmm6_4
  float v47; // xmm5_4
  float v48; // xmm4_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm4_4
  float v52; // xmm3_4
  float v53; // xmm2_4
  float v54; // xmm6_4
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

// 140278F80: using guessed type __int128 xmmword_140278F80;
// 140279020: using guessed type __int128 xmmword_140279020;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A5340) ----------------------------------------------------
__int64 sub_1400A5340()
{
  _WORD *v0; // rcx
  bool v1; // zf
  char *v2; // rbx

  sub_14024B8D4(&dword_140404A6C[278520245], 512);
  ((void (           *)(_QWORD, unsigned int *, __int64))SHGetSpecialFolderPathA)(0, &dword_140404A6C[278520373], 5);
  sub_14024C22C(&dword_140404A6C[278520373]);
  if ( (unsigned int)sub_14024C22C(Path) == -1 )
  {
    mkdir(Path);
    sub_14024C22C(Path);
  }
  v0 = (_WORD *)((char *)&dword_140404A6C[278520372] + 3);
  do
  {
    v1 = *((_BYTE *)v0 + 1) == 0;
    v0 = (_WORD *)((char *)v0 + 1);
  }
  while ( !v1 );
  v2 = (char *)&dword_140404A6C[278520372] + 3;
  *v0 = 47;
  do
    v1 = *++v2 == 0;
  while ( !v1 );
  strcpy(v2, Path);
  return sub_14024C22C(&dword_140404A6C[278520245]);
}

// 14026E550: invalid function type 'BOOL (__stdcall *SHGetSpecialFolderPathA)(HWND hwnd, LPSTR pszPath, int csidl, BOOL fCreate)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A5400) ----------------------------------------------------
__int64            sub_1400A5400(__int64 a1)
{
  int v1; // r10d
  _BYTE *v2; // r9
  __int64 i; // rdx
  char v4; // r8
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
  sub_14015B070((__int64)v8, "%u", &v7);
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
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1602E12C0: using guessed type unsigned int;

//----- (00000001400A5C50) ----------------------------------------------------
void            sub_1400A5C50(float *a1, float *a2, float *a3)
{
  float v4; // xmm0_4
  float v5; // xmm9_4
  float v6; // xmm8_4
  float v7; // xmm6_4
  float v8; // xmm0_4

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

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402B23D0: using guessed type int dword_1402B23D0;
// 1402B23D4: using guessed type int dword_1402B23D4;
// 1402B23D8: using guessed type int dword_1402B23D8;

//----- (00000001400A65B0) ----------------------------------------------------
__int64            sub_1400A65B0(_DWORD *a1, int *a2)
{
  unsigned __int64 v4; // rcx
  __int64 SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    ((void (           *)(__int64 *))GetSystemTimeAsFileTime)(&SystemTimeAsFileTime);
    v4 = (SystemTimeAsFileTime - 11644473600000000LL) / 0xAuLL;
    *a1 = v4 / 0xF4240;
    a1[1] = v4 % 0xF4240;
  }
  if ( a2 )
  {
    if ( !dword_140404A6C[18215639] )
    {
      sub_140238064();
      ++dword_140404A6C[18215639];
    }
    *a2 = (int)*sub_140237128() / 60;
    a2[1] = *sub_140237118();
  }
  return 0;
}

// 14026E310: invalid function type 'void (__stdcall *GetSystemTimeAsFileTime)(LPFILETIME lpSystemTimeAsFileTime)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1449815C8: using guessed type unsigned int;

//----- (00000001400A6670) ----------------------------------------------------
__int64 sub_1400A6670()
{
  __int64 v0; // rax
  __int64 result; // rax
  unsigned int v2; // ebx

  v0 = ((__int64 (           *)(     __int16 *))LoadLibraryW)(L"opengl32.dll");
  *(_QWORD *)&dword_140404A6C[18215111] = v0;
  if ( !v0 )
    return 0;
  *(_QWORD *)&dword_140404A6C[18215113] = ((__int64 (           *)(__int64,      char *))GetProcAddress)(
                                            v0,
                                            "wglGetProcAddress");
  if ( !*(_QWORD *)&dword_140404A6C[18215113] )
    return 0;
  result = sub_1400A6700((__int64 (           *)(     char *))sub_14009E190);
  v2 = result;
  if ( *(_QWORD *)&dword_140404A6C[18215111] )
  {
    ((void (*)(void))FreeLibrary)();
    result = v2;
    *(_QWORD *)&dword_140404A6C[18215111] = 0;
  }
  return result;
}

// 14026E2F8: invalid function type 'HMODULE (__stdcall *LoadLibraryW)(LPCWSTR lpLibFileName)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 140270438: using guessed type __int16 LibFileName[13];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D90: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (00000001400A74D0) ----------------------------------------------------
__int64            sub_1400A74D0(int a1, float a2, float a3)
{
  float v3; // xmm0_4
  int v4; // r11d
  __int64 v6; // r8
  float v7; // xmm3_4
  unsigned int v8; // xmm0_4
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // r9d
  signed int v12; // r9d
  signed int *v14; // rax

  v3 = (float)(int)dword_140404A6C[137297772];
  v4 = 0;
  dword_140404A6C[137297772] = 0;
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
  if ( v12 == -1 || dword_140404A6C[70317817] || !dword_140404A6C[70317856] || a1 != dword_140404A6C[70087106] )
    return 0;
  v14 = *(signed int **)&dword_140404A6C[v6 + 70087225];
  dword_140404A6C[v6 + 70087222] = v12;
  if ( v14 )
    *v14 = v12;
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160FC481C: using guessed type unsigned int;

//----- (00000001400A7620) ----------------------------------------------------
__int64            sub_1400A7620(     __m128i *a1)
{
       __m128i *v2; // rdi
       __m128i *v3; // rax
  __int64 v4; // rcx
       __m128i *v5; // rcx
  char **v7; // r9
  int v8; // r10d
  char *v9; // rax
  char *v10; // r8
  int v11; // ecx
  int v12; // edx

  if ( (int)dword_140404A6C[18215115] >= 3 )
  {
    v7 = *(char ***)&dword_140404A6C[18215121];
    if ( *(_QWORD *)&dword_140404A6C[18215121] )
    {
      v8 = 0;
      if ( (int)dword_140404A6C[18215119] > 0 )
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
          if ( v8 >= (int)dword_140404A6C[18215119] )
            return 0;
        }
        return 1;
      }
    }
    return 0;
  }
  v2 = *(     __m128i **)&dword_140404A6C[18215117];
  if ( !*(_QWORD *)&dword_140404A6C[18215117] )
    return 0;
  if ( !a1 )
    return 0;
  v3 = sub_1401FC614(*(     __m128i **)&dword_140404A6C[18215117], a1);
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

// 1400A77FB: variable 'a3' is possibly undefined
// 1400A7804: variable 'a2' is possibly undefined
// 1400A78E5: variable 'a2' is possibly undefined
// 1400A78E5: variable 'a3' is possibly undefined
// 1400A7956: variable 'v20' is possibly undefined
// 1400A7956: variable 'v21' is possibly undefined
// 1400A79D2: variable 'v28' is possibly undefined
// 1400A79D2: variable 'v29' is possibly undefined
// 1400A7A30: variable 'v37' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;

//----- (00000001400A7A40) ----------------------------------------------------
void            sub_1400A7A40(float a1, float a2, float a3, float a4, float a5)
{
  float v5 = a2; // xmm1_4: y0 (0x1400A7A7C); Hex-Rays had lost it
  float v6 = a3; // xmm2_4: x1 (0x1400A7A62)
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  char v15; // di
  __int64 v16; // rbx
  float v17; // xmm13_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm4_4
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm3_4
  float v32; // xmm4_4
  __int64 v33; // rcx
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
  dword_140404A6C[456217205] = 2;
  v16 = 0;
  dword_140404A6C[456217207] = 0;
  v36 = 0;
  v17 = -v13;
  dword_140404A6C[456217208] = 9;
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

// 1400A81E1: variable 'v54' is possibly undefined
// 1400A81E1: variable 'v55' is possibly undefined
// 1400A825D: variable 'v69' is possibly undefined
// 1400A825D: variable 'v70' is possibly undefined
// 1400A826F: variable 'v78' is possibly undefined
// 1400A8304: variable 'v79' is possibly undefined
// 1400A8304: variable 'v80' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;

//----- (00000001400A9940) ----------------------------------------------------
__int64            sub_1400A9940(int a1, int a2, int a3, float *a4)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_limit_joint_turn(int, int, int, float *);
  human_limit_joint_turn(a1, a2, a3, a4);
  return 0;
}
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A9EF0) ----------------------------------------------------
__int64            sub_1400A9EF0(int a1, int a2, int a3, float *a4)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_limit_joint_angles(int, int, int, float *);
  human_limit_joint_angles(a1, a2, a3, a4);
  return 0;
}
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400AA510) ----------------------------------------------------
__int64            sub_1400AA510(int a1, int a2)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_keep_arms_off_item(int, int);
  human_keep_arms_off_item(a1, a2);
  return 0;
}
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400AC530) ----------------------------------------------------
__int64            sub_1400AC530(float *a1, int a2, int a3)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_item_28_hand_target(float *, int, int);
  human_item_28_hand_target(a1, a2, a3);
  return 0;
}
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400ACD90) ----------------------------------------------------
void            sub_1400ACD90(float *a1, float *a2, float *a3)
{
  float v5; // xmm11_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  float v9; // xmm10_4
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm5_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  double v20; // xmm0_8
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float sr_relative_quaternion[4];
  __m128 v28; // [rsp+30h] [rbp-B8h] BYREF

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

// 1400B1CC2: variable 'v81' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18399E1AC: using guessed type unsigned int;
// 18399E1B0: using guessed type unsigned int;

//----- (00000001400B2BF0) ----------------------------------------------------
__int64            sub_1400B2BF0(int a1, int a2, int a3, float *a4, float a5, float a6)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_limit_joint_change(int, int, int, float *, float, float);
  human_limit_joint_change(a1, a2, a3, a4, a5, a6);
  return a2;
}
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B3A80) ----------------------------------------------------
__int64            sub_1400B3A80(unsigned int a1, int a2)
{
  unsigned int *v2; // r14
  __int64 result; // rax
  int v4; // r13d
  int v5; // ebx
  __int64 v6; // r15
  __int64 v7; // r12
  float v8; // xmm3_4
  __int64 v9; // rdi
  __int64 v10; // rsi
  float v11; // xmm7_4
  float v12; // xmm8_4
  __int64 v13; // rcx
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm9_4
  float v18; // xmm3_4
  float v19; // xmm6_4
  __int64 v20; // r10
  __int64 v21; // r13
  float v22; // xmm1_4
  float v23; // xmm0_4
  int v24; // edx
  __int64 v25; // rcx
  float v26; // xmm3_4
  float v27; // xmm2_4
  __int64 v28; // rcx
  float v29; // xmm4_4
  float v30; // xmm2_4
  float v31; // xmm5_4
  float v32; // xmm0_4
  float v33; // xmm3_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm6_4
  float v37; // xmm0_4
  float v38; // xmm7_4
  float v39; // xmm6_4
  float v40; // xmm0_4
  unsigned int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rsi
  int v44; // edx
  __int64 v45; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400B3A80[128];
#define v46 (*(float (*))(void *)(sr_frame_1400B3A80 + 0)) /* [rsp+58h] */
#define v47 (*(float (*))(void *)(sr_frame_1400B3A80 + 4)) /* [rsp+5Ch] */
#define v48 (*(float (*))(void *)(sr_frame_1400B3A80 + 8)) /* [rsp+60h] */
#define v49 (*(float (*))(void *)(sr_frame_1400B3A80 + 16)) /* [rsp+68h] */
#define v50 (*(float (*))(void *)(sr_frame_1400B3A80 + 20)) /* [rsp+6Ch] */
#define v51 (*(float (*)[24])(void *)(sr_frame_1400B3A80 + 24)) /* [rsp+70h] */

  v2 = &dword_140404A6C[282486067];
  result = a1;
  v4 = a2;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( v5 != 12 && v5 != 15 )
    {
      v8 = *((float *)v2 + 1);
      v9 = 7166LL * (int)result;
      v10 = v6 * 4 + v9 * 4;
      v11 = *(float *)&dword_140404A6C[v6 + 280651440 + v9];
      v12 = *(float *)&dword_140404A6C[v6 + 280651441 + v9];
      v13 = v9 * 4 + 12 * (v7 + (int)*v2);
      v14 = *(float *)((char *)&dword_140404A6C[280651452] + v13);
      v15 = *(float *)((char *)&dword_140404A6C[280651453] + v13);
      v16 = *(float *)((char *)&dword_140404A6C[280651454] + v13);
      v17 = *(float *)&dword_140404A6C[v6 + 280651442 + v9];
      v46 = (float)(v14 * (float)(v8 * -0.5)) + v11;
      v47 = (float)(v15 * (float)(v8 * -0.5)) + v12;
      v48 = (float)(v16 * (float)(v8 * -0.5)) + v17;
      if ( v5 == 11 || v5 == 14 )
      {
        v46 = (float)(v14 * (float)(v8 * -0.125)) + v11;
        v47 = (float)(v15 * (float)(v8 * -0.125)) + v12;
        v48 = (float)(v16 * (float)(v8 * -0.125)) + v17;
      }
      v18 = v8 * 0.5;
      v51[0] = (float)(v16 * v18) + v17;
      v19 = *((float *)v2 + 2);
      v49 = (float)(v14 * v18) + v11;
      v50 = (float)(v15 * v18) + v12;
      if ( (unsigned int)sub_140037220(v4, &v46, &v49, v19) )
      {
        v20 = *(int *)((char *)&dword_140404A6C[280651439] + v10);
        v21 = 5210LL * v4;
        v22 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[47 * v20 + 18215716];
        v46 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[47 * v20 + 18215715];
        v23 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[47 * v20 + 18215717];
        v47 = v22;
        v24 = dword_140404A6C[v21 + 129716719];
        v25 = 47LL * v24;
        v48 = v23;
        v26 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[v25 + 18215716];
        v27 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[v25 + 18215717];
        v49 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[v25 + 18215715];
        v50 = v26;
        v51[0] = v27;
        sub_1400052C0(
          v20,
          v24,
          (unsigned int *)&v46,
          (unsigned int *)&v49,
          &dword_140404A6C[73006984],
          v19 - *(float *)&dword_140404A6C[73006988],
          0x3ECCCCCDu,
          0.03125,
          0x3D800000u);
        if ( a2 == dword_140404A6C[v9 + 280651315] || v5 != 7 && (unsigned int)v5 > 4 && (unsigned int)v5 < 0xA )
          goto LABEL_30;
        v28 = 47LL * (int)dword_140404A6C[v21 + 129716719];
        v29 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[v28 + 18215716];
        v30 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[v28 + 18215717];
        v31 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[v28 + 18215715];
        v32 = *(float *)&dword_140404A6C[v28 + 18215736];
        v33 = v32 * v29;
        v34 = (float)(v32 * v30) - (float)(*(float *)&dword_140404A6C[v28 + 18215738] * v31);
        v35 = 0.2;
        v36 = (float)((float)(*(float *)&dword_140404A6C[v28 + 18215737] * v31) - v33)
            + *(float *)&dword_140404A6C[v28 + 18215720];
        v46 = (float)((float)(*(float *)&dword_140404A6C[v28 + 18215738] * v29)
                    - (float)(*(float *)&dword_140404A6C[v28 + 18215737] * v30))
            + *(float *)&dword_140404A6C[v28 + 18215718];
        v37 = v34 + *(float *)&dword_140404A6C[v28 + 18215719];
        v38 = v46 - *(float *)((char *)&dword_140404A6C[280651446] + v10);
        v48 = v36;
        v39 = v36 - *(float *)((char *)&dword_140404A6C[280651448] + v10);
        v47 = v37;
        v49 = v38;
        v40 = v37 - *(float *)((char *)&dword_140404A6C[280651447] + v10);
        v51[0] = v39;
        v50 = v40;
        if ( (unsigned int)(v5 - 10) <= 1 || (unsigned int)(v5 - 13) <= 1 )
          v35 = 0.33333334;
        if ( dword_140404A6C[v9 + 280651319] )
          goto LABEL_30;
        if ( (float)((float)((float)(v40 * *(float *)&dword_140404A6C[73006985])
                           + (float)(v38 * *(float *)&dword_140404A6C[73006984]))
                   + (float)(v39 * *(float *)&dword_140404A6C[73006986])) <= v35 )
          goto LABEL_30;
        dword_140404A6C[v9 + 280651318] -= 120;
        if ( dword_140404A6C[v9 + 280651318] < 0xFFFFFF89 && dword_140404A6C[v9 + 280651318] != 0 )
          goto LABEL_30;
        if ( dword_140404A6C[456202453] )
        {
          v41 = dword_140404A6C[283831474];
          v42 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v42) = 9;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v42) = v41;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v42) = dword_140404A6C[283785968];
          *(unsigned int *)((char *)&dword_140404A6C[297756287] + v42) = dword_140404A6C[v9 + 280651335];
          *(unsigned int *)((char *)&dword_140404A6C[297756288] + v42) = dword_140404A6C[v9 + 280651336];
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v42) = dword_140404A6C[v9 + 280651337];
          *(unsigned int *)((char *)&dword_140404A6C[297756297] + v42) = 1065353216;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756298] + v42) = 1056964608;
        }
        v43 = (int)dword_140404A6C[v21 + 129716714];
        if ( (_DWORD)v43 != -1 )
        {
          v44 = dword_140404A6C[v9 + 280651305];
          if ( v44 != -1 )
            sub_140116D80(v43, v44, 100);
        }
        v45 = (int)dword_140404A6C[v9 + 280651305];
        if ( (_DWORD)v45 == -1
          || (_DWORD)v43 == -1
          || dword_140404A6C[3597 * v43 + 71856286] != dword_140404A6C[3597 * v45 + 71856286] )
        {
LABEL_30:
          v4 = a2;
        }
        else
        {
          sub_14011B7F0(v43, 100);
          v4 = a2;
        }
      }
      result = a1;
    }
    ++v5;
    v7 += 26;
    v2 += 25;
    v6 += 78;
  }
  while ( v5 < 16 );
  return result;
}
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183E9362C: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400B4DA0) ----------------------------------------------------
__int64            sub_1400B4DA0(int a1, int a2, int a3, unsigned int *a4, unsigned int *a5, float *a6)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_hold_item(int, int, int, const float *, const float *, const float *);
  human_hold_item(a1, a2, a3, (const float *)a4, (const float *)a5, a6);
  return 0;
}
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B5410) ----------------------------------------------------
__int64            sub_1400B5410(int a1, signed int a2, signed int a3, float *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax

  v4 = a3;
  v5 = a1;
  result = sub_140055FA0(a1, a2, a3, a4);
  if ( (_DWORD)result != -1 )
    dword_140404A6C[7166 * v5 + 280651511 + 78 * v4] = result;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B94B0) ----------------------------------------------------
__int64            sub_1400B94B0(int a1, int a2)
{
  unsigned int *v2; // rbx
  float *v3; // rsi
  float v4; // xmm6_4
  unsigned int v6; // r14d
  int v7; // edi
  float *v8; // r15
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v13[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = &dword_140404A6C[278845898];
  v3 = (float *)&dword_140404A6C[278845916];
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B95E0) ----------------------------------------------------
void sub_1400B95E0()
{
  unsigned int *v0; // rcx
  __int64 v1; // rsi
  __int64 v2; // rdx
  int v3; // ebp
  __int64 v4; // r12
  float *v5; // rbx
  char *v6; // rdi
  unsigned int *v7; // r15
  __int64 v8; // r14
  __int64 v9; // rsi
  int v10; // eax
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  __int64 v16; // rcx
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  float v31; // xmm1_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  int v39; // eax
  float v40; // xmm0_4
  int v41; // eax
  float v42; // xmm1_4
  int v43; // eax
  float v44; // xmm0_4
  signed int v45; // r15d
  signed int v46; // ebp
  signed int v47; // edi
  unsigned int v48; // esi
  signed int v49; // ebx
  __int64 v50; // r14
  int v51; // r12d
  int v52; // eax
  __int64 v53; // rcx
  bool v54; // zf
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400B95E0[208];
#define v55 (*(float * (*))(void *)(sr_frame_1400B95E0 + 0)) /* [rsp+30h] */
#define v56 (*(__int64 (*))(void *)(sr_frame_1400B95E0 + 176)) /* [rsp+E0h] */
#define v57 (*(unsigned int * (*))(void *)(sr_frame_1400B95E0 + 184)) /* [rsp+E8h] */
#define v58 (*(__int64 (*))(void *)(sr_frame_1400B95E0 + 192)) /* [rsp+F0h] */
#define v59 (*(__int64 (*))(void *)(sr_frame_1400B95E0 + 200)) /* [rsp+F8h] */

  v0 = &dword_140404A6C[280651415];
  v1 = 0;
  v2 = 0;
  v58 = 0;
  v56 = 0;
  v57 = &dword_140404A6C[280651415];
  v59 = 256;
  do
  {
    v55 = (float *)((char *)&dword_140404A6C[280651508] + v1);
    if ( *(unsigned int *)((char *)&dword_140404A6C[280651303] + v1) )
    {
      v3 = 0;
      *v0 = 1199570944;
      v4 = 0;
      v0[3] = -947912704;
      v5 = (float *)((char *)&dword_140404A6C[280651508] + v1);
      v0[1] = 1199570944;
      v6 = (char *)&dword_140404A6C[280651457] + v1;
      v0[4] = -947912704;
      v7 = &dword_140404A6C[282486067];
      v8 = 0;
      v0[2] = 1199570944;
      v0[5] = -947912704;
      do
      {
        *((_DWORD *)v6 - 14) = *((_DWORD *)v6 - 17);
        *((_DWORD *)v6 - 13) = *((_DWORD *)v6 - 16);
        *((_DWORD *)v6 - 12) = *((_DWORD *)v6 - 15);
        v9 = 47LL * *((int *)v6 - 18);
        *((_DWORD *)v6 - 17) = dword_140404A6C[v9 + 18215715];
        *((_DWORD *)v6 - 16) = dword_140404A6C[v9 + 18215716];
        *((_DWORD *)v6 - 15) = dword_140404A6C[v9 + 18215717];
        *((_DWORD *)v6 - 11) = dword_140404A6C[v9 + 18215718];
        *((_DWORD *)v6 - 10) = dword_140404A6C[v9 + 18215719];
        *((_DWORD *)v6 - 9) = dword_140404A6C[v9 + 18215720];
        *((_DWORD *)v6 - 5) = dword_140404A6C[v9 + 18215724];
        *((_DWORD *)v6 - 4) = dword_140404A6C[v9 + 18215725];
        *((_DWORD *)v6 - 3) = dword_140404A6C[v9 + 18215726];
        *((_DWORD *)v6 - 2) = dword_140404A6C[v9 + 18215727];
        *((_DWORD *)v6 - 1) = dword_140404A6C[v9 + 18215728];
        *(_DWORD *)v6 = dword_140404A6C[v9 + 18215729];
        *((_DWORD *)v6 + 1) = dword_140404A6C[v9 + 18215730];
        *((_DWORD *)v6 + 2) = dword_140404A6C[v9 + 18215731];
        *((_DWORD *)v6 + 3) = dword_140404A6C[v9 + 18215732];
        *((_DWORD *)v6 + 4) = dword_140404A6C[v9 + 18215736];
        *((_DWORD *)v6 + 5) = dword_140404A6C[v9 + 18215737];
        *((_DWORD *)v6 + 6) = dword_140404A6C[v9 + 18215738];
        if ( (unsigned int)v3 <= 3 )
        {
          v10 = sub_1400DC050(
                  (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v2 + v8 + 1126819128),
                  (float *)((char *)&dword_140404A6C[280651440] + v2 + v8),
                  1);
          v2 = v56;
          if ( v10 )
          {
            v11 = (float)((float)(*((float *)v6 - 17) - *((float *)v6 - 14))
                        * (float)(*(float *)&dword_140404A6C[73006987] * 0.97500002))
                + *((float *)v6 - 14);
            v12 = (float)((float)(*((float *)v6 - 16) - *((float *)v6 - 13))
                        * (float)(*(float *)&dword_140404A6C[73006987] * 0.97500002))
                + *((float *)v6 - 13);
            v13 = (float)((float)(*((float *)v6 - 15) - *((float *)v6 - 12))
                        * (float)(*(float *)&dword_140404A6C[73006987] * 0.97500002))
                + *((float *)v6 - 12);
            *((float *)v6 - 17) = v11;
            *(float *)&dword_140404A6C[v9 + 18215715] = v11;
            *((float *)v6 - 16) = v12;
            *(float *)&dword_140404A6C[v9 + 18215716] = v12;
            *((float *)v6 - 15) = v13;
            *(float *)&dword_140404A6C[v9 + 18215717] = v13;
          }
        }
        v1 = v58;
        v14 = *((float *)v7 + 1) * -0.5;
        v15 = *((float *)v7 + 1) * 0.5;
        v16 = v58 + 12 * (v4 + (int)*v7);
        *((float *)v6 + 48) = (float)(v14 * *(float *)((char *)&dword_140404A6C[280651452] + v16)) + *((float *)v6 - 17);
        *((float *)v6 + 49) = (float)(v14 * *(float *)((char *)&dword_140404A6C[280651453] + v16)) + *((float *)v6 - 16);
        *((float *)v6 + 50) = (float)(v14 * *(float *)((char *)&dword_140404A6C[280651454] + v16)) + *((float *)v6 - 15);
        *((float *)v6 + 51) = (float)(v15 * *(float *)((char *)&dword_140404A6C[280651452] + v16)) + *((float *)v6 - 17);
        v17 = *((float *)v7 + 2);
        *((float *)v6 + 52) = (float)(v15 * *(float *)((char *)&dword_140404A6C[280651453] + v16)) + *((float *)v6 - 16);
        *((float *)v6 + 53) = (float)(v15 * *(float *)((char *)&dword_140404A6C[280651454] + v16)) + *((float *)v6 - 15);
        v18 = *(v5 - 3);
        v19 = *(float *)v57;
        if ( *(float *)v57 > (float)(v18 - v17) )
        {
          *(float *)v57 = v18 - v17;
          v19 = v18 - v17;
          v18 = *(v5 - 3);
        }
        v20 = *((float *)v57 + 3);
        v21 = v18 + v17;
        if ( v20 < v21 )
        {
          *((float *)v57 + 3) = v21;
          v20 = v21;
        }
        v22 = *v5;
        v23 = *v5 - v17;
        if ( v19 > v23 )
        {
          *(float *)v57 = v23;
          v22 = *v5;
        }
        v24 = v22 + v17;
        if ( v20 < v24 )
          *((float *)v57 + 3) = v24;
        v25 = *(v5 - 2);
        v26 = *((float *)v57 + 1);
        if ( v26 > (float)(v25 - v17) )
        {
          *((float *)v57 + 1) = v25 - v17;
          v26 = v25 - v17;
          v25 = *(v5 - 2);
        }
        v27 = *((float *)v57 + 4);
        v28 = v25 + v17;
        if ( v27 < v28 )
        {
          *((float *)v57 + 4) = v28;
          v27 = v28;
        }
        v29 = v5[1];
        if ( v26 > (float)(v29 - v17) )
        {
          *((float *)v57 + 1) = v29 - v17;
          v29 = v5[1];
        }
        v30 = v29 + v17;
        if ( v27 < v30 )
          *((float *)v57 + 4) = v30;
        v31 = *(v5 - 1);
        v32 = *((float *)v57 + 2);
        if ( v32 > (float)(v31 - v17) )
        {
          *((float *)v57 + 2) = v31 - v17;
          v32 = v31 - v17;
          v31 = *(v5 - 1);
        }
        v33 = *((float *)v57 + 5);
        v34 = v31 + v17;
        if ( v33 < v34 )
        {
          *((float *)v57 + 5) = v34;
          v33 = v34;
        }
        v35 = v5[2];
        if ( v32 > (float)(v35 - v17) )
        {
          *((float *)v57 + 2) = v35 - v17;
          v35 = v5[2];
        }
        v36 = v35 + v17;
        if ( v33 < v36 )
          *((float *)v57 + 5) = v36;
        ++v3;
        v8 += 312;
        v4 += 26;
        v6 += 312;
        v7 += 25;
        v5 += 78;
      }
      while ( v3 < 16 );
      v0 = v57;
      *(v55 - 92) = *(v55 - 92) - 0.25;
      v37 = *((float *)v57 + 3) * 0.25;
      v38 = *((float *)v57 + 1);
      v57[6] = (int)(float)(*(float *)v57 * 0.25);
      v39 = (int)v37;
      v40 = *((float *)v57 + 4);
      v57[9] = v39;
      v41 = (int)(float)(v38 * 0.25);
      v42 = *((float *)v57 + 2);
      v57[7] = v41;
      v43 = (int)(float)(v40 * 0.25);
      v44 = *((float *)v57 + 5);
      v57[10] = v43;
      v57[8] = (int)(float)(v42 * 0.25);
      v57[11] = (int)(float)(v44 * 0.25);
      v45 = *((_DWORD *)v55 - 86);
      if ( v45 <= *((_DWORD *)v55 - 83) )
      {
        do
        {
          v46 = *((_DWORD *)v55 - 85);
          if ( v46 <= *((_DWORD *)v55 - 82) )
          {
            do
            {
              v47 = *((_DWORD *)v55 - 87);
              if ( v47 <= *((_DWORD *)v55 - 84) )
              {
                do
                {
                  v48 = sub_140016870(0, v47, v45, v46);
                  if ( v48 )
                  {
                    v49 = 0;
                    v50 = 948LL * (v48 & 0x3FF);
                    v51 = sub_1400169B0(0, v47, v45, v46);
                    if ( (int)dword_140404A6C[v50 + 272299416] > 0 )
                    {
                      do
                      {
                        if ( !_bittest(&v51, v49) )
                        {
                          v52 = sub_1400CDBD0(v48, v49, 0, v47, v45, v46);
                          if ( v52 != -1 )
                          {
                            v53 = 1760LL * v52;
                            dword_140404A6C[v53 + 278845895] = 1;
                            dword_140404A6C[v53 + 278845894] = 1;
                          }
                        }
                        ++v49;
                      }
                      while ( v49 < (int)dword_140404A6C[v50 + 272299416] );
                    }
                  }
                  ++v47;
                }
                while ( v47 <= *((_DWORD *)v55 - 84) );
                v1 = v58;
              }
              ++v46;
            }
            while ( v46 <= *(int *)((char *)&dword_140404A6C[280651426] + v1) );
          }
          ++v45;
        }
        while ( v45 <= *(int *)((char *)&dword_140404A6C[280651425] + v1) );
        v0 = v57;
        v2 = v56;
      }
    }
    v2 += 28664;
    v0 += 7166;
    v56 = v2;
    v1 += 28664;
    v57 = v0;
    v54 = v59-- == 1;
    v58 = v1;
  }
  while ( !v54 );
}
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

