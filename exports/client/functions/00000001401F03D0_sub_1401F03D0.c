/* Address: 0x1401f03d0 | Name: sub_1401F03D0 | Size: 285 bytes */
__int64 __fastcall sub_1401F03D0(int a1, int a2)
{
  int v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+24h] [rbp-14h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-10h]

  if ( a2 )
  {
    if ( a2 == 1 && a1 <= 8 && a1 >= 1 )
    {
      v4 = dword_140281E80[4 * a1 - 4];
      v3 = dword_140281E80[4 * a1 - 3];
    }
    else if ( a2 == 255 )
    {
      v4 = a1;
      v3 = 0;
    }
    else
    {
      if ( a2 != 2 )
        return 0;
      if ( !(unsigned int)sub_1401F63C0((unsigned int)a1, &v4, &v3) )
        return 0;
    }
  }
  else if ( a1 == 1 )
  {
    v4 = 1;
    v3 = 0;
  }
  else
  {
    if ( a1 != 2 )
      return 0;
    v4 = 1;
    v3 = 1;
  }
  v5 = sub_1401F0320(v4, v3);
  if ( a1 > 2 )
    v5 += 484 * a1;
  return v5;
}

