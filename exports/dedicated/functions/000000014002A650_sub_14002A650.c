/* Address: 0x14002a650 | Name: sub_14002A650 | Size: 630 bytes */
__int64 __fastcall sub_14002A650(float *a1, _DWORD *a2, float a3)
{
  unsigned int v4; // esi
  float v6; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  signed int v11; // ebx
  _DWORD *v12; // rdi
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  float v15; // [rsp+48h] [rbp-B8h]
  float v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+54h] [rbp-ACh]
  float v18; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v19; // [rsp+68h] [rbp-98h] BYREF
  int v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+7Ch] [rbp-84h]
  float v22; // [rsp+84h] [rbp-7Ch]
  _DWORD v23[18436]; // [rsp+90h] [rbp-70h] BYREF

  dword_16E18CA58 = 1065353216;
  dword_16E18CA5C = 1199570944;
  v4 = 0;
  dword_16E18CABC = -1;
  dword_16E18CAC8 = -1;
  v6 = *a1;
  v8 = a1[1];
  v9 = a1[2];
  v10 = *a1 - a3;
  v23[0] = 0;
  v23[8193] = 0;
  v23[16386] = 0;
  v16 = v10;
  *(float *)&v17 = v8 - a3;
  *(float *)&v14 = v6 + a3;
  *((float *)&v14 + 1) = v8 + a3;
  v15 = v9 + a3;
  *((float *)&v17 + 1) = v9 - a3;
  sub_1400790A0(v23, &v16, &v14);
  if ( sub_14002A2B0((float *)&v19, (__int64)v23, (int)a1, (__int64)a2, SLODWORD(a3))
    && *(float *)&dword_16E18CA5C > v22 )
  {
    dword_16E18CA58 = 0;
    unk_16E18CA40 = v19;
    dword_16E18CAA4 = 0;
    HIDWORD(qword_16E18CA4C) = v20;
    dword_16E18CA54 = v21;
    dword_16E18CA5C = LODWORD(v22);
    dword_16E18CA94 = 0;
  }
  v11 = 0;
  v12 = &unk_16CDE9EA0;
  do
  {
    if ( *v12 && sub_140028F30(&v16, (float *)&v14, &v18, v11, a1, a2, a3) && *(float *)&dword_16E18CA5C > v18 )
    {
      unk_16E18CA40 = LODWORD(v16);
      qword_16E18CA44 = v17;
      qword_16E18CA4C = v14;
      dword_16E18CA54 = LODWORD(v15);
      dword_16E18CA5C = LODWORD(v18);
      dword_16E18CA58 = 0;
      dword_16E18CAA4 = dword_16E18CAA8;
      dword_16E18CA94 = v11;
    }
    ++v11;
    v12 += 263004;
  }
  while ( v11 < 4 );
  LOBYTE(v4) = *(float *)&dword_16E18CA5C < 65536.0;
  return v4;
}

