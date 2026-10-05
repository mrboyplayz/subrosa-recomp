/* Address: 0x1401e0340 | Name: sub_1401E0340 | Size: 938 bytes */
__int64 __fastcall sub_1401E0340(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  float v6; // xmm0_4
  float v7; // xmm0_4
  __int64 v9; // [rsp+0h] [rbp-E8h] BYREF
  int j; // [rsp+20h] [rbp-C8h]
  int i; // [rsp+24h] [rbp-C4h]
  int v12; // [rsp+28h] [rbp-C0h]
  int k; // [rsp+2Ch] [rbp-BCh]
  double v14; // [rsp+30h] [rbp-B8h]
  int v15; // [rsp+38h] [rbp-B0h]
  int v16; // [rsp+3Ch] [rbp-ACh]
  __int64 v17; // [rsp+40h] [rbp-A8h]
  char *v18; // [rsp+48h] [rbp-A0h]
  int v19; // [rsp+50h] [rbp-98h]
  int v20; // [rsp+54h] [rbp-94h]
  int v21; // [rsp+58h] [rbp-90h]
  __int64 v22; // [rsp+60h] [rbp-88h]
  char *v23; // [rsp+68h] [rbp-80h]
  float v24[24]; // [rsp+70h] [rbp-78h]
  __int64 v25; // [rsp+D0h] [rbp-18h]

  if ( a5 == 4 )
  {
    v18 = (char *)&unk_14027CB98 + 8 * a6;
    v23 = (char *)&unk_14027E2C0;
    v15 = byte_14027BB84[a6];
    v16 = 34;
  }
  else
  {
    v18 = (char *)&unk_14027BB94;
    v23 = (char *)&unk_14027CC28;
    v15 = 12;
    v16 = 12;
  }
  v22 = a2 + 16LL * a4;
  for ( i = 0; i < a5; ++i )
  {
    v12 = 0;
    v17 = v22 - 4LL * (v18[2 * i] + a3);
    v14 = sub_1401D1050(v17, a4) + 0.001;
    v6 = v14;
    v24[0] = v6;
    v12 = 1;
    v19 = v18[2 * i + 1] - v18[2 * i] + 1;
    for ( j = 1; j < v19; ++j )
    {
      v14 = v14
          - *(float *)(v17 + 4LL * (a4 - j)) * *(float *)(v17 + 4LL * (a4 - j))
          + *(float *)(v17 + 4LL * -j) * *(float *)(v17 + 4LL * -j);
      v7 = v14;
      v24[v12++] = v7;
    }
    v20 = v18[2 * i];
    for ( j = 0; j < v15; ++j )
    {
      v21 = v23[j + v16 * i] - v20;
      for ( k = 0; k < 5; ++k )
        *(float *)(20LL * j + 680LL * i + a1 + 4LL * k) = v24[k + v21];
    }
    v22 += 4LL * a4;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v25);
}

