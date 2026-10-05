/* Address: 0x1401ac060 | Name: sub_1401AC060 | Size: 1596 bytes */
__int64 __fastcall sub_1401AC060(
        int *a1,
        float *a2,
        signed int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        _DWORD *a8,
        int a9,
        __int64 a10,
        int a11)
{
  float v12; // xmm0_4
  int v13; // [rsp+50h] [rbp-58h]
  int j; // [rsp+50h] [rbp-58h]
  int i; // [rsp+54h] [rbp-54h]
  int k; // [rsp+54h] [rbp-54h]
  int m; // [rsp+54h] [rbp-54h]
  int v18; // [rsp+58h] [rbp-50h]
  unsigned int v19; // [rsp+60h] [rbp-48h]
  int v20; // [rsp+64h] [rbp-44h]
  signed int n; // [rsp+68h] [rbp-40h]
  int v22; // [rsp+6Ch] [rbp-3Ch]
  BOOL v23; // [rsp+70h] [rbp-38h]
  int v24; // [rsp+74h] [rbp-34h]
  int v30; // [rsp+D0h] [rbp+28h]
  int v31; // [rsp+D0h] [rbp+28h]

  v24 = 0;
  v18 = 0;
  v22 = *a1;
  v20 = a1[7];
  v23 = a5 == 1;
  v13 = sub_14019A1A0((unsigned int)a3, (unsigned int)a5);
  if ( a3 == 1 )
    return sub_1401AB360(a1, a2, nullptr, a4, a8);
  if ( v20 > 0 )
    v18 = v20;
  if ( a10 && a6 && (v18 || (v13 & 1) == 0 && v20 < 0 || a5 > 1) )
  {
    MEMORY[0x1401FC920](a10, a6);
    a6 = a10;
  }
  for ( i = 0; i < v18; ++i )
  {
    if ( v22 )
      sub_1401A3F20((__int64)a2, a3 >> i, 1 << i);
    if ( a6 )
      sub_1401A3F20(a6, a3 >> i, 1 << i);
    a11 = (4 * byte_140279B70[a11 >> 4]) | byte_140279B70[a11 & 0xF];
  }
  v30 = a5 >> v18;
  for ( j = v13 << v18; (j & 1) == 0 && v20 < 0; j >>= 1 )
  {
    if ( v22 )
      sub_1401A3F20((__int64)a2, j, v30);
    if ( a6 )
      sub_1401A3F20(a6, j, v30);
    a11 |= a11 << v30;
    v30 *= 2;
    ++v24;
    ++v20;
  }
  if ( v30 > 1 )
  {
    if ( v22 )
      sub_1401AA340((__int64)a2, j >> v18, v30 << v18, v23);
    if ( a6 )
      sub_1401AA340(a6, j >> v18, v30 << v18, v23);
  }
  v19 = sub_1401AB510((__int64)a1, a2, a3, a4, v30, a6, a7, a9, a11);
  if ( a1[1] )
  {
    if ( v30 > 1 )
      sub_1401AA4E0((__int64)a2, j >> v18, v30 << v18, v23);
    for ( k = 0; k < v24; ++k )
    {
      v30 >>= 1;
      j *= 2;
      v19 |= v19 >> v30;
      sub_1401A3F20((__int64)a2, j, v30);
    }
    for ( m = 0; m < v18; ++m )
    {
      v19 = byte_140279B80[v19];
      sub_1401A3F20((__int64)a2, a3 >> m, 1 << m);
    }
    v31 = v30 << v18;
    if ( a8 )
    {
      v12 = sqrt((double)a3);
      for ( n = 0; n < a3; ++n )
        *(float *)&a8[n] = v12 * a2[n];
    }
    v19 &= (1 << v31) - 1;
  }
  return v19;
}

