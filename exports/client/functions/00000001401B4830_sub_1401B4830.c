/* Address: 0x1401b4830 | Name: sub_1401B4830 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_1401B4830(__int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // rcx
  void *v4; // rsp
  const __m128i *v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  void *v8; // rsp
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  float v11; // xmm0_4
  float v12; // xmm0_4
  _BYTE v14[8304]; // [rsp+50h] [rbp-20C0h] BYREF
  int v15; // [rsp+2100h] [rbp-10h]
  int i; // [rsp+2110h] [rbp+0h] BYREF
  int j; // [rsp+2114h] [rbp+4h]
  int v18; // [rsp+2118h] [rbp+8h]
  int v19; // [rsp+211Ch] [rbp+Ch]
  __m128i *v20; // [rsp+2120h] [rbp+10h]
  int v21; // [rsp+2128h] [rbp+18h]
  int v22; // [rsp+212Ch] [rbp+1Ch]
  signed int v23; // [rsp+2130h] [rbp+20h]
  int v24; // [rsp+2134h] [rbp+24h]
  int v25; // [rsp+2138h] [rbp+28h]
  float v26; // [rsp+213Ch] [rbp+2Ch]
  int v27; // [rsp+2140h] [rbp+30h]
  float v28; // [rsp+2144h] [rbp+34h]
  float v29; // [rsp+2148h] [rbp+38h]
  float v30; // [rsp+214Ch] [rbp+3Ch]
  float v31; // [rsp+2150h] [rbp+40h]
  signed int v32; // [rsp+2154h] [rbp+44h]
  int v33; // [rsp+2158h] [rbp+48h]
  int k; // [rsp+215Ch] [rbp+4Ch]
  int v35; // [rsp+2160h] [rbp+50h]
  __int64 v36; // [rsp+2168h] [rbp+58h]
  float *v37; // [rsp+2170h] [rbp+60h]
  signed int v38; // [rsp+2178h] [rbp+68h]
  float v39; // [rsp+217Ch] [rbp+6Ch]
  int v40; // [rsp+2180h] [rbp+70h]
  int v41; // [rsp+2184h] [rbp+74h]
  float v42; // [rsp+2188h] [rbp+78h]
  float v43; // [rsp+218Ch] [rbp+7Ch]
  int v44; // [rsp+2190h] [rbp+80h]
  int v45; // [rsp+2194h] [rbp+84h]
  int v46; // [rsp+2198h] [rbp+88h]
  int v47; // [rsp+219Ch] [rbp+8Ch]
  float v48; // [rsp+21A0h] [rbp+90h]
  float v49; // [rsp+21A4h] [rbp+94h]
  float v50; // [rsp+21A8h] [rbp+98h]
  int v51; // [rsp+21ACh] [rbp+9Ch]
  float v52; // [rsp+21B0h] [rbp+A0h]
  float v53; // [rsp+21B4h] [rbp+A4h]
  float v54; // [rsp+21B8h] [rbp+A8h]
  BOOL v55; // [rsp+21BCh] [rbp+ACh]
  int v56; // [rsp+21C0h] [rbp+B0h]
  int v57; // [rsp+21C4h] [rbp+B4h]
  __int64 v58; // [rsp+21C8h] [rbp+B8h]
  __int64 v59; // [rsp+21D0h] [rbp+C0h]
  __int64 v60; // [rsp+21D8h] [rbp+C8h]
  int v61; // [rsp+21E0h] [rbp+D0h]
  float v62; // [rsp+21E4h] [rbp+D4h]
  BOOL v63; // [rsp+21E8h] [rbp+D8h]
  __int64 v64; // [rsp+21F0h] [rbp+E0h]
  int *v65; // [rsp+21F8h] [rbp+E8h]
  const __m128i *v66; // [rsp+2200h] [rbp+F0h]
  __m128i *p_i; // [rsp+2208h] [rbp+F8h]
  _QWORD v68[2]; // [rsp+2210h] [rbp+100h] BYREF
  __int64 v69; // [rsp+2220h] [rbp+110h]
  __int64 v70; // [rsp+2228h] [rbp+118h]
  __int64 v71; // [rsp+2230h] [rbp+120h]
  __int64 v72; // [rsp+2238h] [rbp+128h]
  _BYTE *v73; // [rsp+2240h] [rbp+130h]
  __int64 v74; // [rsp+2248h] [rbp+138h]
  _QWORD v75[2]; // [rsp+2250h] [rbp+140h] BYREF
  float v76[28]; // [rsp+2260h] [rbp+150h] BYREF
  _DWORD v77[24]; // [rsp+22D0h] [rbp+1C0h] BYREF
  __int64 v78; // [rsp+2330h] [rbp+220h]

  v19 = *(_DWORD *)(a1 + 12);
  v36 = *(_QWORD *)a1;
  v21 = *(_DWORD *)(v36 + 8);
  v18 = *(_DWORD *)(v36 + 4);
  v64 = *(_QWORD *)(v36 + 32);
  j = 0;
  do
  {
    v68[j] = a1 + 4LL * (v18 + 2048) * j + 96;
    v75[j] = v68[j] + 0x2000LL - 4LL * a2;
    ++j;
  }
  while ( j < v19 );
  v59 = a1 + 4LL * v19 * (v18 + 2048) + 96;
  v58 = v59 + 96LL * v19;
  v70 = v58 + 8LL * v21;
  v71 = v70 + 8LL * v21;
  v69 = v71 + 8LL * v21;
  v33 = *(_DWORD *)(a1 + 56);
  v25 = *(_DWORD *)(a1 + 24);
  v55 = v33 >= 5 || v25 || *(_DWORD *)(a1 + 60);
  v63 = v55;
  if ( v55 )
  {
    v27 = *(_DWORD *)(a1 + 28);
    if ( v27 >= *(_DWORD *)(v36 + 12) )
      v56 = *(_DWORD *)(v36 + 12);
    else
      v56 = v27;
    if ( v25 <= v56 )
    {
      if ( v27 >= *(_DWORD *)(v36 + 12) )
        v57 = *(_DWORD *)(v36 + 12);
      else
        v57 = v27;
      v40 = v57;
    }
    else
    {
      v40 = v25;
    }
    v46 = v40;
    v3 = 4LL * a2 * v19 + 15;
    if ( v3 <= 4LL * a2 * v19 )
      v3 = 0xFFFFFFFFFFFFFF0LL;
    v4 = alloca(v3 & 0xFFFFFFFFFFFFFFF0uLL);
    v65 = &i;
    if ( v33 )
      v41 = 1056964608;
    else
      v41 = 1069547520;
    v42 = *(float *)&v41;
    j = 0;
    do
    {
      for ( i = v25; i < v27; ++i )
      {
        if ( *(float *)(v69 + 4LL * (i + v21 * j)) <= (float)(*(float *)(v58 + 4LL * (i + v21 * j)) - v42) )
          v43 = *(float *)(v58 + 4LL * (i + v21 * j)) - v42;
        else
          v43 = *(float *)(v69 + 4LL * (i + v21 * j));
        *(float *)(v58 + 4LL * (i + v21 * j)) = v43;
      }
      ++j;
    }
    while ( j < v19 );
    v35 = *(_DWORD *)(a1 + 44);
    for ( j = 0; j < v19; ++j )
    {
      for ( i = v25; i < v46; ++i )
      {
        v61 = *(__int16 *)(v64 + 2LL * i);
        v44 = (v61 << a3) + j * a2;
        v45 = (*(__int16 *)(v64 + 2LL * (i + 1)) - *(__int16 *)(v64 + 2LL * i)) << a3;
        for ( k = 0; k < v45; ++k )
        {
          v35 = sub_1401A5C70((unsigned int)v35);
          *(float *)&v65[k + v44] = (float)(v35 >> 20);
        }
        sub_1401A6800((float *)&v65[v44], v45, 1.0);
      }
    }
    *(_DWORD *)(a1 + 44) = v35;
    j = 0;
    do
    {
      v5 = (const __m128i *)(v68[j] + 4LL * a2);
      v72 = j;
      MEMORY[0x1401FC920]((__m128i *)v68[j++], v5, 4LL * ((v18 >> 1) + 2048 - a2));
    }
    while ( j < v19 );
    v15 = *(_DWORD *)(a1 + 40);
    sub_1401B3E40(v36, (__int64)v65, v75, v58, v25, v46, v19, v19, 0, a3, *(_DWORD *)(a1 + 20), 0);
  }
  else
  {
    v49 = 1.0;
    if ( v33 )
    {
      v24 = *(_DWORD *)(a1 + 52);
      v49 = 0.80000001;
    }
    else
    {
      v24 = sub_1401B4770(v68, v19, *(_DWORD *)(a1 + 40));
      *(_DWORD *)(a1 + 52) = v24;
    }
    if ( 2 * v24 >= 1024 )
      v47 = 1024;
    else
      v47 = 2 * v24;
    v23 = v47;
    v6 = 4LL * v18 + 15;
    if ( v6 <= 4LL * v18 )
      v6 = 0xFFFFFFFFFFFFFF0LL;
    v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
    p_i = (__m128i *)&i;
    v8 = alloca(4192);
    v73 = v14;
    v9 = 4LL * v23 + 15;
    if ( v9 <= 4LL * v23 )
      v9 = 0xFFFFFFFFFFFFFF0LL;
    v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
    v66 = (const __m128i *)v14;
    v37 = (float *)(v73 + 96);
    v60 = *(_QWORD *)(v36 + 72);
    j = 0;
    do
    {
      v30 = 0.0;
      v20 = (__m128i *)v68[j];
      for ( i = 0; i < 1048; ++i )
        v37[i - 24] = *(float *)&v20[250].m128i_i32[i];
      if ( !v33 )
      {
        sub_1401ADFA0(v37, (__int64)v76, v60, v18, 24, 1024);
        v76[0] = v76[0] * 1.0001;
        for ( i = 1; i <= 24; ++i )
          v76[i] = v76[i] - (float)((float)((float)(v76[i] * 0.000064000007) * (float)i) * (float)i);
        sub_1401AD490((_WORD *)(v59 + 96LL * j), v76, 24);
      }
      sub_1401AD6F0((__int64)&v37[-v23 + 1024], v59 + 96LL * j, (__int64)v66, v23, 24);
      MEMORY[0x1401FC920]((__m128i *)&v37[-v23 + 1024], v66, 4LL * v23);
      v26 = 1.0;
      v29 = 1.0;
      v38 = v23 >> 1;
      for ( i = 0; i < v38; ++i )
      {
        v28 = v37[i + 1024 - v38];
        v26 = v26 + (float)(v28 * v28);
        v28 = v37[i + 1024 - 2 * v38];
        v29 = v29 + (float)(v28 * v28);
      }
      if ( v29 <= v26 )
        v48 = v29;
      else
        v48 = v26;
      v26 = v48;
      v11 = sqrt((float)(v48 / v29));
      v50 = v11;
      MEMORY[0x1401FC920](v20, (__m128i *)((char *)v20 + 4 * a2), 4LL * (2048 - a2));
      v51 = 1024 - v24;
      v32 = v18 + a2;
      v39 = v49 * v50;
      v22 = 0;
      i = 0;
      while ( i < v32 )
      {
        if ( v22 >= v24 )
        {
          v22 -= v24;
          v39 = v39 * v50;
        }
        *(float *)&v20->m128i_i32[i + 2048 - a2] = v39 * v37[v22 + v51];
        v52 = *(float *)&v20->m128i_i32[v22 + v51 + 1024 - a2];
        v30 = v30 + (float)(v52 * v52);
        ++i;
        ++v22;
      }
      for ( i = 0; i < 24; ++i )
        v77[i] = v20->m128i_i32[2048 - a2 - 1 - i];
      v74 = (__int64)v20[512].m128i_i64 - 4 * a2;
      sub_1401AD990(v74, (float *)(v59 + 96LL * j), v74, v32, 24, (__int64)v77);
      v31 = 0.0;
      for ( i = 0; i < v32; ++i )
      {
        v53 = *(float *)&v20->m128i_i32[i + 2048 - a2];
        v31 = v31 + (float)(v53 * v53);
      }
      if ( v30 > (float)(0.2 * v31) )
      {
        if ( v31 > v30 )
        {
          v12 = sqrt((float)((float)(v30 + 1.0) / (float)(v31 + 1.0)));
          v54 = v12;
          for ( i = 0; i < v18; ++i )
          {
            v62 = 1.0 - (float)(*(float *)(v60 + 4LL * i) * (float)(1.0 - v54));
            *(float *)&v20->m128i_i32[i + 2048 - a2] = v62 * *(float *)&v20->m128i_i32[i + 2048 - a2];
          }
          for ( i = v18; i < v32; ++i )
            *(float *)&v20->m128i_i32[i + 2048 - a2] = v54 * *(float *)&v20->m128i_i32[i + 2048 - a2];
        }
      }
      else
      {
        for ( i = 0; i < v32; ++i )
          v20->m128i_i32[i + 2048 - a2] = 0;
      }
      sub_1401A0C20(
        p_i,
        v20 + 512,
        *(_DWORD *)(a1 + 64),
        *(_DWORD *)(a1 + 64),
        v18,
        -*(float *)(a1 + 72),
        -*(float *)(a1 + 72),
        *(_DWORD *)(a1 + 80),
        *(_DWORD *)(a1 + 80),
        0,
        0);
      for ( i = 0; i < v18 / 2; ++i )
        *(float *)&v20[512].m128i_i32[i] = (float)(*(float *)(v60 + 4LL * i) * *(float *)&p_i->m128i_i32[v18 - 1 - i])
                                         + (float)(*(float *)(v60 + 4LL * (v18 - i - 1)) * *(float *)&p_i->m128i_i32[i]);
      ++j;
    }
    while ( j < v19 );
  }
  *(_DWORD *)(a1 + 56) = v33 + 1;
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v78);
}

