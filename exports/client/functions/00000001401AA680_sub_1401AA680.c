/* Address: 0x1401aa680 | Name: sub_1401AA680 | Size: 263 bytes */
__int64 __fastcall sub_1401AA680(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // [rsp+20h] [rbp-28h]
  unsigned int v7; // [rsp+24h] [rbp-24h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  int v10; // [rsp+30h] [rbp-18h]

  v7 = 2 * a1 - 1;
  if ( a5 && a1 == 2 )
    v7 = 2;
  v6 = sub_14019A1C0(a3 * v7 + a2, v7);
  if ( a2 - a4 - 32 >= v6 )
    v9 = v6;
  else
    v9 = a2 - a4 - 32;
  if ( v9 <= 64 )
    v10 = v9;
  else
    v10 = 64;
  if ( v10 >= 4 )
    return (unsigned int)(2 * (((word_140282B58[v10 & 7] >> (14 - (v10 >> 3))) + 1) >> 1));
  else
    return 1;
}

