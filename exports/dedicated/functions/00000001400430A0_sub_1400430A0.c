/* Address: 0x1400430a0 | Name: sub_1400430A0 | Size: 3047 bytes */
__int64 sub_1400430A0()
{
  int v0; // ebx
  __int64 v1; // r14
  float v2; // xmm3_4
  float v3; // xmm8_4
  float v4; // xmm6_4
  int v5; // r10d
  float v6; // xmm10_4
  float v7; // xmm9_4
  float v8; // xmm11_4
  float v9; // xmm13_4
  float v10; // xmm12_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  int v17; // eax
  int *v18; // rsi
  __int64 v19; // r15
  int v20; // r13d
  int v21; // r12d
  __int128 *v22; // rbx
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rdx
  int *v26; // r14
  int *v27; // r15
  unsigned int v28; // eax
  unsigned int v29; // eax
  int i; // ebx
  unsigned int v31; // eax
  int v32; // edi
  __int64 v33; // rbx
  float v34; // xmm1_4
  int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rdx
  int *v38; // rdi
  int *v39; // r14
  unsigned int v40; // eax
  unsigned int v41; // eax
  int j; // ebx
  unsigned int v43; // eax
  int v44; // eax
  __int64 v45; // r15
  int v46; // edi
  int v47; // ebx
  __int64 v48; // rcx
  __int64 v49; // rsi
  char v50; // al
  __int64 v51; // rdi
  float v52; // xmm2_4
  float v53; // xmm8_4
  float v54; // xmm6_4
  int v55; // r10d
  float v56; // xmm10_4
  float v57; // xmm9_4
  float v58; // xmm11_4
  float v59; // xmm13_4
  float v60; // xmm12_4
  __int64 v61; // rcx
  float v62; // xmm1_4
  float v63; // xmm5_4
  float v64; // xmm4_4
  float v65; // xmm3_4
  float v66; // xmm1_4
  int v67; // r14d
  __int64 v68; // r13
  __int64 v69; // rsi
  __int64 v70; // rdi
  int v71; // xmm1_4
  int v72; // eax
  __int64 v73; // rbx
  __int64 v74; // rcx
  int v75; // r15d
  _DWORD *v76; // r12
  __int64 v77; // rdi
  __int64 v78; // rbx
  int v79; // xmm1_4
  int v80; // eax
  __int64 v81; // rsi
  __int64 v82; // rax
  int *v83; // rdi
  int *v84; // r14
  unsigned int v85; // eax
  unsigned int v86; // eax
  int k; // ebx
  unsigned int v88; // eax
  int v90; // [rsp+28h] [rbp-E0h]
  int v91; // [rsp+28h] [rbp-E0h]
  float v92; // [rsp+38h] [rbp-D0h] BYREF
  float v93; // [rsp+3Ch] [rbp-CCh]
  float v94; // [rsp+40h] [rbp-C8h]
  int v95; // [rsp+48h] [rbp-C0h] BYREF
  int v96; // [rsp+4Ch] [rbp-BCh]
  int v97; // [rsp+50h] [rbp-B8h]
  float v98; // [rsp+58h] [rbp-B0h] BYREF
  float v99; // [rsp+5Ch] [rbp-ACh]
  float v100; // [rsp+60h] [rbp-A8h]
  float v101; // [rsp+64h] [rbp-A4h]
  float v102; // [rsp+68h] [rbp-A0h]
  float v103; // [rsp+6Ch] [rbp-9Ch]
  float v104; // [rsp+70h] [rbp-98h]
  float v105; // [rsp+74h] [rbp-94h]
  float v106; // [rsp+78h] [rbp-90h]
  int v107; // [rsp+178h] [rbp+70h]
  int v108; // [rsp+178h] [rbp+70h]
  __int128 *v109; // [rsp+180h] [rbp+78h]
  __int64 v110; // [rsp+188h] [rbp+80h]
  __int64 v111; // [rsp+190h] [rbp+88h]

  xmmword_1915FD9EC = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400F8020);
  dword_1915FDA2C = 0;
  xmmword_1915FD9FC = xmmword_1915FD9EC;
  xmmword_1915FDA0C = xmmword_1915FD9EC;
  xmmword_1915FDA1C = xmmword_1915FD9EC;
  v0 = sub_1400B92B0(dword_1915FD9E8, 0, 67, 0, 1, 1031798784);
  v1 = 1532LL * v0;
  v110 = v1;
  v2 = *(float *)((char *)&unk_16D4FD5C4 + v1);
  v3 = *(float *)((char *)&unk_16D4FD5C8 + v1);
  v4 = *(float *)((char *)&unk_16D4FD5B8 + v1);
  v5 = *(_DWORD *)((char *)&unk_16D4FD580 + v1);
  v6 = *(float *)((char *)&unk_16D4FD5B0 + v1);
  v7 = *(float *)((char *)&unk_16D4FD5BC + v1);
  v8 = *(float *)((char *)&unk_16D4FD5CC + v1);
  v9 = *(float *)((char *)&unk_16D4FD5B4 + v1);
  v10 = *(float *)((char *)&unk_16D4FD5C0 + v1);
  v11 = 99776LL * v5;
  v12 = *(float *)((char *)&unk_16D4FD590 + v1) - (float)(v2 * 1.5);
  v98 = *(float *)((char *)&unk_16D4FD5AC + v1);
  v101 = v4;
  v104 = v2;
  v99 = v6;
  v102 = v7;
  v105 = v3;
  v13 = -*(float *)((char *)&unk_14AA15B28 + v11);
  v14 = -*(float *)((char *)&unk_14AA15B2C + v11);
  v15 = -*(float *)((char *)&unk_14AA15B30 + v11);
  v100 = v9;
  v103 = v10;
  v106 = v8;
  v92 = (float)((float)(v12 + (float)(v98 * v13)) + (float)(v4 * v14)) + (float)(v2 * v15);
  v93 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD594 + v1) - (float)(v3 * 1.5)) + (float)(v6 * v13))
              + (float)(v7 * v14))
      + (float)(v3 * v15);
  v16 = *(float *)((char *)&unk_16D4FD598 + v1) - (float)(v8 * 1.5);
  v90 = *(_DWORD *)((char *)&unk_16D4FDB58 + v1);
  v95 = *(_DWORD *)((char *)&unk_16D4FD59C + v1);
  v97 = *(_DWORD *)((char *)&unk_16D4FD5A4 + v1);
  v94 = (float)((float)(v16 + (float)(v9 * v13)) + (float)(v10 * v14)) + (float)(v8 * v15);
  v96 = *(_DWORD *)((char *)&unk_16D4FD5A0 + v1);
  v17 = sub_1400414B0(v5, (int *)&v92, &v95, (int *)&v98, v90);
  v18 = dword_16D67D63C;
  v19 = 20840LL * v17;
  v20 = 0;
  v107 = v17;
  *(_DWORD *)((char *)&unk_16D4FD588 + v1) = v17;
  v21 = 0;
  v111 = v19;
  *(int *)((char *)dword_16E6A72A8 + v19) = v0;
  v22 = &xmmword_1915FDA0C;
  v109 = &xmmword_1915FDA0C;
  do
  {
    if ( *(v18 - 39) && *v18 == -1 )
    {
      v23 = sub_14003A7B0((float *)((char *)dword_16E6A3C8C + v19), (float *)((char *)dword_16E6A3CA4 + v19), v21);
      v24 = v23;
      *v18 = v23;
      *(_DWORD *)v22 = v21;
      sub_14003A3D0(v21);
      if ( v20 < dword_14AA2D5F8[24944 * *(int *)((char *)&unk_16D4FD580 + v1)] )
      {
        v25 = 7166 * v24;
        dword_1909419F0[v25] = v107;
        dword_1909419F4[v25] = v20;
      }
      if ( v20 > 0 && (_DWORD)v24 != -1 )
      {
        v26 = (int *)&xmmword_190941C1C + 7166 * v24;
        v27 = &dword_190941BEC[7166 * v24];
        v28 = sub_14003B080(9, v27, nullptr, v26);
        sub_140089E50(v28, 0xFFFFFFFFLL, (unsigned int)v24, 0);
        v29 = sub_14003B080(10, v27, nullptr, v26);
        sub_140089E50(v29, 0xFFFFFFFFLL, (unsigned int)v24, 1);
        for ( i = 1; i < 8; ++i )
        {
          v31 = sub_14003B080(10, v27, nullptr, v26);
          sub_140089E50(v31, 0xFFFFFFFFLL, (unsigned int)v24, (unsigned int)(((i - 1) >> 1) + 3));
        }
        v22 = v109;
        v1 = v110;
        v19 = v111;
      }
      ++v20;
      v18[1] = 0x40000000;
      v22 = (__int128 *)((char *)v22 + 4);
      v18[3] = -1082130432;
      v109 = v22;
    }
    ++v21;
    v18 += 3597;
  }
  while ( v21 < 256 );
  if ( v20 == 1 )
  {
    v32 = sub_140042500();
    v33 = 3597LL * v32;
    dword_16D67D624[v33] = 0;
    sub_1400DBB30(&byte_16D67D5A4[v33 * 4], "Gunner");
    v34 = *(float *)((char *)dword_16E6A3C90 + v19);
    v92 = *(float *)((char *)dword_16E6A3C8C + v19);
    v94 = *(float *)((char *)dword_16E6A3C94 + v19);
    v93 = v34;
    *(_DWORD *)((char *)&unk_16D6802B8 + v33 * 4) = 1;
    DWORD1(xmmword_1915FDA0C) = v32;
    dword_16D680D4C[v33] = 1;
    *(_QWORD *)&dword_16D680D60[v33] = 1;
    v35 = sub_14003A7B0(&v92, (float *)((char *)dword_16E6A3CA4 + v19), v32);
    v36 = v35;
    dword_16D67D63C[v33] = v35;
    sub_14003A3D0(v32);
    v37 = 7166 * v36;
    dword_1909419F0[v37] = v107;
    dword_1909419F4[v37] = 1;
    if ( (_DWORD)v36 != -1 )
    {
      v38 = (int *)((char *)&xmmword_190941C1C + v37 * 4);
      v39 = &dword_190941BEC[v37];
      v40 = sub_14003B080(9, &dword_190941BEC[v37], nullptr, (int *)((char *)&xmmword_190941C1C + v37 * 4));
      sub_140089E50(v40, 0xFFFFFFFFLL, (unsigned int)v36, 0);
      v41 = sub_14003B080(10, v39, nullptr, v38);
      sub_140089E50(v41, 0xFFFFFFFFLL, (unsigned int)v36, 1);
      for ( j = 1; j < 8; ++j )
      {
        v43 = sub_14003B080(10, v39, nullptr, v38);
        sub_140089E50(v43, 0xFFFFFFFFLL, (unsigned int)v36, (unsigned int)(((j - 1) >> 1) + 3));
      }
    }
  }
  v44 = sub_1400B92B0(7, 1, 67, 0, 1, 1063256064);
  v45 = v44;
  dword_16E6A3420 = v44;
  if ( dword_1839ABEE4 )
  {
    v47 = 0;
    v46 = rand() % dword_1839ABEE4;
    do
    {
      v48 = 1584LL * v46;
      if ( *(int *)((char *)&unk_1839ABF18 + v48) <= 3 && *(int *)((char *)&unk_1839ABF1C + v48) <= 3 )
        break;
      ++v47;
      v46 = rand() % dword_1839ABEE4;
    }
    while ( v47 < 1024 );
  }
  else
  {
    v46 = 0;
  }
  v49 = 1532 * v45;
  v50 = rand();
  sub_140004600(v45, dword_16D4FD60C[383 * v45 + 321], 0, v46, v50 & 1);
  v51 = 0x140000000LL + 1532 * v45 + 760206764;
  *(_DWORD *)((char *)&unk_16D4FD5FC + v49) = 0;
  *(_QWORD *)v51 = 1065353216;
  *(_QWORD *)(v51 + 8) = 0;
  *(_QWORD *)(v51 + 16) = 1065353216;
  *(_QWORD *)(v51 + 24) = 0;
  *(_DWORD *)(v51 + 32) = 1065353216;
  sub_140049C20(v51, 0x140000000LL + 1532 * v45 + 760206776);
  sub_140049C20(0x140000000LL + v49 + 760206764, 0x140000000LL + v49 + 760206776);
  v52 = *((float *)&unk_16D4FD5C4 + 383 * v45);
  v53 = *((float *)&unk_16D4FD5C8 + 383 * v45);
  v54 = *(float *)(0x140000000LL + 1532 * v45 + 760206776);
  v55 = *((_DWORD *)&unk_16D4FD580 + 383 * v45);
  v56 = *(float *)(0x140000004LL + 1532 * v45 + 760206764);
  v57 = *(float *)(0x140000004LL + 1532 * v45 + 760206776);
  v58 = *((float *)&unk_16D4FD5CC + 383 * v45);
  v59 = *(float *)(0x140000008LL + 1532 * v45 + 760206764);
  v60 = *(float *)(0x140000008LL + 1532 * v45 + 760206776);
  v61 = 99776LL * v55;
  v62 = *(float *)((char *)&unk_16D4FD590 + v49) - (float)(*(float *)((char *)&unk_16D4FD5C4 + v49) * 1.5);
  v98 = *(float *)v51;
  v101 = v54;
  v104 = v52;
  v99 = v56;
  v102 = v57;
  v105 = v53;
  v63 = -*(float *)((char *)&unk_14AA15B28 + v61);
  v64 = -*(float *)((char *)&unk_14AA15B2C + v61);
  v65 = -*(float *)((char *)&unk_14AA15B30 + v61);
  v100 = v59;
  v103 = v60;
  v106 = v58;
  v92 = (float)((float)(v62 + (float)(v98 * v63)) + (float)(v54 * v64)) + (float)(v52 * v65);
  v93 = (float)((float)((float)(*((float *)&unk_16D4FD594 + 383 * v45) - (float)(v53 * 1.5)) + (float)(v56 * v63))
              + (float)(v57 * v64))
      + (float)(v53 * v65);
  v66 = (float)(*((float *)&unk_16D4FD598 + 383 * v45) - (float)(v58 * 1.5)) + (float)(v59 * v63);
  v91 = *((_DWORD *)&unk_16D4FDB58 + 383 * v45);
  v95 = *((_DWORD *)&unk_16D4FD59C + 383 * v45);
  v97 = *((_DWORD *)&unk_16D4FD5A4 + 383 * v45);
  v94 = (float)(v66 + (float)(v60 * v64)) + (float)(v58 * v65);
  v96 = *((_DWORD *)&unk_16D4FD5A0 + 383 * v45);
  v67 = sub_1400414B0(v55, (int *)&v92, &v95, (int *)&v98, v91);
  v68 = 5210LL * v67;
  v108 = v67;
  *(_DWORD *)((char *)&unk_16D4FD588 + v49) = v67;
  dword_16E6A72A8[v68] = v45;
  dword_16E6A7500[v68] = 1134542848;
  v69 = (int)sub_140042500();
  v70 = 3597 * v69;
  dword_16D67D624[v70] = 7;
  sub_1400DBB30((char *)(0x140000000LL + 14388 * v69 + 761779620), (char *)&byte_1400F34A0);
  v71 = dword_16E6A3C90[v68];
  v92 = *(float *)&dword_16E6A3C8C[v68];
  v94 = *(float *)&dword_16E6A3C94[v68];
  v93 = *(float *)&v71;
  *(_DWORD *)((char *)&unk_16D6802B8 + v70 * 4) = 1;
  LODWORD(xmmword_1915FD9EC) = v69;
  dword_16D680D4C[v70] = 1;
  dword_16D680D60[v70] = 2;
  dword_16D680D64[v70] = 1;
  *(_DWORD *)((char *)&unk_16D6802C4 + v70 * 4) = 1;
  *(_QWORD *)((char *)&unk_16D6802D4 + v70 * 4) = 0;
  v72 = sub_14003A7B0(&v92, (float *)(0x140000000LL + v68 * 4 + 778714276), v69);
  v73 = v72;
  dword_16D67D63C[v70] = v72;
  sub_14003A3D0(v69);
  v74 = 7166 * v73;
  dword_1909419F0[v74] = v67;
  dword_1909419F4[v74] = 0;
  v75 = 1;
  if ( dword_1915FD9E0 > 1 )
  {
    v76 = (_DWORD *)&xmmword_1915FD9EC + 1;
    do
    {
      v77 = (int)sub_140042500();
      v78 = 3597 * v77;
      dword_16D67D624[v78] = 7;
      sub_1400DBB30(&byte_16D67D5A4[14388 * v77], (char *)&byte_1400F34A0);
      v79 = dword_16E6A3C90[v68];
      v92 = *(float *)&dword_16E6A3C8C[v68];
      v94 = *(float *)&dword_16E6A3C94[v68];
      v93 = *(float *)&v79;
      *(_DWORD *)((char *)&unk_16D6802B8 + v78 * 4) = 1;
      *v76 = v77;
      dword_16D680D4C[v78] = 1;
      dword_16D680D60[v78] = 2;
      dword_16D680D64[v78] = 1;
      v80 = sub_14003A7B0(&v92, (float *)&dword_16E6A3CA4[v68], v77);
      v81 = v80;
      dword_16D67D63C[v78] = v80;
      sub_14003A3D0(v77);
      v82 = 7166 * v81;
      dword_1909419F0[v82] = v67;
      dword_1909419F4[v82] = v75;
      if ( (_DWORD)v81 != -1 )
      {
        v83 = (int *)((char *)&xmmword_190941C1C + v82 * 4);
        v84 = &dword_190941BEC[v82];
        v85 = sub_14003B080(7, &dword_190941BEC[v82], nullptr, (int *)((char *)&xmmword_190941C1C + v82 * 4));
        sub_140089E50(v85, 0xFFFFFFFFLL, (unsigned int)v81, 0);
        v86 = sub_14003B080(8, v84, nullptr, v83);
        sub_140089E50(v86, 0xFFFFFFFFLL, (unsigned int)v81, 1);
        for ( k = 1; k < 4; ++k )
        {
          v88 = sub_14003B080(8, v84, nullptr, v83);
          sub_140089E50(v88, 0xFFFFFFFFLL, (unsigned int)v81, (unsigned int)(((k - 1) >> 1) + 3));
        }
        v67 = v108;
      }
      ++v75;
      ++v76;
    }
    while ( v75 < dword_1915FD9E0 );
  }
  return sub_1400BAD70(128);
}

