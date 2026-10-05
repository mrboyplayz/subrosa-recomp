/* Address: 0x1401d7910 | Name: sub_1401D7910 | Size: 2432 bytes */
__int64 __fastcall sub_1401D7910(
        int *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 *a7,
        __int16 *a8,
        __int16 *a9,
        int a10,
        int a11,
        __int16 a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19)
{
  int v19; // eax
  int v21; // [rsp+20h] [rbp-98h]
  int v22; // [rsp+20h] [rbp-98h]
  int v23; // [rsp+24h] [rbp-94h]
  int v24; // [rsp+28h] [rbp-90h]
  int v25; // [rsp+2Ch] [rbp-8Ch]
  int v26; // [rsp+30h] [rbp-88h]
  int v27; // [rsp+34h] [rbp-84h]
  int i; // [rsp+38h] [rbp-80h]
  int v29; // [rsp+3Ch] [rbp-7Ch]
  int v30; // [rsp+40h] [rbp-78h]
  int v31; // [rsp+44h] [rbp-74h]
  int v32; // [rsp+4Ch] [rbp-6Ch]
  int v33; // [rsp+50h] [rbp-68h]
  int v34; // [rsp+54h] [rbp-64h]
  int v35; // [rsp+58h] [rbp-60h]
  int v36; // [rsp+5Ch] [rbp-5Ch]
  int v37; // [rsp+60h] [rbp-58h]
  int *v38; // [rsp+68h] [rbp-50h]
  int v39; // [rsp+70h] [rbp-48h]
  int v40; // [rsp+74h] [rbp-44h]
  int v41; // [rsp+78h] [rbp-40h]
  int v42; // [rsp+7Ch] [rbp-3Ch]
  __int16 v43; // [rsp+80h] [rbp-38h]
  int v44; // [rsp+84h] [rbp-34h]
  int *v45; // [rsp+90h] [rbp-28h]
  int *v46; // [rsp+98h] [rbp-20h]

  v45 = &a1[a1[1084] - a10 + 321];
  v38 = (int *)(a6 + 4LL * (a1[1083] - a10 + 2));
  v37 = a14 >> 6;
  v46 = a1 + 975;
  for ( i = 0; i < a17; ++i )
  {
    a1[1085] = 196314165 * a1[1085] + 907633515;
    v41 = sub_1401D7000(v46, a7, a19);
    if ( a2 == 2 )
    {
      v23 = ((a8[4] * (__int64)*(v38 - 4)) >> 16)
          + ((a8[3] * (__int64)*(v38 - 3)) >> 16)
          + ((a8[2] * (__int64)*(v38 - 2)) >> 16)
          + ((a8[1] * (__int64)*(v38 - 1)) >> 16)
          + ((*a8 * (__int64)*v38) >> 16)
          + 2;
      ++v38;
    }
    else
    {
      v23 = 0;
    }
    v34 = ((a12 * (__int64)a1[1080]) >> 16) + sub_1401D73B0(a1 + 1081, a1 + 1056, a9, a18);
    v35 = ((((__int64)a13 >> 16) * a1[1080]) >> 16) + (((__int16)a13 * (__int64)a1[a1[1084] + 319]) >> 16);
    v25 = 4 * v41 - v34 - v35;
    if ( a10 <= 0 )
    {
      v19 = (v25 >> 1) + 1;
    }
    else
    {
      v31 = 2 * (((((__int64)a11 >> 16) * *(v45 - 1)) >> 16) + (((__int16)a11 * (__int64)(*(v45 - 2) + *v45)) >> 16));
      ++v45;
      v19 = ((v23 - v31 + 2 * v25) >> 2) + 1;
    }
    v27 = *(_DWORD *)(a3 + 4LL * i) - (v19 >> 1);
    if ( a1[1085] < 0 )
      v27 = (v19 >> 1) - *(_DWORD *)(a3 + 4LL * i);
    if ( v27 <= 30720 )
    {
      if ( v27 >= -31744 )
        v39 = v27;
      else
        v39 = -31744;
      v40 = v39;
    }
    else
    {
      v40 = 30720;
    }
    v21 = v40 - a16;
    v26 = (v40 - a16) >> 10;
    if ( a15 > 2048 )
    {
      v33 = a15 / 2 - 512;
      if ( v21 <= v33 )
      {
        if ( v21 >= 512 - a15 / 2 )
        {
          if ( v21 >= 0 )
            v26 = 0;
          else
            v26 = -1;
        }
        else
        {
          v26 = (v33 + v21) >> 10;
        }
      }
      else
      {
        v26 = (v21 - v33) >> 10;
      }
    }
    if ( v26 <= 0 )
    {
      if ( v26 )
      {
        if ( v26 == -1 )
        {
          v24 = a16;
          v22 = a16 - 944;
          v29 = (__int16)a15 * (__int16)(944 - a16);
          v30 = (__int16)a15 * (__int16)a16;
        }
        else
        {
          v22 = a16 + (v26 << 10) + 80;
          v24 = v22 + 1024;
          v29 = (__int16)a15 * (__int16)-(__int16)(a16 + ((_WORD)v26 << 10) + 80);
          v30 = (__int16)a15 * (__int16)-(__int16)(a16 + ((_WORD)v26 << 10) + 80 + 1024);
        }
      }
      else
      {
        v22 = a16;
        v24 = a16 + 944;
        v29 = (__int16)a15 * (__int16)a16;
        v30 = (__int16)a15 * (__int16)(a16 + 944);
      }
    }
    else
    {
      v22 = a16 + (v26 << 10) - 80;
      v24 = v22 + 1024;
      v29 = (__int16)a15 * (__int16)v22;
      v30 = (__int16)a15 * (__int16)(v22 + 1024);
    }
    if ( (__int16)(v40 - v24) * (__int16)(v40 - v24) + v30 < (__int16)(v40 - v22) * (__int16)(v40 - v22) + v29 )
      v22 = v24;
    *(_BYTE *)(a4 + i) = ((v22 >> 9) + 1) >> 1;
    v36 = 16 * v22;
    if ( a1[1085] < 0 )
      v36 = -16 * v22;
    v32 = 16 * v41 + v36 + 2 * v23;
    if ( (((int)((v37 * (__int64)v32) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((int)((v37 * (__int64)v32) >> 16) >> 7) + 1) >> 1 >= -32768 )
        v42 = (((int)((v37 * (__int64)v32) >> 16) >> 7) + 1) >> 1;
      else
        LOWORD(v42) = 0x8000;
      v43 = v42;
    }
    else
    {
      v43 = 0x7FFF;
    }
    *(_WORD *)(a5 + 2LL * i) = v43;
    *++v46 = v32;
    a1[1081] = v32 - 16 * *(_DWORD *)(a3 + 4LL * i);
    v44 = a1[1081] - 4 * v34;
    a1[1080] = v44;
    a1[a1[1084] + 320] = v44 - 4 * v35;
    *(_DWORD *)(a6 + 4LL * a1[1083]) = 2 * (v36 + 2 * v23);
    ++a1[1084];
    ++a1[1083];
    a1[1085] += *(char *)(a4 + i);
  }
  return MEMORY[0x1401FC920](a1 + 960, &a1[a17 + 960]);
}

