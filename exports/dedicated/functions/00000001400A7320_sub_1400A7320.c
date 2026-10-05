/* Address: 0x1400a7320 | Name: sub_1400A7320 | Size: 1343 bytes */
__int64 __fastcall sub_1400A7320(int a1, int a2)
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
  __int64 result; // rax
  float v46; // xmm1_4
  float v47; // xmm3_4
  float v48; // xmm0_4
  unsigned __int64 v49; // [rsp+40h] [rbp-C0h] BYREF
  float v50; // [rsp+48h] [rbp-B8h]
  __int64 v51; // [rsp+50h] [rbp-B0h] BYREF
  float v52; // [rsp+58h] [rbp-A8h]
  int v53; // [rsp+60h] [rbp-A0h]
  int v54; // [rsp+64h] [rbp-9Ch]
  float v55[3]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v56[7]; // [rsp+74h] [rbp-8Ch] BYREF
  int v57[12292]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v58[4]; // [rsp+C0A0h] [rbp+BFA0h] BYREF
  _DWORD v59[68]; // [rsp+C0B0h] [rbp+BFB0h] BYREF

  v2 = 0;
  v57[0] = 0;
  v57[12289] = 0;
  v3 = 172LL * a2 + 20840LL * a1;
  v4 = v3;
  v5 = *(int *)((char *)&unk_16E6A75A4 + v3);
  v6 = *(float *)((char *)&unk_16E6A75D8 + v3) + *(float *)((char *)&unk_16E6A75A8 + v3);
  v51 = v3;
  v7 = v5;
  v54 = v5;
  v49 = v5;
  v8 = *((float *)&unk_140249618 + 47 * v5);
  v9 = v6 + v8;
  v10 = v8 - v6;
  v11 = *((float *)&unk_14024961C + 47 * v5);
  v12 = v6 + v11;
  v13 = *((float *)&unk_140249620 + 47 * v5);
  v14 = v11 - v6;
  v15 = v13 - v6;
  *(float *)v58 = v9;
  v16 = v6 + v13;
  *(float *)v59 = v10;
  *(float *)&v58[1] = v12;
  *(float *)&v59[1] = v14;
  v17 = (int)(float)(v10 * 0.015625);
  *(float *)&v59[2] = v15;
  v18 = (int)(float)(v15 * 0.015625);
  v19 = (int)(float)(v9 * 0.015625);
  *(float *)&v58[2] = v16;
  v53 = v19;
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
            v28 = dword_18A804078[9 * v23 + 9 * v25];
            if ( v28 > 0 )
            {
              do
              {
                if ( v22 < 64 )
                {
                  ++v2;
                  v59[v22++ + 4] = dword_18A80407C[8 * v23 + 8 * v25 + v23 + v25 + v27];
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
        v19 = v53;
      }
      ++v21;
      v23 += 64;
      --v24;
    }
    while ( v24 );
    v4 = v51;
    LOWORD(v5) = v54;
    v7 = v49;
  }
  v29 = v2;
  if ( v2 > 0 )
  {
    v30 = 0;
    do
    {
      v31 = (int)v59[v30 + 4];
      v32 = 15432 * v31;
      if ( v9 >= *(float *)&dword_14BC62464[15432 * v31]
        && v12 >= *(float *)&dword_14BC62468[v32]
        && v16 >= *(float *)&dword_14BC6246C[v32]
        && v10 <= *(float *)&dword_14BC62470[v32]
        && v14 <= *(float *)&dword_14BC62474[v32]
        && v15 <= *(float *)&dword_14BC62478[v32] )
      {
        sub_1400E2B40((unsigned int)v57, (unsigned int)v59, (unsigned int)v58, v31, 2);
      }
      ++v30;
    }
    while ( v30 < v29 );
  }
  v33 = 0;
  v34 = 188 * v7;
  do
  {
    v35 = *(float *)((char *)&unk_140249618 + v34);
    v36 = *(float *)((char *)&unk_14024961C + v34);
    v37 = *(float *)((char *)&unk_140249620 + v34);
    v49 = __PAIR64__(LODWORD(v36), LODWORD(v35));
    v50 = v37;
    if ( v33 )
    {
      if ( v33 != 1 )
        goto LABEL_31;
      v38 = *(float *)((char *)&unk_16E6A75A8 + v4);
    }
    else
    {
      v38 = -*(float *)((char *)&unk_16E6A75A8 + v4);
    }
    v39 = (float)(v38 * *(float *)((char *)&unk_14024963C + v34)) + v35;
    v40 = v38 * *(float *)((char *)&unk_140249640 + v34);
    v41 = v38 * *(float *)((char *)&unk_140249644 + v34);
    *(float *)&v49 = v39;
    *((float *)&v49 + 1) = v40 + v36;
    v50 = v41 + v37;
LABEL_31:
    if ( (unsigned int)sub_14002A650(
                         (float *)&v49,
                         (char *)&unk_14024963C + v34,
                         *(float *)((char *)&unk_16E6A75D8 + v4)) )
    {
      v42 = *(float *)&qword_16E18CA44 - *(float *)((char *)&unk_14024961C + v34);
      v43 = *(float *)((char *)&unk_16E6A75D8 + v4) - *(float *)&dword_16E18CA5C;
      *(float *)&v51 = flt_16E18CA40 - *(float *)((char *)&unk_140249618 + v34);
      v44 = *((float *)&qword_16E18CA44 + 1) - *(float *)((char *)&unk_140249620 + v34);
      *((float *)&v51 + 1) = v42;
      v52 = v44;
      sub_140002AE0(v5, &v51, &qword_16E18CA4C, v43, 1067030938, 0.03125, 1040187392);
    }
    result = sub_14002A000(v55, v57, (int)&v49, (__int64)&unk_14024963C + v34, *(_DWORD *)((char *)&unk_16E6A75D8 + v4));
    if ( (_DWORD)result )
    {
      v46 = v55[1] - *(float *)((char *)&unk_14024961C + v34);
      v47 = *(float *)((char *)&unk_16E6A75D8 + v4) - *(float *)&v56[4];
      *(float *)&v51 = v55[0] - *(float *)((char *)&unk_140249618 + v34);
      v48 = v55[2] - *(float *)((char *)&unk_140249620 + v34);
      *((float *)&v51 + 1) = v46;
      v52 = v48;
      result = sub_140002AE0(v5, &v51, v56, v47, 1067030938, 0.03125, 1040187392);
    }
    ++v33;
  }
  while ( v33 < 2 );
  dword_16F0D0C60 = 0;
  return result;
}

