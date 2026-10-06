#include "shared_client.h"

// 1400BF580: conditional instruction was optimized away because edi.4==D
// 1400C1E41: variable 'v376' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 16B27ECFC: using guessed type unsigned int;
// 18399E2D8: using guessed type unsigned int;
// 18399E3A4: using guessed type unsigned int;
// 18399E404: using guessed type unsigned int;
// 18399E4D0: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFCD4: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400C2210) ----------------------------------------------------
unsigned __int64 sub_1400C2210()
{
  unsigned __int64 result; // rax
  __int64 v1; // rdi
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm7_4
  float v11; // xmm10_4
  float v12; // xmm14_4
  float v13; // xmm8_4
  float v14; // xmm11_4
  float v15; // xmm15_4
  float v16; // xmm9_4
  __int64 v17; // r8
  float v18; // xmm12_4
  __int64 v19; // rax
  float v20; // xmm2_4
  float v21; // xmm5_4
  float v22; // xmm3_4
  float v23; // xmm6_4
  unsigned int v24; // xmm4_4
  float v25; // xmm0_4
  unsigned int v26; // xmm5_4
  float v27; // xmm1_4
  unsigned int v28; // xmm6_4
  int v29; // ecx
  unsigned int v30; // xmm3_4
  float v31; // xmm2_4
  unsigned int v32; // xmm1_4
  float v33; // xmm0_4
  unsigned int v34; // xmm0_4
  __int128 v35; // xmm0
  __int128 v36; // xmm0
  float v37; // xmm4_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  int v40; // ebp
  unsigned int *v41; // rsi
  __int64 v42; // r14
  float *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rax
  float v46; // xmm7_4
  float v47; // xmm8_4
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm6_4
  float v51; // xmm9_4
  float v52; // xmm10_4
  float v53; // xmm11_4
  float v54; // xmm12_4
  float v55; // xmm3_4
  float v56; // xmm1_4
  float v57; // xmm2_4
  __int64 v58; // rcx
  float v59; // xmm7_4
  float v60; // xmm8_4
  float v61; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C2210[352];
#define v62 (*(float (*))(void *)(sr_frame_1400C2210 + 0)) /* [rsp+20h] */
#define v63 (*(float (*))(void *)(sr_frame_1400C2210 + 4)) /* [rsp+24h] */
#define v64 (*(float (*))(void *)(sr_frame_1400C2210 + 8)) /* [rsp+28h] */
#define v65 (*(float (*))(void *)(sr_frame_1400C2210 + 12)) /* [rsp+2Ch] */
#define v66 (*(float (*))(void *)(sr_frame_1400C2210 + 16)) /* [rsp+30h] */
#define v67 (*(float (*))(void *)(sr_frame_1400C2210 + 20)) /* [rsp+34h] */
#define v68 (*(float (*))(void *)(sr_frame_1400C2210 + 24)) /* [rsp+38h] */
#define v69 (*(float (*))(void *)(sr_frame_1400C2210 + 28)) /* [rsp+3Ch] */
#define v70 (*(float (*))(void *)(sr_frame_1400C2210 + 32)) /* [rsp+40h] */
#define v71 (*(float (*))(void *)(sr_frame_1400C2210 + 36)) /* [rsp+44h] */
#define v72 (*(float (*))(void *)(sr_frame_1400C2210 + 40)) /* [rsp+48h] */
#define v73 (*(float (*))(void *)(sr_frame_1400C2210 + 44)) /* [rsp+4Ch] */
#define v74 (*(float (*))(void *)(sr_frame_1400C2210 + 48)) /* [rsp+50h] */
#define v75 (*(float (*))(void *)(sr_frame_1400C2210 + 52)) /* [rsp+54h] */
#define v76 (*(float (*))(void *)(sr_frame_1400C2210 + 56)) /* [rsp+58h] */
#define v77 (*(float (*))(void *)(sr_frame_1400C2210 + 60)) /* [rsp+5Ch] */
#define v78 (*(__int64 (*))(void *)(sr_frame_1400C2210 + 64)) /* [rsp+60h] */
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_1400C2210 + 312)) /* [rsp+158h] */
#define v80 (*(float (*))(void *)(sr_frame_1400C2210 + 320)) /* [rsp+160h] */
#define v81 (*(float (*))(void *)(sr_frame_1400C2210 + 328)) /* [rsp+168h] */
#define v82 (*(float (*))(void *)(sr_frame_1400C2210 + 336)) /* [rsp+170h] */
#define v83 (*(float (*))(void *)(sr_frame_1400C2210 + 344)) /* [rsp+178h] */

  result = (unsigned __int64)&retaddr;
  v1 = 0;
  v2 = 256;
  v3 = 0;
  v78 = 256;
  do
  {
    if ( dword_140404A6C[v1 + 280651303] )
    {
      v4 = (int)dword_140404A6C[v1 + 280651313];
      if ( (_DWORD)v4 == -1 )
      {
        dword_140404A6C[v1 + 280651335] = dword_140404A6C[v1 + 280651440];
        dword_140404A6C[v1 + 280651336] = dword_140404A6C[v1 + 280651441];
        result = dword_140404A6C[v1 + 280651442];
        dword_140404A6C[v1 + 280651337] = result;
      }
      else
      {
        v5 = (int)dword_140404A6C[v1 + 280651305];
        if ( (_DWORD)v5 != -1 )
        {
          if ( (dword_140404A6C[3597 * v5 + 71856325] & 0x800) != 0 )
          {
            v6 = dword_140404A6C[v1 + 280651322];
            if ( v6 < 30 )
              dword_140404A6C[v1 + 280651322] = v6 + 1;
          }
          else
          {
            dword_140404A6C[v1 + 280651322] = 0;
          }
        }
        v7 = *(float *)&dword_140404A6C[v1 + 280651440];
        v8 = *(float *)&dword_140404A6C[v1 + 280651441];
        v9 = *(float *)&dword_140404A6C[v1 + 280651442];
        v10 = *(float *)&dword_140404A6C[v1 + 280651518] - v7;
        v11 = *(float *)&dword_140404A6C[v1 + 280651752] - v7;
        v12 = *(float *)&dword_140404A6C[v1 + 280651830] - v7;
        v13 = *(float *)&dword_140404A6C[v1 + 280651519] - v8;
        v81 = *(float *)&dword_140404A6C[v1 + 280651596] - v7;
        v14 = *(float *)&dword_140404A6C[v1 + 280651753] - v8;
        v15 = *(float *)&dword_140404A6C[v1 + 280651831] - v8;
        v16 = *(float *)&dword_140404A6C[v1 + 280651520] - v9;
        v17 = 5210 * v4;
        v82 = *(float *)&dword_140404A6C[v1 + 280651597] - v8;
        v18 = *(float *)&dword_140404A6C[v1 + 280651754] - v9;
        v83 = *(float *)&dword_140404A6C[v1 + 280651598] - v9;
        v62 = *(float *)&dword_140404A6C[v1 + 280651674] - v7;
        v63 = *(float *)&dword_140404A6C[v1 + 280651675] - v8;
        v64 = *(float *)&dword_140404A6C[v1 + 280651676] - v9;
        v65 = *(float *)&dword_140404A6C[v1 + 280651832] - v9;
        v66 = *(float *)&dword_140404A6C[v1 + 280651908] - v7;
        v67 = *(float *)&dword_140404A6C[v1 + 280651909] - v8;
        v68 = *(float *)&dword_140404A6C[v1 + 280651910] - v9;
        v69 = *(float *)&dword_140404A6C[v1 + 280651986] - v7;
        v70 = *(float *)&dword_140404A6C[v1 + 280651987] - v8;
        v71 = *(float *)&dword_140404A6C[v1 + 280651988] - v9;
        v72 = *(float *)&dword_140404A6C[v1 + 280652064] - v7;
        v73 = *(float *)&dword_140404A6C[v1 + 280652065] - v8;
        v74 = *(float *)&dword_140404A6C[v1 + 280652066] - v9;
        v75 = *(float *)&dword_140404A6C[v1 + 280652142] - v7;
        v76 = *(float *)&dword_140404A6C[v1 + 280652143] - v8;
        v77 = *(float *)&dword_140404A6C[v1 + 280652144] - v9;
        v19 = 99776LL * (int)dword_140404A6C[5210 * v4 + 129716710] + 12LL * (int)dword_140404A6C[v1 + 280651314];
        v20 = *(float *)((char *)&dword_140404A6C[346732494] + v19);
        v21 = *(float *)((char *)&dword_140404A6C[346732492] + v19);
        v22 = *(float *)((char *)&dword_140404A6C[346732493] + v19) + 0.25;
        v23 = (float)(*(float *)&dword_140404A6C[5210 * v4 + 129716728] * v21)
            + *(float *)&dword_140404A6C[5210 * v4 + 129716722];
        v80 = *(float *)&dword_140404A6C[5210 * v4 + 129716726];
        *(float *)&v24 = (float)((float)((float)(v80 * v21) + *(float *)&dword_140404A6C[5210 * v4 + 129716720])
                               + (float)(*(float *)&dword_140404A6C[5210 * v4 + 129716729] * v22))
                       + (float)(*(float *)&dword_140404A6C[5210 * v4 + 129716732] * v20);
        v25 = *(float *)&dword_140404A6C[5210 * v4 + 129716731] * v22;
        *(float *)&v26 = (float)((float)((float)(v21 * *(float *)&dword_140404A6C[v17 + 129716727])
                                       + *(float *)&dword_140404A6C[v17 + 129716721])
                               + (float)(*(float *)&dword_140404A6C[v17 + 129716730] * v22))
                       + (float)(*(float *)&dword_140404A6C[v17 + 129716733] * v20);
        dword_140404A6C[v1 + 280651335] = v24;
        v27 = *(float *)&dword_140404A6C[5210 * v4 + 129716734] * v20;
        dword_140404A6C[v1 + 280651336] = v26;
        *(float *)&v28 = (float)(v23 + v25) + v27;
        dword_140404A6C[v1 + 280651337] = v28;
        v29 = dword_140404A6C[v1 + 280651322];
        if ( v29 <= 0 )
        {
          *(float *)&v30 = v80;
        }
        else
        {
          v30 = dword_140404A6C[v17 + 129716726];
          v31 = (float)((float)v29 * *(float *)((char *)&dword_140404A6C[346732492] + v19)) * 0.033333335;
          *(float *)&v32 = (float)(v31 * *(float *)&dword_140404A6C[v17 + 129716727]) + *(float *)&v26;
          *(float *)&dword_140404A6C[v1 + 280651335] = (float)(*(float *)&v30 * v31) + *(float *)&v24;
          *(float *)&v24 = (float)(*(float *)&v30 * v31) + *(float *)&v24;
          v33 = *(float *)&dword_140404A6C[v17 + 129716728];
          v26 = v32;
          dword_140404A6C[v1 + 280651336] = v32;
          *(float *)&v34 = (float)(v33 * v31) + *(float *)&v28;
          dword_140404A6C[v1 + 280651337] = v34;
          v28 = v34;
        }
        v35 = *(_OWORD *)&dword_140404A6C[v17 + 129716727];
        dword_140404A6C[v1 + 280651440] = v24;
        dword_140404A6C[v1 + 280651441] = v26;
        dword_140404A6C[v1 + 280651442] = v28;
        *(_OWORD *)&dword_140404A6C[v1 + 280651453] = v35;
        v36 = *(_OWORD *)&dword_140404A6C[v17 + 129716731];
        dword_140404A6C[v1 + 280651452] = v30;
        *(_OWORD *)&dword_140404A6C[v1 + 280651457] = v36;
        *(float *)&dword_140404A6C[v1 + 280651518] = v10 + *(float *)&v24;
        *(float *)&dword_140404A6C[v1 + 280651519] = v13 + *(float *)&v26;
        *(float *)&dword_140404A6C[v1 + 280651520] = v16 + *(float *)&v28;
        v37 = *(float *)&dword_140404A6C[v1 + 280651440];
        *(float *)&dword_140404A6C[v1 + 280651596] = v37 + v81;
        v38 = *(float *)&dword_140404A6C[v1 + 280651441];
        *(float *)&dword_140404A6C[v1 + 280651597] = v38 + v82;
        v39 = *(float *)&dword_140404A6C[v1 + 280651442];
        *(float *)&dword_140404A6C[v1 + 280651598] = v39 + v83;
        *(float *)&dword_140404A6C[v1 + 280651674] = v37 + v62;
        *(float *)&dword_140404A6C[v1 + 280651675] = v38 + v63;
        *(float *)&dword_140404A6C[v1 + 280651676] = v39 + v64;
        *(float *)&dword_140404A6C[v1 + 280651752] = v11 + v37;
        *(float *)&dword_140404A6C[v1 + 280651753] = v14 + v38;
        *(float *)&dword_140404A6C[v1 + 280651754] = v18 + v39;
        *(float *)&dword_140404A6C[v1 + 280651830] = v12 + v37;
        *(float *)&dword_140404A6C[v1 + 280651831] = v15 + v38;
        *(float *)&dword_140404A6C[v1 + 280651832] = v65 + v39;
        *(float *)&dword_140404A6C[v1 + 280651908] = v66 + v37;
        *(float *)&dword_140404A6C[v1 + 280651909] = v67 + v38;
        *(float *)&dword_140404A6C[v1 + 280651910] = v68 + v39;
        *(float *)&dword_140404A6C[v1 + 280651986] = v69 + v37;
        *(float *)&dword_140404A6C[v1 + 280651987] = v70 + v38;
        *(float *)&dword_140404A6C[v1 + 280651988] = v71 + v39;
        *(float *)&dword_140404A6C[v1 + 280652064] = v72 + v37;
        *(float *)&dword_140404A6C[v1 + 280652065] = v73 + v38;
        *(float *)&dword_140404A6C[v1 + 280652066] = v74 + v39;
        *(float *)&dword_140404A6C[v1 + 280652142] = v75 + v37;
        *(float *)&dword_140404A6C[v1 + 280652143] = v76 + v38;
        v40 = 10;
        v41 = &dword_140404A6C[282486295];
        v42 = 780;
        v43 = (float *)&dword_140404A6C[v1 + 280652234];
        *(float *)&dword_140404A6C[v1 + 280652144] = v77 + v39;
        do
        {
          v44 = (int)*v41;
          v45 = v1 * 4 + 312 * v44;
          v46 = *(float *)((char *)&dword_140404A6C[280651452] + v45);
          *(v43 - 2) = v46;
          v47 = *(float *)((char *)&dword_140404A6C[280651453] + v45);
          *(v43 - 1) = v47;
          v48 = *(float *)((char *)&dword_140404A6C[280651454] + v45);
          *v43 = v48;
          v49 = *(float *)((char *)&dword_140404A6C[280651455] + v45);
          v43[1] = v49;
          v50 = *(float *)((char *)&dword_140404A6C[280651456] + v45);
          v43[2] = v50;
          v51 = *(float *)((char *)&dword_140404A6C[280651457] + v45);
          v43[3] = v51;
          v52 = *(float *)((char *)&dword_140404A6C[280651458] + v45);
          v43[4] = v52;
          v53 = *(float *)((char *)&dword_140404A6C[280651459] + v45);
          v43[5] = v53;
          v54 = *(float *)((char *)&dword_140404A6C[280651460] + v45);
          v43[6] = v54;
          if ( v40 == 10 || v40 == 13 )
          {
            sub_14007B2A0(
              (__int64)&dword_140404A6C[v3 + 280651452 + v42],
              (float *)&dword_140404A6C[v3 + 280651452 + v42],
              sr_export_float_lane_container(3217625051LL));
            LODWORD(v44) = *v41;
            v48 = *v43;
            v49 = v43[1];
            v46 = *(v43 - 2);
            v47 = *(v43 - 1);
            v50 = v43[2];
            v51 = v43[3];
            v52 = v43[4];
            v53 = v43[5];
            v54 = v43[6];
          }
          v55 = *((float *)v41 + 1);
          ++v40;
          v56 = *((float *)v41 + 2);
          v42 += 78;
          v57 = *((float *)v41 + 3);
          v41 += 25;
          result = (int)v44;
          v58 = v1 * 4 + 312LL * (int)v44;
          v59 = (float)(v46 * v55) + *(float *)((char *)&dword_140404A6C[280651440] + v58);
          *(v43 - 14) = v59;
          v60 = (float)(v47 * v55) + *(float *)((char *)&dword_140404A6C[280651441] + v58);
          *(v43 - 13) = v60;
          v61 = *(float *)((char *)&dword_140404A6C[280651442] + v58);
          *(v43 - 14) = (float)((float)(v49 * v56) + v59) + (float)(v52 * v57);
          *(v43 - 13) = (float)((float)(v50 * v56) + v60) + (float)(v53 * v57);
          *(v43 - 12) = (float)((float)((float)(v48 * v55) + v61) + (float)(v51 * v56)) + (float)(v54 * v57);
          v43 += 78;
        }
        while ( v40 < 16 );
        v2 = v78;
      }
    }
    v3 += 7166;
    v1 += 7166;
    v78 = --v2;
  }
  while ( v2 );
  return result;
}
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef retaddr
#undef v80
#undef v81
#undef v82
#undef v83

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C2BB0) ----------------------------------------------------
__int64            sub_1400C2BB0(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v4; // rcx
  unsigned int v5; // r8d
  int v6; // edi
  int v7; // r11d
  int v8; // r10d
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r9
  int v13; // edx
  int v14; // r8d
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // r8
  int v19; // edx
  unsigned int v20; // ecx
  __int64 result; // rax
  __int64 v22; // rcx

  v2 = 1;
  dword_140404A6C[18600733] = 19650218;
  do
  {
    v4 = v2;
    v5 = v2 + 1812433253 * (dword_140404A6C[v2 + 18600732] ^ (dword_140404A6C[v2 + 18600732] >> 30));
    ++v2;
    dword_140404A6C[v4 + 18600733] = v5;
  }
  while ( v2 < 624 );
  v6 = 0;
  dword_14030186C = v2;
  v7 = a2;
  if ( a2 < 624 )
    v7 = 624;
  v8 = 1;
  if ( v7 )
  {
    v9 = a2;
    v10 = 1;
    v11 = 0;
    do
    {
      v12 = v11 + 1;
      v13 = v8 + 1;
      v14 = v6 + 1;
      v8 = 1;
      dword_140404A6C[v10 + 18600733] = v6
                                      + *(_DWORD *)(a1 + 4 * v11)
                                      + (dword_140404A6C[v10 + 18600733]
                                       ^ (1664525
                                        * (dword_140404A6C[v10 + 18600732] ^ (dword_140404A6C[v10 + 18600732] >> 30))));
      v15 = dword_140404A6C[18600733];
      v16 = v10 + 1;
      if ( v13 < 624 )
        v8 = v13;
      else
        v15 = dword_140404A6C[18601356];
      v10 = 1;
      dword_140404A6C[18600733] = v15;
      if ( v13 < 624 )
        v10 = v16;
      v6 = 0;
      if ( v12 < v9 )
        v6 = v14;
      v11 = 0;
      if ( v12 < v9 )
        v11 = v12;
      --v7;
    }
    while ( v7 );
  }
  v17 = 623;
  v18 = v8;
  do
  {
    v19 = v8 + 1;
    v20 = (dword_140404A6C[v18 + 18600733]
         ^ (1566083941 * (dword_140404A6C[v18 + 18600732] ^ (dword_140404A6C[v18 + 18600732] >> 30))))
        - v8;
    v8 = 1;
    dword_140404A6C[v18 + 18600733] = v20;
    result = dword_140404A6C[18600733];
    v22 = v18 + 1;
    if ( v19 >= 624 )
      result = dword_140404A6C[18601356];
    v18 = 1;
    if ( v19 < 624 )
      v18 = v22;
    dword_140404A6C[18600733] = result;
    if ( v19 < 624 )
      v8 = v19;
    --v17;
  }
  while ( v17 );
  dword_140404A6C[18600733] = 0x80000000;
  return result;
}

// 14030186C: using guessed type int dword_14030186C;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144AF96E0: using guessed type unsigned int;
// 144AFA09C: using guessed type unsigned int;

//----- (00000001400C2D50) ----------------------------------------------------
__int64            sub_1400C2D50(unsigned int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  unsigned int v3; // r8d

  dword_140404A6C[18600733] = a1;
  LODWORD(result) = 1;
  do
  {
    v2 = (int)result;
    v3 = result
       + 1812433253 * (dword_140404A6C[(int)result + 18600732] ^ (dword_140404A6C[(int)result + 18600732] >> 30));
    result = (unsigned int)(result + 1);
    dword_140404A6C[v2 + 18600733] = v3;
  }
  while ( (int)result < 624 );
  dword_14030186C = result;
  return result;
}

// 14030186C: using guessed type int dword_14030186C;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144AF96E0: using guessed type unsigned int;

//----- (00000001400C2DB0) ----------------------------------------------------
__int64            sub_1400C2DB0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  __int64 i; // rsi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int *v7; // rax
  int v8; // edi
  int v9; // ecx
  unsigned int *v10; // rax
  int v11; // edi
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = &dword_140404A6C[312226123];
  for ( i = 0; i < 6; ++i )
  {
    if ( !*(v3 - 3147781) )
      v3[98305] = 0;
    *(v3 - 3147782) = 34962;
    if ( (unsigned __int64)i < 2 )
    {
      v5 = 128;
    }
    else
    {
      *(v3 - 3147782) = 34963;
      v5 = 64;
    }
    *(v3 - 3147780) = v5;
    v6 = 0x4000;
    *(v3 - 3147779) = 0x80000;
    v7 = v3;
    *(v3 - 3147778) = 128;
    do
    {
      *v7 = -1;
      v7 += 6;
      --v6;
    }
    while ( v6 );
    v8 = *(v3 - 3147780);
    v9 = 0;
    if ( v8 > 0 )
    {
      v10 = v3 - 3147776;
      do
      {
        *(_QWORD *)(v10 - 1) = 0;
        v10 += 3074;
        v8 = *(v3 - 3147780);
        ++v9;
      }
      while ( v9 < v8 );
    }
    v3[98304] = 0;
    if ( !*(v3 - 3147781) )
    {
      v11 = *(v3 - 3147779) * v8;
      qword_140404170(*(v3 - 3147782), dword_140404A6C[2 * dword_140404A6C[i + 283791462] + 283793813], a3);
      unk_140404190(*(v3 - 3147782), (int)(*(v3 - 3147779) * *(v3 - 3147780)), 0, 35048);
      unk_1404041B8(*(v3 - 3147782), 34660, &v13);
      if ( v11 != v13 )
      {
        v3[98305] = 1;
        sub_140198F95(16, (__int64)"Error", (__int64)"Videomem malloc failed");
        dword_140404A6C[137297749] = 1;
      }
    }
    *(v3 - 3147781) = 1;
    v3 += 3246088;
  }
  dword_140404A6C[331800957] = 34962;
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791469] + 283793813], a3);
  return unk_140404190(dword_140404A6C[331800957], 0x80000, 0, 35048);
}

// 1400C2E99: variable 'a3' is possibly undefined
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404041B8: using guessed type __int64 (__fastcall *unk_1404041B8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160FC47C0: using guessed type unsigned int;
// 18F5BD060: using guessed type unsigned int;

//----- (00000001400C2F90) ----------------------------------------------------
/* Existing callers carry the native XMM3 float word in a double container. */
_UNKNOWN ** sub_1400C2F90(float *a1,float *a2,float *a3,double a4)
{
  float alpha;
  memcpy(&alpha,&a4,sizeof alpha);
  __m128 factor=_mm_set1_ps(alpha),left,right;
  sub_14010E370((float *)(void *)&left,a2);
  sub_14010E370((float *)(void *)&right,a3);
  float l[4],r[4];
  _mm_storeu_ps(l,left);_mm_storeu_ps(r,right);
  float p2=l[2]*r[2],p0=l[0]*r[0];
  float p3=l[3]*r[3]+p2,p1=l[1]*r[1]+p0;
  float dot=p3+p1;
  if(!_mm_comige_ss(_mm_set_ss(dot),_mm_setzero_ps()))
    right=_mm_xor_ps(right,_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279870)));
  __m128 weights=_mm_sub_ps(_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279700)),factor);
  __m128 blended=_mm_add_ps(_mm_mul_ps(weights,left),_mm_mul_ps(factor,right));
  float q[4];_mm_storeu_ps(q,blended);
  float s2=q[2]*q[2],s3=q[3]*q[3];
  float s0=q[0]*q[0],s1=q[1]*q[1];
  float sum23=s3+s2,sum01=s0+s1,norm=sum23+sum01;
  __m128d root=_mm_sqrt_pd(_mm_cvtss_sd(_mm_setzero_pd(),_mm_set_ss(norm)));
  unsigned char zero_or_unordered;
  __asm__ volatile("ucomisd %2, %1; sete %0" : "=qm"(zero_or_unordered)
                   : "x"(root),"x"(_mm_setzero_pd()) : "cc");
  if(zero_or_unordered)
    _mm_storeu_ps(q,_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279490)));
  else
  {
    __m128d inverse=_mm_div_sd(_mm_set_sd(1.0),root);
    inverse=_mm_unpacklo_pd(inverse,inverse);
    for(unsigned i=0;i<2;i++)
    {
      __m128 pair=_mm_castpd_ps(_mm_load_sd((const double *)(const void *)(q+2*i)));
      __m128 converted=_mm_cvtpd_ps(_mm_mul_pd(_mm_cvtps_pd(pair),inverse));
      uint64_t words;
      memcpy(&words,&converted,sizeof words);
      memcpy(q+2*i,&words,sizeof words);
    }
  }
  return sub_14011C340(a1,q);
}


//----- (00000001400C30E0) ----------------------------------------------------
void            sub_1400C30E0(float *a1, float *a2, float *a3, float a4)
{
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm4_4
  float v7; // xmm6_4

  v4 = a3[1];
  v5 = a2[1];
  v6 = a2[2];
  v7 = a3[2];
  *a1 = (float)((float)(*a3 - *a2) * a4) + *a2;
  a1[1] = (float)((float)(v4 - v5) * a4) + a2[1];
  a1[2] = (float)((float)(v7 - v6) * a4) + a2[2];
}


//----- (00000001400C3140) ----------------------------------------------------
__int64            sub_1400C3140(unsigned __int64 a1, float *a2)
{
  float v2; // xmm13_4
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm5_4
  float v6; // xmm11_4
  float v7; // xmm8_4
  float v8; // xmm14_4
  float v9; // xmm15_4
  float v10; // xmm10_4
  float v11; // xmm9_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm1_4
  float v18; // xmm8_4
  float v19; // xmm0_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm3_4
  float v31; // xmm12_4
  float v32; // xmm5_4
  float v33; // xmm0_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm7_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm11_4
  float v40; // xmm0_4
  float v41; // xmm8_4
  float v42; // xmm12_4
  float v43; // xmm13_4
  float v44; // xmm14_4
  float v45; // xmm0_4
  float v46; // xmm9_4
  float v47; // xmm0_4
  float v48; // xmm5_4
  float v49; // xmm10_4
  float v50; // xmm6_4
  float v51; // xmm2_4
  float v52; // xmm1_4
  float v53; // xmm5_4
  float v54; // xmm8_4
  float v55; // xmm9_4
  float v56; // xmm4_4
  float v57; // xmm7_4
  float v58; // xmm10_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm9_4
  float v62; // xmm2_4
  float v63; // xmm0_4
  float v64; // xmm1_4
  __m128 v65; // xmm5
  __m128 v66; // xmm2
  __m128 v67; // xmm3
  float v68; // xmm6_4
  float v69; // xmm0_4
  float v70; // xmm8_4
  __m128 v71; // xmm4
  __m128 v72; // xmm3
  __m128 v73; // xmm5
  float v74; // xmm0_4
  float v75; // xmm11_4
  __m128 v76; // xmm1
  __m128 v77; // xmm1
  __m128 v78; // xmm3
  float v79; // xmm0_4
  __m128 v80; // xmm4
  float v81; // xmm6_4
  __m128 v82; // xmm1
  __m128 v83; // xmm2
  __m128 v84; // xmm4
  float v85; // xmm0_4
  float v86; // xmm9_4
  __m128 v87; // xmm3
  float v88; // xmm0_4
  float v89; // xmm8_4
  float v90; // xmm0_4
  float v91; // xmm3_4
  __m128 v92; // xmm2
  __m128 v93; // xmm3
  _BYTE *v94; // r9
  __int8 *v95; // r10
  unsigned __int64 v96; // rax
  __int64 v97; // rcx
  float v98; // xmm1_4
  float v99; // xmm0_4
  float v100; // xmm1_4
  __m128 v101; // xmm1
  __m128 v102; // xmm0
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C3140[160];
#define v104 (*(float (*))(void *)(sr_frame_1400C3140 + 0)) /* [rsp+0h] */
#define v105 (*(float (*))(void *)(sr_frame_1400C3140 + 4)) /* [rsp+4h] */
#define v106 (*(float (*))(void *)(sr_frame_1400C3140 + 8)) /* [rsp+8h] */
#define v107 (*(float (*))(void *)(sr_frame_1400C3140 + 12)) /* [rsp+Ch] */
#define v108 (*(float (*))(void *)(sr_frame_1400C3140 + 16)) /* [rsp+10h] */
#define v109 (*(float (*))(void *)(sr_frame_1400C3140 + 20)) /* [rsp+14h] */
#define v110 (*(float (*))(void *)(sr_frame_1400C3140 + 24)) /* [rsp+18h] */
#define v111 (*(float (*))(void *)(sr_frame_1400C3140 + 28)) /* [rsp+1Ch] */
#define v112 (*(float (*))(void *)(sr_frame_1400C3140 + 32)) /* [rsp+20h] */
#define v113 (*(float (*))(void *)(sr_frame_1400C3140 + 36)) /* [rsp+24h] */
#define v114 (*(float (*))(void *)(sr_frame_1400C3140 + 40)) /* [rsp+28h] */
#define v115 (*(float (*))(void *)(sr_frame_1400C3140 + 44)) /* [rsp+2Ch] */
#define v116 (*(float (*))(void *)(sr_frame_1400C3140 + 48)) /* [rsp+30h] */
#define v117 (*(float (*))(void *)(sr_frame_1400C3140 + 52)) /* [rsp+34h] */
#define v118 (*(float (*))(void *)(sr_frame_1400C3140 + 56)) /* [rsp+38h] */
#define v119 (*(float (*))(void *)(sr_frame_1400C3140 + 60)) /* [rsp+3Ch] */
#define v120 (*(__m128 (*))(void *)(sr_frame_1400C3140 + 64)) /* [rsp+40h] */
#define v121 (*(__m128 (*))(void *)(sr_frame_1400C3140 + 80)) /* [rsp+50h] */
#define v122 (*(_BYTE (*)[48])(void *)(sr_frame_1400C3140 + 96)) /* [rsp+60h] */
#define v123 (*(__int64 (*))(void *)(sr_frame_1400C3140 + 144)) /* [rsp+90h] */

  v2 = a2[15];
  v3 = a2[11];
  v4 = a2[7];
  v5 = a2[10];
  v6 = a2[14];
  v7 = a2[6];
  v8 = a2[13];
  v9 = a2[4];
  v10 = a2[8];
  v11 = a2[12];
  v12 = (float)(v7 * a2[9]) * v2;
  v13 = v10 * v4;
  v14 = (float)((float)(a2[5] * v5) * v2) - (float)((float)(v3 * a2[5]) * v6);
  v15 = v10 * v7;
  v104 = v9 * v5;
  v16 = v14 - v12;
  v17 = v8 * v7;
  v18 = v11 * a2[6];
  v19 = (float)(v8 * v4) * v5;
  v20 = v11 * v4;
  v106 = (float)((float)(v16 + (float)((float)(v4 * a2[9]) * v6)) + (float)(v17 * v3)) - v19;
  v21 = (float)(v9 * v3) * v8;
  v22 = (float)(v10 * v4) * v6;
  v23 = (float)((float)((float)(v9 * v3) * v6) - (float)(v104 * v2)) + (float)(v15 * v2);
  v24 = v18 * v3;
  v25 = v11 * a2[5];
  v26 = (float)(v23 - v22) - v24;
  v27 = v9 * a2[9];
  *(float *)v122 = v26 + (float)(v20 * a2[10]);
  v28 = (float)(v10 * a2[5]) * v6;
  v29 = v25 * a2[11];
  v30 = v25 * a2[10];
  v31 = (float)((float)((float)((float)((float)(v27 * v2) - v21) - (float)((float)(v10 * a2[5]) * v2))
                      + (float)(v13 * v8))
              + v29)
      - (float)(v20 * a2[9]);
  v32 = a2[9];
  v107 = v31;
  v33 = (float)((float)(v104 * v8) - (float)(v27 * v6)) + v28;
  v34 = *a2;
  v35 = v33 - (float)(v15 * v8);
  v36 = a2[1];
  v114 = *a2 * a2[10];
  v37 = v35 - v30;
  v38 = a2[2];
  v105 = v36 * v11;
  v39 = v38 * v32;
  v40 = v37 + (float)(v18 * v32);
  v41 = a2[3];
  v110 = v38 * v10;
  v42 = v41 * v32;
  v104 = v40;
  v43 = v38 * v8;
  v44 = v41 * a2[13];
  v115 = v34 * a2[11];
  v112 = v38 * v11;
  v111 = v41 * v10;
  v45 = v41 * v11;
  v46 = a2[14];
  v113 = v45;
  v47 = v34 * v32;
  v48 = v36 * v10;
  v49 = a2[13];
  v119 = v47;
  v118 = v48;
  v50 = v36 * a2[6];
  *(float *)&v122[36] = (float)((float)((float)((float)((float)(v46 * v47) - (float)(v49 * v114)) - (float)(v46 * v48))
                                      + (float)(v49 * v110))
                              + (float)(a2[10] * v105))
                      - (float)(a2[9] * v112);
  v51 = *a2;
  v52 = a2[2];
  v53 = a2[1];
  v54 = v41 * a2[5];
  v55 = a2[3];
  v56 = v36 * a2[7];
  v57 = v52 * a2[5];
  v58 = *a2 * a2[7];
  v109 = *a2 * a2[6];
  v108 = v52 * v9;
  v59 = v51 * a2[5];
  v60 = a2[13] * v109;
  v116 = v59;
  v117 = v53 * v9;
  v61 = v55 * v9;
  v62 = (float)((float)((float)((float)(v60 - (float)(a2[14] * v59)) + (float)(a2[14] * (float)(v53 * v9)))
                      - (float)(a2[13] * v108))
              - (float)(a2[6] * v105))
      + (float)(a2[5] * v112);
  v63 = a2[11] * v50;
  v64 = a2[11] * v57;
  *(float *)&v122[40] = v62;
  v65 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 10))));
  v66 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 15))));
  v67 = v66;
  SR_VEC_LANES(128, v67, f32)[0] = SR_VEC_LANES(128, v66, f32)[0] * v50;
  v68 = a2[14];
  SR_VEC_LANES(128, v65, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v65, f32)[0] * v56) - v63) + v64) - (float)(a2[10] * v54))
                          - (float)(a2[7] * v39))
                  + (float)(a2[6] * v42);
  v69 = v68 * v54;
  v70 = a2[7];
  SR_VEC_LANES(128, v67, f32)[0] = (float)((float)((float)((float)(SR_VEC_LANES(128, v67, f32)[0] - (float)(v68 * v56)) - (float)(a2[15] * v57)) + v69)
                          + (float)(v70 * v43))
                  - (float)(a2[6] * v44);
  v71 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 1))));
  v72 = _mm_unpacklo_ps(v67, v65);
  v73 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(v68))));
  v74 = a2[15] * v39;
  v75 = a2[10];
  SR_VEC_LANES(128, v71, f32)[0] = (float)((float)((float)((float)((float)((float)(SR_VEC_LANES(128, v71, f32)[0] * a2[11]) * v68)
                                                  - (float)((float)(SR_VEC_LANES(128, v71, f32)[0] * v75) * SR_VEC_LANES(128, v66, f32)[0]))
                                          + v74)
                                  - (float)(v68 * v42))
                          - (float)(a2[11] * v43))
                  + (float)(v75 * v44);
  v76 = _mm_unpacklo_ps(((__m128)_mm_cvtsi32_si128((int)(LODWORD(v106)))), v71);
  SR_VEC_LANES(128, v71, f32)[0] = a2[6];
  v77 = _mm_movelh_ps(v76, v72);
  v78 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 11))));
  v120 = v77;
  v121 = v77;
  SR_VEC_LANES(128, v78, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v78, f32)[0] * v109) - (float)(v75 * v58))
                                          - (float)(a2[11] * v108))
                                  + (float)(v75 * v61))
                          + (float)(v70 * v110))
                  - (float)(SR_VEC_LANES(128, v71, f32)[0] * v111);
  v79 = SR_VEC_LANES(128, v71, f32)[0] * v113;
  v80 = v66;
  SR_VEC_LANES(128, v73, f32)[0] = (float)((float)((float)((float)((float)(v68 * v58) - (float)(SR_VEC_LANES(128, v66, f32)[0] * v109))
                                          + (float)(SR_VEC_LANES(128, v66, f32)[0] * v108))
                                  - (float)(v68 * v61))
                          - (float)(v70 * v112))
                  + v79;
  SR_VEC_LANES(128, v80, f32)[0] = (float)((float)((float)(SR_VEC_LANES(128, v66, f32)[0] * v114) - (float)(v68 * v115))
                          - (float)(SR_VEC_LANES(128, v66, f32)[0] * v110))
                  + (float)(v68 * v111);
  v81 = a2[11];
  SR_VEC_LANES(128, v80, f32)[0] = (float)(SR_VEC_LANES(128, v80, f32)[0] + (float)(v81 * v112)) - (float)(a2[10] * v113);
  v82 = _mm_movelh_ps(_mm_unpacklo_ps(v80, v73), _mm_unpacklo_ps(v78, ((__m128)_mm_cvtsi32_si128((int)(LODWORD(v107))))));
  SR_VEC_LANES(128, v78, f32)[0] = a2[9];
  v83 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)SR_VEC_LANES(128, v78, u32)[0]));
  *(__m128 *)&v122[4] = v82;
  v84 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 15))));
  SR_VEC_LANES(128, v83, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v78, f32)[0] * v58) - (float)(v81 * v116))
                                          + (float)(v81 * v117))
                                  - (float)(SR_VEC_LANES(128, v78, f32)[0] * v61))
                          - (float)(v70 * v118))
                  + (float)(a2[5] * v111);
  v85 = a2[13] * v61;
  v86 = a2[5];
  v87 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 13))));
  SR_VEC_LANES(128, v84, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v84, f32)[0] * v116) - (float)(a2[13] * v58))
                                          - (float)(SR_VEC_LANES(128, v84, f32)[0] * v117))
                                  + v85)
                          + (float)(v70 * v105))
                  - (float)(v86 * v113);
  SR_VEC_LANES(128, v87, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v87, f32)[0] * v115) - (float)(a2[15] * v119))
                                          + (float)(a2[15] * v118))
                                  - (float)(a2[13] * v111))
                          - (float)(a2[11] * v105))
                  + (float)(a2[9] * v113);
  v88 = a2[9] * v109;
  v89 = a2[9] * v108;
  SR_VEC_LANES(128, v82, f32)[0] = a2[10];
  *(__m128 *)&v122[20] = _mm_movelh_ps(_mm_unpacklo_ps(v87, v84), _mm_unpacklo_ps(v83, ((__m128)_mm_cvtsi32_si128((int)(LODWORD(v104))))));
  SR_VEC_LANES(128, v82, f32)[0] = (float)((float)((float)((float)(SR_VEC_LANES(128, v82, f32)[0] * v116) - v88) - (float)(SR_VEC_LANES(128, v82, f32)[0] * v117))
                          + v89)
                  + (float)(a2[6] * v118);
  SR_VEC_LANES(128, v87, f32)[0] = (float)(*(float *)v122 * a2[1]) + (float)(v106 * *a2);
  v90 = a2[3] * v104;
  *(float *)&v122[44] = SR_VEC_LANES(128, v82, f32)[0] - (float)(v86 * v110);
  v91 = SR_VEC_LANES(128, v87, f32)[0] + (float)(v90 + (float)(a2[2] * v107));
  if ( v91 != 0.0 )
  {
    v92 = ((__m128)_mm_cvtsi32_si128((int)(0x3F800000u)));
    SR_VEC_LANES(128, v92, f32)[0] = 1.0 / v91;
    v93 = _mm_shuffle_ps(v92, v92, 0);
    if ( a1 > (unsigned __int64)&v122[44] || a1 + 60 < (unsigned __int64)&v121 )
    {
      v101 = _mm_mul_ps(*(__m128 *)&v122[16], v93);
      *(__m128 *)a1 = _mm_mul_ps(v120, v93);
      *(__m128 *)(a1 + 16) = _mm_mul_ps(*(__m128 *)v122, v93);
      v102 = _mm_mul_ps(*(__m128 *)&v122[32], v93);
      *(__m128 *)(a1 + 32) = v101;
      *(__m128 *)(a1 + 48) = v102;
    }
    else
    {
      v94 = (char *)&v121 - a1;
      v95 = &SR_VEC_LANES(128, v121, i8)[-a1 + 4];
      v96 = a1 + 8;
      v97 = 4;
      do
      {
        v96 += 16LL;
        v98 = SR_VEC_LANES(128, v92, f32)[0] * *(float *)&v95[v96 - 24];
        *(float *)(v96 - 24) = SR_VEC_LANES(128, v92, f32)[0] * *(float *)&v94[v96 - 24];
        v99 = SR_VEC_LANES(128, v92, f32)[0] * *(float *)&v94[v96 - 16];
        *(float *)(v96 - 20) = v98;
        v100 = SR_VEC_LANES(128, v92, f32)[0] * *(float *)&v95[v96 - 16];
        *(float *)(v96 - 16) = v99;
        *(float *)(v96 - 12) = v100;
        --v97;
      }
      while ( v97 );
    }
  }
  return sub_1401F8B20((unsigned __int64)&v104 ^ v123);
}
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

// 1400C39C9: conditional instruction was optimized away because r11.8==10

//----- (00000001400C3AB0) ----------------------------------------------------
__int64            sub_1400C3AB0(int a1, int a2, int a3)
{
  __int64 v3; // rsi
  int v4; // r9d
  signed int v6; // r9d
  unsigned int v7; // r10d
  int v8; // ebx
  __int64 v9; // rdi
  char v10; // cl
  int v11; // edx
  int v12; // eax

  v3 = 1760LL * a1;
  v4 = dword_140404A6C[v3 + 278846062];
  if ( v4 >= 9 )
    return 0;
  v6 = v4 + 1;
  dword_140404A6C[v3 + 278846062] = v6;
  if ( v6 > a2 )
  {
    v7 = dword_140404A6C[v3 + 278846063];
    v8 = 3 * v6;
    v9 = (unsigned int)(v6 - a2);
    LOBYTE(v6) = a2;
    do
    {
      v10 = v8;
      v11 = (v7 >> (v8 - 3)) & 7;
      v12 = 7 << v8;
      v8 -= 3;
      v7 = (v11 << v10) | ~v12 & v7;
      --v9;
    }
    while ( v9 );
    dword_140404A6C[v3 + 278846063] = v7;
  }
  dword_140404A6C[v3 + 278846063] = (a3 << (3 * v6)) | dword_140404A6C[v3 + 278846063] & ~(7 << (3 * v6));
  ++dword_140404A6C[v3 + 278846061];
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C3BA0) ----------------------------------------------------
unsigned int *           sub_1400C3BA0(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int *result; // rax
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // r10d
  int v8; // r9d
  __int64 v9; // rcx

  if ( a3 == -1 )
  {
    a3 = 0;
    while ( 1 )
    {
      result = (unsigned int *)dword_140404A6C[1760 * a1 + 278845985 + ((unsigned __int64)a3 >> 5)];
      if ( !_bittest((     int *)&result, a3 & 0x1F) )
        break;
      if ( (int)++a3 >= 64 )
        return result;
    }
  }
  v4 = a1;
  v5 = 1760LL * a1;
  v6 = (__int64)(int)a3 >> 5;
  dword_140404A6C[v5 + 278845987 + (int)a3] = a2;
  result = (unsigned int *)(v6 + v5);
  v7 = 1 << (a3 & 0x1F);
  *(_DWORD *)(4 * (v6 + v5) + 1119597296 + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= v7;
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v8 = ~__ROL4__(1, a3);
    result = &dword_140404A6C[4 * v4 + 438889304 + v4 + v6];
    v9 = dword_140404A6C[456202445];
    do
    {
      *result &= v8;
      result += 47224;
      --v9;
    }
    while ( v9 );
  }
  dword_140404A6C[4 * v4 + 450931424 + v4 + v6] &= ~v7;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C3C90) ----------------------------------------------------
__int64            sub_1400C3C90(unsigned int a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r11

  v3 = a3;
  v4 = 28664LL * a2 + 40LL * a3;
  v5 = *(int *)((char *)&dword_140404A6C[280658139] + v4);
  if ( (int)v5 >= 8 )
    return 0;
  dword_140404A6C[7166 * a2 + 280658140 + 10 * v3 + v5] = a1;
  ++*(unsigned int *)((char *)&dword_140404A6C[280658139] + v4);
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C3D10) ----------------------------------------------------
__int64            sub_1400C3D10(int a1)
{
  int v1; // r10d
  __int64 v2; // rcx
  int v3; // ebx
  int v4; // r8d
  int v5; // edi
  unsigned __int64 v6; // r11
  char v7; // dl
  char v8; // cl

  v1 = 0;
  v2 = 1760LL * a1;
  v3 = 0;
  v4 = 0;
  v5 = dword_140404A6C[v2 + 278846062];
  if ( v5 < 0 )
    return 0;
  if ( v5 + 1 < 2 )
  {
    LODWORD(v6) = dword_140404A6C[v2 + 278846063];
  }
  else
  {
    v6 = dword_140404A6C[v2 + 278846063];
    do
    {
      v7 = 3 * v4;
      v8 = 3 * v4;
      v4 += 2;
      v1 += dword_1402B2960[(v6 >> v8) & 7];
      v3 += dword_1402B2960[(v6 >> (v7 + 3)) & 7];
    }
    while ( v4 <= v5 - 1 );
    if ( v4 > v5 )
      return (unsigned int)(v3 + v1);
  }
  return (unsigned int)(dword_1402B2960[((unsigned __int64)(unsigned int)v6 >> (3 * (unsigned __int8)v4)) & 7] + v3 + v1);
}

// 1402B2960: using guessed type int dword_1402B2960[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C3E00) ----------------------------------------------------
__int64            sub_1400C3E00(int a1)
{
  __m128i si128; // xmm0
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int *v4; // rdx
  unsigned int v5; // edx
  unsigned int v6; // ecx
  int v7; // eax
  __int64 result; // rax

  si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
  v2 = a1;
  v3 = 1760LL * a1;
  v4 = &dword_140404A6C[16 * ((int)dword_140404A6C[v3 + 278846111] + 110LL * a1) + 278846626];
  _mm_storeu_si128((__m128i *)(void *)v4, si128);
  _mm_storeu_si128((__m128i *)(void *)(v4 + 4), si128);
  _mm_storeu_si128((__m128i *)(void *)(v4 + 8), si128);
  *((_QWORD *)v4 + 6) = SR_VEC_LANES(128, si128, i64)[0];
  v4[14] = SR_VEC_LANES(128, si128, i32)[0];
  *((_WORD *)v4 + 30) = SR_VEC_LANES(128, si128, i16)[0];
  *((_BYTE *)v4 + 62) = SR_VEC_LANES(128, si128, i8)[0];
  sub_140050F90(a1, dword_140404A6C[v3 + 278846111]);
  v5 = dword_140404A6C[v3 + 278846111];
  v6 = dword_140404A6C[v3 + 278846112];
  if ( (((_BYTE)v5 + 10) & 0x1F) == v6 )
    dword_140404A6C[v3 + 278846112] = ((_BYTE)v6 + 1) & 0x1F;
  v7 = ((_BYTE)v5 + 1) & 0x1F;
  dword_140404A6C[v3 + 278846111] = v7;
  result = (unsigned int)(v7 << 6);
  ++dword_140404A6C[v2 + 280648157];
  dword_140404A6C[v3 + 278846113] = result;
  return result;
}

// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C3ED0) ----------------------------------------------------
int            sub_1400C3ED0(int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  signed int v7; // ebx
  int *v8; // r14
  __int64 v9; // r8
  int v10; // r10d
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r9
  char *v15; // rcx
  unsigned int *v17; // r14
  signed int v18; // ebx
  int *v19; // rdi

  v2 = 1760LL * a1;
  v3 = a1;
  LODWORD(v4) = dword_140404A6C[v2 + 278847244];
  if ( (int)v4 > 0 )
  {
    LODWORD(v4) = v4 - 1;
    dword_140404A6C[v2 + 278847244] = v4;
    if ( !(_DWORD)v4 )
    {
      if ( !dword_140404A6C[v2 + 278847243] )
      {
        v5 = sub_14004C960(a1, dword_140404A6C[v2 + 278847245]);
        v6 = 110 * v3;
        if ( v5 == -1 )
        {
          sub_140158AB0(&dword_140404A6C[16 * (v6 + (int)dword_140404A6C[v2 + 278846111]) + 278846114], "DISK ERROR");
        }
        else
        {
          sub_140080690(
            v5,
            dword_140404A6C[v2 + 278847246],
            (char *)&dword_140404A6C[v2 + 278847249],
            dword_140404A6C[v2 + 278847257]);
          sub_140158AB0(
            &dword_140404A6C[16 * (v6 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
            "  1 FILE(S) COPIED.");
        }
        sub_1400C3E00(a1);
        LODWORD(v4) = dword_140404A6C[v2 + 278847258];
        if ( (_DWORD)v4 )
        {
          v7 = 0;
          if ( (int)v4 > 0 )
          {
            v8 = (int *)&dword_140404A6C[v2 + 278847259];
            do
            {
              LODWORD(v4) = sub_1400C6D90(a1, *v8);
              ++v7;
              ++v8;
            }
            while ( v7 < (int)dword_140404A6C[v2 + 278847258] );
          }
          dword_140404A6C[v2 + 278847258] = 0;
        }
        else
        {
          LODWORD(v4) = sub_1400C6D90(a1, 8);
        }
      }
      if ( dword_140404A6C[v2 + 278847243] == 1 )
      {
        LODWORD(v4) = sub_14004C960(a1, dword_140404A6C[v2 + 278847245]);
        if ( (_DWORD)v4 == -1 )
        {
          sub_140158AB0(
            &dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
            "DISK ERROR");
          LODWORD(v4) = sub_1400C3E00(a1);
        }
        else
        {
          v9 = 2570LL * (int)v4;
          v10 = dword_140404A6C[v9 + 275753047];
          while ( 1 )
          {
            while ( 1 )
            {
              v11 = (int)dword_140404A6C[v2 + 278847247];
              if ( (int)v11 < v10 )
                break;
              v13 = (int)dword_140404A6C[v2 + 278847248];
              if ( (int)v13 >= (int)dword_140404A6C[v9 + 275754072] )
                goto LABEL_27;
              v14 = v9 * 4 + 24 * v13;
              if ( *(unsigned int *)((char *)&dword_140404A6C[275754078] + v14) == dword_140404A6C[v2 + 278847246] )
              {
                sub_140158AB0(
                  &dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
                  "%s",
                  (     char *)&dword_140404A6C[275754074] + v14);
                sub_1400C3E00(a1);
                v4 = (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) << 6;
                *((_BYTE *)&dword_140404A6C[278846114] + v4) = 0;
                ++dword_140404A6C[v2 + 278847248];
                dword_140404A6C[v2 + 278847244] = 4;
                goto LABEL_27;
              }
              LODWORD(v4) = v13 + 1;
              dword_140404A6C[v2 + 278847248] = v13 + 1;
            }
            v12 = v9 * 4 + 16 * v11;
            if ( *(unsigned int *)((char *)&dword_140404A6C[275753051] + v12) == dword_140404A6C[v2 + 278847246] )
              break;
            LODWORD(v4) = v11 + 1;
            dword_140404A6C[v2 + 278847247] = v11 + 1;
          }
          sub_140158AB0(
            &dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
            "%s            ",
            (     char *)&dword_140404A6C[275753048] + v12);
          HIBYTE(dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846116]) = 0;
          v15 = (char *)&dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846113] + 3;
          while ( *++v15 != 0 )
            ;
          strcpy(v15, "<DIR>");
          sub_1400C3E00(a1);
          v4 = (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) << 6;
          *((_BYTE *)&dword_140404A6C[278846114] + v4) = 0;
          ++dword_140404A6C[v2 + 278847247];
          dword_140404A6C[v2 + 278847244] = 4;
        }
LABEL_27:
        if ( !dword_140404A6C[v2 + 278847244] )
        {
          sub_1400C3E00(a1);
          v17 = &dword_140404A6C[v2 + 278847258];
          LOBYTE(dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846114]) = 0;
          LOBYTE(dword_140404A6C[v2 + 278847154]) = 0;
          LODWORD(v4) = dword_140404A6C[v2 + 278847258];
          if ( (_DWORD)v4 )
          {
            v18 = 0;
            if ( (int)v4 > 0 )
            {
              v19 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v2 * 4 + 1119602392);
              do
              {
                LODWORD(v4) = sub_1400C6D90(a1, *v19);
                ++v18;
                ++v19;
              }
              while ( v18 < (int)*v17 );
            }
            *v17 = 0;
          }
          else
          {
            LODWORD(v4) = sub_1400C6D90(a1, 8);
          }
        }
      }
    }
  }
  return v4;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C4280) ----------------------------------------------------
__int64            sub_1400C4280(int a1)
{
  __int64 v1; // r12
  __int64 v2; // rsi
  int v3; // r13d
  unsigned int v4; // r11d
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // r10d
  unsigned int *v11; // rdi
  int v12; // edx
  char v13; // r8
  int v14; // ecx
  int v15; // r8d
  char *v16; // r9
  char v17; // dl
  int v18; // edx
  char v19; // dl
  __int64 v20; // rdx
  char v21; // r8
  int v22; // ebx
  __int64 v23; // r8
  unsigned int v24; // edx
  unsigned int v25; // eax
  int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // r11
  char *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  char v35; // al
  __int64 v36; // rdi
  __int64 v37; // r13
  signed int v38; // ebx
  int v39; // ecx
  __int64 v40; // r11
  __int64 v41; // r14
  __int64 v42; // rbx
  int *v43; // r10
  char *v44; // rdx
  bool v45; // zf
  char *v46; // rcx
  __int64 v47; // rcx
  char v48; // al
  int v49; // eax
  __int64 v50; // r10
  int v51; // edx
  int v52; // r9d
  char v53; // r8
  __int64 v54; // r14
  __int64 v55; // rcx
  char *v56; // r8
  char v57; // cl
  __int64 v58; // rax
  int v59; // r9d
  int v60; // r14d
  unsigned int *v61; // r10
       char *v62; // r11
  unsigned int v63; // r14d
  int v64; // eax
  __int64 v65; // rdi
  unsigned int v66; // r15d
  __int64 v67; // rcx
  char *v68; // rcx
  char v69; // al
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  char v75; // al
  __int64 v76; // r15
  signed int v77; // r14d
  char *v78; // rdi
  __m128i si128; // xmm0
  unsigned int *v80; // rcx
  __int64 v81; // rsi
  unsigned int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rcx
  char v85; // al
  int v86; // r14d
  int v87; // eax
  int v88; // edx
  int v89; // r9d
  char v90; // r8
  __int64 v91; // rcx
  __int64 v92; // rcx
  char v93; // al
  __int64 v94; // rcx
  char *v95; // r8
  char v96; // cl
  __int64 v97; // r15
  int v98; // r11d
  unsigned int *v99; // r9
       char *v100; // r10
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C4280[1136];
#define v105 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 0)) /* [rsp+0h] */
#define v106 (*(unsigned int (*))(void *)(sr_frame_1400C4280 + 48)) /* [rsp+30h] */
#define v107 (*(int (*))(void *)(sr_frame_1400C4280 + 52)) /* [rsp+34h] */
#define v108 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 56)) /* [rsp+38h] */
#define v109 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 64)) /* [rsp+40h] */
#define v110 (*(unsigned int * (*))(void *)(sr_frame_1400C4280 + 72)) /* [rsp+48h] */
#define v111 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 80)) /* [rsp+50h] */
#define v112 (*(char (*)[4])(void *)(sr_frame_1400C4280 + 92)) /* [rsp+5Ch] */
#define Str1 (*(char (*)[4])(void *)(sr_frame_1400C4280 + 96)) /* [rsp+60h] */
#define v114 (*(char (*))(void *)(sr_frame_1400C4280 + 607)) /* [rsp+25Fh] */
#define v115 (*(char (*)[512])(void *)(sr_frame_1400C4280 + 608)) /* [rsp+260h] */
#define v116 (*(__int64 (*))(void *)(sr_frame_1400C4280 + 1120)) /* [rsp+460h] */

  v1 = a1;
  v2 = 1760LL * a1;
  v3 = -1;
  v111 = v2 * 4;
  v4 = -1;
  v5 = (int)dword_140404A6C[v2 + 278847170];
  v106 = v5;
  if ( (_DWORD)v5 == 2 )
  {
    v4 = dword_140404A6C[v2 + 278846098];
  }
  else if ( !(_DWORD)v5 && (int)dword_140404A6C[v2 + 278845906] > 0 )
  {
    v4 = dword_140404A6C[1760 * dword_140404A6C[v2 + 278845907] + 278846098];
  }
  v6 = 0;
  v7 = 1760LL * a1;
  v8 = v2 * 4 + 72 * v5;
  v109 = 9 * v5;
  v9 = *(int *)((char *)&dword_140404A6C[278847172] + v8);
  v107 = 0;
  v108 = 18 * v5;
  Str1[0] = 0;
  v10 = 0;
  v11 = &dword_140404A6C[v2 + 278847154];
  v12 = 0;
  LODWORD(v110) = dword_140404A6C[18 * v5 + 278847173 + v7 + v9];
  while ( 1 )
  {
    v13 = *((_BYTE *)v11 + v12);
    if ( (unsigned __int8)(v13 - 97) <= 0x19u
      || (unsigned __int8)(v13 - 65) <= 0x19u
      || (unsigned __int8)(v13 - 48) <= 9u )
    {
      break;
    }
    v14 = v12;
    if ( v13 )
    {
      v107 = ++v12;
      v14 = v12;
      if ( v12 < 62 )
        continue;
    }
    goto LABEL_14;
  }
  v14 = v12;
LABEL_14:
  if ( v14 < 62 )
  {
    v15 = v14;
    v16 = Str1;
    while ( 1 )
    {
      v17 = *((_BYTE *)v11 + v15);
      if ( (unsigned __int8)(v17 - 97) > 0x19u
        && (unsigned __int8)(v17 - 65) > 0x19u
        && (unsigned __int8)(v17 - 48) > 9u )
      {
        break;
      }
      v14 = v15 + 1;
      *v16++ = v17;
      v107 = v14;
      ++v10;
      ++v15;
      if ( v14 >= 62 )
        goto LABEL_22;
    }
    v14 = v15;
LABEL_22:
    LODWORD(v5) = v106;
  }
  Str1[v10] = 0;
  if ( !Str1[1] )
  {
    if ( v14 < 62 )
    {
      v18 = v14;
      do
      {
        v14 = v18;
        if ( *((_BYTE *)v11 + v18) != 32 )
          break;
        v14 = v18 + 1;
        v18 = v14;
      }
      while ( v14 < 62 );
    }
    v19 = *((_BYTE *)v11 + v14);
    if ( (unsigned __int8)(v19 - 97) > 0x19u && (unsigned __int8)(v19 - 65) > 0x19u && (unsigned __int8)(v19 - 48) > 9u )
    {
      if ( v19 && v14 < 62 )
      {
        v20 = 0;
        do
        {
          if ( v20 >= 2 )
            break;
          v21 = *((_BYTE *)v11 + v14);
          if ( !v21 )
            break;
          ++v6;
          v115[v20++] = v21;
          ++v14;
        }
        while ( v14 < 62 );
      }
      v115[v6] = 0;
      if ( v6 > 0 && v115[0] == 58 && !v115[1] )
      {
        if ( (unsigned __int8)(Str1[0] - 65) > 2u
          || (v22 = (unsigned __int8)Str1[0] - 65, (unsigned int)sub_14004C960(v1, v22) == -1) )
        {
          *(_OWORD *)&dword_140404A6C[16 * (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) + 278846114] = xmmword_140275F48;
          goto LABEL_178;
        }
        dword_140404A6C[v2 + 278847170] = v22;
      }
    }
    return sub_1401F8B20((unsigned __int64)&v105 ^ v116);
  }
  if ( v4 == -1 )
  {
    *(_OWORD *)&dword_140404A6C[16 * (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) + 278846114] = xmmword_140275F48;
    goto LABEL_178;
  }
  if ( Str1[0] != 67 || Str1[1] != 68 || Str1[2] )
  {
    v34 = 0;
    while ( 1 )
    {
      v35 = Str1[v34++];
      if ( v35 != byte_140275F6C[v34 - 1] )
        break;
      if ( v34 == 4 )
      {
        v36 = 1;
        dword_140404A6C[v2 + 278847243] = 1;
        dword_140404A6C[v2 + 278847244] = 4;
        dword_140404A6C[v2 + 278847258] = 0;
        *(_QWORD *)&dword_140404A6C[v2 + 278847247] = 1;
        dword_140404A6C[v2 + 278847245] = v5;
        v37 = 110 * v1;
        dword_140404A6C[v2 + 278847246] = dword_140404A6C[v7
                                                        + 278847173
                                                        + v108
                                                        + *(int *)((char *)&dword_140404A6C[278847172] + v8)];
        LOBYTE(dword_140404A6C[16 * (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) + 278846114]) = 0;
        sub_1400C3E00(v1);
        if ( v106 == 2 )
        {
          v38 = dword_140404A6C[v2 + 278846098];
          goto LABEL_74;
        }
        if ( v106 || (int)dword_140404A6C[v2 + 278845906] <= 0 )
          goto LABEL_85;
        v38 = dword_140404A6C[1760 * dword_140404A6C[v2 + 278845907] + 278846098];
LABEL_74:
        if ( v38 == -1 )
        {
LABEL_85:
          v115[0] = 0;
        }
        else
        {
          sub_140158AB0(v115, "%c:\\", v106 + 65);
          v39 = *(unsigned int *)((char *)&dword_140404A6C[278847172] + v8);
          if ( v39 >= 1 )
          {
            v40 = (unsigned int)v39;
            v41 = (int)dword_140404A6C[2 * v109 + 278847172 + v2];
            v42 = 2570LL * v38;
            v43 = (int *)((char *)&dword_140404A6C[278847174] + v8);
            do
            {
              v44 = &v114;
              do
                v45 = *++v44 == 0;
              while ( !v45 );
              strcpy(v44, (     char *)&dword_140404A6C[4 * *v43 + 275753048 + v42]);
              if ( v36 < v41 )
              {
                v46 = &v114;
                do
                  v45 = *++v46 == 0;
                while ( !v45 );
                *(_WORD *)v46 = 92;
              }
              ++v36;
              ++v43;
              --v40;
            }
            while ( v40 );
          }
        }
        sub_140158AB0(
          &dword_140404A6C[16 * (v37 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
          "Directory of %s",
          v115);
        sub_1400C3E00(v1);
        LOBYTE(dword_140404A6C[16 * (v37 + (int)dword_140404A6C[v2 + 278846111]) + 278846114]) = 0;
        return sub_1401F8B20((unsigned __int64)&v105 ^ v116);
      }
    }
    v47 = 0;
    do
    {
      v48 = Str1[v47++];
      if ( v48 != sr_mem_140275f80[v47 - 1] )
      {
        v74 = 0;
        while ( 1 )
        {
          v75 = Str1[v74++];
          if ( v75 != sr_mem_140276018[v74 - 1] )
            break;
          if ( v74 == 8 )
            goto LABEL_131;
        }
        if ( strcmp_sr(Str1, "MISSION.EXE") )
        {
          v84 = 0;
          while ( 1 )
          {
            v85 = Str1[v84++];
            if ( v85 != sr_mem_140276050[v84 - 1] )
              break;
            if ( v84 == 8 )
              goto LABEL_142;
          }
          if ( strcmp_sr(Str1, "DECRYPT.EXE") )
          {
            v92 = 0;
            while ( 1 )
            {
              v93 = Str1[v92++];
              if ( v93 != sr_mem_14027609c[v92 - 1] )
                break;
              if ( v92 == 6 )
                goto LABEL_155;
            }
            if ( !strcmp_sr(Str1, "SNAKE.EXE") )
            {
LABEL_155:
              dword_140404A6C[v2 + 278847324] = 3;
              dword_140404A6C[v2 + 278846113] = -1;
              *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
              sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v2 + 278847325]), 0, 0x520u);
              sub_1400C92B0(v1);
              return sub_1401F8B20((unsigned __int64)&v105 ^ v116);
            }
            if ( *(_BYTE *)v11 )
            {
              v94 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
              *(_OWORD *)((char *)&dword_140404A6C[278846114] + v94) = xmmword_140276030;
              *(_QWORD *)((char *)&dword_140404A6C[278846118] + v94) = 0x454D414E20454C49LL;
              *((_BYTE *)&dword_140404A6C[278846120] + v94) = 0;
              goto LABEL_178;
            }
            return sub_1401F8B20((unsigned __int64)&v105 ^ v116);
          }
LABEL_142:
          LODWORD(v108) = (_DWORD)v110;
          LODWORD(v109) = v106;
          v86 = -1;
          if ( (unsigned int)sub_14004C9C0(v1, (int *)&v109, (int *)&v108, (__int64)v11, &v107) )
            goto LABEL_150;
          v87 = sub_14004C960(v1, v109);
          if ( v87 == -1 )
            goto LABEL_150;
          v88 = v107;
          v89 = 0;
          if ( v107 < 62 )
          {
            while ( 1 )
            {
              v90 = *((_BYTE *)v11 + v88);
              if ( (unsigned __int8)(v90 - 97) <= 0x19u
                || (unsigned __int8)(v90 - 65) <= 0x19u
                || (unsigned __int8)(v90 - 48) <= 9u
                || !v90 )
              {
                break;
              }
              if ( ++v88 >= 62 )
                goto LABEL_150;
            }
            if ( v88 < 62 )
            {
              v95 = Str1;
              do
              {
                v96 = *((_BYTE *)v11 + v88);
                if ( (unsigned __int8)(v96 - 97) > 0x19u
                  && (unsigned __int8)(v96 - 65) > 0x19u
                  && (unsigned __int8)(v96 - 48) > 9u
                  && v96 != 46 )
                {
                  break;
                }
                *v95 = v96;
                ++v89;
                ++v95;
                ++v88;
              }
              while ( v88 < 62 );
            }
          }
          Str1[v89] = 0;
          if ( v89 <= 0 )
            goto LABEL_150;
          v97 = 2570LL * v87;
          v98 = dword_140404A6C[v97 + 275754072];
          if ( v98 <= 0 )
            goto LABEL_150;
          v99 = &dword_140404A6C[v97 + 275754078];
          v100 = (     char *)&dword_140404A6C[v97 + 275754074];
          do
          {
            if ( *v99 == (_DWORD)v108 && !strcmp_sr(v100, Str1) )
              v86 = v6;
            ++v6;
            v100 += 24;
            v99 += 6;
          }
          while ( v6 < v98 );
          if ( v86 == -1 )
          {
LABEL_150:
            v91 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
            *(_OWORD *)((char *)&dword_140404A6C[278846114] + v91) = xmmword_140276080;
            *(_QWORD *)((char *)&dword_140404A6C[278846118] + v91) = 0x656D616E656C6966LL;
            *(_WORD *)((char *)&dword_140404A6C[278846120] + v91) = 34;
            goto LABEL_178;
          }
          v101 = (int)dword_140404A6C[6 * v86 + 275754073 + v97];
          if ( dword_140404A6C[290 * v101 + 273377606] )
          {
            dword_140404A6C[v2 + 278846113] = -1;
            dword_140404A6C[v2 + 278847324] = 1;
            dword_140404A6C[v2 + 278847454] = v101;
            sub_1400C5C00(v1);
            return sub_1401F8B20((unsigned __int64)&v105 ^ v116);
          }
          v102 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
          *(_OWORD *)((char *)&dword_140404A6C[278846114] + v102) = xmmword_140276068;
          *(unsigned int *)((char *)&dword_140404A6C[278846118] + v102) = 4542553;
          goto LABEL_178;
        }
LABEL_131:
        v76 = 110 * v1;
        if ( dword_140404A6C[v2 + 278847323] == -1 )
        {
          v103 = (v76 + (int)dword_140404A6C[v2 + 278846111]) << 6;
          *(_OWORD *)((char *)&dword_140404A6C[278846114] + v103) = xmmword_140276030;
          *(_QWORD *)((char *)&dword_140404A6C[278846118] + v103) = 0x454D414E20454C49LL;
          *((_BYTE *)&dword_140404A6C[278846120] + v103) = 0;
          goto LABEL_178;
        }
        dword_140404A6C[v2 + 278847324] = 2;
        dword_140404A6C[v2 + 278846113] = -1;
        *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
        v110 = &dword_140404A6C[v2 + 278847325];
        sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v2 + 278847325]), 0, 0x420u);
        dword_140404A6C[v2 + 278847328] = -1;
        v77 = 0;
        v78 = (char *)&dword_140404A6C[1760 * v1 + 278846114];
        do
        {
          *v78 = 0;
          if ( !v77 )
            strcpy(v78, "CONNECTING...");
          si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
          v80 = &dword_140404A6C[16 * (v76 + (unsigned int)v77) + 278846626];
          *(__m128i *)v80 = si128;
          *((__m128i *)v80 + 1) = si128;
          *((__m128i *)v80 + 2) = si128;
          *((_QWORD *)v80 + 6) = SR_VEC_LANES(128, si128, i64)[0];
          v80[14] = SR_VEC_LANES(128, si128, i32)[0];
          *((_WORD *)v80 + 30) = SR_VEC_LANES(128, si128, i16)[0];
          *((_BYTE *)v80 + 62) = SR_VEC_LANES(128, si128, i8)[0];
          sub_140050F90(v1, v77++);
          v78 += 64;
        }
        while ( v77 < 24 );
        v81 = v111;
        v45 = dword_140404A6C[456202453] == 0;
        *v110 = 0;
        *(unsigned int *)((char *)&dword_140404A6C[278847326] + v81) = 256;
        if ( !v45 )
        {
          v82 = dword_140404A6C[283831474];
          v83 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v83) = 19;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v83) = v82;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v83) = dword_140404A6C[283786017];
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v83) = v1;
          *(unsigned int *)((char *)&dword_140404A6C[297756297] + v83) = 1065353216;
          *(unsigned int *)((char *)&dword_140404A6C[297756298] + v83) = 1065353216;
        }
        return sub_1401F8B20((unsigned __int64)&v105 ^ v116);
      }
    }
    while ( v47 != 5 );
    LODWORD(v108) = (_DWORD)v110;
    LODWORD(v109) = v5;
    if ( (unsigned int)sub_14004C9C0(v1, (int *)&v109, (int *)&v108, (__int64)v11, &v107) )
    {
      v54 = v1;
      v73 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
      *(_OWORD *)((char *)&dword_140404A6C[278846114] + v73) = xmmword_140275FB8;
      *(_OWORD *)((char *)&dword_140404A6C[278846118] + v73) = xmmword_140275FC8;
      *(_QWORD *)((char *)&dword_140404A6C[278846122] + v73) = 0x4549464943455053LL;
      *(_WORD *)((char *)&dword_140404A6C[278846124] + v73) = 68;
      sub_1400C3E00(v1);
    }
    else
    {
      v49 = sub_14004C960(v1, v109);
      v50 = v49;
      if ( v49 != -1 )
      {
        v51 = v107;
        v52 = 0;
        if ( v107 < 62 )
        {
          while ( 1 )
          {
            v53 = *((_BYTE *)v11 + v51);
            if ( (unsigned __int8)(v53 - 97) <= 0x19u
              || (unsigned __int8)(v53 - 65) <= 0x19u
              || (unsigned __int8)(v53 - 48) <= 9u
              || !v53 )
            {
              break;
            }
            v107 = ++v51;
            if ( v51 >= 62 )
              goto LABEL_98;
          }
          if ( v51 < 62 )
          {
            v56 = Str1;
            do
            {
              v57 = *((_BYTE *)v11 + v51);
              if ( (unsigned __int8)(v57 - 97) > 0x19u
                && (unsigned __int8)(v57 - 65) > 0x19u
                && (unsigned __int8)(v57 - 48) > 9u
                && v57 != 46 )
              {
                break;
              }
              *v56 = v57;
              ++v52;
              ++v56;
              ++v51;
            }
            while ( v51 < 62 );
            v107 = v51;
          }
        }
        Str1[v52] = 0;
        if ( v52 > 0 )
        {
          v58 = 2570LL * v49;
          v59 = 0;
          v109 = 10280 * v50;
          v60 = dword_140404A6C[2570 * v50 + 275754072];
          if ( v60 > 0 )
          {
            v61 = &dword_140404A6C[v58 + 275754078];
            v62 = (     char *)&dword_140404A6C[v58 + 275754074];
            do
            {
              if ( *v61 == (_DWORD)v108 && !strcmp_sr(v62, Str1) )
                v3 = v59;
              ++v59;
              v62 += 24;
              v61 += 6;
            }
            while ( v59 < v60 );
            if ( v3 != -1 )
            {
              LODWORD(v108) = (_DWORD)v110;
              if ( (unsigned int)sub_14004C9C0(v1, (int *)&v106, (int *)&v108, (__int64)v11, &v107) == 1 )
              {
                v63 = v106;
                v64 = sub_14004C960(v1, v106);
                v65 = v64;
                if ( v64 == -1 )
                  return sub_1401F8B20((unsigned __int64)&v105 ^ v116);
                v66 = v108;
                if ( (unsigned int)sub_140080820(v64, v108, (__int64)Str1) == -1 )
                {
                  if ( (int)dword_140404A6C[2570 * v65 + 275753046] < 400
                    && (int)dword_140404A6C[2570 * v65 + 275754072] >= 3 )
                  {
                    v67 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
                    *(_OWORD *)((char *)&dword_140404A6C[278846114] + v67) = xmmword_140275F88;
                    *(_QWORD *)((char *)&dword_140404A6C[278846118] + v67) = 0x4543415053204BLL;
                    goto LABEL_178;
                  }
                  dword_140404A6C[v2 + 278847243] = 0;
                  dword_140404A6C[v2 + 278847244] = 256;
                  dword_140404A6C[v2 + 278847258] = 0;
                  dword_140404A6C[v2 + 278847245] = v63;
                  dword_140404A6C[v2 + 278847246] = v66;
                  v68 = Str1;
                  do
                  {
                    v69 = *v68;
                    v68[(_QWORD)&dword_140404A6C[278847249] + v2 * 4 - (_QWORD)Str1] = *v68;
                    ++v68;
                  }
                  while ( v69 );
                  v70 = (int)dword_140404A6C[v2 + 278846111];
                  dword_140404A6C[v2 + 278847257] = *(unsigned int *)((char *)&dword_140404A6C[6 * v3 + 275754073] + v109);
                  LOBYTE(dword_140404A6C[16 * (110 * v1 + v70) + 278846114]) = 0;
                  sub_140051650(dword_140404A6C[283786018], v1, 1.0, 1.0);
                  return sub_1401F8B20((unsigned __int64)&v105 ^ v116);
                }
                v71 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
                *(_OWORD *)((char *)&dword_140404A6C[278846114] + v71) = xmmword_140275FA0;
                *(unsigned int *)((char *)&dword_140404A6C[278846118] + v71) = 5461075;
              }
              else
              {
                v72 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
                *(_OWORD *)((char *)&dword_140404A6C[278846114] + v72) = xmmword_140275FB8;
                *(_OWORD *)((char *)&dword_140404A6C[278846118] + v72) = xmmword_140275FC8;
                *(_QWORD *)((char *)&dword_140404A6C[278846122] + v72) = 0x4549464943455053LL;
                *(_WORD *)((char *)&dword_140404A6C[278846124] + v72) = 68;
              }
LABEL_178:
              sub_1400C3E00(v1);
              return sub_1401F8B20((unsigned __int64)&v105 ^ v116);
            }
          }
        }
      }
LABEL_98:
      v54 = v1;
    }
    v55 = (110 * v54 + (int)dword_140404A6C[v2 + 278846111]) << 6;
    *(_OWORD *)((char *)&dword_140404A6C[278846114] + v55) = xmmword_140275FE8;
    *(_OWORD *)((char *)&dword_140404A6C[278846118] + v55) = xmmword_140275FF8;
    *(_QWORD *)((char *)&dword_140404A6C[278846122] + v55) = 0x4549464943455053LL;
    *(_WORD *)((char *)&dword_140404A6C[278846124] + v55) = 68;
    goto LABEL_178;
  }
  v106 = v5;
  if ( (unsigned int)sub_14004C9C0(v1, (int *)&v106, (int *)&v108, (__int64)v11, &v107) != 1 )
  {
    v33 = (110 * v1 + (int)dword_140404A6C[v2 + 278846111]) << 6;
    *(_OWORD *)((char *)&dword_140404A6C[278846114] + v33) = xmmword_140275F58;
    *(_WORD *)((char *)&dword_140404A6C[278846118] + v33) = 89;
    goto LABEL_178;
  }
  v23 = (int)v106;
  v24 = v108;
  if ( v106 == 2 )
  {
    v25 = dword_140404A6C[v2 + 278846098];
  }
  else
  {
    if ( v106 || (int)dword_140404A6C[v2 + 278845906] <= 0 )
      return sub_1401F8B20((unsigned __int64)&v105 ^ v116);
    v25 = dword_140404A6C[1760 * dword_140404A6C[v2 + 278845907] + 278846098];
  }
  if ( v25 != -1 )
  {
    if ( (_DWORD)v108 )
    {
      v26 = 1;
      v27 = 1;
      *(_DWORD *)Str1 = v108;
      do
      {
        v24 = dword_140404A6C[2570 * v25 + 275753051 + 4 * v24];
        if ( !v24 )
          break;
        *(_DWORD *)&Str1[4 * v27] = v24;
        ++v26;
        ++v27;
      }
      while ( v27 < 8 );
      v28 = v26;
      v29 = v2 * 4 + 72 * v23;
      *(_QWORD *)((char *)&dword_140404A6C[278847172] + v29) = 0;
      if ( v26 >= 1LL )
      {
        v30 = 18 * v23;
        v31 = &v112[4 * v26];
        do
        {
          v32 = *(int *)((char *)&dword_140404A6C[278847172] + v29);
          v31 -= 4;
          *(unsigned int *)((char *)&dword_140404A6C[278847172] + v29) = v32 + 1;
          dword_140404A6C[v7 + 278847174 + v30 + v32] = *((_DWORD *)v31 + 1);
          --v28;
        }
        while ( v28 );
      }
    }
    else
    {
      *(_QWORD *)&dword_140404A6C[18 * (int)v106 + 278847172 + v2] = 0;
    }
  }
  return sub_1401F8B20((unsigned __int64)&v105 ^ v116);
}
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef Str1
#undef v114
#undef v115
#undef v116

// 1400C43E1: conditional instruction was optimized away because dl.1 is in (30..39|41..5A|61..7A)
// 1400C4A73: conditional instruction was optimized away because cl.1 is in (==2E|30..39)
// 1400C51C3: conditional instruction was optimized away because cl.1 is in (==2E|30..39)
// 140275F48: using guessed type __int128 xmmword_140275F48;
// 140275F58: using guessed type __int128 xmmword_140275F58;
// 140275F6C: using guessed type _BYTE byte_140275F6C[4];
// 140275F88: using guessed type __int128 xmmword_140275F88;
// 140275FA0: using guessed type __int128 xmmword_140275FA0;
// 140275FB8: using guessed type __int128 xmmword_140275FB8;
// 140275FC8: using guessed type __int128 xmmword_140275FC8;
// 140275FE8: using guessed type __int128 xmmword_140275FE8;
// 140275FF8: using guessed type __int128 xmmword_140275FF8;
// 140276030: using guessed type __int128 xmmword_140276030;
// 140276068: using guessed type __int128 xmmword_140276068;
// 140276080: using guessed type __int128 xmmword_140276080;
// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183E936F0: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400C5360) ----------------------------------------------------
__int64            sub_1400C5360(int a1)
{
  __int64 v2; // rax
  int v3; // ebx
  unsigned int *v4; // r11
  int v5; // r10d
  __int64 v6; // rsi
  char *v7; // rcx
  unsigned int *v8; // rdi
  int v9; // r9d
  char v10; // al
  char v11; // dl
  __int64 v12; // rdi
  __int64 v13; // r9
  unsigned int *v14; // r8
  char *v15; // rcx
  unsigned int *v16; // rdx
  char v17; // al
  char *v18; // r9
  unsigned int *v19; // r11
  _BYTE *v20; // r10
  int v21; // r8d
  char v22; // cl
  char v23; // dl
  __int64 v24; // r9
  unsigned int *v25; // r8
  char *v26; // rcx
  unsigned int *v27; // rdx
  char v28; // al

  v2 = 1760LL * a1;
  v3 = 0;
  v4 = &dword_140404A6C[v2 + 278847519];
  v5 = 0;
  v6 = a1;
  v7 = (char *)&dword_140404A6C[v2 + 278846386] + 1;
  v8 = &dword_140404A6C[v2 + 278845893];
  do
  {
    v9 = *v4;
    *(v7 - 1) = v5 + 65;
    v10 = 12;
    if ( v8[1690] != v5 )
      v10 = 15;
    v7[2047] = v10;
    v7[2048] = -113;
    if ( v9 < 10 )
      v11 = 32;
    else
      v11 = v9 / 10 + 48;
    *v7 = v11;
    ++v5;
    v7[1] = v9 % 10 + 48;
    ++v4;
    v7[2049] = -113;
    v7[2] = 32;
    v7 += 4;
  }
  while ( v5 < 15 );
  v12 = 1760 * v6;
  LOBYTE(dword_140404A6C[1760 * v6 + 278846401]) = 0;
  sub_140050F90(a1, 17);
  v13 = 15;
  v14 = &dword_140404A6C[1760 * v6 + 278846402];
  v15 = (char *)&dword_140404A6C[1760 * v6 + 278846402] + 2;
  v16 = &dword_140404A6C[1760 * v6 + 278847551];
  do
  {
    if ( *v16 == -1 )
      v17 = 32;
    else
      v17 = *v16 + 65;
    *(_BYTE *)v14 = v17;
    ++v16;
    *(_WORD *)(v15 - 1) = 8224;
    ++v14;
    v15[1] = 32;
    v15 += 4;
    --v13;
  }
  while ( v13 );
  LOBYTE(dword_140404A6C[v12 + 278846417]) = 0;
  sub_140050F90(a1, 18);
  sub_140050F90(a1, 19);
  v18 = (char *)&dword_140404A6C[v12 + 278846434] + 1;
  v19 = &dword_140404A6C[v12 + 278847534];
  v20 = (char *)&dword_140404A6C[v12 + 278846946] + 2;
  do
  {
    v21 = *v19;
    *(v20 - 2050) = v3 + 80;
    v22 = 12;
    if ( dword_140404A6C[v12 + 278847583] != v3 + 15 )
      v22 = 15;
    *(v20 - 2) = v22;
    if ( v21 < 10 )
    {
      v18[2048] = -113;
      v23 = 32;
    }
    else
    {
      *(v20 - 1) = -113;
      v23 = v21 / 10 + 48;
    }
    *v18 = v23;
    ++v3;
    v18[1] = v21
           - 2
           * (4
            * (((((unsigned __int64)(1717986919LL * v21) >> 32) & 0x80000000) != 0LL)
             + ((int)((unsigned __int64)(1717986919LL * v21) >> 32) >> 2))
            + v21 / 10)
           + 48;
    ++v19;
    *v20 = -113;
    v20 += 4;
    v18[2] = 32;
    v18 += 4;
  }
  while ( v3 < 11 );
  LOBYTE(dword_140404A6C[v12 + 278846445]) = 0;
  sub_140050F90(a1, 20);
  v24 = 11;
  v25 = &dword_140404A6C[v12 + 278846450];
  v26 = (char *)&dword_140404A6C[v12 + 278846450] + 2;
  v27 = &dword_140404A6C[v12 + 278847566];
  do
  {
    if ( *v27 == -1 )
      v28 = 32;
    else
      v28 = *v27 + 65;
    *(_BYTE *)v25 = v28;
    ++v27;
    *(_WORD *)(v26 - 1) = 8224;
    ++v25;
    v26[1] = 32;
    v26 += 4;
    --v24;
  }
  while ( v24 );
  LOBYTE(dword_140404A6C[v12 + 278846461]) = 0;
  return sub_140050F90(a1, 21);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C5610) ----------------------------------------------------
__int64            sub_1400C5610(int a1, int a2, __int64 a3, int a4)
{
  int v4; // r11d
  __int64 v5; // r10
  __int64 v6; // rsi
  __int64 v8; // rax
  unsigned __int8 v9; // cl
  __int64 v10; // r8
  __int64 v11; // rcx
  char v12; // al

  v4 = 0;
  v5 = 0;
  v6 = a1;
  do
  {
    v8 = *(char *)(v5 + a3);
    if ( !(_BYTE)v8 )
      break;
    v9 = v8 - 65;
    if ( a4 )
    {
      v10 = v5 + ((a2 + 110 * v6) << 6);
      if ( v9 > 0x19u )
      {
        *((_BYTE *)&dword_140404A6C[278846114] + v10) = v8;
      }
      else
      {
        v11 = *(char *)(v5 + a3);
        v12 = LOBYTE(dword_140404A6C[1760 * v6 + 278847390 + v8]) + 65;
        *((_BYTE *)&dword_140404A6C[278846626] + v10) = 15;
        *((_BYTE *)&dword_140404A6C[278846114] + v10) = v12;
        if ( dword_140404A6C[1760 * v6 + 278847583] == dword_140404A6C[1760 * v6 + 278847390 + v11] )
          *((_BYTE *)&dword_140404A6C[278846626] + v10) = 12;
      }
    }
    else
    {
      if ( v9 <= 0x19u )
      {
        LODWORD(v8) = dword_140404A6C[1760 * v6 + 278847551 + (int)dword_140404A6C[1760 * v6 + 278847390 + v8]];
        if ( (_DWORD)v8 == -1 )
          LOBYTE(v8) = 32;
        else
          LOBYTE(v8) = v8 + 65;
      }
      *((_BYTE *)&dword_140404A6C[1760 * v6 + 278846114 + 16 * a2] + v5) = v8;
    }
    ++v4;
    ++v5;
  }
  while ( v5 < 62 );
  *((_BYTE *)&dword_140404A6C[1760 * v6 + 278846114 + 16 * a2] + v4) = 0;
  return v4;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C5750) ----------------------------------------------------
__int64            sub_1400C5750(int a1)
{
  __int64 v2; // rsi
  unsigned int *v3; // rdi
  signed int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 i; // r8
  __int64 v8; // rcx
  __int64 v9; // r9
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // eax
  char v14; // al
  __int64 v15; // rcx

  v2 = a1;
  v3 = &dword_140404A6C[1760 * a1 + 278847325];
  v4 = 3;
  v5 = 1760LL * a1;
  v6 = v5 * 4 + 128;
  do
  {
    for ( i = 0; i < 62; ++i )
    {
      v8 = *((char *)v3 + i);
      if ( !(_BYTE)v8 )
        break;
      v9 = v6 + i;
      if ( (unsigned __int8)(v8 - 65) > 0x19u )
      {
        *((_BYTE *)&dword_140404A6C[278846114] + v9) = v8;
      }
      else
      {
        v10 = LOBYTE(dword_140404A6C[1760 * v2 + 278847390 + v8]) + 65;
        *((_BYTE *)&dword_140404A6C[278846626] + v9) = 15;
        *((_BYTE *)&dword_140404A6C[278846114] + v9) = v10;
        if ( dword_140404A6C[v5 + 278847583] == dword_140404A6C[1760 * v2 + 278847390 + v8] )
          *((_BYTE *)&dword_140404A6C[278846626] + v9) = 12;
      }
    }
    *((_BYTE *)&dword_140404A6C[278846114] + i + v6) = 0;
    sub_140050F90(a1, v4 - 1);
    v11 = 0;
    do
    {
      v12 = *((char *)v3 + v11);
      if ( !(_BYTE)v12 )
        break;
      if ( (unsigned __int8)(v12 - 65) > 0x19u )
      {
        v14 = *((_BYTE *)v3 + v11);
      }
      else
      {
        v13 = dword_140404A6C[1760 * v2 + 278847551 + (int)dword_140404A6C[1760 * v2 + 278847390 + v12]];
        v14 = v13 == -1 ? 32 : v13 + 65;
      }
      v15 = v6 + v11++;
      *((_BYTE *)&dword_140404A6C[278846130] + v15) = v14;
    }
    while ( v11 < 62 );
    *((_BYTE *)&dword_140404A6C[278846130] + v6 + v11) = 0;
    sub_140050F90(a1, v4);
    v4 += 3;
    v3 += 16;
    v6 += 192;
  }
  while ( v4 < 18 );
  return sub_1400C5360(a1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C58E0) ----------------------------------------------------
float            sub_1400C58E0(int a1)
{
  int v1; // r10d
  __int64 v2; // rbx
  int v3; // edx
  int v4; // r11d
  int *v5; // rcx
  int v6; // r8d
  unsigned int v7; // r9d
  int v8; // r9d
  unsigned int v9; // r8d
  int v10; // r8d
  unsigned int v11; // r9d
  int v12; // r9d
  unsigned int v13; // r8d
  int v14; // r8d
  unsigned int v15; // r9d
  int v16; // r9d
  unsigned int v17; // r8d
  int v18; // r8d
  unsigned int v19; // r9d
  int v20; // r9d
  unsigned int v21; // r8d
  int v22; // r8d
  unsigned int v23; // r9d
  int v24; // r9d
  unsigned int v25; // r8d
  int v26; // r8d
  unsigned int v27; // r9d
  int v28; // r9d
  unsigned int v29; // r8d
  unsigned int v30; // r8d

  v1 = 0;
  v2 = 1760LL * a1;
  v3 = 0;
  v4 = 2;
  v5 = (int *)&dword_140404A6C[1760 * a1 + 278847456];
  do
  {
    v6 = v1 + 1;
    if ( v5[63] <= 0 )
      v6 = v1;
    v7 = dword_140404A6C[v2 + 278847551 + *(v5 - 1)];
    if ( v7 == v4 - 2 )
    {
      ++v3;
    }
    else if ( v7 != -1 )
    {
      ++v6;
    }
    v8 = v6 + 1;
    if ( v5[64] <= 0 )
      v8 = v6;
    v9 = dword_140404A6C[v2 + 278847551 + *v5];
    if ( v9 == v4 - 1 )
    {
      ++v3;
    }
    else if ( v9 != -1 )
    {
      ++v8;
    }
    v10 = v8 + 1;
    if ( v5[65] <= 0 )
      v10 = v8;
    v11 = dword_140404A6C[v2 + 278847551 + v5[1]];
    if ( v11 == v4 )
    {
      ++v3;
    }
    else if ( v11 != -1 )
    {
      ++v10;
    }
    v12 = v10 + 1;
    if ( v5[66] <= 0 )
      v12 = v10;
    v13 = dword_140404A6C[v2 + 278847551 + v5[2]];
    if ( v13 == v4 + 1 )
    {
      ++v3;
    }
    else if ( v13 != -1 )
    {
      ++v12;
    }
    v14 = v12 + 1;
    if ( v5[67] <= 0 )
      v14 = v12;
    v15 = dword_140404A6C[v2 + 278847551 + v5[3]];
    if ( v15 == v4 + 2 )
    {
      ++v3;
    }
    else if ( v15 != -1 )
    {
      ++v14;
    }
    v16 = v14 + 1;
    if ( v5[68] <= 0 )
      v16 = v14;
    v17 = dword_140404A6C[v2 + 278847551 + v5[4]];
    if ( v17 == v4 + 3 )
    {
      ++v3;
    }
    else if ( v17 != -1 )
    {
      ++v16;
    }
    v18 = v16 + 1;
    if ( v5[69] <= 0 )
      v18 = v16;
    v19 = dword_140404A6C[v2 + 278847551 + v5[5]];
    if ( v19 == v4 + 4 )
    {
      ++v3;
    }
    else if ( v19 != -1 )
    {
      ++v18;
    }
    v20 = v18 + 1;
    if ( v5[70] <= 0 )
      v20 = v18;
    v21 = dword_140404A6C[v2 + 278847551 + v5[6]];
    if ( v21 == v4 + 5 )
    {
      ++v3;
    }
    else if ( v21 != -1 )
    {
      ++v20;
    }
    v22 = v20 + 1;
    if ( v5[71] <= 0 )
      v22 = v20;
    v23 = dword_140404A6C[v2 + 278847551 + v5[7]];
    if ( v23 == v4 + 6 )
    {
      ++v3;
    }
    else if ( v23 != -1 )
    {
      ++v22;
    }
    v24 = v22 + 1;
    if ( v5[72] <= 0 )
      v24 = v22;
    v25 = dword_140404A6C[v2 + 278847551 + v5[8]];
    if ( v25 == v4 + 7 )
    {
      ++v3;
    }
    else if ( v25 != -1 )
    {
      ++v24;
    }
    v26 = v24 + 1;
    if ( v5[73] <= 0 )
      v26 = v24;
    v27 = dword_140404A6C[v2 + 278847551 + v5[9]];
    if ( v27 == v4 + 8 )
    {
      ++v3;
    }
    else if ( v27 != -1 )
    {
      ++v26;
    }
    v28 = v26 + 1;
    if ( v5[74] <= 0 )
      v28 = v26;
    v29 = dword_140404A6C[v2 + 278847551 + v5[10]];
    if ( v29 == v4 + 9 )
    {
      ++v3;
    }
    else if ( v29 != -1 )
    {
      ++v28;
    }
    v1 = v28 + 1;
    if ( v5[75] <= 0 )
      v1 = v28;
    v30 = dword_140404A6C[v2 + 278847551 + v5[11]];
    if ( v30 == v4 + 10 )
    {
      ++v3;
    }
    else if ( v30 != -1 )
    {
      ++v1;
    }
    v4 += 13;
    v5 += 13;
  }
  while ( v4 - 2 < 26 );
  if ( v1 <= 0 )
    return 1.0;
  else
    return (float)v3 / (float)v1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C5C00) ----------------------------------------------------
__int64            sub_1400C5C00(int a1)
{
  __int64 v1; // r8
  __int64 v2; // r13
  unsigned int *v3; // rcx
  _BYTE *v4; // rdx
  char v5; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  signed int v8; // edi
  int v9; // edx
  int v10; // r8d
  int v11; // ebx
  __int64 v12; // rax
  int v13; // r12d
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbp
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r14
  _BYTE *v53; // rbx
  unsigned __int8 v54; // al
  __int64 v55; // rcx
  __int64 v56; // r10
  __int64 v57; // r9
  char *v58; // rax
       char *v59; // rcx
  __int64 v60; // r8
  char v61; // dl
  char v62; // dl
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C5C00[624];
#define v64 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 0)) /* [rsp+0h] */
#define v65 (*(int (*))(void *)(sr_frame_1400C5C00 + 32)) /* [rsp+20h] */
#define v66 (*(int (*))(void *)(sr_frame_1400C5C00 + 36)) /* [rsp+24h] */
#define v67 (*(int (*))(void *)(sr_frame_1400C5C00 + 40)) /* [rsp+28h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 48)) /* [rsp+30h] */
#define v69 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 56)) /* [rsp+38h] */
#define v70 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 64)) /* [rsp+40h] */
#define v71 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 72)) /* [rsp+48h] */
#define v72 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 80)) /* [rsp+50h] */
#define v73 (*(_BYTE (*)[512])(void *)(sr_frame_1400C5C00 + 96)) /* [rsp+60h] */
#define v74 (*(__int64 (*))(void *)(sr_frame_1400C5C00 + 608)) /* [rsp+260h] */

  v1 = a1;
  v2 = 1760LL * a1;
  v67 = a1;
  v69 = a1;
  v71 = v2 * 4;
  v70 = (int)dword_140404A6C[v2 + 278847454];
  v3 = &dword_140404A6C[290 * v70 + 273377350];
  v4 = (_BYTE *)(v73 - (_BYTE *)v3);
  do
  {
    v5 = *(_BYTE *)v3;
    *((_BYTE *)v3 + (_QWORD)v4) = *(_BYTE *)v3;
    v3 = (unsigned int *)((char *)v3 + 1);
  }
  while ( v5 );
  v6 = -1;
  v68 = 110 * v1;
  v7 = 1760 * v1;
  v8 = 0;
  v72 = v7 * 4;
  v9 = 0;
  v66 = 0;
  v65 = 0;
  v10 = 0;
  LOBYTE(dword_140404A6C[v7 + 278847325]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847341]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847357]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847373]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847389]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847405]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847421]) = 0;
  LOBYTE(dword_140404A6C[v7 + 278847437]) = 0;
  dword_140404A6C[v2 + 278847584] = 0;
  do
    ++v6;
  while ( v73[v6] );
  v11 = 59;
  if ( (int)v6 < 59 )
    v11 = v6;
  v12 = v11;
  if ( v11 > 30LL )
  {
    do
    {
      if ( v73[v12] == 32 )
        break;
      --v11;
      --v12;
    }
    while ( v12 > 30 );
  }
  v13 = v6 - 1;
  v14 = (int)v6 - 1LL;
  v15 = 0;
  v16 = 0;
  do
  {
    if ( !v73[v15] )
      break;
    v17 = toupper((char)v73[v15]);
    v10 = v66;
    v18 = v2 * 4 + v16++;
    v9 = ++v65;
    *((_BYTE *)&dword_140404A6C[278847325] + v18) = v17;
    if ( v9 > v11 )
    {
      ++v10;
      v19 = v2 * 4 + v16;
      v66 = v10;
      v11 = 59;
      v2 += 16;
      v9 = 0;
      v16 = 0;
      v65 = 0;
      *((_BYTE *)&dword_140404A6C[278847325] + v19) = 0;
      v20 = 59;
      if ( v13 >= 59 || (v11 = v13, v20 = v14, v14 > 30) )
      {
        do
        {
          if ( v73[v15 + 1 + v20] == 32 )
            break;
          --v11;
          --v20;
        }
        while ( v20 > 30 );
      }
    }
    --v13;
    ++v15;
    --v14;
  }
  while ( v15 < 256 );
  v21 = 1760 * v69;
  v22 = v68;
  v23 = v71;
  *((_BYTE *)&dword_140404A6C[16 * (v68 + v10) + 278847325] + v9) = 0;
  v24 = 290 * v70;
  dword_140404A6C[v21 + 278847455] = dword_140404A6C[290 * v70 + 273377607];
  dword_140404A6C[v21 + 278847456] = dword_140404A6C[v24 + 273377608];
  dword_140404A6C[v21 + 278847457] = dword_140404A6C[v24 + 273377609];
  dword_140404A6C[v21 + 278847458] = dword_140404A6C[v24 + 273377610];
  dword_140404A6C[v21 + 278847459] = dword_140404A6C[v24 + 273377611];
  dword_140404A6C[v21 + 278847460] = dword_140404A6C[v24 + 273377612];
  dword_140404A6C[v21 + 278847461] = dword_140404A6C[v24 + 273377613];
  dword_140404A6C[v21 + 278847462] = dword_140404A6C[v24 + 273377614];
  dword_140404A6C[v21 + 278847463] = dword_140404A6C[v24 + 273377615];
  dword_140404A6C[v21 + 278847464] = dword_140404A6C[v24 + 273377616];
  dword_140404A6C[v21 + 278847465] = dword_140404A6C[v24 + 273377617];
  dword_140404A6C[v21 + 278847466] = dword_140404A6C[v24 + 273377618];
  dword_140404A6C[v21 + 278847467] = dword_140404A6C[v24 + 273377619];
  dword_140404A6C[v21 + 278847468] = dword_140404A6C[v24 + 273377620];
  dword_140404A6C[v21 + 278847469] = dword_140404A6C[v24 + 273377621];
  dword_140404A6C[v21 + 278847470] = dword_140404A6C[v24 + 273377622];
  dword_140404A6C[v21 + 278847471] = dword_140404A6C[v24 + 273377623];
  dword_140404A6C[v21 + 278847472] = dword_140404A6C[v24 + 273377624];
  dword_140404A6C[v21 + 278847473] = dword_140404A6C[v24 + 273377625];
  dword_140404A6C[v21 + 278847474] = dword_140404A6C[v24 + 273377626];
  dword_140404A6C[v21 + 278847475] = dword_140404A6C[v24 + 273377627];
  dword_140404A6C[v21 + 278847476] = dword_140404A6C[v24 + 273377628];
  dword_140404A6C[v21 + 278847477] = dword_140404A6C[v24 + 273377629];
  dword_140404A6C[v21 + 278847478] = dword_140404A6C[v24 + 273377630];
  dword_140404A6C[v21 + 278847479] = dword_140404A6C[v24 + 273377631];
  dword_140404A6C[v21 + 278847480] = dword_140404A6C[v24 + 273377632];
  *(unsigned int *)((char *)&dword_140404A6C[278847583] + v23) = -1;
  dword_140404A6C[v21 + 278847487 + (int)dword_140404A6C[v21 + 278847455]] = 0;
  v25 = v21 + (int)dword_140404A6C[v21 + 278847456];
  dword_140404A6C[v21 + 278847519] = 0;
  dword_140404A6C[v21 + 278847551] = -1;
  dword_140404A6C[v25 + 278847487] = 1;
  v26 = v21 + (int)dword_140404A6C[v21 + 278847457];
  dword_140404A6C[v21 + 278847520] = 0;
  dword_140404A6C[v21 + 278847552] = -1;
  dword_140404A6C[v26 + 278847487] = 2;
  v27 = v21 + (int)dword_140404A6C[v21 + 278847458];
  dword_140404A6C[v21 + 278847521] = 0;
  dword_140404A6C[v21 + 278847553] = -1;
  dword_140404A6C[v27 + 278847487] = 3;
  v28 = 8;
  v29 = v21 + (int)dword_140404A6C[v21 + 278847459];
  dword_140404A6C[v21 + 278847522] = 0;
  dword_140404A6C[v21 + 278847554] = -1;
  dword_140404A6C[v29 + 278847487] = 4;
  v30 = v21 + (int)dword_140404A6C[v21 + 278847460];
  dword_140404A6C[v21 + 278847523] = 0;
  dword_140404A6C[v21 + 278847555] = -1;
  dword_140404A6C[v30 + 278847487] = 5;
  v31 = v21 + (int)dword_140404A6C[v21 + 278847461];
  dword_140404A6C[v21 + 278847524] = 0;
  dword_140404A6C[v21 + 278847556] = -1;
  dword_140404A6C[v31 + 278847487] = 6;
  v32 = v21 + (int)dword_140404A6C[v21 + 278847462];
  dword_140404A6C[v21 + 278847525] = 0;
  dword_140404A6C[v21 + 278847557] = -1;
  dword_140404A6C[v32 + 278847487] = 7;
  v33 = v21 + (int)dword_140404A6C[v21 + 278847463];
  dword_140404A6C[v21 + 278847526] = 0;
  dword_140404A6C[v21 + 278847558] = -1;
  dword_140404A6C[v33 + 278847487] = 8;
  v34 = v21 + (int)dword_140404A6C[v21 + 278847464];
  dword_140404A6C[v21 + 278847527] = 0;
  dword_140404A6C[v21 + 278847559] = -1;
  dword_140404A6C[v34 + 278847487] = 9;
  v35 = v21 + (int)dword_140404A6C[v21 + 278847465];
  dword_140404A6C[v21 + 278847528] = 0;
  dword_140404A6C[v21 + 278847560] = -1;
  dword_140404A6C[v35 + 278847487] = 10;
  v36 = v21 + (int)dword_140404A6C[v21 + 278847466];
  dword_140404A6C[v21 + 278847529] = 0;
  dword_140404A6C[v21 + 278847561] = -1;
  dword_140404A6C[v36 + 278847487] = 11;
  v37 = v21 + (int)dword_140404A6C[v21 + 278847467];
  dword_140404A6C[v21 + 278847530] = 0;
  dword_140404A6C[v21 + 278847562] = -1;
  dword_140404A6C[v37 + 278847487] = 12;
  v38 = v21 + (int)dword_140404A6C[v21 + 278847468];
  dword_140404A6C[v21 + 278847531] = 0;
  dword_140404A6C[v21 + 278847563] = -1;
  dword_140404A6C[v38 + 278847487] = 13;
  v39 = v21 + (int)dword_140404A6C[v21 + 278847469];
  dword_140404A6C[v21 + 278847532] = 0;
  dword_140404A6C[v21 + 278847564] = -1;
  dword_140404A6C[v39 + 278847487] = 14;
  v40 = v21 + (int)dword_140404A6C[v21 + 278847470];
  dword_140404A6C[v21 + 278847533] = 0;
  dword_140404A6C[v21 + 278847565] = -1;
  dword_140404A6C[v40 + 278847487] = 15;
  v41 = v21 + (int)dword_140404A6C[v21 + 278847471];
  dword_140404A6C[v21 + 278847534] = 0;
  dword_140404A6C[v21 + 278847566] = -1;
  dword_140404A6C[v41 + 278847487] = 16;
  v42 = v21 + (int)dword_140404A6C[v21 + 278847472];
  dword_140404A6C[v21 + 278847535] = 0;
  dword_140404A6C[v21 + 278847567] = -1;
  dword_140404A6C[v42 + 278847487] = 17;
  v43 = v21 + (int)dword_140404A6C[v21 + 278847473];
  dword_140404A6C[v21 + 278847536] = 0;
  dword_140404A6C[v21 + 278847568] = -1;
  dword_140404A6C[v43 + 278847487] = 18;
  v44 = v21 + (int)dword_140404A6C[v21 + 278847474];
  dword_140404A6C[v21 + 278847537] = 0;
  dword_140404A6C[v21 + 278847569] = -1;
  dword_140404A6C[v44 + 278847487] = 19;
  v45 = v21 + (int)dword_140404A6C[v21 + 278847475];
  dword_140404A6C[v21 + 278847538] = 0;
  dword_140404A6C[v21 + 278847570] = -1;
  v46 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v23 + 1119602656;
  dword_140404A6C[v45 + 278847487] = 20;
  v47 = v21 + (int)dword_140404A6C[v21 + 278847476];
  dword_140404A6C[v21 + 278847539] = 0;
  dword_140404A6C[v21 + 278847571] = -1;
  dword_140404A6C[v47 + 278847487] = 21;
  v48 = v21 + (int)dword_140404A6C[v21 + 278847477];
  dword_140404A6C[v21 + 278847540] = 0;
  dword_140404A6C[v21 + 278847572] = -1;
  dword_140404A6C[v48 + 278847487] = 22;
  v49 = v21 + (int)dword_140404A6C[v21 + 278847478];
  dword_140404A6C[v21 + 278847541] = 0;
  dword_140404A6C[v21 + 278847573] = -1;
  dword_140404A6C[v49 + 278847487] = 23;
  v50 = v21 + (int)dword_140404A6C[v21 + 278847479];
  dword_140404A6C[v21 + 278847542] = 0;
  dword_140404A6C[v21 + 278847574] = -1;
  dword_140404A6C[v50 + 278847487] = 24;
  v51 = v21 + (int)dword_140404A6C[v21 + 278847480];
  dword_140404A6C[v21 + 278847543] = 0;
  dword_140404A6C[v21 + 278847575] = -1;
  v52 = -v46;
  dword_140404A6C[v51 + 278847487] = 25;
  dword_140404A6C[v21 + 278847544] = 0;
  dword_140404A6C[v21 + 278847576] = -1;
  do
  {
    v53 = (_BYTE *)v46;
    do
    {
      if ( !*v53 )
        break;
      v54 = toupper((unsigned __int8)*v53);
      *v53 = v54;
      if ( (unsigned __int8)(v54 - 65) <= 0x19u )
      {
        v55 = v21 + (int)dword_140404A6C[v21 + 278847390 + v54];
        ++dword_140404A6C[v55 + 278847519];
      }
      ++v53;
    }
    while ( (__int64)&v53[v52] < 62 );
    v52 -= 64;
    v46 += 64;
    --v28;
  }
  while ( v28 );
  v56 = v72;
  v57 = 0;
  *(_QWORD *)((char *)&dword_140404A6C[278846111] + v23) = 0;
  do
  {
    if ( v57 )
    {
      LOBYTE(dword_140404A6C[16 * (v57 + v22) + 278846114]) = 0;
    }
    else
    {
      v58 = (char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v23 + 1119597812);
      v59 = "DECRYPTER     Ctrl-R RESET   Ctrl-P PRINT    Ctrl-X EXIT";
      v60 = 31;
      do
      {
        v61 = *v59;
        if ( *v59 )
          ++v59;
        else
          v61 = 32;
        *v58 = v61;
        v62 = *v59;
        v58[2048] = 31;
        if ( v62 )
          ++v59;
        else
          v62 = 32;
        v58[1] = v62;
        v58[2049] = 31;
        v58 += 2;
        --v60;
      }
      while ( v60 );
      *((_BYTE *)&dword_140404A6C[278846129] + v56 + 2) = 0;
    }
    ++v57;
  }
  while ( v57 < 24 );
  sub_1400C5750(v67);
  do
    sub_140050F90(v67, v8++);
  while ( v8 < 24 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C6580) ----------------------------------------------------
__int64            sub_1400C6580(int a1, __int16 a2)
{
  signed int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rbp
  int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  float v11; // xmm1_4
  float v12; // xmm0_4
  int v13; // eax
  int v14; // edi
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rbp
  char *v18; // rcx
  unsigned int *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int v23; // edx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C6580[2112];
#define v25 (*(_BYTE (*)[32])(void *)(sr_frame_1400C6580 + 0)) /* [rsp+0h] */
#define v26 (*(float (*)[4])(void *)(sr_frame_1400C6580 + 32)) /* [rsp+20h] */
#define v27 (*(__m128i (*)[64])(void *)(sr_frame_1400C6580 + 48)) /* [rsp+30h] */
#define v28 (*(char (*)[1024])(void *)(sr_frame_1400C6580 + 1072)) /* [rsp+430h] */
#define v29 (*(__int64 (*))(void *)(sr_frame_1400C6580 + 2096)) /* [rsp+830h] */

  v2 = 0;
  LOBYTE(v4) = a2;
  v5 = a1;
  if ( (a2 & 0x100) == 0 )
    goto LABEL_4;
  LODWORD(v4) = toupper((unsigned __int8)a2);
  if ( (_DWORD)v4 == 82 )
  {
    v4 = 1760 * v5;
    *(_QWORD *)&dword_140404A6C[v4 + 278847551] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847553] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847555] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847557] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847559] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847561] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847563] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847565] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847567] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847569] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847571] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847573] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847575] = -1;
    LOBYTE(v4) = 0;
LABEL_4:
    v6 = toupper((unsigned __int8)v4);
    if ( v6 == 10 )
    {
      v7 = 1760 * v5;
      if ( dword_140404A6C[1760 * v5 + 278847584] )
      {
        LOBYTE(dword_140404A6C[v7 + 278846130]) = 0;
        sub_140050F90(a1, 1);
        dword_140404A6C[v7 + 278847584] = 0;
      }
      else
      {
        *(_OWORD *)&dword_140404A6C[v7 + 278846130] = xmmword_1402760E8;
        LOWORD(dword_140404A6C[v7 + 278846134]) = 11822;
        BYTE2(dword_140404A6C[v7 + 278846134]) = 0;
        sub_140050F90(a1, 1);
        dword_140404A6C[v7 + 278847584] = (int)(float)((float)((float)(1.0 - sub_1400C58E0(a1)) * 600.0) + 20.0);
      }
    }
    v21 = 1760 * v5;
    if ( (int)dword_140404A6C[1760 * v5 + 278847584] <= 0 )
    {
      v22 = (int)dword_140404A6C[v21 + 278847583];
      v23 = v6 - 65;
      if ( (_DWORD)v22 == -1 )
      {
        if ( v23 <= 0x19 )
          dword_140404A6C[v21 + 278847583] = v23;
      }
      else
      {
        if ( v23 > 0x19 )
        {
          if ( v6 == 32 )
            dword_140404A6C[1760 * v5 + 278847551 + v22] = -1;
        }
        else
        {
          dword_140404A6C[1760 * v5 + 278847551 + v22] = v23;
        }
        dword_140404A6C[v21 + 278847583] = -1;
      }
      sub_1400C5750(a1);
    }
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  if ( (_DWORD)v4 != 80 )
  {
    if ( (_DWORD)v4 == 88 )
    {
      dword_140404A6C[1760 * v5 + 278847324] = 0;
      v20 = &dword_140404A6C[1760 * v5 + 278846114];
      do
      {
        *(_BYTE *)v20 = 0;
        sub_140050F90(a1, v2++);
        v20 += 16;
      }
      while ( v2 < 24 );
      return 0; /* compatibility result discarded by all reviewed callers */
    }
    goto LABEL_4;
  }
  v8 = 1760 * v5;
  v9 = (int)dword_140404A6C[1760 * v5 + 278847323];
  if ( (_DWORD)v9 != -1 )
  {
    v10 = 5 * v9;
    if ( (int)dword_140404A6C[5 * v9 + 188872241] < 4 )
    {
      v11 = (float)(*(float *)&dword_140404A6C[v8 + 278845936] * 0.5) + *(float *)&dword_140404A6C[v8 + 278845918];
      v26[0] = (float)(*(float *)&dword_140404A6C[v8 + 278845934] * 0.5) + *(float *)&dword_140404A6C[v8 + 278845916];
      v12 = *(float *)&dword_140404A6C[v8 + 278845935];
      v26[2] = v11;
      v26[1] = (float)(v12 * 0.5) + *(float *)&dword_140404A6C[v8 + 278845917];
      v13 = sr_CreateItem(34, v26, nullptr, (float *)&dword_140404A6C[v8 + 278845934]);
      v14 = dword_140404A6C[v8 + 278846112];
      v15 = v13;
      v16 = 23;
      v17 = 110 * v5;
      SR_VEC_LANES(128, v27[0], i8)[0] = 0;
      do
      {
        sub_140158AB0(v28, "%s\n", (     char *)&dword_140404A6C[16 * (v17 + v14) + 278846114]);
        v18 = &v25[47];
        while ( *++v18 != 0 )
          ;
        strcpy(v18, v28);
        v14 = ((_BYTE)v14 + 1) & 0x1F;
        --v16;
      }
      while ( v16 );
      sub_1400584B0(v15, v27);
      ++dword_140404A6C[v10 + 188872241];
      dword_140404A6C[1760 * v15 + 278845895] = 1;
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29

// 1402760E8: using guessed type __int128 xmmword_1402760E8;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C6980) ----------------------------------------------------
__int64            sub_1400C6980(int a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 result; // rax
  int v5; // edi
  int v6; // r8d
  __int64 v7; // rbx
  __int64 v8; // rax

  v2 = 1760LL * a1;
  v3 = a1;
  result = dword_140404A6C[v2 + 278847584];
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    dword_140404A6C[v2 + 278847584] = result;
    if ( !(_DWORD)result )
    {
      v5 = 0;
      v6 = rand() % 26;
      v7 = 1760 * v3;
      do
      {
        v8 = v7 + (int)dword_140404A6C[v7 + 278847455 + v6];
        if ( dword_140404A6C[v8 + 278847519] && dword_140404A6C[v8 + 278847551] == -1 )
          break;
        ++v5;
        v6 = rand() % 26;
      }
      while ( v5 < 1000 );
      dword_140404A6C[v7 + 278847551 + (int)dword_140404A6C[v7 + 278847455 + v6]] = v6;
      sub_1400C5750(a1);
      LOBYTE(dword_140404A6C[v2 + 278846130]) = 0;
      return sub_140050F90(a1, 1);
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C6AB0) ----------------------------------------------------
unsigned int *           sub_1400C6AB0(int a1, int a2, char *a3, char a4, int a5)
{
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // r10
  unsigned int *v8; // rax
  char v9; // cl

  v5 = 0;
  v6 = a1;
  v7 = a5;
  if ( a5 > 0 )
  {
    v5 = a5;
    v8 = &dword_140404A6C[16 * (a2 + 110LL * a1) + 278846626];
    do
    {
      v9 = *a3;
      if ( *a3 )
        ++a3;
      else
        v9 = 32;
      *((_BYTE *)v8 - 2048) = v9;
      *(_BYTE *)v8 = a4;
      v8 = (unsigned int *)((char *)v8 + 1);
      --v7;
    }
    while ( v7 );
  }
  *((_BYTE *)&dword_140404A6C[16 * (a2 + 110 * v6) + 278846114] + v5) = 0;
  return &dword_140404A6C[278846114];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C6B30) ----------------------------------------------------
void            sub_1400C6B30(_BYTE *a1, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  unsigned int v6; // ebp
  int v7; // r9d
  __int64 v8; // rdx
  char *v9; // r11
  int *v10; // r10
  char *v11; // rcx
  bool v12; // zf
  int v13; // eax
  _WORD *v14; // rax

  v3 = a3;
  if ( a3 == 2 )
  {
    v5 = 1760LL * a2;
    v6 = dword_140404A6C[v5 + 278846098];
  }
  else
  {
    if ( a3 )
      goto LABEL_17;
    v5 = 1760LL * a2;
    if ( (int)dword_140404A6C[v5 + 278845906] <= 0 )
      goto LABEL_17;
    v6 = dword_140404A6C[1760 * dword_140404A6C[v5 + 278845907] + 278846098];
  }
  if ( v6 == -1 )
  {
LABEL_17:
    *a1 = 0;
    return;
  }
  sub_140158AB0(a1, "%c:\\", (unsigned int)(a3 + 65));
  v7 = 1;
  v8 = v5 * 4 + 72 * v3;
  v9 = (char *)&dword_140404A6C[278845893] + v8;
  if ( *(int *)((char *)&dword_140404A6C[278847172] + v8) >= 1 )
  {
    v10 = (int *)((char *)&dword_140404A6C[278847174] + v8);
    do
    {
      v11 = a1 - 1;
      do
        v12 = *++v11 == 0;
      while ( !v12 );
      strcpy(v11, (     char *)&dword_140404A6C[2570 * v6 + 275753048 + 4 * *v10]);
      v13 = *((_DWORD *)v9 + 1279);
      if ( v7 < v13 )
      {
        v14 = a1 - 1;
        do
        {
          v12 = *((_BYTE *)v14 + 1) == 0;
          v14 = (_WORD *)((char *)v14 + 1);
        }
        while ( !v12 );
        *v14 = 92;
        v13 = *((_DWORD *)v9 + 1279);
      }
      ++v7;
      ++v10;
    }
    while ( v7 <= v13 );
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C6C90) ----------------------------------------------------
__m128i *           sub_1400C6C90(int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  signed int v4; // ebx
  __int64 v5; // rdx
  __m128i *result; // rax
  __m128i si128; // xmm0

  v2 = 1760LL * a1;
  v3 = (int)dword_140404A6C[v2 + 278846111];
  v4 = 2;
  dword_140404A6C[v2 + 278847170] = 2;
  dword_140404A6C[v2 + 278847323] = -1;
  strcpy((char *)&dword_140404A6C[1760 * a1 + 278846114 + 16 * v3], "STARTING CS-DOS...");
  sub_1400C3E00(a1);
  sub_1400C3E00(a1);
  sub_1400C6D90(a1, 0);
  do
    sub_140050F90(a1, v4++);
  while ( v4 < 24 );
  v5 = 32;
  result = (__m128i *)&dword_140404A6C[v2 + 278846626];
  do
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
    *result = si128;
    result[1] = si128;
    result[2] = si128;
    result += 4;
    SR_VEC_LANES(128, result[-1], i64)[0] = SR_VEC_LANES(128, si128, i64)[0];
    SR_VEC_LANES(128, result[-1], i32)[2] = SR_VEC_LANES(128, si128, i32)[0];
    SR_VEC_LANES(128, result[-1], i16)[6] = SR_VEC_LANES(128, si128, i16)[0];
    SR_VEC_LANES(128, result[-1], i8)[14] = SR_VEC_LANES(128, si128, i8)[0];
    --v5;
  }
  while ( v5 );
  return result;
}

// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C6D90) ----------------------------------------------------
int            sub_1400C6D90(int a1, int a2)
{
  __int64 v3; // r14
  int v4; // r8d
  __int64 v5; // r13
  __int64 v6; // rbp
  unsigned int *v7; // rax
  int v8; // r15d
  unsigned int *v9; // rsi
  signed int v10; // edi
  unsigned int *v11; // rbx
  __m128i si128; // xmm0
  int v13; // edx
  _BYTE *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned int v17; // esi
  unsigned int *v18; // rbx
  __int64 v19; // rdx
  char *v20; // r11
  int *v21; // r10
  char *v22; // rcx
  bool v23; // zf
  int v24; // ecx
  _WORD *v25; // rcx
  _WORD *v26; // rcx
  __int64 v27; // r9
  unsigned int *v28; // rcx
  char v29; // al
  __int64 v30; // rcx
  unsigned int *v31; // rdx
  char v32; // r8
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rcx
  unsigned int *v36; // r8

  v3 = 1760LL * a1;
  v4 = a2;
  v5 = a1;
  v6 = -1;
  LODWORD(v7) = dword_140404A6C[v3 + 278847324];
  if ( (_DWORD)v7 == 1 )
  {
    dword_140404A6C[v3 + 278846113] = -1;
    sub_1400C6580(a1, a2);
    LODWORD(v7) = dword_140404A6C[v3 + 278847324];
    if ( (_DWORD)v7 == 1 )
      return (int)v7;
    v4 = 8;
  }
  if ( (_DWORD)v7 == 2 )
  {
    dword_140404A6C[v3 + 278846113] = -1;
    sub_1400C7450(a1, v4);
    LODWORD(v7) = dword_140404A6C[v3 + 278847324];
    if ( (_DWORD)v7 == 2 )
      return (int)v7;
    v4 = 8;
  }
  v8 = 1;
  if ( (_DWORD)v7 == 3 )
  {
    dword_140404A6C[v3 + 278846113] = -1;
    if ( (v4 & 0x100) != 0 )
    {
      LODWORD(v7) = toupper((unsigned __int8)v4);
      if ( (_DWORD)v7 == 88 )
      {
        dword_140404A6C[v3 + 278847324] = 0;
        v9 = &dword_140404A6C[v3 + 278846114];
        v10 = 0;
        v11 = &dword_140404A6C[v3 + 278846626];
        do
        {
          si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
          *(_BYTE *)v9 = 0;
          _mm_storeu_si128((__m128i *)(void *)v11, si128);
          _mm_storeu_si128((__m128i *)(void *)(v11 + 4), si128);
          _mm_storeu_si128((__m128i *)(void *)(v11 + 8), si128);
          *((_QWORD *)v11 + 6) = SR_VEC_LANES(128, si128, i64)[0];
          v11[14] = SR_VEC_LANES(128, si128, i32)[0];
          *((_WORD *)v11 + 30) = SR_VEC_LANES(128, si128, i16)[0];
          *((_BYTE *)v11 + 62) = SR_VEC_LANES(128, si128, i8)[0];
          LODWORD(v7) = sub_140050F90(a1, v10++);
          v11 += 16;
          v9 += 16;
        }
        while ( v10 < 24 );
      }
    }
    else
    {
      switch ( v4 )
      {
        case 19:
          if ( dword_140404A6C[v3 + 278847330] != 2 )
            dword_140404A6C[v3 + 278847330] = 0;
          break;
        case 18:
          if ( dword_140404A6C[v3 + 278847330] )
            dword_140404A6C[v3 + 278847330] = 2;
          break;
        case 17:
          if ( dword_140404A6C[v3 + 278847330] != 3 )
            dword_140404A6C[v3 + 278847330] = 1;
          break;
        default:
          if ( v4 == 16 && dword_140404A6C[v3 + 278847330] != 1 )
            dword_140404A6C[v3 + 278847330] = 3;
          break;
      }
    }
    if ( dword_140404A6C[v3 + 278847324] == 3 )
      return (int)v7;
    LOBYTE(v4) = 8;
  }
  v13 = 0;
  v14 = (char *)&dword_140404A6C[v3 + 278847154] + 1;
  while ( *(v14 - 1) )
  {
    if ( !*v14 )
    {
      ++v13;
      break;
    }
    v14 += 2;
    v13 += 2;
    if ( (intptr_t)((uintptr_t)(v14) - (uintptr_t)(((char *)&dword_140404A6C[v3 + 278847154] + 1))) >= 62 )
      break;
  }
  if ( (int)dword_140404A6C[v3 + 278847244] <= 0 )
  {
    if ( (unsigned __int8)v4 == 10 )
    {
      sub_1400C3E00(a1);
      LODWORD(v7) = sub_1400C4280(a1);
      LOBYTE(dword_140404A6C[v3 + 278847154]) = 0;
      if ( (int)dword_140404A6C[v3 + 278847244] > 0 || dword_140404A6C[v3 + 278847324] )
        return (int)v7;
    }
    else if ( (unsigned __int8)v4 == 8 )
    {
      if ( v13 > 0 )
        *((_BYTE *)&dword_140404A6C[v3 + 278847153] + v13 + 3) = 0;
    }
    else if ( v13 < 62 )
    {
      v15 = v3 * 4 + v13;
      *((_BYTE *)&dword_140404A6C[278847154] + v15) = v4;
      *((_BYTE *)&dword_140404A6C[278847154] + v15 + 1) = 0;
    }
    v16 = (int)dword_140404A6C[v3 + 278847170];
    v17 = 0;
    if ( (_DWORD)v16 == 2 )
    {
      v17 = dword_140404A6C[v3 + 278846098];
    }
    else if ( !(_DWORD)v16 && (int)dword_140404A6C[v3 + 278845906] > 0 )
    {
      v17 = dword_140404A6C[1760 * dword_140404A6C[v3 + 278845907] + 278846098];
    }
    v18 = &dword_140404A6C[v3 + 278847138];
    sub_140158AB0(v18, "%c:\\", (unsigned int)(v16 + 65));
    v19 = v3 * 4 + 72 * v16;
    v20 = (char *)&dword_140404A6C[278845893] + v19;
    if ( *(int *)((char *)&dword_140404A6C[278847172] + v19) >= 1 )
    {
      v21 = (int *)((char *)&dword_140404A6C[278847174] + v19);
      do
      {
        v22 = (char *)v18 - 1;
        do
          v23 = *++v22 == 0;
        while ( !v23 );
        strcpy(v22, (     char *)&dword_140404A6C[2570 * v17 + 275753048 + 4 * *v21]);
        v24 = *((_DWORD *)v20 + 1279);
        if ( v8 < v24 )
        {
          v25 = (_WORD *)((char *)v18 - 1);
          do
          {
            v23 = *((_BYTE *)v25 + 1) == 0;
            v25 = (_WORD *)((char *)v25 + 1);
          }
          while ( !v23 );
          *v25 = 92;
          v24 = *((_DWORD *)v20 + 1279);
        }
        ++v8;
        ++v21;
      }
      while ( v8 <= v24 );
    }
    v26 = (_WORD *)((char *)v18 - 1);
    do
    {
      v23 = *((_BYTE *)v26 + 1) == 0;
      v26 = (_WORD *)((char *)v26 + 1);
    }
    while ( !v23 );
    *v26 = 62;
    v27 = 110 * v5;
    v28 = &dword_140404A6C[16 * (110 * v5 + (int)dword_140404A6C[v3 + 278846111]) + 278846114];
    do
    {
      v29 = *(_BYTE *)v18;
      v18 = (unsigned int *)((char *)v18 + 1);
      *(_BYTE *)v28 = v29;
      v28 = (unsigned int *)((char *)v28 + 1);
    }
    while ( v29 );
    do
      ++v6;
    while ( *((_BYTE *)&dword_140404A6C[16 * v27 + 278846114 + 16 * (int)dword_140404A6C[v3 + 278846111]] + v6) );
    v30 = (int)v6;
    if ( (int)v6 < 62LL )
    {
      v31 = &dword_140404A6C[v3 + 278847154];
      do
      {
        v32 = *(_BYTE *)v31;
        if ( !*(_BYTE *)v31 )
          break;
        v31 = (unsigned int *)((char *)v31 + 1);
        LODWORD(v6) = v6 + 1;
        v33 = v30 + ((v27 + (int)dword_140404A6C[v3 + 278846111]) << 6);
        ++v30;
        *((_BYTE *)&dword_140404A6C[278846114] + v33) = v32;
      }
      while ( v30 < 62 );
    }
    v34 = _mm_load_si128((     __m128i *)&xmmword_140279200);
    *((_BYTE *)&dword_140404A6C[16 * v27 + 278846114 + 16 * (int)dword_140404A6C[v3 + 278846111]] + (int)v6) = 0;
    v35 = (int)dword_140404A6C[v3 + 278846111];
    dword_140404A6C[v3 + 278846113] = v6 + (dword_140404A6C[v3 + 278846111] << 6);
    v36 = &dword_140404A6C[16 * (v27 + v35) + 278846626];
    _mm_storeu_si128((__m128i *)(void *)v36, v34);
    _mm_storeu_si128((__m128i *)(void *)(v36 + 4), v34);
    _mm_storeu_si128((__m128i *)(void *)(v36 + 8), v34);
    *((_QWORD *)v36 + 6) = SR_VEC_LANES(128, v34, i64)[0];
    v36[14] = SR_VEC_LANES(128, v34, i32)[0];
    *((_WORD *)v36 + 30) = SR_VEC_LANES(128, v34, i16)[0];
    *((_BYTE *)v36 + 62) = SR_VEC_LANES(128, v34, i8)[0];
    sub_140050F90(a1, dword_140404A6C[v3 + 278846111]);
    v7 = &dword_140404A6C[278845893];
    dword_140404A6C[v3 + 278846101] = 0;
  }
  else
  {
    v7 = (unsigned int *)(int)dword_140404A6C[v3 + 278847258];
    if ( (int)v7 < 64 )
    {
      dword_140404A6C[(_QWORD)&v7[440 * v5] + 278847259] = (unsigned __int8)v4;
      ++dword_140404A6C[v3 + 278847258];
    }
  }
  return (int)v7;
}

// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C72B0) ----------------------------------------------------
__int64            sub_1400C72B0(int a1)
{
  __int64 v1; // r14
  __int64 v2; // r12
  signed int v3; // edi
  char *v4; // rbx
  __m128i si128; // xmm0
  unsigned int *v6; // rcx
  __int64 result; // rax
  bool v8; // zf
  unsigned int v9; // eax
  __int64 v10; // rcx

  v1 = a1;
  v2 = 1760LL * a1;
  *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v2 + 278847325]), 0, 0x420u);
  dword_140404A6C[v2 + 278847328] = -1;
  v3 = 0;
  v4 = (char *)&dword_140404A6C[1760 * v1 + 278846114];
  do
  {
    *v4 = 0;
    if ( !v3 )
      strcpy(v4, "CONNECTING...");
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
    v6 = &dword_140404A6C[16 * (110 * v1 + (unsigned int)v3) + 278846626];
    *(__m128i *)v6 = si128;
    *((__m128i *)v6 + 1) = si128;
    *((__m128i *)v6 + 2) = si128;
    *((_QWORD *)v6 + 6) = SR_VEC_LANES(128, si128, i64)[0];
    v6[14] = SR_VEC_LANES(128, si128, i32)[0];
    *((_WORD *)v6 + 30) = SR_VEC_LANES(128, si128, i16)[0];
    *((_BYTE *)v6 + 62) = SR_VEC_LANES(128, si128, i8)[0];
    result = sub_140050F90(v1, v3++);
    v4 += 64;
  }
  while ( v3 < 24 );
  dword_140404A6C[v2 + 278847326] = 256;
  v8 = dword_140404A6C[456202453] == 0;
  dword_140404A6C[v2 + 278847325] = 0;
  if ( !v8 )
  {
    v9 = dword_140404A6C[283831474];
    v10 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    HIWORD(dword_140404A6C[308307070]) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v10) = 19;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v10) = v9;
    result = dword_140404A6C[283786017];
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v10) = dword_140404A6C[283786017];
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v10) = v1;
    *(unsigned int *)((char *)&dword_140404A6C[297756297] + v10) = 1065353216;
    *(unsigned int *)((char *)&dword_140404A6C[297756298] + v10) = 1065353216;
  }
  return result;
}

// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183E936F0: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400C7450) ----------------------------------------------------
void            sub_1400C7450(int a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 v6; // r9
  signed int v7; // ebx
  unsigned int *v8; // rsi
  __int64 v9; // rdi
  __m128i v10; // xmm0
  unsigned int *v11; // rsi
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  signed int v16; // r10d
  signed int v17; // r8d
  unsigned int v18; // edx
  __int64 v19; // r9
  __int64 v20; // rcx
  signed int v21; // ebx
  unsigned int *v22; // rsi
  __int64 v23; // rdi
  __m128i v24; // xmm0
  int v25; // eax
  int v26; // eax
  bool v27; // zf
  int v28; // eax
  signed int v29; // eax
  unsigned int v30; // eax
  signed int v31; // ebx
  unsigned int *v32; // rsi
  __int64 v33; // rdi
  __m128i si128; // xmm0

  v3 = 1760LL * a1;
  v4 = a1;
  if ( (int)dword_140404A6C[v3 + 278847326] > 0 )
    return;
  v5 = (int)dword_140404A6C[v3 + 278847323];
  if ( (_DWORD)v5 == -1 || (v6 = (int)dword_140404A6C[v3 + 278846098], (_DWORD)v6 == -1) )
  {
    v31 = 0;
    dword_140404A6C[v3 + 278847324] = 0;
    v32 = &dword_140404A6C[v3 + 278846114];
    v33 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v3 * 4 + 1119599860;
    do
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
      *(_BYTE *)v32 = 0;
      *(__m128i *)v33 = si128;
      *(__m128i *)(v33 + 16) = si128;
      *(__m128i *)(v33 + 32) = si128;
      *(_QWORD *)(v33 + 48) = SR_VEC_LANES(128, si128, i64)[0];
      *(_DWORD *)(v33 + 56) = SR_VEC_LANES(128, si128, i32)[0];
      *(_WORD *)(v33 + 60) = SR_VEC_LANES(128, si128, i16)[0];
      *(_BYTE *)(v33 + 62) = SR_VEC_LANES(128, si128, i8)[0];
      sub_140050F90(a1, v31++);
      v33 += 64;
      v32 += 16;
    }
    while ( v31 < 24 );
    return;
  }
  if ( (a2 & 0x100) != 0 )
  {
    if ( toupper((unsigned __int8)a2) == 88 )
    {
      v7 = 0;
      dword_140404A6C[v3 + 278847324] = 0;
      v8 = &dword_140404A6C[v3 + 278846114];
      v9 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v3 * 4 + 1119599860;
      do
      {
        v10 = _mm_load_si128((     __m128i *)&xmmword_140279200);
        *(_BYTE *)v8 = 0;
        *(__m128i *)v9 = v10;
        *(__m128i *)(v9 + 16) = v10;
        *(__m128i *)(v9 + 32) = v10;
        *(_QWORD *)(v9 + 48) = SR_VEC_LANES(128, v10, i64)[0];
        *(_DWORD *)(v9 + 56) = SR_VEC_LANES(128, v10, i32)[0];
        *(_WORD *)(v9 + 60) = SR_VEC_LANES(128, v10, i16)[0];
        *(_BYTE *)(v9 + 62) = SR_VEC_LANES(128, v10, i8)[0];
        sub_140050F90(a1, v7++);
        v9 += 64;
        v8 += 16;
      }
      while ( v7 < 24 );
    }
    return;
  }
  v11 = &dword_140404A6C[v3 + 278847327];
  v12 = dword_140404A6C[v3 + 278847327];
  if ( !v12 )
  {
    switch ( a2 )
    {
      case 16:
        v13 = dword_140404A6C[v3 + 278847328];
        if ( v13 > -2 )
          dword_140404A6C[v3 + 278847328] = v13 - 1;
        break;
      case 17:
        v14 = dword_140404A6C[v3 + 278847328];
        if ( v14 < 7 )
          dword_140404A6C[v3 + 278847328] = v14 + 1;
        break;
      case 10:
        v15 = dword_140404A6C[v3 + 278847328];
        if ( v15 > 6 )
        {
          if ( v15 == -1 )
          {
            v16 = 0;
            dword_140404A6C[v3 + 278847332] = 0;
            v17 = 0;
            if ( (int)dword_140404A6C[2570 * v6 + 275754072] > 0 )
            {
              v18 = dword_140404A6C[v3 + 278846098];
              v19 = 0;
              do
              {
                if ( dword_140404A6C[2570 * (int)v18 + 275754078 + v19] == dword_140404A6C[v3 + 278847331] )
                {
                  dword_140404A6C[1760 * v4 + 278847333 + v16] = v17;
                  v16 = dword_140404A6C[v3 + 278847332] + 1;
                  dword_140404A6C[v3 + 278847332] = v16;
                  v18 = dword_140404A6C[v3 + 278846098];
                }
                ++v17;
                v19 += 6;
              }
              while ( v17 < (int)dword_140404A6C[2570 * v18 + 275754072] );
            }
            *v11 = 2;
            dword_140404A6C[v3 + 278847329] = 0;
          }
          else
          {
            if ( v15 != -2 )
            {
              v21 = 0;
              dword_140404A6C[v3 + 278847324] = 0;
              v22 = &dword_140404A6C[v3 + 278846114];
              v23 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v3 * 4 + 1119599860;
              do
              {
                v24 = _mm_load_si128((     __m128i *)&xmmword_140279200);
                *(_BYTE *)v22 = 0;
                *(__m128i *)v23 = v24;
                *(__m128i *)(v23 + 16) = v24;
                *(__m128i *)(v23 + 32) = v24;
                *(_QWORD *)(v23 + 48) = SR_VEC_LANES(128, v24, i64)[0];
                *(_DWORD *)(v23 + 56) = SR_VEC_LANES(128, v24, i32)[0];
                *(_WORD *)(v23 + 60) = SR_VEC_LANES(128, v24, i16)[0];
                *(_BYTE *)(v23 + 62) = SR_VEC_LANES(128, v24, i8)[0];
                sub_140050F90(a1, v21++);
                v23 += 64;
                v22 += 16;
              }
              while ( v21 < 24 );
              return;
            }
            v20 = 5 * v5;
            if ( (int)dword_140404A6C[v20 + 188872240] <= 8 )
              dword_140404A6C[v20 + 188872240] = 0;
          }
        }
        else
        {
          *v11 = 1;
          dword_140404A6C[v3 + 278847329] = 0;
        }
        break;
    }
    goto LABEL_54;
  }
  if ( v12 == 1 )
  {
    if ( a2 == 16 )
    {
      v25 = dword_140404A6C[v3 + 278847329];
      if ( v25 > 0 )
        dword_140404A6C[v3 + 278847329] = v25 - 1;
      goto LABEL_54;
    }
    if ( a2 == 17 )
    {
      v26 = dword_140404A6C[v3 + 278847329];
      if ( v26 < 0 )
        dword_140404A6C[v3 + 278847329] = v26 + 1;
      goto LABEL_54;
    }
    if ( a2 != 10 )
      goto LABEL_54;
    v27 = dword_140404A6C[v3 + 278847329] == 0;
    goto LABEL_52;
  }
  if ( v12 != 2 )
    goto LABEL_54;
  if ( a2 == 16 )
  {
    v28 = dword_140404A6C[v3 + 278847330];
    if ( v28 > 0 )
      dword_140404A6C[v3 + 278847330] = v28 - 1;
    goto LABEL_54;
  }
  if ( a2 == 17 )
  {
    v29 = dword_140404A6C[v3 + 278847330];
    if ( v29 < (int)dword_140404A6C[v3 + 278847332] )
      dword_140404A6C[v3 + 278847330] = v29 + 1;
    goto LABEL_54;
  }
  if ( a2 != 10 )
  {
    v27 = a2 == 8;
LABEL_52:
    if ( v27 )
      goto LABEL_53;
    goto LABEL_54;
  }
  if ( (int)dword_140404A6C[v3 + 278847330] >= (int)dword_140404A6C[v3 + 278847332] )
  {
LABEL_53:
    *v11 = 0;
    goto LABEL_54;
  }
  dword_140404A6C[v3 + 278847325] = 1;
  dword_140404A6C[v3 + 278847326] = 255;
LABEL_54:
  v30 = *v11;
  if ( !*v11 )
  {
    sub_1400C7890(a1);
    v30 = *v11;
  }
  if ( v30 == 1 )
  {
    sub_1400C7FC0(a1);
    v30 = *v11;
  }
  if ( v30 == 2 )
    sub_1400C86D0(a1);
}

// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C7890) ----------------------------------------------------
__int64            sub_1400C7890(int a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r13
  signed int v4; // r14d
  __int64 v5; // rsi
  __int64 v6; // r12
  unsigned int v7; // r15d
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v10; // ecx
       char *v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rdi
  __int64 v14; // rdi
  char *v15; // rcx
  int v17; // edx
  __int64 v18; // r9
  __int64 v19; // r10
  char *v20; // rax
  char v21; // r8
  char v22; // r8
  char v23; // r8
  char v24; // r8
  char v25; // r8
  char v26; // r8
  char v27; // r8
  char v28; // r8
  char v29; // r8
  char v30; // r8
  char v31; // r8
  char v32; // r8
  char v33; // r8
  char v34; // r8
  char v35; // r8
  char v36; // r8
  char v37; // r8
  char v38; // r8
  char v39; // r8
  char v40; // r8
  char v41; // r8
  char v42; // r8
  char v43; // r8
  char v44; // r8
  char v45; // r8
  char v46; // r8
  char v47; // r8
  char v48; // r8
  char v49; // r8
  char v50; // r8
  char v51; // r8
  char v52; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C7890[576];
#define v54 (*(_BYTE (*)[40])(void *)(sr_frame_1400C7890 + 0)) /* [rsp+0h] */
#define v55 (*(__int64 (*))(void *)(sr_frame_1400C7890 + 40)) /* [rsp+28h] */
#define v56 (*(_BYTE (*)[512])(void *)(sr_frame_1400C7890 + 48)) /* [rsp+30h] */
#define v57 (*(__int64 (*))(void *)(sr_frame_1400C7890 + 560)) /* [rsp+230h] */

  v1 = a1;
  v2 = 1760LL * a1;
  v3 = v1;
  v4 = 0;
  v55 = v2 * 4;
  if ( dword_140404A6C[v2 + 278847323] == -1 )
  {
    dword_140404A6C[v2 + 278847327] = 0;
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  v5 = 0;
  v6 = (int)dword_140404A6C[v2 + 278847323];
  v7 = 0;
  do
  {
    if ( v5 == 1 )
    {
      v8 = 1760 * v3;
      dword_140404A6C[v8 + 278846130] = 1397967181;
      dword_140404A6C[v8 + 278846642] = 252645135;
      dword_140404A6C[v8 + 278846131] = 542003017;
      dword_140404A6C[v8 + 278846643] = 252645135;
      dword_140404A6C[v8 + 278846132] = 1162626387;
      dword_140404A6C[v8 + 278846644] = 252645135;
      dword_140404A6C[v8 + 278846133] = 538989635;
      dword_140404A6C[v8 + 278846645] = 252645135;
      LOBYTE(dword_140404A6C[v8 + 278846134]) = 0;
      goto LABEL_128;
    }
    if ( (unsigned __int64)(v5 - 3) > 9 )
    {
      LOBYTE(dword_140404A6C[16 * (v5 + 110 * v3) + 278846114]) = 0;
      goto LABEL_128;
    }
    v9 = v7 - 5;
    if ( v7 == 3 )
    {
      v10 = dword_140404A6C[5 * v6 + 188872240];
      if ( v10 > 0 )
      {
        if ( v10 <= 8 )
        {
          sub_140158AB0(v56, "REQUEST INTEL");
          goto LABEL_26;
        }
        if ( v10 == 11 )
        {
          sub_140158AB0(v56, "INTEL FAXED");
          goto LABEL_26;
        }
LABEL_14:
        sub_140158AB0(v56, "NO INTEL AVAILABLE");
        goto LABEL_26;
      }
      v11 = "INTEL REQUESTED";
      if ( v10 )
        goto LABEL_14;
      goto LABEL_25;
    }
    if ( v7 == 4 )
    {
      sub_140158AB0(v56, "UPLOAD FILE");
      goto LABEL_26;
    }
    if ( v9 > 6 )
    {
      v11 = "EXIT";
LABEL_25:
      sub_140158AB0(v56, v11);
      goto LABEL_26;
    }
    v12 = v9 + 1;
    v13 = 138612LL * v7;
    if ( dword_140404A6C[34653 * v5 + 179827806] )
    {
      v14 = v13 - 693060;
      sub_140158AB0(v56, "%d. PROJECT %s                ", v12, (     char *)&dword_140404A6C[180035705] + v14);
    }
    else
    {
      sub_140158AB0(v56, "%d. UNKNOWN                   ", v12);
      v14 = v13 - 693060;
    }
    v56[24] = 0;
    v15 = &v54[47];
    while ( *++v15 != 0 )
      ;
    strcpy(v15, (     char *)&dword_140404A6C[539 * v6 + 180001596] + v14);
LABEL_26:
    v17 = 0;
    v18 = 2;
    v19 = (v5 + 110 * v3) << 6;
    v20 = (char *)&dword_140404A6C[278846626] + v19;
    if ( *(unsigned int *)((char *)&dword_140404A6C[278847328] + v55) == v9 )
    {
      do
      {
        v21 = v56[v17];
        if ( v21 )
          ++v17;
        else
          v21 = 32;
        *(v20 - 2048) = v21;
        *v20 = -24;
        v22 = v56[v17];
        if ( v22 )
          ++v17;
        else
          v22 = 32;
        *(v20 - 2047) = v22;
        v20[1] = -24;
        v23 = v56[v17];
        if ( v23 )
          ++v17;
        else
          v23 = 32;
        *(v20 - 2046) = v23;
        v20[2] = -24;
        v24 = v56[v17];
        if ( v24 )
          ++v17;
        else
          v24 = 32;
        *(v20 - 2045) = v24;
        v20[3] = -24;
        v25 = v56[v17];
        if ( v25 )
          ++v17;
        else
          v25 = 32;
        *(v20 - 2044) = v25;
        v20[4] = -24;
        v26 = v56[v17];
        if ( v26 )
          ++v17;
        else
          v26 = 32;
        *(v20 - 2043) = v26;
        v20[5] = -24;
        v27 = v56[v17];
        if ( v27 )
          ++v17;
        else
          v27 = 32;
        *(v20 - 2042) = v27;
        v20[6] = -24;
        v28 = v56[v17];
        if ( v28 )
          ++v17;
        else
          v28 = 32;
        *(v20 - 2041) = v28;
        v20[7] = -24;
        v29 = v56[v17];
        if ( v29 )
          ++v17;
        else
          v29 = 32;
        *(v20 - 2040) = v29;
        v20[8] = -24;
        v30 = v56[v17];
        if ( v30 )
          ++v17;
        else
          v30 = 32;
        *(v20 - 2039) = v30;
        v20[9] = -24;
        v31 = v56[v17];
        if ( v31 )
          ++v17;
        else
          v31 = 32;
        *(v20 - 2038) = v31;
        v20[10] = -24;
        v32 = v56[v17];
        if ( v32 )
          ++v17;
        else
          v32 = 32;
        *(v20 - 2037) = v32;
        v20[11] = -24;
        v33 = v56[v17];
        if ( v33 )
          ++v17;
        else
          v33 = 32;
        *(v20 - 2036) = v33;
        v20[12] = -24;
        v34 = v56[v17];
        if ( v34 )
          ++v17;
        else
          v34 = 32;
        *(v20 - 2035) = v34;
        v20[13] = -24;
        v35 = v56[v17];
        if ( v35 )
          ++v17;
        else
          v35 = 32;
        *(v20 - 2034) = v35;
        v20[14] = -24;
        v36 = v56[v17];
        if ( v36 )
          ++v17;
        else
          v36 = 32;
        *(v20 - 2033) = v36;
        v20[15] = -24;
        v20 += 16;
        --v18;
      }
      while ( v18 );
      *((_BYTE *)&dword_140404A6C[278846122] + v19) = 0;
    }
    else
    {
      do
      {
        v37 = v56[v17];
        if ( v37 )
          ++v17;
        else
          v37 = 32;
        *(v20 - 2048) = v37;
        *v20 = 15;
        v38 = v56[v17];
        if ( v38 )
          ++v17;
        else
          v38 = 32;
        *(v20 - 2047) = v38;
        v20[1] = 15;
        v39 = v56[v17];
        if ( v39 )
          ++v17;
        else
          v39 = 32;
        *(v20 - 2046) = v39;
        v20[2] = 15;
        v40 = v56[v17];
        if ( v40 )
          ++v17;
        else
          v40 = 32;
        *(v20 - 2045) = v40;
        v20[3] = 15;
        v41 = v56[v17];
        if ( v41 )
          ++v17;
        else
          v41 = 32;
        *(v20 - 2044) = v41;
        v20[4] = 15;
        v42 = v56[v17];
        if ( v42 )
          ++v17;
        else
          v42 = 32;
        *(v20 - 2043) = v42;
        v20[5] = 15;
        v43 = v56[v17];
        if ( v43 )
          ++v17;
        else
          v43 = 32;
        *(v20 - 2042) = v43;
        v20[6] = 15;
        v44 = v56[v17];
        if ( v44 )
          ++v17;
        else
          v44 = 32;
        *(v20 - 2041) = v44;
        v20[7] = 15;
        v45 = v56[v17];
        if ( v45 )
          ++v17;
        else
          v45 = 32;
        *(v20 - 2040) = v45;
        v20[8] = 15;
        v46 = v56[v17];
        if ( v46 )
          ++v17;
        else
          v46 = 32;
        *(v20 - 2039) = v46;
        v20[9] = 15;
        v47 = v56[v17];
        if ( v47 )
          ++v17;
        else
          v47 = 32;
        *(v20 - 2038) = v47;
        v20[10] = 15;
        v48 = v56[v17];
        if ( v48 )
          ++v17;
        else
          v48 = 32;
        *(v20 - 2037) = v48;
        v20[11] = 15;
        v49 = v56[v17];
        if ( v49 )
          ++v17;
        else
          v49 = 32;
        *(v20 - 2036) = v49;
        v20[12] = 15;
        v50 = v56[v17];
        if ( v50 )
          ++v17;
        else
          v50 = 32;
        *(v20 - 2035) = v50;
        v20[13] = 15;
        v51 = v56[v17];
        if ( v51 )
          ++v17;
        else
          v51 = 32;
        *(v20 - 2034) = v51;
        v20[14] = 15;
        v52 = v56[v17];
        if ( v52 )
          ++v17;
        else
          v52 = 32;
        *(v20 - 2033) = v52;
        v20[15] = 15;
        v20 += 16;
        --v18;
      }
      while ( v18 );
      *((_BYTE *)&dword_140404A6C[278846122] + v19) = 0;
    }
LABEL_128:
    ++v7;
    ++v5;
  }
  while ( v5 < 24 );
  do
    sub_140050F90(v3, v4++);
  while ( v4 < 24 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v54
#undef v55
#undef v56
#undef v57

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C7FC0) ----------------------------------------------------
__int64            sub_1400C7FC0(int a1)
{
  __int64 v2; // r12
  __int64 v3; // r14
  signed int v4; // ebx
  __int64 v5; // rsi
  int v6; // edi
  __int64 v7; // r13
  char **v8; // r15
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r10
  __int64 v12; // r9
  char *v13; // rdx
  char v14; // r8
  char v15; // r8
  char v16; // r8
  char v17; // r8
  char v18; // r8
  char v19; // r8
  char v20; // r8
  char v21; // r8
  char v22; // r8
  char v23; // r8
  int v24; // ecx
  __int64 v25; // r9
  __int64 v26; // r10
  char *v27; // rdx
  char v28; // r8
  char v29; // r8
  char v30; // r8
  char v31; // r8
  char v32; // r8
  char v33; // r8
  char v34; // r8
  char v35; // r8
  char v36; // r8
  char v37; // r8
  __int64 v38; // r9
  char *v39; // r8
  char v40; // r9
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C7FC0[592];
#define v42 (*(_BYTE (*)[32])(void *)(sr_frame_1400C7FC0 + 0)) /* [rsp+0h] */
#define v43 (*(int (*))(void *)(sr_frame_1400C7FC0 + 32)) /* [rsp+20h] */
#define v44 (*(char * (*))(void *)(sr_frame_1400C7FC0 + 48)) /* [rsp+30h] */
#define v45 (*(char * (*))(void *)(sr_frame_1400C7FC0 + 56)) /* [rsp+38h] */
#define v46 (*(_BYTE (*)[512])(void *)(sr_frame_1400C7FC0 + 64)) /* [rsp+40h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_1400C7FC0 + 576)) /* [rsp+240h] */

  v2 = 1760LL * a1;
  v44 = "BACK";
  v3 = a1;
  v45 = "UPLOAD";
  if ( dword_140404A6C[v2 + 278847323] == -1 || (dword_140404A6C[v2 + 278847328] & 0x80000000) != 0 )
  {
    dword_140404A6C[v2 + 278847327] = 0;
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = (int)dword_140404A6C[v2 + 278847323];
  v8 = (char **)&v42[-48];
  do
  {
    if ( !v6 )
    {
      v9 = 34653LL * (int)dword_140404A6C[v2 + 278847328];
      if ( dword_140404A6C[v9 + 180001071] )
        sub_140158AB0(v46, "PROJECT %s", (     char *)&dword_140404A6C[v9 + 180035705]);
      else
        sub_140158AB0(v46, "UNKNOWN                     ");
      v10 = 0;
      v11 = (v5 + 110 * v3) << 6;
      v12 = 2;
      v13 = (char *)&dword_140404A6C[278846626] + v11;
      do
      {
        v14 = v46[v10];
        if ( v14 )
          ++v10;
        else
          v14 = 32;
        *(v13 - 2048) = v14;
        *v13 = 15;
        v15 = v46[v10];
        if ( v15 )
          ++v10;
        else
          v15 = 32;
        *(v13 - 2047) = v15;
        v13[1] = 15;
        v16 = v46[v10];
        if ( v16 )
          ++v10;
        else
          v16 = 32;
        *(v13 - 2046) = v16;
        v13[2] = 15;
        v17 = v46[v10];
        if ( v17 )
          ++v10;
        else
          v17 = 32;
        *(v13 - 2045) = v17;
        v13[3] = 15;
        v18 = v46[v10];
        if ( v18 )
          ++v10;
        else
          v18 = 32;
        *(v13 - 2044) = v18;
        v13[4] = 15;
        v19 = v46[v10];
        if ( v19 )
          ++v10;
        else
          v19 = 32;
        *(v13 - 2043) = v19;
        v13[5] = 15;
        v20 = v46[v10];
        if ( v20 )
          ++v10;
        else
          v20 = 32;
        *(v13 - 2042) = v20;
        v13[6] = 15;
        v21 = v46[v10];
        if ( v21 )
          ++v10;
        else
          v21 = 32;
        *(v13 - 2041) = v21;
        v13[7] = 15;
        v22 = v46[v10];
        if ( v22 )
          ++v10;
        else
          v22 = 32;
        *(v13 - 2040) = v22;
        v13[8] = 15;
        v23 = v46[v10];
        if ( v23 )
          ++v10;
        else
          v23 = 32;
        *(v13 - 2039) = v23;
        v13[9] = 15;
        v13 += 10;
        --v12;
      }
      while ( v12 );
      *((_BYTE *)&dword_140404A6C[278846119] + v11) = 0;
      goto LABEL_84;
    }
    if ( v6 != 3 )
    {
      if ( (unsigned int)(v6 - 4) > 3 )
      {
        if ( v6 == 12 )
        {
          v40 = -72;
          v39 = *v8;
          if ( dword_140404A6C[v2 + 278847329] )
            v40 = 15;
          v43 = 16;
          goto LABEL_82;
        }
      }
      else
      {
        v38 = 2156 * v7 + 138612LL * (int)dword_140404A6C[v2 + 278847328];
        if ( v6 - 4 < *(int *)((char *)&dword_140404A6C[180001083] + v38) )
        {
          v43 = 60;
          v39 = (char *)&dword_140404A6C[64 * (unsigned __int64)(unsigned int)v6 + 180000828] + v38;
          v40 = 15;
LABEL_82:
          sub_1400C6AB0(a1, v6, v39, v40, v43);
          goto LABEL_84;
        }
      }
      LOBYTE(dword_140404A6C[16 * (v5 + 110 * v3) + 278846114]) = 0;
      goto LABEL_84;
    }
    v24 = 0;
    v25 = 2;
    v26 = (v5 + 110 * v3) << 6;
    v27 = (char *)&dword_140404A6C[278846626] + v26;
    do
    {
      v28 = aStatus[v24];
      if ( v28 )
        ++v24;
      else
        v28 = 32;
      *(v27 - 2048) = v28;
      *v27 = 15;
      v29 = aStatus[v24];
      if ( v29 )
        ++v24;
      else
        v29 = 32;
      *(v27 - 2047) = v29;
      v27[1] = 15;
      v30 = aStatus[v24];
      if ( v30 )
        ++v24;
      else
        v30 = 32;
      *(v27 - 2046) = v30;
      v27[2] = 15;
      v31 = aStatus[v24];
      if ( v31 )
        ++v24;
      else
        v31 = 32;
      *(v27 - 2045) = v31;
      v27[3] = 15;
      v32 = aStatus[v24];
      if ( v32 )
        ++v24;
      else
        v32 = 32;
      *(v27 - 2044) = v32;
      v27[4] = 15;
      v33 = aStatus[v24];
      if ( v33 )
        ++v24;
      else
        v33 = 32;
      *(v27 - 2043) = v33;
      v27[5] = 15;
      v34 = aStatus[v24];
      if ( v34 )
        ++v24;
      else
        v34 = 32;
      *(v27 - 2042) = v34;
      v27[6] = 15;
      v35 = aStatus[v24];
      if ( v35 )
        ++v24;
      else
        v35 = 32;
      *(v27 - 2041) = v35;
      v27[7] = 15;
      v36 = aStatus[v24];
      if ( v36 )
        ++v24;
      else
        v36 = 32;
      *(v27 - 2040) = v36;
      v27[8] = 15;
      v37 = aStatus[v24];
      if ( v37 )
        ++v24;
      else
        v37 = 32;
      *(v27 - 2039) = v37;
      v27[9] = 15;
      v27 += 10;
      --v25;
    }
    while ( v25 );
    *((_BYTE *)&dword_140404A6C[278846119] + v26) = 0;
LABEL_84:
    ++v6;
    ++v5;
    ++v8;
  }
  while ( v6 < 24 );
  do
    sub_140050F90(a1, v4++);
  while ( v4 < 24 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C8500) ----------------------------------------------------
void            sub_1400C8500(int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  int v4; // r12d
  int v5; // eax
  unsigned int v6; // eax
  bool v7; // zf
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // r9d
  int v11; // ebx
  __int64 v12; // rbp
  unsigned int *v13; // r14
  unsigned int v14; // eax

  v2 = 1760LL * a1;
  v3 = a1;
  v4 = dword_140404A6C[v2 + 278847323];
  if ( v4 != -1 && dword_140404A6C[v2 + 278846098] != -1 )
  {
    v5 = dword_140404A6C[v2 + 278847326];
    if ( v5 <= 0 )
    {
      if ( (((unsigned __int8)a1 ^ LOBYTE(dword_140404A6C[283831474])) & 0xF) == 0 )
      {
        v14 = dword_140404A6C[v2 + 278847327];
        if ( !v14 )
        {
          sub_1400C7890(a1);
          v14 = dword_140404A6C[v2 + 278847327];
        }
        if ( v14 == 1 )
        {
          sub_1400C7FC0(a1);
          v14 = dword_140404A6C[v2 + 278847327];
        }
        if ( v14 == 2 )
          sub_1400C86D0(a1);
      }
    }
    else
    {
      v6 = v5 - 1;
      v7 = dword_140404A6C[v2 + 278847325] == 1;
      v8 = v6;
      dword_140404A6C[v2 + 278847326] = v6;
      if ( v7 && (v6 & 0xF) == 0 )
      {
        sub_1400C86D0(a1);
        v8 = dword_140404A6C[v2 + 278847326];
      }
      if ( !v8 )
      {
        v9 = dword_140404A6C[v2 + 278847325];
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = 0;
            v11 = 0;
            v12 = 1760 * v3;
            v13 = &dword_140404A6C[180035569];
            dword_140404A6C[v2 + 278847327] = 0;
            do
            {
              if ( dword_140404A6C[2570 * dword_140404A6C[v2 + 278846098]
                                 + 275754073
                                 + 6 * dword_140404A6C[v12 + 278847333 + (int)dword_140404A6C[v2 + 278847330]]] == *v13 )
              {
                sub_140195FB0(v11, v4);
                v10 = 1;
                dword_140404A6C[v2 + 278847328] = v11;
                dword_140404A6C[v2 + 278847327] = 1;
                dword_140404A6C[v2 + 278847329] = 0;
              }
              ++v11;
              v13 += 34653;
            }
            while ( v11 < 7 );
            if ( !v10 )
              sub_1400C7890(a1);
            if ( dword_140404A6C[v2 + 278847327] == 1 )
              sub_1400C7FC0(a1);
          }
        }
        else
        {
          sub_1400C7890(a1);
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C86D0) ----------------------------------------------------
__int64            sub_1400C86D0(int a1)
{
  signed int v1; // esi
  int v2; // r13d
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 j; // rbx
  unsigned int *v7; // rax
  char *v8; // rdx
  __int64 v9; // r8
  char v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // al
  unsigned int *v14; // rax
  char *v15; // rdx
  __int64 v16; // r8
  char v17; // cl
  int v18; // ebp
  __int64 i; // rdi
  unsigned int *v20; // rax
  char *v21; // rdx
  __int64 v22; // r8
  char v23; // cl
  int v24; // edx
  int v25; // ebx
  __int64 v26; // r8
  __int64 v27; // r9
  char *v28; // rax
  char *v29; // rdx
  char v30; // cl
  char v31; // cl
  __int64 v32; // r9
  __int64 v33; // r9
  char *v34; // rax
       char *v35; // rdx
  __int64 v36; // r8
  char v37; // cl
  char v38; // cl
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C86D0[576];
#define v40 (*(__int64 (*))(void *)(sr_frame_1400C86D0 + 0)) /* [rsp+0h] */
#define v41 (*(_BYTE (*)[512])(void *)(sr_frame_1400C86D0 + 48)) /* [rsp+30h] */
#define v42 (*(__int64 (*))(void *)(sr_frame_1400C86D0 + 560)) /* [rsp+230h] */

  v1 = 0;
  v2 = a1;
  v3 = a1;
  v4 = 1760LL * a1;
  v5 = 110LL * a1;
  if ( (int)dword_140404A6C[v4 + 278847326] <= 0 )
  {
    v18 = 0;
    for ( i = 0; i < 24; ++i )
    {
      if ( i )
      {
        if ( (unsigned __int64)(i - 4) > 0xF )
        {
          LOBYTE(dword_140404A6C[16 * v5 + 278846114 + 16 * i]) = 0;
        }
        else
        {
          v24 = v18 + (dword_140404A6C[v4 + 278847330] & 0xFFFFFFF0);
          v25 = v24 - 4;
          if ( v24 - 4 >= (int)dword_140404A6C[v4 + 278847332] )
          {
            v32 = i + v5;
            if ( v25 == dword_140404A6C[v4 + 278847332] )
            {
              v33 = v32 << 6;
              v34 = (char *)&dword_140404A6C[278846626] + v33;
              v35 = " CANCEL";
              v36 = 16;
              if ( v25 == dword_140404A6C[v4 + 278847330] )
              {
                do
                {
                  v37 = *v35;
                  if ( *v35 )
                    ++v35;
                  else
                    v37 = 32;
                  *(v34 - 2048) = v37;
                  *v34++ = -72;
                  --v36;
                }
                while ( v36 );
                *((_BYTE *)&dword_140404A6C[278846118] + v33) = 0;
              }
              else
              {
                do
                {
                  v38 = *v35;
                  if ( *v35 )
                    ++v35;
                  else
                    v38 = 32;
                  *(v34 - 2048) = v38;
                  *v34++ = 15;
                  --v36;
                }
                while ( v36 );
                *((_BYTE *)&dword_140404A6C[278846118] + v33) = 0;
              }
            }
            else
            {
              LOBYTE(dword_140404A6C[16 * v32 + 278846114]) = 0;
            }
          }
          else
          {
            sub_140158AB0(
              v41,
              " %s",
              (     char *)&dword_140404A6C[2570 * dword_140404A6C[v4 + 278846098]
                                           + 275754074
                                           + 6 * dword_140404A6C[1760 * v3 + 278847329 + v24]]);
            v26 = 16;
            v27 = (i + v5) << 6;
            v28 = (char *)&dword_140404A6C[278846626] + v27;
            v29 = v41;
            if ( v25 == dword_140404A6C[v4 + 278847330] )
            {
              do
              {
                v30 = *v29;
                if ( *v29 )
                  ++v29;
                else
                  v30 = 32;
                *(v28 - 2048) = v30;
                *v28++ = -72;
                --v26;
              }
              while ( v26 );
              *((_BYTE *)&dword_140404A6C[278846118] + v27) = 0;
            }
            else
            {
              do
              {
                v31 = *v29;
                if ( *v29 )
                  ++v29;
                else
                  v31 = 32;
                *(v28 - 2048) = v31;
                *v28++ = 15;
                --v26;
              }
              while ( v26 );
              *((_BYTE *)&dword_140404A6C[278846118] + v27) = 0;
            }
          }
        }
      }
      else
      {
        sub_140158AB0(v41, "UPLOAD FILE");
        v20 = &dword_140404A6C[v4 + 278846626];
        v21 = v41;
        v22 = 20;
        do
        {
          v23 = *v21;
          if ( *v21 )
            ++v21;
          else
            v23 = 32;
          *((_BYTE *)v20 - 2048) = v23;
          *(_BYTE *)v20 = -16;
          v20 = (unsigned int *)((char *)v20 + 1);
          --v22;
        }
        while ( v22 );
        LOBYTE(dword_140404A6C[16 * v5 + 278846119]) = 0;
      }
      ++v18;
    }
    v2 = v3;
  }
  else
  {
    for ( j = 0; j < 24; ++j )
    {
      if ( j )
      {
        if ( j == 1 )
        {
          v11 = 0;
          v12 = (__int64)(int)(255 - dword_140404A6C[v4 + 278847326]) >> 4;
          do
          {
            v13 = 127;
            if ( v11 > v12 )
              v13 = 32;
            v41[v11++] = v13;
          }
          while ( v11 < 16 );
          v41[16] = 0;
          v14 = &dword_140404A6C[v4 + 278846642];
          v15 = v41;
          v16 = 16;
          do
          {
            v17 = *v15;
            if ( *v15 )
              ++v15;
            else
              v17 = 32;
            *((_BYTE *)v14 - 2048) = v17;
            *(_BYTE *)v14 = -16;
            v14 = (unsigned int *)((char *)v14 + 1);
            --v16;
          }
          while ( v16 );
          LOBYTE(dword_140404A6C[16 * v5 + 278846134]) = 0;
        }
        else
        {
          LOBYTE(dword_140404A6C[16 * v5 + 278846114 + 16 * j]) = 0;
        }
      }
      else
      {
        sub_140158AB0(v41, "UPLOADING");
        v7 = &dword_140404A6C[v4 + 278846626];
        v8 = v41;
        v9 = 16;
        do
        {
          v10 = *v8;
          if ( *v8 )
            ++v8;
          else
            v10 = 32;
          *((_BYTE *)v7 - 2048) = v10;
          *(_BYTE *)v7 = -16;
          v7 = (unsigned int *)((char *)v7 + 1);
          --v9;
        }
        while ( v9 );
        LOBYTE(dword_140404A6C[16 * v5 + 278846118]) = 0;
      }
    }
  }
  do
    sub_140050F90(v2, v1++);
  while ( v1 < 24 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v40
#undef v41
#undef v42

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C8AD0) ----------------------------------------------------
__int64            sub_1400C8AD0(_BYTE *a1, __int64 a2, int *a3)
{
  int v3; // r10d
  unsigned int v4; // edi
  int v7; // r11d
  int v8; // r9d
  char v9; // cl
  _BYTE *v10; // rdx
  char v11; // cl

  v3 = *a3;
  v4 = 0;
  v7 = 0;
  if ( *a3 < 62 )
  {
    v8 = *a3;
    do
    {
      v9 = *(_BYTE *)(v3 + a2);
      if ( (unsigned __int8)(v9 - 97) <= 0x19u )
        break;
      if ( (unsigned __int8)(v9 - 65) <= 0x19u )
        break;
      if ( (unsigned __int8)(v9 - 48) <= 9u )
        break;
      if ( !v9 )
        break;
      *a3 = ++v3;
      v8 = v3;
    }
    while ( v3 < 62 );
    if ( v8 < 62 )
    {
      v10 = a1;
      do
      {
        v11 = *(_BYTE *)(v8 + a2);
        if ( (unsigned __int8)(v11 - 97) > 0x19u
          && (unsigned __int8)(v11 - 65) > 0x19u
          && (unsigned __int8)(v11 - 48) > 9u
          && v11 != 46 )
        {
          break;
        }
        *v10 = v11;
        ++v7;
        ++v10;
        v8 = *a3 + 1;
        *a3 = v8;
      }
      while ( v8 < 62 );
    }
  }
  a1[v7] = 0;
  LOBYTE(v4) = v7 > 0;
  return v4;
}

// 1400C8B63: conditional instruction was optimized away because cl.1 is in (==2E|30..39)

//----- (00000001400C8BA0) ----------------------------------------------------
__int64            sub_1400C8BA0(_BYTE *a1, __int64 a2, int *a3)
{
  int v3; // r10d
  unsigned int v4; // edi
  int v7; // r11d
  int v8; // r9d
  char v9; // cl
  _BYTE *v10; // rdx
  char v11; // cl

  v3 = *a3;
  v4 = 0;
  v7 = 0;
  if ( *a3 < 62 )
  {
    v8 = *a3;
    do
    {
      v9 = *(_BYTE *)(v3 + a2);
      if ( (unsigned __int8)(v9 - 97) <= 0x19u )
        break;
      if ( (unsigned __int8)(v9 - 65) <= 0x19u )
        break;
      if ( (unsigned __int8)(v9 - 48) <= 9u )
        break;
      if ( !v9 )
        break;
      *a3 = ++v3;
      v8 = v3;
    }
    while ( v3 < 62 );
    if ( v8 < 62 )
    {
      v10 = a1;
      do
      {
        v11 = *(_BYTE *)(v8 + a2);
        if ( (unsigned __int8)(v11 - 97) > 0x19u
          && (unsigned __int8)(v11 - 65) > 0x19u
          && (unsigned __int8)(v11 - 48) > 9u )
        {
          break;
        }
        *v10 = v11;
        ++v7;
        ++v10;
        v8 = *a3 + 1;
        *a3 = v8;
      }
      while ( v8 < 62 );
    }
  }
  a1[v7] = 0;
  LOBYTE(v4) = v7 > 0;
  return v4;
}

// 1400C8C2E: conditional instruction was optimized away because cl.1 is in (30..39)

//----- (00000001400C8C70) ----------------------------------------------------
__int64            sub_1400C8C70(_BYTE *a1, __int64 a2, int *a3)
{
  int v3; // eax
  int v4; // r9d
  int v6; // r10d
  char v7; // dl
  __int64 v8; // rdx
  char v9; // al

  v3 = *a3;
  v4 = 0;
  if ( *a3 < 62 )
  {
    v6 = *a3;
    do
    {
      if ( *(_BYTE *)(v6 + a2) != 32 )
        break;
      *a3 = ++v6;
      v3 = v6;
    }
    while ( v6 < 62 );
  }
  v7 = *(_BYTE *)(v3 + a2);
  if ( (unsigned __int8)(v7 - 97) <= 0x19u || (unsigned __int8)(v7 - 65) <= 0x19u || (unsigned __int8)(v7 - 48) <= 9u )
  {
    *a1 = 0;
  }
  else
  {
    if ( v7 && v3 < 62 )
    {
      v8 = 0;
      do
      {
        if ( v8 >= 2 )
          break;
        v9 = *(_BYTE *)(v3 + a2);
        if ( !v9 )
          break;
        a1[v8] = v9;
        ++v4;
        ++v8;
        v3 = *a3 + 1;
        *a3 = v3;
      }
      while ( v3 < 62 );
    }
    a1[v4] = 0;
    if ( v4 > 0 )
      return 1;
  }
  return 0;
}


//----- (00000001400C8D20) ----------------------------------------------------
__int64            sub_1400C8D20(int a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  int v5; // ebx
  char *v6; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C8D20[2096];
#define v9 (*(_BYTE (*)[32])(void *)(sr_frame_1400C8D20 + 0)) /* [rsp+0h] */
#define v10 (*(__m128i (*)[64])(void *)(sr_frame_1400C8D20 + 32)) /* [rsp+20h] */
#define v11 (*(char (*)[1024])(void *)(sr_frame_1400C8D20 + 1056)) /* [rsp+420h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_1400C8D20 + 2080)) /* [rsp+820h] */

  SR_VEC_LANES(128, v10[0], i8)[0] = 0;
  v3 = 110LL * a2;
  v4 = 23;
  v5 = dword_140404A6C[1760 * a2 + 278846112];
  do
  {
    sub_140158AB0(v11, "%s\n", (     char *)&dword_140404A6C[16 * (v3 + v5) + 278846114]);
    v6 = &v9[31];
    while ( *++v6 != 0 )
      ;
    strcpy(v6, v11);
    v5 = ((_BYTE)v5 + 1) & 0x1F;
    --v4;
  }
  while ( v4 );
  sub_1400584B0(a1, v10);
  return sub_1401F8B20((unsigned __int64)v9 ^ v12);
}
#undef v9
#undef v10
#undef v11
#undef v12

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C8E10) ----------------------------------------------------
__int64            sub_1400C8E10(int a1)
{
  __int64 v1; // r13
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  __int64 v4; // r14
  unsigned int *v5; // rax
  char *v6; // rcx
  __int64 v7; // r8
  char v8; // dl
  char v9; // dl
  __int64 v10; // rdi
  __int64 v11; // r10
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *v15; // rsi
  char *v16; // rax
  char v17; // dl
  char v18; // cl
  char v19; // dl
  char v20; // cl
  signed int v21; // ebx
  int v22; // r12d
  _BYTE *v23; // rax
  char *v24; // rcx
  char v25; // dl
  char v26; // dl
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C8E10[576];
#define v28 (*(__int64 (*))(void *)(sr_frame_1400C8E10 + 0)) /* [rsp+0h] */
#define v29 (*(int (*))(void *)(sr_frame_1400C8E10 + 32)) /* [rsp+20h] */
#define v30 (*(__int128 (*))(void *)(sr_frame_1400C8E10 + 48)) /* [rsp+30h] */
#define v31 (*(__int128 (*))(void *)(sr_frame_1400C8E10 + 64)) /* [rsp+40h] */
#define v32 (*(__int128 (*))(void *)(sr_frame_1400C8E10 + 80)) /* [rsp+50h] */
#define v33 (*(__int128 (*))(void *)(sr_frame_1400C8E10 + 96)) /* [rsp+60h] */
#define v34 (*(__int64 (*))(void *)(sr_frame_1400C8E10 + 560)) /* [rsp+230h] */

  v1 = 1760LL * a1;
  v30 = 0;
  v31 = 0;
  v29 = a1;
  v32 = 0;
  v2 = dword_140404A6C[v1 + 278847327];
  v3 = dword_140404A6C[v1 + 278847325];
  v33 = 0;
  sub_140158AB0(&v30, "  SNAKE    SCORE:%05d  LEVEL:%03d    Ctrl-X EXIT", v3, v2);
  v4 = 31;
  v5 = &dword_140404A6C[v1 + 278846114];
  v6 = (char *)&v30;
  v7 = 31;
  do
  {
    v8 = *v6;
    if ( *v6 )
      ++v6;
    else
      v8 = 32;
    *(_BYTE *)v5 = v8;
    v9 = *v6;
    *((_BYTE *)v5 + 2048) = 112;
    if ( v9 )
      ++v6;
    else
      v9 = 32;
    *((_BYTE *)v5 + 1) = v9;
    *((_BYTE *)v5 + 2049) = 112;
    v5 = (unsigned int *)((char *)v5 + 2);
    --v7;
  }
  while ( v7 );
  BYTE2(dword_140404A6C[v1 + 278846129]) = 0;
  v10 = v1 * 4 + 64;
  v11 = v1 * 4 + 32;
  v12 = 23;
  do
  {
    v13 = 0;
    v14 = 31;
    v15 = (char *)&dword_140404A6C[278846129] + v10 + 2;
    v16 = v15 + 1987;
    do
    {
      *(v16 - 2049) = 32;
      v17 = *((_BYTE *)&dword_140404A6C[278847461] + v11 + (v13 >> 1));
      if ( v17 )
      {
        if ( v17 == 1 )
        {
          *(v16 - 1) = 127;
        }
        else if ( v17 == 2 )
        {
          *(v16 - 1) = 31;
        }
        else
        {
          v18 = 47;
          if ( v17 == 3 )
            v18 = -97;
          *(v16 - 1) = v18;
        }
      }
      else
      {
        *(v16 - 1) = 15;
      }
      v16[(char *)&dword_140404A6C[278845617] + 2 - ((char *)&dword_140404A6C[278846129] + 2)] = 32;
      v19 = *((_BYTE *)&dword_140404A6C[278847461] + v11 + ((v13 + 1) >> 1));
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          *v16 = 127;
        }
        else if ( v19 == 2 )
        {
          *v16 = 31;
        }
        else
        {
          v20 = 47;
          if ( v19 == 3 )
            v20 = -97;
          *v16 = v20;
        }
      }
      else
      {
        *v16 = 15;
      }
      v13 += 2;
      v16 += 2;
      --v14;
    }
    while ( v14 );
    v11 += 32;
    *v15 = 0;
    v10 += 64;
    v21 = 0;
    --v12;
  }
  while ( v12 );
  v22 = v29;
  if ( dword_140404A6C[v1 + 278847329] )
  {
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    sub_140158AB0(&v30, "                           GAME OVER!", v13);
    v23 = (char *)&dword_140404A6C[v1 + 278846642] + 1;
    v24 = (char *)&v30;
    do
    {
      v25 = *v24;
      if ( *v24 )
        ++v24;
      else
        v25 = 32;
      *(v23 - 2049) = v25;
      v26 = *v24;
      *(v23 - 1) = 15;
      if ( v26 )
        ++v24;
      else
        v26 = 32;
      *(v23 - 2048) = v26;
      *v23 = 15;
      v23 += 2;
      --v4;
    }
    while ( v4 );
    BYTE2(dword_140404A6C[v1 + 278846145]) = 0;
  }
  do
    sub_140050F90(v22, v21++);
  while ( v21 < 24 );
  return sub_1401F8B20((unsigned __int64)&v28 ^ v34);
}
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C90D0) ----------------------------------------------------
__int64            sub_1400C90D0(int a1)
{
  __int64 v2; // rdx

  v2 = 1760LL * a1;
  *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v2 + 278847325]), 0, 0x520u);
  return sub_1400C92B0(a1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C9120) ----------------------------------------------------
void            sub_1400C9120(int a1, int a2)
{
  __int64 v2; // rbp
  signed int v3; // edi
  unsigned int *v4; // rsi
  unsigned int *v5; // rbx
  __m128i si128; // xmm0

  v2 = a1;
  if ( (a2 & 0x100) != 0 )
  {
    if ( toupper((unsigned __int8)a2) == 88 )
    {
      v3 = 0;
      v4 = &dword_140404A6C[1760 * v2 + 278846114];
      dword_140404A6C[1760 * v2 + 278847324] = 0;
      v5 = &dword_140404A6C[1760 * v2 + 278846626];
      do
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
        *(_BYTE *)v4 = 0;
        *(__m128i *)v5 = si128;
        *((__m128i *)v5 + 1) = si128;
        *((__m128i *)v5 + 2) = si128;
        *((_QWORD *)v5 + 6) = SR_VEC_LANES(128, si128, i64)[0];
        v5[14] = SR_VEC_LANES(128, si128, i32)[0];
        *((_WORD *)v5 + 30) = SR_VEC_LANES(128, si128, i16)[0];
        *((_BYTE *)v5 + 62) = SR_VEC_LANES(128, si128, i8)[0];
        sub_140050F90(v2, v3++);
        v5 += 16;
        v4 += 16;
      }
      while ( v3 < 24 );
    }
  }
  else
  {
    switch ( a2 )
    {
      case 19:
        if ( dword_140404A6C[1760 * a1 + 278847330] != 2 )
          dword_140404A6C[1760 * a1 + 278847330] = 0;
        break;
      case 18:
        if ( dword_140404A6C[1760 * a1 + 278847330] )
          dword_140404A6C[1760 * a1 + 278847330] = 2;
        break;
      case 17:
        if ( dword_140404A6C[1760 * a1 + 278847330] != 3 )
          dword_140404A6C[1760 * a1 + 278847330] = 1;
        break;
      default:
        if ( a2 == 16 && dword_140404A6C[1760 * a1 + 278847330] != 1 )
          dword_140404A6C[1760 * a1 + 278847330] = 3;
        break;
    }
  }
}

// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C92B0) ----------------------------------------------------
__int64            sub_1400C92B0(int a1)
{
  __int64 v1; // r10
  __int64 v2; // r8
  unsigned int *v3; // r9
  __int64 v4; // r12
  __int64 i; // rdx
  bool v6; // cf
  __int64 v7; // rdx
  unsigned int v8; // r8d
  int v9; // r13d
  __int64 v10; // rsi
  int v11; // ebp
  int v12; // r14d
  __int64 v13; // r15
  int v14; // ebx
  int v15; // ecx
  int j; // edi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C92B0[16];
#define v26 (*(int (*))(void *)(sr_frame_1400C92B0 + 0)) /* [rsp+68h] */

  v1 = 1760LL * a1;
  v2 = 0;
  v3 = &dword_140404A6C[v1 + 278847461];
  v4 = a1;
  do
  {
    for ( i = 0; i < 32; ++i )
    {
      *((_BYTE *)v3 + i) = 0;
      if ( !v2 || (v6 = (unsigned __int64)v2 < 0x15, v2 == 21) )
      {
        *((_BYTE *)v3 + i) = 1;
        v6 = (unsigned __int64)v2 < 0x15;
      }
      if ( v6 && (!i || i == 30) )
        *((_BYTE *)&dword_140404A6C[1760 * a1 + 278847461 + 8 * v2] + i) = 1;
    }
    ++v2;
    v3 += 8;
  }
  while ( v2 < 24 );
  v7 = 1760LL * a1;
  v8 = dword_140404A6C[v7 + 278847327] & 7;
  if ( v8 )
  {
    LOBYTE(dword_140404A6C[1760 * a1 + 278847479]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847487]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847495]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847503]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847511]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847519]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847527]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847618]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847610]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847602]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847594]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847586]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847578]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847570]) = 1;
  }
  if ( v8 >= 2 )
  {
    BYTE2(dword_140404A6C[1760 * a1 + 278847482]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847490]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847498]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847506]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847514]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847522]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847530]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847615]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847607]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847599]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847591]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847583]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847575]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847567]) = 1;
  }
  if ( v8 >= 3 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847549] + 1) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847550] + 1) = 16843009;
  }
  if ( v8 >= 4 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847555] + 2) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847554] + 2) = 16843009;
  }
  if ( v8 >= 5 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847495] + 3) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847496] + 3) = 16843009;
    HIBYTE(dword_140404A6C[v7 + 278847497]) = 1;
  }
  if ( v8 >= 6 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[v1 + 278847599] + 3) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[v1 + 278847600] + 3) = 16843009;
    HIBYTE(dword_140404A6C[v1 + 278847601]) = 1;
  }
  if ( v8 >= 7 )
  {
    BYTE2(dword_140404A6C[v7 + 278847562]) = 1;
    LOBYTE(dword_140404A6C[v7 + 278847471]) = 1;
  }
  v9 = 0;
  v26 = 0;
  v10 = 220LL * a1;
  do
  {
    if ( v9 )
    {
      v11 = 17;
      if ( v9 == 1 )
      {
        v12 = 1;
      }
      else
      {
        v12 = 11;
        if ( v9 != 2 )
          v11 = 1;
      }
    }
    else
    {
      v11 = 1;
      v12 = 1;
    }
    v13 = 2;
    do
    {
      v14 = v11 + rand() % 12;
      v15 = v12 + rand() % 9;
      for ( j = 0; j < 512; ++j )
      {
        if ( !*((_BYTE *)&dword_140404A6C[8 * v10 + 278847461 + 8 * v15] + v14) )
          break;
        v14 = v11 + rand() % 12;
        v15 = v12 + rand() % 9;
      }
      v17 = v14 + 32 * (220 * v4 + v15);
      if ( !*((_BYTE *)&dword_140404A6C[278847461] + v17) )
      {
        *((_BYTE *)&dword_140404A6C[278847461] + v17) = 4;
        ++dword_140404A6C[1760 * v4 + 278847326];
      }
      --v13;
    }
    while ( v13 );
    v9 = v26 + 1;
    v26 = v9;
  }
  while ( v9 < 4 );
  v18 = 1760 * v4;
  v19 = 880 * v4;
  *(_QWORD *)&dword_140404A6C[v18 + 278847331] = 0;
  dword_140404A6C[2 * v19 + 278847333] = 15;
  dword_140404A6C[2 * v19 + 278847334] = 10;
  v20 = ((unsigned __int8)dword_140404A6C[1760 * v4 + 278847331] + 1) & 0x3F;
  dword_140404A6C[v18 + 278847331] = v20;
  v21 = 880 * v4 + v20;
  dword_140404A6C[2 * v21 + 278847333] = 15;
  dword_140404A6C[2 * v21 + 278847334] = 10;
  v22 = ((unsigned __int8)dword_140404A6C[1760 * v4 + 278847331] + 1) & 0x3F;
  dword_140404A6C[v18 + 278847331] = v22;
  v23 = 880 * v4 + v22;
  dword_140404A6C[2 * v23 + 278847333] = 15;
  dword_140404A6C[2 * v23 + 278847334] = 10;
  HIBYTE(dword_140404A6C[v18 + 278847544]) = 3;
  dword_140404A6C[v18 + 278847330] = 0;
  ++dword_140404A6C[v18 + 278847327];
  dword_140404A6C[v18 + 278847328] = 64;
  return sub_1400C8E10(a1);
}
#undef v26

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C9820) ----------------------------------------------------
void            sub_1400C9820(int a1)
{
  __int64 v2; // r9
  __int64 v3; // r11
  signed int v4; // ecx
  __int64 v5; // r10
  __int64 v6; // rax
  unsigned int v7; // ecx
  signed int v8; // r8d
  signed int v9; // edx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // r8d
  __int64 v32; // rdx

  v2 = 1760LL * a1;
  v3 = a1;
  if ( !dword_140404A6C[v2 + 278847329] && (int)--dword_140404A6C[v2 + 278847328] <= 0 )
  {
    if ( dword_140404A6C[v2 + 278847326] )
    {
      v4 = 16 - (((int)dword_140404A6C[v2 + 278847327] >> 1) & 0xFFFFFFFC);
      if ( v4 < 4 )
        v4 = 4;
      dword_140404A6C[v2 + 278847328] = v4;
      v5 = 880 * v3;
      v6 = 880 * v3 + (dword_140404A6C[v2 + 278847331] & 0x3F);
      v7 = ((unsigned __int8)dword_140404A6C[v2 + 278847331] + 1) & 0x3F;
      v8 = dword_140404A6C[2 * v6 + 278847333];
      v9 = dword_140404A6C[2 * v6 + 278847334];
      v10 = dword_140404A6C[v2 + 278847330];
      dword_140404A6C[v2 + 278847331] = v7;
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v12 = v9 + 1;
          v9 = 0;
          if ( v12 < 22 )
            v9 = v12;
        }
        else if ( v10 == 2 )
        {
          if ( --v8 < 0 )
            v8 = 30;
        }
        else if ( v10 == 3 && --v9 < 0 )
        {
          v9 = 21;
        }
      }
      else
      {
        v11 = v8 + 1;
        v8 = 0;
        if ( v11 < 31 )
          v8 = v11;
      }
      v13 = v5 + v7;
      v14 = 220 * v3;
      dword_140404A6C[2 * v13 + 278847333] = v8;
      dword_140404A6C[2 * v13 + 278847334] = v9;
      v15 = v8 + 32 * (v14 + v9);
      if ( *((_BYTE *)&dword_140404A6C[278847461] + v15) == 4 )
      {
        *((_BYTE *)&dword_140404A6C[278847461] + v15) = 0;
        dword_140404A6C[v2 + 278847325] += 5;
        --dword_140404A6C[v2 + 278847326];
        HIWORD(dword_140404A6C[v2 + 278847325]) = 0;
        if ( (int)dword_140404A6C[v2 + 278847326] <= 0 )
        {
          dword_140404A6C[v2 + 278847328] = 32;
          dword_140404A6C[v2 + 278847326] = 0;
        }
        v16 = (int)dword_140404A6C[v2 + 278847332];
        v17 = v5 + v16;
        v18 = dword_140404A6C[2 * v5 + 278847333 + 2 * v16];
        v19 = ((_BYTE)v16 - 1) & 0x3F;
        v20 = dword_140404A6C[2 * v17 + 278847334];
        dword_140404A6C[v2 + 278847332] = v19;
        v21 = v5 + v19;
        dword_140404A6C[2 * v21 + 278847333] = v18;
        dword_140404A6C[2 * v21 + 278847334] = v20;
        v22 = ((unsigned __int8)dword_140404A6C[v2 + 278847332] - 1) & 0x3F;
        dword_140404A6C[v2 + 278847332] = v22;
        v23 = v5 + v22;
        dword_140404A6C[2 * v23 + 278847333] = v18;
        dword_140404A6C[2 * v23 + 278847334] = v20;
        v24 = ((unsigned __int8)dword_140404A6C[v2 + 278847332] - 1) & 0x3F;
        dword_140404A6C[v2 + 278847332] = v24;
        v25 = v5 + v24;
        dword_140404A6C[2 * v25 + 278847333] = v18;
        dword_140404A6C[2 * v25 + 278847334] = v20;
        v26 = ((unsigned __int8)dword_140404A6C[v2 + 278847332] - 1) & 0x3F;
        dword_140404A6C[v2 + 278847332] = v26;
        v27 = v5 + v26;
        dword_140404A6C[2 * v27 + 278847333] = v18;
        dword_140404A6C[2 * v27 + 278847334] = v20;
      }
      v28 = v5 + (int)dword_140404A6C[v2 + 278847331];
      if ( *((_BYTE *)&dword_140404A6C[8 * v14 + 278847461 + 8 * (int)dword_140404A6C[2 * v28 + 278847334]]
           + (int)dword_140404A6C[2 * v28 + 278847333]) )
        dword_140404A6C[v2 + 278847329] = 1;
      v29 = v5 + (int)dword_140404A6C[v2 + 278847332];
      *((_BYTE *)&dword_140404A6C[8 * v14 + 278847461 + 8 * (int)dword_140404A6C[2 * v29 + 278847334]]
      + (int)dword_140404A6C[2 * v29 + 278847333]) = 0;
      v30 = ((unsigned __int8)dword_140404A6C[v2 + 278847332] + 1) & 0x3F;
      v31 = dword_140404A6C[v2 + 278847331] & 0x3F;
      for ( dword_140404A6C[v2 + 278847332] = v30; v30 != v31; *((_BYTE *)&dword_140404A6C[278847461] + v32) = 2 )
      {
        v32 = (int)dword_140404A6C[2 * v5 + 278847333 + 2 * v30]
            + 32 * (v14 + (int)dword_140404A6C[2 * v5 + 278847334 + 2 * v30]);
        v30 = ((_BYTE)v30 + 1) & 0x3F;
      }
      *((_BYTE *)&dword_140404A6C[8 * v14 + 278847461 + 8 * (int)dword_140404A6C[2 * v5 + 278847334 + 2 * v30]]
      + (int)dword_140404A6C[2 * v5 + 278847333 + 2 * v30]) = 3;
      sub_1400C8E10(a1);
    }
    else
    {
      sub_1400C92B0(a1);
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C9B60) ----------------------------------------------------
void            sub_1400C9B60(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // eax
  int v7; // esi
  int v8; // r8d
  __int64 v9; // rdi
  __int64 v10; // rax

  v1 = a1;
  v2 = 1760LL * a1;
  v3 = dword_140404A6C[v2 + 278847324];
  if ( !v3 )
  {
    sub_1400C3ED0(a1);
    v3 = dword_140404A6C[v2 + 278847324];
  }
  v4 = v3;
  if ( v3 == 1 )
  {
    v5 = dword_140404A6C[v2 + 278847584];
    if ( v5 > 0 )
    {
      v6 = v5 - 1;
      dword_140404A6C[v2 + 278847584] = v6;
      if ( !v6 )
      {
        v7 = 0;
        v8 = rand() % 26;
        v9 = 1760 * v1;
        do
        {
          v10 = v9 + (int)dword_140404A6C[v9 + 278847455 + v8];
          if ( dword_140404A6C[v10 + 278847519] && dword_140404A6C[v10 + 278847551] == -1 )
            break;
          ++v7;
          v8 = rand() % 26;
        }
        while ( v7 < 1000 );
        dword_140404A6C[v9 + 278847551 + (int)dword_140404A6C[v9 + 278847455 + v8]] = v8;
        sub_1400C5750(v1);
        LOBYTE(dword_140404A6C[v2 + 278846130]) = 0;
        sub_140050F90(v1, 1);
        v4 = dword_140404A6C[v2 + 278847324];
      }
    }
  }
  if ( v4 == 2 )
  {
    sub_1400C8500(v1);
    v4 = dword_140404A6C[v2 + 278847324];
  }
  if ( v4 == 3 )
    sub_1400C9820(v1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C9D20) ----------------------------------------------------
unsigned __int64 sub_1400C9D20()
{
  unsigned __int64 result; // rax
  unsigned int *v1; // rbx
  float *v2; // rbp
  unsigned int *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  signed int v9; // r8d
  float v10; // xmm7_4
  float v11; // xmm4_4
  __int64 v12; // rdx
  float v13; // xmm14_4
  float v14; // xmm12_4
  float v15; // xmm11_4
  float v16; // xmm10_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  __int64 v19; // r9
  __int64 v20; // rax
  float v21; // xmm0_4
  float v22; // xmm6_4
  float v23; // xmm1_4
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  int v27; // eax
  float v28; // xmm0_4
  int v29; // eax
  float v30; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C9D20[16];
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_1400C9D20 + 0)) /* [rsp+D8h] */

  result = (unsigned __int64)&retaddr;
  v1 = &dword_140404A6C[278845958];
  v2 = (float *)&dword_140404A6C[278845919];
  v3 = &dword_140404A6C[278845939];
  v4 = 1024;
  do
  {
    if ( *(v3 - 46) && *(v3 - 45) )
    {
      *(v3 - 20) = *(v3 - 23);
      *(v3 - 19) = *(v3 - 22);
      *(v3 - 18) = *(v3 - 21);
      v5 = 47LL * (int)*(v3 - 24);
      *(v3 - 23) = dword_140404A6C[v5 + 18215715];
      *(v3 - 22) = dword_140404A6C[v5 + 18215716];
      *(v3 - 21) = dword_140404A6C[v5 + 18215717];
      *(v3 - 14) = dword_140404A6C[v5 + 18215718];
      *(v3 - 13) = dword_140404A6C[v5 + 18215719];
      *(v3 - 12) = dword_140404A6C[v5 + 18215720];
      *(v3 - 5) = dword_140404A6C[v5 + 18215724];
      *(v3 - 4) = dword_140404A6C[v5 + 18215725];
      *(v3 - 3) = dword_140404A6C[v5 + 18215726];
      *(v3 - 2) = dword_140404A6C[v5 + 18215727];
      *(v3 - 1) = dword_140404A6C[v5 + 18215728];
      *v3 = dword_140404A6C[v5 + 18215729];
      v3[1] = dword_140404A6C[v5 + 18215730];
      v3[2] = dword_140404A6C[v5 + 18215731];
      v3[3] = dword_140404A6C[v5 + 18215732];
      v3[4] = dword_140404A6C[v5 + 18215736];
      v3[5] = dword_140404A6C[v5 + 18215737];
      v3[6] = dword_140404A6C[v5 + 18215738];
      if ( (unsigned int)sub_1400DC050(v2, v2 - 3, 1) )
      {
        v6 = (float)((float)(*((float *)v3 - 23) - *((float *)v3 - 20))
                   * (float)(*(float *)&dword_140404A6C[73006987] * 0.97500002))
           + *((float *)v3 - 20);
        v7 = (float)((float)(*((float *)v3 - 22) - *((float *)v3 - 19))
                   * (float)(*(float *)&dword_140404A6C[73006987] * 0.97500002))
           + *((float *)v3 - 19);
        v8 = (float)((float)(*((float *)v3 - 21) - *((float *)v3 - 18))
                   * (float)(*(float *)&dword_140404A6C[73006987] * 0.97500002))
           + *((float *)v3 - 18);
        *((float *)v3 - 23) = v6;
        *(float *)&dword_140404A6C[v5 + 18215715] = v6;
        *((float *)v3 - 22) = v7;
        *(float *)&dword_140404A6C[v5 + 18215716] = v7;
        *((float *)v3 - 21) = v8;
        *(float *)&dword_140404A6C[v5 + 18215717] = v8;
      }
      *v1 = 1199570944;
      v9 = 0;
      v1[3] = -947912704;
      v10 = 65536.0;
      v1[1] = 1199570944;
      v11 = -65536.0;
      v1[4] = -947912704;
      v1[2] = 1199570944;
      v1[5] = -947912704;
      v12 = (int)*(v3 - 41);
      if ( (int)dword_140404A6C[1268 * v12 + 278522247] > 0 )
      {
        v13 = 65536.0;
        v14 = -65536.0;
        v15 = 65536.0;
        v16 = -65536.0;
        v17 = 65536.0;
        v18 = -65536.0;
        v19 = 0;
        do
        {
          v20 = *(_QWORD *)&dword_140404A6C[1268 * (int)v12 + 278522249];
          v21 = *(float *)(v20 + v19 + 4);
          v22 = (float)((float)((float)(*(float *)(v20 + v19) * *((float *)v3 - 5)) + *((float *)v3 - 23))
                      + (float)(v21 * *((float *)v3 - 2)))
              + (float)(*(float *)(v20 + v19 + 8) * *((float *)v3 + 1));
          v23 = *(float *)(v20 + v19 + 8);
          v10 = v22;
          v11 = (float)((float)((float)(*(float *)(v20 + v19) * *((float *)v3 - 3)) + *((float *)v3 - 21))
                      + (float)(v21 * *(float *)v3))
              + (float)(v23 * *((float *)v3 + 3));
          v24 = (float)((float)((float)(*(float *)(v20 + v19) * *((float *)v3 - 4)) + *((float *)v3 - 22))
                      + (float)(v21 * *((float *)v3 - 1)))
              + (float)(v23 * *((float *)v3 + 2));
          if ( v13 <= v22 )
          {
            v10 = *(float *)v1;
          }
          else
          {
            *(float *)v1 = v22;
            v13 = v22;
          }
          if ( v14 < v22 )
          {
            *((float *)v1 + 3) = v22;
            v14 = v22;
          }
          if ( v15 > v24 )
          {
            *((float *)v1 + 1) = v24;
            v15 = v24;
          }
          if ( v16 < v24 )
          {
            *((float *)v1 + 4) = v24;
            v16 = v24;
          }
          if ( v17 > v11 )
          {
            *((float *)v1 + 2) = v11;
            v17 = v11;
          }
          if ( v18 >= v11 )
          {
            v11 = *((float *)v1 + 5);
          }
          else
          {
            *((float *)v1 + 5) = v11;
            v18 = v11;
          }
          v12 = (int)*(v3 - 41);
          ++v9;
          v19 += 12;
        }
        while ( v9 < (int)dword_140404A6C[1268 * v12 + 278522247] );
      }
      v25 = *((float *)v1 + 3) * 0.25;
      v26 = *((float *)v1 + 1) * 0.25;
      v1[6] = (int)(float)(v10 * 0.25);
      v27 = (int)v25;
      v28 = *((float *)v1 + 4);
      v1[9] = v27;
      v29 = (int)v26;
      v30 = *((float *)v1 + 2);
      v1[7] = v29;
      v1[10] = (int)(float)(v28 * 0.25);
      v1[8] = (int)(float)(v30 * 0.25);
      result = (unsigned int)(int)(float)(v11 * 0.25);
      v1[11] = result;
    }
    v2 += 1760;
    v3 += 1760;
    v1 += 1760;
    --v4;
  }
  while ( v4 );
  return result;
}
#undef retaddr

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400CA430) ----------------------------------------------------
_UNKNOWN **           sub_1400CA430(int a1)
{
  _UNKNOWN **result; // rax
  unsigned int *v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rbx
  float *v5; // rdi
  float v6; // xmm7_4
  float v7; // xmm8_4
  float v8; // xmm3_4
  float v9; // xmm9_4
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  __int64 v17; // r10
  __int64 v18; // rdx
  float v19; // xmm1_4
  unsigned int v20; // xmm8_4
  unsigned int v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  unsigned int v24; // xmm9_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CA430[240];
#define v25 (*(float (*))(void *)(sr_frame_1400CA430 + 0)) /* [rsp+50h] */
#define v26 (*(float (*))(void *)(sr_frame_1400CA430 + 4)) /* [rsp+54h] */
#define v27 (*(float (*))(void *)(sr_frame_1400CA430 + 8)) /* [rsp+58h] */
#define v28 (*(unsigned int (*)[4])(void *)(sr_frame_1400CA430 + 16)) /* [rsp+60h] */
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_1400CA430 + 232)) /* [rsp+138h] */

  result = &retaddr;
  v2 = &dword_140404A6C[280651442];
  v3 = a1;
  do
  {
    if ( *(v2 - 139) )
    {
      v4 = 0;
      v5 = (float *)v2;
      do
      {
        if ( v4 == 7 || (unsigned __int64)v4 <= 4 || (unsigned __int64)v4 >= 0xA )
        {
          v6 = *(float *)&dword_140404A6C[1760 * v3 + 278845916];
          v7 = *(float *)&dword_140404A6C[1760 * v3 + 278845917];
          v8 = v6 - *(v5 - 2);
          v9 = *(float *)&dword_140404A6C[1760 * v3 + 278845918];
          v10 = v7 - *(v5 - 1);
          v11 = v9 - *v5;
          v25 = v8;
          v26 = v10;
          v27 = v11;
          v12 = fsqrt((float)((float)(v8 * v8) + (float)(v10 * v10)) + (float)(v11 * v11));
          if ( v12 < 0.36000001 )
          {
            v13 = 0.36000001 - v12;
            if ( v12 == 0.0 )
            {
              v14 = 0.0;
              v15 = 0.0;
              v16 = 0.0;
            }
            else
            {
              v14 = v8 / v12;
              v15 = v10 / v12;
              v16 = v11 / v12;
            }
            v17 = *((int *)v5 - 3);
            v18 = (int)dword_140404A6C[1760 * v3 + 278845915];
            *(float *)&dword_140404A6C[73006981] = v6 - (float)(v14 * 0.11);
            *(float *)&dword_140404A6C[73006984] = -v14;
            *(float *)&dword_140404A6C[73006985] = -v15;
            *(float *)&dword_140404A6C[73006982] = v7 - (float)(v15 * 0.11);
            v19 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[47 * v17 + 18215716];
            *(float *)&v20 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[47 * v18 + 18215716];
            *(float *)&dword_140404A6C[73006986] = -v16;
            *(float *)&v21 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[47 * v17 + 18215715];
            v22 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[47 * v18 + 18215715];
            v26 = v19;
            *(float *)&dword_140404A6C[73006983] = v9 - (float)(v16 * 0.11);
            v28[1] = v20;
            v25 = *(float *)&v21;
            v23 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[47 * v17 + 18215717];
            *(float *)&v24 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[47 * v18 + 18215717];
            *(float *)v28 = v22;
            v27 = v23;
            v28[2] = v24;
            result = (_UNKNOWN **)sub_1400052C0(
                                    v17,
                                    v18,
                                    (unsigned int *)&v25,
                                    v28,
                                    &dword_140404A6C[73006984],
                                    v13,
                                    0x3ECCCCCDu,
                                    0.03125,
                                    0x3D800000u);
          }
        }
        ++v4;
        v5 += 78;
      }
      while ( v4 < 16 );
    }
    v2 += 7166;
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[282485938] );
  return result;
}
#undef v25
#undef v26
#undef v27
#undef v28
#undef retaddr

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400CA740) ----------------------------------------------------
__int64            sub_1400CA740(int a1, int a2)
{
  __int64 v2; // r10
  signed int v3; // r8d
  __int64 result; // rax
  int v5; // r9d
  unsigned int v6; // edx
  char v7; // cl
  int v8; // eax

  v2 = 1760LL * a1;
  v3 = a2;
  result = dword_140404A6C[v2 + 278846062];
  if ( (_DWORD)result )
  {
    if ( (int)result > 0 )
    {
      result = (unsigned int)(result - 1);
      dword_140404A6C[v2 + 278846062] = result;
      if ( a2 <= (int)result )
      {
        LODWORD(result) = dword_140404A6C[v2 + 278846063];
        v5 = 3 * a2;
        do
        {
          ++v3;
          v6 = result & ~(7 << v5);
          v7 = v5;
          v8 = (v6 >> (v5 + 3)) & 7;
          v5 += 3;
          result = v6 | (v8 << v7);
          dword_140404A6C[v2 + 278846063] = result;
        }
        while ( v3 <= (int)dword_140404A6C[v2 + 278846062] );
      }
    }
  }
  else
  {
    dword_140404A6C[v2 + 278845900] = 0;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400CA7C0) ----------------------------------------------------
void            sub_1400CA7C0(int a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 v6; // rsi
  float v7; // xmm2_4
  unsigned int v8; // xmm4_4
  unsigned int v9; // xmm3_4
  float v10; // xmm0_4
  unsigned int v11; // xmm2_4
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // r8d
  __int64 v15; // r11
  int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // ebp
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned int *v21; // rcx

  v3 = a1;
  v4 = a3;
  if ( a1 != -1 && a2 != -1 )
  {
    v5 = 1760LL * a1;
    v6 = a2;
    if ( (int)dword_140404A6C[v5 + 278845904] >= 2 )
    {
      v7 = *(float *)&dword_140404A6C[7166 * a2 + 280651598];
      *(float *)&v8 = *(float *)&dword_140404A6C[7166 * a2 + 280651596]
                    - (float)(*(float *)&dword_140404A6C[7166 * a2 + 280651611] * 0.25);
      *(float *)&v9 = *(float *)&dword_140404A6C[7166 * a2 + 280651597]
                    - (float)(*(float *)&dword_140404A6C[7166 * a2 + 280651612] * 0.25);
      dword_140404A6C[v5 + 278845916] = v8;
      v10 = *(float *)&dword_140404A6C[7166 * a2 + 280651613] * 0.25;
      dword_140404A6C[v5 + 278845917] = v9;
      *(float *)&v11 = v7 - v10;
      dword_140404A6C[v5 + 278845918] = v11;
      v12 = 47LL * (int)dword_140404A6C[v5 + 278845915];
      dword_140404A6C[v12 + 18215715] = v8;
      dword_140404A6C[v12 + 18215716] = v9;
      dword_140404A6C[v12 + 18215717] = v11;
    }
    v13 = a3;
    v14 = 0;
    dword_140404A6C[v5 + 278845919] = dword_140404A6C[7166 * a2 + 280651596];
    dword_140404A6C[v5 + 278845920] = dword_140404A6C[7166 * a2 + 280651597];
    dword_140404A6C[v5 + 278845921] = dword_140404A6C[7166 * a2 + 280651598];
    v15 = 28664LL * a2 + 40 * v4;
    v16 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v15);
    if ( v16 > 0 )
    {
      v17 = 5 * v13;
      v18 = dword_140404A6C[456202453];
      v19 = 10 * v13;
      v20 = 7166 * v6;
      v21 = &dword_140404A6C[2 * v17 + 280658140 + v20];
      do
      {
        if ( *v21 == (_DWORD)v3 )
        {
          dword_140404A6C[v5 + 278845902] = -1;
          *(unsigned int *)((char *)&dword_140404A6C[280658139] + v15) = v16 - 1;
          *v21 = dword_140404A6C[v20 + 280658139 + v19 + v16];
          if ( v18 )
          {
            if ( (unsigned int)v3 <= 0x3FF )
              ++dword_140404A6C[v3 + 280648157];
          }
        }
        else
        {
          ++v14;
          ++v21;
        }
        v16 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v15);
      }
      while ( v14 < v16 );
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD04ADC0: using guessed type unsigned int;

//----- (00000001400CA9B0) ----------------------------------------------------
__int64            sub_1400CA9B0(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax
  int *v3; // r11
  int v4; // r9d
  int v5; // r8d
  unsigned int v6; // ebp

  result = 7040LL * (int)a2;
  v3 = (int *)((char *)&dword_140404A6C[278845906] + result);
  v4 = 0;
  v5 = *(unsigned int *)((char *)&dword_140404A6C[278845906] + result);
  if ( v5 > 0 )
  {
    v6 = dword_140404A6C[456202453];
    result = (__int64)&dword_140404A6C[1760 * a2 + 278845907];
    do
    {
      if ( *(_DWORD *)result == a1 )
      {
        *v3 = v5 - 1;
        *(_DWORD *)result = dword_140404A6C[1760 * a2 + 278845906 + v5];
        dword_140404A6C[1760 * a1 + 278845903] = -1;
        if ( v6 )
        {
          if ( a1 <= 0x3FF )
            ++dword_140404A6C[a1 + 280648157];
          if ( a2 <= 0x3FF )
            ++dword_140404A6C[a2 + 280648157];
        }
      }
      else
      {
        ++v4;
        result += 4;
      }
      v5 = *v3;
    }
    while ( v4 < *v3 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD04ADC0: using guessed type unsigned int;

//----- (00000001400CAA90) ----------------------------------------------------
__int64            sub_1400CAA90(int a1, float *a2, float a3)
{
  int *v3; // rdi
  unsigned int v4; // r14d
  int v6; // ebx
  __int64 v7; // r15
  __int64 v8; // r12
  float v9; // xmm5_4
  float v10; // xmm15_4
  float v11; // xmm9_4
  float v12; // xmm6_4
  float v13; // xmm13_4
  float v14; // xmm14_4
  float v15; // xmm8_4
  float v16; // xmm12_4
  float v17; // xmm11_4
  __int64 v18; // rcx
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm7_4
  float v30; // xmm10_4
  __int64 v31; // rcx
  float v32; // xmm2_4
  float v33; // xmm9_4
  float v34; // xmm8_4
  float v35; // xmm0_4
  float v36; // xmm8_4
  float v37; // xmm0_4
  float v38; // xmm4_4
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm7_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  __int64 v45; // rax
  float v46; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm6_4
  float v49; // xmm2_4
  float v50; // xmm3_4
  float v51; // xmm1_4
  float v52; // xmm6_4
  float v53; // xmm5_4
  float v54; // xmm3_4
  float v55; // xmm4_4
  float v56; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CAA90[368];
#define v58 (*(__int64 (*))(void *)(sr_frame_1400CAA90 + 0)) /* [rsp+40h] */
#define v59 (*(float (*))(void *)(sr_frame_1400CAA90 + 8)) /* [rsp+48h] */
#define v60 (*(unsigned int (*))(void *)(sr_frame_1400CAA90 + 16)) /* [rsp+50h] */
#define v61 (*(unsigned int (*))(void *)(sr_frame_1400CAA90 + 20)) /* [rsp+54h] */
#define v62 (*(unsigned int (*))(void *)(sr_frame_1400CAA90 + 24)) /* [rsp+58h] */
#define v63 (*(float (*))(void *)(sr_frame_1400CAA90 + 32)) /* [rsp+60h] */
#define v64 (*(float (*))(void *)(sr_frame_1400CAA90 + 36)) /* [rsp+64h] */
#define v65 (*(float (*))(void *)(sr_frame_1400CAA90 + 40)) /* [rsp+68h] */
#define v66 (*(float (*))(void *)(sr_frame_1400CAA90 + 44)) /* [rsp+6Ch] */
#define v67 (*(float (*))(void *)(sr_frame_1400CAA90 + 48)) /* [rsp+70h] */
#define v68 (*(float (*))(void *)(sr_frame_1400CAA90 + 52)) /* [rsp+74h] */
#define v69 (*(float (*))(void *)(sr_frame_1400CAA90 + 56)) /* [rsp+78h] */
#define v70 (*(float (*)[4])(void *)(sr_frame_1400CAA90 + 64)) /* [rsp+80h] */
#define v71 (*(float (*))(void *)(sr_frame_1400CAA90 + 80)) /* [rsp+90h] */
#define v72 (*(float (*))(void *)(sr_frame_1400CAA90 + 84)) /* [rsp+94h] */
#define v73 (*(float (*))(void *)(sr_frame_1400CAA90 + 88)) /* [rsp+98h] */
#define v74 (*(float (*)[4])(void *)(sr_frame_1400CAA90 + 96)) /* [rsp+A0h] */
#define v76 (*(float (*))(void *)(sr_frame_1400CAA90 + 360)) /* [rsp+1A8h] */

  v3 = dword_1402B3664;
  v4 = 0;
  v6 = 0;
  v7 = 1760LL * a1;
  dword_140404A6C[73006988] = 1199570944;
  v8 = 1268LL * (int)dword_140404A6C[v7 + 278845898];
  do
  {
    v9 = *(float *)&dword_140404A6C[v8 + 278521350];
    v10 = *(float *)&dword_140404A6C[v8 + 278521351];
    v11 = *(float *)&dword_140404A6C[v7 + 278845934];
    v12 = *(float *)&dword_140404A6C[v7 + 278845937];
    v13 = *(float *)&dword_140404A6C[v8 + 278521352];
    v14 = *(float *)&dword_140404A6C[v7 + 278845940];
    v15 = *(float *)&dword_140404A6C[v7 + 278845938];
    v16 = *(float *)&dword_140404A6C[v7 + 278845941];
    v17 = *(float *)&dword_140404A6C[v7 + 278845942];
    v18 = 3LL * *v3;
    v19 = (float)((float)((float)(*(float *)&dword_1402B34F0[3 * *(v3 - 1)] - 0.5)
                        + *(float *)&dword_1402B34F0[3 * *(v3 - 1)])
                - 0.5)
        * v9;
    v20 = (float)((float)((float)(*(float *)&dword_1402B34F4[3 * *(v3 - 1)] - 0.5)
                        + *(float *)&dword_1402B34F4[3 * *(v3 - 1)])
                - 0.5)
        * v10;
    v21 = (float)((float)((float)(*(float *)&dword_1402B34F8[3 * *(v3 - 1)] - 0.5)
                        + *(float *)&dword_1402B34F8[3 * *(v3 - 1)])
                - 0.5)
        * v13;
    v63 = (float)((float)((float)(v11 * v19) + *(float *)&dword_140404A6C[v7 + 278845916]) + (float)(v12 * v20))
        + (float)(v14 * v21);
    v70[0] = v63;
    v22 = *(float *)&dword_140404A6C[v7 + 278845939] * v20;
    v64 = (float)((float)((float)(*(float *)&dword_140404A6C[v7 + 278845935] * v19)
                        + *(float *)&dword_140404A6C[v7 + 278845917])
                + (float)(v15 * v20))
        + (float)(v16 * v21);
    v70[1] = v64;
    v23 = (float)((float)(*(float *)&dword_140404A6C[v7 + 278845936] * v19) + *(float *)&dword_140404A6C[v7 + 278845918])
        + v22;
    v24 = (float)(*(float *)&dword_1402B34F0[v18] - 0.5) + *(float *)&dword_1402B34F0[v18];
    v25 = *(float *)&dword_1402B34F4[v18];
    v65 = v23 + (float)(v17 * v21);
    v70[2] = v65;
    v26 = (float)(v24 - 0.5) * v9;
    v27 = (float)((float)((float)(v25 - 0.5) + v25) - 0.5) * v10;
    v28 = (float)((float)(*(float *)&dword_1402B34F8[v18] - 0.5) + *(float *)&dword_1402B34F8[v18]) - 0.5;
    v29 = *(float *)&dword_140404A6C[v7 + 278845916];
    v30 = v11;
    v31 = 3LL * v3[1];
    v32 = v28 * v13;
    v33 = (float)((float)(*(float *)&dword_140404A6C[v7 + 278845935] * v26) + *(float *)&dword_140404A6C[v7 + 278845917])
        + (float)(v15 * v27);
    v34 = (float)(*(float *)&dword_140404A6C[v7 + 278845936] * v26) + *(float *)&dword_140404A6C[v7 + 278845918];
    v35 = *(float *)&dword_140404A6C[v7 + 278845939] * v27;
    v71 = (float)((float)((float)(v30 * v26) + v29) + (float)(v12 * v27)) + (float)(v14 * v32);
    v36 = v34 + v35;
    v37 = *(float *)&dword_1402B34F0[v31];
    v72 = v33 + (float)(v16 * v32);
    v73 = v36 + (float)(v17 * v32);
    v38 = (float)((float)((float)(v37 - 0.5) + v37) - 0.5) * v9;
    v39 = (float)((float)((float)(*(float *)&dword_1402B34F4[v31] - 0.5) + *(float *)&dword_1402B34F4[v31]) - 0.5) * v10;
    v40 = (float)(*(float *)&dword_140404A6C[v7 + 278845934] * v38) + v29;
    v41 = (float)((float)((float)(*(float *)&dword_1402B34F8[v31] - 0.5) + *(float *)&dword_1402B34F8[v31]) - 0.5) * v13;
    v42 = (float)(*(float *)&dword_140404A6C[v7 + 278845935] * v38) + *(float *)&dword_140404A6C[v7 + 278845917];
    v67 = (float)(v40 + (float)(v12 * v39)) + (float)(v41 * v14);
    v43 = *(float *)&dword_140404A6C[v7 + 278845939] * v39;
    v44 = (float)(*(float *)&dword_140404A6C[v7 + 278845936] * v38) + *(float *)&dword_140404A6C[v7 + 278845918];
    v68 = (float)(v42 + (float)(*(float *)&dword_140404A6C[v7 + 278845938] * v39)) + (float)(v41 * v16);
    v45 = v3[2];
    v46 = v44 + v43;
    v47 = *(float *)&dword_1402B34F0[3 * v45];
    v66 = v46 + (float)(v41 * v17);
    v69 = v66;
    v48 = (float)((float)((float)(v47 - 0.5) + v47) - 0.5) * v9;
    v49 = (float)(v48 * *(float *)&dword_140404A6C[v7 + 278845934]) + *(float *)&dword_140404A6C[v7 + 278845916];
    v50 = (float)((float)(v48 * *(float *)&dword_140404A6C[v7 + 278845935]) + *(float *)&dword_140404A6C[v7 + 278845917])
        + (float)((float)((float)((float)((float)(*(float *)&dword_1402B34F4[3 * v45] - 0.5)
                                        + *(float *)&dword_1402B34F4[3 * v45])
                                - 0.5)
                        * v10)
                * *(float *)&dword_140404A6C[v7 + 278845938]);
    v51 = (float)((float)((float)(*(float *)&dword_1402B34F8[3 * v45] - 0.5) + *(float *)&dword_1402B34F8[3 * v45]) - 0.5)
        * v13;
    v52 = (float)((float)((float)(v48 * *(float *)&dword_140404A6C[v7 + 278845936])
                        + *(float *)&dword_140404A6C[v7 + 278845918])
                + (float)((float)((float)((float)((float)(*(float *)&dword_1402B34F4[3 * v45] - 0.5)
                                                + *(float *)&dword_1402B34F4[3 * v45])
                                        - 0.5)
                                * v10)
                        * *(float *)&dword_140404A6C[v7 + 278845939]))
        + (float)(v51 * v17);
    v74[0] = (float)(v49
                   + (float)((float)((float)((float)((float)(*(float *)&dword_1402B34F4[3 * v45] - 0.5)
                                                   + *(float *)&dword_1402B34F4[3 * v45])
                                           - 0.5)
                                   * v10)
                           * *(float *)&dword_140404A6C[v7 + 278845937]))
           + (float)(v51 * v14);
    v74[2] = v52;
    v74[1] = v50 + (float)(v51 * v16);
    v53 = (float)((float)(v68 - v64) * (float)(v73 - v65)) - (float)((float)(v66 - v65) * (float)(v72 - v64));
    v54 = (float)((float)(v66 - v65) * (float)(v71 - v63)) - (float)((float)(v67 - v63) * (float)(v73 - v65));
    v55 = (float)((float)(v67 - v63) * (float)(v72 - v64)) - (float)((float)(v68 - v64) * (float)(v71 - v63));
    v56 = fsqrt((float)((float)(v54 * v54) + (float)(v53 * v53)) + (float)(v55 * v55));
    if ( v56 == 0.0 )
    {
      v58 = 0;
      v59 = 0.0;
    }
    else
    {
      *(float *)&v58 = (float)(1.0 / v56) * v53;
      *((float *)&v58 + 1) = (float)(1.0 / v56) * v54;
      v59 = (float)(1.0 / v56) * v55;
    }
    if ( sub_140158760((float *)&v60, (float *)&v58, &v76, a2, a3, v70, &v71, &v67)
      && *(float *)&dword_140404A6C[73006988] > v76 )
    {
      dword_140404A6C[73006981] = v60;
      dword_140404A6C[73006982] = v61;
      dword_140404A6C[73006983] = v62;
      *(_QWORD *)&dword_140404A6C[73006984] = v58;
      *(float *)&dword_140404A6C[73006986] = v59;
      *(float *)&dword_140404A6C[73006988] = v76;
      dword_140404A6C[73006993] = v6;
    }
    if ( sub_140158760((float *)&v60, (float *)&v58, &v76, a2, a3, v70, &v67, v74)
      && *(float *)&dword_140404A6C[73006988] > v76 )
    {
      dword_140404A6C[73006981] = v60;
      dword_140404A6C[73006982] = v61;
      dword_140404A6C[73006983] = v62;
      *(_QWORD *)&dword_140404A6C[73006984] = v58;
      *(float *)&dword_140404A6C[73006986] = v59;
      *(float *)&dword_140404A6C[73006988] = v76;
      dword_140404A6C[73006993] = v6;
    }
    ++v6;
    v3 += 4;
  }
  while ( v6 < 6 );
  LOBYTE(v4) = *(float *)&dword_140404A6C[73006988] < 65536.0;
  return v4;
}
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
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74
#undef v76

// 1402B34F0: using guessed type int dword_1402B34F0[];
// 1402B34F4: using guessed type int dword_1402B34F4[];
// 1402B34F8: using guessed type int dword_1402B34F8[];
// 1402B3664: using guessed type int dword_1402B3664[];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A8489C: using guessed type unsigned int;
// 151A848B0: using guessed type unsigned int;

//----- (00000001400CB2D0) ----------------------------------------------------
__int64            sub_1400CB2D0(FILE *Stream, int a2)
{
  int v5; // ebx
  int v6; // esi
  unsigned int *v7; // rcx
  int v8; // eax
  unsigned int *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rbp
  char *v12; // rcx
  char *v13; // rbx
  signed int v14; // ebx
  __int64 v15; // rsi
  unsigned int *v16; // rcx
  char *v17; // rcx
  signed int v18; // r15d
  int *v19; // rsi
  char *v20; // rcx
  int v21; // ebx
  __int64 v22; // rbp
  unsigned int *v23; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CB2D0[32];
#define Buffer (*(int (*))(void *)(sr_frame_1400CB2D0 + 0)) /* [rsp+68h] */
#define v25 (*(int (*))(void *)(sr_frame_1400CB2D0 + 8)) /* [rsp+70h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_1400CB2D0 + 16)) /* [rsp+78h] */

  Buffer = 1;
  if ( a2 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, (__int64)Stream);
    sub_14020CE0C((__int64)&dword_140404A6C[273322513], 4, 1, (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(Stream));
    if ( Buffer != 1 )
      return 0;
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[273322513]), 4, 1, (FILE *)(uintptr_t)(Stream));
  }
  v5 = 0;
  if ( (int)dword_140404A6C[273322513] > 0 )
  {
    v6 = 0;
    do
    {
      v7 = &dword_140404A6C[v6 + 273322514];
      if ( a2 )
        sub_14020CE0C((__int64)v7, 4, 3, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(v7), 4, 3, (FILE *)(uintptr_t)(Stream));
      ++v5;
      v6 += 3;
    }
    while ( v5 < (int)dword_140404A6C[273322513] );
  }
  if ( a2 )
    sub_14020CE0C((__int64)&dword_140404A6C[273324050], 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[273324050]), 4, 1, (FILE *)(uintptr_t)(Stream));
  v8 = 0;
  v25 = 0;
  if ( (int)dword_140404A6C[273324050] > 0 )
  {
    v9 = &dword_140404A6C[273324567];
    do
    {
      v10 = v8;
      v11 = 26648LL * v8;
      v26 = v11;
      v12 = (char *)&dword_140404A6C[273324051] + v11;
      v13 = (char *)&dword_140404A6C[273303053] + v11;
      if ( a2 )
      {
        sub_14020CE0C((__int64)v12, 4, 3, (__int64)Stream);
        sub_14020CE0C((__int64)(v13 + 84004), 4, 1, (__int64)Stream);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(v12), 4, 3, (FILE *)(uintptr_t)(Stream));
        fread_sr((void *)(uintptr_t)(v13 + 84004), 4, 1, (FILE *)(uintptr_t)(Stream));
      }
      v14 = 0;
      if ( (int)*(v9 - 513) > 0 )
      {
        v15 = 6662 * v10;
        do
        {
          v16 = &dword_140404A6C[v15 + 273324055 + v14];
          if ( a2 )
            sub_14020CE0C((__int64)v16, 4, 1, (__int64)Stream);
          else
            fread_sr((void *)(uintptr_t)(v16), 4, 1, (FILE *)(uintptr_t)(Stream));
          ++v14;
        }
        while ( v14 < (int)*(v9 - 513) );
      }
      v17 = (char *)&dword_140404A6C[273324567] + v11;
      if ( a2 )
        sub_14020CE0C((__int64)v17, 4, 1, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(v17), 4, 1, (FILE *)(uintptr_t)(Stream));
      v18 = 0;
      if ( (int)*v9 > 0 )
      {
        v19 = (int *)(v9 + 2);
        do
        {
          v20 = (char *)&dword_140404A6C[9 * v18 + 273324569] + v11;
          if ( a2 )
            sub_14020CE0C((__int64)v20, 4, 1, (__int64)Stream);
          else
            fread_sr((void *)(uintptr_t)(v20), 4, 1, (FILE *)(uintptr_t)(Stream));
          v21 = 0;
          if ( *v19 > 0 )
          {
            v22 = 9LL * v18 + 6662LL * v25;
            do
            {
              v23 = &dword_140404A6C[v22 + 273324570 + v21];
              if ( a2 )
                sub_14020CE0C((__int64)v23, 4, 1, (__int64)Stream);
              else
                fread_sr((void *)(uintptr_t)(v23), 4, 1, (FILE *)(uintptr_t)(Stream));
              ++v21;
            }
            while ( v21 < *v19 );
            v11 = v26;
          }
          ++v18;
          v19 += 9;
        }
        while ( v18 < (int)*v9 );
      }
      v9 += 6662;
      v8 = ++v25;
    }
    while ( v25 < (int)dword_140404A6C[273324050] );
  }
  return 1;
}
#undef Buffer
#undef v25
#undef v26

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400CB5F0) ----------------------------------------------------
void            sub_1400CB5F0(int a1, char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  unsigned int *v4; // r14
  int i; // ebx
  int v6; // r13d
  unsigned int *v7; // rbp
  __int64 v8; // r14
  signed int v9; // esi
  int v10; // esi
  int v11; // ebx
  int v12; // eax
  unsigned int *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rbp
  signed int v16; // ebx
  __int64 v17; // rsi
  signed int v18; // r15d
  int *v19; // rsi
  int v20; // ebx
  __int64 v21; // rbp
  __int64 v22; // rsi
  void *v23; // rcx
  __int64 v24; // rax
  void *v25; // rcx
  __int64 v26; // rax
  signed int v27; // r9d
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ecx
  unsigned int *v34; // r9
  int v35; // r11d
  signed __int64 v36; // r10
  unsigned int *v37; // r8
  int v38; // eax
  signed int v39; // edx
  _DWORD *v40; // rcx
  unsigned int v41; // eax
  int v42; // r10d
  unsigned int *v43; // r8
  unsigned int v44; // xmm0_4
  unsigned int v45; // xmm1_4
  unsigned int v46; // xmm2_4
  unsigned int v47; // xmm3_4
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  void *v54; // rcx
  __m128i *v55; // rax
  unsigned int v56; // ecx
  __m128i *v57; // rax
  unsigned int v58; // ecx
  unsigned int v59; // eax
  __int64 v60; // rax
  int v61; // r8d
  __int64 v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  int v66; // ebp
  __int64 v67; // r12
  unsigned int *v68; // rdi
  unsigned int *v69; // rbx
  int v70; // eax
  __int64 v71; // rax
  signed int v72; // r8d
  __int64 v73; // rdx
  unsigned int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  signed int v77; // r10d
  _DWORD *v78; // r9
  int v79; // r8d
  char *v80; // rdx
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rcx
  int v95; // r14d
  unsigned int *v96; // rbp
  signed int v97; // edi
  __int64 v98; // rbx
  __int64 v99; // r9
  __int64 v100; // r8
  __int64 v101; // rax
  float v102; // xmm0_4
  float v103; // xmm1_4
  float v104; // xmm6_4
  __int64 v105; // rdx
  float v106; // xmm8_4
  float v107; // xmm4_4
  float v108; // xmm7_4
  __int64 v109; // rax
  float *v110; // rdx
  float v111; // xmm5_4
  float v112; // xmm2_4
  float v113; // xmm3_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CB5F0[160];
#define v114 (*(int (*))(void *)(sr_frame_1400CB5F0 + 0)) /* [rsp+20h] */
#define Buffer (*(int (*))(void *)(sr_frame_1400CB5F0 + 4)) /* [rsp+24h] */
#define v116 (*(__int64 (*))(void *)(sr_frame_1400CB5F0 + 8)) /* [rsp+28h] */
#define v118 (*(int (*))(void *)(sr_frame_1400CB5F0 + 144)) /* [rsp+B0h] */
#define v119 (*(int (*))(void *)(sr_frame_1400CB5F0 + 152)) /* [rsp+B8h] */

  v2 = sub_14020B8D8(a2, "rb");
  v3 = v2;
  v4 = &dword_140404A6C[273306127];
  if ( v2 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v2));
    if ( Buffer != 3 )
    {
      sub_14020B9E8(v3);
      return;
    }
    fread_sr((void *)(uintptr_t)(&v118), 4, 1, (FILE *)(uintptr_t)(v3));
    if ( !v118 )
    {
      v119 = 2;
      fread_sr((void *)(uintptr_t)(&v119), 4, 1, (FILE *)(uintptr_t)(v3));
      if ( v119 == 2 )
      {
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[273303053]), 4, 1, (FILE *)(uintptr_t)(v3));
        for ( i = 0; i < (int)dword_140404A6C[273303053]; ++i )
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[2 * i + 273303054 + i]), 4, 3, (FILE *)(uintptr_t)(v3));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[273306126]), 4, 1, (FILE *)(uintptr_t)(v3));
        v6 = 0;
        v114 = 0;
        if ( (int)dword_140404A6C[273306126] > 0 )
        {
          v7 = &dword_140404A6C[273306127];
          do
          {
            v8 = 13LL * v6;
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v8 + 273306127]), 4, 1, (FILE *)(uintptr_t)(v3));
            v9 = 0;
            if ( (int)*v7 > 0 )
            {
              do
              {
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[13 * v6 + 273306128 + v9]), 4, 1, (FILE *)(uintptr_t)(v3));
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[2 * v9++ + 273306132 + v8]), 4, 2, (FILE *)(uintptr_t)(v3));
              }
              while ( v9 < (int)*v7 );
              v6 = v114;
            }
            ++v6;
            v7 += 13;
            v114 = v6;
          }
          while ( v6 < (int)dword_140404A6C[273306126] );
        }
      }
    }
    fread_sr((void *)(uintptr_t)(&v118), 4, 1, (FILE *)(uintptr_t)(v3));
    if ( v118 == 1 )
    {
      v114 = 1;
      fread_sr((void *)(uintptr_t)(&v114), 4, 1, (FILE *)(uintptr_t)(v3));
      if ( v114 == 1 )
      {
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[273322513]), 4, 1, (FILE *)(uintptr_t)(v3));
        v10 = 0;
        if ( (int)dword_140404A6C[273322513] > 0 )
        {
          v11 = 0;
          do
          {
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v11 + 273322514]), 4, 3, (FILE *)(uintptr_t)(v3));
            ++v10;
            v11 += 3;
          }
          while ( v10 < (int)dword_140404A6C[273322513] );
        }
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[273324050]), 4, 1, (FILE *)(uintptr_t)(v3));
        v12 = 0;
        v119 = 0;
        if ( (int)dword_140404A6C[273324050] > 0 )
        {
          v13 = &dword_140404A6C[273324567];
          do
          {
            v14 = v12;
            v15 = 26648LL * v12;
            v116 = v15;
            fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[273324051] + v15), 4, 3, (FILE *)(uintptr_t)(v3));
            fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[273324054] + v15), 4, 1, (FILE *)(uintptr_t)(v3));
            v16 = 0;
            if ( (int)*(v13 - 513) > 0 )
            {
              v17 = 6662 * v14;
              do
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[v17 + 273324055 + v16++]), 4, 1, (FILE *)(uintptr_t)(v3));
              while ( v16 < (int)*(v13 - 513) );
            }
            fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[273324567] + v15), 4, 1, (FILE *)(uintptr_t)(v3));
            v18 = 0;
            if ( (int)*v13 > 0 )
            {
              v19 = (int *)(v13 + 2);
              do
              {
                fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[9 * v18 + 273324569] + v15), 4, 1, (FILE *)(uintptr_t)(v3));
                v20 = 0;
                if ( *v19 > 0 )
                {
                  v21 = 9LL * v18 + 6662LL * v119;
                  do
                    fread_sr((void *)(uintptr_t)(&dword_140404A6C[v21 + 273324570 + v20++]), 4, 1, (FILE *)(uintptr_t)(v3));
                  while ( v20 < *v19 );
                  v15 = v116;
                }
                ++v18;
                v19 += 9;
              }
              while ( v18 < (int)*v13 );
            }
            v13 += 6662;
            v12 = ++v119;
          }
          while ( v119 < (int)dword_140404A6C[273324050] );
        }
      }
    }
    sub_14020B9E8(v3);
    v4 = &dword_140404A6C[273306127];
  }
  v22 = 1268LL * a1;
  v23 = *(void **)&dword_140404A6C[v22 + 278522543];
  dword_140404A6C[v22 + 278522541] = dword_140404A6C[273303053];
  free(v23);
  v24 = sr_path_malloc((int)(12 * dword_140404A6C[v22 + 278522541]));
  v25 = *(void **)&dword_140404A6C[v22 + 278522545];
  *(_QWORD *)&dword_140404A6C[v22 + 278522543] = v24;
  free(v25);
  v26 = sr_path_malloc((int)(8 * dword_140404A6C[v22 + 278522541]));
  v27 = 0;
  *(_QWORD *)&dword_140404A6C[v22 + 278522545] = v26;
  if ( (int)dword_140404A6C[v22 + 278522541] > 0 )
  {
    v28 = 0;
    v29 = 0;
    do
    {
      v30 = dword_140404A6C[v29 + 273303054];
      v29 += 3;
      v31 = *(_QWORD *)&dword_140404A6C[v22 + 278522543];
      v28 += 8;
      ++v27;
      *(_DWORD *)(v29 * 4 + v31 - 12) = v30;
      *(_DWORD *)(v29 * 4 + v31 - 8) = dword_140404A6C[v29 + 273303052];
      *(_DWORD *)(v29 * 4 + v31 - 4) = dword_140404A6C[v29 + 273303053];
      v32 = *(_QWORD *)&dword_140404A6C[v22 + 278522545];
      *(_DWORD *)(v28 + v32 - 8) = dword_140404A6C[v29 + 273304587];
      *(_DWORD *)(v28 + v32 - 4) = dword_140404A6C[v29 + 273304588];
    }
    while ( v27 < (int)dword_140404A6C[v22 + 278522541] );
  }
  v33 = dword_140404A6C[273306126];
  v34 = &dword_140404A6C[177544402];
  v35 = 0;
  dword_140404A6C[177544400] = dword_140404A6C[273306126];
  if ( (int)dword_140404A6C[273306126] > 0 )
  {
    v36 = (char *)&dword_140404A6C[273306128] - (char *)&dword_140404A6C[177544402];
    v37 = &dword_140404A6C[177544401];
    do
    {
      v38 = *v4;
      v39 = 0;
      *v37 = *v4;
      if ( v38 > 0 )
      {
        v40 = v37 + 1;
        do
        {
          ++v39;
          *v40 = *(_DWORD *)((char *)v40 + v36);
          ++v40;
        }
        while ( v39 < (int)*v37 );
      }
      v33 = dword_140404A6C[177544400];
      ++v35;
      v4 += 13;
      v37 += 5;
      v36 += 32LL;
    }
    while ( v35 < (int)dword_140404A6C[177544400] );
  }
  v41 = 0;
  v42 = 0;
  dword_140404A6C[177495247] = 0;
  if ( v33 > 0 )
  {
    v43 = &dword_140404A6C[273306135];
    do
    {
      v44 = *(v43 - 3);
      v45 = *(v43 - 2);
      v46 = v43[1];
      v47 = v43[2];
      dword_140404A6C[3 * v41 + 177495248] = *v34;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v34[1];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v34[2];
      v48 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v48 + 178011345] = v44;
      dword_140404A6C[v48 + 178011346] = v45;
      v49 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v49 + 178011347] = *(v43 - 1);
      dword_140404A6C[v49 + 178011348] = *v43;
      v50 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v50 + 178011349] = v46;
      dword_140404A6C[v50 + 178011350] = v47;
      v41 = ++dword_140404A6C[177495247];
      if ( *(v34 - 1) == 4 )
      {
        dword_140404A6C[3 * v41 + 177495248] = *v34;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v34[2];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v34[3];
        v51 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v51 + 178011345] = v44;
        dword_140404A6C[v51 + 178011346] = v45;
        v52 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v52 + 178011347] = v46;
        dword_140404A6C[v52 + 178011348] = v47;
        v53 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v53 + 178011349] = v43[3];
        dword_140404A6C[v53 + 178011350] = v43[4];
        v41 = ++dword_140404A6C[177495247];
      }
      ++v42;
      v34 += 5;
      v43 += 13;
    }
    while ( v42 < (int)dword_140404A6C[177544400] );
  }
  v54 = *(void **)&dword_140404A6C[v22 + 278522549];
  dword_140404A6C[v22 + 278522547] = v41;
  free(v54);
  v55 = (__m128i *)sr_path_malloc((int)(12 * dword_140404A6C[v22 + 278522547]));
  v56 = dword_140404A6C[v22 + 278522547];
  *(_QWORD *)&dword_140404A6C[v22 + 278522549] = (uint64)(uintptr_t)(v55);
  sub_1401FC920(v55, (     __m128i *)&dword_140404A6C[177495248], (int)(12 * v56));
  free(*(void **)&dword_140404A6C[v22 + 278522551]);
  v57 = (__m128i *)sr_path_malloc((int)(24 * dword_140404A6C[v22 + 278522547]));
  v58 = dword_140404A6C[v22 + 278522547];
  *(_QWORD *)&dword_140404A6C[v22 + 278522551] = (uint64)(uintptr_t)(v57);
  sub_1401FC920(v57, (     __m128i *)&dword_140404A6C[178011345], (int)(24 * v58));
  v59 = dword_140404A6C[273322513];
  dword_140404A6C[v22 + 278522247] = dword_140404A6C[273322513];
  v60 = sr_path_malloc((int)(12 * v59));
  v61 = 0;
  *(_QWORD *)&dword_140404A6C[v22 + 278522249] = v60;
  if ( (int)dword_140404A6C[273322513] > 0 )
  {
    v62 = 0;
    do
    {
      v63 = dword_140404A6C[v62 + 273322514];
      v62 += 3;
      v64 = *(_QWORD *)&dword_140404A6C[v22 + 278522249];
      ++v61;
      *(_DWORD *)(v62 * 4 + v64 - 12) = v63;
      *(_DWORD *)(v62 * 4 + v64 - 8) = dword_140404A6C[v62 + 273322512];
      *(_DWORD *)(v62 * 4 + v64 - 4) = dword_140404A6C[v62 + 273322513];
    }
    while ( v61 < (int)dword_140404A6C[273322513] );
  }
  v65 = dword_140404A6C[273324050];
  v66 = 0;
  dword_140404A6C[v22 + 278522251] = dword_140404A6C[273324050];
  if ( v65 > 0 )
  {
    v67 = -(__int64)&dword_140404A6C[273324569];
    v68 = &dword_140404A6C[v22 + 278522263];
    v69 = &dword_140404A6C[273324054];
    do
    {
      *(v68 - 10) = *(v69 - 3);
      *(v68 - 9) = *(v69 - 2);
      *(v68 - 8) = *(v69 - 1);
      v70 = *v69;
      *(v68 - 7) = *v69;
      v71 = sr_path_malloc(4 * v70);
      v72 = 0;
      *((_QWORD *)v68 - 3) = v71;
      if ( (int)*v69 > 0 )
      {
        v73 = 0;
        do
        {
          v74 = v69[++v73];
          ++v72;
          *(_DWORD *)(v73 * 4 + *((_QWORD *)v68 - 3) - 4) = v74;
        }
        while ( v72 < (int)*v69 );
      }
      v75 = (int)v69[513];
      *(v68 - 4) = v75;
      v76 = sr_path_malloc(36 * v75);
      v77 = 0;
      *((_QWORD *)v68 - 1) = v76;
      if ( (int)v69[513] > 0 )
      {
        v78 = v69 + 515;
        do
        {
          v79 = 0;
          *(_DWORD *)((char *)v78 + *((_QWORD *)v68 - 1) + v67 + 4) = *v78;
          if ( (int)*v78 > 0 )
          {
            v80 = (char *)v78 + v67 + 8;
            do
            {
              v81 = *(_DWORD *)&v80[(_QWORD)v69 + 2056];
              v80 += 4;
              ++v79;
              *(_DWORD *)&v80[*((_QWORD *)v68 - 1) - 4] = v81;
            }
            while ( v79 < *v78 );
          }
          ++v77;
          v78 += 9;
        }
        while ( v77 < (int)v69[513] );
      }
      *v68 = 0;
      v82 = sr_path_malloc(144);
      v83 = (int)*v68;
      *((_QWORD *)v68 + 1) = v82;
      *(_DWORD *)(v82 + 12 * v83) = dword_1402B3750[0];
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B3754[0];
      v84 = (int)*v68;
      *v68 = v84 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v84 + 1)) = dword_1402B3758[0];
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B375C[0];
      v85 = (int)*v68;
      *v68 = v85 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v85 + 1)) = dword_1402B3760[0];
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B3764[0];
      v86 = (int)*v68;
      *v68 = v86 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v86 + 1)) = dword_1402B3768;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B376C;
      v87 = (int)*v68;
      *v68 = v87 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v87 + 1)) = dword_1402B3770;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B3774;
      v88 = (int)*v68;
      *v68 = v88 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v88 + 1)) = dword_1402B3778;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B377C;
      v89 = (int)*v68;
      *v68 = v89 + 1;
      ++v66;
      v69 += 6662;
      v67 -= 26648;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v89 + 1)) = dword_1402B3780;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B3784;
      v90 = (int)*v68;
      *v68 = v90 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v90 + 1)) = dword_1402B3788;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B378C;
      v91 = (int)*v68;
      *v68 = v91 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v91 + 1)) = dword_1402B3790;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B3794;
      v92 = (int)*v68;
      *v68 = v92 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v92 + 1)) = dword_1402B3798;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B379C;
      v93 = (int)*v68;
      *v68 = v93 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v93 + 1)) = dword_1402B37A0;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B37A4;
      v94 = (int)*v68;
      *v68 = v94 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v94 + 1)) = dword_1402B37A8;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)(*v68)++ + 4) = dword_1402B37AC;
      v65 = dword_140404A6C[273324050];
      v68 += 14;
    }
    while ( v66 < (int)dword_140404A6C[273324050] );
  }
  v95 = 0;
  if ( v65 > 0 )
  {
    v96 = &dword_140404A6C[v22 + 278522259];
    do
    {
      v97 = 0;
      if ( (int)*v96 > 0 )
      {
        v98 = 0;
        do
        {
          v99 = *(_QWORD *)&dword_140404A6C[v22 + 278522249];
          v100 = *((_QWORD *)v96 + 1);
          v101 = 3 * *(_DWORD *)(v100 + v98 + 8);
          v102 = *(float *)(v99 + 4 * v101);
          v103 = *(float *)(v99 + 4 * v101 + 4);
          v104 = *(float *)(v99 + 4 * v101 + 8);
          v105 = 3 * *(_DWORD *)(v100 + v98 + 12);
          v106 = *(float *)(v99 + 4 * v105 + 4) - v103;
          v107 = *(float *)(v99 + 4 * v105 + 8) - v104;
          v108 = *(float *)(v99 + 4 * v105) - v102;
          v109 = 3 * *(_DWORD *)(v100 + v98 + 16);
          v110 = (float *)(v98 + v100 + 24);
          v111 = *(float *)(v99 + 4 * v109 + 4) - v103;
          v112 = *(float *)(v99 + 4 * v109 + 8) - v104;
          v113 = *(float *)(v99 + 4 * v109) - v102;
          *v110 = (float)(v111 * v107) - (float)(v112 * v106);
          v110[2] = (float)(v106 * v113) - (float)(v111 * v108);
          v110[1] = (float)(v112 * v108) - (float)(v107 * v113);
          sub_14007A240((__int64)v110, v110);
          ++v97;
          v98 += 36;
        }
        while ( v97 < (int)*v96 );
        v65 = dword_140404A6C[273324050];
      }
      ++v95;
      v96 += 14;
    }
    while ( v95 < v65 );
  }
}
#undef v114
#undef Buffer
#undef v116
#undef v118
#undef v119

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 1402B3750: using guessed type int dword_1402B3750[];
// 1402B3754: using guessed type int dword_1402B3754[];
// 1402B3758: using guessed type int dword_1402B3758[];
// 1402B375C: using guessed type int dword_1402B375C[];
// 1402B3760: using guessed type int dword_1402B3760[];
// 1402B3764: using guessed type int dword_1402B3764[];
// 1402B3768: using guessed type int dword_1402B3768;
// 1402B376C: using guessed type int dword_1402B376C;
// 1402B3770: using guessed type int dword_1402B3770;
// 1402B3774: using guessed type int dword_1402B3774;
// 1402B3778: using guessed type int dword_1402B3778;
// 1402B377C: using guessed type int dword_1402B377C;
// 1402B3780: using guessed type int dword_1402B3780;
// 1402B3784: using guessed type int dword_1402B3784;
// 1402B3788: using guessed type int dword_1402B3788;
// 1402B378C: using guessed type int dword_1402B378C;
// 1402B3790: using guessed type int dword_1402B3790;
// 1402B3794: using guessed type int dword_1402B3794;
// 1402B3798: using guessed type int dword_1402B3798;
// 1402B379C: using guessed type int dword_1402B379C;
// 1402B37A0: using guessed type int dword_1402B37A0;
// 1402B37A4: using guessed type int dword_1402B37A4;
// 1402B37A8: using guessed type int dword_1402B37A8;
// 1402B37AC: using guessed type int dword_1402B37AC;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A91BDA8: using guessed type unsigned int;
// 16A94BDAC: using guessed type unsigned int;
// 1816962A0: using guessed type unsigned int;
// 1816992A4: using guessed type unsigned int;
// 1816A92B0: using guessed type unsigned int;
// 1816AAAB4: using guessed type unsigned int;

//----- (00000001400CC370) ----------------------------------------------------
__int64            sub_1400CC370(int a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  int v5; // r12d
  __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned int *v8; // r14
  signed int i; // ebx
  unsigned int *v11; // rcx
  unsigned int *v12; // rcx
  signed int v13; // eax
  unsigned int *v14; // r15
  __int64 v15; // r14
  unsigned int *v16; // rcx
  signed int v17; // ebx
  __int64 v18; // rcx
  unsigned int *v19; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CC370[144];
#define v20 (*(signed int (*))(void *)(sr_frame_1400CC370 + 0)) /* [rsp+20h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_1400CC370 + 8)) /* [rsp+28h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_1400CC370 + 16)) /* [rsp+30h] */
#define v24 (*(int (*))(void *)(sr_frame_1400CC370 + 136)) /* [rsp+A8h] */

  v4 = a1;
  v24 = 2;
  v5 = a3;
  if ( a3 )
  {
    sub_14020CE0C((__int64)&v24, 4, 1, a2);
    v6 = 9730 * v4;
    v7 = v4;
    v8 = &dword_140404A6C[9730 * v4 + 273303053];
    sub_14020CE0C((__int64)v8, 4, 1, a2);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&v24), 4, 1, (FILE *)(uintptr_t)(a2));
    if ( v24 != 2 )
      return 0;
    v6 = 9730 * v4;
    v7 = v4;
    v8 = &dword_140404A6C[9730 * v4 + 273303053];
    fread_sr((void *)(uintptr_t)(v8), 4, 1, (FILE *)(uintptr_t)(a2));
  }
  for ( i = 0; i < (int)*v8; ++i )
  {
    v11 = &dword_140404A6C[3 * i + 273303054 + v6];
    if ( v5 )
      sub_14020CE0C((__int64)v11, 4, 3, a2);
    else
      fread_sr((void *)(uintptr_t)(v11), 4, 3, (FILE *)(uintptr_t)(a2));
  }
  v12 = &dword_140404A6C[v6 + 273306126];
  if ( v5 )
    sub_14020CE0C((__int64)v12, 4, 1, a2);
  else
    fread_sr((void *)(uintptr_t)(v12), 4, 1, (FILE *)(uintptr_t)(a2));
  v13 = 0;
  v20 = 0;
  if ( (int)dword_140404A6C[v6 + 273306126] > 0 )
  {
    v14 = &dword_140404A6C[v6 + 273306127];
    do
    {
      v15 = v13;
      v22 = 13LL * v13;
      v16 = &dword_140404A6C[v22 + 273306127 + v6];
      if ( v5 )
        sub_14020CE0C((__int64)v16, 4, 1, a2);
      else
        fread_sr((void *)(uintptr_t)(v16), 4, 1, (FILE *)(uintptr_t)(a2));
      v17 = 0;
      if ( (int)*v14 > 0 )
      {
        v18 = 13 * v15 + 9730 * v7;
        v21 = 4865 * v7;
        do
        {
          v19 = &dword_140404A6C[v18 + 273306128 + v17];
          if ( a3 )
          {
            sub_14020CE0C((__int64)v19, 4, 1, a2);
            sub_14020CE0C((__int64)&dword_140404A6C[2 * v17 + 273306132 + 2 * v21 + v22], 4, 2, a2);
          }
          else
          {
            fread_sr((void *)(uintptr_t)(v19), 4, 1, (FILE *)(uintptr_t)(a2));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[2 * v17 + 273306132 + 2 * v21 + v22]), 4, 2, (FILE *)(uintptr_t)(a2));
          }
          v18 = 13 * v15 + 9730 * v7;
          ++v17;
        }
        while ( v17 < (int)*v14 );
        v5 = a3;
      }
      v13 = v20 + 1;
      v14 += 13;
      v20 = v13;
    }
    while ( v13 < (int)dword_140404A6C[v6 + 273306126] );
  }
  return 1;
}
#undef v20
#undef v21
#undef v22
#undef v24

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400CC610) ----------------------------------------------------
__int64 sub_1400CC610()
{
  __int64 result; // rax
  unsigned int *v1; // rbx
  int v2; // edi
  __int64 v3; // r8
  int v4; // edx
  float v5; // xmm14_4
  float *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  float v13; // xmm11_4
  float v14; // xmm12_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  unsigned int v21; // r9d
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  int v30; // ebp
  __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rbx
  unsigned int v34; // r10d
  unsigned __int64 v35; // rax
  BOOL v36; // edx
  __int64 v37; // rax
  __int64 v38; // r8
  BOOL v39; // r9d
  int v40; // ecx
  unsigned int v41; // eax
  int v42; // ecx
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // edx
  unsigned int v49; // r8d
  signed int v50; // r9d
  unsigned int v51; // eax
  __int64 v52; // rcx
  int v53; // r8d
  unsigned int *v54; // rcx
  int v55; // edi
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // eax
  unsigned int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // r9
  unsigned int v62; // r8d
  unsigned int v63; // edx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  signed int v68; // esi
  unsigned int *v69; // rdi
  unsigned int v70; // ecx
  unsigned int v71; // edx
  int v72; // eax
  unsigned int v73; // eax
  int v74; // edi
  int v75; // r8d
  __int64 v76; // rsi
  __int64 v77; // rcx
  unsigned int v78; // eax
  unsigned __int8 v79; // al
  __int64 v80; // rax
  int v81; // eax
  unsigned int v82; // eax
  unsigned int *v83; // rdx
  unsigned int v84; // r8d
  unsigned int v85; // eax
  __int64 v86; // rcx
  unsigned int v87; // xmm0_4
  unsigned int v88; // xmm1_4
  unsigned int v89; // xmm2_4
  unsigned int v90; // r11d
  unsigned int v91; // ecx
  unsigned int v92; // ecx
  __int64 v93; // rcx
  int v94; // eax
  int v95; // edx
  int v96; // r9d
  float v97; // xmm3_4
  unsigned int *v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r10
  int v101; // eax
  float v102; // xmm2_4
  float v103; // xmm2_4
  int v104; // eax
  float v105; // xmm2_4
  float v106; // xmm2_4
  int v107; // eax
  float v108; // xmm2_4
  float v109; // xmm2_4
  int v110; // eax
  float v111; // xmm2_4
  float v112; // xmm2_4
  __int64 v113; // rcx
  signed int v114; // r8d
  bool v115; // cc
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CC610[16];
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_1400CC610 + 0)) /* [rsp+E8h] */

  result = (__int64)&retaddr;
  dword_140404A6C[273270157] = 0;
  dword_140404A6C[273270414] = 0;
  dword_140404A6C[273270671] = 0;
  dword_140404A6C[273270928] = 0;
  dword_140404A6C[273271185] = 0;
  dword_140404A6C[273271442] = 0;
  dword_140404A6C[273271699] = 0;
  dword_140404A6C[273271956] = 0;
  dword_140404A6C[273272213] = 0;
  dword_140404A6C[273272470] = 0;
  dword_140404A6C[273272727] = 0;
  dword_140404A6C[273272984] = 0;
  dword_140404A6C[273273241] = 0;
  dword_140404A6C[273273498] = 0;
  dword_140404A6C[273273755] = 0;
  dword_140404A6C[273274012] = 0;
  dword_140404A6C[273274269] = 0;
  dword_140404A6C[273274526] = 0;
  dword_140404A6C[273274783] = 0;
  dword_140404A6C[273275040] = 0;
  dword_140404A6C[273275297] = 0;
  dword_140404A6C[273275554] = 0;
  dword_140404A6C[273275811] = 0;
  dword_140404A6C[273276068] = 0;
  dword_140404A6C[273276325] = 0;
  dword_140404A6C[273276582] = 0;
  dword_140404A6C[273276839] = 0;
  dword_140404A6C[273277096] = 0;
  dword_140404A6C[273277353] = 0;
  dword_140404A6C[273277610] = 0;
  dword_140404A6C[273277867] = 0;
  dword_140404A6C[273278124] = 0;
  dword_140404A6C[273278381] = 0;
  dword_140404A6C[273278638] = 0;
  dword_140404A6C[273278895] = 0;
  dword_140404A6C[273279152] = 0;
  dword_140404A6C[273279409] = 0;
  dword_140404A6C[273279666] = 0;
  dword_140404A6C[273279923] = 0;
  dword_140404A6C[273280180] = 0;
  dword_140404A6C[273280437] = 0;
  dword_140404A6C[273280694] = 0;
  dword_140404A6C[273280951] = 0;
  dword_140404A6C[273281208] = 0;
  dword_140404A6C[273281465] = 0;
  dword_140404A6C[273281722] = 0;
  dword_140404A6C[273281979] = 0;
  dword_140404A6C[273282236] = 0;
  dword_140404A6C[273282493] = 0;
  dword_140404A6C[273282750] = 0;
  dword_140404A6C[273283007] = 0;
  dword_140404A6C[273283264] = 0;
  dword_140404A6C[273283521] = 0;
  dword_140404A6C[273283778] = 0;
  dword_140404A6C[273284035] = 0;
  dword_140404A6C[273284292] = 0;
  dword_140404A6C[273284549] = 0;
  dword_140404A6C[273284806] = 0;
  dword_140404A6C[273285063] = 0;
  dword_140404A6C[273285320] = 0;
  dword_140404A6C[273285577] = 0;
  dword_140404A6C[273285834] = 0;
  dword_140404A6C[273286091] = 0;
  dword_140404A6C[273286348] = 0;
  dword_140404A6C[273286605] = 0;
  dword_140404A6C[273286862] = 0;
  dword_140404A6C[273287119] = 0;
  dword_140404A6C[273287376] = 0;
  dword_140404A6C[273287633] = 0;
  dword_140404A6C[273287890] = 0;
  dword_140404A6C[273288147] = 0;
  dword_140404A6C[273288404] = 0;
  dword_140404A6C[273288661] = 0;
  dword_140404A6C[273288918] = 0;
  dword_140404A6C[273289175] = 0;
  dword_140404A6C[273289432] = 0;
  v1 = &dword_140404A6C[278845898];
  dword_140404A6C[273289689] = 0;
  dword_140404A6C[273289946] = 0;
  v2 = 0;
  dword_140404A6C[273290203] = 0;
  dword_140404A6C[273290460] = 0;
  dword_140404A6C[273290717] = 0;
  dword_140404A6C[273290974] = 0;
  dword_140404A6C[273291231] = 0;
  dword_140404A6C[273291488] = 0;
  dword_140404A6C[273291745] = 0;
  dword_140404A6C[273292002] = 0;
  dword_140404A6C[273292259] = 0;
  dword_140404A6C[273292516] = 0;
  dword_140404A6C[273292773] = 0;
  dword_140404A6C[273293030] = 0;
  dword_140404A6C[273293287] = 0;
  dword_140404A6C[273293544] = 0;
  dword_140404A6C[273293801] = 0;
  dword_140404A6C[273294058] = 0;
  dword_140404A6C[273294315] = 0;
  dword_140404A6C[273294572] = 0;
  dword_140404A6C[273294829] = 0;
  dword_140404A6C[273295086] = 0;
  dword_140404A6C[273295343] = 0;
  dword_140404A6C[273295600] = 0;
  dword_140404A6C[273295857] = 0;
  dword_140404A6C[273296114] = 0;
  dword_140404A6C[273296371] = 0;
  dword_140404A6C[273296628] = 0;
  dword_140404A6C[273296885] = 0;
  dword_140404A6C[273297142] = 0;
  dword_140404A6C[273297399] = 0;
  dword_140404A6C[273297656] = 0;
  dword_140404A6C[273297913] = 0;
  dword_140404A6C[273298170] = 0;
  dword_140404A6C[273298427] = 0;
  dword_140404A6C[273298684] = 0;
  dword_140404A6C[273298941] = 0;
  dword_140404A6C[273299198] = 0;
  dword_140404A6C[273299455] = 0;
  dword_140404A6C[273299712] = 0;
  dword_140404A6C[273299969] = 0;
  dword_140404A6C[273300226] = 0;
  dword_140404A6C[273300483] = 0;
  dword_140404A6C[273300740] = 0;
  dword_140404A6C[273300997] = 0;
  dword_140404A6C[273301254] = 0;
  dword_140404A6C[273301511] = 0;
  dword_140404A6C[273301768] = 0;
  dword_140404A6C[273302025] = 0;
  dword_140404A6C[273302282] = 0;
  dword_140404A6C[273302539] = 0;
  dword_140404A6C[273302796] = 0;
  do
  {
    if ( *(v1 - 5) )
    {
      if ( *v1 == 26 )
      {
        result = v1[213] & 0x7F;
        v3 = (int)dword_140404A6C[257 * result + 273270157];
        if ( (int)v3 < 256 )
        {
          dword_140404A6C[257 * result + 273270158 + v3] = v2;
          ++dword_140404A6C[257 * result + 273270157];
        }
      }
      v4 = v1[4];
      if ( v4 != -1 )
        result = sub_1401380F0(v2, v4);
    }
    ++v2;
    v1 += 1760;
  }
  while ( v2 < 1024 );
  v5 = *(float *)&dword_140404A6C[278571065];
  v6 = (float *)&dword_140404A6C[278845942];
  v7 = 1024;
  do
  {
    if ( *((_DWORD *)v6 - 49) )
    {
      result = *((int *)v6 - 39);
      if ( (_DWORD)result != -1 )
      {
        v8 = 1760 * result;
        v9 = *(float *)&dword_140404A6C[1760 * result + 278845916];
        *(v6 - 26) = v9;
        v10 = *(float *)&dword_140404A6C[1760 * result + 278845917];
        *(v6 - 25) = v10;
        v11 = *(float *)&dword_140404A6C[1760 * result + 278845918];
        *(v6 - 24) = v11;
        v12 = *(float *)&dword_140404A6C[1760 * result + 278845934];
        *(v6 - 8) = v12;
        v13 = *(float *)&dword_140404A6C[1760 * result + 278845935];
        *(v6 - 7) = v13;
        v14 = *(float *)&dword_140404A6C[1760 * result + 278845936];
        *(v6 - 6) = v14;
        v15 = *(float *)&dword_140404A6C[1760 * result + 278845937];
        *(v6 - 5) = v15;
        v16 = *(float *)&dword_140404A6C[1760 * result + 278845938];
        *(v6 - 4) = v16;
        v17 = *(float *)&dword_140404A6C[1760 * result + 278845939];
        *(v6 - 3) = v17;
        v18 = *(float *)&dword_140404A6C[1760 * result + 278845940];
        *(v6 - 2) = v18;
        v19 = *(float *)&dword_140404A6C[1760 * result + 278845941];
        *(v6 - 1) = v19;
        v20 = *(float *)&dword_140404A6C[1760 * result + 278845942];
        *v6 = v20;
        v21 = dword_140404A6C[1760 * result + 278845898];
        result = v21 - 15;
        if ( (unsigned int)result <= 1 )
        {
          result = *((unsigned int *)v6 - 44);
          if ( (_DWORD)result != 17 )
          {
            v28 = v10;
            v27 = v11;
            v23 = v10;
            v26 = v9;
            if ( (_DWORD)result != 18 )
            {
LABEL_22:
              *(v6 - 23) = v26;
              *(v6 - 22) = v28;
              *(v6 - 21) = v27;
              goto LABEL_23;
            }
            v19 = v13;
            v25 = (float)((float)*((int *)v6 - 38) * 0.10546875) - 0.2109375;
            v26 = (float)(v12 * v25) + v9;
            v27 = (float)(v14 * v25) + v11;
            goto LABEL_20;
          }
          v29 = (float)((float)*((int *)v6 - 38) * 0.10546875) - 0.2109375;
          v26 = (float)(v12 * v29) + v9;
          v28 = (float)(v13 * v29) + v10;
          v27 = (float)(v14 * v29) + v11;
        }
        else
        {
          if ( v21 == 39 )
          {
            v22 = (float)(v15 * v5) + v9;
            v23 = (float)(v16 * v5) + v10;
            v24 = (float)(v17 * v5) + v11;
            *(v6 - 26) = v22;
            *(v6 - 25) = v23;
            *(v6 - 24) = v24;
            result = (int)dword_140404A6C[v8 + 278845898];
            v25 = *(float *)&dword_140404A6C[1268 * result + 278521614];
            v26 = (float)(v18 * v25) + v22;
            v27 = (float)(v20 * v25) + v24;
LABEL_20:
            v28 = (float)(v19 * v25) + v23;
            goto LABEL_21;
          }
          v26 = v9 - (float)(v15 * 0.0625);
          v28 = v10 - (float)(v16 * 0.0625);
          v27 = v11 - (float)(v17 * 0.0625);
        }
LABEL_21:
        *(v6 - 26) = v26;
        *(v6 - 25) = v28;
        *(v6 - 24) = v27;
        goto LABEL_22;
      }
    }
LABEL_23:
    v6 += 1760;
    --v7;
  }
  while ( v7 );
  v30 = 0;
  v31 = 0;
  v32 = 0x1002060000LL;
  while ( 2 )
  {
    v33 = 1760 * v31;
    if ( !dword_140404A6C[1760 * v31 + 278845893] )
      goto LABEL_215;
    v34 = dword_140404A6C[v33 + 278845902];
    if ( v34 == -1
      && dword_140404A6C[v33 + 278845903] == -1
      && ((v35 = (int)dword_140404A6C[v33 + 278845898], (unsigned int)v35 > 0x24) || !_bittest64(&v32, v35)) )
    {
      v36 = 1;
    }
    else
    {
      v37 = (int)dword_140404A6C[v33 + 278845903];
      v36 = 0;
      if ( (_DWORD)v37 != -1 && dword_140404A6C[1268 * dword_140404A6C[1760 * v37 + 278845898] + 278521289] )
        v36 = dword_140404A6C[1760 * v37 + 278845902] == -1;
    }
    v38 = (int)dword_140404A6C[v33 + 278845898];
    v39 = 0;
    v40 = dword_140404A6C[v33 + 278845900];
    if ( (unsigned int)(v38 - 19) > 5 )
      v39 = v36;
    if ( v40 < 0x10000 )
    {
LABEL_39:
      if ( !v39 )
        goto LABEL_47;
      if ( v40 > 18000 )
        v40 = 18000;
      v41 = dword_140404A6C[283831312];
      v42 = v40 - 1;
      if ( (int)dword_140404A6C[v33 + 278845906] > 0 )
        v42 = 18000;
      dword_140404A6C[v33 + 278845900] = v42;
      if ( ((v41 - 3) & 0xFFFFFFFD) == 0 && v42 > 0 )
LABEL_48:
        dword_140404A6C[v33 + 278845900] = 0xFFFF;
    }
    else
    {
      if ( v34 != -1 )
      {
        dword_140404A6C[v33 + 278845900] = 18000;
        v40 = 18000;
        goto LABEL_39;
      }
LABEL_47:
      if ( (unsigned int)(v40 - 1) <= 0xFFFE )
        goto LABEL_48;
    }
    if ( dword_140404A6C[1268 * v38 + 278521289] )
      sub_1400CF670(v30);
    v43 = dword_140404A6C[v33 + 278845898];
    if ( v43 == 27 )
    {
      v44 = (int)dword_140404A6C[v33 + 278846053];
      if ( (unsigned int)v44 <= 0x1FF )
      {
        v45 = 5210 * v44;
        if ( dword_140404A6C[5210 * v44 + 129716709] )
          dword_140404A6C[v33 + 278845900] = 0xFFFF;
        v46 = (int)dword_140404A6C[v33 + 278845902];
        dword_140404A6C[v45 + 129716717] = 1;
        if ( (_DWORD)v46 != -1 && dword_140404A6C[7166 * v46 + 280651313] == (_DWORD)v44 )
        {
          dword_140404A6C[v45 + 129716718] = dword_140404A6C[7166 * v46 + 280651305];
          dword_140404A6C[v45 + 129716717] = 0;
        }
      }
      goto LABEL_120;
    }
    if ( v43 == 26 )
    {
      dword_140404A6C[v33 + 278846112] = 0;
      if ( (dword_140404A6C[v33 + 278845977] & 1) != 0 )
        dword_140404A6C[v33 + 278846112] = 1;
      goto LABEL_120;
    }
    if ( ((v43 - 25) & 0xFFFFFFF7) != 0 )
      goto LABEL_120;
    v47 = dword_140404A6C[v33 + 278845972];
    if ( v47 > 0 )
      dword_140404A6C[v33 + 278845972] = v47 - 1;
    v48 = dword_140404A6C[v33 + 278846052];
    switch ( v48 )
    {
      case 0u:
        dword_140404A6C[v33 + 278845982] = 0;
        if ( (dword_140404A6C[v33 + 278845977] & 1) == 0 || (dword_140404A6C[v33 + 278845978] & 1) != 0 )
          goto LABEL_120;
        dword_140404A6C[v33 + 278846052] = 1;
        *(_QWORD *)&dword_140404A6C[v33 + 278845983] = 0;
LABEL_118:
        v59 = v30;
LABEL_119:
        sub_140051940(v59);
        goto LABEL_120;
      case 4u:
        v49 = dword_140404A6C[283831474];
        v50 = dword_140404A6C[v33 + 278845982] + 1;
        dword_140404A6C[v33 + 278845982] = v50;
        if ( (v49 & 0x3F) == 0 && dword_140404A6C[456202453] )
        {
          v51 = dword_140404A6C[283785994];
          v52 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v52) = 19;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v52) = v49;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v52) = v51;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v52) = v30;
          *(unsigned int *)((char *)&dword_140404A6C[297756297] + v52) = 1065353216;
          *(unsigned int *)((char *)&dword_140404A6C[297756298] + v52) = 1065353216;
        }
        if ( v50 >= 360 || (dword_140404A6C[v33 + 278845977] & 1) != 0 && (dword_140404A6C[v33 + 278845978] & 1) == 0 )
        {
          dword_140404A6C[v33 + 278846052] = 0;
          *(_QWORD *)&dword_140404A6C[v33 + 278845982] = 0;
          dword_140404A6C[v33 + 278845984] = 0;
LABEL_117:
          dword_140404A6C[v33 + 278845980] = -1;
          goto LABEL_118;
        }
        goto LABEL_120;
      case 1u:
        dword_140404A6C[v33 + 278845982] = 0;
        if ( (dword_140404A6C[v33 + 278845977] & 1) != 0 && (dword_140404A6C[v33 + 278845978] & 1) == 0 )
        {
          dword_140404A6C[v33 + 278846052] = 0;
          *(_QWORD *)&dword_140404A6C[v33 + 278845983] = 0;
          sub_140051940(v30);
        }
        v53 = dword_140404A6C[v33 + 278845984];
        if ( v53 >= 1000 )
        {
          dword_140404A6C[v33 + 278845984] = 0;
          v54 = &dword_140404A6C[278845898];
          dword_140404A6C[v33 + 278845972] = 180;
          v55 = 0;
          v56 = 0;
          while ( !*(v54 - 5) || v56 == v31 || ((*v54 - 25) & 0xFFFFFFF7) != 0 || v53 != v54[83] )
          {
            ++v55;
            ++v56;
            v54 += 1760;
            if ( v55 >= 1024 )
              goto LABEL_120;
          }
          v57 = 1760 * v56;
          if ( dword_140404A6C[1760 * v56 + 278845980] != -1 )
          {
            dword_140404A6C[v33 + 278846052] = 4;
            dword_140404A6C[v33 + 278845983] = 0;
            goto LABEL_118;
          }
          dword_140404A6C[v33 + 278846052] = 2;
          dword_140404A6C[v57 + 278846052] = 2;
          v58 = dword_140404A6C[v33 + 278845981];
          dword_140404A6C[v33 + 278845980] = v55;
          dword_140404A6C[v33 + 278845983] = 0;
          dword_140404A6C[v57 + 278845983] = v58;
          sub_140051940(v30);
          v59 = v55;
          goto LABEL_119;
        }
        goto LABEL_120;
      case 3u:
        v60 = (int)dword_140404A6C[v33 + 278845980];
        if ( (_DWORD)v60 != -1 )
        {
          if ( !dword_140404A6C[1760 * v60 + 278845893] )
          {
            dword_140404A6C[v33 + 278846052] = 0;
            dword_140404A6C[v33 + 278845980] = -1;
            dword_140404A6C[v33 + 278845983] = 0;
            sub_140051940(v30);
            v48 = 0;
          }
          goto LABEL_95;
        }
        dword_140404A6C[v33 + 278846052] = 0;
        dword_140404A6C[v33 + 278845980] = -1;
        dword_140404A6C[v33 + 278845983] = 0;
        sub_140051940(v30);
        break;
      default:
LABEL_95:
        if ( v48 == 2 )
        {
          v61 = (int)dword_140404A6C[v33 + 278845980];
          if ( (_DWORD)v61 == -1 || dword_140404A6C[1760 * v61 + 278845980] != -1 )
          {
            dword_140404A6C[v33 + 278845982] = 0;
          }
          else
          {
            v62 = dword_140404A6C[283831474];
            if ( (dword_140404A6C[283831474] & 0x7F) == 0 && dword_140404A6C[456202453] )
            {
              v63 = dword_140404A6C[283785983];
              v64 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
              HIWORD(dword_140404A6C[308307070]) = 0;
              v65 = (int)dword_140404A6C[308307070];
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v64) = 19;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v64) = v62;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v64) = v63;
              *(unsigned int *)((char *)&dword_140404A6C[297756294] + v64) = v61;
              *(unsigned int *)((char *)&dword_140404A6C[297756297] + v64) = 1065353216;
              *(unsigned int *)((char *)&dword_140404A6C[297756298] + v64) = 1065353216;
              v66 = v65 << 7;
              dword_140404A6C[308307070] = v65 + 1;
              HIWORD(dword_140404A6C[308307070]) = 0;
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v66) = 19;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v66) = v62;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v66) = v63;
              *(unsigned int *)((char *)&dword_140404A6C[297756294] + v66) = v30;
              *(unsigned int *)((char *)&dword_140404A6C[297756297] + v66) = 1056964608;
              *(unsigned int *)((char *)&dword_140404A6C[297756298] + v66) = 1065353216;
            }
            if ( (int)++dword_140404A6C[v33 + 278845982] >= 768 )
            {
              dword_140404A6C[v33 + 278846052] = 0;
              dword_140404A6C[1760 * v61 + 278846052] = 0;
              dword_140404A6C[1760 * dword_140404A6C[v33 + 278845980] + 278845983] = 0;
              sub_140051940(dword_140404A6C[v33 + 278845980]);
              dword_140404A6C[v33 + 278845980] = -1;
              dword_140404A6C[v33 + 278845983] = 0;
              sub_140051940(v30);
            }
          }
        }
        break;
    }
    if ( (dword_140404A6C[v33 + 278845977] & 1) == 0 || (dword_140404A6C[v33 + 278845978] & 1) != 0 )
      goto LABEL_120;
    v67 = (int)dword_140404A6C[v33 + 278845980];
    if ( (_DWORD)v67 != -1 )
    {
      dword_140404A6C[v33 + 278846052] = 0;
      dword_140404A6C[1760 * v67 + 278846052] = 0;
      dword_140404A6C[1760 * dword_140404A6C[v33 + 278845980] + 278845980] = -1;
      dword_140404A6C[1760 * dword_140404A6C[v33 + 278845980] + 278845983] = 0;
      sub_140051940(dword_140404A6C[v33 + 278845980]);
      dword_140404A6C[v33 + 278845983] = 0;
      goto LABEL_117;
    }
    v68 = 0;
    v69 = &dword_140404A6C[278845898];
    do
    {
      if ( *(v69 - 5) && v68 != v30 && ((*v69 - 25) & 0xFFFFFFF7) == 0 && v69[82] == v30 )
      {
        dword_140404A6C[v33 + 278846052] = 3;
        v69[154] = 3;
        dword_140404A6C[v33 + 278845980] = v68;
        dword_140404A6C[v33 + 278845983] = v69[83];
        sub_140051940(v30);
        v69[85] = dword_140404A6C[v33 + 278845981];
        sub_140051940(v68);
      }
      ++v68;
      v69 += 1760;
    }
    while ( v68 < 1024 );
LABEL_120:
    if ( dword_140404A6C[v33 + 278845898] == 39 )
    {
      v70 = dword_140404A6C[v33 + 278847324];
      if ( !v70 )
      {
        sub_1400C3ED0(v30);
        v70 = dword_140404A6C[v33 + 278847324];
      }
      v71 = v70;
      if ( v70 == 1 )
      {
        v72 = dword_140404A6C[v33 + 278847584];
        if ( v72 > 0 )
        {
          v73 = v72 - 1;
          dword_140404A6C[v33 + 278847584] = v73;
          if ( !v73 )
          {
            v74 = 0;
            v75 = rand() % 26;
            v76 = 1760 * v31;
            do
            {
              v77 = v76 + (int)dword_140404A6C[v76 + 278847455 + v75];
              if ( dword_140404A6C[v77 + 278847519] && dword_140404A6C[v77 + 278847551] == -1 )
                break;
              ++v74;
              v75 = rand() % 26;
            }
            while ( v74 < 1000 );
            dword_140404A6C[v76 + 278847551 + (int)dword_140404A6C[v76 + 278847455 + v75]] = v75;
            sub_1400C5750(v30);
            LOBYTE(dword_140404A6C[v33 + 278846130]) = 0;
            sub_140050F90(v30, 1);
            v71 = dword_140404A6C[v33 + 278847324];
          }
        }
      }
      if ( v71 == 2 )
      {
        sub_1400C8500(v30);
        v71 = dword_140404A6C[v33 + 278847324];
      }
      if ( v71 == 3 )
        sub_1400C9820(v30);
    }
    v78 = dword_140404A6C[v33 + 278845898];
    if ( v78 == 40 )
    {
      v79 = dword_140404A6C[v33 + 278846111] + 1;
      dword_140404A6C[v33 + 278846112] = 64;
      dword_140404A6C[v33 + 278846111] = v79;
    }
    else if ( v78 == 13 && dword_140404A6C[283831448] == 2 )
    {
      if ( (int)dword_140404A6C[v33 + 278845974] <= 0 )
      {
        v81 = dword_140404A6C[v33 + 278845972];
        if ( v81 > 0 )
        {
          if ( v81 == 240 )
          {
            if ( (dword_140404A6C[v33 + 278845977] & 2) == 0 || (dword_140404A6C[v33 + 278845978] & 2) != 0 )
            {
              if ( dword_140404A6C[v33 + 278845902] == -1 )
                dword_140404A6C[v33 + 278845972] = 239;
            }
            else
            {
              dword_140404A6C[v33 + 278845974] = 1;
              dword_140404A6C[v33 + 278845901] = -1;
            }
          }
          else
          {
            v82 = v81 - 1;
            dword_140404A6C[v33 + 278845972] = v82;
            if ( v82 == 1 )
            {
              dword_140404A6C[v33 + 278845900] = 0;
              v83 = &dword_140404A6C[v33 + 278845916];
              if ( dword_140404A6C[456202453] )
              {
                v84 = dword_140404A6C[308307070];
                v85 = dword_140404A6C[283831474];
                v86 = (__int64)(int)dword_140404A6C[308307070] << 7;
                *(unsigned int *)((char *)&dword_140404A6C[297756285] + v86) = 20;
                *(unsigned int *)((char *)&dword_140404A6C[297756286] + v86) = v85;
                *(unsigned int *)((char *)&dword_140404A6C[297756293] + v86) = 0;
                if ( v83 )
                {
                  v87 = v83[2];
                  v88 = v83[1];
                  v89 = *v83;
                }
                else
                {
                  v87 = 0;
                  v88 = 0;
                  v89 = 0;
                }
                *(unsigned int *)((char *)&dword_140404A6C[297756287] + v86) = v89;
                *(unsigned int *)((char *)&dword_140404A6C[297756288] + v86) = v88;
                *(unsigned int *)((char *)&dword_140404A6C[297756289] + v86) = v87;
                dword_140404A6C[308307070] = v84 + 1;
                HIWORD(dword_140404A6C[308307070]) = 0;
              }
              sub_1400A70B0(v30);
            }
          }
        }
      }
      else if ( (dword_140404A6C[v33 + 278845977] & 2) != 0 && (dword_140404A6C[v33 + 278845978] & 2) == 0 )
      {
        v80 = (int)dword_140404A6C[v33 + 278845902];
        dword_140404A6C[v33 + 278845972] = 240;
        dword_140404A6C[v33 + 278845974] = 0;
        if ( (_DWORD)v80 != -1 )
          dword_140404A6C[v33 + 278845901] = dword_140404A6C[7166 * v80 + 280651305];
      }
    }
    v90 = dword_140404A6C[v33 + 278845977];
    result = v90 & 1;
    if ( (v90 & 1) != 0 && (dword_140404A6C[v33 + 278845978] & 1) == 0 )
    {
      v91 = dword_140404A6C[v33 + 278845898];
      if ( v91 == 15 )
      {
        dword_140404A6C[v33 + 278845898] = 16;
        goto LABEL_164;
      }
      if ( v91 == 16 )
      {
        dword_140404A6C[v33 + 278845898] = 15;
LABEL_164:
        if ( dword_140404A6C[456202453] && (unsigned int)v30 <= 0x3FF )
          ++dword_140404A6C[v31 + 280648157];
      }
    }
    v92 = dword_140404A6C[v33 + 278845898];
    if ( v92 == 30 )
    {
      if ( (v90 & 1) == 0 && (dword_140404A6C[v33 + 278845978] & 1) != 0 )
      {
        result = (int)dword_140404A6C[v33 + 278845902];
        if ( (_DWORD)result != -1 )
        {
          v93 = 7166 * result;
          if ( !dword_140404A6C[7166 * result + 280651309] )
          {
            dword_140404A6C[v93 + 280651311] += 16;
            v94 = dword_140404A6C[v93 + 280651311];
            dword_140404A6C[v93 + 280651309] = 300;
            if ( v94 > 255 )
              v94 = 255;
            dword_140404A6C[v93 + 280651308] += 8;
            dword_140404A6C[v93 + 280651311] = v94;
            result = dword_140404A6C[v93 + 280651308];
            if ( (int)result > 105 )
              result = 105;
            dword_140404A6C[v93 + 280651308] = result;
            goto LABEL_211;
          }
        }
      }
    }
    else if ( v92 == 14 )
    {
      if ( (v90 & 1) != 0 )
      {
        v95 = 2;
        v96 = -1;
        v97 = 2.0;
        v98 = &dword_140404A6C[280651337];
        v99 = 2;
        v100 = -1;
        do
        {
          if ( *(v98 - 34) )
          {
            v101 = *(v98 - 19);
            if ( v101 > 0 && (v98[6964] || v101 < 10) )
            {
              v102 = *((float *)v98 - 2) - *(float *)&dword_140404A6C[v33 + 278845916];
              v103 = fsqrt(
                       (float)((float)((float)(*((float *)v98 - 1) - *(float *)&dword_140404A6C[v33 + 278845917])
                                     * (float)(*((float *)v98 - 1) - *(float *)&dword_140404A6C[v33 + 278845917]))
                             + (float)(v102 * v102))
                     + (float)((float)(*(float *)v98 - *(float *)&dword_140404A6C[v33 + 278845918])
                             * (float)(*(float *)v98 - *(float *)&dword_140404A6C[v33 + 278845918])));
              if ( v97 > v103 )
              {
                v96 = v95 - 2;
                v97 = v103;
                v100 = v99 - 2;
              }
            }
          }
          if ( v98[7132] )
          {
            v104 = v98[7147];
            if ( v104 > 0 && (v98[14130] || v104 < 10) )
            {
              v105 = *((float *)v98 + 7164) - *(float *)&dword_140404A6C[v33 + 278845916];
              v106 = fsqrt(
                       (float)((float)((float)(*((float *)v98 + 7165) - *(float *)&dword_140404A6C[v33 + 278845917])
                                     * (float)(*((float *)v98 + 7165) - *(float *)&dword_140404A6C[v33 + 278845917]))
                             + (float)(v105 * v105))
                     + (float)((float)(*((float *)v98 + 7166) - *(float *)&dword_140404A6C[v33 + 278845918])
                             * (float)(*((float *)v98 + 7166) - *(float *)&dword_140404A6C[v33 + 278845918])));
              if ( v97 > v106 )
              {
                v96 = v95 - 1;
                v97 = v106;
                v100 = v99 - 1;
              }
            }
          }
          if ( v98[14298] )
          {
            v107 = v98[14313];
            if ( v107 > 0 && (v98[21296] || v107 < 10) )
            {
              v108 = *((float *)v98 + 14330) - *(float *)&dword_140404A6C[v33 + 278845916];
              v109 = fsqrt(
                       (float)((float)((float)(*((float *)v98 + 14331) - *(float *)&dword_140404A6C[v33 + 278845917])
                                     * (float)(*((float *)v98 + 14331) - *(float *)&dword_140404A6C[v33 + 278845917]))
                             + (float)(v108 * v108))
                     + (float)((float)(*((float *)v98 + 14332) - *(float *)&dword_140404A6C[v33 + 278845918])
                             * (float)(*((float *)v98 + 14332) - *(float *)&dword_140404A6C[v33 + 278845918])));
              if ( v97 > v109 )
              {
                v96 = v95;
                v100 = v99;
                v97 = v109;
              }
            }
          }
          if ( v98[21464] )
          {
            v110 = v98[21479];
            if ( v110 > 0 && (v98[28462] || v110 < 10) )
            {
              v111 = *((float *)v98 + 21496) - *(float *)&dword_140404A6C[v33 + 278845916];
              v112 = fsqrt(
                       (float)((float)((float)(*((float *)v98 + 21497) - *(float *)&dword_140404A6C[v33 + 278845917])
                                     * (float)(*((float *)v98 + 21497) - *(float *)&dword_140404A6C[v33 + 278845917]))
                             + (float)(v111 * v111))
                     + (float)((float)(*((float *)v98 + 21498) - *(float *)&dword_140404A6C[v33 + 278845918])
                             * (float)(*((float *)v98 + 21498) - *(float *)&dword_140404A6C[v33 + 278845918])));
              if ( v97 > v112 )
              {
                v96 = v95 + 1;
                v97 = v112;
                v100 = v99 + 1;
              }
            }
          }
          v95 += 4;
          v99 += 4;
          v98 += 28664;
          result = (unsigned int)(v95 - 2);
        }
        while ( (int)result < 256 );
        if ( v96 != -1 )
        {
          v113 = (int)dword_140404A6C[v33 + 278845902];
          v114 = dword_140404A6C[v33 + 278845972] + 1;
          dword_140404A6C[v33 + 278845972] = v114;
          if ( (_DWORD)v113 != -1 )
          {
            result = (unsigned int)((v114 << 8) / 256);
            dword_140404A6C[7166 * v113 + 280658334] = result;
          }
          if ( v114 >= 256 )
          {
            result = 28664 * v100;
            dword_140404A6C[v33 + 278845972] = 0;
            v115 = (int)dword_140404A6C[7166 * v100 + 280651318] < 10;
            dword_140404A6C[7166 * v100 + 280658301] = 0;
            if ( v115 )
              *(unsigned int *)((char *)&dword_140404A6C[280651318] + result) = 10;
LABEL_211:
            if ( (int)--dword_140404A6C[v33 + 278845974] <= 0 )
              dword_140404A6C[v33 + 278845900] = 0;
          }
        }
      }
      else
      {
        dword_140404A6C[v33 + 278845972] = 0;
      }
    }
    dword_140404A6C[v33 + 278845978] = v90;
    v32 = 0x1002060000LL;
    dword_140404A6C[v33 + 278845977] = 0;
LABEL_215:
    ++v30;
    ++v31;
    if ( v30 < 1024 )
      continue;
    return result;
  }
}
#undef retaddr

// 1400CCE14: conditional instruction was optimized away because ecx.4<4651
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1816760A0: using guessed type unsigned int;
// 1816764A4: using guessed type unsigned int;
// 1816768A8: using guessed type unsigned int;
// 181676CAC: using guessed type unsigned int;
// 1816770B0: using guessed type unsigned int;
// 1816774B4: using guessed type unsigned int;
// 1816778B8: using guessed type unsigned int;
// 181677CBC: using guessed type unsigned int;
// 1816780C0: using guessed type unsigned int;
// 1816784C4: using guessed type unsigned int;
// 1816788C8: using guessed type unsigned int;
// 181678CCC: using guessed type unsigned int;
// 1816790D0: using guessed type unsigned int;
// 1816794D4: using guessed type unsigned int;
// 1816798D8: using guessed type unsigned int;
// 181679CDC: using guessed type unsigned int;
// 18167A0E0: using guessed type unsigned int;
// 18167A4E4: using guessed type unsigned int;
// 18167A8E8: using guessed type unsigned int;
// 18167ACEC: using guessed type unsigned int;
// 18167B0F0: using guessed type unsigned int;
// 18167B4F4: using guessed type unsigned int;
// 18167B8F8: using guessed type unsigned int;
// 18167BCFC: using guessed type unsigned int;
// 18167C100: using guessed type unsigned int;
// 18167C504: using guessed type unsigned int;
// 18167C908: using guessed type unsigned int;
// 18167CD0C: using guessed type unsigned int;
// 18167D110: using guessed type unsigned int;
// 18167D514: using guessed type unsigned int;
// 18167D918: using guessed type unsigned int;
// 18167DD1C: using guessed type unsigned int;
// 18167E120: using guessed type unsigned int;
// 18167E524: using guessed type unsigned int;
// 18167E928: using guessed type unsigned int;
// 18167ED2C: using guessed type unsigned int;
// 18167F130: using guessed type unsigned int;
// 18167F534: using guessed type unsigned int;
// 18167F938: using guessed type unsigned int;
// 18167FD3C: using guessed type unsigned int;
// 181680140: using guessed type unsigned int;
// 181680544: using guessed type unsigned int;
// 181680948: using guessed type unsigned int;
// 181680D4C: using guessed type unsigned int;
// 181681150: using guessed type unsigned int;
// 181681554: using guessed type unsigned int;
// 181681958: using guessed type unsigned int;
// 181681D5C: using guessed type unsigned int;
// 181682160: using guessed type unsigned int;
// 181682564: using guessed type unsigned int;
// 181682968: using guessed type unsigned int;
// 181682D6C: using guessed type unsigned int;
// 181683170: using guessed type unsigned int;
// 181683574: using guessed type unsigned int;
// 181683978: using guessed type unsigned int;
// 181683D7C: using guessed type unsigned int;
// 181684180: using guessed type unsigned int;
// 181684584: using guessed type unsigned int;
// 181684988: using guessed type unsigned int;
// 181684D8C: using guessed type unsigned int;
// 181685190: using guessed type unsigned int;
// 181685594: using guessed type unsigned int;
// 181685998: using guessed type unsigned int;
// 181685D9C: using guessed type unsigned int;
// 1816861A0: using guessed type unsigned int;
// 1816865A4: using guessed type unsigned int;
// 1816869A8: using guessed type unsigned int;
// 181686DAC: using guessed type unsigned int;
// 1816871B0: using guessed type unsigned int;
// 1816875B4: using guessed type unsigned int;
// 1816879B8: using guessed type unsigned int;
// 181687DBC: using guessed type unsigned int;
// 1816881C0: using guessed type unsigned int;
// 1816885C4: using guessed type unsigned int;
// 1816889C8: using guessed type unsigned int;
// 181688DCC: using guessed type unsigned int;
// 1816891D0: using guessed type unsigned int;
// 1816895D4: using guessed type unsigned int;
// 1816899D8: using guessed type unsigned int;
// 181689DDC: using guessed type unsigned int;
// 18168A1E0: using guessed type unsigned int;
// 18168A5E4: using guessed type unsigned int;
// 18168A9E8: using guessed type unsigned int;
// 18168ADEC: using guessed type unsigned int;
// 18168B1F0: using guessed type unsigned int;
// 18168B5F4: using guessed type unsigned int;
// 18168B9F8: using guessed type unsigned int;
// 18168BDFC: using guessed type unsigned int;
// 18168C200: using guessed type unsigned int;
// 18168C604: using guessed type unsigned int;
// 18168CA08: using guessed type unsigned int;
// 18168CE0C: using guessed type unsigned int;
// 18168D210: using guessed type unsigned int;
// 18168D614: using guessed type unsigned int;
// 18168DA18: using guessed type unsigned int;
// 18168DE1C: using guessed type unsigned int;
// 18168E220: using guessed type unsigned int;
// 18168E624: using guessed type unsigned int;
// 18168EA28: using guessed type unsigned int;
// 18168EE2C: using guessed type unsigned int;
// 18168F230: using guessed type unsigned int;
// 18168F634: using guessed type unsigned int;
// 18168FA38: using guessed type unsigned int;
// 18168FE3C: using guessed type unsigned int;
// 181690240: using guessed type unsigned int;
// 181690644: using guessed type unsigned int;
// 181690A48: using guessed type unsigned int;
// 181690E4C: using guessed type unsigned int;
// 181691250: using guessed type unsigned int;
// 181691654: using guessed type unsigned int;
// 181691A58: using guessed type unsigned int;
// 181691E5C: using guessed type unsigned int;
// 181692260: using guessed type unsigned int;
// 181692664: using guessed type unsigned int;
// 181692A68: using guessed type unsigned int;
// 181692E6C: using guessed type unsigned int;
// 181693270: using guessed type unsigned int;
// 181693674: using guessed type unsigned int;
// 181693A78: using guessed type unsigned int;
// 181693E7C: using guessed type unsigned int;
// 181694280: using guessed type unsigned int;
// 181694684: using guessed type unsigned int;
// 181694A88: using guessed type unsigned int;
// 181694E8C: using guessed type unsigned int;
// 181695290: using guessed type unsigned int;
// 181695694: using guessed type unsigned int;
// 181695A98: using guessed type unsigned int;
// 181695E9C: using guessed type unsigned int;
// 182AAEB50: using guessed type unsigned int;
// 183E93668: using guessed type unsigned int;
// 183E93694: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400CDBD0) ----------------------------------------------------
__int64            sub_1400CDBD0(unsigned int a1, signed int a2, signed int a3, int a4, int a5, int a6)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  int v9; // r15d
  int v10; // r13d
  float v11; // xmm6_4
  double v12; // xmm7_8
  __int64 v13; // rbx
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm8_4
  float v18; // xmm10_4
  float v19; // xmm9_4
  unsigned int v20; // ebx
  __int64 v21; // r9
  unsigned int v22; // eax
  unsigned int v23; // r13d
  bool v24; // zf
  unsigned int *v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r8
  _DWORD *v28; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CDBD0[128];
#define v30 (*(__int64 (*))(void *)(sr_frame_1400CDBD0 + 0)) /* [rsp+0h] */
#define v31 (*(unsigned int (*))(void *)(sr_frame_1400CDBD0 + 48)) /* [rsp+30h] */
#define v32 (*(int (*))(void *)(sr_frame_1400CDBD0 + 52)) /* [rsp+34h] */
#define v33 (*(unsigned int (*))(void *)(sr_frame_1400CDBD0 + 56)) /* [rsp+38h] */
#define v34 (*(float (*)[4])(void *)(sr_frame_1400CDBD0 + 64)) /* [rsp+40h] */
#define v35 (*(__int128 (*))(void *)(sr_frame_1400CDBD0 + 80)) /* [rsp+50h] */
#define v36 (*(__int128 (*))(void *)(sr_frame_1400CDBD0 + 96)) /* [rsp+60h] */
#define v37 (*(float (*))(void *)(sr_frame_1400CDBD0 + 112)) /* [rsp+70h] */
#define v38 (*(__int64 (*))(void *)(sr_frame_1400CDBD0 + 120)) /* [rsp+78h] */

  v7 = a2;
  v31 = a1;
  v8 = a3;
  v9 = 1 << a2;
  v33 = a2;
  if ( ((unsigned int)sub_1400169B0(a3, a4, a5, a6) & (1 << a2)) == 0 )
  {
    v35 = xmmword_140278D30;
    v36 = xmmword_140278D30;
    v10 = HIBYTE(v31) & 3;
    v31 &= 0x3FFu;
    v11 = *(float *)&dword_140404A6C[263004 * v8 + 111579653];
    v37 = 1.0;
    v12 = (float)v10 * 1.570796326795;
    sub_14007B2A0((__int64)&v35, (float *)&dword_1402F6188, v12);
    v13 = 3792LL * v31 + 116 * v7;
    v14 = *(float *)((char *)&dword_140404A6C[272299434] + v13);
    v15 = *(float *)((char *)&dword_140404A6C[272299435] + v13);
    v16 = *(float *)((char *)&dword_140404A6C[272299436] + v13);
    v17 = (float)((float)((float)((float)((float)a4 + 0.5) * v11) + (float)(*(float *)&v35 * v14))
                + (float)(*((float *)&v35 + 3) * v15))
        + (float)(*((float *)&v36 + 2) * v16);
    v34[0] = v17;
    v18 = (float)((float)((float)((float)a5 * v11) + (float)(*((float *)&v35 + 1) * v14)) + (float)(*(float *)&v36 * v15))
        + (float)(*((float *)&v36 + 3) * v16);
    v34[1] = v18;
    v19 = (float)((float)((float)((float)((float)a6 + 0.5) * v11) + (float)(*((float *)&v35 + 2) * v14))
                + (float)(*((float *)&v36 + 1) * v15))
        + (float)(v37 * v16);
    v35 = *(_OWORD *)((char *)&dword_140404A6C[272299437] + v13);
    v34[2] = v19;
    v36 = *(_OWORD *)((char *)&dword_140404A6C[272299441] + v13);
    v37 = *(float *)((char *)&dword_140404A6C[272299445] + v13);
    sub_14007B2A0((__int64)&v35, (float *)&dword_1402F6188, v12);
    v32 = sr_CreateItem(*(unsigned int *)((char *)&dword_140404A6C[272299433] + v13), v34, nullptr, (float *)&v35);
    if ( v32 != -1 )
    {
      v20 = v9 | sub_1400169B0(v8, a4, a5, a6);
      sub_140017110(v8, a4, a5, a6, v20);
      sub_1400516B0(v8, a4, a5, a6, v20, 1u);
      v21 = 1760LL * v32;
      v22 = v33;
      v23 = v31 + (v10 << 24);
      v24 = dword_140404A6C[v21 + 278845898] == 39;
      dword_140404A6C[v21 + 278846091] = 1;
      dword_140404A6C[v21 + 278846092] = v8;
      dword_140404A6C[v21 + 278846093] = a4;
      dword_140404A6C[v21 + 278846094] = a5;
      dword_140404A6C[v21 + 278846095] = a6;
      dword_140404A6C[v21 + 278846096] = v23;
      dword_140404A6C[v21 + 278846097] = v22;
      if ( v24 && (int)dword_140404A6C[225641186] > 0 )
      {
        v25 = &dword_140404A6C[225641222];
        v26 = dword_140404A6C[225641186];
        do
        {
          if ( v17 >= *((float *)v25 - 3)
            && v17 < *(float *)v25
            && v18 >= *((float *)v25 - 2)
            && v18 < *((float *)v25 + 1)
            && v19 >= *((float *)v25 - 1)
            && v19 < *((float *)v25 + 2) )
          {
            v27 = (int)v25[12959];
            if ( v27 > 0 )
            {
              v28 = v25 + 12962;
              do
              {
                if ( a5 == *(v28 - 1) && a6 == *v28 && a4 == *(v28 - 2) )
                {
                  v24 = *(v25 - 19) == 1;
                  dword_140404A6C[v21 + 278846098] = v28[1];
                  if ( v24 )
                    dword_140404A6C[v21 + 278847323] = v25[103];
                }
                v28 += 4;
                --v27;
              }
              while ( v27 );
            }
          }
          v25 += 14019;
          --v26;
        }
        while ( v26 );
      }
    }
  }
  return sub_1401F8B20((unsigned __int64)&v30 ^ v38);
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

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400CDFF0) ----------------------------------------------------
__int64            sub_1400CDFF0(int a1)
{
  __int64 v1; // r15
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // ebp
  double v6; // xmm15_8
  float v7; // xmm7_4
  float v8; // xmm11_4
  float v9; // xmm14_4
  float v10; // xmm10_4
  float v11; // xmm13_4
  __int64 v12; // rax
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm6_4
  float v17; // xmm9_4
  float v18; // xmm12_4
  float v19; // xmm8_4
  float v20; // xmm14_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  unsigned int v24; // edi
  unsigned int v25; // esi
  unsigned int v26; // ebp
  unsigned int v27; // ebx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CDFF0[112];
#define v29 (*(__int64 (*))(void *)(sr_frame_1400CDFF0 + 8)) /* [rsp+0h] */
#define v30 (*(float (*))(void *)(sr_frame_1400CDFF0 + 56)) /* [rsp+30h] */
#define v31 (*(__int128 (*))(void *)(sr_frame_1400CDFF0 + 64)) /* [rsp+38h] */
#define v32 (*(__int128 (*))(void *)(sr_frame_1400CDFF0 + 80)) /* [rsp+48h] */
#define v33 (*(float (*))(void *)(sr_frame_1400CDFF0 + 96)) /* [rsp+58h] */
#define v34 (*(__int64 (*))(void *)(sr_frame_1400CDFF0 + 104)) /* [rsp+60h] */

  v1 = 1760LL * a1;
  v2 = dword_140404A6C[v1 + 278846096];
  v3 = dword_140404A6C[v1 + 278846093];
  v4 = dword_140404A6C[v1 + 278846094];
  v5 = dword_140404A6C[v1 + 278846095];
  v30 = *(float *)&dword_140404A6C[263004 * dword_140404A6C[v1 + 278846092] + 111579653];
  v31 = xmmword_140278D30;
  v32 = xmmword_140278D30;
  v33 = 1.0;
  v6 = (float)((v2 >> 24) & 3) * 1.570796326795;
  sub_14007B2A0((__int64)&v31, (float *)&dword_1402F6188, v6);
  v7 = *((float *)&v31 + 3);
  v8 = *((float *)&v31 + 1);
  v9 = *((float *)&v31 + 2);
  v10 = *(float *)&v32;
  v11 = *((float *)&v32 + 1);
  v12 = 3792LL * (v2 & 0x3FF) + 116LL * (int)dword_140404A6C[v1 + 278846097];
  v13 = *(float *)((char *)&dword_140404A6C[272299436] + v12);
  v14 = *(float *)((char *)&dword_140404A6C[272299434] + v12);
  v15 = *(float *)((char *)&dword_140404A6C[272299435] + v12);
  v16 = *((float *)&v32 + 2) * v13;
  v17 = *((float *)&v32 + 3) * v13;
  v18 = v33 * v13;
  v19 = *(float *)&v31 * v14;
  v31 = *(_OWORD *)((char *)&dword_140404A6C[272299437] + v12);
  v32 = *(_OWORD *)((char *)&dword_140404A6C[272299441] + v12);
  v20 = v9 * v14;
  v33 = *(float *)((char *)&dword_140404A6C[272299445] + v12);
  sub_14007B2A0((__int64)&v31, (float *)&dword_1402F6188, v6);
  v21 = (float)((float)((float)((float)((float)((float)v3 + 0.5) * v30) + v19) + (float)(v7 * v15)) + v16)
      - *(float *)&dword_140404A6C[v1 + 278845916];
  v22 = (float)((float)((float)((float)((float)v4 * v30) + (float)(v8 * v14)) + (float)(v10 * v15)) + v17)
      - *(float *)&dword_140404A6C[v1 + 278845917];
  v23 = (float)((float)((float)((float)((float)((float)v5 + 0.5) * v30) + v20) + (float)(v11 * v15)) + v18)
      - *(float *)&dword_140404A6C[v1 + 278845918];
  if ( fsqrt((float)((float)(v22 * v22) + (float)(v21 * v21)) + (float)(v23 * v23)) < 0.125 )
  {
    v24 = dword_140404A6C[v1 + 278846095];
    v25 = dword_140404A6C[v1 + 278846094];
    v26 = dword_140404A6C[v1 + 278846093];
    v27 = ~(1 << dword_140404A6C[v1 + 278846097]) & sub_1400169B0(dword_140404A6C[v1 + 278846092], v26, v25, v24);
    sub_140017110(dword_140404A6C[v1 + 278846092], v26, v25, v24, v27);
    sub_1400516B0(dword_140404A6C[v1 + 278846092], v26, v25, v24, v27, 1u);
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v29
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400CE370) ----------------------------------------------------
__int64 sub_1400CE370()
{
  __int64 v0; // r14
  int v1; // r10d
  __int64 v2; // r11
  __int64 v3; // rdi
  __int64 v4; // r9
  unsigned int *v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // r8d
  __int64 v8; // rcx
  unsigned int v9; // xmm0_4
  unsigned int v10; // xmm1_4
  unsigned int v11; // xmm2_4
  int v12; // eax
  __int64 v13; // rdx
  BOOL v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r13
  unsigned int v23; // eax
  float v24; // xmm2_4
  signed int v25; // esi
  unsigned int *v26; // r14
  int v27; // eax
  unsigned int v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  unsigned __int64 v31; // rax
  bool v32; // cc
  signed int v33; // r12d
  __int16 v34; // di
  float *v35; // r15
  __int64 v36; // rax
  float v37; // xmm1_4
  float v38; // xmm3_4
  float v39; // xmm5_4
  float v40; // xmm6_4
  float v41; // xmm5_4
  float v42; // xmm1_4
  unsigned int v43; // xmm2_4
  float v44; // xmm3_4
  float v45; // xmm0_4
  unsigned int v46; // edx
  signed int v47; // esi
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // r15d
  float *v51; // r14
  unsigned int v52; // eax
  float v53; // xmm2_4
  float v54; // xmm5_4
  float v55; // xmm4_4
  float v56; // xmm3_4
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm0_4
  float v60; // xmm2_4
  float v61; // xmm5_4
  float v62; // xmm4_4
  float v63; // xmm3_4
  float v64; // xmm1_4
  float v65; // xmm2_4
  float v66; // xmm5_4
  float v67; // xmm1_4
  unsigned int v68; // xmm2_4
  float v69; // xmm3_4
  float v70; // xmm0_4
  unsigned int v71; // edx
  signed int i; // esi
  int v73; // eax
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rcx
  unsigned int v77; // eax
  float sr_item_collision_endpoint[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CE370[160];
#define v79 (*(__int64 (*))(void *)(sr_frame_1400CE370 + 0)) /* [rsp+8h] */
#define v80 (*(__int64 (*))(void *)(sr_frame_1400CE370 + 40)) /* [rsp+30h] */
#define v81 (*(int (*))(void *)(sr_frame_1400CE370 + 48)) /* [rsp+38h] */
#define v82 (*(int (*))(void *)(sr_frame_1400CE370 + 64)) /* [rsp+48h] */
#define v83 (*(int (*))(void *)(sr_frame_1400CE370 + 68)) /* [rsp+4Ch] */
#define v84 (*(__int64 (*))(void *)(sr_frame_1400CE370 + 72)) /* [rsp+50h] */
#define v85 (*(__int64 (*))(void *)(sr_frame_1400CE370 + 80)) /* [rsp+58h] */
#define v86 (*(unsigned __int64 (*))(void *)(sr_frame_1400CE370 + 88)) /* [rsp+60h] */
#define v87 (*(float (*)[4])(void *)(sr_frame_1400CE370 + 96)) /* [rsp+68h] */
#define v88 (*(float (*)[4])(void *)(sr_frame_1400CE370 + 112)) /* [rsp+78h] */
#define v92 (*(__int64 (*))(void *)(sr_frame_1400CE370 + 144)) /* [rsp+98h] */

  v0 = 0;
  v1 = 0;
  v2 = 0;
  v82 = 0;
  v84 = 0;
  do
  {
    v3 = 7040 * v2;
    v86 = 7040 * v2;
    if ( dword_140404A6C[1760 * v2 + 278845893] )
    {
      v4 = *(int *)((char *)&dword_140404A6C[278845898] + v3);
      if ( *(float *)((char *)&dword_140404A6C[278845917] + v3) < -32.0 )
        *(unsigned int *)((char *)&dword_140404A6C[278845900] + v3) = 0;
      if ( *(int *)((char *)&dword_140404A6C[278845971] + v3) <= 0 )
      {
        v5 = (unsigned int *)((char *)&dword_140404A6C[278845925] + v3);
        if ( dword_140404A6C[456202453] )
        {
          v6 = dword_140404A6C[283831474];
          v7 = dword_140404A6C[308307070];
          v8 = (__int64)(int)dword_140404A6C[308307070] << 7;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v8) = 1;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v8) = v6;
          *(unsigned int *)((char *)&dword_140404A6C[297756287] + v8) = *(unsigned int *)((char *)&dword_140404A6C[278845916]
                                                                                        + v3);
          *(unsigned int *)((char *)&dword_140404A6C[297756288] + v8) = *(unsigned int *)((char *)&dword_140404A6C[278845917]
                                                                                        + v3);
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v8) = *(unsigned int *)((char *)&dword_140404A6C[278845918]
                                                                                        + v3);
          if ( v5 )
          {
            v9 = v5[2];
            v10 = v5[1];
            v11 = *v5;
          }
          else
          {
            v9 = 0;
            v10 = 0;
            v11 = 0;
          }
          *(unsigned int *)((char *)&dword_140404A6C[297756290] + v8) = v11;
          *(unsigned int *)((char *)&dword_140404A6C[297756291] + v8) = v10;
          *(unsigned int *)((char *)&dword_140404A6C[297756292] + v8) = v9;
          dword_140404A6C[308307070] = v7 + 1;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(_QWORD *)((char *)&dword_140404A6C[297756293] + v8) = 0;
        }
        *(unsigned int *)((char *)&dword_140404A6C[278845900] + v3) = 0;
      }
      v12 = *(unsigned int *)((char *)&dword_140404A6C[278845979] + v3);
      if ( v12 > 0 )
        *(unsigned int *)((char *)&dword_140404A6C[278845979] + v3) = v12 - 1;
      v13 = *(int *)((char *)&dword_140404A6C[278845903] + v3);
      *(unsigned int *)((char *)&dword_140404A6C[278845905] + v3) = 0;
      if ( (_DWORD)v13 != -1 )
      {
        v14 = dword_140404A6C[1760 * v13 + 278845898] == 15;
        *(unsigned int *)((char *)&dword_140404A6C[278845905] + v3) = v14;
        if ( dword_140404A6C[1760 * v13 + 278845902] != -1 )
        {
          if ( (int)dword_140404A6C[1760 * v13 + 278845904] > 2 )
            v14 = 1;
          *(unsigned int *)((char *)&dword_140404A6C[278845905] + v3) = v14;
        }
      }
      v15 = *(unsigned int *)((char *)&dword_140404A6C[278845902] + v3);
      if ( v15 != -1 && (unsigned int)(v4 - 25) > 1 )
      {
        v16 = *(unsigned int *)((char *)&dword_140404A6C[278845905] + v3);
        if ( *(int *)((char *)&dword_140404A6C[278845904] + v3) > 2 )
          v16 = 1;
        *(unsigned int *)((char *)&dword_140404A6C[278845905] + v3) = v16;
      }
      v17 = *(unsigned int *)((char *)&dword_140404A6C[278845897] + v3) == 0;
      *(unsigned int *)((char *)&dword_140404A6C[278845894] + v3) = 0;
      if ( v17 )
      {
        if ( (unsigned int)(v4 - 39) <= 1 || (unsigned int)(v4 - 42) <= 1 )
          *(unsigned int *)((char *)&dword_140404A6C[278845895] + v3) = 1;
        if ( (_DWORD)v13 == -1 && (v15 == -1 || *(int *)((char *)&dword_140404A6C[278845904] + v3) < 2) )
        {
          v17 = *(unsigned int *)((char *)&dword_140404A6C[278845895] + v3) == 0;
          v19 = *(int *)((char *)&dword_140404A6C[278845915] + v3);
          v83 = *(unsigned int *)((char *)&dword_140404A6C[278845915] + v3);
          if ( v17 )
          {
            *(unsigned int *)((char *)&dword_140404A6C[278845894] + v3) = 1;
            *(unsigned int *)((char *)&dword_140404A6C[278845922] + v3) = *(unsigned int *)((char *)&dword_140404A6C[278845925]
                                                                                          + v3);
            *(unsigned int *)((char *)&dword_140404A6C[278845923] + v3) = *(unsigned int *)((char *)&dword_140404A6C[278845926]
                                                                                          + v3);
            *(unsigned int *)((char *)&dword_140404A6C[278845924] + v3) = *(unsigned int *)((char *)&dword_140404A6C[278845927]
                                                                                          + v3);
            v21 = 47 * v19;
            v22 = 1268 * v4;
            *(unsigned int *)((char *)&dword_140404A6C[278845946] + v3) = *(unsigned int *)((char *)&dword_140404A6C[278845943]
                                                                                          + v3);
            *(unsigned int *)((char *)&dword_140404A6C[278845947] + v3) = *(unsigned int *)((char *)&dword_140404A6C[278845944]
                                                                                          + v3);
            v23 = *(unsigned int *)((char *)&dword_140404A6C[278845945] + v3);
            dword_140404A6C[47 * v19 + 18215711] = 0;
            *(unsigned int *)((char *)&dword_140404A6C[278845948] + v3) = v23;
            if ( dword_140404A6C[1268 * v4 + 278521288] )
            {
              sub_1400CA1C0(v1);
              v1 = v82;
            }
            if ( *(unsigned int *)((char *)&dword_140404A6C[278845898] + v3) == 35 )
            {
              sub_1400CA430(v1);
              v24 = 65536.0;
              dword_140404A6C[73006987] = 1065353216;
              v25 = 0;
              dword_140404A6C[73006988] = 1199570944;
              dword_140404A6C[73007012] = -1;
              v26 = &dword_140404A6C[111579637];
              dword_140404A6C[73007015] = -1;
              do
              {
                if ( *v26 )
                {
                  LODWORD(v80) = 1038174126;
                  v27 = sub_140151190(v87, v88, (float *)&v85, v25, (float *)&dword_140404A6C[v21 + 18215715], v80);
                  v24 = *(float *)&dword_140404A6C[73006988];
                  if ( v27 )
                  {
                    if ( *(float *)&dword_140404A6C[73006988] > *(float *)&v85 )
                    {
                      v24 = *(float *)&v85;
                      *(float *)&dword_140404A6C[73006981] = v87[0];
                      *(float *)&dword_140404A6C[73006982] = v87[1];
                      *(float *)&dword_140404A6C[73006983] = v87[2];
                      *(float *)&dword_140404A6C[73006984] = v88[0];
                      *(float *)&dword_140404A6C[73006985] = v88[1];
                      *(float *)&dword_140404A6C[73006986] = v88[2];
                      dword_140404A6C[73006988] = v85;
                      dword_140404A6C[73007002] = v25;
                    }
                  }
                }
                ++v25;
                v26 += 263004;
              }
              while ( v25 < 4 );
              if ( v24 < 65536.0 )
              {
                *(float *)&v28 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[v21 + 18215715];
                v29 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[v21 + 18215716];
                v81 = 1023410176;
                LODWORD(v80) = 1015021568;
                sr_item_collision_endpoint[0] = *(float *)&v28;
                v30 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[v21 + 18215717];
                sr_item_collision_endpoint[1] = v29;
                sr_item_collision_endpoint[2] = v30;
                sub_140005160(
                  v19,
                  (unsigned int *)&sr_item_collision_endpoint[0],
                  &dword_140404A6C[73006984],
                  0.11 - v24,
                  0x3F19999Au,
                  0.015625,
                  0x3D000000u);
                *(float *)&dword_140404A6C[v21 + 18215733] = *(float *)&dword_140404A6C[v21 + 18215733] * 0.9375;
                *(float *)&dword_140404A6C[v21 + 18215734] = *(float *)&dword_140404A6C[v21 + 18215734] * 0.9375;
                *(float *)&dword_140404A6C[v21 + 18215735] = *(float *)&dword_140404A6C[v21 + 18215735] * 0.9375;
              }
              v0 = 0;
            }
            v31 = *(unsigned int *)((char *)&dword_140404A6C[278845898] + v3);
            v32 = (unsigned int)v31 <= 0x2C;
            if ( (_DWORD)v31 == 44 )
            {
              v33 = 0;
              if ( (int)dword_140404A6C[v22 + 278522247] > 0 )
              {
                v34 = v83;
                v35 = (float *)&dword_140404A6C[v21 + 18215715];
                do
                {
                  v36 = *(_QWORD *)&dword_140404A6C[v22 + 278522249];
                  v37 = *(float *)(v0 + v36 + 8) * *(float *)&dword_140404A6C[v21 + 18215731];
                  v38 = (float)((float)(*(float *)(v0 + v36) * *(float *)&dword_140404A6C[v21 + 18215725]) + v35[1])
                      + (float)(*(float *)(v0 + v36 + 4) * *(float *)&dword_140404A6C[v21 + 18215728]);
                  v39 = *(float *)(v0 + v36 + 8) * *(float *)&dword_140404A6C[v21 + 18215732];
                  v40 = (float)((float)(*(float *)(v0 + v36) * *(float *)&dword_140404A6C[v21 + 18215726]) + v35[2])
                      + (float)(*(float *)(v0 + v36 + 4) * *(float *)&dword_140404A6C[v21 + 18215729]);
                  sr_item_collision_endpoint[0] = (float)((float)((float)(*(float *)(v0 + v36) * *(float *)&dword_140404A6C[v21 + 18215724]) + *v35)
                              + (float)(*(float *)(v0 + v36 + 4) * *(float *)&dword_140404A6C[v21 + 18215727]))
                      + (float)(*(float *)(v0 + v36 + 8) * *(float *)&dword_140404A6C[v21 + 18215730]);
                  sr_item_collision_endpoint[1] = v38 + v37;
                  sr_item_collision_endpoint[2] = v40 + v39;
                  if ( (unsigned int)sub_1400DC050(v35, &sr_item_collision_endpoint[0], 1) )
                  {
                    v41 = *(float *)&dword_140404A6C[73006983] - sr_item_collision_endpoint[2];
                    v42 = *(float *)&dword_140404A6C[73006982] - v35[1];
                    sr_item_collision_endpoint[2] = *(float *)&dword_140404A6C[73006983] - v35[2];
                    *(float *)&v43 = *(float *)&dword_140404A6C[73006981] - *v35;
                    v44 = *(float *)&dword_140404A6C[73006985] * (float)(*(float *)&dword_140404A6C[73006982] - sr_item_collision_endpoint[1]);
                    sr_item_collision_endpoint[1] = v42;
                    v45 = *(float *)&dword_140404A6C[73006984] * (float)(*(float *)&dword_140404A6C[73006981] - sr_item_collision_endpoint[0]);
                    sr_item_collision_endpoint[0] = *(float *)&v43;
                    sub_140005160(
                      v34,
                      (unsigned int *)&sr_item_collision_endpoint[0],
                      &dword_140404A6C[73006984],
                      (float)(v44 + v45) + (float)(*(float *)&dword_140404A6C[73006986] * v41),
                      0x3F19999Au,
                      0.015625,
                      0x3D000000u);
                    if ( dword_140404A6C[73007015] != -1 )
                    {
                      v46 = dword_140404A6C[73007013];
                      v47 = 0;
                      if ( (int)dword_140404A6C[948 * dword_140404A6C[73007013] + 272299416] > 0 )
                      {
                        do
                        {
                          sub_1400CDBD0(
                            v46 + (dword_140404A6C[73007014] << 24),
                            v47,
                            dword_140404A6C[73007002],
                            dword_140404A6C[73007003],
                            dword_140404A6C[73007004],
                            dword_140404A6C[73007005]);
                          v46 = dword_140404A6C[73007013];
                          ++v47;
                        }
                        while ( v47 < (int)dword_140404A6C[948 * dword_140404A6C[73007013] + 272299416] );
                        v34 = v83;
                      }
                    }
                  }
                  ++v33;
                  v0 += 12;
                }
                while ( v33 < (int)dword_140404A6C[v22 + 278522247] );
                v3 = v86;
                v31 = dword_140404A6C[v86 / 4 + 278845898];
              }
              LOWORD(v19) = v83;
              v32 = (unsigned int)v31 <= 0x2C;
            }
            if ( !v32 || (v48 = 0x100810000000LL, !_bittest64(&v48, v31)) )
            {
              v49 = *(int *)((char *)&dword_140404A6C[278845902] + v3);
              if ( (_DWORD)v49 == -1 || dword_140404A6C[7166 * v49 + 280651313] == -1 )
              {
                v50 = 0;
                v51 = (float *)&dword_140404A6C[v21 + 18215715];
                do
                {
                  v52 = v50 & 3;
                  if ( (v50 & 3) == 0 || v52 == 3 )
                    v53 = -*(float *)&dword_140404A6C[v22 + 278521350];
                  else
                    v53 = *(float *)&dword_140404A6C[v22 + 278521350];
                  v54 = *(float *)&dword_140404A6C[v22 + 278521351];
                  v55 = (float)(v53 * *(float *)&dword_140404A6C[v21 + 18215725]) + v51[1];
                  v56 = (float)(v53 * *(float *)&dword_140404A6C[v21 + 18215724]) + *v51;
                  v57 = (float)(v53 * *(float *)&dword_140404A6C[v21 + 18215726]) + v51[2];
                  if ( (unsigned int)v50 < 4 )
                    v54 = -v54;
                  v58 = v54 * *(float *)&dword_140404A6C[v21 + 18215728];
                  v59 = v54 * *(float *)&dword_140404A6C[v21 + 18215727];
                  v60 = v57 + (float)(v54 * *(float *)&dword_140404A6C[v21 + 18215729]);
                  v61 = *(float *)&dword_140404A6C[v22 + 278521352];
                  v62 = v55 + v58;
                  v63 = v56 + v59;
                  if ( v52 < 2 )
                    v61 = -v61;
                  v64 = v61 * *(float *)&dword_140404A6C[v21 + 18215731];
                  v65 = v60 + (float)(v61 * *(float *)&dword_140404A6C[v21 + 18215732]);
                  sr_item_collision_endpoint[0] = v63 + (float)(v61 * *(float *)&dword_140404A6C[v21 + 18215730]);
                  sr_item_collision_endpoint[1] = v62 + v64;
                  sr_item_collision_endpoint[2] = v65;
                  if ( (unsigned int)sub_1400DC050(v51, &sr_item_collision_endpoint[0], 1) )
                  {
                    v66 = *(float *)&dword_140404A6C[73006983] - sr_item_collision_endpoint[2];
                    v67 = *(float *)&dword_140404A6C[73006982] - v51[1];
                    sr_item_collision_endpoint[2] = *(float *)&dword_140404A6C[73006983] - v51[2];
                    *(float *)&v68 = *(float *)&dword_140404A6C[73006981] - *v51;
                    v69 = *(float *)&dword_140404A6C[73006985] * (float)(*(float *)&dword_140404A6C[73006982] - sr_item_collision_endpoint[1]);
                    sr_item_collision_endpoint[1] = v67;
                    v70 = *(float *)&dword_140404A6C[73006984] * (float)(*(float *)&dword_140404A6C[73006981] - sr_item_collision_endpoint[0]);
                    sr_item_collision_endpoint[0] = *(float *)&v68;
                    sub_140005160(
                      v19,
                      (unsigned int *)&sr_item_collision_endpoint[0],
                      &dword_140404A6C[73006984],
                      (float)(v69 + v70) + (float)(*(float *)&dword_140404A6C[73006986] * v66),
                      0x3F19999Au,
                      0.015625,
                      0x3D000000u);
                    if ( dword_140404A6C[73007015] != -1 )
                    {
                      v71 = dword_140404A6C[73007013];
                      for ( i = 0; i < (int)dword_140404A6C[948 * dword_140404A6C[73007013] + 272299416]; ++i )
                      {
                        sub_1400CDBD0(
                          v71 + (dword_140404A6C[73007014] << 24),
                          i,
                          dword_140404A6C[73007002],
                          dword_140404A6C[73007003],
                          dword_140404A6C[73007004],
                          dword_140404A6C[73007005]);
                        v71 = dword_140404A6C[73007013];
                      }
                    }
                  }
                  ++v50;
                }
                while ( v50 < 8 );
                v3 = v86;
              }
            }
            if ( *(unsigned int *)((char *)&dword_140404A6C[278845902] + v3) == -1
              && fsqrt(
                   (float)((float)(*(float *)((char *)&dword_140404A6C[278845925] + v3)
                                 * *(float *)((char *)&dword_140404A6C[278845925] + v3))
                         + (float)(*(float *)((char *)&dword_140404A6C[278845926] + v3)
                                 * *(float *)((char *)&dword_140404A6C[278845926] + v3)))
                 + (float)(*(float *)((char *)&dword_140404A6C[278845927] + v3)
                         * *(float *)((char *)&dword_140404A6C[278845927] + v3))) < 0.0041666669
              && fsqrt(
                   (float)((float)(*(float *)((char *)&dword_140404A6C[278845943] + v3)
                                 * *(float *)((char *)&dword_140404A6C[278845943] + v3))
                         + (float)(*(float *)((char *)&dword_140404A6C[278845944] + v3)
                                 * *(float *)((char *)&dword_140404A6C[278845944] + v3)))
                 + (float)(*(float *)((char *)&dword_140404A6C[278845945] + v3)
                         * *(float *)((char *)&dword_140404A6C[278845945] + v3))) < 0.0041666669 )
            {
              v73 = *(unsigned int *)((char *)&dword_140404A6C[278845896] + v3);
              if ( v73 >= 60
                || (v74 = v73 + 1, *(unsigned int *)((char *)&dword_140404A6C[278845896] + v3) = v74, v74 >= 60) )
              {
                *(unsigned int *)((char *)&dword_140404A6C[278845895] + v3) = 1;
              }
              v0 = 0;
            }
            else
            {
              v0 = 0;
              *(unsigned int *)((char *)&dword_140404A6C[278845896] + v3) = 0;
            }
            v1 = v82;
            v2 = v84;
          }
          else
          {
            v20 = 47 * v19;
            *(_QWORD *)&dword_140404A6C[v20 + 18215718] = 0;
            dword_140404A6C[v20 + 18215720] = 0;
            *(_QWORD *)&dword_140404A6C[v20 + 18215736] = 0;
            dword_140404A6C[v20 + 18215738] = 0;
            *(_QWORD *)&dword_140404A6C[v20 + 18215733] = 0;
            dword_140404A6C[v20 + 18215735] = 0;
            dword_140404A6C[v20 + 18215711] = 1;
          }
        }
        else
        {
          *(_QWORD *)((char *)&dword_140404A6C[278845925] + v3) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[278845927] + v3) = 0;
          *(_QWORD *)((char *)&dword_140404A6C[278845943] + v3) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[278845945] + v3) = 0;
          v75 = *(int *)((char *)&dword_140404A6C[278845902] + v3);
          if ( (_DWORD)v75 != -1 )
          {
            *(unsigned int *)((char *)&dword_140404A6C[278845925] + v3) = dword_140404A6C[7166 * v75 + 280651446];
            *(unsigned int *)((char *)&dword_140404A6C[278845926] + v3) = dword_140404A6C[7166 * v75 + 280651447];
            *(unsigned int *)((char *)&dword_140404A6C[278845927] + v3) = dword_140404A6C[7166 * v75 + 280651448];
          }
          v76 = 47LL * *(int *)((char *)&dword_140404A6C[278845915] + v3);
          v77 = *(unsigned int *)((char *)&dword_140404A6C[278845916] + v3);
          *(_QWORD *)&dword_140404A6C[v76 + 18215733] = 0;
          *(_QWORD *)&dword_140404A6C[v76 + 18215735] = 0;
          dword_140404A6C[v76 + 18215715] = v77;
          dword_140404A6C[v76 + 18215716] = *(unsigned int *)((char *)&dword_140404A6C[278845917] + v3);
          dword_140404A6C[v76 + 18215717] = *(unsigned int *)((char *)&dword_140404A6C[278845918] + v3);
          dword_140404A6C[v76 + 18215718] = *(unsigned int *)((char *)&dword_140404A6C[278845925] + v3);
          dword_140404A6C[v76 + 18215719] = *(unsigned int *)((char *)&dword_140404A6C[278845926] + v3);
          dword_140404A6C[v76 + 18215720] = *(unsigned int *)((char *)&dword_140404A6C[278845927] + v3);
          dword_140404A6C[v76 + 18215724] = *(unsigned int *)((char *)&dword_140404A6C[278845934] + v3);
          dword_140404A6C[v76 + 18215725] = *(unsigned int *)((char *)&dword_140404A6C[278845935] + v3);
          dword_140404A6C[v76 + 18215726] = *(unsigned int *)((char *)&dword_140404A6C[278845936] + v3);
          dword_140404A6C[v76 + 18215727] = *(unsigned int *)((char *)&dword_140404A6C[278845937] + v3);
          dword_140404A6C[v76 + 18215728] = *(unsigned int *)((char *)&dword_140404A6C[278845938] + v3);
          dword_140404A6C[v76 + 18215729] = *(unsigned int *)((char *)&dword_140404A6C[278845939] + v3);
          dword_140404A6C[v76 + 18215730] = *(unsigned int *)((char *)&dword_140404A6C[278845940] + v3);
          dword_140404A6C[v76 + 18215731] = *(unsigned int *)((char *)&dword_140404A6C[278845941] + v3);
          dword_140404A6C[v76 + 18215732] = *(unsigned int *)((char *)&dword_140404A6C[278845942] + v3);
          *(_QWORD *)&dword_140404A6C[v76 + 18215737] = 0;
          dword_140404A6C[v76 + 18215711] = 1;
          *(_QWORD *)((char *)&dword_140404A6C[278845895] + v3) = 0;
        }
      }
      else
      {
        v18 = 47LL * *(int *)((char *)&dword_140404A6C[278845915] + v3);
        *(_QWORD *)&dword_140404A6C[v18 + 18215718] = 0;
        dword_140404A6C[v18 + 18215720] = 0;
        *(_QWORD *)&dword_140404A6C[v18 + 18215736] = 0;
        dword_140404A6C[v18 + 18215738] = 0;
        *(_QWORD *)&dword_140404A6C[v18 + 18215733] = 0;
        dword_140404A6C[v18 + 18215735] = 0;
        dword_140404A6C[v18 + 18215711] = 1;
      }
      *(unsigned int *)((char *)&dword_140404A6C[278845919] + v3) = *(unsigned int *)((char *)&dword_140404A6C[278845916]
                                                                                    + v3);
      *(unsigned int *)((char *)&dword_140404A6C[278845920] + v3) = *(unsigned int *)((char *)&dword_140404A6C[278845917]
                                                                                    + v3);
      *(unsigned int *)((char *)&dword_140404A6C[278845921] + v3) = *(unsigned int *)((char *)&dword_140404A6C[278845918]
                                                                                    + v3);
    }
    ++v1;
    ++v2;
    v82 = v1;
    v84 = v2;
  }
  while ( v1 < 1024 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v79
#undef v80
#undef v81
#undef v82
#undef v83
#undef v84
#undef v85
#undef v86
#undef v87
#undef v88
#undef v92

// 140279870: using guessed type __int128 xmmword_140279870;
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
// 151A84900: using guessed type unsigned int;
// 151A84908: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400CF160) ----------------------------------------------------
void sub_1400CF160()
{
  unsigned int *v0; // rcx
  __int64 v1; // r9
  __int64 v2; // r8
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rdx
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  unsigned int v11; // eax
  float v12; // xmm0_4
  float *v13; // rdx
  __int64 v14; // rax
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm1_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm11_4
  float v25; // xmm12_4
  float v26; // xmm13_4
  unsigned int v27; // r8d
  float v28; // xmm1_4
  float v29; // xmm8_4
  float v30; // xmm9_4
  float v31; // xmm2_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  float v34; // xmm4_4
  int v35; // eax
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm0_4

  v0 = &dword_140404A6C[278845936];
  v1 = 1024;
  v2 = 1024;
  do
  {
    if ( *(v0 - 43) )
    {
      v3 = v0[43];
      if ( v3 > 0 )
        v0[43] = v3 - 1;
      v4 = (int)*(v0 - 34);
      if ( (_DWORD)v4 != -1 )
      {
        v5 = 7166 * v4;
        if ( dword_140404A6C[7166 * v4 + 280651303] )
        {
          if ( (int)*(v0 - 32) >= 2 )
          {
            v6 = *(float *)&dword_140404A6C[v5 + 280651596];
            v7 = -*(float *)&dword_140404A6C[v5 + 280651614];
            v8 = *(float *)&dword_140404A6C[v5 + 280651616];
            v9 = -*(float *)&dword_140404A6C[v5 + 280651615];
            *(v0 - 2) = dword_140404A6C[v5 + 280651608];
            v10 = -v8;
            *(v0 - 1) = dword_140404A6C[v5 + 280651609];
            *v0 = dword_140404A6C[v5 + 280651610];
            v11 = dword_140404A6C[v5 + 280651611];
            *((float *)v0 + 1) = v7;
            *((float *)v0 + 2) = v9;
            *((float *)v0 + 3) = v10;
            v0[4] = v11;
            v0[5] = dword_140404A6C[v5 + 280651612];
            v0[6] = dword_140404A6C[v5 + 280651613];
            *((float *)v0 - 20) = v6 - (float)(v7 * 0.25);
            *((float *)v0 - 19) = *(float *)&dword_140404A6C[v5 + 280651597] - (float)(v9 * 0.25);
            *((float *)v0 - 18) = *(float *)&dword_140404A6C[v5 + 280651598] - (float)(v10 * 0.25);
          }
        }
      }
    }
    v0 += 1760;
    --v2;
  }
  while ( v2 );
  v12 = *(float *)&dword_140404A6C[278571065];
  v13 = (float *)&dword_140404A6C[278845939];
  do
  {
    if ( *((_DWORD *)v13 - 46) )
    {
      v14 = *((int *)v13 - 36);
      if ( (_DWORD)v14 != -1 )
      {
        v15 = *(float *)&dword_140404A6C[1760 * v14 + 278845916];
        *(v13 - 23) = v15;
        v16 = *(float *)&dword_140404A6C[1760 * v14 + 278845917];
        *(v13 - 22) = v16;
        v17 = *(float *)&dword_140404A6C[1760 * v14 + 278845918];
        *(v13 - 21) = v17;
        v18 = *(float *)&dword_140404A6C[1760 * v14 + 278845934];
        *(v13 - 5) = v18;
        v19 = *(float *)&dword_140404A6C[1760 * v14 + 278845935];
        *(v13 - 4) = v19;
        v20 = *(float *)&dword_140404A6C[1760 * v14 + 278845936];
        *(v13 - 3) = v20;
        v21 = *(float *)&dword_140404A6C[1760 * v14 + 278845937];
        *(v13 - 2) = v21;
        v22 = *(float *)&dword_140404A6C[1760 * v14 + 278845938];
        *(v13 - 1) = v22;
        v23 = *(float *)&dword_140404A6C[1760 * v14 + 278845939];
        *v13 = v23;
        v24 = *(float *)&dword_140404A6C[1760 * v14 + 278845940];
        v13[1] = v24;
        v25 = *(float *)&dword_140404A6C[1760 * v14 + 278845941];
        v13[2] = v25;
        v26 = *(float *)&dword_140404A6C[1760 * v14 + 278845942];
        v13[3] = v26;
        v27 = dword_140404A6C[1760 * v14 + 278845898];
        if ( v27 - 15 <= 1 )
        {
          v35 = *((_DWORD *)v13 - 41);
          if ( v35 == 17 )
          {
            v36 = (float)((float)*((int *)v13 - 35) * 0.10546875) - 0.2109375;
            v37 = (float)(v18 * v36) + v15;
            v38 = (float)(v19 * v36) + v16;
            *(v13 - 23) = v37;
            *(v13 - 22) = v38;
            v39 = (float)(v20 * v36) + v17;
            *(v13 - 21) = v39;
          }
          else
          {
            v37 = v15;
            v38 = v16;
            v39 = v17;
          }
          if ( v35 == 18 )
          {
            v40 = (float)((float)*((int *)v13 - 35) * 0.10546875) - 0.2109375;
            *(v13 - 23) = (float)(v18 * v40) + v37;
            *(v13 - 22) = (float)(v19 * v40) + v38;
            *(v13 - 21) = (float)(v20 * v40) + v39;
          }
        }
        else if ( v27 == 39 )
        {
          v28 = (float)(v21 * v12) + v15;
          v29 = (float)(v22 * v12) + v16;
          v30 = (float)(v23 * v12) + v17;
          *(v13 - 23) = v28;
          *(v13 - 22) = v29;
          *(v13 - 21) = v30;
          v31 = *(float *)&dword_140404A6C[1268 * dword_140404A6C[1760 * v14 + 278845898] + 278521614];
          *(v13 - 23) = (float)(v31 * v24) + v28;
          *(v13 - 22) = (float)(v31 * v25) + v29;
          *(v13 - 21) = (float)(v31 * v26) + v30;
        }
        else
        {
          v32 = v15 - (float)(v21 * 0.0625);
          v33 = v16 - (float)(v22 * 0.0625);
          v34 = v17 - (float)(v23 * 0.0625);
          *(v13 - 23) = v32 - (float)(v24 * 0.0625);
          *(v13 - 22) = v33 - (float)(v25 * 0.0625);
          *(v13 - 21) = v34 - (float)(v26 * 0.0625);
          *(v13 - 23) = v32;
          *(v13 - 22) = v33;
          *(v13 - 21) = v34;
        }
      }
    }
    v12 = *(float *)&dword_140404A6C[278571065];
    v13 += 1760;
    --v1;
  }
  while ( v1 );
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 182AAEB50: using guessed type unsigned int;

//----- (00000001400CF610) ----------------------------------------------------
void            sub_1400CF610()
{
  int v0; // edi
  unsigned int *v1; // rbx
  int v2; // ecx

  v0 = 0;
  v1 = &dword_140404A6C[278845900];
  do
  {
    if ( *(v1 - 7) )
    {
      v2 = *v1;
      if ( (int)*v1 < 0xFFFF )
        *v1 = --v2;
      if ( v2 <= 0 )
        sub_14007F970(v0);
    }
    ++v0;
    v1 += 1760;
  }
  while ( v0 < 1024 );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400CF670) ----------------------------------------------------
__int64            sub_1400CF670(signed int a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r14
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  float v16; // xmm9_4
  float v17; // xmm12_4
  unsigned int v18; // xmm1_4
  signed int v19; // ecx
  unsigned int v20; // r9d
  float v21; // xmm12_4
  float v22; // xmm10_4
  unsigned int v23; // xmm0_4
  float v24; // xmm11_4
  unsigned int v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // eax
  float v31; // xmm10_4
  float v32; // xmm11_4
  unsigned int v33; // edx
  float v34; // xmm7_4
  float v35; // xmm6_4
  float v36; // xmm6_4
  float v37; // xmm5_4
  float v38; // xmm4_4
  float v39; // xmm3_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CF670[32];
#define v40 (*(float (*))(void *)(sr_frame_1400CF670 + 0)) /* [rsp+20h] */
#define v41 (*(float (*))(void *)(sr_frame_1400CF670 + 4)) /* [rsp+24h] */
#define v42 (*(float (*))(void *)(sr_frame_1400CF670 + 8)) /* [rsp+28h] */
#define v43 (*(float (*)[4])(void *)(sr_frame_1400CF670 + 16)) /* [rsp+30h] */

  v2 = 1760LL * a1;
  result = dword_140404A6C[v2 + 278845972];
  v4 = (int)dword_140404A6C[v2 + 278845898];
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    dword_140404A6C[v2 + 278845972] = result;
  }
  v5 = (int)dword_140404A6C[v2 + 278845902];
  if ( (_DWORD)v5 != -1 && dword_140404A6C[283831448] == 2 )
  {
    v6 = (int)dword_140404A6C[v2 + 278845915];
    result = dword_140404A6C[v2 + 278845977] & 1;
    if ( !(_DWORD)result )
      dword_140404A6C[v2 + 278845976] = 0;
    if ( ((_DWORD)v4 == 11 || (_DWORD)v4 == 5) && !(_DWORD)result )
    {
      dword_140404A6C[v2 + 278845972] = 0;
      v7 = 6;
      if ( (_DWORD)v4 != 5 )
        v7 = 2;
    }
    else
    {
      v7 = 6;
      if ( (_DWORD)v4 != 5 )
        v7 = 2;
      if ( (_DWORD)result )
      {
        result = dword_140404A6C[v2 + 278845976];
        if ( (int)result < v7 || (_DWORD)v4 == 11 || (_DWORD)v4 == 5 )
        {
          result = (unsigned int)(result + 1);
          dword_140404A6C[v2 + 278845976] = result;
        }
      }
    }
    if ( !dword_140404A6C[v2 + 278845974] && (int)dword_140404A6C[v2 + 278845906] > 0 )
    {
      result = (int)dword_140404A6C[v2 + 278845907];
      if ( (int)dword_140404A6C[1760 * result + 278845974] > 0 )
      {
        dword_140404A6C[v2 + 278845974] = 1;
        result = (int)dword_140404A6C[v2 + 278845907];
        --dword_140404A6C[1760 * result + 278845974];
      }
    }
    if ( (int)dword_140404A6C[v2 + 278845972] <= 0
      && dword_140404A6C[v2 + 278845976] == v7
      && (int)dword_140404A6C[v2 + 278845974] > 0 )
    {
      v8 = v5;
      v9 = 47 * v6;
      v10 = 1268 * v4;
      v11 = *(float *)&dword_140404A6C[47 * v6 + 18215718];
      v12 = *(float *)&dword_140404A6C[47 * v6 + 18215719];
      v13 = *(float *)&dword_140404A6C[47 * v6 + 18215720];
      v14 = *(float *)&dword_140404A6C[47 * v6 + 18215731];
      v15 = *(float *)&dword_140404A6C[47 * v6 + 18215732];
      v16 = -*(float *)&dword_140404A6C[1268 * v4 + 278521295];
      v17 = *(float *)&dword_140404A6C[47 * v6 + 18215730];
      sub_1400A56B0(&v40, *(float *)&dword_140404A6C[1268 * v4 + 278521296], 0.0);
      v18 = dword_140404A6C[v9 + 18215716];
      v19 = dword_140404A6C[v10 + 278521292];
      v20 = dword_140404A6C[7166 * v8 + 280651305];
      v21 = (float)((float)(v17 * v16) + v11) + v40;
      v40 = *(float *)&dword_140404A6C[v9 + 18215715];
      v22 = (float)((float)(v14 * v16) + v12) + v41;
      v23 = dword_140404A6C[v9 + 18215717];
      v24 = (float)((float)(v15 * v16) + v13) + v42;
      v43[0] = v21;
      v41 = *(float *)&v18;
      v43[1] = v22;
      v42 = *(float *)&v23;
      v43[2] = v24;
      sub_14004E8A0(v19, (unsigned int *)&v40, v43, v20);
      *(float *)&v25 = *(float *)&dword_140404A6C[v9 + 18215715] - *(float *)&dword_140404A6C[v9 + 18215718];
      v26 = *(float *)&dword_140404A6C[v9 + 18215716] - *(float *)&dword_140404A6C[v9 + 18215719];
      v27 = *(float *)&dword_140404A6C[v9 + 18215717] - *(float *)&dword_140404A6C[v9 + 18215720];
      v40 = *(float *)&v25;
      v41 = v26;
      v42 = v27;
      if ( dword_140404A6C[456202453] )
      {
        v28 = dword_140404A6C[283831474];
        v29 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v29) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v29) = v28;
        v30 = dword_140404A6C[v10 + 278521292];
        *(unsigned int *)((char *)&dword_140404A6C[297756287] + v29) = v25;
        *(float *)((char *)&dword_140404A6C[297756288] + v29) = v26;
        *(float *)((char *)&dword_140404A6C[297756289] + v29) = v27;
        *(float *)((char *)&dword_140404A6C[297756290] + v29) = v21;
        *(float *)((char *)&dword_140404A6C[297756291] + v29) = v22;
        *(float *)((char *)&dword_140404A6C[297756292] + v29) = v24;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v29) = v30;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v29) = a1;
      }
      sub_1400A56B0(
        &v40,
        *(float *)&dword_140404A6C[v10 + 278521296] + *(float *)&dword_140404A6C[v10 + 278521296],
        0.0);
      v31 = v22 + v41;
      v32 = v24 + v42;
      v33 = dword_140404A6C[v2 + 278845974];
      v34 = v40 + v21;
      v35 = *(float *)&dword_140404A6C[6 * dword_140404A6C[v10 + 278521292] + 437914197];
      dword_140404A6C[v2 + 278845972] = dword_140404A6C[v10 + 278521291];
      result = v33 - 1;
      dword_140404A6C[v2 + 278845974] = result;
      v36 = (float)(v35 + v35) / *(float *)&dword_140404A6C[v2 + 278845899];
      *(float *)&dword_140404A6C[v9 + 18215718] = (float)((float)-v36 * v34) + *(float *)&dword_140404A6C[v9 + 18215718];
      *(float *)&dword_140404A6C[v9 + 18215719] = (float)((float)-v36 * v31) + *(float *)&dword_140404A6C[v9 + 18215719];
      *(float *)&dword_140404A6C[v9 + 18215720] = (float)((float)-v36 * v32) + *(float *)&dword_140404A6C[v9 + 18215720];
      v37 = (float)(*(float *)&dword_140404A6C[v9 + 18215727] * 0.03125)
          - (float)(*(float *)&dword_140404A6C[v9 + 18215730] * 0.625);
      v38 = (float)(*(float *)&dword_140404A6C[v9 + 18215728] * 0.03125)
          - (float)(*(float *)&dword_140404A6C[v9 + 18215731] * 0.625);
      v39 = (float)(*(float *)&dword_140404A6C[v9 + 18215729] * 0.03125)
          - (float)(*(float *)&dword_140404A6C[v9 + 18215732] * 0.625);
      *(float *)&dword_140404A6C[v9 + 18215733] = (float)((float)((float)(v38 * v32) - (float)(v39 * v31)) * v36)
                                                + *(float *)&dword_140404A6C[v9 + 18215733];
      *(float *)&dword_140404A6C[v9 + 18215734] = (float)((float)((float)(v34 * v39) - (float)(v37 * v32)) * v36)
                                                + *(float *)&dword_140404A6C[v9 + 18215734];
      *(float *)&dword_140404A6C[v9 + 18215735] = (float)((float)((float)(v37 * v31) - (float)(v34 * v38)) * v36)
                                                + *(float *)&dword_140404A6C[v9 + 18215735];
      if ( v33 == 1 && (int)dword_140404A6C[v2 + 278845906] > 0 )
      {
        result = (int)dword_140404A6C[v2 + 278845907];
        if ( (int)dword_140404A6C[1760 * result + 278845974] > 0 )
        {
          dword_140404A6C[v2 + 278845974] = 1;
          result = (int)dword_140404A6C[v2 + 278845907];
          --dword_140404A6C[1760 * result + 278845974];
        }
      }
    }
  }
  return result;
}
#undef v40
#undef v41
#undef v42
#undef v43

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400CFC80) ----------------------------------------------------
void sub_1400CFC80(int a1,unsigned a2,float x,float y,float width,float height,unsigned flags)
{
  (void)a2;
  float outer=0.625f,inner=(flags&1)?0.5f:0.0f;
  if(flags&8){outer=0.25f;inner=0.0f;}
  unsigned color=sr_text_float_bits(outer);
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,color,color,color,0x3f800000);
  color=sr_text_float_bits(inner);
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,color,color,color,0x3f800000);
  __int64 row=23LL*a1;
  float middle=height*0.5f+y;
  sr_text_draw_recovered((char *)&dword_140404A6C[row+179473704],x+4.0f,middle,16.0f,68,1,1,1,1,NULL);
  uint64_t ping[]={dword_140404A6C[row+179473720]};
  sr_text_draw_recovered("/i",480.0f,middle,16.0f,6,1,1,1,1,ping);
  uint64_t players[]={dword_140404A6C[row+179473717],dword_140404A6C[row+179473719]};
  sr_text_draw_recovered("/i///i",560.0f,middle,16.0f,6,1,1,1,1,players);
  unsigned mode=dword_140404A6C[row+179473721];
  if(mode==5)sr_text_draw_recovered("Eliminator",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  if(mode==3)sr_text_draw_recovered("Round",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  if(mode==4)sr_text_draw_recovered("World",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  if(mode==7)sr_text_draw_recovered("Versus",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  uint64_t version[]={dword_140404A6C[row+179473701],(uint32_t)(dword_140404A6C[row+179473702]+97u)};
  sr_text_draw_recovered("Alpha /i/c",784.0f,middle,16.0f,6,1,1,1,1,version);
  if(dword_140404A6C[row+179473723])sr_text_draw_recovered("Yes",878.0f,middle,16.0f,6,1,1,1,1,NULL);
}


//----- (00000001400D00F0) ----------------------------------------------------
__int64            sub_1400D00F0(int a1)
{
  int v1; // r14d
  unsigned int v2; // r15d
  __int64 v3; // rax
  __int64 v4; // rcx
  float v5; // xmm11_4
  float v6; // xmm12_4
  float v7; // xmm13_4
  unsigned int v8; // edx
  unsigned int v9; // r8d
  int v10; // ebx
  int v11; // r12d
  __int64 v12; // r14
  __int64 v13; // rbp
  int v14; // r10d
  unsigned int v15; // edi
  int v16; // r13d
  int v17; // r11d
  __int64 v18; // rax
  float v19; // xmm1_4
  __int64 v20; // rsi
  int v21; // ebx
  __int16 v22; // dx
  unsigned int v23; // r8d
  unsigned int v24; // r9d
  float v25; // xmm3_4
  unsigned int v26; // r8d
  float v27; // xmm0_4
  float v28; // xmm3_4
  int v29; // r8d
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm4_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm3_4
  int v38; // r14d
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D00F0[272];
#define v40 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 0)) /* [rsp+20h] */
#define v41 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 4)) /* [rsp+24h] */
#define v42 (*(__int16 (*))(void *)(sr_frame_1400D00F0 + 8)) /* [rsp+28h] */
#define v43 (*(__int64 (*))(void *)(sr_frame_1400D00F0 + 16)) /* [rsp+30h] */
#define v44 (*(__int64 (*))(void *)(sr_frame_1400D00F0 + 24)) /* [rsp+38h] */
#define v45 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 240)) /* [rsp+110h] */
#define v46 (*(int (*))(void *)(sr_frame_1400D00F0 + 248)) /* [rsp+118h] */
#define v47 (*(int (*))(void *)(sr_frame_1400D00F0 + 256)) /* [rsp+120h] */
#define v48 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 264)) /* [rsp+128h] */

  v1 = -1;
  v2 = -1;
  v44 = a1;
  v3 = 3336LL * a1;
  v47 = -1;
  v4 = *(_QWORD *)&dword_140404A6C[v3 + 272034683];
  v5 = *(float *)&dword_140404A6C[v3 + 272034677];
  v6 = *(float *)&dword_140404A6C[v3 + 272034678];
  v7 = *(float *)&dword_140404A6C[v3 + 272034679];
  v8 = dword_140404A6C[v3 + 272034680] << 11;
  v9 = dword_140404A6C[v3 + 272034681] << 11;
  v10 = 0;
  v48 = v8;
  v46 = 0;
  v45 = v9;
  v43 = v4;
  do
  {
    if ( v1 >= 0 )
    {
      v11 = v1;
      if ( v1 > 2048 )
        v11 = 2048;
    }
    else
    {
      v11 = 0;
    }
    v12 = 2049LL * v11;
    v13 = -1;
    v14 = -1;
    v15 = -1;
    v40 = (int)(v9 + v11 - 128) >> 11;
    v42 = v11 + v9 + 128;
    v41 = (int)(v11 + v9 + 128) >> 11;
    v16 = 6 * v10;
    do
    {
      if ( v14 >= 0 )
      {
        if ( v14 <= 2048 )
        {
          v17 = v14;
          v18 = v13;
        }
        else
        {
          v17 = 2048;
          v18 = 2048;
        }
      }
      else
      {
        v17 = 0;
        v18 = 0;
      }
      if ( v15 > 0x800 || v2 > 0x800 )
        v19 = *(float *)(v4 + 4 * (v12 + v18)) - 16.0;
      else
        v19 = *(float *)(v4 + 4 * (v12 + v18));
      v20 = v16;
      v21 = v8 + v17;
      v22 = v8 + v17 - 128;
      v23 = (v21 - 128) >> 11;
      *(float *)&dword_140404A6C[v16 + 271182638] = v19 + v6;
      *(float *)&dword_140404A6C[v16 + 271182639] = (float)v11 + v7;
      *(float *)&dword_140404A6C[v16 + 271182637] = v5 + (float)v17;
      v24 = (int)(v11 + v45) >> 11;
      if ( v23 > 7 || v24 > 7 )
        v25 = 0.0;
      else
        v25 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v23 + 8 * v24) + 272034683]
                       + 4LL * (2049 * (((_WORD)v11 + (_WORD)v45) & 0x7FF) + (v22 & 0x7FFu)));
      v26 = (v21 + 128) >> 11;
      if ( v26 > 7 || v24 > 7 )
        v27 = 0.0;
      else
        v27 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v26 + 8 * v24) + 272034683]
                       + 4LL * (2049 * (v11 & 0x7FF) + (((_WORD)v21 + 128) & 0x7FFu)));
      v28 = v25 - v27;
      v29 = v21 >> 11;
      if ( (unsigned int)(v21 >> 11) > 7 )
      {
        v30 = 0.0;
      }
      else
      {
        if ( v40 > 7 )
          v30 = 0.0;
        else
          v30 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v29 + 8 * v40) + 272034683]
                         + 4LL * ((v21 & 0x7FF) + 2049 * (((_WORD)v11 + (_WORD)v45 - 128) & 0x7FFu)));
        if ( v41 <= 7 )
        {
          v31 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v29 + 8 * v41) + 272034683]
                         + 4LL * ((v17 & 0x7FF) + 2049 * (v42 & 0x7FFu)));
          goto LABEL_32;
        }
      }
      v31 = 0.0;
LABEL_32:
      v32 = v30 - v31;
      v33 = v32 * 0.0078125;
      v34 = fsqrt((float)((float)((float)(v32 * v32) + (float)(v28 * v28)) * 0.000061035156) + 1.0);
      if ( v34 == 0.0 )
      {
        v36 = 0.0;
        v35 = 0.0;
        v37 = 0.0;
      }
      else
      {
        v35 = 1.0 / v34;
        v36 = (float)(1.0 / v34) * (float)(v28 * 0.0078125);
        v37 = v35 * v33;
      }
      v10 = v46 + 1;
      *(float *)&dword_140404A6C[v16 + 271182640] = v36;
      v16 += 6;
      *(float *)&dword_140404A6C[v20 + 271182641] = v35;
      *(float *)&dword_140404A6C[v20 + 271182642] = v37;
      ++v46;
      if ( v15 <= 0x7FF )
      {
        v14 += 127;
        v15 += 127;
        v13 += 127;
      }
      v4 = v43;
      ++v14;
      v8 = v48;
      ++v15;
      ++v13;
    }
    while ( v14 <= 2049 );
    v38 = v47;
    if ( v2 <= 0x7FF )
    {
      v38 = v47 + 127;
      v2 += 127;
    }
    v9 = v45;
    v1 = v38 + 1;
    ++v2;
    v47 = v1;
  }
  while ( v1 <= 2049 );
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v44 + 283791496] + 283793813], v45);
  return unk_140404190(34962, 24 * v10, &dword_140404A6C[271182637], 35048);
}
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48

// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D05B0) ----------------------------------------------------
__int64            sub_1400D05B0(int *a1, float *a2, float *a3)
{
  float *v4; // r11
  __int64 result; // rax
  int v6; // ecx
  int v7; // r13d
  int v8; // r15d
  int v9; // r14d
  unsigned int v10; // r12d
  unsigned int v11; // r8d
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  float v15; // xmm11_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  __int64 v19; // r9
  float v20; // xmm13_4
  float v21; // xmm4_4
  float v22; // xmm12_4
  float v23; // xmm11_4
  float v24; // xmm9_4
  float v25; // xmm3_4
  float v26; // xmm10_4
  float v27; // xmm0_4
  __int64 v28; // rax
  int v29; // ebp
  float *v30; // rcx
  float *v31; // rcx
  int v32; // edx
  int v33; // esi
  float *v34; // rcx
  int v35; // edi
  float *v36; // rcx
  float v37; // xmm4_4
  float v38; // xmm10_4
  float v39; // xmm9_4
  float v40; // xmm12_4
  float *v41; // rdx
  __int64 v42; // rcx
  float v43; // xmm11_4
  float *v44; // rdx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D05B0[16];
#define v46 (*(unsigned int (*))(void *)(sr_frame_1400D05B0 + 0)) /* [rsp+100h] */
#define v47 (*(int (*))(void *)(sr_frame_1400D05B0 + 8)) /* [rsp+108h] */

  v4 = a2;
  result = (unsigned int)(int)(float)(*a2 - *(float *)&dword_140404A6C[272248181]);
  v6 = (int)(float)(a3[2] - *(float *)&dword_140404A6C[272248183]);
  v46 = (int)(float)(*a2 - *(float *)&dword_140404A6C[272248181]);
  v7 = (int)(float)(*a3 - *(float *)&dword_140404A6C[272248181]);
  v47 = v6;
  v8 = (int)(float)(a2[2] - *(float *)&dword_140404A6C[272248183]);
  if ( v8 > v6 )
    return result;
  do
  {
    v9 = result;
    if ( (int)result > v7 )
      goto LABEL_52;
    v10 = v8 >> 11;
    do
    {
      if ( (unsigned int)(v9 >> 11) > 7 )
        goto LABEL_50;
      if ( v10 > 7 )
        goto LABEL_50;
      v11 = v8 >> 2;
      if ( (unsigned int)(v9 >> 2) > 0xFFF )
        goto LABEL_50;
      if ( v11 > 0xFFF )
        goto LABEL_50;
      v12 = *(unsigned __int16 *)(*(_QWORD *)&dword_140404A6C[272248185] + 2LL * ((v9 >> 4) + (v8 >> 4 << 10)));
      if ( !_bittest(&v12, (unsigned __int8)(((v9 >> 2) & 3) + 4 * (v11 & 3))) )
        goto LABEL_50;
      v13 = 3336LL * (int)((v9 >> 11) + 8 * v10);
      v14 = *(_QWORD *)&dword_140404A6C[v13 + 272034683];
      v15 = *(float *)&dword_140404A6C[v13 + 272034678];
      v16 = *(float *)&dword_140404A6C[v13 + 272034677];
      v17 = *(float *)&dword_140404A6C[v13 + 272034679];
      v18 = (float)(v9 & 0x7FF) + v16;
      v19 = (v9 & 0x7FF) + 2049 * (v8 & 0x7FFu);
      v20 = v15 + *(float *)(v14 + 4 * v19);
      v21 = v15 + *(float *)(v14 + 4 * v19 + 4);
      v22 = v15 + *(float *)(v14 + 4 * v19 + 8200);
      v23 = v15 + *(float *)(v14 + 4 * v19 + 8196);
      v24 = (float)((v8 & 0x7FF) + 1) + v17;
      v25 = (float)(v8 & 0x7FF) + v17;
      v26 = (float)((v9 & 0x7FF) + 1) + v16;
      if ( a1[8193] >= 1023 )
        goto LABEL_50;
      v27 = v4[1];
      if ( v20 <= v27 && v21 <= v27 && v22 <= v27 && v23 <= v27 )
        goto LABEL_50;
      v28 = *a1;
      v29 = 0;
      if ( (int)v28 > 0 )
      {
        v30 = (float *)(a1 + 3);
        while ( fabs(v18 - *(v30 - 1)) >= 0.000061035156
             || fabs(v20 - *v30) >= 0.000061035156
             || fabs(v25 - v30[1]) >= 0.000061035156 )
        {
          ++v29;
          v30 += 4;
          if ( v29 >= (int)v28 )
            goto LABEL_20;
        }
LABEL_23:
        v31 = (float *)(a1 + 3);
        v32 = 0;
        while ( fabs(v26 - *(v31 - 1)) >= 0.000061035156
             || fabs(v21 - *v31) >= 0.000061035156
             || fabs(v25 - v31[1]) >= 0.000061035156 )
        {
          LODWORD(v28) = *a1;
          ++v32;
          v31 += 4;
          if ( v32 >= *a1 )
            goto LABEL_28;
        }
        goto LABEL_31;
      }
LABEL_20:
      if ( (int)v28 < 2048 )
      {
        v28 *= 2;
        *(float *)&a1[2 * v28 + 2] = v18;
        *(float *)&a1[2 * v28 + 3] = v20;
        *(float *)&a1[2 * v28 + 4] = v25;
        LODWORD(v28) = *a1 + 1;
        *a1 = v28;
      }
      v29 = v28 - 1;
      if ( (int)v28 > 0 )
        goto LABEL_23;
LABEL_28:
      if ( (int)v28 < 2048 )
      {
        v28 = 2LL * (int)v28;
        *(float *)&a1[2 * v28 + 2] = v26;
        *(float *)&a1[2 * v28 + 3] = v21;
        *(float *)&a1[2 * v28 + 4] = v25;
        LODWORD(v28) = *a1 + 1;
        *a1 = v28;
      }
      v32 = v28 - 1;
LABEL_31:
      v33 = 0;
      if ( (int)v28 <= 0 )
      {
LABEL_37:
        if ( (int)v28 < 2048 )
        {
          v28 = 2LL * (int)v28;
          *(float *)&a1[2 * v28 + 2] = v26;
          *(float *)&a1[2 * v28 + 3] = v22;
          *(float *)&a1[2 * v28 + 4] = v24;
          LODWORD(v28) = *a1 + 1;
          *a1 = v28;
        }
        v33 = v28 - 1;
      }
      else
      {
        v34 = (float *)(a1 + 3);
        while ( fabs(v26 - *(v34 - 1)) >= 0.000061035156
             || fabs(v22 - *v34) >= 0.000061035156
             || fabs(v24 - v34[1]) >= 0.000061035156 )
        {
          LODWORD(v28) = *a1;
          ++v33;
          v34 += 4;
          if ( v33 >= *a1 )
            goto LABEL_37;
        }
      }
      v35 = 0;
      if ( (int)v28 <= 0 )
      {
LABEL_46:
        if ( (int)v28 < 2048 )
        {
          v28 = 2LL * (int)v28;
          *(float *)&a1[2 * v28 + 2] = v18;
          *(float *)&a1[2 * v28 + 3] = v23;
          *(float *)&a1[2 * v28 + 4] = v24;
          LODWORD(v28) = *a1 + 1;
          *a1 = v28;
        }
        v35 = v28 - 1;
      }
      else
      {
        v36 = (float *)(a1 + 3);
        while ( fabs(v18 - *(v36 - 1)) >= 0.000061035156
             || fabs(v23 - *v36) >= 0.000061035156
             || fabs(v24 - v36[1]) >= 0.000061035156 )
        {
          LODWORD(v28) = *a1;
          ++v35;
          v36 += 4;
          if ( v35 >= *a1 )
            goto LABEL_46;
        }
      }
      v37 = v21 - v20;
      v38 = v26 - v18;
      v39 = v24 - v25;
      v40 = v22 - v20;
      a1[8 * a1[8193] + 8194] = 3;
      a1[8 * a1[8193] + 8195] = v29;
      a1[8 * a1[8193] + 8196] = v32;
      a1[8 * a1[8193] + 8197] = v33;
      v41 = (float *)&a1[8 * a1[8193] + 8199];
      *v41 = -(float)(v39 * v37);
      v41[1] = v39 * v38;
      v41[2] = (float)(v37 * v38) - (float)(v40 * v38);
      sub_14007A240((__int64)v41, v41);
      v42 = a1[8193];
      v43 = v23 - v20;
      a1[8193] = v42 + 1;
      a1[8 * v42 + 8202] = 3;
      a1[8 * a1[8193] + 8195] = v29;
      a1[8 * a1[8193] + 8196] = v33;
      a1[8 * a1[8193] + 8197] = v35;
      v44 = (float *)&a1[8 * a1[8193] + 8199];
      *v44 = (float)(v43 * v39) - (float)(v39 * v40);
      v44[1] = v39 * v38;
      v44[2] = -(float)(v43 * v38);
      sub_14007A240((__int64)v44, v44);
      ++a1[8193];
      v4 = a2;
LABEL_50:
      ++v9;
    }
    while ( v9 <= v7 );
    result = v46;
    v6 = v47;
LABEL_52:
    ++v8;
  }
  while ( v8 <= v6 );
  return result;
}
#undef v46
#undef v47

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D0C10) ----------------------------------------------------
double            sub_1400D0C10(signed int a1, signed int a2, int a3)
{
  double result; // xmm0_8
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // r12d
  int v10; // r13d
  int v11; // edi
  unsigned int v12; // r15d
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // ebp
  float v17; // xmm10_4
  float v18; // xmm11_4
  __int64 v19; // rcx
  __int64 v20; // r11
  unsigned int v21; // r9d
  unsigned int v22; // esi
  unsigned int v23; // ebx
  float v24; // xmm12_4
  float v25; // xmm7_4
  int v26; // ecx
  int v27; // r10d
  int v28; // edx
  int v29; // r12d
  int v30; // eax
  unsigned int v31; // ebx
  int v32; // r14d
  float v33; // xmm8_4
  int v34; // r8d
  float v35; // xmm1_4
  __int64 v36; // rdi
  int v37; // eax
  unsigned int v38; // r9d
  unsigned int v39; // r11d
  float v40; // xmm4_4
  int v41; // r11d
  unsigned int v42; // r8d
  float v43; // xmm0_4
  int v44; // r8d
  float v45; // xmm4_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  float v48; // xmm2_4
  float v49; // xmm5_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  float v52; // xmm4_4
  int v53; // r12d
  int v54; // edx
  signed int v55; // ebx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D0C10[288];
#define v59 (*(int (*))(void *)(sr_frame_1400D0C10 + 0)) /* [rsp+20h] */
#define v60 (*(int (*))(void *)(sr_frame_1400D0C10 + 4)) /* [rsp+24h] */
#define v61 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 8)) /* [rsp+28h] */
#define v62 (*(__int16 (*))(void *)(sr_frame_1400D0C10 + 12)) /* [rsp+2Ch] */
#define v63 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 16)) /* [rsp+30h] */
#define v64 (*(int (*))(void *)(sr_frame_1400D0C10 + 20)) /* [rsp+34h] */
#define v65 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 24)) /* [rsp+38h] */
#define v66 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 28)) /* [rsp+3Ch] */
#define v67 (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 32)) /* [rsp+40h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 40)) /* [rsp+48h] */
#define v69 (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 48)) /* [rsp+50h] */
#define v70 (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 56)) /* [rsp+58h] */
#define v73 (*(int (*))(void *)(sr_frame_1400D0C10 + 272)) /* [rsp+130h] */
#define v74 (*(int (*))(void *)(sr_frame_1400D0C10 + 280)) /* [rsp+138h] */

  v4 = a2;
  v5 = a1;
  v6 = 13LL * a2;
  v7 = a3;
  v68 = a3;
  v70 = a3 + v6 + 3336LL * a1;
  v8 = (int)dword_140404A6C[v70 + 272034690];
  if ( (_DWORD)v8 != -1 )
  {
    dword_140404A6C[24582 * a3 + 271838029 + 3 * v8] = 4;
    return result;
  }
  v9 = -1;
  v10 = 0;
  v11 = 0;
  v12 = -1;
  v13 = 1 << a3;
  v14 = 98328 * v7;
  v15 = 3336LL * a1;
  v69 = v14;
  v16 = v13 - 1;
  *(unsigned int *)((char *)&dword_140404A6C[271838021] + v14) = 6;
  v17 = *(float *)&dword_140404A6C[v15 + 272034677];
  v18 = *(float *)&dword_140404A6C[v15 + 272034678];
  v19 = v15 * 4 + 52 * v4;
  v20 = *(_QWORD *)&dword_140404A6C[3336 * v5 + 272034683];
  LODWORD(v14) = dword_140404A6C[3336 * v5 + 272034680] << 11;
  v21 = *(unsigned int *)((char *)&dword_140404A6C[272034689] + v19) << 7;
  v22 = *(unsigned int *)((char *)&dword_140404A6C[272034688] + v19) << 7;
  v23 = dword_140404A6C[v15 + 272034681] << 11;
  v24 = *(float *)&dword_140404A6C[v15 + 272034679];
  v74 = v14;
  v66 = v23;
  v73 = v13;
  v25 = 1.0 / (float)((float)(v13 - 1) + 1.0);
  v59 = 0;
  v65 = v21;
  v60 = -1;
  v67 = v20;
  do
  {
    if ( v9 >= 0 )
    {
      v26 = v9;
      if ( v9 > 128 )
        v26 = 128;
    }
    else
    {
      v26 = 0;
    }
    v27 = -1;
    v28 = 2049 * (v26 + v21);
    v29 = v21 + v26 + v23;
    v64 = v28;
    v30 = v21 + v23 + v26 - v16 - 1;
    v31 = -1;
    v62 = v30;
    v63 = (v13 + v29) >> 11;
    v32 = 6 * v11;
    v61 = v30 >> 11;
    v33 = (float)(int)(v26 + v21) + v24;
    do
    {
      if ( v27 >= 0 )
      {
        v34 = v27;
        if ( v27 > 128 )
          v34 = 128;
      }
      else
      {
        v34 = 0;
      }
      if ( v31 > 0x80 || v12 > 0x80 )
        v35 = *(float *)(v20 + 4LL * (int)(v22 + v28 + v34)) - 16.0;
      else
        v35 = *(float *)(v20 + 4LL * (int)(v22 + v28 + v34));
      v36 = v32;
      v37 = v74 + v34 - v16;
      *(float *)&dword_140404A6C[v32 + 271182638] = v35 + v18;
      *(float *)&dword_140404A6C[v32 + 271182639] = v33;
      *(float *)&dword_140404A6C[v32 + 271182637] = v17 + (float)(int)(v34 + v22);
      v38 = v29 >> 11;
      v39 = (int)(v37 + v22 - 1) >> 11;
      if ( v39 > 7 || v38 > 7 )
        v40 = 0.0;
      else
        v40 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v39 + 8 * v38) + 272034683]
                       + 4LL * (2049 * (v29 & 0x7FF) + (((_WORD)v37 + (_WORD)v22 - 1) & 0x7FFu)));
      v41 = v22 + v34 + v74;
      v42 = (v41 + v73) >> 11;
      if ( v42 > 7 || v38 > 7 )
        v43 = 0.0;
      else
        v43 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v42 + 8 * v38) + 272034683]
                       + 4LL * (2049 * (v29 & 0x7FF) + (((_WORD)v41 + (_WORD)v73) & 0x7FFu)));
      v44 = v41 >> 11;
      v45 = (float)(v40 - v43) * v25;
      if ( (unsigned int)(v41 >> 11) > 7 )
      {
        v46 = 0.0;
      }
      else
      {
        if ( v61 > 7 )
          v46 = 0.0;
        else
          v46 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v44 + 8 * v61) + 272034683]
                         + 4LL * ((v41 & 0x7FF) + 2049 * (v62 & 0x7FFu)));
        if ( v63 <= 7 )
        {
          v47 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v44 + 8 * v63) + 272034683]
                         + 4LL * ((v41 & 0x7FF) + 2049 * (((_WORD)v29 + (_WORD)v73) & 0x7FFu)));
          goto LABEL_33;
        }
      }
      v47 = 0.0;
LABEL_33:
      v48 = (float)(v46 - v47) * v25;
      v49 = fsqrt((float)((float)(v45 * v45) + 1.0) + (float)(v48 * v48));
      if ( v49 == 0.0 )
      {
        v51 = 0.0;
        v50 = 0.0;
        v52 = 0.0;
      }
      else
      {
        v50 = 1.0 / v49;
        v51 = (float)(1.0 / v49) * v45;
        v52 = (float)(1.0 / v49) * v48;
      }
      v32 += 6;
      *(float *)&dword_140404A6C[v36 + 271182640] = v51;
      *(float *)&dword_140404A6C[v36 + 271182641] = v50;
      *(float *)&dword_140404A6C[v36 + 271182642] = v52;
      v11 = ++v59;
      if ( v31 <= 0x7F )
      {
        v27 += v16;
        v31 += v16;
      }
      v28 = v64;
      ++v27;
      v20 = v67;
      ++v31;
    }
    while ( v27 <= 129 );
    v53 = v60;
    if ( v12 <= 0x7F )
    {
      v53 = v16 + v60;
      v12 += v16;
    }
    v13 = v73;
    v9 = v53 + 1;
    v21 = v65;
    ++v12;
    v23 = v66;
    v60 = v9;
  }
  while ( v9 <= 129 );
  v54 = *(unsigned int *)((char *)&dword_140404A6C[271838023] + v69);
  v55 = (v54 - 1) & (*(unsigned int *)((char *)&dword_140404A6C[271838026] + v69) + 1);
  *(unsigned int *)((char *)&dword_140404A6C[271838026] + v69) = v55;
  if ( v54 > 0 )
  {
    do
    {
      if ( (int)dword_140404A6C[24582 * v68 + 271838029 + 3 * v55] <= 0 )
        break;
      v55 = (v54 - 1) & (v55 + 1);
      ++v10;
      *(unsigned int *)((char *)&dword_140404A6C[271838026] + v69) = v55;
    }
    while ( v10 < v54 );
  }
  v56 = v55 + 8194 * v68;
  v57 = (int)dword_140404A6C[3 * v56 + 271838027];
  if ( (unsigned int)v57 <= 0x3F )
  {
    v58 = (int)dword_140404A6C[3 * v56 + 271838028];
    if ( (unsigned int)v58 <= 0xFF )
      dword_140404A6C[3336 * v57 + 272034690 + 13 * v58 + v68] = -1;
  }
  dword_140404A6C[3 * v56 + 271838027] = a1;
  dword_140404A6C[3 * v56 + 271838028] = a2;
  dword_140404A6C[3 * v56 + 271838029] = 4;
  dword_140404A6C[v70 + 272034690] = v55;
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v68 + 283791752] + 283793813], 3 * v56);
  return qword_140404198(
           34962,
           (int)(v55 * *(unsigned int *)((char *)&dword_140404A6C[271838025] + v69)),
           (int)(4 * *(unsigned int *)((char *)&dword_140404A6C[271838021] + v69) * v11),
           &dword_140404A6C[271182637]);
}
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
#undef v69
#undef v70
#undef v73
#undef v74

// 1400D250E: variable 'v1' is possibly undefined
// 1400D2529: variable 'v11' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404308: using guessed type __int64 (__fastcall *qword_140404308)(_QWORD, _QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 1404047F0: using guessed type __int64 (__fastcall *unk_1404047F0)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D26A0) ----------------------------------------------------
unsigned int *           sub_1400D26A0(float *a1)
{
  int v1; // r8d
  float *v2; // r9
  unsigned int *v3; // rdx
  int v4; // edx
  unsigned int *v5; // rcx
  int v6; // edx
  unsigned int *v7; // rcx
  int v8; // edx
  unsigned int *v9; // rcx
  int v10; // edx
  unsigned int *v11; // rcx
  int v12; // edx
  unsigned int *v13; // rcx
  int v14; // edx
  unsigned int *v15; // rcx
  unsigned int *result; // rax
  float *v17; // r15
  signed int v18; // r12d
  __int64 v19; // r13
  int v20; // r14d
  __int64 v21; // rbp
  _DWORD *v22; // rdi
  int v23; // esi
  __int64 i; // rbx
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm3_4
  int v28; // r8d
  __int64 v29; // rcx
  unsigned int *v30; // rdx
  signed int v31; // edx
  unsigned int *v33; // [rsp+F8h] [rbp+10h]

  v1 = 0;
  v2 = a1;
  dword_140404A6C[271166181] = 0;
  if ( (int)dword_140404A6C[271838023] > 0 )
  {
    v3 = &dword_140404A6C[271838029];
    do
    {
      if ( (*(v3 - 2) & 0x80000000) != 0 )
      {
        *v3 = 0;
      }
      else if ( (int)*v3 > 0 )
      {
        --*v3;
      }
      ++v1;
      v3 += 3;
    }
    while ( v1 < (int)dword_140404A6C[271838023] );
  }
  v4 = 0;
  dword_140404A6C[271166182] = 0;
  if ( (int)dword_140404A6C[271862605] > 0 )
  {
    v5 = &dword_140404A6C[271862611];
    do
    {
      if ( (*(v5 - 2) & 0x80000000) != 0 )
      {
        *v5 = 0;
      }
      else if ( (int)*v5 > 0 )
      {
        --*v5;
      }
      ++v4;
      v5 += 3;
    }
    while ( v4 < (int)dword_140404A6C[271862605] );
  }
  v6 = 0;
  dword_140404A6C[271166183] = 0;
  if ( (int)dword_140404A6C[271887187] > 0 )
  {
    v7 = &dword_140404A6C[271887193];
    do
    {
      if ( (*(v7 - 2) & 0x80000000) != 0 )
      {
        *v7 = 0;
      }
      else if ( (int)*v7 > 0 )
      {
        --*v7;
      }
      ++v6;
      v7 += 3;
    }
    while ( v6 < (int)dword_140404A6C[271887187] );
  }
  v8 = 0;
  dword_140404A6C[271166184] = 0;
  if ( (int)dword_140404A6C[271911769] > 0 )
  {
    v9 = &dword_140404A6C[271911775];
    do
    {
      if ( (*(v9 - 2) & 0x80000000) != 0 )
      {
        *v9 = 0;
      }
      else if ( (int)*v9 > 0 )
      {
        --*v9;
      }
      ++v8;
      v9 += 3;
    }
    while ( v8 < (int)dword_140404A6C[271911769] );
  }
  v10 = 0;
  dword_140404A6C[271166185] = 0;
  if ( (int)dword_140404A6C[271936351] > 0 )
  {
    v11 = &dword_140404A6C[271936357];
    do
    {
      if ( (*(v11 - 2) & 0x80000000) != 0 )
      {
        *v11 = 0;
      }
      else if ( (int)*v11 > 0 )
      {
        --*v11;
      }
      ++v10;
      v11 += 3;
    }
    while ( v10 < (int)dword_140404A6C[271936351] );
  }
  v12 = 0;
  dword_140404A6C[271166186] = 0;
  if ( (int)dword_140404A6C[271960933] > 0 )
  {
    v13 = &dword_140404A6C[271960939];
    do
    {
      if ( (*(v13 - 2) & 0x80000000) != 0 )
      {
        *v13 = 0;
      }
      else if ( (int)*v13 > 0 )
      {
        --*v13;
      }
      ++v12;
      v13 += 3;
    }
    while ( v12 < (int)dword_140404A6C[271960933] );
  }
  v14 = 0;
  dword_140404A6C[271166187] = 0;
  if ( (int)dword_140404A6C[271985515] > 0 )
  {
    v15 = &dword_140404A6C[271985521];
    do
    {
      if ( (*(v15 - 2) & 0x80000000) != 0 )
      {
        *v15 = 0;
      }
      else if ( (int)*v15 > 0 )
      {
        --*v15;
      }
      ++v14;
      v15 += 3;
    }
    while ( v14 < (int)dword_140404A6C[271985515] );
  }
  result = &dword_140404A6C[271166189];
  v17 = (float *)&dword_140404A6C[272034679];
  v18 = 0;
  v19 = 0;
  v33 = &dword_140404A6C[271166189];
  do
  {
    if ( (float)((float)((float)((float)(v2[1] - *(v17 - 1)) * (float)(v2[1] - *(v17 - 1)))
                       + (float)((float)(*v2 - (float)(*(v17 - 2) + 1024.0))
                               * (float)(*v2 - (float)(*(v17 - 2) + 1024.0))))
               + (float)((float)(v2[2] - (float)(*v17 + 1024.0)) * (float)(v2[2] - (float)(*v17 + 1024.0)))) >= 16777216.0 )
    {
      *result = 0;
      goto LABEL_78;
    }
    v20 = 0;
    *result = 1;
    v21 = 0;
    v22 = v17 + 10;
    do
    {
      v23 = 0;
      for ( i = 0; i < 16; ++i )
      {
        v25 = *v2 - (float)((float)((float)(int)(*(v22 - 1) << 7) + *(v17 - 2)) + 64.0);
        v26 = (float)((float)(int)(*v22 << 7) + *v17) + 64.0;
        v27 = (float)((float)(v25 * v25) + (float)((float)(v2[1] - *(v17 - 1)) * (float)(v2[1] - *(v17 - 1))))
            + (float)((float)(v2[2] - v26) * (float)(v2[2] - v26));
        if ( v27 >= 262144.0 )
        {
          if ( v27 >= 589824.0 )
          {
            if ( v27 >= 1048576.0 )
            {
              if ( v27 >= 2359296.0 )
              {
                if ( v27 >= 4194304.0 )
                {
                  if ( v27 >= 9437184.0 )
                  {
                    v29 = 6;
                    v28 = 6;
                    goto LABEL_73;
                  }
                  v29 = 5;
                }
                else
                {
                  v29 = 4;
                }
              }
              else
              {
                v29 = 3;
              }
            }
            else
            {
              v29 = 2;
            }
          }
          else
          {
            v29 = 1;
          }
          v28 = v29;
        }
        else
        {
          v28 = 0;
          v29 = 0;
        }
        v30 = &dword_140404A6C[24582 * v29 + 271838023];
        do
        {
          if ( (int)dword_140404A6C[v29 + 271166181] < (int)*v30 )
            break;
          ++v28;
          ++v29;
          v30 += 24582;
        }
        while ( (__int64)v30 < (__int64)&dword_140404A6C[271985515] );
LABEL_73:
        v31 = dword_140404A6C[v29 + 271166181];
        if ( v31 < (int)dword_140404A6C[24582 * v29 + 271838023] )
        {
          dword_140404A6C[v29 + 271166181] = v31 + 1;
          dword_140404A6C[i + 271166190 + v19 + v21] = v28;
          sub_1400D0C10(v18, v20 + v23, v28);
          v2 = a1;
        }
        ++v23;
        v22 += 13;
      }
      v20 += 16;
      v21 += 16;
    }
    while ( v20 < 256 );
    result = v33;
LABEL_78:
    result += 257;
    ++v18;
    v17 += 3336;
    v33 = result;
    v19 += 257;
  }
  while ( v18 < 64 );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 180E6F600: using guessed type unsigned int;
// 180E6F604: using guessed type unsigned int;
// 180E6F608: using guessed type unsigned int;
// 180E6F60C: using guessed type unsigned int;
// 180E6F610: using guessed type unsigned int;
// 180E6F614: using guessed type unsigned int;
// 180E6F618: using guessed type unsigned int;

//----- (00000001400D2B90) ----------------------------------------------------
__int64            sub_1400D2B90(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D2B90[80];
#define v5 (*(_DWORD (*)[10])(void *)(sr_frame_1400D2B90 + 0)) /* [rsp+0h] */
#define v6 (*(__int64 (*))(void *)(sr_frame_1400D2B90 + 40)) /* [rsp+28h] */
#define v7 (*(__int128 (*))(void *)(sr_frame_1400D2B90 + 48)) /* [rsp+30h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_1400D2B90 + 64)) /* [rsp+40h] */

  v1 = a1;
  v7 = xmmword_140279700;
  unk_140404470(2, &v7);
  qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[283791483] + 283793814], v2);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v1 + 283791496] + 283793813], v3);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(0));
  v6 = 12;
  v5[8] = 24;
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(12));
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(uint32_t)(3 * dword_140404A6C[271911768]),5125,NULL);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v5
#undef v6
#undef v7
#undef v8

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D3190) ----------------------------------------------------
__int64 sub_1400D3190()
{
  int v0; // ebp
  unsigned int *v1; // r14
  unsigned int *v2; // r15
  __int64 v3; // r12
  __int64 v4; // r8
  int v5; // r11d
  int v6; // esi
  int v7; // ebx
  __int64 v8; // rdi
  int v9; // ecx
  int v10; // r9d
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int64 result; // rax

  v0 = 1;
  v1 = &dword_140404A6C[283791480];
  v2 = &dword_140404A6C[271838022];
  v3 = 7;
  do
  {
    v4 = 0;
    dword_140404A6C[271575869] = 0;
    v5 = 0;
    v6 = 128 / v0;
    v7 = 128 / v0 + 2;
    if ( v7 > 0 )
    {
      do
      {
        ++v5;
        v8 = (unsigned int)v7;
        v9 = (v6 + 3) * v5 + 1;
        do
        {
          v10 = v9 - 1 - (v6 + 3);
          dword_140404A6C[3 * (_DWORD)v4 + 271575870] = v10;
          dword_140404A6C[3 * dword_140404A6C[271575869] + 271575871] = v9 - (v6 + 3);
          v11 = v9 - 1;
          dword_140404A6C[3 * dword_140404A6C[271575869]++ + 271575872] = v9;
          dword_140404A6C[3 * dword_140404A6C[271575869] + 271575870] = v10;
          dword_140404A6C[3 * dword_140404A6C[271575869] + 271575871] = v9++;
          dword_140404A6C[3 * dword_140404A6C[271575869] + 271575872] = v11;
          v4 = ++dword_140404A6C[271575869];
          --v8;
        }
        while ( v8 );
      }
      while ( v5 < v7 );
    }
    v12 = (int)*v1;
    *v2 = v4;
    qword_140404170(34963, dword_140404A6C[2 * v12 + 283793814], v4);
    result = unk_140404190(34963, 12 * dword_140404A6C[271575869], &dword_140404A6C[271575870], 35044);
    v0 = __ROL4__(v0, 1);
    v2 += 24582;
    ++v1;
    --v3;
  }
  while ( v3 );
  return result;
}

// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 180FFF760: using guessed type unsigned int;

//----- (00000001400D3340) ----------------------------------------------------
void            sub_1400D3340(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  signed int v12; // r10d
  float v13; // xmm11_4
  signed int v14; // esi
  int v15; // r15d
  int v16; // edi
  unsigned int v17; // eax
  int v18; // ebp
  float v19; // xmm14_4
  signed int v20; // r14d
  float v21; // xmm15_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm12_4
  int v25; // ebx
  float v26; // xmm7_4
  int v27; // edi
  unsigned int *v28; // r9
  __int64 v29; // r10
  __int64 v30; // r11
  unsigned int *v31; // rdx
  __int64 v32; // r8
  unsigned int *v33; // rax
  __int64 v34; // rcx
  int v35; // r8d
  int v36; // ecx
  int v37; // r12d
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  int v41; // r15d
  __int64 v42; // rcx
  float v43; // xmm0_4
  float v44; // xmm14_4
  float v45; // xmm13_4
  float v46; // xmm15_4
  int v47; // ebp
  float v48; // xmm12_4
  __int64 v49; // r14
  int v50; // edi
  __int64 v51; // rbx
  float v52; // xmm7_4
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // r13d
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // r12d
  __int64 v62; // r8
  __int64 v63; // r15
  __int64 i; // r11
  __int64 v65; // rbp
  signed int v66; // esi
  unsigned int *v67; // r9
  unsigned int v68; // edi
  float v69; // xmm5_4
  float v70; // xmm7_4
  float v71; // xmm4_4
  unsigned int v72; // xmm3_4
  float v73; // xmm4_4
  float v74; // xmm2_4
  float v75; // xmm4_4
  __int64 v76; // r10
  unsigned int *v77; // r14
  __int64 v78; // r15
  int v79; // r13d
  int v80; // esi
  signed int v81; // r11d
  __int64 v82; // rbp
  unsigned int *v83; // rbx
  int v84; // edi
  int v85; // r10d
  unsigned int v86; // r8d
  float v87; // xmm5_4
  __int64 v88; // rbx
  __int64 v89; // rcx
  __int64 v90; // r14
  char *v91; // rdx
  float v92; // xmm5_4
  float v93; // xmm7_4
  float v94; // xmm1_4
  float v95; // xmm1_4
  float v96; // xmm0_4
  float v97; // xmm1_4
  __int64 v98; // rcx
  unsigned int v99; // eax
  float *v100; // rax
  __int64 v101; // rcx
  float v102; // xmm0_4
  int v103; // eax
  int v104; // edx
  unsigned int v105; // ecx
  unsigned int v106; // r8d
  float v107; // xmm2_4
  float v108; // xmm4_4
  int v109; // edx
  int v110; // r9d
  unsigned int v111; // ecx
  float v112; // xmm7_4
  float v113; // xmm2_4
  float v114; // xmm3_4
  float *v115; // rax
  __int64 v116; // rcx
  float v117; // xmm2_4
  float v118; // xmm2_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D3340[336];
#define v119 (*(int (*))(void *)(sr_frame_1400D3340 + 0)) /* [rsp+20h] */
#define v120 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 8)) /* [rsp+28h] */
#define v121 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 8)) /* [rsp+28h] */
#define v122 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 16)) /* [rsp+30h] */
#define v123 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 16)) /* [rsp+30h] */
#define v124 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 24)) /* [rsp+38h] */
#define v125 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 24)) /* [rsp+38h] */
#define v126 (*(float (*))(void *)(sr_frame_1400D3340 + 32)) /* [rsp+40h] */
#define v127 (*(int (*))(void *)(sr_frame_1400D3340 + 36)) /* [rsp+44h] */
#define v128 (*(int (*))(void *)(sr_frame_1400D3340 + 40)) /* [rsp+48h] */
#define v129 (*(signed int (*))(void *)(sr_frame_1400D3340 + 44)) /* [rsp+4Ch] */
#define v130 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 48)) /* [rsp+50h] */
#define v131 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 56)) /* [rsp+58h] */
#define v132 (*(signed int (*))(void *)(sr_frame_1400D3340 + 304)) /* [rsp+150h] */
#define v133 (*(int (*))(void *)(sr_frame_1400D3340 + 312)) /* [rsp+158h] */
#define v134 (*(float (*))(void *)(sr_frame_1400D3340 + 320)) /* [rsp+160h] */
#define v135 (*(int (*))(void *)(sr_frame_1400D3340 + 320)) /* [rsp+160h] */
#define v136 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 320)) /* [rsp+160h] */
#define v137 (*(float (*))(void *)(sr_frame_1400D3340 + 328)) /* [rsp+168h] */
#define v138 (*(int (*))(void *)(sr_frame_1400D3340 + 328)) /* [rsp+168h] */
#define v139 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 328)) /* [rsp+168h] */

  v1 = 136LL * a1;
  v124 = v1;
  v2 = *(int *)((char *)&dword_140404A6C[225391236] + v1);
  if ( (_DWORD)v2 == -1 )
    return;
  v3 = (int)dword_140404A6C[396 * v2 + 225426057];
  if ( dword_140404A6C[34 * v3 + 225391237] == -1 )
  {
    v4 = (int)dword_140404A6C[34 * v3 + 225391236];
    if ( (_DWORD)v4 == -1 )
      return;
    v3 = (int)dword_140404A6C[396 * v4 + 225426057];
    if ( dword_140404A6C[34 * v3 + 225391237] == -1 )
      return;
  }
  v5 = *(int *)((char *)&dword_140404A6C[225391237] + v1);
  if ( (_DWORD)v5 == -1 )
    return;
  v6 = (int)dword_140404A6C[396 * v5 + 225426057];
  if ( dword_140404A6C[34 * v6 + 225391236] == -1 )
  {
    v7 = (int)dword_140404A6C[34 * v6 + 225391237];
    if ( (_DWORD)v7 == -1 )
      return;
    v6 = (int)dword_140404A6C[396 * v7 + 225426057];
    if ( dword_140404A6C[34 * v6 + 225391236] == -1 )
      return;
  }
  v8 = 34 * v6;
  v9 = (int)dword_140404A6C[34 * v6 + 225391236];
  if ( (_DWORD)v9 == -1 )
    return;
  v10 = (int)dword_140404A6C[396 * v9 + 225426057];
  if ( dword_140404A6C[34 * v10 + 225391239] == -1 )
  {
    v11 = (int)dword_140404A6C[34 * v10 + 225391236];
    if ( (_DWORD)v11 == -1 )
      return;
    v10 = (int)dword_140404A6C[396 * v11 + 225426057];
    if ( dword_140404A6C[34 * v10 + 225391239] == -1 )
      return;
  }
  v12 = 4
      * (*(unsigned int *)((char *)&dword_140404A6C[225391240] + v1)
       + *(unsigned int *)((char *)&dword_140404A6C[225391230] + v1))
      + 4096;
  v13 = 0.0;
  v132 = v12;
  v14 = 4 * (dword_140404A6C[34 * v3 + 225391230] - dword_140404A6C[34 * v3 + 225391240]) + 4096;
  v15 = v14 - v12;
  v133 = v14 - v12;
  v16 = 4
      * (*(unsigned int *)((char *)&dword_140404A6C[225391232] + v1)
       + *(unsigned int *)((char *)&dword_140404A6C[225391241] + v1))
      + 4096;
  v17 = dword_140404A6C[v8 + 225391232] - dword_140404A6C[v8 + 225391241];
  v119 = v16;
  v18 = 4 * v17 + 4096;
  v19 = (float)((float)*(int *)((char *)&dword_140404A6C[225391231] + v1) * 4.0) + 4.25;
  v20 = 4 * v17
      - 4
      * (*(unsigned int *)((char *)&dword_140404A6C[225391232] + v1)
       + *(unsigned int *)((char *)&dword_140404A6C[225391241] + v1));
  v21 = (float)((float)(int)dword_140404A6C[34 * v3 + 225391231] * 4.0) + 4.25;
  v129 = v20;
  v22 = (float)((float)(int)dword_140404A6C[v8 + 225391231] * 4.0) + 4.25;
  v134 = v22;
  v23 = (float)((float)(int)dword_140404A6C[34 * v10 + 225391231] * 4.0) + 4.25;
  v137 = v23;
  v24 = 1.0 / (float)(v14 - v12);
  if ( v16 <= v18 )
  {
    do
    {
      v25 = v12;
      v26 = 0.0;
      if ( v12 <= v14 )
      {
        do
        {
          sub_1400D2DB0(
            v25++,
            v16,
            (float)((float)(1.0 - v26) * (float)((float)(v22 * v13) + (float)(v19 * (float)(1.0 - v13))))
          + (float)((float)((float)(v23 * v13) + (float)(v21 * (float)(1.0 - v13))) * v26));
          v26 = v26 + v24;
        }
        while ( v25 <= v14 );
        v22 = v134;
        v23 = v137;
        v12 = v132;
      }
      ++v16;
      v13 = v13 + (float)(1.0 / (float)v20);
    }
    while ( v16 <= v18 );
    v1 = v124;
  }
  v27 = v20 >> 2;
  v128 = v20 >> 2;
  if ( v20 >> 2 >= 0 )
  {
    v28 = &dword_140404A6C[18601940];
    v29 = (__int64)v15 >> 2;
    v30 = v27 + 1LL;
    do
    {
      if ( v29 >= 0 )
      {
        v31 = v28;
        v32 = v29 + 1;
        do
        {
          v33 = v31;
          v34 = 5;
          do
          {
            *(v33 - 7) = 0;
            *v33 = 0;
            v33[7] = 0;
            v33[14] = 0;
            v33[21] = 0;
            v33 += 1792;
            --v34;
          }
          while ( v34 );
          v31 += 28;
          --v32;
        }
        while ( v32 );
      }
      v28 += 7168;
      --v30;
    }
    while ( v30 );
  }
  v35 = 0;
  v138 = 0;
  if ( v27 > 0 )
  {
    v36 = v15 >> 2;
    v37 = 0;
    v38 = 0;
    v127 = v15 >> 2;
    v122 = 0;
    do
    {
      v39 = 0;
      v40 = 0;
      v135 = 0;
      v120 = 0;
      if ( v36 > 0 )
      {
        v41 = 0;
        do
        {
          v42 = (int)(*(unsigned int *)((char *)&dword_140404A6C[225391240] + v1)
                    + v39
                    + *(unsigned int *)((char *)&dword_140404A6C[225391230] + v1)
                    + ((v35
                      + *(unsigned int *)((char *)&dword_140404A6C[225391232] + v1)
                      + *(unsigned int *)((char *)&dword_140404A6C[225391241] + v1)) << 12));
          v43 = *(float *)&dword_140404A6C[v42 + 254388963];
          v44 = *(float *)&dword_140404A6C[v42 + 254388964];
          v45 = *(float *)&dword_140404A6C[v42 + 254393059];
          v46 = *(float *)&dword_140404A6C[v42 + 254393060];
          v126 = v43;
          if ( v43 > 0.0 && v44 > 0.0 && v45 > 0.0 && v46 > 0.0 )
          {
            v47 = 0;
            v131 = 5;
            v48 = 0.0;
            v49 = 112 * (v38 + v40);
            v130 = v49;
            do
            {
              v50 = 0;
              v51 = v49;
              v52 = 0.0;
              v53 = 5;
              do
              {
                v54 = *(int *)((char *)&dword_140404A6C[18601933] + v51);
                if ( !(_DWORD)v54 )
                {
                  *(unsigned int *)((char *)&dword_140404A6C[18601934] + v51) = v41 + v50;
                  *(unsigned int *)((char *)&dword_140404A6C[3 * v54 + 18601935] + v51) = v37 + v47;
                  *(unsigned int *)((char *)&dword_140404A6C[3
                                                           * (*(unsigned int *)((char *)&dword_140404A6C[18601933] + v51))++
                                                           + 18601936]
                                  + v51) = 1065353216;
                  sub_1400D2DB0(
                    v41 + v50 + v132,
                    v119 + v37 + v47,
                    (float)((float)(1.0 - v52) * (float)((float)(v43 * (float)(1.0 - v48)) + (float)(v45 * v48)))
                  + (float)((float)((float)(v44 * (float)(1.0 - v48)) + (float)(v46 * v48)) * v52));
                }
                ++v50;
                v52 = v52 + 0.25;
                v51 += 28;
                --v53;
              }
              while ( v53 );
              v48 = v48 + 0.25;
              v43 = v126;
              v49 = v130 + 7168;
              ++v47;
              v130 += 7168;
              --v131;
            }
            while ( v131 );
            v40 = v120;
            v1 = v124;
            v35 = v138;
            v38 = v122;
          }
          ++v40;
          v36 = v127;
          v39 = v135 + 1;
          v41 += 4;
          v135 = v39;
          v120 = v40;
        }
        while ( v39 < v127 );
        v27 = v128;
      }
      ++v35;
      v38 += 256;
      v37 += 4;
      v138 = v35;
      v122 = v38;
    }
    while ( v35 < v27 );
    v20 = v129;
    v15 = v133;
  }
  v55 = 16;
  v56 = v20;
  v125 = v20;
  v121 = 16;
  do
  {
    v57 = 1;
    v136 = 1;
    v58 = 1;
    if ( v56 <= 1 )
      goto LABEL_76;
    v59 = 7196;
    v123 = 7196;
    do
    {
      v60 = 1;
      v139 = 1;
      v61 = 1;
      if ( v15 <= 1 )
        goto LABEL_74;
      v62 = v59;
      do
      {
        if ( !*(unsigned int *)((char *)&dword_140404A6C[18601933] + v62)
          || *(float *)((char *)&dword_140404A6C[18601936] + v62) < 1.0 )
        {
          v63 = -1;
          while ( 1 )
          {
            for ( i = -1; i <= 1; ++i )
            {
              if ( !v63 && !i )
                continue;
              v65 = 7 * (v60 + i + ((v63 + v57) << 8));
              if ( (int)dword_140404A6C[v65 + 18601933] <= 0 )
                goto LABEL_68;
              v66 = 0;
              v67 = &dword_140404A6C[18601935 + v65];
              do
              {
                v68 = *(v67 - 1);
                v69 = (float)(int)(v68 - v61);
                v70 = (float)(int)(*v67 - v58);
                v71 = fsqrt((float)(v69 * v69) + (float)(v70 * v70));
                *(float *)&v72 = 1.0 - (float)(v71 * 0.0625);
                if ( *(float *)&v72 <= 0.0 )
                  goto LABEL_66;
                if ( v71 == 0.0 )
                {
                  v75 = 0.0;
                  v74 = 0.0;
                }
                else
                {
                  v73 = 1.0 / v71;
                  v74 = v73 * v69;
                  v75 = v73 * v70;
                }
                v76 = *(int *)((char *)&dword_140404A6C[18601933] + v62);
                if ( !(_DWORD)v76 )
                {
                  *(unsigned int *)((char *)&dword_140404A6C[18601934] + v62) = v68;
LABEL_65:
                  *(unsigned int *)((char *)&dword_140404A6C[3
                                                           * *(unsigned int *)((char *)&dword_140404A6C[18601933] + v62)
                                                           + 18601935]
                                  + v62) = *v67;
                  *(unsigned int *)((char *)&dword_140404A6C[3
                                                           * (*(unsigned int *)((char *)&dword_140404A6C[18601933] + v62))++
                                                           + 18601936]
                                  + v62) = v72;
                  goto LABEL_66;
                }
                v88 = 0;
                v89 = -1;
                if ( (int)v76 > 0 )
                {
                  v90 = (unsigned int)v76;
                  v91 = (char *)&dword_140404A6C[18601935] + v62;
                  do
                  {
                    v92 = (float)(*((_DWORD *)v91 - 1) - v61);
                    v93 = (float)(*(_DWORD *)v91 - v58);
                    v94 = fsqrt((float)(v92 * v92) + (float)(v93 * v93));
                    if ( v94 == 0.0 )
                    {
                      v97 = 0.0;
                      v96 = 0.0;
                    }
                    else
                    {
                      v95 = 1.0 / v94;
                      v96 = v95 * v93;
                      v97 = v95 * v92;
                    }
                    if ( (float)((float)(v97 * v74) + (float)(v96 * v75)) > 0.0 )
                    {
                      v89 = -2;
                      if ( *(float *)&v72 > *((float *)v91 + 1) )
                        v89 = v88;
                    }
                    ++v88;
                    v91 += 12;
                    --v90;
                  }
                  while ( v90 );
                  if ( v89 == -2 )
                    goto LABEL_66;
                  if ( v89 != -1 )
                  {
                    v98 = v62 + 12 * v89;
                    *(unsigned int *)((char *)&dword_140404A6C[18601934] + v98) = v68;
                    v99 = *v67;
                    *(unsigned int *)((char *)&dword_140404A6C[18601936] + v98) = v72;
                    *(unsigned int *)((char *)&dword_140404A6C[18601935] + v98) = v99;
                    goto LABEL_66;
                  }
                }
                if ( (int)v76 < 2 )
                {
                  *(unsigned int *)((char *)&dword_140404A6C[3 * v76 + 18601934] + v62) = v68;
                  goto LABEL_65;
                }
LABEL_66:
                ++v66;
                v67 += 3;
              }
              while ( v66 < (int)dword_140404A6C[v65 + 18601933] );
              v60 = v139;
LABEL_68:
              v57 = v136;
            }
            if ( ++v63 > 1 )
            {
              v15 = v133;
              break;
            }
          }
        }
        ++v60;
        ++v61;
        v62 += 28;
        v139 = v60;
      }
      while ( v61 < v15 );
      v59 = v123;
LABEL_74:
      v56 = v125;
      ++v57;
      v59 += 7168;
      v136 = v57;
      ++v58;
      v123 = v59;
    }
    while ( v57 < v125 );
    v55 = v121;
LABEL_76:
    v121 = --v55;
  }
  while ( v55 );
  if ( v56 > 1 )
  {
    v77 = &dword_140404A6C[18603734];
    v78 = v56 - 1;
    v79 = v133;
    v80 = v119 + 1;
    do
    {
      if ( v79 > 1 )
      {
        v81 = v132;
        v82 = (unsigned int)(v79 - 1);
        v83 = v77;
        v84 = v132 + 1;
        do
        {
          v85 = *(v83 - 2);
          if ( v85 > 0 )
          {
            v86 = v80 >> 11;
            if ( (unsigned int)(v84 >> 11) > 7 || v86 > 7 )
              v87 = 0.0;
            else
              v87 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * ((v84 >> 11) + 8 * v86) + 272034683]
                             + 4LL * ((v84 & 0x7FF) + 2049 * (v80 & 0x7FFu)));
            v100 = (float *)(v83 + 1);
            v101 = *(v83 - 2);
            v102 = 0.0;
            do
            {
              v102 = v102 + *v100;
              v100 += 3;
              --v101;
            }
            while ( v101 );
            v103 = v119 + *v83;
            v104 = *(v83 - 1) + v81;
            v105 = v103 >> 11;
            v106 = v104 >> 11;
            if ( v85 <= 1 )
            {
              if ( v106 > 7 || v105 > 7 )
                v114 = 0.0;
              else
                v114 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v106 + 8 * v105) + 272034683]
                                + 4LL * (2049 * (v103 & 0x7FF) + (v104 & 0x7FFu)));
            }
            else
            {
              v107 = *((float *)v83 + 1) / fminf(v102, 1.0);
              if ( v106 > 7 || v105 > 7 )
                v108 = 0.0;
              else
                v108 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v106 + 8 * v105) + 272034683]
                                + 4LL * (2049 * (v103 & 0x7FF) + (v104 & 0x7FFu)));
              v109 = v119 + v83[3];
              v110 = v81 + v83[2];
              v111 = v109 >> 11;
              if ( (unsigned int)(v110 >> 11) > 7 || v111 > 7 )
                v112 = 0.0;
              else
                v112 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * ((v110 >> 11) + 8 * v111) + 272034683]
                                + 4LL * ((v110 & 0x7FF) + 2049 * (v109 & 0x7FFu)));
              v113 = fminf(fmaxf(v107, 0.0), 1.0);
              v114 = (float)((float)(1.0 - (float)((float)(3.0 - (float)(v113 + v113)) * (float)(v113 * v113))) * v112)
                   + (float)(v108 * (float)((float)(3.0 - (float)(v113 + v113)) * (float)(v113 * v113)));
            }
            v115 = (float *)(v83 + 1);
            v116 = *(v83 - 2);
            v117 = 0.0;
            do
            {
              v117 = fmaxf(v117, *v115);
              v115 += 3;
              --v116;
            }
            while ( v116 );
            v118 = fminf(fmaxf(v117, 0.0), 1.0);
            sub_1400D2DB0(
              v84,
              v80,
              (float)((float)(1.0 - (float)((float)(3.0 - (float)(v118 + v118)) * (float)(v118 * v118))) * v87)
            + (float)(v114 * (float)((float)(3.0 - (float)(v118 + v118)) * (float)(v118 * v118))));
            v81 = v132;
          }
          ++v84;
          v83 += 7;
          --v82;
        }
        while ( v82 );
        v79 = v133;
      }
      ++v80;
      v77 += 1792;
      --v78;
    }
    while ( v78 );
  }
}
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
#undef v137
#undef v138
#undef v139

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D40C0) ----------------------------------------------------
double            sub_1400D40C0(double result)
{
  int v1; // esi
  __int64 v2; // rbx
  __int64 v3; // rax
  signed int v4; // edi
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  signed int v7; // r11d
  __int64 i; // r8
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  signed int v15; // eax

  v1 = dword_140404A6C[283830714];
  v2 = 44LL * (int)dword_140404A6C[283830714];
  dword_140404A6C[v2 + 284024933] = 2048;
  dword_140404A6C[v2 + 284024934] = 2048;
  dword_140404A6C[v2 + 284024935] = 1;
  dword_140404A6C[v2 + 284024936] = 6408;
  dword_140404A6C[v2 + 284024937] = 6408;
  dword_140404A6C[v2 + 284024943] = 0;
  dword_140404A6C[v2 + 284024938] = 33071;
  dword_140404A6C[v2 + 284024939] = 33071;
  dword_140404A6C[v2 + 284024940] = 9729;
  dword_140404A6C[v2 + 284024941] = 9987;
  if ( *(_QWORD *)&dword_140404A6C[v2 + 284024945]
    || (v3 = sr_path_malloc(0x1000000), (*(_QWORD *)&dword_140404A6C[v2 + 284024945] = v3) != 0) )
  {
    v4 = 0;
    if ( (int)dword_140404A6C[v2 + 284024934] > 0 )
    {
      v5 = -1;
      v6 = 0;
      do
      {
        v7 = 0;
        for ( i = 0;
              v7 < (int)dword_140404A6C[v2 + 284024933];
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v2 + 284024945] + 4LL * v15) = ((int)(float)((float)(v12 * 127.0)
                                                                                                 + 128.0) << 8)
                                                                                   - ((int)(float)((float)(v14 * 127.0)
                                                                                                 + -128.0) << 16)
                                                                                   - 0x1000000
                                                                                   + (int)(float)((float)(v13 * 127.0)
                                                                                                + 128.0) )
        {
          v9 = 0.0;
          v10 = 0.0;
          if ( (unsigned __int64)(i - 1) <= 0x7FE )
            v9 = (float)(*(float *)&dword_140404A6C[v6 + 188872559 + i] - *(float *)&dword_140404A6C[v6 + 188872561 + i])
               * 0.5;
          if ( v5 <= 0x7FE )
            v10 = (float)(*(float *)&dword_140404A6C[v6 + 188874609 + i] - *(float *)&dword_140404A6C[v6 + 188870511 + i])
                * 0.5;
          v11 = fsqrt((float)((float)(v9 * v9) + 1.0) + (float)(v10 * v10));
          if ( v11 == 0.0 )
          {
            v13 = 0.0;
            v12 = 0.0;
            v14 = 0.0;
          }
          else
          {
            v12 = 1.0 / v11;
            v13 = v9 * (float)(1.0 / v11);
            v14 = v10 * (float)(1.0 / v11);
          }
          ++i;
          v15 = v7 + dword_140404A6C[v2 + 284024933] * (dword_140404A6C[v2 + 284024934] - v4 - 1);
          ++v7;
        }
        ++v4;
        ++v5;
        v6 += 2049;
      }
      while ( v4 < (int)dword_140404A6C[v2 + 284024934] );
    }
    sub_14014D3E0(v1, 0);
    return unk_140404738(3553);
  }
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404738: using guessed type double (__fastcall *unk_140404738)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBF154: using guessed type unsigned int;

//----- (00000001400D4360) ----------------------------------------------------
double            sub_1400D4360(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  double result; // xmm0_8
  unsigned int v7; // eax
  int v8; // esi
  int v9; // ebx
  int v10; // r12d
  int v11; // r13d
  int v12; // r15d
  int v13; // r8d
  int v14; // ebp
  __int64 v15; // r14
  signed int v16; // ecx
  int v17; // edi
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  unsigned int v22; // edx
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rax
  signed int v26; // r10d
  signed int i; // r9d
  __int64 v28; // r8
  signed int v29; // eax
  int v30; // [rsp+C0h] [rbp+8h]

  v7 = dword_140404A6C[283830717];
  v8 = a3;
  v9 = 1024;
  v10 = a3;
  v11 = 0;
  v12 = a3;
  v13 = 0;
  v14 = a3;
  v15 = a1;
  v16 = 1024;
  dword_140404A6C[468765293] = 1024;
  dword_140404A6C[468765294] = 1024;
  v30 = 0;
  do
  {
    v17 = 0;
    if ( v9 > 0 )
    {
      do
      {
        if ( (_DWORD)v15 == dword_140404A6C[283830716] || (_DWORD)v15 == v7 )
        {
          v8 = 151;
          v12 = 84;
          if ( (_DWORD)v15 == v7 && (unsigned int)(v11 - 576) <= 0xBF && (unsigned int)(v17 - 256) <= 0xBF )
          {
            v8 = 123;
            v12 = 123;
          }
          v14 = 255;
          v10 = 123;
        }
        if ( (_DWORD)v15 == dword_140404A6C[283830715] )
        {
          v14 = 0;
          v18 = (((v13 + v17) << 13) ^ (v13 + v17)) * (((v13 + v17) << 13) ^ (v13 + v17));
          v8 = (int)(float)((float)(16.0
                                  - (float)((float)(((15731 * v18 + 789221) * (15731 * v18 + 789221) - 771171059)
                                                  & 0x7FFFFFFF)
                                          * 0.000000014901161))
                          + 192.0);
          v12 = v8;
          v10 = v8;
          *(_QWORD *)&result = SR_VEC_READ_LANES(128, sub_1400384F0((float)v17, (float)v11, 1023), u64)[0];
          v13 = v30;
          if ( *(float *)&result > 0.25 )
          {
            *(float *)&result = (float)(*(float *)&result - 0.25) * 128.0;
            v14 = (int)*(float *)&result;
          }
        }
        if ( dword_140404A6C[293250409] )
        {
          v19 = v14 + (v10 << 16);
          v20 = v12 << 8;
          v21 = v8 << 24;
        }
        else
        {
          v19 = v8 + (v12 << 16);
          v20 = v14 << 24;
          v21 = v10 << 8;
        }
        v22 = v20 + v19 + v21;
        v23 = v17 + v11 * v9;
        ++v17;
        dword_140404A6C[v23 + 468765295] = v22;
        v9 = dword_140404A6C[468765293];
        v7 = dword_140404A6C[283830717];
      }
      while ( v17 < (int)dword_140404A6C[468765293] );
      v16 = dword_140404A6C[468765294];
    }
    v13 += 57;
    ++v11;
    v30 = v13;
  }
  while ( v11 < v16 );
  v24 = 44 * v15;
  dword_140404A6C[v24 + 284024938] = a3;
  dword_140404A6C[v24 + 284024939] = a4;
  dword_140404A6C[v24 + 284024940] = a5;
  dword_140404A6C[v24 + 284024941] = a6;
  dword_140404A6C[v24 + 284024933] = v9;
  dword_140404A6C[v24 + 284024934] = v16;
  dword_140404A6C[v24 + 284024935] = 1;
  dword_140404A6C[v24 + 284024936] = 6408;
  dword_140404A6C[v24 + 284024937] = 6408;
  dword_140404A6C[v24 + 284024943] = 0;
  free(*(void **)&dword_140404A6C[44 * v15 + 284024945]);
  v25 = sr_path_malloc((int)(4 * dword_140404A6C[v24 + 284024933] * dword_140404A6C[v24 + 284024934]));
  v26 = 0;
  *(_QWORD *)&dword_140404A6C[v24 + 284024945] = v25;
  if ( (int)dword_140404A6C[44 * v15 + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[v24 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v24 + 284024945] + 4LL * v29) = dword_140404A6C[v28 + 468765295] )
      {
        v28 = i + v26 * dword_140404A6C[468765293];
        v29 = i + v26 * dword_140404A6C[v24 + 284024933];
        ++i;
      }
      ++v26;
    }
    while ( v26 < (int)dword_140404A6C[v24 + 284024934] );
  }
  if ( a2 )
    sub_14009A370(v15);
  sub_14014D3E0(v15, 1);
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBF160: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (00000001400D4740) ----------------------------------------------------
__int64            sub_1400D4740(__int64 a1)
{
  return ((__int64 (           *)(_QWORD,      char *, __int64, char *,      char *, int))ShellExecuteA)(
           0,
           "open",
           a1,
           Parameters,
           "c:\\",
           1);
}

// 14026E558: invalid function type 'HINSTANCE (__stdcall *ShellExecuteA)(HWND hwnd, LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory, INT nShowCmd)' has been ignored

//----- (00000001400D47A0) ----------------------------------------------------
__m128            sub_1400D47A0(float a1, float a2, int a3)
{
  __int128 v4; // xmm5
  int v5; // r10d
  int v6; // edx
  int v7; // r8d
  int v8; // ebx
  float v9; // xmm7_4
  int v10; // ecx
  int v11; // edx
  int v12; // edi
  int v13; // ecx
  int v14; // r9d

  v4 = 0x3F800000u;
  v5 = (int)a1;
  v6 = 57 * (int)a2;
  v7 = a3 & ((int)a1 + 1);
  v8 = 15731 * (((v6 + v5) << 13) ^ (v6 + v5)) * (((v6 + v5) << 13) ^ (v6 + v5));
  v9 = a1 - (float)(int)a1;
  v10 = (((v7 + v6) << 13) ^ (v7 + v6)) * (((v7 + v6) << 13) ^ (v7 + v6));
  v11 = 57 * (a3 & ((int)a2 + 1));
  v12 = ((15731 * v10 + 789221) * (15731 * v10 + 789221) - 771171059) & 0x7FFFFFFF;
  v13 = (((v11 + v7) << 13) ^ (v11 + v7)) * (((v11 + v7) << 13) ^ (v11 + v7));
  v14 = 15731 * (((v11 + v5) << 13) ^ (v11 + v5)) * (((v11 + v5) << 13) ^ (v11 + v5)) + 789221;
  *(float *)&v4 = (float)((float)((float)((float)(1.0
                                                - (float)((float)(((v8 + 789221) * (v8 + 789221) - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.3132257e-10))
                                        * (float)(1.0 - v9))
                                + (float)((float)(1.0 - (float)((float)v12 * 9.3132257e-10)) * v9))
                        * (float)(1.0 - (float)(a2 - (float)(int)a2)))
                + (float)((float)((float)((float)(1.0
                                                - (float)((float)((v14 * v14 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                        * (float)(1.0 - v9))
                                + (float)((float)(1.0
                                                - (float)((float)(((15731 * v13 + 789221) * (15731 * v13 + 789221)
                                                                 - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.3132257e-10))
                                        * v9))
                        * (float)(a2 - (float)(int)a2));
  return (__m128)v4;
}


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

//----- (00000001400D4A90) ----------------------------------------------------
__int64            sub_1400D4A90(int a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned int v4; // r10d
  int v5; // ecx
  unsigned int *v6; // rax
  int v7; // edx
  __int64 v8; // rdx
  unsigned int *v9; // r11
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r11
  int v14; // eax

  v2 = a2;
  v3 = a1;
  if ( a1 == a2 )
    return 0xFFFFFFFFLL;
  v4 = dword_140404A6C[193074052];
  v5 = 0;
  if ( (int)dword_140404A6C[193074052] <= 0 )
  {
LABEL_9:
    v8 = 3 * v3;
    v9 = &dword_140404A6C[3 * v2 + 193070965];
    if ( dword_140404A6C[3 * v3 + 193070980] == v9[15] )
    {
      dword_140404A6C[13 * dword_140404A6C[193074052] + 193074055] = 1;
      v4 = dword_140404A6C[193074052];
      if ( (int)dword_140404A6C[v8 + 193070982] > (int)v9[17] )
      {
        v11 = v3;
        LODWORD(v3) = v2;
        LODWORD(v2) = v11;
      }
    }
    else if ( dword_140404A6C[v8 + 193070982] != v9[17] )
    {
      return 0xFFFFFFFFLL;
    }
    v12 = 3LL * (int)v3;
    v13 = 3LL * (int)v2;
    if ( dword_140404A6C[v12 + 193070982] == dword_140404A6C[v13 + 193070982] )
    {
      dword_140404A6C[13 * v4 + 193074055] = 0;
      v4 = dword_140404A6C[193074052];
      if ( (int)dword_140404A6C[v12 + 193070980] > (int)dword_140404A6C[v13 + 193070980] )
      {
        v14 = v3;
        LODWORD(v3) = v2;
        LODWORD(v2) = v14;
      }
    }
    dword_140404A6C[13 * v4 + 193074053] = v3;
    dword_140404A6C[13 * dword_140404A6C[193074052] + 193074054] = v2;
    dword_140404A6C[13 * dword_140404A6C[193074052] + 193074056] = dword_140404A6C[193070975];
    dword_140404A6C[13 * dword_140404A6C[193074052] + 193074057] = dword_140404A6C[193070976];
    strcpy((char *)&dword_140404A6C[13 * dword_140404A6C[193074052] + 193074058], "Street");
    return dword_140404A6C[193074052]++;
  }
  v6 = &dword_140404A6C[193074054];
  while ( 1 )
  {
    v7 = *(v6 - 1);
    if ( v7 == (_DWORD)v3 && *v6 == (_DWORD)v2 )
      break;
    if ( v7 == (_DWORD)v2 && *v6 == (_DWORD)v3 )
      break;
    ++v5;
    v6 += 13;
    if ( v5 >= (int)dword_140404A6C[193074052] )
      goto LABEL_9;
  }
  return (unsigned int)v5;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16E486868: using guessed type unsigned int;
// 16E48686C: using guessed type unsigned int;
// 16E48987C: using guessed type unsigned int;

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

//----- (00000001400D6890) ----------------------------------------------------
_BOOL8            sub_1400D6890(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float a8)
{
  float v8; // xmm4_4
  float v9; // xmm12_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm12_4
  float v13; // xmm10_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  float v16; // xmm7_4
  float v17; // xmm14_4
  float v18; // xmm13_4
  float v19; // xmm1_4
  float v20; // xmm11_4
  float v21; // xmm12_4
  float v22; // xmm4_4
  float v23; // xmm15_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm6_4
  float v28; // xmm5_4
  float v29; // xmm7_4
  float v30; // xmm1_4

  v8 = a4[2];
  v9 = a4[1];
  v10 = *a5 - *a4;
  v11 = a5[1] - v9;
  v12 = v9 - a6[1];
  v13 = a5[2] - v8;
  v14 = *a7 - *a6;
  v15 = a7[1] - a6[1];
  v16 = a7[2] - a6[2];
  v17 = (float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v13 * v13);
  v18 = (float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16);
  v19 = v8 - a6[2];
  v20 = (float)((float)(v12 * v11) + (float)((float)(*a4 - *a6) * v10)) + (float)(v19 * v13);
  v21 = (float)((float)(v12 * v15) + (float)((float)(*a4 - *a6) * v14)) + (float)(v19 * v16);
  v22 = (float)((float)(v15 * v11) + (float)(v14 * v10)) + (float)(v16 * v13);
  v23 = (float)(v18 * v17) - (float)(v22 * v22);
  if ( v23 == 0.0 )
    v24 = 0.0;
  else
    v24 = fminf(fmaxf((float)((float)(v22 * v21) - (float)(v20 * v18)) / v23, 0.0), 1.0);
  v25 = (float)((float)(v24 * v22) + v21) / v18;
  if ( v25 < 0.0 )
  {
    v25 = 0.0;
    v26 = -(float)(v20 / v17);
LABEL_8:
    v24 = fminf(fmaxf(v26, 0.0), 1.0);
    goto LABEL_9;
  }
  if ( v25 > 1.0 )
  {
    v25 = 1.0;
    v26 = (float)(v22 - v20) / v17;
    goto LABEL_8;
  }
LABEL_9:
  *a1 = (float)(v10 * v24) + *a4;
  a1[1] = (float)(v11 * v24) + a4[1];
  a1[2] = (float)(v13 * v24) + a4[2];
  v27 = (float)(v14 * v25) + *a6;
  *a2 = v27;
  v28 = (float)(v15 * v25) + a6[1];
  a2[1] = v28;
  v29 = (float)(v16 * v25) + a6[2];
  a2[2] = v29;
  v30 = fsqrt(
          (float)((float)((float)(v28 - a1[1]) * (float)(v28 - a1[1])) + (float)((float)(v27 - *a1) * (float)(v27 - *a1)))
        + (float)((float)(v29 - a1[2]) * (float)(v29 - a1[2])));
  *a3 = v30;
  return a8 > v30;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001400D6B60) ----------------------------------------------------
int                sub_1400D6B60(float *a1, float *a2, float *a3, __int64 a4, float *a5, float *a6)
{
  __int64 v8; // rdi
  float v9; // xmm3_4
  float *v10; // rsi
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm9_4
  float v20; // xmm7_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm2_4
  float v26; // xmm15_4
  float v27; // xmm12_4
  float v28; // xmm13_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm8_4
  float v32; // xmm15_4
  float v33; // xmm14_4
  int v34; // xmm0_4
  float v35; // xmm2_4
  float v36; // xmm15_4
  float v37; // xmm6_4
  float v38; // xmm1_4
  float v39; // xmm3_4
  float v40; // xmm9_4
  float v41; // xmm7_4
  float v42; // xmm5_4
  int v43; // r15d
  int v44; // eax
  float v45; // xmm3_4
  int v46; // r13d
  int v47; // eax
  float v48; // xmm3_4
  float v49; // xmm13_4
  int v50; // r11d
  float v51; // xmm9_4
  bool v52; // cc
  float v53; // xmm9_4
  int v54; // ebx
  int v55; // eax
  float v56; // xmm0_4
  float v57; // xmm14_4
  float v58; // xmm10_4
  int v59; // r10d
  float v60; // xmm7_4
  float v61; // xmm7_4
  float v62; // xmm15_4
  float v63; // xmm12_4
  int v64; // r8d
  __int64 v65; // rcx
  __m128d v66; // xmm2
  double v67; // xmm1_8
  float v68; // xmm1_4
  float v69; // xmm1_4
  float v70; // xmm0_4
  __int64 v71; // r9
  __m128d v72; // xmm2
  double v73; // xmm1_8
  float v74; // xmm1_4
  float v75; // xmm1_4
  float v76; // xmm2_4
  float v77; // xmm0_4
  __m128d v78; // xmm2
  double v79; // xmm1_8
  float v80; // xmm2_4
  float v81; // xmm2_4
  float v82; // xmm1_4
  float v83; // xmm0_4
  signed int v84; // ecx
  int v85; // edx
  __int64 v86; // r8
  __int64 v87; // r8
  __int64 v88; // rdx
  unsigned int v89; // eax
  unsigned int v90; // ecx
  __int64 v91; // rax
  int v92; // ecx
  float v93; // xmm0_4
  __int64 v94; // rax
  float v95; // xmm8_4
  float v96; // xmm11_4
  float v97; // xmm9_4
  float *v98; // rdi
  __int64 v99; // r8
  unsigned int *v100; // rsi
  int v101; // r15d
  signed int v102; // eax
  __int64 v103; // rbx
  double v104; // xmm7_8
  float v105; // xmm2_4
  float v106; // xmm1_4
  float v107; // xmm3_4
  float v108; // xmm5_4
  float v109; // xmm6_4
  __int128 v110; // xmm0
  __int64 v111; // rcx
  unsigned int *v112; // rbx
  BOOL v113; // eax
  float v114; // xmm2_4
  int v115; // xmm1_4
  unsigned int v116; // eax
  int v117; // xmm0_4
  int v118; // xmm1_4
  int v119; // xmm0_4
  int v120; // eax
  __int16 v121; // r8
  __int16 v122; // r15
  __int64 v123; // rax
  int v124; // r15d
  unsigned int v125; // xmm1_4
  __int64 v126; // xmm2_8
  float v127; // xmm2_4
  __int64 v128; // xmm2_8
  float v129; // xmm7_4
  float v130; // xmm3_4
  float v131; // xmm2_4
  unsigned int v132; // r11d
  float v133; // xmm6_4
  unsigned int v134; // eax
  float v135; // xmm4_4
  float v136; // xmm0_4
  float v137; // xmm5_4
  float v138; // xmm1_4
  float v139; // xmm4_4
  float v140; // xmm6_4
  float v141; // xmm3_4
  float v142; // xmm1_4
  float v143; // xmm6_4
  float v144; // xmm5_4
  float v145; // xmm2_4
  float v146; // xmm4_4
  float v147; // xmm0_4
  int v148; // edx
  unsigned int v149; // eax
  float v150; // xmm7_4
  float v151; // xmm3_4
  float v152; // xmm2_4
  unsigned int v153; // eax
  unsigned int v154; // r11d
  float v155; // xmm6_4
  float v156; // xmm4_4
  float v157; // xmm0_4
  float v158; // xmm5_4
  float v159; // xmm1_4
  float v160; // xmm4_4
  float v161; // xmm6_4
  float v162; // xmm3_4
  float v163; // xmm1_4
  float v164; // xmm6_4
  float v165; // xmm5_4
  float v166; // xmm2_4
  float v167; // xmm4_4
  float v168; // xmm0_4
  float v169; // xmm7_4
  float v170; // xmm3_4
  float v171; // xmm2_4
  unsigned int v172; // eax
  float v173; // xmm6_4
  float v174; // xmm4_4
  float v175; // xmm0_4
  float v176; // xmm5_4
  float v177; // xmm1_4
  float v178; // xmm4_4
  float v179; // xmm6_4
  float v180; // xmm3_4
  float v181; // xmm1_4
  float v182; // xmm6_4
  float v183; // xmm5_4
  float v184; // xmm2_4
  float v185; // xmm4_4
  float v186; // xmm0_4
  int v187; // edx
  unsigned int v188; // eax
  int v189; // eax
  float v190; // xmm7_4
  float v191; // xmm3_4
  float v192; // xmm2_4
  float v193; // xmm6_4
  float v194; // xmm4_4
  float v195; // xmm0_4
  float v196; // xmm5_4
  float v197; // xmm1_4
  float v198; // xmm4_4
  float v199; // xmm6_4
  float v200; // xmm3_4
  float v201; // xmm1_4
  float v202; // xmm6_4
  float v203; // xmm5_4
  float v204; // xmm2_4
  float v205; // xmm4_4
  float v206; // xmm0_4
  unsigned int v207; // eax
  float v208; // xmm3_4
  float v209; // xmm2_4
  float v210; // xmm6_4
  float v211; // xmm4_4
  float v212; // xmm0_4
  float v213; // xmm5_4
  float v214; // xmm1_4
  float v215; // xmm4_4
  float v216; // xmm6_4
  float v217; // xmm3_4
  float v218; // xmm1_4
  float v219; // xmm6_4
  float v220; // xmm5_4
  float v221; // xmm2_4
  float v222; // xmm4_4
  float v223; // xmm0_4
  unsigned int v224; // eax
  float v225; // xmm3_4
  float v226; // xmm9_4
  float v227; // xmm7_4
  float v228; // xmm4_4
  _BOOL8 v229; // rcx
  float v230; // xmm7_4
  float v231; // xmm4_4
  __int64 v233; // [rsp-20h] [rbp-1B58h] BYREF
  /* Preserve native ray-walk matrices and indexed vectors in one frame. */
  _Alignas(16) unsigned char sr_grid_ray_frame[0x3420];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D6B60[16];
#define v259 (*(float * (*))(void *)(sr_frame_1400D6B60 + 0)) /* [rsp+1B08h] */

  v8 = 1052016LL * (int)a4;
  v9 = *a5;
  (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24)) = a4;
  a4 = (int)a4;
  (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b10)) = (int)a4;
  v10 = a3;
  v259 = a3;
  v11 = *(float *)((char *)&dword_140404A6C[111579657] + v8);
  (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b28)) = v8;
  if ( v9 >= v11 || v11 <= *a6 )
  {
    v12 = a5[1];
    v13 = *(float *)((char *)&dword_140404A6C[111579658] + v8);
    if ( v12 >= v13 || v13 <= a6[1] )
    {
      v14 = a5[2];
      v15 = *(float *)((char *)&dword_140404A6C[111579659] + v8);
      if ( v14 >= v15 || v15 <= a6[2] )
      {
        v16 = *(float *)((char *)&dword_140404A6C[111579660] + v8);
        if ( v9 <= v16 || v16 >= *a6 )
        {
          v17 = *(float *)((char *)&dword_140404A6C[111579661] + v8);
          if ( v12 <= v17 || v17 >= a6[1] )
          {
            v18 = *(float *)((char *)&dword_140404A6C[111579662] + v8);
            if ( v14 <= v18 || v18 >= a6[2] )
            {
              *a3 = 1.0;
              v19 = *(float *)((char *)&dword_140404A6C[111579641] + v8);
              v20 = *(float *)((char *)&dword_140404A6C[111579644] + v8);
              v21 = *(float *)((char *)&dword_140404A6C[111579638] + v8);
              v22 = *(float *)((char *)&dword_140404A6C[111579639] + v8);
              v23 = *a5 - v21;
              v24 = *(float *)((char *)&dword_140404A6C[111579649] + v8);
              v25 = a5[1] - v22;
              v26 = *(float *)((char *)&dword_140404A6C[111579645] + v8);
              v27 = *(float *)((char *)&dword_140404A6C[111579640] + v8);
              v28 = *(float *)((char *)&dword_140404A6C[111579643] + v8);
              v29 = a5[2] - v27;
              v30 = *(float *)((char *)&dword_140404A6C[111579647] + v8);
              v31 = *(float *)((char *)&dword_140404A6C[111579646] + v8);
              (*(float *)(void *)(sr_grid_ray_frame+0x58)) = *(float *)((char *)&dword_140404A6C[111579642] + v8);
              (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = v26;
              v32 = (float)(v26 * v25) + (float)(v20 * v23);
              LODWORD((*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8))) = *(unsigned int *)((char *)&dword_140404A6C[111579648] + v8);
              v33 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x58)) * v25) + (float)(v19 * v23)) + (float)(v28 * v29);
              *(float *)&v34 = *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) * v25;
              v35 = *a6 - v21;
              (*(int *)(void *)(sr_grid_ray_frame+0x1ad8)) = v34;
              v36 = v32 + (float)(v31 * v29);
              v37 = (float)(*(float *)&v34 + (float)(v30 * v23)) + (float)(v24 * v29);
              v38 = a6[2] - v27;
              (*(float *)(void *)(sr_grid_ray_frame+0x1acc)) = a6[1] - v22;
              (*(float *)(void *)(sr_grid_ray_frame+0x1b80)) = v33;
              v39 = (float)((*(float *)(void *)(sr_grid_ray_frame+0x58)) * (*(float *)(void *)(sr_grid_ray_frame+0x1acc))) + (float)(v19 * v35);
              (*(float *)(void *)(sr_grid_ray_frame+0x1b84)) = v36;
              *(float *)((_DWORD *)(void *)(sr_grid_ray_frame+0x1b88)) = v37;
              (*(float *)(void *)(sr_grid_ray_frame+0x1ac8)) = v35;
              v40 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x5c)) * (*(float *)(void *)(sr_grid_ray_frame+0x1acc))) + (float)(v20 * v35)) + (float)(v31 * v38);
              (*(float *)(void *)(sr_grid_ray_frame+0x1ad0)) = v38;
              ((float *)(void *)(sr_grid_ray_frame+0x1b90))[0] = v39 + (float)(v28 * v38);
              v41 = (float)((float)(*(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) * (*(float *)(void *)(sr_grid_ray_frame+0x1acc))) + (float)(v30 * v35)) + (float)(v24 * v38);
              v42 = *(float *)((char *)&dword_140404A6C[111579654] + v8);
              ((float *)(void *)(sr_grid_ray_frame+0x1b90))[1] = v40;
              ((float *)(void *)(sr_grid_ray_frame+0x1b90))[2] = v41;
              v43 = (int)(float)(v33 * v42);
              v44 = -1;
              (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)) = v43;
              v45 = (float)(((float *)(void *)(sr_grid_ray_frame+0x1b90))[0] - v33) * v42;
              (*(int *)(void *)(sr_grid_ray_frame+0x1ad8)) = (int)(float)(v42 * ((float *)(void *)(sr_grid_ray_frame+0x1b90))[0]);
              v46 = (int)(float)(v36 * v42);
              if ( v45 > 0.0 )
                v44 = 1;
              (*(int *)(void *)(sr_grid_ray_frame+0x1bc8)) = v44;
              v47 = 1;
              v48 = fabs(v45);
              (*(int *)(void *)(sr_grid_ray_frame+0x1b5c)) = (int)(float)(v36 * v42);
              (*(float *)(void *)(sr_grid_ray_frame+0x58)) = v48;
              v49 = v48;
              (*(float *)(void *)(sr_grid_ray_frame+0x1b68)) = v48;
              v50 = (int)(float)(v40 * v42);
              v51 = (float)(v40 - v36) * v42;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b18)) = v50;
              v52 = v51 <= 0.0;
              v53 = fabs(v51);
              *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + 1) = v48;
              v54 = (int)(float)(v37 * v42);
              if ( v52 )
                v47 = -1;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b1c)) = v47;
              (*(int *)(void *)(sr_grid_ray_frame+0x1bcc)) = v47;
              v55 = 1;
              *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) + 1) = v48;
              v56 = v41 * v42;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b60)) = (int)(float)(v37 * v42);
              (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = v53;
              v57 = v53;
              (*(float *)(void *)(sr_grid_ray_frame+0x1b6c)) = v53;
              v58 = v53;
              v59 = (int)(float)(v41 * v42);
              v60 = (float)(v41 - v37) * v42;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b24)) = (int)v56;
              *(float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78)) = v53;
              v52 = v60 <= 0.0;
              v61 = fabs(v60);
              *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) = v61;
              v62 = v61;
              if ( v52 )
                v55 = -1;
              *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) = v61;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b20)) = v55;
              v63 = v61;
              ((_DWORD *)(void *)(sr_grid_ray_frame+0x1bd0))[0] = v55;
              (*(float *)(void *)(sr_grid_ray_frame+0x1b7c)) = v61;
              if ( v43 == (int)(float)(v42 * ((float *)(void *)(sr_grid_ray_frame+0x1b90))[0]) && v46 == v50 && v54 == v59 )
              {
                (*(int *)(void *)(sr_grid_ray_frame+0x1af0)) = 0;
LABEL_57:
                v85 = 0;
                (*(int *)(void *)(sr_grid_ray_frame+0x30)) = 0;
                while ( v43 < 0
                     || v43 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579650] + v8) << 6)
                     || v46 < 0
                     || v46 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579651] + v8) << 6)
                     || v54 < 0 )
                {
LABEL_129:
                  if ( v43 == (*(int *)(void *)(sr_grid_ray_frame+0x1ad8)) && v46 == v50 && v54 == v59 )
                    return 0; /* native hit result */
                  v225 = (*(float *)(void *)(sr_grid_ray_frame+0x58));
                  v226 = (*(float *)(void *)(sr_grid_ray_frame+0x5c));
                  v227 = *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8));
                  v228 = *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + 1);
                  v229 = (*(float *)(void *)(sr_grid_ray_frame+0x58)) >= (*(float *)(void *)(sr_grid_ray_frame+0x5c));
                  if ( *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) <= *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + 1) || v229 )
                  {
                    if ( v57 <= v62 )
                    {
                      v46 += (*(int *)(void *)(sr_grid_ray_frame+0x1b1c));
                      (*(int *)(void *)(sr_grid_ray_frame+0x1b5c)) = v46;
                      v57 = v57 + v63;
                      v62 = v62 - v63;
                      (*(float *)(void *)(sr_grid_ray_frame+0x58)) = (*(float *)(void *)(sr_grid_ray_frame+0x58)) - v49;
                      (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = (*(float *)(void *)(sr_grid_ray_frame+0x5c)) + v49;
                      goto LABEL_139;
                    }
                    v230 = *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + v49;
                    (*(int *)(void *)(sr_grid_ray_frame+0x1b60)) = (*(int *)(void *)(sr_grid_ray_frame+0x1b20)) + v54;
                    v231 = *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + 1) - v49;
                    v57 = v57 - v58;
                    v62 = v62 + v58;
                  }
                  else
                  {
                    *(&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)) + v229) += *(&(*(int *)(void *)(sr_grid_ray_frame+0x1bc8)) + v229);
                    v46 = (*(int *)(void *)(sr_grid_ray_frame+0x1b5c));
                    v43 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                    v230 = v227 - v63;
                    v231 = v228 + v63;
                    (*(float *)(void *)(sr_grid_ray_frame+0x58)) = v225 + v58;
                    (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = v226 - v58;
                  }
                  (*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) = __PAIR64__(LODWORD(v231), LODWORD(v230));
LABEL_139:
                  (*(int *)(void *)(sr_grid_ray_frame+0x30)) = ++v85;
                  if ( v85 > (*(int *)(void *)(sr_grid_ray_frame+0x1af0)) )
                    return 0; /* native hit result */
                  v54 = (*(int *)(void *)(sr_grid_ray_frame+0x1b60));
                  a4 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b10));
                }
                if ( v54 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579652] + v8) << 6)
                  || (v86 = *(int *)(*(_QWORD *)((char *)&dword_140404A6C[111579655] + v8)
                                   + 4LL
                                   * (int)((v43 >> 6)
                                         + *(unsigned int *)((char *)&dword_140404A6C[111579650] + v8)
                                         * ((v54 >> 6)
                                          + *(unsigned int *)((char *)&dword_140404A6C[111579652] + v8) * (v46 >> 6)))),
                      (_DWORD)v86 == -1)
                  || (v87 = (int)dword_140404A6C[263004 * a4
                                               + 111579985
                                               + 513 * v86
                                               + 64 * ((v46 >> 3) & 7)
                                               + 8 * ((v54 >> 3) & 7)
                                               + ((v43 >> 3) & 7)],
                      (_DWORD)v87 == -1) )
                {
LABEL_128:
                  v85 = (*(int *)(void *)(sr_grid_ray_frame+0x30));
                  goto LABEL_129;
                }
                (*(float *)(void *)(sr_grid_ray_frame+0x28)) = 1.0;
                v88 = 6930 * v87 + (v43 & 7) + 8 * ((v54 & 7) + 8 * (v46 & 7u));
                (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8)) = v88;
                v89 = dword_140404A6C[v88 + 83199479];
                if ( v89 )
                {
                  v90 = dword_140404A6C[v88 + 83199479];
                  v91 = v89 & 0x3FF;
                  (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)) = v91;
                  v92 = HIBYTE(v90) & 3;
                  (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)) = 0;
                  (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = v92;
                  v93 = *(float *)((char *)&dword_140404A6C[111579653] + v8);
                  v94 = 948 * v91;
                  (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0)) = v94 * 4;
                  v95 = (float)((float)v43 + 0.5) * v93;
                  v96 = (float)v46 * v93;
                  v97 = (float)((float)v54 + 0.5) * v93;
                  if ( (int)dword_140404A6C[v94 + 272299416] > 0 )
                  {
                    v98 = v259;
                    v99 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                    v100 = &dword_140404A6C[v94 + 272299442];
                    v101 = 1;
                    v102 = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                    while ( 1 )
                    {
                      if ( (v101 & dword_140404A6C[v88 + 83199991]) == 0 )
                      {
                        v103 = (int)*(v100 - 9);
                        (*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) = xmmword_140278D30;
                        (*(float *)(void *)(sr_grid_ray_frame+0x1bc0)) = 1.0;
                        (*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) = xmmword_140278D30;
                        v104 = (float)v92 * 1.570796326795;
                        sub_14007B2A0((__int64)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)), (float *)&dword_1402F6188, v104);
                        v105 = (float)((float)((float)(*((float *)v100 - 8) * *(float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0))) + v95)
                                     + (float)(*((float *)v100 - 7) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) + 3)))
                             + (float)(*((float *)v100 - 6) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) + 2));
                        v106 = *((float *)v100 - 6) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) + 3);
                        v107 = (float)((float)(*((float *)v100 - 8) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) + 1)) + v96)
                             + (float)(*((float *)v100 - 7) * *(float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)));
                        v108 = *((float *)v100 - 6) * (*(float *)(void *)(sr_grid_ray_frame+0x1bc0));
                        v109 = (float)((float)(*((float *)v100 - 8) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) + 2)) + v97)
                             + (float)(*((float *)v100 - 7) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) + 1));
                        (*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) = *(_OWORD *)(v100 - 5);
                        v110 = *(_OWORD *)(v100 - 1);
                        (*(float *)(void *)(sr_grid_ray_frame+0x1b68)) = v105;
                        (*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) = v110;
                        (*(float *)(void *)(sr_grid_ray_frame+0x1bc0)) = *((float *)v100 + 3);
                        (*(float *)(void *)(sr_grid_ray_frame+0x1b6c)) = v107 + v106;
                        *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) = v109 + v108;
                        sub_14007B2A0((__int64)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)), (float *)&dword_1402F6188, v104);
                        v111 = 1268 * v103;
                        if ( !*(_QWORD *)&dword_140404A6C[1268 * v103 + 278522249] )
                        {
                          v54 = (*(int *)(void *)(sr_grid_ray_frame+0x1b60));
                          v92 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                          v88 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8));
                          v99 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
LABEL_75:
                          v102 = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                          goto LABEL_76;
                        }
                        v112 = &dword_140404A6C[v111 + 278522247];
                        sub_14011BF40((__int64)((_BYTE *)(void *)(sr_grid_ray_frame+0x1bd8)), (__int64)&dword_140404A6C[v111 + 278522247], &(*(float *)(void *)(sr_grid_ray_frame+0x1b68)), (float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)));
                        v113 = sub_1400DA960((__int64)((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30)), (__int64)v112, (__int64)((_BYTE *)(void *)(sr_grid_ray_frame+0x1bd8)), &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)), ((float *)(void *)(sr_grid_ray_frame+0x1b90)));
                        v54 = (*(int *)(void *)(sr_grid_ray_frame+0x1b60));
                        v92 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                        v88 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8));
                        v99 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                        if ( !v113 )
                          goto LABEL_75;
                        v114 = (*(float *)(void *)(sr_grid_ray_frame+0x1b48));
                        if ( (*(float *)(void *)(sr_grid_ray_frame+0x1b48)) >= *v98 )
                          goto LABEL_75;
                        v115 = ((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[1];
                        v116 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                        *a1 = *(float *)((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30));
                        v117 = ((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[2];
                        *((_DWORD *)a1 + 1) = v115;
                        v118 = ((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[3];
                        *((_DWORD *)a1 + 2) = v117;
                        v119 = ((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[4];
                        *(_DWORD *)a2 = v118;
                        a2[2] = *(float *)&((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[5];
                        *((_DWORD *)a2 + 1) = v119;
                        dword_140404A6C[73007002] = v116;
                        dword_140404A6C[73007003] = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                        dword_140404A6C[73007013] = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0));
                        v102 = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                        dword_140404A6C[73007015] = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                        dword_140404A6C[73007009] = 0;
                        dword_140404A6C[73007004] = v46;
                        dword_140404A6C[73007005] = v54;
                        dword_140404A6C[73007012] = -1;
                        dword_140404A6C[73007014] = v92;
                        *v98 = v114;
                      }
LABEL_76:
                      ++v102;
                      v101 = __ROL4__(v101, 1);
                      v100 += 29;
                      (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)) = v102;
                      if ( v102 >= *(int *)((char *)&dword_140404A6C[272299416] + v99) )
                      {
                        v8 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b28));
                        v10 = v259;
                        break;
                      }
                    }
                  }
                }
                v120 = dword_140404A6C[v88 + 83198967];
                v121 = v120;
                v122 = v120;
                if ( v120 <= 0 )
                {
                  v43 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                  v132 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                  goto LABEL_99;
                }
                v123 = v120 & 0x7F;
                v124 = v122 & 0xC00;
                (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = v123;
                v125 = dword_140404A6C[2310 * v123 + 432533577];
                (*(float *)(void *)(sr_grid_ray_frame+0x1ac8)) = *(float *)&dword_140404A6C[2310 * v123 + 432533576];
                (*(float *)(void *)(sr_grid_ray_frame+0x1ad0)) = *(float *)&dword_140404A6C[2310 * v123 + 432533578];
                (*(float *)(void *)(sr_grid_ray_frame+0x1acc)) = *(float *)&v125;
                if ( (v121 & 0xC00) == 0x400 )
                {
                  v126 = 1070141403;
                }
                else if ( v124 == 2048 )
                {
                  v126 = 1078530011;
                }
                else
                {
                  if ( v124 != 3072 )
                    goto LABEL_86;
                  v126 = 1083624420;
                }
                sub_14007B4D0(&(*(float *)(void *)(sr_grid_ray_frame+0x1ac8)), (float *)&dword_1402F6188, *(double *)&v126);
LABEL_86:
                v127 = *(float *)((char *)&dword_140404A6C[111579653] + v8);
                (*(float *)(void *)(sr_grid_ray_frame+0x1bc0)) = 1.0;
                (*(float *)(void *)(sr_grid_ray_frame+0x1ac8)) = (*(float *)(void *)(sr_grid_ray_frame+0x1ac8)) + (float)((float)((float)(int)(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)) + 0.5) * v127);
                (*(float *)(void *)(sr_grid_ray_frame+0x1acc)) = (*(float *)(void *)(sr_grid_ray_frame+0x1acc)) + (float)((float)v46 * v127);
                (*(float *)(void *)(sr_grid_ray_frame+0x1ad0)) = (*(float *)(void *)(sr_grid_ray_frame+0x1ad0)) + (float)((float)((float)v54 + 0.5) * v127);
                (*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) = xmmword_140278D30;
                (*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) = xmmword_140278D30;
                switch ( v124 )
                {
                  case 1024:
                    v128 = 1070141403;
                    break;
                  case 2048:
                    v128 = 1078530011;
                    break;
                  case 3072:
                    v128 = 1083624420;
                    break;
                  default:
                    goto LABEL_93;
                }
                sub_14007B2A0((__int64)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)), (float *)&dword_1402F6188, *(double *)&v128);
LABEL_93:
                if ( (unsigned int)sub_1400D97A0(&(*(float *)(void *)(sr_grid_ray_frame+0x38)), &(*(float *)(void *)(sr_grid_ray_frame+0x48)), &(*(float *)(void *)(sr_grid_ray_frame+0x28)), (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)), &(*(float *)(void *)(sr_grid_ray_frame+0x1ac8)), (float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)), &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)), ((float *)(void *)(sr_grid_ray_frame+0x1b90)))
                  && (v129 = (*(float *)(void *)(sr_grid_ray_frame+0x28)), (*(float *)(void *)(sr_grid_ray_frame+0x28)) < *v10) )
                {
                  v130 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                  v131 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                  v132 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                  v43 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                  v133 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                  v134 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                  v135 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                  v136 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                  v137 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                               + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                       + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                  v138 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                  *a1 = v137;
                  v139 = (float)((float)(v135 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                               + (float)(v136 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                       + (float)(v138 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                  a1[1] = v139;
                  v140 = (float)(v133 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                       + (float)(v130 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                  v141 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                  v142 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                  v143 = v140 + (float)(v131 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                  a1[2] = v143;
                  *a1 = v137 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                  v144 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                  v145 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                  a1[1] = v139 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                  v146 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                  v147 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                  a1[2] = v143 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                  *a2 = (float)((float)(v145 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                              + (float)(v147 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                      + (float)(v142 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                  a2[1] = (float)((float)(v144 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                + (float)(v146 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                        + (float)(v141 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                  a2[2] = (float)((float)(v144 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                                + (float)(v146 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                        + (float)(v141 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                  dword_140404A6C[73007009] = 0;
                  dword_140404A6C[73007002] = v132;
                  dword_140404A6C[73007003] = v43;
                  dword_140404A6C[73007004] = v46;
                  dword_140404A6C[73007005] = v54;
                  dword_140404A6C[73007012] = v134;
                  dword_140404A6C[73007015] = -1;
                  *v10 = v129;
                }
                else
                {
                  v132 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                  v43 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                }
                v88 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8));
LABEL_99:
                v148 = dword_140404A6C[v88 + 83194359];
                (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = v148;
                if ( v148 )
                {
                  v149 = v148 & 0xE0000000;
                  if ( (v148 & 0xE0000000) == 0x40000000 )
                  {
                    if ( (unsigned int)sub_1400DC650(
                                         &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                                         (__int64)&(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                                         &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                                         &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                                         ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                                         (int *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)),
                                         v148,
                                         *(float *)((char *)&dword_140404A6C[111579653] + v8)) )
                    {
                      v150 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                      if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) < *v10 )
                      {
LABEL_103:
                        v151 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                        v152 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                        v153 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                        v154 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                        v155 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                        v156 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                        v157 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                        v158 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                     + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                             + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                        v159 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                        *a1 = v158;
                        v160 = (float)((float)(v156 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                     + (float)(v157 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                             + (float)(v159 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                        a1[1] = v160;
                        v161 = (float)(v155 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                             + (float)(v151 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                        v162 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                        v163 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                        v164 = v161 + (float)(v152 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                        a1[2] = v164;
                        *a1 = v158 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                        v165 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                        v166 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                        a1[1] = v160 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                        v167 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                        v168 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                        a1[2] = v164 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                        *a2 = (float)((float)(v166 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                    + (float)(v168 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                            + (float)(v163 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                        a2[1] = (float)((float)(v165 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                      + (float)(v167 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                              + (float)(v162 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                        a2[2] = (float)((float)(v165 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                                      + (float)(v167 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                              + (float)(v162 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                        dword_140404A6C[73007009] = v153;
                        dword_140404A6C[73007002] = v154;
                        dword_140404A6C[73007003] = v43;
                        dword_140404A6C[73007004] = v46;
                        dword_140404A6C[73007005] = v54;
                        dword_140404A6C[73007012] = -1;
                        dword_140404A6C[73007015] = -1;
                        *v10 = v150;
                        goto LABEL_113;
                      }
                    }
                  }
                  else if ( v149 == 0x80000000 )
                  {
                    if ( sub_1400DE770(
                           &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                           ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                           (__int64)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)),
                           *(float *)&v148,
                           *(float *)((char *)&dword_140404A6C[111579653] + v8)) )
                    {
                      v150 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                      if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) < *v10 )
                        goto LABEL_103;
                    }
                  }
                  else if ( v149 == -1073741824 )
                  {
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = v43 - (unsigned __int8)v148;
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1af8)) = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                    LODWORD((*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0))) = v54 - BYTE1(v148);
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b00)) = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                    (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)) = v46 - BYTE2(v148);
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1afc)) = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)) = sub_1400129D0(v132, (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)), (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)), (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0)));
                    if ( sub_1400DE770(
                           &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                           ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                           (__int64)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1af8)),
                           *(float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)),
                           *(float *)((char *)&dword_140404A6C[111579653] + v8)) )
                    {
                      v169 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                      if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) < *v10 )
                      {
                        v170 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                        v171 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                        v172 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0));
                        v154 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                        v173 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                        v174 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                        v175 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                        v176 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                     + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                             + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                        v177 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                        *a1 = v176;
                        v178 = (float)((float)(v174 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                     + (float)(v175 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                             + (float)(v177 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                        a1[1] = v178;
                        v179 = (float)(v173 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                             + (float)(v170 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                        v180 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                        v181 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                        v182 = v179 + (float)(v171 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                        a1[2] = v182;
                        *a1 = v176 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                        v183 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                        v184 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                        a1[1] = v178 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                        v185 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                        v186 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                        a1[2] = v182 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                        *a2 = (float)((float)(v184 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                    + (float)(v186 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                            + (float)(v181 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                        a2[1] = (float)((float)(v183 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                      + (float)(v185 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                              + (float)(v180 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                        a2[2] = (float)((float)(v183 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                                      + (float)(v185 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                              + (float)(v180 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                        dword_140404A6C[73007009] = v172;
                        dword_140404A6C[73007003] = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                        dword_140404A6C[73007004] = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                        dword_140404A6C[73007005] = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                        dword_140404A6C[73007012] = -1;
                        dword_140404A6C[73007015] = -1;
                        dword_140404A6C[73007002] = v154;
                        *v10 = v169;
                        goto LABEL_113;
                      }
                    }
                  }
                }
                v154 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
LABEL_113:
                v187 = dword_140404A6C[(*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8)) + 83197431];
                (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = v187;
                if ( !v187 )
                {
LABEL_126:
                  if ( *v10 < 1.0 )
                    return 1; /* native hit result */
                  v59 = (*(int *)(void *)(sr_grid_ray_frame+0x1b24));
                  v50 = (*(int *)(void *)(sr_grid_ray_frame+0x1b18));
                  goto LABEL_128;
                }
                v188 = v187 & 0xE0000000;
                if ( (v187 & 0xE0000000) == 0x40000000 )
                {
                  v189 = sub_1400DC650(
                           &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                           (__int64)&(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                           ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                           (int *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)),
                           v187,
                           *(float *)((char *)&dword_140404A6C[111579653] + v8));
                }
                else
                {
                  if ( v188 != 0x80000000 )
                  {
                    if ( v188 != -1073741824 )
                      goto LABEL_126;
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)) = v43 - (unsigned __int8)v187;
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1af8)) = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0));
                    (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)) = v54 - BYTE1(v187);
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b00)) = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = v46 - BYTE2(v187);
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1afc)) = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                    LODWORD((*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0))) = sub_140016450(v154, (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)), (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)), (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)));
                    if ( !sub_1400DE770(
                            &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                            &(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                            &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                            &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                            ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                            (__int64)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1af8)),
                            *(float *)&(*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0)),
                            *(float *)((char *)&dword_140404A6C[111579653] + v8)) )
                      goto LABEL_126;
                    v190 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                    if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) >= *v10 )
                      goto LABEL_126;
                    v208 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                    v209 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                    v210 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                    v211 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                    v212 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                    v213 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                 + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                         + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                    v214 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                    *a1 = v213;
                    v215 = (float)((float)(v211 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                 + (float)(v212 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                         + (float)(v214 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                    a1[1] = v215;
                    v216 = (float)(v210 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                         + (float)(v208 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                    v217 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                    v218 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                    v219 = v216 + (float)(v209 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                    a1[2] = v219;
                    *a1 = v213 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                    v220 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                    v221 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                    a1[1] = v215 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                    v222 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                    v223 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                    a1[2] = v219 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                    *a2 = (float)((float)(v221 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                + (float)(v223 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                        + (float)(v218 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                    a2[1] = (float)((float)(v220 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                  + (float)(v222 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                          + (float)(v217 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                    v224 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                    a2[2] = (float)((float)(v220 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                                  + (float)(v222 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                          + (float)(v217 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                    dword_140404A6C[73007009] = v224;
                    dword_140404A6C[73007002] = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                    dword_140404A6C[73007003] = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0));
                    dword_140404A6C[73007004] = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                    dword_140404A6C[73007005] = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
LABEL_125:
                    dword_140404A6C[73007012] = -1;
                    dword_140404A6C[73007015] = -1;
                    *v10 = v190;
                    goto LABEL_126;
                  }
                  v189 = sub_1400DE770(
                           &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                           ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                           (__int64)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)),
                           *(float *)&v187,
                           *(float *)((char *)&dword_140404A6C[111579653] + v8));
                }
                if ( !v189 )
                  goto LABEL_126;
                v190 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) >= *v10 )
                  goto LABEL_126;
                v191 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                v192 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                v193 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                v194 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                v195 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                v196 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                             + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                     + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                v197 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                *a1 = v196;
                v198 = (float)((float)(v194 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                             + (float)(v195 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                     + (float)(v197 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                a1[1] = v198;
                v199 = (float)(v193 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                     + (float)(v191 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                v200 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                v201 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                v202 = v199 + (float)(v192 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                a1[2] = v202;
                *a1 = v196 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                v203 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                v204 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                a1[1] = v198 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                v205 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                v206 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                a1[2] = v202 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                *a2 = (float)((float)(v204 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                            + (float)(v206 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                    + (float)(v201 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                a2[1] = (float)((float)(v203 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                              + (float)(v205 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                      + (float)(v200 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                v207 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                a2[2] = (float)((float)(v203 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                              + (float)(v205 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                      + (float)(v200 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                dword_140404A6C[73007009] = v207;
                dword_140404A6C[73007002] = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                dword_140404A6C[73007003] = v43;
                dword_140404A6C[73007004] = v46;
                dword_140404A6C[73007005] = v54;
                goto LABEL_125;
              }
              v64 = 0;
              v65 = 0;
              do
              {
                v66 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
                SR_VEC_LANES(128, v66, f64)[0] = (float)(v42 * *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b80)) + v65));
                v67 = SR_VEC_LANES(128, v66, f64)[0];
                if ( (double)(int)SR_VEC_LANES(128, v66, f64)[0] != SR_VEC_LANES(128, v66, f64)[0] )
                  v67 = (double)((int)SR_VEC_LANES(128, v66, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v66, v66)) & 1));
                v68 = SR_VEC_LANES(128, v66, f64)[0] - (v67 + 0.5);
                if ( *(&(*(int *)(void *)(sr_grid_ray_frame+0x1bc8)) + v65) > 0 )
                  v68 = -v68;
                v69 = v68 + v68;
                if ( v65 )
                {
                  *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b68)) + v65) = (float)(v69 * v48) - *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b68)) + v65);
                  if ( v65 == 2 )
                    v70 = v53;
                  else
                    v70 = v61;
                }
                else
                {
                  (*(float *)(void *)(sr_grid_ray_frame+0x1b68)) = (float)(v69 * v53) - (*(float *)(void *)(sr_grid_ray_frame+0x1b68));
                  v70 = v61;
                }
                v71 = v65 + 3;
                v72 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
                SR_VEC_LANES(128, v72, f64)[0] = (float)(v42 * *(float *)&((_DWORD *)(void *)(sr_grid_ray_frame+0x1b88))[v65 - 1]);
                *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b68)) + v65 + 3) = (float)(v69 * v70) - *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b68)) + v65 + 3);
                v73 = SR_VEC_LANES(128, v72, f64)[0];
                if ( (double)(int)SR_VEC_LANES(128, v72, f64)[0] != SR_VEC_LANES(128, v72, f64)[0] )
                  v73 = (double)((int)SR_VEC_LANES(128, v72, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v72, v72)) & 1));
                v74 = SR_VEC_LANES(128, v72, f64)[0] - (v73 + 0.5);
                if ( (int)((_DWORD *)(void *)(sr_grid_ray_frame+0x1bd0))[v65 - 1] > 0 )
                  v74 = -v74;
                v75 = v74 + v74;
                if ( v64 == -1 )
                  v76 = v53;
                else
                  v76 = v48;
                *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b6c)) + v65) = (float)(v75 * v76) - *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b6c)) + v65);
                if ( v64 == 1 )
                  v77 = v53;
                else
                  v77 = v61;
                v78 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
                SR_VEC_LANES(128, v78, f64)[0] = (float)(v42 * *(float *)&((_DWORD *)(void *)(sr_grid_ray_frame+0x1b88))[v65]);
                *((float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78)) + v65) = (float)(v75 * v77) - *((float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78)) + v65);
                v79 = SR_VEC_LANES(128, v78, f64)[0];
                if ( (double)(int)SR_VEC_LANES(128, v78, f64)[0] != SR_VEC_LANES(128, v78, f64)[0] )
                  v79 = (double)((int)SR_VEC_LANES(128, v78, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v78, v78)) & 1));
                v80 = SR_VEC_LANES(128, v78, f64)[0] - (v79 + 0.5);
                if ( (int)((_DWORD *)(void *)(sr_grid_ray_frame+0x1bd0))[v65] > 0 )
                  v80 = -v80;
                v81 = v80 + v80;
                if ( v64 == -2 )
                  v82 = v53;
                else
                  v82 = v48;
                *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) + v65) = (float)(v81 * v82) - *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) + v65);
                if ( v64 )
                  v83 = v61;
                else
                  v83 = v53;
                v64 += 3;
                *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b7c)) + v65) = (float)(v83 * v81) - *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b7c)) + v65);
                v65 += 3;
              }
              while ( v71 < 3 );
              v10 = v259;
              v84 = abs32(v50 - v46) + abs32(v59 - v54) + abs32((*(int *)(void *)(sr_grid_ray_frame+0x1ad8)) - v43);
              (*(int *)(void *)(sr_grid_ray_frame+0x1af0)) = 0x4000;
              if ( v84 > 0x4000 || ((*(int *)(void *)(sr_grid_ray_frame+0x1af0)) = v84, v84 >= 0) )
              {
                a4 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b10));
                (*(int *)(void *)(sr_grid_ray_frame+0x30)) = LODWORD((*(float *)(void *)(sr_grid_ray_frame+0x1b7c)));
                (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78));
                (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = (*(float *)(void *)(sr_grid_ray_frame+0x1b6c));
                v62 = (*(float *)(void *)(sr_grid_ray_frame+0x1b7c));
                (*(float *)(void *)(sr_grid_ray_frame+0x58)) = (*(float *)(void *)(sr_grid_ray_frame+0x1b68));
                v57 = *(float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78));
                (*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) = (*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70));
                goto LABEL_57;
              }
            }
          }
        }
      }
    }
  }
  return 0; /* native hit result */
}
#undef v259

// 1400D6FEE: conditional instruction was optimized away because rdx.8<100000000u
// 1400D70A6: conditional instruction was optimized away because rdx.8<100000000u
// 1400D714D: conditional instruction was optimized away because rdx.8<100000000u
// 1400D868B: conditional instruction was optimized away because rcx.8==0
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848D4: using guessed type unsigned int;
// 151A848D8: using guessed type unsigned int;
// 151A848DC: using guessed type unsigned int;
// 151A848E0: using guessed type unsigned int;
// 151A848F0: using guessed type unsigned int;
// 151A848FC: using guessed type unsigned int;
// 151A84900: using guessed type unsigned int;
// 151A84904: using guessed type unsigned int;
// 151A84908: using guessed type unsigned int;

//----- (00000001400D8790) ----------------------------------------------------
_BOOL8            sub_1400D8790(float *a1, __int64 a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  int *v7; // rdi
  int *v11; // rsi
  int v13; // ebx
  __int64 v14; // rcx
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm3_4
  __int64 v21; // rax
  float v22; // xmm0_4
  __int64 v23; // rcx
  __int64 v24; // rax
  float v25; // xmm0_4
  __int64 v26; // rcx
  __int64 v27; // rax
  float v28; // xmm5_4
  float v29; // xmm0_4
  float v30; // xmm3_4
  float v31; // xmm6_4
  _BOOL8 result; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D8790[80];
#define v33 (*(float (*)[4])(void *)(sr_frame_1400D8790 + 0)) /* [rsp+40h] */
#define v34 (*(float (*)[4])(void *)(sr_frame_1400D8790 + 16)) /* [rsp+50h] */
#define v35 (*(float (*)[4])(void *)(sr_frame_1400D8790 + 32)) /* [rsp+60h] */
#define v36 (*(float (*)[8])(void *)(sr_frame_1400D8790 + 48)) /* [rsp+70h] */

  v7 = dword_1402B3664;
  v11 = dword_1402B3558;
  v13 = 0;
  while ( 1 )
  {
    v14 = 3LL * *(v7 - 1);
    v15 = *a6;
    v16 = a6[1];
    v17 = a6[2];
    v18 = *a7;
    v19 = a7[1];
    v20 = a7[2];
    v21 = *v7;
    v34[0] = (float)(*a7 * *(float *)&dword_1402B34F0[3 * *(v7 - 1)]) + *a6;
    v34[1] = (float)(v19 * *(float *)&dword_1402B34F0[v14 + 1]) + v16;
    v22 = v20 * *(float *)&dword_1402B34F0[v14 + 2];
    v23 = 3 * v21;
    v24 = v7[1];
    v34[2] = v22 + v17;
    v35[0] = (float)(v18 * *(float *)&dword_1402B34F0[v23]) + v15;
    v35[1] = (float)(v19 * *(float *)&dword_1402B34F0[v23 + 1]) + v16;
    v25 = v20 * *(float *)&dword_1402B34F0[v23 + 2];
    v26 = 3 * v24;
    v27 = v7[2];
    v35[2] = v25 + v17;
    v33[0] = (float)(v18 * *(float *)&dword_1402B34F0[v26]) + v15;
    v33[1] = (float)(v19 * *(float *)&dword_1402B34F0[v26 + 1]) + v16;
    v28 = v19 * *(float *)&dword_1402B34F0[3 * v27 + 1];
    v29 = (float)(v20 * *(float *)&dword_1402B34F0[v26 + 2]) + v17;
    v30 = v20 * *(float *)&dword_1402B34F0[3 * v27 + 2];
    v31 = (float)(v18 * *(float *)&dword_1402B34F0[3 * v27]) + v15;
    *(_DWORD *)a2 = *(v11 - 2);
    *(_DWORD *)(a2 + 4) = *(v11 - 1);
    *(_DWORD *)(a2 + 8) = *v11;
    v33[2] = v29;
    v36[0] = v31;
    v36[1] = v28 + v16;
    v36[2] = v30 + v17;
    if ( sub_140077FA0(a1, (float *)a2, a3, a4, a5, v34, v35, v33) )
      break;
    result = sub_140077FA0(a1, (float *)a2, a3, a4, a5, v34, v33, v36);
    if ( result )
      break;
    ++v13;
    v7 += 4;
    v11 += 3;
    if ( v13 >= 6 )
      return result;
  }
  return 1;
}
#undef v33
#undef v34
#undef v35
#undef v36

// 1402B34F0: using guessed type int dword_1402B34F0[];
// 1402B3558: using guessed type int dword_1402B3558[18];
// 1402B3664: using guessed type int dword_1402B3664[];

//----- (00000001400D89E0) ----------------------------------------------------
_BOOL8            sub_1400D89E0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float a8)
{
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm6_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D89E0[48];
#define v21 (*(float (*))(void *)(sr_frame_1400D89E0 + 0)) /* [rsp+44h] */
#define v22 (*(float (*)[4])(void *)(sr_frame_1400D89E0 + 4)) /* [rsp+48h] */
#define v23 (*(float (*)[6])(void *)(sr_frame_1400D89E0 + 20)) /* [rsp+58h] */

  if ( sub_1400D6890(v22, v23, &v21, a4, a5, a6, a7, a8) )
  {
    v12 = v22[0];
    v13 = v22[2];
    a1[1] = v22[1];
    v14 = v23[0];
    a1[2] = v13;
    v15 = v23[1];
    *a1 = v12;
    *a2 = v14 - v12;
    v16 = v23[2];
    a2[1] = v15 - a1[1];
    a2[2] = v16 - a1[2];
    sub_14007A240((__int64)a2, a2);
    v17 = a5[1] - a4[1];
    v18 = a5[2] - a4[2];
    v19 = v21;
    *a3 = (float)((float)((float)((float)(*a1 - *a4) * (float)(*a5 - *a4)) + (float)((float)(a1[1] - a4[1]) * v17))
                + (float)((float)(a1[2] - a4[2]) * v18))
        / (float)((float)((float)(v17 * v17) + (float)((float)(*a5 - *a4) * (float)(*a5 - *a4))) + (float)(v18 * v18));
  }
  else
  {
    v19 = 65536.0;
  }
  return v19 < 65536.0;
}
#undef v21
#undef v22
#undef v23


//----- (00000001400D8B70) ----------------------------------------------------
__int64            sub_1400D8B70(float *a1, float *a2, float *a3, int a4, float *a5, float *a6)
{
  float *v6; // r12
  float *v9; // rdx
  __int64 v11; // r15
  float v12; // xmm7_4
  __int64 v13; // rax
  float v14; // xmm3_4
  __int64 v15; // rcx
  float v16; // xmm0_4
  float v17; // xmm5_4
  float v18; // xmm1_4
  float v19; // xmm6_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  signed int v24; // r13d
  float v25; // xmm11_4
  __int64 v26; // r8
  int *v27; // rdi
  float v28; // xmm14_4
  float v29; // xmm15_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  float v32; // xmm4_4
  __int64 v33; // rax
  float v34; // xmm10_4
  float v35; // xmm9_4
  float v36; // xmm0_4
  float v37; // xmm3_4
  float v38; // xmm9_4
  float v39; // xmm12_4
  float v40; // xmm0_4
  float v41; // xmm5_4
  float v42; // xmm12_4
  float v43; // xmm7_4
  float v44; // xmm4_4
  float v45; // xmm0_4
  float v46; // xmm2_4
  float v47; // xmm8_4
  float v48; // xmm5_4
  float v49; // xmm3_4
  float v50; // xmm13_4
  float v51; // xmm14_4
  float v52; // xmm7_4
  float v53; // xmm3_4
  float v54; // xmm2_4
  float v55; // xmm9_4
  float v56; // xmm5_4
  float v57; // xmm8_4
  float v58; // xmm0_4
  float v59; // xmm12_4
  float v60; // xmm13_4
  float v61; // xmm7_4
  bool v62; // zf
  float v63; // xmm2_4
  float v64; // xmm5_4
  float v65; // xmm15_4
  float v66; // xmm9_4
  float v67; // xmm1_4
  float v68; // xmm14_4
  float v69; // xmm8_4
  float v70; // xmm10_4
  __int64 v71; // rax
  float v72; // xmm11_4
  float v73; // xmm0_4
  float v74; // xmm2_4
  float v75; // xmm1_4
  float v76; // xmm3_4
  float v77; // xmm4_4
  float v78; // xmm2_4
  int v79; // xmm1_4
  float v80; // xmm3_4
  float v81; // xmm0_4
  float v82; // xmm1_4
  float v83; // xmm5_4
  float v84; // xmm0_4
  float v85; // xmm1_4
  float v86; // xmm4_4
  float v87; // xmm1_4
  float v88; // xmm3_4
  float v89; // xmm4_4
  float v90; // xmm2_4
  int v91; // xmm1_4
  float v92; // xmm8_4
  float v93; // xmm10_4
  float v94; // xmm9_4
  float v95; // xmm3_4
  float v96; // xmm12_4
  float v97; // xmm7_4
  float v98; // xmm13_4
  float v99; // xmm0_4
  float v100; // xmm14_4
  float v101; // xmm15_4
  float v102; // xmm5_4
  float v103; // xmm10_4
  float v104; // xmm8_4
  float v105; // xmm3_4
  float v106; // xmm4_4
  unsigned int v108; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D8B70[400];
#define v109 (*(float (*))(void *)(sr_frame_1400D8B70 + 0)) /* [rsp+40h] */
#define v110 (*(float (*))(void *)(sr_frame_1400D8B70 + 0)) /* [rsp+40h] */
#define v111 (*(float (*))(void *)(sr_frame_1400D8B70 + 4)) /* [rsp+44h] */
#define v112 (*(float (*))(void *)(sr_frame_1400D8B70 + 4)) /* [rsp+44h] */
#define v113 (*(float (*))(void *)(sr_frame_1400D8B70 + 8)) /* [rsp+48h] */
#define v114 (*(float (*))(void *)(sr_frame_1400D8B70 + 8)) /* [rsp+48h] */
#define v115 (*(float (*))(void *)(sr_frame_1400D8B70 + 12)) /* [rsp+4Ch] */
#define v116 (*(float (*))(void *)(sr_frame_1400D8B70 + 12)) /* [rsp+4Ch] */
#define v117 (*(float (*))(void *)(sr_frame_1400D8B70 + 16)) /* [rsp+50h] */
#define v118 (*(float (*))(void *)(sr_frame_1400D8B70 + 16)) /* [rsp+50h] */
#define v119 (*(float (*))(void *)(sr_frame_1400D8B70 + 20)) /* [rsp+54h] */
#define v120 (*(float (*))(void *)(sr_frame_1400D8B70 + 20)) /* [rsp+54h] */
#define v121 (*(float (*))(void *)(sr_frame_1400D8B70 + 24)) /* [rsp+58h] */
#define v122 (*(float (*))(void *)(sr_frame_1400D8B70 + 24)) /* [rsp+58h] */
#define v123 (*(float (*))(void *)(sr_frame_1400D8B70 + 28)) /* [rsp+5Ch] */
#define v124 (*(float (*))(void *)(sr_frame_1400D8B70 + 28)) /* [rsp+5Ch] */
#define v125 (*(float (*))(void *)(sr_frame_1400D8B70 + 32)) /* [rsp+60h] */
#define v126 (*(float (*))(void *)(sr_frame_1400D8B70 + 32)) /* [rsp+60h] */
#define v127 (*(float (*))(void *)(sr_frame_1400D8B70 + 36)) /* [rsp+64h] */
#define v128 (*(float (*))(void *)(sr_frame_1400D8B70 + 40)) /* [rsp+68h] */
#define v129 (*(float (*))(void *)(sr_frame_1400D8B70 + 44)) /* [rsp+6Ch] */
#define v130 (*(float (*))(void *)(sr_frame_1400D8B70 + 48)) /* [rsp+70h] */
#define v131 (*(float (*))(void *)(sr_frame_1400D8B70 + 52)) /* [rsp+74h] */
#define v132 (*(float (*))(void *)(sr_frame_1400D8B70 + 56)) /* [rsp+78h] */
#define v133 (*(int (*))(void *)(sr_frame_1400D8B70 + 64)) /* [rsp+80h] */
#define v134 (*(int (*))(void *)(sr_frame_1400D8B70 + 68)) /* [rsp+84h] */
#define v135 (*(int (*))(void *)(sr_frame_1400D8B70 + 72)) /* [rsp+88h] */
#define v136 (*(float (*))(void *)(sr_frame_1400D8B70 + 80)) /* [rsp+90h] */
#define v137 (*(float (*))(void *)(sr_frame_1400D8B70 + 84)) /* [rsp+94h] */
#define v138 (*(float (*))(void *)(sr_frame_1400D8B70 + 88)) /* [rsp+98h] */
#define v139 (*(float (*)[4])(void *)(sr_frame_1400D8B70 + 96)) /* [rsp+A0h] */
#define v140 (*(float (*)[4])(void *)(sr_frame_1400D8B70 + 112)) /* [rsp+B0h] */
#define v141 (*(float (*)[4])(void *)(sr_frame_1400D8B70 + 128)) /* [rsp+C0h] */
#define v142 (*(unsigned __int64 (*))(void *)(sr_frame_1400D8B70 + 144)) /* [rsp+D0h] */
#define v143 (*(__int64 (*))(void *)(sr_frame_1400D8B70 + 152)) /* [rsp+D8h] */
#define v144 (*(float (*))(void *)(sr_frame_1400D8B70 + 392)) /* [rsp+1C8h] */

  v6 = a6;
  v9 = a5;
  v11 = 21LL * a4;
  v12 = *a5;
  v13 = (int)dword_140404A6C[v11 + 433433158];
  v14 = *(float *)&dword_140404A6C[v11 + 433433159];
  v15 = 2310 * v13;
  v142 = 9240 * v13;
  v16 = *(float *)&dword_140404A6C[2310 * v13 + 432531269];
  if ( v12 < (float)(v14 - v16) && (float)(v14 - v16) > *a6 )
    return 0;
  v17 = a5[1];
  v18 = *(float *)&dword_140404A6C[v11 + 433433160] - v16;
  if ( v17 < v18 && v18 > a6[1] )
    return 0;
  v19 = a5[2];
  v20 = *(float *)&dword_140404A6C[v11 + 433433161] - v16;
  if ( v19 < v20 && v20 > a6[2] )
    return 0;
  v21 = v14 + v16;
  if ( v12 > v21 && v21 < *a6 )
    return 0;
  v22 = *(float *)&dword_140404A6C[v11 + 433433160] + v16;
  if ( v17 > v22 && v22 < a6[1] )
    return 0;
  v23 = *(float *)&dword_140404A6C[v11 + 433433161] + v16;
  if ( v19 > v23 && v23 < a6[2] )
    return 0;
  v24 = 0;
  *a3 = 1.0;
  if ( (int)dword_140404A6C[v15 + 432532039] <= 0 )
    return 0;
  v25 = v138;
  v26 = 770 * v13;
  v128 = v137;
  v127 = v136;
  v27 = (int *)&dword_140404A6C[v15 + 432532042];
  v143 = 770 * v13;
  do
  {
    v28 = *(float *)&dword_140404A6C[v11 + 433433168];
    v29 = *(float *)&dword_140404A6C[v11 + 433433165];
    v30 = *(float *)&dword_140404A6C[3 * v26 + 432531271 + 3 * *(v27 - 1)];
    v31 = *(float *)&dword_140404A6C[3 * v26 + 432531272 + 3 * *(v27 - 1)];
    v32 = *(float *)&dword_140404A6C[3 * v26 + 432531273 + 3 * *(v27 - 1)];
    v33 = v26 + v27[1];
    v34 = (float)((float)(v28 * v31) + (float)(v29 * v30)) + (float)(*(float *)&dword_140404A6C[v11 + 433433171] * v32);
    v35 = (float)(*(float *)&dword_140404A6C[v11 + 433433169] * v31)
        + (float)(*(float *)&dword_140404A6C[v11 + 433433166] * v30);
    v36 = *(float *)&dword_140404A6C[v11 + 433433167] * v30;
    v37 = *(float *)&dword_140404A6C[3 * v26 + 432531273 + 3 * *v27];
    v38 = v35 + (float)(*(float *)&dword_140404A6C[v11 + 433433172] * v32);
    v39 = (float)(*(float *)&dword_140404A6C[v11 + 433433170] * v31) + v36;
    v40 = *(float *)&dword_140404A6C[3 * v26 + 432531272 + 3 * *v27];
    v41 = v40 * *(float *)&dword_140404A6C[v11 + 433433170];
    v42 = v39 + (float)(*(float *)&dword_140404A6C[v11 + 433433173] * v32);
    v43 = *(float *)&dword_140404A6C[3 * v33 + 432531272];
    v44 = (float)(*(float *)&dword_140404A6C[3 * v26 + 432531271 + 3 * *v27] * v29) + (float)(v40 * v28);
    v45 = *(float *)&dword_140404A6C[3 * v26 + 432531271 + 3 * *v27];
    v125 = v38;
    v123 = v42;
    v46 = *(float *)&dword_140404A6C[3 * v33 + 432531271];
    v47 = (float)((float)(*(float *)&dword_140404A6C[3 * v26 + 432531272 + 3 * *v27]
                        * *(float *)&dword_140404A6C[v11 + 433433169])
                + (float)(v45 * *(float *)&dword_140404A6C[v11 + 433433166]))
        + (float)(v37 * *(float *)&dword_140404A6C[v11 + 433433172]);
    v48 = (float)(v41 + (float)(v45 * *(float *)&dword_140404A6C[v11 + 433433167]))
        + (float)(v37 * *(float *)&dword_140404A6C[v11 + 433433173]);
    v113 = v44 + (float)(v37 * *(float *)&dword_140404A6C[v11 + 433433171]);
    v49 = *(float *)&dword_140404A6C[3 * v33 + 432531273];
    v121 = v47;
    v119 = v48;
    v50 = (float)((float)(v46 * v29) + (float)(v43 * v28)) + (float)(v49 * *(float *)&dword_140404A6C[v11 + 433433171]);
    v117 = v50;
    v51 = (float)((float)(v43 * *(float *)&dword_140404A6C[v11 + 433433169])
                + (float)(v46 * *(float *)&dword_140404A6C[v11 + 433433166]))
        + (float)(v49 * *(float *)&dword_140404A6C[v11 + 433433172]);
    v52 = (float)((float)(v43 * *(float *)&dword_140404A6C[v11 + 433433170])
                + (float)(v46 * *(float *)&dword_140404A6C[v11 + 433433167]))
        + (float)(v49 * *(float *)&dword_140404A6C[v11 + 433433173]);
    v53 = v47 - v38;
    v54 = v51 - v38;
    v111 = v52;
    v55 = (float)((float)(v51 - v38) * (float)(v48 - v42)) - (float)((float)(v52 - v42) * (float)(v47 - v38));
    v56 = (float)((float)(v52 - v42) * (float)(v113 - v34)) - (float)((float)(v50 - v34) * (float)(v48 - v42));
    v57 = (float)((float)(v50 - v34) * v53) - (float)(v54 * (float)(v113 - v34));
    v58 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v57 * v57));
    if ( v58 == 0.0 )
    {
      v130 = 0.0;
      v59 = 0.0;
      v131 = 0.0;
      v60 = 0.0;
      v132 = 0.0;
      v61 = 0.0;
    }
    else
    {
      v59 = (float)(1.0 / v58) * v55;
      v60 = (float)(1.0 / v58) * v56;
      v61 = (float)(1.0 / v58) * v57;
      v130 = v59;
      v131 = v60;
      v132 = v61;
    }
    v62 = *(v27 - 2) == 4;
    v63 = *(float *)&dword_140404A6C[v11 + 433433161];
    v64 = *(float *)&dword_140404A6C[v11 + 433433159];
    v65 = *(float *)&dword_140404A6C[v11 + 433433160] + v125;
    v66 = *(float *)&dword_140404A6C[v11 + 433433160] + v121;
    v67 = *(float *)&dword_140404A6C[v11 + 433433160] + v51;
    v126 = v63 + v123;
    v68 = v64 + v34;
    v140[2] = v63 + v123;
    v69 = v64 + v113;
    v140[1] = v65;
    v140[0] = v64 + v34;
    v70 = v63 + v119;
    v141[0] = v64 + v113;
    v141[1] = v66;
    v139[0] = v64 + v117;
    v141[2] = v63 + v119;
    v139[1] = v67;
    v139[2] = v63 + v111;
    if ( v62 )
    {
      v71 = v26 + v27[2];
      v72 = *(float *)&dword_140404A6C[3 * v71 + 432531273];
      v73 = *(float *)&dword_140404A6C[3 * v71 + 432531271] * *(float *)&dword_140404A6C[v11 + 433433166];
      v74 = *(float *)&dword_140404A6C[3 * v71 + 432531271] * *(float *)&dword_140404A6C[v11 + 433433167];
      v75 = (float)(*(float *)&dword_140404A6C[3 * v71 + 432531272] * *(float *)&dword_140404A6C[v11 + 433433169])
          + *(float *)&dword_140404A6C[v11 + 433433160];
      v127 = (float)((float)(*(float *)&dword_140404A6C[3 * v71 + 432531271]
                           * *(float *)&dword_140404A6C[v11 + 433433165])
                   + (float)(*(float *)&dword_140404A6C[3 * v71 + 432531272]
                           * *(float *)&dword_140404A6C[v11 + 433433168]))
           + (float)((float)(v72 * *(float *)&dword_140404A6C[v11 + 433433171]) + v64);
      v76 = (float)(*(float *)&dword_140404A6C[3 * v71 + 432531272] * *(float *)&dword_140404A6C[v11 + 433433170])
          + *(float *)&dword_140404A6C[v11 + 433433161];
      v136 = v127;
      v77 = (float)((float)(v72 * *(float *)&dword_140404A6C[v11 + 433433172]) + v73) + v75;
      v25 = (float)((float)(v72 * *(float *)&dword_140404A6C[v11 + 433433173]) + v74) + v76;
      v128 = v77;
      v137 = v77;
      v138 = v25;
    }
    if ( sub_140077FA0((float *)&v133, &v130, &v144, v9, v6, v140, v141, v139) )
    {
      v78 = v144;
      if ( v144 < *a3 )
      {
        v79 = v134;
        *(_DWORD *)a1 = v133;
        *((_DWORD *)a1 + 2) = v135;
        *((_DWORD *)a1 + 1) = v79;
        *a2 = v59;
        a2[1] = v60;
        a2[2] = v61;
        *a3 = v78;
        if ( v27[3] <= 0 )
        {
          dword_140404A6C[73007016] = -1;
        }
        else
        {
          v80 = v127 - v68;
          v109 = v66 - v65;
          v122 = *a1 - v68;
          v120 = a1[1] - v65;
          v124 = a1[2] - v126;
          v81 = v70 - v126;
          v82 = fsqrt((float)((float)(v109 * v109) + (float)((float)(v69 - v68) * (float)(v69 - v68))) + (float)(v81 * v81));
          v112 = v82;
          if ( v82 == 0.0 )
          {
            v118 = 0.0;
            v83 = 0.0;
            v110 = 0.0;
          }
          else
          {
            v118 = (float)(1.0 / v82) * (float)(v69 - v68);
            v83 = (float)(1.0 / v82) * v81;
            v110 = (float)(1.0 / v82) * v109;
          }
          v84 = v25 - v126;
          v85 = fsqrt((float)((float)((float)(v128 - v65) * (float)(v128 - v65)) + (float)(v80 * v80)) + (float)(v84 * v84));
          v115 = v85;
          if ( v85 == 0.0 )
          {
            v114 = 0.0;
            v88 = 0.0;
            v89 = 0.0;
          }
          else
          {
            v86 = 1.0 / v85;
            v87 = (float)(1.0 / v85) * v80;
            v88 = v86 * (float)(v128 - v65);
            v114 = v87;
            v89 = v86 * v84;
          }
          dword_140404A6C[73007016] = (int)(float)((float)((float)((float)((float)(v120 * v110) + (float)(v122 * v118))
                                                                 + (float)(v124 * v83))
                                                         * 8.0)
                                                 / v112);
          dword_140404A6C[73007017] = (int)(float)((float)((float)((float)((float)(v88 * v120) + (float)(v122 * v114))
                                                                 + (float)(v89 * v124))
                                                         * 4.0)
                                                 / v115);
        }
      }
    }
    if ( *(v27 - 2) == 4 && sub_140077FA0((float *)&v133, &v130, &v144, a5, v6, v140, v139, &v136) )
    {
      v90 = v144;
      if ( v144 < *a3 )
      {
        v91 = v134;
        *(_DWORD *)a1 = v133;
        *((_DWORD *)a1 + 2) = v135;
        *((_DWORD *)a1 + 1) = v91;
        *a2 = v59;
        a2[1] = v60;
        a2[2] = v61;
        *a3 = v90;
        if ( v27[3] <= 0 )
        {
          dword_140404A6C[73007016] = -1;
        }
        else
        {
          v92 = v69 - v68;
          v93 = v70 - v126;
          v94 = v66 - v65;
          v95 = v127 - v68;
          v96 = v128 - v65;
          v97 = *a1 - v68;
          v129 = a1[1] - v65;
          v98 = v25 - v126;
          v116 = a1[2] - v126;
          v99 = fsqrt((float)((float)(v94 * v94) + (float)(v92 * v92)) + (float)(v93 * v93));
          if ( v99 == 0.0 )
          {
            v100 = 0.0;
            v101 = 0.0;
            v102 = 0.0;
          }
          else
          {
            v100 = (float)(1.0 / v99) * v92;
            v101 = (float)(1.0 / v99) * v94;
            v102 = (float)(1.0 / v99) * v93;
          }
          v103 = fsqrt((float)((float)(v96 * v96) + (float)(v95 * v95)) + (float)(v98 * v98));
          if ( v103 == 0.0 )
          {
            v104 = 0.0;
            v105 = 0.0;
            v106 = 0.0;
          }
          else
          {
            v104 = (float)(1.0 / v103) * v95;
            v105 = (float)(1.0 / v103) * v96;
            v106 = (float)(1.0 / v103) * v98;
          }
          dword_140404A6C[73007016] = (int)(float)((float)((float)((float)((float)(v97 * v100) + (float)(v129 * v101))
                                                                 + (float)(v116 * v102))
                                                         * 8.0)
                                                 / v99);
          dword_140404A6C[73007017] = (int)(float)((float)((float)((float)((float)(v105 * v129) + (float)(v97 * v104))
                                                                 + (float)(v106 * v116))
                                                         * 4.0)
                                                 / v103);
        }
      }
    }
    v9 = a5;
    ++v24;
    v26 = v143;
    v27 += 6;
  }
  while ( v24 < (int)dword_140404A6C[v142 / 4 + 432532039] );
  if ( *a3 >= 1.0 )
    return 0;
  v108 = dword_140404A6C[v11 + 433433163];
  dword_140404A6C[73006989] = dword_140404A6C[v11 + 433433162];
  dword_140404A6C[73006991] = dword_140404A6C[v11 + 433433164];
  dword_140404A6C[73006990] = v108;
  return 1;
}
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
#undef v137
#undef v138
#undef v139
#undef v140
#undef v141
#undef v142
#undef v143
#undef v144

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848A0: using guessed type unsigned int;
// 151A848A4: using guessed type unsigned int;
// 151A848A8: using guessed type unsigned int;
// 151A8490C: using guessed type unsigned int;

//----- (00000001400D97A0) ----------------------------------------------------
__int64            sub_1400D97A0(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  float *v11; // rdx
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm7_4
  __int64 v16; // rcx
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm5_4
  float v20; // xmm1_4
  float v21; // xmm6_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  signed int v26; // r12d
  __int64 v27; // r8
  int *v28; // rdi
  float v29; // xmm12_4
  float v30; // xmm5_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm4_4
  float v34; // xmm7_4
  float v35; // xmm8_4
  float v36; // xmm9_4
  __int64 v37; // rcx
  float v38; // xmm14_4
  __int64 v39; // rax
  float v40; // xmm13_4
  float v41; // xmm15_4
  float v42; // xmm2_4
  float v43; // xmm0_4
  float v44; // xmm13_4
  float v45; // xmm1_4
  float v46; // xmm14_4
  float v47; // xmm0_4
  float v48; // xmm3_4
  float v49; // xmm14_4
  float v50; // xmm1_4
  float v51; // xmm4_4
  float v52; // xmm15_4
  float v53; // xmm9_4
  float v54; // xmm11_4
  float v55; // xmm10_4
  float v56; // xmm2_4
  float v57; // xmm0_4
  float v58; // xmm3_4
  float v59; // xmm10_4
  float v60; // xmm1_4
  float v61; // xmm4_4
  float v62; // xmm11_4
  float v63; // xmm8_4
  float v64; // xmm5_4
  float v65; // xmm12_4
  float v66; // xmm3_4
  float v67; // xmm12_4
  float v68; // xmm7_4
  float v69; // xmm8_4
  bool v70; // zf
  float v71; // xmm4_4
  float v72; // xmm5_4
  float v73; // xmm13_4
  float v74; // xmm2_4
  float v75; // xmm14_4
  float v76; // xmm15_4
  float v77; // xmm0_4
  float v78; // xmm9_4
  float v79; // xmm10_4
  float v80; // xmm11_4
  __int64 v81; // rax
  float v82; // xmm0_4
  float v83; // xmm1_4
  float v84; // xmm2_4
  float v85; // xmm2_4
  int v86; // xmm1_4
  float v87; // xmm5_4
  float v88; // xmm0_4
  float v89; // xmm3_4
  float v90; // xmm5_4
  float v91; // xmm4_4
  float v92; // xmm0_4
  float v93; // xmm1_4
  float v94; // xmm0_4
  float v95; // xmm1_4
  float v96; // xmm2_4
  int v97; // xmm1_4
  float v98; // xmm9_4
  float v99; // xmm10_4
  float v100; // xmm11_4
  float v101; // xmm8_4
  float v102; // xmm7_4
  float v103; // xmm12_4
  float v104; // xmm13_4
  float v105; // xmm14_4
  float v106; // xmm0_4
  float v107; // xmm3_4
  float v108; // xmm5_4
  float v109; // xmm4_4
  float v110; // xmm10_4
  float v111; // xmm9_4
  float v112; // xmm1_4
  float v113; // xmm2_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D97A0[416];
#define v115 (*(float (*))(void *)(sr_frame_1400D97A0 + 0)) /* [rsp+40h] */
#define v116 (*(float (*))(void *)(sr_frame_1400D97A0 + 0)) /* [rsp+40h] */
#define v117 (*(float (*))(void *)(sr_frame_1400D97A0 + 4)) /* [rsp+44h] */
#define v118 (*(float (*))(void *)(sr_frame_1400D97A0 + 4)) /* [rsp+44h] */
#define v119 (*(float (*))(void *)(sr_frame_1400D97A0 + 8)) /* [rsp+48h] */
#define v120 (*(float (*))(void *)(sr_frame_1400D97A0 + 8)) /* [rsp+48h] */
#define v121 (*(float (*))(void *)(sr_frame_1400D97A0 + 12)) /* [rsp+4Ch] */
#define v122 (*(__int64 (*))(void *)(sr_frame_1400D97A0 + 16)) /* [rsp+50h] */
#define v123 (*(float (*))(void *)(sr_frame_1400D97A0 + 24)) /* [rsp+58h] */
#define v124 (*(float (*))(void *)(sr_frame_1400D97A0 + 28)) /* [rsp+5Ch] */
#define v125 (*(float (*))(void *)(sr_frame_1400D97A0 + 32)) /* [rsp+60h] */
#define v126 (*(float (*))(void *)(sr_frame_1400D97A0 + 36)) /* [rsp+64h] */
#define v127 (*(float (*))(void *)(sr_frame_1400D97A0 + 40)) /* [rsp+68h] */
#define v128 (*(float (*))(void *)(sr_frame_1400D97A0 + 48)) /* [rsp+70h] */
#define v129 (*(float (*))(void *)(sr_frame_1400D97A0 + 52)) /* [rsp+74h] */
#define v130 (*(float (*))(void *)(sr_frame_1400D97A0 + 56)) /* [rsp+78h] */
#define v131 (*(int (*))(void *)(sr_frame_1400D97A0 + 64)) /* [rsp+80h] */
#define v132 (*(int (*))(void *)(sr_frame_1400D97A0 + 68)) /* [rsp+84h] */
#define v133 (*(int (*))(void *)(sr_frame_1400D97A0 + 72)) /* [rsp+88h] */
#define v134 (*(__int64 (*))(void *)(sr_frame_1400D97A0 + 80)) /* [rsp+90h] */
#define v135 (*(float (*))(void *)(sr_frame_1400D97A0 + 88)) /* [rsp+98h] */
#define v136 (*(float (*)[4])(void *)(sr_frame_1400D97A0 + 96)) /* [rsp+A0h] */
#define v137 (*(float (*)[4])(void *)(sr_frame_1400D97A0 + 112)) /* [rsp+B0h] */
#define v138 (*(float (*)[4])(void *)(sr_frame_1400D97A0 + 128)) /* [rsp+C0h] */
#define v139 (*(__int64 (*))(void *)(sr_frame_1400D97A0 + 144)) /* [rsp+D0h] */
#define v140 (*(__int64 (*))(void *)(sr_frame_1400D97A0 + 152)) /* [rsp+D8h] */
#define v141 (*(float (*))(void *)(sr_frame_1400D97A0 + 392)) /* [rsp+1C8h] */
#define v142 (*(float (*))(void *)(sr_frame_1400D97A0 + 392)) /* [rsp+1C8h] */
#define v143 (*(float (*))(void *)(sr_frame_1400D97A0 + 392)) /* [rsp+1C8h] */
#define v144 (*(float (*))(void *)(sr_frame_1400D97A0 + 400)) /* [rsp+1D0h] */
#define v145 (*(float (*))(void *)(sr_frame_1400D97A0 + 400)) /* [rsp+1D0h] */

  v11 = a7;
  v13 = *a5;
  v14 = *a5;
  v15 = *a7;
  v16 = 2310LL * a4;
  v139 = v16 * 4;
  v17 = *(float *)&dword_140404A6C[v16 + 432531269];
  v18 = v14 - v17;
  if ( v15 < v18 && v18 > *a8 )
    return 0;
  v19 = a7[1];
  v20 = a5[1] - v17;
  if ( v19 < v20 && v20 > a8[1] )
    return 0;
  v21 = a7[2];
  v22 = a5[2] - v17;
  if ( v21 < v22 && v22 > a8[2] )
    return 0;
  v23 = v13 + v17;
  if ( v15 > v23 && v23 < *a8 )
    return 0;
  v24 = a5[1] + v17;
  if ( v19 > v24 && v24 < a8[1] )
    return 0;
  v25 = a5[2] + v17;
  if ( v21 > v25 && v25 < a8[2] )
    return 0;
  v26 = 0;
  *a3 = 1.0;
  if ( (int)dword_140404A6C[v16 + 432532039] <= 0 )
    return 0;
  v27 = 770LL * a4;
  v123 = v135;
  v28 = (int *)&dword_140404A6C[v16 + 432532042];
  v140 = v27;
  v122 = v134;
  do
  {
    v29 = *a6;
    v30 = a6[6];
    v31 = *(float *)&dword_140404A6C[3 * v27 + 432531271 + 3 * *(v28 - 1)];
    v32 = *(float *)&dword_140404A6C[3 * v27 + 432531272 + 3 * *(v28 - 1)];
    v33 = *(float *)&dword_140404A6C[3 * v27 + 432531273 + 3 * *(v28 - 1)];
    v34 = a6[4];
    v35 = a6[5];
    v36 = a6[3];
    v37 = 3 * (v27 + *v28);
    v38 = v34 * v32;
    v39 = v27 + v28[1];
    v40 = (float)(v36 * v32) + (float)(*a6 * v31);
    v41 = v35 * v32;
    v42 = *(float *)&dword_140404A6C[3 * v27 + 432531272 + 3 * *v28];
    v43 = a6[1] * v31;
    v44 = v40 + (float)(v30 * v33);
    v125 = a6[1];
    v45 = a6[7] * v33;
    v46 = v38 + v43;
    v127 = a6[2];
    v47 = v127 * v31;
    v48 = *(float *)&dword_140404A6C[v37 + 432531271];
    v49 = v46 + v45;
    v50 = a6[8] * v33;
    v51 = *(float *)&dword_140404A6C[v37 + 432531273];
    v52 = (float)(v41 + v47) + v50;
    v124 = v29;
    v53 = (float)((float)(v36 * v42) + (float)(v29 * v48)) + (float)(v30 * v51);
    v54 = v35 * v42;
    v55 = (float)(v34 * v42) + (float)(v125 * v48);
    v56 = *(float *)&dword_140404A6C[3 * v39 + 432531272];
    v57 = a6[2] * v48;
    v58 = *(float *)&dword_140404A6C[3 * v39 + 432531271];
    v59 = v55 + (float)(a6[7] * v51);
    v60 = a6[8] * v51;
    v61 = *(float *)&dword_140404A6C[3 * v39 + 432531273];
    v144 = v30;
    v126 = v34;
    v62 = (float)(v54 + v57) + v60;
    v115 = v35;
    v141 = (float)((float)(a6[3] * v56) + (float)(v29 * v58)) + (float)(v30 * v61);
    v119 = (float)((float)(v34 * v56) + (float)(a6[1] * v58)) + (float)(a6[7] * v61);
    v117 = (float)((float)(v35 * v56) + (float)(a6[2] * v58)) + (float)(a6[8] * v61);
    v63 = (float)((float)(v119 - v49) * (float)(v62 - v52)) - (float)((float)(v117 - v52) * (float)(v59 - v49));
    v64 = (float)((float)(v117 - v52) * (float)(v53 - v44)) - (float)((float)(v141 - v44) * (float)(v62 - v52));
    v65 = (float)((float)(v141 - v44) * (float)(v59 - v49)) - (float)((float)(v119 - v49) * (float)(v53 - v44));
    v66 = fsqrt((float)((float)(v64 * v64) + (float)(v63 * v63)) + (float)(v65 * v65));
    if ( v66 == 0.0 )
    {
      v128 = 0.0;
      v68 = 0.0;
      v129 = 0.0;
      v69 = 0.0;
      v130 = 0.0;
      v67 = 0.0;
    }
    else
    {
      v67 = v65 * (float)(1.0 / v66);
      v68 = (float)(1.0 / v66) * v63;
      v69 = (float)(1.0 / v66) * v64;
      v128 = v68;
      v130 = v67;
      v129 = v69;
    }
    v70 = *(v28 - 2) == 4;
    v71 = *a5;
    v72 = a5[1];
    v73 = v44 + *a5;
    v74 = a5[2];
    v75 = v49 + v72;
    v76 = v52 + v74;
    v77 = *a5 + v141;
    v78 = v53 + *a5;
    v79 = v59 + v72;
    v137[0] = v73;
    v80 = v62 + v74;
    v137[1] = v75;
    v136[0] = v77;
    v137[2] = v76;
    v138[0] = v78;
    v138[1] = v79;
    v138[2] = v80;
    v136[2] = v74 + v117;
    v136[1] = v72 + v119;
    if ( v70 )
    {
      v81 = v27 + v28[2];
      v82 = *(float *)&dword_140404A6C[3 * v81 + 432531273];
      v83 = *(float *)&dword_140404A6C[3 * v81 + 432531271];
      v84 = *(float *)&dword_140404A6C[3 * v81 + 432531272];
      *(float *)&v122 = (float)((float)(a6[3] * v84) + (float)(v124 * v83)) + (float)((float)(v144 * v82) + v71);
      LODWORD(v134) = v122;
      *((float *)&v122 + 1) = (float)((float)(a6[7] * v82) + (float)(v125 * v83)) + (float)((float)(v126 * v84) + v72);
      HIDWORD(v134) = HIDWORD(v122);
      v123 = (float)((float)(a6[8] * v82) + (float)(v127 * v83)) + (float)((float)(v115 * v84) + a5[2]);
      v135 = v123;
    }
    if ( sub_140077FA0((float *)&v131, &v128, &v121, v11, a8, v137, v138, v136) )
    {
      v85 = v121;
      if ( v121 < *a3 )
      {
        v86 = v132;
        *(_DWORD *)a1 = v131;
        *((_DWORD *)a1 + 2) = v133;
        *((_DWORD *)a1 + 1) = v86;
        *a2 = v68;
        a2[1] = v69;
        a2[2] = v67;
        *a3 = v85;
        if ( v28[3] <= 0 )
        {
          dword_140404A6C[73007016] = -1;
        }
        else
        {
          v87 = v78 - v73;
          v142 = *(float *)&v122 - v73;
          v145 = *((float *)&v122 + 1) - v75;
          v127 = v80 - v76;
          v118 = v123 - v76;
          v126 = *a1 - v73;
          v120 = a1[1] - v75;
          v125 = a1[2] - v76;
          v88 = fsqrt(
                  (float)((float)((float)(v79 - v75) * (float)(v79 - v75)) + (float)(v87 * v87))
                + (float)((float)(v80 - v76) * (float)(v80 - v76)));
          v124 = v88;
          if ( v88 == 0.0 )
          {
            v89 = 0.0;
            v90 = 0.0;
            v91 = 0.0;
          }
          else
          {
            v89 = (float)(1.0 / v88) * v87;
            v90 = (float)(1.0 / v88) * (float)(v79 - v75);
            v91 = (float)(1.0 / v88) * v127;
          }
          v92 = fsqrt((float)((float)(v145 * v145) + (float)(v142 * v142)) + (float)(v118 * v118));
          v116 = v92;
          if ( v92 == 0.0 )
          {
            v143 = 0.0;
            v94 = 0.0;
            v95 = 0.0;
          }
          else
          {
            v93 = 1.0 / v92;
            v143 = (float)(1.0 / v92) * v142;
            v94 = (float)(1.0 / v92) * v145;
            v95 = v93 * v118;
          }
          dword_140404A6C[73007016] = (int)(float)((float)((float)((float)((float)(v89 * v126) + (float)(v90 * v120))
                                                                 + (float)(v91 * v125))
                                                         * 8.0)
                                                 / v124);
          dword_140404A6C[73007017] = (int)(float)((float)((float)((float)((float)(v94 * v120) + (float)(v126 * v143))
                                                                 + (float)(v95 * v125))
                                                         * 4.0)
                                                 / v116);
        }
      }
    }
    if ( *(v28 - 2) == 4 && sub_140077FA0((float *)&v131, &v128, &v121, a7, a8, v137, v136, (float *)&v134) )
    {
      v96 = v121;
      if ( v121 < *a3 )
      {
        v97 = v132;
        *(_DWORD *)a1 = v131;
        *((_DWORD *)a1 + 2) = v133;
        *((_DWORD *)a1 + 1) = v97;
        *a2 = v68;
        a2[1] = v69;
        a2[2] = v67;
        *a3 = v96;
        if ( v28[3] <= 0 )
        {
          dword_140404A6C[73007016] = -1;
        }
        else
        {
          v98 = v78 - v73;
          v99 = v79 - v75;
          v100 = v80 - v76;
          v101 = *(float *)&v122 - v73;
          v102 = *a1 - v73;
          v103 = *((float *)&v122 + 1) - v75;
          v104 = a1[1] - v75;
          v105 = a1[2] - v76;
          v106 = fsqrt((float)((float)(v99 * v99) + (float)(v98 * v98)) + (float)(v100 * v100));
          if ( v106 == 0.0 )
          {
            v107 = 0.0;
            v108 = 0.0;
            v109 = 0.0;
          }
          else
          {
            v107 = (float)(1.0 / v106) * v98;
            v108 = (float)(1.0 / v106) * v99;
            v109 = (float)(1.0 / v106) * v100;
          }
          v110 = fsqrt(
                   (float)((float)(v103 * v103) + (float)(v101 * v101))
                 + (float)((float)(v123 - v76) * (float)(v123 - v76)));
          if ( v110 == 0.0 )
          {
            v111 = 0.0;
            v112 = 0.0;
            v113 = 0.0;
          }
          else
          {
            v111 = (float)(1.0 / v110) * v101;
            v112 = (float)(1.0 / v110) * v103;
            v113 = (float)(1.0 / v110) * (float)(v123 - v76);
          }
          dword_140404A6C[73007016] = (int)(float)((float)((float)((float)((float)(v107 * v102) + (float)(v108 * v104))
                                                                 + (float)(v105 * v109))
                                                         * 8.0)
                                                 / v106);
          dword_140404A6C[73007017] = (int)(float)((float)((float)((float)((float)(v112 * v104) + (float)(v102 * v111))
                                                                 + (float)(v113 * v105))
                                                         * 4.0)
                                                 / v110);
        }
      }
    }
    v11 = a7;
    ++v26;
    v27 = v140;
    v28 += 6;
  }
  while ( v26 < *(int *)((char *)&dword_140404A6C[432532039] + v139) );
  if ( *a3 >= 1.0 )
    return 0;
  *(_QWORD *)&dword_140404A6C[73006989] = 0;
  dword_140404A6C[73006991] = 0;
  return 1;
}
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
#undef v137
#undef v138
#undef v139
#undef v140
#undef v141
#undef v142
#undef v143
#undef v144
#undef v145

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848A0: using guessed type unsigned int;
// 151A848A8: using guessed type unsigned int;
// 151A8490C: using guessed type unsigned int;

//----- (00000001400DA300) ----------------------------------------------------
_BOOL8            sub_1400DA300(__int64 a1, int *a2, float *a3, float *a4)
{
  int v4; // edi
  float *v9; // rsi
  float v10; // xmm7_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm8_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm6_4
  float v23; // xmm9_4
  float v24; // xmm0_4
  float v25; // xmm8_4
  float v26; // xmm7_4
  float v27; // xmm3_4
  float v28; // xmm9_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DA300[240];
#define v34 (*(float (*)[2])(void *)(sr_frame_1400DA300 + 0)) /* [rsp+48h] */
#define v35 (*(float (*))(void *)(sr_frame_1400DA300 + 8)) /* [rsp+50h] */
#define v36 (*(float (*)[4])(void *)(sr_frame_1400DA300 + 16)) /* [rsp+58h] */
#define v37 (*(float (*)[4])(void *)(sr_frame_1400DA300 + 32)) /* [rsp+68h] */
#define v38 (*(float (*)[4])(void *)(sr_frame_1400DA300 + 48)) /* [rsp+78h] */
#define v39 (*(float (*)[6])(void *)(sr_frame_1400DA300 + 64)) /* [rsp+88h] */
#define v40 (*(float (*))(void *)(sr_frame_1400DA300 + 224)) /* [rsp+128h] */

  v4 = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  if ( *a2 <= 0 )
    return 0;
  v9 = (float *)(a2 + 3);
  do
  {
    v10 = v9[6];
    v11 = *(v9 - 1);
    v12 = *v9;
    v13 = v9[4];
    v14 = v9[5];
    v15 = v9[3];
    v16 = v9[2];
    v17 = v9[1];
    v38[0] = *(v9 - 2);
    v38[2] = v12;
    v36[2] = v10;
    v18 = v10 - v12;
    v37[2] = v15;
    v19 = v15 - v12;
    v36[0] = v13;
    v36[1] = v14;
    v20 = v14 - v11;
    v38[1] = v11;
    v37[1] = v16;
    v21 = v16 - v11;
    v37[0] = v17;
    v22 = v17 - v38[0];
    v23 = (float)(v20 * v19) - (float)(v18 * v21);
    v24 = (float)(v13 - v38[0]) * v19;
    v25 = (float)((float)(v13 - v38[0]) * v21) - (float)(v20 * v22);
    v26 = (float)(v18 * v22) - v24;
    v27 = fsqrt((float)((float)(v26 * v26) + (float)(v23 * v23)) + (float)(v25 * v25));
    if ( v27 == 0.0 )
    {
      v34[0] = 0.0;
      v28 = 0.0;
      v35 = 0.0;
      v30 = 0.0;
      v29 = 0.0;
    }
    else
    {
      v28 = v23 * (float)(1.0 / v27);
      v29 = v25 * (float)(1.0 / v27);
      v34[0] = v28;
      v30 = v26 * (float)(1.0 / v27);
      v35 = v29;
    }
    v34[1] = v30;
    if ( sub_140077FA0(v39, v34, &v40, a3, a4, v38, v37, v36) )
    {
      v31 = v40;
      if ( v40 < *(float *)(a1 + 24) )
      {
        v32 = v39[1];
        *(float *)a1 = v39[0];
        *(float *)(a1 + 8) = v39[2];
        *(float *)(a1 + 4) = v32;
        *(float *)(a1 + 12) = v28;
        *(float *)(a1 + 16) = v30;
        *(float *)(a1 + 20) = v29;
        *(float *)(a1 + 24) = v31;
      }
    }
    ++v4;
    v9 += 12;
  }
  while ( v4 < *a2 );
  return *(float *)(a1 + 24) < 1.0;
}
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40


//----- (00000001400DA580) ----------------------------------------------------
_BOOL8            sub_1400DA580(__int64 a1, __int64 a2, float *a3, float *a4)
{
  int v4; // r14d
  int *v9; // rsi
  float v10; // xmm1_4
  float v11; // xmm2_4
  __int64 v12; // rax
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm8_4
  float v21; // xmm4_4
  float v22; // xmm8_4
  float v23; // xmm4_4
  float v24; // xmm9_4
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm3_4
  float v28; // xmm9_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  float v31; // xmm2_4
  int v32; // xmm1_4
  __int64 v33; // rax
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm2_4
  int v37; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DA580[256];
#define v39 (*(float (*)[2])(void *)(sr_frame_1400DA580 + 0)) /* [rsp+48h] */
#define v40 (*(float (*))(void *)(sr_frame_1400DA580 + 8)) /* [rsp+50h] */
#define v41 (*(int (*))(void *)(sr_frame_1400DA580 + 16)) /* [rsp+58h] */
#define v42 (*(int (*))(void *)(sr_frame_1400DA580 + 20)) /* [rsp+5Ch] */
#define v43 (*(int (*))(void *)(sr_frame_1400DA580 + 24)) /* [rsp+60h] */
#define v44 (*(float (*)[2])(void *)(sr_frame_1400DA580 + 32)) /* [rsp+68h] */
#define v45 (*(float (*))(void *)(sr_frame_1400DA580 + 40)) /* [rsp+70h] */
#define v46 (*(float (*)[4])(void *)(sr_frame_1400DA580 + 48)) /* [rsp+78h] */
#define v47 (*(float (*)[4])(void *)(sr_frame_1400DA580 + 64)) /* [rsp+88h] */
#define v48 (*(float (*)[6])(void *)(sr_frame_1400DA580 + 80)) /* [rsp+98h] */
#define v49 (*(float (*))(void *)(sr_frame_1400DA580 + 240)) /* [rsp+138h] */

  v4 = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  if ( *(int *)(a2 + 32772) <= 0 )
    return 0;
  v9 = (int *)(a2 + 32784);
  do
  {
    v10 = *(float *)(a2 + 16LL * *(v9 - 1) + 12);
    v11 = *(float *)(a2 + 16LL * *(v9 - 1) + 16);
    v12 = 2LL * *v9;
    v46[0] = *(float *)(a2 + 16LL * *(v9 - 1) + 8);
    v46[2] = v11;
    v46[1] = v10;
    v13 = *(float *)(a2 + 8 * v12 + 16);
    v14 = *(float *)(a2 + 8 * v12 + 8);
    v15 = *(float *)(a2 + 8 * v12 + 12);
    v16 = 2LL * v9[1];
    v47[2] = v13;
    v17 = v13 - v11;
    v47[1] = v15;
    v18 = v15 - v10;
    v47[0] = v14;
    v19 = v14 - v46[0];
    v20 = *(float *)(a2 + 8 * v16 + 8);
    v21 = *(float *)(a2 + 8 * v16 + 12);
    v45 = *(float *)(a2 + 8 * v16 + 16);
    v44[0] = v20;
    v22 = v20 - v46[0];
    v44[1] = v21;
    v23 = v21 - v10;
    v24 = (float)(v23 * v17) - (float)((float)(v45 - v11) * v18);
    v25 = (float)((float)(v45 - v11) * v19) - (float)(v22 * v17);
    v26 = (float)(v22 * v18) - (float)(v23 * v19);
    v27 = fsqrt((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v26 * v26));
    if ( v27 == 0.0 )
    {
      v39[0] = 0.0;
      v28 = 0.0;
      v40 = 0.0;
      v30 = 0.0;
      v29 = 0.0;
    }
    else
    {
      v28 = v24 * (float)(1.0 / v27);
      v29 = v26 * (float)(1.0 / v27);
      v39[0] = v28;
      v30 = v25 * (float)(1.0 / v27);
      v40 = v29;
    }
    v39[1] = v30;
    if ( sub_140077FA0((float *)&v41, v39, &v49, a3, a4, v46, v47, v44) )
    {
      v31 = v49;
      if ( v49 < *(float *)(a1 + 24) )
      {
        v32 = v42;
        *(_DWORD *)a1 = v41;
        *(_DWORD *)(a1 + 8) = v43;
        *(_DWORD *)(a1 + 4) = v32;
        *(float *)(a1 + 12) = v28;
        *(float *)(a1 + 16) = v30;
        *(float *)(a1 + 20) = v29;
        *(float *)(a1 + 24) = v31;
      }
    }
    if ( *(v9 - 2) == 4 )
    {
      v33 = 2LL * v9[2];
      v34 = *(float *)(a2 + 16LL * v9[2] + 12);
      v48[0] = *(float *)(a2 + 16LL * v9[2] + 8);
      v35 = *(float *)(a2 + 8 * v33 + 16);
      v48[1] = v34;
      v48[2] = v35;
      if ( sub_140077FA0((float *)&v41, v39, &v49, a3, a4, v46, v44, v48) )
      {
        v36 = v49;
        if ( v49 < *(float *)(a1 + 24) )
        {
          v37 = v42;
          *(_DWORD *)a1 = v41;
          *(_DWORD *)(a1 + 8) = v43;
          *(_DWORD *)(a1 + 4) = v37;
          *(float *)(a1 + 12) = v28;
          *(float *)(a1 + 16) = v30;
          *(float *)(a1 + 20) = v29;
          *(float *)(a1 + 24) = v36;
        }
      }
    }
    ++v4;
    v9 += 8;
  }
  while ( v4 < *(_DWORD *)(a2 + 32772) );
  return *(float *)(a1 + 24) < 1.0;
}
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49


//----- (00000001400DA8E0) ----------------------------------------------------
__int64            sub_1400DA8E0(__int64 a1, __int64 a2, float *a3, float *a4)
{
  float *v4; // rdi
  float *v6; // rbx
  __int64 v9; // [rsp-20h] [rbp-30B0h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DA8E0[6256];
#define v10 (*(_BYTE (*)[6144])(void *)(sr_frame_1400DA8E0 + 0)) /* [rsp+10h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_1400DA8E0 + 6144)) /* [rsp+1810h] */
#define v12 (*(float * (*))(void *)(sr_frame_1400DA8E0 + 6240)) /* [rsp+1870h] */
#define v13 (*(float * (*))(void *)(sr_frame_1400DA8E0 + 6248)) /* [rsp+1878h] */

  v4 = v12;
  v6 = v13;
  sub_14011BF40((__int64)v10, a2, a3, a4);
  sub_1400DA960(a1, a2, (__int64)v10, v4, v6);
  return sub_1401F8B20((unsigned __int64)&v9 ^ v11);
}
#undef v10
#undef v11
#undef v12
#undef v13


//----- (00000001400DA960) ----------------------------------------------------
_BOOL8            sub_1400DA960(__int64 a1, __int64 a2, __int64 a3, float *a4, float *a5)
{
  int v5; // eax
  float *v9; // r12
  __int64 v10; // r15
  int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  __int64 v18; // rax
  float v19; // xmm3_4
  float v20; // xmm6_4
  float v21; // xmm5_4
  float v22; // xmm3_4
  float v23; // xmm5_4
  float v24; // xmm6_4
  __int64 v25; // rax
  float v26; // xmm8_4
  float v27; // xmm4_4
  float v28; // xmm8_4
  float v29; // xmm4_4
  float v30; // xmm9_4
  float v31; // xmm7_4
  float v32; // xmm8_4
  float v33; // xmm3_4
  float v34; // xmm9_4
  float v35; // xmm8_4
  float v36; // xmm7_4
  bool v37; // zf
  __int64 v38; // rax
  float v39; // xmm1_4
  float v40; // xmm2_4
  int v41; // xmm1_4
  float v42; // xmm2_4
  int v43; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DA960[288];
#define v45 (*(int (*))(void *)(sr_frame_1400DA960 + 0)) /* [rsp+48h] */
#define v46 (*(float (*)[2])(void *)(sr_frame_1400DA960 + 8)) /* [rsp+50h] */
#define v47 (*(float (*))(void *)(sr_frame_1400DA960 + 16)) /* [rsp+58h] */
#define v48 (*(int (*))(void *)(sr_frame_1400DA960 + 24)) /* [rsp+60h] */
#define v49 (*(int (*))(void *)(sr_frame_1400DA960 + 28)) /* [rsp+64h] */
#define v50 (*(int (*))(void *)(sr_frame_1400DA960 + 32)) /* [rsp+68h] */
#define v51 (*(float (*)[2])(void *)(sr_frame_1400DA960 + 40)) /* [rsp+70h] */
#define v52 (*(float (*))(void *)(sr_frame_1400DA960 + 48)) /* [rsp+78h] */
#define v53 (*(float (*)[4])(void *)(sr_frame_1400DA960 + 56)) /* [rsp+80h] */
#define v54 (*(float (*)[4])(void *)(sr_frame_1400DA960 + 72)) /* [rsp+90h] */
#define v55 (*(float (*)[4])(void *)(sr_frame_1400DA960 + 88)) /* [rsp+A0h] */
#define v56 (*(float (*))(void *)(sr_frame_1400DA960 + 272)) /* [rsp+158h] */
#define v57 (*(__int64 (*))(void *)(sr_frame_1400DA960 + 280)) /* [rsp+160h] */

  v57 = a2;
  v5 = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  v45 = 0;
  if ( *(int *)(a2 + 16) <= 0 )
    return 0;
  v9 = a5;
  v10 = a2 + 48;
  do
  {
    v11 = 0;
    if ( *(int *)v10 > 0 )
    {
      v12 = 0;
      do
      {
        v13 = *(_QWORD *)(v10 + 8);
        v14 = 3 * *(_DWORD *)(v13 + v12 + 8);
        v15 = *(float *)(a3 + 4 * v14);
        v16 = *(float *)(a3 + 4 * v14 + 4);
        v17 = *(float *)(a3 + 4 * v14 + 8);
        LODWORD(v14) = *(_DWORD *)(v13 + v12 + 12);
        v53[0] = v15;
        v53[2] = v17;
        v53[1] = v16;
        v18 = 3 * (int)v14;
        v19 = *(float *)(a3 + 4 * v18 + 8);
        v20 = *(float *)(a3 + 4 * v18);
        v21 = *(float *)(a3 + 4 * v18 + 4);
        LODWORD(v18) = *(_DWORD *)(v13 + v12 + 16);
        v54[2] = v19;
        v22 = v19 - v17;
        v54[1] = v21;
        v23 = v21 - v16;
        v54[0] = v20;
        v24 = v20 - v15;
        v25 = 3 * (int)v18;
        v26 = *(float *)(a3 + 4 * v25);
        v27 = *(float *)(a3 + 4 * v25 + 4);
        v52 = *(float *)(a3 + 4 * v25 + 8);
        v51[0] = v26;
        v28 = v26 - v15;
        v51[1] = v27;
        v29 = v27 - v16;
        v30 = (float)(v29 * v22) - (float)((float)(v52 - v17) * v23);
        v31 = (float)((float)(v52 - v17) * v24) - (float)(v28 * v22);
        v32 = (float)(v28 * v23) - (float)(v29 * v24);
        v33 = fsqrt((float)((float)(v31 * v31) + (float)(v30 * v30)) + (float)(v32 * v32));
        if ( v33 == 0.0 )
        {
          v46[0] = 0.0;
          v34 = 0.0;
          v47 = 0.0;
          v36 = 0.0;
          v35 = 0.0;
        }
        else
        {
          v34 = v30 * (float)(1.0 / v33);
          v35 = v32 * (float)(1.0 / v33);
          v46[0] = v34;
          v36 = v31 * (float)(1.0 / v33);
          v47 = v35;
        }
        v37 = *(_DWORD *)(v13 + v12 + 4) == 4;
        v46[1] = v36;
        if ( v37 )
        {
          v38 = 3 * *(_DWORD *)(v13 + v12 + 20);
          v39 = *(float *)(a3 + 4 * v38 + 4);
          v55[0] = *(float *)(a3 + 4 * v38);
          v55[2] = *(float *)(a3 + 4 * v38 + 8);
          v55[1] = v39;
        }
        if ( sub_140077FA0((float *)&v48, v46, &v56, a4, v9, v53, v54, v51) )
        {
          v40 = v56;
          if ( v56 < *(float *)(a1 + 24) )
          {
            v41 = v49;
            *(_DWORD *)a1 = v48;
            *(_DWORD *)(a1 + 8) = v50;
            *(_DWORD *)(a1 + 4) = v41;
            *(float *)(a1 + 12) = v34;
            *(float *)(a1 + 16) = v36;
            *(float *)(a1 + 20) = v35;
            *(float *)(a1 + 24) = v40;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(v10 + 8) + v12 + 4) == 4
          && sub_140077FA0((float *)&v48, v46, &v56, a4, v9, v53, v51, v55) )
        {
          v42 = v56;
          if ( v56 < *(float *)(a1 + 24) )
          {
            v43 = v49;
            *(_DWORD *)a1 = v48;
            *(_DWORD *)(a1 + 8) = v50;
            *(_DWORD *)(a1 + 4) = v43;
            *(float *)(a1 + 12) = v34;
            *(float *)(a1 + 16) = v36;
            *(float *)(a1 + 20) = v35;
            *(float *)(a1 + 24) = v42;
          }
        }
        ++v11;
        v12 += 36;
      }
      while ( v11 < *(_DWORD *)v10 );
      v5 = v45;
      a2 = v57;
    }
    ++v5;
    v10 += 56;
    v45 = v5;
  }
  while ( v5 < *(_DWORD *)(a2 + 16) );
  return *(float *)(a1 + 24) < 1.0;
}
#undef v45
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
#undef v57


//----- (00000001400DB060) ----------------------------------------------------
_BOOL8            sub_1400DB060(int a1, float *a2, float *a3, float a4)
{
  unsigned int *v4; // rdi
  float v6; // xmm9_4
  int v7; // ebx
  float v8; // xmm10_4
  __int64 v9; // r14
  float v11; // xmm11_4
  float v12; // xmm12_4
  float v13; // xmm14_4
  unsigned int v14; // xmm15_4
  __int64 v15; // r13
  float *v16; // rsi
  float v17; // xmm6_4
  float v18; // xmm8_4
  __int64 v19; // rcx
  float v20; // xmm5_4
  float v21; // xmm3_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm0_4
  unsigned int v28; // xmm7_4
  unsigned int v29; // xmm6_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm5_4
  float v33; // xmm0_4
  float v34; // xmm4_4
  float v35; // xmm5_4
  float v36; // xmm3_4
  float v37; // xmm1_4
  float v38; // xmm10_4
  float v39; // xmm0_4
  float v40; // xmm10_4
  float v41; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DB060[80];
#define v43 (*(float (*))(void *)(sr_frame_1400DB060 + 0)) /* [rsp+48h] */
#define v44 (*(float (*))(void *)(sr_frame_1400DB060 + 4)) /* [rsp+4Ch] */
#define v45 (*(float (*))(void *)(sr_frame_1400DB060 + 12)) /* [rsp+54h] */
#define v46 (*(float (*))(void *)(sr_frame_1400DB060 + 16)) /* [rsp+58h] */
#define v47 (*(float (*))(void *)(sr_frame_1400DB060 + 20)) /* [rsp+5Ch] */
#define v48 (*(float (*))(void *)(sr_frame_1400DB060 + 24)) /* [rsp+60h] */
#define v49 (*(float (*)[4])(void *)(sr_frame_1400DB060 + 32)) /* [rsp+68h] */
#define v50 (*(float (*)[4])(void *)(sr_frame_1400DB060 + 48)) /* [rsp+78h] */
#define v51 (*(float (*))(void *)(sr_frame_1400DB060 + 64)) /* [rsp+88h] */
#define v52 (*(float (*))(void *)(sr_frame_1400DB060 + 68)) /* [rsp+8Ch] */
#define v53 (*(float (*))(void *)(sr_frame_1400DB060 + 72)) /* [rsp+90h] */

  v4 = &dword_140404A6C[282486067];
  v6 = v44;
  v7 = 0;
  v8 = v44;
  v9 = 0;
  v11 = v44;
  v12 = v44;
  v13 = 1.0;
  v14 = LODWORD(v44);
  dword_140404A6C[73006987] = 1065353216;
  v15 = 7166LL * a1;
  v16 = (float *)&dword_140404A6C[v15 + 280651442];
  do
  {
    v17 = *((float *)v4 + 1) * -0.5;
    v18 = *((float *)v4 + 1) * 0.5;
    v19 = v15 * 4 + 12 * (v9 + (int)*v4);
    v20 = *(float *)((char *)&dword_140404A6C[280651453] + v19);
    v21 = *(float *)((char *)&dword_140404A6C[280651454] + v19);
    v22 = (float)(*(float *)((char *)&dword_140404A6C[280651452] + v19) * v18) + *(v16 - 2);
    v50[0] = (float)(*(float *)((char *)&dword_140404A6C[280651452] + v19) * v17) + *(v16 - 2);
    v23 = (float)(v20 * v17) + *(v16 - 1);
    v49[0] = v22;
    v24 = (float)(v20 * v18) + *(v16 - 1);
    v50[1] = v23;
    v25 = (float)(v21 * v17) + *v16;
    v49[1] = v24;
    v26 = (float)(v21 * v18) + *v16;
    v50[2] = v25;
    v27 = a4 + *((float *)v4 + 2);
    v49[2] = v26;
    if ( sub_1400D6890(&v51, &v46, &v45, a2, a3, v50, v49, v27) )
    {
      v28 = LODWORD(v51);
      v29 = LODWORD(v52);
      v30 = v46 - v51;
      v31 = v47 - v52;
      v14 = LODWORD(v53);
      v32 = v48 - v53;
      v44 = v51;
      v43 = v52;
      v33 = fsqrt((float)((float)(v31 * v31) + (float)(v30 * v30)) + (float)(v32 * v32));
      if ( v33 == 0.0 )
      {
        v11 = 0.0;
        v12 = 0.0;
        v6 = 0.0;
      }
      else
      {
        v11 = (float)(1.0 / v33) * v30;
        v12 = (float)(1.0 / v33) * v31;
        v6 = (float)(1.0 / v33) * v32;
      }
      v34 = *a3 - *a2;
      v35 = a3[1] - a2[1];
      v36 = a3[2] - a2[2];
      v37 = v53 - a2[2];
      v38 = (float)(v51 - *a2) * v34;
      v39 = (float)(v52 - a2[1]) * v35;
      v47 = v35;
      v40 = v38 + v39;
      v41 = v45;
      v46 = v34;
      v48 = v36;
      v8 = (float)(v40 + (float)(v37 * v36))
         / (float)((float)((float)(v35 * v35) + (float)(v34 * v34)) + (float)(v36 * v36));
    }
    else
    {
      v41 = 65536.0;
      v29 = LODWORD(v43);
      v28 = LODWORD(v44);
    }
    if ( v41 < 65536.0 && v13 > v8 )
    {
      dword_140404A6C[73006981] = v28;
      v13 = v8;
      dword_140404A6C[73006982] = v29;
      dword_140404A6C[73006983] = v14;
      *(float *)&dword_140404A6C[73006984] = v11;
      *(float *)&dword_140404A6C[73006985] = v12;
      *(float *)&dword_140404A6C[73006986] = v6;
      *(float *)&dword_140404A6C[73006987] = v8;
      dword_140404A6C[73006994] = v7;
    }
    ++v7;
    v9 += 26;
    v16 += 78;
    v4 += 25;
  }
  while ( v7 < 16 );
  return v13 < 1.0;
}
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51
#undef v52
#undef v53

// 1400DB0AE: variable 'v44' is possibly undefined
// 1400DB361: variable 'v43' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A84898: using guessed type unsigned int;
// 151A848B4: using guessed type unsigned int;

//----- (00000001400DB460) ----------------------------------------------------
__int64            sub_1400DB460(_DWORD *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  signed int v8; // r15d
  unsigned __int64 v9; // r12
  float *v13; // r13
  unsigned int *v14; // rsi
  float v15; // xmm8_4
  unsigned __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  unsigned __int64 v20; // rax
  float v21; // xmm5_4
  float v22; // xmm11_4
  float v23; // xmm10_4
  float v24; // xmm13_4
  float v25; // xmm2_4
  float v26; // xmm10_4
  float v27; // xmm11_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm11_4
  float v31; // xmm13_4
  unsigned __int64 v32; // rax
  float v33; // xmm14_4
  float v34; // xmm15_4
  float v35; // xmm5_4
  float v36; // xmm3_4
  float v37; // xmm6_4
  float v38; // xmm9_4
  float v39; // xmm7_4
  float v40; // xmm8_4
  float v41; // xmm3_4
  float v42; // xmm9_4
  float v43; // xmm8_4
  float v44; // xmm7_4
  bool v45; // zf
  float v46; // xmm3_4
  float v47; // xmm10_4
  float v48; // xmm11_4
  unsigned __int64 v49; // rax
  float v50; // xmm1_4
  float v51; // xmm3_4
  float v52; // xmm0_4
  float v53; // xmm2_4
  float v54; // xmm6_4
  float v55; // xmm5_4
  float v56; // xmm3_4
  float v57; // xmm1_4
  float v58; // xmm2_4
  int v59; // xmm1_4
  float v60; // xmm2_4
  int v61; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DB460[368];
#define v63 (*(float (*))(void *)(sr_frame_1400DB460 + 0)) /* [rsp+40h] */
#define v64 (*(float (*)[2])(void *)(sr_frame_1400DB460 + 8)) /* [rsp+48h] */
#define v65 (*(float (*))(void *)(sr_frame_1400DB460 + 16)) /* [rsp+50h] */
#define v66 (*(int (*))(void *)(sr_frame_1400DB460 + 24)) /* [rsp+58h] */
#define v67 (*(int (*))(void *)(sr_frame_1400DB460 + 28)) /* [rsp+5Ch] */
#define v68 (*(int (*))(void *)(sr_frame_1400DB460 + 32)) /* [rsp+60h] */
#define v69 (*(float (*)[4])(void *)(sr_frame_1400DB460 + 40)) /* [rsp+68h] */
#define v70 (*(float (*)[4])(void *)(sr_frame_1400DB460 + 56)) /* [rsp+78h] */
#define v71 (*(float (*)[4])(void *)(sr_frame_1400DB460 + 72)) /* [rsp+88h] */
#define v72 (*(float (*)[6])(void *)(sr_frame_1400DB460 + 88)) /* [rsp+98h] */
#define v73 (*(float (*))(void *)(sr_frame_1400DB460 + 352)) /* [rsp+1A0h] */
#define v74 (*(float (*))(void *)(sr_frame_1400DB460 + 360)) /* [rsp+1A8h] */

  v8 = 0;
  v9 = 5072LL * a4;
  *a3 = 1.0;
  if ( (int)dword_140404A6C[v9 / 4 + 278521861] <= 0 )
    return 0;
  v13 = a5;
  v14 = &dword_140404A6C[v9 / 4 + 278521865];
  do
  {
    v15 = a6[3];
    v16 = v9 + 12LL * (int)*(v14 - 1);
    v17 = *(float *)((char *)&dword_140404A6C[278521669] + v16);
    v18 = *(float *)((char *)&dword_140404A6C[278521670] + v16);
    v19 = *(float *)((char *)&dword_140404A6C[278521671] + v16);
    v20 = v9 + 12LL * (int)*v14;
    v21 = *(float *)((char *)&dword_140404A6C[278521669] + v20);
    v22 = a6[4] * v18;
    v23 = (float)(v15 * v18) + (float)(*a6 * v17);
    v24 = a6[5] * v18;
    v25 = *(float *)((char *)&dword_140404A6C[278521670] + v20);
    v26 = v23 + (float)(a6[6] * v19);
    v27 = v22 + (float)(a6[1] * v17);
    v28 = a6[2] * v17;
    v29 = *(float *)((char *)&dword_140404A6C[278521671] + v20);
    v30 = v27 + (float)(a6[7] * v19);
    v31 = (float)(v24 + v28) + (float)(a6[8] * v19);
    v32 = v9 + 12LL * (int)v14[1];
    v33 = (float)((float)(v21 * *a6) + (float)(v25 * v15)) + (float)(v29 * a6[6]);
    v34 = (float)((float)(v21 * a6[1]) + (float)(v25 * a6[4])) + (float)(v29 * a6[7]);
    v35 = (float)((float)(v21 * a6[2]) + (float)(v25 * a6[5])) + (float)(v29 * a6[8]);
    v36 = *(float *)((char *)&dword_140404A6C[278521671] + v32);
    v73 = (float)((float)(*(float *)((char *)&dword_140404A6C[278521669] + v32) * *a6)
                + (float)(*(float *)((char *)&dword_140404A6C[278521670] + v32) * v15))
        + (float)(v36 * a6[6]);
    v37 = (float)((float)(*(float *)((char *)&dword_140404A6C[278521669] + v32) * a6[2])
                + (float)(*(float *)((char *)&dword_140404A6C[278521670] + v32) * a6[5]))
        + (float)(v36 * a6[8]);
    v63 = (float)((float)(*(float *)((char *)&dword_140404A6C[278521669] + v32) * a6[1])
                + (float)(*(float *)((char *)&dword_140404A6C[278521670] + v32) * a6[4]))
        + (float)(v36 * a6[7]);
    v38 = (float)((float)(v63 - v30) * (float)(v35 - v31)) - (float)((float)(v37 - v31) * (float)(v34 - v30));
    v39 = (float)((float)(v37 - v31) * (float)(v33 - v26)) - (float)((float)(v73 - v26) * (float)(v35 - v31));
    v40 = (float)((float)(v73 - v26) * (float)(v34 - v30)) - (float)((float)(v63 - v30) * (float)(v33 - v26));
    v41 = fsqrt((float)((float)(v39 * v39) + (float)(v38 * v38)) + (float)(v40 * v40));
    if ( v41 == 0.0 )
    {
      v64[0] = 0.0;
      v42 = 0.0;
      v65 = 0.0;
      v44 = 0.0;
      v43 = 0.0;
    }
    else
    {
      v42 = v38 * (float)(1.0 / v41);
      v43 = v40 * (float)(1.0 / v41);
      v64[0] = v42;
      v44 = v39 * (float)(1.0 / v41);
      v65 = v43;
    }
    v45 = *(v14 - 2) == 4;
    v46 = *v13;
    v64[1] = v44;
    v70[0] = v26 + v46;
    v47 = v13[1];
    v71[0] = v33 + v46;
    v69[0] = v73 + v46;
    v70[1] = v30 + v47;
    v48 = v13[2];
    v71[1] = v34 + v47;
    v69[1] = v63 + v47;
    v70[2] = v31 + v48;
    v71[2] = v35 + v48;
    v69[2] = v37 + v48;
    if ( v45 )
    {
      v49 = v9 + 12LL * (int)v14[2];
      v50 = (float)(*(float *)((char *)&dword_140404A6C[278521670] + v49) * a6[3]) + v46;
      v51 = *(float *)((char *)&dword_140404A6C[278521671] + v49);
      v52 = *(float *)((char *)&dword_140404A6C[278521669] + v49);
      v53 = (float)((float)(v51 * a6[6]) + (float)(v52 * *a6)) + v50;
      v54 = (float)(v51 * a6[8]) + (float)(v52 * a6[2]);
      v55 = *(float *)((char *)&dword_140404A6C[278521670] + v49) * a6[5];
      v56 = (float)(v51 * a6[7]) + (float)(v52 * a6[1]);
      v57 = (float)(*(float *)((char *)&dword_140404A6C[278521670] + v49) * a6[4]) + v47;
      v72[0] = v53;
      v72[1] = v56 + v57;
      v72[2] = v54 + (float)(v55 + v48);
    }
    if ( sub_140077FA0((float *)&v66, v64, &v74, a7, a8, v70, v71, v69) )
    {
      v58 = v74;
      if ( v74 < *a3 )
      {
        v59 = v67;
        *a1 = v66;
        a1[2] = v68;
        a1[1] = v59;
        *a2 = v42;
        a2[1] = v44;
        a2[2] = v43;
        *a3 = v58;
      }
    }
    if ( *(v14 - 2) == 4 && sub_140077FA0((float *)&v66, v64, &v74, a7, a8, v70, v69, v72) )
    {
      v60 = v74;
      if ( v74 < *a3 )
      {
        v61 = v67;
        *a1 = v66;
        a1[2] = v68;
        a1[1] = v61;
        *a2 = v42;
        a2[1] = v44;
        a2[2] = v43;
        *a3 = v60;
      }
    }
    ++v8;
    v14 += 6;
  }
  while ( v8 < (int)dword_140404A6C[v9 / 4 + 278521861] );
  if ( *a3 >= 1.0 )
    return 0;
  *(_QWORD *)&dword_140404A6C[73006989] = 0;
  dword_140404A6C[73006991] = 0;
  return 1;
}
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848A0: using guessed type unsigned int;
// 151A848A8: using guessed type unsigned int;

//----- (00000001400DBAD0) ----------------------------------------------------
__int64            sub_1400DBAD0(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  signed int v8; // ebx
  __int64 v9; // r13
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  float v20; // xmm12_4
  float v21; // xmm9_4
  float v22; // xmm13_4
  float v23; // xmm10_4
  float v24; // xmm6_4
  float v25; // xmm11_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm5_4
  float v29; // xmm15_4
  __int64 v30; // rax
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm15_4
  __int64 v34; // rax
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm15_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm15_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm12_4
  float v44; // xmm13_4
  float v45; // xmm9_4
  float v46; // xmm8_4
  float v47; // xmm6_4
  float v48; // xmm7_4
  float v49; // xmm3_4
  float v50; // xmm8_4
  float v51; // xmm6_4
  float v52; // xmm7_4
  float v53; // xmm1_4
  float v54; // xmm5_4
  float v55; // xmm0_4
  float v56; // xmm13_4
  float v57; // xmm3_4
  float v58; // xmm2_4
  float v59; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DBAD0[368];
#define v61 (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 0)) /* [rsp+40h] */
#define v62 (*(float (*))(void *)(sr_frame_1400DBAD0 + 16)) /* [rsp+50h] */
#define v63 (*(float (*))(void *)(sr_frame_1400DBAD0 + 20)) /* [rsp+54h] */
#define v64 (*(float (*))(void *)(sr_frame_1400DBAD0 + 24)) /* [rsp+58h] */
#define v65 (*(float (*))(void *)(sr_frame_1400DBAD0 + 28)) /* [rsp+5Ch] */
#define v66 (*(float (*))(void *)(sr_frame_1400DBAD0 + 32)) /* [rsp+60h] */
#define v67 (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 40)) /* [rsp+68h] */
#define v68 (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 56)) /* [rsp+78h] */
#define v69 (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 72)) /* [rsp+88h] */
#define v70 (*(float (*)[6])(void *)(sr_frame_1400DBAD0 + 88)) /* [rsp+98h] */
#define v71 (*(float (*))(void *)(sr_frame_1400DBAD0 + 352)) /* [rsp+1A0h] */
#define v72 (*(float (*))(void *)(sr_frame_1400DBAD0 + 360)) /* [rsp+1A8h] */
#define v73 (*(float (*))(void *)(sr_frame_1400DBAD0 + 360)) /* [rsp+1A8h] */

  v8 = 0;
  v9 = 50LL * a4;
  *a3 = 1.0;
  if ( (int)dword_140404A6C[v9 + 272248227] <= 0 )
    return 0;
  v13 = 0;
  do
  {
    v14 = *(_QWORD *)&dword_140404A6C[v9 + 272248223];
    v15 = *(_QWORD *)&dword_140404A6C[v9 + 272248229];
    v16 = 3 * *(_DWORD *)(v13 + v15);
    v17 = *(float *)(v14 + 4 * v16);
    v18 = *(float *)(v14 + 4 * v16 + 4);
    v19 = *(float *)(v14 + 4 * v16 + 8);
    v20 = a6[3];
    v21 = *a6;
    v22 = a6[6];
    v23 = a6[4];
    v24 = a6[1];
    v25 = a6[7];
    v26 = a6[5];
    v27 = a6[8];
    v62 = (float)((float)(v20 * v18) + (float)(*a6 * v17)) + (float)(v22 * v19);
    v63 = (float)((float)(v23 * v18) + (float)(v24 * v17)) + (float)(v25 * v19);
    v28 = a6[2];
    v29 = (float)(v26 * v18) + (float)(v28 * v17);
    v30 = 3 * *(_DWORD *)(v13 + v15 + 4);
    v31 = *(float *)(v14 + 4 * v30 + 4);
    v32 = *(float *)(v14 + 4 * v30 + 8);
    v64 = v29 + (float)(v27 * v19);
    v33 = *(float *)(v14 + 4 * v30);
    v34 = 3 * *(_DWORD *)(v13 + v15 + 8);
    v35 = v31;
    v36 = v33 * v24;
    v65 = (float)((float)(v33 * v21) + (float)(v31 * v20)) + (float)(v32 * v22);
    v37 = (float)(v33 * v28) + (float)(v31 * v26);
    v38 = *(float *)(v14 + 4 * v34 + 4);
    v72 = v36 + (float)(v35 * v23);
    v39 = v32;
    v40 = v37 + (float)(v32 * v27);
    v41 = *(float *)(v14 + 4 * v34 + 8);
    v73 = v72 + (float)(v39 * v25);
    v42 = v38 * v20;
    v43 = *(float *)(v14 + 4 * v34);
    v44 = (float)((float)(v43 * v21) + v42) + (float)(v41 * v22);
    v45 = (float)((float)(v43 * v28) + (float)(v38 * v26)) + (float)(v41 * v27);
    v71 = (float)((float)(v43 * v24) + (float)(v38 * v23)) + (float)(v41 * v25);
    v46 = (float)((float)(v71 - v63) * (float)(v40 - v64)) - (float)((float)(v45 - v64) * (float)(v73 - v63));
    v47 = (float)((float)(v45 - v64) * (float)(v65 - v62)) - (float)((float)(v44 - v62) * (float)(v40 - v64));
    v48 = (float)((float)(v44 - v62) * (float)(v73 - v63)) - (float)((float)(v71 - v63) * (float)(v65 - v62));
    v49 = fsqrt((float)((float)(v47 * v47) + (float)(v46 * v46)) + (float)(v48 * v48));
    if ( v49 == 0.0 )
    {
      v61[0] = 0.0;
      v50 = 0.0;
      v51 = 0.0;
      v52 = 0.0;
    }
    else
    {
      v50 = v46 * (float)(1.0 / v49);
      v51 = v47 * (float)(1.0 / v49);
      v61[0] = v50;
      v52 = v48 * (float)(1.0 / v49);
    }
    v53 = a5[1];
    v54 = v62 + *a5;
    v55 = a5[2];
    v56 = v44 + *a5;
    v57 = v65 + *a5;
    v61[2] = v52;
    v61[1] = v51;
    v69[0] = v54;
    v67[1] = v71 + v53;
    v69[1] = v63 + v53;
    v69[2] = v64 + v55;
    v68[0] = v57;
    v68[1] = v73 + v53;
    v68[2] = v40 + v55;
    v67[0] = v56;
    v67[2] = v45 + v55;
    if ( sub_140077FA0(v70, v61, &v66, a7, a8, v69, v68, v67) )
    {
      v58 = v66;
      if ( v66 < *a3 )
      {
        v59 = v70[1];
        *a1 = v70[0];
        a1[2] = v70[2];
        a1[1] = v59;
        *a2 = v50;
        a2[1] = v51;
        a2[2] = v52;
        *a3 = v58;
      }
    }
    ++v8;
    v13 += 12;
  }
  while ( v8 < (int)dword_140404A6C[v9 + 272248227] );
  if ( *a3 >= 1.0 )
    return 0;
  *(_QWORD *)&dword_140404A6C[73006989] = 0;
  dword_140404A6C[73006991] = 0;
  return 1;
}
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73

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
// 151A848D4: using guessed type unsigned int;
// 151A848FC: using guessed type unsigned int;
// 151A84908: using guessed type unsigned int;

//----- (00000001400DC650) ----------------------------------------------------
__int64            sub_1400DC650(float *a1, __int64 a2, float *a3, float *a4, float *a5, int *a6, int a7, float a8)
{
  int *v9; // rdi
  int *v10; // rsi
  signed int v15; // ebx
  float v16; // xmm7_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  __int64 v19; // rcx
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rcx
  __int64 v24; // rax
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  __int64 v28; // rcx
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  __int64 v32; // rcx
  __int64 v33; // rax
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float sr_cell_ray_vertex_c[3];
  float sr_cell_ray_vertex_b[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DC650[80];
#define v45 (*(float (*)[20])(void *)(sr_frame_1400DC650 + 0)) /* [rsp+60h] */

  v9 = dword_1402B3668;
  v10 = dword_1402B3558;
  v15 = 0;
  v16 = (float)*a6;
  v17 = (float)a6[1];
  v18 = (float)a6[2];
  while ( 1 )
  {
    if ( ((((64 << v15) & a7) != 0) & _bittest(&a7, v15)) != 0 )
    {
      v19 = 3LL * *(v9 - 2);
      v20 = *(v9 - 1);
      v21 = (float)(v17 + *(float *)&dword_1402B34F0[3 * *(v9 - 2) + 1]) * a8;
      v45[0] = (float)(v16 + *(float *)&dword_1402B34F0[3 * *(v9 - 2)]) * a8;
      v22 = v18 + *(float *)&dword_1402B34F0[v19 + 2];
      v23 = 3 * v20;
      v45[1] = v21;
      v24 = *v9;
      v25 = (float)(v17 + *(float *)&dword_1402B34F0[v23 + 1]) * a8;
      v45[2] = v22 * a8;
      v26 = v16 + *(float *)&dword_1402B34F0[v23];
      sr_cell_ray_vertex_b[1] = v25;
      sr_cell_ray_vertex_b[0] = v26 * a8;
      v27 = v18 + *(float *)&dword_1402B34F0[v23 + 2];
      v28 = 3 * v24;
      LODWORD(v24) = *(v10 - 2);
      v29 = (float)(v17 + *(float *)&dword_1402B34F0[v28 + 1]) * a8;
      sr_cell_ray_vertex_b[2] = v27 * a8;
      v30 = v16 + *(float *)&dword_1402B34F0[v28];
      sr_cell_ray_vertex_c[1] = v29;
      sr_cell_ray_vertex_c[0] = v30 * a8;
      v31 = v18 + *(float *)&dword_1402B34F0[v28 + 2];
      *(_DWORD *)a2 = v24;
      *(_DWORD *)(a2 + 4) = *(v10 - 1);
      *(_DWORD *)(a2 + 8) = *v10;
      sr_cell_ray_vertex_c[2] = v31 * a8;
      if ( sub_140077FA0(a1, (float *)a2, a3, a4, a5, v45, &sr_cell_ray_vertex_b[0], &sr_cell_ray_vertex_c[0]) )
        break;
      v32 = 3LL * *v9;
      v33 = v9[1];
      v34 = (float)(v17 + *(float *)&dword_1402B34F0[3 * *v9 + 1]) * a8;
      sr_cell_ray_vertex_b[0] = (float)(v16 + *(float *)&dword_1402B34F0[3 * *v9]) * a8;
      v35 = v18 + *(float *)&dword_1402B34F0[v32 + 2];
      sr_cell_ray_vertex_b[1] = v34;
      v36 = v17 + *(float *)&dword_1402B34F0[3 * v33 + 1];
      sr_cell_ray_vertex_b[2] = v35 * a8;
      v37 = v16 + *(float *)&dword_1402B34F0[3 * v33];
      sr_cell_ray_vertex_c[1] = v36 * a8;
      sr_cell_ray_vertex_c[0] = v37 * a8;
      sr_cell_ray_vertex_c[2] = (float)(v18 + *(float *)&dword_1402B34F0[3 * v33 + 2]) * a8;
      if ( sub_140077FA0(a1, (float *)a2, a3, a4, a5, v45, &sr_cell_ray_vertex_b[0], &sr_cell_ray_vertex_c[0]) )
        break;
    }
    ++v15;
    v10 += 3;
    v9 += 4;
    if ( v15 >= 6 )
      return 0;
  }
  dword_140404A6C[73007008] = v15;
  return 1;
}
#undef v45

// 1402B34F0: using guessed type int dword_1402B34F0[];
// 1402B3558: using guessed type int dword_1402B3558[18];
// 1402B3668: using guessed type int dword_1402B3668[];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848EC: using guessed type unsigned int;

//----- (00000001400DC940) ----------------------------------------------------
__int64            sub_1400DC940(int a1, float *a2, float *a3, int a4)
{
  __int64 v5; // rdx
  __int64 v7; // rsi
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  int v17; // r10d
  signed int v18; // r14d
  signed int v19; // r13d
  unsigned int *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  float v25; // xmm12_4
  float v26; // xmm8_4
  float v27; // xmm9_4
  float v28; // xmm2_4
  __int64 v29; // rax
  float v30; // xmm1_4
  float v31; // xmm0_4
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  float v35; // xmm3_4
  float v36; // xmm5_4
  float v37; // xmm11_4
  float v38; // xmm2_4
  __int64 v39; // rax
  float v40; // xmm1_4
  float v41; // xmm0_4
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rax
  float v45; // xmm6_4
  float v46; // xmm7_4
  float v47; // xmm4_4
  float v48; // xmm2_4
  __int64 v49; // rax
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm2_4
  float v53; // xmm5_4
  float v54; // xmm11_4
  float v55; // xmm3_4
  float v56; // xmm14_4
  float v57; // xmm0_4
  float v58; // xmm13_4
  float v59; // xmm15_4
  float v60; // xmm5_4
  float v61; // xmm3_4
  float v62; // xmm1_4
  float v63; // xmm2_4
  float v64; // xmm14_4
  float v65; // xmm0_4
  float v66; // xmm1_4
  float v67; // xmm3_4
  float v68; // xmm2_4
  float v69; // xmm14_4
  float v70; // xmm0_4
  float v71; // xmm2_4
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rdx
  float v77; // xmm2_4
  float v78; // xmm0_4
  float v79; // xmm5_4
  float v80; // xmm1_4
  float v81; // xmm4_4
  float v82; // xmm3_4
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  float v86; // xmm3_4
  float v87; // xmm5_4
  float v88; // xmm6_4
  float v89; // xmm2_4
  __int64 v90; // rax
  float v91; // xmm1_4
  float v92; // xmm0_4
  float v93; // xmm3_4
  float v94; // xmm13_4
  float v95; // xmm11_4
  float v96; // xmm14_4
  float v97; // xmm3_4
  float v98; // xmm13_4
  float v99; // xmm14_4
  float v100; // xmm11_4
  float v101; // xmm5_4
  float v102; // xmm6_4
  float v103; // xmm2_4
  float v104; // xmm0_4
  float v105; // xmm1_4
  float v106; // xmm15_4
  float v107; // xmm3_4
  float v108; // xmm5_4
  float v109; // xmm6_4
  float v110; // xmm2_4
  float v111; // xmm15_4
  float v112; // xmm1_4
  float v113; // xmm5_4
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rcx
  __int64 v117; // rdx
  float v118; // xmm5_4
  float v119; // xmm1_4
  float v120; // xmm4_4
  float v121; // xmm3_4
  float *v122; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DC940[432];
#define v123 (*(float (*))(void *)(sr_frame_1400DC940 + 0)) /* [rsp+40h] */
#define v124 (*(float (*))(void *)(sr_frame_1400DC940 + 0)) /* [rsp+40h] */
#define v125 (*(float (*))(void *)(sr_frame_1400DC940 + 4)) /* [rsp+44h] */
#define v126 (*(float (*))(void *)(sr_frame_1400DC940 + 4)) /* [rsp+44h] */
#define v127 (*(float (*))(void *)(sr_frame_1400DC940 + 4)) /* [rsp+44h] */
#define v128 (*(float (*))(void *)(sr_frame_1400DC940 + 8)) /* [rsp+48h] */
#define v129 (*(float (*))(void *)(sr_frame_1400DC940 + 12)) /* [rsp+4Ch] */
#define v130 (*(float (*))(void *)(sr_frame_1400DC940 + 16)) /* [rsp+50h] */
#define v131 (*(float (*))(void *)(sr_frame_1400DC940 + 16)) /* [rsp+50h] */
#define v132 (*(float (*))(void *)(sr_frame_1400DC940 + 20)) /* [rsp+54h] */
#define v133 (*(float (*))(void *)(sr_frame_1400DC940 + 24)) /* [rsp+58h] */
#define v134 (*(float (*))(void *)(sr_frame_1400DC940 + 28)) /* [rsp+5Ch] */
#define v135 (*(float (*))(void *)(sr_frame_1400DC940 + 32)) /* [rsp+60h] */
#define v136 (*(float (*))(void *)(sr_frame_1400DC940 + 36)) /* [rsp+64h] */
#define v137 (*(float (*))(void *)(sr_frame_1400DC940 + 40)) /* [rsp+68h] */
#define v138 (*(unsigned int (*))(void *)(sr_frame_1400DC940 + 44)) /* [rsp+6Ch] */
#define v139 (*(float (*))(void *)(sr_frame_1400DC940 + 48)) /* [rsp+70h] */
#define v140 (*(__int64 (*))(void *)(sr_frame_1400DC940 + 56)) /* [rsp+78h] */
#define v141 (*(float (*))(void *)(sr_frame_1400DC940 + 64)) /* [rsp+80h] */
#define v142 (*(float (*))(void *)(sr_frame_1400DC940 + 68)) /* [rsp+84h] */
#define v143 (*(float (*))(void *)(sr_frame_1400DC940 + 72)) /* [rsp+88h] */
#define v144 (*(float (*))(void *)(sr_frame_1400DC940 + 80)) /* [rsp+90h] */
#define v145 (*(float (*))(void *)(sr_frame_1400DC940 + 84)) /* [rsp+94h] */
#define v146 (*(float (*))(void *)(sr_frame_1400DC940 + 88)) /* [rsp+98h] */
#define v147 (*(unsigned int (*))(void *)(sr_frame_1400DC940 + 96)) /* [rsp+A0h] */
#define v148 (*(unsigned int (*))(void *)(sr_frame_1400DC940 + 100)) /* [rsp+A4h] */
#define v149 (*(unsigned int (*))(void *)(sr_frame_1400DC940 + 104)) /* [rsp+A8h] */
#define v150 (*(float (*))(void *)(sr_frame_1400DC940 + 112)) /* [rsp+B0h] */
#define v151 (*(float (*))(void *)(sr_frame_1400DC940 + 116)) /* [rsp+B4h] */
#define v152 (*(float (*))(void *)(sr_frame_1400DC940 + 120)) /* [rsp+B8h] */
#define v153 (*(float (*))(void *)(sr_frame_1400DC940 + 124)) /* [rsp+BCh] */
#define v154 (*(int (*))(void *)(sr_frame_1400DC940 + 128)) /* [rsp+C0h] */
#define v155 (*(float (*))(void *)(sr_frame_1400DC940 + 136)) /* [rsp+C8h] */
#define v156 (*(float (*))(void *)(sr_frame_1400DC940 + 140)) /* [rsp+CCh] */
#define v157 (*(float (*))(void *)(sr_frame_1400DC940 + 144)) /* [rsp+D0h] */
#define v158 (*(float (*))(void *)(sr_frame_1400DC940 + 152)) /* [rsp+D8h] */
#define v159 (*(__int64 (*))(void *)(sr_frame_1400DC940 + 160)) /* [rsp+E0h] */
#define v160 (*(__int64 (*))(void *)(sr_frame_1400DC940 + 168)) /* [rsp+E8h] */
#define v161 (*(float (*))(void *)(sr_frame_1400DC940 + 400)) /* [rsp+1D0h] */
#define v162 (*(int (*))(void *)(sr_frame_1400DC940 + 424)) /* [rsp+1E8h] */

  v162 = a4;
  v5 = a1;
  v7 = 5210LL * a1;
  v140 = a1;
  if ( dword_140404A6C[24944 * dword_140404A6C[v7 + 129716710] + 346707717] )
    return sub_1400DFB70(a1, a2, a3, a4);
  v9 = *(float *)&dword_140404A6C[5210 * a1 + 129716753];
  if ( *a2 < v9 && v9 > *a3 )
    return 0;
  v10 = a2[1];
  v11 = *(float *)&dword_140404A6C[5210 * a1 + 129716754];
  if ( v10 < v11 && v11 > a3[1] )
    return 0;
  v12 = a2[2];
  v13 = *(float *)&dword_140404A6C[5210 * a1 + 129716755];
  if ( v12 < v13 && v13 > a3[2] )
    return 0;
  v14 = *(float *)&dword_140404A6C[5210 * a1 + 129716756];
  if ( *a2 > v14 && v14 < *a3 )
    return 0;
  v15 = *(float *)&dword_140404A6C[5210 * a1 + 129716757];
  if ( v10 > v15 && v15 < a3[1] )
    return 0;
  v16 = *(float *)&dword_140404A6C[5210 * a1 + 129716758];
  if ( v12 > v16 && v16 < a3[2] )
    return 0;
  v17 = dword_140404A6C[5210 * a1 + 129717219];
  v18 = 0;
  dword_140404A6C[73006987] = 1065353216;
  v19 = 0;
  v154 = v17;
  if ( v17 > 0 )
  {
    v20 = &dword_140404A6C[v7 + 129717225];
    while ( (int)v20[10] <= 0 )
    {
LABEL_58:
      ++v19;
      v20 += 16;
      if ( v19 >= v17 )
      {
        a4 = v162;
        v18 = 0;
        goto LABEL_60;
      }
    }
    v21 = (int)*(v20 - 4);
    v22 = 5210 * v5;
    v159 = v21;
    v23 = 60LL * (int)dword_140404A6C[5210 * v5 + 129716769 + v21];
    v24 = (int)*v20;
    v25 = *(float *)&dword_140404A6C[v23 + 73007026];
    v26 = *(float *)&dword_140404A6C[v23 + 73007027];
    v27 = *(float *)&dword_140404A6C[v23 + 73007028];
    v155 = v25;
    v156 = v26;
    v157 = v27;
    if ( (_DWORD)v24 != -1 )
    {
      v28 = *((float *)v20 + 4);
      v29 = (int)dword_140404A6C[v22 + 129716769 + v24];
      v30 = (float)((float)(*(float *)&dword_140404A6C[60 * v29 + 73007027] - v26) * v28) + v26;
      v155 = (float)((float)(*(float *)&dword_140404A6C[60 * v29 + 73007026] - v25) * v28) + v25;
      v25 = v155;
      v31 = *(float *)&dword_140404A6C[60 * v29 + 73007028];
      v156 = v30;
      v26 = v30;
      v157 = (float)((float)(v31 - v27) * v28) + v27;
      v27 = v157;
    }
    v32 = (int)*(v20 - 3);
    v33 = 60LL * (int)dword_140404A6C[v32 + 129716769 + v22];
    v34 = (int)v20[1];
    v35 = *(float *)&dword_140404A6C[v33 + 73007026];
    v36 = *(float *)&dword_140404A6C[v33 + 73007027];
    v37 = *(float *)&dword_140404A6C[v33 + 73007028];
    v134 = v35;
    v144 = v35;
    v135 = v36;
    v145 = v36;
    v136 = v37;
    v146 = v37;
    if ( (_DWORD)v34 != -1 )
    {
      v38 = *((float *)v20 + 5);
      v39 = (int)dword_140404A6C[v22 + 129716769 + v34];
      v40 = (float)((float)(*(float *)&dword_140404A6C[60 * v39 + 73007027] - v36) * v38) + v36;
      v134 = (float)((float)(*(float *)&dword_140404A6C[60 * v39 + 73007026] - v35) * v38) + v35;
      v35 = v134;
      v144 = v134;
      v41 = *(float *)&dword_140404A6C[60 * v39 + 73007028];
      v36 = v40;
      v135 = v40;
      v145 = v40;
      v136 = (float)((float)(v41 - v37) * v38) + v37;
      v37 = v136;
      v146 = v136;
    }
    v42 = (int)*(v20 - 2);
    v160 = v42;
    v43 = 60LL * (int)dword_140404A6C[v42 + 129716769 + v22];
    v44 = (int)v20[2];
    v45 = *(float *)&dword_140404A6C[v43 + 73007026];
    v46 = *(float *)&dword_140404A6C[v43 + 73007027];
    v47 = *(float *)&dword_140404A6C[v43 + 73007028];
    v128 = v45;
    v141 = v45;
    v129 = v46;
    v142 = v46;
    v161 = v47;
    v143 = v47;
    if ( (_DWORD)v44 != -1 )
    {
      v48 = *((float *)v20 + 6);
      v49 = (int)dword_140404A6C[v22 + 129716769 + v44];
      v50 = (float)((float)(*(float *)&dword_140404A6C[60 * v49 + 73007027] - v46) * v48) + v46;
      v128 = (float)((float)(*(float *)&dword_140404A6C[60 * v49 + 73007026] - v45) * v48) + v45;
      v45 = v128;
      v141 = v128;
      v51 = *(float *)&dword_140404A6C[60 * v49 + 73007028];
      v46 = v50;
      v129 = v50;
      v142 = v50;
      v161 = (float)((float)(v51 - v47) * v48) + v47;
      v47 = v161;
      v143 = v161;
    }
    v52 = v36 - v26;
    v53 = v37 - v27;
    v151 = v52;
    v54 = v46 - v26;
    v150 = v53;
    v158 = v47 - v27;
    v152 = v35 - v25;
    v153 = v45 - v25;
    v55 = (float)((float)(v46 - v26) * v53) - (float)((float)(v47 - v27) * v52);
    v56 = (float)((float)(v47 - v27) * v152) - (float)(v53 * (float)(v45 - v25));
    v125 = (float)(v52 * (float)(v45 - v25)) - (float)((float)(v46 - v26) * v152);
    v57 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v125 * v125));
    if ( v57 == 0.0 )
    {
      v137 = 0.0;
      v59 = 0.0;
      v139 = 0.0;
      v60 = 0.0;
      v58 = 0.0;
    }
    else
    {
      v58 = (float)(1.0 / v57) * v125;
      v59 = (float)(1.0 / v57) * v55;
      v139 = v58;
      v60 = (float)(1.0 / v57) * v56;
      v137 = v59;
    }
    v61 = *a3;
    v62 = v27 - a3[2];
    v130 = a3[1];
    v123 = a3[2];
    v138 = LODWORD(v60);
    v63 = (float)((float)((float)(v26 - v130) * v60) + (float)((float)(v25 - v61) * v59)) + (float)(v62 * v58);
    v64 = (float)((float)((float)(v26 - a2[1]) * v60) + (float)((float)(v25 - *a2) * v59))
        + (float)((float)(v27 - a2[2]) * v58);
    if ( v64 <= 0.0 )
    {
      if ( v64 < 0.0 && v63 < 0.0 )
        goto LABEL_40;
    }
    else if ( v63 > 0.0 )
    {
      goto LABEL_40;
    }
    v65 = v130 - a2[1];
    v66 = v123 - a2[2];
    v67 = v61 - *a2;
    v133 = (float)((float)((float)(v26 - a2[1]) * v60) + (float)((float)(v25 - *a2) * v59))
         + (float)((float)(v27 - a2[2]) * v58);
    v131 = v65;
    v68 = (float)((float)(v65 * v60) + (float)(v67 * v59)) + (float)(v66 * v58);
    if ( v68 != 0.0 )
    {
      v69 = v64 / v68;
      v133 = v69;
      v70 = (float)(v69 * v66) + a2[2];
      v71 = (float)(v69 * v131) + a2[1];
      v126 = (float)(v69 * v67) + *a2;
      v147 = LODWORD(v126);
      v149 = LODWORD(v70);
      v148 = LODWORD(v71);
      if ( (float)((float)((float)((float)((float)(v150 * (float)(v71 - v26)) - (float)(v151 * (float)(v70 - v27))) * v59)
                         + (float)((float)((float)(v152 * (float)(v70 - v27)) - (float)(v150 * (float)(v126 - v25)))
                                 * v60))
                 + (float)((float)((float)(v151 * (float)(v126 - v25)) - (float)(v152 * (float)(v71 - v26))) * v58)) >= 0.0 )
      {
        if ( (float)((float)((float)((float)((float)((float)(v70 - v136) * (float)(v45 - v134))
                                           - (float)((float)(v161 - v136) * (float)(v126 - v134)))
                                   * v60)
                           + (float)((float)((float)((float)(v161 - v136) * (float)(v71 - v135))
                                           - (float)((float)(v46 - v135) * (float)(v70 - v136)))
                                   * v59))
                   + (float)((float)((float)((float)(v46 - v135) * (float)(v126 - v134))
                                   - (float)((float)(v71 - v135) * (float)(v45 - v134)))
                           * v58)) >= 0.0
          && (float)((float)((float)((float)((float)((float)(v27 - v161) * (float)(v71 - v129))
                                           - (float)((float)(v26 - v129) * (float)(v70 - v161)))
                                   * v59)
                           + (float)((float)((float)((float)(v25 - v128) * (float)(v70 - v161))
                                           - (float)((float)(v27 - v161) * (float)(v126 - v128)))
                                   * v60))
                   + (float)((float)((float)((float)(v26 - v129) * (float)(v126 - v128))
                                   - (float)((float)(v25 - v128) * (float)(v71 - v129)))
                           * v58)) >= 0.0
          && v69 < *(float *)&dword_140404A6C[73006987] )
        {
          *(float *)&dword_140404A6C[73006981] = v126;
          *(float *)&dword_140404A6C[73006982] = v71;
          v72 = v22 + (int)dword_140404A6C[4 * v21 + 129719656 + v7];
          *(float *)&dword_140404A6C[73006983] = v70;
          *(float *)&dword_140404A6C[73006984] = v59;
          *(float *)&dword_140404A6C[73006985] = v60;
          *(float *)&dword_140404A6C[73006986] = v58;
          dword_140404A6C[73006994] = dword_140404A6C[v72 + 129716769];
          v73 = (int)dword_140404A6C[4 * v32 + 129719656 + v7];
          *(float *)&dword_140404A6C[73006987] = v69;
          dword_140404A6C[73006993] = v19;
          dword_140404A6C[73006995] = dword_140404A6C[v22 + 129716769 + v73];
          dword_140404A6C[73006996] = dword_140404A6C[v22 + 129716769 + (int)dword_140404A6C[4 * v42 + 129719656 + v7]];
          sub_14002D370((float *)&dword_140404A6C[73006998], (float *)&dword_140404A6C[73006981], &v155, &v144, &v141);
          v17 = v154;
          v74 = 60LL * (int)dword_140404A6C[73006994];
          v75 = 60LL * (int)dword_140404A6C[73006995];
          v76 = 60LL * (int)dword_140404A6C[73006996];
          v77 = (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v74 + 73007032])
              + (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v75 + 73007032]);
          v78 = *(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v74 + 73007033];
          v79 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v75 + 73007034])
              + (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v74 + 73007034]);
          v21 = v159;
          v80 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v76 + 73007033];
          v81 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v76 + 73007034];
          v82 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v75 + 73007033]) + v78;
          v42 = v160;
          *(float *)&dword_140404A6C[73006989] = v77
                                               + (float)(*(float *)&dword_140404A6C[73007000]
                                                       * *(float *)&dword_140404A6C[v76 + 73007032]);
          *(float *)&dword_140404A6C[73006991] = v79 + v81;
          *(float *)&dword_140404A6C[73006990] = v82 + v80;
        }
        v46 = v129;
        v45 = v128;
      }
      v47 = v161;
    }
LABEL_40:
    if ( *(v20 - 5) == 4 )
    {
      v83 = (int)*(v20 - 1);
      v144 = v45;
      v145 = v46;
      v146 = v47;
      v84 = 60LL * (int)dword_140404A6C[v83 + 129716769 + v22];
      v85 = (int)v20[3];
      v86 = *(float *)&dword_140404A6C[v84 + 73007026];
      v87 = *(float *)&dword_140404A6C[v84 + 73007027];
      v88 = *(float *)&dword_140404A6C[v84 + 73007028];
      v127 = v86;
      v141 = v86;
      v132 = v87;
      v142 = v87;
      v124 = v88;
      v143 = v88;
      if ( (_DWORD)v85 != -1 )
      {
        v89 = *((float *)v20 + 7);
        v90 = (int)dword_140404A6C[v22 + 129716769 + v85];
        v91 = (float)((float)(*(float *)&dword_140404A6C[60 * v90 + 73007027] - v87) * v89) + v87;
        v127 = (float)((float)(*(float *)&dword_140404A6C[60 * v90 + 73007026] - v86) * v89) + v86;
        v86 = v127;
        v141 = v127;
        v92 = *(float *)&dword_140404A6C[60 * v90 + 73007028];
        v87 = v91;
        v132 = v91;
        v142 = v91;
        v124 = (float)((float)(v92 - v88) * v89) + v88;
        v88 = v124;
        v143 = v124;
      }
      v93 = v86 - v25;
      v94 = (float)(v158 * (float)(v87 - v26)) - (float)(v54 * (float)(v88 - v27));
      v95 = (float)(v54 * v93) - (float)(v153 * (float)(v87 - v26));
      v96 = (float)(v153 * (float)(v88 - v27)) - (float)(v158 * v93);
      v97 = fsqrt((float)((float)(v96 * v96) + (float)(v94 * v94)) + (float)(v95 * v95));
      if ( v97 == 0.0 )
      {
        v137 = 0.0;
        v98 = 0.0;
        v138 = 0;
        v99 = 0.0;
        v139 = 0.0;
        v100 = 0.0;
      }
      else
      {
        v98 = v94 * (float)(1.0 / v97);
        v99 = v96 * (float)(1.0 / v97);
        v100 = v95 * (float)(1.0 / v97);
        v137 = v98;
        v138 = LODWORD(v99);
        v139 = v100;
      }
      v101 = a3[1];
      v102 = a3[2];
      v103 = (float)((float)((float)(v26 - v101) * v99) + (float)((float)(v25 - *a3) * v98))
           + (float)((float)(v27 - v102) * v100);
      v104 = a2[2];
      v105 = (float)(v27 - v104) * v100;
      v106 = (float)((float)((float)(v26 - a2[1]) * v99) + (float)((float)(v25 - *a2) * v98)) + v105;
      if ( v106 <= 0.0 )
      {
        if ( v106 < 0.0 && v103 < 0.0 )
          goto LABEL_57;
      }
      else if ( v103 > 0.0 )
      {
        goto LABEL_57;
      }
      v107 = *a3 - *a2;
      v108 = v101 - a2[1];
      v109 = v102 - v104;
      v133 = (float)((float)((float)(v26 - a2[1]) * v99) + (float)((float)(v25 - *a2) * v98)) + v105;
      v110 = (float)((float)(v108 * v99) + (float)(v107 * v98)) + (float)(v109 * v100);
      if ( v110 != 0.0 )
      {
        v111 = v106 / v110;
        v133 = v111;
        v112 = (float)(v111 * v108) + a2[1];
        v113 = (float)(v111 * v109) + a2[2];
        v136 = (float)(v111 * v107) + *a2;
        v147 = LODWORD(v136);
        v134 = v113;
        v149 = LODWORD(v113);
        v135 = v112;
        v148 = LODWORD(v112);
        if ( (float)((float)((float)((float)((float)((float)(v113 - v27) * v153)
                                           - (float)((float)(v47 - v27) * (float)(v136 - v25)))
                                   * v99)
                           + (float)((float)((float)((float)(v47 - v27) * (float)(v112 - v26))
                                           - (float)((float)(v46 - v26) * (float)(v113 - v27)))
                                   * v98))
                   + (float)((float)((float)((float)(v46 - v26) * (float)(v136 - v25))
                                   - (float)((float)(v112 - v26) * v153))
                           * v100)) >= 0.0
          && (float)((float)((float)((float)((float)((float)(v134 - v161) * (float)(v127 - v128))
                                           - (float)((float)(v124 - v161) * (float)(v136 - v128)))
                                   * v99)
                           + (float)((float)((float)((float)(v124 - v161) * (float)(v135 - v129))
                                           - (float)((float)(v132 - v129) * (float)(v134 - v161)))
                                   * v98))
                   + (float)((float)((float)((float)(v132 - v129) * (float)(v136 - v128))
                                   - (float)((float)(v135 - v129) * (float)(v127 - v128)))
                           * v100)) >= 0.0
          && (float)((float)((float)((float)((float)((float)(v25 - v127) * (float)(v134 - v124))
                                           - (float)((float)(v27 - v124) * (float)(v136 - v127)))
                                   * v99)
                           + (float)((float)((float)((float)(v27 - v124) * (float)(v135 - v132))
                                           - (float)((float)(v26 - v132) * (float)(v134 - v124)))
                                   * v98))
                   + (float)((float)((float)((float)(v26 - v132) * (float)(v136 - v127))
                                   - (float)((float)(v25 - v127) * (float)(v135 - v132)))
                           * v100)) >= 0.0
          && v111 < *(float *)&dword_140404A6C[73006987] )
        {
          *(float *)&dword_140404A6C[73006981] = v136;
          *(float *)&dword_140404A6C[73006982] = v135;
          *(float *)&dword_140404A6C[73006983] = v134;
          *(float *)&dword_140404A6C[73006984] = v98;
          *(float *)&dword_140404A6C[73006985] = v99;
          v114 = (int)dword_140404A6C[4 * v21 + 129719656 + v7];
          *(float *)&dword_140404A6C[73006986] = v100;
          *(float *)&dword_140404A6C[73006987] = v111;
          dword_140404A6C[73006993] = v19;
          dword_140404A6C[73006994] = dword_140404A6C[v22 + 129716769 + v114];
          dword_140404A6C[73006995] = dword_140404A6C[v22 + 129716769 + (int)dword_140404A6C[4 * v42 + 129719656 + v7]];
          dword_140404A6C[73006996] = dword_140404A6C[v22 + 129716769 + (int)dword_140404A6C[4 * v83 + 129719656 + v7]];
          sub_14002D370((float *)&dword_140404A6C[73006998], (float *)&dword_140404A6C[73006981], &v155, &v144, &v141);
          v17 = v154;
          v115 = 60LL * (int)dword_140404A6C[73006994];
          v116 = 60LL * (int)dword_140404A6C[73006995];
          v117 = 60LL * (int)dword_140404A6C[73006996];
          v118 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v116 + 73007034])
               + (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v115 + 73007034]);
          v119 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v117 + 73007033];
          v120 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v117 + 73007034];
          v121 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v116 + 73007033])
               + (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v115 + 73007033]);
          *(float *)&dword_140404A6C[73006989] = (float)((float)(*(float *)&dword_140404A6C[73006999]
                                                               * *(float *)&dword_140404A6C[v116 + 73007032])
                                                       + (float)(*(float *)&dword_140404A6C[73006998]
                                                               * *(float *)&dword_140404A6C[v115 + 73007032]))
                                               + (float)(*(float *)&dword_140404A6C[73007000]
                                                       * *(float *)&dword_140404A6C[v117 + 73007032]);
          *(float *)&dword_140404A6C[73006991] = v118 + v120;
          *(float *)&dword_140404A6C[73006990] = v121 + v119;
        }
      }
    }
LABEL_57:
    v5 = v140;
    goto LABEL_58;
  }
LABEL_60:
  if ( a4 && (int)dword_140404A6C[v7 + 129720373] > 0 )
  {
    v122 = (float *)&dword_140404A6C[v7 + 129720387];
    do
    {
      if ( (unsigned int)sub_1400DF380(
                           (float *)&v147,
                           &v137,
                           &v133,
                           a2,
                           a3,
                           (float *)&dword_140404A6C[43 * v18 + 129720393 + v7],
                           *v122) )
      {
        if ( v133 < *(float *)&dword_140404A6C[73006987] )
        {
          dword_140404A6C[73006981] = v147;
          dword_140404A6C[73006982] = v148;
          dword_140404A6C[73006983] = v149;
          *(float *)&dword_140404A6C[73006984] = v137;
          dword_140404A6C[73006985] = v138;
          *(float *)&dword_140404A6C[73006986] = v139;
          *(float *)&dword_140404A6C[73006987] = v133;
          dword_140404A6C[73006993] = -1;
          dword_140404A6C[73006994] = v18;
        }
      }
      ++v18;
      v122 += 43;
    }
    while ( v18 < (int)dword_140404A6C[v7 + 129720373] );
  }
  return *(float *)&dword_140404A6C[73006987] < 1.0;
}
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
#undef v149
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
#undef v160
#undef v161
#undef v162

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A84898: using guessed type unsigned int;
// 151A848B0: using guessed type unsigned int;
// 151A848B4: using guessed type unsigned int;
// 151A848B8: using guessed type unsigned int;
// 151A848BC: using guessed type unsigned int;

//----- (00000001400DDB70) ----------------------------------------------------
__int64            sub_1400DDB70(int a1, float *a2, float *a3)
{
  float v3; // xmm3_4
  float *v4; // r15
  __int64 v5; // rdi
  float *v6; // r13
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  __int64 v15; // r8
  signed int v16; // esi
  __int64 v17; // r11
  __int64 v18; // rdx
  float v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  float v22; // xmm10_4
  float v23; // xmm11_4
  float v24; // xmm12_4
  float v25; // xmm13_4
  float v26; // xmm14_4
  float v27; // xmm15_4
  signed __int64 v28; // r13
  signed __int64 v29; // r9
  signed __int64 v30; // r10
  signed __int64 v31; // rbx
  signed __int64 v32; // r14
  signed __int64 v33; // r12
  float *v34; // rax
  signed __int64 v35; // r15
  _BYTE *v36; // rcx
  signed __int64 v37; // r8
  unsigned __int64 v38; // rcx
  signed __int64 v39; // rdx
  __int64 v40; // rcx
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
  float v66; // xmm3_4
  float v67; // xmm2_4
  float v68; // xmm4_4
  float v69; // xmm3_4
  float v70; // xmm0_4
  float v71; // xmm5_4
  float v72; // xmm3_4
  float v73; // xmm1_4
  float v74; // xmm6_4
  float v75; // xmm2_4
  float v76; // xmm1_4
  __int64 v77; // rsi
  signed __int64 v78; // rsi
  float v79; // xmm1_4
  float v80; // xmm7_4
  float v81; // xmm8_4
  float v82; // xmm9_4
  float v83; // xmm10_4
  float v84; // xmm11_4
  float v85; // xmm12_4
  float v86; // xmm13_4
  float v87; // xmm14_4
  float v88; // xmm15_4
  float *v89; // rcx
  __int64 v90; // rdx
  float v91; // xmm4_4
  float v92; // xmm5_4
  float v93; // xmm6_4
  float v94; // xmm1_4
  float v95; // xmm3_4
  float v96; // xmm1_4
  _DWORD *v97; // r12
  int *v98; // r14
  __int64 v99; // rbx
  __int64 v100; // rax
  float v101; // xmm15_4
  float v102; // xmm14_4
  float v103; // xmm2_4
  float v104; // xmm1_4
  float v105; // xmm3_4
  __int64 v106; // rax
  float v107; // xmm2_4
  float v108; // xmm1_4
  float v109; // xmm3_4
  float v110; // xmm13_4
  float v111; // xmm11_4
  float v112; // xmm12_4
  float v113; // xmm13_4
  float v114; // xmm11_4
  float v115; // xmm4_4
  float v116; // xmm5_4
  float v117; // xmm10_4
  float v118; // xmm0_4
  float v119; // xmm8_4
  float v120; // xmm9_4
  float v121; // xmm6_4
  __int64 v122; // rax
  float v123; // xmm3_4
  float v124; // xmm4_4
  float v125; // xmm3_4
  float v126; // xmm4_4
  float v127; // xmm5_4
  float v128; // xmm3_4
  float v129; // xmm4_4
  float v130; // xmm0_4
  float v131; // xmm8_4
  float v132; // xmm9_4
  float v133; // xmm6_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DDB70[3296];
#define v135 (*(__int64 (*))(void *)(sr_frame_1400DDB70 + 0)) /* [rsp+8h] */
#define v136 (*(float * (*))(void *)(sr_frame_1400DDB70 + 64)) /* [rsp+48h] */
#define v137 (*(__int64 (*))(void *)(sr_frame_1400DDB70 + 72)) /* [rsp+50h] */
#define v138 (*(float * (*))(void *)(sr_frame_1400DDB70 + 80)) /* [rsp+58h] */
#define v139 (*(__int64 (*))(void *)(sr_frame_1400DDB70 + 88)) /* [rsp+60h] */
#define v140 (*(__int64 (*))(void *)(sr_frame_1400DDB70 + 96)) /* [rsp+68h] */
#define v141 (*(__int64 (*))(void *)(sr_frame_1400DDB70 + 104)) /* [rsp+70h] */
#define v142 (*(__int64 (*))(void *)(sr_frame_1400DDB70 + 112)) /* [rsp+78h] */
#define v143 (*(unsigned int (*))(void *)(sr_frame_1400DDB70 + 120)) /* [rsp+80h] */
#define v144 (*(signed __int64 (*))(void *)(sr_frame_1400DDB70 + 128)) /* [rsp+88h] */
#define v145 (*(signed __int64 (*))(void *)(sr_frame_1400DDB70 + 136)) /* [rsp+90h] */
#define v146 (*(float (*))(void *)(sr_frame_1400DDB70 + 144)) /* [rsp+98h] */
#define v147 (*(__int64 (*))(void *)(sr_frame_1400DDB70 + 152)) /* [rsp+A0h] */
#define v148 (*(signed __int64 (*))(void *)(sr_frame_1400DDB70 + 160)) /* [rsp+A8h] */
#define v149 (*(signed __int64 (*))(void *)(sr_frame_1400DDB70 + 168)) /* [rsp+B0h] */
#define v150 (*(signed __int64 (*))(void *)(sr_frame_1400DDB70 + 176)) /* [rsp+B8h] */
#define v151 (*(signed __int64 (*))(void *)(sr_frame_1400DDB70 + 184)) /* [rsp+C0h] */
#define v152 (*(__int64 (*))(void *)(sr_frame_1400DDB70 + 192)) /* [rsp+C8h] */
#define v153 (*(int (*))(void *)(sr_frame_1400DDB70 + 208)) /* [rsp+D8h] */
#define v154 (*(int (*))(void *)(sr_frame_1400DDB70 + 212)) /* [rsp+DCh] */
#define v155 (*(int (*))(void *)(sr_frame_1400DDB70 + 216)) /* [rsp+E0h] */
#define v156 (*(char (*))(void *)(sr_frame_1400DDB70 + 220)) /* [rsp+E4h] */
#define v157 (*(_BYTE (*)[4])(void *)(sr_frame_1400DDB70 + 224)) /* [rsp+E8h] */
#define v158 (*(_BYTE (*)[4])(void *)(sr_frame_1400DDB70 + 228)) /* [rsp+ECh] */
#define v159 (*(_BYTE (*)[4])(void *)(sr_frame_1400DDB70 + 232)) /* [rsp+F0h] */
#define v160 (*(char (*))(void *)(sr_frame_1400DDB70 + 236)) /* [rsp+F4h] */
#define v161 (*(_BYTE (*)[4])(void *)(sr_frame_1400DDB70 + 240)) /* [rsp+F8h] */
#define v163 (*(_BYTE (*)[4])(void *)(sr_frame_1400DDB70 + 248)) /* [rsp+100h] */
#define v164 (*(_BYTE (*)[3028])(void *)(sr_frame_1400DDB70 + 252)) /* [rsp+104h] */
#define v165 (*(__int64 (*))(void *)(sr_frame_1400DDB70 + 3280)) /* [rsp+CD8h] */

  v3 = *a2;
  v4 = a3;
  v5 = 5210LL * a1;
  v138 = a3;
  v6 = a2;
  v136 = a2;
  v7 = *(float *)&dword_140404A6C[v5 + 129716753];
  if ( v3 < v7 && v7 > *a3 )
    return sub_1401F8B20((unsigned __int64)&v135 ^ v165);
  v8 = *(float *)&dword_140404A6C[v5 + 129716754];
  v9 = a2[1];
  if ( v9 < v8 && v8 > a3[1] )
    return sub_1401F8B20((unsigned __int64)&v135 ^ v165);
  v10 = *(float *)&dword_140404A6C[v5 + 129716755];
  v11 = a2[2];
  if ( v11 < v10 && v10 > a3[2] )
    return sub_1401F8B20((unsigned __int64)&v135 ^ v165);
  v12 = *(float *)&dword_140404A6C[v5 + 129716756];
  if ( v3 > v12 && v12 < *a3 )
    return sub_1401F8B20((unsigned __int64)&v135 ^ v165);
  v13 = *(float *)&dword_140404A6C[v5 + 129716757];
  if ( v9 > v13 && v13 < a3[1] )
    return sub_1401F8B20((unsigned __int64)&v135 ^ v165);
  v14 = *(float *)&dword_140404A6C[v5 + 129716758];
  if ( v11 > v14 && v14 < a3[2] )
    return sub_1401F8B20((unsigned __int64)&v135 ^ v165);
  v15 = 99776LL * (int)dword_140404A6C[v5 + 129716710];
  v16 = 0;
  dword_140404A6C[73006987] = 1065353216;
  v147 = v15;
  v17 = 0;
  v18 = *(int *)((char *)&dword_140404A6C[346715422] + v15);
  v142 = v18;
  if ( v18 < 4 )
  {
    if ( v18 <= 0 )
      goto LABEL_19;
    goto LABEL_17;
  }
  v19 = *(float *)&dword_140404A6C[v5 + 129716726];
  v20 = *(float *)&dword_140404A6C[v5 + 129716720];
  v21 = *(float *)&dword_140404A6C[v5 + 129716727];
  v22 = *(float *)&dword_140404A6C[v5 + 129716721];
  v23 = *(float *)&dword_140404A6C[v5 + 129716728];
  v24 = *(float *)&dword_140404A6C[v5 + 129716722];
  v25 = *(float *)&dword_140404A6C[v5 + 129716729];
  v26 = *(float *)&dword_140404A6C[v5 + 129716730];
  v27 = *(float *)&dword_140404A6C[v5 + 129716731];
  v144 = &v161[-v15] - (_BYTE *)&dword_140404A6C[346715424];
  v148 = &v163[-v15] - (_BYTE *)&dword_140404A6C[346715424];
  v28 = v148;
  v29 = (char *)&v154 - v15 - (char *)&dword_140404A6C[346715424];
  v30 = (char *)&v155 - v15 - (char *)&dword_140404A6C[346715424];
  v145 = &v164[-v15] - (_BYTE *)&dword_140404A6C[346715424];
  v31 = &v157[-v15] - (_BYTE *)&dword_140404A6C[346715424];
  v32 = &v158[-v15] - (_BYTE *)&dword_140404A6C[346715424];
  v33 = &v160 - v15 - (char *)&dword_140404A6C[346715424];
  v34 = (float *)((char *)&dword_140404A6C[346715424] + v15);
  v149 = (char *)&v153 - v15 - (char *)&dword_140404A6C[346715424];
  v35 = v149;
  v150 = &v156 - v15 - (char *)&dword_140404A6C[346715424];
  v151 = &v159[-v15] - (_BYTE *)&dword_140404A6C[346715424];
  v36 = v163 - v15 + 2;
  v37 = v144;
  v152 = v36 - (_BYTE *)&dword_140404A6C[346715424];
  v38 = v18 - 4;
  v39 = v150;
  v40 = (v38 >> 2) + 1;
  v140 = 4 * v40;
  v41 = v151;
  do
  {
    v42 = *(v34 - 1);
    v43 = v34[1];
    v44 = v27 * *v34;
    v45 = v34[3];
    v46 = (float)((float)((float)(v21 * v42) + v22) + (float)(v26 * *v34))
        + (float)(*(float *)&dword_140404A6C[v5 + 129716733] * v43);
    v47 = *(float *)&dword_140404A6C[v5 + 129716734];
    *(float *)((char *)v34 + v35) = (float)((float)((float)(v19 * v42) + v20) + (float)(v25 * *v34))
                                  + (float)(*(float *)&dword_140404A6C[v5 + 129716732] * v43);
    v48 = v23 * v42;
    v49 = v34[2];
    *(float *)((char *)v34 + v29) = v46;
    v50 = v47 * v43;
    v51 = v34[4];
    v52 = (float)((float)(v48 + v24) + v44) + v50;
    v53 = *(float *)&dword_140404A6C[v5 + 129716732] * v51;
    *(float *)((char *)v34 + v30) = v52;
    v54 = (float)((float)((float)(v19 * v49) + v20) + (float)(v25 * v45)) + v53;
    v55 = (float)((float)(v21 * v49) + v22) + (float)(v26 * v45);
    v56 = v27 * v45;
    v57 = v34[6];
    v58 = v55 + (float)(*(float *)&dword_140404A6C[v5 + 129716733] * v51);
    v59 = *(float *)&dword_140404A6C[v5 + 129716734];
    *(float *)((char *)v34 + v39) = v54;
    v60 = v23 * v49;
    v61 = v34[5];
    v62 = v59 * v51;
    v63 = v34[7];
    *(float *)((char *)v34 + v31) = v58;
    v64 = (float)((float)(v60 + v24) + v56) + v62;
    v65 = *(float *)&dword_140404A6C[v5 + 129716732] * v63;
    *(float *)((char *)v34 + v32) = v64;
    *(float *)((char *)v34 + v41) = (float)((float)((float)(v19 * v61) + v20) + (float)(v25 * v57)) + v65;
    v66 = (float)(v21 * v61) + v22;
    v67 = v23 * v61;
    v68 = v34[8];
    v69 = v66 + (float)(v26 * v57);
    v70 = v27 * v57;
    v71 = v34[9];
    v72 = v69 + (float)(*(float *)&dword_140404A6C[v5 + 129716733] * v63);
    v73 = *(float *)&dword_140404A6C[v5 + 129716734] * v63;
    v74 = v34[10];
    *(float *)((char *)v34 + v33) = v72;
    v75 = (float)((float)(v67 + v24) + v70) + v73;
    v76 = *(float *)&dword_140404A6C[v5 + 129716732];
    v77 = v152;
    *(float *)((char *)v34 + v37) = v75;
    *(float *)((char *)v34 + v77) = (float)((float)((float)(v19 * v68) + v20) + (float)(v25 * v71)) + (float)(v76 * v74);
    v78 = v145;
    v79 = *(float *)&dword_140404A6C[v5 + 129716734] * v74;
    *(float *)((char *)v34 + v28) = (float)((float)((float)(v21 * v68) + v22) + (float)(v26 * v71))
                                  + (float)(*(float *)&dword_140404A6C[v5 + 129716733] * v74);
    *(float *)((char *)v34 + v78) = (float)((float)((float)(v23 * v68) + v24) + (float)(v27 * v71)) + v79;
    v34 += 12;
    --v40;
  }
  while ( v40 );
  v18 = v142;
  v17 = v140;
  v16 = 0;
  v4 = v138;
  v6 = v136;
  v15 = v147;
  if ( v140 < v142 )
  {
LABEL_17:
    v80 = *(float *)&dword_140404A6C[v5 + 129716726];
    v81 = *(float *)&dword_140404A6C[v5 + 129716720];
    v82 = *(float *)&dword_140404A6C[v5 + 129716727];
    v83 = *(float *)&dword_140404A6C[v5 + 129716721];
    v84 = *(float *)&dword_140404A6C[v5 + 129716728];
    v85 = *(float *)&dword_140404A6C[v5 + 129716722];
    v86 = *(float *)&dword_140404A6C[v5 + 129716729];
    v87 = *(float *)&dword_140404A6C[v5 + 129716730];
    v88 = *(float *)&dword_140404A6C[v5 + 129716731];
    v89 = (float *)((char *)&dword_140404A6C[3 * v17 + 346715424] + v15);
    v90 = v18 - v17;
    do
    {
      v91 = *(v89 - 1);
      v92 = *v89;
      v93 = v89[1];
      v94 = *(float *)&dword_140404A6C[v5 + 129716733] * v93;
      *(float *)((uintptr_t)v89 + (uintptr_t)&v153 - v15 - (uintptr_t)&dword_140404A6C[346715424]) = (float)((float)((float)(v80 * v91) + v81)
                                                                                                  + (float)(v86 * *v89))
                                                                                          + (float)(*(float *)&dword_140404A6C[v5 + 129716732]
                                                                                                  * v93);
      v95 = (float)((float)((float)(v82 * v91) + v83) + (float)(v87 * v92)) + v94;
      v96 = *(float *)&dword_140404A6C[v5 + 129716734] * v93;
      *(float *)((uintptr_t)v89 + (uintptr_t)&v154 - v15 - (uintptr_t)&dword_140404A6C[346715424]) = v95;
      *(float *)((uintptr_t)v89 + (uintptr_t)&v155 - v15 - (uintptr_t)&dword_140404A6C[346715424]) = (float)((float)((float)(v84 * v91) + v85)
                                                                                                  + (float)(v88 * v92))
                                                                                          + v96;
      v89 += 3;
      --v90;
    }
    while ( v90 );
  }
LABEL_19:
  if ( *(int *)((char *)&dword_140404A6C[346718495] + v15) > 0 )
  {
    v97 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v5 * 4 + 523082236);
    v98 = (int *)((char *)&dword_140404A6C[346718498] + v15);
    do
    {
      v99 = 3LL * *(v98 - 1);
      v100 = *v98;
      LODWORD(v101) = *(&v154 + 3 * *(v98 - 1));
      LODWORD(v102) = *(&v153 + 3 * *(v98 - 1));
      v146 = *((float *)&v155 + 3 * *(v98 - 1));
      v103 = *((float *)&v154 + 3 * v100);
      v104 = *((float *)&v155 + 3 * v100);
      v105 = *((float *)&v153 + 3 * v100);
      v106 = v98[1];
      *((float *)&v140 + 1) = v103;
      v107 = v103 - v101;
      *(float *)&v141 = v104;
      v108 = v104 - v146;
      *(float *)&v140 = v105;
      v109 = v105 - v102;
      v145 = __PAIR64__(LODWORD(v101), LODWORD(v102));
      v110 = *((float *)&v155 + 3 * v106);
      v111 = *((float *)&v153 + 3 * v106);
      HIDWORD(v138) = *(&v154 + 3 * v106);
      v112 = *((float *)&v138 + 1) - v101;
      *(float *)&v139 = v110;
      v113 = v110 - v146;
      *(float *)&v138 = v111;
      v114 = v111 - v102;
      v115 = (float)((float)(*((float *)&v138 + 1) - v101) * v108) - (float)(v113 * v107);
      v116 = (float)(v113 * v109) - (float)(v114 * v108);
      v117 = (float)(v114 * v107) - (float)((float)(*((float *)&v138 + 1) - v101) * v109);
      v118 = fsqrt((float)((float)(v116 * v116) + (float)(v115 * v115)) + (float)(v117 * v117));
      if ( v118 == 0.0 )
      {
        v136 = nullptr;
        v119 = 0.0;
        v120 = 0.0;
        LODWORD(v137) = 0;
        v121 = 0.0;
      }
      else
      {
        v119 = (float)(1.0 / v118) * v115;
        v120 = (float)(1.0 / v118) * v116;
        v121 = (float)(1.0 / v118) * v117;
        *(float *)&v136 = v119;
        *((float *)&v136 + 1) = v120;
        *(float *)&v137 = v121;
      }
      if ( sub_140077FA0(
             (float *)&v142,
             (float *)&v136,
             (float *)&v144,
             v6,
             v4,
             (float *)&v145,
             (float *)&v140,
             (float *)&v138)
        && *(float *)&v144 < *(float *)&dword_140404A6C[73006987] )
      {
        dword_140404A6C[73006994] = dword_140404A6C[v5 + 129716769];
        dword_140404A6C[73006995] = dword_140404A6C[73006994];
        dword_140404A6C[73006996] = dword_140404A6C[73006994];
        *(_QWORD *)&dword_140404A6C[73006981] = v142;
        dword_140404A6C[73006983] = v143;
        *(float *)&dword_140404A6C[73006984] = v119;
        *(float *)&dword_140404A6C[73006985] = v120;
        *(float *)&dword_140404A6C[73006986] = v121;
        dword_140404A6C[73006987] = v144;
        dword_140404A6C[73006993] = v16;
        sub_14002D370(
          (float *)&dword_140404A6C[73006998],
          (float *)&dword_140404A6C[73006981],
          (float *)&v145,
          (float *)&v140,
          (float *)&v138);
        *(_QWORD *)&dword_140404A6C[73006989] = 0;
        dword_140404A6C[73006991] = 0;
      }
      if ( *v97 == 4 )
      {
        v140 = (__int64)v138;
        LODWORD(v141) = v139;
        v122 = v98[2];
        v123 = *((float *)&v155 + 3 * v122);
        v124 = *((float *)&v153 + 3 * v122);
        HIDWORD(v138) = *(&v154 + 3 * v122);
        *(float *)&v139 = v123;
        v125 = v123 - *((float *)&v155 + v99);
        *(float *)&v138 = v124;
        v126 = v124 - v102;
        v127 = (float)((float)(*((float *)&v138 + 1) - v101) * v113) - (float)(v125 * v112);
        v128 = (float)(v125 * v114) - (float)(v126 * v113);
        v129 = (float)(v126 * v112) - (float)((float)(*((float *)&v138 + 1) - v101) * v114);
        v130 = fsqrt((float)((float)(v128 * v128) + (float)(v127 * v127)) + (float)(v129 * v129));
        if ( v130 == 0.0 )
        {
          v136 = nullptr;
          v131 = 0.0;
          v132 = 0.0;
          LODWORD(v137) = 0;
          v133 = 0.0;
        }
        else
        {
          v131 = (float)(1.0 / v130) * v127;
          v132 = (float)(1.0 / v130) * v128;
          v133 = (float)(1.0 / v130) * v129;
          *(float *)&v136 = v131;
          *((float *)&v136 + 1) = v132;
          *(float *)&v137 = v133;
        }
        if ( sub_140077FA0(
               (float *)&v142,
               (float *)&v136,
               (float *)&v144,
               v6,
               v4,
               (float *)&v145,
               (float *)&v140,
               (float *)&v138)
          && *(float *)&v144 < *(float *)&dword_140404A6C[73006987] )
        {
          dword_140404A6C[73006994] = dword_140404A6C[v5 + 129716769];
          dword_140404A6C[73006995] = dword_140404A6C[73006994];
          dword_140404A6C[73006996] = dword_140404A6C[73006994];
          *(_QWORD *)&dword_140404A6C[73006981] = v142;
          dword_140404A6C[73006983] = v143;
          *(float *)&dword_140404A6C[73006984] = v131;
          *(float *)&dword_140404A6C[73006985] = v132;
          *(float *)&dword_140404A6C[73006986] = v133;
          dword_140404A6C[73006987] = v144;
          dword_140404A6C[73006993] = v16;
          sub_14002D370(
            (float *)&dword_140404A6C[73006998],
            (float *)&dword_140404A6C[73006981],
            (float *)&v145,
            (float *)&v140,
            (float *)&v138);
          *(_QWORD *)&dword_140404A6C[73006989] = 0;
          dword_140404A6C[73006991] = 0;
        }
      }
      ++v16;
      v97 += 16;
      v98 += 13;
    }
    while ( v16 < *(int *)((char *)&dword_140404A6C[346718495] + v147) );
  }
  return sub_1401F8B20((unsigned __int64)&v135 ^ v165);
}
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
#undef v149
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
#undef v160
#undef v161
#undef v163
#undef v164
#undef v165

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A84898: using guessed type unsigned int;
// 151A848A0: using guessed type unsigned int;
// 151A848A8: using guessed type unsigned int;
// 151A848B0: using guessed type unsigned int;
// 151A848B4: using guessed type unsigned int;
// 151A848B8: using guessed type unsigned int;
// 151A848BC: using guessed type unsigned int;

//----- (00000001400DE770) ----------------------------------------------------
_BOOL8            sub_1400DE770(_DWORD *a1, float *a2, float *a3, float *a4, float *a5, __int64 a6, float a7, float a8)
{
  float v10; // xmm7_4
  signed int v12; // r15d
  float v13; // xmm0_4
  int v14; // r8d
  __int64 v15; // r14
  __m128i v16; // xmm12
  __m128i v17; // xmm8
  float v18; // xmm11_4
  float v19; // xmm12_4
  float v20; // xmm8_4
  __int64 v21; // r13
  __int64 v22; // r10
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  float v26; // xmm0_4
  float v27; // xmm5_4
  float v28; // xmm10_4
  __int64 v29; // rax
  float v30; // xmm10_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  __int64 v34; // rax
  float v35; // xmm4_4
  float v36; // xmm14_4
  float v37; // xmm15_4
  __int64 v38; // rax
  float v39; // xmm9_4
  float v40; // xmm12_4
  float v41; // xmm8_4
  float v42; // xmm15_4
  float v43; // xmm9_4
  float v44; // xmm12_4
  float v45; // xmm8_4
  float v46; // xmm2_4
  float v47; // xmm1_4
  float v48; // xmm3_4
  float v49; // xmm14_4
  float v50; // xmm5_4
  float v51; // xmm4_4
  float v52; // xmm0_4
  float v53; // xmm7_4
  float v54; // xmm10_4
  float v55; // xmm11_4
  float v56; // xmm2_4
  int v57; // xmm1_4
  __int64 v58; // rax
  float v59; // xmm9_4
  float v60; // xmm12_4
  float v61; // xmm3_4
  float v62; // xmm8_4
  float v63; // xmm9_4
  float v64; // xmm0_4
  float v65; // xmm10_4
  float v66; // xmm11_4
  float v67; // xmm7_4
  float v68; // xmm2_4
  int v69; // xmm1_4
  __int64 v70; // rax
  signed int v71; // r15d
  __int16 v72; // cx
  __int64 v73; // r13
  __int64 v74; // r12
  __int64 v75; // rax
  float v76; // xmm4_4
  float v77; // xmm5_4
  float v78; // xmm1_4
  float v79; // xmm13_4
  float v80; // xmm9_4
  float v81; // xmm12_4
  float v82; // xmm8_4
  float v83; // xmm4_4
  float v84; // xmm15_4
  float v85; // xmm14_4
  float v86; // xmm2_4
  float v87; // xmm0_4
  float v88; // xmm13_4
  float v89; // xmm9_4
  float v90; // xmm12_4
  float v91; // xmm3_4
  float v92; // xmm8_4
  float v93; // xmm1_4
  float v94; // xmm14_4
  float v95; // xmm15_4
  float v96; // xmm2_4
  float v97; // xmm4_4
  float v98; // xmm5_4
  float v99; // xmm4_4
  float v100; // xmm0_4
  float v101; // xmm7_4
  float v102; // xmm10_4
  float v103; // xmm11_4
  float v104; // xmm2_4
  int v105; // xmm1_4
  float v106; // xmm2_4
  int v107; // xmm1_4
  float v108; // xmm9_4
  float v109; // xmm13_4
  float v110; // xmm12_4
  float v111; // xmm3_4
  float v112; // xmm9_4
  float v113; // xmm8_4
  float v114; // xmm0_4
  float v115; // xmm10_4
  float v116; // xmm11_4
  float v117; // xmm7_4
  float v118; // xmm2_4
  int v119; // xmm1_4
  BOOL v120; // eax
  float v121; // xmm2_4
  int v122; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DE770[416];
#define v124 (*(float (*))(void *)(sr_frame_1400DE770 + 0)) /* [rsp+40h] */
#define v125 (*(float (*))(void *)(sr_frame_1400DE770 + 4)) /* [rsp+44h] */
#define v126 (*(float (*))(void *)(sr_frame_1400DE770 + 8)) /* [rsp+48h] */
#define v127 (*(int (*))(void *)(sr_frame_1400DE770 + 16)) /* [rsp+50h] */
#define v128 (*(int (*))(void *)(sr_frame_1400DE770 + 20)) /* [rsp+54h] */
#define v129 (*(int (*))(void *)(sr_frame_1400DE770 + 24)) /* [rsp+58h] */
#define v130 (*(float (*))(void *)(sr_frame_1400DE770 + 32)) /* [rsp+60h] */
#define v131 (*(float (*))(void *)(sr_frame_1400DE770 + 36)) /* [rsp+64h] */
#define v132 (*(float (*))(void *)(sr_frame_1400DE770 + 40)) /* [rsp+68h] */
#define v133 (*(float (*))(void *)(sr_frame_1400DE770 + 44)) /* [rsp+6Ch] */
#define v134 (*(float (*))(void *)(sr_frame_1400DE770 + 48)) /* [rsp+70h] */
#define v135 (*(float (*))(void *)(sr_frame_1400DE770 + 52)) /* [rsp+74h] */
#define v136 (*(float (*))(void *)(sr_frame_1400DE770 + 56)) /* [rsp+78h] */
#define v137 (*(float (*))(void *)(sr_frame_1400DE770 + 60)) /* [rsp+7Ch] */
#define v138 (*(float (*))(void *)(sr_frame_1400DE770 + 64)) /* [rsp+80h] */
#define v139 (*(float (*))(void *)(sr_frame_1400DE770 + 72)) /* [rsp+88h] */
#define v140 (*(float (*))(void *)(sr_frame_1400DE770 + 76)) /* [rsp+8Ch] */
#define v141 (*(float (*))(void *)(sr_frame_1400DE770 + 80)) /* [rsp+90h] */
#define v142 (*(float (*))(void *)(sr_frame_1400DE770 + 88)) /* [rsp+98h] */
#define v143 (*(float (*))(void *)(sr_frame_1400DE770 + 92)) /* [rsp+9Ch] */
#define v144 (*(float (*))(void *)(sr_frame_1400DE770 + 96)) /* [rsp+A0h] */
#define v145 (*(float (*))(void *)(sr_frame_1400DE770 + 104)) /* [rsp+A8h] */
#define v146 (*(float (*))(void *)(sr_frame_1400DE770 + 108)) /* [rsp+ACh] */
#define v147 (*(float (*))(void *)(sr_frame_1400DE770 + 112)) /* [rsp+B0h] */
#define v148 (*(float (*))(void *)(sr_frame_1400DE770 + 120)) /* [rsp+B8h] */
#define v149 (*(__int64 (*))(void *)(sr_frame_1400DE770 + 128)) /* [rsp+C0h] */
#define v150 (*(__int16 (*))(void *)(sr_frame_1400DE770 + 384)) /* [rsp+1C0h] */
#define v151 (*(float * (*))(void *)(sr_frame_1400DE770 + 392)) /* [rsp+1C8h] */
#define v152 (*(float (*))(void *)(sr_frame_1400DE770 + 408)) /* [rsp+1D8h] */

  v151 = a4;
  v10 = a8;
  v12 = 0;
  v13 = 1.0;
  v14 = HIWORD(LODWORD(a7));
  v15 = 58LL * LOWORD(a7);
  v16 = _mm_cvtsi32_si128(*(_DWORD *)(a6 + 4));
  v17 = _mm_cvtsi32_si128(*(_DWORD *)(a6 + 8));
  v18 = (float)*(int *)a6;
  *a3 = 1.0;
  v150 = v14;
  v19 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v16), f32)[0];
  v20 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v17), f32)[0];
  v132 = v18;
  v152 = v19;
  v131 = v20;
  if ( (int)dword_140404A6C[v15 + 20074623] > 0 )
  {
    v21 = 0;
    v22 = 0;
    v149 = 0;
    do
    {
      v23 = *(_QWORD *)&dword_140404A6C[v15 + 20074615];
      v24 = *(_QWORD *)&dword_140404A6C[v15 + 20074631];
      v25 = 3 * *(_DWORD *)(v22 + v24);
      v26 = v18 + *(float *)(v23 + 4 * v25);
      v27 = v19 + *(float *)(v23 + 4 * v25 + 4);
      v28 = v20 + *(float *)(v23 + 4 * v25 + 8);
      v29 = 3 * *(_DWORD *)(v22 + v24 + 4);
      v30 = v28 * v10;
      v148 = v26 * v10;
      v31 = v18 + *(float *)(v23 + 4 * v29);
      v32 = v19 + *(float *)(v23 + 4 * v29 + 4);
      v33 = v20 + *(float *)(v23 + 4 * v29 + 8);
      LODWORD(v29) = *(_DWORD *)(v22 + v24 + 8);
      v139 = v26 * v10;
      v34 = 3 * (int)v29;
      v133 = v27 * v10;
      v35 = v20 + *(float *)(v23 + 4 * v34 + 8);
      v36 = v18 + *(float *)(v23 + 4 * v34);
      v37 = v19 + *(float *)(v23 + 4 * v34 + 4);
      LODWORD(v34) = *(_DWORD *)(v22 + v24 + 12);
      v140 = v27 * v10;
      v38 = 3 * (int)v34;
      v138 = v35 * v10;
      v39 = v18 + *(float *)(v23 + 4 * v38);
      v40 = v19 + *(float *)(v23 + 4 * v38 + 4);
      v41 = v20 + *(float *)(v23 + 4 * v38 + 8);
      v137 = v37 * v10;
      v42 = (float)(v37 * v10) - (float)(v27 * v10);
      v135 = (float)(v35 * v10) - v30;
      v43 = v39 * v10;
      v44 = v40 * v10;
      v45 = v41 * v10;
      v143 = v32 * v10;
      v46 = (float)(v32 * v10) - (float)(v27 * v10);
      v144 = v33 * v10;
      v47 = (float)(v33 * v10) - v30;
      v142 = v31 * v10;
      v48 = (float)(v31 * v10) - (float)(v26 * v10);
      v136 = v36 * v10;
      v49 = (float)(v36 * v10) - (float)(v26 * v10);
      v134 = v30;
      v141 = v30;
      v50 = (float)(v42 * v47) - (float)(v135 * v46);
      v145 = v43;
      v146 = v44;
      v147 = v45;
      v51 = (float)(v135 * v48) - (float)(v49 * v47);
      v130 = (float)(v49 * v46) - (float)(v42 * v48);
      v52 = fsqrt((float)((float)(v51 * v51) + (float)(v50 * v50)) + (float)(v130 * v130));
      if ( v52 == 0.0 )
      {
        v124 = 0.0;
        v54 = 0.0;
        v125 = 0.0;
        v55 = 0.0;
        v126 = 0.0;
        v53 = 0.0;
      }
      else
      {
        v53 = (float)(1.0 / v52) * v130;
        v54 = (float)(1.0 / v52) * v50;
        v55 = (float)(1.0 / v52) * v51;
        v124 = v54;
        v126 = v53;
        v125 = v55;
      }
      if ( sub_140077FA0((float *)&v127, &v124, &a7, a4, a5, &v139, &v142, &v136) )
      {
        v56 = a7;
        if ( a7 < *a3 )
        {
          v57 = v128;
          *a1 = v127;
          a1[2] = v129;
          a1[1] = v57;
          *a2 = v54;
          a2[1] = v55;
          a2[2] = v53;
          *a3 = v56;
          v58 = *(_QWORD *)&dword_140404A6C[v15 + 20074633];
          dword_140404A6C[73007010] = v12;
          dword_140404A6C[73007008] = *(_DWORD *)(v58 + v21);
        }
      }
      v59 = v43 - v148;
      v60 = v44 - v133;
      v61 = (float)(v60 * v135) - (float)((float)(v45 - v134) * v42);
      v62 = (float)((float)(v45 - v134) * v49) - (float)(v59 * v135);
      v63 = (float)(v59 * v42) - (float)(v60 * v49);
      v64 = fsqrt((float)((float)(v62 * v62) + (float)(v61 * v61)) + (float)(v63 * v63));
      if ( v64 == 0.0 )
      {
        v124 = 0.0;
        v65 = 0.0;
        v125 = 0.0;
        v66 = 0.0;
        v126 = 0.0;
        v67 = 0.0;
      }
      else
      {
        v65 = (float)(1.0 / v64) * v61;
        v66 = (float)(1.0 / v64) * v62;
        v67 = (float)(1.0 / v64) * v63;
        v124 = v65;
        v125 = v66;
        v126 = v67;
      }
      if ( sub_140077FA0((float *)&v127, &v124, &a7, v151, a5, &v139, &v136, &v145) )
      {
        v68 = a7;
        if ( a7 < *a3 )
        {
          v69 = v128;
          *a1 = v127;
          a1[2] = v129;
          a1[1] = v69;
          *a2 = v65;
          a2[1] = v66;
          a2[2] = v67;
          *a3 = v68;
          v70 = *(_QWORD *)&dword_140404A6C[v15 + 20074633];
          dword_140404A6C[73007010] = v12;
          dword_140404A6C[73007008] = *(_DWORD *)(v70 + v21);
        }
      }
      v10 = a8;
      v22 = v149 + 16;
      v18 = v132;
      ++v12;
      v19 = v152;
      v21 += 4;
      v20 = v131;
      a4 = v151;
      v149 += 16;
    }
    while ( v12 < (int)dword_140404A6C[v15 + 20074623] );
    v13 = *a3;
    LOWORD(v14) = v150;
  }
  v71 = 0;
  if ( (int)dword_140404A6C[v15 + 20074651] > 0 )
  {
    v72 = 1;
    v73 = 0;
    LODWORD(v130) = 1;
    v74 = 0;
    do
    {
      if ( ((unsigned __int16)v72 & (unsigned __int16)v14 & 0x3FF) == 0 )
      {
        v75 = *(_QWORD *)&dword_140404A6C[v15 + 20074653];
        v76 = v19;
        v77 = v20 + *(float *)(v75 + v74 + 8);
        v78 = v152 + *(float *)(v75 + v74 + 40);
        v79 = v19 + *(float *)(v75 + v74 + 16);
        v80 = v19 + *(float *)(v75 + v74 + 28);
        v81 = v131 + *(float *)(v75 + v74 + 32);
        v82 = v20 + *(float *)(v75 + v74 + 20);
        v83 = (float)(v76 + *(float *)(v75 + v74 + 4)) * v10;
        v84 = (float)(v18 + *(float *)(v75 + v74 + 24)) * v10;
        v85 = v18 + *(float *)(v75 + v74 + 12);
        v86 = (float)(v18 + *(float *)(v75 + v74)) * v10;
        v145 = (float)(v18 + *(float *)(v75 + v74 + 36)) * v10;
        v87 = v131 + *(float *)(v75 + v74 + 44);
        v139 = v86;
        v88 = v79 * v10;
        v147 = v87 * v10;
        v89 = v80 * v10;
        v90 = v81 * v10;
        v91 = v88 - v83;
        v92 = v82 * v10;
        v134 = v83;
        v140 = v83;
        v133 = v77 * v10;
        v141 = v77 * v10;
        v146 = v78 * v10;
        v93 = v92 - (float)(v77 * v10);
        v142 = v85 * v10;
        v94 = (float)(v85 * v10) - v86;
        v136 = v84;
        v95 = v84 - v86;
        v143 = v88;
        v144 = v92;
        v96 = v89 - v83;
        v137 = v89;
        v138 = v90;
        v97 = v90 - (float)(v77 * v10);
        v98 = (float)(v96 * v93) - (float)(v97 * v91);
        v135 = (float)(v95 * v91) - (float)(v96 * v94);
        v99 = (float)(v97 * v94) - (float)(v95 * v93);
        v100 = fsqrt((float)((float)(v99 * v99) + (float)(v98 * v98)) + (float)(v135 * v135));
        if ( v100 == 0.0 )
        {
          v124 = 0.0;
          v102 = 0.0;
          v125 = 0.0;
          v103 = 0.0;
          v126 = 0.0;
          v101 = 0.0;
        }
        else
        {
          v101 = (float)(1.0 / v100) * v135;
          v102 = (float)(1.0 / v100) * v98;
          v103 = (float)(1.0 / v100) * v99;
          v124 = v102;
          v126 = v101;
          v125 = v103;
        }
        if ( sub_140077FA0((float *)&v127, &v124, &a7, a4, a5, &v139, &v142, &v136) )
        {
          v104 = a7;
          if ( a7 < *a3 )
          {
            v105 = v128;
            *a1 = v127;
            a1[2] = v129;
            a1[1] = v105;
            *a2 = v102;
            a2[1] = v103;
            a2[2] = v101;
            *a3 = v104;
            dword_140404A6C[73007010] = v71 | 0x10000;
            dword_140404A6C[73007008] = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v15 + 20074633] + v73);
          }
        }
        if ( sub_140077FA0((float *)&v127, &v124, &a7, v151, a5, &v139, &v136, &v145) )
        {
          v106 = a7;
          if ( a7 < *a3 )
          {
            v107 = v128;
            *a1 = v127;
            a1[2] = v129;
            a1[1] = v107;
            *a2 = v102;
            a2[1] = v103;
            a2[2] = v101;
            *a3 = v106;
            dword_140404A6C[73007010] = v71 | 0x10000;
            dword_140404A6C[73007008] = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v15 + 20074633] + v73);
          }
        }
        v108 = v89 - v134;
        v109 = v88 - v134;
        v110 = v90 - v133;
        v111 = (float)(v109 * v110) - (float)((float)(v92 - v133) * v108);
        v112 = (float)(v108 * v94) - (float)(v109 * v95);
        v113 = (float)((float)(v92 - v133) * v95) - (float)(v110 * v94);
        v114 = fsqrt((float)((float)(v113 * v113) + (float)(v111 * v111)) + (float)(v112 * v112));
        if ( v114 == 0.0 )
        {
          v124 = 0.0;
          v115 = 0.0;
          v125 = 0.0;
          v116 = 0.0;
          v126 = 0.0;
          v117 = 0.0;
        }
        else
        {
          v115 = (float)(1.0 / v114) * v111;
          v116 = (float)(1.0 / v114) * v113;
          v117 = (float)(1.0 / v114) * v112;
          v124 = v115;
          v125 = v116;
          v126 = v117;
        }
        if ( sub_140077FA0((float *)&v127, &v124, &a7, v151, a5, &v139, &v136, &v142) )
        {
          v118 = a7;
          if ( a7 < *a3 )
          {
            v119 = v128;
            *a1 = v127;
            a1[2] = v129;
            a1[1] = v119;
            *a2 = v115;
            a2[1] = v116;
            a2[2] = v117;
            *a3 = v118;
            dword_140404A6C[73007010] = v71 | 0x10000;
            dword_140404A6C[73007008] = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v15 + 20074633] + v73);
          }
        }
        v120 = sub_140077FA0((float *)&v127, &v124, &a7, v151, a5, &v139, &v145, &v136);
        LOWORD(v14) = v150;
        if ( v120 )
        {
          v121 = a7;
          if ( a7 < *a3 )
          {
            v122 = v128;
            *a1 = v127;
            a1[2] = v129;
            a1[1] = v122;
            *a2 = v115;
            a2[1] = v116;
            a2[2] = v117;
            *a3 = v121;
            dword_140404A6C[73007010] = v71 | 0x10000;
            dword_140404A6C[73007008] = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v15 + 20074633] + v73);
          }
        }
      }
      ++v71;
      v10 = a8;
      v74 += 48;
      v18 = v132;
      v73 += 4;
      v19 = v152;
      v20 = v131;
      a4 = v151;
      v130 = COERCE_FLOAT(__ROL4__(LODWORD(v130), 1));
      v72 = LOWORD(v130);
    }
    while ( v71 < (int)dword_140404A6C[v15 + 20074651] );
    v13 = *a3;
  }
  return v13 < 1.0;
}
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
#undef v149
#undef v150
#undef v151
#undef v152

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848EC: using guessed type unsigned int;
// 151A848F4: using guessed type unsigned int;

//----- (00000001400DF380) ----------------------------------------------------
__int64            sub_1400DF380(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float a7)
{
  float v7; // xmm8_4
  float v8; // xmm7_4
  float v9; // xmm4_4
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm2_4
  float v14; // xmm8_4
  float v15; // xmm9_4
  float v16; // xmm10_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm6_4
  float v22; // xmm4_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm5_4

  v7 = *a5 - *a4;
  v8 = *a6 - *a4;
  v9 = a6[2] - a4[2];
  v10 = a5[1] - a4[1];
  v11 = a5[2] - a4[2];
  v12 = fsqrt((float)((float)(v10 * v10) + (float)(v7 * v7)) + (float)(v11 * v11));
  v13 = a6[1] - a4[1];
  if ( v12 == 0.0 )
  {
    v14 = 0.0;
    v15 = 0.0;
    v16 = 0.0;
  }
  else
  {
    v14 = v7 * (float)(1.0 / v12);
    v15 = v10 * (float)(1.0 / v12);
    v16 = v11 * (float)(1.0 / v12);
  }
  v17 = (float)((float)(v13 * v15) + (float)(v8 * v14)) + (float)(v9 * v16);
  *a3 = v17;
  if ( v17 < 0.0 )
    return 0;
  v18 = a7 * a7;
  v19 = (float)((float)(v13 * v13) + (float)(v8 * v8)) + (float)(v9 * v9);
  v20 = v19 - (float)(v17 * v17);
  if ( v20 > (float)(a7 * a7) )
    return 0;
  if ( v19 < v18 )
    return 0;
  v21 = (float)(v17 - fsqrt(v18 - v20)) / v12;
  *a3 = v21;
  if ( v21 > 1.0 )
    return 0;
  v22 = a5[2];
  v23 = a4[2];
  v24 = (float)(a5[1] - a4[1]) * v21;
  v25 = (float)((float)(*a5 - *a4) * v21) + *a4;
  *a1 = v25;
  a1[1] = v24 + a4[1];
  a1[2] = (float)((float)(v22 - v23) * v21) + a4[2];
  *a2 = v25 - *a6;
  a2[1] = a1[1] - a6[1];
  a2[2] = a1[2] - a6[2];
  sub_14007A240((__int64)a2, a2);
  return 1;
}


//----- (00000001400DF5B0) ----------------------------------------------------
_BOOL8            sub_1400DF5B0(float *a1, float *a2, int a3, int a4)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r12
  unsigned int *v9; // rdi
  __int64 v10; // rax
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  __int64 v16; // rax
  __int64 v17; // rax
  float v18; // xmm3_4
  float v19; // xmm5_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm7_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm3_4
  float v29; // xmm9_4
  float v30; // xmm8_4
  float v31; // xmm7_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DF5B0[256];
#define v33 (*(float (*)[2])(void *)(sr_frame_1400DF5B0 + 0)) /* [rsp+48h] */
#define v34 (*(float (*))(void *)(sr_frame_1400DF5B0 + 8)) /* [rsp+50h] */
#define v35 (*(float (*))(void *)(sr_frame_1400DF5B0 + 16)) /* [rsp+58h] */
#define v36 (*(float (*))(void *)(sr_frame_1400DF5B0 + 20)) /* [rsp+5Ch] */
#define v37 (*(float (*))(void *)(sr_frame_1400DF5B0 + 24)) /* [rsp+60h] */
#define v38 (*(float (*)[4])(void *)(sr_frame_1400DF5B0 + 32)) /* [rsp+68h] */
#define v39 (*(float (*)[4])(void *)(sr_frame_1400DF5B0 + 48)) /* [rsp+78h] */
#define v40 (*(unsigned int (*))(void *)(sr_frame_1400DF5B0 + 64)) /* [rsp+88h] */
#define v41 (*(__int64 (*))(void *)(sr_frame_1400DF5B0 + 68)) /* [rsp+8Ch] */
#define v42 (*(__int64 (*))(void *)(sr_frame_1400DF5B0 + 240)) /* [rsp+138h] */

  dword_140404A6C[73006987] = 1065353216;
  v6 = a4 + 15432LL * a3;
  v7 = (int)dword_140404A6C[v6 + 358300580];
  if ( (int)v7 >= (int)dword_140404A6C[v6 + 358300584] )
    return 0;
  v8 = 5144LL * a3;
  v9 = &dword_140404A6C[3 * v8 + 358300589 + 3 * v7];
  do
  {
    v10 = v8 + (int)*v9;
    v11 = *(float *)&dword_140404A6C[3 * v8 + 358297508 + 3 * (int)*(v9 - 1)];
    v12 = *(float *)&dword_140404A6C[3 * v8 + 358297509 + 3 * (int)*(v9 - 1)];
    LODWORD(v39[0]) = dword_140404A6C[3 * v8 + 358297507 + 3 * (int)*(v9 - 1)];
    v39[1] = v11;
    v13 = *(float *)&dword_140404A6C[3 * v10 + 358297509];
    v14 = *(float *)&dword_140404A6C[3 * v10 + 358297507];
    v15 = *(float *)&dword_140404A6C[3 * v10 + 358297508];
    v16 = (int)v9[1];
    v38[2] = v13;
    v17 = v8 + v16;
    v18 = v13 - v12;
    v38[1] = v15;
    v19 = v15 - v11;
    v38[0] = v14;
    v20 = v14 - v39[0];
    v39[2] = v12;
    v21 = *(float *)&dword_140404A6C[3 * v17 + 358297509];
    v22 = *(float *)&dword_140404A6C[3 * v17 + 358297507];
    v36 = *(float *)&dword_140404A6C[3 * v17 + 358297508];
    v37 = v21;
    v23 = v21 - v12;
    v35 = v22;
    v24 = v22 - v39[0];
    v25 = (float)((float)(v36 - v11) * v18) - (float)(v23 * v19);
    v26 = (float)(v23 * v20) - (float)(v24 * v18);
    v27 = (float)(v24 * v19) - (float)((float)(v36 - v11) * v20);
    v28 = fsqrt((float)((float)(v26 * v26) + (float)(v25 * v25)) + (float)(v27 * v27));
    if ( v28 == 0.0 )
    {
      v33[0] = 0.0;
      v29 = 0.0;
      v34 = 0.0;
      v31 = 0.0;
      v30 = 0.0;
    }
    else
    {
      v29 = v25 * (float)(1.0 / v28);
      v30 = v27 * (float)(1.0 / v28);
      v33[0] = v29;
      v31 = v26 * (float)(1.0 / v28);
      v34 = v30;
    }
    v33[1] = v31;
    if ( sub_140077FA0((float *)&v40, v33, (float *)&v42, a1, a2, v39, v38, &v35)
      && *(float *)&v42 < *(float *)&dword_140404A6C[73006987] )
    {
      dword_140404A6C[73006981] = v40;
      *(_QWORD *)&dword_140404A6C[73006982] = v41;
      *(float *)&dword_140404A6C[73006984] = v29;
      *(float *)&dword_140404A6C[73006985] = v31;
      *(float *)&dword_140404A6C[73006986] = v30;
      dword_140404A6C[73006987] = v42;
    }
    LODWORD(v7) = v7 + 1;
    v9 += 3;
  }
  while ( (int)v7 < (int)dword_140404A6C[v6 + 358300584] );
  return *(float *)&dword_140404A6C[73006987] < 1.0;
}
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40
#undef v41
#undef v42

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A84898: using guessed type unsigned int;

//----- (00000001400DF8C0) ----------------------------------------------------
_BOOL8            sub_1400DF8C0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        int a9)
{
  float v12; // xmm12_4
  float v13; // xmm13_4
  float v14; // xmm11_4
  float v15; // xmm10_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm14_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm15_4
  float v24; // xmm5_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm5_4
  float v30; // xmm0_4
  float v31; // xmm2_4

  if ( a9 )
  {
    if ( !(unsigned int)sub_140077B30(a1, a2, a3, a4, a5, a6) )
      return 0;
  }
  else if ( !(unsigned int)sub_1400779F0(a1, a2, a3, a4, a5, a6) )
  {
    return 0;
  }
  v12 = a6[1];
  v13 = a6[2];
  v14 = *a6;
  v15 = a1[1];
  v16 = a1[2];
  v17 = *a1;
  if ( (float)((float)((float)((float)((float)((float)(v15 - v12) * (float)(a7[2] - v13))
                                     - (float)((float)(v16 - v13) * (float)(a7[1] - v12)))
                             * *a2)
                     + (float)((float)((float)((float)(v16 - v13) * (float)(*a7 - v14))
                                     - (float)((float)(*a1 - v14) * (float)(a7[2] - v13)))
                             * a2[1]))
             + (float)((float)((float)((float)(*a1 - v14) * (float)(a7[1] - v12))
                             - (float)((float)(v15 - v12) * (float)(*a7 - v14)))
                     * a2[2])) < 0.0 )
    return 0;
  v18 = v15 - a7[1];
  v19 = a8[2] - a7[2];
  v21 = v16 - a7[2];
  v22 = *a8 - *a7;
  v24 = a8[1] - a7[1];
  v25 = v21 * v22;
  v26 = (float)(v18 * v19) - (float)(v21 * v24);
  v27 = v17 - *a7;
  v28 = v27 * v24;
  v29 = a2[2];
  v30 = v27 * v19;
  v31 = a2[1];
  if ( (float)((float)((float)(v26 * *a2) + (float)((float)(v25 - v30) * v31))
             + (float)((float)(v28 - (float)(v18 * v22)) * v29)) < 0.0 )
    return 0;
  v20 = *a8;
  v23 = a8[1];
  return (float)((float)((float)((float)((float)((float)(v15 - v23) * (float)(v13 - a8[2]))
                                       - (float)((float)(v16 - a8[2]) * (float)(v12 - v23)))
                               * *a2)
                       + (float)((float)((float)((float)(v16 - a8[2]) * (float)(v14 - v20))
                                       - (float)((float)(v17 - v20) * (float)(v13 - a8[2])))
                               * v31))
               + (float)((float)((float)((float)(v17 - v20) * (float)(v12 - v23))
                               - (float)((float)(v15 - v23) * (float)(v14 - v20)))
                       * v29)) >= 0.0;
}


//----- (00000001400DFB70) ----------------------------------------------------
__int64            sub_1400DFB70(int a1, float *a2, float *a3, int a4)
{
  float v4; // xmm3_4
  float *v5; // rdi
  __int64 v6; // rbx
  float *v7; // rsi
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  __int64 v16; // rax
  signed int v17; // r14d
  __int64 v18; // r10
  __int64 v19; // r13
  __int64 v20; // rdx
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  float v26; // xmm12_4
  float v27; // xmm13_4
  float v28; // xmm14_4
  float v29; // xmm15_4
  signed __int64 v30; // rsi
  float *v31; // rax
  signed __int64 v32; // r8
  signed __int64 v33; // r14
  signed __int64 v34; // r9
  signed __int64 v35; // r10
  signed __int64 v36; // r11
  signed __int64 v37; // r15
  signed __int64 v38; // r12
  _BYTE *v39; // rcx
  signed __int64 v40; // r13
  unsigned __int64 v41; // rcx
  signed __int64 v42; // rdx
  float v43; // xmm4_4
  float v44; // xmm6_4
  float v45; // xmm0_4
  float v46; // xmm5_4
  float v47; // xmm3_4
  float v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm4_4
  float v51; // xmm1_4
  float v52; // xmm6_4
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // xmm2_4
  float v56; // xmm3_4
  float v57; // xmm0_4
  float v58; // xmm5_4
  float v59; // xmm3_4
  float v60; // xmm1_4
  float v61; // xmm2_4
  float v62; // xmm4_4
  float v63; // xmm1_4
  float v64; // xmm6_4
  float v65; // xmm2_4
  float v66; // xmm1_4
  float v67; // xmm1_4
  float v68; // xmm2_4
  float v69; // xmm1_4
  float v70; // xmm3_4
  float v71; // xmm2_4
  float v72; // xmm0_4
  signed __int64 v73; // rdi
  float v74; // xmm0_4
  float v75; // xmm6_4
  float v76; // xmm7_4
  float v77; // xmm8_4
  float v78; // xmm9_4
  float v79; // xmm10_4
  float v80; // xmm11_4
  float v81; // xmm12_4
  float v82; // xmm13_4
  float v83; // xmm14_4
  float v84; // xmm15_4
  float *v85; // rax
  __int64 v86; // rdx
  float v87; // xmm1_4
  float v88; // xmm2_4
  float v89; // xmm4_4
  float v90; // xmm3_4
  float v91; // xmm5_4
  float v92; // xmm1_4
  float v93; // xmm5_4
  float v94; // xmm4_4
  float v95; // xmm0_4
  float v96; // xmm2_4
  float v97; // xmm3_4
  signed int v98; // r12d
  int *v99; // r15
  float v100; // xmm12_4
  float v101; // xmm13_4
  float v102; // xmm15_4
  __int64 v103; // rcx
  float v104; // xmm3_4
  float v105; // xmm1_4
  __int64 v106; // rax
  float v107; // xmm1_4
  float v108; // xmm3_4
  float v109; // xmm11_4
  float v110; // xmm9_4
  float v111; // xmm10_4
  float v112; // xmm11_4
  float v113; // xmm9_4
  float v114; // xmm6_4
  float v115; // xmm7_4
  float v116; // xmm8_4
  float v117; // xmm3_4
  float v118; // xmm8_4
  float v119; // xmm6_4
  float v120; // xmm7_4
  __int64 v121; // rax
  float v122; // xmm6_4
  float v123; // xmm7_4
  float v124; // xmm6_4
  float v125; // xmm8_4
  float v126; // xmm0_4
  float v127; // xmm7_4
  float v128; // xmm6_4
  float v129; // xmm3_4
  float v130; // xmm8_4
  float v131; // xmm6_4
  float v132; // xmm7_4
  int v133; // edx
  signed int v134; // r15d
  __int64 v135; // r13
  __int64 v136; // r14
  _DWORD *v137; // r12
  float v138; // xmm7_4
  float v139; // xmm10_4
  float v140; // xmm5_4
  float v141; // xmm12_4
  float v142; // xmm8_4
  float v143; // xmm13_4
  float v144; // xmm11_4
  float v145; // xmm6_4
  float v146; // xmm9_4
  __int64 v147; // rcx
  float v148; // xmm2_4
  float v149; // xmm3_4
  float v150; // xmm4_4
  float v151; // xmm15_4
  float v152; // xmm0_4
  float v153; // xmm2_4
  float v154; // xmm15_4
  float v155; // xmm0_4
  float v156; // xmm3_4
  float v157; // xmm1_4
  float v158; // xmm0_4
  float v159; // xmm4_4
  float v160; // xmm1_4
  float v161; // xmm1_4
  float v162; // xmm0_4
  float v163; // xmm2_4
  float v164; // xmm0_4
  float v165; // xmm3_4
  float v166; // xmm0_4
  float v167; // xmm4_4
  float v168; // xmm1_4
  float v169; // xmm0_4
  float v170; // xmm2_4
  float v171; // xmm0_4
  float v172; // xmm3_4
  float v173; // xmm0_4
  float v174; // xmm4_4
  float v175; // xmm1_4
  float v176; // xmm6_4
  float v177; // xmm0_4
  float v178; // xmm0_4
  float v179; // xmm5_4
  float v180; // xmm5_4
  float v181; // xmm12_4
  float v182; // xmm0_4
  float v183; // xmm4_4
  float v184; // xmm1_4
  float v185; // xmm10_4
  float v186; // xmm0_4
  float v187; // xmm10_4
  float v188; // xmm11_4
  float v189; // xmm3_4
  float v190; // xmm0_4
  float v191; // xmm5_4
  float v192; // xmm7_4
  float v193; // xmm9_4
  float v194; // xmm10_4
  float v195; // xmm11_4
  float v196; // xmm13_4
  float v197; // xmm3_4
  float v198; // xmm4_4
  float v199; // xmm2_4
  float v200; // xmm0_4
  float v201; // xmm1_4
  float v202; // xmm8_4
  bool v203; // cf
  float v204; // xmm13_4
  float v205; // xmm10_4
  float v206; // xmm11_4
  float v207; // xmm2_4
  float v208; // xmm8_4
  float v209; // xmm13_4
  float v210; // xmm10_4
  float v211; // xmm11_4
  float v212; // xmm7_4
  float v213; // xmm10_4
  float v214; // xmm11_4
  float v215; // xmm8_4
  float v216; // xmm3_4
  float v217; // xmm10_4
  float v218; // xmm8_4
  float v219; // xmm11_4
  float v220; // xmm13_4
  float v221; // xmm5_4
  float v222; // xmm4_4
  float v223; // xmm3_4
  float v224; // xmm2_4
  float v225; // xmm0_4
  float v226; // xmm1_4
  float v227; // xmm9_4
  float v228; // xmm5_4
  float v229; // xmm4_4
  float v230; // xmm13_4
  float v231; // xmm2_4
  float v232; // xmm9_4
  unsigned int v233; // xmm4_4
  float v234; // xmm13_4
  float v235; // xmm5_4
  float *v236; // r15
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DFB70[3376];
#define v238 (*(__int64 (*))(void *)(sr_frame_1400DFB70 + 0)) /* [rsp+0h] */
#define v239 (*(float (*))(void *)(sr_frame_1400DFB70 + 64)) /* [rsp+40h] */
#define v240 (*(unsigned __int64 (*))(void *)(sr_frame_1400DFB70 + 68)) /* [rsp+44h] */
#define v241 (*(float (*))(void *)(sr_frame_1400DFB70 + 76)) /* [rsp+4Ch] */
#define v242 (*(unsigned int (*))(void *)(sr_frame_1400DFB70 + 80)) /* [rsp+50h] */
#define v243 (*(unsigned int (*))(void *)(sr_frame_1400DFB70 + 84)) /* [rsp+54h] */
#define v244 (*(unsigned int (*))(void *)(sr_frame_1400DFB70 + 88)) /* [rsp+58h] */
#define v245 (*(float (*))(void *)(sr_frame_1400DFB70 + 96)) /* [rsp+60h] */
#define v246 (*(unsigned __int64 (*))(void *)(sr_frame_1400DFB70 + 104)) /* [rsp+68h] */
#define v247 (*(float (*))(void *)(sr_frame_1400DFB70 + 112)) /* [rsp+70h] */
#define v248 (*(float (*))(void *)(sr_frame_1400DFB70 + 120)) /* [rsp+78h] */
#define v249 (*(float (*))(void *)(sr_frame_1400DFB70 + 124)) /* [rsp+7Ch] */
#define v250 (*(float (*))(void *)(sr_frame_1400DFB70 + 128)) /* [rsp+80h] */
#define v251 (*(unsigned int (*))(void *)(sr_frame_1400DFB70 + 136)) /* [rsp+88h] */
#define v252 (*(unsigned int (*))(void *)(sr_frame_1400DFB70 + 140)) /* [rsp+8Ch] */
#define v253 (*(unsigned int (*))(void *)(sr_frame_1400DFB70 + 144)) /* [rsp+90h] */
#define v254 (*(unsigned __int64 (*))(void *)(sr_frame_1400DFB70 + 152)) /* [rsp+98h] */
#define v255 (*(float (*))(void *)(sr_frame_1400DFB70 + 160)) /* [rsp+A0h] */
#define v256 (*(unsigned __int64 (*))(void *)(sr_frame_1400DFB70 + 168)) /* [rsp+A8h] */
#define v257 (*(float (*))(void *)(sr_frame_1400DFB70 + 176)) /* [rsp+B0h] */
#define v258 (*(signed __int64 (*))(void *)(sr_frame_1400DFB70 + 184)) /* [rsp+B8h] */
#define v259 (*(signed __int64 (*))(void *)(sr_frame_1400DFB70 + 192)) /* [rsp+C0h] */
#define v260 (*(__int64 (*))(void *)(sr_frame_1400DFB70 + 200)) /* [rsp+C8h] */
#define v261 (*(__int64 (*))(void *)(sr_frame_1400DFB70 + 208)) /* [rsp+D0h] */
#define v262 (*(float * (*))(void *)(sr_frame_1400DFB70 + 216)) /* [rsp+D8h] */
#define v263 (*(float * (*))(void *)(sr_frame_1400DFB70 + 224)) /* [rsp+E0h] */
#define v264 (*(__int64 (*))(void *)(sr_frame_1400DFB70 + 232)) /* [rsp+E8h] */
#define v265 (*(__int64 (*))(void *)(sr_frame_1400DFB70 + 240)) /* [rsp+F0h] */
#define v266 (*(signed __int64 (*))(void *)(sr_frame_1400DFB70 + 248)) /* [rsp+F8h] */
#define v267 (*(__int64 (*))(void *)(sr_frame_1400DFB70 + 256)) /* [rsp+100h] */
#define v268 (*(signed __int64 (*))(void *)(sr_frame_1400DFB70 + 264)) /* [rsp+108h] */
#define v269 (*(signed __int64 (*))(void *)(sr_frame_1400DFB70 + 272)) /* [rsp+110h] */
#define v270 (*(int (*))(void *)(sr_frame_1400DFB70 + 280)) /* [rsp+118h] */
#define v271 (*(int (*))(void *)(sr_frame_1400DFB70 + 288)) /* [rsp+120h] */
#define v272 (*(int (*))(void *)(sr_frame_1400DFB70 + 292)) /* [rsp+124h] */
#define v273 (*(int (*))(void *)(sr_frame_1400DFB70 + 296)) /* [rsp+128h] */
#define v274 (*(char (*))(void *)(sr_frame_1400DFB70 + 300)) /* [rsp+12Ch] */
#define v275 (*(_BYTE (*)[4])(void *)(sr_frame_1400DFB70 + 304)) /* [rsp+130h] */
#define v276 (*(_BYTE (*)[4])(void *)(sr_frame_1400DFB70 + 308)) /* [rsp+134h] */
#define v277 (*(char (*))(void *)(sr_frame_1400DFB70 + 312)) /* [rsp+138h] */
#define v278 (*(_BYTE (*)[4])(void *)(sr_frame_1400DFB70 + 316)) /* [rsp+13Ch] */
#define v279 (*(_BYTE (*)[4])(void *)(sr_frame_1400DFB70 + 320)) /* [rsp+140h] */
#define v281 (*(_BYTE (*)[4])(void *)(sr_frame_1400DFB70 + 328)) /* [rsp+148h] */
#define v282 (*(_BYTE (*)[3028])(void *)(sr_frame_1400DFB70 + 332)) /* [rsp+14Ch] */
#define v283 (*(__int64 (*))(void *)(sr_frame_1400DFB70 + 3360)) /* [rsp+D20h] */

  v4 = *a2;
  v5 = a3;
  v6 = 5210LL * a1;
  v270 = a4;
  v7 = a2;
  v263 = a3;
  v262 = a2;
  v8 = *(float *)&dword_140404A6C[v6 + 129716753];
  if ( v4 < v8 && v8 > *a3 )
    return sub_1401F8B20((unsigned __int64)&v238 ^ v283);
  v9 = *(float *)&dword_140404A6C[v6 + 129716754];
  v10 = a2[1];
  if ( v10 < v9 && v9 > a3[1] )
    return sub_1401F8B20((unsigned __int64)&v238 ^ v283);
  v11 = *(float *)&dword_140404A6C[v6 + 129716755];
  v12 = a2[2];
  if ( v12 < v11 && v11 > a3[2] )
    return sub_1401F8B20((unsigned __int64)&v238 ^ v283);
  v13 = *(float *)&dword_140404A6C[v6 + 129716756];
  if ( v4 > v13 && v13 < *a3 )
    return sub_1401F8B20((unsigned __int64)&v238 ^ v283);
  v14 = *(float *)&dword_140404A6C[v6 + 129716757];
  if ( v10 > v14 && v14 < a3[1] )
    return sub_1401F8B20((unsigned __int64)&v238 ^ v283);
  v15 = *(float *)&dword_140404A6C[v6 + 129716758];
  if ( v12 > v15 && v15 < a3[2] )
    return sub_1401F8B20((unsigned __int64)&v238 ^ v283);
  v16 = (int)dword_140404A6C[v6 + 129716710];
  v17 = 0;
  v18 = 0;
  v19 = 180288 * v16;
  dword_140404A6C[73006987] = 1065353216;
  v260 = v16;
  v261 = 180288 * v16;
  v20 = (int)dword_140404A6C[45072 * v16 + 335170684];
  v265 = v20;
  if ( v20 >= 4 )
  {
    v21 = *(float *)&dword_140404A6C[v6 + 129716726];
    v22 = *(float *)&dword_140404A6C[v6 + 129716720];
    v23 = *(float *)&dword_140404A6C[v6 + 129716727];
    v24 = *(float *)&dword_140404A6C[v6 + 129716721];
    v25 = *(float *)&dword_140404A6C[v6 + 129716728];
    v26 = *(float *)&dword_140404A6C[v6 + 129716722];
    v27 = *(float *)&dword_140404A6C[v6 + 129716729];
    v28 = *(float *)&dword_140404A6C[v6 + 129716730];
    v29 = *(float *)&dword_140404A6C[v6 + 129716731];
    v269 = &v281[-v19] - (_BYTE *)&dword_140404A6C[335170686];
    v30 = v269;
    v266 = &v282[-v19] - (_BYTE *)&dword_140404A6C[335170686];
    v31 = (float *)((char *)&dword_140404A6C[335170686] + v19);
    v268 = (char *)&v271 - v19 - (char *)&dword_140404A6C[335170686];
    v32 = (char *)&v272 - v19 - (char *)&dword_140404A6C[335170686];
    v33 = v268;
    v34 = (char *)&v273 - v19 - (char *)&dword_140404A6C[335170686];
    v35 = &v275[-v19] - (_BYTE *)&dword_140404A6C[335170686];
    v259 = &v274 - v19 - (char *)&dword_140404A6C[335170686];
    v36 = &v276[-v19] - (_BYTE *)&dword_140404A6C[335170686];
    v37 = &v278[-v19] - (_BYTE *)&dword_140404A6C[335170686];
    v38 = &v279[-v19] - (_BYTE *)&dword_140404A6C[335170686];
    v258 = &v277 - v19 - (char *)&dword_140404A6C[335170686];
    v39 = v281 - v19 + 2;
    v40 = v259;
    v267 = v39 - (_BYTE *)&dword_140404A6C[335170686];
    v41 = ((unsigned __int64)(v20 - 4) >> 2) + 1;
    v264 = 4 * v41;
    v42 = v258;
    do
    {
      v43 = *(v31 - 1);
      v44 = v31[1];
      v45 = v29 * *v31;
      v46 = v31[3];
      v47 = (float)((float)((float)(v23 * v43) + v24) + (float)(v28 * *v31))
          + (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v44);
      v48 = *(float *)&dword_140404A6C[v6 + 129716734];
      *(float *)((char *)v31 + v33) = (float)((float)((float)(v21 * v43) + v22) + (float)(v27 * *v31))
                                    + (float)(*(float *)&dword_140404A6C[v6 + 129716732] * v44);
      v49 = v25 * v43;
      v50 = v31[2];
      v51 = v48 * v44;
      v52 = v31[4];
      *(float *)((char *)v31 + v32) = v47;
      v53 = (float)((float)(v49 + v26) + v45) + v51;
      v54 = *(float *)&dword_140404A6C[v6 + 129716732] * v52;
      *(float *)((char *)v31 + v34) = v53;
      v55 = (float)((float)((float)(v21 * v50) + v22) + (float)(v27 * v46)) + v54;
      v56 = (float)((float)(v23 * v50) + v24) + (float)(v28 * v46);
      v57 = v29 * v46;
      v58 = v31[6];
      v59 = v56 + (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v52);
      v60 = *(float *)&dword_140404A6C[v6 + 129716734];
      *(float *)((char *)v31 + v40) = v55;
      v61 = v25 * v50;
      v62 = v31[5];
      v63 = v60 * v52;
      v64 = v31[7];
      *(float *)((char *)v31 + v35) = v59;
      v65 = (float)((float)(v61 + v26) + v57) + v63;
      v66 = *(float *)&dword_140404A6C[v6 + 129716732] * v64;
      *(float *)((char *)v31 + v36) = v65;
      *(float *)((char *)v31 + v42) = (float)((float)((float)(v21 * v62) + v22) + (float)(v27 * v58)) + v66;
      v67 = *(float *)&dword_140404A6C[v6 + 129716734] * v64;
      *(float *)((char *)v31 + v37) = (float)((float)((float)(v23 * v62) + v24) + (float)(v28 * v58))
                                    + (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v64);
      v68 = (float)((float)((float)(v25 * v62) + v26) + (float)(v29 * v58)) + v67;
      v69 = v31[9];
      v70 = v31[8];
      *(float *)((char *)v31 + v38) = v68;
      v71 = v31[10];
      v248 = (float)((float)(v21 * v70) + v22) + (float)(v27 * v69);
      v249 = (float)((float)(v23 * v70) + v24) + (float)(v28 * v69);
      v72 = *(float *)&dword_140404A6C[v6 + 129716732] * v71;
      v250 = (float)((float)(v25 * v70) + v26) + (float)(v29 * v69);
      *(float *)((char *)v31 + v267) = v72 + v248;
      v73 = v266;
      v74 = (float)(*(float *)&dword_140404A6C[v6 + 129716734] * v71)
          + (float)((float)((float)(v25 * v70) + v26) + (float)(v29 * v69));
      *(float *)((char *)v31 + v30) = (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v71)
                                    + (float)((float)((float)(v23 * v70) + v24) + (float)(v28 * v69));
      *(float *)((char *)v31 + v73) = v74;
      v31 += 12;
      --v41;
    }
    while ( v41 );
    v20 = v265;
    v18 = v264;
    v17 = 0;
    v5 = v263;
    v7 = v262;
    v19 = v261;
    if ( v264 >= v265 )
      goto LABEL_20;
    v16 = v260;
    goto LABEL_18;
  }
  if ( v20 > 0 )
  {
LABEL_18:
    v75 = *(float *)&dword_140404A6C[v6 + 129716726];
    v76 = *(float *)&dword_140404A6C[v6 + 129716720];
    v77 = *(float *)&dword_140404A6C[v6 + 129716727];
    v78 = *(float *)&dword_140404A6C[v6 + 129716721];
    v79 = *(float *)&dword_140404A6C[v6 + 129716728];
    v80 = *(float *)&dword_140404A6C[v6 + 129716722];
    v81 = *(float *)&dword_140404A6C[v6 + 129716729];
    v82 = *(float *)&dword_140404A6C[v6 + 129716730];
    v83 = *(float *)&dword_140404A6C[v6 + 129716731];
    v84 = *(float *)&dword_140404A6C[v6 + 129716732];
    v85 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (v18 + 15024 * v16) + 1344896100);
    v86 = v20 - v18;
    do
    {
      v87 = *(v85 - 1);
      v88 = *v85;
      v89 = v77 * v87;
      v90 = v79 * v87;
      v91 = (float)(v75 * v87) + v76;
      v92 = *(float *)&dword_140404A6C[v6 + 129716733];
      v93 = v91 + (float)(v81 * *v85);
      v94 = (float)(v89 + v78) + (float)(v82 * *v85);
      v248 = v93;
      v95 = v83 * v88;
      v96 = v85[1];
      v97 = (float)(v90 + v80) + v95;
      v249 = v94;
      v250 = v97;
      *(float *)((uintptr_t)v85 + (uintptr_t)&v272 - v19 - (uintptr_t)&dword_140404A6C[335170686]) = (float)(v92 * v96) + v94;
      *(float *)((uintptr_t)v85 + (uintptr_t)&v271 - v19 - (uintptr_t)&dword_140404A6C[335170686]) = (float)(v84 * v96) + v93;
      *(float *)((uintptr_t)v85 + (uintptr_t)&v273 - v19 - (uintptr_t)&dword_140404A6C[335170686]) = (float)(*(float *)&dword_140404A6C[v6 + 129716734]
                                                                                                  * v96)
                                                                                          + v97;
      v85 += 3;
      --v86;
    }
    while ( v86 );
  }
LABEL_20:
  v98 = 0;
  if ( *(int *)((char *)&dword_140404A6C[335173757] + v19) > 0 )
  {
    v99 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v19 + 1344908400);
    do
    {
      v100 = *((float *)&v271 + 3 * *(v99 - 1));
      v101 = *((float *)&v272 + 3 * *(v99 - 1));
      v102 = *((float *)&v273 + 3 * *(v99 - 1));
      v103 = 3LL * *v99;
      v248 = v100;
      v104 = *((float *)&v271 + v103);
      v105 = *((float *)&v273 + v103);
      v106 = v99[1];
      HIDWORD(v254) = *(&v272 + v103);
      v255 = v105;
      v107 = v105 - v102;
      *(float *)&v254 = v104;
      v108 = v104 - v100;
      v249 = v101;
      v109 = *((float *)&v273 + 3 * v106);
      v110 = *((float *)&v271 + 3 * v106);
      HIDWORD(v246) = *(&v272 + 3 * v106);
      v111 = *((float *)&v246 + 1) - v101;
      v247 = v109;
      v112 = v109 - v102;
      *(float *)&v246 = v110;
      v113 = v110 - v100;
      v250 = v102;
      v114 = (float)((float)(*((float *)&v246 + 1) - v101) * v107)
           - (float)(v112 * (float)(*((float *)&v254 + 1) - v101));
      v115 = (float)(v112 * v108) - (float)(v113 * v107);
      v116 = (float)(v113 * (float)(*((float *)&v254 + 1) - v101))
           - (float)((float)(*((float *)&v246 + 1) - v101) * v108);
      v117 = fsqrt((float)((float)(v115 * v115) + (float)(v114 * v114)) + (float)(v116 * v116));
      if ( v117 == 0.0 )
      {
        v244 = 0;
        v119 = 0.0;
        v120 = 0.0;
        v118 = 0.0;
      }
      else
      {
        v118 = v116 * (float)(1.0 / v117);
        v119 = v114 * (float)(1.0 / v117);
        v244 = LODWORD(v118);
        v120 = v115 * (float)(1.0 / v117);
      }
      v243 = LODWORD(v120);
      v242 = LODWORD(v119);
      if ( sub_140077FA0((float *)&v251, (float *)&v242, &v239, v7, v5, &v248, (float *)&v254, (float *)&v246)
        && v239 < *(float *)&dword_140404A6C[73006987] )
      {
        dword_140404A6C[73006994] = dword_140404A6C[v6 + 129716769];
        dword_140404A6C[73006995] = dword_140404A6C[73006994];
        dword_140404A6C[73006996] = dword_140404A6C[73006994];
        dword_140404A6C[73006981] = v251;
        dword_140404A6C[73006982] = v252;
        dword_140404A6C[73006983] = v253;
        *(float *)&dword_140404A6C[73006984] = v119;
        *(float *)&dword_140404A6C[73006985] = v120;
        *(float *)&dword_140404A6C[73006986] = v118;
        *(float *)&dword_140404A6C[73006987] = v239;
        dword_140404A6C[73006992] = 0;
        dword_140404A6C[73006993] = v98;
        sub_14002D370(
          (float *)&dword_140404A6C[73006998],
          (float *)&dword_140404A6C[73006981],
          &v248,
          (float *)&v254,
          (float *)&v246);
        *(_QWORD *)&dword_140404A6C[73006989] = 0;
        dword_140404A6C[73006991] = 0;
      }
      if ( *(v99 - 2) == 4 )
      {
        v254 = v246;
        v255 = v247;
        v121 = v99[2];
        v122 = *((float *)&v273 + 3 * v121);
        v123 = *((float *)&v271 + 3 * v121);
        HIDWORD(v246) = *(&v272 + 3 * v121);
        v247 = v122;
        v124 = v122 - v102;
        *(float *)&v246 = v123;
        v125 = (float)((float)(*((float *)&v246 + 1) - v101) * v112) - (float)(v124 * v111);
        v126 = v123 - v100;
        v127 = (float)((float)(v123 - v100) * v111) - (float)((float)(*((float *)&v246 + 1) - v101) * v113);
        v128 = (float)(v124 * v113) - (float)(v126 * v112);
        v129 = fsqrt((float)((float)(v128 * v128) + (float)(v125 * v125)) + (float)(v127 * v127));
        if ( v129 == 0.0 )
        {
          v242 = 0;
          v130 = 0.0;
          v131 = 0.0;
          v132 = 0.0;
        }
        else
        {
          v130 = v125 * (float)(1.0 / v129);
          v131 = v128 * (float)(1.0 / v129);
          v242 = LODWORD(v130);
          v132 = v127 * (float)(1.0 / v129);
        }
        v244 = LODWORD(v132);
        v243 = LODWORD(v131);
        if ( sub_140077FA0((float *)&v251, (float *)&v242, &v239, v7, v5, &v248, (float *)&v254, (float *)&v246)
          && v239 < *(float *)&dword_140404A6C[73006987] )
        {
          dword_140404A6C[73006994] = dword_140404A6C[v6 + 129716769];
          dword_140404A6C[73006995] = dword_140404A6C[73006994];
          dword_140404A6C[73006996] = dword_140404A6C[73006994];
          dword_140404A6C[73006981] = v251;
          dword_140404A6C[73006982] = v252;
          dword_140404A6C[73006983] = v253;
          *(float *)&dword_140404A6C[73006984] = v130;
          *(float *)&dword_140404A6C[73006985] = v131;
          *(float *)&dword_140404A6C[73006986] = v132;
          *(float *)&dword_140404A6C[73006987] = v239;
          dword_140404A6C[73006992] = 0;
          dword_140404A6C[73006993] = v98;
          sub_14002D370(
            (float *)&dword_140404A6C[73006998],
            (float *)&dword_140404A6C[73006981],
            &v248,
            (float *)&v254,
            (float *)&v246);
          *(_QWORD *)&dword_140404A6C[73006989] = 0;
          dword_140404A6C[73006991] = 0;
        }
      }
      ++v98;
      v99 += 26;
    }
    while ( v98 < *(int *)((char *)&dword_140404A6C[335173757] + v19) );
  }
  v133 = *(unsigned int *)((char *)&dword_140404A6C[335200382] + v19);
  v134 = 0;
  LODWORD(v268) = v133;
  if ( v133 > 0 )
  {
    v135 = 0;
    v136 = v260;
    v137 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v6 * 4 + 523090428);
    while ( 1 )
    {
      if ( *v137 )
        goto LABEL_70;
      v138 = *(float *)&dword_140404A6C[v6 + 129716729];
      v139 = *(float *)&dword_140404A6C[v6 + 129716720];
      v140 = *(float *)&dword_140404A6C[v6 + 129716732];
      v141 = *(float *)&dword_140404A6C[v6 + 129716721];
      v142 = *(float *)&dword_140404A6C[v6 + 129716730];
      v143 = *(float *)&dword_140404A6C[v6 + 129716722];
      v144 = *(float *)&dword_140404A6C[v6 + 129716731];
      v145 = *(float *)&dword_140404A6C[v6 + 129716733];
      v146 = *(float *)&dword_140404A6C[v6 + 129716734];
      v147 = v135 + 180288 * v136;
      v148 = *(float *)((char *)&dword_140404A6C[335200384] + v147);
      v149 = *(float *)((char *)&dword_140404A6C[335200385] + v147);
      v150 = *(float *)((char *)&dword_140404A6C[335200386] + v147);
      v241 = (float)((float)((float)(*(float *)&dword_140404A6C[v6 + 129716726] * v148) + v139) + (float)(v138 * v149))
           + (float)(v140 * v150);
      v151 = (float)((float)(*(float *)&dword_140404A6C[v6 + 129716727] * v148) + v141) + (float)(v149 * v142);
      v152 = *(float *)&dword_140404A6C[v6 + 129716728] * v148;
      v153 = *(float *)((char *)&dword_140404A6C[335200387] + v147);
      v154 = v151 + (float)(v150 * v145);
      v155 = (float)(v152 + v143) + (float)(v149 * v144);
      v156 = *(float *)((char *)&dword_140404A6C[335200388] + v147);
      v157 = (float)(*(float *)&dword_140404A6C[v6 + 129716726] * v153) + v139;
      v158 = v155 + (float)(v150 * v146);
      v159 = *(float *)((char *)&dword_140404A6C[335200389] + v147);
      *(float *)&v259 = v158;
      *(float *)&v256 = v157 + (float)(v138 * v156);
      v160 = *(float *)&dword_140404A6C[v6 + 129716727] * v153;
      *(float *)&v256 = *(float *)&v256 + (float)(v140 * v159);
      *((float *)&v256 + 1) = (float)(v160 + v141) + (float)(v156 * v142);
      v161 = *(float *)&dword_140404A6C[v6 + 129716726];
      *((float *)&v256 + 1) = *((float *)&v256 + 1) + (float)(v159 * v145);
      v162 = *(float *)&dword_140404A6C[v6 + 129716728] * v153;
      v163 = *(float *)((char *)&dword_140404A6C[335200390] + v147);
      v164 = (float)(v162 + v143) + (float)(v156 * v144);
      v165 = *(float *)((char *)&dword_140404A6C[335200391] + v147);
      v166 = v164 + (float)(v159 * v146);
      v167 = *(float *)((char *)&dword_140404A6C[335200392] + v147);
      *(float *)&v258 = v166;
      v249 = v154;
      *(float *)&v240 = (float)((float)(v161 * v163) + v139) + (float)(v138 * v165);
      v168 = *(float *)&dword_140404A6C[v6 + 129716727] * v163;
      *(float *)&v240 = *(float *)&v240 + (float)(v140 * v167);
      *((float *)&v240 + 1) = (float)(v168 + v141) + (float)(v165 * v142);
      *((float *)&v240 + 1) = *((float *)&v240 + 1) + (float)(v167 * v145);
      v169 = *(float *)&dword_140404A6C[v6 + 129716728] * v163;
      v170 = *(float *)((char *)&dword_140404A6C[335200393] + v147);
      v171 = (float)(v169 + v143) + (float)(v165 * v144);
      v172 = *(float *)((char *)&dword_140404A6C[335200394] + v147);
      v173 = v171 + (float)(v167 * v146);
      v174 = *(float *)((char *)&dword_140404A6C[335200395] + v147);
      v175 = v174 * v145;
      v176 = v241;
      v245 = v173;
      v177 = (float)(*(float *)&dword_140404A6C[v6 + 129716726] * v170) + v139;
      v248 = v241;
      v178 = (float)(v177 + (float)(v138 * v172)) + (float)(v140 * v174);
      v179 = *(float *)&dword_140404A6C[v6 + 129716727] * v170;
      *(float *)&v263 = v178;
      v180 = v179 + v141;
      v181 = *(float *)&v259;
      v250 = *(float *)&v259;
      v182 = *(float *)&dword_140404A6C[v6 + 129716728] * v170;
      v254 = v256;
      *(float *)&v264 = (float)(v180 + (float)(v172 * v142)) + v175;
      v247 = v245;
      *(float *)&v267 = *(float *)&v256 - v241;
      v255 = *(float *)&v258;
      *(float *)&v269 = *((float *)&v256 + 1) - v154;
      *(float *)&v265 = (float)((float)(v182 + v143) + (float)(v172 * v144)) + (float)(v174 * v146);
      v246 = v240;
      v183 = *(float *)&v258 - *(float *)&v259;
      v184 = v245 - *(float *)&v259;
      *(float *)&v266 = *(float *)&v258 - *(float *)&v259;
      *(float *)&v262 = *(float *)&v240 - v241;
      v185 = (float)(*(float *)&v258 - *(float *)&v259) * (float)(*((float *)&v240 + 1) - v154);
      v186 = v245 - *(float *)&v259;
      *(float *)&v259 = *((float *)&v240 + 1) - v154;
      v187 = v185 - (float)(v186 * (float)(*((float *)&v256 + 1) - v154));
      *(float *)&v260 = v184;
      v188 = (float)(v184 * (float)(*(float *)&v256 - v241)) - (float)(v183 * (float)(*(float *)&v240 - v241));
      v189 = (float)((float)(*((float *)&v256 + 1) - v154) * (float)(*(float *)&v240 - v241))
           - (float)((float)(*(float *)&v256 - v241) * (float)(*((float *)&v240 + 1) - v154));
      v190 = fsqrt((float)((float)(v188 * v188) + (float)(v187 * v187)) + (float)(v189 * v189));
      if ( v190 == 0.0 )
      {
        v191 = 0.0;
        v192 = 0.0;
        v193 = 0.0;
      }
      else
      {
        v191 = (float)(1.0 / v190) * v187;
        v192 = (float)(1.0 / v190) * v188;
        v193 = (float)(1.0 / v190) * v189;
      }
      v194 = *v5;
      v195 = v5[1];
      v196 = v5[2];
      v197 = *v7;
      v198 = v7[1];
      v257 = v192;
      *(float *)&v261 = v191;
      v199 = (float)((float)((float)(v241 - v194) * v191) + (float)((float)(v154 - v195) * v192))
           + (float)((float)(v181 - v196) * v193);
      v200 = v7[2];
      v201 = (float)(v181 - v200) * v193;
      v202 = (float)((float)((float)(v241 - v197) * v191) + (float)((float)(v154 - v198) * v192)) + v201;
      v203 = v202 < 0.0;
      if ( v202 > 0.0 )
      {
        if ( v199 > 0.0 )
          goto LABEL_56;
        v203 = v202 < 0.0;
      }
      if ( !v203 || v199 >= 0.0 )
      {
        v204 = v196 - v200;
        v239 = (float)((float)((float)(v241 - v197) * v191) + (float)((float)(v154 - v198) * v192)) + v201;
        v205 = v194 - v197;
        v206 = v195 - v198;
        v207 = (float)((float)(v192 * v206) + (float)(v191 * v205)) + (float)(v193 * v204);
        if ( v207 != 0.0 )
        {
          v208 = v202 / v207;
          v209 = (float)(v204 * v208) + v7[2];
          v210 = (float)(v205 * v208) + v197;
          v239 = v208;
          v211 = (float)(v206 * v208) + v198;
          v253 = LODWORD(v209);
          v251 = LODWORD(v210);
          v252 = LODWORD(v211);
          if ( (float)((float)((float)((float)((float)((float)(v209 - v181) * *(float *)&v267)
                                             - (float)(*(float *)&v266 * (float)(v210 - v241)))
                                     * v192)
                             + (float)((float)((float)((float)(v211 - v154) * *(float *)&v266)
                                             - (float)((float)(v209 - v181) * *(float *)&v269))
                                     * v191))
                     + (float)((float)((float)((float)(v210 - v241) * *(float *)&v269)
                                     - (float)((float)(v211 - v154) * *(float *)&v267))
                             * v193)) >= 0.0 )
          {
            v176 = v241;
            if ( (float)((float)((float)((float)((float)((float)(v211 - *((float *)&v256 + 1))
                                                       * (float)(v245 - *(float *)&v258))
                                               - (float)((float)(v209 - *(float *)&v258)
                                                       * (float)(*((float *)&v240 + 1) - *((float *)&v256 + 1))))
                                       * *(float *)&v261)
                               + (float)((float)((float)((float)(v209 - *(float *)&v258)
                                                       * (float)(*(float *)&v240 - *(float *)&v256))
                                               - (float)((float)(v210 - *(float *)&v256)
                                                       * (float)(v245 - *(float *)&v258)))
                                       * v257))
                       + (float)((float)((float)((float)(v210 - *(float *)&v256)
                                               * (float)(*((float *)&v240 + 1) - *((float *)&v256 + 1)))
                                       - (float)((float)(v211 - *((float *)&v256 + 1))
                                               * (float)(*(float *)&v240 - *(float *)&v256)))
                               * v193)) >= 0.0 )
            {
              if ( (float)((float)((float)((float)((float)((float)(v241 - *(float *)&v240) * (float)(v209 - v245))
                                                 - (float)((float)(v181 - v245) * (float)(v210 - *(float *)&v240)))
                                         * v257)
                                 + (float)((float)((float)((float)(v181 - v245) * (float)(v211 - *((float *)&v240 + 1)))
                                                 - (float)((float)(v154 - *((float *)&v240 + 1)) * (float)(v209 - v245)))
                                         * *(float *)&v261))
                         + (float)((float)((float)((float)(v154 - *((float *)&v240 + 1))
                                                 * (float)(v210 - *(float *)&v240))
                                         - (float)((float)(v241 - *(float *)&v240)
                                                 * (float)(v211 - *((float *)&v240 + 1))))
                                 * v193)) >= 0.0
                && v208 < *(float *)&dword_140404A6C[73006987] )
              {
                dword_140404A6C[73006994] = dword_140404A6C[v6 + 129716769];
                dword_140404A6C[73006995] = dword_140404A6C[73006994];
                dword_140404A6C[73006996] = dword_140404A6C[73006994];
                dword_140404A6C[73006984] = v261;
                *(float *)&dword_140404A6C[73006981] = v210;
                *(float *)&dword_140404A6C[73006982] = v211;
                *(float *)&dword_140404A6C[73006983] = v209;
                *(float *)&dword_140404A6C[73006985] = v257;
                *(float *)&dword_140404A6C[73006986] = v193;
                *(float *)&dword_140404A6C[73006987] = v208;
                dword_140404A6C[73006992] = 1;
                dword_140404A6C[73006993] = v134;
                sub_14002D370(
                  (float *)&dword_140404A6C[73006998],
                  (float *)&dword_140404A6C[73006981],
                  &v248,
                  (float *)&v254,
                  (float *)&v246);
                v133 = v268;
                *(_QWORD *)&dword_140404A6C[73006989] = 0;
                dword_140404A6C[73006991] = 0;
              }
              v176 = v241;
            }
          }
        }
      }
LABEL_56:
      v212 = *(float *)&v260;
      v254 = v240;
      v255 = v245;
      v246 = __PAIR64__(v264, (unsigned int)v263);
      v247 = *(float *)&v265;
      v213 = (float)(*(float *)&v260 * (float)(*(float *)&v264 - v154))
           - (float)((float)(*(float *)&v265 - v181) * *(float *)&v259);
      v214 = (float)(*(float *)&v259 * (float)(*(float *)&v263 - v176))
           - (float)((float)(*(float *)&v264 - v154) * *(float *)&v262);
      v215 = (float)((float)(*(float *)&v265 - v181) * *(float *)&v262)
           - (float)(*(float *)&v260 * (float)(*(float *)&v263 - v176));
      v216 = fsqrt((float)((float)(v215 * v215) + (float)(v213 * v213)) + (float)(v214 * v214));
      if ( v216 == 0.0 )
      {
        v242 = 0;
        v217 = 0.0;
        v243 = 0;
        v218 = 0.0;
        v244 = 0;
        v219 = 0.0;
      }
      else
      {
        v217 = v213 * (float)(1.0 / v216);
        v218 = v215 * (float)(1.0 / v216);
        v219 = v214 * (float)(1.0 / v216);
        v242 = LODWORD(v217);
        v243 = LODWORD(v218);
        v244 = LODWORD(v219);
      }
      v220 = *v5;
      v221 = v5[1];
      v222 = v5[2];
      v223 = *v7;
      v224 = (float)((float)((float)(v176 - *v5) * v217) + (float)((float)(v154 - v221) * v218))
           + (float)((float)(v181 - v222) * v219);
      v225 = v7[2];
      v226 = (float)(v181 - v225) * v219;
      v227 = (float)((float)((float)(v176 - *v7) * v217) + (float)((float)(v154 - v7[1]) * v218)) + v226;
      if ( v227 <= 0.0 )
      {
        if ( v227 >= 0.0 || v224 >= 0.0 )
        {
LABEL_64:
          v228 = v221 - v7[1];
          v229 = v222 - v225;
          v239 = (float)((float)((float)(v176 - v223) * v217) + (float)((float)(v154 - v7[1]) * v218)) + v226;
          v230 = v220 - v223;
          v231 = (float)((float)(v218 * v228) + (float)(v217 * v230)) + (float)(v219 * v229);
          if ( v231 != 0.0 )
          {
            v232 = v227 / v231;
            *(float *)&v233 = (float)(v229 * v232) + v7[2];
            v234 = (float)(v230 * v232) + v223;
            v239 = v232;
            v235 = (float)(v228 * v232) + v7[1];
            LODWORD(v258) = v233;
            v253 = v233;
            v251 = LODWORD(v234);
            *(float *)&v260 = v235;
            v252 = LODWORD(v235);
            if ( (float)((float)((float)((float)((float)(*(float *)&v262 * (float)(*(float *)&v233 - v181))
                                               - (float)(v212 * (float)(v234 - v176)))
                                       * v218)
                               + (float)((float)((float)(v212 * (float)(v235 - v154))
                                               - (float)(*(float *)&v259 * (float)(*(float *)&v233 - v181)))
                                       * v217))
                       + (float)((float)((float)(*(float *)&v259 * (float)(v234 - v176))
                                       - (float)(*(float *)&v262 * (float)(v235 - v154)))
                               * v219)) >= 0.0
              && (float)((float)((float)((float)((float)((float)(*(float *)&v265 - v245)
                                                       * (float)(v235 - *((float *)&v240 + 1)))
                                               - (float)((float)(*(float *)&v264 - *((float *)&v240 + 1))
                                                       * (float)(*(float *)&v258 - v245)))
                                       * v217)
                               + (float)((float)((float)((float)(*(float *)&v263 - *(float *)&v240)
                                                       * (float)(*(float *)&v258 - v245))
                                               - (float)((float)(*(float *)&v265 - v245)
                                                       * (float)(v234 - *(float *)&v240)))
                                       * v218))
                       + (float)((float)((float)((float)(*(float *)&v264 - *((float *)&v240 + 1))
                                               * (float)(v234 - *(float *)&v240))
                                       - (float)((float)(*(float *)&v263 - *(float *)&v240)
                                               * (float)(v235 - *((float *)&v240 + 1))))
                               * v219)) >= 0.0
              && (float)((float)((float)((float)((float)((float)(*(float *)&v258 - *(float *)&v265)
                                                       * (float)(v241 - *(float *)&v263))
                                               - (float)((float)(v181 - *(float *)&v265)
                                                       * (float)(v234 - *(float *)&v263)))
                                       * v218)
                               + (float)((float)((float)((float)(v181 - *(float *)&v265)
                                                       * (float)(*(float *)&v260 - *(float *)&v264))
                                               - (float)((float)(v154 - *(float *)&v264)
                                                       * (float)(*(float *)&v258 - *(float *)&v265)))
                                       * v217))
                       + (float)((float)((float)((float)(v154 - *(float *)&v264) * (float)(v234 - *(float *)&v263))
                                       - (float)((float)(*(float *)&v260 - *(float *)&v264)
                                               * (float)(v241 - *(float *)&v263)))
                               * v219)) >= 0.0
              && v232 < *(float *)&dword_140404A6C[73006987] )
            {
              dword_140404A6C[73006994] = dword_140404A6C[v6 + 129716769];
              dword_140404A6C[73006995] = dword_140404A6C[73006994];
              dword_140404A6C[73006996] = dword_140404A6C[73006994];
              *(float *)&dword_140404A6C[73006981] = v234;
              dword_140404A6C[73006982] = v260;
              dword_140404A6C[73006983] = v258;
              *(float *)&dword_140404A6C[73006984] = v217;
              *(float *)&dword_140404A6C[73006985] = v218;
              *(float *)&dword_140404A6C[73006986] = v219;
              *(float *)&dword_140404A6C[73006987] = v232;
              dword_140404A6C[73006992] = 1;
              dword_140404A6C[73006993] = v134;
              sub_14002D370(
                (float *)&dword_140404A6C[73006998],
                (float *)&dword_140404A6C[73006981],
                &v248,
                (float *)&v254,
                (float *)&v246);
              v133 = v268;
              *(_QWORD *)&dword_140404A6C[73006989] = 0;
              dword_140404A6C[73006991] = 0;
            }
          }
        }
      }
      else if ( v224 <= 0.0 )
      {
        goto LABEL_64;
      }
LABEL_70:
      ++v134;
      ++v137;
      v135 += 52;
      if ( v134 >= v133 )
      {
        v17 = 0;
        break;
      }
    }
  }
  if ( v270 && (int)dword_140404A6C[v6 + 129720373] > 0 )
  {
    v236 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v6 * 4 + 523094904);
    do
    {
      if ( (unsigned int)sub_1400DF380(
                           (float *)&v251,
                           (float *)&v242,
                           &v239,
                           v7,
                           v5,
                           (float *)&dword_140404A6C[43 * v17 + 129720393 + v6],
                           *v236)
        && v239 < *(float *)&dword_140404A6C[73006987] )
      {
        dword_140404A6C[73006981] = v251;
        dword_140404A6C[73006982] = v252;
        dword_140404A6C[73006983] = v253;
        dword_140404A6C[73006984] = v242;
        dword_140404A6C[73006985] = v243;
        dword_140404A6C[73006986] = v244;
        *(float *)&dword_140404A6C[73006987] = v239;
        dword_140404A6C[73006993] = -1;
        dword_140404A6C[73006994] = v17;
      }
      ++v17;
      v236 += 43;
    }
    while ( v17 < (int)dword_140404A6C[v6 + 129720373] );
  }
  return sub_1401F8B20((unsigned __int64)&v238 ^ v283);
}
#undef v238
#undef v239
#undef v240
#undef v241
#undef v242
#undef v243
#undef v244
#undef v245
#undef v246
#undef v247
#undef v248
#undef v249
#undef v250
#undef v251
#undef v252
#undef v253
#undef v254
#undef v255
#undef v256
#undef v257
#undef v258
#undef v259
#undef v260
#undef v261
#undef v262
#undef v263
#undef v264
#undef v265
#undef v266
#undef v267
#undef v268
#undef v269
#undef v270
#undef v271
#undef v272
#undef v273
#undef v274
#undef v275
#undef v276
#undef v277
#undef v278
#undef v279
#undef v281
#undef v282
#undef v283
