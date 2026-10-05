/* Address: 0x1401d9e20 | Name: sub_1401D9E20 | Size: 4132 bytes */
__int64 __fastcall sub_1401D9E20(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  void *v6; // rsp
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int i; // [rsp+40h] [rbp+0h] BYREF
  int v14; // [rsp+44h] [rbp+4h]
  signed __int16 v15; // [rsp+48h] [rbp+8h]
  int *v16; // [rsp+50h] [rbp+10h]
  int *v17; // [rsp+58h] [rbp+18h]
  int v18; // [rsp+60h] [rbp+20h]
  int k; // [rsp+64h] [rbp+24h]
  int v20; // [rsp+68h] [rbp+28h]
  signed int v21; // [rsp+6Ch] [rbp+2Ch]
  int v22; // [rsp+70h] [rbp+30h] BYREF
  int v23; // [rsp+74h] [rbp+34h]
  int v24; // [rsp+78h] [rbp+38h]
  int v25; // [rsp+7Ch] [rbp+3Ch]
  int v26; // [rsp+80h] [rbp+40h]
  int v27; // [rsp+84h] [rbp+44h]
  int v28; // [rsp+88h] [rbp+48h]
  __int16 *v29; // [rsp+90h] [rbp+50h]
  int j; // [rsp+98h] [rbp+58h]
  int *v31; // [rsp+A0h] [rbp+60h]
  int v32; // [rsp+A8h] [rbp+68h]
  int v33; // [rsp+ACh] [rbp+6Ch]
  int v34; // [rsp+B0h] [rbp+70h]
  int v35; // [rsp+B4h] [rbp+74h]
  int v36; // [rsp+B8h] [rbp+78h]
  int v37; // [rsp+BCh] [rbp+7Ch]
  int v38; // [rsp+C0h] [rbp+80h]
  int v39; // [rsp+C4h] [rbp+84h]
  int v40; // [rsp+C8h] [rbp+88h]
  int v41; // [rsp+CCh] [rbp+8Ch]
  int v42; // [rsp+D0h] [rbp+90h]
  int v43; // [rsp+D4h] [rbp+94h]
  int v44; // [rsp+D8h] [rbp+98h]
  int v45; // [rsp+DCh] [rbp+9Ch]
  int v46; // [rsp+E0h] [rbp+A0h]
  int v47; // [rsp+E4h] [rbp+A4h]
  int v48; // [rsp+E8h] [rbp+A8h]
  int v49; // [rsp+ECh] [rbp+ACh]
  int v50; // [rsp+F0h] [rbp+B0h]
  int v51; // [rsp+F4h] [rbp+B4h]
  int v52; // [rsp+F8h] [rbp+B8h]
  int v53; // [rsp+FCh] [rbp+BCh]
  int *v54; // [rsp+100h] [rbp+C0h]
  int v55; // [rsp+108h] [rbp+C8h]
  int v56; // [rsp+10Ch] [rbp+CCh] BYREF
  int v57; // [rsp+110h] [rbp+D0h] BYREF
  int v58; // [rsp+114h] [rbp+D4h] BYREF
  int v59; // [rsp+118h] [rbp+D8h] BYREF
  unsigned int v60; // [rsp+11Ch] [rbp+DCh]
  int *v61; // [rsp+120h] [rbp+E0h]
  __int64 v62; // [rsp+128h] [rbp+E8h]
  __int64 v63; // [rsp+130h] [rbp+F0h]
  __int16 v64[16]; // [rsp+138h] [rbp+F8h] BYREF
  __int64 v65; // [rsp+158h] [rbp+118h]

  v17 = (int *)(a1 + 4196);
  v3 = 4LL * (*(_DWORD *)(a1 + 2328) + *(_DWORD *)(a1 + 2336));
  v4 = v3 + 15;
  if ( v3 + 15 <= v3 )
    v4 = 0xFFFFFFFFFFFFFF0LL;
  v6 = alloca(sub_1401F89D0(v4 & 0xFFFFFFFFFFFFFFF0uLL, a2));
  v54 = &i;
  v7 = 2LL * *(int *)(a1 + 2336) + 15;
  if ( v7 <= 2LL * *(int *)(a1 + 2336) )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = alloca(sub_1401F89D0(v7 & 0xFFFFFFFFFFFFFFF0uLL, v5));
  v61 = &i;
  v22 = v17[18] >> 6;
  v23 = v17[19] >> 6;
  if ( *(_DWORD *)(a1 + 2376) )
    MEMORY[0x1401FCD30]((char *)v17 + 14, 0, 32);
  sub_1401DAE50(
    (unsigned int)&v56,
    (unsigned int)&v57,
    (unsigned int)&v59,
    (unsigned int)&v58,
    a1 + 4,
    (__int64)&v22,
    *(_DWORD *)(a1 + 2332),
    *(_DWORD *)(a1 + 2324));
  if ( v56 >> v58 >= v59 >> v57 )
    v9 = sub_1401BE3A0(0, v17[22] * v17[21] - 128);
  else
    v9 = sub_1401BE3A0(0, v17[22] * (v17[21] - 1) - 128);
  v62 = a1 + 4LL * v9 + 4;
  v29 = (__int16 *)(v17 + 1);
  v15 = *((_WORD *)v17 + 28);
  v55 = word_14027A0B4[(int)sub_1401BE320(1u, *(_DWORD *)(a1 + 4184))];
  if ( *(_DWORD *)(a1 + 4188) == 2 )
    v26 = word_14027A0B8[(int)sub_1401BE320(1u, *(_DWORD *)(a1 + 4184))];
  else
    v26 = word_14027A114[(int)sub_1401BE320(1u, *(_DWORD *)(a1 + 4184))];
  sub_1401BBDE0((__int64)v17 + 14, *(_DWORD *)(a1 + 2340), 64881);
  MEMORY[0x1401FC920](v64, (char *)v17 + 14);
  if ( !*(_DWORD *)(a1 + 4184) )
  {
    v15 = 0x4000;
    if ( *(_DWORD *)(a1 + 4188) == 2 )
    {
      for ( i = 0; i < 5; ++i )
        v15 -= v29[i];
      v15 = sub_1401BE3E0(0xCCDu, v15);
      v15 = (*((__int16 *)v17 + 34) * v15) >> 14;
    }
    else
    {
      v60 = sub_1401BBF70((__int64)v17 + 14, *(_DWORD *)(a1 + 2340));
      v21 = sub_1401BE360(0x8000000u, v60);
      v21 = 8 * sub_1401BE420(0x400000u, v21);
      v26 = (int)(((__int16)v26 * (__int64)v21) >> 16) >> 14;
    }
  }
  v27 = v17[13];
  v28 = ((*v17 >> 7) + 1) >> 1;
  v25 = *(_DWORD *)(a1 + 2336);
  v20 = *(_DWORD *)(a1 + 2336) - v28 - *(_DWORD *)(a1 + 2340) - 2;
  v10 = *(_DWORD *)(a1 + 2336) - v20;
  v63 = (__int64)v61 + 2 * v20;
  sub_1401BBB40(v63, a1 + 2LL * v20 + 1348, v64, v10, *(_DWORD *)(a1 + 2340));
  v24 = sub_1401BE820(v17[19], 46);
  if ( v24 >= 0x3FFFFFFF )
    v49 = 0x3FFFFFFF;
  else
    v49 = v24;
  v24 = v49;
  for ( i = *(_DWORD *)(a1 + 2340) + v20; i < *(_DWORD *)(a1 + 2336); ++i )
    v54[i] = (*((__int16 *)v61 + i) * (__int64)v24) >> 16;
  for ( j = 0; j < *(_DWORD *)(a1 + 2324); ++j )
  {
    v31 = &v54[v25 - v28 + 2];
    for ( i = 0; i < *(_DWORD *)(a1 + 2332); ++i )
    {
      v18 = 2;
      v18 = ((*v29 * (__int64)*v31) >> 16) + 2;
      v18 += (v29[1] * (__int64)*(v31 - 1)) >> 16;
      v18 += (v29[2] * (__int64)*(v31 - 2)) >> 16;
      v18 += (v29[3] * (__int64)*(v31 - 3)) >> 16;
      v18 += (v29[4] * (__int64)*(v31 - 4)) >> 16;
      ++v31;
      v27 = 196314165 * v27 + 907633515;
      v20 = (v27 >> 25) & 0x7F;
      v54[v25++] = 4 * (((v15 * (__int64)*(int *)(v62 + 4LL * v20)) >> 16) + v18);
    }
    for ( k = 0; k < 5; ++k )
      v29[k] = (v29[k] * (__int16)v55) >> 15;
    if ( *(_BYTE *)(a1 + 2789) )
      v15 = ((__int16)v26 * v15) >> 15;
    *v17 += (655LL * *v17) >> 16;
    v11 = sub_1401BE360(*v17, 4608 * *(__int16 *)(a1 + 2316));
    *v17 = v11;
    v28 = ((*v17 >> 7) + 1) >> 1;
  }
  v16 = &v54[*(_DWORD *)(a1 + 2336) - 16];
  MEMORY[0x1401FC920](v16, a1 + 1284);
  for ( i = 0; i < *(_DWORD *)(a1 + 2328); ++i )
  {
    v14 = *(int *)(a1 + 2340) >> 1;
    v14 += (v64[0] * (__int64)v16[i + 15]) >> 16;
    v14 += (v64[1] * (__int64)v16[i + 14]) >> 16;
    v14 += (v64[2] * (__int64)v16[i + 13]) >> 16;
    v14 += (v64[3] * (__int64)v16[i + 12]) >> 16;
    v14 += (v64[4] * (__int64)v16[i + 11]) >> 16;
    v14 += (v64[5] * (__int64)v16[i + 10]) >> 16;
    v14 += (v64[6] * (__int64)v16[i + 9]) >> 16;
    v14 += (v64[7] * (__int64)v16[i + 8]) >> 16;
    v14 += (v64[8] * (__int64)v16[i + 7]) >> 16;
    v14 += (v64[9] * (__int64)v16[i + 6]) >> 16;
    for ( k = 10; k < *(_DWORD *)(a1 + 2340); ++k )
      v14 += (v64[k] * (__int64)v16[i + 16 - k - 1]) >> 16;
    if ( v14 <= 0x7FFFFFF )
    {
      if ( v14 >= -134217728 )
        v50 = v14;
      else
        v50 = -134217728;
      v51 = v50;
    }
    else
    {
      v51 = 0x7FFFFFF;
    }
    if ( 16 * v51 + v16[i + 16] < 0 )
    {
      if ( v14 <= 0x7FFFFFF )
      {
        if ( v14 >= -134217728 )
          v35 = v14;
        else
          v35 = -134217728;
        v36 = v35;
      }
      else
      {
        v36 = 0x7FFFFFF;
      }
      if ( ((16 * v36) | v16[i + 16]) < 0 )
      {
        if ( v14 <= 0x7FFFFFF )
        {
          if ( v14 >= -134217728 )
            v37 = v14;
          else
            v37 = -134217728;
          v38 = v37;
        }
        else
        {
          v38 = 0x7FFFFFF;
        }
        v39 = v16[i + 16] + 16 * v38;
      }
      else
      {
        v39 = 0x7FFFFFFF;
      }
      v40 = v39;
    }
    else
    {
      if ( v14 <= 0x7FFFFFF )
      {
        if ( v14 >= -134217728 )
          v52 = v14;
        else
          v52 = -134217728;
        v53 = v52;
      }
      else
      {
        v53 = 0x7FFFFFF;
      }
      if ( ((16 * v53) & v16[i + 16]) >= 0 )
      {
        if ( v14 <= 0x7FFFFFF )
        {
          if ( v14 >= -134217728 )
            v32 = v14;
          else
            v32 = -134217728;
          v33 = v32;
        }
        else
        {
          v33 = 0x7FFFFFF;
        }
        v34 = v16[i + 16] + 16 * v33;
      }
      else
      {
        v34 = 0x80000000;
      }
      v40 = v34;
    }
    v16[i + 16] = v40;
    if ( (((int)((v23 * (__int64)v16[i + 16]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((int)((v23 * (__int64)v16[i + 16]) >> 16) >> 7) + 1) >> 1 >= -32768 )
        v41 = (((int)((v23 * (__int64)v16[i + 16]) >> 16) >> 7) + 1) >> 1;
      else
        v41 = -32768;
      v42 = v41;
    }
    else
    {
      v42 = 0x7FFF;
    }
    if ( v42 <= 0x7FFF )
    {
      if ( (((int)((v23 * (__int64)v16[i + 16]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
      {
        if ( (((int)((v23 * (__int64)v16[i + 16]) >> 16) >> 7) + 1) >> 1 >= -32768 )
          v43 = (((int)((v23 * (__int64)v16[i + 16]) >> 16) >> 7) + 1) >> 1;
        else
          v43 = -32768;
        v44 = v43;
      }
      else
      {
        v44 = 0x7FFF;
      }
      if ( v44 >= -32768 )
      {
        if ( (((int)((v23 * (__int64)v16[i + 16]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
        {
          if ( (((int)((v23 * (__int64)v16[i + 16]) >> 16) >> 7) + 1) >> 1 >= -32768 )
            v45 = (((int)((v23 * (__int64)v16[i + 16]) >> 16) >> 7) + 1) >> 1;
          else
            v45 = -32768;
          v46 = v45;
        }
        else
        {
          v46 = 0x7FFF;
        }
        v47 = v46;
      }
      else
      {
        v47 = -32768;
      }
      v48 = v47;
    }
    else
    {
      v48 = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * i) = v48;
  }
  MEMORY[0x1401FC920](a1 + 1284, &v16[*(int *)(a1 + 2328)]);
  v17[13] = v27;
  *((_WORD *)v17 + 28) = v15;
  for ( i = 0; i < 4; ++i )
    *(_DWORD *)(a2 + 4LL * i) = v28;
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v65);
}

