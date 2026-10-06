#include "shared_client.h"

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;

//----- (000000014007A570) ----------------------------------------------------
__int64            sub_14007A570(int a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  float v7; // xmm7_4
  float v8; // xmm4_4
  signed int v9; // eax
  int v10; // r8d
  int v11; // r10d
  __int64 v12; // r9
  float v13; // xmm6_4

  v7 = (float)a4 / (float)a3;
  v8 = (float)(a2 + a4);
  if ( dword_140404A6C[137297765] )
  {
    v9 = a3 * dword_140404A6C[137297761];
    v10 = 0;
    v11 = 0;
    v12 = (unsigned int)(int)(float)((float)(int32_t)(uint32_t)(a4 * dword_140404A6C[137297762])
                                   * (float)(1.0 / *(float *)&dword_140404A6C[438291415]));
    if ( (int)dword_140404A6C[137297755] > (int)dword_140404A6C[137297761] )
      v10 = (signed int)(dword_140404A6C[137297755] - dword_140404A6C[137297761]) / 2;
    if ( (int)dword_140404A6C[137297756] > (int)dword_140404A6C[137297762] )
      v11 = (signed int)(dword_140404A6C[137297756] - dword_140404A6C[137297762]) / 2;
    qword_140302FE8(
      (unsigned int)(v10
                   + (int)(float)((float)(int32_t)(uint32_t)(a1 * dword_140404A6C[137297761])
                                * (float)(1.0 / *(float *)&dword_140404A6C[438291414]))),
      (unsigned int)(v11
                   + (int)(float)((float)(int32_t)(uint32_t)(dword_140404A6C[137297762]
                                        * (int)(float)(*(float *)&dword_140404A6C[438291415] - v8))
                                * (float)(1.0 / *(float *)&dword_140404A6C[438291415]))),
      (unsigned int)(int)(float)((float)v9 * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
      v12);
  }
  else
  {
    qword_140302FE8(
      (unsigned int)(int)(float)((float)(int32_t)(uint32_t)(a1 * dword_140404A6C[137297755])
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
      (unsigned int)(int)(float)((float)(int32_t)(uint32_t)(dword_140404A6C[137297756]
                                       * (int)(float)(*(float *)&dword_140404A6C[438291415] - v8))
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291415])),
      (unsigned int)(int)(float)((float)(int32_t)(uint32_t)(a3 * dword_140404A6C[137297755])
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
      (unsigned int)(int)(float)((float)(int32_t)(uint32_t)(a4 * dword_140404A6C[137297756])
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291415])));
  }
  *(_QWORD *)&dword_140404A6C[431564497] = 0;
  dword_140404A6C[431564532] = 1065353216;
  *(float *)&dword_140404A6C[431564485] = a5 / (float)(a5 * a7);
  *(_OWORD *)&dword_140404A6C[431564486] = 0;
  *(float *)&dword_140404A6C[431564490] = a5 / (float)((float)(v7 * a7) * a5);
  *(_OWORD *)&dword_140404A6C[431564491] = 0;
  v13 = 1.0 / (float)(a6 - a5);
  dword_140404A6C[431564496] = -1082130432;
  *(float *)&dword_140404A6C[431564495] = -(float)((float)(a5 + a6) * v13);
  *(_OWORD *)&dword_140404A6C[431564504] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564500] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564512] = 0;
  *(_OWORD *)&dword_140404A6C[431564508] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564520] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564516] = xmmword_140278D90;
  *(_OWORD *)&dword_140404A6C[431564528] = 0;
  *(_OWORD *)&dword_140404A6C[431564524] = xmmword_140279490;
  *(float *)&dword_140404A6C[431564499] = (float)(v13 * a5) * (float)(a6 * -2.0);
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  return sub_14007A0E0(
           &dword_140404A6C[431564565],
           (__int64)&dword_140404A6C[431564533],
           (__int64)&dword_140404A6C[431564485]);
}

// 1400947A1: variable 'v0' is possibly undefined
// 1400947BB: variable 'v1' is possibly undefined
// 140094953: variable 'v11' is possibly undefined
// 140094960: variable 'v12' is possibly undefined
// 140094A5F: variable 'v13' is possibly undefined
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 1404042E8: using guessed type __int64 (__fastcall *unk_1404042E8)(_QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 150F55020: using guessed type unsigned int;
// 18417E1B4: using guessed type unsigned int;

//----- (0000000140094A90) ----------------------------------------------------
__int64 sub_140094A90()
{
  unsigned int v0; // r12d
  unsigned int *v1; // rbx
  unsigned int *v2; // rdi
  unsigned int v3; // r13d
  __int64 v4; // r15
  __int64 v5; // r11
  __int64 v6; // kr08_8
  int *v7; // r10
  int v8; // r14d
  __int64 v9; // r8
  int v10; // ecx
  unsigned int *v11; // r9
  int v12; // edx
  float *v13; // rax
  float *v14; // r8
  signed __int64 v15; // rcx
  __int64 v16; // r10
  float v17; // xmm3_4
  __int64 v18; // rdx
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float *v22; // r14
  float *v23; // rax
  float *v24; // r8
  signed __int64 v25; // rcx
  __int64 v26; // r10
  float v27; // xmm3_4
  __int64 v28; // rdx
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm6_4
  float *v32; // rax
  float *v33; // r8
  signed __int64 v34; // rcx
  __int64 v35; // r10
  float v36; // xmm3_4
  __int64 v37; // rdx
  float v38; // xmm4_4
  float v39; // xmm5_4
  float v40; // xmm6_4
  float *v41; // rsi
  float *v42; // rax
  float *v43; // r8
  signed __int64 v44; // rcx
  __int64 v45; // r10
  float v46; // xmm3_4
  __int64 v47; // rdx
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm6_4
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // rcx
  float v61; // xmm7_4
  float *v62; // rax
  float *v63; // r8
  signed __int64 v64; // rcx
  __int64 v65; // r10
  float v66; // xmm3_4
  __int64 v67; // rdx
  float v68; // xmm4_4
  float v69; // xmm5_4
  float v70; // xmm6_4
  float *v71; // rax
  __int64 v72; // r8
  signed __int64 v73; // rdi
  float v74; // xmm3_4
  __int64 v75; // rcx
  float v76; // xmm4_4
  float v77; // xmm5_4
  float v78; // xmm6_4
  float *v79; // rax
  signed __int64 v80; // rbx
  __int64 v81; // r8
  float v82; // xmm3_4
  __int64 v83; // rcx
  float v84; // xmm4_4
  float v85; // xmm5_4
  float v86; // xmm6_4
  __int64 v87; // rdx
  __int64 v88; // r8
  _Alignas(16) __int128 sr_visibility_matrix[4];
  _Alignas(16) unsigned char sr_visibility_clip[16];
  _Alignas(16) __int128 sr_visibility_basis[4];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140094A90[224];
#define v90 (*(__int64 (*))(void *)(sr_frame_140094A90 + 0)) /* [rsp+8h] */
#define v91 (*(__int64 (*))(void *)(sr_frame_140094A90 + 32)) /* [rsp+28h] */
#define v92 (*(__int64 (*))(void *)(sr_frame_140094A90 + 40)) /* [rsp+30h] */
#define v104 (*(__int64 (*))(void *)(sr_frame_140094A90 + 208)) /* [rsp+D8h] */

  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[40714349]), 0, 0x400u);
  if ( !dword_140404A6C[284024893] )
  {
    v0 = dword_140404A6C[315570520];
    v1 = &dword_140404A6C[318718300];
    v2 = &dword_140404A6C[83200513];
    v3 = dword_140404A6C[312324432];
    v4 = 4096;
    do
    {
      if ( *(v2 - 6156) )
      {
        v5 = *v2;
        if ( (int)v5 > 0 )
        {
          v6 = (int)(v0 * *(v1 - 1) + dword_140404A6C[3074 * *(v1 - 1) + 315570524 + 3 * *v1]);
          v7 = (int *)(v2 + 2);
          v8 = (int)(v3 * *(v1 - 3246089) + dword_140404A6C[3074 * *(v1 - 3246089) + 312324436 + 3 * *(v1 - 3246088)])
             / 64;
          do
          {
            v9 = *((unsigned __int8 *)v7 - 4);
            v10 = *v7;
            v7 += 3;
            v11 = &dword_140404A6C[v9 + 40714349];
            v9 <<= 14;
            dword_140404A6C[v9 + 40714605 + (int)*v11] = 3 * v10;
            v12 = *(v7 - 2) + (((BYTE4(v6) & 3) + (int)v6) >> 2) + 2 * *(v7 - 2);
            dword_140404A6C[v9 + 53297517 + (int)*v11] = v12;
            dword_140404A6C[v9 + 53297517 + (int)*v11] *= 4;
            *(_QWORD *)&dword_140404A6C[2 * v9 + 44908909 + 2 * (int)*v11] = 4 * v12;
            *(_QWORD *)&dword_140404A6C[2 * v9 + 57491821 + 2 * (int)*v11] = dword_140404A6C[v9 + 53297517 + (int)*v11];
            dword_140404A6C[v9 + 65880429 + (int)(*v11)++] = v8;
            --v5;
          }
          while ( v5 );
          v0 = dword_140404A6C[315570520];
        }
      }
      v1 += 6;
      v2 += 6930;
      --v4;
    }
    while ( v4 );
  }
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790155] + 283791765]);
  sub_14007A8C0(
    0,
    0,
    1024,
    576,
    *(float *)&dword_140404A6C[284545216],
    *(float *)&dword_140404A6C[284545217],
    *(float *)&dword_140404A6C[284545218]);
  v13 = (float *)&sr_visibility_matrix[0];
  dword_140404A6C[431564501] = dword_140404A6C[284024505];
  v14 = (float *)&sr_visibility_basis[0] + 1;
  dword_140404A6C[431564509] = dword_140404A6C[284024507];
  v15 = (char *)&dword_140404A6C[431564505] - (char *)&sr_visibility_matrix[0];
  v16 = 4;
  dword_140404A6C[431564505] = dword_140404A6C[284024506];
  dword_140404A6C[431564502] = dword_140404A6C[284024508];
  dword_140404A6C[431564506] = dword_140404A6C[284024509];
  dword_140404A6C[431564510] = dword_140404A6C[284024510];
  dword_140404A6C[431564503] = dword_140404A6C[284024511];
  dword_140404A6C[431564507] = dword_140404A6C[284024512];
  dword_140404A6C[431564511] = dword_140404A6C[284024513];
  sr_visibility_basis[1] = xmmword_140278D80;
  sr_visibility_basis[0] = xmmword_140278D30;
  LODWORD(sr_visibility_basis[3]) = dword_140404A6C[284024502] ^ 0x80000000;
  sr_visibility_basis[2] = xmmword_140278E20;
  *((float *)&sr_visibility_basis[3] + 1) = -*(float *)&dword_140404A6C[284024503];
  *((float *)&sr_visibility_basis[3] + 2) = -*(float *)&dword_140404A6C[284024504];
  *(_QWORD *)&dword_140404A6C[431564513] = 0;
  dword_140404A6C[431564515] = 0;
  dword_140404A6C[431564504] = 0;
  dword_140404A6C[431564508] = 0;
  dword_140404A6C[431564512] = 0;
  dword_140404A6C[431564516] = 1065353216;
  HIDWORD(sr_visibility_basis[3]) = 1065353216;
  do
  {
    v17 = *(v14 - 1);
    v18 = 4;
    v19 = *v14;
    v20 = v14[1];
    v21 = v14[2];
    do
    {
      *v13 = (float)((float)((float)(v17 * *(float *)((char *)v13 + v15 - 16))
                           + (float)(v19 * *(float *)((char *)v13 + v15)))
                   + (float)(v20 * *(float *)((char *)v13 + v15 + 16)))
           + (float)(v21 * *(float *)((char *)v13 + v15 + 32));
      ++v13;
      --v18;
    }
    while ( v18 );
    v14 += 4;
    v15 -= 16LL;
    --v16;
  }
  while ( v16 );
  v22 = (float *)&dword_140404A6C[431564518];
  *(_OWORD *)&dword_140404A6C[431564501] = sr_visibility_matrix[0];
  v23 = (float *)&sr_visibility_matrix[0];
  v24 = (float *)&dword_140404A6C[431564518];
  *(_OWORD *)&dword_140404A6C[431564505] = sr_visibility_matrix[1];
  v25 = (char *)&dword_140404A6C[431564505] - (char *)&sr_visibility_matrix[0];
  v26 = 4;
  *(_OWORD *)&dword_140404A6C[431564509] = sr_visibility_matrix[2];
  *(_OWORD *)&dword_140404A6C[431564513] = sr_visibility_matrix[3];
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  do
  {
    v27 = *(v24 - 1);
    v28 = 4;
    v29 = *v24;
    v30 = v24[1];
    v31 = v24[2];
    do
    {
      *v23 = (float)((float)((float)(v27 * *(float *)((char *)v23 + v25 - 16))
                           + (float)(v29 * *(float *)((char *)v23 + v25)))
                   + (float)(v30 * *(float *)((char *)v23 + v25 + 16)))
           + (float)(v31 * *(float *)((char *)v23 + v25 + 32));
      ++v23;
      --v28;
    }
    while ( v28 );
    v24 += 4;
    v25 -= 16LL;
    --v26;
  }
  while ( v26 );
  *(_OWORD *)&dword_140404A6C[431564533] = sr_visibility_matrix[0];
  v32 = (float *)&sr_visibility_matrix[0];
  v33 = (float *)&dword_140404A6C[431564502];
  *(_OWORD *)&dword_140404A6C[431564537] = sr_visibility_matrix[1];
  v34 = (char *)&dword_140404A6C[431564489] - (char *)&sr_visibility_matrix[0];
  v35 = 4;
  *(_OWORD *)&dword_140404A6C[431564541] = sr_visibility_matrix[2];
  *(_OWORD *)&dword_140404A6C[431564545] = sr_visibility_matrix[3];
  do
  {
    v36 = *(v33 - 1);
    v37 = 4;
    v38 = *v33;
    v39 = v33[1];
    v40 = v33[2];
    do
    {
      *v32 = (float)((float)((float)(v36 * *(float *)((char *)v32 + v34 - 16))
                           + (float)(v38 * *(float *)((char *)v32 + v34)))
                   + (float)(v39 * *(float *)((char *)v32 + v34 + 16)))
           + (float)(v40 * *(float *)((char *)v32 + v34 + 32));
      ++v32;
      --v37;
    }
    while ( v37 );
    v33 += 4;
    v34 -= 16LL;
    --v35;
  }
  while ( v35 );
  v41 = (float *)&dword_140404A6C[431564534];
  *(_OWORD *)&dword_140404A6C[431564549] = sr_visibility_matrix[0];
  v42 = (float *)&sr_visibility_matrix[0];
  v43 = (float *)&dword_140404A6C[431564534];
  *(_OWORD *)&dword_140404A6C[431564553] = sr_visibility_matrix[1];
  v44 = (char *)&dword_140404A6C[431564489] - (char *)&sr_visibility_matrix[0];
  v45 = 4;
  *(_OWORD *)&dword_140404A6C[431564557] = sr_visibility_matrix[2];
  *(_OWORD *)&dword_140404A6C[431564561] = sr_visibility_matrix[3];
  do
  {
    v46 = *(v43 - 1);
    v47 = 4;
    v48 = *v43;
    v49 = v43[1];
    v50 = v43[2];
    do
    {
      *v42 = (float)((float)((float)(v46 * *(float *)((char *)v42 + v44 - 16))
                           + (float)(v48 * *(float *)((char *)v42 + v44)))
                   + (float)(v49 * *(float *)((char *)v42 + v44 + 16)))
           + (float)(v50 * *(float *)((char *)v42 + v44 + 32));
      ++v42;
      --v47;
    }
    while ( v47 );
    v43 += 4;
    v44 -= 16LL;
    --v45;
  }
  while ( v45 );
  *(_OWORD *)&dword_140404A6C[431564565] = sr_visibility_matrix[0];
  *(_OWORD *)&dword_140404A6C[431564569] = sr_visibility_matrix[1];
  LODWORD(v91) = 0;
  *(_OWORD *)&dword_140404A6C[431564573] = sr_visibility_matrix[2];
  v51 = dword_140404A6C[44 * dword_140404A6C[283829871] + 284024944];
  *(_OWORD *)&dword_140404A6C[431564577] = sr_visibility_matrix[3];
  unk_140404718(36160, 36064, 3553, v51, 0);
  (*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(0x1.8000000000000p-2f,0x1.8000000000000p-2f,0x1.8000000000000p-2f,0.0f);
  (*(void (           **)(__int64))&dword_140404A6C[18215095])(0xFFFFFFFFLL);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215091])(0);
  if ( dword_140404A6C[73991626] )
    (*(void (**)(double))&dword_140404A6C[18215093])(0.0);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(17664);
  if ( dword_140404A6C[73991626] )
    (*(void (**)(double))&dword_140404A6C[18215093])(0x1.0000000000000p+0);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215095])(0);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  dword_140404A6C[456217211] = dword_140404A6C[188872559];
  dword_140404A6C[456217217] = dword_140404A6C[188872559];
  v56 = dword_140404A6C[2 * dword_140404A6C[283791478] + 283793813];
  *(_OWORD *)&dword_140404A6C[456217212] = xmmword_140279830;
  dword_140404A6C[456217208] = 6;
  *(_OWORD *)&dword_140404A6C[456217218] = xmmword_140279830;
  dword_140404A6C[456217207] = 4;
  dword_140404A6C[456217209] = dword_140404A6C[188872557];
  dword_140404A6C[456217210] = dword_140404A6C[297756277];
  dword_140404A6C[456217216] = dword_140404A6C[297756277];
  dword_140404A6C[456217222] = dword_140404A6C[297756277];
  dword_140404A6C[456217227] = dword_140404A6C[188872557];
  dword_140404A6C[456217228] = dword_140404A6C[297756277];
  *(_OWORD *)&dword_140404A6C[456217223] = xmmword_140278E30;
  *(_OWORD *)&dword_140404A6C[456217229] = xmmword_140278E30;
  qword_140404170(34962, v56, v57);
  qword_140404198(34962, 0, 4 * dword_140404A6C[456217207] * dword_140404A6C[456217208], &dword_140404A6C[456217209]);
  qword_1404042E0(dword_140404A6C[71737805]);
  qword_140404338(dword_140404A6C[71737811], 1, &dword_140404A6C[284024502]);
  qword_140404338(dword_140404A6C[71737815], 1, &dword_140404A6C[284550403]);
  qword_140404378(dword_140404A6C[71737819], 1, 0, &dword_140404A6C[431564565]);
  qword_140404338(dword_140404A6C[71737820], 1, &dword_140404A6C[284545205]);
  qword_140404338(dword_140404A6C[71737821], 1, &dword_140404A6C[284545209]);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  unk_140404098(33985);
  qword_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
  unk_140404098(33984);
  ((void (*)(unsigned,float,float))unk_1404043C8)(1,0.5f,0.5f);
  qword_140404238(0);
  qword_140404238(2);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[456217208]),(const void *)(intptr_t)(0));
  v92 = 12;
  LODWORD(v91) = 4 * dword_140404A6C[456217208];
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(2, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[456217208]),(const void *)(intptr_t)(12));
  qword_140404170(34963, dword_140404A6C[456807040], v58);
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(6u*((int32_t)dword_140404A6C[456217207]/4)),5123,NULL);
  qword_140404170(34963, 0, v59);
  qword_140404230(0);
  qword_140404230(2);
  unk_140404098(33985);
  qword_140404050(34067, 0);
  unk_140404098(33984);
  LOBYTE(v60) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v60);
  v61 = *(float *)&dword_140404A6C[297756277];
  v62 = (float *)&sr_visibility_matrix[0];
  v63 = (float *)&sr_visibility_basis[0] + 1;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  v64 = (char *)&dword_140404A6C[431564521] - (char *)&sr_visibility_matrix[0];
  dword_140404A6C[431564529] = 0;
  v65 = 4;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  dword_140404A6C[431564531] = 0;
  dword_140404A6C[431564532] = 1065353216;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  sr_visibility_basis[1] = xmmword_140278DE0;
  *(float *)&dword_140404A6C[431564530] = v61 + v61;
  sr_visibility_basis[0] = xmmword_140278D30;
  sr_visibility_basis[2] = xmmword_140278E20;
  sr_visibility_basis[3] = xmmword_140279490;
  do
  {
    v66 = *(v63 - 1);
    v67 = 4;
    v68 = *v63;
    v69 = v63[1];
    v70 = v63[2];
    do
    {
      *v62 = (float)((float)((float)(v66 * *(float *)((char *)v62 + v64 - 16))
                           + (float)(v68 * *(float *)((char *)v62 + v64)))
                   + (float)(v69 * *(float *)((char *)v62 + v64 + 16)))
           + (float)(v70 * *(float *)((char *)v62 + v64 + 32));
      ++v62;
      --v67;
    }
    while ( v67 );
    v63 += 4;
    v64 -= 16LL;
    --v65;
  }
  while ( v65 );
  v71 = (float *)&sr_visibility_matrix[0];
  *(_OWORD *)&dword_140404A6C[431564517] = sr_visibility_matrix[0];
  v72 = 4;
  v73 = (char *)&dword_140404A6C[431564505] - (char *)&sr_visibility_matrix[0];
  *(_OWORD *)&dword_140404A6C[431564521] = sr_visibility_matrix[1];
  *(_OWORD *)&dword_140404A6C[431564525] = sr_visibility_matrix[2];
  *(_OWORD *)&dword_140404A6C[431564529] = sr_visibility_matrix[3];
  do
  {
    v74 = *(v22 - 1);
    v75 = 4;
    v76 = *v22;
    v77 = v22[1];
    v78 = v22[2];
    do
    {
      *v71 = (float)((float)((float)(v74 * *(float *)((char *)v71 + v73 - 16))
                           + (float)(v76 * *(float *)((char *)v71 + v73)))
                   + (float)(v77 * *(float *)((char *)v71 + v73 + 16)))
           + (float)(v78 * *(float *)((char *)v71 + v73 + 32));
      ++v71;
      --v75;
    }
    while ( v75 );
    v22 += 4;
    v73 -= 16LL;
    --v72;
  }
  while ( v72 );
  v79 = (float *)&sr_visibility_matrix[0];
  v80 = (char *)&dword_140404A6C[431564489] - (char *)&sr_visibility_matrix[0];
  v81 = 4;
  *(_OWORD *)&dword_140404A6C[431564533] = sr_visibility_matrix[0];
  *(_OWORD *)&dword_140404A6C[431564537] = sr_visibility_matrix[1];
  *(_OWORD *)&dword_140404A6C[431564541] = sr_visibility_matrix[2];
  *(_OWORD *)&dword_140404A6C[431564545] = sr_visibility_matrix[3];
  do
  {
    v82 = *(v41 - 1);
    v83 = 4;
    v84 = *v41;
    v85 = v41[1];
    v86 = v41[2];
    do
    {
      *v79 = (float)((float)((float)(v82 * *(float *)((char *)v79 + v80 - 16))
                           + (float)(v84 * *(float *)((char *)v79 + v80)))
                   + (float)(v85 * *(float *)((char *)v79 + v80 + 16)))
           + (float)(v86 * *(float *)((char *)v79 + v80 + 32));
      ++v79;
      --v83;
    }
    while ( v83 );
    v41 += 4;
    v80 -= 16LL;
    --v81;
  }
  while ( v81 );
  *(_OWORD *)&dword_140404A6C[431564565] = sr_visibility_matrix[0];
  (*(int32_t *)(sr_visibility_clip+0)) = 0;
  *(_OWORD *)&dword_140404A6C[431564569] = sr_visibility_matrix[1];
  (*(int64_t *)(sr_visibility_clip+4)) = 1065353216;
  *(_OWORD *)&dword_140404A6C[431564573] = sr_visibility_matrix[2];
  *(_OWORD *)&dword_140404A6C[431564577] = sr_visibility_matrix[3];
  (*(float *)(sr_visibility_clip+12)) = -v61;
  qword_1404042E0(dword_140404A6C[71737685]);
  unk_140404340(dword_140404A6C[71737724], 1, &(*(int32_t *)(sr_visibility_clip+0)));
  qword_1404042E0(dword_140404A6C[71737745]);
  unk_140404340(dword_140404A6C[71737784], 1, &(*(int32_t *)(sr_visibility_clip+0)));
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(12288);
  sub_14011E210(0, v87, v88);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(12288);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v90
