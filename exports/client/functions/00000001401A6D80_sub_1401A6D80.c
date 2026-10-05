/* Address: 0x1401a6d80 | Name: sub_1401A6D80 | Size: 272 bytes */
float __fastcall sub_1401A6D80(__int64 a1, int a2)
{
  int i; // [rsp+0h] [rbp-28h]
  float v4; // [rsp+4h] [rbp-24h]
  float v5; // [rsp+8h] [rbp-20h]
  float v6; // [rsp+Ch] [rbp-1Ch]
  float v7; // [rsp+10h] [rbp-18h]

  v4 = 0.0;
  v5 = 0.0;
  for ( i = 0; i < a2; ++i )
  {
    if ( v4 <= *(float *)(a1 + 4LL * i) )
      v6 = *(float *)(a1 + 4LL * i);
    else
      v6 = v4;
    v4 = v6;
    if ( *(float *)(a1 + 4LL * i) <= v5 )
      v7 = *(float *)(a1 + 4LL * i);
    else
      v7 = v5;
    v5 = v7;
  }
  if ( v4 <= (float)-v5 )
    return -v5;
  else
    return v4;
}

