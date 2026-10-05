/* Address: 0x1400b4da0 | Name: sub_1400B4DA0 | Size: 1634 bytes */
__int64 __fastcall sub_1400B4DA0(int a1, int a2, int a3, unsigned int *a4, unsigned int *a5, float *a6)
{
  __int64 v6; // rbp
  __int64 v8; // rdi
  __int64 v9; // r15
  int v10; // r8d
  unsigned int *v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // r8d
  __int64 v14; // rdi
  bool v15; // zf
  unsigned int v16; // edx
  int v17; // ecx
  unsigned int *v18; // rax
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  __int64 v23; // rax
  float v24; // xmm7_4
  float v25; // xmm0_4
  __int64 v26; // rbx
  float v27; // xmm2_4
  float v28; // xmm8_4
  float v29; // xmm1_4
  float v30; // xmm9_4
  float v31; // xmm10_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm4_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm5_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm2_4
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm6_4
  float v47; // xmm4_4
  float v48; // xmm3_4
  float v49; // xmm1_4
  float v50; // xmm8_4
  float v51; // xmm5_4
  float v52; // xmm0_4
  float v53; // xmm9_4
  float v54; // xmm10_4
  float v55; // xmm3_4
  float v56; // xmm4_4
  float v57; // xmm5_4
  float v58; // xmm0_4
  float v59; // xmm6_4
  float v60; // xmm7_4
  double v61; // xmm0_8
  float v62; // xmm1_4
  float v63; // xmm6_4
  float v64; // xmm8_4
  float v65; // xmm7_4
  float v66; // xmm1_4
  float v67; // xmm2_4
  float v68; // xmm6_4
  unsigned int v69; // xmm1_4
  float v70; // xmm7_4
  __int64 v72; // [rsp+0h] [rbp-D8h] BYREF
  float v73; // [rsp+20h] [rbp-B8h]
  float v74; // [rsp+24h] [rbp-B4h]
  float v75[4]; // [rsp+28h] [rbp-B0h] BYREF
  _DWORD v76[10]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+60h] [rbp-78h]

  v6 = 1760LL * a3;
  v8 = a2;
  v9 = a1;
  if ( dword_140404A6C[v6 + 278845898] != 39 )
  {
    v10 = 0;
    v11 = &dword_140404A6C[486149253];
    while ( *v11 )
    {
      ++v10;
      v11 += 61;
      if ( (__int64)v11 >= (__int64)&dword_140404A6C[487148677] )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v72 ^ v77);
    }
    if ( v10 != -1 )
    {
      v12 = 61LL * v10;
      MEMORY[0x1401FCD30](&dword_140404A6C[v12 + 486149254], 0, 240);
      v13 = dword_140404A6C[v6 + 278845915];
      dword_140404A6C[v12 + 486149253] = 1;
      dword_140404A6C[v12 + 486149254] = 7;
      *(_QWORD *)&dword_140404A6C[v12 + 486149256] = 0;
      dword_140404A6C[v12 + 486149292] = v13;
      v14 = 28664 * v9 + 312 * v8;
      v15 = dword_140404A6C[v6 + 278845898] == 28;
      v16 = *(unsigned int *)((char *)&dword_140404A6C[280651439] + v14);
      dword_140404A6C[v12 + 486149291] = v16;
      dword_140404A6C[v12 + 486149281] = 1048576000;
      dword_140404A6C[v12 + 486149282] = 1052770304;
      dword_140404A6C[v12 + 486149267] = *a4;
      dword_140404A6C[v12 + 486149268] = a4[1];
      dword_140404A6C[v12 + 486149269] = a4[2];
      dword_140404A6C[v12 + 486149270] = *a5;
      dword_140404A6C[v12 + 486149271] = a5[1];
      dword_140404A6C[v12 + 486149272] = a5[2];
      if ( !v15 )
      {
        v17 = 0;
        v18 = &dword_140404A6C[486149253];
        while ( *v18 )
        {
          ++v17;
          v18 += 61;
          if ( (__int64)v18 >= (__int64)&dword_140404A6C[487148677] )
            return MEMORY[0x1401F8B20]((unsigned __int64)&v72 ^ v77);
        }
        if ( v17 != -1 )
        {
          v19 = *(float *)((char *)&dword_140404A6C[280651453] + v14);
          v20 = *(float *)((char *)&dword_140404A6C[280651454] + v14);
          v21 = *(float *)((char *)&dword_140404A6C[280651452] + v14);
          v22 = *(float *)((char *)&dword_140404A6C[280651455] + v14);
          v23 = 61LL * v17;
          v24 = *(float *)&dword_140404A6C[v6 + 278845940];
          v25 = *(float *)&dword_140404A6C[v6 + 278845938] * v19;
          v26 = 18LL * v17;
          v27 = (float)((float)(v21 * *(float *)&dword_140404A6C[v6 + 278845934])
                      + (float)(v19 * *(float *)&dword_140404A6C[v6 + 278845935]))
              + (float)(v20 * *(float *)&dword_140404A6C[v6 + 278845936]);
          v28 = *(float *)&dword_140404A6C[v6 + 278845941];
          v29 = *(float *)&dword_140404A6C[v6 + 278845939] * v20;
          dword_140404A6C[v23 + 486149253] = 1;
          *(float *)v76 = v27;
          v30 = *(float *)&dword_140404A6C[v6 + 278845942];
          v31 = *(float *)&dword_140404A6C[v6 + 278845937];
          v73 = v19;
          dword_140404A6C[v23 + 486149254] = 8;
          v74 = v20;
          *(_QWORD *)&dword_140404A6C[v23 + 486149256] = 0;
          v32 = (float)(v31 * v21) + v25;
          dword_140404A6C[v23 + 486149291] = v16;
          dword_140404A6C[v23 + 486149292] = v13;
          v33 = v28 * v19;
          dword_140404A6C[v23 + 486149281] = 1031798784;
          v34 = *(float *)((char *)&dword_140404A6C[280651456] + v14);
          v35 = v32 + v29;
          dword_140404A6C[v23 + 486149287] = 1049135241;
          dword_140404A6C[v23 + 486149282] = 1056964608;
          v36 = v30 * v20;
          dword_140404A6C[36 * v17 + 485543046] = 1056964608;
          v37 = *(float *)((char *)&dword_140404A6C[280651457] + v14);
          *(float *)&v76[1] = v35;
          v38 = (float)(v24 * v21) + v33;
          v39 = v34 * *(float *)&dword_140404A6C[v6 + 278845935];
          v40 = v38 + v36;
          v41 = v37 * *(float *)&dword_140404A6C[v6 + 278845936];
          *(float *)&v76[2] = v40;
          v42 = (float)(v22 * *(float *)&dword_140404A6C[v6 + 278845934]) + v39;
          v43 = v34 * *(float *)&dword_140404A6C[v6 + 278845938];
          v44 = v42 + v41;
          v45 = v37 * *(float *)&dword_140404A6C[v6 + 278845939];
          *(float *)&v76[3] = v44;
          *(float *)&v76[4] = (float)((float)(v22 * v31) + v43) + v45;
          *(float *)&v76[5] = (float)((float)(v22 * v24) + (float)(v34 * v28)) + (float)(v37 * v30);
          v46 = *(float *)((char *)&dword_140404A6C[280651458] + v14);
          v47 = *(float *)((char *)&dword_140404A6C[280651459] + v14) * v28;
          v48 = (float)(v46 * v31)
              + (float)(*(float *)((char *)&dword_140404A6C[280651459] + v14)
                      * *(float *)&dword_140404A6C[v6 + 278845938]);
          v49 = *(float *)((char *)&dword_140404A6C[280651460] + v14) * *(float *)&dword_140404A6C[v6 + 278845939];
          v50 = 0.0;
          v51 = *(float *)((char *)&dword_140404A6C[280651460] + v14) * v30;
          *(float *)&v76[6] = (float)((float)(*(float *)((char *)&dword_140404A6C[280651459] + v14)
                                            * *(float *)&dword_140404A6C[v6 + 278845935])
                                    + (float)(v46 * *(float *)&dword_140404A6C[v6 + 278845934]))
                            + (float)(*(float *)((char *)&dword_140404A6C[280651460] + v14)
                                    * *(float *)&dword_140404A6C[v6 + 278845936]);
          v52 = fabs(a6[3]);
          *(float *)&v76[7] = v48 + v49;
          *(float *)&v76[8] = (float)((float)(v46 * v24) + v47) + v51;
          if ( v52 <= 0.0 )
          {
            v53 = v73;
            v54 = v74;
          }
          else
          {
            sub_14007B2A0((__int64)v76, a6);
            v53 = *(float *)((char *)&dword_140404A6C[280651453] + v14);
            v54 = *(float *)((char *)&dword_140404A6C[280651454] + v14);
          }
          sub_14010E370(v75, v76);
          v55 = -v75[0];
          v56 = -v75[1];
          v57 = -v75[2];
          v58 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v57 * v57));
          if ( v58 == 0.0 )
          {
            v59 = 0.0;
            v60 = 0.0;
          }
          else
          {
            v50 = (float)(1.0 / v58) * v55;
            v59 = (float)(1.0 / v58) * v56;
            v60 = (float)(1.0 / v58) * v57;
          }
          v61 = acos(fminf(fmaxf(v75[3], -1.0), 1.0));
          v62 = v61 + v61;
          v63 = v59 * v62;
          v64 = v50 * v62;
          v65 = v60 * v62;
          v66 = (float)(v63 * *(float *)((char *)&dword_140404A6C[280651456] + v14)) + (float)(v53 * v64);
          v67 = (float)(v63 * *(float *)((char *)&dword_140404A6C[280651457] + v14)) + (float)(v54 * v64);
          v68 = (float)(v63 * *(float *)((char *)&dword_140404A6C[280651455] + v14))
              + (float)(v64 * *(float *)((char *)&dword_140404A6C[280651452] + v14));
          *(float *)&v69 = v66 + (float)(v65 * *(float *)((char *)&dword_140404A6C[280651459] + v14));
          *(float *)&v61 = v65 * *(float *)((char *)&dword_140404A6C[280651460] + v14);
          v70 = v65 * *(float *)((char *)&dword_140404A6C[280651458] + v14);
          dword_140404A6C[2 * v26 + 485543034] = v69;
          *(float *)&dword_140404A6C[2 * v26 + 485543035] = v67 + *(float *)&v61;
          *(float *)&dword_140404A6C[2 * v26 + 485543033] = (float)(v68 + v70) * 0.25;
          *(float *)&dword_140404A6C[2 * v26 + 485543034] = *(float *)&dword_140404A6C[2 * v26 + 485543034] * 0.25;
          *(float *)&dword_140404A6C[2 * v26 + 485543035] = *(float *)&dword_140404A6C[2 * v26 + 485543035] * 0.25;
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v72 ^ v77);
}

