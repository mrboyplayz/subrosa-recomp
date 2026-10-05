/* Address: 0x1401f5530 | Name: sub_1401F5530 | Size: 540 bytes */
__int64 __fastcall sub_1401F5530(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // [rsp+0h] [rbp-28h]
  unsigned int v8; // [rsp+0h] [rbp-28h]
  int i; // [rsp+4h] [rbp-24h]
  int v10; // [rsp+8h] [rbp-20h]
  int v11; // [rsp+10h] [rbp-18h]
  int v12; // [rsp+30h] [rbp+8h]

  v12 = a1 / a6;
  v10 = a3 + 2 * a5 + 1;
  for ( i = 1; i < 7 && dword_140301FF0[5 * i] <= v12; ++i )
    ;
  if ( i == 7 )
  {
    v7 = (v12 - dword_140301FF0[30]) / 2 + dword_140301FF0[v10 + 30];
  }
  else
  {
    v11 = dword_140301FF0[5 * i - 5];
    v7 = ((v12 - v11) * dword_140301FF0[5 * i + v10] + (dword_140301FF0[5 * i] - v12) * dword_140301FF0[5 * i - 5 + v10])
       / (dword_140301FF0[5 * i] - v11);
  }
  if ( !a4 )
    v7 += 100;
  if ( a2 == 1104 )
    v7 += 300;
  v8 = a6 * v7;
  if ( a6 == 2 && v12 >= 12000 )
    v8 -= 1000;
  return v8;
}

