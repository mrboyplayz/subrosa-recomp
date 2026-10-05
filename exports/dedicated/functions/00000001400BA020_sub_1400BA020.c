/* Address: 0x1400ba020 | Name: sub_1400BA020 | Size: 2564 bytes */
__int64 __fastcall sub_1400BA020(char *a1, int a2, int a3)
{
  int v4; // r12d
  int v5; // ebx
  unsigned __int8 v6; // al
  int v7; // eax
  __int64 v8; // r15
  int v9; // eax
  int v10; // r8d
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
  char *v21; // rdi
  float *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r8
  float v25; // xmm10_4
  float v26; // xmm13_4
  float v27; // xmm4_4
  float v28; // xmm9_4
  float v29; // xmm8_4
  float v30; // xmm2_4
  int v31; // r10d
  float v32; // xmm11_4
  float v33; // xmm14_4
  float v34; // xmm12_4
  __int64 v35; // rcx
  float v36; // xmm6_4
  float v37; // xmm5_4
  float v38; // xmm7_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // r12d
  __int64 v43; // r14
  __int64 v44; // rsi
  int v45; // xmm1_4
  int v46; // eax
  __int64 v47; // rbx
  __int64 v48; // rcx
  signed int v49; // eax
  int v50; // r8d
  int v51; // eax
  __int64 v52; // rbx
  int v53; // eax
  int v54; // esi
  __int64 v55; // rdi
  int v56; // xmm1_4
  int v57; // eax
  __int64 v58; // rbx
  __int64 v59; // rdx
  int v60; // esi
  __int64 v61; // rdi
  int v62; // xmm1_4
  int v63; // eax
  __int64 v64; // rbx
  __int64 v65; // rdx
  int v66; // esi
  __int64 v67; // rdi
  int v68; // xmm1_4
  int v69; // eax
  __int64 v70; // rbx
  __int64 v71; // r9
  int v72; // [rsp+20h] [rbp-E0h]
  float v73; // [rsp+30h] [rbp-D0h] BYREF
  float v74; // [rsp+34h] [rbp-CCh]
  float v75; // [rsp+38h] [rbp-C8h]
  int v76[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v77; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v78; // [rsp+60h] [rbp-A0h]
  int v79; // [rsp+70h] [rbp-90h]

  if ( !dword_1839ABEE4 )
    return 0xFFFFFFFFLL;
  v4 = rand() & 1;
  v5 = sub_1400BC440();
  v6 = rand();
  v7 = sub_1400B92B0(0, 0, v5, v4, 1, (float)v6 * 0.00390625);
  v8 = v7;
  dword_16E6A3420 = v7;
  v9 = sub_1400BC440();
  v10 = dword_1839ABEE4;
  v11 = 0;
  v12 = v9;
  for ( i = 0; i < 1024; ++i )
  {
    v14 = 1584LL * (int)dword_16D4FD60C[383 * v8 + 321];
    v15 = 1584LL * v12;
    if ( (float)((float)((float)((float)(*(float *)((char *)&unk_1839AC0FC + v14 + 4)
                                       - *(float *)((char *)&unk_1839AC0FC + v15 + 4))
                               * (float)(*(float *)((char *)&unk_1839AC0FC + v14 + 4)
                                       - *(float *)((char *)&unk_1839AC0FC + v15 + 4)))
                       + (float)((float)(*(float *)((char *)&unk_1839AC0FC + v14)
                                       - *(float *)((char *)&unk_1839AC0FC + v15))
                               * (float)(*(float *)((char *)&unk_1839AC0FC + v14)
                                       - *(float *)((char *)&unk_1839AC0FC + v15))))
               + (float)((float)(*(float *)((char *)&unk_1839AC0FC + v14 + 8)
                               - *(float *)((char *)&unk_1839AC0FC + v15 + 8))
                       * (float)(*(float *)((char *)&unk_1839AC0FC + v14 + 8)
                               - *(float *)((char *)&unk_1839AC0FC + v15 + 8)))) >= 589824.0 )
      break;
    if ( v10 )
    {
      v16 = rand();
      v10 = dword_1839ABEE4;
      v12 = v16 % dword_1839ABEE4;
      do
      {
        v17 = 1584LL * v12;
        if ( *(int *)((char *)&unk_1839ABF18 + v17) <= 3 && *(int *)((char *)&unk_1839ABF1C + v17) <= 3 )
          break;
        v18 = rand();
        v10 = dword_1839ABEE4;
        ++v11;
        v12 = v18 % dword_1839ABEE4;
      }
      while ( v11 < 1024 );
      v11 = 0;
    }
    else
    {
      v12 = 0;
    }
  }
  v19 = 1532 * v8;
  v20 = rand();
  sub_140004600(v8, dword_16D4FD60C[383 * v8 + 321], v4, v12, v20 & 1);
  *(_DWORD *)((char *)&unk_16D4FD5FC + v19) = 0;
  v21 = (char *)&unk_16D4FD5AC + 1532 * v8;
  v22 = (float *)((char *)&unk_16D4FD5B8 + 1532 * v8);
  *(_QWORD *)v21 = 1065353216;
  *((_QWORD *)v21 + 1) = 0;
  *((_QWORD *)v21 + 2) = 1065353216;
  *((_QWORD *)v21 + 3) = 0;
  *((_DWORD *)v21 + 8) = 1065353216;
  sub_140049C20((__int64)&unk_16D4FD5AC + v19, (float *)((char *)&unk_16D4FD5B8 + v19), v23);
  sub_140049C20((__int64)&unk_16D4FD5AC + v19, (float *)((char *)&unk_16D4FD5B8 + v19), v24);
  v25 = v22[1];
  v26 = v22[2];
  v27 = *((float *)&unk_16D4FD5C4 + 383 * v8);
  v28 = *((float *)&unk_16D4FD5C8 + 383 * v8);
  v29 = *(float *)v21;
  v30 = *((float *)&unk_16D4FD590 + 383 * v8);
  v31 = *((_DWORD *)&unk_16D4FD580 + 383 * v8);
  v32 = *((float *)v21 + 1);
  v33 = *((float *)v21 + 2);
  v34 = *((float *)&unk_16D4FD5CC + 383 * v8);
  v35 = 99776LL * v31;
  *((float *)&v77 + 3) = *v22;
  *(_QWORD *)&v77 = __PAIR64__(LODWORD(v32), LODWORD(v29));
  *((float *)&v77 + 2) = v33;
  *(_QWORD *)&v78 = __PAIR64__(LODWORD(v26), LODWORD(v25));
  *((_QWORD *)&v78 + 1) = __PAIR64__(LODWORD(v28), LODWORD(v27));
  v36 = -*(float *)((char *)&unk_14AA15B2C + v35);
  v37 = -*(float *)((char *)&unk_14AA15B30 + v35);
  v38 = -*(float *)((char *)&unk_14AA15B28 + v35);
  v79 = LODWORD(v34);
  v73 = (float)((float)((float)(v30 - (float)(v27 * 1.5)) + (float)(v29 * v38)) + (float)(v36 * *((float *)&v77 + 3)))
      + (float)(v37 * v27);
  v39 = (float)((float)((float)(*((float *)&unk_16D4FD594 + 383 * v8) - (float)(v28 * 1.5)) + (float)(v32 * v38))
              + (float)(v36 * v25))
      + (float)(v37 * v28);
  v40 = *((float *)&unk_16D4FD598 + 383 * v8);
  v72 = *((_DWORD *)&unk_16D4FDB58 + 383 * v8);
  v76[0] = *((_DWORD *)&unk_16D4FD59C + 383 * v8);
  v41 = *((_DWORD *)&unk_16D4FD5A4 + 383 * v8);
  v74 = v39;
  v76[2] = v41;
  v75 = (float)((float)((float)(v40 - (float)(v34 * 1.5)) + (float)(v33 * v38)) + (float)(v36 * v26))
      + (float)(v37 * v34);
  v76[1] = *((_DWORD *)&unk_16D4FD5A0 + 383 * v8);
  v42 = sub_1400414B0(v31, (int *)&v73, v76, (int *)&v77, v72);
  v43 = 5210LL * v42;
  *(_DWORD *)((char *)&unk_16D4FD588 + v19) = v42;
  dword_16E6A72A8[v43] = v8;
  LODWORD(v21) = sub_140042500();
  v44 = 3597LL * (int)v21;
  dword_16D67D624[v44] = 7;
  sub_1400DBB30(&byte_16D67D5A4[v44 * 4], (char *)&byte_1400F34A0);
  v45 = dword_16E6A3C90[v43];
  v73 = *(float *)&dword_16E6A3C8C[v43];
  v75 = *(float *)&dword_16E6A3C94[v43];
  v74 = *(float *)&v45;
  *(_DWORD *)((char *)&unk_16D6802B8 + v44 * 4) = 1;
  dword_16D680B14[v44 + 92] = a3;
  dword_16D680D4C[v44] = 1;
  dword_16D680D60[v44] = 2;
  dword_16D680D64[v44] = 1;
  v46 = sub_14003A7B0(&v73, (float *)&dword_16E6A3CA4[v43], (int)v21);
  v47 = v46;
  dword_16D67D63C[v44] = v46;
  sub_14003A3D0((int)v21);
  v48 = 7166 * v47;
  v73 = 62.0;
  v75 = 60.0;
  v74 = 10.0;
  v79 = 1065353216;
  dword_1909419F0[v48] = v42;
  dword_1909419F4[v48] = 0;
  v77 = xmmword_1400F78B0;
  v78 = xmmword_1400F78B0;
  v49 = sub_14003B080(27, (int *)&v73, nullptr, (int *)&v77);
  v50 = dword_16D67D63C[v44];
  dword_19025F340[1760 * v49] = v42;
  sub_140089E50(v49, -1, v50, 4);
  v51 = sub_14003B080(24, (int *)&v73, nullptr, (int *)&v77);
  v52 = v51;
  if ( v51 != -1 )
  {
    v53 = sub_140039500(360);
    *((_DWORD *)&unk_19025F3F4 + 1760 * v52) = v53;
    sub_14004C820(v53, 0, a1, a2);
    sub_140089E50(v52, -1, dword_16D67D63C[v44], 3);
  }
  dword_16D67D624[v44] = 7;
  *(_DWORD *)((char *)&unk_16D6802C4 + v44 * 4) = 1;
  *(_QWORD *)((char *)&unk_16D6802D4 + v44 * 4) = 0;
  v54 = sub_140042500();
  v55 = 3597LL * v54;
  dword_16D67D624[v55] = 7;
  sub_1400DBB30(&byte_16D67D5A4[v55 * 4], (char *)&byte_1400F34A0);
  v56 = dword_16E6A3C90[v43];
  v73 = *(float *)&dword_16E6A3C8C[v43];
  v75 = *(float *)&dword_16E6A3C94[v43];
  v74 = *(float *)&v56;
  *(_DWORD *)((char *)&unk_16D6802B8 + v55 * 4) = 1;
  dword_16D680B14[v55 + 92] = a3;
  dword_16D680D4C[v55] = 1;
  dword_16D680D60[v55] = 2;
  dword_16D680D64[v55] = 1;
  v57 = sub_14003A7B0(&v73, (float *)&dword_16E6A3CA4[v43], v54);
  v58 = v57;
  dword_16D67D63C[v55] = v57;
  sub_14003A3D0(v54);
  v59 = 7166 * v58;
  dword_1909419F0[v59] = v42;
  dword_1909419F4[v59] = 1;
  sub_1400B9160(v58, 11, 4);
  if ( (rand() & 1) == 0 )
  {
    v60 = sub_140042500();
    v61 = 3597LL * v60;
    dword_16D67D624[v61] = 7;
    sub_1400DBB30(&byte_16D67D5A4[v61 * 4], (char *)&byte_1400F34A0);
    v62 = dword_16E6A3C90[v43];
    v73 = *(float *)&dword_16E6A3C8C[v43];
    v75 = *(float *)&dword_16E6A3C94[v43];
    v74 = *(float *)&v62;
    *(_DWORD *)((char *)&unk_16D6802B8 + v61 * 4) = 1;
    dword_16D680B14[v61 + 92] = a3;
    dword_16D680D4C[v61] = 1;
    dword_16D680D60[v61] = 2;
    dword_16D680D64[v61] = 1;
    v63 = sub_14003A7B0(&v73, (float *)&dword_16E6A3CA4[v43], v60);
    v64 = v63;
    dword_16D67D63C[v61] = v63;
    sub_14003A3D0(v60);
    v65 = 7166 * v64;
    dword_1909419F0[v65] = v42;
    dword_1909419F4[v65] = 2;
    sub_1400B9160(v64, 11, 4);
  }
  if ( (rand() & 1) == 0 )
  {
    v66 = sub_140042500();
    v67 = 3597LL * v66;
    dword_16D67D624[v67] = 7;
    sub_1400DBB30(&byte_16D67D5A4[v67 * 4], (char *)&byte_1400F34A0);
    v68 = dword_16E6A3C90[v43];
    v73 = *(float *)&dword_16E6A3C8C[v43];
    v75 = *(float *)&dword_16E6A3C94[v43];
    v74 = *(float *)&v68;
    *(_DWORD *)((char *)&unk_16D6802B8 + v67 * 4) = 1;
    dword_16D680B14[v67 + 92] = a3;
    dword_16D680D4C[v67] = 1;
    dword_16D680D60[v67] = 2;
    dword_16D680D64[v67] = 1;
    v69 = sub_14003A7B0(&v73, (float *)&dword_16E6A3CA4[v43], v66);
    v70 = v69;
    dword_16D67D63C[v67] = v69;
    sub_14003A3D0(v66);
    v71 = 7166 * v70;
    dword_1909419F0[v71] = v42;
    dword_1909419F4[v71] = 3;
    sub_1400B9160(v70, 11, 4);
  }
  return (unsigned int)v8;
}

