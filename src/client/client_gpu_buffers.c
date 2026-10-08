#include "shared_client.h"


//----- (00000001400817C0) ----------------------------------------------------
__int64 sub_1400817C0()
{
  __int64 v0; // r8
  signed int v1; // eax
  double v2; // xmm6_8
  float v3; // xmm9_4
  float v4; // xmm8_4
  signed int v5; // edi
  unsigned int *v6; // rbx
  int v7; // ebp
  int v8; // esi
  int v9; // r14d
  signed int v10; // r15d
  int *v11; // r12
  signed int v12; // r13d
  int v13; // ecx
  int v14; // eax
  float v15; // xmm0_4
  int v16; // eax
  double v17; // xmm0_8
  __int64 v18; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400817C0[16];
#define v20 (*(signed int (*))(void *)(sr_frame_1400817C0 + 0)) /* [rsp+120h] */
#define v21 (*(int (*))(void *)(sr_frame_1400817C0 + 8)) /* [rsp+128h] */

  qword_140404050(3553, dword_140404A6C[451221642]);
  v1 = dword_140404A6C[315570519];
  *(_QWORD *)&v2 = 1115684864;
  v3 = 384.0;
  v4 = 512.0 / (float)(int)dword_140404A6C[315570519];
  if ( (int)dword_140404A6C[315570520] > 0 )
    v3 = 384.0 / (float)(int)dword_140404A6C[315570520];
  v5 = 0;
  v20 = 0;
  if ( (int)dword_140404A6C[315570519] > 0 )
  {
    v6 = &dword_140404A6C[315570524];
    v7 = 57;
    v8 = 0;
    v9 = 0;
    v21 = 0;
    do
    {
      v10 = 0;
      if ( (int)*(v6 - 1) > 0 )
      {
        v11 = (int *)v6;
        v12 = v5;
        do
        {
          v13 = 15731 * (v5 ^ (v5 << 13)) * (v5 ^ (v5 << 13)) + 789221;
          v14 = 15731 * (((v9 + v10) << 13) ^ (v9 + v10)) * (((v9 + v10) << 13) ^ (v9 + v10)) + 789221;
          v15 = (float)((v14 * v14 - 771171059) & 0x7FFFFFFF);
          v16 = (v12 ^ (v12 << 13)) * (v12 ^ (v12 << 13));
          sub_14006CFF0(
            v2,
            sr_export_float_lane_container((unsigned __int64)COERCE_UNSIGNED_INT(512.0f - (float)((float)*v11 * v3))),
            COERCE_UNSIGNED_INT((float)(v4)) /* native XMM2 width = XMM8 */,
            (float)v11[1] * v3,
            8,
            COERCE_INT((float)(0.5 - (float)((float)((v13 * v13 - 771171059) & 0x7FFFFFFF) * 4.6566129e-10)) + 0.5f),
            COERCE_INT((float)(0.5 - (float)(v15 * 4.6566129e-10)) + 0.5f),
            COERCE_INT(
              (float)(0.5
                    - (float)((float)(((15731 * v16 + 789221) * (15731 * v16 + 789221) - 771171059) & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 0.5f),
            1065353216);
          ++v10;
          v5 += v8 + 57;
          v9 += v8;
          v12 += v7;
          v11 += 3;
        }
        while ( v10 < (int)*(v6 - 1) );
        v1 = dword_140404A6C[315570519];
        v5 = v20;
        v9 = v21;
      }
      ++v5;
      *(float *)&v2 = *(float *)&v2 + v4;
      v9 += 57;
      v20 = v5;
      v7 += 1684013;
      v21 = v9;
      v8 += 54323;
      v6 += 3074;
    }
    while ( v5 < v1 );
  }
  sub_14006CFF0(sr_export_float_lane_container(1115684864), sr_export_float_lane_container(1140850688), COERCE_UNSIGNED_INT((float)(v4 + v4)) /* native XMM2 width = XMM8+XMM8 */, 384.0, 8, 1065353216, 0, 0, 1065353216);
  *(_QWORD *)&v17 = COERCE_UNSIGNED_INT((float)(int)dword_140404A6C[315570519]);
  *(float *)&v17 = (float)(*(float *)&v17 * v4) + 64.0;
  return sub_14006CFF0(v17, sr_export_float_lane_container(1140850688), COERCE_UNSIGNED_INT((float)(v4 + v4)) /* native XMM2 width = XMM8+XMM8 */, 384.0, 8, 1065353216, 0, 0, 1065353216);
}
#undef v20
#undef v21

// 1400819EF: variable 'v0' is possibly undefined
// 140081B24: variable 'v18' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18B7D2FC8: using guessed type unsigned int;

//----- (000000014011E090) ----------------------------------------------------
void            sub_14011E090(int a1)
{
  __int64 v1; // rbp
  unsigned int *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi

  if ( !dword_140404A6C[312324428] && !dword_140404A6C[328554868] )
  {
    v1 = 4;
    v2 = &dword_140404A6C[6930 * a1 + 83200503];
    do
    {
      if ( v2[780] )
      {
        v3 = (int)*v2;
        if ( (int)v3 >= 0 )
        {
          v4 = (int)*v2;
          v5 = 6 * v3;
          if ( dword_140404A6C[6 * v3 + 312226123] != -1 )
          {
            ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0,3,5126,0,64,(const void *)((intptr_t)(int32_t)(dword_140404A6C[309078348+3074*((int64_t)(int32_t)dword_140404A6C[6*v3+312226123])+3*((int64_t)(int32_t)dword_140404A6C[(6*v3+312226123)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[6*v3+312226123])*dword_140404A6C[309078344])));
            if ( dword_140404A6C[v5 + 328456563] != -1 )
              (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(12,(int)(uint32_t)(6u*dword_140404A6C[8969*v4+73991665]),5125,(const void *)((intptr_t)(int32_t)(dword_140404A6C[325308788+3074*((int64_t)(int32_t)dword_140404A6C[v5+328456563])+3*((int64_t)(int32_t)dword_140404A6C[(v5+328456563)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[v5+328456563])*dword_140404A6C[325308784])));
          }
        }
      }
      ++v2;
      --v1;
    }
    while ( v1 );
  }
}

// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140193FE0) ----------------------------------------------------
__int64            sub_140193FE0(int a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v8; // r12
  __int64 v10; // rbp
  int v11; // ebx
  __int64 v12; // r8
  _DWORD *v13; // rax
  __int64 v14; // r8
  unsigned int *v15; // r10
  int *v16; // r9

  v4 = a4;
  v6 = 3246088LL * a1;
  v8 = a1;
  if ( dword_140404A6C[v6 + 312324428] )
    return 0;
  v10 = v6 * 4 + 24LL * a2;
  if ( *(unsigned int *)((char *)&dword_140404A6C[312226123] + v10) != -1 )
    sub_1401941F0(a1, a2);
  if ( !(_DWORD)v4 || (int)v4 >= (int)dword_140404A6C[v6 + 309078344] )
    goto LABEL_16;
  v11 = 0;
  v12 = dword_140404A6C[v6 + 309078343] - 1;
  if ( (int)(dword_140404A6C[v6 + 309078343] - 1) > 0 )
  {
    /* 0x140194083: lea rax, [rdi+0x49f0ef98] is the page's entry count, dword index 309078347. */
    v13 = &dword_140404A6C[309078347 + v6];
    do
    {
      if ( (int)v4 + *(v13 - 1) < (int)dword_140404A6C[v6 + 309078344]
        && *v13 < (signed int)dword_140404A6C[v6 + 309078345] )
      {
        break;
      }
      ++v11;
      v13 += 3074;
    }
    while ( v11 < (int)v12 );
  }
  if ( v11 < (int)v12 )
  {
    if ( !dword_140404A6C[v6 + 312324428] )
    {
      qword_140404170(
        dword_140404A6C[v6 + 309078341],
        dword_140404A6C[2 * dword_140404A6C[v8 + 283791462] + 283793813],
        v12);
      qword_140404198(
        dword_140404A6C[v6 + 309078341],
        (int)(v11 * dword_140404A6C[v6 + 309078344] + dword_140404A6C[3074 * v11 + 309078346 + v6]),
        v4,
        a3);
    }
    v14 = 3074LL * v11;
    v15 = &dword_140404A6C[v6 + 309078346 + v14];
    v16 = (int *)&dword_140404A6C[309078347 + v6 + v14];
    dword_140404A6C[3 * *v16 + 309078348 + v14 + v6] = *v15;
    dword_140404A6C[3 * *v16 + 309078349 + v14 + v6] = v4;
    dword_140404A6C[3 * *v16 + 309078350 + v14 + v6] = a2;
    *(unsigned int *)((char *)&dword_140404A6C[312226123] + v10) = v11;
    *(unsigned int *)((char *)&dword_140404A6C[312226124] + v10) = (*v16)++;
    *v15 += v4;
    dword_140404A6C[v6 + 312324427] += v4;
    return 1;
  }
  else
  {
LABEL_16:
    *(_QWORD *)((char *)&dword_140404A6C[312226123] + v10) = -1;
    return 0;
  }
}

// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401941F0) ----------------------------------------------------
void            sub_1401941F0(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rcx
  int v10; // eax
  bool v11; // sf
  unsigned int v12; // eax
  int v13; // ebx
  unsigned int v14; // ebp
  __int64 v15; // r8
  int v16; // eax
  unsigned int *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned int v20; // edx
  __int64 v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // r15d
  unsigned int *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // edx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401941F0[32];
#define v28 (*(unsigned int (*))(void *)(sr_frame_1401941F0 + 0)) /* [rsp+70h] */
#define v29 (*(__int64 (*))(void *)(sr_frame_1401941F0 + 16)) /* [rsp+80h] */

  v2 = a1;
  v3 = 3246088LL * a1;
  if ( !dword_140404A6C[v3 + 312324428] )
  {
    v4 = v3 * 4 + 24LL * a2;
    v5 = *(int *)((char *)&dword_140404A6C[312226124] + v4);
    v6 = *(int *)((char *)&dword_140404A6C[312226123] + v4);
    if ( (int)v6 >= 0
      && (int)v6 < (int)(dword_140404A6C[v3 + 309078343] - 1)
      && (int)v5 >= 0
      && (int)v5 < (int)dword_140404A6C[v3 + 309078345] )
    {
      v7 = 3074 * v6;
      v8 = 12296 * v6 + v3 * 4;
      if ( *(int *)((char *)&dword_140404A6C[309078347] + v8) > 0 )
      {
        *(unsigned int *)((char *)&dword_140404A6C[312226123] + v4) = -1;
        *(unsigned int *)((char *)&dword_140404A6C[312226124] + v4) = -1;
        --*(unsigned int *)((char *)&dword_140404A6C[309078347] + v8);
        v9 = 12 * v5 + v8;
        v29 = 3 * v5;
        v10 = *(unsigned int *)((char *)&dword_140404A6C[309078349] + v9);
        v11 = (int)(*(unsigned int *)((char *)&dword_140404A6C[309078346] + v8) - v10) < 0;
        *(unsigned int *)((char *)&dword_140404A6C[309078346] + v8) -= v10;
        v12 = *(unsigned int *)((char *)&dword_140404A6C[309078346] + v8);
        v13 = 0;
        if ( v11 )
          v12 = 0;
        *(unsigned int *)((char *)&dword_140404A6C[309078346] + v8) = v12;
        dword_140404A6C[v3 + 312324427] -= *(unsigned int *)((char *)&dword_140404A6C[309078349] + v9);
        v14 = *(unsigned int *)((char *)&dword_140404A6C[309078348] + v9);
        qword_140404170(
          dword_140404A6C[v3 + 309078341],
          dword_140404A6C[2 * dword_140404A6C[v2 + 283791462] + 283793813],
          v2);
        v16 = *(unsigned int *)((char *)&dword_140404A6C[309078347] + v8);
        if ( dword_140404A6C[284024930] )
        {
          if ( (int)v5 < v16 )
          {
            v17 = &dword_140404A6C[v3 + 309078349 + v7 + v29];
            do
            {
              v18 = (int)v17[4];
              v17 += 3;
              v19 = (int)*v17;
              v20 = v5;
              LODWORD(v5) = v5 + 1;
              dword_140404A6C[6 * v18 + 312226124 + v3] = v20;
              qword_140404170(36663, dword_140404A6C[2 * dword_140404A6C[283791469] + 283793813], v15);
              unk_1404047B0(
                dword_140404A6C[v3 + 309078341],
                36663,
                (int)(*(v17 - 1) + dword_140404A6C[v3 + 309078344] * v6),
                0,
                v19);
              qword_140404170(36662, dword_140404A6C[2 * dword_140404A6C[283791469] + 283793813], v21);
              unk_1404047B0(
                36662,
                dword_140404A6C[v3 + 309078341],
                0,
                (int)(v14 + dword_140404A6C[v3 + 309078344] * v6),
                v19);
              *(v17 - 3) = *v17;
              v22 = v17[1];
              *(v17 - 4) = v14;
              v14 += v19;
              *(v17 - 2) = v22;
            }
            while ( (int)v5 < *(int *)((char *)&dword_140404A6C[309078347] + v8) );
          }
        }
        else if ( (int)v5 < v16 )
        {
          v28 = v14;
          v23 = dword_140404A6C[3 * v5 + 309078351 + v3 + v7];
          v24 = &dword_140404A6C[v3 + 309078349 + v7 + v29];
          do
          {
            v25 = (int)v24[4];
            v24 += 3;
            v13 += *v24;
            v26 = (unsigned int)v5;
            LODWORD(v5) = v5 + 1;
            dword_140404A6C[6 * v25 + 312226124 + v3] = v26;
            v27 = *v24;
            LODWORD(v25) = v24[1];
            *(v24 - 4) = v14;
            v14 += v27;
            *(v24 - 3) = v27;
            *(v24 - 2) = v25;
          }
          while ( (int)v5 < *(int *)((char *)&dword_140404A6C[309078347] + v8) );
          qword_140404170(36663, dword_140404A6C[2 * dword_140404A6C[283791469] + 283793813], v26);
          unk_1404047B0(
            dword_140404A6C[v3 + 309078341],
            36663,
            (int)(v23 + dword_140404A6C[v3 + 309078344] * v6),
            0,
            v13);
          unk_1404047B0(
            36663,
            dword_140404A6C[v3 + 309078341],
            0,
            (int)(v28 + dword_140404A6C[v3 + 309078344] * v6),
            v13);
        }
      }
    }
  }
}
#undef v28
#undef v29

// 1401943A3: variable 'v15' is possibly undefined
// 1401943FB: variable 'v21' is possibly undefined
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 1404047B0: using guessed type __int64 (__fastcall *unk_1404047B0)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

