/* Address: 0x1400dc680 | Name: sub_1400DC680 | Size: 5997 bytes */
__int64 __fastcall sub_1400DC680(__int64 a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  __int16 v7; // r11
  int v10; // r12d
  int v11; // r9d
  int v12; // ecx
  __int64 i; // r8
  int v14; // edx
  __int64 v15; // r10
  int v16; // ecx
  int v17; // edx
  float *v18; // r8
  __int64 v19; // rdx
  float v20; // xmm2_4
  __int64 v21; // rcx
  unsigned int v22; // eax
  float v23; // xmm1_4
  float v24; // xmm0_4
  __m128i v25; // xmm1
  unsigned int v26; // eax
  __int64 v27; // rcx
  float v28; // xmm0_4
  __m128i v29; // xmm1
  unsigned int v30; // eax
  float v31; // xmm0_4
  __m128i v32; // xmm1
  unsigned int v33; // eax
  __int64 v34; // rcx
  float v35; // xmm0_4
  __m128i v36; // xmm1
  unsigned int v37; // eax
  float v38; // xmm0_4
  __m128i v39; // xmm1
  unsigned int v40; // eax
  __int64 v41; // rcx
  float v42; // xmm0_4
  __m128i v43; // xmm1
  unsigned int v44; // eax
  float v45; // xmm0_4
  __m128i v46; // xmm1
  unsigned int v47; // eax
  __int64 v48; // rcx
  float v49; // xmm0_4
  __m128i v50; // xmm1
  int v51; // eax
  float v52; // xmm0_4
  unsigned int v53; // eax
  __int64 v54; // rcx
  float v55; // xmm0_4
  __m128i v56; // xmm1
  unsigned int v57; // eax
  float v58; // xmm0_4
  __m128i v59; // xmm1
  unsigned int v60; // eax
  __int64 v61; // rcx
  float v62; // xmm0_4
  __m128i v63; // xmm1
  unsigned int v64; // eax
  float v65; // xmm0_4
  __m128i v66; // xmm1
  int v67; // eax
  char v68; // al
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  int v73; // ecx
  __int64 v74; // rdi
  __int64 v75; // rsi
  int v76; // r8d
  __int64 v77; // rdi
  int k; // r13d
  __int64 v79; // rdx
  int v80; // r12d
  int v81; // r10d
  int v82; // r8d
  int v83; // r10d
  int v84; // r11d
  int v85; // r13d
  int v86; // r9d
  int v87; // ecx
  __int64 v88; // rcx
  float v89; // xmm5_4
  __m128i v90; // xmm3
  unsigned int v91; // eax
  int v92; // ecx
  float v93; // xmm3_4
  __m128i v94; // xmm4
  float v95; // xmm4_4
  __int64 v96; // rcx
  int v97; // eax
  float v98; // xmm4_4
  float v99; // xmm0_4
  int v100; // eax
  float v101; // xmm5_4
  float v102; // xmm3_4
  __m128i v103; // xmm4
  int v104; // eax
  float v105; // xmm4_4
  __int64 v106; // rcx
  int v107; // eax
  float v108; // xmm3_4
  float v109; // xmm4_4
  int v110; // eax
  float v111; // xmm5_4
  float v112; // xmm3_4
  float v113; // xmm4_4
  int v114; // r12d
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // eax
  __int64 v119; // rcx
  __int64 v120; // rax
  float v121; // xmm2_4
  float v122; // xmm0_4
  float v123; // xmm1_4
  float v124; // xmm2_4
  float v125; // xmm1_4
  float v126; // xmm2_4
  float v127; // xmm1_4
  float v128; // xmm2_4
  float v129; // xmm1_4
  float v130; // xmm2_4
  float v131; // xmm1_4
  float v132; // xmm2_4
  float v133; // xmm0_4
  float v134; // xmm2_4
  float v135; // xmm1_4
  float v136; // xmm0_4
  float v137; // xmm2_4
  float v138; // xmm0_4
  float v139; // xmm1_4
  float v140; // xmm1_4
  float v141; // xmm2_4
  float v142; // xmm0_4
  int v143; // eax
  int j; // r13d
  __int64 v145; // rdx
  int v146; // r12d
  int v147; // r10d
  int v148; // r8d
  int v149; // r10d
  int v150; // r11d
  int v151; // r13d
  int v152; // r9d
  int v153; // ecx
  __int64 v154; // rcx
  float v155; // xmm5_4
  __m128i v156; // xmm3
  unsigned int v157; // eax
  int v158; // ecx
  float v159; // xmm3_4
  __m128i v160; // xmm4
  float v161; // xmm4_4
  __int64 v162; // rcx
  int v163; // eax
  float v164; // xmm4_4
  float v165; // xmm0_4
  int v166; // eax
  float v167; // xmm5_4
  float v168; // xmm3_4
  __m128i v169; // xmm4
  int v170; // eax
  float v171; // xmm4_4
  __int64 v172; // rcx
  int v173; // eax
  float v174; // xmm3_4
  float v175; // xmm4_4
  int v176; // eax
  float v177; // xmm5_4
  float v178; // xmm3_4
  float v179; // xmm4_4
  int v180; // r12d
  int v181; // eax
  __int64 v182; // r14
  int v183; // edi
  unsigned __int64 v184; // rsi
  __int64 v185; // rcx
  __int64 v186; // rcx
  __int64 v187; // rcx
  __int64 v188; // rcx
  char v190[8]; // [rsp+50h] [rbp-B0h] BYREF
  int v191; // [rsp+58h] [rbp-A8h]
  int v192; // [rsp+5Ch] [rbp-A4h] BYREF
  int v193; // [rsp+60h] [rbp-A0h] BYREF
  int v194; // [rsp+64h] [rbp-9Ch]
  int v195; // [rsp+68h] [rbp-98h]
  int v196; // [rsp+6Ch] [rbp-94h]
  int v197; // [rsp+70h] [rbp-90h]
  int v198; // [rsp+74h] [rbp-8Ch]
  int v199; // [rsp+78h] [rbp-88h]
  int v200; // [rsp+7Ch] [rbp-84h]
  __int64 v201; // [rsp+80h] [rbp-80h]
  _DWORD v202[64]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v203[64]; // [rsp+190h] [rbp+90h] BYREF
  _DWORD v204[64]; // [rsp+290h] [rbp+190h] BYREF
  _DWORD v205[512]; // [rsp+390h] [rbp+290h] BYREF
  _DWORD v206[8]; // [rsp+B90h] [rbp+A90h] BYREF
  char v207; // [rsp+BB0h] [rbp+AB0h] BYREF
  char v208; // [rsp+D90h] [rbp+C90h] BYREF
  char v209; // [rsp+DB0h] [rbp+CB0h] BYREF
  int v210; // [rsp+F90h] [rbp+E90h] BYREF
  char v211; // [rsp+F94h] [rbp+E94h]
  char v212; // [rsp+F95h] [rbp+E95h]
  char v213; // [rsp+F96h] [rbp+E96h]
  char v214; // [rsp+F97h] [rbp+E97h]
  char v215; // [rsp+F98h] [rbp+E98h]
  __int16 v216; // [rsp+F99h] [rbp+E99h]
  char v217; // [rsp+F9Bh] [rbp+E9Bh]
  int v218; // [rsp+F9Ch] [rbp+E9Ch]
  int v219; // [rsp+FA0h] [rbp+EA0h]
  int v220; // [rsp+FA4h] [rbp+EA4h]
  _BYTE v221[64]; // [rsp+FB0h] [rbp+EB0h] BYREF
  _BYTE v222[64]; // [rsp+FF0h] [rbp+EF0h] BYREF

  v191 = a3;
  v7 = a3;
  v201 = a1;
  if ( !a5 || !a2 || !a3 || (unsigned int)(a4 - 1) > 3 )
    return 0;
  v10 = 90;
  if ( a6 )
    v10 = a6;
  if ( v10 >= 1 )
  {
    v12 = v10;
    if ( v10 > 100 )
      v12 = 100;
    if ( v12 >= 50 )
      v11 = 2 * (100 - v12);
    else
      v11 = 5000 / v12;
  }
  else
  {
    v11 = 5000;
  }
  for ( i = 0; i < 64; ++i )
  {
    v14 = (v11 * dword_1400F4940[i] + 50) / 100;
    if ( v14 >= 1 )
    {
      if ( v14 > 255 )
        LOBYTE(v14) = -1;
    }
    else
    {
      LOBYTE(v14) = 1;
    }
    v15 = byte_1400F36F0[i];
    v16 = v11 * dword_1400F4A40[i];
    v221[v15] = v14;
    v17 = (v16 + 50) / 100;
    if ( v17 >= 1 )
    {
      if ( v17 > 255 )
        LOBYTE(v17) = -1;
    }
    else
    {
      LOBYTE(v17) = 1;
    }
    v222[v15] = v17;
  }
  v18 = (float *)&unk_1400F3858;
  v19 = 0;
  do
  {
    v20 = *v18;
    v21 = byte_1400F36F0[v19 + 1];
    v22 = (unsigned __int8)v221[v21];
    v23 = (float)(unsigned __int8)v222[byte_1400F36F0[v19]];
    *(float *)&v203[v19] = 0.35355338 / (float)((float)(unsigned __int8)v221[byte_1400F36F0[v19]] * *v18);
    v24 = 0.35355338 / (float)(v23 * v20);
    v25 = _mm_cvtsi32_si128(v22);
    v26 = (unsigned __int8)v222[v21];
    v27 = byte_1400F36F0[v19 + 2];
    *(float *)&v204[v19] = v24;
    v28 = 0.25489777 / (float)(_mm_cvtepi32_ps(v25).m128_f32[0] * v20);
    v29 = _mm_cvtsi32_si128(v26);
    v30 = (unsigned __int8)v221[v27];
    *(float *)&v203[v19 + 1] = v28;
    v31 = 0.25489777 / (float)(_mm_cvtepi32_ps(v29).m128_f32[0] * v20);
    v32 = _mm_cvtsi32_si128(v30);
    v33 = (unsigned __int8)v222[v27];
    v34 = byte_1400F36F0[v19 + 3];
    *(float *)&v204[v19 + 1] = v31;
    v35 = 0.27059805 / (float)(_mm_cvtepi32_ps(v32).m128_f32[0] * v20);
    v36 = _mm_cvtsi32_si128(v33);
    v37 = (unsigned __int8)v221[v34];
    *(float *)&v203[v19 + 2] = v35;
    v38 = 0.27059805 / (float)(_mm_cvtepi32_ps(v36).m128_f32[0] * v20);
    v39 = _mm_cvtsi32_si128(v37);
    v40 = (unsigned __int8)v222[v34];
    v41 = byte_1400F36F0[v19 + 4];
    *(float *)&v204[v19 + 2] = v38;
    v42 = 0.30067247 / (float)(_mm_cvtepi32_ps(v39).m128_f32[0] * v20);
    v43 = _mm_cvtsi32_si128(v40);
    v44 = (unsigned __int8)v221[v41];
    *(float *)&v203[v19 + 3] = v42;
    v45 = 0.30067247 / (float)(_mm_cvtepi32_ps(v43).m128_f32[0] * v20);
    v46 = _mm_cvtsi32_si128(v44);
    v47 = (unsigned __int8)v222[v41];
    v48 = byte_1400F36F0[v19 + 5];
    *(float *)&v204[v19 + 3] = v45;
    v49 = 0.35355338 / (float)(_mm_cvtepi32_ps(v46).m128_f32[0] * v20);
    v50 = _mm_cvtsi32_si128(v47);
    v51 = (unsigned __int8)v221[v48];
    *(float *)&v203[v19 + 4] = v49;
    v52 = 0.35355338 / (float)(_mm_cvtepi32_ps(v50).m128_f32[0] * v20);
    *(float *)v50.m128i_i32 = (float)v51;
    *(float *)&v204[v19 + 4] = v52;
    v53 = (unsigned __int8)v222[v48];
    v54 = byte_1400F36F0[v19 + 6];
    v19 += 8;
    v55 = 0.4499881 / (float)(*(float *)v50.m128i_i32 * v20);
    ++v18;
    v56 = _mm_cvtsi32_si128(v53);
    v57 = (unsigned __int8)v221[v54];
    *(float *)&v202[v19 + 61] = v55;
    v58 = 0.4499881 / (float)(_mm_cvtepi32_ps(v56).m128_f32[0] * v20);
    v59 = _mm_cvtsi32_si128(v57);
    v60 = (unsigned __int8)v222[v54];
    v61 = (unsigned __int8)algn_1400F36E9[v19 + 6];
    *(float *)&v203[v19 + 61] = v58;
    v62 = 0.65328151 / (float)(_mm_cvtepi32_ps(v59).m128_f32[0] * v20);
    v63 = _mm_cvtsi32_si128(v60);
    v64 = (unsigned __int8)v221[v61];
    *(float *)&v202[v19 + 62] = v62;
    v65 = 0.65328151 / (float)(_mm_cvtepi32_ps(v63).m128_f32[0] * v20);
    v66 = _mm_cvtsi32_si128(v64);
    v67 = (unsigned __int8)v222[v61];
    *(float *)&v203[v19 + 62] = v65;
    *(float *)&v202[v19 + 63] = 1.2814577 / (float)(_mm_cvtepi32_ps(v66).m128_f32[0] * v20);
    *(float *)&v203[v19 + 63] = 1.2814577 / (float)((float)v67 * v20);
  }
  while ( (__int64)v18 < (__int64)flt_1400F3878 );
  v212 = HIBYTE(v7);
  v214 = BYTE1(a2);
  v68 = 17;
  if ( v10 <= 90 )
    v68 = 34;
  v69 = *(_QWORD *)(a1 + 8);
  v217 = v68;
  v210 = 285262079;
  v211 = 8;
  v213 = v7;
  v215 = a2;
  v216 = 259;
  v218 = 17891840;
  v219 = -16707325;
  v220 = 10617284;
  (*(void (__fastcall **)(__int64, void *, __int64, float *))a1)(v69, &unk_1400F4B40, 25, flt_1400F3878);
  (*(void (__fastcall **)(_QWORD, _BYTE *, __int64))a1)(*(_QWORD *)(a1 + 8), v221, 64);
  v70 = *(_QWORD *)(a1 + 8);
  v190[0] = 1;
  (*(void (__fastcall **)(__int64, char *, __int64))a1)(v70, v190, 1);
  (*(void (__fastcall **)(_QWORD, _BYTE *, __int64))a1)(*(_QWORD *)(a1 + 8), v222, 64);
  (*(void (__fastcall **)(_QWORD, int *, __int64))a1)(*(_QWORD *)(a1 + 8), &v210, 24);
  (*(void (__fastcall **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_1400F3731, 16);
  (*(void (__fastcall **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_1400F3748, 12);
  v71 = *(_QWORD *)(a1 + 8);
  v190[0] = 16;
  (*(void (__fastcall **)(__int64, char *, __int64))a1)(v71, v190, 1);
  (*(void (__fastcall **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_1400F3759, 16);
  (*(void (__fastcall **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_1400F3770, 162);
  v72 = *(_QWORD *)(a1 + 8);
  v190[0] = 1;
  (*(void (__fastcall **)(__int64, char *, __int64))a1)(v72, v190, 1);
  (*(void (__fastcall **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_1400F3819, 16);
  (*(void (__fastcall **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_1400F3830, 12);
  v190[0] = 17;
  (*(void (__fastcall **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), v190, 1);
  (*(void (__fastcall **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_1400F3841, 16);
  (*(void (__fastcall **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_1400F3880, 162);
  (*(void (__fastcall **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_1400F3928, 14);
  v73 = v191;
  v196 = 0;
  v197 = 0;
  v198 = 0;
  v74 = 0;
  v193 = 0;
  v75 = a5 + (a4 > 2);
  v192 = 0;
  if ( a4 > 2 )
    v74 = 2;
  v76 = 0;
  v77 = a5 + v74;
  v194 = 0;
  if ( v10 > 90 )
  {
    if ( v191 > 0 )
    {
      do
      {
        if ( a2 > 0 )
        {
          j = 8;
          v195 = 8;
          do
          {
            v145 = 0;
            v199 = j;
            v146 = v76;
            if ( !__OFSUB__(v76, v76 + 8) )
            {
              do
              {
                v147 = v146;
                v148 = j - 8;
                if ( v146 >= v73 )
                  v147 = v73 - 1;
                if ( dword_1402495F0 )
                  v147 = v73 - v147 - 1;
                v149 = a2 * v147;
                if ( v148 < j )
                {
                  v150 = j - 6;
                  v151 = j - 3;
                  v152 = a2 - 1;
                  do
                  {
                    v153 = v148;
                    if ( v148 >= a2 )
                    {
                      v152 = a2 - 1;
                      v153 = a2 - 1;
                    }
                    v154 = a4 * (v149 + v153);
                    v155 = (float)*(unsigned __int8 *)(v154 + a5);
                    v156 = _mm_cvtsi32_si128(*(unsigned __int8 *)(v154 + v75));
                    v157 = *(unsigned __int8 *)(v154 + v77);
                    v158 = v152;
                    v159 = _mm_cvtepi32_ps(v156).m128_f32[0];
                    v160 = _mm_cvtsi32_si128(v157);
                    if ( v150 - 1 < a2 )
                      v158 = v150 - 1;
                    v161 = _mm_cvtepi32_ps(v160).m128_f32[0];
                    v162 = a4 * (v158 + v149);
                    v163 = *(unsigned __int8 *)(v162 + a5);
                    *(float *)&v206[v145] = (float)((float)((float)(v159 * 0.58700001) + (float)(v155 * 0.29899999))
                                                  + (float)(v161 * 0.114))
                                          - 128.0;
                    *(float *)&v202[v145] = (float)(v161 * 0.5)
                                          - (float)((float)(v155 * 0.16874) + (float)(v159 * 0.33126));
                    *(float *)&v205[v145] = (float)((float)(v155 * 0.5) - (float)(v159 * 0.41869))
                                          - (float)(v161 * 0.081309997);
                    v164 = (float)*(unsigned __int8 *)(v162 + v77);
                    v165 = (float)*(unsigned __int8 *)(v162 + v75);
                    *(float *)&v206[v145 + 1] = (float)((float)((float)(v165 * 0.58700001)
                                                              + (float)((float)v163 * 0.29899999))
                                                      + (float)(v164 * 0.114))
                                              - 128.0;
                    *(float *)&v202[v145 + 1] = (float)(v164 * 0.5)
                                              - (float)((float)((float)v163 * 0.16874) + (float)(v165 * 0.33126));
                    *(float *)&v205[v145 + 1] = (float)((float)((float)v163 * 0.5) - (float)(v165 * 0.41869))
                                              - (float)(v164 * 0.081309997);
                    if ( v150 >= a2 )
                    {
                      v166 = v152;
                    }
                    else
                    {
                      v166 = v150;
                      v152 = a2 - 1;
                    }
                    v167 = (float)*(unsigned __int8 *)(a4 * (v149 + v166) + a5);
                    v168 = (float)*(unsigned __int8 *)(a4 * (v149 + v166) + v75);
                    v169 = _mm_cvtsi32_si128(*(unsigned __int8 *)(a4 * (v149 + v166) + v77));
                    v170 = v150 + 1;
                    if ( v150 + 1 >= a2 )
                      v170 = v152;
                    v148 += 4;
                    v171 = _mm_cvtepi32_ps(v169).m128_f32[0];
                    v150 += 4;
                    v172 = a4 * (v149 + v170);
                    v173 = *(unsigned __int8 *)(v172 + a5);
                    *(float *)&v206[v145 + 2] = (float)((float)((float)(v168 * 0.58700001) + (float)(v167 * 0.29899999))
                                                      + (float)(v171 * 0.114))
                                              - 128.0;
                    *(float *)&v202[v145 + 2] = (float)(v171 * 0.5)
                                              - (float)((float)(v167 * 0.16874) + (float)(v168 * 0.33126));
                    *(float *)&v205[v145 + 2] = (float)((float)(v167 * 0.5) - (float)(v168 * 0.41869))
                                              - (float)(v171 * 0.081309997);
                    v174 = (float)*(unsigned __int8 *)(v172 + v75);
                    v175 = (float)*(unsigned __int8 *)(v172 + v77);
                    *(float *)&v206[v145 + 3] = (float)((float)((float)(v174 * 0.58700001)
                                                              + (float)((float)v173 * 0.29899999))
                                                      + (float)(v175 * 0.114))
                                              - 128.0;
                    *(float *)&v202[v145 + 3] = (float)(v175 * 0.5)
                                              - (float)((float)((float)v173 * 0.16874) + (float)(v174 * 0.33126));
                    *(float *)&v205[v145 + 3] = (float)((float)((float)v173 * 0.5) - (float)(v174 * 0.41869))
                                              - (float)(v175 * 0.081309997);
                    v145 += 4;
                  }
                  while ( v148 < v151 );
                  for ( j = v195; v148 < j; ++v145 )
                  {
                    v176 = v148;
                    if ( v148 >= a2 )
                      v176 = v152;
                    ++v148;
                    v177 = (float)*(unsigned __int8 *)(a4 * (v149 + v176) + a5);
                    v178 = (float)*(unsigned __int8 *)(a4 * (v149 + v176) + v75);
                    v179 = (float)*(unsigned __int8 *)(a4 * (v149 + v176) + v77);
                    *(float *)&v206[v145] = (float)((float)((float)(v178 * 0.58700001) + (float)(v177 * 0.29899999))
                                                  + (float)(v179 * 0.114))
                                          - 128.0;
                    *(float *)&v202[v145] = (float)(v179 * 0.5)
                                          - (float)((float)(v177 * 0.16874) + (float)(v178 * 0.33126));
                    *(float *)&v205[v145] = (float)((float)(v177 * 0.5) - (float)(v178 * 0.41869))
                                          - (float)(v179 * 0.081309997);
                  }
                  v73 = v191;
                }
                ++v146;
              }
              while ( v146 < v194 + 8 );
            }
            v180 = v201;
            v196 = sub_1400E05E0(
                     v201,
                     (unsigned int)&v193,
                     (unsigned int)&v192,
                     (unsigned int)v206,
                     8,
                     (__int64)v203,
                     v196,
                     (__int64)&unk_1400F3940,
                     (__int64)&unk_1400F4140);
            v197 = sub_1400E05E0(
                     v180,
                     (unsigned int)&v193,
                     (unsigned int)&v192,
                     (unsigned int)v202,
                     8,
                     (__int64)v204,
                     v197,
                     (__int64)&unk_1400F3D40,
                     (__int64)&unk_1400F4540);
            v181 = sub_1400E05E0(
                     v180,
                     (unsigned int)&v193,
                     (unsigned int)&v192,
                     (unsigned int)v205,
                     8,
                     (__int64)v204,
                     v198,
                     (__int64)&unk_1400F3D40,
                     (__int64)&unk_1400F4540);
            v73 = v191;
            j += 8;
            v76 = v194;
            v198 = v181;
            v195 = j;
          }
          while ( v199 < a2 );
        }
        v76 += 8;
        v194 = v76;
      }
      while ( v76 < v73 );
    }
  }
  else if ( v191 > 0 )
  {
    do
    {
      if ( a2 > 0 )
      {
        k = 16;
        v195 = 16;
        do
        {
          v79 = 0;
          v200 = k;
          v80 = v76;
          if ( !__OFSUB__(v76, v76 + 16) )
          {
            do
            {
              v81 = v80;
              v82 = k - 16;
              if ( v80 >= v73 )
                v81 = v73 - 1;
              if ( dword_1402495F0 )
                v81 = v73 - v81 - 1;
              v83 = a2 * v81;
              if ( v82 < k )
              {
                v84 = k - 14;
                v85 = k - 3;
                v86 = a2 - 1;
                do
                {
                  v87 = v82;
                  if ( v82 >= a2 )
                  {
                    v86 = a2 - 1;
                    v87 = a2 - 1;
                  }
                  v88 = a4 * (v83 + v87);
                  v89 = (float)*(unsigned __int8 *)(v88 + a5);
                  v90 = _mm_cvtsi32_si128(*(unsigned __int8 *)(v88 + v75));
                  v91 = *(unsigned __int8 *)(v88 + v77);
                  v92 = v86;
                  v93 = _mm_cvtepi32_ps(v90).m128_f32[0];
                  v94 = _mm_cvtsi32_si128(v91);
                  if ( v84 - 1 < a2 )
                    v92 = v84 - 1;
                  v95 = _mm_cvtepi32_ps(v94).m128_f32[0];
                  v96 = a4 * (v83 + v92);
                  v97 = *(unsigned __int8 *)(v96 + a5);
                  *(float *)&v206[v79] = (float)((float)((float)(v89 * 0.29899999) + (float)(v93 * 0.58700001))
                                               + (float)(v95 * 0.114))
                                       - 128.0;
                  *(float *)&v205[v79] = (float)(v95 * 0.5) - (float)((float)(v89 * 0.16874) + (float)(v93 * 0.33126));
                  *(float *)&v205[v79 + 256] = (float)((float)(v89 * 0.5) - (float)(v93 * 0.41869))
                                             - (float)(v95 * 0.081309997);
                  v98 = (float)*(unsigned __int8 *)(v96 + v77);
                  v99 = (float)*(unsigned __int8 *)(v96 + v75);
                  *(float *)&v206[v79 + 1] = (float)((float)((float)((float)v97 * 0.29899999) + (float)(v99 * 0.58700001))
                                                   + (float)(v98 * 0.114))
                                           - 128.0;
                  *(float *)&v205[v79 + 1] = (float)(v98 * 0.5)
                                           - (float)((float)((float)v97 * 0.16874) + (float)(v99 * 0.33126));
                  *(float *)&v205[v79 + 257] = (float)((float)((float)v97 * 0.5) - (float)(v99 * 0.41869))
                                             - (float)(v98 * 0.081309997);
                  if ( v84 >= a2 )
                  {
                    v100 = v86;
                  }
                  else
                  {
                    v100 = v84;
                    v86 = a2 - 1;
                  }
                  v101 = (float)*(unsigned __int8 *)(a4 * (v83 + v100) + a5);
                  v102 = (float)*(unsigned __int8 *)(a4 * (v83 + v100) + v75);
                  v103 = _mm_cvtsi32_si128(*(unsigned __int8 *)(a4 * (v83 + v100) + v77));
                  v104 = v84 + 1;
                  if ( v84 + 1 >= a2 )
                    v104 = v86;
                  v82 += 4;
                  v105 = _mm_cvtepi32_ps(v103).m128_f32[0];
                  v84 += 4;
                  v106 = a4 * (v83 + v104);
                  v107 = *(unsigned __int8 *)(v106 + a5);
                  *(float *)&v206[v79 + 2] = (float)((float)((float)(v101 * 0.29899999) + (float)(v102 * 0.58700001))
                                                   + (float)(v105 * 0.114))
                                           - 128.0;
                  *(float *)&v205[v79 + 2] = (float)(v105 * 0.5)
                                           - (float)((float)(v101 * 0.16874) + (float)(v102 * 0.33126));
                  *(float *)&v205[v79 + 258] = (float)((float)(v101 * 0.5) - (float)(v102 * 0.41869))
                                             - (float)(v105 * 0.081309997);
                  v108 = (float)*(unsigned __int8 *)(v106 + v75);
                  v109 = (float)*(unsigned __int8 *)(v106 + v77);
                  *(float *)&v206[v79 + 3] = (float)((float)((float)((float)v107 * 0.29899999)
                                                           + (float)(v108 * 0.58700001))
                                                   + (float)(v109 * 0.114))
                                           - 128.0;
                  *(float *)&v205[v79 + 3] = (float)(v109 * 0.5)
                                           - (float)((float)((float)v107 * 0.16874) + (float)(v108 * 0.33126));
                  *(float *)&v205[v79 + 259] = (float)((float)((float)v107 * 0.5) - (float)(v108 * 0.41869))
                                             - (float)(v109 * 0.081309997);
                  v79 += 4;
                }
                while ( v82 < v85 );
                for ( k = v195; v82 < k; ++v79 )
                {
                  v110 = v82;
                  if ( v82 >= a2 )
                    v110 = v86;
                  ++v82;
                  v111 = (float)*(unsigned __int8 *)(a4 * (v83 + v110) + a5);
                  v112 = (float)*(unsigned __int8 *)(a4 * (v83 + v110) + v75);
                  v113 = (float)*(unsigned __int8 *)(a4 * (v83 + v110) + v77);
                  *(float *)&v206[v79] = (float)((float)((float)(v111 * 0.29899999) + (float)(v112 * 0.58700001))
                                               + (float)(v113 * 0.114))
                                       - 128.0;
                  *(float *)&v205[v79] = (float)(v113 * 0.5)
                                       - (float)((float)(v111 * 0.16874) + (float)(v112 * 0.33126));
                  *(float *)&v205[v79 + 256] = (float)((float)(v111 * 0.5) - (float)(v112 * 0.41869))
                                             - (float)(v113 * 0.081309997);
                }
                v73 = v191;
              }
              ++v80;
            }
            while ( v80 < v194 + 16 );
          }
          v114 = v201;
          v115 = sub_1400E05E0(
                   v201,
                   (unsigned int)&v193,
                   (unsigned int)&v192,
                   (unsigned int)v206,
                   16,
                   (__int64)v203,
                   v196,
                   (__int64)&unk_1400F3940,
                   (__int64)&unk_1400F4140);
          v116 = sub_1400E05E0(
                   v114,
                   (unsigned int)&v193,
                   (unsigned int)&v192,
                   (unsigned int)&v207,
                   16,
                   (__int64)v203,
                   v115,
                   (__int64)&unk_1400F3940,
                   (__int64)&unk_1400F4140);
          v117 = sub_1400E05E0(
                   v114,
                   (unsigned int)&v193,
                   (unsigned int)&v192,
                   (unsigned int)&v208,
                   16,
                   (__int64)v203,
                   v116,
                   (__int64)&unk_1400F3940,
                   (__int64)&unk_1400F4140);
          v118 = sub_1400E05E0(
                   v114,
                   (unsigned int)&v193,
                   (unsigned int)&v192,
                   (unsigned int)&v209,
                   16,
                   (__int64)v203,
                   v117,
                   (__int64)&unk_1400F3940,
                   (__int64)&unk_1400F4140);
          v119 = 0;
          v196 = v118;
          v120 = 0;
          do
          {
            v121 = (float)(*(float *)&v205[v120 + 273] + *(float *)&v205[v120 + 272])
                 + (float)(*(float *)&v205[v120 + 257] + *(float *)&v205[v120 + 256]);
            v122 = *(float *)&v205[v120 + 3] + *(float *)&v205[v120 + 2];
            *(float *)&v202[v119] = (float)((float)(*(float *)&v205[v120 + 17] + *(float *)&v205[v120 + 16])
                                          + (float)(*(float *)&v205[v120 + 1] + *(float *)&v205[v120]))
                                  * 0.25;
            v123 = (float)(*(float *)&v205[v120 + 19] + *(float *)&v205[v120 + 18]) + v122;
            *(float *)&v206[v119] = v121 * 0.25;
            v124 = (float)(*(float *)&v205[v120 + 275] + *(float *)&v205[v120 + 274])
                 + (float)(*(float *)&v205[v120 + 259] + *(float *)&v205[v120 + 258]);
            *(float *)&v202[v119 + 1] = v123 * 0.25;
            v125 = (float)(*(float *)&v205[v120 + 21] + *(float *)&v205[v120 + 20])
                 + (float)(*(float *)&v205[v120 + 4] + *(float *)&v205[v120 + 5]);
            *(float *)&v206[v119 + 1] = v124 * 0.25;
            v126 = (float)(*(float *)&v205[v120 + 277] + *(float *)&v205[v120 + 276])
                 + (float)(*(float *)&v205[v120 + 260] + *(float *)&v205[v120 + 261]);
            *(float *)&v202[v119 + 2] = v125 * 0.25;
            v127 = (float)(*(float *)&v205[v120 + 23] + *(float *)&v205[v120 + 22])
                 + (float)(*(float *)&v205[v120 + 6] + *(float *)&v205[v120 + 7]);
            *(float *)&v206[v119 + 2] = v126 * 0.25;
            v128 = (float)(*(float *)&v205[v120 + 279] + *(float *)&v205[v120 + 278])
                 + (float)(*(float *)&v205[v120 + 262] + *(float *)&v205[v120 + 263]);
            *(float *)&v202[v119 + 3] = v127 * 0.25;
            v129 = (float)(*(float *)&v205[v120 + 25] + *(float *)&v205[v120 + 24])
                 + (float)(*(float *)&v205[v120 + 8] + *(float *)&v205[v120 + 9]);
            *(float *)&v206[v119 + 3] = v128 * 0.25;
            v130 = (float)(*(float *)&v205[v120 + 281] + *(float *)&v205[v120 + 280])
                 + (float)(*(float *)&v205[v120 + 264] + *(float *)&v205[v120 + 265]);
            *(float *)&v202[v119 + 4] = v129 * 0.25;
            v131 = (float)(*(float *)&v205[v120 + 27] + *(float *)&v205[v120 + 26])
                 + (float)(*(float *)&v205[v120 + 10] + *(float *)&v205[v120 + 11]);
            *(float *)&v206[v119 + 4] = v130 * 0.25;
            v132 = *(float *)&v205[v120 + 283] + *(float *)&v205[v120 + 282];
            v133 = *(float *)&v205[v120 + 266] + *(float *)&v205[v120 + 267];
            *(float *)&v202[v119 + 5] = v131 * 0.25;
            v134 = v132 + v133;
            v135 = (float)(*(float *)&v205[v120 + 29] + *(float *)&v205[v120 + 28])
                 + (float)(*(float *)&v205[v120 + 12] + *(float *)&v205[v120 + 13]);
            v136 = *(float *)&v205[v120 + 268] + *(float *)&v205[v120 + 269];
            *(float *)&v206[v119 + 5] = v134 * 0.25;
            v137 = (float)(*(float *)&v205[v120 + 285] + *(float *)&v205[v120 + 284]) + v136;
            *(float *)&v202[v119 + 6] = v135 * 0.25;
            v138 = *(float *)&v205[v120 + 14] + *(float *)&v205[v120 + 15];
            v139 = *(float *)&v205[v120 + 31] + *(float *)&v205[v120 + 30];
            *(float *)&v206[v119 + 6] = v137 * 0.25;
            v140 = v139 + v138;
            v141 = *(float *)&v205[v120 + 287] + *(float *)&v205[v120 + 286];
            v142 = *(float *)&v205[v120 + 270] + *(float *)&v205[v120 + 271];
            v120 += 32;
            *(float *)&v202[v119 + 7] = v140 * 0.25;
            *(float *)&v206[v119 + 7] = (float)(v141 + v142) * 0.25;
            v119 += 8;
          }
          while ( v120 < 256 );
          v197 = sub_1400E05E0(
                   v114,
                   (unsigned int)&v193,
                   (unsigned int)&v192,
                   (unsigned int)v202,
                   8,
                   (__int64)v204,
                   v197,
                   (__int64)&unk_1400F3D40,
                   (__int64)&unk_1400F4540);
          v143 = sub_1400E05E0(
                   v114,
                   (unsigned int)&v193,
                   (unsigned int)&v192,
                   (unsigned int)v206,
                   8,
                   (__int64)v204,
                   v198,
                   (__int64)&unk_1400F3D40,
                   (__int64)&unk_1400F4540);
          v73 = v191;
          k += 16;
          v76 = v194;
          v198 = v143;
          v195 = k;
        }
        while ( v200 < a2 );
      }
      v76 += 16;
      v194 = v76;
    }
    while ( v76 < v73 );
  }
  v182 = v201;
  v183 = v193 | (127 << (24 - (v192 + 7)));
  if ( v192 + 7 >= 8 )
  {
    v184 = (unsigned __int64)(unsigned int)(v192 + 7) >> 3;
    do
    {
      v185 = *(_QWORD *)(v182 + 8);
      v190[0] = BYTE2(v183);
      (*(void (__fastcall **)(__int64, char *, __int64))v182)(v185, v190, 1);
      if ( BYTE2(v183) == 0xFF )
      {
        v186 = *(_QWORD *)(v182 + 8);
        v190[0] = 0;
        (*(void (__fastcall **)(__int64, char *, __int64))v182)(v186, v190, 1);
      }
      v183 <<= 8;
      --v184;
    }
    while ( v184 );
  }
  v187 = *(_QWORD *)(v182 + 8);
  v190[0] = -1;
  (*(void (__fastcall **)(__int64, char *, __int64))v182)(v187, v190, 1);
  v188 = *(_QWORD *)(v182 + 8);
  v190[0] = -39;
  (*(void (__fastcall **)(__int64, char *, __int64))v182)(v188, v190, 1);
  return 1;
}

