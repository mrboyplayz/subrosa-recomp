/* Address: 0x1401d29c0 | Name: sub_1401D29C0 | Size: 3467 bytes */
__int64 __fastcall sub_1401D29C0(__int64 a1, float *a2, __int64 a3, __int64 a4)
{
  float v4; // xmm0_4
  float v5; // xmm0_4
  int v6; // r8d
  float v7; // xmm1_4
  float v8; // xmm0_4
  __int64 v9; // rdx
  __int64 v10; // r8
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  __int64 v15; // [rsp+0h] [rbp-568h] BYREF
  int i; // [rsp+30h] [rbp-538h]
  float v17; // [rsp+34h] [rbp-534h]
  float v18; // [rsp+38h] [rbp-530h]
  float v19; // [rsp+3Ch] [rbp-52Ch]
  signed int v20; // [rsp+40h] [rbp-528h]
  float v21; // [rsp+44h] [rbp-524h]
  __int64 v22; // [rsp+48h] [rbp-520h]
  int v23; // [rsp+50h] [rbp-518h]
  float v24; // [rsp+54h] [rbp-514h]
  int v25; // [rsp+58h] [rbp-510h]
  unsigned int v26; // [rsp+5Ch] [rbp-50Ch]
  float v27; // [rsp+60h] [rbp-508h]
  float v28; // [rsp+64h] [rbp-504h]
  float v29; // [rsp+68h] [rbp-500h]
  float v30; // [rsp+6Ch] [rbp-4FCh]
  int v31; // [rsp+70h] [rbp-4F8h]
  float v32; // [rsp+74h] [rbp-4F4h]
  __int64 v33; // [rsp+78h] [rbp-4F0h]
  float v34; // [rsp+80h] [rbp-4E8h]
  float v35; // [rsp+84h] [rbp-4E4h]
  float v36; // [rsp+88h] [rbp-4E0h]
  float v37; // [rsp+8Ch] [rbp-4DCh]
  __int64 v38; // [rsp+90h] [rbp-4D8h]
  _DWORD *v39; // [rsp+98h] [rbp-4D0h]
  __int64 v40; // [rsp+A0h] [rbp-4C8h]
  float v41[28]; // [rsp+B0h] [rbp-4B8h] BYREF
  _BYTE v42[112]; // [rsp+120h] [rbp-448h] BYREF
  _DWORD v43[240]; // [rsp+190h] [rbp-3D8h] BYREF
  __int64 v44; // [rsp+550h] [rbp-18h]

  v22 = a1 + 7192;
  v33 = a4 - 4LL * *(int *)(a1 + 4600);
  v18 = (float)*(int *)(a1 + 4732) * 0.0078125;
  a2[174] = (float)(0.5 * (float)(*(_DWORD *)(a1 + 4716) + *(_DWORD *)(a1 + 4712))) * 0.000030517578;
  a2[175] = sub_1401D11A0(0.25 * (float)(v18 - 20.0));
  if ( !*(_DWORD *)(a1 + 4676) )
  {
    v17 = 1.0 - (float)((float)*(int *)(a1 + 4532) * 0.00390625);
    v18 = v18 - (float)((float)((float)((float)(2.0 * a2[175]) * (float)((float)(0.5 * a2[174]) + 0.5)) * v17) * v17);
  }
  if ( *(_BYTE *)(a1 + 4781) == 2 )
    v18 = v18 + (float)(2.0 * *(float *)(a1 + 10084));
  else
    v18 = v18
        + (float)((float)((float)((float)(-0.40000001 * (float)*(int *)(a1 + 4732)) * 0.0078125) + 6.0)
                * (float)(1.0 - a2[174]));
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    *(_BYTE *)(a1 + 4782) = 0;
  }
  else
  {
    v23 = 2 * *(_DWORD *)(a1 + 4576);
    v24 = 0.0;
    v30 = 0.0;
    v38 = a3;
    v31 = 5 * *(__int16 *)(a1 + 4580) / 2;
    for ( i = 0; i < v31; ++i )
    {
      v34 = (float)v23;
      v4 = sub_1401D1050(v38, v23);
      v27 = (float)v23 + v4;
      v29 = sub_1401D1340(v27);
      if ( i > 0 )
      {
        v5 = sub_140244390();
        v24 = v24 + v5;
      }
      v30 = v29;
      v38 += 4LL * v23;
    }
    *(_BYTE *)(a1 + 4782) = v24 <= (float)(0.60000002 * (float)(v31 - 1));
  }
  v19 = 0.001 * a2[176];
  v35 = 0.94 / (float)((float)(v19 * v19) + 1.0);
  v28 = (float)((float)*(int *)(a1 + 4672) / 65536.0) + (float)(0.0099999998 * a2[175]);
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
  {
    v25 = 3 * *(_DWORD *)(a1 + 4576);
    v26 = (*(_DWORD *)(a1 + 4604) - v25) / 2;
    sub_1401D5E90(v43, v33, 1, v26);
    v39 = &v43[v26];
    MEMORY[0x1401FC920](v39, v33 + 4LL * (int)v26);
    v20 = v25 + v26;
    sub_1401D5E90(&v43[v20], v33 + 4LL * v20, 2, v26);
    v33 += 4LL * *(int *)(a1 + 4588);
    if ( *(int *)(a1 + 4672) <= 0 )
      sub_1401CE540((__int64)v41, (__int64)v43, *(_DWORD *)(a1 + 4604), *(_DWORD *)(a1 + 4636) + 1);
    else
      sub_1401D3760((unsigned int)v41, (unsigned int)v43, v6, *(_DWORD *)(a1 + 4604), *(_DWORD *)(a1 + 4636));
    v41[0] = v41[0] + (float)((float)(v41[0] * 0.000029999999) + 1.0);
    v7 = v41[0];
    sub_1401CE180((__int64)v42, (__int64)v41, *(_DWORD *)(a1 + 4636));
    v27 = v7;
    sub_1401CE410((__int64)&a2[24 * i + 61], (__int64)v42, *(_DWORD *)(a1 + 4636));
    v8 = sqrt(v7);
    a2[i] = v8;
    if ( *(int *)(a1 + 4672) > 0 )
    {
      v40 = i;
      a2[i] = a2[i] * sub_1401DF980(&a2[24 * i + 61], a1, *(unsigned int *)(a1 + 4636));
    }
    sub_1401CDE70((__int64)&a2[24 * i + 61], *(_DWORD *)(a1 + 4636), v35);
    if ( *(int *)(a1 + 4672) <= 0 )
      sub_1401DFE10(&a2[24 * i + 61], v9, *(unsigned int *)(a1 + 4636));
    else
      sub_1401DFA30(&a2[24 * i + 61], v9, v10, *(unsigned int *)(a1 + 4636));
  }
  v11 = pow(2.0, (float)(-0.16 * v18));
  v36 = v11;
  v12 = pow(2.0, 0.3199999928474426);
  v37 = v12;
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
  {
    a2[i] = a2[i] * v36;
    a2[i] = a2[i] + v37;
  }
  v19 = (float)(4.0 * (float)((float)(0.5 * (float)((float)((float)*(int *)(a1 + 4712) * 0.000030517578) - 1.0)) + 1.0))
      * (float)((float)*(int *)(a1 + 4532) * 0.00390625);
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    {
      v17 = (float)(0.2 / (float)*(int *)(a1 + 4576)) + (float)(3.0 / (float)SLODWORD(a2[i + 57]));
      a2[i + 157] = v17 + -1.0;
      a2[i + 161] = (float)(1.0 - v17) - (float)(v17 * v19);
    }
    v32 = -0.25 - (float)((float)(0.26249999 * (float)*(int *)(a1 + 4532)) * 0.00390625);
  }
  else
  {
    v17 = 1.3 / (float)*(int *)(a1 + 4576);
    a2[157] = v17 + -1.0;
    a2[161] = (float)(1.0 - v17) - (float)((float)(v17 * v19) * 0.60000002);
    for ( i = 1; i < *(_DWORD *)(a1 + 4580); ++i )
    {
      a2[i + 157] = a2[157];
      a2[i + 161] = a2[161];
    }
    v32 = -0.25;
  }
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    v21 = 0.30000001;
    v21 = (float)(0.2 * (float)(1.0 - (float)((float)(1.0 - a2[175]) * a2[174]))) + 0.30000001;
    v13 = sqrt(*(float *)(a1 + 10084));
    v21 = v21 * v13;
  }
  else
  {
    v21 = 0.0;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
  {
    *(float *)(v22 + 4) = *(float *)(v22 + 4) + (float)(0.40000001 * (float)(v21 - *(float *)(v22 + 4)));
    a2[i + 169] = *(float *)(v22 + 4);
    *(float *)(v22 + 8) = *(float *)(v22 + 8) + (float)(0.40000001 * (float)(v32 - *(float *)(v22 + 8)));
    a2[i + 165] = *(float *)(v22 + 8);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v15 ^ v44);
}

