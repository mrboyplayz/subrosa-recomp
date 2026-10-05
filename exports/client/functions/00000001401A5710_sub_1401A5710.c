/* Address: 0x1401a5710 | Name: sub_1401A5710 | Size: 1370 bytes */
__int64 __fastcall sub_1401A5710(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        unsigned int a13,
        unsigned int a14)
{
  __int64 result; // rax
  float v15; // xmm0_4
  float v16; // xmm0_4
  __int64 v17; // r8
  float v18; // xmm0_4
  float v20; // [rsp+24h] [rbp-64h]
  int v21; // [rsp+28h] [rbp-60h]
  float v22; // [rsp+2Ch] [rbp-5Ch]
  float v23; // [rsp+30h] [rbp-58h]
  int i; // [rsp+34h] [rbp-54h]
  int j; // [rsp+3Ch] [rbp-4Ch]
  int v26; // [rsp+40h] [rbp-48h]
  float v27; // [rsp+44h] [rbp-44h]
  float v28; // [rsp+48h] [rbp-40h]
  float v29; // [rsp+4Ch] [rbp-3Ch]
  float v30; // [rsp+50h] [rbp-38h]
  float v31; // [rsp+54h] [rbp-34h]
  float v32; // [rsp+58h] [rbp-30h]
  float v33; // [rsp+5Ch] [rbp-2Ch]
  int v34; // [rsp+60h] [rbp-28h]
  signed int v35; // [rsp+64h] [rbp-24h]
  float v36; // [rsp+68h] [rbp-20h]
  __int64 v37; // [rsp+78h] [rbp-10h]

  while ( 1 )
  {
    result = a8;
    if ( a7 >= (int)a8 )
      break;
    v26 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (a7 + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a7);
    v35 = (unsigned int)sub_14019A1A0((unsigned int)(*(_DWORD *)(a12 + 4LL * a7) + 1), (unsigned int)v26) >> a4;
    v15 = exp(0.6931471805599453 * (float)(-0.125 * (float)v35));
    v31 = 0.5 * v15;
    v16 = sqrt((double)(v26 << a4));
    v36 = 1.0 / v16;
    v21 = 0;
    do
    {
      v34 = 0;
      v22 = *(float *)(a10 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * v21));
      v23 = *(float *)(a11 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * v21));
      if ( a5 == 1 )
      {
        if ( v22 <= *(float *)(a10 + 4LL * (a7 + *(_DWORD *)(a1 + 8))) )
          v27 = *(float *)(a10 + 4LL * (a7 + *(_DWORD *)(a1 + 8)));
        else
          v27 = *(float *)(a10 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * v21));
        v22 = v27;
        if ( v23 <= *(float *)(a11 + 4LL * (a7 + *(_DWORD *)(a1 + 8))) )
          v28 = *(float *)(a11 + 4LL * (a7 + *(_DWORD *)(a1 + 8)));
        else
          v28 = *(float *)(a11 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * v21));
        v23 = v28;
      }
      if ( v23 <= v22 )
        v29 = v23;
      else
        v29 = v22;
      if ( (float)(*(float *)(a9 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * v21)) - v29) >= 0.0 )
        v30 = *(float *)(a9 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * v21)) - v29;
      else
        v30 = 0.0;
      v18 = exp(0.6931471805599453 * (float)-v30);
      v20 = 2.0 * v18;
      if ( a4 == 3 )
        v20 = v20 * 1.4142135;
      if ( v20 <= v31 )
        v32 = v20;
      else
        v32 = v31;
      v37 = a2 + 4LL * a6 * v21 + 4LL * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a7) << a4);
      for ( i = 0; i < 1 << a4; ++i )
      {
        if ( ((1 << i) & *(unsigned __int8 *)(a3 + v21 + a5 * a7)) == 0 )
        {
          for ( j = 0; j < v26; ++j )
          {
            a13 = sub_1401A5C70(a13);
            if ( (a13 & 0x8000) != 0 )
              v33 = v32 * v36;
            else
              v33 = -(float)(v32 * v36);
            *(float *)(v37 + 4LL * (i + (j << a4))) = v33;
          }
          v34 = 1;
        }
      }
      if ( v34 )
        sub_1401A6800(v37, (unsigned int)(v26 << a4), v17, a14);
      ++v21;
    }
    while ( v21 < a5 );
    ++a7;
  }
  return result;
}

