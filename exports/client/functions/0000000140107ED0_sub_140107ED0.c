/* Address: 0x140107ed0 | Name: sub_140107ED0 | Size: 2655 bytes */
void sub_140107ED0()
{
  unsigned int v0; // r9d
  float *v1; // r12
  __int64 v2; // r13
  __int64 v3; // rbx
  int v4; // ecx
  float *v5; // rax
  int v6; // edx
  signed int v7; // r8d
  __int64 v8; // rcx
  float *v9; // rax
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm2_4
  signed int v14; // r14d
  __int64 v15; // rdi
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  __int64 v19; // rsi
  __int64 v20; // rcx
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm7_4
  unsigned int v26; // eax
  double v27; // xmm0_8
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm4_4
  float v32; // xmm3_4
  float v33; // xmm3_4
  float v34; // xmm0_4
  float v35; // xmm3_4
  float v36; // xmm5_4
  float v37; // xmm2_4
  float v38; // xmm6_4
  double v39; // xmm1_8
  float v40; // xmm2_4
  float v41; // xmm5_4
  float v42; // xmm4_4
  float v43; // xmm3_4
  float v44; // xmm2_4
  int v45; // r15d
  float v46; // xmm12_4
  unsigned int v47; // edi
  unsigned int *v48; // rsi
  __int64 v49; // rax
  float v50; // xmm2_4
  unsigned int v51; // xmm1_4
  __int64 v52; // r14
  float v53; // xmm2_4
  float v54; // xmm12_4
  unsigned int *v55; // r13
  signed int v56; // r15d
  float v57; // xmm13_4
  __int64 v58; // rsi
  unsigned int v59; // xmm8_4
  unsigned int v60; // xmm9_4
  unsigned int v61; // xmm10_4
  __int64 v62; // rdi
  float v63; // xmm11_4
  float v64; // xmm7_4
  float v65; // xmm1_4
  __int64 v66; // r14
  float v67; // xmm6_4
  float v68; // xmm0_4
  float v69; // xmm14_4
  float v70; // xmm15_4
  float v71; // xmm6_4
  float v72; // xmm14_4
  float v73; // xmm15_4
  float v74; // xmm2_4
  float v75; // xmm7_4
  float v76; // xmm6_4
  float v77; // xmm6_4
  unsigned int v78; // xmm1_4
  float v79; // xmm0_4
  float v80; // xmm13_4
  double v81; // xmm1_8
  double v82; // xmm0_8
  float v83; // [rsp+28h] [rbp-A9h] BYREF
  float v84; // [rsp+2Ch] [rbp-A5h]
  float v85; // [rsp+30h] [rbp-A1h]
  float v86; // [rsp+138h] [rbp+67h]
  unsigned int v87; // [rsp+140h] [rbp+6Fh]
  __int64 v88; // [rsp+148h] [rbp+77h]

  v0 = dword_140404A6C[179955874];
  v1 = (float *)&dword_140404A6C[129716729];
  v2 = 512;
  v3 = 0;
  v88 = 512;
  v87 = dword_140404A6C[179955874];
  do
  {
    if ( dword_140404A6C[v3 + 129716709]
      && dword_140404A6C[v3 + 129716710] != 12
      && (int)dword_140404A6C[v3 + 129720373] > 0 )
    {
      if ( v0 )
      {
        v14 = 0;
        v15 = 0;
        do
        {
          v16 = *(float *)&dword_140404A6C[v3 + 129716726];
          v17 = *(float *)&dword_140404A6C[v3 + 129716727];
          v18 = *(float *)&dword_140404A6C[v3 + 129716728];
          v83 = v16;
          v84 = v17;
          v85 = v18;
          v19 = v3 * 4 + 172 * v15;
          if ( (unsigned __int64)v15 <= 1 )
          {
            sub_14007B4D0(&v83, v1);
            v16 = v83;
            v17 = v84;
            v18 = v85;
          }
          v20 = 47LL * *(int *)((char *)&dword_140404A6C[129720374] + v19);
          v21 = (float)((float)(v17 * *(float *)&dword_140404A6C[v20 + 18215737])
                      + (float)(v16 * *(float *)&dword_140404A6C[v20 + 18215736]))
              + (float)(v18 * *(float *)&dword_140404A6C[v20 + 18215738]);
          *(float *)((char *)&dword_140404A6C[129720390] + v19) = v21;
          v22 = *(float *)&dword_140404A6C[v3 + 129720346];
          if ( v15 < 2 )
          {
            if ( v22 > 1.0 )
              v23 = 0.0;
            else
              v23 = v22 * 0.0083333338;
          }
          else
          {
            v23 = v22 * 0.016666668;
          }
          if ( v21 >= (float)-v23 )
          {
            if ( v21 <= v23 )
              v23 = -v21;
            else
              v23 = -v23;
          }
          v24 = v23 * *(float *)&dword_140404A6C[v20 + 18215742];
          ++v14;
          ++v15;
          *(float *)&dword_140404A6C[v20 + 18215739] = (float)(v16 * v24) + *(float *)&dword_140404A6C[v20 + 18215739];
          *(float *)&dword_140404A6C[v20 + 18215740] = (float)(v17 * v24) + *(float *)&dword_140404A6C[v20 + 18215740];
          *(float *)&dword_140404A6C[v20 + 18215741] = (float)(v18 * v24) + *(float *)&dword_140404A6C[v20 + 18215741];
        }
        while ( v14 < (int)dword_140404A6C[v3 + 129720373] );
        v0 = v87;
      }
      else
      {
        v4 = 0;
        v5 = (float *)&dword_140404A6C[v3 + 129720390];
        do
        {
          ++v4;
          *v5 = (float)(*(v5 - 2) * *(v5 - 1)) + *v5;
          v5 += 43;
          v6 = dword_140404A6C[v3 + 129720373];
        }
        while ( v4 < v6 );
        v7 = 0;
        v8 = 0;
        if ( v6 > 0 )
        {
          v9 = (float *)&dword_140404A6C[v3 + 129720390];
          do
          {
            v10 = *(float *)&dword_140404A6C[v3 + 129720346];
            if ( v8 < 2 )
            {
              if ( v10 > 1.0 )
                v11 = 0.0;
              else
                v11 = v10 * 0.0083333338;
            }
            else
            {
              v11 = v10 * 0.016666668;
            }
            v12 = *v9;
            if ( *v9 >= (float)-v11 )
            {
              if ( v12 <= v11 )
                v13 = 0.0;
              else
                v13 = v12 - v11;
            }
            else
            {
              v13 = v12 + v11;
            }
            *v9 = v13;
            ++v7;
            v9 += 43;
            ++v8;
          }
          while ( v7 < (int)dword_140404A6C[v3 + 129720373] );
        }
      }
      v25 = *(float *)&dword_140404A6C[v3 + 129720331];
      v26 = dword_140404A6C[v3 + 129716710];
      if ( v26 == 9 )
        v27 = 0.00003183098861837697;
      else
        v27 = 0.00002273642044169784;
      v28 = v27 * (float)(v25 * 3600.0);
      if ( v28 <= 1.0 )
      {
        v30 = fminf(fmaxf(v28, 0.0), 1.0);
        v31 = v30
            * (float)((float)((float)((float)((float)(1.0 - v30) * 2.625) + v30) * v30)
                    + (float)((float)((float)(1.0 - v30) * 1.875) * (float)(1.0 - v30)));
        v32 = 1.0 - v31;
        if ( v26 == 9 )
        {
          v33 = (float)(v32 + v32) + (float)(v31 * 0.25);
          v34 = (float)((float)(1.0 - v31) * 0.75) * (float)(1.0 - v31);
        }
        else
        {
          if ( v26 == 7 )
          {
            v35 = v32 * 2.5;
            v34 = (float)(1.0 - v31) * (float)(1.0 - v31);
          }
          else
          {
            v35 = v32 + v32;
            v34 = (float)((float)(1.0 - v31) * 0.75) * (float)(1.0 - v31);
          }
          v33 = v35 + (float)(v31 * 0.625);
        }
        v29 = (float)(v33 * v31) + v34;
      }
      else
      {
        v29 = 0.0;
      }
      v36 = *(float *)&dword_140404A6C[v3 + 129720332];
      dword_140404A6C[v3 + 129720330] = 0;
      v37 = *(float *)&dword_140404A6C[v3 + 129720333];
      dword_140404A6C[v3 + 129720335] = 1090519040;
      v38 = *(float *)&dword_140404A6C[v3 + 129720337];
      dword_140404A6C[v3 + 129720336] = 1115684864;
      v39 = (float)(1.125 - v36);
      v40 = (float)((float)((float)(v37 * 0.00027777778) * (float)(v36 * v29))
                  / (float)(v38 * *(float *)&dword_140404A6C[v3 + 129720339]))
          * 0.03125;
      v41 = *(float *)&dword_140404A6C[v3 + 129720343] * 0.035714287;
      v42 = (float)(v40 - fabs((float)(v25 * 0.005859375)) * (float)(v25 * 0.005859375) * v39) + v25;
      if ( *(float *)&dword_140404A6C[v3 + 129720343] != 0.0 )
      {
        v43 = 1.0 / (float)(v38 + 8.0);
        v44 = (float)((float)((float)(v42 * 0.125) - (float)(*(float *)&dword_140404A6C[v3 + 129720334] * v41))
                    * *(float *)&dword_140404A6C[v3 + 129720345])
            * 0.25;
        v42 = v42 - (float)((float)(v44 * v43) * *(float *)&dword_140404A6C[v3 + 129720338]);
        *(float *)&dword_140404A6C[v3 + 129720334] = (float)((float)((float)(v43 * v38) * v44) * (float)(v41 * 64.0))
                                                   + *(float *)&dword_140404A6C[v3 + 129720334];
      }
      v45 = dword_140404A6C[v3 + 129720349];
      v46 = 0.0;
      *(float *)&dword_140404A6C[v3 + 129720331] = v42;
      v47 = 0;
      if ( v45 <= 0 )
      {
        v57 = 0.0;
      }
      else
      {
        v48 = &dword_140404A6C[v3 + 129720350];
        do
        {
          v49 = v3 * 4 + 172LL * (int)*v48;
          if ( v0 )
          {
            v51 = dword_140404A6C[v3 + 129716727];
            v52 = *(int *)((char *)&dword_140404A6C[129720374] + v49);
            v83 = *(float *)&dword_140404A6C[v3 + 129716726];
            v85 = *(float *)&dword_140404A6C[v3 + 129716728];
            v84 = *(float *)&v51;
            if ( v47 <= 1 )
            {
              sub_14007B4D0(&v83, v1);
              v0 = v87;
            }
            v50 = (float)((float)(v84 * *(float *)&dword_140404A6C[47 * v52 + 18215737])
                        + (float)(v83 * *(float *)&dword_140404A6C[47 * v52 + 18215736]))
                + (float)(v85 * *(float *)&dword_140404A6C[47 * v52 + 18215738]);
          }
          else
          {
            v50 = *(float *)((char *)&dword_140404A6C[129720390] + v49);
          }
          v53 = v50 + v46;
          ++v47;
          ++v48;
          v46 = v53;
        }
        while ( (int)v47 < v45 );
        v54 = v53 * 0.5;
        v55 = &dword_140404A6C[v3 + 129720350];
        v56 = 0;
        v57 = 0.0;
        do
        {
          v58 = (int)*v55;
          v59 = dword_140404A6C[v3 + 129716726];
          v60 = dword_140404A6C[v3 + 129716727];
          v61 = dword_140404A6C[v3 + 129716728];
          v83 = *(float *)&v59;
          v84 = *(float *)&v60;
          v85 = *(float *)&v61;
          v62 = v3 * 4 + 172 * v58;
          v63 = *(float *)((char *)&dword_140404A6C[129720390] + v62);
          if ( (unsigned int)v58 <= 1 )
          {
            sub_14007B4D0(&v83, v1);
            v0 = v87;
          }
          v64 = *(float *)&dword_140404A6C[v3 + 129720335];
          v65 = *(float *)((char *)&dword_140404A6C[129720386] + v62);
          v66 = 47LL * *(int *)((char *)&dword_140404A6C[129720374] + v62);
          v67 = (float)((float)(v54 - v63) * *(float *)&dword_140404A6C[v66 + 18215742]) * 0.0009765625;
          v68 = v85 * v67;
          v69 = v83 * v67;
          v70 = v84 * v67;
          v71 = *(float *)&dword_140404A6C[v3 + 129720334];
          v72 = v69 + *(float *)&dword_140404A6C[v66 + 18215739];
          *(float *)&dword_140404A6C[v66 + 18215739] = v72;
          v73 = v70 + *(float *)&dword_140404A6C[v66 + 18215740];
          *(float *)&dword_140404A6C[v66 + 18215740] = v73;
          v86 = v68 + *(float *)&dword_140404A6C[v66 + 18215741];
          *(float *)&dword_140404A6C[v66 + 18215741] = v86;
          v74 = 1.0 / (float)(v64 + v65);
          v75 = v64 * v74;
          v76 = (float)(v71 * 0.03125) - (float)(v54 * 0.109375);
          v57 = v57
              + (float)((float)((float)(v74 * v65) * v76) * (float)(*(float *)&dword_140404A6C[v3 + 129720336] * -0.125));
          if ( v0 )
          {
            v83 = *(float *)&v59;
            v84 = *(float *)&v60;
            v85 = *(float *)&v61;
            if ( (unsigned int)v58 <= 1 )
            {
              sub_14007B4D0(&v83, v1);
              v0 = v87;
            }
            v77 = (float)(v76 * v75) * 0.4375;
            *(float *)&v78 = (float)(v84 * v77) + v73;
            *(float *)&dword_140404A6C[v66 + 18215739] = (float)(v83 * v77) + v72;
            v79 = v85 * v77;
            dword_140404A6C[v66 + 18215740] = v78;
            *(float *)&dword_140404A6C[v66 + 18215741] = v79 + v86;
          }
          else
          {
            *(float *)((char *)&dword_140404A6C[129720390] + v62) = (float)((float)(v76
                                                                                  * *(float *)((char *)&dword_140404A6C[129720388]
                                                                                             + v62))
                                                                          * (float)(v75 * 0.4375))
                                                                  + v63;
          }
          ++v56;
          ++v55;
        }
        while ( v56 < (int)dword_140404A6C[v3 + 129720349] );
        v2 = v88;
      }
      v80 = v57 + *(float *)&dword_140404A6C[v3 + 129720334];
      v81 = fabs(*(float *)&dword_140404A6C[v3 + 129720331]);
      *(float *)&dword_140404A6C[v3 + 129720334] = v80;
      if ( v81 > 0.0 && v81 < 0.0000152587890625 )
        dword_140404A6C[v3 + 129720331] = 0;
      v82 = fabs(v80);
      if ( v82 > 0.0 && v82 < 0.0000152587890625 )
        dword_140404A6C[v3 + 129720334] = 0;
    }
    v1 += 5210;
    v3 += 5210;
    v88 = --v2;
  }
  while ( v2 );
}

