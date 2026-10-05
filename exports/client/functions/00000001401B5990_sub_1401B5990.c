/* Address: 0x1401b5990 | Name: sub_1401B5990 | Size: 1081 bytes */
float __fastcall sub_1401B5990(int a1, int a2, unsigned int a3, _DWORD *a4)
{
  __int16 v5; // [rsp+0h] [rbp-38h]
  __int16 v6; // [rsp+0h] [rbp-38h]
  __int16 v7; // [rsp+0h] [rbp-38h]
  unsigned int v8; // [rsp+4h] [rbp-34h]
  unsigned int i; // [rsp+4h] [rbp-34h]
  unsigned int v10; // [rsp+4h] [rbp-34h]
  int v11; // [rsp+8h] [rbp-30h]
  int v12; // [rsp+8h] [rbp-30h]
  float v13; // [rsp+Ch] [rbp-2Ch]
  float v14; // [rsp+Ch] [rbp-2Ch]
  unsigned int v15; // [rsp+10h] [rbp-28h]
  __int16 v16; // [rsp+14h] [rbp-24h]
  __int16 v17; // [rsp+14h] [rbp-24h]
  __int64 v18; // [rsp+28h] [rbp-10h]
  unsigned int v21; // [rsp+48h] [rbp+10h]
  unsigned int v23; // [rsp+50h] [rbp+18h]
  unsigned int v24; // [rsp+50h] [rbp+18h]

  v13 = 0.0;
  while ( a1 > 2 )
  {
    if ( a2 < a1 )
    {
      v10 = *((_DWORD *)*(&off_14027E020 + a2) + a1);
      v15 = *((_DWORD *)*(&off_14027E020 + a2 + 1) + a1);
      if ( v10 <= a3 && a3 < v15 )
      {
        a3 -= v10;
        *a4++ = 0;
        goto LABEL_18;
      }
      v11 = -(a3 >= v15);
      v23 = a3 - (v11 & v15);
      v16 = a2;
      do
        i = *((_DWORD *)*(&off_14027E020 + --a2) + a1);
      while ( i > v23 );
    }
    else
    {
      v18 = (__int64)*(&off_14027E020 + a1);
      v8 = *(_DWORD *)(v18 + 4LL * (a2 + 1));
      v11 = -(a3 >= v8);
      v23 = a3 - (v11 & v8);
      v16 = a2;
      if ( *(_DWORD *)(v18 + 4LL * a1) <= v23 )
      {
        for ( i = *(_DWORD *)(v18 + 4LL * a2); i > v23; i = *(_DWORD *)(v18 + 4LL * a2) )
          --a2;
      }
      else
      {
        a2 = a1;
        do
          i = *((_DWORD *)*(&off_14027E020 + --a2) + a1);
        while ( i > v23 );
      }
    }
    a3 = v23 - i;
    v5 = v11 ^ (v11 + v16 - a2);
    *a4++ = v5;
    v13 = v13 + (float)((float)v5 * (float)v5);
LABEL_18:
    --a1;
  }
  v12 = -(a3 >= 2 * a2 + 1);
  v24 = a3 - (v12 & (2 * a2 + 1));
  v17 = a2;
  v21 = (v24 + 1) >> 1;
  if ( v21 )
    LOWORD(v24) = v24 - (2 * v21 - 1);
  v6 = v12 ^ (v12 + v17 - v21);
  *a4 = v6;
  v14 = v13 + (float)((float)v6 * (float)v6);
  v7 = -(__int16)v24 ^ (v21 - v24);
  a4[1] = v7;
  return v14 + (float)((float)v7 * (float)v7);
}

