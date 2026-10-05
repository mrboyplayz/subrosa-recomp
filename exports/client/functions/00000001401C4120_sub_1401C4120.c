/* Address: 0x1401c4120 | Name: sub_1401C4120 | Size: 3716 bytes */
__int64 __fastcall sub_1401C4120(
        _DWORD *a1,
        _DWORD *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _DWORD *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  void *v15; // rsp
  void *v16; // rsp
  void *v17; // rsp
  void *v18; // rsp
  void *v19; // rsp
  int v20; // eax
  int v21; // ecx
  char *v22; // rcx
  __int64 v23; // rcx
  int v25; // [rsp+40h] [rbp-A0h] BYREF
  int i; // [rsp+E0h] [rbp+0h] BYREF
  signed int j; // [rsp+E4h] [rbp+4h]
  int v28; // [rsp+E8h] [rbp+8h]
  signed int v29; // [rsp+ECh] [rbp+Ch]
  int *v30; // [rsp+F0h] [rbp+10h]
  int *v31; // [rsp+F8h] [rbp+18h]
  signed int v32; // [rsp+100h] [rbp+20h]
  int v33; // [rsp+104h] [rbp+24h]
  int v34; // [rsp+108h] [rbp+28h]
  int v35; // [rsp+10Ch] [rbp+2Ch]
  BOOL v36; // [rsp+110h] [rbp+30h]
  int v37; // [rsp+114h] [rbp+34h]
  int v38; // [rsp+118h] [rbp+38h]
  int v39; // [rsp+11Ch] [rbp+3Ch] BYREF
  int v40; // [rsp+120h] [rbp+40h]
  int v41; // [rsp+124h] [rbp+44h]
  int v42; // [rsp+128h] [rbp+48h]
  int v43; // [rsp+12Ch] [rbp+4Ch]
  __int64 v44; // [rsp+130h] [rbp+50h]
  __int64 v45; // [rsp+138h] [rbp+58h]
  int v46; // [rsp+140h] [rbp+60h]
  int v47; // [rsp+144h] [rbp+64h]
  int *v48; // [rsp+148h] [rbp+68h]
  __int16 *v49; // [rsp+150h] [rbp+70h]
  int *p_i; // [rsp+158h] [rbp+78h]
  int *v51; // [rsp+160h] [rbp+80h]
  __int64 v52; // [rsp+168h] [rbp+88h]
  __int64 v53; // [rsp+170h] [rbp+90h]
  __int64 v54; // [rsp+178h] [rbp+98h]
  int *v55; // [rsp+180h] [rbp+A0h]
  _DWORD *v56; // [rsp+188h] [rbp+A8h]
  _DWORD *v57; // [rsp+190h] [rbp+B0h]
  __int64 v58; // [rsp+198h] [rbp+B8h]

  v33 = a2[1082];
  v15 = alloca(sub_1401F89D0());
  v31 = &i;
  MEMORY[0x1401FCD30](&i, 0, 1300LL * (int)a1[1157]);
  for ( i = 0; i < a1[1157]; ++i )
  {
    v30 = &v31[325 * i];
    v30[322] = (a3[34] + (_BYTE)i) & 3;
    v30[323] = v30[322];
    v30[324] = 0;
    v30[320] = a2[1080];
    v30[321] = a2[1081];
    v30[256] = a2[a1[1148] + 319];
    MEMORY[0x1401FC920](v30, a2 + 960);
    MEMORY[0x1401FC920](v30 + 296, a2 + 1056);
  }
  v47 = word_1402827F8[2 * (a3[29] >> 1) + a3[30]];
  v39 = 0;
  v29 = sub_1401BE320(0x28u, a1[1147]);
  if ( a3[29] == 2 )
  {
    for ( i = 0; i < a1[1145]; ++i )
      v29 = sub_1401BE320(v29, *(_DWORD *)(a13 + 4LL * i) - 3);
  }
  else if ( v33 > 0 )
  {
    v29 = sub_1401BE320(v29, v33 - 3);
  }
  v36 = a3[31] != 4;
  v16 = alloca(sub_1401F89D0());
  p_i = &i;
  v17 = alloca(sub_1401F89D0());
  v48 = &i;
  v18 = alloca(sub_1401F89D0());
  v51 = &i;
  v19 = alloca(160);
  v55 = &v25;
  v45 = (__int64)a2 + 2 * a1[1148];
  a2[1084] = a1[1148];
  a2[1083] = a1[1148];
  v35 = 0;
  for ( i = 0; i < a1[1145]; ++i )
  {
    v49 = (__int16 *)(a6 + 32LL * ((1 - v36) | (i >> 1)));
    v54 = a7 + 10LL * i;
    v53 = a8 + 48LL * i;
    v38 = a9[i] >> 2;
    v38 |= a9[i] >> 1 << 16;
    a2[1087] = 0;
    if ( a3[29] == 2 )
    {
      v33 = *(_DWORD *)(a13 + 4LL * i);
      if ( ((3 - 2 * v36) & i) == 0 )
      {
        if ( i == 2 )
        {
          v34 = v31[324];
          v32 = 0;
          for ( j = 1; j < a1[1157]; ++j )
          {
            if ( v31[325 * j + 324] < v34 )
            {
              v34 = v31[325 * j + 324];
              v32 = j;
            }
          }
          for ( j = 0; j < a1[1157]; ++j )
          {
            if ( j != v32 )
              v31[325 * j + 324] += 0x7FFFFFF;
          }
          v30 = &v31[325 * v32];
          v28 = v29 + v39;
          for ( j = 0; j < v29; ++j )
          {
            v28 = (v28 - 1) % 40;
            v28 += v28 < 0 ? 0x28 : 0;
            *(_BYTE *)(a5 + j - v29) = ((v30[v28 + 136] >> 9) + 1) >> 1;
            if ( (((int)((*(int *)(a12 + 4) * (__int64)v30[v28 + 176]) >> 16) >> 13) + 1) >> 1 <= 0x7FFF )
            {
              if ( (((int)((*(int *)(a12 + 4) * (__int64)v30[v28 + 176]) >> 16) >> 13) + 1) >> 1 >= -32768 )
                v41 = (((int)((*(int *)(a12 + 4) * (__int64)v30[v28 + 176]) >> 16) >> 13) + 1) >> 1;
              else
                v41 = -32768;
              v42 = v41;
            }
            else
            {
              v42 = 0x7FFF;
            }
            *(_WORD *)(v45 + 2LL * (j - v29)) = v42;
            a2[j + 320 + a2[1084] - v29] = v30[v28 + 256];
          }
          v35 = 0;
        }
        v37 = a1[1148] - v33 - a1[1160] - 2;
        v20 = a1[1148] - v37;
        v21 = a1[1147] * i;
        v52 = (__int64)v48 + 2 * v37;
        sub_1401BBB40(v52, (__int64)a2 + 2 * v21 + 2 * v37, v49, v20, a1[1160]);
        a2[1083] = a1[1148];
        a2[1087] = 1;
      }
    }
    sub_1401D82A0(
      (_DWORD)a1,
      (_DWORD)a2,
      (_DWORD)v31,
      a4,
      (__int64)v51,
      (__int64)v48,
      (__int64)p_i,
      i,
      a1[1157],
      a15,
      a12,
      a13,
      a3[29],
      v29);
    v46 = v35;
    sub_1401D8730(
      (_DWORD)a2,
      (_DWORD)v31,
      a3[29],
      (_DWORD)v51,
      a5,
      v45,
      (__int64)p_i,
      (__int64)v55,
      (__int64)v49,
      v54,
      v53,
      v33,
      v38,
      a10[i],
      *(_DWORD *)(a11 + 4LL * i),
      *(_DWORD *)(a12 + 4LL * i),
      a14,
      v47,
      a1[1147],
      v35++,
      a1[1159],
      a1[1160],
      a1[1168],
      a1[1157],
      (__int64)&v39,
      v29);
    a4 += 2LL * (int)a1[1147];
    a5 += (int)a1[1147];
    v45 += 2LL * (int)a1[1147];
  }
  v34 = v31[324];
  v32 = 0;
  for ( i = 1; i < a1[1157]; ++i )
  {
    if ( v31[325 * i + 324] < v34 )
    {
      v34 = v31[325 * i + 324];
      v32 = i;
    }
  }
  v30 = &v31[325 * v32];
  a3[34] = *((_BYTE *)v30 + 1292);
  v28 = v29 + v39;
  v40 = *(int *)(a12 + 4LL * (a1[1145] - 1)) >> 6;
  for ( j = 0; j < v29; ++j )
  {
    v28 = (v28 - 1) % 40;
    v28 += v28 < 0 ? 0x28 : 0;
    *(_BYTE *)(a5 + j - v29) = ((v30[v28 + 136] >> 9) + 1) >> 1;
    if ( (((int)((v40 * (__int64)v30[v28 + 176]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((int)((v40 * (__int64)v30[v28 + 176]) >> 16) >> 7) + 1) >> 1 >= -32768 )
        v43 = (((int)((v40 * (__int64)v30[v28 + 176]) >> 16) >> 7) + 1) >> 1;
      else
        v43 = -32768;
      LODWORD(v44) = v43;
    }
    else
    {
      LODWORD(v44) = 0x7FFF;
    }
    *(_WORD *)(v45 + 2LL * (j - v29)) = v44;
    a2[j + 320 + a2[1084] - v29] = v30[v28 + 256];
  }
  MEMORY[0x1401FC920](a2 + 960, &v30[a1[1147]]);
  MEMORY[0x1401FC920](a2 + 1056, v30 + 296);
  a2[1080] = v30[320];
  a2[1081] = v30[321];
  a2[1082] = *(_DWORD *)(a13 + 4LL * (a1[1145] - 1));
  v22 = (char *)a2 + 2 * a1[1146];
  v56 = a2;
  MEMORY[0x1401FC920](a2, v22);
  v23 = (__int64)&a2[a1[1146] + 320];
  v57 = a2 + 320;
  MEMORY[0x1401FC920](a2 + 320, v23);
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v58);
}

