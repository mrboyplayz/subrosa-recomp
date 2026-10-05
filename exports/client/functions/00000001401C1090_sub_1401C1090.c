/* Address: 0x1401c1090 | Name: sub_1401C1090 | Size: 592 bytes */
__int64 __fastcall sub_1401C1090(int *a1)
{
  if ( a1[2] != 8000
    && a1[2] != 12000
    && a1[2] != 16000
    && a1[2] != 24000
    && a1[2] != 32000
    && a1[2] != 44100
    && a1[2] != 48000
    || a1[5] != 8000 && a1[5] != 12000 && a1[5] != 16000
    || a1[3] != 8000 && a1[3] != 12000 && a1[3] != 16000
    || a1[4] != 8000 && a1[4] != 12000 && a1[4] != 16000
    || a1[4] > a1[5]
    || a1[3] < a1[5]
    || a1[4] > a1[3] )
  {
    return 4294967194LL;
  }
  if ( a1[6] != 10 && a1[6] != 20 && a1[6] != 40 && a1[6] != 60 )
    return 4294967193LL;
  if ( (unsigned int)a1[8] > 0x64 )
    return 4294967191LL;
  if ( (unsigned int)a1[12] >= 2 )
    return 4294967188LL;
  if ( (unsigned int)a1[13] >= 2 )
    return 4294967187LL;
  if ( (unsigned int)a1[10] >= 2 )
    return 4294967189LL;
  if ( *a1 < 1 || *a1 > 2 )
    return 4294967185LL;
  if ( a1[1] < 1 || a1[1] > 2 )
    return 4294967185LL;
  if ( a1[1] > *a1 )
    return 4294967185LL;
  if ( (unsigned int)a1[9] <= 0xA )
    return 0;
  return 4294967190LL;
}

