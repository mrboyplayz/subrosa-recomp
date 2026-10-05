/* Address: 0x140033fe0 | Name: sub_140033FE0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_140033FE0(float *a1, float *a2, float a3)
{
  float v6; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm12_4
  float v9; // xmm2_4
  float v10; // xmm8_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm10_4
  float v14; // xmm9_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm7_4
  float v18; // xmm5_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  signed int v22; // ebx
  unsigned int *v23; // rdi
  __int64 v25; // [rsp-20h] [rbp-12220h] BYREF
  float v26; // [rsp+20h] [rbp-121E0h] BYREF
  float v27; // [rsp+24h] [rbp-121DCh]
  float v28; // [rsp+28h] [rbp-121D8h]
  float v29; // [rsp+30h] [rbp-121D0h] BYREF
  float v30; // [rsp+34h] [rbp-121CCh]
  float v31; // [rsp+38h] [rbp-121C8h]
  float v32; // [rsp+40h] [rbp-121C0h] BYREF
  __int128 v33; // [rsp+48h] [rbp-121B8h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-121A8h]
  unsigned int v35; // [rsp+5Ch] [rbp-121A4h]
  float v36; // [rsp+12184h] [rbp-7Ch]
  int v37[18436]; // [rsp+12190h] [rbp-70h] BYREF
  __int64 v38; // [rsp+241A0h] [rbp+11FA0h]

  dword_140404A6C[73006987] = 1065353216;
  dword_140404A6C[73006988] = 1199570944;
  dword_140404A6C[73007012] = -1;
  dword_140404A6C[73007015] = -1;
  v6 = a1[1];
  v7 = a1[2];
  v8 = *a1 - a3;
  v9 = *a2;
  v10 = *a1 + a3;
  v11 = a2[1];
  v12 = a2[2];
  v13 = v6 - a3;
  v37[0] = 0;
  v29 = v8;
  v26 = v10;
  v14 = v7 - a3;
  v37[8193] = 0;
  v15 = v6 + a3;
  v30 = v13;
  v16 = v7 + a3;
  v37[16386] = 0;
  v31 = v14;
  v17 = v11 - a3;
  v27 = v15;
  v18 = v12 - a3;
  v28 = v16;
  if ( v8 > (float)(v9 - a3) )
  {
    v29 = v9 - a3;
    v8 = v9 - a3;
  }
  if ( v13 > v17 )
  {
    v30 = v11 - a3;
    v13 = v11 - a3;
  }
  if ( v14 > v18 )
  {
    v31 = v12 - a3;
    v14 = v12 - a3;
  }
  if ( v10 < (float)(v9 - a3) )
  {
    v26 = v9 - a3;
    v10 = v9 - a3;
  }
  if ( v15 < v17 )
  {
    v27 = v11 - a3;
    v15 = v11 - a3;
  }
  if ( v16 < v18 )
  {
    v28 = v12 - a3;
    v16 = v12 - a3;
  }
  v19 = v9 + a3;
  v20 = v11 + a3;
  v21 = v12 + a3;
  if ( v8 > v19 )
    v29 = v19;
  if ( v13 > v20 )
    v30 = v20;
  if ( v14 > v21 )
    v31 = v21;
  if ( v10 < v19 )
    v26 = v19;
  if ( v15 < v20 )
    v27 = v20;
  if ( v16 < v21 )
    v28 = v21;
  sub_1400D05B0(v37, &v29, &v26);
  if ( sub_1400337B0((float *)&v33, (__int64)v37, a1, a2, SLODWORD(a3)) && *(float *)&dword_140404A6C[73006988] > v36 )
  {
    dword_140404A6C[73007002] = 0;
    *(_OWORD *)&dword_140404A6C[73006981] = v33;
    dword_140404A6C[73006985] = v34;
    dword_140404A6C[73006986] = v35;
    *(float *)&dword_140404A6C[73006988] = v36;
  }
  v22 = 0;
  v23 = &dword_140404A6C[111579637];
  do
  {
    if ( *v23
      && (unsigned int)sub_140031530(&v29, &v26, &v32, v22, a1, a2, a3)
      && *(float *)&dword_140404A6C[73006988] > v32 )
    {
      *(float *)&dword_140404A6C[73006981] = v29;
      *(float *)&dword_140404A6C[73006982] = v30;
      *(float *)&dword_140404A6C[73006983] = v31;
      *(float *)&dword_140404A6C[73006984] = v26;
      *(float *)&dword_140404A6C[73006985] = v27;
      *(float *)&dword_140404A6C[73006986] = v28;
      *(float *)&dword_140404A6C[73006988] = v32;
      dword_140404A6C[73007002] = v22;
    }
    ++v22;
    v23 += 263004;
  }
  while ( v22 < 4 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v25 ^ v38);
}

