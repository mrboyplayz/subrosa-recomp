/* Address: 0x140078610 | Name: ui_load_base_assets_candidate | Size: 2858 bytes */
__int64 __fastcall ui_load_base_assets_candidate(unsigned int a1, const char *a2, int a3)
{
  __int64 v3; // rbx
  char v4; // r14
  __int64 v6; // r12
  __int64 v7; // rdi
  void *v8; // rcx
  int v9; // esi
  int v10; // ecx
  int i; // r8d
  int v12; // r15d
  __int64 v13; // r14
  __int64 v14; // rax
  int v15; // r13d
  FILE *v16; // rbx
  int v17; // eax
  float v18; // xmm6_4
  int v19; // ebx
  int j; // esi
  __int64 v21; // rax
  int k; // ebp
  int v23; // ebx
  int m; // esi
  __int64 v25; // rax
  float v26; // xmm0_4
  unsigned __int64 v27; // rdi
  float *v28; // r9
  int *v29; // r8
  float *v30; // rdx
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm3_4
  float v36; // xmm2_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm3_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm3_4
  float v44; // xmm2_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm3_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm3_4
  float v52; // xmm2_4
  float v53; // xmm0_4
  float v54; // xmm1_4
  float v55; // xmm3_4
  float v56; // xmm2_4
  float v57; // xmm0_4
  float v58; // xmm1_4
  float v59; // xmm3_4
  float v60; // xmm2_4
  float v61; // xmm0_4
  float v62; // xmm1_4
  int v63; // eax
  __int64 v64; // rdx
  _DWORD *v65; // rcx
  __int64 v67; // [rsp+0h] [rbp-4C8h] BYREF
  int v68; // [rsp+50h] [rbp-478h]
  unsigned __int64 v69; // [rsp+58h] [rbp-470h]
  _BYTE v70[512]; // [rsp+60h] [rbp-468h] BYREF
  _BYTE v71[512]; // [rsp+260h] [rbp-268h] BYREF
  __int64 v72; // [rsp+460h] [rbp-68h]

  v3 = (int)a1;
  v4 = a3;
  v68 = a3;
  if ( a1 <= 0x3F )
  {
    sub_140158AB0(v71, "font/%s.png", a2);
    if ( (unsigned int)sub_140079840(v71) )
    {
      v6 = v3;
      v7 = 14368 * v3;
      v8 = *((void **)&MEMORY[0x1519A4060] + 1796 * v3 + 3);
      *(_DWORD *)((char *)&MEMORY[0x1519A4060] + v7 + 12) = MEMORY[0x1B0037420];
      *(_DWORD *)((char *)&MEMORY[0x1519A4060] + v7 + 16) = MEMORY[0x1B0037424];
      v69 = 14368 * v3;
      free(v8);
      v9 = 0;
      *(_QWORD *)((char *)&MEMORY[0x1519A4060] + v7 + 24) = j__malloc_base(
                                                              4
                                                            * *(_DWORD *)((char *)&MEMORY[0x1519A4060] + v7 + 12)
                                                            * *(_DWORD *)((char *)&MEMORY[0x1519A4060] + v7 + 16));
      if ( *((int *)&MEMORY[0x1519A4060] + 3592 * v3 + 4) > 0 )
      {
        do
        {
          v10 = *(_DWORD *)((char *)&MEMORY[0x1519A4060] + v7 + 12);
          for ( i = 0; i < v10; ++i )
          {
            if ( v9 >= *(int *)((char *)&MEMORY[0x1519A4060] + v7 + 16) >> 4 || i >= v10 >> 4 )
              *(_DWORD *)(*(_QWORD *)((char *)&MEMORY[0x1519A4060] + v7 + 24) + 4LL * (i + v9 * v10)) = MEMORY[0x1B0037428][i + v9 * v10];
            else
              *(_DWORD *)(*(_QWORD *)((char *)&MEMORY[0x1519A4060] + v7 + 24) + 4LL * (i + v9 * v10)) = -1;
            v10 = *(_DWORD *)((char *)&MEMORY[0x1519A4060] + v7 + 12);
          }
          ++v9;
        }
        while ( v9 < *(_DWORD *)((char *)&MEMORY[0x1519A4060] + v7 + 16) );
      }
      unk_140404060(1, (char *)&MEMORY[0x1519A4060] + v7 + 4);
      unk_140404050(3553, *(unsigned int *)((char *)&MEMORY[0x1519A4060] + v7 + 4));
      MEMORY[0x144980D00](3553, 10242, 33071);
      MEMORY[0x144980D00](3553, 10243, 33071);
      MEMORY[0x144980D00](3553, 10240, 9729);
      MEMORY[0x144980D00](3553, 10241, 9729);
      v12 = v4 & 1;
      if ( (v4 & 1) != 0 )
      {
        MEMORY[0x144980D00](3553, 10240, 9728);
        MEMORY[0x144980D00](3553, 10241, 9728);
      }
      v13 = 0;
      MEMORY[0x144980D18](
        3553,
        0,
        6408,
        *(unsigned int *)((char *)&MEMORY[0x1519A4060] + v7 + 12),
        *(_DWORD *)((char *)&MEMORY[0x1519A4060] + v7 + 16),
        0,
        6408,
        5121,
        *(_QWORD *)((char *)&MEMORY[0x1519A4060] + v7 + 24));
      sub_140158AB0(v71, "font/%s.csv", a2);
      MEMORY[0x15F1D91E4] = 0;
      v14 = MEMORY[0x14020B8D8](v71, "rb");
      v15 = 2;
      v16 = (FILE *)v14;
      if ( v14 )
      {
        MEMORY[0x14020C4A8](v14, 0, 2);
        MEMORY[0x15F1D91E4] = ftell(v16);
        MEMORY[0x14020C4A8](v16, 0, 0);
        v17 = MEMORY[0x15F1D91E4];
        if ( MEMORY[0x15F1D91E4] > 1048574 )
          v17 = 1048574;
        MEMORY[0x15F1D91E4] = v17;
        fread(MEMORY[0x15F1D91E8], v17, 1, v16);
        MEMORY[0x15F1D91E8][MEMORY[0x15F1D91E4]] = 0;
        sub_14020B9E8(v16);
      }
      v18 = 64.0;
      MEMORY[0x15F1D91E0] = 0;
      sub_140158AB0(v70, "Cell Height,", (unsigned int)v9);
      v19 = MEMORY[0x15F1D91E0];
      for ( j = MEMORY[0x15F1D91E4]; v19 < j; MEMORY[0x15F1D91E0] = ++v19 )
      {
        if ( (unsigned int)sub_14006C870(v70) )
          break;
      }
      v21 = -1;
      do
        ++v21;
      while ( v70[v21] );
      MEMORY[0x15F1D91E0] = v21 + v19;
      if ( (int)v21 + v19 < j )
        v18 = (float)(int)sub_14006EDD0(v70);
      for ( k = 0; k < 256; ++k )
      {
        sub_140158AB0(v70, "Char %d Base Width,", k);
        v23 = MEMORY[0x15F1D91E0];
        for ( m = MEMORY[0x15F1D91E4]; v23 < m; MEMORY[0x15F1D91E0] = ++v23 )
        {
          if ( (unsigned int)sub_14006C870(v70) )
            break;
        }
        v25 = -1;
        do
          ++v25;
        while ( v70[v25] );
        MEMORY[0x15F1D91E0] = v25 + v23;
        if ( (int)v25 + v23 < m )
        {
          v26 = (float)(int)sub_14006EDD0(v70);
          if ( !v12 )
            v26 = v26 - 0.5;
          *((float *)&MEMORY[0x1519A4060] + 3592 * v6 + v13 + 8) = v26 / v18;
        }
        ++v13;
      }
      v27 = v69;
      v28 = (float *)((char *)&MEMORY[0x1519A4084] + v69);
      v29 = &MEMORY[0x1519A6884][v69 / 4];
      v30 = (float *)((char *)&MEMORY[0x1519A4484] + v69);
      do
      {
        v31 = (float)(15.0 - (float)((v15 - 2) >> 4)) * 0.0625;
        v32 = (float)(((_BYTE)v15 - 2) & 0xF) * 0.0625;
        *(v30 - 1) = v32;
        *v30 = v31 + 0.0625;
        v33 = *(v28 - 1);
        v30[2] = v31 + 0.0625;
        v30[1] = (float)(v33 * 0.0625) + v32;
        v34 = *(v28 - 1);
        v30[4] = v31;
        v30[5] = v32;
        v30[6] = v31;
        v30[3] = (float)(v34 * 0.0625) + v32;
        *(v29 - 1) = *((_DWORD *)v28 - 1);
        *(_QWORD *)v29 = 1065353216;
        v29[2] = 0;
        v35 = (float)(((_BYTE)v15 - 1) & 0xF) * 0.0625;
        v30[7] = v35;
        v36 = (float)(15.0 - (float)((v15 - 1) >> 4)) * 0.0625;
        v30[8] = v36 + 0.0625;
        v37 = *v28;
        v30[10] = v36 + 0.0625;
        v30[9] = (float)(v37 * 0.0625) + v35;
        v38 = *v28;
        v30[12] = v36;
        v30[13] = v35;
        v30[14] = v36;
        v30[11] = (float)(v38 * 0.0625) + v35;
        v29[3] = *(_DWORD *)v28;
        *((_QWORD *)v29 + 2) = 1065353216;
        v29[6] = 0;
        v39 = (float)(v15 & 0xF) * 0.0625;
        v30[15] = v39;
        v40 = (float)(15.0 - (float)(v15 >> 4)) * 0.0625;
        v30[16] = v40 + 0.0625;
        v41 = v28[1];
        v30[18] = v40 + 0.0625;
        v30[17] = (float)(v41 * 0.0625) + v39;
        v42 = v28[1];
        v30[20] = v40;
        v30[21] = v39;
        v30[22] = v40;
        v30[19] = (float)(v42 * 0.0625) + v39;
        v29[7] = *((_DWORD *)v28 + 1);
        *((_QWORD *)v29 + 4) = 1065353216;
        v29[10] = 0;
        v43 = (float)(((_BYTE)v15 + 1) & 0xF) * 0.0625;
        v30[23] = v43;
        v44 = (float)(15.0 - (float)((v15 + 1) >> 4)) * 0.0625;
        v30[24] = v44 + 0.0625;
        v45 = v28[2];
        v30[26] = v44 + 0.0625;
        v30[25] = (float)(v45 * 0.0625) + v43;
        v46 = v28[2];
        v30[28] = v44;
        v30[29] = v43;
        v30[30] = v44;
        v30[27] = (float)(v46 * 0.0625) + v43;
        v29[11] = *((_DWORD *)v28 + 2);
        *((_QWORD *)v29 + 6) = 1065353216;
        v29[14] = 0;
        v47 = (float)(((_BYTE)v15 + 2) & 0xF) * 0.0625;
        v30[31] = v47;
        v48 = (float)(15.0 - (float)((v15 + 2) >> 4)) * 0.0625;
        v30[32] = v48 + 0.0625;
        v49 = v28[3];
        v30[34] = v48 + 0.0625;
        v30[33] = (float)(v49 * 0.0625) + v47;
        v50 = v28[3];
        v30[36] = v48;
        v30[37] = v47;
        v30[38] = v48;
        v30[35] = (float)(v50 * 0.0625) + v47;
        v29[15] = *((_DWORD *)v28 + 3);
        *((_QWORD *)v29 + 8) = 1065353216;
        v29[18] = 0;
        v51 = (float)(((_BYTE)v15 + 3) & 0xF) * 0.0625;
        v30[39] = v51;
        v52 = (float)(15.0 - (float)((v15 + 3) >> 4)) * 0.0625;
        v30[40] = v52 + 0.0625;
        v53 = v28[4];
        v30[42] = v52 + 0.0625;
        v30[41] = (float)(v53 * 0.0625) + v51;
        v54 = v28[4];
        v30[44] = v52;
        v30[45] = v51;
        v30[46] = v52;
        v30[43] = (float)(v54 * 0.0625) + v51;
        v29[19] = *((_DWORD *)v28 + 4);
        *((_QWORD *)v29 + 10) = 1065353216;
        v29[22] = 0;
        v55 = (float)(((_BYTE)v15 + 4) & 0xF) * 0.0625;
        v30[47] = v55;
        v56 = (float)(15.0 - (float)((v15 + 4) >> 4)) * 0.0625;
        v30[48] = v56 + 0.0625;
        v57 = v28[5];
        v30[50] = v56 + 0.0625;
        v30[49] = (float)(v57 * 0.0625) + v55;
        v58 = v28[5];
        v30[52] = v56;
        v30[53] = v55;
        v30[54] = v56;
        v30[51] = (float)(v58 * 0.0625) + v55;
        v29[23] = *((_DWORD *)v28 + 5);
        *((_QWORD *)v29 + 12) = 1065353216;
        v29[26] = 0;
        v59 = (float)(((_BYTE)v15 + 5) & 0xF) * 0.0625;
        v30[55] = v59;
        v60 = (float)(15.0 - (float)((v15 + 5) >> 4)) * 0.0625;
        v30[56] = v60 + 0.0625;
        v61 = (float)(v28[6] * 0.0625) + v59;
        v30[58] = v60 + 0.0625;
        v15 += 8;
        v30[57] = v61;
        v62 = v28[6];
        v30[60] = v60;
        v30[61] = v59;
        v30[62] = v60;
        v30[59] = (float)(v62 * 0.0625) + v59;
        v30 += 64;
        v63 = *((_DWORD *)v28 + 6);
        v28 += 8;
        v29[27] = v63;
        *((_QWORD *)v29 + 14) = 1065353216;
        v29[30] = 0;
        v29 += 32;
      }
      while ( v15 - 2 < 256 );
      if ( (v68 & 2) != 0 )
      {
        v64 = 13;
        v65 = (_DWORD *)((char *)&MEMORY[0x1519A50A0] + v27);
        do
        {
          *v65 = *(v65 - 256);
          v65[1] = *(v65 - 255);
          v65[2] = *(v65 - 254);
          v65[3] = *(v65 - 253);
          v65[4] = *(v65 - 252);
          v65[5] = *(v65 - 251);
          v65[6] = *(v65 - 250);
          v65[7] = *(v65 - 249);
          v65[8] = *(v65 - 248);
          v65[9] = *(v65 - 247);
          v65[10] = *(v65 - 246);
          v65[11] = *(v65 - 245);
          v65[12] = *(v65 - 244);
          v65[13] = *(v65 - 243);
          v65[14] = *(v65 - 242);
          v65[15] = *(v65 - 241);
          v65 += 16;
          --v64;
        }
        while ( v64 );
      }
      unk_140404060(1, (char *)&MEMORY[0x1519A4060] + v27 + 8);
      if ( (unsigned int)sub_140079840("texture/mouse01.png") )
      {
        unk_140404050(3553, *(unsigned int *)((char *)&MEMORY[0x1519A4060] + v27 + 8));
        MEMORY[0x144980D00](3553, 10242, 33071);
        MEMORY[0x144980D00](3553, 10243, 33071);
        MEMORY[0x144980D00](3553, 10240, 9729);
        MEMORY[0x144980D00](3553, 10241, 9729);
        MEMORY[0x144980D18](
          3553,
          0,
          6408,
          (unsigned int)MEMORY[0x1B0037420],
          MEMORY[0x1B0037424],
          0,
          6408,
          5121,
          MEMORY[0x1B0037428]);
      }
      *(_DWORD *)((char *)&MEMORY[0x1519A4060] + v27) = 1;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v67 ^ v72);
}

