/* Address: 0x1400bc380 | Name: sub_1400BC380 | Size: 99 bytes */
__int64 __fastcall sub_1400BC380(int a1)
{
  unsigned int v1; // edx
  __int64 v2; // r8
  _DWORD *i; // rcx

  v1 = 0;
  v2 = 0;
  for ( i = (_DWORD *)((char *)&unk_191541A38 + 23492 * a1); ; i += 1116 )
  {
    if ( !*(i - 279) )
      return v1;
    if ( !*i )
      break;
    if ( !i[279] )
      return v1 + 2;
    if ( !i[558] )
      return v1 + 3;
    v2 += 4;
    v1 += 4;
    if ( v2 >= 16 )
      return v1;
  }
  return v1 + 1;
}

