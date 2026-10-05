/* Address: 0x14007e9d0 | Name: sub_14007E9D0 | Size: 1149 bytes */
__int64 __fastcall sub_14007E9D0(unsigned int *a1, _DWORD *a2, float a3, float a4)
{
  float v4; // xmm8_4
  float v5; // xmm7_4
  __int64 v6; // rdx
  __int64 v7; // r8
  double v8; // xmm6_8
  __int64 v9; // rdx
  __int64 v10; // r8
  __m128d v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdi
  float v16; // xmm14_4
  float v17; // xmm13_4
  double v18; // xmm1_8
  unsigned int v19; // xmm0_4
  __int64 v20; // rdx
  __int64 v21; // r8
  float v22; // xmm7_4
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  double v27; // xmm1_8
  unsigned int v28; // xmm0_4
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rbx
  double v33; // xmm1_8
  unsigned int v34; // xmm0_4
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  float *v41; // rax
  signed __int64 v42; // rcx
  float *v43; // r8
  __int64 v44; // r10
  float v45; // xmm3_4
  __int64 v46; // rdx
  float v47; // xmm4_4
  float v48; // xmm5_4
  float v49; // xmm6_4
  float *v50; // rax
  signed __int64 v51; // rcx
  float *v52; // r8
  __int64 v53; // r10
  float v54; // xmm3_4
  __int64 v55; // rdx
  float v56; // xmm4_4
  float v57; // xmm5_4
  float v58; // xmm6_4
  __int64 v60; // [rsp+8h] [rbp-100h] BYREF
  __int64 v61; // [rsp+24h] [rbp-E4h] BYREF
  unsigned __int64 v62; // [rsp+2Ch] [rbp-DCh]
  __int128 v63; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v64; // [rsp+48h] [rbp-C0h]
  __int128 v65; // [rsp+58h] [rbp-B0h]
  __int128 v66; // [rsp+68h] [rbp-A0h]
  __int64 v67; // [rsp+78h] [rbp-90h]

  sub_14007B990(a1, a2);
  dword_140404A6C[456217205] = 2;
  v4 = 0.0;
  *((float *)&v61 + 1) = -a4;
  v5 = 0.0;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402794A0;
  v62 = 0;
  sub_14007D520((unsigned int *)&v61 + 1, v6, v7);
  v8 = a3;
  *((float *)&v62 + 1) = a3;
  sub_14007D520((unsigned int *)&v61 + 1, v9, v10);
  v11 = 0;
  v11.m128d_f64[0] = ((double (*)(void))MEMORY[0x1401F8A50])();
  v14 = 32;
  v15 = 32;
  v16 = _mm_shuffle_pd(v11, v11, 1).m128d_f64[0] * a3;
  v17 = v11.m128d_f64[0] * a3;
  v62 = __PAIR64__(LODWORD(v16), LODWORD(v17));
  do
  {
    sub_14007D520((unsigned int *)&v61 + 1, v12, v13);
    v5 = v5 + 0.19634955;
    v18 = ((double (*)(void))MEMORY[0x1401F8A50])();
    *(float *)&v19 = _mm_shuffle_pd((__m128d)*(unsigned __int64 *)&v18, (__m128d)*(unsigned __int64 *)&v18, 1).m128d_f64[0]
                   * v8;
    *(float *)&v18 = v18 * v8;
    v62 = __PAIR64__(v19, LODWORD(v18));
    sub_14007D520((unsigned int *)&v61 + 1, v20, v21);
    --v15;
  }
  while ( v15 );
  *((float *)&v61 + 1) = a4;
  v22 = 0.0;
  v62 = 0;
  sub_14007D520((unsigned int *)&v61 + 1, v12, v13);
  *((float *)&v62 + 1) = a3;
  sub_14007D520((unsigned int *)&v61 + 1, v23, v24);
  v62 = __PAIR64__(LODWORD(v16), LODWORD(v17));
  do
  {
    sub_14007D520((unsigned int *)&v61 + 1, v25, v26);
    v22 = v22 + 0.19634955;
    v27 = ((double (*)(void))MEMORY[0x1401F8A50])();
    *(float *)&v28 = _mm_shuffle_pd((__m128d)*(unsigned __int64 *)&v27, (__m128d)*(unsigned __int64 *)&v27, 1).m128d_f64[0]
                   * v8;
    *(float *)&v27 = v27 * v8;
    v62 = __PAIR64__(v28, LODWORD(v27));
    sub_14007D520((unsigned int *)&v61 + 1, v29, v30);
    --v14;
  }
  while ( v14 );
  v32 = 16;
  do
  {
    *((float *)&v61 + 1) = -a4;
    v33 = MEMORY[0x1401F8A50](v31);
    *(float *)&v34 = _mm_shuffle_pd((__m128d)*(unsigned __int64 *)&v33, (__m128d)*(unsigned __int64 *)&v33, 1).m128d_f64[0]
                   * v8;
    *(float *)&v33 = v33 * v8;
    v62 = __PAIR64__(v34, LODWORD(v33));
    sub_14007D520((unsigned int *)&v61 + 1, v35, v36);
    *((float *)&v61 + 1) = a4;
    sub_14007D520((unsigned int *)&v61 + 1, v37, v38);
    v4 = v4 + 0.39269909;
    --v32;
  }
  while ( v32 );
  sub_14006E0D0(v31, v39, v40);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  v41 = (float *)&v63;
  v42 = (char *)&dword_140404A6C[431564505] - (char *)&v63;
  v43 = (float *)&dword_140404A6C[431564518];
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  v44 = 4;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  do
  {
    v45 = *(v43 - 1);
    v46 = 4;
    v47 = *v43;
    v48 = v43[1];
    v49 = v43[2];
    do
    {
      *v41 = (float)((float)((float)(v45 * *(float *)((char *)v41 + v42 - 16))
                           + (float)(v47 * *(float *)((char *)v41 + v42)))
                   + (float)(v48 * *(float *)((char *)v41 + v42 + 16)))
           + (float)(v49 * *(float *)((char *)v41 + v42 + 32));
      ++v41;
      --v46;
    }
    while ( v46 );
    v43 += 4;
    v42 -= 16LL;
    --v44;
  }
  while ( v44 );
  *(_OWORD *)&dword_140404A6C[431564533] = v63;
  v50 = (float *)&v63;
  v51 = (char *)&dword_140404A6C[431564489] - (char *)&v63;
  v52 = (float *)&dword_140404A6C[431564534];
  *(_OWORD *)&dword_140404A6C[431564537] = v64;
  v53 = 4;
  *(_OWORD *)&dword_140404A6C[431564541] = v65;
  *(_OWORD *)&dword_140404A6C[431564545] = v66;
  do
  {
    v54 = *(v52 - 1);
    v55 = 4;
    v56 = *v52;
    v57 = v52[1];
    v58 = v52[2];
    do
    {
      *v50 = (float)((float)((float)(v54 * *(float *)((char *)v50 + v51 - 16))
                           + (float)(v56 * *(float *)((char *)v50 + v51)))
                   + (float)(v57 * *(float *)((char *)v50 + v51 + 16)))
           + (float)(v58 * *(float *)((char *)v50 + v51 + 32));
      ++v50;
      --v55;
    }
    while ( v55 );
    v52 += 4;
    v51 -= 16LL;
    --v53;
  }
  while ( v53 );
  *(_OWORD *)&dword_140404A6C[431564565] = v63;
  *(_OWORD *)&dword_140404A6C[431564569] = v64;
  *(_OWORD *)&dword_140404A6C[431564573] = v65;
  *(_OWORD *)&dword_140404A6C[431564577] = v66;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v60 ^ v67);
}

