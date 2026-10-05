/* Address: 0x1400278b0 | Name: sub_1400278B0 | Size: 2996 bytes */
_BOOL8 __fastcall sub_1400278B0(int a1, float *a2, float *a3, float a4)
{
  float *v4; // rdi
  __int64 v5; // r8
  float *v7; // r14
  __int64 v8; // rax
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  __int64 v16; // r15
  int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // r11
  __int64 v20; // rdx
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm11_4
  float v25; // xmm12_4
  float v26; // xmm13_4
  float v27; // xmm14_4
  float v28; // xmm15_4
  signed __int64 v29; // rsi
  signed __int64 v30; // r14
  signed __int64 v31; // rdi
  unsigned __int64 v32; // r9
  signed __int64 v33; // rdx
  signed __int64 v34; // r10
  signed __int64 v35; // rbx
  signed __int64 v36; // r12
  signed __int64 v37; // r13
  float *v38; // rax
  signed __int64 v39; // r15
  __int64 v40; // r9
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
  float v66; // xmm2_4
  float v67; // xmm3_4
  float v68; // xmm4_4
  float v69; // xmm3_4
  float v70; // xmm0_4
  float v71; // xmm5_4
  float v72; // xmm3_4
  float v73; // xmm1_4
  float v74; // xmm6_4
  float v75; // xmm2_4
  signed __int64 v76; // rcx
  float v77; // xmm1_4
  float v78; // xmm0_4
  signed __int64 v79; // rcx
  float v80; // xmm1_4
  float v81; // xmm7_4
  float v82; // xmm8_4
  float v83; // xmm9_4
  float v84; // xmm11_4
  float v85; // xmm12_4
  float v86; // xmm13_4
  float v87; // xmm14_4
  float v88; // xmm15_4
  float *v89; // rax
  __int64 v90; // rdx
  float v91; // xmm4_4
  float v92; // xmm5_4
  float v93; // xmm6_4
  float v94; // xmm1_4
  float v95; // xmm0_4
  float v96; // xmm3_4
  float v97; // xmm1_4
  int *v98; // rbx
  float v99; // xmm11_4
  float v100; // xmm12_4
  float v101; // xmm13_4
  __int64 v102; // rcx
  float v103; // xmm1_4
  float v104; // xmm3_4
  __int64 v105; // rax
  float v106; // xmm1_4
  float v107; // xmm3_4
  float v108; // xmm9_4
  float v109; // xmm7_4
  float v110; // xmm8_4
  float v111; // xmm9_4
  float v112; // xmm7_4
  float v113; // xmm4_4
  float v114; // xmm5_4
  float v115; // xmm6_4
  float v116; // xmm0_4
  __int64 v117; // rax
  float v118; // xmm3_4
  float v119; // xmm4_4
  float v120; // xmm3_4
  float v121; // xmm4_4
  float v122; // xmm5_4
  float v123; // xmm3_4
  float v124; // xmm4_4
  float v125; // xmm1_4
  __int64 v126; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v127; // [rsp+60h] [rbp-A8h]
  __int64 v128; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v129; // [rsp+70h] [rbp-98h]
  _BYTE v130[12]; // [rsp+78h] [rbp-90h] BYREF
  signed __int64 v131; // [rsp+88h] [rbp-80h] BYREF
  float *v132; // [rsp+90h] [rbp-78h] BYREF
  float v133; // [rsp+98h] [rbp-70h]
  __int64 v134; // [rsp+A0h] [rbp-68h] BYREF
  float v135; // [rsp+A8h] [rbp-60h]
  signed __int64 v136; // [rsp+B0h] [rbp-58h]
  signed __int64 v137; // [rsp+B8h] [rbp-50h]
  signed __int64 v138; // [rsp+C0h] [rbp-48h]
  signed __int64 v139; // [rsp+C8h] [rbp-40h]
  signed __int64 v140; // [rsp+D0h] [rbp-38h]
  signed __int64 v141; // [rsp+D8h] [rbp-30h]
  signed __int64 v142; // [rsp+E0h] [rbp-28h]
  __int64 v143; // [rsp+E8h] [rbp-20h]
  int v144; // [rsp+F8h] [rbp-10h] BYREF
  int v145; // [rsp+FCh] [rbp-Ch] BYREF
  _BYTE v147[4]; // [rsp+104h] [rbp-4h] BYREF
  _BYTE v148[4]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v149[4]; // [rsp+10Ch] [rbp+4h] BYREF
  char v150; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v151[4]; // [rsp+114h] [rbp+Ch] BYREF
  _BYTE v152[4]; // [rsp+118h] [rbp+10h] BYREF
  char v153; // [rsp+11Ch] [rbp+14h] BYREF
  _BYTE v154[4]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v155[3028]; // [rsp+124h] [rbp+1Ch] BYREF

  v4 = a3;
  v132 = a3;
  v5 = 5210LL * a1;
  v7 = a2;
  *(_QWORD *)v130 = a2;
  v8 = dword_16E6A3C64[v5];
  if ( (_DWORD)v8 != 13 )
  {
    v10 = *(float *)&dword_16E6A3D10[v5];
    if ( (float)(*a2 + a4) < v10 && (float)(a4 + *v4) < v10 )
      return 0;
    v11 = *(float *)&dword_16E6A3D14[v5];
    if ( (float)(a2[1] + a4) < v11 && (float)(a4 + v4[1]) < v11 )
      return 0;
    v12 = *(float *)&dword_16E6A3D18[v5];
    if ( (float)(a2[2] + a4) < v12 && (float)(a4 + v4[2]) < v12 )
      return 0;
    v13 = *(float *)&dword_16E6A3D1C[v5];
    if ( (float)(*a2 - a4) > v13 && (float)(*v4 - a4) > v13 )
      return 0;
    v14 = *(float *)&dword_16E6A3D20[v5];
    if ( (float)(a2[1] - a4) > v14 && (float)(v4[1] - a4) > v14 )
      return 0;
    v15 = *(float *)&dword_16E6A3D24[v5];
    if ( (float)(a2[2] - a4) > v15 && (float)(v4[2] - a4) > v15 )
      return 0;
    v16 = 180288 * v8;
    v17 = 0;
    dword_16E18CA5C = 1199570944;
    v18 = v8;
    v126 = v8;
    v128 = 180288 * v8;
    v19 = 0;
    v20 = *((int *)&unk_143DAAAF4 + 45072 * v8);
    v143 = v20;
    if ( v20 < 4 )
    {
      if ( v20 <= 0 )
      {
LABEL_22:
        if ( *(int *)((char *)&unk_143DADAF8 + v16) <= 0 )
          return 0;
        v98 = (int *)((char *)&unk_143DADB08 + v16);
        do
        {
          LODWORD(v99) = *(&v144 + 3 * *(v98 - 1));
          LODWORD(v100) = *(&v145 + 3 * *(v98 - 1));
          v101 = *(float *)&v147[12 * *(v98 - 1) - 4];
          v102 = 3LL * *v98;
          v134 = __PAIR64__(LODWORD(v100), LODWORD(v99));
          v103 = *(float *)&v147[4 * v102 - 4];
          v104 = *((float *)&v144 + v102);
          v105 = v98[1];
          HIDWORD(v132) = *(&v145 + v102);
          v133 = v103;
          v106 = v103 - v101;
          *(float *)&v132 = v104;
          v107 = v104 - v99;
          v108 = *(float *)&v147[12 * v105 - 4];
          v109 = *((float *)&v144 + 3 * v105);
          HIDWORD(v128) = *(&v145 + 3 * v105);
          v110 = *((float *)&v128 + 1) - v100;
          *(float *)&v129 = v108;
          v111 = v108 - v101;
          *(float *)&v128 = v109;
          v112 = v109 - v99;
          v135 = v101;
          v113 = (float)((float)(*((float *)&v128 + 1) - v100) * v106)
               - (float)(v111 * (float)(*((float *)&v132 + 1) - v100));
          v114 = (float)(v111 * v107) - (float)(v112 * v106);
          v115 = (float)(v112 * (float)(*((float *)&v132 + 1) - v100))
               - (float)((float)(*((float *)&v128 + 1) - v100) * v107);
          v116 = fsqrt((float)((float)(v114 * v114) + (float)(v113 * v113)) + (float)(v115 * v115));
          if ( v116 == 0.0 )
          {
            v126 = 0;
            LODWORD(v127) = 0;
          }
          else
          {
            *(float *)&v126 = (float)(1.0 / v116) * v113;
            *((float *)&v126 + 1) = (float)(1.0 / v116) * v114;
            *(float *)&v127 = (float)(1.0 / v116) * v115;
          }
          if ( (unsigned int)sub_140025D20(
                               (float *)v130,
                               (float *)&v126,
                               (float *)&v131,
                               v7,
                               v4,
                               a4,
                               (float *)&v134,
                               (__int64)&v132,
                               (__int64)&v128)
            && *(float *)&dword_16E18CA5C > *(float *)&v131 )
          {
            unk_16E18CA40 = *(_DWORD *)v130;
            qword_16E18CA44 = *(_QWORD *)&v130[4];
            qword_16E18CA4C = v126;
            dword_16E18CA54 = v127;
            dword_16E18CA5C = v131;
          }
          if ( *(v98 - 2) == 4 )
          {
            v132 = (float *)v128;
            v133 = *(float *)&v129;
            v117 = v98[2];
            v118 = *(float *)&v147[12 * v117 - 4];
            v119 = *((float *)&v144 + 3 * v117);
            HIDWORD(v128) = *(&v145 + 3 * v117);
            *(float *)&v129 = v118;
            v120 = v118 - v101;
            *(float *)&v128 = v119;
            v121 = v119 - v99;
            v122 = (float)((float)(*((float *)&v128 + 1) - v100) * v111) - (float)(v120 * v110);
            v123 = (float)(v120 * v112) - (float)(v121 * v111);
            v124 = (float)(v121 * v110) - (float)((float)(*((float *)&v128 + 1) - v100) * v112);
            v125 = fsqrt((float)((float)(v123 * v123) + (float)(v122 * v122)) + (float)(v124 * v124));
            if ( v125 == 0.0 )
            {
              v126 = 0;
              LODWORD(v127) = 0;
            }
            else
            {
              *(float *)&v126 = v122 * (float)(1.0 / v125);
              *((float *)&v126 + 1) = v123 * (float)(1.0 / v125);
              *(float *)&v127 = v124 * (float)(1.0 / v125);
            }
            if ( (unsigned int)sub_140025D20(
                                 (float *)v130,
                                 (float *)&v126,
                                 (float *)&v131,
                                 v7,
                                 v4,
                                 a4,
                                 (float *)&v134,
                                 (__int64)&v132,
                                 (__int64)&v128) )
            {
              if ( *(float *)&dword_16E18CA5C > *(float *)&v131 )
              {
                unk_16E18CA40 = *(_DWORD *)v130;
                qword_16E18CA44 = *(_QWORD *)&v130[4];
                qword_16E18CA4C = v126;
                dword_16E18CA54 = v127;
                dword_16E18CA5C = v131;
              }
            }
          }
          ++v17;
          v98 += 6;
        }
        while ( v17 < *(_DWORD *)((char *)&unk_143DADAF8 + v16) );
        return *(float *)&dword_16E18CA5C < 65536.0;
      }
    }
    else
    {
      v21 = *(float *)&dword_16E6A3CA4[v5];
      v22 = *(float *)&dword_16E6A3C8C[v5];
      v23 = *(float *)&dword_16E6A3CA8[v5];
      v24 = *(float *)&dword_16E6A3C90[v5];
      v25 = *(float *)&dword_16E6A3CAC[v5];
      v26 = *(float *)&dword_16E6A3C94[v5];
      v27 = *(float *)&dword_16E6A3CB0[v5];
      v28 = *(float *)&dword_16E6A3CB4[v5];
      v131 = &v151[-v16] - (_BYTE *)&unk_143DAAAFC;
      v29 = v131;
      v138 = (char *)&v144 - v16 - (char *)&unk_143DAAAFC;
      v136 = &v152[-v16] - (_BYTE *)&unk_143DAAAFC;
      v30 = v136;
      v139 = &v147[-v16] - (_BYTE *)&unk_143DAAAFC;
      v137 = &v154[-v16] - (_BYTE *)&unk_143DAAAFC;
      v31 = v137;
      v140 = &v150 - v16 - (char *)&unk_143DAAAFC;
      v142 = &v155[-v16] - (_BYTE *)&unk_143DAAAFC;
      v32 = v20 - 4;
      v33 = v139;
      v34 = (char *)&v145 - v16 - (char *)&unk_143DAAAFC;
      v35 = &v147[-v16 - 4] - (_BYTE *)&unk_143DAAAFC;
      v36 = &v148[-v16] - (_BYTE *)&unk_143DAAAFC;
      v141 = &v153 - v16 - (char *)&unk_143DAAAFC;
      v37 = &v149[-v16] - (_BYTE *)&unk_143DAAAFC;
      v38 = (float *)((char *)&unk_143DAAAFC + v16);
      v39 = v138;
      v40 = (v32 >> 2) + 1;
      v134 = 4 * v40;
      v41 = v140;
      do
      {
        v42 = *(v38 - 1);
        v43 = v38[1];
        v44 = *(float *)&dword_16E6A3CB8[v5] * *v38;
        v45 = v38[3];
        v46 = (float)((float)((float)(v23 * v42) + v24) + (float)(v28 * *v38))
            + (float)(*(float *)&dword_16E6A3CC0[v5] * v43);
        v47 = *(float *)&dword_16E6A3CC4[v5];
        *(float *)((char *)v38 + v39) = (float)((float)((float)(v21 * v42) + v22) + (float)(v27 * *v38))
                                      + (float)(*(float *)&dword_16E6A3CBC[v5] * v43);
        v48 = v25 * v42;
        v49 = v38[2];
        v50 = v47 * v43;
        v51 = v38[4];
        *(float *)((char *)v38 + v34) = v46;
        v52 = (float)((float)(v48 + v26) + v44) + v50;
        v53 = *(float *)&dword_16E6A3CBC[v5] * v51;
        *(float *)((char *)v38 + v35) = v52;
        v54 = (float)((float)((float)(v21 * v49) + v22) + (float)(v27 * v45)) + v53;
        v55 = (float)((float)(v23 * v49) + v24) + (float)(v28 * v45);
        v56 = *(float *)&dword_16E6A3CB8[v5] * v45;
        v57 = v38[6];
        v58 = v55 + (float)(*(float *)&dword_16E6A3CC0[v5] * v51);
        v59 = *(float *)&dword_16E6A3CC4[v5];
        *(float *)((char *)v38 + v33) = v54;
        v60 = v25 * v49;
        v61 = v38[5];
        v62 = v59 * v51;
        v63 = v38[7];
        *(float *)((char *)v38 + v36) = v58;
        v64 = (float)((float)(v60 + v26) + v56) + v62;
        v65 = *(float *)&dword_16E6A3CBC[v5] * v63;
        *(float *)((char *)v38 + v37) = v64;
        *(float *)((char *)v38 + v41) = (float)((float)((float)(v21 * v61) + v22) + (float)(v27 * v57)) + v65;
        v66 = (float)(v25 * v61) + v26;
        v67 = v23 * v61;
        v68 = v38[8];
        v69 = (float)(v67 + v24) + (float)(v28 * v57);
        v70 = *(float *)&dword_16E6A3CB8[v5] * v57;
        v71 = v38[9];
        v72 = v69 + (float)(*(float *)&dword_16E6A3CC0[v5] * v63);
        v73 = *(float *)&dword_16E6A3CC4[v5] * v63;
        v74 = v38[10];
        *(float *)((char *)v38 + v29) = v72;
        v75 = (float)(v66 + v70) + v73;
        v76 = v141;
        v77 = *(float *)&dword_16E6A3CBC[v5] * v74;
        *(float *)((char *)v38 + v30) = v75;
        *(float *)((char *)v38 + v76) = (float)((float)((float)(v21 * v68) + v22) + (float)(v27 * v71)) + v77;
        v78 = *(float *)&dword_16E6A3CB8[v5] * v71;
        v79 = v142;
        v80 = *(float *)&dword_16E6A3CC4[v5] * v74;
        *(float *)((char *)v38 + v31) = (float)((float)((float)(v23 * v68) + v24) + (float)(v28 * v71))
                                      + (float)(*(float *)&dword_16E6A3CC0[v5] * v74);
        *(float *)((char *)v38 + v79) = (float)((float)((float)(v25 * v68) + v26) + v78) + v80;
        v38 += 12;
        --v40;
      }
      while ( v40 );
      v20 = v143;
      v19 = v134;
      v17 = 0;
      v4 = v132;
      v7 = *(float **)v130;
      v16 = v128;
      v18 = v126;
      if ( v134 >= v143 )
        goto LABEL_22;
    }
    v81 = *(float *)&dword_16E6A3CA4[v5];
    v82 = *(float *)&dword_16E6A3C8C[v5];
    v83 = *(float *)&dword_16E6A3CA8[v5];
    v84 = *(float *)&dword_16E6A3C90[v5];
    v85 = *(float *)&dword_16E6A3CAC[v5];
    v86 = *(float *)&dword_16E6A3C94[v5];
    v87 = *(float *)&dword_16E6A3CB0[v5];
    v88 = *(float *)&dword_16E6A3CB4[v5];
    v89 = (float *)(0x140000000LL + 12 * (v19 + 15024 * v18) + 64662268);
    v90 = v20 - v19;
    do
    {
      v91 = *(v89 - 1);
      v92 = *v89;
      v93 = v89[1];
      v94 = *(float *)&dword_16E6A3CC0[v5] * v93;
      v95 = *(float *)&dword_16E6A3CB8[v5] * *v89;
      *(float *)((char *)v89 + (char *)&v144 - v16 - (char *)&unk_143DAAAFC) = (float)((float)((float)(v81 * v91) + v82)
                                                                                     + (float)(v87 * *v89))
                                                                             + (float)(*(float *)&dword_16E6A3CBC[v5]
                                                                                     * v93);
      v96 = (float)((float)((float)(v83 * v91) + v84) + (float)(v88 * v92)) + v94;
      v97 = *(float *)&dword_16E6A3CC4[v5] * v93;
      *(float *)((char *)v89 + (char *)&v145 - v16 - (char *)&unk_143DAAAFC) = v96;
      *(float *)((char *)v89 + &v147[-v16 - 4] - (_BYTE *)&unk_143DAAAFC) = (float)((float)((float)(v85 * v91) + v86)
                                                                                  + v95)
                                                                          + v97;
      v89 += 3;
      --v90;
    }
    while ( v90 );
    goto LABEL_22;
  }
  return sub_1400264E0(a1, a2, v4, a4);
}

