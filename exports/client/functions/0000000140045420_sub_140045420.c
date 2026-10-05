/* Address: 0x140045420 | Name: sub_140045420 | Size: 3716 bytes */
__int64 __fastcall sub_140045420(int *a1, _DWORD *a2)
{
  float v2; // xmm6_4
  int v3; // r12d
  int *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  _DWORD *v9; // rax
  float v10; // xmm7_4
  int v11; // xmm8_4
  int v12; // xmm9_4
  float v13; // xmm10_4
  float v14; // xmm11_4
  float v15; // xmm12_4
  int v16; // esi
  int *v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int *v21; // rcx
  _DWORD *v22; // r10
  __int64 v23; // r8
  _DWORD *v24; // rax
  __int64 v25; // r9
  int v26; // xmm9_4
  int v27; // xmm10_4
  int v28; // xmm11_4
  int v29; // xmm1_4
  int v30; // xmm12_4
  int v31; // xmm13_4
  int v32; // xmm14_4
  int v33; // xmm0_4
  int v34; // xmm1_4
  int v35; // xmm0_4
  int v36; // xmm1_4
  int v37; // edx
  __int64 v38; // rcx
  int v39; // r12d
  _DWORD *v40; // rax
  __int64 v41; // rcx
  int v42; // esi
  float v43; // xmm7_4
  int *v44; // rdi
  int v45; // ebx
  __int64 v46; // r14
  __int64 v47; // r15
  float v48; // xmm3_4
  float v49; // xmm4_4
  float v50; // xmm5_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  float v53; // xmm5_4
  bool v54; // zf
  int v55; // ecx
  int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  int v62; // r12d
  _DWORD *v63; // r10
  int *v64; // r15
  __int64 v65; // rdx
  int v66; // r8d
  __int64 v67; // r9
  _DWORD *v68; // rax
  float v69; // xmm13_4
  float v70; // xmm14_4
  float v71; // xmm15_4
  float v72; // xmm10_4
  float v73; // xmm11_4
  float v74; // xmm12_4
  __int64 v75; // rcx
  int v76; // edx
  _DWORD *v77; // rax
  __int64 v78; // rcx
  int v79; // r14d
  _DWORD *v80; // rdi
  BOOL v81; // esi
  int v82; // eax
  int v83; // eax
  int v84; // ecx
  int v85; // esi
  int *v86; // rdi
  float v87; // xmm3_4
  float v88; // xmm4_4
  float v89; // xmm5_4
  float v90; // xmm0_4
  int v91; // ecx
  _DWORD v93[10]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v94; // [rsp+30h] [rbp-D8h]
  __int64 v95; // [rsp+38h] [rbp-D0h]
  __int64 v96; // [rsp+40h] [rbp-C8h]
  __int64 v97; // [rsp+48h] [rbp-C0h]
  int v98; // [rsp+50h] [rbp-B8h]
  float v99; // [rsp+58h] [rbp-B0h] BYREF
  int v100; // [rsp+5Ch] [rbp-ACh]
  __int64 v101; // [rsp+60h] [rbp-A8h] BYREF
  float v102; // [rsp+68h] [rbp-A0h]
  float v103; // [rsp+70h] [rbp-98h] BYREF
  float v104; // [rsp+74h] [rbp-94h] BYREF
  __int64 v105; // [rsp+78h] [rbp-90h] BYREF
  float v106; // [rsp+80h] [rbp-88h]
  float v107; // [rsp+88h] [rbp-80h]
  float v108; // [rsp+90h] [rbp-78h] BYREF
  float v109; // [rsp+94h] [rbp-74h]
  float v110; // [rsp+98h] [rbp-70h]
  float v111; // [rsp+A0h] [rbp-68h] BYREF
  float v112; // [rsp+A4h] [rbp-64h]
  float v113; // [rsp+A8h] [rbp-60h]
  _DWORD *v114; // [rsp+B0h] [rbp-58h]
  int v115; // [rsp+B8h] [rbp-50h]
  int v116; // [rsp+BCh] [rbp-4Ch]
  int v117; // [rsp+C0h] [rbp-48h]
  int *i; // [rsp+C8h] [rbp-40h]
  float v119[2]; // [rsp+D0h] [rbp-38h] BYREF
  float v120; // [rsp+D8h] [rbp-30h]
  __int64 v121; // [rsp+DCh] [rbp-2Ch]
  float v122; // [rsp+E4h] [rbp-24h]
  __int64 v123; // [rsp+E8h] [rbp-20h]
  __int64 v124; // [rsp+F0h] [rbp-18h]
  __int64 v125; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v126; // [rsp+100h] [rbp-8h] BYREF
  float v127; // [rsp+108h] [rbp+0h]
  float v128; // [rsp+10Ch] [rbp+4h]
  _DWORD v129[3]; // [rsp+110h] [rbp+8h] BYREF
  _DWORD v130[3]; // [rsp+11Ch] [rbp+14h] BYREF
  __int64 v131; // [rsp+128h] [rbp+20h]

  v2 = v99;
  v3 = 0;
  v5 = a1;
  for ( i = a1; v3 < *v5; ++v3 )
  {
    v6 = 0;
    v7 = 23LL * v3;
    v8 = 0;
    v9 = v5 + 2436;
    LODWORD(v10) = v5[v7 + 21];
    v11 = v5[v7 + 22];
    v12 = v5[v7 + 23];
    LODWORD(v13) = v5[v7 + 18];
    v14 = *(float *)&v5[v7 + 19];
    v15 = *(float *)&v5[v7 + 20];
    v104 = v10;
    v125 = __PAIR64__(v11, LODWORD(v10));
    v100 = v11;
    v126 = __PAIR64__(LODWORD(v13), v12);
    v127 = v14;
    v128 = v15;
    while ( (int)*(v9 - 1) <= 0 || *v9 != v3 || v9[1] || v9[2] || v9[3] )
    {
      v6 = (unsigned int)(v6 + 1);
      ++v8;
      v9 += 18;
      if ( v8 >= 64 )
      {
        LODWORD(v6) = -1;
        goto LABEL_10;
      }
    }
    LODWORD(v10) = v5[18 * v6 + 2440];
    v11 = v5[18 * v6 + 2441];
    v12 = v5[18 * v6 + 2442];
    v104 = v10;
    v125 = __PAIR64__(v11, LODWORD(v10));
    v100 = v11;
    LODWORD(v126) = v12;
LABEL_10:
    if ( (unsigned int)sub_1400DA580(
                         (unsigned int)v119,
                         (_DWORD)a2,
                         (unsigned int)&v125,
                         (unsigned int)&v126 + 4,
                         v93[8],
                         v94,
                         v95,
                         v96,
                         v97,
                         v98,
                         LODWORD(v99),
                         v101,
                         LODWORD(v102),
                         LODWORD(v103),
                         v105,
                         LODWORD(v106),
                         LODWORD(v107),
                         LODWORD(v108),
                         LODWORD(v110),
                         LODWORD(v111),
                         LODWORD(v113),
                         (_DWORD)v114,
                         v115,
                         v117,
                         (_DWORD)i,
                         LODWORD(v119[0]),
                         LODWORD(v120),
                         HIDWORD(v121),
                         v123,
                         v124,
                         v125,
                         v126) )
    {
      v101 = v121;
      v102 = v122;
      v2 = (float)((float)((float)(v119[1] - v14) * *((float *)&v121 + 1))
                 + (float)((float)(v119[0] - v13) * *(float *)&v121))
         + (float)((float)(v120 - v15) * v122);
      v99 = v2;
      if ( v2 < 0.0625 )
      {
        v99 = 0.0625;
        v2 = 0.0625;
      }
      v16 = 0;
      v105 = 0;
      v106 = 0.0;
      if ( v5[v7 + 1] > 0 )
      {
        v17 = &v5[v7 + 2];
        do
        {
          sub_140005160(*v17, (unsigned int *)&v105, (unsigned int *)&v101, v2, 0x3C23D70Au, 0.0625, 0x3E800000u);
          ++v16;
          v17 += 4;
        }
        while ( v16 < v5[v7 + 1] );
        v10 = v104;
        v11 = v100;
      }
      if ( (_DWORD)v6 == -1 )
      {
        v18 = sub_140048090(v5);
        if ( v18 != -1 )
        {
          v19 = 9LL * v18;
          v5[2 * v19 + 2435] = 2;
          v5[2 * v19 + 2436] = v3;
          *(_QWORD *)&v5[2 * v19 + 2437] = 0;
          v5[2 * v19 + 2439] = 0;
          v5[2 * v19 + 2440] = LODWORD(v10);
          v5[2 * v19 + 2441] = v11;
          v5[2 * v19 + 2442] = v12;
        }
      }
      else
      {
        v5[18 * (int)v6 + 2435] = 2;
      }
    }
  }
  v20 = v5[1473];
  v107 = 0.0;
  if ( v20 > 0 )
  {
    v21 = v5 + 1475;
    v22 = v5 + 2436;
    v114 = v5 + 1475;
    do
    {
      v23 = *(v21 - 1);
      v24 = v22;
      v25 = *v21;
      v26 = v5[23 * v23 + 21];
      v27 = v5[23 * v23 + 22];
      v28 = v5[23 * v23 + 23];
      v125 = __PAIR64__(v27, v26);
      LODWORD(v126) = v28;
      v116 = v23;
      v117 = v25;
      v29 = v5[23 * v25 + 19];
      v30 = v5[23 * v25 + 21];
      v31 = v5[23 * v25 + 22];
      v32 = v5[23 * v25 + 23];
      v129[0] = v5[23 * v25 + 18];
      v33 = v5[23 * v25 + 20];
      v129[1] = v29;
      v34 = v5[23 * v23 + 18];
      v129[2] = v33;
      v35 = v5[23 * v23 + 19];
      v130[0] = v34;
      v36 = v5[23 * v23 + 20];
      v37 = 0;
      v100 = 0;
      v38 = 0;
      HIDWORD(v126) = v30;
      v127 = *(float *)&v31;
      v128 = *(float *)&v32;
      v130[1] = v35;
      v130[2] = v36;
      while ( (int)*(v24 - 1) <= 0 || *v24 != (_DWORD)v23 || v24[1] || v24[2] || v24[3] )
      {
        ++v37;
        ++v38;
        v24 += 18;
        v100 = v37;
        if ( v38 >= 64 )
        {
          v37 = -1;
          v100 = -1;
          break;
        }
      }
      v39 = 0;
      v40 = v22;
      v41 = 0;
      while ( (int)*(v40 - 1) <= 0 || *v40 != (_DWORD)v25 || v40[1] || v40[2] || v40[3] )
      {
        ++v39;
        ++v41;
        v40 += 18;
        if ( v41 >= 64 )
        {
          v39 = -1;
          break;
        }
      }
      if ( v37 != -1 )
      {
        v26 = v5[18 * v37 + 2440];
        v27 = v5[18 * v37 + 2441];
        v28 = v5[18 * v37 + 2442];
        v125 = __PAIR64__(v27, v26);
        LODWORD(v126) = v28;
      }
      if ( v39 != -1 )
      {
        v30 = v5[18 * v39 + 2440];
        v31 = v5[18 * v39 + 2441];
        v32 = v5[18 * v39 + 2442];
        HIDWORD(v126) = v30;
        v127 = *(float *)&v31;
        v128 = *(float *)&v32;
      }
      v42 = 0;
      v43 = 65536.0;
      v104 = 65536.0;
      if ( (int)a2[16386] <= 0 )
        goto LABEL_71;
      v44 = a2 + 16387;
      v45 = 0;
      do
      {
        if ( (unsigned int)sub_140184710(
                             (unsigned int)&v108,
                             (unsigned int)&v125,
                             (unsigned int)&v126 + 4,
                             (unsigned int)v129,
                             (__int64)v130,
                             (__int64)&a2[4 * *v44 + 2],
                             (__int64)&a2[4 * v44[1] + 2]) )
        {
          v46 = (__int64)&a2[4 * v44[1] + 2];
          v47 = (__int64)&a2[4 * *v44 + 2];
          if ( (unsigned int)sub_1400D6890(
                               (unsigned int)&v108,
                               (unsigned int)&v111,
                               (unsigned int)&v103,
                               (unsigned int)&v125,
                               (__int64)&v126 + 4,
                               v47,
                               v46,
                               1115684864) )
          {
            if ( v43 > v103 )
            {
              v45 = 1;
              v48 = v108 - v111;
              v49 = v109 - v112;
              v50 = v110 - v113;
              v2 = fsqrt((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50));
              v99 = v2;
              if ( v2 == 0.0 )
              {
                v101 = 0;
                v102 = 0.0;
              }
              else
              {
                *(float *)&v101 = (float)(1.0 / v2) * v48;
                *((float *)&v101 + 1) = (float)(1.0 / v2) * v49;
                v102 = (float)(1.0 / v2) * v50;
              }
              if ( (unsigned int)sub_1400D6890(
                                   (unsigned int)&v108,
                                   (unsigned int)&v111,
                                   (unsigned int)&v103,
                                   (unsigned int)v129,
                                   (__int64)v130,
                                   v47,
                                   v46,
                                   1115684864) )
              {
                v51 = v111 - v108;
                v52 = v112 - v109;
                v53 = v113 - v110;
                *(float *)&v105 = v111 - v108;
                *((float *)&v105 + 1) = v112 - v109;
                v106 = v113 - v110;
                v2 = fsqrt((float)((float)(v52 * v52) + (float)(v51 * v51)) + (float)(v53 * v53));
                v99 = v2;
                if ( v2 == 0.0 )
                {
                  v101 = 0;
                  v102 = 0.0;
                }
                else
                {
                  *(float *)&v101 = (float)(1.0 / v2) * v51;
                  *((float *)&v101 + 1) = (float)(1.0 / v2) * v52;
                  v102 = (float)(1.0 / v2) * v53;
                }
              }
              v43 = v103;
            }
          }
        }
        ++v42;
        v44 += 2;
      }
      while ( v42 < a2[16386] );
      v54 = v45 == 0;
      v104 = v43;
      v5 = i;
      if ( !v54 )
      {
        if ( v2 < 0.0625 )
        {
          v99 = 0.0625;
          v2 = 0.0625;
        }
        LODWORD(v95) = 1048576000;
        LODWORD(v94) = 1031798784;
        v55 = v114[2];
        v105 = 0;
        v106 = 0.0;
        sub_140005160(v55, (unsigned int *)&v105, (unsigned int *)&v101, v2, 0x3C23D70Au, 0.0625, 0x3E800000u);
        if ( v100 == -1 )
        {
          v56 = sub_140048090(v5);
          if ( v56 != -1 )
          {
            v57 = 9LL * v56;
            v58 = v116;
            v5[2 * v57 + 2435] = 2;
            v5[2 * v57 + 2436] = v58;
            *(_QWORD *)&v5[2 * v57 + 2437] = 0;
            v5[2 * v57 + 2439] = 0;
            v5[2 * v57 + 2440] = v26;
            v5[2 * v57 + 2441] = v27;
            v5[2 * v57 + 2442] = v28;
          }
        }
        else
        {
          v5[18 * v100 + 2435] = 2;
        }
        if ( v39 == -1 )
        {
          v59 = sub_140048090(v5);
          v22 = v5 + 2436;
          if ( v59 != -1 )
          {
            v60 = 9LL * v59;
            v61 = v117;
            v5[2 * v60 + 2435] = 2;
            v5[2 * v60 + 2436] = v61;
            *(_QWORD *)&v5[2 * v60 + 2437] = 0;
            v5[2 * v60 + 2439] = 0;
            v5[2 * v60 + 2440] = v30;
            v5[2 * v60 + 2441] = v31;
            v5[2 * v60 + 2442] = v32;
          }
          goto LABEL_71;
        }
        v5[18 * v39 + 2435] = 2;
      }
      v22 = v5 + 2436;
LABEL_71:
      v20 = v5[1473];
      v21 = v114 + 5;
      ++LODWORD(v107);
      v114 += 5;
    }
    while ( SLODWORD(v107) < v20 );
  }
  v62 = 0;
  if ( v20 > 0 )
  {
    v63 = v5 + 2436;
    v64 = v5 + 1477;
    do
    {
      v65 = *(v64 - 3);
      v66 = 0;
      v67 = *(v64 - 2);
      v68 = v63;
      LODWORD(v69) = v5[23 * v65 + 18];
      LODWORD(v70) = v5[23 * v65 + 19];
      v71 = *(float *)&v5[23 * v65 + 20];
      v107 = v69;
      v125 = __PAIR64__(LODWORD(v70), LODWORD(v69));
      v100 = LODWORD(v70);
      v103 = v71;
      *(float *)&v126 = v71;
      v72 = *(float *)&v5[23 * v67 + 18];
      v73 = *(float *)&v5[23 * v67 + 19];
      v74 = *(float *)&v5[23 * v67 + 20];
      v75 = 0;
      *((float *)&v126 + 1) = v72;
      v127 = v73;
      v128 = v74;
      while ( (int)*(v68 - 1) <= 0 || *v68 != (_DWORD)v65 || v68[1] || v68[2] || v68[3] )
      {
        ++v66;
        ++v75;
        v68 += 18;
        if ( v75 >= 64 )
        {
          v66 = -1;
          break;
        }
      }
      v76 = 0;
      v77 = v63;
      v78 = 0;
      while ( (int)*(v77 - 1) <= 0 || *v77 != (_DWORD)v67 || v77[1] || v77[2] || v77[3] )
      {
        ++v76;
        ++v78;
        v77 += 18;
        if ( v78 >= 64 )
        {
          v76 = -1;
          break;
        }
      }
      if ( v66 != -1 )
      {
        LODWORD(v69) = v5[18 * v66 + 2440];
        LODWORD(v70) = v5[18 * v66 + 2441];
        v71 = *(float *)&v5[18 * v66 + 2442];
        v107 = v69;
        v125 = __PAIR64__(LODWORD(v70), LODWORD(v69));
        v100 = LODWORD(v70);
        v103 = v71;
        *(float *)&v126 = v71;
      }
      if ( v76 != -1 )
      {
        v72 = *(float *)&v5[18 * v76 + 2440];
        v73 = *(float *)&v5[18 * v76 + 2441];
        v74 = *(float *)&v5[18 * v76 + 2442];
        *((float *)&v126 + 1) = v72;
        v127 = v73;
        v128 = v74;
      }
      v79 = 0;
      if ( (int)a2[8193] > 0 )
      {
        v80 = a2 + 8194;
        do
        {
          v81 = 0;
          if ( *v80 == 3 )
          {
            v82 = sub_140035B70(
                    &v108,
                    (float *)&v101,
                    &v99,
                    (float *)&v125,
                    (float *)&v126 + 1,
                    0.0625,
                    (float *)&a2[4 * v80[1] + 2],
                    (__int64)&a2[4 * v80[2] + 2],
                    (__int64)&a2[4 * v80[3] + 2]);
            v2 = v99;
            v81 = v82 != 0;
          }
          if ( *v80 == 4
            && (v83 = sub_1400346F0(
                        &v108,
                        (float *)&v101,
                        &v99,
                        (float *)&v125,
                        (float *)&v126 + 1,
                        0.0625,
                        (float *)&a2[4 * v80[1] + 2],
                        (__int64)&a2[4 * v80[2] + 2],
                        (__int64)&a2[4 * v80[3] + 2],
                        (__int64)&a2[4 * v80[4] + 2]),
                v2 = v99,
                v83)
            || v81 )
          {
            v84 = *v64;
            v105 = 0;
            v106 = 0.0;
            v99 = 0.0625 - v2;
            v2 = 0.0625 - v2;
            sub_140005160(v84, (unsigned int *)&v105, (unsigned int *)&v101, v2, 0x3C23D70Au, 0.0625, 0x3E800000u);
          }
          ++v79;
          v80 += 8;
        }
        while ( v79 < a2[8193] );
        v69 = v107;
        LODWORD(v70) = v100;
        v71 = v103;
        v5 = i;
      }
      v85 = 0;
      if ( (int)a2[16386] > 0 )
      {
        v86 = a2 + 16387;
        do
        {
          if ( (unsigned int)sub_1400D6890(
                               (unsigned int)&v108,
                               (unsigned int)&v111,
                               (unsigned int)&v104,
                               (unsigned int)&v125,
                               (__int64)&v126 + 4,
                               (__int64)&a2[4 * *v86 + 2],
                               (__int64)&a2[4 * v86[1] + 2],
                               1031798784) )
          {
            v87 = v108 - v111;
            v88 = v109 - v112;
            v89 = v110 - v113;
            v90 = fsqrt((float)((float)(v88 * v88) + (float)(v87 * v87)) + (float)(v89 * v89));
            if ( v90 == 0.0 )
            {
              v101 = 0;
              v102 = 0.0;
            }
            else
            {
              *(float *)&v101 = (float)(1.0 / v90) * v87;
              *((float *)&v101 + 1) = (float)(1.0 / v90) * v88;
              v102 = (float)(1.0 / v90) * v89;
            }
            v91 = *v64;
            v2 = 0.0625 - v104;
            v99 = 0.0625 - v104;
            *(float *)&v105 = v108 - (float)((float)(v72 + v69) * 0.5);
            *((float *)&v105 + 1) = v109 - (float)((float)(v73 + v70) * 0.5);
            v106 = v110 - (float)((float)(v74 + v71) * 0.5);
            sub_140005160(
              v91,
              (unsigned int *)&v105,
              (unsigned int *)&v101,
              0.0625 - v104,
              0x3C23D70Au,
              0.0625,
              0x3E800000u);
          }
          ++v85;
          v86 += 2;
        }
        while ( v85 < a2[16386] );
      }
      ++v62;
      v63 = v5 + 2436;
      v64 += 5;
    }
    while ( v62 < v5[1473] );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v93 ^ v131);
}

