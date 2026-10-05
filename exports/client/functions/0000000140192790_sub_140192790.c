/* Address: 0x140192790 | Name: sub_140192790 | Size: 1828 bytes */
__int64 __fastcall sub_140192790(int a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r11
  __int64 v5; // r14
  int v6; // edi
  char *v7; // rdx
  int *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // r12d
  unsigned int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ebx
  signed int v20; // r13d
  int v21; // esi
  signed int v22; // r15d
  __int64 v23; // rbx
  int v24; // ecx
  __int64 v25; // r14
  signed int v26; // esi
  float v27; // xmm13_4
  float v28; // xmm14_4
  float v29; // xmm15_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm6_4
  float v35; // xmm9_4
  float v36; // xmm6_4
  float v37; // xmm9_4
  float v38; // xmm10_4
  float v39; // xmm5_4
  float v40; // xmm11_4
  float v41; // xmm12_4
  float v42; // xmm6_4
  float v43; // xmm9_4
  float v44; // xmm3_4
  float v45; // xmm12_4
  float v46; // xmm6_4
  float v47; // xmm9_4
  __int64 v48; // rdi
  float v49; // xmm6_4
  float *v50; // rbx
  unsigned int v51; // xmm1_4
  unsigned int v52; // xmm1_4
  unsigned int v53; // xmm1_4
  unsigned int v54; // xmm1_4
  unsigned int v55; // xmm0_4
  __int64 v56; // rcx
  __int64 v58; // [rsp+0h] [rbp-100h] BYREF
  int v59; // [rsp+20h] [rbp-E0h]
  unsigned int v60; // [rsp+24h] [rbp-DCh]
  float v61; // [rsp+28h] [rbp-D8h]
  unsigned int v62; // [rsp+2Ch] [rbp-D4h]
  unsigned int v63; // [rsp+30h] [rbp-D0h]
  unsigned int v64; // [rsp+34h] [rbp-CCh]
  unsigned int v65; // [rsp+38h] [rbp-C8h]
  int v66; // [rsp+3Ch] [rbp-C4h]
  int v67; // [rsp+40h] [rbp-C0h]
  __int128 v68; // [rsp+48h] [rbp-B8h]
  int v69; // [rsp+58h] [rbp-A8h]
  __int64 v70; // [rsp+60h] [rbp-A0h]
  __int64 v71; // [rsp+68h] [rbp-98h]
  __int64 v72; // [rsp+70h] [rbp-90h]
  __int64 v73; // [rsp+78h] [rbp-88h]
  __int64 v74; // [rsp+80h] [rbp-80h]
  __int64 v75; // [rsp+88h] [rbp-78h]
  __int64 v76; // [rsp+90h] [rbp-70h]
  __int64 v77; // [rsp+98h] [rbp-68h]
  __int64 v78; // [rsp+A0h] [rbp-60h]
  __int64 v79; // [rsp+A8h] [rbp-58h]
  unsigned int v80; // [rsp+B0h] [rbp-50h] BYREF
  float v81; // [rsp+B4h] [rbp-4Ch]
  unsigned int v82; // [rsp+B8h] [rbp-48h]
  unsigned int v83; // [rsp+BCh] [rbp-44h]
  float v84; // [rsp+C0h] [rbp-40h]
  unsigned int v85; // [rsp+C4h] [rbp-3Ch]
  unsigned int v86; // [rsp+C8h] [rbp-38h]
  float v87; // [rsp+CCh] [rbp-34h]
  unsigned int v88; // [rsp+D0h] [rbp-30h]
  unsigned int v89; // [rsp+D4h] [rbp-2Ch]
  float v90; // [rsp+D8h] [rbp-28h]
  float v91; // [rsp+DCh] [rbp-24h]
  float v92; // [rsp+E0h] [rbp-20h] BYREF
  float v93; // [rsp+E4h] [rbp-1Ch]
  float v94; // [rsp+E8h] [rbp-18h]
  float v95; // [rsp+ECh] [rbp-14h]
  _DWORD v96[2]; // [rsp+F0h] [rbp-10h] BYREF
  char v97; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v98; // [rsp+120h] [rbp+20h]

  v2 = a1;
  v3 = 104LL * a2;
  v4 = 180288LL * a1;
  v73 = a1;
  v79 = a2;
  v78 = v3;
  v5 = v3 + v4;
  v6 = *(unsigned int *)((char *)&dword_140404A6C[335173759] + v3 + v4);
  v77 = v3 + v4;
  v60 = v6;
  if ( v6 >= 3 )
  {
    v7 = &v97;
    v8 = (int *)((char *)&dword_140404A6C[335173760] + v5);
    v9 = (unsigned int)v6;
    do
    {
      v7 += 12;
      v10 = 15024LL * a1 + *v8++;
      *((_DWORD *)v7 - 5) = dword_140404A6C[3 * v10 + 335170685];
      *((_DWORD *)v7 - 4) = dword_140404A6C[3 * v10 + 335170686];
      *((_DWORD *)v7 - 3) = dword_140404A6C[3 * v10 + 335170687];
      --v9;
    }
    while ( v9 );
    v11 = *(unsigned int *)((char *)&dword_140404A6C[335157368] + v4);
    LODWORD(v4) = 0;
    v61 = 65536.0;
    v74 = 0;
    v68 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ( v11 > 0 )
    {
      v16 = 0;
      v17 = 1;
      v72 = 0;
      v59 = 1;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      do
      {
        v18 = v16 + 1;
        v69 = v17;
        *(_QWORD *)&v68 = v18;
        v19 = v17;
        v71 = v18;
        v20 = v17;
        if ( v17 < v11 )
        {
          v21 = v17 + 1;
          v67 = v17 + 1;
          do
          {
            ++v18;
            v22 = v21;
            v76 = v18;
            v23 = v18;
            v70 = v18;
            if ( v21 < v11 )
            {
              v24 = v21 + 1;
              v66 = v21 + 1;
              do
              {
                v25 = v23 + 1;
                v26 = v24;
                v75 = v23 + 1;
                if ( v24 < v11 )
                {
                  do
                  {
                    v27 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v72];
                    v28 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v72];
                    v29 = *(float *)&dword_140404A6C[45072 * v73 + 335157371 + 4 * v72];
                    v80 = LODWORD(v27);
                    v81 = v28;
                    v82 = LODWORD(v29);
                    v30 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v71];
                    v31 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v71];
                    v85 = dword_140404A6C[45072 * v73 + 335157371 + 4 * v71];
                    v84 = v30;
                    v32 = v30 - v28;
                    v83 = LODWORD(v31);
                    v33 = v31 - v27;
                    v34 = *(float *)&dword_140404A6C[45072 * v73 + 335157371 + 4 * v23];
                    v35 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v23];
                    v87 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v23];
                    v88 = LODWORD(v34);
                    v36 = v34 - v29;
                    v86 = LODWORD(v35);
                    v37 = v35 - v27;
                    v38 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v25];
                    v39 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v25];
                    v40 = *(float *)&dword_140404A6C[45072 * v73 + 335157371 + 4 * v25];
                    v41 = (float)((float)(v87 - v28) * (float)(*(float *)&v85 - v29)) - (float)(v36 * v32);
                    v89 = LODWORD(v38);
                    v90 = v39;
                    v42 = (float)(v36 * v33) - (float)(v37 * (float)(*(float *)&v85 - v29));
                    v91 = v40;
                    v43 = (float)(v37 * v32) - (float)((float)(v87 - v28) * v33);
                    v44 = fsqrt((float)((float)(v42 * v42) + (float)(v41 * v41)) + (float)(v43 * v43));
                    if ( v44 == 0.0 )
                    {
                      v45 = 0.0;
                      v46 = 0.0;
                      v47 = 0.0;
                    }
                    else
                    {
                      v45 = v41 * (float)(1.0 / v44);
                      v46 = v42 * (float)(1.0 / v44);
                      v47 = v43 * (float)(1.0 / v44);
                    }
                    v48 = v60;
                    if ( (double)((float)((float)((float)((float)(v39 - v28) * v46) + (float)((float)(v38 - v27) * v45))
                                        + (float)((float)(v40 - v29) * v47)) < 0.25) == 0.0 )
                    {
                      v49 = 0.0;
                      v50 = (float *)v96;
                      do
                      {
                        sub_14002E730((__int64)&v92, 4, (__int64)&v80, v50);
                        if ( v49 < fabs(v92) )
                          v49 = fabs(v92);
                        if ( v49 < fabs(v93) )
                          v49 = fabs(v93);
                        if ( v49 < fabs(v94) )
                          v49 = fabs(v94);
                        if ( v49 < fabs(v95) )
                          v49 = fabs(v95);
                        v50 += 3;
                        --v48;
                      }
                      while ( v48 );
                      LODWORD(v4) = 0;
                      v17 = v59;
                      v23 = v70;
                      if ( v61 <= v49 )
                      {
                        v12 = v62;
                        v13 = v63;
                        v14 = v64;
                        v15 = v65;
                      }
                      else
                      {
                        v15 = v59 - 1;
                        v61 = v49;
                        v12 = v26;
                        v65 = v59 - 1;
                        v62 = v26;
                        v14 = v20;
                        v64 = v20;
                        v13 = v22;
                        v63 = v22;
                      }
                    }
                    else
                    {
                      v17 = v59;
                    }
                    ++v26;
                    ++v25;
                  }
                  while ( v26 < v11 );
                  v24 = v66;
                }
                v23 = v75;
                ++v24;
                ++v22;
                v66 = v24;
                v70 = v75;
              }
              while ( v22 < v11 );
              v21 = v67;
              v18 = v76;
            }
            ++v21;
            v71 = v18;
            ++v20;
            v67 = v21;
          }
          while ( v20 < v11 );
          v19 = v69;
        }
        v16 = v68;
        v59 = ++v17;
        v72 = v68;
      }
      while ( v19 < v11 );
      v2 = v73;
      v5 = v77;
      v3 = v78;
    }
    v51 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v15];
    v80 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v15];
    v82 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v15];
    v81 = *(float *)&v51;
    v52 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v14];
    v83 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v14];
    v85 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v14];
    v84 = *(float *)&v52;
    v53 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v13];
    v86 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v13];
    v88 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v13];
    v87 = *(float *)&v53;
    v54 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v12];
    v89 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v12];
    v55 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v12];
    v90 = *(float *)&v54;
    v91 = *(float *)&v55;
    v56 = 104 * v79 + 180288 * v2;
    *(unsigned int *)((char *)&dword_140404A6C[335173764] + v56) = v15;
    *(unsigned int *)((char *)&dword_140404A6C[335173765] + v56) = v14;
    *(unsigned int *)((char *)&dword_140404A6C[335173766] + v56) = v13;
    *(unsigned int *)((char *)&dword_140404A6C[335173767] + v56) = v12;
    if ( *(int *)((char *)&dword_140404A6C[335173759] + v5) > 0 )
    {
      do
      {
        sub_14002E730(
          (__int64)&dword_140404A6C[45072 * v2 + 335173768 + 4 * (int)v4] + v3,
          4,
          (__int64)&v80,
          (float *)&v96[3 * (int)v4]);
        v4 = (unsigned int)(v74 + 1);
        v74 = v4;
      }
      while ( (int)v4 < *(int *)((char *)&dword_140404A6C[335173759] + v5) );
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v58 ^ v98);
}

