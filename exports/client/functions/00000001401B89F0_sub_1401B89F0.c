/* Address: 0x1401b89f0 | Name: sub_1401B89F0 | Size: 1655 bytes */
__int64 __fastcall sub_1401B89F0(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        float a14,
        int a15)
{
  int v16; // [rsp+20h] [rbp-88h] BYREF
  int i; // [rsp+24h] [rbp-84h]
  int v18; // [rsp+28h] [rbp-80h]
  float v19; // [rsp+2Ch] [rbp-7Ch]
  int v20; // [rsp+30h] [rbp-78h]
  float v21; // [rsp+34h] [rbp-74h]
  float v22; // [rsp+38h] [rbp-70h]
  unsigned int v23; // [rsp+3Ch] [rbp-6Ch]
  float v24; // [rsp+40h] [rbp-68h]
  float v25; // [rsp+44h] [rbp-64h]
  float v26; // [rsp+48h] [rbp-60h]
  int v27; // [rsp+4Ch] [rbp-5Ch]
  int v28; // [rsp+50h] [rbp-58h]
  int v29; // [rsp+54h] [rbp-54h]
  int v30; // [rsp+58h] [rbp-50h]
  int v31; // [rsp+5Ch] [rbp-4Ch]
  int v32; // [rsp+60h] [rbp-48h]
  int v33; // [rsp+64h] [rbp-44h]
  int v34; // [rsp+68h] [rbp-40h]
  int v35; // [rsp+6Ch] [rbp-3Ch]
  int v36; // [rsp+70h] [rbp-38h]
  float v37; // [rsp+74h] [rbp-34h]
  float v38; // [rsp+78h] [rbp-30h]
  float v39; // [rsp+7Ch] [rbp-2Ch]
  _DWORD v41[2]; // [rsp+88h] [rbp-20h]
  int v42; // [rsp+90h] [rbp-18h]
  float v43; // [rsp+94h] [rbp-14h]
  int v48; // [rsp+E0h] [rbp+38h]

  v23 = 0;
  v41[0] = 0;
  v41[1] = 0;
  if ( a7 + 3 <= a6 )
    sub_14019A450(a10, a13, 3);
  if ( a13 )
  {
    v21 = 0.0;
    v39 = 0.1499939;
  }
  else
  {
    v39 = flt_14027E488[a12];
    v21 = flt_14027E378[a12];
  }
  for ( i = a2; i < a3; ++i )
  {
    v18 = 0;
    do
    {
      v19 = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v18 + i));
      if ( *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v18 + i)) >= -9.0 )
        v24 = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v18 + i));
      else
        v24 = -9.0;
      v38 = v24;
      v37 = (float)(v19 - (float)(v21 * v24)) - *(float *)&v41[v18];
      v16 = (int)floor((float)(v37 + 0.5));
      if ( *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v18 + i)) >= -28.0 )
        v25 = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v18 + i));
      else
        v25 = -28.0;
      v26 = v25 - a14;
      if ( v16 < 0 && v26 > v19 )
      {
        v16 += (int)(float)(v26 - v19);
        if ( v16 > 0 )
          v16 = 0;
      }
      v42 = v16;
      v48 = sub_14019A0A0(a10);
      v20 = a6 - v48 - (a3 - i) * 3 * a11;
      if ( i != a2 && v20 < 30 )
      {
        if ( v20 < 24 )
        {
          if ( v16 <= 1 )
            v27 = v16;
          else
            v27 = 1;
          v16 = v27;
        }
        if ( v20 < 16 )
        {
          if ( v16 >= -1 )
            v28 = v16;
          else
            v28 = -1;
          v16 = v28;
        }
      }
      if ( a15 && i >= 2 )
      {
        if ( v16 >= 0 )
          v29 = 0;
        else
          v29 = v16;
        v16 = v29;
      }
      if ( a6 - v48 < 15 )
      {
        if ( a6 - v48 < 2 )
        {
          if ( a6 - v48 < 1 )
          {
            v16 = -1;
          }
          else
          {
            if ( v16 <= 0 )
              v36 = v16;
            else
              v36 = 0;
            v16 = v36;
            sub_14019A450(a10, -v36, 1);
          }
        }
        else
        {
          if ( v16 >= 1 )
            v32 = 1;
          else
            v32 = v16;
          if ( v32 >= -1 )
          {
            if ( v16 >= 1 )
              v33 = 1;
            else
              v33 = v16;
            v34 = v33;
          }
          else
          {
            v34 = -1;
          }
          v16 = v34;
          v35 = v34 < 0;
          sub_14019A4F0(a10, -v35 ^ (2 * v34), (__int64)&unk_14027E374, 2);
        }
      }
      else
      {
        if ( i >= 20 )
          v30 = 20;
        else
          v30 = i;
        v31 = 2 * v30;
        sub_1401B7F80(a10, &v16, *(unsigned __int8 *)(a8 + 2 * v30) << 7, *(unsigned __int8 *)(a8 + 2 * v30 + 1) << 6);
      }
      *(float *)(a9 + 4LL * (*(_DWORD *)(a1 + 8) * v18 + i)) = v37 - (float)v16;
      v23 += abs(v42 - v16);
      v22 = (float)v16;
      v43 = (float)((float)(v21 * v38) + *(float *)&v41[v18]) + (float)v16;
      *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v18 + i)) = v43;
      *(float *)&v41[v18] = (float)(*(float *)&v41[v18] + v22) - (float)(v39 * v22);
      ++v18;
    }
    while ( v18 < a11 );
  }
  if ( a15 )
    return 0;
  else
    return v23;
}

