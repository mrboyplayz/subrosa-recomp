/* Address: 0x140158cd0 | Name: sub_140158CD0 | Size: 2648 bytes */
__int64 sub_140158CD0()
{
  int v0; // ebp
  float *v1; // rbx
  float v2; // xmm4_4
  float v3; // xmm3_4
  float v4; // xmm5_4
  float v5; // xmm2_4
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
  int v33; // r9d
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
  float v99[12]; // [rsp+0h] [rbp-108h] BYREF
  float v100; // [rsp+30h] [rbp-D8h] BYREF
  float v101; // [rsp+34h] [rbp-D4h]
  float v102; // [rsp+38h] [rbp-D0h]
  __int64 v103; // [rsp+40h] [rbp-C8h]

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
        v4 = v1[13];
        v5 = fsqrt((float)((float)(v2 * v2) + (float)(v3 * v3)) + (float)(v4 * v4));
        if ( v5 > 0.000015258789 )
        {
          v100 = v3 * (float)(1.0 / v5);
          v101 = v2 * (float)(1.0 / v5);
          v102 = v4 * (float)(1.0 / v5);
          sub_14007B2A0((__int64)&dword_140404A6C[26 * v0 + 431138510], &v100);
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
        v101 = *(v1 - 3);
        v14 = v101 + v10;
        v100 = v12;
        v102 = v13;
        *(v1 - 4) = v8 + v12;
        *(v1 - 3) = v14;
        *(v1 - 2) = v11 + v13;
        if ( (unsigned int)sub_1400DC050(&v100, &dword_140404A6C[v9 + 431138504], 0) )
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
              || (v99[8] = (float)((float)(rand() & 0x7F) * 0.0009765625) + 1.0,
                  sub_14005ED40(dword_140404A6C[283786008], (float *)&dword_140404A6C[v9 + 431138504], 0, v33),
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
  return MEMORY[0x1401F8B20]((unsigned __int64)v99 ^ v103);
}

