/* Address: 0x1401ebf50 | Name: sub_1401EBF50 | Size: 3145 bytes */
__int64 __fastcall sub_1401EBF50(_DWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-A8h]
  int v5; // [rsp+20h] [rbp-A8h]
  int v6; // [rsp+20h] [rbp-A8h]
  float v7; // [rsp+24h] [rbp-A4h]
  float v8; // [rsp+24h] [rbp-A4h]
  float v9; // [rsp+28h] [rbp-A0h]
  float v10; // [rsp+28h] [rbp-A0h]
  int v11; // [rsp+2Ch] [rbp-9Ch]
  int v12; // [rsp+30h] [rbp-98h]
  float v13; // [rsp+34h] [rbp-94h]
  float k; // [rsp+38h] [rbp-90h]
  float v15; // [rsp+3Ch] [rbp-8Ch]
  int i; // [rsp+40h] [rbp-88h]
  int j; // [rsp+40h] [rbp-88h]
  int m; // [rsp+40h] [rbp-88h]
  float v19; // [rsp+44h] [rbp-84h]
  float v20; // [rsp+48h] [rbp-80h]
  int v21; // [rsp+4Ch] [rbp-7Ch]
  float v22; // [rsp+50h] [rbp-78h]
  float v23; // [rsp+54h] [rbp-74h]
  float v24; // [rsp+58h] [rbp-70h]
  int v25; // [rsp+5Ch] [rbp-6Ch]
  int v26; // [rsp+60h] [rbp-68h]
  int v27; // [rsp+64h] [rbp-64h]
  float v28; // [rsp+68h] [rbp-60h]
  int v29; // [rsp+6Ch] [rbp-5Ch]
  int v30; // [rsp+70h] [rbp-58h]
  float v31; // [rsp+74h] [rbp-54h]
  int v32; // [rsp+78h] [rbp-50h]
  float v33; // [rsp+7Ch] [rbp-4Ch]
  float v34; // [rsp+80h] [rbp-48h]
  float v35; // [rsp+84h] [rbp-44h]
  float v36; // [rsp+88h] [rbp-40h]
  float v37; // [rsp+8Ch] [rbp-3Ch]
  float v38; // [rsp+90h] [rbp-38h]
  float v39; // [rsp+94h] [rbp-34h]
  float v40; // [rsp+98h] [rbp-30h]
  float v41; // [rsp+9Ch] [rbp-2Ch]
  int v42; // [rsp+A0h] [rbp-28h]
  float v43; // [rsp+A4h] [rbp-24h]
  float v44; // [rsp+A8h] [rbp-20h]
  float v45; // [rsp+ACh] [rbp-1Ch]
  float v46; // [rsp+B0h] [rbp-18h]

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
  MEMORY[0x1401FC920](a2, &a1[16 * (__int64)v4 + 1901]);
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

