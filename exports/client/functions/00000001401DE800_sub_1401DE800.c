/* Address: 0x1401de800 | Name: sub_1401DE800 | Size: 729 bytes */
__int16 *__fastcall sub_1401DE800(__int16 *a1, __int64 a2, int a3, int a4)
{
  int v5; // [rsp+0h] [rbp-28h]
  int v6; // [rsp+4h] [rbp-24h]
  int i; // [rsp+8h] [rbp-20h]
  int v8; // [rsp+Ch] [rbp-1Ch]
  __int16 v9; // [rsp+10h] [rbp-18h]

  for ( i = 0; i < a3; i += a4 )
  {
    v6 = (12LL * (unsigned __int16)i) >> 16;
    v5 = word_140282170[4 * (11 - v6)] * *(__int16 *)(a2 + 2LL * (i >> 16) + 14)
       + word_140282170[4 * (11 - v6) + 1] * *(__int16 *)(a2 + 2LL * (i >> 16) + 12)
       + word_140282170[4 * (11 - v6) + 2] * *(__int16 *)(a2 + 2LL * (i >> 16) + 10)
       + word_140282170[4 * (11 - v6) + 3] * *(__int16 *)(a2 + 2LL * (i >> 16) + 8)
       + word_140282170[4 * v6 + 3] * *(__int16 *)(a2 + 2LL * (i >> 16) + 6)
       + word_140282170[4 * v6 + 2] * *(__int16 *)(a2 + 2LL * (i >> 16) + 4)
       + word_140282170[4 * v6 + 1] * *(__int16 *)(a2 + 2LL * (i >> 16) + 2)
       + word_140282170[4 * v6] * *(__int16 *)(a2 + 2LL * (i >> 16));
    if ( ((v5 >> 14) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v5 >> 14) + 1) >> 1 >= -32768 )
        v8 = ((v5 >> 14) + 1) >> 1;
      else
        LOWORD(v8) = 0x8000;
      v9 = v8;
    }
    else
    {
      v9 = 0x7FFF;
    }
    *a1++ = v9;
  }
  return a1;
}

