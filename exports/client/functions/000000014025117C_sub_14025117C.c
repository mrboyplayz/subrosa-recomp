/* Address: 0x14025117c | Name: sub_14025117C | Size: 113 bytes */
__int64 __fastcall sub_14025117C(__int64 a1, unsigned int *a2, int **a3, unsigned int *a4)
{
  unsigned int v6; // ebx

  sub_140261068(*a2);
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)**a3 >> 6) + 19065401] + 72LL * (**a3 & 0x3F) + 56) & 1) != 0 )
  {
    v6 = close_nolock();
  }
  else
  {
    *errno() = 9;
    v6 = -1;
  }
  sub_140261150(*a4);
  return v6;
}

