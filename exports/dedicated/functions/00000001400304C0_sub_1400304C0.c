/* Address: 0x1400304c0 | Name: sub_1400304C0 | Size: 3716 bytes */
__int64 __fastcall sub_1400304C0(int *a1, _DWORD *a2)
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
  __int64 result; // rax
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
  __int64 v77; // rcx
  int v78; // r14d
  _DWORD *v79; // rdi
  BOOL v80; // esi
  int v81; // ecx
  int v82; // esi
  int *v83; // rdi
  float v84; // xmm3_4
  float v85; // xmm4_4
  float v86; // xmm5_4
  float v87; // xmm0_4
  int v88; // ecx
  float v89; // [rsp+58h] [rbp-B0h] BYREF
  int v90; // [rsp+5Ch] [rbp-ACh]
  __int64 v91; // [rsp+60h] [rbp-A8h] BYREF
  float v92; // [rsp+68h] [rbp-A0h]
  float v93; // [rsp+70h] [rbp-98h] BYREF
  float v94; // [rsp+74h] [rbp-94h] BYREF
  __int64 v95; // [rsp+78h] [rbp-90h] BYREF
  float v96; // [rsp+80h] [rbp-88h]
  int v97; // [rsp+88h] [rbp-80h]
  float v98; // [rsp+90h] [rbp-78h] BYREF
  float v99; // [rsp+94h] [rbp-74h]
  float v100; // [rsp+98h] [rbp-70h]
  float v101; // [rsp+A0h] [rbp-68h] BYREF
  float v102; // [rsp+A4h] [rbp-64h]
  float v103; // [rsp+A8h] [rbp-60h]
  _DWORD *v104; // [rsp+B0h] [rbp-58h]
  int v105; // [rsp+BCh] [rbp-4Ch]
  int v106; // [rsp+C0h] [rbp-48h]
  int *i; // [rsp+C8h] [rbp-40h]
  float v108[3]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v109; // [rsp+DCh] [rbp-2Ch]
  float v110; // [rsp+E4h] [rbp-24h]
  float v111; // [rsp+F8h] [rbp-10h] BYREF
  float v112; // [rsp+FCh] [rbp-Ch]
  float v113; // [rsp+100h] [rbp-8h]
  float v114; // [rsp+104h] [rbp-4h] BYREF
  float v115; // [rsp+108h] [rbp+0h]
  float v116; // [rsp+10Ch] [rbp+4h]
  _DWORD v117[3]; // [rsp+110h] [rbp+8h] BYREF
  _DWORD v118[3]; // [rsp+11Ch] [rbp+14h] BYREF

  v2 = v89;
  v3 = 0;
  v5 = a1;
  for ( i = a1; v3 < *v5; ++v3 )
  {
    v6 = 0;
    v7 = 23LL * v3;
    v8 = 0;
    v9 = v5 + 2436;
    v10 = *(float *)&v5[v7 + 21];
    v11 = v5[v7 + 22];
    v12 = v5[v7 + 23];
    v13 = *(float *)&v5[v7 + 18];
    v14 = *(float *)&v5[v7 + 19];
    v15 = *(float *)&v5[v7 + 20];
    v94 = v10;
    v111 = v10;
    v90 = v11;
    v112 = *(float *)&v11;
    v113 = *(float *)&v12;
    v114 = v13;
    v115 = v14;
    v116 = v15;
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
    v10 = *(float *)&v5[18 * v6 + 2440];
    v11 = v5[18 * v6 + 2441];
    v12 = v5[18 * v6 + 2442];
    v94 = v10;
    v111 = v10;
    v90 = v11;
    v112 = *(float *)&v11;
    v113 = *(float *)&v12;
LABEL_10:
    if ( (unsigned int)sub_140080E00(v108, a2, &v111, &v114) )
    {
      v91 = v109;
      v92 = v110;
      v2 = (float)((float)((float)(v108[1] - v14) * *((float *)&v109 + 1))
                 + (float)((float)(v108[0] - v13) * *(float *)&v109))
         + (float)((float)(v108[2] - v15) * v110);
      v89 = v2;
      if ( v2 < 0.0625 )
      {
        v89 = 0.0625;
        v2 = 0.0625;
      }
      v16 = 0;
      v95 = 0;
      v96 = 0.0;
      if ( v5[v7 + 1] > 0 )
      {
        v17 = &v5[v7 + 2];
        do
        {
          sub_140002AE0(*v17, &v95, &v91, v2, 1008981770, 0.0625, 1048576000);
          ++v16;
          v17 += 4;
        }
        while ( v16 < v5[v7 + 1] );
        v10 = v94;
        v11 = v90;
      }
      if ( (_DWORD)v6 == -1 )
      {
        v18 = sub_140033130(v5);
        if ( v18 != -1 )
        {
          v19 = 9LL * v18;
          v5[2 * v19 + 2435] = 2;
          v5[2 * v19 + 2436] = v3;
          *(_QWORD *)&v5[2 * v19 + 2437] = 0;
          v5[2 * v19 + 2439] = 0;
          *(float *)&v5[2 * v19 + 2440] = v10;
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
  result = (unsigned int)v5[1473];
  *(float *)&v97 = 0.0;
  if ( (int)result > 0 )
  {
    v21 = v5 + 1475;
    v22 = v5 + 2436;
    v104 = v5 + 1475;
    do
    {
      v23 = *(v21 - 1);
      v24 = v22;
      v25 = *v21;
      v26 = v5[23 * v23 + 21];
      v27 = v5[23 * v23 + 22];
      v28 = v5[23 * v23 + 23];
      v111 = *(float *)&v26;
      v112 = *(float *)&v27;
      v113 = *(float *)&v28;
      v105 = v23;
      v106 = v25;
      v29 = v5[23 * v25 + 19];
      v30 = v5[23 * v25 + 21];
      v31 = v5[23 * v25 + 22];
      v32 = v5[23 * v25 + 23];
      v117[0] = v5[23 * v25 + 18];
      v33 = v5[23 * v25 + 20];
      v117[1] = v29;
      v34 = v5[23 * v23 + 18];
      v117[2] = v33;
      v35 = v5[23 * v23 + 19];
      v118[0] = v34;
      v36 = v5[23 * v23 + 20];
      *(float *)&v37 = 0.0;
      *(float *)&v90 = 0.0;
      v38 = 0;
      v114 = *(float *)&v30;
      v115 = *(float *)&v31;
      v116 = *(float *)&v32;
      v118[1] = v35;
      v118[2] = v36;
      while ( (int)*(v24 - 1) <= 0 || *v24 != (_DWORD)v23 || v24[1] || v24[2] || v24[3] )
      {
        ++v37;
        ++v38;
        v24 += 18;
        v90 = v37;
        if ( v38 >= 64 )
        {
          *(float *)&v37 = NAN;
          *(float *)&v90 = NAN;
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
      if ( *(float *)&v37 != NAN )
      {
        v26 = v5[18 * v37 + 2440];
        v27 = v5[18 * v37 + 2441];
        v28 = v5[18 * v37 + 2442];
        v111 = *(float *)&v26;
        v112 = *(float *)&v27;
        v113 = *(float *)&v28;
      }
      if ( v39 != -1 )
      {
        v30 = v5[18 * v39 + 2440];
        v31 = v5[18 * v39 + 2441];
        v32 = v5[18 * v39 + 2442];
        v114 = *(float *)&v30;
        v115 = *(float *)&v31;
        v116 = *(float *)&v32;
      }
      v42 = 0;
      v43 = 65536.0;
      v94 = 65536.0;
      if ( (int)a2[16386] <= 0 )
        goto LABEL_71;
      v44 = a2 + 16387;
      v45 = 0;
      do
      {
        if ( (unsigned int)sub_1400E1F60(
                             (unsigned int)&v98,
                             (unsigned int)&v111,
                             (unsigned int)&v114,
                             (unsigned int)v117,
                             (__int64)v118,
                             (__int64)&a2[4 * *v44 + 2],
                             (__int64)&a2[4 * v44[1] + 2]) )
        {
          v46 = (__int64)&a2[4 * v44[1] + 2];
          v47 = (__int64)&a2[4 * *v44 + 2];
          if ( (unsigned int)sub_14007D360(
                               (unsigned int)&v98,
                               (unsigned int)&v101,
                               (unsigned int)&v93,
                               (unsigned int)&v111,
                               (__int64)&v114,
                               v47,
                               v46,
                               1115684864) )
          {
            if ( v43 > v93 )
            {
              v45 = 1;
              v48 = v98 - v101;
              v49 = v99 - v102;
              v50 = v100 - v103;
              v2 = fsqrt((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50));
              v89 = v2;
              if ( v2 == 0.0 )
              {
                v91 = 0;
                v92 = 0.0;
              }
              else
              {
                *(float *)&v91 = (float)(1.0 / v2) * v48;
                *((float *)&v91 + 1) = (float)(1.0 / v2) * v49;
                v92 = (float)(1.0 / v2) * v50;
              }
              if ( (unsigned int)sub_14007D360(
                                   (unsigned int)&v98,
                                   (unsigned int)&v101,
                                   (unsigned int)&v93,
                                   (unsigned int)v117,
                                   (__int64)v118,
                                   v47,
                                   v46,
                                   1115684864) )
              {
                v51 = v101 - v98;
                v52 = v102 - v99;
                v53 = v103 - v100;
                *(float *)&v95 = v101 - v98;
                *((float *)&v95 + 1) = v102 - v99;
                v96 = v103 - v100;
                v2 = fsqrt((float)((float)(v52 * v52) + (float)(v51 * v51)) + (float)(v53 * v53));
                v89 = v2;
                if ( v2 == 0.0 )
                {
                  v91 = 0;
                  v92 = 0.0;
                }
                else
                {
                  *(float *)&v91 = (float)(1.0 / v2) * v51;
                  *((float *)&v91 + 1) = (float)(1.0 / v2) * v52;
                  v92 = (float)(1.0 / v2) * v53;
                }
              }
              v43 = v93;
            }
          }
        }
        ++v42;
        v44 += 2;
      }
      while ( v42 < a2[16386] );
      v54 = v45 == 0;
      v94 = v43;
      v5 = i;
      if ( !v54 )
      {
        if ( v2 < 0.0625 )
        {
          v89 = 0.0625;
          v2 = 0.0625;
        }
        v55 = v104[2];
        v95 = 0;
        v96 = 0.0;
        sub_140002AE0(v55, &v95, &v91, v2, 1008981770, 0.0625, 1048576000);
        if ( *(float *)&v90 == NAN )
        {
          v56 = sub_140033130(v5);
          if ( v56 != -1 )
          {
            v57 = 9LL * v56;
            v58 = v105;
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
          v5[18 * v90 + 2435] = 2;
        }
        if ( v39 == -1 )
        {
          v59 = sub_140033130(v5);
          v22 = v5 + 2436;
          if ( v59 != -1 )
          {
            v60 = 9LL * v59;
            v61 = v106;
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
      result = (unsigned int)v5[1473];
      v21 = v104 + 5;
      ++v97;
      v104 += 5;
    }
    while ( v97 < (int)result );
  }
  v62 = 0;
  if ( (int)result > 0 )
  {
    v63 = v5 + 2436;
    v64 = v5 + 1477;
    do
    {
      v65 = *(v64 - 3);
      v66 = 0;
      v67 = *(v64 - 2);
      v68 = v63;
      v69 = *(float *)&v5[23 * v65 + 18];
      v70 = *(float *)&v5[23 * v65 + 19];
      v71 = *(float *)&v5[23 * v65 + 20];
      *(float *)&v97 = v69;
      v111 = v69;
      *(float *)&v90 = v70;
      v112 = v70;
      v93 = v71;
      v113 = v71;
      v72 = *(float *)&v5[23 * v67 + 18];
      v73 = *(float *)&v5[23 * v67 + 19];
      v74 = *(float *)&v5[23 * v67 + 20];
      v75 = 0;
      v114 = v72;
      v115 = v73;
      v116 = v74;
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
      result = (__int64)v63;
      v77 = 0;
      while ( *(int *)(result - 4) <= 0
           || *(_DWORD *)result != (_DWORD)v67
           || *(_DWORD *)(result + 4)
           || *(_DWORD *)(result + 8)
           || *(_DWORD *)(result + 12) )
      {
        ++v76;
        ++v77;
        result += 72;
        if ( v77 >= 64 )
        {
          v76 = -1;
          break;
        }
      }
      if ( v66 != -1 )
      {
        result = v66;
        v69 = *(float *)&v5[18 * v66 + 2440];
        v70 = *(float *)&v5[18 * v66 + 2441];
        v71 = *(float *)&v5[18 * v66 + 2442];
        *(float *)&v97 = v69;
        v111 = v69;
        *(float *)&v90 = v70;
        v112 = v70;
        v93 = v71;
        v113 = v71;
      }
      if ( v76 != -1 )
      {
        result = v76;
        v72 = *(float *)&v5[18 * v76 + 2440];
        v73 = *(float *)&v5[18 * v76 + 2441];
        v74 = *(float *)&v5[18 * v76 + 2442];
        v114 = v72;
        v115 = v73;
        v116 = v74;
      }
      v78 = 0;
      if ( (int)a2[8193] > 0 )
      {
        v79 = a2 + 8194;
        do
        {
          v80 = 0;
          if ( *v79 == 3 )
          {
            result = sub_140026200(
                       &v98,
                       (float *)&v91,
                       &v89,
                       &v111,
                       &v114,
                       0.0625,
                       (float *)&a2[4 * v79[1] + 2],
                       (__int64)&a2[4 * v79[2] + 2],
                       (__int64)&a2[4 * v79[3] + 2]);
            v2 = v89;
            v80 = result != 0;
          }
          if ( *v79 == 4
            && (result = sub_140024D80(
                           &v98,
                           (float *)&v91,
                           &v89,
                           &v111,
                           &v114,
                           0.0625,
                           (float *)&a2[4 * v79[1] + 2],
                           (__int64)&a2[4 * v79[2] + 2],
                           (__int64)&a2[4 * v79[3] + 2],
                           (__int64)&a2[4 * v79[4] + 2]),
                v2 = v89,
                (_DWORD)result)
            || v80 )
          {
            v81 = *v64;
            v95 = 0;
            v96 = 0.0;
            v89 = 0.0625 - v2;
            v2 = 0.0625 - v2;
            result = sub_140002AE0(v81, &v95, &v91, v2, 1008981770, 0.0625, 1048576000);
          }
          ++v78;
          v79 += 8;
        }
        while ( v78 < a2[8193] );
        v69 = *(float *)&v97;
        v70 = *(float *)&v90;
        v71 = v93;
        v5 = i;
      }
      v82 = 0;
      if ( (int)a2[16386] > 0 )
      {
        v83 = a2 + 16387;
        do
        {
          result = sub_14007D360(
                     (unsigned int)&v98,
                     (unsigned int)&v101,
                     (unsigned int)&v94,
                     (unsigned int)&v111,
                     (__int64)&v114,
                     (__int64)&a2[4 * *v83 + 2],
                     (__int64)&a2[4 * v83[1] + 2],
                     1031798784);
          if ( (_DWORD)result )
          {
            v84 = v98 - v101;
            v85 = v99 - v102;
            v86 = v100 - v103;
            v87 = fsqrt((float)((float)(v85 * v85) + (float)(v84 * v84)) + (float)(v86 * v86));
            if ( v87 == 0.0 )
            {
              v91 = 0;
              v92 = 0.0;
            }
            else
            {
              *(float *)&v91 = (float)(1.0 / v87) * v84;
              *((float *)&v91 + 1) = (float)(1.0 / v87) * v85;
              v92 = (float)(1.0 / v87) * v86;
            }
            v88 = *v64;
            v2 = 0.0625 - v94;
            v89 = 0.0625 - v94;
            *(float *)&v95 = v98 - (float)((float)(v72 + v69) * 0.5);
            *((float *)&v95 + 1) = v99 - (float)((float)(v73 + v70) * 0.5);
            v96 = v100 - (float)((float)(v74 + v71) * 0.5);
            result = sub_140002AE0(v88, &v95, &v91, 0.0625 - v94, 1008981770, 0.0625, 1048576000);
          }
          ++v82;
          v83 += 2;
        }
        while ( v82 < a2[16386] );
      }
      ++v62;
      v63 = v5 + 2436;
      v64 += 5;
    }
    while ( v62 < v5[1473] );
  }
  return result;
}

