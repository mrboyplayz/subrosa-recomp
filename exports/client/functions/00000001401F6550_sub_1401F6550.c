/* Address: 0x1401f6550 | Name: sub_1401F6550 | Size: 604 bytes */
__int64 __fastcall sub_1401F6550(int a1, _DWORD *a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 4:
      *a2 = 1;
      a2[1] = 3;
      a2[2] = 1;
      a2[3] = 3;
      return 12;
    case 3:
    case 5:
    case 6:
      *a2 = 1;
      a2[1] = 2;
      a2[2] = 3;
      a2[3] = 1;
      a2[4] = 3;
      a2[5] = 0;
      return 20;
    case 7:
      *a2 = 1;
      a2[1] = 2;
      a2[2] = 3;
      a2[3] = 1;
      a2[4] = 3;
      a2[5] = 2;
      a2[6] = 0;
      return 24;
    case 8:
      *a2 = 1;
      a2[1] = 2;
      a2[2] = 3;
      a2[3] = 1;
      a2[4] = 3;
      a2[5] = 1;
      a2[6] = 3;
      a2[7] = 0;
      return 28;
  }
  return result;
}

