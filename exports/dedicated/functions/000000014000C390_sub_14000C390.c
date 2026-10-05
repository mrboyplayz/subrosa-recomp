/* Address: 0x14000c390 | Name: sub_14000C390 | Size: 105 bytes */
__int64 __fastcall sub_14000C390(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  char v5; // di
  char v6; // si
  int v7; // eax

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = sub_14000C480(a1, a2, a3, a4);
  if ( v7 == -1 )
    return 0;
  else
    return (unsigned int)dword_1661A26A8[6930 * v7 + 64 * (v5 & 7) + 8 * (v4 & 7) + (v6 & 7)];
}

