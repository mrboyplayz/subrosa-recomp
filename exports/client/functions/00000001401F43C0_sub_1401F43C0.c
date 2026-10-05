/* Address: 0x1401f43c0 | Name: sub_1401F43C0 | Size: 630 bytes */
__int64 __fastcall sub_1401F43C0(__int64 a1, int a2, __int64 a3, float *a4, int a5, int a6, int a7)
{
  int i; // [rsp+0h] [rbp-38h]
  int j; // [rsp+0h] [rbp-38h]
  float v10; // [rsp+4h] [rbp-34h]
  float v11; // [rsp+8h] [rbp-30h]
  float v12; // [rsp+Ch] [rbp-2Ch]
  float v13; // [rsp+10h] [rbp-28h]
  float v14; // [rsp+14h] [rbp-24h]
  float v15; // [rsp+18h] [rbp-20h]
  float v16; // [rsp+1Ch] [rbp-1Ch]
  float v17; // [rsp+20h] [rbp-18h]
  float v18; // [rsp+24h] [rbp-14h]
  float v19; // [rsp+28h] [rbp-10h]
  float v20; // [rsp+2Ch] [rbp-Ch]

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

