/* Address: 0x1401a5d70 | Name: sub_1401A5D70 | Size: 644 bytes */
__int64 __fastcall sub_1401A5D70(int a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  float v7; // xmm0_4
  float v8; // xmm0_4
  int v9; // r9d
  int i; // [rsp+30h] [rbp-28h]
  int j; // [rsp+34h] [rbp-24h]
  float v12; // [rsp+38h] [rbp-20h]
  float v13; // [rsp+40h] [rbp-18h]
  float v14; // [rsp+44h] [rbp-14h]
  int v17; // [rsp+68h] [rbp+10h]

  i = 0;
  result = (unsigned int)(2 * a5);
  if ( (int)result < a2 && a6 )
  {
    v13 = (float)(1.0 * (float)a2) / (float)(a5 * dword_1402821F0[a6 - 1] + a2);
    v14 = 0.5 * (float)(v13 * v13);
    v7 = cos((float)(1.5707964 * v14));
    v12 = v7;
    v8 = cos((float)(1.5707964 * (float)(1.0 - v14)));
    if ( a2 >= 8 * a4 )
    {
      for ( i = 1; (a4 >> 2) + a4 * (i + i * i) < a2; ++i )
        ;
    }
    v17 = sub_14019A1A0((unsigned int)a2, (unsigned int)a4);
    for ( j = 0; ; ++j )
    {
      result = (unsigned int)a4;
      if ( j >= a4 )
        break;
      if ( a3 >= 0 )
      {
        sub_1401BA120(a1 + 4 * v17 * j, v17, 1, v9, -v8);
        if ( i )
          sub_1401BA120(a1 + 4 * v17 * j, v17, i, v9, -v12);
      }
      else
      {
        if ( i )
          sub_1401BA120(a1 + 4 * v17 * j, v17, i, v9, LODWORD(v12));
        sub_1401BA120(a1 + 4 * v17 * j, v17, 1, v9, LODWORD(v8));
      }
    }
  }
  return result;
}

