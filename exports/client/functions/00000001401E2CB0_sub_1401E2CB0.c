/* Address: 0x1401e2cb0 | Name: sub_1401E2CB0 | Size: 204 bytes */
__int64 __fastcall sub_1401E2CB0(_BYTE *a1)
{
  unsigned int v2; // [rsp+0h] [rbp-18h]

  if ( (*a1 & 0x80) != 0 )
  {
    v2 = (((int)(unsigned __int8)*a1 >> 5) & 3) + 1102;
    if ( (((int)(unsigned __int8)*a1 >> 5) & 3) == 0 )
      return 1101;
  }
  else if ( (*a1 & 0x60) == 0x60 )
  {
    if ( (*a1 & 0x10) != 0 )
      return 1105;
    else
      return 1104;
  }
  else
  {
    return (((int)(unsigned __int8)*a1 >> 5) & 3u) + 1101;
  }
  return v2;
}

