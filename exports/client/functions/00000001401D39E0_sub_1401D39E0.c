/* Address: 0x1401d39e0 | Name: sub_1401D39E0 | Size: 280 bytes */
__int64 __fastcall sub_1401D39E0(__int64 a1, __int64 a2, int a3)
{
  int v4; // [rsp+0h] [rbp-18h]
  float v5; // [rsp+4h] [rbp-14h]
  float v6; // [rsp+8h] [rbp-10h]

  if ( a3 )
  {
    *(_BYTE *)(a1 + 4785) = 0;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 5760) + *(_DWORD *)(a1 + 4616);
    if ( (float)((float)((float)v4 * *(float *)(a2 + 708)) * 0.1) <= 2.0 )
    {
      if ( (float)((float)((float)v4 * *(float *)(a2 + 708)) * 0.1) >= 0.0 )
        v5 = (float)((float)v4 * *(float *)(a2 + 708)) * 0.1;
      else
        v5 = 0.0;
      v6 = v5;
    }
    else
    {
      v6 = 2.0;
    }
    *(_BYTE *)(a1 + 4785) = (int)v6;
  }
  *(float *)(a2 + 224) = (float)word_140282798[*(char *)(a1 + 4785)] / 16384.0;
  return a2;
}

