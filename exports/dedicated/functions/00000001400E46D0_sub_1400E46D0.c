/* Address: 0x1400e46d0 | Name: sub_1400E46D0 | Size: 3020 bytes */
void __fastcall sub_1400E46D0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v4; // rcx
  _DWORD *v5; // rax
  int v6; // ebp
  int v7; // r15d
  int v8; // esi
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  __m128 v11; // xmm0
  float v12; // xmm1_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  __int64 v15; // rax
  float v16; // xmm8_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm10_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  float v26; // xmm9_4
  float v27; // xmm7_4
  float v28; // xmm0_4
  float v29; // xmm11_4
  float v30; // xmm1_4
  float v31; // xmm4_4
  float v32; // xmm0_4
  float v33; // xmm11_4
  float v34; // xmm4_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  __int64 v37; // rcx
  float v38; // xmm0_4
  float v39; // xmm0_4
  int v40; // ecx
  float *v41; // rax
  float v42; // xmm0_4
  float v43; // xmm0_4
  float v44; // xmm0_4
  float *v45; // rax
  float v46; // xmm0_4
  float v47; // xmm0_4
  __int64 v48; // rdx
  float v49; // xmm4_4
  float v50; // xmm5_4
  float v51; // xmm7_4
  float *v52; // rcx
  float v53; // xmm6_4
  float v54; // xmm8_4
  float v55; // xmm9_4
  bool v56; // cc
  float v57; // xmm6_4
  float v58; // xmm2_4
  float v59; // xmm3_4
  float v60; // xmm2_4
  float v61; // xmm3_4
  float v62; // xmm2_4
  float v63; // xmm1_4
  float v64; // xmm11_4
  float v65; // xmm7_4
  float v66; // xmm10_4
  float v67; // xmm0_4
  float v68; // xmm6_4
  float v69; // xmm8_4
  float v70; // xmm9_4
  __int64 v71; // rcx
  __int64 v72; // rcx
  float v73; // xmm2_4
  float v74; // xmm1_4
  float v75; // xmm10_4
  float v76; // xmm0_4
  float v77; // xmm6_4
  float v78; // xmm8_4
  float v79; // xmm9_4
  float v80; // xmm11_4
  float v81; // xmm7_4
  __int64 v82; // r11
  __int64 v83; // r10
  int v84; // r9d
  float *v85; // rax
  float v86; // xmm6_4
  float v87; // xmm7_4
  float v88; // xmm8_4
  float v89; // xmm3_4
  float v90; // xmm4_4
  float v91; // xmm5_4
  __int64 v92; // rax

  v3 = dword_1839ABEE4;
  v4 = 0;
  if ( dword_1839ABEE4 > 0 )
  {
    v5 = &unk_1839AC114;
    do
    {
      *v5 = 0;
      v5 += 396;
      v3 = dword_1839ABEE4;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (int)v4 < dword_1839ABEE4 );
  }
  if ( !dword_16E6A3424 )
  {
    v6 = 0;
    v7 = dword_16D67C580;
    if ( dword_16D67C580 > 0 )
    {
      v8 = dword_183989EDC;
      v9 = 0;
      do
      {
        v10 = 1532 * v9;
        v11 = (__m128)*((unsigned int *)&unk_16D4FD5A8 + 383 * v9);
        *(double *)v11.m128_u64 = _libm_sse2_sincosf_(v4, a2, a3);
        v12 = *((float *)&unk_16D4FD5D8 + 383 * v9);
        v13 = v11.m128_f32[0];
        v14 = *((float *)&unk_16D4FD594 + 383 * v9);
        v15 = 1532 * v9;
        v16 = _mm_shuffle_ps(v11, v11, 1).m128_f32[0];
        v17 = v11.m128_f32[0];
        v11.m128_i32[0] = *((_DWORD *)&unk_16D4FD598 + 383 * v9);
        v18 = (float)(v16 * v12) + *((float *)&unk_16D4FD590 + 383 * v9);
        *(float *)((char *)&unk_16D4FD5E8 + v15) = v14;
        *(float *)((char *)&unk_16D4FD5F4 + v15) = v14;
        v19 = v18 + v13;
        v20 = (float)((float)(v17 * v12) + v11.m128_f32[0]) - v16;
        *(float *)((char *)&unk_16D4FD5E4 + v15) = v19;
        v21 = v19;
        *(float *)((char *)&unk_16D4FD5F0 + v15) = v19;
        *(float *)((char *)&unk_16D4FD5EC + v15) = v20;
        *(float *)((char *)&unk_16D4FD5F8 + v15) = v20;
        v22 = *((float *)&unk_16D4FD5D8 + 383 * v9);
        v23 = *((float *)&unk_16D4FD594 + 383 * v9);
        v24 = (float)((float)(v16 * v22) + *((float *)&unk_16D4FD590 + 383 * v9)) - v13;
        v25 = (float)((float)(v13 * v22) + *((float *)&unk_16D4FD598 + 383 * v9)) + v16;
        if ( v19 > v24 )
          v21 = (float)((float)(v16 * v22) + *((float *)&unk_16D4FD590 + 383 * v9)) - v13;
        *(float *)((char *)&unk_16D4FD5E4 + v15) = v21;
        if ( v19 < v24 )
          v19 = v24;
        *(float *)((char *)&unk_16D4FD5F0 + v15) = v19;
        v26 = v14;
        if ( v14 > v23 )
          v26 = v23;
        *(float *)((char *)&unk_16D4FD5E8 + v15) = v26;
        if ( v14 < v23 )
          v14 = v23;
        *(float *)((char *)&unk_16D4FD5F4 + v15) = v14;
        v27 = v20;
        if ( v20 > v25 )
          v27 = v25;
        *(float *)((char *)&unk_16D4FD5EC + v15) = v27;
        if ( v20 < v25 )
          v20 = v25;
        *(float *)((char *)&unk_16D4FD5F8 + v15) = v20;
        v28 = *(float *)((char *)&unk_16D4FD5DC + v10);
        v29 = *(float *)((char *)&unk_16D4FD594 + v10);
        v30 = (float)((float)(v16 * v28) + *(float *)((char *)&unk_16D4FD590 + v10)) - v13;
        v31 = (float)((float)(v13 * v28) + *(float *)((char *)&unk_16D4FD598 + v10)) + v16;
        if ( v21 > v30 )
          v21 = (float)((float)(v16 * v28) + *(float *)((char *)&unk_16D4FD590 + v10)) - v13;
        *(float *)((char *)&unk_16D4FD5E4 + v15) = v21;
        if ( v19 < v30 )
          v19 = v30;
        *(float *)((char *)&unk_16D4FD5F0 + v15) = v19;
        if ( v26 > v29 )
          v26 = v29;
        *(float *)((char *)&unk_16D4FD5E8 + v15) = v26;
        if ( v14 < v29 )
          v14 = v29;
        *(float *)((char *)&unk_16D4FD5F4 + v15) = v14;
        if ( v27 > v31 )
          v27 = v31;
        *(float *)((char *)&unk_16D4FD5EC + v15) = v27;
        if ( v20 < v31 )
          v20 = v31;
        *(float *)((char *)&unk_16D4FD5F8 + v15) = v20;
        v32 = *(float *)((char *)&unk_16D4FD5DC + v10);
        v33 = *(float *)((char *)&unk_16D4FD594 + v10);
        v34 = (float)((float)(v16 * v32) + *(float *)((char *)&unk_16D4FD590 + v10)) + v13;
        v35 = (float)((float)(v13 * v32) + *(float *)((char *)&unk_16D4FD598 + v10)) - v16;
        if ( v21 > v34 )
          *(float *)((char *)&unk_16D4FD5E4 + v15) = v34;
        if ( v19 < v34 )
          *(float *)((char *)&unk_16D4FD5F0 + v15) = v34;
        if ( v26 > v33 )
          *(float *)((char *)&unk_16D4FD5E8 + v15) = v33;
        if ( v14 < v33 )
          *(float *)((char *)&unk_16D4FD5F4 + v15) = v33;
        if ( v27 > v35 )
          *(float *)((char *)&unk_16D4FD5EC + v15) = v35;
        if ( v20 < v35 )
          *(float *)((char *)&unk_16D4FD5F8 + v15) = v35;
        a2 = *(int *)((char *)&unk_16D4FDB34 + v10);
        if ( (_DWORD)a2 == -1
          || (v36 = *(float *)((char *)&unk_16D4FD590 + v10),
              v37 = 1584 * a2,
              v36 < *((float *)&unk_1839AC0FC + 396 * a2))
          || v36 > *(float *)((char *)&unk_1839AC108 + v37)
          || (v38 = *(float *)((char *)&unk_16D4FD598 + v10), v38 < *(float *)((char *)&unk_1839AC104 + v37))
          || v38 > *(float *)((char *)&unk_1839AC110 + v37)
          || (v39 = *(float *)((char *)&unk_16D4FD594 + v10), v39 < *(float *)((char *)&unk_1839AC100 + v37))
          || v39 > *(float *)((char *)&unk_1839AC10C + v37) )
        {
          a2 = 0xFFFFFFFFLL;
          v40 = 0;
          *(_DWORD *)((char *)&unk_16D4FDB34 + v10) = -1;
          if ( v3 > 0 )
          {
            v41 = (float *)&unk_1839AC108;
            do
            {
              v42 = *(float *)((char *)&unk_16D4FD590 + v10);
              if ( v42 >= *(v41 - 3) && v42 <= *v41 )
              {
                v43 = *(float *)((char *)&unk_16D4FD598 + v10);
                if ( v43 >= *(v41 - 1) && v43 <= v41[2] )
                {
                  v44 = *(float *)((char *)&unk_16D4FD594 + v10);
                  if ( v44 >= *(v41 - 2) && v44 <= v41[1] )
                  {
                    a2 = (unsigned int)v40;
                    *(_DWORD *)((char *)&unk_16D4FDB34 + v10) = v40;
                  }
                }
              }
              ++v40;
              v41 += 396;
            }
            while ( v40 < v3 );
          }
        }
        *(_DWORD *)((char *)&unk_16D4FDB38 + v10) = -1;
        v4 = 0;
        if ( v8 > 0 )
        {
          v45 = (float *)&unk_183989F60;
          do
          {
            v46 = *(float *)((char *)&unk_16D4FD590 + v10);
            if ( v46 >= *(v45 - 3) && v46 <= *v45 )
            {
              v47 = *(float *)((char *)&unk_16D4FD598 + v10);
              if ( v47 >= *(v45 - 1) && v47 <= v45[2] )
                *(_DWORD *)((char *)&unk_16D4FDB38 + v10) = v4;
            }
            v4 = (unsigned int)(v4 + 1);
            v45 += 34;
          }
          while ( (int)v4 < v8 );
        }
        if ( (_DWORD)a2 == -1 )
          goto LABEL_87;
        v48 = 396LL * (int)a2;
        v49 = *(float *)&dword_1839AC0E4[v48];
        v50 = *(float *)&dword_1839AC0EC[v48];
        v51 = *(float *)&dword_1839AC0E8[v48];
        v52 = (float *)((char *)&unk_183989EF0 + 136 * dword_1839ABF0C[v48]);
        v53 = (float)(v13 * v50) + (float)(v16 * v49);
        v54 = v52[1];
        v55 = v52[2];
        v56 = v53 <= 0.0;
        v57 = *v52;
        v58 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5E8 + v10) - v54) * v51)
                    + (float)((float)(*(float *)((char *)&unk_16D4FD5E4 + v10) - *v52) * v49))
            + (float)((float)(*(float *)((char *)&unk_16D4FD5EC + v10) - v55) * v50);
        v59 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5F4 + v10) - v54) * v51)
                    + (float)((float)(*(float *)((char *)&unk_16D4FD5F0 + v10) - *v52) * v49))
            + (float)((float)(*(float *)((char *)&unk_16D4FD5F8 + v10) - v55) * v50);
        if ( v56 )
        {
          if ( v58 >= v59 )
            v58 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5F4 + v10) - v54) * v51)
                        + (float)((float)(*(float *)((char *)&unk_16D4FD5F0 + v10) - *v52) * v49))
                + (float)((float)(*(float *)((char *)&unk_16D4FD5F8 + v10) - v55) * v50);
          *(float *)((char *)&unk_16D4FDB3C + v10) = v58;
          v60 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5E8 + v10) - v54) * v51)
                      + (float)((float)(*(float *)((char *)&unk_16D4FD5E4 + v10) - v57) * v49))
              + (float)((float)(*(float *)((char *)&unk_16D4FD5EC + v10) - v55) * v50);
          v61 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5F4 + v10) - v54) * v51)
                      + (float)((float)(*(float *)((char *)&unk_16D4FD5F0 + v10) - v57) * v49))
              + (float)((float)(*(float *)((char *)&unk_16D4FD5F8 + v10) - v55) * v50);
          if ( v60 > v61 )
            goto LABEL_78;
        }
        else
        {
          if ( v58 <= v59 )
            v58 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5F4 + v10) - v54) * v51)
                        + (float)((float)(*(float *)((char *)&unk_16D4FD5F0 + v10) - *v52) * v49))
                + (float)((float)(*(float *)((char *)&unk_16D4FD5F8 + v10) - v55) * v50);
          *(float *)((char *)&unk_16D4FDB3C + v10) = v58;
          v60 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5E8 + v10) - v54) * v51)
                      + (float)((float)(*(float *)((char *)&unk_16D4FD5E4 + v10) - v57) * v49))
              + (float)((float)(*(float *)((char *)&unk_16D4FD5EC + v10) - v55) * v50);
          v61 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5F4 + v10) - v54) * v51)
                      + (float)((float)(*(float *)((char *)&unk_16D4FD5F0 + v10) - v57) * v49))
              + (float)((float)(*(float *)((char *)&unk_16D4FD5F8 + v10) - v55) * v50);
          if ( v60 < v61 )
            goto LABEL_78;
        }
        v60 = v61;
