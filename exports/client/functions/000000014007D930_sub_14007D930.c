/* Address: 0x14007d930 | Name: sub_14007D930 | Size: 1207 bytes */
__int64 sub_14007D930()
{
  unsigned int v0; // r9d
  int v1; // ecx
  float v2; // xmm3_4
  unsigned int v3; // r8d
  float *v4; // rdx
  __int64 v5; // rbx
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float *v10; // rax
  float v11; // xmm1_4
  int v12; // eax
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // xmm1_4
  __int64 v16; // rcx
  unsigned int *v17; // rax
  unsigned int v18; // eax
  __int64 result; // rax

  v0 = dword_140404A6C[284024501];
  if ( dword_140404A6C[284024501] != -1 || !LOBYTE(dword_140404A6C[284024776]) )
    goto LABEL_22;
  v1 = 0;
  v2 = 65536.0;
  if ( (int)dword_140404A6C[132792829] < 4 )
  {
    if ( (int)dword_140404A6C[132792829] <= 0 )
      goto LABEL_22;
    v5 = 0;
    goto LABEL_18;
  }
  v3 = 2;
  v4 = (float *)&dword_140404A6C[132400643];
  v5 = 4LL * (((dword_140404A6C[132792829] - 4) >> 2) + 1);
  do
  {
    v6 = fsqrt(
           (float)((float)((float)(*(v4 - 1) - *(float *)&dword_140404A6C[284024503])
                         * (float)(*(v4 - 1) - *(float *)&dword_140404A6C[284024503]))
                 + (float)((float)(*(v4 - 2) - *(float *)&dword_140404A6C[284024502])
                         * (float)(*(v4 - 2) - *(float *)&dword_140404A6C[284024502])))
         + (float)((float)(*v4 - *(float *)&dword_140404A6C[284024504])
                 * (float)(*v4 - *(float *)&dword_140404A6C[284024504])));
    if ( v2 > v6 )
    {
      dword_140404A6C[179992045] = v1;
      v2 = v6;
    }
    v7 = fsqrt(
           (float)((float)((float)(v4[382] - *(float *)&dword_140404A6C[284024503])
                         * (float)(v4[382] - *(float *)&dword_140404A6C[284024503]))
                 + (float)((float)(v4[381] - *(float *)&dword_140404A6C[284024502])
                         * (float)(v4[381] - *(float *)&dword_140404A6C[284024502])))
         + (float)((float)(v4[383] - *(float *)&dword_140404A6C[284024504])
                 * (float)(v4[383] - *(float *)&dword_140404A6C[284024504])));
    if ( v2 > v7 )
    {
      v2 = v7;
      dword_140404A6C[179992045] = v3 - 1;
    }
    v8 = fsqrt(
           (float)((float)((float)(v4[765] - *(float *)&dword_140404A6C[284024503])
                         * (float)(v4[765] - *(float *)&dword_140404A6C[284024503]))
                 + (float)((float)(v4[764] - *(float *)&dword_140404A6C[284024502])
                         * (float)(v4[764] - *(float *)&dword_140404A6C[284024502])))
         + (float)((float)(v4[766] - *(float *)&dword_140404A6C[284024504])
                 * (float)(v4[766] - *(float *)&dword_140404A6C[284024504])));
    if ( v2 > v8 )
    {
      dword_140404A6C[179992045] = v3;
      v2 = v8;
    }
    v9 = fsqrt(
           (float)((float)((float)(v4[1148] - *(float *)&dword_140404A6C[284024503])
                         * (float)(v4[1148] - *(float *)&dword_140404A6C[284024503]))
                 + (float)((float)(v4[1147] - *(float *)&dword_140404A6C[284024502])
                         * (float)(v4[1147] - *(float *)&dword_140404A6C[284024502])))
         + (float)((float)(v4[1149] - *(float *)&dword_140404A6C[284024504])
                 * (float)(v4[1149] - *(float *)&dword_140404A6C[284024504])));
    if ( v2 > v9 )
    {
      v2 = v9;
      dword_140404A6C[179992045] = v3 + 1;
    }
    v4 += 1532;
    v1 += 4;
    v3 += 4;
  }
  while ( v1 < (signed int)(dword_140404A6C[132792829] - 3) );
  if ( v1 < (int)dword_140404A6C[132792829] )
  {
LABEL_18:
    v10 = (float *)&dword_140404A6C[383 * v5 + 132400643];
    do
    {
      v11 = fsqrt(
              (float)((float)((float)(*(v10 - 1) - *(float *)&dword_140404A6C[284024503])
                            * (float)(*(v10 - 1) - *(float *)&dword_140404A6C[284024503]))
                    + (float)((float)(*(v10 - 2) - *(float *)&dword_140404A6C[284024502])
                            * (float)(*(v10 - 2) - *(float *)&dword_140404A6C[284024502])))
            + (float)((float)(*v10 - *(float *)&dword_140404A6C[284024504])
                    * (float)(*v10 - *(float *)&dword_140404A6C[284024504])));
      if ( v2 > v11 )
      {
        dword_140404A6C[179992045] = v1;
        v2 = v11;
      }
      v10 += 383;
      ++v1;
    }
    while ( v1 < (int)dword_140404A6C[132792829] );
  }
LABEL_22:
  v12 = _mm_cvtsi128_si32((__m128i)0LL);
  *(_OWORD *)&dword_140404A6C[179992041] = 0;
  if ( BYTE1(dword_140404A6C[284024771]) )
    v12 = 1;
  dword_140404A6C[179992041] = v12;
  if ( HIBYTE(dword_140404A6C[284024773]) )
  {
    dword_140404A6C[284021983] = 0;
    v0 = -1;
  }
  if ( LOBYTE(dword_140404A6C[284024774]) )
    v0 = 0;
  if ( BYTE1(dword_140404A6C[284024774]) )
    v0 = 1;
  if ( BYTE2(dword_140404A6C[284024774]) )
    v0 = 2;
  dword_140404A6C[284024501] = v0;
  if ( !BYTE1(dword_140404A6C[284024768]) || BYTE1(dword_140404A6C[284024640]) )
    goto LABEL_36;
  v13 = dword_140404A6C[71856292];
  if ( dword_140404A6C[71856292] != -1 )
  {
    sub_1400A9760(dword_140404A6C[71856292], 4, 0);
    sub_1400A9760(dword_140404A6C[71856292], 7, 0);
LABEL_36:
    v13 = dword_140404A6C[71856292];
  }
  if ( BYTE1(dword_140404A6C[284024783]) && v13 != -1 )
  {
    v14 = 7166LL * v13;
    v15 = dword_140404A6C[v14 + 280651675];
    dword_140404A6C[284024381] = dword_140404A6C[v14 + 280651674];
    dword_140404A6C[284024383] = dword_140404A6C[v14 + 280651676];
    dword_140404A6C[284024382] = v15;
  }
  if ( !dword_140404A6C[309078285] )
  {
    if ( LOBYTE(dword_140404A6C[284024780]) )
    {
      v16 = dword_140404A6C[179457253];
      dword_140404A6C[179955080] = 0;
      if ( (int)dword_140404A6C[179457253] > 0 )
      {
        v17 = &dword_140404A6C[179662666];
        do
        {
          *v17 = 0;
          v17 += 22;
          --v16;
        }
        while ( v16 );
      }
      dword_140404A6C[456202457] = 0;
    }
    dword_140404A6C[179955874] = 1;
    if ( HIBYTE(dword_140404A6C[284024779]) && !HIBYTE(dword_140404A6C[284024651]) )
      dword_140404A6C[179955876] ^= 1u;
    if ( BYTE2(dword_140404A6C[284024783]) && !BYTE2(dword_140404A6C[284024655]) )
      dword_140404A6C[283831478] ^= 1u;
  }
  if ( dword_140404A6C[456202453] )
  {
    if ( LOBYTE(dword_140404A6C[284024768]) && !LOBYTE(dword_140404A6C[284024640]) )
      dword_140404A6C[283831481] ^= 1u;
    if ( HIBYTE(dword_140404A6C[284024769]) && !HIBYTE(dword_140404A6C[284024641]) )
      dword_140404A6C[283831479] ^= 1u;
    if ( BYTE2(dword_140404A6C[284024769]) )
    {
      v18 = dword_140404A6C[283831480];
      if ( !BYTE2(dword_140404A6C[284024641]) )
        v18 = 1;
      dword_140404A6C[283831480] = v18;
    }
  }
  if ( BYTE1(dword_140404A6C[284024766]) && !BYTE1(dword_140404A6C[284024638]) )
    dword_140404A6C[179668287] ^= 1u;
  result = dword_140404A6C[73006973];
  if ( BYTE1(dword_140404A6C[284024767]) )
    result = 0;
  dword_140404A6C[73006973] = result;
  if ( HIBYTE(dword_140404A6C[284024780]) && !HIBYTE(dword_140404A6C[284024652]) )
    dword_140404A6C[179668285] ^= 1u;
  if ( BYTE1(dword_140404A6C[284024781]) && !BYTE1(dword_140404A6C[284024653]) )
    result = render_cache_camera_uniforms_candidate();
  if ( LOBYTE(dword_140404A6C[284024781]) && !LOBYTE(dword_140404A6C[284024653]) )
    dword_140404A6C[179668288] ^= 1u;
  if ( HIBYTE(dword_140404A6C[284024781]) && !HIBYTE(dword_140404A6C[284024653]) )
  {
    result = dword_140404A6C[179668286] + 1;
    if ( (int)result > 5 )
      result = 0;
    dword_140404A6C[179668286] = result;
  }
  return result;
}

