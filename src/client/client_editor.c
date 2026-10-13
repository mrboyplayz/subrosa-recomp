#include "shared_client.h"


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

//----- (0000000140084950) ----------------------------------------------------
void sub_140084950()
{
  if ( !dword_140404A6C[309078286] )
  {
    sr_CSDrawText("Place Building", 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))), 24.0);
    sr_text_draw_recovered((char *)&dword_140404A6C[22 * dword_140404A6C[309078328] + 225368653], 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084A4B */;
    if ( dword_140404A6C[309078326] != -1 )
    {
      sr_text_draw_recovered((char *)&dword_140404A6C[24 * dword_140404A6C[309078326] + 225171851], 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43DC0000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084AAC */;
      sr_text_draw_recovered("/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43E40000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084B0F */;
    }
  }
  if ( dword_140404A6C[309078286] == 1 )
  {
    sr_text_draw_recovered("Select Area", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084B61 */;
    sr_text_draw_recovered("sectors:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[210457991]}) /* 0x140084BAD */;
    sr_text_draw_recovered("type:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D20000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[309078333]}) /* 0x140084BFD */;
    sr_text_draw_recovered("x:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43800000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[309078313]}) /* 0x140084C4D */;
    sr_text_draw_recovered("y:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43880000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[309078314]}) /* 0x140084C9D */;
    sr_text_draw_recovered("z:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43900000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[309078315]}) /* 0x140084CED */;
  }
  if ( dword_140404A6C[309078286] == 2 )
  {
    sr_text_draw_recovered("Street", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084D3F */;
    sr_text_draw_recovered("intersectionnum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[309078330]}) /* 0x140084D8B */;
    sr_text_draw_recovered("streetnum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D20000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[309078332]}) /* 0x140084DDB */;
  }
  if ( dword_140404A6C[309078286] == 3 )
  {
    sr_text_draw_recovered("Mission", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084E2D */;
    sr_text_draw_recovered("numofguards:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[486132853]}) /* 0x140084E79 */;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D4960) ----------------------------------------------------
void sub_1400D4960()
{
  *(_OWORD *)&dword_140404A6C[225391181] = xmmword_140279810;
  dword_140404A6C[225391198] = 1061158912;
  dword_140404A6C[225391197] = 1115684864;
  *(_OWORD *)&dword_140404A6C[225391185] = xmmword_140279710;
  *(_OWORD *)&dword_140404A6C[225391189] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[225391193] = xmmword_140279490;
  sub_14007B2A0((__int64)&dword_140404A6C[225391188], (float *)&dword_140404A6C[225391188], sr_export_float_lane_container(1070141403));
  dword_140404A6C[193070975] = 3;
  *(_QWORD *)&dword_140404A6C[193070976] = 3;
  *(_QWORD *)&dword_140404A6C[193070967] = -1;
  dword_140404A6C[193070974] = -1;
}

// 140279490: using guessed type __int128 xmmword_140279490;
// 140279710: using guessed type __int128 xmmword_140279710;
// 140279810: using guessed type __int128 xmmword_140279810;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16E486848: using guessed type unsigned int;
// 16E486864: using guessed type unsigned int;
// 16E486868: using guessed type unsigned int;
// 16E48686C: using guessed type unsigned int;
// 175FD13A0: using guessed type unsigned int;
// 175FD13B0: using guessed type unsigned int;
// 175FD13C0: using guessed type unsigned int;
// 175FD13D0: using guessed type unsigned int;
// 175FD13E0: using guessed type unsigned int;
// 175FD13E4: using guessed type unsigned int;

//----- (00000001400D4C40) ----------------------------------------------------
void            sub_1400D4C40(unsigned int a1, int a2, int a3, int a4, unsigned int a5, _WORD *a6)
{
  int v6; // edi
  char v7; // r15
  int v8; // esi
  int v10; // ebp
  int v11; // r9d
  char v12; // r12
  char v13; // r13
  signed int v14; // ebx
  unsigned int *v15; // rax
  __int64 v16; // r12
  __int64 v17; // r15
  unsigned int v18; // r13d
  __int64 v19; // rdx

  v6 = a2 >> 3;
  v7 = a4;
  v8 = a3 >> 3;
  v10 = a4 >> 3;
  v11 = 0;
  v12 = a3;
  v13 = a2;
  v14 = -1;
  if ( (int)dword_140404A6C[210457991] > 0 )
  {
    v15 = &dword_140404A6C[210457993];
    do
    {
      if ( *(v15 - 1) == a1 && *v15 == v6 && v15[1] == v8 && v15[2] == v10 )
        v14 = v11;
      ++v11;
      v15 += 3588;
    }
    while ( v11 < (int)dword_140404A6C[210457991] );
    if ( v14 != -1 )
      goto LABEL_12;
  }
  if ( (int)dword_140404A6C[210457991] < 4096 )
  {
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992]), 0, 0x3810u);
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992] = a1;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457993] = v6;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457994] = v8;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457995] = v10;
    v14 = dword_140404A6C[210457991]++;
    if ( v14 != -1 )
    {
LABEL_12:
      v16 = v12 & 7;
      v17 = v7 & 7;
      v18 = v13 & 7;
      dword_140404A6C[3588 * v14 + 210457996 + 64 * (_DWORD)v16 + 8 * (_DWORD)v17 + v18] = a5;
      v19 = 2 * (v18 + 897LL * v14 + 8 * (v17 + 8 * v16));
      LOWORD(dword_140404A6C[2 * v19 + 210458508]) = *a6;
      HIWORD(dword_140404A6C[2 * v19 + 210458508]) = a6[1];
      LOWORD(dword_140404A6C[2 * v19 + 210458509]) = a6[2];
      HIWORD(dword_140404A6C[2 * v19 + 210458509]) = a6[3];
      LOWORD(dword_140404A6C[2 * v19 + 210458510]) = a6[4];
      HIWORD(dword_140404A6C[2 * v19 + 210458510]) = a6[5];
      LOWORD(dword_140404A6C[2 * v19 + 210458511]) = a6[6];
      HIWORD(dword_140404A6C[2 * v19 + 210458511]) = a6[7];
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1726DA088: using guessed type unsigned int;

//----- (00000001400D4E50) ----------------------------------------------------
void            sub_1400D4E50(unsigned int a1, int a2, int a3, int a4, unsigned int a5)
{
  int v5; // esi
  int v6; // ebx
  char v7; // r14
  int v8; // edi
  int v10; // r9d
  char v11; // r15
  char v12; // r12
  unsigned int v13; // r10d
  unsigned int *v14; // rax

  v5 = a4 >> 3;
  v6 = a2 >> 3;
  v7 = a4;
  v8 = a3 >> 3;
  v10 = 0;
  v11 = a3;
  v12 = a2;
  v13 = -1;
  if ( (int)dword_140404A6C[210457991] > 0 )
  {
    v14 = &dword_140404A6C[210457993];
    do
    {
      if ( *(v14 - 1) == a1 && *v14 == v6 && v14[1] == v8 && v14[2] == v5 )
        v13 = v10;
      ++v10;
      v14 += 3588;
    }
    while ( v10 < (int)dword_140404A6C[210457991] );
    if ( v13 != -1 )
      goto LABEL_12;
  }
  if ( (int)dword_140404A6C[210457991] < 4096 )
  {
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992]), 0, 0x3810u);
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992] = a1;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457993] = v6;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457994] = v8;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457995] = v5;
    v13 = dword_140404A6C[210457991]++;
    if ( v13 != -1 )
LABEL_12:
      dword_140404A6C[3588 * v13 + 210461068 + 64 * (v11 & 7) + 8 * (v7 & 7) + (v12 & 7)] = a5;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1726DA088: using guessed type unsigned int;

//----- (00000001400D4FC0) ----------------------------------------------------
__int64            sub_1400D4FC0(signed int a1, int a2, signed int a3, int a4, unsigned int a5)
{
  int v5; // ebx
  int v7; // edi
  int v8; // ecx
  int v10; // esi
  unsigned int v13; // r8d
  unsigned int *v14; // rax
  __int64 v15; // r9
  unsigned int v16; // edx
  unsigned int v17; // r11d
  unsigned __int64 v18; // rbx
  unsigned int v19; // r8d
  __int64 v20; // r10
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D4FC0[80];
#define v22 (*(__int64 (*))(void *)(sr_frame_1400D4FC0 + 0)) /* [rsp+0h] */
#define v23 (*(unsigned int (*))(void *)(sr_frame_1400D4FC0 + 32)) /* [rsp+20h] */
#define v24 (*(__int16 * (*))(void *)(sr_frame_1400D4FC0 + 40)) /* [rsp+28h] */
#define v25 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 48)) /* [rsp+30h] */
#define v26 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 50)) /* [rsp+32h] */
#define v27 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 52)) /* [rsp+34h] */
#define v28 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 54)) /* [rsp+36h] */
#define v29 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 56)) /* [rsp+38h] */
#define v30 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 58)) /* [rsp+3Ah] */
#define v31 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 60)) /* [rsp+3Ch] */
#define v32 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 62)) /* [rsp+3Eh] */
#define v33 (*(__int64 (*))(void *)(sr_frame_1400D4FC0 + 64)) /* [rsp+40h] */

  v5 = a2 >> 3;
  v7 = a3 >> 3;
  v8 = 0;
  v10 = a4 >> 3;
  v13 = -1;
  if ( (int)dword_140404A6C[210457991] > 0 )
  {
    v14 = &dword_140404A6C[210457993];
    do
    {
      if ( *(v14 - 1) == a1 && *v14 == v5 && v14[1] == v7 && v14[2] == v10 )
        v13 = v8;
      ++v8;
      v14 += 3588;
    }
    while ( v8 < (int)dword_140404A6C[210457991] );
    if ( v13 != -1 )
      goto LABEL_12;
  }
  if ( (int)dword_140404A6C[210457991] < 4096 )
  {
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992]), 0, 0x3810u);
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992] = a1;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457993] = v5;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457994] = v7;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457995] = v10;
    v13 = dword_140404A6C[210457991]++;
    if ( v13 != -1 )
    {
LABEL_12:
      v15 = a5 & 0xFFF;
      dword_140404A6C[3588 * v13 + 210460556 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)] = a5;
      v16 = HIBYTE(a5) & 3;
      v17 = dword_140404A6C[4242 * v15 + 193082775];
      v18 = (((unsigned __int64)a5 >> 16) & 0x1F) - 1;
      v19 = -v16 & 3;
      v20 = 16968 * v15 + 528 * v18;
      v25 = *(_WORD *)((char *)&dword_140404A6C[193082905] + v20);
      if ( (v17 & 0xE0000000) == 0x40000000 )
      {
        v26 = *((_WORD *)&dword_140404A6C[4242 * v15 + 193082905 + 132 * v18] + v19 + 1);
        v27 = *((_WORD *)&dword_140404A6C[4242 * v15 + 193082905 + 132 * v18] + (((unsigned __int8)v19 + 1) & 3) + 1);
        v28 = *((_WORD *)&dword_140404A6C[4242 * v15 + 193082905 + 132 * v18] + (((unsigned __int8)v19 - 2) & 3) + 1);
        v29 = *((_WORD *)&dword_140404A6C[4242 * v15 + 193082905 + 132 * v18] + (((unsigned __int8)v19 - 1) & 3) + 1);
        v30 = *(_WORD *)((char *)&dword_140404A6C[193082907] + v20 + 2);
        v31 = *(_WORD *)((char *)&dword_140404A6C[193082908] + v20);
        v32 = *(_WORD *)((char *)&dword_140404A6C[193082908] + v20 + 2);
        v24 = &v25;
        v23 = 0x40000000;
      }
      else
      {
        v26 = *(_WORD *)((char *)&dword_140404A6C[193082905] + v20 + 2);
        v27 = *(_WORD *)((char *)&dword_140404A6C[193082906] + v20);
        v28 = *(_WORD *)((char *)&dword_140404A6C[193082906] + v20 + 2);
        v29 = *(_WORD *)((char *)&dword_140404A6C[193082907] + v20);
        v30 = *(_WORD *)((char *)&dword_140404A6C[193082907] + v20 + 2);
        v31 = *(_WORD *)((char *)&dword_140404A6C[193082908] + v20);
        v32 = *(_WORD *)((char *)&dword_140404A6C[193082908] + v20 + 2);
        v24 = &v25;
        v23 = v17 + v16;
      }
      sub_14000F830(a1, a2, a3, a4, v23, v24);
    }
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32
#undef v33

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1726DA088: using guessed type unsigned int;

