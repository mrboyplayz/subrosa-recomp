/* Address: 0x1401f5e00 | Name: sub_1401F5E00 | Size: 272 bytes */
__int64 __fastcall sub_1401F5E00(int a1, int a2, int a3, int a4)
{
  int v6; // [rsp+10h] [rbp-28h]

  if ( 3 * ((200 - a3) * (40 * a4 + 20) + a2) / 2 / 1600 >= (40 * a4
                                                           + 20
                                                           + 240 * (8 * a1 - 2 * (40 * a4 + 20)) / (48000 / a3 + 240))
                                                          / 8 )
    v6 = (40 * a4 + 20 + 240 * (8 * a1 - 2 * (40 * a4 + 20)) / (48000 / a3 + 240)) / 8;
  else
    v6 = 3 * ((200 - a3) * (40 * a4 + 20) + a2) / 2 / 1600;
  if ( v6 <= 8 * a4 + 4 )
  {
    return 0;
  }
  else if ( v6 <= 257 )
  {
    return (unsigned int)v6;
  }
  else
  {
    return 257;
  }
}

