/* Address: 0x14002cc70 | Name: sub_14002CC70 | Size: 3492 bytes */
void sub_14002CC70()
{
  unsigned __int64 v0; // rsi
  int v1; // r14d
  float *v2; // rdi
  __int64 v3; // rax
  int v4; // edx
  float v5; // xmm7_4
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm2_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  __int64 v16; // rcx
  char *v17; // rbx
  char *v18; // r15
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm1_4
  int v24; // edx
  __int64 v25; // r13
  __int64 v26; // r12
  int v27; // ecx
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm4_4
  int v34; // ebx
  __int64 v35; // r15
  float *v36; // r14
  float *v37; // rdi
  float v38; // xmm0_4
  float v39; // xmm5_4
  float v40; // xmm4_4
  unsigned __int64 v41; // rcx
  float v42; // xmm1_4
  float v43; // xmm3_4
  unsigned __int64 v44; // rax
  float v45; // xmm2_4
  float v46; // xmm0_4
  float v47; // xmm5_4
  float v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm3_4
  float v51; // xmm4_4
  float v52; // xmm3_4
  float v53; // xmm5_4
  float v54; // xmm4_4
  float v55; // xmm2_4
  float v56; // xmm2_4
  float v57; // xmm0_4
  float v58; // xmm3_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm5_4
  float *v62; // rbx
  __int64 v63; // rdi
  int v64; // r8d
  int v65; // ecx
  float v66; // xmm14_4
  float v67; // xmm15_4
  float v68; // xmm6_4
  float v69; // xmm7_4
  float v70; // xmm8_4
  float v71; // xmm1_4
  __int64 v72; // rax
  float v73; // xmm5_4
  float v74; // xmm9_4
  float v75; // xmm5_4
  int *v76; // rcx
  int v77; // r8d
  int v78; // r9d
  float v79; // xmm6_4
  float v80; // xmm7_4
  float v81; // xmm1_4
  float v82; // xmm2_4
  float v83; // xmm3_4
  float v84; // xmm4_4
  float v85; // xmm0_4
  int v86; // r8d
  int v87; // r9d
  float v88; // xmm6_4
  float v89; // xmm7_4
  float v90; // xmm1_4
  float v91; // xmm2_4
  float v92; // xmm3_4
  float v93; // xmm4_4
  float v94; // xmm0_4
  int v95; // r8d
  int v96; // r9d
  float v97; // xmm6_4
  float v98; // xmm7_4
  float v99; // xmm1_4
  float v100; // xmm2_4
  float v101; // xmm3_4
  float v102; // xmm4_4
  float v103; // xmm0_4
  int v104; // r8d
  int v105; // r9d
  float v106; // xmm6_4
  float v107; // xmm7_4
  float v108; // xmm1_4
  float v109; // xmm2_4
  float v110; // xmm3_4
  float v111; // xmm4_4
  float v112; // xmm0_4
  __int64 v113; // [rsp+28h] [rbp-E0h]
  float v114; // [rsp+28h] [rbp-E0h]
  __int64 v115; // [rsp+30h] [rbp-D8h]
  float v116; // [rsp+38h] [rbp-D0h] BYREF
  float v117; // [rsp+3Ch] [rbp-CCh]
  float v118; // [rsp+40h] [rbp-C8h]
  float v119; // [rsp+48h] [rbp-C0h] BYREF
  float v120; // [rsp+4Ch] [rbp-BCh]
  __int64 v121; // [rsp+50h] [rbp-B8h]

  v0 = 0;
  v1 = 0;
  if ( dword_16D67C580 > 0 )
  {
    v2 = (float *)&unk_16D4FDB74;
    do
    {
      v3 = *((int *)v2 - 381);
      v4 = *((_DWORD *)v2 - 6);
      *(v2 - 357) = 3.0;
      v5 = (float)(*((float *)&unk_14AA2CB74 + 24944 * v3) * 0.875) - *((float *)&unk_14AA2CB80 + 24944 * v3);
      if ( v4 >= dword_191541414 )
      {
        v12 = *(v2 - 377);
      }
      else
      {
        v6 = *(v2 - 4);
        v7 = *(v2 - 5) - *(v2 - 1);
        v8 = v6 - *v2;
        v9 = *(v2 - 3) - v2[1];
        v10 = (float)(v4 - *((_DWORD *)v2 - 2));
        if ( v10 > 0.0 )
        {
          v7 = v7 * (float)(1.0 / v10);
          v8 = v8 * (float)(1.0 / v10);
          v9 = v9 * (float)(1.0 / v10);
        }
        v11 = fminf((float)(dword_191541414 - v4), 64.0);
        v12 = (float)(v7 * v11) + *(v2 - 5);
        v13 = (float)(v9 * v11) + *(v2 - 3);
        *(v2 - 377) = v12;
        *(v2 - 376) = (float)(v8 * v11) + v6;
        *(v2 - 375) = v13;
      }
      v14 = *(v2 - 376);
      v15 = *(v2 - 375);
      v116 = (float)(*(float *)&dword_140146A28 * 2.0) + v12;
      v119 = v12 - (float)(*(float *)&dword_140146A28 * 8.0);
      v117 = (float)(*(float *)&dword_140146A2C * 2.0) + v14;
      v120 = v14 - (float)(*(float *)&dword_140146A2C * 8.0);
      v118 = (float)(*(float *)&dword_140146A30 * 2.0) + v15;
      *(float *)&v121 = v15 - (float)(*(float *)&dword_140146A30 * 8.0);
      if ( (unsigned int)sub_1400828D0(&v116, &v119, 0) )
        *(v2 - 376) = *(float *)&qword_16E18CA44 + v5;
      v16 = 1532LL * v1;
      *((_QWORD *)v2 - 185) = 1065353216;
      v17 = (char *)&unk_16D4FD5B8 + v16;
      *((_QWORD *)v2 - 184) = 0;
      v18 = (char *)&unk_16D4FD5AC + v16;
      *((_QWORD *)v2 - 183) = 1065353216;
      *((_QWORD *)v2 - 182) = 0;
      *(v2 - 362) = 1.0;
      sub_140049C20((char *)&unk_16D4FD5AC + v16, (char *)&unk_16D4FD5B8 + v16);
      sub_140049C20(v18, v17);
      v19 = -*(v2 - 357);
      v20 = (float)(v19 * *(v2 - 364)) + *(v2 - 377);
      v21 = (float)(v19 * *(v2 - 363)) + *(v2 - 376);
      v22 = (float)(v19 * *(v2 - 362)) + *(v2 - 375);
      v116 = v20;
      v117 = v21;
      v119 = v20 - (float)(*(float *)&dword_140146A28 * 32.0);
      v118 = v22;
      *(float *)&v121 = v22 - (float)(*(float *)&dword_140146A30 * 32.0);
      v120 = v21 - (float)(*(float *)&dword_140146A2C * 32.0);
      if ( (unsigned int)sub_1400828D0(&v116, &v119, 0) )
      {
        v23 = *(v2 - 357);
        v117 = *(float *)&qword_16E18CA44 + v5;
        atan2f((float)(*(float *)&qword_16E18CA44 + v5) - *(v2 - 376), v23);
        sub_140049C20(v18, v18);
      }
      ++v1;
      v2 += 383;
    }
    while ( v1 < dword_16D67C580 );
  }
  v24 = dword_191541414;
  v25 = 256;
  v26 = 0;
  v115 = 256;
  v113 = 256;
  do
  {
    if ( dword_1909419C8[v0 / 4] )
    {
      v27 = *(_DWORD *)((char *)&unk_190948978 + v0);
      if ( v27 < v24 )
      {
        v28 = *(float *)((char *)&unk_190948980 + v0);
        v29 = *(float *)((char *)&unk_190948984 + v0);
        v30 = *(float *)((char *)&unk_19094897C + v0) - *(float *)((char *)&unk_19094898C + v0);
        v31 = v28 - *(float *)((char *)&unk_190948990 + v0);
        v32 = v29 - *(float *)((char *)&unk_190948994 + v0);
        v33 = (float)(v27 - *(_DWORD *)((char *)&unk_190948988 + v0));
        if ( v33 > 0.0 )
        {
          v30 = v30 * (float)(1.0 / v33);
          v31 = v31 * (float)(1.0 / v33);
          v32 = v32 * (float)(1.0 / v33);
        }
        v34 = 1;
        v35 = 312;
        v36 = (float *)&qword_191041618;
        v37 = (float *)((char *)&unk_190941D28 + v0);
        v38 = fminf((float)(v24 - v27), 64.0);
        *(float *)&dword_190941BEC[v0 / 4] = (float)(v30 * v38) + *(float *)((char *)&unk_19094897C + v0);
        *(float *)&dword_190941BF0[v0 / 4] = (float)(v31 * v38) + v28;
        *(float *)&dword_190941BF4[v0 / 4] = (float)(v32 * v38) + v29;
        do
        {
          if ( dword_1909419F0[v0 / 4] == -1 || (unsigned int)v34 < 0xA )
          {
            v39 = *(v36 - 1);
            v40 = *v36;
            v41 = 312LL * *((int *)v36 - 5);
            v42 = *v36;
            v43 = *v36;
            v44 = v0 + v41;
            v45 = (float)(v39 * *(float *)((char *)&xmmword_190941C1C + v0 + v41))
                + *(float *)&dword_190941BEC[v0 / 4 + v41 / 4];
            *(v37 - 1) = v45;
            v46 = (float)(v39 * *(float *)((char *)&xmmword_190941C1C + v44 + 4))
                + *(float *)((char *)dword_190941BF0 + v44);
            *v37 = v46;
            v47 = (float)(v39 * *(float *)((char *)&xmmword_190941C1C + v44 + 8))
                + *(float *)((char *)dword_190941BF4 + v44);
            v37[1] = v47;
            v48 = (float)(v42 * *(float *)((char *)&xmmword_190941C1C + v0 + v41 + 12)) + v45;
            v49 = v36[1];
            *(v37 - 1) = v48;
            v50 = (float)(v43 * *(float *)((char *)&xmmword_190941C2C + v0 + v41)) + v46;
            *v37 = v50;
            v51 = (float)(v40 * *(float *)((char *)&xmmword_190941C2C + v0 + v41 + 4)) + v47;
            v37[1] = v51;
            *(v37 - 1) = (float)(v49 * *(float *)((char *)&xmmword_190941C2C + v0 + v41 + 8)) + v48;
            *v37 = (float)(v49 * *(float *)((char *)&xmmword_190941C2C + v0 + v41 + 12)) + v50;
            v37[1] = (float)(v49 * *(float *)&dword_190941C3C[v0 / 4 + v41 / 4]) + v51;
            sub_140049030(
              (char *)&xmmword_190941C1C + v35 + v26,
              (char *)&unk_190941CC0 + v35 + v26,
              (char *)&xmmword_190941C1C + v26 + v41);
            v52 = *(v36 - 4) - *(v36 - 1);
            v53 = *(v36 - 3) - *v36;
            v54 = *(v36 - 2) - v36[1];
            v116 = v52;
            v55 = v52 * v37[11];
            v117 = v53;
            v118 = v54;
            v56 = v55 + *(v37 - 1);
            *(v37 - 1) = v56;
            v57 = (float)(v52 * v37[12]) + *v37;
            *v37 = v57;
            v58 = (float)(v52 * v37[13]) + v37[1];
            v37[1] = v58;
            v59 = (float)(v53 * v37[14]) + v56;
            *(v37 - 1) = v59;
            v60 = (float)(v53 * v37[15]) + v57;
            *v37 = v60;
            v61 = (float)(v53 * v37[16]) + v58;
            v37[1] = v61;
            *(v37 - 1) = (float)(v54 * v37[17]) + v59;
            *v37 = (float)(v54 * v37[18]) + v60;
            v37[1] = (float)(v54 * v37[19]) + v61;
          }
          ++v34;
          v35 += 312;
          v36 += 25;
          v37 += 78;
        }
        while ( v34 < 16 );
        v24 = dword_191541414;
        v25 = v113;
      }
    }
    v26 += 28664;
    v0 += 28664LL;
    v113 = --v25;
  }
  while ( v25 );
  v62 = (float *)&unk_16E6A8DC0;
  v63 = 512;
  do
  {
    if ( *((_DWORD *)v62 - 5208) )
    {
      v64 = *((_DWORD *)v62 - 7);
      if ( v64 != -1 )
      {
        v65 = *((_DWORD *)v62 - 3);
        if ( v65 != -1 )
        {
          v66 = *(v62 - 6);
          v67 = *(v62 - 5);
          v68 = v66 - *(v62 - 2);
          v114 = *(v62 - 4);
          v69 = v67 - *(v62 - 1);
          v70 = v114 - *v62;
          v71 = (float)(v64 - v65);
          if ( v71 > 0.0 )
          {
            v68 = v68 * (float)(1.0 / v71);
            v69 = v69 * (float)(1.0 / v71);
            v70 = v70 * (float)(1.0 / v71);
          }
          v72 = *((int *)v62 - 5207);
          *(v62 - 5173) = v68;
          *(v62 - 5172) = v69;
          *(v62 - 5171) = v70;
          if ( v64 < v24 )
          {
            v73 = *((float *)&unk_14AA2CB80 + 24944 * v72) - (float)(*((float *)&unk_14AA2CB74 + 24944 * v72) * 0.875);
            v116 = v66 + *(float *)&dword_140146A28;
            v117 = v67 + *(float *)&dword_140146A2C;
            v118 = v114 + *(float *)&dword_140146A30;
            v74 = fminf((float)(v24 - v64), 64.0);
            v119 = (float)((float)(v73 * *(float *)&dword_140146A28) + v66) + (float)(v68 * v74);
            v120 = (float)((float)(v73 * *(float *)&dword_140146A2C) + v67) + (float)(v69 * v74);
            *(float *)&v121 = (float)((float)(v73 * *(float *)&dword_140146A30) + v114) + (float)(v70 * v74);
            if ( (unsigned int)sub_1400828D0(&v116, &v119, 0) )
            {
              v75 = -(float)((float)((float)(v68 * *(float *)&qword_16E18CA4C)
                                   + (float)(v69 * *((float *)&qword_16E18CA4C + 1)))
                           + (float)(v70 * *(float *)&dword_16E18CA54));
              v68 = v68 + (float)(*(float *)&qword_16E18CA4C * v75);
              v69 = v69 + (float)(*((float *)&qword_16E18CA4C + 1) * v75);
              v70 = v70 + (float)(*(float *)&dword_16E18CA54 * v75);
            }
            v24 = dword_191541414;
            *(v62 - 5197) = (float)(v68 * v74) + *(v62 - 6);
            *(v62 - 5196) = (float)(v69 * v74) + *(v62 - 5);
            *(v62 - 5195) = (float)(v70 * v74) + *(v62 - 4);
          }
        }
      }
    }
    v62 += 5210;
    --v63;
  }
  while ( v63 );
  v76 = &dword_19025F420;
  do
  {
    if ( *(v76 - 216) )
    {
      v77 = *(v76 - 7);
      if ( v77 < v24 && v77 != -1 )
      {
        v78 = *(v76 - 2);
        if ( v78 != -1 )
        {
          v79 = *((float *)v76 - 5);
          v80 = *((float *)v76 - 4);
          v81 = *((float *)v76 - 6) - *((float *)v76 - 1);
          v82 = v79 - *(float *)v76;
          v83 = v80 - *((float *)v76 + 1);
          v84 = (float)(v77 - v78);
          if ( v84 > 0.0 )
          {
            v81 = v81 * (float)(1.0 / v84);
            v82 = v82 * (float)(1.0 / v84);
            v83 = v83 * (float)(1.0 / v84);
          }
          v85 = fminf((float)(v24 - v77), 64.0);
          *((float *)v76 - 193) = (float)(v81 * v85) + *((float *)v76 - 6);
          *((float *)v76 - 192) = (float)(v82 * v85) + v79;
          *((float *)v76 - 191) = (float)(v83 * v85) + v80;
        }
      }
    }
    if ( v76[1544] )
    {
      v86 = v76[1753];
      if ( v86 < v24 && v86 != -1 )
      {
        v87 = v76[1758];
        if ( v87 != -1 )
        {
          v88 = *((float *)v76 + 1755);
          v89 = *((float *)v76 + 1756);
          v90 = *((float *)v76 + 1754) - *((float *)v76 + 1759);
          v91 = v88 - *((float *)v76 + 1760);
          v92 = v89 - *((float *)v76 + 1761);
          v93 = (float)(v86 - v87);
          if ( v93 > 0.0 )
          {
            v90 = v90 * (float)(1.0 / v93);
            v91 = v91 * (float)(1.0 / v93);
            v92 = v92 * (float)(1.0 / v93);
          }
          v94 = fminf((float)(v24 - v86), 64.0);
          *((float *)v76 + 1567) = (float)(v90 * v94) + *((float *)v76 + 1754);
          *((float *)v76 + 1568) = (float)(v91 * v94) + v88;
          *((float *)v76 + 1569) = (float)(v92 * v94) + v89;
        }
      }
    }
    if ( v76[3304] )
    {
      v95 = v76[3513];
      if ( v95 < v24 && v95 != -1 )
      {
        v96 = v76[3518];
        if ( v96 != -1 )
        {
          v97 = *((float *)v76 + 3515);
          v98 = *((float *)v76 + 3516);
          v99 = *((float *)v76 + 3514) - *((float *)v76 + 3519);
          v100 = v97 - *((float *)v76 + 3520);
          v101 = v98 - *((float *)v76 + 3521);
          v102 = (float)(v95 - v96);
          if ( v102 > 0.0 )
          {
            v99 = v99 * (float)(1.0 / v102);
            v100 = v100 * (float)(1.0 / v102);
            v101 = v101 * (float)(1.0 / v102);
          }
          v103 = fminf((float)(v24 - v95), 64.0);
          *((float *)v76 + 3327) = (float)(v99 * v103) + *((float *)v76 + 3514);
          *((float *)v76 + 3328) = (float)(v100 * v103) + v97;
          *((float *)v76 + 3329) = (float)(v101 * v103) + v98;
        }
      }
    }
    if ( v76[5064] )
    {
      v104 = v76[5273];
      if ( v104 < v24 && v104 != -1 )
      {
        v105 = v76[5278];
        if ( v105 != -1 )
        {
          v106 = *((float *)v76 + 5275);
          v107 = *((float *)v76 + 5276);
          v108 = *((float *)v76 + 5274) - *((float *)v76 + 5279);
          v109 = v106 - *((float *)v76 + 5280);
          v110 = v107 - *((float *)v76 + 5281);
          v111 = (float)(v104 - v105);
          if ( v111 > 0.0 )
          {
            v108 = v108 * (float)(1.0 / v111);
            v109 = v109 * (float)(1.0 / v111);
            v110 = v110 * (float)(1.0 / v111);
          }
          v112 = fminf((float)(v24 - v104), 64.0);
          *((float *)v76 + 5087) = (float)(v108 * v112) + *((float *)v76 + 5274);
          *((float *)v76 + 5088) = (float)(v109 * v112) + v106;
          *((float *)v76 + 5089) = (float)(v110 * v112) + v107;
        }
      }
    }
    v76 += 7040;
    --v115;
  }
  while ( v115 );
}

