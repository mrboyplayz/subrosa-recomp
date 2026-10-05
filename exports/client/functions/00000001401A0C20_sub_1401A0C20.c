/* Address: 0x1401a0c20 | Name: sub_1401A0C20 | Size: 1714 bytes */
__int64 __fastcall sub_1401A0C20(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        int a8,
        int a9,
        __int64 a10,
        int a11)
{
  __int64 result; // rax
  int i; // [rsp+40h] [rbp-58h]
  float v13; // [rsp+44h] [rbp-54h]
  float v14; // [rsp+48h] [rbp-50h]
  float v15; // [rsp+4Ch] [rbp-4Ch]
  float v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+54h] [rbp-44h]
  int v18; // [rsp+58h] [rbp-40h]
  float v19; // [rsp+5Ch] [rbp-3Ch]
  float v20; // [rsp+60h] [rbp-38h]
  float v21; // [rsp+64h] [rbp-34h]
  float v22; // [rsp+68h] [rbp-30h]
  float v23; // [rsp+6Ch] [rbp-2Ch]
  float v24; // [rsp+70h] [rbp-28h]
  float v25; // [rsp+74h] [rbp-24h]
  float v26; // [rsp+78h] [rbp-20h]

  if ( a6 == 0.0 && a7 == 0.0 )
  {
    result = a1;
    if ( a2 != a1 )
      return MEMORY[0x1401FC920](a1, a2);
  }
  else
  {
    if ( a3 <= 15 )
      v17 = 15;
    else
      v17 = a3;
    if ( a4 <= 15 )
      v18 = 15;
    else
      v18 = a4;
    v24 = a6 * flt_140279B90[3 * a8];
    v25 = a6 * flt_140279B90[3 * a8 + 1];
    v26 = a6 * flt_140279B90[3 * a8 + 2];
    v23 = a7 * flt_140279B90[3 * a9];
    v22 = a7 * flt_140279B90[3 * a9 + 1];
    v21 = a7 * flt_140279B90[3 * a9 + 2];
    v16 = *(float *)(a2 + 4LL * (1 - v18));
    v15 = *(float *)(a2 + 4LL * -v18);
    v14 = *(float *)(a2 + 4LL * (-v18 - 1));
    v19 = *(float *)(a2 + 4LL * (-v18 - 2));
    if ( a6 == a7 && v17 == v18 && a8 == a9 )
      a11 = 0;
    for ( i = 0; i < a11; ++i )
    {
      v20 = *(float *)(a2 + 4LL * (i - v18 + 2));
      v13 = *(float *)(a10 + 4LL * i) * *(float *)(a10 + 4LL * i);
      *(float *)(a1 + 4LL * i) = (float)((float)((float)((float)((float)(*(float *)(a2 + 4LL * i)
                                                                       + (float)((float)((float)(1.0 - v13) * v24)
                                                                               * *(float *)(a2 + 4LL * (i - v17))))
                                                               + (float)((float)((float)(1.0 - v13) * v25)
                                                                       * (float)(*(float *)(a2 + 4LL * (i - v17 + 1))
                                                                               + *(float *)(a2 + 4LL * (i - v17 - 1)))))
                                                       + (float)((float)((float)(1.0 - v13) * v26)
                                                               * (float)(*(float *)(a2 + 4LL * (i - v17 + 2))
                                                                       + *(float *)(a2 + 4LL * (i - v17 - 2)))))
                                               + (float)((float)(v13 * v23) * v15))
                                       + (float)((float)(v13 * v22) * (float)(v16 + v14)))
                               + (float)((float)(v13 * v21) * (float)(v20 + v19));
      *(_DWORD *)(a1 + 4LL * i) = *(_DWORD *)(a1 + 4LL * i);
      v19 = v14;
      v14 = v15;
      v15 = v16;
      v16 = v20;
    }
    if ( a7 == 0.0 )
    {
      result = a1;
      if ( a2 != a1 )
        return MEMORY[0x1401FC920](a1 + 4LL * a11, a2 + 4LL * a11);
    }
    else
    {
      return sub_1401AE1D0((int)a1 + 4 * i, (int)a2 + 4 * i, v18, a5 - i, LODWORD(v23), LODWORD(v22), LODWORD(v21));
    }
  }
  return result;
}

