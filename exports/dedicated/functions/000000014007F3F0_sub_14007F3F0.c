/* Address: 0x14007f3f0 | Name: sub_14007F3F0 | Size: 3117 bytes */
__int64 __fastcall sub_14007F3F0(float *a1, float *a2, float *a3, int a4, float *a5, float *a6)
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
  int v24; // r13d
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
  int v108; // xmm1_4
  float v109; // [rsp+40h] [rbp-C0h]
  float v110; // [rsp+40h] [rbp-C0h]
  float v111; // [rsp+44h] [rbp-BCh]
  float v112; // [rsp+44h] [rbp-BCh]
  float v113; // [rsp+48h] [rbp-B8h]
  float v114; // [rsp+48h] [rbp-B8h]
  float v115; // [rsp+4Ch] [rbp-B4h]
  float v116; // [rsp+4Ch] [rbp-B4h]
  float v117; // [rsp+50h] [rbp-B0h]
  float v118; // [rsp+50h] [rbp-B0h]
  float v119; // [rsp+54h] [rbp-ACh]
  float v120; // [rsp+54h] [rbp-ACh]
  float v121; // [rsp+58h] [rbp-A8h]
  float v122; // [rsp+58h] [rbp-A8h]
  float v123; // [rsp+5Ch] [rbp-A4h]
  float v124; // [rsp+5Ch] [rbp-A4h]
  float v125; // [rsp+60h] [rbp-A0h]
  float v126; // [rsp+60h] [rbp-A0h]
  float v127; // [rsp+64h] [rbp-9Ch]
  float v128; // [rsp+68h] [rbp-98h]
  float v129; // [rsp+6Ch] [rbp-94h]
  float v130; // [rsp+70h] [rbp-90h] BYREF
  float v131; // [rsp+74h] [rbp-8Ch]
  float v132; // [rsp+78h] [rbp-88h]
  int v133; // [rsp+80h] [rbp-80h] BYREF
  int v134; // [rsp+84h] [rbp-7Ch]
  int v135; // [rsp+88h] [rbp-78h]
  float v136; // [rsp+90h] [rbp-70h] BYREF
  float v137; // [rsp+94h] [rbp-6Ch]
  float v138; // [rsp+98h] [rbp-68h]
  float v139[4]; // [rsp+A0h] [rbp-60h] BYREF
  float v140[4]; // [rsp+B0h] [rbp-50h] BYREF
  float v141[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v142; // [rsp+D0h] [rbp-30h]
  __int64 v143; // [rsp+D8h] [rbp-28h]
  float v144; // [rsp+1C8h] [rbp+C8h] BYREF

  v6 = a6;
  v9 = a5;
  v11 = 84LL * a4;
  v12 = *a5;
  v13 = *(int *)((char *)&unk_1407A68A4 + v11);
  v14 = *(float *)((char *)&unk_1407A68A8 + v11);
  v15 = 9240 * v13;
  v142 = 9240 * v13;
  v16 = *((float *)&unk_140585B60 + 2310 * v13);
  if ( v12 < (float)(v14 - v16) && (float)(v14 - v16) > *a6 )
    return 0;
  v17 = a5[1];
  v18 = *(float *)((char *)&unk_1407A68AC + v11) - v16;
  if ( v17 < v18 && v18 > a6[1] )
    return 0;
  v19 = a5[2];
  v20 = *(float *)((char *)&unk_1407A68B0 + v11) - v16;
  if ( v19 < v20 && v20 > a6[2] )
    return 0;
  v21 = v14 + v16;
  if ( v12 > v21 && v21 < *a6 )
    return 0;
  v22 = *(float *)((char *)&unk_1407A68AC + v11) + v16;
  if ( v17 > v22 && v22 < a6[1] )
    return 0;
  v23 = *(float *)((char *)&unk_1407A68B0 + v11) + v16;
  if ( v19 > v23 && v23 < a6[2] )
    return 0;
  v24 = 0;
  *a3 = 1.0;
  if ( *(int *)((char *)&unk_140586768 + v15) <= 0 )
    return 0;
  v25 = v138;
  v26 = 770 * v13;
  v128 = v137;
  v127 = v136;
  v27 = (int *)((char *)&unk_140586774 + v15);
  v143 = 770 * v13;
  do
  {
    v28 = *(float *)((char *)&unk_1407A68CC + v11);
    v29 = *(float *)((char *)&unk_1407A68C0 + v11);
    v30 = *(float *)&dword_140585B68[3 * v26 + 3 * *(v27 - 1)];
    v31 = *(float *)&dword_140585B6C[3 * v26 + 3 * *(v27 - 1)];
    v32 = dword_140585B70[3 * v26 + 3 * *(v27 - 1)];
    v33 = v26 + v27[1];
    v34 = (float)((float)(v28 * v31) + (float)(v29 * v30)) + (float)(*(float *)((char *)&unk_1407A68D8 + v11) * v32);
    v35 = (float)(*(float *)((char *)&unk_1407A68D0 + v11) * v31)
        + (float)(*(float *)((char *)&unk_1407A68C4 + v11) * v30);
    v36 = *(float *)((char *)&unk_1407A68C8 + v11) * v30;
    v37 = dword_140585B70[3 * v26 + 3 * *v27];
    v38 = v35 + (float)(*(float *)((char *)&unk_1407A68DC + v11) * v32);
    v39 = (float)(*(float *)((char *)&unk_1407A68D4 + v11) * v31) + v36;
    v40 = *(float *)&dword_140585B6C[3 * v26 + 3 * *v27];
    v41 = v40 * *(float *)((char *)&unk_1407A68D4 + v11);
    v42 = v39 + (float)(*(float *)((char *)&unk_1407A68E0 + v11) * v32);
    v43 = *(float *)&dword_140585B6C[3 * v33];
    v44 = (float)(*(float *)&dword_140585B68[3 * v26 + 3 * *v27] * v29) + (float)(v40 * v28);
    v45 = *(float *)&dword_140585B68[3 * v26 + 3 * *v27];
    v125 = v38;
    v123 = v42;
    v46 = *(float *)&dword_140585B68[3 * v33];
    v47 = (float)((float)(*(float *)&dword_140585B6C[3 * v26 + 3 * *v27] * *(float *)((char *)&unk_1407A68D0 + v11))
                + (float)(v45 * *(float *)((char *)&unk_1407A68C4 + v11)))
        + (float)(v37 * *(float *)((char *)&unk_1407A68DC + v11));
    v48 = (float)(v41 + (float)(v45 * *(float *)((char *)&unk_1407A68C8 + v11)))
        + (float)(v37 * *(float *)((char *)&unk_1407A68E0 + v11));
    v113 = v44 + (float)(v37 * *(float *)((char *)&unk_1407A68D8 + v11));
    v49 = dword_140585B70[3 * v33];
    v121 = v47;
    v119 = v48;
    v50 = (float)((float)(v46 * v29) + (float)(v43 * v28)) + (float)(v49 * *(float *)((char *)&unk_1407A68D8 + v11));
    v117 = v50;
    v51 = (float)((float)(v43 * *(float *)((char *)&unk_1407A68D0 + v11))
                + (float)(v46 * *(float *)((char *)&unk_1407A68C4 + v11)))
        + (float)(v49 * *(float *)((char *)&unk_1407A68DC + v11));
    v52 = (float)((float)(v43 * *(float *)((char *)&unk_1407A68D4 + v11))
                + (float)(v46 * *(float *)((char *)&unk_1407A68C8 + v11)))
        + (float)(v49 * *(float *)((char *)&unk_1407A68E0 + v11));
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
    v63 = *(float *)((char *)&unk_1407A68B0 + v11);
    v64 = *(float *)((char *)&unk_1407A68A8 + v11);
    v65 = *(float *)((char *)&unk_1407A68AC + v11) + v125;
    v66 = *(float *)((char *)&unk_1407A68AC + v11) + v121;
    v67 = *(float *)((char *)&unk_1407A68AC + v11) + v51;
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
      v72 = dword_140585B70[3 * v71];
      v73 = *(float *)&dword_140585B68[3 * v71] * *(float *)((char *)&unk_1407A68C4 + v11);
      v74 = *(float *)&dword_140585B68[3 * v71] * *(float *)((char *)&unk_1407A68C8 + v11);
      v75 = (float)(*(float *)&dword_140585B6C[3 * v71] * *(float *)((char *)&unk_1407A68D0 + v11))
          + *(float *)((char *)&unk_1407A68AC + v11);
      v127 = (float)((float)(*(float *)&dword_140585B68[3 * v71] * *(float *)((char *)&unk_1407A68C0 + v11))
                   + (float)(*(float *)&dword_140585B6C[3 * v71] * *(float *)((char *)&unk_1407A68CC + v11)))
           + (float)((float)(v72 * *(float *)((char *)&unk_1407A68D8 + v11)) + v64);
      v76 = (float)(*(float *)&dword_140585B6C[3 * v71] * *(float *)((char *)&unk_1407A68D4 + v11))
          + *(float *)((char *)&unk_1407A68B0 + v11);
      v136 = v127;
      v77 = (float)((float)(v72 * *(float *)((char *)&unk_1407A68DC + v11)) + v73) + v75;
      v25 = (float)((float)(v72 * *(float *)((char *)&unk_1407A68E0 + v11)) + v74) + v76;
      v128 = v77;
      v137 = v77;
      v138 = v25;
    }
    if ( sub_140048690((float *)&v133, &v130, &v144, v9, v6, v140, v141, v139) )
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
          dword_16E18CACC = -1;
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
          dword_16E18CACC = (int)(float)((float)((float)((float)((float)(v120 * v110) + (float)(v122 * v118))
                                                       + (float)(v124 * v83))
                                               * 8.0)
                                       / v112);
          dword_16E18CAD0 = (int)(float)((float)((float)((float)((float)(v88 * v120) + (float)(v122 * v114))
                                                       + (float)(v89 * v124))
                                               * 4.0)
                                       / v115);
        }
      }
    }
    if ( *(v27 - 2) == 4 && sub_140048690((float *)&v133, &v130, &v144, a5, v6, v140, v139, &v136) )
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
          dword_16E18CACC = -1;
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
          dword_16E18CACC = (int)(float)((float)((float)((float)((float)(v97 * v100) + (float)(v129 * v101))
                                                       + (float)(v116 * v102))
                                               * 8.0)
                                       / v99);
          dword_16E18CAD0 = (int)(float)((float)((float)((float)((float)(v105 * v129) + (float)(v97 * v104))
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
  while ( v24 < *(_DWORD *)((char *)&unk_140586768 + v142) );
  if ( *a3 >= 1.0 )
    return 0;
  v108 = *(_DWORD *)((char *)&unk_1407A68B8 + v11);
  LODWORD(qword_16E18CA60) = *(_DWORD *)((char *)&unk_1407A68B4 + v11);
  dword_16E18CA68 = *(_DWORD *)((char *)&unk_1407A68BC + v11);
  HIDWORD(qword_16E18CA60) = v108;
  return 1;
}

