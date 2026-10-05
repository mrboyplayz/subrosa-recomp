/* Address: 0x1400b1910 | Name: sub_1400B1910 | Size: 4351 bytes */
void __fastcall sub_1400B1910(int a1)
{
  __int64 v1; // r15
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  int v5; // eax
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  int v10; // ebp
  int *v11; // rbx
  char v12; // al
  __int64 v13; // r13
  double v14; // xmm7_8
  __int64 v15; // r8
  int v16; // xmm6_4
  float v17; // xmm1_4
  double v18; // xmm13_8
  double v19; // xmm6_8
  int v20; // ebx
  unsigned __int64 v21; // rax
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm8_4
  float v25; // xmm3_4
  float v26; // xmm7_4
  double v27; // xmm0_8
  int v28; // eax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // rdx
  unsigned __int64 v32; // rax
  double v33; // xmm0_8
  __m128 v34; // xmm1
  float v35; // xmm7_4
  __m128 v36; // xmm6
  float v37; // xmm8_4
  float v38; // xmm10_4
  double v39; // xmm0_8
  float *v40; // rbx
  float v41; // xmm2_4
  float v42; // xmm1_4
  int v43; // ebp
  __int64 v44; // rax
  float v45; // xmm7_4
  float v46; // xmm1_4
  bool v47; // cc
  bool v48; // zf
  __int64 v49; // rbx
  __int64 v50; // rcx
  float v51; // xmm0_4
  __int64 v52; // rax
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // xmm4_4
  float v56; // xmm3_4
  float v57; // xmm2_4
  int v58; // eax
  int v59; // ecx
  double v60; // xmm6_8
  double v61; // xmm11_8
  unsigned __int64 v62; // rax
  float v63; // xmm2_4
  float v64; // xmm3_4
  __m128 v65; // xmm9
  float v66; // xmm13_4
  float v67; // xmm0_4
  float v68; // xmm12_4
  float v69; // xmm10_4
  __m128 v70; // xmm7
  float v71; // xmm8_4
  double v72; // xmm0_8
  __int64 v73; // rcx
  float v74; // xmm3_4
  float v75; // xmm2_4
  float v76; // xmm4_4
  float *v77; // rbx
  float *v78; // r15
  int v79; // ebp
  __int64 v80; // rax
  float v81; // xmm0_4
  int v82; // [rsp+20h] [rbp-108h]
  float v83; // [rsp+28h] [rbp-100h] BYREF
  float v84; // [rsp+2Ch] [rbp-FCh]
  float v85; // [rsp+30h] [rbp-F8h]
  _OWORD v86[2]; // [rsp+40h] [rbp-E8h] BYREF
  int v87; // [rsp+60h] [rbp-C8h]

  v1 = a1;
  v2 = 3597LL * a1;
  v3 = 14388LL * a1;
  v4 = 0;
  v82 = a1;
  *(__int64 *)((char *)&qword_16D67D640 + 4 * v2) = 0;
  *(__int64 *)((char *)&qword_16D67D648 + 4 * v2) = 0;
  v5 = *(_DWORD *)((char *)&unk_16D680AF0 + v3);
  dword_16D67D6C0[v3 / 4] = 0;
  if ( v5 > 0 )
  {
    *(_DWORD *)((char *)&unk_16D680AF0 + v3) = v5 - 1;
    return;
  }
  v6 = dword_16D67D63C[v3 / 4];
  if ( (_DWORD)v6 == -1 )
    return;
  v7 = 7166 * v6;
  if ( *((_DWORD *)&unk_1909487A8 + 7166 * v6) == -1 && dword_190948498[v7] > 0 )
  {
    v8 = 1760LL * dword_19094849C[v7];
    if ( !*(_DWORD *)((char *)&unk_19025F204 + v8 * 4) )
    {
      if ( dword_19025F0F4[v8] )
      {
        if ( *((int *)&unk_19025F204 + 1760 * dword_19025F0F8[v8]) > 0 )
        {
          v12 = rand();
          a1 = v82;
          if ( (v12 & 0x1F) == 0 )
            dword_16D67D6C0[3597 * v1] |= 0x1000u;
          goto LABEL_28;
        }
        if ( (rand() & 0x1F) == 0 )
        {
          *((_DWORD *)&unk_16D67D768 + 3597 * v1 + 21 * *((int *)&unk_16D67D754 + 3597 * v1)) = 3;
          dword_16D67D76C[3597 * v1 + 21 * *((int *)&unk_16D67D754 + 3597 * v1)] = 1;
          dword_16D67D770[3597 * v1 + 21 * *((int *)&unk_16D67D754 + 3597 * v1)] = 1;
          *((_DWORD *)&unk_16D67D774 + 3597 * v1 + 21 * *((int *)&unk_16D67D754 + 3597 * v1)) = 0;
          *((_DWORD *)&unk_16D67D754 + 3597 * v1) = ((unsigned __int8)*((_DWORD *)&unk_16D67D754 + 3597 * v1) + 1)
                                                  & 0x3F;
        }
        goto LABEL_27;
      }
      if ( *(int *)((char *)&unk_1909484C0 + v7 * 4) <= 0 )
      {
        v10 = 4;
        v4 = 4;
        v11 = (int *)((char *)&unk_190948514 + v7 * 4);
        do
        {
          if ( *(v11 - 1) > 0
            && dword_1901221DC[1268 * dword_19025F0D4[1760 * *v11] + dword_19025F0D4[1760 * dword_19094849C[v7]]]
            && (rand() & 1) == 0 )
          {
            *((_DWORD *)&unk_16D67D768 + 3597 * v1 + 21 * *((int *)&unk_16D67D754 + 3597 * v1)) = 3;
            dword_16D67D76C[3597 * v1 + 21 * *((int *)&unk_16D67D754 + 3597 * v1)] = v10;
            dword_16D67D770[3597 * v1 + 21 * *((int *)&unk_16D67D754 + 3597 * v1)] = 1;
            *((_DWORD *)&unk_16D67D774 + 3597 * v1 + 21 * *((int *)&unk_16D67D754 + 3597 * v1)) = 0;
            *((_DWORD *)&unk_16D67D754 + 3597 * v1) = ((unsigned __int8)*((_DWORD *)&unk_16D67D754 + 3597 * v1) + 1)
                                                    & 0x3F;
          }
          ++v10;
          v11 += 10;
          --v4;
        }
        while ( v4 );
        goto LABEL_27;
      }
      if ( *((int *)&unk_19025F204 + 1760 * *(int *)((char *)&unk_1909484C4 + v7 * 4)) <= 0 )
      {
        if ( (rand() & 0x1F) != 0 )
          goto LABEL_27;
        v9 = 14388 * v1;
        *((_DWORD *)&unk_16D67D768 + 3597 * v1 + 21 * *((int *)&unk_16D67D754 + 3597 * v1)) = 3;
        dword_16D67D76C[3597 * v1 + 21 * *((int *)&unk_16D67D754 + 3597 * v1)] = 2;
        goto LABEL_12;
      }
      if ( (rand() & 0x1F) == 0 )
      {
        v9 = 14388 * v1;
        *((_DWORD *)&unk_16D67D768 + 3597 * v1 + 21 * *((int *)&unk_16D67D754 + 3597 * v1)) = 3;
        dword_16D67D76C[3597 * v1 + 21 * *((int *)&unk_16D67D754 + 3597 * v1)] = 1;
LABEL_12:
        dword_16D67D770[21 * *(int *)((char *)&unk_16D67D754 + v9) + v9 / 4] = 1;
        *(_DWORD *)((char *)&unk_16D67D774 + 84 * *(int *)((char *)&unk_16D67D754 + v9) + v9) = 0;
        *(_DWORD *)((char *)&unk_16D67D754 + v9) = ((unsigned __int8)*(_DWORD *)((char *)&unk_16D67D754 + v9) + 1)
                                                 & 0x3F;
      }
    }
LABEL_27:
    a1 = v82;
  }
LABEL_28:
  v13 = dword_1909419F0[v7];
  if ( (_DWORD)v13 == -1 )
  {
    sub_140003C00(a1, v6);
    HIDWORD(v14) = 0;
    *(_DWORD *)((char *)&qword_16D67D6F8 + v3) = 1;
    v86[0] = xmmword_1400F78B0;
    v87 = 1065353216;
    v86[1] = xmmword_1400F78B0;
    sub_140049C20((__int64)v86, (float *)&qword_140146A28, v15);
    v16 = *(_DWORD *)((char *)&unk_190941AA0 + v7 * 4);
    v17 = *(float *)((char *)&unk_16D67D650 + v3)
        - sub_140006DC0(COERCE_DOUBLE((unsigned __int64)v16), *(float *)((char *)&unk_16D67D660 + v3)).m128_f32[0];
    *(_DWORD *)((char *)&unk_16D67D660 + v3) = v16;
    *(float *)((char *)&unk_16D67D650 + v3) = v17;
    if ( v17 >= -2.74889357189125 )
    {
      if ( v17 > 2.74889357189125 )
        *(_DWORD *)((char *)&unk_16D67D650 + v3) = 1076882911;
    }
    else
    {
      *(_DWORD *)((char *)&unk_16D67D650 + v3) = -1070600737;
    }
    *(_QWORD *)&v18 = *(unsigned int *)((char *)&unk_16D6802C8 + v3);
    if ( *(float *)((char *)&xmmword_190941C2C + v7 * 4) < 0.89999998 )
    {
      if ( (dword_191541414 & 0x7Fu) > 0x40 )
        dword_16D67D6C0[v3 / 4] |= 8u;
      return;
    }
    LODWORD(v19) = 0;
    if ( *(_DWORD *)((char *)&unk_16D6802D4 + v3) < *(_DWORD *)((char *)&unk_16D6802D8 + v3) )
    {
      *(_DWORD *)((char *)&qword_16D67D648 + v3 + 4) = 1065353216;
      v20 = *(_DWORD *)((char *)&unk_16D6802D4 + v3);
      v21 = v3 + 32LL * v20;
      v22 = *(float *)((char *)&unk_16D6802DC + v21) - *(float *)&dword_190941A48[v7];
      v23 = *(float *)((char *)&unk_16D6802DC + v21 + 8) - *(float *)&dword_190941A50[v7];
      v24 = (float)(v23 * v23) + (float)(v22 * v22);
      v25 = fsqrt(v24);
      if ( v25 == 0.0 )
      {
        v27 = 0.0;
        v26 = 0.0;
      }
      else
      {
        *(float *)&v14 = 1.0 / v25;
        v27 = v14;
        v26 = (float)(1.0 / v25) * v23;
        *(float *)&v27 = *(float *)&v27 * v22;
      }
      *(float *)&v27 = atan2f(*(float *)&v27, -v26);
      v18 = v27;
      if ( v24 < 4.0 )
      {
        v28 = v20 + 1;
        if ( v20 + 1 >= *(_DWORD *)((char *)&unk_16D6802D8 + v3) )
          v28 = 0;
        *(_DWORD *)((char *)&unk_16D6802D4 + v3) = v28;
      }
    }
    if ( *(int *)((char *)&unk_16D680AFC + v3) <= 0 )
      goto LABEL_70;
    v29 = v3 + 24LL * *(int *)((char *)&unk_16D680B00 + v3);
    if ( *(float *)((char *)dword_16D680B14 + v29) < 2.0
      && fabs(*(float *)((char *)&unk_16D680B0C + v29) - *(float *)&dword_190941A4C[v7]) < 2.0
      && (rand() & 0x1F) == 0 )
    {
      v30 = *(int *)((char *)&unk_16D680B00 + v3);
      *(_QWORD *)((char *)&unk_16D6802D4 + v3) = 0;
      v31 = (_DWORD *)((char *)&unk_16D680B08 + 24 * v30 + v3);
      *(_DWORD *)((char *)&unk_16D6802DC + v3) = *v31;
      *(_DWORD *)((char *)&unk_16D6802E0 + v3) = v31[1];
      *(_DWORD *)((char *)&unk_16D6802E4 + v3) = v31[2];
      ++*(_DWORD *)((char *)&unk_16D6802D8 + v3);
    }
    if ( *(int *)((char *)&unk_16D680AFC + v3) <= 0 )
      goto LABEL_70;
    v32 = v3 + 24LL * *(int *)((char *)&unk_16D680B00 + v3);
    if ( *(float *)((char *)dword_16D680B14 + v32) <= 12.0 )
      goto LABEL_70;
    *(_QWORD *)&v33 = *(unsigned int *)((char *)&unk_16D680B08 + v32);
    *(float *)&v33 = *(float *)&v33 - *(float *)((char *)&unk_190942474 + v7 * 4);
    v34 = (__m128)*(unsigned int *)((char *)&unk_16D680B10 + v32);
    v34.m128_f32[0] = v34.m128_f32[0] - *(float *)((char *)&unk_19094247C + v7 * 4);
    v35 = *(float *)&v33 * *(float *)&v33;
    v36 = v34;
    v37 = (float)(*(float *)((char *)&unk_16D680B0C + v32) - *(float *)((char *)&unk_190942478 + v7 * 4)) - 0.25;
    v38 = (float)((float)(v37 * v37) + (float)(*(float *)&v33 * *(float *)&v33))
        + (float)(v34.m128_f32[0] * v34.m128_f32[0]);
    *(float *)&v33 = atan2f(*(float *)&v33, -v34.m128_f32[0]);
    v36.m128_f32[0] = (float)(v34.m128_f32[0] * v34.m128_f32[0]) + v35;
    v18 = v33;
    v39 = atan2((float)-v37, _mm_sqrt_pd(_mm_cvtps_pd(v36)).m128d_f64[0]);
    HIDWORD(v19) = 0;
    *(float *)&v19 = v39;
    if ( *(_DWORD *)((char *)&unk_16D6802BC + v3) == 1
      && (*(_DWORD *)((char *)&qword_16D67D648 + v3 + 4) = 1065353216, *(_DWORD *)((char *)&unk_16D6802BC + v3) == 1)
      || v38 >= 1024.0 )
    {
      if ( v38 >= 4096.0 )
      {
LABEL_70:
        v45 = *(float *)((char *)&unk_16D67D650 + v3);
        v46 = (float)(*(float *)&dword_190941AC0[v7] + *(float *)((char *)&unk_190941A60 + v7 * 4)) + v45;
        if ( v46 < -3.14159265359 )
          v46 = v46 + 6.28318530718;
        if ( v46 > 3.14159265359 )
          v46 = v46 - 6.28318530718;
        *(float *)((char *)&unk_16D67D650 + v3) = (float)(sub_140006DC0(v18, v46).m128_f32[0] * 0.5) + v45;
        *(float *)((char *)&unk_16D67D654 + v3) = (float)((float)(*(float *)&v19
                                                                - *(float *)((char *)&unk_16D67D654 + v3))
                                                        * 0.0625)
                                                + *(float *)((char *)&unk_16D67D654 + v3);
        v47 = *(_DWORD *)((char *)&unk_16D680AFC + v3) <= 0;
        *(_DWORD *)((char *)&unk_16D67D6D4 + v3) = 1;
        if ( !v47 && *(float *)&dword_16D680B14[v3 / 4] > 8.0 )
          *(_DWORD *)((char *)&unk_16D67D6D4 + v3) = 0;
        return;
      }
    }
    else
    {
      *(_DWORD *)((char *)&qword_16D67D648 + v3 + 4) = 0;
    }
    if ( fabs(sub_140006DC0(v18, *(float *)((char *)&unk_190941A60 + v7 * 4)).m128_f32[0]) < 0.125
      && fabs(sub_140006DC0(v19, *(float *)((char *)&unk_16D67D654 + v3)).m128_f32[0]) < 0.125 )
    {
      v40 = (float *)dword_190941F9C;
      v41 = *(float *)((char *)&xmmword_190942724 + v7 * 4 + 4) * 64.0;
      v42 = *(float *)((char *)&xmmword_190942724 + v7 * 4) * 64.0;
      v43 = 0;
      v83 = *(float *)(0x140000000LL + v7 * 4 + 1351886564)
          - (float)(*(float *)((char *)&xmmword_190942714 + v7 * 4 + 12) * 64.0);
      v84 = *(float *)(0x140000004LL + v7 * 4 + 1351886564) - v42;
      v85 = *(float *)(0x140000008LL + v7 * 4 + 1351886564) - v41;
      while ( 1 )
      {
        if ( *((_DWORD *)v40 - 373) )
        {
          if ( v43 != (_DWORD)v6 )
          {
            v44 = *((int *)v40 - 371);
            if ( (_DWORD)v44 != -1
              && dword_16D67D624[3597 * v44] == dword_16D67D624[v3 / 4]
              && (float)((float)((float)((float)(*(float *)&dword_190941F98[v7] - *(v40 - 1))
                                       * (float)(*(float *)&dword_190941F98[v7] - *(v40 - 1)))
                               + (float)((float)(*(float *)&dword_190941F94[v7] - *(v40 - 2))
                                       * (float)(*(float *)&dword_190941F94[v7] - *(v40 - 2))))
                       + (float)((float)(*(float *)&dword_190941F9C[v7] - *v40)
                               * (float)(*(float *)&dword_190941F9C[v7] - *v40))) < 16384.0
              && sub_1400818E0(v43, (float *)(0x140000000LL + v7 * 4 + 1351886564), &v83, 0.25) )
            {
              break;
            }
          }
        }
        ++v43;
        v40 += 7166;
        if ( v43 >= 256 )
        {
          if ( dword_190948498[v7] > 0 && *((int *)&unk_19025F204 + 1760 * dword_19094849C[v7]) > 0 && (rand() & 3) == 0 )
            dword_16D67D6C0[v3 / 4] |= 1u;
          goto LABEL_70;
        }
      }
    }
    goto LABEL_70;
  }
  v48 = dword_1909419F4[v7] == 0;
  *(_DWORD *)((char *)&qword_16D67D6F8 + v3) = 2;
  if ( v48 )
  {
    if ( dword_1915413AC == 1 )
    {
      *(_DWORD *)((char *)&qword_16D67D648 + v3 + 4) = -1082130432;
    }
    else
    {
      v49 = 5210 * v13;
      v50 = dword_16E6A72A8[5210 * v13];
      if ( (_DWORD)v50 != -1 )
      {
        *((_DWORD *)&unk_16D4FD600 + 383 * v50) = 1;
        sub_1400055F0(v50);
        v51 = *(float *)&dword_16E6A3CEC[v49] * *(float *)&dword_16E6A3CBC[v49];
        v52 = dword_16E6A72A8[v49];
        v53 = *(float *)&dword_16E6A3CF0[v49] * *(float *)&dword_16E6A3CC0[v49];
        *(_DWORD *)((char *)&qword_16D67D640 + v3) = 0x40000000;
        v54 = *(float *)&dword_16E6A3CF4[v49] * *(float *)&dword_16E6A3CC4[v49];
        *(_DWORD *)((char *)&qword_16D67D648 + v3) = -1082130432;
        v55 = *((float *)&unk_16D4FD5D4 + 383 * v52);
        v56 = *((float *)&unk_16D4FD5D0 + 383 * v52);
        *(float *)((char *)&qword_16D67D640 + v3 + 4) = v56;
        v57 = (float)((float)(v53 + v51) + (float)(v54 + v55)) * 8.0;
        if ( v57 > 1.0 )
          v57 = 1.0;
        *(float *)((char *)&qword_16D67D648 + v3 + 4) = v57 / (float)(fabs(v56) + 1.0);
        if ( v55 < 0.050000001 )
          *(_DWORD *)((char *)&qword_16D67D648 + v3 + 4) = -1082130432;
        v58 = *((_DWORD *)&unk_16D4FDB30 + 383 * v52);
        dword_16D67D6C0[v3 / 4] = 0;
        if ( v58 >= 180 )
        {
          *(_DWORD *)((char *)&qword_16D67D648 + v3 + 4) = 1065353216;
          *(__int64 *)((char *)&qword_16D67D640 + v3) = 0x40000000;
          *(_DWORD *)((char *)&qword_16D67D648 + v3) = 1065353216;
          if ( v58 >= 280 )
            *(_DWORD *)((char *)&qword_16D67D648 + v3 + 4) = -1082130432;
        }
      }
    }
  }
  else
  {
    sub_140003C00(a1, v6);
    v59 = dword_1909419F4[v7];
    LODWORD(v60) = 0;
    LODWORD(v61) = 0;
    if ( v59 == 1 )
    {
      LODWORD(v61) = 1061752795;
    }
    else if ( ((v59 - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( ((v59 - 3) & 0xFFFFFFFD) == 0 )
        LODWORD(v61) = 1075235812;
    }
    else
    {
      LODWORD(v61) = -1072247836;
    }
    if ( *(int *)((char *)&unk_16D680AFC + v3) > 0 )
    {
      v62 = v3 + 24LL * *(int *)((char *)&unk_16D680B00 + v3);
      if ( *(float *)((char *)dword_16D680B14 + v62) > 8.0 )
      {
        v65 = (__m128)*(unsigned int *)((char *)&unk_16D680B0C + v62);
        v63 = *(float *)((char *)&unk_16D680B08 + v62) - *(float *)((char *)&unk_1909426E4 + v7 * 4);
        v64 = *(float *)((char *)&unk_16D680B10 + v62) - *(float *)((char *)&unk_1909426EC + v7 * 4);
        v65.m128_f32[0] = (float)(v65.m128_f32[0] - *(float *)((char *)&unk_1909426E8 + v7 * 4)) - 0.25;
        v66 = (float)((float)(v65.m128_f32[0] * v65.m128_f32[0]) + (float)(v63 * v63)) + (float)(v64 * v64);
        v67 = fsqrt(v66);
        if ( v67 == 0.0 )
        {
          v68 = 0.0;
          v65 = 0;
          v69 = 0.0;
        }
        else
        {
          v65.m128_f32[0] = v65.m128_f32[0] * (float)(1.0 / v67);
          v68 = (float)(1.0 / v67) * v63;
          v69 = (float)(1.0 / v67) * v64;
        }
        v70 = v65;
        v71 = (float)((float)(v65.m128_f32[0] * *(float *)&dword_16E6A3CA8[5210 * v13])
                    + (float)(v68 * *(float *)&dword_16E6A3CA4[5210 * v13]))
            + (float)(v69 * *(float *)&dword_16E6A3CAC[5210 * v13]);
        HIDWORD(v72) = v65.m128_i32[1];
        v70.m128_f32[0] = (float)((float)(v65.m128_f32[0] * *(float *)&dword_16E6A3CC0[5210 * v13])
                                + (float)(v68 * *(float *)&dword_16E6A3CBC[5210 * v13]))
                        + (float)(v69 * *(float *)&dword_16E6A3CC4[5210 * v13]);
        *(float *)&v72 = atan2f(v71, -v70.m128_f32[0]);
        v61 = v72;
        v70.m128_f32[0] = (float)(v70.m128_f32[0] * v70.m128_f32[0]) + (float)(v71 * v71);
        HIDWORD(v60) = 0;
        *(float *)&v60 = atan2(
                           (float)-(float)((float)((float)(v65.m128_f32[0] * *(float *)&dword_16E6A3CB4[5210 * v13])
                                                 + (float)(v68 * *(float *)&dword_16E6A3CB0[5210 * v13]))
                                         + (float)(v69 * *(float *)&dword_16E6A3CB8[5210 * v13])),
                           _mm_sqrt_pd(_mm_cvtps_pd(v70)).m128d_f64[0]);
        if ( v66 < 1024.0
          && fabs(sub_140006DC0(v61, *(float *)((char *)&unk_16D67D650 + v3)).m128_f32[0]) < 0.125
          && fabs(sub_140006DC0(v60, *(float *)((char *)&unk_16D67D654 + v3)).m128_f32[0]) < 0.125 )
        {
          v73 = 1760LL * dword_19025F0F8[1760 * dword_19094849C[v7]];
          v74 = *(float *)&dword_19025F180[v73];
          v75 = *(float *)&dword_19025F17C[v73];
          v76 = *(float *)&dword_19025F184[v73];
          if ( (float)((float)((float)(v68 * v75) + (float)(v65.m128_f32[0] * v74)) + (float)(v69 * v76)) < -0.9975 )
          {
            v77 = (float *)dword_190941F9C;
            v78 = (float *)(0x140000000LL + v73 * 4 + 1344663836);
            v79 = 0;
            v83 = *v78 - (float)(v75 * 64.0);
            v84 = *(float *)(0x140000004LL + v73 * 4 + 1344663836) - (float)(v74 * 64.0);
            v85 = *(float *)(0x140000008LL + v73 * 4 + 1344663836) - (float)(v76 * 64.0);
            while ( 1 )
            {
              if ( *((_DWORD *)v77 - 373) )
              {
                if ( v4 != v6 )
                {
                  v80 = *((int *)v77 - 371);
                  if ( (_DWORD)v80 != -1
                    && dword_16D67D624[3597 * v80] == dword_16D67D624[v3 / 4]
                    && (float)((float)((float)((float)(*(float *)&dword_190941F98[v7] - *(v77 - 1))
                                             * (float)(*(float *)&dword_190941F98[v7] - *(v77 - 1)))
                                     + (float)((float)(*(float *)&dword_190941F94[v7] - *(v77 - 2))
                                             * (float)(*(float *)&dword_190941F94[v7] - *(v77 - 2))))
                             + (float)((float)(*(float *)&dword_190941F9C[v7] - *v77)
                                     * (float)(*(float *)&dword_190941F9C[v7] - *v77))) < 4096.0
                    && sub_1400818E0(v79, v78, &v83, 0.25) )
                  {
                    break;
                  }
                }
              }
              ++v79;
              ++v4;
              v77 += 7166;
              if ( v79 >= 256 )
              {
                if ( (!(unsigned int)sub_1400831C0((unsigned int)v13, v78, &v83, 0)
                   || dword_16E18CA70 == -1
                   || dword_16E18CA6C == 1)
                  && dword_190948498[v7] > 0
                  && *((int *)&unk_19025F204 + 1760 * dword_19094849C[v7]) > 0 )
                {
                  dword_16D67D6C0[v3 / 4] |= 1u;
                }
                break;
              }
            }
          }
        }
      }
    }
    v81 = *(float *)((char *)&unk_16D67D654 + v3);
    *(float *)((char *)&unk_16D67D650 + v3) = (float)((float)(*(float *)&v61 - *(float *)((char *)&unk_16D67D650 + v3))
                                                    * 0.0625)
                                            + *(float *)((char *)&unk_16D67D650 + v3);
    *(float *)((char *)&unk_16D67D654 + v3) = (float)((float)(*(float *)&v60 - v81) * 0.0625) + v81;
  }
  if ( dword_16E6A3C6C[5210 * v13] > 0 )
  {
    *(_DWORD *)((char *)&unk_16D680AF8 + v3) = 0;
  }
  else if ( (int)++*(_DWORD *)((char *)&unk_16D680AF8 + v3) >= 180 )
  {
    dword_16D67D6C0[v3 / 4] |= 0x800u;
  }
}

