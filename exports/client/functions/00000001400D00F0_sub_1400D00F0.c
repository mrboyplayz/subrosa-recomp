/* Address: 0x1400d00f0 | Name: sub_1400D00F0 | Size: 1212 bytes */
__int64 __fastcall sub_1400D00F0(int a1)
{
  int v1; // r14d
  unsigned int v2; // r15d
  __int64 v3; // rax
  __int64 v4; // rcx
  float v5; // xmm11_4
  float v6; // xmm12_4
  float v7; // xmm13_4
  unsigned int v8; // edx
  unsigned int v9; // r8d
  int v10; // ebx
  int v11; // r12d
  __int64 v12; // r14
  __int64 v13; // rbp
  int v14; // r10d
  unsigned int v15; // edi
  int v16; // r13d
  int v17; // r11d
  __int64 v18; // rax
  float v19; // xmm1_4
  __int64 v20; // rsi
  int v21; // ebx
  __int16 v22; // dx
  unsigned int v23; // r8d
  unsigned int v24; // r9d
  float v25; // xmm3_4
  unsigned int v26; // r8d
  float v27; // xmm0_4
  float v28; // xmm3_4
  int v29; // r8d
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm4_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm3_4
  int v38; // r14d
  unsigned int v40; // [rsp+20h] [rbp-E8h]
  unsigned int v41; // [rsp+24h] [rbp-E4h]
  __int16 v42; // [rsp+28h] [rbp-E0h]
  __int64 v43; // [rsp+30h] [rbp-D8h]
  __int64 v44; // [rsp+38h] [rbp-D0h]
  unsigned int v45; // [rsp+110h] [rbp+8h]
  int v46; // [rsp+118h] [rbp+10h]
  int v47; // [rsp+120h] [rbp+18h]
  unsigned int v48; // [rsp+128h] [rbp+20h]

  v1 = -1;
  v2 = -1;
  v44 = a1;
  v3 = 3336LL * a1;
  v47 = -1;
  v4 = *(_QWORD *)&dword_140404A6C[v3 + 272034683];
  v5 = *(float *)&dword_140404A6C[v3 + 272034677];
  v6 = *(float *)&dword_140404A6C[v3 + 272034678];
  v7 = *(float *)&dword_140404A6C[v3 + 272034679];
  v8 = dword_140404A6C[v3 + 272034680] << 11;
  v9 = dword_140404A6C[v3 + 272034681] << 11;
  v10 = 0;
  v48 = v8;
  v46 = 0;
  v45 = v9;
  v43 = v4;
  do
  {
    if ( v1 >= 0 )
    {
      v11 = v1;
      if ( v1 > 2048 )
        v11 = 2048;
    }
    else
    {
      v11 = 0;
    }
    v12 = 2049LL * v11;
    v13 = -1;
    v14 = -1;
    v15 = -1;
    v40 = (int)(v9 + v11 - 128) >> 11;
    v42 = v11 + v9 + 128;
    v41 = (int)(v11 + v9 + 128) >> 11;
    v16 = 6 * v10;
    do
    {
      if ( v14 >= 0 )
      {
        if ( v14 <= 2048 )
        {
          v17 = v14;
          v18 = v13;
        }
        else
        {
          v17 = 2048;
          v18 = 2048;
        }
      }
      else
      {
        v17 = 0;
        v18 = 0;
      }
      if ( v15 > 0x800 || v2 > 0x800 )
        v19 = *(float *)(v4 + 4 * (v12 + v18)) - 16.0;
      else
        v19 = *(float *)(v4 + 4 * (v12 + v18));
      v20 = v16;
      v21 = v8 + v17;
      v22 = v8 + v17 - 128;
      v23 = (v21 - 128) >> 11;
      *(float *)&dword_140404A6C[v16 + 271182638] = v19 + v6;
      *(float *)&dword_140404A6C[v16 + 271182639] = (float)v11 + v7;
      *(float *)&dword_140404A6C[v16 + 271182637] = v5 + (float)v17;
      v24 = (int)(v11 + v45) >> 11;
      if ( v23 > 7 || v24 > 7 )
        v25 = 0.0;
      else
        v25 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v23 + 8 * v24) + 272034683]
                       + 4LL * (2049 * (((_WORD)v11 + (_WORD)v45) & 0x7FF) + (v22 & 0x7FFu)));
      v26 = (v21 + 128) >> 11;
      if ( v26 > 7 || v24 > 7 )
        v27 = 0.0;
      else
        v27 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v26 + 8 * v24) + 272034683]
                       + 4LL * (2049 * (v11 & 0x7FF) + (((_WORD)v21 + 128) & 0x7FFu)));
      v28 = v25 - v27;
      v29 = v21 >> 11;
      if ( (unsigned int)(v21 >> 11) > 7 )
      {
        v30 = 0.0;
      }
      else
      {
        if ( v40 > 7 )
          v30 = 0.0;
        else
          v30 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v29 + 8 * v40) + 272034683]
                         + 4LL * ((v21 & 0x7FF) + 2049 * (((_WORD)v11 + (_WORD)v45 - 128) & 0x7FFu)));
        if ( v41 <= 7 )
        {
          v31 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v29 + 8 * v41) + 272034683]
                         + 4LL * ((v17 & 0x7FF) + 2049 * (v42 & 0x7FFu)));
          goto LABEL_32;
        }
      }
      v31 = 0.0;
LABEL_32:
      v32 = v30 - v31;
      v33 = v32 * 0.0078125;
      v34 = fsqrt((float)((float)((float)(v32 * v32) + (float)(v28 * v28)) * 0.000061035156) + 1.0);
      if ( v34 == 0.0 )
      {
        v36 = 0.0;
        v35 = 0.0;
        v37 = 0.0;
      }
      else
      {
        v35 = 1.0 / v34;
        v36 = (float)(1.0 / v34) * (float)(v28 * 0.0078125);
        v37 = v35 * v33;
      }
      v10 = v46 + 1;
      *(float *)&dword_140404A6C[v16 + 271182640] = v36;
      v16 += 6;
      *(float *)&dword_140404A6C[v20 + 271182641] = v35;
      *(float *)&dword_140404A6C[v20 + 271182642] = v37;
      ++v46;
      if ( v15 <= 0x7FF )
      {
        v14 += 127;
        v15 += 127;
        v13 += 127;
      }
      v4 = v43;
      ++v14;
      v8 = v48;
      ++v15;
      ++v13;
    }
    while ( v14 <= 2049 );
    v38 = v47;
    if ( v2 <= 0x7FF )
    {
      v38 = v47 + 127;
      v2 += 127;
    }
    v9 = v45;
    v1 = v38 + 1;
    ++v2;
    v47 = v1;
  }
  while ( v1 <= 2049 );
  unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v44 + 283791496] + 283793813], v45);
  return unk_140404190(34962, 24 * v10, &dword_140404A6C[271182637], 35048);
}

