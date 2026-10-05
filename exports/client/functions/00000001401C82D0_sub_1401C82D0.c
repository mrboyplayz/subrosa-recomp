/* Address: 0x1401c82d0 | Name: sub_1401C82D0 | Size: 4051 bytes */
__int64 __fastcall sub_1401C82D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  void *v5; // rsp
  void *v6; // rsp
  void *v7; // rsp
  void *v8; // rsp
  int v9; // eax
  int v10; // ecx
  int v12; // [rsp+28h] [rbp-8h]
  int i; // [rsp+30h] [rbp+0h] BYREF
  int v14; // [rsp+34h] [rbp+4h]
  int j; // [rsp+38h] [rbp+8h]
  int *v16; // [rsp+40h] [rbp+10h]
  int v17; // [rsp+48h] [rbp+18h]
  int v18; // [rsp+4Ch] [rbp+1Ch]
  int v19; // [rsp+50h] [rbp+20h]
  int v20; // [rsp+54h] [rbp+24h]
  int v21; // [rsp+58h] [rbp+28h]
  int *v22; // [rsp+60h] [rbp+30h]
  int v23; // [rsp+68h] [rbp+38h]
  int v24; // [rsp+6Ch] [rbp+3Ch]
  int v25; // [rsp+70h] [rbp+40h]
  int v26; // [rsp+74h] [rbp+44h]
  __int16 *v27; // [rsp+78h] [rbp+48h]
  int *v28; // [rsp+80h] [rbp+50h]
  int v29; // [rsp+88h] [rbp+58h]
  int v30; // [rsp+8Ch] [rbp+5Ch]
  int v31; // [rsp+90h] [rbp+60h]
  int v32; // [rsp+94h] [rbp+64h]
  int v33; // [rsp+98h] [rbp+68h]
  int v34; // [rsp+9Ch] [rbp+6Ch]
  int v35; // [rsp+A0h] [rbp+70h]
  int v36; // [rsp+A4h] [rbp+74h]
  int v37; // [rsp+A8h] [rbp+78h]
  int v38; // [rsp+ACh] [rbp+7Ch]
  int v39; // [rsp+B0h] [rbp+80h]
  int v40; // [rsp+B4h] [rbp+84h]
  BOOL v41; // [rsp+B8h] [rbp+88h]
  int v42; // [rsp+BCh] [rbp+8Ch]
  int v43; // [rsp+C0h] [rbp+90h]
  int v44; // [rsp+C4h] [rbp+94h]
  int *v45; // [rsp+C8h] [rbp+98h]
  int *v46; // [rsp+D0h] [rbp+A0h]
  int v47; // [rsp+D8h] [rbp+A8h]
  __int64 v48; // [rsp+E0h] [rbp+B0h]
  __int16 *v49; // [rsp+E8h] [rbp+B8h]
  int *v50; // [rsp+F0h] [rbp+C0h]
  int *v51; // [rsp+F8h] [rbp+C8h]
  __int64 v52; // [rsp+100h] [rbp+D0h]
  _WORD v53[16]; // [rsp+108h] [rbp+D8h] BYREF
  __int64 v54; // [rsp+128h] [rbp+F8h]

  v20 = 0;
  v5 = alloca(sub_1401F89D0());
  v50 = &i;
  v6 = alloca(sub_1401F89D0());
  v45 = &i;
  v7 = alloca(sub_1401F89D0());
  v51 = &i;
  v8 = alloca(sub_1401F89D0());
  v16 = &i;
  v47 = word_1402827F8[2 * (*(char *)(a1 + 2789) >> 1) + *(char *)(a1 + 2790)];
  v41 = *(char *)(a1 + 2791) < 4;
  v19 = *(char *)(a1 + 2794);
  for ( i = 0; i < *(_DWORD *)(a1 + 2328); ++i )
  {
    v19 = 196314165 * v19 + 907633515;
    *(_DWORD *)(a1 + 4LL * i + 4) = *(__int16 *)(a4 + 2LL * i) << 14;
    if ( *(int *)(a1 + 4LL * i + 4) <= 0 )
    {
      if ( *(int *)(a1 + 4LL * i + 4) < 0 )
        *(_DWORD *)(a1 + 4LL * i + 4) += 1280;
    }
    else
    {
      *(_DWORD *)(a1 + 4LL * i + 4) -= 1280;
    }
    *(_DWORD *)(a1 + 4LL * i + 4) += 16 * v47;
    if ( v19 < 0 )
      *(_DWORD *)(a1 + 4LL * i + 4) = -*(_DWORD *)(a1 + 4LL * i + 4);
    v19 += *(__int16 *)(a4 + 2LL * i);
  }
  MEMORY[0x1401FC920](v16, a1 + 1284);
  v46 = (int *)(a1 + 4);
  v48 = a3;
  v18 = *(_DWORD *)(a1 + 2336);
  for ( j = 0; j < *(_DWORD *)(a1 + 2324); ++j )
  {
    v22 = v51;
    v49 = (__int16 *)(a2 + 32LL * (j >> 1) + 32);
    MEMORY[0x1401FC920](v53, v49);
    v27 = (__int16 *)(a2 + 10LL * j + 96);
    v25 = *(char *)(a1 + 2789);
    v26 = *(int *)(a2 + 4LL * j + 16) >> 6;
    v24 = sub_1401BE820(*(_DWORD *)(a2 + 4LL * j + 16), 47);
    if ( *(_DWORD *)(a2 + 4LL * j + 16) == *(_DWORD *)a1 )
    {
      v21 = 0x10000;
    }
    else
    {
      v21 = sub_1401BE550(*(_DWORD *)a1, *(_DWORD *)(a2 + 4LL * j + 16), 16);
      for ( i = 0; i < 16; ++i )
        v16[i] = (v16[i] * (__int64)v21) >> 16;
    }
    *(_DWORD *)a1 = *(_DWORD *)(a2 + 4LL * j + 16);
    if ( *(_DWORD *)(a1 + 4184) && *(_DWORD *)(a1 + 4188) == 2 && *(_BYTE *)(a1 + 2789) != 2 && j < 2 )
    {
      MEMORY[0x1401FCD30](v27, 0, 10);
      v27[2] = 4096;
      v25 = 2;
      *(_DWORD *)(a2 + 4LL * j) = *(_DWORD *)(a1 + 2308);
    }
    if ( v25 == 2 )
    {
      v20 = *(_DWORD *)(a2 + 4LL * j);
      if ( !j || j == 2 && v41 )
      {
        v23 = *(_DWORD *)(a1 + 2336) - v20 - *(_DWORD *)(a1 + 2340) - 2;
        if ( j == 2 )
          MEMORY[0x1401FC920](a1 + 2LL * *(int *)(a1 + 2336) + 1348, a3);
        v9 = *(_DWORD *)(a1 + 2336) - v23;
        v10 = *(_DWORD *)(a1 + 2332) * j;
        v52 = (__int64)v50 + 2 * v23;
        v12 = a5;
        sub_1401BBB40(v52, a1 + 2LL * (v10 + v23) + 1348, v49, v9, *(_DWORD *)(a1 + 2340));
        if ( !j )
          v24 = 4 * ((*(__int16 *)(a2 + 136) * (__int64)v24) >> 16);
        for ( i = 0; i < v20 + 2; ++i )
          v45[v18 - i - 1] = (*((__int16 *)v50 + *(_DWORD *)(a1 + 2336) - i - 1) * (__int64)v24) >> 16;
      }
      else if ( v21 != 0x10000 )
      {
        for ( i = 0; i < v20 + 2; ++i )
          v45[v18 - i - 1] = (v45[v18 - i - 1] * (__int64)v21) >> 16;
      }
    }
    if ( v25 == 2 )
    {
      v28 = &v45[v18 - v20 + 2];
      for ( i = 0; i < *(_DWORD *)(a1 + 2332); ++i )
      {
        v17 = 2;
        v17 = ((*v27 * (__int64)*v28) >> 16) + 2;
        v17 += (v27[1] * (__int64)*(v28 - 1)) >> 16;
        v17 += (v27[2] * (__int64)*(v28 - 2)) >> 16;
        v17 += (v27[3] * (__int64)*(v28 - 3)) >> 16;
        v17 += (v27[4] * (__int64)*(v28 - 4)) >> 16;
        ++v28;
        v22[i] = v46[i] + 2 * v17;
        v45[v18++] = 2 * v22[i];
      }
    }
    else
    {
      v22 = v46;
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 2332); ++i )
    {
      v14 = *(int *)(a1 + 2340) >> 1;
      v14 += (v53[0] * (__int64)v16[i + 15]) >> 16;
      v14 += (v53[1] * (__int64)v16[i + 14]) >> 16;
      v14 += (v53[2] * (__int64)v16[i + 13]) >> 16;
      v14 += (v53[3] * (__int64)v16[i + 12]) >> 16;
      v14 += (v53[4] * (__int64)v16[i + 11]) >> 16;
      v14 += (v53[5] * (__int64)v16[i + 10]) >> 16;
      v14 += (v53[6] * (__int64)v16[i + 9]) >> 16;
      v14 += (v53[7] * (__int64)v16[i + 8]) >> 16;
      v14 += (v53[8] * (__int64)v16[i + 7]) >> 16;
      v14 += (v53[9] * (__int64)v16[i + 6]) >> 16;
      if ( *(_DWORD *)(a1 + 2340) == 16 )
      {
        v14 += (v53[10] * (__int64)v16[i + 5]) >> 16;
        v14 += (v53[11] * (__int64)v16[i + 4]) >> 16;
        v14 += (v53[12] * (__int64)v16[i + 3]) >> 16;
        v14 += (v53[13] * (__int64)v16[i + 2]) >> 16;
        v14 += (v53[14] * (__int64)v16[i + 1]) >> 16;
        v14 += (v53[15] * (__int64)v16[i]) >> 16;
      }
      if ( v14 <= 0x7FFFFFF )
      {
        if ( v14 >= -134217728 )
          v42 = v14;
        else
          v42 = -134217728;
        v43 = v42;
      }
      else
      {
        v43 = 0x7FFFFFF;
      }
      if ( 16 * v43 + v22[i] < 0 )
      {
        if ( v14 <= 0x7FFFFFF )
        {
          if ( v14 >= -134217728 )
            v33 = v14;
          else
            v33 = -134217728;
          v34 = v33;
        }
        else
        {
          v34 = 0x7FFFFFF;
        }
        if ( ((16 * v34) | v22[i]) < 0 )
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
          v37 = v22[i] + 16 * v36;
        }
        else
        {
          v37 = 0x7FFFFFFF;
        }
        v38 = v37;
      }
      else
      {
        if ( v14 <= 0x7FFFFFF )
        {
          if ( v14 >= -134217728 )
            v44 = v14;
          else
            v44 = -134217728;
          v29 = v44;
        }
        else
        {
          v29 = 0x7FFFFFF;
        }
        if ( ((16 * v29) & v22[i]) >= 0 )
        {
          if ( v14 <= 0x7FFFFFF )
          {
            if ( v14 >= -134217728 )
              v30 = v14;
            else
              v30 = -134217728;
            v31 = v30;
          }
          else
          {
            v31 = 0x7FFFFFF;
          }
          v32 = v22[i] + 16 * v31;
        }
        else
        {
          v32 = 0x80000000;
        }
        v38 = v32;
      }
      v16[i + 16] = v38;
      if ( (((int)((v26 * (__int64)v16[i + 16]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
      {
        if ( (((int)((v26 * (__int64)v16[i + 16]) >> 16) >> 7) + 1) >> 1 >= -32768 )
          v39 = (((int)((v26 * (__int64)v16[i + 16]) >> 16) >> 7) + 1) >> 1;
        else
          v39 = -32768;
        v40 = v39;
      }
      else
      {
        v40 = 0x7FFF;
      }
      *(_WORD *)(v48 + 2LL * i) = v40;
    }
    MEMORY[0x1401FC920](v16, &v16[*(int *)(a1 + 2332)]);
    v46 += *(int *)(a1 + 2332);
    v48 += 2LL * *(int *)(a1 + 2332);
  }
  MEMORY[0x1401FC920](a1 + 1284, v16);
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v54);
}

