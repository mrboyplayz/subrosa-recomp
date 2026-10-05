/* Address: 0x1401f68d0 | Name: sub_1401F68D0 | Size: 2938 bytes */
__int64 __fastcall sub_1401F68D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void (__fastcall *a10)(int *, __int64, __int64, _QWORD, int, int, _QWORD, int),
        int a11)
{
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  void *v14; // rsp
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  void *v17; // rsp
  unsigned __int64 v18; // rcx
  void *v19; // rsp
  int v20; // eax
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  int v27; // [rsp+38h] [rbp-8h]
  int k; // [rsp+40h] [rbp+0h] BYREF
  int j; // [rsp+44h] [rbp+4h]
  int v30; // [rsp+48h] [rbp+8h]
  int i; // [rsp+4Ch] [rbp+Ch]
  int v32; // [rsp+50h] [rbp+10h]
  int m; // [rsp+54h] [rbp+14h]
  int v34; // [rsp+58h] [rbp+18h]
  int *v35; // [rsp+60h] [rbp+20h]
  float v36; // [rsp+68h] [rbp+28h]
  int v37; // [rsp+6Ch] [rbp+2Ch]
  float v38; // [rsp+70h] [rbp+30h]
  float v39; // [rsp+74h] [rbp+34h]
  float v40; // [rsp+78h] [rbp+38h]
  int v41; // [rsp+7Ch] [rbp+3Ch]
  float *v42; // [rsp+80h] [rbp+40h]
  int v43; // [rsp+88h] [rbp+48h]
  int v44; // [rsp+8Ch] [rbp+4Ch]
  float v45; // [rsp+90h] [rbp+50h]
  int *v46; // [rsp+98h] [rbp+58h]
  __int64 v47; // [rsp+A0h] [rbp+60h]
  __int64 v48; // [rsp+A8h] [rbp+68h]
  __int64 v49; // [rsp+B0h] [rbp+70h]
  _DWORD *v50; // [rsp+B8h] [rbp+78h]
  _DWORD v51[72]; // [rsp+C0h] [rbp+80h] BYREF
  float v52[24]; // [rsp+1E0h] [rbp+1A0h] BYREF
  float v53[24]; // [rsp+240h] [rbp+200h] BYREF
  __int64 v54; // [rsp+2A0h] [rbp+260h]

  memset(v51, 0, 0x20u);
  v32 = sub_1401A0850(a9);
  v30 = v32 * a6;
  if ( v32 * a6 <= 960 )
    v37 = v30;
  else
    v37 = 960;
  v34 = v37;
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
  {
    v47 = a1;
    if ( *(_DWORD *)(a1 + 48) << i == v30 )
      break;
  }
  v12 = 4LL * (a7 + v30) + 15;
  if ( v12 <= 4LL * (a7 + v30) )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v14 = alloca(sub_1401F89D0(v12 & 0xFFFFFFFFFFFFFFF0uLL, v11));
  v35 = &k;
  v15 = 4LL * a6 + 15;
  if ( v15 <= 4LL * a6 )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v17 = alloca(sub_1401F89D0(v15 & 0xFFFFFFFFFFFFFFF0uLL, v13));
  v46 = &k;
  v18 = 4LL * v34 + 15;
  if ( v18 <= 4LL * v34 )
    v18 = 0xFFFFFFFFFFFFFF0LL;
  v19 = alloca(sub_1401F89D0(v18 & 0xFFFFFFFFFFFFFFF0uLL, v16));
  v42 = (float *)&k;
  sub_1401F6550((unsigned int)a8, v51);
  for ( j = 0; j < 3; ++j )
  {
    for ( k = 0; k < 21; ++k )
      v51[21 * j + 8 + k] = -1042284544;
  }
  for ( j = 0; j < a8; ++j )
  {
    v43 = v30 / v34;
    MEMORY[0x1401FC920](v35, a4 + 4LL * a7 * j);
    a10(v46, 1, a2, (unsigned int)a8, j, a6, 0, v27);
    sub_1401A08E0((__int64)v46, (__int64)&v35[a7], v30, 1, v32, (float *)(a1 + 16), (float *)(a5 + 4LL * j), 0);
    v36 = sub_1401A9C00((__int64)v35, (__int64)v35, a7 + v30);
    if ( v36 >= 9.9999998e17 )
    {
      MEMORY[0x1401FCD30](v35, 0, 4LL * (a7 + v30));
      *(_DWORD *)(a5 + 4LL * j) = 0;
    }
    MEMORY[0x1401FCD30](v52, 0, 84);
    for ( m = 0; m < v43; ++m )
    {
      v20 = *(_DWORD *)(a1 + 40) - i;
      v48 = a1 + 80;
      v27 = a11;
      sub_1401A1860(a1 + 80, (__int64)&v35[960 * m], v42, *(float **)(a1 + 72), a7, v20, 1);
      if ( v32 != 1 )
      {
        v44 = v34 / v32;
        for ( k = 0; k < v44; ++k )
          v42[k] = v42[k] * (float)v32;
        while ( k < v34 )
          v42[k++] = 0.0;
      }
      sub_1401A3450(a1, (__int64)v42, (__int64)v53, 21, 1u, i);
      for ( k = 0; k < 21; ++k )
      {
        if ( v52[k] <= v53[k] )
          v38 = v53[k];
        else
          v38 = v52[k];
        v52[k] = v38;
      }
    }
    sub_1401A6EA0(a1, 21, 21, (__int64)v52, a3 + 84LL * j, 1u);
    for ( k = 1; k < 21; ++k )
    {
      if ( *(float *)(a3 + 4LL * (k + 21 * j)) <= (float)(*(float *)(a3 + 4LL * (21 * j + k - 1)) - 1.0) )
        v39 = *(float *)(a3 + 4LL * (21 * j + k - 1)) - 1.0;
      else
        v39 = *(float *)(a3 + 4LL * (k + 21 * j));
      *(float *)(a3 + 4LL * (k + 21 * j)) = v39;
    }
    for ( k = 19; k >= 0; --k )
    {
      if ( *(float *)(a3 + 4LL * (k + 21 * j)) <= (float)(*(float *)(a3 + 4LL * (21 * j + k + 1)) - 2.0) )
        v40 = *(float *)(a3 + 4LL * (21 * j + k + 1)) - 2.0;
      else
        v40 = *(float *)(a3 + 4LL * (k + 21 * j));
      *(float *)(a3 + 4LL * (k + 21 * j)) = v40;
    }
    switch ( v51[j] )
    {
      case 1:
        for ( k = 0; k < 21; ++k )
        {
          v21 = sub_1401F67C0(*(float *)&v51[k + 8], *(float *)(a3 + 4LL * (k + 21 * j)));
          *(float *)&v51[k + 8] = v21;
        }
        break;
      case 3:
        for ( k = 0; k < 21; ++k )
        {
          v22 = sub_1401F67C0(*(float *)&v51[k + 50], *(float *)(a3 + 4LL * (k + 21 * j)));
          *(float *)&v51[k + 50] = v22;
        }
        break;
      case 2:
        for ( k = 0; k < 21; ++k )
        {
          v23 = sub_1401F67C0(*(float *)&v51[k + 8], *(float *)(a3 + 4LL * (k + 21 * j)) - 0.5);
          *(float *)&v51[k + 8] = v23;
          v24 = sub_1401F67C0(*(float *)&v51[k + 50], *(float *)(a3 + 4LL * (k + 21 * j)) - 0.5);
          *(float *)&v51[k + 50] = v24;
        }
        break;
    }
    v49 = a4 + 4LL * a7 * j;
    MEMORY[0x1401FC920](v49, &v35[v30]);
  }
  for ( k = 0; k < 21; ++k )
  {
    if ( *(float *)&v51[k + 50] <= *(float *)&v51[k + 8] )
      v41 = v51[k + 50];
    else
      v41 = v51[k + 8];
    v51[k + 29] = v41;
  }
  v25 = 1.442695040888963 * log((float)(2.0 / (float)(a8 - 1)));
  v45 = 0.5 * v25;
  for ( j = 0; j < 3; ++j )
  {
    for ( k = 0; k < 21; ++k )
      *(float *)&v51[21 * j + 8 + k] = *(float *)&v51[21 * j + 8 + k] + v45;
  }
  for ( j = 0; j < a8; ++j )
  {
    if ( v51[j] )
    {
      v50 = &v51[21 * v51[j] - 13];
      for ( k = 0; k < 21; ++k )
        *(float *)(a3 + 4LL * (k + 21 * j)) = *(float *)(a3 + 4LL * (k + 21 * j)) - *(float *)&v50[k];
    }
    else
    {
      for ( k = 0; k < 21; ++k )
        *(_DWORD *)(a3 + 4LL * (k + 21 * j)) = 0;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&k ^ v54);
}

