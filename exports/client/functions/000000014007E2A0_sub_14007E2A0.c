/* Address: 0x14007e2a0 | Name: sub_14007E2A0 | Size: 1828 bytes */
__int64 __fastcall sub_14007E2A0(float *a1, __int64 a2, int a3, float a4, float a5)
{
  signed int v5; // r13d
  int v8; // eax
  int v9; // edx
  float v10; // xmm12_4
  float *v11; // r14
  __int64 v12; // r15
  float v13; // xmm6_4
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rbp
  signed int v17; // eax
  __m128i v18; // xmm0
  __m128d v19; // xmm0
  float v20; // xmm15_4
  float v21; // xmm13_4
  float v22; // xmm13_4
  float v23; // xmm14_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm9_4
  float v28; // xmm10_4
  float v29; // xmm11_4
  double v30; // xmm0_8
  float v31; // xmm3_4
  float v32; // xmm5_4
  float v33; // xmm1_4
  float v34; // xmm9_4
  float v35; // xmm4_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm10_4
  float v39; // xmm2_4
  float v40; // xmm15_4
  float v41; // xmm9_4
  float v42; // xmm7_4
  float v43; // xmm8_4
  float v44; // xmm7_4
  float v45; // xmm9_4
  double v46; // xmm0_8
  float v47; // xmm2_4
  float v48; // xmm3_4
  float v49; // xmm4_4
  float v50; // xmm2_4
  float v51; // xmm1_4
  __int64 v52; // rdx
  __int64 v53; // r8
  unsigned int *v54; // rbp
  __int64 v55; // r13
  char v56; // r14
  __int64 v57; // r12
  __int64 v58; // r15
  __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rcx
  bool v74; // zf
  float *v75; // rax
  signed __int64 v76; // rcx
  float *v77; // r8
  __int64 v78; // r10
  float v79; // xmm3_4
  __int64 v80; // rdx
  float v81; // xmm4_4
  float v82; // xmm5_4
  float v83; // xmm6_4
  float *v84; // rax
  signed __int64 v85; // rcx
  float *v86; // r8
  __int64 v87; // r10
  float v88; // xmm3_4
  __int64 v89; // rdx
  float v90; // xmm4_4
  float v91; // xmm5_4
  float v92; // xmm6_4
  __int64 v94; // [rsp+0h] [rbp-758h] BYREF
  float v95; // [rsp+20h] [rbp-738h]
  int v96; // [rsp+24h] [rbp-734h]
  __int64 v97; // [rsp+28h] [rbp-730h]
  __int64 v98; // [rsp+30h] [rbp-728h]
  double v99; // [rsp+38h] [rbp-720h]
  __int128 v100; // [rsp+40h] [rbp-718h] BYREF
  __int128 v101; // [rsp+50h] [rbp-708h]
  __int128 v102; // [rsp+60h] [rbp-6F8h]
  __int128 v103; // [rsp+70h] [rbp-6E8h]
  _DWORD v104[2]; // [rsp+80h] [rbp-6D8h] BYREF
  char v105; // [rsp+88h] [rbp-6D0h] BYREF
  char v106; // [rsp+140h] [rbp-618h] BYREF
  __int64 v107; // [rsp+680h] [rbp-D8h]

  v5 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v8 = 0;
      v9 = 2;
    }
    else if ( a3 == 2 )
    {
      v8 = 0;
      v9 = 1;
    }
    else
    {
      v8 = LODWORD(v95);
      v9 = LODWORD(v95);
    }
  }
  else
  {
    v8 = 1;
    v9 = 2;
  }
  v10 = a4 * 0.5;
  v11 = (float *)&v105;
  v12 = 0;
  v13 = a5;
  v14 = 3LL * v8;
  v15 = 3LL * v9;
  v16 = 3LL * a3;
  v17 = 7;
  v98 = 7;
  v96 = 7;
  do
  {
    if ( v5 >= 4 )
      v18 = _mm_cvtsi32_si128(v17);
    else
      v18 = _mm_cvtsi32_si128(v5);
    v19.m128d_f64[1] = _mm_cvtps_pd(_mm_cvtepi32_ps(v18)).m128d_f64[1];
    v19.m128d_f64[0] = MEMORY[0x1401F8A50]();
    v97 = 8;
    v20 = 0.0;
    v21 = _mm_shuffle_pd(v19, v19, 1).m128d_f64[0];
    *(float *)v19.m128d_f64 = v19.m128d_f64[0];
    v22 = v21 * v13;
    *(float *)v19.m128d_f64 = *(float *)v19.m128d_f64 * v13;
    v23 = -v22;
    v24 = v22 + v10;
    v95 = *(float *)v19.m128d_f64;
    do
    {
      v25 = *(float *)(a2 + 4 * v16 + 4);
      v26 = *(float *)(a2 + 4 * v16 + 8);
      if ( v12 >= 4 )
      {
        v27 = v23 - v10;
        v28 = v25 * (float)(v23 - v10);
        v29 = v26 * (float)(v23 - v10);
      }
      else
      {
        v24 = v10 + v22;
        v27 = v10 + v22;
        v28 = v25 * (float)(v10 + v22);
        v29 = v26 * (float)(v10 + v22);
      }
      v30 = MEMORY[0x1401F8A50]();
      v31 = *(float *)(a2 + 4 * v15 + 8);
      v99 = v95;
      v32 = _mm_shuffle_pd((__m128d)*(unsigned __int64 *)&v30, (__m128d)*(unsigned __int64 *)&v30, 1).m128d_f64[0] * v95;
      v33 = *(float *)(a2 + 4 * v16) * v27;
      v34 = *(float *)(a2 + 4 * v16);
      v35 = v30 * v95;
      *(float *)&v30 = *(float *)(a2 + 4 * v14 + 4) * v32;
      v36 = (float)((float)(*(float *)(a2 + 4 * v15) * v35) + (float)(*(float *)(a2 + 4 * v14) * v32))
          + (float)(v33 + *a1);
      v37 = a1[1] + v28;
      v38 = a1[2];
      *(v11 - 2) = v36;
      v39 = (float)(*(float *)(a2 + 4 * v15 + 4) * v35) + *(float *)&v30;
      *(float *)&v30 = *(float *)(a2 + 4 * v14 + 8) * v32;
      v40 = v20 + 0.39269909;
      *(v11 - 1) = v39 + v37;
      *v11 = (float)((float)(v31 * v35) + *(float *)&v30) + (float)(v38 + v29);
      if ( v12 >= 4 )
      {
        v24 = v22 + v10;
        v41 = v34 * (float)(v23 - v10);
        v42 = v25 * (float)(v23 - v10);
        v43 = v26 * (float)(v23 - v10);
      }
      else
      {
        v41 = v34 * v24;
        v42 = v25 * v24;
        v43 = v26 * v24;
      }
      v44 = v42 + a1[1];
      v45 = v41 + *a1;
      v46 = MEMORY[0x1401F8A50]();
      v47 = *(float *)(a2 + 4 * v14 + 4);
      v20 = v40 + 0.39269909;
      v48 = _mm_shuffle_pd((__m128d)*(unsigned __int64 *)&v46, (__m128d)*(unsigned __int64 *)&v46, 1).m128d_f64[0] * v99;
      v49 = v46 * v99;
      *(float *)&v46 = *(float *)(a2 + 4 * v15 + 4) * v49;
      v11[1] = (float)((float)(*(float *)(a2 + 4 * v14) * v48) + v45) + (float)(*(float *)(a2 + 4 * v15) * v49);
      v50 = (float)((float)(v47 * v48) + v44) + *(float *)&v46;
      v51 = *(float *)(a2 + 4 * v14 + 8);
      LODWORD(v46) = *(_DWORD *)(a2 + 4 * v15 + 8);
      v11[2] = v50;
      v11[3] = (float)((float)(v51 * v48) + (float)(v43 + v38)) + (float)(*(float *)&v46 * v49);
      v11 += 6;
      --v97;
    }
    while ( v97 );
    ++v5;
    v17 = v96 - 1;
    v13 = a5;
    ++v12;
    v96 = v17;
  }
  while ( v17 > -1 );
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  v54 = (unsigned int *)&v106;
  v55 = 0;
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279530;
  dword_140404A6C[456217208] = 9;
  do
  {
    v56 = 1;
    v57 = v55 + 16;
    v58 = 16;
    do
    {
      sub_14007D520(v54 - 48, v52, v53);
      v59 = v56 & 0xF;
      sub_14007D520(&v104[3 * v59 + 3 * v55], v60, v61);
      sub_14007D520(&v104[3 * v59 + 3 * v55], v62, v63);
      sub_14007D520(&v104[3 * v57 + 3 * v59], 3 * (v57 + v59), v64);
      sub_14007D520(&v104[3 * v57 + 3 * v59], v65, v66);
      sub_14007D520(v54, v67, v68);
      sub_14007D520(v54, v69, v70);
      sub_14007D520(v54 - 48, v71, v72);
      v54 += 3;
      ++v56;
      --v58;
    }
    while ( v58 );
    v74 = v98-- == 1;
    v55 += 16;
  }
  while ( !v74 );
  sub_14006E0D0(v73, v52, v53);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  v75 = (float *)&v100;
  v76 = (char *)&dword_140404A6C[431564505] - (char *)&v100;
  v77 = (float *)&dword_140404A6C[431564518];
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  v78 = 4;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  do
  {
    v79 = *(v77 - 1);
    v80 = 4;
    v81 = *v77;
    v82 = v77[1];
    v83 = v77[2];
    do
    {
      *v75 = (float)((float)((float)(v79 * *(float *)((char *)v75 + v76 - 16))
                           + (float)(v81 * *(float *)((char *)v75 + v76)))
                   + (float)(v82 * *(float *)((char *)v75 + v76 + 16)))
           + (float)(v83 * *(float *)((char *)v75 + v76 + 32));
      ++v75;
      --v80;
    }
    while ( v80 );
    v77 += 4;
    v76 -= 16LL;
    --v78;
  }
  while ( v78 );
  *(_OWORD *)&dword_140404A6C[431564533] = v100;
  v84 = (float *)&v100;
  v85 = (char *)&dword_140404A6C[431564489] - (char *)&v100;
  v86 = (float *)&dword_140404A6C[431564534];
  *(_OWORD *)&dword_140404A6C[431564537] = v101;
  v87 = 4;
  *(_OWORD *)&dword_140404A6C[431564541] = v102;
  *(_OWORD *)&dword_140404A6C[431564545] = v103;
  do
  {
    v88 = *(v86 - 1);
    v89 = 4;
    v90 = *v86;
    v91 = v86[1];
    v92 = v86[2];
    do
    {
      *v84 = (float)((float)((float)(v88 * *(float *)((char *)v84 + v85 - 16))
                           + (float)(v90 * *(float *)((char *)v84 + v85)))
                   + (float)(v91 * *(float *)((char *)v84 + v85 + 16)))
           + (float)(v92 * *(float *)((char *)v84 + v85 + 32));
      ++v84;
      --v89;
    }
    while ( v89 );
    v86 += 4;
    v85 -= 16LL;
    --v87;
  }
  while ( v87 );
  *(_OWORD *)&dword_140404A6C[431564565] = v100;
  *(_OWORD *)&dword_140404A6C[431564569] = v101;
  *(_OWORD *)&dword_140404A6C[431564573] = v102;
  *(_OWORD *)&dword_140404A6C[431564577] = v103;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v94 ^ v107);
}

