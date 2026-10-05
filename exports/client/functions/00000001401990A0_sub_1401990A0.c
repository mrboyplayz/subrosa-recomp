/* Address: 0x1401990a0 | Name: sub_1401990A0 | Size: 220 bytes */
__int64 __fastcall sub_1401990A0(int a1, int a2, _DWORD *a3)
{
  int v4; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]

  v4 = 0;
LABEL_2:
  if ( v4 >= 1 )
  {
    if ( a3 )
      *a3 = -1;
    return 0;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 4 )
      {
        ++v4;
        goto LABEL_2;
      }
      if ( a1 == *(_DWORD *)*(&off_14027E0B8 + v4)
        && a2 << i == *((_DWORD *)*(&off_14027E0B8 + v4) + 11) * *((_DWORD *)*(&off_14027E0B8 + v4) + 12) )
      {
        break;
      }
    }
    if ( a3 )
      *a3 = 0;
    return (__int64)*(&off_14027E0B8 + v4);
  }
}

