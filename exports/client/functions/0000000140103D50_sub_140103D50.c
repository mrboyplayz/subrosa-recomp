/* Address: 0x140103d50 | Name: sub_140103D50 | Size: 2959 bytes */
double __fastcall sub_140103D50(int a1, __int64 a2)
{
  double result; // xmm0_8
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int v6; // xmm0_4
  float v7; // xmm6_4
  int v8; // ebp
  float v9; // xmm7_4
  float v10; // xmm8_4
  unsigned int *v11; // r12
  int v12; // ebx
  int v13; // esi
  int v14; // r8d
  int v15; // r15d
  unsigned int *v16; // r14
  signed int v17; // esi
  __int64 v18; // rcx
  float *v19; // r15
  float v20; // xmm2_4
  float v21; // xmm3_4
  float *v22; // rax
  float v23; // xmm4_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  unsigned int *v26; // r14
  unsigned int *v27; // r9
  unsigned int *v28; // r10
  __int64 v29; // rdx
  __int64 v30; // r11
  unsigned int *v31; // rcx
  unsigned int v32; // eax
  int v33; // ebx
  int v34; // esi
  int v35; // r9d
  int v36; // r13d
  signed int v37; // esi
  __int64 v38; // rcx
  unsigned __int64 v39; // r12
  float v40; // xmm2_4
  float v41; // xmm3_4
  float v42; // xmm4_4
  float *v43; // rax
  float v44; // xmm1_4
  float v45; // xmm0_4
  __int64 v46; // r10
  unsigned int *v47; // r8
  __int64 v48; // rcx
  unsigned int *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // r14
  unsigned int v52; // xmm0_4
  int v53; // ebx
  int v54; // esi
  int v55; // r12d
  unsigned int *v56; // r14
  signed int v57; // esi
  bool v58; // cc
  int v59; // eax
  float v60; // xmm2_4
  int v61; // ecx
  float v62; // xmm1_4
  float v63; // xmm0_4
  float v64; // xmm0_4
  float v65; // xmm1_4
  float v66; // xmm2_4
  __int64 v67; // rax
  signed int *v68; // rbx
  unsigned __int64 v69; // [rsp+20h] [rbp-88h]
  __int64 v70; // [rsp+28h] [rbp-80h]
  __int64 v71; // [rsp+30h] [rbp-78h]
  __int64 v72; // [rsp+30h] [rbp-78h]
  __int64 v73; // [rsp+38h] [rbp-70h]
  int v74; // [rsp+C0h] [rbp+18h] BYREF
  int Buffer; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = MEMORY[0x14020B8D8](a2, "rb");
  v5 = v4;
  if ( v4 )
  {
    fread(&Buffer, 4, 1, v4);
    if ( Buffer == 2 )
    {
      v74 = 1;
      fread(&v74, 4, 1, v5);
      if ( v74 == 1 )
      {
        fread(&dword_140404A6C[160857229], 4, 3, v5);
        fread(&dword_140404A6C[160857232], 4, 3, v5);
      }
      v6 = dword_140404A6C[160857232];
      v7 = *(float *)&dword_140404A6C[160857229];
      v8 = 0;
      v9 = *(float *)&dword_140404A6C[160857230];
      v10 = *(float *)&dword_140404A6C[160857231];
      v74 = 2;
      v69 = 180288 * v3;
      dword_140404A6C[45072 * v3 + 335200382] = 0;
      v70 = 24944 * v3;
      dword_140404A6C[v70 + 346732629] = v6;
      dword_140404A6C[v70 + 346732630] = dword_140404A6C[160857233];
      dword_140404A6C[v70 + 346732631] = dword_140404A6C[160857234];
      fread(&v74, 4, 1, v5);
      v11 = &dword_140404A6C[160573019];
      if ( v74 == 2 )
      {
        fread(&dword_140404A6C[160507480], 4, 1, v5);
        fread(&dword_140404A6C[160507481], 4, 1, v5);
        v12 = 0;
        if ( (int)dword_140404A6C[160507481] > 0 )
        {
          v13 = 0;
          do
          {
            fread(&dword_140404A6C[v13 + 160507482], 4, 3, v5);
            fread(&dword_140404A6C[v12++ + 160556634], 4, 1, v5);
            v13 += 3;
          }
          while ( v12 < (int)dword_140404A6C[160507481] );
        }
        fread(&dword_140404A6C[160573018], 4, 1, v5);
        v14 = dword_140404A6C[160573018];
        v15 = 0;
        if ( (int)dword_140404A6C[160573018] > 0 )
        {
          v16 = &dword_140404A6C[160573019];
          do
          {
            v71 = 56LL * v15;
            fread(0x140000000LL + v71 + 646505432, 4, 1, v5);
            v17 = 0;
            if ( (int)*v16 > 0 )
            {
              do
              {
                fread(&dword_140404A6C[14 * v15 + 160573020 + v17], 4, 1, v5);
                fread(&dword_140404A6C[14 * v15 + 160573024 + 2 * v17++], 4, 2, v5);
              }
              while ( v17 < (int)*v16 );
              v8 = 0;
            }
            fread(0x140000000LL + v71 + 646505484, 4, 1, v5);
            v14 = dword_140404A6C[160573018];
            ++v15;
            v16 += 14;
          }
          while ( v15 < (int)dword_140404A6C[160573018] );
          v11 = &dword_140404A6C[160573019];
        }
      }
      else
      {
        v14 = dword_140404A6C[160573018];
      }
      v18 = dword_140404A6C[160507481];
      v19 = (float *)&dword_140404A6C[160507484];
      dword_140404A6C[v69 / 4 + 335161466] = dword_140404A6C[160507481];
      if ( (int)v18 > 0 )
      {
        v20 = *(float *)&dword_140404A6C[160857229];
        v21 = *(float *)&dword_140404A6C[160857230];
        v22 = (float *)(0x140000000LL + v69 + 1344859232);
        v23 = *(float *)&dword_140404A6C[160857231];
        do
        {
          v24 = *(float *)((char *)v22
                         + (char *)&dword_140404A6C[v69 / 0xFFFFFFFFFFFFFFFCuLL + 160507483]
                         - (char *)&dword_140404A6C[335161469])
              - v21;
          *(v22 - 2) = *(float *)((char *)v22
                                + (char *)&dword_140404A6C[v69 / 0xFFFFFFFFFFFFFFFCuLL + 160507482]
                                - (char *)&dword_140404A6C[335161469])
                     - v20;
          v25 = *(float *)((char *)v22
                         + (char *)&dword_140404A6C[v69 / 0xFFFFFFFFFFFFFFFCuLL + 160507484]
                         - (char *)&dword_140404A6C[335161469])
              - v23;
          *(v22 - 1) = v24;
          *v22 = v25;
          v22 += 3;
          --v18;
        }
        while ( v18 );
      }
      dword_140404A6C[v69 / 4 + 335164539] = v14;
      v26 = &dword_140404A6C[160573021];
      if ( v14 > 0 )
      {
        v27 = &dword_140404A6C[160573019];
        v28 = (unsigned int *)(0x140000000LL + v69 + 1344871520);
        v29 = 0x140000000LL + v69 + 1344871528;
        v30 = (unsigned int)v14;
        v31 = &dword_140404A6C[160573021];
        do
        {
          v29 += 24;
          *v28 = *v27;
          v28 += 6;
          v27 += 14;
          *(_DWORD *)(v29 - 28) = *(v31 - 1);
          v32 = *v31;
          v31 += 14;
          *(_DWORD *)(v29 - 24) = v32;
          *(_DWORD *)(v29 - 20) = *(v31 - 13);
          *(_DWORD *)(v29 - 16) = *(v31 - 12);
          --v30;
        }
        while ( v30 );
      }
      v74 = 2;
      fread(&v74, 4, 1, v5);
      if ( v74 == 2 )
      {
        fread(&dword_140404A6C[160507480], 4, 1, v5);
        fread(&dword_140404A6C[160507481], 4, 1, v5);
        v33 = 0;
        if ( (int)dword_140404A6C[160507481] > 0 )
        {
          v34 = 0;
          do
          {
            fread(&dword_140404A6C[v34 + 160507482], 4, 3, v5);
            fread(&dword_140404A6C[v33++ + 160556634], 4, 1, v5);
            v34 += 3;
          }
          while ( v33 < (int)dword_140404A6C[160507481] );
        }
        fread(&dword_140404A6C[160573018], 4, 1, v5);
        v35 = dword_140404A6C[160573018];
        v36 = 0;
        if ( (int)dword_140404A6C[160573018] > 0 )
        {
          do
          {
            v73 = 56LL * v36;
            fread(0x140000000LL + v73 + 646505432, 4, 1, v5);
            v37 = 0;
            if ( (int)*v11 > 0 )
            {
              do
              {
                fread(&dword_140404A6C[14 * v36 + 160573020 + v37], 4, 1, v5);
                fread(&dword_140404A6C[14 * v36 + 160573024 + 2 * v37++], 4, 2, v5);
              }
              while ( v37 < (int)*v11 );
              v8 = 0;
            }
            fread(0x140000000LL + v73 + 646505484, 4, 1, v5);
            v35 = dword_140404A6C[160573018];
            ++v36;
            v11 += 14;
          }
          while ( v36 < (int)dword_140404A6C[160573018] );
          v19 = (float *)&dword_140404A6C[160507484];
          v26 = &dword_140404A6C[160573021];
        }
      }
      else
      {
        v35 = dword_140404A6C[160573018];
      }
      v38 = dword_140404A6C[160507481];
      v39 = v69;
      dword_140404A6C[v69 / 4 + 335170684] = dword_140404A6C[160507481];
      if ( (int)v38 > 0 )
      {
        v40 = *(float *)&dword_140404A6C[160857229];
        v41 = *(float *)&dword_140404A6C[160857230];
        v42 = *(float *)&dword_140404A6C[160857231];
        v43 = (float *)(0x140000000LL + v69 + 1344896104);
        do
        {
          v44 = *(float *)((char *)v43
                         + (char *)&dword_140404A6C[v69 / 0xFFFFFFFFFFFFFFFCuLL + 160507483]
                         - (char *)&dword_140404A6C[335170687])
              - v41;
          *(v43 - 2) = *(float *)((char *)v43
                                + (char *)&dword_140404A6C[v69 / 0xFFFFFFFFFFFFFFFCuLL + 160507482]
                                - (char *)&dword_140404A6C[335170687])
                     - v40;
          v45 = *(float *)((char *)v43
                         + (char *)&dword_140404A6C[v69 / 0xFFFFFFFFFFFFFFFCuLL + 160507484]
                         - (char *)&dword_140404A6C[335170687])
              - v42;
          *(v43 - 1) = v44;
          *v43 = v45;
          v43 += 3;
          --v38;
        }
        while ( v38 );
      }
      dword_140404A6C[v69 / 4 + 335173757] = v35;
      if ( v35 > 0 )
      {
        v46 = (unsigned int)v35;
        v47 = (unsigned int *)(0x140000000LL + v69 + 1344908392);
        v48 = 0x140000000LL + v69 + 1344908400;
        v49 = &dword_140404A6C[160573019];
        do
        {
          v48 += 104;
          *v47 = *v49;
          v49 += 14;
          v47 += 26;
          *(_DWORD *)(v48 - 108) = *(v26 - 1);
          v50 = *v26;
          v26 += 14;
          *(_DWORD *)(v48 - 104) = v50;
          *(_DWORD *)(v48 - 100) = *(v26 - 13);
          *(_DWORD *)(v48 - 96) = *(v26 - 12);
          --v46;
        }
        while ( v46 );
      }
      v74 = 1;
      fread(&v74, 4, 1, v5);
      if ( v74 == 1 )
      {
        fread(&dword_140404A6C[160857229], 4, 3, v5);
        fread(&dword_140404A6C[160857232], 4, 3, v5);
      }
      v51 = v70 * 4;
      v52 = dword_140404A6C[160857232];
      v74 = 2;
      dword_140404A6C[v70 + 346732636] = 1120403456;
      dword_140404A6C[v70 + 346732637] = v52;
      dword_140404A6C[v70 + 346732638] = dword_140404A6C[160857233];
      dword_140404A6C[v70 + 346732639] = dword_140404A6C[160857234];
      fread(&v74, 4, 1, v5);
      if ( v74 == 2 )
      {
        fread(&dword_140404A6C[160507480], 4, 1, v5);
        fread(&dword_140404A6C[160507481], 4, 1, v5);
        v53 = 0;
        if ( (int)dword_140404A6C[160507481] > 0 )
        {
          v54 = 0;
          do
          {
            fread(&dword_140404A6C[v54 + 160507482], 4, 3, v5);
            fread(&dword_140404A6C[v53++ + 160556634], 4, 1, v5);
            v54 += 3;
          }
          while ( v53 < (int)dword_140404A6C[160507481] );
        }
        fread(&dword_140404A6C[160573018], 4, 1, v5);
        v55 = 0;
        if ( (int)dword_140404A6C[160573018] > 0 )
        {
          v56 = &dword_140404A6C[160573019];
          do
          {
            v72 = 56LL * v55;
            fread(0x140000000LL + v72 + 646505432, 4, 1, v5);
            v57 = 0;
            if ( (int)*v56 > 0 )
            {
              do
              {
                fread(&dword_140404A6C[14 * v55 + 160573020 + v57], 4, 1, v5);
                fread(&dword_140404A6C[14 * v55 + 160573024 + 2 * v57++], 4, 2, v5);
              }
              while ( v57 < (int)*v56 );
              v8 = 0;
            }
            fread(0x140000000LL + v72 + 646505484, 4, 1, v5);
            ++v55;
            v56 += 14;
          }
          while ( v55 < (int)dword_140404A6C[160573018] );
          v51 = v70 * 4;
          v19 = (float *)&dword_140404A6C[160507484];
        }
        v39 = v69;
      }
      v58 = (signed int)dword_140404A6C[160507481] <= 0;
      v59 = 0;
      v60 = *(float *)&dword_140404A6C[160857229];
      v61 = 0;
      v62 = *(float *)&dword_140404A6C[160857230] - v9;
      dword_140404A6C[349900653] = 0;
      dword_140404A6C[349902702] = 0;
      *(float *)((char *)&dword_140404A6C[346732633] + v51) = *(float *)&dword_140404A6C[160857229] - v7;
      v63 = *(float *)&dword_140404A6C[160857231] - v10;
      *(float *)((char *)&dword_140404A6C[346732634] + v51) = v62;
      dword_140404A6C[349907311] = 0;
      *(_QWORD *)&dword_140404A6C[349908849] = 0;
      dword_140404A6C[349908851] = 0;
      *(float *)((char *)&dword_140404A6C[346732635] + v51) = v63;
      dword_140404A6C[349908848] = 1;
      if ( !v58 )
      {
        while ( 1 )
        {
          v64 = *(v19 - 2) - v60;
          *(v19 - 2) = v64;
          v65 = *(v19 - 1) - *(float *)&dword_140404A6C[160857230];
          *(v19 - 1) = v65;
          v66 = *v19 - *(float *)&dword_140404A6C[160857231];
          *v19 = v66;
          if ( v59 < 512 )
          {
            v67 = 2LL * v59;
            *(float *)&dword_140404A6C[2 * v67 + 349900654] = v64;
            *(float *)&dword_140404A6C[2 * v67 + 349900655] = v65;
            *(float *)&dword_140404A6C[2 * v67 + 349900656] = v66;
            dword_140404A6C[4 * dword_140404A6C[349900653] + 349900657] = 0;
            v59 = ++dword_140404A6C[349900653];
          }
          ++v61;
          v19 += 3;
          if ( v61 >= (int)dword_140404A6C[160507481] )
            break;
          v60 = *(float *)&dword_140404A6C[160857229];
        }
      }
      if ( (int)dword_140404A6C[160573018] > 0 )
      {
        v68 = (signed int *)&dword_140404A6C[160573019];
        do
        {
          sub_140048BA0(*v68, &dword_140404A6C[14 * v8++ + 160573020]);
          v68 += 14;
        }
        while ( v8 < (int)dword_140404A6C[160573018] );
      }
      sub_14004A670(0x140000000LL + v39 + 1345022496);
      *(unsigned int *)((char *)&dword_140404A6C[346732632] + v51) = 1;
      return sub_14020B9E8(v5);
    }
  }
  return result;
}

