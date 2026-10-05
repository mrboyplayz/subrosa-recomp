/* Address: 0x1400a2260 | Name: sub_1400A2260 | Size: 2655 bytes */
void __fastcall sub_1400A2260(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  float *v4; // r12
  __int64 v5; // r13
  unsigned __int64 v6; // rbx
  int v7; // ecx
  float *v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  float *v11; // rax
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm2_4
  int v16; // r14d
  __int64 v17; // rdi
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm7_4
  int v28; // eax
  double v29; // xmm0_8
  float v30; // xmm4_4
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm4_4
  float v34; // xmm3_4
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm3_4
  float v38; // xmm5_4
  float v39; // xmm2_4
  float v40; // xmm6_4
  double v41; // xmm1_8
  float v42; // xmm2_4
  float v43; // xmm5_4
  float v44; // xmm4_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  int v47; // r15d
  float v48; // xmm12_4
  unsigned int v49; // edi
  int *v50; // rsi
  unsigned __int64 v51; // rax
  float v52; // xmm2_4
  int v53; // xmm1_4
  __int64 v54; // r14
  float v55; // xmm2_4
  float v56; // xmm12_4
  int *v57; // r13
  int v58; // r15d
  float v59; // xmm13_4
  __int64 v60; // rsi
  int v61; // xmm8_4
  int v62; // xmm9_4
  int v63; // xmm10_4
  unsigned __int64 v64; // rdi
  float v65; // xmm11_4
  float v66; // xmm7_4
  float v67; // xmm1_4
  __int64 v68; // r14
  float v69; // xmm6_4
  float v70; // xmm0_4
  float v71; // xmm14_4
  float v72; // xmm15_4
  float v73; // xmm6_4
  float v74; // xmm14_4
  float v75; // xmm15_4
  float v76; // xmm2_4
  float v77; // xmm7_4
  float v78; // xmm6_4
  float v79; // xmm6_4
  int v80; // xmm1_4
  float v81; // xmm0_4
  float v82; // xmm13_4
  double v83; // xmm1_8
  double v84; // xmm0_8
  float v85; // [rsp+28h] [rbp-A9h] BYREF
  float v86; // [rsp+2Ch] [rbp-A5h]
  float v87; // [rsp+30h] [rbp-A1h]
  float v88; // [rsp+138h] [rbp+67h]
  int v89; // [rsp+140h] [rbp+6Fh]
  __int64 v90; // [rsp+148h] [rbp+77h]

  v3 = qword_16E67FEF4;
  v4 = (float *)dword_16E6A3CB0;
  v5 = 512;
  v6 = 0;
  v90 = 512;
  v89 = qword_16E67FEF4;
  do
  {
    if ( dword_16E6A3C60[v6 / 4] && dword_16E6A3C64[v6 / 4] != 12 && dword_16E6A75A0[v6 / 4] > 0 )
    {
      if ( v3 )
      {
        v16 = 0;
        v17 = 0;
        do
        {
          v18 = *(float *)&dword_16E6A3CA4[v6 / 4];
          v19 = *(float *)&dword_16E6A3CA8[v6 / 4];
          v20 = *(float *)&dword_16E6A3CAC[v6 / 4];
          v85 = v18;
          v86 = v19;
          v87 = v20;
          v21 = v6 + 172 * v17;
          if ( (unsigned __int64)v17 <= 1 )
          {
            sub_140049E50(&v85, v4, a3);
            v18 = v85;
            v19 = v86;
            v20 = v87;
          }
          v22 = 47LL * *(int *)((char *)&unk_16E6A75A4 + v21);
          v23 = (float)((float)(v19 * *(float *)((char *)&unk_140249670 + v22 * 4))
                      + (float)(v18 * *(float *)((char *)&unk_14024966C + v22 * 4)))
              + (float)(v20 * *(float *)((char *)&unk_140249674 + v22 * 4));
          *(float *)((char *)&unk_16E6A75E4 + v21) = v23;
          v24 = *(float *)((char *)&unk_16E6A7534 + v6);
          if ( v17 < 2 )
          {
            if ( v24 > 1.0 )
              v25 = 0.0;
            else
              v25 = v24 * 0.0083333338;
          }
          else
          {
            v25 = v24 * 0.016666668;
          }
          if ( v23 >= (float)-v25 )
          {
            if ( v23 <= v25 )
              v25 = -v23;
            else
              v25 = -v25;
          }
          v26 = v25 * *(float *)((char *)&unk_140249684 + v22 * 4);
          ++v16;
          ++v17;
          *(float *)&dword_140249678[v22] = (float)(v18 * v26) + *(float *)&dword_140249678[v22];
          *(float *)&dword_14024967C[v22] = (float)(v19 * v26) + *(float *)&dword_14024967C[v22];
          *(float *)&dword_140249680[v22] = (float)(v20 * v26) + *(float *)&dword_140249680[v22];
        }
        while ( v16 < dword_16E6A75A0[v6 / 4] );
        v3 = v89;
      }
      else
      {
        v7 = 0;
        v8 = (float *)((char *)&unk_16E6A75E4 + v6);
        do
        {
          ++v7;
          *v8 = (float)(*(v8 - 2) * *(v8 - 1)) + *v8;
          v8 += 43;
          v9 = dword_16E6A75A0[v6 / 4];
        }
        while ( v7 < v9 );
        a3 = 0;
        v10 = 0;
        if ( v9 > 0 )
        {
          v11 = (float *)((char *)&unk_16E6A75E4 + v6);
          do
          {
            v12 = *(float *)((char *)&unk_16E6A7534 + v6);
            if ( v10 < 2 )
            {
              if ( v12 > 1.0 )
                v13 = 0.0;
              else
                v13 = v12 * 0.0083333338;
            }
            else
            {
              v13 = v12 * 0.016666668;
            }
            v14 = *v11;
            if ( *v11 >= (float)-v13 )
            {
              if ( v14 <= v13 )
                v15 = 0.0;
              else
                v15 = v14 - v13;
            }
            else
            {
              v15 = v14 + v13;
            }
            *v11 = v15;
            a3 = (unsigned int)(a3 + 1);
            v11 += 43;
            ++v10;
          }
          while ( (int)a3 < dword_16E6A75A0[v6 / 4] );
        }
      }
      v27 = *(float *)((char *)&unk_16E6A74F8 + v6);
      v28 = dword_16E6A3C64[v6 / 4];
      if ( v28 == 9 )
        v29 = 0.00003183098861837697;
      else
        v29 = 0.00002273642044169784;
      v30 = v29 * (float)(v27 * 3600.0);
      if ( v30 <= 1.0 )
      {
        v32 = fminf(fmaxf(v30, 0.0), 1.0);
        v33 = v32
            * (float)((float)((float)((float)((float)(1.0 - v32) * 2.625) + v32) * v32)
                    + (float)((float)((float)(1.0 - v32) * 1.875) * (float)(1.0 - v32)));
        v34 = 1.0 - v33;
        if ( v28 == 9 )
        {
          v35 = (float)(v34 + v34) + (float)(v33 * 0.25);
          v36 = (float)((float)(1.0 - v33) * 0.75) * (float)(1.0 - v33);
        }
        else
        {
          if ( v28 == 7 )
          {
            v37 = v34 * 2.5;
            v36 = (float)(1.0 - v33) * (float)(1.0 - v33);
          }
          else
          {
            v37 = v34 + v34;
            v36 = (float)((float)(1.0 - v33) * 0.75) * (float)(1.0 - v33);
          }
          v35 = v37 + (float)(v33 * 0.625);
        }
        v31 = (float)(v35 * v33) + v36;
      }
      else
      {
        v31 = 0.0;
      }
      v38 = *(float *)((char *)&unk_16E6A74FC + v6);
      *(_DWORD *)((char *)&unk_16E6A74F4 + v6) = 0;
      v39 = *(float *)&dword_16E6A7500[v6 / 4];
      *(_DWORD *)((char *)&unk_16E6A7508 + v6) = 1090519040;
      v40 = *(float *)((char *)&unk_16E6A7510 + v6);
      *(_DWORD *)((char *)&unk_16E6A750C + v6) = 1115684864;
      v41 = (float)(1.125 - v38);
      v42 = (float)((float)((float)(v39 * 0.00027777778) * (float)(v38 * v31))
                  / (float)(v40 * *(float *)((char *)&unk_16E6A7518 + v6)))
          * 0.03125;
      v43 = *(float *)((char *)&unk_16E6A7528 + v6) * 0.035714287;
      v44 = (float)(v42 - fabs((float)(v27 * 0.005859375)) * (float)(v27 * 0.005859375) * v41) + v27;
      if ( *(float *)((char *)&unk_16E6A7528 + v6) != 0.0 )
      {
        v45 = 1.0 / (float)(v40 + 8.0);
        v46 = (float)((float)((float)(v44 * 0.125) - (float)(*(float *)((char *)&unk_16E6A7504 + v6) * v43))
                    * *(float *)((char *)&unk_16E6A7530 + v6))
            * 0.25;
        v44 = v44 - (float)((float)(v46 * v45) * *(float *)((char *)&unk_16E6A7514 + v6));
        *(float *)((char *)&unk_16E6A7504 + v6) = (float)((float)((float)(v45 * v40) * v46) * (float)(v43 * 64.0))
                                                + *(float *)((char *)&unk_16E6A7504 + v6);
      }
      v47 = *(_DWORD *)((char *)&unk_16E6A7540 + v6);
      v48 = 0.0;
      *(float *)((char *)&unk_16E6A74F8 + v6) = v44;
      v49 = 0;
      if ( v47 <= 0 )
      {
        v59 = 0.0;
      }
      else
      {
        v50 = (int *)((char *)&unk_16E6A7544 + v6);
        do
        {
          v51 = v6 + 172LL * *v50;
          if ( v3 )
          {
            v53 = dword_16E6A3CA8[v6 / 4];
            v54 = *(int *)((char *)&unk_16E6A75A4 + v51);
            v85 = *(float *)&dword_16E6A3CA4[v6 / 4];
            v87 = *(float *)&dword_16E6A3CAC[v6 / 4];
            v86 = *(float *)&v53;
            if ( v49 <= 1 )
            {
              sub_140049E50(&v85, v4, a3);
              v3 = v89;
            }
            v52 = (float)((float)(v86 * *((float *)&unk_14024966C + 47 * v54 + 1))
                        + (float)(v85 * *((float *)&unk_14024966C + 47 * v54)))
                + (float)(v87 * *((float *)&unk_14024966C + 47 * v54 + 2));
          }
          else
          {
            v52 = *(float *)((char *)&unk_16E6A75E4 + v51);
          }
          v55 = v52 + v48;
          ++v49;
          ++v50;
          v48 = v55;
        }
        while ( (int)v49 < v47 );
        v56 = v55 * 0.5;
        v57 = (int *)((char *)&unk_16E6A7544 + v6);
        v58 = 0;
        v59 = 0.0;
        do
        {
          v60 = *v57;
          v61 = dword_16E6A3CA4[v6 / 4];
          v62 = dword_16E6A3CA8[v6 / 4];
          v63 = dword_16E6A3CAC[v6 / 4];
          v85 = *(float *)&v61;
          v86 = *(float *)&v62;
          v87 = *(float *)&v63;
          v64 = v6 + 172 * v60;
          v65 = *(float *)((char *)&unk_16E6A75E4 + v64);
          if ( (unsigned int)v60 <= 1 )
          {
            sub_140049E50(&v85, v4, a3);
            v3 = v89;
          }
          v66 = *(float *)((char *)&unk_16E6A7508 + v6);
          v67 = *(float *)((char *)&unk_16E6A75D4 + v64);
          v68 = 47LL * *(int *)((char *)&unk_16E6A75A4 + v64);
          v69 = (float)((float)(v56 - v65) * *(float *)((char *)&unk_140249684 + v68 * 4)) * 0.0009765625;
          v70 = v87 * v69;
          v71 = v85 * v69;
          v72 = v86 * v69;
          v73 = *(float *)((char *)&unk_16E6A7504 + v6);
          v74 = v71 + *(float *)&dword_140249678[v68];
          *(float *)&dword_140249678[v68] = v74;
          v75 = v72 + *(float *)&dword_14024967C[v68];
          *(float *)&dword_14024967C[v68] = v75;
          v88 = v70 + *(float *)&dword_140249680[v68];
          *(float *)&dword_140249680[v68] = v88;
          v76 = 1.0 / (float)(v66 + v67);
          v77 = v66 * v76;
          v78 = (float)(v73 * 0.03125) - (float)(v56 * 0.109375);
          v59 = v59
              + (float)((float)((float)(v76 * v67) * v78) * (float)(*(float *)((char *)&unk_16E6A750C + v6) * -0.125));
          if ( v3 )
          {
            v85 = *(float *)&v61;
            v86 = *(float *)&v62;
            v87 = *(float *)&v63;
            if ( (unsigned int)v60 <= 1 )
            {
              sub_140049E50(&v85, v4, a3);
              v3 = v89;
            }
            v79 = (float)(v78 * v77) * 0.4375;
            *(float *)&v80 = (float)(v86 * v79) + v75;
            *(float *)&dword_140249678[v68] = (float)(v85 * v79) + v74;
            v81 = v87 * v79;
            dword_14024967C[v68] = v80;
            *(float *)&dword_140249680[v68] = v81 + v88;
          }
          else
          {
            *(float *)((char *)&unk_16E6A75E4 + v64) = (float)((float)(v78 * *(float *)((char *)&unk_16E6A75DC + v64))
                                                             * (float)(v77 * 0.4375))
                                                     + v65;
          }
          ++v58;
          ++v57;
        }
        while ( v58 < *(_DWORD *)((char *)&unk_16E6A7540 + v6) );
        v5 = v90;
      }
      v82 = v59 + *(float *)((char *)&unk_16E6A7504 + v6);
      v83 = fabs(*(float *)((char *)&unk_16E6A74F8 + v6));
      *(float *)((char *)&unk_16E6A7504 + v6) = v82;
      if ( v83 > 0.0 && v83 < 0.0000152587890625 )
        *(_DWORD *)((char *)&unk_16E6A74F8 + v6) = 0;
      v84 = fabs(v82);
      if ( v84 > 0.0 && v84 < 0.0000152587890625 )
        *(_DWORD *)((char *)&unk_16E6A7504 + v6) = 0;
    }
    v4 += 5210;
    v6 += 20840LL;
    v90 = --v5;
  }
  while ( v5 );
}

