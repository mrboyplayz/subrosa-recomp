/* Address: 0x1401b0380 | Name: sub_1401B0380 | Size: 2305 bytes */
__int64 __fastcall sub_1401B0380(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        int a6,
        int a7,
        __int64 a8,
        float *a9,
        float a10,
        int a11,
        float a12,
        int a13)
{
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  int i; // [rsp+20h] [rbp-98h]
  int j; // [rsp+20h] [rbp-98h]
  int k; // [rsp+20h] [rbp-98h]
  float v27; // [rsp+24h] [rbp-94h]
  float v28; // [rsp+24h] [rbp-94h]
  float v29; // [rsp+28h] [rbp-90h]
  float v30; // [rsp+2Ch] [rbp-8Ch]
  float v31; // [rsp+30h] [rbp-88h]
  float v32; // [rsp+30h] [rbp-88h]
  int v33; // [rsp+34h] [rbp-84h]
  float v34; // [rsp+38h] [rbp-80h]
  int v35; // [rsp+3Ch] [rbp-7Ch]
  float v36; // [rsp+40h] [rbp-78h]
  float v37; // [rsp+48h] [rbp-70h]
  float v38; // [rsp+4Ch] [rbp-6Ch]
  float v39; // [rsp+50h] [rbp-68h]
  float v40; // [rsp+54h] [rbp-64h]
  float v41; // [rsp+60h] [rbp-58h]
  float v42; // [rsp+64h] [rbp-54h]
  float v43; // [rsp+68h] [rbp-50h]
  float v44; // [rsp+6Ch] [rbp-4Ch]
  float v45; // [rsp+70h] [rbp-48h]
  float v46; // [rsp+74h] [rbp-44h]
  int v47; // [rsp+78h] [rbp-40h]
  float v50; // [rsp+94h] [rbp-24h]

  v31 = 0.0;
  v27 = 5.0;
  if ( a13 >= 64000 )
  {
    if ( a13 < 80000 )
      v27 = (float)(0.0625 * (float)((a13 - 64000) >> 10)) + 4.0;
  }
  else
  {
    v27 = 4.0;
  }
  if ( a6 == 2 )
  {
    v29 = 0.0;
    for ( i = 0; i < 8; ++i )
      v29 = v29
          + sub_1401A9C00(
              a2 + 4LL * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) << a5),
              a2 + 4LL * ((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) << a5) + a7),
              (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i)) << a5);
    v13 = sub_140244390();
    if ( v13 <= 1.0 )
    {
      v14 = sub_140244390();
      v36 = v14;
    }
    else
    {
      v36 = 1.0;
    }
    v30 = v36;
    for ( j = 8; j < a11; ++j )
    {
      sub_1401A9C00(
        a2 + 4LL * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) << a5),
        a2 + 4LL * ((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) << a5) + a7),
        (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (j + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j)) << a5);
      v15 = sub_140244390();
      if ( v15 <= v30 )
      {
        v16 = sub_140244390();
        v37 = v16;
      }
      else
      {
        v37 = v30;
      }
      v30 = v37;
    }
    v17 = sub_140244390();
    if ( v17 <= 1.0 )
    {
      v18 = sub_140244390();
      v38 = v18;
    }
    else
    {
      v38 = 1.0;
    }
    v19 = 1.442695040888963 * log((float)(1.001 - (float)(v36 * v36)));
    v34 = v19;
    v50 = 0.5 * v19;
    v20 = 1.442695040888963 * log((float)(1.001 - (float)(v38 * v38)));
    if ( v50 <= v20 )
    {
      v21 = 1.442695040888963 * log((float)(1.001 - (float)(v38 * v38)));
      v39 = v21;
    }
    else
    {
      v39 = 0.5 * v34;
    }
    if ( (float)(0.75 * v34) >= -4.0 )
      v40 = 0.75 * v34;
    else
      v40 = -4.0;
    v27 = v27 + v40;
    if ( (float)-(float)(0.5 * v39) <= (float)(*a9 + 0.25) )
      v22 = -(float)(0.5 * v39);
    else
      v22 = *a9 + 0.25;
    *a9 = v22;
  }
  v35 = 0;
  do
  {
    for ( k = 0; k < a4 - 1; ++k )
      v31 = v31 + (float)(*(float *)(a3 + 4LL * (*(_DWORD *)(a1 + 8) * v35 + k)) * (float)(2 * k + 2 - a4));
    ++v35;
  }
  while ( v35 < a6 );
  v32 = v31 / (float)((a4 - 1) * a6);
  if ( (float)((float)(v32 + 1.0) / 6.0) <= 2.0 )
    v41 = (float)(v32 + 1.0) / 6.0;
  else
    v41 = 2.0;
  if ( v41 >= -2.0 )
  {
    if ( (float)((float)(v32 + 1.0) / 6.0) <= 2.0 )
      v42 = (float)(v32 + 1.0) / 6.0;
    else
      v42 = 2.0;
    v43 = v42;
  }
  else
  {
    v43 = -2.0;
  }
  v28 = (float)((float)(v27 - v43) - a12) - (float)(2.0 * a10);
  if ( *(_DWORD *)a8 )
  {
    if ( (float)(2.0 * (float)(*(float *)(a8 + 8) + 0.050000001)) <= 2.0 )
      v44 = 2.0 * (float)(*(float *)(a8 + 8) + 0.050000001);
    else
      v44 = 2.0;
    if ( v44 >= -2.0 )
    {
      if ( (float)(2.0 * (float)(*(float *)(a8 + 8) + 0.050000001)) <= 2.0 )
        v45 = 2.0 * (float)(*(float *)(a8 + 8) + 0.050000001);
      else
        v45 = 2.0;
      v46 = v45;
    }
    else
    {
      v46 = -2.0;
    }
    v28 = v28 - v46;
  }
  v33 = (int)floor((float)(v28 + 0.5));
  if ( v33 <= 10 )
    v47 = v33;
  else
    v47 = 10;
  if ( v47 >= 0 )
  {
    if ( v33 <= 10 )
      return (unsigned int)v33;
    else
      return 10;
  }
  else
  {
    return 0;
  }
}

