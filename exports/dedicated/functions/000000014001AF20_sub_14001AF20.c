/* Address: 0x14001af20 | Name: sub_14001AF20 | Size: 2695 bytes */
__int64 sub_14001AF20()
{
  int v0; // eax
  int v1; // edi
  int v2; // r9d
  int v3; // edx
  __int64 v4; // rbx
  int v5; // r10d
  __int64 v6; // r11
  int v7; // r8d
  char *v8; // rcx
  __int128 v9; // xmm0
  unsigned int v10; // r10d
  int v11; // ebx
  unsigned int v12; // r9d
  unsigned int v13; // edx
  __int64 v14; // rax
  char *v15; // rcx
  int v16; // r13d
  unsigned int v17; // esi
  unsigned int v18; // ebp
  __int64 v19; // r15
  __int64 v20; // r12
  int v21; // r11d
  __int64 v22; // r14
  int v23; // edi
  __int64 v24; // r10
  char *v25; // r8
  int v26; // edx
  int v27; // ebx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  int v38; // [rsp+30h] [rbp+8h]

  v0 = dword_148BAAC80;
  v1 = 0;
  v2 = dword_148BAAC7C;
  v3 = dword_148BAAC78;
  if ( dword_148BAAC80 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = 0;
      v6 = 0;
      if ( v2 >= 0 )
      {
        do
        {
          v7 = 0;
          if ( v3 >= 0 )
          {
            v8 = (char *)&unk_149AAAFCC + 3840 * v4 + 3840 * v6;
            do
            {
              v9 = *(_OWORD *)(v8 - 15729468);
              ++v7;
              v8 += 60;
              *(_OWORD *)(v8 - 60) = v9;
              *(_OWORD *)(v8 - 44) = *(_OWORD *)(v8 - 15729512);
              *(_OWORD *)(v8 - 28) = *(_OWORD *)(v8 - 15729496);
              *(_QWORD *)(v8 - 12) = *((_QWORD *)v8 - 1966185);
              *((_DWORD *)v8 - 1) = *((_DWORD *)v8 - 3932368);
              v3 = dword_148BAAC78;
            }
            while ( v7 <= dword_148BAAC78 );
            v2 = dword_148BAAC7C;
          }
          ++v5;
          ++v6;
        }
        while ( v5 <= v2 );
        v0 = dword_148BAAC80;
      }
      ++v1;
      v4 += 64;
    }
    while ( v1 < v0 );
  }
  v10 = v3;
  if ( v3 < (unsigned int)v2 )
    v10 = v2;
  v11 = 0;
  if ( v0 > 0 )
  {
    do
    {
      v12 = 0;
      do
      {
        v13 = 0;
        do
        {
          v14 = ((((__int64)v11 << 6) + (int)v12) << 6) + (int)v13++;
          v15 = (char *)&unk_148BAAC90 + 60 * v14;
          *(_OWORD *)v15 = 0;
          *((_OWORD *)v15 + 1) = 0;
          *((_OWORD *)v15 + 2) = 0;
          *((_QWORD *)v15 + 6) = 0;
          *((_DWORD *)v15 + 14) = 0;
        }
        while ( v13 <= v10 );
        ++v12;
      }
      while ( v12 <= v10 );
      v0 = dword_148BAAC80;
      ++v11;
    }
    while ( v11 < dword_148BAAC80 );
    v2 = dword_148BAAC7C;
    v3 = dword_148BAAC78;
  }
  v16 = 0;
  qword_14A9AAFDC = qword_149AAACA0;
  qword_14A9AAFF4 = qword_149AAACB8;
  qword_14A9AB00C = qword_149AAACD0;
  qword_14A9AB024 = qword_149AAACE8;
  qword_14A9AB03C = qword_149AAAD00;
  qword_14A9AB054 = qword_149AAAD18;
  qword_14A9AB06C = qword_149AAAD30;
  qword_14A9AB084 = qword_149AAAD48;
  qword_14A9AB09C = qword_149AAAD60;
  qword_14A9AB0B4 = qword_149AAAD78;
  qword_14A9AB0CC = qword_149AAAD90;
  qword_14A9AB0E4 = qword_149AAADA8;
  qword_14A9AB0FC = qword_149AAADC0;
  qword_14A9AB114 = qword_149AAADD8;
  qword_14A9AB12C = qword_149AAADF0;
  qword_14A9AB144 = qword_149AAAE08;
  v38 = 0;
  xmmword_14A9AAFCC = xmmword_149AAAC90;
  xmmword_14A9AAFE4 = xmmword_149AAACA8;
  xmmword_14A9AAFFC = xmmword_149AAACC0;
  xmmword_14A9AB014 = xmmword_149AAACD8;
  xmmword_14A9AB02C = xmmword_149AAACF0;
  xmmword_14A9AB044 = xmmword_149AAAD08;
  xmmword_14A9AB05C = xmmword_149AAAD20;
  xmmword_14A9AB074 = xmmword_149AAAD38;
  xmmword_14A9AB08C = xmmword_149AAAD50;
  xmmword_14A9AB0A4 = xmmword_149AAAD68;
  xmmword_14A9AB0BC = xmmword_149AAAD80;
  xmmword_14A9AB0D4 = xmmword_149AAAD98;
  xmmword_14A9AB0EC = xmmword_149AAADB0;
  xmmword_14A9AB104 = xmmword_149AAADC8;
  xmmword_14A9AB11C = xmmword_149AAADE0;
  xmmword_14A9AB134 = xmmword_149AAADF8;
  if ( v0 > 0 )
  {
    v17 = dword_15ADEF2A8;
    v18 = dword_15ADEF2A4;
    v19 = 0;
    v20 = 0;
    do
    {
      v21 = 0;
      v22 = 0;
      if ( v2 >= 0 )
      {
        do
        {
          v23 = 0;
          if ( v3 >= 0 )
          {
            v24 = v20;
            v25 = (char *)&unk_149AAAFE4 + 3840 * v19 + 3840 * v22;
            do
            {
              if ( v21 < v2 )
              {
                v26 = *((_DWORD *)v25 - 5);
                v27 = v2 - v21 - 1;
                if ( (v26 & 0xE0000000) == 0x80000000 )
                {
                  v26 = (unsigned __int16)v26;
                  v27 = v2 - v21 - dword_15AE31828[58 * (unsigned __int16)v26];
                  if ( (unsigned __int16)v26 >= v18 && (unsigned __int16)v26 < v17 )
                  {
                    v26 = (unsigned __int16)v26 + 1;
                    if ( (v26 & 3) == 0 )
                      v26 -= 4;
                  }
                  v26 |= 0x80000000;
                }
                v28 = 60 * (v24 + v27);
                if ( !*(_DWORD *)((char *)&unk_148BAAC94 + v28) )
                {
                  *(_DWORD *)((char *)&unk_148BAAC94 + v28) = v26;
                  *(_WORD *)((char *)&unk_148BAACA8 + v28) = *(_WORD *)v25;
                  *(_WORD *)((char *)&unk_148BAACAE + v28) = *((_WORD *)v25 + 2);
                  *(_WORD *)((char *)&unk_148BAACB0 + v28) = *((_WORD *)v25 + 3);
                  *(_WORD *)((char *)&unk_148BAACAA + v28) = *((_WORD *)v25 + 4);
                  *(_WORD *)((char *)&unk_148BAACAC + v28) = *((_WORD *)v25 + 1);
                  *(_WORD *)((char *)&unk_148BAACB2 + v28) = *((_WORD *)v25 + 5);
                  *(_WORD *)((char *)&unk_148BAACB4 + v28) = *((_WORD *)v25 + 6);
                  *(_WORD *)((char *)&unk_148BAACB6 + v28) = *((_WORD *)v25 + 7);
                  v2 = dword_148BAAC7C;
                }
                v29 = *((_DWORD *)v25 - 4);
                v30 = v2 - v21 - 1;
                if ( (v29 & 0xE0000000) == 0x80000000 )
                {
                  v29 = (unsigned __int16)v29;
                  v30 = v2 - v21 - dword_15AE31828[58 * (unsigned __int16)v29];
                  if ( (unsigned __int16)v29 >= v18 && (unsigned __int16)v29 < v17 )
                  {
                    v29 = (unsigned __int16)v29 + 1;
                    if ( (v29 & 3) == 0 )
                      v29 -= 4;
                  }
                  v29 |= 0x80000000;
                }
                v31 = 60 * (v24 + v30);
                if ( !*(_DWORD *)((char *)&unk_148BAAC98 + v31) )
                {
                  *(_DWORD *)((char *)&unk_148BAAC98 + v31) = v29;
                  *(_WORD *)((char *)&unk_148BAACB8 + v31) = *((_WORD *)v25 + 8);
                  *(_WORD *)((char *)&unk_148BAACBE + v31) = *((_WORD *)v25 + 10);
                  *(_WORD *)((char *)&unk_148BAACC0 + v31) = *((_WORD *)v25 + 11);
                  *(_WORD *)((char *)&unk_148BAACBA + v31) = *((_WORD *)v25 + 12);
                  *(_WORD *)((char *)&unk_148BAACBC + v31) = *((_WORD *)v25 + 9);
                  *(_WORD *)((char *)&unk_148BAACC2 + v31) = *((_WORD *)v25 + 13);
                  *(_WORD *)((char *)&unk_148BAACC4 + v31) = *((_WORD *)v25 + 14);
                  *(_WORD *)((char *)&unk_148BAACC6 + v31) = *((_WORD *)v25 + 15);
                  v2 = dword_148BAAC7C;
                }
                if ( (v29 & 0xE0000000) == 0x80000000 )
                {
                  v32 = v24 + v2 - v21;
                  if ( !*((_DWORD *)&unk_148BAAC5C + 15 * v32) )
                  {
                    *((_DWORD *)&unk_148BAAC5C + 15 * v32) = -1073741824;
                    v2 = dword_148BAAC7C;
                  }
                }
                *((_DWORD *)&unk_148BAAC54 + 15 * v24 + 15 * (v2 - v21)) = *((_DWORD *)v25 - 6);
                *((_DWORD *)&unk_148BAAC60 + 15 * v24 + 15 * (dword_148BAAC7C - v21)) = *((_DWORD *)v25 - 2);
                *((_DWORD *)&unk_148BAAC68 + 15 * v24 + 15 * (dword_148BAAC7C - v21)) = *((_DWORD *)v25 - 1);
                v33 = *((_DWORD *)v25 + 8);
                v34 = 15 * (v24 + dword_148BAAC7C - v21);
                if ( v33 )
                {
                  dword_148BAAC8C[v34] = v33;
                  dword_148BAAC8C[15 * v24 + 15 * (dword_148BAAC7C - v21)] &= 0xFCFFFFFF;
                  dword_148BAAC8C[15 * v24 + 15 * (dword_148BAAC7C - v21)] |= ((v33 & 0xFF000000) + 0x1000000)
                                                                            & 0x3000000;
                }
                else
                {
                  dword_148BAAC8C[v34] = 0;
                }
                v2 = dword_148BAAC7C;
              }
              ++v23;
              v35 = v24 + v2 - v21;
              v24 += 64;
              v36 = 60 * v35;
              LODWORD(v35) = *((_DWORD *)v25 - 3);
              v25 += 60;
              *(_DWORD *)((char *)&unk_148BAACA0 + v36) = v35;
              v3 = dword_148BAAC78;
              v2 = dword_148BAAC7C;
            }
            while ( v23 <= dword_148BAAC78 );
          }
          ++v21;
          ++v22;
        }
        while ( v21 <= v2 );
        v0 = dword_148BAAC80;
        v16 = v38;
      }
      ++v16;
      v20 += 4096;
      v19 += 64;
      v38 = v16;
    }
    while ( v16 < v0 );
  }
  HIDWORD(xmmword_149AAAC90) = HIDWORD(qword_14A9AAFDC);
  LODWORD(xmmword_149AAAC90) = v2 - DWORD2(xmmword_14A9AAFCC) - HIDWORD(qword_14A9AAFDC);
  DWORD2(xmmword_149AAAC90) = xmmword_14A9AAFCC;
  HIDWORD(qword_149AAACA0) = HIDWORD(xmmword_14A9AAFCC);
  HIDWORD(xmmword_149AAACA8) = HIDWORD(qword_14A9AAFF4);
  LODWORD(xmmword_149AAACA8) = v2 - DWORD2(xmmword_14A9AAFE4) - HIDWORD(qword_14A9AAFF4);
  DWORD2(xmmword_149AAACA8) = xmmword_14A9AAFE4;
  HIDWORD(qword_149AAACB8) = HIDWORD(xmmword_14A9AAFE4);
  HIDWORD(xmmword_149AAACC0) = HIDWORD(qword_14A9AB00C);
  LODWORD(xmmword_149AAACC0) = v2 - HIDWORD(qword_14A9AB00C) - DWORD2(xmmword_14A9AAFFC);
  DWORD2(xmmword_149AAACC0) = xmmword_14A9AAFFC;
  HIDWORD(qword_149AAACD0) = HIDWORD(xmmword_14A9AAFFC);
  HIDWORD(xmmword_149AAACD8) = HIDWORD(qword_14A9AB024);
  LODWORD(xmmword_149AAACD8) = v2 - HIDWORD(qword_14A9AB024) - DWORD2(xmmword_14A9AB014);
  DWORD2(xmmword_149AAACD8) = xmmword_14A9AB014;
  HIDWORD(qword_149AAACE8) = HIDWORD(xmmword_14A9AB014);
  HIDWORD(xmmword_149AAACF0) = HIDWORD(qword_14A9AB03C);
  LODWORD(xmmword_149AAACF0) = v2 - HIDWORD(qword_14A9AB03C) - DWORD2(xmmword_14A9AB02C);
  DWORD2(xmmword_149AAACF0) = xmmword_14A9AB02C;
  HIDWORD(qword_149AAAD00) = HIDWORD(xmmword_14A9AB02C);
  HIDWORD(xmmword_149AAAD08) = HIDWORD(qword_14A9AB054);
  LODWORD(xmmword_149AAAD08) = v2 - HIDWORD(qword_14A9AB054) - DWORD2(xmmword_14A9AB044);
  DWORD2(xmmword_149AAAD08) = xmmword_14A9AB044;
  HIDWORD(qword_149AAAD18) = HIDWORD(xmmword_14A9AB044);
  HIDWORD(xmmword_149AAAD20) = HIDWORD(qword_14A9AB06C);
  LODWORD(xmmword_149AAAD20) = v2 - HIDWORD(qword_14A9AB06C) - DWORD2(xmmword_14A9AB05C);
  DWORD2(xmmword_149AAAD20) = xmmword_14A9AB05C;
  HIDWORD(qword_149AAAD30) = HIDWORD(xmmword_14A9AB05C);
  HIDWORD(xmmword_149AAAD38) = HIDWORD(qword_14A9AB084);
  LODWORD(xmmword_149AAAD38) = v2 - HIDWORD(qword_14A9AB084) - DWORD2(xmmword_14A9AB074);
  DWORD2(xmmword_149AAAD38) = xmmword_14A9AB074;
  HIDWORD(qword_149AAAD48) = HIDWORD(xmmword_14A9AB074);
  HIDWORD(xmmword_149AAAD50) = HIDWORD(qword_14A9AB09C);
  dword_148BAAC78 = v2;
  LODWORD(xmmword_149AAAD50) = v2 - HIDWORD(qword_14A9AB09C) - DWORD2(xmmword_14A9AB08C);
  DWORD2(xmmword_149AAAD50) = xmmword_14A9AB08C;
  HIDWORD(qword_149AAAD60) = HIDWORD(xmmword_14A9AB08C);
  HIDWORD(xmmword_149AAAD68) = HIDWORD(qword_14A9AB0B4);
  LODWORD(xmmword_149AAAD68) = v2 - HIDWORD(qword_14A9AB0B4) - DWORD2(xmmword_14A9AB0A4);
  DWORD2(xmmword_149AAAD68) = xmmword_14A9AB0A4;
  HIDWORD(qword_149AAAD78) = HIDWORD(xmmword_14A9AB0A4);
  HIDWORD(xmmword_149AAAD80) = HIDWORD(qword_14A9AB0CC);
  LODWORD(xmmword_149AAAD80) = v2 - HIDWORD(qword_14A9AB0CC) - DWORD2(xmmword_14A9AB0BC);
  DWORD2(xmmword_149AAAD80) = xmmword_14A9AB0BC;
  HIDWORD(qword_149AAAD90) = HIDWORD(xmmword_14A9AB0BC);
  HIDWORD(xmmword_149AAAD98) = HIDWORD(qword_14A9AB0E4);
  LODWORD(xmmword_149AAAD98) = v2 - HIDWORD(qword_14A9AB0E4) - DWORD2(xmmword_14A9AB0D4);
  DWORD2(xmmword_149AAAD98) = xmmword_14A9AB0D4;
  HIDWORD(qword_149AAADA8) = HIDWORD(xmmword_14A9AB0D4);
  HIDWORD(xmmword_149AAADB0) = HIDWORD(qword_14A9AB0FC);
  LODWORD(xmmword_149AAADB0) = v2 - HIDWORD(qword_14A9AB0FC) - DWORD2(xmmword_14A9AB0EC);
  DWORD2(xmmword_149AAADB0) = xmmword_14A9AB0EC;
  HIDWORD(qword_149AAADC0) = HIDWORD(xmmword_14A9AB0EC);
  HIDWORD(xmmword_149AAADC8) = HIDWORD(qword_14A9AB114);
  LODWORD(xmmword_149AAADC8) = v2 - DWORD2(xmmword_14A9AB104) - HIDWORD(qword_14A9AB114);
  DWORD2(xmmword_149AAADC8) = xmmword_14A9AB104;
  HIDWORD(qword_149AAADD8) = HIDWORD(xmmword_14A9AB104);
  HIDWORD(xmmword_149AAADE0) = HIDWORD(qword_14A9AB12C);
  LODWORD(xmmword_149AAADE0) = v2 - DWORD2(xmmword_14A9AB11C) - HIDWORD(qword_14A9AB12C);
  DWORD2(xmmword_149AAADE0) = xmmword_14A9AB11C;
  HIDWORD(qword_149AAADF0) = HIDWORD(xmmword_14A9AB11C);
  HIDWORD(xmmword_149AAADF8) = HIDWORD(qword_14A9AB144);
  LODWORD(xmmword_149AAADF8) = v2 - DWORD2(xmmword_14A9AB134) - HIDWORD(qword_14A9AB144);
  DWORD2(xmmword_149AAADF8) = xmmword_14A9AB134;
  HIDWORD(qword_149AAAE08) = HIDWORD(xmmword_14A9AB134);
  dword_148BAAC7C = v3;
  return HIDWORD(xmmword_14A9AB134);
}

