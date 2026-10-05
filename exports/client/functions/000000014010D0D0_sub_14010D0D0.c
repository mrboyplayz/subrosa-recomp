/* Address: 0x14010d0d0 | Name: sub_14010D0D0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_14010D0D0(int a1, int a2)
{
  int v2; // r10d
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  float v6; // xmm6_4
  unsigned __int64 v7; // rsi
  float v8; // xmm7_4
  float v9; // xmm9_4
  float v10; // xmm7_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm0_4
  float v14; // xmm10_4
  float v15; // xmm8_4
  float v16; // xmm6_4
  int v17; // r12d
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  unsigned __int64 v21; // r15
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // r13
  unsigned __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r11
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // r9
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // rbx
  float v35; // xmm1_4
  float v36; // xmm3_4
  float v37; // xmm4_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  float v43; // xmm3_4
  float v44; // xmm0_4
  float v45; // xmm1_4
  float v46; // xmm3_4
  float v47; // xmm0_4
  __int64 v49; // [rsp-20h] [rbp-C330h] BYREF
  unsigned __int64 v50; // [rsp+20h] [rbp-C2F0h] BYREF
  float v51; // [rsp+28h] [rbp-C2E8h]
  __int64 v52; // [rsp+30h] [rbp-C2E0h] BYREF
  float v53; // [rsp+38h] [rbp-C2D8h]
  int v54; // [rsp+40h] [rbp-C2D0h]
  int v55; // [rsp+44h] [rbp-C2CCh]
  float v56[3]; // [rsp+48h] [rbp-C2C8h] BYREF
  unsigned int v57[12435]; // [rsp+54h] [rbp-C2BCh] BYREF
  int v58[12292]; // [rsp+C2A0h] [rbp-70h] BYREF
  float v59[4]; // [rsp+182B0h] [rbp+BFA0h] BYREF
  float v60[68]; // [rsp+182C0h] [rbp+BFB0h] BYREF
  __int64 v61; // [rsp+183D0h] [rbp+C0C0h]

  v2 = 0;
  v58[0] = 0;
  v58[12289] = 0;
  v3 = 172LL * a2 + 20840LL * a1;
  v4 = v3;
  v5 = *(int *)((char *)&dword_140404A6C[129720374] + v3);
  v6 = *(float *)((char *)&dword_140404A6C[129720387] + v3) + *(float *)((char *)&dword_140404A6C[129720375] + v3);
  v52 = v3;
  v7 = v5;
  v55 = v5;
  v50 = v5;
  v8 = *(float *)&dword_140404A6C[47 * v5 + 18215715];
  v9 = v6 + v8;
  v10 = v8 - v6;
  v11 = *(float *)&dword_140404A6C[47 * v5 + 18215716];
  v12 = v6 + v11;
  v13 = *(float *)&dword_140404A6C[47 * v5 + 18215717];
  v14 = v11 - v6;
  v15 = v13 - v6;
  v59[0] = v9;
  v16 = v6 + v13;
  v60[0] = v10;
  v59[1] = v12;
  v60[1] = v14;
  v17 = (int)(float)(v10 * 0.015625);
  v60[2] = v15;
  v18 = (int)(float)(v15 * 0.015625);
  v19 = (int)(float)(v9 * 0.015625);
  v59[2] = v16;
  v54 = v19;
  v20 = (int)(float)(v16 * 0.015625);
  if ( v18 <= v20 )
  {
    v21 = v18;
    v22 = 0;
    v23 = (__int64)v18 << 6;
    v24 = (unsigned int)(v20 - v18 + 1);
    do
    {
      if ( v21 <= 0x3F && v17 <= v19 )
      {
        v25 = v17;
        v26 = (unsigned int)(v19 - v17 + 1);
        do
        {
          if ( v25 <= 0x3F )
          {
            v27 = 0;
            v28 = (int)dword_140404A6C[9 * v23 + 254352099 + 9 * v25];
            if ( v28 > 0 )
            {
              do
              {
                if ( v22 < 64 )
                {
                  ++v2;
                  LODWORD(v60[v22++ + 4]) = dword_140404A6C[8 * v23 + 254352100 + 8 * v25 + v23 + v25 + v27];
                }
                ++v27;
              }
              while ( v27 < v28 );
            }
          }
          ++v25;
          --v26;
        }
        while ( v26 );
        v19 = v54;
      }
      ++v21;
      v23 += 64;
      --v24;
    }
    while ( v24 );
    v4 = v52;
    LOWORD(v5) = v55;
    v7 = v50;
  }
  v29 = v2;
  if ( v2 > 0 )
  {
    v30 = 0;
    do
    {
      v31 = SLODWORD(v60[v30 + 4]);
      v32 = 15432 * v31;
      if ( v9 >= *(float *)&dword_140404A6C[15432 * v31 + 358312926]
        && v12 >= *(float *)&dword_140404A6C[v32 + 358312927]
        && v16 >= *(float *)&dword_140404A6C[v32 + 358312928]
        && v10 <= *(float *)&dword_140404A6C[v32 + 358312929]
        && v14 <= *(float *)&dword_140404A6C[v32 + 358312930]
        && v15 <= *(float *)&dword_140404A6C[v32 + 358312931] )
      {
        sub_140188720(v58, v60, v59, v31, 2);
      }
      ++v30;
    }
    while ( v30 < v29 );
  }
  v33 = 0;
  v34 = 47 * v7;
  do
  {
    LODWORD(v35) = dword_140404A6C[v34 + 18215715];
    LODWORD(v36) = dword_140404A6C[v34 + 18215716];
    v37 = *(float *)&dword_140404A6C[v34 + 18215717];
    v50 = __PAIR64__(LODWORD(v36), LODWORD(v35));
    v51 = v37;
    if ( v33 )
    {
      if ( v33 != 1 )
        goto LABEL_31;
      v38 = *(float *)((char *)&dword_140404A6C[129720375] + v4);
    }
    else
    {
      v38 = -*(float *)((char *)&dword_140404A6C[129720375] + v4);
    }
    v39 = (float)(v38 * *(float *)&dword_140404A6C[v34 + 18215724]) + v35;
    v40 = v38 * *(float *)&dword_140404A6C[v34 + 18215725];
    v41 = v38 * *(float *)&dword_140404A6C[v34 + 18215726];
    *(float *)&v50 = v39;
    *((float *)&v50 + 1) = v40 + v36;
    v51 = v41 + v37;
LABEL_31:
    if ( (unsigned int)sub_14003DE80(
                         (float *)&v50,
                         (float *)&dword_140404A6C[v34 + 18215724],
                         *(float *)((char *)&dword_140404A6C[129720387] + v4)) )
    {
      v42 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[v34 + 18215716];
      v43 = *(float *)((char *)&dword_140404A6C[129720387] + v4) - *(float *)&dword_140404A6C[73006988];
      *(float *)&v52 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[v34 + 18215715];
      v44 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[v34 + 18215717];
      *((float *)&v52 + 1) = v42;
      v53 = v44;
      sub_140005160(v5, (unsigned int *)&v52, &dword_140404A6C[73006984], v43, 0x3F99999Au, 0.03125, 0x3E000000u);
    }
    if ( sub_14003D830(
           v56,
           v58,
           (float *)&v50,
           (float *)&dword_140404A6C[v34 + 18215724],
           *(float *)((char *)&dword_140404A6C[129720387] + v4)) )
    {
      v45 = v56[1] - *(float *)&dword_140404A6C[v34 + 18215716];
      v46 = *(float *)((char *)&dword_140404A6C[129720387] + v4) - *(float *)&v57[12432];
      *(float *)&v52 = v56[0] - *(float *)&dword_140404A6C[v34 + 18215715];
      v47 = v56[2] - *(float *)&dword_140404A6C[v34 + 18215717];
      *((float *)&v52 + 1) = v45;
      v53 = v47;
      sub_140005160(v5, (unsigned int *)&v52, v57, v46, 0x3F99999Au, 0.03125, 0x3E000000u);
    }
    ++v33;
  }
  while ( v33 < 2 );
  dword_140404A6C[179992845] = 0;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v49 ^ v61);
}

