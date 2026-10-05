/* Address: 0x1401b8170 | Name: sub_1401B8170 | Size: 376 bytes */
__int64 __fastcall sub_1401B8170(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  int v4; // [rsp+20h] [rbp-28h]
  unsigned int v5; // [rsp+24h] [rbp-24h]
  unsigned int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+58h] [rbp+10h]

  v5 = 0;
  v6 = sub_14019ADB0(a1, 15);
  v4 = 0;
  if ( v6 >= a2 )
  {
    v5 = 1;
    v4 = a2;
    a2 = sub_1401B82F0(a2, a3) + 1;
    while ( a2 > 1 && v6 >= v4 + 2 * a2 )
    {
      v10 = 2 * a2;
      v4 += v10;
      a2 = ((a3 * (v10 - 2)) >> 15) + 1;
      ++v5;
    }
    if ( a2 <= 1 )
    {
      v5 += (v6 - v4) >> 1;
      v4 += 2 * ((v6 - v4) >> 1);
    }
    if ( v6 >= a2 + v4 )
      v4 += a2;
    else
      v5 = -v5;
  }
  if ( a2 + v4 >= 0x8000 )
    v7 = 0x8000;
  else
    v7 = a2 + v4;
  sub_14019AE70(a1, v4, v7, 0x8000);
  return v5;
}

