/* Address: 0x14017e380 | Name: sub_14017E380 | Size: 3189 bytes */
__int64 __fastcall sub_14017E380(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rbx
  int v4; // esi
  void *v7; // rdi
  int v8; // r15d
  int v9; // eax
  __int16 v10; // dx
  char v11; // bp
  BOOL v12; // r14d
  int v13; // r8d
  __int64 v14; // r15
  int v15; // r13d
  char *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int8 v19; // dl
  __int64 v20; // r9
  _BYTE *v21; // r8
  __int64 v22; // r10
  int v23; // r8d
  __int64 v24; // r9
  char v25; // dl
  int v26; // ecx
  __int64 v27; // r10
  __int64 v28; // r9
  int v29; // r8d
  char v30; // dl
  int v31; // ecx
  __int64 v32; // rbp
  __int16 *v33; // rbx
  int v34; // edx
  int v35; // r13d
  int v36; // r8d
  int v37; // r10d
  int v38; // r11d
  int v39; // r9d
  int v40; // r15d
  char v41; // al
  int v42; // r12d
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int16 v48; // r15
  __int16 v49; // r12
  int v50; // eax
  int v51; // ecx
  __int64 result; // rax
  char *v53; // rbx
  char v54; // bp
  float v55; // xmm10_4
  int v56; // esi
  float v57; // xmm11_4
  int v58; // r14d
  __m128i v59; // xmm10
  int v60; // eax
  float v61; // xmm8_4
  float v62; // xmm9_4
  int v63; // eax
  float v64; // xmm6_4
  float v65; // xmm7_4
  __m128i v66; // xmm7
  int v67; // eax
  __m128i v68; // xmm8
  int v69; // eax
  __int64 v70; // rdx
  float v71; // xmm12_4
  float v72; // xmm13_4
  int v73; // eax
  __int64 v74; // r9
  __int64 v75; // r8
  unsigned __int64 v76; // rdx
  char *v77; // rcx
  float v78; // xmm0_4
  float v79; // xmm3_4
  float v80; // xmm0_4
  float v81; // xmm3_4
  char *v82; // rcx
  float v83; // xmm0_4
  float v84; // xmm3_4
  float v85; // xmm3_4
  float v86; // xmm2_4
  char *v87; // rcx
  float v88; // xmm0_4
  float v89; // xmm1_4
  float v90; // xmm0_4
  float v91; // xmm1_4
  char *v92; // rcx
  float v93; // xmm0_4
  float v94; // xmm3_4
  float v95; // xmm2_4
  float v96; // xmm3_4
  __int64 v97; // rdx
  __int64 v98; // r8
  char *v99; // rcx
  float v100; // xmm0_4
  float v101; // xmm1_4
  float v102; // xmm2_4
  float v103; // xmm3_4
  int v104; // r12d
  __int64 v105; // rax
  char *v106; // r14
  __int16 v107; // [rsp+50h] [rbp-108h]
  int v108; // [rsp+54h] [rbp-104h]
  int v109; // [rsp+58h] [rbp-100h]
  int v110; // [rsp+5Ch] [rbp-FCh]
  int v111; // [rsp+60h] [rbp-F8h]
  int v112; // [rsp+64h] [rbp-F4h]
  unsigned __int8 *v113; // [rsp+68h] [rbp-F0h]
  __int64 v114; // [rsp+70h] [rbp-E8h]
  void *Block; // [rsp+160h] [rbp+8h] BYREF
  __int64 *v116; // [rsp+170h] [rbp+18h]
  __int16 v117; // [rsp+178h] [rbp+20h]

  v116 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v7 = nullptr;
  v8 = 0;
  v9 = sub_14017DA60(a1, a2);
  *a3 = 0;
  if ( v9 < 0 )
    return 0;
  v10 = *(unsigned __int8 *)(v9 + v3 + 1) + (*(unsigned __int8 *)(v9 + v3) << 8);
  if ( v10 > 0 )
  {
    v11 = 0;
    v113 = (unsigned __int8 *)(v9 + v3 + 10);
    v12 = 0;
    v13 = 2 * v10;
    v14 = v13;
    v15 = v113[v13 - 1] + (v113[v13 - 2] << 8);
    v16 = (char *)(v13
                 + v9
                 + ((unsigned __int64)*(unsigned __int8 *)(v9 + (__int64)v13 + v3 + 10) << 8)
                 + *(unsigned __int8 *)(v9 + (__int64)v13 + v3 + 11)
                 + v3
                 + 12);
    v17 = j__malloc_base(14LL * (v15 + v13 + 1));
    v18 = v17;
    if ( !v17 )
      return 0;
    v110 = 0;
    v19 = 0;
    v114 = (unsigned int)(v15 + 1);
    if ( v15 == -1 )
    {
      v34 = 0;
      v50 = 0;
      v51 = 0;
      v35 = 0;
      v36 = 0;
      LOWORD(v37) = 0;
      LOWORD(v38) = 0;
    }
    else
    {
      v20 = (unsigned int)(v15 + 1);
      v21 = (_BYTE *)(14 * v14 + v17 + 12);
      do
      {
        if ( v19 )
        {
          --v19;
        }
        else
        {
          v11 = *v16;
          if ( (*v16 & 8) != 0 )
            v19 = v16[1];
          v16 += ((v11 & 8) != 0) + 1;
        }
        *v21 = v11;
        v21 += 14;
        --v20;
      }
      while ( v20 );
      v22 = (unsigned int)(v15 + 1);
      v23 = 0;
      v24 = v17 + 14 * v14;
      do
      {
        v25 = *(_BYTE *)(v24 + 12) & 0x10;
        if ( (*(_BYTE *)(v24 + 12) & 2) != 0 )
        {
          v26 = (unsigned __int8)*v16++;
          if ( !v25 )
            v26 = -v26;
          v23 += v26;
        }
        else if ( !v25 )
        {
          v23 += (__int16)(((unsigned __int8)*v16 << 8) + (unsigned __int8)v16[1]);
          v16 += 2;
        }
        *(_WORD *)v24 = v23;
        v24 += 14;
        --v22;
      }
      while ( v22 );
      v27 = (unsigned int)(v15 + 1);
      v28 = 14 * v14 + v17 + 2;
      v29 = 0;
      do
      {
        v30 = *(_BYTE *)(v28 + 10) & 0x20;
        if ( (*(_BYTE *)(v28 + 10) & 4) != 0 )
        {
          v31 = (unsigned __int8)*v16++;
          if ( !v30 )
            v31 = -v31;
          v29 += v31;
        }
        else if ( !v30 )
        {
          v29 += (__int16)(((unsigned __int8)*v16 << 8) + (unsigned __int8)v16[1]);
          v16 += 2;
        }
        *(_WORD *)v28 = v29;
        v28 += 14;
        --v27;
      }
      while ( v27 );
      v32 = 0;
      v108 = 0;
      v33 = (__int16 *)(v17 + 14 * v14);
      v109 = 0;
      v34 = 0;
      v111 = 0;
      v35 = 0;
      v112 = 0;
      v36 = 0;
      LOWORD(v37) = 0;
      LOWORD(v38) = 0;
      v39 = 0;
      do
      {
        v40 = *v33;
        v41 = *((_BYTE *)v33 + 12);
        v117 = *v33;
        v42 = v33[1];
        v107 = v33[1];
        LOBYTE(Block) = v41;
        if ( v110 == v39 )
        {
          if ( v32 )
          {
            v43 = sub_14017FA30(v18, v34, v4, v12, v38, v37, v109, v108, v36, v35);
            v36 = v111;
            v34 = v43;
            v41 = (char)Block;
            v39 = v112;
          }
          v12 = (v41 & 1) == 0;
          if ( (v41 & 1) != 0 )
          {
            LOWORD(v38) = v40;
            LOWORD(v37) = v42;
          }
          else
          {
            v38 = v33[7];
            v37 = v33[8];
            v109 = v40;
            v108 = v42;
            if ( (v33[13] & 1) != 0 )
            {
              ++v39;
              ++v32;
              v33 += 7;
            }
            else
            {
              v38 = (v40 + v38) >> 1;
              v37 = (v42 + v37) >> 1;
            }
          }
          v44 = v34++;
          v45 = 14 * v44;
          v4 = 0;
          *(_DWORD *)(v45 + v18 + 4) = 0;
          *(_BYTE *)(v45 + v18 + 12) = 1;
          *(_WORD *)(v45 + v18) = v38;
          *(_WORD *)(v45 + v18 + 2) = v37;
          v110 = (*v113 << 8) + v113[1] + 1;
          v113 += 2;
        }
        else if ( (v41 & 1) != 0 )
        {
          v47 = 14LL * v34++;
          if ( v4 )
          {
            v48 = v35;
            v49 = v36;
          }
          else
          {
            v48 = 0;
            v49 = 0;
          }
          *(_BYTE *)(v47 + v18 + 12) = (v4 != 0) + 2;
          *(_WORD *)(v47 + v18) = v117;
          *(_WORD *)(v47 + v18 + 2) = v107;
          *(_WORD *)(v47 + v18 + 4) = v49;
          v4 = 0;
          *(_WORD *)(v47 + v18 + 6) = v48;
        }
        else
        {
          if ( v4 )
          {
            v46 = 14LL * v34;
            *(_WORD *)(v46 + v18) = (v36 + v40) >> 1;
            *(_WORD *)(v46 + v18 + 2) = (v42 + v35) >> 1;
            ++v34;
            *(_BYTE *)(v46 + v18 + 12) = 3;
            *(_WORD *)(v46 + v18 + 4) = v36;
            *(_WORD *)(v46 + v18 + 6) = v35;
          }
          v36 = v40;
          v111 = v40;
          v35 = v42;
          v4 = 1;
        }
        ++v39;
        ++v32;
        v33 += 7;
        v112 = v39;
      }
      while ( v32 < v114 );
      v50 = v108;
      v51 = v109;
    }
    LODWORD(result) = sub_14017FA30(v18, v34, v4, v12, v38, v37, v51, v50, v36, v35);
    *v116 = v18;
    return (unsigned int)result;
  }
  if ( v10 != -1 )
  {
    if ( v10 < 0 )
      sub_14023E640(L"0", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1840);
LABEL_90:
    *v116 = (__int64)v7;
    return (unsigned int)v8;
  }
  v53 = (char *)(v9 + v3 + 10);
  while ( 1 )
  {
    v54 = v53[1];
    v55 = 0.0;
    v56 = (unsigned __int8)v53[2];
    v57 = 0.0;
    v58 = (unsigned __int8)v53[3];
    v53 += 4;
    Block = nullptr;
    if ( (v54 & 2) != 0 )
    {
      if ( (v54 & 1) != 0 )
      {
        v59 = _mm_cvtsi32_si128((__int16)(((unsigned __int8)*v53 << 8) + (unsigned __int8)v53[1]));
        v60 = (__int16)(((unsigned __int8)v53[2] << 8) + (unsigned __int8)v53[3]);
        v53 += 4;
      }
      else
      {
        v59 = _mm_cvtsi32_si128(*v53);
        v60 = v53[1];
        v53 += 2;
      }
      v55 = _mm_cvtepi32_ps(v59).m128_f32[0];
      v57 = (float)v60;
    }
    else
    {
      sub_14023E640(L"0", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1787);
    }
    if ( (v54 & 8) != 0 )
    {
      v61 = 0.0;
      v62 = 0.0;
      v63 = (__int16)(((unsigned __int8)*v53 << 8) + (unsigned __int8)v53[1]);
      v53 += 2;
      v64 = (float)v63 * 0.000061035156;
      v65 = v64;
    }
    else if ( (v54 & 0x40) != 0 )
    {
      v61 = 0.0;
      v62 = 0.0;
      v66 = _mm_cvtsi32_si128((__int16)(((unsigned __int8)*v53 << 8) + (unsigned __int8)v53[1]));
      v67 = (__int16)(((unsigned __int8)v53[2] << 8) + (unsigned __int8)v53[3]);
      v53 += 4;
      v65 = _mm_cvtepi32_ps(v66).m128_f32[0] * 0.000061035156;
      v64 = (float)v67 * 0.000061035156;
    }
    else if ( v54 >= 0 )
    {
      v64 = 1.0;
      v61 = 0.0;
      v62 = 0.0;
      v65 = 1.0;
    }
    else
    {
      v65 = (float)(__int16)(((unsigned __int8)*v53 << 8) + (unsigned __int8)v53[1]) * 0.000061035156;
      v68 = _mm_cvtsi32_si128((__int16)(((unsigned __int8)v53[4] << 8) + (unsigned __int8)v53[5]));
      v62 = (float)(__int16)(((unsigned __int8)v53[2] << 8) + (unsigned __int8)v53[3]) * 0.000061035156;
      v69 = (__int16)(((unsigned __int8)v53[6] << 8) + (unsigned __int8)v53[7]);
      v53 += 8;
      v61 = _mm_cvtepi32_ps(v68).m128_f32[0] * 0.000061035156;
      v64 = (float)v69 * 0.000061035156;
    }
    v70 = (unsigned int)(v58 + (v56 << 8));
    v71 = fsqrt((float)(v62 * v62) + (float)(v65 * v65));
    v72 = fsqrt((float)(v64 * v64) + (float)(v61 * v61));
    v73 = *(_DWORD *)(a1 + 76) ? sub_14017E2A0(a1, v70, (__int64 *)&Block, 256) : sub_14017E380(a1, v70, &Block);
    if ( v73 > 0 )
      break;
LABEL_81:
    if ( (v54 & 0x20) == 0 )
      goto LABEL_90;
  }
  v74 = 0;
  if ( v73 < 4LL )
    goto LABEL_73;
  v75 = 0;
  v76 = ((unsigned __int64)(v73 - 4LL) >> 2) + 1;
  v74 = 4 * v76;
  do
  {
    v77 = (char *)Block;
    v78 = (float)*(__int16 *)((char *)Block + v75 + 2);
    v79 = (float)((float)((float)((float)*(__int16 *)((char *)Block + v75) * v62) + (float)(v78 * v64)) + v57) * v72;
    *(_WORD *)((char *)Block + v75) = (int)(float)((float)((float)((float)((float)*(__int16 *)((char *)Block + v75) * v65)
                                                                 + (float)(v78 * v61))
                                                         + v55)
                                                 * v71);
    *(_WORD *)&v77[v75 + 2] = (int)v79;
    v80 = (float)*(__int16 *)&v77[v75 + 6];
    v81 = (float)((float)((float)((float)*(__int16 *)&v77[v75 + 4] * v62) + (float)(v80 * v64)) + v57) * v72;
    *(_WORD *)&v77[v75 + 4] = (int)(float)((float)((float)((float)((float)*(__int16 *)&v77[v75 + 4] * v65)
                                                         + (float)(v80 * v61))
                                                 + v55)
                                         * v71);
    *(_WORD *)&v77[v75 + 6] = (int)v81;
    v82 = (char *)Block;
    v83 = (float)*(__int16 *)((char *)Block + v75 + 16);
    v84 = (float)((float)((float)((float)*(__int16 *)((char *)Block + v75 + 14) * v62) + (float)(v83 * v64)) + v57)
        * v72;
    *(_WORD *)((char *)Block + v75 + 14) = (int)(float)((float)((float)((float)((float)*(__int16 *)((char *)Block
                                                                                                  + v75
                                                                                                  + 14)
                                                                              * v65)
                                                                      + (float)(v83 * v61))
                                                              + v55)
                                                      * v71);
    *(_WORD *)&v82[v75 + 16] = (int)v84;
    v85 = (float)*(__int16 *)&v82[v75 + 18] * v62;
    v86 = (float)*(__int16 *)&v82[v75 + 20] * v64;
    *(_WORD *)&v82[v75 + 18] = (int)(float)((float)((float)((float)((float)*(__int16 *)&v82[v75 + 18] * v65)
                                                          + (float)((float)*(__int16 *)&v82[v75 + 20] * v61))
                                                  + v55)
                                          * v71);
    *(_WORD *)&v82[v75 + 20] = (int)(float)((float)((float)(v85 + v86) + v57) * v72);
    v87 = (char *)Block;
    v88 = (float)*(__int16 *)((char *)Block + v75 + 30);
    v89 = (float)*(__int16 *)((char *)Block + v75 + 28);
    *(_WORD *)((char *)Block + v75 + 28) = (int)(float)((float)((float)((float)(v89 * v65) + (float)(v88 * v61)) + v55)
                                                      * v71);
    *(_WORD *)&v87[v75 + 30] = (int)(float)((float)((float)((float)(v89 * v62) + (float)(v88 * v64)) + v57) * v72);
    v90 = (float)*(__int16 *)&v87[v75 + 34];
    v91 = (float)*(__int16 *)&v87[v75 + 32];
    *(_WORD *)&v87[v75 + 32] = (int)(float)((float)((float)((float)(v91 * v65) + (float)(v90 * v61)) + v55) * v71);
    *(_WORD *)&v87[v75 + 34] = (int)(float)((float)((float)((float)(v91 * v62) + (float)(v90 * v64)) + v57) * v72);
    v92 = (char *)Block;
    v93 = (float)*(__int16 *)((char *)Block + v75 + 44);
    v94 = (float)((float)((float)((float)*(__int16 *)((char *)Block + v75 + 42) * v62) + (float)(v93 * v64)) + v57)
        * v72;
    *(_WORD *)((char *)Block + v75 + 42) = (int)(float)((float)((float)((float)((float)*(__int16 *)((char *)Block
                                                                                                  + v75
                                                                                                  + 42)
                                                                              * v65)
                                                                      + (float)(v93 * v61))
                                                              + v55)
                                                      * v71);
    *(_WORD *)&v92[v75 + 44] = (int)v94;
    v95 = (float)*(__int16 *)&v92[v75 + 48];
    v96 = (float)*(__int16 *)&v92[v75 + 46];
    *(_WORD *)&v92[v75 + 46] = (int)(float)((float)((float)((float)(v96 * v65) + (float)(v95 * v61)) + v55) * v71);
    *(_WORD *)&v92[v75 + 48] = (int)(float)((float)((float)((float)(v96 * v62) + (float)(v95 * v64)) + v57) * v72);
    v75 += 56;
    --v76;
  }
  while ( v76 );
  if ( v74 < v73 )
  {
LABEL_73:
    v97 = 14 * v74;
    v98 = v73 - v74;
    do
    {
      v99 = (char *)Block;
      v100 = (float)*(__int16 *)((char *)Block + v97 + 2);
      v101 = (float)*(__int16 *)((char *)Block + v97);
      *(_WORD *)((char *)Block + v97) = (int)(float)((float)((float)((float)(v101 * v65) + (float)(v100 * v61)) + v55)
                                                   * v71);
      *(_WORD *)&v99[v97 + 2] = (int)(float)((float)((float)((float)(v101 * v62) + (float)(v100 * v64)) + v57) * v72);
      v102 = (float)*(__int16 *)&v99[v97 + 6];
      v103 = (float)*(__int16 *)&v99[v97 + 4];
      *(_WORD *)&v99[v97 + 4] = (int)(float)((float)((float)((float)(v103 * v65) + (float)(v102 * v61)) + v55) * v71);
      *(_WORD *)&v99[v97 + 6] = (int)(float)((float)((float)((float)(v103 * v62) + (float)(v102 * v64)) + v57) * v72);
      v97 += 14;
      --v98;
    }
    while ( v98 );
  }
  v104 = v73 + v8;
  v105 = j__malloc_base(14LL * (v73 + v8));
  v106 = (char *)v105;
  if ( v105 )
  {
    if ( v8 > 0 )
      MEMORY[0x1401FC920](v105, v7);
    MEMORY[0x1401FC920](&v106[14 * v8], Block);
    if ( v7 )
      free(v7);
    v7 = v106;
    free(Block);
    v8 = v104;
    goto LABEL_81;
  }
  if ( v7 )
    free(v7);
  if ( Block )
    free(Block);
  return 0;
}

