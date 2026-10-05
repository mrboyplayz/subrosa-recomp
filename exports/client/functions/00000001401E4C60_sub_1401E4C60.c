/* Address: 0x1401e4c60 | Name: sub_1401E4C60 | Size: 129 bytes */
__int64 __fastcall sub_1401E4C60(_DWORD *a1)
{
  int i; // [rsp+0h] [rbp-18h]
  int v3; // [rsp+4h] [rbp-14h]

  v3 = a1[2] + a1[1];
  if ( v3 > 255 )
    return 0;
  for ( i = 0; i < *a1; ++i )
  {
    if ( *((unsigned __int8 *)a1 + i + 12) >= v3 && *((unsigned __int8 *)a1 + i + 12) != 255 )
      return 0;
  }
  return 1;
}

