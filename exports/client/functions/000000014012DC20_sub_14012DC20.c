/* Address: 0x14012dc20 | Name: sub_14012DC20 | Size: 2559 bytes */
__int64 __fastcall sub_14012DC20(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v4; // r12d
  signed int v5; // ebx
  unsigned __int8 v6; // al
  signed int v7; // eax
  __int64 v8; // r15
  int v9; // eax
  unsigned int v10; // r8d
  int v11; // ebx
  int v12; // edi
  int i; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rsi
  char v20; // al
  unsigned int *v21; // rdi
  unsigned int *v22; // rbx
  float v23; // xmm10_4
  float v24; // xmm13_4
  float v25; // xmm4_4
  float v26; // xmm9_4
  float v27; // xmm8_4
  float v28; // xmm2_4
  int v29; // r10d
  float v30; // xmm11_4
  float v31; // xmm14_4
  float v32; // xmm12_4
  __int64 v33; // rcx
  float v34; // xmm6_4
  float v35; // xmm5_4
  float v36; // xmm7_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  unsigned int v39; // xmm0_4
  signed int v40; // r12d
  __int64 v41; // r14
  __int64 v42; // rdi
  __int64 v43; // rsi
  unsigned int v44; // xmm1_4
  signed int v45; // eax
  __int64 v46; // rbx
  __int64 v47; // rcx
  signed int v48; // eax
  int v49; // r8d
  int v50; // eax
  __int64 v51; // rbx
  unsigned int v52; // eax
  __int64 v53; // rsi
  __int64 v54; // rdi
  unsigned int v55; // xmm1_4
  signed int v56; // eax
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rdi
  unsigned int v61; // xmm1_4
  signed int v62; // eax
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rdi
  unsigned int v67; // xmm1_4
  signed int v68; // eax
  __int64 v69; // rbx
  __int64 v70; // r9
  unsigned int v71; // [rsp+20h] [rbp-E0h]
  float v72; // [rsp+30h] [rbp-D0h] BYREF
  float v73; // [rsp+34h] [rbp-CCh]
  float v74; // [rsp+38h] [rbp-C8h]
  unsigned int v75[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v76; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v77; // [rsp+60h] [rbp-A0h]
  int v78; // [rsp+70h] [rbp-90h]

  if ( !dword_140404A6C[225426046] )
    return 0xFFFFFFFFLL;
  v4 = rand() & 1;
  v5 = sub_140130000();
  v6 = rand();
  v7 = sub_14012CEB0(0, 0, v5, v4, 1, (float)v6 * 0.00390625);
  v8 = v7;
  dword_140404A6C[179992045] = v7;
  v9 = sub_140130000();
  v10 = dword_140404A6C[225426046];
  v11 = 0;
  v12 = v9;
  for ( i = 0; i < 1024; ++i )
  {
    v14 = 396LL * (int)dword_140404A6C[383 * v8 + 132400993];
    v15 = 396LL * v12;
    if ( (float)((float)((float)((float)(*(float *)&dword_140404A6C[v14 + 225426181]
                                       - *(float *)&dword_140404A6C[v15 + 225426181])
                               * (float)(*(float *)&dword_140404A6C[v14 + 225426181]
                                       - *(float *)&dword_140404A6C[v15 + 225426181]))
                       + (float)((float)(*(float *)&dword_140404A6C[v14 + 225426180]
                                       - *(float *)&dword_140404A6C[v15 + 225426180])
                               * (float)(*(float *)&dword_140404A6C[v14 + 225426180]
                                       - *(float *)&dword_140404A6C[v15 + 225426180])))
               + (float)((float)(*(float *)&dword_140404A6C[v14 + 225426182]
                               - *(float *)&dword_140404A6C[v15 + 225426182])
                       * (float)(*(float *)&dword_140404A6C[v14 + 225426182]
                               - *(float *)&dword_140404A6C[v15 + 225426182]))) >= 589824.0 )
      break;
    if ( v10 )
    {
      v16 = rand();
      v10 = dword_140404A6C[225426046];
      v12 = v16 % (signed int)dword_140404A6C[225426046];
      do
      {
        v17 = 396LL * v12;
        if ( (int)dword_140404A6C[v17 + 225426059] <= 3 && (int)dword_140404A6C[v17 + 225426060] <= 3 )
          break;
        v18 = rand();
        v10 = dword_140404A6C[225426046];
        ++v11;
        v12 = v18 % (signed int)dword_140404A6C[225426046];
      }
      while ( v11 < 1024 );
      v11 = 0;
    }
    else
    {
      v12 = 0;
    }
  }
  v19 = 383 * v8;
  v20 = rand();
  sub_140008E40(v8, dword_140404A6C[383 * v8 + 132400993], v4, v12, v20 & 1);
  dword_140404A6C[v19 + 132400668] = 0;
  v21 = &dword_140404A6C[383 * v8 + 132400648];
  v22 = &dword_140404A6C[383 * v8 + 132400651];
  *(_QWORD *)v21 = 1065353216;
  *((_QWORD *)v21 + 1) = 0;
  *((_QWORD *)v21 + 2) = 1065353216;
  *((_QWORD *)v21 + 3) = 0;
  v21[8] = 1065353216;
  sub_14007B2A0((__int64)&dword_140404A6C[v19 + 132400648], (float *)&dword_140404A6C[v19 + 132400651]);
  sub_14007B2A0((__int64)&dword_140404A6C[v19 + 132400648], (float *)&dword_140404A6C[v19 + 132400651]);
  LODWORD(v23) = v22[1];
  LODWORD(v24) = v22[2];
  LODWORD(v25) = dword_140404A6C[383 * v8 + 132400654];
  LODWORD(v26) = dword_140404A6C[383 * v8 + 132400655];
  LODWORD(v27) = *v21;
  v28 = *(float *)&dword_140404A6C[383 * v8 + 132400641];
  v29 = dword_140404A6C[383 * v8 + 132400637];
  LODWORD(v30) = v21[1];
  v31 = *((float *)v21 + 2);
  v32 = *(float *)&dword_140404A6C[383 * v8 + 132400656];
  v33 = 24944LL * v29;
  HIDWORD(v76) = *v22;
  *(_QWORD *)&v76 = __PAIR64__(LODWORD(v30), LODWORD(v27));
  *((float *)&v76 + 2) = v31;
  *(_QWORD *)&v77 = __PAIR64__(LODWORD(v24), LODWORD(v23));
  *((_QWORD *)&v77 + 1) = __PAIR64__(LODWORD(v26), LODWORD(v25));
  v34 = -*(float *)&dword_140404A6C[v33 + 346708248];
  v35 = -*(float *)&dword_140404A6C[v33 + 346708249];
  v36 = -*(float *)&dword_140404A6C[v33 + 346708247];
  v78 = LODWORD(v32);
  v72 = (float)((float)((float)(v28 - (float)(v25 * 1.5)) + (float)(v27 * v36)) + (float)(v34 * *((float *)&v76 + 3)))
      + (float)(v35 * v25);
  v37 = (float)((float)((float)(*(float *)&dword_140404A6C[383 * v8 + 132400642] - (float)(v26 * 1.5))
                      + (float)(v30 * v36))
              + (float)(v34 * v23))
      + (float)(v35 * v26);
  v38 = *(float *)&dword_140404A6C[383 * v8 + 132400643];
  v71 = dword_140404A6C[383 * v8 + 132401011];
  v75[0] = dword_140404A6C[383 * v8 + 132400644];
  v39 = dword_140404A6C[383 * v8 + 132400646];
  v73 = v37;
  v75[2] = v39;
  v74 = (float)((float)((float)(v38 - (float)(v32 * 1.5)) + (float)(v31 * v36)) + (float)(v34 * v24))
      + (float)(v35 * v32);
  v75[1] = dword_140404A6C[383 * v8 + 132400645];
  v40 = sub_14005BCA0(v29, (unsigned int *)&v72, v75, (unsigned int *)&v76, v71);
  v41 = 5210LL * v40;
  dword_140404A6C[v19 + 132400639] = v40;
  dword_140404A6C[v41 + 129720183] = v8;
  v42 = (int)sub_14005CCF0();
  v43 = 3597 * v42;
  dword_140404A6C[v43 + 71856286] = 7;
  sub_140158AB0(&dword_140404A6C[3597 * v42 + 71856254], Parameters);
  v44 = dword_140404A6C[v41 + 129716721];
  v72 = *(float *)&dword_140404A6C[v41 + 129716720];
  v74 = *(float *)&dword_140404A6C[v41 + 129716722];
  v73 = *(float *)&v44;
  dword_140404A6C[v43 + 71859139] = 1;
  dword_140404A6C[v43 + 71859766] = a3;
  dword_140404A6C[v43 + 71859816] = 1;
  dword_140404A6C[v43 + 71859821] = 2;
  dword_140404A6C[v43 + 71859822] = 1;
  v45 = sub_140053840(&v72, (float *)&dword_140404A6C[v41 + 129716726], v42);
  v46 = v45;
  dword_140404A6C[v43 + 71856292] = v45;
  sub_140051DC0(v42);
  v47 = 7166 * v46;
  v72 = 62.0;
  v74 = 60.0;
  v73 = 10.0;
  v78 = 1065353216;
  dword_140404A6C[v47 + 280651313] = v40;
  dword_140404A6C[v47 + 280651314] = 0;
  v76 = xmmword_140278D30;
  v77 = xmmword_140278D30;
  v48 = sub_140054130(27, (unsigned int *)&v72, nullptr, (unsigned int *)&v76);
  v49 = dword_140404A6C[3597 * v42 + 71856292];
  dword_140404A6C[1760 * v48 + 278846053] = v40;
  sub_1400E35D0(v48, -1, v49, 4);
  v50 = sub_140054130(24, (unsigned int *)&v72, nullptr, (unsigned int *)&v76);
  v51 = v50;
  if ( v50 != -1 )
  {
    v52 = sub_140050EF0(0x168u);
    dword_140404A6C[1760 * v51 + 278846098] = v52;
    sub_140080690(v52, 0, a1, a2);
    sub_1400E35D0(v51, -1, dword_140404A6C[v43 + 71856292], 3);
  }
  dword_140404A6C[v43 + 71856286] = 7;
  dword_140404A6C[v43 + 71859142] = 1;
  *(_QWORD *)&dword_140404A6C[v43 + 71859146] = 0;
  v53 = (int)sub_14005CCF0();
  v54 = 3597 * v53;
  dword_140404A6C[v54 + 71856286] = 7;
  sub_140158AB0(&dword_140404A6C[3597 * v53 + 71856254], Parameters);
  v55 = dword_140404A6C[v41 + 129716721];
  v72 = *(float *)&dword_140404A6C[v41 + 129716720];
  v74 = *(float *)&dword_140404A6C[v41 + 129716722];
  v73 = *(float *)&v55;
  dword_140404A6C[v54 + 71859139] = 1;
  dword_140404A6C[v54 + 71859766] = a3;
  dword_140404A6C[v54 + 71859816] = 1;
  dword_140404A6C[v54 + 71859821] = 2;
  dword_140404A6C[v54 + 71859822] = 1;
  v56 = sub_140053840(&v72, (float *)&dword_140404A6C[v41 + 129716726], v53);
  v57 = v56;
  dword_140404A6C[v54 + 71856292] = v56;
  sub_140051DC0(v53);
  v58 = 7166 * v57;
  dword_140404A6C[v58 + 280651313] = v40;
  dword_140404A6C[v58 + 280651314] = 1;
  sub_14012CD60(v57, 11, 4);
  if ( (rand() & 1) == 0 )
  {
    v59 = (int)sub_14005CCF0();
    v60 = 3597 * v59;
    dword_140404A6C[v60 + 71856286] = 7;
    sub_140158AB0(&dword_140404A6C[3597 * v59 + 71856254], Parameters);
    v61 = dword_140404A6C[v41 + 129716721];
    v72 = *(float *)&dword_140404A6C[v41 + 129716720];
    v74 = *(float *)&dword_140404A6C[v41 + 129716722];
    v73 = *(float *)&v61;
    dword_140404A6C[v60 + 71859139] = 1;
    dword_140404A6C[v60 + 71859766] = a3;
    dword_140404A6C[v60 + 71859816] = 1;
    dword_140404A6C[v60 + 71859821] = 2;
    dword_140404A6C[v60 + 71859822] = 1;
    v62 = sub_140053840(&v72, (float *)&dword_140404A6C[v41 + 129716726], v59);
    v63 = v62;
    dword_140404A6C[v60 + 71856292] = v62;
    sub_140051DC0(v59);
    v64 = 7166 * v63;
    dword_140404A6C[v64 + 280651313] = v40;
    dword_140404A6C[v64 + 280651314] = 2;
    sub_14012CD60(v63, 11, 4);
  }
  if ( (rand() & 1) == 0 )
  {
    v65 = (int)sub_14005CCF0();
    v66 = 3597 * v65;
    dword_140404A6C[v66 + 71856286] = 7;
    sub_140158AB0(&dword_140404A6C[3597 * v65 + 71856254], Parameters);
    v67 = dword_140404A6C[v41 + 129716721];
    v72 = *(float *)&dword_140404A6C[v41 + 129716720];
    v74 = *(float *)&dword_140404A6C[v41 + 129716722];
    v73 = *(float *)&v67;
    dword_140404A6C[v66 + 71859139] = 1;
    dword_140404A6C[v66 + 71859766] = a3;
    dword_140404A6C[v66 + 71859816] = 1;
    dword_140404A6C[v66 + 71859821] = 2;
    dword_140404A6C[v66 + 71859822] = 1;
    v68 = sub_140053840(&v72, (float *)&dword_140404A6C[v41 + 129716726], v65);
    v69 = v68;
    dword_140404A6C[v66 + 71856292] = v68;
    sub_140051DC0(v65);
    v70 = 7166 * v69;
    dword_140404A6C[v70 + 280651313] = v40;
    dword_140404A6C[v70 + 280651314] = 3;
    sub_14012CD60(v69, 11, 4);
  }
  return (unsigned int)v8;
}

