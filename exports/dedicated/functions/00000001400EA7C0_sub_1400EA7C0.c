/* Address: 0x1400ea7c0 | Name: sub_1400EA7C0 | Size: 1828 bytes */
__int64 __fastcall sub_1400EA7C0(int a1, int a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // r11
  __int64 v6; // r14
  int v7; // edi
  char *v8; // rdx
  int *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // r12d
  int v13; // r11d
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // r10d
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // ebx
  int v22; // r13d
  int v23; // esi
  int v24; // r15d
  __int64 v25; // rbx
  int v26; // ecx
  __int64 v27; // r14
  int v28; // esi
  float v29; // xmm13_4
  float v30; // xmm14_4
  float v31; // xmm15_4
  float v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm3_4
  float v35; // xmm4_4
  float v36; // xmm6_4
  float v37; // xmm9_4
  float v38; // xmm6_4
  float v39; // xmm9_4
  float v40; // xmm10_4
  float v41; // xmm5_4
  float v42; // xmm11_4
  float v43; // xmm12_4
  float v44; // xmm6_4
  float v45; // xmm9_4
  float v46; // xmm3_4
  float v47; // xmm12_4
  float v48; // xmm6_4
  float v49; // xmm9_4
  __int64 v50; // rdi
  float v51; // xmm6_4
  float *v52; // rbx
  int v53; // xmm1_4
  int v54; // xmm1_4
  int v55; // xmm1_4
  int v56; // xmm1_4
  int v57; // xmm0_4
  __int64 v58; // rcx
  int v59; // [rsp+20h] [rbp-E0h]
  unsigned int v60; // [rsp+24h] [rbp-DCh]
  float v61; // [rsp+28h] [rbp-D8h]
  int v62; // [rsp+2Ch] [rbp-D4h]
  int v63; // [rsp+30h] [rbp-D0h]
  int v64; // [rsp+34h] [rbp-CCh]
  int v65; // [rsp+38h] [rbp-C8h]
  int v66; // [rsp+3Ch] [rbp-C4h]
  int v67; // [rsp+40h] [rbp-C0h]
  __int64 v68; // [rsp+48h] [rbp-B8h]
  int v69; // [rsp+58h] [rbp-A8h]
  __int64 v70; // [rsp+60h] [rbp-A0h]
  __int64 v71; // [rsp+68h] [rbp-98h]
  __int64 v72; // [rsp+70h] [rbp-90h]
  __int64 v73; // [rsp+78h] [rbp-88h]
  int v74; // [rsp+80h] [rbp-80h]
  __int64 v75; // [rsp+88h] [rbp-78h]
  __int64 v76; // [rsp+90h] [rbp-70h]
  __int64 v77; // [rsp+98h] [rbp-68h]
  __int64 v78; // [rsp+A0h] [rbp-60h]
  __int64 v79; // [rsp+A8h] [rbp-58h]
  int v80; // [rsp+B0h] [rbp-50h] BYREF
  float v81; // [rsp+B4h] [rbp-4Ch]
  int v82; // [rsp+B8h] [rbp-48h]
  int v83; // [rsp+BCh] [rbp-44h]
  float v84; // [rsp+C0h] [rbp-40h]
  float v85; // [rsp+C4h] [rbp-3Ch]
  int v86; // [rsp+C8h] [rbp-38h]
  float v87; // [rsp+CCh] [rbp-34h]
  int v88; // [rsp+D0h] [rbp-30h]
  int v89; // [rsp+D4h] [rbp-2Ch]
  float v90; // [rsp+D8h] [rbp-28h]
  float v91; // [rsp+DCh] [rbp-24h]
  float v92; // [rsp+E0h] [rbp-20h] BYREF
  float v93; // [rsp+E4h] [rbp-1Ch]
  float v94; // [rsp+E8h] [rbp-18h]
  float v95; // [rsp+ECh] [rbp-14h]
  _DWORD v96[2]; // [rsp+F0h] [rbp-10h] BYREF
  char v97; // [rsp+F8h] [rbp-8h] BYREF

  v2 = a1;
  result = a2;
  v4 = 104LL * a2;
  v5 = 180288LL * a1;
  v73 = a1;
  v79 = a2;
  v78 = v4;
  v6 = v4 + v5;
  v7 = *(_DWORD *)((char *)&unk_143DA6AE0 + v4 + v5 + 65576);
  v77 = v4 + v5;
  v60 = v7;
  if ( v7 >= 3 )
  {
    v8 = &v97;
    v9 = (int *)((char *)dword_143DB6B0C + v6);
    v10 = (unsigned int)v7;
    do
    {
      v8 += 12;
      v11 = 15024LL * a1 + *v9++;
      *((_DWORD *)v8 - 5) = *((_DWORD *)&unk_143DA6AE0 + 3 * v11 + 13320);
      *((_DWORD *)v8 - 4) = *((_DWORD *)&unk_143DA6AE0 + 3 * v11 + 13321);
      *((_DWORD *)v8 - 3) = *((_DWORD *)&unk_143DA6AE0 + 3 * v11 + 13322);
      --v10;
    }
    while ( v10 );
    v12 = *(_DWORD *)((char *)&unk_143DA6AE0 + v5 + 12);
    v13 = 0;
    v61 = 65536.0;
    v74 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    if ( v12 > 0 )
    {
      v18 = 0;
      v19 = 1;
      v72 = 0;
      v59 = 1;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      do
      {
        v20 = v18 + 1;
        v69 = v19;
        v68 = v20;
        v21 = v19;
        v71 = v20;
        v22 = v19;
        if ( v19 < v12 )
        {
          v23 = v19 + 1;
          v67 = v19 + 1;
          do
          {
            ++v20;
            v24 = v23;
            v76 = v20;
            v25 = v20;
            v70 = v20;
            if ( v23 < v12 )
            {
              v26 = v23 + 1;
              v66 = v23 + 1;
              do
              {
                v27 = v25 + 1;
                v28 = v26;
                v75 = v25 + 1;
                if ( v26 < v12 )
                {
                  do
                  {
                    v29 = *((float *)&unk_143DA6AE0 + 45072 * v73 + 4 * v72 + 4);
                    v30 = *((float *)&unk_143DA6AE0 + 45072 * v73 + 4 * v72 + 5);
                    v31 = *((float *)&unk_143DA6AE0 + 45072 * v73 + 4 * v72 + 6);
                    v80 = LODWORD(v29);
                    v81 = v30;
                    v82 = LODWORD(v31);
                    v32 = *((float *)&unk_143DA6AE0 + 45072 * v73 + 4 * v71 + 5);
                    v33 = *((float *)&unk_143DA6AE0 + 45072 * v73 + 4 * v71 + 4);
                    v85 = *((float *)&unk_143DA6AE0 + 45072 * v73 + 4 * v71 + 6);
                    v84 = v32;
                    v34 = v32 - v30;
                    v83 = LODWORD(v33);
                    v35 = v33 - v29;
                    v36 = *((float *)&unk_143DA6AE0 + 45072 * v73 + 4 * v25 + 6);
                    v37 = *((float *)&unk_143DA6AE0 + 45072 * v73 + 4 * v25 + 4);
                    v87 = *((float *)&unk_143DA6AE0 + 45072 * v73 + 4 * v25 + 5);
                    v88 = LODWORD(v36);
                    v38 = v36 - v31;
                    v86 = LODWORD(v37);
                    v39 = v37 - v29;
                    v40 = *(float *)&dword_143DA6AF0[45072 * v73 + 4 * v27];
                    v41 = *(float *)&dword_143DA6AF0[45072 * v73 + 1 + 4 * v27];
                    v42 = *(float *)&dword_143DA6AF0[45072 * v73 + 2 + 4 * v27];
                    v43 = (float)((float)(v87 - v30) * (float)(v85 - v31)) - (float)(v38 * v34);
                    v89 = LODWORD(v40);
                    v90 = v41;
                    v44 = (float)(v38 * v35) - (float)(v39 * (float)(v85 - v31));
                    v91 = v42;
                    v45 = (float)(v39 * v34) - (float)((float)(v87 - v30) * v35);
                    v46 = fsqrt((float)((float)(v44 * v44) + (float)(v43 * v43)) + (float)(v45 * v45));
                    if ( v46 == 0.0 )
                    {
                      v47 = 0.0;
                      v48 = 0.0;
                      v49 = 0.0;
                    }
                    else
                    {
                      v47 = v43 * (float)(1.0 / v46);
                      v48 = v44 * (float)(1.0 / v46);
                      v49 = v45 * (float)(1.0 / v46);
                    }
                    v50 = v60;
                    if ( (double)((float)((float)((float)((float)(v41 - v30) * v48) + (float)((float)(v40 - v29) * v47))
                                        + (float)((float)(v42 - v31) * v49)) < 0.25) == 0.0 )
                    {
                      v51 = 0.0;
                      v52 = (float *)v96;
                      do
                      {
                        sub_140021500((__int64)&v92, 4, (__int64)&v80, v52);
                        if ( v51 < fabs(v92) )
                          v51 = fabs(v92);
                        if ( v51 < fabs(v93) )
                          v51 = fabs(v93);
                        if ( v51 < fabs(v94) )
                          v51 = fabs(v94);
                        if ( v51 < fabs(v95) )
                          v51 = fabs(v95);
                        v52 += 3;
                        --v50;
                      }
                      while ( v50 );
                      v13 = 0;
                      v19 = v59;
                      v25 = v70;
                      if ( v61 <= v51 )
                      {
                        v14 = v62;
                        v15 = v63;
                        v16 = v64;
                        v17 = v65;
                      }
                      else
                      {
                        v17 = v59 - 1;
                        v61 = v51;
                        v14 = v28;
                        v65 = v59 - 1;
                        v62 = v28;
                        v16 = v22;
                        v64 = v22;
                        v15 = v24;
                        v63 = v24;
                      }
                    }
                    else
                    {
                      v19 = v59;
                    }
                    ++v28;
                    ++v27;
                  }
                  while ( v28 < v12 );
                  v26 = v66;
                }
                v25 = v75;
                ++v26;
                ++v24;
                v66 = v26;
                v70 = v75;
              }
              while ( v24 < v12 );
              v23 = v67;
              v20 = v76;
            }
            ++v23;
            v71 = v20;
            ++v22;
            v67 = v23;
          }
          while ( v22 < v12 );
          v21 = v69;
        }
        v18 = v68;
        v59 = ++v19;
        v72 = v68;
      }
      while ( v21 < v12 );
      v2 = v73;
      v6 = v77;
      v4 = v78;
    }
    v53 = dword_143DA6AF0[45072 * v2 + 1 + 4 * v17];
    v80 = dword_143DA6AF0[45072 * v2 + 4 * v17];
    v82 = dword_143DA6AF0[45072 * v2 + 2 + 4 * v17];
    v81 = *(float *)&v53;
    v54 = dword_143DA6AF0[45072 * v2 + 1 + 4 * v16];
    v83 = dword_143DA6AF0[45072 * v2 + 4 * v16];
    v85 = *(float *)&dword_143DA6AF0[45072 * v2 + 2 + 4 * v16];
    v84 = *(float *)&v54;
    v55 = dword_143DA6AF0[45072 * v2 + 1 + 4 * v15];
    v86 = dword_143DA6AF0[45072 * v2 + 4 * v15];
    v88 = dword_143DA6AF0[45072 * v2 + 2 + 4 * v15];
    v87 = *(float *)&v55;
    v56 = dword_143DA6AF0[45072 * v2 + 1 + 4 * v14];
    v89 = dword_143DA6AF0[45072 * v2 + 4 * v14];
    v57 = dword_143DA6AF0[45072 * v2 + 2 + 4 * v14];
    result = 104 * v79;
    v90 = *(float *)&v56;
    v91 = *(float *)&v57;
    v58 = 104 * v79 + 180288 * v2;
    *(_DWORD *)((char *)&unk_143DA6AE0 + v58 + 65596) = v17;
    *(_DWORD *)((char *)&unk_143DA6AE0 + v58 + 65600) = v16;
    *(_DWORD *)((char *)&unk_143DA6AE0 + v58 + 65604) = v15;
    *(_DWORD *)((char *)&unk_143DA6AE0 + v58 + 65608) = v14;
    if ( *(int *)((char *)&unk_143DA6AE0 + v6 + 65576) > 0 )
    {
      do
      {
        result = sub_140021500(
                   (__int64)&unk_143DB6B2C + 180288 * v2 + 16 * v13 + v4,
                   4,
                   (__int64)&v80,
                   (float *)&v96[3 * v13]);
        v13 = v74 + 1;
        v74 = v13;
      }
      while ( v13 < *(_DWORD *)((char *)&unk_143DA6AE0 + v6 + 65576) );
    }
  }
  return result;
}

