/* Address: 0x1400dc050 | Name: sub_1400DC050 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_1400DC050(float *a1, float *a2, int a3)
{
  float *v4; // r13
  float *v5; // r15
  unsigned int *v6; // rdi
  int i; // ebx
  int v8; // edi
  unsigned int *v9; // rbx
  unsigned int v10; // xmm0_4
  unsigned int v11; // xmm0_4
  unsigned int v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm9_4
  float v18; // xmm10_4
  float v19; // xmm8_4
  int v20; // r11d
  float v21; // xmm11_4
  float v22; // xmm9_4
  int v23; // r12d
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  unsigned __int64 v27; // r15
  __int64 v28; // r8
  __int64 v29; // rsi
  __int64 v30; // r13
  unsigned __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r10
  __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v40; // [rsp-20h] [rbp-C310h] BYREF
  float v41; // [rsp+10h] [rbp-C2E0h] BYREF
  int v42; // [rsp+14h] [rbp-C2DCh]
  __int128 v43; // [rsp+18h] [rbp-C2D8h] BYREF
  unsigned int v44; // [rsp+28h] [rbp-C2C8h]
  unsigned int v45; // [rsp+2Ch] [rbp-C2C4h]
  float v46; // [rsp+30h] [rbp-C2C0h]
  float *v47; // [rsp+40h] [rbp-C2B0h]
  float *v48; // [rsp+48h] [rbp-C2A8h]
  int v49[24712]; // [rsp+50h] [rbp-C2A0h] BYREF
  float v50; // [rsp+18270h] [rbp+BF80h] BYREF
  unsigned int v51; // [rsp+18274h] [rbp+BF84h]
  unsigned int v52; // [rsp+18278h] [rbp+BF88h]
  unsigned int v53; // [rsp+18280h] [rbp+BF90h] BYREF
  unsigned int v54; // [rsp+18284h] [rbp+BF94h]
  unsigned int v55; // [rsp+18288h] [rbp+BF98h]
  _DWORD v56[64]; // [rsp+18290h] [rbp+BFA0h]
  __int64 v57; // [rsp+18390h] [rbp+C0A0h]

  v48 = a2;
  v47 = a1;
  v4 = a2;
  dword_140404A6C[73006987] = 1065353216;
  dword_140404A6C[73007012] = -1;
  v5 = a1;
  dword_140404A6C[73007015] = -1;
  dword_140404A6C[73007002] = -1;
  if ( (unsigned int)sub_1400D1830((unsigned __int64)&v43, a1, a2) && *(float *)&dword_140404A6C[73006987] > v46 )
  {
    *(_QWORD *)&dword_140404A6C[73006989] = 0;
    *(_OWORD *)&dword_140404A6C[73006981] = v43;
    dword_140404A6C[73006991] = 0;
    dword_140404A6C[73006985] = v44;
    dword_140404A6C[73006986] = v45;
    *(float *)&dword_140404A6C[73006987] = v46;
    dword_140404A6C[73007002] = -1;
  }
  v6 = &dword_140404A6C[111579637];
  for ( i = 0; i < 4; ++i )
  {
    if ( *v6
      && (unsigned int)sub_1400D6B60((float *)&v53, &v50, &v41, (unsigned int)i, v5, v4)
      && v41 < *(float *)&dword_140404A6C[73006987] )
    {
      dword_140404A6C[73006981] = v53;
      dword_140404A6C[73006982] = v54;
      dword_140404A6C[73006983] = v55;
      *(float *)&dword_140404A6C[73006984] = v50;
      dword_140404A6C[73006985] = v51;
      dword_140404A6C[73006986] = v52;
      *(float *)&dword_140404A6C[73006987] = v41;
      *(_QWORD *)&dword_140404A6C[73006989] = 0;
      dword_140404A6C[73006991] = 0;
      dword_140404A6C[73007002] = i;
    }
    v6 += 263004;
  }
  if ( a3 )
  {
    v8 = 0;
    v9 = &dword_140404A6C[433433164];
    do
    {
      if ( *(v9 - 7)
        && (unsigned int)sub_1400D8B70((float *)&v53, &v50, &v41, v8, v5, v4)
        && v41 < *(float *)&dword_140404A6C[73006987] )
      {
        dword_140404A6C[73006981] = v53;
        dword_140404A6C[73006983] = v55;
        dword_140404A6C[73006982] = v54;
        dword_140404A6C[73006985] = v51;
        v10 = *(v9 - 2);
        *(float *)&dword_140404A6C[73006984] = v50;
        dword_140404A6C[73006989] = v10;
        v11 = *v9;
        dword_140404A6C[73006986] = v52;
        v12 = *(v9 - 1);
        dword_140404A6C[73006991] = v11;
        dword_140404A6C[73006990] = v12;
        *(float *)&dword_140404A6C[73006987] = v41;
        dword_140404A6C[73007002] = -1;
      }
      ++v8;
      v9 += 21;
    }
    while ( v8 < 128 );
  }
  v13 = *v5;
  v14 = *v4;
  if ( *v5 >= *v4 )
  {
    v50 = *v5;
    v15 = v13;
  }
  else
  {
    v50 = *v4;
    v15 = v14;
  }
  v16 = fminf(v13, v14);
  v17 = v4[1];
  v18 = fmaxf(v4[2], v5[2]);
  v19 = fminf(v4[2], v5[2]);
  v53 = LODWORD(v16);
  v49[0] = 0;
  v20 = 0;
  v21 = fminf(v17, v5[1]);
  v22 = fmaxf(v17, v5[1]);
  v23 = (int)(float)(v16 * 0.015625);
  v49[24709] = 0;
  v55 = LODWORD(v19);
  v41 = *(float *)&v23;
  v24 = (int)(float)(v15 * 0.015625);
  v54 = LODWORD(v21);
  v42 = v24;
  v25 = (int)(float)(v19 * 0.015625);
  v26 = (int)(float)(v18 * 0.015625);
  v51 = LODWORD(v22);
  v52 = LODWORD(v18);
  if ( v25 <= v26 )
  {
    v27 = v25;
    v28 = 0;
    v29 = (__int64)v25 << 6;
    v30 = (unsigned int)(v26 - v25 + 1);
    do
    {
      if ( v27 <= 0x3F && v23 <= v24 )
      {
        v31 = v23;
        v32 = (unsigned int)(v24 - v23 + 1);
        do
        {
          if ( v31 <= 0x3F )
          {
            v33 = 0;
            v34 = (int)dword_140404A6C[9 * v29 + 254352099 + 9 * v31];
            if ( v34 > 0 )
            {
              do
              {
                if ( v28 < 64 )
                {
                  ++v20;
                  v56[v28++] = dword_140404A6C[8 * v29 + 254352100 + 8 * v31 + v29 + v31 + v33];
                }
                ++v33;
              }
              while ( v33 < v34 );
            }
          }
          ++v31;
          --v32;
        }
        while ( v32 );
        *(float *)&v23 = v41;
        v24 = v42;
      }
      ++v27;
      v29 += 64;
      --v30;
    }
    while ( v30 );
    v5 = v47;
    v4 = v48;
  }
  v35 = v20;
  if ( v20 > 0 )
  {
    v36 = 0;
    do
    {
      v37 = (int)v56[v36];
      v38 = 15432 * v37;
      if ( v15 >= *(float *)&dword_140404A6C[15432 * v37 + 358312926]
        && v22 >= *(float *)&dword_140404A6C[v38 + 358312927]
        && v18 >= *(float *)&dword_140404A6C[v38 + 358312928]
        && v16 <= *(float *)&dword_140404A6C[v38 + 358312929]
        && v21 <= *(float *)&dword_140404A6C[v38 + 358312930]
        && v19 <= *(float *)&dword_140404A6C[v38 + 358312931] )
      {
        sub_140188720(v49, (float *)&v53, &v50, v37, 2);
      }
      ++v36;
    }
    while ( v36 < v35 );
  }
  if ( sub_1400DA300((__int64)&v43, v49, v5, v4) && *(float *)&dword_140404A6C[73006987] > v46 )
  {
    *(_QWORD *)&dword_140404A6C[73006989] = 0;
    *(_OWORD *)&dword_140404A6C[73006981] = v43;
    dword_140404A6C[73006991] = 0;
    dword_140404A6C[73006985] = v44;
    dword_140404A6C[73006986] = v45;
    *(float *)&dword_140404A6C[73006987] = v46;
    dword_140404A6C[73007002] = -1;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v40 ^ v57);
}

