/* Address: 0x1401ae1d0 | Name: sub_1401AE1D0 | Size: 380 bytes */
__int64 __fastcall sub_1401AE1D0(__int64 a1, __int64 a2, int a3, unsigned int a4, float a5, float a6, float a7)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-28h]
  float v9; // [rsp+4h] [rbp-24h]
  float v10; // [rsp+8h] [rbp-20h]
  float v11; // [rsp+Ch] [rbp-1Ch]
  float v12; // [rsp+10h] [rbp-18h]
  float v13; // [rsp+14h] [rbp-14h]

  v12 = *(float *)(a2 + 4LL * (-a3 - 2));
  v9 = *(float *)(a2 + 4LL * (-a3 - 1));
  v10 = *(float *)(a2 + 4LL * -a3);
  v11 = *(float *)(a2 + 4LL * (1 - a3));
  for ( i = 0; ; ++i )
  {
    result = a4;
    if ( i >= (int)a4 )
      break;
    v13 = *(float *)(a2 + 4LL * (i - a3 + 2));
    *(float *)(a1 + 4LL * i) = (float)((float)(*(float *)(a2 + 4LL * i) + (float)(a5 * v10))
                                     + (float)(a6 * (float)(v11 + v9)))
                             + (float)(a7 * (float)(v13 + v12));
    *(_DWORD *)(a1 + 4LL * i) = *(_DWORD *)(a1 + 4LL * i);
    v12 = v9;
    v9 = v10;
    v10 = v11;
    v11 = v13;
  }
  return result;
}

