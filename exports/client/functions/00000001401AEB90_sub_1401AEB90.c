/* Address: 0x1401aeb90 | Name: sub_1401AEB90 | Size: 1364 bytes */
__int64 __fastcall sub_1401AEB90(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int i; // [rsp+0h] [rbp-D8h] BYREF
  int v8; // [rsp+4h] [rbp-D4h]
  float v9; // [rsp+8h] [rbp-D0h]
  float v10; // [rsp+Ch] [rbp-CCh]
  float v11; // [rsp+10h] [rbp-C8h]
  float v12; // [rsp+14h] [rbp-C4h]
  float v13; // [rsp+18h] [rbp-C0h]
  float v14; // [rsp+1Ch] [rbp-BCh]
  float v15; // [rsp+20h] [rbp-B8h]
  int v16; // [rsp+24h] [rbp-B4h]
  float v17; // [rsp+28h] [rbp-B0h]
  float v18; // [rsp+2Ch] [rbp-ACh]
  float v19; // [rsp+30h] [rbp-A8h]
  float v20; // [rsp+34h] [rbp-A4h]
  float v21; // [rsp+38h] [rbp-A0h]
  int v22; // [rsp+3Ch] [rbp-9Ch]
  BOOL v23; // [rsp+40h] [rbp-98h]
  float v24[28]; // [rsp+50h] [rbp-88h]
  __int64 v25; // [rsp+C0h] [rbp-18h]

  v9 = 0.0;
  if ( a6 == 1 )
  {
    v24[a4] = *(float *)(a2 + 4LL * a4);
    for ( i = a4 + 1; i < a5; ++i )
    {
      if ( (float)(v24[i - 1] - 1.0) <= *(float *)(a2 + 4LL * i) )
        v10 = *(float *)(a2 + 4LL * i);
      else
        v10 = v24[i - 1] - 1.0;
      v24[i] = v10;
    }
  }
  else
  {
    if ( *(float *)(a2 + 4LL * a4) <= *(float *)(a2 + 4LL * (a3 + a4)) )
      v11 = *(float *)(a2 + 4LL * (a3 + a4));
    else
      v11 = *(float *)(a2 + 4LL * a4);
    v24[a4] = v11;
    for ( i = a4 + 1; i < a5; ++i )
    {
      if ( *(float *)(a2 + 4LL * i) <= *(float *)(a2 + 4LL * (a3 + i)) )
        v12 = *(float *)(a2 + 4LL * (a3 + i));
      else
        v12 = *(float *)(a2 + 4LL * i);
      if ( (float)(v24[i - 1] - 1.0) <= v12 )
      {
        if ( *(float *)(a2 + 4LL * i) <= *(float *)(a2 + 4LL * (a3 + i)) )
          v13 = *(float *)(a2 + 4LL * (a3 + i));
        else
          v13 = *(float *)(a2 + 4LL * i);
        v14 = v13;
      }
      else
      {
        v14 = v24[i - 1] - 1.0;
      }
      v24[i] = v14;
    }
  }
  for ( i = a5 - 2; i >= a4; --i )
  {
    if ( v24[i] <= (float)(v24[i + 1] - 1.0) )
      v15 = v24[i + 1] - 1.0;
    else
      v15 = v24[i];
    v24[i] = v15;
  }
  v8 = 0;
  do
  {
    if ( a4 >= 2 )
      v16 = a4;
    else
      v16 = 2;
    for ( i = v16; i < a5 - 1; ++i )
    {
      if ( *(float *)(a1 + 4LL * (a3 * v8 + i)) >= 0.0 )
        v17 = *(float *)(a1 + 4LL * (a3 * v8 + i));
      else
        v17 = 0.0;
      v19 = v17;
      if ( v24[i] >= 0.0 )
        v18 = v24[i];
      else
        v18 = 0.0;
      v20 = v18;
      if ( (float)(v19 - v18) >= 0.0 )
        v21 = v19 - v20;
      else
        v21 = 0.0;
      v9 = v9 + v21;
    }
    ++v8;
  }
  while ( v8 < a6 );
  if ( a4 >= 2 )
    v22 = a4;
  else
    v22 = 2;
  v23 = (float)(v9 / (float)((a5 - 1 - v22) * a6)) > 1.0;
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v25);
}

