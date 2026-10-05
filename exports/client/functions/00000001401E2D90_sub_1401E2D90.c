/* Address: 0x1401e2d90 | Name: sub_1401E2D90 | Size: 271 bytes */
__int64 __fastcall sub_1401E2D90(_BYTE *a1, int a2)
{
  int v4; // [rsp+0h] [rbp-18h]

  if ( (*a1 & 0x80) != 0 )
  {
    return (unsigned int)((a2 << (((int)(unsigned __int8)*a1 >> 3) & 3)) / 400);
  }
  else if ( (*a1 & 0x60) == 0x60 )
  {
    if ( (*a1 & 8) != 0 )
      return (unsigned int)(a2 / 50);
    else
      return (unsigned int)(a2 / 100);
  }
  else
  {
    v4 = ((int)(unsigned __int8)*a1 >> 3) & 3;
    if ( v4 == 3 )
      return (unsigned int)(60 * a2 / 1000);
    else
      return (unsigned int)((a2 << v4) / 100);
  }
}