//----- (00000001400D52E0) ----------------------------------------------------
__int64            sub_1400D52E0(unsigned int a1, int a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // r9d
  int v7; // edi
  int v9; // esi
  __int64 result; // rax
  unsigned int *v11; // rcx

  v5 = a2 >> 3;
  v6 = 0;
  v7 = a3 >> 3;
  v9 = a4 >> 3;
  result = 0xFFFFFFFFLL;
  if ( (int)dword_140404A6C[210457991] <= 0 )
    goto LABEL_10;
  v11 = &dword_140404A6C[210457993];
  do
  {
    if ( *(v11 - 1) == a1 && *v11 == v5 && v11[1] == v7 && v11[2] == v9 )
      result = (unsigned int)v6;
    ++v6;
    v11 += 3588;
  }
  while ( v6 < (int)dword_140404A6C[210457991] );
  if ( (_DWORD)result == -1 )
  {
LABEL_10:
    if ( (int)dword_140404A6C[210457991] < 4096 )
    {
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992]), 0, 0x3810u);
      dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992] = a1;
      dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457993] = v5;
      dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457994] = v7;
      dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457995] = v9;
      return dword_140404A6C[210457991]++;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1726DA088: using guessed type unsigned int;

//----- (00000001400D5400) ----------------------------------------------------
void            sub_1400D5400(int a1, int a2, int a3, int a4)
{
  char v4; // si
  int v5; // ebx
  int v6; // r8d
  int v7; // r10d
  unsigned int *v8; // rax
  __int64 v9; // r11
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int *v13; // r10
  __int64 v14; // rdx
  unsigned int *v15; // r8
  __int64 v16; // rcx
  unsigned int *v17; // rax

  v4 = a3;
  v5 = a3 >> 3;
  v6 = 0;
  v7 = -1;
  if ( (int)dword_140404A6C[210457991] > 0 )
  {
    v8 = &dword_140404A6C[210457993];
    do
    {
      if ( *(v8 - 1) == a1 && *v8 == a2 >> 3 && v8[1] == v5 && v8[2] == a4 >> 3 )
        v7 = v6;
      ++v6;
      v8 += 3588;
    }
    while ( v6 < (int)dword_140404A6C[210457991] );
    if ( v7 != -1 )
    {
      v9 = 3588LL * v7;
      v10 = (a4 & 7) + 8 * (v4 & 7);
      v11 = 0;
      v12 = 3588LL * v7 + (a2 & 7u) + 8 * v10;
      v13 = &dword_140404A6C[v9 + 210457996];
      dword_140404A6C[v12 + 210457996] = 0;
LABEL_11:
      v14 = 0;
      v15 = v13;
LABEL_12:
      v16 = 0;
      v17 = v15;
      while ( !*v17 )
      {
        ++v16;
        ++v17;
        if ( v16 >= 8 )
        {
          ++v14;
          v15 += 8;
          if ( v14 < 8 )
            goto LABEL_12;
          ++v11;
          v13 += 64;
          if ( v11 >= 8 )
          {
            --dword_140404A6C[210457991];
            sub_1401FC920(
              (__m128i *)&dword_140404A6C[v9 + 210457992],
              (     __m128i *)&dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992],
              0x3810u);
            return;
          }
          goto LABEL_11;
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1726DA088: using guessed type unsigned int;

//----- (00000001400D5560) ----------------------------------------------------
void            sub_1400D5560(int a1)
{
  __int64 v1; // r8
  unsigned int v2; // ecx
  signed int v3; // eax
  int v4; // r10d
  signed int v5; // r9d
  __int64 v6; // r11
  unsigned int *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int *v11; // rax

  v1 = a1;
  if ( a1 >= 0 )
  {
    v2 = dword_140404A6C[193070979];
    if ( (int)v1 < (int)dword_140404A6C[193070979] )
    {
      v3 = dword_140404A6C[193074052];
      v4 = 0;
      v5 = 0;
      if ( (int)dword_140404A6C[193074052] > 0 )
      {
        v6 = 0;
        v7 = &dword_140404A6C[193074053];
        do
        {
          if ( *v7 == (_DWORD)v1 || v7[1] == (_DWORD)v1 )
          {
            if ( v6 >= 0 )
            {
              if ( v5 >= v3 )
                break;
              dword_140404A6C[193074052] = v3 - 1;
              v8 = 13LL * (v3 - 1);
              *(_OWORD *)v7 = *(_OWORD *)&dword_140404A6C[v8 + 193074053];
              *((_OWORD *)v7 + 1) = *(_OWORD *)&dword_140404A6C[v8 + 193074057];
              *((_OWORD *)v7 + 2) = *(_OWORD *)&dword_140404A6C[v8 + 193074061];
              v7[12] = dword_140404A6C[v8 + 193074065];
              v3 = dword_140404A6C[193074052];
            }
          }
          else
          {
            ++v5;
            ++v6;
            v7 += 13;
          }
        }
        while ( v5 < v3 );
        v2 = dword_140404A6C[193070979];
      }
      dword_140404A6C[193070979] = v2 - 1;
      v9 = (int)(v2 - 1);
      v10 = 3 * v1;
      *(_QWORD *)&dword_140404A6C[v10 + 193070980] = *(_QWORD *)&dword_140404A6C[3 * v9 + 193070980];
      dword_140404A6C[v10 + 193070982] = dword_140404A6C[3 * v9 + 193070982];
      if ( (int)dword_140404A6C[193074052] > 0 )
      {
        v11 = &dword_140404A6C[193074054];
        do
        {
          if ( *(v11 - 1) == dword_140404A6C[193070979] )
            *(v11 - 1) = v1;
          if ( *v11 == dword_140404A6C[193070979] )
            *v11 = v1;
          ++v4;
          v11 += 13;
        }
        while ( v4 < (int)dword_140404A6C[193074052] );
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16E486878: using guessed type unsigned int;
// 16E48987C: using guessed type unsigned int;

//----- (00000001400D5690) ----------------------------------------------------
void            sub_1400D5690(signed int a1, signed int a2, signed int a3, signed int a4)
{
  int v5; // ebx
  int v7; // r8d
  int v10; // r10d
  unsigned int *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // rcx
  unsigned int *v15; // r10
  __int64 v16; // rdx
  unsigned int *v17; // r8
  __int64 v18; // rcx
  unsigned int *v19; // rax

  v5 = a3 >> 3;
  v7 = 0;
  v10 = -1;
  if ( (int)dword_140404A6C[210457991] > 0 )
  {
    v11 = &dword_140404A6C[210457993];
    do
    {
      if ( *(v11 - 1) == a1 && *v11 == a2 >> 3 && v11[1] == v5 && v11[2] == a4 >> 3 )
        v10 = v7;
      ++v7;
      v11 += 3588;
    }
    while ( v7 < (int)dword_140404A6C[210457991] );
    if ( v10 != -1 )
    {
      v12 = 0;
      v13 = 3588LL * v10;
      v14 = 3588LL * v10 + (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7u));
      v15 = &dword_140404A6C[v13 + 210460556];
      dword_140404A6C[v14 + 210460556] = 0;
LABEL_11:
      v16 = 0;
      v17 = v15;
LABEL_12:
      v18 = 0;
      v19 = v17;
      while ( !*(v19 - 2560) && !*v19 && !v19[512] )
      {
        ++v18;
        ++v19;
        if ( v18 >= 8 )
        {
          ++v16;
          v17 += 8;
          if ( v16 < 8 )
            goto LABEL_12;
          ++v12;
          v15 += 64;
          if ( v12 >= 8 )
          {
            --dword_140404A6C[210457991];
            sub_1401FC920(
              (__m128i *)&dword_140404A6C[v13 + 210457992],
              (     __m128i *)&dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992],
              0x3810u);
            break;
          }
          goto LABEL_11;
        }
      }
      sub_140017AC0(a1, a2, a3, a4, 0);
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1726DA088: using guessed type unsigned int;

//----- (00000001400D5820) ----------------------------------------------------
__m128i *           sub_1400D5820(__int64 a1, int a2)
{
  __int64 v2; // r11
  __int64 v3; // r9
  unsigned int *v4; // r10
  __int64 v5; // rdx
  __m128i *v6; // r8
  __int64 v7; // rcx
  __m128i *result; // rax

  v2 = 3588LL * a2;
  v3 = 0;
  v4 = &dword_140404A6C[v2 + 210460556];
LABEL_2:
  v5 = 0;
  v6 = (__m128i *)v4;
LABEL_3:
  v7 = 0;
  result = v6;
  while ( !SR_VEC_LANES(128, result[-640], i32)[0] && !SR_VEC_PTR_LANES(128, result, i32)[0] && !SR_VEC_LANES(128, result[128], i32)[0] )
  {
    ++v7;
    result = (__m128i *)((char *)result + 4);
    if ( v7 >= 8 )
    {
      ++v5;
      v6 += 2;
      if ( v5 < 8 )
        goto LABEL_3;
      ++v3;
      v4 += 64;
      if ( v3 >= 8 )
      {
        --dword_140404A6C[210457991];
        return sub_1401FC920(
                 (__m128i *)&dword_140404A6C[v2 + 210457992],
                 (     __m128i *)&dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992],
                 0x3810u);
      }
      goto LABEL_2;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1726DA088: using guessed type unsigned int;

//----- (00000001400D5950) ----------------------------------------------------
__int64            sub_1400D5950(int a1, int a2, int a3, int a4)
{
  char v4; // si
  int v5; // edi
  int v6; // r9d
  int v7; // r10d
  unsigned int *v8; // rax

  v4 = a4;
  v5 = a4 >> 3;
  v6 = 0;
  v7 = -1;
  if ( (int)dword_140404A6C[210457991] <= 0 )
    return 0;
  v8 = &dword_140404A6C[210457993];
  do
  {
    if ( *(v8 - 1) == a1 && *v8 == a2 >> 3 && v8[1] == a3 >> 3 && v8[2] == v5 )
      v7 = v6;
    ++v6;
    v8 += 3588;
  }
  while ( v6 < (int)dword_140404A6C[210457991] );
  if ( v7 == -1 )
    return 0;
  else
    return dword_140404A6C[3588 * v7 + 210457996 + 64 * (a3 & 7) + 8 * (v4 & 7) + (a2 & 7)];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140104EA0) ----------------------------------------------------
__int64            sub_140104EA0(int a1, __int64 a2, double a3)
{
  float v3; // xmm6_4
  __int64 v4; // rdi
  double v5; // xmm7_8
  __int64 v6; // rbx
  __m128 v7; // xmm0
  unsigned int v8; // xmm1_4
  __int64 v9; // rbx
  __m128 v10; // xmm0
  __int64 v11; // rbx
  __m128 v12; // xmm0
  unsigned int v13; // xmm1_4
  __int64 v14; // rbx
  __m128 v15; // xmm0
  unsigned int v16; // xmm1_4
  __int64 result; // rax
  float v18; // xmm2_4
  float v19; // xmm8_4
  float v20; // xmm0_4
  float v21; // xmm1_4

  v3 = 0.25;
  if ( BYTE1(dword_140404A6C[284024821]) )
    v3 = 1.0;
  if ( LOBYTE(dword_140404A6C[284024821]) )
  {
    if ( BYTE1(dword_140404A6C[284024821]) )
      v3 = v3 * 16.0;
    else
      v3 = v3 * 0.125;
  }
  v4 = a1;
  v5 = v3;
  if ( BYTE2(dword_140404A6C[284024771]) )
  {
    v6 = 7LL * a1;
    v7 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[v6 + 284024384], a2, a3));
    a3 = *(double *)SR_VEC_LANES(128, v7, u64) * v5 + *(float *)&dword_140404A6C[v6 + 284024381];
    *(float *)&v8 = a3;
    dword_140404A6C[v6 + 284024381] = v8;
    *(float *)&dword_140404A6C[v6 + 284024383] = *(float *)&dword_140404A6C[v6 + 284024383]
                                               - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v7, (__m128d)v7, 1), f64)[0] * v5;
  }
  if ( BYTE2(dword_140404A6C[284024770]) )
  {
    v9 = 7 * v4;
    v10 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381] - *(double *)SR_VEC_LANES(128, v10, u64) * v5;
    SR_VEC_LANES(128, v10, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v10, (__m128d)v10, 1), f64)[0] * v5
                    + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    *(float *)&dword_140404A6C[v9 + 284024381] = a3;
    dword_140404A6C[v9 + 284024383] = SR_VEC_LANES(128, v10, i32)[0];
  }
  if ( LOBYTE(dword_140404A6C[284024766]) )
  {
    v11 = 7 * v4;
    v12 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381]
       - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v12, (__m128d)v12, 1), f64)[0] * v5;
    *(float *)&v13 = a3;
    dword_140404A6C[v11 + 284024381] = v13;
    *(float *)&dword_140404A6C[v11 + 284024383] = *(float *)&dword_140404A6C[v11 + 284024383]
                                                - *(double *)SR_VEC_LANES(128, v12, u64) * v5;
  }
  if ( HIBYTE(dword_140404A6C[284024766]) )
  {
    v14 = 7 * v4;
    v15 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    *(float *)&v16 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v15, (__m128d)v15, 1), f64)[0] * v5
                   + *(float *)&dword_140404A6C[7 * v4 + 284024381];
    SR_VEC_LANES(128, v15, f32)[0] = *(double *)SR_VEC_LANES(128, v15, u64) * v5 + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    dword_140404A6C[v14 + 284024381] = v16;
    dword_140404A6C[v14 + 284024383] = SR_VEC_LANES(128, v15, i32)[0];
  }
  if ( LOBYTE(dword_140404A6C[284024770]) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = v3 + *(float *)&dword_140404A6C[7 * v4 + 284024382];
  if ( BYTE1(dword_140404A6C[284024772]) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = *(float *)&dword_140404A6C[7 * v4 + 284024382] - v3;
  result = 7 * v4;
  v18 = *(float *)&dword_140404A6C[7 * v4 + 284024386];
  v19 = 1.0 - v18;
  if ( dword_140404A6C[284024634] )
  {
    *(float *)&dword_140404A6C[result + 284024384] = (float)((float)(*(float *)&dword_140404A6C[284024599] * v19)
                                                           * 0.0031250000465661287)
                                                   + *(float *)&dword_140404A6C[result + 284024384];
    *(float *)&dword_140404A6C[result + 284024385] = (float)((float)(*(float *)&dword_140404A6C[284024600] * v19)
                                                           * 0.0031250000465661287)
                                                   + *(float *)&dword_140404A6C[result + 284024385];
  }
  v20 = 0.0;
  v21 = (float)((float)(int)dword_140404A6C[137297772] * 0.125) + *(float *)&dword_140404A6C[result + 284024387];
  if ( v21 >= 0.0 )
  {
    v20 = (float)((float)(int)dword_140404A6C[137297772] * 0.125) + *(float *)&dword_140404A6C[result + 284024387];
    if ( v21 > 0.875 )
      v20 = 0.875;
  }
  *(float *)&dword_140404A6C[result + 284024387] = v20;
  *(float *)&dword_140404A6C[result + 284024386] = (float)((float)(v20 - v18) * 0.0625) + v18;
  return result * 4;
}

// 140104F7C: variable 'a2' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140105180) ----------------------------------------------------
__int64            sub_140105180(int a1, __int64 a2, double a3)
{
  float v3; // xmm6_4
  __int64 v4; // rdi
  double v5; // xmm7_8
  __int64 v6; // rbx
  __m128 v7; // xmm0
  unsigned int v8; // xmm1_4
  __int64 v9; // rbx
  __m128 v10; // xmm0
  __int64 v11; // rbx
  __m128 v12; // xmm0
  unsigned int v13; // xmm1_4
  __int64 v14; // rbx
  __m128 v15; // xmm0
  unsigned int v16; // xmm1_4
  __int64 result; // rax
  bool v18; // zf
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm2_4

  v3 = 0.25;
  if ( BYTE1(dword_140404A6C[284024821]) )
    v3 = 1.0;
  if ( LOBYTE(dword_140404A6C[284024821]) )
    v3 = v3 * 0.25;
  v4 = a1;
  v5 = v3;
  if ( BYTE2(dword_140404A6C[284024771]) )
  {
    v6 = 7LL * a1;
    v7 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[v6 + 284024384], a2, a3));
    a3 = *(double *)SR_VEC_LANES(128, v7, u64) * v5 + *(float *)&dword_140404A6C[v6 + 284024381];
    *(float *)&v8 = a3;
    dword_140404A6C[v6 + 284024381] = v8;
    *(float *)&dword_140404A6C[v6 + 284024383] = *(float *)&dword_140404A6C[v6 + 284024383]
                                               - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v7, (__m128d)v7, 1), f64)[0] * v5;
  }
  if ( BYTE2(dword_140404A6C[284024770]) )
  {
    v9 = 7 * v4;
    v10 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381] - *(double *)SR_VEC_LANES(128, v10, u64) * v5;
    SR_VEC_LANES(128, v10, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v10, (__m128d)v10, 1), f64)[0] * v5
                    + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    *(float *)&dword_140404A6C[v9 + 284024381] = a3;
    dword_140404A6C[v9 + 284024383] = SR_VEC_LANES(128, v10, i32)[0];
  }
  if ( LOBYTE(dword_140404A6C[284024766]) )
  {
    v11 = 7 * v4;
    v12 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381]
       - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v12, (__m128d)v12, 1), f64)[0] * v5;
    *(float *)&v13 = a3;
    dword_140404A6C[v11 + 284024381] = v13;
    *(float *)&dword_140404A6C[v11 + 284024383] = *(float *)&dword_140404A6C[v11 + 284024383]
                                                - *(double *)SR_VEC_LANES(128, v12, u64) * v5;
  }
  if ( HIBYTE(dword_140404A6C[284024766]) )
  {
    v14 = 7 * v4;
    v15 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    *(float *)&v16 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v15, (__m128d)v15, 1), f64)[0] * v5
                   + *(float *)&dword_140404A6C[7 * v4 + 284024381];
    SR_VEC_LANES(128, v15, f32)[0] = *(double *)SR_VEC_LANES(128, v15, u64) * v5 + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    dword_140404A6C[v14 + 284024381] = v16;
    dword_140404A6C[v14 + 284024383] = SR_VEC_LANES(128, v15, i32)[0];
  }
  if ( LOBYTE(dword_140404A6C[284024770]) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = v3 + *(float *)&dword_140404A6C[7 * v4 + 284024382];
  if ( BYTE1(dword_140404A6C[284024772]) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = *(float *)&dword_140404A6C[7 * v4 + 284024382] - v3;
  result = 7 * v4;
  v18 = dword_140404A6C[73991627] == 0;
  v19 = *(float *)&dword_140404A6C[7 * v4 + 284024385];
  *(float *)&dword_140404A6C[7 * v4 + 284024384] = (float)(*(float *)&dword_140404A6C[284024599] * 0.0031250000465661287)
                                                 + *(float *)&dword_140404A6C[7 * v4 + 284024384];
  if ( v18 )
    v20 = (float)(*(float *)&dword_140404A6C[284024600] * 0.0031250000465661287) + v19;
  else
    v20 = v19 - (float)(*(float *)&dword_140404A6C[284024600] * 0.0031250000465661287);
  *(float *)&dword_140404A6C[result + 284024385] = v20;
  if ( v20 >= -1.570796326795 )
  {
    if ( v20 > 1.570796326795 )
      dword_140404A6C[result + 284024385] = 1070141403;
  }
  else
  {
    dword_140404A6C[result + 284024385] = -1077342245;
  }
  v21 = 2.0;
  v22 = *(float *)&dword_140404A6C[result + 284024387] - (float)(int)dword_140404A6C[137297772];
  if ( v22 >= 2.0 )
  {
    v21 = *(float *)&dword_140404A6C[result + 284024387] - (float)(int)dword_140404A6C[137297772];
    if ( v22 > 32.0 )
      v21 = 32.0;
  }
  *(float *)&dword_140404A6C[result + 284024387] = v21;
  *(float *)&dword_140404A6C[result + 284024386] = (float)((float)(v21 - *(float *)&dword_140404A6C[result + 284024386])
                                                         * 0.0625)
                                                 + *(float *)&dword_140404A6C[result + 284024386];
  return result * 4;
}

// 140105240: variable 'a2' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140105470) ----------------------------------------------------
__int64            sub_140105470(int a1, __int64 a2, double a3)
{
  float v3; // xmm6_4
  __int64 v4; // rdi
  double v5; // xmm8_8
  __int64 v6; // rbx
  __m128 v7; // xmm0
  unsigned int v8; // xmm1_4
  __int64 v9; // rbx
  __m128 v10; // xmm0
  __int64 v11; // rbx
  __m128 v12; // xmm0
  unsigned int v13; // xmm1_4
  __int64 v14; // rbx
  __m128 v15; // xmm0
  unsigned int v16; // xmm1_4
  __int64 result; // rax
  bool v18; // zf
  float v19; // xmm7_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4

  v3 = 0.25;
  if ( BYTE1(dword_140404A6C[284024821]) )
    v3 = 1.0;
  if ( LOBYTE(dword_140404A6C[284024821]) )
    v3 = v3 * 0.25;
  v4 = a1;
  v5 = v3;
  if ( BYTE2(dword_140404A6C[284024771]) )
  {
    v6 = 7LL * a1;
    v7 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[v6 + 284024384], a2, a3));
    a3 = *(double *)SR_VEC_LANES(128, v7, u64) * v5 + *(float *)&dword_140404A6C[v6 + 284024381];
    *(float *)&v8 = a3;
    dword_140404A6C[v6 + 284024381] = v8;
    *(float *)&dword_140404A6C[v6 + 284024383] = *(float *)&dword_140404A6C[v6 + 284024383]
                                               - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v7, (__m128d)v7, 1), f64)[0] * v5;
  }
  if ( BYTE2(dword_140404A6C[284024770]) )
  {
    v9 = 7 * v4;
    v10 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381] - *(double *)SR_VEC_LANES(128, v10, u64) * v5;
    SR_VEC_LANES(128, v10, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v10, (__m128d)v10, 1), f64)[0] * v5
                    + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    *(float *)&dword_140404A6C[v9 + 284024381] = a3;
    dword_140404A6C[v9 + 284024383] = SR_VEC_LANES(128, v10, i32)[0];
  }
  if ( LOBYTE(dword_140404A6C[284024766]) )
  {
    v11 = 7 * v4;
    v12 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * v4 + 284024381]
       - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v12, (__m128d)v12, 1), f64)[0] * v5;
    *(float *)&v13 = a3;
    dword_140404A6C[v11 + 284024381] = v13;
    *(float *)&dword_140404A6C[v11 + 284024383] = *(float *)&dword_140404A6C[v11 + 284024383]
                                                - *(double *)SR_VEC_LANES(128, v12, u64) * v5;
  }
  if ( HIBYTE(dword_140404A6C[284024766]) )
  {
    v14 = 7 * v4;
    v15 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * v4 + 284024384], a2, a3));
    *(float *)&v16 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v15, (__m128d)v15, 1), f64)[0] * v5
                   + *(float *)&dword_140404A6C[7 * v4 + 284024381];
    SR_VEC_LANES(128, v15, f32)[0] = *(double *)SR_VEC_LANES(128, v15, u64) * v5 + *(float *)&dword_140404A6C[7 * v4 + 284024383];
    dword_140404A6C[v14 + 284024381] = v16;
    dword_140404A6C[v14 + 284024383] = SR_VEC_LANES(128, v15, i32)[0];
  }
  if ( LOBYTE(dword_140404A6C[284024770]) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = v3 + *(float *)&dword_140404A6C[7 * v4 + 284024382];
  if ( BYTE1(dword_140404A6C[284024772]) )
    *(float *)&dword_140404A6C[7 * v4 + 284024382] = *(float *)&dword_140404A6C[7 * v4 + 284024382] - v3;
  result = 7 * v4;
  v18 = dword_140404A6C[73991627] == 0;
  v19 = 1.0 - *(float *)&dword_140404A6C[7 * v4 + 284024386];
  v20 = *(float *)&dword_140404A6C[7 * v4 + 284024385];
  *(float *)&dword_140404A6C[7 * v4 + 284024384] = (float)((float)(*(float *)&dword_140404A6C[284024599] * v19)
                                                         * 0.0031250000465661287)
                                                 + *(float *)&dword_140404A6C[7 * v4 + 284024384];
  if ( v18 )
    v21 = (float)((float)(*(float *)&dword_140404A6C[284024600] * v19) * 0.0031250000465661287) + v20;
  else
    v21 = v20 - (float)((float)(*(float *)&dword_140404A6C[284024600] * v19) * 0.0031250000465661287);
  v22 = (float)(int)dword_140404A6C[137297772];
  *(float *)&dword_140404A6C[result + 284024385] = v21;
  v23 = 0.0;
  v24 = (float)(v22 * 0.125) + *(float *)&dword_140404A6C[result + 284024387];
  if ( v24 >= 0.0 )
  {
    v23 = v24;
    if ( v24 > 0.875 )
      v23 = 0.875;
  }
  *(float *)&dword_140404A6C[result + 284024387] = v23;
  *(float *)&dword_140404A6C[result + 284024386] = (float)((float)(v23 - *(float *)&dword_140404A6C[result + 284024386])
                                                         * 0.0625)
                                                 + *(float *)&dword_140404A6C[result + 284024386];
  return result * 4;
}

// 14010553C: variable 'a2' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

