/* Address: 0x1401f5760 | Name: sub_1401F5760 | Size: 264 bytes */
__int64 __fastcall sub_1401F5760(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // [rsp+0h] [rbp-18h]
  unsigned int v9; // [rsp+0h] [rbp-18h]

  v8 = a1;
  if ( a3 > 50 )
    v8 = a1 - (a3 - 50) * (40 * a2 + 20);
  if ( !a4 )
    v8 -= v8 / 12;
  v9 = (a6 + 90) * v8 / 100;
  if ( a5 == 1000 || a5 == 1001 )
  {
    if ( a6 < 2 )
      v9 = (int)(4 * v9) / 5;
    v9 -= (int)(a7 * v9) / (6 * a7 + 10);
  }
  else if ( a5 == 1002 )
  {
    if ( a6 < 5 )
      return (unsigned int)((int)(9 * v9) / 10);
  }
  else
  {
    v9 -= (int)(a7 * v9) / (12 * a7 + 20);
  }
  return v9;
}

