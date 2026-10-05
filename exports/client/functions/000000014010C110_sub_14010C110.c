/* Address: 0x14010c110 | Name: sub_14010C110 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_14010C110(int a1)
{
  __int64 v1; // r15
  unsigned int v2; // xmm12_4
  unsigned int v3; // xmm11_4
  unsigned int v4; // xmm10_4
  char *v5; // rbx
  __int64 v6; // rcx
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  __int64 v10; // rcx
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm5_4
  __int64 v14; // rax
  __int64 v15; // rcx
  float v16; // xmm2_4
  float v17; // xmm1_4
  __int64 v18; // rcx
  float v19; // xmm0_4
  int v20; // r12d
  int v21; // ecx
  float v22; // xmm0_4
  int v23; // r9d
  float v24; // xmm0_4
  int v25; // r10d
  int v26; // edx
  unsigned __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // r13
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // rcx
  int *v38; // r12
  __int64 v39; // rbp
  __int64 v40; // rbx
  float *v41; // rdi
  float *v42; // rsi
  float v43; // xmm6_4
  float v44; // xmm2_4
  float v45; // xmm8_4
  float v46; // xmm7_4
  float v47; // xmm0_4
  float v48; // xmm6_4
  float v49; // xmm1_4
  float v50; // xmm6_4
  float v51; // xmm8_4
  float v52; // xmm0_4
  unsigned int v53; // xmm1_4
  unsigned int v54; // xmm0_4
  bool v55; // zf
  _DWORD v57[16]; // [rsp-20h] [rbp-184C8h] BYREF
  __int64 v58; // [rsp+20h] [rbp-18488h]
  unsigned __int64 v59; // [rsp+28h] [rbp-18480h]
  __int64 v60; // [rsp+30h] [rbp-18478h]
  int v61; // [rsp+38h] [rbp-18470h]
  __int64 v62; // [rsp+40h] [rbp-18468h]
  char *v63; // [rsp+48h] [rbp-18460h]
  float v64[4]; // [rsp+50h] [rbp-18458h] BYREF
  unsigned int v65[4]; // [rsp+60h] [rbp-18448h] BYREF
  float v66[3]; // [rsp+70h] [rbp-18438h] BYREF
  unsigned int v67[9]; // [rsp+7Ch] [rbp-1842Ch] BYREF
  int v68[12356]; // [rsp+A0h] [rbp-18408h] BYREF
  __int64 v69; // [rsp+C1B0h] [rbp-C2F8h]

  v1 = 20840LL * a1;
  v2 = *(unsigned int *)((char *)&dword_140404A6C[129716729] + v1);
  v3 = *(unsigned int *)((char *)&dword_140404A6C[129716730] + v1);
  v4 = *(unsigned int *)((char *)&dword_140404A6C[129716731] + v1);
  v62 = v1;
  v5 = (char *)&dword_140404A6C[129721812] + v1;
  v63 = (char *)&dword_140404A6C[129721812] + v1;
  v6 = 47LL * *(int *)((char *)&dword_140404A6C[129716719] + v1);
  v7 = *(float *)&dword_140404A6C[v6 + 18215729];
  v8 = *(float *)&dword_140404A6C[v6 + 18215728];
  v9 = *(float *)&dword_140404A6C[v6 + 18215727];
  v10 = 47LL * *(int *)((char *)&dword_140404A6C[129721812] + v1);
  v11 = *(float *)&dword_140404A6C[v10 + 18215728];
  v12 = *(float *)&dword_140404A6C[v10 + 18215729];
  v13 = *(float *)&dword_140404A6C[v10 + 18215727];
  v14 = *(int *)((char *)&dword_140404A6C[129721815] + v1);
  v15 = 18LL * *(int *)((char *)&dword_140404A6C[129721814] + v1);
  *(float *)&dword_140404A6C[2 * v15 + 485543033] = (float)((float)(v11 * v7) - (float)(v12 * v8)) * 0.0625;
  *(float *)&dword_140404A6C[2 * v15 + 485543034] = (float)((float)(v9 * v12) - (float)(v13 * v7)) * 0.0625;
  *(float *)&dword_140404A6C[2 * v15 + 485543035] = (float)((float)(v13 * v8) - (float)(v9 * v11)) * 0.0625;
  dword_140404A6C[2 * v15 + 485543052] = 1;
  dword_140404A6C[2 * v15 + 485543053] = v2;
  dword_140404A6C[2 * v15 + 485543054] = v3;
  dword_140404A6C[2 * v15 + 485543055] = v4;
  v16 = *(float *)&dword_140404A6C[47 * v14 + 18215728];
  v17 = *(float *)&dword_140404A6C[47 * v14 + 18215729];
  v18 = 18LL * *(int *)((char *)&dword_140404A6C[129721817] + v1);
  v19 = *(float *)&dword_140404A6C[47 * v14 + 18215727];
  *(float *)&dword_140404A6C[2 * v18 + 485543033] = (float)((float)(v16 * v7) - (float)(v17 * v8)) * 0.0625;
  *(float *)&dword_140404A6C[2 * v18 + 485543034] = (float)((float)(v9 * v17) - (float)(v19 * v7)) * 0.0625;
  *(float *)&dword_140404A6C[2 * v18 + 485543035] = (float)((float)(v19 * v8) - (float)(v9 * v16)) * 0.0625;
  dword_140404A6C[2 * v18 + 485543052] = 1;
  dword_140404A6C[2 * v18 + 485543053] = v2;
  dword_140404A6C[2 * v18 + 485543054] = v3;
  dword_140404A6C[2 * v18 + 485543055] = v4;
  v20 = 0;
  v21 = (int)(float)(*(float *)((char *)&dword_140404A6C[129716753] + v1) * 0.015625);
  v22 = *(float *)((char *)&dword_140404A6C[129716756] + v1) * 0.015625;
  v61 = v21;
  v23 = (int)v22;
  v24 = *(float *)((char *)&dword_140404A6C[129716755] + v1) * 0.015625;
  LODWORD(v60) = v23;
  v25 = (int)v24;
  v26 = (int)(float)(*(float *)((char *)&dword_140404A6C[129716758] + v1) * 0.015625);
  if ( (int)v24 <= v26 )
  {
    v27 = v25;
    v58 = v25;
    v28 = 0;
    v29 = (__int64)v25 << 6;
    v30 = (unsigned int)(v26 - v25 + 1);
    v59 = (unsigned int)v30;
    do
    {
      if ( v27 <= 0x3F && v21 <= v23 )
      {
        v31 = v21;
        v32 = (unsigned int)(v23 - v21 + 1);
        do
        {
          if ( v31 <= 0x3F )
          {
            v33 = (int)dword_140404A6C[9 * v31 + 254352099 + 9 * v29];
            if ( (int)v33 > 0 )
            {
              MEMORY[0x1401FC920](
                (__m128i *)&v68[v28 + 12292],
                (const __m128i *)(0x140000000LL + 36 * (v31 + v29) + 1021621756),
                4 * v33);
              v20 += v33;
              v28 += v33;
            }
          }
          ++v31;
          --v32;
        }
        while ( v32 );
        v27 = v58;
        v21 = v61;
        v30 = v59;
        v23 = v60;
      }
      ++v27;
      v29 += 64;
      --v30;
      v58 = v27;
      v59 = v30;
    }
    while ( v30 );
    v1 = v62;
    v5 = v63;
  }
  v34 = v20;
  v62 = v20;
  if ( v20 > 0 )
  {
    v35 = 0;
    v60 = 0;
    do
    {
      v36 = v68[v35 + 12292];
      v37 = 15432 * v36;
      if ( !dword_140404A6C[15432 * v36 + 358297501]
        && *(float *)&dword_140404A6C[v37 + 358312926] <= *(float *)((char *)&dword_140404A6C[129716756] + v1)
        && *(float *)&dword_140404A6C[v37 + 358312928] <= *(float *)((char *)&dword_140404A6C[129716758] + v1)
        && *(float *)&dword_140404A6C[v37 + 358312929] >= *(float *)((char *)&dword_140404A6C[129716753] + v1)
        && *(float *)&dword_140404A6C[v37 + 358312931] >= *(float *)((char *)&dword_140404A6C[129716755] + v1) )
      {
        v68[0] = 0;
        v68[12289] = 0;
        sub_1401885C0(v68, v36, 0);
        sub_1401885C0(v68, v36, 1);
        v38 = (int *)v5;
        v59 = (unsigned __int64)v5;
        v58 = 2;
        do
        {
          v39 = *v38;
          v40 = 47 * v39;
          v41 = (float *)&dword_140404A6C[47 * v39 + 18215715];
          v42 = (float *)dword_1402B34F8;
          do
          {
            v43 = (float)(*(v42 - 2) - 0.5) * 1.4349999;
            v44 = (float)((float)(*v42 - 0.5) + *v42) - 0.5;
            v45 = (float)((float)(v43 * *(float *)&dword_140404A6C[v40 + 18215725]) + v41[1])
                + (float)(v44 * *(float *)&dword_140404A6C[v40 + 18215731]);
            v46 = (float)((float)((float)(v43 * *(float *)&dword_140404A6C[v40 + 18215724]) + *v41)
                        + (float)(v44 * *(float *)&dword_140404A6C[v40 + 18215730]))
                - (float)(*(float *)&dword_140404A6C[v40 + 18215727] * 0.5);
            v47 = *(float *)&dword_140404A6C[v40 + 18215729] * 0.5;
            v48 = (float)((float)(v43 * *(float *)&dword_140404A6C[v40 + 18215726]) + v41[2])
                + (float)(v44 * *(float *)&dword_140404A6C[v40 + 18215732]);
            v49 = *(float *)&dword_140404A6C[v40 + 18215728] * 0.5;
            v64[0] = v46;
            v50 = v48 - v47;
            v51 = v45 - v49;
            v64[2] = v50;
            v64[1] = v51;
            if ( sub_1400DA300((__int64)v66, v68, (float *)&dword_140404A6C[47 * v39 + 18215715], v64) )
            {
              v57[12] = 1040187392;
              v57[10] = 1040187392;
              v52 = v46 - *v41;
              v57[8] = 0;
              *(float *)&v53 = v51 - v41[1];
              *(float *)v65 = v52;
              *(float *)&v54 = v50 - v41[2];
              v65[1] = v53;
              v65[2] = v54;
              sub_140005160(
                v39,
                v65,
                v67,
                (float)((float)((float)(v66[0] - v46) * *(float *)v67)
                      + (float)((float)(v66[1] - v51) * *(float *)&v67[1]))
              + (float)((float)(v66[2] - v50) * *(float *)&v67[2]),
                0,
                0.125,
                0x3E000000u);
              *(unsigned int *)((char *)&dword_140404A6C[129721809] + v1) = v36;
            }
            v42 += 3;
            dword_140404A6C[179992845] = 0;
          }
          while ( (__int64)v42 < (__int64)&dword_1402B3528 );
          v38 = (int *)(v59 + 12);
          v55 = v58-- == 1;
          v59 += 12LL;
        }
        while ( !v55 );
        v35 = v60;
        v34 = v62;
      }
      v5 = v63;
      v60 = ++v35;
    }
    while ( v35 < v34 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v57 ^ v69);
}

