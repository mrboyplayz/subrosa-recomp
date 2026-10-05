/* Address: 0x1400bca30 | Name: sub_1400BCA30 | Size: 5591 bytes */
__int64 __fastcall sub_1400BCA30(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rbx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  int v7; // r14d
  int v8; // edi
  double v9; // xmm0_8
  double v10; // xmm0_8
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm9_4
  float v18; // xmm2_4
  float v19; // xmm7_4
  float v20; // xmm13_4
  float v21; // xmm5_4
  float v22; // xmm11_4
  float v23; // xmm6_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  float v32; // xmm4_4
  float v33; // xmm4_4
  float v34; // xmm2_4
  float v35; // xmm2_4
  __int64 i; // rcx
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  unsigned int *v42; // r15
  float v43; // xmm4_4
  float v44; // xmm2_4
  unsigned int v45; // xmm0_4
  __int32 v46; // xmm1_4
  unsigned int v47; // xmm0_4
  float v48; // xmm3_4
  float v49; // xmm2_4
  float v50; // xmm0_4
  float *v51; // r12
  __int64 v52; // rdi
  unsigned __int64 v53; // rsi
  float v54; // xmm0_4
  float v55; // xmm0_4
  unsigned int v56; // eax
  unsigned int *v57; // rdi
  __m128 v58; // xmm4
  __m128 v59; // xmm15
  float v60; // xmm3_4
  float v61; // xmm8_4
  float v62; // xmm9_4
  float v63; // xmm3_4
  float v64; // xmm9_4
  float v65; // xmm8_4
  __m128 v66; // xmm5
  __m128 v67; // xmm6
  __m128 v68; // xmm7
  float v69; // xmm3_4
  float v70; // xmm6_4
  float v71; // xmm8_4
  float v72; // xmm7_4
  double v73; // xmm0_8
  unsigned int v74; // xmm4_4
  float v75; // xmm1_4
  float v76; // xmm6_4
  float v77; // xmm7_4
  float v78; // xmm8_4
  float v79; // xmm2_4
  float *v80; // rdi
  __int64 v81; // rsi
  int v82; // r12d
  unsigned int *v83; // r15
  __int64 v84; // rax
  __int64 v85; // rcx
  int v86; // eax
  float v87; // xmm0_4
  unsigned int v88; // xmm0_4
  int v89; // r14d
  float v90; // xmm14_4
  float v91; // xmm10_4
  float v92; // xmm11_4
  float v93; // xmm12_4
  float v94; // xmm10_4
  float v95; // xmm2_4
  float v96; // xmm4_4
  float v97; // xmm7_4
  float v98; // xmm3_4
  float v99; // xmm6_4
  float v100; // xmm8_4
  float v101; // xmm11_4
  float v102; // xmm9_4
  float v103; // xmm10_4
  float v104; // xmm3_4
  float v105; // xmm2_4
  float v106; // xmm1_4
  float v107; // xmm6_4
  float v108; // xmm7_4
  float v109; // xmm12_4
  float v110; // xmm8_4
  float v111; // xmm14_4
  float v112; // xmm0_4
  float v113; // xmm1_4
  char v114; // al
  bool v115; // cc
  int v116; // ecx
  float *v117; // r14
  float v119; // xmm0_4
  float v120; // xmm8_4
  float v121; // xmm6_4
  float v122; // xmm5_4
  float v123; // xmm4_4
  float v124; // xmm1_4
  float v125; // xmm0_4
  float v126; // xmm1_4
  float v127; // xmm0_4
  __int64 v128; // [rsp+8h] [rbp-100h] BYREF
  int v129; // [rsp+78h] [rbp-90h]
  float v130; // [rsp+80h] [rbp-88h] BYREF
  float v131; // [rsp+84h] [rbp-84h]
  float v132; // [rsp+88h] [rbp-80h]
  unsigned __int64 v133; // [rsp+8Ch] [rbp-7Ch]
  float v134; // [rsp+98h] [rbp-70h] BYREF
  float v135; // [rsp+9Ch] [rbp-6Ch]
  __int64 v136; // [rsp+A0h] [rbp-68h] BYREF
  int v137; // [rsp+A8h] [rbp-60h]
  float v138; // [rsp+B0h] [rbp-58h]
  float *v139; // [rsp+B8h] [rbp-50h]
  float *v140; // [rsp+C0h] [rbp-48h]
  float *v141; // [rsp+C8h] [rbp-40h]
  float v142[4]; // [rsp+D0h] [rbp-38h] BYREF
  float v143[4]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v144; // [rsp+F0h] [rbp-18h] BYREF
  float v145; // [rsp+F8h] [rbp-10h]
  __m128 v146; // [rsp+100h] [rbp-8h] BYREF
  __int32 v147; // [rsp+110h] [rbp+8h]
  unsigned int v148; // [rsp+114h] [rbp+Ch]
  float v149; // [rsp+118h] [rbp+10h] BYREF
  float v150; // [rsp+11Ch] [rbp+14h]
  float v151; // [rsp+120h] [rbp+18h]
  __int128 v152; // [rsp+128h] [rbp+20h] BYREF
  __int128 v153; // [rsp+138h] [rbp+30h]
  float v154; // [rsp+148h] [rbp+40h]
  __m128 v155; // [rsp+150h] [rbp+48h] BYREF
  float v156; // [rsp+168h] [rbp+60h] BYREF
  float v157; // [rsp+16Ch] [rbp+64h]
  float v158; // [rsp+170h] [rbp+68h]
  float v159[2]; // [rsp+174h] [rbp+6Ch]
  float v160; // [rsp+17Ch] [rbp+74h]
  __int128 v161; // [rsp+180h] [rbp+78h] BYREF
  __int128 v162; // [rsp+190h] [rbp+88h] BYREF
  int v163; // [rsp+1A0h] [rbp+98h]
  float v164; // [rsp+1A8h] [rbp+A0h] BYREF
  float v165; // [rsp+1ACh] [rbp+A4h]
  float v166; // [rsp+1B0h] [rbp+A8h]
  _DWORD v167[2]; // [rsp+1B4h] [rbp+ACh]
  _DWORD v168[7]; // [rsp+1BCh] [rbp+B4h] BYREF
  float v169[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v170[24]; // [rsp+1E8h] [rbp+E0h] BYREF

  v2 = a1;
  v3 = 7166LL * (int)a1;
  v134 = 1.0;
  v135 = 1.0;
  v4 = dword_140404A6C[v3 + 280658310];
  v138 = fminf(
           fmaxf(
             (float)(fsqrt(
                       (float)((float)(*(float *)&dword_140404A6C[v3 + 280657930]
                                     * *(float *)&dword_140404A6C[v3 + 280657930])
                             + (float)(*(float *)&dword_140404A6C[v3 + 280657931]
                                     * *(float *)&dword_140404A6C[v3 + 280657931]))
                     + (float)(*(float *)&dword_140404A6C[v3 + 280657932] * *(float *)&dword_140404A6C[v3 + 280657932]))
                   * 60.0)
           - 0.5,
             0.0),
           1.0);
  if ( v4 < 100 )
    v134 = (float)v4 * 0.0099999998;
  v5 = dword_140404A6C[v3 + 280658312];
  if ( v5 < 100 )
    v135 = (float)v5 * 0.0099999998;
  v6 = dword_140404A6C[v3 + 280651325];
  v7 = 0;
  v8 = 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      dword_140404A6C[v3 + 280651334] = 0;
      dword_140404A6C[v3 + 280657908] = 0;
      if ( *(float *)&dword_140404A6C[v3 + 280651456] > 0.875 )
      {
        v10 = sub_14023F704(a1, a2);
        dword_140404A6C[v3 + 280651341] = LODWORD(v10);
      }
      if ( dword_140404A6C[v3 + 280651324] && *(float *)&dword_140404A6C[v3 + 280657934] < 0.016666668 )
      {
        dword_140404A6C[v3 + 280651325] = 0;
        dword_140404A6C[v3 + 280651334] = 1;
      }
    }
  }
  else
  {
    dword_140404A6C[v3 + 280651334] = 1;
    if ( !dword_140404A6C[v3 + 280658026] && !dword_140404A6C[v3 + 280658081] )
    {
      if ( !dword_140404A6C[v3 + 280651324] || *(float *)&dword_140404A6C[v3 + 280657934] > 0.016666668 )
      {
        if ( *(float *)&dword_140404A6C[v3 + 280651456] > 0.875 )
        {
          v9 = sub_14023F704(a1, a2);
          dword_140404A6C[v3 + 280651341] = LODWORD(v9);
        }
        dword_140404A6C[v3 + 280651325] = 1;
        dword_140404A6C[v3 + 280657908] = 0;
      }
      dword_140404A6C[v3 + 280651334] = 0;
    }
  }
  v11 = *(float *)&dword_140404A6C[282486350];
  v12 = *(float *)&dword_140404A6C[282486425];
  v13 = *(float *)&dword_140404A6C[282486299];
  v14 = *(float *)&dword_140404A6C[282486350];
  *(_QWORD *)&dword_140404A6C[v3 + 280657945] = 0;
  *(_QWORD *)&dword_140404A6C[v3 + 280657947] = 0;
  *(_QWORD *)&dword_140404A6C[v3 + 280657949] = 0;
  v15 = v14 * *(float *)&dword_140404A6C[v3 + 280652314];
  v16 = (float)(v14 * *(float *)&dword_140404A6C[v3 + 280652313]) + *(float *)&dword_140404A6C[v3 + 280652298];
  v17 = *(float *)&dword_140404A6C[v3 + 280651440];
  v18 = (float)(v11 * *(float *)&dword_140404A6C[v3 + 280652315]) + *(float *)&dword_140404A6C[v3 + 280652300];
  v19 = *(float *)&dword_140404A6C[v3 + 280651455];
  v20 = *(float *)&dword_140404A6C[v3 + 280651442];
  v21 = *(float *)&dword_140404A6C[v3 + 280651457];
  v22 = *(float *)&dword_140404A6C[v3 + 280651441];
  v23 = *(float *)&dword_140404A6C[v3 + 280651456];
  v165 = v15 + *(float *)&dword_140404A6C[v3 + 280652299];
  v24 = v12 * *(float *)&dword_140404A6C[v3 + 280652548];
  v164 = v16;
  v25 = v12 * *(float *)&dword_140404A6C[v3 + 280652547];
  v26 = v24 + *(float *)&dword_140404A6C[v3 + 280652533];
  v27 = v12 * *(float *)&dword_140404A6C[v3 + 280652549];
  v28 = v25 + *(float *)&dword_140404A6C[v3 + 280652532];
  v166 = v18;
  v29 = v13 * *(float *)&dword_140404A6C[v3 + 280651453];
  v30 = v27 + *(float *)&dword_140404A6C[v3 + 280652534];
  *(float *)&v167[1] = v26;
  v31 = v13 * *(float *)&dword_140404A6C[v3 + 280651452];
  v32 = v13 * *(float *)&dword_140404A6C[v3 + 280651454];
  *(float *)v167 = v28;
  *(float *)v168 = v30;
  v156 = (float)(v31 + v17) + (float)(*(float *)&dword_140404A6C[282486300] * v19);
  v157 = (float)(v29 + v22) + (float)(*(float *)&dword_140404A6C[282486300] * v23);
  v158 = (float)(v32 + v20) + (float)(*(float *)&dword_140404A6C[282486300] * v21);
  v33 = (float)(*(float *)&dword_140404A6C[282486374] * *(float *)&dword_140404A6C[v3 + 280651454]) + v20;
  v34 = (float)((float)(*(float *)&dword_140404A6C[282486374] * *(float *)&dword_140404A6C[v3 + 280651453]) + v22)
      + (float)(*(float *)&dword_140404A6C[282486375] * v23);
  v159[0] = (float)((float)(*(float *)&dword_140404A6C[282486374] * *(float *)&dword_140404A6C[v3 + 280651452]) + v17)
          + (float)(*(float *)&dword_140404A6C[282486375] * v19);
  v152 = xmmword_140278D30;
  v159[1] = v34;
  v153 = xmmword_140278D30;
  v160 = v33 + (float)(*(float *)&dword_140404A6C[282486375] * v21);
  v154 = 1.0;
  sub_14007B2A0((__int64)&v152, (float *)&v152 + 3);
  v163 = 1065353216;
  v161 = xmmword_140278D30;
  v162 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v161, (float *)&v161 + 3);
  v35 = 0.0;
  for ( i = 0; i < 2; i += 2 )
  {
    v37 = v154 * (float)(v159[3 * i - 1] - *(float *)&v167[3 * i - 1]);
    v38 = (float)(*((float *)&v153 + 2) * (float)(*(&v156 + 3 * i) - *(&v164 + 3 * i))) * 2.0;
    if ( i )
      v39 = v35 + (float)(v38 + (float)(v37 * 2.0));
    else
      v39 = v35 + (float)((float)(v37 * -2.0) - v38);
    v40 = *((float *)&v153 + 2) * (float)(v159[3 * i] - *(float *)&v167[3 * i]);
    v41 = v154 * (float)(*(&v160 + 3 * i) - *(float *)&v168[3 * i]);
    if ( v8 )
      v35 = (float)((float)(v39 + v41) + v41) + (float)(v40 + v40);
    else
      v35 = v39 + (float)((float)(v41 * -2.0) - (float)(v40 * 2.0));
    v8 += 2;
  }
  v42 = &dword_140404A6C[v3 + 280658026];
  if ( !dword_140404A6C[v3 + 280658026] && !dword_140404A6C[v3 + 280658081] )
    v35 = v35 * 0.5;
  *(float *)&dword_140404A6C[v3 + 280658138] = (float)((float)(v35 - *(float *)&dword_140404A6C[v3 + 280658138]) * 0.5)
                                             + *(float *)&dword_140404A6C[v3 + 280658138];
  sub_1400B40B0(v2);
  sub_14007B2A0((__int64)&v161, (float *)&v162 + 2);
  sub_14007B2A0((__int64)&v161, (float *)&v161);
  v43 = (float)(*(float *)&dword_1402F618C * 0.25) + *(float *)&dword_140404A6C[v3 + 280651441];
  v44 = (float)(*(float *)&dword_1402F6190 * 0.25) + *(float *)&dword_140404A6C[v3 + 280651442];
  *(float *)&v144 = (float)(*(float *)&dword_1402F6188 * 0.25) + *(float *)&dword_140404A6C[v3 + 280651440];
  *((float *)&v144 + 1) = v43;
  v145 = v44;
  v149 = *(float *)&v144 - (float)(*(float *)&dword_1402F6188 * 1.5);
  v150 = v43 - (float)(*(float *)&dword_1402F618C * 1.5);
  v151 = v44 - (float)(*(float *)&dword_1402F6190 * 1.5);
  sub_1400B91E0(v2, (__int64)&v144, (__int64)&v149);
  v45 = dword_140404A6C[v3 + 280657982];
  v46 = dword_140404A6C[v3 + 280657980];
  dword_140404A6C[v3 + 280657993] = 0;
  v146.m128_u64[1] = __PAIR64__(v46, v45);
  v148 = v45;
  v146.m128_i32[1] = dword_140404A6C[v3 + 280657981];
  v147 = v146.m128_i32[1];
  *(float *)&v47 = *(float *)&dword_140404A6C[v3 + 280657992] + *(float *)&dword_140404A6C[v3 + 280657986];
  v146.m128_i32[0] = v46;
  dword_140404A6C[v3 + 280657995] = v47;
  *(float *)&dword_140404A6C[v3 + 280657996] = *(float *)&dword_140404A6C[v3 + 280657993]
                                             + *(float *)&dword_140404A6C[v3 + 280657987];
  *(float *)&dword_140404A6C[v3 + 280657997] = *(float *)&dword_140404A6C[v3 + 280657994]
                                             + *(float *)&dword_140404A6C[v3 + 280657988];
  sub_1400BAA40(v2, (_BOOL8)&v156, (__int64)&v164);
  v48 = *(float *)&dword_140404A6C[v3 + 280658108];
  v49 = *(float *)&dword_140404A6C[v3 + 280658053];
  v50 = v48 + v49;
  if ( (float)(v48 + v49) <= 1.0 )
  {
    v130 = *(float *)&dword_140404A6C[v3 + 280658053];
    v131 = v48;
  }
  else
  {
    v131 = (float)(1.0 / v50) * v48;
    v130 = (float)(1.0 / v50) * v49;
  }
  v51 = &v130;
  v52 = 0;
  v53 = 0;
  do
  {
    v54 = *(float *)((char *)&v156 + v52 * 4);
    v168[v52 + 2] = *(_DWORD *)((char *)&v157 + v52 * 4);
    v168[v52 + 3] = LODWORD(v159[v52 - 1]);
    v55 = v54 + *(float *)&dword_140404A6C[v3 + 280657930];
    *(_QWORD *)((char *)v170 + v52 * 4) = 0;
    *(_DWORD *)((char *)&v170[1] + v52 * 4) = 0;
    *(float *)&v168[v52 + 1] = v55;
    *(float *)&v168[v52 + 2] = *(float *)&v168[v52 + 2] + *(float *)&dword_140404A6C[v3 + 280657931];
    v56 = *v42;
    *(float *)&v168[v52 + 3] = *(float *)&v168[v52 + 3] + *(float *)&dword_140404A6C[v3 + 280657932];
    if ( v56 == 1 )
    {
      sub_1400BBF30(
        v2,
        v7,
        (float *)&v168[v53 / 4 + 1],
        (float *)((char *)v170 + v53),
        (float *)((char *)&v156 + v53),
        (float *)((char *)&v164 + v53),
        &v146.m128_f32[v53 / 4],
        (__int64)&v161,
        *v51);
      v56 = *v42;
    }
    if ( v56 == 3 )
      sub_1400BB6B0(v2, v7, (__int64)&v155 + v53, (float *)((char *)&v156 + v53), (int)&v146 + v53, (float *)&v152);
    ++v7;
    v53 += 12LL;
    v52 += 3;
    ++v51;
    v42 += 55;
  }
  while ( v7 < 2 );
  sub_14010E370(&v155, &v161);
  v57 = &dword_140404A6C[v3 + 280651452];
  sub_14010E370(&v146, &dword_140404A6C[v3 + 280651452]);
  v58 = (__m128)v155.m128_u32[3];
  v59 = (__m128)v146.m128_u32[3];
  v60 = v146.m128_f32[2];
  v61 = v146.m128_f32[0];
  v62 = v146.m128_f32[1];
  if ( (float)((float)((float)(v155.m128_f32[3] * v146.m128_f32[3]) + (float)(v155.m128_f32[2] * v146.m128_f32[2]))
             + (float)((float)(v155.m128_f32[0] * v146.m128_f32[0]) + (float)(v155.m128_f32[1] * v146.m128_f32[1]))) < 0.0 )
  {
    v146 = _mm_xor_ps(v146, (__m128)xmmword_140279870);
    v60 = v146.m128_f32[2];
    v62 = v146.m128_f32[1];
    v61 = v146.m128_f32[0];
    v59 = _mm_shuffle_ps(v146, v146, 255);
  }
  v66 = v59;
  v63 = -v60;
  v64 = -v62;
  v65 = -v61;
  v67 = v59;
  v68 = v59;
  v66.m128_f32[0] = (float)((float)((float)(v59.m128_f32[0] * v155.m128_f32[0]) + (float)(v155.m128_f32[3] * v65))
                          + (float)(v155.m128_f32[2] * v64))
                  - (float)(v155.m128_f32[1] * v63);
  v67.m128_f32[0] = (float)((float)((float)(v59.m128_f32[0] * v155.m128_f32[1]) - (float)(v155.m128_f32[2] * v65))
                          + (float)(v155.m128_f32[3] * v64))
                  + (float)(v155.m128_f32[0] * v63);
  v68.m128_f32[0] = (float)((float)((float)(v59.m128_f32[0] * v155.m128_f32[2]) + (float)(v155.m128_f32[1] * v65))
                          - (float)(v155.m128_f32[0] * v64))
                  + (float)(v155.m128_f32[3] * v63);
  v58.m128_f32[0] = (float)((float)((float)(v155.m128_f32[3] * v59.m128_f32[0]) - (float)(v155.m128_f32[0] * v65))
                          - (float)(v155.m128_f32[1] * v64))
                  - (float)(v155.m128_f32[2] * v63);
  v155 = _mm_movelh_ps(_mm_unpacklo_ps(v66, v67), _mm_unpacklo_ps(v68, v58));
  v69 = fsqrt(
          (float)((float)(v67.m128_f32[0] * v67.m128_f32[0]) + (float)(v66.m128_f32[0] * v66.m128_f32[0]))
        + (float)(v68.m128_f32[0] * v68.m128_f32[0]));
  if ( v69 == 0.0 )
  {
    v71 = 0.0;
    v70 = 0.0;
    v72 = 0.0;
  }
  else
  {
    v70 = v67.m128_f32[0] * (float)(1.0 / v69);
    v71 = (float)(1.0 / v69) * v66.m128_f32[0];
    v72 = v68.m128_f32[0] * (float)(1.0 / v69);
  }
  v73 = acos(fminf(fmaxf(v58.m128_f32[0], -1.0), 1.0));
  LODWORD(v133) = v57[3];
  HIDWORD(v161) = v133;
  v74 = v57[4];
  v75 = v73 + v73;
  *(float *)&v73 = fminf(*(float *)&dword_140404A6C[v3 + 280657921] + 0.5, 1.0);
  DWORD1(v161) = v57[1];
  HIDWORD(v162) = v57[7];
  HIDWORD(v133) = v74;
  LODWORD(v162) = v74;
  v130 = *((float *)v57 + 5);
  *((float *)&v162 + 1) = v130;
  *(float *)&v73 = fmaxf(*(float *)&v73, 0.125) * 0.25;
  v76 = (float)(v70 * v75) * *(float *)&v73;
  v77 = (float)(v72 * v75) * *(float *)&v73;
  v78 = (float)(v71 * v75) * *(float *)&v73;
  LODWORD(v161) = *v57;
  DWORD2(v161) = v57[2];
  DWORD2(v162) = v57[6];
  v163 = v57[8];
  v79 = fsqrt((float)((float)(v76 * v76) + (float)(v78 * v78)) + (float)(v77 * v77));
  if ( v79 > 0.000015258789 )
  {
    *(float *)&v144 = v78 * (float)(1.0 / v79);
    *((float *)&v144 + 1) = v76 * (float)(1.0 / v79);
    v145 = v77 * (float)(1.0 / v79);
    sub_14007B2A0((__int64)&v161, (float *)&v144);
    v130 = *((float *)&v162 + 1);
    v133 = __PAIR64__(v162, HIDWORD(v161));
  }
  v140 = &v134;
  v129 = 0;
  v139 = (float *)&dword_140404A6C[282486348];
  v80 = (float *)&dword_140404A6C[v3 + 280658034];
  v141 = (float *)v170;
  v81 = 0;
  v82 = 10;
  v83 = &dword_140404A6C[v3 + 280652378];
  do
  {
    if ( v83[73] )
    {
      v84 = *((int *)v80 - 11);
      if ( (_DWORD)v84 != -1 )
      {
        v85 = 61 * v84;
        v86 = *((_DWORD *)v80 - 8);
        *(_QWORD *)&dword_140404A6C[v85 + 486149267] = 0;
        dword_140404A6C[v85 + 486149269] = 0;
        dword_140404A6C[v85 + 486149286] = 1063675494;
        dword_140404A6C[v85 + 486149281] = 1056964608;
        dword_140404A6C[v85 + 486149282] = 1056964608;
        if ( v86 )
        {
          if ( v86 == 3 )
          {
            dword_140404A6C[v85 + 486149286] = 0;
            v87 = 1.0 - v138;
            dword_140404A6C[v85 + 486149273] = 0;
            *(float *)&v88 = 0.5 - (float)((float)(1.0 - (float)((float)(v87 * v87) * (float)(v87 * v87))) * 0.4375);
            dword_140404A6C[v85 + 486149281] = v88;
            dword_140404A6C[v85 + 486149282] = v88;
          }
        }
        else
        {
          dword_140404A6C[v85 + 486149286] = 0;
          dword_140404A6C[v85 + 486149273] = 0;
        }
      }
    }
    v154 = 1.0;
    v152 = xmmword_140278D30;
    v153 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v152, (float *)&v152 + 3);
    sub_14007B2A0((__int64)&v152, (float *)&v152);
    v89 = *((_DWORD *)v80 - 8);
    if ( v89 == 1 )
    {
      v154 = 1.0;
      v152 = xmmword_140278D30;
      v153 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v152, (float *)&v152 + 3);
      sub_14007B2A0((__int64)&v152, (float *)&v152);
      v89 = *((_DWORD *)v80 - 8);
    }
    sub_14010E370(&v155, &v152);
    sub_14010E370(&v146, &v161);
    v90 = v155.m128_f32[3];
    v91 = v155.m128_f32[2];
    v92 = v155.m128_f32[0];
    v93 = v155.m128_f32[1];
    v132 = v146.m128_f32[1];
    if ( (float)((float)((float)(v146.m128_f32[3] * v155.m128_f32[3]) + (float)(v146.m128_f32[2] * v155.m128_f32[2]))
               + (float)((float)(v146.m128_f32[0] * v155.m128_f32[0]) + (float)(v146.m128_f32[1] * v155.m128_f32[1]))) < 0.0 )
    {
      v155 = _mm_xor_ps(v155, (__m128)xmmword_140279870);
      v91 = v155.m128_f32[2];
      v93 = v155.m128_f32[1];
      v92 = v155.m128_f32[0];
      v90 = _mm_shuffle_ps(v155, v155, 255).m128_f32[0];
    }
    v155.m128_f32[0] = -v92;
    v94 = -v91;
    v155.m128_f32[1] = -v93;
    v95 = v146.m128_f32[0] * v94;
    v96 = v146.m128_f32[0] * (float)-v93;
    v97 = v146.m128_f32[0] * (float)-v92;
    v98 = v146.m128_f32[1] * (float)-v92;
    v99 = v146.m128_f32[1] * (float)-v93;
    v155.m128_f32[2] = v94;
    v146.m128_f32[0] = (float)((float)((float)(v146.m128_f32[0] * v90) + (float)(v146.m128_f32[3] * (float)-v92))
                             + (float)(v132 * v94))
                     - (float)(v146.m128_f32[2] * (float)-v93);
    v146.m128_f32[1] = (float)((float)((float)(v146.m128_f32[3] * (float)-v93) - v95) + (float)(v132 * v90))
                     + (float)(v146.m128_f32[2] * (float)-v92);
    v100 = (float)((float)((float)(v146.m128_f32[3] * v90) - v97) - v99) - (float)(v146.m128_f32[2] * v94);
    v146.m128_f32[2] = (float)((float)((float)(v146.m128_f32[3] * v94) + v96) - v98) + (float)(v146.m128_f32[2] * v90);
    v146.m128_f32[3] = v100;
    if ( (v89 & 0xFFFFFFF7) == 0 )
      v146 = (__m128)xmmword_140279490;
    v101 = *(float *)((char *)&v156 + v81 * 4) + *(float *)&dword_140404A6C[v3 + 280657930];
    v102 = *(float *)((char *)&v157 + v81 * 4) + *(float *)&dword_140404A6C[v3 + 280657931];
    v103 = v159[v81 - 1] + *(float *)&dword_140404A6C[v3 + 280657932];
    if ( v89 == 1 )
    {
      v102 = *(float *)&v168[v81 + 2];
      v103 = *(float *)&v168[v81 + 3];
      v101 = *(float *)&v168[v81 + 1];
    }
    else
    {
      *(_QWORD *)((char *)v170 + v81 * 4) = 0;
      *(_DWORD *)((char *)&v170[1] + v81 * 4) = 0;
    }
    v104 = *(float *)((char *)&v164 + v81 * 4);
    v105 = *(float *)((char *)&v165 + v81 * 4);
    v106 = *(float *)&v167[v81 - 1];
    if ( v89 == 1 )
    {
      v154 = 1.0;
      v152 = xmmword_140278D30;
      v153 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v152, (float *)&v152 + 3);
      sub_14007B2A0((__int64)&v152, (float *)&v152);
      v107 = *((float *)v83 - 1);
      v108 = *(float *)v83;
      v109 = *((float *)v83 - 2) - (float)(*((float *)v83 + 16) * 0.09375);
      v110 = v107 - (float)(*((float *)v83 + 17) * 0.09375);
      v111 = *(float *)v83 - (float)(*((float *)v83 + 18) * 0.09375);
      v149 = (float)(*(float *)&dword_1402F6188 * 0.25) + *((float *)v83 - 2);
      v150 = (float)(*(float *)&dword_1402F618C * 0.25) + v107;
      v151 = (float)(*(float *)&dword_1402F6190 * 0.25) + v108;
      v169[0] = v149 - (float)(*(float *)&dword_1402F6188 * 0.5);
      v169[1] = v150 - (float)(*(float *)&dword_1402F618C * 0.5);
      v169[2] = v151 - (float)(*(float *)&dword_1402F6190 * 0.5);
      if ( (unsigned int)sub_1400B91E0(v2, (__int64)&v149, (__int64)v169) )
        v110 = *(float *)&dword_140404A6C[73006982] + 0.03125;
      if ( v83[73] )
        v110 = v80[20] + 0.03125;
      v112 = 0.09375 - *v139;
      v89 = *((_DWORD *)v80 - 8);
      v104 = (float)(*((float *)&v153 + 2) * v112) + v109;
      v105 = (float)(*((float *)&v153 + 3) * v112) + v110;
      v106 = (float)(v154 * v112) + v111;
    }
    switch ( v89 )
    {
      case 3:
        v104 = *(v80 - 2);
        v105 = *(v80 - 1);
        v106 = *v80;
        break;
      case 8:
        v104 = v101 - (float)(*(float *)&v133 * 0.25);
        v105 = v102 - (float)(*((float *)&v133 + 1) * 0.25);
        v106 = v103 - (float)(v130 * 0.25);
        break;
      case 0:
        v119 = *(float *)&dword_140404A6C[v3 + 280651373] * -0.75;
        v120 = *(float *)&dword_140404A6C[v3 + 280651456];
        v121 = *(float *)&dword_140404A6C[v3 + 280651457];
        v122 = *(float *)&dword_140404A6C[v3 + 280651455];
        v105 = (float)(v120 * v119) + v102;
        v123 = (float)(v121 * v119) + v103;
        v104 = (float)(v122 * v119) + v101;
        v106 = v123;
        if ( dword_140404A6C[v3 + 280651324] )
        {
          v105 = v105 - (float)(fmaxf(*(float *)&dword_140404A6C[v3 + 280657921], 0.0) * 0.25);
        }
        else if ( *(float *)&dword_140404A6C[v3 + 280657931] < 0.016666668 )
        {
          v124 = fmaxf(*(float *)&dword_140404A6C[v3 + 280651456], 0.0);
          v150 = 0.0;
          v125 = v124;
          v126 = v124 * *(float *)&dword_140404A6C[v3 + 280657935];
          v127 = v125 * *(float *)&dword_140404A6C[v3 + 280657933];
          v151 = v126;
          v149 = v127;
          if ( v129 == dword_140404A6C[v3 + 280658004] )
          {
            v106 = (float)(v126 * 6.0) + v123;
            v104 = (float)(v127 * 6.0) + v104;
          }
          else
          {
            v105 = (float)(v120 * 0.25) + v105;
            v104 = (float)(v104 - (float)(v127 * 3.0)) + (float)(v122 * 0.25);
            v106 = (float)(v123 - (float)(v126 * 3.0)) + (float)(v121 * 0.25);
          }
        }
        break;
    }
    v136 = 0;
    v137 = 0;
    v144 = 0;
    v143[2] = v106 - v103;
    v113 = *v140;
    v143[0] = v104 - v101;
    v143[1] = v105 - v102;
    v145 = 0.0;
    v114 = (3 - (v89 != 0)) | 0x10;
    v142[0] = (float)(v113 * 0.22089323) + 0.073631078;
    v142[1] = v142[0];
    if ( v113 >= 1.0 )
      v114 = 3 - (v89 != 0);
    v142[2] = (float)(v113 * 0.22089323) + 0.073631078;
    if ( !v89 )
    {
      v115 = *(float *)&dword_140404A6C[v3 + 280651456] >= 0.875;
      v144 = 0x3D8000003D800000LL;
      v145 = 0.0625;
      if ( !v115 )
      {
        v144 = 0x3C0000003C000000LL;
        v145 = 0.0078125;
      }
      v136 = 0x3E8000003E800000LL;
      v137 = 1048576000;
    }
    v116 = dword_140404A6C[v3 + 280651333];
    if ( v116 > 0 )
    {
      *(float *)&v144 = 0.125 - (float)(fminf((float)v116 * 0.033333335, 1.0) * 0.09375);
      *((float *)&v144 + 1) = *(float *)&v144;
      v145 = *(float *)&v144;
    }
    v117 = v141;
    sub_1400B1450(
      v2,
      0,
      v82,
      v143,
      (float *)(0x140000000LL + v3 * 4 + 1126819164),
      v141,
      1.0,
      0,
      &v146,
      v142,
      (unsigned int *)&v136,
      (unsigned int *)&v144,
      0.78539819,
      v114);
    ++v129;
    v139 += 75;
    v82 += 3;
    ++v140;
    v81 += 3;
    v83 += 234;
    v80 += 55;
    v141 = v117 + 3;
  }
  while ( v82 < 16 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v128 ^ v170[3]);
}

