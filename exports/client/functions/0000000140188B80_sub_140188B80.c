/* Address: 0x140188b80 | Name: sub_140188B80 | Size: 3692 bytes */
__int64 __fastcall sub_140188B80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // r12
  unsigned int v4; // ebx
  unsigned int v5; // r9d
  signed int v6; // ebp
  signed int v7; // r15d
  unsigned int v8; // xmm9_4
  __int64 v9; // r14
  unsigned int v10; // xmm10_4
  unsigned int *v11; // rsi
  int v12; // edx
  __int64 v13; // rdi
  unsigned int *v14; // r10
  unsigned int v15; // xmm15_4
  unsigned int v16; // xmm14_4
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // xmm12_4
  unsigned int v20; // xmm13_4
  unsigned int v21; // xmm11_4
  float v22; // xmm5_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm4_4
  float v26; // xmm8_4
  float v27; // xmm7_4
  float v28; // xmm5_4
  float v29; // xmm3_4
  unsigned int v30; // xmm8_4
  unsigned int v31; // xmm5_4
  unsigned int v32; // xmm7_4
  unsigned int v33; // xmm0_4
  unsigned int v34; // xmm1_4
  unsigned int v35; // xmm2_4
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v38; // xmm0_4
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned int v41; // eax
  unsigned int v42; // xmm0_4
  __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r8
  unsigned int v49; // r9d
  signed int v50; // r15d
  signed int v51; // ebp
  unsigned int v52; // xmm10_4
  unsigned int *v53; // r14
  unsigned int v54; // xmm11_4
  __int64 v55; // rsi
  __int64 v56; // r11
  unsigned int *v57; // r10
  unsigned int v58; // xmm14_4
  unsigned int v59; // xmm15_4
  unsigned int v60; // xmm13_4
  __int64 v61; // rax
  float v62; // xmm1_4
  float v63; // xmm8_4
  float v64; // xmm4_4
  float v65; // xmm0_4
  float v66; // xmm2_4
  float v67; // xmm5_4
  float v68; // xmm3_4
  float v69; // xmm1_4
  float v70; // xmm8_4
  float v71; // xmm9_4
  float v72; // xmm7_4
  float v73; // xmm0_4
  unsigned int v74; // xmm2_4
  unsigned int v75; // xmm3_4
  unsigned int v76; // xmm1_4
  unsigned int v77; // xmm4_4
  unsigned int v78; // xmm5_4
  __int64 v79; // rcx
  unsigned int v80; // xmm4_4
  unsigned int v81; // xmm5_4
  __int64 v82; // rcx
  unsigned int v83; // xmm0_4
  __int64 v84; // rcx
  __int64 v85; // rcx
  unsigned int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // rcx
  unsigned int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r8
  signed int v93; // esi
  signed int v94; // ebp
  unsigned int v95; // xmm9_4
  __int64 v96; // rdi
  unsigned int v97; // xmm10_4
  int v98; // edx
  __int64 v99; // r11
  unsigned int *v100; // r9
  unsigned int v101; // xmm15_4
  unsigned int v102; // xmm14_4
  __int64 v103; // rdx
  __int64 v104; // rax
  unsigned int v105; // xmm12_4
  unsigned int v106; // xmm13_4
  unsigned int v107; // xmm11_4
  float v108; // xmm5_4
  float v109; // xmm3_4
  float v110; // xmm1_4
  float v111; // xmm4_4
  float v112; // xmm8_4
  float v113; // xmm7_4
  float v114; // xmm5_4
  float v115; // xmm3_4
  unsigned int v116; // xmm1_4
  unsigned int v117; // xmm2_4
  unsigned int v118; // xmm0_4
  unsigned int v119; // xmm3_4
  unsigned int v120; // xmm4_4
  unsigned int v121; // xmm5_4
  __int64 v122; // rcx
  __int64 v123; // rcx
  unsigned int v124; // xmm3_4
  __int64 v125; // rcx
  __int64 v126; // rcx
  unsigned int v127; // eax
  unsigned int v128; // xmm3_4
  __int64 v129; // rcx
  __int64 v130; // rcx
  unsigned int v131; // eax
  __int64 v132; // rcx
  __int64 v133; // r8

  v3 = &dword_140404A6C[358300582];
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = dword_140404A6C[421506973];
  *(_QWORD *)&dword_140404A6C[349908877] = 8;
  if ( (int)dword_140404A6C[421506973] > 0 )
  {
    v8 = dword_1402B364C;
    v9 = 0;
    v10 = dword_1402B3648;
    v11 = &dword_140404A6C[358300582];
    do
    {
      if ( !*(v11 - 3081) )
      {
        a3 = (int)*v11;
        v12 = v11[4];
        if ( (int)a3 < v12 )
        {
          v13 = (unsigned int)(v12 - a3);
          v14 = &dword_140404A6C[3 * v9 + 358300589 + 3 * a3];
          do
          {
            a3 = 3 * (v9 + (int)v14[1]);
            v15 = dword_140404A6C[3 * v9 + 358297508 + 3 * (int)v14[1]];
            v16 = dword_140404A6C[3 * v9 + 358297507 + 3 * (int)v14[1]];
            v17 = 3 * (v9 + (int)*v14);
            v18 = v9 + (int)*(v14 - 1);
            v19 = dword_140404A6C[3 * v18 + 358297508];
            v20 = dword_140404A6C[3 * v18 + 358297509];
            v21 = dword_140404A6C[3 * v18 + 358297507];
            v22 = *(float *)&dword_140404A6C[3 * v9 + 358297509 + 3 * (int)v14[1]] - *(float *)&v20;
            v23 = *(float *)&dword_140404A6C[3 * v9 + 358297508 + 3 * (int)*v14] - *(float *)&v19;
            v24 = *(float *)&dword_140404A6C[3 * v9 + 358297509 + 3 * (int)*v14] - *(float *)&v20;
            v25 = *(float *)&dword_140404A6C[3 * v9 + 358297507 + 3 * (int)*v14] - *(float *)&v21;
            v26 = (float)((float)(*(float *)&v15 - *(float *)&v19) * v24) - (float)(v22 * v23);
            v27 = (float)((float)(*(float *)&v16 - *(float *)&v21) * v23)
                - (float)((float)(*(float *)&v15 - *(float *)&v19) * v25);
            v28 = (float)(v22 * v25) - (float)((float)(*(float *)&v16 - *(float *)&v21) * v24);
            v29 = fsqrt((float)((float)(v28 * v28) + (float)(v26 * v26)) + (float)(v27 * v27));
            if ( v29 == 0.0 )
            {
              *(float *)&v30 = 0.0;
              *(float *)&v31 = 0.0;
              *(float *)&v32 = 0.0;
            }
            else
            {
              *(float *)&v30 = v26 * (float)(1.0 / v29);
              *(float *)&v31 = v28 * (float)(1.0 / v29);
              *(float *)&v32 = v27 * (float)(1.0 / v29);
            }
            v33 = dword_1402B3638;
            v34 = dword_140404A6C[3 * v9 + 358297508 + 3 * (int)*v14];
            v35 = dword_140404A6C[3 * v9 + 358297509 + 3 * (int)*v14];
            v36 = (int)(v5 * dword_140404A6C[349908877]);
            dword_140404A6C[v36 + 349908879] = v21;
            dword_140404A6C[v36 + 349908880] = v19;
            dword_140404A6C[v36 + 349908881] = v20;
            v37 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v37 + 349908882] = v33;
            dword_140404A6C[v37 + 349908883] = dword_1402B363C;
            v38 = dword_140404A6C[v17 + 358297507];
            v39 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v39 + 349908884] = v30;
            dword_140404A6C[v39 + 349908885] = v31;
            dword_140404A6C[v39 + 349908886] = v32;
            v40 = ++dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v40 + 349908879] = v38;
            dword_140404A6C[v40 + 349908880] = v34;
            dword_140404A6C[v40 + 349908881] = v35;
            v41 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            if ( (v6 & 1) != 0 )
            {
              dword_140404A6C[v41 + 349908882] = dword_1402B3650;
              dword_140404A6C[v41 + 349908883] = dword_1402B3654;
            }
            else
            {
              dword_140404A6C[v41 + 349908882] = v10;
              dword_140404A6C[v41 + 349908883] = v8;
            }
            v42 = dword_140404A6C[a3 + 358297509];
            v43 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v43 + 349908884] = v30;
            dword_140404A6C[v43 + 349908885] = v31;
            dword_140404A6C[v43 + 349908886] = v32;
            v44 = ++dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v44 + 349908879] = v16;
            dword_140404A6C[v44 + 349908880] = v15;
            dword_140404A6C[v44 + 349908881] = v42;
            v45 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            if ( (v6 & 1) != 0 )
            {
              dword_140404A6C[v45 + 349908882] = v10;
              dword_140404A6C[v45 + 349908883] = v8;
            }
            else
            {
              dword_140404A6C[v45 + 349908882] = dword_1402B3640;
              dword_140404A6C[v45 + 349908883] = dword_1402B3644;
            }
            v14 += 3;
            v46 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v46 + 349908884] = v30;
            dword_140404A6C[v46 + 349908885] = v31;
            dword_140404A6C[v46 + 349908886] = v32;
            v5 = ++dword_140404A6C[349908878];
            --v13;
          }
          while ( v13 );
        }
      }
      ++v6;
      v11 += 15432;
      v9 += 5144;
    }
    while ( v6 < v7 );
  }
  unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283790158] + 283793813], a3);
  unk_140404190(34962, 4 * dword_140404A6C[349908878] * dword_140404A6C[349908877], &dword_140404A6C[349908879], 35044);
  unk_140404170(34962, 0, v47);
  v49 = 0;
  v50 = dword_140404A6C[421506973];
  v51 = 0;
  *(_QWORD *)&dword_140404A6C[358297493] = *(_QWORD *)&dword_140404A6C[349908877];
  *(_QWORD *)&dword_140404A6C[349908877] = 8;
  if ( (int)dword_140404A6C[421506973] > 0 )
  {
    v52 = dword_1402B364C;
    v53 = &dword_140404A6C[358300584];
    v54 = dword_1402B3648;
    v55 = 0;
    do
    {
      v48 = (int)*(v53 - 4);
      if ( (int)v48 < (int)*v53 )
      {
        v56 = *v53 - (unsigned int)v48;
        v57 = &dword_140404A6C[3 * v55 + 358300589 + 3 * v48];
        do
        {
          v58 = dword_140404A6C[3 * v55 + 358297508 + 3 * (int)v57[1]];
          v59 = dword_140404A6C[3 * v55 + 358297509 + 3 * (int)v57[1]];
          v60 = dword_140404A6C[3 * v55 + 358297507 + 3 * (int)v57[1]];
          v48 = 3 * (v55 + (int)*v57);
          v61 = v55 + (int)*(v57 - 1);
          v62 = *(float *)&dword_140404A6C[3 * v61 + 358297508];
          v63 = *(float *)&dword_140404A6C[3 * v61 + 358297509];
          v64 = *(float *)&dword_140404A6C[3 * v55 + 358297508 + 3 * (int)*v57] - v62;
          v65 = *(float *)&dword_140404A6C[3 * v61 + 358297507];
          v66 = *(float *)&dword_140404A6C[3 * v55 + 358297509 + 3 * (int)*v57] - v63;
          v67 = *(float *)&dword_140404A6C[3 * v55 + 358297507 + 3 * (int)*v57] - v65;
          v68 = *(float *)&v58 - v62;
          v69 = *(float *)&v59 - v63;
          v70 = (float)(v68 * v66) - (float)(v64 * (float)(*(float *)&v59 - v63));
          v71 = (float)(v67 * v69) - (float)((float)(*(float *)&v60 - v65) * v66);
          v72 = (float)((float)(*(float *)&v60 - v65) * v64) - (float)(v68 * v67);
          v73 = fsqrt((float)((float)(v71 * v71) + (float)(v70 * v70)) + (float)(v72 * v72));
          if ( v73 == 0.0 )
          {
            *(float *)&v74 = 0.0;
            *(float *)&v75 = 0.0;
            *(float *)&v76 = 0.0;
          }
          else
          {
            *(float *)&v74 = (float)(1.0 / v73) * v70;
            *(float *)&v75 = (float)(1.0 / v73) * v71;
            *(float *)&v76 = (float)(1.0 / v73) * v72;
          }
          v77 = dword_140404A6C[3 * v61 + 358297508];
          v78 = dword_140404A6C[3 * v61 + 358297509];
          v79 = (int)(v49 * dword_140404A6C[349908877]);
          dword_140404A6C[v79 + 349908879] = dword_140404A6C[3 * v61 + 358297507];
          dword_140404A6C[v79 + 349908880] = v77;
          dword_140404A6C[v79 + 349908881] = v78;
          v80 = dword_140404A6C[v48 + 358297508];
          v81 = dword_140404A6C[v48 + 358297509];
          *(float *)&dword_140404A6C[dword_140404A6C[349908878] * dword_140404A6C[349908877] + 349908880] = *(float *)&dword_140404A6C[dword_140404A6C[349908878] * dword_140404A6C[349908877] + 349908880] + 0.125;
          v82 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
          dword_140404A6C[v82 + 349908882] = dword_1402B3638;
          dword_140404A6C[v82 + 349908883] = dword_1402B363C;
          v83 = dword_140404A6C[v48 + 358297507];
          v84 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
          dword_140404A6C[v84 + 349908884] = v74;
          dword_140404A6C[v84 + 349908885] = v75;
          dword_140404A6C[v84 + 349908886] = v76;
          v85 = ++dword_140404A6C[349908878] * dword_140404A6C[349908877];
          dword_140404A6C[v85 + 349908879] = v83;
          dword_140404A6C[v85 + 349908880] = v80;
          dword_140404A6C[v85 + 349908881] = v81;
          *(float *)&dword_140404A6C[dword_140404A6C[349908878] * dword_140404A6C[349908877] + 349908880] = *(float *)&dword_140404A6C[dword_140404A6C[349908878] * dword_140404A6C[349908877] + 349908880] + 0.125;
          v86 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
          if ( (v51 & 1) != 0 )
          {
            dword_140404A6C[v86 + 349908882] = dword_1402B3650;
            dword_140404A6C[v86 + 349908883] = dword_1402B3654;
          }
          else
          {
            dword_140404A6C[v86 + 349908882] = v54;
            dword_140404A6C[v86 + 349908883] = v52;
          }
          v87 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
          dword_140404A6C[v87 + 349908884] = v74;
          dword_140404A6C[v87 + 349908885] = v75;
          dword_140404A6C[v87 + 349908886] = v76;
          v88 = ++dword_140404A6C[349908878] * dword_140404A6C[349908877];
          dword_140404A6C[v88 + 349908879] = v60;
          dword_140404A6C[v88 + 349908880] = v58;
          dword_140404A6C[v88 + 349908881] = v59;
          *(float *)&dword_140404A6C[dword_140404A6C[349908878] * dword_140404A6C[349908877] + 349908880] = *(float *)&dword_140404A6C[dword_140404A6C[349908878] * dword_140404A6C[349908877] + 349908880] + 0.125;
          v89 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
          if ( (v51 & 1) != 0 )
          {
            dword_140404A6C[v89 + 349908882] = v54;
            dword_140404A6C[v89 + 349908883] = v52;
          }
          else
          {
            dword_140404A6C[v89 + 349908882] = dword_1402B3640;
            dword_140404A6C[v89 + 349908883] = dword_1402B3644;
          }
          v57 += 3;
          v90 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
          dword_140404A6C[v90 + 349908884] = v74;
          dword_140404A6C[v90 + 349908885] = v75;
          dword_140404A6C[v90 + 349908886] = v76;
          v49 = ++dword_140404A6C[349908878];
          --v56;
        }
        while ( v56 );
      }
      ++v51;
      v53 += 15432;
      v55 += 5144;
    }
    while ( v51 < v50 );
  }
  unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283790159] + 283793813], v48);
  unk_140404190(34962, 4 * dword_140404A6C[349908878] * dword_140404A6C[349908877], &dword_140404A6C[349908879], 35044);
  unk_140404170(34962, 0, v91);
  v93 = 0;
  v94 = dword_140404A6C[421506973];
  *(_QWORD *)&dword_140404A6C[358297495] = *(_QWORD *)&dword_140404A6C[349908877];
  *(_QWORD *)&dword_140404A6C[349908877] = 8;
  if ( (int)dword_140404A6C[421506973] > 0 )
  {
    v95 = dword_1402B364C;
    v96 = 0;
    v97 = dword_1402B3648;
    do
    {
      if ( *(v3 - 3081) == 1 )
      {
        v92 = (int)*v3;
        v98 = v3[4];
        if ( (int)v92 < v98 )
        {
          v99 = (unsigned int)(v98 - v92);
          v100 = &dword_140404A6C[3 * v96 + 358300589 + 3 * v92];
          do
          {
            v92 = 3 * (v96 + (int)v100[1]);
            v101 = dword_140404A6C[3 * v96 + 358297508 + 3 * (int)v100[1]];
            v102 = dword_140404A6C[3 * v96 + 358297507 + 3 * (int)v100[1]];
            v103 = 3 * (v96 + (int)*v100);
            v104 = v96 + (int)*(v100 - 1);
            v105 = dword_140404A6C[3 * v104 + 358297508];
            v106 = dword_140404A6C[3 * v104 + 358297509];
            v107 = dword_140404A6C[3 * v104 + 358297507];
            v108 = *(float *)&dword_140404A6C[3 * v96 + 358297509 + 3 * (int)v100[1]] - *(float *)&v106;
            v109 = *(float *)&dword_140404A6C[3 * v96 + 358297508 + 3 * (int)*v100] - *(float *)&v105;
            v110 = *(float *)&dword_140404A6C[3 * v96 + 358297509 + 3 * (int)*v100] - *(float *)&v106;
            v111 = *(float *)&dword_140404A6C[3 * v96 + 358297507 + 3 * (int)*v100] - *(float *)&v107;
            v112 = (float)((float)(*(float *)&v101 - *(float *)&v105) * v110) - (float)(v108 * v109);
            v113 = (float)((float)(*(float *)&v102 - *(float *)&v107) * v109)
                 - (float)((float)(*(float *)&v101 - *(float *)&v105) * v111);
            v114 = (float)(v108 * v111) - (float)((float)(*(float *)&v102 - *(float *)&v107) * v110);
            v115 = fsqrt((float)((float)(v114 * v114) + (float)(v112 * v112)) + (float)(v113 * v113));
            if ( v115 == 0.0 )
            {
              *(float *)&v116 = 0.0;
              *(float *)&v117 = 0.0;
              *(float *)&v118 = 0.0;
            }
            else
            {
              *(float *)&v116 = (float)(1.0 / v115) * v112;
              *(float *)&v117 = (float)(1.0 / v115) * v114;
              *(float *)&v118 = (float)(1.0 / v115) * v113;
            }
            v119 = dword_1402B3638;
            v120 = dword_140404A6C[3 * v96 + 358297508 + 3 * (int)*v100];
            v121 = dword_140404A6C[3 * v96 + 358297509 + 3 * (int)*v100];
            v122 = (int)(v4 * dword_140404A6C[349908877]);
            dword_140404A6C[v122 + 349908879] = v107;
            dword_140404A6C[v122 + 349908880] = v105;
            dword_140404A6C[v122 + 349908881] = v106;
            v123 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v123 + 349908882] = v119;
            dword_140404A6C[v123 + 349908883] = dword_1402B363C;
            v124 = dword_140404A6C[v103 + 358297507];
            v125 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v125 + 349908884] = v116;
            dword_140404A6C[v125 + 349908885] = v117;
            dword_140404A6C[v125 + 349908886] = v118;
            v126 = ++dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v126 + 349908879] = v124;
            dword_140404A6C[v126 + 349908880] = v120;
            dword_140404A6C[v126 + 349908881] = v121;
            v127 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            if ( (v93 & 1) != 0 )
            {
              dword_140404A6C[v127 + 349908882] = dword_1402B3650;
              dword_140404A6C[v127 + 349908883] = dword_1402B3654;
            }
            else
            {
              dword_140404A6C[v127 + 349908882] = v97;
              dword_140404A6C[v127 + 349908883] = v95;
            }
            v128 = dword_140404A6C[v92 + 358297509];
            v129 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v129 + 349908884] = v116;
            dword_140404A6C[v129 + 349908885] = v117;
            dword_140404A6C[v129 + 349908886] = v118;
            v130 = ++dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v130 + 349908879] = v102;
            dword_140404A6C[v130 + 349908880] = v101;
            dword_140404A6C[v130 + 349908881] = v128;
            v131 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            if ( (v93 & 1) != 0 )
            {
              dword_140404A6C[v131 + 349908882] = v97;
              dword_140404A6C[v131 + 349908883] = v95;
            }
            else
            {
              dword_140404A6C[v131 + 349908882] = dword_1402B3640;
              dword_140404A6C[v131 + 349908883] = dword_1402B3644;
            }
            v100 += 3;
            v132 = dword_140404A6C[349908878] * dword_140404A6C[349908877];
            dword_140404A6C[v132 + 349908884] = v116;
            dword_140404A6C[v132 + 349908885] = v117;
            dword_140404A6C[v132 + 349908886] = v118;
            v4 = ++dword_140404A6C[349908878];
            --v99;
          }
          while ( v99 );
        }
      }
      ++v93;
      v3 += 15432;
      v96 += 5144;
    }
    while ( v93 < v94 );
  }
  unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283790160] + 283793813], v92);
  unk_140404190(34962, 4 * dword_140404A6C[349908878] * dword_140404A6C[349908877], &dword_140404A6C[349908879], 35044);
  unk_140404170(34962, 0, v133);
  *(_QWORD *)&dword_140404A6C[358297497] = *(_QWORD *)&dword_140404A6C[349908877];
  return dword_140404A6C[349908877];
}

