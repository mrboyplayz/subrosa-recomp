/* Address: 0x1400b9710 | Name: sub_1400B9710 | Size: 2315 bytes */
void __fastcall sub_1400B9710(int a1, int a2)
{
  int v3; // edi
  int v4; // ebx
  unsigned __int8 v5; // al
  int v6; // eax
  __int64 v7; // r14
  int v8; // ebx
  __int64 v9; // rsi
  char v10; // al
  char *v11; // rdi
  float *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r8
  float v15; // xmm7_4
  float v16; // xmm10_4
  float v17; // xmm13_4
  float v18; // xmm8_4
  float v19; // xmm11_4
  float v20; // xmm14_4
  float v21; // xmm9_4
  int v22; // r10d
  float v23; // xmm1_4
  float v24; // xmm12_4
  int v25; // eax
  __int64 v26; // rcx
  float v27; // xmm6_4
  float v28; // xmm5_4
  float v29; // xmm4_4
  float v30; // xmm1_4
  int v31; // r13d
  __int64 v32; // r15
  __int64 v33; // rsi
  int v34; // eax
  float v35; // xmm1_4
  int v36; // xmm0_4
  float *v37; // r14
  int v38; // eax
  __int64 v39; // rbx
  __int64 v40; // rcx
  signed int v41; // eax
  int v42; // r8d
  __int64 v43; // rbx
  __int64 v44; // rdi
  float v45; // xmm1_4
  int v46; // eax
  int v47; // eax
  __int64 v48; // rbx
  __int64 v49; // rdx
  int v50; // esi
  __int64 v51; // rdi
  float v52; // xmm1_4
  int v53; // eax
  int v54; // eax
  __int64 v55; // rbx
  __int64 v56; // rdx
  int v57; // esi
  __int64 v58; // rdi
  float v59; // xmm1_4
  int v60; // eax
  int v61; // eax
  __int64 v62; // rbx
  __int64 v63; // r9
  float v64; // [rsp+38h] [rbp-D0h] BYREF
  float v65; // [rsp+3Ch] [rbp-CCh]
  float v66; // [rsp+40h] [rbp-C8h]
  int v67[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v68; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v69; // [rsp+68h] [rbp-A0h]
  int v70; // [rsp+78h] [rbp-90h]

  if ( dword_1839ABEE4 )
  {
    v3 = rand() & 1;
    v4 = sub_1400BC440();
    v5 = rand();
    v6 = sub_1400B92B0(0, 0, v4, v3, 1, (float)v5 * 0.00390625);
    v7 = v6;
    dword_16E6A3420 = v6;
    v8 = sub_1400BC440();
    v9 = 1532 * v7;
    v10 = rand();
    sub_140004600(v7, dword_16D4FD60C[383 * v7 + 321], v3, v8, v10 & 1);
    v11 = (char *)&unk_16D4FD5AC + 1532 * v7;
    v12 = (float *)((char *)&unk_16D4FD5B8 + 1532 * v7);
    *(_DWORD *)((char *)&unk_16D4FD5FC + v9) = 0;
    *(_QWORD *)v11 = 1065353216;
    *((_QWORD *)v11 + 1) = 0;
    *((_QWORD *)v11 + 2) = 1065353216;
    *((_QWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 8) = 1065353216;
    sub_140049C20((__int64)&unk_16D4FD5AC + v9, (float *)((char *)&unk_16D4FD5B8 + v9), v13);
    sub_140049C20((__int64)&unk_16D4FD5AC + v9, (float *)((char *)&unk_16D4FD5B8 + v9), v14);
    v15 = *v12;
    v16 = v12[1];
    v17 = v12[2];
    v18 = *(float *)v11;
    v19 = *((float *)v11 + 1);
    v20 = *((float *)v11 + 2);
    v21 = *((float *)&unk_16D4FD5C8 + 383 * v7);
    DWORD2(v69) = *((_DWORD *)&unk_16D4FD5C4 + 383 * v7);
    *(_QWORD *)&v68 = __PAIR64__(LODWORD(v19), LODWORD(v18));
    *((_QWORD *)&v68 + 1) = __PAIR64__(LODWORD(v15), LODWORD(v20));
    *(_QWORD *)&v69 = __PAIR64__(LODWORD(v17), LODWORD(v16));
    v22 = *((_DWORD *)&unk_16D4FD580 + 383 * v7);
    v23 = *((float *)&unk_16D4FD590 + 383 * v7);
    v24 = *((float *)&unk_16D4FD5CC + 383 * v7);
    v25 = *((_DWORD *)&unk_16D4FDB58 + 383 * v7);
    v26 = 99776LL * v22;
    *((float *)&v69 + 3) = v21;
    v70 = LODWORD(v24);
    v27 = -*(float *)((char *)&unk_14AA15B28 + v26);
    v28 = -*(float *)((char *)&unk_14AA15B2C + v26);
    v29 = -*(float *)((char *)&unk_14AA15B30 + v26);
    v64 = (float)((float)((float)(v23 - (float)(*((float *)&v69 + 2) * 1.5)) + (float)(v18 * v27)) + (float)(v15 * v28))
        + (float)(*((float *)&v69 + 2) * v29);
    v65 = (float)((float)((float)(*((float *)&unk_16D4FD594 + 383 * v7) - (float)(v21 * 1.5)) + (float)(v19 * v27))
                + (float)(v16 * v28))
        + (float)(v21 * v29);
    v30 = *((float *)&unk_16D4FD598 + 383 * v7) - (float)(v24 * 1.5);
    v67[0] = *((_DWORD *)&unk_16D4FD59C + 383 * v7);
    v67[2] = *((_DWORD *)&unk_16D4FD5A4 + 383 * v7);
    v66 = (float)((float)(v30 + (float)(v20 * v27)) + (float)(v17 * v28)) + (float)(v24 * v29);
    v67[1] = *((_DWORD *)&unk_16D4FD5A0 + 383 * v7);
    v31 = sub_1400414B0(v22, (int *)&v64, v67, (int *)&v68, v25);
    v32 = 5210LL * v31;
    *(_DWORD *)((char *)&unk_16D4FD588 + v9) = v31;
    dword_16E6A72A8[v32] = v7;
    LODWORD(v11) = sub_140042500();
    v33 = 14388LL * (int)v11;
    *(int *)((char *)dword_16D67D624 + v33) = 7;
    sub_1400DBB30(&byte_16D67D5A4[v33], (char *)&byte_1400F34A0);
    v34 = dword_163D94A40[0];
    v35 = *(float *)&dword_16E6A3C90[v32];
    v64 = *(float *)&dword_16E6A3C8C[v32];
    *(_DWORD *)((char *)&unk_16D6802B8 + v33) = 1;
    *(_DWORD *)((char *)&dword_16D680B14[92] + v33) = a2;
    *(_DWORD *)((char *)&dword_16D680B14[93] + v33) = v34;
    *(int *)((char *)dword_16D680D4C + v33) = 1;
    *(int *)((char *)dword_16D680D60 + v33) = 2;
    *(int *)((char *)dword_16D680D64 + v33) = 1;
    v36 = dword_16E6A3C94[v32];
    v37 = (float *)&dword_16E6A3CA4[v32];
    v65 = v35;
    v66 = *(float *)&v36;
    v38 = sub_14003A7B0(&v64, (float *)&dword_16E6A3CA4[v32], (int)v11);
    v39 = v38;
    *(int *)((char *)dword_16D67D63C + v33) = v38;
    sub_14003A3D0((int)v11);
    v40 = 7166 * v39;
    v64 = 62.0;
    v66 = 60.0;
    v65 = 10.0;
    v70 = 1065353216;
    dword_1909419F0[v40] = v31;
    dword_1909419F4[v40] = 0;
    v68 = xmmword_1400F78B0;
    v69 = xmmword_1400F78B0;
    v41 = sub_14003B080(27, (int *)&v64, nullptr, (int *)&v68);
    v42 = *(int *)((char *)dword_16D67D63C + v33);
    dword_19025F340[1760 * v41] = v31;
    sub_140089E50(v41, -1, v42, 4);
    LODWORD(v11) = sub_14003B080(15, (int *)&v64, nullptr, (int *)&v68);
    v43 = 1760LL * (int)v11;
    dword_19025F0D4[v43] = 16;
    dword_163D94B4C[0] = sub_14003B080(a1, (int *)&v64, nullptr, (int *)&v68);
    dword_163D94B70 = 255;
    sub_140089E50((signed int)v11, dword_163D94B4C[0], -1, 0);
    dword_19025F0D4[v43] = 15;
    sub_140089E50((signed int)v11, -1, *(int *)((char *)dword_16D67D63C + v33), 3);
    *(int *)((char *)dword_16D67D624 + v33) = 7;
    *(_QWORD *)((char *)&unk_16D6802D4 + v33) = 0;
    *(_DWORD *)((char *)&unk_16D6802C4 + v33) = 1;
    LODWORD(v33) = sub_140042500();
    v44 = 3597LL * (int)v33;
    dword_16D67D624[v44] = 7;
    sub_1400DBB30(&byte_16D67D5A4[v44 * 4], (char *)&byte_1400F34A0);
    v45 = *(float *)&dword_16E6A3C90[v32];
    v46 = dword_163D94A40[0];
    v64 = *(float *)&dword_16E6A3C8C[v32];
    v66 = *(float *)&dword_16E6A3C94[v32];
    v65 = v45;
    *(_DWORD *)((char *)&unk_16D6802B8 + v44 * 4) = 1;
    dword_16D680B14[v44 + 92] = a2;
    dword_16D680B14[v44 + 93] = v46;
    dword_16D680D4C[v44] = 1;
    dword_16D680D60[v44] = 2;
    dword_16D680D64[v44] = 1;
    v47 = sub_14003A7B0(&v64, (float *)&dword_16E6A3CA4[v32], v33);
    v48 = v47;
    dword_16D67D63C[v44] = v47;
    sub_14003A3D0(v33);
    v49 = 7166 * v48;
    dword_1909419F0[v49] = v31;
    dword_1909419F4[v49] = 1;
    sub_1400B9160(v48, 11, 4);
    if ( (rand() & 1) == 0 )
    {
      v50 = sub_140042500();
      v51 = 3597LL * v50;
      dword_16D67D624[v51] = 7;
      sub_1400DBB30(&byte_16D67D5A4[v51 * 4], (char *)&byte_1400F34A0);
      v52 = *(float *)&dword_16E6A3C90[v32];
      v53 = dword_163D94A40[0];
      v64 = *(float *)&dword_16E6A3C8C[v32];
      v66 = *(float *)&dword_16E6A3C94[v32];
      v65 = v52;
      *(_DWORD *)((char *)&unk_16D6802B8 + v51 * 4) = 1;
      dword_16D680B14[v51 + 92] = a2;
      dword_16D680B14[v51 + 93] = v53;
      dword_16D680D4C[v51] = 1;
      dword_16D680D60[v51] = 2;
      dword_16D680D64[v51] = 1;
      v54 = sub_14003A7B0(&v64, v37, v50);
      v55 = v54;
      dword_16D67D63C[v51] = v54;
      sub_14003A3D0(v50);
      v56 = 7166 * v55;
      dword_1909419F0[v56] = v31;
      dword_1909419F4[v56] = 2;
      sub_1400B9160(v55, 11, 4);
    }
    if ( (rand() & 1) == 0 )
    {
      v57 = sub_140042500();
      v58 = 3597LL * v57;
      dword_16D67D624[v58] = 7;
      sub_1400DBB30(&byte_16D67D5A4[v58 * 4], (char *)&byte_1400F34A0);
      v59 = *(float *)&dword_16E6A3C90[v32];
      v60 = dword_163D94A40[0];
      v64 = *(float *)&dword_16E6A3C8C[v32];
      v66 = *(float *)&dword_16E6A3C94[v32];
      v65 = v59;
      *(_DWORD *)((char *)&unk_16D6802B8 + v58 * 4) = 1;
      dword_16D680B14[v58 + 92] = a2;
      dword_16D680B14[v58 + 93] = v60;
      dword_16D680D4C[v58] = 1;
      dword_16D680D60[v58] = 2;
      dword_16D680D64[v58] = 1;
      v61 = sub_14003A7B0(&v64, v37, v57);
      v62 = v61;
      dword_16D67D63C[v58] = v61;
      sub_14003A3D0(v57);
      v63 = 7166 * v62;
      dword_1909419F0[v63] = v31;
      dword_1909419F4[v63] = 3;
      sub_1400B9160(v62, 11, 4);
    }
  }
}

