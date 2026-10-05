/* Address: 0x1401d5120 | Name: sub_1401D5120 | Size: 234 bytes */
__int64 __fastcall sub_1401D5120(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  switch ( a5 )
  {
    case 6:
      sub_1401DF7F0(a1, a2, a3, a4);
      break;
    case 8:
      sub_1401DF610(a1, a2, a3, a4);
      break;
    case 10:
      sub_1401DF3D0(a1, a2, a3, a4);
      break;
    case 12:
      sub_1401DF140(a1, a2, a3, a4);
      break;
    case 16:
      sub_1401DEE00(a1, a2, a3, a4);
      break;
  }
  return MEMORY[0x1401FCD30](a1, 0, 4LL * a5);
}

