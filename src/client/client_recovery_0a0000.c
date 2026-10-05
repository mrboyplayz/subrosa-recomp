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

//----- (00000001400A0EB0) ----------------------------------------------------
void            sub_1400A0EB0(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  bool v4; // zf
  __int64 v5; // r12
  __int64 v6; // rcx
  signed int v7; // ebp
  float v8; // xmm1_4
  unsigned int v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  unsigned int *v13; // rsi
  float v14; // xmm0_4
  unsigned int *v15; // rdi
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  __int64 v24; // rcx
  double v25; // xmm2_8
  unsigned int v26; // xmm0_4
  unsigned int v27; // xmm1_4
  double v28; // xmm0_8
  double v29; // xmm1_8
  double v30; // xmm2_8
  unsigned int v31; // eax
  float v32; // xmm0_4

  v2 = 3597LL * a1;
  v3 = a1;
  v4 = dword_140404A6C[280649838] == 0;
  dword_140404A6C[v2 + 71856325] = 0;
  if ( v4 )
  {
    v5 = (int)dword_140404A6C[v2 + 71856292];
    if ( (_DWORD)v5 != -1 )
    {
      v6 = 7166 * v5;
      if ( dword_140404A6C[7166 * v5 + 280651313] != -1 )
      {
        v7 = -1;
        if ( (int)dword_140404A6C[v6 + 280658139] > 0 )
          v7 = dword_140404A6C[v6 + 280658140];
        v4 = dword_140404A6C[v2 + 71856340] == 2;
        dword_140404A6C[v2 + 71856330] = 1;
        if ( !v4 )
        {
          *(_QWORD *)&dword_140404A6C[v2 + 71856297] = 0;
          dword_140404A6C[v2 + 71856293] = 0x40000000;
          dword_140404A6C[v2 + 71856295] = -1082130432;
        }
        if ( v7 == -1 || dword_140404A6C[1760 * v7 + 278845898] != 18 )
          *(float *)&dword_140404A6C[v2 + 71856331] = (float)((float)(int)dword_140404A6C[137297772] * 0.125)
                                                    + *(float *)&dword_140404A6C[v2 + 71856331];
        else
          sub_1400A2C00(a1, v7);
        v8 = *(float *)&dword_140404A6C[v2 + 71856331];
        if ( v8 >= 0.0 )
        {
          if ( v8 > 0.625 )
          {
            v8 = 0.625;
            dword_140404A6C[v2 + 71856331] = 1059061760;
          }
        }
        else
        {
          v8 = 0.0;
          dword_140404A6C[v2 + 71856331] = 0;
        }
        v4 = dword_140404A6C[284024634] == 0;
        *(float *)&v9 = (float)((float)(v8 - *(float *)&dword_140404A6C[v2 + 71856332]) * 0.0625)
                      + *(float *)&dword_140404A6C[v2 + 71856332];
        dword_140404A6C[v2 + 71856332] = v9;
        v10 = 1.0 - *(float *)&v9;
        if ( v4 )
        {
          v4 = dword_140404A6C[73991627] == 0;
          v11 = *(float *)&dword_140404A6C[v2 + 71856298];
          *(float *)&dword_140404A6C[v2 + 71856297] = (float)((float)(*(float *)&dword_140404A6C[284024599] * v10)
                                                            * 0.001953125)
                                                    + *(float *)&dword_140404A6C[v2 + 71856297];
          if ( v4 )
            v12 = (float)((float)(*(float *)&dword_140404A6C[284024600] * v10) * 0.001953125) + v11;
          else
            v12 = v11 - (float)((float)(*(float *)&dword_140404A6C[284024600] * v10) * 0.001953125);
          *(float *)&dword_140404A6C[v2 + 71856298] = v12;
          v13 = &dword_140404A6C[v2 + 71856293];
          v14 = *(float *)&dword_140404A6C[v2 + 71856293];
          if ( v14 >= 0.5 )
          {
            if ( v14 >= 1.5 )
              *v13 = 0x40000000;
            else
              *v13 = 1065353216;
          }
          else
          {
            *v13 = 0;
          }
          v15 = &dword_140404A6C[v2 + 71856295];
          v16 = *(float *)&dword_140404A6C[v2 + 71856295];
          if ( v16 >= -0.375 )
          {
            if ( v16 <= 0.375 )
              *v15 = 0;
            else
              *v15 = 1065353216;
          }
          else
          {
            *v15 = -1082130432;
          }
        }
        else
        {
          v13 = &dword_140404A6C[v2 + 71856293];
          v15 = &dword_140404A6C[v2 + 71856295];
          v17 = (float)(*(float *)&dword_140404A6C[284024599] * 0.0066666668)
              + *(float *)&dword_140404A6C[v2 + 71856293];
          v18 = (float)(*(float *)&dword_140404A6C[284024600] * 0.0066666668)
              + *(float *)&dword_140404A6C[v2 + 71856295];
          *(float *)&dword_140404A6C[v2 + 71856293] = v17;
          *(float *)&dword_140404A6C[v2 + 71856295] = v18;
          if ( v17 >= -0.125 )
          {
            if ( v17 > 2.125 )
              *v13 = 1074266112;
          }
          else
          {
            *v13 = -1107296256;
          }
          if ( v18 >= -1.0 )
          {
            if ( v18 > 1.0 )
              *v15 = 1065353216;
          }
          else
          {
            *v15 = -1082130432;
          }
          dword_140404A6C[v2 + 71856325] |= 2u;
        }
        v19 = *(float *)&dword_140404A6C[v2 + 71856297];
        if ( v19 >= -3.14159265359 )
        {
          if ( v19 > 3.14159265359 )
            dword_140404A6C[v2 + 71856297] = 1078530011;
        }
        else
        {
          dword_140404A6C[v2 + 71856297] = -1068953637;
        }
        v20 = *(float *)&dword_140404A6C[v2 + 71856298];
        if ( v20 >= -1.570796326795 )
        {
          if ( v20 > 1.570796326795 )
            dword_140404A6C[v2 + 71856298] = 1070141403;
        }
        else
        {
          dword_140404A6C[v2 + 71856298] = -1077342245;
        }
        if ( !dword_140404A6C[280648133] )
        {
          v21 = *(float *)&dword_140404A6C[v2 + 71856296];
          if ( BYTE2(dword_140404A6C[284024771]) )
          {
            *(float *)&dword_140404A6C[v2 + 71856296] = v21 + 0.03125;
          }
          else if ( BYTE2(dword_140404A6C[284024770]) )
          {
            *(float *)&dword_140404A6C[v2 + 71856296] = v21 - 0.03125;
          }
          else if ( v21 < 0.125 )
          {
            if ( v21 > -0.125 )
              dword_140404A6C[v2 + 71856296] = 0;
            else
              *(float *)&dword_140404A6C[v2 + 71856296] = v21 + 0.125;
          }
          else
          {
            *(float *)&dword_140404A6C[v2 + 71856296] = v21 - 0.125;
          }
          v22 = *(float *)&dword_140404A6C[v2 + 71856294];
          if ( LOBYTE(dword_140404A6C[284024766]) )
          {
            if ( v22 <= -0.72187501 )
            {
              v22 = -0.75;
              dword_140404A6C[v2 + 71856294] = -1086324736;
              v23 = -0.75;
            }
            else
            {
              v22 = v22 - 0.028125001;
              *(float *)&dword_140404A6C[v2 + 71856294] = v22;
              v23 = v22;
            }
          }
          else if ( v22 >= -0.037500001 )
          {
            v23 = *(float *)&dword_140404A6C[v2 + 71856294];
            if ( v22 < 0.0 )
            {
              v22 = 0.0;
              dword_140404A6C[v2 + 71856294] = 0;
              v23 = 0.0;
            }
          }
          else
          {
            v22 = v22 + 0.037500001;
            *(float *)&dword_140404A6C[v2 + 71856294] = v22;
            v23 = v22;
          }
          if ( HIBYTE(dword_140404A6C[284024766]) )
          {
            if ( v22 >= 0.72187501 )
              dword_140404A6C[v2 + 71856294] = 1061158912;
            else
              *(float *)&dword_140404A6C[v2 + 71856294] = v23 + 0.028125001;
          }
          else if ( v22 <= 0.037500001 )
          {
            if ( v22 > 0.0 )
              dword_140404A6C[v2 + 71856294] = 0;
          }
          else
          {
            *(float *)&dword_140404A6C[v2 + 71856294] = v23 - 0.037500001;
          }
          if ( LOBYTE(dword_140404A6C[284024776]) )
            dword_140404A6C[v2 + 71856325] |= 4u;
          if ( LOBYTE(dword_140404A6C[284024821]) )
            dword_140404A6C[v2 + 71856325] |= 8u;
          if ( BYTE1(dword_140404A6C[284024821]) )
            dword_140404A6C[v2 + 71856325] |= 0x10u;
          if ( v7 != -1 )
          {
            v24 = 1760LL * v7;
            if ( dword_140404A6C[v24 + 278845898] == 25 && dword_140404A6C[v24 + 278846052] == 1 )
              sub_1400A2DC0(a1, v7);
          }
          if ( LOBYTE(dword_140404A6C[284024767]) )
            dword_140404A6C[v2 + 71856325] |= 0x800u;
          if ( BYTE1(dword_140404A6C[284024770]) )
            dword_140404A6C[3597 * v3 + 71856325] |= 0x1000u;
          if ( BYTE1(dword_140404A6C[284024767]) )
            dword_140404A6C[3597 * v3 + 71856325] |= 0x2000u;
          if ( LOBYTE(dword_140404A6C[284024784]) )
            dword_140404A6C[3597 * v3 + 71856325] |= 0x40000u;
        }
        if ( dword_140404A6C[284024356] )
        {
          v4 = dword_140404A6C[285101134] == 0;
          v25 = *(float *)&dword_140404A6C[285101118] * 2.3561944901925;
          *(float *)&v26 = fabs(*(float *)&dword_140404A6C[285101116]) * *(float *)&dword_140404A6C[285101116] * 0.75;
          *(float *)&v27 = *(float *)&dword_140404A6C[285101121] - *(float *)&dword_140404A6C[285101120];
          dword_140404A6C[v2 + 71856294] = v26;
          v28 = *(float *)&dword_140404A6C[v2 + 71856297];
          dword_140404A6C[v2 + 71856296] = v27;
          v29 = *(float *)&dword_140404A6C[v2 + 71856298];
          *(float *)&v28 = (v25 - v28) * 0.0625 + v28;
          v30 = *(float *)&dword_140404A6C[285101119];
          dword_140404A6C[v2 + 71856297] = LODWORD(v28);
          *(float *)&dword_140404A6C[v2 + 71856298] = (v30 * 2.3561944901925 - v29) * 0.0625 + v29;
          if ( !v4 )
            dword_140404A6C[v2 + 71856325] |= 4u;
          if ( dword_140404A6C[285101135] && !dword_140404A6C[285097167] )
            dword_140404A6C[v2 + 71856329] = -1;
          if ( dword_140404A6C[285101133] && !dword_140404A6C[285097165] )
            dword_140404A6C[v2 + 71856329] = 0;
          v31 = dword_140404A6C[v2 + 71856329];
          if ( !v31 )
          {
            *v13 = 0x40000000;
            *v15 = -1082130432;
            v31 = dword_140404A6C[v2 + 71856329];
          }
          if ( v31 == -1 )
          {
            *v13 = 0x40000000;
            *v15 = 1065353216;
          }
        }
        sub_14009EA20(a1, v5);
        v32 = *(float *)&dword_140404A6C[v2 + 71856296];
        if ( v32 >= -1.0 )
        {
          if ( v32 > 1.0 )
            dword_140404A6C[v2 + 71856296] = 1065353216;
        }
        else
        {
          dword_140404A6C[v2 + 71856296] = -1082130432;
        }
      }
    }
  }
}

// 140279850: using guessed type __int128 xmmword_140279850;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
  __int64 v15; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v16; // [rsp+20h] [rbp-88h] BYREF
  __int128 v17; // [rsp+30h] [rbp-78h]
  float v18; // [rsp+40h] [rbp-68h]
  __int64 v19; // [rsp+48h] [rbp-60h]

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

//----- (00000001400A2C00) ----------------------------------------------------
__int64            sub_1400A2C00(int a1, signed int a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  bool v4; // sf
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8

  result = dword_140404A6C[137297772];
  v3 = a2;
  v4 = (dword_140404A6C[137297772] & 0x80000000) != 0;
  if ( (int)dword_140404A6C[137297772] > 0 )
  {
    v5 = 3597LL * a1;
    do
    {
      result = (unsigned int)(result - 1);
      dword_140404A6C[21 * (int)dword_140404A6C[v5 + 71856362] + 71856367 + v5] = 2;
      dword_140404A6C[21 * (int)dword_140404A6C[v5 + 71856362] + 71856368 + v5] = a2;
      dword_140404A6C[21 * (int)dword_140404A6C[v5 + 71856362] + 71856369 + v5] = 0;
      dword_140404A6C[v5 + 71856362] = ((unsigned __int8)dword_140404A6C[v5 + 71856362] + 1) & 0x3F;
      v4 = (int)result < 0;
    }
    while ( (int)result > 0 );
    dword_140404A6C[137297772] = result;
  }
  if ( v4 )
  {
    v6 = 3597LL * a1;
    v7 = (unsigned int)-(int)result;
    dword_140404A6C[137297772] = 0;
    do
    {
      dword_140404A6C[21 * (int)dword_140404A6C[v6 + 71856362] + 71856367 + v6] = 2;
      dword_140404A6C[21 * (int)dword_140404A6C[v6 + 71856362] + 71856368 + v6] = v3;
      dword_140404A6C[21 * (int)dword_140404A6C[v6 + 71856362] + 71856369 + v6] = 1;
      result = ((unsigned __int8)dword_140404A6C[v6 + 71856362] + 1) & 0x3F;
      dword_140404A6C[v6 + 71856362] = result;
      --v7;
    }
    while ( v7 );
  }
  if ( BYTE1(dword_140404A6C[284024770]) )
  {
    if ( !BYTE1(dword_140404A6C[284024642]) )
    {
      dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
      dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = v3;
      dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = dword_140404A6C[1760 * v3 + 278846061]
                                                                                         + 2;
      result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
      dword_140404A6C[3597 * a1 + 71856362] = result;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160FC481C: using guessed type unsigned int;

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

//----- (00000001400A3970) ----------------------------------------------------
__int64            sub_1400A3970(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // eax
  int v4; // ebx
  int v5; // edi
  char v6; // r8
  __int64 v7; // rcx
  float v8; // xmm1_4
  float v9; // xmm0_4
  __int64 v10; // rcx
  float v11; // xmm1_4
  float v12; // xmm0_4
  unsigned __int8 v13; // al
  unsigned int v14; // ecx
  int v15; // r9d
  char v16; // al
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF
  __int128 v20; // [rsp+30h] [rbp-28h]
  float v21; // [rsp+40h] [rbp-18h]
  __int64 v22; // [rsp+48h] [rbp-10h]

  if ( HIBYTE(dword_140404A6C[284024769]) && !HIBYTE(dword_140404A6C[284024641]) )
    dword_140404A6C[283831479] ^= 1u;
  if ( BYTE2(dword_140404A6C[284024769]) )
  {
    v3 = dword_140404A6C[283831480];
    if ( !BYTE2(dword_140404A6C[284024641]) )
      v3 = 1;
    dword_140404A6C[283831480] = v3;
  }
  if ( LOBYTE(dword_140404A6C[284024768]) && !LOBYTE(dword_140404A6C[284024640]) )
    dword_140404A6C[283831481] ^= 1u;
  v4 = dword_140404A6C[284021982];
  if ( BYTE1(dword_140404A6C[284024778]) )
    v4 = -1;
  dword_140404A6C[284021982] = v4;
  if ( BYTE2(dword_140404A6C[284024772]) )
  {
    v4 = -1;
    dword_140404A6C[19065878] = 1;
    dword_140404A6C[284021982] = -1;
    v5 = 1;
  }
  else
  {
    v5 = dword_140404A6C[19065878];
  }
  v6 = BYTE1(dword_140404A6C[284024821]);
  if ( HIBYTE(dword_140404A6C[284024772]) )
  {
    v5 = 2;
    dword_140404A6C[19065878] = 2;
    if ( BYTE1(dword_140404A6C[284024821]) )
    {
      dword_140404A6C[284024395] = dword_140404A6C[284024388];
      dword_140404A6C[284024396] = dword_140404A6C[284024389];
      dword_140404A6C[284024397] = dword_140404A6C[284024390];
      v19 = xmmword_140278D30;
      v21 = 1.0;
      v20 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v19, (float *)&v19 + 3, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024391]));
      sub_14007B2A0((__int64)&v19, (float *)&v19, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024392]));
      *(_QWORD *)&a3 = dword_140404A6C[284024393];
      v5 = dword_140404A6C[19065878];
      v6 = BYTE1(dword_140404A6C[284024821]);
      v4 = dword_140404A6C[284021982];
      v7 = 7LL * (int)dword_140404A6C[19065878];
      v8 = *((float *)&v20 + 3) * *(float *)&dword_140404A6C[284024393];
      *(float *)&dword_140404A6C[v7 + 284024381] = (float)(*((float *)&v20 + 2) * *(float *)&dword_140404A6C[284024393])
                                                 + *(float *)&dword_140404A6C[v7 + 284024381];
      v9 = v21 * *(float *)&a3;
      *(float *)&dword_140404A6C[v7 + 284024382] = v8 + *(float *)&dword_140404A6C[v7 + 284024382];
      *(float *)&dword_140404A6C[v7 + 284024383] = v9 + *(float *)&dword_140404A6C[v7 + 284024383];
      dword_140404A6C[v7 + 284024384] = dword_140404A6C[284024391];
      dword_140404A6C[v7 + 284024385] = dword_140404A6C[284024392];
    }
  }
  if ( LOBYTE(dword_140404A6C[284024773]) )
  {
    v5 = 3;
    dword_140404A6C[19065878] = 3;
    if ( v6 )
    {
      dword_140404A6C[284024402] = dword_140404A6C[284024388];
      dword_140404A6C[284024403] = dword_140404A6C[284024389];
      dword_140404A6C[284024404] = dword_140404A6C[284024390];
      v19 = xmmword_140278D30;
      v21 = 1.0;
      v20 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v19, (float *)&v19 + 3, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024391]));
      sub_14007B2A0((__int64)&v19, (float *)&v19, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024392]));
      *(_QWORD *)&a3 = dword_140404A6C[284024393];
      v5 = dword_140404A6C[19065878];
      v6 = BYTE1(dword_140404A6C[284024821]);
      v4 = dword_140404A6C[284021982];
      v10 = 7LL * (int)dword_140404A6C[19065878];
      v11 = *((float *)&v20 + 3) * *(float *)&dword_140404A6C[284024393];
      *(float *)&dword_140404A6C[v10 + 284024381] = (float)(*((float *)&v20 + 2) * *(float *)&dword_140404A6C[284024393])
                                                  + *(float *)&dword_140404A6C[v10 + 284024381];
      v12 = v21 * *(float *)&a3;
      *(float *)&dword_140404A6C[v10 + 284024382] = v11 + *(float *)&dword_140404A6C[v10 + 284024382];
      *(float *)&dword_140404A6C[v10 + 284024383] = v12 + *(float *)&dword_140404A6C[v10 + 284024383];
      dword_140404A6C[v10 + 284024384] = dword_140404A6C[284024391];
      dword_140404A6C[v10 + 284024385] = dword_140404A6C[284024392];
    }
  }
  if ( LOBYTE(dword_140404A6C[284024776]) && !LOBYTE(dword_140404A6C[284024648]) )
  {
    v13 = v4;
    if ( v4 >= 0 )
    {
      LOBYTE(v14) = v4 + 1;
      if ( v6 )
        LOBYTE(v14) = v4 - 1;
    }
    else
    {
      LOBYTE(v14) = 0;
      v13 = -1;
    }
    v14 = (unsigned __int8)v14;
    v15 = v13;
    while ( 1 )
    {
      a2 = 7166LL * v14;
      if ( dword_140404A6C[a2 + 280651303] )
      {
        if ( (int)dword_140404A6C[a2 + 280651318] > 0 && dword_140404A6C[a2 + 280658438] <= 2 )
          break;
      }
      v16 = 1;
      if ( v6 )
        v16 = -1;
      v14 = (unsigned __int8)(v14 + v16);
      if ( v14 == v15 )
        goto LABEL_37;
    }
    v4 = v14;
    dword_140404A6C[284021982] = v14;
  }
LABEL_37:
  if ( v5 == 1 )
  {
    sub_140105180(1, a2 * 4, a3);
  }
  else
  {
    sub_140105470(v5, a2 * 4, a3);
    if ( v4 != -1 )
      sub_14002EDF0(v5, (__int64)&dword_140404A6C[7166 * v4 + 280651335]);
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 1400A3D1A: variable 'a2' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFAC4: using guessed type unsigned int;
// 183EBFD4C: using guessed type unsigned int;
// 183F79DE4: using guessed type unsigned int;
// 183F7C37C: using guessed type unsigned int;
// 183F7C380: using guessed type unsigned int;
// 183F7C384: using guessed type unsigned int;
// 183F7C388: using guessed type unsigned int;
// 183F7C38C: using guessed type unsigned int;
// 183F7C398: using guessed type unsigned int;
// 183F7C39C: using guessed type unsigned int;
// 183F7C3A0: using guessed type unsigned int;
// 183F7C3B4: using guessed type unsigned int;
// 183F7C3B8: using guessed type unsigned int;
// 183F7C3BC: using guessed type unsigned int;

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
  __int64 v8; // [rsp+0h] [rbp-238h] BYREF
  char name[512]; // [rsp+20h] [rbp-218h] BYREF
  __int64 v10; // [rsp+220h] [rbp-18h]

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
  return sub_1401F8B20((unsigned __int64)&v8 ^ v10);
}

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

//----- (00000001400A48D0) ----------------------------------------------------
__int64            sub_1400A48D0(int a1, float *a2)
{
  signed int v2; // r9d
  __int64 result; // rax
  __int64 v5; // r8
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  unsigned int *v9; // rdx
  __int64 v10; // rcx
  float v11; // xmm7_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  __int64 v14; // rcx

  v2 = 0;
  result = a1;
  v5 = 5210LL * a1;
  v6 = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  *(_QWORD *)&dword_140404A6C[v5 + 129716750] = 0;
  dword_140404A6C[v5 + 129716752] = 0;
  if ( (int)dword_140404A6C[v5 + 129716768] > 0 )
  {
    v9 = &dword_140404A6C[v5 + 129716769];
    do
    {
      ++v2;
      v10 = 60LL * (int)*v9;
      v11 = *(float *)&dword_140404A6C[v10 + 73007026] - *a2;
      v12 = *(float *)&dword_140404A6C[v10 + 73007028] - a2[2];
      v13 = *(float *)&dword_140404A6C[v10 + 73007027] - a2[1];
      v6 = v6
         + (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716726] * v12)
                                         - (float)(*(float *)&dword_140404A6C[v5 + 129716728] * v11))
                                 * *(float *)&dword_140404A6C[v10 + 73007033])
                         + (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716728] * v13)
                                         - (float)(*(float *)&dword_140404A6C[v5 + 129716727] * v12))
                                 * *(float *)&dword_140404A6C[v10 + 73007032]))
                 + (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716727] * v11)
                                 - (float)(*(float *)&dword_140404A6C[v5 + 129716726] * v13))
                         * *(float *)&dword_140404A6C[v10 + 73007034]));
      *(float *)&dword_140404A6C[v5 + 129716750] = v6;
      v14 = 60LL * (int)*v9;
      v7 = v7
         + (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716729] * v12)
                                         - (float)(*(float *)&dword_140404A6C[v5 + 129716731] * v11))
                                 * *(float *)&dword_140404A6C[v14 + 73007033])
                         + (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716731] * v13)
                                         - (float)(*(float *)&dword_140404A6C[v5 + 129716730] * v12))
                                 * *(float *)&dword_140404A6C[v14 + 73007032]))
                 + (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716730] * v11)
                                 - (float)(*(float *)&dword_140404A6C[v5 + 129716729] * v13))
                         * *(float *)&dword_140404A6C[v14 + 73007034]));
      *(float *)&dword_140404A6C[v5 + 129716751] = v7;
      result = (int)*v9++;
      v8 = v8
         + (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716732] * v12)
                                         - (float)(*(float *)&dword_140404A6C[v5 + 129716734] * v11))
                                 * *(float *)&dword_140404A6C[60 * result + 73007033])
                         + (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716734] * v13)
                                         - (float)(*(float *)&dword_140404A6C[v5 + 129716733] * v12))
                                 * *(float *)&dword_140404A6C[60 * result + 73007032]))
                 + (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716733] * v11)
                                 - (float)(*(float *)&dword_140404A6C[v5 + 129716732] * v13))
                         * *(float *)&dword_140404A6C[60 * result + 73007034]));
      *(float *)&dword_140404A6C[v5 + 129716752] = v8;
    }
    while ( v2 < (int)dword_140404A6C[v5 + 129716768] );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A4B40) ----------------------------------------------------
__int64            sub_1400A4B40(__int64 a1, int a2, float *a3)
{
  signed int v3; // r10d
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned int *v8; // r8
  float v9; // xmm9_4
  float v10; // xmm11_4
  __int64 v11; // rcx
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm7_4

  v3 = 0;
  result = a2;
  v5 = 5210LL * a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( (int)dword_140404A6C[v5 + 129716768] > 0 )
  {
    v8 = &dword_140404A6C[v5 + 129716769];
    v9 = 0.0;
    v10 = 0.0;
    do
    {
      v11 = 60LL * (int)*v8;
      v12 = *(float *)&dword_140404A6C[v11 + 73007026] - *a3;
      v13 = *(float *)&dword_140404A6C[v11 + 73007028] - a3[2];
      v14 = *(float *)&dword_140404A6C[v11 + 73007027] - a3[1];
      *(float *)a1 = (float)((float)((float)((float)((float)((float)(v13 * *(float *)&dword_1402F6178)
                                                           - (float)(v12 * *(float *)&dword_1402F6180))
                                                   * *(float *)&dword_140404A6C[v11 + 73007033])
                                           + (float)((float)((float)(v14 * *(float *)&dword_1402F6180)
                                                           - (float)(v13 * *(float *)&dword_1402F617C))
                                                   * *(float *)&dword_140404A6C[v11 + 73007032]))
                                   + (float)((float)((float)(v12 * *(float *)&dword_1402F617C)
                                                   - (float)(v14 * *(float *)&dword_1402F6178))
                                           * *(float *)&dword_140404A6C[v11 + 73007034]))
                           * 0.0078125)
                   + *(float *)a1;
      v9 = v9
         + (float)((float)((float)((float)((float)((float)(v13 * *(float *)&dword_1402F6188)
                                                 - (float)(v12 * *(float *)&dword_1402F6190))
                                         * *(float *)&dword_140404A6C[60 * *v8 + 73007033])
                                 * 0.0078125)
                         + (float)((float)((float)((float)(v14 * *(float *)&dword_1402F6190)
                                                 - (float)(v13 * *(float *)&dword_1402F618C))
                                         * *(float *)&dword_140404A6C[60 * *v8 + 73007032])
                                 * 0.0078125))
                 + (float)((float)((float)((float)(v12 * *(float *)&dword_1402F618C)
                                         - (float)(v14 * *(float *)&dword_1402F6188))
                                 * *(float *)&dword_140404A6C[60 * *v8 + 73007034])
                         * 0.0078125));
      *(float *)(a1 + 4) = v9;
      result = (int)*v8;
      v10 = v10
          + (float)((float)((float)((float)((float)((float)(v13 * *(float *)&dword_1402F6198)
                                                  - (float)(v12 * *(float *)&dword_1402F61A0))
                                          * *(float *)&dword_140404A6C[60 * result + 73007033])
                                  * 0.0078125)
                          + (float)((float)((float)((float)(v14 * *(float *)&dword_1402F61A0)
                                                  - (float)(v13 * *(float *)&dword_1402F619C))
                                          * *(float *)&dword_140404A6C[60 * result + 73007032])
                                  * 0.0078125))
                  + (float)((float)((float)((float)(v12 * *(float *)&dword_1402F619C)
                                          - (float)(v14 * *(float *)&dword_1402F6198))
                                  * *(float *)&dword_140404A6C[60 * result + 73007034])
                          * 0.0078125));
      ++v3;
      *(float *)(a1 + 8) = v10;
      ++v8;
    }
    while ( v3 < (int)dword_140404A6C[v5 + 129716768] );
  }
  return result;
}

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
  float v56; // [rsp+0h] [rbp-138h] BYREF
  __int64 v57; // [rsp+8h] [rbp-130h] BYREF
  float v58; // [rsp+10h] [rbp-128h]
  _OWORD v59[4]; // [rsp+20h] [rbp-118h]
  __int64 v60; // [rsp+60h] [rbp-D8h]

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
  return sub_1401F8B20((unsigned __int64)&v56 ^ v60);
}

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
  __int64 v6; // [rsp+0h] [rbp-248h] BYREF
  int v7; // [rsp+20h] [rbp-228h] BYREF
  _BYTE v8[512]; // [rsp+30h] [rbp-218h] BYREF
  __int64 v9; // [rsp+230h] [rbp-18h]

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
  return sub_1401F8B20((unsigned __int64)&v6 ^ v9);
}


//----- (00000001400A54F0) ----------------------------------------------------
__int64 sub_1400A54F0()
{
  return (unsigned __int16)sub_14009DE80();
}


//----- (00000001400A5510) ----------------------------------------------------
__int64            sub_1400A5510(float *a1, float a2, float a3)
{
  unsigned int v4; // edx
  unsigned int v7; // ecx
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  unsigned int v13; // ecx
  __int64 result; // rax
  float v15; // xmm1_4
  float v16; // xmm0_4

  v4 = ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253])
     * ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253]);
  ++dword_140404A6C[133919253];
  *a1 = 1.0 - (float)((float)(((15731 * v4 + 789221) * (15731 * v4 + 789221) - 771171059) & 0x7FFFFFFF) * 9.3132257e-10);
  v7 = ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253])
     * ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253]);
  ++dword_140404A6C[133919253];
  v8 = *a1;
  v9 = 1.0 - (float)((float)(((15731 * v7 + 789221) * (15731 * v7 + 789221) - 771171059) & 0x7FFFFFFF) * 9.3132257e-10);
  v10 = fsqrt((float)(v8 * v8) + (float)(v9 * v9));
  if ( v10 == 0.0 )
  {
    v11 = 0.0;
    v12 = 0.0;
  }
  else
  {
    v11 = v9 * (float)(1.0 / v10);
    v12 = v8 * (float)(1.0 / v10);
  }
  *a1 = v12;
  a1[1] = v11;
  v13 = ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253])
      * ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253]);
  result = ++dword_140404A6C[133919253];
  v15 = (float)((float)((float)((float)(1.0
                                      - (float)((float)(((15731 * v13 + 789221) * (15731 * v13 + 789221) - 771171059)
                                                      & 0x7FFFFFFF)
                                              * 9.3132257e-10))
                              + 1.0)
                      * a2)
              * 0.5)
      + a3;
  v16 = v15 * *a1;
  a1[1] = v15 * a1[1];
  *a1 = v16;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1602E12C0: using guessed type unsigned int;

//----- (00000001400A56B0) ----------------------------------------------------
__int64            sub_1400A56B0(float *a1, float a2, float a3)
{
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  __int64 result; // rax
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4

  v4 = (dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253];
  ++dword_140404A6C[133919253];
  *a1 = 1.0
      - (float)((float)(((15731 * v4 * v4 + 789221) * (15731 * v4 * v4 + 789221) - 771171059) & 0x7FFFFFFF)
              * 9.3132257e-10);
  v5 = ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253])
     * ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253]);
  ++dword_140404A6C[133919253];
  a1[1] = 1.0
        - (float)((float)(((15731 * v5 + 789221) * (15731 * v5 + 789221) - 771171059) & 0x7FFFFFFF) * 9.3132257e-10);
  v6 = ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253])
     * ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253]);
  ++dword_140404A6C[133919253];
  a1[2] = 1.0
        - (float)((float)(((15731 * v6 + 789221) * (15731 * v6 + 789221) - 771171059) & 0x7FFFFFFF) * 9.3132257e-10);
  sub_14007A240((__int64)a1, a1);
  v7 = ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253])
     * ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253]);
  result = ++dword_140404A6C[133919253];
  v9 = (float)((float)((float)((float)(1.0
                                     - (float)((float)(((15731 * v7 + 789221) * (15731 * v7 + 789221) - 771171059)
                                                     & 0x7FFFFFFF)
                                             * 9.3132257e-10))
                             + 1.0)
                     * a2)
             * 0.5)
     + a3;
  v10 = v9 * *a1;
  v11 = v9 * a1[1];
  v12 = v9 * a1[2];
  *a1 = v10;
  a1[1] = v11;
  a1[2] = v12;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1602E12C0: using guessed type unsigned int;

//----- (00000001400A5890) ----------------------------------------------------
void            sub_1400A5890(float *a1)
{
  float v2; // xmm10_4
  float v3; // xmm15_4
  float v4; // xmm2_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm3_4
  float v8; // xmm12_4
  float v9; // xmm4_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  float v12; // xmm13_4
  float v13; // xmm0_4
  float v14; // xmm14_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm0_4
  float v20; // xmm9_4
  float v21; // xmm12_4
  float v22; // xmm10_4
  float v23; // xmm15_4
  float v24; // xmm10_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // [rsp+D0h] [rbp+8h]
  float v29; // [rsp+D8h] [rbp+10h]
  float v30; // [rsp+E0h] [rbp+18h]

  v2 = *(float *)&dword_140404A6C[284550403];
  v3 = *(float *)&dword_140404A6C[284550404];
  v4 = fsqrt(262144.0 - (float)(246016.0 - (float)((float)(v3 * v3) * 246016.0)))
     - (float)(*(float *)&dword_140404A6C[284550404] * 496.0);
  v5 = *(float *)&dword_140404A6C[284550403] * v4;
  v6 = *(float *)&dword_140404A6C[284550405] * v4;
  v28 = *(float *)&dword_140404A6C[284550404] * v4;
  v7 = (float)((float)(*(float *)&dword_140404A6C[284550404] * v4) * 0.375) + 496.0;
  v8 = fsqrt(
         (float)((float)((float)(v4 * *(float *)&dword_140404A6C[284550404])
                       * (float)(v4 * *(float *)&dword_140404A6C[284550404]))
               + (float)(v5 * v5))
       + (float)(v6 * v6));
  v9 = (float)((float)((float)((float)(*(float *)&dword_140404A6C[284550403] * v4) * 0.375)
                     * *(float *)&dword_140404A6C[284550403])
             + (float)(v7 * *(float *)&dword_140404A6C[284550404]))
     + (float)((float)((float)(*(float *)&dword_140404A6C[284550405] * v4) * 0.375)
             * *(float *)&dword_140404A6C[284550405]);
  v10 = (float)(fsqrt(
                  262144.0
                - (float)((float)((float)((float)((float)(v6 * v6) + (float)(v5 * v5)) * 0.140625) + (float)(v7 * v7))
                        - (float)(v9 * v9)))
              - v9)
      * 0.0390625;
  v11 = expf(-(float)(*(float *)&dword_1402B23D0 * v10));
  v12 = *(float *)&dword_1402B23D4;
  v29 = v11;
  v13 = expf(-(float)(*(float *)&dword_1402B23D4 * v10));
  v14 = *(float *)&dword_1402B23D8;
  v30 = v13;
  v15 = 0.0;
  v16 = expf(-(float)(*(float *)&dword_1402B23D8 * v10));
  if ( v8 == 0.0 )
  {
    v17 = 0.0;
    v18 = 0.0;
  }
  else
  {
    v17 = v5 * (float)(1.0 / v8);
    v15 = (float)(1.0 / v8) * v28;
    v18 = v6 * (float)(1.0 / v8);
  }
  v19 = *(float *)&dword_140404A6C[284550405] * v18;
  v20 = v8 * 0.0390625;
  v21 = v8 * 0.014648438;
  v22 = (float)(v2 * v17) + (float)(v3 * v15);
  v23 = *(float *)&dword_1402B23D0;
  v24 = (float)((float)(v22 + v19) * (float)(v22 + v19)) + 1.0;
  v25 = expf(-(float)(*(float *)&dword_1402B23D0 * v21)) * (float)((float)((float)(v20 * v29) * v24) * v23);
  *a1 = v25;
  v26 = expf(-(float)(v12 * v21)) * (float)((float)((float)(v20 * v30) * v24) * v12);
  a1[1] = v26;
  v27 = expf(-(float)(v14 * v21)) * (float)((float)((float)(v20 * v16) * v24) * v14);
  a1[2] = v27;
  if ( v25 > 1.0 )
    *a1 = 1.0;
  if ( v26 > 1.0 )
    a1[1] = 1.0;
  if ( v27 > 1.0 )
    a1[2] = 1.0;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402B23D0: using guessed type int dword_1402B23D0;
// 1402B23D4: using guessed type int dword_1402B23D4;
// 1402B23D8: using guessed type int dword_1402B23D8;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18417DE78: using guessed type unsigned int;
// 18417DE7C: using guessed type unsigned int;

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

//----- (00000001400A5D30) ----------------------------------------------------
void sub_1400A5D30()
{
  float v0; // xmm2_4
  float v1; // xmm3_4
  float v2; // xmm3_4
  float v3; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm5_4
  float v6; // xmm15_4
  float v7; // xmm1_4
  float v8; // xmm12_4
  float v9; // xmm13_4
  float v10; // xmm14_4
  float v11; // xmm7_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm7_4
  float v16; // xmm11_4
  float v17; // xmm7_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  float v22; // xmm8_4
  float v23; // xmm7_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // [rsp+D0h] [rbp+8h]
  float v28; // [rsp+D8h] [rbp+10h]
  float v29; // [rsp+E0h] [rbp+18h]
  float v30; // [rsp+E8h] [rbp+20h]

  v0 = fsqrt(
         262144.0
       - (float)(246016.0
               - (float)((float)(*(float *)&dword_140404A6C[284550404] * *(float *)&dword_140404A6C[284550404])
                       * 246016.0)))
     - (float)(*(float *)&dword_140404A6C[284550404] * 496.0);
  v30 = fsqrt(
          (float)((float)((float)(*(float *)&dword_140404A6C[284550404] * v0)
                        * (float)(*(float *)&dword_140404A6C[284550404] * v0))
                + (float)((float)(*(float *)&dword_140404A6C[284550403] * v0)
                        * (float)(*(float *)&dword_140404A6C[284550403] * v0)))
        + (float)((float)(*(float *)&dword_140404A6C[284550405] * v0)
                * (float)(*(float *)&dword_140404A6C[284550405] * v0)))
      * 0.029296875;
  v1 = fsqrt(
         262144.0
       - (float)(246016.0 - (float)((float)(*(float *)&dword_1402F618C * *(float *)&dword_1402F618C) * 246016.0)))
     - (float)(*(float *)&dword_1402F618C * 496.0);
  v27 = fsqrt(
          (float)((float)((float)((float)((float)(v1 * v1) * *(float *)&dword_1402F618C) * *(float *)&dword_1402F618C)
                        + (float)((float)(v1 * *(float *)&dword_1402F6190) * (float)(v1 * *(float *)&dword_1402F6190)))
                * 0.09765625)
        + (float)((float)((float)(v1 * 0.09765625) * v1)
                * (float)(*(float *)&dword_1402F6188 * *(float *)&dword_1402F6188)))
      * 0.029296875;
  v2 = fsqrt(
         262144.0
       - (float)(246016.0 - (float)((float)(*(float *)&dword_1402F617C * *(float *)&dword_1402F617C) * 246016.0)))
     - (float)(*(float *)&dword_1402F617C * 496.0);
  v28 = fsqrt(
          (float)((float)((float)((float)((float)(v2 * v2) * *(float *)&dword_1402F617C) * *(float *)&dword_1402F617C)
                        + (float)((float)(v2 * *(float *)&dword_1402F6180) * (float)(v2 * *(float *)&dword_1402F6180)))
                * 0.09765625)
        + (float)((float)((float)(v2 * 0.09765625) * v2)
                * (float)(*(float *)&dword_1402F6178 * *(float *)&dword_1402F6178)))
      * 0.029296875;
  v3 = fsqrt(
         262144.0
       - (float)(246016.0
               - (float)((float)((float)-*(float *)&dword_1402F617C * (float)-*(float *)&dword_1402F617C) * 246016.0)))
     - (float)((float)-*(float *)&dword_1402F617C * 496.0);
  v29 = fsqrt(
          (float)((float)((float)((float)(v3 * 0.09765625) * (float)-*(float *)&dword_1402F617C)
                        * (float)(v3 * (float)-*(float *)&dword_1402F617C))
                + (float)((float)((float)(v3 * 0.09765625) * v3)
                        * (float)((float)-*(float *)&dword_1402F6178 * (float)-*(float *)&dword_1402F6178)))
        + (float)((float)((float)(v3 * 0.09765625) * v3)
                * (float)((float)-*(float *)&dword_1402F6180 * (float)-*(float *)&dword_1402F6180)))
      * 0.029296875;
  v4 = fsqrt(
         262144.0
       - (float)(246016.0 - (float)((float)(*(float *)&dword_1402F619C * *(float *)&dword_1402F619C) * 246016.0)))
     - (float)(*(float *)&dword_1402F619C * 496.0);
  v5 = -*(float *)&dword_1402F619C;
  v6 = fsqrt(
         (float)((float)((float)((float)((float)(v4 * v4) * *(float *)&dword_1402F619C) * *(float *)&dword_1402F619C)
                       + (float)((float)(v4 * *(float *)&dword_1402F61A0) * (float)(v4 * *(float *)&dword_1402F61A0)))
               * 0.09765625)
       + (float)((float)((float)(v4 * 0.09765625) * v4)
               * (float)(*(float *)&dword_1402F6198 * *(float *)&dword_1402F6198)))
     * 0.029296875;
  v7 = fsqrt(262144.0 - (float)(246016.0 - (float)((float)(v5 * v5) * 246016.0))) - (float)(v5 * 496.0);
  v8 = fsqrt(
         (float)((float)((float)((float)(v7 * 0.09765625) * v7)
                       * (float)((float)-*(float *)&dword_1402F6198 * (float)-*(float *)&dword_1402F6198))
               + (float)((float)((float)(v5 * v5) * 0.09765625) * (float)(v7 * v7)))
       + (float)((float)((float)(v7 * 0.09765625) * v7)
               * (float)((float)-*(float *)&dword_1402F61A0 * (float)-*(float *)&dword_1402F61A0)))
     * 0.029296875;
  v9 = *(float *)&dword_1402B23D0;
  v10 = 1.0
      - (float)((float)((float)(1.0 - *(float *)&dword_140404A6C[284550404])
                      * (float)(1.0 - *(float *)&dword_140404A6C[284550404]))
              * (float)((float)(1.0 - *(float *)&dword_140404A6C[284550404])
                      * (float)(1.0 - *(float *)&dword_140404A6C[284550404])));
  v11 = expf(-(float)(v28 * *(float *)&dword_1402B23D0));
  v12 = v11 + expf(-(float)(v29 * v9));
  v13 = expf(-(float)(v6 * v9));
  v14 = (float)(v12 + (float)(v13 + expf(-(float)(v8 * v9)))) * 0.5;
  v15 = v14 + (float)(expf(-(float)(v9 * v27)) * 0.75);
  v16 = *(float *)&dword_1402B23D4;
  *(float *)&dword_140404A6C[284545205] = (float)(v15 * v10) * 0.75;
  v17 = expf(-(float)(v28 * *(float *)&dword_1402B23D4));
  v18 = v17 + expf(-(float)(v29 * v16));
  v19 = expf(-(float)(v6 * v16));
  v20 = (float)(v18 + (float)(v19 + expf(-(float)(v8 * v16)))) * 0.5;
  v21 = expf(-(float)(v16 * v27));
  v22 = *(float *)&dword_1402B23D8;
  *(float *)&dword_140404A6C[284545206] = (float)((float)(v20 + (float)(v21 * 0.75)) * v10) * 0.75;
  v23 = expf(-(float)(v28 * *(float *)&dword_1402B23D8));
  v24 = v23 + expf(-(float)(v29 * v22));
  v25 = expf(-(float)(v6 * v22));
  v26 = (float)(v24 + (float)(v25 + expf(-(float)(v8 * v22)))) * 0.5;
  *(float *)&dword_140404A6C[284545207] = (float)((float)(v26 + (float)(expf(-(float)(v22 * v27)) * 0.75)) * v10) * 0.75;
  *(float *)&dword_140404A6C[284545209] = expf(-(float)(v9 * v30)) * 1.125;
  *(float *)&dword_140404A6C[284545210] = expf(-(float)(v16 * v30)) * 1.125;
  *(float *)&dword_140404A6C[284545211] = expf(-(float)(v22 * v30)) * 1.125;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402B23D0: using guessed type int dword_1402B23D0;
// 1402B23D4: using guessed type int dword_1402B23D4;
// 1402B23D8: using guessed type int dword_1402B23D8;
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

//----- (00000001400A63E0) ----------------------------------------------------
__int64 sub_1400A63E0()
{
       char *v0; // r8
  char *v1; // rcx
  bool v2; // zf
  _QWORD *v3; // rax
  char *v4; // rcx
       char *v5; // rdi
       char *v6; // rbx
       char *v7; // rax
  char *v8; // rcx
  _WORD *v9; // rcx
  int v10; // eax
  char *v11; // rcx
  char *v12; // rdx
  __int64 v14; // [rsp-20h] [rbp-2088h] BYREF
  char v15[4096]; // [rsp+10h] [rbp-2058h] BYREF
  __int64 v16; // [rsp+1010h] [rbp-1058h]

  LOBYTE(dword_140404A6C[83177973]) = 0;
  v0 = (     char *)sub_140198E51();
  v1 = (char *)&dword_140404A6C[83177972] + 3;
  do
    v2 = *++v1 == 0;
  while ( !v2 );
  strcpy(v1, v0);
  v3 = (_QWORD *)((char *)&dword_140404A6C[83177972] + 3);
  do
  {
    v2 = *((_BYTE *)v3 + 1) == 0;
    v3 = (_QWORD *)((char *)v3 + 1);
  }
  while ( !v2 );
  v4 = (char *)&dword_140404A6C[83177972] + 3;
  *v3 = 0x7469622D343620LL;
  do
    v2 = *++v4 == 0;
  while ( !v2 );
  strcpy(v4, "\n\n");
  v5 = (     char *)qword_140302FA8(7936);
  v6 = (     char *)qword_140302FA8(7937);
  v7 = (     char *)qword_140302FA8(7938);
  sub_140158AB0(v15, "GL_VENDOR: %s\nGL_RENDERER: %s\nGL_VERSION: %s\n", v5, v6, v7);
  v8 = (char *)&dword_140404A6C[83177972] + 3;
  do
    v2 = *++v8 == 0;
  while ( !v2 );
  strcpy(v8, v15);
  v9 = (_WORD *)((char *)&dword_140404A6C[83177972] + 3);
  do
  {
    v2 = *((_BYTE *)v9 + 1) == 0;
    v9 = (_WORD *)((char *)v9 + 1);
  }
  while ( !v2 );
  *v9 = 10;
  v10 = sub_140198EB1();
  sub_140158AB0(v15, "RAM: %d MB\n", v10);
  v11 = (char *)&dword_140404A6C[83177972] + 3;
  do
    v2 = *++v11 == 0;
  while ( !v2 );
  strcpy(v11, v15);
  if ( (unsigned int)sub_140198EAB() )
  {
    v12 = (char *)&dword_140404A6C[83177972] + 3;
    do
      v2 = *++v12 == 0;
    while ( !v2 );
    strcpy(v12, "SSE2\n");
  }
  sub_140198EA5();
  return sub_1401F8B20((unsigned __int64)&v14 ^ v16);
}

// 140198E51: using guessed type __int64(void);
// 140302FA8: using guessed type __int64 (__fastcall *qword_140302FA8)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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

//----- (00000001400A6700) ----------------------------------------------------
__int64            sub_1400A6700(__int64 (           *a1)(     char *))
{
  unsigned int v2; // edi
  __int64 (           *v3)(_QWORD); // rax

  v2 = 0;
  *(_QWORD *)&dword_140404A68 = 0;
  v3 = (__int64 (           *)(_QWORD))a1("glGetString");
  qword_140302FA8 = v3;
  if ( !v3 || !v3(7938) )
    return 0;
  sub_140091880();
  sub_1400E3BC0(a1);
  if ( dword_140302FF0 )
  {
    qword_140302FF8 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glDrawArrays");
    *(_QWORD *)&flt_140384000[131076] = a1("glDrawElements");
    *(_QWORD *)&flt_140384000[131078] = a1("glPolygonOffset");
    *(_QWORD *)&flt_140384000[131080] = a1("glCopyTexImage1D");
    *(_QWORD *)&flt_140384000[131082] = a1("glCopyTexImage2D");
    *(_QWORD *)&flt_140384000[131084] = a1("glCopyTexSubImage1D");
    *(_QWORD *)&flt_140384000[131086] = a1("glCopyTexSubImage2D");
    *(_QWORD *)&flt_140384000[131088] = a1("glTexSubImage1D");
    *(_QWORD *)&flt_140384000[131090] = a1("glTexSubImage2D");
    qword_140404050 = (double (           *)(_QWORD, _QWORD))a1("glBindTexture");
    unk_140404058 = a1("glDeleteTextures");
    unk_140404060 = (__int64 (           *)(_QWORD, _QWORD))a1("glGenTextures");
    unk_140404068 = a1("glIsTexture");
  }
  if ( dword_140302FF4 )
  {
    unk_140404070 = a1("glDrawRangeElements");
    unk_140404078 = (double (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD))a1("glTexImage3D");
    unk_140404080 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD))a1("glTexSubImage3D");
    unk_140404088 = a1("glCopyTexSubImage3D");
  }
  if ( unk_140404090 )
  {
    unk_140404098 = (double (           *)(_QWORD))a1("glActiveTexture");
    unk_1404040A0 = a1("glSampleCoverage");
    unk_1404040A8 = a1("glCompressedTexImage3D");
    unk_1404040B0 = a1("glCompressedTexImage2D");
    unk_1404040B8 = a1("glCompressedTexImage1D");
    unk_1404040C0 = a1("glCompressedTexSubImage3D");
    unk_1404040C8 = a1("glCompressedTexSubImage2D");
    unk_1404040D0 = a1("glCompressedTexSubImage1D");
    unk_1404040D8 = a1("glGetCompressedTexImage");
  }
  if ( unk_140404094 )
  {
    unk_1404040E0 = a1("glBlendFuncSeparate");
    unk_1404040E8 = a1("glMultiDrawArrays");
    unk_1404040F0 = a1("glMultiDrawElements");
    unk_1404040F8 = a1("glPointParameterf");
    unk_140404100 = a1("glPointParameterfv");
    unk_140404108 = a1("glPointParameteri");
    unk_140404110 = a1("glPointParameteriv");
    unk_140404118 = a1("glBlendColor");
    unk_140404120 = a1("glBlendEquation");
  }
  if ( unk_140404128 )
  {
    unk_140404130 = a1("glGenQueries");
    unk_140404138 = a1("glDeleteQueries");
    unk_140404140 = a1("glIsQuery");
    unk_140404148 = a1("glBeginQuery");
    unk_140404150 = a1("glEndQuery");
    unk_140404158 = a1("glGetQueryiv");
    unk_140404160 = a1("glGetQueryObjectiv");
    unk_140404168 = a1("glGetQueryObjectuiv");
    qword_140404170 = (double (           *)(_QWORD, _QWORD, _QWORD))a1("glBindBuffer");
    unk_140404178 = a1("glDeleteBuffers");
    unk_140404180 = (__int64 (           *)(_QWORD, _QWORD))a1("glGenBuffers");
    unk_140404188 = a1("glIsBuffer");
    unk_140404190 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glBufferData");
    qword_140404198 = (double (           *)(_QWORD, _QWORD, _QWORD, _QWORD))a1("glBufferSubData");
    unk_1404041A0 = a1("glGetBufferSubData");
    unk_1404041A8 = a1("glMapBuffer");
    unk_1404041B0 = a1("glUnmapBuffer");
    unk_1404041B8 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glGetBufferParameteriv");
    unk_1404041C0 = a1("glGetBufferPointerv");
  }
  sub_1400E42E0(a1);
  if ( unk_1404044B0 )
  {
    unk_1404044B8 = a1("glUniformMatrix2x3fv");
    unk_1404044C0 = a1("glUniformMatrix3x2fv");
    unk_1404044C8 = a1("glUniformMatrix2x4fv");
    unk_1404044D0 = a1("glUniformMatrix4x2fv");
    unk_1404044D8 = a1("glUniformMatrix3x4fv");
    unk_1404044E0 = a1("glUniformMatrix4x3fv");
  }
  sub_1400E4950(a1);
  if ( unk_140404788 )
  {
    unk_140404790 = a1("glDrawArraysInstanced");
    unk_140404798 = a1("glDrawElementsInstanced");
    unk_1404047A0 = a1("glTexBuffer");
    unk_1404047A8 = a1("glPrimitiveRestartIndex");
    unk_1404047B0 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a1("glCopyBufferSubData");
    unk_1404047B8 = a1("glGetUniformIndices");
    unk_1404047C0 = a1("glGetActiveUniformsiv");
    unk_1404047C8 = a1("glGetActiveUniformName");
    unk_1404047D0 = a1("glGetUniformBlockIndex");
    unk_1404047D8 = a1("glGetActiveUniformBlockiv");
    unk_1404047E0 = a1("glGetActiveUniformBlockName");
    unk_1404047E8 = a1("glUniformBlockBinding");
    unk_140404528 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a1("glBindBufferRange");
    unk_140404530 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glBindBufferBase");
    unk_1404044F8 = a1("glGetIntegeri_v");
  }
  if ( unk_14040478C )
  {
    unk_1404047F0 = (__int64 (           *)(_QWORD, _QWORD, _QWORD))a1("glDrawElementsBaseVertex");
    unk_1404047F8 = a1("glDrawRangeElementsBaseVertex");
    unk_140404800 = a1("glDrawElementsInstancedBaseVertex");
    unk_140404808 = (__int64 (           *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))a1(
                                                                                              "glMultiDrawElementsBaseVertex");
    unk_140404810 = a1("glProvokingVertex");
    unk_140404818 = a1("glFenceSync");
    unk_140404820 = a1("glIsSync");
    unk_140404828 = a1("glDeleteSync");
    unk_140404830 = a1("glClientWaitSync");
    unk_140404838 = a1("glWaitSync");
    unk_140404840 = a1("glGetInteger64v");
    unk_140404848 = a1("glGetSynciv");
    unk_140404850 = a1("glGetInteger64i_v");
    unk_140404858 = a1("glGetBufferParameteri64v");
    unk_140404860 = a1("glFramebufferTexture");
    unk_140404868 = a1("glTexImage2DMultisample");
    unk_140404870 = a1("glTexImage3DMultisample");
    unk_140404878 = a1("glGetMultisamplefv");
    unk_140404880 = a1("glSampleMaski");
  }
  sub_1400E5110(a1);
  if ( !(unsigned int)sub_140091BA0() )
    return 0;
  if ( unk_14040488C )
    unk_140404A60 = (__int64 (           *)(_QWORD, _QWORD))a1("glClipControl");
  if ( dword_140404A68 || dword_140404A6C[0] )
    return 1;
  return v2;
}

// 140302FA8: using guessed type __int64 (__fastcall *qword_140302FA8)(_QWORD);
// 140302FF0: using guessed type int dword_140302FF0;
// 140302FF4: using guessed type int dword_140302FF4;
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404018: using guessed type __int64 (*)(void);
// 140404020: using guessed type float;
// 140404028: using guessed type float;
// 140404030: using guessed type float;
// 140404038: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _DWORD, _QWORD, _DWORD);
// 140404040: using guessed type float;
// 140404048: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404060: using guessed type __int64 (__fastcall *unk_140404060)(_QWORD, _QWORD);
// 140404078: using guessed type double (__fastcall *unk_140404078)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140404080: using guessed type __int64 (__fastcall *unk_140404080)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404180: using guessed type __int64 (__fastcall *unk_140404180)(_QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404041B8: using guessed type __int64 (__fastcall *unk_1404041B8)(_QWORD, _QWORD, _QWORD);
// 140404528: using guessed type __int64 (__fastcall *unk_140404528)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140404530: using guessed type __int64 (__fastcall *unk_140404530)(_QWORD, _QWORD, _QWORD);
// 1404047B0: using guessed type __int64 (__fastcall *unk_1404047B0)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 1404047F0: using guessed type __int64 (__fastcall *unk_1404047F0)(_QWORD, _QWORD, _QWORD);
// 140404808: using guessed type __int64 (__fastcall *unk_140404808)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD);
// 140404A60: using guessed type __int64 (__fastcall *unk_140404A60)(_QWORD, _QWORD);
// 140404A68: using guessed type int dword_140404A68;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A6DF0) ----------------------------------------------------
__int64 sub_1400A6DF0()
{
  __int64 v0; // r8

  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3553);
  LOBYTE(v0) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  qword_140302F58(515);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215061])(2304);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2960);
  (*(void (           **)(__int64))&dword_140404A6C[18215095])(0xFFFFFFFFLL);
  qword_140302F50(7680, 7680, 7680);
  return qword_140302F48(517, 0, 0xFFFFFFFFLL);
}

// 1400A6E0C: variable 'v0' is possibly undefined
// 140302F48: using guessed type __int64 (__fastcall *qword_140302F48)(_QWORD, _QWORD, _QWORD);
// 140302F50: using guessed type __int64 (__fastcall *qword_140302F50)(_QWORD, _QWORD, _QWORD);
// 140302F58: using guessed type double (__fastcall *qword_140302F58)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CC0: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D48: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (00000001400A6E90) ----------------------------------------------------
__int64 sub_1400A6E90()
{
  __int64 v0; // r8

  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3553);
  LOBYTE(v0) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  qword_140302F58(515);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215061])(2304);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2960);
  (*(void (           **)(__int64))&dword_140404A6C[18215095])(0xFFFFFFFFLL);
  qword_140302F50(7680, 7680, 7680);
  return qword_140302F48(514, 0, 0xFFFFFFFFLL);
}

// 1400A6EAC: variable 'v0' is possibly undefined
// 140302F48: using guessed type __int64 (__fastcall *qword_140302F48)(_QWORD, _QWORD, _QWORD);
// 140302F50: using guessed type __int64 (__fastcall *qword_140302F50)(_QWORD, _QWORD, _QWORD);
// 140302F58: using guessed type double (__fastcall *qword_140302F58)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CC0: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D48: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (00000001400A6F30) ----------------------------------------------------
double sub_1400A6F30()
{
  __int64 v0; // r8
  __int64 v1; // rcx

  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3553);
  LOBYTE(v0) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
  LOBYTE(v1) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v1);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3042);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  qword_140302F58(515);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215061])(2304);
  return (*(double (           **)(__int64))&dword_140404A6C[18215101])(2960);
}

// 1400A6F4C: variable 'v0' is possibly undefined
// 1400A6F54: variable 'v1' is possibly undefined
// 140302F58: using guessed type double (__fastcall *qword_140302F58)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CC0: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (00000001400A6FB0) ----------------------------------------------------
__int64 sub_1400A6FB0()
{
  __int64 v0; // rcx

  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3553);
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(0,0,0,0);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  v0 = 518;
  if ( dword_140404A6C[73991626] )
    v0 = 515;
  qword_140302F58(v0);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215061])(2304);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2960);
  unk_1404041E0(1029, 519, 0, 0xFFFFFFFFLL);
  unk_1404041E8(1029, 0xFFFFFFFFLL);
  unk_1404041D8(1029, 7680, 7680, 34056);
  unk_1404041E0(1028, 519, 0, 0xFFFFFFFFLL);
  unk_1404041E8(1028, 0xFFFFFFFFLL);
  return unk_1404041D8(1028, 7680, 7680, 34055);
}

// 140302F58: using guessed type double (__fastcall *qword_140302F58)(_QWORD);
// 1404041D8: using guessed type __int64 (__fastcall *unk_1404041D8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404041E0: using guessed type __int64 (__fastcall *unk_1404041E0)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404041E8: using guessed type __int64 (__fastcall *unk_1404041E8)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CC0: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (00000001400A70B0) ----------------------------------------------------
_UNKNOWN **           sub_1400A70B0(int a1)
{
  _UNKNOWN **result; // rax
  float *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rbx
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  __int64 v9; // rcx
  int v10; // r9d
  __int64 v11; // rdx
  int v12; // edx
  float v13; // xmm11_4
  float *v14; // rdx
  float v15; // xmm12_4
  __int64 v16; // r8
  float v17; // xmm13_4
  __int64 v18; // rcx
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  float v23; // xmm8_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  __int64 v27; // rcx
  float v28; // xmm5_4
  float v29; // xmm7_4
  float v30; // xmm8_4
  float v31; // xmm0_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = (float *)&dword_140404A6C[280651442];
  v3 = 256;
  v4 = a1;
  do
  {
    if ( !*((_DWORD *)v2 - 139) )
      goto LABEL_21;
    v5 = 1760 * v4;
    v6 = *(v2 - 1) - *(float *)&dword_140404A6C[1760 * v4 + 278845917];
    v7 = *(v2 - 2) - *(float *)&dword_140404A6C[1760 * v4 + 278845916];
    v8 = (float)((float)(v6 * v6) + (float)(v7 * v7))
       + (float)((float)(*v2 - *(float *)&dword_140404A6C[1760 * v4 + 278845918])
               * (float)(*v2 - *(float *)&dword_140404A6C[1760 * v4 + 278845918]));
    if ( v8 >= 16.0 )
    {
      if ( v8 >= 64.0 )
        goto LABEL_21;
    }
    else
    {
      v9 = (int)dword_140404A6C[v5 + 278845901];
      *(v2 - 124) = 0.0;
      v10 = v9;
      if ( (_DWORD)v9 != -1 )
      {
        v11 = *((int *)v2 - 137);
        if ( (_DWORD)v11 != -1
          && (_DWORD)v9 != (_DWORD)v11
          && dword_140404A6C[3597 * v9 + 71856286] == dword_140404A6C[3597 * v11 + 71856286] )
        {
          sub_14011B7F0(v9, 100);
          v10 = dword_140404A6C[v5 + 278845901];
        }
      }
      if ( v10 != -1 )
      {
        v12 = *((_DWORD *)v2 - 137);
        if ( v12 != -1 )
          sub_140116D80(v10, v12, 100);
      }
    }
    v13 = *(float *)&dword_140404A6C[v5 + 278845916];
    v14 = v2 + 30;
    v15 = *(float *)&dword_140404A6C[v5 + 278845917];
    v16 = 8;
    v17 = *(float *)&dword_140404A6C[v5 + 278845918];
    do
    {
      v18 = 47LL * *((int *)v14 - 33);
      v19 = *(float *)&dword_140404A6C[v18 + 18215715] - v13;
      v20 = *(float *)&dword_140404A6C[v18 + 18215716] - v15;
      v21 = *(float *)&dword_140404A6C[v18 + 18215717] - v17;
      v22 = fsqrt((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21));
      if ( v22 == 0.0 )
      {
        v23 = 0.0;
        v24 = 0.0;
        v25 = 0.0;
      }
      else
      {
        v23 = (float)(1.0 / v22) * v19;
        v24 = (float)(1.0 / v22) * v20;
        v25 = (float)(1.0 / v22) * v21;
      }
      result = (_UNKNOWN **)*((int *)v14 + 45);
      v26 = (float)(fmaxf(8.0 / (float)(*v14 + 8.0), 0.125) * (float)(8.0 - v22))
          * (float)((float)(8.0 - v22) * 0.013183594);
      *(float *)&dword_140404A6C[v18 + 18215718] = (float)(v23 * v26) + *(float *)&dword_140404A6C[v18 + 18215718];
      *(float *)&dword_140404A6C[v18 + 18215719] = (float)(v24 * v26) + *(float *)&dword_140404A6C[v18 + 18215719];
      *(float *)&dword_140404A6C[v18 + 18215720] = (float)(v25 * v26) + *(float *)&dword_140404A6C[v18 + 18215720];
      v27 = 47LL * (_QWORD)result;
      v28 = *(float *)&dword_140404A6C[47 * (_QWORD)result + 18215715] - v13;
      v29 = *(float *)&dword_140404A6C[47 * (_QWORD)result + 18215716] - v15;
      v30 = *(float *)&dword_140404A6C[47 * (_QWORD)result + 18215717] - v17;
      v31 = fsqrt((float)((float)(v29 * v29) + (float)(v28 * v28)) + (float)(v30 * v30));
      if ( v31 == 0.0 )
      {
        v32 = 0.0;
        v33 = 0.0;
        v34 = 0.0;
      }
      else
      {
        v32 = (float)(1.0 / v31) * v28;
        v33 = (float)(1.0 / v31) * v29;
        v34 = (float)(1.0 / v31) * v30;
      }
      v35 = 8.0 - v31;
      v36 = v14[78] + 8.0;
      v14 += 156;
      v37 = (float)(fmaxf(8.0 / v36, 0.125) * v35) * (float)(v35 * 0.013183594);
      *(float *)&dword_140404A6C[v27 + 18215718] = (float)(v32 * v37) + *(float *)&dword_140404A6C[v27 + 18215718];
      *(float *)&dword_140404A6C[v27 + 18215719] = (float)(v33 * v37) + *(float *)&dword_140404A6C[v27 + 18215719];
      *(float *)&dword_140404A6C[v27 + 18215720] = (float)(v34 * v37) + *(float *)&dword_140404A6C[v27 + 18215720];
      --v16;
    }
    while ( v16 );
LABEL_21:
    v2 += 7166;
    --v3;
  }
  while ( v3 );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
void            sub_1400A7A40(float a1, __int64 a2, __int64 a3, float a4, float a5)
{
  float v5; // xmm1_4
  float v6; // xmm2_4
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
  float v34; // [rsp+20h] [rbp-98h] BYREF
  float v35; // [rsp+24h] [rbp-94h]
  int v36; // [rsp+28h] [rbp-90h]

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

//----- (00000001400A83B0) ----------------------------------------------------
void sub_1400A83B0()
{
  unsigned int v0; // esi
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // r8d
  float v5; // xmm6_4
  int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rax
  float v9; // xmm2_4
  unsigned int *v10; // rbx
  float *v11; // rbp
  float *v12; // r14
  float v13; // xmm1_4
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16[4]; // [rsp+20h] [rbp-38h] BYREF

  v0 = -1;
  dword_140404A6C[282486845] = -1;
  if ( dword_140404A6C[284024501] != -1 )
  {
    v1 = 3597LL * (int)dword_140404A6C[284024501];
    v2 = (int)dword_140404A6C[v1 + 71856292];
    if ( (_DWORD)v2 != -1 )
    {
      v3 = 7166 * v2;
      if ( dword_140404A6C[7166 * v2 + 280651313] == -1 )
      {
        v4 = dword_140404A6C[v1 + 71856325] & 0x10;
        v5 = 0.5;
        v6 = 0;
        v7 = (v4 != 0 ? 0x28 : 0) + v3 * 4;
        if ( *(int *)((char *)&dword_140404A6C[280658139] + v7) <= 0 )
          goto LABEL_8;
        v8 = 10;
        if ( v4 )
          v8 = 0;
        if ( (int)dword_140404A6C[v3 + 280658139 + v8] <= 0 )
        {
LABEL_8:
          v9 = *(float *)&dword_140404A6C[v3 + 280651694];
          v10 = &dword_140404A6C[278845902];
          v11 = (float *)&dword_140404A6C[278845916];
          v12 = (float *)&dword_140404A6C[v3 + 280651674];
          v13 = *(float *)&dword_140404A6C[v3 + 280651693] * 1.5;
          v16[0] = *(float *)&dword_140404A6C[v3 + 280651674]
                 - (float)(*(float *)&dword_140404A6C[v3 + 280651692] * 1.5);
          v16[1] = *(float *)&dword_140404A6C[v3 + 280651675] - v13;
          v16[2] = *(float *)&dword_140404A6C[v3 + 280651676] - (float)(v9 * 1.5);
          do
          {
            if ( *(v10 - 9) )
            {
              if ( *v10 == -1 )
              {
                v14 = (int)v10[1];
                if ( (_DWORD)v14 == -1 || dword_140404A6C[1760 * v14 + 278845902] == -1 )
                {
                  v15 = sub_14007ABA0(v12, v16, v11);
                  if ( v15 < v5 )
                  {
                    v0 = v6;
                    v5 = v15;
                  }
                }
              }
            }
            ++v6;
            v11 += 1760;
            v10 += 1760;
          }
          while ( v6 < 1024 );
          dword_140404A6C[282486845] = v0;
          if ( v0 != -1 && *(int *)((char *)&dword_140404A6C[280658139] + v7) > 0 )
          {
            if ( !dword_140404A6C[1268
                                * dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v7)
                                                + 278845898]
                                + 278521356
                                + dword_140404A6C[1760 * v0 + 278845898]] )
              v0 = -1;
            dword_140404A6C[282486845] = v0;
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18399EB60: using guessed type unsigned int;

//----- (00000001400A85E0) ----------------------------------------------------
_BOOL8            sub_1400A85E0(int a1, int a2, int a3, int a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r11
  int v7; // r9d
  bool v8; // zf
  __int64 v9; // r10
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r10
  int v15; // eax

  if ( a2 == 1 )
  {
    v4 = 28664LL * a1;
    v5 = a3 ^ 1LL;
    v6 = v4 + 40LL * a3;
    v7 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v6);
    v8 = v7 == 0;
    if ( v7 > 0 )
    {
      v9 = v4 + 40 * v5;
      if ( *(int *)((char *)&dword_140404A6C[280658139] + v9) > 0 )
        return dword_140404A6C[1268
                             * dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v6)
                                             + 278845898]
                             + 278521356
                             + dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v9)
                                             + 278845898]] != 0;
      v8 = v7 == 0;
    }
    if ( !v8 )
      return 0;
    v11 = v4 + 40 * v5;
    if ( *(int *)((char *)&dword_140404A6C[280658139] + v11) <= 0 )
      return 0;
    v12 = 1760LL * *(int *)((char *)&dword_140404A6C[280658140] + v11);
    return (int)dword_140404A6C[v12 + 278845906] > 0
        && dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[v12 + 278845907] + 278845898]
                         + 278521356
                         + dword_140404A6C[v12 + 278845898]];
  }
  else
  {
    if ( a2 != 2 )
      return 0;
    v13 = 7166LL * a1;
    v14 = v13 * 4 + 40LL * a3;
    v15 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v14);
    if ( v15 <= 0 )
      return !v15 && !dword_140404A6C[14 * a3 + 280658223 + v13] && (int)dword_140404A6C[10 * a4 + 280658159 + v13] > 0;
    return dword_140404A6C[1268
                         * dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v14)
                                         + 278845898]
                         + 278521660
                         + a4]
        && (int)dword_140404A6C[10 * a4 + 280658159 + v13] < 2;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A87A0) ----------------------------------------------------
__int64            sub_1400A87A0(int a1)
{
  int v1; // r12d
  __int64 v2; // rbx
  signed int v3; // r13d
  __int64 result; // rax
  unsigned int *v5; // rdi
  float *v6; // r15
  __int64 v7; // rbp
  float v8; // xmm7_4
  float v9; // xmm6_4
  int v10; // r14d
  unsigned int *v11; // rsi
  float v12; // xmm2_4
  float *v13; // r12
  float v14; // xmm1_4
  float v15; // xmm0_4
  __int64 v16; // rdi
  __int64 v17; // r14
  BOOL v18; // esi
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // r9
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  float v26; // xmm0_4
  __int64 v27; // r10
  int v28; // edx
  __int64 v29; // r8
  __int64 v30; // rcx
  int v31; // r9d
  int v32; // edi
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned int v36; // ecx
  __int64 v37; // rcx
  float v38; // xmm0_4
  float v39; // xmm6_4
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r10
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r14
  unsigned int v48; // edx
  int v49; // edx
  __int64 v50; // rcx
  __int64 v51; // rbp
  int v52; // edx
  bool v53; // zf
  __int64 v54; // r14
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rsi
  unsigned int v61; // edx
  int v62; // edx
  float v63; // xmm3_4
  __int64 v64; // rsi
  __int64 v65; // r8
  __int64 v66; // r9
  int v67; // edx
  BOOL v68; // edx
  _BOOL8 v69; // rax
  float v70; // xmm0_4
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdi
  unsigned int v75; // edx
  int v76; // edx
  double v77; // xmm0_8
  signed int v78; // r14d
  float *v79; // r13
  int v80; // esi
  float v81; // xmm2_4
  float v82; // xmm1_4
  float v83; // xmm0_4
  unsigned __int64 v84; // rdx
  int v85; // r9d
  __int64 v86; // r8
  _BOOL8 v87; // r8
  unsigned int *v88; // r8
  float v89; // xmm10_4
  int i; // edx
  int v91; // r10d
  signed int v92; // ecx
  float v93; // xmm11_4
  float *v94; // r9
  float v95; // xmm12_4
  float v96; // xmm13_4
  float v97; // xmm14_4
  float v98; // xmm15_4
  float v99; // xmm2_4
  float v100; // xmm5_4
  float v101; // xmm1_4
  float v102; // xmm4_4
  float v103; // xmm8_4
  float v104; // xmm6_4
  float v105; // xmm9_4
  float v106; // xmm1_4
  float v107; // xmm7_4
  unsigned int *v108; // rax
  float v109; // [rsp+20h] [rbp-E8h] BYREF
  float v110; // [rsp+24h] [rbp-E4h]
  float v111; // [rsp+28h] [rbp-E0h]

  v1 = a1;
  v2 = 7166LL * a1;
  v3 = -1;
  result = (int)dword_140404A6C[v2 + 280658340];
  dword_140404A6C[v2 + 280658335] = -1;
  if ( (_DWORD)result != dword_140404A6C[v2 + 280658341] )
  {
    v5 = &dword_140404A6C[278845902];
    v6 = (float *)&dword_140404A6C[278845916];
    v7 = v2 * 4 + 48 * result;
    v8 = 0.5;
    dword_140404A6C[v2 + 280658335] = *(unsigned int *)((char *)&dword_140404A6C[280658342] + v7);
    dword_140404A6C[v2 + 280658336] = *(unsigned int *)((char *)&dword_140404A6C[280658343] + v7);
    dword_140404A6C[v2 + 280658337] = (int)(float)(*(float *)((char *)&dword_140404A6C[280658343] + v7) * 100.0);
    result = *(unsigned int *)((char *)&dword_140404A6C[280658342] + v7);
    if ( (_DWORD)result == 4 )
    {
      if ( dword_140404A6C[v2 + 280651313] == -1 )
      {
        v9 = 0.5;
        v10 = 0;
        v11 = &dword_140404A6C[278845902];
        v12 = *(float *)&dword_140404A6C[v2 + 280651693] * 1.5;
        v13 = (float *)&dword_140404A6C[278845916];
        v14 = *(float *)&dword_140404A6C[v2 + 280651694] * 1.5;
        v109 = *(float *)&dword_140404A6C[v2 + 280651674] - (float)(*(float *)&dword_140404A6C[v2 + 280651692] * 1.5);
        v110 = *(float *)&dword_140404A6C[v2 + 280651675] - v12;
        v111 = *(float *)&dword_140404A6C[v2 + 280651676] - v14;
        do
        {
          if ( *(v11 - 9) )
          {
            if ( *v11 == -1 && v11[1] == -1 )
            {
              v15 = sub_14007ABA0((float *)&dword_140404A6C[v2 + 280651674], &v109, v13);
              if ( v15 < v9 )
              {
                v3 = v10;
                v9 = v15;
              }
            }
          }
          ++v10;
          v13 += 1760;
          v11 += 1760;
        }
        while ( v10 < 1024 );
        v1 = a1;
        if ( v3 != -1 && dword_140404A6C[1760 * v3 + 278845898] == 39 && !dword_140404A6C[v2 + 280658139] )
          sub_1400E35D0(v3, -1, a1, 0);
      }
      dword_140404A6C[v2 + 280658340] = ((unsigned __int8)dword_140404A6C[v2 + 280658340] + 1) & 7;
      result = *(unsigned int *)((char *)&dword_140404A6C[280658342] + v7);
    }
    if ( (_DWORD)result == 2 )
    {
      LODWORD(v16) = *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7);
      v17 = *(int *)((char *)&dword_140404A6C[280658353] + v7);
      if ( (int)v16 < 2 )
        goto LABEL_35;
      v18 = 1;
      v19 = v2 * 4 + 40 * (v17 + 2);
      v20 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v19);
      if ( v20 > 0 )
      {
        v21 = (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v19) + 278845898];
        if ( (int)dword_140404A6C[1268 * v21 + 278521294] > 0 )
          v18 = (unsigned int)(v21 - 13) <= 1;
      }
      v22 = !v18;
      if ( dword_140404A6C[10 * v18 + 280658139 + v2] )
        v22 = v18;
      v23 = v22 ^ 1;
      if ( (_DWORD)v16 != 2 )
        v23 = v22;
      v16 = (unsigned int)v23;
      v24 = v2 * 4 + 40 * v23;
      v25 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v24);
      if ( v25 <= 0 )
      {
        if ( !v25 && !dword_140404A6C[14 * v16 + 280658223 + v2] && v20 > 0 )
          goto LABEL_34;
      }
      else if ( dword_140404A6C[1268
                              * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v24)
                                                   + 278845898]
                              + 278521660
                              + v17]
             && v20 < 2 )
      {
LABEL_34:
        *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7) = v16;
LABEL_35:
        if ( (_DWORD)v16 == -1 )
          goto LABEL_53;
        v26 = *(float *)((char *)&dword_140404A6C[280658343] + v7) + 0.06666667;
        *(float *)((char *)&dword_140404A6C[280658343] + v7) = v26;
        v27 = v2 * 4 + 40LL * (int)v16;
        v28 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v27);
        if ( v28 <= 0 )
        {
          if ( v28 )
            goto LABEL_39;
          if ( dword_140404A6C[14 * (int)v16 + 280658223 + v2] )
            goto LABEL_39;
          result = 5 * v17;
          v29 = v17;
          if ( (int)dword_140404A6C[10 * v17 + 280658159 + v2] <= 0 )
            goto LABEL_39;
        }
        else
        {
          v29 = v17;
          if ( !dword_140404A6C[1268
                              * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v27)
                                                   + 278845898]
                              + 278521660
                              + v17]
            || (result = 5 * v17, (int)dword_140404A6C[10 * v17 + 280658159 + v2] >= 2) )
          {
LABEL_39:
            *(unsigned int *)((char *)&dword_140404A6C[280658343] + v7) = 1065353216;
            v29 = v17;
            v28 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v27);
LABEL_40:
            if ( v28 <= 0 )
            {
              if ( v28 )
                goto LABEL_53;
              if ( dword_140404A6C[14 * (int)v16 + 280658223 + v2] )
                goto LABEL_53;
              v30 = v2 * 4 + 40 * (v29 + 2);
              if ( *(int *)((char *)&dword_140404A6C[280658139] + v30) <= 0 )
                goto LABEL_53;
              LODWORD(v30) = *(unsigned int *)((char *)&dword_140404A6C[280658140] + v30);
              v31 = v16;
              goto LABEL_52;
            }
            v30 = *(int *)((char *)&dword_140404A6C[280658140] + v27);
            if ( dword_140404A6C[1268 * (int)dword_140404A6C[1760 * v30 + 278845898] + 278521660 + v29] )
            {
              v31 = v17 + 2;
LABEL_52:
              sub_1400E35D0(v30, -1, v1, v31);
            }
LABEL_53:
            result = ((unsigned __int8)dword_140404A6C[v2 + 280658340] + 1) & 7;
            dword_140404A6C[v2 + 280658340] = result;
            goto LABEL_54;
          }
        }
        if ( v26 < 1.0 )
        {
LABEL_54:
          dword_140404A6C[v2 + 280658338] = v16;
          dword_140404A6C[v2 + 280658339] = v17;
          return result;
        }
        goto LABEL_40;
      }
      LODWORD(v16) = v16 ^ 1;
      if ( !sub_1400A85E0(v1, 2, v16, v17) )
        LODWORD(v16) = -1;
      goto LABEL_34;
    }
    if ( (_DWORD)result == 1 )
    {
      v32 = *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7);
      if ( v32 == 3 )
      {
        v32 = 1;
        v33 = dword_140404A6C[v2 + 280658149];
        if ( v33 <= 0 || (int)dword_140404A6C[v2 + 280658139] <= 0 )
        {
          v36 = dword_140404A6C[v2 + 280658139];
          if ( v36 || v33 )
          {
            v32 = v36 != 0;
            v37 = v2 * 4 + 40LL * (v36 == 0);
            if ( *(int *)((char *)&dword_140404A6C[280658139] + v37) > 0
              && !dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v37) + 278845906] )
            {
              v32 = -1;
            }
          }
          else
          {
            v32 = -1;
          }
        }
        else
        {
          v34 = (int)dword_140404A6C[1760 * dword_140404A6C[v2 + 280658140] + 278845898];
          v35 = (int)dword_140404A6C[1760 * dword_140404A6C[v2 + 280658150] + 278845898];
          if ( !dword_140404A6C[1268 * v35 + 278521356 + v34] )
          {
            v32 = 0;
            if ( !dword_140404A6C[1268 * v34 + 278521356 + v35] )
              v32 = -1;
          }
        }
        *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7) = v32;
      }
      if ( v32 == -1 )
        goto LABEL_111;
      v38 = *(float *)((char *)&dword_140404A6C[280658343] + v7) + 0.033333335;
      *(float *)((char *)&dword_140404A6C[280658343] + v7) = v38;
      v39 = v38;
      if ( v38 < 0.875
        || (v40 = v2 * 4 + 40LL * v32, *(int *)((char *)&dword_140404A6C[280658139] + v40) <= 0)
        || (v41 = v2 * 4 + 40 * (v32 ^ 1LL), *(int *)((char *)&dword_140404A6C[280658139] + v41) <= 0)
        || (v42 = *(int *)((char *)&dword_140404A6C[280658140] + v41),
            v43 = (int)dword_140404A6C[1760 * v42 + 278845898],
            !dword_140404A6C[1268
                           * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v40)
                                                + 278845898]
                           + 278521356
                           + v43])
        || !dword_140404A6C[1268 * v43 + 278521289]
        || (v44 = (int)dword_140404A6C[1760 * v42 + 278845906], (int)v44 <= 0) )
      {
LABEL_84:
        result = sub_1400A85E0(v1, 1, v32, 0);
        if ( (_DWORD)result )
        {
          if ( v39 < 1.0 )
          {
LABEL_112:
            dword_140404A6C[v2 + 280658338] = v32;
            return result;
          }
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[280658343] + v7) = 1065353216;
        }
        v50 = v32 ^ 1LL;
        v51 = v2 * 4 + 40LL * v32;
        v52 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v51);
        v53 = v52 == 0;
        if ( v52 > 0 )
        {
          v54 = v2 * 4 + 40 * v50;
          if ( *(int *)((char *)&dword_140404A6C[280658139] + v54) > 0 )
          {
            v55 = *(int *)((char *)&dword_140404A6C[280658140] + v54);
            v56 = (int)dword_140404A6C[1760 * v55 + 278845898];
            if ( !dword_140404A6C[1268
                                * (int)dword_140404A6C[1760
                                                     * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v51)
                                                     + 278845898]
                                + 278521356
                                + v56] )
            {
LABEL_111:
              result = ((unsigned __int8)dword_140404A6C[v2 + 280658340] + 1) & 7;
              dword_140404A6C[v2 + 280658340] = result;
              goto LABEL_112;
            }
            if ( !dword_140404A6C[1268 * v56 + 278521289] )
              goto LABEL_99;
            v57 = (int)dword_140404A6C[1760 * v55 + 278845906];
            if ( (int)v57 <= 0 )
              goto LABEL_99;
            v58 = (int)dword_140404A6C[1760 * v55 + 278845906 + v57];
            if ( (unsigned int)v58 > 0x3FF )
              goto LABEL_99;
            v59 = 1760 * v58;
            v60 = v58;
            v61 = dword_140404A6C[1760 * v58 + 278845903];
            if ( v61 == -1 )
            {
              v62 = dword_140404A6C[v59 + 278845902];
              if ( v62 == -1 )
              {
LABEL_99:
                if ( !(unsigned int)sub_1400E35D0(
                                      *(unsigned int *)((char *)&dword_140404A6C[280658140] + v54),
                                      *(unsigned int *)((char *)&dword_140404A6C[280658140] + v51),
                                      -1,
                                      0)
                  || !dword_140404A6C[1268
                                    * dword_140404A6C[1760
                                                    * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v54)
                                                    + 278845898]
                                    + 278521289] )
                {
                  goto LABEL_111;
                }
                v63 = 1.0;
                goto LABEL_110;
              }
              sub_1400CA7C0(v58, v62, dword_140404A6C[v59 + 278845904]);
            }
            else
            {
              sub_1400CA9B0(v58, v61);
            }
            if ( dword_140404A6C[456202453] )
              ++dword_140404A6C[v60 + 280648157];
            goto LABEL_99;
          }
          v53 = v52 == 0;
        }
        if ( !v53 )
          goto LABEL_111;
        v64 = v2 * 4 + 40 * v50;
        if ( *(int *)((char *)&dword_140404A6C[280658139] + v64) <= 0 )
          goto LABEL_111;
        v65 = *(int *)((char *)&dword_140404A6C[280658140] + v64);
        v66 = (int)dword_140404A6C[1760 * v65 + 278845906];
        if ( (int)v66 <= 0
          || !dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[1760 * v65 + 278845907] + 278845898]
                            + 278521356
                            + dword_140404A6C[1760 * v65 + 278845898]]
          || !(unsigned int)sub_1400E35D0(dword_140404A6C[1760 * v65 + 278845906 + v66], -1, v1, v32)
          || !dword_140404A6C[1268
                            * dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v64)
                                            + 278845898]
                            + 278521289] )
        {
          goto LABEL_111;
        }
        v63 = 0.875;
LABEL_110:
        sub_1400515E0(
          dword_140404A6C[283786000],
          &dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v51) + 278845916],
          1.0,
          v63);
        goto LABEL_111;
      }
      v45 = (int)dword_140404A6C[1760 * v42 + 278845906 + v44];
      if ( (unsigned int)v45 <= 0x3FF )
      {
        v46 = 1760 * v45;
        v47 = v45;
        v48 = dword_140404A6C[1760 * v45 + 278845903];
        if ( v48 != -1 )
        {
          sub_1400CA9B0(v45, v48);
          goto LABEL_81;
        }
        v49 = dword_140404A6C[v46 + 278845902];
        if ( v49 != -1 )
        {
          sub_1400CA7C0(v45, v49, dword_140404A6C[v46 + 278845904]);
LABEL_81:
          if ( dword_140404A6C[456202453] )
            ++dword_140404A6C[v47 + 280648157];
        }
      }
      *(unsigned int *)((char *)&dword_140404A6C[280658343] + v7) = 0;
      v39 = 0.0;
      goto LABEL_84;
    }
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != 3 )
        return result;
      if ( dword_140404A6C[v2 + 280651313] == -1 )
      {
        v78 = -1;
        v79 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v2 * 4 + 1126820052);
        v80 = 0;
        v81 = *(float *)&dword_140404A6C[v2 + 280651693] * 1.5;
        v82 = *(float *)&dword_140404A6C[v2 + 280651694] * 1.5;
        v109 = *v79 - (float)(*(float *)&dword_140404A6C[v2 + 280651692] * 1.5);
        v110 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + v2 * 4 + 1126820052) - v81;
        v111 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + v2 * 4 + 1126820052) - v82;
        do
        {
          if ( *(v5 - 9) )
          {
            if ( *v5 == -1 && v5[1] == -1 )
            {
              v83 = sub_14007ABA0(v79, &v109, v6);
              if ( v83 < v8 )
              {
                v78 = v80;
                v8 = v83;
              }
            }
          }
          ++v80;
          v6 += 1760;
          v5 += 1760;
        }
        while ( v80 < 1024 );
        if ( v78 == -1 )
        {
          v88 = &dword_140404A6C[129716721];
          v89 = 1.375;
          for ( i = 0; i < 512; ++i )
          {
            if ( *(v88 - 12) )
            {
              v91 = v88[5163];
              v92 = 0;
              if ( v91 > 0 )
              {
                v93 = *((float *)v88 + 5);
                v94 = (float *)(v88 + 5165);
                v95 = *((float *)v88 - 1);
                v96 = *((float *)v88 + 6);
                v97 = *(float *)v88;
                v98 = *((float *)v88 + 7);
                do
                {
                  v99 = *(v94 - 1);
                  v100 = (float)((float)((float)(v96 * v99) + v97) + (float)(*v94 * *((float *)v88 + 9)))
                       + (float)(v94[1] * *((float *)v88 + 12));
                  v101 = v94[1];
                  v102 = v101 * *((float *)v88 + 11);
                  v103 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + v2 * 4 + 1126820052)
                       - (float)(*(float *)&dword_140404A6C[v2 + 280651693] * 0.75);
                  v104 = (float)((float)((float)(v98 * v99) + *((float *)v88 + 1)) + (float)(*v94 * *((float *)v88 + 10)))
                       + (float)(v101 * *((float *)v88 + 13));
                  v105 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + v2 * 4 + 1126820052)
                       - (float)(*(float *)&dword_140404A6C[v2 + 280651694] * 0.75);
                  v106 = *v79 - (float)(*(float *)&dword_140404A6C[v2 + 280651692] * 0.75);
                  v107 = (float)((float)((float)((float)((float)(v93 * v99) + v95) + (float)(*v94 * *((float *)v88 + 8)))
                                       + v102)
                               - v106)
                       * (float)((float)((float)((float)((float)(v93 * v99) + v95) + (float)(*v94 * *((float *)v88 + 8)))
                                       + v102)
                               - v106);
                  if ( fsqrt(
                         (float)((float)((float)(v100 - v103) * (float)(v100 - v103)) + v107)
                       + (float)((float)(v104 - v105) * (float)(v104 - v105))) < v89 )
                  {
                    v108 = &dword_140404A6C[280651313];
                    while ( !*(v108 - 10) || *v108 != i || v108[1] != v92 )
                    {
                      v108 += 7166;
                      if ( (__int64)v108 >= (__int64)&dword_140404A6C[282485809] )
                      {
                        dword_140404A6C[v2 + 280651313] = i;
                        dword_140404A6C[v2 + 280651314] = v92;
                        v89 = fsqrt(
                                (float)((float)((float)(v100 - v103) * (float)(v100 - v103)) + v107)
                              + (float)((float)(v104 - v105) * (float)(v104 - v105)));
                        break;
                      }
                    }
                  }
                  ++v92;
                  v94 += 3;
                }
                while ( v92 < v91 );
              }
            }
            v88 += 5210;
          }
        }
        else
        {
          v84 = (int)dword_140404A6C[1760 * v78 + 278845898];
          if ( (((_DWORD)v84 - 39) & 0xFFFFFFFC) != 0 || (_DWORD)v84 == 40 )
          {
            v85 = *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7);
            if ( v85 == 3 )
            {
              if ( (unsigned int)v84 <= 0x24 )
              {
                v86 = 0x100200E000LL;
                if ( _bittest64(&v86, v84) )
                  goto LABEL_155;
              }
              v87 = 0;
              if ( !dword_140404A6C[1268 * v84 + 278521289] )
                v87 = (int)dword_140404A6C[1268 * v84 + 278521294] > 0;
              if ( (_DWORD)v84 == 16 )
LABEL_155:
                v87 = 0;
              v85 = !v87;
              if ( (int)dword_140404A6C[10 * v87 + 280658139 + v2] <= 0 )
                v85 = v87;
              *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7) = v85;
            }
            if ( !dword_140404A6C[10 * v85 + 280658139 + v2] )
              sub_1400E35D0(v78, -1, v1, v85);
          }
        }
      }
    }
    else
    {
      v67 = *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7);
      if ( v67 >= 2 )
      {
        v68 = v67 != 2;
        v69 = !v68;
        if ( dword_140404A6C[10 * v68 + 280658139 + v2] )
          v69 = v68;
        v67 = v69;
        result = 5 * v69;
        if ( !dword_140404A6C[2 * result + 280658139 + v2] )
          v67 = -1;
        *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7) = v67;
      }
      if ( v67 != -1 )
      {
        v70 = *(float *)&dword_140404A6C[v2 + 280651331];
        if ( v70 <= -0.196349540849375 || v70 >= 0.0981747704246875 )
          goto LABEL_132;
        v71 = v2 * 4 + 40LL * v67;
        if ( *(int *)((char *)&dword_140404A6C[280658139] + v71) > 0 )
        {
          v72 = *(int *)((char *)&dword_140404A6C[280658140] + v71);
          if ( (unsigned int)v72 <= 0x3FF )
          {
            v73 = 1760 * v72;
            v74 = v72;
            v75 = dword_140404A6C[1760 * v72 + 278845903];
            if ( v75 != -1 )
            {
              sub_1400CA9B0(v72, v75);
              goto LABEL_129;
            }
            v76 = dword_140404A6C[v73 + 278845902];
            if ( v76 != -1 )
            {
              sub_1400CA7C0(v72, v76, dword_140404A6C[v73 + 278845904]);
LABEL_129:
              if ( dword_140404A6C[456202453] )
                ++dword_140404A6C[v74 + 280648157];
            }
          }
        }
        result = ((unsigned __int8)dword_140404A6C[v2 + 280658340] + 1) & 7;
        dword_140404A6C[v2 + 280658340] = result;
        v70 = *(float *)&dword_140404A6C[v2 + 280651331];
LABEL_132:
        v77 = v70;
        if ( v77 >= -0.1595340019401172 )
        {
          if ( v77 <= 0.1472621556370313 )
            dword_140404A6C[v2 + 280651331] = 0;
          else
            *(float *)&dword_140404A6C[v2 + 280651331] = v77 - 0.1472621556370313;
        }
        else
        {
          *(float *)&dword_140404A6C[v2 + 280651331] = v77 + 0.1595340019401172;
        }
        return result;
      }
    }
    result = ((unsigned __int8)dword_140404A6C[v2 + 280658340] + 1) & 7;
    dword_140404A6C[v2 + 280658340] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A9760) ----------------------------------------------------
__int64            sub_1400A9760(int a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  result = a1;
  v5 = 7166LL * a1;
  if ( !dword_140404A6C[v5 + 280651319] )
  {
    result = (unsigned int)(a4 / -2);
    dword_140404A6C[v5 + 280658300] += result;
  }
  if ( a2 <= 2 )
  {
    dword_140404A6C[v5 + 280658302] -= a4;
    dword_140404A6C[v5 + 280651333] += a4;
    v7 = dword_140404A6C[v5 + 280658300];
    if ( v7 < 100 )
    {
      result = (unsigned int)(int)(float)((float)(int)dword_140404A6C[v5 + 280658299]
                                        - (float)(fminf((float)(100 - v7) * 0.039999999, 1.0) * (float)a4));
      dword_140404A6C[v5 + 280658299] = result;
    }
  }
  if ( a2 == 3 )
  {
    dword_140404A6C[v5 + 280658304] -= a4;
    dword_140404A6C[v5 + 280658299] -= a4;
  }
  else
  {
    v8 = 3 * a4;
    if ( a2 - 4 <= 2 )
      dword_140404A6C[v5 + 280658306] -= v8;
    if ( a2 - 7 <= 2 )
      dword_140404A6C[v5 + 280658308] -= v8;
    if ( a2 - 10 <= 2 )
    {
      dword_140404A6C[v5 + 280658310] += -2 * a4;
      v9 = dword_140404A6C[v5 + 280658300];
      if ( v9 < 100 )
        dword_140404A6C[v5 + 280658299] = (int)(float)((float)(int)dword_140404A6C[v5 + 280658299]
                                                     - (float)((float)(a4 * (100 - v9)) * 0.0099999998));
    }
    result = a2 - 13;
    if ( (unsigned int)result <= 2 )
    {
      dword_140404A6C[v5 + 280658312] += -2 * a4;
      result = dword_140404A6C[v5 + 280658300];
      if ( (int)result < 100 )
      {
        result = (unsigned int)(int)(float)((float)(int)dword_140404A6C[v5 + 280658299]
                                          - (float)((float)(a4 * (100 - result)) * 0.0099999998));
        dword_140404A6C[v5 + 280658299] = result;
      }
    }
  }
  if ( a4 > 0 )
  {
    result = rand() & 0x1F;
    if ( (int)result < a4 )
      dword_140404A6C[v5 + 280658301] = 1;
  }
  if ( (int)dword_140404A6C[v5 + 280651333] > 90 )
    dword_140404A6C[v5 + 280651333] = 90;
  if ( (dword_140404A6C[v5 + 280658299] & 0x80000000) != 0 )
    dword_140404A6C[v5 + 280658299] = 0;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A9940) ----------------------------------------------------
__int64            sub_1400A9940(int a1, int a2, int a3, float *a4)
{
  __int64 v4; // r10
  __int64 v7; // rbp
  __int64 v8; // rbx
  float v9; // xmm13_4
  float v10; // xmm6_4
  __int64 v11; // rcx
  float v12; // xmm8_4
  float v13; // xmm15_4
  float v14; // xmm7_4
  float v15; // xmm3_4
  float v16; // xmm14_4
  float v17; // xmm11_4
  float v18; // xmm10_4
  float v19; // xmm12_4
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm9_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm6_4
  float v26; // xmm2_4
  float v27; // xmm13_4
  float v28; // xmm0_4
  float v29; // xmm7_4
  float v30; // xmm6_4
  float v31; // xmm8_4
  float v32; // xmm11_4
  float v33; // xmm0_4
  float v34; // xmm9_4
  float v35; // xmm4_4
  float v36; // xmm5_4
  float v37; // xmm1_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  __int64 v40; // rax
  float v41; // xmm0_4
  float v42; // xmm10_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm6_4
  float v46; // xmm3_4
  float v47; // xmm0_4
  float v48; // xmm3_4
  float v49; // xmm2_4
  __int64 v51; // [rsp+0h] [rbp-128h] BYREF
  float v52[10]; // [rsp+20h] [rbp-108h] BYREF
  __m128 v53; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v54; // [rsp+60h] [rbp-C8h]

  v4 = 28664LL * a1;
  v7 = a3;
  v8 = v4 + 312LL * a2;
  v9 = *(float *)((char *)&dword_140404A6C[280651452] + v8);
  v10 = *(float *)((char *)&dword_140404A6C[280651454] + v8);
  v11 = v4 + 312LL * a3;
  v12 = *(float *)((char *)&dword_140404A6C[280651453] + v8);
  v13 = *(float *)((char *)&dword_140404A6C[280651456] + v8);
  v14 = *(float *)((char *)&dword_140404A6C[280651453] + v11);
  v15 = *(float *)((char *)&dword_140404A6C[280651454] + v11);
  v16 = *(float *)((char *)&dword_140404A6C[280651452] + v11);
  v17 = *(float *)((char *)&dword_140404A6C[280651456] + v11);
  v18 = *(float *)((char *)&dword_140404A6C[280651455] + v11);
  v19 = *(float *)((char *)&dword_140404A6C[280651457] + v11);
  v20 = *(float *)((char *)&dword_140404A6C[280651459] + v11);
  v21 = *(float *)((char *)&dword_140404A6C[280651458] + v11);
  v22 = *(float *)((char *)&dword_140404A6C[280651460] + v11);
  v52[0] = (float)((float)(v16 * v9) + (float)(v12 * v14)) + (float)(v10 * v15);
  v23 = (float)((float)(v18 * v9) + (float)(v17 * v12)) + (float)(v19 * v10);
  v24 = v22 * v10;
  v25 = *(float *)((char *)&dword_140404A6C[280651457] + v8);
  v52[1] = v23;
  v26 = v21 * v9;
  v27 = *(float *)((char *)&dword_140404A6C[280651455] + v8);
  v28 = v13 * v14;
  v29 = *(float *)((char *)&dword_140404A6C[280651459] + v8);
  v52[2] = (float)(v26 + (float)(v20 * v12)) + v24;
  v52[3] = (float)((float)(v27 * v16) + v28) + (float)(v25 * v15);
  v52[4] = (float)((float)(v27 * v18) + (float)(v13 * v17)) + (float)(v25 * v19);
  v52[5] = (float)((float)(v27 * v21) + (float)(v13 * v20)) + (float)(v25 * v22);
  v30 = *(float *)((char *)&dword_140404A6C[280651458] + v8);
  v31 = *(float *)((char *)&dword_140404A6C[280651460] + v8);
  v52[6] = (float)((float)(v30 * v16) + (float)(v29 * *(float *)((char *)&dword_140404A6C[280651453] + v11)))
         + (float)(v31 * *(float *)((char *)&dword_140404A6C[280651454] + v11));
  v52[7] = (float)((float)(v30 * v18) + (float)(v29 * v17)) + (float)(v31 * v19);
  v52[8] = (float)((float)(v30 * v21) + (float)(v29 * v20)) + (float)(v31 * v22);
  sub_14010E370(SR_VEC_LANES(128, v53, f32), v52);
  v32 = *(float *)((char *)&dword_140404A6C[280651452] + v8);
  v33 = a4[1];
  v34 = (float)((float)(*a4 * v32) + (float)(v33 * *(float *)((char *)&dword_140404A6C[280651453] + v8)))
      + (float)(a4[2] * *(float *)((char *)&dword_140404A6C[280651454] + v8));
  v35 = (float)((float)(*a4 * v27) + (float)(v33 * v13))
      + (float)(a4[2] * *(float *)((char *)&dword_140404A6C[280651457] + v8));
  v36 = (float)((float)(*a4 * v30) + (float)(v33 * v29)) + (float)(a4[2] * v31);
  if ( SR_VEC_LANES(128, v53, f32)[3] < 0.0 )
    v53 = _mm_xor_ps(v53, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
  v37 = SR_VEC_LANES(128, v53, f32)[0] * 2.0;
  v38 = SR_VEC_LANES(128, v53, f32)[1] * 2.0;
  v39 = SR_VEC_LANES(128, v53, f32)[2] * 2.0;
  if ( (a3 == 11 || a3 == 14) && v37 > 1.570796326795 )
    v37 = -3.14159265359 - (3.14159265359 - v37);
  v40 = 25 * v7;
  v41 = *(float *)&dword_140404A6C[25 * v7 + 282486061];
  v42 = *(float *)&dword_140404A6C[25 * v7 + 282486064];
  if ( v37 < v41 && (float)((float)((float)(v37 - v41) * -0.25) - v34) > 0.0 )
    v34 = (float)(v37 - v41) * -0.25;
  if ( v37 > v42 )
  {
    v43 = (float)(v37 - v42) * -0.25;
    if ( (float)(v43 - v34) < 0.0 )
      v34 = v43;
  }
  v44 = *(float *)&dword_140404A6C[v40 + 282486062];
  v45 = *(float *)&dword_140404A6C[v40 + 282486065];
  if ( v38 < v44 && (float)((float)((float)(v38 - v44) * -0.25) - v35) > 0.0 )
    v35 = (float)(v38 - v44) * -0.25;
  if ( v38 > v45 )
  {
    v46 = (float)(v38 - v45) * -0.25;
    if ( (float)(v46 - v35) < 0.0 )
      v35 = v46;
  }
  v47 = *(float *)&dword_140404A6C[v40 + 282486063];
  v48 = *(float *)&dword_140404A6C[v40 + 282486066];
  if ( v39 < v47 && (float)((float)((float)(v39 - v47) * -0.25) - v36) > 0.0 )
    v36 = (float)(v39 - v47) * -0.25;
  if ( v39 > v48 )
  {
    v49 = (float)(v39 - v48) * -0.25;
    if ( (float)(v49 - v36) < 0.0 )
      v36 = v49;
  }
  *a4 = (float)((float)(v35 * v27) + (float)(v34 * v32))
      + (float)(v36 * *(float *)((char *)&dword_140404A6C[280651458] + v8));
  a4[1] = (float)((float)(v35 * *(float *)((char *)&dword_140404A6C[280651456] + v8))
                + (float)(v34 * *(float *)((char *)&dword_140404A6C[280651453] + v8)))
        + (float)(v36 * *(float *)((char *)&dword_140404A6C[280651459] + v8));
  a4[2] = (float)((float)(v35 * *(float *)((char *)&dword_140404A6C[280651457] + v8))
                + (float)(v34 * *(float *)((char *)&dword_140404A6C[280651454] + v8)))
        + (float)(v36 * *(float *)((char *)&dword_140404A6C[280651460] + v8));
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A9EF0) ----------------------------------------------------
__int64            sub_1400A9EF0(int a1, int a2, int a3, float *a4)
{
  __int64 v5; // r10
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbp
  float v9; // xmm10_4
  float v10; // xmm8_4
  float v11; // xmm11_4
  float v12; // xmm12_4
  float v13; // xmm15_4
  float v14; // xmm13_4
  float v15; // xmm14_4
  float v16; // xmm6_4
  float v17; // xmm9_4
  float v18; // xmm7_4
  float v19; // xmm7_4
  __int64 v20; // rdx
  __m128 v21; // xmm0
  float v22; // xmm3_4
  float v23; // xmm5_4
  float v24; // xmm2_4
  float v25; // xmm12_4
  float v26; // xmm3_4
  float v27; // xmm11_4
  float v28; // xmm14_4
  float v29; // xmm6_4
  float v30; // xmm4_4
  __int64 result; // rax
  float v32; // xmm12_4
  float v33; // xmm3_4
  float v34; // xmm10_4
  float v35; // xmm15_4
  float v36; // xmm0_4
  float v37; // xmm11_4
  float v38; // xmm13_4
  float v39; // xmm10_4
  float v40; // xmm0_4
  float v41; // xmm7_4
  float v42; // xmm13_4
  float v43; // xmm7_4
  float v44; // xmm11_4
  float v45; // xmm0_4
  float v46; // xmm2_4
  float v47; // xmm3_4
  float v48; // [rsp+20h] [rbp-F8h]
  float v49; // [rsp+24h] [rbp-F4h]
  float v50; // [rsp+28h] [rbp-F0h]
  float v51; // [rsp+2Ch] [rbp-ECh]
  float v52; // [rsp+30h] [rbp-E8h]
  float v53; // [rsp+34h] [rbp-E4h]
  float v54; // [rsp+38h] [rbp-E0h]
  float v55; // [rsp+3Ch] [rbp-DCh]
  float v56; // [rsp+40h] [rbp-D8h]
  float v57; // [rsp+44h] [rbp-D4h]

  v5 = 28664LL * a1;
  v6 = a3;
  v7 = v5 + 312LL * a2;
  v8 = v5 + 312LL * a3;
  v55 = *(float *)((char *)&dword_140404A6C[280651452] + v7);
  v56 = *(float *)((char *)&dword_140404A6C[280651453] + v7);
  v9 = *(float *)((char *)&dword_140404A6C[280651453] + v8);
  v10 = *(float *)((char *)&dword_140404A6C[280651454] + v8);
  v11 = *(float *)((char *)&dword_140404A6C[280651455] + v8);
  v12 = *(float *)((char *)&dword_140404A6C[280651457] + v8);
  v13 = *(float *)((char *)&dword_140404A6C[280651459] + v8);
  v14 = *(float *)((char *)&dword_140404A6C[280651458] + v8);
  v15 = *(float *)((char *)&dword_140404A6C[280651460] + v8);
  v48 = *(float *)((char *)&dword_140404A6C[280651458] + v7);
  v52 = *(float *)((char *)&dword_140404A6C[280651456] + v7);
  v49 = *(float *)((char *)&dword_140404A6C[280651459] + v7);
  v50 = *(float *)((char *)&dword_140404A6C[280651460] + v7);
  v16 = *(float *)((char *)&dword_140404A6C[280651452] + v8);
  v57 = *(float *)((char *)&dword_140404A6C[280651454] + v7);
  v51 = *(float *)((char *)&dword_140404A6C[280651455] + v7);
  v17 = (float)((float)(v9 * v56) + (float)(v16 * v55)) + (float)(v10 * v57);
  v53 = *(float *)((char *)&dword_140404A6C[280651457] + v7);
  v18 = (float)((float)(v9 * v52) + (float)(v16 * v51)) + (float)(v10 * v53);
  v54 = sub_14023F704(
          (float)((float)(*(float *)((char *)&dword_140404A6C[280651456] + v8) * v49) + (float)(v11 * v48))
        + (float)(v12 * v50),
          (float)((float)(v13 * v49) + (float)(v14 * v48)) + (float)(v15 * v50));
  v19 = sub_14023F704(
          -(float)((float)((float)(v9 * v49) + (float)(v16 * v48)) + (float)(v10 * v50)),
          fsqrt((float)(v18 * v18) + (float)(v17 * v17)));
  v21 = sub_1401F8AC0(
          COERCE_DOUBLE((unsigned __int64)LODWORD(v54)),
          v20,
          COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(v14 * v48)));
  v22 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v21, v21, 1), f32)[0];
  v23 = sub_14023F704(
          (float)((float)((float)((float)(v13 * v56) + (float)(v14 * v55)) + (float)(v15 * v57)) * SR_VEC_LANES(128, v21, f32)[0])
        - (float)((float)((float)((float)(*(float *)((char *)&dword_140404A6C[280651456] + v8) * v56)
                                + (float)(v11 * v55))
                        + (float)(v12 * v57))
                * v22),
          (float)((float)((float)((float)(*(float *)((char *)&dword_140404A6C[280651456] + v8) * v52)
                                + (float)(v11 * v51))
                        + (float)(v12 * v53))
                * v22)
        - (float)((float)((float)((float)(v13 * v52) + (float)(v14 * v51)) + (float)(v15 * v53)) * SR_VEC_LANES(128, v21, f32)[0]));
  v24 = *(float *)((char *)&dword_140404A6C[280651462] + v7) - *(float *)((char *)&dword_140404A6C[280651462] + v8);
  v25 = *(float *)((char *)&dword_140404A6C[280651461] + v7) - *(float *)((char *)&dword_140404A6C[280651461] + v8);
  v26 = *(float *)((char *)&dword_140404A6C[280651463] + v7) - *(float *)((char *)&dword_140404A6C[280651463] + v8);
  v27 = (float)((float)(v24 * v56) + (float)(v25 * v55)) + (float)(v26 * v57);
  v28 = (float)((float)(v24 * v52) + (float)(v25 * v51)) + (float)(v26 * v53);
  v29 = 0.0;
  v30 = 0.0;
  result = 25 * v6;
  v32 = (float)((float)(v25 * v48) + (float)(v24 * v49)) + (float)(v26 * v50);
  v33 = 0.0;
  v34 = *(float *)&dword_140404A6C[25 * v6 + 282486061];
  v35 = *(float *)&dword_140404A6C[25 * v6 + 282486064];
  if ( v54 < v34 && (float)((float)((float)(v54 - v34) * -0.25) - (float)(v27 * 0.5)) > 0.0 )
    v29 = (float)((float)(v54 - v34) * -0.25) - (float)(v27 * 0.5);
  if ( v54 > v35 )
  {
    v36 = (float)((float)(v54 - v35) * -0.25) - (float)(v27 * 0.5);
    if ( v36 < 0.0 )
      v29 = v29 + v36;
  }
  v37 = *(float *)&dword_140404A6C[25 * v6 + 282486065];
  v38 = *(float *)&dword_140404A6C[25 * v6 + 282486062];
  v39 = fminf(fmaxf(v34, v54), v35);
  if ( v19 < v38 && (float)((float)((float)(v19 - v38) * -0.25) - (float)(v28 * 0.5)) > 0.0 )
    v30 = (float)((float)(v19 - v38) * -0.25) - (float)(v28 * 0.5);
  if ( v19 > v37 )
  {
    v40 = (float)((float)(v19 - v37) * -0.25) - (float)(v28 * 0.5);
    if ( v40 < 0.0 )
      v30 = v30 + v40;
  }
  v41 = fmaxf(v19, v38);
  v42 = *(float *)&dword_140404A6C[25 * v6 + 282486063];
  v43 = fminf(v41, v37);
  v44 = *(float *)&dword_140404A6C[25 * v6 + 282486066];
  if ( v23 < v42 && (float)((float)((float)(v23 - v42) * -0.25) - (float)(v32 * 0.5)) > 0.0 )
    v33 = (float)((float)(v23 - v42) * -0.25) - (float)(v32 * 0.5);
  if ( v23 > v44 )
  {
    v45 = (float)((float)(v23 - v44) * -0.25) - (float)(v32 * 0.5);
    if ( v45 < 0.0 )
      v33 = v33 + v45;
  }
  v46 = v33 * v49;
  *(float *)((char *)&dword_140404A6C[280651502] + v8) = v39;
  *(float *)((char *)&dword_140404A6C[280651503] + v8) = v43;
  *(float *)((char *)&dword_140404A6C[280651504] + v8) = fminf(fmaxf(v23, v42), v44);
  *a4 = (float)((float)(v30 * v51) + (float)(v55 * v29)) + (float)((float)(v33 * v48) + *a4);
  v47 = (float)((float)(v33 * v50) + (float)(v29 * v57)) + (float)((float)(v30 * v53) + a4[2]);
  a4[1] = (float)(v46 + (float)(v29 * v56)) + (float)((float)(v30 * v52) + a4[1]);
  a4[2] = v47;
  return result;
}

// 1400AA135: variable 'v20' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400AA510) ----------------------------------------------------
__int64            sub_1400AA510(int a1, int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rcx
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm9_4
  float v13; // xmm10_4
  float v14; // xmm8_4
  float v15; // xmm11_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm9_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  __int64 v23; // rcx
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  __int64 result; // rax
  float v34; // xmm3_4
  float v35; // xmm4_4
  float v36; // xmm5_4
  float v37; // xmm0_4
  int v38; // edx
  int v39; // ecx
  float v40; // xmm6_4
  float v41; // xmm8_4
  float v42; // xmm1_4
  unsigned int v43; // xmm7_4
  unsigned int v44; // xmm1_4
  unsigned int v45; // xmm0_4
  __int64 v46; // [rsp+50h] [rbp-B0h] BYREF
  float v47; // [rsp+58h] [rbp-A8h]
  float v48; // [rsp+60h] [rbp-A0h] BYREF
  float v49; // [rsp+64h] [rbp-9Ch]
  float v50; // [rsp+68h] [rbp-98h]
  float v51; // [rsp+70h] [rbp-90h] BYREF
  float v52; // [rsp+74h] [rbp-8Ch]
  float v53; // [rsp+78h] [rbp-88h]
  unsigned int v54[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v55[4]; // [rsp+90h] [rbp-70h] BYREF
  float v56; // [rsp+A0h] [rbp-60h] BYREF
  float v57; // [rsp+A4h] [rbp-5Ch]
  float v58; // [rsp+A8h] [rbp-58h]
  float v59; // [rsp+ACh] [rbp-54h] BYREF
  float v60; // [rsp+B0h] [rbp-50h]
  float v61; // [rsp+B4h] [rbp-4Ch]
  float v62[3]; // [rsp+B8h] [rbp-48h] BYREF
  float v63[3]; // [rsp+C4h] [rbp-3Ch] BYREF
  float v64; // [rsp+1B0h] [rbp+B0h] BYREF

  v2 = 0;
  v3 = 1760LL * a2;
  v4 = 28664LL * a1;
  do
  {
    v5 = 175;
    v6 = 182;
    if ( v2 >= 2 )
    {
      v5 = 50;
      v6 = 52;
    }
    v7 = 2184;
    if ( v2 >= 2 )
      v7 = 624;
    v8 = v4 + v7;
    v9 = v4 + 12 * (v6 + (int)dword_140404A6C[v5 + 282486067]);
    v10 = *(float *)((char *)&dword_140404A6C[280651452] + v9);
    v11 = *(float *)((char *)&dword_140404A6C[280651453] + v9);
    v12 = *(float *)((char *)&dword_140404A6C[280651440] + v8);
    v13 = *(float *)((char *)&dword_140404A6C[280651441] + v8);
    v14 = *(float *)((char *)&dword_140404A6C[280651454] + v9);
    v15 = *(float *)((char *)&dword_140404A6C[280651442] + v8);
    v59 = (float)(v10 * 0.1640625) + v12;
    v60 = (float)(v11 * 0.1640625) + v13;
    v61 = (float)(v14 * 0.1640625) + v15;
    v56 = (float)(v10 * 0.2890625) + v12;
    v57 = (float)(v11 * 0.2890625) + v13;
    v58 = (float)(v14 * 0.2890625) + v15;
    if ( v2 >= 2 )
    {
      v16 = (float)(*(float *)&dword_140404A6C[v5 + 282486068] * -0.5) - 0.0625;
      v17 = *(float *)((char *)&dword_140404A6C[280651455] + v8) * 0.0625;
      v18 = *(float *)((char *)&dword_140404A6C[280651456] + v8) * 0.0625;
      v19 = *(float *)((char *)&dword_140404A6C[280651457] + v8) * 0.0625;
      v56 = (float)((float)(v10 * v16) + v12) + v17;
      v59 = (float)((float)(v10 * (float)(*(float *)&dword_140404A6C[282486224] - 0.125)) + v12) + v17;
      v57 = (float)((float)(v11 * v16) + v13) + v18;
      v60 = (float)((float)(v11 * (float)(*(float *)&dword_140404A6C[282486224] - 0.125)) + v13) + v18;
      v58 = (float)((float)(v14 * v16) + v15) + v19;
      v61 = (float)((float)(v14 * (float)(*(float *)&dword_140404A6C[282486224] - 0.125)) + v15) + v19;
    }
    v20 = *(float *)&dword_140404A6C[v3 + 278845916];
    v21 = *(float *)&dword_140404A6C[v3 + 278845917];
    v22 = *(float *)&dword_140404A6C[v3 + 278845918];
    v23 = 1268LL * (int)dword_140404A6C[v3 + 278845898];
    v24 = *(float *)&dword_140404A6C[v23 + 278522539];
    v25 = (float)(*(float *)&dword_140404A6C[v23 + 278522540] * *(float *)&dword_140404A6C[v3 + 278845940]) + v20;
    v26 = (float)(*(float *)&dword_140404A6C[v23 + 278522540] * *(float *)&dword_140404A6C[v3 + 278845941]) + v21;
    v27 = (float)(*(float *)&dword_140404A6C[v23 + 278522540] * *(float *)&dword_140404A6C[v3 + 278845942]) + v22;
    if ( (v2 & 1) != 0 )
      v28 = v24 + 0.0625;
    else
      v28 = v24 - 0.0625;
    v29 = v28 * *(float *)&dword_140404A6C[v3 + 278845937];
    LODWORD(v63[0]) = dword_140404A6C[v3 + 278845916];
    v30 = v29 + v25;
    v63[1] = v21;
    v63[2] = v22;
    v31 = v28 * *(float *)&dword_140404A6C[v3 + 278845938];
    v32 = v28 * *(float *)&dword_140404A6C[v3 + 278845939];
    v62[0] = v30;
    v62[1] = v31 + v26;
    v62[2] = v32 + v27;
    result = sub_1400D6890(&v48, &v51, &v64, &v56, &v59, v62, v63, 0.125);
    if ( (_DWORD)result )
    {
      v34 = v48 - v51;
      v35 = v49 - v52;
      v36 = v50 - v53;
      v37 = fsqrt((float)((float)(v35 * v35) + (float)(v34 * v34)) + (float)(v36 * v36));
      if ( v37 == 0.0 )
      {
        v46 = 0;
        v47 = 0.0;
      }
      else
      {
        *(float *)&v46 = (float)(1.0 / v37) * v34;
        *((float *)&v46 + 1) = (float)(1.0 / v37) * v35;
        v47 = (float)(1.0 / v37) * v36;
      }
      v38 = dword_140404A6C[v3 + 278845915];
      v39 = *(unsigned int *)((char *)&dword_140404A6C[280651439] + v8);
      v40 = (float)(v51 + v48) * 0.5;
      v41 = (float)(v53 + v50) * 0.5;
      v42 = (float)(v52 + v49) * 0.5;
      *(float *)&v43 = v42 - v21;
      *(float *)&v44 = v42 - *(float *)((char *)&dword_140404A6C[280651441] + v8);
      *(float *)v55 = v40 - *(float *)((char *)&dword_140404A6C[280651440] + v8);
      *(float *)&v45 = v41 - *(float *)((char *)&dword_140404A6C[280651442] + v8);
      *(float *)v54 = v40 - v20;
      v55[1] = v44;
      v55[2] = v45;
      v54[1] = v43;
      *(float *)&v54[2] = v41 - v22;
      result = sub_1400052C0(v39, v38, v55, v54, (unsigned int *)&v46, 0.125 - v64, 0x3ECCCCCDu, 0.03125, 0x3D800000u);
    }
    ++v2;
  }
  while ( (int)v2 < 4 );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400AAAA0) ----------------------------------------------------
__int64            sub_1400AAAA0(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  __int64 v3; // r15
  int v4; // r10d
  float *v5; // rdx
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int *v15; // r8
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  __int64 v19; // rcx
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  __int64 v23; // rcx
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  __int64 v27; // rcx
  __int64 v28; // rcx
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int *v35; // r8
  float *v36; // rdx
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  __int64 v40; // rcx
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm2_4
  __int64 v44; // rcx
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm2_4
  __int64 v48; // rcx
  __int64 v49; // rcx
  float v50; // xmm0_4
  float v51; // xmm1_4
  float v52; // xmm2_4
  __int64 v53; // rcx
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm2_4
  __int64 v57; // rcx
  __int64 v58; // rcx
  float v59; // xmm0_4
  float v60; // xmm1_4
  float v61; // xmm2_4
  unsigned int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  signed int v72; // ebp
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 result; // rax
  unsigned int *v78; // r10
  signed int v79; // ebx
  __int64 v80; // r11
  __int64 v81; // rsi
  __int64 v82; // rdi
  signed int v83; // ecx
  __int64 v84; // r8
  unsigned int v85; // edx
  int v86; // edx
  unsigned int v87; // ecx
  unsigned int *v88; // r12
  __int64 v89; // rsi
  __int64 v90; // r13
  unsigned int *v91; // r14
  unsigned int *v92; // rdx
  unsigned int *v93; // rdi
  __int64 v94; // rbx
  unsigned int *v95; // r11
  __int64 v96; // rbp
  unsigned int v97; // eax
  __int64 v98; // r10
  unsigned int *v99; // [rsp+0h] [rbp-58h]
  int v100; // [rsp+60h] [rbp+8h]
  int v101; // [rsp+68h] [rbp+10h]
  int v102; // [rsp+70h] [rbp+18h]
  __int64 v103; // [rsp+78h] [rbp+20h]

  v1 = a1;
  v2 = 7166LL * a1;
  v3 = 0;
  v103 = a1;
  v4 = 1;
  v101 = 1;
  v5 = (float *)&dword_140404A6C[282486301];
  dword_140404A6C[v2 + 280654321] = 0;
  v6 = 2;
  dword_140404A6C[v2 + 280655794] = 0;
  dword_140404A6C[v2 + 280656115] = 0;
  dword_140404A6C[v2 + 280654323] = dword_140404A6C[v2 + 280651439];
  v7 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
  *(_QWORD *)((char *)&dword_140404A6C[280654324] + v7) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[280654326] + v7) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 1;
  v8 = (int)dword_140404A6C[v2 + 280654321];
  dword_140404A6C[v2 + 280654321] = v8 + 1;
  dword_140404A6C[23 * v8 + 280654346 + v2] = dword_140404A6C[v2 + 280651517];
  v9 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
  *(_QWORD *)((char *)&dword_140404A6C[280654324] + v9) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[280654326] + v9) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 1;
  v10 = (int)dword_140404A6C[v2 + 280654321];
  dword_140404A6C[v2 + 280654321] = v10 + 1;
  dword_140404A6C[23 * v10 + 280654346 + v2] = dword_140404A6C[v2 + 280651595];
  v11 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
  *(_QWORD *)((char *)&dword_140404A6C[280654324] + v11) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[280654326] + v11) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 1;
  v12 = (int)dword_140404A6C[v2 + 280654321];
  dword_140404A6C[v2 + 280654321] = v12 + 1;
  dword_140404A6C[23 * v12 + 280654346 + v2] = dword_140404A6C[v2 + 280651673];
  v13 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
  *(_QWORD *)((char *)&dword_140404A6C[280654324] + v13) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[280654326] + v13) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 1;
  v14 = dword_140404A6C[v2 + 280654321] + 1;
  dword_140404A6C[v2 + 280654321] = v14;
  v15 = &dword_140404A6C[v2 + 280652297];
  do
  {
    v16 = *(v5 - 2);
    v17 = *(v5 - 1);
    v18 = *v5;
    dword_140404A6C[23 * (int)v14 + 280654323 + v2] = dword_140404A6C[v2 + 280651439];
    v19 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654324] + v19) = v16;
    *(float *)((char *)&dword_140404A6C[280654325] + v19) = v17;
    *(float *)((char *)&dword_140404A6C[280654326] + v19) = v18;
    v20 = v16 - *(v5 - 5);
    v21 = v17 - *(v5 - 4);
    v22 = v18 - *(v5 - 3);
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = *(v15 - 78);
    v23 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654328] + v23) = v20;
    *(float *)((char *)&dword_140404A6C[280654329] + v23) = v21;
    *(float *)((char *)&dword_140404A6C[280654330] + v23) = v22;
    v24 = v5[23];
    v25 = v5[24];
    v26 = v5[25];
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v27 = (int)dword_140404A6C[v2 + 280654321];
    dword_140404A6C[v2 + 280654321] = v27 + 1;
    dword_140404A6C[23 * v27 + 280654346 + v2] = *(v15 - 78);
    v28 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654324] + v28) = v24;
    v29 = v24 - v5[20];
    *(float *)((char *)&dword_140404A6C[280654325] + v28) = v25;
    v30 = v25 - v5[21];
    *(float *)((char *)&dword_140404A6C[280654326] + v28) = v26;
    v31 = v26 - v5[22];
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = *v15;
    v32 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654328] + v32) = v29;
    *(float *)((char *)&dword_140404A6C[280654329] + v32) = v30;
    *(float *)((char *)&dword_140404A6C[280654330] + v32) = v31;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v33 = (int)dword_140404A6C[v2 + 280654321];
    dword_140404A6C[v2 + 280654321] = v33 + 1;
    dword_140404A6C[23 * v33 + 280654346 + v2] = *v15;
    v34 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(unsigned int *)((char *)&dword_140404A6C[280654324] + v34) = 0;
    *(_QWORD *)((char *)&dword_140404A6C[280654325] + v34) = 1048576000;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 1;
    v5 += 75;
    v15 += 234;
    v14 = dword_140404A6C[v2 + 280654321] + 1;
    dword_140404A6C[v2 + 280654321] = v14;
    --v6;
  }
  while ( v6 );
  v35 = &dword_140404A6C[v2 + 280651751];
  v36 = (float *)&dword_140404A6C[282486201];
  do
  {
    v37 = *(v36 - 52);
    v38 = *(v36 - 51);
    v39 = *(v36 - 50);
    dword_140404A6C[23 * (int)v14 + 280654323 + v2] = dword_140404A6C[v2 + 280651595];
    v40 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654324] + v40) = v37;
    *(float *)((char *)&dword_140404A6C[280654325] + v40) = v38;
    *(float *)((char *)&dword_140404A6C[280654326] + v40) = v39;
    v41 = v37 - *(v36 - 55);
    v42 = v38 - *(v36 - 54);
    v43 = v39 - *(v36 - 53);
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = *v35;
    v44 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654328] + v44) = v41;
    *(float *)((char *)&dword_140404A6C[280654329] + v44) = v42;
    *(float *)((char *)&dword_140404A6C[280654330] + v44) = v43;
    v45 = *(v36 - 27);
    v46 = *(v36 - 26);
    v47 = *(v36 - 25);
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v48 = (int)dword_140404A6C[v2 + 280654321];
    dword_140404A6C[v2 + 280654321] = v48 + 1;
    dword_140404A6C[23 * v48 + 280654346 + v2] = *v35;
    v49 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654324] + v49) = v45;
    v50 = v45 - *(v36 - 30);
    *(float *)((char *)&dword_140404A6C[280654325] + v49) = v46;
    v51 = v46 - *(v36 - 29);
    *(float *)((char *)&dword_140404A6C[280654326] + v49) = v47;
    v52 = v47 - *(v36 - 28);
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = v35[78];
    v53 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654328] + v53) = v50;
    v54 = *(v36 - 2);
    *(float *)((char *)&dword_140404A6C[280654329] + v53) = v51;
    v55 = *(v36 - 1);
    *(float *)((char *)&dword_140404A6C[280654330] + v53) = v52;
    v56 = *v36;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v57 = (int)dword_140404A6C[v2 + 280654321];
    dword_140404A6C[v2 + 280654321] = v57 + 1;
    dword_140404A6C[23 * v57 + 280654346 + v2] = v35[78];
    v58 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654324] + v58) = v54;
    *(float *)((char *)&dword_140404A6C[280654325] + v58) = v55;
    v59 = v54 - *(v36 - 5);
    v60 = v55 - *(v36 - 4);
    *(float *)((char *)&dword_140404A6C[280654326] + v58) = v56;
    v61 = v56 - *(v36 - 3);
    v62 = v35[156];
    v36 += 75;
    v35 += 234;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = v62;
    v63 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654328] + v63) = v59;
    *(float *)((char *)&dword_140404A6C[280654329] + v63) = v60;
    *(float *)((char *)&dword_140404A6C[280654330] + v63) = v61;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v14 = dword_140404A6C[v2 + 280654321] + 1;
    dword_140404A6C[v2 + 280654321] = v14;
  }
  while ( (__int64)v36 < (__int64)&dword_140404A6C[282486351] );
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655795 + v2] = 0;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 1;
  v64 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v64 + 1;
  dword_140404A6C[5 * v64 + 280655800 + v2] = 1;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 2;
  v65 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v65 + 1;
  dword_140404A6C[5 * v65 + 280655800 + v2] = 2;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 3;
  v66 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v66 + 1;
  dword_140404A6C[5 * v66 + 280655800 + v2] = 0;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 4;
  v67 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v67 + 1;
  dword_140404A6C[5 * v67 + 280655800 + v2] = 4;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 5;
  v68 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v68 + 1;
  dword_140404A6C[5 * v68 + 280655800 + v2] = 0;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 7;
  v69 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v69 + 1;
  dword_140404A6C[5 * v69 + 280655800 + v2] = 7;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 8;
  v70 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v70 + 1;
  dword_140404A6C[5 * v70 + 280655800 + v2] = 2;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 10;
  v71 = (int)dword_140404A6C[v2 + 280655794];
  v72 = 0;
  dword_140404A6C[v2 + 280655794] = v71 + 1;
  dword_140404A6C[5 * v71 + 280655800 + v2] = 10;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 11;
  v73 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v73 + 1;
  dword_140404A6C[5 * v73 + 280655800 + v2] = 11;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 12;
  v74 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v74 + 1;
  dword_140404A6C[5 * v74 + 280655800 + v2] = 2;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 13;
  v75 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v75 + 1;
  dword_140404A6C[5 * v75 + 280655800 + v2] = 13;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 14;
  v76 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v76 + 1;
  dword_140404A6C[5 * v76 + 280655800 + v2] = 14;
  result = v2 * 4 + 20LL * (int)dword_140404A6C[v2 + 280655794];
  *(unsigned int *)((char *)&dword_140404A6C[280655796] + result) = 15;
  if ( (int)++dword_140404A6C[v2 + 280655794] > 0 )
  {
    v78 = &dword_140404A6C[v2 + 280655795];
    do
    {
      v79 = 0;
      v80 = v2 * 4 + 92LL * (int)v78[1];
      v78[3] = *(unsigned int *)((char *)&dword_140404A6C[280654323] + v80);
      result = (int)*v78;
      v81 = v2 * 4 + 92 * result;
      if ( *(int *)((char *)&dword_140404A6C[280654322] + v81) > 0 )
      {
        v82 = 0;
        do
        {
          v83 = 0;
          if ( *(int *)((char *)&dword_140404A6C[280654322] + v80) > 0 )
          {
            result = (__int64)&dword_140404A6C[280654323] + v80;
            v84 = v82 + v2 * 4 + 92LL * (int)*v78;
            do
            {
              v85 = *(unsigned int *)((char *)&dword_140404A6C[280654323] + v84);
              if ( v85 == *(_DWORD *)result )
                v78[3] = v85;
              ++v83;
              result += 16;
            }
            while ( v83 < *(int *)((char *)&dword_140404A6C[280654322] + v80) );
            v3 = 0;
          }
          ++v79;
          v82 += 16;
        }
        while ( v79 < *(int *)((char *)&dword_140404A6C[280654322] + v81) );
      }
      ++v72;
      v78 += 5;
    }
    while ( v72 < (int)dword_140404A6C[v2 + 280655794] );
    v1 = v103;
    v4 = 1;
  }
  v86 = dword_140404A6C[v2 + 280655794];
  v87 = 0;
  dword_140404A6C[v2 + 280656115] = 0;
  if ( v86 > 0 )
  {
    v88 = &dword_140404A6C[v2 + 280655798];
    do
    {
      v102 = v4;
      result = (unsigned int)v86;
      v100 = v4;
      if ( v4 < v86 )
      {
        v89 = 7166 * v1;
        v90 = v3 + 5;
        v91 = v88 + 5;
        v92 = &dword_140404A6C[7166 * v1 + 280655795 + v3];
        v99 = v92;
        v93 = &dword_140404A6C[7166 * v1 + 280655800 + v3];
        do
        {
          v94 = 0;
          v95 = v92;
          v96 = 2;
          do
          {
            v97 = *v95;
            v98 = v94 ^ 1;
            if ( *v95 == *v93 )
            {
              dword_140404A6C[5 * (int)v87 + 280656116 + v2] = dword_140404A6C[v98 + 280655795 + v89 + v3];
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656117 + v2] = *v95;
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656118 + v2] = dword_140404A6C[v89 + 280655796 + v90];
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656119 + v2] = *v88;
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656120 + v2] = *v91;
              v87 = dword_140404A6C[v2 + 280656115] + 1;
              dword_140404A6C[v2 + 280656115] = v87;
              v97 = *v95;
            }
            if ( v97 == v93[1] )
            {
              dword_140404A6C[5 * (int)v87 + 280656116 + v2] = dword_140404A6C[v3 + 280655795 + v98 + v89];
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656117 + v2] = *v95;
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656118 + v2] = *v93;
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656119 + v2] = *v88;
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656120 + v2] = *v91;
              v87 = dword_140404A6C[v2 + 280656115] + 1;
              dword_140404A6C[v2 + 280656115] = v87;
            }
            ++v94;
            ++v95;
            --v96;
          }
          while ( v96 );
          v90 += 5;
          result = dword_140404A6C[v2 + 280655794];
          v93 += 5;
          ++v100;
          v91 += 5;
          v92 = v99;
        }
        while ( v100 < (int)result );
        v4 = v101;
      }
      v1 = v103;
      ++v4;
      v3 += 5;
      v101 = v4;
      v88 += 5;
      v86 = result;
    }
    while ( v102 < (int)result );
  }
  return result;
}

// 140279490: using guessed type __int128 xmmword_140279490;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400AC530) ----------------------------------------------------
__int64            sub_1400AC530(float *a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rdi
  float v7; // xmm10_4
  float v8; // xmm9_4
  float v9; // xmm2_4
  float v10; // xmm7_4
  float v11; // xmm9_4
  double v12; // xmm2_8
  float v13; // xmm5_4
  float v14; // xmm0_4
  float v15; // xmm8_4
  float v16; // xmm11_4
  float v17; // xmm5_4
  float v18; // xmm0_4
  float v19; // xmm11_4
  float v20; // xmm8_4
  float v21; // xmm3_4
  float v22; // xmm8_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm5_4
  float v28; // xmm6_4
  __int64 v30; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v31; // [rsp+20h] [rbp-98h] BYREF
  __int128 v32; // [rsp+30h] [rbp-88h]
  int v33; // [rsp+40h] [rbp-78h]
  __int64 v34; // [rsp+48h] [rbp-70h]

  v4 = 1760LL * a3;
  v33 = 1065353216;
  v5 = 1268LL * (int)dword_140404A6C[v4 + 278845898];
  v6 = 7166LL * a2;
  v7 = (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 278521317] * *(float *)&dword_140404A6C[v4 + 278845934])
                     + *(float *)&dword_140404A6C[v4 + 278845916])
             + (float)(*(float *)&dword_140404A6C[v5 + 278521318] * *(float *)&dword_140404A6C[v4 + 278845937]))
     + (float)(*(float *)&dword_140404A6C[v5 + 278521319] * *(float *)&dword_140404A6C[v4 + 278845940]);
  v8 = (float)((float)(*(float *)&dword_140404A6C[v5 + 278521317] * *(float *)&dword_140404A6C[v4 + 278845936])
             + *(float *)&dword_140404A6C[v4 + 278845918])
     + (float)(*(float *)&dword_140404A6C[v5 + 278521318] * *(float *)&dword_140404A6C[v4 + 278845939]);
  v9 = *(float *)&dword_140404A6C[v5 + 278521319] * *(float *)&dword_140404A6C[v4 + 278845942];
  v10 = (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 278521317] * *(float *)&dword_140404A6C[v4 + 278845935])
                      + *(float *)&dword_140404A6C[v4 + 278845917])
              + (float)(*(float *)&dword_140404A6C[v5 + 278521318] * *(float *)&dword_140404A6C[v4 + 278845938]))
      + (float)(*(float *)&dword_140404A6C[v5 + 278521319] * *(float *)&dword_140404A6C[v4 + 278845941]);
  v31 = xmmword_140278D30;
  v11 = v8 + v9;
  *(_QWORD *)&v12 = dword_140404A6C[v6 + 280651377];
  v32 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v31, (float *)&dword_1402F6188, v12);
  LODWORD(v12) = DWORD1(v31);
  v13 = *((float *)&v31 + 3) * 0.5;
  v14 = (float)(*(float *)&v31 * 0.875) + *(float *)&dword_140404A6C[v4 + 278846085];
  v15 = *((float *)&v31 + 2) * 0.875;
  v16 = *(float *)&v32 * 0.5;
  *a1 = v14;
  v17 = v13 + v14;
  v18 = *((float *)&v32 + 1) * 0.5;
  *(float *)&v12 = (float)(*(float *)&v12 * 0.875) + *(float *)&dword_140404A6C[v4 + 278846086];
  a1[1] = *(float *)&v12;
  v19 = v16 + *(float *)&v12;
  v20 = v15 + *(float *)&dword_140404A6C[v4 + 278846087];
  *a1 = v17;
  v21 = v17 - v7;
  a1[1] = v19;
  v22 = v20 + v18;
  a1[2] = v22;
  v23 = v22 - v11;
  v24 = fsqrt((float)(v23 * v23) + (float)(v21 * v21));
  if ( v24 <= 0.0625 )
  {
    v10 = v19;
    v25 = v22;
  }
  else
  {
    a1[1] = v10;
    v25 = (float)((float)((float)(1.0 / v24) * v23) * 0.0625) + v11;
    v17 = (float)((float)((float)(1.0 / v24) * v21) * 0.0625) + v7;
    a1[2] = v25;
    *a1 = v17;
  }
  v26 = v10 - *(float *)&dword_140404A6C[v6 + 280651597];
  v27 = v17 - *(float *)&dword_140404A6C[v6 + 280651596];
  v28 = v25 - *(float *)&dword_140404A6C[v6 + 280651598];
  *a1 = (float)((float)(v26 * *(float *)&dword_140404A6C[v6 + 280651609])
              + (float)(v27 * *(float *)&dword_140404A6C[v6 + 280651608]))
      + (float)(v28 * *(float *)&dword_140404A6C[v6 + 280651610]);
  a1[1] = (float)((float)(v26 * *(float *)&dword_140404A6C[v6 + 280651612])
                + (float)(v27 * *(float *)&dword_140404A6C[v6 + 280651611]))
        + (float)(v28 * *(float *)&dword_140404A6C[v6 + 280651613]);
  a1[2] = (float)((float)(v26 * *(float *)&dword_140404A6C[v6 + 280651615])
                + (float)(v27 * *(float *)&dword_140404A6C[v6 + 280651614]))
        + (float)(v28 * *(float *)&dword_140404A6C[v6 + 280651616]);
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400AC890) ----------------------------------------------------
__int64            sub_1400AC890(int a1)
{
  __int64 v2; // rbx
  float v3; // xmm3_4
  float v4; // xmm4_4
  int v5; // r14d
  float v6; // xmm14_4
  float v7; // xmm9_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm5_4
  float v12; // xmm10_4
  float v13; // xmm2_4
  float v14; // xmm2_4
  float v15; // xmm4_4
  float v16; // xmm7_4
  float v17; // xmm10_4
  float v18; // xmm8_4
  __int128 *v19; // rsi
  int v20; // edi
  float v21; // xmm12_4
  float v22; // xmm1_4
  float v23; // xmm13_4
  float v24; // xmm7_4
  float v25; // xmm10_4
  float v26; // xmm8_4
  __int64 v27; // rax
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm11_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  __int64 v35; // [rsp+8h] [rbp-100h] BYREF
  float v36; // [rsp+28h] [rbp-E0h]
  float sr_support_start[3];
  float sr_support_end[3];
  _Alignas(16) unsigned sr_support_basis[12];
  __int64 v46; // [rsp+98h] [rbp-70h]

  v2 = 7166LL * a1;
  (*(__int128 *)(void *)sr_support_basis) = xmmword_140278D30;
  (*(__int128 *)(void *)(sr_support_basis+4)) = xmmword_140278D30;
  (*(float *)&sr_support_basis[8]) = 1.0;
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_support_basis), (float *)&(*(__int128 *)(void *)sr_support_basis) + 3, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[v2 + 280651341]));
  v3 = *(float *)&dword_140404A6C[v2 + 280651441];
  v4 = *(float *)&dword_140404A6C[v2 + 280651442];
  v5 = 0;
  v6 = 65536.0;
  v7 = -65536.0;
  sr_support_start[0] = *(float *)&dword_140404A6C[v2 + 280651440];
  sr_support_start[1] = v3;
  sr_support_start[2] = v4;
  sr_support_end[0] = sr_support_start[0] - (float)(*(float *)&dword_1402F6188 * 1.75);
  sr_support_end[1] = v3 - (float)(*(float *)&dword_1402F618C * 1.75);
  sr_support_end[2] = v4 - (float)(*(float *)&dword_1402F6190 * 1.75);
  if ( (unsigned int)sub_1400B91E0(a1, &sr_support_start[0], &sr_support_end[0]) )
    v8 = *(float *)&dword_140404A6C[73006982];
  else
    v8 = sr_support_start[1];
  v9 = *(float *)&dword_140404A6C[v2 + 280657992];
  v10 = *(float *)&dword_140404A6C[v2 + 280657994];
  v11 = v8;
  v36 = v8;
  v12 = 0.0;
  v13 = fsqrt((float)(v10 * v10) + (float)(v9 * v9));
  if ( v13 < 0.016666668 )
  {
    v14 = v13 - 0.016666668;
    v12 = *((float *)&(*(__int128 *)(void *)(sr_support_basis+4)) + 3) * v14;
    v9 = (float)(*((float *)&(*(__int128 *)(void *)(sr_support_basis+4)) + 2) * v14) + v9;
    v10 = (float)((*(float *)&sr_support_basis[8]) * v14) + v10;
  }
  v15 = fsqrt((float)((float)(v12 * v12) + (float)(v9 * v9)) + (float)(v10 * v10));
  if ( v15 == 0.0 )
  {
    v16 = 0.0;
    v17 = 0.0;
    v18 = 0.0;
  }
  else
  {
    v16 = v9 * (float)(1.0 / v15);
    v17 = v12 * (float)(1.0 / v15);
    v18 = v10 * (float)(1.0 / v15);
  }
  v19 = &(*(__int128 *)(void *)sr_support_basis);
  v20 = 0;
  v21 = sr_support_start[2];
  v22 = v8;
  v23 = sr_support_start[0];
  v24 = v16 * 0.66666669;
  v25 = v17 * 0.66666669;
  v26 = v18 * 0.66666669;
  do
  {
    sr_support_start[0] = (float)(*(float *)&dword_1402F6188 * 0.75) + v23;
    sr_support_end[1] = v11 - (float)(*(float *)&dword_1402F618C * 0.75);
    sr_support_start[1] = (float)(*(float *)&dword_1402F618C * 0.75) + v22;
    sr_support_end[0] = v23 - (float)(*(float *)&dword_1402F6188 * 0.75);
    sr_support_start[2] = (float)(*(float *)&dword_1402F6190 * 0.75) + v21;
    sr_support_end[2] = v21 - (float)(*(float *)&dword_1402F6190 * 0.75);
    if ( (unsigned int)sub_1400B91E0(a1, &sr_support_start[0], &sr_support_end[0]) )
    {
      if ( !v20 )
      {
        v27 = (int)dword_140404A6C[73007011];
        *(_QWORD *)&dword_140404A6C[v2 + 280657986] = 0;
        *(_QWORD *)&dword_140404A6C[v2 + 280657988] = 0;
        *(_QWORD *)&dword_140404A6C[v2 + 280657990] = 0;
        if ( (_DWORD)v27 != -1 )
        {
          dword_140404A6C[v2 + 280657986] = dword_140404A6C[5210 * v27 + 129716744];
          dword_140404A6C[v2 + 280657987] = dword_140404A6C[5210 * v27 + 129716745];
          dword_140404A6C[v2 + 280657988] = dword_140404A6C[5210 * v27 + 129716746];
          dword_140404A6C[v2 + 280657989] = dword_140404A6C[5210 * v27 + 129716750];
          dword_140404A6C[v2 + 280657990] = dword_140404A6C[5210 * v27 + 129716751];
          dword_140404A6C[v2 + 280657991] = dword_140404A6C[5210 * v27 + 129716752];
        }
      }
      v8 = *(float *)&dword_140404A6C[73006982];
      ++v5;
      v19 = (__int128 *)((char *)v19 + 4);
      v6 = fminf(*(float *)&dword_140404A6C[73006982], v6);
      v7 = fmaxf(*(float *)&dword_140404A6C[73006982], v7);
    }
    v23 = v23 + v24;
    ++v20;
    v21 = v21 + v26;
    v8 = v25 + v8;
    v22 = v8;
    v11 = v8;
  }
  while ( v20 < 4 );
  if ( v5 > 0 )
  {
    v28 = *(float *)&dword_140404A6C[v2 + 280658001];
    v29 = v7 - v36;
    v30 = 0.03125;
    v31 = fmaxf((float)(1.0 - fmaxf(fminf(fabs(v7 - v6), 0.5), fminf(fabs(v7 - v36), 0.625))) - v28, -0.03125);
    if ( v31 > 0.03125 )
      v31 = 0.03125;
    v32 = *(float *)&dword_140404A6C[v2 + 280658002];
    *(float *)&dword_140404A6C[v2 + 280658001] = v31 + v28;
    v33 = fmaxf(v29 - v32, -0.03125);
    if ( v33 <= 0.03125 )
      v30 = v33;
    *(float *)&dword_140404A6C[v2 + 280658002] = v30 + v32;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84884: using guessed type unsigned int;

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
  float v24; // [rsp+20h] [rbp-C8h] BYREF
  float v25; // [rsp+24h] [rbp-C4h]
  float v26; // [rsp+28h] [rbp-C0h]
  float v27; // [rsp+2Ch] [rbp-BCh]
  __m128 v28; // [rsp+30h] [rbp-B8h] BYREF

  sub_14010E370(&v24, a3);
  sub_14010E370(SR_VEC_LANES(128, v28, f32), a2);
  v5 = SR_VEC_LANES(128, v28, f32)[3];
  v6 = SR_VEC_LANES(128, v28, f32)[2];
  v7 = SR_VEC_LANES(128, v28, f32)[0];
  v8 = SR_VEC_LANES(128, v28, f32)[1];
  if ( (float)((float)((float)(v27 * SR_VEC_LANES(128, v28, f32)[3]) + (float)(v26 * SR_VEC_LANES(128, v28, f32)[2]))
             + (float)((float)(v24 * SR_VEC_LANES(128, v28, f32)[0]) + (float)(v25 * SR_VEC_LANES(128, v28, f32)[1]))) < 0.0 )
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
  v12 = (float)((float)((float)(v10 * v27) + (float)(v5 * v24)) + (float)(v9 * v26)) - (float)(v11 * v25);
  v13 = (float)((float)((float)(v5 * v25) - (float)(v10 * v26)) + (float)(v9 * v27)) + (float)(v11 * v24);
  v14 = (float)((float)((float)(v10 * v25) + (float)(v5 * v26)) - (float)(v9 * v24)) + (float)(v11 * v27);
  v15 = (float)((float)((float)(v27 * v5) - (float)(v10 * v24)) - (float)(v9 * v25)) - (float)(v11 * v26);
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

//----- (00000001400B2440) ----------------------------------------------------
__int64            sub_1400B2440(int a1)
{
  __int64 v2; // r12
  int v3; // r14d
  float v4; // xmm3_4
  float v5; // xmm4_4
  int v6; // r15d
  float v7; // xmm6_4
  __int128 *v8; // rbx
  __int64 v9; // rdi
  float v10; // xmm10_4
  float v11; // xmm11_4
  float v12; // xmm9_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm6_4
  double v16; // xmm0_8
  float v17; // xmm1_4
  float v18; // xmm5_4
  float v19; // xmm5_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm5_4
  float *v26; // r8
  unsigned int *v27; // r9
  __int64 v28; // r10
  __int64 v29; // rax
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  __m128 v34; // xmm2
  __m128 v35; // xmm1
  __int64 v36; // rax
  __m128 v37; // xmm0
  __m128 v38; // xmm2
  __m128 v39; // xmm1
  __int64 v40; // rax
  float v41; // xmm0_4
  float v42; // xmm4_4
  __int64 v44; // [rsp+8h] [rbp-100h] BYREF
  float sr_pelvis_support_start[3];
  float sr_pelvis_support_end[3];
  _Alignas(16) unsigned sr_pelvis_support_work[12];
  __int64 v54; // [rsp+88h] [rbp-80h]

  v2 = 7166LL * a1;
  (*(__int128 *)(void *)sr_pelvis_support_work) = xmmword_140278D30;
  (*(__int128 *)(void *)(sr_pelvis_support_work+4)) = xmmword_140278D30;
  (*(float *)&sr_pelvis_support_work[8]) = 1.0;
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_pelvis_support_work), (float *)&(*(__int128 *)(void *)sr_pelvis_support_work) + 3, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[v2 + 280651341]));
  v3 = 0;
  v4 = *(float *)&dword_140404A6C[v2 + 280651441];
  v5 = *(float *)&dword_140404A6C[v2 + 280651442];
  v6 = 0;
  sr_pelvis_support_start[0] = *(float *)&dword_140404A6C[v2 + 280651440];
  sr_pelvis_support_start[1] = v4;
  sr_pelvis_support_start[2] = v5;
  sr_pelvis_support_end[0] = sr_pelvis_support_start[0] - (float)(*(float *)&dword_1402F6188 * 1.75);
  sr_pelvis_support_end[1] = v4 - (float)(*(float *)&dword_1402F618C * 1.75);
  sr_pelvis_support_end[2] = v5 - (float)(*(float *)&dword_1402F6190 * 1.75);
  if ( (unsigned int)sub_1400B91E0(a1, &sr_pelvis_support_start[0], &sr_pelvis_support_end[0]) )
    v7 = *(float *)&dword_140404A6C[73006982];
  else
    v7 = sr_pelvis_support_start[1];
  v8 = &(*(__int128 *)(void *)sr_pelvis_support_work);
  v9 = 8;
  v10 = (float)(*(float *)&dword_140404A6C[v2 + 280657992] - (float)(*((float *)&(*(__int128 *)(void *)(sr_pelvis_support_work+4)) + 2) * 0.015625)) * 3.75;
  v11 = (float)(*(float *)&dword_140404A6C[v2 + 280657994] - (float)((*(float *)&sr_pelvis_support_work[8]) * 0.015625)) * 3.75;
  v12 = (float)(*((float *)&(*(__int128 *)(void *)(sr_pelvis_support_work+4)) + 3) * -0.015625) * 3.75;
  v13 = sr_pelvis_support_start[0] - v10;
  v14 = sr_pelvis_support_start[2] - v11;
  v15 = v7 - v12;
  do
  {
    sr_pelvis_support_start[0] = v13 + (float)(*(float *)&dword_1402F6188 * 0.75);
    sr_pelvis_support_end[0] = v13 - (float)(*(float *)&dword_1402F6188 * 0.75);
    sr_pelvis_support_start[1] = v15 + (float)(*(float *)&dword_1402F618C * 0.75);
    sr_pelvis_support_end[2] = v14 - (float)(*(float *)&dword_1402F6190 * 0.75);
    sr_pelvis_support_start[2] = v14 + (float)(*(float *)&dword_1402F6190 * 0.75);
    sr_pelvis_support_end[1] = v15 - (float)(*(float *)&dword_1402F618C * 0.75);
    if ( (unsigned int)sub_1400B91E0(a1, &sr_pelvis_support_start[0], &sr_pelvis_support_end[0]) )
    {
      v15 = *(float *)&dword_140404A6C[73006982];
      ++v6;
      *(_DWORD *)v8 = dword_140404A6C[73006982];
      v8 = (__int128 *)((char *)v8 + 4);
    }
    v13 = v13 + v10;
    v15 = v15 + v12;
    v14 = v14 + v11;
    --v9;
  }
  while ( v9 );
  v16 = cos((float)(*(float *)&dword_140404A6C[v2 + 280651342] * 0.5));
  v17 = *(float *)&dword_140404A6C[v2 + 280651373];
  v18 = v16 * *(float *)&dword_140404A6C[v2 + 280657921];
  v19 = fmaxf(v18, 0.125);
  if ( dword_140404A6C[v2 + 280651327] )
    v20 = (float)(v17 * 0.46875) + 0.125;
  else
    v20 = (float)(v17 * 0.21875) + 0.34375;
  v21 = *(float *)&dword_140404A6C[v2 + 280657915];
  v22 = (float)(v19 + 1.0) * v20;
  v23 = v21;
  v24 = fminf(fmaxf(*(float *)&dword_140404A6C[v2 + 280658002], 0.0), 1.0);
  v25 = (float)(v22 * (float)(1.0 - v24))
      + (float)((float)((float)(*(float *)&dword_140404A6C[v2 + 280651373] * 0.9375) + 0.3125) * v24);
  if ( v6 > 0 )
  {
    v26 = (float *)&dword_140404A6C[v2 + 280658054];
    v27 = &dword_140404A6C[v2 + 280652451];
    v28 = 2;
    while ( 1 )
    {
      if ( *((_DWORD *)v26 - 28) == 1 && *v27 )
      {
        v29 = 0;
        if ( v6 < 4LL )
        {
          v30 = *v26;
        }
        else
        {
          v30 = *v26;
          v31 = *v26 + 0.125;
          do
          {
            if ( v31 < *((float *)&(*(__int128 *)(void *)sr_pelvis_support_work) + v29) )
              *((float *)&(*(__int128 *)(void *)sr_pelvis_support_work) + v29) = v31;
            if ( v31 < *((float *)&(*(__int128 *)(void *)sr_pelvis_support_work) + v29 + 1) )
              *((float *)&(*(__int128 *)(void *)sr_pelvis_support_work) + v29 + 1) = v31;
            if ( v31 < *((float *)&(*(__int128 *)(void *)sr_pelvis_support_work) + v29 + 2) )
              *((float *)&(*(__int128 *)(void *)sr_pelvis_support_work) + v29 + 2) = v31;
            if ( v31 < *((float *)&(*(__int128 *)(void *)sr_pelvis_support_work) + v29 + 3) )
              *((float *)&(*(__int128 *)(void *)sr_pelvis_support_work) + v29 + 3) = v31;
            v29 += 4;
          }
          while ( v29 < v6 - 3LL );
          if ( v29 >= v6 )
            goto LABEL_33;
        }
        v32 = v30 + 0.125;
        do
        {
          if ( v32 < *((float *)&(*(__int128 *)(void *)sr_pelvis_support_work) + v29) )
            *((float *)&(*(__int128 *)(void *)sr_pelvis_support_work) + v29) = v32;
          ++v29;
        }
        while ( v29 < v6 );
      }
LABEL_33:
      v27 += 234;
      v26 += 55;
      if ( !--v28 )
      {
        v33 = 0.0;
        if ( (unsigned int)v6 < 8 )
          goto LABEL_38;
        v34 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
        v35 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
        v36 = 0;
        do
        {
          v3 += 8;
          v34 = _mm_add_ps(v34, *(__m128 *)((char *)&(*(__int128 *)(void *)sr_pelvis_support_work) + 4 * v36));
          v37 = *(__m128 *)((char *)&(*(__int128 *)(void *)(sr_pelvis_support_work+4)) + 4 * v36);
          v36 += 8;
          v35 = _mm_add_ps(v35, v37);
        }
        while ( v36 < (int)(v6 - (v6 & 0x80000007)) );
        v38 = _mm_add_ps(v34, v35);
        v39 = _mm_add_ps(_mm_movehl_ps(v38, v38), v38);
        v33 = SR_VEC_LANES(128, v39, f32)[0] + SR_VEC_READ_LANES(128, _mm_shuffle_ps(v39, v39, 245), f32)[0];
        if ( v3 < v6 )
        {
LABEL_38:
          v40 = v3;
          do
            v33 = v33 + *((float *)&(*(__int128 *)(void *)sr_pelvis_support_work) + v40++);
          while ( v40 < v6 );
        }
        v23 = (float)(v33 / (float)v6) + v25;
        break;
      }
    }
  }
  v41 = *(float *)&dword_140404A6C[v2 + 280657981];
  if ( v41 >= (float)(v21 - 0.125) )
  {
    v42 = v21 + 0.125;
    if ( v41 > v42 )
      v41 = v42;
  }
  else
  {
    v41 = v21 - 0.125;
  }
  *(float *)&dword_140404A6C[v2 + 280657981] = (float)((float)(v23 - v41) * 0.25) + v41;
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 1400B2847: conditional instruction was optimized away because r15d.4>=1
// 1400B2897: conditional instruction was optimized away because r15d.4>=8
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84884: using guessed type unsigned int;

//----- (00000001400B29B0) ----------------------------------------------------
__int64            sub_1400B29B0(__int64 a1, int a2, int a3, int a4, int a5, float *a6)
{
  float v6; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm5_4
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm4_4
  float v27; // xmm6_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm6_4
  float v31; // xmm5_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm5_4
  float v35; // xmm0_4

  v6 = *(float *)&dword_140404A6C[282486224];
  *(_DWORD *)a1 = dword_140404A6C[282486224];
  v8 = *(float *)&dword_140404A6C[282486225];
  v9 = v6 - 0.0625;
  *(_DWORD *)(a1 + 4) = dword_140404A6C[282486225];
  v10 = v8;
  v11 = *(float *)&dword_140404A6C[282486226] - 0.09375;
  *(float *)a1 = v9;
  *(float *)(a1 + 8) = v11;
  v12 = 7166LL * a2;
  if ( dword_140404A6C[v12 + 280658335] != 1 && (int)dword_140404A6C[v12 + 280651327] < 2 )
  {
    v10 = v8 - 0.25;
    *(float *)(a1 + 4) = v8 - 0.25;
  }
  if ( dword_140404A6C[v12 + 280651313] != -1 )
  {
    v10 = v10 + 0.25;
    *(float *)(a1 + 4) = v10;
  }
  v13 = 1268LL * a4;
  result = v13 * 4 + 12LL * a3;
  v15 = -*(float *)&dword_140404A6C[v13 + 278522538];
  v16 = (float)(v15 * *a6) + v9;
  *(float *)a1 = v16;
  v17 = (float)(v15 * a6[1]) + v10;
  *(float *)(a1 + 4) = v17;
  v18 = (float)(v15 * a6[2]) + v11;
  *(float *)(a1 + 8) = v18;
  v19 = -*(float *)&dword_140404A6C[v13 + 278522539];
  v20 = (float)(v19 * a6[3]) + v16;
  *(float *)a1 = v20;
  v21 = (float)(v19 * a6[4]) + v17;
  *(float *)(a1 + 4) = v21;
  v22 = (float)(v19 * a6[5]) + v18;
  *(float *)(a1 + 8) = v22;
  v23 = -*(float *)&dword_140404A6C[v13 + 278522540];
  v24 = (float)(v23 * a6[6]) + v20;
  *(float *)a1 = v24;
  v25 = (float)(v23 * a6[7]) + v21;
  *(float *)(a1 + 4) = v25;
  v26 = (float)(v23 * a6[8]) + v22;
  *(float *)(a1 + 8) = v26;
  v27 = *(float *)((char *)&dword_140404A6C[278521317] + result);
  v28 = (float)(v27 * *a6) + v24;
  *(float *)a1 = v28;
  v29 = (float)(v27 * a6[1]) + v25;
  *(float *)(a1 + 4) = v29;
  v30 = (float)(v27 * a6[2]) + v26;
  *(float *)(a1 + 8) = v30;
  v31 = *(float *)((char *)&dword_140404A6C[278521318] + result);
  v32 = (float)(v31 * a6[3]) + v28;
  *(float *)a1 = v32;
  v33 = (float)(v31 * a6[4]) + v29;
  *(float *)(a1 + 4) = v33;
  v34 = (float)(v31 * a6[5]) + v30;
  *(float *)(a1 + 8) = v34;
  v35 = *(float *)((char *)&dword_140404A6C[278521319] + result);
  *(float *)a1 = (float)(v35 * a6[6]) + v32;
  *(float *)(a1 + 4) = (float)(v35 * a6[7]) + v33;
  *(float *)(a1 + 8) = (float)(v35 * a6[8]) + v34;
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18399E1AC: using guessed type unsigned int;
// 18399E1B0: using guessed type unsigned int;

//----- (00000001400B2BF0) ----------------------------------------------------
__int64            sub_1400B2BF0(int a1, int a2, int a3, float *a4, float a5, float a6)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm5_4

  v6 = 28664LL * a1;
  result = a2;
  v8 = v6 + 312LL * a3;
  v9 = v6 + 312LL * a2;
  v10 = (float)(*(float *)((char *)&dword_140404A6C[280651461] + v9)
              - *(float *)((char *)&dword_140404A6C[280651461] + v8))
      * a6;
  v11 = (float)(*(float *)((char *)&dword_140404A6C[280651462] + v9)
              - *(float *)((char *)&dword_140404A6C[280651462] + v8))
      * a6;
  v12 = (float)(*(float *)((char *)&dword_140404A6C[280651463] + v9)
              - *(float *)((char *)&dword_140404A6C[280651463] + v8))
      * a6;
  v13 = *a4 - v10;
  v14 = a4[1] - v11;
  v15 = a4[2] - v12;
  v16 = fsqrt((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15));
  if ( v16 > a5 )
  {
    if ( v16 == 0.0 )
    {
      v17 = 0.0;
      v18 = 0.0;
      v19 = 0.0;
    }
    else
    {
      v17 = v13 * (float)(1.0 / v16);
      v18 = v14 * (float)(1.0 / v16);
      v19 = v15 * (float)(1.0 / v16);
    }
    *a4 = (float)(v17 * a5) + v10;
    a4[1] = (float)(v18 * a5) + v11;
    a4[2] = (float)(v19 * a5) + v12;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B2D20) ----------------------------------------------------
__int64            sub_1400B2D20(int a1, int a2, int a3, float *a4, float a5, float a6)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm5_4

  v6 = 28664LL * a1;
  result = a2;
  v8 = v6 + 312LL * a3;
  v9 = v6 + 312LL * a2;
  v10 = (float)(*(float *)((char *)&dword_140404A6C[280651461] + v9)
              - *(float *)((char *)&dword_140404A6C[280651461] + v8))
      * a6;
  v11 = (float)(*(float *)((char *)&dword_140404A6C[280651462] + v9)
              - *(float *)((char *)&dword_140404A6C[280651462] + v8))
      * a6;
  v12 = (float)(*(float *)((char *)&dword_140404A6C[280651463] + v9)
              - *(float *)((char *)&dword_140404A6C[280651463] + v8))
      * a6;
  v13 = *a4 - v10;
  v14 = a4[1] - v11;
  v15 = a4[2] - v12;
  v16 = fsqrt((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15));
  if ( v16 > a5 )
  {
    v17 = (float)(fminf(v16 - a5, a5) * 0.5) + a5;
    if ( v16 == 0.0 )
    {
      v18 = 0.0;
      v19 = 0.0;
      v20 = 0.0;
    }
    else
    {
      v18 = v13 * (float)(1.0 / v16);
      v19 = v14 * (float)(1.0 / v16);
      v20 = v15 * (float)(1.0 / v16);
    }
    *a4 = (float)(v18 * v17) + v10;
    a4[1] = (float)(v19 * v17) + v11;
    a4[2] = (float)(v20 * v17) + v12;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84884: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;

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
  float v46; // [rsp+58h] [rbp-B0h] BYREF
  float v47; // [rsp+5Ch] [rbp-ACh]
  float v48; // [rsp+60h] [rbp-A8h]
  float v49; // [rsp+68h] [rbp-A0h] BYREF
  float v50; // [rsp+6Ch] [rbp-9Ch]
  float v51[24]; // [rsp+70h] [rbp-98h]

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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183E9362C: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400B40B0) ----------------------------------------------------
__int64            sub_1400B40B0(int a1)
{
  float v1; // xmm3_4
  __int64 v3; // rbx
  int v4; // eax
  float v5; // xmm13_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  double v9; // xmm2_8
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm7_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm7_4
  unsigned int v16; // xmm3_4
  unsigned int v17; // xmm4_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm2_4
  float v23; // xmm5_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  unsigned int v26; // eax
  float v27; // xmm10_4
  float v28; // xmm0_4
  double v29; // xmm2_8
  float v30; // xmm10_4
  float v31; // xmm4_4
  float v32; // xmm0_4
  float v33; // xmm8_4
  float v34; // xmm5_4
  float v35; // xmm0_4
  float v36; // xmm3_4
  float v37; // xmm4_4
  float v38; // xmm2_4
  float v39; // xmm5_4
  float v40; // xmm8_4
  float v41; // xmm9_4
  float v42; // xmm5_4
  float v43; // xmm2_4
  float v44; // xmm8_4
  float v45; // xmm9_4
  float v46; // xmm5_4
  float v47; // xmm0_4
  int v48; // eax
  float v49; // xmm12_4
  float v50; // xmm3_4
  float v51; // xmm10_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  float v54; // xmm3_4
  float v55; // xmm4_4
  float v56; // xmm4_4
  double v57; // xmm1_8
  double v58; // xmm1_8
  float v59; // xmm2_4
  float v60; // xmm0_4
  float v61; // xmm0_4
  float v62; // xmm3_4
  float v63; // xmm1_4
  unsigned int v64; // xmm3_4
  float v65; // xmm4_4
  float v66; // xmm2_4
  float v67; // xmm3_4
  float v68; // xmm8_4
  float v69; // xmm9_4
  float v70; // xmm2_4
  float v71; // xmm5_4
  float v72; // xmm1_4
  float v73; // xmm8_4
  float v74; // xmm5_4
  signed int v75; // eax
  __int64 v76; // rdi
  double v77; // xmm2_8
  float v78; // xmm4_4
  __int64 v79; // rcx
  float v80; // xmm5_4
  float v81; // xmm9_4
  float v82; // xmm8_4
  float v83; // xmm9_4
  float v84; // xmm2_4
  float v85; // xmm3_4
  float v86; // xmm1_4
  float v87; // xmm2_4
  float v88; // xmm4_4
  float v89; // xmm8_4
  double v90; // xmm2_8
  float v91; // xmm6_4
  float v92; // xmm3_4
  float v93; // xmm6_4
  float v94; // xmm1_4
  float v95; // xmm2_4
  __int64 v97; // [rsp+8h] [rbp-100h] BYREF
  unsigned int v98; // [rsp+28h] [rbp-E0h]
  _Alignas(16) unsigned sr_balance_basis[12];
  _Alignas(16) unsigned sr_balance_heading[12];
  __int64 v105; // [rsp+80h] [rbp-88h]

  v1 = 1.0;
  v3 = 7166LL * a1;
  if ( (dword_140404A6C[v3 + 280651436] & 8) != 0 )
    v1 = 0.625;
  v4 = dword_140404A6C[v3 + 280657908];
  if ( v4 || !dword_140404A6C[v3 + 280651324] )
  {
    v5 = 0.03125;
    v6 = 0.03125;
    if ( v4 > 0 )
      v6 = 0.125;
  }
  else
  {
    v5 = 0.03125;
    v6 = 0.03125;
    dword_140404A6C[v3 + 280657909] = 0;
  }
  v7 = *(float *)&dword_140404A6C[v3 + 280651373];
  if ( v7 >= (float)(v1 - v6) )
  {
    if ( v7 <= (float)(v6 + v1) )
      v8 = v1;
    else
      v8 = v7 - v6;
  }
  else
  {
    v8 = v7 + v6;
  }
  *(float *)&dword_140404A6C[v3 + 280651373] = v8;
  *(_QWORD *)&v9 = dword_140404A6C[v3 + 280651341];
  (*(__int128 *)(void *)sr_balance_heading) = xmmword_140278D30;
  LODWORD((*(int64_t *)(void *)(sr_balance_heading+8))) = 1065353216;
  (*(__int128 *)(void *)(sr_balance_heading+4)) = xmmword_140278D30;
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_balance_heading), (float *)&(*(__int128 *)(void *)sr_balance_heading) + 3, v9);
  sub_1400AC890(a1);
  v10 = *(float *)&dword_140404A6C[v3 + 280657993] - *(float *)&dword_140404A6C[v3 + 280657934];
  v11 = *(float *)&dword_140404A6C[v3 + 280657994] - *(float *)&dword_140404A6C[v3 + 280657935];
  v12 = *(float *)&dword_140404A6C[v3 + 280657933];
  v13 = *(float *)&dword_140404A6C[v3 + 280657992] - v12;
  v14 = fsqrt((float)((float)(v13 * v13) + (float)(v10 * v10)) + (float)(v11 * v11));
  if ( v14 > 0.033333335 )
  {
    *(float *)&dword_140404A6C[v3 + 280657992] = (float)((float)(v13 * (float)(1.0 / v14)) * 0.033333335) + v12;
    *(float *)&dword_140404A6C[v3 + 280657993] = (float)((float)((float)(1.0 / v14) * v10) * 0.033333335)
                                               + *(float *)&dword_140404A6C[v3 + 280657934];
    *(float *)&dword_140404A6C[v3 + 280657994] = (float)((float)((float)(1.0 / v14) * v11) * 0.033333335)
                                               + *(float *)&dword_140404A6C[v3 + 280657935];
  }
  dword_140404A6C[v3 + 280657993] = 0;
  v15 = 0.0;
  *(float *)&v16 = *(float *)&dword_140404A6C[v3 + 280657980] + *(float *)&dword_140404A6C[v3 + 280657986];
  dword_140404A6C[v3 + 280657980] = v16;
  *(float *)&dword_140404A6C[v3 + 280657981] = *(float *)&dword_140404A6C[v3 + 280657981]
                                             + *(float *)&dword_140404A6C[v3 + 280657987];
  *(float *)&v17 = *(float *)&dword_140404A6C[v3 + 280657982] + *(float *)&dword_140404A6C[v3 + 280657988];
  dword_140404A6C[v3 + 280657982] = v17;
  v18 = *(float *)&dword_140404A6C[v3 + 280657914];
  v19 = *(float *)&dword_140404A6C[v3 + 280657916];
  v20 = *(float *)&v16 - v18;
  v21 = *(float *)&v17 - v19;
  v22 = fsqrt((float)(v21 * v21) + (float)(v20 * v20));
  v23 = (float)(fsqrt(
                  (float)((float)(*(float *)&dword_140404A6C[v3 + 280657992] * *(float *)&dword_140404A6C[v3 + 280657992])
                        + (float)(*(float *)&dword_140404A6C[v3 + 280657993] * *(float *)&dword_140404A6C[v3 + 280657993]))
                + (float)(*(float *)&dword_140404A6C[v3 + 280657994] * *(float *)&dword_140404A6C[v3 + 280657994]))
              * 1.875)
      + 0.0625;
  if ( v22 > v23 )
  {
    if ( v22 == 0.0 )
    {
      v24 = 0.0;
      v25 = 0.0;
    }
    else
    {
      v24 = v20 * (float)(1.0 / v22);
      v25 = v21 * (float)(1.0 / v22);
    }
    *(float *)&dword_140404A6C[v3 + 280657980] = (float)(v24 * v23) + v18;
    *(float *)&dword_140404A6C[v3 + 280657982] = (float)(v25 * v23) + v19;
  }
  v26 = dword_140404A6C[v3 + 280651327];
  v27 = 0.050000001;
  if ( v26 )
  {
    if ( v26 == 2 )
      v27 = 0.025;
  }
  else
  {
    v27 = 0.083333336;
  }
  if ( dword_140404A6C[v3 + 280657908] )
    v28 = 1.0;
  else
    v28 = *(float *)&dword_140404A6C[v3 + 280651373];
  *(_QWORD *)&v29 = dword_140404A6C[v3 + 280651365];
  *(float *)&v29 = *(float *)&v29 + *(float *)&dword_140404A6C[v3 + 280651341];
  (*(float *)&sr_balance_basis[8]) = 1.0;
  v30 = (float)(v27 * v28) * *(float *)&dword_140404A6C[v3 + 280658001];
  (*(__int128 *)(void *)sr_balance_basis) = xmmword_140278D30;
  (*(__int128 *)(void *)(sr_balance_basis+4)) = xmmword_140278D30;
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_balance_basis), (float *)&(*(__int128 *)(void *)sr_balance_basis) + 3, v29);
  *(float *)&v29 = -*(float *)&dword_140404A6C[v3 + 280651380];
  v31 = (float)(*((float *)&(*(__int128 *)(void *)(sr_balance_basis+4)) + 2) * *(float *)&v29)
      + (float)(*(float *)&dword_140404A6C[v3 + 280651378] * *(float *)&(*(__int128 *)(void *)sr_balance_basis));
  v32 = *(float *)&dword_140404A6C[v3 + 280651378];
  v33 = (float)((*(float *)&sr_balance_basis[8]) * *(float *)&v29) + (float)(v32 * *((float *)&(*(__int128 *)(void *)sr_balance_basis) + 2));
  v34 = (float)(*((float *)&(*(__int128 *)(void *)(sr_balance_basis+4)) + 3) * *(float *)&v29) + (float)(v32 * *((float *)&(*(__int128 *)(void *)sr_balance_basis) + 1));
  v35 = fsqrt((float)((float)(v34 * v34) + (float)(v31 * v31)) + (float)(v33 * v33));
  if ( v35 == 0.0 )
  {
    v36 = 0.0;
    v37 = 0.0;
    v38 = 0.0;
  }
  else
  {
    v36 = (float)(1.0 / v35) * v31;
    v37 = (float)(1.0 / v35) * v34;
    v38 = (float)(1.0 / v35) * v33;
  }
  v39 = (float)((float)((float)(*(float *)&(*(__int128 *)(void *)sr_balance_basis) * v36) + (float)(*((float *)&(*(__int128 *)(void *)sr_balance_basis) + 1) * v37))
              + (float)(*((float *)&(*(__int128 *)(void *)sr_balance_basis) + 2) * v38))
      * -0.25;
  v40 = (float)(v39 * *(float *)&(*(__int128 *)(void *)sr_balance_basis)) + v36;
  v41 = (float)(v39 * *((float *)&(*(__int128 *)(void *)sr_balance_basis) + 1)) + v37;
  v42 = (float)(v39 * *((float *)&(*(__int128 *)(void *)sr_balance_basis) + 2)) + v38;
  if ( *(float *)&dword_140404A6C[v3 + 280651380] < 0.0 )
  {
    v43 = (float)((float)((float)(v41 * *((float *)&(*(__int128 *)(void *)(sr_balance_basis+4)) + 3)) + (float)(v40 * *((float *)&(*(__int128 *)(void *)(sr_balance_basis+4)) + 2)))
                + (float)(v42 * (*(float *)&sr_balance_basis[8])))
        * -0.5;
    v42 = (float)(v43 * (*(float *)&sr_balance_basis[8])) + v42;
    v40 = (float)(v43 * *((float *)&(*(__int128 *)(void *)(sr_balance_basis+4)) + 2)) + v40;
    v41 = (float)(v43 * *((float *)&(*(__int128 *)(void *)(sr_balance_basis+4)) + 3)) + v41;
  }
  v44 = v40 * v30;
  v45 = v41 * v30;
  v46 = v42 * v30;
  v47 = fsqrt((float)((float)(v45 * v45) + (float)(v44 * v44)) + (float)(v46 * v46));
  if ( v47 > 0.050000001 )
  {
    if ( (dword_140404A6C[283831474] & 0xF) == 0 )
    {
      v48 = dword_140404A6C[v3 + 280651310];
      if ( v48 > 0 )
        dword_140404A6C[v3 + 280651310] = v48 - 1;
    }
    if ( (int)dword_140404A6C[v3 + 280651310] < 8 )
    {
      v44 = (float)((float)(1.0 / v47) * v44) * 0.050000001;
      v45 = (float)((float)(1.0 / v47) * v45) * 0.050000001;
      v46 = (float)((float)(1.0 / v47) * v46) * 0.050000001;
    }
  }
  if ( *(float *)&dword_140404A6C[v3 + 280657921] < 0.5 )
  {
    v44 = 0.0;
    v45 = 0.0;
    v46 = 0.0;
  }
  v49 = 0.0078125;
  v50 = *(float *)&(*(__int128 *)(void *)sr_balance_heading) * *(float *)&dword_140404A6C[v3 + 280657933];
  v98 = dword_140404A6C[v3 + 280651370];
  v51 = (float)((float)((float)((float)((float)(v44 * *(float *)&(*(__int128 *)(void *)sr_balance_heading)) + (float)(v45 * *((float *)&(*(__int128 *)(void *)sr_balance_heading) + 1)))
                              + (float)(v46 * *((float *)&(*(__int128 *)(void *)sr_balance_heading) + 2)))
                      - (float)((float)((float)(*((float *)&(*(__int128 *)(void *)sr_balance_heading) + 1) * *(float *)&dword_140404A6C[v3 + 280657934]) + v50)
                              + (float)(*((float *)&(*(__int128 *)(void *)sr_balance_heading) + 2) * *(float *)&dword_140404A6C[v3 + 280657935])))
              - *(float *)&v98)
      * 0.0625;
  if ( v51 < -0.0078125 )
  {
    v51 = -0.0078125;
  }
  else if ( v51 > 0.0078125 )
  {
    v51 = 0.0078125;
  }
  v52 = *(float *)&(*(int64_t *)(void *)(sr_balance_heading+8));
  v53 = *((float *)&(*(__int128 *)(void *)(sr_balance_heading+4)) + 2);
  v54 = *((float *)&(*(__int128 *)(void *)(sr_balance_heading+4)) + 3);
  v55 = v44 * *((float *)&(*(__int128 *)(void *)(sr_balance_heading+4)) + 2);
  *(float *)&dword_140404A6C[v3 + 280651370] = *(float *)&v98 + v51;
  v56 = (float)((float)(v55 + (float)(v45 * v54)) + (float)(v52 * v46))
      - (float)((float)((float)(v54 * *(float *)&dword_140404A6C[v3 + 280657934])
                      + (float)(v53 * *(float *)&dword_140404A6C[v3 + 280657933]))
              + (float)(v52 * *(float *)&dword_140404A6C[v3 + 280657935]));
  v57 = fabs(v56);
  if ( v56 <= 0.0 )
    v58 = -v57;
  else
    v58 = v57 * -0.125;
  v59 = *(float *)&dword_140404A6C[v3 + 280651372];
  v60 = v58;
  v61 = (float)(v60 - v59) * 0.0625;
  if ( v61 < -0.0078125 )
  {
    v49 = -0.0078125;
  }
  else if ( v61 <= 0.0078125 )
  {
    v49 = v61;
  }
  *(float *)&dword_140404A6C[v3 + 280651372] = v59 + v49;
  v62 = *(float *)&dword_140404A6C[v3 + 280658003];
  v63 = (float)(1.0
              - fminf(
                  fsqrt(
                    (float)((float)(*(float *)&dword_140404A6C[v3 + 280657992]
                                  * *(float *)&dword_140404A6C[v3 + 280657992])
                          + (float)(*(float *)&dword_140404A6C[v3 + 280657993]
                                  * *(float *)&dword_140404A6C[v3 + 280657993]))
                  + (float)(*(float *)&dword_140404A6C[v3 + 280657994] * *(float *)&dword_140404A6C[v3 + 280657994]))
                * 120.0,
                  1.0))
      - v62;
  if ( v63 < -0.03125 )
  {
    v5 = -0.03125;
  }
  else if ( v63 <= 0.03125 )
  {
    v5 = v63;
  }
  *(float *)&v64 = v62 + v5;
  v65 = 0.0044444446;
  dword_140404A6C[v3 + 280658003] = v64;
  v66 = 0.96875 - (float)(*(float *)&v64 * 0.5);
  v67 = v66 * *(float *)&dword_140404A6C[v3 + 280657992];
  *(float *)&dword_140404A6C[v3 + 280657992] = v67;
  v68 = v44 - v67;
  v69 = v66 * *(float *)&dword_140404A6C[v3 + 280657993];
  *(float *)&dword_140404A6C[v3 + 280657993] = v69;
  v70 = v66 * *(float *)&dword_140404A6C[v3 + 280657994];
  *(float *)&dword_140404A6C[v3 + 280657994] = v70;
  v71 = v46 - v70;
  if ( dword_140404A6C[v3 + 280651325] == 5 )
    v65 = 0.0;
  v72 = fsqrt((float)(v71 * v71) + (float)(v68 * v68));
  if ( v72 > v65 )
  {
    if ( v72 == 0.0 )
    {
      v73 = 0.0;
      v74 = 0.0;
    }
    else
    {
      v73 = v68 * (float)(1.0 / v72);
      v74 = v71 * (float)(1.0 / v72);
    }
    v68 = v73 * v65;
    v71 = v74 * v65;
  }
  *(float *)&dword_140404A6C[v3 + 280657993] = v69;
  v75 = -1;
  *(float *)&dword_140404A6C[v3 + 280657992] = v67 + v68;
  *(float *)&dword_140404A6C[v3 + 280657994] = v71 + v70;
  if ( (int)dword_140404A6C[v3 + 280658139] > 0 )
    v75 = dword_140404A6C[v3 + 280658140];
  if ( (int)dword_140404A6C[v3 + 280658149] > 0 )
    v75 = dword_140404A6C[v3 + 280658150];
  if ( v75 != -1 )
  {
    v76 = 1760LL * v75;
    if ( dword_140404A6C[v76 + 278845898] == 28 )
    {
      *(_QWORD *)&v77 = dword_140404A6C[v3 + 280651377];
      dword_140404A6C[v3 + 280651370] = 0;
      dword_140404A6C[v3 + 280651372] = 0;
      (*(__int128 *)(void *)sr_balance_basis) = xmmword_140278D30;
      (*(float *)&sr_balance_basis[8]) = 1.0;
      (*(__int128 *)(void *)(sr_balance_basis+4)) = xmmword_140278D30;
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_balance_basis), (float *)&dword_1402F6188, v77);
      v78 = (float)(*(float *)&(*(__int128 *)(void *)sr_balance_basis) * 0.875) + *(float *)&dword_140404A6C[v76 + 278846085];
      v79 = 1268LL * (int)dword_140404A6C[v76 + 278845898];
      v80 = (float)(*((float *)&(*(__int128 *)(void *)sr_balance_basis) + 2) * 0.875) + *(float *)&dword_140404A6C[v76 + 278846087];
      v81 = *(float *)&dword_140404A6C[v79 + 278521317];
      v82 = (float)((float)((float)(v81 * *(float *)&dword_140404A6C[v76 + 278845936])
                          + *(float *)&dword_140404A6C[v76 + 278845918])
                  + (float)(*(float *)&dword_140404A6C[v79 + 278521318] * *(float *)&dword_140404A6C[v76 + 278845939]))
          + (float)(*(float *)&dword_140404A6C[v79 + 278521319] * *(float *)&dword_140404A6C[v76 + 278845942]);
      v83 = (float)((float)((float)(v81 * *(float *)&dword_140404A6C[v76 + 278845934])
                          + *(float *)&dword_140404A6C[v76 + 278845916])
                  + (float)(*(float *)&dword_140404A6C[v79 + 278521318] * *(float *)&dword_140404A6C[v76 + 278845937]))
          + (float)(*(float *)&dword_140404A6C[v79 + 278521319] * *(float *)&dword_140404A6C[v76 + 278845940]);
      v84 = v80 - v82;
      v85 = v78 - v83;
      v86 = fsqrt((float)(v84 * v84) + (float)(v85 * v85));
      if ( v86 > 0.5 )
      {
        v78 = (float)((float)(v85 * (float)(1.0 / v86)) * 0.5) + v83;
        v80 = (float)((float)(v84 * (float)(1.0 / v86)) * 0.5) + v82;
      }
      v87 = *(float *)&dword_140404A6C[v3 + 280657980] - v78;
      v88 = *(float *)&dword_140404A6C[v3 + 280657982] - v80;
      v89 = fsqrt((float)(v88 * v88) + (float)(v87 * v87));
      if ( v89 >= 0.5 )
      {
        if ( v89 <= 0.75 )
        {
          v92 = 0.0;
          v93 = 0.0;
        }
        else
        {
          v93 = (float)((float)(1.0 / v89) * v88) * (float)(0.6875 - v89);
          v92 = (float)((float)(1.0 / v89) * v87) * (float)(0.6875 - v89);
        }
      }
      else
      {
        *(_QWORD *)&v90 = dword_140404A6C[v3 + 280651341];
        (*(float *)&sr_balance_basis[8]) = 1.0;
        (*(__int128 *)(void *)sr_balance_basis) = xmmword_140278D30;
        (*(__int128 *)(void *)(sr_balance_basis+4)) = xmmword_140278D30;
        sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_balance_basis), (float *)&dword_1402F6188, v90);
        v91 = (float)(0.5 - v89) + 0.0625;
        v92 = v91 * *((float *)&(*(__int128 *)(void *)(sr_balance_basis+4)) + 2);
        v15 = v91 * *((float *)&(*(__int128 *)(void *)(sr_balance_basis+4)) + 3);
        v93 = v91 * (*(float *)&sr_balance_basis[8]);
      }
      v94 = *(float *)&dword_140404A6C[v3 + 280657934] * 0.5;
      v95 = *(float *)&dword_140404A6C[v3 + 280657935] * 0.5;
      *(float *)&dword_140404A6C[v3 + 280657992] = (float)((float)(v92 * 0.0625)
                                                         - (float)(*(float *)&dword_140404A6C[v3 + 280657933] * 0.5))
                                                 + *(float *)&dword_140404A6C[v3 + 280657992];
      *(float *)&dword_140404A6C[v3 + 280657993] = (float)((float)(v15 * 0.0625) - v94)
                                                 + *(float *)&dword_140404A6C[v3 + 280657993];
      *(float *)&dword_140404A6C[v3 + 280657994] = (float)((float)(v93 * 0.0625) - v95)
                                                 + *(float *)&dword_140404A6C[v3 + 280657994];
    }
  }
  dword_140404A6C[v3 + 280657993] = 0;
  *(float *)&dword_140404A6C[v3 + 280657980] = *(float *)&dword_140404A6C[v3 + 280657992]
                                             + *(float *)&dword_140404A6C[v3 + 280657980];
  *(float *)&dword_140404A6C[v3 + 280657981] = *(float *)&dword_140404A6C[v3 + 280657981]
                                             + *(float *)&dword_140404A6C[v3 + 280657993];
  *(float *)&dword_140404A6C[v3 + 280657982] = *(float *)&dword_140404A6C[v3 + 280657982]
                                             + *(float *)&dword_140404A6C[v3 + 280657994];
  sub_1400B2440(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B4DA0) ----------------------------------------------------
__int64            sub_1400B4DA0(int a1, int a2, int a3, unsigned int *a4, unsigned int *a5, float *a6)
{
  __int64 v6; // rbp
  __int64 v8; // rdi
  __int64 v9; // r15
  int v10; // r8d
  unsigned int *v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // r8d
  __int64 v14; // rdi
  bool v15; // zf
  unsigned int v16; // edx
  int v17; // ecx
  unsigned int *v18; // rax
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  __int64 v23; // rax
  float v24; // xmm7_4
  float v25; // xmm0_4
  __int64 v26; // rbx
  float v27; // xmm2_4
  float v28; // xmm8_4
  float v29; // xmm1_4
  float v30; // xmm9_4
  float v31; // xmm10_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm4_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm5_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm2_4
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm6_4
  float v47; // xmm4_4
  float v48; // xmm3_4
  float v49; // xmm1_4
  float v50; // xmm8_4
  float v51; // xmm5_4
  double v52; // xmm2_8
  float v53; // xmm0_4
  float v54; // xmm9_4
  float v55; // xmm10_4
  float v56; // xmm3_4
  float v57; // xmm4_4
  float v58; // xmm5_4
  float v59; // xmm0_4
  float v60; // xmm6_4
  float v61; // xmm7_4
  double v62; // xmm0_8
  float v63; // xmm1_4
  float v64; // xmm6_4
  float v65; // xmm8_4
  float v66; // xmm7_4
  float v67; // xmm1_4
  float v68; // xmm2_4
  float v69; // xmm6_4
  unsigned int v70; // xmm1_4
  float v71; // xmm7_4
  __int64 v73; // [rsp+0h] [rbp-D8h] BYREF
  float v74; // [rsp+20h] [rbp-B8h]
  float v75; // [rsp+24h] [rbp-B4h]
  float v76[4]; // [rsp+28h] [rbp-B0h] BYREF
  float v77[10]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v78; // [rsp+60h] [rbp-78h]

  v6 = 1760LL * a3;
  v8 = a2;
  v9 = a1;
  if ( dword_140404A6C[v6 + 278845898] != 39 )
  {
    v10 = 0;
    v11 = &dword_140404A6C[486149253];
    while ( *v11 )
    {
      ++v10;
      v11 += 61;
      if ( (__int64)v11 >= (__int64)&dword_140404A6C[487148677] )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    if ( v10 != -1 )
    {
      v12 = 61LL * v10;
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v12 + 486149254]), 0, 0xF0u);
      v13 = dword_140404A6C[v6 + 278845915];
      dword_140404A6C[v12 + 486149253] = 1;
      dword_140404A6C[v12 + 486149254] = 7;
      *(_QWORD *)&dword_140404A6C[v12 + 486149256] = 0;
      dword_140404A6C[v12 + 486149292] = v13;
      v14 = 28664 * v9 + 312 * v8;
      v15 = dword_140404A6C[v6 + 278845898] == 28;
      v16 = *(unsigned int *)((char *)&dword_140404A6C[280651439] + v14);
      dword_140404A6C[v12 + 486149291] = v16;
      dword_140404A6C[v12 + 486149281] = 1048576000;
      dword_140404A6C[v12 + 486149282] = 1052770304;
      dword_140404A6C[v12 + 486149267] = *a4;
      dword_140404A6C[v12 + 486149268] = a4[1];
      dword_140404A6C[v12 + 486149269] = a4[2];
      dword_140404A6C[v12 + 486149270] = *a5;
      dword_140404A6C[v12 + 486149271] = a5[1];
      dword_140404A6C[v12 + 486149272] = a5[2];
      if ( !v15 )
      {
        v17 = 0;
        v18 = &dword_140404A6C[486149253];
        while ( *v18 )
        {
          ++v17;
          v18 += 61;
          if ( (__int64)v18 >= (__int64)&dword_140404A6C[487148677] )
            return 0; /* compatibility result discarded by all reviewed callers */
        }
        if ( v17 != -1 )
        {
          v19 = *(float *)((char *)&dword_140404A6C[280651453] + v14);
          v20 = *(float *)((char *)&dword_140404A6C[280651454] + v14);
          v21 = *(float *)((char *)&dword_140404A6C[280651452] + v14);
          v22 = *(float *)((char *)&dword_140404A6C[280651455] + v14);
          v23 = 61LL * v17;
          v24 = *(float *)&dword_140404A6C[v6 + 278845940];
          v25 = *(float *)&dword_140404A6C[v6 + 278845938] * v19;
          v26 = 18LL * v17;
          v27 = (float)((float)(v21 * *(float *)&dword_140404A6C[v6 + 278845934])
                      + (float)(v19 * *(float *)&dword_140404A6C[v6 + 278845935]))
              + (float)(v20 * *(float *)&dword_140404A6C[v6 + 278845936]);
          v28 = *(float *)&dword_140404A6C[v6 + 278845941];
          v29 = *(float *)&dword_140404A6C[v6 + 278845939] * v20;
          dword_140404A6C[v23 + 486149253] = 1;
          v77[0] = v27;
          v30 = *(float *)&dword_140404A6C[v6 + 278845942];
          v31 = *(float *)&dword_140404A6C[v6 + 278845937];
          v74 = v19;
          dword_140404A6C[v23 + 486149254] = 8;
          v75 = v20;
          *(_QWORD *)&dword_140404A6C[v23 + 486149256] = 0;
          v32 = (float)(v31 * v21) + v25;
          dword_140404A6C[v23 + 486149291] = v16;
          dword_140404A6C[v23 + 486149292] = v13;
          v33 = v28 * v19;
          dword_140404A6C[v23 + 486149281] = 1031798784;
          v34 = *(float *)((char *)&dword_140404A6C[280651456] + v14);
          v35 = v32 + v29;
          dword_140404A6C[v23 + 486149287] = 1049135241;
          dword_140404A6C[v23 + 486149282] = 1056964608;
          v36 = v30 * v20;
          dword_140404A6C[36 * v17 + 485543046] = 1056964608;
          v37 = *(float *)((char *)&dword_140404A6C[280651457] + v14);
          v77[1] = v35;
          v38 = (float)(v24 * v21) + v33;
          v39 = v34 * *(float *)&dword_140404A6C[v6 + 278845935];
          v40 = v38 + v36;
          v41 = v37 * *(float *)&dword_140404A6C[v6 + 278845936];
          v77[2] = v40;
          v42 = (float)(v22 * *(float *)&dword_140404A6C[v6 + 278845934]) + v39;
          v43 = v34 * *(float *)&dword_140404A6C[v6 + 278845938];
          v44 = v42 + v41;
          v45 = v37 * *(float *)&dword_140404A6C[v6 + 278845939];
          v77[3] = v44;
          v77[4] = (float)((float)(v22 * v31) + v43) + v45;
          v77[5] = (float)((float)(v22 * v24) + (float)(v34 * v28)) + (float)(v37 * v30);
          v46 = *(float *)((char *)&dword_140404A6C[280651458] + v14);
          v47 = *(float *)((char *)&dword_140404A6C[280651459] + v14) * v28;
          v48 = (float)(v46 * v31)
              + (float)(*(float *)((char *)&dword_140404A6C[280651459] + v14)
                      * *(float *)&dword_140404A6C[v6 + 278845938]);
          v49 = *(float *)((char *)&dword_140404A6C[280651460] + v14) * *(float *)&dword_140404A6C[v6 + 278845939];
          v50 = 0.0;
          v51 = *(float *)((char *)&dword_140404A6C[280651460] + v14) * v30;
          v77[6] = (float)((float)(*(float *)((char *)&dword_140404A6C[280651459] + v14)
                                 * *(float *)&dword_140404A6C[v6 + 278845935])
                         + (float)(v46 * *(float *)&dword_140404A6C[v6 + 278845934]))
                 + (float)(*(float *)((char *)&dword_140404A6C[280651460] + v14)
                         * *(float *)&dword_140404A6C[v6 + 278845936]);
          *(_QWORD *)&v52 = *((unsigned int *)a6 + 3);
          v53 = fabs(a6[3]);
          v77[7] = v48 + v49;
          v77[8] = (float)((float)(v46 * v24) + v47) + v51;
          if ( v53 <= 0.0 )
          {
            v54 = v74;
            v55 = v75;
          }
          else
          {
            sub_14007B2A0((__int64)v77, a6, v52);
            v54 = *(float *)((char *)&dword_140404A6C[280651453] + v14);
            v55 = *(float *)((char *)&dword_140404A6C[280651454] + v14);
          }
          sub_14010E370(v76, v77);
          v56 = -v76[0];
          v57 = -v76[1];
          v58 = -v76[2];
          v59 = fsqrt((float)((float)(v57 * v57) + (float)(v56 * v56)) + (float)(v58 * v58));
          if ( v59 == 0.0 )
          {
            v60 = 0.0;
            v61 = 0.0;
          }
          else
          {
            v50 = (float)(1.0 / v59) * v56;
            v60 = (float)(1.0 / v59) * v57;
            v61 = (float)(1.0 / v59) * v58;
          }
          v62 = acos(fminf(fmaxf(v76[3], -1.0), 1.0));
          v63 = v62 + v62;
          v64 = v60 * v63;
          v65 = v50 * v63;
          v66 = v61 * v63;
          v67 = (float)(v64 * *(float *)((char *)&dword_140404A6C[280651456] + v14)) + (float)(v54 * v65);
          v68 = (float)(v64 * *(float *)((char *)&dword_140404A6C[280651457] + v14)) + (float)(v55 * v65);
          v69 = (float)(v64 * *(float *)((char *)&dword_140404A6C[280651455] + v14))
              + (float)(v65 * *(float *)((char *)&dword_140404A6C[280651452] + v14));
          *(float *)&v70 = v67 + (float)(v66 * *(float *)((char *)&dword_140404A6C[280651459] + v14));
          *(float *)&v62 = v66 * *(float *)((char *)&dword_140404A6C[280651460] + v14);
          v71 = v66 * *(float *)((char *)&dword_140404A6C[280651458] + v14);
          dword_140404A6C[2 * v26 + 485543034] = v70;
          *(float *)&dword_140404A6C[2 * v26 + 485543035] = v68 + *(float *)&v62;
          *(float *)&dword_140404A6C[2 * v26 + 485543033] = (float)(v69 + v71) * 0.25;
          *(float *)&dword_140404A6C[2 * v26 + 485543034] = *(float *)&dword_140404A6C[2 * v26 + 485543034] * 0.25;
          *(float *)&dword_140404A6C[2 * v26 + 485543035] = *(float *)&dword_140404A6C[2 * v26 + 485543035] * 0.25;
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
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

//----- (00000001400B5460) ----------------------------------------------------
__int64            sub_1400B5460(int a1, int a2)
{
  float v2; // xmm11_4
  float v3; // xmm9_4
  float v4; // xmm7_4
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r15
  float v10; // xmm10_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  BOOL v15; // ecx
  unsigned int v16; // xmm7_4
  unsigned int v17; // xmm8_4
  unsigned int v18; // xmm10_4
  unsigned int *v19; // rax
  float v20; // xmm6_4
  signed int v21; // edi
  __int64 v22; // rbx
  float v23; // xmm6_4
  __int64 v24; // r12
  float v25; // xmm0_4
  unsigned int v26; // eax
  float v27; // xmm1_4
  float v28; // xmm1_4
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // xmm0_4
  int v32; // eax
  double v33; // xmm2_8
  float *v34; // r14
  float v35; // xmm13_4
  float v36; // xmm4_4
  float v37; // xmm5_4
  float v38; // xmm12_4
  float v39; // xmm4_4
  float v40; // xmm5_4
  float v41; // xmm12_4
  float v42; // xmm7_4
  float v43; // xmm6_4
  float v44; // xmm8_4
  float v45; // xmm3_4
  float v46; // xmm4_4
  float v47; // xmm7_4
  float v48; // xmm6_4
  float v49; // xmm8_4
  double v50; // xmm0_8
  float v51; // xmm1_4
  float v52; // xmm7_4
  float v53; // xmm6_4
  float v54; // xmm8_4
  float v55; // xmm3_4
  float v56; // xmm0_4
  float v57; // xmm7_4
  float v58; // xmm6_4
  float v59; // xmm8_4
  float v60; // xmm3_4
  float v61; // xmm0_4
  unsigned int v62; // xmm2_4
  float v63; // xmm1_4
  float v64; // xmm6_4
  float v65; // xmm8_4
  bool v66; // zf
  float v67; // xmm12_4
  float v68; // xmm11_4
  float v69; // xmm0_4
  unsigned int v70; // xmm11_4
  float v71; // xmm12_4
  float v72; // xmm0_4
  float v73; // xmm11_4
  float v74; // xmm2_4
  __int64 v76; // [rsp+8h] [rbp-D9h] BYREF
  __m128 v77[2]; // [rsp+28h] [rbp-B9h] BYREF
  int v78; // [rsp+48h] [rbp-99h]
  float v79; // [rsp+50h] [rbp-91h] BYREF
  float v80; // [rsp+54h] [rbp-8Dh]
  float v81; // [rsp+58h] [rbp-89h]
  float v82; // [rsp+5Ch] [rbp-85h]
  __int128 v83; // [rsp+60h] [rbp-81h]

  v2 = *(float *)&dword_1402F6188;
  v3 = *(float *)&dword_1402F618C;
  v4 = *(float *)&dword_1402F6190;
  v7 = 7166LL * a1;
  v8 = 234LL * (a2 + 4);
  v9 = v7 * 4 + 220LL * a2;
  v10 = *(float *)&dword_140404A6C[v8 + 280651440 + v7];
  v11 = *(float *)&dword_140404A6C[v8 + 280651441 + v7];
  v12 = *(float *)&dword_140404A6C[v8 + 280651442 + v7];
  v79 = (float)(*(float *)&dword_1402F6188 * 0.375) + v10;
  v80 = (float)(*(float *)&dword_1402F618C * 0.375) + v11;
  v81 = (float)(*(float *)&dword_1402F6190 * 0.375) + v12;
  v13 = sin(*(float *)((char *)&dword_140404A6C[280658055] + v9)) * 0.1875;
  v14 = v13 - 0.03125;
  SR_VEC_LANES(128, v77[0], f32)[0] = (float)(v2 * v14) + v10;
  SR_VEC_LANES(128, v77[0], f32)[1] = (float)(v3 * v14) + v11;
  SR_VEC_LANES(128, v77[0], f32)[2] = (float)(v4 * v14) + v12;
  v15 = sub_1400B91E0(a1, &v79, SR_VEC_LANES(128, v77[0], f32)) != 0;
  if ( *(float *)&dword_140404A6C[v7 + 280651378 + v8] >= 0.0 && v15 )
  {
    v16 = dword_1402F6188;
    v17 = dword_1402F618C;
    v18 = dword_1402F6190;
    v19 = &dword_140404A6C[486149253];
    v20 = *(float *)&dword_140404A6C[73006982];
    v21 = 0;
    dword_140404A6C[73006984] = dword_1402F6188;
    dword_140404A6C[73006985] = dword_1402F618C;
    dword_140404A6C[73006986] = dword_1402F6190;
    *(unsigned int *)((char *)&dword_140404A6C[280658054] + v9) = dword_140404A6C[73006982];
    while ( *v19 )
    {
      ++v21;
      v19 += 61;
      if ( (__int64)v19 >= (__int64)&dword_140404A6C[487148677] )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    if ( v21 != -1 )
    {
      v22 = 61LL * v21;
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v22 + 486149254]), 0, 0xF0u);
      v23 = v20 - SR_VEC_LANES(128, v77[0], f32)[1];
      v24 = v8 * 4 + v7 * 4;
      v25 = *(float *)&dword_140404A6C[73006983] - SR_VEC_LANES(128, v77[0], f32)[2];
      v26 = dword_140404A6C[v8 + 280651439 + v7];
      v27 = (float)(*(float *)&dword_140404A6C[73006981] - SR_VEC_LANES(128, v77[0], f32)[0]) * *(float *)&v16;
      dword_140404A6C[v22 + 486149253] = 1;
      dword_140404A6C[v22 + 486149254] = 9;
      dword_140404A6C[v22 + 486149256] = 0;
      dword_140404A6C[v22 + 486149291] = v26;
      v28 = (float)(v27 + (float)(v23 * *(float *)&v17)) + (float)(v25 * *(float *)&v18);
      if ( v28 >= 0.0625 )
        v28 = 0.0625;
      v29 = dword_140404A6C[v7 + 280657986];
      v30 = dword_140404A6C[v7 + 280651325];
      *(float *)&v31 = *(float *)((char *)&dword_140404A6C[280651479] + v24)
                     + *(float *)((char *)&dword_140404A6C[280651479] + v24);
      *(float *)&dword_140404A6C[v22 + 486149278] = v28;
      dword_140404A6C[v22 + 486149281] = 1056964608;
      dword_140404A6C[v22 + 486149282] = 1056964608;
      dword_140404A6C[v22 + 486149257] = 0;
      dword_140404A6C[v22 + 486149283] = v16;
      dword_140404A6C[v22 + 486149284] = v17;
      dword_140404A6C[v22 + 486149285] = v18;
      dword_140404A6C[v22 + 486149286] = 1082130432;
      *(_QWORD *)&dword_140404A6C[v22 + 486149267] = 0;
      dword_140404A6C[v22 + 486149269] = 0;
      dword_140404A6C[v22 + 486149302] = v29;
      dword_140404A6C[v22 + 486149303] = dword_140404A6C[v7 + 280657987];
      dword_140404A6C[v22 + 486149304] = dword_140404A6C[v7 + 280657988];
      dword_140404A6C[v22 + 486149273] = v31;
      dword_140404A6C[v22 + 486149274] = 1044381696;
      if ( v30 == 2 )
      {
        dword_140404A6C[v22 + 486149273] = 0;
      }
      else if ( v30 == 3 )
      {
        dword_140404A6C[v22 + 486149274] = 1065353216;
      }
      v32 = *(unsigned int *)((char *)&dword_140404A6C[280658026] + v9);
      if ( !v32 || v32 == 3 )
      {
        dword_140404A6C[v22 + 486149286] = 0;
        dword_140404A6C[v22 + 486149281] = 1015021568;
        dword_140404A6C[v22 + 486149282] = 1015021568;
      }
      if ( v30 == 2 )
        dword_140404A6C[v22 + 486149286] = 1036831949;
      v78 = 1065353216;
      v77[0] = ((__m128)_mm_load_si128((const __m128i *)&xmmword_140278D30));
      v77[1] = ((__m128)_mm_load_si128((const __m128i *)&xmmword_140278D30));
      if ( v32 == 1 )
        *(_QWORD *)&v33 = *(unsigned int *)((char *)&dword_140404A6C[280658057] + v9);
      else
        *(_QWORD *)&v33 = dword_140404A6C[v7 + 280651341];
      sub_14007B2A0((__int64)v77, &SR_VEC_LANES(128, v77[0], f32)[3], v33);
      sub_14007B2A0(
        (__int64)v77,
        SR_VEC_LANES(128, v77[0], f32),
        sr_export_float_lane_container(*(unsigned int *)((char *)&dword_140404A6C[280658055] + v9) ^ 0x80000000LL));
      sub_14010E370(&v79, SR_VEC_LANES(128, v77[0], f32));
      v34 = (float *)((char *)&dword_140404A6C[280651452] + v24);
      sub_14010E370(SR_VEC_LANES(128, v77[0], f32), v34);
      v35 = SR_VEC_LANES(128, v77[0], f32)[3];
      v36 = SR_VEC_LANES(128, v77[0], f32)[2];
      v37 = SR_VEC_LANES(128, v77[0], f32)[0];
      v38 = SR_VEC_LANES(128, v77[0], f32)[1];
      if ( (float)((float)((float)(v82 * SR_VEC_LANES(128, v77[0], f32)[3]) + (float)(v81 * SR_VEC_LANES(128, v77[0], f32)[2]))
                 + (float)((float)(v79 * SR_VEC_LANES(128, v77[0], f32)[0]) + (float)(v80 * SR_VEC_LANES(128, v77[0], f32)[1]))) < 0.0 )
      {
        v77[0] = _mm_xor_ps(v77[0], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
        v36 = SR_VEC_LANES(128, v77[0], f32)[2];
        v38 = SR_VEC_LANES(128, v77[0], f32)[1];
        v37 = SR_VEC_LANES(128, v77[0], f32)[0];
        v35 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v77[0], v77[0], 255), f32)[0];
      }
      v39 = -v36;
      v40 = -v37;
      v41 = -v38;
      v42 = (float)((float)((float)(v82 * v40) + (float)(v35 * v79)) + (float)(v80 * v39)) - (float)(v81 * v41);
      v43 = (float)((float)((float)(v82 * v41) - (float)(v79 * v39)) + (float)(v35 * v80)) + (float)(v81 * v40);
      v44 = (float)((float)((float)(v82 * v39) + (float)(v79 * v41)) - (float)(v80 * v40)) + (float)(v35 * v81);
      v45 = (float)((float)((float)(v82 * v35) - (float)(v79 * v40)) - (float)(v80 * v41)) - (float)(v81 * v39);
      v46 = fsqrt((float)((float)(v42 * v42) + (float)(v43 * v43)) + (float)(v44 * v44));
      if ( v46 == 0.0 )
      {
        v47 = 0.0;
        v48 = 0.0;
        v49 = 0.0;
      }
      else
      {
        v47 = v42 * (float)(1.0 / v46);
        v48 = v43 * (float)(1.0 / v46);
        v49 = v44 * (float)(1.0 / v46);
      }
      v50 = acos(fminf(fmaxf(v45, -1.0), 1.0));
      v51 = v50 + v50;
      v52 = v47 * v51;
      v53 = v48 * v51;
      v54 = v49 * v51;
      if ( !*(unsigned int *)((char *)&dword_140404A6C[280658026] + v9) )
      {
        v52 = 0.0;
        v53 = 0.0;
        v54 = 0.0;
      }
      v55 = fsqrt((float)((float)(v53 * v53) + (float)(v52 * v52)) + (float)(v54 * v54));
      if ( v55 > 0.25 )
      {
        v52 = (float)(v52 * (float)(1.0 / v55)) * 0.25;
        v53 = (float)(v53 * (float)(1.0 / v55)) * 0.25;
        v54 = (float)(v54 * (float)(1.0 / v55)) * 0.25;
      }
      if ( LOBYTE(dword_140404A6C[284024765]) && v55 > 0.0625 )
      {
        v56 = fsqrt((float)((float)(v53 * v53) + (float)(v52 * v52)) + (float)(v54 * v54));
        if ( v56 == 0.0 )
        {
          v57 = 0.0;
          v58 = 0.0;
          v59 = 0.0;
        }
        else
        {
          v57 = v52 * (float)(1.0 / v56);
          v58 = v53 * (float)(1.0 / v56);
          v59 = v54 * (float)(1.0 / v56);
        }
        v52 = v57 * 0.0625;
        v53 = v58 * 0.0625;
        v54 = v59 * 0.0625;
      }
      v60 = v53 * v34[4];
      v61 = v52 * v34[1];
      *(float *)&v62 = (float)((float)(v53 * v34[3]) + (float)(v52 * *v34)) + (float)(v54 * v34[6]);
      v63 = v54 * v34[7];
      v64 = (float)(v53 * v34[5]) + (float)(v52 * v34[2]);
      v65 = v54 * v34[8];
      *(unsigned int *)((char *)&dword_140404A6C[280658023] + v9) = v21;
      ++*(unsigned int *)((char *)&dword_140404A6C[280651515] + v24);
      v66 = dword_140404A6C[v7 + 280651325] == 3;
      dword_140404A6C[v22 + 486149264] = v62;
      dword_140404A6C[v7 + 280651324] = 1;
      *(float *)&dword_140404A6C[v22 + 486149266] = v64 + v65;
      *(float *)&dword_140404A6C[v22 + 486149265] = (float)(v60 + v61) + v63;
      if ( !v66
        && (int)dword_140404A6C[v7 + 280657908] > 0
        && (dword_140404A6C[v7 + 280651436] & 4) == 0
        && *(unsigned int *)((char *)&dword_140404A6C[280658026] + v9) == 1
        && *(float *)((char *)&dword_140404A6C[280658053] + v9) == 0.0 )
      {
        dword_140404A6C[v7 + 280651325] = 3;
        *(unsigned int *)((char *)&dword_140404A6C[280658026] + v9) = 1;
        dword_140404A6C[v7 + 280658004] = a2 ^ 1;
        v67 = *(float *)&dword_140404A6C[282486299];
        v68 = *(float *)&dword_140404A6C[282486350];
        v69 = *(float *)&dword_140404A6C[282486299];
        dword_140404A6C[v7 + 280657911] = dword_140404A6C[v7 + 280651394];
        dword_140404A6C[v7 + 280657912] = dword_140404A6C[v7 + 280651393];
        dword_140404A6C[v7 + 280657979] = 1075235812;
        dword_140404A6C[v7 + 280658028] = 0;
        dword_140404A6C[v7 + 280658083] = 0;
        *(float *)&dword_140404A6C[v7 + 280658029] = (float)((float)(v68 * *(float *)&dword_140404A6C[v7 + 280652313])
                                                           + *(float *)&dword_140404A6C[v7 + 280652298])
                                                   - (float)((float)(v69 * *(float *)&dword_140404A6C[v7 + 280651452])
                                                           + *(float *)&dword_140404A6C[v7 + 280651440]);
        *(float *)&dword_140404A6C[v7 + 280658030] = (float)((float)(v68 * *(float *)&dword_140404A6C[v7 + 280652314])
                                                           + *(float *)&dword_140404A6C[v7 + 280652299])
                                                   - (float)((float)(v67 * *(float *)&dword_140404A6C[v7 + 280651453])
                                                           + *(float *)&dword_140404A6C[v7 + 280651441]);
        *(float *)&v70 = (float)((float)(v68 * *(float *)&dword_140404A6C[v7 + 280652315])
                               + *(float *)&dword_140404A6C[v7 + 280652300])
                       - (float)((float)(v67 * *(float *)&dword_140404A6C[v7 + 280651454])
                               + *(float *)&dword_140404A6C[v7 + 280651442]);
        v71 = *(float *)&dword_140404A6C[282486374];
        v72 = *(float *)&dword_140404A6C[282486374];
        dword_140404A6C[v7 + 280658031] = v70;
        v73 = *(float *)&dword_140404A6C[282486425];
        v74 = *(float *)&dword_140404A6C[282486425];
        *(float *)&dword_140404A6C[v7 + 280658084] = (float)((float)(*(float *)&dword_140404A6C[282486425]
                                                                   * *(float *)&dword_140404A6C[v7 + 280652547])
                                                           + *(float *)&dword_140404A6C[v7 + 280652532])
                                                   - (float)((float)(v72 * *(float *)&dword_140404A6C[v7 + 280651452])
                                                           + *(float *)&dword_140404A6C[v7 + 280651440]);
        *(float *)&dword_140404A6C[v7 + 280658085] = (float)((float)(v74 * *(float *)&dword_140404A6C[v7 + 280652548])
                                                           + *(float *)&dword_140404A6C[v7 + 280652533])
                                                   - (float)((float)(v71 * *(float *)&dword_140404A6C[v7 + 280651453])
                                                           + *(float *)&dword_140404A6C[v7 + 280651441]);
        *(float *)&dword_140404A6C[v7 + 280658086] = (float)((float)(v73 * *(float *)&dword_140404A6C[v7 + 280652549])
                                                           + *(float *)&dword_140404A6C[v7 + 280652534])
                                                   - (float)((float)(v71 * *(float *)&dword_140404A6C[v7 + 280651454])
                                                           + *(float *)&dword_140404A6C[v7 + 280651442]);
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84884: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 18399E2D8: using guessed type unsigned int;
// 18399E3A4: using guessed type unsigned int;
// 18399E404: using guessed type unsigned int;
// 18399E4D0: using guessed type unsigned int;

//----- (00000001400B5E70) ----------------------------------------------------
int            sub_1400B5E70(int a1)
{
  unsigned int v1; // r11d
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int *v6; // rdi
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // r8d
  unsigned int *v10; // rsi
  unsigned int v11; // r9d
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // xmm1_4
  unsigned int v21; // xmm2_4
  unsigned int v22; // xmm3_4

  v1 = dword_140404A6C[283831312];
  v2 = a1;
  if ( dword_140404A6C[283831312] == 6 && (int)dword_140404A6C[7166 * a1 + 280658299] < 50 )
    dword_140404A6C[7166 * a1 + 280651318] = 0;
  v3 = 7166LL * a1;
  v4 = a1;
  v5 = (int)dword_140404A6C[v3 + 280651305];
  if ( (_DWORD)v5 != -1 && dword_140404A6C[3597 * v5 + 71859139] && (int)dword_140404A6C[v3 + 280658299] < 50 )
    dword_140404A6C[v3 + 280651318] = 0;
  if ( dword_140404A6C[v3 + 280651319] )
  {
    LODWORD(v5) = dword_140404A6C[v3 + 280651320];
    if ( (int)v5 > 0 )
    {
      LODWORD(v5) = v5 - 1;
      dword_140404A6C[v3 + 280651320] = v5;
    }
    v6 = &dword_140404A6C[v3 + 280658299];
    v7 = dword_140404A6C[v3 + 280658299];
    if ( v7 < 50 )
      dword_140404A6C[v3 + 280651320] = 1800;
  }
  else
  {
    v6 = &dword_140404A6C[v3 + 280658299];
    v7 = dword_140404A6C[v3 + 280658299];
    if ( v7 < 75 )
    {
      LODWORD(v5) = 2 * (75 - v7);
      if ( (int)v5 > 60 )
        LODWORD(v5) = 60;
      if ( (int)dword_140404A6C[v3 + 280651333] < (int)v5 )
        dword_140404A6C[v3 + 280651333] = v5;
    }
  }
  if ( (int)dword_140404A6C[v3 + 280651318] > 0 )
  {
    if ( v7 < 0 )
      *v6 = 0;
    v8 = dword_140404A6C[7166 * v2 + 280658302];
    if ( v8 < 0 )
    {
      v8 = 0;
      dword_140404A6C[7166 * v4 + 280658302] = 0;
    }
    if ( (dword_140404A6C[7166 * v4 + 280658304] & 0x80000000) != 0 )
      dword_140404A6C[7166 * v4 + 280658304] = 0;
    if ( (dword_140404A6C[7166 * v4 + 280658306] & 0x80000000) != 0 )
      dword_140404A6C[7166 * v4 + 280658306] = 0;
    if ( (dword_140404A6C[7166 * v4 + 280658308] & 0x80000000) != 0 )
      dword_140404A6C[7166 * v4 + 280658308] = 0;
    if ( (dword_140404A6C[7166 * v4 + 280658310] & 0x80000000) != 0 )
      dword_140404A6C[7166 * v4 + 280658310] = 0;
    if ( (dword_140404A6C[7166 * v4 + 280658312] & 0x80000000) != 0 )
      dword_140404A6C[7166 * v4 + 280658312] = 0;
    v9 = dword_140404A6C[v3 + 280651319];
    if ( v9 )
      goto LABEL_41;
    if ( v8 <= 0 )
      dword_140404A6C[v3 + 280651318] = 0;
    if ( (int)dword_140404A6C[7166 * v4 + 280658304] > 0 )
    {
LABEL_41:
      v10 = &dword_140404A6C[v3 + 280658301];
      LODWORD(v5) = 63;
      v11 = dword_140404A6C[v3 + 280658301];
      if ( !v11 )
        LODWORD(v5) = 31;
      if ( v9 )
        LODWORD(v5) = 7;
    }
    else
    {
      dword_140404A6C[v3 + 280651318] = 0;
      v10 = &dword_140404A6C[v3 + 280658301];
      LODWORD(v5) = 63;
      v11 = dword_140404A6C[v3 + 280658301];
      if ( !v11 )
        LODWORD(v5) = 31;
    }
    v12 = dword_140404A6C[283831474];
    if ( (dword_140404A6C[283831474] & (unsigned int)v5) == 0 )
    {
      LODWORD(v5) = *v6;
      if ( (int)*v6 < 100 )
      {
        LODWORD(v5) = v5 + 1;
        *v6 = v5;
      }
    }
    if ( !v11 || v9 )
    {
      if ( !(_BYTE)v12 )
      {
        v13 = dword_140404A6C[v3 + 280658300];
        if ( v13 < 100 )
          dword_140404A6C[v3 + 280658300] = v13 + 1;
      }
      LODWORD(v5) = 15;
      if ( !v9 )
        LODWORD(v5) = 63;
      if ( ((unsigned int)v5 & v12) == 0 )
      {
        v14 = dword_140404A6C[7166 * v2 + 280658302];
        if ( v14 < 100 )
          dword_140404A6C[7166 * v2 + 280658302] = v14 + 1;
        v15 = dword_140404A6C[7166 * v2 + 280658304];
        if ( v15 < 100 )
          dword_140404A6C[7166 * v2 + 280658304] = v15 + 1;
        v16 = dword_140404A6C[7166 * v2 + 280658306];
        if ( v16 < 100 )
          dword_140404A6C[7166 * v2 + 280658306] = v16 + 1;
        v17 = dword_140404A6C[7166 * v2 + 280658308];
        if ( v17 < 100 )
          dword_140404A6C[7166 * v2 + 280658308] = v17 + 1;
        v18 = dword_140404A6C[7166 * v2 + 280658310];
        if ( v18 < 100 )
          dword_140404A6C[7166 * v2 + 280658310] = v18 + 1;
        LODWORD(v5) = dword_140404A6C[7166 * v2 + 280658312];
        if ( (int)v5 < 100 )
        {
          LODWORD(v5) = v5 + 1;
          dword_140404A6C[7166 * v2 + 280658312] = v5;
        }
      }
    }
    if ( *v10 )
    {
      if ( v1 == 6 )
      {
        LODWORD(v5) = rand();
        v12 = dword_140404A6C[283831474];
        if ( (v5 & 0x1FF) == 0 )
          *v10 = 0;
      }
      v19 = dword_140404A6C[v3 + 280658300];
      if ( v19 < 20 )
      {
        LODWORD(v5) = 2 * v19 + 10;
        if ( (int)*v6 > (int)v5 )
          *v6 = v5;
      }
      if ( v19 > 0 )
      {
        LODWORD(v5) = v12 ^ (v2 * v2 * v2);
        if ( (unsigned __int8)v12 == (unsigned __int8)(v2 * v2 * v2) )
        {
          if ( !dword_140404A6C[v3 + 280651319] )
          {
            LODWORD(v5) = v19 - 3;
            dword_140404A6C[v3 + 280658300] = v19 - 3;
          }
          *(float *)&v20 = (float)(*(float *)&dword_1402F6188 * 0.5) + *(float *)&dword_140404A6C[v3 + 280651518];
          *(float *)&v21 = (float)(*(float *)&dword_1402F618C * 0.5) + *(float *)&dword_140404A6C[v3 + 280651519];
          *(float *)&v22 = (float)(*(float *)&dword_1402F6190 * 0.5) + *(float *)&dword_140404A6C[v3 + 280651520];
          if ( dword_140404A6C[456202453] )
          {
            v5 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
            HIWORD(dword_140404A6C[308307070]) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v5) = 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v5) = v12;
            *(unsigned int *)((char *)&dword_140404A6C[297756287] + v5) = v20;
            *(unsigned int *)((char *)&dword_140404A6C[297756288] + v5) = v21;
            *(unsigned int *)((char *)&dword_140404A6C[297756289] + v5) = v22;
            *(unsigned int *)((char *)&dword_140404A6C[297756290] + v5) = v20;
            *(unsigned int *)((char *)&dword_140404A6C[297756291] + v5) = v21;
            *(unsigned int *)((char *)&dword_140404A6C[297756292] + v5) = v22;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v5) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v5) = 3;
          }
        }
      }
    }
    if ( !dword_140404A6C[v3 + 280651319] && (int)dword_140404A6C[v3 + 280658300] <= 10 )
      dword_140404A6C[v3 + 280651318] = 0;
  }
  else
  {
    dword_140404A6C[v3 + 280658301] = 0;
    *v6 = 0;
  }
  return v5;
}

// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFAAC: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400B62E0) ----------------------------------------------------
__int64            sub_1400B62E0(int a1)
{
  __int64 v1; // r10
  signed int v2; // ecx
  __int64 v3; // rdi
  int v4; // eax
  int v5; // r15d
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rsi
  bool v9; // cc
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  unsigned int v17; // edx
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // r13d
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  unsigned int v26; // edx
  int v27; // edx
  int v28; // eax
  __int64 v29; // r12
  __int64 v30; // rbx
  signed int v31; // r9d
  double v32; // xmm2_8
  float v33; // xmm3_4
  float v34; // xmm5_4
  float v35; // xmm4_4
  float v36; // xmm1_4
  __int64 v37; // r8
  __int64 v38; // rdx
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm3_4
  float v42; // xmm5_4
  float v43; // xmm4_4
  float v44; // xmm0_4
  float v45; // xmm5_4
  float v46; // xmm3_4
  float v47; // xmm3_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  unsigned int v51; // edx
  int v52; // edx
  float v53; // xmm2_4
  float v54; // xmm1_4
  unsigned int v55; // edx
  int v56; // edx
  float v57; // xmm0_4
  unsigned int *v58; // rsi
  float *v59; // r15
  float v60; // xmm1_4
  int v61; // edx
  __int64 v62; // rcx
  float v63; // xmm2_4
  int v64; // r14d
  __int64 v65; // r13
  float v66; // xmm6_4
  float v67; // xmm0_4
  float v68; // xmm1_4
  float v69; // xmm0_4
  float *v70; // rdi
  float v71; // xmm0_4
  unsigned int v72; // edx
  int v73; // edx
  int v74; // eax
  unsigned int v75; // r10d
  unsigned int *v76; // rbx
  float v77; // xmm1_4
  float *v78; // r15
  signed int v79; // ecx
  float v80; // xmm2_4
  __int64 v81; // rax
  int v82; // esi
  float v83; // xmm6_4
  float v84; // xmm0_4
  __int64 v85; // r14
  float v86; // xmm1_4
  float v87; // xmm0_4
  __int64 v88; // rax
  __int64 v89; // rbx
  __int64 v90; // rax
  __int64 v91; // rcx
  float v92; // xmm2_4
  float v93; // xmm1_4
  unsigned int v94; // ebx
  __int64 v95; // rsi
  __int64 v96; // rcx
  __int64 v97; // rsi
  int v98; // r14d
  __int64 v99; // r12
  __int64 v100; // r15
  int v101; // eax
  __int64 v102; // rbx
  __int64 v103; // rcx
  int v104; // eax
  __int64 v105; // rdx
  unsigned int v106; // eax
  __int64 v107; // r8
  float v108; // xmm0_4
  unsigned int v109; // xmm8_4
  float v110; // xmm1_4
  float v111; // xmm9_4
  float v112; // xmm2_4
  float v113; // xmm7_4
  unsigned int v114; // xmm9_4
  unsigned int v115; // xmm7_4
  unsigned int v116; // xmm5_4
  unsigned int v117; // xmm4_4
  float v118; // xmm6_4
  float v119; // xmm9_4
  float v120; // xmm3_4
  float v121; // xmm2_4
  float v122; // xmm8_4
  float v123; // xmm7_4
  float v124; // xmm4_4
  float v125; // xmm5_4
  unsigned int v126; // xmm6_4
  float v127; // xmm2_4
  float v128; // xmm0_4
  bool v129; // zf
  unsigned int v130; // eax
  int v131; // eax
  int v132; // eax
  signed int v133; // esi
  signed int v134; // ebx
  int v135; // r9d
  int v136; // r8d
  signed int v137; // ecx
  signed int v138; // edx
  int *v139; // r8
  __int64 v140; // rcx
  __int64 v141; // rax
  signed int v142; // edx
  int *v143; // r8
  __int64 v144; // rcx
  signed int v145; // edx
  int *v146; // r8
  __int64 v147; // rcx
  signed int v148; // edx
  int *v149; // r8
  __int64 v150; // rcx
  signed int v151; // edx
  int *v152; // r8
  __int64 v153; // rcx
  signed int v154; // edx
  int *v155; // r8
  __int64 v156; // rcx
  signed int v157; // edx
  int *v158; // r8
  __int64 v159; // rcx
  __int64 v161; // [rsp+0h] [rbp-100h] BYREF
  int v162; // [rsp+20h] [rbp-E0h]
  unsigned int v163; // [rsp+24h] [rbp-DCh]
  __int64 v164; // [rsp+28h] [rbp-D8h]
  int v165; // [rsp+30h] [rbp-D0h]
  __int64 v166; // [rsp+38h] [rbp-C8h]
  __int64 v167; // [rsp+40h] [rbp-C0h]
  int v168; // [rsp+48h] [rbp-B8h]
  __int64 v169; // [rsp+50h] [rbp-B0h]
  __int64 v170; // [rsp+58h] [rbp-A8h]
  float v171[6]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v172; // [rsp+78h] [rbp-88h]
  float v173; // [rsp+80h] [rbp-80h] BYREF
  float v174; // [rsp+84h] [rbp-7Ch]
  float v175; // [rsp+88h] [rbp-78h]
  __int128 v176; // [rsp+90h] [rbp-70h] BYREF
  __int128 v177; // [rsp+A0h] [rbp-60h]
  float v178; // [rsp+B0h] [rbp-50h]
  __int64 v179; // [rsp+B8h] [rbp-48h]

  v1 = a1;
  v2 = 0;
  v3 = 28664 * v1;
  v163 = v1;
  v172 = 28664 * v1;
  if ( dword_140404A6C[7166 * v1 + 280651305] != -1 )
    v2 = dword_140404A6C[7166 * v1 + 280651305];
  v4 = *(unsigned int *)((char *)&dword_140404A6C[280658297] + v3);
  if ( v4 > 0 )
    *(unsigned int *)((char *)&dword_140404A6C[280658297] + v3) = v4 - 1;
  v5 = 0;
  v6 = 0;
  v7 = v2;
  v168 = 0;
  v162 = 0;
  v169 = v2;
  v164 = 0;
  do
  {
    v8 = v3 + 40 * v6;
    v9 = *(int *)((char *)&dword_140404A6C[280658139] + v8) <= 0;
    v166 = v8;
    if ( !v9 )
    {
      v10 = *(int *)((char *)&dword_140404A6C[280658140] + v8);
      v11 = v10;
      v12 = v3 - 936 * v6;
      v13 = 1760 * v10;
      v14 = *(float *)((char *)&dword_140404A6C[280652143] + v12) - *(float *)&dword_140404A6C[1760 * v10 + 278845917];
      v15 = *(float *)((char *)&dword_140404A6C[280652144] + v12) - *(float *)&dword_140404A6C[1760 * v10 + 278845918];
      v16 = *(float *)((char *)&dword_140404A6C[280652142] + v12) - *(float *)&dword_140404A6C[1760 * v10 + 278845916];
      if ( fsqrt((float)((float)(v14 * v14) + (float)(v16 * v16)) + (float)(v15 * v15)) > 1.75
        && (unsigned int)v10 <= 0x3FF )
      {
        v17 = dword_140404A6C[v13 + 278845903];
        if ( v17 == -1 )
        {
          v18 = dword_140404A6C[v13 + 278845902];
          if ( v18 == -1 )
            goto LABEL_15;
          sub_1400CA7C0(v10, v18, dword_140404A6C[v13 + 278845904]);
        }
        else
        {
          sub_1400CA9B0(v10, v17);
        }
        if ( dword_140404A6C[456202453] )
          ++dword_140404A6C[v11 + 280648157];
      }
    }
LABEL_15:
    v19 = *(unsigned int *)((char *)&dword_140404A6C[280651436] + v3);
    v165 = 0;
    if ( (v19 & 1) != 0 )
    {
      v20 = v19 & 0x10;
      if ( v5 )
      {
        if ( v5 == 1 )
          v165 = v20 != 0;
      }
      else
      {
        v165 = v20 == 0;
      }
    }
    v21 = *(unsigned int *)((char *)&dword_140404A6C[280651436] + v3);
    v22 = ((v21 & 0x40) != 0) - 1;
    if ( (v21 & 0x80u) != 0 )
      v22 = 1;
    if ( (v21 & 0x100) != 0 )
      v22 = 2;
    if ( (v21 & 0x200) != 0 )
      v22 = 3;
    if ( (v21 & 0x400) != 0 )
      v22 = 4;
    v9 = *(int *)((char *)&dword_140404A6C[280658299] + v3) < 50;
    LODWORD(v167) = v22;
    if ( v9 && *(int *)((char *)&dword_140404A6C[280658139] + v8) > 0 )
    {
      v23 = *(int *)((char *)&dword_140404A6C[280658140] + v8);
      if ( (unsigned int)v23 <= 0x3FF )
      {
        v24 = 1760 * v23;
        v25 = *(int *)((char *)&dword_140404A6C[280658140] + v8);
        v26 = dword_140404A6C[1760 * v23 + 278845903];
        if ( v26 == -1 )
        {
          v27 = dword_140404A6C[v24 + 278845902];
          if ( v27 == -1 )
            goto LABEL_37;
          sub_1400CA7C0(v23, v27, dword_140404A6C[v24 + 278845904]);
        }
        else
        {
          sub_1400CA9B0(v23, v26);
        }
        if ( dword_140404A6C[456202453] )
          ++dword_140404A6C[v25 + 280648157];
      }
    }
LABEL_37:
    v28 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v8);
    if ( v28 > 0 )
    {
      v29 = *(int *)((char *)&dword_140404A6C[280658140] + v8);
      v30 = 1760 * v29;
      v31 = dword_140404A6C[1760 * v29 + 278845898];
      if ( v31 == 28 )
      {
        *(_QWORD *)&v32 = *(unsigned int *)((char *)&dword_140404A6C[280651377] + v3);
        v178 = 1.0;
        v176 = xmmword_140278D30;
        v177 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v176, (float *)&dword_1402F6188, v32);
        v33 = *((float *)&v176 + 1);
        v34 = *(float *)&v176;
        v35 = *((float *)&v176 + 2);
        v31 = dword_140404A6C[v30 + 278845898];
        v36 = (float)(*((float *)&v176 + 2) * 0.5) + *(float *)&dword_140404A6C[v30 + 278846087];
        *(float *)&v32 = (float)(*(float *)&v176 * 0.5) + *(float *)&dword_140404A6C[v30 + 278846085];
        v37 = v3 + 56 * v6;
        v38 = 1268LL * v31;
        *(float *)((char *)&dword_140404A6C[280658220] + v37) = (float)(*((float *)&v176 + 1) * 0.5)
                                                              + *(float *)&dword_140404A6C[v30 + 278846086];
        *(float *)((char *)&dword_140404A6C[280658221] + v37) = v36;
        v39 = *((float *)&v177 + 1);
        *(unsigned int *)((char *)&dword_140404A6C[280658219] + v37) = LODWORD(v32);
        v40 = *(float *)&dword_140404A6C[3 * *(int *)((char *)&dword_140404A6C[280658148] + v8) + 278521317 + v38];
        v41 = v33 * v40;
        v42 = v34 * v40;
        v43 = v35 * v40;
        v44 = *(float *)&v177;
        v45 = v42 + *(float *)&v32;
        *(float *)((char *)&dword_140404A6C[280658219] + v37) = v45;
        *(float *)((char *)&dword_140404A6C[280658220] + v37) = v41
                                                              + *(float *)((char *)&dword_140404A6C[280658220] + v37);
        v46 = *((float *)&v176 + 3);
        *(float *)((char *)&dword_140404A6C[280658221] + v37) = v43
                                                              + *(float *)((char *)&dword_140404A6C[280658221] + v37);
        LODWORD(v32) = dword_140404A6C[3 * *(int *)((char *)&dword_140404A6C[280658148] + v8) + 278521318 + v38];
        v47 = (float)(v46 * *(float *)&v32) + v45;
        *(float *)((char *)&dword_140404A6C[280658219] + v37) = v47;
        *(float *)((char *)&dword_140404A6C[280658220] + v37) = (float)(v44 * *(float *)&v32)
                                                              + *(float *)((char *)&dword_140404A6C[280658220] + v37);
        v48 = *((float *)&v177 + 2);
        *(float *)((char *)&dword_140404A6C[280658221] + v37) = (float)(v39 * *(float *)&v32)
                                                              + *(float *)((char *)&dword_140404A6C[280658221] + v37);
        LODWORD(v32) = dword_140404A6C[3 * *(int *)((char *)&dword_140404A6C[280658148] + v8) + 278521319 + v38];
        v49 = *((float *)&v177 + 3) * *(float *)&v32;
        *(float *)((char *)&dword_140404A6C[280658219] + v37) = (float)(v48 * *(float *)&v32) + v47;
        v50 = v178 * *(float *)&v32;
        *(float *)((char *)&dword_140404A6C[280658220] + v37) = v49
                                                              + *(float *)((char *)&dword_140404A6C[280658220] + v37);
        *(float *)((char *)&dword_140404A6C[280658221] + v37) = v50
                                                              + *(float *)((char *)&dword_140404A6C[280658221] + v37);
        *(unsigned int *)((char *)&dword_140404A6C[280658222] + v37) = *(unsigned int *)((char *)&dword_140404A6C[280651377]
                                                                                       + v3);
      }
      if ( v31 == 36
        && (*(unsigned int *)((char *)&dword_140404A6C[280651436] + v3) & 0x800) == 0
        && (unsigned int)v29 <= 0x3FF )
      {
        v51 = dword_140404A6C[v30 + 278845903];
        if ( v51 == -1 )
        {
          v52 = dword_140404A6C[v30 + 278845902];
          if ( v52 == -1 )
            goto LABEL_49;
          sub_1400CA7C0(v29, v52, dword_140404A6C[v30 + 278845904]);
        }
        else
        {
          sub_1400CA9B0(v29, v51);
        }
        if ( dword_140404A6C[456202453] )
          ++dword_140404A6C[v29 + 280648157];
      }
LABEL_49:
      if ( dword_140404A6C[v30 + 278845898] != 39 )
        goto LABEL_57;
      v53 = *(float *)((char *)&dword_140404A6C[280651459] + v3) + *(float *)((char *)&dword_140404A6C[280651459] + v3);
      v54 = *(float *)((char *)&dword_140404A6C[280651460] + v3) + *(float *)((char *)&dword_140404A6C[280651460] + v3);
      v173 = *(float *)((char *)&dword_140404A6C[280651440] + v3)
           - (float)(*(float *)((char *)&dword_140404A6C[280651458] + v3)
                   + *(float *)((char *)&dword_140404A6C[280651458] + v3));
      v174 = *(float *)((char *)&dword_140404A6C[280651441] + v3) - v53;
      v175 = *(float *)((char *)&dword_140404A6C[280651442] + v3) - v54;
      if ( sub_14007ABA0(
             (float *)((char *)&dword_140404A6C[280651440] + v3),
             &v173,
             (float *)&dword_140404A6C[v30 + 278845916]) <= 1.0 )
      {
        if ( (*((_BYTE *)&dword_140404A6C[280651436] + v3) & 1) != 0
          || (*((_BYTE *)&dword_140404A6C[280651437] + v3) & 1) == 0
          || (unsigned int)v29 > 0x3FF )
        {
          goto LABEL_57;
        }
        v55 = dword_140404A6C[v30 + 278845903];
        if ( v55 == -1 )
          goto LABEL_53;
      }
      else
      {
        if ( (unsigned int)v29 > 0x3FF )
          goto LABEL_57;
        v55 = dword_140404A6C[v30 + 278845903];
        if ( v55 == -1 )
        {
LABEL_53:
          v56 = dword_140404A6C[v30 + 278845902];
          if ( v56 == -1 )
            goto LABEL_57;
          sub_1400CA7C0(v29, v56, dword_140404A6C[v30 + 278845904]);
          goto LABEL_55;
        }
      }
      sub_1400CA9B0(v29, v55);
LABEL_55:
      if ( dword_140404A6C[456202453] )
        ++dword_140404A6C[v29 + 280648157];
LABEL_57:
      if ( dword_140404A6C[v30 + 278845898] - 19 > 5
        || (*((_BYTE *)&dword_140404A6C[280651436] + v3) & 1) != 0
        || (*((_BYTE *)&dword_140404A6C[280651437] + v3) & 1) == 0 )
      {
        goto LABEL_84;
      }
      v57 = *(float *)((char *)&dword_140404A6C[280651674] + v3);
      v58 = &dword_140404A6C[278845898];
      v59 = (float *)&dword_140404A6C[278845916];
      v60 = *(float *)((char *)&dword_140404A6C[280651692] + v3) * 1.5;
      v61 = -1;
      v62 = -1;
      v63 = *(float *)((char *)&dword_140404A6C[280651693] + v3) * 1.5;
      v64 = 0;
      LODWORD(v166) = -1;
      v65 = 0;
      v66 = 0.5;
      v170 = -1;
      v67 = v57 - v60;
      v68 = *(float *)((char *)&dword_140404A6C[280651694] + v3) * 1.5;
      v171[0] = v67;
      v69 = *(float *)((char *)&dword_140404A6C[280651675] + v3);
      v70 = (float *)((char *)&dword_140404A6C[280651674] + v3);
      v171[1] = v69 - v63;
      v171[2] = v70[2] - v68;
      do
      {
        if ( *(v58 - 5) && *v58 == 39 && v58[4] == -1 )
        {
          v71 = sub_14007ABA0(v70, v171, v59);
          if ( v71 >= v66 )
          {
            v61 = v166;
            v62 = v170;
          }
          else
          {
            v61 = v64;
            v62 = v65;
            LODWORD(v166) = v64;
            v66 = v71;
            v170 = v65;
          }
        }
        ++v64;
        v59 += 1760;
        ++v65;
        v58 += 1760;
      }
      while ( v64 < 1024 );
      v3 = v172;
      if ( v61 == -1 || dword_140404A6C[1760 * v62 + 278845906] )
      {
LABEL_83:
        v22 = v167;
        v6 = v164;
LABEL_84:
        v74 = *(unsigned int *)((char *)&dword_140404A6C[280651436] + v3);
        if ( (v74 & 0x1000) != 0 )
          dword_140404A6C[v30 + 278845977] |= 2u;
        v5 = v162;
        v75 = v163;
        if ( (v74 & 0x1020) == 0 && v22 == -1 && v165 )
          dword_140404A6C[v30 + 278845977] |= 1u;
        goto LABEL_152;
      }
      if ( (unsigned int)v29 <= 0x3FF )
      {
        v72 = dword_140404A6C[v30 + 278845903];
        if ( v72 != -1 )
        {
          sub_1400CA9B0(v29, v72);
          goto LABEL_80;
        }
        v73 = dword_140404A6C[v30 + 278845902];
        if ( v73 != -1 )
        {
          sub_1400CA7C0(v29, v73, dword_140404A6C[v30 + 278845904]);
LABEL_80:
          if ( dword_140404A6C[456202453] )
            ++dword_140404A6C[v29 + 280648157];
        }
      }
      sub_1400E35D0(v166, v29, -1, 0);
      goto LABEL_83;
    }
    if ( !v5
      && (*((_BYTE *)&dword_140404A6C[280651436] + v3) & 1) == 0
      && (*((_BYTE *)&dword_140404A6C[280651437] + v3) & 1) != 0
      && !v28 )
    {
      v76 = &dword_140404A6C[278845902];
      v77 = *(float *)((char *)&dword_140404A6C[280651692] + v3) * 1.5;
      v78 = (float *)&dword_140404A6C[278845916];
      v79 = -1;
      v80 = *(float *)((char *)&dword_140404A6C[280651693] + v3) * 1.5;
      v81 = -1;
      v82 = 0;
      v165 = -1;
      v83 = 0.5;
      v84 = *(float *)((char *)&dword_140404A6C[280651674] + v3) - v77;
      v167 = -1;
      v85 = 0;
      v86 = *(float *)((char *)&dword_140404A6C[280651694] + v3) * 1.5;
      v173 = v84;
      v174 = *(float *)((char *)&dword_140404A6C[280651675] + v3) - v80;
      v175 = *(float *)((char *)&dword_140404A6C[280651676] + v3) - v86;
      do
      {
        if ( *(v76 - 9) && *v76 == -1 )
        {
          v87 = sub_14007ABA0((float *)((char *)&dword_140404A6C[280651674] + v3), &v173, v78);
          if ( v87 < v83 && ((v88 = (int)v76[1], (_DWORD)v88 == -1) || dword_140404A6C[1760 * v88 + 278845902] == -1) )
          {
            v79 = v82;
            v81 = v85;
            v165 = v82;
            v83 = v87;
            v167 = v85;
          }
          else
          {
            v81 = v167;
            v79 = v165;
          }
        }
        ++v82;
        v78 += 1760;
        ++v85;
        v76 += 1760;
      }
      while ( v82 < 1024 );
      if ( v79 != -1 )
      {
        v89 = 1760 * v81;
        v90 = (int)dword_140404A6C[1760 * v81 + 278845903];
        if ( (_DWORD)v90 == -1 )
          goto LABEL_107;
        if ( dword_140404A6C[1760 * v90 + 278845898] == 39 )
        {
          sub_1400E35D0(v79, -1, -1, 0);
LABEL_107:
          v8 = v166;
          v6 = v164;
          v5 = v162;
          v7 = v169;
          v91 = v3 + 48LL * *(int *)((char *)&dword_140404A6C[280658341] + v3);
          if ( dword_140404A6C[v89 + 278845898] == 39 )
            *(unsigned int *)((char *)&dword_140404A6C[280658342] + v91) = 4;
          else
            *(unsigned int *)((char *)&dword_140404A6C[280658342] + v91) = 3;
          *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&dword_140404A6C[280658341] + v3)
                                                   + 280658352]
                          + v3) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&dword_140404A6C[280658341] + v3)
                                                   + 280658353]
                          + v3) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&dword_140404A6C[280658341] + v3)
                                                   + 280658343]
                          + v3) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[280658341] + v3) = ((unsigned __int8)*(unsigned int *)((char *)&dword_140404A6C[280658341] + v3)
                                                                       + 1)
                                                                      & 7;
          goto LABEL_112;
        }
      }
      v7 = v169;
      v5 = v162;
      v6 = v164;
      v8 = v166;
    }
LABEL_112:
    if ( v22 == -1
      && !*(unsigned int *)((char *)&dword_140404A6C[280658139] + v8)
      && !*(unsigned int *)((char *)&dword_140404A6C[14 * v6 + 280658223] + v3)
      && (*((_BYTE *)&dword_140404A6C[280651436] + v3) & 1) == 0
      && (*((_BYTE *)&dword_140404A6C[280651437] + v3) & 1) != 0
      && !v168 )
    {
      v92 = *(float *)((char *)&dword_140404A6C[280651693] + v3) * 2.5;
      v93 = *(float *)((char *)&dword_140404A6C[280651694] + v3) * 2.5;
      v173 = *(float *)((char *)&dword_140404A6C[280651674] + v3)
           - (float)(*(float *)((char *)&dword_140404A6C[280651692] + v3) * 2.5);
      v174 = *(float *)((char *)&dword_140404A6C[280651675] + v3) - v92;
      v175 = *(float *)((char *)&dword_140404A6C[280651676] + v3) - v93;
      if ( (unsigned int)sub_1400DC050((float *)((char *)&dword_140404A6C[280651674] + v3), &v173, 0) )
      {
        if ( dword_140404A6C[73007002] != -1 )
        {
          v94 = sub_140016590(
                  dword_140404A6C[73007002],
                  dword_140404A6C[73007003],
                  dword_140404A6C[73007004],
                  dword_140404A6C[73007005])
              & 0xFCFFFFFF;
          if ( dword_140404A6C[283831448] == 2 && dword_140404A6C[283831312] != 5 )
          {
            v95 = (int)dword_140404A6C[3597 * v7 + 71856286];
            if ( (unsigned int)v95 <= 5 && sub_14011B8F0((float *)((char *)&dword_140404A6C[280651335] + v3), v95, 4.0) )
            {
              if ( dword_140404A6C[73007012] != 6
                && (v94 < (dword_140404A6C[19931114] | 0x80000000) || v94 > (dword_140404A6C[19931117] | 0x80000000))
                || dword_140404A6C[5873 * v95 + 283831509] )
              {
                if ( v94 >= (dword_140404A6C[19931114] | 0x80000000)
                  && v94 <= (dword_140404A6C[19931117] | 0x80000000)
                  && dword_140404A6C[5873 * v95 + 283831509] == 1 )
                {
                  sub_1400518B0(v95, 0);
                  v168 = 1;
                  dword_140404A6C[5873 * v95 + 283831509] = 0;
                }
              }
              else
              {
                sub_1400518B0(v95, 1u);
                v168 = 1;
                dword_140404A6C[5873 * v95 + 283831509] = 1;
              }
            }
          }
        }
      }
    }
    v96 = v164;
    if ( (*(unsigned int *)((char *)&dword_140404A6C[280651436] + v3) & 0x800) == 0 )
      *(unsigned int *)((char *)&dword_140404A6C[14 * v164 + 280658223] + v3) = 0;
    v97 = v3 + 56 * v96;
    v98 = *(unsigned int *)((char *)&dword_140404A6C[280658223] + v97);
    if ( !v98 || (v99 = *(int *)((char *)&dword_140404A6C[280658224] + v97), (_DWORD)v99 == -1) )
    {
      v75 = v163;
      goto LABEL_151;
    }
    if ( !dword_140404A6C[7166 * v99 + 280651303] )
    {
      *(unsigned int *)((char *)&dword_140404A6C[280658223] + v97) = 0;
      v98 = 0;
    }
    v100 = 3 - v96;
    v101 = sub_1400A4440();
    if ( v101 == -1 )
    {
      v75 = v163;
LABEL_150:
      v5 = v162;
LABEL_151:
      v6 = v164;
      goto LABEL_152;
    }
    v102 = 61LL * v101;
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v102 + 486149253]), 0, 0xF4u);
    v75 = v163;
    v103 = *(int *)((char *)&dword_140404A6C[280658226] + v97);
    dword_140404A6C[v102 + 486149293] = v99;
    v104 = 3 - v162;
    dword_140404A6C[v102 + 486149291] = v75;
    dword_140404A6C[v102 + 486149294] = v103;
    v105 = v3 + 936 * v100;
    dword_140404A6C[v102 + 486149292] = 3 * v104;
    v106 = *(unsigned int *)((char *)&dword_140404A6C[280658227] + v97);
    dword_140404A6C[v102 + 486149281] = 1044381696;
    dword_140404A6C[v102 + 486149282] = 1044381696;
    dword_140404A6C[v102 + 486149257] = 0;
    v107 = 28664 * v99 + 312 * v103;
    *(_QWORD *)&dword_140404A6C[v102 + 486149267] = 0;
    dword_140404A6C[v102 + 486149269] = 0;
    dword_140404A6C[v102 + 486149270] = v106;
    dword_140404A6C[v102 + 486149271] = *(unsigned int *)((char *)&dword_140404A6C[280658228] + v97);
    dword_140404A6C[v102 + 486149272] = *(unsigned int *)((char *)&dword_140404A6C[280658229] + v97);
    v108 = *(float *)&dword_140404A6C[v102 + 486149267];
    *(float *)&v109 = (float)((float)(v108 * *(float *)((char *)&dword_140404A6C[280651452] + v105))
                            + (float)(*(float *)&dword_140404A6C[v102 + 486149268]
                                    * *(float *)((char *)&dword_140404A6C[280651455] + v105)))
                    + (float)(*(float *)&dword_140404A6C[v102 + 486149269]
                            * *(float *)((char *)&dword_140404A6C[280651458] + v105));
    v110 = *(float *)&dword_140404A6C[v102 + 486149269] * *(float *)((char *)&dword_140404A6C[280651459] + v105);
    v111 = (float)(*(float *)&dword_140404A6C[v102 + 486149268] * *(float *)((char *)&dword_140404A6C[280651457] + v105))
         + (float)(v108 * *(float *)((char *)&dword_140404A6C[280651454] + v105));
    v112 = *(float *)&dword_140404A6C[v102 + 486149269] * *(float *)((char *)&dword_140404A6C[280651460] + v105);
    v113 = (float)(*(float *)&dword_140404A6C[v102 + 486149268] * *(float *)((char *)&dword_140404A6C[280651456] + v105))
         + (float)(v108 * *(float *)((char *)&dword_140404A6C[280651453] + v105));
    dword_140404A6C[v102 + 486149267] = v109;
    *(float *)&v114 = v111 + v112;
    *(float *)&v115 = v113 + v110;
    dword_140404A6C[v102 + 486149269] = v114;
    dword_140404A6C[v102 + 486149268] = v115;
    *(float *)&v116 = (float)((float)(*(float *)&dword_140404A6C[v102 + 486149271]
                                    * *(float *)((char *)&dword_140404A6C[280651455] + v107))
                            + (float)(*(float *)&dword_140404A6C[v102 + 486149270]
                                    * *(float *)((char *)&dword_140404A6C[280651452] + v107)))
                    + (float)(*(float *)&dword_140404A6C[v102 + 486149272]
                            * *(float *)((char *)&dword_140404A6C[280651458] + v107));
    *(float *)&v117 = (float)((float)(*(float *)&dword_140404A6C[v102 + 486149271]
                                    * *(float *)((char *)&dword_140404A6C[280651456] + v107))
                            + (float)(*(float *)&dword_140404A6C[v102 + 486149270]
                                    * *(float *)((char *)&dword_140404A6C[280651453] + v107)))
                    + (float)(*(float *)&dword_140404A6C[v102 + 486149272]
                            * *(float *)((char *)&dword_140404A6C[280651459] + v107));
    v118 = *(float *)&dword_140404A6C[v102 + 486149271] * *(float *)((char *)&dword_140404A6C[280651457] + v107);
    v119 = *(float *)&v114 + *(float *)((char *)&dword_140404A6C[280651442] + v105);
    v120 = *(float *)&dword_140404A6C[v102 + 486149270] * *(float *)((char *)&dword_140404A6C[280651454] + v107);
    v121 = *(float *)&dword_140404A6C[v102 + 486149272] * *(float *)((char *)&dword_140404A6C[280651460] + v107);
    v122 = *(float *)&v109 + *(float *)((char *)&dword_140404A6C[280651440] + v105);
    v123 = *(float *)&v115 + *(float *)((char *)&dword_140404A6C[280651441] + v105);
    dword_140404A6C[v102 + 486149271] = v117;
    v124 = *(float *)&v117 + *(float *)((char *)&dword_140404A6C[280651441] + v107);
    dword_140404A6C[v102 + 486149270] = v116;
    v125 = *(float *)&v116 + *(float *)((char *)&dword_140404A6C[280651440] + v107);
    v175 = v119;
    *(float *)&v126 = (float)(v118 + v120) + v121;
    dword_140404A6C[v102 + 486149272] = v126;
    if ( fsqrt(
           (float)((float)((float)(v124 - v123) * (float)(v124 - v123))
                 + (float)((float)(v125 - v122) * (float)(v125 - v122)))
         + (float)((float)((float)(*(float *)&v126 + *(float *)((char *)&dword_140404A6C[280651442] + v107)) - v119)
                 * (float)((float)(*(float *)&v126 + *(float *)((char *)&dword_140404A6C[280651442] + v107)) - v119))) > 0.125 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[280658223] + v97) = 0;
      v98 = 0;
    }
    if ( *(int *)((char *)&dword_140404A6C[280651310] + v3) < 8 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[280658223] + v97) = 0;
      v98 = 0;
    }
    v127 = *(float *)((char *)&dword_140404A6C[280651472] + v107);
    v173 = *(float *)((char *)&dword_140404A6C[280651472] + v105);
    v128 = v127 + v173;
    v174 = v127;
    *(float *)&dword_140404A6C[v102 + 486149274] = (float)(1.0 / (float)(v127 + v173)) * v173;
    *(float *)&dword_140404A6C[v102 + 486149273] = (float)(1.0 / v128) * v127;
    if ( !v98 )
      goto LABEL_150;
    v129 = (dword_140404A6C[283831474] & 3) == 0;
    v130 = *(unsigned int *)((char *)&dword_140404A6C[280651439] + v105);
    dword_140404A6C[v102 + 486149253] = 1;
    dword_140404A6C[v102 + 486149254] = 7;
    *(_QWORD *)&dword_140404A6C[v102 + 486149256] = 0;
    dword_140404A6C[v102 + 486149291] = v130;
    dword_140404A6C[v102 + 486149292] = *(unsigned int *)((char *)&dword_140404A6C[280651439] + v107);
    dword_140404A6C[v102 + 486149281] = 1031798784;
    dword_140404A6C[v102 + 486149282] = 1044381696;
    if ( !v129 )
      goto LABEL_150;
    v131 = *(unsigned int *)((char *)&dword_140404A6C[280651310] + v3);
    v6 = v164;
    v5 = v162;
    if ( v131 > 0 )
      *(unsigned int *)((char *)&dword_140404A6C[280651310] + v3) = v131 - 1;
LABEL_152:
    v7 = v169;
    ++v5;
    ++v6;
    v162 = v5;
    v164 = v6;
  }
  while ( v5 < 2 );
  if ( (*(unsigned int *)((char *)&dword_140404A6C[280651436] + v3) & 0x2000) != 0
    && (*(unsigned int *)((char *)&dword_140404A6C[280651437] + v3) & 0x2000) == 0 )
  {
    v132 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v3);
    if ( v132 <= 0 )
    {
      if ( *(int *)((char *)&dword_140404A6C[280658149] + v3) > 0 && !v132 )
      {
        v137 = *(unsigned int *)((char *)&dword_140404A6C[280658150] + v3);
        v135 = 0;
        v136 = v75;
        goto LABEL_163;
      }
    }
    else
    {
      v133 = *(unsigned int *)((char *)&dword_140404A6C[280658140] + v3);
      if ( *(unsigned int *)((char *)&dword_140404A6C[280658149] + v3) )
      {
        v134 = *(unsigned int *)((char *)&dword_140404A6C[280658150] + v3);
        sub_1400E35D0(v133, -1, -1, 0);
        sub_1400E35D0(v134, -1, v163, 0);
      }
      v135 = 1;
      v136 = v163;
      v137 = v133;
LABEL_163:
      sub_1400E35D0(v137, -1, v136, v135);
    }
  }
  v138 = 0;
  if ( *(int *)((char *)&dword_140404A6C[280658139] + v3) > 0 )
  {
    v139 = (int *)((char *)&dword_140404A6C[280658140] + v3);
    do
    {
      v140 = 1760LL * *v139;
      v141 = (int)dword_140404A6C[v140 + 278845898];
      dword_140404A6C[v140 + 278845895] = 0;
      if ( dword_140404A6C[1268 * v141 + 278521289] )
        *(unsigned int *)((char *)&dword_140404A6C[280651323] + v3) = 0;
      ++v138;
      ++v139;
    }
    while ( v138 < *(int *)((char *)&dword_140404A6C[280658139] + v3) );
  }
  v142 = 0;
  if ( *(int *)((char *)&dword_140404A6C[280658149] + v3) > 0 )
  {
    v143 = (int *)((char *)&dword_140404A6C[280658150] + v3);
    do
    {
      v144 = 1760LL * *v143;
      dword_140404A6C[v144 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[v144 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&dword_140404A6C[280651323] + v3) = 0;
      ++v142;
      ++v143;
    }
    while ( v142 < *(int *)((char *)&dword_140404A6C[280658149] + v3) );
  }
  v145 = 0;
  if ( *(int *)((char *)&dword_140404A6C[280658159] + v3) > 0 )
  {
    v146 = (int *)((char *)&dword_140404A6C[280658160] + v3);
    do
    {
      v147 = 1760LL * *v146;
      dword_140404A6C[v147 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[v147 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&dword_140404A6C[280651323] + v3) = 0;
      ++v145;
      ++v146;
    }
    while ( v145 < *(int *)((char *)&dword_140404A6C[280658159] + v3) );
  }
  v148 = 0;
  if ( *(int *)((char *)&dword_140404A6C[280658169] + v3) > 0 )
  {
    v149 = (int *)((char *)&dword_140404A6C[280658170] + v3);
    do
    {
      v150 = 1760LL * *v149;
      dword_140404A6C[v150 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[v150 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&dword_140404A6C[280651323] + v3) = 0;
      ++v148;
      ++v149;
    }
    while ( v148 < *(int *)((char *)&dword_140404A6C[280658169] + v3) );
  }
  v151 = 0;
  if ( *(int *)((char *)&dword_140404A6C[280658179] + v3) > 0 )
  {
    v152 = (int *)((char *)&dword_140404A6C[280658180] + v3);
    do
    {
      v153 = 1760LL * *v152;
      dword_140404A6C[v153 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[v153 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&dword_140404A6C[280651323] + v3) = 0;
      ++v151;
      ++v152;
    }
    while ( v151 < *(int *)((char *)&dword_140404A6C[280658179] + v3) );
  }
  v154 = 0;
  if ( *(int *)((char *)&dword_140404A6C[280658189] + v3) > 0 )
  {
    v155 = (int *)((char *)&dword_140404A6C[280658190] + v3);
    do
    {
      v156 = 1760LL * *v155;
      dword_140404A6C[v156 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[v156 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&dword_140404A6C[280651323] + v3) = 0;
      ++v154;
      ++v155;
    }
    while ( v154 < *(int *)((char *)&dword_140404A6C[280658189] + v3) );
  }
  v157 = 0;
  if ( *(int *)((char *)&dword_140404A6C[280658199] + v3) > 0 )
  {
    v158 = (int *)((char *)&dword_140404A6C[280658200] + v3);
    do
    {
      v159 = 1760LL * *v158;
      dword_140404A6C[v159 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[v159 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&dword_140404A6C[280651323] + v3) = 0;
      ++v157;
      ++v158;
    }
    while ( v157 < *(int *)((char *)&dword_140404A6C[280658199] + v3) );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B78F0) ----------------------------------------------------
__int64            sub_1400B78F0(int a1)
{
  __int64 v1; // rdi
  unsigned int *v2; // r13
  float v3; // xmm0_4
  float v4; // xmm4_4
  float v5; // xmm1_4
  float v6; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm3_4
  float v9; // xmm10_4
  float v10; // xmm12_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm15_4
  float v15; // xmm2_4
  float v16; // xmm15_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm11_4
  float v20; // xmm11_4
  double v21; // xmm2_8
  double v22; // xmm2_8
  float *v23; // rbx
  float v24; // xmm1_4
  float v25; // xmm7_4
  float v26; // xmm0_4
  float v27; // xmm7_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm12_4
  float v32; // xmm14_4
  float v33; // xmm13_4
  float v34; // xmm14_4
  float v35; // xmm0_4
  float v36; // xmm12_4
  float v37; // xmm13_4
  float v38; // xmm13_4
  unsigned int v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm3_4
  float v42; // xmm8_4
  float v43; // xmm7_4
  float v44; // xmm4_4
  float v45; // xmm5_4
  float v46; // xmm8_4
  float *v47; // rsi
  unsigned __int64 v48; // xmm9_8
  float v49; // xmm4_4
  float v50; // xmm5_4
  float v51; // xmm15_4
  unsigned __int64 v52; // xmm0_8
  float v53; // xmm15_4
  float v54; // xmm4_4
  float v55; // xmm5_4
  float v56; // xmm7_4
  __int64 v57; // xmm8_8
  float v58; // xmm9_4
  float v59; // xmm3_4
  float v60; // xmm4_4
  float v61; // xmm7_4
  float v62; // xmm9_4
  double v63; // xmm0_8
  float v64; // xmm1_4
  float v65; // xmm4_4
  float v66; // xmm5_4
  float v67; // xmm11_4
  float v68; // xmm7_4
  float v69; // xmm9_4
  float v70; // xmm3_4
  float v71; // xmm3_4
  float v72; // xmm4_4
  float v73; // xmm5_4
  double v74; // xmm2_8
  float v75; // xmm11_4
  float v76; // xmm6_4
  float v77; // xmm10_4
  float v78; // xmm5_4
  float v79; // xmm4_4
  float v80; // xmm15_4
  float v81; // xmm3_4
  float v82; // xmm7_4
  float v83; // xmm2_4
  float v84; // xmm14_4
  float v85; // xmm13_4
  float v86; // xmm0_4
  float v87; // xmm11_4
  float v88; // xmm9_4
  float v89; // xmm15_4
  float v90; // xmm12_4
  float v91; // xmm0_4
  float v92; // xmm10_4
  float v93; // xmm2_4
  float v94; // xmm5_4
  float v95; // xmm4_4
  float v96; // xmm7_4
  float v97; // xmm2_4
  float v98; // xmm1_4
  float v99; // xmm5_4
  float v100; // xmm1_4
  float v101; // xmm0_4
  float v102; // xmm5_4
  float v103; // xmm8_4
  float v104; // xmm5_4
  float v105; // xmm1_4
  float *v106; // r12
  unsigned int *v107; // r14
  float v108; // xmm4_4
  float v109; // xmm0_4
  int v110; // r15d
  float v111; // xmm5_4
  float v112; // xmm8_4
  float v113; // xmm4_4
  float v114; // xmm2_4
  float v115; // xmm1_4
  float v116; // xmm5_4
  float v117; // xmm1_4
  unsigned int *v118; // rsi
  __int64 v119; // rbx
  float v120; // xmm0_4
  float v121; // xmm1_4
  float v122; // xmm0_4
  float v123; // xmm0_4
  float v124; // xmm1_4
  float v125; // xmm0_4
  double v126; // xmm2_8
  int v127; // ecx
  float v128; // xmm3_4
  float v129; // xmm4_4
  float v130; // xmm5_4
  float v131; // xmm0_4
  float v132; // xmm1_4
  float v133; // xmm2_4
  float v134; // xmm5_4
  float v135; // xmm1_4
  float v136; // xmm3_4
  float v137; // xmm4_4
  float v138; // xmm1_4
  float v139; // xmm2_4
  float v140; // xmm0_4
  float v141; // xmm0_4
  float v142; // xmm1_4
  float v143; // xmm2_4
  float *v144; // rax
  __int64 v145; // rcx
  float v146; // xmm1_4
  float v147; // xmm1_4
  float v148; // xmm6_4
  float v149; // xmm15_4
  float v150; // xmm2_4
  float v151; // xmm13_4
  float v152; // xmm0_4
  float v153; // xmm1_4
  float v154; // xmm11_4
  float v155; // xmm8_4
  float v156; // xmm0_4
  float v157; // xmm14_4
  float v158; // xmm8_4
  float v159; // xmm5_4
  float v160; // xmm10_4
  float v161; // xmm0_4
  float v162; // xmm5_4
  float v163; // xmm10_4
  float v164; // xmm7_4
  float v165; // xmm12_4
  float v166; // xmm4_4
  float v167; // xmm0_4
  float v168; // xmm9_4
  float v169; // xmm6_4
  float v170; // xmm15_4
  float v171; // xmm0_4
  float v172; // xmm1_4
  float v173; // xmm2_4
  float v174; // xmm0_4
  float v175; // xmm0_4
  float v176; // xmm0_4
  int v177; // eax
  float v178; // xmm6_4
  float v179; // xmm9_4
  unsigned int v180; // xmm11_4
  float v181; // xmm6_4
  unsigned int v182; // xmm13_4
  float v183; // xmm10_4
  unsigned int *v184; // rdx
  float v185; // xmm7_4
  __int64 v186; // r8
  float v187; // xmm8_4
  __int64 v188; // rcx
  float v189; // xmm4_4
  float v190; // xmm3_4
  float v191; // xmm5_4
  float v192; // xmm2_4
  unsigned int v193; // xmm3_4
  float v194; // xmm2_4
  unsigned int v195; // xmm4_4
  float v196; // xmm3_4
  __int64 v197; // rcx
  __int64 v198; // rcx
  __int64 v200; // [rsp+8h] [rbp-100h] BYREF
  float v201; // [rsp+78h] [rbp-90h]
  float v202; // [rsp+7Ch] [rbp-8Ch]
  float v203; // [rsp+80h] [rbp-88h]
  float v204; // [rsp+84h] [rbp-84h]
  float v205; // [rsp+88h] [rbp-80h]
  float v206; // [rsp+8Ch] [rbp-7Ch]
  float v207; // [rsp+90h] [rbp-78h]
  float v208; // [rsp+94h] [rbp-74h]
  float v209; // [rsp+98h] [rbp-70h]
  float v210; // [rsp+9Ch] [rbp-6Ch]
  float v211; // [rsp+A0h] [rbp-68h]
  float v212; // [rsp+A4h] [rbp-64h]
  float v213; // [rsp+A8h] [rbp-60h]
  float v214; // [rsp+ACh] [rbp-5Ch]
  float v215; // [rsp+B0h] [rbp-58h]
  float v216; // [rsp+B4h] [rbp-54h]
  float v217; // [rsp+B8h] [rbp-50h]
  int v218; // [rsp+BCh] [rbp-4Ch]
  float v219; // [rsp+C0h] [rbp-48h] BYREF
  float v220; // [rsp+C4h] [rbp-44h]
  float v221; // [rsp+C8h] [rbp-40h]
  float v222; // [rsp+CCh] [rbp-3Ch]
  unsigned int v223; // [rsp+D0h] [rbp-38h] BYREF
  int v224; // [rsp+D4h] [rbp-34h]
  int v225; // [rsp+D8h] [rbp-30h]
  __int64 v226; // [rsp+E0h] [rbp-28h] BYREF
  int v227; // [rsp+E8h] [rbp-20h]
  float v228; // [rsp+F0h] [rbp-18h]
  float v229; // [rsp+F4h] [rbp-14h]
  __m128 v230; // [rsp+F8h] [rbp-10h] BYREF
  float v231; // [rsp+110h] [rbp+8h] BYREF
  float v232; // [rsp+114h] [rbp+Ch]
  float v233; // [rsp+118h] [rbp+10h]
  _DWORD v234[2]; // [rsp+120h] [rbp+18h] BYREF
  float v235[4]; // [rsp+128h] [rbp+20h]
  float v236; // [rsp+138h] [rbp+30h]
  float v237; // [rsp+13Ch] [rbp+34h]
  _DWORD v238[4]; // [rsp+140h] [rbp+38h]
  float v239; // [rsp+150h] [rbp+48h]
  float v240; // [rsp+154h] [rbp+4Ch]
  float v241[4]; // [rsp+158h] [rbp+50h]
  __int128 v242; // [rsp+168h] [rbp+60h] BYREF
  __int128 v243; // [rsp+178h] [rbp+70h]
  int v244; // [rsp+188h] [rbp+80h]
  float v245; // [rsp+190h] [rbp+88h]
  float v246; // [rsp+194h] [rbp+8Ch]
  float v247[4]; // [rsp+198h] [rbp+90h]
  __int128 v248; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v249; // [rsp+1B8h] [rbp+B0h]
  int v250; // [rsp+1C8h] [rbp+C0h]
  _OWORD v251[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  int v252; // [rsp+1F0h] [rbp+E8h]
  __int64 v253; // [rsp+1F8h] [rbp+F0h]

  v1 = 7166LL * a1;
  v218 = a1;
  v2 = &dword_140404A6C[v1 + 280651452];
  v3 = (float)(*(float *)&dword_140404A6C[282486350] * *(float *)&dword_140404A6C[v1 + 280652313])
     + *(float *)&dword_140404A6C[v1 + 280652298];
  v4 = *(float *)&dword_140404A6C[v1 + 280651455];
  v5 = (float)(*(float *)&dword_140404A6C[282486350] * *(float *)&dword_140404A6C[v1 + 280652314])
     + *(float *)&dword_140404A6C[v1 + 280652299];
  v6 = *(float *)&dword_140404A6C[v1 + 280651440];
  v7 = *(float *)&dword_140404A6C[v1 + 280651441];
  v8 = *(float *)&dword_140404A6C[v1 + 280651456];
  v9 = *(float *)&dword_140404A6C[v1 + 280651442];
  v10 = *(float *)&dword_140404A6C[282486374] * *(float *)&dword_140404A6C[v1 + 280651452];
  v247[0] = (float)(*(float *)&dword_140404A6C[282486350] * *(float *)&dword_140404A6C[v1 + 280652315])
          + *(float *)&dword_140404A6C[v1 + 280652300];
  v245 = v3;
  v246 = v5;
  v11 = (float)(*(float *)&dword_140404A6C[282486425] * *(float *)&dword_140404A6C[v1 + 280652549])
      + *(float *)&dword_140404A6C[v1 + 280652534];
  v12 = (float)(*(float *)&dword_140404A6C[282486425] * *(float *)&dword_140404A6C[v1 + 280652548])
      + *(float *)&dword_140404A6C[v1 + 280652533];
  v247[1] = (float)(*(float *)&dword_140404A6C[282486425] * *(float *)&dword_140404A6C[v1 + 280652547])
          + *(float *)&dword_140404A6C[v1 + 280652532];
  v247[3] = v11;
  v13 = *(float *)&dword_140404A6C[282486299] * *(float *)&dword_140404A6C[v1 + 280651452];
  v247[2] = v12;
  v228 = (float)(v13 + v6) + (float)(*(float *)&dword_140404A6C[282486300] * v4);
  v236 = v228;
  v14 = (float)(*(float *)&dword_140404A6C[282486299] * *(float *)&dword_140404A6C[v1 + 280651454]) + v9;
  v229 = (float)((float)(*(float *)&dword_140404A6C[282486299] * *(float *)&dword_140404A6C[v1 + 280651453]) + v7)
       + (float)(*(float *)&dword_140404A6C[282486300] * v8);
  v237 = v229;
  v15 = *(float *)&dword_140404A6C[v1 + 280651457];
  v16 = v14 + (float)(*(float *)&dword_140404A6C[282486300] * v15);
  v17 = *(float *)&dword_140404A6C[282486375] * v4;
  v18 = *(float *)&dword_140404A6C[282486374] * *(float *)&dword_140404A6C[v1 + 280651453];
  v19 = *(float *)&dword_140404A6C[282486374] * *(float *)&dword_140404A6C[v1 + 280651454];
  v211 = v16;
  *(float *)v238 = v16;
  v202 = (float)(v10 + v6) + v17;
  *(float *)&v238[1] = v202;
  v201 = (float)(v18 + v7) + (float)(*(float *)&dword_140404A6C[282486375] * v8);
  *(float *)&v238[2] = v201;
  v20 = (float)(v19 + v9) + (float)(*(float *)&dword_140404A6C[282486375] * v15);
  *(_QWORD *)&v21 = dword_140404A6C[v1 + 280651341];
  v250 = 1065353216;
  v248 = xmmword_140278D30;
  v203 = v20;
  *(float *)&v238[3] = v20;
  v249 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v248, (float *)&v248 + 3, v21);
  *(_QWORD *)&v22 = dword_140404A6C[v1 + 280651341];
  v244 = 1065353216;
  v242 = xmmword_140278D30;
  v243 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v242, (float *)&v242 + 3, v22);
  v23 = (float *)&dword_140404A6C[v1 + 280657914];
  *(float *)&v22 = *(float *)&dword_1402F6190 * 1.75;
  dword_140404A6C[v1 + 280657993] = 0;
  *(float *)&dword_140404A6C[v1 + 280657980] = *(float *)&dword_140404A6C[v1 + 280657992]
                                             + *(float *)&dword_140404A6C[v1 + 280657980];
  *(float *)&dword_140404A6C[v1 + 280657981] = *(float *)&dword_140404A6C[v1 + 280657981]
                                             + *(float *)&dword_140404A6C[v1 + 280657993];
  v24 = *(float *)&dword_1402F6188 * 1.75;
  *(float *)&dword_140404A6C[v1 + 280657982] = *(float *)&dword_140404A6C[v1 + 280657982]
                                             + *(float *)&dword_140404A6C[v1 + 280657994];
  v25 = *(float *)&dword_140404A6C[v1 + 280651373];
  v26 = *(float *)&v243 * 0.25;
  dword_140404A6C[v1 + 280657981] = dword_140404A6C[v1 + 280657915];
  v27 = (float)(v25 * 0.875) + v26;
  v231 = *(float *)&dword_140404A6C[v1 + 280657914] - v24;
  v232 = *(float *)&dword_140404A6C[v1 + 280657915] - (float)(*(float *)&dword_1402F618C * 1.75);
  v233 = *(float *)&dword_140404A6C[v1 + 280657916] - *(float *)&v22;
  if ( (unsigned int)sub_1400DC050((float *)&dword_140404A6C[v1 + 280657914], &v231, 0) )
    *(float *)&dword_140404A6C[v1 + 280657981] = *(float *)&dword_140404A6C[73006982] + v27;
  v28 = *(float *)&dword_140404A6C[v1 + 280657930];
  v29 = *(float *)&dword_140404A6C[v1 + 280657931];
  v30 = *(float *)&dword_140404A6C[v1 + 280657932];
  v31 = (float)(*(float *)&dword_140404A6C[v1 + 280657981] - v23[1]) * 0.375;
  v32 = (float)((float)(*(float *)&dword_140404A6C[v1 + 280657980] - *v23) * 0.375)
      - (float)((float)(v28 - *(float *)&dword_140404A6C[v1 + 280657992]) * 0.75);
  v33 = (float)(*(float *)&dword_140404A6C[v1 + 280657982] - v23[2]) * 0.375;
  v210 = 0.75;
  v34 = v32 - v28;
  v35 = (float)(v29 - *(float *)&dword_140404A6C[v1 + 280657993]) * 0.75;
  v209 = v34;
  v36 = (float)(v31 - v35) - v29;
  v37 = v33 - (float)((float)(v30 - *(float *)&dword_140404A6C[v1 + 280657994]) * 0.75);
  v207 = v36;
  v38 = v37 - v30;
  v208 = v38;
  if ( v36 <= 0.5 )
  {
    if ( v36 < 0.0 )
    {
      v36 = 0.0;
      v207 = 0.0;
    }
  }
  else
  {
    v207 = 0.5;
    v36 = 0.5;
  }
  *(float *)&v39 = *(float *)&dword_140404A6C[v1 + 280658028] + 0.125;
  v40 = v28 + v228;
  v41 = v28 + v202;
  v42 = v30;
  v43 = v29 + v229;
  v44 = v29 + v201;
  v45 = v30 + v203;
  dword_140404A6C[v1 + 280658028] = v39;
  v46 = v42 + v16;
  if ( *(float *)&v39 > 1.0 )
    dword_140404A6C[v1 + 280658028] = 1065353216;
  v212 = v40 + (float)(v34 * 3.0);
  v214 = v46 + (float)(v38 * 3.0);
  v215 = v41 + (float)(v34 * 3.0);
  v217 = v45 + (float)(v38 * 3.0);
  v213 = v43 + (float)(v36 * 3.0);
  v216 = v44 + (float)(v36 * 3.0);
  sub_14010E370(&v219, (float *)&v242);
  v47 = (float *)&dword_140404A6C[v1 + 280657917];
  sub_14010E370(SR_VEC_LANES(128, v230, f32), (float *)&dword_140404A6C[v1 + 280657917]);
  v48 = SR_VEC_LANES(128, v230, u32)[3];
  v49 = SR_VEC_LANES(128, v230, f32)[2];
  v50 = SR_VEC_LANES(128, v230, f32)[0];
  v51 = SR_VEC_LANES(128, v230, f32)[1];
  v204 = SR_VEC_LANES(128, v230, f32)[3];
  if ( (float)((float)((float)(v222 * SR_VEC_LANES(128, v230, f32)[3]) + (float)(v221 * SR_VEC_LANES(128, v230, f32)[2]))
             + (float)((float)(v219 * SR_VEC_LANES(128, v230, f32)[0]) + (float)(v220 * SR_VEC_LANES(128, v230, f32)[1]))) < 0.0 )
  {
    v230 = _mm_xor_ps(v230, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v49 = SR_VEC_LANES(128, v230, f32)[2];
    v51 = SR_VEC_LANES(128, v230, f32)[1];
    v50 = SR_VEC_LANES(128, v230, f32)[0];
    v52 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v230, v230, 255), u64)[0];
    v204 = *(float *)&v52;
    v48 = v52;
  }
  v53 = -v51;
  v54 = -v49;
  v55 = -v50;
  HIDWORD(v57) = HIDWORD(v48);
  v56 = (float)((float)((float)(*(float *)&v48 * v219) + (float)(v55 * v222)) + (float)(v53 * v221))
      - (float)(v54 * v220);
  *(float *)&v57 = (float)((float)((float)(*(float *)&v48 * v220) - (float)(v55 * v221)) + (float)(v53 * v222))
                 + (float)(v54 * v219);
  v58 = (float)((float)((float)(*(float *)&v48 * v221) + (float)(v55 * v220)) - (float)(v53 * v219))
      + (float)(v54 * v222);
  v59 = (float)((float)((float)(v222 * v204) - (float)(v55 * v219)) - (float)(v53 * v220)) - (float)(v54 * v221);
  v60 = fsqrt((float)((float)(*(float *)&v57 * *(float *)&v57) + (float)(v56 * v56)) + (float)(v58 * v58));
  if ( v60 == 0.0 )
  {
    v61 = 0.0;
    v57 = 0;
    v62 = 0.0;
  }
  else
  {
    v61 = v56 * (float)(1.0 / v60);
    *(float *)&v57 = *(float *)&v57 * (float)(1.0 / v60);
    v62 = v58 * (float)(1.0 / v60);
  }
  v63 = acos(fminf(fmaxf(v59, -1.0), 1.0));
  v64 = v63 + v63;
  v65 = *(float *)&dword_140404A6C[v1 + 280657936];
  v66 = *(float *)&dword_140404A6C[v1 + 280657937];
  v67 = *(float *)&dword_140404A6C[v1 + 280657938];
  v68 = (float)((float)((float)(v61 * v64) * 0.375) - (float)(v65 * 0.75)) - v65;
  *(float *)&v57 = (float)((float)((float)(*(float *)&v57 * v64) * 0.375) - (float)(v66 * 0.75)) - v66;
  v69 = (float)((float)((float)(v62 * v64) * 0.375) - (float)(v67 * 0.75)) - v67;
  v70 = fsqrt((float)((float)(*(float *)&v57 * *(float *)&v57) + (float)(v68 * v68)) + (float)(v69 * v69));
  if ( v70 > 0.25 )
  {
    v68 = (float)(v68 * (float)(1.0 / v70)) * 0.25;
    *(float *)&v57 = (float)(*(float *)&v57 * (float)(1.0 / v70)) * 0.25;
    v69 = (float)(v69 * (float)(1.0 / v70)) * 0.25;
  }
  v242 = *(_OWORD *)v2;
  v71 = v68 + v65;
  v72 = *(float *)&v57 + v66;
  v243 = *((_OWORD *)v2 + 1);
  v73 = v69 + v67;
  v244 = v2[8];
  HIDWORD(v74) = HIDWORD(v57);
  *(float *)&v74 = fsqrt((float)((float)(v72 * v72) + (float)(v71 * v71)) + (float)(v73 * v73));
  if ( *(float *)&v74 > 0.000015258789 )
  {
    v231 = v71 * (float)(1.0 / *(float *)&v74);
    v232 = v72 * (float)(1.0 / *(float *)&v74);
    v233 = v73 * (float)(1.0 / *(float *)&v74);
    sub_14007B2A0((__int64)&v242, &v231, v74);
  }
  v75 = v229 - v23[1];
  v76 = v211 - v23[2];
  v77 = v228 - *v23;
  v78 = v201 - v23[1];
  v79 = v203 - v23[2];
  v80 = v202 - *v23;
  v204 = v68 * 3.0;
  v206 = *(float *)&v57 * 3.0;
  v205 = v69 * 3.0;
  v202 = v80;
  v201 = v78;
  v203 = v79;
  v239 = (float)((float)(v75 * (float)(v69 * 3.0)) - (float)(v76 * (float)(*(float *)&v57 * 3.0))) + v212;
  v240 = v213 + (float)((float)(v76 * (float)(v68 * 3.0)) - (float)(v77 * (float)(v69 * 3.0)));
  v241[0] = v214 + (float)((float)(v77 * (float)(*(float *)&v57 * 3.0)) - (float)(v75 * (float)(v68 * 3.0)));
  v241[1] = v215 + (float)((float)(v78 * (float)(v69 * 3.0)) - (float)(v79 * (float)(*(float *)&v57 * 3.0)));
  v241[2] = v216 + (float)((float)(v79 * (float)(v68 * 3.0)) - (float)(v80 * (float)(v69 * 3.0)));
  v81 = (float)(v36 * v76) - (float)(v38 * v75);
  v241[3] = v217 + (float)((float)(v80 * (float)(*(float *)&v57 * 3.0)) - (float)(v78 * (float)(v68 * 3.0)));
  v82 = (float)(v38 * v77) - (float)(v34 * v76);
  v83 = v34 * v75;
  v84 = *v47;
  v85 = *(float *)&dword_140404A6C[v1 + 280657921];
  v86 = v36;
  v87 = *(float *)&dword_140404A6C[v1 + 280657920];
  v88 = *(float *)&dword_140404A6C[v1 + 280657923];
  v89 = *(float *)&dword_140404A6C[v1 + 280657922];
  v90 = *(float *)&dword_140404A6C[v1 + 280657925];
  v91 = v86 * v77;
  v92 = *(float *)&dword_140404A6C[v1 + 280657924];
  v93 = v83 - v91;
  v94 = (float)((float)((float)(v82 * v47[1]) + (float)(v81 * *v47)) + (float)(v93 * v47[2])) * -3.0;
  v95 = (float)((float)((float)(v82 * v85) + (float)(v81 * v87)) + (float)(v93 * v89)) * -0.75;
  v96 = (float)((float)((float)(v82 * v92) + (float)(v81 * v88)) + (float)(v93 * v90)) * -6.0;
  v97 = (float)((float)(v96 * v88) + (float)(v95 * v87)) + (float)((float)(v94 * *v47) + v204);
  v98 = v94;
  v99 = (float)(v94 * v47[2]) + v205;
  v100 = (float)(v98 * v47[1]) + (float)(*(float *)&v57 * 3.0);
  *(float *)v234 = v97;
  v101 = v208;
  v235[0] = (float)((float)(v96 * v90) + (float)(v95 * v89)) + v99;
  *(float *)&v234[1] = (float)((float)(v96 * v92) + (float)(v95 * v85)) + v100;
  v102 = (float)(v208 * v202) - (float)(v209 * v203);
  v209 = (float)(v209 * v201) - (float)(v207 * v202);
  v208 = v102;
  v103 = v102;
  v104 = (float)(v102 * v47[1]) + (float)((float)((float)(v207 * v203) - (float)(v101 * v201)) * v84);
  v219 = 0.0625;
  v105 = v209 * v47[2];
  v106 = (float *)v234;
  v220 = 0.0625;
  v107 = &dword_140404A6C[v1 + 280652451];
  v108 = v103;
  v221 = 0.0625;
  v109 = (float)(v207 * v203) - (float)(v101 * v201);
  v110 = 10;
  v111 = (float)(v104 + v105) * -3.0;
  v112 = (float)((float)((float)(v208 * v92) + (float)(v109 * v88)) + (float)(v209 * v90)) * -6.0;
  v113 = (float)((float)((float)(v108 * v85) + (float)(v109 * v87)) + (float)(v209 * v89)) * -0.75;
  v114 = (float)((float)(v112 * v88) + (float)(v113 * v87)) + (float)((float)(v111 * v84) + v204);
  v115 = v111;
  v116 = v111 * v47[2];
  v117 = v115 * v47[1];
  v235[1] = v114;
  v118 = &dword_140404A6C[v1 + 280658031];
  v119 = 0;
  v235[3] = (float)((float)(v112 * v90) + (float)(v113 * v89)) + (float)(v116 + v205);
  v235[2] = (float)((float)(v112 * v92) + (float)(v113 * v85)) + (float)(v117 + v206);
  do
  {
    if ( *(v118 - 5) == 1 && !*v107 )
    {
      v120 = *(float *)((char *)&v236 + v119 * 4) + *(float *)&dword_140404A6C[v1 + 280657930];
      v121 = *(float *)&v238[v119 - 1] + *(float *)&dword_140404A6C[v1 + 280657931];
      *(_QWORD *)&v234[v119] = 0;
      v235[v119] = 0.0;
      *(float *)((char *)&v239 + v119 * 4) = v120;
      v122 = *(float *)&v238[v119] + *(float *)&dword_140404A6C[v1 + 280657932];
      v241[v119 - 1] = v121;
      v241[v119] = v122;
    }
    if ( *(float *)&dword_140404A6C[v1 + 280658028] >= 1.0 )
    {
      v123 = *(float *)((char *)&v236 + v119 * 4) + *(float *)&dword_140404A6C[v1 + 280657930];
      v124 = *(float *)&v238[v119 - 1] + *(float *)&dword_140404A6C[v1 + 280657931];
      *(_QWORD *)&v234[v119] = 0;
      v235[v119] = 0.0;
      *(float *)((char *)&v239 + v119 * 4) = v123;
      v125 = *(float *)&v238[v119] + *(float *)&dword_140404A6C[v1 + 280657932];
      v241[v119 - 1] = v124;
      v241[v119] = v125;
    }
    *(_QWORD *)&v126 = dword_140404A6C[v1 + 280651341];
    v252 = 1065353216;
    v251[0] = xmmword_140278D30;
    v251[1] = xmmword_140278D30;
    sub_14007B2A0((__int64)v251, (float *)v251 + 3, v126);
    sub_14007B2A0((__int64)v251, (float *)v251, sr_export_float_lane_container(v118[24] ^ 0x80000000LL));
    sub_14007AE70((float *)v251, (float *)v251, (float *)&dword_140404A6C[v1 + 280651452]);
    sub_14010E370(SR_VEC_LANES(128, v230, f32), (float *)v251);
    v127 = *(v118 - 5);
    v128 = *(float *)((char *)&v245 + v119 * 4) - *(float *)((char *)&v236 + v119 * 4);
    v129 = v247[v119 - 1] - *(float *)&v238[v119 - 1];
    v130 = v247[v119] - *(float *)&v238[v119];
    if ( v127 == 1 )
    {
      v131 = *(float *)((char *)&v245 + v119 * 4) - *(float *)((char *)&v239 + v119 * 4);
      v132 = v247[v119 - 1] - v241[v119 - 1];
      v133 = v247[v119] - v241[v119];
      v226 = 0x3E96CBE43E96CBE4LL;
      v231 = v131;
      v232 = v132;
      v233 = v133;
      v227 = 1050069988;
      v223 = 1064304640;
      v224 = 1064304640;
      v225 = 1064304640;
      if ( !*v107 )
      {
        v231 = v128;
        v232 = v129;
        v233 = v130;
        *(_QWORD *)&v234[v119] = 0;
        v235[v119] = 0.0;
      }
      v134 = *(float *)&dword_140404A6C[v1 + 280658028];
    }
    else
    {
      v135 = *((float *)v118 - 2);
      v136 = *(float *)v118;
      v134 = *(float *)&dword_140404A6C[v1 + 280658028];
      *(_QWORD *)&v234[v119] = 0;
      v137 = fminf(v134, 1.0);
      v235[v119] = 0.0;
      v226 = 0x3F96CBE43F96CBE4LL;
      v227 = 1066847204;
      v223 = 1061158912;
      v224 = 1061158912;
      v225 = 1061158912;
      v231 = v135 - (float)(v135 * v137);
      v138 = -0.375 - *((float *)v118 - 1);
      v233 = v136 - (float)(v136 * v137);
      v232 = (float)(v138 * v137) + *((float *)v118 - 1);
    }
    if ( v134 >= 1.0 )
    {
      v226 = 0;
      v227 = 0;
      v223 = 1065353216;
      v224 = 1065353216;
      v225 = 1065353216;
    }
    sub_1400B1450(
      v218,
      0,
      v110,
      &v231,
      (float *)&v242,
      v106,
      1.0,
      0,
      &v230,
      (float *)&v226,
      &v223,
      (unsigned int *)&v219,
      0.78539819,
      (v127 == 1) + 1);
    v106 += 3;
    v110 += 3;
    v107 += 234;
    v118 += 55;
    v119 += 3;
  }
  while ( v110 < 16 );
  dword_140404A6C[v1 + 280658004] = dword_140404A6C[v1 + 280658026] == 1;
  v139 = 0.5;
  dword_140404A6C[v1 + 280651325] = 1;
  v140 = fmaxf(*(float *)&dword_140404A6C[v1 + 280657911], -0.5);
  dword_140404A6C[v1 + 280658026] = 0;
  dword_140404A6C[v1 + 280658081] = 0;
  if ( v140 <= 0.5 )
    v139 = v140;
  v141 = fmaxf(*(float *)&dword_140404A6C[v1 + 280657912], -0.75);
  v142 = v210;
  *(float *)&dword_140404A6C[v1 + 280657911] = v139;
  if ( v141 <= v142 )
    v142 = v141;
  v143 = v139 * 0.125;
  v144 = (float *)&dword_140404A6C[v1 + 280651442];
  v145 = 2;
  *(float *)&dword_140404A6C[v1 + 280657912] = v142;
  v146 = v142 * 0.125;
  v205 = 0.0;
  v203 = 0.0;
  v202 = 0.0;
  v211 = (float)(v146 * *((float *)&v248 + 3)) + (float)(v143 * *(float *)&v248);
  v201 = 0.0;
  v206 = (float)(v146 * *(float *)&v249) + (float)(v143 * *((float *)&v248 + 1));
  v210 = (float)(v146 * *((float *)&v249 + 1)) + (float)(v143 * *((float *)&v248 + 2));
  do
  {
    v147 = v144[30];
    v148 = v144[498];
    v149 = v147 * *(v144 - 2);
    v150 = v148 * v144[467];
    v151 = v144[576];
    *(float *)&v218 = v147 * *(v144 - 1);
    v152 = v147 * *v144;
    v153 = v144[108];
    v154 = v153 * v144[76];
    v215 = v152;
    v217 = v153 * v144[77];
    v214 = v153 * v144[78];
    v155 = v144[186];
    v156 = v155 * v144[156];
    v157 = v155 * v144[155];
    v158 = v155 * v144[154];
    v213 = v156;
    v159 = v144[264];
    v216 = v157;
    v160 = v159;
    v161 = v159 * v144[234];
    v162 = v159 * v144[232];
    v163 = v160 * v144[233];
    v212 = v161;
    v164 = v144[342] * v144[311];
    v165 = v144[342] * v144[312];
    v166 = v144[420] * v144[389];
    v167 = v148 * v144[466];
    v168 = v144[420] * v144[390];
    v169 = v148 * v144[468];
    v170 = (float)((float)((float)((float)((float)((float)((float)(v203 + v149) + v154) + v158) + v162)
                                 + (float)(v144[342] * v144[310]))
                         + (float)(v144[420] * v144[388]))
                 + v167)
         + (float)(v151 * v144[544]);
    v171 = v151 * v144[545];
    v203 = v170;
    v172 = (float)((float)((float)((float)((float)((float)((float)(v202 + *(float *)&v218) + v217) + v157) + v163) + v164)
                         + v166)
                 + v150)
         + v171;
    v202 = v172;
    v173 = (float)((float)((float)((float)((float)((float)((float)(v201 + v215) + v214) + v213) + v212) + v165) + v168)
                 + v169)
         + (float)(v151 * v144[546]);
    v174 = v144[30];
    v201 = v173;
    v175 = (float)((float)((float)((float)((float)((float)(v174 + v205) + v144[108]) + v144[186]) + v144[264])
                         + v144[342])
                 + v144[420])
         + v144[498];
    v144 += 624;
    v176 = v175 + v151;
    v205 = v176;
    --v145;
  }
  while ( v145 );
  if ( v176 > 0.0 )
  {
    v172 = v172 * (float)(1.0 / v176);
    v173 = v173 * (float)(1.0 / v176);
    v202 = v172;
    v170 = v170 * (float)(1.0 / v176);
    v201 = v173;
  }
  v177 = dword_140404A6C[v1 + 280657908];
  if ( v177 >= 8 )
  {
    if ( v177 >= 16 )
    {
      if ( v177 >= 24 )
        v178 = 0.083333336;
      else
        v178 = 0.06666667;
    }
    else
    {
      v178 = 0.050000001;
    }
  }
  else
  {
    v178 = 0.033333335;
  }
  v179 = *(float *)&dword_140404A6C[v1 + 280657931];
  v180 = dword_140404A6C[v1 + 280657930];
  v181 = v178 - v179;
  v182 = dword_140404A6C[v1 + 280657932];
  v183 = v210;
  v184 = &dword_140404A6C[v1 + 280651439];
  v185 = v211;
  v186 = 16;
  v187 = v206;
  do
  {
    v188 = 47LL * (int)*v184;
    dword_140404A6C[v188 + 18215718] = v180;
    dword_140404A6C[v188 + 18215720] = v182;
    *(float *)&dword_140404A6C[v188 + 18215719] = v181 + v179;
    v189 = *(float *)&dword_140404A6C[v188 + 18215716] - v172;
    v190 = *(float *)&dword_140404A6C[v188 + 18215717] - v173;
    v191 = *(float *)&dword_140404A6C[v188 + 18215715] - v170;
    *(float *)&dword_140404A6C[v188 + 18215718] = (float)((float)(v183 * v189) - (float)(v187 * v190))
                                                + *(float *)&dword_140404A6C[v188 + 18215718];
    *(float *)&dword_140404A6C[v188 + 18215719] = (float)((float)(v185 * v190) - (float)(v183 * v191))
                                                + *(float *)&dword_140404A6C[v188 + 18215719];
    *(float *)&dword_140404A6C[v188 + 18215720] = (float)((float)(v187 * v191) - (float)(v185 * v189))
                                                + *(float *)&dword_140404A6C[v188 + 18215720];
    *(float *)&dword_140404A6C[v188 + 18215736] = v185;
    *(float *)&dword_140404A6C[v188 + 18215737] = v187;
    *(float *)&dword_140404A6C[v188 + 18215738] = v183;
    *(_QWORD *)&dword_140404A6C[v188 + 18215733] = 0;
    dword_140404A6C[v188 + 18215735] = 0;
    v192 = (float)((float)((float)(*(float *)&dword_140404A6C[v188 + 18215737]
                                 * *(float *)&dword_140404A6C[v188 + 18215725])
                         + (float)(*(float *)&dword_140404A6C[v188 + 18215724]
                                 * *(float *)&dword_140404A6C[v188 + 18215736]))
                 + (float)(*(float *)&dword_140404A6C[v188 + 18215738] * *(float *)&dword_140404A6C[v188 + 18215726]))
         * *(float *)&dword_140404A6C[v188 + 18215742];
    *(float *)&v193 = *(float *)&dword_140404A6C[v188 + 18215724] * v192;
    dword_140404A6C[v188 + 18215733] = v193;
    *(float *)&dword_140404A6C[v188 + 18215734] = (float)(v192 * *(float *)&dword_140404A6C[v188 + 18215725])
                                                + *(float *)&dword_140404A6C[v188 + 18215734];
    *(float *)&dword_140404A6C[v188 + 18215735] = (float)(v192 * *(float *)&dword_140404A6C[v188 + 18215726])
                                                + *(float *)&dword_140404A6C[v188 + 18215735];
    v194 = (float)((float)((float)(*(float *)&dword_140404A6C[v188 + 18215737]
                                 * *(float *)&dword_140404A6C[v188 + 18215728])
                         + (float)(*(float *)&dword_140404A6C[v188 + 18215727]
                                 * *(float *)&dword_140404A6C[v188 + 18215736]))
                 + (float)(*(float *)&dword_140404A6C[v188 + 18215738] * *(float *)&dword_140404A6C[v188 + 18215729]))
         * *(float *)&dword_140404A6C[v188 + 18215743];
    *(float *)&v195 = (float)(*(float *)&dword_140404A6C[v188 + 18215727] * v194) + *(float *)&v193;
    dword_140404A6C[v188 + 18215733] = v195;
    *(float *)&dword_140404A6C[v188 + 18215734] = (float)(v194 * *(float *)&dword_140404A6C[v188 + 18215728])
                                                + *(float *)&dword_140404A6C[v188 + 18215734];
    *(float *)&dword_140404A6C[v188 + 18215735] = (float)(v194 * *(float *)&dword_140404A6C[v188 + 18215729])
                                                + *(float *)&dword_140404A6C[v188 + 18215735];
    v184 += 78;
    v172 = v202;
    v196 = (float)((float)((float)(*(float *)&dword_140404A6C[v188 + 18215737]
                                 * *(float *)&dword_140404A6C[v188 + 18215731])
                         + (float)(*(float *)&dword_140404A6C[v188 + 18215730]
                                 * *(float *)&dword_140404A6C[v188 + 18215736]))
                 + (float)(*(float *)&dword_140404A6C[v188 + 18215738] * *(float *)&dword_140404A6C[v188 + 18215732]))
         * *(float *)&dword_140404A6C[v188 + 18215744];
    *(float *)&dword_140404A6C[v188 + 18215733] = (float)(*(float *)&dword_140404A6C[v188 + 18215730] * v196)
                                                + *(float *)&v195;
    v173 = v201;
    *(float *)&dword_140404A6C[v188 + 18215734] = (float)(v196 * *(float *)&dword_140404A6C[v188 + 18215731])
                                                + *(float *)&dword_140404A6C[v188 + 18215734];
    *(float *)&dword_140404A6C[v188 + 18215735] = (float)(v196 * *(float *)&dword_140404A6C[v188 + 18215732])
                                                + *(float *)&dword_140404A6C[v188 + 18215735];
    --v186;
  }
  while ( v186 );
  *(float *)&dword_140404A6C[v1 + 280657931] = (float)(v181 * 3.0) + v179;
  if ( (int)dword_140404A6C[v1 + 280658139] > 0 )
  {
    v197 = 47LL * (int)dword_140404A6C[1760 * dword_140404A6C[v1 + 280658140] + 278845915];
    *(float *)&dword_140404A6C[v197 + 18215719] = v181 + *(float *)&dword_140404A6C[v197 + 18215719];
  }
  if ( (int)dword_140404A6C[v1 + 280658149] > 0 )
  {
    v198 = 47LL * (int)dword_140404A6C[1760 * dword_140404A6C[v1 + 280658150] + 278845915];
    *(float *)&dword_140404A6C[v198 + 18215719] = v181 + *(float *)&dword_140404A6C[v198 + 18215719];
  }
  dword_140404A6C[v1 + 280657908] = 0;
  dword_140404A6C[v1 + 280657979] = 1070141403;
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B91E0) ----------------------------------------------------
__int64            sub_1400B91E0(int a1, float *a2, float *a3)
{
  unsigned int v3; // ebp
  float v4; // xmm6_4
  __int64 v7; // rbx
  unsigned int v8; // xmm7_4
  unsigned int v9; // xmm8_4
  unsigned int v10; // xmm9_4
  unsigned int v11; // xmm10_4
  unsigned int v12; // xmm11_4
  unsigned int v13; // xmm12_4
  unsigned int v14; // xmm13_4
  unsigned int v15; // xmm14_4
  unsigned int v16; // xmm15_4
  __int64 v17; // rsi
  signed int v18; // edi
  int *v19; // rbx
  unsigned int v21; // [rsp+F0h] [rbp+8h]

  v3 = -1;
  v4 = 1.0;
  v7 = a1;
  if ( (unsigned int)sub_1400DC050(a2, a3, 0) )
  {
    v8 = dword_140404A6C[73006981];
    v9 = dword_140404A6C[73006982];
    v10 = dword_140404A6C[73006983];
    v11 = dword_140404A6C[73006984];
    v12 = dword_140404A6C[73006985];
    v13 = dword_140404A6C[73006986];
    v14 = dword_140404A6C[73006989];
    v15 = dword_140404A6C[73006990];
    v16 = dword_140404A6C[73006991];
    v4 = *(float *)&dword_140404A6C[73006987];
  }
  else
  {
    v10 = v21;
    v8 = v21;
    v13 = v21;
    v14 = v21;
    v15 = v21;
    v9 = v21;
    v16 = v21;
    v12 = v21;
    v11 = v21;
  }
  v17 = 7166 * v7;
  v18 = 0;
  if ( (int)dword_140404A6C[7166 * v7 + 280651427] > 0 )
  {
    v19 = (int *)&dword_140404A6C[v17 + 280651428];
    do
    {
      if ( (unsigned int)sub_1400DC940(*v19, a2, a3, 0) && *(float *)&dword_140404A6C[73006987] < v4 )
      {
        v8 = dword_140404A6C[73006981];
        v4 = *(float *)&dword_140404A6C[73006987];
        v9 = dword_140404A6C[73006982];
        v10 = dword_140404A6C[73006983];
        v11 = dword_140404A6C[73006984];
        v12 = dword_140404A6C[73006985];
        v13 = dword_140404A6C[73006986];
        v14 = dword_140404A6C[73006989];
        v15 = dword_140404A6C[73006990];
        v16 = dword_140404A6C[73006991];
        v3 = *v19;
      }
      ++v18;
      ++v19;
    }
    while ( v18 < (int)dword_140404A6C[v17 + 280651427] );
  }
  if ( v4 >= 1.0 )
    return 0;
  dword_140404A6C[73006981] = v8;
  dword_140404A6C[73006982] = v9;
  dword_140404A6C[73006983] = v10;
  dword_140404A6C[73006984] = v11;
  dword_140404A6C[73006985] = v12;
  dword_140404A6C[73006986] = v13;
  dword_140404A6C[73006989] = v14;
  dword_140404A6C[73006990] = v15;
  dword_140404A6C[73006991] = v16;
  *(float *)&dword_140404A6C[73006987] = v4;
  dword_140404A6C[73007011] = v3;
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A84898: using guessed type unsigned int;
// 151A848A0: using guessed type unsigned int;
// 151A848A4: using guessed type unsigned int;
// 151A848A8: using guessed type unsigned int;
// 151A848F8: using guessed type unsigned int;

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
  float *v55; // [rsp+30h] [rbp-A8h]
  __int64 v56; // [rsp+E0h] [rbp+8h]
  unsigned int *v57; // [rsp+E8h] [rbp+10h]
  __int64 v58; // [rsp+F0h] [rbp+18h]
  __int64 v59; // [rsp+F8h] [rbp+20h]

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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B9D90) ----------------------------------------------------
__int64            sub_1400B9D90(int a1)
{
  float v1; // xmm3_4
  float v2; // xmm7_4
  float v3; // xmm0_4
  __int64 v5; // r12
  float *v6; // rdi
  float *v7; // rbx
  float v8; // xmm9_4
  float v9; // xmm11_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm13_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm9_4
  float v16; // xmm1_4
  float v17; // xmm11_4
  float v18; // xmm13_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float *v21; // rsi
  int v22; // r15d
  unsigned int *v23; // r14
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm4_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm2_4
  float v37; // xmm3_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm3_4
  float v42; // xmm1_4
  float v43; // xmm3_4
  __int64 v45; // [rsp+0h] [rbp-100h] BYREF
  float *v46; // [rsp+20h] [rbp-E0h]
  __int64 *v47; // [rsp+28h] [rbp-D8h]
  int v48; // [rsp+30h] [rbp-D0h]
  int v49; // [rsp+38h] [rbp-C8h]
  __int128 *v50; // [rsp+40h] [rbp-C0h]
  float *v51; // [rsp+48h] [rbp-B8h]
  unsigned int *v52; // [rsp+50h] [rbp-B0h]
  unsigned int *v53; // [rsp+58h] [rbp-A8h]
  int v54; // [rsp+60h] [rbp-A0h]
  int v55; // [rsp+68h] [rbp-98h]
  unsigned int v56[4]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v57[4]; // [rsp+80h] [rbp-80h] BYREF
  float v58[4]; // [rsp+90h] [rbp-70h] BYREF
  float v59[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v60; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-40h] BYREF
  float v62; // [rsp+C8h] [rbp-38h]
  float v63; // [rsp+D0h] [rbp-30h]
  float v64; // [rsp+D4h] [rbp-2Ch]
  _DWORD v65[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-18h]

  v1 = *(float *)&dword_140404A6C[282486300];
  v2 = *(float *)&dword_140404A6C[282486299];
  v3 = *(float *)&dword_140404A6C[282486300];
  v5 = 7166LL * a1;
  v6 = (float *)&dword_140404A6C[v5 + 280651440];
  v7 = (float *)&dword_140404A6C[v5 + 280651452];
  dword_140404A6C[v5 + 280651334] = 0;
  dword_140404A6C[v5 + 280658026] = 0;
  dword_140404A6C[v5 + 280658081] = 0;
  v8 = *v7;
  v9 = v7[1];
  v10 = *(float *)&dword_140404A6C[v5 + 280651455];
  v11 = *(float *)&dword_140404A6C[v5 + 280651456];
  v12 = v7[2];
  v13 = *(float *)&dword_140404A6C[v5 + 280651457];
  v14 = (float)((float)(v9 * v2) + v6[1]) + (float)(v1 * v11);
  v63 = (float)((float)(*v7 * v2) + *v6) + (float)(v3 * v10);
  v64 = v14;
  v15 = (float)(v8 * *(float *)&dword_140404A6C[282486374]) + *v6;
  v16 = (float)((float)(v12 * v2) + v6[2]) + (float)(v13 * v1);
  v17 = (float)(v9 * *(float *)&dword_140404A6C[282486374]) + v6[1];
  v18 = (float)(v12 * *(float *)&dword_140404A6C[282486374]) + v6[2];
  *(float *)v65 = v16;
  *(float *)&v65[1] = v15 + (float)(*(float *)&dword_140404A6C[282486375] * v10);
  *(float *)&v65[2] = v17 + (float)(*(float *)&dword_140404A6C[282486375] * v11);
  *(float *)&v65[3] = v18 + (float)(*(float *)&dword_140404A6C[282486375] * v13);
  sub_1400ABB10(a1);
  if ( !dword_140404A6C[v5 + 280651324] )
  {
    v19 = (float)(*(float *)&dword_140404A6C[v5 + 280657931] * 16.0) - 0.875;
    v20 = (float)(*(float *)&dword_1402F618C * v19) + v6[1];
    *(float *)&v61 = (float)(*(float *)&dword_1402F6188 * v19) + *v6;
    *((float *)&v61 + 1) = v20;
    v62 = (float)(*(float *)&dword_1402F6190 * v19) + v6[2];
    sub_1400DC050((float *)&dword_140404A6C[v5 + 280651440], (float *)&v61, 0);
  }
  v21 = (float *)v65;
  v22 = 0;
  v23 = &dword_140404A6C[v5 + 280658055];
  v58[0] = 0.01840777;
  v58[1] = 0.01840777;
  v58[2] = 0.01840777;
  v56[0] = 1015021568;
  v56[1] = 1015021568;
  v56[2] = 1015021568;
  v57[0] = 1040187392;
  v57[1] = 1040187392;
  v57[2] = 1040187392;
  do
  {
    v23[1] = *v23;
    *v23 = 0;
    v24 = *v6;
    v25 = v6[1];
    v26 = v6[2];
    v27 = *v7 * 0.3125;
    v28 = v7[1] * 0.3125;
    if ( v22 )
    {
      v29 = v27 + v24;
      v30 = v28 + v25;
      v31 = (float)(v7[2] * 0.3125) + v26;
    }
    else
    {
      v29 = v24 - v27;
      v30 = v25 - v28;
      v31 = v26 - (float)(v7[2] * 0.3125);
    }
    v32 = *(float *)&dword_140404A6C[v5 + 280651458];
    v33 = *(float *)&dword_140404A6C[v5 + 280651455];
    v55 = 0;
    v54 = 1061752795;
    v53 = v56;
    v52 = v57;
    v51 = v58;
    v50 = &v60;
    v34 = v29 - (float)(v32 * 0.75);
    v49 = 0;
    v35 = *(float *)&dword_140404A6C[v5 + 280651459] * 0.75;
    v61 = 0;
    v48 = 1065353216;
    v36 = v34 - (float)(v33 * 0.125);
    v47 = &v61;
    v37 = v30 - v35;
    v38 = *(float *)&dword_140404A6C[v5 + 280651460];
    v39 = *(float *)&dword_140404A6C[v5 + 280651456] * 0.125;
    v62 = 0.0;
    v40 = v36 - *(v21 - 2);
    v46 = (float *)&dword_140404A6C[v5 + 280651452];
    v41 = v37 - v39;
    v42 = *(float *)&dword_140404A6C[v5 + 280651457] * 0.125;
    v59[0] = v40;
    v43 = v41 - *(v21 - 1);
    v60 = xmmword_140279490;
    v59[1] = v43;
    v59[2] = (float)((float)(v31 - (float)(v38 * 0.75)) - v42) - *v21;
    sub_1400B1450(
      a1,
      0,
      v22 + 2 * (v22 + 5),
      v59,
      v46,
      (float *)&v61,
      1.0,
      0,
      (__m128 *)&v60,
      v58,
      v57,
      v56,
      0.78539819,
      0);
    ++v22;
    v23 += 55;
    v21 += 3;
  }
  while ( v22 < 2 );
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140279490: using guessed type __int128 xmmword_140279490;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18399E2D8: using guessed type unsigned int;
// 18399E2DC: using guessed type unsigned int;

//----- (00000001400BA210) ----------------------------------------------------
__int64            sub_1400BA210(int a1)
{
  float v1; // xmm2_4
  __int64 v2; // rdi
  float v3; // xmm3_4
  float v4; // xmm7_4
  float v5; // xmm0_4
  __int64 v6; // rbx
  float *v7; // r12
  float *v8; // r13
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm9_4
  float v12; // xmm2_4
  float v13; // xmm6_4
  float v14; // xmm11_4
  float v15; // xmm5_4
  float v16; // xmm13_4
  float v17; // xmm4_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm13_4
  float v28; // xmm9_4
  float v29; // xmm11_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  __int64 v32; // rsi
  _DWORD *v33; // r15
  int v34; // r14d
  float v35; // xmm10_4
  float v36; // xmm11_4
  float v37; // xmm12_4
  float v38; // xmm13_4
  float v39; // xmm14_4
  float v40; // xmm15_4
  float v41; // xmm6_4
  float v42; // xmm7_4
  float v43; // xmm8_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm6_4
  float v47; // xmm2_4
  float v48; // xmm7_4
  float v49; // xmm8_4
  float v50; // xmm2_4
  float v51; // xmm0_4
  float v52; // xmm6_4
  float v53; // xmm7_4
  float v54; // xmm8_4
  unsigned __int64 v55; // rsi
  unsigned int *v56; // r9
  unsigned __int64 v57; // rsi
  unsigned int *v58; // r9
  __int64 v60; // [rsp+8h] [rbp-100h] BYREF
  __int64 v61; // [rsp+78h] [rbp-90h]
  int *v62; // [rsp+80h] [rbp-88h]
  __int128 v63; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v64[4]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v65[4]; // [rsp+A8h] [rbp-60h] BYREF
  float v66[4]; // [rsp+B8h] [rbp-50h] BYREF
  float v67[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-30h] BYREF
  float v69; // [rsp+E0h] [rbp-28h]
  float v70; // [rsp+E8h] [rbp-20h]
  float v71; // [rsp+ECh] [rbp-1Ch]
  float v72[4]; // [rsp+F0h] [rbp-18h]
  float v73; // [rsp+100h] [rbp-8h]
  float v74; // [rsp+104h] [rbp-4h]
  _DWORD v75[4]; // [rsp+108h] [rbp+0h]
  __int64 v76; // [rsp+118h] [rbp+10h]

  v1 = *(float *)&dword_140404A6C[282486350];
  v2 = 0;
  v3 = *(float *)&dword_140404A6C[282486425];
  v4 = *(float *)&dword_140404A6C[282486299];
  v5 = *(float *)&dword_140404A6C[282486350];
  v6 = 7166LL * a1;
  LODWORD(v61) = a1;
  v7 = (float *)&dword_140404A6C[v6 + 280651452];
  v8 = (float *)&dword_140404A6C[v6 + 280651440];
  dword_140404A6C[v6 + 280651334] = 0;
  dword_140404A6C[v6 + 280658026] = 0;
  dword_140404A6C[v6 + 280658081] = 0;
  v9 = v5 * *(float *)&dword_140404A6C[v6 + 280652314];
  v10 = (float)(v5 * *(float *)&dword_140404A6C[v6 + 280652313]) + *(float *)&dword_140404A6C[v6 + 280652298];
  v11 = *(float *)&dword_140404A6C[v6 + 280651452];
  v12 = (float)(v1 * *(float *)&dword_140404A6C[v6 + 280652315]) + *(float *)&dword_140404A6C[v6 + 280652300];
  v13 = *(float *)&dword_140404A6C[v6 + 280651455];
  v14 = *(float *)&dword_140404A6C[v6 + 280651453];
  v15 = *(float *)&dword_140404A6C[v6 + 280651456];
  v16 = *(float *)&dword_140404A6C[v6 + 280651454];
  v17 = *(float *)&dword_140404A6C[v6 + 280651457];
  v74 = v9 + *(float *)&dword_140404A6C[v6 + 280652299];
  v18 = v3 * *(float *)&dword_140404A6C[v6 + 280652548];
  v73 = v10;
  v19 = v3 * *(float *)&dword_140404A6C[v6 + 280652547];
  v20 = v18 + *(float *)&dword_140404A6C[v6 + 280652533];
  v21 = v3 * *(float *)&dword_140404A6C[v6 + 280652549];
  v22 = v19 + *(float *)&dword_140404A6C[v6 + 280652532];
  *(float *)v75 = v12;
  v23 = v21 + *(float *)&dword_140404A6C[v6 + 280652534];
  *(float *)&v75[2] = v20;
  *(float *)&v75[1] = v22;
  v24 = (float)(v11 * v4) + *(float *)&dword_140404A6C[v6 + 280651440];
  *(float *)&v75[3] = v23;
  v25 = (float)((float)(v14 * v4) + *(float *)&dword_140404A6C[v6 + 280651441])
      + (float)(v15 * *(float *)&dword_140404A6C[282486300]);
  v70 = v24 + (float)(v13 * *(float *)&dword_140404A6C[282486300]);
  v26 = (float)(v16 * v4) + *(float *)&dword_140404A6C[v6 + 280651442];
  v71 = v25;
  v27 = (float)(v16 * *(float *)&dword_140404A6C[282486374]) + *(float *)&dword_140404A6C[v6 + 280651442];
  v28 = (float)((float)(v11 * *(float *)&dword_140404A6C[282486374]) + *(float *)&dword_140404A6C[v6 + 280651440])
      + (float)(v13 * *(float *)&dword_140404A6C[282486375]);
  v29 = (float)((float)(v14 * *(float *)&dword_140404A6C[282486374]) + *(float *)&dword_140404A6C[v6 + 280651441])
      + (float)(v15 * *(float *)&dword_140404A6C[282486375]);
  v72[0] = v26 + (float)(v17 * *(float *)&dword_140404A6C[282486300]);
  v72[1] = v28;
  v72[2] = v29;
  v72[3] = v27 + (float)(v17 * *(float *)&dword_140404A6C[282486375]);
  sub_1400ABB10(a1);
  if ( !dword_140404A6C[v6 + 280651324] )
  {
    v30 = (float)(*(float *)&dword_140404A6C[v6 + 280657931] * 16.0) - 0.875;
    v31 = (float)(*(float *)&dword_1402F618C * v30) + v8[1];
    *(float *)&v68 = (float)(*(float *)&dword_1402F6188 * v30) + *v8;
    *((float *)&v68 + 1) = v31;
    v69 = (float)(*(float *)&dword_1402F6190 * v30) + v8[2];
    sub_1400DC050((float *)&dword_140404A6C[v6 + 280651440], (float *)&v68, 0);
  }
  v32 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v6 * 4 + 1126822832;
  v66[0] = 0.01840777;
  v62 = (int *)v32;
  v33 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v6 * 4 + 1126845576);
  v34 = 0;
  v66[1] = 0.01840777;
  v66[2] = 0.01840777;
  v64[0] = 1031798784;
  v64[1] = 1031798784;
  v64[2] = 1031798784;
  v65[0] = 1048576000;
  v65[1] = 1048576000;
  v65[2] = 1048576000;
  do
  {
    v33[1] = *v33;
    *v33 = 0;
    v35 = *(float *)&dword_140404A6C[v6 + 280657930];
    v36 = *(float *)&dword_140404A6C[v6 + 280657931];
    v37 = *(float *)&dword_140404A6C[v6 + 280657932];
    v38 = v35 + *(float *)((char *)&v70 + v2 * 4);
    v39 = v36 + v72[v2 - 1];
    v40 = v37 + v72[v2];
    v41 = v35 + *v8;
    v42 = v36 + v8[1];
    v43 = v37 + v8[2];
    if ( v34 )
    {
      v50 = fmaxf(*(float *)&dword_140404A6C[v6 + 280651453] * -0.5, 0.0);
      v48 = (float)((float)(v7[1] * 0.25) + v42) + (float)(v50 * v7[1]);
      v49 = (float)(v7[2] * 0.25) + v43;
      v51 = v50 * *v7;
      v47 = v50 * v7[2];
      v46 = (float)((float)(*v7 * 0.25) + v41) + v51;
    }
    else
    {
      v44 = -fmaxf(*(float *)&dword_140404A6C[v6 + 280651453] * 0.5, 0.0);
      v45 = v7[2];
      v46 = (float)(v41 - (float)(*v7 * 0.25)) + (float)(*v7 * v44);
      v47 = v45 * v44;
      v48 = (float)(v42 - (float)(v7[1] * 0.25)) + (float)(v7[1] * v44);
      v49 = v43 - (float)(v45 * 0.25);
    }
    v52 = (float)((float)(v46 - (float)(*(float *)&dword_140404A6C[v6 + 280651458] * 0.25))
                - (float)(*(float *)&dword_140404A6C[v6 + 280651455] * 0.75))
        - (float)(*(float *)&dword_140404A6C[v6 + 280651458] * 0.125);
    v53 = (float)((float)(v48 - (float)(*(float *)&dword_140404A6C[v6 + 280651459] * 0.25))
                - (float)(*(float *)&dword_140404A6C[v6 + 280651456] * 0.75))
        - (float)(*(float *)&dword_140404A6C[v6 + 280651459] * 0.125);
    v54 = (float)((float)((float)(v49 + v47) - (float)(*(float *)&dword_140404A6C[v6 + 280651460] * 0.25))
                - (float)(*(float *)&dword_140404A6C[v6 + 280651457] * 0.75))
        - (float)(*(float *)&dword_140404A6C[v6 + 280651460] * 0.125);
    if ( !dword_140404A6C[v6 + 280651324] )
    {
      v52 = (float)((float)(v52 - (float)(v35 + *(float *)((char *)&v73 + v2 * 4))) * 0.015625)
          + (float)(v35 + *(float *)((char *)&v73 + v2 * 4));
      v53 = (float)((float)(v53 - (float)(v36 + *(float *)&v75[v2 - 1])) * 0.015625)
          + (float)(v36 + *(float *)&v75[v2 - 1]);
      v54 = (float)((float)(v54 - (float)(v37 + *(float *)&v75[v2])) * 0.015625) + (float)(v37 + *(float *)&v75[v2]);
    }
    v63 = xmmword_140279490;
    v67[0] = v52 - v38;
    v67[1] = v53 - v39;
    v67[2] = v54 - v40;
    v68 = 0;
    v69 = 0.0;
    sub_1400B1450(
      v61,
      0,
      v34 + 2 * (v34 + 5),
      v67,
      (float *)&dword_140404A6C[v6 + 280651452],
      (float *)&v68,
      1.0,
      0,
      (__m128 *)&v63,
      v66,
      v65,
      v64,
      0.78539819,
      24);
    *(_QWORD *)&v63 = *(int *)(v32 - 312);
    v55 = 36 * v63;
    v56 = &dword_140404A6C[36 * v63 + 485543049];
    dword_140404A6C[36 * (_QWORD)v63 + 485543048] = 0;
    *(_QWORD *)v56 = 0;
    v56[2] = 0;
    sub_1400A9EF0(v61, 0, v34 + 2 * (v34 + 5), (float *)v56);
    if ( (float)((float)((float)(*(float *)&dword_140404A6C[v55 + 485543049]
                               * *(float *)&dword_140404A6C[v55 + 485543049])
                       + (float)(*(float *)&dword_140404A6C[v55 + 485543050]
                               * *(float *)&dword_140404A6C[v55 + 485543050]))
               + (float)(*(float *)&dword_140404A6C[v55 + 485543051] * *(float *)&dword_140404A6C[v55 + 485543051])) > 0.0 )
      dword_140404A6C[v55 + 485543048] = 1;
    dword_140404A6C[61 * (_QWORD)v63 + 486149287] = 981467136;
    *(_QWORD *)&v63 = *v62;
    v57 = 36 * v63;
    v58 = &dword_140404A6C[36 * v63 + 485543049];
    dword_140404A6C[36 * (_QWORD)v63 + 485543048] = 0;
    *(_QWORD *)v58 = 0;
    v58[2] = 0;
    sub_1400A9EF0(v61, 3 * v34 + 10, 3 * v34 + 11, (float *)v58);
    if ( (float)((float)((float)(*(float *)&dword_140404A6C[v57 + 485543049]
                               * *(float *)&dword_140404A6C[v57 + 485543049])
                       + (float)(*(float *)&dword_140404A6C[v57 + 485543050]
                               * *(float *)&dword_140404A6C[v57 + 485543050]))
               + (float)(*(float *)&dword_140404A6C[v57 + 485543051] * *(float *)&dword_140404A6C[v57 + 485543051])) > 0.0 )
      dword_140404A6C[v57 + 485543048] = 1;
    ++v34;
    v32 = (__int64)(v62 + 234);
    v33 += 55;
    v2 += 3;
    v62 += 234;
    dword_140404A6C[61 * (_QWORD)v63 + 486149287] = 981467136;
  }
  while ( v34 < 2 );
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140279490: using guessed type __int128 xmmword_140279490;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18399E2D8: using guessed type unsigned int;
// 18399E3A4: using guessed type unsigned int;
// 18399E4D0: using guessed type unsigned int;

//----- (00000001400BAA40) ----------------------------------------------------
__int64            sub_1400BAA40(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm9_4
  float v12; // xmm4_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm3_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm11_4
  float v21; // xmm0_4
  float v22; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  _BOOL8 v25; // rdx
  __int64 v26; // r8
  float v27; // xmm4_4
  float v28; // xmm5_4
  float v29; // xmm2_4
  unsigned int v30; // xmm6_4
  float v31; // xmm3_4
  float v32; // xmm1_4
  float v33; // xmm4_4
  float v34; // xmm5_4
  float v35; // xmm2_4
  unsigned int v36; // xmm6_4
  float v37; // xmm3_4
  float v38; // xmm1_4
  unsigned int *v39; // rdi
  __int64 v40; // r14
  float *v41; // rsi
  float v42; // xmm3_4
  float v43; // xmm2_4
  float v44; // xmm7_4
  float v45; // xmm1_4
  float v46; // xmm8_4
  float v47; // xmm7_4
  float v48; // xmm8_4
  float v49; // xmm5_4
  float v50; // xmm4_4
  float v51; // xmm6_4
  float v52; // xmm0_4
  bool v53; // zf
  float v54; // xmm2_4
  float v55; // xmm3_4
  float v56; // xmm4_4
  float v57; // xmm2_4
  _BOOL8 v58; // rcx
  __int64 v59; // rdx
  int v60; // ecx
  unsigned int v61; // eax
  int v62; // ecx
  float v63; // xmm0_4
  float v64; // xmm0_4
  __int64 v66; // [rsp+8h] [rbp-99h] BYREF
  float sr_step_start[3];
  unsigned sr_step_end[3];
  __int64 v73; // [rsp+48h] [rbp-59h]

  v6 = 7166LL * a1;
  v7 = dword_140404A6C[v6 + 280658024];
  if ( v7 > 0 )
    dword_140404A6C[v6 + 280658024] = v7 - 1;
  v8 = dword_140404A6C[v6 + 280658079];
  if ( v8 > 0 )
    dword_140404A6C[v6 + 280658079] = v8 - 1;
  if ( dword_140404A6C[v6 + 280658026] == 1 && dword_140404A6C[v6 + 280658081] == 1 )
  {
    v9 = *(float *)&dword_140404A6C[v6 + 280657933] * 8.0;
    sr_step_start[1] = 0.0;
    v10 = *(float *)&dword_140404A6C[v6 + 280657935] * 8.0;
    sr_step_end[1] = 0;
    v11 = *(float *)&dword_140404A6C[v6 + 280657916];
    v12 = (float)(v9 + *(float *)&dword_140404A6C[v6 + 280657914])
        + (float)(*(float *)&dword_140404A6C[v6 + 280657992] * 16.0);
    v13 = *(float *)&dword_140404A6C[v6 + 280651452] * 0.09375;
    v14 = *(float *)&dword_140404A6C[v6 + 280651454] * 0.09375;
    v15 = (float)(v10 + v11) + (float)(*(float *)&dword_140404A6C[v6 + 280657994] * 16.0);
    v16 = *(float *)&dword_140404A6C[v6 + 280651458] * 0.03125;
    v17 = *(float *)&dword_140404A6C[v6 + 280651460] * 0.03125;
    v18 = *(float *)&dword_140404A6C[v6 + 280652376] - (float)((float)(v12 - v13) - v16);
    v19 = *(float *)&dword_140404A6C[v6 + 280652378] - (float)((float)(v15 - v14) - v17);
    v20 = fsqrt((float)(v19 * v19) + (float)(v18 * v18));
    v21 = *(float *)&dword_140404A6C[v6 + 280652612] - (float)((float)(v14 + v15) - v17);
    sr_step_start[0] = *(float *)&dword_140404A6C[v6 + 280652610] - (float)((float)(v13 + v12) - v16);
    sr_step_start[2] = v21;
    v22 = fsqrt((float)(v21 * v21) + (float)(sr_step_start[0] * sr_step_start[0]));
    v23 = (float)((float)(*(float *)&dword_140404A6C[v6 + 280652378] + *(float *)&dword_140404A6C[v6 + 280652612]) * 0.5)
        - v11;
    (*(float *)&sr_step_end[0]) = (float)((float)(*(float *)&dword_140404A6C[v6 + 280652610] + *(float *)&dword_140404A6C[v6 + 280652376]) * 0.5)
        - *(float *)&dword_140404A6C[v6 + 280657914];
    (*(float *)&sr_step_end[2]) = v23;
    v24 = fsqrt((float)(v23 * v23) + (float)((*(float *)&sr_step_end[0]) * (*(float *)&sr_step_end[0])));
    if ( v20 > 0.125 || v22 > 0.125 || v24 > 0.125 )
    {
      v25 = v22 > v20;
      v26 = v6 * 4 + 220 * v25;
      if ( !*(unsigned int *)((char *)&dword_140404A6C[280658024] + v26)
        || dword_140404A6C[55 * (v22 <= v20) + 280658024 + v6] )
      {
        *(unsigned int *)((char *)&dword_140404A6C[280658026] + v26) = 3;
        *(unsigned int *)((char *)&dword_140404A6C[280658028] + v26) = 0;
        *(float *)((char *)&dword_140404A6C[280658029] + v26) = *(float *)(a3 + 12 * v25) - *(float *)(a2 + 12 * v25);
        *(float *)((char *)&dword_140404A6C[280658030] + v26) = *(float *)(a3 + 12 * v25 + 4)
                                                              - *(float *)(a2 + 12 * v25 + 4);
        *(float *)((char *)&dword_140404A6C[280658031] + v26) = *(float *)(a3 + 12 * v25 + 8)
                                                              - *(float *)(a2 + 12 * v25 + 8);
      }
    }
  }
  if ( dword_140404A6C[v6 + 280658026] == 1 )
  {
    if ( !dword_140404A6C[v6 + 280652451] )
      dword_140404A6C[v6 + 280658053] = 0;
    v27 = *(float *)&dword_140404A6C[v6 + 280658035];
    v28 = *(float *)&dword_140404A6C[v6 + 280658037];
    v29 = *(float *)&dword_140404A6C[v6 + 280652376] - v27;
    v30 = dword_140404A6C[v6 + 280658036];
    v31 = *(float *)&dword_140404A6C[v6 + 280652378] - v28;
    sr_step_start[1] = 0.0;
    sr_step_start[0] = v29;
    sr_step_start[2] = v31;
    v32 = fsqrt((float)(v31 * v31) + (float)(v29 * v29));
    if ( v32 > 0.03125 )
    {
      dword_140404A6C[v6 + 280658036] = v30;
      *(float *)&dword_140404A6C[v6 + 280658035] = (float)((float)(v29 * (float)(1.0 / v32)) * 0.03125) + v27;
      *(float *)&dword_140404A6C[v6 + 280658037] = (float)((float)(v31 * (float)(1.0 / v32)) * 0.03125) + v28;
    }
  }
  if ( dword_140404A6C[v6 + 280658081] == 1 )
  {
    if ( !dword_140404A6C[v6 + 280652685] )
      dword_140404A6C[v6 + 280658108] = 0;
    v33 = *(float *)&dword_140404A6C[v6 + 280658090];
    v34 = *(float *)&dword_140404A6C[v6 + 280658092];
    v35 = *(float *)&dword_140404A6C[v6 + 280652610] - v33;
    v36 = dword_140404A6C[v6 + 280658091];
    v37 = *(float *)&dword_140404A6C[v6 + 280652612] - v34;
    sr_step_start[1] = 0.0;
    sr_step_start[0] = v35;
    sr_step_start[2] = v37;
    v38 = fsqrt((float)(v37 * v37) + (float)(v35 * v35));
    if ( v38 > 0.03125 )
    {
      *(float *)&dword_140404A6C[v6 + 280658090] = (float)((float)(v35 * (float)(1.0 / v38)) * 0.03125) + v33;
      dword_140404A6C[v6 + 280658091] = v36;
      *(float *)&dword_140404A6C[v6 + 280658092] = (float)((float)(v37 * (float)(1.0 / v38)) * 0.03125) + v34;
    }
  }
  v39 = &dword_140404A6C[v6 + 280658028];
  v40 = 2;
  v41 = (float *)&dword_140404A6C[v6 + 280652378];
  do
  {
    if ( *(v39 - 2) == 3 && *(float *)v39 >= 1.0 )
    {
      v42 = *(float *)&dword_1402F6188;
      v43 = *(float *)&dword_1402F618C;
      v44 = *(float *)&dword_1402F6188;
      v45 = *(float *)&dword_1402F6190;
      v46 = *(float *)&dword_1402F618C;
      *v39 = 1065353216;
      v47 = v44 * 0.375;
      v48 = v46 * 0.375;
      v49 = v47 + *(v41 - 2);
      v50 = v48 + *(v41 - 1);
      (*(float *)&sr_step_end[0]) = v49;
      sr_step_end[1] = LODWORD(v50);
      v51 = (float)(v45 * 0.375) + *v41;
      sr_step_start[0] = v49 - (float)(v42 * 0.75);
      (*(float *)&sr_step_end[2]) = v51;
      sr_step_start[1] = v50 - (float)(v43 * 0.75);
      sr_step_start[2] = v51 - (float)(v45 * 0.75);
      v52 = *(float *)&dword_140404A6C[v6 + 280651441];
      if ( v50 > v52 )
      {
        sr_step_end[1] = dword_140404A6C[v6 + 280651441];
        sr_step_start[0] = v49 - v47;
        sr_step_start[1] = v52 - v48;
        sr_step_start[2] = v51 - (float)(v45 * 0.375);
      }
      if ( (unsigned int)sub_1400B91E0(a1, &(*(float *)&sr_step_end[0]), &sr_step_start[0]) )
      {
        *(v39 - 2) = 1;
        v39[25] = 0;
        *(v39 - 4) = 5;
        v39[7] = *((_DWORD *)v41 - 2);
        v39[8] = *((_DWORD *)v41 - 1);
        v39[9] = *(_DWORD *)v41;
        v39[8] = 1023410176;
        v39[29] = dword_140404A6C[v6 + 280651341];
      }
    }
    v41 += 234;
    v39 += 55;
    --v40;
  }
  while ( v40 );
  if ( !dword_140404A6C[v6 + 280658026]
    && *(float *)&dword_140404A6C[v6 + 280657934] < 0.033333335
    && (int)dword_140404A6C[v6 + 280652451] > 0 )
  {
    dword_140404A6C[v6 + 280658026] = 1;
    dword_140404A6C[v6 + 280658024] = 5;
    dword_140404A6C[v6 + 280658035] = dword_140404A6C[v6 + 280652376];
    dword_140404A6C[v6 + 280658036] = dword_140404A6C[v6 + 280652377];
    dword_140404A6C[v6 + 280658037] = dword_140404A6C[v6 + 280652378];
    dword_140404A6C[v6 + 280658036] = 1023410176;
    *(float *)&dword_140404A6C[v6 + 280658057] = sub_14023F704(
                                                   -*(float *)&dword_140404A6C[v6 + 280652394],
                                                   *(float *)&dword_140404A6C[v6 + 280652396]);
  }
  if ( !dword_140404A6C[v6 + 280658081]
    && *(float *)&dword_140404A6C[v6 + 280657934] < 0.033333335
    && (int)dword_140404A6C[v6 + 280652685] > 0 )
  {
    dword_140404A6C[v6 + 280658081] = 1;
    dword_140404A6C[v6 + 280658079] = 5;
    dword_140404A6C[v6 + 280658090] = dword_140404A6C[v6 + 280652610];
    dword_140404A6C[v6 + 280658091] = dword_140404A6C[v6 + 280652611];
    dword_140404A6C[v6 + 280658092] = dword_140404A6C[v6 + 280652612];
    dword_140404A6C[v6 + 280658091] = 1023410176;
    *(float *)&dword_140404A6C[v6 + 280658112] = sub_14023F704(
                                                   -*(float *)&dword_140404A6C[v6 + 280652628],
                                                   *(float *)&dword_140404A6C[v6 + 280652630]);
  }
  if ( !dword_140404A6C[v6 + 280651325] && *(float *)&dword_140404A6C[v6 + 280657921] < 0.5 )
  {
    dword_140404A6C[v6 + 280657908] = 0;
    dword_140404A6C[v6 + 280658026] = 0;
    dword_140404A6C[v6 + 280658081] = 0;
    if ( dword_140404A6C[v6 + 280651324] )
    {
      if ( fsqrt(
             (float)((float)(*(float *)&dword_140404A6C[v6 + 280657933] * *(float *)&dword_140404A6C[v6 + 280657933])
                   + (float)(*(float *)&dword_140404A6C[v6 + 280657934] * *(float *)&dword_140404A6C[v6 + 280657934]))
           + (float)(*(float *)&dword_140404A6C[v6 + 280657935] * *(float *)&dword_140404A6C[v6 + 280657935])) < 0.0083333338 )
        dword_140404A6C[v6 + 280651325] = 5;
    }
  }
  if ( !dword_140404A6C[v6 + 280658026] && dword_140404A6C[v6 + 280658081] == 1 && dword_140404A6C[v6 + 280652685] )
  {
    dword_140404A6C[v6 + 280658026] = 1;
    dword_140404A6C[v6 + 280658024] = 5;
    dword_140404A6C[v6 + 280658035] = dword_140404A6C[v6 + 280652376];
    dword_140404A6C[v6 + 280658036] = dword_140404A6C[v6 + 280652377];
    dword_140404A6C[v6 + 280658037] = dword_140404A6C[v6 + 280652378];
    dword_140404A6C[v6 + 280658036] = 1023410176;
    *(float *)&dword_140404A6C[v6 + 280658057] = sub_14023F704(
                                                   -*(float *)&dword_140404A6C[v6 + 280652394],
                                                   *(float *)&dword_140404A6C[v6 + 280652396]);
  }
  if ( !dword_140404A6C[v6 + 280658081] && dword_140404A6C[v6 + 280658026] == 1 && dword_140404A6C[v6 + 280652451] )
  {
    dword_140404A6C[v6 + 280658081] = 1;
    dword_140404A6C[v6 + 280658079] = 5;
    dword_140404A6C[v6 + 280658090] = dword_140404A6C[v6 + 280652610];
    dword_140404A6C[v6 + 280658091] = dword_140404A6C[v6 + 280652611];
    dword_140404A6C[v6 + 280658092] = dword_140404A6C[v6 + 280652612];
    dword_140404A6C[v6 + 280658091] = 1023410176;
    *(float *)&dword_140404A6C[v6 + 280658112] = sub_14023F704(
                                                   -*(float *)&dword_140404A6C[v6 + 280652628],
                                                   *(float *)&dword_140404A6C[v6 + 280652630]);
  }
  if ( dword_140404A6C[v6 + 280651325] == 5 )
  {
    v53 = (dword_140404A6C[v6 + 280651436] & 8) == 0;
    dword_140404A6C[v6 + 280657908] = 0;
    if ( v53 )
    {
      dword_140404A6C[v6 + 280658026] = 0;
      dword_140404A6C[v6 + 280658081] = 0;
    }
    else
    {
      v54 = *(float *)&dword_140404A6C[v6 + 280657914];
      v55 = *(float *)&dword_140404A6C[v6 + 280657916];
      v56 = fsqrt(
              (float)((float)(*(float *)&dword_140404A6C[v6 + 280652378] - v55)
                    * (float)(*(float *)&dword_140404A6C[v6 + 280652378] - v55))
            + (float)((float)(*(float *)&dword_140404A6C[v6 + 280652376] - v54)
                    * (float)(*(float *)&dword_140404A6C[v6 + 280652376] - v54)));
      v57 = fsqrt(
              (float)((float)(*(float *)&dword_140404A6C[v6 + 280652612] - v55)
                    * (float)(*(float *)&dword_140404A6C[v6 + 280652612] - v55))
            + (float)((float)(*(float *)&dword_140404A6C[v6 + 280652610] - v54)
                    * (float)(*(float *)&dword_140404A6C[v6 + 280652610] - v54)));
      if ( !dword_140404A6C[v6 + 280658026] && !dword_140404A6C[v6 + 280658081] )
      {
        v58 = v56 > v57;
        v59 = v6 * 4 + 220 * v58;
        *(unsigned int *)((char *)&dword_140404A6C[280658026] + v59) = 3;
        *(unsigned int *)((char *)&dword_140404A6C[280658028] + v59) = 0;
        *(float *)((char *)&dword_140404A6C[280658029] + v59) = *(float *)(a3 + 12 * v58) - *(float *)(a2 + 12 * v58);
        *(float *)((char *)&dword_140404A6C[280658030] + v59) = *(float *)(a3 + 12 * v58 + 4)
                                                              - *(float *)(a2 + 12 * v58 + 4);
        *(float *)((char *)&dword_140404A6C[280658031] + v59) = *(float *)(a3 + 12 * v58 + 8)
                                                              - *(float *)(a2 + 12 * v58 + 8);
      }
    }
    if ( *(float *)&dword_140404A6C[v6 + 280657921] > 0.5 )
    {
      if ( (int)++dword_140404A6C[v6 + 280651326] >= 10 )
        dword_140404A6C[v6 + 280651325] = 0;
    }
    else
    {
      dword_140404A6C[v6 + 280651326] = 0;
    }
  }
  if ( dword_140404A6C[v6 + 280652451] || dword_140404A6C[v6 + 280658026] != 1 )
  {
    dword_140404A6C[v6 + 280658027] = 0;
    v60 = 0;
  }
  else
  {
    v60 = ++dword_140404A6C[v6 + 280658027];
  }
  v61 = dword_140404A6C[v6 + 280658026];
  if ( v61 == 1 && v60 >= 30 )
  {
    v61 = 0;
    dword_140404A6C[v6 + 280658026] = 0;
  }
  if ( dword_140404A6C[v6 + 280652685] || dword_140404A6C[v6 + 280658081] != 1 )
  {
    v53 = dword_140404A6C[v6 + 280658081] == 1;
    v62 = 0;
    dword_140404A6C[v6 + 280658082] = 0;
    if ( !v53 )
      goto LABEL_75;
  }
  else
  {
    v62 = ++dword_140404A6C[v6 + 280658082];
  }
  if ( v62 >= 30 )
    dword_140404A6C[v6 + 280658081] = 0;
LABEL_75:
  if ( v61 == 1 )
  {
    v63 = *(float *)&dword_140404A6C[v6 + 280658053];
    if ( v63 < 1.0 )
      *(float *)&dword_140404A6C[v6 + 280658053] = v63 + 0.5;
    if ( !dword_140404A6C[v6 + 280652451] )
      dword_140404A6C[v6 + 280658053] = 0;
  }
  if ( dword_140404A6C[v6 + 280658081] == 1 )
  {
    v64 = *(float *)&dword_140404A6C[v6 + 280658108];
    if ( v64 < 1.0 )
      *(float *)&dword_140404A6C[v6 + 280658108] = v64 + 0.5;
    if ( !dword_140404A6C[v6 + 280652685] )
      dword_140404A6C[v6 + 280658108] = 0;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400BB6B0) ----------------------------------------------------
__int64            sub_1400BB6B0(int a1, int a2, __int64 a3, float *a4, intptr_t a5, float *a6)
{
  __int64 v9; // rbx
  __int64 v10; // rdi
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm6_4
  float v15; // xmm8_4
  float v16; // xmm7_4
  float v17; // xmm6_4
  unsigned int v18; // xmm8_4
  float v19; // xmm7_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm5_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm6_4
  float v31; // xmm7_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm7_4
  float v35; // xmm11_4
  float v36; // xmm12_4
  float v37; // xmm6_4
  float v38; // xmm5_4
  float v39; // xmm0_4
  float v40; // xmm11_4
  float v41; // xmm12_4
  float v42; // xmm8_4
  unsigned int v43; // xmm6_4
  float v44; // xmm0_4
  __int64 v45; // rcx
  float v46; // xmm1_4
  float v47; // xmm2_4
  float v48; // xmm3_4
  float v49; // xmm11_4
  double v50; // xmm0_8
  float v51; // xmm13_4
  float v52; // xmm12_4
  float v53; // xmm1_4
  bool v54; // zf
  float v55; // xmm13_4
  float v56; // xmm3_4
  float v57; // xmm6_4
  float v58; // xmm14_4
  float v59; // xmm1_4
  float v60; // xmm9_4
  float v61; // xmm10_4
  float v62; // xmm10_4
  __int64 v64; // [rsp+8h] [rbp-D9h] BYREF
  float v65; // [rsp+28h] [rbp-B9h]
  float sr_stand_ray_end[3];
  _Alignas(8) unsigned sr_stand_ray_start[4];
  __int128 v72; // [rsp+50h] [rbp-91h]

  v9 = 7166LL * a1;
  v10 = v9 * 4 + 220LL * a2;
  if ( *(float *)((char *)&dword_140404A6C[280658028] + v10) == 0.0 )
  {
    v11 = *a6 * 0.0234375;
    v12 = a6[1] * 0.0234375;
    v13 = a6[2] * 0.0234375;
    v14 = (float)(*(float *)&dword_140404A6C[v9 + 280657933] * 15.0) + *(float *)&dword_140404A6C[v9 + 280657914];
    v15 = (float)(*(float *)&dword_140404A6C[v9 + 280657934] * 15.0) + *(float *)&dword_140404A6C[v9 + 280657915];
    v16 = (float)(*(float *)&dword_140404A6C[v9 + 280657935] * 15.0) + *(float *)&dword_140404A6C[v9 + 280657916];
    if ( a2 )
    {
      v17 = v14 + v11;
      v19 = v16 + v13;
      *(float *)&v18 = v12 + v15;
    }
    else
    {
      v17 = v14 - v11;
      *(float *)&v18 = v15 - v12;
      v19 = v16 - v13;
    }
    (*(float *)&sr_stand_ray_start[0]) = (float)(*(float *)&dword_1402F6188 * 0.25) + v17;
    (*(float *)&sr_stand_ray_start[1]) = (float)(*(float *)&dword_1402F618C * 0.25) + *(float *)&v18;
    *(float *)&(*(int64_t *)(void *)(sr_stand_ray_start+2)) = (float)(*(float *)&dword_1402F6190 * 0.25) + v19;
    sr_stand_ray_end[0] = v17 - (float)(*(float *)&dword_1402F6188 * 1.75);
    sr_stand_ray_end[1] = *(float *)&v18 - (float)(*(float *)&dword_1402F618C * 1.75);
    sr_stand_ray_end[2] = v19 - (float)(*(float *)&dword_1402F6190 * 1.75);
    if ( (unsigned int)sub_1400B91E0(a1, &(*(float *)&sr_stand_ray_start[0]), &sr_stand_ray_end[0]) )
      v18 = dword_140404A6C[73006982];
    *(float *)((char *)&dword_140404A6C[280658058] + v10) = v17;
    *(unsigned int *)((char *)&dword_140404A6C[280658059] + v10) = v18;
    *(float *)((char *)&dword_140404A6C[280658060] + v10) = v19;
  }
  v20 = *(float *)&dword_140404A6C[v9 + 280657914];
  v21 = *(float *)&dword_140404A6C[v9 + 280657916];
  v22 = *a6 * 0.0234375;
  v23 = a6[2] * 0.0234375;
  if ( a2 )
  {
    v24 = v20 + v22;
    v25 = v21 + v23;
  }
  else
  {
    v24 = v20 - v22;
    v25 = v21 - v23;
  }
  v26 = *(float *)&dword_140404A6C[v9 + 280657992];
  v27 = *(float *)&dword_140404A6C[v9 + 280657994];
  v28 = v24 - (float)(a6[6] * 0.03125);
  v29 = v25 - (float)(a6[8] * 0.03125);
  v30 = v26 * 7.5;
  v31 = v27 * 7.5;
  v32 = fsqrt((float)((float)(v27 * v27) + (float)(v26 * v26)) * 56.25);
  if ( v32 > 0.1875 )
  {
    v33 = 1.0 / v32;
    v31 = (float)(v33 * v31) * 0.1875;
    v30 = (float)(v33 * v30) * 0.1875;
  }
  v34 = v31 + v29;
  v35 = *(float *)&dword_140404A6C[v9 + 280657933] - v26;
  v36 = *(float *)&dword_140404A6C[v9 + 280657935] - v27;
  v37 = v30 + v28;
  v38 = fsqrt((float)(v36 * v36) + (float)(v35 * v35));
  if ( v38 > 0.015625 )
  {
    v36 = (float)((float)(1.0 / v38) * v36) * 0.015625;
    v35 = (float)((float)(1.0 / v38) * v35) * 0.015625;
  }
  v39 = (float)(1.0 - *(float *)((char *)&dword_140404A6C[280658028] + v10)) * 11.25;
  v40 = (float)(v35 * 7.5) + v37;
  v41 = (float)(v36 * 7.5) + v34;
  v42 = (float)(*(float *)&dword_140404A6C[v9 + 280657993] * v39) + a4[1];
  (*(float *)&sr_stand_ray_start[0]) = (float)(v26 * v39) + v40;
  (*(float *)&sr_stand_ray_start[1]) = v42;
  *(float *)&(*(int64_t *)(void *)(sr_stand_ray_start+2)) = (float)(v27 * v39) + v41;
  sr_stand_ray_end[0] = (*(float *)&sr_stand_ray_start[0]) - (float)(*(float *)&dword_1402F6188 * 1.75);
  sr_stand_ray_end[1] = v42 - (float)(*(float *)&dword_1402F618C * 1.75);
  sr_stand_ray_end[2] = *(float *)&(*(int64_t *)(void *)(sr_stand_ray_start+2)) - (float)(*(float *)&dword_1402F6190 * 1.75);
  if ( (unsigned int)sub_1400B91E0(a1, &(*(float *)&sr_stand_ray_start[0]), &sr_stand_ray_end[0]) )
    v43 = dword_140404A6C[73006982];
  else
    v43 = dword_140404A6C[234 * a2 + 280652377 + v9];
  v44 = *(float *)&dword_140404A6C[v9 + 280651441];
  v45 = v9 * 4 + 936LL * (a2 + 4);
  v46 = *(float *)((char *)&dword_140404A6C[280651441] + v45);
  v47 = *(float *)((char *)&dword_140404A6C[280651440] + v45);
  v48 = *(float *)((char *)&dword_140404A6C[280651442] + v45);
  (*(float *)&sr_stand_ray_start[0]) = v47;
  *(float *)&(*(int64_t *)(void *)(sr_stand_ray_start+2)) = v48;
  if ( v46 > v44 )
    v46 = v44;
  (*(float *)&sr_stand_ray_start[1]) = v46 + 0.25;
  sr_stand_ray_end[0] = v47 - (float)(*(float *)&dword_1402F6188 * 0.5);
  sr_stand_ray_end[1] = (float)(v46 + 0.25) - (float)(*(float *)&dword_1402F618C * 0.5);
  sr_stand_ray_end[2] = v48 - (float)(*(float *)&dword_1402F6190 * 0.5);
  if ( (unsigned int)sub_1400B91E0(a1, &(*(float *)&sr_stand_ray_start[0]), &sr_stand_ray_end[0]) && *(float *)&v43 < *(float *)&dword_140404A6C[73006982] )
    v43 = dword_140404A6C[73006982];
  v49 = v40 - *a4;
  v50 = sin(*(float *)((char *)&dword_140404A6C[280658055] + v10));
  v51 = *(float *)((char *)&dword_140404A6C[280658028] + v10) + 0.050000001;
  v52 = v41 - a4[2];
  v53 = (float)(*(float *)&v43 - v50 * 0.25) - a4[1];
  *(float *)((char *)&dword_140404A6C[280658028] + v10) = v51;
  v54 = dword_140404A6C[v9 + 280651325] == 5;
  v65 = v53;
  if ( !v54 )
  {
    v51 = v51 + 0.033333335;
    *(float *)((char *)&dword_140404A6C[280658028] + v10) = v51;
  }
  v55 = fminf(v51, 1.0);
  v56 = a6[7];
  v57 = fminf(
          fmaxf(
            (float)(fsqrt(
                      (float)((float)(*(float *)&dword_140404A6C[v9 + 280657992]
                                    * *(float *)&dword_140404A6C[v9 + 280657992])
                            + (float)(*(float *)&dword_140404A6C[v9 + 280657993]
                                    * *(float *)&dword_140404A6C[v9 + 280657993]))
                    + (float)(*(float *)&dword_140404A6C[v9 + 280657994] * *(float *)&dword_140404A6C[v9 + 280657994]))
                  * 7.5)
          - 0.125,
            0.0),
          1.0);
  v58 = 1.0 - v55;
  v59 = (float)(1.0 - v55) * *(float *)((char *)&dword_140404A6C[280658030] + v10);
  v60 = (float)(v57 * 0.125) * a6[8];
  v61 = (float)((float)((float)((float)((float)((float)((float)(v57 * 0.125) * a6[6])
                                              + *(float *)((char *)&dword_140404A6C[280658029] + v10))
                                      * 3.0)
                              * (float)(v58 * v58))
                      + (float)((float)((float)((float)(v49 * 3.0) * v58) + (float)(v49 * v55)) * v55))
              * v55)
      + (float)((float)(*(float *)((char *)&dword_140404A6C[280658029] + v10) * v58) * (float)(v58 * v58));
  *(float *)((char *)&dword_140404A6C[280658032] + v10) = v61;
  *(float *)((char *)&dword_140404A6C[280658033] + v10) = (float)((float)((float)((float)((float)((float)((float)(v57 * 0.375) + *(float *)((char *)&dword_140404A6C[280658030] + v10))
                                                                                                + (float)((float)(v57 * 0.125) * v56))
                                                                                        * 3.0)
                                                                                * (float)((float)(1.0 - v55)
                                                                                        * (float)(1.0 - v55)))
                                                                        + (float)((float)((float)((float)((float)((float)(v57 * 0.5) + v65) * 3.0)
                                                                                                * (float)(1.0 - v55))
                                                                                        + (float)(v65 * v55))
                                                                                * v55))
                                                                * v55)
                                                        + (float)(v59 * (float)((float)(1.0 - v55) * (float)(1.0 - v55)));
  *(float *)((char *)&dword_140404A6C[280658034] + v10) = (float)((float)((float)((float)((float)((float)(v52 * 3.0)
                                                                                                * v58)
                                                                                        + (float)(v52 * v55))
                                                                                * v55)
                                                                        + (float)((float)((float)(v60
                                                                                                + *(float *)((char *)&dword_140404A6C[280658031] + v10))
                                                                                        * 3.0)
                                                                                * (float)(v58 * v58)))
                                                                * v55)
                                                        + (float)((float)((float)(1.0 - v55)
                                                                        * *(float *)((char *)&dword_140404A6C[280658031]
                                                                                   + v10))
                                                                * (float)(v58 * v58));
  v62 = v61 + *a4;
  *(float *)((char *)&dword_140404A6C[280658032] + v10) = v62;
  *(float *)((char *)&dword_140404A6C[280658033] + v10) = *(float *)((char *)&dword_140404A6C[280658033] + v10) + a4[1];
  *(float *)((char *)&dword_140404A6C[280658034] + v10) = *(float *)((char *)&dword_140404A6C[280658034] + v10) + a4[2];
  *(float *)((char *)&dword_140404A6C[280658032] + v10) = v62 + *(float *)&dword_140404A6C[v9 + 280657995];
  *(float *)((char *)&dword_140404A6C[280658033] + v10) = *(float *)&dword_140404A6C[v9 + 280657996]
                                                        + *(float *)((char *)&dword_140404A6C[280658033] + v10);
  *(float *)((char *)&dword_140404A6C[280658034] + v10) = *(float *)&dword_140404A6C[v9 + 280657997]
                                                        + *(float *)((char *)&dword_140404A6C[280658034] + v10);
  *(unsigned int *)((char *)&dword_140404A6C[280658053] + v10) = 0;
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84884: using guessed type unsigned int;

//----- (00000001400BBF30) ----------------------------------------------------
__int64            sub_1400BBF30(
        int a1,
        int a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float a9)
{
  char v9; // si
  float v12; // xmm10_4
  __int64 v13; // r13
  float v15; // xmm13_4
  float v16; // xmm6_4
  __int64 v17; // rbx
  int v18; // ecx
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm11_4
  float v26; // xmm12_4
  float v27; // xmm2_4
  float v28; // xmm3_4
  float v29; // xmm12_4
  float v30; // xmm11_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm11_4
  float v34; // xmm12_4
  float v35; // xmm3_4
  float v36; // xmm15_4
  float v37; // xmm14_4
  float v38; // xmm11_4
  float v39; // xmm13_4
  float v40; // xmm12_4
  float v41; // xmm1_4
  float *v42; // r15
  float v43; // xmm4_4
  float v44; // xmm5_4
  float v45; // xmm0_4
  float v46; // xmm4_4
  float v47; // xmm5_4
  float v48; // xmm6_4
  float v49; // xmm10_4
  float v50; // xmm7_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  float v53; // xmm6_4
  float v54; // xmm10_4
  float v55; // xmm7_4
  double v56; // xmm0_8
  float v57; // xmm1_4
  float v58; // xmm6_4
  float v59; // xmm3_4
  float v60; // xmm7_4
  float v61; // xmm4_4
  float v62; // xmm6_4
  float v63; // xmm3_4
  float v64; // xmm7_4
  float v65; // xmm2_4
  float v66; // xmm4_4
  float v67; // xmm5_4
  float v68; // xmm6_4
  float v69; // xmm3_4
  float v70; // xmm7_4
  float v71; // xmm6_4
  float v72; // xmm3_4
  float v73; // xmm7_4
  float v74; // xmm0_4
  float v75; // xmm6_4
  float v76; // xmm3_4
  float v77; // xmm7_4
  float v78; // xmm6_4
  float v79; // xmm3_4
  float v80; // xmm7_4
  float v81; // xmm11_4
  float v82; // xmm12_4
  __int64 result; // rax
  float v84; // xmm0_4
  float v85; // xmm1_4
  float v86; // xmm2_4
  float v87; // xmm0_4
  float v88; // xmm8_4
  float v89; // xmm1_4
  float v90; // xmm10_4
  float v91; // xmm10_4
  float v92; // xmm6_4
  float v93; // xmm2_4
  float v94; // xmm7_4
  float v95; // xmm0_4
  float v96; // xmm5_4
  float v97; // xmm2_4
  float v98; // xmm1_4
  float v99; // xmm0_4
  float v100; // xmm5_4
  float v101; // xmm7_4
  float v102; // xmm6_4
  float v103; // xmm3_4
  float v104; // xmm4_4
  float v105; // xmm3_4
  float v106; // xmm2_4
  float v107; // xmm3_4
  float v108; // xmm7_4
  float sr_step_quaternion[4];
  __m128 v113; // [rsp+30h] [rbp-F8h] BYREF
  float v114; // [rsp+130h] [rbp+8h]
  float v115; // [rsp+138h] [rbp+10h]

  v9 = dword_140404A6C[284024765];
  v12 = 3.0;
  v115 = 3.0;
  v13 = a2;
  if ( LOBYTE(dword_140404A6C[284024765]) && !a1 )
  {
    v12 = 1.0;
    v115 = 1.0;
  }
  v15 = 0.125;
  v16 = 0.125;
  if ( LOBYTE(dword_140404A6C[284024765]) && !a1 )
    v16 = 0.25;
  v17 = 7166LL * a1;
  v18 = dword_140404A6C[v17 + 280651333];
  if ( v18 > 0 )
    v16 = v16 * (float)(1.0 - fminf((float)v18 * 0.033333335, 1.0));
  v19 = *a5 - *a6;
  v20 = a5[2] - a6[2];
  v21 = fsqrt((float)((float)((float)(a5[1] - a6[1]) * (float)(a5[1] - a6[1])) + (float)(v19 * v19)) + (float)(v20 * v20));
  if ( v21 == 0.0 )
  {
    v23 = 0.0;
    v22 = 0.0;
  }
  else
  {
    v22 = (float)(1.0 / v21) * v20;
    v23 = (float)(1.0 / v21) * v19;
  }
  if ( !LOBYTE(dword_140404A6C[284024765]) || a1 )
    v24 = 0.5;
  else
    v24 = 0.9375;
  v25 = (float)((float)((float)(*a7 - *(float *)&dword_140404A6C[v17 + 280657914]) - (float)(v23 * 0.32666668)) * 0.375)
      - (float)((float)(*(float *)&dword_140404A6C[v17 + 280657933] - *(float *)&dword_140404A6C[v17 + 280657992]) * v24);
  v26 = (float)((float)((float)(a7[2] - *(float *)&dword_140404A6C[v17 + 280657916]) - (float)(v22 * 0.32666668)) * 0.375)
      - (float)((float)(*(float *)&dword_140404A6C[v17 + 280657935] - *(float *)&dword_140404A6C[v17 + 280657994]) * v24);
  v27 = fsqrt((float)(v25 * v25) + (float)(v26 * v26));
  if ( v27 > 0.25 )
  {
    v25 = (float)(v25 * (float)(1.0 / v27)) * 0.25;
    v26 = (float)(v26 * (float)(1.0 / v27)) * 0.25;
  }
  v28 = fmaxf(
          (float)((float)(a7[1] - *(float *)&dword_140404A6C[v17 + 280657915]) * 0.375)
        - (float)((float)(*(float *)&dword_140404A6C[v17 + 280657934] - *(float *)&dword_140404A6C[v17 + 280657993])
                * v24),
          -0.125);
  if ( v28 > 0.125 )
    v28 = 0.125;
  v29 = v26 - *(float *)&dword_140404A6C[v17 + 280657935];
  v30 = v25 - *(float *)&dword_140404A6C[v17 + 280657933];
  v31 = v28 - *(float *)&dword_140404A6C[v17 + 280657934];
  v32 = fsqrt((float)(v30 * v30) + (float)(v29 * v29));
  if ( v32 > v16 )
  {
    if ( v32 == 0.0 )
    {
      v33 = 0.0;
      v34 = 0.0;
    }
    else
    {
      v33 = v30 * (float)(1.0 / v32);
      v34 = v29 * (float)(1.0 / v32);
    }
    v30 = v33 * v16;
    v29 = v34 * v16;
  }
  v35 = fmaxf(v31, -0.125);
  if ( v35 <= 0.125 )
  {
    v15 = v35;
    if ( v35 < -0.03125 || v35 < 0.0 )
      v15 = 0.0;
  }
  v36 = 0.09375;
  v37 = 0.25;
  v38 = v30 * v12;
  v39 = v15 * v12;
  v40 = v29 * v12;
  if ( LOBYTE(dword_140404A6C[284024765]) && !a1 )
    v36 = 0.1875;
  if ( v18 > 0 )
  {
    v41 = 1.0 - fminf((float)v18 * 0.033333335, 1.0);
    v36 = v36 * v41;
    v37 = v41 * 0.25;
  }
  sub_14010E370(&sr_step_quaternion[0], a8);
  v42 = (float *)&dword_140404A6C[v17 + 280651293];
  sub_14010E370(SR_VEC_LANES(128, v113, f32), (float *)&dword_140404A6C[v17 + 280657917]);
  v43 = SR_VEC_LANES(128, v113, f32)[2];
  v44 = SR_VEC_LANES(128, v113, f32)[0];
  v114 = SR_VEC_LANES(128, v113, f32)[3];
  if ( (float)((float)((float)(sr_step_quaternion[3] * SR_VEC_LANES(128, v113, f32)[3]) + (float)(sr_step_quaternion[2] * SR_VEC_LANES(128, v113, f32)[2]))
             + (float)((float)(sr_step_quaternion[0] * SR_VEC_LANES(128, v113, f32)[0]) + (float)(sr_step_quaternion[1] * SR_VEC_LANES(128, v113, f32)[1]))) >= 0.0 )
  {
    v45 = SR_VEC_LANES(128, v113, f32)[3];
  }
  else
  {
    v113 = _mm_xor_ps(v113, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v43 = SR_VEC_LANES(128, v113, f32)[2];
    v44 = SR_VEC_LANES(128, v113, f32)[0];
    v45 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v113, v113, 255), f32)[0];
    v114 = v45;
  }
  v46 = -v43;
  v47 = -v44;
  v48 = (float)((float)((float)(sr_step_quaternion[3] * v47) + (float)(v45 * sr_step_quaternion[0]))
              + (float)(sr_step_quaternion[2] * COERCE_FLOAT(SR_VEC_LANES(128, v113, i32)[1] ^ 0x80000000)))
      - (float)(sr_step_quaternion[1] * v46);
  v49 = (float)((float)((float)(v114 * sr_step_quaternion[1]) - (float)(sr_step_quaternion[2] * v47))
              + (float)(sr_step_quaternion[3] * COERCE_FLOAT(SR_VEC_LANES(128, v113, i32)[1] ^ 0x80000000)))
      + (float)(sr_step_quaternion[0] * v46);
  v50 = (float)((float)((float)(sr_step_quaternion[1] * v47) + (float)(v114 * sr_step_quaternion[2]))
              - (float)(sr_step_quaternion[0] * COERCE_FLOAT(SR_VEC_LANES(128, v113, i32)[1] ^ 0x80000000)))
      + (float)(sr_step_quaternion[3] * v46);
  v51 = (float)((float)((float)(sr_step_quaternion[3] * v114) - (float)(sr_step_quaternion[0] * v47))
              - (float)(sr_step_quaternion[1] * COERCE_FLOAT(SR_VEC_LANES(128, v113, i32)[1] ^ 0x80000000)))
      - (float)(sr_step_quaternion[2] * v46);
  v52 = fsqrt((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50));
  if ( v52 == 0.0 )
  {
    v53 = 0.0;
    v54 = 0.0;
    v55 = 0.0;
  }
  else
  {
    v53 = v48 * (float)(1.0 / v52);
    v54 = v49 * (float)(1.0 / v52);
    v55 = v50 * (float)(1.0 / v52);
  }
  v56 = acos(fminf(fmaxf(v51, -1.0), 1.0));
  v57 = v56 + v56;
  v58 = v53 * v57;
  v59 = v57 * v54;
  v60 = v55 * v57;
  v61 = fsqrt((float)((float)(v58 * v58) + (float)(v59 * v59)) + (float)(v60 * v60));
  if ( v61 > v37 )
  {
    if ( v61 == 0.0 )
    {
      v62 = 0.0;
      v63 = 0.0;
      v64 = 0.0;
    }
    else
    {
      v62 = v58 * (float)(1.0 / v61);
      v63 = v59 * (float)(1.0 / v61);
      v64 = v60 * (float)(1.0 / v61);
    }
    v58 = v62 * v37;
    v59 = v63 * v37;
    v60 = v64 * v37;
  }
  if ( !v9 || a1 )
  {
    v65 = *(float *)&dword_140404A6C[v17 + 280657936];
    v66 = *(float *)&dword_140404A6C[v17 + 280657937];
    v67 = *(float *)&dword_140404A6C[v17 + 280657938];
    v68 = v58 + (float)(v65 * -2.0);
    v69 = v59 + (float)(v66 * -2.0);
    v70 = v60 + (float)(v67 * -2.0);
  }
  else
  {
    v65 = *(float *)&dword_140404A6C[v17 + 280657936];
    v66 = *(float *)&dword_140404A6C[v17 + 280657937];
    v67 = *(float *)&dword_140404A6C[v17 + 280657938];
    v68 = (float)(v58 * 0.75) - (float)(v65 * 1.75);
    v69 = (float)(v59 * 0.75) - (float)(v66 * 1.75);
    v70 = (float)(v60 * 0.75) - (float)(v67 * 1.75);
  }
  v71 = v68 - v65;
  v72 = v69 - v66;
  v73 = v70 - v67;
  v74 = fsqrt((float)((float)(v72 * v72) + (float)(v71 * v71)) + (float)(v73 * v73));
  if ( v74 > v36 )
  {
    if ( v74 == 0.0 )
    {
      v75 = 0.0;
      v76 = 0.0;
      v77 = 0.0;
    }
    else
    {
      v75 = v71 * (float)(1.0 / v74);
      v76 = v72 * (float)(1.0 / v74);
      v77 = v73 * (float)(1.0 / v74);
    }
    v71 = v75 * v36;
    v72 = v76 * v36;
    v73 = v77 * v36;
  }
  v78 = v71 * v115;
  v79 = v72 * v115;
  v80 = v73 * v115;
  *a4 = v78;
  a4[1] = v79;
  a4[2] = v80;
  v81 = v38 * a9;
  v82 = v40 * a9;
  if ( !dword_140404A6C[234 * (int)v13 + 280652451 + v17] )
    v39 = v39 * (float)((float)(a9 * 0.75) + 0.25);
  result = v17 * 4 + 12 * v13;
  *a4 = v78 * a9;
  a4[2] = v80 * a9;
  a4[1] = v79 * a9;
  v84 = *a5;
  *a3 = *a5;
  v85 = a5[1];
  a3[1] = v85;
  v86 = a5[2];
  a3[2] = v86;
  v87 = v84 + *(float *)&dword_140404A6C[v17 + 280657992];
  *a3 = v87;
  v88 = v81 + v87;
  v89 = v85 + *(float *)&dword_140404A6C[v17 + 280657993];
  a3[1] = v89;
  v90 = *(float *)&dword_140404A6C[v17 + 280657994];
  *a3 = v81 + v87;
  a3[1] = v39 + v89;
  v91 = (float)(v90 + v86) + v82;
  a3[2] = v91;
  v92 = a5[1] - *(float *)&dword_140404A6C[v17 + 280657915];
  v93 = a5[2] - *(float *)&dword_140404A6C[v17 + 280657916];
  v94 = *a5 - *(float *)&dword_140404A6C[v17 + 280657914];
  v95 = (float)(*a4 * v93) - (float)(a4[2] * v94);
  v96 = (float)((float)(a4[1] * v94) - (float)(*a4 * v92)) + v91;
  *a3 = (float)((float)(a4[2] * v92) - (float)(a4[1] * v93)) + v88;
  a3[2] = v96;
  a3[1] = v95 + (float)(v39 + v89);
  *(_QWORD *)((char *)&dword_140404A6C[280657945] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[280657947] + result) = 0;
  v97 = *a5 - *(float *)&dword_140404A6C[v17 + 280657914];
  v98 = a5[2] - *(float *)&dword_140404A6C[v17 + 280657916];
  v99 = a5[1] - *(float *)&dword_140404A6C[v17 + 280657915];
  v100 = (float)(v98 * v39) - (float)(v99 * v82);
  v101 = (float)(v97 * v82) - (float)(v98 * v81);
  v102 = (float)(v99 * v81) - (float)(v97 * v39);
  v103 = -(float)((float)((float)(v101 * v42[6625]) + (float)(v100 * v42[6624])) + (float)(v102 * v42[6626]));
  v104 = v103 * v42[6624];
  *(float *)((char *)&dword_140404A6C[280657945] + result) = v104;
  *(float *)((char *)&dword_140404A6C[280657946] + result) = (float)(v103 * *(float *)&dword_140404A6C[v17 + 280657918])
                                                           + *(float *)((char *)&dword_140404A6C[280657946] + result);
  *(float *)((char *)&dword_140404A6C[280657947] + result) = (float)(v103 * *(float *)&dword_140404A6C[v17 + 280657919])
                                                           + *(float *)((char *)&dword_140404A6C[280657947] + result);
  v105 = *(float *)&dword_140404A6C[v17 + 280657920];
  v106 = (float)((float)((float)(v101 * *(float *)&dword_140404A6C[v17 + 280657921]) + (float)(v100 * v105))
               + (float)(v102 * *(float *)&dword_140404A6C[v17 + 280657922]))
       * -0.25;
  v107 = (float)(v105 * v106) + v104;
  *(float *)((char *)&dword_140404A6C[280657945] + result) = v107;
  *(float *)((char *)&dword_140404A6C[280657946] + result) = (float)(v106 * *(float *)&dword_140404A6C[v17 + 280657921])
                                                           + *(float *)((char *)&dword_140404A6C[280657946] + result);
  *(float *)((char *)&dword_140404A6C[280657947] + result) = (float)(v106 * *(float *)&dword_140404A6C[v17 + 280657922])
                                                           + *(float *)((char *)&dword_140404A6C[280657947] + result);
  v108 = (float)((float)((float)(v101 * *(float *)&dword_140404A6C[v17 + 280657924])
                       + (float)(*(float *)&dword_140404A6C[v17 + 280657923] * v100))
               + (float)(v102 * *(float *)&dword_140404A6C[v17 + 280657925]))
       * -2.0;
  *(float *)((char *)&dword_140404A6C[280657945] + result) = (float)(*(float *)&dword_140404A6C[v17 + 280657923] * v108)
                                                           + v107;
  *(float *)((char *)&dword_140404A6C[280657946] + result) = (float)(v108 * *(float *)&dword_140404A6C[v17 + 280657924])
                                                           + *(float *)((char *)&dword_140404A6C[280657946] + result);
  *(float *)((char *)&dword_140404A6C[280657947] + result) = (float)(v108 * *(float *)&dword_140404A6C[v17 + 280657925])
                                                           + *(float *)((char *)&dword_140404A6C[280657947] + result);
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400BCA30) ----------------------------------------------------
__int64            sub_1400BCA30(int a1)
{
  __int64 v2; // rbx
  int v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  int v6; // r14d
  int v7; // edi
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm9_4
  float v15; // xmm2_4
  float v16; // xmm7_4
  float v17; // xmm13_4
  float v18; // xmm5_4
  float v19; // xmm11_4
  float v20; // xmm6_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm1_4
  float v29; // xmm4_4
  float v30; // xmm4_4
  float v31; // xmm2_4
  double v32; // xmm2_8
  double v33; // xmm2_8
  float v34; // xmm2_4
  __int64 i; // rcx
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  unsigned int *v41; // r15
  double v42; // xmm6_8
  float v43; // xmm7_4
  double v44; // xmm1_8
  double v45; // xmm0_8
  float v46; // xmm4_4
  float v47; // xmm2_4
  unsigned int v48; // xmm0_4
  __int32 v49; // xmm1_4
  unsigned int v50; // xmm0_4
  float v51; // xmm3_4
  float v52; // xmm2_4
  float v53; // xmm0_4
  float *v54; // r12
  __int64 v55; // rdi
  unsigned __int64 v56; // rsi
  float v57; // xmm0_4
  float v58; // xmm0_4
  unsigned int v59; // eax
  unsigned int *v60; // rdi
  __m128 v61; // xmm4
  __m128 v62; // xmm15
  float v63; // xmm3_4
  float v64; // xmm8_4
  float v65; // xmm9_4
  float v66; // xmm3_4
  float v67; // xmm9_4
  float v68; // xmm8_4
  __m128 v69; // xmm5
  __m128 v70; // xmm6
  __m128 v71; // xmm7
  float v72; // xmm3_4
  float v73; // xmm8_4
  float v74; // xmm7_4
  double v75; // xmm0_8
  unsigned int v76; // xmm4_4
  float v77; // xmm1_4
  float v78; // xmm7_4
  float v79; // xmm8_4
  double v80; // xmm2_8
  unsigned int *v81; // rdi
  __int64 v82; // rsi
  int v83; // r12d
  unsigned int *v84; // r15
  __int64 v85; // rax
  __int64 v86; // rcx
  int v87; // eax
  float v88; // xmm0_4
  unsigned int v89; // xmm0_4
  double v90; // xmm2_8
  int v91; // r14d
  double v92; // xmm2_8
  float v93; // xmm14_4
  float v94; // xmm10_4
  float v95; // xmm11_4
  float v96; // xmm12_4
  float v97; // xmm10_4
  float v98; // xmm2_4
  float v99; // xmm4_4
  float v100; // xmm7_4
  float v101; // xmm3_4
  float v102; // xmm6_4
  float v103; // xmm8_4
  float v104; // xmm11_4
  float v105; // xmm9_4
  float v106; // xmm10_4
  float v107; // xmm3_4
  float v108; // xmm2_4
  float v109; // xmm1_4
  double v110; // xmm2_8
  float v111; // xmm6_4
  float v112; // xmm7_4
  float v113; // xmm12_4
  float v114; // xmm8_4
  float v115; // xmm14_4
  float v116; // xmm0_4
  float v117; // xmm1_4
  char v118; // al
  bool v119; // cc
  int v120; // ecx
  float *v121; // r14
  float v123; // xmm0_4
  float v124; // xmm8_4
  float v125; // xmm6_4
  float v126; // xmm5_4
  float v127; // xmm4_4
  float v128; // xmm1_4
  float v129; // xmm0_4
  float v130; // xmm1_4
  float v131; // xmm0_4
  __int64 v132; // [rsp+8h] [rbp-100h] BYREF
  int v133; // [rsp+78h] [rbp-90h]
  float sr_leg_weights[3];
  unsigned __int64 v137; // [rsp+8Ch] [rbp-7Ch]
  float sr_leg_health[2];
  _Alignas(8) unsigned sr_leg_linear_limits[3];
  float v142; // [rsp+B0h] [rbp-58h]
  float *v143; // [rsp+B8h] [rbp-50h]
  float *v144; // [rsp+C0h] [rbp-48h]
  float *v145; // [rsp+C8h] [rbp-40h]
  float v146[4]; // [rsp+D0h] [rbp-38h] BYREF
  float v147[4]; // [rsp+E0h] [rbp-28h] BYREF
  _Alignas(8) float sr_leg_angular_limits[3];
  _Alignas(16) float sr_leg_quaternion_work[6];
  float sr_leg_ray[3];
  _Alignas(16) unsigned sr_leg_basis[12];
  _Alignas(16) float sr_leg_velocity_work[6];
  float sr_leg_targets[6];
  _Alignas(16) unsigned sr_leg_target_basis[12];
  float sr_leg_points[12];
  float v173[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v174[24]; // [rsp+1E8h] [rbp+E0h] BYREF

  v2 = 7166LL * a1;
  sr_leg_health[0] = 1.0f;
  sr_leg_health[1] = 1.0f;
  v3 = dword_140404A6C[v2 + 280658310];
  v142 = fminf(
           fmaxf(
             (float)(fsqrt(
                       (float)((float)(*(float *)&dword_140404A6C[v2 + 280657930]
                                     * *(float *)&dword_140404A6C[v2 + 280657930])
                             + (float)(*(float *)&dword_140404A6C[v2 + 280657931]
                                     * *(float *)&dword_140404A6C[v2 + 280657931]))
                     + (float)(*(float *)&dword_140404A6C[v2 + 280657932] * *(float *)&dword_140404A6C[v2 + 280657932]))
                   * 60.0f)
           - 0.5f,
             0.0f),
           1.0f);
  if ( v3 < 100 )
    sr_leg_health[0] = (float)v3 * 0.0099999998f;
  v4 = dword_140404A6C[v2 + 280658312];
  if ( v4 < 100 )
    sr_leg_health[1] = (float)v4 * 0.0099999998f;
  v5 = dword_140404A6C[v2 + 280651325];
  v6 = 0;
  v7 = 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      dword_140404A6C[v2 + 280651334] = 0;
      dword_140404A6C[v2 + 280657908] = 0;
      if ( *(float *)&dword_140404A6C[v2 + 280651456] > 0.875f )
        *(float *)&dword_140404A6C[v2 + 280651341] = sub_14023F704(
                                                       -*(float *)&dword_140404A6C[v2 + 280651458],
                                                       *(float *)&dword_140404A6C[v2 + 280651460]);
      if ( dword_140404A6C[v2 + 280651324] && *(float *)&dword_140404A6C[v2 + 280657934] < 0.016666668f )
      {
        dword_140404A6C[v2 + 280651325] = 0;
        dword_140404A6C[v2 + 280651334] = 1;
      }
    }
  }
  else
  {
    dword_140404A6C[v2 + 280651334] = 1;
    if ( !dword_140404A6C[v2 + 280658026] && !dword_140404A6C[v2 + 280658081] )
    {
      if ( !dword_140404A6C[v2 + 280651324] || *(float *)&dword_140404A6C[v2 + 280657934] > 0.016666668f )
      {
        if ( *(float *)&dword_140404A6C[v2 + 280651456] > 0.875f )
          *(float *)&dword_140404A6C[v2 + 280651341] = sub_14023F704(
                                                         -*(float *)&dword_140404A6C[v2 + 280651458],
                                                         *(float *)&dword_140404A6C[v2 + 280651460]);
        dword_140404A6C[v2 + 280651325] = 1;
        dword_140404A6C[v2 + 280657908] = 0;
      }
      dword_140404A6C[v2 + 280651334] = 0;
    }
  }
  v8 = *(float *)&dword_140404A6C[282486350];
  v9 = *(float *)&dword_140404A6C[282486425];
  v10 = *(float *)&dword_140404A6C[282486299];
  v11 = *(float *)&dword_140404A6C[282486350];
  *(_QWORD *)&dword_140404A6C[v2 + 280657945] = 0;
  *(_QWORD *)&dword_140404A6C[v2 + 280657947] = 0;
  *(_QWORD *)&dword_140404A6C[v2 + 280657949] = 0;
  v12 = v11 * *(float *)&dword_140404A6C[v2 + 280652314];
  v13 = (float)(v11 * *(float *)&dword_140404A6C[v2 + 280652313]) + *(float *)&dword_140404A6C[v2 + 280652298];
  v14 = *(float *)&dword_140404A6C[v2 + 280651440];
  v15 = (float)(v8 * *(float *)&dword_140404A6C[v2 + 280652315]) + *(float *)&dword_140404A6C[v2 + 280652300];
  v16 = *(float *)&dword_140404A6C[v2 + 280651455];
  v17 = *(float *)&dword_140404A6C[v2 + 280651442];
  v18 = *(float *)&dword_140404A6C[v2 + 280651457];
  v19 = *(float *)&dword_140404A6C[v2 + 280651441];
  v20 = *(float *)&dword_140404A6C[v2 + 280651456];
  sr_leg_points[1] = v12 + *(float *)&dword_140404A6C[v2 + 280652299];
  v21 = v9 * *(float *)&dword_140404A6C[v2 + 280652548];
  sr_leg_points[0] = v13;
  v22 = v9 * *(float *)&dword_140404A6C[v2 + 280652547];
  v23 = v21 + *(float *)&dword_140404A6C[v2 + 280652533];
  v24 = v9 * *(float *)&dword_140404A6C[v2 + 280652549];
  v25 = v22 + *(float *)&dword_140404A6C[v2 + 280652532];
  sr_leg_points[2] = v15;
  v26 = v10 * *(float *)&dword_140404A6C[v2 + 280651453];
  v27 = v24 + *(float *)&dword_140404A6C[v2 + 280652534];
  *(float *)&((unsigned *)(void *)(sr_leg_points+3))[1] = v23;
  v28 = v10 * *(float *)&dword_140404A6C[v2 + 280651452];
  v29 = v10 * *(float *)&dword_140404A6C[v2 + 280651454];
  *(float *)((unsigned *)(void *)(sr_leg_points+3)) = v25;
  *(float *)((unsigned *)(void *)(sr_leg_points+5)) = v27;
  sr_leg_targets[0] = (float)(v28 + v14) + (float)(*(float *)&dword_140404A6C[282486300] * v16);
  sr_leg_targets[1] = (float)(v26 + v19) + (float)(*(float *)&dword_140404A6C[282486300] * v20);
  sr_leg_targets[2] = (float)(v29 + v17) + (float)(*(float *)&dword_140404A6C[282486300] * v18);
  v30 = (float)(*(float *)&dword_140404A6C[282486374] * *(float *)&dword_140404A6C[v2 + 280651454]) + v17;
  v31 = (float)((float)(*(float *)&dword_140404A6C[282486374] * *(float *)&dword_140404A6C[v2 + 280651453]) + v19)
      + (float)(*(float *)&dword_140404A6C[282486375] * v20);
  (sr_leg_targets+3)[0] = (float)((float)(*(float *)&dword_140404A6C[282486374] * *(float *)&dword_140404A6C[v2 + 280651452]) + v14)
          + (float)(*(float *)&dword_140404A6C[282486375] * v16);
  (*(__int128 *)(void *)sr_leg_basis) = xmmword_140278D30;
  (sr_leg_targets+3)[1] = v31;
  (*(__int128 *)(void *)(sr_leg_basis+4)) = xmmword_140278D30;
  sr_leg_targets[5] = v30 + (float)(*(float *)&dword_140404A6C[282486375] * v18);
  *(_QWORD *)&v32 = dword_140404A6C[v2 + 280651341];
  (*(float *)&sr_leg_basis[8]) = 1.0f;
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_leg_basis), (float *)&(*(__int128 *)(void *)sr_leg_basis) + 3, v32);
  *(_QWORD *)&v33 = dword_140404A6C[v2 + 280651341];
  sr_leg_target_basis[8] = 1065353216;
  (*(__int128 *)(void *)sr_leg_target_basis) = xmmword_140278D30;
  (*(__int128 *)(void *)(sr_leg_target_basis+4)) = xmmword_140278D30;
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_leg_target_basis), (float *)&(*(__int128 *)(void *)sr_leg_target_basis) + 3, v33);
  v34 = 0.0f;
  for ( i = 0; i < 2; i += 2 )
  {
    v36 = (*(float *)&sr_leg_basis[8]) * (float)((sr_leg_targets+3)[3 * i - 1] - *(float *)&((unsigned *)(void *)(sr_leg_points+3))[3 * i - 1]);
    v37 = (float)(*((float *)&(*(__int128 *)(void *)(sr_leg_basis+4)) + 2) * (float)(*(&sr_leg_targets[0] + 3 * i) - *(&sr_leg_points[0] + 3 * i))) * 2.0f;
    if ( i )
      v38 = v34 + (float)(v37 + (float)(v36 * 2.0f));
    else
      v38 = v34 + (float)((float)(v36 * -2.0f) - v37);
    v39 = *((float *)&(*(__int128 *)(void *)(sr_leg_basis+4)) + 2) * (float)((sr_leg_targets+3)[3 * i] - *(float *)&((unsigned *)(void *)(sr_leg_points+3))[3 * i]);
    v40 = (*(float *)&sr_leg_basis[8]) * (float)(*(&sr_leg_targets[5] + 3 * i) - *(float *)&((unsigned *)(void *)(sr_leg_points+5))[3 * i]);
    if ( v7 )
      v34 = (float)((float)(v38 + v40) + v40) + (float)(v39 + v39);
    else
      v34 = v38 + (float)((float)(v40 * -2.0f) - (float)(v39 * 2.0f));
    v7 += 2;
  }
  v41 = &dword_140404A6C[v2 + 280658026];
  if ( !dword_140404A6C[v2 + 280658026] && !dword_140404A6C[v2 + 280658081] )
    v34 = v34 * 0.5f;
  *(float *)&dword_140404A6C[v2 + 280658138] = (float)((float)(v34 - *(float *)&dword_140404A6C[v2 + 280658138]) * 0.5f)
                                             + *(float *)&dword_140404A6C[v2 + 280658138];
  sub_1400B40B0(a1);
  v42 = 0.7853981633975;
  v43 = *(float *)&dword_140404A6C[v2 + 280651372];
  v44 = fmax((float)(*(float *)&dword_140404A6C[v2 + 280651370] * 7.5f), -0.7853981633975);
  if ( v44 > 0.7853981633975 )
    v44 = 0.7853981633975;
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_leg_target_basis), (float *)&(*(__int128 *)(void *)(sr_leg_target_basis+4)) + 2, sr_export_float_lane_container(COERCE_UNSIGNED_INT((float)v44)));
  v45 = fmax((float)(v43 * -7.5f), -0.7853981633975);
  if ( v45 <= 0.7853981633975 )
    v42 = v45;
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_leg_target_basis), (float *)&(*(__int128 *)(void *)sr_leg_target_basis), sr_export_float_lane_container(COERCE_UNSIGNED_INT((float)v42)));
  v46 = (float)(*(float *)&dword_1402F618C * 0.25f) + *(float *)&dword_140404A6C[v2 + 280651441];
  v47 = (float)(*(float *)&dword_1402F6190 * 0.25f) + *(float *)&dword_140404A6C[v2 + 280651442];
  *(float *)&(*(int64_t *)(void *)sr_leg_angular_limits) = (float)(*(float *)&dword_1402F6188 * 0.25f) + *(float *)&dword_140404A6C[v2 + 280651440];
  *((float *)&(*(int64_t *)(void *)sr_leg_angular_limits) + 1) = v46;
  sr_leg_angular_limits[2] = v47;
  sr_leg_ray[0] = *(float *)&(*(int64_t *)(void *)sr_leg_angular_limits) - (float)(*(float *)&dword_1402F6188 * 1.5f);
  sr_leg_ray[1] = v46 - (float)(*(float *)&dword_1402F618C * 1.5f);
  sr_leg_ray[2] = v47 - (float)(*(float *)&dword_1402F6190 * 1.5f);
  sub_1400B91E0(a1, (float *)&(*(int64_t *)(void *)sr_leg_angular_limits), &sr_leg_ray[0]);
  v48 = dword_140404A6C[v2 + 280657982];
  v49 = dword_140404A6C[v2 + 280657980];
  dword_140404A6C[v2 + 280657993] = 0;
  SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), u64)[1] = __PAIR64__(v49, v48);
  (*(unsigned *)(void *)(sr_leg_quaternion_work+5)) = v48;
  SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), i32)[1] = dword_140404A6C[v2 + 280657981];
  (*(int32_t *)(void *)(sr_leg_quaternion_work+4)) = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), i32)[1];
  *(float *)&v50 = *(float *)&dword_140404A6C[v2 + 280657992] + *(float *)&dword_140404A6C[v2 + 280657986];
  SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), i32)[0] = v49;
  dword_140404A6C[v2 + 280657995] = v50;
  *(float *)&dword_140404A6C[v2 + 280657996] = *(float *)&dword_140404A6C[v2 + 280657993]
                                             + *(float *)&dword_140404A6C[v2 + 280657987];
  *(float *)&dword_140404A6C[v2 + 280657997] = *(float *)&dword_140404A6C[v2 + 280657994]
                                             + *(float *)&dword_140404A6C[v2 + 280657988];
  sub_1400BAA40(a1, (__int64)&sr_leg_targets[0], (__int64)&sr_leg_points[0]);
  v51 = *(float *)&dword_140404A6C[v2 + 280658108];
  v52 = *(float *)&dword_140404A6C[v2 + 280658053];
  v53 = v51 + v52;
  if ( (float)(v51 + v52) <= 1.0f )
  {
    sr_leg_weights[0] = *(float *)&dword_140404A6C[v2 + 280658053];
    sr_leg_weights[1] = v51;
  }
  else
  {
    sr_leg_weights[1] = (float)(1.0f / v53) * v51;
    sr_leg_weights[0] = (float)(1.0f / v53) * v52;
  }
  v54 = &sr_leg_weights[0];
  v55 = 0;
  v56 = 0;
  do
  {
    v57 = *(float *)((char *)&sr_leg_targets[0] + v55 * 4);
    ((unsigned *)(void *)(sr_leg_points+5))[v55 + 2] = *(_DWORD *)((char *)&sr_leg_targets[1] + v55 * 4);
    ((unsigned *)(void *)(sr_leg_points+5))[v55 + 3] = LODWORD((sr_leg_targets+3)[v55 - 1]);
    v58 = v57 + *(float *)&dword_140404A6C[v2 + 280657930];
    *(_QWORD *)((char *)v174 + v55 * 4) = 0;
    *(_DWORD *)((char *)&v174[1] + v55 * 4) = 0;
    *(float *)&((unsigned *)(void *)(sr_leg_points+5))[v55 + 1] = v58;
    *(float *)&((unsigned *)(void *)(sr_leg_points+5))[v55 + 2] = *(float *)&((unsigned *)(void *)(sr_leg_points+5))[v55 + 2] + *(float *)&dword_140404A6C[v2 + 280657931];
    v59 = *v41;
    *(float *)&((unsigned *)(void *)(sr_leg_points+5))[v55 + 3] = *(float *)&((unsigned *)(void *)(sr_leg_points+5))[v55 + 3] + *(float *)&dword_140404A6C[v2 + 280657932];
    if ( v59 == 1 )
    {
      sub_1400BBF30(
        a1,
        v6,
        (float *)&((unsigned *)(void *)(sr_leg_points+5))[v56 / 4 + 1],
        (float *)((char *)v174 + v56),
        (float *)((char *)&sr_leg_targets[0] + v56),
        (float *)((char *)&sr_leg_points[0] + v56),
        &SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[v56 / 4],
        (float *)&(*(__int128 *)(void *)sr_leg_target_basis),
        *v54);
      v59 = *v41;
    }
    if ( v59 == 3 )
      sub_1400BB6B0(a1, v6, (__int64)&(*(__m128 *)(void *)sr_leg_velocity_work) + v56, (float *)((char *)&sr_leg_targets[0] + v56), (intptr_t)sr_leg_quaternion_work + v56, (float *)&(*(__int128 *)(void *)sr_leg_basis));
    ++v6;
    v56 += 12LL;
    v55 += 3;
    ++v54;
    v41 += 55;
  }
  while ( v6 < 2 );
  sub_14010E370(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32), (float *)&(*(__int128 *)(void *)sr_leg_target_basis));
  v60 = &dword_140404A6C[v2 + 280651452];
  sub_14010E370(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32), (float *)&dword_140404A6C[v2 + 280651452]);
  v61 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), u32)[3]));
  v62 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), u32)[3]));
  v63 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[2];
  v64 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[0];
  v65 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[1];
  if ( (float)((float)((float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[3] * SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[3]) + (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[2] * SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[2]))
             + (float)((float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[0] * SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[0]) + (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[1] * SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[1]))) < 0.0f )
  {
    (*(__m128 *)(void *)sr_leg_quaternion_work) = _mm_xor_ps((*(__m128 *)(void *)sr_leg_quaternion_work), ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v63 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[2];
    v65 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[1];
    v64 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[0];
    v62 = _mm_shuffle_ps((*(__m128 *)(void *)sr_leg_quaternion_work), (*(__m128 *)(void *)sr_leg_quaternion_work), 255);
  }
  v69 = v62;
  v66 = -v63;
  v67 = -v65;
  v68 = -v64;
  v70 = v62;
  v71 = v62;
  SR_VEC_LANES(128, v69, f32)[0] = (float)((float)((float)(SR_VEC_LANES(128, v62, f32)[0] * SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[0]) + (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[3] * v68))
                          + (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[2] * v67))
                  - (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[1] * v66);
  SR_VEC_LANES(128, v70, f32)[0] = (float)((float)((float)(SR_VEC_LANES(128, v62, f32)[0] * SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[1]) - (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[2] * v68))
                          + (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[3] * v67))
                  + (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[0] * v66);
  SR_VEC_LANES(128, v71, f32)[0] = (float)((float)((float)(SR_VEC_LANES(128, v62, f32)[0] * SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[2]) + (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[1] * v68))
                          - (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[0] * v67))
                  + (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[3] * v66);
  SR_VEC_LANES(128, v61, f32)[0] = (float)((float)((float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[3] * SR_VEC_LANES(128, v62, f32)[0]) - (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[0] * v68))
                          - (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[1] * v67))
                  - (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[2] * v66);
  (*(__m128 *)(void *)sr_leg_velocity_work) = _mm_movelh_ps(_mm_unpacklo_ps(v69, v70), _mm_unpacklo_ps(v71, v61));
  v72 = fsqrt(
          (float)((float)(SR_VEC_LANES(128, v70, f32)[0] * SR_VEC_LANES(128, v70, f32)[0]) + (float)(SR_VEC_LANES(128, v69, f32)[0] * SR_VEC_LANES(128, v69, f32)[0]))
        + (float)(SR_VEC_LANES(128, v71, f32)[0] * SR_VEC_LANES(128, v71, f32)[0]));
  if ( v72 == 0.0f )
  {
    v73 = 0.0f;
    SR_VEC_LANES(128, v70, u64)[0] = 0;
    v74 = 0.0f;
  }
  else
  {
    SR_VEC_LANES(128, v70, f32)[0] = SR_VEC_LANES(128, v70, f32)[0] * (float)(1.0f / v72);
    v73 = (float)(1.0f / v72) * SR_VEC_LANES(128, v69, f32)[0];
    v74 = SR_VEC_LANES(128, v71, f32)[0] * (float)(1.0f / v72);
  }
  v75 = acos(fminf(fmaxf(SR_VEC_LANES(128, v61, f32)[0], -1.0f), 1.0f));
  LODWORD(v137) = v60[3];
  HIDWORD((*(__int128 *)(void *)sr_leg_target_basis)) = v137;
  v76 = v60[4];
  v77 = v75 + v75;
  *(float *)&v75 = fminf(*(float *)&dword_140404A6C[v2 + 280657921] + 0.5f, 1.0f);
  DWORD1((*(__int128 *)(void *)sr_leg_target_basis)) = v60[1];
  HIDWORD((*(__int128 *)(void *)(sr_leg_target_basis+4))) = v60[7];
  HIDWORD(v137) = v76;
  LODWORD((*(__int128 *)(void *)(sr_leg_target_basis+4))) = v76;
  sr_leg_weights[0] = *((float *)v60 + 5);
  *((float *)&(*(__int128 *)(void *)(sr_leg_target_basis+4)) + 1) = sr_leg_weights[0];
  *(float *)&v75 = fmaxf(*(float *)&v75, 0.125f) * 0.25f;
  SR_VEC_LANES(128, v70, f32)[0] = (float)(SR_VEC_LANES(128, v70, f32)[0] * v77) * *(float *)&v75;
  v78 = (float)(v74 * v77) * *(float *)&v75;
  v79 = (float)(v73 * v77) * *(float *)&v75;
  HIDWORD(v80) = SR_VEC_LANES(128, v70, i32)[1];
  LODWORD((*(__int128 *)(void *)sr_leg_target_basis)) = *v60;
  DWORD2((*(__int128 *)(void *)sr_leg_target_basis)) = v60[2];
  DWORD2((*(__int128 *)(void *)(sr_leg_target_basis+4))) = v60[6];
  sr_leg_target_basis[8] = v60[8];
  *(float *)&v80 = fsqrt((float)((float)(SR_VEC_LANES(128, v70, f32)[0] * SR_VEC_LANES(128, v70, f32)[0]) + (float)(v79 * v79)) + (float)(v78 * v78));
  if ( *(float *)&v80 > 0.000015258789 )
  {
    *(float *)&(*(int64_t *)(void *)sr_leg_angular_limits) = v79 * (float)(1.0f / *(float *)&v80);
    *((float *)&(*(int64_t *)(void *)sr_leg_angular_limits) + 1) = SR_VEC_LANES(128, v70, f32)[0] * (float)(1.0f / *(float *)&v80);
    sr_leg_angular_limits[2] = v78 * (float)(1.0f / *(float *)&v80);
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_leg_target_basis), (float *)&(*(int64_t *)(void *)sr_leg_angular_limits), v80);
    sr_leg_weights[0] = *((float *)&(*(__int128 *)(void *)(sr_leg_target_basis+4)) + 1);
    v137 = __PAIR64__((*(__int128 *)(void *)(sr_leg_target_basis+4)), HIDWORD((*(__int128 *)(void *)sr_leg_target_basis)));
  }
  v144 = &sr_leg_health[0];
  v133 = 0;
  v143 = (float *)&dword_140404A6C[282486348];
  v81 = &dword_140404A6C[v2 + 280658034];
  v145 = (float *)v174;
  v82 = 0;
  v83 = 10;
  v84 = &dword_140404A6C[v2 + 280652378];
  do
  {
    if ( v84[73] )
    {
      v85 = (int)*(v81 - 11);
      if ( (_DWORD)v85 != -1 )
      {
        v86 = 61 * v85;
        v87 = *(v81 - 8);
        *(_QWORD *)&dword_140404A6C[v86 + 486149267] = 0;
        dword_140404A6C[v86 + 486149269] = 0;
        dword_140404A6C[v86 + 486149286] = 1063675494;
        dword_140404A6C[v86 + 486149281] = 1056964608;
        dword_140404A6C[v86 + 486149282] = 1056964608;
        if ( v87 )
        {
          if ( v87 == 3 )
          {
            dword_140404A6C[v86 + 486149286] = 0;
            v88 = 1.0f - v142;
            dword_140404A6C[v86 + 486149273] = 0;
            *(float *)&v89 = 0.5f - (float)((float)(1.0f - (float)((float)(v88 * v88) * (float)(v88 * v88))) * 0.4375f);
            dword_140404A6C[v86 + 486149281] = v89;
            dword_140404A6C[v86 + 486149282] = v89;
          }
        }
        else
        {
          dword_140404A6C[v86 + 486149286] = 0;
          dword_140404A6C[v86 + 486149273] = 0;
        }
      }
    }
    *(_QWORD *)&v90 = dword_140404A6C[v2 + 280651341];
    (*(float *)&sr_leg_basis[8]) = 1.0f;
    (*(__int128 *)(void *)sr_leg_basis) = xmmword_140278D30;
    (*(__int128 *)(void *)(sr_leg_basis+4)) = xmmword_140278D30;
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_leg_basis), (float *)&(*(__int128 *)(void *)sr_leg_basis) + 3, v90);
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_leg_basis), (float *)&(*(__int128 *)(void *)sr_leg_basis), sr_export_float_lane_container(v81[21] ^ 0x80000000LL));
    v91 = *(v81 - 8);
    if ( v91 == 1 )
    {
      *(_QWORD *)&v92 = v81[23];
      (*(float *)&sr_leg_basis[8]) = 1.0f;
      (*(__int128 *)(void *)sr_leg_basis) = xmmword_140278D30;
      (*(__int128 *)(void *)(sr_leg_basis+4)) = xmmword_140278D30;
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_leg_basis), (float *)&(*(__int128 *)(void *)sr_leg_basis) + 3, v92);
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_leg_basis), (float *)&(*(__int128 *)(void *)sr_leg_basis), sr_export_float_lane_container(v81[21] ^ 0x80000000LL));
      v91 = *(v81 - 8);
    }
    sub_14010E370(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32), (float *)&(*(__int128 *)(void *)sr_leg_basis));
    sub_14010E370(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32), (float *)&(*(__int128 *)(void *)sr_leg_target_basis));
    v93 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[3];
    v94 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[2];
    v95 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[0];
    v96 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[1];
    sr_leg_weights[2] = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[1];
    if ( (float)((float)((float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[3] * SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[3]) + (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[2] * SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[2]))
               + (float)((float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[0] * SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[0]) + (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[1] * SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[1]))) < 0.0f )
    {
      (*(__m128 *)(void *)sr_leg_velocity_work) = _mm_xor_ps((*(__m128 *)(void *)sr_leg_velocity_work), ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
      v94 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[2];
      v96 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[1];
      v95 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[0];
      v93 = SR_VEC_READ_LANES(128, _mm_shuffle_ps((*(__m128 *)(void *)sr_leg_velocity_work), (*(__m128 *)(void *)sr_leg_velocity_work), 255), f32)[0];
    }
    SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[0] = -v95;
    v97 = -v94;
    SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[1] = -v96;
    v98 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[0] * v97;
    v99 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[0] * (float)-v96;
    v100 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[0] * (float)-v95;
    v101 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[1] * (float)-v95;
    v102 = SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[1] * (float)-v96;
    SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_velocity_work), f32)[2] = v97;
    SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[0] = (float)((float)((float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[0] * v93) + (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[3] * (float)-v95))
                             + (float)(sr_leg_weights[2] * v97))
                     - (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[2] * (float)-v96);
    SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[1] = (float)((float)((float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[3] * (float)-v96) - v98) + (float)(sr_leg_weights[2] * v93))
                     + (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[2] * (float)-v95);
    v103 = (float)((float)((float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[3] * v93) - v100) - v102) - (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[2] * v97);
    SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[2] = (float)((float)((float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[3] * v97) + v99) - v101) + (float)(SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[2] * v93);
    SR_VEC_LANES(128, (*(__m128 *)(void *)sr_leg_quaternion_work), f32)[3] = v103;
    if ( (v91 & 0xFFFFFFF7) == 0 )
      (*(__m128 *)(void *)sr_leg_quaternion_work) = ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279490));
    v104 = *(float *)((char *)&sr_leg_targets[0] + v82 * 4) + *(float *)&dword_140404A6C[v2 + 280657930];
    v105 = *(float *)((char *)&sr_leg_targets[1] + v82 * 4) + *(float *)&dword_140404A6C[v2 + 280657931];
    v106 = (sr_leg_targets+3)[v82 - 1] + *(float *)&dword_140404A6C[v2 + 280657932];
    if ( v91 == 1 )
    {
      v105 = *(float *)&((unsigned *)(void *)(sr_leg_points+5))[v82 + 2];
      v106 = *(float *)&((unsigned *)(void *)(sr_leg_points+5))[v82 + 3];
      v104 = *(float *)&((unsigned *)(void *)(sr_leg_points+5))[v82 + 1];
    }
    else
    {
      *(_QWORD *)((char *)v174 + v82 * 4) = 0;
      *(_DWORD *)((char *)&v174[1] + v82 * 4) = 0;
    }
    v107 = *(float *)((char *)&sr_leg_points[0] + v82 * 4);
    v108 = *(float *)((char *)&sr_leg_points[1] + v82 * 4);
    v109 = *(float *)&((unsigned *)(void *)(sr_leg_points+3))[v82 - 1];
    if ( v91 == 1 )
    {
      *(_QWORD *)&v110 = v81[23];
      (*(float *)&sr_leg_basis[8]) = 1.0f;
      (*(__int128 *)(void *)sr_leg_basis) = xmmword_140278D30;
      (*(__int128 *)(void *)(sr_leg_basis+4)) = xmmword_140278D30;
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_leg_basis), (float *)&(*(__int128 *)(void *)sr_leg_basis) + 3, v110);
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_leg_basis), (float *)&(*(__int128 *)(void *)sr_leg_basis), sr_export_float_lane_container(v81[21] ^ 0x8000000080000000uLL));
      v111 = *((float *)v84 - 1);
      v112 = *(float *)v84;
      v113 = *((float *)v84 - 2) - (float)(*((float *)v84 + 16) * 0.09375f);
      v114 = v111 - (float)(*((float *)v84 + 17) * 0.09375f);
      v115 = *(float *)v84 - (float)(*((float *)v84 + 18) * 0.09375f);
      sr_leg_ray[0] = (float)(*(float *)&dword_1402F6188 * 0.25f) + *((float *)v84 - 2);
      sr_leg_ray[1] = (float)(*(float *)&dword_1402F618C * 0.25f) + v111;
      sr_leg_ray[2] = (float)(*(float *)&dword_1402F6190 * 0.25f) + v112;
      v173[0] = sr_leg_ray[0] - (float)(*(float *)&dword_1402F6188 * 0.5f);
      v173[1] = sr_leg_ray[1] - (float)(*(float *)&dword_1402F618C * 0.5f);
      v173[2] = sr_leg_ray[2] - (float)(*(float *)&dword_1402F6190 * 0.5f);
      if ( (unsigned int)sub_1400B91E0(a1, &sr_leg_ray[0], v173) )
        v114 = *(float *)&dword_140404A6C[73006982] + 0.03125f;
      if ( v84[73] )
        v114 = *((float *)v81 + 20) + 0.03125f;
      v116 = 0.09375f - *v143;
      v91 = *(v81 - 8);
      v107 = (float)(*((float *)&(*(__int128 *)(void *)(sr_leg_basis+4)) + 2) * v116) + v113;
      v108 = (float)(*((float *)&(*(__int128 *)(void *)(sr_leg_basis+4)) + 3) * v116) + v114;
      v109 = (float)((*(float *)&sr_leg_basis[8]) * v116) + v115;
    }
    switch ( v91 )
    {
      case 3:
        v107 = *((float *)v81 - 2);
        v108 = *((float *)v81 - 1);
        v109 = *(float *)v81;
        break;
      case 8:
        v107 = v104 - (float)(*(float *)&v137 * 0.25f);
        v108 = v105 - (float)(*((float *)&v137 + 1) * 0.25f);
        v109 = v106 - (float)(sr_leg_weights[0] * 0.25f);
        break;
      case 0:
        v123 = *(float *)&dword_140404A6C[v2 + 280651373] * -0.75f;
        v124 = *(float *)&dword_140404A6C[v2 + 280651456];
        v125 = *(float *)&dword_140404A6C[v2 + 280651457];
        v126 = *(float *)&dword_140404A6C[v2 + 280651455];
        v108 = (float)(v124 * v123) + v105;
        v127 = (float)(v125 * v123) + v106;
        v107 = (float)(v126 * v123) + v104;
        v109 = v127;
        if ( dword_140404A6C[v2 + 280651324] )
        {
          v108 = v108 - (float)(fmaxf(*(float *)&dword_140404A6C[v2 + 280657921], 0.0f) * 0.25f);
        }
        else if ( *(float *)&dword_140404A6C[v2 + 280657931] < 0.016666668f )
        {
          v128 = fmaxf(*(float *)&dword_140404A6C[v2 + 280651456], 0.0f);
          sr_leg_ray[1] = 0.0f;
          v129 = v128;
          v130 = v128 * *(float *)&dword_140404A6C[v2 + 280657935];
          v131 = v129 * *(float *)&dword_140404A6C[v2 + 280657933];
          sr_leg_ray[2] = v130;
          sr_leg_ray[0] = v131;
          if ( v133 == dword_140404A6C[v2 + 280658004] )
          {
            v109 = (float)(v130 * 6.0f) + v127;
            v107 = (float)(v131 * 6.0f) + v107;
          }
          else
          {
            v108 = (float)(v124 * 0.25f) + v108;
            v107 = (float)(v107 - (float)(v131 * 3.0f)) + (float)(v126 * 0.25f);
            v109 = (float)(v127 - (float)(v130 * 3.0f)) + (float)(v125 * 0.25f);
          }
        }
        break;
    }
    (*(int64_t *)(void *)sr_leg_linear_limits) = 0;
    sr_leg_linear_limits[2] = 0;
    (*(int64_t *)(void *)sr_leg_angular_limits) = 0;
    v147[2] = v109 - v106;
    v117 = *v144;
    v147[0] = v107 - v104;
    v147[1] = v108 - v105;
    sr_leg_angular_limits[2] = 0.0f;
    v118 = (3 - (v91 != 0)) | 0x10;
    v146[0] = (float)(v117 * 0.22089323f) + 0.073631078f;
    v146[1] = v146[0];
    if ( v117 >= 1.0f )
      v118 = 3 - (v91 != 0);
    v146[2] = (float)(v117 * 0.22089323f) + 0.073631078f;
    if ( !v91 )
    {
      v119 = *(float *)&dword_140404A6C[v2 + 280651456] >= 0.875f;
      (*(int64_t *)(void *)sr_leg_angular_limits) = 0x3D8000003D800000LL;
      sr_leg_angular_limits[2] = 0.0625f;
      if ( !v119 )
      {
        (*(int64_t *)(void *)sr_leg_angular_limits) = 0x3C0000003C000000LL;
        sr_leg_angular_limits[2] = 0.0078125f;
      }
      (*(int64_t *)(void *)sr_leg_linear_limits) = 0x3E8000003E800000LL;
      sr_leg_linear_limits[2] = 1048576000;
    }
    v120 = dword_140404A6C[v2 + 280651333];
    if ( v120 > 0 )
    {
      *(float *)&(*(int64_t *)(void *)sr_leg_angular_limits) = 0.125f - (float)(fminf((float)v120 * 0.033333335f, 1.0f) * 0.09375f);
      *((float *)&(*(int64_t *)(void *)sr_leg_angular_limits) + 1) = *(float *)&(*(int64_t *)(void *)sr_leg_angular_limits);
      sr_leg_angular_limits[2] = *(float *)&(*(int64_t *)(void *)sr_leg_angular_limits);
    }
    v121 = v145;
    sub_1400B1450(
      a1,
      0,
      v83,
      v147,
      (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v2 * 4 + 1126819164),
      v145,
      1.0f,
      0,
      &(*(__m128 *)(void *)sr_leg_quaternion_work),
      v146,
      (unsigned int *)&(*(int64_t *)(void *)sr_leg_linear_limits),
      (unsigned int *)&(*(int64_t *)(void *)sr_leg_angular_limits),
      0.78539819f,
      v118);
    ++v133;
    v143 += 75;
    v83 += 3;
    ++v144;
    v82 += 3;
    v84 += 234;
    v81 += 55;
    v145 = v121 + 3;
  }
  while ( v83 < 16 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
