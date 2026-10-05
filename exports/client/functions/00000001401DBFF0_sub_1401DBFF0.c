/* Address: 0x1401dbff0 | Name: sub_1401DBFF0 | Size: 158 bytes */
__int64 __fastcall sub_1401DBFF0(int *a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  v3 = a1[1528];
  a1[1528] = *(_DWORD *)(a2 + 44);
  if ( a1[1528] )
  {
    if ( v3 )
      a1[1529] = sub_1401BE3A0(7 - (unsigned int)((26214LL * a1[1154]) >> 16), 2u);
    else
      a1[1529] = 7;
  }
  return 0;
}

