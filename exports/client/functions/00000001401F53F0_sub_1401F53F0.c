/* Address: 0x1401f53f0 | Name: sub_1401F53F0 | Size: 310 bytes */
__int64 __fastcall sub_1401F53F0(int a1, int a2, int a3, int a4, int *a5, int a6)
{
  int v7; // [rsp+0h] [rbp-18h]
  int v8; // [rsp+4h] [rbp-14h]
  int v9; // [rsp+8h] [rbp-10h]
  int v10; // [rsp+Ch] [rbp-Ch]

  if ( !a1 || !a2 || a4 == 1002 )
    return 0;
  v10 = *a5;
  while ( 1 )
  {
    v7 = dword_140279DF8[2 * *a5 - 2202];
    v8 = dword_140279DF8[2 * *a5 - 2201];
    if ( a3 == 1 )
      v7 -= v8;
    if ( !a3 )
      v7 += v8;
    if ( a2 >= 25 )
      v9 = 25;
    else
      v9 = a2;
    if ( a6 > (int)((655LL * (125 - v9) * v7) >> 16) )
      return 1;
    if ( a2 <= 5 )
      return 0;
    if ( *a5 <= 1101 )
      break;
    --*a5;
  }
  *a5 = v10;
  return 0;
}

