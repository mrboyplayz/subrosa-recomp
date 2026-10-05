/* Address: 0x14009e250 | Name: sub_14009E250 | Size: 2776 bytes */
int __fastcall sub_14009E250(int a1, const char *a2)
{
  int v2; // r15d
  FILE *v3; // rax
  FILE *v4; // rdi
  int v5; // ebx
  int v6; // esi
  int v7; // r12d
  int *v8; // rbp
  __int64 v9; // r13
  int v10; // esi
  int v11; // r8d
  int v12; // ebp
  int *v13; // rsi
  __int64 v14; // r14
  int i; // ebx
  __int64 v16; // rsi
  int v17; // eax
  float *v18; // rcx
  __int64 v19; // rdx
  float v20; // xmm0_4
  float v21; // xmm1_4
  int v22; // eax
  int v23; // eax
  int *v24; // r15
  _DWORD *v25; // r9
  _DWORD *v26; // r10
  int *v27; // rcx
  char *v28; // rdx
  __int64 v29; // r11
  int v30; // eax
  int v31; // eax
  int v32; // r12d
  __int64 v33; // rdi
  __int64 v34; // rbp
  __int64 v35; // rbx
  __int64 v36; // r11
  __int64 v37; // r9
  __int64 v38; // r14
  __int64 v39; // rcx
  char *v40; // r8
  unsigned __int64 v41; // r10
  char *v42; // rdx
  int v43; // eax
  char *v44; // rcx
  char *v45; // rcx
  char *v46; // rcx
  char *v47; // rcx
  __int64 v48; // r9
  int *v49; // rdx
  char *v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // ebx
  int v61; // ebp
  int v62; // r8d
  int v63; // r15d
  _DWORD *v64; // r14
  int j; // ebp
  int v66; // eax
  _DWORD *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r9
  _DWORD *v70; // rdx
  _DWORD *v71; // r8
  _DWORD *v72; // rcx
  int v73; // eax
  FILE *v75; // [rsp+20h] [rbp-48h]
  __int64 Buffer; // [rsp+80h] [rbp+18h] BYREF
  __int64 v78; // [rsp+88h] [rbp+20h]

  v2 = a1;
  v3 = fopen(a2, "rb");
  v75 = v3;
  v4 = v3;
  if ( v3 )
  {
    LODWORD(Buffer) = 2;
    fread(&Buffer, 4u, 1u, v3);
    if ( (_DWORD)Buffer == 2 )
    {
      fread(&unk_1749695EC, 4u, 1u, v4);
      fread(&dword_1749695F0, 4u, 1u, v4);
      v5 = 0;
      if ( dword_1749695F0 > 0 )
      {
        v6 = 0;
        do
        {
          fread((char *)&unk_1749695F4 + 4 * v6, 4u, 3u, v4);
          fread((char *)&unk_1749995F4 + 4 * v5++, 4u, 1u, v4);
          v6 += 3;
        }
        while ( v5 < dword_1749695F0 );
      }
      fread(&dword_1749A95F4, 4u, 1u, v4);
      v7 = 0;
      if ( dword_1749A95F4 > 0 )
      {
        v8 = (int *)&unk_1749A95F8;
        do
        {
          v9 = 56LL * v7;
          v78 = v9;
          fread((void *)(0x140000000LL + v9 + 882546168), 4u, 1u, v4);
          v10 = 0;
          if ( *v8 > 0 )
          {
            do
            {
              fread((char *)&unk_1749A95FC + 56 * v7 + 4 * v10, 4u, 1u, v4);
              fread((char *)&unk_1749A960C + 56 * v7 + 8 * v10++, 4u, 2u, v4);
            }
            while ( v10 < *v8 );
            v9 = v78;
          }
          fread((void *)(0x140000000LL + v9 + 882546220), 4u, 1u, v4);
          ++v7;
          v8 += 14;
        }
        while ( v7 < dword_1749A95F4 );
        v2 = a1;
      }
    }
    LODWORD(Buffer) = 1;
    fread(&Buffer, 4u, 1u, v4);
    if ( (_DWORD)Buffer == 1 )
    {
      fread(&dword_174ABEED8, 4u, 1u, v4);
      v11 = dword_174ABEED8;
      v12 = 0;
      if ( dword_174ABEED8 > 0 )
      {
        v13 = dword_174ABEEDC;
        do
        {
          v14 = 13LL * v12;
          fread(&dword_174ABEEDC[v14], 4u, 1u, v4);
          for ( i = 0; i < *v13; ++i )
            fread((char *)&unk_174ABEEE0 + 12 * i + v14 * 4, 4u, 3u, v4);
          v11 = dword_174ABEED8;
          ++v12;
          v13 += 13;
        }
        while ( v12 < dword_174ABEED8 );
        v2 = a1;
      }
    }
    else
    {
      v11 = dword_174ABEED8;
    }
    v16 = 45072LL * v2;
    v78 = v2;
    v17 = dword_1749695F0;
    dword_143DB3AFC[v16] = dword_1749695F0;
    if ( v17 > 0 )
    {
      v18 = (float *)((char *)&unk_143DB3B08 + v16 * 4);
      v19 = (unsigned int)v17;
      do
      {
        v20 = *(float *)((char *)v18 + (_UNKNOWN *)((char *)&unk_1749695F8 - v16 * 4) - &unk_143DB3B08);
        v21 = *(float *)((char *)v18 + (_UNKNOWN *)((char *)&unk_1749695FC - v16 * 4) - &unk_143DB3B08);
        v22 = *(_DWORD *)((char *)v18 + (_UNKNOWN *)((char *)&unk_1749695F4 - v16 * 4) - &unk_143DB3B08);
        *(v18 - 1) = v20;
        *v18 = v21;
        *((_DWORD *)v18 - 2) = v22;
        if ( v2 != 8 )
        {
          *(v18 - 1) = v20 + 0.625;
          *v18 = v21 + 0.625;
        }
        v18 += 3;
        --v19;
      }
      while ( v19 );
    }
    v23 = dword_1749A95F4;
    v24 = (int *)&unk_1749A9600;
    dword_143DB6B00[v16] = dword_1749A95F4;
    if ( v23 > 0 )
    {
      v25 = &unk_1749A95F8;
      v26 = (_DWORD *)((char *)&unk_143DB6B08 + v16 * 4);
      v27 = (int *)&unk_1749A9600;
      v28 = (char *)&unk_143DB6B10 + v16 * 4;
      v29 = (unsigned int)v23;
      do
      {
        v28 += 104;
        *v26 = *v25;
        v25 += 14;
        v26 += 26;
        *((_DWORD *)v28 - 27) = *(v27 - 1);
        v30 = *v27;
        v27 += 14;
        *((_DWORD *)v28 - 26) = v30;
        *((_DWORD *)v28 - 25) = *(v27 - 13);
        *((_DWORD *)v28 - 24) = *(v27 - 12);
        --v29;
      }
      while ( v29 );
    }
    v31 = 0;
    dword_143DD0B04[v16] = 0;
    if ( v11 > 0 )
    {
      v32 = a1;
      v33 = v78;
      v34 = (unsigned int)v11;
      v35 = 0;
      Buffer = (unsigned int)v11;
      v36 = v16 * 4 - (_QWORD)&unk_174ABEEE8;
      do
      {
        v37 = dword_174ABEEDC[v35];
        v38 = 0;
        *(_DWORD *)((char *)&unk_143DD0B08 + 52 * v31 + v16 * 4) = 4;
        v39 = v16 * 4 + 52LL * dword_143DD0B04[v16];
        *(_DWORD *)((char *)&unk_143DD0B30 + v39) = dword_174ABEEF8[v35];
        *(_DWORD *)((char *)&unk_143DD0B30 + v39 + 4) = dword_174ABEEFC[v35];
        *(_DWORD *)((char *)&unk_143DD0B30 + v39 + 8) = dword_174ABEF00[v35];
        if ( v37 >= 4 )
        {
          v40 = (char *)&unk_174ABEEE8 + v35 * 4;
          v41 = ((unsigned __int64)(v37 - 4) >> 2) + 1;
          v38 = 4 * v41;
          do
          {
            v42 = &v40[v36];
            v43 = *((_DWORD *)v40 - 2);
            v40 += 48;
            v44 = &v42[52 * dword_143DD0B04[v16]];
            *(_DWORD *)((char *)&unk_143DD0B0C + (_QWORD)v44) = v43;
            *(_DWORD *)((char *)&unk_143DD0B0C + (_QWORD)v44 + 4) = *((_DWORD *)v40 - 13);
            *(_DWORD *)((char *)&unk_143DD0B0C + (_QWORD)v44 + 8) = *((_DWORD *)v40 - 12);
            v45 = &v42[52 * dword_143DD0B04[v16]];
            *(_DWORD *)((char *)&unk_143DD0B18 + (_QWORD)v45) = *((_DWORD *)v40 - 11);
            *(_DWORD *)((char *)&unk_143DD0B18 + (_QWORD)v45 + 4) = *((_DWORD *)v40 - 10);
            *(_DWORD *)((char *)&unk_143DD0B18 + (_QWORD)v45 + 8) = *((_DWORD *)v40 - 9);
            v46 = &v42[52 * dword_143DD0B04[v16]];
            *(_DWORD *)((char *)&unk_143DD0B24 + (_QWORD)v46) = *((_DWORD *)v40 - 8);
            *(_DWORD *)((char *)&unk_143DD0B24 + (_QWORD)v46 + 4) = *((_DWORD *)v40 - 7);
            *(_DWORD *)((char *)&unk_143DD0B24 + (_QWORD)v46 + 8) = *((_DWORD *)v40 - 6);
            v47 = &v42[52 * dword_143DD0B04[v16]];
            *(_DWORD *)((char *)&unk_143DD0B30 + (_QWORD)v47) = *((_DWORD *)v40 - 5);
            *(_DWORD *)((char *)&unk_143DD0B30 + (_QWORD)v47 + 4) = *((_DWORD *)v40 - 4);
            *(_DWORD *)((char *)&unk_143DD0B30 + (_QWORD)v47 + 8) = *((_DWORD *)v40 - 3);
            --v41;
          }
          while ( v41 );
          v32 = a1;
          v34 = Buffer;
          v33 = a1;
        }
        if ( v38 < v37 )
        {
          v48 = v37 - v38;
          v49 = (int *)((char *)&unk_174ABEEE8 + 12 * v38 + v35 * 4);
          do
          {
            v50 = (char *)&v49[13 * dword_143DD0B04[v16]] + v36;
            *(_DWORD *)((char *)&unk_143DD0B0C + (_QWORD)v50) = *(v49 - 2);
            *(_DWORD *)((char *)&unk_143DD0B0C + (_QWORD)v50 + 4) = *(v49 - 1);
            v51 = *v49;
            v49 += 3;
            *(_DWORD *)((char *)&unk_143DD0B0C + (_QWORD)v50 + 8) = v51;
            --v48;
          }
          while ( v48 );
        }
        if ( v32 != 8 )
        {
          v52 = 180288 * v33 + 52LL * dword_143DD0B04[v16];
          *(float *)((char *)&unk_143DD0B10 + v52) = *(float *)((char *)&unk_143DD0B10 + v52) + 0.625;
          v53 = 180288 * v33 + 52LL * dword_143DD0B04[v16];
          *(float *)((char *)&unk_143DD0B14 + v53) = *(float *)((char *)&unk_143DD0B14 + v53) + 0.625;
          v54 = 180288 * v33 + 52LL * dword_143DD0B04[v16];
          *(float *)((char *)&unk_143DD0B1C + v54) = *(float *)((char *)&unk_143DD0B1C + v54) + 0.625;
          v55 = 180288 * v33 + 52LL * dword_143DD0B04[v16];
          *(float *)((char *)&unk_143DD0B20 + v55) = *(float *)((char *)&unk_143DD0B20 + v55) + 0.625;
          v56 = 180288 * v33 + 52LL * dword_143DD0B04[v16];
          *(float *)((char *)&unk_143DD0B28 + v56) = *(float *)((char *)&unk_143DD0B28 + v56) + 0.625;
          v57 = 180288 * v33 + 52LL * dword_143DD0B04[v16];
          *(float *)((char *)&unk_143DD0B2C + v57) = *(float *)((char *)&unk_143DD0B2C + v57) + 0.625;
          v58 = 180288 * v33 + 52LL * dword_143DD0B04[v16];
          *(float *)((char *)&unk_143DD0B34 + v58) = *(float *)((char *)&unk_143DD0B34 + v58) + 0.625;
          v59 = 180288 * v33 + 52LL * dword_143DD0B04[v16];
          *(float *)((char *)&unk_143DD0B38 + v59) = *(float *)((char *)&unk_143DD0B38 + v59) + 0.625;
        }
        v35 += 13;
        v31 = dword_143DD0B04[v16] + 1;
        v36 -= 52;
        --v34;
        dword_143DD0B04[v16] = v31;
        Buffer = v34;
      }
      while ( v34 );
      v4 = v75;
      v24 = (int *)&unk_1749A9600;
    }
    if ( a1 == 8 )
    {
      LODWORD(Buffer) = 2;
      fread(&Buffer, 4u, 1u, v4);
      if ( (_DWORD)Buffer == 2 )
      {
        fread(&unk_1749695EC, 4u, 1u, v4);
        fread(&dword_1749695F0, 4u, 1u, v4);
        v60 = 0;
        if ( dword_1749695F0 > 0 )
        {
          v61 = 0;
          do
          {
            fread((char *)&unk_1749695F4 + 4 * v61, 4u, 3u, v4);
            fread((char *)&unk_1749995F4 + 4 * v60++, 4u, 1u, v4);
            v61 += 3;
          }
          while ( v60 < dword_1749695F0 );
        }
        fread(&dword_1749A95F4, 4u, 1u, v4);
        v62 = dword_1749A95F4;
        LODWORD(v78) = 0;
        if ( dword_1749A95F4 > 0 )
        {
          v63 = v78;
          v64 = &unk_1749A95F8;
          do
          {
            v78 = 56LL * v63;
            fread((char *)&unk_1749A95F8 + v78, 4u, 1u, v4);
            for ( j = 0; j < *v64; ++j )
            {
              fread((char *)&unk_1749A95FC + 56 * v63 + 4 * j, 4u, 1u, v4);
              fread((char *)&unk_1749A960C + 56 * v63 + 8 * j, 4u, 2u, v4);
            }
            fread((void *)(0x140000000LL + v78 + 882546220), 4u, 1u, v4);
            v62 = dword_1749A95F4;
            ++v63;
            v64 += 14;
          }
          while ( v63 < dword_1749A95F4 );
          v24 = (int *)&unk_1749A9600;
        }
      }
      else
      {
        v62 = dword_1749A95F4;
      }
      v66 = dword_1749695F0;
      *(_DWORD *)((char *)&unk_143DAAAF4 + v16 * 4) = dword_1749695F0;
      if ( v66 > 0 )
      {
        v67 = (_DWORD *)((char *)&unk_143DAAB00 + v16 * 4);
        v68 = (unsigned int)v66;
        do
        {
          *(v67 - 2) = *(_DWORD *)((char *)v67 + (_UNKNOWN *)((char *)&unk_1749695F4 - v16 * 4) - &unk_143DAAB00);
          *(v67 - 1) = *(_DWORD *)((char *)v67 + (_UNKNOWN *)((char *)&unk_1749695F8 - v16 * 4) - &unk_143DAAB00);
          *v67 = *(_DWORD *)((char *)v67 + (_UNKNOWN *)((char *)&unk_1749695FC - v16 * 4) - &unk_143DAAB00);
          v67 += 3;
          --v68;
        }
        while ( v68 );
      }
      *(_DWORD *)((char *)&unk_143DADAF8 + v16 * 4) = v62;
      if ( v62 > 0 )
      {
        v69 = (unsigned int)v62;
        v70 = &unk_143F0DD00;
        v71 = &unk_1749A95F8;
        v72 = &unk_143F0DD08;
        do
        {
          v72 += 6;
          *v70 = *v71;
          v70 += 6;
          v71 += 14;
          *(v72 - 7) = *(v24 - 1);
          v73 = *v24;
          v24 += 14;
          *(v72 - 6) = v73;
          *(v72 - 5) = *(v24 - 13);
          *(v72 - 4) = *(v24 - 12);
          --v69;
        }
        while ( v69 );
      }
    }
    LODWORD(v3) = fclose(v4);
  }
  return (int)v3;
}

