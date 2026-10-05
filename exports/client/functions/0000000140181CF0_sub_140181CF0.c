/* Address: 0x140181cf0 | Name: sub_140181CF0 | Size: 1565 bytes */
__int64 __fastcall sub_140181CF0(
        __int64 a1,
        __int64 a2,
        int *a3,
        unsigned int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  int *v12; // rdi
  float v13; // xmm6_4
  __int64 v14; // r15
  __int64 v15; // rbx
  int v16; // esi
  int v17; // r9d
  __int64 v18; // rcx
  __m128i v19; // xmm2
  __m128i v20; // xmm1
  signed __int64 v21; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm1
  int v26; // edx
  int v27; // r8d
  char *v28; // r12
  int v29; // ecx
  unsigned int v30; // r14d
  __int64 v31; // rsi
  int v32; // r13d
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r15d
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rbx
  char *v39; // rcx
  float *v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // r12
  float v43; // xmm0_4
  __int64 v44; // r10
  float v45; // xmm2_4
  int v46; // eax
  bool v47; // cf
  bool v48; // zf
  float v49; // xmm1_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  float v52; // xmm3_4
  __int64 v53; // rdx
  __int64 v54; // r10
  __int64 v55; // r11
  int v56; // eax
  bool v57; // cf
  bool v58; // zf
  float v59; // xmm1_4
  float v60; // xmm0_4
  float v61; // xmm1_4
  float v62; // xmm2_4
  __int64 v63; // r10
  int v64; // eax
  bool v65; // cf
  bool v66; // zf
  float v67; // xmm1_4
  float v68; // xmm0_4
  float v69; // xmm1_4
  float v70; // xmm0_4
  __int64 v71; // r10
  __int64 v72; // r11
  int v73; // eax
  bool v74; // cf
  bool v75; // zf
  float v76; // xmm1_4
  float v77; // xmm0_4
  float v78; // xmm1_4
  __int64 v79; // r11
  float *v80; // rcx
  float v81; // xmm0_4
  __int64 v82; // r10
  float v83; // xmm1_4
  int v84; // eax
  bool v85; // cf
  bool v86; // zf
  float v87; // xmm1_4
  float v88; // xmm0_4
  float v89; // xmm1_4
  __int64 v90; // r10
  char *v91; // r11
  __int128 v92; // xmm2
  int v93; // r8d
  char *v94; // rcx
  __int64 v95; // rdx
  float v96; // xmm1_4
  int v97; // eax
  __int64 v98; // rax
  _QWORD v100[8]; // [rsp+0h] [rbp-E8h] BYREF
  int v101; // [rsp+40h] [rbp-A8h]
  int *v102; // [rsp+48h] [rbp-A0h]
  __int64 v103; // [rsp+50h] [rbp-98h]
  __int64 v104; // [rsp+58h] [rbp-90h]
  __int64 v105; // [rsp+60h] [rbp-88h]
  __int64 v106; // [rsp+68h] [rbp-80h]
  __int128 v107; // [rsp+70h] [rbp-78h]
  __int64 v108; // [rsp+88h] [rbp-60h]

  v12 = a3;
  v13 = a6;
  v14 = a2;
  v15 = a4;
  v16 = a1;
  v102 = a3;
  v105 = a2;
  v106 = a1;
  if ( a11 )
    v13 = -a6;
  v17 = 0;
  LODWORD(v18) = 0;
  if ( (int)v15 >= 8 )
  {
    v19 = 0;
    v20 = 0;
    v21 = 0;
    do
    {
      LODWORD(v18) = v18 + 8;
      v19 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&a3[v21]), v19);
      v22 = _mm_loadu_si128((const __m128i *)&a3[v21 + 4]);
      v21 += 8LL;
      v23 = _mm_add_epi32(v22, v20);
      v20 = v23;
    }
    while ( v21 < (__int64)((int)v15 & 0xFFFFFFFFFFFFFFF8uLL) );
    v24 = _mm_add_epi32(v23, v19);
    v25 = _mm_add_epi32(v24, _mm_srli_si128(v24, 8));
    v17 = _mm_cvtsi128_si32(_mm_add_epi32(v25, _mm_srli_si128(v25, 4)));
  }
  v26 = 0;
  v18 = (int)v18;
  v27 = 0;
  if ( (int)v18 < (__int64)(int)v15 )
  {
    if ( (int)v15 - (__int64)(int)v18 < 2 )
      goto LABEL_11;
    do
    {
      v26 += v12[v18];
      v27 += v12[v18 + 1];
      v18 += 2;
    }
    while ( v18 < (int)v15 - 1LL );
    if ( v18 < (int)v15 )
LABEL_11:
      v17 += v12[v18];
    v17 += v27 + v26;
  }
  v104 = j__malloc_base(20LL * (v17 + 1));
  v28 = (char *)v104;
  if ( !v104 )
    return MEMORY[0x1401F8B20]((unsigned __int64)v100 ^ v108);
  v29 = 0;
  v30 = 0;
  if ( (int)v15 <= 0 )
    goto LABEL_63;
  v31 = 0;
  v103 = v15;
  do
  {
    v32 = 0;
    v33 = 0;
    v34 = v14 + 8LL * v29;
    v35 = *v12;
    v29 += *v12;
    v101 = v29;
    v36 = v35 - 1;
    if ( v35 < 4 )
    {
      if ( v35 <= 0 )
        goto LABEL_61;
      v37 = v36;
    }
    else
    {
      v37 = v36;
      v38 = 2;
      v39 = &v28[20 * v31];
      v40 = (float *)(v34 + 20);
      v41 = ((unsigned int)(v35 - 4) >> 2) + 1;
      v42 = v41;
      v32 = 4 * v41;
      do
      {
        v43 = *(float *)(v34 + 8 * v37 + 4);
        v44 = v33;
        v45 = *(v40 - 4);
        if ( v43 != v45 )
        {
          v46 = 0;
          *((_DWORD *)v39 + 4) = 0;
          if ( a11 )
          {
            v47 = v43 < v45;
            v48 = v43 == v45;
          }
          else
          {
            v47 = v45 < v43;
            v48 = v45 == v43;
          }
          LOBYTE(v46) = !v47 && !v48;
          if ( v46 )
          {
            v44 = v37;
            *((_DWORD *)v39 + 4) = 1;
            v37 = v33;
          }
          ++v30;
          ++v31;
          v49 = (float)(v13 * *(float *)(v34 + 8 * v44 + 4)) + a8;
          *(float *)v39 = (float)(a5 * *(float *)(v34 + 8 * v44)) + a7;
          v50 = a5 * *(float *)(v34 + 8 * v37);
          *((float *)v39 + 1) = v49;
          v51 = (float)(v13 * *(float *)(v34 + 8 * v37 + 4)) + a8;
          *((float *)v39 + 2) = v50 + a7;
          *((float *)v39 + 3) = v51;
          v39 += 20;
        }
        v52 = *(v40 - 2);
        v53 = v38 - 1;
        v54 = v38 - 1;
        v55 = v33;
        if ( v45 != v52 )
        {
          v56 = 0;
          *((_DWORD *)v39 + 4) = 0;
          if ( a11 )
          {
            v57 = v45 < v52;
            v58 = v45 == v52;
          }
          else
          {
            v57 = v52 < v45;
            v58 = v52 == v45;
          }
          LOBYTE(v56) = !v57 && !v58;
          if ( v56 )
          {
            *((_DWORD *)v39 + 4) = 1;
            v54 = v33;
            v55 = v38 - 1;
          }
          ++v30;
          ++v31;
          v59 = (float)(v13 * *(float *)(v34 + 8 * v54 + 4)) + a8;
          *(float *)v39 = (float)(a5 * *(float *)(v34 + 8 * v54)) + a7;
          v60 = a5 * *(float *)(v34 + 8 * v55);
          *((float *)v39 + 1) = v59;
          v61 = (float)(v13 * *(float *)(v34 + 8 * v55 + 4)) + a8;
          *((float *)v39 + 2) = v60 + a7;
          *((float *)v39 + 3) = v61;
          v39 += 20;
        }
        v62 = *v40;
        v63 = v38;
        if ( v52 != *v40 )
        {
          v64 = 0;
          *((_DWORD *)v39 + 4) = 0;
          if ( a11 )
          {
            v65 = v52 < v62;
            v66 = v52 == v62;
          }
          else
          {
            v65 = v62 < v52;
            v66 = v62 == v52;
          }
          LOBYTE(v64) = !v65 && !v66;
          if ( v64 )
          {
            v63 = v38 - 1;
            *((_DWORD *)v39 + 4) = 1;
            v53 = v38;
          }
          ++v30;
          ++v31;
          v67 = (float)(v13 * *(float *)(v34 + 8 * v63 + 4)) + a8;
          *(float *)v39 = (float)(a5 * *(float *)(v34 + 8 * v63)) + a7;
          v68 = a5 * *(float *)(v34 + 8 * v53);
          *((float *)v39 + 1) = v67;
          v69 = (float)(v13 * *(float *)(v34 + 8 * v53 + 4)) + a8;
          *((float *)v39 + 2) = v68 + a7;
          *((float *)v39 + 3) = v69;
          v39 += 20;
        }
        v70 = v40[2];
        v37 = v38 + 1;
        v71 = v38 + 1;
        v72 = v38;
        if ( v62 != v70 )
        {
          v73 = 0;
          *((_DWORD *)v39 + 4) = 0;
          if ( a11 )
          {
            v74 = v62 < v70;
            v75 = v62 == v70;
          }
          else
          {
            v74 = v70 < v62;
            v75 = v70 == v62;
          }
          LOBYTE(v73) = !v74 && !v75;
          if ( v73 )
          {
            *((_DWORD *)v39 + 4) = 1;
            v71 = v38;
            v72 = v38 + 1;
          }
          ++v30;
          ++v31;
          v76 = (float)(v13 * *(float *)(v34 + 8 * v71 + 4)) + a8;
          *(float *)v39 = (float)(a5 * *(float *)(v34 + 8 * v71)) + a7;
          v77 = a5 * *(float *)(v34 + 8 * v72);
          *((float *)v39 + 1) = v76;
          v78 = (float)(v13 * *(float *)(v34 + 8 * v72 + 4)) + a8;
          *((float *)v39 + 2) = v77 + a7;
          *((float *)v39 + 3) = v78;
          v39 += 20;
        }
        v33 += 4;
        v38 += 4;
        v40 += 8;
        --v42;
      }
      while ( v42 );
      v12 = v102;
      v28 = (char *)v104;
      v15 = v103;
      if ( v32 >= v35 )
        goto LABEL_60;
    }
    v79 = (unsigned int)(v35 - v32);
    v80 = (float *)&v28[16 * v31 + 16 + 4 * v31];
    do
    {
      v81 = *(float *)(v34 + 8 * v37 + 4);
      v82 = v33;
      v83 = *(float *)(v34 + 8 * v33 + 4);
      if ( v81 != v83 )
      {
        v84 = 0;
        *v80 = 0.0;
        if ( a11 )
        {
          v85 = v81 < v83;
          v86 = v81 == v83;
        }
        else
        {
          v85 = v83 < v81;
          v86 = v83 == v81;
        }
        LOBYTE(v84) = !v85 && !v86;
        if ( v84 )
        {
          v82 = v37;
          *(_DWORD *)v80 = 1;
          v37 = v33;
        }
        ++v30;
        ++v31;
        v87 = (float)(v13 * *(float *)(v34 + 8 * v82 + 4)) + a8;
        *(v80 - 4) = (float)(a5 * *(float *)(v34 + 8 * v82)) + a7;
        v88 = a5 * *(float *)(v34 + 8 * v37);
        *(v80 - 3) = v87;
        v89 = (float)(v13 * *(float *)(v34 + 8 * v37 + 4)) + a8;
        *(v80 - 2) = v88 + a7;
        *(v80 - 1) = v89;
        v80 += 5;
      }
      v37 = v33++;
      --v79;
    }
    while ( v79 );
LABEL_60:
    v29 = v101;
LABEL_61:
    v14 = v105;
    ++v12;
    --v15;
    v102 = v12;
    v103 = v15;
  }
  while ( v15 );
  v16 = v106;
