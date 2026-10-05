/* Address: 0x1401ccb60 | Name: sub_1401CCB60 | Size: 4867 bytes */
__int64 __fastcall sub_1401CCB60(_DWORD *a1, _DWORD *a2, int a3, int a4, __int64 a5, int *a6, int *a7, unsigned int a8)
{
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  void *v15; // rsp
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  int v18; // eax
  int v19; // eax
  int i; // [rsp+40h] [rbp+0h] BYREF
  int j; // [rsp+44h] [rbp+4h]
  _DWORD *v23; // [rsp+48h] [rbp+8h]
  int v24; // [rsp+50h] [rbp+10h]
  _DWORD *v25; // [rsp+58h] [rbp+18h]
  int v26; // [rsp+60h] [rbp+20h] BYREF
  int v27; // [rsp+64h] [rbp+24h] BYREF
  int v28; // [rsp+68h] [rbp+28h]
  int v29; // [rsp+6Ch] [rbp+2Ch]
  BOOL v30; // [rsp+70h] [rbp+30h]
  int *v31; // [rsp+78h] [rbp+38h]
  __int64 v32; // [rsp+80h] [rbp+40h]
  BOOL v33; // [rsp+88h] [rbp+48h]
  int v34; // [rsp+8Ch] [rbp+4Ch]
  BOOL v35; // [rsp+90h] [rbp+50h]
  int v36; // [rsp+94h] [rbp+54h]
  BOOL v37; // [rsp+98h] [rbp+58h]
  BOOL v38; // [rsp+9Ch] [rbp+5Ch]
  BOOL v39; // [rsp+A0h] [rbp+60h]
  int v40; // [rsp+A4h] [rbp+64h]
  int v41; // [rsp+A8h] [rbp+68h]
  int v42; // [rsp+ACh] [rbp+6Ch]
  int v43; // [rsp+B0h] [rbp+70h]
  int v44; // [rsp+B4h] [rbp+74h]
  int *v45; // [rsp+B8h] [rbp+78h]
  _DWORD v46[2]; // [rsp+C0h] [rbp+80h] BYREF
  int *v47; // [rsp+C8h] [rbp+88h]
  int v48; // [rsp+D0h] [rbp+90h]
  BOOL v49; // [rsp+D4h] [rbp+94h]
  int *p_i; // [rsp+D8h] [rbp+98h]
  int *v51; // [rsp+E0h] [rbp+A0h]
  _DWORD v52[6]; // [rsp+E8h] [rbp+A8h]
  char v53[640]; // [rsp+100h] [rbp+C0h] BYREF
  __int64 v54; // [rsp+380h] [rbp+340h]

  v27 = 0;
  v24 = 0;
  memset(v46, 0, sizeof(v46));
  v25 = a1;
  v23 = a1;
  if ( a4 )
  {
    for ( i = 0; i < a2[1]; ++i )
      v23[1072 * i + 600] = 0;
  }
  if ( a2[1] > v25[2148] )
    v24 += sub_1401C7180(v23 + 1072);
  v33 = a2[1] == 1 && v25[2148] == 2 && a2[3] == 1000 * v23[579];
  v49 = v33;
  if ( !v23[600] )
  {
    for ( i = 0; i < a2[1]; ++i )
    {
      if ( a2[4] )
      {
        switch ( a2[4] )
        {
          case 0xA:
            v23[1072 * i + 601] = 1;
            v23[1072 * i + 581] = 2;
            break;
          case 0x14:
            v23[1072 * i + 601] = 1;
            v23[1072 * i + 581] = 4;
            break;
          case 0x28:
            v23[1072 * i + 601] = 2;
            v23[1072 * i + 581] = 4;
            break;
          case 0x3C:
            v23[1072 * i + 601] = 3;
            v23[1072 * i + 581] = 4;
            break;
          default:
            return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v54);
        }
      }
      else
      {
        v23[1072 * i + 601] = 1;
        v23[1072 * i + 581] = 2;
      }
      v28 = ((int)a2[3] >> 10) + 1;
      if ( v28 != 8 && v28 != 12 && v28 != 16 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v54);
      v24 += sub_1401C71F0((__int64)&v23[1072 * i], v28, a2[2]);
    }
  }
  if ( *a2 == 2 && a2[1] == 2 && (v25[2147] == 1 || v25[2148] == 1) )
  {
    MEMORY[0x1401FCD30](v25 + 2144, 0, 4);
    MEMORY[0x1401FCD30](v25 + 2146, 0, 4);
    MEMORY[0x1401FC920](v23 + 1684, v23 + 612);
  }
  v25[2147] = *a2;
  v25[2148] = a2[1];
  if ( (int)a2[2] <= 48000 && (int)a2[2] >= 8000 )
  {
    if ( a3 != 1 && !v23[600] )
    {
      for ( i = 0; i < a2[1]; ++i )
      {
        for ( j = 0; j < v23[1072 * i + 601]; ++j )
          v23[1072 * i + 604 + j] = sub_14019AF20(a5, 1);
        v23[1072 * i + 607] = sub_14019AF20(a5, 1);
      }
      for ( i = 0; i < a2[1]; ++i )
      {
        MEMORY[0x1401FCD30](&v23[1072 * i + 608], 0, 12);
        if ( v23[1072 * i + 607] )
        {
          if ( v23[1072 * i + 601] == 1 )
          {
            v23[1072 * i + 608] = 1;
          }
          else
          {
            v48 = sub_14019AFE0(a5, (__int64)*(&off_1402827E0 + v23[1072 * i + 601] - 2), 8) + 1;
            for ( j = 0; j < v23[1072 * i + 601]; ++j )
              v23[1072 * i + 608 + j] = (v48 >> j) & 1;
          }
        }
      }
      if ( !a3 )
      {
        for ( j = 0; j < v23[601]; ++j )
        {
          for ( i = 0; i < a2[1]; ++i )
          {
            if ( v23[1072 * i + 608 + j] )
            {
              if ( a2[1] == 2 && !i )
              {
                sub_1401C0AA0(a5, v46);
                if ( !v23[j + 1680] )
                  sub_1401C0D30(a5, &v27);
              }
              if ( j > 0 && v23[1072 * i + 607 + j] )
                v34 = 2;
              else
                v34 = 0;
              sub_1401C7770((__int64)&v23[1072 * i], a5, j, 1, v34);
              sub_1401C92B0(
                a5,
                (__int64)v53,
                SBYTE1(v23[1072 * i + 697]),
                SBYTE2(v23[1072 * i + 697]),
                v23[1072 * i + 582]);
            }
          }
        }
      }
    }
    if ( a2[1] == 2 )
    {
      if ( !a3 || a3 == 2 && v23[v23[600] + 608] == 1 )
      {
        sub_1401C0AA0(a5, v46);
        if ( (a3 || v23[v23[600] + 1676]) && (a3 != 2 || v23[v23[600] + 1680]) )
          v27 = 0;
        else
          sub_1401C0D30(a5, &v27);
      }
      else
      {
        for ( i = 0; i < 2; ++i )
          v46[i] = *((__int16 *)v25 + i + 4288);
      }
    }
    if ( a2[1] == 2 && !v27 && v25[2149] == 1 )
    {
      MEMORY[0x1401FCD30](v25 + 1409, 0, 960);
      MEMORY[0x1401FCD30](v25 + 1393, 0, 64);
      v25[1649] = 100;
      *((_BYTE *)v25 + 6600) = 10;
      v25[2119] = 0;
      v25[1666] = 1;
    }
    v35 = a2[1] * a2[3] < *a2 * a2[2];
    v30 = v35;
    if ( v35 )
      v36 = 0;
    else
      v36 = (v23[582] + 2) * a2[1];
    v8 = 2LL * v36 + 15;
    if ( v8 <= 2LL * v36 )
      v8 = 0xFFFFFFFFFFFFFF0LL;
    v9 = alloca(sub_1401F89D0(v8 & 0xFFFFFFFFFFFFFFF0uLL, a2));
    p_i = &i;
    if ( v30 )
    {
      v31 = a6;
      v32 = (__int64)a6 + 2 * v23[582] + 4;
    }
    else
    {
      v31 = p_i;
      v32 = (__int64)p_i + 2 * v23[582] + 4;
    }
    if ( a3 )
    {
      v38 = !v25[2149] || a2[1] == 2 && a3 == 2 && v23[v23[1672] + 1680] == 1;
      v39 = v38;
    }
    else
    {
      v37 = v27 == 0;
      v39 = v37;
    }
    for ( i = 0; i < a2[1]; ++i )
    {
      if ( i && !v39 )
      {
        MEMORY[0x1401FCD30]((&v31)[i] + 1, 0, 2LL * v26);
      }
      else
      {
        v40 = v23[600] - i;
        if ( v40 > 0 )
        {
          if ( a3 == 2 )
          {
            if ( v23[1072 * i + 607 + v40] )
              v41 = 2;
            else
              v41 = 0;
            v29 = v41;
          }
          else if ( i > 0 && v25[2149] )
          {
            v29 = 1;
          }
          else
          {
            v29 = 2;
          }
        }
        else
        {
          v29 = 0;
        }
        v10 = sub_1401C74B0((__int64)&v23[1072 * i], a5, (__int64)((&v31)[i] + 1), (unsigned int *)&v26, a3, v29, a8);
        v24 += v10;
      }
      ++v23[1072 * i + 600];
    }
    if ( *a2 == 2 && a2[1] == 2 )
    {
      sub_1401BFD30((__int16 *)v25 + 4288, (__int64)v31, v32, v46, v23[579], v26);
    }
    else
    {
      MEMORY[0x1401FC920](v31, v25 + 2145);
      MEMORY[0x1401FC920](v25 + 2145, (char *)v31 + 2 * v26);
    }
    v11 = 1000 * *((__int16 *)v23 + 1158);
    v12 = (unsigned int)((a2[2] * v26) >> 31);
    LODWORD(v12) = a2[2] * v26 % v11;
    *a7 = a2[2] * v26 / v11;
    if ( *a2 == 2 )
      v42 = *a7;
    else
      v42 = 0;
    v13 = 2LL * v42 + 15;
    if ( v13 <= 2LL * v42 )
      v13 = 0xFFFFFFFFFFFFFF0LL;
    v15 = alloca(sub_1401F89D0(v13 & 0xFFFFFFFFFFFFFFF0uLL, v12));
    v51 = &i;
    if ( *a2 == 2 )
      v45 = v51;
    else
      v45 = a6;
    if ( v30 )
      v43 = (v23[582] + 2) * a2[1];
    else
      v43 = 0;
    v16 = 2LL * v43 + 15;
    if ( v16 <= 2LL * v43 )
      v16 = 0xFFFFFFFFFFFFFF0LL;
    v17 = alloca(sub_1401F89D0(v16 & 0xFFFFFFFFFFFFFFF0uLL, v14));
    v47 = &i;
    if ( v30 )
    {
      MEMORY[0x1401FC920](v47, a6);
      v31 = v47;
      v32 = (__int64)v47 + 2 * v23[582] + 4;
    }
    for ( i = 0; ; ++i )
    {
      v44 = *a2 >= a2[1] ? a2[1] : *a2;
      if ( i >= v44 )
        break;
      v18 = sub_1401BAA30(&v23[1072 * i + 612], (__int64)v45, (__int64)(&v31)[i] + 2, v26);
      v24 += v18;
      if ( *a2 == 2 )
      {
        for ( j = 0; j < *a7; ++j )
          *((_WORD *)&a6[j] + i) = *((_WORD *)v45 + j);
      }
    }
    if ( *a2 == 2 && a2[1] == 1 )
    {
      if ( v49 )
      {
        v19 = sub_1401BAA30(v23 + 1684, (__int64)v45, (__int64)v31 + 2, v26);
        v24 += v19;
        for ( j = 0; j < *a7; ++j )
          HIWORD(a6[j]) = *((_WORD *)v45 + j);
      }
      else
      {
        for ( j = 0; j < *a7; ++j )
          HIWORD(a6[j]) = a6[j];
      }
    }
    if ( v23[1047] == 2 )
    {
      v52[0] = 6;
      v52[1] = 4;
      v52[2] = 3;
      a2[5] = v52[(v23[579] - 8) >> 2] * v23[577];
    }
    else
    {
      a2[5] = 0;
    }
    if ( a3 == 1 )
    {
      for ( j = 0; j < v25[2148]; ++j )
        LOBYTE(v25[1072 * j + 578]) = 10;
    }
    else
    {
      v25[2149] = v27;
    }
  }
  else
  {
    v24 = -200;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v54);
}

