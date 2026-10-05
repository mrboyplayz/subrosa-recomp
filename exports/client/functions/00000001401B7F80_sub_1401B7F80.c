/* Address: 0x1401b7f80 | Name: sub_1401B7F80 | Size: 489 bytes */
__int64 __fastcall sub_1401B7F80(__int64 a1, int *a2, unsigned int a3, unsigned int a4)
{
  int v5; // [rsp+20h] [rbp-38h]
  unsigned int v6; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+24h] [rbp-34h]
  int v8; // [rsp+24h] [rbp-34h]
  int i; // [rsp+2Ch] [rbp-2Ch]
  int v10; // [rsp+34h] [rbp-24h]
  int v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+3Ch] [rbp-1Ch]
  int v15; // [rsp+70h] [rbp+18h]
  unsigned int v16; // [rsp+70h] [rbp+18h]
  int v17; // [rsp+70h] [rbp+18h]

  v15 = a3;
  v7 = *a2;
  v5 = 0;
  if ( *a2 )
  {
    v10 = v7 < 0;
    v8 = -v10 ^ (v7 - v10);
    v6 = a3;
    v16 = sub_1401B82F0(a3, a4);
    for ( i = 1; v16 && i < v8; ++i )
    {
      v17 = 2 * v16;
      v6 += v17 + 2;
      v16 = (a4 * v17) >> 15;
    }
    if ( v16 )
    {
      v15 = v16 + 1;
      v5 = ((v10 - 1) & v15) + v6;
    }
    else
    {
      if ( v8 - i >= ((int)(0x8000 - v6 + v10) >> 1) - 1 )
        v11 = ((int)(0x8000 - v6 + v10) >> 1) - 1;
      else
        v11 = v8 - i;
      v5 = 2 * v11 - v10 + 1 + v6;
      if ( v5 == 0x8000 || v5 == 32767 )
        v12 = 0x8000 - v5;
      else
        v12 = 1;
      v15 = v12;
      *a2 = -v10 ^ (v11 + i - v10);
    }
  }
  return sub_14019A360(a1, v5, v15 + v5, 15);
}

