#include "shared_client.h"


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

//----- (000000014004E8A0) ----------------------------------------------------
__int64            sub_14004E8A0(signed int a1, unsigned int *a2, float *a3, unsigned int a4)
{
  /* src/engine/bullets.c */
  extern unsigned int bullet_create(int type, const float *position, const float *velocity, int player);
  return bullet_create(a1, (const float *)a2, a3, (int)a4);
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183E93530: using guessed type unsigned int;
// 1A8E379D4: using guessed type unsigned int;

