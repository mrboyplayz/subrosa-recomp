/* Address: 0x1401bc940 | Name: sub_1401BC940 | Size: 1395 bytes */
__int64 __fastcall sub_1401BC940(_WORD *a1, __int64 a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-118h] BYREF
  int v5; // [rsp+20h] [rbp-F8h]
  int j; // [rsp+24h] [rbp-F4h]
  unsigned int v7; // [rsp+28h] [rbp-F0h]
  int v8; // [rsp+2Ch] [rbp-ECh]
  unsigned int v9; // [rsp+30h] [rbp-E8h]
  int v10; // [rsp+34h] [rbp-E4h]
  int v11; // [rsp+38h] [rbp-E0h]
  unsigned int v12; // [rsp+3Ch] [rbp-DCh]
  int v13; // [rsp+40h] [rbp-D8h]
  _BYTE *v14; // [rsp+48h] [rbp-D0h]
  int v15; // [rsp+50h] [rbp-C8h]
  int i; // [rsp+54h] [rbp-C4h]
  int v17; // [rsp+58h] [rbp-C0h]
  unsigned int v18; // [rsp+5Ch] [rbp-BCh]
  int v19; // [rsp+60h] [rbp-B8h]
  int v20; // [rsp+64h] [rbp-B4h]
  int v21; // [rsp+68h] [rbp-B0h]
  int v22; // [rsp+6Ch] [rbp-ACh]
  int v23; // [rsp+70h] [rbp-A8h]
  int v24; // [rsp+74h] [rbp-A4h]
  int v25; // [rsp+78h] [rbp-A0h]
  _QWORD v26[2]; // [rsp+80h] [rbp-98h]
  _BYTE v27[56]; // [rsp+90h] [rbp-88h] BYREF
  _BYTE v28[56]; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v29; // [rsp+100h] [rbp-18h]

  v26[0] = v27;
  v26[1] = v28;
  v9 = a3 >> 1;
  sub_1401DC340(a2, v27, v28, (unsigned int)(a3 >> 1));
  v14 = v27;
  v7 = word_140282900[0];
  v5 = sub_1401DC160(v27, (unsigned int)word_140282900[0], v9);
  if ( v5 >= 0 )
  {
    v8 = 0;
  }
  else
  {
    *a1 = 0;
    v14 = v28;
    v5 = sub_1401DC160(v28, v7, v9);
    v8 = 1;
  }
  j = 1;
  v17 = 0;
  v13 = 0;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v12 = word_140282900[j];
        v11 = sub_1401DC160(v14, v12, v9);
        if ( (v5 > 0 || v11 < v13) && (v5 < 0 || v11 > -v13) )
          break;
        v13 = v11 == 0;
        v10 = -256;
        for ( i = 0; i < 3; ++i )
        {
          v18 = (((_BYTE)v12 + (_BYTE)v7) & 1) + ((int)(v12 + v7) >> 1);
          v15 = sub_1401DC160(v14, v18, v9);
          if ( (v5 > 0 || v15 < 0) && (v5 < 0 || v15 > 0) )
          {
            v7 = v18;
            v5 = v15;
            v21 = 128;
            v10 += 128 >> i;
          }
          else
          {
            v12 = v18;
            v11 = v15;
          }
        }
        if ( v5 <= 0 )
          v20 = -v5;
        else
          v20 = v5;
        if ( v20 >= 0x10000 )
        {
          v23 = (v5 - v11) >> 5;
          v10 += v5 / v23;
        }
        else
        {
          v19 = v5 - v11;
          v22 = ((v5 - v11) >> 1) + 32 * v5;
          if ( v5 != v11 )
            v10 += v22 / v19;
        }
        a1[v8++] = sub_1401BE360((unsigned int)(v10 + (j << 8)), 0x7FFF);
        if ( v8 >= a3 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v29);
        v14 = (_BYTE *)v26[v8 & 1];
        v7 = word_140282900[j - 1];
        v5 = (1 - (v8 & 2)) << 12;
      }
      ++j;
      v7 = v12;
      v5 = v11;
      v13 = 0;
    }
    while ( j <= 128 );
    if ( ++v17 > 16 )
      break;
    v25 = 1;
    sub_1401BBEB0(a2, a3, 0x10000 - (1 << v17));
    sub_1401DC340(a2, v27, v28, v9);
    v14 = v27;
    v7 = word_140282900[0];
    v5 = sub_1401DC160(v27, (unsigned int)word_140282900[0], v9);
    if ( v5 >= 0 )
    {
      v8 = 0;
    }
    else
    {
      *a1 = 0;
      v14 = v28;
      v5 = sub_1401DC160(v28, v7, v9);
      v8 = 1;
    }
    j = 1;
  }
  v24 = a3 + 1;
  *a1 = 0x8000 / (a3 + 1);
  for ( j = 1; j < a3; ++j )
    a1[j] = *a1 + a1[j - 1];
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v29);
}

