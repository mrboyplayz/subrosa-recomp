/* Address: 0x14005baf0 | Name: sub_14005BAF0 | Size: 1380 bytes */
void __fastcall sub_14005BAF0(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  int v5; // r14d
  float v6; // xmm3_4
  float v7; // xmm4_4
  int v8; // r15d
  float v9; // xmm6_4
  __int128 *v10; // rbx
  __int64 v11; // rdi
  float v12; // xmm10_4
  float v13; // xmm11_4
  float v14; // xmm9_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  float v17; // xmm6_4
  double v18; // xmm0_8
  float v19; // xmm1_4
  float v20; // xmm5_4
  float v21; // xmm5_4
  float v22; // xmm1_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm5_4
  float *v28; // r8
  _DWORD *v29; // r9
  __int64 v30; // r10
  __int64 v31; // rax
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  __m128 v36; // xmm2
  __m128 v37; // xmm1
  __int64 v38; // rax
  __m128 v39; // xmm0
  __m128 v40; // xmm2
  __m128 v41; // xmm1
  __int64 v42; // rax
  float v43; // xmm0_4
  float v44; // xmm4_4
  float v45; // [rsp+28h] [rbp-E0h] BYREF
  float v46; // [rsp+2Ch] [rbp-DCh]
  float v47; // [rsp+30h] [rbp-D8h]
  float v48; // [rsp+38h] [rbp-D0h] BYREF
  float v49; // [rsp+3Ch] [rbp-CCh]
  float v50; // [rsp+40h] [rbp-C8h]
  __int128 v51; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v52; // [rsp+58h] [rbp-B0h]
  float v53; // [rsp+68h] [rbp-A0h]

  v4 = 28664LL * (int)a1;
  v51 = xmmword_1400F78B0;
  v52 = xmmword_1400F78B0;
  v53 = 1.0;
  sub_140049C20((__int64)&v51, (float *)&v51 + 3, a3);
  v5 = 0;
  v6 = *(float *)((char *)&unk_1909419A0 + v4 + 592);
  v7 = *(float *)((char *)&unk_1909419A0 + v4 + 596);
  v8 = 0;
  v45 = *(float *)((char *)&unk_1909419A0 + v4 + 588);
  v46 = v6;
  v47 = v7;
  v48 = v45 - (float)(*(float *)&dword_140146A28 * 1.75);
  v49 = v6 - (float)(*(float *)&dword_140146A2C * 1.75);
  v50 = v7 - (float)(*(float *)&dword_140146A30 * 1.75);
  if ( (unsigned int)sub_140062890(a1, &v45, &v48) )
    v9 = *(float *)&qword_16E18CA44;
  else
    v9 = v46;
  v10 = &v51;
  v11 = 8;
  v12 = (float)(*(float *)((char *)&unk_1909419A0 + v4 + 26796) - (float)(*((float *)&v52 + 2) * 0.015625)) * 3.75;
  v13 = (float)(*(float *)((char *)&unk_1909419A0 + v4 + 26804) - (float)(v53 * 0.015625)) * 3.75;
  v14 = (float)(*((float *)&v52 + 3) * -0.015625) * 3.75;
  v15 = v45 - v12;
  v16 = v47 - v13;
  v17 = v9 - v14;
  do
  {
    v45 = v15 + (float)(*(float *)&dword_140146A28 * 0.75);
    v48 = v15 - (float)(*(float *)&dword_140146A28 * 0.75);
    v46 = v17 + (float)(*(float *)&dword_140146A2C * 0.75);
    v50 = v16 - (float)(*(float *)&dword_140146A30 * 0.75);
    v47 = v16 + (float)(*(float *)&dword_140146A30 * 0.75);
    v49 = v17 - (float)(*(float *)&dword_140146A2C * 0.75);
    if ( (unsigned int)sub_140062890(a1, &v45, &v48) )
    {
      v17 = *(float *)&qword_16E18CA44;
      ++v8;
      *(_DWORD *)v10 = qword_16E18CA44;
      v10 = (__int128 *)((char *)v10 + 4);
    }
    v15 = v15 + v12;
    v17 = v17 + v14;
    v16 = v16 + v13;
    --v11;
  }
  while ( v11 );
  v18 = cos((float)(*(float *)((char *)&unk_1909419A0 + v4 + 196) * 0.5));
  v19 = *(float *)((char *)&unk_1909419A0 + v4 + 320);
  v20 = v18 * *(float *)((char *)&unk_1909419A0 + v4 + 26512);
  v21 = fmaxf(v20, 0.125);
  if ( *(_DWORD *)((char *)&unk_1909419A0 + v4 + 136) )
    v22 = (float)(v19 * 0.46875) + 0.125;
  else
    v22 = (float)(v19 * 0.21875) + 0.34375;
  v23 = *(float *)((char *)&unk_1909419A0 + v4 + 26488);
  v24 = (float)(v21 + 1.0) * v22;
  v25 = v23;
  v26 = fminf(fmaxf(*(float *)((char *)&unk_1909419A0 + v4 + 26836), 0.0), 1.0);
  v27 = (float)(v24 * (float)(1.0 - v26))
      + (float)((float)((float)(*(float *)((char *)&unk_1909419A0 + v4 + 320) * 0.9375) + 0.3125) * v26);
  if ( v8 > 0 )
  {
    v28 = (float *)((char *)&unk_190948344 + v4);
    v29 = (_DWORD *)((char *)&unk_190942BB8 + v4);
    v30 = 2;
    while ( 1 )
    {
      if ( *((_DWORD *)v28 - 28) == 1 && *v29 )
      {
        v31 = 0;
        if ( v8 < 4LL )
        {
          v32 = *v28;
        }
        else
        {
          v32 = *v28;
          v33 = *v28 + 0.125;
          do
          {
            if ( v33 < *((float *)&v51 + v31) )
              *((float *)&v51 + v31) = v33;
            if ( v33 < *((float *)&v51 + v31 + 1) )
              *((float *)&v51 + v31 + 1) = v33;
            if ( v33 < *((float *)&v51 + v31 + 2) )
              *((float *)&v51 + v31 + 2) = v33;
            if ( v33 < *((float *)&v51 + v31 + 3) )
              *((float *)&v51 + v31 + 3) = v33;
            v31 += 4;
          }
          while ( v31 < v8 - 3LL );
          if ( v31 >= v8 )
            goto LABEL_33;
        }
        v34 = v32 + 0.125;
        do
        {
          if ( v34 < *((float *)&v51 + v31) )
            *((float *)&v51 + v31) = v34;
          ++v31;
        }
        while ( v31 < v8 );
      }
LABEL_33:
      v29 += 234;
      v28 += 55;
      if ( !--v30 )
      {
        v35 = 0.0;
        if ( (unsigned int)v8 < 8 )
          goto LABEL_38;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        do
        {
          v5 += 8;
          v36 = _mm_add_ps(v36, *(__m128 *)((char *)&v51 + 4 * v38));
          v39 = *(__m128 *)((char *)&v52 + 4 * v38);
          v38 += 8;
          v37 = _mm_add_ps(v37, v39);
        }
        while ( v38 < (int)(v8 - (v8 & 0x80000007)) );
        v40 = _mm_add_ps(v36, v37);
        v41 = _mm_add_ps(_mm_movehl_ps(v40, v40), v40);
        v35 = v41.m128_f32[0] + _mm_shuffle_ps(v41, v41, 245).m128_f32[0];
        if ( v5 < v8 )
        {
LABEL_38:
          v42 = v5;
          do
            v35 = v35 + *((float *)&v51 + v42++);
          while ( v42 < v8 );
        }
        v25 = (float)(v35 / (float)v8) + v27;
        break;
      }
    }
  }
  v43 = *(float *)((char *)&unk_1909419A0 + v4 + 26752);
  if ( v43 >= (float)(v23 - 0.125) )
  {
    v44 = v23 + 0.125;
    if ( v43 > v44 )
      v43 = v44;
  }
  else
  {
    v43 = v23 - 0.125;
  }
  *(float *)((char *)&unk_1909419A0 + v4 + 26752) = (float)((float)(v25 - v43) * 0.25) + v43;
}