LABEL_78:
        *(float *)((char *)&unk_16D4FDB40 + v10) = v60;
        v62 = *(float *)((char *)&unk_1839ABF28 + v48 * 4);
        v63 = *(float *)((char *)&unk_1839ABF2C + v48 * 4);
        v64 = *(float *)((char *)&unk_16D4FD5E4 + v10) - v62;
        v65 = *(float *)((char *)&unk_16D4FD5E8 + v10) - v63;
        v66 = *(float *)((char *)&unk_16D4FD5F0 + v10) - v62;
        v67 = *(float *)((char *)&unk_1839ABF30 + v48 * 4);
        v68 = *(float *)((char *)&unk_16D4FD5F4 + v10) - v63;
        v69 = *(float *)((char *)&unk_16D4FD5EC + v10) - v67;
        v70 = *(float *)((char *)&unk_16D4FD5F8 + v10) - v67;
        *(float *)((char *)&unk_16D4FDB44 + v10) = fmaxf(
                                                     (float)((float)(*(float *)&dword_1839AC0E8[v48] * v68)
                                                           + (float)(*(float *)&dword_1839AC0E4[v48] * v66))
                                                   + (float)(*(float *)&dword_1839AC0EC[v48] * v70),
                                                     (float)((float)(*(float *)&dword_1839AC0E8[v48] * v65)
                                                           + (float)(*(float *)&dword_1839AC0E4[v48] * v64))
                                                   + (float)(*(float *)&dword_1839AC0EC[v48] * v69));
        v71 = 396LL * *(int *)((char *)&unk_16D4FDB34 + v10);
        *(float *)&dword_16D4FDB4C[v10 / 4] = fminf(
                                                (float)((float)(*(float *)&dword_1839AC0E4[v71 + 1] * v65)
                                                      + (float)(*(float *)&dword_1839AC0E4[v71] * v64))
                                              + (float)(*(float *)&dword_1839AC0E4[v71 + 2] * v69),
                                                (float)((float)(*(float *)&dword_1839AC0E4[v71 + 1] * v68)
                                                      + (float)(*(float *)&dword_1839AC0E4[v71] * v66))
                                              + (float)(*(float *)&dword_1839AC0E4[v71 + 2] * v70));
        v72 = 396LL * *(int *)((char *)&unk_16D4FDB34 + v10);
        v73 = *(float *)((char *)&unk_1839ABF34 + v72 * 4);
        v74 = *(float *)((char *)&unk_1839ABF38 + v72 * 4);
        v75 = *(float *)((char *)&unk_16D4FD5F0 + v10) - v73;
        v76 = *(float *)((char *)&unk_1839ABF3C + v72 * 4);
        v77 = *(float *)((char *)&unk_16D4FD5F4 + v10) - v74;
        v78 = *(float *)((char *)&unk_16D4FD5EC + v10) - v76;
        v79 = *(float *)((char *)&unk_16D4FD5F8 + v10) - v76;
        v80 = *(float *)((char *)&unk_16D4FD5E4 + v10) - v73;
        v81 = *(float *)((char *)&unk_16D4FD5E8 + v10) - v74;
        a3 = 0;
        *(float *)((char *)&unk_16D4FDB48 + v10) = -fminf(
                                                      (float)((float)(*(float *)&dword_1839AC0E8[v72] * v77)
                                                            + (float)(*(float *)&dword_1839AC0E4[v72] * v75))
                                                    + (float)(*(float *)&dword_1839AC0EC[v72] * v79),
                                                      (float)((float)(*(float *)&dword_1839AC0E8[v72] * v81)
                                                            + (float)(*(float *)&dword_1839AC0E4[v72] * v80))
                                                    + (float)(*(float *)&dword_1839AC0EC[v72] * v78));
        v4 = 1584LL * *(int *)((char *)&unk_16D4FDB34 + v10);
        a2 = 0;
        *(float *)((char *)&unk_16D4FDB50 + v10) = -fmaxf(
                                                      (float)((float)(*(float *)((char *)&dword_1839AC0E4[1] + v4) * v81)
                                                            + (float)(*(float *)((char *)dword_1839AC0E4 + v4) * v80))
                                                    + (float)(*(float *)((char *)&dword_1839AC0E4[2] + v4) * v78),
                                                      (float)((float)(*(float *)((char *)&dword_1839AC0E4[1] + v4) * v77)
                                                            + (float)(*(float *)((char *)dword_1839AC0E4 + v4) * v75))
                                                    + (float)(*(float *)((char *)&dword_1839AC0E4[2] + v4) * v79));
        v82 = *(int *)((char *)&unk_16D4FDB34 + v10);
        v83 = 1584 * v82;
        *(_DWORD *)((char *)&unk_16D4FDB54 + v10) = 0;
        v84 = *((_DWORD *)&unk_1839ABF20 + 396 * v82);
        if ( v84 > 0 )
        {
          v4 = 1584LL * *(int *)((char *)&unk_16D4FDB34 + v10);
          v85 = (float *)((char *)&unk_1839ABF30 + v4);
          v86 = *(float *)((char *)&unk_1839AC0F4 + v4);
          v87 = *(float *)((char *)&unk_1839AC0F0 + v4);
          v88 = *(float *)((char *)&unk_1839AC0F8 + v4);
          do
          {
            v89 = *(v85 - 2);
            v90 = *(v85 - 1);
            v91 = *v85;
            if ( fabs(
                   (float)((float)((float)(*(float *)((char *)&unk_16D4FD5E8 + v10) - v90) * v86)
                         + (float)((float)(*(float *)((char *)&unk_16D4FD5E4 + v10) - v89) * v87))
                 + (float)((float)(*(float *)((char *)&unk_16D4FD5EC + v10) - *v85) * v88)) < 2.0 )
            {
              LODWORD(a2) = a2 | (1 << a3);
              *(_DWORD *)((char *)&unk_16D4FDB54 + v10) = a2;
            }
            if ( fabs(
                   (float)((float)((float)(*(float *)((char *)&unk_16D4FD5F0 + v10) - v89) * v87)
                         + (float)((float)(*(float *)((char *)&unk_16D4FD5F4 + v10) - v90) * v86))
                 + (float)((float)(*(float *)((char *)&unk_16D4FD5F8 + v10) - v91) * v88)) < 2.0 )
            {
              LODWORD(a2) = a2 | (1 << a3);
              *(_DWORD *)((char *)&unk_16D4FDB54 + v10) = a2;
            }
            a3 = (unsigned int)(a3 + 1);
            v85 += 7;
          }
          while ( (int)a3 < v84 );
        }
        v92 = *(int *)((char *)&unk_1839AC114 + v83);
        if ( (int)v92 < 256 )
        {
          v4 = v92 + 396 * v82;
          dword_1839AC118[v4] = v6;
          ++*(_DWORD *)((char *)&unk_1839AC114 + v83);
          v3 = dword_1839ABEE4;
          v8 = dword_183989EDC;
        }
LABEL_87:
        ++v6;
        ++v9;
      }
      while ( v6 < v7 );
    }
  }
}

