/* Address: 0x140008440 | Name: sub_140008440 | Size: 1897 bytes */
void __fastcall sub_140008440(int a1, int a2)
{
  __int64 v2; // r13
  int v3; // r10d
  int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // r12
  signed int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r10
  int v11; // r8d
  int v12; // ecx
  __int64 v13; // rbx
  _DWORD *v14; // rdx
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r15
  float v19; // xmm5_4
  float v20; // xmm3_4
  float v21; // xmm5_4
  __int64 v22; // rax
  unsigned int *v23; // rdx
  __int64 v24; // rbx
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  signed int v31; // r9d
  __int64 v32; // r8
  float *v33; // rdx
  float v34; // xmm0_4
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // r10d
  __int64 v39; // r9
  __int64 v40; // rax
  float v41; // xmm4_4
  float v42; // xmm5_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // xmm6_4
  float *v46; // rdx
  __int64 v47; // rax
  float v48; // xmm3_4
  float v49; // xmm2_4
  float v50; // xmm0_4
  __int64 v51; // rcx
  float v52; // [rsp+20h] [rbp-D8h] BYREF
  float v53; // [rsp+24h] [rbp-D4h]
  float v54; // [rsp+28h] [rbp-D0h]

  v2 = a1;
  v3 = a2;
  if ( a1 != -1 && a2 != -1 && (((unsigned __int8)a1 ^ LOBYTE(dword_140404A6C[283831474])) & 1) == 0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 1;
    do
    {
      if ( dword_140404A6C[v5 + 280651303] )
      {
        if ( (int)dword_140404A6C[v5 + 280651318] > 0 )
        {
          v8 = (int)dword_140404A6C[v5 + 280651305];
          if ( (_DWORD)v8 != -1 )
          {
            v9 = 3597 * v2;
            if ( dword_140404A6C[3597 * v8 + 71856286] != dword_140404A6C[3597 * v2 + 71856286] )
            {
              v10 = 7166LL * v3;
              if ( (float)((float)((float)((float)(*(float *)&dword_140404A6C[v10 + 280651675]
                                                 - *(float *)&dword_140404A6C[v5 + 280651675])
                                         * (float)(*(float *)&dword_140404A6C[v10 + 280651675]
                                                 - *(float *)&dword_140404A6C[v5 + 280651675]))
                                 + (float)((float)(*(float *)&dword_140404A6C[v10 + 280651674]
                                                 - *(float *)&dword_140404A6C[v5 + 280651674])
                                         * (float)(*(float *)&dword_140404A6C[v10 + 280651674]
                                                 - *(float *)&dword_140404A6C[v5 + 280651674])))
                         + (float)((float)(*(float *)&dword_140404A6C[v10 + 280651676]
                                         - *(float *)&dword_140404A6C[v5 + 280651676])
                                 * (float)(*(float *)&dword_140404A6C[v10 + 280651676]
                                         - *(float *)&dword_140404A6C[v5 + 280651676]))) < 16384.0 )
              {
                v11 = dword_140404A6C[v9 + 71859668];
                v12 = 0;
                LODWORD(v13) = -1;
                if ( v11 > 0 )
                {
                  v14 = (_DWORD *)(0x140000000LL + v9 * 4 + 291652036);
                  do
                  {
                    v15 = *v14 == v4;
                    v14 += 6;
                    v16 = v12;
                    if ( !v15 )
                      v16 = v13;
                    ++v12;
                    LODWORD(v13) = v16;
                  }
                  while ( v12 < v11 );
                }
                v17 = dword_140404A6C[283831474] & 0xF;
                if ( dword_140404A6C[v5 + 280651313] != -1 )
                  v17 = 3;
                v18 = 312 * v17 + v5 * 4;
                v19 = *(float *)((char *)&dword_140404A6C[280651441] + v18)
                    - *(float *)&dword_140404A6C[v10 + 280651675];
                v20 = *(float *)((char *)&dword_140404A6C[280651442] + v18)
                    - *(float *)&dword_140404A6C[v10 + 280651676];
                v52 = *(float *)((char *)&dword_140404A6C[280651440] + v18)
                    - *(float *)&dword_140404A6C[v10 + 280651674];
                v53 = v19;
                v21 = (float)(v19 * *(float *)&dword_140404A6C[v10 + 280651693])
                    + (float)(v52 * *(float *)&dword_140404A6C[v10 + 280651692]);
                v54 = v20;
                if ( (float)(v21 + (float)(v20 * *(float *)&dword_140404A6C[v10 + 280651694])) < 0.0
                  && (dword_140404A6C[v9 + 71859140] == 1
                   || !(unsigned int)sub_1400DC050(
                                       &dword_140404A6C[v10 + 280651674],
                                       &dword_140404A6C[78 * v17 + 280651440 + v6],
                                       1)) )
                {
                  if ( (_DWORD)v13 != -1 )
                    goto LABEL_23;
                  v22 = (int)dword_140404A6C[v9 + 71859668];
                  if ( (int)v22 < 16 )
                  {
                    dword_140404A6C[6 * v22 + 71859670 + v9] = v4;
                    v13 = (int)dword_140404A6C[v9 + 71859668];
                    dword_140404A6C[6 * v13 + 71859674 + v9] = 0;
                    v23 = &dword_140404A6C[6 * (int)dword_140404A6C[v9 + 71859668] + 71859671 + v9];
                    *v23 = *(unsigned int *)((char *)&dword_140404A6C[280651440] + v18);
                    v23[1] = *(unsigned int *)((char *)&dword_140404A6C[280651441] + v18);
                    v23[2] = *(unsigned int *)((char *)&dword_140404A6C[280651442] + v18);
                    dword_140404A6C[6 * (int)dword_140404A6C[v9 + 71859668]++ + 71859675 + v9] = 600;
                    if ( (_DWORD)v13 != -1 )
                    {
LABEL_23:
                      v24 = v9 * 4 + 24LL * (int)v13;
                      v25 = *(float *)((char *)&dword_140404A6C[71859674] + v24) + 1.0;
                      *(float *)((char *)&dword_140404A6C[71859674] + v24) = v25;
                      if ( v25 > 16.0 )
                        *(unsigned int *)((char *)&dword_140404A6C[71859674] + v24) = 1098907648;
                      *(float *)((char *)&dword_140404A6C[71859671] + v24) = *(float *)((char *)&dword_140404A6C[71859671]
                                                                                      + v24)
                                                                           * 0.875;
                      *(float *)((char *)&dword_140404A6C[71859672] + v24) = *(float *)((char *)&dword_140404A6C[71859672]
                                                                                      + v24)
                                                                           * 0.875;
                      *(float *)((char *)&dword_140404A6C[71859673] + v24) = *(float *)((char *)&dword_140404A6C[71859673]
                                                                                      + v24)
                                                                           * 0.875;
                      sub_1400A56B0(&v52);
                      v26 = v54 + *(float *)((char *)&dword_140404A6C[280651442] + v18);
                      v27 = (float)(v53 + *(float *)((char *)&dword_140404A6C[280651441] + v18))
                          + (float)(*(float *)&dword_140404A6C[v5 + 280651447] * 4.0);
                      v52 = (float)(*(float *)&dword_140404A6C[v5 + 280651446] * 4.0)
                          + (float)(v52 + *(float *)((char *)&dword_140404A6C[280651440] + v18));
                      v28 = *(float *)&dword_140404A6C[v5 + 280651448] * 4.0;
                      v29 = (float)(v52 * 0.125) + *(float *)((char *)&dword_140404A6C[71859671] + v24);
                      v53 = v27;
                      *(float *)((char *)&dword_140404A6C[71859671] + v24) = v29;
                      v30 = (float)(v27 * 0.125) + *(float *)((char *)&dword_140404A6C[71859672] + v24);
                      v54 = v26 + v28;
                      *(float *)((char *)&dword_140404A6C[71859672] + v24) = v30;
                      *(float *)((char *)&dword_140404A6C[71859673] + v24) = (float)((float)(v26 + v28) * 0.125)
                                                                           + *(float *)((char *)&dword_140404A6C[71859673]
                                                                                      + v24);
                    }
                  }
                }
              }
              v3 = a2;
            }
          }
        }
      }
      ++v4;
      v6 += 7166;
      v5 += 7166;
    }
    while ( v4 < 256 );
    v31 = 0;
    v32 = 3597 * v2;
    if ( (int)dword_140404A6C[3597 * v2 + 71859668] > 0 )
    {
      v33 = (float *)(0x140000000LL + v32 * 4 + 291652052);
      do
      {
        v34 = *v33 * 0.96875;
        *v33 = v34;
        if ( v34 >= 0.875 )
        {
          ++v31;
          v33 += 6;
        }
        else
        {
          v35 = (int)dword_140404A6C[v32 + 71859668];
          dword_140404A6C[v32 + 71859668] = v35 - 1;
          v36 = v32 * 4 + 24 * v35;
          *((_OWORD *)v33 - 1) = *(_OWORD *)((char *)&dword_140404A6C[71859664] + v36);
          *(_QWORD *)v33 = *(_QWORD *)((char *)&dword_140404A6C[71859668] + v36);
        }
      }
      while ( v31 < (int)dword_140404A6C[v32 + 71859668] );
    }
    v37 = v3;
    v38 = dword_140404A6C[v32 + 71859668];
    v39 = 7166 * v37;
    dword_140404A6C[v32 + 71859669] = 0;
    v40 = (int)dword_140404A6C[v32 + 71859670];
    v41 = *(float *)&dword_140404A6C[v39 + 280651336];
    v42 = *(float *)&dword_140404A6C[v39 + 280651337];
    v43 = v41 - *(float *)&dword_140404A6C[7166 * v40 + 280651336];
    v44 = v42 - *(float *)&dword_140404A6C[7166 * v40 + 280651337];
    v45 = fsqrt(
            (float)((float)((float)(*(float *)&dword_140404A6C[v39 + 280651335]
                                  - *(float *)&dword_140404A6C[7166 * v40 + 280651335])
                          * (float)(*(float *)&dword_140404A6C[v39 + 280651335]
                                  - *(float *)&dword_140404A6C[7166 * v40 + 280651335]))
                  + (float)(v43 * v43))
          + (float)(v44 * v44));
    if ( v38 > 1 )
    {
      v46 = (float *)(0x140000000LL + v32 * 4 + 291652060);
      do
      {
        if ( v46[4] > 8.0 )
        {
          v47 = *(int *)v46;
          v48 = *(float *)&dword_140404A6C[v39 + 280651335];
          v49 = v41 - *(float *)&dword_140404A6C[7166 * v47 + 280651336];
          v50 = v42 - *(float *)&dword_140404A6C[7166 * v47 + 280651337];
          if ( v45 > fsqrt(
                       (float)((float)(v49 * v49)
                             + (float)((float)(v48 - *(float *)&dword_140404A6C[7166 * v47 + 280651335])
                                     * (float)(v48 - *(float *)&dword_140404A6C[7166 * v47 + 280651335])))
                     + (float)(v50 * v50)) )
          {
            dword_140404A6C[v32 + 71859669] = v7;
            v51 = 7166LL * *(int *)v46;
            v45 = fsqrt(
                    (float)((float)((float)(v41 - *(float *)&dword_140404A6C[v51 + 280651336])
                                  * (float)(v41 - *(float *)&dword_140404A6C[v51 + 280651336]))
                          + (float)((float)(v48 - *(float *)&dword_140404A6C[v51 + 280651335])
                                  * (float)(v48 - *(float *)&dword_140404A6C[v51 + 280651335])))
                  + (float)((float)(v42 - *(float *)&dword_140404A6C[v51 + 280651337])
                          * (float)(v42 - *(float *)&dword_140404A6C[v51 + 280651337])));
          }
        }
        ++v7;
        v46 += 6;
      }
      while ( v7 < v38 );
    }
  }
}

