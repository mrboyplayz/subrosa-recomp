/* Address: 0x1401b32a0 | Name: sub_1401B32A0 | Size: 1554 bytes */
__int64 __fastcall sub_1401B32A0(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11,
        float a12,
        int a13,
        float a14,
        int a15,
        int a16,
        float a17,
        float a18)
{
  int v19; // [rsp+0h] [rbp-88h]
  int v20; // [rsp+0h] [rbp-88h]
  int v21; // [rsp+0h] [rbp-88h]
  int v22; // [rsp+4h] [rbp-84h]
  int v23; // [rsp+10h] [rbp-78h]
  int v24; // [rsp+14h] [rbp-74h]
  int v25; // [rsp+18h] [rbp-70h]
  int v26; // [rsp+1Ch] [rbp-6Ch]
  int v27; // [rsp+20h] [rbp-68h]
  float v28; // [rsp+28h] [rbp-60h]
  float v29; // [rsp+2Ch] [rbp-5Ch]
  float v30; // [rsp+30h] [rbp-58h]
  float v31; // [rsp+34h] [rbp-54h]
  int v32; // [rsp+3Ch] [rbp-4Ch]
  int v33; // [rsp+40h] [rbp-48h]
  int v34; // [rsp+44h] [rbp-44h]
  int v35; // [rsp+48h] [rbp-40h]
  int v36; // [rsp+4Ch] [rbp-3Ch]
  int v37; // [rsp+50h] [rbp-38h]
  int v38; // [rsp+54h] [rbp-34h]
  __int64 v40; // [rsp+60h] [rbp-28h]

  v33 = *(_DWORD *)(a1 + 8);
  v40 = *(_QWORD *)(a1 + 32);
  if ( a6 )
    v25 = a6;
  else
    v25 = *(_DWORD *)(a1 + 8);
  v22 = *(__int16 *)(v40 + 2LL * v25) << a4;
  if ( a7 == 2 )
  {
    if ( a8 >= v25 )
      v26 = v25;
    else
      v26 = a8;
    v22 += *(__int16 *)(v40 + 2LL * v26) << a4;
  }
  v19 = a3;
  if ( *(_DWORD *)a2 && *(float *)(a2 + 16) < 0.4 )
    v19 = a3 - (int)(float)((float)(8 * v22) * (float)(0.40000001 - *(float *)(a2 + 16)));
  if ( a7 == 2 )
  {
    if ( a8 >= v25 )
      v27 = v25;
    else
      v27 = a8;
    v23 = (*(__int16 *)(v40 + 2LL * v27) << a4) - v27;
    v29 = (float)(0.80000001 * (float)v23) / (float)v22;
    if ( a10 >= 1.0 )
      v28 = 1.0;
    else
      v28 = a10;
    if ( (float)((float)(v28 - 0.1) * (float)(8 * v23)) <= (float)(v29 * (float)v19) )
      v30 = (float)(v28 - 0.1) * (float)(8 * v23);
    else
      v30 = v29 * (float)v19;
    v19 -= (int)v30;
  }
  v20 = (int)(float)((float)(a12 - 0.044) * (float)(a11 - (19 << a4) + v19)) + a11 - (19 << a4) + v19;
  if ( *(_DWORD *)a2 && !a15 )
  {
    if ( (float)(*(float *)(a2 + 4) - 0.15000001) >= 0.0 )
      v31 = *(float *)(a2 + 4) - 0.15000001;
    else
      v31 = 0.0;
    v24 = (int)(float)((float)((float)(8 * v22) * 1.2) * (float)(v31 - 0.12)) + v20;
    if ( a13 )
      v24 += (int)(float)((float)(8 * v22) * 0.80000001);
    v20 = v24;
  }
  if ( a16 && !a15 )
  {
    if ( v20 / 4 <= (int)(float)(a17 * (float)(8 * v22)) + v20 )
      v32 = (int)(float)(a17 * (float)(8 * v22)) + v20;
    else
      v32 = v20 / 4;
    v20 = v32;
  }
  if ( (int)(float)((float)(8 * (*(__int16 *)(v40 + 2LL * (v33 - 2)) << a4) * a7) * a14) <= v20 >> 2 )
    v34 = v20 >> 2;
  else
    v34 = (int)(float)((float)(8 * (*(__int16 *)(v40 + 2LL * (v33 - 2)) << a4) * a7) * a14);
  if ( v20 >= v34 )
    v35 = v34;
  else
    v35 = v20;
  v21 = v35;
  if ( (!a16 || a15) && a9 )
    v21 = (int)(float)(0.67000002 * (float)(v35 - a3)) + a3;
  if ( !a16 && a12 < 0.2 )
  {
    if ( 96000 - a5 <= 32000 )
      v36 = 96000 - a5;
    else
      v36 = 32000;
    if ( v36 >= 0 )
    {
      if ( 96000 - a5 <= 32000 )
        v37 = 96000 - a5;
      else
        v37 = 32000;
      v38 = v37;
    }
    else
    {
      v38 = 0;
    }
    v21 += (int)(float)((float)(a18 * (float)(0.0000031 * (float)v38)) * (float)v21);
  }
  if ( 2 * a3 >= v21 )
    return (unsigned int)v21;
  else
    return (unsigned int)(2 * a3);
}

