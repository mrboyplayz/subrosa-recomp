/* Address: 0x1401550a0 | Name: sub_1401550A0 | Size: 1774 bytes */
_BOOL8 __fastcall sub_1401550A0(int a1, float *a2, float a3)
{
  __int128 v3; // xmm11
  __int128 v4; // xmm12
  __int128 v5; // xmm13
  __int128 v6; // xmm14
  __int128 v7; // xmm15
  __int64 v8; // r15
  __int64 v9; // rbx
  int v11; // r14d
  signed int v12; // esi
  int *v13; // rdi
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm15_4
  __int64 v18; // rax
  __int64 v19; // rax
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  __int64 v23; // rax
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm3_4
  float v27; // xmm6_4
  float v28; // xmm9_4
  float v29; // xmm10_4
  __int64 v30; // rax
  float v31; // xmm6_4
  float v32; // xmm9_4
  float v33; // xmm10_4
  __int64 v34; // rax
  float v35; // xmm11_4
  float v36; // xmm12_4
  float v37; // xmm13_4
  float v38; // xmm4_4
  float v39; // xmm5_4
  float v40; // xmm8_4
  float v41; // xmm3_4
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  float v45; // xmm12_4
  float v46; // xmm13_4
  float v47; // xmm11_4
  float v48; // xmm3_4
  float v49; // xmm4_4
  float v50; // xmm6_4
  float v51; // xmm5_4
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v56; // [rsp+48h] [rbp-C0h] BYREF
  float v57; // [rsp+50h] [rbp-B8h]
  unsigned int v58; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v59; // [rsp+5Ch] [rbp-ACh]
  unsigned int v60; // [rsp+60h] [rbp-A8h]
  float v61[2]; // [rsp+68h] [rbp-A0h] BYREF
  float v62; // [rsp+70h] [rbp-98h]
  float v63[2]; // [rsp+78h] [rbp-90h] BYREF
  float v64; // [rsp+80h] [rbp-88h]
  float v65[2]; // [rsp+88h] [rbp-80h] BYREF
  float v66; // [rsp+90h] [rbp-78h]
  float v67[2]; // [rsp+98h] [rbp-70h] BYREF
  float v68; // [rsp+A0h] [rbp-68h]
  __int128 v69; // [rsp+A8h] [rbp-60h]
  __int128 v70; // [rsp+B8h] [rbp-50h]
  __int128 v71; // [rsp+C8h] [rbp-40h]
  __int128 v72; // [rsp+D8h] [rbp-30h]
  __int128 v73; // [rsp+E8h] [rbp-20h]
  float v74; // [rsp+188h] [rbp+80h] BYREF
  float v75; // [rsp+190h] [rbp+88h]
  float v76; // [rsp+198h] [rbp+90h]

  v8 = a1;
  v9 = 5210LL * a1;
  v11 = (int)a2;
  if ( (float)(*a2 + a3) < *(float *)&dword_140404A6C[v9 + 129716753] )
    return 0;
  if ( (float)(a2[1] + a3) < *(float *)&dword_140404A6C[v9 + 129716754] )
    return 0;
  if ( (float)(a2[2] + a3) < *(float *)&dword_140404A6C[v9 + 129716755] )
    return 0;
  if ( (float)(*a2 - a3) > *(float *)&dword_140404A6C[v9 + 129716756] )
    return 0;
  if ( (float)(a2[1] - a3) > *(float *)&dword_140404A6C[v9 + 129716757] )
    return 0;
  if ( (float)(a2[2] - a3) > *(float *)&dword_140404A6C[v9 + 129716758] )
    return 0;
  v12 = 0;
  dword_140404A6C[73006988] = 1199570944;
  if ( (int)dword_140404A6C[v9 + 129717219] <= 0 )
    return 0;
  v13 = (int *)&dword_140404A6C[v9 + 129717222];
  v70 = v6;
  v73 = v3;
  v72 = v4;
  v71 = v5;
  v69 = v7;
  do
  {
    if ( dword_140404A6C[v9 + 129716710] != 13 || v13[13] > 0 )
    {
      v14 = v9 * 4 + 16LL * *(v13 - 1);
      v15 = *(float *)((char *)&dword_140404A6C[129719654] + v14);
      v16 = *(float *)((char *)&dword_140404A6C[129719655] + v14);
      v17 = *(float *)((char *)&dword_140404A6C[129719653] + v14);
      v18 = *v13;
      v76 = v15;
      v63[1] = v15;
      v19 = v9 * 4 + 16 * v18;
      v75 = v16;
      v64 = v16;
      v63[0] = v17;
      v20 = *(float *)((char *)&dword_140404A6C[129719653] + v19);
      v21 = *(float *)((char *)&dword_140404A6C[129719654] + v19);
      v22 = *(float *)((char *)&dword_140404A6C[129719655] + v19);
      v23 = v9 * 4 + 16LL * v13[1];
      v65[1] = v21;
      v24 = v21 - v15;
      v66 = v22;
      v25 = v22 - v16;
      v65[0] = v20;
      v26 = v20 - v17;
      v27 = *(float *)((char *)&dword_140404A6C[129719654] + v23);
      v28 = *(float *)((char *)&dword_140404A6C[129719655] + v23);
      v29 = *(float *)((char *)&dword_140404A6C[129719653] + v23);
      v30 = v13[2];
      v61[1] = v27;
      v31 = v27 - v15;
      v62 = v28;
      v32 = v28 - v16;
      v61[0] = v29;
      v33 = v29 - v17;
      v34 = v9 * 4 + 16 * v30;
      v35 = *(float *)((char *)&dword_140404A6C[129719653] + v34);
      v36 = *(float *)((char *)&dword_140404A6C[129719654] + v34);
      v37 = *(float *)((char *)&dword_140404A6C[129719655] + v34);
      v38 = (float)(v31 * v25) - (float)(v32 * v24);
      v67[0] = v35;
      v67[1] = v36;
      v39 = (float)(v32 * v26) - (float)(v33 * v25);
      v68 = v37;
      v40 = (float)(v33 * v24) - (float)(v31 * v26);
      v41 = fsqrt((float)((float)(v39 * v39) + (float)(v38 * v38)) + (float)(v40 * v40));
      if ( v41 == 0.0 )
      {
        v56 = 0;
        v57 = 0.0;
      }
      else
      {
        *(float *)&v56 = v38 * (float)(1.0 / v41);
        *((float *)&v56 + 1) = v39 * (float)(1.0 / v41);
        v57 = v40 * (float)(1.0 / v41);
      }
      if ( (unsigned int)sub_140158760(
                           (unsigned int)&v58,
                           (unsigned int)&v56,
                           (unsigned int)&v74,
                           v11,
                           LODWORD(a3),
                           (unsigned int)v63,
                           (unsigned int)v65,
                           (unsigned int)v61,
                           v56,
                           LODWORD(v57),
                           v58,
                           v60,
                           LODWORD(v61[0]),
                           LODWORD(v62),
                           LODWORD(v63[0]),
                           LODWORD(v64),
                           LODWORD(v65[0]),
                           LODWORD(v66),
                           LODWORD(v67[0]),
                           LODWORD(v68),
                           v69,
                           DWORD2(v69),
                           v70,
                           DWORD2(v70),
                           v71,
                           DWORD2(v71),
                           v72,
                           DWORD2(v72),
                           v73)
        && *(float *)&dword_140404A6C[73006988] > v74 )
      {
        v42 = v9 * 4 + 16LL * *(v13 - 1);
        dword_140404A6C[73006981] = v58;
        dword_140404A6C[73006982] = v59;
        dword_140404A6C[73006983] = v60;
        v43 = 5210 * v8 + *(int *)((char *)&dword_140404A6C[129719656] + v42);
        *(_QWORD *)&dword_140404A6C[73006984] = v56;
        *(float *)&dword_140404A6C[73006986] = v57;
        dword_140404A6C[73006994] = dword_140404A6C[v43 + 129716769];
        v44 = v9 * 4 + 16LL * *v13;
        *(float *)&dword_140404A6C[73006988] = v74;
        dword_140404A6C[73006993] = v12;
        dword_140404A6C[73006995] = dword_140404A6C[5210 * v8
                                                  + 129716769
                                                  + *(int *)((char *)&dword_140404A6C[129719656] + v44)];
        dword_140404A6C[73006996] = dword_140404A6C[5210 * v8
                                                  + 129716769
                                                  + (int)dword_140404A6C[4 * v13[1] + 129719656 + v9]];
        sub_14002D370((float *)&dword_140404A6C[73006998], (float *)&dword_140404A6C[73006981], v63, v65, v61);
      }
      if ( *(v13 - 2) == 4 )
      {
        v45 = v36 - v76;
        v46 = v37 - v75;
        v47 = v35 - v17;
        v48 = (float)(v32 * v45) - (float)(v31 * v46);
        v49 = (float)(v33 * v46) - (float)(v32 * v47);
        v50 = (float)(v31 * v47) - (float)(v33 * v45);
        v51 = fsqrt((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50));
        if ( v51 == 0.0 )
        {
          v56 = 0;
          v57 = 0.0;
        }
        else
        {
          *(float *)&v56 = v48 * (float)(1.0 / v51);
          *((float *)&v56 + 1) = v49 * (float)(1.0 / v51);
          v57 = v50 * (float)(1.0 / v51);
        }
        if ( (unsigned int)sub_140158760(
                             (unsigned int)&v58,
                             (unsigned int)&v56,
                             (unsigned int)&v74,
                             v11,
                             LODWORD(a3),
                             (unsigned int)v63,
                             (unsigned int)v61,
                             (unsigned int)v67,
                             v56,
                             LODWORD(v57),
                             v58,
                             v60,
                             LODWORD(v61[0]),
                             LODWORD(v62),
                             LODWORD(v63[0]),
                             LODWORD(v64),
                             LODWORD(v65[0]),
                             LODWORD(v66),
                             LODWORD(v67[0]),
                             LODWORD(v68),
                             v69,
                             DWORD2(v69),
                             v70,
                             DWORD2(v70),
                             v71,
                             DWORD2(v71),
                             v72,
                             DWORD2(v72),
                             v73) )
        {
          if ( *(float *)&dword_140404A6C[73006988] > v74 )
          {
            v52 = v9 * 4 + 16LL * *(v13 - 1);
            dword_140404A6C[73006981] = v58;
            dword_140404A6C[73006982] = v59;
            dword_140404A6C[73006983] = v60;
            v53 = 5210 * v8 + *(int *)((char *)&dword_140404A6C[129719656] + v52);
            *(_QWORD *)&dword_140404A6C[73006984] = v56;
            *(float *)&dword_140404A6C[73006986] = v57;
            dword_140404A6C[73006994] = dword_140404A6C[v53 + 129716769];
            v54 = v9 * 4 + 16LL * v13[1];
            *(float *)&dword_140404A6C[73006988] = v74;
            dword_140404A6C[73006993] = v12;
            dword_140404A6C[73006995] = dword_140404A6C[5210 * v8
                                                      + 129716769
                                                      + *(int *)((char *)&dword_140404A6C[129719656] + v54)];
            dword_140404A6C[73006996] = dword_140404A6C[5210 * v8
                                                      + 129716769
                                                      + (int)dword_140404A6C[4 * v13[2] + 129719656 + v9]];
            sub_14002D370((float *)&dword_140404A6C[73006998], (float *)&dword_140404A6C[73006981], v63, v61, v67);
          }
        }
      }
    }
    ++v12;
    v13 += 16;
  }
  while ( v12 < (int)dword_140404A6C[v9 + 129717219] );
  return *(float *)&dword_140404A6C[73006988] < 65536.0;
}

