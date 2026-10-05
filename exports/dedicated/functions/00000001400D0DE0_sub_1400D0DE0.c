/* Address: 0x1400d0de0 | Name: sub_1400D0DE0 | Size: 1839 bytes */
__int64 __fastcall sub_1400D0DE0(int a1)
{
  int v1; // edi
  float v2; // xmm7_4
  float v3; // xmm0_4
  __int64 v5; // rbx
  int v6; // edx
  __int64 v7; // rcx
  float *v8; // rax
  float v9; // xmm1_4
  float *v10; // rax
  int v11; // ecx
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  __int64 v16; // rcx
  float *v17; // rax
  int v18; // ecx
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm4_4
  float *v23; // rax
  __int64 v24; // r11
  float v25; // xmm8_4
  float v26; // xmm9_4
  float v27; // xmm10_4
  __int64 v28; // rcx
  float *v29; // rax
  __int64 v30; // rcx
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm8_4
  float v34; // xmm9_4
  float v35; // xmm10_4
  float *v36; // rax
  float v37; // xmm1_4
  float v38; // xmm3_4
  __int64 v39; // rdx
  char *v40; // rcx
  _DWORD *v41; // r8
  int v42; // eax
  float v43; // xmm3_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm8_4
  float v47; // xmm9_4
  float v48; // xmm10_4
  int *v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rax
  float v53; // xmm8_4
  int *v54; // r9
  _DWORD *v55; // r8
  __int64 v56; // r10
  float v57; // xmm10_4
  __int64 v58; // rax
  __int64 v59; // rdx
  float v60; // xmm3_4
  float v61; // xmm2_4
  int v62; // edx
  float v63; // xmm2_4
  float v64; // xmm3_4
  __int64 v65; // rcx
  float *v66; // rax
  __int64 result; // rax
  int v68; // r8d
  float v69; // xmm11_4
  float v70; // xmm7_4
  float v71; // xmm2_4
  float v72; // xmm3_4
  float *v73; // rdx
  __int64 v74; // rax
  float v75; // xmm0_4
  int v76; // r8d
  int *v77; // rdx
  float v78; // [rsp+20h] [rbp-68h] BYREF
  float v79; // [rsp+24h] [rbp-64h]
  float v80; // [rsp+28h] [rbp-60h]

  v1 = 0;
  v2 = 0.0;
  v3 = 0.0;
  v5 = 24944LL * a1;
  v6 = dword_14AA152E0[v5 + 16];
  if ( v6 <= 0 )
  {
    v13 = 0.0;
    v14 = 0.0;
    v15 = 0.0;
  }
  else
  {
    v7 = (unsigned int)v6;
    v8 = (float *)((char *)&unk_14AA15334 + v5 * 4);
    do
    {
      v3 = v3 + *v8;
      v8 += 5;
      --v7;
    }
    while ( v7 );
    v9 = 1.0 / v3;
    v10 = (float *)((char *)&unk_14AA15334 + v5 * 4);
    v11 = 0;
    do
    {
      ++v11;
      v12 = v9 * *v10;
      v10 += 5;
      *(v10 - 5) = v12;
      v6 = dword_14AA152E0[v5 + 16];
    }
    while ( v11 < v6 );
    v13 = 0.0;
    v14 = 0.0;
    v15 = 0.0;
    if ( v6 > 0 )
    {
      v16 = (unsigned int)v6;
      v17 = (float *)((char *)&unk_14AA15330 + v5 * 4);
      do
      {
        v13 = v13 + *(v17 - 2);
        v14 = v14 + *(v17 - 1);
        v15 = v15 + *v17;
        v17 += 5;
        --v16;
      }
      while ( v16 );
    }
  }
  v18 = 0;
  v19 = 1.0 / (float)v6;
  v20 = v13 * v19;
  v21 = v14 * v19;
  v22 = v15 * v19;
  *(float *)&dword_14AA152E0[v5 + 530] = v20;
  *(float *)&dword_14AA152E0[v5 + 531] = v21;
  *(float *)&dword_14AA152E0[v5 + 532] = v22;
  if ( dword_14AA152E0[v5 + 24094] > 0 )
  {
    v23 = (float *)((char *)&unk_14AA2CB84 + v5 * 4);
    do
    {
      ++v18;
      *(v23 - 2) = *(v23 - 2) - v20;
      *(v23 - 1) = *(v23 - 1) - v21;
      *v23 = *v23 - v22;
      v23 += 20;
    }
    while ( v18 < dword_14AA152E0[v5 + 24094] );
  }
  v24 = (unsigned int)dword_14AA152E0[v5 + 337];
  v25 = 0.0;
  v26 = 0.0;
  v27 = 0.0;
  if ( (int)v24 > 0 )
  {
    v28 = (unsigned int)v24;
    v29 = (float *)((char *)&unk_14AA15330 + v5 * 4);
    do
    {
      v25 = v25 + *(v29 - 2);
      v26 = v26 + *(v29 - 1);
      v27 = v27 + *v29;
      v29 += 5;
      --v28;
    }
    while ( v28 );
  }
  v30 = (unsigned int)dword_14AA152E0[v5 + 16];
  v31 = 0.0;
  dword_14AA152E0[v5 + 15] = 0;
  v32 = 1.0 / (float)(int)v24;
  v33 = v25 * v32;
  v34 = v26 * v32;
  v35 = v27 * v32;
  if ( (int)v30 > 0 )
  {
    v36 = (float *)((char *)&unk_14AA15330 + v5 * 4);
    do
    {
      v37 = fsqrt(
              (float)((float)((float)(v34 - *(v36 - 1)) * (float)(v34 - *(v36 - 1)))
                    + (float)((float)(v33 - *(v36 - 2)) * (float)(v33 - *(v36 - 2))))
            + (float)((float)(v35 - *v36) * (float)(v35 - *v36)));
      if ( v31 < v37 )
      {
        *(float *)&dword_14AA152E0[v5 + 15] = v37;
        v31 = v37;
      }
      v36 += 5;
      --v30;
    }
    while ( v30 );
  }
  v38 = v31 * 1.125;
  *(float *)&dword_14AA152E0[v5 + 15] = v38;
  if ( dword_14AA152E0[v5] )
  {
    v46 = 0.0;
    v47 = 0.0;
    v48 = 0.0;
    if ( (int)v24 <= 0 )
    {
      v53 = 0.0;
      v34 = 0.0;
      v57 = 0.0;
    }
    else
    {
      v49 = (int *)((char *)&unk_14AA15828 + v5 * 4);
      v50 = v24;
      do
      {
        v51 = *v49++;
        v52 = v5 * 4 + 20 * v51;
        v46 = v46 + *(float *)((char *)&unk_14AA15328 + v52);
        v47 = v47 + *(float *)((char *)&unk_14AA15328 + v52 + 4);
        v48 = v48 + *(float *)((char *)&unk_14AA15328 + v52 + 8);
        --v50;
      }
      while ( v50 );
      v53 = v46 * v32;
      v54 = (int *)((char *)&unk_14AA15828 + v5 * 4);
      v55 = &unk_14AA13AE8;
      v56 = v24;
      v34 = v47 * v32;
      v57 = v48 * v32;
      do
      {
        v58 = *v54;
        v55 += 3;
        ++v54;
        v59 = v5 * 4 + 20 * v58;
        *(v55 - 5) = *(_DWORD *)((char *)&unk_14AA15328 + v59);
        *(v55 - 4) = *(_DWORD *)((char *)&unk_14AA15328 + v59 + 4);
        *(v55 - 3) = *(_DWORD *)((char *)&unk_14AA15328 + v59 + 8);
        --v56;
      }
      while ( v56 );
    }
    v60 = v38 * 0.25;
    v78 = (float)(*(float *)&dword_140146A38 * v60) + v53;
    v79 = (float)(*(float *)&dword_140146A3C * v60) + v34;
    v80 = (float)(*(float *)&dword_140146A40 * v60) + v57;
    sub_140021500((__int64)&unk_14AA15A28 + v5 * 4, v24, (__int64)&unk_14AA13AE0, &v78);
    v61 = *(float *)&dword_14AA152E0[v5 + 15] * 0.25;
    v45 = v61 * *(float *)&dword_140146A1C;
    v78 = (float)(v61 * *(float *)&dword_140146A18) + v53;
    v80 = (float)(v61 * *(float *)&dword_140146A20) + v57;
  }
  else
  {
    if ( (int)v24 > 0 )
    {
      v39 = v24;
      v40 = (char *)&unk_14AA15330 + v5 * 4;
      v41 = &unk_14AA13AE8;
      do
      {
        v42 = *((_DWORD *)v40 - 2);
        v40 += 20;
        *(v41 - 2) = v42;
        v41 += 3;
        *(v41 - 4) = *((_DWORD *)v40 - 6);
        *(v41 - 3) = *((_DWORD *)v40 - 5);
        --v39;
      }
      while ( v39 );
    }
    v43 = v38 * 0.25;
    v78 = (float)(*(float *)&dword_140146A38 * v43) + v33;
    v79 = (float)(*(float *)&dword_140146A3C * v43) + v34;
    v80 = (float)(*(float *)&dword_140146A40 * v43) + v35;
    sub_140021500((__int64)&unk_14AA15A28 + v5 * 4, v24, (__int64)&unk_14AA13AE0, &v78);
    v44 = *(float *)&dword_14AA152E0[v5 + 15] * 0.25;
    v45 = *(float *)&dword_140146A1C * v44;
    v78 = (float)(*(float *)&dword_140146A18 * v44) + v33;
    v80 = (float)(*(float *)&dword_140146A20 * v44) + v35;
  }
  v79 = v45 + v34;
  sub_140021500((__int64)&unk_14AA15928 + v5 * 4, dword_14AA152E0[v5 + 337], (__int64)&unk_14AA13AE0, &v78);
  v62 = dword_14AA152E0[v5 + 337];
  v63 = 0.0;
  v64 = 0.0;
  if ( v62 > 0 )
  {
    v65 = (unsigned int)v62;
    v66 = (float *)((char *)&unk_14AA15330 + v5 * 4);
    do
    {
      v2 = v2 + *(v66 - 2);
      v63 = v63 + *(v66 - 1);
      v64 = v64 + *v66;
      v66 += 5;
      --v65;
    }
    while ( v65 );
  }
  result = 0;
  v68 = 0;
  dword_14AA152E0[v5 + 7705] = 0;
  v69 = 1.0 / (float)v62;
  v70 = v2 * v69;
  v71 = v63 * v69;
  v72 = v64 * v69;
  if ( dword_14AA152E0[v5 + 16] > 0 )
  {
    v73 = (float *)((char *)&unk_14AA15330 + v5 * 4);
    do
    {
      ++v68;
      v74 = v5 * 4 + 12LL * (int)result;
      *(float *)((char *)&unk_14AA1CB48 + v74) = *(v73 - 2) - v70;
      *(float *)((char *)&unk_14AA1CB48 + v74 + 4) = *(v73 - 1) - v71;
      v75 = *v73;
      v73 += 5;
      *(float *)((char *)&unk_14AA1CB48 + v74 + 8) = v75 - v72;
      result = (unsigned int)(dword_14AA152E0[v5 + 7705] + 1);
      dword_14AA152E0[v5 + 7705] = result;
    }
    while ( v68 < dword_14AA152E0[v5 + 16] );
  }
  v76 = 0;
  dword_14AA152E0[v5 + 10778] = 0;
  if ( dword_14AA152E0[v5 + 1302] > 0 )
  {
    v77 = (int *)((char *)&unk_14AA1673C + v5 * 4);
    do
    {
      if ( v77[15] != 1 )
      {
        dword_14AA152E0[13 * v1 + 10779 + v5] = *v77;
        dword_14AA152E0[13 * dword_14AA152E0[v5 + 10778] + 10780 + v5] = v77[1];
        dword_14AA152E0[13 * dword_14AA152E0[v5 + 10778] + 10781 + v5] = v77[2];
        dword_14AA152E0[13 * dword_14AA152E0[v5 + 10778] + 10782 + v5] = v77[3];
        result = (unsigned int)v77[4];
        dword_14AA152E0[13 * dword_14AA152E0[v5 + 10778] + 10783 + v5] = result;
        v1 = dword_14AA152E0[v5 + 10778] + 1;
        dword_14AA152E0[v5 + 10778] = v1;
      }
      ++v76;
      v77 += 16;
    }
    while ( v76 < dword_14AA152E0[v5 + 1302] );
  }
  if ( !a1 )
  {
    dword_14AA152E0[13 * v1 + 10779 + v5] = 4;
    dword_14AA152E0[13 * dword_14AA152E0[v5 + 10778] + 10780 + v5] = 10;
    dword_14AA152E0[13 * dword_14AA152E0[v5 + 10778] + 10781 + v5] = 11;
    dword_14AA152E0[13 * dword_14AA152E0[v5 + 10778] + 10782 + v5] = 13;
    result = dword_14AA152E0[v5 + 10778];
    dword_14AA152E0[13 * result + 10783 + v5] = 12;
    ++dword_14AA152E0[v5 + 10778];
  }
  return result;
}

