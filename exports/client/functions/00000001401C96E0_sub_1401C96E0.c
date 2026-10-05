/* Address: 0x1401c96e0 | Name: sub_1401C96E0 | Size: 3133 bytes */
__int64 __fastcall sub_1401C96E0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rcx
  void *v5; // rsp
  int i; // [rsp+20h] [rbp+0h] BYREF
  int v8; // [rsp+24h] [rbp+4h]
  int *p_i; // [rsp+28h] [rbp+8h]
  signed int v10; // [rsp+30h] [rbp+10h]
  __int64 v11; // [rsp+38h] [rbp+18h]
  signed int v12; // [rsp+40h] [rbp+20h]
  int v13; // [rsp+44h] [rbp+24h]
  int v14; // [rsp+48h] [rbp+28h]
  int v15; // [rsp+4Ch] [rbp+2Ch]
  int v16; // [rsp+50h] [rbp+30h]
  int v17; // [rsp+54h] [rbp+34h]
  int v18; // [rsp+58h] [rbp+38h]
  int v19; // [rsp+5Ch] [rbp+3Ch]
  int v20; // [rsp+60h] [rbp+40h]
  int v21; // [rsp+64h] [rbp+44h]
  int v22; // [rsp+68h] [rbp+48h]
  int v23; // [rsp+6Ch] [rbp+4Ch]
  int v24; // [rsp+70h] [rbp+50h]
  int v25; // [rsp+74h] [rbp+54h]
  int v26; // [rsp+78h] [rbp+58h]
  int v27; // [rsp+7Ch] [rbp+5Ch]
  int v28; // [rsp+80h] [rbp+60h]
  int v29; // [rsp+84h] [rbp+64h]
  int v30; // [rsp+88h] [rbp+68h]
  int v31; // [rsp+8Ch] [rbp+6Ch]
  int v32; // [rsp+90h] [rbp+70h]
  int v33; // [rsp+94h] [rbp+74h]
  int v34; // [rsp+98h] [rbp+78h]
  int v35; // [rsp+9Ch] [rbp+7Ch]
  __int64 v36; // [rsp+A0h] [rbp+80h]
  __int64 v37; // [rsp+A8h] [rbp+88h]
  _DWORD *v38; // [rsp+B0h] [rbp+90h]
  _WORD v39[16]; // [rsp+B8h] [rbp+98h] BYREF
  __int64 v40; // [rsp+D8h] [rbp+B8h]

  v11 = a1 + 2796;
  if ( *(_DWORD *)(a1 + 2316) != *(_DWORD *)(a1 + 4180) )
  {
    sub_1401C9630((_DWORD *)a1);
    *(_DWORD *)(v11 + 1384) = *(_DWORD *)(a1 + 2316);
  }
  if ( !*(_DWORD *)(a1 + 4184) && !*(_DWORD *)(a1 + 4188) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 2340); ++i )
      *(_WORD *)(v11 + 2LL * i + 1280) += (unsigned int)(16348
                                                       * (*(__int16 *)(a1 + 2LL * i + 2344)
                                                        - *(__int16 *)(v11 + 2LL * i + 1280))) >> 16;
    v34 = 0;
    v35 = 0;
    for ( i = 0; i < *(_DWORD *)(a1 + 2324); ++i )
    {
      if ( *(_DWORD *)(a2 + 4LL * i + 16) > v34 )
      {
        v34 = *(_DWORD *)(a2 + 4LL * i + 16);
        v35 = i;
      }
    }
    v36 = v11 + 4LL * *(int *)(a1 + 2332);
    MEMORY[0x1401FC920](v36, v11);
    v4 = a1 + 4LL * *(_DWORD *)(a1 + 2332) * v35 + 4;
    v37 = v11;
    MEMORY[0x1401FC920](v11, v4);
    for ( i = 0; i < *(_DWORD *)(a1 + 2324); ++i )
      *(_DWORD *)(v11 + 1376) += (4634LL * (*(_DWORD *)(a2 + 4LL * i + 16) - *(_DWORD *)(v11 + 1376))) >> 16;
  }
  if ( *(_DWORD *)(a1 + 4184) )
  {
    v5 = alloca(sub_1401F89D0());
    p_i = &i;
    v10 = (*(int *)(a1 + 4272) * (__int64)*(__int16 *)(a1 + 4252)) >> 16;
    if ( v10 < 0x200000 && *(int *)(v11 + 1376) <= 0x800000 )
    {
      v10 = (v10 * (__int64)v10) >> 16;
      v10 = ((*(int *)(v11 + 1376) * (__int64)*(int *)(v11 + 1376)) >> 16) - 32 * v10;
      v10 = (unsigned int)sub_1401BE4C0(v10) << 8;
    }
    else
    {
      v10 = (v10 >> 16) * (v10 >> 16);
      v10 = (*(int *)(v11 + 1376) >> 16) * (*(int *)(v11 + 1376) >> 16) - 32 * v10;
      v10 = (unsigned int)sub_1401BE4C0(v10) << 16;
    }
    v12 = v10 >> 6;
    v38 = p_i + 16;
    sub_1401CA9F0(p_i + 16, v11, a4, v11 + 1380);
    CWinApp::ShowAppMessageBox((struct CWinApp *)v39, (const char *)(v11 + 1280), *(_DWORD *)(a1 + 2340));
    MEMORY[0x1401FC920](p_i, v11 + 1312);
    for ( i = 0; i < (int)a4; ++i )
    {
      v8 = *(int *)(a1 + 2340) >> 1;
      v8 += (v39[0] * (__int64)p_i[i + 15]) >> 16;
      v8 += (v39[1] * (__int64)p_i[i + 14]) >> 16;
      v8 += (v39[2] * (__int64)p_i[i + 13]) >> 16;
      v8 += (v39[3] * (__int64)p_i[i + 12]) >> 16;
      v8 += (v39[4] * (__int64)p_i[i + 11]) >> 16;
      v8 += (v39[5] * (__int64)p_i[i + 10]) >> 16;
      v8 += (v39[6] * (__int64)p_i[i + 9]) >> 16;
      v8 += (v39[7] * (__int64)p_i[i + 8]) >> 16;
      v8 += (v39[8] * (__int64)p_i[i + 7]) >> 16;
      v8 += (v39[9] * (__int64)p_i[i + 6]) >> 16;
      if ( *(_DWORD *)(a1 + 2340) == 16 )
      {
        v8 += (v39[10] * (__int64)p_i[i + 5]) >> 16;
        v8 += (v39[11] * (__int64)p_i[i + 4]) >> 16;
        v8 += (v39[12] * (__int64)p_i[i + 3]) >> 16;
        v8 += (v39[13] * (__int64)p_i[i + 2]) >> 16;
        v8 += (v39[14] * (__int64)p_i[i + 1]) >> 16;
        v8 += (v39[15] * (__int64)p_i[i]) >> 16;
      }
      if ( v8 <= 0x7FFFFFF )
      {
        if ( v8 >= -134217728 )
          v13 = v8;
        else
          v13 = -134217728;
        v14 = v13;
      }
      else
      {
        v14 = 0x7FFFFFF;
      }
      if ( 16 * v14 + p_i[i + 16] < 0 )
      {
        if ( v8 <= 0x7FFFFFF )
        {
          if ( v8 >= -134217728 )
            v20 = v8;
          else
            v20 = -134217728;
          v21 = v20;
        }
        else
        {
          v21 = 0x7FFFFFF;
        }
        if ( ((16 * v21) | p_i[i + 16]) < 0 )
        {
          if ( v8 <= 0x7FFFFFF )
          {
            if ( v8 >= -134217728 )
              v22 = v8;
            else
              v22 = -134217728;
            v23 = v22;
          }
          else
          {
            v23 = 0x7FFFFFF;
          }
          v24 = p_i[i + 16] + 16 * v23;
        }
        else
        {
          v24 = 0x7FFFFFFF;
        }
        v25 = v24;
      }
      else
      {
        if ( v8 <= 0x7FFFFFF )
        {
          if ( v8 >= -134217728 )
            v15 = v8;
          else
            v15 = -134217728;
          v16 = v15;
        }
        else
        {
          v16 = 0x7FFFFFF;
        }
        if ( ((16 * v16) & p_i[i + 16]) >= 0 )
        {
          if ( v8 <= 0x7FFFFFF )
          {
            if ( v8 >= -134217728 )
              v17 = v8;
            else
              v17 = -134217728;
            v18 = v17;
          }
          else
          {
            v18 = 0x7FFFFFF;
          }
          v19 = p_i[i + 16] + 16 * v18;
        }
        else
        {
          v19 = 0x80000000;
        }
        v25 = v19;
      }
      p_i[i + 16] = v25;
      if ( (((int)((v12 * (__int64)p_i[i + 16]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
      {
        if ( (((int)((v12 * (__int64)p_i[i + 16]) >> 16) >> 7) + 1) >> 1 >= -32768 )
          v26 = (((int)((v12 * (__int64)p_i[i + 16]) >> 16) >> 7) + 1) >> 1;
        else
          v26 = -32768;
        v27 = v26;
      }
      else
      {
        v27 = 0x7FFF;
      }
      if ( v27 + *(__int16 *)(a3 + 2LL * i) <= 0x7FFF )
      {
        if ( (((int)((v12 * (__int64)p_i[i + 16]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
        {
          if ( (((int)((v12 * (__int64)p_i[i + 16]) >> 16) >> 7) + 1) >> 1 >= -32768 )
            v28 = (((int)((v12 * (__int64)p_i[i + 16]) >> 16) >> 7) + 1) >> 1;
          else
            v28 = -32768;
          v29 = v28;
        }
        else
        {
          v29 = 0x7FFF;
        }
        if ( v29 + *(__int16 *)(a3 + 2LL * i) >= -32768 )
        {
          if ( (((int)((v12 * (__int64)p_i[i + 16]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
          {
            if ( (((int)((v12 * (__int64)p_i[i + 16]) >> 16) >> 7) + 1) >> 1 >= -32768 )
              v30 = (((int)((v12 * (__int64)p_i[i + 16]) >> 16) >> 7) + 1) >> 1;
            else
              v30 = -32768;
            v31 = v30;
          }
          else
          {
            v31 = 0x7FFF;
          }
          v32 = v31 + *(__int16 *)(a3 + 2LL * i);
        }
        else
        {
          v32 = -32768;
        }
        v33 = v32;
      }
      else
      {
        v33 = 0x7FFF;
      }
      *(_WORD *)(a3 + 2LL * i) = v33;
    }
    MEMORY[0x1401FC920](v11 + 1312, &p_i[a4]);
  }
  else
  {
    MEMORY[0x1401FCD30](v11 + 1312, 0, 4LL * *(int *)(a1 + 2340));
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v40);
}

