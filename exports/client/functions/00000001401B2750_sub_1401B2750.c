/* Address: 0x1401b2750 | Name: sub_1401B2750 | Size: 2889 bytes */
__int64 __fastcall sub_1401B2750(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        float *a8,
        int *a9,
        int a10,
        int a11,
        __int64 a12)
{
  void *v12; // rsp
  void *v13; // rsp
  float v14; // xmm0_4
  int v15; // eax
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v22; // [rsp+60h] [rbp+0h] BYREF
  int v23; // [rsp+64h] [rbp+4h]
  float v24; // [rsp+68h] [rbp+8h]
  float v25; // [rsp+6Ch] [rbp+Ch]
  int v26; // [rsp+70h] [rbp+10h] BYREF
  int v27; // [rsp+74h] [rbp+14h]
  int v28; // [rsp+78h] [rbp+18h]
  _QWORD v29[2]; // [rsp+80h] [rbp+20h] BYREF
  float v30; // [rsp+90h] [rbp+30h]
  int v31; // [rsp+94h] [rbp+34h]
  int v32; // [rsp+98h] [rbp+38h]
  int v33; // [rsp+9Ch] [rbp+3Ch]
  int v34; // [rsp+A0h] [rbp+40h]
  int v35; // [rsp+A4h] [rbp+44h]
  int *v36; // [rsp+A8h] [rbp+48h]
  __int64 v37; // [rsp+B0h] [rbp+50h]
  int *v38; // [rsp+B8h] [rbp+58h]
  __int64 v39; // [rsp+C0h] [rbp+60h]
  __int64 v40; // [rsp+C8h] [rbp+68h]
  __int64 v41; // [rsp+D0h] [rbp+70h]
  __int64 v42; // [rsp+D8h] [rbp+78h]
  __int64 v43; // [rsp+E0h] [rbp+80h]
  __int64 v44; // [rsp+E8h] [rbp+88h]
  __int64 v45; // [rsp+F0h] [rbp+90h]
  __int64 v46; // [rsp+F8h] [rbp+98h]
  __int64 v47; // [rsp+100h] [rbp+A0h]

  v37 = *a1;
  v23 = *(_DWORD *)(v37 + 4);
  v12 = alloca(sub_1401F89D0());
  v38 = &v22;
  v29[0] = &v22;
  v29[1] = &v22 + a5 + 1024;
  v22 = 0;
  do
  {
    v39 = v22;
    MEMORY[0x1401FC920](v29[v22], a3 + 4LL * (v22 << 10));
    v40 = v29[v22] + 4096LL;
    MEMORY[0x1401FC920](v40, a2 + 4LL * (v23 + a5) * v22++ + 4LL * v23);
  }
  while ( v22 < a4 );
  if ( a10 )
  {
    v13 = alloca(sub_1401F89D0());
    v36 = &v22;
    sub_1401A8190(v29, (float *)&v22, a5 + 1024, a4, *((_DWORD *)a1 + 19));
    sub_1401A8740((__int64)(v36 + 512), (__int64)v36, a5, 979, &v26);
    v26 = 1024 - v26;
    v14 = *((float *)a1 + 28);
    sub_1401A8B30((__int64)v36, 1024, 15, a5, &v26, *((_DWORD *)a1 + 27), v14);
    v24 = v14;
    if ( v26 > 1022 )
      v26 = 1022;
    v24 = 0.69999999 * v24;
    if ( *((int *)a1 + 15) > 2 )
      v24 = 0.5 * v24;
    if ( *((int *)a1 + 15) > 4 )
      v24 = 0.5 * v24;
    if ( *((int *)a1 + 15) > 8 )
      v24 = 0.0;
  }
  else
  {
    v24 = 0.0;
    v26 = 15;
  }
  if ( *(_DWORD *)a12 )
    v24 = v24 * *(float *)(a12 + 40);
  v25 = 0.2;
  v15 = abs(v26 - *((_DWORD *)a1 + 27));
  if ( 10 * v15 > v26 )
    v25 = v25 + 0.2;
  if ( a11 < 25 )
    v25 = v25 + 0.1;
  if ( a11 < 35 )
    v25 = v25 + 0.1;
  if ( *((float *)a1 + 28) > 0.40000001 )
    v25 = v25 - 0.1;
  if ( *((float *)a1 + 28) > 0.55000001 )
    v25 = v25 - 0.1;
  if ( v25 <= 0.2 )
    v30 = 0.2;
  else
    v30 = v25;
  v25 = v30;
  if ( v30 <= v24 )
  {
    v16 = sub_140244390();
    if ( v16 < 0.1 )
      v24 = *((float *)a1 + 28);
    v27 = (int)floor((float)((float)((float)(v24 * 32.0) / 3.0) + 0.5)) - 1;
    if ( v27 <= 7 )
      v31 = v27;
    else
      v31 = 7;
    if ( v31 >= 0 )
    {
      if ( v27 <= 7 )
        v32 = v27;
      else
        v32 = 7;
      v33 = v32;
    }
    else
    {
      v33 = 0;
    }
    v27 = v33;
    v24 = 0.09375 * (float)(v33 + 1);
    v35 = 1;
  }
  else
  {
    v24 = 0.0;
    v35 = 0;
    v27 = 0;
  }
  v22 = 0;
  do
  {
    v28 = *(_DWORD *)(v37 + 48) - v23;
    if ( *((int *)a1 + 27) <= 15 )
      v34 = 15;
    else
      v34 = *((_DWORD *)a1 + 27);
    *((_DWORD *)a1 + 27) = v34;
    v41 = a2 + 4LL * (v23 + a5) * v22;
    MEMORY[0x1401FC920](v41, (char *)a1 + 4 * v23 * v22 + 252);
    if ( v28 )
      sub_1401A0C20(
        a2 + 4LL * (v23 + a5) * v22 + 4LL * v23,
        v29[v22] + 4096LL,
        *((_DWORD *)a1 + 27),
        *((_DWORD *)a1 + 27),
        v28,
        -*((float *)a1 + 28),
        -*((float *)a1 + 28),
        *((_DWORD *)a1 + 29),
        *((_DWORD *)a1 + 29),
        0,
        0);
    v17 = -*((float *)a1 + 28);
    v18 = v29[v22] + 4LL * v28 + 4096;
    v42 = a2 + 4LL * (v23 + a5) * v22 + 4LL * v23 + 4LL * v28;
    sub_1401A0C20(
      v42,
      v18,
      *((_DWORD *)a1 + 27),
      v26,
      a5 - v28,
      v17,
      -v24,
      *((_DWORD *)a1 + 29),
      a6,
      *(_QWORD *)(v37 + 72),
      v23);
    v43 = (__int64)a1 + 4 * v23 * v22 + 252;
    MEMORY[0x1401FC920](v43, a2 + 4LL * (v23 + a5) * v22 + 4LL * a5);
    if ( a5 <= 1024 )
    {
      v45 = a3 + 4LL * (v22 << 10);
      MEMORY[0x1401FC920](v45, v45 + 4LL * a5);
      v20 = v29[v22] + 4096LL;
      v46 = a3 + 4LL * (v22 << 10) + 4096 - 4LL * a5;
      MEMORY[0x1401FC920](v46, v20);
    }
    else
    {
      v19 = v29[v22] + 4LL * a5;
      v44 = a3 + 4LL * (v22 << 10);
      MEMORY[0x1401FC920](v44, v19);
    }
    ++v22;
  }
  while ( v22 < a4 );
  *a8 = v24;
  *a7 = v26;
  *a9 = v27;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v22 ^ v47);
}

