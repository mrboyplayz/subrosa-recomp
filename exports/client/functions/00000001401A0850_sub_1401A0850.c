/* Address: 0x1401a0850 | Name: sub_1401A0850 | Size: 128 bytes */
__int64 __fastcall sub_1401A0850(int a1)
{
  switch ( a1 )
  {
    case 8000:
      return 6;
    case 12000:
      return 4;
    case 16000:
      return 3;
    case 24000:
      return 2;
    default:
      return a1 == 48000;
  }
}