LABEL_63:
  sub_140183BF0(v28, v30);
  if ( (int)v30 > 1LL )
  {
    v90 = 1;
    v91 = v28 + 20;
    do
    {
      v92 = *(_OWORD *)v91;
      v93 = *((_DWORD *)v91 + 4);
      v94 = v91 - 20;
      v95 = v90;
      v107 = *(_OWORD *)v91;
      v96 = *((float *)&v107 + 1);
      do
      {
        if ( v96 >= *((float *)v94 + 1) )
          break;
        v97 = *((_DWORD *)v94 + 4);
        --v95;
        *(_OWORD *)(v94 + 20) = *(_OWORD *)v94;
        *((_DWORD *)v94 + 9) = v97;
        v94 -= 20;
      }
      while ( v95 > 0 );
      if ( v90 != v95 )
      {
        v98 = 5 * v95;
        *(_OWORD *)&v28[4 * v98] = v92;
        *(_DWORD *)&v28[4 * v98 + 16] = v93;
      }
      ++v90;
      v91 += 20;
    }
    while ( v90 < (int)v30 );
  }
  v100[6] = a12;
  sub_140182310(v16, (_DWORD)v28, v30, 1, a9, a10);
  free(v28);
  return MEMORY[0x1401F8B20]((unsigned __int64)v100 ^ v108);
}

