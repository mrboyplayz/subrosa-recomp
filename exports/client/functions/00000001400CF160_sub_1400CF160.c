/* Address: 0x1400cf160 | Name: sub_1400CF160 | Size: 1187 bytes */
void sub_1400CF160()
{
  unsigned int *v0; // rcx
  __int64 v1; // r9
  __int64 v2; // r8
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rdx
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  unsigned int v11; // eax
  float v12; // xmm0_4
  float *v13; // rdx
  __int64 v14; // rax
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm1_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm11_4
  float v25; // xmm12_4
  float v26; // xmm13_4
  unsigned int v27; // r8d
  float v28; // xmm1_4
  float v29; // xmm8_4
  float v30; // xmm9_4
  float v31; // xmm2_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  float v34; // xmm4_4
  int v35; // eax
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm0_4

  v0 = &dword_140404A6C[278845936];
  v1 = 1024;
  v2 = 1024;
  do
  {
    if ( *(v0 - 43) )
    {
      v3 = v0[43];
      if ( v3 > 0 )
        v0[43] = v3 - 1;
      v4 = (int)*(v0 - 34);
      if ( (_DWORD)v4 != -1 )
      {
        v5 = 7166 * v4;
        if ( dword_140404A6C[7166 * v4 + 280651303] )
        {
          if ( (int)*(v0 - 32) >= 2 )
          {
            v6 = *(float *)&dword_140404A6C[v5 + 280651596];
            v7 = -*(float *)&dword_140404A6C[v5 + 280651614];
            v8 = *(float *)&dword_140404A6C[v5 + 280651616];
            v9 = -*(float *)&dword_140404A6C[v5 + 280651615];
            *(v0 - 2) = dword_140404A6C[v5 + 280651608];
            v10 = -v8;
            *(v0 - 1) = dword_140404A6C[v5 + 280651609];
            *v0 = dword_140404A6C[v5 + 280651610];
            v11 = dword_140404A6C[v5 + 280651611];
            *((float *)v0 + 1) = v7;
            *((float *)v0 + 2) = v9;
            *((float *)v0 + 3) = v10;
            v0[4] = v11;
            v0[5] = dword_140404A6C[v5 + 280651612];
            v0[6] = dword_140404A6C[v5 + 280651613];
            *((float *)v0 - 20) = v6 - (float)(v7 * 0.25);
            *((float *)v0 - 19) = *(float *)&dword_140404A6C[v5 + 280651597] - (float)(v9 * 0.25);
            *((float *)v0 - 18) = *(float *)&dword_140404A6C[v5 + 280651598] - (float)(v10 * 0.25);
          }
        }
      }
    }
    v0 += 1760;
    --v2;
  }
  while ( v2 );
  v12 = *(float *)&dword_140404A6C[278571065];
  v13 = (float *)&dword_140404A6C[278845939];
  do
  {
    if ( *((_DWORD *)v13 - 46) )
    {
      v14 = *((int *)v13 - 36);
      if ( (_DWORD)v14 != -1 )
      {
        v15 = *(float *)&dword_140404A6C[1760 * v14 + 278845916];
        *(v13 - 23) = v15;
        v16 = *(float *)&dword_140404A6C[1760 * v14 + 278845917];
        *(v13 - 22) = v16;
        v17 = *(float *)&dword_140404A6C[1760 * v14 + 278845918];
        *(v13 - 21) = v17;
        v18 = *(float *)&dword_140404A6C[1760 * v14 + 278845934];
        *(v13 - 5) = v18;
        v19 = *(float *)&dword_140404A6C[1760 * v14 + 278845935];
        *(v13 - 4) = v19;
        v20 = *(float *)&dword_140404A6C[1760 * v14 + 278845936];
        *(v13 - 3) = v20;
        v21 = *(float *)&dword_140404A6C[1760 * v14 + 278845937];
        *(v13 - 2) = v21;
        v22 = *(float *)&dword_140404A6C[1760 * v14 + 278845938];
        *(v13 - 1) = v22;
        v23 = *(float *)&dword_140404A6C[1760 * v14 + 278845939];
        *v13 = v23;
        v24 = *(float *)&dword_140404A6C[1760 * v14 + 278845940];
        v13[1] = v24;
        v25 = *(float *)&dword_140404A6C[1760 * v14 + 278845941];
        v13[2] = v25;
        v26 = *(float *)&dword_140404A6C[1760 * v14 + 278845942];
        v13[3] = v26;
        v27 = dword_140404A6C[1760 * v14 + 278845898];
        if ( v27 - 15 <= 1 )
        {
          v35 = *((_DWORD *)v13 - 41);
          if ( v35 == 17 )
          {
            v36 = (float)((float)*((int *)v13 - 35) * 0.10546875) - 0.2109375;
            v37 = (float)(v18 * v36) + v15;
            v38 = (float)(v19 * v36) + v16;
            *(v13 - 23) = v37;
            *(v13 - 22) = v38;
            v39 = (float)(v20 * v36) + v17;
            *(v13 - 21) = v39;
          }
          else
          {
            v37 = v15;
            v38 = v16;
            v39 = v17;
          }
          if ( v35 == 18 )
          {
            v40 = (float)((float)*((int *)v13 - 35) * 0.10546875) - 0.2109375;
            *(v13 - 23) = (float)(v18 * v40) + v37;
            *(v13 - 22) = (float)(v19 * v40) + v38;
            *(v13 - 21) = (float)(v20 * v40) + v39;
          }
        }
        else if ( v27 == 39 )
        {
          v28 = (float)(v21 * v12) + v15;
          v29 = (float)(v22 * v12) + v16;
          v30 = (float)(v23 * v12) + v17;
          *(v13 - 23) = v28;
          *(v13 - 22) = v29;
          *(v13 - 21) = v30;
          v31 = *(float *)&dword_140404A6C[1268 * dword_140404A6C[1760 * v14 + 278845898] + 278521614];
          *(v13 - 23) = (float)(v31 * v24) + v28;
          *(v13 - 22) = (float)(v31 * v25) + v29;
          *(v13 - 21) = (float)(v31 * v26) + v30;
        }
        else
        {
          v32 = v15 - (float)(v21 * 0.0625);
          v33 = v16 - (float)(v22 * 0.0625);
          v34 = v17 - (float)(v23 * 0.0625);
          *(v13 - 23) = v32 - (float)(v24 * 0.0625);
          *(v13 - 22) = v33 - (float)(v25 * 0.0625);
          *(v13 - 21) = v34 - (float)(v26 * 0.0625);
          *(v13 - 23) = v32;
          *(v13 - 22) = v33;
          *(v13 - 21) = v34;
        }
      }
    }
    v12 = *(float *)&dword_140404A6C[278571065];
    v13 += 1760;
    --v1;
  }
  while ( v1 );
}

