#include "shared_client.h"

//----- (00000001401E0010) ----------------------------------------------------
__int64            sub_1401E0010(__int64 a1, __int64 a2, int a3, signed int a4, int a5, int a6, int a7)
{
  _DWORD v8[12];
  int j;
  int i;
  int k;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char *v17;
  float *v18;
  int v19;
  int v20;
  char *v21;
  _DWORD v22[48];
  __int64 v23;

  if ( a5 == 4 )
  {
    v17 = (char *)&unk_14027CB98 + 8 * a6;
    v21 = byte_14027E2C0;
    v15 = byte_14027BB84[a6];
    v16 = 34;
  }
  else
  {
    v17 = (char *)&unk_14027BB94;
    v21 = (char *)&unk_14027CC28;
    v15 = 12;
    v16 = 12;
  }
  v18 = (float *)(a2 + 16LL * a4);
  for ( i = 0; i < a5; ++i )
  {
    v13 = 0;
    v14 = v17[2 * i];
    v12 = v17[2 * i + 1];
    v8[10] = a7;
    sub_1401A9C80(v18, (__int64)&v18[-a3 - v12], (__int64)v22, a4, v12 - v14 + 1);
    for ( j = v14; j <= v12; ++j )
      v22[v13++ + 24] = v22[v12 - j];
    v19 = v17[2 * i];
    for ( k = 0; k < v15; ++k )
    {
      v20 = v21[k + v16 * i] - v19;
      for ( j = 0; j < 5; ++j )
        *(_DWORD *)(20LL * k + 680LL * i + a1 + 4LL * j) = v22[j + 24 + v20];
    }
    v18 += a4;
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401E0340) ----------------------------------------------------
__int64            sub_1401E0340(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  float v6;
  float v7;
  __int64 v9;
  int j;
  int i;
  int v12;
  int k;
  double v14;
  int v15;
  int v16;
  __int64 v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  char *v23;
  float v24[24];
  __int64 v25;

  if ( a5 == 4 )
  {
    v18 = (char *)&unk_14027CB98 + 8 * a6;
    v23 = byte_14027E2C0;
    v15 = byte_14027BB84[a6];
    v16 = 34;
  }
  else
  {
    v18 = (char *)&unk_14027BB94;
    v23 = (char *)&unk_14027CC28;
    v15 = 12;
    v16 = 12;
  }
  v22 = a2 + 16LL * a4;
  for ( i = 0; i < a5; ++i )
  {
    v12 = 0;
    v17 = v22 - 4LL * (v18[2 * i] + a3);
    v14 = sub_1401D1050(v17, a4) + 0.001;
    v6 = v14;
    v24[0] = v6;
    v12 = 1;
    v19 = v18[2 * i + 1] - v18[2 * i] + 1;
    for ( j = 1; j < v19; ++j )
    {
      v14 = v14
          - *(float *)(v17 + 4LL * (a4 - j)) * *(float *)(v17 + 4LL * (a4 - j))
          + *(float *)(v17 + 4LL * -j) * *(float *)(v17 + 4LL * -j);
      v7 = v14;
      v24[v12++] = v7;
    }
    v20 = v18[2 * i];
    for ( j = 0; j < v15; ++j )
    {
      v21 = v23[j + v16 * i] - v20;
      for ( k = 0; k < 5; ++k )
        *(float *)(20LL * j + 680LL * i + a1 + 4LL * k) = v24[k + v21];
    }
    v22 += 4LL * a4;
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401E06F0) ----------------------------------------------------
__int64            sub_1401E06F0(int a1)
{
  int v2;
  int v4;

  if ( a1 < 1 || a1 > 2 )
    return 0;
  if ( (unsigned int)sub_1401CAAA0(&v2) )
    return 0;
  v2 = sub_1401E99B0(v2);
  v4 = sub_14019B2A0(a1);
  return v4 + v2 + (unsigned int)sub_1401E99B0(18144);
}

//----- (00000001401E0760) ----------------------------------------------------
int *           sub_1401E0760(unsigned int a1, int a2, int a3, _DWORD *a4)
{
  int v5;
  int v6;
  int *v7;

  if ( (a1 == 48000 || a1 == 24000 || a1 == 16000 || a1 == 12000 || a1 == 8000)
    && (a2 == 1 || a2 == 2)
    && (a3 == 2048 || a3 == 2049 || a3 == 2051) )
  {
    v5 = sub_1401E06F0(a2);
    v7 = (int *)sub_1401A6AA0(v5);
    if ( v7 )
    {
      v6 = sub_1401E0880(v7, a1, a2, a3);
      if ( a4 )
        *a4 = v6;
      if ( v6 )
      {
        sub_1401A6AC0(v7);
        return nullptr;
      }
      return v7;
    }
    else
    {
      if ( a4 )
        *a4 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a4 )
      *a4 = -1;
    return nullptr;
  }
}

//----- (00000001401E0880) ----------------------------------------------------
__int64            sub_1401E0880(int *a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;
  _DWORD *v9;
  __int64 v10;

  if ( a2 != 48000 && a2 != 24000 && a2 != 16000 && a2 != 12000 && a2 != 8000
    || a3 != 1 && a3 != 2
    || a4 != 2048 && a4 != 2049 && a4 != 2051 )
  {
    return 0xFFFFFFFFLL;
  }
  v5 = sub_1401E06F0(a3);
  crt_memset((void *)(uintptr_t)(a1), 0, v5);
  v7 = sub_1401CAAA0(&v6);
  if ( v7 )
    return 0xFFFFFFFFLL;
  v6 = sub_1401E99B0(v6);
  a1[1] = sub_1401E99B0(18144);
  *a1 = v6 + a1[1];
  v10 = (__int64)a1 + a1[1];
  v9 = (int *)((char *)a1 + *a1);
  a1[28] = a3;
  a1[3548] = a3;
  a1[36] = a2;
  a1[45] = sub_1401A13B0();
  v7 = sub_1401CAAD0(v10, a1[45], a1 + 2);
  if ( v7 )
    return 4294967293LL;
  a1[2] = a3;
  a1[3] = a3;
  a1[4] = a1[36];
  a1[5] = 16000;
  a1[6] = 8000;
  a1[7] = 16000;
  a1[8] = 20;
  a1[9] = 25000;
  a1[10] = 0;
  a1[11] = 9;
  a1[12] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[19] = 0;
  if ( (unsigned int)sub_14019F0E0(v9, a2, a3, a1[45]) )
    return 4294967293LL;
  sub_140199190(v9, 10016, nullptr);
  sub_140199190(v9, 4010, (__m128i *)(unsigned int)a1[11]);
  a1[37] = 1;
  a1[38] = 1;
  a1[41] = -1000;
  a1[40] = a3 * a2 + 3000;
  a1[27] = a4;
  a1[31] = -1000;
  a1[32] = -1000;
  a1[33] = 1105;
  a1[30] = -1000;
  a1[34] = -1000;
  a1[35] = -1;
  a1[43] = a1[36] / 100;
  a1[42] = 24;
  a1[39] = 5000;
  a1[29] = a1[36] / 250;
  *((_WORD *)a1 + 7098) = 0x4000;
  a1[3551] = 1065353216;
  a1[3550] = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
  a1[3563] = 1;
  a1[3556] = 1001;
  a1[3560] = 1105;
  sub_1401EBEC0(a1 + 47, (unsigned int)a1[36]);
  a1[48] = a1[27];
  return 0;
}

//----- (00000001401E0CC0) ----------------------------------------------------
int                sub_1401E0CC0(int *a1, __int64 a2, int a3, __m128i *a4, int a5)
{
  unsigned __int64 v5;
  void *v6;
  int i;
  int v9;
  int v10 = -1;
  int *v11;
  __int64 v12;

  v9 = sub_1401E52C0(a3, a1[39], a1[36]);
  if ( v9 > 0 )
  {
    int sr_samples = (int)((unsigned)a1[28] * (unsigned)v9);
    v5 = 4LL * sr_samples + 15;
    if ( v5 <= (unsigned __int64)(4LL * sr_samples) )
      v5 = 0xFFFFFFFFFFFFFF0LL;
    v6 = alloca(v5 & 0xFFFFFFFFFFFFFFF0uLL);
    v11 = (int *)v6;
    for ( i = 0; i < sr_samples; ++i )
      *(float *)&v11[i] = 0.000030517578f * (float)*(__int16 *)(a2 + 2LL * i);
    v10 = sub_1401E5400(
            a1,
            (__int64)v11,
            v9,
            a4,
            a5,
            16,
            a2,
            a3,
            0,
            -2,
            a1[28],
            (void (           *)(__int64, int *, _QWORD, _QWORD, int, int, int))sub_1401E5010,
            0);
  }
  return v10;
}

//----- (00000001401E0E40) ----------------------------------------------------
__int64            sub_1401E0E40(int *a1, __int64 a2, int a3, __m128i *a4, int a5)
{
  int v6;

  v6 = sub_1401E52C0(a3, a1[39], a1[36]);
  return sub_1401E5400(
           a1,
           a2,
           v6,
           a4,
           a5,
           24,
           a2,
           a3,
           0,
           -2,
           a1[28],
           (void (           *)(__int64, int *, _QWORD, _QWORD, int, int, int))sub_1401E4E80,
           1);
}

//----- (00000001401E0F20) ----------------------------------------------------
void            sub_1401E0F20(void *a1)
{
  sub_1401A6AC0(a1);
}

//----- (00000001401E0F40) ----------------------------------------------------
__int64 sub_1401E0F40(int *a1, int a2, ...)
{
  __m128i *v2;
  __int64 v4;
  uint64 *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  int v17;
  int i;
  _DWORD *v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  BOOL *v28;
  unsigned int v29;
  BOOL v30;
  BOOL v31;
  int *v32;
  __m128i *v33;
  __m128i *v34;
  __m128i *v35;
  _DWORD *v36;
  _DWORD *v37;
  _DWORD *v38;
  _DWORD *v39;
  _DWORD *v40;
  _DWORD *v41;
  _DWORD *v42;
  _DWORD *v43;
  _DWORD *v44;
  _DWORD *v45;
  _DWORD *v46;
  _DWORD *v47;
  _DWORD *v48;
  _DWORD *v49;
  _DWORD *v50;
  _DWORD *v51;
  _DWORD *v52;
  _DWORD *v53;
  int *v54;
  __int64 v55;
  char *v56;
  _DWORD v57[28];
  __int64 v58;
  va_list va;

  va_start(va, a2);
  v10 = 0;
  uint64 sr_option_argument;memcpy(&sr_option_argument,va,8);
  v5=&sr_option_argument;
  v19 = (int *)((char *)a1 + *a1);
  v6 = a2;
  if ( a2 <= 10015 )
  {
    if ( v6 != 10015 )
    {
      v6 -= 4000;
      switch ( v6 )
      {
        case 0:
          v9 = *((_DWORD *)++v5 - 2);
          if ( (v9 == 2048 || v9 == 2049 || v9 == 2051) && (a1[3563] || a1[27] == v9) )
          {
            a1[27] = v9;
            a1[48] = v9;
          }
          else
          {
            v10 = -1;
          }
          goto LABEL_151;
        case 1:
          v36 = (void *)(uintptr_t)*v5++;
          if ( !v36 )
            goto LABEL_152;
          *v36 = a1[27];
          goto LABEL_151;
        case 2:
          v8 = *((_DWORD *)++v5 - 2);
          if ( v8 == -1000 || v8 == -1 )
            goto LABEL_26;
          if ( v8 <= 0 )
            goto LABEL_152;
          if ( v8 > 500 )
          {
            if ( v8 > 300000 * a1[28] )
              v8 = 300000 * a1[28];
          }
          else
          {
            v8 = 500;
          }
LABEL_26:
          a1[41] = v8;
          break;
        case 3:
          v37 = (void *)(uintptr_t)*v5++;
          if ( !v37 )
            goto LABEL_152;
          *v37 = sub_1401F4B00(a1, a1[3559], 1276);
          goto LABEL_151;
        case 4:
          v20 = *((_DWORD *)++v5 - 2);
          if ( v20 < 1101 || v20 > 1105 )
            goto LABEL_152;
          a1[33] = v20;
          if ( a1[33] == 1101 )
          {
            a1[5] = 8000;
          }
          else if ( a1[33] == 1102 )
          {
            a1[5] = 12000;
          }
          else
          {
            a1[5] = 16000;
          }
          goto LABEL_151;
        case 5:
          v39 = (void *)(uintptr_t)*v5++;
          if ( !v39 )
            goto LABEL_152;
          *v39 = a1[33];
          goto LABEL_151;
        case 6:
          v15 = *(_DWORD *)v5;
          if ( v15 >= 2 )
            goto LABEL_152;
          a1[37] = v15;
          a1[15] = 1 - v15;
          goto LABEL_151;
        case 7:
          v45 = (void *)(uintptr_t)*v5++;
          if ( !v45 )
            goto LABEL_152;
          *v45 = a1[37];
          goto LABEL_151;
        case 8:
          v12 = *((_DWORD *)++v5 - 2);
          if ( (v12 < 1101 || v12 > 1105) && v12 != -1000 )
            goto LABEL_152;
          a1[32] = v12;
          if ( a1[32] == 1101 )
          {
            a1[5] = 8000;
          }
          else if ( a1[32] == 1102 )
          {
            a1[5] = 12000;
          }
          else
          {
            a1[5] = 16000;
          }
          goto LABEL_151;
        case 9:
          v40 = (void *)(uintptr_t)*v5++;
          if ( !v40 )
            goto LABEL_152;
          *v40 = a1[3560];
          goto LABEL_151;
        case 10:
          v13 = *(_DWORD *)v5;
          if ( v13 > 0xA )
            goto LABEL_152;
          a1[11] = v13;
          sub_140199190(v19, 4010, (__m128i *)v13);
          goto LABEL_151;
        case 11:
          v42 = (void *)(uintptr_t)*v5++;
          if ( !v42 )
            goto LABEL_152;
          *v42 = a1[11];
          goto LABEL_151;
        case 12:
          v22 = *(_DWORD *)v5;
          if ( v22 >= 2 )
            goto LABEL_152;
          a1[12] = v22;
          goto LABEL_151;
        case 13:
          v43 = (void *)(uintptr_t)*v5++;
          if ( !v43 )
            goto LABEL_152;
          *v43 = a1[12];
          goto LABEL_151;
        case 14:
          v14 = *(_DWORD *)v5;
          if ( v14 > 0x64 )
            goto LABEL_152;
          a1[10] = v14;
          sub_140199190(v19, 4014, (__m128i *)v14);
          goto LABEL_151;
        case 15:
          v44 = (void *)(uintptr_t)*v5++;
          if ( !v44 )
            goto LABEL_152;
          *v44 = a1[10];
          goto LABEL_151;
        case 16:
          v21 = *(_DWORD *)v5;
          if ( v21 >= 2 )
            goto LABEL_152;
          a1[46] = v21;
          goto LABEL_151;
        case 17:
          v41 = (void *)(uintptr_t)*v5++;
          if ( !v41 )
            goto LABEL_152;
          *v41 = a1[46];
          goto LABEL_151;
        case 20:
          v24 = *(_DWORD *)v5;
          if ( v24 >= 2 )
            goto LABEL_152;
          a1[38] = v24;
          goto LABEL_151;
        case 21:
          v47 = (void *)(uintptr_t)*v5++;
          if ( !v47 )
            goto LABEL_152;
          *v47 = a1[38];
          goto LABEL_151;
        case 22:
          v11 = *((_DWORD *)++v5 - 2);
          if ( (v11 < 1 || v11 > a1[28]) && v11 != -1000 )
            goto LABEL_152;
          a1[30] = v11;
          goto LABEL_151;
        case 23:
          v38 = (void *)(uintptr_t)*v5++;
          if ( !v38 )
            goto LABEL_152;
          *v38 = a1[30];
          goto LABEL_151;
        case 24:
          v16 = *(_DWORD *)v5;
          if ( v16 != -1000 && v16 != 3001 && v16 != 3002 )
            goto LABEL_152;
          a1[31] = v16;
          goto LABEL_151;
        case 25:
          v48 = (void *)(uintptr_t)*v5++;
          if ( !v48 )
            goto LABEL_152;
          *v48 = a1[31];
          goto LABEL_151;
        case 27:
          v32 = (int *)*v5++;
          if ( !v32 )
            goto LABEL_152;
          *v32 = a1[36] / 400;
          if ( a1[27] != 2051 )
            *v32 += a1[29];
          goto LABEL_151;
        case 28:
          v55 = (__int64)a1 + a1[1];
          sub_1401EBF00((__int64)(a1 + 47));
          v54 = a1 + 3548;
          crt_memset((void *)(uintptr_t)((_WORD *)a1 + 7096), 0, 0xF70u);
          sub_140199190(v19, 4028, v2);
          sub_1401CAAD0(v55, a1[45], v57);
          a1[3548] = a1[28];
          *((_WORD *)a1 + 7098) = 0x4000;
          a1[3551] = 1065353216;
          a1[3563] = 1;
          a1[3556] = 1001;
          a1[3560] = 1105;
          a1[3550] = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
          goto LABEL_151;
        case 29:
          v49 = (void *)(uintptr_t)*v5++;
          if ( !v49 )
            goto LABEL_152;
          *v49 = a1[36];
          goto LABEL_151;
        case 31:
          v50 = (void *)(uintptr_t)*v5++;
          if ( !v50 )
            goto LABEL_152;
          *v50 = a1[4535];
          goto LABEL_151;
        case 36:
          v25 = *(_DWORD *)v5;
          if ( v25 < 8 || v25 > 24 )
            goto LABEL_152;
          a1[42] = v25;
          goto LABEL_151;
        case 37:
          v51 = (void *)(uintptr_t)*v5++;
          if ( !v51 )
            goto LABEL_152;
          *v51 = a1[42];
          goto LABEL_151;
        case 40:
          v7 = *(_DWORD *)v5;
          if ( v7 != 5000
            && v7 != 5001
            && v7 != 5002
            && v7 != 5003
            && v7 != 5004
            && v7 != 5005
            && v7 != 5006
            && v7 != 5007
            && v7 != 5008
            && v7 != 5009 )
          {
            goto LABEL_152;
          }
          a1[39] = v7;
          goto LABEL_151;
        case 41:
          v52 = (void *)(uintptr_t)*v5++;
          if ( !v52 )
            goto LABEL_152;
          *v52 = a1[39];
          goto LABEL_151;
        case 42:
          v26 = *(_DWORD *)v5;
          if ( v26 >= 2 )
            goto LABEL_152;
          a1[19] = v26;
          goto LABEL_151;
        case 43:
          v53 = (void *)(uintptr_t)*v5++;
          if ( !v53 )
            goto LABEL_152;
          *v53 = a1[19];
          goto LABEL_151;
        case 46:
          v27 = *(_DWORD *)v5;
          if ( v27 >= 2 )
            goto LABEL_152;
          sub_140199190(v19, 4046, (__m128i *)v27);
          goto LABEL_151;
        case 47:
          v33 = (__m128i *)*v5;
          if ( !v33 )
            goto LABEL_152;
          sub_140199190(v19, 4047, v33);
          goto LABEL_151;
        case 49:
          v28 = (BOOL *)*v5++;
          if ( !v28 )
            goto LABEL_152;
          if ( a1[14] && (a1[3557] == 1000 || a1[3557] == 1001) )
          {
            v56 = (char *)a1 + a1[1];
            *v28 = 1;
            for ( i = 0; i < a1[3]; ++i )
            {
              v30 = *v28 && *(int *)&v56[10088 * i + 6104] >= 10;
              *v28 = v30;
            }
          }
          else if ( a1[46] )
          {
            v31 = a1[4532] >= 10;
            *v28 = v31;
          }
          else
          {
            *v28 = 0;
          }
          goto LABEL_151;
        default:
          goto LABEL_150;
      }
      goto LABEL_151;
    }
    v35 = (__m128i *)*v5;
    if ( v35 )
    {
      v10 = sub_140199190(v19, 10015, v35);
      goto LABEL_151;
    }
LABEL_152:
    v5 = nullptr;
    return (unsigned int)-1;
  }
  switch ( v6 )
  {
    case 10024:
      v29 = *(_DWORD *)v5;
      a1[44] = v29;
      v10 = sub_140199190(v19, 10024, (__m128i *)v29);
      break;
    case 10026:
      v34 = (__m128i *)*v5;
      *((_QWORD *)a1 + 1782) = (uint64)(uintptr_t)(v34);
      v10 = sub_140199190(v19, 10026, v34);
      break;
    case 11002:
      v17 = *(_DWORD *)v5;
      if ( (v17 < 1000 || v17 > 1002) && v17 != -1000 )
        goto LABEL_152;
      a1[34] = v17;
      break;
    case 11018:
      v23 = *(_DWORD *)v5;
      if ( v23 < -1 || v23 > 100 )
        goto LABEL_152;
      a1[35] = v23;
      break;
    case 11019:
      v46 = (void *)(uintptr_t)*v5++;
      if ( !v46 )
        goto LABEL_152;
      *v46 = a1[35];
      break;
    default:
LABEL_150:
      v10 = -5;
      break;
  }
LABEL_151:
  v5 = nullptr;
  return (unsigned int)v10;
}

//----- (00000001401E2280) ----------------------------------------------------
__int64            sub_1401E2280(int a1)
{
  int v2;
  int v4;

  if ( a1 < 1 || a1 > 2 )
    return 0;
  if ( (unsigned int)sub_1401CCA90(&v2) )
    return 0;
  v2 = sub_1401E99B0(v2);
  v4 = sub_14019F150(a1);
  return v4 + v2 + (unsigned int)sub_1401E99B0(88);
}

//----- (00000001401E22F0) ----------------------------------------------------
int *           sub_1401E22F0(int a1, int a2, _DWORD *a3)
{
  int v4;
  int v5;
  int *v6;

  if ( (a1 == 48000 || a1 == 24000 || a1 == 16000 || a1 == 12000 || a1 == 8000) && (a2 == 1 || a2 == 2) )
  {
    v4 = sub_1401E2280(a2);
    v6 = (int *)sub_1401A6AA0(v4);
    if ( v6 )
    {
      v5 = sub_1401E23F0(v6, a1, a2);
      if ( a3 )
        *a3 = v5;
      if ( v5 )
      {
        sub_1401A6AC0(v6);
        return nullptr;
      }
      return v6;
    }
    else
    {
      if ( a3 )
        *a3 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a3 )
      *a3 = -1;
    return nullptr;
  }
}

//----- (00000001401E23F0) ----------------------------------------------------
__int64            sub_1401E23F0(int *a1, int a2, int a3)
{
  int v4;
  int v5;
  _DWORD *v6;
  __int64 v7;

  if ( a2 != 48000 && a2 != 24000 && a2 != 16000 && a2 != 12000 && a2 != 8000 || a3 != 1 && a3 != 2 )
    return 0xFFFFFFFFLL;
  v4 = sub_1401E2280(a3);
  crt_memset((void *)(uintptr_t)(a1), 0, v4);
  if ( (unsigned int)sub_1401CCA90(&v5) )
    return 4294967293LL;
  v5 = sub_1401E99B0(v5);
  a1[1] = sub_1401E99B0(88);
  *a1 = v5 + a1[1];
  v7 = (__int64)a1 + a1[1];
  v6 = (int *)((char *)a1 + *a1);
  a1[2] = a3;
  a1[12] = a3;
  a1[3] = a2;
  a1[6] = a1[3];
  a1[4] = a1[2];
  if ( (unsigned int)sub_1401CCAC0(v7) )
    return 4294967293LL;
  if ( (unsigned int)sub_14019F190(v6, a2, a3) )
    return 4294967293LL;
  sub_140199AA0(v6, 10016, nullptr);
  a1[15] = 0;
  a1[16] = a2 / 400;
  a1[11] = sub_1401A13B0();
  return 0;
}

//----- (00000001401E25C0) ----------------------------------------------------
__int64            sub_1401E25C0(int *a1, char *a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  unsigned __int64 v6;
  void *v7;
  __int16 v8;
  int i;
  int v11;
  int v12;
  int v13;
  int *v14;
  __int64 v15;

  if ( a5 <= 0 )
    return (unsigned int)-1; /* 0x1401E25F2: mov eax, 0xffffffff */
  {
    if ( a2 && a3 > 0 && !a6 )
    {
      v11 = sub_1401E3000((__int64)a1, a2, a3);
      if ( v11 <= 0 )
        return (unsigned int)-4; /* 0x1401E2647: mov eax, 0xfffffffc */
      if ( a5 >= v11 )
        v13 = v11;
      else
        v13 = a5;
      a5 = v13;
    }
    v6 = 4LL * a1[2] * a5 + 15;
    if ( v6 <= 4LL * a1[2] * a5 )
      v6 = 0xFFFFFFFFFFFFFF0LL;
    v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
    v14 = v7;
    v12 = sub_1401E9360(a1, a2, a3, (__int64)&i, a5, a6, 0, nullptr, 1);
    if ( v12 > 0 )
    {
      for ( i = 0; i < a1[2] * v12; ++i )
      {
        v8 = sub_1401AD3E0(*(float *)&v14[i]);
        *(_WORD *)(a4 + 2LL * i) = v8;
      }
    }
  }
  return (unsigned int)v12; /* 0x1401E271A: mov eax, dword ptr [rbp + 8] */
}

//----- (00000001401E2740) ----------------------------------------------------
__int64            sub_1401E2740(int *a1, char *a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  if ( a5 > 0 )
    return sub_1401E9360(a1, a2, a3, a4, a5, a6, 0, nullptr, 0);
  else
    return 0xFFFFFFFFLL;
}

//----- (00000001401E27C0) ----------------------------------------------------
__int64            sub_1401E27C0(int *a1, int a2, int *a3)
{
  int *v3;
  unsigned int v5;
  _DWORD *v6;
  char *v7;

  v5 = 0;
  v7 = (char *)a1 + a1[1];
  v6 = (int *)((char *)a1 + *a1);
  switch ( a2 )
  {
    case 4009:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[13];
      return v5;
    case 4028:
      crt_memset((void *)(uintptr_t)((_WORD *)a1 + 24), 0, 0x28u);
      sub_140199AA0(v6, 4028, v3);
      sub_1401CCAC0((__int64)v7);
      a1[12] = a1[2];
      a1[16] = a1[3] / 400;
      return v5;
    case 4029:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[3];
      return v5;
    case 4031:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[21];
      return v5;
    case 4033:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      if ( a1[15] == 1002 )
        return (unsigned int)sub_140199AA0(v6, 4033, a3);
      else
        *a3 = a1[9];
      return v5;
    case 4034:
      if ( (int)a3 < -32768 || (int)a3 > 0x7FFF )
        return 0xFFFFFFFFLL;
      a1[10] = (int)a3;
      return v5;
    case 4039:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[18];
      return v5;
    case 4045:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[10];
      return v5;
    case 4046:
      if ( (unsigned int)a3 >= 2 )
        return 0xFFFFFFFFLL;
      return (unsigned int)sub_140199AA0(v6, 4046, (int *)(unsigned int)a3);
    case 4047:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      return (unsigned int)sub_140199AA0(v6, 4047, a3);
    default:
      return (unsigned int)-5;
  }
}

//----- (00000001401E2C30) ----------------------------------------------------
void            sub_1401E2C30(void *a1)
{
  sub_1401A6AC0(a1);
}

//----- (00000001401E2C50) ----------------------------------------------------
__int64            sub_1401E2C50(char *a1, int a2, _BYTE *a3, __int64 a4, __int16 *a5, _DWORD *a6)
{
  return sub_1401E99E0(a1, a2, 0, a3, a4, a5, a6, nullptr);
}

//----- (00000001401E2CB0) ----------------------------------------------------
__int64            sub_1401E2CB0(_BYTE *a1)
{
  unsigned int v2;

  if ( (*a1 & 0x80) != 0 )
  {
    v2 = (((int)(unsigned __int8)*a1 >> 5) & 3) + 1102;
    if ( (((int)(unsigned __int8)*a1 >> 5) & 3) == 0 )
      return 1101;
  }
  else if ( (*a1 & 0x60) == 0x60 )
  {
    if ( (*a1 & 0x10) != 0 )
      return 1105;
    else
      return 1104;
  }
  else
  {
    return (((int)(unsigned __int8)*a1 >> 5) & 3u) + 1101;
  }
  return v2;
}

//----- (00000001401E2D90) ----------------------------------------------------
__int64            sub_1401E2D90(_BYTE *a1, int a2)
{
  int v4;

  if ( (*a1 & 0x80) != 0 )
  {
    return (unsigned int)((a2 << (((int)(unsigned __int8)*a1 >> 3) & 3)) / 400);
  }
  else if ( (*a1 & 0x60) == 0x60 )
  {
    if ( (*a1 & 8) != 0 )
      return (unsigned int)(a2 / 50);
    else
      return (unsigned int)(a2 / 100);
  }
  else
  {
    v4 = ((int)(unsigned __int8)*a1 >> 3) & 3;
    if ( v4 == 3 )
      return (unsigned int)(60 * a2 / 1000);
    else
      return (unsigned int)((a2 << v4) / 100);
  }
}

//----- (00000001401E2EB0) ----------------------------------------------------
__int64            sub_1401E2EB0(_BYTE *a1)
{
  if ( (*a1 & 4) != 0 )
    return 2;
  else
    return 1;
}

//----- (00000001401E2EF0) ----------------------------------------------------
__int64            sub_1401E2EF0(_BYTE *a1, int a2)
{
  if ( a2 < 1 )
    return 0xFFFFFFFFLL;
  if ( (*a1 & 3) == 0 )
    return 1;
  if ( (*a1 & 3) != 3 )
    return 2;
  if ( a2 >= 2 )
    return a1[1] & 0x3F;
  return 4294967292LL;
}

//----- (00000001401E2F80) ----------------------------------------------------
__int64            sub_1401E2F80(_BYTE *a1, int a2, int a3)
{
  int v4;
  unsigned int v5;

  v4 = sub_1401E2EF0(a1, a2);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v5 = sub_1401E2D90(a1, a3) * v4;
  if ( (int)(25 * v5) <= 3 * a3 )
    return v5;
  else
    return 4294967292LL;
}

//----- (00000001401E3000) ----------------------------------------------------
__int64            sub_1401E3000(__int64 a1, _BYTE *a2, int a3)
{
  return sub_1401E2F80(a2, a3, *(_DWORD *)(a1 + 12));
}

//----- (00000001401E3040) ----------------------------------------------------
__int64            sub_1401E3040(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 result;
  float v5;
  float v6;
  float v7;
  int i;
  int k;
  int m;
  int n;
  int ii;
  float *v13;
  float v14;
  float v15;
  int v16;
  int v17;
  int j;
  float v19;
  int v20;
  float v21;
  int v22;
  float v23;
  int v24;
  int v25;
  BOOL v26;
  float v27;
  int v28;
  int v29;
  float v30;
  float v31;

  if ( a3 >= 1 && a2 >= 1 && a1 && a4 )
  {
    for ( i = 0; i < a3 * a2; ++i )
    {
      if ( *(float *)(a1 + 4LL * i) <= 2.0 )
        v23 = *(float *)(a1 + 4LL * i);
      else
        v23 = 2.0;
      if ( v23 >= -2.0 )
      {
        if ( *(float *)(a1 + 4LL * i) <= 2.0 )
          v24 = *(_DWORD *)(a1 + 4LL * i);
        else
          v24 = 0x40000000;
        v25 = v24;
      }
      else
      {
        v25 = -1073741824;
      }
      *(_DWORD *)(a1 + 4LL * i) = v25;
    }
    for ( j = 0; ; ++j )
    {
      result = (unsigned int)a3;
      if ( j >= a3 )
        break;
      v13 = (float *)(a1 + 4LL * j);
      v14 = *(float *)(a4 + 4LL * j);
      for ( k = 0; k < a2 && (float)(v13[a3 * k] * v14) < 0.0; ++k )
        v13[a3 * k] = v13[a3 * k] + (float)((float)(v14 * v13[a3 * k]) * v13[a3 * k]);
      v22 = 0;
      v30 = *v13;
      while ( 1 )
      {
        for ( m = v22; m < a2 && v13[a3 * m] <= 1.0 && v13[a3 * m] >= -1.0; ++m )
          ;
        if ( m == a2 )
          break;
        v20 = m;
        v16 = m;
        v17 = m;
        v5 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(v13[a3 * m]), u64);
        v19 = v5;
        while ( v17 > 0 && (float)(v13[a3 * m] * v13[a3 * (v17 - 1)]) >= 0.0 )
          --v17;
        while ( v16 < a2 && (float)(v13[a3 * m] * v13[a3 * v16]) >= 0.0 )
        {
          v6 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(v13[a3 * v16]), u64);
          if ( v6 > v19 )
          {
            v7 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(v13[a3 * v16]), u64);
            v19 = v7;
            v20 = v16;
          }
          ++v16;
        }
        v26 = !v17 && (float)(v13[a3 * m] * *v13) >= 0.0;
        v15 = (float)((float)(v19 - 1.0) / (float)(v19 * v19))
            + (float)((float)((float)(v19 - 1.0) / (float)(v19 * v19)) * 0.00000023999999);
        if ( v13[a3 * m] > 0.0 )
          v15 = -v15;
        for ( n = v17; n < v16; ++n )
          v13[a3 * n] = v13[a3 * n] + (float)((float)(v15 * v13[a3 * n]) * v13[a3 * n]);
        if ( v26 && v20 >= 2 )
        {
          v21 = v30 - *v13;
          v31 = v21 / (float)v20;
          for ( ii = v22; ii < v20; ++ii )
          {
            v21 = v21 - v31;
            v13[a3 * ii] = v13[a3 * ii] + v21;
            if ( v13[a3 * ii] <= 1.0 )
              v27 = v13[a3 * ii];
            else
              v27 = 1.0;
            if ( v27 >= -1.0 )
            {
              if ( v13[a3 * ii] <= 1.0 )
                v28 = LODWORD(v13[a3 * ii]);
              else
                v28 = 1065353216;
              v29 = v28;
            }
            else
            {
              v29 = -1082130432;
            }
            LODWORD(v13[a3 * ii]) = v29;
          }
        }
        v22 = v16;
        if ( v16 == a2 )
          goto LABEL_66;
      }
      v15 = 0.0;
LABEL_66:
      *(float *)(a4 + 4LL * j) = v15;
    }
  }
  return result;
}

//----- (00000001401E37E0) ----------------------------------------------------
__int64 sub_1401E37E0()
{
  return 496;
}

//----- (00000001401E37F0) ----------------------------------------------------
__int64            sub_1401E37F0(__int64 a1)
{
  *(_DWORD *)(a1 + 4) = 0;
  return a1;
}

//----- (00000001401E3810) ----------------------------------------------------
__int64 sub_1401E3810()
{
  int v0;
  __int64 v2;

  v0 = sub_1401E37E0();
  v2 = sub_1401A6AA0(v0);
  if ( v2 )
    return sub_1401E37F0(v2);
  else
    return 0;
}

//----- (00000001401E3850) ----------------------------------------------------
void            sub_1401E3850(void *a1)
{
  sub_1401A6AC0(a1);
}

//----- (00000001401E3870) ----------------------------------------------------
__int64            sub_1401E3870(__int64 a1, char *a2, int a3)
{
  return sub_1401F8310(a1, a2, a3, 0);
}

//----- (00000001401E38B0) ----------------------------------------------------
__int64            sub_1401E38B0(__int64 a1, int a2, int a3, _BYTE *a4, int a5)
{
  return sub_1401EA090(a1, a2, a3, a4, a5, 0, 0);
}

//----- (00000001401E3910) ----------------------------------------------------
// MFC 7-14 64bit
__int64            unknown_libname_998(__int64 a1)
{
  return *(unsigned int *)(a1 + 4);
}

//----- (00000001401E3930) ----------------------------------------------------
__int64            sub_1401E3930(__int64 a1, _BYTE *a2, int a3)
{
  return sub_1401EA090(a1, 0, *(_DWORD *)(a1 + 4), a2, a3, 0, 0);
}

//----- (00000001401E3980) ----------------------------------------------------
__int64            sub_1401E3980(__m128i *a1, int a2, int a3)
{
  __int64 v4;
  int v5;
  _BYTE v6[4];
  int v7;
  __int64 v8;

  if ( a2 < 1 )
    return (unsigned int)-1; /* 0x1401E39B1: mov eax, 0xffffffff */
  if ( a2 == a3 )
    return 0; /* 0x1401E39CB: xor eax, eax */
  if ( a2 > a3 )
    return (unsigned int)-1; /* 0x1401E39E4: mov eax, 0xffffffff */
  {
    sub_1401E37F0((__int64)v6);
    crt_memcpy((__m128i *)((char *)a1 + a3 - a2), a1, a2);
    v5 = sub_1401E3870((__int64)v6, &SR_VEC_PTR_LANES(128, a1, i8)[a3 - a2], a2);
    if ( v5 )
      return (unsigned int)v5; /* 0x1401E3AA2: mov eax, dword ptr [rsp + 0x40] */
    v5 = sub_1401EA090((__int64)v6, 0, v7, a1, a3, 0, 1);
    if ( v5 > 0 )
      return 0; /* 0x1401E3AE7: xor eax, eax */
  }
  return (unsigned int)v5; /* 0x1401E3AED: mov eax, dword ptr [rsp + 0x40] */
}

//----- (00000001401E3B10) ----------------------------------------------------
__int64            sub_1401E3B10(char *a1, int a2)
{
  __int64 v3;
  int v4;
  _BYTE v5[4];
  int v6;
  __int64 v7;

  if ( a2 >= 1 )
  {
    sub_1401E37F0((__int64)v5);
    v4 = sub_1401E3870((__int64)v5, a1, a2);
    if ( v4 >= 0 )
      v4 = sub_1401EA090((__int64)v5, 0, v6, a1, a2, 0, 0);
  }
  return 0; /* the function has no caller */
}

//----- (00000001401E3BE0) ----------------------------------------------------
__int64            sub_1401E3BE0(__m128i *a1, int a2, int a3, int a4)
{
  __int64 v5;
  _BYTE v6[4];
  int i;
  int v8;
  int v9;
  int v10;
  char v11[96];
  __int64 v12;
  int v14;

  v14 = a2;
  if ( a2 >= 1 && a2 != a3 && a2 <= a3 )
  {
    v10 = a3 - a2;
    for ( i = 0; i < a4 - 1; ++i )
    {
      if ( v14 <= 0 )
        return 0; /* the function has no caller */
      v8 = sub_1401E99E0(SR_VEC_PTR_LANES(128, a1, i8), v14, 1, v6, 0, (__int16 *)v11, nullptr, &v9);
      if ( v8 < 0 )
        return 0; /* the function has no caller */
      a1 = (__m128i *)((char *)a1 + v9);
      v14 -= v9;
    }
    sub_1401E3980(a1, v14, v10 + v14);
  }
  return 0; /* the function has no caller */
}

//----- (00000001401E3D80) ----------------------------------------------------
__int64            sub_1401E3D80(char *a1, int a2, int a3)
{
  __int64 v4;
  int v5;
  int i;
  char v7[4];
  BOOL v8;
  int v9;
  int v10;
  BOOL v11;
  _BYTE *v12;
  _BYTE v13[4];
  int v14;
  __int16 v15[48];
  __int64 v16;
  char *v17;
  int v18;

  v18 = a2;
  v17 = a1;
  if ( a2 >= 1 )
  {
    v12 = a1;
    v10 = 0;
    for ( i = 0; i < a3; ++i )
    {
      v11 = i != a3 - 1;
      v8 = v11;
      if ( v18 <= 0 )
        break;
      sub_1401E37F0((__int64)v13);
      v5 = sub_1401E99E0(v17, v18, v8, v7, 0, v15, nullptr, &v9);
      if ( v5 < 0 )
        break;
      v5 = sub_1401F8310((__int64)v13, v17, v9, v8);
      if ( v5 < 0 )
        break;
      v5 = sub_1401EA090((__int64)v13, 0, v14, v12, v18, v8, 0);
      if ( v5 < 0 )
        break;
      v10 += v5;
      v12 += v5;
      v17 += v9;
      v18 -= v9;
    }
  }
  return 0; /* the function has no caller */
}

//----- (00000001401E3F90) ----------------------------------------------------
__int64            sub_1401E3F90(int *a1, int a2, _DWORD *a3)
{
  int *v3;
  char *v4;
  _WORD *v5;
  int *v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int j;
  int m;
  int i;
  int n;
  int k;
  int v17;
  int v18;
  int v19;
  int v20;
  _DWORD *v21;
  _DWORD *v22;
  int v23;
  int v24;
  unsigned int v25;
  int **v26;
  _DWORD *v27;
  int *v28;
  __int64 v29;
  int *v30;
  int *v31;
  int *v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  int *v35;
  _QWORD **v39;

  v9 = 0;
  v10 = sub_1401E06F0(2);
  v11 = sub_1401E06F0(1);
  v3 = (int *)((char *)a1 + (int)sub_1401E99B0(292));
  v7 = v3;
  if ( a2 > 5120 )
  {
    if ( a2 == 11002 )
    {
LABEL_39:
      v25 = *a3;
      for ( i = 0; i < a1[1]; ++i )
      {
        v32 = v7;
        v7 = (int *)((char *)v7 + (i >= a1[2] ? (int)sub_1401E99B0(v11) : sub_1401E99B0(v10)));
        v9 = sub_1401E0F40(v32, a2, v25);
        if ( v9 )
          break;
      }
    }
    else if ( a2 == 11019 )
    {
LABEL_29:
      v29 = *(_QWORD *)a3;
      v30 = v3;
      return (unsigned int)sub_1401E0F40(v3, a2, v29);
    }
    else
    {
      return (unsigned int)-5;
    }
    return v9;
  }
  if ( a2 != 5120 )
  {
    switch ( a2 )
    {
      case 4000:
      case 4004:
      case 4006:
      case 4008:
      case 4010:
      case 4012:
      case 4014:
      case 4016:
      case 4020:
      case 4022:
      case 4024:
      case 4036:
      case 4042:
      case 4046:
        goto LABEL_39;
      case 4001:
      case 4007:
      case 4009:
      case 4011:
      case 4013:
      case 4015:
      case 4017:
      case 4021:
      case 4023:
      case 4025:
      case 4027:
      case 4029:
      case 4037:
      case 4043:
      case 4047:
        goto LABEL_29;
      case 4002:
        v8 = *a3;
        if ( *a3 == -1000 || v8 == -1 )
          goto LABEL_20;
        if ( v8 <= 0 )
          return 0xFFFFFFFFLL;
        if ( 500 * *a1 <= v8 )
          v18 = *a3;
        else
          v18 = 500 * *a1;
        if ( 300000 * *a1 >= v18 )
        {
          if ( 500 * *a1 <= v8 )
            v19 = *a3;
          else
            v19 = 500 * *a1;
          v20 = v19;
        }
        else
        {
          v20 = 300000 * *a1;
        }
        v8 = v20;
LABEL_20:
        a1[72] = v8;
        break;
      case 4003:
        v21 = *(_DWORD **)a3;
        if ( !*(_QWORD *)a3 )
          return 0xFFFFFFFFLL;
        *v21 = 0;
        for ( j = 0; j < a1[1]; ++j )
        {
          v28 = v7;
          if ( j >= a1[2] )
            v7 = (int *)((char *)v7 + (int)sub_1401E99B0(v11));
          else
            v7 = (int *)((char *)v7 + (int)sub_1401E99B0(v10));
          sub_1401E0F40(v28, a2, &v23);
          *v21 += v23;
        }
        return v9;
      case 4028:
        if ( a1[71] == 1 )
        {
          v33 = 4LL * *a1;
          v4 = sub_1401F6230(a1);
          crt_memset((void *)(uintptr_t)(v4), 0, v33);
          v34 = 480LL * *a1;
          v5 = (_WORD *)sub_1401F6300((__int64)a1);
          crt_memset((void *)(uintptr_t)(v5), 0, v34);
        }
        for ( k = 0; k < a1[1]; ++k )
        {
          v35 = v7;
          v7 = (int *)((char *)v7 + (k >= a1[2] ? (int)sub_1401E99B0(v11) : sub_1401E99B0(v10)));
          v9 = sub_1401E0F40(v35, 4028);
          if ( v9 )
            break;
        }
        return v9;
      case 4031:
        v22 = *(_DWORD **)a3;
        if ( !*(_QWORD *)a3 )
          return 0xFFFFFFFFLL;
        *v22 = 0;
        for ( m = 0; m < a1[1]; ++m )
        {
          v31 = v7;
          v7 = (int *)((char *)v7 + (m >= a1[2] ? (int)sub_1401E99B0(v11) : sub_1401E99B0(v10)));
          v9 = sub_1401E0F40(v31, a2, &v24);
          if ( v9 )
            break;
          *v22 ^= v24;
        }
        return v9;
      case 4040:
        a1[70] = *a3;
        return v9;
      case 4041:
        v27 = *(_DWORD **)a3;
        if ( !v27 )
          return 0xFFFFFFFFLL;
        *v27 = a1[70];
        return v9;
      default:
        return (unsigned int)-5;
    }
    return v9;
  }
  v39 = (_QWORD **)(a3 + 2);
  v17 = *((_DWORD *)v39 - 2);
  if ( v17 >= 0 && v17 < a1[1] )
  {
    v26 = (int **)*v39;
    if ( v26 )
    {
      for ( n = 0; n < v17; ++n )
      {
        if ( n >= a1[2] )
          v7 = (int *)((char *)v7 + (int)sub_1401E99B0(v11));
        else
          v7 = (int *)((char *)v7 + (int)sub_1401E99B0(v10));
      }
      *v26 = v7;
      return v9;
    }
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001401E47A0) ----------------------------------------------------
__int64            sub_1401E47A0(__int64 a1, int a2, int **a3)
{
  int *v3;
  int *v5;
  unsigned int v6;
  int m;
  int j;
  int i;
  int k;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  unsigned int v16;
  _QWORD *v17;
  int *v18;
  int *v19;
  int *v20;
  int *v21;
  int *v22;
  int **v26;

  v6 = 0;
  v11 = sub_1401E2280(2);
  v12 = sub_1401E2280(1);
  v5 = (int *)((int)sub_1401E99B0(268) + a1);
  if ( a2 > 4039 )
  {
    if ( a2 != 4045 )
    {
      if ( a2 == 4046 )
        goto LABEL_43;
      if ( a2 != 4047 )
      {
        if ( a2 != 5122 )
          return (unsigned int)-5;
        v26 = a3 + 1;
        v13 = *((_DWORD *)v26 - 2);
        if ( v13 >= 0 && v13 < *(_DWORD *)(a1 + 4) )
        {
          v17 = *v26;
          if ( v17 )
          {
            for ( i = 0; i < v13; ++i )
            {
              if ( i >= *(_DWORD *)(a1 + 8) )
                v5 = (int *)((char *)v5 + (int)sub_1401E99B0(v12));
              else
                v5 = (int *)((char *)v5 + (int)sub_1401E99B0(v11));
            }
            *v17 = (uint64)(uintptr_t)(v5);
            return v6;
          }
        }
        return 0xFFFFFFFFLL;
      }
    }
LABEL_14:
    v18 = *a3;
    v19 = v5;
    return (unsigned int)sub_1401E27C0(v5, a2, v18);
  }
  switch ( a2 )
  {
    case 4039:
    case 4009:
      goto LABEL_14;
    case 4028:
      for ( j = 0; j < *(_DWORD *)(a1 + 4); ++j )
      {
        v21 = v5;
        v5 = (int *)((char *)v5 + (j >= *(_DWORD *)(a1 + 8) ? (int)sub_1401E99B0(v12) : sub_1401E99B0(v11)));
        v6 = sub_1401E27C0(v21, 4028, v3);
        if ( v6 )
          break;
      }
      return v6;
    case 4029:
      goto LABEL_14;
  }
  if ( a2 != 4031 )
  {
    if ( a2 != 4034 )
      return (unsigned int)-5;
LABEL_43:
    v16 = *(_DWORD *)a3;
    for ( k = 0; k < *(_DWORD *)(a1 + 4); ++k )
    {
      v22 = v5;
      v5 = (int *)((char *)v5 + (k >= *(_DWORD *)(a1 + 8) ? (int)sub_1401E99B0(v12) : sub_1401E99B0(v11)));
      v6 = sub_1401E27C0(v22, a2, (int *)v16);
      if ( v6 )
        break;
    }
    return v6;
  }
  v14 = *a3;
  if ( *a3 )
  {
    *v14 = 0;
    for ( m = 0; m < *(_DWORD *)(a1 + 4); ++m )
    {
      v20 = v5;
      v5 = (int *)((char *)v5 + (m >= *(_DWORD *)(a1 + 8) ? (int)sub_1401E99B0(v12) : sub_1401E99B0(v11)));
      v6 = sub_1401E27C0(v20, a2, &v15);
      if ( v6 )
        break;
      *v14 ^= v15;
    }
    return v6;
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001401E4C60) ----------------------------------------------------
__int64            sub_1401E4C60(_DWORD *a1)
{
  int i;
  int v3;

  v3 = a1[2] + a1[1];
  if ( v3 > 255 )
    return 0;
  for ( i = 0; i < *a1; ++i )
  {
    if ( *((unsigned __int8 *)a1 + i + 12) >= v3 && *((unsigned __int8 *)a1 + i + 12) != 255 )
      return 0;
  }
  return 1;
}

//----- (00000001401E4CF0) ----------------------------------------------------
__int64            sub_1401E4CF0(int *a1, int a2, int a3)
{
  int i;
  int v5;

  if ( a3 >= 0 )
    v5 = a3 + 1;
  else
    v5 = 0;
  for ( i = v5; i < *a1; ++i )
  {
    if ( *((unsigned __int8 *)a1 + i + 12) == 2 * a2 )
      return (unsigned int)i;
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001401E4D70) ----------------------------------------------------
__int64            sub_1401E4D70(int *a1, int a2, int a3)
{
  int i;
  int v5;

  if ( a3 >= 0 )
    v5 = a3 + 1;
  else
    v5 = 0;
  for ( i = v5; i < *a1; ++i )
  {
    if ( *((unsigned __int8 *)a1 + i + 12) == 2 * a2 + 1 )
      return (unsigned int)i;
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001401E4DF0) ----------------------------------------------------
__int64            sub_1401E4DF0(int *a1, int a2, int a3)
{
  int i;
  int v5;

  if ( a3 >= 0 )
    v5 = a3 + 1;
  else
    v5 = 0;
  for ( i = v5; i < *a1; ++i )
  {
    if ( *((unsigned __int8 *)a1 + i + 12) == a1[2] + a2 )
      return (unsigned int)i;
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001401E4E80) ----------------------------------------------------
__int64            sub_1401E4E80(__int64 a1, __int64 a2, signed int a3, int a4, int a5, int a6, signed int a7)
{
  __int64 result;
  int i;
  int m;
  int k;
  signed int j;

  for ( i = 0; ; ++i )
  {
    result = (unsigned int)a3;
    if ( i >= a3 )
      break;
    *(float *)(a2 + 4LL * i) = *(float *)(a1 + 4LL * (a5 + a7 * (a4 + i))) * 32768.0;
  }
  if ( a6 <= -1 )
  {
    if ( a6 == -2 )
    {
      for ( j = 1; ; ++j )
      {
        result = (unsigned int)a7;
        if ( j >= a7 )
          break;
        for ( k = 0; k < a3; ++k )
          *(float *)(a2 + 4LL * k) = *(float *)(a2 + 4LL * k)
                                   + (float)(*(float *)(a1 + 4LL * (j + a7 * (a4 + k))) * 32768.0);
      }
    }
  }
  else
  {
    for ( m = 0; ; ++m )
    {
      result = (unsigned int)a3;
      if ( m >= a3 )
        break;
      *(float *)(a2 + 4LL * m) = *(float *)(a2 + 4LL * m)
                               + (float)(*(float *)(a1 + 4LL * (a6 + a7 * (a4 + m))) * 32768.0);
    }
  }
  return result;
}

//----- (00000001401E5010) ----------------------------------------------------
__int64            sub_1401E5010(__int64 a1, __int64 a2, signed int a3, int a4, int a5, int a6, signed int a7)
{
  __int64 result;
  int i;
  int m;
  int k;
  signed int j;

  for ( i = 0; ; ++i )
  {
    result = (unsigned int)a3;
    if ( i >= a3 )
      break;
    *(float *)(a2 + 4LL * i) = (float)*(__int16 *)(a1 + 2LL * (a5 + a7 * (a4 + i)));
  }
  if ( a6 <= -1 )
  {
    if ( a6 == -2 )
    {
      for ( j = 1; ; ++j )
      {
        result = (unsigned int)a7;
        if ( j >= a7 )
          break;
        for ( k = 0; k < a3; ++k )
          *(float *)(a2 + 4LL * k) = *(float *)(a2 + 4LL * k) + (float)*(__int16 *)(a1 + 2LL * (j + a7 * (a4 + k)));
      }
    }
  }
  else
  {
    for ( m = 0; ; ++m )
    {
      result = (unsigned int)a3;
      if ( m >= a3 )
        break;
      *(float *)(a2 + 4LL * m) = *(float *)(a2 + 4LL * m) + (float)*(__int16 *)(a1 + 2LL * (a6 + a7 * (a4 + m)));
    }
  }
  return result;
}

//----- (00000001401E5190) ----------------------------------------------------
_BOOL8            sub_1401E5190(__int64 a1, int a2, int a3, char a4)
{
  return (float)(1.0 / (float)(1 << a4)) >= sub_1401A6D80(a1, a3 * a2);
}

//----- (00000001401E5230) ----------------------------------------------------
__int64            sub_1401E5230(int a1, unsigned __int8 *a2)
{
  if ( a1 >= 252 )
  {
    *a2 = (a1 & 3) - 4;
    a2[1] = (a1 - *a2) >> 2;
    return 2;
  }
  else
  {
    *a2 = a1;
    return 1;
  }
}

//----- (00000001401E52C0) ----------------------------------------------------
__int64            sub_1401E52C0(int a1, int a2, int a3)
{
  int v4;

  if ( a1 < a3 / 400 )
    return 0xFFFFFFFFLL;
  if ( a2 == 5000 )
  {
    v4 = a1;
  }
  else
  {
    if ( a2 < 5001 || a2 > 5009 )
      return 0xFFFFFFFFLL;
    if ( a2 > 5005 )
      v4 = a3 * (a2 - 5003) / 50;
    else
      v4 = (a3 / 400) << (a2 + 119);
  }
  if ( v4 > a1 )
    return 0xFFFFFFFFLL;
  if ( 400 * v4 == a3
    || 200 * v4 == a3
    || 100 * v4 == a3
    || 50 * v4 == a3
    || 25 * v4 == a3
    || 50 * v4 == 3 * a3
    || 50 * v4 == 4 * a3
    || 50 * v4 == 5 * a3
    || 50 * v4 == 6 * a3 )
  {
    return (unsigned int)v4;
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001401E5400) ----------------------------------------------------
int                sub_1401E5400(
        int *a1,
        __int64 a2,
        int a3,
        __m128i *a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void (           *a12)(__int64, int *, _QWORD, _QWORD, int, int, int),
        int a13)
{
  float v13;
  int v14;
  unsigned __int64 v15;
  void *v16;
  int v17;
  unsigned __int64 v18;
  void *v19;
  float v20;
  int v21;
  __int16 v22;
  __int16 v23;
  unsigned __int64 v24;
  void *v25;
  unsigned __int64 v26;
       __m128i *v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
       __m128i *v30;
  int v31;
  int v32;
  int v33;
  __m128i *v34;
  __m128i *v35;
  int v36;
  __int32 v37;
  __m128i v39;
  int v40;
  int v41;
  BOOL v42;
  _DWORD *v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
       __m128i *v50;
  BOOL v51;
  __int16 v52;
  int v53;
  int v54;
  int i;
  __m128i v56;
  int v57;
  int v58;
  float v59;
  int v60;
  int v61;
  int v62;
  int v63;
  unsigned int v64;
  int v65;
  float v66;
  int v67;
  int v68;
  int v69;
  float v70;
  __m128i v71;
  float v72;
  int v73;
  float v74;
  float v75;
  int v76;
  int v77;
  float v78;
  float v79;
  __int32 v80;
  int v81;
  int v82;
  int v83;
  int v84;
  float v85;
  int v86;
  int v87;
  __int32 v88;
  int v89;
  BOOL v90;
  int v91;
  __int32 v92;
  __int32 v93;
  int v94;
  int v95;
  int v96;
  BOOL v97;
  int v98;
  int v99;
  int v100;
  BOOL v101;
  int v102;
  int v103;
  __int32 v104;
  int v105;
  int v106;
  int v107;
  unsigned int v108;
  BOOL v109;
  BOOL v110;
  float v111;
  int v112;
  float v113;
  int v114;
  __int32 v115;
  int v116;
  int v117;
  BOOL v118;
  int v119;
  BOOL v120;
  BOOL v121;
  BOOL v122;
  float v123;
  BOOL v124;
  __int32 v125;
  __int32 v126;
  __int32 v127;
  __int32 v128;
  unsigned int v129;
  int v130;
  __int32 v131;
       __m128i *v132;
       __m128i *v133;
  __m128i v134;
  __int32 v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  __int32 v143;
  __int32 v144;
  int v145;
  int v146;
  char v147[4];
  char v148[4];
  float v149;
  int v150;
  int v151;
  int v152;
  _DWORD *v153;
  __m128i *v154;
  _DWORD *v155;
  unsigned __int8 *v156[4];
  int v157;
  __int64 v158;
  int *v159;
  __int64 v160;
  __int64 v161;
  int *v162;
  __m128i *v163;
  int *v164;
  char *v165;
  __m128i *v166;
  __m128i v167;
  __int32 v168;
  __int32 v169;
  __int32 v170;
  int v171;
  float v172;
  _DWORD v173[36];
  __int64 v174;
  __int8 *v179;
  __m128i *v180;
  unsigned int v181;

  SR_VEC_LANES(128, v39, i32)[0] = 0;
  v69 = 0;
  v129 = 0;
  v42 = 0;
  SR_VEC_LANES(128, v39, i32)[3] = 0;
  v51 = 0;
  v82 = 0;
  SR_VEC_LANES(128, v56, i32)[0] = 0;
  v77 = -1;
  v106 = -1;
  SR_VEC_LANES(128, v56, i32)[3] = 0;
  if ( a5 <= 1276 )
    v131 = a5;
  else
    v131 = 1276;
  SR_VEC_LANES(128, v39, i32)[1] = v131;
  a1[4535] = 0;
  if ( a3 <= 0 || SR_VEC_LANES(128, v39, i32)[1] <= 0 )
    return -1;
  if ( SR_VEC_LANES(128, v39, i32)[1] == 1 && a1[36] == (int)(10u * (unsigned)a3) )
    return -2;
  v132 = (     __m128i *)((char *)a1 + a1[1]);
  v43 = (int *)((char *)a1 + *a1);
  if ( a1[27] == 2051 )
    v86 = 0;
  else
    v86 = a1[29];
  if ( a6 >= a1[42] )
    v84 = a1[42];
  else
    v84 = a6;
  v181 = v84;
  sub_140199190(v43, 10015, &v71);
  SR_VEC_LANES(128, v167, i32)[0] = 0;
  if ( a1[11] < 7 || a1[36] < 16000 )
  {
    if ( a1[1912] )
      sub_1401EBF00((__int64)(a1 + 47));
  }
  else
  {
    SR_VEC_LANES(128, v56, i32)[3] = sub_1401E5190(a2, a3, a1[28], v181);
    v77 = a1[1909];
    v106 = a1[1910];
    sub_1401ECBA0(a1 + 47, SR_VEC_LANES(128, v71, i64)[0], a7, a8, a3, a9, a10, a11, a1[36], v181, a12, (__int64)&v167);
    if ( !SR_VEC_LANES(128, v56, i32)[3] && v172 > 0.1 )
    {
      v149 = 0.99900001 * *((float *)a1 + 4533);
      v13 = sub_1401F5870(a2, a3, a1[28]);
      if ( v149 <= v13 )
        v85 = sub_1401F5870(a2, a3, a1[28]);
      else
        v85 = 0.99900001 * *((float *)a1 + 4533);
      *((float *)a1 + 4533) = v85;
    }
  }
  if ( !SR_VEC_LANES(128, v56, i32)[3] )
    a1[35] = -1;
  a1[4531] = 0;
  if ( SR_VEC_LANES(128, v167, i32)[0] )
  {
    if ( a1[31] == -1000 )
    {
      if ( a1[3557] )
      {
        if ( a1[3557] == 1002 )
          SR_VEC_LANES(128, v71, i32)[2] = v170;
        else
          SR_VEC_LANES(128, v71, i32)[2] = v169;
      }
      else
      {
        SR_VEC_LANES(128, v71, i32)[2] = v168;
      }
      a1[35] = (int)floor((float)(100.0 * (float)(1.0 - *(float *)&SR_VEC_LANES(128, v71, i32)[2])) + 0.5);
    }
    v65 = v171;
    if ( v171 > 12 )
    {
      if ( v65 > 14 )
      {
        if ( v65 > 16 )
        {
          if ( v65 > 18 )
            a1[4531] = 1105;
          else
            a1[4531] = 1104;
        }
        else
        {
          a1[4531] = 1103;
        }
      }
      else
      {
        a1[4531] = 1102;
      }
    }
    else
    {
      a1[4531] = 1101;
    }
  }
  if ( a1[28] != 2 || a1[30] == 1 )
    v59 = 0.0;
  else
    v59 = sub_1401F4BB0(a2, a3, a1[36], (float *)a1 + 3566);
  v41 = v86;
  a1[40] = sub_1401F4B00(a1, a3, SR_VEC_LANES(128, v39, i32)[1]);
  v40 = a1[36] / a3;
  if ( !a1[37] )
  {
    v57 = 12 * a1[36] / a3;
    v150 = 12 * a1[40] / 8;
    if ( (v57 / 2 + v150) / v57 >= SR_VEC_LANES(128, v39, i32)[1] )
    {
      v87 = SR_VEC_LANES(128, v39, i32)[1];
    }
    else
    {
      v152 = 12 * a1[40] / 8;
      v87 = (v57 / 2 + v152) / v57;
    }
    SR_VEC_LANES(128, v71, i32)[3] = v87;
    a1[40] = 8 * v57 * v87 / 12;
    if ( SR_VEC_LANES(128, v71, i32)[3] >= 1 )
      v88 = SR_VEC_LANES(128, v71, i32)[3];
    else
      v88 = 1;
    SR_VEC_LANES(128, v39, i32)[1] = v88;
  }
  if ( SR_VEC_LANES(128, v39, i32)[1] < 3 || a1[40] < 24 * v40 || v40 < 50 && (v40 * SR_VEC_LANES(128, v39, i32)[1] < 300 || a1[40] < 2400) )
  {
    v48 = a1[3556];
    if ( a1[3560] )
      v89 = a1[3560];
    else
      v89 = 1101;
    v53 = v89;
    SR_VEC_LANES(128, v56, i32)[1] = 0;
    v94 = 0;
    if ( !v48 )
      v48 = 1000;
    if ( v40 > 100 )
      v48 = 1002;
    if ( v40 == 25 && v48 != 1000 )
    {
      v40 = 50;
      SR_VEC_LANES(128, v56, i32)[1] = 1;
    }
    if ( v40 <= 16 )
    {
      if ( a5 == 1 || v48 == 1000 && v40 != 10 )
      {
        v48 = 1000;
        v90 = v40 <= 12;
        SR_VEC_LANES(128, v56, i32)[1] = v90;
        if ( v40 == 12 )
          v91 = 25;
        else
          v91 = 16;
        v40 = v91;
      }
      else
      {
        v94 = 50 / v40;
        v40 = 50;
        SR_VEC_LANES(128, v56, i32)[1] = 3;
      }
    }
    if ( v48 == 1000 && v53 > 1103 )
    {
      v53 = 1103;
    }
    else if ( v48 == 1002 && v53 == 1102 )
    {
      v53 = 1101;
    }
    else if ( v48 == 1001 && v53 <= 1104 )
    {
      v53 = 1104;
    }
    SR_VEC_PTR_LANES(128, a4, i8)[0] = sub_1401F3E60(v48, v40, v53, a1[3548]);
    SR_VEC_PTR_LANES(128, a4, i8)[0] |= SR_VEC_LANES(128, v56, u8)[4];
    if ( SR_VEC_LANES(128, v56, i32)[1] > 1 )
      v92 = 2;
    else
      v92 = 1;
    SR_VEC_LANES(128, v39, i32)[0] = v92;
    if ( SR_VEC_LANES(128, v39, i32)[1] <= v92 )
      v93 = SR_VEC_LANES(128, v39, i32)[0];
    else
      v93 = SR_VEC_LANES(128, v39, i32)[1];
    SR_VEC_LANES(128, v39, i32)[1] = v93;
    if ( SR_VEC_LANES(128, v56, i32)[1] == 3 )
      SR_VEC_PTR_LANES(128, a4, i8)[1] = v94;
    if ( !a1[37] )
    {
      if ( (unsigned int)sub_1401E3980(a4, SR_VEC_LANES(128, v39, i32)[0], SR_VEC_LANES(128, v39, i32)[1]) )
        SR_VEC_LANES(128, v39, i32)[0] = -3;
      else
        SR_VEC_LANES(128, v39, i32)[0] = SR_VEC_LANES(128, v39, i32)[1];
    }
    return SR_VEC_LANES(128, v39, i32)[0];
  }
  v115 = 8 * SR_VEC_LANES(128, v39, i32)[1] * v40;
  v45 = sub_1401F5760(a1[40], a1[28], a1[36] / a3, a1[37], 0, a1[11], a1[10]);
  if ( a1[31] == 3001 )
  {
    v44 = 127;
  }
  else if ( a1[31] == 3002 )
  {
    v44 = 0;
  }
  else if ( a1[35] < 0 )
  {
    if ( a1[27] == 2048 )
      v44 = 115;
    else
      v44 = 48;
  }
  else
  {
    v44 = (327 * a1[35]) >> 8;
    if ( a1[27] == 2049 )
    {
      if ( v44 >= 115 )
        v95 = 115;
      else
        v95 = v44;
      v44 = v95;
    }
  }
  if ( a1[30] == -1000 || a1[28] != 2 )
  {
    if ( a1[28] == 2 )
    {
      v58 = ((2000 * v44 * v44) >> 14) + 17000;
      if ( a1[3548] == 2 )
        v58 -= 1000;
      else
        v58 += 1000;
      if ( v45 <= v58 )
        v96 = 1;
      else
        v96 = 2;
      a1[3548] = v96;
    }
    else
    {
      a1[3548] = a1[28];
    }
  }
  else
  {
    a1[3548] = a1[30];
  }
  v45 = sub_1401F5760(a1[40], a1[3548], a1[36] / a3, a1[37], 0, a1[11], a1[10]);
  v97 = a1[46] && !SR_VEC_LANES(128, v167, i32)[0] && !SR_VEC_LANES(128, v56, i32)[3];
  a1[14] = v97;
  if ( a1[27] == 2051 )
  {
    a1[3556] = 1002;
  }
  else if ( a1[34] == -1000 )
  {
    SR_VEC_LANES(128, v134, i32)[2] = (int)(float)((float)((float)(1.0 - v59) * (float)unk_14027BCF8)
                                   + (float)(v59 * (float)unk_14027BD00));
    v98 = (int)(float)((float)((float)(1.0 - v59) * (float)unk_14027BD04) + (float)(v59 * (float)unk_14027BD04));
    v54 = (((SR_VEC_LANES(128, v134, i32)[2] - v98) * v44 * v44) >> 14) + v98;
    if ( a1[27] == 2048 )
      v54 += 8000;
    if ( a1[3557] == 1002 )
    {
      v54 -= 4000;
    }
    else if ( a1[3557] > 0 )
    {
      v54 += 4000;
    }
    if ( v45 < v54 )
      v99 = 1000;
    else
      v99 = 1002;
    a1[3556] = v99;
    if ( a1[12] && a1[10] > (128 - v44) >> 4 )
      a1[3556] = 1000;
    if ( a1[14] && v44 > 100 )
      a1[3556] = 1000;
    if ( v40 <= 50 )
      v100 = 6000;
    else
      v100 = 9000;
    if ( SR_VEC_LANES(128, v39, i32)[1] < a3 * v100 / (8 * a1[36]) )
      a1[3556] = 1002;
  }
  else
  {
    a1[3556] = a1[34];
  }
  if ( a1[3556] != 1002 && a3 < a1[36] / 100 )
    a1[3556] = 1002;
  if ( a1[44] )
    a1[3556] = 1002;
  if ( a1[3557] > 0 && (a1[3556] != 1002 && a1[3557] == 1002 || a1[3556] == 1002 && a1[3557] != 1002) )
  {
    v42 = 1;
    v101 = a1[3556] != 1002;
    v51 = v101;
    if ( !v101 )
    {
      if ( a3 < a1[36] / 100 )
      {
        v42 = 0;
      }
      else
      {
        a1[3556] = a1[3557];
        v82 = 1;
      }
    }
  }
  if ( a1[3548] != 1 || a1[3558] != 2 || a1[17] || a1[3556] == 1002 || a1[3557] == 1002 )
  {
    a1[17] = 0;
  }
  else
  {
    a1[17] = 1;
    a1[3548] = 2;
  }
  v45 = sub_1401F5760(a1[40], a1[3548], a1[36] / a3, a1[37], a1[3556], a1[11], a1[10]);
  if ( a1[3556] != 1002 && a1[3557] == 1002 )
  {
    sub_1401CAAD0((__int64)v132, a1[45], v173);
    v69 = 1;
  }
  if ( a1[3556] == 1002 || a1[3563] || a1[21] )
  {
    v49 = 1105;
    if ( a1[28] != 2 || a1[30] == 1 )
    {
      v155 = &unk_14027BC78;
      v153 = &unk_14027BC98;
    }
    else
    {
      v155 = &unk_14027BCB8;
      v153 = &unk_14027BCD8;
    }
    for ( SR_VEC_LANES(128, v39, i32)[2] = 0; SR_VEC_LANES(128, v39, i32)[2] < 8; ++SR_VEC_LANES(128, v39, i32)[2] )
      v173[SR_VEC_LANES(128, v39, i32)[2] + 28] = v153[SR_VEC_LANES(128, v39, i32)[2]]
                                  + (((v155[SR_VEC_LANES(128, v39, i32)[2]] - v153[SR_VEC_LANES(128, v39, i32)[2]]) * v44 * v44) >> 14);
    do
    {
      v60 = v173[2 * v49 - 2176];
      v102 = v173[2 * v49 - 2175];
      if ( !a1[3563] )
      {
        if ( a1[3561] < v49 )
          v60 += v102;
        else
          v60 -= v102;
      }
      if ( v45 >= v60 )
        break;
      --v49;
    }
    while ( v49 > 1101 );
    if ( v49 == 1102 )
      v49 = 1103;
    a1[3561] = v49;
    a1[3560] = v49;
    if ( !a1[3563] && a1[3556] != 1002 && !a1[22] && a1[3560] > 1103 )
      a1[3560] = 1103;
  }
  if ( a1[3560] > a1[33] )
    a1[3560] = a1[33];
  if ( a1[32] != -1000 )
    a1[3560] = a1[32];
  if ( a1[3556] != 1002 && v115 < 15000 )
  {
    if ( a1[3560] >= 1103 )
      v103 = 1103;
    else
      v103 = a1[3560];
    a1[3560] = v103;
  }
  if ( a1[36] <= 24000 && a1[3560] > 1104 )
    a1[3560] = 1104;
  if ( a1[36] <= 16000 && a1[3560] > 1103 )
    a1[3560] = 1103;
  if ( a1[36] <= 12000 && a1[3560] > 1102 )
    a1[3560] = 1102;
  if ( a1[36] <= 8000 && a1[3560] > 1101 )
    a1[3560] = 1101;
  if ( a1[4531] && a1[32] == -1000 )
  {
    if ( v45 <= 18000 * a1[3548] && a1[3556] == 1002 )
    {
      SR_VEC_LANES(128, v56, i32)[2] = 1101;
    }
    else if ( v45 <= 24000 * a1[3548] && a1[3556] == 1002 )
    {
      SR_VEC_LANES(128, v56, i32)[2] = 1102;
    }
    else if ( v45 > 30000 * a1[3548] )
    {
      if ( v45 > 44000 * a1[3548] )
        SR_VEC_LANES(128, v56, i32)[2] = 1105;
      else
        SR_VEC_LANES(128, v56, i32)[2] = 1104;
    }
    else
    {
      SR_VEC_LANES(128, v56, i32)[2] = 1103;
    }
    if ( a1[4531] <= SR_VEC_LANES(128, v56, i32)[2] )
      v104 = SR_VEC_LANES(128, v56, i32)[2];
    else
      v104 = a1[4531];
    a1[4531] = v104;
    if ( a1[3560] >= a1[4531] )
      v105 = a1[4531];
    else
      v105 = a1[3560];
    a1[3560] = v105;
  }
  a1[13] = sub_1401F53F0(a1[12], a1[10], a1[13], a1[3556], a1 + 3560, v45);
  sub_140199190(v43, 4036, (__m128i *)v181);
  if ( a1[3556] == 1002 && a1[3560] == 1102 )
    a1[3560] = 1103;
  if ( a1[44] )
    a1[3560] = 1101;
  v46 = a1[3560];
  if ( a1[3556] == 1000 && v46 > 1103 )
    a1[3556] = 1001;
  if ( a1[3556] == 1001 && v46 <= 1103 )
    a1[3556] = 1000;
  if ( a3 > a1[36] / 50 && a1[3556] != 1000 || a3 > 3 * a1[36] / 50 )
  {
    if ( a1[3556] == 1000 )
    {
      if ( a3 == 2 * a1[36] / 25 )
      {
        v61 = a1[36] / 25;
      }
      else if ( a3 == 3 * a1[36] / 25 )
      {
        v61 = 3 * a1[36] / 50;
      }
      else
      {
        v61 = a1[36] / 50;
      }
    }
    else
    {
      v61 = a1[36] / 50;
    }
    SR_VEC_LANES(128, v134, i32)[3] = a3 / v61;
    if ( v77 != -1 )
    {
      a1[1909] = v77;
      a1[1910] = v106;
    }
    SR_VEC_LANES(128, v39, i32)[0] = sub_1401F59A0(a1, a2, SR_VEC_LANES(128, v134, i32)[3], v61, a4, a5, v82, v181, a13);
    return SR_VEC_LANES(128, v39, i32)[0];
  }
  if ( a1[3562] )
  {
    v42 = 1;
    v51 = 1;
    a1[3562] = 0;
    v69 = 2;
  }
  if ( a1[3556] == 1002 )
    v42 = 0;
  if ( v42 )
  {
    SR_VEC_LANES(128, v39, i32)[3] = sub_1401F5E00(SR_VEC_LANES(128, v39, i32)[1], a1[40], v40, a1[3548]);
    if ( !SR_VEC_LANES(128, v39, i32)[3] )
      v42 = 0;
  }
  v135 = SR_VEC_LANES(128, v39, i32)[1] - SR_VEC_LANES(128, v39, i32)[3];
  v14 = a3 * a1[40];
  v151 = 8 * a1[36];
  if ( SR_VEC_LANES(128, v39, i32)[1] - SR_VEC_LANES(128, v39, i32)[3] >= v14 / v151 )
    v107 = a3 * a1[40] / (8 * a1[36]);
  else
    v107 = SR_VEC_LANES(128, v39, i32)[1] - SR_VEC_LANES(128, v39, i32)[3];
  v137 = v107 - 1;
  v179 = &SR_VEC_PTR_LANES(128, a4, i8)[1];
  sub_14019A1E0((__int64)v156, (__int64)v179, SR_VEC_LANES(128, v39, i32)[1] - 1);
  v15 = 4LL * a1[28] * (a3 + v41) + 15;
  if ( v15 <= 4LL * a1[28] * (a3 + v41) )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
  v50 = (__m128i *)v16;
  crt_memcpy(v50, (     __m128i *)&a1[a1[28] * (a1[43] - v41) + 3571], 4LL * a1[28] * v41);
  if ( a1[3556] == 1002 )
    v108 = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
  else
    v108 = SR_VEC_PTR_LANES(128, v132, u32)[2];
  a1[3550] += (983LL * (int)(v108 - a1[3550])) >> 16;
  v136 = sub_1401BC3D0(a1[3550] >> 8);
  if ( a1[27] == 2048 )
    sub_1401F41E0(a2, v136, (__int64)SR_VEC_PTR_LANES(128, v50, i64) + 4 * a1[28] * v41, (float *)a1 + 3552, a3, a1[28], a1[36]);
  else
    sub_1401F43C0(a2, 3, (__int64)SR_VEC_PTR_LANES(128, v50, i64) + 4 * a1[28] * v41, (float *)a1 + 3552, a3, a1[28], a1[36]);
  if ( a13 )
  {
    v17 = a1[28] * a3;
    v158 = (__int64)SR_VEC_PTR_LANES(128, v50, i64) + 4 * a1[28] * v41;
    v72 = sub_1401A9C00(v158, v158, v17);
    if ( v72 >= 1000000000.0 )
    {
      crt_memset((void *)(uintptr_t)(&SR_VEC_PTR_LANES(128, v50, i16)[2 * a1[28] * v41]), 0, 4LL * a1[28] * a3);
      a1[3555] = 0;
      a1[3554] = 0;
      a1[3553] = 0;
      a1[3552] = 0;
    }
  }
  v70 = 1.0;
  if ( a1[3556] != 1002 )
  {
    v18 = 2LL * a3 * a1[28] + 15;
    if ( v18 <= 2LL * a3 * a1[28] )
      v18 = 0xFFFFFFFFFFFFFF0LL;
    v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
    v133 = (__m128i *)v19;
    v83 = -1;
    if ( SR_VEC_LANES(128, v167, i32)[0] )
    {
      v109 = v172 >= 0.1;
      v83 = v109;
    }
    v73 = v40 * 8 * v137;
    if ( a1[3556] == 1001 )
    {
      v110 = a1[36] == 50 * a3;
      a1[9] = sub_1401F5530(v73, v46, v110, a1[37], a1[13], a1[3548]);
      if ( !*((_QWORD *)a1 + 1782) )
      {
        v138 = v73 - a1[9];
        v20 = exp(0.6931471805599453 * (float)((float)-v138 * 0.0009765625));
        v70 = 1.0 - v20;
      }
    }
    else
    {
      a1[9] = v73;
    }
    if ( *((_QWORD *)a1 + 1782) && a1[37] && !a1[44] )
    {
      v74 = 0.0;
      v67 = 17;
      v52 = 16000;
      if ( a1[3560] == 1101 )
      {
        v67 = 13;
        v52 = 8000;
      }
      else if ( a1[3560] == 1102 )
      {
        v67 = 15;
        v52 = 12000;
      }
      for ( i = 0; i < a1[28]; ++i )
      {
        for ( SR_VEC_LANES(128, v39, i32)[2] = 0; SR_VEC_LANES(128, v39, i32)[2] < v67; ++SR_VEC_LANES(128, v39, i32)[2] )
        {
          if ( *(float *)(*((_QWORD *)a1 + 1782) + 4LL * (SR_VEC_LANES(128, v39, i32)[2] + 21 * i)) >= 0.5 )
            v111 = 0.5;
          else
            v111 = *(float *)(*((_QWORD *)a1 + 1782) + 4LL * (SR_VEC_LANES(128, v39, i32)[2] + 21 * i));
          if ( v111 <= -2.0 )
          {
            v113 = -2.0;
          }
          else
          {
            if ( *(float *)(*((_QWORD *)a1 + 1782) + 4LL * (SR_VEC_LANES(128, v39, i32)[2] + 21 * i)) >= 0.5 )
              v112 = 1056964608;
            else
              v112 = *(_DWORD *)(*((_QWORD *)a1 + 1782) + 4LL * (SR_VEC_LANES(128, v39, i32)[2] + 21 * i));
            v113 = *(float *)&v112;
          }
          v66 = v113;
          if ( v113 > 0.0 )
            v66 = 0.5 * v66;
          v74 = v74 + v66;
        }
      }
      v75 = (float)(v74 / (float)v67) * (float)a1[28];
      v75 = v75 + 0.2;
      v62 = (int)(float)((float)v52 * v75);
      if ( v62 <= -2 * a1[9] / 3 )
        v114 = -2 * a1[9] / 3;
      else
        v114 = v62;
      v62 = v114;
      if ( a1[3560] == 1104 || a1[3560] == 1105 )
        a1[9] += 3 * v62 / 5;
      else
        a1[9] += v62;
    }
    a1[8] = 1000 * a3 / a1[36];
    a1[2] = a1[28];
    a1[3] = a1[3548];
    if ( v46 == 1101 )
    {
      a1[7] = 8000;
    }
    else if ( v46 == 1102 )
    {
      a1[7] = 12000;
    }
    else
    {
      a1[7] = 16000;
    }
    if ( a1[3556] == 1001 )
      a1[6] = 16000;
    else
      a1[6] = 8000;
    a1[5] = 16000;
    if ( a1[3556] == 1000 )
    {
      v68 = v115;
      if ( v40 > 50 )
        v68 = 2 * v68 / 3;
      if ( v68 < 8000 )
      {
        a1[5] = 12000;
        if ( a1[7] <= 12000 )
          v116 = a1[7];
        else
          v116 = 12000;
        a1[7] = v116;
      }
      if ( v68 < 7000 )
      {
        a1[5] = 8000;
        if ( a1[7] <= 8000 )
          v117 = a1[7];
        else
          v117 = 8000;
        a1[7] = v117;
      }
    }
    v118 = a1[37] == 0;
    a1[15] = v118;
    a1[16] = 8 * SR_VEC_LANES(128, v39, i32)[1] - 8;
    if ( v42 )
    {
      if ( SR_VEC_LANES(128, v39, i32)[3] >= 2 )
      {
        a1[16] -= 8 * SR_VEC_LANES(128, v39, i32)[3] + 1;
        if ( a1[3556] == 1001 )
          a1[16] -= 20;
      }
    }
    if ( a1[15] )
    {
      if ( a1[3556] == 1001 )
      {
        if ( a1[16] >= a3 * a1[9] / a1[36] )
          v119 = a3 * a1[9] / a1[36];
        else
          v119 = a1[16];
        a1[16] = v119;
      }
    }
    else if ( a1[3556] == 1001 )
    {
      v120 = a1[36] == 50 * a3;
      v139 = sub_1401F5530(a1[36] * a1[16] / a3, v46, v120, a1[37], a1[13], a1[3548]);
      a1[16] = a3 * v139 / a1[36];
    }
    if ( v69 )
    {
      v141 = 0;
      v140 = a1[43] - a1[29];
      v76 = (v140 - a1[36] / 400) * a1[28];
      v21 = a1[36] / 400;
      v159 = &a1[v76 + 3571];
      sub_1401F48B0(
        (__int64)v159,
        (__int64)v159,
        0.0,
        1.0,
        *(_DWORD *)(SR_VEC_LANES(128, v71, i64)[0] + 4),
        v21,
        a1[28],
        *(_QWORD *)(SR_VEC_LANES(128, v71, i64)[0] + 72),
        a1[36]);
      crt_memset((void *)(uintptr_t)((_WORD *)a1 + 7142), 0, 4LL * v76);
      for ( SR_VEC_LANES(128, v39, i32)[2] = 0; SR_VEC_LANES(128, v39, i32)[2] < a1[28] * a1[43]; ++SR_VEC_LANES(128, v39, i32)[2] )
      {
        v22 = sub_1401AD3E0(*(float *)&a1[SR_VEC_LANES(128, v39, i32)[2] + 3571]);
        SR_VEC_PTR_LANES(128, v133, i16)[SR_VEC_LANES(128, v39, i32)[2]] = v22;
      }
      sub_1401CABA0(v132, a1 + 2, v133, a1[43], nullptr, &v141, v69, v83);
      a1[18] = 0;
    }
    for ( SR_VEC_LANES(128, v39, i32)[2] = 0; SR_VEC_LANES(128, v39, i32)[2] < a1[28] * a3; ++SR_VEC_LANES(128, v39, i32)[2] )
    {
      v23 = sub_1401AD3E0(*(float *)&SR_VEC_PTR_LANES(128, v50, i32)[SR_VEC_LANES(128, v39, i32)[2] + a1[28] * v41]);
      SR_VEC_PTR_LANES(128, v133, i16)[SR_VEC_LANES(128, v39, i32)[2]] = v23;
    }
    SR_VEC_LANES(128, v39, i32)[0] = sub_1401CABA0(v132, a1 + 2, v133, a3, v156, &v142, 0, v83);
    if ( SR_VEC_LANES(128, v39, i32)[0] )
      return -3;
    if ( a1[3556] == 1000 )
    {
      switch ( a1[20] )
      {
        case 8000:
          v46 = 1101;
          break;
        case 12000:
          v46 = 1102;
          break;
        case 16000:
          v46 = 1103;
          break;
      }
    }
    v121 = a1[24] && !a1[4534];
    a1[18] = v121;
    if ( !v142 )
    {
      a1[4535] = 0;
      *(v179 - 1) = sub_1401F3E60(a1[3556], a1[36] / a3, v46, a1[3548]);
      return 1;
    }
    if ( a1[18] )
    {
      SR_VEC_LANES(128, v39, i32)[3] = sub_1401F5E00(SR_VEC_LANES(128, v39, i32)[1], a1[40], v40, a1[3548]);
      v122 = SR_VEC_LANES(128, v39, i32)[3] != 0;
      v42 = v122;
      v51 = 0;
      a1[3562] = 1;
    }
  }
  v64 = 21;
  v63 = v46;
  if ( v46 == 1101 )
  {
    v64 = 13;
  }
  else if ( v63 > 1101 )
  {
    if ( v63 <= 1103 )
    {
      v64 = 17;
    }
    else if ( v63 == 1104 )
    {
      v64 = 19;
    }
    else if ( v63 == 1105 )
    {
      v64 = 21;
    }
  }
  sub_140199190(v43, 10012, (__m128i *)v64);
  sub_140199190(v43, 10008, (__m128i *)(unsigned int)a1[3548]);
  sub_140199190(v43, 4002, (__m128i *)0xFFFFFFFFLL);
  if ( a1[3556] != 1000 )
  {
    v123 = 2.0;
    sub_140199190(v43, 4006, nullptr);
    if ( a1[19] )
      v123 = 0.0;
    sub_140199190(v43, 10002, (__m128i *)(unsigned int)(int)v123);
    if ( a1[3556] == 1001 )
    {
      if ( a1[37] )
      {
        sub_140199190(v43, 4002, (__m128i *)(unsigned int)(a1[40] - a1[9]));
        sub_140199190(v43, 4020, nullptr);
      }
    }
    else if ( a1[37] )
    {
      sub_140199190(v43, 4006, (__m128i *)1);
      sub_140199190(v43, 4020, (__m128i *)(unsigned int)a1[38]);
      sub_140199190(v43, 4002, (__m128i *)(unsigned int)a1[40]);
    }
  }
  v24 = 4LL * (a1[36] * a1[28] / 400) + 15;
  if ( v24 <= 4LL * (a1[36] * a1[28] / 400) )
    v24 = 0xFFFFFFFFFFFFFF0LL;
  v25 = alloca(v24 & 0xFFFFFFFFFFFFFFF0uLL);
  v154 = (__m128i *)v25;
  if ( a1[3556] != 1000 && a1[3556] != a1[3557] && a1[3557] > 0 )
  {
    v160 = a1[36] * a1[28] / 400;
    v161 = 4 * v160;
    crt_memcpy(v154, (     __m128i *)&a1[a1[28] * (a1[43] - v41 - a1[36] / 400) + 3571], 4 * v160);
  }
  if ( (a1[43] - (v41 + a3)) * a1[28] <= 0 )
  {
    v29 = 4LL * a1[28] * a1[43];
    v30 = (     __m128i *)((char *)v50 + 4 * a1[28] * (v41 + a3 - a1[43]));
    v164 = a1 + 3571;
    crt_memcpy((__m128i *)(a1 + 3571), v30, v29);
  }
  else
  {
    v26 = 4LL * (a1[43] - a3 - v41) * a1[28];
    v27 = (     __m128i *)&a1[a3 * a1[28] + 3571];
    v162 = a1 + 3571;
    crt_memcpy((__m128i *)(a1 + 3571), v27, v26);
    v28 = 4LL * a1[28] * (v41 + a3);
    v163 = (__m128i *)&a1[(a1[43] - a3 - v41) * a1[28] + 3571];
    crt_memcpy(v163, v50, v28);
  }
  if ( *((float *)a1 + 3551) < 1.0 || v70 < 1.0 )
    sub_1401F48B0(
      (__int64)v50,
      (__int64)v50,
      *((float *)a1 + 3551),
      v70,
      *(_DWORD *)(SR_VEC_LANES(128, v71, i64)[0] + 4),
      a3,
      a1[28],
      *(_QWORD *)(SR_VEC_LANES(128, v71, i64)[0] + 72),
      a1[36]);
  *((float *)a1 + 3551) = v70;
  if ( a1[3556] != 1001 || a1[3548] == 1 )
  {
    if ( v45 <= 32000 )
    {
      if ( v45 >= 16000 )
        a1[23] = 0x4000 - ((32000 - v45) << 11) / (v45 - 14000);
      else
        a1[23] = 0;
    }
    else
    {
      a1[23] = 0x4000;
    }
  }
  if ( !*((_QWORD *)a1 + 1782) && a1[28] == 2 && (*((__int16 *)a1 + 7098) < 0x4000 || a1[23] < 0x4000) )
  {
    v79 = (float)*((__int16 *)a1 + 7098);
    v78 = (float)a1[23];
    v79 = v79 * 0.000061035156;
    v78 = v78 * 0.000061035156;
    sub_1401F4640(
      (__int64)v50,
      (__int64)v50,
      v79,
      v78,
      *(_DWORD *)(SR_VEC_LANES(128, v71, i64)[0] + 4),
      a3,
      a1[28],
      *(_QWORD *)(SR_VEC_LANES(128, v71, i64)[0] + 72),
      a1[36]);
    *((_WORD *)a1 + 7098) = *((_WORD *)a1 + 46);
  }
  if ( a1[3556] == 1002
    || (v124 = a1[3556] == 1001, v31 = sub_14019A0A0((__int64)v156), v31 + 20 * v124 + 17 > 8 * SR_VEC_LANES(128, v39, i32)[1] - 8) )
  {
    v42 = 0;
  }
  else
  {
    if ( a1[3556] == 1001 )
      sub_14019A450(v156, v42, 12);
    if ( v42 )
    {
      sub_14019A450(v156, v51, 1);
      if ( a1[3556] == 1001 )
      {
        v143 = SR_VEC_LANES(128, v39, i32)[1] - 1;
        v32 = sub_14019A0A0((__int64)v156);
        v80 = v143 - ((v32 + 18) >> 3);
      }
      else
      {
        v144 = SR_VEC_LANES(128, v39, i32)[1] - 1;
        v33 = sub_14019A0A0((__int64)v156);
        v80 = v144 - ((v33 + 7) >> 3);
      }
      v125 = v80 >= SR_VEC_LANES(128, v39, i32)[3] ? SR_VEC_LANES(128, v39, i32)[3] : v80;
      SR_VEC_LANES(128, v39, i32)[3] = v125;
      v126 = v125 >= 2 ? SR_VEC_LANES(128, v39, i32)[3] : 2;
      if ( v126 <= 257 )
      {
        v127 = SR_VEC_LANES(128, v39, i32)[3] >= 2 ? SR_VEC_LANES(128, v39, i32)[3] : 2;
        v128 = v127;
      }
      else
      {
        v128 = 257;
      }
      SR_VEC_LANES(128, v39, i32)[3] = v128;
      if ( a1[3556] == 1001 )
        sub_14019A5E0(v156, SR_VEC_LANES(128, v39, i32)[3] - 2, 256);
    }
  }
  if ( !v42 )
  {
    a1[3562] = 0;
    SR_VEC_LANES(128, v39, i32)[3] = 0;
  }
  if ( a1[3556] != 1002 )
    v129 = 17;
  if ( a1[3556] == 1000 )
  {
    SR_VEC_LANES(128, v39, i32)[0] = (int)(sub_14019A0A0((__int64)v156) + 7) >> 3;
    sub_14019A9C0(v156);
    v47 = SR_VEC_LANES(128, v39, i32)[0];
  }
  else
  {
    v47 = SR_VEC_LANES(128, v39, i32)[1] - 1 - SR_VEC_LANES(128, v39, i32)[3];
    sub_14019A8F0((__int64)v156, v47);
  }
  if ( v42 || a1[3556] != 1000 )
    sub_140199190(v43, 10022, &v167);
  if ( a1[3556] == 1001 )
  {
    SR_VEC_LANES(128, v134, i64)[0] = *(_QWORD *)(a1 + 25);
    sub_140199190(v43, 10028, &v134);
  }
  if ( v42 && v51 )
  {
    sub_140199190(v43, 10010, nullptr);
    sub_140199190(v43, 4006, nullptr);
    sub_140199190(v43, 4002, (__m128i *)0xFFFFFFFFLL);
    v165 = &v179[v47];
    v145 = sub_14019B2E0((__int64)v43, (__int64)v50, a1[36] / 200, (__int64)v165, SR_VEC_LANES(128, v39, i32)[3], nullptr);
    if ( v145 < 0 )
      return -3;
    sub_140199190(v43, 4031, &v56);
    sub_140199190(v43, 4028, v34);
  }
  sub_140199190(v43, 10010, (__m128i *)v129);
  if ( a1[3556] != 1000 )
  {
    if ( a1[3556] != a1[3557] && a1[3557] > 0 )
    {
      sub_140199190(v43, 4028, v35);
      sub_14019B2E0((__int64)v43, (__int64)v154, a1[36] / 400, (__int64)v148, 2, nullptr);
      sub_140199190(v43, 10002, nullptr);
    }
    v36 = sub_14019A0A0((__int64)v156);
    if ( v36 <= 8 * v47 )
    {
      if ( v42 && v51 && a1[3556] == 1001 && a1[37] )
        sub_140199190(v43, 4002, (__m128i *)(unsigned int)(a1[40] - a1[9]));
      sub_140199190(v43, 4006, (__m128i *)(unsigned int)a1[37]);
      SR_VEC_LANES(128, v39, i32)[0] = sub_14019B2E0((__int64)v43, (__int64)v50, a3, 0, v47, (unsigned int *)v156);
      if ( SR_VEC_LANES(128, v39, i32)[0] < 0 )
        return -3;
      if ( v42 && v51 && a1[3556] == 1001 && a1[37] )
      {
        v166 = (__m128i *)&v179[SR_VEC_LANES(128, v39, i32)[0]];
        crt_memcpy(v166, (     __m128i *)&v179[v47], SR_VEC_LANES(128, v39, i32)[3]);
        v47 += SR_VEC_LANES(128, v39, i32)[3];
      }
    }
  }
  if ( v42 && !v51 )
  {
    v81 = a1[36] / 200;
    v130 = a1[36] / 400;
    sub_140199190(v43, 4028, v35);
    sub_140199190(v43, 10010, nullptr);
    sub_140199190(v43, 10002, nullptr);
    sub_140199190(v43, 4006, nullptr);
    sub_140199190(v43, 4002, (__m128i *)0xFFFFFFFFLL);
    if ( a1[3556] == 1001 )
    {
      v47 = SR_VEC_LANES(128, v39, i32)[0];
      sub_14019A8F0((__int64)v156, SR_VEC_LANES(128, v39, u32)[0]);
    }
    sub_14019B2E0(
      (__int64)v43,
      (__int64)SR_VEC_PTR_LANES(128, v50, i64) + 4 * (a3 - v81 - v130) * a1[28],
      v130,
      (__int64)v147,
      2,
      nullptr);
    v146 = sub_14019B2E0(
             (__int64)v43,
             (__int64)SR_VEC_PTR_LANES(128, v50, i64) + 4 * (a3 - v81) * a1[28],
             v81,
             (__int64)&v179[v47],
             SR_VEC_LANES(128, v39, i32)[3],
             nullptr);
    if ( v146 < 0 )
      return -3;
    sub_140199190(v43, 4031, &v56);
  }
  v180 = (__m128i *)(v179 - 1);
  SR_VEC_PTR_LANES(128, v180, i8)[0] = sub_1401F3E60(a1[3556], a1[36] / a3, v46, a1[3548]);
  a1[4535] = SR_VEC_LANES(128, v56, i32)[0] ^ v157;
  if ( v82 )
    a1[3557] = 1002;
  else
    a1[3557] = a1[3556];
  a1[3558] = a1[3548];
  a1[3559] = a3;
  a1[3563] = 0;
  if ( a1[46] && (SR_VEC_LANES(128, v167, i32)[0] || SR_VEC_LANES(128, v56, i32)[3]) )
  {
    if ( (unsigned int)sub_1401F58C0(v172, a1 + 4532, *((float *)a1 + 4533), a2, a3, a1[28], SR_VEC_LANES(128, v56, i32)[3]) )
    {
      a1[4535] = 0;
      SR_VEC_PTR_LANES(128, v180, i8)[0] = sub_1401F3E60(a1[3556], a1[36] / a3, v46, a1[3548]);
      return 1;
    }
  }
  else
  {
    a1[4532] = 0;
  }
  v37 = sub_14019A0A0((__int64)v156);
  if ( v37 <= 8 * SR_VEC_LANES(128, v39, i32)[1] - 8 )
  {
    if ( a1[3556] == 1000 && !v42 )
    {
      while ( SR_VEC_LANES(128, v39, i32)[0] > 2 && !SR_VEC_PTR_LANES(128, v180, i8)[SR_VEC_LANES(128, v39, i32)[0]] )
        --SR_VEC_LANES(128, v39, i32)[0];
    }
  }
  else
  {
    if ( SR_VEC_LANES(128, v39, i32)[1] < 2 )
      return -2;
    SR_VEC_PTR_LANES(128, v180, i8)[1] = 0;
    SR_VEC_LANES(128, v39, i32)[0] = 1;
    a1[4535] = 0;
  }
  SR_VEC_LANES(128, v39, i32)[0] += SR_VEC_LANES(128, v39, i32)[3] + 1;
  if ( !a1[37] )
  {
    if ( (unsigned int)sub_1401E3980(v180, SR_VEC_LANES(128, v39, i32)[0], SR_VEC_LANES(128, v39, i32)[1]) )
      return -3;
    SR_VEC_LANES(128, v39, i32)[0] = SR_VEC_LANES(128, v39, i32)[1];
  }
  return SR_VEC_LANES(128, v39, i32)[0];
}

//----- (00000001401E9360) ----------------------------------------------------
__int64            sub_1401E9360(
        int *a1,
        char *a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        _DWORD *a8,
        int a9)
{
  __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int i;
  int v16;
  _BYTE v17[4];
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  __int16 v26[48];
  __int64 v27;
  char *v30;

  if ( a6 < 2 )
  {
    if ( !a6 && a3 && a2 || (v23 = a1[3] / 400, !(a5 % v23)) )
    {
      if ( a3 && a2 )
      {
        if ( a3 >= 0 )
        {
          v19 = sub_1401F2A30(a2);
          v21 = sub_1401E2CB0(a2);
          v11 = sub_1401E2D90(a2, a1[3]);
          v22 = sub_1401E2EB0(a2);
          v16 = sub_1401E99E0(a2, a3, a7, v17, 0, v26, &v24, a8);
          if ( v16 >= 0 )
          {
            v30 = &a2[v24];
            if ( a6 )
            {
              if ( a5 < v11 || v19 == 1002 || a1[14] == 1002 )
              {
                return sub_1401E9360(a1, nullptr, 0, a4, a5, 0, 0, nullptr, a9); /* 0x1401E9635: the call's result stays in rax */
              }
              else
              {
                v25 = a1[18];
                if ( a5 == v11 || (v14 = sub_1401E9360(a1, nullptr, 0, a4, a5 - v11, 0, 0, nullptr, a9), v14 >= 0) )
                {
                  a1[14] = v19;
                  a1[13] = v21;
                  a1[16] = v11;
                  a1[12] = v22;
                  v14 = sub_1401F2AA0(a1, (__int64)v30, v26[0], a4 + 4LL * (a5 - v11) * a1[2], v11, 1);
                  if ( v14 >= 0 )
                  {
                    sub_1401A2600();
                    a1[18] = a5;
                    return (unsigned int)a5; /* 0x1401E97B7: mov eax, dword ptr [rsp + 0x130] */
                  }
                  return (unsigned int)v14; /* 0x1401E978B: mov eax, dword ptr [rsp + 0x5c] */
                }
                else
                {
                  a1[18] = v25;
                  return (unsigned int)v14; /* 0x1401E96D2: mov eax, dword ptr [rsp + 0x5c] */
                }
              }
            }
            else if ( v11 * v16 <= a5 )
            {
              a1[14] = v19;
              a1[13] = v21;
              a1[16] = v11;
              a1[12] = v22;
              v13 = 0;
              for ( i = 0; i < v16; ++i )
              {
                v20 = sub_1401F2AA0(a1, (__int64)v30, v26[i], a4 + 4LL * a1[2] * v13, a5 - v13, 0);
                if ( v20 < 0 )
                  return (unsigned int)v20; /* 0x1401E98B4: mov eax, dword ptr [rsp + 0x74] */
                v30 += v26[i];
                v13 += v20;
              }
              a1[18] = v13;
              sub_1401A2600();
              if ( a9 )
              {
                sub_1401E3040(a4, v13, a1[2], (__int64)(a1 + 19));
              }
              else
              {
                a1[20] = 0;
                a1[19] = 0;
              }
              return (unsigned int)v13; /* 0x1401E9980: mov eax, dword ptr [rsp + 0x58] */
            }
            return (unsigned int)-2; /* 0x1401E97D5: mov eax, 0xfffffffe */
          }
          return (unsigned int)v16; /* 0x1401E9594: mov eax, dword ptr [rsp + 0x64] */
        }
        return (unsigned int)-1; /* 0x1401E94DF: mov eax, 0xffffffff */
      }
      else
      {
        v12 = 0;
        while ( 1 )
        {
          v18 = sub_1401F2AA0(a1, 0, 0, a4 + 4LL * a1[2] * v12, a5 - v12, 0);
          if ( v18 < 0 )
            return (unsigned int)v18; /* 0x1401E9482: mov eax, dword ptr [rsp + 0x6c] */
          v12 += v18;
          if ( v12 >= a5 )
          {
            sub_1401A2600();
            a1[18] = v12;
            return (unsigned int)v12; /* 0x1401E94CA: mov eax, dword ptr [rsp + 0x54] */
          }
        }
      }
    }
  }
  return (unsigned int)-1; /* 0x1401E93A1 / 0x1401E93FB: mov eax, 0xffffffff */
}

//----- (00000001401E99B0) ----------------------------------------------------
__int64            sub_1401E99B0(int a1)
{
  return 8 * ((a1 + 7) / 8u);
}

//----- (00000001401E99E0) ----------------------------------------------------
__int64            sub_1401E99E0(char *a1, int a2, int a3, _BYTE *a4, __int64 a5, __int16 *a6, _DWORD *a7, _DWORD *a8)
{
  int j;
  int i;
  int k;
  int m;
  int v13;
  char v14;
  int v15;
  char v16;
  int v17;
  int v18;
  int v19;
  BOOL v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  unsigned __int8 *v28;
  int v30;
  int v31;
  int v32;

  v23 = 0;
  v26 = (int)a1;
  if ( !a6 || a2 < 0 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    return 4294967292LL;
  v25 = sub_1401E2D90(a1, 48000);
  v20 = 0;
  v16 = *a1;
  v28 = (unsigned __int8 *)(a1 + 1);
  v30 = a2 - 1;
  v15 = v30;
  v21 = v16 & 3;
  if ( (v16 & 3) != 0 )
  {
    if ( v21 == 1 )
    {
      v13 = 2;
      v20 = 1;
      if ( !a3 )
      {
        if ( (v30 & 1) != 0 )
          return 4294967292LL;
        v15 = v30 / 2;
        *a6 = v30 / 2;
      }
    }
    else if ( v21 == 2 )
    {
      v13 = 2;
      v17 = sub_1401F8490(v28, v30, a6);
      v30 -= v17;
      if ( *a6 < 0 || *a6 > v30 )
        return 4294967292LL;
      v28 += v17;
      v15 = v30 - *a6;
    }
    else
    {
      if ( v30 < 1 )
        return 4294967292LL;
      v14 = *v28++;
      v13 = v14 & 0x3F;
      if ( (v14 & 0x3F) == 0 || v13 * v25 > 5760 )
        return 4294967292LL;
      --v30;
      if ( (v14 & 0x40) != 0 )
      {
        while ( v30 > 0 )
        {
          v22 = *v28++;
          v31 = v30 - 1;
          if ( v22 == 255 )
            v24 = 254;
          else
            v24 = v22;
          v30 = v31 - v24;
          v23 += v24;
          if ( v22 != 255 )
            goto LABEL_32;
        }
        return 4294967292LL;
      }
LABEL_32:
      if ( v30 < 0 )
        return 4294967292LL;
      v20 = v14 >= 0;
      if ( v14 >= 0 )
      {
        if ( !a3 )
        {
          v15 = v30 / v13;
          if ( v13 * (v30 / v13) != v30 )
            return 4294967292LL;
          for ( i = 0; i < v13 - 1; ++i )
            a6[i] = v15;
        }
      }
      else
      {
        v15 = v30;
        for ( j = 0; j < v13 - 1; ++j )
        {
          v18 = sub_1401F8490(v28, v30, &a6[j]);
          v30 -= v18;
          if ( a6[j] < 0 || a6[j] > v30 )
            return 4294967292LL;
          v28 += v18;
          v15 -= a6[j] + v18;
        }
        if ( v15 < 0 )
          return 4294967292LL;
      }
    }
  }
  else
  {
    v13 = 1;
  }
  if ( a3 )
  {
    v19 = sub_1401F8490(v28, v30, &a6[v13 - 1]);
    v32 = v30 - v19;
    if ( a6[v13 - 1] < 0 || a6[v13 - 1] > v32 )
      return 4294967292LL;
    v28 += v19;
    if ( v20 )
    {
      if ( v13 * a6[v13 - 1] > v32 )
        return 4294967292LL;
      for ( k = 0; k < v13 - 1; ++k )
        a6[k] = a6[v13 - 1];
    }
    else if ( a6[v13 - 1] + v19 > v15 )
    {
      return 4294967292LL;
    }
  }
  else
  {
    if ( v15 > 1275 )
      return 4294967292LL;
    a6[v13 - 1] = v15;
  }
  if ( a7 )
    *a7 = (_DWORD)v28 - v26;
  for ( m = 0; m < v13; ++m )
  {
    if ( a5 )
      *(_QWORD *)(a5 + 8LL * m) = (uint64)(uintptr_t)(v28);
    v28 += a6[m];
  }
  if ( a8 )
    *a8 = (_DWORD)v28 - v26 + v23;
  if ( a4 )
    *a4 = v16;
  return (unsigned int)v13;
}

//----- (00000001401EA090) ----------------------------------------------------
__int64            sub_1401EA090(__int64 a1, int a2, int a3, _BYTE *a4, int a5, int a6, int a7)
{
  int i;
  int j;
  int k;
  int m;
  int n;
  int v13;
  int v14;
  int v15;
  __m128i *v16;
  int v17;
  __int16 *v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;

  if ( a2 < 0 || a2 >= a3 || a3 > *(_DWORD *)(a1 + 4) )
    return 0xFFFFFFFFLL;
  v17 = a3 - a2;
  v18 = (__int16 *)(a1 + 2LL * a2 + 392);
  v22 = a1 + 8LL * a2 + 8;
  if ( a6 )
    v13 = (v18[v17 - 1] >= 252) + 1;
  else
    v13 = 0;
  v16 = (__m128i *)a4;
  if ( v17 == 1 )
  {
    v13 += *v18 + 1;
    if ( v13 > a5 )
      return 4294967294LL;
    *a4 = *(_BYTE *)a1 & 0xFC;
    v16 = (__m128i *)(a4 + 1);
  }
  else if ( v17 == 2 )
  {
    if ( *(__int16 *)(a1 + 2LL * a2 + 394) == *(__int16 *)(a1 + 2LL * a2 + 392) )
    {
      v13 += 2 * *v18 + 1;
      if ( v13 > a5 )
        return 4294967294LL;
      *a4 = *(_BYTE *)a1 & 0xFC | 1;
      v16 = (__m128i *)(a4 + 1);
    }
    else
    {
      v13 += *(__int16 *)(a1 + 2LL * a2 + 394)
           + *(__int16 *)(a1 + 2LL * a2 + 392)
           + (*(__int16 *)(a1 + 2LL * a2 + 392) >= 252)
           + 2;
      if ( v13 > a5 )
        return 4294967294LL;
      *a4 = *(_BYTE *)a1 & 0xFC | 2;
      v16 = (__m128i *)&a4[(int)sub_1401E5230(*v18, a4 + 1) + 1];
    }
  }
  if ( v17 > 2 || a7 && v13 < a5 )
  {
    if ( a6 )
      v14 = (v18[v17 - 1] >= 252) + 1;
    else
      v14 = 0;
    v19 = 0;
    for ( i = 1; i < v17; ++i )
    {
      if ( v18[i] != *v18 )
      {
        v19 = 1;
        break;
      }
    }
    if ( v19 )
    {
      v15 = v14 + 2;
      for ( j = 0; j < v17 - 1; ++j )
        v15 += v18[j] + (v18[j] >= 252) + 1;
      v13 = v18[v17 - 1] + v15;
      if ( v13 > a5 )
        return 4294967294LL;
      *a4 = *(_BYTE *)a1 & 0xFC | 3;
      a4[1] = v17 | 0x80;
      v16 = (__m128i *)(a4 + 2);
    }
    else
    {
      v13 = v14 + *v18 * v17 + 2;
      if ( v13 > a5 )
        return 4294967294LL;
      *a4 = *(_BYTE *)a1 & 0xFC | 3;
      a4[1] = v17;
      v16 = (__m128i *)(a4 + 2);
    }
    if ( a7 )
      v20 = a5 - v13;
    else
      v20 = 0;
    if ( v20 )
    {
      a4[1] |= 0x40u;
      v21 = (v20 - 1) / 255;
      for ( k = 0; k < v21; ++k )
      {
        SR_VEC_PTR_LANES(128, v16, i8)[0] = -1;
        v16 = (__m128i *)((char *)v16 + 1);
      }
      SR_VEC_PTR_LANES(128, v16, i8)[0] = v20 + v21 - 1;
      v16 = (__m128i *)((char *)v16 + 1);
      v13 += v20;
    }
    if ( v19 )
    {
      for ( m = 0; m < v17 - 1; ++m )
        v16 = (__m128i *)((char *)v16 + (int)sub_1401E5230(v18[m], (unsigned __int8 *)v16));
    }
  }
  if ( a6 )
    v16 = (__m128i *)((char *)v16 + (int)sub_1401E5230(v18[v17 - 1], (unsigned __int8 *)v16));
  for ( n = 0; n < v17; ++n )
  {
    crt_memcpy(v16, *(     __m128i **)(v22 + 8LL * n), v18[n]);
    v16 = (__m128i *)((char *)v16 + v18[n]);
  }
  if ( a7 )
  {
    while ( v16 < (__m128i *)&a4[a5] )
    {
      SR_VEC_PTR_LANES(128, v16, i8)[0] = 0;
      v16 = (__m128i *)((char *)v16 + 1);
    }
  }
  return (unsigned int)v13;
}

//----- (00000001401EA7F0) ----------------------------------------------------
__int64            sub_1401EA7F0(
        unsigned int *a1,
        void (           *a2)(int *, __int64, __int64, _QWORD, int, int, _QWORD, int),
        __int64 a3,
        int a4,
        _BYTE *a5,
        int a6,
        int a7,
        void (           *a8)(__int64, int *, _QWORD, _QWORD, int, int, int),
        int a9,
        __int64 a10)
{
  unsigned __int64 v10;
  void *v11;
  unsigned __int64 v12;
  void *v13;
  int v14;
  _BYTE v16[9728];
  int i;
  int v18;
  int v19;
  int v20;
  int v21;
  int k;
  int *v23;
  int v24;
  signed int v25;
  int j;
  int v27;
  int v28;
  int *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  unsigned int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  BOOL v43;
  BOOL v44;
  int v45;
  int v46;
  _BYTE *v47;
  _BYTE *v48;
  int v49;
  int v50;
  signed int v51;
  int v52;
  signed int v53;
  int v54;
  signed int v55;
  int v56;
  signed int v57;
  int v58;
  int v60;
  int v61;
  int v62;
  __int64 v63;
  int *v64;
  char *v65;
  __int64 v66;
  _BYTE v67[496];
  _DWORD v68[44];
  _DWORD v69[256];
  __m128i v70[479];
  __int64 v71;

  v66 = 0;
  v65 = nullptr;
  if ( a1[71] == 1 )
  {
    v65 = sub_1401F6230(a1);
    v66 = sub_1401F6300((__int64)a1);
  }
  v23 = (int *)((char *)a1 + (int)sub_1401E99B0(292));
  sub_1401E0F40(v23, 4029, &v19);
  sub_1401E0F40(v23, 4007, &v27);
  sub_1401E0F40(v23, 10015, &v63);
  v18 = sub_1401E52C0(a4, a1[70], v19);
  if ( v18 <= 0 )
    return (unsigned int)-1; /* 0x1401EA92E: mov eax, 0xffffffff */
  {
    v21 = 2 * a1[1] - 1;
    if ( v19 / v18 == 10 )
      v21 += a1[1];
    if ( a6 < v21 )
      return (unsigned int)-2; /* 0x1401EA974: mov eax, 0xfffffffe */
    {
      v10 = 8LL * v18 + 15;
      if ( v10 <= 8LL * v18 )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
      v48 = v11;
      v36 = sub_1401E06F0(2);
      v37 = sub_1401E06F0(1);
      v12 = 4LL * (int)(21 * *a1) + 15;
      if ( v12 <= 4LL * (int)(21 * *a1) )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
      v47 = v13;
      if ( a1[71] == 1 )
        sub_1401F68D0(v63, a3, (__int64)v47, v66, (__int64)v65, v18, 120, *a1, v19, a2, a1[67]);
      v45 = sub_1401F7C80(a1, (__int64)v69, v18);
      if ( !v27 )
      {
        if ( a1[72] == -1000 )
        {
          v61 = 3 * v45;
          v62 = 24 * v19 / v18;
          if ( a6 >= 3 * v45 / v62 )
          {
            v49 = 3 * v45;
            v50 = 24 * v19 / v18;
            v46 = 3 * v45 / v50;
          }
          else
          {
            v46 = a6;
          }
          a6 = v46;
        }
        else if ( a1[72] != -1 )
        {
          v51 = 3 * a1[72];
          v52 = 24 * v19 / v18;
          if ( v21 <= v51 / v52 )
          {
            v53 = 3 * a1[72];
            v54 = 24 * v19 / v18;
            v33 = v53 / v54;
          }
          else
          {
            v33 = v21;
          }
          if ( a6 >= v33 )
          {
            v55 = 3 * a1[72];
            v56 = 24 * v19 / v18;
            if ( v21 <= v55 / v56 )
            {
              v57 = 3 * a1[72];
              v58 = 24 * v19 / v18;
              v34 = v57 / v58;
            }
            else
            {
              v34 = v21;
            }
            v35 = v34;
          }
          else
          {
            v35 = a6;
          }
          a6 = v35;
        }
      }
      v23 = (int *)((char *)a1 + (int)sub_1401E99B0(292));
      for ( i = 0; i < (int)a1[1]; ++i )
      {
        v29 = v23;
        if ( i >= (int)a1[2] )
          v23 = (int *)((char *)v23 + (int)sub_1401E99B0(v37));
        else
          v23 = (int *)((char *)v23 + (int)sub_1401E99B0(v36));
        sub_1401E0F40(v29, 4002, (unsigned int)v69[i]);
        if ( a1[71] == 1 )
        {
          v25 = a1[72];
          if ( 50 * v18 < v19 )
            v25 -= *a1 * 60 * (v19 / v18 - 50);
          if ( v25 <= (int)(10000 * *a1) )
          {
            if ( v25 <= (int)(7000 * *a1) )
            {
              if ( v25 <= (int)(5000 * *a1) )
                sub_1401E0F40(v29, 4008, 1101);
              else
                sub_1401E0F40(v29, 4008, 1103);
            }
            else
            {
              sub_1401E0F40(v29, 4008, 1104);
            }
          }
          else
          {
            sub_1401E0F40(v29, 4008, 1105);
          }
          if ( i < (int)a1[2] )
          {
            sub_1401E0F40(v29, 11002, 1002);
            sub_1401E0F40(v29, 4022, 2);
          }
        }
        else if ( a1[71] == 2 )
        {
          sub_1401E0F40(v29, 11002, 1002);
        }
      }
      v23 = (int *)((char *)a1 + (int)sub_1401E99B0(292));
      v28 = 0;
      for ( i = 0; i < (int)a1[1]; ++i )
      {
        sub_1401E37F0((__int64)v67);
        v64 = v23;
        if ( i >= (int)a1[2] )
        {
          v32 = sub_1401E4DF0((int *)a1, i, -1);
          ((void (           *)(_BYTE *, __int64, __int64, _QWORD, int, int, __int64))a2)(
            v48,
            1,
            a3,
            *a1,
            v32,
            v18,
            a10);
          v23 = (int *)((char *)v23 + (int)sub_1401E99B0(v37));
          if ( a1[71] == 1 )
          {
            for ( j = 0; j < 21; ++j )
              v68[j] = *(_DWORD *)&v47[84 * v32 + 4 * j];
          }
          v42 = v32;
          v41 = -1;
        }
        else
        {
          v30 = sub_1401E4CF0((int *)a1, i, -1);
          v31 = sub_1401E4D70((int *)a1, i, -1);
          ((void (           *)(_BYTE *, __int64, __int64, _QWORD, int, int, __int64))a2)(
            v48,
            2,
            a3,
            *a1,
            v30,
            v18,
            a10);
          ((void (           *)(_BYTE *, __int64, __int64, _QWORD, int, int, __int64))a2)(
            v48 + 4,
            2,
            a3,
            *a1,
            v31,
            v18,
            a10);
          v23 = (int *)((char *)v23 + (int)sub_1401E99B0(v36));
          if ( a1[71] == 1 )
          {
            for ( k = 0; k < 21; ++k )
            {
              v68[k] = *(_DWORD *)&v47[84 * v30 + 4 * k];
              v68[k + 21] = *(_DWORD *)&v47[84 * v31 + 4 * k];
            }
          }
          v42 = v30;
          v41 = v31;
        }
        if ( a1[71] == 1 )
          sub_1401E0F40(v64, 10026, v68);
        v20 = a6 - v28;
        if ( (int)(2 * (a1[1] - i) - 3) >= 0 )
          v38 = 2 * (a1[1] - i) - 3;
        else
          v38 = 0;
        v20 -= v38;
        if ( v19 / v18 == 10 )
          v20 -= a1[1] - i - 1;
        if ( v20 >= 7662 )
          v39 = 7662;
        else
          v39 = v20;
        v20 = v39;
        if ( i != a1[1] - 1 )
        {
          if ( v20 <= 253 )
            v40 = 1;
          else
            v40 = 2;
          v20 -= v40;
        }
        if ( !v27 && i == a1[1] - 1 )
          sub_1401E0F40(v64, 4002, (unsigned int)(8 * v19 / v18 * v20));
        v24 = sub_1401E5400(v64, (__int64)v48, v18, v70, v20, a7, a3, a4, v42, v41, *a1, a8, a9);
        if ( v24 < 0 )
          return (unsigned int)v24; /* 0x1401EB2B8: mov eax, dword ptr [rbp + 0x20] */
        if ( (unsigned int)sub_1401E3870((__int64)v67, SR_VEC_LANES(128, v70[0], i8), v24) )
          return (unsigned int)-3; /* 0x1401EB2E6: mov eax, 0xfffffffd */
        v43 = !v27 && i == a1[1] - 1;
        v44 = i != a1[1] - 1;
        v60 = a6 - v28;
        v14 = unknown_libname_998((__int64)v67);
        v24 = sub_1401EA090((__int64)v67, 0, v14, a5, v60, v44, v43);
        a5 += v24;
        v28 += v24;
      }
    }
  }
  return (unsigned int)v28; /* 0x1401EB3B4: mov eax, dword ptr [rbp + 0x30] */
}

//----- (00000001401EB3E0) ----------------------------------------------------
__int64            sub_1401EB3E0(
        int *a1,
        char *a2,
        int a3,
        __int64 a4,
        void (           *a5)(__int64, _QWORD, _QWORD, int *, int, int, __int64),
        int a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  unsigned __int64 v9;
  void *v10;
  int i;
  unsigned int v13;
  int v14;
  unsigned int k;
  int m;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  BOOL v24;
  unsigned int j;
  int *v26;
  int v27;
  int v28;
  int *v29;
  int *v30;
  __int64 v31;
  int v36;

  v17 = 0;
  if ( a6 <= 0 )
    return (unsigned int)-1; /* 0x1401EB41F: mov eax, 0xffffffff */
  if ( (unsigned int)sub_1401F1160((__int64)a1, 4029, &v14) )
    return (unsigned int)-3; /* 0x1401EB452: mov eax, 0xfffffffd */
  {
    if ( a6 >= 3 * (v14 / 25) )
      v22 = 3 * (v14 / 25);
    else
      v22 = a6;
    v36 = v22;
    v9 = 8LL * v22 + 15;
    if ( v9 <= 8LL * v22 )
      v9 = 0xFFFFFFFFFFFFFF0LL;
    v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
    v26 = v10;
    v29 = (int *)((char *)a1 + (int)sub_1401E99B0(268));
    v27 = sub_1401E2280(2);
    v28 = sub_1401E2280(1);
    if ( !a3 )
      v17 = 1;
    if ( a3 < 0 )
      return (unsigned int)-1; /* 0x1401EB526: mov eax, 0xffffffff */
    if ( !v17 && a3 < 2 * a1[1] - 1 )
      return (unsigned int)-4; /* 0x1401EB549: mov eax, 0xfffffffc */
    {
      if ( !v17 )
      {
        v18 = sub_1401F5F20(a2, a3, a1[1], v14);
        if ( v18 < 0 )
          return (unsigned int)v18; /* 0x1401EB57D: mov eax, dword ptr [rbp + 0x18] */
        if ( v18 > v36 )
          return (unsigned int)-2; /* 0x1401EB592: mov eax, 0xfffffffe */
      }
      {
        for ( i = 0; i < a1[1]; ++i )
        {
          v30 = v29;
          if ( i >= a1[2] )
            v23 = sub_1401E99B0(v28);
          else
            v23 = sub_1401E99B0(v27);
          v29 = (int *)((char *)v29 + v23);
          if ( !v17 && a3 <= 0 )
            return (unsigned int)-3; /* 0x1401EB60A: mov eax, 0xfffffffd */
          v19 = 0;
          v24 = i != a1[1] - 1;
          v20 = sub_1401E9360(v30, a2, a3, (__int64)v26, v36, a7, v24, &v19, a8);
          a2 += v19;
          a3 -= v19;
          if ( v20 <= 0 )
            return (unsigned int)v20; /* 0x1401EB6AD: mov eax, dword ptr [rbp + 0x20] */
          v36 = v20;
          if ( i >= a1[2] )
          {
            for ( j = -1; ; j = v21 )
            {
              v21 = sub_1401E4DF0(a1, i, j);
              if ( v21 == -1 )
                break;
              a5(a4, (unsigned int)*a1, v21, v26, 1, v36, a9);
            }
          }
          else
          {
            for ( k = -1; ; k = v13 )
            {
              v13 = sub_1401E4CF0(a1, i, k);
              if ( v13 == -1 )
                break;
              a5(a4, (unsigned int)*a1, v13, v26, 2, v36, a9);
            }
            for ( k = -1; ; k = v13 )
            {
              v13 = sub_1401E4D70(a1, i, k);
              if ( v13 == -1 )
                break;
              a5(a4, (unsigned int)*a1, v13, v26 + 1, 2, v36, a9);
            }
          }
        }
        for ( m = 0; m < *a1; ++m )
        {
          if ( *((unsigned __int8 *)a1 + m + 12) == 255 )
            a5(a4, (unsigned int)*a1, (unsigned int)m, nullptr, 0, v36, a9);
        }
      }
    }
  }
  return (unsigned int)v36; /* 0x1401EB872: mov eax, dword ptr [rbp + 0x98] */
}

//----- (00000001401EB890) ----------------------------------------------------
__int64            sub_1401EB890(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  signed int i;
  signed int j;
  signed int k;
  signed int m;
  signed int v8;
  int v9;

  v9 = *(_DWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 20);
  for ( i = 0; i < v8; ++i )
    *(float *)(a2 + 4LL * i) = (float)*(char *)(*(_QWORD *)a1 + i);
  sub_1401F2860(a2, *(_QWORD *)(a1 + 8), v8, v9, v8, a3);
  for ( j = 0; j < v8; ++j )
    *(float *)(a2 + 4LL * j) = *(float *)(a2 + 4LL * j) * 0.0078125;
  if ( *(_DWORD *)(a1 + 24) )
  {
    for ( k = 0; ; ++k )
    {
      result = (unsigned int)v8;
      if ( k >= v8 )
        break;
      *(float *)(a2 + 4LL * k) = SR_VEC_READ_LANES(128, sub_1401F2810(*(float *)(a2 + 4LL * k)), f32)[0];
    }
  }
  else
  {
    for ( m = 0; ; ++m )
    {
      result = (unsigned int)v8;
      if ( m >= v8 )
        break;
      *(float *)(a2 + 4LL * m) = sub_1401F2690(*(float *)(a2 + 4LL * m));
    }
  }
  return result;
}

//----- (00000001401EBA20) ----------------------------------------------------
__int64            sub_1401EBA20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  int i;
  int v6;
  int v7;
  int v8;
  float v9;
  float v10;
  float v11[32];
  float v12[32];
  float v13[32];
  float v14[32];
  __int64 v15;

  v8 = *(_DWORD *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = 3 * v6;
  for ( i = 0; i < v6; ++i )
    v11[i] = (float)*(char *)(*(_QWORD *)a1 + i);
  sub_1401F2860((__int64)v11, *(_QWORD *)(a1 + 8), v6, v8, v7, a3);
  sub_1401F2860((__int64)v11, *(_QWORD *)(a1 + 16), v6, v6, v7, a2);
  for ( i = 0; i < v6; ++i )
    LODWORD(v11[i]) = SR_VEC_READ_LANES(128, sub_1401F2810(0.0078125 * v11[i]), u32)[0];
  for ( i = 0; i < v6; ++i )
    v12[i] = (float)*(char *)(*(_QWORD *)a1 + i + v6);
  sub_1401F2860((__int64)v12, v6 + *(_QWORD *)(a1 + 8), v6, v8, v7, a3);
  sub_1401F2860((__int64)v12, v6 + *(_QWORD *)(a1 + 16), v6, v6, v7, a2);
  for ( i = 0; i < v6; ++i )
    LODWORD(v12[i]) = SR_VEC_READ_LANES(128, sub_1401F2810(0.0078125 * v12[i]), u32)[0];
  for ( i = 0; i < v6; ++i )
    v13[i] = (float)*(char *)(*(_QWORD *)a1 + i + 2 * v6);
  for ( i = 0; i < v6; ++i )
    v14[i] = *(float *)(a2 + 4LL * i) * v12[i];
  sub_1401F2860((__int64)v13, 2 * v6 + *(_QWORD *)(a1 + 8), v6, v8, v7, a3);
  sub_1401F2860((__int64)v13, 2 * v6 + *(_QWORD *)(a1 + 16), v6, v6, v7, (__int64)v14);
  for ( i = 0; i < v6; ++i )
  {
    v10 = v11[i] * *(float *)(a2 + 4LL * i);
    v9 = 1.0 - v11[i];
    v13[i] = v10 + (float)(v9 * sub_1401F2690(0.0078125 * v13[i]));
  }
  for ( i = 0; i < v6; ++i )
    *(float *)(a2 + 4LL * i) = v13[i];
  return (unsigned int)v6; /* 0x1401EBE6E: mov eax, dword ptr [rsp + 0x34] */
}

//----- (00000001401EBEC0) ----------------------------------------------------
_WORD *           sub_1401EBEC0(_DWORD *a1, int a2)
{
  *a1 = sub_1401A13B0();
  a1[2] = a2;
  return sub_1401EBF00((__int64)a1);
}

//----- (00000001401EBF00) ----------------------------------------------------
_WORD *           sub_1401EBF00(__int64 a1)
{
  return crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 12)), 0, 0x36A8u);
}

//----- (00000001401EBF50) ----------------------------------------------------
__int64            sub_1401EBF50(_DWORD *a1, __int64 a2, int a3)
{
  __int64 result;
  int v4;
  int v5;
  int v6;
  float v7;
  float v8;
  float v9;
  float v10;
  int v11;
  int v12;
  float v13;
  float k;
  float v15;
  int i;
  int j;
  int m;
  float v19;
  float v20;
  int v21;
  float v22;
  float v23;
  float v24;
  int v25;
  int v26;
  int v27;
  float v28;
  int v29;
  int v30;
  float v31;
  int v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  int v42;
  float v43;
  float v44;
  float v45;
  float v46;

  v4 = a1[1862];
  v21 = a1[1861] - v4 + (a1[1861] - v4 < 0 ? 0x64 : 0);
  for ( a1[1863] += a3 / (a1[2] / 400); (int)a1[1863] >= 8; a1[1863] -= 8 )
    ++a1[1862];
  if ( (int)a1[1862] >= 100 )
    a1[1862] -= 100;
  if ( a3 > a1[2] / 50 && v4 != a1[1861] && ++v4 == 100 )
    v4 = 0;
  if ( v4 == a1[1861] )
    --v4;
  if ( v4 < 0 )
    v4 = 99;
  v27 = v4;
  crt_memcpy((__m128i *)a2, (     __m128i *)&a1[16 * (__int64)v4 + 1901], 0x40u);
  result = a2;
  if ( *(_DWORD *)a2 )
  {
    v23 = *(float *)(a2 + 4);
    v24 = v23;
    v25 = 1;
    v26 = 6;
    for ( i = 0; i < 3; ++i )
    {
      if ( ++v4 == 100 )
        v4 = 0;
      if ( v4 == a1[1861] )
        break;
      if ( v24 <= *(float *)&a1[16 * (__int64)v4 + 1902] )
        v28 = *(float *)&a1[16 * (__int64)v4 + 1902];
      else
        v28 = v24;
      v24 = v28;
      v23 = v23 + *(float *)&a1[16 * (__int64)v4 + 1902];
      ++v25;
      if ( *(_DWORD *)(a2 + 32) <= a1[16 * (__int64)v4 + 1909] )
        v29 = a1[16 * (__int64)v4 + 1909];
      else
        v29 = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 32) = v29;
      --v26;
    }
    v5 = v27;
    for ( j = 0; j < v26; ++j )
    {
      if ( --v5 < 0 )
        v5 = 99;
      if ( v5 == a1[1861] )
        break;
      if ( *(_DWORD *)(a2 + 32) <= a1[16 * (__int64)v5 + 1909] )
        v30 = a1[16 * (__int64)v5 + 1909];
      else
        v30 = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 32) = v30;
    }
    if ( (float)(v23 / (float)v25) <= (float)(v24 - 0.2) )
      v31 = v24 - 0.2;
    else
      v31 = v23 / (float)v25;
    *(float *)(a2 + 4) = v31;
    v11 = v27;
    v12 = v27;
    if ( v21 > 15 )
    {
      v12 = v27 + 5;
      if ( v27 + 5 >= 100 )
        v12 = v27 - 95;
      v11 = v27 + 1;
      if ( v27 + 1 >= 100 )
        v11 = v27 - 99;
    }
    v7 = 1.0;
    v9 = 0.0;
    v13 = *(float *)&a1[16 * (__int64)v11 + 1910];
    if ( v13 >= 0.1 )
      v32 = a1[16 * (__int64)v11 + 1910];
    else
      *(float *)&v32 = 0.1;
    v15 = *(float *)&v32;
    if ( v13 >= 0.1 )
      v33 = *(float *)&a1[16 * (__int64)v11 + 1910];
    else
      v33 = 0.1;
    for ( k = v33 * *(float *)&a1[16 * (__int64)v12 + 1906];
          ;
          k = k + (float)(v37 * *(float *)&a1[16 * (__int64)v12 + 1906]) )
    {
      if ( ++v12 == 100 )
        v12 = 0;
      if ( v12 == a1[1861] )
        break;
      if ( ++v11 == 100 )
        v11 = 0;
      if ( v11 == a1[1861] )
        break;
      v19 = *(float *)&a1[16 * (__int64)v11 + 1910];
      if ( v7 <= (float)((float)(k - (float)(10.0 * (float)(v13 - v19))) / v15) )
        v34 = v7;
      else
        v34 = (float)(k - (float)(10.0 * (float)(v13 - v19))) / v15;
      v7 = v34;
      if ( (float)((float)(k + (float)(10.0 * (float)(v13 - v19))) / v15) <= v9 )
        v35 = v9;
      else
        v35 = (float)(k + (float)(10.0 * (float)(v13 - v19))) / v15;
      v9 = v35;
      if ( v19 >= 0.1 )
        v36 = *(float *)&a1[16 * (__int64)v11 + 1910];
      else
        v36 = 0.1;
      v15 = v15 + v36;
      if ( v19 >= 0.1 )
        v37 = *(float *)&a1[16 * (__int64)v11 + 1910];
      else
        v37 = 0.1;
    }
    *(float *)(a2 + 20) = k / v15;
    if ( v7 <= (float)(k / v15) )
      v38 = v7;
    else
      v38 = k / v15;
    if ( (float)(k / v15) <= v9 )
      v39 = v9;
    else
      v39 = k / v15;
    if ( v38 <= 0.0 )
      v40 = 0.0;
    else
      v40 = v38;
    v8 = v40;
    if ( v39 >= 1.0 )
      v41 = 1.0;
    else
      v41 = v39;
    v10 = v41;
    if ( v21 < 10 )
    {
      v20 = v40;
      v22 = v41;
      v6 = v27;
      for ( m = 0; ; ++m )
      {
        v42 = a1[1859] - 1 >= 15 ? 15 : a1[1859] - 1;
        if ( m >= v42 )
          break;
        if ( --v6 < 0 )
          v6 = 99;
        if ( *(float *)&a1[16 * (__int64)v6 + 1906] <= v20 )
          v43 = *(float *)&a1[16 * (__int64)v6 + 1906];
        else
          v43 = v20;
        v20 = v43;
        if ( v22 <= *(float *)&a1[16 * (__int64)v6 + 1906] )
          v44 = *(float *)&a1[16 * (__int64)v6 + 1906];
        else
          v44 = v22;
        v22 = v44;
      }
      if ( (float)(v20 - (float)(0.1 * v13)) >= 0.0 )
        v45 = v20 - (float)(0.1 * v13);
      else
        v45 = 0.0;
      if ( (float)(v22 + (float)(0.1 * v13)) <= 1.0 )
        v46 = v22 + (float)(0.1 * v13);
      else
        v46 = 1.0;
      v8 = v40 + (float)((float)(1.0 - (float)(0.1 * (float)v21)) * (float)(v45 - v40));
      v10 = v41 + (float)((float)(1.0 - (float)(0.1 * (float)v21)) * (float)(v46 - v41));
    }
    *(float *)(a2 + 24) = v8;
    *(float *)(a2 + 28) = v10;
    return a2;
  }
  return result;
}

//----- (00000001401ECBA0) ----------------------------------------------------
__int64            sub_1401ECBA0(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        void (           *a11)(__int64, int *, _QWORD, _QWORD, int, int, int),
        __int64 a12)
{
  int v13;
  signed int v14;
  int v15;

  if ( a3 )
  {
    if ( 95 * a9 / 50 >= a4 - (a4 & 1) )
      v15 = a4 - (a4 & 1);
    else
      v15 = 95 * a9 / 50;
    v13 = v15 - a1[1860];
    v14 = a1[1860];
    while ( v13 > 0 )
    {
      if ( a9 / 50 >= v13 )
        sub_1401ED2D0((__int64)a1, a2, a3, v13, v14, a6, a7, a8, a10, a11);
      else
        sub_1401ED2D0((__int64)a1, a2, a3, a9 / 50, v14, a6, a7, a8, a10, a11);
      v14 += a9 / 50;
      v13 -= a9 / 50;
    }
    a1[1860] = v15;
    a1[1860] -= a5;
  }
  return sub_1401EBF50(a1, a12, a5);
}

//----- (00000001401ECD80) ----------------------------------------------------
float            sub_1401ECD80(float *a1, __int64 a2, __int64 a3, int a4)
{
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  int i;
  float v13;
  float v14;
  float v15;

  v15 = 0.0;
  for ( i = 0; i < a4 / 2; ++i )
  {
    v6 = *(float *)(a3 + 8LL * i);
    v13 = v6 - *a1;
    v10 = *a1 + (float)(0.60743707 * v13);
    *a1 = v6 + (float)(0.60743707 * v13);
    v8 = v10;
    v7 = *(float *)(a3 + 4LL * (2 * i + 1));
    v14 = v7 - a1[1];
    v11 = (float)(v10 + a1[1]) + (float)(0.15063 * v14);
    a1[1] = v7 + (float)(0.15063 * v14);
    v5 = 0.15063 * (float)((float)-v7 - a1[2]);
    v9 = (float)(v8 + a1[2]) + v5;
    a1[2] = v5 - v7;
    v15 = v15 + (float)(v9 * v9);
    *(float *)(a2 + 4LL * i) = 0.5 * v11;
  }
  return v15;
}

//----- (00000001401ED000) ----------------------------------------------------
float              sub_1401ED000(
        void (           *a1)(__int64, int *, _QWORD, _QWORD, int, int, int),
        __int64 a2,
        __m128i *a3,
        float *a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  unsigned __int64 v10;
  void *v11;
  unsigned __int64 v12;
  void *v13;
  int i;
  float v16;
  void *Src;
  float v18;
  int *p_i;
  __int64 v20;

  v18 = 0.0;
  if ( a5 )
  {
    if ( a10 == 48000 )
    {
      a5 *= 2;
      a6 *= 2;
    }
    else if ( a10 == 16000 )
    {
      a5 = 2 * a5 / 3;
      a6 = (int)(2 * a6) / 3;
    }
    v10 = 4LL * a5 + 15;
    if ( v10 <= 4LL * a5 )
      v10 = 0xFFFFFFFFFFFFFF0LL;
    v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
    Src = v11;
    a1(a2, (int *)Src, (unsigned int)a5, a6, a7, a8, a9);
    v16 = 0.000030517578f;
    if ( a8 == -2 )
    {
      v16 = v16 / (float)a9;
    }
    else if ( a8 > -1 )
    {
      v16 = v16 / 2.0;
    }
    for ( i = 0; i < a5; ++i )
      *((float *)Src + i) = *((float *)Src + i) * v16;
    switch ( a10 )
    {
      case 48000:
        v18 = sub_1401ECD80(a4, (__int64)a3, (__int64)Src, a5);
        break;
      case 24000:
        crt_memcpy(a3, (     __m128i *)Src, 4LL * a5);
        break;
      case 16000:
        v12 = 4LL * (int)((unsigned)a5 * 3u) + 15;
        if ( v12 <= (unsigned __int64)(4LL * (int)((unsigned)a5 * 3u)) )
          v12 = 0xFFFFFFFFFFFFFF0LL;
        v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
        p_i = (int *)v13;
        for ( i = 0; i < a5; ++i )
        {
          p_i[3 * i] = *((_DWORD *)Src + i);
          p_i[3 * i + 1] = *((_DWORD *)Src + i);
          p_i[3 * i + 2] = *((_DWORD *)Src + i);
        }
        sub_1401ECD80(a4, (__int64)a3, (__int64)p_i, 3 * a5);
        break;
    }
  }
  return v18;
}

//----- (00000001401ED2D0) ----------------------------------------------------
void               sub_1401ED2D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        signed int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void (           *a10)(__int64, int *, _QWORD, _QWORD, int, int, int))
{
  float v10;
  float v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  char v32;
  char v33;
  char v34;
  char v35;
  int i;
  int j;
  int v38;
  CGlobalUtils *v39;
  float v40;
  int v41;
  float v42;
  float v43;
  float v44;
  __m128i *v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  int m;
  int k;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  int v65;
  int v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  int v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  int v79;
  float v80;
  float v81;
  char *v82;
  int v83;
  int v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  int v112;
  float v113;
  float v114;
  int v115;
  float v116;
  float v117;
  float v118;
  float v119;
  BOOL v120;
  float v121;
  int v122;
  float v123;
  float v124;
  float v125;
  float v126;
  BOOL v127;
  float v128;
  float v129;
  float v130;
  int v131;
  int v132;
  int v133;
  int v134;
  char *v135;
  char *v136;
  float v137;
  float v138;
  float v139;
  int v140;
  float v141;
  float v142;
  float v143;
  float v144;
  BOOL v145;
  float v146;
  float v147;
  float v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  _DWORD v152[2];
  __int64 v153;
  __int64 v154;
  __int64 v155;
  float v156[10];
  float v157[40];
  float v158[20];
  float v159[20];
  _DWORD v160[76];
  _BYTE v161[1088];
  __int64 v162;
  int v165;

  v165 = a4;
  v38 = 480;
  v66 = 240;
  v149 = a1 + 12;
  v150 = a1 + 972;
  v151 = a1 + 1932;
  v89 = 97.409088;
  v62 = 0.0;
  v41 = 0;
  v59 = 0.0;
  v63 = 0.0;
  if ( !*(_DWORD *)(a1 + 7460) )
  {
    *(_DWORD *)(a1 + 5772) = 240;
    *(_DWORD *)(a1 + 7460) = 1;
  }
  if ( *(_DWORD *)(a1 + 7436) + 1 <= 10 )
    v132 = *(_DWORD *)(a1 + 7436) + 1;
  else
    v132 = 10;
  v75 = 1.0 / (float)v132;
  if ( *(_DWORD *)(a1 + 7436) + 1 <= 25 )
    v133 = *(_DWORD *)(a1 + 7436) + 1;
  else
    v133 = 25;
  v129 = 1.0 / (float)v133;
  if ( *(_DWORD *)(a1 + 7436) + 1 <= 100 )
    v134 = *(_DWORD *)(a1 + 7436) + 1;
  else
    v134 = 100;
  v10 = 1.0 / (float)v134;
  v60 = v10;
  if ( *(int *)(a1 + 7436) <= 1 )
  {
    v10 = 1.0;
    v60 = 1.0;
  }
  if ( *(_DWORD *)(a1 + 8) == 48000 )
  {
    v165 = a4 / 2;
    a5 /= 2;
  }
  else if ( *(_DWORD *)(a1 + 8) == 16000 )
  {
    v165 = 3 * a4 / 2;
    a5 = 3 * a5 / 2;
  }
  v154 = *(_QWORD *)(a2 + 88);
  if ( v165 >= 720 - *(_DWORD *)(a1 + 5772) )
    v83 = 720 - *(_DWORD *)(a1 + 5772);
  else
    v83 = v165;
  v10 = sub_1401ED000(
    a10,
    a3,
    (__m128i *)(a1 + 4LL * *(int *)(a1 + 5772) + 2892),
    (float *)(a1 + 7592),
    v83,
    a5,
    a6,
    a7,
    a8,
    *(_DWORD *)(a1 + 8));
  *(float *)(a1 + 7456) = *(float *)(a1 + 7456) + v10;
  if ( v165 + *(_DWORD *)(a1 + 5772) >= 720 )
  {
    v11 = *(float *)(a1 + 7456);
    v143 = v11;
    v45 = (__m128i *)(a1 + ((__int64)(int)(*(_DWORD *)(a1 + 7444))++ << 6) + 7604);
    if ( *(int *)(a1 + 7444) >= 100 )
      *(_DWORD *)(a1 + 7444) -= 100;
    v145 = sub_1401E5190(a1 + 2892, 720, 1, a9);
    v12 = alloca(3840);
    v135 = (char *)v12;
    v13 = alloca(3840);
    v39 = (CGlobalUtils *)v13;
    v14 = alloca(960);
    v82 = (char *)v14;
    v15 = alloca(960);
    v136 = (char *)v15;
    for ( i = 0; i < v66; ++i )
    {
      v76 = flt_140282D70[i];
      *(float *)&v135[8 * i] = v76 * *(float *)(a1 + 4LL * i + 2892);
      *(float *)&v135[8 * i + 4] = v76 * *(float *)(a1 + 4LL * (i + v66) + 2892);
      *(float *)&v135[8 * (v38 - i) - 8] = v76 * *(float *)(a1 + 4LL * (v38 - i - 1) + 2892);
      v11 = v76 * *(float *)(a1 + 4LL * (v66 + v38 - i - 1) + 2892);
      *(float *)&v135[8 * (v38 - i) - 4] = v11;
    }
    v153 = a1 + 2892;
    crt_memcpy((__m128i *)(a1 + 2892), (     __m128i *)(a1 + 4812), 0x3C0u);
    v84 = v165 - (720 - *(_DWORD *)(a1 + 5772));
    v11 = sub_1401ED000(
      a10,
      a3,
      (__m128i *)(a1 + 3852),
      (float *)(a1 + 7592),
      v84,
      a5 + 720 - *(_DWORD *)(a1 + 5772),
      a6,
      a7,
      a8,
      *(_DWORD *)(a1 + 8));
    *(float *)(a1 + 7456) = v11;
    *(_DWORD *)(a1 + 5772) = v84 + 240;
    if ( v145 )
    {
      v65 = *(_DWORD *)(a1 + 7444) - 2;
      v65 += v65 < 0 ? 0x64 : 0;
      crt_memcpy(v45, (     __m128i *)(a1 + ((__int64)v65 << 6) + 7604), 0x40u);
    }
    else
    {
      sub_1401A13C0(v154, (__int64)v135, v39);
      for ( i = 1; i < v66; ++i )
      {
        v146 = *((float *)v39 + 2 * i) + *((float *)v39 + 2 * (v38 - i));
        v147 = *((float *)v39 + 2 * i + 1) - *((float *)v39 + 2 * (v38 - i) + 1);
        v148 = *((float *)v39 + 2 * i + 1) + *((float *)v39 + 2 * (v38 - i) + 1);
        v137 = *((float *)v39 + 2 * (v38 - i)) - *((float *)v39 + 2 * i);
        v85 = 0.15915494 * sub_1401A6B90(v147, v146);
        v86 = v85 - *(float *)(v149 + 4LL * i);
        v87 = v86 - *(float *)(v150 + 4LL * i);
        v90 = 0.15915494 * sub_1401A6B90(v137, v148);
        v91 = v90 - v85;
        v88 = (float)(v90 - v85) - v86;
        v47 = v87 - (float)(int)sub_1401AD3B0(v87);
        v16 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(v47), u64);
        *(float *)&v136[4 * i] = v16;
        v47 = v47 * v47;
        v47 = v47 * v47;
        v44 = v88 - (float)(int)sub_1401AD3B0(v88);
        v155 = i;
        v17 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(v44), u64);
        *(float *)&v136[4 * i] = *(float *)&v136[4 * v155] + v17;
        v44 = v44 * v44;
        v44 = v44 * v44;
        v138 = 0.25 * (float)((float)(*(float *)(v151 + 4LL * i) + v47) + (float)(2.0 * v44));
        *(float *)&v82[4 * i] = (float)(1.0 / (float)((float)((float)(640.0 * v89) * v138) + 1.0)) - 0.015;
        *(float *)&v161[4 * i + 128] = (float)(1.0 / (float)((float)((float)(640.0 * v89) * v44) + 1.0)) - 0.015;
        *(float *)(v149 + 4LL * i) = v90;
        *(float *)(v150 + 4LL * i) = v91;
        *(float *)(v151 + 4LL * i) = v44;
      }
      for ( i = 2; i < v66 - 1; ++i )
      {
        if ( *(float *)&v161[4 * i + 124] <= *(float *)&v161[4 * i + 132] )
          v18 = i + 1;
        else
          v18 = i - 1;
        v92 = *(float *)&v161[4 * v18 + 128];
        if ( v92 <= *(float *)&v161[4 * i + 128] )
        {
          if ( *(float *)&v161[4 * i + 124] <= *(float *)&v161[4 * i + 132] )
            v19 = i + 1;
          else
            v19 = i - 1;
          v93 = *(float *)&v161[4 * v19 + 128];
          v94 = v93;
        }
        else
        {
          v94 = *(float *)&v161[4 * i + 128];
        }
        v95 = v94;
        if ( *(float *)&v82[4 * i] <= (float)(v94 - 0.1) )
          v96 = v95 - 0.1;
        else
          v96 = *(float *)&v82[4 * i];
        *(float *)&v82[4 * i] = 0.89999998 * v96;
      }
      v43 = 0.0;
      v74 = 0.0;
      SR_VEC_LANES(128, v45[1], i32)[0] = 0;
      v51 = 0.0;
      v64 = 0.0;
      if ( !*(_DWORD *)(a1 + 7436) )
      {
        for ( j = 0; j < 18; ++j )
        {
          *(_DWORD *)(a1 + 4LL * j + 7008) = 1343554297;
          *(_DWORD *)(a1 + 4LL * j + 7080) = -803929351;
        }
      }
      v54 = 0.0;
      v50 = 0.0;
      v52 = 0.0;
      v97 = 2.0 * *(float *)v39;
      v98 = 2.0 * *((float *)v39 + 1);
      v52 = (float)(v97 * v97) + (float)(v98 * v98);
      for ( i = 1; i < 4; ++i )
      {
        v139 = (float)((float)((float)(*((float *)v39 + 2 * i) * *((float *)v39 + 2 * i))
                             + (float)(*((float *)v39 + 2 * (v38 - i)) * *((float *)v39 + 2 * (v38 - i))))
                     + (float)(*((float *)v39 + 2 * i + 1) * *((float *)v39 + 2 * i + 1)))
             + (float)(*((float *)v39 + 2 * (v38 - i) + 1) * *((float *)v39 + 2 * (v38 - i) + 1));
        v52 = v52 + v139;
      }
      v20 = log((float)(v52 + 1.0e-10));
      v157[0] = 0.72134751 * v20;
      for ( j = 0; j < 18; ++j )
      {
        v42 = 0.0;
        v67 = 0.0;
        v78 = 0.0;
        for ( i = dword_140283130[j]; i < dword_140283130[j + 1]; ++i )
        {
          v55 = (float)((float)((float)(*((float *)v39 + 2 * i) * *((float *)v39 + 2 * i))
                              + (float)(*((float *)v39 + 2 * (v38 - i)) * *((float *)v39 + 2 * (v38 - i))))
                      + (float)(*((float *)v39 + 2 * i + 1) * *((float *)v39 + 2 * i + 1)))
              + (float)(*((float *)v39 + 2 * (v38 - i) + 1) * *((float *)v39 + 2 * (v38 - i) + 1));
          v42 = v42 + v55;
          if ( *(float *)&v82[4 * i] >= 0.0 )
            v99 = *(float *)&v82[4 * i];
          else
            v99 = 0.0;
          v67 = v67 + (float)(v55 * v99);
          v78 = v78 + (float)((float)(v55 * 2.0) * (float)(0.5 - *(float *)&v136[4 * i]));
        }
        if ( v42 >= 1000000000.0 )
        {
          SR_VEC_PTR_LANES(128, v45, i32)[0] = 0;
          return; /* native void analysis updater */
        }
        *(float *)(a1 + 72LL * *(int *)(a1 + 7432) + 5856 + 4LL * j) = v42;
        v51 = v51 + (float)(v78 / (float)(v42 + 1.0e-15));
        v21 = sqrt((float)(v42 + 1.0e-10));
        v50 = v50 + v21;
        v22 = log((float)(v42 + 1.0e-10));
        v157[j + 20] = v22;
        v23 = log((float)(v42 + 1.0e-10));
        v157[j + 1] = 0.72134751 * v23;
        *(float *)(a1 + 72LL * *(int *)(a1 + 7432) + 6432 + 4LL * j) = v157[j + 20];
        if ( !*(_DWORD *)(a1 + 7436) )
        {
          *(float *)(a1 + 4LL * j + 7008) = v157[j + 20];
          *(_DWORD *)(a1 + 4LL * j + 7080) = *(_DWORD *)(a1 + 4LL * j + 7008);
        }
        if ( *(float *)(a1 + 4LL * j + 7080) > *(float *)(a1 + 4LL * j + 7008) + 7.5 )
        {
          if ( (float)(*(float *)(a1 + 4LL * j + 7080) - v157[j + 20]) <= (float)(v157[j + 20]
                                                                                - *(float *)(a1 + 4LL * j + 7008)) )
            *(float *)(a1 + 4LL * j + 7008) = *(float *)(a1 + 4LL * j + 7008) + 0.0099999998;
          else
            *(float *)(a1 + 4LL * j + 7080) = *(float *)(a1 + 4LL * j + 7080) - 0.0099999998;
        }
        if ( v157[j + 20] <= *(float *)(a1 + 4LL * j + 7080) )
        {
          if ( *(float *)(a1 + 4LL * j + 7008) > v157[j + 20] )
          {
            *(float *)(a1 + 4LL * j + 7008) = v157[j + 20];
            if ( *(float *)(a1 + 4LL * j + 7080) <= (float)(*(float *)(a1 + 4LL * j + 7008) + 15.0) )
              v101 = *(float *)(a1 + 4LL * j + 7080);
            else
              v101 = *(float *)(a1 + 4LL * j + 7008) + 15.0;
            *(float *)(a1 + 4LL * j + 7080) = v101;
          }
        }
        else
        {
          *(float *)(a1 + 4LL * j + 7080) = v157[j + 20];
          if ( (float)(*(float *)(a1 + 4LL * j + 7080) - 15.0) <= *(float *)(a1 + 4LL * j + 7008) )
            v100 = *(float *)(a1 + 4LL * j + 7008);
          else
            v100 = *(float *)(a1 + 4LL * j + 7080) - 15.0;
          *(float *)(a1 + 4LL * j + 7008) = v100;
        }
        v54 = v54
            + (float)((float)(v157[j + 20] - *(float *)(a1 + 4LL * j + 7008))
                    / (float)((float)(*(float *)(a1 + 4LL * j + 7080) - *(float *)(a1 + 4LL * j + 7008))
                            + 0.0000099999997));
        v56 = 0.0;
        v77 = 0.0;
        for ( i = 0; i < 8; ++i )
        {
          v24 = sqrt(*(float *)(a1 + 72LL * i + 5856 + 4LL * j));
          v77 = v77 + v24;
          v56 = v56 + *(float *)(a1 + 72LL * i + 5856 + 4LL * j);
        }
        v25 = sqrt((float)(8.0 * v56) + 1.0e-15);
        if ( (float)(v77 / v25) <= 0.99000001 )
        {
          v26 = sqrt((float)(8.0 * v56) + 1.0e-15);
          v102 = v77 / v26;
        }
        else
        {
          v102 = 0.99000001;
        }
        v46 = (float)(v102 * v102) * (float)(v102 * v102);
        v64 = v64 + v46;
        if ( (float)(v67 / (float)(v42 + 1.0e-15)) <= (float)(v46 * *(float *)(a1 + 4LL * j + 5776)) )
          v103 = v46 * *(float *)(a1 + 4LL * j + 5776);
        else
          v103 = v67 / (float)(v42 + 1.0e-15);
        *(float *)&v160[j + 28] = v103;
        v43 = v43 + *(float *)&v160[j + 28];
        if ( j >= 9 )
          v43 = v43 - *(float *)&v160[j + 19];
        if ( v74 <= (float)((float)((float)(0.029999999 * (float)(j - 18)) + 1.0) * v43) )
          v104 = (float)((float)(0.029999999 * (float)(j - 18)) + 1.0) * v43;
        else
          v104 = v74;
        v74 = v104;
        v62 = v62 + (float)(*(float *)&v160[j + 28] * (float)(j - 8));
        *(_DWORD *)(a1 + 4LL * j + 5776) = v160[j + 28];
      }
      v159[0] = v157[0];
      v158[0] = v157[0] - 2.5;
      for ( j = 1; j < 19; ++j )
      {
        v68 = (float)(2.0 * (float)(dword_140283130[j] - dword_140283130[j - 1])) / 4.0;
        if ( v157[j] <= (float)(v159[j - 1] + v68) )
          v105 = v157[j];
        else
          v105 = v159[j - 1] + v68;
        v159[j] = v105;
        if ( (float)(v158[j - 1] - v68) <= (float)(v157[j] - 2.5) )
          v27 = v157[j] - 2.5;
        else
          v27 = v158[j - 1] - v68;
        v106 = v27;
        v158[j] = v27;
      }
      for ( j = 16; j >= 0; --j )
      {
        v69 = (float)(2.0 * (float)(dword_140283130[j + 1] - dword_140283130[j])) / 4.0;
        if ( v159[j] <= (float)(v159[j + 1] + v69) )
          v107 = v159[j];
        else
          v107 = v159[j + 1] + v69;
        v159[j] = v107;
        if ( (float)(v158[j + 1] - v69) <= v158[j] )
          v108 = v158[j];
        else
          v108 = v158[j + 1] - v69;
        v158[j] = v108;
      }
      for ( j = 0; j < 19; ++j )
      {
        if ( (float)(v158[j] - v157[j]) >= 0.0 )
          v109 = v158[j] - v157[j];
        else
          v109 = 0.0;
        if ( (float)(v157[j] - (float)(v159[j] + 2.5)) >= 0.0 )
          v110 = v157[j] - (float)(v159[j] + 2.5);
        else
          v110 = 0.0;
        v111 = v109 + v110;
        if ( (int)floor((float)(64.0 * (float)(v109 + v110)) + 0.5) <= 255 )
          v112 = (int)floor((float)(64.0 * v111) + 0.5);
        else
          v112 = 255;
        SR_VEC_LANES(128, v45[2], i8)[j + 12] = v112;
      }
      for ( i = 0; i < 8; ++i )
      {
        v71 = 9.9999999e14;
        for ( k = 0; k < 8; ++k )
        {
          v70 = 0.0;
          for ( m = 0; m < 18; ++m )
          {
            v113 = *(float *)(a1 + 72LL * i + 6432 + 4LL * m) - *(float *)(a1 + 72LL * k + 6432 + 4LL * m);
            v70 = v70 + (float)(v113 * v113);
          }
          if ( k != i )
          {
            if ( v70 <= v71 )
              v114 = v70;
            else
              v114 = v71;
            v71 = v114;
          }
        }
        v63 = v63 + v71;
      }
      v28 = sqrt((float)((float)(v63 / 8.0) / 18.0));
      v63 = v28;
      v61 = 0.0;
      v41 = 0;
      v59 = 0.0;
      if ( a9 - 8 >= 0 )
        v115 = a9 - 8;
      else
        v115 = 0;
      v140 = 1;
      v48 = 0.00056999997 / (float)(1 << v115);
      v48 = v48 * v48;
      v73 = 0.0;
      v53 = 0.0;
      for ( j = 0; j < 18; ++j )
      {
        v40 = 0.0;
        v72 = dword_140283130[j];
        v79 = dword_140283130[j + 1];
        for ( i = v72; i < v79; ++i )
        {
          v141 = (float)((float)((float)(*((float *)v39 + 2 * i) * *((float *)v39 + 2 * i))
                               + (float)(*((float *)v39 + 2 * (v38 - i)) * *((float *)v39 + 2 * (v38 - i))))
                       + (float)(*((float *)v39 + 2 * i + 1) * *((float *)v39 + 2 * i + 1)))
               + (float)(*((float *)v39 + 2 * (v38 - i) + 1) * *((float *)v39 + 2 * (v38 - i) + 1));
          v40 = v40 + v141;
        }
        if ( v59 <= v40 )
          v116 = v40;
        else
          v116 = v59;
        v59 = v116;
        if ( v72 >= 64 )
          v53 = v53 + v40;
        else
          v73 = v73 + v40;
        if ( (float)((float)(1.0 - v60) * *(float *)(a1 + 4LL * j + 7152)) <= v40 )
          v117 = v40;
        else
          v117 = (float)(1.0 - v60) * *(float *)(a1 + 4LL * j + 7152);
        *(float *)(a1 + 4LL * j + 7152) = v117;
        if ( v40 <= *(float *)(a1 + 4LL * j + 7152) )
          v118 = *(float *)(a1 + 4LL * j + 7152);
        else
          v118 = v40;
        v142 = v118;
        if ( (float)(v40 * 1000000000.0) > v59
          && (v142 > (float)((float)(3.0 * v48) * (float)(v79 - v72)) || v40 > (float)(v48 * (float)(v79 - v72))) )
        {
          v41 = j + 1;
        }
        if ( *(_DWORD *)(a1 + 5852) < j + 1 )
          v119 = 0.050000001;
        else
          v119 = 0.0099999998;
        v120 = (float)(v119 * v61) > v40;
        v160[j + 56] = v120;
        if ( (float)(0.050000001 * v61) <= v40 )
          v121 = v40;
        else
          v121 = 0.050000001 * v61;
        v61 = v121;
      }
      if ( *(_DWORD *)(a1 + 8) == 48000 )
      {
        v49 = v143 * 0.00027777778;
        if ( *(_DWORD *)(a1 + 5852) == 20 )
          *(float *)&v122 = 10.0;
        else
          *(float *)&v122 = 30.0;
        v125 = *(float *)&v122;
        v53 = v53 + v49;
        if ( (float)((float)(1.0 - v60) * *(float *)(a1 + 4LL * j + 7152)) <= v49 )
          v123 = v49;
        else
          v123 = (float)(1.0 - v60) * *(float *)(a1 + 4LL * j + 7152);
        *(float *)(a1 + 4LL * j + 7152) = v123;
        if ( v49 <= *(float *)(a1 + 4LL * j + 7152) )
          v124 = *(float *)(a1 + 4LL * j + 7152);
        else
          v124 = v49;
        v144 = v124;
        if ( v124 > (float)((float)((float)(3.0 * v125) * v48) * 160.0) || v49 > (float)((float)(v125 * v48) * 160.0) )
          v41 = 20;
        if ( *(_DWORD *)(a1 + 5852) == 20 )
          v126 = 0.0099999998;
        else
          v126 = 0.050000001;
        v127 = (float)(v126 * v61) > v49;
        v160[j + 56] = v127;
      }
      if ( v53 <= v73 )
        SR_VEC_LANES(128, v45[2], i32)[2] = 1065353216;
      else
        *(float *)&SR_VEC_LANES(128, v45[2], i32)[2] = v73 / v53;
      if ( v41 == 20 && v160[74] )
      {
        v41 -= 2;
      }
      else if ( v41 > 0 && v41 <= 18 && v160[v41 + 55] )
      {
        --v41;
      }
      if ( *(int *)(a1 + 7436) <= 2 )
        v41 = 20;
      v29 = log10(v50);
      v50 = 20.0 * v29;
      if ( (float)(*(float *)(a1 + 7424) - 0.003) <= (float)(20.0 * v29) )
        v128 = v50;
      else
        v128 = *(float *)(a1 + 7424) - 0.003;
      *(float *)(a1 + 7424) = v128;
      *(float *)(a1 + 7428) = *(float *)(a1 + 7428) * (float)(1.0 - v129);
      if ( (float)(*(float *)(a1 + 7424) - 30.0) > v50 )
        *(float *)(a1 + 7428) = *(float *)(a1 + 7428) + v129;
      for ( i = 0; i < 8; ++i )
      {
        v80 = 0.0;
        for ( j = 0; j < 16; ++j )
          v80 = v80 + (float)(flt_140282B70[16 * i + j] * v157[j + 20]);
        v156[i] = v80;
      }
      for ( i = 0; i < 8; ++i )
      {
        v81 = 0.0;
        for ( j = 0; j < 16; ++j )
          v81 = v81
              + (float)((float)(flt_140282B70[16 * i + j] * 0.5)
                      * (float)(*(float *)(a1 + 4LL * j + 7080) + *(float *)(a1 + 4LL * j + 7008)));
        *(float *)&v160[i + 48] = v81;
      }
      v64 = v64 / 18.0;
      v54 = v54 / 18.0;
      if ( *(int *)(a1 + 7436) < 10 )
        v54 = 0.5;
      v51 = v51 / 18.0;
      *(float *)SR_VEC_LANES(128, v45[1], i32) = v51 + (float)((float)(1.0 - v51) * v54);
      v43 = v74 / 9.0;
      if ( (float)(v74 / 9.0) <= (float)(*(float *)(a1 + 5848) * 0.80000001) )
        v130 = *(float *)(a1 + 5848) * 0.80000001;
      else
        v130 = v43;
      v43 = v130;
      *(float *)(a1 + 5848) = v130;
      v62 = v62 / 64.0;
      *(float *)&SR_VEC_PTR_LANES(128, v45, i32)[2] = v62;
      *(_DWORD *)(a1 + 7432) = (*(_DWORD *)(a1 + 7432) + 1) % 8;
      if ( *(_DWORD *)(a1 + 7436) + 1 >= 10000 )
        v131 = 10000;
      else
        v131 = *(_DWORD *)(a1 + 7436) + 1;
      *(_DWORD *)(a1 + 7436) = v131;
      *(float *)&SR_VEC_PTR_LANES(128, v45, i32)[1] = v43;
      for ( i = 0; i < 4; ++i )
        *(float *)&v160[i] = (float)((float)((float)(-0.12299 * (float)(v156[i] + *(float *)(a1 + 4LL * (i + 24) + 7228)))
                                           + (float)(0.49195001
                                                   * (float)(*(float *)(a1 + 4LL * i + 7228)
                                                           + *(float *)(a1 + 4LL * (i + 16) + 7228))))
                                   + (float)(0.69692999 * *(float *)(a1 + 4LL * (i + 8) + 7228)))
                           - (float)(1.4349 * *(float *)(a1 + 4LL * i + 7356));
      for ( i = 0; i < 4; ++i )
        *(float *)(a1 + 4LL * i + 7356) = (float)((float)(1.0 - v75) * *(float *)(a1 + 4LL * i + 7356))
                                        + (float)(v75 * v156[i]);
      for ( i = 0; i < 4; ++i )
        *(float *)&v160[i + 4] = (float)(0.63246 * (float)(v156[i] - *(float *)(a1 + 4LL * (i + 24) + 7228)))
                               + (float)(0.31623
                                       * (float)(*(float *)(a1 + 4LL * i + 7228) - *(float *)(a1 + 4LL * (i + 16) + 7228)));
      for ( i = 0; i < 3; ++i )
        *(float *)&v160[i + 8] = (float)((float)(0.53451997 * (float)(v156[i] + *(float *)(a1 + 4LL * (i + 24) + 7228)))
                                       - (float)(0.26725999
                                               * (float)(*(float *)(a1 + 4LL * i + 7228)
                                                       + *(float *)(a1 + 4LL * (i + 16) + 7228))))
                               - (float)(0.53451997 * *(float *)(a1 + 4LL * (i + 8) + 7228));
      if ( *(int *)(a1 + 7436) > 5 )
      {
        for ( i = 0; i < 9; ++i )
          *(float *)(a1 + 4LL * i + 7388) = (float)((float)(1.0 - v75) * *(float *)(a1 + 4LL * i + 7388))
                                          + (float)((float)(v75 * *(float *)&v160[i]) * *(float *)&v160[i]);
      }
      for ( i = 0; i < 4; ++i )
        *(float *)&v160[i] = v156[i] - *(float *)&v160[i + 48];
      for ( i = 0; i < 8; ++i )
      {
        *(_DWORD *)(a1 + 4LL * (i + 24) + 7228) = *(_DWORD *)(a1 + 4LL * (i + 16) + 7228);
        *(_DWORD *)(a1 + 4LL * (i + 16) + 7228) = *(_DWORD *)(a1 + 4LL * (i + 8) + 7228);
        *(_DWORD *)(a1 + 4LL * (i + 8) + 7228) = *(_DWORD *)(a1 + 4LL * i + 7228);
        *(float *)(a1 + 4LL * i + 7228) = v156[i];
      }
      for ( i = 0; i < 9; ++i )
      {
        v30 = sqrt(*(float *)(a1 + 4LL * i + 7388));
        *(float *)&v160[i + 11] = v30 - flt_140283180[i];
      }
      *(float *)&v160[18] = v63 - 0.77999997;
      *(float *)&v160[20] = *(float *)&SR_VEC_PTR_LANES(128, v45, i32)[1] - 0.154723;
      *(float *)&v160[21] = *(float *)SR_VEC_LANES(128, v45[1], i32) - 0.72464299;
      *(float *)&v160[22] = v64 - 0.74371701;
      *(float *)&v160[23] = *(float *)&SR_VEC_PTR_LANES(128, v45, i32)[2] + 0.069215998;
      *(float *)&v160[24] = *(float *)(a1 + 7428) - 0.067929998;
      sub_1401EB890((__int64)&off_140282AF8, (__int64)v161, (__int64)v160);
      sub_1401EBA20((__int64)&off_140282B18, a1 + 7464, (__int64)v161);
      sub_1401EB890((__int64)&off_140282B38, (__int64)v152, a1 + 7464);
      SR_VEC_LANES(128, v45[2], i32)[1] = v152[1];
      SR_VEC_LANES(128, v45[1], i32)[1] = v152[0];
      SR_VEC_LANES(128, v45[2], i32)[0] = v41;
      *(_DWORD *)(a1 + 5852) = v41;
      *(float *)&SR_VEC_PTR_LANES(128, v45, i32)[3] = v51;
      SR_VEC_PTR_LANES(128, v45, i32)[0] = 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 5772) += v165;
  }
  return; /* native void analysis updater */
}

// 1401EF07D: conditional instruction was optimized away because %var_8FC.4>=13

//----- (00000001401F0320) ----------------------------------------------------
__int64            sub_1401F0320(int a1, int a2)
{
  int v3;
  int v4;
  int v5;
  int v6;

  if ( a1 < 1 || a2 > a1 || a2 < 0 )
    return 0;
  v3 = sub_1401E06F0(2);
  v5 = sub_1401E06F0(1);
  v4 = sub_1401E99B0(292);
  v6 = sub_1401E99B0(v3) * a2 + v4;
  return (unsigned int)sub_1401E99B0(v5) * (a1 - a2) + v6;
}

//----- (00000001401F03D0) ----------------------------------------------------
__int64            sub_1401F03D0(signed int a1, int a2)
{
  int v3;
  int v4;
  unsigned int v5;

  if ( a2 )
  {
    if ( a2 == 1 && a1 <= 8 && a1 >= 1 )
    {
      v4 = dword_140281E80[4 * a1 - 4];
      v3 = dword_140281E80[4 * a1 - 3];
    }
    else if ( a2 == 255 )
    {
      v4 = a1;
      v3 = 0;
    }
    else
    {
      if ( a2 != 2 )
        return 0;
      if ( !(unsigned int)sub_1401F63C0(a1, &v4, &v3) )
        return 0;
    }
  }
  else if ( a1 == 1 )
  {
    v4 = 1;
    v3 = 0;
  }
  else
  {
    if ( a1 != 2 )
      return 0;
    v4 = 1;
    v3 = 1;
  }
  v5 = sub_1401F0320(v4, v3);
  if ( a1 > 2 )
    v5 += 484 * a1;
  return v5;
}

//----- (00000001401F0500) ----------------------------------------------------
int *           sub_1401F0500(unsigned int a1, int a2, int a3, int a4, __int64 a5, int a6, _DWORD *a7)
{
  int v8;
  int v9;
  int *v10;

  if ( a2 <= 255 && a2 >= 1 && a4 <= a3 && a3 >= 1 && a4 >= 0 && a3 <= 255 - a4 )
  {
    v8 = sub_1401F0320(a3, a4);
    v10 = (int *)sub_1401A6AA0(v8);
    if ( v10 )
    {
      v9 = sub_1401F0780(v10, a1, a2, a3, a4, a5, a6);
      if ( v9 )
      {
        sub_1401A6AC0(v10);
        v10 = nullptr;
      }
      if ( a7 )
        *a7 = v9;
      return v10;
    }
    else
    {
      if ( a7 )
        *a7 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a7 )
      *a7 = -1;
    return nullptr;
  }
}

//----- (00000001401F0630) ----------------------------------------------------
int *           sub_1401F0630(unsigned int a1, signed int a2, int a3, int *a4, int *a5, _BYTE *a6, int a7, _DWORD *a8)
{
  int v9;
  int v10;
  int *v11;

  if ( a2 <= 255 && a2 >= 1 )
  {
    v9 = sub_1401F03D0(a2, a3);
    if ( v9 )
    {
      v11 = (int *)sub_1401A6AA0(v9);
      if ( v11 )
      {
        v10 = sub_1401F07E0(v11, a1, a2, a3, a4, a5, a6, a7);
        if ( v10 )
        {
          sub_1401A6AC0(v11);
          v11 = nullptr;
        }
        if ( a8 )
          *a8 = v10;
        return v11;
      }
      else
      {
        if ( a8 )
          *a8 = -7;
        return nullptr;
      }
    }
    else
    {
      if ( a8 )
        *a8 = -5;
      return nullptr;
    }
  }
  else
  {
    if ( a8 )
      *a8 = -1;
    return nullptr;
  }
}

//----- (00000001401F0780) ----------------------------------------------------
__int64            sub_1401F0780(int *a1, unsigned int a2, int a3, int a4, int a5, __int64 a6, int a7)
{
  return sub_1401F7450(a1, a2, a3, a4, a5, a6, a7, 0);
}

//----- (00000001401F07E0) ----------------------------------------------------
__int64            sub_1401F07E0(int *a1, unsigned int a2, signed int a3, int a4, int *a5, int *a6, _BYTE *a7, int a8)
{
  int k;
  int m;
  signed int i;
  signed int j;

  if ( a3 > 255 || a3 < 1 )
    return 0xFFFFFFFFLL;
  a1[68] = -1;
  if ( a4 )
  {
    if ( a4 == 1 && a3 <= 8 )
    {
      *a5 = dword_140281E80[4 * a3 - 4];
      *a6 = dword_140281E80[4 * a3 - 3];
      for ( i = 0; i < a3; ++i )
        a7[i] = *((_BYTE *)&dword_140281E80[4 * a3 - 2] + i);
      if ( a3 >= 6 )
        a1[68] = *a5 - 1;
    }
    else if ( a4 == 255 )
    {
      *a5 = a3;
      *a6 = 0;
      for ( j = 0; j < a3; ++j )
        a7[j] = j;
    }
    else
    {
      if ( a4 != 2 )
        return 4294967291LL;
      if ( !(unsigned int)sub_1401F63C0(a3, a5, a6) )
        return 0xFFFFFFFFLL;
      for ( k = 0; k < *a5 - *a6; ++k )
        a7[k] = k + 2 * *(_BYTE *)a6;
      for ( m = 0; m < 2 * *a6; ++m )
        a7[*a5 - *a6 + m] = m;
    }
  }
  else if ( a3 == 1 )
  {
    *a5 = 1;
    *a6 = 0;
    *a7 = 0;
  }
  else
  {
    if ( a3 != 2 )
      return 4294967291LL;
    *a5 = 1;
    *a6 = 1;
    *a7 = 0;
    a7[1] = 1;
  }
  if ( a3 > 2 && a4 == 1 )
    return sub_1401F7450(a1, a2, a3, *a5, *a6, (__int64)a7, a8, 1);
  if ( a4 == 2 )
    return sub_1401F7450(a1, a2, a3, *a5, *a6, (__int64)a7, a8, 2);
  return sub_1401F7450(a1, a2, a3, *a5, *a6, (__int64)a7, a8, 0);
}

// 1401F08DF: conditional instruction was optimized away because r8d.4 is in (1..8)

//----- (00000001401F0B70) ----------------------------------------------------
__int64            sub_1401F0B70(unsigned int *a1, __int64 a2, int a3, _BYTE *a4, int a5)
{
  return sub_1401EA7F0(
           a1,
           (void (           *)(int *, __int64, __int64, _QWORD, int, int, _QWORD, int))sub_1401F7E30,
           a2,
           a3,
           a4,
           a5,
           16,
           (void (           *)(__int64, int *, _QWORD, _QWORD, int, int, int))sub_1401E5010,
           0,
           0);
}

//----- (00000001401F0BF0) ----------------------------------------------------
__int64            sub_1401F0BF0(unsigned int *a1, __int64 a2, int a3, _BYTE *a4, int a5)
{
  return sub_1401EA7F0(
           a1,
           (void (           *)(int *, __int64, __int64, _QWORD, int, int, _QWORD, int))sub_1401F7DB0,
           a2,
           a3,
           a4,
           a5,
           24,
           (void (           *)(__int64, int *, _QWORD, _QWORD, int, int, int))sub_1401E4E80,
           1,
           0);
}

//----- (00000001401F0C70) ----------------------------------------------------
void            sub_1401F0C70(void *a1)
{
  sub_1401A6AC0(a1);
}

//----- (00000001401F0C90) ----------------------------------------------------
__int64 sub_1401F0C90(int *a1, int a2, ...)
{
  va_list va;

  va_start(va, a2);
  return (unsigned int)sub_1401E3F90(a1, a2, (__int64 *)va);
}

//----- (00000001401F0CE0) ----------------------------------------------------
__int64            sub_1401F0CE0(int a1, int a2)
{
  int v3;
  int v4;
  int v5;
  int v6;

  if ( a1 < 1 || a2 > a1 || a2 < 0 )
    return 0;
  v3 = sub_1401E2280(2);
  v5 = sub_1401E2280(1);
  v4 = sub_1401E99B0(268);
  v6 = sub_1401E99B0(v3) * a2 + v4;
  return (unsigned int)sub_1401E99B0(v5) * (a1 - a2) + v6;
}

//----- (00000001401F0D90) ----------------------------------------------------
int *           sub_1401F0D90(int a1, int a2, int a3, int a4, __int64 a5, _DWORD *a6)
{
  int v7;
  int v8;
  int *v9;

  if ( a2 <= 255 && a2 >= 1 && a4 <= a3 && a3 >= 1 && a4 >= 0 && a3 <= 255 - a4 )
  {
    v7 = sub_1401F0CE0(a3, a4);
    v9 = (int *)sub_1401A6AA0(v7);
    if ( v9 )
    {
      v8 = sub_1401F0EA0(v9, a1, a2, a3, a4, a5);
      if ( a6 )
        *a6 = v8;
      if ( v8 )
      {
        sub_1401A6AC0(v9);
        return nullptr;
      }
      return v9;
    }
    else
    {
      if ( a6 )
        *a6 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a6 )
      *a6 = -1;
    return nullptr;
  }
}

//----- (00000001401F0EA0) ----------------------------------------------------
__int64            sub_1401F0EA0(int *a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  int i;
  int j;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int *v13;

  if ( a3 > 255 || a3 < 1 || a5 > a4 || a4 < 1 || a5 < 0 || a4 > 255 - a5 )
    return 0xFFFFFFFFLL;
  *a1 = a3;
  a1[1] = a4;
  a1[2] = a5;
  for ( i = 0; i < *a1; ++i )
    *((_BYTE *)a1 + i + 12) = *(_BYTE *)(a6 + i);
  if ( !(unsigned int)sub_1401E4C60(a1) )
    return 0xFFFFFFFFLL;
  v13 = (int *)((char *)a1 + (int)sub_1401E99B0(268));
  v11 = sub_1401E2280(2);
  v12 = sub_1401E2280(1);
  for ( j = 0; j < a1[2]; ++j )
  {
    v9 = sub_1401E23F0(v13, a2, 2);
    if ( v9 )
      return v9;
    v13 = (int *)((char *)v13 + (int)sub_1401E99B0(v11));
  }
  while ( j < a1[1] )
  {
    v10 = sub_1401E23F0(v13, a2, 1);
    if ( v10 )
      return v10;
    v13 = (int *)((char *)v13 + (int)sub_1401E99B0(v12));
    ++j;
  }
  return 0;
}

//----- (00000001401F1080) ----------------------------------------------------
__int64            sub_1401F1080(int *a1, char *a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  return sub_1401EB3E0(
           a1,
           a2,
           a3,
           a4,
           (void (           *)(__int64, _QWORD, _QWORD, int *, int, int, __int64))sub_1401F6160,
           a5,
           a6,
           1,
           0);
}

//----- (00000001401F10F0) ----------------------------------------------------
__int64            sub_1401F10F0(int *a1, char *a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  return sub_1401EB3E0(
           a1,
           a2,
           a3,
           a4,
           (void (           *)(__int64, _QWORD, _QWORD, int *, int, int, __int64))sub_1401F60A0,
           a5,
           a6,
           0,
           0);
}

//----- (00000001401F1160) ----------------------------------------------------
__int64 sub_1401F1160(__int64 a1, int a2, ...)
{
  va_list va;

  va_start(va, a2);
  return (unsigned int)sub_1401E47A0(a1, a2, (int **)va);
}

//----- (00000001401F11B0) ----------------------------------------------------
void            sub_1401F11B0(void *a1)
{
  sub_1401A6AC0(a1);
}

//----- (00000001401F11D0) ----------------------------------------------------
__int64            sub_1401F11D0(signed int a1, int a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13[4];

  if ( (unsigned int)sub_1401F81E0(a1, a2, v13, &v12, &v3) )
    return 0;
  switch ( v3 )
  {
    case 2:
      v5 = 6;
      v4 = 6;
      v7 = 6;
      v6 = 6;
      break;
    case 3:
      v5 = 11;
      v4 = 11;
      v7 = 11;
      v6 = 11;
      break;
    case 4:
      v5 = 18;
      v4 = 18;
      v7 = 18;
      v6 = 18;
      break;
    default:
      return 0;
  }
  v8 = sub_1401F2140(v5, v4);
  if ( !v8 )
    return 0;
  v9 = sub_1401F2140(v7, v6);
  if ( !v9 )
    return 0;
  v10 = sub_1401F0320(v13[0], v12);
  if ( v10 )
    return v10 + v9 + v8 + (unsigned int)sub_1401E99B0(8);
  else
    return 0;
}

//----- (00000001401F1320) ----------------------------------------------------
_DWORD *           sub_1401F1320(unsigned int a1, signed int a2, int a3, int *a4, int *a5, int a6, _DWORD *a7)
{
  int v8;
  int v9;
  _DWORD *v10;

  v8 = sub_1401F11D0(a2, a3);
  if ( v8 )
  {
    v10 = (_DWORD *)sub_1401A6AA0(v8);
    if ( v10 )
    {
      v9 = sub_1401F1430(v10, a1, a2, a3, a4, a5, a6);
      if ( v9 )
      {
        sub_1401A6AC0(v10);
        v10 = nullptr;
      }
      if ( a7 )
        *a7 = v9;
      return v10;
    }
    else
    {
      if ( a7 )
        *a7 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a7 )
      *a7 = -7;
    return nullptr;
  }
}

//----- (00000001401F1430) ----------------------------------------------------
__int64            sub_1401F1430(_DWORD *a1, unsigned int a2, int a3, int a4, int *a5, int *a6, int a7)
{
  __int64 v8;
  __int64 v9;
  int v10;
  int i;
  int *v12;
  int *v13;
  int v14;
  int *v15;
  _BYTE v16[256];
  __int64 v17;

  if ( !a5 || !a6 )
    return (unsigned int)-1; /* 0x1401F1472: mov eax, 0xffffffff */
  if ( (unsigned int)sub_1401F81E0(a3, a4, a5, a6, &v10) )
    return (unsigned int)-1; /* 0x1401F14AD: mov eax, 0xffffffff */
  if ( a4 != 3 )
    return (unsigned int)-5; /* 0x1401F14BF -> 0x1401F16D3: mov eax, 0xfffffffb */
  {
    v12 = (int *)sub_1401F8260((__int64)a1);
    switch ( v10 )
    {
      case 2:
        LODWORD(v9) = 72;
        sub_1401F21E0(v12, 6, 6, 0, (__int64)&unk_140279C90);
        break;
      case 3:
        LODWORD(v9) = 242;
        sub_1401F21E0(v12, 11, 11, 0, (__int64)&unk_140279CF0);
        break;
      case 4:
        LODWORD(v9) = 648;
        sub_1401F21E0(v12, 18, 18, 0, (__int64)&unk_140279E20);
        break;
      default:
        return (unsigned int)-1; /* 0x1401F158B: mov eax, 0xffffffff */
    }
    *a1 = sub_1401F2140(*v12, v12[1]);
    if ( !*a1 )
      return (unsigned int)-1; /* 0x1401F15C0: mov eax, 0xffffffff */
    {
      v13 = (int *)sub_1401F8290(a1);
      switch ( v10 )
      {
        case 2:
          LODWORD(v9) = 72;
          sub_1401F21E0(v13, 6, 6, 0, (__int64)&unk_14027A0C0);
          break;
        case 3:
          LODWORD(v9) = 242;
          sub_1401F21E0(v13, 11, 11, 3050, (__int64)&unk_14027A120);
          break;
        case 4:
          LODWORD(v9) = 648;
          sub_1401F21E0(v13, 18, 18, 0, (__int64)&unk_14027A230);
          break;
        default:
          return (unsigned int)-1; /* 0x1401F1690: mov eax, 0xffffffff */
      }
      a1[1] = sub_1401F2140(*v13, v13[1]);
      if ( !(a1[1] && *a6 + *a5 <= *v12 && a3 <= v12[1] && a3 <= *v13 && *a6 + *a5 <= v13[1]) )
        return (unsigned int)-1; /* 0x1401F16C7 / 0x1401F1739: mov eax, 0xffffffff */
      {
        for ( i = 0; i < a3; ++i )
          v16[i] = i;
        v15 = (int *)sub_1401F82D0(a1);
        v14 = sub_1401F0780(v15, a2, a3, *a5, *a6, (__int64)v16, a7);
      }
    }
  }
  return (unsigned int)v14; /* 0x1401F17D1: mov eax, dword ptr [rsp + 0x58] */
}

//----- (00000001401F1800) ----------------------------------------------------
__int64            sub_1401F1800(_DWORD *a1, __int64 a2, int a3, _BYTE *a4, int a5)
{
  unsigned int *v5;
  __int64 v7;

  v7 = sub_1401F8260((__int64)a1);
  v5 = (unsigned int *)sub_1401F82D0(a1);
  return sub_1401EA7F0(
           v5,
           (void (           *)(int *, __int64, __int64, _QWORD, int, int, _QWORD, int))sub_1401F80F0,
           a2,
           a3,
           a4,
           a5,
           16,
           (void (           *)(__int64, int *, _QWORD, _QWORD, int, int, int))sub_1401E5010,
           0,
           v7);
}

//----- (00000001401F18A0) ----------------------------------------------------
__int64            sub_1401F18A0(_DWORD *a1, __int64 a2, int a3, _BYTE *a4, int a5)
{
  unsigned int *v5;
  __int64 v7;

  v7 = sub_1401F8260((__int64)a1);
  v5 = (unsigned int *)sub_1401F82D0(a1);
  return sub_1401EA7F0(
           v5,
           (void (           *)(int *, __int64, __int64, _QWORD, int, int, _QWORD, int))sub_1401F8090,
           a2,
           a3,
           a4,
           a5,
           24,
           (void (           *)(__int64, int *, _QWORD, _QWORD, int, int, int))sub_1401E4E80,
           1,
           v7);
}

//----- (00000001401F1940) ----------------------------------------------------
void            sub_1401F1940(void *a1)
{
  sub_1401A6AC0(a1);
}

//----- (00000001401F1960) ----------------------------------------------------
__int64 sub_1401F1960(_DWORD *a1, int a2, ...)
{
  int i;
  int j;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  char *v12;
  _DWORD *v13;
  __int64 v14;
  _DWORD *v17;
  va_list va;
  __int64 v19;
  va_list va1;

  va_start(va1, a2);
  va_start(va, a2);
  v17 = va_arg(va1, _DWORD *);
  v19 = va_arg(va1, _QWORD);
  v10 = 0;
  v6 = (int *)sub_1401F82D0(a1);
  v12 = sub_1401F8290(a1);
  switch ( a2 )
  {
    case 6001:
      if ( v17 )
      {
        *v17 = *((_DWORD *)v12 + 2);
        return v10;
      }
      break;
    case 6003:
      if ( v17 )
      {
        *v17 = 2 * (v6[2] + v6[1]) * *v6;
        return v10;
      }
      break;
    case 6005:
      v7 = v6[2] + v6[1];
      v8 = *v6;
      v13 = v17;
      v11 = v19;
      if ( v17 )
      {
        v14 = sub_1401F21B0((__int64)v12);
        if ( v11 == 2 * v8 * v7 )
        {
          v5 = 0;
          for ( i = 0; i < v7; ++i )
          {
            for ( j = 0; j < v8; ++j )
            {
              v9 = j + i * *(_DWORD *)v12;
              *((_BYTE *)v13 + 2 * v5) = *(_BYTE *)(v14 + 2LL * v9);
              *((_BYTE *)v13 + 2 * v5++ + 1) = HIBYTE(*(_WORD *)(v14 + 2LL * v9));
            }
          }
          return v10;
        }
      }
      break;
    default:
      return (unsigned int)sub_1401E3F90(v6, a2, (_DWORD **)va);
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001401F1C10) ----------------------------------------------------
__int64            sub_1401F1C10(int a1, int a2, int a3)
{
  int v4;
  int v5;

  v4 = sub_1401F2140(a3 + a2, a1);
  if ( !v4 )
    return 0;
  v5 = sub_1401F0CE0(a2, a3);
  if ( v5 )
    return v5 + v4 + (unsigned int)sub_1401E99B0(4);
  else
    return 0;
}

//----- (00000001401F1C80) ----------------------------------------------------
_DWORD *           sub_1401F1C80(int a1, int a2, int a3, int a4, __int64 a5, int a6, _DWORD *a7)
{
  int v8;
  int v9;
  _DWORD *v10;

  v8 = sub_1401F1C10(a2, a3, a4);
  if ( v8 )
  {
    v10 = (_DWORD *)sub_1401A6AA0(v8);
    if ( v10 )
    {
      v9 = sub_1401F1D90(v10, a1, a2, a3, a4, a5, a6);
      if ( v9 )
      {
        sub_1401A6AC0(v10);
        v10 = nullptr;
      }
      if ( a7 )
        *a7 = v9;
      return v10;
    }
    else
    {
      if ( a7 )
        *a7 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a7 )
      *a7 = -7;
    return nullptr;
  }
}

//----- (00000001401F1D90) ----------------------------------------------------
__int64            sub_1401F1D90(_DWORD *a1, int a2, int a3, int a4, int a5, __int64 a6, int a7)
{
  unsigned __int64 v7;
  void *v8;
  _DWORD *v9;
  int *v10;
  int i;
  int v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  _BYTE v18[256];
  __int64 v19;

  v13 = a5 + a4;
  v15 = 2 * a3 * (a5 + a4);
  if ( v15 != a7 )
    return (unsigned int)-1; /* 0x1401F1DF1: mov eax, 0xffffffff */
  {
    v7 = 2LL * a3 * v13 + 15;
    if ( v7 <= 2LL * a3 * v13 )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    v17 = v8;
    for ( i = 0; i < a3 * v13; ++i )
    {
      LOWORD(v14) = *(unsigned __int8 *)(a6 + 2 * i) | (*(unsigned __int8 *)(a6 + 2 * i + 1) << 8);
      v14 = ((unsigned __int16)v14 ^ 0x8000) - 0x8000;
      *((_WORD *)v17 + i) = v14;
    }
    *a1 = sub_1401F2140(a3, v13);
    if ( !*a1 )
      return (unsigned int)-1; /* 0x1401F1ED0: mov eax, 0xffffffff */
    {
      v9 = (_DWORD *)sub_1401F8020((__int64)a1);
      sub_1401F21E0(v9, a3, v13, 0, (__int64)v17);
      for ( i = 0; i < a3; ++i )
        v18[i] = i;
      v10 = (int *)sub_1401F8050(a1);
      v16 = sub_1401F0EA0(v10, a2, a3, a4, a5, (__int64)v18);
    }
  }
  return (unsigned int)v16; /* 0x1401F1F76: mov eax, dword ptr [rbp + 0x10] */
}

//----- (00000001401F1FA0) ----------------------------------------------------
__int64            sub_1401F1FA0(_DWORD *a1, char *a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  int *v6;
  __int64 v8;

  v8 = sub_1401F8020((__int64)a1);
  v6 = (int *)sub_1401F8050(a1);
  return sub_1401EB3E0(
           v6,
           a2,
           a3,
           a4,
           (void (           *)(__int64, _QWORD, _QWORD, int *, int, int, __int64))sub_1401F7F70,
           a5,
           a6,
           1,
           v8);
}

//----- (00000001401F2030) ----------------------------------------------------
__int64            sub_1401F2030(_DWORD *a1, char *a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  int *v6;
  __int64 v8;

  v8 = sub_1401F8020((__int64)a1);
  v6 = (int *)sub_1401F8050(a1);
  return sub_1401EB3E0(
           v6,
           a2,
           a3,
           a4,
           (void (           *)(__int64, _QWORD, _QWORD, int *, int, int, __int64))sub_1401F7EC0,
           a5,
           a6,
           0,
           v8);
}

//----- (00000001401F20C0) ----------------------------------------------------
__int64 sub_1401F20C0(_DWORD *a1, int a2, ...)
{
  char *v2;
  va_list va;

  va_start(va, a2);
  v2 = sub_1401F8050(a1);
  return (unsigned int)sub_1401E47A0((__int64)v2, a2, (int **)va);
}

//----- (00000001401F2120) ----------------------------------------------------
void            sub_1401F2120(void *a1)
{
  sub_1401A6AC0(a1);
}

//----- (00000001401F2140) ----------------------------------------------------
__int64            sub_1401F2140(int a1, int a2)
{
  int v3;
  int v4;

  if ( a1 > 255 || a2 > 255 )
    return 0;
  v3 = 2 * a2 * a1;
  if ( v3 > 65004 )
    return 0;
  v4 = sub_1401E99B0(12);
  return (unsigned int)sub_1401E99B0(v3) + v4;
}

//----- (00000001401F21B0) ----------------------------------------------------
__int64            sub_1401F21B0(__int64 a1)
{
  return (int)sub_1401E99B0(12) + a1;
}

//----- (00000001401F21E0) ----------------------------------------------------
__int64            sub_1401F21E0(_DWORD *a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 result;
  int i;
  __int64 v7;

  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  v7 = sub_1401F21B0((__int64)a1);
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)(a3 * a2);
    if ( i >= (int)result )
      break;
    *(_WORD *)(v7 + 2LL * i) = *(_WORD *)(a5 + 2LL * i);
  }
  return result;
}

//----- (00000001401F2280) ----------------------------------------------------
__int64            sub_1401F2280(_DWORD *a1, __int64 a2, int a3, __int64 a4, int a5, int a6, unsigned int a7)
{
  __int64 result;
  int j;
  signed int i;
  float v10;
  __int64 v11;

  v11 = sub_1401F21B0((__int64)a1);
  for ( i = 0; ; ++i )
  {
    result = a7;
    if ( i >= (int)a7 )
      break;
    v10 = 0.0;
    for ( j = 0; j < a3; ++j )
      v10 = v10 + (float)((float)*(__int16 *)(v11 + 2LL * (a5 + j * *a1)) * *(float *)(a2 + 4LL * (j + i * a3)));
    *(float *)(a4 + 4LL * i * a6) = 0.000030517578 * v10;
  }
  return result;
}

//----- (00000001401F2380) ----------------------------------------------------
__int64            sub_1401F2380(_DWORD *a1, __int64 a2, int a3, int a4, __int64 a5, int a6, unsigned int a7)
{
  __int64 result;
  signed int i;
  int j;
  float v10;
  __int64 v11;

  v11 = sub_1401F21B0((__int64)a1);
  for ( i = 0; ; ++i )
  {
    result = a7;
    if ( i >= (int)a7 )
      break;
    v10 = *(float *)(a2 + 4LL * i * a4);
    for ( j = 0; j < a6; ++j )
      *(float *)(a5 + 4LL * (j + i * a6)) = *(float *)(a5 + 4LL * (j + i * a6))
                                          + (float)((float)(0.000030517578
                                                          * (float)*(__int16 *)(v11 + 2LL * (j + a3 * *a1)))
                                                  * v10);
  }
  return result;
}

//----- (00000001401F2490) ----------------------------------------------------
__int64            sub_1401F2490(_DWORD *a1, __int64 a2, int a3, __int64 a4, int a5, int a6, unsigned int a7)
{
  __int64 result;
  int j;
  signed int i;
  float v10;
  __int64 v11;

  v11 = sub_1401F21B0((__int64)a1);
  for ( i = 0; ; ++i )
  {
    result = a7;
    if ( i >= (int)a7 )
      break;
    v10 = 0.0;
    for ( j = 0; j < a3; ++j )
      v10 = v10 + (float)(*(__int16 *)(a2 + 2LL * (j + i * a3)) * *(__int16 *)(v11 + 2LL * (a5 + j * *a1)));
    *(float *)(a4 + 4LL * i * a6) = 9.3132257e-10 * v10;
  }
  return result;
}

//----- (00000001401F2590) ----------------------------------------------------
__int64            sub_1401F2590(_DWORD *a1, __int64 a2, int a3, int a4, __int64 a5, int a6, unsigned int a7)
{
  __int64 result;
  signed int i;
  int j;
  int v10;
  __int64 v11;

  v11 = sub_1401F21B0((__int64)a1);
  for ( i = 0; ; ++i )
  {
    result = a7;
    if ( i >= (int)a7 )
      break;
    v10 = (__int16)sub_1401AD3E0(*(float *)(a2 + 4LL * i * a4));
    for ( j = 0; j < a6; ++j )
      *(_WORD *)(a5 + 2LL * (j + i * a6)) += (v10 * *(__int16 *)(v11 + 2LL * (j + a3 * *a1)) + 0x4000) >> 15;
  }
  return result;
}

//----- (00000001401F2690) ----------------------------------------------------
float            sub_1401F2690(float a1)
{
  int v2;
  float v3;
  float v4;

  v4 = a1;
  v3 = 1.0;
  if ( a1 >= 8.0 )
    return 1.0;
  if ( a1 <= -8.0 )
    return -1.0;
  if ( a1 < 0.0 )
  {
    v4 = -a1;
    v3 = -1.0;
  }
  v2 = (int)floor((float)((float)(25.0 * v4) + 0.5));
  return v3
       * (float)(flt_14027B860[v2]
               + (float)((float)((float)(v4 - (float)(0.039999999 * (float)v2))
                               * (float)(1.0 - (float)(flt_14027B860[v2] * flt_14027B860[v2])))
                       * (float)(1.0 - (float)(flt_14027B860[v2] * (float)(v4 - (float)(0.039999999 * (float)v2))))));
}

//----- (00000001401F2810) ----------------------------------------------------
__m128            sub_1401F2810(float a1)
{
  __int128 v1;

  v1 = 0x3F000000u;
  *(float *)&v1 = (float)(0.5 * sub_1401F2690(0.5 * a1)) + 0.5;
  return (__m128)v1;
}

//----- (00000001401F2860) ----------------------------------------------------
__int64            sub_1401F2860(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  __int64 result;
  int i;
  int j;

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    for ( j = 0; j < a4; ++j )
      *(float *)(a1 + 4LL * i) = *(float *)(a1 + 4LL * i)
                               + (float)((float)*(char *)(a2 + i + a5 * j) * *(float *)(a6 + 4LL * j));
  }
  return result;
}

//----- (00000001401F2910) ----------------------------------------------------
__int64            sub_1401F2910(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5, __int64 a6, int a7)
{
  __int64 result;
  int j;
  signed int i;
  float v10;

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    for ( j = 0; j < a4; ++j )
    {
      v10 = *(float *)(a6 + 4LL * 48000 / a7 * j) * *(float *)(a6 + 4LL * 48000 / a7 * j);
      *(float *)(a3 + 4LL * (int)(i + a5 * j)) = (float)(v10 * *(float *)(a2 + 4LL * (int)(i + a5 * j)))
                                               + (float)((float)(1.0 - v10) * *(float *)(a1 + 4LL * (int)(i + a5 * j)));
    }
  }
  return result;
}

//----- (00000001401F2A30) ----------------------------------------------------
__int64            sub_1401F2A30(_BYTE *a1)
{
  if ( (*a1 & 0x80) != 0 )
  {
    return 1002;
  }
  else if ( (*a1 & 0x60) == 0x60 )
  {
    return 1001;
  }
  else
  {
    return 1000;
  }
}

//----- (00000001401F2AA0) ----------------------------------------------------
__int64            sub_1401F2AA0(int *a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v6;
  void *v7;
  unsigned __int64 v8;
  void *v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  void *v13;
  unsigned __int64 v14;
  void *v15;
  int *v16;
  int *v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
  int i;
  int v24;
  int v25;
  int v26;
  int v27;
  BOOL v28;
  int v29;
  int v30;
  __int64 *v31;
  int v32;
  int v33;
  int v34;
  BOOL v35;
  _BYTE v36[4];
  int v37;
  unsigned int v38;
  int v39;
  int j;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  BOOL v55;
  int v56;
  int v57;
  BOOL v58;
  int v59;
  int v60;
  int v61;
  unsigned int v62;
  int v63;
  BOOL v64;
  int v65;
  int v66;
  int v67;
  int *v68;
       __m128i *v69;
  __int64 v70;
  int v71;
  int v72;
  float v73;
  float v74;
  int v75;
  BOOL v76;
  int v77;
  __int64 v78;
       __m128i *v79;
  __int64 v80;
       __m128i *v81;
  int *p_i;
  int *v83;
  __int64 v84;
  int *v85;
  int *v86;
  unsigned int v87;
  int v88;
  int v89;
  __int64 v90;
  int v93;
  __int64 v94;
  int v95;
  int v96;

  v94 = a4;
  v93 = a3;
  v56 = 0;
  v44 = 0;
  v47 = nullptr;
  v41 = 0;
  v28 = 0;
  v34 = 0;
  v35 = 0;
  v29 = 0;
  v79 = (     __m128i *)((char *)a1 + a1[1]);
  v31 = (__int64 *)((char *)a1 + *a1);
  v30 = a1[3] / 50;
  v32 = v30 >> 1;
  v27 = v30 >> 2;
  v26 = v30 >> 3;
  if ( a5 < v30 >> 3 )
    return (unsigned int)-2; /* 0x1401F2B80: mov eax, 0xfffffffe */
  if ( a5 >= 3 * (a1[3] / 25) )
    v66 = 3 * (a1[3] / 25);
  else
    v66 = a5;
  v95 = v66;
  if ( a3 <= 1 )
  {
    a2 = 0;
    if ( v66 >= a1[16] )
      v67 = a1[16];
    else
      v67 = v66;
    v95 = v67;
  }
  if ( a2 )
  {
    v24 = a1[16];
    v25 = a1[14];
    v33 = a1[13];
    sub_14019AC50(&v87, a2, a3);
  }
  else
  {
    v24 = v95;
    v25 = a1[15];
    v33 = 0;
    if ( !v25 )
    {
      for ( i = 0; i < a1[2] * v24; ++i )
        *(_DWORD *)(a4 + 4LL * i) = 0;
      return (unsigned int)v24; /* 0x1401F2CDA: mov eax, dword ptr [rbp + 4] */
    }
    if ( v24 > v30 )
    {
      do
      {
        if ( v24 >= v30 )
          v48 = v30;
        else
          v48 = v24;
        v42 = sub_1401F2AA0(a1, 0, 0, v94, v48, 0);
        if ( v42 < 0 )
          return (unsigned int)v42; /* 0x1401F2D34: mov eax, dword ptr [rbp + 0x50] */
        v94 += 4LL * a1[2] * v42;
        v24 -= v42;
      }
      while ( v24 > 0 );
      return (unsigned int)a5; /* 0x1401F2D77: mov eax, dword ptr [rbp + 0x1b0] */
    }
    if ( v24 < v30 )
    {
      if ( v24 <= v32 )
      {
        if ( v25 != 1000 && v24 > v27 && v24 < v32 )
          v24 = v27;
      }
      else
      {
        v24 = v32;
      }
    }
  }
  v39 = 0;
  v46 = 0;
  v49 = 0;
  if ( a2 && a1[15] > 0 && (v25 == 1002 && a1[15] != 1002 && !a1[17] || v25 != 1002 && a1[15] == 1002) )
  {
    v41 = 1;
    if ( v25 == 1002 )
      v49 = a1[2] * v27;
    else
      v46 = a1[2] * v27;
  }
  v6 = 4LL * v49 + 15;
  if ( v6 <= 4LL * v49 )
    v6 = 0xFFFFFFFFFFFFFF0LL;
  v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
  p_i = v7;
  if ( v41 && v25 == 1002 )
  {
    v47 = p_i;
    if ( v27 >= v24 )
      v50 = v24;
    else
      v50 = v27;
    sub_1401F2AA0(a1, 0, 0, (__int64)v47, v50, 0);
  }
  if ( v24 > v95 )
    return (unsigned int)-1; /* 0x1401F2EFA: mov eax, 0xffffffff */
  {
    v96 = v24;
    if ( v25 == 1002 || v39 )
    {
      v52 = 0;
    }
    else
    {
      if ( v32 <= v24 )
        v51 = v24;
      else
        v51 = v32;
      v52 = a1[2] * v51;
    }
    v75 = v52;
    v8 = 2LL * v52 + 15;
    if ( v8 <= 2LL * v52 )
      v8 = 0xFFFFFFFFFFFFFF0LL;
    v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
    v81 = (     __m128i *)v9;
    if ( v25 != 1002 )
    {
      v69 = v81;
      if ( a1[15] == 1002 )
        sub_1401CCAC0((__int64)v79);
      if ( 1000 * v24 / a1[3] >= 10 )
        v53 = 1000 * v24 / a1[3];
      else
        v53 = 10;
      a1[8] = v53;
      if ( a2 )
      {
        a1[5] = a1[12];
        if ( v25 == 1000 )
        {
          if ( v33 == 1101 )
          {
            a1[7] = 8000;
          }
          else if ( v33 == 1102 )
          {
            a1[7] = 12000;
          }
          else
          {
            a1[7] = 16000;
          }
        }
        else
        {
          a1[7] = 16000;
        }
      }
      if ( a2 )
        v54 = 2 * a6;
      else
        v54 = 1;
      v57 = v54;
      v43 = 0;
      do
      {
        v55 = v43 == 0;
        v76 = v55;
        v56 = sub_1401CCB60(v79, a1 + 4, v57, v55, &v87, v69, &v45, a1[11]);
        if ( v56 )
        {
          if ( !v57 )
            return (unsigned int)-3; /* 0x1401F31CE: mov eax, 0xfffffffd */
          v45 = v96;
          for ( i = 0; i < a1[2] * v96; ++i )
            SR_VEC_PTR_LANES(128, v69, i16)[i] = 0;
        }
        v69 = (     __m128i *)((char *)v69 + 2 * a1[2] * v45);
        v43 += v45;
      }
      while ( v43 < v96 );
    }
    v62 = 0;
    if ( !a6 && v25 != 1002 )
    {
      if ( a2 )
      {
        v58 = a1[14] == 1001;
        v10 = sub_14019A0A0((__int64)&v87);
        if ( v10 + 20 * v58 + 17 <= 8 * v93 )
        {
          v28 = v25 != 1001 || sub_14019AF20(&v87, 12);
          if ( v28 )
          {
            v35 = sub_14019AF20(&v87, 1);
            if ( v25 == 1001 )
              v59 = sub_14019B0A0(&v87, 256) + 2;
            else
              v59 = v93 - ((int)(sub_14019A0A0((__int64)&v87) + 7) >> 3);
            v34 = v59;
            v93 -= v59;
            v77 = 8 * v93;
            v11 = sub_14019A0A0((__int64)&v87);
            if ( v77 < v11 )
            {
              v93 = 0;
              v34 = 0;
              v28 = 0;
            }
            v88 -= v34;
          }
        }
      }
    }
    if ( v25 != 1002 )
      v62 = 17;
    if ( v28 )
    {
      v41 = 0;
      v46 = 0;
    }
    v12 = 4LL * v46 + 15;
    if ( v12 <= 4LL * v46 )
      v12 = 0xFFFFFFFFFFFFFF0LL;
    v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
    v83 = v13;
    if ( v41 && v25 != 1002 )
    {
      v47 = v83;
      if ( v27 >= v24 )
        v60 = v24;
      else
        v60 = v27;
      sub_1401F2AA0(a1, 0, 0, (__int64)v47, v60, 0);
    }
    if ( !v33 )
      goto LABEL_203;
    v38 = 21;
    v37 = v33;
    if ( v33 == 1101 )
    {
      v38 = 13;
    }
    else if ( v37 > 1101 )
    {
      if ( v37 <= 1103 )
      {
        v38 = 17;
      }
      else if ( v37 == 1104 )
      {
        v38 = 19;
      }
      else if ( v37 == 1105 )
      {
        v38 = 21;
      }
    }
    if ( !(unsigned int)sub_140199AA0(v31, 10012, (int *)v38) )
    {
LABEL_203:
      if ( !(unsigned int)sub_140199AA0(v31, 10008, (int *)(unsigned int)a1[12]) )
      {
        if ( v28 )
          v61 = a1[2] * v27;
        else
          v61 = 0;
        v71 = v61;
        v14 = 4LL * v61 + 15;
        if ( v14 <= 4LL * v61 )
          v14 = 0xFFFFFFFFFFFFFF0LL;
        v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
        v68 = v15;
        if ( !v28
          || !v35
          || !(unsigned int)sub_140199AA0(v31, 10010, nullptr)
          && (sub_14019F210(v31, v93 + a2, v34, (__int64)v68, v27, nullptr, 0),
              !(unsigned int)sub_140199AA0(v31, 4031, &v29)) )
        {
          if ( !(unsigned int)sub_140199AA0(v31, 10010, (int *)v62) )
          {
            if ( v25 == 1000 )
            {
              v36[0] = -1;
              v36[1] = -1;
              if ( !v39 )
              {
                for ( i = 0; i < a1[2] * v96; ++i )
                  *(_DWORD *)(v94 + 4LL * i) = 0;
              }
              if ( a1[15] == 1001 && (!v28 || !v35 || !a1[17]) )
              {
                if ( (unsigned int)sub_140199AA0(v31, 10010, nullptr) )
                  return (unsigned int)-3; /* mov eax, 0xfffffffd after a failed control call */
                sub_14019F210(v31, (__int64)v36, 2, v94, v26, nullptr, v39);
              }
            }
            else
            {
              if ( v30 >= v96 )
                v63 = v96;
              else
                v63 = v30;
              v72 = v63;
              if ( v25 != a1[15] && a1[15] > 0 && !a1[17] && (unsigned int)sub_140199AA0(v31, 4028, v16) )
                return (unsigned int)-3; /* mov eax, 0xfffffffd after a failed control call */
              if ( a6 )
                v80 = 0;
              else
                v80 = a2;
              v44 = sub_14019F210(v31, v80, v93, v94, v72, &v87, v39);
            }
            if ( v25 != 1002 && !v39 )
            {
              for ( i = 0; i < a1[2] * v96; ++i )
                *(float *)(v94 + 4LL * i) = *(float *)(v94 + 4LL * i)
                                          + (float)(0.000030517578 * (float)SR_VEC_PTR_LANES(128, v81, i16)[i]);
            }
            if ( !(unsigned int)sub_140199AA0(v31, 10015, (int *)&v78) )
            {
              v70 = *(_QWORD *)(v78 + 72);
              if ( v28 && !v35 )
              {
                if ( (unsigned int)sub_140199AA0(v31, 4028, v17) )
                  return (unsigned int)-3; /* mov eax, 0xfffffffd after a failed control call */
                if ( (unsigned int)sub_140199AA0(v31, 10010, nullptr) )
                  return (unsigned int)-3; /* mov eax, 0xfffffffd after a failed control call */
                sub_14019F210(v31, v93 + a2, v34, (__int64)v68, v27, nullptr, 0);
                if ( (unsigned int)sub_140199AA0(v31, 4031, &v29) )
                  return (unsigned int)-3; /* mov eax, 0xfffffffd after a failed control call */
                v18 = (__int64)&v68[v26 * a1[2]];
                v84 = v94 + 4LL * (v96 - v26) * a1[2];
                sub_1401F2910(v84, v18, v84, v26, a1[2], v70, a1[3]);
              }
              if ( v28 && v35 )
              {
                for ( j = 0; j < a1[2]; ++j )
                {
                  for ( i = 0; i < v26; ++i )
                    *(_DWORD *)(v94 + 4LL * (j + i * a1[2])) = v68[j + i * a1[2]];
                }
                v19 = v94 + 4LL * v26 * a1[2];
                v85 = &v68[v26 * a1[2]];
                sub_1401F2910((__int64)v85, v19, v19, v26, a1[2], v70, a1[3]);
              }
              if ( v41 )
              {
                if ( v24 < v27 )
                {
                  sub_1401F2910((__int64)v47, v94, v94, v26, a1[2], v70, a1[3]);
                }
                else
                {
                  for ( i = 0; i < v26 * a1[2]; ++i )
                    *(_DWORD *)(v94 + 4LL * i) = v47[i];
                  v20 = v94 + 4LL * v26 * a1[2];
                  v86 = &v47[v26 * a1[2]];
                  sub_1401F2910((__int64)v86, v20, v20, v26, a1[2], v70, a1[3]);
                }
              }
              if ( a1[10] )
              {
                v21 = exp(0.6931471805599453 * (float)(0.00064881408 * (float)a1[10]));
                v73 = v21;
                for ( i = 0; i < a1[2] * v96; ++i )
                {
                  v74 = *(float *)(v94 + 4LL * i) * v73;
                  *(float *)(v94 + 4LL * i) = v74;
                }
              }
              if ( v93 > 1 )
                a1[21] = v29 ^ v89;
              else
                a1[21] = 0;
              a1[15] = v25;
              v64 = v28 && !v35;
              a1[17] = v64;
              if ( v44 >= 0 )
                sub_1401A2600();
              if ( v44 >= 0 )
                v65 = v24;
              else
                v65 = v44;
              return (unsigned int)v65; /* 0x1401F3E38: mov eax, dword ptr [rbp + 0xb4] */
            }
          }
        }
      }
    }
  }
  return (unsigned int)-3; /* the nested control calls that failed: each mov eax, 0xfffffffd (0x1401F34CA ... 0x1401F39AB) */
}

//----- (00000001401F3E60) ----------------------------------------------------
__int64            sub_1401F3E60(int a1, int a2, int a3, int a4)
{
  char v5;
  char v6;
  char v7;

  v6 = 0;
  while ( a2 < 400 )
  {
    a2 *= 2;
    ++v6;
  }
  if ( a1 == 1000 )
  {
    v5 = (8 * v6 - 16) | (32 * (a3 - 77));
  }
  else if ( a1 == 1002 )
  {
    v7 = a3 - 78;
    if ( a3 - 1102 < 0 )
      v7 = 0;
    v5 = (8 * v6) | (32 * v7) | 0x80;
  }
  else
  {
    v5 = (8 * v6 - 16) | (16 * (a3 - 80)) | 0x60;
  }
  return (unsigned __int8)((4 * (a4 == 2)) | v5);
}

//----- (00000001401F3F90) ----------------------------------------------------
void               sub_1401F3F90(__int64 a1, int *a2, int *a3, float *a4, __int64 a5, int a6, int a7)
{
  int i;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;

  v11 = (float)*a3 * 0.0000000037252903f;
  v12 = (float)a3[1] * 0.0000000037252903f;
  v13 = (float)*a2 * 0.0000000037252903f;
  v14 = (float)a2[1] * 0.0000000037252903f;
  v15 = (float)a2[2] * 0.0000000037252903f;
  for ( i = 0; i < a6; ++i )
  {
    v9 = *(float *)(a1 + 4LL * a7 * i);
    v10 = *a4 + (float)(v13 * v9);
    *a4 = (float)(a4[1] - (float)(v10 * v11)) + (float)(v14 * v9);
    a4[1] = (float)((float)((float)-v10 * v12) + (float)(v15 * v9)) + 1.0e-30f;
    *(float *)(a5 + 4LL * a7 * i) = v10;
  }
  return; /* native void filter */
}

//----- (00000001401F41E0) ----------------------------------------------------
void               sub_1401F41E0(__int64 a1, __int16 a2, __int64 a3, float *a4, int a5, int a6, int a7)
{
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14[2];
  __int64 v15;
  int v16[4];
  __int64 v17;

  v12 = 2471 * a2;
  v13 = a7 / 1000;
  v10 = v12 / (a7 / 1000);
  v9 = (int)(0x10000000u - 471u * (unsigned)v10);
  v16[0] = v9;
  v16[1] = (int)(2u * (471u * (unsigned)v10 - 0x10000000u));
  v16[2] = v9;
  v11 = v9 >> 6;
  v14[0] = ((int)(((v10 * (__int64)v10) >> 16) - 0x800000) * (__int64)(v9 >> 6)) >> 16;
  v14[1] = (v11 * (__int64)v11) >> 16;
  sub_1401F3F90(a1, v16, v14, a4, a3, a5, a6);
  if ( a6 == 2 )
  {
    v15 = a1 + 4;
    sub_1401F3F90(a1 + 4, v16, v14, a4 + 2, a3 + 4, a5, 2);
  }
  return; /* native void filter */
}

//----- (00000001401F43C0) ----------------------------------------------------
__int64            sub_1401F43C0(__int64 a1, int a2, __int64 a3, float *a4, int a5, int a6, int a7)
{
  int i;
  int j;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;

  v12 = (float)(6.3000002 * (float)a2) / (float)a7;
  v14 = 1.0 - v12;
  if ( a6 == 2 )
  {
    v10 = *a4;
    v11 = a4[2];
    for ( i = 0; i < a5; ++i )
    {
      v15 = *(float *)(a1 + 8LL * i);
      v16 = *(float *)(a1 + 4LL * (2 * i + 1));
      v18 = v15 - v10;
      v19 = v16 - v11;
      v10 = (float)((float)(v12 * v15) + 1.0e-30) + (float)(v14 * v10);
      v11 = (float)((float)(v12 * v16) + 1.0e-30) + (float)(v14 * v11);
      *(float *)(a3 + 8LL * i) = v18;
      *(float *)(a3 + 4LL * (2 * i + 1)) = v19;
    }
    *a4 = v10;
    a4[2] = v11;
    return 8;
  }
  else
  {
    v13 = *a4;
    for ( j = 0; j < a5; ++j )
    {
      v17 = *(float *)(a1 + 4LL * j);
      v20 = v17 - v13;
      v13 = (float)((float)(v12 * v17) + 1.0e-30) + (float)(v14 * v13);
      *(float *)(a3 + 4LL * j) = v20;
    }
    *a4 = v13;
    return 0;
  }
}

//----- (00000001401F4640) ----------------------------------------------------
__int64            sub_1401F4640(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4,
        int a5,
        signed int a6,
        int a7,
        __int64 a8,
        int a9)
{
  __int64 result;
  int i;
  float v11;
  float v12;
  float v13;
  float v14;

  v14 = 1.0 - a4;
  for ( i = 0; i < a5 / (48000 / a9); ++i )
  {
    v13 = *(float *)(a8 + 4LL * 48000 / a9 * i) * *(float *)(a8 + 4LL * 48000 / a9 * i);
    v11 = (float)((float)(v13 * v14) + (float)((float)(1.0 - v13) * (float)(1.0 - a3)))
        * (float)(0.5 * (float)(*(float *)(a1 + 4LL * a7 * i) - *(float *)(a1 + 4LL * (a7 * i + 1))));
    *(float *)(a2 + 4LL * a7 * i) = *(float *)(a2 + 4LL * a7 * i) - v11;
    *(float *)(a2 + 4LL * (a7 * i + 1)) = *(float *)(a2 + 4LL * (a7 * i + 1)) + v11;
  }
  while ( 1 )
  {
    result = (unsigned int)a6;
    if ( i >= a6 )
      break;
    v12 = v14 * (float)(0.5 * (float)(*(float *)(a1 + 4LL * a7 * i) - *(float *)(a1 + 4LL * (a7 * i + 1))));
    *(float *)(a2 + 4LL * a7 * i) = *(float *)(a2 + 4LL * a7 * i) - v12;
    *(float *)(a2 + 4LL * (a7 * i + 1)) = *(float *)(a2 + 4LL * (a7 * i + 1)) + v12;
    ++i;
  }
  return result;
}

//----- (00000001401F48B0) ----------------------------------------------------
__int64            sub_1401F48B0(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4,
        int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9)
{
  __int64 result;
  int i;
  int j;
  int k;
  int v13;
  signed int v14;
  int v15;
  float v16;
  float v17;

  v13 = 48000 / a9;
  v15 = a5 / (48000 / a9);
  if ( a7 == 1 )
  {
    for ( i = 0; i < v15; ++i )
    {
      v16 = *(float *)(a8 + 4LL * v13 * i) * *(float *)(a8 + 4LL * v13 * i);
      *(float *)(a2 + 4LL * i) = (float)((float)(v16 * a4) + (float)((float)(1.0 - v16) * a3))
                               * *(float *)(a1 + 4LL * i);
    }
  }
  else
  {
    for ( j = 0; j < v15; ++j )
    {
      v17 = *(float *)(a8 + 4LL * v13 * j) * *(float *)(a8 + 4LL * v13 * j);
      *(float *)(a2 + 8LL * j) = (float)((float)(v17 * a4) + (float)((float)(1.0 - v17) * a3))
                               * *(float *)(a1 + 8LL * j);
      *(float *)(a2 + 4LL * (2 * j + 1)) = (float)((float)(v17 * a4) + (float)((float)(1.0 - v17) * a3))
                                         * *(float *)(a1 + 4LL * (2 * j + 1));
    }
  }
  v14 = 0;
  do
  {
    for ( k = a5 / (48000 / a9); k < a6; ++k )
      *(float *)(a2 + 4LL * (int)(v14 + a7 * k)) = a4 * *(float *)(a1 + 4LL * (int)(v14 + a7 * k));
    ++v14;
    result = a7;
  }
  while ( v14 < (int)a7 );
  return result;
}

//----- (00000001401F4B00) ----------------------------------------------------
__int64            sub_1401F4B00(_DWORD *a1, int a2, int a3)
{
  int v4;

  v4 = a2;
  if ( !a2 )
    v4 = a1[36] / 400;
  if ( a1[41] == -1000 )
    return (unsigned int)(a1[28] * a1[36] + 60 * a1[36] / v4);
  if ( a1[41] == -1 )
    return (unsigned int)(a1[36] * 8 * a3 / v4);
  return (unsigned int)a1[41];
}

//----- (00000001401F4BB0) ----------------------------------------------------
float            sub_1401F4BB0(__int64 a1, int a2, int a3, float *a4)
{
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  int i;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  int v32;
  float v33;
  float v34;
  float v35;
  int v36;
  int v37;
  int v38;
  int v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v47;

  v32 = a3 / a2;
  if ( a3 / a2 >= 50 )
    v36 = a3 / a2;
  else
    v36 = 50;
  v35 = 1.0 - (float)(25.0 / (float)v36);
  v20 = 0.0;
  v31 = 0.0;
  v30 = 0.0;
  for ( i = 0; i < a2 - 3; i += 4 )
  {
    v11 = *(float *)(a1 + 8LL * i);
    v15 = *(float *)(a1 + 4LL * (2 * i + 1));
    v21 = v11 * v11;
    v24 = v11 * v15;
    v27 = v15 * v15;
    v12 = *(float *)(a1 + 4LL * (2 * i + 2));
    v16 = *(float *)(a1 + 4LL * (2 * i + 3));
    v22 = v21 + (float)(v12 * v12);
    v25 = v24 + (float)(v12 * v16);
    v28 = v27 + (float)(v16 * v16);
    v13 = *(float *)(a1 + 4LL * (2 * i + 4));
    v17 = *(float *)(a1 + 4LL * (2 * i + 5));
    v23 = v22 + (float)(v13 * v13);
    v26 = v25 + (float)(v13 * v17);
    v29 = v28 + (float)(v17 * v17);
    v14 = *(float *)(a1 + 4LL * (2 * i + 6));
    v18 = *(float *)(a1 + 4LL * (2 * i + 7));
    v30 = v30 + (float)(v23 + (float)(v14 * v14));
    v31 = v31 + (float)(v26 + (float)(v14 * v18));
    v20 = v20 + (float)(v29 + (float)(v18 * v18));
  }
  if ( v30 >= 1000000000.0 || v20 >= 1000000000.0 )
  {
    v20 = 0.0;
    v30 = 0.0;
    v31 = 0.0;
  }
  *a4 = *a4 + (float)(v35 * (float)(v30 - *a4));
  a4[1] = a4[1] + (float)(v35 * (float)(v31 - a4[1]));
  a4[2] = a4[2] + (float)(v35 * (float)(v20 - a4[2]));
  if ( *a4 >= 0.0 )
    v37 = *(_DWORD *)a4;
  else
    v37 = 0;
  *(_DWORD *)a4 = v37;
  if ( a4[1] >= 0.0 )
    v38 = *((_DWORD *)a4 + 1);
  else
    v38 = 0;
  *((_DWORD *)a4 + 1) = v38;
  if ( a4[2] >= 0.0 )
    v39 = *((_DWORD *)a4 + 2);
  else
    v39 = 0;
  *((_DWORD *)a4 + 2) = v39;
  if ( *a4 <= a4[2] )
    v40 = a4[2];
  else
    v40 = *a4;
  if ( v40 > 0.00079999998 )
  {
    v4 = sqrt(*a4);
    v33 = v4;
    v5 = sqrt(a4[2]);
    v34 = v5;
    v6 = sqrt(v33);
    v42 = v6;
    v7 = sqrt(v34);
    v43 = v7;
    if ( (float)(v33 * v34) <= a4[1] )
      v41 = v33 * v34;
    else
      v41 = a4[1];
    a4[1] = v41;
    v44 = a4[1] / (float)((float)(v33 * v34) + 1.0e-15);
    v8 = *(double *)SR_VEC_READ_LANES(128, sub_140244390((float)(v42 - v7)), u64);
    v47 = (float)(1.0 * v8) / (float)((float)(v42 + 1.0e-15) + v43);
    v9 = sqrt((float)(1.0 - (float)(v44 * v44)));
    a4[3] = a4[3] + (float)((float)((float)(v9 * v47) - a4[3]) / (float)v32);
    if ( (float)(a4[4] - (float)(0.02 / (float)v32)) <= a4[3] )
      v45 = a4[3];
    else
      v45 = a4[4] - (float)(0.02 / (float)v32);
    a4[4] = v45;
  }
  if ( (float)(20.0 * a4[4]) <= 1.0 )
    return 20.0 * a4[4];
  else
    return 1.0;
}

//----- (00000001401F53F0) ----------------------------------------------------
__int64            sub_1401F53F0(int a1, int a2, int a3, int a4, int *a5, int a6)
{
  int v7;
  int v8;
  int v9;
  int v10;

  if ( !a1 || !a2 || a4 == 1002 )
    return 0;
  v10 = *a5;
  while ( 1 )
  {
    v7 = dword_140279DF8[2 * *a5 - 2202];
    v8 = dword_140279DF8[2 * *a5 - 2201];
    if ( a3 == 1 )
      v7 -= v8;
    if ( !a3 )
      v7 += v8;
    if ( a2 >= 25 )
      v9 = 25;
    else
      v9 = a2;
    if ( a6 > (int)((655LL * (125 - v9) * v7) >> 16) )
      return 1;
    if ( a2 <= 5 )
      return 0;
    if ( *a5 <= 1101 )
      break;
    --*a5;
  }
  *a5 = v10;
  return 0;
}

//----- (00000001401F5530) ----------------------------------------------------
__int64            sub_1401F5530(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7;
  unsigned int v8;
  int i;
  int v10;
  int v11;
  int v12;

  v12 = a1 / a6;
  v10 = a3 + 2 * a5 + 1;
  for ( i = 1; i < 7 && dword_140301FF0[5 * i] <= v12; ++i )
    ;
  if ( i == 7 )
  {
    v7 = (v12 - dword_140301FF0[30]) / 2 + dword_140301FF0[v10 + 30];
  }
  else
  {
    v11 = dword_140301FF0[5 * i - 5];
    v7 = ((v12 - v11) * dword_140301FF0[5 * i + v10] + (dword_140301FF0[5 * i] - v12) * dword_140301FF0[5 * i - 5 + v10])
       / (dword_140301FF0[5 * i] - v11);
  }
  if ( !a4 )
    v7 += 100;
  if ( a2 == 1104 )
    v7 += 300;
  v8 = a6 * v7;
  if ( a6 == 2 && v12 >= 12000 )
    v8 -= 1000;
  return v8;
}

//----- (00000001401F5760) ----------------------------------------------------
__int64            sub_1401F5760(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8;
  unsigned int v9;

  v8 = a1;
  if ( a3 > 50 )
    v8 = a1 - (a3 - 50) * (40 * a2 + 20);
  if ( !a4 )
    v8 -= v8 / 12;
  v9 = (a6 + 90) * v8 / 100;
  if ( a5 == 1000 || a5 == 1001 )
  {
    if ( a6 < 2 )
      v9 = (int)(4 * v9) / 5;
    v9 -= (int)(a7 * v9) / (6 * a7 + 10);
  }
  else if ( a5 == 1002 )
  {
    if ( a6 < 5 )
      return (unsigned int)((int)(9 * v9) / 10);
  }
  else
  {
    v9 -= (int)(a7 * v9) / (12 * a7 + 20);
  }
  return v9;
}

//----- (00000001401F5870) ----------------------------------------------------
float            sub_1401F5870(__int64 a1, int a2, int a3)
{
  return sub_1401A9C00(a1, a1, a3 * a2) / (float)(a3 * a2);
}

//----- (00000001401F58C0) ----------------------------------------------------
__int64            sub_1401F58C0(float a1, int *a2, float a3, __int64 a4, int a5, int a6, BOOL a7)
{
  if ( !a7 && a1 < 0.1 )
    a7 = a3 >= (float)(316.23001 * sub_1401F5870(a4, a5, a6));
  if ( a7 )
  {
    if ( ++*a2 > 10 )
    {
      if ( *a2 <= 30 )
        return 1;
      *a2 = 10;
    }
  }
  else
  {
    *a2 = 0;
  }
  return 0;
}

//----- (00000001401F59A0) ----------------------------------------------------
__int64            sub_1401F59A0(int *a1, __int64 a2, int a3, int a4, _BYTE *a5, int a6, int a7, int a8, int a9)
{
  int v9;
  unsigned __int64 v10;
  void *v11;
  void *v12;
  _BYTE v14[384];
  int i;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  BOOL v24;
  int v25;
  BOOL v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  _BYTE *v34;
  char *v35;
  __int64 v36;

  v16 = 0;
  if ( a3 == 2 )
    v19 = 3;
  else
    v19 = 2 * a3;
  v22 = v19;
  if ( a1[37] || a1[41] == -1 )
  {
    v18 = a6;
  }
  else
  {
    v29 = 3 * a1[40];
    v9 = 24 * a1[36];
    v28 = a3 * a4;
    v30 = v9 / (a3 * a4);
    v20 = v29 / v30;
    if ( v29 / v30 >= a6 )
      v21 = a6;
    else
      v21 = v20;
    v18 = v21;
  }
  if ( (v18 - v22) / a3 + 1 <= 1276 )
    v23 = (v18 - v22) / a3 + 1;
  else
    v23 = 1276;
  v17 = v23;
  v10 = v23 * a3 + 15LL;
  if ( v10 <= v23 * a3 )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
  v35 = (char *)v11;
  v12 = alloca(496);
  v34 = v12;
  sub_1401E37F0((__int64)v14);
  v31 = a1[34];
  v32 = a1[32];
  v33 = a1[30];
  a1[34] = a1[3556];
  a1[32] = a1[3560];
  a1[30] = a1[3548];
  v27 = a1[17];
  if ( v27 )
    a1[30] = 1;
  else
    a1[3558] = a1[3548];
  for ( i = 0; i < a3; ++i )
  {
    a1[17] = 0;
    v24 = i < a3 - 1;
    a1[4534] = v24;
    if ( a7 && i == a3 - 1 )
      a1[34] = 1002;
    v25 = sub_1401E5400(
            a1,
            a2 + 4LL * a4 * a1[28] * i,
            a4,
            (__m128i *)&v35[v17 * i],
            v17,
            a8,
            0,
            0,
            0,
            0,
            0,
            nullptr,
            a9);
    if ( v25 < 0 )
      return (unsigned int)-3; /* 0x1401F5D06: mov eax, 0xfffffffd */
    v16 = sub_1401E3870((__int64)v34, &v35[v17 * i], v25);
    if ( v16 < 0 )
      return (unsigned int)-3; /* 0x1401F5D3C: mov eax, 0xfffffffd */
  }
  v26 = a1[37] == 0;
  v16 = sub_1401EA090((__int64)v34, 0, a3, a5, v18, 0, v26);
  if ( v16 >= 0 )
  {
    a1[34] = v31;
    a1[32] = v32;
    a1[30] = v33;
    a1[17] = v27;
  }
  return (unsigned int)(v16 < 0 ? -3 : v16); /* 0x1401F5DA3: mov eax, 0xfffffffd when [rbp + 4] < 0, else 0x1401F5DE4: mov eax, dword ptr [rbp + 4] */
}

//----- (00000001401F5E00) ----------------------------------------------------
__int64            sub_1401F5E00(int a1, int a2, int a3, int a4)
{
  int v6;

  if ( 3 * ((200 - a3) * (40 * a4 + 20) + a2) / 2 / 1600 >= (40 * a4
                                                           + 20
                                                           + 240 * (8 * a1 - 2 * (40 * a4 + 20)) / (48000 / a3 + 240))
                                                          / 8 )
    v6 = (40 * a4 + 20 + 240 * (8 * a1 - 2 * (40 * a4 + 20)) / (48000 / a3 + 240)) / 8;
  else
    v6 = 3 * ((200 - a3) * (40 * a4 + 20) + a2) / 2 / 1600;
  if ( v6 <= 8 * a4 + 4 )
  {
    return 0;
  }
  else if ( v6 <= 257 )
  {
    return (unsigned int)v6;
  }
  else
  {
    return 257;
  }
}

//----- (00000001401F5F20) ----------------------------------------------------
__int64            sub_1401F5F20(char *a1, int a2, int a3, int a4)
{
  __int64 v5;
  int i;
  _BYTE v7[4];
  int v8;
  int v9;
  BOOL v10;
  int v11;
  int v12;
  __int16 v13[48];
  __int64 v14;

  v9 = 0;
  for ( i = 0; i < a3; ++i )
  {
    if ( a2 <= 0 )
      return (unsigned int)-4; /* 0x1401F5F83: mov eax, 0xfffffffc */
    v10 = i != a3 - 1;
    v11 = sub_1401E99E0(a1, a2, v10, v7, 0, v13, nullptr, &v8);
    if ( v11 < 0 )
      return (unsigned int)v11; /* 0x1401F5FFD: mov eax, dword ptr [rsp + 0x54] */
    v12 = sub_1401E2F80(a1, v8, a4);
    if ( i )
    {
      if ( v9 != v12 )
        return (unsigned int)-4; /* 0x1401F6031: mov eax, 0xfffffffc */
    }
    v9 = v12;
    a1 += v8;
    a2 -= v8;
  }
  return (unsigned int)v9; /* 0x1401F6076: mov eax, dword ptr [rsp + 0x4c] */
}

//----- (00000001401F60A0) ----------------------------------------------------
__int64            sub_1401F60A0(__int64 a1, int a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 result;
  signed int i;
  signed int j;

  if ( a4 )
  {
    for ( i = 0; ; ++i )
    {
      result = a6;
      if ( i >= (int)a6 )
        break;
      *(_DWORD *)(a1 + 4LL * (a3 + a2 * i)) = *(_DWORD *)(a4 + 4LL * a5 * i);
    }
  }
  else
  {
    for ( j = 0; ; ++j )
    {
      result = a6;
      if ( j >= (int)a6 )
        break;
      *(_DWORD *)(a1 + 4LL * (a3 + a2 * j)) = 0;
    }
  }
  return result;
}

//----- (00000001401F6160) ----------------------------------------------------
__int64            sub_1401F6160(__int64 a1, int a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 result;
  signed int i;
  signed int j;

  if ( a4 )
  {
    for ( i = 0; ; ++i )
    {
      result = a6;
      if ( i >= (int)a6 )
        break;
      *(_WORD *)(a1 + 2LL * (a3 + a2 * i)) = sub_1401AD3E0(*(float *)(a4 + 4LL * a5 * i));
    }
  }
  else
  {
    for ( j = 0; ; ++j )
    {
      result = a6;
      if ( j >= (int)a6 )
        break;
      *(_WORD *)(a1 + 2LL * (a3 + a2 * j)) = 0;
    }
  }
  return result;
}

//----- (00000001401F6230) ----------------------------------------------------
char *           sub_1401F6230(_DWORD *a1)
{
  int i;
  int v3;
  int v4;
  char *v5;

  v3 = sub_1401E06F0(2);
  v4 = sub_1401E06F0(1);
  v5 = (char *)a1 + (int)sub_1401E99B0(292);
  for ( i = 0; i < a1[1]; ++i )
  {
    if ( i >= a1[2] )
      v5 += (int)sub_1401E99B0(v4);
    else
      v5 += (int)sub_1401E99B0(v3);
  }
  return &v5[480 * *a1];
}

//----- (00000001401F6300) ----------------------------------------------------
__int64            sub_1401F6300(__int64 a1)
{
  int i;
  int v3;
  int v4;
  __int64 v5;

  v3 = sub_1401E06F0(2);
  v4 = sub_1401E06F0(1);
  v5 = (int)sub_1401E99B0(292) + a1;
  for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
  {
    if ( i >= *(_DWORD *)(a1 + 8) )
      v5 += (int)sub_1401E99B0(v4);
    else
      v5 += (int)sub_1401E99B0(v3);
  }
  return v5;
}

//----- (00000001401F63C0) ----------------------------------------------------
__int64            sub_1401F63C0(signed int a1, _DWORD *a2, _DWORD *a3)
{
  int v4;
  int v5;

  if ( a1 < 1 || a1 > 227 )
    return 0;
  v5 = sub_1401A6AE0(a1);
  v4 = a1 - v5 * v5;
  if ( v4 && v4 != 2 )
    return 0;
  if ( a2 )
    *a2 = (a1 != v5 * v5) + v5 * v5;
  if ( a3 )
    *a3 = a1 != v5 * v5;
  return 1;
}

//----- (00000001401F64A0) ----------------------------------------------------
__int64            sub_1401F64A0(int *a1)
{
  int i;

  for ( i = 0; i < a1[1]; ++i )
  {
    if ( i >= a1[2] )
    {
      if ( (unsigned int)sub_1401E4DF0(a1, i, -1) == -1 )
        return 0;
    }
    else
    {
      if ( (unsigned int)sub_1401E4CF0(a1, i, -1) == -1 )
        return 0;
      if ( (unsigned int)sub_1401E4D70(a1, i, -1) == -1 )
        return 0;
    }
  }
  return 1;
}

//----- (00000001401F6550) ----------------------------------------------------
__int64            sub_1401F6550(int a1, _DWORD *a2)
{
  __int64 result;

  switch ( a1 )
  {
    case 4:
      *a2 = 1;
      a2[1] = 3;
      a2[2] = 1;
      a2[3] = 3;
      return 12;
    case 3:
    case 5:
    case 6:
      *a2 = 1;
      a2[1] = 2;
      a2[2] = 3;
      a2[3] = 1;
      a2[4] = 3;
      a2[5] = 0;
      return 20;
    case 7:
      *a2 = 1;
      a2[1] = 2;
      a2[2] = 3;
      a2[3] = 1;
      a2[4] = 3;
      a2[5] = 2;
      a2[6] = 0;
      return 24;
    case 8:
      *a2 = 1;
      a2[1] = 2;
      a2[2] = 3;
      a2[3] = 1;
      a2[4] = 3;
      a2[5] = 1;
      a2[6] = 3;
      a2[7] = 0;
      return 28;
  }
  return result;
}

//----- (00000001401F67C0) ----------------------------------------------------
float            sub_1401F67C0(float a1, float a2)
{
  float v3;
  int v4;
  float v5;

  if ( a1 <= a2 )
  {
    v5 = a2;
    v3 = a2 - a1;
  }
  else
  {
    v5 = a1;
    v3 = a1 - a2;
  }
  if ( v3 >= 8.0 )
    return v5;
  v4 = (int)floor((float)(2.0 * v3));
  return (float)(v5 + flt_140281F40[v4])
       + (float)((float)((float)(2.0 * v3) - (float)v4) * (float)(flt_140281F40[v4 + 1] - flt_140281F40[v4]));
}

//----- (00000001401F68D0) ----------------------------------------------------
__int64            sub_1401F68D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void (           *a10)(int *, __int64, __int64, _QWORD, int, int, _QWORD, int),
        int a11)
{
  unsigned __int64 v11;
  void *v12;
  unsigned __int64 v13;
  void *v14;
  unsigned __int64 v15;
  void *v16;
  int v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  int v24;
  int k;
  int j;
  int v27;
  int i;
  int v29;
  int m;
  int v31;
  __m128i *v32;
  float v33;
  int v34;
  float v35;
  float v36;
  float v37;
  int v38;
  float *v39;
  int v40;
  int v41;
  float v42;
  int *v43;
  __int64 v44;
  __int64 v45;
  __m128i *v46;
  _DWORD *v47;
  _DWORD v48[72];
  float v49[24];
  float v50[24];
  __int64 v51;

  memset(v48, 0, 0x20u);
  v29 = sub_1401A0850(a9);
  v27 = v29 * a6;
  if ( v29 * a6 <= 960 )
    v34 = v27;
  else
    v34 = 960;
  v31 = v34;
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
  {
    v44 = a1;
    if ( *(_DWORD *)(a1 + 48) << i == v27 )
      break;
  }
  v11 = 4LL * (a7 + v27) + 15;
  if ( v11 <= 4LL * (a7 + v27) )
    v11 = 0xFFFFFFFFFFFFFF0LL;
  v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
  v32 = (__m128i *)v12;
  v13 = 4LL * a6 + 15;
  if ( v13 <= 4LL * a6 )
    v13 = 0xFFFFFFFFFFFFFF0LL;
  v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
  v43 = v14;
  v15 = 4LL * v31 + 15;
  if ( v15 <= 4LL * v31 )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
  v39 = (float *)v16;
  sub_1401F6550(a8, v48);
  for ( j = 0; j < 3; ++j )
  {
    for ( k = 0; k < 21; ++k )
      v48[21 * j + 8 + k] = -1042284544;
  }
  for ( j = 0; j < a8; ++j )
  {
    v40 = v27 / v31;
    crt_memcpy(v32, (     __m128i *)(a4 + 4LL * a7 * j), 4LL * a7);
    a10(v43, 1, a2, (unsigned int)a8, j, a6, 0, v24);
    sub_1401A08E0((__int64)v43, &SR_VEC_PTR_LANES(128, v32, i16)[2 * a7], v27, 1, v29, (float *)(a1 + 16), (float *)(a5 + 4LL * j), 0);
    v33 = sub_1401A9C00((__int64)v32, (__int64)v32, a7 + v27);
    if ( v33 >= 9.9999998e17 )
    {
      crt_memset((void *)(uintptr_t)(v32), 0, 4LL * (a7 + v27));
      *(_DWORD *)(a5 + 4LL * j) = 0;
    }
    crt_memset((void *)(uintptr_t)(v49), 0, 0x54u);
    for ( m = 0; m < v40; ++m )
    {
      v17 = *(_DWORD *)(a1 + 40) - i;
      v45 = a1 + 80;
      v24 = a11;
      sub_1401A1860(a1 + 80, (__int64)SR_VEC_LANES(128, v32[240 * m], i64), v39, *(float **)(a1 + 72), a7, v17, 1);
      if ( v29 != 1 )
      {
        v41 = v31 / v29;
        for ( k = 0; k < v41; ++k )
          v39[k] = v39[k] * (float)v29;
        while ( k < v31 )
          v39[k++] = 0.0;
      }
      sub_1401A3450(a1, (__int64)v39, (__int64)v50, 21, 1u, i);
      for ( k = 0; k < 21; ++k )
      {
        if ( v49[k] <= v50[k] )
          v35 = v50[k];
        else
          v35 = v49[k];
        v49[k] = v35;
      }
    }
    sub_1401A6EA0(a1, 21, 21, (__int64)v49, a3 + 84LL * j, 1u);
    for ( k = 1; k < 21; ++k )
    {
      if ( *(float *)(a3 + 4LL * (k + 21 * j)) <= (float)(*(float *)(a3 + 4LL * (21 * j + k - 1)) - 1.0) )
        v36 = *(float *)(a3 + 4LL * (21 * j + k - 1)) - 1.0;
      else
        v36 = *(float *)(a3 + 4LL * (k + 21 * j));
      *(float *)(a3 + 4LL * (k + 21 * j)) = v36;
    }
    for ( k = 19; k >= 0; --k )
    {
      if ( *(float *)(a3 + 4LL * (k + 21 * j)) <= (float)(*(float *)(a3 + 4LL * (21 * j + k + 1)) - 2.0) )
        v37 = *(float *)(a3 + 4LL * (21 * j + k + 1)) - 2.0;
      else
        v37 = *(float *)(a3 + 4LL * (k + 21 * j));
      *(float *)(a3 + 4LL * (k + 21 * j)) = v37;
    }
    switch ( v48[j] )
    {
      case 1:
        for ( k = 0; k < 21; ++k )
        {
          v18 = sub_1401F67C0(*(float *)&v48[k + 8], *(float *)(a3 + 4LL * (k + 21 * j)));
          *(float *)&v48[k + 8] = v18;
        }
        break;
      case 3:
        for ( k = 0; k < 21; ++k )
        {
          v19 = sub_1401F67C0(*(float *)&v48[k + 50], *(float *)(a3 + 4LL * (k + 21 * j)));
          *(float *)&v48[k + 50] = v19;
        }
        break;
      case 2:
        for ( k = 0; k < 21; ++k )
        {
          v20 = sub_1401F67C0(*(float *)&v48[k + 8], *(float *)(a3 + 4LL * (k + 21 * j)) - 0.5);
          *(float *)&v48[k + 8] = v20;
          v21 = sub_1401F67C0(*(float *)&v48[k + 50], *(float *)(a3 + 4LL * (k + 21 * j)) - 0.5);
          *(float *)&v48[k + 50] = v21;
        }
        break;
    }
    v46 = (__m128i *)(a4 + 4LL * a7 * j);
    crt_memcpy(v46, (__m128i *)((char *)v32 + 4 * v27), 4LL * a7);
  }
  for ( k = 0; k < 21; ++k )
  {
    if ( *(float *)&v48[k + 50] <= *(float *)&v48[k + 8] )
      v38 = v48[k + 50];
    else
      v38 = v48[k + 8];
    v48[k + 29] = v38;
  }
  v22 = 1.442695040888963 * log((float)(2.0 / (float)(a8 - 1)));
  v42 = 0.5 * v22;
  for ( j = 0; j < 3; ++j )
  {
    for ( k = 0; k < 21; ++k )
      *(float *)&v48[21 * j + 8 + k] = *(float *)&v48[21 * j + 8 + k] + v42;
  }
  for ( j = 0; j < a8; ++j )
  {
    if ( v48[j] )
    {
      v47 = &v48[21 * v48[j] - 13];
      for ( k = 0; k < 21; ++k )
        *(float *)(a3 + 4LL * (k + 21 * j)) = *(float *)(a3 + 4LL * (k + 21 * j)) - *(float *)&v47[k];
    }
    else
    {
      for ( k = 0; k < 21; ++k )
        *(_DWORD *)(a3 + 4LL * (k + 21 * j)) = 0;
    }
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401F7450) ----------------------------------------------------
__int64            sub_1401F7450(int *a1, int a2, int a3, int a4, int a5, __int64 a6, int a7, int a8)
{
  char *v9;
  _WORD *v10;
  int i;
  int j;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  int *v17;

  if ( a3 > 255 || a3 < 1 || a5 > a4 || a4 < 1 || a5 < 0 || a4 > 255 - a5 )
    return 0xFFFFFFFFLL;
  a1[67] = sub_1401A13B0();
  *a1 = a3;
  a1[1] = a4;
  a1[2] = a5;
  if ( a8 != 1 )
    a1[68] = -1;
  a1[72] = -1000;
  a1[69] = a7;
  a1[70] = 5000;
  for ( i = 0; i < *a1; ++i )
    *((_BYTE *)a1 + i + 12) = *(_BYTE *)(a6 + i);
  if ( !(unsigned int)sub_1401E4C60(a1) )
    return 0xFFFFFFFFLL;
  if ( a8 == 1 && !(unsigned int)sub_1401F64A0(a1) )
    return 0xFFFFFFFFLL;
  if ( a8 == 2 && !(unsigned int)sub_1401F63C0(*a1, nullptr, nullptr) )
    return 0xFFFFFFFFLL;
  v17 = (int *)((char *)a1 + (int)sub_1401E99B0(292));
  v15 = sub_1401E06F0(2);
  v16 = sub_1401E06F0(1);
  for ( j = 0; j < a1[2]; ++j )
  {
    v13 = sub_1401E0880(v17, a2, 2, a7);
    if ( v13 )
      return v13;
    if ( j == a1[68] )
      sub_1401E0F40(v17, 10024, 1);
    v17 = (int *)((char *)v17 + (int)sub_1401E99B0(v15));
  }
  while ( j < a1[1] )
  {
    v14 = sub_1401E0880(v17, a2, 1, a7);
    if ( j == a1[68] )
      sub_1401E0F40(v17, 10024, 1);
    if ( v14 )
      return v14;
    v17 = (int *)((char *)v17 + (int)sub_1401E99B0(v16));
    ++j;
  }
  if ( a8 == 1 )
  {
    v9 = sub_1401F6230(a1);
    crt_memset((void *)(uintptr_t)(v9), 0, 4LL * a3);
    v10 = (_WORD *)sub_1401F6300((__int64)a1);
    crt_memset((void *)(uintptr_t)(v10), 0, 480LL * a3);
  }
  a1[71] = a8;
  return 0;
}

//----- (00000001401F77C0) ----------------------------------------------------
__int64            sub_1401F77C0(_DWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 result;
  int v5;
  int i;
  BOOL v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v7 = a1[68] != -1;
  v12 = a1[2];
  v10 = a1[1] - v12 - v7 + 2 * v12;
  if ( a4 / a3 >= 50 )
    v14 = a4 / a3;
  else
    v14 = 50;
  v11 = 40 * v14;
  if ( a1[72] == -1000 )
  {
    v8 = 8000 * v7 + (v11 + a4 + 10000) * v10;
  }
  else if ( a1[72] == -1 )
  {
    v8 = 128000 * v7 + 300000 * v10;
  }
  else
  {
    v8 = a1[72];
  }
  if ( v8 / 20 >= 3000 )
    v16 = 3000;
  else
    v16 = v8 / 20;
  if ( a4 / a3 >= 50 )
    v15 = a4 / a3;
  else
    v15 = 50;
  v13 = 15 * v15 + v16;
  v5 = (v8 - v10 * v11 - v7 * v13) / v10 / 2;
  if ( v5 <= 20000 )
    v17 = (v8 - v10 * v11 - v7 * (15 * v15 + v16)) / v10 / 2;
  else
    v17 = 20000;
  if ( v17 >= 0 )
  {
    if ( v5 <= 20000 )
      v18 = (v8 - v10 * v11 - v7 * (15 * v15 + v16)) / v10 / 2;
    else
      v18 = 20000;
    v19 = v18;
  }
  else
  {
    v19 = 0;
  }
  v9 = ((__int64)(v8 - v7 * v13 - (a1[1] - v7) * v19 - v10 * v11) << 8)
     / (32 * v7 + (v12 << 9) + ((a1[1] - v12 - v7) << 8));
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)a1[1];
    if ( i >= (int)result )
      break;
    if ( i >= a1[2] )
    {
      if ( i == a1[68] )
      {
        if ( (char)(v9 >> 3) + v13 >= 0 )
          v22 = (char)(v9 >> 3) + v13;
        else
          v22 = 0;
        *(_DWORD *)(a2 + 4LL * i) = v22;
      }
      else
      {
        if ( v9 + v19 >= 0 )
          v21 = v9 + v19;
        else
          v21 = 0;
        *(_DWORD *)(a2 + 4LL * i) = v21 + v11;
      }
    }
    else
    {
      if ( (v9 << 9 >> 8) + v19 >= 0 )
        v20 = (v9 << 9 >> 8) + v19;
      else
        v20 = 0;
      *(_DWORD *)(a2 + 4LL * i) = v20 + 80 * v14;
    }
  }
  return result;
}

//----- (00000001401F7B80) ----------------------------------------------------
__int64            sub_1401F7B80(_DWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 result;
  int i;
  int v6;
  int v7;

  if ( a1[72] == -1000 )
  {
    v6 = 15000 * a1[1] + (60 * a4 / a3 + a4) * (a1[1] + a1[2]);
  }
  else if ( a1[72] == -1 )
  {
    v6 = 320000 * (a1[2] + a1[1]);
  }
  else
  {
    v6 = a1[72];
  }
  v7 = v6 / a1[1];
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)a1[1];
    if ( i >= (int)result )
      break;
    *(_DWORD *)(a2 + 4LL * i) = v7;
  }
  return result;
}

//----- (00000001401F7C80) ----------------------------------------------------
__int64            sub_1401F7C80(_DWORD *a1, __int64 a2, int a3)
{
  int i;
  int v5;
  unsigned int v6;
  int v7;
  int *v8;

  v6 = 0;
  v8 = (_DWORD *)((char *)a1 + (int)sub_1401E99B0(292));
  sub_1401E0F40(v8, 4029, &v5);
  if ( a1[71] == 2 )
    sub_1401F7B80(a1, a2, a3, v5);
  else
    sub_1401F77C0(a1, a2, a3, v5);
  for ( i = 0; i < a1[1]; ++i )
  {
    if ( *(int *)(a2 + 4LL * i) <= 500 )
      v7 = 500;
    else
      v7 = *(_DWORD *)(a2 + 4LL * i);
    *(_DWORD *)(a2 + 4LL * i) = v7;
    v6 += *(_DWORD *)(a2 + 4LL * i);
  }
  return v6;
}

//----- (00000001401F7DB0) ----------------------------------------------------
__int64            sub_1401F7DB0(__int64 a1, int a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  __int64 result;
  signed int i;

  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    *(_DWORD *)(a1 + 4LL * a2 * i) = *(_DWORD *)(a3 + 4LL * (a5 + a4 * i));
  }
  return result;
}

//----- (00000001401F7E30) ----------------------------------------------------
__int64            sub_1401F7E30(__int64 a1, int a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  __int64 result;
  signed int i;

  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    *(float *)(a1 + 4LL * a2 * i) = 0.000030517578 * (float)*(__int16 *)(a3 + 2LL * (a5 + a4 * i));
  }
  return result;
}

//----- (00000001401F7EC0) ----------------------------------------------------
_DWORD *           sub_1401F7EC0(_WORD *a1, int a2, int a3, __int64 a4, int a5, unsigned int a6, _DWORD *a7)
{
  _DWORD *result;

  result = a7;
  if ( !a3 )
    result = crt_memset((void *)(uintptr_t)(a1), 0, 4LL * (int)(a2 * a6));
  if ( a4 )
    return (_DWORD *)sub_1401F2380(a7, a4, a3, a5, (__int64)a1, a2, a6);
  return result;
}

//----- (00000001401F7F70) ----------------------------------------------------
_DWORD *           sub_1401F7F70(_WORD *a1, int a2, int a3, __int64 a4, int a5, unsigned int a6, _DWORD *a7)
{
  _DWORD *result;

  result = a7;
  if ( !a3 )
    result = crt_memset((void *)(uintptr_t)(a1), 0, 2LL * (int)(a2 * a6));
  if ( a4 )
    return (_DWORD *)sub_1401F2590(a7, a4, a3, a5, (__int64)a1, a2, a6);
  return result;
}

//----- (00000001401F8020) ----------------------------------------------------
__int64            sub_1401F8020(__int64 a1)
{
  return (int)sub_1401E99B0(4) + a1;
}

//----- (00000001401F8050) ----------------------------------------------------
char *           sub_1401F8050(_DWORD *a1)
{
  return (char *)a1 + (int)sub_1401E99B0(*a1 + 4);
}

//----- (00000001401F8090) ----------------------------------------------------
__int64            sub_1401F8090(__int64 a1, int a2, __int64 a3, int a4, int a5, unsigned int a6, _DWORD *a7)
{
  return sub_1401F2280(a7, a3, a4, a1, a5, a2, a6);
}

//----- (00000001401F80F0) ----------------------------------------------------
__int64            sub_1401F80F0(__int64 a1, int a2, __int64 a3, int a4, int a5, unsigned int a6, _DWORD *a7)
{
  return sub_1401F2490(a7, a3, a4, a1, a5, a2, a6);
}

//----- (00000001401F8150) ----------------------------------------------------
__int64            sub_1401F8150(signed int a1, _DWORD *a2)
{
  int v3;
  int v4;

  if ( a1 < 1 || a1 > 227 )
    return 0xFFFFFFFFLL;
  v3 = sub_1401A6AE0(a1);
  v4 = a1 - v3 * v3;
  if ( v4 && v4 != 2 )
    return 0xFFFFFFFFLL;
  if ( a2 )
    *a2 = v3;
  return 0;
}

//----- (00000001401F81E0) ----------------------------------------------------
__int64            sub_1401F81E0(signed int a1, int a2, int *a3, int *a4, _DWORD *a5)
{
  if ( a2 != 3 )
    return 0xFFFFFFFFLL;
  if ( (unsigned int)sub_1401F8150(a1, a5) )
    return 0xFFFFFFFFLL;
  if ( a3 )
    *a3 = (a1 + 1) / 2;
  if ( a4 )
    *a4 = a1 / 2;
  return 0;
}

//----- (00000001401F8260) ----------------------------------------------------
__int64            sub_1401F8260(__int64 a1)
{
  return (int)sub_1401E99B0(8) + a1;
}

//----- (00000001401F8290) ----------------------------------------------------
char *           sub_1401F8290(_DWORD *a1)
{
  return (char *)a1 + (int)sub_1401E99B0(*a1 + 8);
}

//----- (00000001401F82D0) ----------------------------------------------------
char *           sub_1401F82D0(_DWORD *a1)
{
  return (char *)a1 + (int)sub_1401E99B0(*a1 + a1[1] + 8);
}

//----- (00000001401F8310) ----------------------------------------------------
__int64            sub_1401F8310(__int64 a1, char *a2, int a3, int a4)
{
  _BYTE v5[4];
  int v6;
  int v7;

  if ( a3 < 1 )
    return 4294967292LL;
  if ( *(_DWORD *)(a1 + 4) )
  {
    if ( (*(_BYTE *)a1 & 0xFC) != (*a2 & 0xFC) )
      return 4294967292LL;
  }
  else
  {
    *(_BYTE *)a1 = *a2;
    *(_DWORD *)(a1 + 488) = sub_1401E2D90(a2, 8000);
  }
  v6 = sub_1401E2EF0(a2, a3);
  if ( v6 < 1 )
    return 4294967292LL;
  if ( *(_DWORD *)(a1 + 488) * (*(_DWORD *)(a1 + 4) + v6) > 960 )
    return 4294967292LL;
  v7 = sub_1401E99E0(
         a2,
         a3,
         a4,
         v5,
         a1 + 8LL * *(int *)(a1 + 4) + 8,
         (__int16 *)(a1 + 2LL * *(int *)(a1 + 4) + 392),
         nullptr,
         nullptr);
  if ( v7 < 1 )
    return (unsigned int)v7;
  *(_DWORD *)(a1 + 4) += v6;
  return 0;
}

//----- (00000001401F8490) ----------------------------------------------------
__int64            sub_1401F8490(unsigned __int8 *a1, int a2, _WORD *a3)
{
  if ( a2 >= 1 )
  {
    if ( *a1 >= 0xFCu )
    {
      if ( a2 >= 2 )
      {
        *a3 = *a1 + 4 * a1[1];
        return 2;
      }
      else
      {
        *a3 = -1;
        return 0xFFFFFFFFLL;
      }
    }
    else
    {
      *a3 = *a1;
      return 1;
    }
  }
  else
  {
    *a3 = -1;
    return 0xFFFFFFFFLL;
  }
}

//----- (00000001401F858C) ----------------------------------------------------
__int64            sub_1401F858C(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  __int64 v2;

  ((void (           *)(_QWORD))SetUnhandledExceptionFilter)(0);
  ((void (           *)(struct _EXCEPTION_POINTERS *))UnhandledExceptionFilter)(ExceptionInfo);
  v2 = ((__int64 (*)(void))GetCurrentProcess)();
  return ((__int64 (           *)(__int64, __int64))TerminateProcess)(v2, 3221226505LL);
}

// 14026E2C0: invalid function type 'LPTOP_LEVEL_EXCEPTION_FILTER (__stdcall *SetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)' has been ignored
// 14026E2C8: invalid function type 'LONG (__stdcall *UnhandledExceptionFilter)(struct _EXCEPTION_POINTERS *ExceptionInfo)' has been ignored
// 14026E318: invalid function type 'HANDLE (__stdcall *GetCurrentProcess)()' has been ignored
// 14026E2B8: invalid function type 'BOOL (__stdcall *TerminateProcess)(HANDLE hProcess, UINT uExitCode)' has been ignored

//----- (00000001401F85C0) ----------------------------------------------------
__int64            sub_1401F85C0(__int64 a1)
{
  _UNKNOWN *retaddr;
  __int64 v3;

  v3 = a1;
  if ( (unsigned int)sub_1401FC5EA() )
    __fastfail(2u);
  sub_1401F88C4((__int64)&g_144CBDFF0);
  g_144CBE0E8 = (uint64)(uintptr_t)(retaddr);
  g_144CBE088 = (uint64)(uintptr_t)(&v3);
  g_144CBDF60 = (uint64)(uintptr_t)(retaddr);
  g_144CBE070 = v3;
  g_144CBDF50 = -1073740791;
  g_144CBDF54 = 1;
  g_144CBDF68 = 1;
  g_144CBDF70 = 2;
  return sub_1401F858C((struct _EXCEPTION_POINTERS *)&off_1402833B8);
}

// 1401F85C0: invalid function type 'void __cdecl __noreturn sub_1401F85C0(uintptr_t StackCookie)' has been ignored

//----- (00000001401F8694) ----------------------------------------------------
void __attribute__((noreturn)) sub_1401F8694()
{
  sub_1401F86A8(8u);
}

//----- (00000001401F86A8) ----------------------------------------------------
__int64            sub_1401F86A8(unsigned int a1)
{
  _UNKNOWN *retaddr;
  unsigned int v3;

  v3 = a1;
  if ( (unsigned int)sub_1401FC5EA() )
    __fastfail(v3);
  capture_current_context_sr((__int64)&g_144CBDFF0);
  g_144CBE0E8 = (uint64)(uintptr_t)(retaddr);
  g_144CBE088 = (uint64)(uintptr_t)(&v3);
  g_144CBDF60 = (uint64)(uintptr_t)(retaddr);
  g_144CBDF50 = -1073740791;
  g_144CBDF54 = 1;
  g_144CBDF68 = 1;
  g_144CBDF70 = v3;
  return sub_1401F858C((struct _EXCEPTION_POINTERS *)&off_1402833B8);
}

//----- (00000001401F8744) ----------------------------------------------------
__int64            sub_1401F8744(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int i;
  _UNKNOWN *retaddr;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;

  v8 = a3;
  v7 = a2;
  v6 = a1;
  if ( (unsigned int)sub_1401FC5EA() )
    __fastfail(v6);
  capture_current_context_sr((__int64)&g_144CBDFF0);
  g_144CBE0E8 = (uint64)(uintptr_t)(retaddr);
  g_144CBE088 = (uint64)(uintptr_t)(&v6);
  g_144CBDF60 = (uint64)(uintptr_t)(retaddr);
  g_144CBDF50 = -1073740791;
  g_144CBDF54 = 1;
  if ( v7 && !v8 )
    v7 = 0;
  if ( v7 > 0xE )
    --v7;
  g_144CBDF68 = v7 + 1;
  g_144CBDF70 = v6;
  for ( i = 0; i < v7; ++i )
    *(_QWORD *)&dword_140404A6C[2 * i + 19064131] = *(_QWORD *)(v8 + 8LL * i);
  return sub_1401F858C((struct _EXCEPTION_POINTERS *)&off_1402833B8);
}

//----- (00000001401F8854) ----------------------------------------------------
__int64            capture_current_context_sr(__int64 a1)
{
  __int64 v2;
  __int64 result;
  unsigned __int64 ImageBase;
  unsigned __int64 v5;
  __int64 v6;

  ((void (*)(void))RtlCaptureContext)();
  v2 = *(_QWORD *)(a1 + 248);
  result = ((__int64 (           *)(__int64, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(v2, &ImageBase, 0);
  if ( result )
    return ((__int64 (           *)(_QWORD, unsigned __int64, __int64, __int64, __int64, __int64 *, unsigned __int64 *, _QWORD))RtlVirtualUnwind)(
             0,
             ImageBase,
             v2,
             result,
             a1,
             &v6,
             &v5,
             0);
  return result;
}

// 14026E2E0: invalid function type 'void (__stdcall *RtlCaptureContext)(PCONTEXT ContextRecord)' has been ignored
// 14026E2D8: invalid function type 'PRUNTIME_FUNCTION (__stdcall *RtlLookupFunctionEntry)(ULONG64 ControlPc, PULONG64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored
// 14026E2D0: invalid function type 'PEXCEPTION_ROUTINE (__stdcall *RtlVirtualUnwind)(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)' has been ignored

//----- (00000001401F88C4) ----------------------------------------------------
__int64            sub_1401F88C4(__int64 a1)
{
  __int64 v2;
  int i;
  __int64 result;
  unsigned __int64 ImageBase;
  unsigned __int64 v6;
  __int64 v7;

  ((void (*)(void))RtlCaptureContext)();
  v2 = *(_QWORD *)(a1 + 248);
  for ( i = 0; i < 2; ++i )
  {
    result = ((__int64 (           *)(__int64, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(v2, &ImageBase, 0);
    if ( !result )
      break;
    result = ((__int64 (           *)(_QWORD, unsigned __int64, __int64, __int64, __int64, __int64 *, unsigned __int64 *, _QWORD))RtlVirtualUnwind)(
               0,
               ImageBase,
               v2,
               result,
               a1,
               &v7,
               &v6,
               0);
  }
  return result;
}

// 14026E2E0: invalid function type 'void (__stdcall *RtlCaptureContext)(PCONTEXT ContextRecord)' has been ignored
// 14026E2D8: invalid function type 'PRUNTIME_FUNCTION (__stdcall *RtlLookupFunctionEntry)(ULONG64 ControlPc, PULONG64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored
// 14026E2D0: invalid function type 'PEXCEPTION_ROUTINE (__stdcall *RtlVirtualUnwind)(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)' has been ignored

//----- (00000001401F8938) ----------------------------------------------------
__int64            sub_1401F8938(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  sub_1401F8958(a2, a4, *(_QWORD *)(a4 + 56));
  return 1;
}

//----- (00000001401F8958) ----------------------------------------------------
__int64            sub_1401F8958(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;

  v3 = a1;
  v4 = a1;
  if ( (*(_BYTE *)a3 & 4) != 0 )
    v4 = -*(_DWORD *)(a3 + 8) & (a1 + *(int *)(a3 + 4));
  v5 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 8LL);
  v6 = *(_QWORD *)(a2 + 8);
  if ( (*(_BYTE *)(v5 + v6 + 3) & 0xF) != 0 )
    v3 += *(_BYTE *)(v5 + v6 + 3) & 0xF0;
  return sub_1401F8B20(*(_QWORD *)((int)(*(_DWORD *)a3 & 0xFFFFFFF8) + v4) ^ v3);
}

//----- (00000001401F89D0) ----------------------------------------------------
unsigned __int64 __usercall  _chkstk/* rax */(unsigned __int64 size/* rax */)
{
  char *v1;
  char *v2;
  char v3;

  v1 = &v3 - size;
  if ( (unsigned __int64)&v3 < size )
    v1 = nullptr;
  v2 = (char *)__readgsqword(0x10u);
  if ( v1 < v2 )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
    {
      v2 -= 4096;
      *v2 = 0;
    }
    while ( v1 != v2 );
  }
  return size;
}

//----- (00000001401F8A50)
__m128d sub_1401F8A50(double a1, __int64 a2, double a3) {
  uint64_t bits; __m128d pair; memcpy(&bits, &a1, sizeof(bits));
  if (sr_client_double_angle_pair_prepare(bits, &pair)) return pair;
  return dword_140302080 >= 2 ? sub_1401F9B00(pair) : (__m128d)sub_1401F9480(pair);
}

//----- (00000001401F8AC0)
__m128 sub_1401F8AC0(double a1, __int64 a2, double a3) {
  uint64_t bits; __m128 pair; double packed;
  memcpy(&bits, &a1, sizeof(bits));
  if (sr_client_angle_pair_prepare(bits, &pair)) return pair;
  memcpy(&packed, &pair, sizeof(packed));
  return dword_140302080 >= 2 ? sub_1401FAAC0(packed) : sub_1401FA180(packed);
}

//----- (00000001401F8B20) ----------------------------------------------------
__int64            sub_1401F8B20(__int64 a1)
{
  __int64 v1;
  __int64 result;

  if ( a1 == _security_cookie )
  {
    v1 = __ROL8__(a1, 16);
    if ( !(_WORD)v1 )
      return result;
    a1 = __ROR8__(v1, 16);
  }
  return sub_1401F85C0(a1);
}

//----- (00000001401F8B50) ----------------------------------------------------
__m128            sub_1401F8B50(double a1)
{
  if ( dword_140302080 < 2 )
    return sub_1401FB240(a1);
  return (__m128)sub_1401FB8F0(a1);
}

//----- (00000001401F8B64) ----------------------------------------------------
int         sub_1401F8B64()
{
  unsigned __int64 _RAX = 0, _RBX = 0, _RCX = 0, _RDX = 0;
  int v5;
  int v6;
  int v7;
  int v9;
  int v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned int v18;
  int v23;
  char v25;

  _RAX = 0;
  _RCX = 0;
  __asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), "+c"(_RCX), "+d"(_RDX));
  v5 = 0;
  v6 = _RDX;
  v7 = _RAX;
  _RAX = 1;
  v9 = _RCX ^ 0x6C65746E | _RBX ^ 0x756E6547;
  _RCX = 0;
  __asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), "+c"(_RCX), "+d"(_RDX));
  v14 = _RCX;
  if ( !(v6 ^ 0x49656E69 | v9)
    && ((qword_140302088 = -1, v15 = _RAX & 0xFFF3FF0, v15 == 67264)
     || v15 == 132704
     || v15 == 132720
     || (v16 = (unsigned int)(v15 - 198224), (unsigned int)v16 <= 0x20) && (v17 = 0x100010001LL, _bittest64(&v17, v16))) )
  {
    v18 = g_144CBE4C0 | 1;
    g_144CBE4C0 |= 1u;
  }
  else
  {
    v18 = g_144CBE4C0;
  }
  _RAX = 7;
  if ( v7 >= 7 )
  {
    _RCX = 0;
    __asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), "+c"(_RCX), "+d"(_RDX));
    v5 = _RBX;
    if ( (_RBX & 0x200) != 0 )
      g_144CBE4C0 = v18 | 2;
  }
  dword_140302080 = 1;
  dword_140302084 = 2;
  if ( (v14 & 0x100000) != 0 )
  {
    dword_140302080 = 2;
    dword_140302084 = 6;
    if ( (v14 & 0x8000000) != 0 && (v14 & 0x10000000) != 0 )
    {
      _RCX = 0;
      __asm__ volatile(".byte 0x0f, 0x01, 0xd0" : "=a"(_RAX), "=d"(_RDX) : "c"(_RCX));
      v25 = _RAX;
      if ( (_RAX & 6) == 6 )
      {
        v23 = dword_140302084 | 8;
        dword_140302080 = 3;
        dword_140302084 |= 8u;
        if ( (v5 & 0x20) != 0 )
        {
          dword_140302080 = 5;
          dword_140302084 = v23 | 0x20;
          if ( (v5 & 0xD0030000) == 0xD0030000 && (v25 & 0xE0) == 0xE0 )
          {
            dword_140302084 |= 0x40u;
            dword_140302080 = 6;
          }
        }
      }
    }
  }
  return 0;
}

//----- (00000001401F8D08) ----------------------------------------------------
// attributes: thunk
void         j_j_free(void *Block)
{
  free_base(Block);
}

// 1401F8D08: control flows out of bounds to 1401FBF94

//----- (00000001401F8D10) ----------------------------------------------------
__int64            __scrt_narrow_argv_policy__configure_argv(CMFCToolBarImages *a1)
{
  int updated;

  updated = CMFCToolBarImages__UpdateInternalImage(a1);
  return sub_140245EA8(updated);
}

//----- (00000001401F8DB4) ----------------------------------------------------
char sub_1401F8DB4()
{
  signed __int64 v0;
  signed __int64 v1;

  if ( _acrt_locale_changed_sr() )
  {
    v0 = *(_QWORD *)(__readgsqword(0x30u) + 8);
    while ( 1 )
    {
      v1 = _InterlockedCompareExchange64((volatile signed __int64 *)&g_144CBE4D0, v0, 0);
      if ( !v1 )
        break;
      if ( v0 == v1 )
        return 1;
    }
  }
  return 0;
}

//----- (00000001401F8DF0) ----------------------------------------------------
char sub_1401F8DF0()
{
  CMFCToolBarImages *v0;
  int updated;

  if ( _acrt_locale_changed_sr() )
  {
    sub_1401F8B64();
  }
  else
  {
    updated = CMFCToolBarImages__UpdateInternalImage(v0);
    if ( (unsigned int)sub_140245EA8(updated) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}

//----- (00000001401F8E24) ----------------------------------------------------
bool sub_1401F8E24()
{
  return sub_1401F8F6C(0) != 0;
}

//----- (00000001401F8E3C) ----------------------------------------------------
char sub_1401F8E3C()
{
  if ( !sub_1401FCF28() )
    return 0;
  if ( !(unsigned __int8)_acrt_thread_attach() )
  {
    sub_1401FCF3C();
    return 0;
  }
  return 1;
}

//----- (00000001401F8E64) ----------------------------------------------------
char ATL__CImage__CImageStaticInitialize()
{
  _acrt_thread_detach();
  sub_1401FCF3C();
  return 1;
}

//----- (00000001401F8E7C) ----------------------------------------------------
int            sub_1401F8E7C(
        __int64 a1,
        int a2,
        __int64 a3,
        void (           *a4)(__int64, _QWORD, __int64),
        unsigned int ExceptionNum,
        struct sr_anon_67 *ExceptionPtr)
{
  if ( !_acrt_locale_changed_sr() && a2 == 1 )
    a4(a1, 0, a3);
  return ExceptionNum == 0xE06D7363u ? sub_14024502C(ExceptionNum, ExceptionPtr) : 0;
}

// 1401F8ED7: control flows out of bounds to 140245018

//----- (00000001401F8EDC) ----------------------------------------------------
int sub_1401F8EDC()
{
  int result;

  if ( _acrt_locale_changed_sr() )
    return sub_14024719C((_onexit_table_t *)(unsigned int *)&g_144CBE4E0);
  result = sub_14024560C();
  if ( !result )
    return sub_1402455F0();
  return result;
}

//----- (00000001401F8F0C) ----------------------------------------------------
char sub_1401F8F0C()
{
  ATL__CAtlStringMgr__StaticInitialize();
  return _acrt_uninitialize_critical();
}

//----- (00000001401F8F20) ----------------------------------------------------
char            sub_1401F8F20(int a1)
{
  char v1;

  v1 = g_144CBE4D8;
  if ( !a1 )
    v1 = 1;
  LOBYTE(g_144CBE4D8) = v1;
  sub_1401F8B64();
  if ( !sub_1401FCF00() )
    return 0;
  if ( !_acrt_initialize_sr() )
  {
    sub_1401FCF50(0);
    return 0;
  }
  return 1;
}

//----- (00000001401F8F6C) ----------------------------------------------------
char            sub_1401F8F6C(unsigned int a1)
{
  if ( !BYTE1(g_144CBE4D8) )
  {
    if ( a1 > 1 )
    {
      sub_1401FBFB8(5u);
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    if ( !_acrt_locale_changed_sr() || a1 )
    {
      *(__m128i_u *)&g_144CBE4E0 = _mm_load_si128((     __m128i *)&xmmword_1402799B0);
      g_144CBE4F0 = -1;
      g_144CBE4F8 = g_144CBE4E0;
      g_144CBE508 = -1;
    }
    else if ( sub_1402471D8((sr_anon_91 *)(unsigned int *)&g_144CBE4E0)
           || sub_1402471D8((sr_anon_91 *)(unsigned int *)&g_144CBE4F8) )
    {
      return 0;
    }
    BYTE1(g_144CBE4D8) = 1;
  }
  return 1;
}

// 1401F8FF1: control flows out of bounds to 1401F8FF6

//----- (00000001401F8FF8)
bool sub_1401F8FF8(__int64 address) {
  return sr_client_image_address_readonly(GetModuleHandleW(NULL), (uintptr_t)address);
}

//----- (00000001401F9090) ----------------------------------------------------
_BOOL8            sub_1401F9090(char a1)
{
  _BOOL8 result;

  result = _acrt_locale_changed_sr();
  if ( result && !a1 )
    _InterlockedExchange64((volatile __int64 *)&g_144CBE4D0, 0);
  return result;
}

//----- (00000001401F90B4) ----------------------------------------------------
char            sub_1401F90B4(char a1, char a2)
{
  if ( !LOBYTE(g_144CBE4D8) || !a2 )
  {
    sub_1402474CC(a1);
    sub_1401FCF50(a1);
  }
  return 1;
}

//----- (00000001401F90E0) ----------------------------------------------------
__int64            sub_1401F90E0(__int64 a1)
{
  int v2;
  __int64 v3;

  if ( *(_QWORD *)&g_144CBE4E0 == -1 )
    v2 = sub_14024718C(a1);
  else
    v2 = sub_140247200((unsigned int *)&g_144CBE4E0, a1);
  v3 = 0;
  if ( !v2 )
    return a1;
  return v3;
}

//----- (00000001401F913C) ----------------------------------------------------
__int64            sub_1401F913C(__int64 a1)
{
  return (unsigned int)(sub_1401F90E0(a1) != 0) - 1;
}

//----- (00000001401F9160) ----------------------------------------------------
_QWORD *           sub_1401F9160(_QWORD *a1, char a2)
{
  *a1 = (uint64)(uintptr_t)(off_140283488);
  if ( (a2 & 1) != 0 )
    j_j_free(a1);
  return a1;
}

//----- (00000001401F918C) ----------------------------------------------------
int sub_1401F918C(void)
{
  unsigned int v0;
  unsigned int v1;
  CMFCToolBarImages *v2;
  int updated;
  int v4;
  int v5;

  sub_140247754(2u);
  v0 = sub_1401FC358();
  sub_140247AD8(v0);
  v1 = sub_1401FC354();
  *sub_14024A0A0() = v1;
  if ( !sub_1401F8F6C(1u) )
    goto LABEL_8;
  sub_1401FC3C8();
  sub_1401F913C((__int64)sub_1401FC404);
  updated = CMFCToolBarImages__UpdateInternalImage(NULL);
  if ( (unsigned int)sub_140245EA8(updated) )
    goto LABEL_8;
  sub_1401FC368();
  if ( sub_1401FC3AC() )
    sub_140247818((__int64)UserMathErrorFunction);
  nullsub_12();
  nullsub_13();
  v4 = sub_1401FC364();
  sub_1402488E4(v4);
  if ( sub_1401FC384() )
    initialize_narrow_environment();
  sub_1401FC148();
  v5 = sub_1401FC140();
  if ( v5 )
  {
LABEL_8:
    sub_1401FBFB8(7u);
    __asm__ volatile("int3");
    __builtin_unreachable();
  }
  return v5;
}

// 1401F923C: control flows out of bounds to 1401F9241

//----- (00000001401F9244) ----------------------------------------------------
__int64 sub_1401F9244()
{
  sub_1401FC390();
  return 0;
}

//----- (00000001401F9254) ----------------------------------------------------
int sub_1401F9254()
{
  int v0;

  sub_1401FC1A0();
  v0 = sub_1401FC360();
  return sub_14024A074(v0);
}

//----- (00000001401F9270) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 _acrt_uninitialize_tmpfile()
{
  sub_1401FC2A4();
  return sub_1401F9284();
}

//----- (00000001401F9284) ----------------------------------------------------
__int64            sub_1401F9284()
{
  unsigned int v0;
  char v1;
  unsigned int *v3;
  unsigned int *v4;
  unsigned int *v5;
  __int64 *v6;

  if ( !sub_1401F8F20(1) )
  {
    sub_1401FBFB8(7u);
    goto LABEL_19;
  }
  v1 = 0;
  LOBYTE(v0) = sub_1401F8DB4();
  if ( g_144CBE4C8 == 1 )
  {
LABEL_19:
    sub_1401FBFB8(7u);
    goto LABEL_20;
  }
  if ( g_144CBE4C8 )
  {
    v1 = 1;
  }
  else
  {
    g_144CBE4C8 = 1;
    if ( sub_140247A64((_PIFV *)&First, (_PIFV *)&Last) )
      return 255;
    sub_140247A00((sr_anon_92 *)&unk_14026E6B0, (sr_anon_92 *)&unk_14026E6C8);
    g_144CBE4C8 = 2;
  }
  sub_1401F9090(v0);
  v3 = sub_1401FC3B8();
  v4 = v3;
  if ( *(_QWORD *)v3 && sub_1401F8FF8((__int64)v3) )
    (*(void (**)(void *, unsigned, void *))v4)(NULL, 2, NULL);
  v5 = sub_1401FC3C0();
  v6 = (__int64 *)v5;
  if ( *(_QWORD *)v5 && sub_1401F8FF8((__int64)v5) )
    sub_140245614(*v6);
  sub_1401FC104();
  unknown_libname_785();
  v0 = WinMain_sr();
  if ( !is_managed_app() )
LABEL_20:
    exit(v0);
  if ( !v1 )
    sub_1402455F0();
  sub_1401F90B4(1, 0);
  return v0;
}

//----- (00000001401F93F8) ----------------------------------------------------
__int64            sub_1401F93F8()
{
  sub_1401FC104();
  unknown_libname_785();
  return WinMain_sr();
}

//----- (00000001401F9430) ----------------------------------------------------
void            sub_1401F9430()
{
  unsigned int v0;

  v0 = sub_1401FC354();
  *sub_14024A0A0() = v0;
}

//----- (00000001401F944C) ----------------------------------------------------
int         fegetround()
{
  unsigned int v0;

  v0 = sub_1401FC358();
  return sub_140247AD8(v0);
}

//----- (00000001401F9460) ----------------------------------------------------
__int64 start()
{
  sub_1401FC2A4();
  return sub_1401F9284();
}

//----- (00000001401F9480) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_1401F9480(__m128d a1)
{
  int v1;
  __int128 v2;
  double *v3;
  __m128i v4;
  __m128 v5;
  __m128d v6;
  __m128i v7;
  __m128d v8;
  __m128d v9;
  __m128d v10;
  __m128d v11;
  __m128d v12;
  __m128 result;
  __int64 v14;
  int v15;
  __m128i v16;
  __int64 v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __int64 v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128d v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128d v39;
  __m128 v40;
  __m128i v41;
  __m128d v42;
  __m128d v43;
  __m128i v44;
  __m128d v45;
  __m128d v46;
  __m128 v47;
  __m128d v48;
  __m128d v49;
  __m128d v50;
  __m128d v51;
  __m128d v52;
  __m128i v53;
  __m128d v54;
  __m128 v55;
  __m128 v56;
  __int64 v57;
  unsigned int v58;
  __m128d v59;
  __m128d v60;
  __m128d v61;
  __m128d v62;
  __m128d v63;
  __m128d v64;
  __m128d v65;
  __m128d v66;
  __m128d v67;
  __m128 v68;
  __m128 v69;
  __int128 v70;
  /* 64-byte aligned and large enough: the original aligns v71 down to 64 and uses 0x50 bytes from there,
     which in this frame would overwrite live locals (the special-lane mask), giving garbage for +-inf. */
  _Alignas(64) _BYTE v71[128];
  unsigned __int64 v72;

  v1 = 0;
  v2 = *(_OWORD *)&a1;
  v3 = (double *)((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (__m128i)_mm_andnot_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B477EE80)), *(__m128_u *)&a1);
  v5 = _mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B477EE80)), *(__m128_u *)&a1);
  v6 = _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EF00)), (__m128d)v5), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EF40)));
  v7 = _mm_slli_epi64((__m128i)v6, 0x3Fu);
  v8 = _mm_sub_pd(v6, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EF40)));
  v9 = _mm_sub_pd(
         _mm_sub_pd(
           _mm_sub_pd(
             _mm_sub_pd((__m128d)v5, _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F000)), v8)),
             _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F040)), v8)),
           _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F080)), v8)),
         _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F0C0)), v8));
  v10 = _mm_mul_pd(v9, v9);
  v11 = _mm_cmpnle_pd((__m128d)v5, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EEC0)));
  v12 = (__m128d)_mm_xor_si128((__m128i)v9, v7);
  v72 = (unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL;
  result = (__m128)_mm_xor_si128(
                     (__m128i)_mm_add_pd(
                                v12,
                                _mm_mul_pd(
                                  _mm_mul_pd(
                                    v10,
                                    _mm_add_pd(
                                      _mm_mul_pd(
                                        _mm_add_pd(
                                          _mm_mul_pd(
                                            _mm_add_pd(
                                              _mm_mul_pd(
                                                _mm_add_pd(
                                                  _mm_mul_pd(
                                                    _mm_add_pd(
                                                      _mm_mul_pd(
                                                        _mm_add_pd(
                                                          _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F340)), v10),
                                                          ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F300))),
                                                        v10),
                                                      ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F2C0))),
                                                    v10),
                                                  ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F280))),
                                                v10),
                                              ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F240))),
                                            v10),
                                          ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F200))),
                                        v10),
                                      ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F1C0)))),
                                  v12)),
                     v4);
  if ( _mm_movemask_pd(v11) )
  {
    v16 = _mm_srli_epi64(_mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E000), (__m128i)v5), 0x34u);
    v69 = result;
    v68 = (__m128)v11;
    v17 = (unsigned int)(24 * _mm_cvtsi128_si32(v16));
    v70 = v2;
    SR_VEC_LANES(128, v18, i64)[0] = *(_QWORD *)((char *)&unk_1B476E900 + v17);
    SR_VEC_LANES(128, v19, i64)[0] = *(_QWORD *)((char *)&unk_1B476E900 + v17 + 8);
    SR_VEC_LANES(128, v20, i64)[0] = *(_QWORD *)((char *)&unk_1B476E900 + v17 + 16);
    v21 = _mm_add_epi64(
            _mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E010), (__m128i)v5),
            _mm_load_si128((const __m128i *)&xmmword_1B476E020));
    v22 = (unsigned int)(24 * _mm_extract_epi16(v16, 4));
    SR_VEC_LANES(128, v20, i64)[1] = *(__int64 *)((char *)&unk_1B476E900 + v22 + 16);
    v23 = _mm_srli_epi64(v21, 0x20u);
    v24 = _mm_loadu_si128((     __m128i *)&xmmword_1B476E030);
    v1 = _mm_movemask_pd(_mm_cmpeq_pd((__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B477EB80)), v5), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EB80))));
    v25 = _mm_srli_epi64(v20, 0x20u);
    v26 = _mm_and_si128(v21, v24);
    SR_VEC_LANES(128, v19, i64)[1] = *(__int64 *)((char *)&unk_1B476E900 + v22 + 8);
    v27 = v19;
    v28 = _mm_and_si128(v19, v24);
    v29 = _mm_mul_epu32(v26, v28);
    v30 = _mm_srli_epi64(v27, 0x20u);
    v31 = _mm_mul_epu32(v26, v30);
    SR_VEC_LANES(128, v18, i64)[1] = *(__int64 *)((char *)&unk_1B476E900 + v22);
    v32 = _mm_and_si128(v24, v18);
    v33 = (__m128d)_mm_add_epi64(
                     _mm_srli_epi64(_mm_mul_epu32(_mm_and_si128(v20, v24), v23), 0x20u),
                     _mm_add_epi64(
                       _mm_and_si128(v24, v29),
                       _mm_add_epi64(_mm_mul_epu32(v23, v25), _mm_srli_epi64(_mm_mul_epu32(v25, v26), 0x20u))));
    v34 = _mm_mul_epu32(v26, v32);
    v35 = _mm_add_epi64(
            _mm_srli_epi64((__m128i)v33, 0x20u),
            _mm_add_epi64(_mm_and_si128(v24, v31), _mm_add_epi64(_mm_mul_epu32(v28, v23), _mm_srli_epi64(v29, 0x20u))));
    v36 = _mm_add_epi64(
            _mm_srli_epi64(v35, 0x20u),
            _mm_add_epi64(_mm_and_si128(v24, v34), _mm_add_epi64(_mm_mul_epu32(v30, v23), _mm_srli_epi64(v31, 0x20u))));
    v37 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_add_epi64(
                _mm_srli_epi64(v36, 0x20u),
                _mm_add_epi64(
                  _mm_and_si128(_mm_mul_epu32(v26, _mm_srli_epi64(v18, 0x20u)), v24),
                  _mm_add_epi64(_mm_mul_epu32(v23, v32), _mm_srli_epi64(v34, 0x20u)))),
              0x20u),
            _mm_and_si128(v36, v24));
    v38 = _mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E040), (__m128i)v5);
    v39 = (__m128d)_mm_or_si128(
                     _mm_srli_epi64(v37, 0xCu),
                     _mm_xor_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E050), v38));
    v40 = (__m128)_mm_add_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E060)), v39);
    v41 = _mm_add_epi64(_mm_slli_epi64(v35, 0x20u), _mm_and_si128((__m128i)v33, v24));
    v42 = (__m128d)_mm_xor_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E080), v38);
    v43 = (__m128d)_mm_xor_si128(v38, _mm_load_si128((const __m128i *)&xmmword_1B476E0A0));
    v44 = _mm_slli_epi64(_mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E090), v41), 0x1Cu);
    v45 = _mm_sub_pd(v39, _mm_sub_pd((__m128d)v40, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E060))));
    v46 = _mm_sub_pd(
            (__m128d)_mm_or_si128(
                       _mm_or_si128(
                         _mm_slli_epi64(_mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E0B0), v37), 0x28u),
                         _mm_srli_epi64(v41, 0x18u)),
                       (__m128i)v43),
            v43);
    v47 = (__m128)_mm_add_pd(v45, v46);
    v48 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E0F0)), v47);
    v49 = _mm_add_pd(
            _mm_sub_pd((__m128d)_mm_or_si128(v44, (__m128i)v42), v42),
            _mm_add_pd(v46, _mm_sub_pd(v45, (__m128d)v47)));
    v50 = _mm_sub_pd((__m128d)v47, v48);
    v51 = _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E0D0)), v48);
    v52 = _mm_add_pd(
            _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E0D0)), v50), _mm_mul_pd(v48, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E0E0)))),
            _mm_add_pd(_mm_mul_pd(v49, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E0C0))), _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E0E0)), v50)));
    v53 = (__m128i)_mm_and_ps(v40, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E070)));
    v54 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E100)), v5);
    v55 = (__m128)_mm_add_pd(v52, v51);
    v56 = (__m128)_mm_cmplt_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E110)), v54);
    v57 = (unsigned int)(32 * _mm_cvtsi128_si32(v53));
    SR_VEC_LANES(128, v49, f64)[0] = *(double *)((char *)&unk_1B477AB00 + v57);
    v58 = 32 * _mm_extract_epi16(v53, 4);
    v59 = (__m128d)_mm_or_ps(
                     _mm_and_ps((__m128)_mm_cmple_pd(v54, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E110))), v5),
                     _mm_and_ps(v55, v56));
    SR_VEC_LANES(128, v33, f64)[0] = *(double *)((char *)&unk_1B477AB00 + v57 + 8);
    SR_VEC_LANES(128, v33, f64)[1] = *(double *)((char *)&unk_1B477AB00 + v58 + 8);
    v60 = _mm_mul_pd(v59, v33);
    SR_VEC_LANES(128, v50, f64)[0] = *(double *)((char *)&unk_1B477AB00 + v57 + 16);
    SR_VEC_LANES(128, v50, f64)[1] = *(double *)((char *)&unk_1B477AB00 + v58 + 16);
    v61 = _mm_add_pd(v50, v60);
    v62 = _mm_mul_pd(v59, v59);
    SR_VEC_LANES(128, v49, f64)[1] = *(double *)((char *)&unk_1B477AB00 + v58);
    v63 = _mm_mul_pd(v59, v49);
    v64 = _mm_add_pd(v49, v33);
    v65 = _mm_add_pd(v61, v63);
    v66 = _mm_add_pd(
            _mm_add_pd(_mm_add_pd(v60, _mm_sub_pd(v50, v61)), _mm_add_pd(v63, _mm_sub_pd(v61, v65))),
            _mm_mul_pd(
              _mm_mul_pd(
                _mm_mul_pd(_mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477ED80)), v62), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477ED40))), v62),
                v59),
              v64));
    v67 = _mm_mul_pd(
            (__m128d)_mm_and_ps(v56, (__m128)_mm_add_pd(v52, _mm_sub_pd(v51, (__m128d)v55))),
            _mm_sub_pd(v64, _mm_mul_pd(v59, v50)));
    SR_VEC_LANES(128, v59, f64)[0] = *(double *)((char *)&unk_1B477AB00 + v57 + 24);
    v2 = v70;
    SR_VEC_LANES(128, v59, f64)[1] = *(double *)((char *)&unk_1B477AB00 + v58 + 24);
    result = _mm_or_ps(
               _mm_andnot_ps(v68, v69),
               _mm_and_ps(
                 (__m128)_mm_xor_si128(
                           (__m128i)_mm_add_pd(
                                      v65,
                                      _mm_add_pd(
                                        _mm_add_pd(
                                          v66,
                                          _mm_mul_pd(
                                            _mm_mul_pd(
                                              v62,
                                              _mm_add_pd(
                                                _mm_mul_pd(
                                                  _mm_add_pd(
                                                    _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EE40)), v62),
                                                    ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EE00))),
                                                  v62),
                                                ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EDC0)))),
                                            v50)),
                                        _mm_add_pd(v59, v67))),
                           v4),
                 v68));
  }
  if ( v1 )
  {
    *(_OWORD *)v3 = v2;
    *(__m128_u *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = result;
    v14 = 0;
    v15 = v1;
    do
    {
      if ( _bittest(&v15, v14) )
        sub_1401FC440((__int64)&v3[v14], &v3[v14 + 8]);
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (int)v14 < 2 );
    return *(__m128_u *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return result;
}

// 1401F9680: conditional instruction was optimized away because r9d.4!=0
// 1401F9480: inconsistent variable size for 'xmm0_8.8'

//----- (00000001401F9B00) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128d            sub_1401F9B00(__m128d a1)
{
  int v1;
  double *v2;
  __m128 v3;
  __m128d v4;
  __m128 v5;
  __m128d v6;
  __m128 v7;
  __m128 v8;
  __m128d v9;
  __m128d v10;
  __m128d v11;
  __m128d v12;
  __int64 v14;
  int v15;
  __m128i v16;
  __int64 v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __int64 v22;
  __m128i v23;
  __m128i si128;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128d v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128d v39;
  __m128 v40;
  __m128i v41;
  __m128d v42;
  __m128d v43;
  __m128i v44;
  __m128d v45;
  __m128d v46;
  __m128 v47;
  __m128d v48;
  __m128d v49;
  __m128d v50;
  __m128d v51;
  __m128d v52;
  __m128i v53;
  __m128d v54;
  __m128 v55;
  __m128 v56;
  __int64 v57;
  unsigned int v58;
  __m128d v59;
  __m128d v60;
  __m128d v61;
  __m128d v62;
  __m128d v63;
  __m128d v64;
  __m128d v65;
  __m128d v66;
  __m128d v67;
  __m128d v68;
  __m128d v69;
  __int128 v70;
  /* 64-byte aligned and large enough: the original aligns v71 down to 64 and uses 0x50 bytes from there,
     which in this frame would overwrite live locals (the special-lane mask), giving garbage for +-inf. */
  _Alignas(64) _BYTE v71[128];
  unsigned __int64 v72;

  v1 = 0;
  v2 = (double *)((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL);
  v3 = _mm_and_ps(*(__m128_u *)&a1, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B477EE80)));
  v4 = _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EF00)), (__m128d)v3), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EF40)));
  v5 = (__m128)_mm_slli_epi64((__m128i)v4, 0x3Fu);
  v6 = _mm_sub_pd(v4, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EF40)));
  v7 = _mm_andnot_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B477EE80)), *(__m128_u *)&a1);
  v8 = (__m128)_mm_sub_pd(
                 _mm_sub_pd(
                   _mm_sub_pd(
                     _mm_sub_pd((__m128d)v3, _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F000)), v6)),
                     _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F040)), v6)),
                   _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F080)), v6)),
                 _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F0C0)), v6));
  v9 = _mm_mul_pd((__m128d)v8, (__m128d)v8);
  v10 = _mm_cmpnle_pd((__m128d)v3, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EEC0)));
  v11 = (__m128d)_mm_xor_ps(v8, v5);
  v72 = (unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL;
  v12 = (__m128d)_mm_xor_ps(
                   (__m128)_mm_add_pd(
                             v11,
                             _mm_mul_pd(
                               _mm_mul_pd(
                                 v9,
                                 _mm_add_pd(
                                   _mm_mul_pd(
                                     _mm_add_pd(
                                       _mm_mul_pd(
                                         _mm_add_pd(
                                           _mm_mul_pd(
                                             _mm_add_pd(
                                               _mm_mul_pd(
                                                 _mm_add_pd(
                                                   _mm_mul_pd(
                                                     _mm_add_pd(
                                                       _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F340)), v9),
                                                       ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F300))),
                                                     v9),
                                                   ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F2C0))),
                                                 v9),
                                               ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F280))),
                                             v9),
                                           ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F240))),
                                         v9),
                                       ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F200))),
                                     v9),
                                   ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F1C0)))),
                               v11)),
                   v7);
  if ( _mm_movemask_pd(v10) )
  {
    v16 = _mm_srli_epi64(_mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E200), (__m128i)v3), 0x34u);
    v70 = *(_OWORD *)&a1;
    v68 = v10;
    v17 = (unsigned int)(24 * _mm_cvtsi128_si32(v16));
    v69 = v12;
    SR_VEC_LANES(128, v18, i64)[0] = *(_QWORD *)((char *)&unk_1B476E900 + v17);
    SR_VEC_LANES(128, v19, i64)[0] = *(_QWORD *)((char *)&unk_1B476E900 + v17 + 8);
    SR_VEC_LANES(128, v20, i64)[0] = *(_QWORD *)((char *)&unk_1B476E900 + v17 + 16);
    v21 = _mm_add_epi64(
            _mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E210), (__m128i)v3),
            _mm_load_si128((const __m128i *)&xmmword_1B476E220));
    v22 = (unsigned int)(24 * _mm_extract_epi16(v16, 4));
    SR_VEC_LANES(128, v20, i64)[1] = *(__int64 *)((char *)&unk_1B476E900 + v22 + 16);
    v23 = _mm_srli_epi64(v21, 0x20u);
    si128 = _mm_load_si128((     __m128i *)&xmmword_1B476E230);
    v1 = _mm_movemask_pd(_mm_cmpeq_pd((__m128d)_mm_and_ps(v3, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B477EB80))), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EB80))));
    v25 = _mm_srli_epi64(v20, 0x20u);
    v26 = _mm_and_si128(v21, si128);
    SR_VEC_LANES(128, v19, i64)[1] = *(__int64 *)((char *)&unk_1B476E900 + v22 + 8);
    v27 = v19;
    v28 = _mm_and_si128(v19, si128);
    v29 = _mm_mul_epu32(v26, v28);
    v30 = _mm_srli_epi64(v27, 0x20u);
    v31 = _mm_mul_epu32(v26, v30);
    SR_VEC_LANES(128, v18, i64)[1] = *(__int64 *)((char *)&unk_1B476E900 + v22);
    v32 = _mm_and_si128(si128, v18);
    v33 = (__m128d)_mm_add_epi64(
                     _mm_srli_epi64(_mm_mul_epu32(_mm_and_si128(v20, si128), v23), 0x20u),
                     _mm_add_epi64(
                       _mm_and_si128(si128, v29),
                       _mm_add_epi64(_mm_mul_epu32(v23, v25), _mm_srli_epi64(_mm_mul_epu32(v25, v26), 0x20u))));
    v34 = _mm_mul_epu32(v26, v32);
    v35 = _mm_add_epi64(
            _mm_srli_epi64((__m128i)v33, 0x20u),
            _mm_add_epi64(_mm_and_si128(si128, v31), _mm_add_epi64(_mm_mul_epu32(v28, v23), _mm_srli_epi64(v29, 0x20u))));
    v36 = _mm_add_epi64(
            _mm_srli_epi64(v35, 0x20u),
            _mm_add_epi64(_mm_and_si128(si128, v34), _mm_add_epi64(_mm_mul_epu32(v30, v23), _mm_srli_epi64(v31, 0x20u))));
    v37 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_add_epi64(
                _mm_srli_epi64(v36, 0x20u),
                _mm_add_epi64(
                  _mm_and_si128(_mm_mul_epu32(v26, _mm_srli_epi64(v18, 0x20u)), si128),
                  _mm_add_epi64(_mm_mul_epu32(v23, v32), _mm_srli_epi64(v34, 0x20u)))),
              0x20u),
            _mm_and_si128(v36, si128));
    v38 = _mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E240), (__m128i)v3);
    v39 = (__m128d)_mm_or_si128(
                     _mm_srli_epi64(v37, 0xCu),
                     _mm_xor_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E250), v38));
    v40 = (__m128)_mm_add_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E260)), v39);
    v41 = _mm_add_epi64(_mm_slli_epi64(v35, 0x20u), _mm_and_si128((__m128i)v33, si128));
    v42 = (__m128d)_mm_xor_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E280), v38);
    v43 = (__m128d)_mm_xor_si128(v38, _mm_load_si128((const __m128i *)&xmmword_1B476E2A0));
    v44 = _mm_slli_epi64(_mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E290), v41), 0x1Cu);
    v45 = _mm_sub_pd(v39, _mm_sub_pd((__m128d)v40, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E260))));
    v46 = _mm_sub_pd(
            (__m128d)_mm_or_si128(
                       _mm_or_si128(
                         _mm_slli_epi64(_mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E2B0), v37), 0x28u),
                         _mm_srli_epi64(v41, 0x18u)),
                       (__m128i)v43),
            v43);
    v47 = (__m128)_mm_add_pd(v45, v46);
    v48 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E2F0)), v47);
    v49 = _mm_add_pd(
            _mm_sub_pd((__m128d)_mm_or_si128(v44, (__m128i)v42), v42),
            _mm_add_pd(v46, _mm_sub_pd(v45, (__m128d)v47)));
    v50 = _mm_sub_pd((__m128d)v47, v48);
    v51 = _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E2D0)), v48);
    v52 = _mm_add_pd(
            _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E2D0)), v50), _mm_mul_pd(v48, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E2E0)))),
            _mm_add_pd(_mm_mul_pd(v49, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E2C0))), _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E2E0)), v50)));
    v53 = (__m128i)_mm_and_ps(v40, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E270)));
    v54 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E300)), v3);
    v55 = (__m128)_mm_add_pd(v52, v51);
    v56 = (__m128)_mm_cmplt_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E310)), v54);
    v57 = (unsigned int)(32 * _mm_cvtsi128_si32(v53));
    SR_VEC_LANES(128, v49, f64)[0] = *(double *)((char *)&unk_1B477AB00 + v57);
    v58 = 32 * _mm_extract_epi16(v53, 4);
    v59 = (__m128d)_mm_or_ps(
                     _mm_and_ps((__m128)_mm_cmple_pd(v54, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E310))), v3),
                     _mm_and_ps(v55, v56));
    SR_VEC_LANES(128, v33, f64)[0] = *(double *)((char *)&unk_1B477AB00 + v57 + 8);
    SR_VEC_LANES(128, v33, f64)[1] = *(double *)((char *)&unk_1B477AB00 + v58 + 8);
    v60 = _mm_mul_pd(v59, v33);
    SR_VEC_LANES(128, v50, f64)[0] = *(double *)((char *)&unk_1B477AB00 + v57 + 16);
    SR_VEC_LANES(128, v50, f64)[1] = *(double *)((char *)&unk_1B477AB00 + v58 + 16);
    v61 = _mm_add_pd(v50, v60);
    v62 = _mm_mul_pd(v59, v59);
    SR_VEC_LANES(128, v49, f64)[1] = *(double *)((char *)&unk_1B477AB00 + v58);
    v63 = _mm_mul_pd(v59, v49);
    v64 = _mm_add_pd(v49, v33);
    v65 = _mm_add_pd(v61, v63);
    v66 = _mm_mul_pd(
            _mm_mul_pd(_mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477ED80)), v62), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477ED40))), v62),
            v59);
    v67 = _mm_mul_pd(
            (__m128d)_mm_and_ps(v56, (__m128)_mm_add_pd(v52, _mm_sub_pd(v51, (__m128d)v55))),
            _mm_sub_pd(v64, _mm_mul_pd(v59, v50)));
    SR_VEC_LANES(128, v59, f64)[0] = *(double *)((char *)&unk_1B477AB00 + v57 + 24);
    SR_VEC_LANES(128, v59, f64)[1] = *(double *)((char *)&unk_1B477AB00 + v58 + 24);
    v12 = _mm_blendv_pd(
            v69,
            (__m128d)_mm_xor_ps(
                       (__m128)_mm_add_pd(
                                 v65,
                                 _mm_add_pd(
                                   _mm_add_pd(
                                     _mm_add_pd(
                                       _mm_add_pd(
                                         _mm_add_pd(v60, _mm_sub_pd(v50, v61)),
                                         _mm_add_pd(v63, _mm_sub_pd(v61, v65))),
                                       _mm_mul_pd(v66, v64)),
                                     _mm_mul_pd(
                                       _mm_mul_pd(
                                         v62,
                                         _mm_add_pd(
                                           _mm_mul_pd(
                                             _mm_add_pd(
                                               _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EE40)), v62),
                                               ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EE00))),
                                             v62),
                                           ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EDC0)))),
                                       v50)),
                                   _mm_add_pd(v59, v67))),
                       v7),
            v68);
    *(_OWORD *)&a1 = v70;
  }
  if ( v1 )
  {
    *(_OWORD *)v2 = *(_OWORD *)&a1;
    *(__m128d_u *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v12;
    v14 = 0;
    v15 = v1;
    do
    {
      if ( _bittest(&v15, v14) )
        sub_1401FC440((__int64)&v2[v14], &v2[v14 + 8]);
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (int)v14 < 2 );
    return *(__m128d_u *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return v12;
}

// 1401F9D07: conditional instruction was optimized away because r9d.4!=0
// 1401F9B00: inconsistent variable size for 'xmm0_8.8'

//----- (00000001401FA180) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_1401FA180(double a1)
{
  int v1;
  float *v2;
  __m128 v3;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  __int64 v12;
  int v13;
  __m128i v14;
  __m128i v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  __m128i v42;
  __m128i v43;
  __m128i v44;
  __m128i v45;
  __m128i v46;
  __m128i v47;
  __m128i v48;
  __m128i v49;
  __m128i v50;
  __m128i v51;
  __m128i v52;
  __m128i v53;
  __m128i v54;
  __m128i v55;
  __m128i v56;
  __m128 v57;
  __m128 v58;
  __m128 v59;
  __m128 v60;
  __m128 v61;
  __m128 v62;
  __m128 v63;
  __m128 v64;
  __m128 v65;
  __m128 v66;
  __m128 v67;
  __m128 v68;
  __m128 v69;
  __m128 v70;
  __m128 v71;
  __m128 v72;
  __m128 v73;
  __m128i v74;
  __m128 v75;
  __m128 v76;
  __m128 v77;
  unsigned int v78;
  unsigned int v79;
  __m128 v80;
  __m128 v81;
  unsigned int v82;
  unsigned int v83;
  __m128 v84;
  __m128 v85;
  __m128 v86;
  __m128 v87;
  __m128 v88;
  __m128 v89;
  __m128 v90;
  __m128 v91;
  __m128 v92;
  __m128 v93;
  __m128 v94;
  __m128 v95;
  __m128i v96;
  __m128i v97;
  __m128i v98[2];
  __m128i v99;
  __m128i v100[4];
  /* 64-byte aligned and large enough: the original aligns v101 down to 64 and uses 0x50 bytes from there,
     which in this frame would overwrite live locals (the special-lane mask), giving garbage for +-inf. */
  _Alignas(64) _BYTE v101[128];
  unsigned __int64 v102;

  v1 = 0;
  v2 = (float *)((unsigned __int64)v101 & 0xFFFFFFFFFFFFFFC0uLL);
  v3 = _mm_and_ps(*(__m128_u *)&a1, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781100)));
  v4 = _mm_add_ps(_mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781580)), v3), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47815C0)));
  v5 = _mm_sub_ps(v4, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47815C0)));
  v6 = _mm_sub_ps(
         _mm_sub_ps(
           _mm_sub_ps(
             _mm_sub_ps(v3, _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47812C0)), v5)),
             _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781300)), v5)),
           _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781340)), v5)),
         _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781380)), v5));
  v7 = _mm_mul_ps(v6, v6);
  v8 = (__m128)_mm_xor_si128((__m128i)v6, _mm_slli_epi32((__m128i)v4, 0x1Fu));
  v9 = _mm_cmpnle_ps(v3, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781140)));
  v102 = (unsigned __int64)v101 & 0xFFFFFFFFFFFFFFC0uLL;
  v10 = (__m128)_mm_xor_si128(
                  (__m128i)_mm_add_ps(
                             v8,
                             _mm_mul_ps(
                               _mm_mul_ps(
                                 v7,
                                 _mm_add_ps(
                                   _mm_mul_ps(
                                     _mm_add_ps(
                                       _mm_mul_ps(
                                         _mm_add_ps(
                                           _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781540)), v7),
                                           ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781500))),
                                         v7),
                                       ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47814C0))),
                                     v7),
                                   ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781480)))),
                               v8)),
                  (__m128i)_mm_andnot_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781100)), *(__m128_u *)&a1));
  if ( _mm_movemask_ps(v9) )
  {
    v95 = v10;
    v14 = _mm_srli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7F800000u), 0), *(__m128i_u *)&a1), 0x17u);
    v15 = _mm_slli_epi32(_mm_add_epi32(_mm_slli_epi32(v14, 1u), v14), 2u);
    v16 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v15, 2));
    v17 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v15, 3));
    v18 = _mm_cvtsi128_si32(v15);
    v19 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v15, 1));
    v94 = v9;
    v20 = _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v16 + 4));
    v21 = _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v17 + 4));
    v1 = _mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps(v3, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781180))), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781180))));
    v93 = *(__m128_u *)&a1;
    v22 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v18)),
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v19))),
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v16)),
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v17))));
    v23 = _mm_unpacklo_epi32(
            _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v18 + 8)),
            _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v19 + 8)));
    v24 = _mm_unpacklo_epi32(
            _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v16 + 8)),
            _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v17 + 8)));
    v25 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFu), 0);
    v26 = _mm_srli_epi32(v22, 0x10u);
    v27 = _mm_and_si128(v22, v25);
    v96 = v26;
    v28 = _mm_add_epi32(
            _mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFu), 0), *(__m128i_u *)&a1),
            _mm_shuffle_epi32(_mm_cvtsi32_si128(0x800000u), 0));
    v29 = _mm_and_si128(v28, v25);
    v30 = _mm_srli_epi64(v27, 0x20u);
    v31 = _mm_srli_epi64(v29, 0x20u);
    v32 = _mm_srli_epi32(v28, 0x10u);
    v33 = _mm_mul_epu32(v29, v27);
    v34 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v18 + 4)),
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v19 + 4))),
            _mm_unpacklo_epi32(v20, v21));
    v35 = _mm_and_si128(v34, v25);
    v97 = v27;
    v36 = _mm_loadu_si128((     __m128i *)&xmmword_1B476E400);
    v100[0] = _mm_or_si128(_mm_and_si128(v33, v36), _mm_slli_epi64(_mm_mul_epu32(v31, v30), 0x20u));
    v37 = _mm_srli_epi64(v35, 0x20u);
    v98[0] = _mm_srli_epi32(v34, 0x10u);
    v99 = _mm_srli_epi64(v98[0], 0x20u);
    v38 = _mm_unpacklo_epi64(v23, v24);
    v39 = _mm_and_si128(v38, v25);
    v40 = _mm_or_si128(_mm_and_si128(_mm_mul_epu32(v29, v35), v36), _mm_slli_epi64(_mm_mul_epu32(v31, v37), 0x20u));
    v41 = _mm_srli_epi64(v32, 0x20u);
    v42 = _mm_srli_epi32(v38, 0x10u);
    v98[1] = v30;
    v43 = _mm_srli_epi64(v42, 0x20u);
    v44 = _mm_or_si128(_mm_and_si128(_mm_mul_epu32(v29, v98[0]), v36), _mm_slli_epi64(_mm_mul_epu32(v31, v99), 0x20u));
    v45 = _mm_add_epi32(
            _mm_srli_epi32(
              _mm_or_si128(
                _mm_and_si128(_mm_mul_epu32(v32, v39), v36),
                _mm_slli_epi64(_mm_mul_epu32(_mm_srli_epi64(v39, 0x20u), v41), 0x20u)),
              0x10u),
            _mm_add_epi32(
              _mm_and_si128(v40, v25),
              _mm_add_epi32(
                _mm_or_si128(
                  _mm_and_si128(_mm_mul_epu32(v32, v42), v36),
                  _mm_slli_epi64(_mm_mul_epu32(v41, v43), 0x20u)),
                _mm_srli_epi32(
                  _mm_or_si128(
                    _mm_and_si128(_mm_mul_epu32(v42, v29), v36),
                    _mm_slli_epi64(_mm_mul_epu32(v43, v31), 0x20u)),
                  0x10u))));
    v46 = _mm_add_epi32(
            _mm_and_si128(v44, v25),
            _mm_add_epi32(
              _mm_or_si128(_mm_and_si128(_mm_mul_epu32(v35, v32), v36), _mm_slli_epi64(_mm_mul_epu32(v37, v41), 0x20u)),
              _mm_srli_epi32(v40, 0x10u)));
    v47 = _mm_mul_epu32(_mm_loadu_si128(&v99), v41);
    v48 = _mm_mul_epu32(v41, v30);
    v49 = _mm_add_epi32(
            _mm_or_si128(_mm_and_si128(_mm_mul_epu32(_mm_loadu_si128(v98), v32), v36), _mm_slli_epi64(v47, 0x20u)),
            _mm_srli_epi32(v44, 0x10u));
    v50 = _mm_add_epi32(_mm_srli_epi32(v45, 0x10u), v46);
    v51 = _mm_loadu_si128(&v96);
    v52 = _mm_loadu_si128(v100);
    v53 = _mm_add_epi32(_mm_srli_epi32(v50, 0x10u), _mm_add_epi32(_mm_and_si128(v52, v25), v49));
    v54 = _mm_add_epi32(
            _mm_slli_epi32(
              _mm_add_epi32(
                _mm_srli_epi32(v53, 0x10u),
                _mm_add_epi32(
                  _mm_and_si128(
                    _mm_or_si128(
                      _mm_and_si128(_mm_mul_epu32(v29, v51), v36),
                      _mm_slli_epi64(_mm_mul_epu32(v31, _mm_srli_epi64(v51, 0x20u)), 0x20u)),
                    v25),
                  _mm_add_epi32(
                    _mm_or_si128(_mm_and_si128(_mm_mul_epu32(v32, v97), v36), _mm_slli_epi64(v48, 0x20u)),
                    _mm_srli_epi32(v52, 0x10u)))),
              0x10u),
            _mm_and_si128(v53, v25));
    v55 = _mm_add_epi32(_mm_slli_epi32(v50, 0x10u), _mm_and_si128(v45, v25));
    *(__m128_u *)&a1 = v93;
    v56 = _mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x80000000), 0), (__m128i)v93);
    v57 = (__m128)_mm_or_si128(
                    _mm_srli_epi32(v54, 9u),
                    _mm_xor_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x3F800000u), 0), v56));
    v58 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x47400000u), 0);
    v59 = (__m128)_mm_xor_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x28800000u), 0), v56);
    v60 = (__m128)_mm_xor_si128(v56, _mm_shuffle_epi32(_mm_cvtsi32_si128(0x34000000u), 0));
    v61 = _mm_add_ps(v57, v58);
    v62 = _mm_sub_ps(
            (__m128)_mm_or_si128(
                      _mm_or_si128(
                        _mm_slli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x1FFu), 0), v54), 0xEu),
                        _mm_srli_epi32(v55, 0x12u)),
                      (__m128i)v60),
            v60);
    v63 = _mm_sub_ps(
            (__m128)_mm_or_si128(
                      _mm_slli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x3FFFFu), 0), v55), 5u),
                      (__m128i)v59),
            v59);
    v64 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0xB795777A), 0);
    v65 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x35800000u), 0);
    v66 = _mm_sub_ps(v57, _mm_sub_ps(v61, v58));
    v67 = _mm_add_ps(v66, v62);
    v68 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x40C91000u), 0);
    v69 = _mm_add_ps(v63, _mm_add_ps(v62, _mm_sub_ps(v66, v67)));
    v70 = _mm_and_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFF000), 0), v67);
    v71 = _mm_mul_ps(v68, v70);
    v72 = _mm_sub_ps(v67, v70);
    v73 = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(v68, v72), _mm_mul_ps(v70, v64)),
            _mm_add_ps(
              _mm_mul_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x40C90FDBu), 0), v69),
              _mm_mul_ps(v64, v72)));
    v74 = _mm_slli_epi32(_mm_and_si128((__m128i)v61, _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFu), 0)), 4u);
    v75 = _mm_and_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), 0), v93);
    v76 = _mm_add_ps(v73, v71);
    v77 = _mm_cmplt_ps(v65, v75);
    v78 = _mm_cvtsi128_si32(v74);
    v79 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v74, 2));
    v80 = _mm_or_ps(_mm_and_ps(_mm_cmple_ps(v75, v65), v93), _mm_and_ps(v76, v77));
    v81 = _mm_and_ps(v77, _mm_add_ps(v73, _mm_sub_ps(v71, v76)));
    v82 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v74, 3));
    v83 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v74, 1));
    v84 = (__m128)_mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v78)),
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v83))),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v79)),
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v82))));
    v85 = (__m128)_mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v78 + 12)),
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v83 + 12))),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v79 + 12)),
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v82 + 12))));
    v86 = _mm_mul_ps(v80, v85);
    v87 = _mm_mul_ps(v80, v80);
    v88 = _mm_mul_ps(v80, v84);
    v89 = (__m128)_mm_unpacklo_pd(
                    (__m128d)_mm_unpacklo_epi32(
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v78 + 4)),
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v83 + 4))),
                    (__m128d)_mm_unpacklo_epi32(
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v79 + 4)),
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v82 + 4))));
    v90 = _mm_add_ps(v89, v86);
    v91 = _mm_add_ps(v90, v88);
    v92 = _mm_sub_ps(_mm_add_ps(v84, v85), _mm_mul_ps(v80, v89));
    v10 = _mm_or_ps(
            _mm_andnot_ps(v94, v95),
            _mm_and_ps(
              _mm_add_ps(
                v91,
                _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      (__m128)_mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(
                                  _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v78 + 8)),
                                  _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v83 + 8))),
                                _mm_unpacklo_epi32(
                                  _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v79 + 8)),
                                  _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v82 + 8)))),
                      _mm_mul_ps(v81, v92)),
                    _mm_mul_ps(
                      v89,
                      _mm_mul_ps(v87, _mm_add_ps(_mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781280)), v87), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781240)))))),
                  _mm_add_ps(
                    _mm_add_ps(_mm_add_ps(v86, _mm_sub_ps(v89, v90)), _mm_add_ps(v88, _mm_sub_ps(v90, v91))),
                    _mm_mul_ps(
                      _mm_mul_ps(
                        _mm_mul_ps(
                          _mm_add_ps(_mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781200)), v87), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47811C0))),
                          v87),
                        v80),
                      v92)))),
              v94));
  }
  if ( v1 )
  {
    *(_OWORD *)v2 = *(_OWORD *)&a1;
    *(__m128_u *)(((unsigned __int64)v101 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v10;
    v12 = 0;
    v13 = v1;
    do
    {
      if ( _bittest(&v13, v12) )
        sub_1401FC4B0((__int64)&v2[v12], &v2[v12 + 16]);
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (int)v12 < 4 );
    return *(__m128_u *)(((unsigned __int64)v101 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return v10;
}

// 1401FA347: conditional instruction was optimized away because r10d.4!=0
// 1401FA180: inconsistent variable size for 'xmm0_8.8'

//----- (00000001401FAAC0) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_1401FAAC0(double a1)
{
  __m128 v1;
  int v2;
  float *v3;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  __int64 v14;
  int v15;
  __m128i v16;
  __m128i v17;
  unsigned int v18;
  unsigned int epi32;
  unsigned int v20;
  unsigned int v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  __m128i v42;
  __m128 v43;
  __m128 v44;
  __m128 v45;
  __m128 v46;
  __m128 v47;
  __m128 v48;
  __m128 v49;
  __m128 v50;
  __m128 v51;
  __m128 v52;
  __m128 v53;
  __m128 v54;
  __m128 v55;
  __m128 v56;
  __m128 v57;
  __m128 v58;
  __m128 v59;
  __m128 v60;
  __m128 v61;
  __m128 v62;
  __m128 v63;
  __m128 v64;
  __m128 v65;
  __m128 v66;
  __m128i v67;
  unsigned int v68;
  __m128 v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  __m128 v73;
  __m128 v74;
  __m128 v75;
  __m128 v76;
  __m128 v77;
  __m128 v78;
  __m128 v79;
  __m128 v80;
  __m128 v81;
  /* 64-byte aligned and large enough: the original aligns v82 down to 64 and uses 0x50 bytes from there,
     which in this frame would overwrite live locals (the special-lane mask), giving garbage for +-inf. */
  _Alignas(64) _BYTE v82[128];
  unsigned __int64 v83;

  v1 = *(__m128_u *)&a1;
  v2 = 0;
  v3 = (float *)((unsigned __int64)v82 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = _mm_and_ps(*(__m128_u *)&a1, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781100)));
  v5 = _mm_andnot_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781100)), *(__m128_u *)&a1);
  v6 = _mm_cmpnle_ps(v4, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781140)));
  v7 = _mm_add_ps(_mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781580)), v4), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47815C0)));
  v8 = _mm_sub_ps(v7, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47815C0)));
  v9 = _mm_sub_ps(
         _mm_sub_ps(
           _mm_sub_ps(
             _mm_sub_ps(v4, _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47812C0)), v8)),
             _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781300)), v8)),
           _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781340)), v8)),
         _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781380)), v8));
  v10 = _mm_mul_ps(v9, v9);
  v11 = _mm_xor_ps(v9, (__m128)_mm_slli_epi32((__m128i)v7, 0x1Fu));
  v83 = (unsigned __int64)v82 & 0xFFFFFFFFFFFFFFC0uLL;
  v12 = _mm_xor_ps(
          _mm_add_ps(
            v11,
            _mm_mul_ps(
              _mm_mul_ps(
                v10,
                _mm_add_ps(
                  _mm_mul_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_add_ps(_mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781540)), v10), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781500))), v10),
                      ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47814C0))),
                    v10),
                  ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781480)))),
              v11)),
          v5);
  if ( _mm_movemask_ps(v6) )
  {
    v16 = _mm_srli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7F800000u), 0), (__m128i)v1), 0x17u);
    v2 = _mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps(v4, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781180))), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781180))));
    v17 = _mm_slli_epi32(_mm_add_epi32(_mm_slli_epi32(v16, 1u), v16), 2u);
    v18 = _mm_cvtsi128_si32(v17);
    v81 = v12;
    epi32 = _mm_extract_epi32(v17, 2);
    v20 = _mm_extract_epi32(v17, 1);
    v21 = _mm_extract_epi32(v17, 3);
    v22 = _mm_unpacklo_epi64(
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v18 + 8)),
              *(_DWORD *)((char *)&unk_1B477F500 + v20 + 8),
              1),
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + epi32 + 8)),
              *(_DWORD *)((char *)&unk_1B477F500 + v21 + 8),
              1));
    v23 = _mm_unpacklo_epi64(
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v18 + 4)),
              *(_DWORD *)((char *)&unk_1B477F500 + v20 + 4),
              1),
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + epi32 + 4)),
              *(_DWORD *)((char *)&unk_1B477F500 + v21 + 4),
              1));
    v24 = _mm_srli_epi32(v22, 0x10u);
    v25 = _mm_srli_epi32(v23, 0x10u);
    v26 = _mm_unpacklo_epi64(
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + v18)),
              *(_DWORD *)((char *)&unk_1B477F500 + v20),
              1),
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + epi32)),
              *(_DWORD *)((char *)&unk_1B477F500 + v21),
              1));
    v27 = _mm_srli_epi32(v26, 0x10u);
    v28 = _mm_add_epi32(
            _mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFu), 0), (__m128i)v1),
            _mm_shuffle_epi32(_mm_cvtsi32_si128(0x800000u), 0));
    v29 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFu), 0);
    v30 = _mm_srli_epi32(v28, 0x10u);
    v31 = _mm_and_si128(v28, v29);
    v32 = _mm_and_si128(v23, v29);
    v33 = _mm_mullo_epi32(v31, v32);
    v34 = _mm_mullo_epi32(v31, v25);
    v35 = _mm_add_epi32(
            _mm_srli_epi32(_mm_mullo_epi32(_mm_and_si128(v22, v29), v30), 0x10u),
            _mm_add_epi32(
              _mm_and_si128(v33, v29),
              _mm_add_epi32(_mm_mullo_epi32(v30, v24), _mm_srli_epi32(_mm_mullo_epi32(v24, v31), 0x10u))));
    v36 = _mm_and_si128(v26, v29);
    v37 = _mm_mullo_epi32(v31, v36);
    v38 = _mm_add_epi32(
            _mm_srli_epi32(v35, 0x10u),
            _mm_add_epi32(_mm_and_si128(v34, v29), _mm_add_epi32(_mm_mullo_epi32(v32, v30), _mm_srli_epi32(v33, 0x10u))));
    v39 = _mm_add_epi32(
            _mm_srli_epi32(v38, 0x10u),
            _mm_add_epi32(_mm_and_si128(v37, v29), _mm_add_epi32(_mm_mullo_epi32(v25, v30), _mm_srli_epi32(v34, 0x10u))));
    v40 = _mm_add_epi32(
            _mm_slli_epi32(
              _mm_add_epi32(
                _mm_srli_epi32(v39, 0x10u),
                _mm_add_epi32(
                  _mm_and_si128(_mm_mullo_epi32(v31, v27), v29),
                  _mm_add_epi32(_mm_mullo_epi32(v30, v36), _mm_srli_epi32(v37, 0x10u)))),
              0x10u),
            _mm_and_si128(v39, v29));
    v41 = _mm_add_epi32(_mm_slli_epi32(v38, 0x10u), _mm_and_si128(v35, v29));
    v42 = _mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x80000000), 0), (__m128i)v1);
    v43 = (__m128)_mm_or_si128(
                    _mm_srli_epi32(v40, 9u),
                    _mm_xor_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x3F800000u), 0), v42));
    v44 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x47400000u), 0);
    v45 = (__m128)_mm_xor_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x28800000u), 0), v42);
    v46 = _mm_add_ps(v43, v44);
    v47 = (__m128)_mm_xor_si128(v42, _mm_shuffle_epi32(_mm_cvtsi32_si128(0x34000000u), 0));
    v48 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x40C91000u), 0);
    v49 = _mm_sub_ps(
            (__m128)_mm_or_si128(
                      _mm_or_si128(
                        _mm_slli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x1FFu), 0), v40), 0xEu),
                        _mm_srli_epi32(v41, 0x12u)),
                      (__m128i)v47),
            v47);
    v50 = _mm_sub_ps(v43, _mm_sub_ps(v46, v44));
    v51 = _mm_add_ps(v50, v49);
    v52 = _mm_and_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFF000), 0), v51);
    v53 = _mm_sub_ps(v50, v51);
    v54 = _mm_sub_ps(v51, v52);
    v55 = _mm_add_ps(
            _mm_sub_ps(
              (__m128)_mm_or_si128(
                        _mm_slli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x3FFFFu), 0), v41), 5u),
                        (__m128i)v45),
              v45),
            _mm_add_ps(v49, v53));
    v56 = _mm_mul_ps(v52, v48);
    v57 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0xB795777A), 0);
    v58 = _mm_and_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), 0), v1);
    v59 = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(v48, v54), _mm_mul_ps(v52, v57)),
            _mm_add_ps(
              _mm_mul_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x40C90FDBu), 0), v55),
              _mm_mul_ps(v57, v54)));
    v60 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x35800000u), 0);
    v61 = _mm_add_ps(v59, v56);
    v62 = _mm_cmplt_ps(v60, v58);
    v63 = _mm_add_ps(v59, _mm_sub_ps(v56, v61));
    v64 = _mm_and_ps(v61, v62);
    v65 = _mm_and_ps(v62, v63);
    v66 = _mm_or_ps(_mm_and_ps(_mm_cmple_ps(v58, v60), v1), v64);
    v67 = _mm_slli_epi32(_mm_and_si128((__m128i)v46, _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFu), 0)), 4u);
    v68 = _mm_cvtsi128_si32(v67);
    v69 = _mm_mul_ps(v66, v66);
    v70 = _mm_extract_epi32(v67, 2);
    v71 = _mm_extract_epi32(v67, 1);
    v72 = _mm_extract_epi32(v67, 3);
    v73 = (__m128)_mm_unpacklo_pd(
                    (__m128d)_mm_insert_epi32(
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v68 + 4)),
                               *(_DWORD *)((char *)&unk_1B4780100 + v71 + 4),
                               1),
                    (__m128d)_mm_insert_epi32(
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v70 + 4)),
                               *(_DWORD *)((char *)&unk_1B4780100 + v72 + 4),
                               1));
    v74 = (__m128)_mm_unpacklo_epi64(
                    _mm_insert_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v68 + 12)),
                      *(_DWORD *)((char *)&unk_1B4780100 + v71 + 12),
                      1),
                    _mm_insert_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v70 + 12)),
                      *(_DWORD *)((char *)&unk_1B4780100 + v72 + 12),
                      1));
    v75 = _mm_mul_ps(v66, v74);
    v76 = _mm_add_ps(v73, v75);
    v77 = (__m128)_mm_unpacklo_epi64(
                    _mm_insert_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v68)),
                      *(_DWORD *)((char *)&unk_1B4780100 + v71),
                      1),
                    _mm_insert_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v70)),
                      *(_DWORD *)((char *)&unk_1B4780100 + v72),
                      1));
    v78 = _mm_mul_ps(v66, v77);
    v79 = _mm_add_ps(v76, v78);
    v80 = _mm_sub_ps(_mm_add_ps(v77, v74), _mm_mul_ps(v66, v73));
    v12 = _mm_blendv_ps(
            v81,
            _mm_add_ps(
              v79,
              _mm_add_ps(
                _mm_add_ps(
                  _mm_add_ps(
                    (__m128)_mm_unpacklo_epi64(
                              _mm_insert_epi32(
                                _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v68 + 8)),
                                *(_DWORD *)((char *)&unk_1B4780100 + v71 + 8),
                                1),
                              _mm_insert_epi32(
                                _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + v70 + 8)),
                                *(_DWORD *)((char *)&unk_1B4780100 + v72 + 8),
                                1)),
                    _mm_mul_ps(v65, v80)),
                  _mm_mul_ps(
                    v73,
                    _mm_mul_ps(v69, _mm_add_ps(_mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781280)), v69), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781240)))))),
                _mm_add_ps(
                  _mm_add_ps(_mm_add_ps(v75, _mm_sub_ps(v73, v76)), _mm_add_ps(v78, _mm_sub_ps(v76, v79))),
                  _mm_mul_ps(
                    _mm_mul_ps(
                      _mm_mul_ps(_mm_add_ps(_mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781200)), v69), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47811C0))), v69),
                      v66),
                    v80)))),
            v6);
  }
  if ( v2 )
  {
    *(__m128_u *)v3 = v1;
    *(__m128_u *)(((unsigned __int64)v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v12;
    v14 = 0;
    v15 = v2;
    do
    {
      if ( _bittest(&v15, v14) )
        sub_1401FC4B0((__int64)&v3[v14], &v3[v14 + 16]);
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (int)v14 < 4 );
    return *(__m128_u *)(((unsigned __int64)v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return v12;
}

// 1401FAC87: conditional instruction was optimized away because r10d.4!=0
// 1401FAAC0: inconsistent variable size for 'xmm0_8.8'

//----- (00000001401FB240) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_1401FB240(double a1)
{
  __m128 v1;
  int v2;
  double *v3;
  __m128d v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  __m128d v8;
  __m128d v9;
  __m128d v10;
  __m128d v11;
  __m128d v12;
  __m128d v13;
  __m128 result;
  __int64 v15;
  int v16;
  __m128i v17;
  __int64 v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __int64 v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128d v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128d v41;
  __m128i v42;
  __m128 v43;
  __m128d v44;
  __m128d v45;
  __m128d v46;
  __m128d v47;
  __m128 v48;
  __m128d v49;
  __m128d v50;
  __m128d v51;
  __m128d v52;
  __m128d v53;
  __m128i v54;
  __m128d v55;
  __m128 v56;
  __m128 v57;
  __m128d v58;
  __int64 v59;
  unsigned int v60;
  __m128d v61;
  __m128d v62;
  __m128d v63;
  __m128d v64;
  __m128d v65;
  __m128d v66;
  __m128d v67;
  __m128d v68;
  __m128d v69;
  __m128d v70;
  __m128 v71;
  _BYTE v72[81];
  unsigned __int64 v73;

  v1 = *(__m128_u *)&a1;
  v2 = 0;
  v3 = (double *)((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4791C80)), *(__m128_u *)&a1);
  v5 = (__m128)_mm_sub_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D00)), v4);
  v6 = _mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4791C80)), v5);
  v7 = (__m128)_mm_cmpeq_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D00)), (__m128d)v5);
  v8 = _mm_cmpnle_pd((__m128d)v6, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791CC0)));
  v9 = _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D40)), (__m128d)v5), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D80)));
  v10 = _mm_sub_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791DC0)), _mm_sub_pd(v9, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D80))));
  v11 = _mm_add_pd(
          _mm_add_pd(
            _mm_add_pd(
              _mm_sub_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791E00)), v10), v4),
              _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791E40)), v10)),
            _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791E80)), v10)),
          _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791EC0)), v10));
  v12 = _mm_mul_pd(v11, v11);
  v13 = (__m128d)_mm_xor_si128((__m128i)v11, _mm_slli_epi64((__m128i)v9, 0x3Fu));
  v73 = (unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL;
  result = _mm_or_ps(
             _mm_andnot_ps(
               v7,
               (__m128)_mm_add_pd(
                         v13,
                         _mm_mul_pd(
                           _mm_add_pd(
                             _mm_mul_pd(
                               _mm_add_pd(
                                 _mm_mul_pd(
                                   _mm_add_pd(
                                     _mm_mul_pd(
                                       _mm_add_pd(
                                         _mm_mul_pd(
                                           _mm_add_pd(
                                             _mm_mul_pd(
                                               _mm_add_pd(
                                                 _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792180)), v12),
                                                 ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792140))),
                                               v12),
                                             ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792100))),
                                           v12),
                                         ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B47920C0))),
                                       v12),
                                     ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792080))),
                                   v12),
                                 ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792040))),
                               v12),
                             ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791FC0))),
                           _mm_mul_pd(v12, v13)))),
             _mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47921C0)), v7));
  if ( _mm_movemask_pd(v8) )
  {
    v71 = result;
    v17 = _mm_srli_epi64(_mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E500), (__m128i)v1), 0x34u);
    v18 = (unsigned int)(24 * _mm_cvtsi128_si32(v17));
    SR_VEC_LANES(128, v19, i64)[0] = *(_QWORD *)((char *)&unk_1B4781700 + v18);
    SR_VEC_LANES(128, v20, i64)[0] = *(_QWORD *)((char *)&unk_1B4781700 + v18 + 8);
    SR_VEC_LANES(128, v21, i64)[0] = *(_QWORD *)((char *)&unk_1B4781700 + v18 + 16);
    v22 = _mm_add_epi64(
            _mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E510), (__m128i)v1),
            _mm_load_si128((const __m128i *)&xmmword_1B476E520));
    v2 = _mm_movemask_pd(_mm_cmpeq_pd((__m128d)_mm_and_ps(v6, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4791980))), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791980))));
    v23 = _mm_loadu_si128((     __m128i *)&xmmword_1B476E530);
    v24 = _mm_srli_epi64(v22, 0x20u);
    v25 = (unsigned int)(24 * _mm_extract_epi16(v17, 4));
    v26 = _mm_and_si128(v22, v23);
    SR_VEC_LANES(128, v21, i64)[1] = *(__int64 *)((char *)&unk_1B4781700 + v25 + 16);
    v27 = _mm_srli_epi64(v21, 0x20u);
    SR_VEC_LANES(128, v20, i64)[1] = *(__int64 *)((char *)&unk_1B4781700 + v25 + 8);
    v28 = v20;
    v29 = _mm_and_si128(v20, v23);
    v30 = _mm_mul_epu32(v26, v29);
    v31 = (__m128d)_mm_srli_epi64(v28, 0x20u);
    v32 = _mm_mul_epu32(v26, (__m128i)v31);
    SR_VEC_LANES(128, v19, i64)[1] = *(__int64 *)((char *)&unk_1B4781700 + v25);
    v33 = _mm_and_si128(v23, v19);
    v34 = _mm_add_epi64(
            _mm_srli_epi64(_mm_mul_epu32(_mm_and_si128(v21, v23), v24), 0x20u),
            _mm_add_epi64(
              _mm_and_si128(v23, v30),
              _mm_add_epi64(_mm_mul_epu32(v24, v27), _mm_srli_epi64(_mm_mul_epu32(v27, v26), 0x20u))));
    v35 = _mm_mul_epu32(v26, v33);
    v36 = _mm_add_epi64(
            _mm_srli_epi64(v34, 0x20u),
            _mm_add_epi64(_mm_and_si128(v23, v32), _mm_add_epi64(_mm_mul_epu32(v29, v24), _mm_srli_epi64(v30, 0x20u))));
    v37 = _mm_add_epi64(
            _mm_srli_epi64(v36, 0x20u),
            _mm_add_epi64(
              _mm_and_si128(v23, v35),
              _mm_add_epi64(_mm_mul_epu32((__m128i)v31, v24), _mm_srli_epi64(v32, 0x20u))));
    v38 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_add_epi64(
                _mm_srli_epi64(v37, 0x20u),
                _mm_add_epi64(
                  _mm_and_si128(_mm_mul_epu32(v26, _mm_srli_epi64(v19, 0x20u)), v23),
                  _mm_add_epi64(_mm_mul_epu32(v24, v33), _mm_srli_epi64(v35, 0x20u)))),
              0x20u),
            _mm_and_si128(v37, v23));
    v39 = _mm_add_epi64(_mm_slli_epi64(v36, 0x20u), _mm_and_si128(v34, v23));
    v40 = _mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E540), (__m128i)v1);
    v41 = (__m128d)_mm_or_si128(
                     _mm_srli_epi64(v38, 0xCu),
                     _mm_xor_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E550), v40));
    v42 = _mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E590), v39);
    v43 = (__m128)_mm_add_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E560)), v41);
    v44 = (__m128d)_mm_xor_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E580), v40);
    v45 = (__m128d)_mm_xor_si128(v40, _mm_load_si128((const __m128i *)&xmmword_1B476E5A0));
    v46 = _mm_sub_pd(v41, _mm_sub_pd((__m128d)v43, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E560))));
    v47 = _mm_sub_pd(
            (__m128d)_mm_or_si128(
                       _mm_or_si128(
                         _mm_slli_epi64(_mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E5B0), v38), 0x28u),
                         _mm_srli_epi64(v39, 0x18u)),
                       (__m128i)v45),
            v45);
    v48 = (__m128)_mm_add_pd(v46, v47);
    v49 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E5F0)), v48);
    v50 = _mm_add_pd(
            _mm_sub_pd((__m128d)_mm_or_si128(_mm_slli_epi64(v42, 0x1Cu), (__m128i)v44), v44),
            _mm_add_pd(v47, _mm_sub_pd(v46, (__m128d)v48)));
    v51 = _mm_sub_pd((__m128d)v48, v49);
    v52 = _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E5D0)), v49);
    v53 = _mm_add_pd(
            _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E5D0)), v51), _mm_mul_pd(v49, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E5E0)))),
            _mm_add_pd(_mm_mul_pd(v50, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E5C0))), _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E5E0)), v51)));
    v54 = (__m128i)_mm_and_ps(v43, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E570)));
    v55 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E600)), v1);
    v56 = (__m128)_mm_add_pd(v53, v52);
    v57 = (__m128)_mm_cmplt_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E610)), v55);
    v58 = _mm_sub_pd(v52, (__m128d)v56);
    v59 = (unsigned int)(32 * _mm_cvtsi128_si32(v54));
    SR_VEC_LANES(128, v46, f64)[0] = *(double *)((char *)&unk_1B478D900 + v59);
    v60 = 32 * _mm_extract_epi16(v54, 4);
    v61 = (__m128d)_mm_or_ps(
                     _mm_and_ps((__m128)_mm_cmple_pd(v55, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E610))), v1),
                     _mm_and_ps(v56, v57));
    SR_VEC_LANES(128, v31, f64)[0] = *(double *)((char *)&unk_1B478D900 + v59 + 8);
    SR_VEC_LANES(128, v31, f64)[1] = *(double *)((char *)&unk_1B478D900 + v60 + 8);
    v62 = _mm_mul_pd(v61, v31);
    SR_VEC_LANES(128, v51, f64)[0] = *(double *)((char *)&unk_1B478D900 + v59 + 16);
    SR_VEC_LANES(128, v46, f64)[1] = *(double *)((char *)&unk_1B478D900 + v60);
    SR_VEC_LANES(128, v51, f64)[1] = *(double *)((char *)&unk_1B478D900 + v60 + 16);
    v63 = _mm_mul_pd(v61, v46);
    v64 = _mm_add_pd(v46, v31);
    v65 = _mm_add_pd(v51, v62);
    v66 = _mm_add_pd(v65, v63);
    v67 = _mm_add_pd(_mm_add_pd(v62, _mm_sub_pd(v51, v65)), _mm_add_pd(v63, _mm_sub_pd(v65, v66)));
    v68 = _mm_mul_pd(v61, v61);
    v69 = _mm_mul_pd((__m128d)_mm_and_ps(v57, (__m128)_mm_add_pd(v53, v58)), _mm_sub_pd(v64, _mm_mul_pd(v61, v51)));
    v70 = _mm_add_pd(
            _mm_add_pd(
              v67,
              _mm_mul_pd(
                _mm_mul_pd(
                  _mm_mul_pd(_mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791B80)), v68), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791B40))), v68),
                  v61),
                v64)),
            _mm_mul_pd(
              _mm_mul_pd(
                v68,
                _mm_add_pd(
                  _mm_mul_pd(_mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791C40)), v68), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791C00))), v68),
                  ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791BC0)))),
              v51));
    SR_VEC_LANES(128, v61, f64)[0] = *(double *)((char *)&unk_1B478D900 + v59 + 24);
    SR_VEC_LANES(128, v61, f64)[1] = *(double *)((char *)&unk_1B478D900 + v60 + 24);
    result = _mm_or_ps(
               _mm_andnot_ps((__m128)v8, v71),
               _mm_and_ps((__m128)_mm_add_pd(v66, _mm_add_pd(v70, _mm_add_pd(v61, v69))), (__m128)v8));
  }
  if ( v2 )
  {
    *(__m128_u *)v3 = v1;
    *(__m128_u *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = result;
    v15 = 0;
    v16 = v2;
    do
    {
      if ( _bittest(&v16, v15) )
        sub_1401FC520((__int64)&v3[v15], &v3[v15 + 8]);
      v15 = (unsigned int)(v15 + 1);
    }
    while ( (int)v15 < 2 );
    return *(__m128_u *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return result;
}

// 1401FB479: conditional instruction was optimized away because r9d.4!=0
// 1401FB240: inconsistent variable size for 'xmm0_8.8'

//----- (00000001401FB8F0) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128d            sub_1401FB8F0(double a1)
{
  __m128 v1;
  int v2;
  double *v3;
  __m128d v4;
  __m128 v5;
  __m128 v6;
  __m128d v7;
  __m128d v8;
  __m128d v9;
  __m128 v10;
  __m128d v11;
  __m128 v12;
  __m128d v13;
  __m128d v14;
  __m128d v15;
  __int64 v17;
  int v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __int64 v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __int64 v26;
  __m128i si128;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  __m128d v42;
  __m128 v43;
  __m128i v44;
  __m128d v45;
  __m128d v46;
  __m128i v47;
  __m128d v48;
  __m128d v49;
  __m128 v50;
  __m128d v51;
  __m128d v52;
  __m128d v53;
  __m128d v54;
  __m128d v55;
  __m128i v56;
  __m128d v57;
  __m128 v58;
  __m128 v59;
  __m128d v60;
  __int64 v61;
  unsigned int v62;
  __m128d v63;
  __m128d v64;
  __m128d v65;
  __m128d v66;
  __m128d v67;
  __m128d v68;
  __m128d v69;
  __m128d v70;
  __m128d v71;
  _BYTE v72[81];
  unsigned __int64 v73;

  v1 = *(__m128_u *)&a1;
  v2 = 0;
  v3 = (double *)((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (__m128d)_mm_and_ps(*(__m128_u *)&a1, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4791C80)));
  v5 = (__m128)_mm_sub_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D00)), v4);
  v6 = _mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4791C80)), v5);
  v7 = _mm_cmpeq_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D00)), (__m128d)v5);
  v8 = _mm_cmpnle_pd((__m128d)v6, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791CC0)));
  v9 = _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D40)), (__m128d)v5), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D80)));
  v10 = (__m128)_mm_slli_epi64((__m128i)v9, 0x3Fu);
  v11 = _mm_sub_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791DC0)), _mm_sub_pd(v9, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D80))));
  v12 = (__m128)_mm_add_pd(
                  _mm_add_pd(
                    _mm_add_pd(
                      _mm_sub_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791E00)), v11), v4),
                      _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791E40)), v11)),
                    _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791E80)), v11)),
                  _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791EC0)), v11));
  v13 = _mm_mul_pd((__m128d)v12, (__m128d)v12);
  v14 = (__m128d)_mm_xor_ps(v12, v10);
  v73 = (unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL;
  v15 = _mm_blendv_pd(
          _mm_add_pd(
            v14,
            _mm_mul_pd(
              _mm_add_pd(
                _mm_mul_pd(
                  _mm_add_pd(
                    _mm_mul_pd(
                      _mm_add_pd(
                        _mm_mul_pd(
                          _mm_add_pd(
                            _mm_mul_pd(
                              _mm_add_pd(
                                _mm_mul_pd(
                                  _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792180)), v13), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792140))),
                                  v13),
                                ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792100))),
                              v13),
                            ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B47920C0))),
                          v13),
                        ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792080))),
                      v13),
                    ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792040))),
                  v13),
                ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791FC0))),
              _mm_mul_pd(v13, v14))),
          ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B47921C0)),
          v7);
  if ( _mm_movemask_pd(v8) )
  {
    v2 = _mm_movemask_pd(_mm_cmpeq_pd((__m128d)_mm_and_ps(v6, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4791980))), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791980))));
    v19 = _mm_srli_epi64(_mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E700), (__m128i)v1), 0x34u);
    v20 = _mm_add_epi64(
            _mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E710), (__m128i)v1),
            _mm_load_si128((const __m128i *)&xmmword_1B476E720));
    v21 = _mm_srli_epi64(v20, 0x20u);
    v22 = (unsigned int)(24 * _mm_cvtsi128_si32(v19));
    SR_VEC_LANES(128, v23, i64)[0] = *(_QWORD *)((char *)&unk_1B4781700 + v22);
    SR_VEC_LANES(128, v24, i64)[0] = *(_QWORD *)((char *)&unk_1B4781700 + v22 + 8);
    SR_VEC_LANES(128, v25, i64)[0] = *(_QWORD *)((char *)&unk_1B4781700 + v22 + 16);
    v26 = (unsigned int)(24 * _mm_extract_epi16(v19, 4));
    si128 = _mm_load_si128((     __m128i *)&xmmword_1B476E730);
    v28 = _mm_and_si128(v20, si128);
    SR_VEC_LANES(128, v25, i64)[1] = *(__int64 *)((char *)&unk_1B4781700 + v26 + 16);
    v29 = _mm_srli_epi64(v25, 0x20u);
    SR_VEC_LANES(128, v24, i64)[1] = *(__int64 *)((char *)&unk_1B4781700 + v26 + 8);
    v30 = v24;
    v31 = _mm_and_si128(v24, si128);
    v32 = _mm_mul_epu32(v28, v31);
    v33 = _mm_srli_epi64(v30, 0x20u);
    v34 = _mm_mul_epu32(v28, v33);
    v71 = v15;
    SR_VEC_LANES(128, v23, i64)[1] = *(__int64 *)((char *)&unk_1B4781700 + v26);
    v35 = _mm_and_si128(si128, v23);
    v36 = _mm_add_epi64(
            _mm_srli_epi64(_mm_mul_epu32(_mm_and_si128(v25, si128), v21), 0x20u),
            _mm_add_epi64(
              _mm_and_si128(si128, v32),
              _mm_add_epi64(_mm_mul_epu32(v21, v29), _mm_srli_epi64(_mm_mul_epu32(v29, v28), 0x20u))));
    v37 = _mm_mul_epu32(v28, v35);
    v38 = _mm_add_epi64(
            _mm_srli_epi64(v36, 0x20u),
            _mm_add_epi64(_mm_and_si128(si128, v34), _mm_add_epi64(_mm_mul_epu32(v31, v21), _mm_srli_epi64(v32, 0x20u))));
    v39 = _mm_add_epi64(
            _mm_srli_epi64(v38, 0x20u),
            _mm_add_epi64(_mm_and_si128(si128, v37), _mm_add_epi64(_mm_mul_epu32(v33, v21), _mm_srli_epi64(v34, 0x20u))));
    v40 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_add_epi64(
                _mm_srli_epi64(v39, 0x20u),
                _mm_add_epi64(
                  _mm_and_si128(_mm_mul_epu32(v28, _mm_srli_epi64(v23, 0x20u)), si128),
                  _mm_add_epi64(_mm_mul_epu32(v21, v35), _mm_srli_epi64(v37, 0x20u)))),
              0x20u),
            _mm_and_si128(v39, si128));
    v41 = _mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E740), (__m128i)v1);
    v42 = (__m128d)_mm_or_si128(
                     _mm_srli_epi64(v40, 0xCu),
                     _mm_xor_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E750), v41));
    v43 = (__m128)_mm_add_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E760)), v42);
    v44 = _mm_add_epi64(_mm_slli_epi64(v38, 0x20u), _mm_and_si128(v36, si128));
    v45 = (__m128d)_mm_xor_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E780), v41);
    v46 = (__m128d)_mm_xor_si128(v41, _mm_load_si128((const __m128i *)&xmmword_1B476E7A0));
    v47 = _mm_slli_epi64(_mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E790), v44), 0x1Cu);
    v48 = _mm_sub_pd(v42, _mm_sub_pd((__m128d)v43, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E760))));
    v49 = _mm_sub_pd(
            (__m128d)_mm_or_si128(
                       _mm_or_si128(
                         _mm_slli_epi64(_mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E7B0), v40), 0x28u),
                         _mm_srli_epi64(v44, 0x18u)),
                       (__m128i)v46),
            v46);
    v50 = (__m128)_mm_add_pd(v48, v49);
    v51 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E7F0)), v50);
    v52 = _mm_add_pd(
            _mm_sub_pd((__m128d)_mm_or_si128(v47, (__m128i)v45), v45),
            _mm_add_pd(v49, _mm_sub_pd(v48, (__m128d)v50)));
    v53 = _mm_sub_pd((__m128d)v50, v51);
    v54 = _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E7D0)), v51);
    v55 = _mm_add_pd(
            _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E7D0)), v53), _mm_mul_pd(v51, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E7E0)))),
            _mm_add_pd(_mm_mul_pd(v52, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E7C0))), _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E7E0)), v53)));
    v56 = (__m128i)_mm_and_ps(v43, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E770)));
    v57 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E800)), v1);
    v58 = (__m128)_mm_add_pd(v55, v54);
    v59 = (__m128)_mm_cmplt_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E810)), v57);
    v60 = _mm_sub_pd(v54, (__m128d)v58);
    v61 = (unsigned int)(32 * _mm_cvtsi128_si32(v56));
    SR_VEC_LANES(128, v45, f64)[0] = *(double *)((char *)&unk_1B478D900 + v61);
    v62 = 32 * _mm_extract_epi16(v56, 4);
    v63 = (__m128d)_mm_or_ps(
                     _mm_and_ps((__m128)_mm_cmple_pd(v57, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E810))), v1),
                     _mm_and_ps(v58, v59));
    SR_VEC_LANES(128, v58, u64)[0] = *(_QWORD *)((char *)&unk_1B478D900 + v61 + 8);
    SR_VEC_LANES(128, v58, u64)[1] = *(unsigned __int64 *)((char *)&unk_1B478D900 + v62 + 8);
    v64 = _mm_mul_pd(v63, (__m128d)v58);
    SR_VEC_LANES(128, v51, f64)[0] = *(double *)((char *)&unk_1B478D900 + v61 + 16);
    SR_VEC_LANES(128, v45, f64)[1] = *(double *)((char *)&unk_1B478D900 + v62);
    SR_VEC_LANES(128, v51, f64)[1] = *(double *)((char *)&unk_1B478D900 + v62 + 16);
    v65 = _mm_mul_pd(v63, v45);
    v66 = _mm_add_pd(v45, (__m128d)v58);
    v67 = _mm_add_pd(v51, v64);
    v68 = _mm_add_pd(v67, v65);
    v69 = _mm_mul_pd(v63, v63);
    v70 = _mm_add_pd(
            _mm_add_pd(_mm_add_pd(v64, _mm_sub_pd(v51, v67)), _mm_add_pd(v65, _mm_sub_pd(v67, v68))),
            _mm_mul_pd(
              _mm_mul_pd(
                _mm_mul_pd(_mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791B80)), v69), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791B40))), v69),
                v63),
              v66));
    SR_VEC_LANES(128, v65, f64)[0] = *(double *)((char *)&unk_1B478D900 + v61 + 24);
    SR_VEC_LANES(128, v65, f64)[1] = *(double *)((char *)&unk_1B478D900 + v62 + 24);
    v15 = _mm_blendv_pd(
            v71,
            _mm_add_pd(
              v68,
              _mm_add_pd(
                _mm_add_pd(
                  v70,
                  _mm_mul_pd(
                    _mm_mul_pd(
                      v69,
                      _mm_add_pd(
                        _mm_mul_pd(
                          _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791C40)), v69), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791C00))),
                          v69),
                        ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791BC0)))),
                    v51)),
                _mm_add_pd(
                  v65,
                  _mm_mul_pd(
                    (__m128d)_mm_and_ps(v59, (__m128)_mm_add_pd(v55, v60)),
                    _mm_sub_pd(v66, _mm_mul_pd(v63, v51)))))),
            v8);
  }
  if ( v2 )
  {
    *(__m128_u *)v3 = v1;
    *(__m128d_u *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v15;
    v17 = 0;
    v18 = v2;
    do
    {
      if ( _bittest(&v18, v17) )
        sub_1401FC520((__int64)&v3[v17], &v3[v17 + 8]);
      v17 = (unsigned int)(v17 + 1);
    }
    while ( (int)v17 < 2 );
    return *(__m128d_u *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return v15;
}

// 1401FBB1C: conditional instruction was optimized away because r9d.4!=0
// 1401FB8F0: inconsistent variable size for 'xmm0_8.8'

//----- (00000001401FBF9C) ----------------------------------------------------
__int64            CMFCToolBarImages__UpdateInternalImage(CMFCToolBarImages *this)
{
  return 1;
}

//----- (00000001401FBFA4) ----------------------------------------------------
_BOOL8 _acrt_locale_changed_sr()
{
  return g_1B475C0D8 != 0;
}

//----- (00000001401FBFB0) ----------------------------------------------------
void sub_1401FBFB0()
{
  g_144CBE510 = 0;
}

//----- (00000001401FBFB8) ----------------------------------------------------
void            sub_1401FBFB8(unsigned int a1)
{
  __int64 v2;
  __int64 v3;
  bool v4;
  _QWORD ExceptionInfo[2];
  _DWORD v6[4];
  void *v7;
  _QWORD ContextRecord[154];
  void *retaddr;
  __int64 v10;
  unsigned __int64 ImageBase;
  unsigned __int64 v12;
  __int64 v13;

  if ( (unsigned int)sub_1401FC5EA() )
    __fastfail(a1);
  sub_1401FBFB0();
  crt_memset((void *)(uintptr_t)(ContextRecord), 0, 0x4D0u);
  ((void (           *)(_QWORD *))RtlCaptureContext)(ContextRecord);
  v2 = ContextRecord[31];
  v3 = ((__int64 (           *)(_QWORD, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(
         ContextRecord[31],
         &ImageBase,
         0);
  if ( v3 )
    ((void (           *)(_QWORD, unsigned __int64, __int64, __int64, _QWORD *, __int64 *, unsigned __int64 *, _QWORD))RtlVirtualUnwind)(
      0,
      ImageBase,
      v2,
      v3,
      ContextRecord,
      &v13,
      &v12,
      0);
  ContextRecord[31] = (uint64)(uintptr_t)(retaddr);
  ContextRecord[19] = (uint64)(uintptr_t)(&v10);
  crt_memset((void *)(uintptr_t)(v6), 0, 0x98u);
  v7 = retaddr;
  v6[0] = 1073741845;
  v6[1] = 1;
  ExceptionInfo[0] = (uint64)(uintptr_t)(v6);
  v4 = IsDebuggerPresent();
  ExceptionInfo[1] = (uint64)(uintptr_t)(ContextRecord);
  ((void (           *)(_QWORD))SetUnhandledExceptionFilter)(0);
  if ( !(unsigned int)((__int64 (           *)(_QWORD *))UnhandledExceptionFilter)(ExceptionInfo) && !v4 )
    sub_1401FBFB0();
}

// 14026E2E0: invalid function type 'void (__stdcall *RtlCaptureContext)(PCONTEXT ContextRecord)' has been ignored
// 14026E2D8: invalid function type 'PRUNTIME_FUNCTION (__stdcall *RtlLookupFunctionEntry)(ULONG64 ControlPc, PULONG64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored
// 14026E2D0: invalid function type 'PEXCEPTION_ROUTINE (__stdcall *RtlVirtualUnwind)(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)' has been ignored
// 14026E2C0: invalid function type 'LPTOP_LEVEL_EXCEPTION_FILTER (__stdcall *SetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)' has been ignored
// 14026E2C8: invalid function type 'LONG (__stdcall *UnhandledExceptionFilter)(struct _EXCEPTION_POINTERS *ExceptionInfo)' has been ignored

//----- (00000001401FC104) ----------------------------------------------------
__int16 sub_1401FC104()
{
  __int16 result;
  _WORD StartupInfo[60];

  crt_memset((void *)(uintptr_t)(StartupInfo), 0, 0x68u);
  ((void (           *)(_WORD *))GetStartupInfoW)(StartupInfo);
  result = 10;
  if ( (StartupInfo[30] & 1) != 0 )
    return StartupInfo[32];
  return result;
}

// 14026E2A0: invalid function type 'void (__stdcall *GetStartupInfoW)(LPSTARTUPINFOW lpStartupInfo)' has been ignored

//----- (00000001401FC140)
int sub_1401FC140(void) { return sr_client_zero_callback(); }

//----- (00000001401FC148) ----------------------------------------------------
__int64 sub_1401FC148()
{
  return 0;
}

//----- (00000001401FC14C) ----------------------------------------------------
bool is_managed_app()
{
  __int64 v0;
  __int64 v1;
  bool result;

  v0 = ((__int64 (           *)(_QWORD))GetModuleHandleW)(0);
  result = false;
  if ( v0 )
  {
    if ( *(_WORD *)v0 == 23117 )
    {
      v1 = v0 + *(int *)(v0 + 60);
      if ( *(_DWORD *)v1 == 17744 && *(_WORD *)(v1 + 24) == 523 && *(_DWORD *)(v1 + 132) > 0xEu && *(_DWORD *)(v1 + 248) )
        return true;
    }
  }
  return result;
}

// 14026E298: invalid function type 'HMODULE (__stdcall *GetModuleHandleW)(LPCWSTR lpModuleName)' has been ignored

//----- (00000001401FC1A0) ----------------------------------------------------
__int64 sub_1401FC1A0()
{
  return ((__int64 (           *)(_QWORD))SetUnhandledExceptionFilter)(sub_1401FC1B4);
}

// 14026E2C0: invalid function type 'LPTOP_LEVEL_EXCEPTION_FILTER (__stdcall *SetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)' has been ignored

//----- (00000001401FC1B4) ----------------------------------------------------
__int64            sub_1401FC1B4(_QWORD *a1)
{
  _DWORD *v1;
  int v3;
  __int64 v5;

  v1 = (_DWORD *)*a1;
  if ( *(_DWORD *)*a1 == -529697949 && v1[6] == 4 )
  {
    v3 = v1[8];
    if ( (unsigned int)(v3 - 429065504) <= 2 || v3 == 26820608 )
    {
      *(_QWORD *)sub_1401FD380() = (uint64)(uintptr_t)(v1);
      v5 = a1[1];
      *(_QWORD *)sub_1401FD394() = v5;
      terminate_sr();
    }
  }
  return 0;
}

//----- (00000001401FC210) ----------------------------------------------------
void guard_check_icall_nop()
{
  ;
}

//----- (00000001401FC238) ----------------------------------------------------
unsigned __int64 sub_1401FC238()
{
  unsigned __int64 v1;
  unsigned __int64 SystemTimeAsFileTime;
  __int64 PerformanceCount;

  SystemTimeAsFileTime = 0;
  ((void (           *)(unsigned __int64 *))GetSystemTimeAsFileTime)(&SystemTimeAsFileTime);
  v1 = SystemTimeAsFileTime;
  v1 ^= (unsigned int)((__int64 (*)(void))GetCurrentThreadId)();
  v1 ^= (unsigned int)((__int64 (*)(void))GetCurrentProcessId)();
  QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
  return ((unsigned __int64)&v1
        ^ v1
        ^ PerformanceCount
        ^ ((unsigned __int64)(unsigned int)PerformanceCount << 32))
       & 0xFFFFFFFFFFFFLL;
}

// 14026E310: invalid function type 'void (__stdcall *GetSystemTimeAsFileTime)(LPFILETIME lpSystemTimeAsFileTime)' has been ignored
// 14026E288: invalid function type 'DWORD (__stdcall *GetCurrentThreadId)()' has been ignored
// 14026E290: invalid function type 'DWORD (__stdcall *GetCurrentProcessId)()' has been ignored

//----- (00000001401FC2A4) ----------------------------------------------------
__int64 sub_1401FC2A4()
{
  unsigned __int64 v0;
  __int64 result;
  unsigned __int64 v2;
  unsigned __int64 SystemTimeAsFileTime;
  __int64 PerformanceCount;

  v0 = _security_cookie;
  if ( _security_cookie == 0x2B992DDFA232LL )
  {
    SystemTimeAsFileTime = 0;
    ((void (           *)(unsigned __int64 *))GetSystemTimeAsFileTime)(&SystemTimeAsFileTime);
    v2 = SystemTimeAsFileTime;
    v2 ^= (unsigned int)((__int64 (*)(void))GetCurrentThreadId)();
    v2 ^= (unsigned int)((__int64 (*)(void))GetCurrentProcessId)();
    QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
    v0 = ((unsigned __int64)&v2
        ^ v2
        ^ PerformanceCount
        ^ ((unsigned __int64)(unsigned int)PerformanceCount << 32))
       & 0xFFFFFFFFFFFFLL;
    if ( v0 == 0x2B992DDFA232LL )
      v0 = 0x2B992DDFA233LL;
    _security_cookie = v0;
  }
  result = ~v0;
  qword_140302098 = result;
  return result;
}

// 14026E310: invalid function type 'void (__stdcall *GetSystemTimeAsFileTime)(LPFILETIME lpSystemTimeAsFileTime)' has been ignored
// 14026E288: invalid function type 'DWORD (__stdcall *GetCurrentThreadId)()' has been ignored
// 14026E290: invalid function type 'DWORD (__stdcall *GetCurrentProcessId)()' has been ignored

//----- (00000001401FC350) ----------------------------------------------------
__int64            UserMathErrorFunction(struct _exception *a1)
{
  return 0;
}

//----- (00000001401FC354) ----------------------------------------------------
__int64 sub_1401FC354()
{
  return 0;
}

//----- (00000001401FC358) ----------------------------------------------------
__int64 sub_1401FC358()
{
  return 0x4000;
}

//----- (00000001401FC360) ----------------------------------------------------
__int64 sub_1401FC360()
{
  return 0;
}

//----- (00000001401FC364) ----------------------------------------------------
__int64 sub_1401FC364()
{
  return 0;
}

//----- (00000001401FC368) ----------------------------------------------------
__int64 sub_1401FC368()
{
  return ((__int64 (           *)(unsigned int *))InitializeSListHead)(&g_144CBE520);
}

// 14026E280: invalid function type 'void (__stdcall *InitializeSListHead)(PSLIST_HEADER ListHead)' has been ignored

//----- (00000001401FC384) ----------------------------------------------------
char sub_1401FC384()
{
  return 1;
}

//----- (00000001401FC388) ----------------------------------------------------
void nullsub_12()
{
  ;
}

//----- (00000001401FC38C) ----------------------------------------------------
void nullsub_13()
{
  ;
}

//----- (00000001401FC390) ----------------------------------------------------
unsigned int *sub_1401FC390()
{
  unsigned int *v0;
  unsigned int *result;

  v0 = sub_140001BB0();
  *(_QWORD *)v0 |= 0x24uLL;
  result = sub_140001BC0();
  *(_QWORD *)result |= 2uLL;
  return result;
}

//----- (00000001401FC3AC) ----------------------------------------------------
_BOOL8 sub_1401FC3AC()
{
  return dword_1403020B0 == 0;
}

//----- (00000001401FC3B8) ----------------------------------------------------
unsigned int *sub_1401FC3B8()
{
  return &g_1B475C0D0;
}

//----- (00000001401FC3C0) ----------------------------------------------------
unsigned int *sub_1401FC3C0()
{
  return &g_1B475C0C8;
}

//----- (00000001401FC3C8) ----------------------------------------------------
void sub_1401FC3C8()
{
  void (**i)(void);

  for ( i = qword_140294660; i < qword_140294660; ++i )
  {
    if ( *i )
      (*i)();
  }
}

//----- (00000001401FC404) ----------------------------------------------------
void sub_1401FC404()
{
  void (**i)(void);

  for ( i = &qword_140294670; i < &qword_140294670; ++i )
  {
    if ( *i )
      (*i)();
  }
}

//----- (00000001401FC440) ----------------------------------------------------
__int64            sub_1401FC440(__int64 a1, double *a2)
{
  double v2;
  double v4;

  v2 = *(double *)a1;
  v4 = *(double *)a1;
  if ( (*(_WORD *)(a1 + 6) & 0x7FF0) != 0x7FF0 )
    return 0;
  if ( LODWORD(v4) || (HIBYTE(v4) = *(_BYTE *)(a1 + 7) & 0x7F, HIDWORD(v4) != 2146435072) )
  {
    *a2 = v2 * v2;
    return 0;
  }
  else
  {
    *a2 = v2 * 0.0;
    return 1;
  }
}

//----- (00000001401FC4B0) ----------------------------------------------------
__int64            sub_1401FC4B0(__int64 a1, float *a2)
{
  float v2;
  __int64 result;
  float v4;
  float v5;

  v5 = *(float *)a1;
  v2 = *(float *)a1;
  if ( (*(_WORD *)(a1 + 2) & 0x7F80) != 0x7F80 )
    return 0;
  HIBYTE(v5) = HIBYTE(*(_DWORD *)a1) & 0x7F;
  if ( v5 == INFINITY )
  {
    result = 1;
    v4 = v2 * 0.0;
  }
  else
  {
    v4 = v2 * *(float *)a1;
    result = 0;
  }
  *a2 = v4;
  return result;
}

//----- (00000001401FC520) ----------------------------------------------------
__int64            sub_1401FC520(__int64 a1, double *a2)
{
  double v2;
  double v4;

  v2 = *(double *)a1;
  v4 = *(double *)a1;
  if ( (*(_WORD *)(a1 + 6) & 0x7FF0) != 0x7FF0 )
    return 0;
  if ( LODWORD(v4) || (HIBYTE(v4) = *(_BYTE *)(a1 + 7) & 0x7F, HIDWORD(v4) != 2146435072) )
  {
    *a2 = v2 * v2;
    return 0;
  }
  else
  {
    *a2 = v2 * 0.0;
    return 1;
  }
}

//----- (00000001401FC5EA) ----------------------------------------------------
// attributes: thunk
__int64 sub_1401FC5EA()
{
  return ((__int64 (          *)())IsProcessorFeaturePresent)();
}

// 14026E2B0: invalid function type 'BOOL (__stdcall *IsProcessorFeaturePresent)(DWORD ProcessorFeature)' has been ignored

//----- (00000001401FC614) ----------------------------------------------------
     __m128i *           sub_1401FC614(     __m128i *a1,      __m128i *a2)
{
  int v2;
       __m128i *v4;
  __m128i v6;
  __m128i v7;
  __int64 v8;
       __m128i *v9;
       __m128i *i;
  __m128i v11;
  unsigned int v12;
  __int64 v13;
  __m128i inserted;
       __m128i *v15;
  __int8 v16;
  __int64 v17;
  __int8 v18;
       __m128i *v19;
  __m128i v20;
  unsigned __int8 v21;
       __m128i *v22;
       __m128i *j;
  __m128i v24;
  __m128i v25;
  unsigned __int8 v26;
  __int64 v27;

  v2 = SR_VEC_PTR_LANES(128, a2, u8)[0];
  v4 = a1;
  if ( !(_BYTE)v2 )
    return a1;
  if ( dword_140302080 < 2 )
  {
    v6 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v2 | (unsigned int)(v2 << 8)), 0), 0);
    while ( 1 )
    {
      if ( ((unsigned __int16)v4 & 0xFFFu) > 0xFF0uLL )
        goto LABEL_9;
      v7 = _mm_loadu_si128(v4);
      LODWORD(v8) = _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi8(v7, _mm_cvtsi32_si128((int)(0LL))), _mm_cmpeq_epi8(v7, v6)));
      if ( (_DWORD)v8 )
      {
        _BitScanForward((unsigned int *)&v8, v8);
        v4 = (     __m128i *)((char *)v4 + v8);
LABEL_9:
        if ( !SR_VEC_PTR_LANES(128, v4, i8)[0] )
          return nullptr;
        if ( (_BYTE)v2 == SR_VEC_PTR_LANES(128, v4, i8)[0] )
        {
          v9 = v4;
          for ( i = a2; ; i = (     __m128i *)((char *)i + 1) )
          {
            while ( 2 )
            {
              if ( ((unsigned __int16)i & 0xFFFu) <= 0xFF0uLL && ((unsigned __int16)v9 & 0xFFFu) <= 0xFF0uLL )
              {
                v11 = _mm_loadu_si128(i);
                v12 = _mm_movemask_epi8(
                        _mm_or_si128(
                          _mm_cmpeq_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v9), v11), _mm_cvtsi32_si128((int)(0LL))),
                          _mm_cmpeq_epi8(v11, _mm_cvtsi32_si128((int)(0LL)))));
                if ( !v12 )
                {
                  ++v9;
                  ++i;
                  continue;
                }
                _BitScanForward((unsigned int *)&v13, v12);
                v9 = (     __m128i *)((char *)v9 + v13);
                i = (     __m128i *)((char *)i + v13);
              }
              break;
            }
            if ( !SR_VEC_PTR_LANES(128, i, i8)[0] )
              return v4;
            if ( SR_VEC_PTR_LANES(128, v9, i8)[0] != SR_VEC_PTR_LANES(128, i, i8)[0] )
              break;
            v9 = (     __m128i *)((char *)v9 + 1);
          }
        }
        v4 = (     __m128i *)((char *)v4 + 1);
      }
      else
      {
        ++v4;
      }
    }
  }
  if ( ((unsigned __int16)a2 & 0xFFFu) > 0xFF0uLL )
  {
    inserted = _mm_cvtsi64_si128((long long)(0));
    v15 = a2;
    v16 = SR_VEC_PTR_LANES(128, a2, i8)[0];
    v17 = 16;
    do
    {
      v18 = v16;
      inserted = _mm_insert_epi8(_mm_srli_si128(inserted, 1), v16, 15);
      if ( v16 )
        v16 = SR_VEC_PTR_LANES(128, v15, i8)[1];
      v19 = (     __m128i *)&SR_VEC_PTR_LANES(128, v15, i8)[1];
      if ( !v18 )
        v19 = v15;
      v15 = v19;
      --v17;
    }
    while ( v17 );
  }
  else
  {
    inserted = _mm_loadu_si128(a2);
  }
  while ( 1 )
  {
    while ( ((unsigned __int16)v4 & 0xFFFu) > 0xFF0uLL )
    {
      if ( !SR_VEC_PTR_LANES(128, v4, i8)[0] )
        return nullptr;
      if ( SR_VEC_PTR_LANES(128, v4, i8)[0] == (_BYTE)v2 )
        goto LABEL_35;
LABEL_43:
      v4 = (     __m128i *)((char *)v4 + 1);
    }
    v20 = _mm_loadu_si128(v4);
    v21 = _mm_cmpistrc(inserted, v20, 12);
    if ( v21 | _mm_cmpistrz(inserted, v20, 12) )
      break;
    ++v4;
  }
  if ( v21 )
  {
    v4 = (     __m128i *)((char *)v4 + _mm_cmpistri(inserted, v20, 12));
LABEL_35:
    v22 = v4;
    for ( j = a2; ; j = (     __m128i *)((char *)j + v27) )
    {
      if ( ((unsigned __int16)v22 & 0xFFFu) > 0xFF0uLL || ((unsigned __int16)j & 0xFFFu) > 0xFF0uLL )
      {
        if ( !SR_VEC_PTR_LANES(128, j, i8)[0] )
          return v4;
        if ( SR_VEC_PTR_LANES(128, v22, i8)[0] != SR_VEC_PTR_LANES(128, j, i8)[0] )
          goto LABEL_43;
        v27 = 1;
      }
      else
      {
        v24 = _mm_loadu_si128(v22);
        v25 = _mm_loadu_si128(j);
        v26 = _mm_cmpistrs(v25, v24, 12);
        if ( !_mm_cmpistro(v25, v24, 12) )
          goto LABEL_43;
        if ( v26 )
          return v4;
        v27 = 16;
      }
      v22 = (     __m128i *)((char *)v22 + v27);
    }
  }
  return nullptr;
}

//----- (00000001401FC820) ----------------------------------------------------
__int64            sub_1401FC820(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  bool v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;

  v3 = a2 - (_QWORD)a1;
  if ( a3 < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)a1 & 7) != 0; --a3 )
  {
    v4 = *(_BYTE *)a1 < *((_BYTE *)a1 + v3);
    if ( *(_BYTE *)a1 != *((_BYTE *)a1 + v3) )
      return -v4 - ((unsigned int)v4 - 1);
    a1 = (unsigned __int64 *)((char *)a1 + 1);
  }
  if ( !(a3 >> 3) )
  {
LABEL_6:
    if ( !a3 )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)a1 < *((_BYTE *)a1 + v3);
      if ( *(_BYTE *)a1 != *((_BYTE *)a1 + v3) )
        break;
      a1 = (unsigned __int64 *)((char *)a1 + 1);
      if ( !--a3 )
        return 0;
    }
    return -v4 - ((unsigned int)v4 - 1);
  }
  v6 = a3 >> 5;
  if ( a3 >> 5 )
  {
    while ( 1 )
    {
      v7 = *a1;
      if ( *a1 != *(unsigned __int64 *)((char *)a1 + v3) )
        break;
      v7 = a1[1];
      if ( v7 != *(unsigned __int64 *)((char *)a1 + v3 + 8) )
        goto LABEL_24;
      v7 = a1[2];
      if ( v7 != *(unsigned __int64 *)((char *)a1 + v3 + 16) )
        goto LABEL_23;
      v7 = a1[3];
      if ( v7 != *(unsigned __int64 *)((char *)a1 + v3 + 24) )
      {
        ++a1;
LABEL_23:
        ++a1;
LABEL_24:
        ++a1;
        break;
      }
      a1 += 4;
      if ( !--v6 )
      {
        a3 &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = a3 >> 3;
    if ( !(a3 >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *a1;
      if ( *a1 != *(unsigned __int64 *)((char *)a1 + v3) )
        break;
      ++a1;
      if ( !--v8 )
      {
        a3 &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(unsigned __int64 *)((char *)a1 + v3));
  return -v4 - ((unsigned int)v4 - 1);
}

//----- (00000001401FC900) ---------------------------------------------
__int64 sub_1401FC900(void *a1, __int64 offset, unsigned __int64 count)
{
  unsigned char *destination = (unsigned char *)a1;
  const unsigned char *source = (const unsigned char *)((uintptr_t)a1 + (uintptr_t)offset);
  for (unsigned __int64 i = 0; i < count; ++i) destination[i] = source[i];
  return (__int64)(uintptr_t)a1;
}

__int128 sr_copy_load128(const void *p) {
  __int128 v; __builtin_memcpy(&v, p, 16); return v;
}

void sr_copy_store128(void *p, __int128 v) {
  __builtin_memcpy(p, &v, 16);
}

//----- (00000001401FC920) ----------------------------------------------------
__m128i *           crt_memcpy(__m128i *a1,      __m128i *a2, unsigned __int64 a3)
{
  bool v5;
  __int64 v6;
  __m128i *result;
  __m128i v8;
  __int8 v9;
  __int16 v10;
  __int8 v11;
  __int8 v12;
  __int16 v13;
  __int16 v14;
  __int8 v15;
  __int32 v16;
  __int8 v17;
  __int8 v18;
  __int16 v19;
  __int32 v20;
  __int32 v21;
  __int16 v22;
  __int32 v23;
  __int16 v24;
  __int8 v25;
  __m128 v26;
  __int8 *v27;
  __m128i *v28;
  __m128i v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128 v37;
  __m128 v38;
  unsigned __int64 j;
  unsigned __int64 v40;
  __m128 v41;
  __m128 v42;
  __m128 v43;
  __m128 v44;
  __m128 v45;
  __int8 *v46;
  __int128 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  _OWORD *v50;
  __int128 v51;
  unsigned __int64 v52;
  __int128 v53;
  __int128 v54;
  __int128 v55;
  __int128 v56;
  __int128 v57;
  __int128 v58;
  unsigned __int64 i;

  result = a1;
  switch ( a3 )
  {
    case 0uLL:
      return result;
    case 1uLL:
      SR_VEC_PTR_LANES(128, a1, i8)[0] = SR_VEC_PTR_LANES(128, a2, i8)[0];
      break;
    case 2uLL:
      SR_VEC_PTR_LANES(128, a1, i16)[0] = SR_VEC_PTR_LANES(128, a2, i16)[0];
      break;
    case 3uLL:
      v9 = SR_VEC_PTR_LANES(128, a2, i8)[2];
      SR_VEC_PTR_LANES(128, a1, i16)[0] = SR_VEC_PTR_LANES(128, a2, i16)[0];
      SR_VEC_PTR_LANES(128, a1, i8)[2] = v9;
      break;
    case 4uLL:
      SR_VEC_PTR_LANES(128, a1, i32)[0] = SR_VEC_PTR_LANES(128, a2, i32)[0];
      break;
    case 5uLL:
      v12 = SR_VEC_PTR_LANES(128, a2, i8)[4];
      SR_VEC_PTR_LANES(128, a1, i32)[0] = SR_VEC_PTR_LANES(128, a2, i32)[0];
      SR_VEC_PTR_LANES(128, a1, i8)[4] = v12;
      break;
    case 6uLL:
      v13 = SR_VEC_PTR_LANES(128, a2, i16)[2];
      SR_VEC_PTR_LANES(128, a1, i32)[0] = SR_VEC_PTR_LANES(128, a2, i32)[0];
      SR_VEC_PTR_LANES(128, a1, i16)[2] = v13;
      break;
    case 7uLL:
      v14 = SR_VEC_PTR_LANES(128, a2, i16)[2];
      v15 = SR_VEC_PTR_LANES(128, a2, i8)[6];
      SR_VEC_PTR_LANES(128, a1, i32)[0] = SR_VEC_PTR_LANES(128, a2, i32)[0];
      SR_VEC_PTR_LANES(128, a1, i16)[2] = v14;
      SR_VEC_PTR_LANES(128, a1, i8)[6] = v15;
      break;
    case 8uLL:
      SR_VEC_PTR_LANES(128, a1, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      break;
    case 9uLL:
      v18 = SR_VEC_PTR_LANES(128, a2, i8)[8];
      SR_VEC_PTR_LANES(128, result, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      SR_VEC_PTR_LANES(128, result, i8)[8] = v18;
      break;
    case 0xAuLL:
      v19 = SR_VEC_PTR_LANES(128, a2, i16)[4];
      SR_VEC_PTR_LANES(128, result, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      SR_VEC_PTR_LANES(128, result, i16)[4] = v19;
      break;
    case 0xBuLL:
      v10 = SR_VEC_PTR_LANES(128, a2, i16)[4];
      v11 = SR_VEC_PTR_LANES(128, a2, i8)[10];
      SR_VEC_PTR_LANES(128, result, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      SR_VEC_PTR_LANES(128, result, i16)[4] = v10;
      SR_VEC_PTR_LANES(128, result, i8)[10] = v11;
      break;
    case 0xCuLL:
      v20 = SR_VEC_PTR_LANES(128, a2, i32)[2];
      SR_VEC_PTR_LANES(128, result, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      SR_VEC_PTR_LANES(128, result, i32)[2] = v20;
      break;
    case 0xDuLL:
      v16 = SR_VEC_PTR_LANES(128, a2, i32)[2];
      v17 = SR_VEC_PTR_LANES(128, a2, i8)[12];
      SR_VEC_PTR_LANES(128, result, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      SR_VEC_PTR_LANES(128, result, i32)[2] = v16;
      SR_VEC_PTR_LANES(128, result, i8)[12] = v17;
      break;
    case 0xEuLL:
      v21 = SR_VEC_PTR_LANES(128, a2, i32)[2];
      v22 = SR_VEC_PTR_LANES(128, a2, i16)[6];
      SR_VEC_PTR_LANES(128, result, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      SR_VEC_PTR_LANES(128, result, i32)[2] = v21;
      SR_VEC_PTR_LANES(128, result, i16)[6] = v22;
      break;
    case 0xFuLL:
      v23 = SR_VEC_PTR_LANES(128, a2, i32)[2];
      v24 = SR_VEC_PTR_LANES(128, a2, i16)[6];
      v25 = SR_VEC_PTR_LANES(128, a2, i8)[14];
      SR_VEC_PTR_LANES(128, result, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      SR_VEC_PTR_LANES(128, result, i32)[2] = v23;
      SR_VEC_PTR_LANES(128, result, i16)[6] = v24;
      SR_VEC_PTR_LANES(128, result, i8)[14] = v25;
      break;
    case 0x10uLL:
      _mm_storeu_si128((__m128i *)(void *)(a1), _mm_loadu_si128(a2));
      break;
    default:
      if ( a3 <= 0x20 )
      {
        v8 = _mm_loadu_si128((const __m128i *)(const void *)(((char *)a2 + a3 - 16)));
        _mm_storeu_si128((__m128i *)(void *)(a1), _mm_loadu_si128((const __m128i *)(const void *)(a2)));
        _mm_storeu_si128((__m128i *)(void *)(((char *)a1 + a3 - 16)), v8);
        result = a1;
      }
      else
      {
        v5 = (uintptr_t)a2 < (uintptr_t)a1;
        v6 = (uintptr_t)a2 - (uintptr_t)a1;
        if ( v5 && a1 < (__m128i *)&SR_VEC_PTR_LANES(128, a2, i8)[a3] )
        {
          v46 = &SR_VEC_PTR_LANES(128, a1, i8)[a3];
          v47 = sr_copy_load128((const void *)(&v46[v6 - 16]));
          v48 = (unsigned __int64)(v46 - 16);
          v49 = a3 - 16;
          if ( (v48 & 0xF) != 0 )
          {
            v50 = (_OWORD *)v48;
            v48 &= 0xFFFFFFFFFFFFFFF0uLL;
            v51 = v47;
            v47 = sr_copy_load128((const void *)((v48 + v6)));
            sr_copy_store128((void *)(v50), v51);
            v49 = v48 - (_QWORD)a1;
          }
          v52 = v49 >> 7;
          if ( v49 >> 7 )
          {
            for ( sr_copy_store128((void *)(v48), v47); ; sr_copy_store128((void *)(v48), v58) )
            {
              v53 = sr_copy_load128((const void *)((v48 + v6 - 16)));
              v54 = sr_copy_load128((const void *)((v48 + v6 - 32)));
              v48 -= 128LL;
              sr_copy_store128((void *)((v48 + 112)), v53);
              sr_copy_store128((void *)((v48 + 96)), v54);
              v55 = sr_copy_load128((const void *)((v48 + v6 + 64)));
              --v52;
              sr_copy_store128((void *)((v48 + 80)), sr_copy_load128((const void *)((v48 + v6 + 80))));
              sr_copy_store128((void *)((v48 + 64)), v55);
              v56 = sr_copy_load128((const void *)((v48 + v6 + 32)));
              sr_copy_store128((void *)((v48 + 48)), sr_copy_load128((const void *)((v48 + v6 + 48))));
              sr_copy_store128((void *)((v48 + 32)), v56);
              v57 = sr_copy_load128((const void *)((v48 + v6 + 16)));
              v58 = sr_copy_load128((const void *)((v48 + v6)));
              if ( !v52 )
                break;
              sr_copy_store128((void *)((v48 + 16)), v57);
            }
            sr_copy_store128((void *)((v48 + 16)), v57);
            v49 &= 0x7Fu;
            v47 = v58;
          }
          for ( i = v49 >> 4; i; --i )
          {
            sr_copy_store128((void *)(v48), v47);
            v48 -= 16LL;
            v47 = sr_copy_load128((const void *)((v48 + v6)));
          }
          if ( (v49 & 0xF) != 0 )
            _mm_storeu_si128((__m128i *)(void *)(a1), _mm_loadu_si128((const __m128i *)(const void *)(a2)));
          sr_copy_store128((void *)(v48), v47);
          result = a1;
        }
        else
        {
          if ( a3 <= 0x80 )
          {
            v26 = _mm_loadu_ps((const float *)(const void *)(((char *)a1 + v6)));
            v28 = a1 + 1;
            v31 = a3 - 16;
          }
          else
          {
            if ( (g_144CBE4C0 & 2) != 0 )
              return (__m128i *)sub_1401FC900(a1, v6, a3);
            v26 = _mm_loadu_ps((const float *)(const void *)(((char *)a1 + v6)));
            v27 = &SR_VEC_PTR_LANES(128, a1, i8)[a3];
            v28 = a1 + 1;
            if ( ((unsigned __int8)a1 & 0xF) != 0 )
            {
              v29 = (__m128i)v26;
              v30 = (unsigned __int64)v28 & 0xFFFFFFFFFFFFFFF0uLL;
              v26 = _mm_loadu_ps((const float *)(const void *)((v30 + v6)));
              v28 = (__m128i *)(v30 + 16);
              _mm_storeu_si128((__m128i *)(void *)(a1), v29);
            }
            v31 = v27 - (__int8 *)v28;
            v32 = v31 >> 7;
            if ( v31 >> 7 )
            {
              _mm_storeu_si128((__m128i *)(void *)(&v28[-1]), (__m128i)v26);
              if ( v32 <= qword_140302088 )
              {
                while ( 1 )
                {
                  v33 = _mm_loadu_si128((const __m128i *)(const void *)(((char *)v28 + v6)));
                  v34 = _mm_loadu_si128((const __m128i *)(const void *)(((char *)v28 + v6 + 16)));
                  v28 += 8;
                  _mm_storeu_si128((__m128i *)(void *)(&v28[-8]), v33);
                  _mm_storeu_si128((__m128i *)(void *)(&v28[-7]), v34);
                  v35 = _mm_loadu_si128((const __m128i *)(const void *)(((char *)v28 + v6 - 80)));
                  --v32;
                  _mm_storeu_si128((__m128i *)(void *)(&v28[-6]), _mm_loadu_si128((const __m128i *)(const void *)(((char *)v28 + v6 - 96))));
                  _mm_storeu_si128((__m128i *)(void *)(&v28[-5]), v35);
                  v36 = _mm_loadu_si128((const __m128i *)(const void *)(((char *)v28 + v6 - 48)));
                  _mm_storeu_si128((__m128i *)(void *)(&v28[-4]), _mm_loadu_si128((const __m128i *)(const void *)(((char *)v28 + v6 - 64))));
                  _mm_storeu_si128((__m128i *)(void *)(&v28[-3]), v36);
                  v37 = _mm_loadu_ps((const float *)(const void *)(((char *)&v28[-2] + v6)));
                  v38 = _mm_loadu_ps((const float *)(const void *)(((char *)&v28[-1] + v6)));
                  if ( !v32 )
                    break;
                  _mm_storeu_si128((__m128i *)(void *)(&v28[-2]), (__m128i)v37);
                  _mm_storeu_si128((__m128i *)(void *)(&v28[-1]), (__m128i)v38);
                }
              }
              else
              {
                while ( 1 )
                {
                  _mm_prefetch(&SR_VEC_LANES(128, v28[32], i8)[v6], 0);
                  v41 = _mm_loadu_ps((const float *)(const void *)(((char *)v28 + v6)));
                  v42 = _mm_loadu_ps((const float *)(const void *)(((char *)&v28[1] + v6)));
                  v28 += 8;
                  _mm_stream_ps((float *)(void *)&v28[-8], v41);
                  _mm_stream_ps((float *)(void *)&v28[-7], v42);
                  v43 = _mm_loadu_ps((const float *)(const void *)(((char *)&v28[-5] + v6)));
                  --v32;
                  _mm_stream_ps((float *)(void *)&v28[-6], _mm_loadu_ps((const float *)(const void *)(((char *)&v28[-6] + v6))));
                  _mm_stream_ps((float *)(void *)&v28[-5], v43);
                  v44 = _mm_loadu_ps((const float *)(const void *)(((char *)&v28[-4] + v6)));
                  v45 = _mm_loadu_ps((const float *)(const void *)(((char *)&v28[-3] + v6)));
                  _mm_prefetch(&SR_VEC_LANES(128, v28[36], i8)[v6], 0);
                  _mm_stream_ps((float *)(void *)&v28[-4], v44);
                  _mm_stream_ps((float *)(void *)&v28[-3], v45);
                  v37 = _mm_loadu_ps((const float *)(const void *)(((char *)&v28[-2] + v6)));
                  v38 = _mm_loadu_ps((const float *)(const void *)(((char *)&v28[-1] + v6)));
                  if ( !v32 )
                    break;
                  _mm_stream_ps((float *)(void *)&v28[-2], v37);
                  _mm_stream_ps((float *)(void *)&v28[-1], v38);
                }
                _mm_sfence();
              }
              _mm_storeu_si128((__m128i *)(void *)(&v28[-2]), (__m128i)v37);
              v31 &= 0x7Fu;
              v26 = v38;
            }
          }
          for ( j = v31 >> 4; j; --j )
          {
            _mm_storeu_si128((__m128i *)(void *)(&v28[-1]), (__m128i)v26);
            v26 = _mm_loadu_ps((const float *)(const void *)(((char *)v28++ + v6)));
          }
          v40 = v31 & 0xF;
          if ( v40 )
            _mm_storeu_si128((__m128i *)(void *)(((char *)v28 + v40 - 16)), _mm_loadu_si128((const __m128i *)(const void *)(((char *)v28 + v40 + v6 - 16))));
          _mm_storeu_si128((__m128i *)(void *)(&v28[-1]), (__m128i)v26);
          result = a1;
        }
      }
      break;
  }
  return result;
}

//----- (00000001401FCD10) ----------------------------------------------------
__int64            sub_1401FCD10(void *a1, char a2, unsigned __int64 a3)
{
  return (__int64)(uintptr_t)memset(a1, (unsigned char)a2, a3);
}

//----- (00000001401FCD30) ----------------------------------------------------
void *           crt_memset(void *destination, unsigned __int8 a2, unsigned __int64 a3)
{
  _WORD *a1 = (_WORD *)destination;
  __m128 v4;
  float *v5;
  unsigned __int64 v6;
  unsigned __int64 i;
  unsigned __int64 v8;
  _WORD *result;
  uint64_t v11;
  char *v12;

  v11 = UINT64_C(0x101010101010101) * a2;
  v12 = (char *)a1 + a3;
  result = a1;
  switch ( a3 )
  {
    case 0uLL:
      return result;
    case 1uLL:
      goto LABEL_19;
    case 2uLL:
      goto LABEL_27;
    case 3uLL:
      goto LABEL_18;
    case 4uLL:
      goto LABEL_21;
    case 5uLL:
      goto LABEL_24;
    case 6uLL:
      goto LABEL_26;
    case 7uLL:
      goto LABEL_17;
    case 8uLL:
      *(_QWORD *)a1 = v11;
      return result;
    case 9uLL:
      *(_QWORD *)(v12 - 9) = v11;
      *(v12 - 1) = v11;
      return result;
    case 0xAuLL:
      *(_QWORD *)a1 = v11;
      a1[4] = v11;
      return result;
    case 0xBuLL:
      *(_QWORD *)a1 = v11;
      a1[4] = v11;
      *((_BYTE *)a1 + 10) = v11;
      return result;
    case 0xCuLL:
      *(_QWORD *)(v12 - 12) = v11;
LABEL_21:
      *((_DWORD *)v12 - 1) = v11;
      return result;
    case 0xDuLL:
      *(_QWORD *)(v12 - 13) = v11;
LABEL_24:
      *(_DWORD *)(v12 - 5) = v11;
      *(v12 - 1) = v11;
      return result;
    case 0xEuLL:
      *(_QWORD *)(v12 - 14) = v11;
LABEL_26:
      *(_DWORD *)(v12 - 6) = v11;
LABEL_27:
      *((_WORD *)v12 - 1) = v11;
      return result;
    case 0xFuLL:
      *(_QWORD *)(v12 - 15) = v11;
LABEL_17:
      *(_DWORD *)(v12 - 7) = v11;
LABEL_18:
      *(_WORD *)(v12 - 3) = v11;
LABEL_19:
      *(v12 - 1) = v11;
      return result;
    case 0x10uLL:
      *(_QWORD *)a1 = v11;
      *((_QWORD *)a1 + 1) = v11;
      return result;
    default:
      v5 = (float *)a1;
      v4 = _mm_castsi128_ps(_mm_unpacklo_epi8(_mm_cvtsi64_si128((long long)v11), _mm_cvtsi64_si128((long long)v11)));
      if ( a3 <= 0x80 )
        goto LABEL_8;
      if ( (g_144CBE4C0 & 2) != 0 )
        return (_WORD *)sub_1401FCD10(a1, a2, a3);
      _mm_storeu_ps((float *)a1, v4);
      v5 = (float *)((unsigned __int64)(a1 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
      a3 = (char *)a1 + a3 - (char *)v5;
      v6 = a3 >> 7;
      if ( a3 >> 7 )
      {
        if ( v6 > qword_140302090 )
        {
          do
          {
            _mm_stream_ps(v5, v4);
            _mm_stream_ps(v5 + 4, v4);
            v5 += 32;
            _mm_stream_ps(v5 - 24, v4);
            _mm_stream_ps(v5 - 20, v4);
            --v6;
            _mm_stream_ps(v5 - 16, v4);
            _mm_stream_ps(v5 - 12, v4);
            _mm_stream_ps(v5 - 8, v4);
            _mm_stream_ps(v5 - 4, v4);
          }
          while ( v6 );
          _mm_sfence();
          a3 &= 0x7Fu;
        }
        else
        {
          do
          {
            _mm_storeu_ps(v5, v4);
            _mm_storeu_ps(v5 + 4, v4);
            v5 += 32;
            _mm_storeu_ps(v5 - 24, v4);
            _mm_storeu_ps(v5 - 20, v4);
            --v6;
            _mm_storeu_ps(v5 - 16, v4);
            _mm_storeu_ps(v5 - 12, v4);
            _mm_storeu_ps(v5 - 8, v4);
            _mm_storeu_ps(v5 - 4, v4);
          }
          while ( v6 );
          a3 &= 0x7Fu;
        }
      }
LABEL_8:
      for ( i = a3 >> 4; i; --i )
      {
        _mm_storeu_ps(v5, v4);
        v5 += 4;
      }
      v8 = a3 & 0xF;
      if ( v8 )
        _mm_storeu_ps((float *)((char *)v5 + v8 - 16), v4);
      return a1;
  }
}

//----- (00000001401FCED0) ----------------------------------------------------
__int64 sub_1401FCED0()
{
  return g_144CBE548;
}

//----- (00000001401FCED8) ----------------------------------------------------
void __attribute__((noreturn)) sub_1401FCED8()
{
  void (*v0)(void);

  v0 = (void (*)(void))sub_1401FCED0();
  if ( v0 )
    v0();
  abort();
}

//----- (00000001401FCF00) ----------------------------------------------------
char sub_1401FCF00()
{
  if ( !sub_1401FD9D4() )
    return 0;
  if ( !sub_1401FD968() )
  {
    _acrt_uninitialize_locks();
    return 0;
  }
  return 1;
}

//----- (00000001401FCF28) ----------------------------------------------------
bool sub_1401FCF28()
{
  return sub_1401FD858() != 0;
}

//----- (00000001401FCF3C) ----------------------------------------------------
char sub_1401FCF3C()
{
  sub_1401FD7EC(nullptr);
  return 1;
}

//----- (00000001401FCF50) ----------------------------------------------------
char            sub_1401FCF50(char a1)
{
  if ( !a1 )
  {
    _acrt_uninitialize_ptd();
    _acrt_uninitialize_locks();
  }
  return 1;
}

//----- (00000001401FCF6C) ----------------------------------------------------
char _acrt_uninitialize_critical()
{
  _acrt_uninitialize_ptd();
  return 1;
}

// 1401FCF6C: invalid function type '__crt_bool __cdecl _acrt_uninitialize_critical(__crt_bool Terminating)' has been ignored

//----- (00000001401FCF80) ----------------------------------------------------
__int64            sub_1401FCF80(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8;
  unsigned int *v9;
  unsigned __int64 v10;
  unsigned int v11;
  int v12;
  unsigned int v14;
  unsigned __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned int i;
  __int64 v19;
  unsigned int *v20;
  __int64 v21;

  sub_1401FDACC(a3);
  v8 = *(_QWORD *)(a4 + 8);
  v9 = *(unsigned int **)(a4 + 56);
  v10 = *(_QWORD *)a4 - v8;
  v11 = *(_DWORD *)(a4 + 72);
  if ( (a1[1] & 0x66) != 0 )
  {
    v14 = *v9;
    v15 = *(_QWORD *)(a4 + 32) - v8;
    if ( v11 < *v9 )
    {
      v16 = *v9;
      do
      {
        v17 = v16;
        if ( v10 >= v9[4 * v11 + 1] && v10 < v9[4 * v11 + 2] )
        {
          if ( (a1[1] & 0x20) != 0 )
          {
            for ( i = 0; i < v16; ++i )
            {
              if ( v15 >= v9[4 * i + 1]
                && v15 < v9[4 * i + 2]
                && v9[4 * i + 4] == v9[4 * v11 + 4]
                && v9[4 * i + 3] == v9[4 * v11 + 3] )
              {
                break;
              }
            }
            v17 = v14;
            if ( i != v14 )
              return 1;
          }
          v19 = v9[4 * v11 + 4];
          if ( (_DWORD)v19 )
          {
            if ( v15 == v19 && (a1[1] & 0x20) != 0 )
              return 1;
          }
          else
          {
            LOBYTE(v17) = 1;
            *(_DWORD *)(a4 + 72) = v11 + 1;
            ((void (           *)(__int64, __int64))(v8 + v9[4 * v11 + 3]))(v17, a2);
            v14 = *v9;
            LODWORD(v17) = *v9;
          }
        }
        ++v11;
        v16 = v17;
      }
      while ( v11 < (unsigned int)v17 );
    }
  }
  else
  {
    v20 = a1;
    v21 = a3;
    while ( v11 < *v9 )
    {
      if ( v10 >= v9[4 * v11 + 1] && v10 < v9[4 * v11 + 2] && v9[4 * v11 + 4] )
      {
        if ( v9[4 * v11 + 3] == 1 )
          goto LABEL_11;
        v12 = ((__int64 (           *)(unsigned int **, __int64))(v8 + v9[4 * v11 + 3]))(&v20, a2);
        if ( v12 < 0 )
          return 0;
        if ( v12 > 0 )
        {
LABEL_11:
          if ( *a1 == -529697949 && sub_1401FD18C )
          {
            if ( (unsigned int)sub_14026CA40((__int64)&off_140283490) )
              sub_1401FD18C((__int64)a1);
          }
          sub_1401FDA90();
          ((void (           *)(__int64, __int64, unsigned int *, _QWORD, _QWORD, _QWORD, unsigned int *, __int64))RtlUnwindEx)(
            a2,
            v8 + v9[4 * v11 + 4],
            a1,
            *a1,
            *(_QWORD *)(a4 + 40),
            *(_QWORD *)(a4 + 64),
            v20,
            v21);
          _NLG_Return2_sr();
        }
      }
      ++v11;
    }
  }
  return 1;
}

// 14026E278: invalid function type 'void (__stdcall *RtlUnwindEx)(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue, PCONTEXT ContextRecord, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored

//----- (00000001401FD18C) ----------------------------------------------------
void            sub_1401FD18C(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ( a1 )
  {
    if ( *(_DWORD *)a1 == -529697949
      && *(_DWORD *)(a1 + 24) == 4
      && (unsigned int)(*(_DWORD *)(a1 + 32) - 429065504) <= 2 )
    {
      v1 = *(_QWORD *)(a1 + 48);
      if ( v1 )
      {
        v2 = *(int *)(v1 + 4);
        if ( (_DWORD)v2 )
        {
          ((void (           *)(_QWORD))(*(_QWORD *)(a1 + 56) + v2))(*(_QWORD *)(a1 + 40));
        }
        else if ( (*(_BYTE *)v1 & 0x10) != 0 )
        {
          v3 = **(_QWORD **)(a1 + 40);
          if ( v3 )
            (*(void (           **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
        }
      }
    }
  }
}

//----- (00000001401FD200) ----------------------------------------------------
__int64            sub_1401FD200(struct _EXCEPTION_POINTERS *a1, char a2)
{
  __int64 v3;
  __int64 v5;

  if ( a2 )
  {
    v3 = *(_QWORD *)a1;
    if ( **(_DWORD **)a1 == -529697949
      && *(_DWORD *)(v3 + 24) == 4
      && (unsigned int)(*(_DWORD *)(v3 + 32) - 429065504) <= 2 )
    {
      *(_QWORD *)(crt_getptd() + 32) = v3;
      v5 = *((_QWORD *)a1 + 1);
      *(_QWORD *)(crt_getptd() + 40) = v5;
      terminate_sr();
    }
  }
  return 0;
}

//----- (00000001401FD260) ----------------------------------------------------
__int64            sub_1401FD260(__int64 a1)
{
  _QWORD *i;

  for ( i = *(_QWORD **)(crt_getptd() + 88); ; i = (_QWORD *)i[1] )
  {
    if ( !i )
      return 1;
    if ( *i == a1 )
      break;
  }
  return 0;
}

//----- (00000001401FD298) ----------------------------------------------------
__int64            sub_1401FD298(__int64 a1, int *a2)
{
  __int64 result;

  result = a1 + *a2;
  if ( a2[1] >= 0 )
    result += a2[1] + (__int64)*(int *)(a2[2] + *(_QWORD *)(a2[1] + a1));
  return result;
}

//----- (00000001401FD2BC) ----------------------------------------------------
__int64            sub_1401FD2BC(__int64 a1)
{
  _DWORD *v1;
  __int64 v3;
  __int64 v5;

  v1 = *(_DWORD **)a1;
  if ( **(_DWORD **)a1 == -532462766 || *v1 == -532459699 )
  {
    if ( *(int *)(crt_getptd() + 48) > 0 )
    {
      v3 = crt_getptd();
      --*(_DWORD *)(v3 + 48);
    }
  }
  else if ( *v1 == -529697949 )
  {
    *(_QWORD *)(crt_getptd() + 32) = (uint64)(uintptr_t)(v1);
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(crt_getptd() + 40) = v5;
    terminate_sr();
  }
  return 0;
}

//----- (00000001401FD324) ----------------------------------------------------
__int64            sub_1401FD324(_DWORD *a1)
{
  __int64 v2;
  _BYTE *v3;
  __int64 v5[3];

  *a1 = 0;
  v2 = *(_QWORD *)(crt_getptd() + 32);
  if ( v2 )
  {
    v3 = *(_BYTE **)(v2 + 48);
    if ( v3 )
    {
      if ( (*v3 & 0x10) != 0 )
        return *(_QWORD *)(**(_QWORD **)(v2 + 40) - 8LL);
      v5[1] = 0;
      v5[0] = v2;
      *a1 = sub_1401FD3C8((__int64)&(*(unsigned __int64 *)&sr_mem_140302de0[0]), v5);
    }
  }
  return 0;
}

//----- (00000001401FD380) ----------------------------------------------------
__int64 sub_1401FD380()
{
  return crt_getptd() + 32;
}

//----- (00000001401FD394) ----------------------------------------------------
__int64 sub_1401FD394()
{
  return crt_getptd() + 40;
}

//----- (00000001401FD3A8) ----------------------------------------------------
__int64 sub_1401FD3A8()
{
  return crt_getptd() + 48;
}

//----- (00000001401FD3BC) ----------------------------------------------------
void __attribute__((noreturn)) sub_1401FD3BC()
{
  terminate_sr();
}

//----- (00000001401FD3C8) ----------------------------------------------------
__int64            sub_1401FD3C8(__int64 a1, __int64 *a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int *v6;
  int v7;
       char *v8;

  if ( !a2
    || (v3 = *a2) == 0
    || *(_DWORD *)v3 != -529697949
    || *(_DWORD *)(v3 + 24) != 4
    || (unsigned int)(*(_DWORD *)(v3 + 32) - 429065504) > 2 )
  {
    abort();
  }
  v4 = *(_QWORD *)(v3 + 56);
  v5 = *(int *)(*(_QWORD *)(v3 + 48) + 12LL);
  v6 = (int *)(v5 + v4 + 4);
  v7 = *(_DWORD *)(v5 + v4);
  if ( v7 <= 0 )
    return 0;
  v8 = (     char *)(a1 + 16);
  while ( strcmp_sr(v8, (     char *)(*(int *)(*v6 + v4 + 4) + v4 + 16)) )
  {
    --v7;
    ++v6;
    if ( v7 <= 0 )
      return 0;
  }
  return 1;
}

//----- (00000001401FD470) ----------------------------------------------------
// attributes: thunk
__int64 j_j__malloc_base()
{
  return j__malloc_base();
}

//----- (00000001401FD478) ----------------------------------------------------
// attributes: thunk
void         j_free_3(void *Block)
{
  free(Block);
}

//----- (00000001401FD4B0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_999(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}

//----- (00000001401FD4CC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1000(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}

//----- (00000001401FD538) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1001(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}

//----- (00000001401FD554) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1002(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}

//----- (00000001401FD570) ----------------------------------------------------
__int64            sub_1401FD570(__int64 a1, __int64 a2)
{
  char *v2;
  __int64 v3;
  char v4;

  if ( a1 == a2 )
    return 0;
  v2 = (char *)(a1 + 9);
  v3 = a2 - a1;
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 != v2[v3] )
      break;
    ++v2;
    if ( !v4 )
      return 0;
  }
  return (unsigned __int8)*v2 < (unsigned __int8)v2[v3] ? -1 : 1;
}

//----- (00000001401FD598) ----------------------------------------------------
_QWORD *sub_1401FD598()
{
  _QWORD *result;
  _QWORD *v1;

  result = (_QWORD *)((__int64 (*)(void))InterlockedFlushSList)();
  if ( result )
  {
    do
    {
      v1 = (_QWORD *)*result;
      free(result);
      result = v1;
    }
    while ( v1 );
  }
  return result;
}

// 14026E268: invalid function type 'PSLIST_ENTRY (__stdcall *InterlockedFlushSList)(PSLIST_HEADER ListHead)' has been ignored

//----- (00000001401FD5FC) ----------------------------------------------------
signed __int64            sub_1401FD5FC(volatile signed __int64 *a1, __int64 a2)
{
  signed __int64 result;
  signed __int64 v5;
  char *v6;
  __int64 v7;
  char *v8;
  __int64 v9;
  _OWORD *v10;
  void *v11;
  signed __int64 v12;
  _OWORD *v13;
  signed __int64 v14;

  result = *a1;
  v5 = 0;
  if ( !*a1 )
  {
    v6 = sub_140205E28(nullptr, (__int64)a1 + 9, 0, (__int64)j_j__malloc_base, (__int64)j_free_3, 0x2800u);
    if ( v6 )
    {
      v7 = -1;
      do
        ++v7;
      while ( v6[v7] );
      if ( v7 )
      {
        v8 = &v6[v7 - 1];
        do
        {
          if ( *v8 != 32 )
            break;
          *v8-- = 0;
          --v7;
        }
        while ( v7 );
      }
      v9 = v7 + 1;
      v10 = (_OWORD *)j__malloc_base();
      v11 = v10;
      if ( v10 )
      {
        v12 = (signed __int64)(v10 + 1);
        *v10 = 0;
        v13 = v10;
        strcpy_s_sr(v10 + 1, v9, v6);
        v14 = _InterlockedCompareExchange64(a1, v12, 0);
        if ( v14 )
        {
          v5 = v14;
        }
        else
        {
          v11 = nullptr;
          ((void (           *)(__int64, _OWORD *))InterlockedPushEntrySList)(a2, v13);
          v5 = v12;
        }
      }
      free(v11);
    }
    free(v6);
    return v5;
  }
  return result;
}

// 14026E270: invalid function type 'PSLIST_ENTRY (__stdcall *InterlockedPushEntrySList)(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)' has been ignored

//----- (00000001401FD724) ----------------------------------------------------
_anonymous_namespace___scoped_get_last_error_reset *           _anonymous_namespace___scoped_get_last_error_reset__scoped_get_last_error_reset(
        _anonymous_namespace___scoped_get_last_error_reset *this)
{
  *(_DWORD *)this = ((__int64 (*)(void))GetLastError)();
  return this;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (00000001401FD740) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1003(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}

//----- (00000001401FD784) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1004(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}

//----- (00000001401FD7A0) ----------------------------------------------------
char            sub_1401FD7A0(__int64 a1)
{
  int v2;

  v2 = sub_1402066B4(LODWORD(dwTlsIndex), a1);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 120) = -2;
    LOBYTE(v2) = 1;
  }
  return v2;
}

//----- (00000001401FD7CC) ----------------------------------------------------
void            sub_1401FD7CC(unsigned int *a1)
{
  if ( a1 )
  {
    if ( a1 != &g_144CBE550 )
      free(a1);
  }
}

//----- (00000001401FD7EC) ----------------------------------------------------
void            sub_1401FD7EC(unsigned int *Block)
{
  unsigned int v2;
  unsigned int *v3;

  v2 = LODWORD(dwTlsIndex);
  if ( LODWORD(dwTlsIndex) != -1 )
  {
    if ( !Block )
    {
      v3 = (unsigned int *)sub_14020666C(LODWORD(dwTlsIndex));
      v2 = LODWORD(dwTlsIndex);
      Block = v3;
    }
    sub_1402066B4(v2, 0);
    if ( Block )
    {
      if ( Block != &g_144CBE550 )
        free(Block);
    }
  }
}

//----- (00000001401FD83C) ----------------------------------------------------
__int64 crt_getptd()
{
  __int64 result;

  result = sub_1401FD858();
  if ( !result )
    abort();
  return result;
}

//----- (00000001401FD858) ----------------------------------------------------
__int64 sub_1401FD858()
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  _DWORD *v6;
  _DWORD *v7;

  if ( LODWORD(dwTlsIndex) == -1 )
    return 0;
  v1 = ((__int64 (*)(void))GetLastError)();
  v2 = sub_14020666C(LODWORD(dwTlsIndex));
  v3 = 0;
  if ( v2 != -1 )
  {
    if ( v2 )
    {
      v3 = v2;
      goto LABEL_13;
    }
    if ( !(unsigned int)sub_1402066B4(LODWORD(dwTlsIndex), -1) )
      goto LABEL_13;
    v4 = j__calloc_base();
    v5 = LODWORD(dwTlsIndex);
    v6 = (_DWORD *)v4;
    if ( v4 )
    {
      if ( (unsigned int)sub_1402066B4(LODWORD(dwTlsIndex), v4) )
      {
        v7 = v6;
        v6[30] = -2;
        v6 = nullptr;
        v3 = (__int64)v7;
LABEL_12:
        free(v6);
        goto LABEL_13;
      }
      v5 = LODWORD(dwTlsIndex);
    }
    sub_1402066B4(v5, 0);
    goto LABEL_12;
  }
LABEL_13:
  ((void (           *)(_QWORD))SetLastError)(v1);
  return v3;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E258: invalid function type 'void (__stdcall *SetLastError)(DWORD dwErrCode)' has been ignored

//----- (00000001401FD918) ----------------------------------------------------
__int64 sub_1401FD918()
{
  unsigned int v1;
  __int64 v2;

  if ( LODWORD(dwTlsIndex) == -1 )
    return 0;
  v1 = ((__int64 (*)(void))GetLastError)();
  v2 = sub_14020666C(LODWORD(dwTlsIndex));
  ((void (           *)(_QWORD))SetLastError)(v1);
  if ( v2 == -1 )
    return 0;
  return v2;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E258: invalid function type 'void (__stdcall *SetLastError)(DWORD dwErrCode)' has been ignored

//----- (00000001401FD968) ----------------------------------------------------
char sub_1401FD968()
{
  unsigned int v0;

  v0 = sub_1402065DC((__int64)sub_1401FD7CC);
  LODWORD(dwTlsIndex) = v0;
  if ( v0 != -1 )
  {
    if ( (unsigned int)sub_1402066B4(v0, (__int64)&g_144CBE550) )
    {
      g_144CBE5C8 = -2;
      return 1;
    }
    _acrt_uninitialize_ptd();
  }
  return 0;
}

//----- (00000001401FD9B0) ----------------------------------------------------
char _acrt_uninitialize_ptd()
{
  if ( LODWORD(dwTlsIndex) != -1 )
  {
    sub_140206624(LODWORD(dwTlsIndex));
    LODWORD(dwTlsIndex) = -1;
  }
  return 1;
}

//----- (00000001401FD9D4) ----------------------------------------------------
char sub_1401FD9D4()
{
  if ( (unsigned int)sub_140206708((__int64)&g_144CBE5D0, 0xFA0u, 0) )
  {
    ++g_144CBE5F8;
    return 1;
  }
  else
  {
    _acrt_uninitialize_locks();
    return 0;
  }
}

//----- (00000001401FDA08) ----------------------------------------------------
__int64            sub_1401FDA08(int a1)
{
  return ((__int64 (           *)(unsigned int *))EnterCriticalSection)(&dword_140404A6C[10 * a1 + 19064537]);
}

// 14026E250: invalid function type 'void (__stdcall *EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (00000001401FDA24) ----------------------------------------------------
char _acrt_uninitialize_locks()
{
  unsigned int v0;

  v0 = g_144CBE5F8;
  while ( v0 )
  {
    ((void (           *)(unsigned int *))DeleteCriticalSection)(&dword_140404A6C[10 * --v0 + 19064537]);
    --g_144CBE5F8;
  }
  return 1;
}

// 14026E240: invalid function type 'void (__stdcall *DeleteCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (00000001401FDA5C) ----------------------------------------------------
__int64            sub_1401FDA5C(int a1)
{
  return ((__int64 (           *)(unsigned int *))LeaveCriticalSection)(&dword_140404A6C[10 * a1 + 19064537]);
}

// 14026E248: invalid function type 'void (__stdcall *LeaveCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (00000001401FDA90) ----------------------------------------------------
void sub_1401FDA90()
{
  ;
}

//----- (00000001401FDAC0) ----------------------------------------------------
void _NLG_Return2_sr()
{
  ;
}

//----- (00000001401FDACC) ----------------------------------------------------
__int64 (           *           sub_1401FDACC(__int64 a1))()
{
  __int64 (           *result)();
  unsigned __int64 v2;

  result = _guard_check_icall_fptr[0];
  if ( (void (*)())_guard_check_icall_fptr[0] != guard_check_icall_nop )
  {
    result = (__int64 (           *)())__readgsqword(0x30u);
    v2 = *(_QWORD *)(a1 + 152);
    if ( v2 < *((_QWORD *)result + 2) || v2 > *((_QWORD *)result + 1) )
      __fastfail(0xDu);
  }
  return result;
}

//----- (00000001401FDB44) ----------------------------------------------------
__int64 (           *           sub_1401FDB44(_QWORD *a1, __int64 (           *a2)(_QWORD *)))()
{
  __int64 (           *result)();
  unsigned __int64 v4;

  result = _guard_check_icall_fptr[0];
  if ( (void (*)())_guard_check_icall_fptr[0] != guard_check_icall_nop )
  {
    v4 = __readgsqword(0x30u);
    result = (__int64 (           *)())a2(a1);
    if ( (unsigned __int64)result < *(_QWORD *)(v4 + 16) || (unsigned __int64)result > *(_QWORD *)(v4 + 8) )
      __fastfail(0xDu);
    if ( !*a1 )
      __fastfail(0xDu);
  }
  return result;
}

//----- (00000001401FDBA0) ----------------------------------------------------
__int64            sub_1401FDBA0(__int64 a1, char *a2)
{
  char *v3;
  int v4;

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v3 = a2;
    v4 = 0;
    if ( *a2 )
    {
      do
      {
        ++v3;
        ++v4;
      }
      while ( *v3 );
      if ( v4 )
        sub_1401FDF84(a1, a2, v4);
    }
  }
  return a1;
}

//----- (00000001401FDBF8) ----------------------------------------------------
__int64            sub_1401FDBF8(__int64 a1, char *a2)
{
  char *v3;
  signed int v4;

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v3 = a2;
    v4 = 0;
    if ( *a2 )
    {
      do
      {
        ++v3;
        ++v4;
      }
      while ( *v3 );
      if ( v4 )
        sub_1401FE028(a1, a2, v4);
    }
  }
  return a1;
}

//----- (00000001401FDC38) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_1401FDC38(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6;
  _BYTE *v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140284718);
  v6 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, (int)a3);
  *(_QWORD *)(a1 + 8) = v6;
  v7 = (_BYTE *)v6;
  *(_DWORD *)(a1 + 16) = a3;
  if ( v6 )
  {
    if ( a3 )
    {
      v8 = a2 - v6;
      v9 = a3;
      do
      {
        *v7 = v7[v8];
        ++v7;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 0;
  }
  return a1;
}

//----- (00000001401FDCAC) ----------------------------------------------------
__int64            sub_1401FDCAC(__int64 a1, char *a2)
{
  char *v3;
  signed int v4;

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v3 = a2;
    v4 = 0;
    if ( *a2 )
    {
      do
      {
        ++v3;
        ++v4;
      }
      while ( *v3 );
      if ( v4 )
        sub_1401FE0C0(a1, a2, v4);
    }
  }
  return a1;
}

//----- (00000001401FDCEC) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_1401FDCEC(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6;
  _BYTE *v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140284718);
  v6 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, (int)a3);
  *(_QWORD *)(a1 + 8) = v6;
  v7 = (_BYTE *)v6;
  *(_DWORD *)(a1 + 16) = a3;
  if ( v6 )
  {
    if ( a3 )
    {
      v8 = a2 - v6;
      v9 = a3;
      do
      {
        *v7 = v7[v8];
        ++v7;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 0;
  }
  return a1;
}

//----- (00000001401FDD90) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
void            sub_1401FDD90(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;

  if ( a2 )
  {
    v4 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 32);
    if ( v4 )
    {
      v5 = *a1;
      *(_DWORD *)(v4 + 24) = -1;
      *(_QWORD *)v4 = (uint64)(uintptr_t)(&off_140284790);
      *(_QWORD *)(v4 + 8) = v5;
      *(_QWORD *)(v4 + 16) = a2;
      *a1 = v4;
    }
    else
    {
      *a1 = 0;
      *((_BYTE *)a1 + 8) = 3;
    }
  }
  else
  {
    *((_BYTE *)a1 + 8) = 3;
  }
}

//----- (00000001401FDDF4) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
void            sub_1401FDDF4(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;

  if ( a2 )
  {
    v4 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 32);
    if ( v4 )
    {
      v5 = *a1;
      *(_DWORD *)(v4 + 24) = -1;
      *(_QWORD *)v4 = (uint64)(uintptr_t)(&off_140284790);
      *(_QWORD *)(v4 + 8) = v5;
      *(_QWORD *)(v4 + 16) = a2;
      *a1 = v4;
    }
    else
    {
      *a1 = 0;
      *((_BYTE *)a1 + 8) = 3;
    }
  }
  else
  {
    *((_BYTE *)a1 + 8) = 3;
  }
}

//----- (00000001401FDE58) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
void            sub_1401FDE58(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;

  if ( a2 )
  {
    v4 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 32);
    if ( v4 )
    {
      v5 = *a1;
      *(_DWORD *)(v4 + 24) = -1;
      *(_QWORD *)v4 = (uint64)(uintptr_t)(&off_140284790);
      *(_QWORD *)(v4 + 8) = v5;
      *(_QWORD *)(v4 + 16) = a2;
      *a1 = v4;
    }
    else
    {
      *a1 = 0;
      *((_BYTE *)a1 + 8) = 3;
    }
  }
  else
  {
    *((_BYTE *)a1 + 8) = 3;
  }
}

//----- (00000001401FDEBC) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
void            sub_1401FDEBC(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;

  if ( a2 )
  {
    v4 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 32);
    if ( v4 )
    {
      v5 = *a1;
      *(_DWORD *)(v4 + 24) = -1;
      *(_QWORD *)v4 = (uint64)(uintptr_t)(&off_140284790);
      *(_QWORD *)(v4 + 8) = v5;
      *(_QWORD *)(v4 + 16) = a2;
      *a1 = v4;
    }
    else
    {
      *a1 = 0;
      *((_BYTE *)a1 + 8) = 3;
    }
  }
  else
  {
    *((_BYTE *)a1 + 8) = 3;
  }
}

//----- (00000001401FDF20) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
void            sub_1401FDF20(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;

  if ( a2 )
  {
    v4 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 32);
    if ( v4 )
    {
      v5 = *a1;
      *(_DWORD *)(v4 + 24) = -1;
      *(_QWORD *)v4 = (uint64)(uintptr_t)(&off_140284790);
      *(_QWORD *)(v4 + 8) = v5;
      *(_QWORD *)(v4 + 16) = a2;
      *a1 = v4;
    }
    else
    {
      *a1 = 0;
      *((_BYTE *)a1 + 8) = 3;
    }
  }
  else
  {
    *((_BYTE *)a1 + 8) = 3;
  }
}

//----- (00000001401FDF84) ----------------------------------------------------
void            sub_1401FDF84(__int64 a1, char *a2, int a3)
{
  unsigned __int64 v6;
  char v7;

  if ( a2 && a3 > 0 )
  {
    if ( a3 == 1 )
    {
      v6 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
      if ( v6 )
      {
        v7 = *a2;
        *(_QWORD *)v6 = (uint64)(uintptr_t)(off_1402846F0);
        *(_BYTE *)(v6 + 8) = v7;
        goto LABEL_8;
      }
    }
    else
    {
      v6 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 24);
      if ( v6 )
      {
        *(_QWORD *)(v6 + 8) = (uint64)(uintptr_t)(a2);
        *(_QWORD *)v6 = (uint64)(uintptr_t)(&off_140284718);
        *(_DWORD *)(v6 + 16) = a3;
LABEL_8:
        *(_QWORD *)a1 = v6;
        return;
      }
    }
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 3;
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 2;
  }
}

//----- (00000001401FE028) ----------------------------------------------------
void            sub_1401FE028(__int64 a1, char *a2, signed int a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  char v8;

  if ( !a2 || a3 <= 0 )
  {
    *(_BYTE *)(a1 + 8) = 2;
    return;
  }
  if ( a3 == 1 )
  {
    v7 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
    if ( v7 )
    {
      v8 = *a2;
      *(_QWORD *)v7 = (uint64)(uintptr_t)(off_1402846F0);
      *(_BYTE *)(v7 + 8) = v8;
      goto LABEL_9;
    }
  }
  else
  {
    v6 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 24);
    if ( v6 )
    {
      v7 = sub_1401FDC38(v6, (__int64)a2, a3);
      goto LABEL_9;
    }
  }
  v7 = 0;
LABEL_9:
  *(_QWORD *)a1 = v7;
  if ( !v7 )
    *(_BYTE *)(a1 + 8) = 3;
}

//----- (00000001401FE0C0) ----------------------------------------------------
void            sub_1401FE0C0(__int64 a1, char *a2, signed int a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  char v8;

  if ( !a2 || a3 <= 0 )
  {
    *(_BYTE *)(a1 + 8) = 2;
    return;
  }
  if ( a3 == 1 )
  {
    v7 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
    if ( v7 )
    {
      v8 = *a2;
      *(_QWORD *)v7 = (uint64)(uintptr_t)(off_1402846F0);
      *(_BYTE *)(v7 + 8) = v8;
      goto LABEL_9;
    }
  }
  else
  {
    v6 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 24);
    if ( v6 )
    {
      v7 = sub_1401FDCEC(v6, (__int64)a2, a3);
      goto LABEL_9;
    }
  }
  v7 = 0;
LABEL_9:
  *(_QWORD *)a1 = v7;
  if ( !v7 )
    *(_BYTE *)(a1 + 8) = 3;
}

//----- (00000001401FE158) ----------------------------------------------------
__int64            sub_1401FE158(__int64 a1)
{
  return a1;
}

//----- (00000001401FE198) ----------------------------------------------------
DName *           sub_1401FE198(DName *this, char **a2, char a3)
{
  char *v5;
  unsigned __int8 v7;
  int v8;
  unsigned __int8 *v9;
  char v10;

  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  v5 = *a2;
  v7 = *v5;
  if ( *v5 )
  {
    v8 = 0;
    v9 = (unsigned __int8 *)v5;
    do
    {
      if ( v7 == a3 )
        break;
      if ( !byte_1402847B0[v7] && (g_144CBE628 & 0x10000) == 0 )
      {
        *((_BYTE *)this + 8) = 2;
        return this;
      }
      ++v8;
      *a2 = (char *)++v9;
      v7 = *v9;
    }
    while ( *v9 );
    sub_1401FDF84((__int64)this, v5, v8);
    v10 = **a2;
    if ( v10 )
    {
      ++*a2;
      if ( v10 != a3 )
      {
        *(_QWORD *)this = 0;
        *((_BYTE *)this + 8) = 3;
      }
    }
    else if ( !*((_BYTE *)this + 8) )
    {
      *((_BYTE *)this + 8) = 1;
    }
  }
  else
  {
    *((_BYTE *)this + 8) = 1;
  }
  return this;
}

//----- (00000001401FE248) ----------------------------------------------------
DName *           sub_1401FE248(DName *this,      struct StringLiteral *a2)
{
  int v3;

  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  v3 = *((_DWORD *)a2 + 2);
  if ( v3 > 0 )
    sub_1401FDF84((__int64)this, *(char **)a2, v3);
  return this;
}

//----- (00000001401FE284) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_1401FE284(__int64 a1, char a2)
{
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  sub_1401FFB98((sr_anon_89 *)a1, a2);
  return a1;
}

//----- (00000001401FE2A4) ----------------------------------------------------
DName *           sub_1401FE2A4(DName *this, struct DName *a2)
{
  char v2;
  struct DName *v3;
  _QWORD *v5;

  v2 = 0;
  v3 = a2;
  *((_DWORD *)this + 2) = 0;
  if ( a2 )
  {
    v5 = (_QWORD *)crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
    if ( v5 )
    {
      *v5 = (uint64)(uintptr_t)(&off_140284740);
      if ( (unsigned __int8)(*((_BYTE *)v3 + 8) - 2) <= 1u )
        v3 = nullptr;
      v5[1] = (uint64)(uintptr_t)(v3);
    }
    else
    {
      v5 = nullptr;
    }
    v2 = v5 == nullptr ? 3 : 0;
  }
  else
  {
    v5 = nullptr;
  }
  *(_QWORD *)this = (uint64)(uintptr_t)(v5);
  *((_BYTE *)this + 8) = v2;
  return this;
}

//----- (00000001401FE364) ----------------------------------------------------
__int64            sub_1401FE364(DName *this, __int64 a2)
{
  char *v2;
  unsigned __int64 v3;
  int v4;
  __int64 v6;
  char v7;
  __int64 v8;

  v2 = &v7;
  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  v7 = 0;
  v3 = abs64(a2);
  do
  {
    *--v2 = v3 % 0xA + 48;
    v3 /= 0xAu;
  }
  while ( v3 );
  if ( a2 < 0 )
    *--v2 = 45;
  sub_1401FE028((__int64)this, v2, v4 + 53 - (_DWORD)v2);
  return (__int64)this; /* mov rax, rbx (rbx = this) */
}

//----- (00000001401FE40C) ----------------------------------------------------
__int64            sub_1401FE40C(DName *this, unsigned __int64 a2)
{
  char *v2;
  int v4;
  __int64 v6;
  char v7;
  __int64 v8;

  v2 = &v7;
  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  v7 = 0;
  do
  {
    *--v2 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  sub_1401FE028((__int64)this, v2, v4 + 52 - (_DWORD)v2);
  return (__int64)this; /* mov rax, rbx (rbx = this) */
}

//----- (00000001401FE568) ----------------------------------------------------
unsigned __int64            sub_1401FE568(__int64 a1, struct _HeapManager *a2, int a3)
{
  if ( a3 )
    return (*(unsigned __int64 (           **)(unsigned __int64, struct _HeapManager *))(unsigned int *)&g_144CBE640)(
             (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL,
             a2);
  else
    return crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, a1);
}

//----- (00000001401FE594) ----------------------------------------------------
__int64            sub_1401FE594(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  sub_1401FDF84(a1, *(char **)a2, *(_DWORD *)(a2 + 8));
  return a1;
}

//----- (00000001401FE5CC) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_1401FE5CC(__int64 a1, char a2)
{
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  sub_1401FFB98((sr_anon_89 *)a1, a2);
  return a1;
}

//----- (00000001401FE5EC) ----------------------------------------------------
__int64            sub_1401FE5EC(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD *v4;

  v2 = a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v4 = (_QWORD *)crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
    if ( v4 )
    {
      *v4 = (uint64)(uintptr_t)(&off_140284740);
      if ( (unsigned __int8)(*(_BYTE *)(v2 + 8) - 2) <= 1u )
        v2 = 0;
      v4[1] = v2;
      *(_QWORD *)a1 = (uint64)(uintptr_t)(v4);
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_BYTE *)(a1 + 8) = 3;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 3;
  }
  return a1;
}

//----- (00000001401FE684) ----------------------------------------------------
__int64            sub_1401FE684(signed int *a1, __int64 a2, unsigned int a3)
{
  __int64 v3;

  if ( a3 > 9 )
  {
    *(_DWORD *)(a2 + 8) = 0;
    *(_BYTE *)(a2 + 8) = 3;
    goto LABEL_7;
  }
  if ( *a1 == -1 || (int)a3 > *a1 )
  {
    *(_DWORD *)(a2 + 8) = 0;
    *(_BYTE *)(a2 + 8) = 2;
LABEL_7:
    *(_QWORD *)a2 = 0;
    return a2;
  }
  v3 = *(_QWORD *)&a1[2 * a3 + 2];
  *(_QWORD *)a2 = *(_QWORD *)v3;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(v3 + 8);
  return a2;
}

//----- (00000001401FE6CC) ----------------------------------------------------
__int64            sub_1401FE6CC(__int64 a1,      struct StringLiteral *a2, __int64 a3)
{
  DName *v5;
  _BYTE v7[24];

  v5 = sub_1401FE248((DName *)v7, a2);
  sub_1401FE7C0((__int64)v5, a1, a3);
  return a1;
}

//----- (00000001401FE704) ----------------------------------------------------
__int64            sub_1401FE704(__int64 a1, char a2, __int64 a3)
{
  __int64 v6;
  int v7;

  v6 = 0;
  v7 = 0;
  sub_1401FFB98((sr_anon_89 *)&v6, a2);
  sub_1401FE7C0((__int64)&v6, a1, a3);
  return a1;
}

//----- (00000001401FE748) ----------------------------------------------------
__int64            sub_1401FE748(__int64 a1, int a2, __int64 a3)
{
  unsigned __int8 v4;
  _UNKNOWN ***v5;
  _UNKNOWN ***v7;
  int v8;

  v4 = a2;
  if ( (unsigned int)(a2 - 2) > 1 )
    v4 = 0;
  v8 = v4;
  v5 = &off_1402848D0;
  if ( a2 != 1 )
    v5 = nullptr;
  v7 = v5;
  sub_1401FE7C0((__int64)&v7, a1, a3);
  return a1;
}

//----- (00000001401FE794) ----------------------------------------------------
__int64            sub_1401FE794(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)a2 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  sub_1401FE888(a2, a3);
  return a2;
}

//----- (00000001401FE7C0) ----------------------------------------------------
__int64            sub_1401FE7C0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)a2 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  sub_1401FE908(a2, a3);
  return a2;
}

//----- (00000001401FE7EC) ----------------------------------------------------
__int64            sub_1401FE7EC(__int64 a1, __int64 a2, char a3)
{
  *(_QWORD *)a2 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  sub_1401FE9BC(a2, a3);
  return a2;
}

//----- (00000001401FE818) ----------------------------------------------------
__int64            sub_1401FE818(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)a2 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  sub_1401FEA28(a2, a3);
  return a2;
}

//----- (00000001401FE844) ----------------------------------------------------
__int64            sub_1401FE844(__int64 a1, __int64 a2, unsigned int a3)
{
  *(_QWORD *)a2 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  sub_1401FEABC(a2, a3);
  return a2;
}

//----- (00000001401FE888) ----------------------------------------------------
__int64            sub_1401FE888(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  char *v5;
  int v6;

  if ( *(char *)(a1 + 8) <= 1 && *(int *)(a2 + 8) > 0 )
  {
    if ( *(_QWORD *)a1 )
    {
      v4 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 24);
      if ( v4 )
      {
        v5 = *(char **)a2;
        v6 = *(_DWORD *)(a2 + 8);
        *(_QWORD *)v4 = (uint64)(uintptr_t)(&off_140284718);
        *(_QWORD *)(v4 + 8) = (uint64)(uintptr_t)(v5);
        *(_DWORD *)(v4 + 16) = v6;
      }
      sub_1401FDF20((unsigned __int64 *)a1, v4);
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
      sub_1401FDF84(a1, *(char **)a2, *(_DWORD *)(a2 + 8));
    }
  }
  return a1;
}

//----- (00000001401FE908) ----------------------------------------------------
__int64            sub_1401FE908(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  char *v6;

  if ( *(char *)(a1 + 8) > 1 )
    return a1;
  v4 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a1 )
  {
    if ( v4 )
    {
      *(_QWORD *)a1 = v4;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      return a1;
    }
    v5 = *(char *)(a2 + 8);
    goto LABEL_5;
  }
  if ( v4 )
  {
    sub_1401FDD90((unsigned __int64 *)a1, v4);
    return a1;
  }
  v5 = *(char *)(a2 + 8);
  if ( (_BYTE)v5 )
  {
    if ( (unsigned __int8)(v5 - 2) <= 1u )
    {
LABEL_5:
      *(_DWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 8) = v5;
      if ( (_BYTE)v5 == 1 )
      {
        *(_QWORD *)a1 = (uint64)(uintptr_t)((char *)&off_1402848C0 + 16 * v5);
        if ( !(_UNKNOWN *)((char *)&off_1402848C0 + 16 * v5) )
          *(_BYTE *)(a1 + 8) = 3;
      }
      else
      {
        *(_QWORD *)a1 = 0;
      }
      return a1;
    }
    if ( (unsigned __int8)v5 > 3u )
      v6 = (char *)&off_1402848F0;
    else
      v6 = (char *)&off_1402848C0 + 16 * v5;
    sub_1401FDDF4((unsigned __int64 *)a1, (__int64)v6);
  }
  return a1;
}

//----- (00000001401FE9BC) ----------------------------------------------------
__int64            sub_1401FE9BC(__int64 a1, char a2)
{
  unsigned __int64 v4;

  if ( *(char *)(a1 + 8) <= 1 && a2 )
  {
    if ( *(_QWORD *)a1 )
    {
      v4 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
      if ( v4 )
      {
        *(_BYTE *)(v4 + 8) = a2;
        *(_QWORD *)v4 = (uint64)(uintptr_t)(off_1402846F0);
      }
      sub_1401FDE58((unsigned __int64 *)a1, v4);
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
      sub_1401FFB98((sr_anon_89 *)a1, a2);
    }
  }
  return a1;
}

//----- (00000001401FEA28) ----------------------------------------------------
__int64            sub_1401FEA28(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD *v4;

  v2 = a2;
  if ( *(char *)(a1 + 8) <= 1 && a2 )
  {
    if ( *(_QWORD *)a1 )
    {
      if ( *(_BYTE *)(a2 + 8) <= 1u )
      {
        v4 = (_QWORD *)crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
        if ( v4 )
        {
          *v4 = (uint64)(uintptr_t)(&off_140284740);
          if ( (unsigned __int8)(*(_BYTE *)(v2 + 8) - 2) <= 1u )
            v2 = 0;
          v4[1] = v2;
        }
        else
        {
          v4 = nullptr;
        }
        sub_1401FDEBC((unsigned __int64 *)a1, (__int64)v4);
      }
      else
      {
        sub_1401FEABC(a1, *(char *)(a2 + 8));
      }
    }
    else
    {
      sub_1401FE5EC(a1, a2);
    }
  }
  return a1;
}

//----- (00000001401FEABC) ----------------------------------------------------
__int64            sub_1401FEABC(__int64 a1, unsigned int a2)
{
  char *v3;
  _UNKNOWN ***v4;

  if ( *(char *)(a1 + 8) <= 1 )
  {
    if ( *(_QWORD *)a1 && a2 - 2 > 1 )
    {
      if ( a2 )
      {
        if ( a2 > 3 )
          v3 = (char *)&off_1402848F0;
        else
          v3 = (char *)&off_1402848C0 + 16 * (int)a2;
        sub_1401FDDF4((unsigned __int64 *)a1, (__int64)v3);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 0;
      v4 = &off_1402848D0;
      *(_BYTE *)(a1 + 8) = a2;
      if ( a2 != 1 )
        v4 = nullptr;
      *(_QWORD *)a1 = (uint64)(uintptr_t)(v4);
    }
  }
  return a1;
}

//----- (00000001401FEB28) ----------------------------------------------------
int *           sub_1401FEB28(int *a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;

  if ( *a1 != 9 )
  {
    if ( *(_QWORD *)a2 )
    {
      v4 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
      if ( v4 )
      {
        *(_QWORD *)v4 = *(_QWORD *)a2;
        *(_DWORD *)(v4 + 8) = *(_DWORD *)(a2 + 8);
        v5 = *a1;
        *a1 = v5 + 1;
        *(_QWORD *)&a1[2 * v5 + 4] = v4;
      }
    }
  }
  return a1;
}

//----- (00000001401FEBB8) ----------------------------------------------------
void            sub_1401FEBB8(_HeapManager *this)
{
  __int64 v2;

  if ( *((_QWORD *)this + 1) )
  {
    v2 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 3) = v2;
    while ( v2 )
    {
      *((_QWORD *)this + 2) = **((_QWORD **)this + 3);
      (*((void (**)(void))this + 1))();
      v2 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 3) = v2;
    }
  }
}

//----- (00000001401FEC0C) ----------------------------------------------------
_OWORD *           sub_1401FEC0C(_OWORD *a1, int a2)
{
  __int128 v2;
  __int128 v4;

  if ( (g_144CBE628 & 1) != 0 )
  {
    *(_QWORD *)&v4 = (uint64)(uintptr_t)((char *)*(&off_1402834A0 + 2 * a2) + 2);
    DWORD2(v4) = *((_DWORD *)&off_1402834A0 + 4 * a2 + 2) - 2;
    v2 = v4;
  }
  else
  {
    v2 = *((_OWORD *)&off_1402834A0 + a2);
  }
  *a1 = v2;
  return a1;
}

//----- (00000001401FEC58) ----------------------------------------------------
__int64            sub_1401FEC58(__int64 a1, __int64 *a2)
{
  unsigned int v2;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct DName *v26;
  DName *v27;
  __int64 v28;
  int v29;
  DName *v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _BYTE *v35;
  __int128 *v36;
  unsigned __int64 v37;
  DName *v38;
  __int64 v39;
  DName *v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  DName *v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  DName *v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  __int64 v54;
  __int64 v55;
  BOOL v56;
  int v57;
  int v58;
       char *v59;
  int v60;
  __int64 v61;
  BOOL v62;
  BOOL v63;
  int v64;
  DName *v65;
  DName *v66;
  int v67;
       char *v68;
  BOOL v69;
  BOOL v70;
  DName *v71;
  DName *v72;
  DName *v73;
  __int128 v75;
  __int64 v76;
  unsigned int v77;
  __int128 v78;
  _BYTE v79[16];
  __int64 v80;
  int v81;
  __int64 v82;
  int v83;
  unsigned int v84;
  int v85;
  unsigned int v86;
  __int64 v87;
  int v88;
  __int64 v89;
  int v90;
  __int64 v91;
  int v92;
  __int64 v93;
  int v94;
  _BYTE v95[16];
  char v96[16];
  char v97[16];
  char v98[64];
  unsigned int v99;
  BOOL v100;
  BOOL v101;

  v2 = 0;
  v76 = 0;
  v86 = *(unsigned int *)&crt_undname_cursor - *(unsigned int *)&g_144CBE620;
  v77 = 0;
  v5 = sub_140204E8C();
  v101 = *a2 && (a2[1] & 0x200) != 0;
  if ( v5 != 0xFFFF )
  {
    if ( v5 == 65534 )
    {
      DWORD2(v78) = 0;
      *(_QWORD *)&v78 = (uint64)(uintptr_t)(&off_1402848D0);
      sub_1401FE7C0((__int64)&v78, a1, (__int64)a2);
      return a1;
    }
    if ( v5 == 65533 )
    {
      *(_QWORD *)a1 = *a2;
      v6 = *((_DWORD *)a2 + 2);
LABEL_157:
      *(_DWORD *)(a1 + 8) = v6;
      return a1;
    }
    v7 = v5 & 0x8000;
    if ( (v5 & 0x8000) != 0 )
    {
      v8 = v5 & 0x1800;
      v9 = 4096;
      v100 = v8 == 2048;
      if ( v8 == 2048 )
        v9 = 1024;
      v10 = v5 & v9;
      v85 = v10;
      if ( !v10 || (v11 = v5 & 0x1B00, ((v11 - 4096) & 0xFFFFFCFF) != 0) || v11 == 4864 )
      {
        if ( (v5 & 0x4000) != 0 )
        {
          if ( ((g_144CBE628 | (g_144CBE628 >> 2)) & 2) == 0 )
          {
            v12 = sub_140200244((__int64)&v75);
            v80 = 0;
            v81 = 0;
            v13 = v12;
            sub_1401FFB98((sr_anon_89 *)&v80, 32);
            sub_1401FE7C0((__int64)&v80, (__int64)&v78, v13);
            v2 = DWORD2(v78);
            v76 = v78;
LABEL_22:
            v77 = v2;
            goto LABEL_23;
          }
          v14 = sub_140200244((__int64)&v75);
          if ( *(char *)(v14 + 8) > 1 )
          {
            v2 = *(unsigned __int8 *)(v14 + 8);
            goto LABEL_22;
          }
        }
LABEL_23:
        if ( v10 && v8 == 6144 )
        {
          v15 = sub_1401FE7EC((__int64)a2, (__int64)&v78, 123);
          sub_1402017C8((__int64)&v75, 0);
          v16 = sub_1401FE7C0(v15, (__int64)&v80, (__int64)&v75);
          sub_1401FE908((__int64)&v76, v16);
          sub_140205354((DName *)&v75);
          if ( (g_144CBE628 & 0x1000) == 0 )
          {
            v80 = 0;
            v81 = 0;
            *(_QWORD *)&v78 = (uint64)(uintptr_t)("}' ");
            DWORD2(v78) = 3;
            sub_1401FFB98((sr_anon_89 *)&v80, 44);
            sub_1401FE7C0((__int64)&v80, (__int64)&v89, (__int64)&v75);
            v17 = sub_1401FE794((__int64)&v89, (__int64)&v91, (__int64)&v78);
            sub_1401FE908((__int64)&v76, v17);
          }
          DWORD2(v78) = 2;
          *(_QWORD *)&v78 = (uint64)(uintptr_t)("}'");
          v75 = v78;
          sub_1401FE888((__int64)&v76, (__int64)&v75);
          sub_1402009BC((__int64)&v75);
          if ( (~(g_144CBE628 >> 1) & 1) != 0
            && (~(g_144CBE628 >> 4) & 1) != 0
            && (g_144CBE628 & 0x1000) == 0 )
          {
            v80 = 0;
            v81 = 0;
            sub_1401FFB98((sr_anon_89 *)&v80, 32);
            sub_1401FE7C0((__int64)&v80, (__int64)&v78, (__int64)&v75);
            v18 = sub_1401FE7EC((__int64)&v78, (__int64)&v89, 32);
            v19 = sub_1401FE7C0(v18, (__int64)&v91, (__int64)&v76);
            v2 = (v5 & 0x6000) == 0;
LABEL_120:
            v61 = *(_QWORD *)v19;
            v53 = *(_DWORD *)(v19 + 8);
            v76 = v61;
            goto LABEL_121;
          }
LABEL_31:
          v2 = (v5 & 0x6000) == 0;
          goto LABEL_122;
        }
        v91 = 0;
        v92 = 0;
        v89 = 0;
        v90 = 0;
        v87 = 0;
        v88 = 0;
        v80 = 0;
        v81 = 0;
        v93 = 0;
        v94 = 0;
        if ( !v10 )
        {
LABEL_39:
          if ( v8 != 2048 || (v5 & 0x700) == 0x200 )
            goto LABEL_46;
          *(_QWORD *)&v78 = 0;
          DWORD2(v78) = 0;
          if ( (g_144CBE628 & 0x60) == 0x60 )
          {
            *(_QWORD *)&v75 = 0;
            DWORD2(v75) = 0;
            sub_140200AFC((__int64)&v82, (__int64)&v78, 0, &v75, 1);
            if ( (char)v83 <= 1 )
              goto LABEL_46;
            v21 = (unsigned __int8)v83;
          }
          else
          {
            v82 = 0;
            v83 = 0;
            sub_140200AFC((__int64)&v75, (__int64)&v82, 0, &v78, 1);
            v93 = v75;
            v21 = DWORD2(v75);
          }
          v94 = v21;
LABEL_46:
          if ( (~(g_144CBE628 >> 1) & 1) == 0 || (g_144CBE628 & 0x10) != 0 )
          {
            v25 = sub_1402009BC((__int64)&v75);
            v24 = v76;
            if ( (_BYTE)v77 != 3 && *(char *)(v25 + 8) > 1 )
              v77 = *(unsigned __int8 *)(v25 + 8) | v2 & 0xFFFFFF00;
          }
          else
          {
            v22 = sub_1402009BC((__int64)&v75);
            v23 = sub_1401FE7C0(v22, (__int64)&v78, (__int64)&v76);
            v24 = *(_QWORD *)v23;
            LODWORD(v23) = *(_DWORD *)(v23 + 8);
            v76 = v24;
            v77 = v23;
          }
          if ( *a2 )
          {
            if ( !v24 || (g_144CBE628 & 0x1000) != 0 )
            {
              v76 = *a2;
              v77 = *((_DWORD *)a2 + 2);
            }
            else
            {
              v82 = 0;
              v83 = 0;
              sub_1401FFB98((sr_anon_89 *)&v82, 32);
              sub_1401FE7C0((__int64)&v82, (__int64)&v75, (__int64)a2);
              sub_1401FE908((__int64)&v76, (__int64)&v75);
            }
          }
          v26 = nullptr;
          v82 = 0;
          v84 = 0;
          if ( !v101 )
          {
            v37 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
            v26 = (struct DName *)v37;
            if ( v37 )
            {
              *(_QWORD *)v37 = 0;
              *(_DWORD *)(v37 + 8) = 0;
            }
            else
            {
              v26 = nullptr;
            }
            v38 = sub_1402038F8((DName *)v96, v26);
            v39 = *(_QWORD *)v38;
            LODWORD(v38) = *((_DWORD *)v38 + 2);
            v82 = v39;
            v84 = (unsigned int)v38;
LABEL_60:
            if ( !v85 )
            {
LABEL_73:
              if ( g_144CBE63C == 1 )
              {
                v43 = g_144CBE638;
                if ( !g_144CBE638 )
                  v43 = v86;
                g_144CBE638 = v43;
              }
              v44 = sub_1401FFDD8((DName *)v79);
              *(_QWORD *)&v78 = 0;
              DWORD2(v78) = 0;
              v45 = (__int64)v44;
              sub_1401FFB98((sr_anon_89 *)&v78, 40);
              sub_1401FE7C0((__int64)&v78, (__int64)&v75, v45);
              v46 = sub_1401FE7EC((__int64)&v75, (__int64)v95, 41);
              sub_1401FE908((__int64)&v76, v46);
              if ( v8 == 2048 && (v5 & 0x700) != 0x200 )
                sub_1401FE908((__int64)&v76, (__int64)&v93);
              if ( (~(g_144CBE628 >> 19) & 1) != 0 )
              {
                v47 = sub_14020372C((__int64)v79);
                sub_1401FE908((__int64)&v76, v47);
              }
              else
              {
                v48 = sub_14020372C((__int64)v79);
                if ( (_BYTE)v77 != 3 && *(char *)(v48 + 8) > 1 )
                  v77 = *(unsigned __int8 *)(v48 + 8) | v77 & 0xFFFFFF00;
              }
              v49 = sub_140202784((DName *)v79);
              sub_1401FE908((__int64)&v76, (__int64)v49);
              if ( (~(g_144CBE628 >> 8) & 1) != 0 )
              {
                v50 = sub_140204E68((__int64)v79);
                sub_1401FE908((__int64)&v76, v50);
              }
              else
              {
                v51 = sub_140204E68((__int64)v79);
                if ( (_BYTE)v77 != 3 && *(char *)(v51 + 8) > 1 )
                  v77 = *(unsigned __int8 *)(v51 + 8) | v77 & 0xFFFFFF00;
              }
              v52 = sub_140201914((__int64)v79);
              if ( (_BYTE)v77 != 3 && *(char *)(v52 + 8) > 1 )
                v77 = *(unsigned __int8 *)(v52 + 8) | v77 & 0xFFFFFF00;
              if ( (~(g_144CBE628 >> 2) & 1) == 0 || !v26 )
                goto LABEL_31;
              v2 = (v5 & 0x6000) == 0;
              *(_QWORD *)v26 = v76;
              *((_DWORD *)v26 + 2) = v77;
              v76 = v82;
              v53 = v84;
LABEL_121:
              v77 = v53;
LABEL_122:
              v62 = v100;
              if ( (v5 & 0x8000) != 0 )
                v2 = v100;
              v99 = v2;
              if ( !v2 )
                goto LABEL_151;
              if ( (~(g_144CBE628 >> 9) & 1) != 0 )
              {
                v63 = 1;
                v64 = v5 & 0x700;
                if ( (v5 & 0x8000) != 0 )
                  v63 = v64 == 512;
                if ( v63 )
                {
                  DWORD2(v75) = 7;
                  *(_QWORD *)&v75 = (uint64)(uintptr_t)("static ");
                  v65 = sub_1401FE248((DName *)v79, (     struct StringLiteral *)&v75);
                  sub_1401FE7C0((__int64)v65, (__int64)&v75, (__int64)&v76);
                  v76 = v75;
                  v77 = DWORD2(v75);
                }
                if ( (v5 & 0x8000) != 0 && v64 == 256
                  || (v5 & 0x400) != 0 && ((v64 - 1024) & 0xFFFFFCFF) == 0 && v64 != 1792 )
                {
                  DWORD2(v75) = 8;
                  *(_QWORD *)&v75 = (uint64)(uintptr_t)("virtual ");
                  v66 = sub_1401FE248((DName *)v79, (     struct StringLiteral *)&v75);
                  sub_1401FE7C0((__int64)v66, (__int64)&v75, (__int64)&v76);
                  v76 = v75;
                  v77 = DWORD2(v75);
                }
                v62 = v100;
                v2 = v99;
              }
              if ( (~(g_144CBE628 >> 7) & 1) == 0 )
                goto LABEL_151;
              v67 = v5 & 0xC0;
              if ( (v5 & 0x8000) != 0 )
                v62 = v67 == 64;
              if ( v62 )
              {
                v68 = "private: ";
                DWORD2(v75) = 9;
              }
              else
              {
                v69 = v8 == 4096;
                if ( (v5 & 0x8000) != 0 )
                  v69 = v67 == 128;
                if ( v69 )
                {
                  v68 = "protected: ";
                  DWORD2(v75) = 11;
                }
                else
                {
                  v70 = v8 == 0;
                  if ( (v5 & 0x8000) != 0 )
                    v70 = v67 == 0;
                  if ( !v70 )
                    goto LABEL_151;
                  v68 = "public: ";
                  DWORD2(v75) = 8;
                }
              }
              *(_QWORD *)&v75 = (uint64)(uintptr_t)(v68);
              v71 = sub_1401FE248((DName *)v79, (     struct StringLiteral *)&v75);
              sub_1401FE7C0((__int64)v71, (__int64)&v75, (__int64)&v76);
              v76 = v75;
              v77 = DWORD2(v75);
LABEL_151:
              if ( ((v2 != 0 ? 1024 : 4096) & v5) != 0 && (g_144CBE628 & 0x1000) == 0 )
              {
                DWORD2(v75) = 8;
                *(_QWORD *)&v75 = (uint64)(uintptr_t)("[thunk]:");
                v72 = sub_1401FE248((DName *)v79, (     struct StringLiteral *)&v75);
                sub_1401FE7C0((__int64)v72, (__int64)&v75, (__int64)&v76);
                v76 = v75;
                v77 = DWORD2(v75);
              }
              if ( (v5 & 0x10000) != 0 )
              {
                DWORD2(v75) = 11;
                *(_QWORD *)&v75 = (uint64)(uintptr_t)("extern \"C\" ");
                v73 = sub_1401FE248((DName *)v79, (     struct StringLiteral *)&v75);
                sub_1401FE7C0((__int64)v73, (__int64)&v75, (__int64)&v76);
                v76 = v75;
                v77 = DWORD2(v75);
              }
              goto LABEL_156;
            }
            if ( v8 == 2048 )
            {
              v29 = v5 & 0x700;
              if ( v29 == 1536 )
              {
                DWORD2(v75) = 12;
                *(_QWORD *)&v75 = (uint64)(uintptr_t)("`vtordispex{");
                v30 = sub_1401FE248((DName *)v96, (     struct StringLiteral *)&v75);
                sub_1401FE7C0((__int64)v30, (__int64)&v75, (__int64)&v91);
                v31 = sub_1401FE7EC((__int64)&v75, (__int64)&v78, 44);
                v32 = sub_1401FE7C0(v31, (__int64)v97, (__int64)&v89);
                v33 = sub_1401FE7EC(v32, (__int64)v98, 44);
                v34 = sub_1401FE7C0(v33, (__int64)v95, (__int64)&v87);
                v35 = v79;
                v36 = (__int128 *)v34;
LABEL_70:
                v41 = sub_1401FE7EC((__int64)v36, (__int64)v35, 44);
                sub_1401FE908((__int64)&v76, v41);
LABEL_72:
                DWORD2(v75) = 3;
                *(_QWORD *)&v75 = (uint64)(uintptr_t)("}' ");
                v42 = sub_1401FE794((__int64)&v80, (__int64)v79, (__int64)&v75);
                sub_1401FE908((__int64)&v76, v42);
                goto LABEL_73;
              }
              if ( v29 == 1280 )
              {
                DWORD2(v75) = 10;
                *(_QWORD *)&v75 = (uint64)(uintptr_t)("`vtordisp{");
                v40 = sub_1401FE248((DName *)v79, (     struct StringLiteral *)&v75);
                sub_1401FE7C0((__int64)v40, (__int64)&v75, (__int64)&v87);
                v35 = v95;
                v36 = &v75;
                goto LABEL_70;
              }
            }
            DWORD2(v75) = 10;
            *(_QWORD *)&v75 = (uint64)(uintptr_t)("`adjustor{");
            sub_1401FE888((__int64)&v76, (__int64)&v75);
            goto LABEL_72;
          }
          v27 = sub_1402038F8((DName *)v96, nullptr);
          *(_QWORD *)&v78 = 0;
          DWORD2(v78) = 0;
          v28 = (__int64)v27;
          sub_1401FFB98((sr_anon_89 *)&v78, 32);
          sub_1401FE7C0((__int64)&v78, (__int64)&v75, v28);
          sub_1401FE908((__int64)&v76, (__int64)&v75);
          if ( (g_144CBE628 & 0x1000) == 0 )
            goto LABEL_60;
LABEL_156:
          *(_QWORD *)a1 = v76;
          v6 = v77;
          goto LABEL_157;
        }
        if ( v8 == 2048 )
        {
          v20 = v5 & 0x700;
          if ( v20 == 1536 )
          {
            sub_1402017C8((__int64)&v78, 1);
            v91 = v78;
            v92 = DWORD2(v78);
            sub_1402017C8((__int64)&v78, 1);
            v89 = v78;
            v90 = DWORD2(v78);
LABEL_37:
            sub_1402017C8((__int64)&v78, 1);
            v87 = v78;
            v88 = DWORD2(v78);
            goto LABEL_38;
          }
          if ( v20 == 1280 )
            goto LABEL_37;
        }
LABEL_38:
        sub_1402017C8((__int64)&v78, 1);
        v80 = v78;
        v81 = DWORD2(v78);
        goto LABEL_39;
      }
    }
    sub_1401FE908((__int64)&v76, (__int64)a2);
    if ( (v5 & 0x8000) == 0 )
    {
      if ( (((v5 & 0x7C00) - 26624) & 0xFFFFF7FF) == 0 )
      {
        sub_140205608(a1, (__int64)&v76);
        return a1;
      }
      if ( (v5 & 0x7C00) == 0x6000 )
      {
        DWORD2(v75) = 2;
        *(_QWORD *)&v75 = (uint64)(uintptr_t)("}'");
        v78 = v75;
        v54 = sub_1401FE7EC((__int64)&v76, (__int64)v79, 123);
        sub_1402017C8((__int64)&v75, 0);
        v55 = sub_1401FE7C0(v54, (__int64)v95, (__int64)&v75);
        sub_1401FE794(v55, a1, (__int64)&v78);
        return a1;
      }
    }
    if ( (v5 & 0xFC00) == 0x7C00 )
    {
      sub_14020558C(a1, (__int64)&v76);
      return a1;
    }
    v8 = v5 & 0x1800;
    v100 = v8 == 2048;
    LOBYTE(v2) = (v5 & 0x6000) == 0;
    v56 = v2;
    if ( (v5 & 0x8000) != 0 )
      v56 = v8 == 2048;
    v57 = v5 & (v56 ? 1024 : 4096);
    if ( v57 )
    {
      v58 = v5 & 0x1B00;
      if ( v7 != 0 && v58 == 4096 )
      {
        DWORD2(v75) = 32;
        *(_QWORD *)&v75 = (uint64)(uintptr_t)("`local static destructor helper'");
        sub_1401FE888((__int64)&v76, (__int64)&v75);
LABEL_116:
        v60 = v5 & 0x1B00;
        if ( v7 != 0 && v60 == 4352 || v7 != 0 && v60 == 4608 )
          goto LABEL_118;
LABEL_119:
        v19 = (__int64)sub_140201EA4((DName *)v79, (__int64)&v76);
        goto LABEL_120;
      }
      if ( v7 != 0 && v58 == 4352 )
      {
        v59 = "`template static data member constructor helper'";
        DWORD2(v75) = 48;
LABEL_110:
        *(_QWORD *)&v75 = (uint64)(uintptr_t)(v59);
        sub_1401FE888((__int64)&v76, (__int64)&v75);
LABEL_118:
        *(_QWORD *)&v78 = 0;
        DWORD2(v78) = 0;
        sub_1401FFB98((sr_anon_89 *)&v78, 32);
        sub_1401FE7C0((__int64)&v78, (__int64)&v75, (__int64)&v76);
        v76 = v75;
        v53 = DWORD2(v75);
        goto LABEL_121;
      }
      if ( v7 != 0 && v58 == 4608 )
      {
        v59 = "`template static data member destructor helper'";
        DWORD2(v75) = 47;
        goto LABEL_110;
      }
    }
    if ( (v5 & 0x8000) == 0 && (v5 & 0x7C00) == 0x7800 )
      goto LABEL_156;
    if ( !v57 )
      goto LABEL_119;
    goto LABEL_116;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 8) = 2;
  return a1;
}

//----- (00000001401FFB98) ----------------------------------------------------
void            sub_1401FFB98(sr_anon_89 *this, char a2)
{
  unsigned __int64 v4;

  if ( a2 )
  {
    v4 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
    if ( v4 )
    {
      *(_BYTE *)(v4 + 8) = a2;
      *(_QWORD *)v4 = (uint64)(uintptr_t)(off_1402846F0);
      *(_QWORD *)this = v4;
    }
    else
    {
      *(_QWORD *)this = 0;
      *((_BYTE *)this + 8) = 3;
    }
  }
}

//----- (00000001401FFC44) ----------------------------------------------------
__int64            sub_1401FFC44(__int64 a1)
{
  int v2;
  unsigned __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  int v9;
  _DWORD v10[4];
  _BYTE v11[24];

  *(_QWORD *)a1 = 0;
  v2 = 1;
  *(_DWORD *)(a1 + 8) = 0;
  while ( **(_BYTE **)&crt_undname_cursor != 64 && **(_BYTE **)&crt_undname_cursor != 90 )
  {
    if ( v2 )
    {
      v2 = 0;
    }
    else if ( *(_QWORD *)a1 )
    {
      v3 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
      if ( v3 )
      {
        *(_BYTE *)(v3 + 8) = 44;
        *(_QWORD *)v3 = (uint64)(uintptr_t)(off_1402846F0);
      }
      else
      {
        v3 = 0;
      }
      sub_1401FDE58((unsigned __int64 *)a1, v3);
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
      sub_1401FFB98((sr_anon_89 *)a1, 44);
    }
    if ( !**(_BYTE **)&crt_undname_cursor )
    {
      if ( *(char *)(a1 + 8) <= 1 )
      {
        if ( *(_QWORD *)a1 )
        {
          sub_1401FDDF4((unsigned __int64 *)a1, (__int64)&off_1402848D0);
        }
        else
        {
          *(_DWORD *)(a1 + 8) = 0;
          *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
          *(_BYTE *)(a1 + 8) = 1;
        }
      }
      return a1;
    }
    v4 = (char)**(_BYTE **)&crt_undname_cursor - 48;
    if ( v4 > 9 )
    {
      v6 = crt_undname_cursor;
      v8 = 0;
      v9 = 0;
      sub_1402030E0(v10, (__int64)&v8);
      if ( crt_undname_cursor - v6 > 1 && **(_DWORD **)&g_144CBE600 != 9 )
        sub_1401FEB28(*(int **)&g_144CBE600, (__int64)v10);
      sub_1401FE908(a1, (__int64)v10);
      if ( crt_undname_cursor == v6 )
      {
        *(_DWORD *)(a1 + 8) = 0;
        *(_BYTE *)(a1 + 8) = 2;
        *(_QWORD *)a1 = 0;
      }
    }
    else
    {
      ++crt_undname_cursor;
      v5 = sub_1401FE684(*(signed int **)&g_144CBE600, (__int64)v11, v4);
      sub_1401FE908(a1, v5);
    }
    if ( *(_BYTE *)(a1 + 8) )
      return a1;
  }
  return a1;
}

// 1401FFC8F: conditional instruction was optimized away because cl.1==0

//----- (00000001401FFDD8) ----------------------------------------------------
DName *           sub_1401FFDD8(DName *a1)
{
  int v2;
       char *v3;
  __int64 v4;
       char *v5;
  __int64 v7;
  int v8;
       char *v9;
  int v10;
  _BYTE v11[16];

  if ( **(_BYTE **)&crt_undname_cursor == 88 )
  {
    v10 = 4;
    ++crt_undname_cursor;
    v5 = "void";
LABEL_18:
    v9 = v5;
    sub_1401FE248(a1, (     struct StringLiteral *)&v9);
    return a1;
  }
  if ( **(_BYTE **)&crt_undname_cursor == 90 )
  {
    ++crt_undname_cursor;
    if ( (~(g_144CBE628 >> 18) & 1) != 0 )
    {
      v5 = "...";
      v10 = 3;
    }
    else
    {
      v5 = "<ellipsis>";
      v10 = 10;
    }
    goto LABEL_18;
  }
  sub_1401FFC44((__int64)&v7);
  v2 = v8;
  if ( (_BYTE)v8 || !**(_BYTE **)&crt_undname_cursor )
    goto LABEL_13;
  if ( **(_BYTE **)&crt_undname_cursor == 64 )
  {
    ++crt_undname_cursor;
LABEL_13:
    *(_QWORD *)a1 = v7;
    *((_DWORD *)a1 + 2) = v2;
    return a1;
  }
  if ( **(_BYTE **)&crt_undname_cursor == 90 )
  {
    ++crt_undname_cursor;
    if ( (~(g_144CBE628 >> 18) & 1) != 0 )
    {
      v3 = ",...";
      v10 = 4;
    }
    else
    {
      v3 = ",<ellipsis>";
      v10 = 11;
    }
    v9 = v3;
    v4 = sub_1401FE794((__int64)&v7, (__int64)v11, (__int64)&v9);
    *(_QWORD *)a1 = *(_QWORD *)v4;
    *((_DWORD *)a1 + 2) = *(_DWORD *)(v4 + 8);
  }
  else
  {
    *((_DWORD *)a1 + 2) = 0;
    *((_BYTE *)a1 + 8) = 2;
    *(_QWORD *)a1 = 0;
  }
  return a1;
}

//----- (00000001401FFF34) ----------------------------------------------------
__int64            sub_1401FFF34(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char i;
  __int64 v6;
  _BYTE *v7;
  __int64 v9;
  int v10;
  _BYTE v11[24];

  if ( **(_BYTE **)&crt_undname_cursor )
  {
    v2 = sub_140204CC0((DName *)v11);
    sub_1401FE7EC(v2, (__int64)&v9, 123);
    for ( i = 0; ; i = 1 )
    {
      if ( i )
        sub_1401FE9BC((__int64)&v9, 44);
      v6 = sub_140204850((DName *)v11, v3, v4);
      sub_1401FE908((__int64)&v9, v6);
      if ( **(_BYTE **)&crt_undname_cursor != 64 )
        break;
      v7 = (_BYTE *)(crt_undname_cursor + 1LL);
      crt_undname_cursor = (uint64)(uintptr_t)(v7);
      if ( *v7 == 64 )
      {
        crt_undname_cursor = (uint64)(uintptr_t)(v7 + 1);
        sub_1401FE9BC((__int64)&v9, 125);
        *(_QWORD *)a1 = v9;
        *(_DWORD *)(a1 + 8) = v10;
        return a1;
      }
    }
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  }
  return a1;
}

//----- (00000001401FFFFC) ----------------------------------------------------
DName *           sub_1401FFFFC(DName *a1, __int64 a2)
{
  int v4;
  bool v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BYTE *v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 *v17;
  __int64 v18;
  __int64 v20;
  int v21;
       char *v22;
  int v23;
  __int128 v24;
  __int128 v25;
  _BYTE v26[16];
  _BYTE v27[16];

  if ( !**(_BYTE **)&crt_undname_cursor )
  {
    if ( *(_QWORD *)a2 )
    {
      DWORD2(v24) = 2;
      *(_QWORD *)&v24 = (uint64)(uintptr_t)(")[");
      v25 = v24;
      v22 = nullptr;
      v23 = 0;
      sub_1401FFB98((sr_anon_89 *)&v22, 40);
      sub_1401FE7C0((__int64)&v22, (__int64)&v24, a2);
      v15 = sub_1401FE794((__int64)&v24, (__int64)v27, (__int64)&v25);
      v16 = sub_1401FE844(v15, (__int64)v26, 1u);
      v17 = &v20;
LABEL_18:
      v18 = sub_1401FE7EC(v16, (__int64)v17, 93);
      sub_14020033C(a1, v18);
      return a1;
    }
LABEL_17:
    v22 = nullptr;
    v23 = 0;
    sub_1401FFB98((sr_anon_89 *)&v22, 91);
    v16 = sub_1401FE844((__int64)&v22, (__int64)v27, 1u);
    v17 = (__int64 *)v26;
    goto LABEL_18;
  }
  v4 = sub_1402027E8();
  if ( v4 <= 0 )
    goto LABEL_17;
  v5 = (*(_DWORD *)(a2 + 8) & 0x800) == 0;
  v20 = 0;
  v21 = 0;
  if ( v5 )
    goto LABEL_5;
  v23 = 2;
  v22 = "[]";
  sub_1401FE888((__int64)&v20, (__int64)&v22);
  while ( (char)v21 <= 1 )
  {
LABEL_5:
    v6 = v4--;
    if ( !v6 || !**(_BYTE **)&crt_undname_cursor )
      break;
    v7 = sub_1402017C8((__int64)v26, 0);
    v22 = nullptr;
    v23 = 0;
    v8 = v7;
    sub_1401FFB98((sr_anon_89 *)&v22, 91);
    sub_1401FE7C0((__int64)&v22, (__int64)&v25, v8);
    v9 = sub_1401FE7EC((__int64)&v25, (__int64)v27, 93);
    sub_1401FE908((__int64)&v20, v9);
  }
  if ( *(_QWORD *)a2 )
  {
    if ( (*(_DWORD *)(a2 + 8) & 0x800) != 0 )
    {
      v10 = v27;
      v11 = a2;
    }
    else
    {
      v22 = nullptr;
      v23 = 0;
      sub_1401FFB98((sr_anon_89 *)&v22, 40);
      sub_1401FE7C0((__int64)&v22, (__int64)&v25, a2);
      v12 = sub_1401FE7EC((__int64)&v25, (__int64)v27, 41);
      v10 = v26;
      v11 = v12;
    }
    v13 = sub_1401FE7C0(v11, (__int64)v10, (__int64)&v20);
    v20 = *(_QWORD *)v13;
    v21 = *(_DWORD *)(v13 + 8);
  }
  sub_1402030E0(&v24, (__int64)&v20);
  v14 = v24;
  *((_DWORD *)a1 + 2) = DWORD2(v24) | 0x800;
  *(_QWORD *)a1 = v14;
  return a1;
}
