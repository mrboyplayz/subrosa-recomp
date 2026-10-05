/* Address: 0x140078580 | Name: sub_140078580 | Size: 1187 bytes */
void sub_140078580()
{
  int *v0; // rcx
  __int64 v1; // r9
  __int64 v2; // r8
  int v3; // eax
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  int v11; // eax
  float v12; // xmm0_4
  float *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm1_4
  float v23; // xmm8_4
  float v24; // xmm9_4
  float v25; // xmm11_4
  float v26; // xmm12_4
  float v27; // xmm13_4
  int v28; // r8d
  float v29; // xmm1_4
  float v30; // xmm8_4
  float v31; // xmm9_4
  float v32; // xmm2_4
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm4_4
  int v36; // eax
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm3_4
  float v41; // xmm0_4

  v0 = dword_19025F16C;
  v1 = 1024;
  v2 = 1024;
  do
  {
    if ( *(v0 - 43) )
    {
      v3 = v0[43];
      if ( v3 > 0 )
        v0[43] = v3 - 1;
      v4 = *(v0 - 34);
      if ( (_DWORD)v4 != -1 )
      {
        v5 = 28664 * v4;
        if ( dword_1909419C8[7166 * v4] )
        {
          if ( *(v0 - 32) >= 2 )
          {
            v6 = *(float *)((char *)&unk_190941E5C + v5);
            v7 = -*(float *)((char *)&xmmword_190941E9C + v5 + 8);
            v8 = *(float *)&dword_190941EAC[v5 / 4];
            v9 = -*(float *)((char *)&xmmword_190941E9C + v5 + 12);
            *(v0 - 2) = *(_DWORD *)((char *)&unk_190941E8C + v5);
            v10 = -v8;
            *(v0 - 1) = dword_190941E90[v5 / 4];
            *v0 = dword_190941E94[v5 / 4];
            v11 = *(_DWORD *)((char *)&unk_190941E98 + v5);
            *((float *)v0 + 1) = v7;
            *((float *)v0 + 2) = v9;
            *((float *)v0 + 3) = v10;
            v0[4] = v11;
            v0[5] = *(_DWORD *)((char *)&xmmword_190941E9C + v5);
            v0[6] = *(_DWORD *)((char *)&xmmword_190941E9C + v5 + 4);
            *((float *)v0 - 20) = v6 - (float)(v7 * 0.25);
            *((float *)v0 - 19) = *(float *)((char *)&unk_190941E60 + v5) - (float)(v9 * 0.25);
            *((float *)v0 - 18) = *(float *)((char *)&unk_190941E64 + v5) - (float)(v10 * 0.25);
          }
        }
      }
    }
    v0 += 1760;
    --v2;
  }
  while ( v2 );
  v12 = *(float *)&dword_190152A90;
  v13 = (float *)dword_19025F178;
  do
  {
    if ( *((_DWORD *)v13 - 46) )
    {
      v14 = *((int *)v13 - 36);
      if ( (_DWORD)v14 != -1 )
      {
        v15 = 1760 * v14;
        v16 = *(float *)&dword_19025F11C[1760 * v14];
        *(v13 - 23) = v16;
        v17 = *(float *)&dword_19025F120[1760 * v14];
        *(v13 - 22) = v17;
        v18 = *(float *)&dword_19025F124[1760 * v14];
        *(v13 - 21) = v18;
        v19 = *(float *)&dword_19025F164[1760 * v14];
        *(v13 - 5) = v19;
        v20 = *(float *)&dword_19025F164[1760 * v14 + 1];
        *(v13 - 4) = v20;
        v21 = *(float *)&dword_19025F164[1760 * v14 + 2];
        *(v13 - 3) = v21;
        v22 = *(float *)&dword_19025F170[1760 * v14];
        *(v13 - 2) = v22;
        v23 = *(float *)&dword_19025F174[1760 * v14];
        *(v13 - 1) = v23;
        v24 = *(float *)&dword_19025F178[1760 * v14];
        *v13 = v24;
        v25 = *(float *)&dword_19025F17C[1760 * v14];
        v13[1] = v25;
        v26 = *(float *)&dword_19025F180[1760 * v14];
        v13[2] = v26;
        v27 = *(float *)&dword_19025F184[1760 * v14];
        v13[3] = v27;
        v28 = dword_19025F0D4[1760 * v14];
        if ( (unsigned int)(v28 - 15) <= 1 )
        {
          v36 = *((_DWORD *)v13 - 41);
          if ( v36 == 17 )
          {
            v37 = (float)((float)*((int *)v13 - 35) * 0.10546875) - 0.2109375;
            v38 = (float)(v19 * v37) + v16;
            v39 = (float)(v20 * v37) + v17;
            *(v13 - 23) = v38;
            *(v13 - 22) = v39;
            v40 = (float)(v21 * v37) + v18;
            *(v13 - 21) = v40;
          }
          else
          {
            v38 = v16;
            v39 = v17;
            v40 = v18;
          }
          if ( v36 == 18 )
          {
            v41 = (float)((float)*((int *)v13 - 35) * 0.10546875) - 0.2109375;
            *(v13 - 23) = (float)(v19 * v41) + v38;
            *(v13 - 22) = (float)(v20 * v41) + v39;
            *(v13 - 21) = (float)(v21 * v41) + v40;
          }
        }
        else if ( v28 == 39 )
        {
          v29 = (float)(v22 * v12) + v16;
          v30 = (float)(v23 * v12) + v17;
          v31 = (float)(v24 * v12) + v18;
          *(v13 - 23) = v29;
          *(v13 - 22) = v30;
          *(v13 - 21) = v31;
          v32 = *((float *)&unk_1901225E4 + 1268 * dword_19025F0D4[v15]);
          *(v13 - 23) = (float)(v32 * v25) + v29;
          *(v13 - 22) = (float)(v32 * v26) + v30;
          *(v13 - 21) = (float)(v32 * v27) + v31;
        }
        else
        {
          v33 = v16 - (float)(v22 * 0.0625);
          v34 = v17 - (float)(v23 * 0.0625);
          v35 = v18 - (float)(v24 * 0.0625);
          *(v13 - 23) = v33 - (float)(v25 * 0.0625);
          *(v13 - 22) = v34 - (float)(v26 * 0.0625);
          *(v13 - 21) = v35 - (float)(v27 * 0.0625);
          if ( dword_19025F0D4[v15] == 11 )
          {
            *(v13 - 23) = v33;
            *(v13 - 22) = v34;
            *(v13 - 21) = v35;
          }
        }
      }
    }
    v12 = *(float *)&dword_190152A90;
    v13 += 1760;
    --v1;
  }
  while ( v1 );
}

