/* Address: 0x140080020 | Name: sub_140080020 | Size: 2898 bytes */
__int64 __fastcall sub_140080020(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
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
  int v26; // r12d
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
  float v115; // [rsp+40h] [rbp-C0h]
  float v116; // [rsp+40h] [rbp-C0h]
  float v117; // [rsp+44h] [rbp-BCh]
  float v118; // [rsp+44h] [rbp-BCh]
  float v119; // [rsp+48h] [rbp-B8h]
  float v120; // [rsp+48h] [rbp-B8h]
  float v121; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v122; // [rsp+50h] [rbp-B0h]
  float v123; // [rsp+58h] [rbp-A8h]
  float v124; // [rsp+5Ch] [rbp-A4h]
  float v125; // [rsp+60h] [rbp-A0h]
  float v126; // [rsp+64h] [rbp-9Ch]
  float v127; // [rsp+68h] [rbp-98h]
  float v128; // [rsp+70h] [rbp-90h] BYREF
  float v129; // [rsp+74h] [rbp-8Ch]
  float v130; // [rsp+78h] [rbp-88h]
  int v131; // [rsp+80h] [rbp-80h] BYREF
  int v132; // [rsp+84h] [rbp-7Ch]
  int v133; // [rsp+88h] [rbp-78h]
  __int64 v134; // [rsp+90h] [rbp-70h] BYREF
  float v135; // [rsp+98h] [rbp-68h]
  float v136[4]; // [rsp+A0h] [rbp-60h] BYREF
  float v137[4]; // [rsp+B0h] [rbp-50h] BYREF
  float v138[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v139; // [rsp+D0h] [rbp-30h]
  __int64 v140; // [rsp+D8h] [rbp-28h]
  float v141; // [rsp+1C8h] [rbp+C8h]
  float v142; // [rsp+1C8h] [rbp+C8h]
  float v143; // [rsp+1C8h] [rbp+C8h]
  float v144; // [rsp+1D0h] [rbp+D0h]
  float v145; // [rsp+1D0h] [rbp+D0h]

  v11 = a7;
  v13 = *a5;
  v14 = *a5;
  v15 = *a7;
  v16 = 9240LL * a4;
  v139 = v16;
  v17 = *(float *)((char *)&unk_140585B60 + v16);
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
  if ( *(int *)((char *)&unk_140585B60 + v16 + 3080) <= 0 )
    return 0;
  v27 = 770LL * a4;
  v123 = v135;
  v28 = (int *)((char *)&unk_140586774 + v16);
  v140 = v27;
  v122 = v134;
  do
  {
    v29 = *a6;
    v30 = a6[6];
    v31 = *((float *)&unk_140585B60 + 3 * v27 + 3 * *(v28 - 1) + 2);
    v32 = *((float *)&unk_140585B60 + 3 * v27 + 3 * *(v28 - 1) + 3);
    v33 = *((float *)&unk_140585B60 + 3 * v27 + 3 * *(v28 - 1) + 4);
    v34 = a6[4];
    v35 = a6[5];
    v36 = a6[3];
    v37 = 3 * (v27 + *v28);
    v38 = v34 * v32;
    v39 = v27 + v28[1];
    v40 = (float)(v36 * v32) + (float)(*a6 * v31);
    v41 = v35 * v32;
    v42 = *((float *)&unk_140585B60 + 3 * v27 + 3 * *v28 + 3);
    v43 = a6[1] * v31;
    v44 = v40 + (float)(v30 * v33);
    v125 = a6[1];
    v45 = a6[7] * v33;
    v46 = v38 + v43;
    v127 = a6[2];
    v47 = v127 * v31;
    v48 = *((float *)&unk_140585B60 + v37 + 2);
    v49 = v46 + v45;
    v50 = a6[8] * v33;
    v51 = *((float *)&unk_140585B60 + v37 + 4);
    v52 = (float)(v41 + v47) + v50;
    v124 = v29;
    v53 = (float)((float)(v36 * v42) + (float)(v29 * v48)) + (float)(v30 * v51);
    v54 = v35 * v42;
    v55 = (float)(v34 * v42) + (float)(v125 * v48);
    v56 = *((float *)&unk_140585B60 + 3 * v39 + 3);
    v57 = a6[2] * v48;
    v58 = *((float *)&unk_140585B60 + 3 * v39 + 2);
    v59 = v55 + (float)(a6[7] * v51);
    v60 = a6[8] * v51;
    v61 = *((float *)&unk_140585B60 + 3 * v39 + 4);
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
      v82 = *((float *)&unk_140585B60 + 3 * v81 + 4);
      v83 = *((float *)&unk_140585B60 + 3 * v81 + 2);
      v84 = *((float *)&unk_140585B60 + 3 * v81 + 3);
      *(float *)&v122 = (float)((float)(a6[3] * v84) + (float)(v124 * v83)) + (float)((float)(v144 * v82) + v71);
      LODWORD(v134) = v122;
      *((float *)&v122 + 1) = (float)((float)(a6[7] * v82) + (float)(v125 * v83)) + (float)((float)(v126 * v84) + v72);
      HIDWORD(v134) = HIDWORD(v122);
      v123 = (float)((float)(a6[8] * v82) + (float)(v127 * v83)) + (float)((float)(v115 * v84) + a5[2]);
      v135 = v123;
    }
    if ( sub_140048690((float *)&v131, &v128, &v121, v11, a8, v137, v138, v136) )
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
          dword_16E18CACC = -1;
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
          dword_16E18CACC = (int)(float)((float)((float)((float)((float)(v89 * v126) + (float)(v90 * v120))
                                                       + (float)(v91 * v125))
                                               * 8.0)
                                       / v124);
          dword_16E18CAD0 = (int)(float)((float)((float)((float)((float)(v94 * v120) + (float)(v126 * v143))
                                                       + (float)(v95 * v125))
                                               * 4.0)
                                       / v116);
        }
      }
    }
    if ( *(v28 - 2) == 4 && sub_140048690((float *)&v131, &v128, &v121, a7, a8, v137, v136, (float *)&v134) )
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
          dword_16E18CACC = -1;
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
          dword_16E18CACC = (int)(float)((float)((float)((float)((float)(v107 * v102) + (float)(v108 * v104))
                                                       + (float)(v105 * v109))
                                               * 8.0)
                                       / v106);
          dword_16E18CAD0 = (int)(float)((float)((float)((float)((float)(v112 * v104) + (float)(v102 * v111))
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
  while ( v26 < *(_DWORD *)((char *)&unk_140585B60 + v139 + 3080) );
  if ( *a3 >= 1.0 )
    return 0;
  qword_16E18CA60 = 0;
  dword_16E18CA68 = 0;
  return 1;
}

