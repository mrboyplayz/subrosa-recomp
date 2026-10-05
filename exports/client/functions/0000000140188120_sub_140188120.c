/* Address: 0x140188120 | Name: sub_140188120 | Size: 1172 bytes */
__int64 sub_140188120()
{
  unsigned int *v0; // rsi
  int v1; // ecx
  signed int v2; // edi
  float *v3; // rbx
  float v4; // xmm3_4
  float v5; // xmm4_4
  float v6; // xmm5_4
  float v7; // xmm0_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm6_4
  float v11; // xmm6_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm11_4
  float v15; // xmm12_4
  float v16; // xmm13_4
  float *v17; // rcx
  float v18; // xmm11_4
  float v19; // xmm12_4
  int v20; // eax
  __int64 v21; // rdx
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float *v25; // rcx
  float v26; // xmm0_4
  float v27; // xmm2_4
  int v28; // eax
  __int64 v29; // rdx
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float *v33; // rcx
  float v34; // xmm0_4
  float v35; // xmm2_4
  int v36; // eax
  __int64 v37; // rdx
  float v38; // xmm2_4
  float v39; // xmm1_4
  float *v40; // rcx
  float v41; // xmm0_4
  float v42; // xmm2_4
  float v43; // xmm0_4
  int v44; // eax
  __int64 v45; // rdx
  unsigned int v46; // eax
  __int64 v48; // [rsp+0h] [rbp-E8h] BYREF
  float v49; // [rsp+20h] [rbp-C8h] BYREF
  float v50; // [rsp+24h] [rbp-C4h]
  float v51; // [rsp+28h] [rbp-C0h]
  __int64 v52; // [rsp+30h] [rbp-B8h]

  v0 = &dword_140404A6C[129720373];
  v1 = dword_140404A6C[431138493];
  do
  {
    if ( *(v0 - 3664) )
    {
      v2 = 0;
      if ( (int)*v0 > 0 )
      {
        v3 = (float *)(v0 + 36);
        do
        {
          if ( *(v3 - 2) > 0.03125 )
          {
            v4 = *(v3 - 16) - *(v3 - 1);
            v5 = *(v3 - 15) - *v3;
            v6 = *(v3 - 14) - v3[1];
            v7 = fsqrt((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6));
            if ( v7 == 0.0 )
            {
              v8 = 0.0;
              v9 = 0.0;
              v10 = 0.0;
            }
            else
            {
              v8 = (float)(1.0 / v7) * v4;
              v9 = (float)(1.0 / v7) * v5;
              v10 = (float)(1.0 / v7) * v6;
            }
            v11 = v10 * -0.0625;
            v12 = v9 * 0.0625;
            v13 = v8 * 0.0625;
            v14 = *(v3 - 16) - v11;
            v15 = *(v3 - 15) - v12;
            v16 = *(v3 - 14) - v13;
            v17 = (float *)&dword_140404A6C[17 * v1 + 430859966];
            *v17 = v14;
            v18 = v14 - *(float *)&dword_1402F6188;
            v17[1] = v15;
            v19 = v15 - *(float *)&dword_1402F618C;
            v17[2] = v16;
            v49 = v18;
            v50 = v19;
            v51 = v16 - *(float *)&dword_1402F6190;
            v20 = sub_1400DC050(v17, &v49, 0);
            v21 = (int)dword_140404A6C[431138493];
            if ( v20 )
              *(float *)&dword_140404A6C[17 * dword_140404A6C[431138493] + 430859967] = *(float *)&dword_140404A6C[73006982]
                                                                                      + 0.03125;
            v22 = v11 + *(v3 - 16);
            v23 = v12 + *(v3 - 15);
            *(float *)&dword_140404A6C[17 * v21 + 430859969] = *(v3 - 2) * 8.0;
            v24 = v13 + *(v3 - 14);
            v25 = (float *)&dword_140404A6C[17 * v21 + 430859970];
            v25[2] = v24;
            v26 = v24 - *(float *)&dword_1402F6190;
            *v25 = v22;
            v27 = v22 - *(float *)&dword_1402F6188;
            v25[1] = v23;
            v51 = v26;
            v49 = v27;
            v50 = v23 - *(float *)&dword_1402F618C;
            v28 = sub_1400DC050(v25, &v49, 0);
            v29 = (int)dword_140404A6C[431138493];
            if ( v28 )
              *(float *)&dword_140404A6C[17 * dword_140404A6C[431138493] + 430859971] = *(float *)&dword_140404A6C[73006982]
                                                                                      + 0.03125;
            v30 = v11 + *(v3 - 1);
            v31 = v12 + *v3;
            *(float *)&dword_140404A6C[17 * v29 + 430859973] = *(v3 - 2) * 8.0;
            v32 = v13 + v3[1];
            v33 = (float *)&dword_140404A6C[17 * v29 + 430859974];
            v33[2] = v32;
            v34 = v32 - *(float *)&dword_1402F6190;
            *v33 = v30;
            v35 = v30 - *(float *)&dword_1402F6188;
            v33[1] = v31;
            v51 = v34;
            v49 = v35;
            v50 = v31 - *(float *)&dword_1402F618C;
            v36 = sub_1400DC050(v33, &v49, 0);
            v37 = (int)dword_140404A6C[431138493];
            if ( v36 )
              *(float *)&dword_140404A6C[17 * dword_140404A6C[431138493] + 430859975] = *(float *)&dword_140404A6C[73006982]
                                                                                      + 0.03125;
            v38 = *(v3 - 1) - v11;
            v39 = *v3 - v12;
            *(float *)&dword_140404A6C[17 * v37 + 430859977] = v3[2] * 8.0;
            v40 = (float *)&dword_140404A6C[17 * v37 + 430859978];
            v41 = v3[1] - v13;
            *v40 = v38;
            v42 = v38 - *(float *)&dword_1402F6188;
            v40[2] = v41;
            v43 = v41 - *(float *)&dword_1402F6190;
            v40[1] = v39;
            v49 = v42;
            v51 = v43;
            v50 = v39 - *(float *)&dword_1402F618C;
            v44 = sub_1400DC050(v40, &v49, 0);
            v45 = (int)dword_140404A6C[431138493];
            if ( v44 )
              *(float *)&dword_140404A6C[17 * dword_140404A6C[431138493] + 430859979] = *(float *)&dword_140404A6C[73006982]
                                                                                      + 0.03125;
            v46 = dword_140404A6C[431138494];
            *(float *)&dword_140404A6C[17 * v45 + 430859981] = v3[2] * 8.0;
            v1 = ((_WORD)v45 + 1) & 0x3FFF;
            dword_140404A6C[431138493] = v1;
            if ( v46 == v1 )
              dword_140404A6C[431138494] = ((_WORD)v46 + 1) & 0x3FFF;
          }
          ++v2;
          *(v3 - 1) = *(v3 - 16);
          *v3 = *(v3 - 15);
          v3[1] = *(v3 - 14);
          v3[2] = *(v3 - 2);
          v3 += 43;
        }
        while ( v2 < (int)*v0 );
      }
    }
    v0 += 5210;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[132387893] );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v48 ^ v52);
}

