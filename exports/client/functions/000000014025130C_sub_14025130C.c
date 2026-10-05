/* Address: 0x14025130c | Name: sub_14025130C | Size: 161 bytes */
__int64 __fastcall sub_14025130C(int a1)
{
  int *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  if ( a1 == -2 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno() = 9;
  }
  else
  {
    if ( a1 >= 0
      && a1 < dword_140404A6C[19065657]
      && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a1 >> 6) + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) != 0 )
    {
      v5 = a1;
      v6 = a1;
      v2 = &v3;
      return sub_14025117C((__int64)&v4, (unsigned int *)&v6, &v2, (unsigned int *)&v5);
    }
    *(_DWORD *)sub_14024D19C() = 0;
    *errno() = 9;
    sub_14024CF6C();
  }
  return 0xFFFFFFFFLL;
}

