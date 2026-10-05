/* Address: 0x1401bd1d0 | Name: sub_1401BD1D0 | Size: 1075 bytes */
__int64 __fastcall sub_1401BD1D0(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 result; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int j; // [rsp+20h] [rbp-48h]
  int k; // [rsp+20h] [rbp-48h]
  int m; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+24h] [rbp-44h]
  int i; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+2Ch] [rbp-3Ch]
  int v16; // [rsp+34h] [rbp-34h]
  int v17; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+3Ch] [rbp-2Ch]
  __int16 v19; // [rsp+4Ch] [rbp-1Ch]
  __int16 v20; // [rsp+50h] [rbp-18h]

  v18 = 0;
  for ( i = 0; i < 10; ++i )
  {
    v13 = 0;
    for ( j = 0; j < a5; ++j )
    {
      if ( *(int *)(a2 + 4LL * j) <= 0 )
        v15 = -*(_DWORD *)(a2 + 4LL * j);
      else
        v15 = *(_DWORD *)(a2 + 4LL * j);
      if ( v15 > v13 )
      {
        v13 = v15;
        v18 = j;
      }
    }
    v16 = a4 - a3 == 1 ? (v13 & 1) + (v13 >> 1) : ((v13 >> (a4 - a3 - 1)) + 1) >> 1;
    if ( v16 <= 0x7FFF )
      break;
    if ( v16 >= 163838 )
      v17 = 163838;
    else
      v17 = v16;
    sub_1401BBEB0(a2, a5, 65470 - ((v17 - 0x7FFF) << 14) / (((v18 + 1) * v17) >> 2));
  }
  if ( i == 10 )
  {
    for ( k = 0; ; ++k )
    {
      result = (unsigned int)a5;
      if ( k >= a5 )
        break;
      if ( a4 - a3 == 1 )
        v6 = (*(_DWORD *)(a2 + 4LL * k) & 1) + (*(int *)(a2 + 4LL * k) >> 1);
      else
        v6 = ((*(int *)(a2 + 4LL * k) >> (a4 - a3 - 1)) + 1) >> 1;
      if ( v6 <= 0x7FFF )
      {
        if ( a4 - a3 == 1 )
          v7 = (*(_DWORD *)(a2 + 4LL * k) & 1) + (*(int *)(a2 + 4LL * k) >> 1);
        else
          v7 = ((*(int *)(a2 + 4LL * k) >> (a4 - a3 - 1)) + 1) >> 1;
        if ( v7 >= -32768 )
        {
          if ( a4 - a3 == 1 )
            v8 = (*(_DWORD *)(a2 + 4LL * k) & 1) + (*(int *)(a2 + 4LL * k) >> 1);
          else
            v8 = ((*(int *)(a2 + 4LL * k) >> (a4 - a3 - 1)) + 1) >> 1;
          v19 = v8;
        }
        else
        {
          v19 = 0x8000;
        }
        v20 = v19;
      }
      else
      {
        v20 = 0x7FFF;
      }
      *(_WORD *)(a1 + 2LL * k) = v20;
      *(_DWORD *)(a2 + 4LL * k) = *(__int16 *)(a1 + 2LL * k) << (a4 - a3);
    }
  }
  else
  {
    for ( m = 0; ; ++m )
    {
      result = (unsigned int)a5;
      if ( m >= a5 )
        break;
      if ( a4 - a3 == 1 )
        v9 = (*(_DWORD *)(a2 + 4LL * m) & 1) + (*(int *)(a2 + 4LL * m) >> 1);
      else
        v9 = ((*(int *)(a2 + 4LL * m) >> (a4 - a3 - 1)) + 1) >> 1;
      *(_WORD *)(a1 + 2LL * m) = v9;
    }
  }
  return result;
}

