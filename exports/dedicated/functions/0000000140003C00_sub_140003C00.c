/* Address: 0x140003c00 | Name: sub_140003C00 | Size: 1897 bytes */
void __fastcall sub_140003C00(int a1, int a2)
{
  __int64 v2; // r13
  int v3; // r10d
  int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // r12
  int v7; // r14d
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
  _DWORD *v23; // rdx
  __int64 v24; // rbx
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  int v31; // r9d
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
  if ( a1 != -1 && a2 != -1 && (((unsigned __int8)a1 ^ (unsigned __int8)dword_191541414) & 1) == 0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 1;
    do
    {
      if ( dword_1909419C8[v5] )
      {
        if ( dword_190941A04[v5] > 0 )
        {
          v8 = dword_1909419D0[v5];
          if ( (_DWORD)v8 != -1 )
          {
            v9 = 14388 * v2;
            if ( dword_16D67D624[3597 * v8] != dword_16D67D624[3597 * v2] )
            {
              v10 = 7166LL * v3;
              if ( (float)((float)((float)((float)(*(float *)&dword_190941F94[v10 + 1] - *(float *)&dword_190941F98[v5])
                                         * (float)(*(float *)&dword_190941F94[v10 + 1] - *(float *)&dword_190941F98[v5]))
                                 + (float)((float)(*(float *)&dword_190941F94[v10] - *(float *)&dword_190941F94[v5])
                                         * (float)(*(float *)&dword_190941F94[v10] - *(float *)&dword_190941F94[v5])))
                         + (float)((float)(*(float *)&dword_190941F94[v10 + 2] - *(float *)&dword_190941F9C[v5])
                                 * (float)(*(float *)&dword_190941F94[v10 + 2] - *(float *)&dword_190941F9C[v5]))) < 16384.0 )
              {
                v11 = *(_DWORD *)((char *)&unk_16D680AFC + v9);
                v12 = 0;
                LODWORD(v13) = -1;
                if ( v11 > 0 )
                {
                  v14 = (_DWORD *)(0x140000000LL + v9 + 761793284);
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
                v17 = dword_191541414 & 0xF;
                if ( dword_1909419F0[v5] != -1 )
                  v17 = 3;
                v18 = 312 * v17 + v5 * 4;
                v19 = *(float *)((char *)&dword_190941BF0 + v18) - *(float *)&dword_190941F94[v10 + 1];
                v20 = *(float *)((char *)&dword_190941BF4 + v18) - *(float *)&dword_190941F94[v10 + 2];
                v52 = *(float *)((char *)dword_190941BEC + v18) - *(float *)&dword_190941F94[v10];
                v53 = v19;
                v21 = (float)(v19 * *(float *)((char *)&xmmword_190941FD4 + v10 * 4 + 12))
                    + (float)(v52 * *(float *)((char *)&xmmword_190941FD4 + v10 * 4 + 8));
                v54 = v20;
                if ( (float)(v21 + (float)(v20 * *(float *)&dword_190941FE4[v10])) < 0.0
                  && (*(_DWORD *)((char *)&unk_16D6802BC + v9) == 1
                   || !(unsigned int)sub_1400828D0(&dword_190941F94[v10], &dword_190941BEC[78 * v17 + v6], 1)) )
                {
                  if ( (_DWORD)v13 != -1 )
                    goto LABEL_23;
                  v22 = *(int *)((char *)&unk_16D680AFC + v9);
                  if ( (int)v22 < 16 )
                  {
                    *(_DWORD *)((char *)&unk_16D680B04 + 24 * v22 + v9) = v4;
                    v13 = *(int *)((char *)&unk_16D680AFC + v9);
                    dword_16D680B14[6 * v13 + (unsigned __int64)v9 / 4] = 0;
                    v23 = (_DWORD *)((char *)&unk_16D680B08 + 24 * *(int *)((char *)&unk_16D680AFC + v9) + v9);
                    *v23 = *(int *)((char *)dword_190941BEC + v18);
                    v23[1] = *(int *)((char *)&dword_190941BF0 + v18);
                    v23[2] = *(int *)((char *)&dword_190941BF4 + v18);
                    dword_16D680B14[6 * (*(_DWORD *)((char *)&unk_16D680AFC + v9))++ + 1 + (unsigned __int64)v9 / 4] = 600;
                    if ( (_DWORD)v13 != -1 )
                    {
LABEL_23:
                      v24 = v9 + 24LL * (int)v13;
                      v25 = *(float *)((char *)dword_16D680B14 + v24) + 1.0;
                      *(float *)((char *)dword_16D680B14 + v24) = v25;
                      if ( v25 > 16.0 )
                        *(_DWORD *)((char *)dword_16D680B14 + v24) = 1098907648;
                      *(float *)((char *)&unk_16D680B08 + v24) = *(float *)((char *)&unk_16D680B08 + v24) * 0.875;
                      *(float *)((char *)&unk_16D680B0C + v24) = *(float *)((char *)&unk_16D680B0C + v24) * 0.875;
                      *(float *)((char *)&unk_16D680B10 + v24) = *(float *)((char *)&unk_16D680B10 + v24) * 0.875;
                      sub_140051570(&v52);
                      v26 = v54 + *(float *)((char *)&dword_190941BF4 + v18);
                      v27 = (float)(v53 + *(float *)((char *)&dword_190941BF0 + v18))
                          + (float)(*(float *)((char *)&unk_190941C08 + v5 * 4) * 4.0);
                      v52 = (float)(*(float *)((char *)&unk_190941C04 + v5 * 4) * 4.0)
                          + (float)(v52 + *(float *)((char *)dword_190941BEC + v18));
                      v28 = *(float *)((char *)&unk_190941C0C + v5 * 4) * 4.0;
                      v29 = (float)(v52 * 0.125) + *(float *)((char *)&unk_16D680B08 + v24);
                      v53 = v27;
                      *(float *)((char *)&unk_16D680B08 + v24) = v29;
                      v30 = (float)(v27 * 0.125) + *(float *)((char *)&unk_16D680B0C + v24);
                      v54 = v26 + v28;
                      *(float *)((char *)&unk_16D680B0C + v24) = v30;
                      *(float *)((char *)&unk_16D680B10 + v24) = (float)((float)(v26 + v28) * 0.125)
                                                               + *(float *)((char *)&unk_16D680B10 + v24);
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
    v32 = 14388 * v2;
    if ( *((int *)&unk_16D680AFC + 3597 * v2) > 0 )
    {
      v33 = (float *)(0x140000000LL + v32 + 761793300);
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
          v35 = *(int *)((char *)&unk_16D680AFC + v32);
          *(_DWORD *)((char *)&unk_16D680AFC + v32) = v35 - 1;
          v36 = v32 + 24 * v35;
          *((_OWORD *)v33 - 1) = *(_OWORD *)((char *)&unk_16D680AEC + v36);
          *(_QWORD *)v33 = *(_QWORD *)((char *)&unk_16D680AFC + v36);
        }
      }
      while ( v31 < *(_DWORD *)((char *)&unk_16D680AFC + v32) );
    }
    v37 = v3;
    v38 = *(_DWORD *)((char *)&unk_16D680AFC + v32);
    v39 = 7166 * v37;
    *(_DWORD *)((char *)&unk_16D680B00 + v32) = 0;
    v40 = *(int *)((char *)&unk_16D680B04 + v32);
    v41 = *(float *)&dword_190941A4C[v39];
    v42 = *(float *)&dword_190941A50[v39];
    v43 = v41 - *(float *)&dword_190941A48[7166 * v40 + 1];
    v44 = v42 - *(float *)&dword_190941A48[7166 * v40 + 2];
    v45 = fsqrt(
            (float)((float)((float)(*(float *)&dword_190941A48[v39] - *(float *)&dword_190941A48[7166 * v40])
                          * (float)(*(float *)&dword_190941A48[v39] - *(float *)&dword_190941A48[7166 * v40]))
                  + (float)(v43 * v43))
          + (float)(v44 * v44));
    if ( v38 > 1 )
    {
      v46 = (float *)(0x140000000LL + v32 + 761793308);
      do
      {
        if ( v46[4] > 8.0 )
        {
          v47 = *(int *)v46;
          v48 = *(float *)&dword_190941A48[v39];
          v49 = v41 - *(float *)&dword_190941A48[7166 * v47 + 1];
          v50 = v42 - *(float *)&dword_190941A48[7166 * v47 + 2];
          if ( v45 > fsqrt(
                       (float)((float)(v49 * v49)
                             + (float)((float)(v48 - *(float *)&dword_190941A48[7166 * v47])
                                     * (float)(v48 - *(float *)&dword_190941A48[7166 * v47])))
                     + (float)(v50 * v50)) )
          {
            *(_DWORD *)((char *)&unk_16D680B00 + v32) = v7;
            v51 = 7166LL * *(int *)v46;
            v45 = fsqrt(
                    (float)((float)((float)(v41 - *(float *)&dword_190941A48[v51 + 1])
                                  * (float)(v41 - *(float *)&dword_190941A48[v51 + 1]))
                          + (float)((float)(v48 - *(float *)&dword_190941A48[v51])
                                  * (float)(v48 - *(float *)&dword_190941A48[v51])))
                  + (float)((float)(v42 - *(float *)&dword_190941A48[v51 + 2])
                          * (float)(v42 - *(float *)&dword_190941A48[v51 + 2])));
          }
        }
        ++v7;
        v46 += 6;
      }
      while ( v7 < v38 );
    }
  }
}

