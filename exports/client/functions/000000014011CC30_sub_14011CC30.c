/* Address: 0x14011cc30 | Name: sub_14011CC30 | Size: 2108 bytes */
__int64 __fastcall sub_14011CC30(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // eax
  float v6; // xmm9_4
  float v7; // xmm13_4
  unsigned int *v8; // rbx
  float v9; // xmm14_4
  __int64 v10; // r13
  float v11; // xmm15_4
  unsigned int *v12; // rdi
  unsigned int v13; // r12d
  __int64 v14; // r15
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm7_4
  __int64 v22; // rax
  unsigned int *v23; // r12
  signed int i; // r15d
  signed int v25; // edi
  _BYTE *v26; // rbx
  char *v27; // r13
  float v28; // xmm7_4
  unsigned int *v29; // r8
  float v30; // xmm4_4
  float v31; // xmm5_4
  int v32; // r9d
  float v33; // xmm9_4
  unsigned int v34; // r10d
  int v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // eax
  float v39; // xmm3_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  int *v42; // rsi
  int *v43; // rbx
  int v44; // r14d
  int v45; // ecx
  int v46; // edx
  int v47; // eax
  int v48; // eax
  float v49; // xmm1_4
  float v50; // xmm0_4
  int v51; // r12d
  _DWORD *v52; // r9
  __int64 v53; // r15
  __int64 v54; // r10
  __int64 v55; // rdi
  __int64 v56; // r11
  __int64 v57; // rax
  unsigned int *v58; // r8
  __int64 v59; // r10
  int v60; // edx
  __int64 v61; // kr00_8
  int v62; // ebx
  int v63; // r14d
  unsigned int *v64; // rcx
  float *v65; // rdx
  __int64 v66; // r8
  float v67; // xmm1_4
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v71; // [rsp+8h] [rbp-100h] BYREF
  float v72; // [rsp+28h] [rbp-E0h] BYREF
  float v73; // [rsp+2Ch] [rbp-DCh]
  float v74; // [rsp+30h] [rbp-D8h]
  int v75; // [rsp+38h] [rbp-D0h]
  float v76; // [rsp+40h] [rbp-C8h] BYREF
  float v77; // [rsp+44h] [rbp-C4h]
  __int64 v78; // [rsp+48h] [rbp-C0h]
  __int64 v79; // [rsp+50h] [rbp-B8h]
  unsigned int *v80; // [rsp+58h] [rbp-B0h]
  _BYTE v81[16]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v82; // [rsp+70h] [rbp-98h]

  v75 = a1;
  MEMORY[0x1401FCD30](&dword_140404A6C[40714349], 0, 1024);
  dword_140404A6C[70074733] = 0;
  dword_140404A6C[70087022] = 0;
  v5 = MEMORY[0x140198F9B](v2, v1, v3, v4);
  v6 = *(float *)&dword_140404A6C[111579653];
  v7 = *(float *)&dword_140404A6C[284024504];
  v8 = &dword_140404A6C[83201284];
  v9 = *(float *)&dword_140404A6C[284024503];
  v10 = 4096;
  v11 = *(float *)&dword_140404A6C[284024502];
  v12 = &dword_140404A6C[83200507];
  v13 = dword_140404A6C[284024893];
  v14 = 4096;
  v80 = &dword_140404A6C[83200507];
  dword_140404A6C[70087023] = v5;
  do
  {
    if ( *(v12 - 6150) )
    {
      v12[775] = 0;
      *(_QWORD *)(v8 - 1) = 0;
      *(_QWORD *)(v8 + 1) = 0;
      v15 = v12[1];
      v16 = v12[2];
      v17 = *v12 + 1;
      v18 = (float)(int)*v12 * 8.0;
      v19 = (float)v15 * 8.0;
      v73 = (float)(v19 * v6) - 8.0;
      v20 = (float)v16 * 8.0;
      v74 = (float)(v20 * v6) - 8.0;
      v21 = (float)((float)((float)(v9 - (float)((float)(v19 + 4.0) * v6))
                          * (float)(v9 - (float)((float)(v19 + 4.0) * v6)))
                  + (float)((float)(v11 - (float)((float)(v18 + 4.0) * v6))
                          * (float)(v11 - (float)((float)(v18 + 4.0) * v6))))
          + (float)((float)(v7 - (float)((float)(v20 + 4.0) * v6)) * (float)(v7 - (float)((float)(v20 + 4.0) * v6)));
      v72 = (float)(v6 * v18) - 8.0;
      v76 = (float)((float)((float)v17 * 8.0) * v6) + 8.0;
      v77 = (float)((float)((float)(v15 + 1) * 8.0) * v6) + 8.0;
      *(float *)&v78 = (float)((float)((float)(v16 + 1) * 8.0) * v6) + 8.0;
      if ( v13 )
      {
        if ( v21 <= 4096.0 )
          goto LABEL_7;
      }
      if ( (unsigned int)sub_14001FD20(&v72, &v76) )
      {
LABEL_7:
        if ( v21 < 1024.0 || v21 < 36864.0 )
        {
          v12[775] = 1;
          *(v8 - 1) = 1;
          *v8 = 1;
          v8[1] = 1;
          v8[2] = 1;
        }
      }
    }
    v12 += 6930;
    v8 += 6930;
    --v14;
  }
  while ( v14 );
  v22 = 27704LL - (_QWORD)v81;
  v23 = &dword_140404A6C[83194357];
  v79 = 27704LL - (_QWORD)v81;
  for ( i = 0; i < 4096; ++i )
  {
    if ( *v23 && v23[6925] )
    {
      v25 = 0;
      v26 = v81;
      v27 = (char *)v23 + v22;
      do
      {
        if ( *(_DWORD *)&v27[(_QWORD)v26] )
          sub_140013120(i, v25);
        ++v25;
        v26 += 4;
      }
      while ( v25 < 4 );
      v22 = v79;
      v10 = 4096;
    }
    v23 += 6930;
  }
  v28 = *(float *)&dword_140404A6C[111579653];
  v29 = &dword_140404A6C[83200503];
  v30 = *(float *)&dword_140404A6C[284024504];
  v31 = *(float *)&dword_140404A6C[284024503];
  v32 = 0;
  v33 = *(float *)&dword_140404A6C[284024502];
  v34 = dword_140404A6C[70074733];
  do
  {
    if ( *(v29 - 6146) && v29[779] )
    {
      v35 = 0;
      v36 = 0;
      v37 = 0;
      if ( v29[1] != -1 )
      {
        LOBYTE(v35) = *v29 != -1;
        v36 = v35;
      }
      v38 = 0;
      if ( v29[2] != -1 )
        v37 = v36;
      if ( v29[3] != -1 )
        v38 = v37;
      if ( v38 )
      {
        v39 = (float)(int)v29[4];
        dword_140404A6C[2 * v34 + 70078830] = v32;
        v40 = (float)((float)(int)v29[6] * 8.0) + 4.0;
        v41 = (float)((float)((float)(int)v29[5] * 8.0) + 4.0) * v28;
        v72 = (float)((float)(v39 * 8.0) + 4.0) * v28;
        v73 = v41;
        v74 = v40 * v28;
        *(float *)&dword_140404A6C[2 * dword_140404A6C[70074733] + 70078831] = fsqrt(
                                                                                 (float)((float)((float)(v31 - v41)
                                                                                               * (float)(v31 - v41))
                                                                                       + (float)((float)(v33 - v72)
                                                                                               * (float)(v33 - v72)))
                                                                               + (float)((float)(v30 - (float)(v40 * v28))
                                                                                       * (float)(v30 - (float)(v40 * v28))));
        v34 = ++dword_140404A6C[70074733];
      }
      else
      {
        v29[779] = 0;
      }
    }
    ++v32;
    v29 += 6930;
  }
  while ( v32 < 4096 );
  v42 = (int *)v80;
  v43 = (int *)&dword_140404A6C[315472211];
  v44 = v75;
  do
  {
    if ( *(v42 - 6150) )
    {
      if ( !v44 )
        goto LABEL_37;
      v45 = v42[1];
      v46 = v42[2];
      v47 = *v42 + 1;
      v72 = (float)((float)((float)*v42 * 8.0) * v28) - 8.0;
      v73 = (float)((float)((float)v45 * 8.0) * v28) - 8.0;
      v74 = (float)((float)((float)v46 * 8.0) * v28) - 8.0;
      v76 = (float)((float)((float)v47 * 8.0) * v28) + 8.0;
      v77 = (float)((float)((float)(v45 + 1) * 8.0) * v28) + 8.0;
      *(float *)&v78 = (float)((float)((float)(v46 + 1) * 8.0) * v28) + 8.0;
      if ( (unsigned int)sub_14001FD20(&v72, &v76) || v42[775] )
      {
LABEL_37:
        v48 = v42[6];
        v49 = (float)((float)((float)v42[1] * 8.0) + 4.0) * v28;
        v72 = (float)((float)((float)*v42 * 8.0) + 4.0) * v28;
        v50 = (float)v42[2];
        v73 = v49;
        v74 = (float)((float)(v50 * 8.0) + 4.0) * v28;
        if ( v48 > 0 )
        {
          v51 = v42[775];
          v52 = v42 + 8;
          v53 = (unsigned int)v48;
          do
          {
            v54 = *((unsigned __int8 *)v52 - 4);
            if ( !v51 || !dword_140404A6C[46 * v54 + 421784738] )
            {
              v55 = v43[3246088];
              if ( (_DWORD)v55 != -1 )
              {
                v56 = *v43;
                if ( (_DWORD)v56 != -1 )
                {
                  if ( *v52 )
                  {
                    v57 = (int)dword_140404A6C[v54 + 40714349];
                    v58 = &dword_140404A6C[v54 + 40714349];
                    v59 = v54 << 14;
                    dword_140404A6C[v59 + 40714605 + v57] = 3 * *v52;
                    v60 = v52[1]
                        + (int)(v55 * dword_140404A6C[315570520]
                              + dword_140404A6C[3074 * v55 + 315570524 + 3 * v43[3246089]])
                        / 4
                        + 2 * v52[1];
                    dword_140404A6C[v59 + 53297517 + (int)*v58] = v60;
                    dword_140404A6C[v59 + 53297517 + (int)*v58] *= 4;
                    *(_QWORD *)&dword_140404A6C[2 * v59 + 44908909 + 2 * (int)*v58] = 4 * v60;
                    *(_QWORD *)&dword_140404A6C[2 * v59 + 57491821 + 2 * (int)*v58] = dword_140404A6C[v59 + 53297517 + (int)*v58];
                    v61 = (int)(v56 * dword_140404A6C[312324432] + dword_140404A6C[3074 * v56 + 312324436 + 3 * v43[1]]);
                    dword_140404A6C[v59 + 65880429 + (int)(*v58)++] = ((BYTE4(v61) & 0x3F) + (int)v61) >> 6;
                  }
                }
              }
            }
            v52 += 3;
            --v53;
          }
          while ( v53 );
          v44 = v75;
        }
      }
    }
    v43 += 6;
    v42 += 6930;
    --v10;
  }
  while ( v10 );
  v62 = dword_140404A6C[70074733];
  v63 = 0;
  if ( (int)dword_140404A6C[70074733] > 0 )
  {
    v64 = &dword_140404A6C[437192782];
    v65 = (float *)&dword_140404A6C[70078831];
    v66 = dword_140404A6C[70074733];
    do
    {
      v67 = *v65 * 256.0;
      v65 += 2;
      *v64++ = (int)(float)(16777216.0 - v67);
      --v66;
    }
    while ( v66 );
  }
  dword_140404A6C[436668493] = v62;
  sub_14007D710();
  if ( v62 > 0 )
  {
    v68 = 0;
    do
    {
      v69 = (int)dword_140404A6C[v68 + 436668494];
      ++v68;
      ++v63;
      dword_140404A6C[v68 + 70074733] = dword_140404A6C[2 * v69 + 70078830];
    }
    while ( v63 < (int)dword_140404A6C[70074733] );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v71 ^ v82);
}

