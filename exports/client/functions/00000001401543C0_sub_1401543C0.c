/* Address: 0x1401543c0 | Name: sub_1401543C0 | Size: 3296 bytes */
_BOOL8 __fastcall sub_1401543C0(float *a1, float *a2, float *a3, float *a4, float a5, int *a6, int a7, float a8)
{
  int *v8; // r12
  float v9; // xmm1_4
  float *v10; // r13
  float v13; // xmm11_4
  int v15; // edx
  signed int v17; // r15d
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm10_4
  float v22; // xmm12_4
  float v23; // xmm7_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v26; // xmm5_4
  float v27; // xmm14_4
  __int64 v28; // rcx
  __int64 v29; // rax
  float v30; // xmm15_4
  float v31; // xmm0_4
  float v32; // xmm13_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  __int64 v35; // rcx
  __int64 v36; // rax
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm5_4
  float v40; // xmm2_4
  float v41; // xmm2_4
  float v42; // xmm4_4
  float v43; // xmm5_4
  float v44; // xmm1_4
  float v45; // xmm4_4
  float v46; // xmm5_4
  float v47; // xmm10_4
  float v48; // xmm3_4
  float v49; // xmm3_4
  float v50; // xmm4_4
  float v51; // xmm5_4
  float v52; // xmm1_4
  float v53; // xmm8_4
  float v54; // xmm11_4
  float v55; // xmm7_4
  float v56; // xmm12_4
  float v57; // xmm3_4
  float v58; // xmm5_4
  float v59; // xmm1_4
  float v60; // xmm0_4
  float v61; // xmm9_4
  float v62; // xmm10_4
  float v63; // xmm4_4
  float v64; // xmm2_4
  float v65; // xmm9_4
  float v66; // xmm10_4
  float v67; // xmm4_4
  float v68; // xmm8_4
  float v69; // xmm12_4
  float v70; // xmm13_4
  float v71; // xmm1_4
  float v72; // xmm2_4
  float v73; // xmm11_4
  float v74; // xmm0_4
  float v75; // xmm8_4
  float v76; // xmm4_4
  float v77; // xmm11_4
  float v78; // xmm12_4
  float v79; // xmm13_4
  float v80; // xmm9_4
  float v81; // xmm1_4
  float v82; // xmm0_4
  float v83; // xmm4_4
  float v84; // xmm11_4
  float v85; // xmm9_4
  float v86; // xmm4_4
  float v87; // xmm12_4
  float v88; // xmm10_4
  float v89; // xmm13_4
  float v90; // xmm1_4
  float v91; // xmm2_4
  float v92; // xmm10_4
  float v93; // xmm0_4
  float v94; // xmm11_4
  float v95; // xmm12_4
  float v96; // xmm13_4
  float v97; // xmm0_4
  float v98; // xmm9_4
  float v99; // xmm2_4
  float v100; // xmm1_4
  float v101; // xmm4_4
  float v102; // xmm11_4
  float v103; // xmm9_4
  float v104; // xmm4_4
  float v105; // xmm12_4
  float v106; // xmm10_4
  float v107; // xmm13_4
  float v108; // xmm1_4
  float v109; // xmm2_4
  float v110; // xmm10_4
  float v111; // xmm0_4
  float v112; // xmm14_4
  float v113; // xmm15_4
  float v114; // xmm12_4
  float v115; // xmm11_4
  float v116; // xmm1_4
  float v117; // xmm2_4
  float v118; // xmm0_4
  float v119; // xmm4_4
  bool v120; // cf
  float v121; // xmm9_4
  float v122; // xmm10_4
  float v123; // xmm4_4
  float v124; // xmm5_4
  float v125; // xmm7_4
  float v126; // xmm3_4
  float v127; // xmm1_4
  float v128; // xmm3_4
  float v129; // xmm2_4
  float v130; // xmm5_4
  float v132; // [rsp+48h] [rbp-C0h]
  float v133; // [rsp+50h] [rbp-B8h]
  float v134; // [rsp+54h] [rbp-B4h]
  float v135; // [rsp+58h] [rbp-B0h]
  float v136; // [rsp+5Ch] [rbp-ACh]
  float v137; // [rsp+60h] [rbp-A8h]
  float v138; // [rsp+64h] [rbp-A4h]
  float v139; // [rsp+68h] [rbp-A0h]
  float v140; // [rsp+6Ch] [rbp-9Ch]
  float v141; // [rsp+70h] [rbp-98h]
  float v142; // [rsp+78h] [rbp-90h] BYREF
  float v143; // [rsp+7Ch] [rbp-8Ch]
  float v144; // [rsp+80h] [rbp-88h]
  float v145; // [rsp+88h] [rbp-80h] BYREF
  float v146; // [rsp+8Ch] [rbp-7Ch]
  float v147; // [rsp+90h] [rbp-78h]
  float v148; // [rsp+98h] [rbp-70h] BYREF
  float v149; // [rsp+9Ch] [rbp-6Ch]
  float v150; // [rsp+A0h] [rbp-68h]
  float v151; // [rsp+A8h] [rbp-60h]
  float v152; // [rsp+ACh] [rbp-5Ch]
  float v153[4]; // [rsp+B0h] [rbp-58h] BYREF
  float v154[4]; // [rsp+C0h] [rbp-48h] BYREF
  float v155[4]; // [rsp+D0h] [rbp-38h] BYREF
  float v156[4]; // [rsp+E0h] [rbp-28h] BYREF
  float v157[4]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v158; // [rsp+100h] [rbp-8h] BYREF
  float v159; // [rsp+1E8h] [rbp+E0h]
  float v160; // [rsp+200h] [rbp+F8h]

  v8 = dword_1402B3664;
  v9 = a8;
  v10 = (float *)dword_1402B3558;
  v13 = a5;
  v15 = a7;
  v17 = 0;
  *a3 = 65536.0;
  v18 = (float)*a6;
  v19 = (float)a6[1];
  v20 = (float)a6[2];
  v160 = v18;
  v159 = v19;
  v132 = v20;
  do
  {
    if ( ((((64 << v17) & v15) != 0) & _bittest(&v15, v17)) == 0 )
      goto LABEL_63;
    v21 = *a4;
    v22 = a4[1];
    v23 = *(v10 - 2);
    v24 = *(v10 - 1);
    v25 = *v10;
    v26 = a4[2];
    v27 = (float)(v18 + *(float *)&dword_1402B34F0[3 * *(v8 - 1)]) * v9;
    v28 = 3LL * *v8;
    v29 = v8[1];
    v30 = (float)(v19 + *(float *)&dword_1402B34F0[3 * *(v8 - 1) + 1]) * v9;
    v31 = v18 + *(float *)&dword_1402B34F0[3 * *v8];
    v32 = (float)(v20 + *(float *)&dword_1402B34F0[3 * *(v8 - 1) + 2]) * v9;
    v154[0] = v27;
    v154[1] = v30;
    v152 = v32;
    v154[2] = v32;
    v135 = v31 * v9;
    v156[0] = v31 * v9;
    v33 = v19 + *(float *)&dword_1402B34F0[v28 + 1];
    v155[0] = v23;
    v155[1] = v24;
    v155[2] = v25;
    v136 = v33 * v9;
    v156[1] = v33 * v9;
    v34 = v20 + *(float *)&dword_1402B34F0[v28 + 2];
    v35 = 3 * v29;
    v36 = v8[2];
    v133 = v34 * v9;
    v156[2] = v34 * v9;
    v137 = (float)(v18 + *(float *)&dword_1402B34F0[v35]) * v9;
    v153[0] = v137;
    v138 = (float)(v19 + *(float *)&dword_1402B34F0[v35 + 1]) * v9;
    v153[1] = v138;
    v134 = (float)(v20 + *(float *)&dword_1402B34F0[v35 + 2]) * v9;
    v153[2] = v134;
    v139 = (float)(v18 + *(float *)&dword_1402B34F0[3 * v36]) * v9;
    v157[0] = v139;
    v37 = v19 + *(float *)&dword_1402B34F0[3 * v36 + 1];
    v142 = v21 - v27;
    v140 = v37 * v9;
    v157[1] = v37 * v9;
    v38 = v20 + *(float *)&dword_1402B34F0[3 * v36 + 2];
    v143 = v22 - v30;
    v141 = v38 * v9;
    v157[2] = v38 * v9;
    v39 = v26 - v32;
    v144 = v39;
    v40 = (float)((float)((float)(v21 - v27) * v23) + (float)((float)(v22 - v30) * v24)) + (float)(v39 * v25);
    if ( v40 > 0.0 )
    {
      v145 = v21 - v27;
      v146 = v22 - v30;
      v147 = v39;
      if ( v40 <= v13 )
      {
        v41 = (float)((float)-v13 * v25) + a4[2];
        v145 = (float)((float)-v13 * v23) + v21;
        v146 = (float)((float)-v13 * v24) + v22;
        v147 = v41;
        if ( sub_140077FA0(&v142, v155, (float *)&v158, a4, &v145, v154, v156, v153) )
        {
          v42 = v143;
          v43 = v144;
          v44 = fsqrt(
                  (float)((float)((float)(v143 - a4[1]) * (float)(v143 - a4[1]))
                        + (float)((float)(v142 - *a4) * (float)(v142 - *a4)))
                + (float)((float)(v144 - a4[2]) * (float)(v144 - a4[2])));
          if ( v44 < *a3 )
          {
            *a1 = v142;
            a1[1] = v42;
            a1[2] = v43;
            *a2 = v23;
            a2[1] = v24;
            a2[2] = v25;
            *a3 = v44;
          }
        }
      }
      v45 = *a4;
      v46 = a4[1];
      v47 = a4[2];
      v48 = v23 * (float)(*a4 - v27);
      v148 = *a4 - v27;
      v150 = v47 - v32;
      v149 = v46 - v30;
      v49 = (float)(v48 + (float)(v24 * (float)(v46 - v30))) + (float)((float)(v47 - v32) * v25);
      if ( v49 <= v13 && v49 >= 0.0 )
      {
        v148 = (float)(v23 * (float)-v13) + v45;
        v149 = (float)(v24 * (float)-v13) + v46;
        v150 = (float)(v25 * (float)-v13) + v47;
        if ( sub_140077FA0(&v142, v155, (float *)&v158 + 1, a4, &v148, v154, v153, v157) )
        {
          v50 = v143;
          v51 = v144;
          v52 = fsqrt(
                  (float)((float)((float)(v143 - a4[1]) * (float)(v143 - a4[1]))
                        + (float)((float)(v142 - *a4) * (float)(v142 - *a4)))
                + (float)((float)(v144 - a4[2]) * (float)(v144 - a4[2])));
          if ( v52 < *a3 )
          {
            *a1 = v142;
            a1[1] = v50;
            a1[2] = v51;
            *a2 = v23;
            a2[1] = v24;
            a2[2] = v25;
            *a3 = v52;
          }
        }
      }
      v53 = v135 - v27;
      v54 = v136 - v30;
      v55 = a4[1];
      v56 = v133 - v32;
      v57 = a4[2];
      v58 = *a4;
      v59 = *a4 - v27;
      v60 = fsqrt((float)((float)(v54 * v54) + (float)(v53 * v53)) + (float)(v56 * v56));
      v151 = v55 - v30;
      if ( v60 == 0.0 )
      {
        v61 = 0.0;
        v62 = 0.0;
        v63 = 0.0;
      }
      else
      {
        v61 = (float)(1.0 / v60) * v53;
        v62 = (float)(1.0 / v60) * v54;
        v63 = (float)(1.0 / v60) * v56;
      }
      v64 = (float)((float)(v62 * v151) + (float)(v61 * v59)) + (float)(v63 * (float)(v57 - v32));
      if ( v64 <= 0.0
        || v64 >= v60
        || (v65 = (float)(v61 * v64) + v27,
            v66 = (float)(v62 * v64) + v30,
            v67 = (float)(v63 * v64) + v32,
            v68 = v58 - v65,
            v69 = v55 - v66,
            v70 = v57 - v67,
            v71 = fsqrt((float)((float)(v69 * v69) + (float)(v68 * v68)) + (float)(v70 * v70)),
            v71 >= a5) )
      {
        v75 = *a3;
      }
      else
      {
        if ( v71 == 0.0 )
        {
          v72 = 0.0;
          v73 = 0.0;
          v74 = 0.0;
        }
        else
        {
          v72 = (float)(1.0 / v71) * v68;
          v73 = (float)(1.0 / v71) * v69;
          v74 = (float)(1.0 / v71) * v70;
        }
        v75 = *a3;
        if ( *a3 > v71 )
        {
          *a1 = v65;
          v75 = v71;
          a1[1] = v66;
          a1[2] = v67;
          *a2 = v72;
          a2[1] = v73;
          a2[2] = v74;
          *a3 = v71;
          v58 = *a4;
          v55 = a4[1];
          v57 = a4[2];
        }
      }
      v76 = v137 - v135;
      v77 = v138 - v136;
      v78 = v134 - v133;
      v79 = fsqrt((float)((float)(v77 * v77) + (float)(v76 * v76)) + (float)(v78 * v78));
      if ( v79 == 0.0 )
      {
        v80 = 0.0;
        v81 = 0.0;
        v82 = 0.0;
      }
      else
      {
        v80 = (float)(1.0 / v79) * v76;
        v81 = (float)(1.0 / v79) * v77;
        v82 = (float)(1.0 / v79) * v78;
      }
      v83 = (float)((float)(v80 * (float)(v58 - v135)) + (float)((float)(v55 - v136) * v81))
          + (float)((float)(v57 - v133) * v82);
      if ( v83 <= 0.0
        || v83 >= v79
        || (v84 = (float)(v83 * v81) + v136,
            v85 = (float)(v80 * v83) + v135,
            v86 = (float)(v83 * v82) + v133,
            v87 = v55 - v84,
            v88 = v58 - v85,
            v89 = v57 - v86,
            v90 = fsqrt((float)((float)(v87 * v87) + (float)(v88 * v88)) + (float)(v89 * v89)),
            v90 >= a5) )
      {
        v75 = *a3;
      }
      else
      {
        if ( v90 == 0.0 )
        {
          v91 = 0.0;
          v92 = 0.0;
          v93 = 0.0;
        }
        else
        {
          v91 = (float)(1.0 / v90) * v88;
          v92 = (float)(1.0 / v90) * v87;
          v93 = (float)(1.0 / v90) * v89;
        }
        if ( v75 > v90 )
        {
          *a1 = v85;
          v75 = v90;
          a1[1] = v84;
          a1[2] = v86;
          *a2 = v91;
          a2[1] = v92;
          a2[2] = v93;
          *a3 = v90;
          v58 = *a4;
          v55 = a4[1];
          v57 = a4[2];
        }
      }
      v94 = v139 - v137;
      v95 = v140 - v138;
      v96 = v141 - v134;
      v97 = fsqrt((float)((float)(v95 * v95) + (float)(v94 * v94)) + (float)(v96 * v96));
      if ( v97 == 0.0 )
      {
        v98 = 0.0;
        v99 = 0.0;
        v100 = 0.0;
      }
      else
      {
        v98 = (float)(1.0 / v97) * v94;
        v99 = (float)(1.0 / v97) * v95;
        v100 = (float)(1.0 / v97) * v96;
      }
      v101 = (float)((float)((float)(v55 - v138) * v99) + (float)(v98 * (float)(v58 - v137)))
           + (float)((float)(v57 - v134) * v100);
      if ( v101 <= 0.0
        || v101 >= v97
        || (v102 = (float)(v101 * v99) + v138,
            v103 = (float)(v98 * v101) + v137,
            v104 = (float)(v101 * v100) + v134,
            v105 = v55 - v102,
            v106 = v58 - v103,
            v107 = v57 - v104,
            v108 = fsqrt((float)((float)(v105 * v105) + (float)(v106 * v106)) + (float)(v107 * v107)),
            v108 >= a5) )
      {
        v75 = *a3;
      }
      else
      {
        if ( v108 == 0.0 )
        {
          v109 = 0.0;
          v110 = 0.0;
          v111 = 0.0;
        }
        else
        {
          v109 = (float)(1.0 / v108) * v106;
          v110 = (float)(1.0 / v108) * v105;
          v111 = (float)(1.0 / v108) * v107;
        }
        if ( v75 > v108 )
        {
          *a1 = v103;
          v75 = v108;
          a1[1] = v102;
          a1[2] = v104;
          *a2 = v109;
          a2[1] = v110;
          a2[2] = v111;
          *a3 = v108;
          v58 = *a4;
          v55 = a4[1];
          v57 = a4[2];
        }
      }
      v112 = v27 - v139;
      v113 = v30 - v140;
      v114 = v152 - v141;
      v115 = fsqrt((float)((float)(v113 * v113) + (float)(v112 * v112)) + (float)(v114 * v114));
      if ( v115 == 0.0 )
      {
        v116 = 0.0;
        v117 = 0.0;
        v118 = 0.0;
      }
      else
      {
        v116 = (float)(1.0 / v115) * v112;
        v117 = (float)(1.0 / v115) * v113;
        v118 = (float)(1.0 / v115) * v114;
      }
      v119 = (float)((float)((float)(v55 - v140) * v117) + (float)((float)(v58 - v139) * v116))
           + (float)((float)(v57 - v141) * v118);
      if ( v119 <= 0.0 )
      {
        v13 = a5;
      }
      else
      {
        v120 = v119 < v115;
        v13 = a5;
        if ( v120 )
        {
          v121 = (float)(v119 * v116) + v139;
          v122 = (float)(v119 * v117) + v140;
          v123 = (float)(v119 * v118) + v141;
          v124 = v58 - v121;
          v125 = v55 - v122;
          v126 = v57 - v123;
          v127 = fsqrt((float)((float)(v125 * v125) + (float)(v124 * v124)) + (float)(v126 * v126));
          if ( v127 < a5 )
          {
            if ( v127 == 0.0 )
            {
              v129 = 0.0;
              v130 = 0.0;
              v128 = 0.0;
            }
            else
            {
              v128 = v126 * (float)(1.0 / v127);
              v129 = (float)(1.0 / v127) * v124;
              v130 = (float)(1.0 / v127) * v125;
            }
            v15 = a7;
            if ( v75 > v127 )
            {
              *a1 = v121;
              a1[1] = v122;
              a1[2] = v123;
              *a2 = v129;
              a2[1] = v130;
              a2[2] = v128;
              *a3 = v127;
            }
            goto LABEL_62;
          }
        }
      }
      v15 = a7;
    }
LABEL_62:
    v20 = v132;
    v19 = v159;
    v18 = v160;
    v9 = a8;
LABEL_63:
    ++v17;
    v8 += 4;
    v10 += 3;
  }
  while ( v17 < 6 );
  return *a3 < 65536.0;
}

