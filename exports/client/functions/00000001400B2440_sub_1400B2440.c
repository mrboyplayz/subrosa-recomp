/* Address: 0x1400b2440 | Name: sub_1400B2440 | Size: 1380 bytes */
__int64 __fastcall sub_1400B2440(unsigned int a1)
{
  __int64 v2; // r12
  int v3; // r14d
  float v4; // xmm3_4
  float v5; // xmm4_4
  int v6; // r15d
  float v7; // xmm6_4
  __int128 *v8; // rbx
  __int64 v9; // rdi
  float v10; // xmm10_4
  float v11; // xmm11_4
  float v12; // xmm9_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm6_4
  double v16; // xmm0_8
  float v17; // xmm1_4
  float v18; // xmm5_4
  float v19; // xmm5_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm5_4
  float *v26; // r8
  unsigned int *v27; // r9
  __int64 v28; // r10
  __int64 v29; // rax
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  __m128 v34; // xmm2
  __m128 v35; // xmm1
  __int64 v36; // rax
  __m128 v37; // xmm0
  __m128 v38; // xmm2
  __m128 v39; // xmm1
  __int64 v40; // rax
  float v41; // xmm0_4
  float v42; // xmm4_4
  __int64 v44; // [rsp+8h] [rbp-100h] BYREF
  float v45; // [rsp+28h] [rbp-E0h] BYREF
  float v46; // [rsp+2Ch] [rbp-DCh]
  float v47; // [rsp+30h] [rbp-D8h]
  float v48; // [rsp+38h] [rbp-D0h] BYREF
  float v49; // [rsp+3Ch] [rbp-CCh]
  float v50; // [rsp+40h] [rbp-C8h]
  __int128 v51; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v52; // [rsp+58h] [rbp-B0h]
  float v53; // [rsp+68h] [rbp-A0h]
  __int64 v54; // [rsp+88h] [rbp-80h]

  v2 = 7166LL * (int)a1;
  v51 = xmmword_140278D30;
  v52 = xmmword_140278D30;
  v53 = 1.0;
  sub_14007B2A0((__int64)&v51, (float *)&v51 + 3);
  v3 = 0;
  v4 = *(float *)&dword_140404A6C[v2 + 280651441];
  v5 = *(float *)&dword_140404A6C[v2 + 280651442];
  v6 = 0;
  v45 = *(float *)&dword_140404A6C[v2 + 280651440];
  v46 = v4;
  v47 = v5;
  v48 = v45 - (float)(*(float *)&dword_1402F6188 * 1.75);
  v49 = v4 - (float)(*(float *)&dword_1402F618C * 1.75);
  v50 = v5 - (float)(*(float *)&dword_1402F6190 * 1.75);
  if ( (unsigned int)sub_1400B91E0(a1, &v45, &v48) )
    v7 = *(float *)&dword_140404A6C[73006982];
  else
    v7 = v46;
  v8 = &v51;
  v9 = 8;
  v10 = (float)(*(float *)&dword_140404A6C[v2 + 280657992] - (float)(*((float *)&v52 + 2) * 0.015625)) * 3.75;
  v11 = (float)(*(float *)&dword_140404A6C[v2 + 280657994] - (float)(v53 * 0.015625)) * 3.75;
  v12 = (float)(*((float *)&v52 + 3) * -0.015625) * 3.75;
  v13 = v45 - v10;
  v14 = v47 - v11;
  v15 = v7 - v12;
  do
  {
    v45 = v13 + (float)(*(float *)&dword_1402F6188 * 0.75);
    v48 = v13 - (float)(*(float *)&dword_1402F6188 * 0.75);
    v46 = v15 + (float)(*(float *)&dword_1402F618C * 0.75);
    v50 = v14 - (float)(*(float *)&dword_1402F6190 * 0.75);
    v47 = v14 + (float)(*(float *)&dword_1402F6190 * 0.75);
    v49 = v15 - (float)(*(float *)&dword_1402F618C * 0.75);
    if ( (unsigned int)sub_1400B91E0(a1, &v45, &v48) )
    {
      v15 = *(float *)&dword_140404A6C[73006982];
      ++v6;
      *(_DWORD *)v8 = dword_140404A6C[73006982];
      v8 = (__int128 *)((char *)v8 + 4);
    }
    v13 = v13 + v10;
    v15 = v15 + v12;
    v14 = v14 + v11;
    --v9;
  }
  while ( v9 );
  v16 = cos((float)(*(float *)&dword_140404A6C[v2 + 280651342] * 0.5));
  v17 = *(float *)&dword_140404A6C[v2 + 280651373];
  v18 = v16 * *(float *)&dword_140404A6C[v2 + 280657921];
  v19 = fmaxf(v18, 0.125);
  if ( dword_140404A6C[v2 + 280651327] )
    v20 = (float)(v17 * 0.46875) + 0.125;
  else
    v20 = (float)(v17 * 0.21875) + 0.34375;
  v21 = *(float *)&dword_140404A6C[v2 + 280657915];
  v22 = (float)(v19 + 1.0) * v20;
  v23 = v21;
  v24 = fminf(fmaxf(*(float *)&dword_140404A6C[v2 + 280658002], 0.0), 1.0);
  v25 = (float)(v22 * (float)(1.0 - v24))
      + (float)((float)((float)(*(float *)&dword_140404A6C[v2 + 280651373] * 0.9375) + 0.3125) * v24);
  if ( v6 > 0 )
  {
    v26 = (float *)&dword_140404A6C[v2 + 280658054];
    v27 = &dword_140404A6C[v2 + 280652451];
    v28 = 2;
    while ( 1 )
    {
      if ( *((_DWORD *)v26 - 28) == 1 && *v27 )
      {
        v29 = 0;
        if ( v6 < 4LL )
        {
          v30 = *v26;
        }
        else
        {
          v30 = *v26;
          v31 = *v26 + 0.125;
          do
          {
            if ( v31 < *((float *)&v51 + v29) )
              *((float *)&v51 + v29) = v31;
            if ( v31 < *((float *)&v51 + v29 + 1) )
              *((float *)&v51 + v29 + 1) = v31;
            if ( v31 < *((float *)&v51 + v29 + 2) )
              *((float *)&v51 + v29 + 2) = v31;
            if ( v31 < *((float *)&v51 + v29 + 3) )
              *((float *)&v51 + v29 + 3) = v31;
            v29 += 4;
          }
          while ( v29 < v6 - 3LL );
          if ( v29 >= v6 )
            goto LABEL_33;
        }
        v32 = v30 + 0.125;
        do
        {
          if ( v32 < *((float *)&v51 + v29) )
            *((float *)&v51 + v29) = v32;
          ++v29;
        }
        while ( v29 < v6 );
      }
LABEL_33:
      v27 += 234;
      v26 += 55;
      if ( !--v28 )
      {
        v33 = 0.0;
        if ( (unsigned int)v6 < 8 )
          goto LABEL_38;
        v34 = 0;
        v35 = 0;
        v36 = 0;
        do
        {
          v3 += 8;
          v34 = _mm_add_ps(v34, *(__m128 *)((char *)&v51 + 4 * v36));
          v37 = *(__m128 *)((char *)&v52 + 4 * v36);
          v36 += 8;
          v35 = _mm_add_ps(v35, v37);
        }
        while ( v36 < (int)(v6 - (v6 & 0x80000007)) );
        v38 = _mm_add_ps(v34, v35);
        v39 = _mm_add_ps(_mm_movehl_ps(v38, v38), v38);
        v33 = v39.m128_f32[0] + _mm_shuffle_ps(v39, v39, 245).m128_f32[0];
        if ( v3 < v6 )
        {
LABEL_38:
          v40 = v3;
          do
            v33 = v33 + *((float *)&v51 + v40++);
          while ( v40 < v6 );
        }
        v23 = (float)(v33 / (float)v6) + v25;
        break;
      }
    }
  }
  v41 = *(float *)&dword_140404A6C[v2 + 280657981];
  if ( v41 >= (float)(v21 - 0.125) )
  {
    v42 = v21 + 0.125;
    if ( v41 > v42 )
      v41 = v42;
  }
  else
  {
    v41 = v21 - 0.125;
  }
  *(float *)&dword_140404A6C[v2 + 280657981] = (float)((float)(v23 - v41) * 0.25) + v41;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v44 ^ v54);
}