#undef v91
#undef v92
#undef v104

// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183F7C544: using guessed type unsigned int;
// 183F7C548: using guessed type unsigned int;
// 183F7C54C: using guessed type unsigned int;
// 1841FA224: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;

//----- (000000014011DDB0) ----------------------------------------------------
__int64            sub_14011DDB0(int a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r15
  unsigned int *v6; // rsi
  __int64 v7; // r9
  signed int v8; // edi
  __int64 v9; // r14
  unsigned int *v10; // rbx
  __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = a1;
  if ( !dword_140404A6C[312324428] && !dword_140404A6C[322062692] )
  {
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
    if ( !a2 )
    {
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(36));
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(2, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(12));
    }
    /* Native sub_14011DDB0 inherits program/lights from its caller
       (sub_14011FD00 binds 71737685 once before the loop); no per-draw
       uniform upload here. */
    result = (__int64)&dword_140404A6C[83200503];
    v5 = 4;
    v6 = &dword_140404A6C[6930 * v4 + 83200503];
    do
    {
      if ( v6[780] )
      {
        result = (int)*v6;
        if ( (int)result >= 0 )
        {
          v7 = (int)*v6;
          result *= 3;
          if ( dword_140404A6C[2 * result + 312226123] != -1 )
          {
            v8 = 0;
            v9 = 8969 * v7;
            /* Original EBP holds vertex bytes; R12D holds element indices. */
            int32_t sr_building_vertex_bytes = (int32_t)(
                dword_140404A6C[309078344] * dword_140404A6C[2*result+312226123]
                + dword_140404A6C[309078348+3074*(int64_t)(int32_t)dword_140404A6C[2*result+312226123]
                    +3*(int64_t)(int32_t)dword_140404A6C[2*result+312226124]]);
            int32_t sr_building_index_bytes = (int32_t)(
                dword_140404A6C[318816608] * dword_140404A6C[2*result+321964387]
                + dword_140404A6C[318816612+3074*(int64_t)(int32_t)dword_140404A6C[2*result+321964387]
                    +3*(int64_t)(int32_t)dword_140404A6C[2*result+321964388]]);
            if ( (int)dword_140404A6C[8969 * v7 + 73994484] > 0 )
            {
              v10 = &dword_140404A6C[v9 + 73994485];
              do
              {
                v11 = *(unsigned __int8 *)v10;
                result = 184 * v11;
                if ( !dword_140404A6C[46 * v11 + 421784738] )
                {
                  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[4 * v11 + 283827814] + 284024944]);
                  unk_140404098(33986);
                  qword_140404050(
                    3553,
                    dword_140404A6C[44 * dword_140404A6C[4 * *(unsigned __int8 *)v10 + 283827815] + 284024944]);
                  unk_140404098(33988);
                  qword_140404050(35866, dword_140404A6C[44 * dword_140404A6C[283827820] + 284024944]);
                  unk_140404098(33989);
                  qword_140404050(35866, dword_140404A6C[44 * dword_140404A6C[283827821] + 284024944]);
                  unk_140404098(33984);
                  ((void (*)(unsigned,int,unsigned,const void *,int))unk_1404047F0)(4,(int32_t)(3u*v10[1]),5125,(const void *)(intptr_t)(int32_t)(4u*((uint32_t)(sr_building_index_bytes/4)+3u*v10[2])),sr_building_vertex_bytes/64);
                }
                ++v8;
                v10 += 3;
              }
              while ( v8 < (int)dword_140404A6C[v9 + 73994484] );
            }
          }
        }
      }
      ++v6;
      --v5;
    }
    while ( v5 );
  }
  return result;
}

// 14011EE07: variable 'v0' is possibly undefined
// 14011EE14: variable 'v27' is possibly undefined
// 14011F28D: variable 'v80' is possibly undefined
// 14011F28D: variable 'v81' is possibly undefined
// 14011F2A8: variable 'v82' is possibly undefined
// 14011F2A8: variable 'v83' is possibly undefined
// 14011F2FB: variable 'v49' is possibly undefined
// 14011F2FB: variable 'v48' is possibly undefined
// 14011F2FB: variable 'v50' is possibly undefined
// 14011F77A: variable 'v84' is possibly undefined
// 14011F77A: variable 'v86' is possibly undefined
// 14011F78E: variable 'v159' is possibly undefined
// 14011F78E: variable 'v160' is possibly undefined
// 14011F7A2: variable 'v161' is possibly undefined
// 14011F7A2: variable 'v162' is possibly undefined
// 14011F7B7: variable 'v163' is possibly undefined
// 14011F7B7: variable 'v164' is possibly undefined
// 14011F7CC: variable 'v165' is possibly undefined
// 14011F7CC: variable 'v166' is possibly undefined
// 14011F7E1: variable 'v167' is possibly undefined
// 14011F7E1: variable 'v168' is possibly undefined
// 14011F7F6: variable 'v169' is possibly undefined
// 14011F7F6: variable 'v170' is possibly undefined
// 14011F80B: variable 'v171' is possibly undefined
// 14011F80B: variable 'v172' is possibly undefined
// 14011F834: variable 'v85' is possibly undefined
// 14011FA32: variable 'v175' is possibly undefined
// 14011FA92: variable 'v197' is possibly undefined
// 14011FA92: variable 'v198' is possibly undefined
// 14011FB04: variable 'v173' is possibly undefined
// 14011FB13: variable 'v204' is possibly undefined
// 14011FB13: variable 'v205' is possibly undefined
// 14011FB90: variable 'v208' is possibly undefined
// 14011FB90: variable 'v209' is possibly undefined
// 14011FC03: variable 'v213' is possibly undefined
// 14011FC03: variable 'v214' is possibly undefined
// 14011FC18: variable 'v174' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402794A0: using guessed type __int128 xmmword_1402794A0;
// 1402794E0: using guessed type __int128 xmmword_1402794E0;
// 140279550: using guessed type __int128 xmmword_140279550;
// 140279650: using guessed type __int128 xmmword_140279650;
// 140279660: using guessed type __int128 xmmword_140279660;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 1404043F8: using guessed type double (__fastcall *unk_1404043F8)(_QWORD);
// 140404400: using guessed type double (__fastcall *unk_140404400)(_QWORD, _QWORD);
// 140404468: using guessed type double (__fastcall *unk_140404468)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 175FF3464: using guessed type unsigned int;
// 1A4BF08E0: using guessed type unsigned int;
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;

