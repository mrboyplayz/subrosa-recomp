/* Address: 0x140092d70 | Name: sub_140092D70 | Size: 1372 bytes */
__int64 sub_140092D70()
{
  unsigned int *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // r11
  float v4; // xmm7_4
  int v5; // eax
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int16 *v9; // r10
  unsigned __int64 v10; // r8
  float v11; // xmm2_4
  float v12; // xmm0_4
  __m128i v13; // xmm1
  int v14; // eax
  __int64 v15; // rcx
  __int16 *v16; // r8
  int v17; // eax
  float *v18; // rax
  float *v19; // r8
  __int64 v20; // r10
  unsigned int v21; // xmm3_4
  unsigned int v22; // xmm2_4
  unsigned int v23; // xmm4_4
  signed __int64 v24; // rcx
  float v25; // xmm7_4
  float v26; // xmm3_4
  __int64 v27; // rdx
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm6_4
  __int64 v31; // r8
  _DWORD v33[21]; // [rsp+0h] [rbp-188h] BYREF
  _DWORD v34[11]; // [rsp+54h] [rbp-134h] BYREF
  __int128 v35; // [rsp+80h] [rbp-108h]
  _OWORD v36[4]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-B8h]

  v0 = &dword_140404A6C[308307081];
  v1 = 0;
  v2 = 8;
  do
  {
    if ( *(v0 - 4) )
    {
      v3 = (int)*v0;
      if ( (_DWORD)v3 != -1 )
      {
        v4 = 0.0;
        v5 = v0[30731] - 1;
        if ( !v0[30731] )
          v5 = 63;
        v6 = 960 * v5;
        v7 = v6;
        v8 = v6 + 960;
        if ( v6 < v8 )
        {
          if ( v8 - v6 < 4 )
            goto LABEL_11;
          v9 = (__int16 *)&dword_140404A6C[v6 / 2u + 308307091 + v1] + 1;
          v10 = ((unsigned __int64)(v8 - v6 - 4) >> 2) + 1;
          v7 = v6 + 4 * v10;
          do
          {
            v11 = (float)abs16(v9[2]);
            v12 = (float)abs16(v9[1]);
            v13 = _mm_cvtsi32_si128(abs16(*(v9 - 1)));
            v14 = *v9;
            v9 += 4;
            v4 = v4
               + (float)((float)((float)(v11 * 0.0009765625) + (float)(v12 * 0.0009765625))
                       + (float)((float)(_mm_cvtepi32_ps(v13).m128_f32[0] * 0.0009765625)
                               + (float)((float)(int)abs32(v14) * 0.0009765625)));
            --v10;
          }
          while ( v10 );
          if ( v7 < v8 )
          {
LABEL_11:
            v15 = v8 - v7;
            v16 = (__int16 *)&dword_140404A6C[308307091] + v7 + v1 * 2;
            do
            {
              v17 = *v16++;
              v4 = v4 + (float)((float)(int)abs32(v17) * 0.0009765625);
              --v15;
            }
            while ( v15 );
          }
        }
        v18 = (float *)v36;
        *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
        v19 = (float *)v34;
        dword_140404A6C[431564532] = 1065353216;
        v20 = 4;
        *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
        *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
        v34[2] = 0;
        v33[20] = dword_140404A6C[284024505];
        v21 = dword_140404A6C[344 * v3 + 284956344];
        *(float *)&v22 = *(float *)&dword_140404A6C[344 * v3 + 284956345] + 1.125;
        v23 = dword_140404A6C[344 * v3 + 284956346];
        v34[0] = dword_140404A6C[284024506];
        v24 = (char *)&dword_140404A6C[431564521] - (char *)v36;
        v34[1] = dword_140404A6C[284024507];
        v34[3] = dword_140404A6C[284024508];
        v34[4] = dword_140404A6C[284024509];
        v34[5] = dword_140404A6C[284024510];
        v34[6] = 0;
        v34[7] = dword_140404A6C[284024511];
        v34[8] = dword_140404A6C[284024512];
        v25 = fmaxf(v4 * 0.0010416667, 0.25);
        dword_140404A6C[431564530] = v22;
        dword_140404A6C[431564529] = v21;
        dword_140404A6C[431564531] = v23;
        v34[9] = dword_140404A6C[284024513];
        v34[10] = 0;
        v35 = xmmword_140279490;
        do
        {
          v26 = *(v19 - 1);
          v27 = 4;
          v28 = *v19;
          v29 = v19[1];
          v30 = v19[2];
          do
          {
            *v18 = (float)((float)(v30 * *(float *)((char *)v18 + v24 + 32))
                         + (float)(v29 * *(float *)((char *)v18 + v24 + 16)))
                 + (float)((float)(v26 * *(float *)((char *)v18 + v24 - 16))
                         + (float)(v28 * *(float *)((char *)v18 + v24)));
            ++v18;
            --v27;
          }
          while ( v27 );
          v19 += 4;
          v24 -= 16LL;
          --v20;
        }
        while ( v20 );
        *(_OWORD *)&dword_140404A6C[431564517] = v36[0];
        *(_OWORD *)&dword_140404A6C[431564521] = v36[1];
        *(_OWORD *)&dword_140404A6C[431564525] = v36[2];
        *(_OWORD *)&dword_140404A6C[431564529] = v36[3];
        sub_14007A0E0(
          &dword_140404A6C[431564533],
          (__int64)&dword_140404A6C[431564517],
          (__int64)&dword_140404A6C[431564501]);
        sub_14007A0E0(
          &dword_140404A6C[431564565],
          (__int64)&dword_140404A6C[431564533],
          (__int64)&dword_140404A6C[431564485]);
        unk_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830701] + 284024944]);
        sub_14006CFF0(0.0, 0.0, v31, 0.1640625, 133, 1065353216, 1065353216, 1065353216, COERCE_INT(v25 * 0.75));
        *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
        *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
        *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
        *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
        sub_14007A0E0(
          &dword_140404A6C[431564533],
          (__int64)&dword_140404A6C[431564517],
          (__int64)&dword_140404A6C[431564501]);
        sub_14007A0E0(
          &dword_140404A6C[431564565],
          (__int64)&dword_140404A6C[431564533],
          (__int64)&dword_140404A6C[431564485]);
      }
    }
    v0 += 96401;
    v1 += 96401;
    --v2;
  }
  while ( v2 );
  return MEMORY[0x1401F8B20]((unsigned __int64)v33 ^ v37);
}

