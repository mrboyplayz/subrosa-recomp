/* Address: 0x14009ed30 | Name: sub_14009ED30 | Size: 3008 bytes */
int __fastcall sub_14009ED30(int a1, const char *a2)
{
  __int64 v2; // rbx
  FILE *v3; // rax
  FILE *v4; // rdi
  int v5; // xmm0_4
  float v6; // xmm6_4
  int v7; // ebp
  float v8; // xmm7_4
  float v9; // xmm8_4
  int *v10; // r12
  int v11; // ebx
  int v12; // esi
  int v13; // r8d
  int v14; // r15d
  int *v15; // r14
  int v16; // esi
  __int64 v17; // rcx
  float *v18; // r15
  float v19; // xmm2_4
  float v20; // xmm3_4
  float *v21; // rax
  float v22; // xmm4_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  int *v25; // r14
  _DWORD *v26; // r9
  _DWORD *v27; // r10
  __int64 v28; // rdx
  __int64 v29; // r11
  int *v30; // rcx
  int v31; // eax
  int v32; // ebx
  int v33; // esi
  int v34; // r9d
  int v35; // r13d
  int v36; // esi
  __int64 v37; // rcx
  unsigned __int64 v38; // r12
  float v39; // xmm2_4
  float v40; // xmm3_4
  float v41; // xmm4_4
  float *v42; // rax
  float v43; // xmm1_4
  float v44; // xmm0_4
  __int64 v45; // r10
  _DWORD *v46; // r8
  __int64 v47; // rcx
  _DWORD *v48; // rdx
  int v49; // eax
  __int64 v50; // r14
  int v51; // xmm0_4
  int v52; // ebx
  int v53; // esi
  int v54; // r12d
  int *v55; // r14
  int v56; // esi
  bool v57; // cc
  int v58; // eax
  float v59; // xmm2_4
  int v60; // ecx
  float v61; // xmm1_4
  float v62; // xmm0_4
  float v63; // xmm0_4
  float v64; // xmm1_4
  float v65; // xmm2_4
  __int64 v66; // rax
  int *v67; // rbx
  unsigned __int64 v69; // [rsp+20h] [rbp-88h]
  __int64 v70; // [rsp+28h] [rbp-80h]
  __int64 v71; // [rsp+30h] [rbp-78h]
  __int64 v72; // [rsp+30h] [rbp-78h]
  __int64 v73; // [rsp+38h] [rbp-70h]
  int v74; // [rsp+C0h] [rbp+18h] BYREF
  int Buffer; // [rsp+C8h] [rbp+20h] BYREF

  v2 = a1;
  v3 = fopen(a2, "rb");
  v4 = v3;
  if ( v3 )
  {
    LODWORD(v3) = fread(&Buffer, 4u, 1u, v3);
    if ( Buffer == 2 )
    {
      v74 = 1;
      fread(&v74, 4u, 1u, v4);
      if ( v74 == 1 )
      {
        fread(&dword_174ABEEC0, 4u, 3u, v4);
        fread(&dword_174ABEECC, 4u, 3u, v4);
      }
      v5 = dword_174ABEECC;
      v6 = *(float *)&dword_174ABEEC0;
      v7 = 0;
      v8 = *(float *)&dword_174ABEEC4;
      v9 = *(float *)&dword_174ABEEC8;
      v74 = 2;
      v69 = 180288 * v2;
      dword_143DD0B04[45072 * v2] = 0;
      v70 = 99776 * v2;
      *(_DWORD *)((char *)&unk_14AA2D820 + v70) = v5;
      *(_DWORD *)((char *)&unk_14AA2D824 + v70) = dword_174ABEED0;
      *(_DWORD *)((char *)&unk_14AA2D828 + v70) = dword_174ABEED4;
      fread(&v74, 4u, 1u, v4);
      v10 = (int *)&unk_1749A95F8;
      if ( v74 == 2 )
      {
        fread(&unk_1749695EC, 4u, 1u, v4);
        fread(&dword_1749695F0, 4u, 1u, v4);
        v11 = 0;
        if ( dword_1749695F0 > 0 )
        {
          v12 = 0;
          do
          {
            fread((char *)&unk_1749695F4 + 4 * v12, 4u, 3u, v4);
            fread((char *)&unk_1749995F4 + 4 * v11++, 4u, 1u, v4);
            v12 += 3;
          }
          while ( v11 < dword_1749695F0 );
        }
        fread(&dword_1749A95F4, 4u, 1u, v4);
        v13 = dword_1749A95F4;
        v14 = 0;
        if ( dword_1749A95F4 > 0 )
        {
          v15 = (int *)&unk_1749A95F8;
          do
          {
            v71 = 56LL * v14;
            fread((void *)(0x140000000LL + v71 + 882546168), 4u, 1u, v4);
            v16 = 0;
            if ( *v15 > 0 )
            {
              do
              {
                fread((char *)&unk_1749A95FC + 56 * v14 + 4 * v16, 4u, 1u, v4);
                fread((char *)&unk_1749A960C + 56 * v14 + 8 * v16++, 4u, 2u, v4);
              }
              while ( v16 < *v15 );
              v7 = 0;
            }
            fread((void *)(0x140000000LL + v71 + 882546220), 4u, 1u, v4);
            v13 = dword_1749A95F4;
            ++v14;
            v15 += 14;
          }
          while ( v14 < dword_1749A95F4 );
          v10 = (int *)&unk_1749A95F8;
        }
      }
      else
      {
        v13 = dword_1749A95F4;
      }
      v17 = (unsigned int)dword_1749695F0;
      v18 = (float *)&unk_1749695FC;
      *(_DWORD *)((char *)&unk_143DAAAF4 + v69) = dword_1749695F0;
      if ( (int)v17 > 0 )
      {
        v19 = *(float *)&dword_174ABEEC0;
        v20 = *(float *)&dword_174ABEEC4;
        v21 = (float *)(0x140000000LL + v69 + 64662272);
        v22 = *(float *)&dword_174ABEEC8;
        do
        {
          v23 = *(float *)((char *)v21 + (_UNKNOWN *)((char *)&unk_1749695F8 - v69) - &unk_143DAAB00) - v20;
          *(v21 - 2) = *(float *)((char *)v21 + (_UNKNOWN *)((char *)&unk_1749695F4 - v69) - &unk_143DAAB00) - v19;
          v24 = *(float *)((char *)v21 + (_UNKNOWN *)((char *)&unk_1749695FC - v69) - &unk_143DAAB00) - v22;
          *(v21 - 1) = v23;
          *v21 = v24;
          v21 += 3;
          --v17;
        }
        while ( v17 );
      }
      *(_DWORD *)((char *)&unk_143DADAF8 + v69) = v13;
      v25 = (int *)&unk_1749A9600;
      if ( v13 > 0 )
      {
        v26 = &unk_1749A95F8;
        v27 = (_DWORD *)(0x140000000LL + v69 + 64674560);
        v28 = 0x140000000LL + v69 + 64674568;
        v29 = (unsigned int)v13;
        v30 = (int *)&unk_1749A9600;
        do
        {
          v28 += 24;
          *v27 = *v26;
          v27 += 6;
          v26 += 14;
          *(_DWORD *)(v28 - 28) = *(v30 - 1);
          v31 = *v30;
          v30 += 14;
          *(_DWORD *)(v28 - 24) = v31;
          *(_DWORD *)(v28 - 20) = *(v30 - 13);
          *(_DWORD *)(v28 - 16) = *(v30 - 12);
          --v29;
        }
        while ( v29 );
      }
      v74 = 2;
      fread(&v74, 4u, 1u, v4);
      if ( v74 == 2 )
      {
        fread(&unk_1749695EC, 4u, 1u, v4);
        fread(&dword_1749695F0, 4u, 1u, v4);
        v32 = 0;
        if ( dword_1749695F0 > 0 )
        {
          v33 = 0;
          do
          {
            fread((char *)&unk_1749695F4 + 4 * v33, 4u, 3u, v4);
            fread((char *)&unk_1749995F4 + 4 * v32++, 4u, 1u, v4);
            v33 += 3;
          }
          while ( v32 < dword_1749695F0 );
        }
        fread(&dword_1749A95F4, 4u, 1u, v4);
        v34 = dword_1749A95F4;
        v35 = 0;
        if ( dword_1749A95F4 > 0 )
        {
          do
          {
            v73 = 56LL * v35;
            fread((void *)(0x140000000LL + v73 + 882546168), 4u, 1u, v4);
            v36 = 0;
            if ( *v10 > 0 )
            {
              do
              {
                fread((char *)&unk_1749A95FC + 56 * v35 + 4 * v36, 4u, 1u, v4);
                fread((char *)&unk_1749A960C + 56 * v35 + 8 * v36++, 4u, 2u, v4);
              }
              while ( v36 < *v10 );
              v7 = 0;
            }
            fread((void *)(0x140000000LL + v73 + 882546220), 4u, 1u, v4);
            v34 = dword_1749A95F4;
            ++v35;
            v10 += 14;
          }
          while ( v35 < dword_1749A95F4 );
          v18 = (float *)&unk_1749695FC;
          v25 = (int *)&unk_1749A9600;
        }
      }
      else
      {
        v34 = dword_1749A95F4;
      }
      v37 = (unsigned int)dword_1749695F0;
      v38 = v69;
      dword_143DB3AFC[v69 / 4] = dword_1749695F0;
      if ( (int)v37 > 0 )
      {
        v39 = *(float *)&dword_174ABEEC0;
        v40 = *(float *)&dword_174ABEEC4;
        v41 = *(float *)&dword_174ABEEC8;
        v42 = (float *)(0x140000000LL + v69 + 64699144);
        do
        {
          v43 = *(float *)((char *)v42 + (_UNKNOWN *)((char *)&unk_1749695F8 - v69) - &unk_143DB3B08) - v40;
          *(v42 - 2) = *(float *)((char *)v42 + (_UNKNOWN *)((char *)&unk_1749695F4 - v69) - &unk_143DB3B08) - v39;
          v44 = *(float *)((char *)v42 + (_UNKNOWN *)((char *)&unk_1749695FC - v69) - &unk_143DB3B08) - v41;
          *(v42 - 1) = v43;
          *v42 = v44;
          v42 += 3;
          --v37;
        }
        while ( v37 );
      }
      dword_143DB6B00[v69 / 4] = v34;
      if ( v34 > 0 )
      {
        v45 = (unsigned int)v34;
        v46 = (_DWORD *)(0x140000000LL + v69 + 64711432);
        v47 = 0x140000000LL + v69 + 64711440;
        v48 = &unk_1749A95F8;
        do
        {
          v47 += 104;
          *v46 = *v48;
          v48 += 14;
          v46 += 26;
          *(_DWORD *)(v47 - 108) = *(v25 - 1);
          v49 = *v25;
          v25 += 14;
          *(_DWORD *)(v47 - 104) = v49;
          *(_DWORD *)(v47 - 100) = *(v25 - 13);
          *(_DWORD *)(v47 - 96) = *(v25 - 12);
          --v45;
        }
        while ( v45 );
      }
      v74 = 1;
      fread(&v74, 4u, 1u, v4);
      if ( v74 == 1 )
      {
        fread(&dword_174ABEEC0, 4u, 3u, v4);
        fread(&dword_174ABEECC, 4u, 3u, v4);
      }
      v50 = v70;
      v51 = dword_174ABEECC;
      v74 = 2;
      *(_DWORD *)((char *)&unk_14AA2D83C + v70) = 1120403456;
      *(_DWORD *)((char *)&unk_14AA2D840 + v70) = v51;
      *(_DWORD *)((char *)&unk_14AA2D844 + v70) = dword_174ABEED0;
      *(_DWORD *)((char *)&unk_14AA2D848 + v70) = dword_174ABEED4;
      fread(&v74, 4u, 1u, v4);
      if ( v74 == 2 )
      {
        fread(&unk_1749695EC, 4u, 1u, v4);
        fread(&dword_1749695F0, 4u, 1u, v4);
        v52 = 0;
        if ( dword_1749695F0 > 0 )
        {
          v53 = 0;
          do
          {
            fread((char *)&unk_1749695F4 + 4 * v53, 4u, 3u, v4);
            fread((char *)&unk_1749995F4 + 4 * v52++, 4u, 1u, v4);
            v53 += 3;
          }
          while ( v52 < dword_1749695F0 );
        }
        fread(&dword_1749A95F4, 4u, 1u, v4);
        v54 = 0;
        if ( dword_1749A95F4 > 0 )
        {
          v55 = (int *)&unk_1749A95F8;
          do
          {
            v72 = 56LL * v54;
            fread((void *)(0x140000000LL + v72 + 882546168), 4u, 1u, v4);
            v56 = 0;
            if ( *v55 > 0 )
            {
              do
              {
                fread((char *)&unk_1749A95FC + 56 * v54 + 4 * v56, 4u, 1u, v4);
                fread((char *)&unk_1749A960C + 56 * v54 + 8 * v56++, 4u, 2u, v4);
              }
              while ( v56 < *v55 );
              v7 = 0;
            }
            fread((void *)(0x140000000LL + v72 + 882546220), 4u, 1u, v4);
            ++v54;
            v55 += 14;
          }
          while ( v54 < dword_1749A95F4 );
          v50 = v70;
          v18 = (float *)&unk_1749695FC;
        }
        v38 = v69;
      }
      v57 = dword_1749695F0 <= 0;
      v58 = 0;
      v59 = *(float *)&dword_174ABEEC0;
      v60 = 0;
      v61 = *(float *)&dword_174ABEEC4 - v8;
      dword_196ABD900[0] = 0;
      dword_196ABF904 = 0;
      *(float *)((char *)&unk_14AA2D830 + v50) = *(float *)&dword_174ABEEC0 - v6;
      v62 = *(float *)&dword_174ABEEC8 - v9;
      *(float *)((char *)&unk_14AA2D834 + v50) = v61;
      dword_196AC4108 = 0;
      *(__int64 *)((char *)&qword_196AC590C + 4) = 0;
      dword_196AC5918 = 0;
      *(float *)((char *)&unk_14AA2D838 + v50) = v62;
      LODWORD(qword_196AC590C) = 1;
      if ( !v57 )
      {
        while ( 1 )
        {
          v63 = *(v18 - 2) - v59;
          *(v18 - 2) = v63;
          v64 = *(v18 - 1) - *(float *)&dword_174ABEEC4;
          *(v18 - 1) = v64;
          v65 = *v18 - *(float *)&dword_174ABEEC8;
          *v18 = v65;
          if ( v58 < 512 )
          {
            v66 = 2LL * v58;
            flt_196ABD904[2 * v66] = v63;
            flt_196ABD904[2 * v66 + 1] = v64;
            flt_196ABD904[2 * v66 + 2] = v65;
            dword_196ABD910[4 * dword_196ABD900[0]] = 0;
            v58 = ++dword_196ABD900[0];
          }
          ++v60;
          v18 += 3;
          if ( v60 >= dword_1749695F0 )
            break;
          v59 = *(float *)&dword_174ABEEC0;
        }
      }
      if ( dword_1749A95F4 > 0 )
      {
        v67 = (int *)&unk_1749A95F8;
        do
        {
          sub_140033C40(*v67, (int *)&unk_1749A95FC + 14 * v7++);
          v67 += 14;
        }
        while ( v7 < dword_1749A95F4 );
      }
      sub_140035710(0x140000000LL + v38 + 64825536);
      *(_DWORD *)((char *)&unk_14AA2D82C + v50) = 1;
      LODWORD(v3) = fclose(v4);
    }
  }
  return (int)v3;
}