//----- (000000014011FD00) ----------------------------------------------------
__int64 sub_14011FD00()
{
  __int64 v0; // rdx
  int v1; // esi
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  unsigned int *v13; // rsi
  unsigned int *v14; // rbx
  __int64 v15; // r15
  unsigned int *v16; // rdi
  unsigned int *v17; // r14
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  int *v22; // r14
  int v23; // edi
  int *v24; // rbx
  __int64 v25; // r8
  unsigned int v26; // ecx
  unsigned int *v27; // rdi
  unsigned int v28; // edx
  __int64 v29; // rbx
  float *v30; // rax
  float *v31; // r8
  signed __int64 v32; // rcx
  __int64 v33; // r10
  float v34; // xmm3_4
  __int64 v35; // rdx
  float v36; // xmm4_4
  float v37; // xmm5_4
  float v38; // xmm6_4
  float *v39; // rax
  float *v40; // r8
  signed __int64 v41; // rcx
  __int64 v42; // r10
  float v43; // xmm3_4
  __int64 v44; // rdx
  float v45; // xmm4_4
  float v46; // xmm5_4
  float v47; // xmm6_4
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // r8
  float *v54; // rax
  float *v55; // r8
  signed __int64 v56; // rcx
  __int64 v57; // r10
  float v58; // xmm3_4
  __int64 v59; // rdx
  float v60; // xmm4_4
  float v61; // xmm5_4
  float v62; // xmm6_4
  float *v63; // rax
  float *v64; // r8
  signed __int64 v65; // rcx
  __int64 v66; // r10
  float v67; // xmm3_4
  __int64 v68; // rdx
  float v69; // xmm4_4
  float v70; // xmm5_4
  float v71; // xmm6_4
  float *v72; // rax
  float *v73; // r8
  signed __int64 v74; // rcx
  __int64 v75; // r10
  float v76; // xmm3_4
  __int64 v77; // rdx
  float v78; // xmm4_4
  float v79; // xmm5_4
  float v80; // xmm6_4
  float *v81; // rax
  float *v82; // r8
  signed __int64 v83; // rcx
  __int64 v84; // r10
  float v85; // xmm3_4
  __int64 v86; // rdx
  float v87; // xmm4_4
  float v88; // xmm5_4
  float v89; // xmm6_4
  int i; // ebx
  unsigned int v91; // r9d
  unsigned int *v92; // rcx
  float *v93; // rdx
  __int64 v94; // r8
  float v95; // xmm1_4
  unsigned int v96; // ecx
  __int64 v97; // r8
  unsigned int *v98; // r9
  __int64 v99; // r10
  __int64 v100; // rax
  __int64 v101; // rdx
  unsigned int v102; // xmm2_4
  unsigned int v103; // xmm1_4
  unsigned int v104; // xmm0_4
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r8
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rbx
  __int64 v118; // r8
  __int64 v119; // r8
  float *v120; // rax
  signed __int64 v121; // rcx
  float *v122; // r8
  __int64 v123; // r10
  float v124; // xmm3_4
  __int64 v125; // rdx
  float v126; // xmm4_4
  float v127; // xmm5_4
  float v128; // xmm6_4
  float *v129; // rax
  float *v130; // r8
  signed __int64 v131; // rcx
  __int64 v132; // r10
  float v133; // xmm3_4
  __int64 v134; // rdx
  float v135; // xmm4_4
  float v136; // xmm5_4
  float v137; // xmm6_4
  __int64 v138; // rcx
  unsigned int v139; // xmm1_4
  __int64 v140; // rcx
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rcx
  signed __int64 v145; // rcx
  float *v146; // r8
  signed int v147; // r11d
  int v148; // r14d
  __int64 v149; // rax
  unsigned int v150; // eax
  unsigned int *v151; // rbx
  unsigned int *v152; // rdi
  int j; // esi
  float v154; // xmm4_4
  float v155; // xmm3_4
  float v156; // xmm5_4
  float *v157; // rax
  float *v158; // r8
  signed __int64 v159; // rcx
  __int64 v160; // r10
  float v161; // xmm3_4
  __int64 v162; // rdx
  float v163; // xmm4_4
  float v164; // xmm5_4
  float v165; // xmm6_4
  float *v166; // rax
  signed __int64 v167; // rcx
  float *v168; // r8
  __int64 v169; // r10
  float v170; // xmm3_4
  __int64 v171; // rdx
  float v172; // xmm4_4
  float v173; // xmm5_4
  float v174; // xmm6_4
  float *v175; // rax
  signed __int64 v176; // rcx
  float *v177; // r8
  __int64 v178; // r10
  float v179; // xmm3_4
  __int64 v180; // rdx
  float v181; // xmm4_4
  float v182; // xmm5_4
  float v183; // xmm6_4
  int v184; // edx
  int v185; // xmm6_4
  int v186; // xmm7_4
  unsigned int v187; // eax
  __int64 v188; // rax
  unsigned int v189; // r9d
  float *v190; // rax
  signed __int64 v191; // rcx
  float *v192; // r8
  __int64 v193; // r10
  float v194; // xmm3_4
  __int64 v195; // rdx
  float v196; // xmm4_4
  float v197; // xmm5_4
  float v198; // xmm6_4
  float *v199; // rax
  __int64 v200; // r10
  float v201; // xmm3_4
  __int64 v202; // rdx
  float v203; // xmm4_4
  float v204; // xmm5_4
  float v205; // xmm6_4
  unsigned int *v206; // rbx
  unsigned int v207; // edi
  int v208; // r11d
  float *v209; // rax
  unsigned int v210; // xmm3_4
  unsigned int v211; // xmm2_4
  unsigned int v212; // xmm4_4
  float *v213; // r8
  signed __int64 v214; // rcx
  __int64 v215; // r10
  float v216; // xmm3_4
  __int64 v217; // rdx
  float v218; // xmm4_4
  float v219; // xmm5_4
  float v220; // xmm6_4
  float *v221; // rax
  float *v222; // r8
  signed __int64 v223; // rcx
  __int64 v224; // r10
  float v225; // xmm3_4
  __int64 v226; // rdx
  float v227; // xmm4_4
  float v228; // xmm5_4
  float v229; // xmm6_4
  float *v230; // rax
  float *v231; // r8
  signed __int64 v232; // rcx
  __int64 v233; // r10
  float v234; // xmm3_4
  __int64 v235; // rdx
  float v236; // xmm4_4
  float v237; // xmm5_4
  float v238; // xmm6_4
  float *v239; // rax
  float *v240; // r8
  signed __int64 v241; // rcx
  __int64 v242; // r10
  float v243; // xmm3_4
  __int64 v244; // rdx
  float v245; // xmm4_4
  float v246; // xmm5_4
  float v247; // xmm6_4
  float *v248; // rax
  __int64 v249; // r10
  float v250; // xmm3_4
  __int64 v251; // rdx
  float v252; // xmm4_4
  float v253; // xmm5_4
  float v254; // xmm6_4
  __int64 v255; // rdx
  __int128 v256; // xmm0
  float v257; // xmm6_4
  __int64 v258; // rdx
  __int64 v259; // r8
  __int64 v260; // rdx
  __int64 v261; // rcx
  __int64 v262; // r8
  __int64 v264; // [rsp+8h] [rbp-100h] BYREF
  __int64 v265; // [rsp+28h] [rbp-E0h]
  __int64 v266; // [rsp+30h] [rbp-D8h]
  int v267; // [rsp+38h] [rbp-D0h]
  int v268; // [rsp+40h] [rbp-C8h]
  int v269; // [rsp+48h] [rbp-C0h]
  int v270; // [rsp+50h] [rbp-B8h]
  _Alignas(16) uint32_t sr_world_direction[3];
  uint32_t sr_world_material_pair[2];
  _Alignas(16) unsigned char sr_world_matrix_backing[80];
  _Alignas(16) __int128 sr_world_matrix[4];
  __int128 v284; // [rsp+F8h] [rbp-10h] BYREF
  char v285[512]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v286; // [rsp+308h] [rbp+200h]

  if ( unk_14040488C && unk_140404A60 )
  {
    v0 = 37727;
    if ( !dword_140404A6C[73991626] )
      v0 = 37726;
    unk_140404A60(36001, v0);
  }
  v1 = 0;
  dword_140404A6C[73991635] = 0;
  *(_QWORD *)&dword_140404A6C[284545189] = 0;
  dword_140404A6C[284550403] = 0;
  dword_140404A6C[284550404] = 1065353216;
  dword_140404A6C[284550405] = 1056964608;
  *(float *)&dword_140404A6C[284545191] = (float)(int)dword_140404A6C[278520508];
  dword_140404A6C[284545216] = 1031798784;
  dword_140404A6C[284545218] = dword_140404A6C[284024514];
  *(float *)&dword_140404A6C[284545192] = (float)(int)dword_140404A6C[278520509];
  dword_140404A6C[284545217] = 1182793728;
  *(float *)&dword_140404A6C[284545267] = (float)(*(float *)&dword_140404A6C[284024505] * 0.70709997)
                                        + (float)(*(float *)&dword_140404A6C[284024511] * 0.70709997);
  *(float *)&dword_140404A6C[284545270] = (float)(*(float *)&dword_140404A6C[284024511] * 0.70709997)
                                        - (float)(*(float *)&dword_140404A6C[284024505] * 0.70709997);
  *(float *)&dword_140404A6C[284545268] = (float)(*(float *)&dword_140404A6C[284024506] * 0.70709997)
                                        + (float)(*(float *)&dword_140404A6C[284024512] * 0.70709997);
  *(float *)&dword_140404A6C[284545271] = (float)(*(float *)&dword_140404A6C[284024512] * 0.70709997)
                                        - (float)(*(float *)&dword_140404A6C[284024506] * 0.70709997);
  *(float *)&dword_140404A6C[284545269] = (float)(*(float *)&dword_140404A6C[284024507] * 0.70709997)
                                        + (float)(*(float *)&dword_140404A6C[284024513] * 0.70709997);
  *(float *)&dword_140404A6C[284545272] = (float)(*(float *)&dword_140404A6C[284024513] * 0.70709997)
                                        - (float)(*(float *)&dword_140404A6C[284024507] * 0.70709997);
  *(float *)&dword_140404A6C[284677591] = *(float *)&dword_140404A6C[284024502] * *(float *)&dword_1402F61BC;
  *(float *)&dword_140404A6C[284677592] = (float)(*(float *)&dword_140404A6C[284024503] * *(float *)&dword_1402F61BC)
                                        + *(float *)&dword_1402F61C4;
  *(float *)&dword_140404A6C[284677593] = *(float *)&dword_140404A6C[284024504] * *(float *)&dword_1402F61BC;
  sub_14007A240((__int64)&dword_140404A6C[284550403], (float *)&dword_140404A6C[284550403]);
  (*(float *)&sr_world_direction[1]) = 0.44721359;
  *(float *)&sr_world_direction[2] = -0.89442718;
  *(float *)&sr_world_direction[0] = 0.0;
  sub_14007B4D0(
    (float *)&dword_140404A6C[284550403],
    (float *)&sr_world_direction[0],
    sr_export_float_lane_container((unsigned __int64)dword_140404A6C[283831482]));
  dword_140404A6C[284550406] = 0;
  sub_1400212E0();
  sub_1400D26A0((float *)&dword_140404A6C[284024502]);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  qword_140302F58(515);
  if ( dword_140404A6C[73991626] )
    qword_140302F58(518);
  LOBYTE(v2) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v2);
  sub_140094A90();
  sub_140093E60();
  sub_14011CC30(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215061])(2304);
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790134] + 283791765]);
  sub_14007A8C0(
    0,
    0,
    1024,
    576,
    *(float *)&dword_140404A6C[284545216],
    *(float *)&dword_140404A6C[284545217],
    *(float *)&dword_140404A6C[284545218]);
  sub_14007BE20((float *)&dword_140404A6C[284024502], &dword_140404A6C[284024505]);
  if ( !dword_140404A6C[179668285] )
    sub_140123190();
  sub_14007A8C0(
    0,
    0,
    1024,
    576,
    *(float *)&dword_140404A6C[284545216],
    *(float *)&dword_140404A6C[284545217],
    *(float *)&dword_140404A6C[284545218]);
  sub_14007BE20((float *)&dword_140404A6C[284024502], &dword_140404A6C[284024505]);
  v3 = (int)dword_140404A6C[283829862];
  LODWORD(v265) = 0;
  if ( dword_140404A6C[179668285] )
    v3 = (int)dword_140404A6C[283829873];
  unk_140404718(36160, 36064, 3553, dword_140404A6C[44 * v3 + 284024944], v265);
  if ( dword_140404A6C[179668285] )
  {
    (*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(1.0f,1.0f,1.0f,0.0f);
    (*(void (           **)(__int64))&dword_140404A6C[18215095])(0xFFFFFFFFLL);
    (*(void (           **)(_QWORD))&dword_140404A6C[18215091])(0);
    (*(void (           **)(__int64))&dword_140404A6C[18215087])(17664);
    (*(void (           **)(_QWORD))&dword_140404A6C[18215095])(0);
  }
  (*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(0.0f,0.0f,0.0f,0.0f);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(16384);
  sub_1400A5D30();
  sub_1400A5890((float *)&dword_140404A6C[284545213]);
  /* Observe-only recovery diagnostics: log the main-frame state once so the
     black-frame cause is decidable from the debug log. No state is changed. */
  {
    static int sr_frame_logged;
    if (!sr_frame_logged && dword_140404A6C[70074733] != 0)
    {
      unsigned int sr_main = dword_140404A6C[2 * dword_140404A6C[283790134] + 283791765];
      unsigned int sr_refl = dword_140404A6C[2 * dword_140404A6C[283790155] + 283791765];
      __int64 sr_st = unk_140404708 ? unk_140404708(36160) : -1;
      SR_DEBUG_LOG("RENDER fbo main=%u refl=%u status=0x%llx size=%ux%u win=%ux%u",
          sr_main, sr_refl, (unsigned long long)sr_st,
          dword_140404A6C[278520508], dword_140404A6C[278520509],
          dword_140404A6C[137297755], dword_140404A6C[137297756]);
      SR_DEBUG_LOG("RENDER cam=(%.2f,%.2f,%.2f) mvp[0,5,10,15]=%.3f,%.3f,%.3f,%.3f draws=%u",
          *(float *)&dword_140404A6C[284024502], *(float *)&dword_140404A6C[284024503],
          *(float *)&dword_140404A6C[284024504],
          *(float *)&dword_140404A6C[431564565], *(float *)&dword_140404A6C[431564570],
          *(float *)&dword_140404A6C[431564575], *(float *)&dword_140404A6C[431564580],
          dword_140404A6C[70074733]);
      SR_DEBUG_LOG("RENDER light dir=(%.3f,%.3f,%.3f) amb=(%.3f,%.3f,%.3f) dif=(%.3f,%.3f,%.3f)",
          *(float *)&dword_140404A6C[284550403], *(float *)&dword_140404A6C[284550404],
          *(float *)&dword_140404A6C[284550405],
          *(float *)&dword_140404A6C[284545205], *(float *)&dword_140404A6C[284545206],
          *(float *)&dword_140404A6C[284545207],
          *(float *)&dword_140404A6C[284545209], *(float *)&dword_140404A6C[284545210],
          *(float *)&dword_140404A6C[284545211]);
      SR_DEBUG_LOG("RENDER tex normal=%u detail=%u color=%u mask=%u shadow=%u cubemap=%u "
          "prog08=%u loc(dir/amb/dif/view/mvp/mask)=%d,%d,%d,%d,%d,%d",
          dword_140404A6C[44 * dword_140404A6C[283830714] + 284024944],
          dword_140404A6C[44 * dword_140404A6C[283830715] + 284024944],
          dword_140404A6C[44 * dword_140404A6C[283830716] + 284024944],
          dword_140404A6C[44 * dword_140404A6C[283830718] + 284024944],
          dword_140404A6C[44 * dword_140404A6C[283829863] + 284024944],
          dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944],
          dword_140404A6C[71738165],
          (int)dword_140404A6C[71738170], (int)dword_140404A6C[71738171],
          (int)dword_140404A6C[71738172], (int)dword_140404A6C[71738173],
          (int)dword_140404A6C[71738174], (int)dword_140404A6C[71738205]);
      {
        float *sr_p = (float *)&dword_140404A6C[431564485];
        float *sr_v = (float *)&dword_140404A6C[431564501];
        float *sr_m = (float *)&dword_140404A6C[431564565];
        SR_DEBUG_LOG("RENDER near=%.4f far=%.1f zoom=%.4f rt=%ux%u",
            *(float *)&dword_140404A6C[284545216], *(float *)&dword_140404A6C[284545217],
            *(float *)&dword_140404A6C[284545218],
            dword_140404A6C[278520508], dword_140404A6C[278520509]);
        SR_DEBUG_LOG("RENDER proj =%.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f",
            sr_p[0],sr_p[1],sr_p[2],sr_p[3], sr_p[4],sr_p[5],sr_p[6],sr_p[7],
            sr_p[8],sr_p[9],sr_p[10],sr_p[11], sr_p[12],sr_p[13],sr_p[14],sr_p[15]);
        SR_DEBUG_LOG("RENDER view =%.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f",
            sr_v[0],sr_v[1],sr_v[2],sr_v[3], sr_v[4],sr_v[5],sr_v[6],sr_v[7],
            sr_v[8],sr_v[9],sr_v[10],sr_v[11], sr_v[12],sr_v[13],sr_v[14],sr_v[15]);
        SR_DEBUG_LOG("RENDER mvp  =%.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f",
            sr_m[0],sr_m[1],sr_m[2],sr_m[3], sr_m[4],sr_m[5],sr_m[6],sr_m[7],
            sr_m[8],sr_m[9],sr_m[10],sr_m[11], sr_m[12],sr_m[13],sr_m[14],sr_m[15]);
      }
      {
        /* Terrain visibility, using the exact index math of sub_1400D22E0:
           enabled flag dword[271166189 + slot*257], sub-cell pointer
           dword[271166190 + slot*257 + j], and the -1 cull lookup
           dword[cell + 272034690 + slot*3336 + j*13]. */
        int sr_slot, sr_j, sr_cell, sr_live = 0, sr_enabled = 0;
        unsigned int sr_count = 0, sr_stride = 0, sr_first_cell = 0;
        int sr_first_slot = -1, sr_first_j = -1, sr_lod = -1;
        for (sr_slot = 0; sr_slot < 64; ++sr_slot)
        {
          if (!dword_140404A6C[271166189 + sr_slot * 257]) continue;
          ++sr_enabled;
          for (sr_j = 0; sr_j < 256; ++sr_j)
          {
            sr_cell = (int)dword_140404A6C[271166190 + sr_slot * 257 + sr_j];
            if (dword_140404A6C[sr_cell + 272034690 + sr_slot * 3336 + sr_j * 13] != -1)
            {
              if (!sr_live)
              {
                sr_first_cell = (unsigned int)sr_cell;
                sr_first_slot = sr_slot;
                sr_first_j = sr_j;
                sr_stride = dword_140404A6C[24582 * sr_cell + 271838021];
                sr_count = dword_140404A6C[24582 * sr_cell + 271838022];
                sr_lod = (int)dword_140404A6C[sr_cell + 272034690 + sr_slot * 3336 + sr_j * 13];
              }
              ++sr_live;
            }
          }
        }
        SR_DEBUG_LOG("RENDER terrain enabled-slots=%d live-subcells=%d first(cell=%u count=%u stride=%u)",
            sr_enabled, sr_live, sr_first_cell, sr_count, sr_stride);
        /* Geometry dump: chunk origins, LOD descriptor and the VBO staging
           vertex. Pointer values only (no dereference) so a bad pointer cannot
           fault the diagnostic. sub_1400D0C10 builds
           pos = origin + (cell<<7) + sample, y = heightGrid[...] + originY. */
        if (sr_first_slot >= 0)
        {
          unsigned int sr_cellu = sr_first_cell;
          float *sr_stage = (float *)&dword_140404A6C[271182637];
          unsigned long long sr_grid_by_tile =
              *(unsigned long long *)&dword_140404A6C[272034683 + 3336 * (int)sr_cellu];
          unsigned long long sr_grid_by_slot =
              *(unsigned long long *)&dword_140404A6C[272034683 + 3336 * sr_first_slot];
          SR_DEBUG_LOG("RENDER geo slot=%d j=%d cell=%u lod=%d ring=%d",
              sr_first_slot, sr_first_j, sr_cellu, sr_lod,
              (int)dword_140404A6C[sr_cell + 272034690 + sr_first_slot * 3336 + sr_first_j * 13]);
          SR_DEBUG_LOG("RENDER geo origin-by-tile=(%d,%d,%d) cellZ=%d cellX=%d",
              (int)dword_140404A6C[272034677 + 3336 * (int)sr_cellu],
              (int)dword_140404A6C[272034678 + 3336 * (int)sr_cellu],
              (int)dword_140404A6C[272034679 + 3336 * (int)sr_cellu],
              (int)dword_140404A6C[272034680 + 3336 * (int)sr_cellu],
              (int)dword_140404A6C[272034681 + 3336 * (int)sr_cellu]);
          SR_DEBUG_LOG("RENDER geo origin-by-slot=(%d,%d,%d) cellZ=%d cellX=%d",
              (int)dword_140404A6C[272034677 + 3336 * sr_first_slot],
              (int)dword_140404A6C[272034678 + 3336 * sr_first_slot],
              (int)dword_140404A6C[272034679 + 3336 * sr_first_slot],
              (int)dword_140404A6C[272034680 + 3336 * sr_first_slot],
              (int)dword_140404A6C[272034681 + 3336 * sr_first_slot]);
          SR_DEBUG_LOG("RENDER geo heightgrid ptr tile=0x%llx slot=0x%llx (0=unalloc, ffff..=unset)",
              sr_grid_by_tile, sr_grid_by_slot);
          SR_DEBUG_LOG("RENDER geo loddesc verts-per-patch=%u bytes-per-patch=%u ringhead=%u",
              dword_140404A6C[24582 * sr_cellu + 271838023],
              dword_140404A6C[24582 * sr_cellu + 271838025],
              dword_140404A6C[24582 * sr_cellu + 271838026]);
          SR_DEBUG_LOG("RENDER geo staging pos=(%.2f,%.2f,%.2f) nrm=(%.2f,%.2f,%.2f)",
              sr_stage[0], sr_stage[1], sr_stage[2],
              sr_stage[3], sr_stage[4], sr_stage[5]);
          SR_DEBUG_LOG("RENDER geo vbo-ids tile: ibo=%u vbo=%u  slot: ibo=%u vbo=%u",
              dword_140404A6C[2 * dword_140404A6C[sr_cellu + 283791480] + 283793814],
              dword_140404A6C[2 * dword_140404A6C[sr_cellu + 283791752] + 283793813],
              dword_140404A6C[2 * dword_140404A6C[sr_first_slot + 283791480] + 283793814],
              dword_140404A6C[2 * dword_140404A6C[sr_first_slot + 283791752] + 283793813]);
        }
      }
      sr_frame_logged = 1;
    }
  }
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3042);
  if ( dword_140404A6C[179668285] )
  {
    (*(void (           **)(__int64, __int64))&dword_140404A6C[18215069])(1032, 6913);
    (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
  }
  /* Native 0x140120173/0x14012017E: GL_CULL_FACE on with glFrontFace(GL_CW)
     for the whole terrain pass. Verified against original disassembly. */
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215061])(2304);
  v9 = 256;
  if ( dword_140404A6C[179668285]
    || ((*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0), dword_140404A6C[179668285]) )
  {
    if ( !dword_140404A6C[315570516] && !dword_140404A6C[318816604] )
    {
      qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791463] + 283793813], v8);
      qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[283791464] + 283793813], v11);
      qword_140404238(0);
      qword_140404238(1);
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
      v266 = 36;
      ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(36));
      LODWORD(v265) = 1065353216;
      ((void (*)(unsigned,float,float,float,float))unk_140404468)(2,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f);
      v13 = &dword_140404A6C[283827814];
      v14 = &dword_140404A6C[40714349];
      v15 = 256;
      v16 = &dword_140404A6C[40714605];
      v17 = &dword_140404A6C[57491821];
      do
      {
        if ( (int)*v14 > 0 )
        {
          qword_1404042E0(dword_140404A6C[451221605]);
          qword_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
          unk_140404098(33984);
          qword_140404050(3553, dword_140404A6C[44 * *v13 + 284024944]);
          unk_140404808(4, v16, 5125, v17, *v14, v16 + 25165824);
        }
        v16 += 0x4000;
        v17 += 0x8000;
        v13 += 4;
        ++v14;
        --v15;
      }
      while ( v15 );
      qword_140404170(34963, 0, v12);
      qword_140404170(34962, 0, v18);
      qword_140404230(1);
      qword_140404230(0);
      v1 = 0;
    }
  }
  else
  {
    sub_14011E210(0, v10, v8);
  }
  sub_1400D22E0(0);
  qword_1404042E0(dword_140404A6C[71737685]);
  qword_140404238(0);
  qword_140404238(1);
  qword_140404238(2);
  unk_140404098(33985);
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283829863] + 284024944]);
  unk_140404098(33984);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791462] + 283793813], v19);
  qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[283791465] + 283793813], v20);
  v22 = (int *)&dword_140404A6C[70074734];
  v23 = 0;
  if ( (int)dword_140404A6C[70074733] > 0 )
  {
    v24 = (int *)&dword_140404A6C[70074734];
    do
    {
      sub_14011DDB0(*v24, 0);
      ++v23;
      ++v24;
    }
    while ( v23 < (int)dword_140404A6C[70074733] );
  }
  qword_140404170(34963, 0, v21);
  qword_140404170(34962, 0, v25);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(32823);
  unk_140404098(33984);
  qword_140404230(2);
  qword_140404230(1);
  qword_140404230(0);
  qword_1404042E0(0);
  qword_1404042E0(dword_140404A6C[71737865]);
  sub_140124AF0(0, 0);
  v26 = dword_140404A6C[283827818];
  v284 = 0;
  sr_world_material_pair[0] = dword_140404A6C[283827818];
  sr_world_material_pair[1] = dword_140404A6C[283827818];
  if ( (int)dword_140404A6C[431564581] > 0 )
  {
    v27 = &dword_140404A6C[431138501];
    do
    {
      if ( v27[2] )
      {
        v28 = *v27;
        v29 = 26LL * v1;
        if ( !*v27 )
        {
          sr_world_material_pair[0] = dword_140404A6C[283830699];
          sr_world_material_pair[1] = dword_140404A6C[283830699];
          sub_140124840(
            dword_140404A6C[283827574],
            &dword_140404A6C[v29 + 431138504],
            &dword_140404A6C[v29 + 431138510],
            0,
            (int *)&sr_world_material_pair[0],
            (__int64)&v284);
          v28 = *v27;
          v26 = dword_140404A6C[283827818];
        }
        if ( v28 == 1 )
        {
          sr_world_material_pair[0] = v26;
          sr_world_material_pair[1] = v26;
          sub_140124840(
            dword_140404A6C[283827769],
            &dword_140404A6C[v29 + 431138504],
            &dword_140404A6C[v29 + 431138510],
            0,
            (int *)&sr_world_material_pair[0],
            (__int64)&v284);
          v26 = dword_140404A6C[283827818];
        }
      }
      ++v1;
      v27 += 26;
    }
    while ( v1 < (int)dword_140404A6C[431564581] );
  }
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  v30 = (float *)&sr_world_matrix[0];
  v31 = (float *)&dword_140404A6C[431564518];
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  v32 = (char *)&dword_140404A6C[431564505] - (char *)&sr_world_matrix[0];
  v33 = 4;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  do
  {
    v34 = *(v31 - 1);
    v35 = 4;
    v36 = *v31;
    v37 = v31[1];
    v38 = v31[2];
    do
    {
      *v30 = (float)((float)((float)(v34 * *(float *)((char *)v30 + v32 - 16))
                           + (float)(v36 * *(float *)((char *)v30 + v32)))
                   + (float)(v37 * *(float *)((char *)v30 + v32 + 16)))
           + (float)(v38 * *(float *)((char *)v30 + v32 + 32));
      ++v30;
      --v35;
    }
    while ( v35 );
    v31 += 4;
    v32 -= 16LL;
    --v33;
  }
  while ( v33 );
  *(_OWORD *)&dword_140404A6C[431564533] = sr_world_matrix[0];
  v39 = (float *)&sr_world_matrix[0];
  *(_OWORD *)&dword_140404A6C[431564537] = sr_world_matrix[1];
  v40 = (float *)&dword_140404A6C[431564534];
  v41 = (char *)&dword_140404A6C[431564489] - (char *)&sr_world_matrix[0];
  v42 = 4;
  *(_OWORD *)&dword_140404A6C[431564541] = sr_world_matrix[2];
  *(_OWORD *)&dword_140404A6C[431564545] = sr_world_matrix[3];
  do
  {
    v43 = *(v40 - 1);
    v44 = 4;
    v45 = *v40;
    v46 = v40[1];
    v47 = v40[2];
    do
    {
      *v39 = (float)((float)((float)(v43 * *(float *)((char *)v39 + v41 - 16))
                           + (float)(v45 * *(float *)((char *)v39 + v41)))
                   + (float)(v46 * *(float *)((char *)v39 + v41 + 16)))
           + (float)(v47 * *(float *)((char *)v39 + v41 + 32));
      ++v39;
      --v44;
    }
    while ( v44 );
    v40 += 4;
    v41 -= 16LL;
    --v42;
  }
  while ( v42 );
  *(_OWORD *)&dword_140404A6C[431564565] = sr_world_matrix[0];
  *(_OWORD *)&dword_140404A6C[431564569] = sr_world_matrix[1];
  *(_OWORD *)&dword_140404A6C[431564573] = sr_world_matrix[2];
  *(_OWORD *)&dword_140404A6C[431564577] = sr_world_matrix[3];
  qword_140404378(dword_140404A6C[71737874], 1, 0, &dword_140404A6C[431564565]);
  sub_1401259B0(0, v48, v49);
  qword_1404042E0(0);
  sub_140189E80(0, v50, v51);
  qword_1404042E0(0);
  if ( dword_140404A6C[179668285] )
  {
    (*(void (           **)(__int64, __int64))&dword_140404A6C[18215069])(1032, 6914);
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  sub_140122690(0.5625, v52, v53);
  sub_14007A8C0(
    0,
    0,
    1024,
    576,
    *(float *)&dword_140404A6C[284545216],
    *(float *)&dword_140404A6C[284545217],
    *(float *)&dword_140404A6C[284545218]);
  v54 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  v55 = (float *)&sr_world_matrix[0] + 1;
  dword_140404A6C[431564501] = dword_140404A6C[284024505];
  v56 = (char *)&dword_140404A6C[431564505] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  dword_140404A6C[431564505] = dword_140404A6C[284024506];
  v57 = 4;
  dword_140404A6C[431564509] = dword_140404A6C[284024507];
  dword_140404A6C[431564502] = dword_140404A6C[284024508];
  dword_140404A6C[431564506] = dword_140404A6C[284024509];
  dword_140404A6C[431564510] = dword_140404A6C[284024510];
  dword_140404A6C[431564503] = dword_140404A6C[284024511];
  dword_140404A6C[431564507] = dword_140404A6C[284024512];
  dword_140404A6C[431564511] = dword_140404A6C[284024513];
  sr_world_matrix[1] = xmmword_140278D80;
  sr_world_matrix[0] = xmmword_140278D30;
  sr_world_matrix[2] = xmmword_140278E20;
  LODWORD(sr_world_matrix[3]) = dword_140404A6C[284024502] ^ 0x80000000;
  *((float *)&sr_world_matrix[3] + 1) = -*(float *)&dword_140404A6C[284024503];
  *((float *)&sr_world_matrix[3] + 2) = -*(float *)&dword_140404A6C[284024504];
  *(_QWORD *)&dword_140404A6C[431564513] = 0;
  dword_140404A6C[431564515] = 0;
  dword_140404A6C[431564504] = 0;
  dword_140404A6C[431564508] = 0;
  dword_140404A6C[431564512] = 0;
  dword_140404A6C[431564516] = 1065353216;
  HIDWORD(sr_world_matrix[3]) = 1065353216;
  do
  {
    v58 = *(v55 - 1);
    v59 = 4;
    v60 = *v55;
    v61 = v55[1];
    v62 = v55[2];
    do
    {
      *v54 = (float)((float)((float)(v58 * *(float *)((char *)v54 + v56 - 16))
                           + (float)(v60 * *(float *)((char *)v54 + v56)))
                   + (float)(v61 * *(float *)((char *)v54 + v56 + 16)))
           + (float)(v62 * *(float *)((char *)v54 + v56 + 32));
      ++v54;
      --v59;
    }
    while ( v59 );
    v55 += 4;
    v56 -= 16LL;
    --v57;
  }
  while ( v57 );
  v63 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  *(_OWORD *)&dword_140404A6C[431564501] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  v64 = (float *)&dword_140404A6C[431564518];
  v65 = (char *)&dword_140404A6C[431564505] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  *(_OWORD *)&dword_140404A6C[431564505] = (*(__int128 *)(sr_world_matrix_backing+32));
  v66 = 4;
  *(_OWORD *)&dword_140404A6C[431564509] = (*(__int128 *)(sr_world_matrix_backing+48));
  *(_OWORD *)&dword_140404A6C[431564513] = (*(__int128 *)(sr_world_matrix_backing+64));
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  do
  {
    v67 = *(v64 - 1);
    v68 = 4;
    v69 = *v64;
    v70 = v64[1];
    v71 = v64[2];
    do
    {
      *v63 = (float)((float)((float)(v67 * *(float *)((char *)v63 + v65 - 16))
                           + (float)(v69 * *(float *)((char *)v63 + v65)))
                   + (float)(v70 * *(float *)((char *)v63 + v65 + 16)))
           + (float)(v71 * *(float *)((char *)v63 + v65 + 32));
      ++v63;
      --v68;
    }
    while ( v68 );
    v64 += 4;
    v65 -= 16LL;
    --v66;
  }
  while ( v66 );
  v72 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  *(_OWORD *)&dword_140404A6C[431564533] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  v73 = (float *)&dword_140404A6C[431564502];
  v74 = (char *)&dword_140404A6C[431564489] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  *(_OWORD *)&dword_140404A6C[431564537] = (*(__int128 *)(sr_world_matrix_backing+32));
  v75 = 4;
  *(_OWORD *)&dword_140404A6C[431564541] = (*(__int128 *)(sr_world_matrix_backing+48));
  *(_OWORD *)&dword_140404A6C[431564545] = (*(__int128 *)(sr_world_matrix_backing+64));
  do
  {
    v76 = *(v73 - 1);
    v77 = 4;
    v78 = *v73;
    v79 = v73[1];
    v80 = v73[2];
    do
    {
      *v72 = (float)((float)((float)(v76 * *(float *)((char *)v72 + v74 - 16))
                           + (float)(v78 * *(float *)((char *)v72 + v74)))
                   + (float)(v79 * *(float *)((char *)v72 + v74 + 16)))
           + (float)(v80 * *(float *)((char *)v72 + v74 + 32));
      ++v72;
      --v77;
    }
    while ( v77 );
    v73 += 4;
    v74 -= 16LL;
    --v75;
  }
  while ( v75 );
  v81 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  *(_OWORD *)&dword_140404A6C[431564549] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  v82 = (float *)&dword_140404A6C[431564534];
  v83 = (char *)&dword_140404A6C[431564489] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  *(_OWORD *)&dword_140404A6C[431564553] = (*(__int128 *)(sr_world_matrix_backing+32));
  v84 = 4;
  *(_OWORD *)&dword_140404A6C[431564557] = (*(__int128 *)(sr_world_matrix_backing+48));
  *(_OWORD *)&dword_140404A6C[431564561] = (*(__int128 *)(sr_world_matrix_backing+64));
  do
  {
    v85 = *(v82 - 1);
    v86 = 4;
    v87 = *v82;
    v88 = v82[1];
    v89 = v82[2];
    do
    {
      *v81 = (float)((float)((float)(v85 * *(float *)((char *)v81 + v83 - 16))
                           + (float)(v87 * *(float *)((char *)v81 + v83)))
                   + (float)(v88 * *(float *)((char *)v81 + v83 + 16)))
           + (float)(v89 * *(float *)((char *)v81 + v83 + 32));
      ++v81;
      --v86;
    }
    while ( v86 );
    v82 += 4;
    v83 -= 16LL;
    --v84;
  }
  while ( v84 );
  *(_OWORD *)&dword_140404A6C[431564565] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  *(_OWORD *)&dword_140404A6C[431564569] = (*(__int128 *)(sr_world_matrix_backing+32));
  *(_OWORD *)&dword_140404A6C[431564573] = (*(__int128 *)(sr_world_matrix_backing+48));
  *(_OWORD *)&dword_140404A6C[431564577] = (*(__int128 *)(sr_world_matrix_backing+64));
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(1,1);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3553);
  *(float *)&sr_world_direction[0] = (float)(*(float *)&dword_140404A6C[284550403] * 16368.0) + *(float *)&dword_140404A6C[284024502];
  *(float *)&sr_world_direction[2] = (float)(*(float *)&dword_140404A6C[284550405] * 16368.0) + *(float *)&dword_140404A6C[284024504];
  (*(float *)&sr_world_direction[1]) = (float)(*(float *)&dword_140404A6C[284550404] * 16368.0) + *(float *)&dword_140404A6C[284024503];
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3553);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(1,771);
  sub_1401945F0();
  qword_1404042E0(dword_140404A6C[71737805]);
  qword_140404338(dword_140404A6C[71737811], 1, &dword_140404A6C[284024502]);
  qword_140404338(dword_140404A6C[71737815], 1, &dword_140404A6C[284550403]);
  qword_140404378(dword_140404A6C[71737819], 1, 0, &dword_140404A6C[431564565]);
  qword_140404338(dword_140404A6C[71737820], 1, &dword_140404A6C[284545205]);
  qword_140404338(dword_140404A6C[71737821], 1, &dword_140404A6C[284545209]);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  unk_140404098(33985);
  qword_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
  unk_140404098(33984);
  for ( i = 0; i < (int)dword_140404A6C[70074733]; ++v22 )
  {
    sub_14011DA50(*v22);
    ++i;
  }
  v91 = dword_140404A6C[284677614];
  if ( (int)dword_140404A6C[284677614] > 0 )
  {
    v92 = &dword_140404A6C[437192782];
    v93 = (float *)&dword_140404A6C[284677630];
    v94 = dword_140404A6C[284677614];
    do
    {
      v95 = *v93 * 256.0;
      v93 += 17;
      *v92++ = (int)(float)(16777216.0 - v95);
      --v94;
    }
    while ( v94 );
  }
  dword_140404A6C[436668493] = v91;
  sub_14007D710();
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[4 * dword_140404A6C[421784429] + 283827814] + 284024944]);
  dword_140404A6C[456217207] = 0;
  v96 = 6;
  dword_140404A6C[456217208] = 6;
  v97 = 0;
  if ( (int)dword_140404A6C[284677614] > 0 )
  {
    v98 = &dword_140404A6C[436668494];
    v99 = dword_140404A6C[284677614];
    while ( 1 )
    {
      v100 = (int)*v98++;
      v101 = 17 * v100;
      v102 = dword_140404A6C[17 * v100 + 284677627];
      v103 = dword_140404A6C[17 * v100 + 284677628];
      v104 = dword_140404A6C[17 * v100 + 284677629];
      v105 = (int)(v97 * v96);
      dword_140404A6C[v105 + 456217209] = dword_140404A6C[17 * v100 + 284677615];
      dword_140404A6C[v105 + 456217210] = dword_140404A6C[17 * v100 + 284677616];
      dword_140404A6C[v105 + 456217211] = dword_140404A6C[17 * v100 + 284677617];
      v106 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
      dword_140404A6C[v106 + 456217212] = v102;
      dword_140404A6C[v106 + 456217213] = v103;
      dword_140404A6C[v106 + 456217214] = v104;
      LODWORD(v100) = ++dword_140404A6C[456217207] * dword_140404A6C[456217208];
      dword_140404A6C[(int)v100 + 456217209] = dword_140404A6C[v101 + 284677618];
      dword_140404A6C[(int)v100 + 456217210] = dword_140404A6C[v101 + 284677619];
      dword_140404A6C[(int)v100 + 456217211] = dword_140404A6C[v101 + 284677620];
      v107 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
      dword_140404A6C[v107 + 456217212] = v102;
      dword_140404A6C[v107 + 456217213] = v103;
      dword_140404A6C[v107 + 456217214] = v104;
      v108 = ++dword_140404A6C[456217207] * dword_140404A6C[456217208];
      dword_140404A6C[v108 + 456217209] = dword_140404A6C[v101 + 284677621];
      dword_140404A6C[v108 + 456217210] = dword_140404A6C[v101 + 284677622];
      dword_140404A6C[v108 + 456217211] = dword_140404A6C[v101 + 284677623];
      v109 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
      dword_140404A6C[v109 + 456217212] = v102;
      dword_140404A6C[v109 + 456217213] = v103;
      dword_140404A6C[v109 + 456217214] = v104;
      v110 = ++dword_140404A6C[456217207] * dword_140404A6C[456217208];
      dword_140404A6C[v110 + 456217209] = dword_140404A6C[v101 + 284677624];
      dword_140404A6C[v110 + 456217210] = dword_140404A6C[v101 + 284677625];
      dword_140404A6C[v110 + 456217211] = dword_140404A6C[v101 + 284677626];
      v111 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
      dword_140404A6C[v111 + 456217212] = v102;
      dword_140404A6C[v111 + 456217213] = v103;
      dword_140404A6C[v111 + 456217214] = v104;
      v97 = ++dword_140404A6C[456217207];
      if ( !--v99 )
        break;
      v96 = dword_140404A6C[456217208];
    }
  }
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791479] + 283793813], v97);
  qword_140404198(34962, 0, 4 * dword_140404A6C[456217207] * dword_140404A6C[456217208], &dword_140404A6C[456217209]);
  ((void (*)(unsigned,float,float))unk_1404043C8)(1,0.5f,0.5f);
  qword_140404238(0);
  qword_140404238(2);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[456217208]),(const void *)(intptr_t)(0));
  LODWORD(v265) = 4 * dword_140404A6C[456217208];
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(2, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[456217208]),(const void *)(intptr_t)(12));
  qword_140404170(34963, dword_140404A6C[456807040], v112);
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(uint32_t)((unsigned int)(6 * ((signed int)dword_140404A6C[456217207] / 4))),5123,NULL);
  qword_140404170(34963, 0, v113);
  qword_140404230(0);
  qword_140404230(2);
  unk_140404098(33985);
  qword_140404050(34067, 0);
  unk_140404098(33984);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2884);
  qword_1404042E0(0);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);
  sub_140125DB0(
    0,
    v114,
    v115,
    v116,
    v265,
    12,
    v267,
    v268,
    v269,
    v270,
    sr_world_direction[0],
    sr_world_direction[2],
    sr_world_material_pair[0],
    ((uint64_t *)(sr_world_matrix_backing+8))[0],
    ((uint64_t *)(sr_world_matrix_backing+8))[1],
    ((uint64_t *)(sr_world_matrix_backing+8))[2],
    (*(__int128 *)(sr_world_matrix_backing+32)),
    SDWORD2((*(__int128 *)(sr_world_matrix_backing+32))),
    (*(__int128 *)(sr_world_matrix_backing+48)),
    SDWORD2((*(__int128 *)(sr_world_matrix_backing+48))),
    (*(__int128 *)(sr_world_matrix_backing+64)),
    SDWORD2((*(__int128 *)(sr_world_matrix_backing+64))),
    sr_world_matrix[0],
    SDWORD2(sr_world_matrix[0]),
    sr_world_matrix[1],
    SDWORD2(sr_world_matrix[1]),
    sr_world_matrix[2],
    SDWORD2(sr_world_matrix[2]),
    sr_world_matrix[3],
    *((__int64 *)&sr_world_matrix[3] + 1));
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);
  qword_140404050(3553, dword_140404A6C[451221642]);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(1,771);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3553);
  qword_1404042E0(dword_140404A6C[451221605]);
  sub_1401253C0();
  if ( !dword_140404A6C[284023069]
    && dword_140404A6C[282486845] != -1
    && dword_140404A6C[1760 * dword_140404A6C[282486845] + 278845898] != 42 )
  {
    LODWORD(v265) = 1056964608;
    ((void (*)(unsigned,float,float,float,float))unk_140404468)(2,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p-1f);
    v117 = (int)dword_140404A6C[dword_140404A6C[1760 * dword_140404A6C[282486845] + 278845898] + 283826966];
    sub_14007B990(
      (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 52LL * (int)dword_140404A6C[282486845] + 1144548656),
      (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 52LL * (int)dword_140404A6C[282486845] + 1144548668));
    sub_14007B6F0(1.125, 1.125, 1.125);
    qword_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
    qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v117 + 283790166] + 283793813], v118);
    qword_140404238(0);
    v266 = 0;
    v117 *= 3632;
    LODWORD(v265) = 4 * *(unsigned int *)((char *)&dword_140404A6C[178527462] + v117);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)((uint32_t)v265),(const void *)(intptr_t)(0));
    qword_140302FF8(4, 0, 3 * *(unsigned int *)((char *)&dword_140404A6C[178527465] + v117));
    qword_140404230(0);
    qword_140404170(34962, 0, v119);
    *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
    v120 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v121 = (char *)&dword_140404A6C[431564505] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v122 = (float *)&dword_140404A6C[431564518];
    *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
    v123 = 4;
    *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
    *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
    do
    {
      v124 = *(v122 - 1);
      v125 = 4;
      v126 = *v122;
      v127 = v122[1];
      v128 = v122[2];
      do
      {
        *v120 = (float)((float)((float)(v124 * *(float *)((char *)v120 + v121 - 16))
                              + (float)(v126 * *(float *)((char *)v120 + v121)))
                      + (float)(v127 * *(float *)((char *)v120 + v121 + 16)))
              + (float)(v128 * *(float *)((char *)v120 + v121 + 32));
        ++v120;
        --v125;
      }
      while ( v125 );
      v122 += 4;
      v121 -= 16LL;
      --v123;
    }
    while ( v123 );
    v129 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    *(_OWORD *)&dword_140404A6C[431564533] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v130 = (float *)&dword_140404A6C[431564534];
    v131 = (char *)&dword_140404A6C[431564489] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    *(_OWORD *)&dword_140404A6C[431564537] = (*(__int128 *)(sr_world_matrix_backing+32));
    v132 = 4;
    *(_OWORD *)&dword_140404A6C[431564541] = (*(__int128 *)(sr_world_matrix_backing+48));
    *(_OWORD *)&dword_140404A6C[431564545] = (*(__int128 *)(sr_world_matrix_backing+64));
    do
    {
      v133 = *(v130 - 1);
      v134 = 4;
      v135 = *v130;
      v136 = v130[1];
      v137 = v130[2];
      do
      {
        *v129 = (float)((float)((float)(v133 * *(float *)((char *)v129 + v131 - 16))
                              + (float)(v135 * *(float *)((char *)v129 + v131)))
                      + (float)(v136 * *(float *)((char *)v129 + v131 + 16)))
              + (float)(v137 * *(float *)((char *)v129 + v131 + 32));
        ++v129;
        --v134;
      }
      while ( v134 );
      v130 += 4;
      v131 -= 16LL;
      --v132;
    }
    while ( v132 );
    *(_OWORD *)&dword_140404A6C[431564565] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    *(_OWORD *)&dword_140404A6C[431564569] = (*(__int128 *)(sr_world_matrix_backing+32));
    *(_OWORD *)&dword_140404A6C[431564573] = (*(__int128 *)(sr_world_matrix_backing+48));
    *(_OWORD *)&dword_140404A6C[431564577] = (*(__int128 *)(sr_world_matrix_backing+64));
    (*(void (           **)(__int64, __int64))&dword_140404A6C[18215069])(1032, 6914);
    v138 = 1760LL * (int)dword_140404A6C[282486845];
    v139 = dword_140404A6C[v138 + 278845917];
    sr_world_direction[0] = dword_140404A6C[v138 + 278845916];
    sr_world_direction[2] = dword_140404A6C[v138 + 278845918];
    (*(float *)&sr_world_direction[1]) = *(float *)&v139;
  }
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  LOBYTE(v140) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v140);
  qword_1404042E0(dword_140404A6C[451221605]);
  qword_140404050(3553, dword_140404A6C[451221642]);
  if ( dword_140404A6C[179668287] )
    sub_14011E9B0();
  (*(void (           **)(__int64, __int64))&dword_140404A6C[18215069])(1032, 6914);
  (*(void (           **)(__int64, __int64))&dword_140404A6C[18215069])(1032, 6914);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  (*(void (           **)(__int64, __int64))&dword_140404A6C[18215069])(1032, 6914);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (**)(float))&dword_140404A6C[18215065])(0x1.8000000000000p+1f);
  (*(void (**)(float))&dword_140404A6C[18215065])(1.0f);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3553);
  if ( dword_140404A6C[309078285] )
    sub_14008D800();
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  v147 = dword_140404A6C[284024501];
  v148 = -1;
  dword_140404A6C[438291413] = 2;
  if ( dword_140404A6C[284024501] != -1 )
  {
    v145 = 14388LL * (int)dword_140404A6C[284024501];
    v149 = *(int *)((char *)&dword_140404A6C[71856292] + v145);
    if ( (_DWORD)v149 != -1 )
    {
      v145 = 28664 * v149;
      v150 = dword_140404A6C[7166 * v149 + 280651313];
      if ( v150 != -1 )
        v148 = v150;
    }
  }
  v151 = &dword_140404A6C[280651305];
  v152 = &dword_140404A6C[284956346];
  for ( j = 0; j < 256; ++j )
  {
    if ( !*(v151 - 2) )
      goto LABEL_133;
    if ( *v151 == -1 )
      goto LABEL_133;
    v154 = *((float *)v152 - 2);
    v155 = *((float *)v152 - 1);
    v156 = *(float *)v152;
    if ( (float)((float)((float)((float)(v155 - *(float *)&dword_140404A6C[284024503])
                               * (float)(v155 - *(float *)&dword_140404A6C[284024503]))
                       + (float)((float)(v154 - *(float *)&dword_140404A6C[284024502])
                               * (float)(v154 - *(float *)&dword_140404A6C[284024502])))
               + (float)((float)(*(float *)v152 - *(float *)&dword_140404A6C[284024504])
                       * (float)(*(float *)v152 - *(float *)&dword_140404A6C[284024504]))) >= 1024.0 )
      goto LABEL_133;
    *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
    dword_140404A6C[431564532] = 1065353216;
    v157 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
    v158 = (float *)&sr_world_matrix[0] + 1;
    v159 = (char *)&dword_140404A6C[431564521] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
    v160 = 4;
    *(_QWORD *)&sr_world_matrix[0] = *(_QWORD *)&dword_140404A6C[284024505];
    *((_QWORD *)&sr_world_matrix[0] + 1) = dword_140404A6C[284024507];
    *(_QWORD *)&sr_world_matrix[1] = *(_QWORD *)&dword_140404A6C[284024508];
    *((_QWORD *)&sr_world_matrix[1] + 1) = dword_140404A6C[284024510];
    *(_QWORD *)&sr_world_matrix[2] = *(_QWORD *)&dword_140404A6C[284024511];
    *((_QWORD *)&sr_world_matrix[2] + 1) = dword_140404A6C[284024513];
    *(float *)&dword_140404A6C[431564529] = v154;
    *(float *)&dword_140404A6C[431564530] = v155 + 0.875;
    *(float *)&dword_140404A6C[431564531] = v156;
    sr_world_matrix[3] = xmmword_140279490;
    do
    {
      v161 = *(v158 - 1);
      v162 = 4;
      v163 = *v158;
      v164 = v158[1];
      v165 = v158[2];
      do
      {
        *v157 = (float)((float)(v161 * *(float *)((char *)v157 + v159 - 16))
                      + (float)(v163 * *(float *)((char *)v157 + v159)))
              + (float)((float)(v165 * *(float *)((char *)v157 + v159 + 32))
                      + (float)(v164 * *(float *)((char *)v157 + v159 + 16)));
        ++v157;
        --v162;
      }
      while ( v162 );
      v158 += 4;
      v159 -= 16LL;
      --v160;
    }
    while ( v160 );
    *(_OWORD *)&dword_140404A6C[431564517] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v166 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v167 = (char *)&dword_140404A6C[431564505] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v168 = (float *)&dword_140404A6C[431564518];
    *(_OWORD *)&dword_140404A6C[431564521] = (*(__int128 *)(sr_world_matrix_backing+32));
    v169 = 4;
    *(_OWORD *)&dword_140404A6C[431564525] = (*(__int128 *)(sr_world_matrix_backing+48));
    *(_OWORD *)&dword_140404A6C[431564529] = (*(__int128 *)(sr_world_matrix_backing+64));
    do
    {
      v170 = *(v168 - 1);
      v171 = 4;
      v172 = *v168;
      v173 = v168[1];
      v174 = v168[2];
      do
      {
        *v166 = (float)((float)(v170 * *(float *)((char *)v166 + v167 - 16))
                      + (float)(v172 * *(float *)((char *)v166 + v167)))
              + (float)((float)(v174 * *(float *)((char *)v166 + v167 + 32))
                      + (float)(v173 * *(float *)((char *)v166 + v167 + 16)));
        ++v166;
        --v171;
      }
      while ( v171 );
      v168 += 4;
      v167 -= 16LL;
      --v169;
    }
    while ( v169 );
    *(_OWORD *)&dword_140404A6C[431564533] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v175 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v176 = (char *)&dword_140404A6C[431564489] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v177 = (float *)&dword_140404A6C[431564534];
    *(_OWORD *)&dword_140404A6C[431564537] = (*(__int128 *)(sr_world_matrix_backing+32));
    v178 = 4;
    *(_OWORD *)&dword_140404A6C[431564541] = (*(__int128 *)(sr_world_matrix_backing+48));
    *(_OWORD *)&dword_140404A6C[431564545] = (*(__int128 *)(sr_world_matrix_backing+64));
    do
    {
      v179 = *(v177 - 1);
      v180 = 4;
      v181 = *v177;
      v182 = v177[1];
      v183 = v177[2];
      do
      {
        *v175 = (float)((float)(v181 * *(float *)((char *)v175 + v176))
                      + (float)(v179 * *(float *)((char *)v175 + v176 - 16)))
              + (float)((float)(v183 * *(float *)((char *)v175 + v176 + 32))
                      + (float)(v182 * *(float *)((char *)v175 + v176 + 16)));
        ++v175;
        --v180;
      }
      while ( v180 );
      v177 += 4;
      v176 -= 16LL;
      --v178;
    }
    while ( v178 );
    *(_OWORD *)&dword_140404A6C[431564565] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    *(_OWORD *)&dword_140404A6C[431564569] = (*(__int128 *)(sr_world_matrix_backing+32));
    *(_OWORD *)&dword_140404A6C[431564573] = (*(__int128 *)(sr_world_matrix_backing+48));
    *(_OWORD *)&dword_140404A6C[431564577] = (*(__int128 *)(sr_world_matrix_backing+64));
    if ( v148 != -1 && v151[8] == v148 )
    {
      (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
      v147 = dword_140404A6C[284024501];
    }
    v184 = v151[7145];
    v185 = 1065353216;
    v186 = 1065353216;
    if ( v184 == 1 )
      goto LABEL_114;
    if ( v184 == 2 )
    {
      v185 = 0;
LABEL_114:
      v186 = 0;
    }
    if ( v147 == -1 || (v187 = dword_140404A6C[3597 * v147 + 71856292], v187 == -1) || v187 != j )
    {
      if ( v184 > 0 || dword_140404A6C[280649846] )
      {
        v188 = (int)*v151;
        v269 = 1065353216;
        v268 = v186;
        v267 = v185;
        LODWORD(v266) = 1065353216;
        LODWORD(v265) = 193;
        sr_CSDrawText(
          (char *)&dword_140404A6C[3597 * v188 + 71856254],
          0.0,
          (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x3E800000u))),
          0.3125);
        v189 = dword_140404A6C[3597 * *v151 + 71856265];
        sub_140158AB0(v285, "%03d-%04d", v189 / 0x2710, v189 % 0x2710);
        v269 = 1065353216;
        v268 = v186;
        v267 = v185;
        LODWORD(v266) = 1065353216;
        LODWORD(v265) = 193;
        sr_CSDrawText(v285, 0.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0LL))), 0.25);
        v147 = dword_140404A6C[284024501];
      }
    }
    if ( v148 != -1 && v151[8] == v148 )
    {
      (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
      v147 = dword_140404A6C[284024501];
    }
    *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
    v190 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v191 = (char *)&dword_140404A6C[431564505] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v192 = (float *)&dword_140404A6C[431564518];
    *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
    v193 = 4;
    *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
    *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
    do
    {
      v194 = *(v192 - 1);
      v195 = 4;
      v196 = *v192;
      v197 = v192[1];
      v198 = v192[2];
      do
      {
        *v190 = (float)((float)(v198 * *(float *)((char *)v190 + v191 + 32))
                      + (float)(v197 * *(float *)((char *)v190 + v191 + 16)))
              + (float)((float)(v196 * *(float *)((char *)v190 + v191))
                      + (float)(v194 * *(float *)((char *)v190 + v191 - 16)));
        ++v190;
        --v195;
      }
      while ( v195 );
      v192 += 4;
      v191 -= 16LL;
      --v193;
    }
    while ( v193 );
    *(_OWORD *)&dword_140404A6C[431564533] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v199 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v145 = (char *)&dword_140404A6C[431564489] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    v146 = (float *)&dword_140404A6C[431564534];
    *(_OWORD *)&dword_140404A6C[431564537] = (*(__int128 *)(sr_world_matrix_backing+32));
    v200 = 4;
    *(_OWORD *)&dword_140404A6C[431564541] = (*(__int128 *)(sr_world_matrix_backing+48));
    *(_OWORD *)&dword_140404A6C[431564545] = (*(__int128 *)(sr_world_matrix_backing+64));
    do
    {
      v201 = *(v146 - 1);
      v202 = 4;
      v203 = *v146;
      v204 = v146[1];
      v205 = v146[2];
      do
      {
        *v199 = (float)((float)(v201 * *(float *)((char *)v199 + v145 - 16))
                      + (float)(v203 * *(float *)((char *)v199 + v145)))
              + (float)((float)(v205 * *(float *)((char *)v199 + v145 + 32))
                      + (float)(v204 * *(float *)((char *)v199 + v145 + 16)));
        ++v199;
        --v202;
      }
      while ( v202 );
      v146 += 4;
      v145 -= 16LL;
      --v200;
    }
    while ( v200 );
    *(_OWORD *)&dword_140404A6C[431564565] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    *(_OWORD *)&dword_140404A6C[431564569] = (*(__int128 *)(sr_world_matrix_backing+32));
    *(_OWORD *)&dword_140404A6C[431564573] = (*(__int128 *)(sr_world_matrix_backing+48));
    *(_OWORD *)&dword_140404A6C[431564577] = (*(__int128 *)(sr_world_matrix_backing+64));
LABEL_133:
    v152 += 344;
    v151 += 7166;
  }
  if ( !dword_140404A6C[280649846] && dword_140404A6C[283831312] == 5 && v147 != -1 )
  {
    v145 = 14388LL * v147;
    if ( *(unsigned int *)((char *)&dword_140404A6C[71856286] + v145) == 2 )
    {
      v206 = &dword_140404A6C[280651337];
      v207 = dword_140404A6C[284022462];
      do
      {
        if ( *(v206 - 34) )
        {
          v208 = *(v206 - 32);
          if ( v208 != -1
            && (v208 == v207 || v208 == dword_140404A6C[284022463])
            && (float)((float)((float)((float)(*((float *)v206 - 1) - *(float *)&dword_140404A6C[284024503])
                                     * (float)(*((float *)v206 - 1) - *(float *)&dword_140404A6C[284024503]))
                             + (float)((float)(*((float *)v206 - 2) - *(float *)&dword_140404A6C[284024502])
                                     * (float)(*((float *)v206 - 2) - *(float *)&dword_140404A6C[284024502])))
                     + (float)((float)(*(float *)v206 - *(float *)&dword_140404A6C[284024504])
                             * (float)(*(float *)v206 - *(float *)&dword_140404A6C[284024504]))) < 1024.0 )
          {
            v209 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            v210 = v206[103];
            *(float *)&v211 = *((float *)v206 + 104) + 1.25;
            v212 = v206[105];
            v213 = (float *)&sr_world_matrix[0] + 1;
            *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
            v214 = (char *)&dword_140404A6C[431564521] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            dword_140404A6C[431564532] = 1065353216;
            v215 = 4;
            *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
            *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
            *(_QWORD *)&sr_world_matrix[0] = *(_QWORD *)&dword_140404A6C[284024505];
            *((_QWORD *)&sr_world_matrix[0] + 1) = dword_140404A6C[284024507];
            *(_QWORD *)&sr_world_matrix[1] = *(_QWORD *)&dword_140404A6C[284024508];
            *((_QWORD *)&sr_world_matrix[1] + 1) = dword_140404A6C[284024510];
            *(_QWORD *)&sr_world_matrix[2] = *(_QWORD *)&dword_140404A6C[284024511];
            *((_QWORD *)&sr_world_matrix[2] + 1) = dword_140404A6C[284024513];
            dword_140404A6C[431564529] = v210;
            dword_140404A6C[431564530] = v211;
            dword_140404A6C[431564531] = v212;
            sr_world_matrix[3] = xmmword_140279490;
            do
            {
              v216 = *(v213 - 1);
              v217 = 4;
              v218 = *v213;
              v219 = v213[1];
              v220 = v213[2];
              do
              {
                *v209 = (float)((float)(v216 * *(float *)((char *)v209 + v214 - 16))
                              + (float)(v218 * *(float *)((char *)v209 + v214)))
                      + (float)((float)(v220 * *(float *)((char *)v209 + v214 + 32))
                              + (float)(v219 * *(float *)((char *)v209 + v214 + 16)));
                ++v209;
                --v217;
              }
              while ( v217 );
              v213 += 4;
              v214 -= 16LL;
              --v215;
            }
            while ( v215 );
            *(_OWORD *)&dword_140404A6C[431564517] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            v221 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            *(_OWORD *)&dword_140404A6C[431564521] = (*(__int128 *)(sr_world_matrix_backing+32));
            v222 = (float *)&dword_140404A6C[431564518];
            v223 = (char *)&dword_140404A6C[431564505] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            v224 = 4;
            *(_OWORD *)&dword_140404A6C[431564525] = (*(__int128 *)(sr_world_matrix_backing+48));
            *(_OWORD *)&dword_140404A6C[431564529] = (*(__int128 *)(sr_world_matrix_backing+64));
            do
            {
              v225 = *(v222 - 1);
              v226 = 4;
              v227 = *v222;
              v228 = v222[1];
              v229 = v222[2];
              do
              {
                *v221 = (float)((float)(v229 * *(float *)((char *)v221 + v223 + 32))
                              + (float)(v228 * *(float *)((char *)v221 + v223 + 16)))
                      + (float)((float)(v227 * *(float *)((char *)v221 + v223))
                              + (float)(v225 * *(float *)((char *)v221 + v223 - 16)));
                ++v221;
                --v226;
              }
              while ( v226 );
              v222 += 4;
              v223 -= 16LL;
              --v224;
            }
            while ( v224 );
            *(_OWORD *)&dword_140404A6C[431564533] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            v230 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            *(_OWORD *)&dword_140404A6C[431564537] = (*(__int128 *)(sr_world_matrix_backing+32));
            v231 = (float *)&dword_140404A6C[431564534];
            v232 = (char *)&dword_140404A6C[431564489] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            v233 = 4;
            *(_OWORD *)&dword_140404A6C[431564541] = (*(__int128 *)(sr_world_matrix_backing+48));
            *(_OWORD *)&dword_140404A6C[431564545] = (*(__int128 *)(sr_world_matrix_backing+64));
            do
            {
              v234 = *(v231 - 1);
              v235 = 4;
              v236 = *v231;
              v237 = v231[1];
              v238 = v231[2];
              do
              {
                *v230 = (float)((float)(v234 * *(float *)((char *)v230 + v232 - 16))
                              + (float)(v236 * *(float *)((char *)v230 + v232)))
                      + (float)((float)(v238 * *(float *)((char *)v230 + v232 + 32))
                              + (float)(v237 * *(float *)((char *)v230 + v232 + 16)));
                ++v230;
                --v235;
              }
              while ( v235 );
              v231 += 4;
              v232 -= 16LL;
              --v233;
            }
            while ( v233 );
            *(_OWORD *)&dword_140404A6C[431564565] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            *(_OWORD *)&dword_140404A6C[431564569] = (*(__int128 *)(sr_world_matrix_backing+32));
            *(_OWORD *)&dword_140404A6C[431564573] = (*(__int128 *)(sr_world_matrix_backing+48));
            *(_OWORD *)&dword_140404A6C[431564577] = (*(__int128 *)(sr_world_matrix_backing+64));
            if ( v208 == v207 )
            {
              v269 = 1065353216;
              v268 = 0;
              v267 = 1065353216;
              LODWORD(v266) = 0;
              LODWORD(v265) = 193;
              sr_CSDrawText("The Savior", 0.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0LL))), 0.25);
              v207 = dword_140404A6C[284022462];
            }
            v239 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
            v240 = (float *)&dword_140404A6C[431564518];
            v241 = (char *)&dword_140404A6C[431564505] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
            v242 = 4;
            *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
            *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
            do
            {
              v243 = *(v240 - 1);
              v244 = 4;
              v245 = *v240;
              v246 = v240[1];
              v247 = v240[2];
              do
              {
                *v239 = (float)((float)(v247 * *(float *)((char *)v239 + v241 + 32))
                              + (float)(v246 * *(float *)((char *)v239 + v241 + 16)))
                      + (float)((float)(v243 * *(float *)((char *)v239 + v241 - 16))
                              + (float)(v245 * *(float *)((char *)v239 + v241)));
                ++v239;
                --v244;
              }
              while ( v244 );
              v240 += 4;
              v241 -= 16LL;
              --v242;
            }
            while ( v242 );
            v248 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            *(_OWORD *)&dword_140404A6C[431564533] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            v146 = (float *)&dword_140404A6C[431564534];
            v145 = (char *)&dword_140404A6C[431564489] - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            *(_OWORD *)&dword_140404A6C[431564537] = (*(__int128 *)(sr_world_matrix_backing+32));
            v249 = 4;
            *(_OWORD *)&dword_140404A6C[431564541] = (*(__int128 *)(sr_world_matrix_backing+48));
            *(_OWORD *)&dword_140404A6C[431564545] = (*(__int128 *)(sr_world_matrix_backing+64));
            do
            {
              v250 = *(v146 - 1);
              v251 = 4;
              v252 = *v146;
              v253 = v146[1];
              v254 = v146[2];
              do
              {
                *v248 = (float)((float)(v250 * *(float *)((char *)v248 + v145 - 16))
                              + (float)(v252 * *(float *)((char *)v248 + v145)))
                      + (float)((float)(v254 * *(float *)((char *)v248 + v145 + 32))
                              + (float)(v253 * *(float *)((char *)v248 + v145 + 16)));
                ++v248;
                --v251;
              }
              while ( v251 );
              v146 += 4;
              v145 -= 16LL;
              --v249;
            }
            while ( v249 );
            *(_OWORD *)&dword_140404A6C[431564565] = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            *(_OWORD *)&dword_140404A6C[431564569] = (*(__int128 *)(sr_world_matrix_backing+32));
            *(_OWORD *)&dword_140404A6C[431564573] = (*(__int128 *)(sr_world_matrix_backing+48));
            *(_OWORD *)&dword_140404A6C[431564577] = (*(__int128 *)(sr_world_matrix_backing+64));
          }
        }
        v206 += 7166;
        --v9;
      }
      while ( v9 );
      v147 = dword_140404A6C[284024501];
    }
  }
  if ( !dword_140404A6C[284023069] )
  {
    sub_140092D70();
    v147 = dword_140404A6C[284024501];
  }
  if ( dword_140404A6C[283831312] == 5 && v147 != -1 )
  {
    v145 = 14388LL * v147;
    v255 = *(unsigned int *)((char *)&dword_140404A6C[71856286] + v145);
    if ( (unsigned int)(v255 - 1) <= 1 && *(float *)&dword_140404A6C[284022465] != 0.0 )
    {
      sr_world_direction[0] = dword_140404A6C[284022465];
      sr_world_direction[2] = dword_140404A6C[284022467];
      dword_140404A6C[456217205] = 2;
      dword_140404A6C[456217207] = 0;
      dword_140404A6C[456217208] = 9;
      if ( (_DWORD)v255 == 1 )
        v256 = xmmword_1402794A0;
      else
        v256 = xmmword_140279530;
      *(_OWORD *)&dword_140404A6C[456807033] = v256;
      v257 = *(float *)&dword_140404A6C[284022466] + 2.0;
      (*(float *)&sr_world_direction[1]) = *(float *)&dword_140404A6C[284022466] + 2.0;
      sub_14007D520((unsigned int *)&sr_world_direction[0], v255, (__int64)v146);
      (*(float *)&sr_world_direction[1]) = v257 + 256.0;
      sub_14007D520((unsigned int *)&sr_world_direction[0], v258, v259);
      sub_14006E0D0(v261, v260, v262);
    }
  }
  LOBYTE(v145) = 1;
  (*(void (           **)(signed __int64))&dword_140404A6C[18215099])(v145);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3042);
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790134] + 283791765]);
  unk_140404718(36160, 36064, 3553, dword_140404A6C[42 * dword_140404A6C[283829873] + 436582486], 0);
  qword_1404042E0(dword_140404A6C[71738345]);
  qword_140404050(3553, dword_140404A6C[42 * dword_140404A6C[283829862] + 436582486]);
  unk_140404098(33985);
  qword_140404050(3553, dword_140404A6C[42 * dword_140404A6C[283829862] + 436582486]);
  unk_140404098(33984);
  qword_140302FF8(4, 0, 3);
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 192FD7140: using guessed type unsigned int;
// 192FD7148: using guessed type unsigned int;
// 192FD7174: using guessed type unsigned int;
// 192FD7178: using guessed type unsigned int;

