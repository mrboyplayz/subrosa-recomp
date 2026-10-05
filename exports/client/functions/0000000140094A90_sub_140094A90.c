/* Address: 0x140094a90 | Name: sub_140094A90 | Size: 3433 bytes */
__int64 sub_140094A90()
{
  unsigned int v0; // r12d
  unsigned int *v1; // rbx
  unsigned int *v2; // rdi
  unsigned int v3; // r13d
  __int64 v4; // r15
  __int64 v5; // r11
  __int64 v6; // kr08_8
  int *v7; // r10
  int v8; // r14d
  __int64 v9; // r8
  int v10; // ecx
  unsigned int *v11; // r9
  int v12; // edx
  float *v13; // rax
  float *v14; // r8
  signed __int64 v15; // rcx
  __int64 v16; // r10
  float v17; // xmm3_4
  __int64 v18; // rdx
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float *v22; // r14
  float *v23; // rax
  float *v24; // r8
  signed __int64 v25; // rcx
  __int64 v26; // r10
  float v27; // xmm3_4
  __int64 v28; // rdx
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm6_4
  float *v32; // rax
  float *v33; // r8
  signed __int64 v34; // rcx
  __int64 v35; // r10
  float v36; // xmm3_4
  __int64 v37; // rdx
  float v38; // xmm4_4
  float v39; // xmm5_4
  float v40; // xmm6_4
  float *v41; // rsi
  float *v42; // rax
  float *v43; // r8
  signed __int64 v44; // rcx
  __int64 v45; // r10
  float v46; // xmm3_4
  __int64 v47; // rdx
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm6_4
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // r8
  __int64 v56; // rcx
  float v57; // xmm7_4
  float *v58; // rax
  float *v59; // r8
  signed __int64 v60; // rcx
  __int64 v61; // r10
  float v62; // xmm3_4
  __int64 v63; // rdx
  float v64; // xmm4_4
  float v65; // xmm5_4
  float v66; // xmm6_4
  float *v67; // rax
  __int64 v68; // r8
  signed __int64 v69; // rdi
  float v70; // xmm3_4
  __int64 v71; // rcx
  float v72; // xmm4_4
  float v73; // xmm5_4
  float v74; // xmm6_4
  float *v75; // rax
  signed __int64 v76; // rbx
  __int64 v77; // r8
  float v78; // xmm3_4
  __int64 v79; // rcx
  float v80; // xmm4_4
  float v81; // xmm5_4
  float v82; // xmm6_4
  __int64 v84; // [rsp+8h] [rbp-100h] BYREF
  __int64 v85; // [rsp+28h] [rbp-E0h]
  __int64 v86; // [rsp+30h] [rbp-D8h]
  __int128 v87; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v88; // [rsp+58h] [rbp-B0h]
  __int128 v89; // [rsp+68h] [rbp-A0h]
  __int128 v90; // [rsp+78h] [rbp-90h]
  int v91; // [rsp+88h] [rbp-80h] BYREF
  __int64 v92; // [rsp+8Ch] [rbp-7Ch]
  float v93; // [rsp+94h] [rbp-74h]
  __int128 v94; // [rsp+98h] [rbp-70h] BYREF
  __int128 v95; // [rsp+A8h] [rbp-60h]
  __int128 v96; // [rsp+B8h] [rbp-50h]
  __int128 v97; // [rsp+C8h] [rbp-40h]
  __int64 v98; // [rsp+D8h] [rbp-30h]

  MEMORY[0x1401FCD30](&dword_140404A6C[40714349], 0, 1024);
  if ( !dword_140404A6C[284024893] )
  {
    v0 = dword_140404A6C[315570520];
    v1 = &dword_140404A6C[318718300];
    v2 = &dword_140404A6C[83200513];
    v3 = dword_140404A6C[312324432];
    v4 = 4096;
    do
    {
      if ( *(v2 - 6156) )
      {
        v5 = *v2;
        if ( (int)v5 > 0 )
        {
          v6 = (int)(v0 * *(v1 - 1) + dword_140404A6C[3074 * *(v1 - 1) + 315570524 + 3 * *v1]);
          v7 = (int *)(v2 + 2);
          v8 = (int)(v3 * *(v1 - 3246089) + dword_140404A6C[3074 * *(v1 - 3246089) + 312324436 + 3 * *(v1 - 3246088)])
             / 64;
          do
          {
            v9 = *((unsigned __int8 *)v7 - 4);
            v10 = *v7;
            v7 += 3;
            v11 = &dword_140404A6C[v9 + 40714349];
            v9 <<= 14;
            dword_140404A6C[v9 + 40714605 + (int)*v11] = 3 * v10;
            v12 = *(v7 - 2) + (((BYTE4(v6) & 3) + (int)v6) >> 2) + 2 * *(v7 - 2);
            dword_140404A6C[v9 + 53297517 + (int)*v11] = v12;
            dword_140404A6C[v9 + 53297517 + (int)*v11] *= 4;
            *(_QWORD *)&dword_140404A6C[2 * v9 + 44908909 + 2 * (int)*v11] = 4 * v12;
            *(_QWORD *)&dword_140404A6C[2 * v9 + 57491821 + 2 * (int)*v11] = dword_140404A6C[v9 + 53297517 + (int)*v11];
            dword_140404A6C[v9 + 65880429 + (int)(*v11)++] = v8;
            --v5;
          }
          while ( v5 );
          v0 = dword_140404A6C[315570520];
        }
      }
      v1 += 6;
      v2 += 6930;
      --v4;
    }
    while ( v4 );
  }
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790155] + 283791765]);
  sub_14007A8C0(
    0,
    0,
    1024,
    576,
    *(float *)&dword_140404A6C[284545216],
    *(float *)&dword_140404A6C[284545217],
    *(float *)&dword_140404A6C[284545218]);
  v13 = (float *)&v87;
  dword_140404A6C[431564501] = dword_140404A6C[284024505];
  v14 = (float *)&v94 + 1;
  dword_140404A6C[431564509] = dword_140404A6C[284024507];
  v15 = (char *)&dword_140404A6C[431564505] - (char *)&v87;
  v16 = 4;
  dword_140404A6C[431564505] = dword_140404A6C[284024506];
  dword_140404A6C[431564502] = dword_140404A6C[284024508];
  dword_140404A6C[431564506] = dword_140404A6C[284024509];
  dword_140404A6C[431564510] = dword_140404A6C[284024510];
  dword_140404A6C[431564503] = dword_140404A6C[284024511];
  dword_140404A6C[431564507] = dword_140404A6C[284024512];
  dword_140404A6C[431564511] = dword_140404A6C[284024513];
  v95 = xmmword_140278D80;
  v94 = xmmword_140278D30;
  LODWORD(v97) = dword_140404A6C[284024502] ^ 0x80000000;
  v96 = xmmword_140278E20;
  *((float *)&v97 + 1) = -*(float *)&dword_140404A6C[284024503];
  *((float *)&v97 + 2) = -*(float *)&dword_140404A6C[284024504];
  *(_QWORD *)&dword_140404A6C[431564513] = 0;
  dword_140404A6C[431564515] = 0;
  dword_140404A6C[431564504] = 0;
  dword_140404A6C[431564508] = 0;
  dword_140404A6C[431564512] = 0;
  dword_140404A6C[431564516] = 1065353216;
  HIDWORD(v97) = 1065353216;
  do
  {
    v17 = *(v14 - 1);
    v18 = 4;
    v19 = *v14;
    v20 = v14[1];
    v21 = v14[2];
    do
    {
      *v13 = (float)((float)((float)(v17 * *(float *)((char *)v13 + v15 - 16))
                           + (float)(v19 * *(float *)((char *)v13 + v15)))
                   + (float)(v20 * *(float *)((char *)v13 + v15 + 16)))
           + (float)(v21 * *(float *)((char *)v13 + v15 + 32));
      ++v13;
      --v18;
    }
    while ( v18 );
    v14 += 4;
    v15 -= 16LL;
    --v16;
  }
  while ( v16 );
  v22 = (float *)&dword_140404A6C[431564518];
  *(_OWORD *)&dword_140404A6C[431564501] = v87;
  v23 = (float *)&v87;
  v24 = (float *)&dword_140404A6C[431564518];
  *(_OWORD *)&dword_140404A6C[431564505] = v88;
  v25 = (char *)&dword_140404A6C[431564505] - (char *)&v87;
  v26 = 4;
  *(_OWORD *)&dword_140404A6C[431564509] = v89;
  *(_OWORD *)&dword_140404A6C[431564513] = v90;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  do
  {
    v27 = *(v24 - 1);
    v28 = 4;
    v29 = *v24;
    v30 = v24[1];
    v31 = v24[2];
    do
    {
      *v23 = (float)((float)((float)(v27 * *(float *)((char *)v23 + v25 - 16))
                           + (float)(v29 * *(float *)((char *)v23 + v25)))
                   + (float)(v30 * *(float *)((char *)v23 + v25 + 16)))
           + (float)(v31 * *(float *)((char *)v23 + v25 + 32));
      ++v23;
      --v28;
    }
    while ( v28 );
    v24 += 4;
    v25 -= 16LL;
    --v26;
  }
  while ( v26 );
  *(_OWORD *)&dword_140404A6C[431564533] = v87;
  v32 = (float *)&v87;
  v33 = (float *)&dword_140404A6C[431564502];
  *(_OWORD *)&dword_140404A6C[431564537] = v88;
  v34 = (char *)&dword_140404A6C[431564489] - (char *)&v87;
  v35 = 4;
  *(_OWORD *)&dword_140404A6C[431564541] = v89;
  *(_OWORD *)&dword_140404A6C[431564545] = v90;
  do
  {
    v36 = *(v33 - 1);
    v37 = 4;
    v38 = *v33;
    v39 = v33[1];
    v40 = v33[2];
    do
    {
      *v32 = (float)((float)((float)(v36 * *(float *)((char *)v32 + v34 - 16))
                           + (float)(v38 * *(float *)((char *)v32 + v34)))
                   + (float)(v39 * *(float *)((char *)v32 + v34 + 16)))
           + (float)(v40 * *(float *)((char *)v32 + v34 + 32));
      ++v32;
      --v37;
    }
    while ( v37 );
    v33 += 4;
    v34 -= 16LL;
    --v35;
  }
  while ( v35 );
  v41 = (float *)&dword_140404A6C[431564534];
  *(_OWORD *)&dword_140404A6C[431564549] = v87;
  v42 = (float *)&v87;
  v43 = (float *)&dword_140404A6C[431564534];
  *(_OWORD *)&dword_140404A6C[431564553] = v88;
  v44 = (char *)&dword_140404A6C[431564489] - (char *)&v87;
  v45 = 4;
  *(_OWORD *)&dword_140404A6C[431564557] = v89;
  *(_OWORD *)&dword_140404A6C[431564561] = v90;
  do
  {
    v46 = *(v43 - 1);
    v47 = 4;
    v48 = *v43;
    v49 = v43[1];
    v50 = v43[2];
    do
    {
      *v42 = (float)((float)((float)(v46 * *(float *)((char *)v42 + v44 - 16))
                           + (float)(v48 * *(float *)((char *)v42 + v44)))
                   + (float)(v49 * *(float *)((char *)v42 + v44 + 16)))
           + (float)(v50 * *(float *)((char *)v42 + v44 + 32));
      ++v42;
      --v47;
    }
    while ( v47 );
    v43 += 4;
    v44 -= 16LL;
    --v45;
  }
  while ( v45 );
  *(_OWORD *)&dword_140404A6C[431564565] = v87;
  *(_OWORD *)&dword_140404A6C[431564569] = v88;
  LODWORD(v85) = 0;
  *(_OWORD *)&dword_140404A6C[431564573] = v89;
  v51 = dword_140404A6C[44 * dword_140404A6C[283829871] + 284024944];
  *(_OWORD *)&dword_140404A6C[431564577] = v90;
  unk_140404718(36160, 36064, 3553, v51, 0);
  (*(void (**)(void))&dword_140404A6C[18215089])();
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215095])(0xFFFFFFFFLL);
  (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215091])(0);
  if ( dword_140404A6C[73991626] )
    (*(void (**)(void))&dword_140404A6C[18215093])();
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215087])(17664);
  if ( dword_140404A6C[73991626] )
    (*(void (**)(void))&dword_140404A6C[18215093])();
  (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215095])(0);
  (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215099])(0);
  dword_140404A6C[456217211] = dword_140404A6C[188872559];
  dword_140404A6C[456217217] = dword_140404A6C[188872559];
  v52 = dword_140404A6C[2 * dword_140404A6C[283791478] + 283793813];
  *(_OWORD *)&dword_140404A6C[456217212] = xmmword_140279830;
  dword_140404A6C[456217208] = 6;
  *(_OWORD *)&dword_140404A6C[456217218] = xmmword_140279830;
  dword_140404A6C[456217207] = 4;
  dword_140404A6C[456217209] = dword_140404A6C[188872557];
  dword_140404A6C[456217210] = dword_140404A6C[297756277];
  dword_140404A6C[456217216] = dword_140404A6C[297756277];
  dword_140404A6C[456217222] = dword_140404A6C[297756277];
  dword_140404A6C[456217227] = dword_140404A6C[188872557];
  dword_140404A6C[456217228] = dword_140404A6C[297756277];
  *(_OWORD *)&dword_140404A6C[456217223] = xmmword_140278E30;
  *(_OWORD *)&dword_140404A6C[456217229] = xmmword_140278E30;
  unk_140404170(34962, v52, v53);
  unk_140404198(34962, 0, 4 * dword_140404A6C[456217207] * dword_140404A6C[456217208], &dword_140404A6C[456217209]);
  unk_1404042E0(dword_140404A6C[71737805]);
  unk_140404338(dword_140404A6C[71737811], 1, &dword_140404A6C[284024502]);
  unk_140404338(dword_140404A6C[71737815], 1, &dword_140404A6C[284550403]);
  unk_140404378(dword_140404A6C[71737819], 1, 0, &dword_140404A6C[431564565]);
  unk_140404338(dword_140404A6C[71737820], 1, &dword_140404A6C[284545205]);
  unk_140404338(dword_140404A6C[71737821], 1, &dword_140404A6C[284545209]);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2884);
  unk_140404098(33985);
  unk_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
  unk_140404098(33984);
  unk_1404043C8(1);
  unk_140404238(0);
  unk_140404238(2);
  unk_1404044A8(0, 3, 5126);
  v86 = 12;
  LODWORD(v85) = 4 * dword_140404A6C[456217208];
  unk_1404044A8(2, 3, 5126);
  unk_140404170(34963, dword_140404A6C[456807040], v54);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))&flt_140384000[131076])(
    4,
    (unsigned int)(6 * ((signed int)dword_140404A6C[456217207] / 4)),
    5123);
  unk_140404170(34963, 0, v55);
  unk_140404230(0);
  unk_140404230(2);
  unk_140404098(33985);
  unk_140404050(34067, 0);
  unk_140404098(33984);
  LOBYTE(v56) = 1;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215099])(v56);
  v57 = *(float *)&dword_140404A6C[297756277];
  v58 = (float *)&v87;
  v59 = (float *)&v94 + 1;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  v60 = (char *)&dword_140404A6C[431564521] - (char *)&v87;
  dword_140404A6C[431564529] = 0;
  v61 = 4;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  dword_140404A6C[431564531] = 0;
  dword_140404A6C[431564532] = 1065353216;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  v95 = xmmword_140278DE0;
  *(float *)&dword_140404A6C[431564530] = v57 + v57;
  v94 = xmmword_140278D30;
  v96 = xmmword_140278E20;
  v97 = xmmword_140279490;
  do
  {
    v62 = *(v59 - 1);
    v63 = 4;
    v64 = *v59;
    v65 = v59[1];
    v66 = v59[2];
    do
    {
      *v58 = (float)((float)((float)(v62 * *(float *)((char *)v58 + v60 - 16))
                           + (float)(v64 * *(float *)((char *)v58 + v60)))
                   + (float)(v65 * *(float *)((char *)v58 + v60 + 16)))
           + (float)(v66 * *(float *)((char *)v58 + v60 + 32));
      ++v58;
      --v63;
    }
    while ( v63 );
    v59 += 4;
    v60 -= 16LL;
    --v61;
  }
  while ( v61 );
  v67 = (float *)&v87;
  *(_OWORD *)&dword_140404A6C[431564517] = v87;
  v68 = 4;
  v69 = (char *)&dword_140404A6C[431564505] - (char *)&v87;
  *(_OWORD *)&dword_140404A6C[431564521] = v88;
  *(_OWORD *)&dword_140404A6C[431564525] = v89;
  *(_OWORD *)&dword_140404A6C[431564529] = v90;
  do
  {
    v70 = *(v22 - 1);
    v71 = 4;
    v72 = *v22;
    v73 = v22[1];
    v74 = v22[2];
    do
    {
      *v67 = (float)((float)((float)(v70 * *(float *)((char *)v67 + v69 - 16))
                           + (float)(v72 * *(float *)((char *)v67 + v69)))
                   + (float)(v73 * *(float *)((char *)v67 + v69 + 16)))
           + (float)(v74 * *(float *)((char *)v67 + v69 + 32));
      ++v67;
      --v71;
    }
    while ( v71 );
    v22 += 4;
    v69 -= 16LL;
    --v68;
  }
  while ( v68 );
  v75 = (float *)&v87;
  v76 = (char *)&dword_140404A6C[431564489] - (char *)&v87;
  v77 = 4;
  *(_OWORD *)&dword_140404A6C[431564533] = v87;
  *(_OWORD *)&dword_140404A6C[431564537] = v88;
  *(_OWORD *)&dword_140404A6C[431564541] = v89;
  *(_OWORD *)&dword_140404A6C[431564545] = v90;
  do
  {
    v78 = *(v41 - 1);
    v79 = 4;
    v80 = *v41;
    v81 = v41[1];
    v82 = v41[2];
    do
    {
      *v75 = (float)((float)((float)(v78 * *(float *)((char *)v75 + v76 - 16))
                           + (float)(v80 * *(float *)((char *)v75 + v76)))
                   + (float)(v81 * *(float *)((char *)v75 + v76 + 16)))
           + (float)(v82 * *(float *)((char *)v75 + v76 + 32));
      ++v75;
      --v79;
    }
    while ( v79 );
    v41 += 4;
    v76 -= 16LL;
    --v77;
  }
  while ( v77 );
  *(_OWORD *)&dword_140404A6C[431564565] = v87;
  v91 = 0;
  *(_OWORD *)&dword_140404A6C[431564569] = v88;
  v92 = 1065353216;
  *(_OWORD *)&dword_140404A6C[431564573] = v89;
  *(_OWORD *)&dword_140404A6C[431564577] = v90;
  v93 = -v57;
  unk_1404042E0(dword_140404A6C[71737685]);
  unk_140404340(dword_140404A6C[71737724], 1, &v91);
  unk_1404042E0(dword_140404A6C[71737745]);
  unk_140404340(dword_140404A6C[71737784], 1, &v91);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(12288);
  sub_14011E210(0);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(12288);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v84 ^ v98);
}

