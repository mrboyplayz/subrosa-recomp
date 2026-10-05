/* Address: 0x14005c520 | Name: sub_14005C520 | Size: 3080 bytes */
__int64 __fastcall sub_14005C520(int a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  int *v3; // r12
  float v4; // xmm7_4
  char *v5; // rax
  float v6; // xmm8_4
  int v7; // esi
  float v8; // xmm9_4
  __int64 v9; // r13
  float v10; // xmm10_4
  float v11; // xmm6_4
  float *v12; // r14
  float *v13; // r15
  __int64 v14; // rdi
  float *v15; // rbx
  float v16; // xmm1_4
  float v17; // xmm0_4
  unsigned int v18; // xmm1_4
  float v19; // xmm0_4
  unsigned int v20; // xmm1_4
  unsigned int v21; // xmm0_4
  __int64 v22; // rcx
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  int *v26; // r13
  float *v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  __int64 v30; // r13
  int v31; // edi
  __int64 v32; // r15
  int *v33; // r14
  int *v34; // r12
  int v35; // xmm6_4
  int *v36; // rbx
  __int64 v37; // r10
  __int64 v38; // rdx
  float v39; // xmm1_4
  float v40; // xmm0_4
  unsigned int v41; // xmm3_4
  unsigned int v42; // xmm4_4
  __int64 result; // rax
  __int64 v44; // r12
  int v45; // r15d
  unsigned __int64 v46; // rcx
  float *v47; // rdx
  int *v48; // r13
  float v49; // xmm7_4
  __int64 v50; // r14
  int *v51; // rsi
  float v52; // xmm8_4
  float *v53; // rcx
  int v54; // ebx
  float *v55; // rdi
  float v56; // xmm1_4
  float v57; // xmm0_4
  float v58; // xmm7_4
  unsigned int v59; // xmm0_4
  float v60; // xmm0_4
  float v61; // xmm8_4
  float v62; // xmm13_4
  float v63; // xmm7_4
  float v64; // xmm8_4
  float *v65; // rcx
  float v66; // xmm1_4
  float v67; // xmm0_4
  float v68; // xmm7_4
  float v69; // xmm0_4
  float v70; // xmm7_4
  float v71; // xmm0_4
  float v72; // xmm8_4
  float v73; // xmm0_4
  float v74; // xmm8_4
  float v75; // xmm3_4
  float v76; // xmm4_4
  float v77; // xmm5_4
  float v78; // xmm1_4
  float v79; // xmm0_4
  float v80; // xmm1_4
  float v81; // xmm2_4
  float v82; // xmm0_4
  __int64 v83; // r10
  __int64 v84; // rdx
  float v85; // xmm7_4
  float v86; // xmm0_4
  float v87; // xmm1_4
  unsigned int v88; // xmm7_4
  unsigned int v89; // xmm8_4
  char *v90; // [rsp+50h] [rbp-B0h]
  int *v91; // [rsp+50h] [rbp-B0h]
  float *v92; // [rsp+50h] [rbp-B0h]
  float v93; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v94; // [rsp+5Ch] [rbp-A4h]
  __int64 v95; // [rsp+68h] [rbp-98h] BYREF
  float v96; // [rsp+70h] [rbp-90h] BYREF
  float v97; // [rsp+78h] [rbp-88h] BYREF
  float v98; // [rsp+7Ch] [rbp-84h]
  float v99; // [rsp+80h] [rbp-80h]
  float v100; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v101; // [rsp+8Ch] [rbp-74h]
  float v102; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v103; // [rsp+9Ch] [rbp-64h]
  __int64 v104; // [rsp+A8h] [rbp-58h]
  float v105; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v106; // [rsp+B4h] [rbp-4Ch]
  float v107; // [rsp+BCh] [rbp-44h] BYREF
  unsigned __int64 v108; // [rsp+C0h] [rbp-40h]
  float v109; // [rsp+C8h] [rbp-38h] BYREF
  float v110; // [rsp+CCh] [rbp-34h]
  float v111; // [rsp+D0h] [rbp-30h]
  _DWORD v112[3]; // [rsp+D4h] [rbp-2Ch] BYREF
  unsigned __int64 v113; // [rsp+E0h] [rbp-20h] BYREF
  int v114; // [rsp+E8h] [rbp-18h]
  float *v115; // [rsp+F0h] [rbp-10h]
  float v116[6]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v117; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v118[2056]; // [rsp+118h] [rbp+18h] BYREF
  _DWORD v119[3]; // [rsp+920h] [rbp+820h] BYREF
  char v120; // [rsp+92Ch] [rbp+82Ch] BYREF
  int v121; // [rsp+C924h] [rbp+C824h]

  v1 = 28664LL * a1;
  v96 = *(float *)&a1;
  v119[0] = 0;
  v121 = 0;
  v115 = (float *)((char *)&unk_190941B94 + v1);
  v104 = v1;
  sub_1400E2D20(v119, (char *)dword_190941B88 + v1, (char *)&unk_190941B94 + v1, 4);
  v2 = v119[0];
  v3 = &dword_191041600;
  v4 = *((float *)&v106 + 1);
  v5 = (char *)dword_190941BE8 + v1;
  LODWORD(v6) = v106;
  v7 = 0;
  v8 = v105;
  v9 = 0;
  v90 = (char *)dword_190941BE8 + v1;
  do
  {
    if ( v7 != 12
      && v7 != 15
      && (v7 != 11 && v7 != 14
       || *(_DWORD *)&algn_190941A08[v1 + 24] == 2
       || *(int *)((char *)dword_190941A04 + v1) <= 0
       || *(int *)((char *)&unk_190948718 + v1) < 50) )
    {
      v10 = *(float *)v3;
      v11 = 65536.0;
      v110 = 65536.0;
      if ( v2 > 0 )
      {
        v12 = (float *)((char *)&unk_190941CFC + v1 + v9);
        v13 = (float *)((char *)&unk_190941CF0 + v1 + v9);
        v14 = (unsigned int)v2;
        v15 = (float *)&v120;
        do
        {
          v16 = *(v15 - 1);
          v116[0] = *(v15 - 2);
          v17 = *v15;
          v116[1] = v16;
          v18 = *((_DWORD *)v15 + 1);
          v116[2] = v17;
          v113 = __PAIR64__(*((_DWORD *)v15 + 2), v18);
          v19 = v15[4];
          v114 = *((_DWORD *)v15 + 3);
          v20 = *((_DWORD *)v15 + 5);
          v102 = v19;
          v103 = __PAIR64__(*((_DWORD *)v15 + 6), v20);
          v21 = *((_DWORD *)v15 + 8);
          v93 = v15[7];
          v94 = __PAIR64__(*((_DWORD *)v15 + 9), v21);
          if ( (unsigned int)sub_140025D20(
                               &v100,
                               &v93,
                               (float *)&v95,
                               v13,
                               v12,
                               v10,
                               v116,
                               (__int64)&v113,
                               (__int64)&v102)
            && v11 > *(float *)&v95 )
          {
            v11 = *(float *)&v95;
            v8 = v100;
            LODWORD(v6) = v101;
            v4 = *((float *)&v101 + 1);
            v107 = v93;
            v108 = v94;
          }
          v15 += 12;
          --v14;
        }
        while ( v14 );
        v5 = v90;
        v110 = v11;
        v106 = __PAIR64__(LODWORD(v4), LODWORD(v6));
        v105 = v8;
        if ( v11 < 65536.0 )
        {
          v22 = *(int *)v90;
          v23 = *(float *)v3 - v11;
          v24 = v6 - *((float *)&unk_140249618 + 47 * v22 + 1);
          v97 = v8 - *((float *)&unk_140249618 + 47 * v22);
          v25 = v4 - *((float *)&unk_140249618 + 47 * v22 + 2);
          v98 = v24;
          v99 = v25;
          sub_140002AE0(v22, &v97, &v107, v23, 1053609165, 0.03125, 1031798784);
          v5 = v90;
        }
        v2 = v119[0];
        v1 = v104;
      }
    }
    v5 += 312;
    ++v7;
    v9 += 312;
    v90 = v5;
    v3 += 25;
  }
  while ( v7 < 16 );
  sub_1400288C0((int *)&v117, (int *)((char *)&unk_190941BA0 + v1), (int *)((char *)&unk_190941BAC + v1));
  if ( (int)v117 > 0 )
  {
    v26 = (int *)v118;
    v27 = v115;
    v91 = (int *)v118;
    v28 = v117;
    v95 = v117;
    do
    {
      v29 = 7040LL * *v26;
      if ( *(float *)((char *)&unk_19025F1C4 + v29) <= *v27
        && *(float *)((char *)&unk_19025F1D0 + v29) >= *(float *)((char *)dword_190941B88 + v1)
        && *(float *)((char *)&unk_19025F1CC + v29) <= v27[2]
        && *(float *)((char *)&unk_19025F1D8 + v29) >= *(float *)((char *)dword_190941B90 + v1)
        && *(float *)((char *)&unk_19025F1C8 + v29) <= v27[1]
        && *(float *)((char *)&unk_19025F1D4 + v29) >= *(float *)((char *)dword_190941B8C + v1) )
      {
        v30 = v104;
        v31 = 0;
        v32 = 0;
        v33 = &dword_191041600;
        v34 = (int *)((char *)dword_190941BE8 + v1);
        do
        {
          if ( v31 == 7 || (unsigned int)v31 <= 4 || (unsigned int)v31 >= 0xA )
          {
            v35 = *v33;
            v36 = &dword_190122FC8[1268 * dword_19025F0D4[v29 / 4]];
            sub_1400B3920(
              v119,
              v36,
              (char *)&unk_140249618 + 188 * dword_19025F118[v29 / 4],
              (char *)&unk_14024963C + 188 * dword_19025F118[v29 / 4]);
            if ( sub_140024270(
                   &v105,
                   (__int64)v36,
                   (__int64)v119,
                   (int)&unk_190941CF0 + v32 + v30,
                   (__int64)&unk_190941CFC + v32 + v30,
                   v35) )
            {
              v37 = *v34;
              v38 = dword_19025F118[v29 / 4];
              v100 = v107;
              v101 = v108;
              v102 = v105;
              v103 = v106;
              v39 = *(float *)&v106 - *((float *)&unk_140249618 + 47 * v37 + 1);
              v97 = v105 - *((float *)&unk_140249618 + 47 * v37);
              v99 = *((float *)&v106 + 1) - *((float *)&unk_140249618 + 47 * v37 + 2);
              v40 = *(float *)v33 - v110;
              v98 = v39;
              *(float *)&v41 = *(float *)&v106 - *((float *)&unk_140249618 + 47 * v38 + 1);
              *(float *)&v42 = *((float *)&v106 + 1) - *((float *)&unk_140249618 + 47 * v38 + 2);
              v93 = v105 - *((float *)&unk_140249618 + 47 * v38);
              v94 = __PAIR64__(v42, v41);
              sub_140002C40(v37, v38, &v97, &v93, &v100, v40, 1053609165, 0.0625, 1040187392);
              *(_QWORD *)&dword_19025F0C8[v29 / 4] = 0;
            }
          }
          ++v31;
          v32 += 312;
          v34 += 78;
          v33 += 25;
        }
        while ( v31 < 16 );
        v26 = v91;
        v28 = v95;
        v1 = v104;
        v27 = v115;
      }
      v26 += 2;
      --v28;
      v91 = v26;
      v95 = v28;
    }
    while ( v28 );
  }
  result = (unsigned int)(LODWORD(v96) + 1);
  if ( (int)result < 256LL )
  {
    v44 = 7166LL * (int)result;
    do
    {
      if ( dword_1909419C8[v44]
        && dword_1909419F0[v44] == -1
        && *(float *)&dword_190941B88[v44] <= *v115
        && *(float *)((char *)&unk_190941B94 + v44 * 4) >= *(float *)((char *)dword_190941B88 + v1)
        && *(float *)&dword_190941B90[v44] <= v115[2]
        && *(float *)((char *)&unk_190941B9C + v44 * 4) >= *(float *)((char *)dword_190941B90 + v1)
        && *(float *)&dword_190941B8C[v44] <= v115[1]
        && *(float *)((char *)&unk_190941B98 + v44 * 4) >= *(float *)((char *)dword_190941B8C + v1) )
      {
        v45 = 0;
        v46 = 0;
        LODWORD(v95) = 0;
        v47 = (float *)((char *)dword_190941BF4 + v1);
        v113 = 0;
        v92 = (float *)((char *)dword_190941BF4 + v1);
        v48 = dword_1910415F8;
        do
        {
          if ( v45 == 13 || (unsigned int)v45 <= 0xA || (unsigned int)v45 >= 0x10 )
          {
            v49 = *((float *)v48 + 1) * -0.5;
            v50 = 0;
            v51 = dword_1910415F8;
            v52 = *((float *)v48 + 1) * 0.5;
            result = 3 * (v46 + *v48);
            v53 = (float *)((char *)&xmmword_190941C1C + 12 * v46 + 12 * *v48 + v1);
            v54 = 0;
            v55 = (float *)&dword_190941BF4[v44];
            v56 = (float)(v52 * v53[1]) + *(v47 - 1);
            v105 = (float)(v49 * *v53) + *(v47 - 2);
            v57 = v49 * v53[1];
            v58 = v49 * v53[2];
            *(float *)&v59 = v57 + *(v47 - 1);
            *(float *)&v108 = v56;
            v106 = __PAIR64__(v58 + *v47, v59);
            v60 = v52 * *v53;
            v61 = (float)(v52 * v53[2]) + *v47;
            v107 = v60 + *(v47 - 2);
            *((float *)&v108 + 1) = v61;
            do
            {
              if ( v54 == 13 || (unsigned int)v54 <= 0xA || (unsigned int)v54 >= 0x10 )
              {
                v62 = *((float *)v48 + 2) + *((float *)v51 + 2);
                v63 = *((float *)v51 + 1) * -0.5;
                v64 = *((float *)v51 + 1) * 0.5;
                v65 = (float *)((char *)&xmmword_190941C1C + 12 * v50 + 12 * *v51 + v44 * 4);
                v66 = (float)(v64 * v65[1]) + *(v55 - 1);
                v109 = (float)(v63 * *v65) + *(v55 - 2);
                v67 = v63 * v65[1];
                v68 = v63 * v65[2];
                v69 = v67 + *(v55 - 1);
                *(float *)&v112[1] = v66;
                v70 = v68 + *v55;
                v110 = v69;
                v71 = v64 * *v65;
                v72 = v64 * v65[2];
                v73 = v71 + *(v55 - 2);
                v111 = v70;
                v74 = v72 + *v55;
                *(float *)v112 = v73;
                *(float *)&v112[2] = v74;
                result = sub_14007D360(
                           (unsigned int)&v102,
                           (unsigned int)&v100,
                           (unsigned int)&v96,
                           (unsigned int)&v105,
                           (__int64)&v107,
                           (__int64)&v109,
                           (__int64)v112,
                           LODWORD(v62));
                if ( (_DWORD)result )
                {
                  v75 = v100 - v102;
                  v76 = *(float *)&v101 - *(float *)&v103;
                  v77 = *((float *)&v101 + 1) - *((float *)&v103 + 1);
                  v78 = fsqrt((float)((float)(v76 * v76) + (float)(v75 * v75)) + (float)(v77 * v77));
                  if ( v78 == 0.0 )
                  {
                    v80 = 0.0;
                    v81 = 0.0;
                    v82 = 0.0;
                  }
                  else
                  {
                    v79 = 1.0 / v78;
                    v80 = (float)(1.0 / v78) * v75;
                    v81 = v79 * v76;
                    v82 = v79 * v77;
                  }
                  v83 = *((int *)v55 - 3);
                  v84 = *((int *)v92 - 3);
                  dword_16E18CA54 = LODWORD(v82);
                  v85 = (float)(*(float *)&v101 + *(float *)&v103) * 0.5;
                  *(float *)&qword_16E18CA4C = v80;
                  unk_16E18CA40 = (float)(v100 + v102) * 0.5;
                  v86 = unk_16E18CA40 - *((float *)&unk_140249618 + 47 * v83);
                  *(float *)&qword_16E18CA44 = v85;
                  v87 = v85 - *((float *)&unk_140249618 + 47 * v83 + 1);
                  *((float *)&qword_16E18CA44 + 1) = (float)(*((float *)&v101 + 1) + *((float *)&v103 + 1)) * 0.5;
                  *((float *)&qword_16E18CA4C + 1) = v81;
                  v97 = v86;
                  v99 = *((float *)&qword_16E18CA44 + 1) - *((float *)&unk_140249618 + 47 * v83 + 2);
                  v98 = v87;
                  *(float *)&v88 = v85 - *((float *)&unk_140249618 + 47 * v84 + 1);
                  *(float *)&v89 = *((float *)&qword_16E18CA44 + 1) - *((float *)&unk_140249618 + 47 * v84 + 2);
                  v93 = unk_16E18CA40 - *((float *)&unk_140249618 + 47 * v84);
                  v94 = __PAIR64__(v89, v88);
                  result = sub_140002C40(
                             v83,
                             v84,
                             &v97,
                             &v93,
                             &qword_16E18CA4C,
                             v62 - v96,
                             1053609165,
                             0.03125,
                             1031798784);
                }
              }
              ++v54;
              v50 += 26;
              v51 += 25;
              v55 += 78;
            }
            while ( v54 < 16 );
            v45 = v95;
            v47 = v92;
            v46 = v113;
            v1 = v104;
          }
          ++v45;
          v46 += 26LL;
          v47 += 78;
          LODWORD(v95) = v45;
          v48 += 25;
          v113 = v46;
          v92 = v47;
        }
        while ( v45 < 16 );
      }
      v44 += 7166;
    }
    while ( v44 < 1834496 );
  }
  return result;
}

