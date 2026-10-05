/* Address: 0x1400828d0 | Name: sub_1400828D0 | Size: 1524 bytes */
__int64 __fastcall sub_1400828D0(float *a1, float *a2, int a3)
{
  float *v4; // r13
  float *v5; // r15
  unsigned int v6; // r14d
  _DWORD *v7; // rdi
  int i; // ebx
  int v9; // edi
  int *v10; // rbx
  int v11; // xmm0_4
  int v12; // xmm0_4
  int v13; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  float v20; // xmm8_4
  int v21; // r11d
  float v22; // xmm11_4
  float v23; // xmm9_4
  int v24; // r12d
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  unsigned __int64 v28; // r15
  __int64 v29; // r8
  __int64 v30; // rsi
  __int64 v31; // r13
  unsigned __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r10
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // r9
  __int64 v39; // rcx
  BOOL v40; // eax
  float v41; // xmm0_4
  float v43; // [rsp+30h] [rbp-D0h] BYREF
  int v44; // [rsp+34h] [rbp-CCh]
  __int128 v45; // [rsp+38h] [rbp-C8h] BYREF
  int v46; // [rsp+48h] [rbp-B8h]
  int v47; // [rsp+4Ch] [rbp-B4h]
  float v48; // [rsp+50h] [rbp-B0h]
  float *v49; // [rsp+60h] [rbp-A0h]
  float *v50; // [rsp+68h] [rbp-98h]
  int v51[12292]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52; // [rsp+C080h] [rbp+BF80h] BYREF
  int v53; // [rsp+C088h] [rbp+BF88h]
  float v54; // [rsp+C090h] [rbp+BF90h] BYREF
  unsigned __int64 v55; // [rsp+C094h] [rbp+BF94h]
  _DWORD v56[64]; // [rsp+C0A0h] [rbp+BFA0h]

  v50 = a2;
  v49 = a1;
  v4 = a2;
  dword_16E18CA58 = 1065353216;
  dword_16E18CABC = -1;
  v5 = a1;
  dword_16E18CAC8 = -1;
  dword_16E18CA94 = -1;
  if ( (unsigned int)sub_140079A70((unsigned __int64)&v45, a1, a2) && *(float *)&dword_16E18CA58 > v48 )
  {
    qword_16E18CA60 = 0;
    *(_OWORD *)&flt_16E18CA40 = v45;
    dword_16E18CA68 = 0;
    HIDWORD(qword_16E18CA4C) = v46;
    dword_16E18CA54 = v47;
    dword_16E18CA58 = LODWORD(v48);
    dword_16E18CA94 = -1;
  }
  v6 = 0;
  v7 = dword_16CDE9EA0;
  for ( i = 0; i < 4; ++i )
  {
    if ( *v7
      && (unsigned int)sub_14007D630(&v54, (float *)&v52, &v43, (unsigned int)i, v5, v4)
      && v43 < *(float *)&dword_16E18CA58 )
    {
      flt_16E18CA40 = v54;
      qword_16E18CA44 = v55;
      qword_16E18CA4C = v52;
      dword_16E18CA54 = v53;
      dword_16E18CA58 = LODWORD(v43);
      qword_16E18CA60 = 0;
      dword_16E18CA68 = 0;
      dword_16E18CA94 = i;
    }
    v7 += 263004;
  }
  if ( a3 )
  {
    v9 = 0;
    v10 = (int *)&unk_1407A68BC;
    do
    {
      if ( *(v10 - 7)
        && (unsigned int)sub_14007F3F0(&v54, (float *)&v52, &v43, v9, v5, v4)
        && v43 < *(float *)&dword_16E18CA58 )
      {
        flt_16E18CA40 = v54;
        qword_16E18CA44 = v55;
        v11 = *(v10 - 2);
        qword_16E18CA4C = v52;
        LODWORD(qword_16E18CA60) = v11;
        v12 = *v10;
        dword_16E18CA54 = v53;
        v13 = *(v10 - 1);
        dword_16E18CA68 = v12;
        HIDWORD(qword_16E18CA60) = v13;
        dword_16E18CA58 = LODWORD(v43);
        dword_16E18CA94 = -1;
      }
      ++v9;
      v10 += 21;
    }
    while ( v9 < 128 );
  }
  v14 = *v5;
  v15 = *v4;
  if ( *v5 >= *v4 )
  {
    *(float *)&v52 = *v5;
    v16 = v14;
  }
  else
  {
    *(float *)&v52 = *v4;
    v16 = v15;
  }
  v17 = fminf(v14, v15);
  v18 = v4[1];
  v19 = fmaxf(v4[2], v5[2]);
  v20 = fminf(v4[2], v5[2]);
  v54 = v17;
  v51[0] = 0;
  v21 = 0;
  v22 = fminf(v18, v5[1]);
  v23 = fmaxf(v18, v5[1]);
  v24 = (int)(float)(v17 * 0.015625);
  v51[12289] = 0;
  v43 = *(float *)&v24;
  v25 = (int)(float)(v16 * 0.015625);
  v55 = __PAIR64__(LODWORD(v20), LODWORD(v22));
  v44 = v25;
  v26 = (int)(float)(v20 * 0.015625);
  v27 = (int)(float)(v19 * 0.015625);
  *((float *)&v52 + 1) = v23;
  v53 = LODWORD(v19);
  if ( v26 <= v27 )
  {
    v28 = v26;
    v29 = 0;
    v30 = (__int64)v26 << 6;
    v31 = (unsigned int)(v27 - v26 + 1);
    do
    {
      if ( v28 <= 0x3F && v24 <= v25 )
      {
        v32 = v24;
        v33 = (unsigned int)(v25 - v24 + 1);
        do
        {
          if ( v32 <= 0x3F )
          {
            v34 = 0;
            v35 = dword_18A804078[9 * v30 + 9 * v32];
            if ( v35 > 0 )
            {
              do
              {
                if ( v29 < 64 )
                {
                  ++v21;
                  v56[v29++] = dword_18A80407C[8 * v30 + 8 * v32 + v30 + v32 + v34];
                }
                ++v34;
              }
              while ( v34 < v35 );
            }
          }
          ++v32;
          --v33;
        }
        while ( v33 );
        *(float *)&v24 = v43;
        v25 = v44;
      }
      ++v28;
      v30 += 64;
      --v31;
    }
    while ( v31 );
    v5 = v49;
    v4 = v50;
  }
  v36 = v21;
  if ( v21 > 0 )
  {
    v37 = 0;
    do
    {
      v38 = (int)v56[v37];
      v39 = 15432 * v38;
      if ( v16 >= *(float *)&dword_14BC62464[15432 * v38]
        && v23 >= *(float *)&dword_14BC62468[v39]
        && v19 >= *(float *)&dword_14BC6246C[v39]
        && v17 <= *(float *)&dword_14BC62470[v39]
        && v22 <= *(float *)&dword_14BC62474[v39]
        && v20 <= *(float *)&dword_14BC62478[v39] )
      {
        sub_1400E2B40((unsigned int)v51, (unsigned int)&v54, (unsigned int)&v52, v38, 2);
      }
      ++v37;
    }
    while ( v37 < v36 );
  }
  v40 = sub_140080B80((__int64)&v45, v51, v5, v4);
  v41 = *(float *)&dword_16E18CA58;
  if ( v40 && *(float *)&dword_16E18CA58 > v48 )
  {
    qword_16E18CA60 = 0;
    *(_OWORD *)&flt_16E18CA40 = v45;
    dword_16E18CA68 = 0;
    HIDWORD(qword_16E18CA4C) = v46;
    v41 = v48;
    dword_16E18CA54 = v47;
    dword_16E18CA58 = LODWORD(v48);
    dword_16E18CA94 = -1;
  }
  LOBYTE(v6) = v41 < 1.0;
  return v6;
}

