/* Address: 0x140103270 | Name: sub_140103270 | Size: 2775 bytes */
double __fastcall sub_140103270(int a1, __int64 a2)
{
  double result; // xmm0_8
  int v3; // r15d
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // ebx
  int v7; // esi
  int v8; // r12d
  unsigned int *v9; // rbp
  __int64 v10; // r13
  signed int v11; // esi
  int v12; // r8d
  int v13; // ebp
  unsigned int *v14; // rsi
  __int64 v15; // r14
  signed int i; // ebx
  unsigned __int64 v17; // rsi
  int v18; // eax
  float *v19; // rcx
  __int64 v20; // rdx
  float v21; // xmm0_4
  float v22; // xmm1_4
  int v23; // eax
  int v24; // eax
  unsigned int *v25; // r15
  unsigned int *v26; // r9
  unsigned int *v27; // r10
  unsigned int *v28; // rcx
  unsigned int *v29; // rdx
  __int64 v30; // r11
  unsigned int v31; // eax
  unsigned int v32; // eax
  int v33; // r12d
  __int64 v34; // rdi
  __int64 v35; // rbp
  __int64 v36; // rbx
  unsigned __int64 v37; // r11
  __int64 v38; // r9
  __int64 v39; // r14
  unsigned __int64 v40; // rcx
  unsigned int *v41; // r8
  unsigned __int64 v42; // r10
  char *v43; // rdx
  unsigned int v44; // eax
  char *v45; // rcx
  char *v46; // rcx
  char *v47; // rcx
  char *v48; // rcx
  __int64 v49; // r9
  unsigned int *v50; // rdx
  char *v51; // rcx
  unsigned int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  int v61; // ebx
  int v62; // ebp
  int v63; // r8d
  int v64; // r15d
  unsigned int *v65; // r14
  signed int j; // ebp
  int v67; // eax
  unsigned int *v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // r9
  unsigned int *v71; // rdx
  unsigned int *v72; // r8
  unsigned int *v73; // rcx
  unsigned int v74; // eax
  __int64 v75; // [rsp+20h] [rbp-48h]
  __int64 Buffer; // [rsp+80h] [rbp+18h] BYREF
  __int64 v78; // [rsp+88h] [rbp+20h]

  v3 = a1;
  v4 = MEMORY[0x14020B8D8](a2, "rb");
  v75 = v4;
  v5 = v4;
  if ( v4 )
  {
    LODWORD(Buffer) = 2;
    fread(&Buffer, 4, 1, v4);
    if ( (_DWORD)Buffer == 2 )
    {
      fread(&dword_140404A6C[160507480], 4, 1, v5);
      fread(&dword_140404A6C[160507481], 4, 1, v5);
      v6 = 0;
      if ( (int)dword_140404A6C[160507481] > 0 )
      {
        v7 = 0;
        do
        {
          fread(&dword_140404A6C[v7 + 160507482], 4, 3, v5);
          fread(&dword_140404A6C[v6++ + 160556634], 4, 1, v5);
          v7 += 3;
        }
        while ( v6 < (int)dword_140404A6C[160507481] );
      }
      fread(&dword_140404A6C[160573018], 4, 1, v5);
      v8 = 0;
      if ( (int)dword_140404A6C[160573018] > 0 )
      {
        v9 = &dword_140404A6C[160573019];
        do
        {
          v10 = 56LL * v8;
          v78 = v10;
          fread(0x140000000LL + v10 + 646505432, 4, 1, v5);
          v11 = 0;
          if ( (int)*v9 > 0 )
          {
            do
            {
              fread(&dword_140404A6C[14 * v8 + 160573020 + v11], 4, 1, v5);
              fread(&dword_140404A6C[14 * v8 + 160573024 + 2 * v11++], 4, 2, v5);
            }
            while ( v11 < (int)*v9 );
            v10 = v78;
          }
          fread(0x140000000LL + v10 + 646505484, 4, 1, v5);
          ++v8;
          v9 += 14;
        }
        while ( v8 < (int)dword_140404A6C[160573018] );
        v3 = a1;
      }
    }
    LODWORD(Buffer) = 1;
    fread(&Buffer, 4, 1, v5);
    if ( (_DWORD)Buffer == 1 )
    {
      fread(&dword_140404A6C[160857235], 4, 1, v5);
      v12 = dword_140404A6C[160857235];
      v13 = 0;
      if ( (int)dword_140404A6C[160857235] > 0 )
      {
        v14 = &dword_140404A6C[160857236];
        do
        {
          v15 = 13LL * v13;
          fread(&dword_140404A6C[v15 + 160857236], 4, 1, v5);
          for ( i = 0; i < (int)*v14; ++i )
            fread(&dword_140404A6C[3 * i + 160857237 + v15], 4, 3, v5);
          v12 = dword_140404A6C[160857235];
          ++v13;
          v14 += 13;
        }
        while ( v13 < (int)dword_140404A6C[160857235] );
        v3 = a1;
      }
    }
    else
    {
      v12 = dword_140404A6C[160857235];
    }
    v17 = 180288LL * v3;
    v78 = v3;
    v18 = dword_140404A6C[160507481];
    dword_140404A6C[v17 / 4 + 335170684] = dword_140404A6C[160507481];
    if ( v18 > 0 )
    {
      v19 = (float *)&dword_140404A6C[v17 / 4 + 335170687];
      v20 = (unsigned int)v18;
      do
      {
        v21 = *(float *)((char *)v19
                       + (char *)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507483]
                       - (char *)&dword_140404A6C[335170687]);
        v22 = *(float *)((char *)v19
                       + (char *)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507484]
                       - (char *)&dword_140404A6C[335170687]);
        v23 = *(_DWORD *)((char *)v19
                        + (char *)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507482]
                        - (char *)&dword_140404A6C[335170687]);
        *(v19 - 1) = v21;
        *v19 = v22;
        *((_DWORD *)v19 - 2) = v23;
        if ( v3 != 8 )
        {
          *(v19 - 1) = v21 + 0.625;
          *v19 = v22 + 0.625;
        }
        v19 += 3;
        --v20;
      }
      while ( v20 );
    }
    v24 = dword_140404A6C[160573018];
    v25 = &dword_140404A6C[160573021];
    dword_140404A6C[v17 / 4 + 335173757] = dword_140404A6C[160573018];
    if ( v24 > 0 )
    {
      v26 = &dword_140404A6C[160573019];
      v27 = &dword_140404A6C[v17 / 4 + 335173759];
      v28 = &dword_140404A6C[160573021];
      v29 = &dword_140404A6C[v17 / 4 + 335173761];
      v30 = (unsigned int)v24;
      do
      {
        v29 += 26;
        *v27 = *v26;
        v26 += 14;
        v27 += 26;
        *(v29 - 27) = *(v28 - 1);
        v31 = *v28;
        v28 += 14;
        *(v29 - 26) = v31;
        *(v29 - 25) = *(v28 - 13);
        *(v29 - 24) = *(v28 - 12);
        --v30;
      }
      while ( v30 );
    }
    v32 = 0;
    dword_140404A6C[v17 / 4 + 335200382] = 0;
    if ( v12 > 0 )
    {
      v33 = a1;
      v34 = v78;
      v35 = (unsigned int)v12;
      v36 = 0;
      Buffer = (unsigned int)v12;
      v37 = v17 - (_QWORD)&dword_140404A6C[160857239];
      do
      {
        v38 = (int)dword_140404A6C[v36 + 160857236];
        v39 = 0;
        dword_140404A6C[13 * (int)v32 + 335200383 + v17 / 4] = 4;
        v40 = v17 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
        *(unsigned int *)((char *)&dword_140404A6C[335200393] + v40) = dword_140404A6C[v36 + 160857243];
        *(unsigned int *)((char *)&dword_140404A6C[335200394] + v40) = dword_140404A6C[v36 + 160857244];
        *(unsigned int *)((char *)&dword_140404A6C[335200395] + v40) = dword_140404A6C[v36 + 160857245];
        if ( v38 >= 4 )
        {
          v41 = &dword_140404A6C[v36 + 160857239];
          v42 = ((unsigned __int64)(v38 - 4) >> 2) + 1;
          v39 = 4 * v42;
          do
          {
            v43 = (char *)v41 + v37;
            v44 = *(v41 - 2);
            v41 += 12;
            v45 = &v43[52 * dword_140404A6C[v17 / 4 + 335200382]];
            *(unsigned int *)((char *)&dword_140404A6C[335200384] + (_QWORD)v45) = v44;
            *(unsigned int *)((char *)&dword_140404A6C[335200385] + (_QWORD)v45) = *(v41 - 13);
            *(unsigned int *)((char *)&dword_140404A6C[335200386] + (_QWORD)v45) = *(v41 - 12);
            v46 = &v43[52 * dword_140404A6C[v17 / 4 + 335200382]];
            *(unsigned int *)((char *)&dword_140404A6C[335200387] + (_QWORD)v46) = *(v41 - 11);
            *(unsigned int *)((char *)&dword_140404A6C[335200388] + (_QWORD)v46) = *(v41 - 10);
            *(unsigned int *)((char *)&dword_140404A6C[335200389] + (_QWORD)v46) = *(v41 - 9);
            v47 = &v43[52 * dword_140404A6C[v17 / 4 + 335200382]];
            *(unsigned int *)((char *)&dword_140404A6C[335200390] + (_QWORD)v47) = *(v41 - 8);
            *(unsigned int *)((char *)&dword_140404A6C[335200391] + (_QWORD)v47) = *(v41 - 7);
            *(unsigned int *)((char *)&dword_140404A6C[335200392] + (_QWORD)v47) = *(v41 - 6);
            v48 = &v43[52 * dword_140404A6C[v17 / 4 + 335200382]];
            *(unsigned int *)((char *)&dword_140404A6C[335200393] + (_QWORD)v48) = *(v41 - 5);
            *(unsigned int *)((char *)&dword_140404A6C[335200394] + (_QWORD)v48) = *(v41 - 4);
            *(unsigned int *)((char *)&dword_140404A6C[335200395] + (_QWORD)v48) = *(v41 - 3);
            --v42;
          }
          while ( v42 );
          v33 = a1;
          v35 = Buffer;
          v34 = a1;
        }
        if ( v39 < v38 )
        {
          v49 = v38 - v39;
          v50 = &dword_140404A6C[3 * v39 + 160857239 + v36];
          do
          {
            v51 = (char *)&v50[13 * dword_140404A6C[v17 / 4 + 335200382]] + v37;
            *(unsigned int *)((char *)&dword_140404A6C[335200384] + (_QWORD)v51) = *(v50 - 2);
            *(unsigned int *)((char *)&dword_140404A6C[335200385] + (_QWORD)v51) = *(v50 - 1);
            v52 = *v50;
            v50 += 3;
            *(unsigned int *)((char *)&dword_140404A6C[335200386] + (_QWORD)v51) = v52;
            --v49;
          }
          while ( v49 );
        }
        if ( v33 != 8 )
        {
          v53 = 180288 * v34 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200385] + v53) = *(float *)((char *)&dword_140404A6C[335200385] + v53)
                                                                + 0.625;
          v54 = 180288 * v34 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200386] + v54) = *(float *)((char *)&dword_140404A6C[335200386] + v54)
                                                                + 0.625;
          v55 = 180288 * v34 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200388] + v55) = *(float *)((char *)&dword_140404A6C[335200388] + v55)
                                                                + 0.625;
          v56 = 180288 * v34 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200389] + v56) = *(float *)((char *)&dword_140404A6C[335200389] + v56)
                                                                + 0.625;
          v57 = 180288 * v34 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200391] + v57) = *(float *)((char *)&dword_140404A6C[335200391] + v57)
                                                                + 0.625;
          v58 = 180288 * v34 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200392] + v58) = *(float *)((char *)&dword_140404A6C[335200392] + v58)
                                                                + 0.625;
          v59 = 180288 * v34 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200394] + v59) = *(float *)((char *)&dword_140404A6C[335200394] + v59)
                                                                + 0.625;
          v60 = 180288 * v34 + 52LL * (int)dword_140404A6C[v17 / 4 + 335200382];
          *(float *)((char *)&dword_140404A6C[335200395] + v60) = *(float *)((char *)&dword_140404A6C[335200395] + v60)
                                                                + 0.625;
        }
        v36 += 13;
        v32 = dword_140404A6C[v17 / 4 + 335200382] + 1;
        v37 -= 52LL;
        --v35;
        dword_140404A6C[v17 / 4 + 335200382] = v32;
        Buffer = v35;
      }
      while ( v35 );
      v5 = v75;
      v25 = &dword_140404A6C[160573021];
    }
    if ( a1 == 8 )
    {
      LODWORD(Buffer) = 2;
      fread(&Buffer, 4, 1, v5);
      if ( (_DWORD)Buffer == 2 )
      {
        fread(&dword_140404A6C[160507480], 4, 1, v5);
        fread(&dword_140404A6C[160507481], 4, 1, v5);
        v61 = 0;
        if ( (int)dword_140404A6C[160507481] > 0 )
        {
          v62 = 0;
          do
          {
            fread(&dword_140404A6C[v62 + 160507482], 4, 3, v5);
            fread(&dword_140404A6C[v61++ + 160556634], 4, 1, v5);
            v62 += 3;
          }
          while ( v61 < (int)dword_140404A6C[160507481] );
        }
        fread(&dword_140404A6C[160573018], 4, 1, v5);
        v63 = dword_140404A6C[160573018];
        LODWORD(v78) = 0;
        if ( (int)dword_140404A6C[160573018] > 0 )
        {
          v64 = v78;
          v65 = &dword_140404A6C[160573019];
          do
          {
            v78 = 56LL * v64;
            fread((char *)&dword_140404A6C[160573019] + v78, 4, 1, v5);
            for ( j = 0; j < (int)*v65; ++j )
            {
              fread(&dword_140404A6C[14 * v64 + 160573020 + j], 4, 1, v5);
              fread(&dword_140404A6C[14 * v64 + 160573024 + 2 * j], 4, 2, v5);
            }
            fread(0x140000000LL + v78 + 646505484, 4, 1, v5);
            v63 = dword_140404A6C[160573018];
            ++v64;
            v65 += 14;
          }
          while ( v64 < (int)dword_140404A6C[160573018] );
          v25 = &dword_140404A6C[160573021];
        }
      }
      else
      {
        v63 = dword_140404A6C[160573018];
      }
      v67 = dword_140404A6C[160507481];
      dword_140404A6C[v17 / 4 + 335161466] = dword_140404A6C[160507481];
      if ( v67 > 0 )
      {
        v68 = &dword_140404A6C[v17 / 4 + 335161469];
        v69 = (unsigned int)v67;
        do
        {
          *(v68 - 2) = *(unsigned int *)((char *)v68
                                       + (char *)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507482]
                                       - (char *)&dword_140404A6C[335161469]);
          *(v68 - 1) = *(unsigned int *)((char *)v68
                                       + (char *)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507483]
                                       - (char *)&dword_140404A6C[335161469]);
          *v68 = *(unsigned int *)((char *)v68
                                 + (char *)&dword_140404A6C[v17 / 0xFFFFFFFFFFFFFFFCuLL + 160507484]
                                 - (char *)&dword_140404A6C[335161469]);
          v68 += 3;
          --v69;
        }
        while ( v69 );
      }
      dword_140404A6C[v17 / 4 + 335164539] = v63;
      if ( v63 > 0 )
      {
        v70 = (unsigned int)v63;
        v71 = &dword_140404A6C[335525117];
        v72 = &dword_140404A6C[160573019];
        v73 = &dword_140404A6C[335525119];
        do
        {
          v73 += 6;
          *v71 = *v72;
          v71 += 6;
          v72 += 14;
          *(v73 - 7) = *(v25 - 1);
          v74 = *v25;
          v25 += 14;
          *(v73 - 6) = v74;
          *(v73 - 5) = *(v25 - 13);
          *(v73 - 4) = *(v25 - 12);
          --v70;
        }
        while ( v70 );
      }
    }
    return sub_14020B9E8(v5);
  }
  return result;
}

