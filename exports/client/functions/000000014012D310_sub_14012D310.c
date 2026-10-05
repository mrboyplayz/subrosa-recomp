/* Address: 0x14012d310 | Name: sub_14012D310 | Size: 2310 bytes */
void __fastcall sub_14012D310(int a1, unsigned int a2)
{
  int v3; // edi
  signed int v4; // ebx
  unsigned __int8 v5; // al
  signed int v6; // eax
  __int64 v7; // r14
  int v8; // ebx
  __int64 v9; // rsi
  char v10; // al
  unsigned int *v11; // rdi
  unsigned int *v12; // rbx
  float v13; // xmm7_4
  float v14; // xmm10_4
  float v15; // xmm13_4
  float v16; // xmm8_4
  float v17; // xmm11_4
  float v18; // xmm14_4
  float v19; // xmm9_4
  int v20; // r10d
  float v21; // xmm1_4
  float v22; // xmm12_4
  unsigned int v23; // eax
  __int64 v24; // rcx
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm4_4
  float v28; // xmm1_4
  signed int v29; // r13d
  __int64 v30; // r15
  __int64 v31; // rsi
  unsigned int v32; // eax
  float v33; // xmm1_4
  unsigned int v34; // xmm0_4
  float *v35; // r14
  signed int v36; // eax
  __int64 v37; // rbx
  __int64 v38; // rcx
  signed int v39; // eax
  int v40; // r8d
  __int64 v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // rdi
  float v44; // xmm1_4
  unsigned int v45; // eax
  signed int v46; // eax
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdi
  float v51; // xmm1_4
  unsigned int v52; // eax
  signed int v53; // eax
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rdi
  float v58; // xmm1_4
  unsigned int v59; // eax
  signed int v60; // eax
  __int64 v61; // rbx
  __int64 v62; // r9
  float v63; // [rsp+38h] [rbp-D0h] BYREF
  float v64; // [rsp+3Ch] [rbp-CCh]
  float v65; // [rsp+40h] [rbp-C8h]
  unsigned int v66[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v67; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v68; // [rsp+68h] [rbp-A0h]
  int v69; // [rsp+78h] [rbp-90h]

  if ( dword_140404A6C[225426046] )
  {
    v3 = rand() & 1;
    v4 = sub_140130000();
    v5 = rand();
    v6 = sub_14012CEB0(0, 0, v4, v3, 1, (float)v5 * 0.00390625);
    v7 = v6;
    dword_140404A6C[179992045] = v6;
    v8 = sub_140130000();
    v9 = 383 * v7;
    v10 = rand();
    sub_140008E40(v7, dword_140404A6C[383 * v7 + 132400993], v3, v8, v10 & 1);
    v11 = &dword_140404A6C[383 * v7 + 132400648];
    v12 = &dword_140404A6C[383 * v7 + 132400651];
    dword_140404A6C[v9 + 132400668] = 0;
    *(_QWORD *)v11 = 1065353216;
    *((_QWORD *)v11 + 1) = 0;
    *((_QWORD *)v11 + 2) = 1065353216;
    *((_QWORD *)v11 + 3) = 0;
    v11[8] = 1065353216;
    sub_14007B2A0((__int64)&dword_140404A6C[v9 + 132400648], (float *)&dword_140404A6C[v9 + 132400651]);
    sub_14007B2A0((__int64)&dword_140404A6C[v9 + 132400648], (float *)&dword_140404A6C[v9 + 132400651]);
    LODWORD(v13) = *v12;
    LODWORD(v14) = v12[1];
    LODWORD(v15) = v12[2];
    LODWORD(v16) = *v11;
    LODWORD(v17) = v11[1];
    LODWORD(v18) = v11[2];
    v19 = *(float *)&dword_140404A6C[383 * v7 + 132400655];
    DWORD2(v68) = dword_140404A6C[383 * v7 + 132400654];
    *(_QWORD *)&v67 = __PAIR64__(LODWORD(v17), LODWORD(v16));
    *((_QWORD *)&v67 + 1) = __PAIR64__(LODWORD(v13), LODWORD(v18));
    *(_QWORD *)&v68 = __PAIR64__(LODWORD(v15), LODWORD(v14));
    v20 = dword_140404A6C[383 * v7 + 132400637];
    v21 = *(float *)&dword_140404A6C[383 * v7 + 132400641];
    v22 = *(float *)&dword_140404A6C[383 * v7 + 132400656];
    v23 = dword_140404A6C[383 * v7 + 132401011];
    v24 = 24944LL * v20;
    *((float *)&v68 + 3) = v19;
    v69 = LODWORD(v22);
    v25 = -*(float *)&dword_140404A6C[v24 + 346708247];
    v26 = -*(float *)&dword_140404A6C[v24 + 346708248];
    v27 = -*(float *)&dword_140404A6C[v24 + 346708249];
    v63 = (float)((float)((float)(v21 - (float)(*((float *)&v68 + 2) * 1.5)) + (float)(v16 * v25)) + (float)(v13 * v26))
        + (float)(*((float *)&v68 + 2) * v27);
    v64 = (float)((float)((float)(*(float *)&dword_140404A6C[383 * v7 + 132400642] - (float)(v19 * 1.5))
                        + (float)(v17 * v25))
                + (float)(v14 * v26))
        + (float)(v19 * v27);
    v28 = *(float *)&dword_140404A6C[383 * v7 + 132400643] - (float)(v22 * 1.5);
    v66[0] = dword_140404A6C[383 * v7 + 132400644];
    v66[2] = dword_140404A6C[383 * v7 + 132400646];
    v65 = (float)((float)(v28 + (float)(v18 * v25)) + (float)(v15 * v26)) + (float)(v22 * v27);
    v66[1] = dword_140404A6C[383 * v7 + 132400645];
    v29 = sub_14005BCA0(v20, (unsigned int *)&v63, v66, (unsigned int *)&v67, v23);
    v30 = 5210LL * v29;
    dword_140404A6C[v9 + 132400639] = v29;
    dword_140404A6C[v30 + 129720183] = v7;
    LODWORD(v11) = sub_14005CCF0();
    v31 = 3597LL * (int)v11;
    dword_140404A6C[v31 + 71856286] = 7;
    sub_140158AB0(&dword_140404A6C[v31 + 71856254], Parameters);
    v32 = dword_140404A6C[487148677];
    v33 = *(float *)&dword_140404A6C[v30 + 129716721];
    v63 = *(float *)&dword_140404A6C[v30 + 129716720];
    dword_140404A6C[v31 + 71859139] = 1;
    dword_140404A6C[v31 + 71859766] = a2;
    dword_140404A6C[v31 + 71859767] = v32;
    dword_140404A6C[v31 + 71859816] = 1;
    dword_140404A6C[v31 + 71859821] = 2;
    dword_140404A6C[v31 + 71859822] = 1;
    v34 = dword_140404A6C[v30 + 129716722];
    v35 = (float *)&dword_140404A6C[v30 + 129716726];
    v64 = v33;
    v65 = *(float *)&v34;
    v36 = sub_140053840(&v63, (float *)&dword_140404A6C[v30 + 129716726], (int)v11);
    v37 = v36;
    dword_140404A6C[v31 + 71856292] = v36;
    sub_140051DC0((int)v11);
    v38 = 7166 * v37;
    v63 = 62.0;
    v65 = 60.0;
    v64 = 10.0;
    v69 = 1065353216;
    dword_140404A6C[v38 + 280651313] = v29;
    dword_140404A6C[v38 + 280651314] = 0;
    v67 = xmmword_140278D30;
    v68 = xmmword_140278D30;
    v39 = sub_140054130(27, (unsigned int *)&v63, nullptr, (unsigned int *)&v67);
    v40 = dword_140404A6C[v31 + 71856292];
    dword_140404A6C[1760 * v39 + 278846053] = v29;
    sub_1400E35D0(v39, -1, v40, 4);
    LODWORD(v11) = sub_140054130(15, (unsigned int *)&v63, nullptr, (unsigned int *)&v67);
    v41 = 1760LL * (int)v11;
    dword_140404A6C[v41 + 278845898] = 16;
    dword_140404A6C[487148744] = sub_140054130(a1, (unsigned int *)&v63, nullptr, (unsigned int *)&v67);
    dword_140404A6C[487148753] = 255;
    sub_1400E35D0((signed int)v11, dword_140404A6C[487148744], -1, 0);
    dword_140404A6C[v41 + 278845898] = 15;
    sub_1400E35D0((signed int)v11, -1, dword_140404A6C[v31 + 71856292], 3);
    dword_140404A6C[v31 + 71856286] = 7;
    *(_QWORD *)&dword_140404A6C[v31 + 71859146] = 0;
    dword_140404A6C[v31 + 71859142] = 1;
    v42 = (int)sub_14005CCF0();
    v43 = 3597 * v42;
    dword_140404A6C[v43 + 71856286] = 7;
    sub_140158AB0(&dword_140404A6C[3597 * v42 + 71856254], Parameters);
    v44 = *(float *)&dword_140404A6C[v30 + 129716721];
    v45 = dword_140404A6C[487148677];
    v63 = *(float *)&dword_140404A6C[v30 + 129716720];
    v65 = *(float *)&dword_140404A6C[v30 + 129716722];
    v64 = v44;
    dword_140404A6C[v43 + 71859139] = 1;
    dword_140404A6C[v43 + 71859766] = a2;
    dword_140404A6C[v43 + 71859767] = v45;
    dword_140404A6C[v43 + 71859816] = 1;
    dword_140404A6C[v43 + 71859821] = 2;
    dword_140404A6C[v43 + 71859822] = 1;
    v46 = sub_140053840(&v63, (float *)&dword_140404A6C[v30 + 129716726], v42);
    v47 = v46;
    dword_140404A6C[v43 + 71856292] = v46;
    sub_140051DC0(v42);
    v48 = 7166 * v47;
    dword_140404A6C[v48 + 280651313] = v29;
    dword_140404A6C[v48 + 280651314] = 1;
    sub_14012CD60(v47, 11, 4);
    if ( (rand() & 1) == 0 )
    {
      v49 = (int)sub_14005CCF0();
      v50 = 3597 * v49;
      dword_140404A6C[v50 + 71856286] = 7;
      sub_140158AB0(&dword_140404A6C[3597 * v49 + 71856254], Parameters);
      v51 = *(float *)&dword_140404A6C[v30 + 129716721];
      v52 = dword_140404A6C[487148677];
      v63 = *(float *)&dword_140404A6C[v30 + 129716720];
      v65 = *(float *)&dword_140404A6C[v30 + 129716722];
      v64 = v51;
      dword_140404A6C[v50 + 71859139] = 1;
      dword_140404A6C[v50 + 71859766] = a2;
      dword_140404A6C[v50 + 71859767] = v52;
      dword_140404A6C[v50 + 71859816] = 1;
      dword_140404A6C[v50 + 71859821] = 2;
      dword_140404A6C[v50 + 71859822] = 1;
      v53 = sub_140053840(&v63, v35, v49);
      v54 = v53;
      dword_140404A6C[v50 + 71856292] = v53;
      sub_140051DC0(v49);
      v55 = 7166 * v54;
      dword_140404A6C[v55 + 280651313] = v29;
      dword_140404A6C[v55 + 280651314] = 2;
      sub_14012CD60(v54, 11, 4);
    }
    if ( (rand() & 1) == 0 )
    {
      v56 = (int)sub_14005CCF0();
      v57 = 3597 * v56;
      dword_140404A6C[v57 + 71856286] = 7;
      sub_140158AB0(&dword_140404A6C[3597 * v56 + 71856254], Parameters);
      v58 = *(float *)&dword_140404A6C[v30 + 129716721];
      v59 = dword_140404A6C[487148677];
      v63 = *(float *)&dword_140404A6C[v30 + 129716720];
      v65 = *(float *)&dword_140404A6C[v30 + 129716722];
      v64 = v58;
      dword_140404A6C[v57 + 71859139] = 1;
      dword_140404A6C[v57 + 71859766] = a2;
      dword_140404A6C[v57 + 71859767] = v59;
      dword_140404A6C[v57 + 71859816] = 1;
      dword_140404A6C[v57 + 71859821] = 2;
      dword_140404A6C[v57 + 71859822] = 1;
      v60 = sub_140053840(&v63, v35, v56);
      v61 = v60;
      dword_140404A6C[v57 + 71856292] = v60;
      sub_140051DC0(v56);
      v62 = 7166 * v61;
      dword_140404A6C[v62 + 280651313] = v29;
      dword_140404A6C[v62 + 280651314] = 3;
      sub_14012CD60(v61, 11, 4);
    }
  }
}

