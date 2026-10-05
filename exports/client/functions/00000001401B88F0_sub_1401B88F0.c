/* Address: 0x1401b88f0 | Name: sub_1401B88F0 | Size: 244 bytes */
float __fastcall sub_1401B88F0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int i; // [rsp+0h] [rbp-28h]
  int v8; // [rsp+4h] [rbp-24h]
  float v9; // [rsp+8h] [rbp-20h]
  float v10; // [rsp+Ch] [rbp-1Ch]

  v9 = 0.0;
  v8 = 0;
  do
  {
    for ( i = a3; i < a4; ++i )
    {
      v10 = *(float *)(a1 + 4LL * (a5 * v8 + i)) - *(float *)(a2 + 4LL * (a5 * v8 + i));
      v9 = v9 + (float)(v10 * v10);
    }
    ++v8;
  }
  while ( v8 < a6 );
  if ( v9 <= 200.0 )
    return v9;
  else
    return 200.0;
}

