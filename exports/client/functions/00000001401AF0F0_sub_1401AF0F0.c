/* Address: 0x1401af0f0 | Name: sub_1401AF0F0 | Size: 828 bytes */
__int64 __fastcall sub_1401AF0F0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  __int64 result; // rax
  int j; // [rsp+40h] [rbp-38h]
  int k; // [rsp+40h] [rbp-38h]
  int v11; // [rsp+44h] [rbp-34h]
  int v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+4Ch] [rbp-2Ch]
  int i; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+54h] [rbp-24h]
  int v17; // [rsp+58h] [rbp-20h]
  int v18; // [rsp+5Ch] [rbp-1Ch]

  v18 = *(_DWORD *)(a1 + 4);
  if ( a2 )
  {
    v11 = a2;
    v14 = *(_DWORD *)(a1 + 48);
    v17 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    v11 = 1;
    v14 = *(_DWORD *)(a1 + 48) << a7;
    v17 = *(_DWORD *)(a1 + 40) - a7;
  }
  v12 = 0;
  do
  {
    for ( i = 0; i < v11; ++i )
      sub_1401A1860(
        a1 + 80,
        a3 + 4LL * (v18 + v14 * v11) * v12 + 4LL * v14 * i,
        (float *)(a4 + 4LL * (v11 * v14 * v12 + i)),
        *(float **)(a1 + 72),
        v18,
        v17,
        v11);
    ++v12;
    result = a6;
  }
  while ( v12 < (int)a6 );
  if ( a6 == 2 && a5 == 1 )
  {
    for ( j = 0; ; ++j )
    {
      result = (unsigned int)(v14 * v11);
      if ( j >= (int)result )
        break;
      *(float *)(a4 + 4LL * j) = (float)(0.5 * *(float *)(a4 + 4LL * j))
                               + (float)(0.5 * *(float *)(a4 + 4LL * (j + v14 * v11)));
    }
  }
  if ( a8 != 1 )
  {
    v13 = 0;
    do
    {
      v16 = v14 * v11 / a8;
      for ( k = 0; k < v16; ++k )
        *(float *)(a4 + 4LL * (k + v14 * v11 * v13)) = *(float *)(a4 + 4LL * (k + v14 * v11 * v13)) * (float)a8;
      MEMORY[0x1401FCD30](a4 + 4LL * (v16 + v14 * v11 * v13++), 0, 4LL * (v14 * v11 - v16));
      result = a5;
    }
    while ( v13 < (int)a5 );
  }
  return result;
}