//----- (000000014014B2A0) ----------------------------------------------------
// Candidate shader/camera uniform cache: resolves viewposition/viewdirection/matrices/light/sampler uniforms and sets inverse resolution.
__int64 render_cache_camera_uniforms_candidate()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rbx
  float resolution[2]; /* original contiguous vec2 uniform */
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14014B2A0[64];
#define v4 (*(__int64 (*))(void *)(sr_frame_14014B2A0 + 0)) /* [rsp+0h] */
#define v7 (*(__int64 (*))(void *)(sr_frame_14014B2A0 + 48)) /* [rsp+30h] */

  LOBYTE(dword_140404A6C[71741525]) = 0;
  if ( (unsigned int)sub_14004C4E0(0, (__int64)(uintptr_t)sr_mem_1402f61e0, (__int64)(uintptr_t)sr_mem_1402f6460, 0) )
  {
    qword_1404042E0(dword_140404A6C[71737685]);
    dword_140404A6C[71737724] = unk_140404288(dword_140404A6C[71737685], "clipplane");
    dword_140404A6C[71737690] = unk_140404288(dword_140404A6C[71737685], "ooresolution");
    dword_140404A6C[71737691] = unk_140404288(dword_140404A6C[71737685], "viewposition");
    dword_140404A6C[71737693] = unk_140404288(dword_140404A6C[71737685], "flags");
    dword_140404A6C[71737695] = unk_140404288(dword_140404A6C[71737685], "lightdirection");
    dword_140404A6C[71737696] = unk_140404288(dword_140404A6C[71737685], "isreflection");
    dword_140404A6C[71737697] = unk_140404288(dword_140404A6C[71737685], "planeposition");
    dword_140404A6C[71737698] = unk_140404288(dword_140404A6C[71737685], "planenormal");
    dword_140404A6C[71737699] = unk_140404288(dword_140404A6C[71737685], "modelviewprojectionmatrix");
    dword_140404A6C[71737700] = unk_140404288(dword_140404A6C[71737685], "lightambient");
    dword_140404A6C[71737701] = unk_140404288(dword_140404A6C[71737685], "lightdiffuse");
    dword_140404A6C[71737702] = unk_140404288(dword_140404A6C[71737685], "tex_color");
    dword_140404A6C[71737703] = unk_140404288(dword_140404A6C[71737685], "tex_shadowmap");
    dword_140404A6C[71737704] = unk_140404288(dword_140404A6C[71737685], "tex_material");
    dword_140404A6C[71737705] = unk_140404288(dword_140404A6C[71737685], "tex_cubemap");
    dword_140404A6C[71737706] = unk_140404288(dword_140404A6C[71737685], "tex_atlas_color");
    dword_140404A6C[71737707] = unk_140404288(dword_140404A6C[71737685], "tex_atlas_material");
    resolution[0] = 1.0f / (float)(int)dword_140404A6C[278520508];
    resolution[1] = 1.0f / (float)(int)dword_140404A6C[278520509];
    unk_140404330(dword_140404A6C[71737690], 1, resolution);
    qword_140404308(dword_140404A6C[71737702], 0);
    qword_140404308(dword_140404A6C[71737703], 1);
    qword_140404308(dword_140404A6C[71737704], 2);
    qword_140404308(dword_140404A6C[71737705], 3);
    qword_140404308(dword_140404A6C[71737706], 4);
    qword_140404308(dword_140404A6C[71737707], 5);
    qword_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(1, (__int64)(uintptr_t)sr_mem_1402f7bb0, (__int64)(uintptr_t)sr_mem_1402f7e60, 0) )
  {
    qword_1404042E0(dword_140404A6C[71737745]);
    dword_140404A6C[71737784] = unk_140404288(dword_140404A6C[71737745], "clipplane");
    dword_140404A6C[71737750] = unk_140404288(dword_140404A6C[71737745], "ooresolution");
    dword_140404A6C[71737751] = unk_140404288(dword_140404A6C[71737745], "viewposition");
    dword_140404A6C[71737755] = unk_140404288(dword_140404A6C[71737745], "lightdirection");
    dword_140404A6C[71737756] = unk_140404288(dword_140404A6C[71737745], "isreflection");
    dword_140404A6C[71737757] = unk_140404288(dword_140404A6C[71737745], "planeposition");
    dword_140404A6C[71737758] = unk_140404288(dword_140404A6C[71737745], "planenormal");
    dword_140404A6C[71737759] = unk_140404288(dword_140404A6C[71737745], "modelviewprojectionmatrix");
    dword_140404A6C[71737760] = unk_140404288(dword_140404A6C[71737745], "lightambient");
    dword_140404A6C[71737761] = unk_140404288(dword_140404A6C[71737745], "lightdiffuse");
    dword_140404A6C[71737762] = unk_140404288(dword_140404A6C[71737745], "tex_color");
    dword_140404A6C[71737763] = unk_140404288(dword_140404A6C[71737745], "tex_shadowmap");
    dword_140404A6C[71737764] = unk_140404288(dword_140404A6C[71737745], "tex_material");
    dword_140404A6C[71737765] = unk_140404288(dword_140404A6C[71737745], "tex_cubemap");
    dword_140404A6C[71737766] = unk_140404288(dword_140404A6C[71737745], "flags");
    resolution[0] = 1.0f / (float)(int)dword_140404A6C[278520508];
    resolution[1] = 1.0f / (float)(int)dword_140404A6C[278520509];
    unk_140404330(dword_140404A6C[71737750], 1, resolution);
    qword_140404308(dword_140404A6C[71737762], 0);
    qword_140404308(dword_140404A6C[71737763], 1);
    qword_140404308(dword_140404A6C[71737764], 2);
    qword_140404308(dword_140404A6C[71737765], 3);
    qword_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(2, (__int64)(uintptr_t)sr_mem_1402f97bf, (__int64)(uintptr_t)sr_mem_1402f99af, 0) )
  {
    qword_1404042E0(dword_140404A6C[71737805]);
    dword_140404A6C[71737810] = unk_140404288(dword_140404A6C[71737805], "ooresolution");
    dword_140404A6C[71737811] = unk_140404288(dword_140404A6C[71737805], "viewposition");
    dword_140404A6C[71737815] = unk_140404288(dword_140404A6C[71737805], "lightdirection");
    dword_140404A6C[71737819] = unk_140404288(dword_140404A6C[71737805], "modelviewprojectionmatrix");
    dword_140404A6C[71737820] = unk_140404288(dword_140404A6C[71737805], "lightambient");
    dword_140404A6C[71737821] = unk_140404288(dword_140404A6C[71737805], "lightdiffuse");
    dword_140404A6C[71737822] = unk_140404288(dword_140404A6C[71737805], "tex_color");
    dword_140404A6C[71737823] = unk_140404288(dword_140404A6C[71737805], "tex_cubemap");
    resolution[0] = 1.0f / (float)(int)dword_140404A6C[278520508];
    resolution[1] = 1.0f / (float)(int)dword_140404A6C[278520509];
    unk_140404330(dword_140404A6C[71737810], 1, resolution);
    qword_140404308(dword_140404A6C[71737822], 0);
    qword_140404308(dword_140404A6C[71737823], 1);
    qword_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(3, (__int64)(uintptr_t)sr_mem_1402f9fd0, (__int64)(uintptr_t)sr_mem_1402fa480, 0) )
  {
    qword_1404042E0(dword_140404A6C[71737865]);
    dword_140404A6C[71737870] = unk_140404288(dword_140404A6C[71737865], "ooresolution");
    dword_140404A6C[71737871] = unk_140404288(dword_140404A6C[71737865], "viewposition");
    dword_140404A6C[71737872] = unk_140404288(dword_140404A6C[71737865], "objposition");
    dword_140404A6C[71737873] = unk_140404288(dword_140404A6C[71737865], "objorientation");
    dword_140404A6C[71737874] = unk_140404288(dword_140404A6C[71737865], "modelviewprojectionmatrix");
    dword_140404A6C[71737875] = unk_140404288(dword_140404A6C[71737865], "lightdirection");
    dword_140404A6C[71737876] = unk_140404288(dword_140404A6C[71737865], "lightambient");
    dword_140404A6C[71737877] = unk_140404288(dword_140404A6C[71737865], "lightdiffuse");
    dword_140404A6C[71737878] = unk_140404288(dword_140404A6C[71737865], "viewdirection");
    dword_140404A6C[71737882] = unk_140404288(dword_140404A6C[71737865], "tex_color");
    dword_140404A6C[71737883] = unk_140404288(dword_140404A6C[71737865], "tex_shadowmap");
    dword_140404A6C[71737884] = unk_140404288(dword_140404A6C[71737865], "tex_cubemap");
    dword_140404A6C[71737885] = unk_140404288(dword_140404A6C[71737865], "flags");
    resolution[0] = 1.0f / (float)(int)dword_140404A6C[278520508];
    resolution[1] = 1.0f / (float)(int)dword_140404A6C[278520509];
    unk_140404330(dword_140404A6C[71737870], 1, resolution);
    qword_140404308(dword_140404A6C[71737882], 0);
    qword_140404308(dword_140404A6C[71737883], 1);
    qword_140404308(dword_140404A6C[71737884], 2);
    qword_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(4, (__int64)(uintptr_t)sr_mem_1402fb8a0, (__int64)(uintptr_t)sr_mem_1402fc010, 0) )
  {
    unk_140404538(dword_140404A6C[71737925], 3, off_140301DB0, 35980);
    unk_1404042D0(dword_140404A6C[71737925]);
    qword_1404042E0(dword_140404A6C[71737925]);
    dword_140404A6C[71737938] = unk_140404288(dword_140404A6C[71737925], "boneorgposition");
    dword_140404A6C[71737939] = unk_140404288(dword_140404A6C[71737925], "boneposition");
    dword_140404A6C[71737940] = unk_140404288(dword_140404A6C[71737925], "boneorientation");
    qword_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(5, (__int64)(uintptr_t)sr_mem_1402fc070, (__int64)(uintptr_t)sr_mem_1402fc310, 0) )
  {
    qword_1404042E0(dword_140404A6C[71737985]);
    dword_140404A6C[71737990] = unk_140404288(dword_140404A6C[71737985], "modelviewprojectionmatrix");
    dword_140404A6C[71737991] = unk_140404288(dword_140404A6C[71737985], "modelviewmatrix");
    dword_140404A6C[71738025] = unk_140404288(dword_140404A6C[71737985], "land_usemask");
    dword_140404A6C[71738027] = unk_140404288(dword_140404A6C[71737985], "tex_mask");
    qword_140404308(dword_140404A6C[71738027], 0);
    qword_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(6, (__int64)(uintptr_t)sr_mem_1402fc620, (__int64)(uintptr_t)sr_mem_1402fc780, 0) )
  {
    qword_1404042E0(dword_140404A6C[71738045]);
    dword_140404A6C[71738050] = unk_140404288(dword_140404A6C[71738045], "atmoconstant");
    dword_140404A6C[71738051] = unk_140404288(dword_140404A6C[71738045], "atmowavelength");
    dword_140404A6C[71738052] = unk_140404288(dword_140404A6C[71738045], "worldposition");
    dword_140404A6C[71738053] = unk_140404288(dword_140404A6C[71738045], "ooresolution");
    dword_140404A6C[71738054] = unk_140404288(dword_140404A6C[71738045], "lightdirection");
    dword_140404A6C[71738055] = unk_140404288(dword_140404A6C[71738045], "modelviewprojectionmatrix");
    dword_140404A6C[71738056] = unk_140404288(dword_140404A6C[71738045], "numofsamples");
    unk_140404340(dword_140404A6C[71738050], 1, &unk_1402F61B8);
    qword_140404338(dword_140404A6C[71738051], 1, &unk_1402F61C8);
    qword_140404308(dword_140404A6C[71738056], 4);
    resolution[0] = 1.0f / (float)(int)dword_140404A6C[278520508];
    resolution[1] = 1.0f / (float)(int)dword_140404A6C[278520509];
    unk_140404330(dword_140404A6C[71738053], 1, resolution);
    dword_140404A6C[71738058] = unk_140404288(dword_140404A6C[71738045], "tex_depth");
    qword_140404308(dword_140404A6C[71738058], 0);
    dword_140404A6C[71738086] = unk_140404288(dword_140404A6C[71738045], "flags");
    qword_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(7, (__int64)(uintptr_t)sr_mem_1402fdeb0, (__int64)(uintptr_t)sr_mem_1402fdf70, 0) )
  {
    qword_1404042E0(dword_140404A6C[71738105]);
    dword_140404A6C[71738110] = unk_140404288(dword_140404A6C[71738105], "ooresolution");
    dword_140404A6C[71738111] = unk_140404288(dword_140404A6C[71738105], "sampledir");
    dword_140404A6C[71738112] = unk_140404288(dword_140404A6C[71738105], "blurfilter");
    dword_140404A6C[71738113] = unk_140404288(dword_140404A6C[71738105], "blurfilter2");
    dword_140404A6C[71738114] = unk_140404288(dword_140404A6C[71738105], "modelviewprojectionmatrix");
    dword_140404A6C[71738118] = unk_140404288(dword_140404A6C[71738105], "tex_color");
    resolution[0] = 1.0f / (float)(int)dword_140404A6C[278520508];
    resolution[1] = 1.0f / (float)(int)dword_140404A6C[278520509];
    unk_140404330(dword_140404A6C[71738110], 1, resolution);
    qword_140404308(dword_140404A6C[71738118], 0);
    qword_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(8, (__int64)(uintptr_t)sr_mem_1402fe670, (__int64)(uintptr_t)sr_mem_1402fe9a0, 0) )
  {
    qword_1404042E0(dword_140404A6C[71738165]);
    dword_140404A6C[71738170] = unk_140404288(dword_140404A6C[71738165], "lightdirection");
    dword_140404A6C[71738171] = unk_140404288(dword_140404A6C[71738165], "lightambient");
    dword_140404A6C[71738172] = unk_140404288(dword_140404A6C[71738165], "lightdiffuse");
    dword_140404A6C[71738173] = unk_140404288(dword_140404A6C[71738165], "viewposition");
    dword_140404A6C[71738174] = unk_140404288(dword_140404A6C[71738165], "modelviewprojectionmatrix");
    dword_140404A6C[71738205] = unk_140404288(dword_140404A6C[71738165], "land_usemask");
    dword_140404A6C[71738178] = unk_140404288(dword_140404A6C[71738165], "tex_normal");
    dword_140404A6C[71738179] = unk_140404288(dword_140404A6C[71738165], "tex_detail");
    dword_140404A6C[71738180] = unk_140404288(dword_140404A6C[71738165], "tex_color");
    dword_140404A6C[71738210] = unk_140404288(dword_140404A6C[71738165], "tex_mask");
    dword_140404A6C[71738211] = unk_140404288(dword_140404A6C[71738165], "tex_shadow");
    qword_140404308(dword_140404A6C[71738178], 0);
    qword_140404308(dword_140404A6C[71738179], 1);
    qword_140404308(dword_140404A6C[71738180], 2);
    qword_140404308(dword_140404A6C[71738210], 3);
    qword_140404308(dword_140404A6C[71738211], 4);
    qword_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(
                       9,
                       (__int64)(uintptr_t)sr_mem_1402ff460,
                       (__int64)(uintptr_t)sr_mem_1402ff4e0,
                       (__int64)(uintptr_t)sr_mem_1402ff550) )
  {
    qword_1404042E0(dword_140404A6C[71738225]);
    dword_140404A6C[71738230] = unk_140404288(dword_140404A6C[71738225], "modelmatrix");
    dword_140404A6C[71738231] = unk_140404288(dword_140404A6C[71738225], "modelviewprojectionmatrix");
    dword_140404A6C[71738232] = unk_140404288(dword_140404A6C[71738225], "lightdirection");
    dword_140404A6C[71738233] = unk_140404288(dword_140404A6C[71738225], "shadowlength");
    dword_140404A6C[71738234] = unk_140404288(dword_140404A6C[71738225], "projectionmatrix");
    dword_140404A6C[71738235] = unk_140404288(dword_140404A6C[71738225], "viewmatrix");
    qword_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(10, (__int64)(uintptr_t)sr_mem_1403006e0, (__int64)(uintptr_t)sr_mem_140300830, 0) )
  {
    qword_1404042E0(dword_140404A6C[71738285]);
    dword_140404A6C[71738294] = unk_140404288(dword_140404A6C[71738285], "modelviewprojectionmatrix");
    dword_140404A6C[71738298] = unk_140404288(dword_140404A6C[71738285], "texlod");
    dword_140404A6C[71738302] = unk_140404288(dword_140404A6C[71738285], "tex_color");
    qword_140404308(dword_140404A6C[71738302], 0);
    qword_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(11, (__int64)(uintptr_t)sr_mem_140300dd0, (__int64)(uintptr_t)sr_mem_140300ec0, 0) )
  {
    qword_1404042E0(dword_140404A6C[71738345]);
    dword_140404A6C[71738358] = unk_140404288(dword_140404A6C[71738345], "tex_hdrcolor");
    dword_140404A6C[71738359] = unk_140404288(dword_140404A6C[71738345], "tex_hdrbloom");
    qword_140404308(dword_140404A6C[71738358], 0);
    qword_140404308(dword_140404A6C[71738359], 1);
    qword_1404042E0(0);
  }
  if ( (unsigned int)sub_14004C4E0(12, (__int64)(uintptr_t)sr_mem_1403012a0, (__int64)(uintptr_t)sr_mem_140301390, 0) )
  {
    qword_1404042E0(dword_140404A6C[71738405]);
    dword_140404A6C[71738442] = unk_140404288(dword_140404A6C[71738405], "modelviewprojectionmatrix");
    dword_140404A6C[71738463] = unk_140404288(dword_140404A6C[71738405], "texturematrix");
    dword_140404A6C[71738464] = unk_140404288(dword_140404A6C[71738405], "waterangle");
    dword_140404A6C[71738446] = unk_140404288(dword_140404A6C[71738405], "flags");
    dword_140404A6C[71738447] = unk_140404288(dword_140404A6C[71738405], "tex_color");
    qword_140404308(dword_140404A6C[71738447], 0);
    qword_1404042E0(0);
  }
  v0 = -1;
  do
    ++v0;
  while ( *((_BYTE *)&dword_140404A6C[71741525] + v0) );
  if ( v0 )
  {
    v1 = sub_14020B8D8("shaderoutput.txt", "wb");
    v2 = v1;
    v0 = v1;
    if ( v1 )
    {
      sub_1400920F0(v1, (     char *)&dword_140404A6C[71741525]);
      v0 = sub_14020B9E8(v2);
    }
  }
  return v0; /* native strlen, fopen-failure or fclose RAX */
}
#undef v4
#undef v7
