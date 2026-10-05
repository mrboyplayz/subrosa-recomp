/* Address: 0x140024670 | Name: sub_140024670 | Size: 909 bytes */
__int64 __fastcall sub_140024670(float *a1, float *a2, float a3)
{
  unsigned int v4; // r15d
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm12_4
  float v10; // xmm2_4
  float v11; // xmm8_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm10_4
  float v15; // xmm9_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm7_4
  float v19; // xmm5_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  signed int v23; // ebx
  _DWORD *v24; // rdi
  float v26; // [rsp+40h] [rbp-C0h] BYREF
  float v27; // [rsp+44h] [rbp-BCh]
  float v28; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  float v30; // [rsp+58h] [rbp-A8h]
  float v31; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+68h] [rbp-98h] BYREF
  int v33; // [rsp+78h] [rbp-88h]
  int v34; // [rsp+7Ch] [rbp-84h]
  float v35; // [rsp+84h] [rbp-7Ch]
  _DWORD v36[18436]; // [rsp+90h] [rbp-70h] BYREF

  dword_16E18CA58 = 1065353216;
  v4 = 0;
  dword_16E18CA5C = 1199570944;
  dword_16E18CABC = -1;
  dword_16E18CAC8 = -1;
  v7 = a1[1];
  v8 = a1[2];
  v9 = *a1 - a3;
  v10 = *a2;
  v11 = *a1 + a3;
  v12 = a2[1];
  v13 = a2[2];
  v14 = v7 - a3;
  v36[0] = 0;
  v29 = __PAIR64__(v7 - a3, LODWORD(v9));
  v26 = v11;
  v15 = v8 - a3;
  v36[8193] = 0;
  v16 = v7 + a3;
  v17 = v8 + a3;
  v36[16386] = 0;
  v30 = v15;
  v18 = v12 - a3;
  v27 = v16;
  v19 = v13 - a3;
  v28 = v17;
  if ( v9 > (float)(v10 - a3) )
  {
    *(float *)&v29 = v10 - a3;
    v9 = v10 - a3;
  }
  if ( v14 > v18 )
  {
    *((float *)&v29 + 1) = v12 - a3;
    v14 = v12 - a3;
  }
  if ( v15 > v19 )
  {
    v30 = v13 - a3;
    v15 = v13 - a3;
  }
  if ( v11 < (float)(v10 - a3) )
  {
    v26 = v10 - a3;
    v11 = v10 - a3;
  }
  if ( v16 < v18 )
  {
    v27 = v12 - a3;
    v16 = v12 - a3;
  }
  if ( v17 < v19 )
  {
    v28 = v13 - a3;
    v17 = v13 - a3;
  }
  v20 = v10 + a3;
  v21 = v12 + a3;
  v22 = v13 + a3;
  if ( v9 > v20 )
    *(float *)&v29 = v20;
  if ( v14 > v21 )
    *((float *)&v29 + 1) = v21;
  if ( v15 > v22 )
    v30 = v22;
  if ( v11 < v20 )
    v26 = v20;
  if ( v16 < v21 )
    v27 = v21;
  if ( v17 < v22 )
    v28 = v22;
  sub_1400790A0(v36, &v29, &v26);
  if ( sub_140023E40((float *)&v32, (__int64)v36, (int)a1, (__int64)a2, SLODWORD(a3))
    && *(float *)&dword_16E18CA5C > v35 )
  {
    dword_16E18CA94 = 0;
    xmmword_16E18CA40 = v32;
    dword_16E18CA50 = v33;
    dword_16E18CA54 = v34;
    dword_16E18CA5C = LODWORD(v35);
  }
  v23 = 0;
  v24 = &unk_16CDE9EA0;
  do
  {
    if ( *v24 && sub_140021BC0((float *)&v29, &v26, &v31, v23, a1, a2, a3) && *(float *)&dword_16E18CA5C > v31 )
    {
      *(_QWORD *)&xmmword_16E18CA40 = v29;
      *((float *)&xmmword_16E18CA40 + 2) = v30;
      *((float *)&xmmword_16E18CA40 + 3) = v26;
      dword_16E18CA50 = LODWORD(v27);
      dword_16E18CA54 = LODWORD(v28);
      dword_16E18CA5C = LODWORD(v31);
      dword_16E18CA94 = v23;
    }
    ++v23;
    v24 += 263004;
  }
  while ( v23 < 4 );
  LOBYTE(v4) = *(float *)&dword_16E18CA5C < 65536.0;
  return v4;
}

