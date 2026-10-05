/* Address: 0x1401bd8c0 | Name: sub_1401BD8C0 | Size: 1827 bytes */
void __fastcall sub_1401BD8C0(__int16 *a1, __int16 *a2, int a3)
{
  int v3; // [rsp+20h] [rbp-48h]
  int j; // [rsp+24h] [rbp-44h]
  int n; // [rsp+24h] [rbp-44h]
  int ii; // [rsp+24h] [rbp-44h]
  int k; // [rsp+28h] [rbp-40h]
  int m; // [rsp+28h] [rbp-40h]
  int v9; // [rsp+2Ch] [rbp-3Ch]
  int v10; // [rsp+2Ch] [rbp-3Ch]
  int v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+38h] [rbp-30h]
  int i; // [rsp+3Ch] [rbp-2Ch]
  int v15; // [rsp+44h] [rbp-24h]
  __int16 v16; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+4Ch] [rbp-1Ch]
  __int16 v18; // [rsp+50h] [rbp-18h]
  __int16 v19; // [rsp+54h] [rbp-14h]
  __int16 v20; // [rsp+58h] [rbp-10h]
  __int16 v21; // [rsp+5Ch] [rbp-Ch]

  for ( i = 0; i < 20; ++i )
  {
    v13 = *a1 - *a2;
    v3 = 0;
    for ( j = 1; j <= a3 - 1; ++j )
    {
      if ( a1[j] - (a2[j] + a1[j - 1]) < v13 )
      {
        v13 = a1[j] - (a2[j] + a1[j - 1]);
        v3 = j;
      }
    }
    if ( 0x8000 - (a2[a3] + a1[a3 - 1]) < v13 )
    {
      v13 = 0x8000 - (a2[a3] + a1[a3 - 1]);
      v3 = a3;
    }
    if ( v13 >= 0 )
      return;
    if ( v3 )
    {
      if ( v3 == a3 )
      {
        a1[a3 - 1] = 0x8000 - a2[a3];
      }
      else
      {
        v11 = 0;
        for ( k = 0; k < v3; ++k )
          v11 += a2[k];
        v12 = (a2[v3] >> 1) + v11;
        v9 = 0x8000;
        for ( m = a3; m > v3; --m )
          v9 -= a2[m];
        v10 = v9 - (a2[v3] >> 1);
        if ( v12 <= v10 )
        {
          if ( (((unsigned __int8)a1[v3] + (unsigned __int8)a1[v3 - 1]) & 1) + ((a1[v3] + a1[v3 - 1]) >> 1) <= v10 )
          {
            if ( (((unsigned __int8)a1[v3] + (unsigned __int8)a1[v3 - 1]) & 1) + ((a1[v3] + a1[v3 - 1]) >> 1) >= v12 )
              v17 = (((unsigned __int8)a1[v3] + (unsigned __int8)a1[v3 - 1]) & 1) + ((a1[v3] + a1[v3 - 1]) >> 1);
            else
              LOWORD(v17) = v12;
            v18 = v17;
          }
          else
          {
            v18 = v10;
          }
          v19 = v18;
        }
        else
        {
          if ( (((unsigned __int8)a1[v3] + (unsigned __int8)a1[v3 - 1]) & 1) + ((a1[v3] + a1[v3 - 1]) >> 1) <= v12 )
          {
            if ( (((unsigned __int8)a1[v3] + (unsigned __int8)a1[v3 - 1]) & 1) + ((a1[v3] + a1[v3 - 1]) >> 1) >= v10 )
              v15 = (((unsigned __int8)a1[v3] + (unsigned __int8)a1[v3 - 1]) & 1) + ((a1[v3] + a1[v3 - 1]) >> 1);
            else
              LOWORD(v15) = v10;
            v16 = v15;
          }
          else
          {
            v16 = v12;
          }
          v19 = v16;
        }
        a1[v3 - 1] = v19 - (a2[v3] >> 1);
        a1[v3] = a2[v3] + a1[v3 - 1];
      }
    }
    else
    {
      *a1 = *a2;
    }
  }
  if ( i == 20 )
  {
    sub_1401BD810((__int64)a1, a3);
    *a1 = sub_1401BE3A0((unsigned int)*a1, (unsigned int)*a2);
    for ( n = 1; n < a3; ++n )
    {
      if ( a2[n] + a1[n - 1] <= 0x7FFF )
      {
        if ( a2[n] + a1[n - 1] >= -32768 )
          v20 = a2[n] + a1[n - 1];
        else
          v20 = 0x8000;
        v21 = v20;
      }
      else
      {
        v21 = 0x7FFF;
      }
      a1[n] = sub_1401BE3A0((unsigned int)a1[n], (unsigned int)v21);
    }
    a1[a3 - 1] = sub_1401BE320((unsigned int)a1[a3 - 1], (unsigned int)(0x8000 - a2[a3]));
    for ( ii = a3 - 2; ii >= 0; --ii )
      a1[ii] = sub_1401BE320((unsigned int)a1[ii], (unsigned int)(a1[ii + 1] - a2[ii + 1]));
  }
}

