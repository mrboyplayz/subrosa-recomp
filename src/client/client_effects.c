#include "shared_client.h"


//----- (0000000140158CD0) ----------------------------------------------------
__int64 sub_140158CD0()
{
  int v0; // ebp
  float *v1; // rbx
  float v2; // xmm4_4
  float v3; // xmm3_4
  float v4; // xmm5_4
  double v5; // xmm2_8
  float v6; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm3_4
  __int64 v9; // rdi
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm6_4
  float v16; // xmm11_4
  float v17; // xmm12_4
  float v18; // xmm10_4
  float v19; // xmm8_4
  float v20; // xmm9_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm3_4
  float v26; // xmm1_4
  double v27; // xmm2_8
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm0_4
  float v32; // xmm7_4
  char v33; // al
  float v34; // xmm8_4
  float v35; // xmm7_4
  float v36; // xmm2_4
  float v37; // xmm6_4
  float v38; // xmm0_4
  int v39; // eax
  unsigned int v40; // ecx
  __int64 v41; // r8
  __int64 v42; // r10
  unsigned int v43; // edi
  __int64 v44; // r9
  _DWORD *v45; // r8
  float v46; // xmm8_4
  float v47; // xmm9_4
  float v48; // xmm10_4
  float v49; // xmm11_4
  float v50; // xmm12_4
  float v51; // xmm13_4
  float v52; // xmm14_4
  float v53; // xmm15_4
  __int64 v54; // r11
  __int64 v55; // rdx
  __int64 v56; // rcx
  float v57; // xmm3_4
  float v58; // xmm4_4
  float v59; // xmm6_4
  float v60; // xmm2_4
  float v61; // xmm5_4
  float v62; // xmm1_4
  __int64 v63; // rcx
  float v64; // xmm4_4
  float v65; // xmm3_4
  float v66; // xmm5_4
  unsigned int v67; // eax
  float v68; // xmm1_4
  unsigned int v69; // ecx
  __int64 v70; // r8
  __int64 v71; // r10
  unsigned int v72; // edi
  __int64 v73; // r9
  _DWORD *v74; // r8
  float v75; // xmm8_4
  float v76; // xmm9_4
  float v77; // xmm10_4
  float v78; // xmm11_4
  float v79; // xmm12_4
  float v80; // xmm13_4
  float v81; // xmm14_4
  float v82; // xmm15_4
  __int64 v83; // r11
  __int64 v84; // rdx
  __int64 v85; // rcx
  float v86; // xmm3_4
  float v87; // xmm4_4
  float v88; // xmm6_4
  float v89; // xmm2_4
  float v90; // xmm5_4
  float v91; // xmm1_4
  __int64 v92; // rcx
  float v93; // xmm4_4
  float v94; // xmm3_4
  float v95; // xmm5_4
  unsigned int v96; // eax
  float v97; // xmm1_4
  float sr_particle_direction[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140158CD0[80];
#define v99 (*(__int64 (*))(void *)(sr_frame_140158CD0 + 0)) /* [rsp+0h] */
#define v103 (*(__int64 (*))(void *)(sr_frame_140158CD0 + 64)) /* [rsp+40h] */

  v0 = 0;
  if ( (int)dword_140404A6C[431564581] > 0 )
  {
    v1 = (float *)&dword_140404A6C[431138508];
    do
    {
      if ( *((_DWORD *)v1 - 5) )
      {
        v2 = v1[12];
        v3 = v1[11];
        HIDWORD(v5) = 0;
        v4 = v1[13];
        *(float *)&v5 = fsqrt((float)((float)(v2 * v2) + (float)(v3 * v3)) + (float)(v4 * v4));
        if ( *(float *)&v5 > 0.000015258789 )
        {
          sr_particle_direction[0] = v3 * (float)(1.0 / *(float *)&v5);
          sr_particle_direction[1] = v2 * (float)(1.0 / *(float *)&v5);
          sr_particle_direction[2] = v4 * (float)(1.0 / *(float *)&v5);
          sub_14007B2A0((__int64)&dword_140404A6C[26 * v0 + 431138510], &sr_particle_direction[0], v5);
        }
        v6 = v1[16];
        v7 = *v1;
        v8 = v6 * *(v1 - 1);
        v9 = 26LL * v0;
        *(v1 - 1) = v8;
        v10 = (float)(v7 - v1[15]) * v6;
        *v1 = v10;
        v11 = v6 * v1[1];
        v1[1] = v11;
        v12 = *(v1 - 4);
        v13 = *(v1 - 2);
        sr_particle_direction[1] = *(v1 - 3);
        v14 = sr_particle_direction[1] + v10;
        sr_particle_direction[0] = v12;
        sr_particle_direction[2] = v13;
        *(v1 - 4) = v8 + v12;
        *(v1 - 3) = v14;
        *(v1 - 2) = v11 + v13;
        if ( (unsigned int)sub_1400DC050(&sr_particle_direction[0], (float *)&dword_140404A6C[v9 + 431138504], 0) )
        {
          v15 = *(v1 - 1);
          v16 = *v1;
          v17 = v1[1];
          v18 = *(float *)&dword_140404A6C[73006984];
          v19 = *(float *)&dword_140404A6C[73006986];
          v20 = *(float *)&dword_140404A6C[73006985];
          v21 = (float)(*(float *)&dword_140404A6C[73006985] * 0.001953125) + *(float *)&dword_140404A6C[73006982];
          *(v1 - 4) = (float)(*(float *)&dword_140404A6C[73006984] * 0.001953125) + *(float *)&dword_140404A6C[73006981];
          *(v1 - 3) = v21;
          *(v1 - 2) = (float)(v19 * 0.001953125) + *(float *)&dword_140404A6C[73006983];
          v22 = -(float)((float)((float)(v16 * v20) + (float)(v15 * v18)) + (float)(v19 * v17));
          v23 = (float)(v20 * v22) + v16;
          v24 = (float)(v19 * v22) + v17;
          v25 = (float)(v18 * v22) + v15;
          v26 = fsqrt((float)((float)(v23 * v23) + (float)(v25 * v25)) + (float)(v24 * v24));
          v27 = fabs((float)((float)(v16 * v20) + (float)(v15 * v18)) + (float)(v19 * v17)) * 0.699999988079071;
          if ( v26 > v27 )
          {
            if ( v26 == 0.0 )
            {
              v28 = 0.0;
              v29 = 0.0;
              v30 = 0.0;
            }
            else
            {
              v28 = v25 / v26;
              v29 = v23 / v26;
              v30 = v24 / v26;
            }
            v31 = v27;
            v25 = v28 * v31;
            v23 = v29 * v31;
            v24 = v30 * v31;
          }
          v32 = (float)((float)((float)(v16 * v20) + (float)(v15 * v18)) + (float)(v19 * v17)) * -1.25;
          *(v1 - 1) = (float)((float)((float)(v32 * v18) + v15) - v25) * 0.9375;
          *v1 = (float)((float)((float)(v20 * v32) + v16) - v23) * 0.9375;
          v1[1] = (float)((float)((float)(v19 * v32) + v17) - v24) * 0.9375;
          if ( !*((_DWORD *)v1 - 7) )
          {
            if ( (float)((float)((float)(v20 * v16) + (float)(v15 * v18)) + (float)(v19 * v17)) >= -0.016666668
              || (v33 = rand(),
                  sub_14005ED40(
                    dword_140404A6C[283786008],
                    (float *)&dword_140404A6C[v9 + 431138504],
                    0,
                    (float)((float)((float)(v15 * v18) + (float)(v20 * v16)) + (float)(v19 * v17)) * -3.75,
                    (float)((float)(v33 & 0x7F) * 0.0009765625) + 1.0),
                  v20 = *(float *)&dword_140404A6C[73006985],
                  !*((_DWORD *)v1 - 7)) )
            {
              v34 = *(float *)&dword_1402F6190;
              v35 = *(float *)&dword_1402F618C;
              v36 = *(float *)&dword_1402F618C;
              v37 = *(float *)&dword_1402F6188;
              v38 = *(float *)&dword_1402F6190;
              v1[8] = (float)(*(float *)&dword_1402F6190 * v1[3]) - (float)(*(float *)&dword_1402F618C * v1[4]);
              v1[9] = (float)(v37 * v1[4]) - (float)(v38 * v1[2]);
              v1[10] = (float)(v36 * v1[2]) - (float)(v37 * v1[3]);
              sub_14007A240((__int64)&dword_140404A6C[v9 + 431138516], (float *)&dword_140404A6C[v9 + 431138516]);
              v1[2] = (float)(v35 * v1[10]) - (float)(v34 * v1[9]);
              v1[3] = (float)(v34 * v1[8]) - (float)(v37 * v1[10]);
              v1[4] = (float)(v37 * v1[9]) - (float)(v35 * v1[8]);
              sub_14007A240((__int64)&dword_140404A6C[v9 + 431138510], (float *)&dword_140404A6C[v9 + 431138510]);
              v1[5] = v37;
              v1[6] = v35;
              v1[7] = v34;
            }
          }
          if ( v20 > 0.69999999
            && fsqrt((float)((float)(*(v1 - 1) * *(v1 - 1)) + (float)(*v1 * *v1)) + (float)(v1[1] * v1[1])) < 0.0083333338 )
          {
            v39 = *((_DWORD *)v1 - 7);
            *(v1 - 5) = 0.0;
            if ( v39 )
            {
              if ( v39 == 1 )
              {
                v69 = dword_140404A6C[432269105];
                if ( (int)dword_140404A6C[432269105] < 32256 )
                {
                  v70 = 908LL * (int)dword_140404A6C[283827769];
                  v71 = (int)dword_140404A6C[v70 + 178527465];
                  if ( v71 > 0 )
                  {
                    v72 = dword_140404A6C[v70 + 178527462];
                    v73 = *(_QWORD *)&dword_140404A6C[v70 + 178527463];
                    v74 = *(_DWORD **)&dword_140404A6C[v70 + 178527467];
                    v75 = v1[2];
                    v76 = v1[3];
                    v77 = v1[4];
                    v78 = v1[5];
                    v79 = v1[8];
                    v80 = v1[6];
                    v81 = v1[9];
                    v82 = v1[7];
                    do
                    {
                      v83 = 3;
                      do
                      {
                        v84 = (int)(*v74 * v72);
                        v85 = (int)(8 * v69);
                        v86 = *(float *)(v73 + 4 * v84);
                        v87 = *(float *)(v73 + 4 * v84 + 4);
                        v88 = *(float *)(v73 + 4 * v84 + 8);
                        v89 = (float)(v77 * v86) + *(v1 - 2);
                        v90 = (float)((float)(v76 * v86) + *(v1 - 3)) + (float)(v80 * v87);
                        *(float *)&dword_140404A6C[v85 + 432269107] = (float)((float)((float)(v75 * v86) + *(v1 - 4))
                                                                            + (float)(v78 * v87))
                                                                    + (float)(v79 * v88);
                        v91 = v1[10] * v88;
                        *(float *)&dword_140404A6C[v85 + 432269108] = v90 + (float)(v81 * v88);
                        *(float *)&dword_140404A6C[v85 + 432269109] = (float)(v89 + (float)(v82 * v87)) + v91;
                        v92 = 8 * dword_140404A6C[432269105];
                        dword_140404A6C[v92 + 432269110] = *(_DWORD *)(v73 + 4 * v84 + 12);
                        dword_140404A6C[v92 + 432269111] = *(_DWORD *)(v73 + 4 * v84 + 16);
                        v93 = *(float *)(v73 + 4 * v84 + 20);
                        v94 = *(float *)(v73 + 4 * v84 + 24);
                        v95 = *(float *)(v73 + 4 * v84 + 28);
                        v96 = 8 * dword_140404A6C[432269105];
                        *(float *)&dword_140404A6C[v96 + 432269112] = (float)((float)(v78 * v94) + (float)(v75 * v93))
                                                                    + (float)(v79 * v95);
                        v97 = v1[10] * v95;
                        *(float *)&dword_140404A6C[v96 + 432269113] = (float)((float)(v80 * v94) + (float)(v76 * v93))
                                                                    + (float)(v81 * v95);
                        *(float *)&dword_140404A6C[v96 + 432269114] = (float)((float)(v82 * v94) + (float)(v77 * v93))
                                                                    + v97;
                        v69 = ++dword_140404A6C[432269105];
                        ++v74;
                        --v83;
                      }
                      while ( v83 );
                      --v71;
                    }
                    while ( v71 );
                  }
                }
              }
            }
            else
            {
              v40 = dword_140404A6C[431744815];
              if ( (int)dword_140404A6C[431744815] < 65024 )
              {
                v41 = 908LL * (int)dword_140404A6C[283827574];
                v42 = (int)dword_140404A6C[v41 + 178527465];
                if ( v42 > 0 )
                {
                  v43 = dword_140404A6C[v41 + 178527462];
                  v44 = *(_QWORD *)&dword_140404A6C[v41 + 178527463];
                  v45 = *(_DWORD **)&dword_140404A6C[v41 + 178527467];
                  v46 = v1[2];
                  v47 = v1[3];
                  v48 = v1[4];
                  v49 = v1[5];
                  v50 = v1[8];
                  v51 = v1[6];
                  v52 = v1[9];
                  v53 = v1[7];
                  do
                  {
                    v54 = 3;
                    do
                    {
                      v55 = (int)(*v45 * v43);
                      v56 = (int)(8 * v40);
                      v57 = *(float *)(v44 + 4 * v55);
                      v58 = *(float *)(v44 + 4 * v55 + 4);
                      v59 = *(float *)(v44 + 4 * v55 + 8);
                      v60 = (float)(v48 * v57) + *(v1 - 2);
                      v61 = (float)((float)(v47 * v57) + *(v1 - 3)) + (float)(v51 * v58);
                      *(float *)&dword_140404A6C[v56 + 431744817] = (float)((float)((float)(v46 * v57) + *(v1 - 4))
                                                                          + (float)(v49 * v58))
                                                                  + (float)(v50 * v59);
                      v62 = v1[10] * v59;
                      *(float *)&dword_140404A6C[v56 + 431744818] = v61 + (float)(v52 * v59);
                      *(float *)&dword_140404A6C[v56 + 431744819] = (float)(v60 + (float)(v53 * v58)) + v62;
                      v63 = 8 * dword_140404A6C[431744815];
                      dword_140404A6C[v63 + 431744820] = *(_DWORD *)(v44 + 4 * v55 + 12);
                      dword_140404A6C[v63 + 431744821] = *(_DWORD *)(v44 + 4 * v55 + 16);
                      v64 = *(float *)(v44 + 4 * v55 + 20);
                      v65 = *(float *)(v44 + 4 * v55 + 24);
                      v66 = *(float *)(v44 + 4 * v55 + 28);
                      v67 = 8 * dword_140404A6C[431744815];
                      *(float *)&dword_140404A6C[v67 + 431744822] = (float)((float)(v49 * v65) + (float)(v46 * v64))
                                                                  + (float)(v50 * v66);
                      v68 = v1[10] * v66;
                      *(float *)&dword_140404A6C[v67 + 431744823] = (float)((float)(v51 * v65) + (float)(v47 * v64))
                                                                  + (float)(v52 * v66);
                      *(float *)&dword_140404A6C[v67 + 431744824] = (float)((float)(v53 * v65) + (float)(v48 * v64))
                                                                  + v68;
                      v40 = ++dword_140404A6C[431744815];
                      ++v45;
                      --v54;
                    }
                    while ( v54 );
                    --v42;
                  }
                  while ( v42 );
                }
              }
            }
          }
        }
      }
      ++v0;
      v1 += 26;
    }
    while ( v0 < (int)dword_140404A6C[431564581] );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v99
#undef v103

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 1A72FE728: using guessed type unsigned int;
// 1A74FE730: using guessed type unsigned int;

//----- (00000001401597F0) ----------------------------------------------------
__int64 sub_1401597F0()
{
  int v0; // r15d
  __int64 v1; // rbx
  signed __int64 v2; // r14
  float v3; // xmm8_4
  float v4; // xmm5_4
  float v5; // xmm4_4
  unsigned int v6; // xmm3_4
  unsigned int v7; // xmm4_4
  unsigned int v8; // xmm5_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  unsigned int v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm5_4
  float v14; // xmm6_4
  unsigned int v15; // xmm1_4
  float v16; // xmm12_4
  float v17; // xmm13_4
  float v18; // xmm3_4
  float v19; // xmm9_4
  float v20; // xmm10_4
  float v21; // xmm7_4
  double v22; // xmm2_8
  double v23; // xmm0_8
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm6_4
  unsigned int v27; // ecx
  __int64 v28; // rbp
  float *v29; // rdi
  float *v30; // rsi
  float v31; // xmm3_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm7_4
  float v36; // xmm9_4
  float v37; // xmm10_4
  float v38; // xmm1_4
  float v39; // xmm11_4
  float v40; // xmm12_4
  float v41; // xmm13_4
  float v42; // xmm3_4
  float v43; // xmm5_4
  float v44; // xmm6_4
  float v45; // xmm4_4
  double v46; // xmm2_8
  double v47; // xmm0_8
  float v48; // xmm2_4
  float v49; // xmm3_4
  float *v50; // r10
  int v51; // r9d
  float *v52; // r8
  __int64 v53; // r11
  __int64 v54; // rcx
  __int64 v55; // rax
  float v56; // xmm5_4
  float v57; // xmm6_4
  float v58; // xmm7_4
  float v59; // xmm4_4
  float v60; // xmm5_4
  float v61; // xmm6_4
  float v62; // xmm7_4
  float v63; // xmm4_4
  float v64; // xmm4_4
  float v65; // xmm5_4
  float v66; // xmm4_4
  unsigned int v67; // xmm3_4
  unsigned int v68; // xmm4_4
  unsigned int v69; // xmm5_4
  float v70; // xmm1_4
  float v71; // xmm2_4
  double v72; // xmm2_8
  __int64 v73; // r13
  int v74; // eax
  unsigned int v75; // ecx
  unsigned int v76; // xmm4_4
  float v77; // xmm8_4
  float v78; // xmm9_4
  unsigned int v79; // xmm1_4
  float v80; // xmm10_4
  float v81; // xmm11_4
  float v82; // xmm12_4
  float v83; // xmm3_4
  float v84; // xmm6_4
  float v85; // xmm7_4
  float v86; // xmm5_4
  double v87; // xmm2_8
  double v88; // xmm0_8
  float v89; // xmm2_4
  float v90; // xmm3_4
  unsigned int v91; // xmm7_4
  unsigned int v92; // xmm9_4
  unsigned int v93; // xmm1_4
  char v94; // al
  unsigned int *v95; // rbp
  unsigned int *v96; // r12
  int v97; // xmm3_4
  int v98; // xmm2_4
  int v99; // xmm1_4
  float v100; // xmm0_4
  unsigned int *v101; // rdi
  float v102; // xmm3_4
  float v103; // xmm6_4
  float v104; // xmm5_4
  float v105; // xmm1_4
  float v106; // xmm1_4
  float v107; // xmm0_4
  float v108; // xmm10_4
  float v109; // xmm1_4
  float v110; // xmm13_4
  float v111; // xmm5_4
  float v112; // xmm2_4
  float v113; // xmm11_4
  float v114; // xmm3_4
  float v115; // xmm3_4
  float v116; // xmm6_4
  float v117; // xmm5_4
  float v118; // xmm4_4
  float v119; // xmm1_4
  float v120; // xmm2_4
  float v121; // xmm0_4
  bool v122; // cc
  unsigned __int8 v123; // al
  float v124; // xmm10_4
  float v125; // xmm4_4
  float v126; // xmm14_4
  float v127; // xmm2_4
  float v128; // xmm6_4
  float v129; // xmm8_4
  float v130; // xmm15_4
  float v131; // xmm9_4
  unsigned int v132; // xmm13_4
  unsigned int v133; // xmm12_4
  unsigned int v134; // xmm11_4
  __int64 v135; // rax
  float v136; // xmm8_4
  float v137; // xmm7_4
  unsigned int v138; // xmm1_4
  float v139; // xmm5_4
  float v140; // xmm3_4
  float v141; // xmm3_4
  __int64 v142; // rax
  float v143; // xmm4_4
  float v144; // xmm6_4
  __int64 v145; // rcx
  float v146; // xmm6_4
  unsigned int v147; // xmm0_4
  float v148; // xmm5_4
  float v149; // xmm1_4
  unsigned int v150; // xmm15_4
  float v151; // xmm2_4
  unsigned int v152; // xmm5_4
  unsigned int v153; // xmm2_4
  __int64 v154; // rax
  float v155; // xmm0_4
  unsigned int v156; // xmm3_4
  __int64 v157; // rcx
  __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // rax
  int v161; // eax
  float v162; // xmm9_4
  float v163; // xmm8_4
  float v164; // xmm7_4
  float v165; // xmm6_4
  __int64 v166; // rcx
  float v167; // xmm12_4
  float v168; // xmm5_4
  float v169; // xmm11_4
  float v170; // xmm14_4
  float v171; // xmm4_4
  float v172; // xmm3_4
  float v173; // xmm13_4
  float v174; // xmm10_4
  unsigned int v175; // xmm0_4
  float v176; // xmm0_4
  float v177; // xmm0_4
  float v178; // xmm8_4
  float v179; // xmm8_4
  float v180; // xmm7_4
  __int64 v181; // rcx
  unsigned int v182; // xmm2_4
  float v183; // xmm15_4
  __int64 v184; // rcx
  __int64 v185; // rcx
  float sr_effect_previous_position[3];
  _Alignas(16) unsigned sr_effect_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401597F0[128];
#define v187 (*(__int64 (*))(void *)(sr_frame_1401597F0 + 0)) /* [rsp+0h] */
#define v188 (*(float (*))(void *)(sr_frame_1401597F0 + 32)) /* [rsp+20h] */
#define v189 (*(unsigned int (*))(void *)(sr_frame_1401597F0 + 36)) /* [rsp+24h] */
#define v190 (*(float (*))(void *)(sr_frame_1401597F0 + 40)) /* [rsp+28h] */
#define v191 (*(float (*))(void *)(sr_frame_1401597F0 + 44)) /* [rsp+2Ch] */
#define v192 (*(float (*))(void *)(sr_frame_1401597F0 + 48)) /* [rsp+30h] */
#define v193 (*(float (*))(void *)(sr_frame_1401597F0 + 52)) /* [rsp+34h] */
#define v194 (*(float (*))(void *)(sr_frame_1401597F0 + 56)) /* [rsp+38h] */
#define v200 (*(__int64 (*))(void *)(sr_frame_1401597F0 + 120)) /* [rsp+78h] */

  v0 = 0;
  if ( (int)dword_140404A6C[433435845] > 0 )
  {
    v1 = 0;
    v2 = (char *)((_OWORD *)(void *)sr_effect_rotation) + 8 - (char *)&dword_140404A6C[432826971];
    v3 = 0.0;
    do
    {
      if ( dword_140404A6C[v1 + 432826949] == 2 )
      {
        v4 = *(float *)&dword_140404A6C[v1 + 432826983];
        v5 = *(float *)&dword_140404A6C[v1 + 432826956];
        *(float *)&v6 = v4 * *(float *)&dword_140404A6C[v1 + 432826955];
        dword_140404A6C[v1 + 432826955] = v6;
        *(float *)&v7 = (float)(v5 - *(float *)&dword_140404A6C[v1 + 432826951]) * v4;
        dword_140404A6C[v1 + 432826956] = v7;
        *(float *)&v8 = v4 * *(float *)&dword_140404A6C[v1 + 432826957];
        dword_140404A6C[v1 + 432826957] = v8;
        v9 = *(float *)&dword_140404A6C[v1 + 432826952];
        v10 = *(float *)&dword_140404A6C[v1 + 432826954];
        sr_effect_previous_position[1] = *(float *)&dword_140404A6C[v1 + 432826953];
        *(float *)&v11 = sr_effect_previous_position[1] + *(float *)&v7;
        sr_effect_previous_position[2] = v10;
        sr_effect_previous_position[0] = v9;
        *(float *)&dword_140404A6C[v1 + 432826952] = *(float *)&v6 + v9;
        dword_140404A6C[v1 + 432826953] = v11;
        *(float *)&dword_140404A6C[v1 + 432826954] = v10 + *(float *)&v8;
        if ( (unsigned int)sub_1400DC050(&sr_effect_previous_position[0], (float *)&dword_140404A6C[37 * v0 + 432826952], 0) )
        {
          v12 = *(float *)&dword_140404A6C[73006984];
          v13 = *(float *)&dword_140404A6C[73006985];
          v14 = *(float *)&dword_140404A6C[73006986];
          *(float *)&v15 = (float)(*(float *)&dword_140404A6C[73006985] * 0.015625)
                         + *(float *)&dword_140404A6C[73006982];
          *(float *)&dword_140404A6C[v1 + 432826952] = (float)(*(float *)&dword_140404A6C[73006984] * 0.015625)
                                                     + *(float *)&dword_140404A6C[73006981];
          dword_140404A6C[v1 + 432826953] = v15;
          *(float *)&dword_140404A6C[v1 + 432826954] = (float)(v14 * 0.015625) + *(float *)&dword_140404A6C[73006983];
          v16 = *(float *)&dword_140404A6C[v1 + 432826956];
          v17 = *(float *)&dword_140404A6C[v1 + 432826955];
          v189 = dword_140404A6C[v1 + 432826957];
          v18 = (float)((float)(v16 * v13) + (float)(v17 * v12)) + (float)(v14 * *(float *)&v189);
          v19 = (float)(v13 * (float)-v18) + v16;
          v20 = (float)(v14 * (float)-v18) + *(float *)&v189;
          v21 = (float)(v12 * (float)-v18) + v17;
          v22 = fsqrt((float)((float)(v19 * v19) + (float)(v21 * v21)) + (float)(v20 * v20));
          v23 = fabs(v18) * 0.699999988079071;
          if ( v22 > v23 )
          {
            v24 = v23 / v22;
            v21 = v21 * v24;
            v19 = v19 * v24;
            v20 = v20 * v24;
          }
          v25 = v18 * -1.125;
          v26 = (float)((float)(v14 * v25) + *(float *)&v189) - v20;
          *(float *)&dword_140404A6C[v1 + 432826955] = (float)((float)((float)(v12 * v25) + v17) - v21) * 0.9375;
          *(float *)&dword_140404A6C[v1 + 432826956] = (float)((float)((float)(v13 * v25) + v16) - v19) * 0.9375;
          *(float *)&dword_140404A6C[v1 + 432826957] = v26 * 0.9375;
        }
      }
      v27 = dword_140404A6C[v1 + 432826949];
      if ( v27 == 4 && (int)dword_140404A6C[v1 + 432826950] > 59400 )
      {
        v28 = 3;
        v29 = (float *)&dword_140404A6C[v1 + 432826963];
        v30 = (float *)&dword_140404A6C[37 * v0 + 432826961];
        do
        {
          v31 = v29[8] - *(float *)&dword_140404A6C[v1 + 432826951];
          v29[8] = v31;
          v32 = *(v29 - 1);
          v33 = *v29;
          sr_effect_previous_position[0] = *(v29 - 2);
          v34 = sr_effect_previous_position[0] + v29[7];
          sr_effect_previous_position[1] = v32;
          sr_effect_previous_position[2] = v33;
          *(v29 - 2) = v34;
          *(v29 - 1) = v32 + v31;
          *v29 = v33 + v29[9];
          if ( (unsigned int)sub_1400DC050(&sr_effect_previous_position[0], v30, 0) )
          {
            v35 = *(float *)&dword_140404A6C[73006984];
            v36 = *(float *)&dword_140404A6C[73006985];
            v37 = *(float *)&dword_140404A6C[73006986];
            v38 = (float)(*(float *)&dword_140404A6C[73006985] * 0.001953125) + *(float *)&dword_140404A6C[73006982];
            *(v29 - 2) = (float)(*(float *)&dword_140404A6C[73006984] * 0.001953125)
                       + *(float *)&dword_140404A6C[73006981];
            *(v29 - 1) = v38;
            *v29 = (float)(v37 * 0.001953125) + *(float *)&dword_140404A6C[73006983];
            v39 = v29[8];
            v40 = v29[7];
            v41 = v29[9];
            v42 = (float)((float)(v40 * v35) + (float)(v39 * v36)) + (float)(v41 * v37);
            v43 = (float)((float)-v42 * v35) + v40;
            v44 = (float)((float)-v42 * v36) + v39;
            v45 = (float)((float)-v42 * v37) + v41;
            v46 = fsqrt((float)((float)(v44 * v44) + (float)(v43 * v43)) + (float)(v45 * v45));
            v47 = fabs(v42) * 0.699999988079071;
            if ( v46 > v47 )
            {
              v48 = v47 / v46;
              v43 = v48 * v43;
              v44 = v48 * v44;
              v45 = v48 * v45;
            }
            v49 = v42 * -1.125;
            v29[7] = (float)((float)((float)(v49 * v35) + v40) - v43) * 0.875;
            v29[8] = (float)((float)((float)(v49 * v36) + v39) - v44) * 0.875;
            v29[9] = (float)((float)((float)(v49 * v37) + v41) - v45) * 0.875;
          }
          v30 += 3;
          v29 += 3;
          --v28;
        }
        while ( v28 );
        ((_OWORD *)(void *)sr_effect_rotation)[0] = *(_OWORD *)&dword_140404A6C[v1 + 432826970];
        v50 = (float *)&dword_140404A6C[v1 + 432826979];
        v51 = 1;
        v52 = (float *)&dword_140404A6C[v1 + 432826971];
        v53 = 3;
        v3 = 0.0;
        ((_OWORD *)(void *)sr_effect_rotation)[1] = *(_OWORD *)&dword_140404A6C[v1 + 432826974];
        sr_effect_rotation[8] = dword_140404A6C[v1 + 432826978];
        do
        {
          v54 = 3LL * (v51 % 3);
          v55 = v1 * 4 + 12LL * (v51 % 3);
          v56 = *(float *)((char *)&dword_140404A6C[432826961] + v55) - *(v52 - 10);
          v57 = *(float *)((char *)&dword_140404A6C[432826962] + v55) - *(v52 - 9);
          v58 = *(float *)((char *)&dword_140404A6C[432826963] + v55) - *(v52 - 8);
          v59 = fsqrt((float)((float)(v57 * v57) + (float)(v56 * v56)) + (float)(v58 * v58));
          if ( v59 == 0.0 )
          {
            v60 = 0.0;
            v61 = 0.0;
            v62 = 0.0;
          }
          else
          {
            v60 = v56 * (float)(1.0 / v59);
            v61 = v57 * (float)(1.0 / v59);
            v62 = v58 * (float)(1.0 / v59);
          }
          v63 = v59 - *v50;
          ++v51;
          ++v50;
          v64 = (float)((float)(v63 * 0.125)
                      - (float)((float)((float)((float)(v60 * *(float *)((char *)v52 + v2 - 8))
                                              + (float)(v61 * *(float *)((char *)v52 + v2 - 4)))
                                      + (float)(v62 * *(float *)((char *)v52 + v2)))
                              * 0.25))
              + (float)((float)((float)((float)(v61 * *((float *)((_OWORD *)(void *)sr_effect_rotation) + v54 + 1)) + (float)(v60 * *((float *)((_OWORD *)(void *)sr_effect_rotation) + v54)))
                              + (float)(v62 * *((float *)((_OWORD *)(void *)sr_effect_rotation) + v54 + 2)))
                      * 0.25);
          *(v52 - 1) = (float)(v60 * v64) + *(v52 - 1);
          *v52 = (float)(v61 * v64) + *v52;
          v52[1] = (float)(v62 * v64) + v52[1];
          v52 += 3;
          *(float *)((char *)&dword_140404A6C[432826970] + v55) = (float)((float)-v64 * v60)
                                                                + *(float *)((char *)&dword_140404A6C[432826970] + v55);
          *(float *)((char *)&dword_140404A6C[432826971] + v55) = (float)((float)-v64 * v61)
                                                                + *(float *)((char *)&dword_140404A6C[432826971] + v55);
          *(float *)((char *)&dword_140404A6C[432826972] + v55) = (float)((float)-v64 * v62)
                                                                + *(float *)((char *)&dword_140404A6C[432826972] + v55);
          --v53;
        }
        while ( v53 );
        v27 = dword_140404A6C[v1 + 432826949];
      }
      if ( ((v27 - 1) & 0xFFFFFFFD) == 0 )
      {
        v65 = *(float *)&dword_140404A6C[v1 + 432826983];
        if ( v65 > 0.0 )
        {
          v66 = *(float *)&dword_140404A6C[v1 + 432826956];
          *(float *)&v67 = v65 * *(float *)&dword_140404A6C[v1 + 432826955];
          dword_140404A6C[v1 + 432826955] = v67;
          *(float *)&v68 = (float)(v66 - *(float *)&dword_140404A6C[v1 + 432826951]) * v65;
          dword_140404A6C[v1 + 432826956] = v68;
          *(float *)&v69 = v65 * *(float *)&dword_140404A6C[v1 + 432826957];
          dword_140404A6C[v1 + 432826957] = v69;
          v70 = *(float *)&dword_140404A6C[v1 + 432826953];
          v71 = *(float *)&dword_140404A6C[v1 + 432826954];
          sr_effect_previous_position[0] = *(float *)&dword_140404A6C[v1 + 432826952];
          sr_effect_previous_position[1] = v70;
          sr_effect_previous_position[2] = v71;
          *(float *)&dword_140404A6C[v1 + 432826952] = *(float *)&v67 + sr_effect_previous_position[0];
          *(float *)&dword_140404A6C[v1 + 432826953] = *(float *)&v68 + v70;
          *(float *)&dword_140404A6C[v1 + 432826954] = *(float *)&v69 + v71;
          if ( v27 == 3 )
          {
            *(_QWORD *)&v72 = dword_140404A6C[v1 + 432826982];
            if ( *(float *)&v72 > 0.0041666669 )
              sub_14012BD30(
                ((intptr_t)dword_140404A6C - 0x404a6cLL) + 148LL * v0 + 1735521200,
                (float *)&dword_140404A6C[37 * v0 + 432826979],
                v72);
          }
          v73 = 37LL * v0;
          v74 = sub_1400DC050(&sr_effect_previous_position[0], (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v73 * 4 + 1735521164), 0);
          v75 = dword_140404A6C[v1 + 432826949];
          if ( v74 )
          {
            v76 = dword_140404A6C[73006985];
            if ( v75 == 3 && *(float *)&dword_140404A6C[73006985] <= 0.0 )
            {
              v77 = *(float *)&dword_140404A6C[73006984];
              v78 = *(float *)&dword_140404A6C[73006986];
              *(float *)&v79 = (float)(*(float *)&dword_140404A6C[73006985] * 0.015625)
                             + *(float *)&dword_140404A6C[73006982];
              *(float *)&dword_140404A6C[v1 + 432826952] = (float)(*(float *)&dword_140404A6C[73006984] * 0.015625)
                                                         + *(float *)&dword_140404A6C[73006981];
              dword_140404A6C[v1 + 432826953] = v79;
              *(float *)&dword_140404A6C[v1 + 432826954] = (float)(v78 * 0.015625)
                                                         + *(float *)&dword_140404A6C[73006983];
              v80 = *(float *)&dword_140404A6C[v1 + 432826956];
              v81 = *(float *)&dword_140404A6C[v1 + 432826955];
              v82 = *(float *)&dword_140404A6C[v1 + 432826957];
              v83 = (float)((float)(v80 * *(float *)&v76) + (float)(v81 * v77)) + (float)(v78 * v82);
              v84 = (float)((float)-v83 * v77) + v81;
              v85 = (float)((float)-v83 * *(float *)&v76) + v80;
              v86 = (float)((float)-v83 * v78) + v82;
              v87 = fsqrt((float)((float)(v84 * v84) + (float)(v85 * v85)) + (float)(v86 * v86));
              v88 = fabs(v83) * 0.699999988079071;
              if ( v87 > v88 )
              {
                v89 = v88 / v87;
                v84 = v89 * v84;
                v85 = v89 * v85;
                v86 = v89 * v86;
              }
              v90 = v83 * -1.125;
              *(float *)&dword_140404A6C[v1 + 432826955] = (float)((float)((float)(v90 * v77) + v81) - v84) * 0.9375;
              *(float *)&dword_140404A6C[v1 + 432826956] = (float)((float)((float)(v90 * *(float *)&v76) + v80) - v85)
                                                         * 0.9375;
              *(float *)&dword_140404A6C[v1 + 432826957] = (float)((float)((float)(v90 * v78) + v82) - v86) * 0.9375;
            }
            else
            {
              v91 = dword_140404A6C[73006984];
              v92 = dword_140404A6C[73006986];
              *(float *)&v93 = (float)(*(float *)&dword_140404A6C[73006985] * 0.015625)
                             + *(float *)&dword_140404A6C[73006982];
              *(float *)&dword_140404A6C[v1 + 432826952] = (float)(*(float *)&dword_140404A6C[73006984] * 0.015625)
                                                         + *(float *)&dword_140404A6C[73006981];
              dword_140404A6C[v1 + 432826953] = v93;
              *(float *)&dword_140404A6C[v1 + 432826954] = (float)(*(float *)&v92 * 0.015625)
                                                         + *(float *)&dword_140404A6C[73006983];
              *(_QWORD *)&dword_140404A6C[v1 + 432826955] = 0;
              dword_140404A6C[v1 + 432826957] = 0;
              dword_140404A6C[v1 + 432826983] = 0;
              if ( v75 == 1 )
              {
                v94 = rand();
                v75 = dword_140404A6C[v1 + 432826949];
                v92 = dword_140404A6C[73006986];
                v76 = dword_140404A6C[73006985];
                v91 = dword_140404A6C[73006984];
                *(float *)&dword_140404A6C[v1 + 432826984] = (float)((float)(v94 & 0x3F) * 0.00048828125) + 0.03125;
              }
              dword_140404A6C[v1 + 432826967] = v91;
              dword_140404A6C[v1 + 432826968] = v76;
              v95 = &dword_140404A6C[v1 + 432826961];
              dword_140404A6C[v1 + 432826969] = v92;
              v96 = &dword_140404A6C[v1 + 432826962];
              if ( fabs(*(float *)&v76) >= 0.70700002 )
              {
                v97 = dword_1402F617C;
                v98 = dword_1402F6178;
                v99 = dword_1402F6180;
                v100 = *(float *)&dword_1402F617C * *(float *)&v91;
              }
              else
              {
                v97 = dword_1402F618C;
                v98 = dword_1402F6188;
                v99 = dword_1402F6190;
                v100 = *(float *)&v91 * *(float *)&dword_1402F618C;
              }
              v101 = &dword_140404A6C[v1 + 432826963];
              v102 = (float)(*(float *)&v97 * *(float *)&v92) - (float)(*(float *)&v99 * *(float *)&v76);
              v103 = (float)(*(float *)&v99 * *(float *)&v91) - (float)(*(float *)&v98 * *(float *)&v92);
              v104 = (float)(*(float *)&v98 * *(float *)&v76) - v100;
              *(float *)&dword_140404A6C[v1 + 432826963] = v104;
              v105 = fsqrt((float)((float)(v103 * v103) + (float)(v102 * v102)) + (float)(v104 * v104));
              if ( v105 == 0.0 )
              {
                v107 = 0.0;
                v109 = 0.0;
                v108 = 0.0;
                v110 = 0.0;
                v113 = 0.0;
                v112 = 0.0;
                v114 = 0.0;
                v111 = 0.0;
              }
              else
              {
                v106 = 1.0 / v105;
                v107 = v106 * v104;
                v108 = v106 * v102;
                v109 = v106 * v103;
                v110 = v107;
                v111 = v108;
                v112 = v107;
                v113 = v109;
                v114 = v109;
              }
              *(float *)v95 = v111;
              *(float *)v96 = v114;
              *(float *)v101 = v112;
              v115 = (float)(*(float *)&v76 * v107) - (float)(*(float *)&v92 * v109);
              v190 = v113;
              v116 = (float)(v113 * *(float *)&v91) - (float)(*(float *)&v76 * v108);
              v191 = v110;
              v188 = v108;
              v117 = (float)(v108 * *(float *)&v92) - (float)(v110 * *(float *)&v91);
              v118 = fsqrt((float)((float)(v117 * v117) + (float)(v115 * v115)) + (float)(v116 * v116));
              if ( v118 == 0.0 )
              {
                v120 = 0.0;
                v121 = 0.0;
                v119 = 0.0;
              }
              else
              {
                v119 = (float)(1.0 / v118) * v116;
                v120 = (float)(1.0 / v118) * v117;
                v3 = v119;
                v121 = (float)(1.0 / v118) * v115;
              }
              *(float *)&dword_140404A6C[v1 + 432826966] = v3;
              *(float *)&dword_140404A6C[v1 + 432826964] = v121;
              *(float *)&dword_140404A6C[v1 + 432826965] = v120;
              *(float *)&v189 = v119;
              if ( v75 == 3 )
              {
                v122 = (signed int)dword_140404A6C[431646510] < 16000;
                v188 = v108;
                v190 = v113;
                v191 = v110;
                *(float *)&v189 = v119;
                dword_140404A6C[v1 + 432826950] = 0;
                if ( v122 )
                {
                  v123 = rand();
                  sub_14007B2A0(
                    (__int64)&dword_140404A6C[v73 + 432826961],
                    (float *)&dword_140404A6C[v73 + 432826967], sr_export_float_lane_container(sr_text_float_bits((float)((float)v123 * 0.01227184630308594))) /* the original converts to float (cvtsd2ss) before this call */);
                  v124 = *(float *)&dword_140404A6C[v1 + 432826984];
                  v125 = *(float *)&dword_140404A6C[v1 + 432826952];
                  v126 = -v124;
                  v127 = *(float *)v101;
                  v188 = *(float *)v95;
                  v128 = *(float *)&dword_140404A6C[v1 + 432826953];
                  v129 = *(float *)&dword_140404A6C[v1 + 432826964];
                  v130 = *(float *)&dword_140404A6C[v1 + 432826965];
                  v131 = *(float *)&dword_140404A6C[v1 + 432826954];
                  v132 = dword_140404A6C[v1 + 432826967];
                  v133 = dword_140404A6C[v1 + 432826968];
                  v134 = dword_140404A6C[v1 + 432826969];
                  v135 = 6 * dword_140404A6C[431646510];
                  v190 = *(float *)v96;
                  v191 = v127;
                  v136 = v129 * v124;
                  v137 = v130 * v124;
                  v193 = (float)(v190 * (float)-v124) + v128;
                  v194 = (float)(v127 * (float)-v124) + v131;
                  v192 = (float)(v188 * (float)-v124) + v125;
                  *(float *)&v138 = (float)(v130 * v124) + v193;
                  v189 = dword_140404A6C[v1 + 432826966];
                  v139 = *(float *)&v189 * v124;
                  *(float *)&dword_140404A6C[v135 + 431646511] = v136 + v192;
                  dword_140404A6C[v135 + 431646512] = v138;
                  v140 = v188 * v124;
                  *(float *)&dword_140404A6C[v135 + 431646513] = v139 + (float)((float)(v127 * (float)-v124) + v131);
                  v141 = v140 + v125;
                  v142 = 6 * dword_140404A6C[431646510];
                  v143 = (float)(v190 * v124) + v128;
                  v144 = v191 * v124;
                  dword_140404A6C[v142 + 431646514] = v132;
                  dword_140404A6C[v142 + 431646515] = v133;
                  dword_140404A6C[v142 + 431646516] = v134;
                  ++dword_140404A6C[431646510];
                  v108 = v188;
                  v145 = 6 * dword_140404A6C[431646510];
                  v146 = v144 + v131;
                  *(float *)&dword_140404A6C[v145 + 431646511] = v141 + v136;
                  *(float *)&v147 = v146 + v139;
                  v148 = *(float *)&dword_140404A6C[v1 + 432826964];
                  *(float *)&dword_140404A6C[v145 + 431646512] = v143 + v137;
                  v149 = v130 * v126;
                  *(float *)&v150 = (float)(v130 * v126) + v193;
                  dword_140404A6C[v145 + 431646513] = v147;
                  v151 = v148 * v126;
                  *(float *)&v152 = (float)(v148 * v126) + v192;
                  *(float *)&v153 = v151 + v141;
                  v154 = 6 * dword_140404A6C[431646510];
                  v155 = *(float *)&v189 * v126;
                  *(float *)&v156 = (float)(*(float *)&v189 * v126) + v194;
                  dword_140404A6C[v154 + 431646514] = v132;
                  dword_140404A6C[v154 + 431646516] = v134;
                  dword_140404A6C[v154 + 431646515] = v133;
                  ++dword_140404A6C[431646510];
                  v157 = 6 * dword_140404A6C[431646510];
                  dword_140404A6C[v157 + 431646511] = v153;
                  *(float *)&dword_140404A6C[v157 + 431646512] = v149 + v143;
                  *(float *)&dword_140404A6C[v157 + 431646513] = v155 + v146;
                  v158 = 6 * dword_140404A6C[431646510];
                  dword_140404A6C[v158 + 431646514] = v132;
                  dword_140404A6C[v158 + 431646516] = v134;
                  dword_140404A6C[v158 + 431646515] = v133;
                  ++dword_140404A6C[431646510];
                  v159 = 6 * dword_140404A6C[431646510];
                  dword_140404A6C[v159 + 431646511] = v152;
                  dword_140404A6C[v159 + 431646512] = v150;
                  dword_140404A6C[v159 + 431646513] = v156;
                  v75 = dword_140404A6C[v1 + 432826949];
                  v160 = 6 * dword_140404A6C[431646510];
                  dword_140404A6C[v160 + 431646514] = v132;
                  v110 = v191;
                  dword_140404A6C[v160 + 431646516] = v134;
                  v113 = v190;
                  dword_140404A6C[v160 + 431646515] = v133;
                  ++dword_140404A6C[431646510];
                }
              }
              if ( v75 == 1 )
              {
                v161 = dword_140404A6C[431564589];
                dword_140404A6C[v1 + 432826950] = 0;
                if ( v161 < 16000 )
                {
                  v162 = *(float *)&dword_140404A6C[v1 + 432826984];
                  v163 = *(float *)&dword_140404A6C[v1 + 432826952];
                  v164 = *(float *)&dword_140404A6C[v1 + 432826953];
                  v165 = *(float *)&dword_140404A6C[v1 + 432826954];
                  v166 = 5 * v161;
                  v167 = (float)((float)-v162 * v113) + v164;
                  v168 = *(float *)&dword_140404A6C[v1 + 432826964] * v162;
                  v169 = (float)(v110 * (float)-v162) + v165;
                  v170 = (float)(v108 * (float)-v162) + v163;
                  v171 = *(float *)&dword_140404A6C[v1 + 432826965] * v162;
                  v172 = *(float *)&v189 * v162;
                  v173 = *(float *)&dword_140404A6C[v1 + 432826964] * (float)-v162;
                  v174 = *(float *)&dword_140404A6C[v1 + 432826965] * (float)-v162;
                  *(float *)&v175 = v169 + (float)(*(float *)&v189 * v162);
                  *(float *)&dword_140404A6C[v166 + 431564591] = v167 + v171;
                  dword_140404A6C[v166 + 431564592] = v175;
                  v176 = v188;
                  *(float *)&dword_140404A6C[v166 + 431564590] = v170 + v168;
                  v177 = (float)(v176 * v162) + v163;
                  v178 = v190 * v162;
                  dword_140404A6C[5 * dword_140404A6C[431564589] + 431564593] = 0;
                  v179 = v178 + v164;
                  v188 = v177;
                  v180 = (float)(v191 * v162) + v165;
                  dword_140404A6C[5 * dword_140404A6C[431564589]++ + 431564594] = 1065353216;
                  v181 = 5 * dword_140404A6C[431564589];
                  *(float *)&dword_140404A6C[v181 + 431564590] = v177 + v168;
                  *(float *)&v182 = v173 + v188;
                  *(float *)&dword_140404A6C[v181 + 431564591] = v179 + v171;
                  *(float *)&dword_140404A6C[v181 + 431564592] = v180 + v172;
                  dword_140404A6C[5 * dword_140404A6C[431564589] + 431564593] = 1065353216;
                  dword_140404A6C[5 * dword_140404A6C[431564589]++ + 431564594] = 1065353216;
                  v183 = (float)-v162 * *(float *)&v189;
                  v184 = 5 * dword_140404A6C[431564589];
                  dword_140404A6C[v184 + 431564590] = v182;
                  *(float *)&dword_140404A6C[v184 + 431564591] = v174 + v179;
                  *(float *)&dword_140404A6C[v184 + 431564592] = v183 + v180;
                  dword_140404A6C[5 * dword_140404A6C[431564589] + 431564593] = 1065353216;
                  dword_140404A6C[5 * dword_140404A6C[431564589]++ + 431564594] = 0;
                  v185 = 5 * dword_140404A6C[431564589];
                  *(float *)&dword_140404A6C[v185 + 431564590] = v173 + v170;
                  *(float *)&dword_140404A6C[v185 + 431564591] = v174 + v167;
                  *(float *)&dword_140404A6C[v185 + 431564592] = v183 + v169;
                  dword_140404A6C[5 * dword_140404A6C[431564589] + 431564593] = 0;
                  dword_140404A6C[5 * dword_140404A6C[431564589]++ + 431564594] = 0;
                }
              }
            }
          }
          else if ( v75 != 3 )
          {
            *(_OWORD *)&dword_140404A6C[v1 + 432826961] = *(_OWORD *)&dword_140404A6C[284024505];
            *(_OWORD *)&dword_140404A6C[v1 + 432826965] = *(_OWORD *)&dword_140404A6C[284024509];
            dword_140404A6C[v1 + 432826969] = dword_140404A6C[284024513];
          }
        }
      }
      ++v0;
      v1 += 37;
      v2 -= 148LL;
      v3 = 0.0;
    }
    while ( v0 < (int)dword_140404A6C[433435845] );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v187
#undef v188
#undef v189
#undef v190
#undef v191
#undef v192
#undef v193
#undef v194
#undef v200
